# Main EXE: naming proposals (r274, research only)

Proposals for the main EXE's (SLUS_007.26, game code 0x80010178-0x8003A443) still-generic functions and globals, from
the matched C in `src/main.c`, `src/code_800123F0.c`, `src/code_8002C410.c` and `src/code_8002C8BC.c`, and from how the
field / debug / title overlays (`src/ovl3*/`), the stage engine (`src/stage/`), the stage code (`src/stg/`) and the
ability packages (`src/abil/`) call them. Nothing here is applied: a later local card applies the names to
`symbol_addrs.txt` and checks that everything still matches. Snapshot: main = a75e323d (4 Nov 2026).

## How to read this
* **Calls** in the evidence column: call sites outside the EXE (overlays, stage engine, stage code, ability packages),
  `extern` lines excluded, then the number of files with at least one. "no callers" means no reference at all in the
  C (the function may still be reached through a table in data, or be dead code).
* **Evidence** names the EXE file and what the body shows, then what the callers pass or test. File short names:
  "c23F0" = src/code_800123F0.c, "c8BC" = src/code_8002C8BC.c, "main" = src/main.c; stage engine files as in r272
  ("e.c" = src/stage/engine.c, "eC98C" = engine_8013C98C.c, "e58E0" = engine_801458E0.c, "e5F4" = engine_8012F5F4.c);
  `stg/scNN_NNN.c` for the stage code, `ovl36` etc. for the overlays.
* **Confidence.** H: the body says it and the callers agree. M: the behaviour is clear but the name picks one reading
  (or the caller context is thin). L: a guess from a few call sites; check before applying.
* **Style** follows the names already in `symbol_addrs.txt`: CamelCase, verb first, no module prefix (LoadFileStep,
  StreamStep, SetMode, NextGameState, GetPadHeld, StartRumbleScript, AllocPrim, InitSound), `g_` for globals
  (g_PrimNext, g_WorldOtTable, g_FileTable). Families keep one stem (DrawPrimG4 / DrawPrimG4Screen / DrawPrimG4Mtx).
  Names do not reuse PsyQ's (no new `MemCard*`, `Gs*`, `Ss*`, `Spu*`).
* **Work fields.** Work is the 0xA444-byte block at 0x800AF630 (`include/work.h`). Many `D_800Bxxxx` / `D_800AFxxx`
  globals in the C are Work fields reached by address (e.g. D_800B9A02 = Work+0xA3D2 `frame`). They are listed in
  "Found along the way" as fields, not proposed as globals.

## Summary
(Counts at the end of the file, in "Totals".)

## Names that already exist only in a comment
`symbol_addrs.txt` names these in a comment line only ("main program: ..."). They are known, so they are not proposed
again, but they are not applied yet; the local batch can apply them as they are:

| address | current | known name | note |
|---|---|---|---|
| 0x80029178 | func_80029178 | GetFlag | c23F0: bit n of the 64-byte flag array D_800AE648. 662 calls / 88 files. Its setter func_80029124 is proposed below as SetFlag |
| 0x8001D130 | func_8001D130 | PartShow | c23F0: clears bit 24 of a part's draw word (model section) |
| 0x8001D150 | func_8001D150 | PartHide | c23F0: sets bit 24 of a part's draw word (model section) |

## Math, angles and GTE helpers (0x800123F0-0x800140B8)

Angles are 12-bit (0x1000 = a full turn). Matrices are PsyQ MATRIX (`Mtx` in c23F0: 3x3 s16 at 4096 = 1.0, then a
s32 translation). Stage positions are three 16.16 `Fixed` words (`include/game.h`), so a position's integer halves are
the s16 at +2, +6, +0xA; "Pos" in the names below means such a position, "SVec" an s16[3], "Vec" an s32[3].

The easing family: `Ease*(cur, target, div)` returns cur moved by (target - cur) / div, halving div (up to four times)
when the step would round to 0, so it always arrives; `*Frac(cur, target, div, mul)` moves by (target - cur) * mul / div
and at least 1; `Approach*(cur, target, speed)` moves by a fixed speed without overshooting. The `Angle` forms wrap the
difference to -0x800..0x800 and the result to 0..0xFFF. The `*Step` forms return the step instead of the new value; the
`*StepRec` / `*StepImpl` forms are their workers.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800123F0 | func_800123F0 | RotateMatrixZ | m = m * Rz(angle), then NormalizeMatrix | H | c23F0: Rz built from rsin/rcos (c, -s / s, c / 1), multiplied with gte_rtir per column. 34 calls / 16 files (e58E0 builds model matrices with RotateMatrixY then RotateMatrixZ); RotateVectorZ inlines it |
| 0x80012558 | func_80012558 | RotateMatrixY | m = m * Ry(angle), then NormalizeMatrix | H | c23F0: Ry (c, 0, s / 0, 1, 0 / -s, 0, c). 34 calls / 15 files |
| 0x800126C4 | func_800126C4 | RotateMatrixX | m = m * Rx(angle), then NormalizeMatrix | H | c23F0: Rx (1, 0, 0 / 0, c, -s / 0, s, c). 35 calls / 15 files |
| 0x8001282C | func_8001282C | NormalizeMatrix | normalise the three columns of a rotation matrix (not re-orthogonalised) | M | c23F0: GetMatrixColumn0/1/2, NormalizeSVector on each, SetMatrixColumns. Called after every RotateMatrix* to stop drift |
| 0x800128B4 | func_800128B4 | NormalizeSVector | an s16[3] scaled to length 4096 in place | H | c23F0: SVecToVec then VectorNormalSScaled back into it |
| 0x800128EC | func_800128EC | VectorNormalSScaled | VectorNormalS of a VECTOR first shifted down to 18 significant bits | H | c23F0: Lzc of the three parts, shift by 0x12 - min, then VectorNormalS (PsyQ needs small inputs) |
| 0x800129CC | func_800129CC | VectorToAngles | x and z rotation angles (y = 0) that point along a direction vector | M | c23F0: out[0] = ratan2(-y, z) - 0x400, out[2] = ratan2(y, x) + 0x400. 1 call: e58E0 |
| 0x80012A60 | func_80012A60 | AngleDist | absolute angle between a and b, 0..0x800 | H | c23F0: (a - b) & 0xFFF folded at 0x800. 56 calls / 24 files: `d = func_80012A60(a, 0x800)` against the four headings |
| 0x80012AB0 | func_80012AB0 | AngleSub | (a - b) & 0xFFF | H | c23F0; only AngleDist calls it |
| 0x80012ABC | func_80012ABC | EaseAngle | an angle eased toward a target by 1/div, wrapped | H | c23F0: (a + EaseAngleStep(a, b, c)) & 0xFFF. 437 calls / 143 files: `rot.x = func_80012ABC(rot.x, target.x, 4)` on the model rotation (+0x18..+0x1C toward +0x20..+0x24) |
| 0x80012B04 | func_80012B04 | EaseAngleStep | the step of EaseAngle (0 when equal) | H | c23F0. 29 calls / 20 files: `d = func_80012B04(model->rot.y, 0x800, 4)` |
| 0x80012B58 | func_80012B58 | EaseAngleStepRec | EaseAngleStep's worker: wrap the difference, divide, halve div when the step is 0 | H | c23F0: recursive, the counter at *p limits it to four halvings |
| 0x80012C6C | func_80012C6C | EaseValue | a value eased toward a target by 1/div | H | c23F0: a + EaseValueStep(a, b, c). 767 calls / 136 files, the commonest EXE call in stage code: `x = func_80012C6C(x, target, 0x10)` on camera / colour / scale values |
| 0x80012CB8 | func_80012CB8 | EaseValueStep | the step of EaseValue | H | c23F0. 9 calls / 3 files: `x += func_80012CB8(y, target, 0x80)` |
| 0x80012D0C | func_80012D0C | EaseValueStepRec | EaseValueStep's worker (no wrap) | H | c23F0: as EaseAngleStepRec without the wrap |
| 0x80012DBC | func_80012DBC | EaseAngleFrac | an angle moved by (target - a) * mul / div, at least 1, wrapped | H | c23F0: (a + EaseAngleFracStep(...)) & 0xFFF. 35 calls / 18 files: `(rot, target, D_..._8019F062, 1)` |
| 0x80012E0C | func_80012E0C | EaseAngleFracStep | its step | H | c23F0 |
| 0x80012E6C | func_80012E6C | EaseAngleFracStepImpl | its worker: wrapped difference * mul / div, never 0 | H | c23F0 |
| 0x80012F74 | func_80012F74 | EaseValueFrac | a value moved by (target - a) * mul / div, at least 1 | H | c23F0. 109 calls / 32 files: `c->r = func_80012F74(c->r, 0, 0xA, 1)` (colour fades) |
| 0x80012FC8 | func_80012FC8 | EaseValueFracStep | its step | H | c23F0. 5 calls / 3 files |
| 0x80013028 | func_80013028 | EaseValueFracStepImpl | its worker | H | c23F0 |
| 0x800130D0 | func_800130D0 | ApproachValue | a value moved toward a target by a fixed speed, clamped at the target | H | c23F0: a + ApproachStep(a, b, c). 22 calls / 7 files: `(o->x8, o->xC, *speed)` |
| 0x8001311C | func_8001311C | ApproachStep | its step, as s16 | H | c23F0. 3 calls / 2 files |
| 0x80013154 | func_80013154 | ApproachStepImpl | the clamped step: +-speed, or the rest when closer than speed | H | c23F0 |
| 0x80013200 | func_80013200 | VecDist | distance between two VECTORs (s32) | H | c23F0: SquareRoot0(VecDistSq). 5 calls / 4 files: `ratan2(dy, func_80013200(&a, &b))` |
| 0x80013228 | func_80013228 | VecDistSq | squared distance between two VECTORs | H | c23F0: Square0 of the difference, summed |
| 0x80013294 | func_80013294 | SVecDist | distance between two s16[3] | H | c23F0. 28 calls / 17 files |
| 0x800132BC | func_800132BC | SVecDistSq | squared distance between two s16[3] | H | c23F0. 39 calls / 26 files: `if (func_800132BC(&a, &b) < 0x41)` |
| 0x80013328 | func_80013328 | PosDist | distance between two 16.16 positions (their integer halves) | H | c23F0: reads a[1], a[3], a[5]. 81 calls / 49 files: `d = func_80013328(a + 4, &D_80126B5C)` (an actor's position to Musashi's) |
| 0x80013350 | func_80013350 | PosDistSq | squared distance between two 16.16 positions | H | c23F0. 39 calls / 17 files: `if (func_80013350(o + 4, t + 4) < 0x900)` |
| 0x800133BC | func_800133BC | SVecPosDist | distance from an s16[3] to a 16.16 position | H | c23F0: a[0..2] against b[1], b[3], b[5]. 2 calls / 3 files |
| 0x800133E4 | func_800133E4 | SVecPosDistSq | squared distance, s16[3] to a 16.16 position | H | c23F0. 6 calls / 6 files |
| 0x80013450 | func_80013450 | PosSVecDist | distance from a 16.16 position to an s16[3] | H | c23F0. 10 calls / 9 files: `func_80013450(o + 4, &v) < 0x10` |
| 0x80013478 | func_80013478 | PosSVecDistSq | squared distance, 16.16 position to s16[3] (GTE sqr0) | H | c23F0. 34 calls / 22 files; e.c `func_80013478(m->pos, D_80126B58.focus) >= D_801274E0` (r272 IsActorFar) |
| 0x800134FC | func_800134FC | RotateVectorX | rotate a VECTOR about X by an angle | H | c23F0: identity, RotateMatrixX, ApplyMatrixLV. 7 calls / 4 files |
| 0x80013694 | func_80013694 | RotateSVectorX | rotate an SVECTOR about X | H | c23F0: as above with ApplyMatrixSV. 1 call |
| 0x8001382C | func_8001382C | RotateVectorY | rotate a VECTOR about Y | H | c23F0. 32 calls / 17 files: `func_8001382C(model->rot.y, &in, &out)` |
| 0x800139C8 | func_800139C8 | RotateSVectorY | rotate an SVECTOR about Y | H | c23F0. 54 calls / 35 files: `func_800139C8(p->rotY, &v, &v)` |
| 0x80013B64 | func_80013B64 | RotateVectorZ | rotate a VECTOR about Z | H | c23F0. 1 call |
| 0x80013CFC | func_80013CFC | RotateSVectorZ | rotate an SVECTOR about Z | H | c23F0. 3 calls / 2 files |
| 0x80013E94 | func_80013E94 | PackAngles10 | three angles packed 10:10:10 into one word (bits 3-12 of each) | M | c23F0: (a << 19) >> 22 per part. 15 calls / 9 files; e58E0 packs D_80128120[i] and passes the word to the effect spawner func_80146A6C |
| 0x80013ED0 | func_80013ED0 | SetMatrixColumns | write three s16[3] as the columns of a matrix | H | c23F0: m[0], m[3], m[6] from x; m[1].. from y; m[2].. from z |
| 0x80013F3C | func_80013F3C | SetIdentityRot | the 3x3 part of a matrix to identity (translation kept) | H | c23F0. 83 calls / 51 files: `func_80013F3C(&m)` before RotateMatrix* / GsGetLs work |
| 0x80013F68 | func_80013F68 | SetRotYMinus90 | the 3x3 part to (0, 0, -1 / 0, 1, 0 / 1, 0, 0) | M | c23F0. no callers |
| 0x80013F98 | func_80013F98 | GetMatrixColumn0 | column 0 of a matrix into an s16[3] | H | c23F0: m+0, +6, +0xC |
| 0x80013FBC | func_80013FBC | GetMatrixColumn1 | column 1 | H | c23F0: m+2, +8, +0xE |
| 0x80013FE0 | func_80013FE0 | GetMatrixColumn2 | column 2 | H | c23F0: m[2], m[5], m[8] |
| 0x80014004 | func_80014004 | SetMatrixColumn0 | an s16[3] into column 0 | H | c23F0. no callers |
| 0x80014028 | func_80014028 | SetMatrixColumn1 | an s16[3] into column 1 | H | c23F0. no callers |
| 0x8001404C | func_8001404C | SetMatrixColumn2 | an s16[3] into column 2 | H | c23F0. no callers |
| 0x80014070 | func_80014070 | SVecToVec | s16[3] widened to s32[3] | H | c23F0; NormalizeSVector uses it. Duplicate: func_80015A2C |
| 0x80014094 | func_80014094 | VecToSVec | s32[3] narrowed to s16[3] | H | c23F0. no callers. Duplicate: func_80015A50 |
| 0x800140B8 | func_800140B8 | ApplyMatrixSVToFixed | rotate an SVECTOR by a matrix into 16.16 words (result << 16) | M | c23F0: gte rtv0, stlvnl, three shifts. no callers |
| 0x80015AD0 | func_80015AD0 | ATan2Div | angle of (x, y) from catan(x * 4096 / y) with the half-turn fix for y < 0 | M | c23F0: catan, +-0x800. 4 calls / 2 files |
| 0x80017D98 | func_80017D98 | SetIdentityRotAlt | the same as SetIdentityRot (u8 * form) | H | c23F0: byte-identical stores. 12 calls / 9 files |
| 0x80017DC4 | func_80017DC4 | SetScaleMatrix | a diagonal matrix from three scales | H | c23F0: m[0] = a[0], m[4] = a[1], m[8] = a[2], the rest 0. 99 calls / 67 files: before RotateMatrix / MulMatrix on model scale |
| 0x80017DF8 | func_80017DF8 | RotateMatrixBy | m = RotMatrix(angles) * m | H | c23F0: RotMatrix into a temporary, MulMatrix2. 8 calls / 6 files |
| 0x80017E30 | func_80017E30 | RotateMatrixByZYX | m = RotMatrixZYX(angles) * m | H | c23F0. 10 calls / 7 files |
| 0x80017E68 | func_80017E68 | SetMatrixTrans | a matrix's translation from an s16[3] | H | c23F0: writes +0x14, +0x18, +0x1C. 131 calls / 64 files |
| 0x80017E8C | func_80017E8C | SetGteLocalMatrix | load the GTE with world-screen x m (CompMatrix with Work.wsm) | H | c23F0: CompMatrix(&D_800AF648 = Work+0x18, m), SetRotMatrix, SetTransMatrix. 8 calls / 7 files; every DrawPrim* with a matrix calls it |
| 0x80029CD4 | func_80029CD4 | RandRange | rand() % n, 0 when n is 0 | H | c23F0. 12 internal calls (stat formulas) |

## Vector and position copies

Two families of three-part copies; several are byte-identical twins.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80015954 | func_80015954 | SVecToPos | an s16[3] into a 16.16 position's integer halves | H | c23F0: b[1], b[3], b[5] = a[0..2]. 72 calls / 39 files |
| 0x80015978 | func_80015978 | PosToSVec | a 16.16 position's integer halves into an s16[3] | H | c23F0: a+2, +6, +0xA. 264 calls / 88 files: `func_80015978(a + 4, &v)` before distance / effect calls |
| 0x8001599C | func_8001599C | CopyVec | copy three s32 | H | c23F0. 2 calls / 2 files. Twin: func_800159C0 |
| 0x800159C0 | func_800159C0 | CopyVecAlt | the same (u8 * form) | H | c23F0. no callers |
| 0x800159E4 | func_800159E4 | CopyPosInt | copy a position's integer halves to another position | H | c23F0: b[1], b[3], b[5] = a[1], a[3], a[5]. 16 calls / 10 files |
| 0x80015A08 | func_80015A08 | CopyVecLow16 | the low halves of three s32 to another s32[3] | M | c23F0: s16 stores at +0, +4, +8. no callers |
| 0x80015A2C | func_80015A2C | SVecToVecAlt | s16[3] to s32[3] | H | c23F0; same body as SVecToVec. 1 call |
| 0x80015A50 | func_80015A50 | VecToSVecAlt | s32[3] to s16[3] | H | c23F0; same body as VecToSVec. no callers |
| 0x80014564 | func_80014564 | ZeroRect | zero 16 bytes (libc memset) | L | c23F0: memset(a, 0, 0x10). no callers; "16 bytes" fits a RECT pair or an SVECTOR pair |
| 0x800166E8 | func_800166E8 | ZeroBytes | zero n bytes one at a time | H | c23F0. no callers |
| 0x80016714 | func_80016714 | ZeroFill | zero n bytes, word stores between unaligned head and tail | H | c23F0 (its extern already says "zero-fills size bytes"). 273 calls / 86 files plus 22 in the EXE (ResetSystems clears Work with it) |
