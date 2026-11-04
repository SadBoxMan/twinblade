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

## Screen primitives, fades and the image queue (0x80015AD0-0x80018450)

Two ordering tables are drawn each frame: the world OT (GsOT headers D_800A6518[2], 0x14 bytes each, `.org` at
D_800A651C, 4096 entries in g_WorldOtTable) and a small front OT (D_800AE7B8[2] / D_800AE7BC). Screen coordinates are
centred (-160..160, -120..120); the screen size is D_800AF7BC / D_800AF7BE (SetScreenMode writes them).

The **DrawPrim** family takes a shape record (vertices as s16 x, y, z, pad at +0, +8, +0x10, +0x18, then colours, UVs,
a flags word and a CLUT byte) and an optional matrix: with a matrix the vertices are transformed (SetGteLocalMatrix,
RotTransPers3/4 or inline RTPT) and the OT depth is the GTE's; without one ("Screen") they are screen x, y with the
depth in the first vertex's z. The flags word: bit 30 semi-transparent, bits 28-29 the blend mode, bits 24-25 the
texture depth. Each core function has thin wrappers; the wrapper names say which arguments they fix.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80015B6C | func_80015B6C | DrawGradientRect | a vertical-gradient POLY_G4 (two colours) at the back of the world OT, with its draw-mode packets | H | c23F0: code 0x38, top two vertices colour 0, bottom two colour 1, OT entry 0xFFF. 4 calls / 1 file (ovl36 sky bands: `(-0xA0, y, 0x140, h, colours...)`) |
| 0x80015D4C | func_80015D4C | DrawRect | a flat POLY_F4 rectangle at OT depth z, semi-transparent with blend mode m when m < 4 | H | c23F0: code 0x28 / 0x2A, then AddDrawModeAbr. 8 calls / 4 files: `(-0xA0, -0x78, 0x140, 0xF0, c, c, c, 0x20, 2)` |
| 0x80015F04 | func_80015F04 | DrawRectOutline | a rectangle outline of four LINE_F2 | H | c23F0: code 0x40 / 0x42, four corners. 2 calls / 1 file (menu frames, with DrawRect) |
| 0x80016110 | func_80016110 | DrawScreenHalfDark | a full-screen black blend-mode-0 quad at OT 0 | M | c23F0. no callers |
| 0x80016224 | func_80016224 | DrawFadeBlack | a full-screen grey quad in subtract mode (abr 2): colour 0xFF is black, 0 no change; z 0 puts it in the front OT | H | c23F0: code 0x2A, abr 2. 19 calls / 8 files; StartFade / FadeStep draw with it |
| 0x80016450 | func_80016450 | DrawFadeWhite | the same in add mode (abr 1): 0xFF is white | H | c23F0: abr 1. 30 calls / 14 files: `func_80016450(0xFF, 0)` (flashes) |
| 0x80016638 | func_80016638 | AddDrawModeAbr | link a draw-mode packet selecting blend mode abr at OT depth z | H | c23F0: an 8-byte packet 0xE1000000 \| abr << 5. 35 calls / 18 files: `func_80016638(&D_800A6518[frame], 0x10, 1)` |
| 0x800167B8 | func_800167B8 | StartFade | start a fade to / from black: kind < 4 starts black (fade in), >= 4 starts clear (fade out) | H | c23F0: level (Work+0x19E, D_800AF7CE) = 0, DrawFadeBlack(kind < 4 ? 0xFF : 0). 222 calls / 147 files (every stage: `func_800167B8(0)` on entry, `(4)` before leaving) |
| 0x800167F0 | func_800167F0 | FadeStep | advance the fade by speed D_80062BA0[kind & 3] (index 0: by Work.vsyncMode) and draw it; 1 when finished | H | c23F0. 197 calls / 147 files: `return (func_800167F0(0) & 0xFFFF) != 0;` |
| 0x800168B4 | func_800168B4 | ResetFade | fade level = 0 | H | c23F0. no callers |
| 0x800168C4 | func_800168C4 | FadeTimerStep | advance the fade level without drawing; 1 when it is full and Work.dispIdx is set | M | c23F0. no callers |
| 0x80016940 | func_80016940 | StartFadeWhite | StartFade toward white (DrawFadeWhite) | H | c23F0. 5 calls / 5 files |
| 0x80016978 | func_80016978 | FadeWhiteStep | FadeStep toward white | H | c23F0. 7 calls / 5 files: `if (func_80016978(4) & 0xFFFF)` |
| 0x80016A7C | func_80016A7C | DrawPrimLineG2 | a gouraud line from a shape record, optional matrix | H | c23F0: SetLineG2, RotTransPers3, AddPrimFlat |
| 0x80016A3C | func_80016A3C | DrawPrimLineG2Screen | DrawPrimLineG2(a, 0) | H | c23F0. 1 call |
| 0x80016A5C | func_80016A5C | DrawPrimLineG2Mtx | DrawPrimLineG2(a, m) (declared `(void)`, passes its registers on) | H | c23F0. 41 calls / 39 files: `func_80016A5C(&line, &m)` |
| 0x80016B60 | func_80016B60 | DrawPrimLineG3Mtx | a three-point gouraud line, transformed | H | c23F0: SetLineG3, RotTransPers3. no callers |
| 0x80016C28 | func_80016C28 | DrawPrimLineG4Mtx | a four-point gouraud line, transformed | H | c23F0: SetLineG4, RTPT + RTPS. no callers |
| 0x80016D78 | func_80016D78 | DrawPrimFT3Mtx | a textured triangle, transformed | H | c23F0: SetPolyFT3, GetTPage / GetClut from the record. no callers |
| 0x80016F18 | func_80016F18 | DrawPrimFT4 | a textured quad from a shape record, optional matrix; direct != 0 uses a 15-bit texture page | H | c23F0: SetPolyFT4, GetTPage(direct ? 2 : 0, ...) |
| 0x80016EB0 | func_80016EB0 | DrawPrimFT4Screen16 | DrawPrimFT4(a, 0, 1) | H | c23F0. no callers |
| 0x80016ED4 | func_80016ED4 | DrawPrimFT4Screen | DrawPrimFT4(a, 0, 0) | H | c23F0. 18 calls / 14 files |
| 0x80016EF8 | func_80016EF8 | DrawPrimFT4Mtx | DrawPrimFT4(a, m, 0) | H | c23F0. 11 calls / 6 files: `func_80016EF8(&q, &m)` |
| 0x80017168 | func_80017168 | DrawPrimF3 | a flat triangle, optional matrix | H | c23F0: SetPolyF3. 16 calls / 4 files (called with two arguments) |
| 0x80017294 | func_80017294 | DrawPrimF4 | a flat quad, optional matrix | H | c23F0: SetPolyF4, RotTransPers4 |
| 0x80017254 | func_80017254 | DrawPrimF4Screen | DrawPrimF4(a, 0) | H | c23F0. 21 calls / 13 files |
| 0x80017274 | func_80017274 | DrawPrimF4Mtx | DrawPrimF4(a, m) | H | c23F0. 12 calls / 11 files |
| 0x800173DC | func_800173DC | DrawPrimG3 | a gouraud triangle, optional matrix | H | c23F0: SetPolyG3 |
| 0x8001739C | func_8001739C | DrawPrimG3Screen | DrawPrimG3(a, 0) | H | c23F0. 18 calls / 6 files |
| 0x800173BC | func_800173BC | DrawPrimG3Mtx | DrawPrimG3(a, m) (declared `(void)`) | H | c23F0. 2 calls / 2 files |
| 0x8001751C | func_8001751C | DrawPrimGT3 | a textured gouraud triangle, optional matrix | H | c23F0: SetPolyGT3, gte_RotTransPers3 |
| 0x800174DC | func_800174DC | DrawPrimGT3Screen | DrawPrimGT3(a, 0) | H | c23F0. 2 calls / 1 file |
| 0x800174FC | func_800174FC | DrawPrimGT3Mtx | DrawPrimGT3(a, m) | H | c23F0. no callers |
| 0x80017778 | func_80017778 | DrawPrimG4 | a gouraud quad, optional matrix; noDither != 0 wraps it in dither-off draw modes | H | c23F0: SetPolyG4, RotTransPers4, AddPrimNoDither or AddPrimFlat |
| 0x800176F0 | func_800176F0 | DrawPrimG4ScreenNoDither | DrawPrimG4(a, 0, 1) | M | c23F0. 44 calls / 13 files |
| 0x80017714 | func_80017714 | DrawPrimG4Screen | DrawPrimG4(a, 0, 0) | H | c23F0. 82 calls / 37 files |
| 0x80017738 | func_80017738 | DrawPrimG4MtxNoDither | DrawPrimG4(a, m, 1) | M | c23F0. 7 calls / 3 files |
| 0x80017758 | func_80017758 | DrawPrimG4Mtx | DrawPrimG4(a, m, 0) | H | c23F0. 244 calls / 66 files: `func_80017758(&quad, &m)` (effects: glows, trails) |
| 0x80017930 | func_80017930 | DrawPrimGT4 | a textured gouraud quad, optional matrix; noDither as DrawPrimG4 | H | c23F0: SetPolyGT4, RTPT + RTPS + AVSZ4 |
| 0x800178C8 | func_800178C8 | DrawPrimGT4ScreenNoDither | DrawPrimGT4(a, 0, 1) | M | c23F0. 2 calls / 1 file |
| 0x800178EC | func_800178EC | DrawPrimGT4Screen | DrawPrimGT4(a, 0, 0) | H | c23F0. 12 calls / 9 files |
| 0x80017910 | func_80017910 | DrawPrimGT4Mtx | DrawPrimGT4(a, m, 0) | H | c23F0. 1 call |
| 0x80017B98 | func_80017B98 | DrawSpriteRec | a SPRT and its draw-mode packet from a sprite record (centre x, y, depth, w, h, u, v, CLUT, flags) | M | c23F0: code 0x64, position minus half the size, depth clamped to 0xFFF. 2 calls / 1 file |
| 0x80017F14 | func_80017F14 | AddPrimNoDither | add an untextured packet at depth z between dither-off / dither-on draw modes (semi-transparent when flag bit 30) | M | c23F0: SetDrawMode(.., dtd 0, ..) before, dtd 1 after, tpage abr from bits 28-29 |
| 0x80018094 | func_80018094 | AddPrimFlat | add an untextured packet at depth z (clamped to 0xFFF); semi-transparent ones get a blend-mode packet | H | c23F0: sets the code's bit 1 and adds a SetDrawMode with GetTPage(2, abr..). 7 internal calls |
| 0x80018194 | func_80018194 | AddPrimTextured | add a textured packet at depth z (its own tpage holds the blend mode); semi-transparent sets the code bit | H | c23F0 |
| 0x8001820C | func_8001820C | AddPrimTexturedNoDither | AddPrimTextured between dither-off / dither-on draw modes | M | c23F0 |
| 0x80018384 | func_80018384 | AddPrimChecked | addPrim, hanging when the OT pointer is past D_800AE610 | H | c23F0: `while (1) {}` guard. no callers |
| 0x800183E0 | func_800183E0 | QueueImage | put an image list into a free slot of the 32-slot upload queue (Work+0xA1A8 = D_800B97D8) for FlushImageQueue; 0 when full | H | c23F0. 263 calls / 104 files: `func_800183E0(&tim_list)` in stage set-up |
| 0x80018450 | func_80018450 | QueueImageAt | QueueImage with the slot's x, y and CLUT row taken from a record (+0x28, +0x2A, +0x27) | M | c23F0. 2 calls / 1 file (ovl36). The "at" fields are only used when the slot's +0xD is set, which this leaves 0 |

## Debug text (0x800152F4-0x80015A74)

64 records of 0x10 bytes at Work+0x9DA8 (D_800B93D8): +0 kind (0 free, 1 a string, 2 a number), +2 x, +4 y, +8 the
string pointer or the value, +0xC flags (0x80 16-pixel font, 0x40 decimal, low nibble the digit count), +0xD a byte.
DrawDebugText (named) draws them.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800152F4 | func_800152F4 | ClearDebugTextLine | free record n | H | c23F0. 1 call (ovl37) |
| 0x80015310 | func_80015310 | ClearDebugText | free all 64 records | H | c23F0: walks D_800B93D8 to D_800B97D8. 17 calls / 8 files; ModeReset calls it |
| 0x8001534C | func_8001534C | SetDebugText | record n = a string at x, y with flags | H | c23F0: via SetDebugTextRec. 43 calls / 6 files: ovl37 `func_8001534C(0xC, menu->name, 0xA4, 0x46, 0x44, 0)` (the CHECK LIST menu) |
| 0x800153A4 | func_800153A4 | SetDebugTextRec | fill a record as a string (kind 1) | H | c23F0 |
| 0x800153CC | func_800153CC | SetDebugNumber | record n = a number at x, y (hex, or decimal with flag 0x40) | H | c23F0. 11 calls / 4 files: `func_800153CC(5, *n, 0xA8, 0x90, 0x40, 0)` |
| 0x80015424 | func_80015424 | SetDebugNumberRec | fill a record as a number (kind 2) | H | c23F0 |
| 0x8001544C | func_8001544C | FindFreeDebugText | the first free record, or 0 | H | c23F0. no callers |
| 0x80015608 | func_80015608 | DrawDebugString | one string record as 8 / 16-pixel SPRTs (codes 0x74 / 0x7C) | H | c23F0: one 4-word packet per character from DebugFontUV |
| 0x80015760 | func_80015760 | DrawDebugNumber | one number record, digit by digit through the digit table D_80062B78 | H | c23F0: nibbles of the value (BcdFromInt first with flag 0x40) |
| 0x80015908 | func_80015908 | DebugFontUV | the UV word of a character (c - 0x20) in the 8- or 16-pixel font table | H | c23F0: D_80062A78 / D_80062AF8 |
| 0x80015A74 | func_80015A74 | BcdFromInt | an unsigned value as 10 packed BCD digits | H | c23F0: divides by 10^9 .. 1, four bits a digit |

## Load queue, sound packs and the boot helpers (0x80014554-0x8001C00C)

One load request is queued at a time (D_800BA1B4: 0 idle, 1 a file read, 2 a sound pack, 3 done, 4 a header read,
5 a sound bank) and LoadQueueStep (named) pumps it every frame. A **sound pack** is an entry of D_80063138 (`SoundPack`
in c23F0: {archive entry, stream arg, sound id}): its archive entry is read through the CD streamer (func_800363CC) and
then sound command `id` is sent to the driver (func_8002D4C8); D_800A654C holds the pack now playing, D_800747F8 the
archive entry now loaded. The pack ids stage code passes (0x16, 0x35, 0x3D, 0x5A, 0x6B ...) and the restart of the
same pack being a no-op suggest the music (BGM) packs; the names keep "SoundPack".

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80014554 | func_80014554 | InitNop | empty | L | c23F0. no callers |
| 0x8001455C | func_8001455C | Init3DNop | empty; called by Init3DScene | L | c23F0: Init3DScene calls it before the ambient colour |
| 0x80015144 | func_80015144 | SoftReset | stop sound (command 2, waiting for the driver), drop the CD request, set Work.exitLoop so main() restarts | H | c23F0: D_800B9A04 = Work+0xA3D4 exitLoop; then func_8002F67C, ResetLoader. 1 call: eC98C func_80141C50 on pad combo 0x90F (Start + Select + L1 + R1 + L2 + R2) |
| 0x80019398 | func_80019398 | CdFilesReady | 1 once InitCdFiles / InitCdFilesAtLba ran | M | c23F0: D_800747D4, set to 1 at the end of both. no callers |
| 0x800193A8 | func_800193A8 | SetCdFilesReady | set that flag | M | c23F0. no callers |
| 0x8001AAA0 | func_8001AAA0 | RequestSoundPack | load request kind 1: play sound pack id (at once when its archive entry is already loaded) | H | c23F0: RequestLoad(1, id, 0, 0, 0). 86 calls / 45 files: `func_8001AAA0(0x35)`, `return func_8001AAA0(0x5A) != 0;` |
| 0x8001AAD0 | func_8001AAD0 | RequestSoundBank | load request kind 3: a sound bank file g_FileTable[9 + n] | H | c23F0 (comment). 5 calls / 3 files: `func_8001AAD0(1, 0x4331)` |
| 0x8001ABB4 | func_8001ABB4 | LoadNop | empty | L | c23F0. no callers |
| 0x8001ABBC | func_8001ABBC | RequestLoad | ask for a load (kind 0 file, 1 sound pack, 2 header, 3 sound bank); 1 when done, 0 while waiting | H | c23F0 (comment). 48 calls / 15 files: ovl36 `func_8001ABBC(0, 0, g_ArchiveFileLoc[n], dest, table)` |
| 0x8001ACF0 | func_8001ACF0 | QueueLoad | store the request for the pump and set D_800BA1B4 | H | c23F0 (comment) |
| 0x8001AE90 | func_8001AE90 | IsQueuedLoad | the request is the one already queued (same file first word, or same pack id) | H | c23F0: compares with D_800747F4 |
| 0x8001AF04 | func_8001AF04 | GetLoadQueueState | 0 idle, 1 done, 2 busy | H | c23F0. 1 call (ovl36) |
| 0x8001B0D4 | func_8001B0D4 | LoadSoundBankStep | the sound bank load, followed through the driver's load state (func_80034B98) | H | c23F0 (comment); LoadQueueStep state 5 |
| 0x8001B22C | func_8001B22C | GetSoundBankLoadState | D_800747E8: 0 idle, 1 / 2 / 4 the driver's load states | M | c23F0. 3 calls / 1 file (ovl36) |
| 0x8001B23C | func_8001B23C | LoadExtraSoundFile | read archive entry D_800AEC78 with the sound table {8, D_800A2E20}; 1 when done | L | c23F0: func_8001B26C fills D_800C7C60 / 64 as ModeTitleLoad does for bank 0x57. 2 calls / 2 files (stg/sc02_000, sc02_003) |
| 0x8001B26C | func_8001B26C | LoadExtraSoundFileStep | its worker (result in D_800C6D10) | L | c23F0 |
| 0x8001B324 | func_8001B324 | ResetSoundPacks | reset the pack loader's step and forget the loaded pack | M | c23F0: D_800AE7EC = 0, ForgetSoundPack. 3 calls / 1 file (ovl36 field init); ResetGameState |
| 0x8001B34C | func_8001B34C | ForgetSoundPack | no pack playing, no entry loaded, ClearTimeChime | M | c23F0: D_800A654C, D_800747F8 = 0 |
| 0x8001B374 | func_8001B374 | GetSoundPack | the pack playing (D_800A654C) | H | c23F0. no callers |
| 0x8001B384 | func_8001B384 | ResetSoundPackStep | D_800AE7EC = 0 | M | c23F0. 3 calls / 1 file |
| 0x8001B394 | func_8001B394 | SoundPackStep | one step of a pack load (kind 2 of the queue); 1 when playing | H | c23F0: LoadQueueStep state 2 |
| 0x8001B3C4 | func_8001B3C4 | SoundPackStepImpl | its worker: already playing / same entry: just the command; else read the entry (func_800363CC), then the disc check, then the command | H | c23F0 |
| 0x8001B710 | func_8001B710 | PlayProgressSounds | sound commands 0x24 / 0x25 / 0x26 when byte vars 0x44 / 0x56 / 0x5C are >= 2 | L | c23F0; SoundPackStepImpl calls it after pack 0x3D. 5 calls / 3 files. Probably extra music layers for story progress |
| 0x8001B788 | func_8001B788 | GetSoundPackPos | the disc position of a pack's archive entry | H | c23F0: g_ArchiveFileLoc[D_80063138[n].entry].pos |
| 0x8001B7C4 | func_8001B7C4 | ReadHeaderStep | load kind 2: read a file's first sector through the streamer (StreamStep(1)) and keep its first word | M | c23F0; LoadQueueStep state 4 |
| 0x8001B85C | func_8001B85C | ResetScreenWipe | wipe step = 0 | H | c23F0. 4 calls / 1 file: ovl36 func_800CEFD0 / func_800CF104 before their loops |
| 0x8001B86C | func_8001B86C | ScreenWipeStep | the room-change wipe: copy the screen into four sprites, then close 30 bars of 8 lines over it; 1 when done | M | c23F0. 2 calls / 1 file: ovl36 `D_80114E9C = func_8001B86C(0)` / `(1)` while the next room loads |
| 0x8001BA84 | func_8001BA84 | DrawScreenCopy | the four screen-copy sprites (D_800630E8) at brightness 0x80 | M | c23F0 |
| 0x8001BADC | func_8001BADC | SetWipeBars | colour the first n bars from the top and bottom; 1 when n >= 0x2C | M | c23F0: 15 + 15 TILE colours |
| 0x8001BB60 | func_8001BB60 | InitWipeBars | 30 full-width TILEs of 8 lines; bar count 0 | H | c23F0 |
| 0x8001BBBC | func_8001BBBC | AddWipeBar | one 320 x 8 TILE at y | H | c23F0: code 0x62 |
| 0x8001BC6C | func_8001BC6C | AddScreenSprite | a SPRT showing a rectangle of the frame buffer (page 0x100 / 0x102 by x) | M | c23F0: code 0x64 |
| 0x8001BD80 | func_8001BD80 | IsSoundLoading | the driver's load state is busy | M | c23F0: func_80034B98() != 0. 2 calls / 1 file |
| 0x8001BDA0 | func_8001BDA0 | ShutdownSystems | stop sound, the GPU, pads, root counters, CD and callbacks | H | c23F0: func_8002CCD8, ResetGraph(3), PadStopCom, StopRCnt, CdInit, ResetCallback, StopCallback. no callers |
| 0x8001BE20 | func_8001BE20 | ResetSoundLoadCancel | step = 0 | M | c23F0. 1 call (ovl36) |
| 0x8001BE30 | func_8001BE30 | CancelSoundLoadStep | cancel a pending sound bank / pack load (command 0x16) and wait for the driver; 1 when idle | M | c23F0. 1 call: ovl36 `if (func_8001BE30() == 0)` |
| 0x8001BFA0 | func_8001BFA0 | GetTitleMovieIndex | which of the two title movies plays (counter & 1) | M | c23F0: D_80063074. 2 calls: ovl39 `D_800D942C[func_8001BFA0()].name` (CdSearchFile) |
| 0x8001BFB0 | func_8001BFB0 | NextTitleMovie | counter + 1 | M | c23F0. 1 call: ovl39 func_800D1E58 after starting the movie |
| 0x8001BFD0 | func_8001BFD0 | ClearTimeChime | stop the time-of-day chime (kind D_800A2B70 and its timer D_800BA0FC = 0) | M | c23F0. 266 calls / 140 files: `func_8002D4C8(0x1C, 0); func_8001BFD0(); func_8002D4C8(0x1D, 0);`; ovl36 plays sounds 0x517 / 0x518 by D_800A2B70 at set progress times |
| 0x8001BFE8 | func_8001BFE8 | LicenceShown | the licence screen has been shown since boot | M | c23F0: D_800747D8. 1 call: ovl38 skips to step 3 when set |
| 0x8001BFF8 | func_8001BFF8 | SetLicenceShown | set it | M | c23F0. 1 call: ovl38 |
| 0x8002C410 | func_8002C410 | ForceLibraryLink | a never-called function that references ~70 PsyQ functions with zero arguments, so the linker keeps them for the overlays | H | src/code_8002C410.c (its own -O0 file). no callers |

## Game state: flags, variables, options, clock, progress (0x80028D58-0x80029A94)

The game's persistent state: 512 flag bits (D_800AE648, 0x40 bytes), 256 byte variables (D_800BA1B8, also read as
s16 / s32 at byte offsets), the 0x98-byte status block D_80078E78 (`DbgStats` in ovl37, `FieldStats` in ovl36; the
default copy is D_80072C84), 64 item values (D_800A6588, u16) and a 0x60-byte block D_800BA2B8. Two **state slots**
of 0x2DC bytes at D_80078F28 hold a copy of all of it: +0 a 0x24-byte map record, +0x24 the status block, +0xBC the item
values, +0x13C the flags, +0x17C the variables, +0x27C the 0x60 block. Slot 1 is the continue point (the engine
restores it on Continue and halves the money), slot 0 the other restore point.

Status block fields used below (address = D_80078E78 + offset): +4 D_80078E7C the play time (frames, s, min, h bytes),
+8 D_80078E80 the story progress value, +0xC D_80078E84 a count, +0x10 D_80078E88 a second count, +0x14 D_80078E8C the
money (stage code caps it at 99999), +0x18 D_80078E90 the clock (minutes of the day in 16.16; D_80078E92 its integer),
+0x36 D_80078EAE daytime (7:00-19:00), +0x37 the day period 0-4, +0x38 / +0x39 minutes / hours, +0x6C.. the four
stat levels and experience (next section).

Flags 0xB-0x13 are the options block, vars 0x2C / 0x2D the two volumes: the options screen (eC98C func_80140608)
toggles flags 0xB, 0xD, 0xC and steps vars 0x2C / 0x2D through 0-7; ApplySoundOptions sends vars 0x2C / 0x2D as sound
commands 0x21 / 0x22 and flag 0xC as command 0xB / 0xC.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80029124 | func_80029124 | SetFlag | set or clear bit n of the flag array | H | c23F0: D_800AE648[n >> 3] \|= / &= ~(1 << (n & 7)). 640 calls / 87 files: `func_80029124(0x11D, 1)`. GetFlag (0x80029178) is its reader |
| 0x800291A0 | func_800291A0 | SetVar | byte variable i = v | H | c23F0: D_800BA1B8[i] = v. 369 calls / 53 files: `func_800291A0(0x2E, 1)` |
| 0x800291B4 | func_800291B4 | GetVar | byte variable i | H | c23F0. 400 calls / 58 files: `if ((func_800291B4(0x56) & 0xFF) >= 2)` |
| 0x800291C8 | func_800291C8 | SetVar16 | the s16 at byte offset i of the variables | H | c23F0. 45 calls / 9 files |
| 0x800291DC | func_800291DC | GetVar16 | the s16 at byte offset i | H | c23F0. 18 calls / 8 files |
| 0x800291F0 | func_800291F0 | SetVar32 | the s32 at byte offset i | H | c23F0. 20 calls / 12 files |
| 0x80029204 | func_80029204 | GetVar32 | the s32 at byte offset i | H | c23F0. 2 calls / 2 files |
| 0x80029044 | func_80029044 | ClearFlags | all 512 flags off | H | c23F0: 0x40 bytes. ResetGameState, ResetGameProgress |
| 0x8002906C | func_8002906C | ClearVars | all 256 variables 0 | H | c23F0 |
| 0x80029094 | func_80029094 | ClearVarBlock60 | zero the 0x60-byte block D_800BA2B8 (saved with the slots) | L | c23F0. Only stg/sc03_011 writes into it (D_800BA2BE) |
| 0x80028D58 | func_80028D58 | GetVibrationOff | option flag 0xB: vibration off | H | c23F0. PollPad sends the motors only when it is 0; CheckSelectHold sets it; eC98C toggles it and rumbles (StartRumbleScript) when it turns on |
| 0x80028D78 | func_80028D78 | SetVibrationOff | set flag 0xB | H | c23F0. 1 call (eC98C) |
| 0x80028D9C | func_80028D9C | GetSoundMode | option flag 0xC (0: sound command 0xC, 1: command 0xB; stereo / mono) | M | c23F0; ApplySoundOptions and e58E0 send the command from it. Which value is mono needs the driver (sound section) |
| 0x80028DBC | func_80028DBC | SetSoundMode | set flag 0xC | M | c23F0. 1 call (eC98C); ResetGameState clears it |
| 0x80028DE0 | func_80028DE0 | GetOptionD | option flag 0xD (the options screen's second entry) | L | c23F0. 3 calls / 2 files: e58E0 func_8015FDCC spawns effect 0x24 and plays sound 0x989 only while it is 0 (a hint / help option?) |
| 0x80028E00 | func_80028E00 | SetOptionD | set flag 0xD | L | c23F0. 1 call (eC98C) |
| 0x80028E24 | func_80028E24 | GetOptionE | flag 0xE | L | c23F0; part of the 0xB-0x13 getter / setter run. no callers |
| 0x80028E44 | func_80028E44 | SetOptionE | flag 0xE | L | as above |
| 0x80028E68 | func_80028E68 | GetOptionF | flag 0xF | L | as above |
| 0x80028E88 | func_80028E88 | SetOptionF | flag 0xF | L | as above |
| 0x80028EAC | func_80028EAC | GetOption10 | flag 0x10 | L | as above |
| 0x80028ECC | func_80028ECC | SetOption10 | flag 0x10 | L | as above |
| 0x80028EF0 | func_80028EF0 | GetOption11 | flag 0x11 | L | as above |
| 0x80028F10 | func_80028F10 | SetOption11 | flag 0x11 | L | as above |
| 0x80028F34 | func_80028F34 | GetOption12 | flag 0x12 | L | as above |
| 0x80028F54 | func_80028F54 | SetOption12 | flag 0x12 | L | as above |
| 0x80028F78 | func_80028F78 | GetOption13 | flag 0x13 | L | as above |
| 0x80028F98 | func_80028F98 | SetOption13 | flag 0x13 | L | as above |
| 0x80028FBC | func_80028FBC | GetMusicVolume | var 0x2C, 0-7 | M | c23F0; ApplySoundOptions sends it as command 0x21; eC98C steps it 0-7. "Music" is the usual first volume; check against the driver's command 0x21 |
| 0x80028FDC | func_80028FDC | SetMusicVolume | set var 0x2C | M | c23F0. ResetGameState sets 7 |
| 0x80029000 | func_80029000 | GetEffectsVolume | var 0x2D, 0-7 (command 0x22) | M | c23F0, as above |
| 0x80029020 | func_80029020 | SetEffectsVolume | set var 0x2D | M | c23F0 |
| 0x800290BC | func_800290BC | SetFlag7F | flag 0x7F on | L | c23F0. 2 calls / 2 files (stg/sc04_015 sets it, then clears it with func_800290E0) |
| 0x800290E0 | func_800290E0 | ClearFlag7F | flag 0x7F off | L | c23F0. 1 call |
| 0x80029104 | func_80029104 | GetFlag7F | flag 0x7F | L | c23F0. 1 call |
| 0x80029218 | func_80029218 | ClearEntryPoint | zero the 0x3C-byte map-entry record D_800AE6A8 (where Musashi is placed on entry) | M | c23F0; work.h: mapGroup 0x1000 places Musashi from D_800AE6A8. ResetGameState |
| 0x80029240 | func_80029240 | SetEndingPending | D_80075838 = 1 | L | c23F0. 1 call: stg/sc07_002 after FadeWhiteStep(4); ovl36 field init (func_800CEE84) then goes to game state 0x12 when it is set |
| 0x80029254 | func_80029254 | ClearEndingPending | D_80075838 = 0 | L | c23F0. 2 calls (ovl36) |
| 0x80029264 | func_80029264 | GetEndingPending | D_80075838 | L | c23F0. 1 call (ovl36) |
| 0x80029274 | func_80029274 | LoadDefaultStatus | the status block D_80078E78 from its default copy D_80072C84 | H | c23F0 (ResetGameProgress comment: "copy the default stats block"); ModeReset |
| 0x8002931C | func_8002931C | SetClock | set the clock (16.16 minutes) and update the period | H | c23F0: D_80078E90 = a; UpdateClockPeriod. 36 calls / 24 files: `func_8002931C(0x01A40000)` (7:00), `(0x04740000)` (19:00) |
| 0x80029344 | func_80029344 | UpdateClockPeriod | from the clock: daytime flag (7:00-19:00), period 0-4 (5:00, 7:00, 16:00, 19:00, 22:00 bounds), hours and minutes | H | c23F0: 0x12C / 0x1A4 / 0x3C0 / 0x474 / 0x528 minutes, v / 60, v % 60. 6 calls / 4 files; e58E0 advances D_80078E92 and wraps at 0x5A0 (24 h) |
| 0x8002941C | func_8002941C | ClearItemValue0 | zero the first item value | L | c23F0: ZeroFill(D_800A6588, 2). ModeReset; e58E0's load path |
| 0x80029444 | func_80029444 | TickPlayTime | play time + 1 frame (30 a second), capped at 99:59:59 | H | c23F0: D_80078E7C..7F bytes, 0x1E / 0x3C / 0x3C / 0x64, cap 0x633B3B00. 12 calls / 12 files |
| 0x80029504 | func_80029504 | GetProgress | the story progress value D_80078E80 | H | c23F0. 433 calls / 58 files: `r = func_80029504();` then range tests; GetLevelCap and the time chime key on it |
| 0x80029514 | func_80029514 | SetProgress | set it | H | c23F0. 161 calls / 73 files: `func_80029514(0x5A)`, `(0x3AC)` at story events |
| 0x80029524 | func_80029524 | IsProgress200To599 | progress in 200..599 | L | c23F0. 5 calls / 5 files: `!(var 0xCE) && func_80029524() == 0` |
| 0x8002953C | func_8002953C | GetFoundCount | the count D_80078E84 | M | c23F0. 28 calls / 28 files: after setting var 0x3A + n and IncFoundCount, `if (func_8002953C() >= 0x23) GiveItem(0x25)` |
| 0x8002954C | func_8002954C | SetFoundCount | set it | M | c23F0. no callers |
| 0x8002955C | func_8002955C | IncFoundCount | count + 1 | M | c23F0. 27 calls / 27 files (one per room with such a find) |
| 0x8002957C | func_8002957C | GetBonusCount | the count D_80078E88 | L | c23F0. no callers |
| 0x8002958C | func_8002958C | SetBonusCount | set it | L | c23F0. no callers |
| 0x8002959C | func_8002959C | GainBonus | GainStat3(0x32), then D_80078E88 + 1 | L | c23F0. 10 calls / 9 files (stg/sc03_006, sc05_010 ...) |
| 0x800295D4 | func_800295D4 | SetupDemoStatus | the attract demo's status: four values 0xFA (D_80078EB2..EB8), flags 0x1E / 0x80 / 0x82 / 0x83 / 0x85, money 100 | H | c23F0; ModeDemoRun step 0 |
| 0x80029664 | func_80029664 | SetClockNight | clock = 22:00 (0x528) | M | c23F0; ModeDemoRun for demo 0 |
| 0x80029690 | func_80029690 | ClearStateSlots | both state slots zeroed and marked empty | H | c23F0: 2 x 0x2DC (as 0x5B8 each), D_800A5E58[i] = 0. ModeReset |
| 0x800296F8 | func_800296F8 | SaveContinuePoint | copy the game into slot 1 with a 0x24-byte map record | H | c23F0: SaveStateSlot(1), D_80079204 = *rec. 7 calls / 7 files: `func_800296F8(a->messages[0])` (the record hangs off the save object) |
| 0x80029774 | func_80029774 | SaveStateSlot | copy status, item values, flags, variables and the 0x60 block into slot a; mark it used | H | c23F0 |
| 0x800298BC | func_800298BC | LoadContinuePoint | slot 1 back, and its map record out | H | c23F0. 1 call: e58E0 Continue (`func_800298BC(&D_80078E50)`, then money / 2) |
| 0x8002992C | func_8002992C | LoadStateSlot | slot a back into the game | H | c23F0. 1 call: e58E0 (`func_8002992C(0)`) |
| 0x80029A58 | func_80029A58 | HalveSlotMoney | slot i's saved money / 2 | M | c23F0: slot word 0xE = +0x38 = status +0x14 = the money. no callers |
| 0x80029A94 | func_80029A94 | IsStateSlotUsed | slot a holds a state | H | c23F0: D_800A5E58[a]. 4 calls / 1 file (e58E0 picks Continue / restart by it) |

## Stats, experience, items and the save request (0x80029AAC-0x8002AF08)

Musashi has four stats, each with a level (0-30), experience, and a 16-byte-per-level table at D_800638F8 (u16 pairs:
+0 / +2 experience needed and value of stat 0, +4 / +6 stat 1, +8 / +0xA stat 3, +0xC / +0xE stat 2). Gaining
experience is capped by GetLevelCap (by story progress); a level-up shows message k with the gain (stage engine
func_8016E918(k, value - previous)) and plays sound 0xB2C. Stat 0 grows from finished enemies (their init record's
+0x2E), stat 1 from distance walked (D_80078F04 / odometer D_80078F08), stats 3 and 2 from the bytes +0xC8 / +0xC9 of
an enemy Musashi hits. The status screen (eC98C ~line 2220) prints the average level + 1, a rank title, each level + 1
and the stat values. Which in-game stat each is (HP, BP, strength ...) is not settled by the C, so the names are
numbered by the message index k; the local card may rename them once checked in game.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80029AAC | func_80029AAC | CalcStat0Power | stat 0 value x 75 / 100 | M | c23F0. 2 calls / 1 file: e* func_8014C4AC(o, 9 / 0x11, power, ...) (an attack's strength) |
| 0x80029AF4 | func_80029AF4 | CalcPowerRand40 | CalcStat2Power x (200 + rand 40) / 100 | M | c23F0. 1 call: func_8014C4AC(o, 0x1B, ...) |
| 0x80029B4C | func_80029B4C | CalcStat3PowerRand | CalcStat3Power x (a + rand b) / 100 | M | c23F0. 1 call |
| 0x80029BC8 | func_80029BC8 | CalcStat2PowerRand | CalcStat2Power x (a + rand b) / 100 | M | c23F0. 1 call |
| 0x80029C44 | func_80029C44 | CalcComboPowerRand | (CalcStat3Power + CalcStat2Power) x (a + rand b) / 100 | M | c23F0. 1 call |
| 0x80029D3C | func_80029D3C | ReduceByStat1 | v - v x (stat 1 value x 60) / 4800, at least 1 | M | c23F0. 3 calls / 2 files: on D_8011DB1A and an actor's +0xF2 (a drain or damage taken) |
| 0x80029DB4 | func_80029DB4 | CalcStat3Power | (stat 2 value + stat 0 value) x 125 / 100 (150 with flag 0x81) | M | c23F0: GetStat2Value + GetStat0Value. 8 calls / 4 files: stg/sc04_005 / sc04_007 `(o, &tbl, 7, func_80029DB4())` |
| 0x80029E30 | func_80029E30 | CalcStat2Power | (stat 3 value + stat 0 value) x 175 / 100 | M | c23F0. 8 calls / 4 files: `(o, &tbl, 6, func_80029E30())`. The two Calc names follow the stat each adds to stat 0; rename together with the stats |
| 0x80029E94 | func_80029E94 | ScaleByActorInit30 | (an actor's init record +0x30 x k) >> 12 | L | c23F0. no callers |
| 0x80029EC0 | func_80029EC0 | GetActorExp | an actor's init record +0x2E (the experience it gives) | M | c23F0. no callers; GainStat0FromActor reads the same field |
| 0x80029ED4 | func_80029ED4 | AddWalkDistance | add to the step count; every 102 the odometer + 1 (cap 9999999), every 10 odometer units GainStat1 | H | c23F0: D_80078F04 / F08 / F0C, only from progress 10. 1 call: e* `func_80029ED4(SVecDist(&a, &b))` |
| 0x80029FD4 | func_80029FD4 | GetOdometer | D_80078F08 | M | c23F0. 1 call: the status screen |
| 0x80029FE4 | func_80029FE4 | GetAverageLevel | the four stat levels' mean | H | c23F0. 6 calls / 6 files: `if (func_80029FE4() >= 0x1B)`; the status screen prints it + 1 |
| 0x8002A04C | func_8002A04C | GainStat0FromActor | GainStat0 with the actor's init +0x2E | H | c23F0. 166 calls / 61 files; r272 FinishEnemy calls it before FreeActor |
| 0x8002A088 | func_8002A088 | GainStat0 | add stat 0 experience (the argument passes through in a0); on a level-up the message, sound 0xB2C | H | c23F0. 8 calls / 4 files: `func_8002A088(0x64)` |
| 0x8002A108 | func_8002A108 | AddStat0Exp | add experience under the cap; 1 on a level-up | H | c23F0 |
| 0x8002A1B4 | func_8002A1B4 | IsStat0Full | at the cap with full experience | M | c23F0. 2 calls / 2 files |
| 0x8002A200 | func_8002A200 | Stat0ExpReached | experience >= needed | H | c23F0 |
| 0x8002A234 | func_8002A234 | Stat0LevelUp | level + 1 (max 30), experience 0 | H | c23F0 |
| 0x8002A26C | func_8002A26C | GetStat0Level | D_80078EE4 | H | c23F0. status screen |
| 0x8002A27C | func_8002A27C | GetStat0Exp | D_80078EE8 | H | c23F0 |
| 0x8002A28C | func_8002A28C | GetStat0ExpNeeded | table +0 for the level | H | c23F0 |
| 0x8002A2B0 | func_8002A2B0 | GetStat0Value | table +2 for the level | H | c23F0. status screen |
| 0x8002A2D4 | func_8002A2D4 | GainStat1 | as GainStat0 for stat 1 (message 1) | H | c23F0. 7 calls / 3 files |
| 0x8002A354 | func_8002A354 | AddStat1Exp | | H | c23F0 |
| 0x8002A400 | func_8002A400 | IsStat1Full | | M | c23F0. 2 calls / 2 files |
| 0x8002A44C | func_8002A44C | Stat1ExpReached | | H | c23F0 |
| 0x8002A480 | func_8002A480 | Stat1LevelUp | | H | c23F0 |
| 0x8002A4B8 | func_8002A4B8 | GetStat1Level | D_80078EEC | H | c23F0 |
| 0x8002A4C8 | func_8002A4C8 | GetStat1Exp | D_80078EF0 | H | c23F0 |
| 0x8002A4D8 | func_8002A4D8 | GetStat1ExpNeeded | table +4 | H | c23F0 |
| 0x8002A4FC | func_8002A4FC | GetStat1Value | table +6 | H | c23F0. 3 calls / 2 files: r272 ScaleByDifficulty `x - x * func_8002A4FC() * 100 / 7680` (its "meaning not known" is this stat) |
| 0x8002A520 | func_8002A520 | GainStat3FromActor | GainStat3 with the actor's byte +0xC8 | H | c23F0. 52 calls / 17 files; r272 TakeDamageAndRecoil (its "status effects" are these two gains) |
| 0x8002A544 | func_8002A544 | GainStat3 | as GainStat0 for stat 3 (message 3) | H | c23F0. 7 calls / 3 files |
| 0x8002A5C4 | func_8002A5C4 | AddStat3Exp | | H | c23F0 |
| 0x8002A670 | func_8002A670 | IsStat3Full | | M | c23F0 |
| 0x8002A6BC | func_8002A6BC | Stat3ExpReached | | H | c23F0 |
| 0x8002A6F0 | func_8002A6F0 | Stat3LevelUp | | H | c23F0 |
| 0x8002A728 | func_8002A728 | GetStat3Level | D_80078EFC | H | c23F0 |
| 0x8002A738 | func_8002A738 | GetStat3Exp | D_80078F00 | H | c23F0 |
| 0x8002A748 | func_8002A748 | GetStat3ExpNeeded | table +8 | H | c23F0 |
| 0x8002A76C | func_8002A76C | GetStat3Value | table +0xA | H | c23F0 |
| 0x8002A790 | func_8002A790 | GainStat2FromActor | GainStat2 with the actor's byte +0xC9 | H | c23F0. 50 calls / 16 files |
| 0x8002A7B4 | func_8002A7B4 | GainStat2 | as GainStat0 for stat 2 (message 2) | H | c23F0. 7 calls / 3 files |
| 0x8002A834 | func_8002A834 | AddStat2Exp | | H | c23F0 |
| 0x8002A8E0 | func_8002A8E0 | IsStat2Full | | M | c23F0 |
| 0x8002A92C | func_8002A92C | Stat2ExpReached | | H | c23F0 |
| 0x8002A960 | func_8002A960 | Stat2LevelUp | | H | c23F0 |
| 0x8002A998 | func_8002A998 | GetStat2Level | D_80078EF4 | H | c23F0 |
| 0x8002A9A8 | func_8002A9A8 | GetStat2Exp | D_80078EF8 | H | c23F0 |
| 0x8002A9B8 | func_8002A9B8 | GetStat2ExpNeeded | table +0xC | H | c23F0 |
| 0x8002A9DC | func_8002A9DC | GetStat2Value | table +0xE | H | c23F0 |
| 0x8002AA00 | func_8002AA00 | IsLevelCapped | -1 before progress 10 (no gains), else level >= GetLevelCap | H | c23F0 |
| 0x8002AA3C | func_8002AA3C | GetLevelCap | the level cap by progress: 0 / 8 / 16 / 22 / 27 / 99 at 10 / 200 / 600 / 900 / 1200 | H | c23F0 |
| 0x8002AAAC | func_8002AAAC | LevelUpHook | empty, called after each level-up | M | c23F0 |
| 0x8002AAB4 | func_8002AAB4 | GetRankTitle | the rank string for the average level (threshold / string pairs at D_800638A0) | H | c23F0. 1 call: eC98C `strcpy(dst + 0xA, func_8002AAB4())` |
| 0x8002AB64 | func_8002AB64 | IncStartCount | var 0x2E + 1; the first time, items 1-6 and vars 0x3B-0x3F = 3 | L | c23F0. 3 calls / 3 files: e58E0 after restoring the options from a save, stg/sc02_005 |
| 0x8002AC00 | func_8002AC00 | GiveItem | item n: var 0x62 + n = the item table's kind \| 0x80 (owned), its value from the table (D_8010F46C, 8 bytes an item) | M | c23F0. 196 calls / 80 files: `func_8002AC00(0x26)`; ovl37's debug "give all" writes the same vars |
| 0x8002AC98 | func_8002AC98 | AgeItemValues | for each owned item with a kind (var 0x63 + i low nibble), move its value by rand 0-31 - 11 (kind 1 halves it, kind 3 doubles it on the 0 / 11 draws), clamped to 1-4 x the table value | L | c23F0. 1 call. Fits food that spoils or ripens over time |
| 0x8002AE60 | func_8002AE60 | AllItemsMarked | all 43 item vars 0x63-0x8D have bit 0x40 | L | c23F0. 4 calls / 3 files, with flag 0x123 (game cleared) |
| 0x8002AED0 | func_8002AED0 | RequestSave | D_800760C8 = 1 | M | c23F0. 4 calls / 4 files. The field picks game state 0xD (save screen hook) when it is set |
| 0x8002AEE4 | func_8002AEE4 | RequestClearSave | D_800760C8 = 2 | M | c23F0. 3 calls: stg/sc07_007 / sc07_009 after flags 0x11D / 0x123 (the ending) |
| 0x8002AEF8 | func_8002AEF8 | ClearSaveRequest | D_800760C8 = 0 | M | c23F0. 3 calls / 2 files (ovl36 field init) |
| 0x8002AF08 | func_8002AF08 | GetSaveRequest | D_800760C8 | M | c23F0. 2 calls: ovl36 `else if (func_8002AF08() != 0) SetGameState(0xD);` |

## Memory card (0x8002AF18-0x8002C3B0)

None of these has a caller in the C (the save screen is in code not yet split, or reached by pointer). The card file:
a 0x200-byte header (`SC` + icon, title from D_80072E10, icon data from D_80063AEC), a 0x280 directory of four 0x80
slot headers (D_80075A40: +2 checksum of the 0x70 bytes from +0x10, which hold a copy of the status block), and the
0x300-byte saves (D_80075CC0, a state slot) at 0x480 + slot x 0x300.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8002AF18 | func_8002AF18 | ResetCardState | the card state machine's step and slot status words to 0 | H | c23F0: D_800760AC, D_8007609C..A8 |
| 0x8002AF48 | func_8002AF48 | GetCardSlotHeader | the 0x80-byte header of save slot i in the directory copy | H | c23F0: D_80075A50 + (i + 1) x 0x80 |
| 0x8002AF60 | func_8002AF60 | GetCardDirWord | the directory's first word (D_80075A40) | L | c23F0 |
| 0x8002AF70 | func_8002AF70 | SetCardSaveData | the 0x300 save buffer from a 0x2DC state slot, plus its tag word | H | c23F0: ZeroFill 0x300, copy, D_80076040 = v |
| 0x8002B00C | func_8002B00C | GetCardSaveData | the save buffer back into a state slot | H | c23F0 |
| 0x8002B064 | func_8002B064 | ChecksumSlotHeader | 16-bit sum of 0x70 bytes | H | c23F0; the save step stores it at header +2 |
| 0x8002B08C | func_8002B08C | ChecksumSaveData | 16-bit sum of 0x300 bytes | H | c23F0; stored at header +4 |
| 0x8002B0B4 | func_8002B0B4 | SaveCardStep | the card state machine (mode & 7: 0 check / read the directory, 1 save (creating the file), 2 load, 3 a further mode), MemCardSync-driven; status per port in D_8007609C | H | c23F0: MemCardExist / Open / CreateFile / ReadData / WriteData / Close, 533 lines |
| 0x8002C320 | func_8002C320 | CheckCardSlots | two bits per used slot header: 1 checksum good, 2 bad | H | c23F0: the 0x70-byte sum against header +2 |
| 0x8002C3B0 | func_8002C3B0 | CountCardBlocks | blocks (0x2000 bytes, rounded up) used by n directory entries | H | c23F0: DIRENTRY stride 0x28, size at +0x18 |
