# Shared records, part 2 (r273 round 2, research only)

The companion of docs/object_struct.md (the game objects). Same method, same rules: a scripted census of every access
to a record in the matched C, the fields grouped and named with confidence and evidence, a draft C struct per record
(in a code block, **not applied**), the conflicts and the questions a game-memory check could settle. Nothing in src/
or include/ was changed. Snapshot: main = a75e323d (4 Nov 2026, 16:47), merged into this branch.

Records covered, with the functions that touch them:

| record | where | size | functions | accesses | section |
|---|---|---|---|---|---|
| Camera | 0x80126948 (main), 0x80126DB8 (blend), 0x80126E60 x3, 0x80114EE8 x3, 0x801201F8; `D_801151D4` points to the one in use | 0xA4 | 709 | 3 664 | 2 |
| Effect | 0x8011D030 x30 | 0x58 | 1 003 | 6 851 | 3.1 |
| Effect68 | 0x8011F9D0 x20 | 0x68 | 99 | 474 | 3.2 |
| Trail | 0x801ED6A8 + id * 0xC4 | 0xC4 | 3 | - | 3.3 |
| Work (with the model pool and the small-object pool inside it) | 0x800AF630 | 0xA444 | 1 218 | 2 315 | 4 |

Confidence: **H** an engine or EXE routine pins the meaning; **M** consistent use in several places; **L** offset, size
and a guess. "funcs" counts functions (the stg files repeat code across stages, so accesses overcount).

## 1. Method

`rec.py` (Appendix Z holds it in full; `python3 rec.py REPO SPEC.json OUT`, about 20 s) is the object census of the
first doc generalised to any record. A record is given by its instances (symbol, address, count, stride), the struct
type names that mean it, the globals that hold a pointer to it and the macros that expand to one. In each of the
29 040 function definitions it records:
* absolute symbols that fall inside an instance (`D_8012695C` is the main camera's +0x14), also as `&D_x`;
* `AF(&D_inst, T, off)`, `AF(D_ptr, T, off)`, `AF(v, T, off)` and `*(T *)(v + off)` with `v` a record pointer;
* typed access, `v->field`, `D_inst.field`, `D_inst[i].field`, `MACRO->field`, with offsets taken from the
  record's typedef (sub-fields of GsRVIEW2, SVECTOR, VECTOR, MATRIX, Fixed resolved);
* read / write / read-modify-write / address taken, and the declared type of absolute symbols (`s32(abs)`).
A pointer variable is the record when it is declared as the record's type, assigned from an instance's address, an
element of one, a pointer global or a macro; then over the call graph: a parameter whose callers all pass the record
(at least one, every plain argument), and an argument handed to such a parameter, until nothing changes.

## 2. Camera (0xA4)

**What is there already.** src/stage/engine.c defines `Camera` (0xA4) with its instances: the main camera at
0x80126948, three alternates at 0x80126E60 (`D_801150D6` 1-3 picks one), three saved at 0x80114EE8, one kept across
a map change at 0x801201F8 and the blend at 0x80126DB8; `D_801151D4` points to the camera used this frame. This
also answers open question 2 of docs/object_struct.md: 0x80126948 and 0x80126E60 are cameras.

**Who uses it.** 3 664 accesses in 709 functions. By instance: the main camera 2 691 accesses in 392 functions
(nearly all through absolute symbols such as `D_8012695C`, declared per stage file), pointers (`c`, `arg0`, `s`) 657
in 257, alternate 0 73 in 9, the map-change camera 34 in 2, saved 0 31 in 6, the rest under 20. Almost every stage
file has a camera set-up that writes the *target* half of each pair (+0x0C, +0x14, +0x20..+0x24, +0x2E..+0x32: about
300 functions each) and then calls func_8012A094 to snap the current half to it. About 150 functions take
the camera as a parameter (one or two per stage file, plus func_80174BBC / func_80174BF4): mostly behaviours, the
`update` pointer called with the camera every frame (engine.c:func_80129CF8) and set by func_8012A018 /
func_8012A048.

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x00 | void (*)(Camera *) | `update` | the behaviour, called each frame with the camera | H | engine.c:func_80129CF8, func_8012A048 |
| 0x04 | u8 | `mode` | the behaviour's step; behaviours dispatch on it (`D_80190B8C[c->mode]()`, 138 reads) | H | engine.c:func_8012A048; engine_801458E0.c:func_80174F28 |
| 0x05 | u8[3] | `pad05` | one byte write (sc04_000) | L | sc04_000.c:func_sc04_000_8017ED64 |
| 0x08 | s32 | `proj` | projection distance, GsSetProjection every frame (0x12C at boot) | H | engine.c:func_80129CF8; code_800123F0.c:InitDefaultView |
| 0x0C | s32 | `projTo` | its target (written by about 310 set-ups) | H | engine.c:func_8012A094 |
| 0x10 | s32 | `dist` | the distance from the followed point, eased toward +0x14 (0x578..0x708 in sc02_005) | M | engine.c:func_8012A094; sc02_005.c:func_sc02_005_8018118C |
| 0x14 | s32 | `distTo` | its target | M | engine.c:func_8012A094, func_8012A110 (0x5DC) |
| 0x18 | SVECTOR | `angle` | the view angles (vx 0x238 by default: the pitch), eased toward +0x20 | M | engine.c:func_8012A094, func_8012A110 |
| 0x20 | SVECTOR | `angleTo` | its target (+0x20 / +0x22 / +0x24 each written by about 300 set-ups) | M | engine.c:func_8012A094 |
| 0x28 | Vec3s | `ofs` | an offset (of the followed point), eased toward +0x2E | M | engine.c:func_8012A094, func_8012A110 |
| 0x2E | Vec3s | `ofsTo` | its target | M | engine.c:func_8012A094 |
| 0x34 | void * | `path` | a camera script / path handed to func_80175014 with the step at +0x38 | M | engine_801458E0.c:func_80174E9C (`D_8012697C = arg0`), func_80174F64 |
| 0x38 | u16 | `pathStep` | the step in it, bit 15 = finished (func_80174ED4 tests it) | M | engine_801458E0.c:func_80174F64, func_80174ED4 |
| 0x3A | u8[2] | `pad3A` | no access | - | - |
| 0x3C | GsRVIEW2 | `base` | the view before the offsets: vp (+0x3C..+0x44), vr (+0x48..+0x50), rz (+0x54), super (+0x58) | H | engine.c:func_80129CF8; code_800123F0.c:InitDefaultView |
| 0x5C | GsRVIEW2 | `rview` | base (of the blend camera) + offset, given to GsSetRefView2L; read back by 53 files (+0x5C..+0x64, the eye) | H | engine.c:func_80129CF8 |
| 0x7C | s32[7] | `offset` | added to base for rview (vpx, vpy, vpz, vrx, vry, vrz, rz) | H | engine.c:func_80129CF8 |
| 0x98 | u8[4] | `pad98` | no access | - | - |
| 0x9C | s32 | `unk9C` | cleared by the set-up (func_8012A048), written by a few behaviours | L | engine.c:func_8012A048, func_8012A1BC |
| 0xA0 | s16 | `unkA0` | cleared by the set-up; behaviours write it as a **byte** (42 u8 writes through absolute symbols) | L | engine.c:func_8012A048; sc03_107.c:func_sc03_107_8017CDD8 |
| 0xA2 | s16 | `unkA2` | as +0xA0 | L | engine.c:func_8012A048 |

Draft (the existing typedef with the census' additions):

```c
typedef struct Camera {
    /* 0x00 */ void (*update)(struct Camera *c);
    /* 0x04 */ u8 mode;                 /* the behaviour's step */
    /* 0x05 */ u8 pad05[3];
    /* 0x08 */ s32 proj;                /* current, eased toward projTo */
    /* 0x0C */ s32 projTo;
    /* 0x10 */ s32 dist;                /* was unk10 */
    /* 0x14 */ s32 distTo;              /* was unk14 */
    /* 0x18 */ SVECTOR angle;           /* was unk18 */
    /* 0x20 */ SVECTOR angleTo;         /* was unk20 */
    /* 0x28 */ Vec3s ofs;               /* was unk28 */
    /* 0x2E */ Vec3s ofsTo;             /* was unk2E */
    /* 0x34 */ void *path;              /* was pad34 */
    /* 0x38 */ u16 pathStep;            /* bit 15: finished */
    /* 0x3A */ u8 pad3A[2];
    /* 0x3C */ GsRVIEW2 base;
    /* 0x5C */ GsRVIEW2 rview;
    /* 0x7C */ s32 offset[7];
    /* 0x98 */ u8 pad98[4];
    /* 0x9C */ s32 unk9C;
    /* 0xA0 */ s16 unkA0;               /* also written as a byte */
    /* 0xA2 */ s16 unkA2;
} Camera; /* size 0xA4 */
```

**Conflicts.**
1. +0xA0: s16 in the typedef and in func_8012A048, u8 in 42 behaviour writes (`extern u8 D_801269E8`): a byte
   flag in an s16 slot, or two bytes (+0xA0 / +0xA1).
2. +0x34 is read as s32 (9, absolute) and as `u8 *` (4): one pointer.
3. The names +0x10..+0x32 are inferred from how the values are eased and their defaults; the routine that turns
   them into `base` is a behaviour (per stage), not the engine, so no single function fixes them (M, not H).
4. EXE code (code_800123F0.c:InitDefaultView, Init3DScene) writes the main camera by absolute address: the camera is a
   fixed address that the EXE knows, not part of a stage's own data.

**Open questions.** (1) What does each behaviour do with dist / angle / ofs (a dump of +0x10..+0x32 next to +0x3C..+0x58
while walking would show the formula)? (2) +0x9C / +0xA0 / +0xA2: log them during a cutscene camera. (3) Is the
path at +0x34 the same format as the actor animation scripts?

## 3. Effect records

There are **two effect pools and one trail record**, all in the engine's fixed area below the actor table:

| record | where | slots | stride | spawned by | owner at |
|---|---|---|---|---|---|
| `Effect` (small) | 0x8011D030 | 30 | 0x58 | func_80146A6C(kind, owner, x, y, z, d, e) via func_80146AFC; counted spawns func_80146994, func_801469C8 | +0x34 |
| `Effect68` (large) | 0x8011F9D0 | 20 (slots 0-7 and 8-19 are two sub-pools) | 0x68 | func_801466F0 via func_8014680C (slots 0-7) or func_80146750 (8-19); counted func_80146608, func_801466B4 | +0x4C |
| `Trail` | 0x801ED6A8 | indexed by id | 0xC4 | engine_801458E0.c around 0x80166xxx (func_80166F58 clears one) | - |

Both pools share the object header of docs/object_struct.md (kind +0x00, sub-state +0x02, position +0x04, model
+0x20; func_8014AC10 frees an effect's model as func_8012C218 frees an actor's). The 0x68 pool's owner at +0x4C
explains conflict 6 of the first doc: func_80163A94 / func_80163C2C / func_80163EC8 read a pointer at +0x4C and
fields at +0x58..+0x67, which are this pool's.

**A layout finding.** The actor table's base `D_80120194` (slot 0 "never handed out") lies inside this area: the 0x68
pool ends at 0x801201F0 and the map-change camera (section 2) occupies 0x801201F8..0x8012029C, so actor "slot 0"
(0x80120194..0x8012029F) overlaps the last effect slot and that camera. That is why slot 0 is never used: the
engine indexes the table from D_80120194 but the first real actor is D_801202A0. (The census shows 10 rows of
`D_80120194` falling in effect slot 19 at +0x0C; they are the actor-table references, not effect accesses.)

**Who uses them.** Small effects: 6 851 accesses in 1 003 functions (2 849 through the argument of the free function
func_80146C3C, 1 843 through parameters, 112 through spawn results, 2 026 weak: a pointer that reads an owner at +0x34
and nothing at or past 0x58). Large effects: 474 in 99 functions (399 weak, by the owner at +0x4C). This replaces the
first doc's lower bound (72 functions): an effect handler is recognised by freeing itself, which almost all do.

### 3.1 Effect (0x58)

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x00 | u16 | `kind` | effect kind (0x1B, 0x40, 0x2B, 2, 0x19, 0x11, 6, 0x12, 0x42 are the most spawned), 0 free | H | engine_801458E0.c:func_80146AFC, func_8016706C |
| 0x02 | u16 | `sub` | the handler's step (780 accesses) | H | engine_801458E0.c:func_80166054 |
| 0x04 | Fixed[3] | `pos` | position; set from the spawn, often copied from the owner | H | engine_801458E0.c:func_80146AFC, func_80166054 (func_80149374(owner, e + 4)) |
| 0x10 | s32[3] | `vel` | velocity (func_80166054: x, z from the owner's heading, y = -1.0); also read as six s16 by some kinds (+0x12: colour bytes in func_80166xxx) | M | engine_801458E0.c:func_80166054 |
| 0x1C | s32 | `timer` | the countdown (1 160 accesses, the busiest field) | H | engine_801458E0.c:func_80167540, func_80167714 |
| 0x20 | ModelObj * | `model` | | H | engine_801458E0.c:func_80166054, func_8014AC10 |
| 0x24 | s16[2] | `unk24` | per kind; func_80166054 hands `e + 0x24` to func_80128EA8 | L | engine_801458E0.c:func_80166054, func_8016AB6C |
| 0x28 | s16 | `unk28` | per kind (counter / id) | L | engine_801458E0.c:func_80168328 |
| 0x2A | u16 | `unk2A` | per kind: a countdown from a table (D_80190470) | L | engine_801458E0.c:func_8016829C |
| 0x2C | s32 | `arg0` | the spawner's d: a variant (0 / 2 / 3 select the direction in func_80166054) | H | engine_801458E0.c:func_80146AFC, func_80166054 |
| 0x30 | u32 | `arg1` | the spawner's e: an angle (low 12 bits) and a shift (bits 12-15) in func_80166054; a scale at +0x32 | H | engine_801458E0.c:func_80146AFC, func_80166054 |
| 0x34 | Obj * | `owner` | the spawning actor or Musashi | H | engine_801458E0.c:func_80146AFC, func_80166054 |
| 0x38 | MATRIX | `mtx` | a matrix (`AF(e, MATRIX, 0x38) = D_800AE620`); +0x4C..+0x54 its translation; some kinds keep a pointer at +0x38 instead | M | engine_801458E0.c:func_80167540, func_801670E4, func_80162B1C |

### 3.2 Effect68 (0x68)

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x00 | u16 | `kind` | | H | engine_801458E0.c:func_80146750, func_80146608 |
| 0x02 | u16 | `sub` | | H | ovl1c.c:func_ovl1c_800CB10C |
| 0x04 | Fixed[3] | `pos` | | H | engine_801458E0.c:func_80146750 |
| 0x10 | s32[3] | `vel` | | M | ovl19.c:func_ovl19_800CB4C8, ovl21.c:func_ovl21_800CB4A4 |
| 0x1C | s32 | `timer` | | M | ovl27.c:func_ovl27_800CB190 |
| 0x20 | ModelObj * | `model` | 87 accesses | H | engine_801458E0.c:func_801630C4 |
| 0x28 | s32 | `unk28` | read only (sc02_031) | L | sc02_031.c:func_sc02_031_8017DE3C |
| 0x4C | Obj * | `owner` | the spawn's second argument | H | engine_801458E0.c:func_80146750, func_8014680C |
| 0x50 | s32 | `arg0` | the spawn's f | H | engine_801458E0.c:func_80146750 |
| 0x54 | s32 | `arg1` | the spawn's g | H | engine_801458E0.c:func_80146750 |
| 0x58 | void * | `unk58` | a pointer (also read as s16 / AVec in places) | L | engine_801458E0.c:func_80163EC8 |
| 0x5A, 0x5C | s16 | `unk5A`, `unk5C` | read as s16 by one function; +0x5A overlaps the pointer at +0x58 (conflict 1) | L | engine_801458E0.c:func_80163EC8 |
| 0x60 | s16[3] | `scale` | 78 accesses at +0x60; a vector handed to the model | L | engine_801458E0.c:func_80163A94 |
| 0x66 | u16 | `unk66` | += 0x40 (an angle) | L | engine_801458E0.c:func_80163C2C, func_80163EC8 |

### 3.3 Trail (0xC4)

`p = &D_801ED6A8 + id * 0xC4`: +0x00 u8 active, +0x01 u8 head index (0..15, wraps), +0x02 u8 count (up to 15), +0x03
u8 width, then 16 entries of 12 bytes from +0x04: two s16 points (x, y, z each), the newest written at the head.
Used by engine_801458E0.c:func_80166690 (draws it), func_80166994 (adds a pair) and func_80166F58 (clears it). M (from those three functions only).

```c
typedef struct Effect {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 sub;
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];
    /* 0x1C */ s32 timer;
    /* 0x20 */ ModelObj *model;     /* = OBJ_HEADER of docs/object_struct.md */
    /* 0x24 */ s16 unk24[2];
    /* 0x28 */ s16 unk28;
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ s32 arg0;            /* func_80146A6C's d */
    /* 0x30 */ u32 arg1;            /* func_80146A6C's e */
    /* 0x34 */ struct Obj *owner;
    /* 0x38 */ MATRIX mtx;
} Effect; /* 0x58; D_8011D030[30] */

typedef struct Effect68 {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 sub;
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];
    /* 0x1C */ s32 timer;
    /* 0x20 */ ModelObj *model;
    /* 0x24 */ u8 pad24[4];
    /* 0x28 */ s32 unk28;
    /* 0x2C */ u8 pad2C[0x20];
    /* 0x4C */ struct Obj *owner;
    /* 0x50 */ s32 arg0;
    /* 0x54 */ s32 arg1;
    /* 0x58 */ void *unk58;
    /* 0x5C */ s16 unk5C[2];        /* +0x5A is read too: see conflicts */
    /* 0x60 */ s16 scale[3];
    /* 0x66 */ u16 unk66;
} Effect68; /* 0x68; D_8011F9D0[20], include/abil.h's AObj68 */

typedef struct {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 head;
    /* 0x02 */ u8 count;
    /* 0x03 */ u8 width;
    /* 0x04 */ struct { s16 a[3]; s16 b[3]; } pt[16];
} Trail; /* 0xC4; D_801ED6A8[] */
```

**Conflicts.** (1) Effect68 +0x58..+0x5F: a pointer at +0x58 in some functions, s16 at +0x5A and +0x5C in
func_80163EC8: per-kind use (the draft keeps the pointer and an s16 pair, which leaves +0x5A unnamed). (2) Effect
+0x38: MATRIX in most; the two engine functions that store a pointer there (`| 0x40000000`, `&D_8018EEBC`:
engine_801458E0.c:func_8015D01C, func_8015D414) are Musashi's routines (his hitData is at +0x38) that the weak seed
put here, so their rows in Appendix A are not effect accesses. (3) Effect +0x10..+0x1A
as s32 velocity or s16 halves, as with actors. (4) include/abil.h's `AObj68` is this pool (its loops count up as
the engine's do).

**Open questions.** (1) Where is the effect runner (the kind table that calls the handlers), EXE or stage? (2) Why
two sub-pools in the 0x68 pool (0-7, 8-19): who picks func_8014680C over func_80146750? (3) Trail +0x03: width or
colour? A dump of the trail while Musashi swings would show it.

## 4. Work, the EXE's system block (0x800AF630, 0xA444)

**What is there already.** include/work.h defines `Work` with the frame and mode fields named (+0x0000..+0x018A and
+0xA3A8..+0xA434) and everything from +0x018C to +0xA3A8 as one `pad18C`; code reaches it as `register Work *w`,
through the `WORK` macro, as `D_800AF630.field`, or by absolute symbols (`D_800B9A02` is +0xA3D2, `frame`).

**Who uses it.** 2 315 accesses in 1 218 functions (absolute symbols 1 745, typed 457, AF 57, raw 56): the state
block (+0xA3A8 on) 1 532 accesses in 946 functions, the display part (below +0x18C) 594 in 278, the "padding"
189 in 53. The most used fields: `wsm` +0x0018 (546, address taken by 271 functions: the world-to-screen matrix
handed to GTE set-up), `frame` +0xA3D2 (543 in 331 functions), +0xA3AA (402 in 350), `mapId` +0xA3D8 (149).

**The padding is the object memory.** The census and the allocators show what +0x018C..+0xA3A8 holds:

| off | what | size | evidence |
|---|---|---|---|
| 0x018C | screen parameters: width (u16), height (u16; halves are the screen centre), mode flags (u16), three s8 OT counters, a pointer at +0x198, u16 +0x19C, s16 +0x19E (a running sum: `+= D_80062BA0[vsyncMode]`) | 0x11C with what follows up to the model pool | code_800123F0.c:SetScreenMode, InitDisplay, func_800167B8; engine and stage code read the centre (`D_800AF7BC >> 1`) |
| 0x02A8 | **the model pool**: 192 `ModelObj` of 0x84 (to +0x65A8). func_8001CFDC(a, b) hands out the first free slot in [a, b); the per-frame update walks it in groups that `+0xA3E1` can switch off: slots 0-3, 4 (Musashi's model: `D_80126B78 = &D_800AFAE8`, +0x4B8), 5, 6-21, 22-37, 38-133 (actors: func_8012C1B8 asks for 0x26..0x85), 134-191 | 0x6300 | code_800123F0.c:func_8001CFDC, func_8001F9F8; engine.c:func_8012C1B8, func_8012C1DC (`D_800B3DF0`, slot 134, is "the end of the actor models") |
| 0x65A8 | **the small-object pool**: 256 objects of 0x38 (the "type 2" model object, to +0x9DA8); func_8001D074(a, b) hands out a slot; groups 0-3, 4-5, 6-21, 22-61, 62-125 (func_8012C194 asks for 0x3E..0x7D), 126-255, switched by the same flag byte | 0x3800 | code_800123F0.c:func_8001D074, func_8001D1C4; engine.c:func_8012C194; engine_801458E0.c:func_80161E08 writes fields of slots 0-3 by absolute address |
| 0x9DA8 | an image-load queue: 64 entries of 0x10 (`Ent10`, s16 flag first) | 0x400 | code_800123F0.c:func_80015310 |
| 0xA1A8 | a second queue: 32 entries of 0x10 | 0x200 | code_800123F0.c:ClearImageQueue |

And below +0x18C: `padF0` (0x5C bytes at +0x00F0) is a **third DRAWENV** (its `isbg` byte at +0x107 is set with
those of draw[0] and draw[1], +0x4F and +0xAB, by code_800123F0.c:func_80028694), and the 0x14 bytes at +0x0174 after
`disp[2]` are not touched.

**The state block, fields work.h does not name yet** (all by absolute symbol):

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0xA3E1 | u8 | `objUpdateMask` | bits 2..0x80 skip groups of the model and small-object pools in the per-frame update; 1 or 0xC0 written by modes (33 functions). work.h: `unkA3E1` | H | code_800123F0.c:func_8001F9F8, func_8001D1C4 |
| 0xA3E2 | u8 | `unkA3E2` | one write (ovl36) | L | ovl36.c:func_800CEF5C |
| 0xA3E5 | u8 | `pauseBlock` | 1: Start does not open the pause menu (written by 46 functions, mostly stage code around cutscenes); CheckPauseStart sets it when it opens the menu. work.h: `unkA3E5` | H | code_800123F0.c:CheckPauseStart, func_80028694 |
| 0xA3E6 | u8 | `pauseDefer` | nonzero: a Start press only sets pauseBlock | M | code_800123F0.c:CheckPauseStart |
| 0xA3E7 | u8 | `pauseAllowed` | 1 when the field can pause (with mapLive and no demo) | H | code_800123F0.c:CheckPauseStart |

Corrections to work.h's comments the census supports: `unkA3C4` (+0xA3C4) is never accessed by name; `stateFlag`
+0xA3C2 is read as both s16 and u16; +0xA3D8 `mapId` has its address taken 32 times (passed to the loader).

Draft (the middle of work.h's Work, the rest unchanged):

```c
typedef struct {
    /* 0x0000 */ PrimPool pool[2];
    /* 0x0018 */ MATRIX wsm;
    /* 0x0038 */ DRAWENV draw[3];         /* was draw[2] + padF0[0x5C] */
    /* 0x014C */ DISPENV disp[2];
    /* 0x0174 */ u8 pad174[0x14];
    /* 0x0188 */ u16 dispIdx;
    /* 0x018A */ u16 drawIdx;
    /* 0x018C */ u16 screenW;
    /* 0x018E */ u16 screenH;
    /* 0x0190 */ u16 screenFlags;
    /* 0x0192 */ s8 ot192[3];
    /* 0x0195 */ u8 pad195[3];
    /* 0x0198 */ void *unk198;
    /* 0x019C */ u16 unk19C;
    /* 0x019E */ s16 unk19E;
    /* 0x01A0 */ u8 pad1A0[0x108];
    /* 0x02A8 */ ModelObj models[192];     /* func_8001CFDC */
    /* 0x65A8 */ u8 smallObjs[256][0x38];  /* the 0x38-byte type-2 objects, func_8001D074 */
    /* 0x9DA8 */ u8 imageQueue[64][0x10];
    /* 0xA1A8 */ u8 imageQueue2[32][0x10];
    /* 0xA3A8 */ u16 tick;
    /* ... unchanged ... */
    /* 0xA3E1 */ u8 objUpdateMask;         /* was unkA3E1 */
    /* 0xA3E2 */ u8 unkA3E2;               /* was padA3E2 */
    /* 0xA3E3 */ u8 pauseMenu;
    /* 0xA3E4 */ u8 padA3E4;
    /* 0xA3E5 */ u8 pauseBlock;            /* was unkA3E5 */
    /* 0xA3E6 */ u8 pauseDefer;            /* was padA3E6[0] */
    /* 0xA3E7 */ u8 pauseAllowed;          /* was padA3E6[1] */
    /* 0xA3E8 */ s32 vsyncMode;
    /* ... unchanged ... */
} Work; /* 0xA444 */
```

**Conflicts.** (1) `models[192]` makes `Work` depend on `ModelObj` (include/game.h): the card has to order the
headers or keep the pool as bytes. (2) The first 4 small objects (+0x65A8..+0x6687) are written field by field by
absolute symbols of mixed types (u16, s16, u8 at the same relative offsets 0x38 apart: +0x65A8 / +0x65E0 / +0x6618
u16, +0x65B0 / +0x65E8 / +0x6620 s16 ...): the 0x38 object's fields, which need their own struct (with the model
object at +0xCC of an actor, docs/object_struct.md conflict 9). (3) Absolute symbols inside the pools (`D_800AFAE8`,
`D_800B3DF0`, `D_800B5D28` ...) are `extern u8[]` in the C; with the struct they become `&WORK->models[4]` and so on,
which changes the code only if the matched C relied on the separate symbol (check per site). (4) +0xA3E1 is written
both as u8 and through `(*(u8 *)&D_800B9A11)`, which is the same.

**Open questions.** (1) What do the model-pool groups hold (0-3, 5, 6-21, 22-37, 134-191)? A dump with the slot types
and their models would tell (Musashi's sword, effects, NPCs?). (2) The image queues' entries beyond the flag.
(3) +0x01A0..+0x02A7 (0x108 bytes) and +0x0174: untouched by the C; anything there in a dump?

## Appendix A. Census tables

### camera

| off | n | types | R / W / RW / & | funcs | files | example |
|---|---|---|---|---|---|---|
| 0x0000 | 7 | u8(abs) 4, void 3 | 2 / 1 / 0 / 4 | 6 | 2 | engine.c:func_80129CF8 |
| 0x0004 | 152 | u8 142, s8(abs) 10 | 138 / 11 / 2 / 1 | 150 | 140 | engine.c:func_8012A048 |
| 0x0005 | 1 | s8(abs) 1 | 0 / 1 / 0 / 0 | 1 | 1 | sc04_000.c:func_sc04_000_8017ED64 |
| 0x0008 | 97 | s32(abs) 86, s32 11 | 20 / 76 / 1 / 0 | 95 | 67 | code_800123F0.c:Init3DScene |
| 0x000C | 316 | s32(abs) 302, s32 14 | 4 / 312 / 0 / 0 | 311 | 140 | engine.c:func_8012A094 |
| 0x0010 | 71 | s32 52, s32(abs) 19 | 25 / 40 / 6 / 0 | 39 | 19 | engine.c:func_8012A094 |
| 0x0014 | 353 | s32(abs) 307, s32 46 | 6 / 347 / 0 / 0 | 339 | 138 | engine.c:func_8012A094 |
| 0x0018 | 19 | s16(abs) 11, s16 5, SVECTOR 3 | 3 / 16 / 0 / 0 | 15 | 9 | engine.c:func_8012A094 |
| 0x001A | 34 | s16 18, u16 9, s16(abs) 7 | 8 / 24 / 2 / 0 | 23 | 11 | engine.c:func_8012A110 |
| 0x001C | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine.c:func_8012A110 |
| 0x0020 | 328 | s16(abs) 315, s16 9, SVECTOR 3, u16 1 | 5 / 321 / 0 / 2 | 316 | 136 | engine.c:func_8012A094 |
| 0x0022 | 322 | s16(abs) 296, s16 17, u16 9 | 3 / 319 / 0 / 0 | 314 | 136 | engine.c:func_8012A110 |
| 0x0024 | 291 | s16(abs) 285, s16 6 | 0 / 290 / 0 / 1 | 291 | 136 | engine.c:func_8012A110 |
| 0x0028 | 13 | s16(abs) 8, s16 5 | 3 / 8 / 1 / 1 | 10 | 5 | engine.c:func_8012A094 |
| 0x002A | 13 | s16 11, s16(abs) 2 | 3 / 10 / 0 / 0 | 8 | 6 | engine.c:func_8012A094 |
| 0x002C | 17 | s16(abs) 11, s16 6 | 2 / 14 / 0 / 1 | 13 | 7 | engine.c:func_8012A094 |
| 0x002E | 305 | s16(abs) 295, s16 10 | 2 / 302 / 0 / 1 | 304 | 136 | engine.c:func_8012A094 |
| 0x0030 | 313 | s16(abs) 298, s16 15 | 3 / 310 / 0 / 0 | 308 | 136 | engine.c:func_8012A094 |
| 0x0032 | 313 | s16(abs) 302, s16 11 | 5 / 307 / 0 / 1 | 307 | 136 | engine.c:func_8012A094 |
| 0x0034 | 13 | s32(abs) 9, u8* 4 | 8 / 5 / 0 / 0 | 12 | 3 | engine_801458E0.c:func_80174E9C |
| 0x0038 | 32 | u16(abs) 16, u16 16 | 26 / 6 / 0 / 0 | 29 | 5 | engine_801458E0.c:func_80174E9C |
| 0x003C | 53 | s32 26, s32(abs) 25, GsRVIEW2 2 | 28 / 21 / 3 / 1 | 42 | 23 | code_800123F0.c:InitDefaultView |
| 0x0040 | 42 | s32 22, s32(abs) 20 | 21 / 20 / 1 / 0 | 35 | 21 | code_800123F0.c:InitDefaultView |
| 0x0044 | 46 | s32 26, s32(abs) 20 | 25 / 20 / 1 / 0 | 39 | 21 | code_800123F0.c:InitDefaultView |
| 0x0048 | 41 | s32(abs) 23, s32 18 | 18 / 20 / 3 / 0 | 34 | 15 | code_800123F0.c:InitDefaultView |
| 0x004C | 37 | s32(abs) 21, s32 16 | 16 / 20 / 1 / 0 | 30 | 15 | code_800123F0.c:InitDefaultView |
| 0x0050 | 40 | s32(abs) 20, s32 20 | 19 / 20 / 1 / 0 | 33 | 14 | code_800123F0.c:InitDefaultView |
| 0x0054 | 11 | s32 8, s32(abs) 3 | 5 / 6 / 0 / 0 | 5 | 4 | code_800123F0.c:InitDefaultView |
| 0x0058 | 2 | s32(abs) 1, void* 1 | 1 / 1 / 0 / 0 | 2 | 2 | code_800123F0.c:InitDefaultView |
| 0x005C | 84 | s32 73, s32(abs) 10, GsRVIEW2 1 | 82 / 1 / 0 / 1 | 82 | 53 | engine.c:func_80129CF8 |
| 0x0060 | 81 | s32 71, s32(abs) 10 | 80 / 1 / 0 / 0 | 80 | 53 | engine.c:func_80129CF8 |
| 0x0064 | 83 | s32 73, s32(abs) 10 | 82 / 1 / 0 / 0 | 82 | 53 | engine.c:func_80129CF8 |
| 0x0068 | 13 | s32 13 | 12 / 1 / 0 / 0 | 13 | 12 | engine.c:func_80129CF8 |
| 0x006C | 13 | s32 11, s32(abs) 2 | 12 / 1 / 0 / 0 | 13 | 12 | engine.c:func_80129CF8 |
| 0x0070 | 13 | s32 13 | 12 / 1 / 0 / 0 | 13 | 12 | engine.c:func_80129CF8 |
| 0x0074 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x0078 | 1 | void* 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x007C | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x0080 | 4 | s32(abs) 3, s32 1 | 1 / 3 / 0 / 0 | 3 | 2 | engine.c:func_80129CF8 |
| 0x0084 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x0088 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x008C | 4 | s32(abs) 3, s32 1 | 1 / 3 / 0 / 0 | 3 | 2 | engine.c:func_80129CF8 |
| 0x0090 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x0094 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine.c:func_80129CF8 |
| 0x009C | 19 | s32(abs) 13, s32 6 | 1 / 18 / 0 / 0 | 17 | 9 | engine.c:func_8012A048 |
| 0x009E | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 1 | 1 | sc05_018.c:func_sc05_018_8017FC74 |
| 0x00A0 | 52 | u8(abs) 42, s16 5, u8 3, s16(abs) 2 | 19 / 33 / 0 / 0 | 37 | 26 | engine.c:func_8012A048 |
| 0x00A2 | 6 | s16 4, s16(abs) 2 | 2 / 4 / 0 / 0 | 5 | 3 | engine.c:func_8012A048 |

### effect

| off | n | types | R / W / RW / & | funcs | files | example |
|---|---|---|---|---|---|---|
| 0x0000 | 30 | u16 19, s16 11 | 17 / 13 / 0 / 0 | 18 | 4 | engine_801458E0.c:func_80146AFC |
| 0x0002 | 780 | u16 726, s16 54 | 295 / 308 / 177 / 0 | 479 | 109 | engine_801458E0.c:func_80166054 |
| 0x0004 | 48 | s32 45, u16 3 | 2 / 7 / 39 / 0 | 46 | 39 | engine_801458E0.c:func_80169BBC |
| 0x0005 | 3 | u8 3 | 2 / 1 / 0 / 0 | 1 | 1 | sc05_008.c:func_sc05_008_8017D900 |
| 0x0006 | 333 | s16 197, u16 136 | 191 / 128 / 14 / 0 | 205 | 92 | engine_801458E0.c:func_80146AFC |
| 0x0008 | 28 | s32 18, s16 7, u16 3 | 8 / 19 / 1 / 0 | 16 | 13 | engine_801458E0.c:func_80162B1C |
| 0x000A | 415 | u16 313, s16 102 | 273 / 136 / 6 / 0 | 196 | 85 | engine_801458E0.c:func_80146AFC |
| 0x000C | 15 | s16 7, s32 5, u16 3 | 2 / 12 / 1 / 0 | 10 | 8 | engine_801458E0.c:func_80162B1C |
| 0x000E | 358 | s16 201, u16 157 | 226 / 131 / 1 / 0 | 202 | 86 | engine_801458E0.c:func_80146AFC |
| 0x0010 | 177 | s32 104, s16 64, u16 9 | 55 / 113 / 9 / 0 | 122 | 52 | engine_801458E0.c:func_80166054 |
| 0x0012 | 535 | u16 366, s16 166, u8 3 | 283 / 240 / 12 / 0 | 294 | 77 | engine_801458E0.c:func_801670E4 |
| 0x0014 | 317 | s32 145, u16 135, s16 37 | 146 / 156 / 15 / 0 | 179 | 70 | engine_801458E0.c:func_80166054 |
| 0x0016 | 269 | s16 150, u16 119 | 85 / 183 / 1 / 0 | 132 | 65 | engine_801458E0.c:func_80166438 |
| 0x0018 | 101 | s32 61, s16 37, u16 2, u8* 1 | 15 / 77 / 9 / 0 | 95 | 62 | engine_801458E0.c:func_80166054 |
| 0x001A | 147 | s16 121, u16 26 | 44 / 103 / 0 / 0 | 115 | 70 | engine_801458E0.c:func_80168BDC |
| 0x001C | 1160 | s32 1156, s16 3, u16 1 | 473 / 662 / 25 / 0 | 448 | 98 | engine_801458E0.c:func_80167540 |
| 0x001E | 3 | s16 2, u16 1 | 0 / 3 / 0 / 0 | 3 | 3 | sc07_002.c:func_sc07_002_8017E37C |
| 0x0020 | 323 | s32 154, u8* 97, void* 67, u16* 2, s16 1 | 145 / 178 / 0 / 0 | 314 | 92 | engine_801458E0.c:func_80146C3C |
| 0x0022 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | sc05_008.c:func_sc05_008_8017DAB8 |
| 0x0024 | 30 | s16 26, u16 4 | 16 / 12 / 2 / 0 | 18 | 10 | engine_801458E0.c:func_8016AB6C |
| 0x0026 | 8 | u16 4, s16 4 | 1 / 5 / 2 / 0 | 3 | 2 | engine_801458E0.c:func_8016AB6C |
| 0x0027 | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | ovl27.c:func_ovl27_800CB058 |
| 0x0028 | 46 | s16 31, u16 11, u8 4 | 23 / 8 / 15 / 0 | 30 | 19 | engine_801458E0.c:func_80168328 |
| 0x002A | 253 | u16 198, s16 55 | 160 / 92 / 1 / 0 | 126 | 45 | engine_801458E0.c:func_8016829C |
| 0x002C | 484 | s32 350, u16 82, s16 32, u32 20 | 442 / 39 / 3 / 0 | 349 | 88 | engine_801458E0.c:func_80146AFC |
| 0x002E | 3 | u16 2, s16 1 | 2 / 1 / 0 / 0 | 2 | 2 | sc05_008.c:func_sc05_008_8017DAB8 |
| 0x0030 | 372 | s32 315, u32 44, u8* 6, s16 3, u8 2 | 269 / 85 / 18 / 0 | 260 | 67 | engine_801458E0.c:func_80146AFC |
| 0x0032 | 2 | s16 1, u16 1 | 2 / 0 / 0 / 0 | 2 | 2 | engine_801458E0.c:func_80166054 |
| 0x0034 | 502 | u8* 233, void* 162, s32 67, s32* 28, u16* 5 | 434 / 68 / 0 / 0 | 458 | 99 | engine_801458E0.c:func_80146AFC |
| 0x0038 | 41 | AMtx 17, u16 13, MATRIX 10, s16 1 | 15 / 25 / 1 / 0 | 27 | 11 | engine_801458E0.c:func_80167540 |
| 0x003C | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | sc05_008.c:func_sc05_008_8017DAB8 |
| 0x0040 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | sc05_008.c:func_sc05_008_8017DAB8 |
| 0x0044 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | sc05_008.c:func_sc05_008_8017DAB8 |
| 0x0048 | 3 | s32 3 | 0 / 3 / 0 / 0 | 3 | 2 | engine_801458E0.c:func_80162B1C |
| 0x004C | 21 | s32 21 | 4 / 16 / 1 / 0 | 18 | 13 | engine_801458E0.c:func_80162B1C |
| 0x0050 | 21 | s32 21 | 4 / 16 / 1 / 0 | 18 | 13 | engine_801458E0.c:func_80162B1C |
| 0x0054 | 18 | s32 18 | 4 / 13 / 1 / 0 | 15 | 12 | engine_801458E0.c:func_801670E4 |

### effect68

| off | n | types | R / W / RW / & | funcs | files | example |
|---|---|---|---|---|---|---|
| 0x0000 | 6 | u16 6 | 4 / 2 / 0 / 0 | 4 | 1 | engine_801458E0.c:func_80146608 |
| 0x0002 | 6 | u16 5, s16 1 | 5 / 1 / 0 / 0 | 6 | 5 | ovl1c.c:func_ovl1c_800CB10C |
| 0x0004 | 9 | s32 9 | 0 / 9 / 0 / 0 | 9 | 9 | sc02_031.c:func_sc02_031_8017E358 |
| 0x0006 | 16 | s16 9, u16 7 | 5 / 9 / 2 / 0 | 14 | 8 | engine_801458E0.c:func_80146750 |
| 0x0008 | 9 | s32 9 | 0 / 9 / 0 / 0 | 9 | 9 | sc02_031.c:func_sc02_031_8017E358 |
| 0x000A | 33 | s16 26, u16 7 | 13 / 17 / 3 / 0 | 22 | 16 | engine_801458E0.c:func_80146750 |
| 0x000C | 19 | StageActor[](abs) 10, s32 9 | 3 / 9 / 0 / 7 | 18 | 10 | engine.c:func_8012C284 |
| 0x000E | 15 | s16 9, u16 6 | 5 / 9 / 1 / 0 | 13 | 8 | engine_801458E0.c:func_80146750 |
| 0x0010 | 16 | s32 13, ALVec 2, AVec 1 | 6 / 9 / 1 / 0 | 4 | 3 | ovl19.c:func_ovl19_800CB4C8 |
| 0x0014 | 13 | s32 13 | 3 / 9 / 1 / 0 | 3 | 2 | ovl21.c:func_ovl21_800CB4A4 |
| 0x0018 | 13 | s32 13 | 3 / 9 / 1 / 0 | 3 | 2 | ovl21.c:func_ovl21_800CB4A4 |
| 0x001C | 5 | s32 5 | 4 / 1 / 0 / 0 | 2 | 2 | ovl27.c:func_ovl27_800CB190 |
| 0x0020 | 87 | void* 49, u8* 33, s32 4, AModel* 1 | 64 / 23 / 0 / 0 | 73 | 27 | engine_801458E0.c:func_801630C4 |
| 0x0028 | 8 | s32 8 | 8 / 0 / 0 / 0 | 8 | 8 | sc02_031.c:func_sc02_031_8017DE3C |
| 0x002C | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine_801458E0.c:func_80163C2C |
| 0x004C | 71 | void* 33, u8* 27, u16* 8, s32 3 | 69 / 2 / 0 / 0 | 70 | 29 | engine_801458E0.c:func_80146750 |
| 0x0050 | 24 | s32 24 | 21 / 2 / 1 / 0 | 21 | 17 | engine_801458E0.c:func_80146750 |
| 0x0054 | 3 | s32 3 | 0 / 3 / 0 / 0 | 3 | 2 | engine_801458E0.c:func_80146750 |
| 0x0058 | 14 | u8* 9, s16 2, s32* 1, u16 1, AVec 1 | 11 / 3 / 0 / 0 | 13 | 12 | engine_801458E0.c:func_80163EC8 |
| 0x005A | 3 | s16 2, u16 1 | 2 / 1 / 0 / 0 | 2 | 2 | engine_801458E0.c:func_80163EC8 |
| 0x005C | 3 | s16 2, u16 1 | 2 / 1 / 0 / 0 | 2 | 2 | engine_801458E0.c:func_80163EC8 |
| 0x0060 | 78 | s16 68, u16 9, AVec 1 | 43 / 35 / 0 / 0 | 30 | 18 | engine_801458E0.c:func_80163A94 |
| 0x0062 | 11 | s16 6, u16 5 | 5 / 6 / 0 / 0 | 10 | 7 | engine_801458E0.c:func_80163A94 |
| 0x0064 | 6 | s16 5, u16 1 | 2 / 4 / 0 / 0 | 6 | 5 | engine_801458E0.c:func_80163A94 |
| 0x0066 | 4 | u16 3, s16 1 | 1 / 2 / 1 / 0 | 3 | 2 | engine_801458E0.c:func_80163C2C |
| 0x0067 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine_801458E0.c:func_80163EC8 |

### work

| off | n | types | R / W / RW / & | funcs | files | example |
|---|---|---|---|---|---|---|
| 0x0000 | 3 | PrimPool[] 3 | 3 / 0 / 0 / 0 | 1 | 1 | main.c:main |
| 0x0004 | 3 | S3[](abs) 3 | 3 / 0 / 0 / 0 | 1 | 1 | engine_801458E0.c:func_80175AB8 |
| 0x0018 | 546 | WMtx(abs) 363, MATRIX 183 | 18 / 1 / 0 / 527 | 271 | 76 | code_800123F0.c:func_80017E8C |
| 0x0038 | 9 | DRAWENV.tw 2, DRAWENV[] 2, DRAWENV 1, DRAWENV.ofs[0] 1, DRAWENV.ofs[1] 1 | 1 / 6 / 0 / 2 | 3 | 3 | code_800123F0.c:InitDrawDispEnvs |
| 0x004F | 2 | u8(abs) 2 | 0 / 2 / 0 / 0 | 1 | 1 | code_800123F0.c:func_80028694 |
| 0x0050 | 1 | u8(abs) 1 | 0 / 1 / 0 / 0 | 1 | 1 | ovl39.c:func_800CFFEC |
| 0x0094 | 7 | DRAWENV.tw 2, DRAWENV 1, DRAWENV.ofs[0] 1, DRAWENV.ofs[1] 1, DRAWENV.dtd 1 | 0 / 6 / 0 / 1 | 1 | 1 | code_800123F0.c:InitDrawDispEnvs |
| 0x00AB | 2 | u8(abs) 2 | 0 / 2 / 0 / 0 | 1 | 1 | code_800123F0.c:func_80028694 |
| 0x00AC | 1 | u8(abs) 1 | 0 / 1 / 0 / 0 | 1 | 1 | ovl39.c:func_800CFFEC |
| 0x0107 | 2 | u8(abs) 2 | 0 / 2 / 0 / 0 | 1 | 1 | code_800123F0.c:func_80028694 |
| 0x014C | 4 | DISPENV[] 3, DISPENV 1 | 0 / 0 / 0 / 4 | 3 | 2 | code_800123F0.c:InitDrawDispEnvs |
| 0x0160 | 2 | DISPENV 2 | 0 / 0 / 0 / 2 | 2 | 1 | code_800123F0.c:InitDrawDispEnvs |
| 0x0188 | 7 | u16 7 | 6 / 1 / 0 / 0 | 5 | 4 | code_800123F0.c:func_800168C4 |
| 0x018A | 5 | u16 5 | 3 / 1 / 1 / 0 | 1 | 1 | main.c:main |
| 0x018C | 33 | u16(abs) 33 | 29 / 3 / 0 / 1 | 23 | 17 | code_800123F0.c:SetScreenMode |
| 0x018E | 49 | u16(abs) 49 | 41 / 3 / 0 / 5 | 28 | 21 | code_800123F0.c:SetScreenMode |
| 0x0190 | 3 | u16(abs) 3 | 0 / 3 / 0 / 0 | 3 | 2 | code_800123F0.c:SetScreenMode |
| 0x0192 | 2 | s8(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | code_800123F0.c:InitDisplay |
| 0x0193 | 2 | s8(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | code_800123F0.c:InitDisplay |
| 0x0194 | 2 | s8(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | code_800123F0.c:InitDisplay |
| 0x0198 | 5 | u32* 2, s32(abs) 2, s32 1 | 2 / 3 / 0 / 0 | 3 | 2 | code_800123F0.c:func_8001C320 |
| 0x019C | 7 | u16 4, s16 2, u16(abs) 1 | 4 / 3 / 0 / 0 | 4 | 1 | code_800123F0.c:func_8001C044 |
| 0x019E | 25 | s16(abs) 20, u16 5 | 11 / 8 / 6 / 0 | 9 | 3 | code_800123F0.c:func_800167B8 |
| 0x02A8 | 2 | u8[](abs) 2 | 2 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001F9F8 |
| 0x04B8 | 4 | u8(abs) 4 | 0 / 0 / 0 / 4 | 2 | 1 | engine_801458E0.c:func_80145CEC |
| 0x053C | 1 | u8[](abs) 1 | 1 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001F9F8 |
| 0x05C0 | 1 | u8[](abs) 1 | 1 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001F9F8 |
| 0x0E00 | 1 | u8[](abs) 1 | 1 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001F9F8 |
| 0x1640 | 1 | u8[](abs) 1 | 1 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001F9F8 |
| 0x47C0 | 2 | u8[](abs) 2 | 2 / 0 / 0 / 0 | 2 | 2 | code_800123F0.c:func_8001F9F8 |
| 0x65A8 | 2 | u16(abs) 2 | 2 / 0 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65B0 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65B2 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65CF | 2 | u8(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65D4 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65E0 | 2 | u16(abs) 2 | 2 / 0 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65E8 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x65EA | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x6607 | 2 | u8(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x660C | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x6618 | 2 | u16(abs) 2 | 2 / 0 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x6620 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x6622 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x6644 | 2 | s16(abs) 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine_801458E0.c:func_80161E08 |
| 0x6688 | 4 | u8[](abs) 4 | 2 / 0 / 0 / 2 | 2 | 2 | code_800123F0.c:func_8001D1C4 |
| 0x668C | 1 | s32(abs) 1 | 0 / 0 / 1 / 0 | 1 | 1 | engine_801458E0.c:func_80162870 |
| 0x66AF | 1 | s8(abs) 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine_801458E0.c:func_80162870 |
| 0x66BC | 1 | void*(abs) 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine_801458E0.c:func_80162870 |
| 0x66F8 | 2 | u8[](abs) 2 | 2 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001D1C4 |
| 0x6A78 | 2 | u8[](abs) 2 | 2 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001D1C4 |
| 0x7338 | 2 | u8[](abs) 2 | 2 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001D1C4 |
| 0x8138 | 2 | u8[](abs) 2 | 2 / 0 / 0 / 0 | 1 | 1 | code_800123F0.c:func_8001D1C4 |
| 0x9DA8 | 2 | Ent10[](abs) 2 | 2 / 0 / 0 / 0 | 2 | 1 | code_800123F0.c:func_80015310 |
| 0xA1A8 | 4 | Ent10[](abs) 4 | 4 / 0 / 0 / 0 | 4 | 1 | code_800123F0.c:ClearImageQueue |
| 0xA3A8 | 43 | u16(abs) 39, u16 4 | 42 / 0 / 1 / 0 | 34 | 20 | main.c:main |
| 0xA3AA | 402 | u16(abs) 370, u16 32 | 384 / 1 / 1 / 16 | 350 | 115 | main.c:ModeTitleLoad |
| 0xA3AC | 19 | u16(abs) 18, u16 1 | 17 / 0 / 1 / 1 | 19 | 11 | main.c:main |
| 0xA3AE | 3 | u16 3 | 2 / 1 / 0 / 0 | 3 | 1 | main.c:ModeDispatch |
| 0xA3B0 | 2 | u16 2 | 0 / 2 / 0 / 0 | 2 | 1 | main.c:NextMode |
| 0xA3B4 | 16 | u16 13, u16(abs) 3 | 13 / 3 / 0 / 0 | 12 | 7 | main.c:ModeDemoRun |
| 0xA3B6 | 20 | u16 17, u16(abs) 3 | 3 / 17 / 0 / 0 | 14 | 6 | main.c:ModeLicenceRun |
| 0xA3B8 | 22 | s16 16, u16(abs) 5, u16 1 | 4 / 15 / 3 / 0 | 12 | 5 | main.c:ModeTitleRun |
| 0xA3BA | 6 | u16 6 | 1 / 5 / 0 / 0 | 6 | 1 | main.c:NextMode |
| 0xA3BC | 6 | u16 6 | 0 / 6 / 0 / 0 | 6 | 1 | main.c:NextMode |
| 0xA3BE | 5 | s16 3, u16 2 | 0 / 4 / 1 / 0 | 5 | 2 | main.c:NextMode |
| 0xA3C0 | 9 | u16 5, u16(abs) 4 | 8 / 1 / 0 / 0 | 8 | 4 | main.c:NextGameState |
| 0xA3C2 | 5 | u16 2, s16 2, s16(abs) 1 | 1 / 4 / 0 / 0 | 5 | 3 | main.c:NextGameState |
| 0xA3C6 | 16 | u16(abs) 11, u16 3, s16 2 | 12 / 4 / 0 / 0 | 14 | 3 | main.c:NextGameState |
| 0xA3C8 | 5 | u16 3, s16 2 | 0 / 5 / 0 / 0 | 5 | 1 | main.c:NextGameState |
| 0xA3CA | 3 | u16 2, s16 1 | 0 / 3 / 0 / 0 | 3 | 1 | main.c:NextGameState |
| 0xA3CC | 8 | u16 5, s16 2, u16(abs) 1 | 2 / 6 / 0 / 0 | 8 | 2 | main.c:NextGameState |
| 0xA3CE | 7 | u16 5, s16 2 | 0 / 7 / 0 / 0 | 7 | 1 | main.c:NextGameState |
| 0xA3D0 | 8 | u16 3, s16(abs) 3, s16 2 | 1 / 6 / 1 / 0 | 8 | 3 | main.c:NextGameState |
| 0xA3D2 | 543 | u16(abs) 429, u16 114 | 453 / 1 / 0 / 89 | 331 | 126 | code_800123F0.c:DrawDebugText |
| 0xA3D4 | 5 | u16 4, s16(abs) 1 | 1 / 4 / 0 / 0 | 4 | 2 | code_800123F0.c:ResetFrameLoop |
| 0xA3D8 | 149 | s16(abs) 126, s16 19, u16 4 | 112 / 5 / 0 / 32 | 95 | 54 | main.c:ModeTitleRun |
| 0xA3DA | 21 | s16(abs) 14, s16 7 | 15 / 6 / 0 / 0 | 18 | 15 | main.c:ModeTitleRun |
| 0xA3DC | 5 | s16 4, u16(abs) 1 | 4 / 1 / 0 / 0 | 2 | 2 | engine_80144B9C.c:func_80144B9C |
| 0xA3DE | 23 | s16(abs) 21, s16 2 | 16 / 5 / 0 / 2 | 17 | 5 | engine_8013B568.c:func_8013B83C |
| 0xA3E0 | 12 | u8(abs) 8, u8 4 | 3 / 8 / 0 / 1 | 9 | 6 | code_800123F0.c:CheckPauseStart |
| 0xA3E1 | 33 | s8(abs) 27, u8 6 | 4 / 21 / 0 / 8 | 33 | 20 | code_800123F0.c:DrawDebugText |
| 0xA3E2 | 1 | u8(abs) 1 | 0 / 1 / 0 / 0 | 1 | 1 | ovl36.c:func_800CEF5C |
| 0xA3E3 | 25 | u8(abs) 23, u8 2 | 7 / 18 / 0 / 0 | 23 | 15 | code_800123F0.c:CheckPauseStart |
| 0xA3E5 | 54 | s8(abs) 52, u8 2 | 3 / 50 / 0 / 1 | 46 | 12 | code_800123F0.c:CheckPauseStart |
| 0xA3E6 | 2 | u8(abs) 2 | 2 / 0 / 0 / 0 | 2 | 2 | code_800123F0.c:CheckPauseStart |
| 0xA3E7 | 16 | u8(abs) 16 | 1 / 14 / 0 / 1 | 15 | 4 | code_800123F0.c:CheckPauseStart |
| 0xA3E8 | 25 | s32 15, s32(abs) 10 | 14 / 11 / 0 / 0 | 21 | 8 | code_800123F0.c:ResetFrameLoop |
| 0xA434 | 13 | u8(abs) 7, s8 6 | 6 / 6 / 0 / 1 | 12 | 4 | code_800123F0.c:CheckPauseStart |

## Appendix Z. The record census script

```python
#!/usr/bin/env python3
"""Record census (r273 round 2): every access to one shared record, however the C reaches it.

usage: rec.py REPO SPEC.json OUT
SPEC: {"name": "camera",
       "instances": [["D_80126948", "0x80126948", 1, "0xA4"], ...],   # symbol, address, count, stride
       "types": ["Camera"],                  # struct type names whose pointers / objects are this record
       "ptr_globals": ["D_801151D4"],        # globals that hold a pointer to the record
       "macros": {"WORK": "0x800AF630"},     # macros that expand to a pointer to an instance
       "size": "0xA4"}
Ways in, per function:
 * absolute symbols inside an instance's range (D_80126954 = instance + 0xC), also as &D_x / D_x[i] / D_x.f;
 * AF(&D_inst, T, off), AF(D_ptrglobal, T, off), AF(var, T, off) with var a record pointer;
 * var->field / D_inst.field / D_inst[i].field / MACRO->field with offsets from the struct's typedef;
 * *(T *)(var + off) and *(T *)((u8 *)var + off).
A pointer variable is the record when declared as one of `types`, assigned from &instance, an instance + n * stride,
a pointer global or a macro, or passed in by callers (all call sites with a plain argument pass the record, at least
one) or handed to a parameter that is the record; spread over the call graph until nothing changes.
"""
import json, os, re, sys
from collections import defaultdict, Counter

ROOT, SPEC, OUT = sys.argv[1], sys.argv[2], sys.argv[3]
spec = json.load(open(SPEC))
INST = [(s, int(a, 16), n, int(st, 16)) for s, a, n, st in spec['instances']]
SIZE = int(spec['size'], 16)
TYPES = set(spec.get('types', []))
PTRG = set(spec.get('ptr_globals', []))
MACROS = {k: int(v, 16) for k, v in spec.get('macros', {}).items()}
SPAWNERS = set(spec.get('spawners', []))          # functions returning a pointer to the record
ARGFUNCS = {k: v for k, v in spec.get('argfuncs', {}).items()}   # function -> argument index that is the record
OWNER = spec.get('owner_ptr')                     # weak seed: reads a pointer at this offset, nothing >= size
INSTSYM = {s: (a, n, st) for s, a, n, st in INST}

def in_inst(addr):
    for s, a, n, st in INST:
        if a <= addr < a + n * st:
            return (addr - a) % st, s
    return None

comments = re.compile(r'/\*.*?\*/', re.S)
def blank(m):
    return ' ' * len(m.group(0))

# ---- struct layouts: every "typedef struct [N] { /* 0xNN */ T name; ... } N;" in src and include
STRUCTS = defaultdict(dict)
SUBF = {'GsRVIEW2': {'vpx': (0, 's32'), 'vpy': (4, 's32'), 'vpz': (8, 's32'), 'vrx': (0xC, 's32'), 'vry': (0x10, 's32'),
                     'vrz': (0x14, 's32'), 'rz': (0x18, 's32'), 'super': (0x1C, 'void *')},
        'SVECTOR': {'vx': (0, 's16'), 'vy': (2, 's16'), 'vz': (4, 's16'), 'pad': (6, 's16')},
        'Vec3s': {'x': (0, 's16'), 'y': (2, 's16'), 'z': (4, 's16')},
        'VECTOR': {'vx': (0, 's32'), 'vy': (4, 's32'), 'vz': (8, 's32'), 'pad': (0xC, 's32')},
        'MATRIX': {'m': (0, 's16'), 't': (0x14, 's32')},
        'Fixed': {'w': (0, 's32'), 'h': (0, None)}, 'h': {'i': (2, 's16'), 'frac': (0, 'u16')}}
ELEM = {'s8': 1, 'u8': 1, 's16': 2, 'u16': 2, 's32': 4, 'u32': 4, 'SVECTOR': 8, 'VECTOR': 0x10, 'MATRIX': 0x20,
        'Vec3s': 6, 'GsRVIEW2': 0x20, 'Fixed': 4, 'PrimPool': 0xC, 'DRAWENV': 0x5C, 'DISPENV': 0x14}
for d, _, fs in os.walk(ROOT):
    if '/.git' in d:
        continue
    for fn in fs:
        if not fn.endswith(('.c', '.h')):
            continue
        txt = open(os.path.join(d, fn), encoding='latin-1').read()
        for m in re.finditer(r'typedef struct(?: \w+)? \{(.*?)\}\s*(\w+);', txt, re.S):
            body, name = m.group(1), m.group(2)
            if name not in TYPES:
                continue
            for fm in re.finditer(r'/\* 0x([0-9A-Fa-f]+) \*/\s*(?:struct\s+)?([\w ]+?)\s*(\*?)\s*\(?\*?(\w+)\)?(?:\([^)]*\))?(\[(\w+)\])?(\[(\w+)\])?\s*;', body):
                off = int(fm.group(1), 16)
                STRUCTS[name][fm.group(4)] = (off, fm.group(2).strip() + (' *' if fm.group(3) else ''), fm.group(6))

def field_access(sname, chain):
    m = re.match(r'(\w+)(?:\[(\w+)\])?(?:\[(\w+)\])?((?:\.\w+(?:\[\w+\])?)*)$', chain)
    if not m or m.group(1) not in STRUCTS.get(sname, {}):
        return None
    off, typ, arr = STRUCTS[sname][m.group(1)]
    if m.group(2) is not None:
        try:
            off += int(m.group(2), 0) * ELEM.get(typ, 4)
        except ValueError:
            return (off, typ + '[i]')
    cur = typ
    for part in [p for p in m.group(4).split('.') if p]:
        pm = re.match(r'(\w+)(?:\[(\w+)\])?', part)
        sub = SUBF.get(cur, {}).get(pm.group(1))
        if sub is None:
            return (off, cur + '.' + part)
        off += sub[0]
        cur = sub[1] or pm.group(1)
        if pm.group(2) and pm.group(2).isdigit():
            off += int(pm.group(2)) * ELEM.get(cur, 2)
    return (off, cur + ('[]' if arr and m.group(2) is None else ''))

def balanced(s, i):
    depth = 0
    for j in range(i, len(s)):
        if s[j] == '(':
            depth += 1
        elif s[j] == ')':
            depth -= 1
            if depth == 0:
                return j
    return -1

def split_args(s):
    out, depth, cur = [], 0, ''
    for c in s:
        if c in '([{':
            depth += 1
        elif c in ')]}':
            depth -= 1
        if c == ',' and depth == 0:
            out.append(cur.strip()); cur = ''
        else:
            cur += c
    if cur.strip():
        out.append(cur.strip())
    return out

CAST = re.compile(r'^\(\s*(?:const\s+|volatile\s+)?(?:struct\s+)?[A-Za-z_]\w*(?:\s+\w+)?\s*\**\s*\)\s*')
def strip(e):
    e = e.strip()
    while True:
        old = e
        e = CAST.sub('', e).strip()
        if e.startswith('(') and balanced(e, 0) == len(e) - 1:
            e = e[1:-1].strip()
        if e == old:
            return e

def rw_of(text, start, end):
    a = text[end:end + 4].lstrip()
    before = text[max(0, start - 3):start].rstrip()
    if before.endswith('++') or before.endswith('--'):
        return 'RW'
    if before.endswith('&') and not before.endswith('&&'):
        pre = text[max(0, start - 40):start].rstrip()[:-1].rstrip()
        if not pre or pre[-1] in '(,=?:{;' or pre.endswith('return'):
            return 'addr'
    if a.startswith('++') or a.startswith('--'):
        return 'RW'
    if re.match(r'^(\+|-|\*|/|&|\||\^|<<|>>|%)=', a):
        return 'RW'
    if a.startswith('=') and not a.startswith('=='):
        return 'W'
    return 'R'

def norm_type(t):
    t = re.sub(r'\s+', ' ', t.strip()).replace('struct ', '').replace('volatile ', '')
    return re.sub(r'\s*\*', ' *', t).replace('* *', '**')

def base_of(e):
    """-> (kind, name, extra): kind 'var' | 'inst' | 'ptrg' | 'abs'"""
    e = strip(e)
    off = 0
    m = re.match(r'^(.*?)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    if m:
        e, off = strip(m.group(1)), int(m.group(2), 0)
    m = re.match(r'^&\s*(D_[0-9A-Fa-f]{8})\s*\+\s*\w+$', e)
    if m and m.group(1) in INSTSYM:
        return ('abs', m.group(1), INSTSYM[m.group(1)][0] + off)
    m = re.match(r'^&\s*(D_[0-9A-Fa-f]{8})(?:\[(\d+|0x[0-9A-Fa-f]+)\])?$', e)
    if m:
        s = m.group(1)
        if s in INSTSYM:
            a, n, st = INSTSYM[s]
            idx = int(m.group(2), 0) if m.group(2) else 0
            return ('abs', s, a + idx * st + off)
        hit = in_inst(int(s[2:], 16))
        if hit:
            return ('abs', s, int(s[2:], 16) + off)
    if e in PTRG:
        return ('ptrg', e, off)
    if e in MACROS:
        return ('abs', e, MACROS[e] + off)
    if re.match(r'^[A-Za-z_]\w*$', e):
        return ('var', e, off)
    return None

FUNC_RE = re.compile(r'^(?!extern\b|typedef\b|INCLUDE_ASM|#)(?:static\s+|inline\s+)*([A-Za-z_][\w \*]*?)\b([A-Za-z_]\w*)\s*\(([^;{}]*)\)\s*\{')
KW = set('if while for switch return sizeof AF do else case goto break continue'.split())
functions = []
for d, _, fs in os.walk(os.path.join(ROOT, 'src')):
    for fn in sorted(fs):
        if not fn.endswith('.c'):
            continue
        p = os.path.join(d, fn)
        raw = comments.sub(blank, open(p, encoding='latin-1').read())
        lines = raw.split('\n')
        i = 0
        while i < len(lines):
            m = FUNC_RE.match(lines[i])
            pstr = None
            if not m and re.match(r'^[A-Za-z_][\w \*]*\b\w+\s*\([^;{}]*\)\s*$', lines[i]) and not lines[i].startswith(('extern', 'typedef')):
                k = i + 1
                knr = {}
                while k < len(lines) and k < i + 12 and re.match(r'^\s+[\w \*]+;\s*$', lines[k]):
                    mm = re.match(r'^\s*(.*?)(\w+)\s*;', lines[k]); knr[mm.group(2)] = mm.group(1).strip(); k += 1
                if k < len(lines) and lines[k].startswith('{'):
                    m = FUNC_RE.match(lines[i].rstrip() + ' {')
                    if m:
                        pstr = ', '.join('%s %s' % (knr.get(n.strip(), 's32'), n.strip()) for n in m.group(3).split(',') if n.strip())
                        i = k
            if m and m.group(2) not in KW:
                j = i + 1
                while j < len(lines) and not lines[j].startswith('}'):
                    j += 1
                ps = pstr if pstr is not None else m.group(3)
                params = []
                if ps.strip() not in ('', 'void'):
                    for a in split_args(ps):
                        mm = re.match(r'^(.*?)(\w+)\s*(\[\s*\w*\s*\])?$', a.strip())
                        params.append((norm_type(mm.group(1)) if mm else '?', mm.group(2) if mm else '?'))
                functions.append(dict(file=os.path.relpath(p, ROOT), name=m.group(2), params=params,
                                      body='\n'.join(lines[i + 1:j])))
                i = j
            i += 1
byname = defaultdict(list)
for f in functions:
    byname[f['name']].append(f)

DECL_RE = re.compile(r'^\s*(?:register\s+|static\s+|volatile\s+)*((?:struct\s+)?[A-Za-z_]\w*)\s+([^;=(]*?(?:=[^;]*)?);', re.M)
def local_types(f):
    t = {n: ty for ty, n in f['params']}
    for m in DECL_RE.finditer(f['body']):
        base = m.group(1).replace('struct ', '')
        for part in split_args(m.group(2)):
            mm = re.match(r'^(\**)\s*(\w+)', part.split('=')[0].strip())
            if mm and mm.group(2) not in t:
                t[mm.group(2)] = base + (' ' + mm.group(1) if mm.group(1) else '')
    return t

CALL_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*\(')
for f in functions:
    f['lt'] = local_types(f)
    calls = []
    for m in CALL_RE.finditer(f['body']):
        if m.group(1) in KW or m.group(1) == 'AF':
            continue
        e = balanced(f['body'], m.end() - 1)
        if e > 0:
            calls.append((m.group(1), [strip(a) for a in split_args(f['body'][m.end():e])]))
    f['calls'] = calls

# ---- which variables are the record
recvar = defaultdict(dict)   # func idx -> var -> why
recparam = defaultdict(dict) # name -> k -> why
def is_rec_expr(e):
    e = strip(e)
    if e in PTRG or e in MACROS:
        return 'pointer global / macro ' + e
    m = re.match(r'^&\s*(D_[0-9A-Fa-f]{8})(?:\[\w+\])?$', e)
    if m and (m.group(1) in INSTSYM or in_inst(int(m.group(1)[2:], 16)) and in_inst(int(m.group(1)[2:], 16))[0] == 0):
        return 'address of ' + m.group(1)
    m = re.match(r'^(D_[0-9A-Fa-f]{8})\s*\+\s*\w+$', e)
    if m and m.group(1) in INSTSYM:
        return 'element of ' + m.group(1)
    return None
for idx, f in enumerate(functions):
    for v, t in f['lt'].items():
        if t.replace(' ', '').rstrip('*') in TYPES and t.endswith('*'):
            recvar[idx][v] = 'declared ' + t
    for m in re.finditer(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*([^;=][^;]*);', f['body']):
        w = is_rec_expr(m.group(2))
        if w and m.group(1) not in PTRG:
            recvar[idx].setdefault(m.group(1), w)
    for m in re.finditer(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?(\w+)\s*\(', f['body']):
        if m.group(2) in SPAWNERS:
            recvar[idx].setdefault(m.group(1), 'result of ' + m.group(2))
    for name, args in f['calls']:
        if name in ARGFUNCS and len(args) > ARGFUNCS[name] and re.match(r'^\w+$', args[ARGFUNCS[name]]):
            recvar[idx].setdefault(args[ARGFUNCS[name]], 'argument of ' + name)
    if OWNER is not None:
        o = int(OWNER, 16)
        cand = set(re.findall(r'AF\(\s*(\w+)\s*,\s*[\w ]+\*\s*,\s*0x%X\s*\)' % o, f['body']))
        for v in cand:
            offs = [int(x, 0) for x in re.findall(r'AF\(\s*%s\s*,[^,]+,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)' % re.escape(v), f['body'])]
            if offs and max(offs) < SIZE and v not in recvar[idx]:
                recvar[idx][v] = 'weak: reads a pointer at +0x%X' % o
    for m in re.finditer(r'for\s*\(\s*(\w+)\s*=\s*([^;]+);', f['body']):
        w = is_rec_expr(m.group(2))
        if w:
            recvar[idx].setdefault(m.group(1), w)
changed = True
rounds = 0
while changed and rounds < 30:
    changed = False; rounds += 1
    sites = defaultdict(lambda: defaultdict(lambda: [0, 0]))
    for idx, f in enumerate(functions):
        rv = recvar[idx]
        for k, (t, n) in enumerate(f['params']):
            if k in recparam.get(f['name'], {}) and n not in rv:
                rv[n] = 'parameter %d: %s' % (k, recparam[f['name']][k]); changed = True
            if n in rv and k not in recparam[f['name']]:
                recparam[f['name']][k] = 'in %s: %s' % (f['name'], rv[n]); changed = True
        for name, args in f['calls']:
            for k, a in enumerate(args):
                if name in recparam and k in recparam[name] and re.match(r'^\w+$', a) and a not in rv and a not in PTRG and not a.isdigit():
                    rv[a] = 'passed to %s arg %d' % (name, k); changed = True
                if name in byname and (re.match(r'^&?\w+$', a)):
                    sites[name][k][1] += 1
                    if a in rv or is_rec_expr(a):
                        sites[name][k][0] += 1
    for name, ks in sites.items():
        for k, (nr, na) in ks.items():
            if nr >= 1 and nr == na and k not in recparam[name]:
                if any(k < len(g['params']) for g in byname[name]):
                    recparam[name][k] = 'callers pass the record (%d of %d)' % (nr, na); changed = True

# ---- accesses
rows = []
def add(f, off, typ, rw, form, via, why=''):
    if off is None or not (0 <= off < SIZE):
        return
    rows.append(dict(file=f['file'], func=f['name'], off=off, type=norm_type(typ), rw=rw, form=form, via=via, why=why))
for idx, f in enumerate(functions):
    body = f['body']; rv = recvar[idx]
    for m in re.finditer(r'\bAF\(', body):
        e = balanced(body, m.end() - 1)
        if e < 0:
            continue
        args = split_args(body[m.end():e])
        if len(args) != 3:
            continue
        try:
            off = int(args[2], 0)
        except ValueError:
            continue
        b = base_of(args[0])
        if not b:
            continue
        rw = rw_of(body, m.start(), e + 1)
        if b[0] == 'abs':
            hit = in_inst(b[2])
            if hit:
                add(f, hit[0] + off, args[1], rw, 'AF', b[1])
        elif b[0] == 'ptrg' or (b[0] == 'var' and b[1] in rv):
            add(f, b[2] + off, args[1], rw, 'AF', b[1], rv.get(b[1], ''))
    for m in re.finditer(r'\*\s*\(\s*((?:volatile\s+)?\w+(?:\s*\*)*)\s*\*\s*\)\s*\(', body):
        e = balanced(body, m.end() - 1)
        b = base_of(body[m.end():e]) if e > 0 else None
        if b and b[2] and ((b[0] == 'var' and b[1] in rv) or b[0] == 'ptrg'):
            add(f, b[2], m.group(1), rw_of(body, m.start(), e + 1), 'raw', b[1])
    # typed: var->chain, D_inst.chain, D_inst[i].chain, MACRO->chain, ptrg->chain
    for m in re.finditer(r'(?<![\w.>])(\w+)(?:\[(\w+)\])?\s*(->|\.)\s*(\w+(?:\[\w+\])?(?:\[\w+\])?(?:\.\w+(?:\[\w+\])?)*)', body):
        base, idxs, op, chain = m.group(1), m.group(2), m.group(3), m.group(4)
        add0 = None
        if op == '->' and (base in rv or base in PTRG or base in MACROS):
            t = f['lt'].get(base, '').replace('*', '').strip()
            sname = t if t in STRUCTS else next(iter(TYPES & set(STRUCTS)), None)
            add0 = 0
        elif op == '.' and base in INSTSYM:
            a, n, st = INSTSYM[base]
            try:
                add0 = int(idxs, 0) * st if idxs else 0
            except ValueError:
                add0 = 0
            sname = next(iter(TYPES & set(STRUCTS)), None)
        if add0 is None or sname is None:
            continue
        fa = field_access(sname, chain)
        if fa:
            add(f, add0 + fa[0], fa[1], rw_of(body, m.start(), m.end()), 'typed', base)
    # absolute symbols inside the instances (not the instance symbols themselves)
    for m in re.finditer(r'(?<![\w&])D_([0-9A-F]{8})\b(?!\s*(?:\.|->|\[))', body):
        a = int(m.group(1), 16)
        s = 'D_' + m.group(1)
        if s in INSTSYM:
            continue
        hit = in_inst(a)
        if hit:
            add(f, hit[0], '?abs', rw_of(body, m.start(), m.end()), 'abs', s)
    for m in re.finditer(r'(?<![\w])&\s*D_([0-9A-F]{8})\b', body):
        s = 'D_' + m.group(1)
        hit = in_inst(int(m.group(1), 16))
        if hit and s not in INSTSYM:
            add(f, hit[0], '?abs', 'addr', 'abs', s)

# declared types of absolute symbols
ABSTYPE = {}
for d, _, fs in os.walk(os.path.join(ROOT, 'src')):
    for fn in fs:
        if fn.endswith('.c'):
            for m in re.finditer(r'extern\s+((?:volatile\s+)?\w+\s*\**)\s*(D_[0-9A-F]{8})\s*(\[[^\]]*\])?\s*;', open(os.path.join(d, fn), encoding='latin-1').read()):
                hit = in_inst(int(m.group(2)[2:], 16))
                if hit:
                    ABSTYPE.setdefault(m.group(2), Counter())[norm_type(m.group(1)) + ('[]' if m.group(3) else '')] += 1
for r in rows:
    if r['type'] == '?abs' and r['via'] in ABSTYPE:
        r['type'] = ABSTYPE[r['via']].most_common(1)[0][0] + '(abs)'
json.dump(dict(rows=rows, rounds=rounds, nfunc=len(functions),
               recfuncs=len(set((r['file'], r['func']) for r in rows)),
               recparam={k: v for k, v in recparam.items() if v}), open(OUT + '.json', 'w'), indent=0)

def short(t):
    return t.replace(' *', '*')
g = defaultdict(lambda: dict(n=0, types=Counter(), rw=Counter(), funcs=set(), files=set(), ex=None, syms=set()))
for r in rows:
    a = g[r['off']]
    a['n'] += 1; a['types'][short(r['type'])] += 1; a['rw'][r['rw']] += 1
    a['funcs'].add((r['file'], r['func'])); a['files'].add(r['file'])
    if r['form'] == 'abs':
        a['syms'].add(r['via'])
    if a['ex'] is None or (r['file'].startswith(('src/stage/engine', 'src/code', 'src/main')) and not a['ex'][0].startswith(('src/stage/engine', 'src/code', 'src/main'))):
        a['ex'] = (r['file'], r['func'])
with open(OUT + '.md', 'w') as fo:
    fo.write('| off | n | types | R / W / RW / & | funcs | files | example |\n|---|---|---|---|---|---|---|\n')
    for k in sorted(g):
        a = g[k]
        fo.write('| 0x%04X | %d | %s | %d / %d / %d / %d | %d | %d | %s:%s |\n' % (
            k, a['n'], ', '.join('%s %d' % x for x in a['types'].most_common(5)), a['rw']['R'], a['rw']['W'],
            a['rw']['RW'], a['rw']['addr'], len(a['funcs']), len(a['files']), a['ex'][0].split('/')[-1], a['ex'][1]))
print(spec['name'], 'functions', len(functions), 'rounds', rounds, 'rows', len(rows), 'funcs',
      len(set((r['file'], r['func']) for r in rows)), 'offsets', len(g), Counter(r['form'] for r in rows))
```
