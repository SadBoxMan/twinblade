# Shared records, part 2 (r273 round 2, research only)

The companion of docs/object_struct.md (the game objects). Same method, same rules: a scripted census of every access
to a record in the matched C, the fields grouped and named with confidence and evidence, a draft C struct per record
(in a code block, **not applied**), the conflicts and the questions a game-memory check could settle. Nothing in src/
or include/ was changed. Snapshot: main = a75e323d (4 Nov 2026, 16:47), merged into this branch.

Records covered, with the functions that touch them:

| record | where | size | functions | accesses | section |
|---|---|---|---|---|---|
| Camera | 0x80126948 (main), 0x80126DB8 (blend), 0x80126E60 x3, 0x80114EE8 x3, 0x801201F8; `D_801151D4` points to the one in use | 0xA4 | 709 | 3 664 | 2 |

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
def add(f, off, typ, rw, form, via):
    if off is None or not (0 <= off < SIZE):
        return
    rows.append(dict(file=f['file'], func=f['name'], off=off, type=norm_type(typ), rw=rw, form=form, via=via))
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
            add(f, b[2] + off, args[1], rw, 'AF', b[1])
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
