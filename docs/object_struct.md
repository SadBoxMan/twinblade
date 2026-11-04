# The game object struct (r273, research only)

Research for tracker area d-structs: what the matched C does with game objects, collected by script and grouped into
draft structs. **Nothing here is applied.** No file in src/ or include/ was changed; a later local card applies the
structs and proves with `make check` / `make check-stage` that the matches still hold. Everything below comes from
the decomp-only snapshot (main = fab5bf5a, 4 Nov 2026): the C, the headers and docs, no asm, no disc, no build.

What already existed in include/game.h and was the starting point: `StageActor` (0x10C, partly named), `Mover` (a
second view of the same memory), `Player` (Musashi at 0x80126B58, a few fields), `ModelObj` (0x84, the drawn model),
`SpawnDef` (0x14) and `AnimEntry`. include/abil.h says the ability packages take "the stage engine's actor (Musashi's
object)", and docs/animation_controller.md names +0x72, +0x90..+0x9C. This document checks those against every use,
adds the rest, and separates what is common to all objects from what only Musashi or only the pool actors have.

## Summary

* There are **three kinds of game object**, not one, and they share a **0x24-byte header**: kind / mode (+0x00),
  sub-state (+0x02), 16.16 position (+0x04), velocity (+0x10), a countdown (+0x1C) and the model pointer (+0x20).
  * **Pool actors** (`StageActor`, 97 slots of 0x10C at 0x80120194, slot 0 never handed out): enemies, NPCs, props,
    pickups. Every offset used through an actor pointer lies in 0x000..0x10A, which matches the slot size.
  * **Musashi** (`Player`, one object at 0x80126B58, at least 0x24C bytes): his own hit record, animation player,
    face, camera points, ability fields and action-handler block, up to +0x24A.
  * **Effects** (30 slots of 0x58 at 0x8011D030, spawned by func_80146A6C): spawn arguments at +0x2C / +0x30, the
    owner at +0x34, a matrix at +0x38.
* An actor's layout splits into an **engine-owned part** (0x24..0xCB: previous position, acceleration, model
  offset, collision, the hit record, parent / definition / init pointers, hit points, the animation script, the
  reaction state; the same meaning in every stage) and a **per-kind work area** (0xCC..0x10B: pointers to extra
  models or actors and scratch words whose meaning and type change from kind to kind).
* "Kind" is the actor's +0x00 (`StageActor.state` in game.h): the spawner writes the definition's kind there and
  calls the kind's set-up handler from the table at 0x8011DB08; 0 marks a free slot. The code shows no kind test
  that changes the layout, so the per-kind extension is a union of work areas, not a set of subclasses.
* Several game.h annotations on `StageActor` describe **Musashi's** fields, not the pool actors': +0x44 display
  flags, +0x4D scene mark, +0x4E state byte, +0xC8..+0xD8 face (their routines only ever get Musashi). On an actor
  +0x44 is `accel[0]` (game.h's own `Mover` view says so). Section 5 lists this and the other conflicts.
* Field counts by confidence are in section 7.

## 1. Method

The census is a script (`census.py`, kept in full in Appendix C so it can be re-run on a later snapshot:
`python3 census.py REPO OUT` writes `OUT.json` and `OUT.tsv`, about 15 s). It reads every `src/**/*.c`, all
201 files, and splits them into 28 994 function definitions (ANSI and K&R). In each function it records every
constant-offset access through a pointer variable, in all the forms the C uses:

| form | example | rows |
|---|---|---|
| `AF(p, T, off)` (the offset macro of every engine, stage and ability file) | `AF(o, s16, 0x70)` | 87 076 |
| nested `AF(AF(p, T1, a), T2, b)`: field `b` of the pointer at `p+a` | `AF(AF(a, u8 *, 0x20), s16, 0x12)` | 10 885 |
| a local loaded from a pointer field, then read by offset | `m = AF(o, u8 *, 0x20); AF(m, u16, 0x2C)` | 5 723 |
| Musashi's fields by absolute address (`D_80126B5C` = +0x04 ...) | `D_80126B96` (+0x3E) | 2 964 |
| typed access on `StageActor *`, `Mover *`, `Player *` (offsets from game.h) | `a->pos[1].h.i` | 893 |
| `*(T *)(p + off)`, `*(T *)((u8 *)p + off)`, `p[off]` on a byte pointer | `*(s32 *)(obj + 0x44)` | 32 |

For each access: offset, access type (so size and signedness), read / write / read-modify-write / address taken,
file, function, the pointer variable and why that variable counts as an object.

**Which pointers are objects.** A pointer variable counts when one of these holds, then the property spreads over the
call graph until nothing changes (11 rounds):
* it is declared `StageActor *`, `Mover *` or `Player *`, or is a parameter that a prototype declares so;
* it is passed to a parameter already known to be an object (SetScript, func_8012CAE4, func_8012C354, func_8012C218,
  func_8012BEE8 ... are the big ones), or a function's parameter is an object inside that function;
* it receives the result of a spawn function (`func_8012C890`, `func_8012C658`, `func_8012C588`, ...), is a copy of
  an object, or is the parent pointer (+0x64) of one;
* it indexes a handler table with its own +0x02 (u16 / s16), +0x4E or +0x214 (`D_xxx[AF(o, u16, 2)]()`);
* callers pass objects at that argument in at least 2 of 3 call sites (reverse step; the parameter is then an
  object inside the function too).

Of the 28 994 functions, 13 428 touch an object; 107 573 accesses are recorded (90 893 at the first level, 16 680
through a pointer field).

**Which kind of object.** A second pass tracks where a pointer can come from: `P` (Musashi: `&D_80126B58`, a
handler registered with func_8016EDEC / func_8016ED8C / func_8016EE94 / SetActionHandler, a dispatch on +0x214),
`A` (a pool actor: the actor spawn functions, the pool `D_80120194` / `D_801202A0`) or `E` (an effect: the effect
spawners func_80146A6C / func_80146994 / func_801469C8 / func_80146AFC, the pool `D_8011D030`, the argument of
func_80146C3C), flowing from callers to callees.

Most stage code is reached only through handler tables whose contents are data (not in this snapshot), so most
pointers get no origin this way. For those the script falls back on two weaker tests, applied to the pointer's own
accesses and, transitively, to those of every function it is handed to:
* a pointer that reads an owner pointer at +0x34 and never reaches 0x58 is an effect (`E?`);
* an offset of 0x10C or beyond cannot be a 0x10C pool slot: Musashi (`P?`);
* otherwise a vote: (offset, size) pairs seen only through proven-Musashi pointers (including his absolute
  addresses) against pairs seen only through proven-actor pointers; more Musashi pairs: `P?`, else `A?`.

The weak labels then flow down the call graph like the strong ones; a function reached by both is **shared**.

Buckets, first-level accesses:

| bucket | strong | weak | accesses | functions | offsets | areas |
|---|---|---|---|---|---|---|
| pool actor | A 3 602 | A? 78 569 | 82 171 | 11 767 | 130 | stg 79 771, engine 1 207, SC03_001 799, abil 391, EXE 3 |
| Musashi | P 3 833 | P? 3 971 | 7 804 | 2 489 | 201 | stg 4 943, engine 2 276, abil 564, SC03_001 17, EXE 3, ovl36 1 |
| effect | E 782 | E? 53 | 835 | 72 | 21 | stg 610, engine 124, abil 88, SC03_001 13 |
| shared | | PA? 43, AE? 40 | 83 | 31 | 25 | engine 60, stg 21, abil 2 |

The `A?` bucket is the weak one: a stage function that touches only header fields and is never called directly
could be handling Musashi or an effect (the effect bucket is a lower bound for that reason); conflict 6 and section 7 say
what that can hide and how to firm it up.

**Caveats.**
* Counts are inflated by duplication: the 147 files of src/stg are the stage-specific code of other stage images, and
  the same kind's code recurs in many of them at shifted addresses. "funcs" and "files" in the tables are the better
  measure of how widely a field is used.
* The access type is what the decompiler or the matcher wrote, so `s16` against `u16` on the same field is often only
  which one gave the match (or m2c's guess). Two types count as a conflict below only when size differs or the code
  depends on the sign (section 5, conflict 1).
* Engine functions still in asm (INCLUDE_ASM) are invisible: so, for example, func_8012CC88 (the Mover's move) is
  known only from its callers' types.

## 2. The groups

The census gives a common header, three kinds of object built on it, and three pointed-to structs:

| group | what | where it lives | size | evidence for the split |
|---|---|---|---|---|
| `ObjHeader` | the fields every game object has | +0x00..+0x23 of the three kinds below | 0x24 | the same engine helpers run on all of them (pos += vel, the countdown, the model) at the same offsets; from +0x24 on the three differ |
| `StageActor` | the pool actors: enemies, NPCs, props, pickups | `D_80120194[97]`, slot 0 unused (`D_801202A0` = slot 1) | 0x10C | spawn functions (engine.c:func_8012C890, func_8012C284, func_8012C750); every actor offset in the census is 0x000..0x10A |
| `Player` | Musashi | `D_80126B58` (one object) | 0x24C at least, below 0x258 | absolute addresses D_80126B58..D_80126DA2, handlers registered by func_8016EDEC; offsets up to +0x24A |
| `Effect` | effects: sparks, splashes, small spawned things with an owner | `D_8011D030`, 30 slots of 0x58 | 0x58 | engine_801458E0.c:func_80146AFC (allocates: kind, pos, args, owner), func_8014AC10 / func_8016706C (scan and free), func_80146A6C (spawn) |
| `ModelObj` | the drawn model an object keeps at +0x20 | the model pool (EXE) | 0x84 | 12 208 accesses through +0x20, all fitting game.h's ModelObj (section 3.6) |
| `SpawnDef` | the spawn definition at actor +0x68 | stage data | 0x14 | engine.c:func_8012C890 |
| `ActorInit` | the kind's set-up record at actor +0x78 | stage data | 0x32+ | engine.c:func_8012C354 (local typedef there) |

**Kinds.** The actor's +0x00 is its kind: func_8012C890 copies `SpawnDef.kind` there and calls the kind's set-up handler
`D_8011DB08[kind](a)`; 0 is a free slot (func_8012C284, func_8012C2D0). The stage code compares another actor's kind
with constants (`AF(t, u16, 0) == 0x61`, 0x15E, 0x35C, ...: 290 tests of +0x00 against 81 distinct nonzero values up to 0x363, a few of them on Musashi's mode), but only to find
or react to a particular other actor: **no kind test selects a different layout.** Each kind's handlers simply use
the work area (+0xCC..+0x10B, and some spare fields before it) in their own way. So the per-kind extensions are not
subclasses that a kind test unlocks: they are a union of per-kind work areas, and section 3.3 maps the common
patterns in it rather than one struct per kind (there are hundreds of kinds and the code does not name them).

**Musashi is not a pool actor.** His +0x00 is a mode, not a kind (the engine tests 0x19 / 0x1A / 0x1D / 0x1E:
engine_801458E0.c:func_8014AA28, func_8016EDEC, func_8014ADE0), and from +0x24 on his fields differ: a push velocity
at +0x24, a fall speed at +0x34, his collision data at +0x38 where an actor keeps its previous position, his own
hit record, animation player, face, camera points, ability and action-handler blocks.

**Effects are a third kind.** func_80146A6C(kind, owner, x, y, z, d, e) fills the first free 0x58-byte slot of
`D_8011D030`: kind at +0x00, position at +0x06 / +0x0A / +0x0E, `d` at +0x2C, `e` at +0x30, the owner (an actor or
Musashi) at +0x34; func_8014AC10 frees an effect's model (+0x20) exactly as func_8012C218 frees an actor's. So the
header holds here too, and +0x24..+0x57 is the effect's own (section 3.5). Their handlers are reached through tables,
so only the ones that read the owner pointer are recognised (72 functions); the rest fall into the actor bucket
(conflict 6, section 7).

**Who uses which.** First-level accesses: pool actors 82 171 (stg 79 771, engine 1 207, SC03_001's own code 799,
ability packages 391, EXE 3); Musashi 7 804 (stg 4 943, engine 2 276, ability packages 564, SC03_001 17, EXE 3,
ovl36 1); effects 835 (stg 610, engine 124, ability packages 88, SC03_001 13). The EXE and the overlays 36-3B barely
touch objects by offset: the EXE works on `ModelObj` (typed) and takes an actor only in
func_8002A04C / func_8002A520 / func_8002A790 (code_800123F0.c, called from the reaction code) and ovl36's
func_800D19F0 reads Musashi's +0x4E.

## 3. Field tables

Confidence: **H** the engine C does it (a named or matched engine routine reads or writes the field with this
meaning) and the stage code agrees; **M** the meaning is read from consistent use in several places but no engine
routine pins it; **L** only offset, size and a guess. "n" is first-level accesses from Appendix A; evidence is
file:function (engine files unless a stage file is named). A name already in include/game.h is kept unless the
census contradicts it (then section 5 says so).

### 3.1 ObjHeader (+0x00..+0x23): every object (actors, Musashi, effects)

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x00 | u16 | `kind` | actor: kind, set from SpawnDef.kind, indexes the set-up table D_8011DB08, 0 = free slot. Musashi: his mode (0x19, 0x1A, 0x1D, 0x1E tested). game.h calls it `state` | H | engine.c:func_8012C890, func_8012C284; engine_801458E0.c:func_8016EDEC, func_8014AA28 |
| 0x02 | u16 | `sub` | the state inside the kind: index of the kind's handler table (4 846 dispatches `D_xxx[AF(o, u16, 2)](o)`); set and stepped with the sub-state counter restarted | H | engine.c:func_8012AD44, func_8012AD50; engine_801458E0.c:func_80151944 (Musashi); sc01_001.c:func_sc01_001_8017F238 |
| 0x04 | Fixed[3] | `pos` | 16.16 position; the s16 at +0x06 / +0x0A / +0x0E is the integer part (the most read fields: 2 696 / 3 482 / 2 728 actor accesses) | H | engine.c:func_8012AD80, func_8012ADE4, func_8012C890; engine_801458E0.c:func_801473DC (Musashi) |
| 0x10 | s32[3] | `vel` | velocity added to pos each move (Musashi: and bit 31 of +0x44 set while moving) | H | engine.c:func_8012AD80, func_8012B200, func_8012B14C; engine_801458E0.c:func_801473DC |
| 0x1C | s32 | `timer` | a countdown: set, then decremented to 0 (true at 0). game.h: `count` (StageActor), `timer` (Mover) | H | engine.c:func_8012BEE8 (actor); engine_801458E0.c:func_80146E90, func_80146E98 (the same pair for Musashi) |
| 0x20 | ModelObj * | `model` | the drawn model; the animation controller writes model->pose, the movers copy pos + ofs into it | H | engine.c:func_8012AAAC, func_8012B260, func_8012C354; engine_801458E0.c:func_8014AC10 (an effect's); 12 069 actor and 771 Musashi accesses |

Notes. The velocity words also have halfword views used by some kinds as separate values: +0x12, +0x16, +0x1A as s16
(580, 585, 523 accesses; e.g. engine_801458E0.c:func_80167540 compares `AF(a, s16, 0x12) > AF(a, s16, 0x10)`,
sc02_000.c:func_sc02_000_8017CABC writes +0x16). Those are kinds that do not move by velocity (engine effects among
them) reusing the space: a union in the draft (section 4).

### 3.2 StageActor, engine part (+0x24..+0xCB)

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x24 | s32[4] | `work24` | spare on actors: no engine routine uses them on an actor, and few kinds do (+0x24 11, +0x28 12, +0x2C 154 reads in 25 functions, +0x30 1). Those uses look like effect handlers the census did not recognise (an effect keeps its spawn arguments at +0x2C / +0x30) or s32 copies of pos (`AF(o, s32, 0x24) = AF(o, s16, 6)`) | L | sc01_084.c:func_sc01_084_80180D38; sc01_077.c:func_sc01_077_80183324 |
| 0x34 | u16 | `subTime` | frames in the current sub-state: restarted by the sub-state setters, stepped each frame (4 257 accesses) | H | engine.c:func_8012AD44, func_8012AD64, func_8012AD6C |
| 0x36 | u16 | `id` | serial number from D_801270C4 at spawn, never 0; others keep a copy to check that a linked actor is still the same one | H | engine.c:func_8012C890; engine_8013C98C.c:func_801424E4, func_80142608 |
| 0x38 | Fixed[3] | `prev` | the position before the last move (restored when a move is undone) | H | engine.c:func_8012ADE4, func_8012AE00, func_8012AF0C |
| 0x44 | s32[3] | `accel` | acceleration added to vel each move; 0xC000 / 0x18000 in accel[1] is gravity 0.75 / 1.5 | H | engine.c:func_8012AD80, func_8012B200, func_8012B21C, func_8012B23C |
| 0x50 | s16[3] | `ofs` | added to pos when the model follows | H | engine.c:func_8012B260, func_8012B2CC, func_8012C890 |
| 0x56 | s16 | `pad56` | no access | - | - |
| 0x58 | u32 | `hitData` | collision box address (KSEG0 bits stripped when used) with flag nibble; 0x60000000 set at set-up | H | engine.c:func_8012C354, func_8012DBD0; engine_8012F5F4.c (HitBox) |
| 0x5C | u16 | `hitState` | bit 15: can be hit by the area hit (func_8012BF54 / BF68 set and clear it); bit 14: immune; bit 0: a hit is waiting (set by the hitter, cleared by the reaction). game.h `flags5C`, copied from ActorInit.flags5C | H | engine.c:func_8012DBD0, func_8012BF54, func_8012BF68, func_8012C354; engine_8012F5F4.c:func_80131B14 |
| 0x5E | u16 | `hitCode` | the hit's code: the hitter's serial (a hit with the same code is not taken twice), low byte the attack type (0x1D: records hitPos) | H | engine.c:func_8012DBD0, func_8012E9C0; engine_8012F5F4.c:func_80131B14 |
| 0x60 | s16 | `hitDamage` | damage of the waiting hit, scaled by ActorInit.damageScale | H | engine.c:func_8012DBD0, func_8012E9C0; engine_8012F5F4.c:func_80131B14 |
| 0x62 | s16 | `hitAngle` | direction of the hit; the model turns to face it (+0x800) | H | engine.c:func_8012DBD0, func_8012E4C8; engine_8012F5F4.c:func_80131B14 |
| 0x64 | StageActor * | `parent` | the actor that spawned it (or Musashi, engine_8013C98C.c:func_80142454), else NULL; 1 708 accesses through it, about 240 of them reading the parent's id | H | engine.c:func_8012C890; engine_8013C98C.c:func_801424E4 |
| 0x68 | SpawnDef * | `def` | the spawn definition (when not spawned by a parent); stage code writes def->unkC (125 times) and def->flags | H | engine.c:func_8012C890, func_8012C098 |
| 0x6C | StageActor * | `link` | next actor of a chain kept by some kinds (`for (p = o->link; p; p = p->link)`); through it the code reads +0x20, +0xFE, +0x70 of another actor | M | sc02_011.c:func_sc02_011_8018C47C; sc01_077.c:func_sc01_077_80184C0C |
| 0x70 | s16 | `param` | SpawnDef.unk8: the per-instance argument of the kind (3 259 accesses, nearly all reads: variants, message numbers, counts). game.h `unk70` | H (origin) / M (use) | engine.c:func_8012C890, func_8012E57C; engine_8013C98C.c:func_801424E4 |
| 0x72 | u16 | `animFlags` | animation script flags: 0x4000 wrapped, 0x2000 marker, 0x0400 stepped back, 0x0200 started at end | H | engine.c:SetScript, func_8012A860, func_8012AAAC |
| 0x74 | u8 | `unk74` | picks func_8012E014 (nonzero) or func_8012E138; kinds test it (`if (o->unk74)`) | M | engine.c:func_8012DFD4; sc02_005.c:func_sc02_005_8018548C |
| 0x75 | u8 | `targetClass` | written only by kinds (0, 2, 4, 8 ...), read by Musashi's targeting code, which turns it into his +0x16E | M | engine_801458E0.c:func_8014CD80, func_8014CF04 |
| 0x76 | s16 | `hp` | hit points: ActorInit.unk0 (x1.5 unless D_80078EAE), reduced by each hit, <= 0 starts the death step 0xC. game.h `unk76` | H | engine.c:func_8012C354, func_8012C438; engine_8012F5F4.c:func_80131B14, func_8012F5F4 |
| 0x78 | ActorInit * | `init` | the kind's set-up record (D_80190D1C until set); read through: +0x00, +0x02, +0x30 | H | engine.c:func_8012C354, func_8012E9C0; code_800123F0.c:func_8002A04C (+0x2E) |
| 0x7C | s16[3] | `hitPos` | where it was when a type-0x1D hit landed | H | engine.c:func_8012E9C0; engine_8012F5F4.c:func_80131B14 |
| 0x82 | u16 | `hitFlags` | bit 0: the hit finished it | H | engine.c:func_8012E9C0 |
| 0x84 | s16 | `unk84` | a counter some kinds keep (set 0/1, decremented) | L | sc01_077.c:func_sc01_077_8017F714 |
| 0x86 | u16 | `unk86` | flag bits 1 and 2 some kinds keep | L | sc01_077.c:func_sc01_077_80183834 |
| 0x88 | s16[3] | `origin` | the spawn position | H | engine.c:func_8012C890 |
| 0x8E | s16 | `pad8E` | no access | - | - |
| 0x90 | AnimEntry * | `script` | current animation script | H | engine.c:SetScript, func_8012AAAC |
| 0x94 | s32 | `index` | current entry | H | engine.c:SetScript, func_8012AAAC |
| 0x98 | s16 | `animTimer` | frames left on the current pose (game.h `timer`; renamed so it does not clash with the header's +0x1C) | H | engine.c:func_8012A988, func_8012AAAC |
| 0x9A | s16 | `retIndex` | return entry of a called script | H | engine.c:SetScript, func_8012AAAC |
| 0x9C | AnimEntry * | `retScript` | return script (NULL: none) | H | engine.c:SetScript, func_8012AAAC |
| 0xA0 | u8[4] | `padA0` | no access | - | - |
| 0xA4 | s32 | `unkA4` | two functions of one kind (copies in sc02_000 / sc02_003) | L | sc02_000.c:func_sc02_000_80188F60 |
| 0xA8 | u16 | `unkA8` | the same kind | L | sc02_000.c:func_sc02_000_80188F60 |
| 0xAA | s16 | `noHitPlayer` | nonzero: its attack does not hit Musashi | H | engine.c:func_8012DF34; engine_8012F5F4.c:func_80130898 |
| 0xAC | s16 | `heightAdd` | added to a linked object's height | M | engine_8012F5F4.c:func_8012FB54, func_8012F968 |
| 0xAE | u16 | `hitMask` | bit 0: left out of the area hit; kinds write -1 / 0 | M | engine.c:func_8012DBD0; sc02_005.c:func_sc02_005_801822EC |
| 0xB0 | s32 | `reactStep` | the reaction step running (index into 0x8018D9DC) | H | engine_8012F5F4.c:func_80131E00; sc03_001.c:func_80187DAC |
| 0xB4 | u32 | `reactFlags` | which reaction steps apply: 1, 4, 8, 0x80 | H | engine_8012F5F4.c:func_8012F68C, func_8012F75C, func_8012F828, func_8012F8C8 |
| 0xB8 | u32 | `padB8` | no actor access (the three hits in the census are Musashi's +0xB8 in ability code) | - | - |
| 0xBC | s32 * | `params` | key / value list (key 0xD continues at a pointer); kinds point it at their table at set-up (408 writes) | H | engine_8012F5F4.c:func_80130D48, func_801312D0 (func_80131CF4) |
| 0xC0 | u8 | `listed` | set to 1 by set-up code (411 writes); the engine's scans take only actors with kind != 0 and this set | M | engine_801458E0.c:func_8017849C, func_801787D4 |
| 0xC1 | u8 | `react` | reaction state (1 hit, 3, 4, 7, 6 ...); 0x11 keeps the animation stepper off it | H | engine.c:func_8012A988; engine_8012F5F4.c:func_8012F5F4, func_8012F75C |
| 0xC2 | u8 | `reactMode` | 0: the reaction ends with the animation, 1: with the timer; kinds use it as a small sub-state too | M | engine_8012F5F4.c:func_8012F5F4, func_8012F68C |
| 0xC3 | u8 | `reactBits` | bit 0 set / tested by kinds and the reaction code | M | engine_8012F5F4.c:func_801300F4, func_801301E8 |
| 0xC4 | u32 | `reactOpts` | bit 1: no hit reaction | H | engine_8012F5F4.c:func_8012F5F4, func_8012F68C |
| 0xC8 | u8 | `hitFx0` | nonzero: a hit calls func_8002A520 (EXE) | M | engine_8012F5F4.c:func_80131B14; sc02_026.c:func_sc02_026_8017E72C |
| 0xC9 | u8 | `hitFx1` | nonzero: a hit calls func_8002A790 (EXE) | M | engine_8012F5F4.c:func_80131B14 |
| 0xCA | u8[2] | `padCA` | no access | - | - |

### 3.3 StageActor, per-kind work area (+0xCC..+0x10B)

The engine itself fixes only two things here (`messages` / +0xDC and `unkFC` / +0xFC, both written at spawn from the
definition); everything else belongs to the kind. The table gives the dominant use; "also" lists the other types.

| off | type (dominant) | name | use | conf | evidence |
|---|---|---|---|---|---|
| 0xCC | void * | `ext0` | 1 768 accesses, 1 166 functions: a second object of the kind. Most often a 0x38-byte model object (func_80143994 makes it, func_801439C0 frees it with size 0x38: the type-2 ModelObj), read through as a model (+0x10 rot, +0x18 scale, +0x20 pose, +0x2C flags); in others another actor (130 writes of its +0xB0). Also s32 | M | engine_8013C98C.c:func_80142B2C, func_801439C0, func_801439FC |
| 0xD0 | void * | `ext1` | the same kind of second pointer (799 accesses); also s32 | M | sc02_005.c:func_sc02_005_8017C130 (a model from func_8012C194) |
| 0xD4 | s32 | `workD4` | s32 or pointer (265); func_80178D40's script sets it | L | engine_801458E0.c:func_80178D40 |
| 0xD8 | s32 | `workD8` | s32 or pointer (144) | L | engine_801458E0.c:func_80178D40 |
| 0xDC | void * | `messages[0]` | at spawn SpawnDef.unk10 (the NPC's message pointer); afterwards per kind: s32 (653), s16 (255), pointer, once a function pointer called with the actor | H (spawn) / L (rest) | engine.c:func_8012C890; engine_8012F5F4.c:func_80132018; engine_8013C98C.c:func_80144A04 (`((void (*)())AF(arg0, s32 *, 0xDC))(arg0)`) |
| 0xE0 | s32 | `workE0` | s32 (884) or two s16 (166 + 201 at +0xE2) | L | engine_801458E0.c:func_80178D40 |
| 0xE4 | s32 | `workE4` | s32 (393) or s16 (130, +0xE6: 101) | L | |
| 0xE8 | s32 | `workE8` | s32 (437), s16 (134), a path pointer `s16 *` with index +0x106 in the path follower | L / M (path) | sc03_001.c:func_80187994, func_80187A64 (`AF(a, u16 *, 0xE8)[AF(a, s16, 0x106) * 2]`) |
| 0xEC..0xFB | s16 / s32 / u8 | `workEC` | small per-kind scratch (+0xEC 117, +0xEE 30, +0xF0 45, +0xF2 49, +0xF4 103, +0xF6 31, +0xF8 62, +0xFA 24 accesses) | L | |
| 0xFC | s16 | `unkFC` | at spawn SpawnDef.unkE; then per kind (2 949 accesses, the busiest work field): a height offset to the parent (func_801424E4), a flag, a counter | H (spawn) / L | engine.c:func_8012C890; engine_8013C98C.c:func_801424E4, func_80142608 |
| 0xFE | s16 | `workFE` | 2 313: commonly the parent's id kept at attach time, compared with parent->id | M | engine_8013C98C.c:func_801424E4, func_80142608, func_80143D28 |
| 0x100 | s16 | `work100` | 1 447: often a flag from `param & 0x100`, else per kind | L | engine_8013C98C.c:func_80142B2C, func_80142BB4 |
| 0x102 | s16 | `work102` | 875: a counter in the engine's carry helper (< 2), per kind | L | engine_8013C98C.c:func_80142C9C |
| 0x104 | s16 | `work104` | 617 | L | |
| 0x106 | s16 | `work106` | 540: the path index for SC03_001's path follower (with +0xE8) | M | sc03_001.c:func_80187994, func_80187A64 |
| 0x108 | s16 | `work108` | 467: the path follower's mode byte there | L | sc03_001.c:func_80187994 |
| 0x10A | s16 | `work10A` | 459: often another actor's id (`o->work10A == q->id`) | L | sc02_011.c:func_sc02_011_80190748; engine_801458E0.c:func_80178D40 |

### 3.4 Player (Musashi, D_80126B58), after the header

His fields are reached three ways: `AF(&D_80126B58, T, off)` / `D_80126B58.field`, absolute symbols (`D_80126B96` is
+0x3E), and `arg0` of the engine's and the stages' Musashi routines (0x80146xxx..0x80174xxx in SC03_001, the action
handlers registered with func_8016EDEC, the ability packages). Absolute symbols name the field but not always its
type; the type below is the one the offset code uses.

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x24 | s32[3] | `push` | a second velocity, set clamped to +-limit per axis | H | engine_801458E0.c:func_80146DE8, func_80146DF8, func_80146D80 |
| 0x30 | s32 | `pad30` | no access found | - | - |
| 0x34 | s32 | `fallSpeed` | added to pos.y (+0x08), clamped to +-0x1F0000; > 0 / >= 0 tests mean falling or on the ground | H | engine_801458E0.c:func_801477E8, func_80147460, func_80155C64, func_80157BC8 |
| 0x38 | void * | `hitData` | his collision data (with the model at +0x20 for func_80135888) | H | engine.c:func_8012AE00, func_8012DF34; engine_801458E0.c:func_8015D01C |
| 0x3C | u16 | `hitState` | hits noted this frame (bit 0 set by the hitter, cleared when taken) | H | engine.c:func_8012F568; engine_801458E0.c:func_8015126C, func_80151664 |
| 0x3E | u16 | `hitCode` | the hit's code: bit 15 and bits 0x4002 / 0x800 set by attackers (359 accesses) | H | engine.c:func_8012F568; engine_801458E0.c:func_8015126C; sc01_077.c:func_sc01_077_8018047C |
| 0x40 | s16 | `hitDamage` | the damage of the hit (written by attackers, 114 writes) | H | engine.c:func_8012D5E4, func_8012F568 |
| 0x42 | s16 | `hitAngle` | the facing of what hit him | H | engine.c:func_8012DEB8, func_8012F568 |
| 0x44 | u32 | `status` | status and display flags: 0x30000000 all parts shown, 0x20000000 / 0x10000000, 0x400 / 0x20000 / 0x4 weapon rules, 0xC0 face distance, 0x800, 0x80000000 moving (game.h puts this on StageActor as `display`) | H | engine_801458E0.c:ShowAllParts, UpdateWeaponParts, func_801473DC, func_80146128, func_80149DD8 |
| 0x48 | s32 | `unk48` | one copy (D_80126BA0 = D_80126B9C) | L | engine_801458E0.c:func_801463A0 |
| 0x4C | u8 | `unk4C` | unknown byte. Two functions read a pointer at +0x4C of an object the census put here (engine_801458E0.c:func_80163A94, func_80163C2C); that cannot be Musashi, whose +0x4D..+0x4F are bytes, so those two take some other object (conflict 6) | L | - |
| 0x4D | u8 | `sceneMark` | 1 = BeginScene, 2 = EndScene; incremented and decremented by scene code | H | engine_801458E0.c:BeginScene, EndScene; sc02_000.c:func_sc02_000_80182894 |
| 0x4E | u8 | `state4E` | RunStateHandler4E calls table[state4E - 1]; ovl36 tests it | H | engine_801458E0.c:RunStateHandler4E; ovl36.c:func_800D19F0 |
| 0x4F | u8 | `handler4F` | index of the handler table D_8018F8A8 | M | engine_801458E0.c:func_80158880 |
| 0x50 | s32[3] | `travel` | += vel each frame, cleared together | M | engine_801458E0.c:func_8015AE2C |
| 0x5C | s32 | `unk5C` | tested 0 and cleared | L | engine_801458E0.c:func_8015AE2C, func_80161124 |
| 0x60 | s16[3] | `scaleA` | set to 0x1000 together (a scale, 1.0) | M | engine_801458E0.c:func_80151664, func_80151C54 |
| 0x66 | s16 | `unk66` | cleared once | L | engine_801458E0.c:func_80163C2C |
| 0x68 | s16[3] | `scaleB` | 0x1000 at stage set-up | M | engine_801458E0.c:func_80158AE4, func_80145CEC |
| 0x70 | s16[3] | `scaleC` | 0x1000 at stage set-up | M | engine_801458E0.c:func_80158AE4, func_80145CEC |
| 0x88 | s16[3] | `respawn` | the position he is put back to (pos = respawn) | M | engine_801458E0.c:func_80152254, func_80152A50, func_801463A0 |
| 0x90 | SVECTOR | `respawnPrev` | the previous respawn point (copied from +0x88) | M | engine_801458E0.c:func_801463A0 |
| 0x98 | SVECTOR | `unk98` | read whole | L | engine_801458E0.c:func_8014BDE8 |
| 0xA8 | u8 | `blink` | invulnerability blink timer: 0x20 after a hit, decremented, odd frames hidden | M | engine_801458E0.c:func_80151C54, func_8015126C |
| 0xA9 | u8 | `modeA9` | a mode switched on | L | engine_801458E0.c:func_80153E00, func_8015A2D8 |
| 0xAA | u16 | `unkAA` | flags (0x40); the top nibble picks a handler of D_8018F044 | M | engine_801458E0.c:func_8016FE78, func_80148D44 |
| 0xAC | u16 | `unkAC` | flag 0x80 | L | engine_801458E0.c:func_80149DD8 |
| 0xAE | u8[2] | `unkAE` | two bytes tested for 0x80 | L | engine_801458E0.c:func_80148D44 |
| 0xB0 | s32 * | `animTable` | his animations by number | H | engine_801458E0.c:func_80154150, func_80154190 |
| 0xB4 | s32 | `anim` | the animation playing (compared with animTable[n] before restarting it) | H | engine_801458E0.c:func_80154150, func_80151AE4 |
| 0xB8 | u16 | `animStatus` | 0x8000: the animation has ended (182 accesses, also in ability code) | M | engine_801458E0.c:func_80151AE4, func_80151B98; ovl1f.c:func_ovl1f_800CB138 |
| 0xBA | s16 | `animTimer` | restarted at 1 | M | engine_801458E0.c:func_80154190, func_80154218 |
| 0xBC | u8 | `animIndex` | | M | engine_801458E0.c:func_80154190, func_80154218 |
| 0xBD | u8 | `animStart` | | M | engine_801458E0.c:func_80154190, func_80154218 |
| 0xBE | u8 | `unkBE` | cleared with +0xBF | L | engine_801458E0.c:func_8015FCC8, func_8015FF20 |
| 0xBF | u8 | `unkBF` | | L | engine_801458E0.c:func_8015FCC8 |
| 0xC8 | u32 | `face` | face word (FaceSet); bit 0x1000000 added | H | engine_801458E0.c:FaceSet |
| 0xCC | s32 * | `faceTable` | face scripts by number | H | engine_801458E0.c:StartFace, func_80154AB4 |
| 0xD0 | s32 * | `faceScript` | the face script playing | H | engine_801458E0.c:StartFace, StartFaceScript, func_80159C84 |
| 0xD4 | u16 | `faceTimer` | | H | engine_801458E0.c:func_80154AB4, FaceScriptStep |
| 0xD6 | u16 | `faceTimer2` | | M | engine_801458E0.c:func_80154AB4 |
| 0xD8 | u8 | `faceIndex` | | H | engine_801458E0.c:func_80154AB4, func_80154B20 |
| 0xD9 | u8 | `faceStart` | | M | engine_801458E0.c:func_80154B20 |
| 0xDA | u8 | `unkDA` | cleared | L | engine_801458E0.c:func_8015B6F4 |
| 0xDC | u8 | `animDC` | set from func_801549F8 when an animation starts | L | engine_801458E0.c:func_80154218 |
| 0xDD | u8 | `lastHit` | the low byte of the last hit code | M | engine_801458E0.c:func_8015126C, func_801519C8 |
| 0xDE | u8 | `prevMode` | his mode (+0x00) when the current step began (111 accesses) | M | engine_801458E0.c:func_801516F0, func_8015173C |
| 0xDF | u8 | `unkDF` | 0 / 8 | L | engine_801458E0.c:func_8015220C, func_80152DA8 |
| 0xE0 | SVECTOR | `hitP0` | the hit's first point | H | engine.c:func_8012F568; engine_801458E0.c:func_80160410 |
| 0xE8 | SVECTOR | `hitP1` | the second | H | engine.c:func_8012F568 |
| 0xF0 | u16 | `takenCode` | copy of hitCode when the hit is taken | M | engine_801458E0.c:func_8015126C, func_80151780 |
| 0xF2 | s16 | `takenDamage` | copy of hitDamage (71 accesses) | M | engine_801458E0.c:func_8015126C, func_801511E0 |
| 0xF4 | s16 | `takenAngle` | copy of hitAngle | M | engine_801458E0.c:func_8015126C, func_801519C8 |
| 0xF6 | s16 | `unkF6` | 0x1000 / 0x19EB (a scale) | L | engine_801458E0.c:func_80158AE4, func_8015F080 |
| 0x12E | s16 | `unk12E` | cleared at stage set-up | L | engine_801458E0.c:func_80158AE4 |
| 0x138 | s16[4] | `posOfs` | an offset added to his position; cleared together | M | engine_801458E0.c:func_8015D414, func_801463A0 |
| 0x140 | SVECTOR | `unk140` | copied whole; its pad (+0x146) is a set flag | L | engine_801458E0.c:func_8014CB9C, func_801463A0 |
| 0x154 | s16[3] | `focus` | the point the camera follows | H | engine.c:func_8012A328, func_8012BFA8 |
| 0x15C | s16[3] | `point` | another point of his, objects turn to it | H | engine.c:func_8012B864, func_8012BCCC |
| 0x162 | s16 | `pointUnset` | nonzero: that point is not set | H | engine.c:func_8012BCCC |
| 0x16C | u16 | `unk16C` | compared with 0x15 | L | engine_801458E0.c:func_8016163C, func_80161774 |
| 0x16E | u16 | `targetClass` | the class of the targeted actor (from its +0x75) | M | engine_801458E0.c:func_8014CD80, func_80157A8C |
| 0x170 | s32 | `unk170` | tested 0 | L | engine_801458E0.c:func_8015C944 |
| 0x178 | s32 | `unk178` | tested 0, a pointer in places | L | engine_801458E0.c:func_80149AD4 |
| 0x180 | StageActor * | `target` | an actor whose model's facing is read | M | engine_801458E0.c:func_8015D01C |
| 0x184 | s32 | `unk184` | bit 31 a flag, the low byte copied to +0x1A0 | L | engine_801458E0.c:func_8015FAE8, func_8015FBE0 |
| 0x188 | s16 | `squash` | 0..0x90: an actor's squash target | H | engine.c:func_8012E364; engine_801458E0.c:func_8016007C |
| 0x18A | s16 | `unk18A` | | L | engine_801458E0.c:func_8016007C |
| 0x18C | u8 * | `unk18C` | a pointer | L | engine_801458E0.c:func_8015E4B0 |
| 0x194 | u16 | `targetId` | an actor's id compared with q->id | M | engine_801458E0.c:func_80163EC8 |
| 0x197 | u8 | `abilStep` | the step of the button-ability template (include/abil.h); 90 accesses | M | engine_801458E0.c:func_8015FCC8, func_8015FF20; src/abil |
| 0x198 | s32 | `handle198` | a handle from func_8013767C, checked with func_801399F0 | L | engine_801458E0.c:func_80158638, func_80158FA4 |
| 0x1A0 | u8 | `unk1A0` | | L | engine_801458E0.c:func_8015FCC8 |
| 0x1A8 | u8[4] | `toggles` | +0x1A8 / +0x1AB toggled with ^= 1, +0x1AA a step (41) | L | engine_801458E0.c:func_8015444C, func_801555F4, func_80149AD4 |
| 0x1AC | s32 | `unk1AC` | 0x3C0000 / 0 | L | engine_801458E0.c:func_80152714 |
| 0x1B0 | s32 | `unk1B0` | | L | engine_801458E0.c:func_80146128 |
| 0x1B4 | s32 | `anim1B4` | an animation handed to func_80154274 | L | engine_801458E0.c:func_8015AE2C |
| 0x1B8 | s16[2] | `scaleD` | 0x1000 at stage set-up | L | engine_801458E0.c:func_80158AE4 |
| 0x1BC | u8[12] | `flags1BC` | small flags and timers (+0x1BC..+0x1C7), several through absolute symbols | L | engine_801458E0.c:func_8015CD20, func_80155800, func_80149E94 |
| 0x1C8 | s16[5] | `unk1C8` | cleared together with +0x1D4 / +0x1D8 | L | engine_801458E0.c:func_8014AA28 |
| 0x1D4 | s32[2] | `unk1D4` | | L | engine_801458E0.c:func_8014AA28 |
| 0x1E8 | void ** | `table1E8` | a handler table | L | engine_801458E0.c:func_80162B1C |
| 0x1F8 | u32 | `action` | the action handler: function address in the low bits, flags 0x01000000 / 0x02000000 / 0x04000000 | H | engine_801458E0.c:func_8016EE94, func_8016F14C, func_8016F0E4 |
| 0x1FC | s32 * | `actionScript` | its script (func_8016EFC8 sets it) | H | engine_801458E0.c:func_8016EFC8, func_8016EE94 |
| 0x200 | s32 | `actionTimer` | a countdown (true at 0) | H | engine_801458E0.c:func_80171A80, func_80171A88 |
| 0x204 | s32 | `action204` | cleared with the handler | M | engine_801458E0.c:func_8016EE94 |
| 0x208 | s32 | `action208` | | M | engine_801458E0.c:func_8016EE94 |
| 0x20C | s16 | `action20C` | | M | engine_801458E0.c:func_8016EE94 |
| 0x20E | s16 | `action20E` | | M | engine_801458E0.c:func_8016EE94 |
| 0x210 | s16[2] | `action210` | | M | engine_801458E0.c:func_8016EE94 |
| 0x214 | u8 | `phase` | the action's phase: NextPhase, SetPhase; handlers dispatch on it (220 accesses) | H | engine_801458E0.c:NextPhase, SetPhase, func_801727D0 |
| 0x215 | u8 | `phaseSub1` | BumpSub1 | H | engine_801458E0.c:BumpSub1 |
| 0x216 | u8 | `phaseSub2` | BumpSub2 | H | engine_801458E0.c:BumpSub2, func_80171A6C |
| 0x217 | u8 | `phaseEnd` | 1 / 2 | M | engine_801458E0.c:func_80171A04, func_80171A10 |
| 0x218 | u8 | `action218` | the third argument of func_8016ED8C | M | engine_801458E0.c:func_8016ED8C, func_8016EDBC |
| 0x21C | s32 | `nextAction` | a handler to start later | M | engine_801458E0.c:func_8015EA3C, func_8014B598 |
| 0x223 | u8 | `unk223` | 0x10 | L | engine_801458E0.c:func_8014AA28 |
| 0x234 | s32[3] | `abilPos` | a second position: += vel (121, 50, 39 accesses), halves +0x236 / +0x23A read as s16 / u16 | M | engine_801458E0.c:func_80158038, func_80158CD8, func_8015A2D8; ovl34.c:func_ovl34_800CD288 |
| 0x240 | s32 | `unk240` | tested 0 | L | engine_801458E0.c:func_8015AE2C, func_8015B858 |
| 0x244 | u16[3] | `savedPos` | his position saved, later copied to respawn (+0x88) | M | engine_801458E0.c:func_80153D7C, func_80153E00 |
| 0x24A | s16 | `unk24A` | copy of pos.z | L | engine_801458E0.c:func_8015F448 |

Not Musashi: `D_80126DB0` (+0x258, a stage entry record handed to func_80015978 by the stage loader) and `D_80126DB8`
(+0x260, the Camera, engine.c:func_80129C40). So his object ends between 0x24C and 0x258 (open question 1).

### 3.5 Effect (D_8011D030, 0x58), after the header

Only the 72 functions that read the owner pointer (or are reached from the effect spawners) are counted here, so
these are the fields that code uses; other effect kinds may use the same space differently.

| off | type | name | meaning | conf | evidence |
|---|---|---|---|---|---|
| 0x24 | s16 | `unk24` | a per-kind halfword (stg only) | L | sc02_011.c:func_sc02_011_8017F1AC |
| 0x28 | u16 | `unk28` | an id copied from another object's +0x36 | L | engine_801458E0.c:func_8016C49C |
| 0x2A | s16 | `unk2A` | tested 0 | L | engine_801458E0.c:func_8016A08C |
| 0x2C | s32 | `arg0` | the spawner's `d` argument (often a variant number: tables are indexed with it) | H | engine_801458E0.c:func_80146AFC, func_80146A6C; sc02_011.c (`D_sc02_011_80194C08[AF(arg0, s32, 0x2C)]`) |
| 0x30 | s32 | `arg1` | the spawner's `e` argument (an angle in sc02_011's fan of 0x2B effects) | H | engine_801458E0.c:func_80146AFC; engine_801458E0.c:func_80167540 |
| 0x34 | Obj * | `owner` | the actor or Musashi that spawned it; effects read its position (+0x06 / +0x0A / +0x0E, 40 times each) and model | H | engine_801458E0.c:func_80146AFC, func_80167540 |
| 0x38 | MATRIX | `mtx` | a matrix kept with the effect; +0x4C / +0x50 / +0x54 are its translation (written by the ability packages) | M | engine_801458E0.c:func_80167540, func_8016DF5C; ovl13.c:func_ovl13_800CB6E4 |

### 3.6 What the pointer fields point to (Appendix B)

**+0x20, the model (`ModelObj`, 12 208 accesses).** Everything fits game.h's ModelObj: +0x04 `unk04` (1 319, a flag
word, bit 31 toggled), +0x08..+0x0C pos, +0x10 rot (+0x12, the heading, is the single most used model field: 4 122),
+0x18 scale (1 285), +0x20 pose, +0x24 parts, +0x28 colour, +0x2C flags (774), +0x30 coord, +0x48 / +0x4C / +0x50
the local matrix's translation (read about 160 times each as the model's position), +0x68 / +0x6C / +0x70 the world
matrix's translation (7 each), +0x78 `coord.super`. Two additions for ModelObj: **+0x80 is a pointer** (130
writes, `u8 *` / `s32 *`: game.h has `pad80[4]`), and single bytes are written at +0x25 / +0x26 / +0x27 by a few kinds
(the type-2, 0x38-byte object puts something else there; see conflict 9).

**+0x64, the parent (`StageActor *` or Musashi).** Its header fields (+0x04..+0x0E, +0x20) are read to follow it,
+0x36 (id) about 240 times to check it is still the same actor, +0x70 (param) 102 times, and its work area
(+0xCC..+0x100) by the kinds that cooperate with their parent.

**+0x68, the spawn definition (`SpawnDef`).** +0x0A flags (30) and +0x0C `unkC` (149, 125 of them writes: the kind
records a facing or state in its definition so a respawn keeps it).

**+0x78, the set-up record (`ActorInit`).** +0x00 (28 reads), +0x02 (68), +0x30 `damageScale` (56): all as
engine.c's local `ActorInit` typedef has them; code_800123F0.c:func_8002A04C also reads +0x2E.

**+0x6C, the chain (`StageActor *`).** +0x02, +0x06, +0x0A, +0x20, +0x6C (the next link), +0x70: another actor.

**+0xCC / +0xD0 / +0xDC (per kind).** Through +0xCC: model fields (+0x08..+0x0C pos, +0x10 rot, +0x18 / +0x1A scale,
+0x20 pose, +0x27, +0x2C) and, in other kinds, actor fields (+0xB0 written 130 times, +0xFC, +0x108); through
+0xD0: model fields; through +0xDC: +0x00..+0x0C read as s32 / u16 (a per-kind data record).

**+0x34 of an effect (the owner).** Header fields, as above.

## 4. Draft structs (not applied)

Draft C for the local card, in the style of include/game.h (PsyQ GCC 2.7.2, C89: no anonymous unions, so the
shared header is a macro). Names follow section 3; where game.h already has a name that code uses, the comment
gives it, and the card can keep game.h's name to avoid touching matched code (`state` for `kind`, `count` for the
header's `timer`, `unk70` for `param` ...). Sizes are checked by the offsets in the comments; the
`AF(p, T, off)` accesses in matched code do not depend on any of this, so applying it means converting call sites
one function at a time and re-checking (section 5, conflict 1, is the main trap).

```c
/* ---- the header every game object starts with (actors, Musashi, effects) ---- */
#define OBJ_HEADER                                                                         \
    /* 0x00 */ u16 kind;        /* actor: kind (0 free); Musashi: mode. game.h: state */   \
    /* 0x02 */ u16 sub;         /* state inside the kind: handler table index */           \
    /* 0x04 */ Fixed pos[3];    /* 16.16 */                                                \
    /* 0x10 */ s32 vel[3];                                                                 \
    /* 0x1C */ s32 timer;       /* countdown, true at 0. game.h: count / timer */           \
    /* 0x20 */ ModelObj *model

typedef struct Obj {
    OBJ_HEADER;
} Obj;                          /* 0x24: what a routine taking "any object" sees */

/* ---- pool actor: D_80120194[97], 0x10C ---- */
typedef struct StageActor {
    OBJ_HEADER;
    /* 0x024 */ s32 work24[4];      /* spare on actors (section 3.2) */
    /* 0x034 */ u16 subTime;        /* frames in the sub-state */
    /* 0x036 */ u16 id;             /* serial, never 0 */
    /* 0x038 */ Fixed prev[3];      /* position before the last move */
    /* 0x044 */ s32 accel[3];       /* game.h: display at +0x44 is Musashi's, see section 5 */
    /* 0x050 */ s16 ofs[3];         /* model offset */
    /* 0x056 */ u8 pad056[2];
    /* 0x058 */ u32 hitData;        /* collision box | flag nibble */
    /* 0x05C */ u16 hitState;       /* 0x8000 hittable, 0x4000 immune, 1 hit waiting. game.h: flags5C */
    /* 0x05E */ u16 hitCode;        /* hitter's serial; low byte the attack type (0x1D). game.h: unk5E */
    /* 0x060 */ s16 hitDamage;      /* game.h: unk60 */
    /* 0x062 */ s16 hitAngle;       /* game.h: unk62 */
    /* 0x064 */ struct Obj *parent; /* an actor, or Musashi (func_80142454) */
    /* 0x068 */ SpawnDef *def;
    /* 0x06C */ struct StageActor *link;   /* a chain some kinds keep */
    /* 0x070 */ s16 param;          /* SpawnDef.unk8. game.h: unk70 */
    /* 0x072 */ u16 animFlags;
    /* 0x074 */ u8 unk74;
    /* 0x075 */ u8 targetClass;     /* read by Musashi's targeting (his +0x16E) */
    /* 0x076 */ s16 hp;             /* game.h: unk76 */
    /* 0x078 */ struct ActorInit *init;
    /* 0x07C */ s16 hitPos[3];
    /* 0x082 */ u16 hitFlags;
    /* 0x084 */ s16 unk84;
    /* 0x086 */ u16 unk86;
    /* 0x088 */ s16 origin[3];
    /* 0x08E */ u8 pad08E[2];
    /* 0x090 */ AnimEntry *script;
    /* 0x094 */ s32 index;
    /* 0x098 */ s16 animTimer;      /* game.h: timer */
    /* 0x09A */ s16 retIndex;
    /* 0x09C */ AnimEntry *retScript;
    /* 0x0A0 */ u8 pad0A0[4];
    /* 0x0A4 */ s32 unkA4;
    /* 0x0A8 */ u16 unkA8;
    /* 0x0AA */ s16 noHitPlayer;    /* game.h: unkAA */
    /* 0x0AC */ s16 heightAdd;      /* game.h: unkAC */
    /* 0x0AE */ u16 hitMask;        /* bit 0: out of the area hit */
    /* 0x0B0 */ s32 reactStep;      /* game.h: step */
    /* 0x0B4 */ u32 reactFlags;     /* game.h: unkB4 */
    /* 0x0B8 */ u8 pad0B8[4];
    /* 0x0BC */ s32 *params;
    /* 0x0C0 */ u8 listed;
    /* 0x0C1 */ u8 react;           /* game.h: unkC1 */
    /* 0x0C2 */ u8 reactMode;       /* game.h: unkC2 */
    /* 0x0C3 */ u8 reactBits;       /* game.h: unkC3 */
    /* 0x0C4 */ u32 reactOpts;      /* game.h: unkC4 */
    /* 0x0C8 */ u8 hitFx[2];        /* game.h: face (that is Musashi's +0xC8) */
    /* 0x0CA */ u8 pad0CA[2];
    /* 0x0CC */ ActorWork work;     /* per kind, below */
} StageActor;                       /* 0x10C */

/* the per-kind work area at +0xCC: one layout per kind; this is the most common one, the
   union members give the other widths seen at the same offsets */
typedef union {
    u8 b[0x40];
    s16 h[0x20];
    s32 w[0x10];
    struct {
        /* 0x0CC */ void *ext0;         /* a second model (0x38-byte type 2) or actor */
        /* 0x0D0 */ void *ext1;
        /* 0x0D4 */ s32 workD4;
        /* 0x0D8 */ s32 workD8;
        /* 0x0DC */ void *message;      /* SpawnDef.unk10 at spawn. game.h: messages[0] */
        /* 0x0E0 */ s32 workE0;
        /* 0x0E4 */ s32 workE4;
        /* 0x0E8 */ s32 workE8;         /* a path (s16 x, z pairs) in SC03_001's follower */
        /* 0x0EC */ s32 workEC;
        /* 0x0F0 */ s32 workF0;
        /* 0x0F4 */ s32 workF4;
        /* 0x0F8 */ s32 workF8;
        /* 0x0FC */ s16 unkFC;          /* SpawnDef.unkE at spawn */
        /* 0x0FE */ s16 workFE;         /* often the parent's id */
        /* 0x100 */ s16 work100[6];     /* +0x106: path index */
    } s;
} ActorWork;                        /* 0x40 */

/* ---- Musashi: D_80126B58 ---- */
typedef struct Player {
    OBJ_HEADER;
    /* 0x024 */ s32 push[3];        /* a second velocity, clamped */
    /* 0x030 */ u8 pad030[4];
    /* 0x034 */ s32 fallSpeed;      /* added to pos.y, clamped to +-0x1F0000 */
    /* 0x038 */ void *hitData;
    /* 0x03C */ u16 hitState;       /* game.h: hitFlags */
    /* 0x03E */ u16 hitCode;        /* game.h: unk3E */
    /* 0x040 */ s16 hitDamage;      /* game.h: unk40 */
    /* 0x042 */ s16 hitAngle;       /* game.h: unk42 */
    /* 0x044 */ u32 status;         /* display / weapon / moving flags */
    /* 0x048 */ s32 unk48;
    /* 0x04C */ u8 unk4C;
    /* 0x04D */ u8 sceneMark;       /* 1 BeginScene, 2 EndScene */
    /* 0x04E */ u8 state4E;         /* RunStateHandler4E */
    /* 0x04F */ u8 handler4F;       /* index into D_8018F8A8 */
    /* 0x050 */ s32 travel[3];
    /* 0x05C */ s32 unk5C;
    /* 0x060 */ s16 scaleA[3];
    /* 0x066 */ s16 unk66;
    /* 0x068 */ s16 scaleB[3];
    /* 0x06E */ u8 pad06E[2];
    /* 0x070 */ s16 scaleC[3];
    /* 0x076 */ u8 pad076[0x12];
    /* 0x088 */ s16 respawn[3];
    /* 0x08E */ u8 pad08E[2];
    /* 0x090 */ SVECTOR respawnPrev;
    /* 0x098 */ SVECTOR unk98;
    /* 0x0A0 */ u8 pad0A0[8];
    /* 0x0A8 */ u8 blink;
    /* 0x0A9 */ u8 modeA9;
    /* 0x0AA */ u16 unkAA;
    /* 0x0AC */ u16 unkAC;
    /* 0x0AE */ u8 unkAE[2];
    /* 0x0B0 */ s32 *animTable;
    /* 0x0B4 */ s32 anim;
    /* 0x0B8 */ u16 animStatus;     /* 0x8000 ended */
    /* 0x0BA */ s16 animTimer;
    /* 0x0BC */ u8 animIndex;
    /* 0x0BD */ u8 animStart;
    /* 0x0BE */ u8 unkBE;
    /* 0x0BF */ u8 unkBF;
    /* 0x0C0 */ u8 pad0C0[8];
    /* 0x0C8 */ u32 face;
    /* 0x0CC */ s32 *faceTable;
    /* 0x0D0 */ s32 *faceScript;
    /* 0x0D4 */ u16 faceTimer;
    /* 0x0D6 */ u16 faceTimer2;
    /* 0x0D8 */ u8 faceIndex;
    /* 0x0D9 */ u8 faceStart;
    /* 0x0DA */ u8 unkDA;
    /* 0x0DB */ u8 pad0DB;
    /* 0x0DC */ u8 animDC;
    /* 0x0DD */ u8 lastHit;
    /* 0x0DE */ u8 prevMode;
    /* 0x0DF */ u8 unkDF;
    /* 0x0E0 */ SVECTOR hitP0;
    /* 0x0E8 */ SVECTOR hitP1;
    /* 0x0F0 */ u16 takenCode;
    /* 0x0F2 */ s16 takenDamage;
    /* 0x0F4 */ s16 takenAngle;
    /* 0x0F6 */ s16 unkF6;
    /* 0x0F8 */ u8 pad0F8[0x36];
    /* 0x12E */ s16 unk12E;
    /* 0x130 */ u8 pad130[8];
    /* 0x138 */ s16 posOfs[4];
    /* 0x140 */ SVECTOR unk140;     /* .pad (+0x146) is a flag */
    /* 0x148 */ u8 pad148[0xC];
    /* 0x154 */ s16 focus[3];
    /* 0x15A */ u8 pad15A[2];
    /* 0x15C */ s16 point[3];       /* game.h: unk15C */
    /* 0x162 */ s16 pointUnset;     /* game.h: unk162 */
    /* 0x164 */ u8 pad164[8];
    /* 0x16C */ u16 unk16C;
    /* 0x16E */ u16 targetClass;
    /* 0x170 */ s32 unk170;
    /* 0x174 */ u8 pad174[4];
    /* 0x178 */ s32 unk178;
    /* 0x17C */ s32 unk17C;
    /* 0x180 */ struct StageActor *target;
    /* 0x184 */ s32 unk184;
    /* 0x188 */ s16 squash;         /* game.h: unk188 */
    /* 0x18A */ s16 unk18A;
    /* 0x18C */ u8 *unk18C;
    /* 0x190 */ s32 unk190;
    /* 0x194 */ u16 targetId;
    /* 0x196 */ u8 unk196;
    /* 0x197 */ u8 abilStep;
    /* 0x198 */ s32 handle198;
    /* 0x19C */ u8 pad19C[4];
    /* 0x1A0 */ u8 unk1A0;
    /* 0x1A1 */ u8 pad1A1[7];
    /* 0x1A8 */ u8 toggles[4];
    /* 0x1AC */ s32 unk1AC;
    /* 0x1B0 */ s32 unk1B0;
    /* 0x1B4 */ s32 anim1B4;
    /* 0x1B8 */ s16 scaleD[2];
    /* 0x1BC */ u8 flags1BC[12];
    /* 0x1C8 */ s16 unk1C8[5];
    /* 0x1D2 */ u8 pad1D2[2];
    /* 0x1D4 */ s32 unk1D4[2];
    /* 0x1DC */ u8 pad1DC[0xC];
    /* 0x1E8 */ void **table1E8;
    /* 0x1EC */ u8 pad1EC[0xC];
    /* 0x1F8 */ u32 action;         /* handler address | 0x01/0x02/0x04000000 flags */
    /* 0x1FC */ s32 *actionScript;
    /* 0x200 */ s32 actionTimer;
    /* 0x204 */ s32 action204;
    /* 0x208 */ s32 action208;
    /* 0x20C */ s16 action20C;
    /* 0x20E */ s16 action20E;
    /* 0x210 */ s16 action210[2];
    /* 0x214 */ u8 phase;
    /* 0x215 */ u8 phaseSub1;
    /* 0x216 */ u8 phaseSub2;
    /* 0x217 */ u8 phaseEnd;
    /* 0x218 */ u8 action218;
    /* 0x219 */ u8 pad219[3];
    /* 0x21C */ s32 nextAction;
    /* 0x220 */ u8 pad220[3];
    /* 0x223 */ u8 unk223;
    /* 0x224 */ u8 pad224[0x10];
    /* 0x234 */ s32 abilPos[3];
    /* 0x240 */ s32 unk240;
    /* 0x244 */ u16 savedPos[3];
    /* 0x24A */ s16 unk24A;
} Player;                           /* 0x24C known; ends before 0x258 */

/* ---- effect: D_8011D030[30], 0x58 ---- */
typedef struct Effect {
    OBJ_HEADER;
    /* 0x24 */ s16 unk24;
    /* 0x26 */ u8 pad26[2];
    /* 0x28 */ u16 unk28;
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s32 arg0;            /* func_80146A6C's d */
    /* 0x30 */ s32 arg1;            /* func_80146A6C's e */
    /* 0x34 */ struct Obj *owner;
    /* 0x38 */ MATRIX mtx;
} Effect;                           /* 0x58 */
```

Two further changes to existing game.h types that the census supports (also not applied):
* `ModelObj`: `/* 0x80 */ void *user;` in place of `pad80[4]` (130 writes of a pointer there).
* `ActorInit` (engine.c's local typedef) belongs in game.h next to `SpawnDef`: `+0x00 s16 hpBase`, `+0x02 u16
  hitState` (copied to actor +0x5C), `+0x04 void *model`, `+0x08 u32 hitData`, `+0x2E s16` (read by
  func_8002A04C), `+0x30 s16 damageScale`.

The offset comments in the code block above were checked mechanically: it compiles with `gcc -m32` against stand-in
typedefs, with an `offsetof` assertion for every commented field and `sizeof` for each struct (226 assertions:
StageActor 0x10C, ActorWork 0x40, Player 0x24C, Effect 0x58, Obj 0x24).

## 5. Conflicts

One offset used with two types, or a name that does not fit. Ordered by how much they matter to the card that
applies the structs.

1. **Signedness of reads (matters for matching).** A struct field has one type, so every load through it becomes
   `lh` or `lhu` (`lb` / `lbu`). The matched C reads many fields with both signs, and in matched code that choice
   was often what made the function match. Fields read both ways in at least 3 functions each (reads only; stores
   do not care):

   | bucket | off | s16 reads (funcs) | u16 reads (funcs) |
   |---|---|---|---|
   | actor | 0x02 sub | 148 | 3 044 |
   | actor | 0x06 / 0x0A / 0x0E pos | 713 / 958 / 749 | 619 / 751 / 612 |
   | actor | 0x34 subTime | 108 | 877 |
   | actor | 0x36 id | 62 | 45 |
   | actor | 0x5E hitCode | 4 | 182 |
   | actor | 0x60 hitDamage | 81 | 31 |
   | actor | 0x62 hitAngle | 22 | 51 |
   | actor | 0x70 param | 1 090 | 853 |
   | actor | 0x72 animFlags | 18 | 281 |
   | actor | 0x76 hp | 202 | 12 |
   | actor | 0x88 / 0x8A / 0x8C origin | 114 / 83 / 123 | 119 / 104 / 104 |
   | actor | 0xFC .. 0x10A (work) | 738, 613, 296, 175, 96, 109, 107, 169 | 257, 190, 218, 94, 55, 86, 35, 8 |
   | Musashi | 0x06 / 0x0A / 0x0E pos | 79 / 89 / 87 | 24 / 38 / 30 |
   | Musashi | 0x62 / 0x64 scaleA | 7 / 6 | 75 / 77 |
   | Musashi | 0x20C / 0x20E | 20 / 7 | 6 / 14 |
   | effect | 0x06 / 0x0A / 0x0E pos | 43 / 41 / 43 | 8 / 42 / 10 |

   56 such fields in all (the script lists them; 91 with any count). The card applying a struct should keep a cast
   (`(u16)a->sub`, `(s16)a->param`) or keep the `AF` access wherever the matched read used the other sign, and run
   `make check-stage` per file.
2. **+0x44 on StageActor: `display` (game.h) or `accel[0]`.** game.h's StageActor calls +0x44 the display flags
   and game.h's Mover calls it `accel[0]`; both are used on actors. The census settles it: the display routines
   (ShowAllParts, SetDisplayFlag20, ClearDisplayFlag20, UpdateFlag10Part21, UpdateWeaponParts, FaceSet) only ever get
   Musashi (`&D_80126B58`, or a pointer that can only be him), while engine.c:func_8012AD80 / func_8012B200 /
   func_8012B23C write accel on actors (90 actor accesses of +0x44, 78 of them writes, all but one s32). The one
   typed call `ClearDisplayFlag20((StageActor *)arg0)` (engine_801458E0.c, in a function that also writes +0x234)
   passes Musashi. So on an actor +0x44..+0x4F is
   `accel[3]` and the display word is Musashi's `status`.
3. **+0x4D / +0x4E on StageActor (`sceneMark`, `state4E` in game.h).** BeginScene / EndScene and
   RunStateHandler4E get Musashi only; on an actor +0x4C is `accel[2]` (91 s32 accesses; 27 more read it as a
   pointer, which fits no actor field: probably effects whose +0x38 matrix the script did not recognise). Musashi's
   fields. The census also shows 33 pointer / s32 reads of +0x4C on weakly placed (`P?`) pointers in stage code;
   they cannot be Musashi either (his +0x4D..+0x4F are bytes) and belong with conflict 6.
4. **+0xC8..+0xDF on StageActor (`face`, `faceTable`, `faceScript`, `faceTimer`, `faceIndex`, `messages[2]`).**
   The face routines (StartFace, StartFaceAt, StartFaceScript, FaceScriptStep, FaceSet, FaceLoad) are called
   from Musashi's code only (27 of the 31 call sites in src/stg are in functions the census puts on Musashi, the
   other 4 in functions it could not place, none on an actor; the engine ones are his). On an actor +0xC8 / +0xC9 are two byte flags (engine_8012F5F4.c:func_80131B14 reads
   `((u8 *)&a->face)[0]` and `[1]`), and +0xCC on is the per-kind work area. Only `messages[0]` (+0xDC) is the
   actor's (func_8012C890 writes it); nothing reads a `messages[1]` at +0xE0, which kinds use as an s32.
   Musashi's face fields are also narrower than game.h's: +0xD4 and +0xD6 are u16, +0xD8 / +0xD9 u8.
5. **+0x34: u16 + u16 (actor) or s32 (Musashi), and owner pointer (effect).** The reason the shared header stops at
   +0x24. Same for +0x24..+0x33 (actor spare, Musashi `push`, effect args) and +0x38 (actor `prev`, Musashi
   `hitData`, effect `mtx`).
6. **Objects the census could not place.** A few functions read fields that fit none of the three layouts:
   engine_801458E0.c:func_80163A94 / func_80163C2C (a pointer at +0x4C, u16 at +0x60 / +0x62 / +0x64 and +0x100..),
   func_80163EC8 (+0x5A, +0x66, +0x67), func_80165124 (+0x51), ovl20.c:func_ovl20_800CB688 (bytes at +0x59, +0x5B,
   +0x5D, +0x5F). They are probably a fourth kind of object (the ability packages' 0x68-byte objects at D_8011F9D0,
   include/abil.h, are a candidate) handed to helpers that also take actors. They are in Appendix A under the bucket
   the script chose; treat those rows as unplaced.
7. **The velocity's halfwords.** +0x12, +0x16, +0x1A are read and written as s16 by kinds that do not move by
   velocity (580 / 585 / 523 accesses on actors, also on effects): the same space as `vel[3]` used as six
   halfwords. A union, or casts, at those sites.
8. **Byte views of halfwords and words.** Actor +0x5E is u16 in the engine and read as its low byte
   (`*(u8 *)&a->unk5E`, 56 u8 accesses in stage code); +0x74 is a u8 flag in most kinds but an s16 (0x1000 / 0x1080)
   in two; +0x108 is an s16 and the mode byte of SC03_001's path follower; +0xFC is s16 and also the start of
   copied structs (S12, SV8) in a few kinds; Musashi's +0x244 (u16) has a byte at +0x245, and his +0x234 / +0x238
   (s32) are read by halves at +0x236 / +0x23A.
9. **The model at +0xCC is not always a ModelObj.** func_801439C0 frees it with 0x38 bytes (the type-2 object);
   bytes are written at its +0x25 / +0x26 / +0x27, which in a 0x84-byte ModelObj are inside the `parts` pointer.
   The 0x38-byte type-2 object needs its own small struct (ModelObj's first 0x24 bytes match it).
10. **+0x58 hitData type.** u32 in game.h StageActor, `void *` in Mover and Player; the code ORs flags into it
    (0x60000000), masks them off (`& 0x0FFFFFFF`) and also stores a plain address (func_80132018). u32 for actors;
    Musashi's is used only as a pointer.
11. **+0x64 parent: `StageActor *` or Musashi.** func_80142454 stores `&D_80126B58` there. A generic `Obj *` (the
    header) is the honest type; game.h's `StageActor *` works if the card casts at that one site.
12. **Names that collide in game.h.** `StageActor.timer` (+0x98, the animation timer) vs `Mover.timer` (+0x1C, the
    countdown, `count` in StageActor); `state` (+0x00) is the kind, while `sub` and the reaction step are the states.
    The draft renames +0x98 to `animTimer` and +0x1C to `timer`.
13. **Mover is not a separate object.** game.h says the Mover is "not a StageActor: +0x44 is the display word there".
    By conflict 2 that reason goes away: every Mover routine is called with actors (`(void *)a`, `(Mover *)a` in
    engine_8012F5F4.c), and Mover's fields (+0x38 prev, +0x44 accel, +0x50 ofs, +0x58 hitData, +0x5C flags5C) are
    the actor's at the same offsets. Mover can become a typedef of StageActor, or stay as the routines' view.

## 6. Open questions (for a game-memory check)

Things the C cannot settle and a RAM dump or a live log (tools/live_log.py) could:

1. **Musashi's size.** The last field the code uses is +0x24A; 0x80126DB0 (+0x258) is a separate record and
   0x80126DB8 (+0x260) the Camera. Is +0x24C..+0x257 part of him (a dump at a stage load: does func_80016714 or a
   memset clear that range with him)?
2. **What is at 0x80126948 and 0x80126E60?** Both are used with the same field offsets (+0x0C, +0x14, +0x18..+0x24,
   +0x28..+0x32 as s16), 0x80126948 is passed to func_8012A094 and stage functions as an object, and both lie next
   to Musashi. They are not the object header (+0x20 is an s16 there). A dump while a stage runs would say what they
   are (camera targets? a second viewpoint?).
3. **The effect pool's extent and kinds.** 30 slots of 0x58 at 0x8011D030 by the loops; is the effect runner
   (the kind table) in the EXE or the stage? Dumping the pool during a fight would also show which kinds set
   +0x24..+0x2A.
4. **The ability packages' object array** (`AObj68`, 20 x 0x68 at 0x8011F9D0, include/abil.h): does it share the
   header (kind at +0x00, pos at +0x04, model at +0x20)? The unplaced functions of conflict 6 may be its users.
5. **Pool actor +0xA0..+0xA3, +0xB8..+0xBB, +0xCA..+0xCB, +0x56, +0x8E.** No code touches them: padding, or fields
   used only by code still in asm? A dump with many actors alive would show whether they are ever nonzero.
6. **Actor +0x24..+0x33.** Unused by the engine on actors; nonzero in a dump would mean kinds use it (the census saw
   only a few uses, possibly effects mislabelled).
7. **Musashi's mode values** (+0x00: 0x19, 0x1A, 0x1D, 0x1E ...): a live log of +0x00 while walking, swimming,
   climbing, in a cutscene would name them.
8. **Actor +0x75 (targetClass) and Musashi +0x16E:** logging both while locking on to different enemies would name
   the classes.
9. **+0x5E (hitCode):** confirm that the high byte is the hitter's serial (log it on an enemy while Musashi
   attacks) and list the attack types in the low byte (0x1D is known).
10. **The kinds.** Which kind numbers (+0x00, 1..0x363) are enemies, NPCs, props, pickups: the set-up table at
    0x8011DB08 in a dump gives each kind's handler, and the handler's stage file gives its name.

## 7. Field counts and what is left

Fields in the tables of section 3 (padding rows not counted; a row marked "H (spawn) / L" counts as H, "L / M" as L):

| group | H | M | L | total |
|---|---|---|---|---|
| ObjHeader (3.1) | 6 | 0 | 0 | 6 |
| StageActor engine part (3.2) | 30 | 10 | 5 | 45 |
| StageActor work area (3.3) | 2 | 4 | 11 | 17 |
| Player / Musashi (3.4) | 29 | 35 | 36 | 100 |
| Effect (3.5) | 3 | 1 | 3 | 7 |
| **all** | **70** | **50** | **55** | **175** |

What is left:
* **Apply** (local card): put the draft of section 4 in include/game.h (or a new include/object.h), convert call
  sites file by file keeping the read signedness (conflict 1), `make check` and `make check-stage` after each file.
  The engine files first (they already use StageActor / Mover / Player), then src/stg (80 % of the accesses).
* **The weak buckets.** 78 569 actor accesses are placed by the offset vote, not by a proven origin. A cheap
  improvement once the stage data is at hand (local): read the kinds' handler tables (0x8011DB08 for set-up, each
  kind's `D_xxx` state table) to give every stage handler a proven origin, then re-run the census.
* **Effects** are under-counted (only handlers that read the owner are recognised); the effect runner's kind table
  would place the rest the same way.
* **The unplaced objects** of conflict 6 and the ability packages' 0x68-byte array need their own small census.
* **Per-kind layouts.** The work area is one union here; naming it per kind needs the kind numbers tied to their
  handlers (open question 10). The census JSON has, per function, every work-area access, which is the input for
  that.
* The open questions of section 6.

## Status of this document

Complete for r273 (research only): census, groups, field tables, draft structs, conflicts, open questions.
Nothing in src/ or include/ was changed.

## Appendix A. The census, first level

Every offset read or written directly through an object pointer, per bucket. Columns: `n` accesses; `types` as
written (with counts); R / W / RW / & = read, write, read-modify-write, address taken; `funcs` and `files` that use
it; `areas` (engine = src/stage/engine*.c, stage-specific = src/stage/sc03_001.c, stg = src/stg, abil = src/abil,
exe = src/*.c, ovl36..3b); one example function (an engine one when there is one). `?abs` is an access to Musashi by
absolute address, whose type the script does not take from the declaration.

### Shared (functions reached by Musashi and by pool actors)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 2 | s16 1, u16 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80147078 |
| 0x002 | 6 | u16 5, s16 1 | 4 / 2 / 0 / 0 | 5 | 1 | engine 6 | engine_801458E0.c:func_80146CA0 |
| 0x004 | 2 | s32 2 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80162FC0 |
| 0x006 | 14 | s16 11, u16 3 | 12 / 1 / 1 / 0 | 13 | 8 | stg 7, engine 7 | engine_801458E0.c:func_8014ACE8 |
| 0x008 | 2 | s32 2 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80162FC0 |
| 0x00A | 13 | s16 9, u16 4 | 11 / 1 / 1 / 0 | 12 | 8 | stg 7, engine 6 | engine_801458E0.c:func_8014ACE8 |
| 0x00C | 2 | s32 2 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80162FC0 |
| 0x00E | 14 | s16 11, u16 3 | 12 / 1 / 1 / 0 | 13 | 8 | stg 7, engine 7 | engine_801458E0.c:func_8014ACE8 |
| 0x010 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80162FC0 |
| 0x012 | 2 | u16 1, s16 1 | 2 / 0 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80168BDC |
| 0x014 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80162FC0 |
| 0x016 | 2 | u16 1, s16 1 | 2 / 0 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80168BDC |
| 0x018 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80162FC0 |
| 0x01A | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80168BDC |
| 0x01C | 4 | s32 4 | 3 / 1 / 0 / 0 | 2 | 2 | engine 3, abil 1 | engine_801458E0.c:func_801687CC |
| 0x020 | 6 | void* 3, s32 2, u8* 1 | 6 / 0 / 0 / 0 | 6 | 2 | engine 5, abil 1 | engine_801458E0.c:func_80149350 |
| 0x024 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80146DE8 |
| 0x028 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80146DE8 |
| 0x02C | 2 | s32 2 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80146DE8 |
| 0x034 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8016E3CC |
| 0x044 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163534 |
| 0x046 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163534 |
| 0x048 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163534 |
| 0x04C | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163764 |
| 0x0AA | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801487F4 |

### Musashi (D_80126B58 and pointers that can only be him)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 128 | u16 127, s32 1 | 128 / 0 / 0 / 0 | 64 | 9 | engine 116, stg 12 | engine_801458E0.c:func_80148648 |
| 0x002 | 32 | u16 21, s16 11 | 19 / 13 / 0 / 0 | 28 | 9 | engine 15, abil 15, stg 2 | engine_801458E0.c:func_801516F0 |
| 0x004 | 256 | ?abs 232, s32 14, Fixed[] 5, s16 5 | 157 / 21 / 2 / 76 | 186 | 94 | stg 240, engine 16 | engine.c:func_8012AE00 |
| 0x006 | 548 | ?abs 393, s16 121, u16 34 | 487 / 56 / 4 / 1 | 404 | 120 | stg 461, engine 66, abil 16, stage-specific 5 | engine.c:func_8012A048 |
| 0x008 | 88 | ?abs 67, s32 16, s16 5 | 60 / 22 / 6 / 0 | 64 | 36 | stg 77, engine 11 | engine_801458E0.c:func_801473EC |
| 0x00A | 632 | ?abs 449, s16 128, u16 55 | 560 / 64 / 4 / 4 | 486 | 131 | stg 548, engine 60, abil 20, stage-specific 4 | engine.c:func_8012A048 |
| 0x00C | 106 | ?abs 77, s32 24, s16 5 | 79 / 25 / 2 / 0 | 75 | 52 | stg 95, engine 11 | engine_801458E0.c:func_801473EC |
| 0x00E | 598 | ?abs 423, s16 135, u16 40 | 534 / 53 / 9 / 2 | 437 | 122 | stg 515, engine 65, abil 13, stage-specific 5 | engine.c:func_8012A048 |
| 0x010 | 32 | s32 19, ?abs 13 | 21 / 11 / 0 / 0 | 24 | 8 | stg 17, engine 12, abil 3 | engine_801458E0.c:func_80146D30 |
| 0x012 | 3 | ?abs 2, s16 1 | 2 / 1 / 0 / 0 | 3 | 3 | stg 2, abil 1 | ovl23.c:func_ovl23_800CAF90 |
| 0x014 | 19 | s32 15, u16 2, ?abs 2 | 5 / 14 / 0 / 0 | 14 | 5 | engine 12, abil 5, stg 2 | engine_801458E0.c:func_80146D30 |
| 0x018 | 32 | s32 19, ?abs 13 | 21 / 11 / 0 / 0 | 24 | 8 | stg 17, engine 12, abil 3 | engine_801458E0.c:func_80146D30 |
| 0x01A | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc01_080.c:func_sc01_080_80181918 |
| 0x01C | 13 | s32 13 | 8 / 3 / 2 / 0 | 7 | 7 | abil 8, stg 3, engine 2 | engine_801458E0.c:func_80152500 |
| 0x020 | 771 | ?abs 308, void* 283, u8* 138, s32 27, ModelObj* 13, AModel* 2 | 745 / 26 / 0 / 0 | 488 | 129 | stg 572, engine 145, abil 54 | engine.c:func_8012AE00 |
| 0x024 | 15 | s32 15 | 9 / 6 / 0 / 0 | 10 | 4 | engine 11, stg 2, abil 2 | engine_801458E0.c:func_80147948 |
| 0x028 | 24 | s32 24 | 17 / 7 / 0 / 0 | 17 | 13 | stg 13, engine 8, abil 3 | engine_801458E0.c:func_801479BC |
| 0x02C | 62 | s32 58, ?abs 4 | 41 / 21 / 0 / 0 | 26 | 11 | engine 51, stg 8, abil 3 | engine_801458E0.c:func_80147A30 |
| 0x030 | 3 | u32 2, u16 1 | 2 / 1 / 0 / 0 | 1 | 1 | abil 3 | ovl23.c:func_ovl23_800CAF90 |
| 0x034 | 58 | s32 49, u16 5, ?abs 3, s16 1 | 39 / 14 / 5 / 0 | 38 | 18 | stg 34, engine 23, abil 1 | engine_801458E0.c:func_801477E8 |
| 0x038 | 65 | ?abs 55, s32 7, void* 2, s32* 1 | 62 / 3 / 0 / 0 | 64 | 33 | stg 60, engine 5 | engine.c:func_8012AE00 |
| 0x03C | 43 | u16 37, ?abs 5, s32 1 | 19 / 17 / 7 / 0 | 22 | 6 | engine 38, stg 5 | engine.c:func_8012F568 |
| 0x03E | 359 | ?abs 331, s16 16, u16 11, u8 1 | 50 / 222 / 9 / 78 | 255 | 70 | stg 332, engine 27 | engine.c:func_8012F568 |
| 0x040 | 123 | ?abs 103, s16 19, u16 1 | 9 / 114 / 0 / 0 | 111 | 48 | stg 104, engine 19 | engine.c:func_8012D5E4 |
| 0x042 | 60 | ?abs 31, s16 25, u16 4 | 6 / 54 / 0 / 0 | 54 | 26 | stg 40, engine 20 | engine.c:func_8012DEB8 |
| 0x044 | 248 | s32 187, ?abs 55, u32 3, SVECTOR 2, AVec 1 | 145 / 46 / 57 / 0 | 166 | 34 | engine 171, stg 45, abil 31, stage-specific 1 | engine_801458E0.c:func_80146128 |
| 0x048 | 4 | s32 3, ?abs 1 | 1 / 3 / 0 / 0 | 4 | 2 | stg 2, engine 2 | engine_801458E0.c:func_8014C6F4 |
| 0x04C | 33 | void* 15, s32 12, u8* 4, u8 1, ?abs 1 | 32 / 1 / 0 / 0 | 33 | 19 | stg 16, abil 11, engine 6 | engine_801458E0.c:func_8014704C |
| 0x04D | 26 | u8 26 | 10 / 10 / 6 / 0 | 16 | 4 | stg 26 | sc01_084.c:func_sc01_084_8017E608 |
| 0x04E | 3 | u8 2, ?abs 1 | 2 / 1 / 0 / 0 | 2 | 2 | engine 2, ovl36 1 | engine_801458E0.c:func_8014BFF4 |
| 0x04F | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80158880 |
| 0x050 | 41 | s32 41 | 32 / 6 / 3 / 0 | 24 | 13 | engine 18, stg 16, abil 7 | engine_801458E0.c:func_8015AE2C |
| 0x054 | 23 | s32 22, u8* 1 | 14 / 6 / 3 / 0 | 4 | 3 | engine 16, abil 7 | engine_801458E0.c:func_8015AE2C |
| 0x058 | 19 | s32 16, AVec 2, s16 1 | 10 / 6 / 3 / 0 | 4 | 3 | engine 16, abil 3 | engine_801458E0.c:func_8015AE2C |
| 0x05A | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl2d.c:func_ovl2d_800CB228 |
| 0x05C | 5 | s32 4, s16 1 | 2 / 3 / 0 / 0 | 3 | 2 | engine 4, abil 1 | engine_801458E0.c:func_8015AE2C |
| 0x05E | 3 | s16 3 | 1 / 2 / 0 / 0 | 2 | 1 | abil 3 | ovl32.c:func_ovl32_800CD1D4 |
| 0x060 | 169 | u16 86, s16 80, ?abs 3 | 42 / 126 / 1 / 0 | 124 | 50 | stg 130, engine 22, abil 17 | engine_801458E0.c:func_80147118 |
| 0x062 | 181 | u16 154, s16 24, ?abs 3 | 83 / 98 / 0 / 0 | 104 | 43 | stg 148, engine 21, abil 12 | engine_801458E0.c:func_80147118 |
| 0x064 | 183 | u16 159, s16 21, ?abs 3 | 85 / 98 / 0 / 0 | 104 | 42 | stg 148, engine 27, abil 8 | engine_801458E0.c:func_80147118 |
| 0x066 | 6 | s16 6 | 3 / 3 / 0 / 0 | 3 | 2 | abil 5, engine 1 | engine_801458E0.c:func_80163C2C |
| 0x068 | 5 | s16 4, ?abs 1 | 1 / 4 / 0 / 0 | 4 | 1 | engine 5 | engine_801458E0.c:func_80147118 |
| 0x06A | 5 | s16 4, ?abs 1 | 1 / 4 / 0 / 0 | 4 | 1 | engine 5 | engine_801458E0.c:func_80147118 |
| 0x06C | 6 | s16 4, s32 1, ?abs 1 | 2 / 4 / 0 / 0 | 5 | 2 | engine 5, stg 1 | engine_801458E0.c:func_80147118 |
| 0x070 | 8 | s16 6, ?abs 2 | 1 / 7 / 0 / 0 | 8 | 6 | stg 4, engine 3, abil 1 | engine_801458E0.c:func_80147118 |
| 0x072 | 8 | s16 6, ?abs 2 | 1 / 6 / 1 / 0 | 8 | 6 | stg 4, engine 3, abil 1 | engine_801458E0.c:func_80147118 |
| 0x074 | 9 | s16 6, ?abs 3 | 2 / 7 / 0 / 0 | 8 | 6 | stg 4, engine 3, abil 2 | engine_801458E0.c:func_80147118 |
| 0x07E | 2 | u16 2 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_801472C8 |
| 0x088 | 28 | s16 14, SVECTOR 7, ?abs 4, u16 2, SV8 1 | 15 / 12 / 0 / 1 | 24 | 6 | engine 22, stg 6 | engine_801458E0.c:func_801463A0 |
| 0x08A | 19 | s16 15, u16 2, ?abs 2 | 11 / 8 / 0 / 0 | 19 | 4 | engine 14, stg 5 | engine_801458E0.c:func_8014CC28 |
| 0x08C | 18 | s16 14, u16 2, ?abs 2 | 10 / 8 / 0 / 0 | 18 | 4 | engine 13, stg 5 | engine_801458E0.c:func_8014CC28 |
| 0x090 | 6 | SVECTOR 6 | 1 / 5 / 0 / 0 | 4 | 1 | engine 6 | engine_801458E0.c:func_801463A0 |
| 0x094 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80188240 |
| 0x098 | 4 | ?abs 2, s16 1, SVECTOR 1 | 4 / 0 / 0 / 0 | 4 | 4 | stg 3, engine 1 | engine_801458E0.c:func_8014BDE8 |
| 0x09C | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_801857E4 |
| 0x0A0 | 2 | u16 1, SVECTOR 1 | 2 / 0 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80153800 |
| 0x0A2 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80153800 |
| 0x0A4 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80153800 |
| 0x0A8 | 49 | u8 49 | 2 / 46 / 1 / 0 | 46 | 25 | stg 33, engine 16 | engine_801458E0.c:func_8015126C |
| 0x0A9 | 26 | u8 24, ?abs 2 | 19 / 7 / 0 / 0 | 22 | 8 | engine 18, stg 6, abil 2 | engine_801458E0.c:func_80148648 |
| 0x0AA | 54 | u16 50, s16 3, ?abs 1 | 19 / 21 / 14 / 0 | 31 | 7 | engine 32, stg 22 | engine_801458E0.c:func_80148648 |
| 0x0AC | 41 | u16 39, s16 2 | 17 / 10 / 14 / 0 | 28 | 7 | engine 21, stg 20 | engine_801458E0.c:func_80148648 |
| 0x0AE | 48 | u16 36, u8 7, ?abs 4, s16 1 | 32 / 15 / 1 / 0 | 23 | 4 | engine 30, stg 18 | engine_801458E0.c:func_80148648 |
| 0x0B0 | 6 | s32* 6 | 4 / 2 / 0 / 0 | 6 | 3 | engine 4, stg 2 | engine_801458E0.c:func_80154150 |
| 0x0B4 | 45 | s32 35, s32* 9, u32* 1 | 38 / 7 / 0 / 0 | 24 | 6 | engine 40, stg 5 | engine_801458E0.c:func_80151AE4 |
| 0x0B8 | 182 | u16 168, s16 13, u8 1 | 125 / 54 / 3 / 0 | 113 | 41 | engine 96, stg 58, abil 28 | engine_801458E0.c:func_80151AE4 |
| 0x0BA | 25 | u16 19, s16 6 | 17 / 8 / 0 / 0 | 20 | 11 | engine 14, stg 10, abil 1 | engine_801458E0.c:func_80154134 |
| 0x0BC | 47 | u8 47 | 15 / 10 / 22 / 0 | 12 | 1 | engine 47 | engine_801458E0.c:func_80154134 |
| 0x0BD | 23 | u8 23 | 1 / 8 / 14 / 0 | 7 | 1 | engine 23 | engine_801458E0.c:func_80154134 |
| 0x0BE | 16 | u8 15, ?abs 1 | 6 / 8 / 2 / 0 | 11 | 6 | abil 14, engine 2 | engine_801458E0.c:func_8015FCC8 |
| 0x0BF | 10 | u8 10 | 3 / 6 / 1 / 0 | 7 | 4 | abil 8, engine 2 | engine_801458E0.c:func_8015FCC8 |
| 0x0C0 | 7 | s32 7 | 2 / 5 / 0 / 0 | 2 | 1 | abil 7 | ovl13.c:func_ovl13_800CB054 |
| 0x0CC | 4 | s32* 4 | 2 / 2 / 0 / 0 | 4 | 3 | stg 2, engine 2 | engine_801458E0.c:StartFace |
| 0x0D0 | 6 | s32 6 | 4 / 2 / 0 / 0 | 5 | 1 | engine 6 | engine_801458E0.c:StartFace |
| 0x0D4 | 11 | u16 10, s16 1 | 5 / 6 / 0 / 0 | 7 | 3 | stg 8, engine 3 | engine_801458E0.c:func_80154AB4 |
| 0x0D6 | 2 | u16 1, s16 1 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80154AB4 |
| 0x0D8 | 2 | u8 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80154AB4 |
| 0x0D9 | 2 | u8 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80154AB4 |
| 0x0DA | 8 | u8 8 | 3 / 5 / 0 / 0 | 4 | 1 | engine 8 | engine_801458E0.c:func_80156A1C |
| 0x0DC | 14 | u8 14 | 2 / 9 / 3 / 0 | 8 | 1 | engine 14 | engine_801458E0.c:func_80154134 |
| 0x0DD | 18 | u8 18 | 6 / 12 / 0 / 0 | 15 | 1 | engine 18 | engine_801458E0.c:func_8015126C |
| 0x0DE | 111 | u8 111 | 34 / 72 / 5 / 0 | 71 | 19 | stg 71, engine 40 | engine_801458E0.c:func_801516F0 |
| 0x0DF | 33 | u8 33 | 5 / 28 / 0 / 0 | 28 | 17 | stg 22, engine 11 | engine_801458E0.c:func_8015220C |
| 0x0E0 | 4 | s32 1, SVECTOR 1, s16 1, ?abs 1 | 1 / 3 / 0 / 0 | 4 | 4 | stg 2, engine 2 | engine.c:func_8012F568 |
| 0x0E2 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80160410 |
| 0x0E4 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80160410 |
| 0x0E8 | 2 | SVECTOR 1, ?abs 1 | 0 / 2 / 0 / 0 | 2 | 2 | engine 1, stg 1 | engine.c:func_8012F568 |
| 0x0F0 | 2 | u16 2 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015126C |
| 0x0F2 | 71 | s16 70, u16 1 | 66 / 5 / 0 / 0 | 58 | 25 | stg 41, engine 30 | engine_801458E0.c:func_801511E0 |
| 0x0F4 | 16 | s16 9, u16 7 | 15 / 1 / 0 / 0 | 14 | 10 | stg 11, engine 5 | engine_801458E0.c:func_8015126C |
| 0x0F6 | 7 | s16 5, ?abs 2 | 1 / 6 / 0 / 0 | 7 | 3 | engine 5, abil 1, exe 1 | engine_801458E0.c:func_80158AE4 |
| 0x10A | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80187660 |
| 0x128 | 4 | s16 4 | 0 / 4 / 0 / 0 | 4 | 4 | stg 4 | sc02_011.c:func_sc02_011_80181FA0 |
| 0x12C | 4 | s16 4 | 0 / 4 / 0 / 0 | 4 | 4 | stg 4 | sc02_011.c:func_sc02_011_80181FA0 |
| 0x12E | 7 | s16 7 | 0 / 7 / 0 / 0 | 7 | 5 | stg 6, engine 1 | engine_801458E0.c:func_80158AE4 |
| 0x130 | 2 | s16 1, ?abs 1 | 0 / 2 / 0 / 0 | 2 | 2 | engine 1, stg 1 | engine_801458E0.c:func_801474D8 |
| 0x132 | 10 | u16 6, s16 3, ?abs 1 | 3 / 7 / 0 / 0 | 7 | 3 | stg 6, engine 4 | engine_801458E0.c:func_801474D8 |
| 0x134 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801474D8 |
| 0x136 | 4 | s16 4 | 0 / 4 / 0 / 0 | 4 | 1 | engine 4 | engine_801458E0.c:func_801474D8 |
| 0x138 | 3 | SVECTOR 1, s16 1, ?abs 1 | 1 / 2 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_8015D380 |
| 0x13A | 20 | s16 19, ?abs 1 | 9 / 7 / 4 / 0 | 8 | 5 | stg 18, engine 2 | engine_801458E0.c:func_8015D414 |
| 0x13C | 2 | s16 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D414 |
| 0x13E | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D414 |
| 0x140 | 1 | ?abs 1 | 0 / 0 / 0 / 1 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014CB9C |
| 0x146 | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_801463A0 |
| 0x154 | 34 | ?abs 27, s16 4, s16[] 2, u16 1 | 31 / 1 / 0 / 2 | 34 | 19 | stg 27, engine 7 | engine.c:func_8012A328 |
| 0x156 | 7 | s16 6, u16 1 | 6 / 1 / 0 / 0 | 4 | 3 | engine 7 | engine.c:func_8012A328 |
| 0x158 | 25 | ?abs 19, s16 5, u16 1 | 24 / 1 / 0 / 0 | 23 | 12 | stg 18, engine 7 | engine.c:func_8012A328 |
| 0x15A | 3 | s16 3 | 1 / 2 / 0 / 0 | 2 | 2 | engine 2, abil 1 | engine_801458E0.c:func_8014C6F4 |
| 0x15C | 35 | ?abs 31, s16[] 3, s16 1 | 26 / 9 / 0 / 0 | 33 | 19 | stg 31, engine 4 | engine.c:func_8012B864 |
| 0x15E | 42 | ?abs 42 | 33 / 9 / 0 / 0 | 42 | 33 | stg 42 | sc01_080.c:func_sc01_080_801824FC |
| 0x160 | 27 | ?abs 26, s16 1 | 18 / 9 / 0 / 0 | 26 | 14 | stg 26, engine 1 | engine.c:func_8012B864 |
| 0x162 | 24 | ?abs 20, s16 4 | 8 / 2 / 0 / 14 | 23 | 17 | stg 20, engine 4 | engine.c:func_8012BCCC |
| 0x164 | 1 | SVECTOR 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014C6F4 |
| 0x16C | 9 | u16 7, ?abs 2 | 5 / 4 / 0 / 0 | 6 | 2 | engine 9 | engine_801458E0.c:func_8014FA70 |
| 0x16E | 18 | u16 18 | 17 / 1 / 0 / 0 | 12 | 1 | engine 18 | engine_801458E0.c:func_8014FA70 |
| 0x170 | 11 | ?abs 7, s32 3, u8* 1 | 10 / 1 / 0 / 0 | 11 | 9 | stg 8, engine 3 | engine_801458E0.c:func_8015C944 |
| 0x178 | 26 | s32 16, void* 5, u8* 4, ?abs 1 | 21 / 5 / 0 / 0 | 21 | 2 | engine 22, abil 4 | engine_801458E0.c:func_801496D4 |
| 0x17C | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 1 | 1 | stg 2 | sc05_001.c:func_sc05_001_8018098C |
| 0x180 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D01C |
| 0x184 | 23 | s32 13, u8* 6, u32 3, ?abs 1 | 13 / 10 / 0 / 0 | 10 | 1 | engine 23 | engine_801458E0.c:func_8014A048 |
| 0x188 | 51 | ?abs 31, s16 17, u16 3 | 38 / 12 / 1 / 0 | 33 | 22 | stg 26, engine 25 | engine.c:func_8012E364 |
| 0x18A | 7 | s16 4, u16 3 | 1 / 5 / 1 / 0 | 4 | 1 | engine 7 | engine_801458E0.c:func_8016004C |
| 0x18C | 7 | u8* 5, s32 2 | 4 / 3 / 0 / 0 | 5 | 1 | engine 7 | engine_801458E0.c:func_8014A850 |
| 0x190 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80149DD8 |
| 0x194 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x196 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015FF20 |
| 0x197 | 90 | u8 90 | 29 / 31 / 30 / 0 | 61 | 26 | abil 82, engine 8 | engine_801458E0.c:func_8015FCC8 |
| 0x198 | 60 | s32 48, ?abs 12 | 21 / 39 / 0 / 0 | 37 | 14 | stg 34, engine 26 | engine_801458E0.c:func_8014C99C |
| 0x1A0 | 7 | u8 6, ?abs 1 | 4 / 3 / 0 / 0 | 5 | 1 | engine 7 | engine_801458E0.c:func_8015FCC8 |
| 0x1A8 | 4 | u8 4 | 3 / 0 / 1 / 0 | 3 | 1 | engine 4 | engine_801458E0.c:func_8015444C |
| 0x1A9 | 2 | u8 2 | 2 / 0 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80155800 |
| 0x1AA | 42 | u8 42 | 21 / 21 / 0 / 0 | 32 | 4 | engine 36, abil 6 | engine_801458E0.c:func_80149AD4 |
| 0x1AB | 4 | u8 4 | 1 / 0 / 3 / 0 | 3 | 2 | engine 3, abil 1 | engine_801458E0.c:func_801555F4 |
| 0x1AC | 7 | s32 7 | 2 / 4 / 1 / 0 | 5 | 2 | engine 6, abil 1 | engine_801458E0.c:func_80152714 |
| 0x1B0 | 7 | s32 7 | 5 / 1 / 1 / 0 | 4 | 2 | engine 6, stg 1 | engine_801458E0.c:func_80146128 |
| 0x1B4 | 2 | s32* 1, s32 1 | 1 / 1 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_801458E0.c:func_8015AE2C |
| 0x1B8 | 5 | u16 2, ?abs 2, s16 1 | 1 / 2 / 2 / 0 | 4 | 3 | engine 2, abil 2, exe 1 | engine_801458E0.c:func_80158AE4 |
| 0x1BA | 5 | u16 2, ?abs 2, s16 1 | 1 / 2 / 2 / 0 | 4 | 3 | engine 2, abil 2, exe 1 | engine_801458E0.c:func_80158AE4 |
| 0x1BC | 4 | u8 4 | 2 / 2 / 0 / 0 | 3 | 1 | engine 4 | engine_801458E0.c:func_8014A674 |
| 0x1BD | 4 | u8 4 | 2 / 2 / 0 / 0 | 3 | 1 | engine 4 | engine_801458E0.c:func_8014A69C |
| 0x1BE | 5 | u8 5 | 2 / 3 / 0 / 0 | 3 | 1 | engine 5 | engine_801458E0.c:func_8014A6C4 |
| 0x1BF | 3 | ?abs 2, u8 1 | 1 / 2 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_801508F8 |
| 0x1C0 | 5 | u8 5 | 4 / 1 / 0 / 0 | 5 | 1 | engine 5 | engine_801458E0.c:func_80155800 |
| 0x1C2 | 3 | ?abs 3 | 0 / 3 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_8016EE94 |
| 0x1C3 | 3 | u8 3 | 1 / 2 / 0 / 0 | 1 | 1 | engine 3 | engine_801458E0.c:func_8014C6F4 |
| 0x1C4 | 2 | u8 1, ?abs 1 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8014B5B0 |
| 0x1C5 | 4 | u8 3, ?abs 1 | 2 / 2 / 0 / 0 | 3 | 1 | engine 4 | engine_801458E0.c:func_80148648 |
| 0x1C6 | 6 | u8 4, ?abs 2 | 4 / 2 / 0 / 0 | 5 | 1 | engine 6 | engine_801458E0.c:func_8015AE2C |
| 0x1C7 | 2 | u8 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8014B5D0 |
| 0x1C8 | 25 | s16 18, ?abs 6, u16 1 | 9 / 15 / 1 / 0 | 23 | 6 | engine 16, abil 6, stg 3 | engine_801458E0.c:func_80149C08 |
| 0x1CA | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1CC | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1CE | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1D0 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1D4 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1D8 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1DC | 2 | s32 2 | 0 / 2 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80149228 |
| 0x1E0 | 3 | s32 3 | 1 / 2 / 0 / 0 | 1 | 1 | engine 3 | engine_801458E0.c:func_80149228 |
| 0x1E4 | 7 | s16 6, s32 1 | 2 / 5 / 0 / 0 | 2 | 1 | engine 7 | engine_801458E0.c:func_80149210 |
| 0x1E6 | 3 | u16 2, s16 1 | 2 / 1 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_80149210 |
| 0x1E8 | 1 | ?abs 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80162B1C |
| 0x1F4 | 29 | s32 29 | 18 / 11 / 0 / 0 | 19 | 1 | engine 29 | engine_801458E0.c:func_80172588 |
| 0x1F8 | 56 | ?abs 41, s32 14, u32 1 | 38 / 12 / 6 / 0 | 42 | 14 | engine 32, stg 24 | engine_801458E0.c:func_8015126C |
| 0x1FC | 13 | ?abs 13 | 10 / 3 / 0 / 0 | 13 | 10 | stg 10, engine 3 | engine_801458E0.c:func_8016EE94 |
| 0x200 | 77 | s32 77 | 36 / 36 / 5 / 0 | 35 | 10 | stg 72, engine 5 | engine_801458E0.c:func_80173CB4 |
| 0x204 | 50 | s32 48, ?abs 2 | 10 / 37 / 3 / 0 | 32 | 12 | stg 48, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x206 | 5 | s16 5 | 5 / 0 / 0 / 0 | 5 | 2 | stg 5 | sc01_074.c:func_sc01_074_8017D5A8 |
| 0x208 | 20 | s32 18, ?abs 2 | 6 / 10 / 4 / 0 | 12 | 7 | stg 18, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x20A | 4 | u16 4 | 4 / 0 / 0 / 0 | 4 | 4 | stg 4 | sc01_005.c:func_sc01_005_8017BF70 |
| 0x20C | 83 | s16 44, u8 19, u16 18, ?abs 2 | 34 / 39 / 10 / 0 | 52 | 17 | stg 79, engine 4 | engine_801458E0.c:func_80171B4C |
| 0x20D | 7 | u8 7 | 6 / 0 / 1 / 0 | 5 | 5 | stg 7 | sc02_005.c:func_sc02_005_801814B4 |
| 0x20E | 55 | s16 31, u16 22, ?abs 2 | 23 / 30 / 2 / 0 | 28 | 12 | stg 53, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x20F | 6 | u8 6 | 4 / 2 / 0 / 0 | 2 | 2 | stg 6 | sc02_000.c:func_sc02_000_80183BA4 |
| 0x210 | 18 | s16 14, u16 2, ?abs 2 | 7 / 8 / 3 / 0 | 11 | 7 | stg 16, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x211 | 6 | u8 6 | 4 / 2 / 0 / 0 | 2 | 2 | stg 6 | sc02_000.c:func_sc02_000_80183BA4 |
| 0x212 | 6 | u16 2, s16 2, ?abs 2 | 1 / 3 / 2 / 0 | 5 | 4 | stg 4, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x213 | 6 | u8 6 | 4 / 2 / 0 / 0 | 2 | 2 | stg 6 | sc02_000.c:func_sc02_000_80183BA4 |
| 0x214 | 220 | u8 207, ?abs 13 | 147 / 44 / 29 / 0 | 182 | 32 | stg 196, engine 22, stage-specific 2 | engine_801458E0.c:func_801727D0 |
| 0x215 | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x216 | 10 | u8 8, ?abs 2 | 2 / 8 / 0 / 0 | 8 | 7 | stg 8, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x218 | 13 | u8 11, ?abs 2 | 11 / 2 / 0 / 0 | 10 | 4 | stg 11, engine 2 | engine_801458E0.c:func_8016ED8C |
| 0x21C | 2 | s32 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015EA3C |
| 0x220 | 3 | u8 3 | 1 / 2 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_80147098 |
| 0x221 | 2 | u8 2 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8014708C |
| 0x222 | 3 | u8 3 | 1 / 2 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_801470AC |
| 0x223 | 5 | u8 5 | 2 / 3 / 0 / 0 | 4 | 1 | engine 5 | engine_801458E0.c:func_80149BEC |
| 0x234 | 121 | s32 110, s16 8, u16 3 | 48 / 57 / 16 / 0 | 60 | 14 | engine 59, abil 42, stg 20 | engine_801458E0.c:func_80158038 |
| 0x236 | 13 | s16 8, u16 5 | 8 / 5 / 0 / 0 | 6 | 2 | abil 11, engine 2 | engine_801458E0.c:func_80159404 |
| 0x238 | 50 | s32 46, u16 2, s16 2 | 12 / 33 / 5 / 0 | 26 | 5 | abil 28, engine 22 | engine_801458E0.c:func_80158CD8 |
| 0x23A | 7 | u16 5, s16 2 | 5 / 2 / 0 / 0 | 5 | 3 | abil 5, engine 2 | engine_801458E0.c:func_80159434 |
| 0x23C | 39 | s32 39 | 14 / 22 / 3 / 0 | 19 | 3 | abil 23, engine 16 | engine_801458E0.c:func_8015A2D8 |
| 0x240 | 9 | s32 4, u16 4, s16 1 | 3 / 5 / 1 / 0 | 5 | 2 | abil 5, engine 4 | engine_801458E0.c:func_8015AE2C |
| 0x244 | 35 | u16 15, s16 12, u8 8 | 13 / 22 / 0 / 0 | 27 | 8 | engine 21, stg 8, abil 6 | engine_801458E0.c:func_80153D7C |
| 0x245 | 6 | u8 6 | 2 / 4 / 0 / 0 | 2 | 1 | engine 6 | engine_801458E0.c:func_8015F380 |
| 0x246 | 19 | u16 13, s16 6 | 9 / 9 / 1 / 0 | 8 | 4 | abil 14, engine 4, stg 1 | engine_801458E0.c:func_80153D7C |
| 0x248 | 8 | u16 5, s16 3 | 3 / 5 / 0 / 0 | 6 | 3 | engine 4, abil 3, stg 1 | engine_801458E0.c:func_80153D7C |
| 0x24A | 5 | s16 3, u16 2 | 2 / 3 / 0 / 0 | 4 | 2 | engine 4, abil 1 | engine_801458E0.c:func_80156B74 |
| 0x258 | 5 | ?abs 5 | 3 / 0 / 0 / 2 | 3 | 2 | engine 5 | engine_80144B9C.c:func_80144B9C |
| 0x25E | 3 | ?abs 3 | 2 / 1 / 0 / 0 | 3 | 2 | engine 3 | engine_80144B9C.c:func_80144B9C |
| 0x260 | 5 | ?abs 5 | 0 / 3 / 0 / 2 | 5 | 1 | engine 5 | engine.c:func_80129C40 |

### Pool actors (StageActor slots, 0x10C)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 465 | u16 460, s32 5 | 464 / 1 / 0 / 0 | 415 | 100 | stg 436, engine 24, stage-specific 3, abil 2 | engine.c:func_8012A988 |
| 0x002 | 9534 | s16 5694, u16 3840 | 3021 / 6155 / 358 / 0 | 7253 | 177 | stg 9102, stage-specific 260, engine 104, abil 68 | engine.c:func_8012AD44 |
| 0x004 | 545 | s32 534, Fixed[] 8, u16 3 | 139 / 347 / 59 / 0 | 416 | 88 | stg 521, engine 20, stage-specific 4 | engine.c:func_8012AD80 |
| 0x006 | 2696 | s16 1577, u16 1117, volatile s16 2 | 1663 / 878 / 155 / 0 | 1751 | 137 | stg 2618, engine 53, stage-specific 13, abil 12 | engine.c:func_8012AE00 |
| 0x008 | 441 | s32 428, s16 9, u16 3, u32 1 | 118 / 294 / 29 / 0 | 365 | 94 | stg 428, engine 8, stage-specific 4, abil 1 | engine.c:func_8012AD80 |
| 0x00A | 3482 | s16 1949, u16 1531, volatile s16 2 | 2057 / 1123 / 302 / 0 | 2066 | 146 | stg 3379, engine 71, abil 25, stage-specific 7 | engine.c:func_8012AE00 |
| 0x00C | 529 | s32 526, u16 3 | 131 / 337 / 61 / 0 | 408 | 89 | stg 514, engine 11, stage-specific 4 | engine.c:func_8012AD80 |
| 0x00E | 2728 | s16 1630, u16 1098 | 1688 / 856 / 184 / 0 | 1767 | 138 | stg 2649, engine 54, stage-specific 15, abil 10 | engine.c:func_8012AE00 |
| 0x010 | 644 | s32 636, s32[] 2, void* 2, u16 2, AVec 1, s16 1 | 202 / 422 / 20 / 0 | 382 | 90 | stg 608, engine 24, abil 9, stage-specific 3 | engine.c:func_8012AD80 |
| 0x012 | 580 | s16 327, u16 253 | 152 / 427 / 1 / 0 | 262 | 65 | stg 574, abil 6 | sc02_000.c:func_sc02_000_80187738 |
| 0x014 | 742 | s32 737, u16 4, s16 1 | 170 / 484 / 88 / 0 | 513 | 100 | stg 717, engine 15, abil 7, stage-specific 3 | engine.c:func_8012AD80 |
| 0x016 | 585 | s16 450, u16 135 | 71 / 498 / 16 / 0 | 369 | 68 | stg 580, stage-specific 4, abil 1 | sc02_005.c:func_sc02_005_8018DB40 |
| 0x018 | 662 | s32 648, s16 9, u16 5 | 195 / 452 / 15 / 0 | 393 | 90 | stg 628, engine 22, abil 9, stage-specific 3 | engine.c:func_8012AD80 |
| 0x01A | 523 | s16 321, u16 202 | 125 / 398 / 0 / 0 | 250 | 59 | stg 523 | sc01_077.c:func_sc01_077_801806D8 |
| 0x01C | 5656 | s32 5648, u8 5, s16 3 | 1486 / 3458 / 712 / 0 | 2791 | 135 | stg 5570, engine 51, stage-specific 28, abil 7 | engine.c:func_8012BEE8 |
| 0x020 | 12069 | u8* 7211, s32 2845, void* 1910, ModelObj* 97, Sub* 2, T20* 2, u32 1, AModel* 1 | 11099 / 970 / 0 / 0 | 4258 | 159 | stg 11790, engine 158, stage-specific 61, abil 60 | engine.c:func_8012AAAC |
| 0x024 | 11 | s32 6, s16 4, u16 1 | 1 / 10 / 0 / 0 | 11 | 9 | stg 11 | sc01_077.c:func_sc01_077_80183324 |
| 0x026 | 6 | s16 5, u16 1 | 0 / 5 / 1 / 0 | 6 | 5 | stg 6 | sc01_084.c:func_sc01_084_80184090 |
| 0x028 | 12 | s32 7, s16 4, u16 1 | 1 / 10 / 1 / 0 | 12 | 9 | stg 12 | sc01_077.c:func_sc01_077_80183324 |
| 0x02A | 6 | s16 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc01_077.c:func_sc01_077_801865EC |
| 0x02C | 154 | s32 149, s16 4, SVECTOR 1 | 144 / 9 / 1 / 0 | 25 | 14 | stg 149, engine 5 | engine_801458E0.c:func_80164EE0 |
| 0x02E | 4 | u16 3, s16 1 | 1 / 3 / 0 / 0 | 2 | 1 | engine 4 | engine_801458E0.c:func_80164EE0 |
| 0x030 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc05_008.c:func_sc05_008_80182490 |
| 0x034 | 4257 | u16 2514, s16 1743 | 1122 / 2167 / 968 / 0 | 1655 | 111 | stg 4142, stage-specific 110, engine 5 | engine.c:func_8012AD44 |
| 0x036 | 165 | u16 102, s16 63 | 164 / 1 / 0 / 0 | 107 | 47 | stg 158, engine 6, abil 1 | engine.c:func_8012C890 |
| 0x038 | 193 | s32 193 | 184 / 9 / 0 / 0 | 139 | 38 | stg 190, engine 3 | engine.c:func_8012ADE4 |
| 0x03A | 114 | u16 66, s16 48 | 104 / 10 / 0 / 0 | 104 | 51 | stg 108, engine 5, stage-specific 1 | engine.c:func_8012AE00 |
| 0x03C | 136 | s32 136 | 127 / 9 / 0 / 0 | 130 | 36 | stg 133, engine 3 | engine.c:func_8012ADE4 |
| 0x03E | 114 | u16 66, s16 48 | 104 / 10 / 0 / 0 | 104 | 51 | stg 108, engine 5, stage-specific 1 | engine.c:func_8012AE00 |
| 0x040 | 193 | s32 193 | 184 / 9 / 0 / 0 | 139 | 38 | stg 190, engine 3 | engine.c:func_8012ADE4 |
| 0x042 | 114 | u16 66, s16 48 | 104 / 10 / 0 / 0 | 104 | 51 | stg 108, engine 5, stage-specific 1 | engine.c:func_8012AE00 |
| 0x044 | 90 | s32 89, s16 1 | 12 / 78 / 0 / 0 | 66 | 33 | stg 82, engine 6, stage-specific 1, abil 1 | engine.c:func_8012AD80 |
| 0x046 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl22.c:func_ovl22_800CB6D4 |
| 0x048 | 358 | s32 358 | 51 / 305 / 2 / 0 | 261 | 78 | stg 353, engine 4, stage-specific 1 | engine.c:func_8012AD80 |
| 0x04C | 118 | s32 91, void* 16, u8* 11 | 48 / 70 / 0 / 0 | 95 | 44 | stg 76, abil 34, engine 7, stage-specific 1 | engine.c:func_8012AD80 |
| 0x050 | 61 | s32 28, s16 12, SV8 12, u16 5, B8 2, u8 1, SCol 1 | 42 / 18 / 1 / 0 | 50 | 33 | stg 30, abil 20, engine 11 | engine.c:func_8012B260 |
| 0x051 | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80165124 |
| 0x052 | 103 | s16 95, u16 7, u8 1 | 17 / 83 / 3 / 0 | 83 | 38 | stg 91, engine 12 | engine.c:func_8012B260 |
| 0x054 | 27 | s16 16, s32 6, u16 5 | 15 / 12 / 0 / 0 | 24 | 14 | stg 12, engine 9, abil 6 | engine.c:func_8012B260 |
| 0x058 | 744 | s32 530, s32* 56, u32 53, u8* 47, void* 45, u16 6, s16 3, u8 3, u32* 1 | 156 / 586 / 2 / 0 | 599 | 117 | stg 699, engine 21, abil 16, stage-specific 8 | engine.c:func_8012AF0C |
| 0x059 | 3 | u8 3 | 1 / 2 / 0 / 0 | 2 | 1 | abil 3 | ovl20.c:func_ovl20_800CB688 |
| 0x05A | 14 | u16 8, s16 3, u8 3 | 6 / 8 / 0 / 0 | 7 | 4 | abil 12, engine 2 | engine_801458E0.c:func_80163EC8 |
| 0x05B | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | abil 1 | ovl20.c:func_ovl20_800CB688 |
| 0x05C | 1582 | u16 885, s16 693, u8 3, s32 1 | 111 / 1250 / 221 / 0 | 1201 | 120 | stg 1533, engine 32, stage-specific 12, abil 5 | engine.c:func_8012BF54 |
| 0x05D | 3 | u8 3 | 1 / 2 / 0 / 0 | 2 | 1 | abil 3 | ovl20.c:func_ovl20_800CB688 |
| 0x05E | 731 | s16 338, u16 331, u8 62 | 319 / 412 / 0 / 0 | 448 | 95 | stg 715, engine 13, abil 3 | engine.c:func_8012DBD0 |
| 0x05F | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | abil 1 | ovl20.c:func_ovl20_800CB688 |
| 0x060 | 335 | s16 273, u16 61, AVec 1 | 215 / 119 / 1 / 0 | 165 | 69 | stg 284, abil 35, engine 16 | engine.c:func_8012DBD0 |
| 0x062 | 144 | s16 75, u16 69 | 85 / 58 / 1 / 0 | 125 | 55 | stg 109, abil 18, engine 17 | engine.c:func_8012DBD0 |
| 0x064 | 1983 | u8* 1366, void* 396, s32 208, s16 7, StageActor* 3, u16 2, Player* 1 | 1962 / 21 / 0 / 0 | 873 | 110 | stg 1948, engine 25, abil 9, stage-specific 1 | engine.c:func_8012C890 |
| 0x066 | 12 | u16 10, s16 2 | 6 / 5 / 1 / 0 | 6 | 3 | engine 7, abil 5 | engine_801458E0.c:func_80163EC8 |
| 0x067 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x068 | 169 | void* 107, u8* 58, SpawnDef* 4 | 167 / 2 / 0 / 0 | 158 | 41 | stg 149, stage-specific 16, engine 4 | engine.c:func_8012C098 |
| 0x06C | 217 | s32 119, u8* 90, void* 8 | 113 / 104 / 0 / 0 | 139 | 55 | stg 215, engine 2 | engine_801458E0.c:func_80178744 |
| 0x070 | 3259 | s16 1741, u16 1492, u8 26 | 2958 / 246 / 55 / 0 | 1877 | 133 | stg 3220, engine 23, stage-specific 16 | engine.c:func_8012C890 |
| 0x072 | 435 | u16 417, s16 18 | 370 / 42 / 23 / 0 | 300 | 90 | stg 410, engine 23, stage-specific 2 | engine.c:SetScript |
| 0x074 | 66 | u8 66 | 66 / 0 / 0 / 0 | 60 | 32 | stg 65, engine 1 | engine.c:func_8012DFD4 |
| 0x075 | 316 | u8 315, s8 1 | 0 / 316 / 0 / 0 | 275 | 95 | stg 316 | sc01_077.c:func_sc01_077_801803B0 |
| 0x076 | 495 | s16 438, u16 57 | 257 / 157 / 81 / 0 | 293 | 77 | stg 483, engine 12 | engine.c:func_8012C354 |
| 0x078 | 270 | u8* 161, void* 54, s32 30, u16* 11, s16* 9, s32* 5 | 219 / 51 / 0 / 0 | 221 | 74 | stg 260, engine 8, exe 1, stage-specific 1 | engine.c:func_8012C354 |
| 0x07C | 78 | s16 72, u16 6 | 15 / 63 / 0 / 0 | 77 | 35 | stg 72, engine 6 | engine.c:func_8012E9C0 |
| 0x07E | 78 | s16 72, u16 6 | 15 / 63 / 0 / 0 | 77 | 35 | stg 72, engine 6 | engine.c:func_8012E9C0 |
| 0x080 | 78 | s16 72, u16 6 | 15 / 63 / 0 / 0 | 77 | 35 | stg 72, engine 6 | engine.c:func_8012E9C0 |
| 0x082 | 85 | u16 47, s16 38 | 44 / 41 / 0 / 0 | 44 | 15 | stg 81, engine 4 | engine.c:func_8012E9C0 |
| 0x084 | 269 | s16 181, u16 88 | 88 / 146 / 35 / 0 | 112 | 45 | stg 265, stage-specific 4 | sc01_077.c:func_sc01_077_8017F714 |
| 0x086 | 127 | u16 120, s16 7 | 70 / 22 / 35 / 0 | 62 | 14 | stg 127 | sc01_077.c:func_sc01_077_80183324 |
| 0x088 | 330 | u16 178, s16 151, SV8 1 | 267 / 63 / 0 / 0 | 277 | 68 | stg 329, engine 1 | engine.c:func_8012C890 |
| 0x08A | 273 | u16 160, s16 113 | 210 / 63 / 0 / 0 | 227 | 75 | stg 271, engine 1, stage-specific 1 | engine.c:func_8012C890 |
| 0x08C | 312 | u16 159, s16 153 | 256 / 56 / 0 / 0 | 264 | 70 | stg 311, engine 1 | engine.c:func_8012C890 |
| 0x090 | 167 | u8* 91, s32 60, AnimEntry* 10, K8* 3, S12** 2, void* 1 | 155 / 9 / 0 / 3 | 107 | 50 | stg 156, engine 11 | engine.c:SetScript |
| 0x094 | 535 | s32 503, u32 32 | 410 / 101 / 24 / 0 | 367 | 72 | stg 517, engine 18 | engine.c:SetScript |
| 0x098 | 604 | s16 604 | 281 / 322 / 1 / 0 | 474 | 102 | stg 581, engine 22, stage-specific 1 | engine.c:func_8012A988 |
| 0x09A | 11 | s16 11 | 2 / 9 / 0 / 0 | 7 | 2 | engine 9, stg 2 | engine.c:SetScript |
| 0x09C | 15 | AnimEntry* 11, s32 3, S12* 1 | 6 / 9 / 0 / 0 | 7 | 2 | engine 11, stg 4 | engine.c:SetScript |
| 0x0A4 | 10 | s32 10 | 4 / 6 / 0 / 0 | 2 | 2 | stg 10 | sc02_000.c:func_sc02_000_80188F60 |
| 0x0A8 | 14 | u16 8, s16 6 | 10 / 4 / 0 / 0 | 4 | 2 | stg 14 | sc02_000.c:func_sc02_000_80188F60 |
| 0x0AA | 66 | s16 66 | 41 / 24 / 1 / 0 | 61 | 29 | stg 61, engine 5 | engine.c:func_8012DF34 |
| 0x0AC | 25 | s16 25 | 4 / 13 / 8 / 0 | 21 | 10 | stg 19, engine 6 | engine_8012F5F4.c:func_8012F968 |
| 0x0AE | 298 | s16 272, u16 25, u8[] 1 | 12 / 279 / 7 / 0 | 268 | 90 | stg 297, engine 1 | engine.c:func_8012DBD0 |
| 0x0B0 | 97 | s32 77, u32 20 | 22 / 75 / 0 / 0 | 75 | 13 | stg 88, stage-specific 8, engine 1 | engine_8012F5F4.c:func_80131E00 |
| 0x0B4 | 342 | s32 306, u32 36 | 39 / 298 / 5 / 0 | 314 | 91 | stg 305, engine 36, stage-specific 1 | engine_8012F5F4.c:func_8012F68C |
| 0x0BC | 414 | u8* 225, s32* 154, s32 30, void* 5 | 6 / 408 / 0 / 0 | 303 | 85 | stg 408, engine 6 | engine_8012F5F4.c:func_80130D48 |
| 0x0C0 | 413 | u8 413 | 2 / 411 / 0 / 0 | 389 | 104 | stg 409, engine 2, stage-specific 2 | engine_801458E0.c:func_8017849C |
| 0x0C1 | 410 | u8 410 | 50 / 360 / 0 / 0 | 352 | 80 | stg 381, engine 28, stage-specific 1 | engine.c:func_8012A988 |
| 0x0C2 | 266 | u8 266 | 54 / 195 / 17 / 0 | 150 | 52 | stg 246, engine 20 | engine_8012F5F4.c:func_8012F5F4 |
| 0x0C3 | 84 | u8 84 | 28 / 39 / 17 / 0 | 62 | 28 | stg 78, engine 6 | engine_8012F5F4.c:func_801300F4 |
| 0x0C4 | 423 | s32 397, u32 26 | 153 / 155 / 115 / 0 | 276 | 82 | stg 398, engine 24, stage-specific 1 | engine_8012F5F4.c:func_8012F5F4 |
| 0x0C8 | 54 | u8 52, u32 2 | 54 / 0 / 0 / 0 | 53 | 18 | stg 51, engine 2, exe 1 | engine_8012F5F4.c:func_80131B14 |
| 0x0C9 | 50 | u8 50 | 50 / 0 / 0 / 0 | 50 | 16 | stg 49, exe 1 | code_800123F0.c:func_8002A790 |
| 0x0CC | 1768 | s32 713, u8* 693, void* 274, s32* 34, WMtx* 17, u16* 12, s16* 12, u16 6, s16 4, u32* 1, SV8* 1, B8 1 | 1191 / 573 / 4 / 0 | 1166 | 118 | stg 1714, stage-specific 43, engine 11 | engine_8013C98C.c:func_80142B2C |
| 0x0CE | 11 | u16 7, s16 4 | 1 / 10 / 0 / 0 | 10 | 7 | stg 11 | sc05_008.c:func_sc05_008_8017EAE4 |
| 0x0D0 | 799 | s32 341, u8* 334, void* 63, s32* 24, WMtx* 17, s16 9, u16 6, s16* 5 | 550 / 247 / 2 / 0 | 514 | 92 | stg 792, stage-specific 7 | sc01_005.c:func_sc01_005_80180A38 |
| 0x0D2 | 3 | s16 3 | 0 / 3 / 0 / 0 | 3 | 2 | stg 3 | sc05_008.c:func_sc05_008_8017E354 |
| 0x0D4 | 265 | s32 185, u8* 69, u16 6, void* 3, s16* 2 | 128 / 137 / 0 / 0 | 185 | 46 | stg 249, stage-specific 14, engine 2 | engine_801458E0.c:func_80178D40 |
| 0x0D6 | 6 | u16 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0D8 | 144 | s32 65, u8* 37, U12x9* 27, u16 6, void* 4, s16* 2, s16 2, B6C* 1 | 60 / 84 / 0 / 0 | 110 | 57 | stg 140, stage-specific 3, engine 1 | engine_801458E0.c:func_80178D40 |
| 0x0DC | 1248 | s32 653, s16 255, u8* 134, void* 117, u16 76, s32* 7, u32 3, s16* 3 | 687 / 410 / 151 / 0 | 824 | 123 | stg 1240, stage-specific 5, engine 3 | engine.c:func_8012C890 |
| 0x0DE | 295 | s16 205, u16 90 | 164 / 119 / 12 / 0 | 180 | 69 | stg 292, stage-specific 3 | sc01_001.c:func_sc01_001_801810A4 |
| 0x0E0 | 1053 | s32 884, s16 166, u16 3 | 435 / 354 / 264 / 0 | 523 | 88 | stg 1046, stage-specific 6, engine 1 | engine_801458E0.c:func_80178D40 |
| 0x0E2 | 201 | s16 143, u16 58 | 59 / 139 / 3 / 0 | 87 | 24 | stg 201 | sc01_077.c:func_sc01_077_80180B64 |
| 0x0E4 | 537 | s32 393, s16 130, u16 10, u32 3, u8* 1 | 228 / 253 / 56 / 0 | 290 | 68 | stg 530, stage-specific 7 | sc01_077.c:func_sc01_077_8017F5BC |
| 0x0E6 | 101 | s16 83, u16 18 | 39 / 56 / 6 / 0 | 57 | 23 | stg 101 | sc01_005.c:func_sc01_005_80180BDC |
| 0x0E8 | 626 | s32 437, s16 134, s16* 20, u16* 20, u16 11, u32 4 | 257 / 301 / 68 / 0 | 314 | 67 | stg 615, stage-specific 11 | sc01_077.c:func_sc01_077_80180F10 |
| 0x0EA | 89 | s16 85, u16 4 | 38 / 49 / 2 / 0 | 36 | 22 | stg 85, stage-specific 4 | sc01_077.c:func_sc01_077_801863B4 |
| 0x0EC | 117 | s32 50, s16 48, S12 10, u8 6, s32* 3 | 51 / 60 / 6 / 0 | 87 | 38 | stg 116, stage-specific 1 | sc02_017.c:func_sc02_017_8017FE78 |
| 0x0ED | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0EE | 30 | s16 24, u8 6 | 7 / 23 / 0 / 0 | 27 | 12 | stg 30 | sc03_089.c:func_sc03_089_801858BC |
| 0x0F0 | 45 | s32 32, s16 7, u8 6 | 14 / 29 / 2 / 0 | 28 | 20 | stg 45 | sc01_080.c:func_sc01_080_8017F53C |
| 0x0F1 | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0F2 | 49 | s16 38, u8 7, u16 4 | 14 / 22 / 13 / 0 | 27 | 9 | stg 48, engine 1 | engine_801458E0.c:func_80151238 |
| 0x0F4 | 103 | s16 38, s32 36, u16 16, u8* 7, u8 6 | 33 / 64 / 6 / 0 | 67 | 32 | stg 102, stage-specific 1 | sc01_080.c:func_sc01_080_8017FFB4 |
| 0x0F5 | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0F6 | 31 | s16 17, u16 7, u8 7 | 10 / 20 / 1 / 0 | 26 | 14 | stg 31 | sc03_007.c:func_sc03_007_8018611C |
| 0x0F8 | 62 | s32 24, s16 14, u16 12, u8* 6, u8 6 | 20 / 42 / 0 / 0 | 39 | 22 | stg 61, engine 1 | engine_801458E0.c:func_80178D40 |
| 0x0F9 | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0FA | 24 | s16 14, u8 6, u16 4 | 7 / 16 / 1 / 0 | 17 | 12 | stg 24 | sc01_005.c:func_sc01_005_80181894 |
| 0x0FC | 2949 | s16 2336, u16 559, u8 35, S12 8, s32 6, SV8 5 | 1540 / 1210 / 199 / 0 | 1533 | 128 | stg 2912, engine 22, stage-specific 15 | engine.c:func_8012C890 |
| 0x0FD | 4 | u8 4 | 0 / 4 / 0 / 0 | 4 | 4 | stg 4 | sc03_089.c:func_sc03_089_801858BC |
| 0x0FE | 2313 | s16 1834, u16 467, u8 12 | 922 / 1253 / 138 / 0 | 1356 | 121 | stg 2291, stage-specific 18, engine 4 | engine_8013C98C.c:func_801424E4 |
| 0x0FF | 5 | u8 5 | 1 / 2 / 2 / 0 | 4 | 2 | stg 5 | sc03_007.c:func_sc03_007_801810E4 |
| 0x100 | 1447 | s16 966, u16 468, u8 9, s32 4 | 595 / 702 / 150 / 0 | 823 | 113 | stg 1423, stage-specific 16, engine 8 | engine_8013C98C.c:func_80142838 |
| 0x101 | 2 | u8 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc02_000.c:func_sc02_000_80189340 |
| 0x102 | 875 | s16 655, u16 191, u8 29 | 322 / 455 / 98 / 0 | 445 | 95 | stg 867, stage-specific 5, engine 3 | engine_8013C98C.c:func_80142C9C |
| 0x103 | 2 | u8 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc02_000.c:func_sc02_000_80189340 |
| 0x104 | 617 | s16 500, u16 113, SV8 4 | 307 / 279 / 31 / 0 | 251 | 77 | stg 614, stage-specific 3 | sc01_005.c:func_sc01_005_8017F790 |
| 0x105 | 9 | u8 9 | 1 / 8 / 0 / 0 | 9 | 5 | stage-specific 5, stg 4 | sc03_002.c:func_sc03_002_80181548 |
| 0x106 | 540 | s16 404, u16 134, u8 2 | 229 / 223 / 88 / 0 | 242 | 81 | stg 530, stage-specific 10 | sc01_005.c:func_sc01_005_8017F790 |
| 0x108 | 467 | s16 365, u16 60, u8 42 | 186 / 224 / 57 / 0 | 265 | 58 | stg 456, stage-specific 11 | sc01_005.c:func_sc01_005_8017F790 |
| 0x109 | 22 | u8 22 | 10 / 11 / 1 / 0 | 22 | 11 | stg 20, stage-specific 2 | sc03_002.c:func_sc03_002_80183480 |
| 0x10A | 459 | s16 431, u16 28 | 169 / 267 / 23 / 0 | 290 | 80 | stg 452, stage-specific 6, engine 1 | engine_801458E0.c:func_80178D40 |

### Effects (D_8011D030 slots, 0x58)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x002 | 60 | u16 59, s16 1 | 8 / 9 / 43 / 0 | 51 | 39 | stg 46, engine 7, abil 6, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x006 | 133 | s16 116, u16 17 | 86 / 46 / 1 / 0 | 55 | 40 | stg 110, engine 13, abil 7, stage-specific 3 | engine_801458E0.c:func_801678F0 |
| 0x00A | 100 | u16 52, s16 48 | 86 / 13 / 1 / 0 | 55 | 40 | stg 78, engine 13, abil 7, stage-specific 2 | engine_801458E0.c:func_801678F0 |
| 0x00E | 142 | s16 116, u16 26 | 95 / 46 / 1 / 0 | 55 | 40 | stg 117, engine 13, abil 9, stage-specific 3 | engine_801458E0.c:func_801678F0 |
| 0x010 | 16 | s16 9, s32 7 | 3 / 13 / 0 / 0 | 10 | 9 | stg 7, engine 6, abil 3 | engine_801458E0.c:func_80167540 |
| 0x012 | 11 | s16 5, u16 5, u8 1 | 7 / 1 / 3 / 0 | 8 | 2 | engine 8, abil 3 | engine_801458E0.c:func_80167540 |
| 0x014 | 34 | s16 33, s32 1 | 0 / 33 / 1 / 0 | 34 | 34 | stg 32, stage-specific 1, abil 1 | sc01_077.c:func_sc01_077_8017BEF8 |
| 0x016 | 37 | s16 33, u16 4 | 3 / 34 / 0 / 0 | 37 | 34 | stg 32, engine 4, stage-specific 1 | engine_801458E0.c:func_80169BBC |
| 0x01A | 3 | u16 3 | 2 / 1 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_80169E44 |
| 0x01C | 68 | s32 68 | 43 / 21 / 4 / 0 | 25 | 16 | stg 29, engine 23, abil 16 | engine_801458E0.c:func_80167540 |
| 0x020 | 60 | s32 45, u8* 11, void* 4 | 14 / 46 / 0 / 0 | 60 | 42 | stg 50, engine 6, abil 3, stage-specific 1 | engine_801458E0.c:func_80169BBC |
| 0x024 | 14 | s16 14 | 7 / 7 / 0 / 0 | 7 | 7 | stg 14 | sc02_011.c:func_sc02_011_8017F1AC |
| 0x028 | 1 | u16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8016C49C |
| 0x02A | 2 | s16 2 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_8016A08C |
| 0x02C | 53 | s32 52, u32 1 | 43 / 10 / 0 / 0 | 24 | 14 | stg 44, abil 5, engine 4 | engine_801458E0.c:func_8016C49C |
| 0x030 | 27 | s32 26, u8* 1 | 12 / 14 / 1 / 0 | 15 | 9 | stg 12, engine 11, abil 4 | engine_801458E0.c:func_80167540 |
| 0x034 | 56 | u8* 45, s32 9, void* 1, u16* 1 | 56 / 0 / 0 / 0 | 55 | 41 | stg 39, abil 9, engine 7, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x038 | 6 | MATRIX 3, AMtx 3 | 1 / 5 / 0 / 0 | 6 | 4 | engine 3, abil 3 | engine_801458E0.c:func_80167540 |
| 0x04C | 4 | s32 4 | 0 / 4 / 0 / 0 | 4 | 4 | abil 4 | ovl13.c:func_ovl13_800CB6E4 |
| 0x050 | 4 | s32 4 | 0 / 4 / 0 / 0 | 4 | 4 | abil 4 | ovl13.c:func_ovl13_800CB6E4 |
| 0x054 | 4 | s32 4 | 0 / 4 / 0 / 0 | 4 | 4 | abil 4 | ovl13.c:func_ovl13_800CB6E4 |

## Appendix B. The census, through pointer fields

Accesses to what an object's pointer field points to, grouped by that field (fields with at least 15 accesses).
These identify the pointed-to structs: +0x20 is the model (`ModelObj`), +0x64 the parent object, +0x68 the spawn
definition, +0x78 the init record, +0xCC / +0xD0 / +0xDC per-kind pointers.

### Through +0x20 (12208 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 5 | s16 4, u16 1 | 1 / 4 / 0 / 0 | 5 | 5 | stg 4, engine 1 | engine.c:func_8012C890 |
| 0x002 | 3 | s16 3 | 0 / 3 / 0 / 0 | 3 | 3 | stg 3 | sc06_022.c:func_sc06_022_80181664 |
| 0x004 | 1319 | s32 1247, u32 47, TB 25 | 398 / 329 / 592 / 0 | 753 | 121 | stg 1283, abil 25, engine 10, stage-specific 1 | engine.c:func_8012E88C |
| 0x008 | 15 | s16 11, B8 3, SV8 1 | 10 / 5 / 0 / 0 | 14 | 12 | stg 11, engine 4 | engine.c:func_8012C890 |
| 0x00A | 11 | s16 11 | 5 / 6 / 0 / 0 | 10 | 9 | stg 7, engine 4 | engine.c:func_8012C890 |
| 0x00C | 11 | s16 11 | 6 / 5 / 0 / 0 | 10 | 10 | stg 7, engine 4 | engine.c:func_8012C890 |
| 0x010 | 1316 | s16 768, u16 479, SV8 40, B8 19, SVECTOR 4, s32 3, AVec 3 | 309 / 777 / 227 / 3 | 764 | 130 | stg 1232, engine 59, abil 23, stage-specific 2 | engine.c:func_8012B2CC |
| 0x012 | 4122 | s16 2345, u16 1777 | 1796 / 1200 / 1126 / 0 | 2046 | 143 | stg 3937, engine 119, abil 35, stage-specific 31 | engine.c:func_8012B8E4 |
| 0x014 | 588 | s16 366, u16 222 | 143 / 285 / 160 / 0 | 395 | 100 | stg 558, abil 16, engine 14 | engine_8012F5F4.c:func_80131B14 |
| 0x018 | 1285 | s16 848, u16 387, SV8 27, B8 22, SVECTOR 1 | 334 / 847 / 103 / 1 | 739 | 125 | stg 1229, abil 30, engine 26 | engine.c:func_8012E4C8 |
| 0x01A | 1126 | s16 708, u16 418 | 241 / 782 / 103 / 0 | 658 | 123 | stg 1058, abil 42, engine 26 | engine.c:func_8012E364 |
| 0x01C | 617 | s16 402, u16 215 | 103 / 491 / 23 / 0 | 407 | 108 | stg 595, engine 14, abil 8 | engine.c:func_8012E4C8 |
| 0x01E | 5 | s16 4, u16 1 | 1 / 2 / 2 / 0 | 3 | 3 | stg 3, abil 2 | sc07_010.c:func_sc07_010_8017F4A8 |
| 0x020 | 135 | s32 71, u8* 54, void* 4, u16* 4, s32* 1, s16* 1 | 34 / 101 / 0 / 0 | 110 | 50 | stg 125, engine 8, stage-specific 2 | engine.c:func_8012AAAC |
| 0x024 | 128 | s32 60, u8* 46, s32* 16, void* 3, u8 3 | 54 / 74 / 0 / 0 | 81 | 34 | stg 119, stage-specific 6, abil 3 | sc01_005.c:func_sc01_005_801812B0 |
| 0x025 | 2 | u8 2 | 0 / 2 / 0 / 0 | 2 | 1 | abil 2 | ovl27.c:func_ovl27_800CB190 |
| 0x026 | 2 | u8 2 | 0 / 2 / 0 / 0 | 2 | 1 | abil 2 | ovl27.c:func_ovl27_800CB190 |
| 0x027 | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc01_080.c:func_sc01_080_80183278 |
| 0x028 | 33 | s32 29, u16 3, s16 1 | 0 / 33 / 0 / 0 | 33 | 19 | stg 30, abil 3 | sc02_005.c:func_sc02_005_801816FC |
| 0x02A | 6 | u16 4, s16 2 | 0 / 6 / 0 / 0 | 6 | 4 | abil 5, stg 1 | sc01_080.c:func_sc01_080_80183278 |
| 0x02C | 774 | u16 753, s16 21 | 211 / 207 / 356 / 0 | 507 | 112 | stg 761, engine 8, abil 5 | engine_8012F5F4.c:func_801308DC |
| 0x02E | 2 | u16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc03_114.c:func_sc03_114_8017D110 |
| 0x030 | 34 | GameCoord2.coord 23, s16 10, s32 1 | 23 / 5 / 2 / 4 | 19 | 4 | engine 24, stg 10 | engine.c:func_8012B14C |
| 0x034 | 22 | AMtx 7, MATRIX 3, V16 3, W32 2, WMtx 2, GameMatrix 2, AMtx* 2, s32 1 | 10 / 12 / 0 / 0 | 20 | 15 | abil 10, stg 7, engine 5 | engine_801458E0.c:func_80163A94 |
| 0x044 | 3 | V16 3 | 0 / 3 / 0 / 0 | 3 | 3 | stg 3 | sc02_011.c:func_sc02_011_80187654 |
| 0x048 | 162 | s32 162 | 151 / 9 / 2 / 0 | 145 | 34 | stg 158, engine 4 | engine_801458E0.c:func_80149290 |
| 0x04C | 163 | s32 163 | 154 / 7 / 2 / 0 | 144 | 32 | stg 158, engine 5 | engine_801458E0.c:func_80149290 |
| 0x050 | 161 | s32 161 | 150 / 9 / 2 / 0 | 145 | 34 | stg 158, engine 3 | engine_801458E0.c:func_80149290 |
| 0x054 | 1 | MATRIX 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_8012F5F4.c:func_80132784 |
| 0x068 | 7 | s32 7 | 7 / 0 / 0 / 0 | 4 | 3 | stg 7 | sc04_011.c:func_sc04_011_80187A04 |
| 0x06C | 7 | s32 7 | 7 / 0 / 0 / 0 | 4 | 3 | stg 7 | sc04_011.c:func_sc04_011_80187A04 |
| 0x070 | 7 | s32 7 | 7 / 0 / 0 / 0 | 4 | 3 | stg 7 | sc04_011.c:func_sc04_011_80187A04 |
| 0x078 | 1 | GameCoord2* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_8012F5F4.c:func_80132784 |
| 0x080 | 134 | u8* 75, s32 25, s32* 20, s16* 7, SV8* 4, void* 2, B8* 1 | 4 / 130 / 0 / 0 | 113 | 65 | stg 132, abil 2 | sc01_077.c:func_sc01_077_801865EC |

### Through +0x34 (132 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80167540 |
| 0x006 | 40 | s16 36, u16 4 | 40 / 0 / 0 / 0 | 40 | 37 | stg 32, abil 4, engine 3, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x00A | 40 | s16 37, u16 3 | 40 / 0 / 0 / 0 | 40 | 37 | stg 32, abil 4, engine 3, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x00E | 40 | s16 36, u16 4 | 40 / 0 / 0 / 0 | 40 | 37 | stg 32, abil 4, engine 3, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x020 | 5 | u8* 5 | 5 / 0 / 0 / 0 | 3 | 2 | engine 3, abil 2 | engine_801458E0.c:func_80167540 |
| 0x036 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl13.c:func_ovl13_800CB6E4 |
| 0x038 | 1 | MATRIX 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8016DF5C |
| 0x044 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801678F0 |
| 0x04C | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80167540 |
| 0x058 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl13.c:func_ovl13_800CB6E4 |

### Through +0x4C (80 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x006 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80164418 |
| 0x00A | 10 | s16 8, u16 2 | 10 / 0 / 0 / 0 | 10 | 10 | stg 8, engine 1, abil 1 | engine_801458E0.c:func_80164418 |
| 0x00E | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80164418 |
| 0x01C | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl31.c:func_ovl31_800CD404 |
| 0x020 | 36 | void* 22, u8* 14 | 36 / 0 / 0 / 0 | 25 | 19 | abil 30, engine 4, stg 2 | engine_801458E0.c:func_80163A94 |
| 0x044 | 2 | s32 2 | 0 / 0 / 2 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80163A94 |
| 0x0BE | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | abil 1 | ovl20.c:func_ovl20_800CB3C0 |
| 0x100 | 6 | u16 6 | 6 / 0 / 0 / 0 | 6 | 6 | abil 5, engine 1 | engine_801458E0.c:func_80163A94 |
| 0x102 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80163A94 |
| 0x104 | 6 | u16 6 | 6 / 0 / 0 / 0 | 6 | 6 | abil 5, engine 1 | engine_801458E0.c:func_80163A94 |
| 0x154 | 1 | AVec 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl21.c:func_ovl21_800CB2CC |
| 0x184 | 2 | u8* 1, s32 1 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80163C2C |
| 0x188 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163C2C |
| 0x18A | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163C2C |
| 0x194 | 1 | u16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163C2C |
| 0x1C8 | 6 | u16 5, s16 1 | 5 / 1 / 0 / 0 | 3 | 2 | abil 6 | ovl32.c:func_ovl32_800CCDB0 |

### Through +0x58 (24 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 8 | s16 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc02_031.c:func_sc02_031_8017E1D4 |
| 0x002 | 8 | s16 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc02_031.c:func_sc02_031_8017E1D4 |
| 0x004 | 8 | s16 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc02_031.c:func_sc02_031_8017E1D4 |

### Through +0x64 (1708 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc07_006.c:func_sc07_006_8017D67C |
| 0x002 | 36 | u16 25, s16 11 | 17 / 10 / 9 / 0 | 22 | 9 | stg 36 | sc02_017.c:func_sc02_017_80184084 |
| 0x004 | 68 | s32 68 | 68 / 0 / 0 / 0 | 68 | 39 | stg 68 | sc01_077.c:func_sc01_077_80184D50 |
| 0x006 | 47 | u16 25, s16 22 | 37 / 0 / 10 / 0 | 37 | 22 | stg 45, engine 2 | engine_8013C98C.c:func_80144364 |
| 0x008 | 68 | s32 68 | 68 / 0 / 0 / 0 | 68 | 40 | stg 68 | sc01_077.c:func_sc01_077_80184D50 |
| 0x00A | 58 | s16 37, u16 21 | 58 / 0 / 0 / 0 | 50 | 25 | stg 55, engine 3 | engine_8013C98C.c:func_801424E4 |
| 0x00C | 70 | s32 70 | 70 / 0 / 0 / 0 | 70 | 41 | stg 69, engine 1 | engine_8013C98C.c:func_801424E4 |
| 0x00E | 55 | s16 36, u16 19 | 51 / 0 / 4 / 0 | 47 | 27 | stg 53, engine 2 | engine_8013C98C.c:func_80144364 |
| 0x010 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc04_011.c:func_sc04_011_8018A1B4 |
| 0x014 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc04_011.c:func_sc04_011_8018A1B4 |
| 0x018 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc04_011.c:func_sc04_011_8018A1B4 |
| 0x01C | 9 | s32 9 | 0 / 0 / 9 / 0 | 3 | 3 | stg 9 | sc06_018.c:func_sc06_018_80191320 |
| 0x020 | 558 | u8* 408, void* 122, s32 28 | 558 / 0 / 0 / 0 | 319 | 79 | stg 556, engine 1, stage-specific 1 | engine_8013C98C.c:func_80144458 |
| 0x034 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 1 | stg 2 | sc02_011.c:func_sc02_011_80184E00 |
| 0x036 | 239 | s16 122, u16 117 | 239 / 0 / 0 / 0 | 239 | 72 | stg 237, engine 2 | engine_8013C98C.c:func_80144364 |
| 0x052 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc07_002.c:func_sc07_002_80182818 |
| 0x058 | 2 | s32 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_8013C98C.c:func_8014477C |
| 0x05C | 1 | u16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc03_028.c:func_sc03_028_80182F3C |
| 0x05E | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc04_015.c:func_sc04_015_8017F600 |
| 0x064 | 1 | void* 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_000.c:func_sc06_000_801830C4 |
| 0x068 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc02_027.c:func_sc02_027_801815E8 |
| 0x06C | 5 | s32 3, void* 2 | 3 / 2 / 0 / 0 | 5 | 3 | stg 5 | sc03_028.c:func_sc03_028_801879AC |
| 0x070 | 104 | s16 103, u16 1 | 104 / 0 / 0 / 0 | 61 | 35 | stg 104 | sc02_026.c:func_sc02_026_8017FEE0 |
| 0x076 | 4 | s16 4 | 3 / 0 / 1 / 0 | 3 | 2 | stg 4 | sc02_005.c:func_sc02_005_80183D90 |
| 0x090 | 7 | u8* 5, s32 2 | 7 / 0 / 0 / 0 | 7 | 6 | stg 7 | sc01_077.c:func_sc01_077_80184D50 |
| 0x0C1 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc03_028.c:func_sc03_028_80182F3C |
| 0x0CC | 71 | s32 52, u8* 7, s16 6, u16 6 | 57 / 14 / 0 / 0 | 53 | 18 | stg 71 | sc02_005.c:func_sc02_005_801844D4 |
| 0x0CE | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0D0 | 28 | s32 16, s16 6, u16 6 | 19 / 9 / 0 / 0 | 28 | 8 | stg 28 | sc06_008.c:func_sc06_008_801823F0 |
| 0x0D4 | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0D6 | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0D8 | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0DC | 11 | u8* 4, s32 4, s32* 3 | 11 / 0 / 0 / 0 | 11 | 10 | stg 11 | sc02_026.c:func_sc02_026_8017DDC4 |
| 0x0E0 | 23 | s32 22, s16 1 | 14 / 0 / 9 / 0 | 15 | 13 | stg 23 | sc02_005.c:func_sc02_005_801846CC |
| 0x0E2 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc03_117.c:func_sc03_117_8017F02C |
| 0x0E4 | 2 | s32 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_018.c:func_sc06_018_8018B774 |
| 0x0E8 | 7 | s32 7 | 4 / 0 / 3 / 0 | 6 | 1 | stg 7 | sc02_005.c:func_sc02_005_801840E8 |
| 0x0F0 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 1 | stg 3 | sc01_080.c:func_sc01_080_8017FFB4 |
| 0x0F4 | 6 | s32 6 | 6 / 0 / 0 / 0 | 3 | 3 | stg 6 | sc06_018.c:func_sc06_018_80192B60 |
| 0x0F8 | 31 | s32 31 | 3 / 27 / 1 / 0 | 3 | 3 | stg 31 | sc03_014_post.c:func_sc03_014_80187884 |
| 0x0FC | 49 | s16 40, u16 9 | 42 / 6 / 1 / 0 | 43 | 29 | stg 49 | sc02_005.c:func_sc02_005_801898F4 |
| 0x0FE | 36 | s16 33, u16 3 | 34 / 2 / 0 / 0 | 33 | 26 | stg 36 | sc02_005.c:func_sc02_005_8018C454 |
| 0x100 | 30 | u16 24, s16 6 | 28 / 2 / 0 / 0 | 29 | 24 | stg 30 | sc02_005.c:func_sc02_005_80188BF0 |
| 0x102 | 2 | u16 1, s16 1 | 1 / 0 / 1 / 0 | 2 | 2 | stg 2 | sc02_005.c:func_sc02_005_8018CB70 |
| 0x104 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc01_005.c:func_sc01_005_8018165C |
| 0x106 | 4 | s16 4 | 2 / 0 / 2 / 0 | 2 | 2 | stg 4 | sc06_022.c:func_sc06_022_8017FEF8 |
| 0x108 | 3 | s16 3 | 2 / 1 / 0 / 0 | 2 | 2 | stg 3 | sc03_117.c:func_sc03_117_8017FA00 |
| 0x10A | 3 | s16 3 | 3 / 0 / 0 / 0 | 3 | 3 | stg 3 | sc05_010.c:func_sc05_010_8018624C |

### Through +0x68 (179 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x00A | 30 | u16 30 | 14 / 14 / 2 / 0 | 16 | 11 | stg 30 | sc02_011.c:func_sc02_011_8018DBF4 |
| 0x00C | 149 | s16 134, u16 15 | 24 / 125 / 0 / 0 | 140 | 34 | stg 133, stage-specific 16 | sc02_000.c:func_sc02_000_8018694C |

### Through +0x6C (74 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x002 | 8 | s16 8 | 0 / 8 / 0 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x006 | 10 | s16 8, u16 2 | 3 / 5 / 2 / 0 | 5 | 5 | stg 10 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x00A | 10 | s16 6, u16 4 | 4 / 6 / 0 / 0 | 8 | 6 | stg 10 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x00E | 6 | s16 6 | 2 / 4 / 0 / 0 | 6 | 5 | stg 6 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x020 | 8 | u8* 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x034 | 2 | s16 2 | 0 / 0 / 2 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_80187884 |
| 0x06C | 8 | u8* 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x070 | 8 | s16 8 | 0 / 0 / 8 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x074 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc05_010.c:func_sc05_010_80180214 |
| 0x076 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x0CC | 5 | u8* 5 | 5 / 0 / 0 / 0 | 5 | 5 | stg 5 | sc06_018.c:func_sc06_018_80192768 |
| 0x0F4 | 6 | s32 6 | 6 / 0 / 0 / 0 | 3 | 3 | stg 6 | sc06_018.c:func_sc06_018_80192768 |

### Through +0x78 (161 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 28 | u16 21, s16 7 | 28 / 0 / 0 / 0 | 28 | 24 | stg 28 | sc02_016.c:func_sc02_016_80181AE8 |
| 0x002 | 74 | u16 63, s16 11 | 74 / 0 / 0 / 0 | 73 | 36 | stg 74 | sc01_077.c:func_sc01_077_80184594 |
| 0x008 | 3 | s32 2, u8* 1 | 3 / 0 / 0 / 0 | 3 | 2 | stg 2, stage-specific 1 | sc07_001.c:func_sc07_001_8017E4DC |
| 0x030 | 56 | s16 56 | 56 / 0 / 0 / 0 | 56 | 17 | stg 56 | sc02_026.c:func_sc02_026_8017E72C |

### Through +0xCC (1205 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 33 | s16 29, u16 4 | 4 / 29 / 0 / 0 | 28 | 18 | stg 33 | sc02_011.c:func_sc02_011_80186070 |
| 0x002 | 31 | s16 31 | 0 / 31 / 0 / 0 | 29 | 17 | stg 31 | sc03_024.c:func_sc03_024_801830A8 |
| 0x004 | 110 | s32 53, s16 48, TB 8, u32 1 | 50 / 26 / 34 / 0 | 47 | 26 | stg 106, engine 4 | engine_8013C98C.c:func_801439FC |
| 0x006 | 21 | s16 16, u16 5 | 13 / 7 / 1 / 0 | 13 | 13 | stg 20, stage-specific 1 | sc02_005.c:func_sc02_005_80185214 |
| 0x008 | 108 | s16 59, u16 38, B8 6, s32 4, SV8 1 | 0 / 107 / 1 / 0 | 99 | 50 | stg 102, engine 4, stage-specific 2 | engine_8013C98C.c:func_801439FC |
| 0x00A | 117 | s16 87, u16 30 | 4 / 106 / 7 / 0 | 103 | 56 | stg 110, engine 4, stage-specific 3 | engine_8013C98C.c:func_801439FC |
| 0x00C | 97 | s16 65, u16 32 | 0 / 96 / 1 / 0 | 91 | 48 | stg 91, engine 4, stage-specific 2 | engine_8013C98C.c:func_801439FC |
| 0x00E | 13 | s16 12, u16 1 | 4 / 8 / 1 / 0 | 8 | 8 | stg 12, stage-specific 1 | sc02_005.c:func_sc02_005_80185214 |
| 0x010 | 25 | s16 13, u16 6, s32 6 | 0 / 22 / 3 / 0 | 17 | 9 | stg 22, engine 3 | engine_8013C98C.c:func_801439FC |
| 0x012 | 23 | s16 15, u16 8 | 0 / 22 / 1 / 0 | 18 | 12 | stg 20, engine 3 | engine_8013C98C.c:func_801439FC |
| 0x014 | 32 | u16 19, s16 13 | 6 / 23 / 3 / 0 | 22 | 13 | stg 30, engine 2 | engine_8013C98C.c:func_801439FC |
| 0x016 | 6 | s16 6 | 0 / 6 / 0 / 0 | 3 | 3 | stg 6 | sc06_018.c:func_sc06_018_80191320 |
| 0x018 | 168 | s16 149, u16 13, s32 6 | 49 / 70 / 49 / 0 | 91 | 37 | stg 167, engine 1 | engine_8013C98C.c:func_80143EBC |
| 0x01A | 119 | s16 96, u16 23 | 11 / 60 / 48 / 0 | 86 | 35 | stg 118, engine 1 | engine_8013C98C.c:func_80143EBC |
| 0x01C | 11 | s32 7, s16 4 | 0 / 9 / 2 / 0 | 11 | 10 | stg 11 | sc02_000.c:func_sc02_000_80186530 |
| 0x020 | 42 | u8* 24, void* 10, s32 8 | 34 / 8 / 0 / 0 | 24 | 9 | stg 41, stage-specific 1 | sc02_005.c:func_sc02_005_801822EC |
| 0x027 | 34 | u8 34 | 0 / 34 / 0 / 0 | 21 | 9 | stg 34 | sc02_031.c:func_sc02_031_80182CF4 |
| 0x02C | 9 | u16 9 | 0 / 3 / 6 / 0 | 9 | 6 | stg 9 | sc01_077.c:func_sc01_077_80183DE0 |
| 0x036 | 31 | s16 31 | 31 / 0 / 0 / 0 | 25 | 6 | stg 31 | sc06_033.c:func_sc06_033_8017E69C |
| 0x050 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc06_018.c:func_sc06_018_8018A7C8 |
| 0x054 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc06_018.c:func_sc06_018_8018A7C8 |
| 0x076 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_022.c:func_sc06_022_801809F4 |
| 0x080 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc03_105.c:func_sc03_105_80188D88 |
| 0x098 | 9 | s16 9 | 0 / 9 / 0 / 0 | 9 | 8 | stg 9 | sc02_005.c:func_sc02_005_801862F0 |
| 0x0B0 | 130 | s32 130 | 0 / 130 / 0 / 0 | 129 | 8 | stg 101, stage-specific 29 | sc03_002.c:func_sc03_002_801815AC |
| 0x0CC | 3 | void* 2, u8* 1 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc06_024.c:func_sc06_024_8017FA1C |
| 0x0DC | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc02_017.c:func_sc02_017_80181090 |
| 0x0E8 | 4 | s32 4 | 3 / 0 / 1 / 0 | 4 | 1 | stg 4 | sc02_005.c:func_sc02_005_80185060 |
| 0x0FC | 10 | s16 10 | 0 / 10 / 0 / 0 | 10 | 5 | stg 10 | sc03_089.c:func_sc03_089_80184730 |
| 0x0FE | 1 | s16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc02_005.c:func_sc02_005_80185060 |
| 0x100 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_022.c:func_sc06_022_80180EE0 |
| 0x108 | 8 | s16 8 | 0 / 8 / 0 / 0 | 7 | 7 | stg 7, stage-specific 1 | sc03_002.c:func_sc03_002_801815AC |

### Through +0xD0 (280 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 31 | s16 31 | 0 / 31 / 0 / 0 | 31 | 31 | stg 31 | sc01_005.c:func_sc01_005_80181894 |
| 0x002 | 8 | s16 7, u16 1 | 0 / 7 / 1 / 0 | 8 | 8 | stg 8 | sc04_000.c:func_sc04_000_80180020 |
| 0x004 | 14 | s32 10, u32 4 | 10 / 0 / 4 / 0 | 11 | 11 | stg 13, stage-specific 1 | sc03_002.c:func_sc03_002_80182E04 |
| 0x008 | 21 | s32 12, u16 5, s16 4 | 12 / 7 / 2 / 0 | 21 | 18 | stg 20, stage-specific 1 | sc02_000.c:func_sc02_000_80184358 |
| 0x00A | 7 | u16 4, s16 3 | 0 / 7 / 0 / 0 | 7 | 5 | stg 7 | sc02_000.c:func_sc02_000_80184358 |
| 0x00C | 22 | s32 10, s16 7, u16 5 | 11 / 7 / 4 / 0 | 19 | 17 | stg 21, stage-specific 1 | sc02_000.c:func_sc02_000_80184358 |
| 0x010 | 7 | u16 5, s16 2 | 0 / 5 / 2 / 0 | 7 | 5 | stg 7 | sc02_000.c:func_sc02_000_80184358 |
| 0x012 | 14 | u16 9, s16 5 | 0 / 11 / 3 / 0 | 14 | 12 | stg 14 | sc02_000.c:func_sc02_000_80184358 |
| 0x014 | 5 | u16 5 | 0 / 5 / 0 / 0 | 5 | 3 | stg 5 | sc02_000.c:func_sc02_000_80184358 |
| 0x018 | 37 | u16 30, s16 7 | 4 / 33 / 0 / 0 | 31 | 30 | stg 37 | sc02_011.c:func_sc02_011_8017D204 |
| 0x01A | 61 | u16 59, s16 2 | 28 / 32 / 1 / 0 | 32 | 30 | stg 61 | sc02_011.c:func_sc02_011_8017D204 |
| 0x01C | 8 | s32 7, u16 1 | 0 / 8 / 0 / 0 | 8 | 8 | stg 8 | sc06_008.c:func_sc06_008_80181B20 |
| 0x020 | 3 | u8* 3 | 3 / 0 / 0 / 0 | 3 | 3 | stg 3 | sc02_005.c:func_sc02_005_80186178 |
| 0x027 | 20 | u8 20 | 0 / 20 / 0 / 0 | 20 | 9 | stg 20 | sc02_031.c:func_sc02_031_80182CF4 |
| 0x02C | 7 | s16 7 | 0 / 7 / 0 / 0 | 7 | 7 | stg 7 | sc02_011.c:func_sc02_011_80186070 |
| 0x034 | 2 | u16 2 | 0 / 0 / 2 / 0 | 2 | 1 | stg 2 | sc03_105.c:func_sc03_105_8018624C |
| 0x036 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_033.c:func_sc06_033_8017E69C |
| 0x054 | 4 | s16 4 | 0 / 4 / 0 / 0 | 2 | 2 | stg 4 | sc06_022.c:func_sc06_022_801809F4 |
| 0x098 | 7 | s16 7 | 0 / 7 / 0 / 0 | 7 | 7 | stg 7 | sc06_008.c:func_sc06_008_80181B20 |
| 0x0DC | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc02_017.c:func_sc02_017_8018104C |

### Through +0xD4 (15 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc01_005.c:func_sc01_005_80181894 |
| 0x002 | 1 | u16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc04_000.c:func_sc04_000_80180020 |
| 0x004 | 3 | u32 2, s32 1 | 0 / 0 / 3 / 0 | 2 | 1 | stg 3 | sc06_024.c:func_sc06_024_8017DBFC |
| 0x008 | 2 | s16 2 | 0 / 0 / 2 / 0 | 2 | 2 | stg 2 | sc01_005.c:func_sc01_005_80181894 |
| 0x014 | 2 | s16 2 | 0 / 0 / 2 / 0 | 2 | 2 | stg 2 | sc01_005.c:func_sc01_005_80181894 |
| 0x020 | 3 | u8* 3 | 3 / 0 / 0 / 0 | 3 | 3 | stg 3 | sc02_005.c:func_sc02_005_80186178 |
| 0x10A | 2 | s16 2 | 0 / 2 / 0 / 0 | 1 | 1 | stg 2 | sc04_016.c:func_sc04_016_8017D588 |

### Through +0xD8 (16 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x002 | 1 | u16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc04_000.c:func_sc04_000_80180020 |
| 0x004 | 10 | s32 9, u32 1 | 0 / 0 / 10 / 0 | 9 | 3 | stg 10 | sc01_005.c:func_sc01_005_801812B0 |
| 0x008 | 1 | SV8 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc06_024.c:func_sc06_024_8017EC4C |
| 0x020 | 2 | u8* 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_022.c:func_sc06_022_8017FB9C |
| 0x034 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_80185380 |

### Through +0xDC (513 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 74 | s32 74 | 74 / 0 / 0 / 0 | 38 | 33 | stg 74 | sc02_011.c:func_sc02_011_8018A1A4 |
| 0x004 | 73 | s32 73 | 73 / 0 / 0 / 0 | 69 | 44 | stg 73 | sc02_011.c:func_sc02_011_8017D150 |
| 0x006 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_801891D0 |
| 0x008 | 125 | u16 96, s32 27, B8 2 | 125 / 0 / 0 / 0 | 93 | 44 | stg 125 | sc02_011.c:func_sc02_011_8017D150 |
| 0x00A | 99 | u16 99 | 99 / 0 / 0 / 0 | 67 | 32 | stg 99 | sc02_011.c:func_sc02_011_8018ECE4 |
| 0x00C | 135 | u16 96, s32 35, VoidFn 4 | 135 / 0 / 0 / 0 | 67 | 44 | stg 135 | sc02_011.c:func_sc02_011_8017D204 |
| 0x010 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc02_011.c:func_sc02_011_8018A1A4 |
| 0x012 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc02_011.c:func_sc02_011_8018A1A4 |
| 0x014 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc02_011.c:func_sc02_011_8018A1A4 |

### Through +0x178 (36 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 4 | u16 4 | 4 / 0 / 0 / 0 | 2 | 1 | engine 4 | engine_801458E0.c:func_8015D738 |
| 0x006 | 5 | s16 5 | 0 / 5 / 0 / 0 | 5 | 2 | engine 4, abil 1 | engine_801458E0.c:func_8015D5E8 |
| 0x00A | 5 | s16 5 | 0 / 5 / 0 / 0 | 5 | 2 | engine 4, abil 1 | engine_801458E0.c:func_8015D5E8 |
| 0x00E | 5 | s16 5 | 0 / 5 / 0 / 0 | 5 | 2 | engine 4, abil 1 | engine_801458E0.c:func_8015D5E8 |
| 0x020 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D738 |
| 0x078 | 15 | void* 12, u8* 3 | 15 / 0 / 0 / 0 | 5 | 2 | engine 12, abil 3 | engine_801458E0.c:func_8015D5E8 |
| 0x0FC | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D57C |

### Through +0x18C (17 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015E40C |
| 0x006 | 3 | u16 2, s16 1 | 1 / 2 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_8015E40C |
| 0x00A | 3 | u16 2, s16 1 | 1 / 2 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_8015E40C |
| 0x00E | 3 | u16 2, s16 1 | 1 / 2 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_8015E40C |
| 0x078 | 6 | u8* 6 | 6 / 0 / 0 / 0 | 2 | 1 | engine 6 | engine_801458E0.c:func_8015E40C |

## Appendix C. The census script

```python
#!/usr/bin/env python3
"""Offset census of object pointers in the matched C (r273).

Parses every src/**/*.c into functions, records every constant-offset access through a pointer variable
(AF(p,T,off), *(T *)(p + off), *(T *)((u8 *)p + off), p[off] on byte pointers, and p->field / G.field on the
typed structs of include/game.h), then decides which pointer variables are game objects by propagation over the
call graph, and writes the census as JSON plus a TSV.
"""
import json, os, re, sys
from collections import defaultdict, Counter

ROOT = sys.argv[1] if len(sys.argv) > 1 else '.'
OUT = sys.argv[2] if len(sys.argv) > 2 else 'census'

SIZES = {'s8': 1, 'u8': 1, 's16': 2, 'u16': 2, 's32': 4, 'u32': 4, 'char': 1, 'short': 2, 'int': 4, 'long': 4,
         'unsigned char': 1, 'unsigned short': 2, 'signed char': 1}
KEYWORDS = set('if while for switch return sizeof AF do else case goto break continue'.split())
OBJ_TYPES = {'StageActor': 'actor', 'Mover': 'mover', 'Player': 'player'}
PLAYER_SYM = 'D_80126B58'
PLAYER_ADDR = 0x80126B58

# ---------------------------------------------------------------- struct layouts from include/game.h
def parse_structs(path):
    txt = open(path).read()
    structs = {}
    for m in re.finditer(r'typedef struct(?: \w+)? \{(.*?)\}\s*(\w+);', txt, re.S):
        body, name = m.group(1), m.group(2)
        fields = {}
        for fm in re.finditer(r'/\* 0x([0-9A-Fa-f]+) \*/\s*([\w ]+?)\s*(\*?)\s*(\w+)(\[(\w+)\])?(\[(\w+)\])?\s*;', body):
            off = int(fm.group(1), 16)
            fields[fm.group(4)] = (off, fm.group(2).strip().replace('struct ', ''), fm.group(3), fm.group(6))
        structs[name] = fields
    return structs

STRUCTS = parse_structs(os.path.join(ROOT, 'include/game.h'))
ELEM = {'Fixed': 4, 's32': 4, 'u32': 4, 's16': 2, 'u16': 2, 'u8': 1, 's8': 1, 'SVECTOR': 8, 'void': 4}
SUB = {('Fixed', 'w'): (0, 's32'), ('Fixed', 'h'): (0, None), ('h', 'i'): (2, 's16'), ('h', 'frac'): (0, 'u16'),
       ('SVECTOR', 'vx'): (0, 's16'), ('SVECTOR', 'vy'): (2, 's16'), ('SVECTOR', 'vz'): (4, 's16'),
       ('SVECTOR', 'pad'): (6, 's16')}

def field_access(sname, chain):
    """chain like 'pos[1].h.i' -> (offset, type) or None"""
    m = re.match(r'(\w+)(?:\[(\w+)\])?(?:\[(\w+)\])?((?:\.\w+)*)$', chain)
    if not m or sname not in STRUCTS or m.group(1) not in STRUCTS[sname]:
        return None
    off, typ, ptr, arr = STRUCTS[sname][m.group(1)]
    if ptr:
        typ = typ + ' *'
    if m.group(2) is not None:
        try:
            idx = int(m.group(2), 0)
        except ValueError:
            return (off, typ + '[i]', True)
        if typ.endswith('*') and not arr:
            return None
        off += idx * ELEM.get(typ, 4)
    cur = typ
    for part in [p for p in m.group(4).split('.') if p]:
        k = (cur, part)
        if k not in SUB:
            return (off, cur + '.' + part, False)
        d, t = SUB[k]
        off += d
        cur = t if t else part
    if arr and m.group(2) is None:
        cur = cur + '[]'
    return (off, cur, False)

# ---------------------------------------------------------------- parsing helpers
def balanced(s, i):
    """s[i] == '('; return index of matching ')'"""
    depth = 0
    for j in range(i, len(s)):
        c = s[j]
        if c == '(':
            depth += 1
        elif c == ')':
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

CAST = re.compile(r'^\(\s*(?:const\s+)?(?:struct\s+)?[A-Za-z_]\w*(?:\s+\w+)?\s*\**\s*\)\s*')

def strip(e):
    e = e.strip()
    while True:
        old = e
        e = CAST.sub('', e).strip()
        if e.startswith('(') and balanced(e, 0) == len(e) - 1:
            e = e[1:-1].strip()
        if e == old:
            return e

def parse_int(s):
    s = s.strip()
    try:
        return int(s, 0)
    except ValueError:
        m = re.match(r'^(0x[0-9A-Fa-f]+|\d+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', s)
        if m:
            return int(m.group(1), 0) + int(m.group(2), 0)
        return None

def base_of(e):
    """normalise a pointer expression: returns (var, extra_offset) or None. var may be '&D_80126B58'."""
    e = strip(e)
    m = re.match(r'^(&?\s*\w+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    if m:
        v = m.group(1).replace(' ', '')
        if not re.match(r'^&?[A-Za-z_]\w*$', v):
            return None
        return (v, int(m.group(2), 0))
    m = re.match(r'^\(\s*(?:u8|s8|char)\s*\*\s*\)\s*(&?\w+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    if m:
        return (m.group(1), int(m.group(2), 0))
    if re.match(r'^&?\s*[A-Za-z_]\w*$', e):
        return (e.replace(' ', ''), 0)
    m = re.match(r'^(\w+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    return None

def rw_of(text, start, end):
    """access occupying text[start:end]; classify"""
    after = text[end:end + 4]
    a = after.lstrip()
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
    t = re.sub(r'\s+', ' ', t.strip())
    t = t.replace('struct ', '')
    t = re.sub(r'\s*\*', ' *', t).replace('* *', '**')
    return t

def size_of(t):
    if t.endswith('*'):
        return 4
    return SIZES.get(t, None)

# ---------------------------------------------------------------- function splitting
FUNC_RE = re.compile(r'^(?!extern\b|typedef\b|INCLUDE_ASM|#)(?:static\s+|inline\s+|const\s+)*([A-Za-z_][\w \*]*?)\b([A-Za-z_]\w*)\s*\(([^;{}]*)\)\s*\{\s*(?:/\*.*\*/\s*)?$')
PROTO_RE = re.compile(r'^(?:extern\s+)?(?:static\s+|inline\s+)*([A-Za-z_][\w \*]*?)\b([A-Za-z_]\w*)\s*\(([^;{}()]*)\)\s*;', re.M)

def iter_c_files():
    for d, _, fs in os.walk(os.path.join(ROOT, 'src')):
        for f in sorted(fs):
            if f.endswith('.c'):
                yield os.path.join(d, f)

def area_of(path):
    rel = os.path.relpath(path, ROOT)
    p = rel.split(os.sep)
    if p[1] == 'stage':
        return 'engine' if p[2].startswith('engine') else 'stage-specific'
    if p[1] == 'stg':
        return 'stg'
    if p[1] == 'abil':
        return 'abil'
    if p[1].startswith('ovl'):
        return p[1]
    return 'exe'

def parse_params(ps):
    out = []
    ps = ps.strip()
    if ps in ('', 'void'):
        return out
    for p in split_args(ps):
        m = re.match(r'^(.*?)(\w+)\s*(\[\s*\w*\s*\])?$', p.strip())
        if not m:
            out.append(('?', '?')); continue
        out.append((norm_type(m.group(1)) or 's32', m.group(2)))
    return out

functions = []  # dict(name, file, area, ret, params[(type,name)], body, line)
protos = defaultdict(list)  # name -> list of (ret, params)
comments = re.compile(r'/\*.*?\*/', re.S)
for path in iter_c_files():
    raw = open(path, encoding='latin-1').read()
    for pm in PROTO_RE.finditer(comments.sub(lambda m: ' ' * len(m.group(0)), raw)):
        ret, name = norm_type(pm.group(1)), pm.group(2)
        if name in KEYWORDS:
            continue
        protos[name].append((ret, parse_params(pm.group(3))))
    lines = raw.split('\n')
    i = 0
    while i < len(lines):
        m = FUNC_RE.match(lines[i])
        if not m and re.match(r'^[A-Za-z_][\w \*]*\b\w+\s*\([^;{}]*\)\s*$', lines[i]) and not lines[i].startswith(('extern', 'typedef')):
            k = i + 1
            knr = []
            while k < len(lines) and k < i + 12 and re.match(r'^\s+[\w \*]+;\s*$', lines[k]):
                knr.append(lines[k].strip().rstrip(';')); k += 1
            if k < len(lines) and lines[k].startswith('{'):
                m = FUNC_RE.match(lines[i].rstrip() + ' {')
                if m and knr:
                    tmap = {}
                    for d in knr:
                        mm = re.match(r'^(.*?)(\w+)$', d)
                        if mm: tmap[mm.group(2)] = mm.group(1).strip()
                    names = [a.strip() for a in m.group(3).split(',') if a.strip()]
                    m = (m, ', '.join('%s %s' % (tmap.get(n, 's32'), n) for n in names))
                i = k if m else i
        if m and not isinstance(m, tuple) and m.group(2) in KEYWORDS:
            m = None
        if m:
            if isinstance(m, tuple):
                m, pstr = m
            else:
                pstr = m.group(3)
            j = i + 1
            while j < len(lines) and not lines[j].startswith('}'):
                j += 1
            body = '\n'.join(lines[i + 1:j])
            functions.append(dict(name=m.group(2), file=os.path.relpath(path, ROOT), area=area_of(path),
                                  ret=norm_type(m.group(1)), params=parse_params(pstr),
                                  body=comments.sub(lambda mm: ' ' * len(mm.group(0)), body), line=i + 1))
            i = j
        i += 1

byname = defaultdict(list)
for f in functions:
    byname[f['name']].append(f)

# ---------------------------------------------------------------- per-function extraction
DECL_RE = re.compile(r'^\s*(?:register\s+|static\s+|volatile\s+)*((?:struct\s+)?[A-Za-z_]\w*)\s+([^;=(]*?(?:=[^;]*)?);', re.M)

def local_types(f):
    t = {}
    for typ, name in f['params']:
        t[name] = typ
    for m in DECL_RE.finditer(f['body']):
        base = m.group(1).replace('struct ', '')
        if base in ('return', 'goto', 'case', 'else', 'break', 'continue', 'do'):
            continue
        for part in split_args(m.group(2)):
            part = part.split('=')[0].strip()
            mm = re.match(r'^(\**)\s*(\w+)', part)
            if mm and mm.group(2) not in t:
                t[mm.group(2)] = base + (' ' + mm.group(1) if mm.group(1) else '')
    return t

def scan_af(text, recs, depth_base=None):
    """find AF( ... ) at any nesting; append dicts with var, off, type, rw, parent(off,type) for 2-level"""
    for m in re.finditer(r'\bAF\(', text):
        s = m.start()
        e = balanced(text, m.end() - 1)
        if e < 0:
            continue
        args = split_args(text[m.end():e])
        if len(args) != 3:
            continue
        off = parse_int(args[2])
        typ = norm_type(args[1])
        rw = rw_of(text, s, e + 1)
        b = strip(args[0])
        inner = re.match(r'^AF\(', b)
        if inner and balanced(b, 2) == len(b) - 1:
            ia = split_args(b[3:-1])
            if len(ia) == 3:
                ib = base_of(ia[0])
                ioff = parse_int(ia[2])
                if ib and ioff is not None:
                    recs.append(dict(var=ib[0], off=(None if off is None else off), type=typ, rw=rw, form='AF2',
                                     parent=(ib[1] + ioff, norm_type(ia[1])), pos=s))
            continue
        bb = base_of(args[0])
        if bb is None:
            continue
        recs.append(dict(var=bb[0], off=(None if off is None else bb[1] + off), type=typ, rw=rw, form='AF',
                         parent=None, pos=s, dyn=(args[2] if off is None else None)))

RAW_RE = re.compile(r'\*\s*\(\s*((?:volatile\s+)?\w+(?:\s*\*)*)\s*\*\s*\)\s*\(')

def scan_raw(text, recs):
    for m in RAW_RE.finditer(text):
        ps = m.end() - 1
        e = balanced(text, ps)
        if e < 0:
            continue
        inner = text[ps + 1:e]
        bb = base_of(inner)
        if bb is None or bb[1] == 0 and '+' not in inner:
            continue
        typ = norm_type(m.group(1).replace('volatile', ''))
        recs.append(dict(var=bb[0], off=bb[1], type=typ, rw=rw_of(text, m.start(), e + 1), form='raw',
                         parent=None, pos=m.start()))

def scan_index(text, recs, ltypes):
    for m in re.finditer(r'(?<![\w\].>])([A-Za-z_]\w*)\s*\[\s*(0x[0-9A-Fa-f]+|\d+)\s*\]', text):
        v = m.group(1)
        lt = ltypes.get(v, '')
        if lt.replace(' ', '') not in ('u8*', 's8*', 'char*'):
            continue
        recs.append(dict(var=v, off=int(m.group(2), 0), type=lt.split('*')[0].strip(), rw=rw_of(text, m.start(), m.end()),
                         form='idx', parent=None, pos=m.start()))

ARROW_RE = re.compile(r'(?<![\w.>])(\w+)->(\w+(?:\[\w+\])?(?:\[\w+\])?(?:\.\w+)*)((?:->\w+(?:\[\w+\])?(?:\.\w+)*)?)')
DOT_RE = re.compile(r'(?<![\w.>])(D_80126B58)\.(\w+(?:\[\w+\])?(?:\.\w+)*)((?:->\w+(?:\[\w+\])?(?:\.\w+)*)?)')

def scan_typed(text, recs, ltypes):
    for rx, glob in ((ARROW_RE, False), (DOT_RE, True)):
        for m in rx.finditer(text):
            v = m.group(1)
            sname = 'Player' if glob else ltypes.get(v, '').replace('*', '').strip()
            if sname not in OBJ_TYPES:
                continue
            fa = field_access(sname, m.group(2))
            if fa is None:
                continue
            off, typ, dyn = fa
            var = '&' + v if glob else v
            rw = rw_of(text, m.start(), m.end())
            if m.group(3):
                sub = m.group(3)[2:]
                fb = field_access('ModelObj', sub) if typ.startswith('ModelObj') else None
                recs.append(dict(var=var, off=off, type=typ, rw='R', form='typed', parent=None, pos=m.start(), sname=sname))
                if fb:
                    recs.append(dict(var=var, off=fb[0], type=fb[1], rw=rw, form='typed2', parent=(off, typ), pos=m.start(), sname=sname))
                continue
            recs.append(dict(var=var, off=(None if dyn else off), type=typ, rw=rw, form='typed', parent=None, pos=m.start(),
                             sname=sname, base_off=off))

CALL_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*\(')
TABLE_RE = re.compile(r'(\w+)\s*\[')

def scan_calls(text):
    calls = []
    for m in CALL_RE.finditer(text):
        name = m.group(1)
        if name in KEYWORDS or name in SIZES or name in ('AF', 'PARTS', 'DROP'):
            continue
        e = balanced(text, m.end() - 1)
        if e < 0:
            continue
        args = [strip(a) for a in split_args(text[m.end():e])]
        # assignment target: "x = name(...)"
        pre = text[max(0, m.start() - 60):m.start()]
        am = re.search(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?$', pre)
        calls.append(dict(name=name, args=args, assign=(am.group(1) if am and not pre.rstrip().endswith('==') else None)))
    return calls

def scan_dispatch(text):
    out = []
    for m in re.finditer(r'(\w+)\s*\[', text):
        s = m.end() - 1
        depth = 0
        e = -1
        for j in range(s, len(text)):
            if text[j] == '[':
                depth += 1
            elif text[j] == ']':
                depth -= 1
                if depth == 0:
                    e = j; break
        if e < 0:
            continue
        rest = text[e + 1:e + 3].lstrip()
        if not rest.startswith('('):
            continue
        idx = text[s + 1:e]
        recs = []
        scan_af(idx, recs)
        ar = re.match(r'^\s*(\w+)->(\w+)\s*$', idx)
        for r in recs:
            if r['form'] == 'AF' and r['off'] is not None:
                out.append((r['var'], r['off'], r['type'], m.group(1)))
        if ar:
            out.append((ar.group(1), ar.group(2), None, m.group(1)))
    return out

ASSIGN_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?(&?[A-Za-z_]\w*)\s*;')
ASSIGN_AF_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?AF\(\s*(\w+)\s*,\s*[\w \*]+\*\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*;')

for f in functions:
    lt = local_types(f)
    f['ltypes'] = lt
    recs = []
    scan_af(f['body'], recs)
    scan_raw(f['body'], recs)
    scan_index(f['body'], recs, lt)
    scan_typed(f['body'], recs, lt)
    f['recs'] = recs
    f['calls'] = scan_calls(f['body'])
    f['dispatch'] = scan_dispatch(f['body'])
    f['assigns'] = ASSIGN_RE.findall(f['body'])
    f['assign_af'] = ASSIGN_AF_RE.findall(f['body'])

# ---------------------------------------------------------------- object classification by propagation
# objparam[name] = {k: (kind, reason)}
objparam = defaultdict(dict)
objret = {}
def typekind(t):
    t = t.replace(' ', '')
    for k, v in OBJ_TYPES.items():
        if t == k + '*':
            return v
    return None

for name, plist in protos.items():
    for ret, params in plist:
        if typekind(ret):
            objret[name] = (typekind(ret), 'prototype returns ' + ret)
        for k, (t, n) in enumerate(params):
            tk = typekind(t)
            if tk:
                objparam[name][k] = (tk, 'prototype %s(%s)' % (name, t))
for f in functions:
    if typekind(f['ret']):
        objret[f['name']] = (typekind(f['ret']), 'returns ' + f['ret'])
    for k, (t, n) in enumerate(f['params']):
        tk = typekind(t)
        if tk:
            objparam[f['name']][k] = (tk, 'parameter type ' + t)

DISPATCH_SEEDS = {}  # filled after a first look; offsets whose dispatch marks an object
SEED_DISPATCH = {(2, 'u16'), (2, 's16'), (0x214, 'u8'), (0x4E, 'u8')}

def classify():
    changed = True
    rounds = 0
    while changed and rounds < 30:
        changed = False
        rounds += 1
        for f in functions:
            obj = f.setdefault('obj', {})
            def mark(v, kind, why):
                nonlocal changed
                if v.startswith('&') or v in ('NULL',) or re.match(r'^\d', v):
                    return
                if v not in obj:
                    obj[v] = (kind, why)
                    changed = True
            for v, t in f['ltypes'].items():
                tk = typekind(t)
                if tk:
                    mark(v, tk, 'declared ' + t)
            for v, off, typ, tab in f['dispatch']:
                if (off, typ) in SEED_DISPATCH:
                    mark(v, 'player' if off == 0x214 else 'object', 'dispatch %s[+0x%X]' % (tab, off))
            for c in f['calls']:
                op = objparam.get(c['name'], {})
                for k, a in enumerate(c['args']):
                    if k in op:
                        mark(a, op[k][0], 'passed to %s arg%d' % (c['name'], k))
                if c['assign'] and c['name'] in objret:
                    mark(c['assign'], objret[c['name']][0], 'result of ' + c['name'])
            for dst, src in f['assigns']:
                if src in obj:
                    mark(dst, obj[src][0], 'copy of ' + src)
                if src == '&' + PLAYER_SYM:
                    mark(dst, 'player', 'address of Musashi')
                if dst in obj and src in f['ltypes'] and src not in obj:
                    pass
            for dst, src, off in f['assign_af']:
                if src in obj and int(off, 0) == 0x64:
                    mark(dst, 'actor', 'parent (+0x64) of ' + src)
            # function property -> param (a parameter proven an object by the callers)
            for k, (t, n) in enumerate(f['params']):
                if k in objparam.get(f['name'], {}):
                    mark(n, objparam[f['name']][k][0], 'parameter %d: %s' % (k, objparam[f['name']][k][1]))
            # param -> function property
            for k, (t, n) in enumerate(f['params']):
                if n in obj and k not in objparam[f['name']]:
                    objparam[f['name']][k] = (obj[n][0], 'in %s: %s' % (f['name'], obj[n][1]))
                    changed = True
        # reverse: callers
        callsites = defaultdict(lambda: defaultdict(lambda: [0, 0, None]))
        for f in functions:
            for c in f['calls']:
                if c['name'] not in byname:
                    continue
                for k, a in enumerate(c['args']):
                    if re.match(r'^&?\w+$', a) and not re.match(r'^\d', a):
                        cs = callsites[c['name']][k]
                        cs[1] += 1
                        if a in f.get('obj', {}) or a == '&' + PLAYER_SYM:
                            cs[0] += 1
                            cs[2] = 'player' if a == '&' + PLAYER_SYM else f['obj'][a][0]
        for name, ks in callsites.items():
            for k, (n_obj, n_all, kind) in ks.items():
                if n_obj >= 1 and n_obj * 3 >= n_all * 2 and k not in objparam[name]:
                    for g in byname[name]:
                        if k < len(g['params']):
                            objparam[name][k] = (kind, 'callers pass objects (%d of %d)' % (n_obj, n_all))
                            changed = True
                            break
    return rounds

rounds = classify()

# ---------------------------------------------------------------- origin flow (P = Musashi, A = pool actor)
SPAWN_A = {'func_8012C890', 'func_8012C658', 'func_8012C588', 'func_8012C51C', 'func_8012C750', 'func_8012C820',
           'func_8012C724', 'func_8013E410', 'func_8012C284', 'func_8012C2D0', 'func_8012C31C'}
SPAWN_E = {'func_80146A6C', 'func_80146994', 'func_801469C8', 'func_80146AFC'}
FREE_E = {'func_80146C3C'}
REGISTER_P = {'func_8016EDEC', 'func_8016ED8C', 'func_8016EE94', 'SetActionHandler'}
porigin = defaultdict(lambda: defaultdict(set))   # func -> param index -> set
for f in functions:
    org = f.setdefault('org', defaultdict(set))
    for c in f['calls']:
        if c['assign'] and c['name'] in SPAWN_A:
            org[c['assign']].add('A')
        if c['name'] in REGISTER_P and c['args']:
            h = re.sub(r'^&', '', c['args'][0])
            if h in byname:
                porigin[h][0].add('P')
    for dst, src in f['assigns']:
        if src == '&' + PLAYER_SYM:
            org[dst].add('P')
    for m in re.finditer(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?&?(?:D_80120194|D_801202A0)\b', f['body']):
        org[m.group(1)].add('A')
    for m in re.finditer(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?&(?:D_80120194|D_801202A0)\[', f['body']):
        org[m.group(1)].add('A')
    for v, off, typ, tab in f['dispatch']:
        if off == 0x214:
            org[v].add('P')
    for c in f['calls']:
        if c['assign'] and c['name'] in SPAWN_E:
            org[c['assign']].add('E')
        if c['name'] in FREE_E and c['args'] and re.match(r'^\w+$', c['args'][0]):
            org[c['args'][0]].add('E')
    for m in re.finditer(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?&D_8011D030\b', f['body']):
        org[m.group(1)].add('E')
changed = True
rr = 0
while changed and rr < 40:
    changed = False; rr += 1
    for f in functions:
        org = f['org']
        for k, (t, n) in enumerate(f['params']):
            add = porigin[f['name']].get(k, set()) - org[n]
            if add:
                org[n] |= add; changed = True
        for dst, src in f['assigns']:
            if src in org and org[src] - org[dst]:
                org[dst] |= org[src]; changed = True
        for dst, src, off in f['assign_af']:
            if src in org and org[src] and int(off, 0) == 0x64 and not {'A', 'P'} <= org[dst]:
                org[dst] |= {'A', 'P'}; changed = True
        for c in f['calls']:
            if c['name'] not in byname:
                continue
            for k, a in enumerate(c['args']):
                o = {'P'} if a == '&' + PLAYER_SYM else org.get(a, set())
                if o - porigin[c['name']][k]:
                    porigin[c['name']][k] |= o; changed = True
print('origin rounds', rr)

# weak pass: a pointer with no origin from the seeds gets one from its own offsets (>= 0x10C cannot be a 0x10C pool
# actor: 'p', else 'a'), only where nothing flows in (no direct callers); then the union flows down the call graph
called = defaultdict(set)
for f in functions:
    for c in f['calls']:
        if c['name'] in byname:
            for k, a in enumerate(c['args']):
                called[c['name']].add(k)
def own_max(f, v):
    offs = [r['off'] for r in f['recs'] if r['var'] == v and r['parent'] is None and r['off'] is not None]
    return max(offs) if offs else -1
# reach[name][k]: the largest offset used on param k by the function or anything it passes it to
reach = defaultdict(dict)
for f in functions:
    for k, (t, n) in enumerate(f['params']):
        reach[f['name']][k] = own_max(f, n)
ch = True
while ch:
    ch = False
    for f in functions:
        pn = {n: k for k, (t, n) in enumerate(f['params'])}
        for c in f['calls']:
            if c['name'] not in reach:
                continue
            for k, a in enumerate(c['args']):
                if a in pn and k in reach[c['name']] and reach[c['name']][k] > reach[f['name']][pn[a]]:
                    reach[f['name']][pn[a]] = reach[c['name']][k]; ch = True
def var_reach(f, v):
    m = own_max(f, v)
    for c in f['calls']:
        for k, a in enumerate(c['args']):
            if a == v and c['name'] in reach and k in reach[c['name']]:
                m = max(m, reach[c['name']][k])
    return m
# signatures: (offset, size) pairs seen through pointers of strong origin only P or only A
def _sz(t):
    t = t.replace(' ', '')
    if t.endswith('*'): return 4
    return {'s8': 1, 'u8': 1, 's16': 2, 'u16': 2, 's32': 4, 'u32': 4}.get(t, 0)
sigP, sigA = Counter(), Counter()
for f in functions:
    for r in f['recs']:
        if r['parent'] is not None or r['off'] is None:
            continue
        v = r['var']
        o = {'P'} if v == '&' + PLAYER_SYM else f['org'].get(v, set())
        k = (r['off'], _sz(r['type']))
        if o == {'P'}: sigP[k] += 1
        elif o == {'A'}: sigA[k] += 1
ABS_SZ = {}
for f in functions:
    for m in re.finditer(r'extern\s+(s8|u8|s16|u16|s32|u32)\s+D_(8012[67][0-9A-F]{3})\s*;', open(os.path.join(ROOT, f['file']), encoding='latin-1').read() if f is functions[0] or True else ''):
        pass
    break
for path in iter_c_files():
    for m in re.finditer(r'extern\s+(s8|u8|s16|u16|s32|u32)\s+D_(8012[67][0-9A-F]{3})\s*;', open(path, encoding='latin-1').read()):
        a = int(m.group(2), 16)
        if PLAYER_ADDR <= a < PLAYER_ADDR + 0x308:
            ABS_SZ[a - PLAYER_ADDR] = SIZES[m.group(1)]
            sigP[(a - PLAYER_ADDR, SIZES[m.group(1)])] += 1
SIG_P = {k for k in sigP if k not in sigA}
SIG_A = {k for k in sigA if k not in sigP}
def sig_vote(f, v):
    sp = sa = 0
    for r in f['recs']:
        if r['var'] == v and r['parent'] is None and r['off'] is not None:
            k = (r['off'], _sz(r['type']))
            sp += k in SIG_P; sa += k in SIG_A
    return sp, sa
# the signature keys a parameter reaches, through the functions it is handed to
def own_keys(f, v):
    ks = set()
    for r in f['recs']:
        if r['var'] == v and r['parent'] is None and r['off'] is not None:
            ks.add((r['off'], _sz(r['type'])))
    return ks
rkeys = defaultdict(dict)
for f in functions:
    for k, (t, n) in enumerate(f['params']):
        rkeys[f['name']][k] = own_keys(f, n) & (SIG_P | SIG_A)
ch = True
while ch:
    ch = False
    for f in functions:
        pn = {n: k for k, (t, n) in enumerate(f['params'])}
        for c in f['calls']:
            if c['name'] not in rkeys:
                continue
            for k, a in enumerate(c['args']):
                if a in pn and k in rkeys[c['name']]:
                    add = rkeys[c['name']][k] - rkeys[f['name']][pn[a]]
                    if add:
                        rkeys[f['name']][pn[a]] |= add; ch = True
def var_keys(f, v):
    ks = own_keys(f, v) & (SIG_P | SIG_A)
    for c in f['calls']:
        for k, a in enumerate(c['args']):
            if a == v and c['name'] in rkeys and k in rkeys[c['name']]:
                ks |= rkeys[c['name']][k]
    return ks
def big_on(f, v):
    if var_reach(f, v) >= 0x10C:
        return True
    ks = var_keys(f, v)
    return len(ks & SIG_P) > len(ks & SIG_A)
def eff_on(f, v):
    # an effect slot is 0x58 bytes with its owner pointer at +0x34
    if var_reach(f, v) >= 0x58:
        return False
    for r in f['recs']:
        if r['var'] != v or r['off'] is None:
            continue
        if r['parent'] is None and r['off'] == 0x34 and r['type'].replace(' ', '').endswith('*'):
            return True
        if r['parent'] is not None and r['parent'][0] == 0x34:
            return True
    for m in DER_RE2.finditer(f['body']):
        if m.group(2) == v and int(m.group(4), 0) == 0x34:
            return True
    return False
DER_RE2 = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?AF\(\s*(&?\w+)\s*,\s*([\w \*]+\*)\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*;')
for f in functions:
    f['worg'] = defaultdict(set)
    pnames = {n: k for k, (t, n) in enumerate(f['params'])}
    objs = set(f.get('obj', {}))
    for v in objs:
        if f['org'].get(v):
            f['worg'][v] |= f['org'][v]
        elif v not in pnames or pnames[v] not in called[f['name']]:
            f['worg'][v].add('e' if eff_on(f, v) else 'p' if big_on(f, v) else 'a')
wpo = defaultdict(lambda: defaultdict(set))
changed = True
rr2 = 0
while changed and rr2 < 40:
    changed = False; rr2 += 1
    for f in functions:
        org = f['worg']
        for k, (t, n) in enumerate(f['params']):
            add = (wpo[f['name']].get(k, set()) | porigin[f['name']].get(k, set())) - org[n]
            if add:
                org[n] |= add; changed = True
        for dst, src in f['assigns']:
            if src in org and org[src] - org[dst]:
                org[dst] |= org[src]; changed = True
        for c in f['calls']:
            if c['name'] not in byname:
                continue
            for k, a in enumerate(c['args']):
                o = {'P'} if a == '&' + PLAYER_SYM else org.get(a, set())
                if o - wpo[c['name']][k]:
                    wpo[c['name']][k] |= o; changed = True
print('weak rounds', rr2)

def origin_of(f, v):
    if v == '&' + PLAYER_SYM or v.startswith('D_'):
        return 'P'
    o = f['worg'].get(v, set())
    if not o:
        return 'E?' if eff_on(f, v) else 'P?' if big_on(f, v) else 'A?'
    lab = ''
    weak = False
    for K in 'PAE':
        if K in o or K.lower() in o:
            lab += K
            if K not in o:
                weak = True
    return lab + ('?' if weak else '')

# ---------------------------------------------------------------- emit census
rows = []
for f in functions:
    obj = f.get('obj', {})
    for r in f['recs']:
        v = r['var']
        if v == '&' + PLAYER_SYM:
            kind, why = 'player', 'Musashi global'
        elif v in obj:
            kind, why = obj[v]
        else:
            continue
        rows.append(dict(file=f['file'], area=f['area'], func=f['name'], var=v, kind=kind, why=why, off=r['off'], origin=origin_of(f, v),
                         type=r['type'], rw=r['rw'], form=r['form'], parent=r['parent'], dyn=r.get('dyn')))
# pointers loaded from an object's pointer field: their accesses are level-2 rows (parent = that field)
DER_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?AF\(\s*(&?\w+)\s*,\s*([\w \*]+\*)\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*;')
for f in functions:
    obj = f.get('obj', {})
    der = {}
    for m in DER_RE.finditer(f['body']):
        v, src, t, off = m.groups()
        if (src in obj or src == '&' + PLAYER_SYM) and v not in obj and v not in der:
            der[v] = (src, int(off, 0), norm_type(t))
    for r in f['recs']:
        if r['parent'] is None and r['var'] in der and r['off'] is not None:
            src, poff, pt = der[r['var']]
            rows.append(dict(file=f['file'], area=f['area'], func=f['name'], var=src, kind='derived', why='via ' + r['var'],
                             off=r['off'], origin=origin_of(f, src), type=r['type'], rw=r['rw'], form='via-var',
                             parent=(poff, pt), dyn=None))
# absolute Musashi fields D_80126Bxx..
for f in functions:
    for m in re.finditer(r'\bD_(8012[6-7][0-9A-F]{3})\b', f['body']):
        a = int(m.group(1), 16)
        if PLAYER_ADDR < a < PLAYER_ADDR + 0x308:
            rw = rw_of(f['body'], m.start(), m.end())
            rows.append(dict(file=f['file'], area=f['area'], func=f['name'], var='D_' + m.group(1), kind='player',
                             why='absolute address', off=a - PLAYER_ADDR, origin='P', type='?abs', rw=rw, form='abs', parent=None, dyn=None))

plab = {}
for f in functions:
    if f['params']:
        plab[f['name']] = {k: origin_of(f, n) for k, (t, n) in enumerate(f['params']) if n in f.get('obj', {}) or f['worg'].get(n)}
json.dump(dict(plab=plab, rows=rows, objparam={k: {str(kk): vv for kk, vv in v.items()} for k, v in objparam.items()},
               nfunc=len(functions), rounds=rounds), open(OUT + '.json', 'w'), indent=0)
with open(OUT + '.tsv', 'w') as fo:
    for r in rows:
        fo.write('\t'.join(str(r[k]) for k in ('area', 'file', 'func', 'var', 'kind', 'origin', 'off', 'type', 'rw', 'form', 'parent', 'why')) + '\n')
print('functions', len(functions), 'rounds', rounds, 'rows', len(rows))
print('objparam functions', len(objparam))
print(Counter(r['kind'] for r in rows))
print(Counter(r["area"] for r in rows)); print(Counter(r['origin'] for r in rows))
```
