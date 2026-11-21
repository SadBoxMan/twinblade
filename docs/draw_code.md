# Draw code: the 3D renderer (r11; rewritten for Phase 2 by r532, 8 Nov 2026; room renderer kinds by r554)

Every 3D draw function in the main EXE and in the shared stage-engine draw path, with its role: what it draws, its
inputs, the primitives it emits, its ordering-table depth rule, how it handles the two frame buffers, and where it sits
in the call graph from the frame loop down. 2D, sprite, HUD and effect drawing are r537's (`docs/draw_2d.md`, see the
pointer in section 9).

**Sources.** All matched C: `src/main.c` (frame loop), `src/code_800123F0.c` ("c23F0": display set-up, packet helpers,
models, sorters, lights), `src/stage/engine.c` / `engine_8013B568.c` / `engine_80144B9C.c` (the stage frame and the room
mesh player), `src/stage/sc03_001.c` (the village's DrawChunkedMesh), `src/stg/*.c` (the other room renderer kinds,
r554, section 6.2.1), `include/gte.h`, `include/work.h`. Tables that live
in data were read from the disc files (`disc/files/SLUS_007.26`, `disc/pac4/SC*.bin`) with read-only scripts; no game
was run for this doc. r751 (14 Nov 2026) added reads of libgte / libgpu (`asm/psyq.s`), word scans of every code file
on disc and the RAM dumps in `disc/dumps` (sections 2.3, 4.4, 6.2.3, 6.3, 11).

**Names.** Functions are given by address and by their name in `src/` today (several r274 / r241 / r272 proposals are
already applied there). A name in the "proposed" column that comes from an earlier batch cites it (r274 =
`docs/names_exe_proposals.md`, r272 / r2xx = `docs/names_stage_engine_proposals*.md`); names new in this doc are marked
**Unofficial** and listed for r396 in section 10. Readings that the code does not settle are marked **Unconfirmed**.

**Proof.** Everything below is read from matched C (the build is byte-identical, so the C is the original's behaviour)
unless it says otherwise. Data tables are read from the disc images. Nothing here was checked on a capture in r532;
where earlier cards proved a claim on captures, the claim cites them.

## 1. Call graph: from the frame loop down

```
main()                                              src/main.c (per frame, while !Work.exitLoop)
 |- g_BufferIndex ^= 1; Work.frame = it              double-buffer index
 |- g_PrimNext = g_PrimBuf[frame]                    packet buffer rewound
 |- Work.pool[frame] = {D_800A4F48[frame], 0x640, 0} second packet pool rewound
 |- (pause menu closed:)
 |   |- world OT: org / tag set, ClearOTagR(4096)    g_WorldOtTable[frame]
 |   |- front OT: org / tag set, ClearOTagR(4)       D_800BA0D8[frame]
 |   |- ModeDispatch -> field overlay -> stage game state handler
 |   |    func_801285E4 / func_80128678 / func_80128714 (engine.c) -> func_801287B8 = the stage frame:
 |   |      UpdateCamera (Work.wsm), UpdateActors (UpdateModelZYX .. feed the models' matrices), ...,
 |   |      DrawBgLayers (r537), ..., if (g_RoomMesh.hidden == 0) DrawRoomMesh (section 6), RunRoomFrameHook,
 |   |      UpdateMessages (r537)
 |   |- DrawDebugText (r537)                         on the scratchpad stack
 |   |- DrawModelsAndSprites                          on the scratchpad stack
 |        |- DrawAllModels -> DrawModel -> g_ModelDrawFuncs[kind]     section 4
 |        |     kinds 0/1/2/5/6: DrawTmdModel -> CalcPartMatrices* -> GsSortObject4 (0),
 |        |        SortPresetObjectG / GsSortObject5 (1), SortTransObject (5), ovl28 func_800CAE80 (6)
 |        |     kind 3: func_8001EFE0 (sprite frames at a 3D point); kind 4: DrawShapeModel
 |        |- DrawAllSprites (r537)
 |- (pause menu open:) front OT only, the field's pause update
 |- FlushImageQueue, DrawSync(0), VSync(Work.vsyncMode)
 |- drawIdx / dispIdx swapped, PutDispEnv, PutDrawEnv
 |- CatPrim(world OT entry 0xFFC -> entry g_OtDepthLimit)
 |- DrawOTag(world OT from entry 0xFFF), DrawOTag(front OT from entry 3)
```

So the GPU draws frame N's packets while the CPU builds frame N+1 into the other half of every buffer. The packets of
one frame are built in this time order (map first, then the models and sprites), but what is drawn in front is decided
only by the OT entry each packet is linked into (section 2.3).

## 2. Ordering tables, packet buffers and double buffering

### 2.1 Buffers

| what | address | size | role | proof |
|---|---|---|---|---|
| g_PrimBuf | 0x8007BA70 | 2 x 0x13880 | the main packet buffer, one half per frame | main.c `extern u8 g_PrimBuf[2][0x13880]` |
| g_PrimNext | 0x800A5E60 | word | next free packet byte; every drawer takes packets here and writes the pointer back | main.c, AllocPrim, the sorters |
| PrimPool Work.pool[2] | 0x800AF630 (+0) | 2 x 0xC | {size 0x640, used (words), buf D_800A4F48[frame]}: a small second pool | main.c; read by the stage engine's front-OT drawers 0x80175820 .. 0x80175DA8 (r537) |
| g_WorldOt (GsOT x2) | 0x800A6518 | 2 x 0x14 | libgs GsOT headers {length 0xC = 4096 entries, org, offset, point, tag} | InitDisplay; DrawTmdModel / GsSortObject4 take &g_WorldOt[frame] |
| g_WorldOtOrg | 0x800A651C | (view) | the same headers seen from `.org`: `.ot` = org, `.otLast` = tag | main.c sets org and tag each frame, as GsClearOt would |
| g_WorldOtTable | 0x800A6610 | 2 x 0x1000 words | the world OT entries; ends at 0x800AE610 | main.c; DrawChunkedMesh; AddPrimChecked's bound |
| g_FrontOt / g_FrontOtOrg | 0x800AE7B8 / 0x800AE7BC | 2 x 0x14 | headers of the front OT | main.c |
| front OT entries | 0x800BA0D8 | 2 x 4 words | drawn after the whole world OT (fades, the pause menu, screen overlays: r537) | main.c `D_800BA0D8[2][4]` |
| g_OtDepthLimit | 0x80074778 | word | the farthest world OT entry drawn (section 2.3) | main.c, SetOtDepthLimit |
| Work.draw[2] / Work.disp[2] | Work+0x38 / +0x14C | DRAWENV / DISPENV x2 | the two screen buffers; Work.drawIdx / dispIdx (+0x18A / +0x188) pick them | InitDrawDispEnvs, main.c |
| preset packet area | Work+0x198 (next free) | grows | libgs GsPresetObject packets of the kind-1 model (Musashi), both halves interleaved | InitPresetModel; section 5.3 |

**AllocPrim** (0x80010A08, main.c): rounds the size up to words and bumps g_PrimNext. There is no bounds check: a
frame that builds more than 0x13880 bytes of packets writes past its half (into the next half or past the buffer).
**High-water mark (r550, PC port captures, docs/draw_2d.md 12.2):** at most 0x95E0 bytes (48.0% of a half) in the
busiest frame captured, SC06_000's opening view (1414 world packets); the village with a Lumina swing 14.3%, SC03_010
9.1%, SC06_029 14.7%. So every scene captured left about 0xA000 bytes spare; scenes not captured (busy boss fights)
stay Unconfirmed. The pause menu builds in the upper half of one buffer (from offset 0x9C40, D_801151CC) on alternate
frames, so its pointer reaching 0xB5C8 is not a fuller buffer. The HUD (Work.pool) and Musashi's preset packets
(below Work+0x198, the two frames interleaved, 191 packets a frame in the village) are outside g_PrimBuf, as the table
says.

### 2.2 Double buffering

* `g_BufferIndex` (0x800C7C74) is flipped at the top of every frame and copied to `Work.frame` (Work+0xA3D2, read as
  the bare global D_800B9A02 in 146 files). Every drawer indexes the OT and the packet buffer by it, so the CPU only
  ever writes the half the GPU is not reading.
* The two display buffers are swapped after VSync: `dispIdx = drawIdx; drawIdx ^= 1` (as a counter wrapped at 2), then
  PutDispEnv / PutDrawEnv. The draw env drawn into next is the one just made invisible.
* The preset (GsDOBJ5) packets are not rebuilt each frame: they live in one area with both halves interleaved, and the
  preset builders write into the half picked by g_BufferIndex (section 5.3).
* DrawSyncHandler (main.c) stores `VSync(1)` into D_800AE810[frame] when the GPU finishes a frame (frame timing; the
  sound driver runs from VSyncHandler).

### 2.3 Ordering-table depth rules

* **Reverse OT.** Both OTs are cleared with ClearOTagR and drawn with DrawOTag from their last entry (world 0xFFF,
  front 3). Linking is LIFO at the head of an entry. So a **higher entry is drawn earlier (farther)**, entry 0 last
  (nearest), and inside one entry the packet linked last is drawn first. Every drawer below relies on that last rule
  for its draw-mode packets: it links the polygon, then the DR_MODE / DR_TPAGE packet into the same entry, so the mode
  packet is drawn just before its polygon.
* **Entry index from depth.** The 3D drawers all use an index of about SZ / 4 (SZ = the GTE's screen z, 16 bits):
  the game's TMD sorters take AVSZ3 / AVSZ4's OTZ unshifted (shift 0), and their alternative "farthest vertex" path
  writes `max(SZ) >> 2` in the same place, which shows the scale; DrawChunkedMesh and the preset builders compute
  `SZ >> 2` themselves. libgs' GsSortObject4 / 5 are called with shift 0 on a 12-bit GsOT. **ZSF3 / ZSF4 settled
  (r751, from the code and every code file on disc):** libgte's InitGeom (0x80047CB4, asm/psyq.s, handwritten) sets
  **ZSF3 = 0x155** (ctc2 $29 at 0x80047CE8) and **ZSF4 = 0x100** (ctc2 $30 at 0x80047CF4), with H = 0x3E8, DQA =
  -0x1062, DQB = 0x1400000 and OFX / OFY = 0. AVSZ3 gives `0x155 * (SZ0 + SZ1 + SZ2) >> 12` = mean SZ / 4 (0x155 /
  0x1000 = 1/12) and AVSZ4 `0x100 * (SZ0 + .. + SZ3) >> 12` = mean SZ / 4 (1/16): the same SZ / 4 scale as the
  sorters' own `>> 2` path. A word scan of 261 files (SLUS_007.26, every overlay, the 140 `disc/pac4` stage images,
  disc/payload, the .CD archives) for `ctc2 rt, $29` / `ctc2 rt, $30` finds those two writes only (EXE file offsets
  0x384E8 / 0x384F4), so nothing in the game changes them after Init3DScene's InitGeom. (GsInit3D, 0x80053218, does
  not touch the GTE in this libgs: it sets the draw offset, D_800C73D0 = 10 and D_800AE7E8 = 0x3FFF.)
* **Depth rules by drawer:**

| drawer | depth used | entry | notes |
|---|---|---|---|
| room mesh, DrawChunkedMesh | farthest vertex (max SZ) | SZ >> 2 | polygon types 3, 5 and 7 add 0x20 (village and 5 clones) or 0x200 (DrawChunkedMesh200, the 'C' renderer of 111 images) to SZ before the shift: pushed back by 8 or 0x80 entries |
| TMD models, SortTransObject builders | average (AVSZ3 / AVSZ4 OTZ) | OTZ | farthest vertex (`max >> 2`) for FT3 / FT4 when g_SortAttr & 0x8000 |
| Musashi's first two parts, DrawPreset* | nearest vertex | (min SZ >> 2) - 1, at least 0 | one entry in front of his nearest vertex: these parts win ties against the map |
| other TMD models, GsSortObject4 / 5 | libgs (average) | OTZ | the model's +4 attribute is passed as GsDOBJ attribute |
| kind-3 sprite model, func_8001EFE0 | the model origin's depth | OTZ + 1, then + or - the bias at +0x2E | 0x4000 = add, 0xC000 = subtract (clamped at 0); dropped when >= 0x1000 |
| DrawPrim* with a matrix | RotTransPers' OTZ | clamped to 0xFFF | section 8 |

* **The depth limit.** Before DrawOTag main calls `CatPrim(&ot[0xFFC], &ot[g_OtDepthLimit])`: after drawing entries
  0xFFF-0xFFC the GPU jumps straight to entry g_OtDepthLimit, so **every packet linked at an entry between the limit
  + 1 and 0xFFB is built but never drawn**. That is the game's far clip for the map and the models (an OT index of
  0x3E0 = SZ about 0xF80). Entries 0xFFC-0xFFF stay drawn: they hold the full-screen backgrounds (DrawGradientRect links
  at 0xFFF; the BG layers' priorities are r537's). **Proven on a PC port capture (r550, docs/draw_2d.md 12.1):** in
  SC06_000 (limit 0x420) the drawn frame's world[0xFFC] links to entry 0x420, 25 polygon packets sit in entries
  0x421-0x44C and none of them is in the GPU's command list, while all 311 polygon packets reached are.
* **Who sets the limit.** main() sets 0x3E0 at boot; ModeReset (main.c) sets 0x3E0; the stage engine's SetMapOtDepth
  (engine.c) picks it per map id (Work.mapId, D_800B9A08):

| map id | limit |
|---|---|
| 0x3023 | 0x4E0 |
| 0x3081 | 0x420 |
| 0x3067 | 0x480 |
| 0x3093, 0x30A5 | 0xFFB (nothing clipped) |
| any other | 0x3E0 |

  (docs/mode_dispatcher.md's "0x3E0, 0x480 or 0xFFB" is short by two cases.) Stage code can also call
  SetOtDepthLimit / GetOtDepthLimit (main.c) directly.

### 2.4 Packet and OT helpers (EXE)

| address | name in src | proposed | role | depth rule |
|---|---|---|---|---|
| 0x80010A08 | AllocPrim | (named) | take n bytes (word-rounded) at g_PrimNext | - |
| 0x80028200 | AddPrimAtDepth | (r274) | link a packet into `tab + (z >> shift) * 4` with a given length tag | caller's z |
| 0x80018094 | AddPrimFlat | (r274) | link an untextured packet at z; semi-transparent (flags bit 30) sets the code's ABE bit and links a DR_MODE (GetTPage(2, abr = bits 28-29, 0x280, 0)) after it | z clamped to 0xFFF |
| 0x80018194 | AddPrimTextured | (r274) | link a textured packet at z (its own tpage carries the blend); semi-transparent sets ABE | clamped to 0xFFF |
| 0x80017F14 | AddPrimDithered | (keep the src name; r274's AddPrimNoDither reads it backwards) | links a DR_MODE with dtd 0, the packet, then a DR_MODE with dtd 1 into one entry; LIFO draws them dtd 1 (dither on), the packet, dtd 0 (back to the draw envs' default, dither off) | clamped to 0xFFF |
| 0x8001820C | AddPrimTexturedDithered | (keep; r274 AddPrimTexturedNoDither) | the same for textured packets | clamped to 0xFFF |
| 0x80016638 | (r274 AddDrawModeAbr) | (r274) | an 8-byte DR_MODE selecting blend mode abr at depth z | caller's z |
| 0x80018384 | AddPrimChecked | (r274) | addPrim with a guard: hangs (`while (1)`) when the OT pointer is past 0x800AE610, the end of g_WorldOtTable | - ; no caller in src (a debug leftover) |

The stage engine has its own: AddDrawModeAt (engine.c: a DR_MODE with blend abr at world OT entry z > 0) and the debug
markers func_8012CFA8 (a red POLY_F3 at a point, 0x20 entries in front; Unofficial name DebugDrawMarker), DebugDrawLine,
DebugDrawActorLine (r537 covers the debug lines).

### 2.5 Display and 3D set-up (once per outer loop)

ResetSystems (0x80014238) runs these each time main() re-enters its frame loop:

| address | name in src | role |
|---|---|---|
| 0x800143AC | InitDisplay | SetScreenMode(1) (320 x 240), VSync(0), clears the bg colour bytes Work+0x192..0x194, fills both g_WorldOt headers (length 0xC, org = g_WorldOtTable[i]) |
| 0x800145EC | SetScreenMode | mode n from the 6-byte table D_80062A3C (w, h, flags: 0 = 256 x 240, 1 = 320 x 240, 2 = 512 x 240, 3 = 640 x 240, read from the EXE); GsInitGraph(w, h, flags \| 4), GsDefDispBuff (second buffer at y = 0 for 480 lines, else y = h), ResetGraph, GsInit3D, ClearVram, InitDrawDispEnvs |
| (next) | SetScreenMode2 | the same with GsInitGraph2 / GsDefDispBuff2 (overlays and stages) |
| (next) | ClearVram | ClearImage of (0, 0, 640, 480) to black |
| (next) | InitDrawDispEnvs | Work.draw[0] at (0, 10), height h - 20, Work.draw[1] at (0, buf1Y + 10); offsets = screen centre (so packet coordinates are centred, -160..160 x -120..120); texture window 256 x 256; dither off (dtd 0), clear on (isbg 1); then the bg colour |
| 0x80014444 | Init3DScene | InitGeom, SetGeomScreen(1000) (D_80126950 = 0x3E8), GsInit3D, InitDefaultView, Init3DNop, ambient 0x800 x3, InitLights, GsInitCoordinate2 on Work+0x1A0 and Work+0x1F0, GsSetLightMode(0) |
| (next) | InitDefaultView | GsSetProjection(300) (D_80126950 = 0x12C), a GsRVIEW2 at (0, 0, -300) looking at the origin (D_80126984..) |
| 0x80028A48 | InitFCall4 | fills libgs' GsSortObject4 jump table (D_800A2BC0..) with the GsTMDfast* sorters |
| 0x80028C50 | InitFCall5 | fills the GsSortObject5 / preset table (D_800A2CF0..) with the GsPrst* functions |

The camera then owns the projection: the stage engine's UpdateCamera (r272) sets GsSetRefView2L each frame and copies
the world-to-screen matrix into **Work.wsm** (Work+0x18, read as D_800AF648 in 68 files); `g_ViewMatrix` (0x800AE688,
r274) is libgs' copy that IsPointOnScreen loads.

## 3. GTE use

`include/gte.h` holds the PsyQ inline macros as the binary has them (14 distinct GTE commands, each after two nops).
Which drawer uses what:

| family | GTE commands | GTE flag test |
|---|---|---|
| DrawChunkedMesh | RTPT / RTPS (8 box corners, then 3-4 vertices), NCLIP, stsz3 / stsz4 (no AVSZ) | skip when FLAG & 0x7F85E000 |
| TMD sorters (DrawPoly*) | RTPT (+ RTPS for quads), NCLIP, AVSZ3 / AVSZ4 (or stsz), NCCS / NCCT (lit), ldrgb | skip when FLAG & ~0x1000 (any error but bit 12) |
| preset builders | RTPT (+ RTPS), NCLIP, stsz3 / stsz4, NCCT (+ NCCS for the fourth vertex) | FLAG & ~0x1000 |
| part matrices (CalcPartMatrices*) | RTIR on each matrix column (MulMatrix done on the GTE), RTV0TR for the translation | - |
| IsPointOnScreen, IsOnScreen, ProjectPoint* | RTPS of one point | IsPointOnScreen: FLAG < 0 (bit 31) = behind / error = not on screen |
| sprite model (func_8001EFE0) | RTPS of the origin, then RTPT of the frame's offset and size at the origin's depth | FLAG & ~0x1000 |

Lighting: the three flat lights live in g_Lights (0x800A5E88, LightDir x3) and are pushed with ApplyLight (GsSetFlatLight);
the ambient colour is kept in g_AmbientColor (0x800AE7E0 .. E4) so per-part back colours can restore it. The lit
builders' NCCS / NCCT use the light matrix set per part by GsSetLightMatrix2. The light helpers' roles are in r274's
"Lights, fog and the libgs set-up tables" (InitLights, SetLight, MoveLightDir, SetLightColor, ClearLight,
SetAmbientColor, SetLightColorUnchecked, DisableFog, EnableFog, ApplyLight); fog (GsSetLightMode(1)) is never enabled
by any caller in src.

## 4. Models: the pool, the draw table and DrawTmdModel

### 4.1 The model pool

Models are 0x84-byte objects in Work (Work+0x2A8 = 0x800AF8D8, 0xC0 slots; r274 "Model and sprite object pools"):
+0 type (1 = model), +2 **kind** (the draw-table index), +4 attribute (bit 31 hides; the rest goes to libgs as the
GsDOBJ attribute: 0x40 = no lighting (GsLOFF), bits 28-30 blend rate, 0x8000 / 0x10000 / 0x20000 for SortTransObject;
r759: 0x10000 / 0x20000 are set on two models only, section 5.2),
+8 position (s16 x3), +0x10 rotation, +0x18 scale, +0x20 pose (or sprite frames, or shape record), +0x24 parts (a
0-terminated list of TMD object pointers; bit 24 of a word = hidden part), +0x28 / +0x2A on-screen test half width /
height (0x7FFF / 0x7FFF = always drawn), +0x2C flags (below), +0x2E preset object index (kinds 1 / 6) or depth bias
(kind 3), +0x30 GsCOORDINATE2 (+0x34 its matrix, +0x54 its workm, +0x78 its super), +0x80 extra data.

+0x2C flags, from DrawTmdModel: 0x01 = the +0x34 matrix is already built this frame (set by the stage engine's
UpdateModelZYX family and by UpdateModelMatrix, cleared by the draw); 0x10 = apply the +0x18 scale; 0x20 = the model's
own three lights at +0x80 (0x30 bytes); 0x40 = Musashi's pose form (CalcPlayerPartMatrices); 0x80 = per-part back
colours ({r, g, b, part} records at +0x80, or at +0x80 + 0x30 after the lights).

### 4.2 The draw loop

| address | name in src | proposed | role |
|---|---|---|---|
| 0x8001C00C | (func_8001C00C) | DrawModelsAndSprites (r274) | unless Work+0xA3E1 == 1 (the draw hide mask's "all off" value, set by ModeReset): DrawAllModels then DrawAllSprites |
| 0x8001F9F8 | DrawAllModels | (r274) | DrawModel over the slot groups 0-3 (always), 4 (Musashi; mask bit 0x02), 5 (0x08), 6-21 (0x10), 22-37 (0x20), 38-133 (actors, 0x40), 134-191 (0x80): a set bit in Work+0xA3E1 skips its group |
| 0x8001FB8C | DrawModel | (r274) | type 1, kind < 9, +4 >= 0: `g_ModelDrawFuncs[kind](o)`, count++ |

**g_ModelDrawFuncs** (0x80063500, r274), read from the EXE:

| kind | handler | what it is | init (r274) |
|---|---|---|---|
| 0 | 0x8001FC08 DrawTmdModel | plain TMD model, libgs GsSortObject4 | InitModel / InitNullModel |
| 1 | 0x8001FC08 DrawTmdModel | preset GsDOBJ5 model (Musashi), first two parts through SortPresetObjectG | InitPresetModel |
| 2 | 0x8001FC08 DrawTmdModel | **draws nothing**: DrawTmdModel builds its matrices but has no sort call for kind 2 | InitModelKind2 (no caller) |
| 3 | 0x8001EFE0 | sprite frames at a 3D point (section 4.4) | InitSpriteModel (r274 func_8001CA1C) |
| 4 | 0x800221A8 DrawShapeModel | a 12-point disk at the model's origin (the shape primitives are r537's) | InitShapeModel |
| 5 | 0x8001FC08 DrawTmdModel | TMD model through the game's own sorter SortTransObject (section 5) | InitTransModel (r274 func_8001C810) |
| 6 | 0x8001FC08 DrawTmdModel | preset model through ovl28 Steel's func_800CAE80 (Musashi in Steel, docs/abil_packages.md r427) | set by the engine (UpdatePlayer) on Musashi |
| 7 | 0x8001E7E0 DrawSpriteFast | a sprite handler: a model of kind 7 would be read with sprite offsets | InitModelKind7 / InitNullModelKind7 (no caller) |
| 8 | 0x8001D3FC | a 2D sprite handler (sprite kind 1's) | InitPresetModelKind8 / InitNullModelKind8 (no caller) |

So the kind 7 and 8 inits (TMD parts / preset objects) do not match their draw handlers, and none of the four has a
caller anywhere in src: kinds 2, 7 and 8 are dead. (**Correction** to r274, which called 7 / 8 "TMD / preset
variants" from the inits alone.)

### 4.3 DrawTmdModel (0x8001FC08) and its helpers

`DrawTmdModel(o)`, for kinds 0, 1, 2, 5, 6:

1. **Matrix.** If +0x2C & 1, take the ready +0x34 matrix (and clear the bit); else RotMatrixZYXFast(+0x10) with the
   translation from +8. Scale by +0x18 when +0x2C & 0x10 (ScaleMatrixFast). GsGetLws on the GsCOORDINATE2 (super =
   +0x78, a parent model's coord when SetModelParent linked it) gives the local-world (light) and local-screen matrices;
   the coord matrix and workm are written back to +0x34 / +0x54 (the stage reads them for attachments).
2. **Early outs.** No parts (+0x24 == 0), no pose (+0x20 == 0), or IsPointOnScreen(+0x28, workm.t) == 0: nothing drawn.
   The test is on the model's origin only, against the half width / height in +0x28 / +0x2A.
3. **Lights.** With +0x2C & 0x20, ApplyModelLights from +0x80 (restored with RestoreLights at the end).
4. **Part matrices.** Pose words with bit 24 clear (and not Musashi's form) are 12-byte records (CalcPartMatrices);
   bit 24 set = 8-byte packed records (CalcPartMatricesPacked); +0x2C & 0x40 = Musashi's form
   (CalcPlayerPartMatrices). Each fills a light matrix and a screen matrix per part: in the scratchpad (0x1F800000 /
   0x1F8000E0) when the model has fewer than 8 parts, else in g_PartLightMatrices / g_PartScreenMatrices (0x80074818 /
   0x80075018, 64 each). Musashi's form always uses the arrays.
5. **Per part** (hidden parts skipped, but their preset slot still advanced): GsSetLightMatrix2 (unless attr & 0x40)
   and GsSetLsMatrix, ApplyPartBackColor when back colours are on, then the sort by kind (table below), then
   RestoreAmbientNextPart.

| kind | 12-byte pose path | packed / Musashi path |
|---|---|---|
| 0 | GsLinkObject4 + GsSortObject4(&obj, &g_WorldOt[frame], 0, g_SortScratch) | the same |
| 5 | GsLinkObject4 + SortTransObject(&obj, ot, 0) | the same |
| 1 | GsLinkObject4, **no sort** | obj.tmd / obj.packet from g_PresetObjs[+0x2E ..] (0x14 each): parts 0-1 SortPresetObjectG, the rest GsSortObject5 |
| 6 | GsLinkObject4, **no sort** | the same preset fields, every part through ovl28 func_800CAE80 (only while Steel's package is loaded) |
| 2 | GsLinkObject4, no sort | obj.tmd = the part word, no sort |

So kinds 1 and 6 only draw with a packed pose (or Musashi's form, which Musashi always has: his model is kind 1 with
+0x2C & 0x40). The `cnt < 2` count is of drawn parts, so "the first two parts" means the first two visible ones.

| address | name in src | proposed | role | evidence |
|---|---|---|---|---|
| 0x8001F974 | func_8001F974 | (skip) | empty | c23F0 |
| 0x8001F97C | UpdateModelMatrix | (r274) | +0x34 = RotMatrixZYXFast(+0x10), scaled when 0x10, translation from +8, flags \|= 1 | c23F0; no caller in src (the stage engine's UpdateModelZYX does the same job with PsyQ RotMatrixZYX) |
| 0x80020248 | CalcPartMatrices | (r274) | 12-byte pose (s16 tx, ty, tz, then three 12-bit angles): per part rotation (RotMatrixZYXFast), times the light base unless no-light, times the screen base, translation through RTV0TR; returns 1 when the scratchpad was used | c23F0 |
| 0x80020598 | func_80020598 | CalcPlayerPartMatrices (r274) | Musashi's pose: part 0 turned half a turn about Y (RotateMatrixY(m, 0x800)) with s8 translation, part 1 from the root record, parts 2+ from 8-byte records; parts 25, 22 and 8 scaled uniformly by Player +0xF6 / +0x1B8 / +0x1BA (D_80126C4E / D_80126D10 / D_80126D12); always into the arrays (screen = light + 64) | c23F0 |
| 0x80020A28 | CalcPartMatricesPacked | (r274) | 8-byte pose: angles packed in nibbles + bytes, s8 translation (gte_ldv0_b) | c23F0; game.h PoseRec8 |
| 0x80020DA4 | func_80020DA4 | RotMatrixZYXFast (r274) | 3x3 rotation from three 12-bit angles via g_SinCosTable (one word per angle: sin low, cos high, 4.12) | c23F0 comment (r290) |
| 0x80020F34 | func_80020F34 | ScaleMatrixFast (r274) | scale a matrix's columns by an SVECTOR | hand-written asm (r283 ruling) |
| 0x80021008 | ApplyModelLights | (r274) | lights 0-2 from a 0x30-byte LightDir[3] | c23F0 |
| 0x80021050 | RestoreLights | (r274) | lights 0-2 back from g_Lights | c23F0 |
| 0x8002109C | ApplyPartBackColor | (r274) | SetBackColor from the next {r, g, b, part} record when its part number is the current one (part -2 = every part, record not consumed) | c23F0 |
| 0x80021120 | RestoreAmbientNextPart | (r274) | GsSetAmbient(g_AmbientColor), part counter + 1 | c23F0 |
| 0x80021174 | IsPointOnScreen | (r274) | RTPS of a point through g_ViewMatrix; 1 when \|sx\| and \|sy\| are within the packed half size (0x7FFF7FFF = always 1), 0 when behind or out | c23F0 |

### 4.4 Model kind 3: sprite frames at a 3D point (0x8001EFE0)

`func_8001EFE0(o)`, proposed **DrawSpriteModel** (Unofficial): the model's matrix as DrawTmdModel builds it (PsyQ
RotMatrixZYX + ScaleMatrix + GsGetLs), the same origin test, then the origin is projected once (RTPS) and the whole
frame list is drawn at that depth: per 12-byte frame record (low byte 8 = skip, 0xFF = last) one **POLY_FT4** (0x28
bytes, code 0x2C, 0x2E when attr bit 30 is set), its size taken through the GTE at the origin's SZ (so it shrinks with
distance), colour from the first back-colour record when +0x2C & 0x80 else 0x80 grey, texture page from the record's
VRAM x / y and attr bits 24-25 (depth) / 28-29 (blend), CLUT row from the record, rotated by RotateQuadAround when
attr bit 27 is set. Depth: OTZ + 1, plus or minus +0x2E (section 2.3). It links with `addPrim(g_WorldOtTable[frame] + z)`.
The texture page has two encodings picked by `D_80072784[4] - 1 < 2`. **Settled (r751): the test is always false and
the standard encoding is always used.** D_80072784 is libgpu's print-function pointer: its data word is initialised
to `printf` (0x8005C604, asm/data/531DC.data.s), libgpu's DumpTPage / DumpClut / DumpDrawEnv call through it (`jalr`),
and no code on disc stores to it (a word scan of the same 261 files for `sw rt, 0x2784(rx)` after `lui 0x8007`: none).
1,161 of the 1,170 2 MB RAM dumps on disk (disc/dumps, every folder) have 0x8005C604 there; the other nine hold zeros
or no EXE (not game RAM). So `D_80072784[4]` (func_8001EFE0's `lw` then
`lbu 4`) reads byte 4 of printf's code, **0x21** (printf's second instruction, `addu v0, a0, zero`, EXE offset
0x4CE08), and `0x21 - 1 < 2` fails. The graphics-system type itself is the byte **D_80072788**, four bytes further on,
which GetGraphType (0x800595DC) returns (it is 0 in those dumps, which would take the same branch). The other branch
(`tp << 9 | abr << 7 | (y & 0x300) >> 3 | x >> 6`) is the newer-GPU page layout of a libgpu inline the game was
compiled with; the linked libgpu's own GetTPage (0x80058B40) has only the standard layout. Reading why the game's
code dereferences the word (a header that declared a pointer where the linked libgpu keeps a byte) is **Unofficial**;
the result (one dead branch per call, standard page words drawn) is proven on the code and the dumps. func_8001D3FC
(draw_2d.md, kind 1) has no such test: it builds the standard layout only (r532's "func_8001EFE0 / func_8001D3FC"
corrected).

## 5. The TMD sorters: SortTransObject (kind 5) and the preset sorter (kind 1)

### 5.1 Input

The object is a libgs GsDOBJ2 whose `tmd` (obj+8) points at a mapped TMD object: +0 vertices, +8 normals, +0x10
primitives, +0x14 primitive count. Primitives come in **runs**: the first word of a run holds the run length in its
low halfword, the TMD flag byte (bit 2 = per-vertex colours on a flat primitive, "Grad" in the names) and the mode
byte (0x20 F3, 0x24 FT3, 0x28 F4, 0x2C FT4, 0x30 G3, 0x34 GT3, 0x38 G4, 0x3C GT4; bit 1 = semi-transparent, bit 0 =
TGE). Vertex and normal indices are halfwords scaled by 8. The record size per mode is in the builder table.

### 5.2 SortTransObject and its builders

| address | name in src | proposed | role |
|---|---|---|---|
| 0x800243EC | SortTransObject | (r274) | g_SortAttr (0x80078D88) = the object attribute, g_SortBlendRate (0x800A2B78) = its bits 28-30; attr & 0x40: the unlit dispatch, else the lit one |
| 0x80024448 | SortTransObjectLit | (r274) | switch on mode & 0xFC (blend and TGE bits dropped): every mode, the Grad builders when flag bit 2, the env-map builders for G3 / G4 when attr & 0x10000 (texture 0, the polygon's own colour) or 0x20000 (texture 1, fixed colour) |
| 0x80026D64 | SortTransObjectUnlit | (r274) | switch on mode & 0xFD (blend bit dropped): F3 / F4 (plain and Grad) with the TMD colour copied, FT3 / FT4 only with TGE set (0x25 / 0x2D); lit textured (0x24 / 0x2C) and every G / GT run skipped |

Every builder has the signature `(prim, verts, norms, pkt, n, shift, ot)` (the env-map ones add `idx`) and returns the
next free packet byte; the dispatcher stores it back into g_PrimNext. The common loop: RTPT the first three vertices,
skip on a GTE error (FLAG & ~0x1000), NCLIP and skip when the area is <= 0 (**back faces are culled**), store the screen xy into the packet, RTPS the
fourth vertex for quads (skip on error), depth (section 2.3), colour, then link `ot + (z >> shift)` with the packet's
length tag. The untextured builders follow a semi-transparent packet (code bit 1) by an 8-byte DR_MODE `0xE100000A |
(rate & 3) << 5` in the same entry when g_SortBlendRate != 0 (drawn just before the polygon, section 2.3); textured
ones carry the blend in their own tpage.

| address | name in src | GPU packet (len, bytes) | TMD record (bytes) | colour |
|---|---|---|---|---|
| 0x800249F0 | DrawPolyF3Lit | POLY_F3 (4, 0x14) | F3, 16 | NCCS of the TMD colour and the face normal |
| 0x80024BC0 | DrawPolyF4Lit | POLY_F4 (5, 0x18) | F4, 20 | NCCS |
| 0x80024DE8 | DrawPolyF3GradLit | POLY_G3 (6, 0x1C) | F3 Grad, 24 | NCCS of each vertex colour (three NCCS) |
| 0x80025000 | DrawPolyF4GradLit | POLY_G4 (8, 0x24) | F4 Grad, 32 | NCCS x4 |
| 0x8002528C | DrawPolyG3Lit | POLY_G3 (6, 0x1C) | G3, 20 | NCCT (three normals) |
| 0x80025504 | DrawPolyG4Lit | POLY_G4 (8, 0x24) | G4, 24 | NCCT + NCCS |
| 0x80025818 | DrawPolyG3GradLit | POLY_G3 | G3 Grad, 28 | NCCS per vertex |
| 0x80025A30 | DrawPolyG4GradLit | POLY_G4 | G4 Grad, 36 | NCCS per vertex |
| 0x80025CBC | DrawPolyFT3Lit | POLY_FT3 (7, 0x20) | FT3, 24 | NCCS of the fixed colour g_ColorFT3 (0x8006387C) |
| 0x80025EB8 | DrawPolyFT4Lit | POLY_FT4 (9, 0x28) | FT4, 32 | NCCS of 0x80063880 |
| 0x80026128 | DrawPolyGT3Lit | POLY_GT3 (9, 0x28) | GT3, 28 | NCCT of 0x80063884 |
| 0x800262D8 | DrawPolyGT4Lit | POLY_GT4 (0xC, 0x34) | GT4, 36 | NCCT + NCCS of 0x80063888 |
| 0x80026514 | DrawPolyG3EnvMap | POLY_GT3 (9, 0x28) | G3, 20 | NCCT; uv = (screen xy / 2 + scroll) & 0x1F inside a 32 x 32 window of g_EnvMapTex[idx] (0x8006388C), CLUT row 0x8006389C[idx], scroll = Work+0xA3AA (both u and v); semi-transparent when the rate is set |
| 0x800268D0 | DrawPolyG4EnvMap | POLY_GT4 | G4, 24 | the same |
| 0x80027058 | DrawPolyF3 | POLY_F3 | F3, 16 | TMD colour word copied |
| 0x80027200 | DrawPolyF4 | POLY_F4 | F4, 20 | copied |
| 0x800273F4 | DrawPolyF3Grad | POLY_G3 | F3 Grad, 24 | three colours copied, code forced to 0x30 (keeping ABE) |
| 0x800275BC | DrawPolyF4Grad | POLY_G4 | F4 Grad, 32 | four colours copied, code 0x38 |
| 0x800277DC | DrawPolyFT3 | POLY_FT3 | FT3 TGE, 28 | the record's colour with its code byte; depth max SZ >> 2 when g_SortAttr & 0x8000 |
| 0x800279AC | DrawPolyFT4 | POLY_FT4 | FT4 TGE, 32 | the same |

What "env map" looks like in play is **Unconfirmed** (the name reads the screen-space uv; no capture checked it).

**Which models use it (r759, `tools/draw_census.py`).** The env-map builders run only for a lit (attr bit 0x40
clear) model of kind 5 (InitTransModel, the one kind that sorts through SortTransObject) with attr 0x10000 or 0x20000.
Every statement in src/ that writes a constant to a +4 word was read (`AF(x, s32/u32, 4) =`, `|=` and the
`= (AF(..) | k)` form; masks with `&` clear bits and were skipped): bits 16 / 17 are set on exactly **two models**,
both kind 5, both in a Scroll package, both lit, and on nothing else (the other eight hits are GPU packets and
vectors with no model behind them):

| package | statement | model | attr | builder | TMD |
|---|---|---|---|---|---|
| ovl32 (Water Scroll) | src/abil/ovl32.c:138 in ScrollWater_BarrierStart (0x800CCCA0) | the timed barrier round Musashi (docs/abil_packages.md ovl32) | 0x40010000: env map texture 0, blend rate 4 | DrawPolyG3EnvMap / G4EnvMap, idx 0 | 0x800CE274 |
| ovl33 (Fire Scroll) | src/abil/ovl33.c:114 in 0x800CCD2C | the flame aura round Musashi (docs/abil_packages.md ovl33) | 0x50020000: env map texture 1, blend rate 5 | the same, idx 1 | 0x800CD6D0 |

The two TMDs are **the same mesh** byte for byte (2,424 bytes: one object, 0x22 vertices, 0x28 normals, 0x50
primitives: 32 G3 and 48 G4, all with the semi-transparent bit, modes 0x32 / 0x3A), so every primitive of both goes
through the env-map builders, and the two effects differ only in the texture window (g_EnvMapTex[0] / [1]) and the
blend rate. So the open row's static half is closed. **Unconfirmed**: (a) the look (needs a capture of Musashi with
the Water or Fire Scroll technique active); (b) a +4 value copied from data or a variable rather than a constant
(the C read covers constants only; no such write to a kind-5 model was seen, but not every non-constant +4 store
was traced to its object).

### 5.3 The preset sorter (Musashi's first two parts)

| address | name in src | proposed | role |
|---|---|---|---|
| 0x80027BF0 | SortPresetObjectG | (r274) | K&R pass-through to the body |
| 0x80027C10 | SortPresetObjectGBody | (r274) | walk the GsDOBJ5's preset packet blocks ({tag, count} then the packets; the tag's low 24 bits link the next block): G3 blocks (mode 0x30) and G4 blocks (0x38) are rebuilt by the two builders below; any other block is left as GsPresetObject made it (not drawn by this path) |
| 0x80027D20 | DrawPresetPolyG3Lit | (r274) | per polygon: RTPT, error / back-face skip, xy into the packet at `pkt + g_BufferIndex * 0x1C` (stride 0x38: the two halves interleaved), NCCT colours, AddPrimAtDepth at (min SZ >> 2) - 1 |
| 0x80027F4C | DrawPresetPolyG4Lit | (r274) | the same for POLY_G4 (+ index x 0x24, stride 0x48), NCCT + NCCS |

A culled preset polygon keeps last frame's packet bytes but is not linked, so it is not drawn. The other parts of the
kind-1 model go through libgs' GsSortObject5 (GsPrst* functions from InitFCall5); kind 6 replaces this whole path with
ovl28's copy (a sliding white "sheen" band, docs/abil_packages.md).

## 6. The room mesh: block player and stage renderers

### 6.1 Set-up and the per-frame call (shared stage engine)

The room's map geometry is not a model. Each room record (engine_80144B9C.c `RoomRec`) names one or two mesh
**blocks** (+0x94, +0x98), a depth value (+0x9C) and a per-frame room hook (+0xA8). Loading a room calls
`func_8013B83C(room +0x94, +0x98, +0x9C)` and `func_8013B568(room +0xA8)`.

The player object is **D_801EF3F8** (0x6C bytes, typed `SeqPlayer` in engine_8013B568.c): +0 hidden flag, +8 the block
header, +0xC the chunk list, +0x10 a GsCOORDINATE2 (D_801EF408), +0x60 = depth value + 500 (D_801EF458), +0x64 =
the depth value (D_801EF45C), +0x68 = the block's **mode** (D_801EF460). Earlier docs call it the "sequence player"
(r272) and read +0 as "active"; the C shows it is the room mesh, and +0 **hides** it:

* The stage frame (func_801287B8, engine.c) calls the draw only `if (D_801EF3F8.flag == 0)`; func_8013B83C clears it at
  room load; **StartSeqPlayer** (0x8013C938, sets 1) therefore **hides the map** and StopSeqPlayer (0x8013C964)
  shows it again. Its engine caller is the scene task SceneTaskHideAll (r2xx, func_801596F0, engine_801458E0.c
  ~11069), which hides every sprite and every model but Musashi in the same step: a scene with only Musashi visible;
  20 stage files call it as well (their scenes not read here). (r272's "active = 1" reading
  is kept as data; the role is corrected here.)
* After the mesh, RunSeqHook (0x8013BCDC, engine_8013B568.c) calls the room hook set by func_8013B568.

| address | name in src | r272 / r2xx name | proposed (Unofficial) | role |
|---|---|---|---|---|
| 0x8013B83C | func_8013B83C | InitSeqPlayer | LoadRoomMesh | reset the player (shown, coord identity, four light spots off at 0x6000 / radius 0x100), keep the depth value, then by the block's first byte: 'B' = a 4096-cell block (the second block instead when D_800B9A0E != 0), mode 0; 'C'-'H' modes 1-6, 'I' 9, 'J'-'N' 0xC-0x10 (RelocateSeqBlock) |
| 0x8013B7F4 | func_8013B7F4 | RestartSeqPlayer | ReloadRoomMesh | LoadRoomMesh with the current depth value (38 stage callers swap the room's mesh) |
| 0x8013B568 | func_8013B568 | SetSeqHook | SetRoomFrameHook | the room's per-frame hook |
| 0x8013BCDC | RunSeqHook | - | RunRoomFrameHook | call it when set |
| 0x8013BC7C | func_8013BC7C | RunSeqState | DrawRoomMesh | `g_RoomMeshDrawFuncs[mode](player)` |
| 0x8013C938 | StartSeqPlayer | StartSeqPlayer | HideRoomMesh | flag = 1 |
| 0x8013C964 | StopSeqPlayer | - | ShowRoomMesh | flag = 0 |
| 0x8013BD34 / 0x8013BD74 | func_8013BD34 / func_8013BD74 | LoadSeqBlockB / RelocateSeqBlockB | (keep) | 'B' block: +8 a 0x1000-entry table of cell pointers, relocated once (each cell's +0 and +0x14 relocation list; texture words of mode 0x24/0x2C/0x34/0x3C/0x26/0x2E/0x36/0x3E patched against a + 0x4008); the screen RECT D_801EF2D0 = (-160, -120, 320, 240) |
| 0x8013C08C / 0x8013C0F8 | func_8013C08C / func_8013C0F8 | StartSeqBlock / RelocateSeqBlock | (keep) | 'C'-'N' blocks: +0x14 the chunk list, sections relocated once (the same texture-word patching) |
| 0x8013C414 | func_8013C414 | RelocateSeqBlockPair | (keep) | relocate a patch block against a 'B' block (bit 23 picks which base), then apply / re-apply its patches (stage meshes that change) |
| 0x8013C360 | func_8013C360 | ApplySeqPatches | (keep) | write each (address, value) pair |
| 0x8013B598 / 0x8013B6A0 / 0x8013B7AC | SetSeqPoint / SetSeqPointN / ClearSeqPoint | (r272) | SetMeshLight / SetMeshLightRadius / ClearMeshLight | the four light spots D_801EF328 (0x1C each) that some renderers read (docs/actor_families.md, r451 table) |

The relocation types are TMD-style mode bytes for textured polygons (0x24 FT3, 0x2C FT4, 0x34 GT3, 0x3C GT4 and their
semi-transparent forms): the patched word is the polygon record's texture-record pointer, which is why DrawChunkedMesh
reads a pointer in word 0 of a textured polygon and a colour word in an untextured one.

### 6.2 The renderer table: one renderer per block letter, in each stage image

The engine is relinked into each stage image (docs/stage_engine.md), so DrawRoomMesh's table address differs per image
(village 0x8018D4BC). Reading it in all 140 `disc/pac4/SC*.bin` files (the `lui / addiu` pair at 0x8013BCA8, then each
entry checked for an `addiu sp` prologue; per-image list in the shared notes, `r532_room_mesh_renderers.tsv`):

| mode | letter | images | renderer addresses (count) |
|---|---|---|---|
| 0 | B | 16 | 0x8017C59C (6), 0x8017C6F4 (4), 0x8017C974 (2), 0x8017D538 (2), 0x8017CF90, 0x8017DF98 |
| 1 | C | 111 | 0x8017BEBC (53), 0x8017D898 (10), 0x8017C294 (6), 0x8017CA80 (5), 0x8017C8D0 (5), 0x8017BE9C (4), others |
| 2 | D | 2 | 0x8017C730 (SC03_010, SC03_013) |
| 3 | E | 4 | 0x8017D960 (SC03_089, SC03_090, SC03_104), 0x8017E778 (SC03_091): the dark-map renderer with light spots (r451) |
| 4 | F | 2 | 0x8017F590 (SC02_031), 0x8017F4EC (SC03_006) |
| 5 | G | 1 | 0x8017CE58 (SC03_092) |
| 6 | H | 1 | 0x80180FE4 (SC02_011) |
| 9 | I | 1 | 0x8017E35C (SC06_000) |
| 0xC | J | 1 | 0x8017BEBC (SC06_010) |
| 0xD | K | 1 | 0x8017BEBC (SC03_116) |
| 0xE | L | 1 | 0x8017BEBC (SC03_107) |
| 0xF | M | 1 | 0x8017C954 (SC06_029) |
| 0x10 | N | 6 | 0x8017C710 DrawChunkedMesh (SC03_001, SC03_124, SC04_015.. clones; SC04_015 at 0x8017C730) |

132 images fill one slot; eight fill two ('B' + 'C': SC03_003, SC03_126, SC04_021, SC05_019; 'C' + 'E': SC03_089,
SC03_090, SC03_091, SC03_104), so their rooms load blocks of both kinds.

**Table length (r554 correction).** r532 read every unfilled slot as zero. That holds up to slot 0xE only. Read from
the same 140 files, the table is 15 words long in 133 images (slots 0-0xE). Its slots 0xF and 0x10 are the next data
words: pointers into the image's BSS (SC01_000 0x801A3228 / 0x801A3220, SC03_116 0x801956BC / 0x801956B4), not code.
The table is 16 words in SC06_029 (slot 0xF 'M' filled, slot 0x10 data) and 17 words in the six 'N' images (slots
0x11 and up are data). So in most images a block of an unfilled letter in 'B'-'L' calls address 0, and an 'M' or 'N'
block calls a data address. Section 6.2.3 lists the one place where the code seems to do this.

**Which body each slot holds** (r532: each entry's 952 words compared with SC01_000's 0x8017BEBC and the village's
0x8017C710, with jump targets and the low halves of lui / addiu / load / store words masked as relocations): all 111
'C' entries are DrawChunkedMesh200 and all 6 'N' entries are DrawChunkedMesh. The two differ only in the push
constant, which the mask hides. **Every other letter's renderer is a different function**, with 18 to 214 of 952
words in common with the 'C' body. So the room mesh has 13 renderer kinds. r554 read the other 11 from their matched
C in `src/stg/` (section 6.2.1).

**SC03_116 settled (r554).** Its table slot 0xD holds **0x8017BEBC**, the 'K' renderer's entry: a 7-line wrapper
(`zlim = ReadGeomScreen() + player->0x64; GsGetLs(player + 0x10, &ls); GsSetLsMatrix(&ls);`). It calls
**0x8017BF14** `(player, zlim)`, the body that reads the four light spots (src/stg/sc03_116.c:204 and :254). r451's
light-spot reader and r532's table entry are both right: one is the entry and the other its body. The 'F' renderers
are split the same way (0x8017F590 calls 0x8017F5B4, 0x8017F4EC calls 0x8017F510; see 'F' below).

#### 6.2.1 What each block letter adds

Every kind shares the frame of DrawChunkedMesh (section 6.3). They project the 8 corners of each chunk box and skip
off-screen chunks. Per polygon they run RTPT, skip on a GTE error, skip back faces with NCLIP, run RTPS for a quad's
fourth vertex and test the polygon's screen extent. The depth is the largest SZ, linked at `SZ >> 2` into
g_WorldOtTable[frame] from g_PrimNext. Every kind uses the 12-byte polygon record of section 6.3 (word 0 is a colour,
or a texture-record pointer for textured types). The 'C'-'N' blocks share one header, read in RelocateSeqBlock
(0x8013C0F8): +0 the letter, +4 a relocated flag byte, +8 the chunk count, +0xC the texture-record base, +0x10 the
vertex base, then the 20-byte chunk records from +0x14. The baseline below is the 'C' body, DrawChunkedMesh200: far
clip at the projection distance + the room's depth value, screen x +-160 and y +-120, all eight types (0/1 POLY_F4,
2/3 POLY_FT4, 4/5 POLY_F3, 6/7 POLY_FT3), +0x200 depth push on types 3, 5 and 7, colour or texture words copied.

| letter (mode) | renderer, images | chunk walk | polygon types | depth | colour / other |
|---|---|---|---|---|---|
| B (0) | 0x8017C59C (SC01_080, SC02_004, SC03_007, SC03_012, SC03_023, SC07_010), 0x8017C6F4 (SC03_003, SC03_126, SC04_021, SC05_019), 0x8017C974 (SC01_077, SC03_030), 0x8017D538 (SC02_000, SC02_003), 0x8017CF90 (SC02_005), 0x8017DF98 (SC03_028): one function at six addresses | a 64 x 64 grid of 512-unit cells, walked only over the screen's footprint on the ground (below); **no far clip** | all eight; type in **4 bits** (`w & 0xF`, no case for 8-15) | max SZ; push +0x200 on **all four** odd types (1 too) | copied, as 'C' |
| D (2) | 0x8017C730 (SC03_010, SC03_013) | chunk list; only chunks whose mid height lies in the camera's band (below); screen y +-110 | all eight | push on all four odd types; **near cut**, not a far clip: an untextured polygon with every SZ nearer than the projection distance is dropped | **textured: CLUT column from depth** (below) |
| E (3) | 0x8017D960 (SC03_089, SC03_090, SC03_104), 0x8017E778 (SC03_091): one function | chunk list, far clip, y +-110 | **textured only** (2/3, 6/7; untextured types drawn by no case) | max SZ, no push | **three light spots**, black elsewhere (below) |
| F (4) | entry 0x8017F590 -> body 0x8017F5B4 (SC02_031), entry 0x8017F4EC -> body 0x8017F510 (SC03_006) | chunks read straight from the block (header + 0x14); far clip, y +-110; the body returns when the player's word 0 (hidden) is set | textured only | max SZ, no push | **one light spot plus a base level** with a blue tint (below) |
| G (5) | 0x8017CE58 (SC03_092) | chunk list, far clip, y +-110 | textured only | max SZ, no push; for the odd types (3, 7) the GTE error mask is relaxed to bit 31 alone | **grey fade by depth**: `c = 0x80 - (maxSZ - 400) / 12`, floor 0 |
| H (6) | 0x80180FE4 (SC02_011) | chunk list, far clip, y +-110 | textured only | push +0x200 on 3, 7 | copied: the 'C' body without its untextured types |
| I (9) | 0x8017E35C (SC06_000) | chunk list, far clip, y +-110; returns when hidden | textured only | push **+0x50** on 3, 7 | **CLUT row from depth** (below) |
| J (0xC) | 0x8017BEBC (SC06_010: the image's own function at that address) | chunk list, far clip, y +-110; returns when hidden | textured only | push +0x200 on 3, 7 | **grey fade by depth**: `c = 0x80 - (maxSZ - 400) / 24`, floor 0 |
| K (0xD) | entry 0x8017BEBC -> body 0x8017BF14 (SC03_116) | chunk list, far clip, y +-110 | textured only | max SZ, no push | **four light spots** on a dim base (below) |
| L (0xE) | 0x8017BEBC (SC03_107) | chunk list, far clip, y +-110 | textured only | push +0x200 on 3, 7 | the same fade as 'J' (`/ 24`). Its other differences from 'J' have no effect on output: it computes the camera position (as 'D') and never uses it, runs one dead AVSZ3, and has no hidden test |
| M (0xF) | 0x8017C954 (SC06_029) | chunk list, far clip, y +-120 | all eight; **type 3 replaced** by a blended quad pair (below) | push +0x200 on 5, 7 (type 3 replaced, not pushed; type 1 not pushed, as 'C') | copied, as 'C', except type 3 |

How the kinds group, from the table: 'C', 'H', 'N' copy the record's colour or texture words ('H' textured only).
'B' changes the chunk walk, and 'D' changes the chunk walk and the CLUT. 'G', 'I', 'J', 'L' cue by depth (colour
fade or CLUT row). 'E', 'F', 'K' light vertices from the engine's light-spot records. 'M' adds a blend effect.
Section 6.3's "untextured types" are absent from every kind but 'B', 'C', 'D', 'M', 'N'. In the other eight
kinds, F3 / F4 records in the block are skipped. **Correction (r759 census, 6.4):** three blocks of those letters do
hold some, which their renderer never draws: both 'F' blocks (SC02_031 0x80189C64: 111 F4 + 24 F3; SC03_006
0x801921D4: 16 F4 + 2 F3; the 'F' body's switch has cases 2, 3, 6, 7 only, src/stg/sc02_031.c:2216) and the 'H'
block (SC02_011 0x801971E4: one F4). The records are real flat polygons (word 0 carries the GPU code 0x28 / 0x20).

**'B': the grid block.** The block's +8 is a 0x1000-entry table of cell pointers (LoadSeqBlockB, section 6.1), read
as 64 rows (z) of 64 columns (x). Each cell covers 512 units of a square from -0x4000 to +0x4000. A cell record is 28
bytes: `{ vertex base, (unused here), x lo/hi, y lo/hi, z lo/hi, first polygon, end polygon }`. The polygons run from
first to end (no count), and the fourth vertex offset is `(w & 0xFFF0) >> 1`. The renderer (SC01_080 addresses below)
works out which cells can be on screen:

1. 0x8017C294 turns a view-space point into mesh space: the transposed rotation applied to (point - translation).
   On the origin it gives the camera position.
2. 0x8017BEBC (helper, SC01_080) takes a rectangle D_801C75E0 (x, y, w, h; screen-sized, **Unconfirmed** that it is
   LoadSeqBlockB's screen RECT relinked) and builds a ray from the camera through each corner at the projection
   distance. 0x8017C338 meets each ray with the plane y = 0, clamped to the camera +- (depth value + 500) (player
   +0x60).
3. A corner whose ray misses is pulled back inside a margin of 1/20 of the rectangle (0x8017C530 = RotTransPers with
   a zero geometry offset) and cast again.
4. The x / z bounding box of the four hits and the camera, divided into 512-unit cells, gives columns `x/512 .. +2`
   and rows `z/512 - 1 .. +2`, clamped to 0-63.

Only those cells are drawn, with the 'C' tests per cell. The renderer calls ReadGeomScreen and drops the result, so
the grid block has no far clip: the ground footprint is its distance limit. AVSZ3 / AVSZ4 run and their results are
never read. One quirk, faithful to the original (byte-matched): the textured quad's fourth-vertex y test reads the
x coordinate (`tmp + 0xC` for both). The 16 copies are one function: their C is the same text after the file prefix
is dropped (SC03_030's differs only in a `[0]` subscript on D_800B9A02).

**'D': camera band and depth CLUT.** It computes the camera position as 'B' step 1 does, then keeps only chunks whose
mid height `(ylo + yhi) / 2` lies from `cam.y - 0x180` to `cam.y + 0x280` (a vertical band around the camera's
height). Textured polygons get their CLUT word rewritten:

    uv0clut = (record & 0x3FC0FFFF) | (((maxSZ + push - 0x174) / 128 + 0x30) << 16)

That keeps the uv and the CLUT row, clears the CLUT column bits, and sets the column (in 16-pixel units) to 0x30 plus
one per 128 of depth. So nearer and farther polygons draw with palettes from a ramp starting at VRAM x 768. The `type = ...` line
before the polygon loop is a dead store, marked MATCH-TRICK in src (ruling 27 Oct).

**'D' on a capture (r550; PC port, SC03_010 via the debug menu, range capture at vblank 3700, docs/draw_2d.md 12).**
In the drawn frame all 95 room-mesh textured polygons whose CLUT lies in the ramp (columns 0x32-0x3E, x 800-992, at OT
entries 0xA7-0x222) have exactly the column `0x30 + (4 * entry - 0x174) / 128` (entry = (maxSZ + push) >> 2); the
polygons that do not fit are model textures at x 352 / 368, not room mesh. **What the ramp holds (VRAM):** each CLUT row
the room uses (rows 15-66) carries 16 palettes from x 768 to x 1008: the base palette at x 768 and each next one
blended a step further toward a warm grey near (0x90, 0x78, 0x78), which x 1008 nearly is. So it is a **distance-fog
ramp**, and the screenshot shows the far walls fading to tan. Whether the ramp comes from the disc or is computed at
load is Unconfirmed (not read).

**'E', 'F', 'K': light spots.** The four engine records (village D_801EF328, each image's own relinked copy, 0x1C
bytes: active, x / y / z, radius +0xC, a level +0x18; set by SetMeshLight / SetMeshLightRadius / ClearMeshLight,
section 6.1; who sets them per image: docs/actor_families.md, r451 table). Each kind tests each vertex against each
active spot's cube (centre +- radius). A polygon with any vertex inside a cube is lit. Per vertex and spot, the
weight is 0x80 inside the full radius and falls off linearly to 0 at the radius, one factor per axis, multiplied.
The vertex colour is the summed weights, clamped to 0x80, and the polygon is drawn as a Gouraud textured POLY_GT3 /
GT4 (code 0x34 / 0x3C).

| kind | spots | full radius | weight past it | lit colour | unlit polygon |
|---|---|---|---|---|---|
| E | records 0-2 | r - 0x80 | r - d | sum (grey), blend bit dropped | POLY_FT3 / FT4 with the record's code and **colour 0** (black) |
| F | record 0 only | r - 0x80 | r - d | r = g = sum + level (max 0x80), **b = 0x80**; the record's blend bit kept | colour (level, level, level), or (level, level, 0x60) when level < 0x60 |
| K | records 0-3 | r - 0x200 | (r - d) / 4 | sum + 0x10 (max 0x80), blend bit dropped | colour 0x101010 (dim) |

* 'E' is r451's dark map (spots on the nearest glowing actors, A104 / A247). SC03_102 holds a fifth copy of it
  (0x8017CD9C) that nothing calls: no table slot, no call in its C, and no pointer word to it in disc/pac4/SC03_102.bin
  (dead code).
* 'F': in both images the room frame hook sets record 0 to Musashi's position every frame (SC02_031 func_801831B4),
  so a light follows him on a dark-blue room. The level (record +0x18) acts as the base brightness of the whole room.
  The body takes `(player, block header, coordinate)`. The same hook relocates a second, 'C'-lettered block and draws
  it through the same body with its own coordinate and player word: SC02_031 block 0x801A64C8 (coordinate
  0x801B7930, word 0x801B7AA0, while D_801B7988 is set); SC03_006 block 0x801BA07C (coordinate 0x801F76D8, word
  0x801F7848). That is the "map-mesh slab" of r451 / A323 / A365.
* 'K' slip, faithful to the original (byte-matched): spot 3 takes spot 2's radius for its full radius (`M3 = R2 -
  0x200`) and in three of its range tests. It has no effect while the spots share one radius (RoomSetSeqPoints sets
  all four to 0x2E0, docs/actor_families.md).

**'I': depth CLUT rows.** `k = max(maxSZ + push - 0x190, 0) >> 8` is added to the CLUT word at bit 22, which moves the
CLUT **row** down by one per 256 of depth. It works like 'D' with rows instead of columns. Each triangle advances
g_PrimNext by 0x28 for a 0x20-byte POLY_FT3, so 8 bytes per triangle go unused (faithful). The vertices are copied to
the stack before RTPT, with no effect on the output.

**'I' on a capture (r550; SC06_000, range capture at vblank 3800, the shrine filling the screen).** Every room polygon
with its CLUT at x 0 has row = **480 + k** or **496 + k** with `k = max(4 * entry - 0x190, 0) >> 8` (k 2-10 seen; the
records' base rows are 480 and 496); and all 74 FT3 packets (0x20 bytes) are followed by the next packet 0x28 bytes on,
the 8 unused bytes. **What the rows hold (VRAM):** rows 480-495 and 496-511 are two 16-step ramps, each blending its
base palette toward a pale blue-grey near (0x98, 0x98, 0xB0): distance fog toward the sky's haze. These are the CLUT
rows the 8-bit pictures use at x 0 (docs/draw_2d.md section 7, corrected there).

**'M': the blended type 3.** The renderer reads a level `al` (D_801DCCA0) once per frame. Type 3 (the pushed
textured quad of the other kinds) is drawn with no push as two packets in the same OT entry:

1. A POLY_FT4 with code 0x2E (semi-transparent) and colour (al, al, al).
2. Linked after it, a 7-word packet: a draw-mode word 0xE1000040 (blend mode 2, subtract) and a semi-transparent
   POLY_F4 (code 0x2A) of colour (2al, 2al, 2al), at most 0xFF, over the same four corners.

The reverse OT draws the later link first. So the quad's area is first darkened by 2al, then the texture is drawn
over it with its own tpage's blend mode. A451's set-up sets `al` to 0x80 (0x8017C8D0). 0x8017C8E4 steps it down by 4 per
call, called from 0x80188470 (a data-table entry at 0x801914C0). 0x8017C918 steps it up by 4, and no caller was found
in SC06_029's C or data.

**'M''s type-3 records (r550; read from the loaded block in a PC port capture of SC06_029, vblank 3750).** The 'M'
block (RAM 0x8019375C: 84 chunks, chunk records {bounds, polygon count, polygon list}) holds 268 polygons: 224 of type
2, 40 of type 6 and **4 of type 3**. The four are 80 x 192-unit quads high on the walls (y -512 to -704; x +-521 to
+-601, z -402 to -601). Their texture records read 0x2E808080, 0x7880C0D0 (CLUT 0x7880 = x 0, row 482), 0x00A9C0C0
(**tpage 0xA9: page 576, 0, 8-bit, abr 1 additive**), then two uv words. So the pair works as: subtract 2al from the
quad's area, then add the texture scaled by al / 0x80; at al 0x80 the area goes to black and the texture is added at
full (the piece replaces what is behind it), at al 0 neither pass changes anything: a **fade of four wall pieces**.
That is read from the code and the block's data only: none of the four was in view in the capture (no 0x2E, 0x2A or
E1000040 command in its GPU log) and `al` was 0 after the debug-menu warp, so how it looks on screen stays
**Unconfirmed**.

**r760 (14 Nov 2026, PC port run R3b, every vblank 3150-4050 after the same warp; worktree build/pc/captures/range_004,
not in git): the pair is now seen on the GPU, still with `al` = 0.** The GPU log of **vblank 3767** (the vblank in which A254's
intro cuts the camera, camera.md 11.1; which of the two views that drawn frame was built from was not traced) holds the four type-3 pieces,
each as **E1000040 + POLY_F4 0x2A colour 000000**, then **POLY_FT4 0x2E colour 000000** with CLUT 0x7880 and tpage
0x00A9 (e.g. `2E000000 FF8FFFB5 7880C050 ... 00A9C040 ...`): the subtract quad first, the textured add second, as the
reverse OT order above says, at the four records' CLUT / tpage. No later frame has them (the cut camera does not see
those walls). D_801DCCA0 read **0 on every vblank 3600-4050**. Why it stays 0 after a warp is now clear from the code:
the only setter to 0x80 is A451's set-up (0x8017C8D0), and A451 (kind 0x32D, the pad) is spawned only by A254's
BossCollapseSequence sub-step 1 (docs/structs_14.md 4.20), i.e. **after the boss is beaten**. So the blend's look needs
the room after A254's defeat (LuciDin's play, or a run that wins the fight): **Unconfirmed (look only), reason: `al` is
non-zero only in the post-defeat collapse**.

**r798 (16 Nov 2026, PC port run, the r784 "SC06_029 warp" with the Expanded debug keys: no trap): the rule holds on the GPU
with `al` = 0x80; the look is still out of reach.** In this route the four type-3 pieces are drawn in one frame only,
**vblank 3877** (5 x E1000040 in its GPU log, 1 in every other frame). A state saved at v3784, D_801DCCA0 (0 there) poked
to **0x80** (one byte, tools/state_poke.py; honest for the draw rule, not for A451's timing), then RAM / VRAM / GPU log over
v3871-3881: each piece is **E1000040 + POLY_F4 `2AFFFFFF`** (2al = 0x100, clamped to 0xFF) **+ POLY_FT4 `2E808080`** with CLUT
0x7880 and tpage 0x00A9, e.g. `2AFFFFFF FF8FFFB5 FF92FF9B FF69FFB2 FF6AFF97` / `2E808080 FF8FFFB5 7880C050 FF92FF9B 00A9C040
FF69FFB2 7480A050 FF6AFF97 4056A040`: the colours DrawBlendQuadMesh computes, in that order. But the corners lie at screen
y -110 to -151 (the clip is y -110..+109 about the offset), and the whole frame is white under BossCoreInit's
DrawFadeWhite (the shot is a white field): nothing of the pieces can be seen. The look stays **Unconfirmed (look only)**:
it needs the room after A254's defeat (A451's own set-up).

#### 6.2.2 Evidence

* **Matched C (proof in full).** Every body above is matched, placed C (`make check-stg`): the files and lines are
  `func_<image>_<address>` in src/stg/. The copies within a letter were compared as C text with the image prefixes
  and data addresses masked: 'B' 16 / 16 the same (one subscript form), 'D' 2 / 2, 'E' 4 / 4. The 'F' pair is two
  C styles of one function: the same constants, record and packet layout, read side by side. That agrees with r532's
  masked word compare.
* **The dispatch.** LoadRoomMesh (0x8013B83C) maps the block's first byte to the mode (section 6.1), and DrawRoomMesh
  indexes the per-image table with it (`D_8018D4BC[p->state](p)`).
* **Disc block data (r554 scan; read-only, scratchpad script).** In each `disc/pac4/SC*.bin`, a word was counted as a
  block header when its first byte is 'C'-'N' and the rest of the word is zero, the relocated flag is 0, the chunk
  count is 1-3999, both bases lie inside the file, and the first chunks have ordered x bounds. The address is the file
  offset + 0x80128158 (the base that puts every r532 table where the tsv says). The scan agrees with the tables:
  * 'D' in SC03_010 / SC03_013; 'E' in SC03_090, SC03_091, SC03_104; 'F' in SC02_031 / SC03_006 (each with the
    'C' slab block above); 'G' SC03_092; 'H' SC02_011; 'I' SC06_000; 'J' SC06_010; 'K' SC03_116; 'L' SC03_107;
    'M' SC06_029; 'N' in the six 'N' images.
  * No 'C'-'N' header in the 12 'B'-only images (the 'B' header was not scanned).
  * 'C' blocks in 113 images: the 111 with a 'C' slot, plus SC02_031 / SC03_006 (the slabs).
  * Misses and extras: no 'E' header found in SC03_089 and no 'C' in SC03_090 / SC03_091 (the scan's tests are
    strict: Unconfirmed which way). SC06_000's four and SC06_010's twelve 'C' blocks are relocated by actor code and
    drawn by the image's own mesh drawers, not by DrawRoomMesh. For example, SC06_000 0x80197B60 / 0x8019FD8C /
    0x801A158C / 0x801A3A0C go through RelocateSeqBlock at src/stg/sc06_000.c:2901-2935 and func_8017EF68.
  * SC03_103 holds one 'K' block (below).

#### 6.2.3 Open from the reading

* **SC03_103's 'K' block: settled as unreachable data (r751, disc data).** SC03_103 (map 0x3040) has a mesh-swap
  table D_801880AC of three blocks: 0x80188500 'C', 0x8018C350 'C' and **0x80190664 'K'** (header byte 0x4B, 128
  chunks). Its renderer table (0x801840E8, read from the `lui / addiu` at 0x8013BCA8) holds only slot 1 ('C',
  0x8017C294); slot 0xD is **zero**. So loading the 'K' block would set mode 0xD and DrawRoomMesh would call address
  0. What reaches it:
  * Only func_sc03_103_8017DE58 calls `ReloadRoomMesh(table[2])` (through 0x8017E6D0; 0x8017DDD8 and 0x8017DE18 load
    tables 0 and 1). Its only references are the **+0x20 word** ("called at the end of LoadRoom", docs/collision.md
    6.1) of SC03_103's doorway records **[4]** (0x80187FD4) and **[5]** (0x80187FF8) in the table at 0x8018801C (six
    0x24-byte records: [0] 0x3034 entrance 5, [1] 0x3040 / 2, [2] 0x3040 / 1, [3] 0x302D / 0, [4] 0x3040 / 3,
    [5] 0x3042 / 0). LoadRoom runs a record's +0x20 when Musashi **arrives** by that entrance, so the 'K' block loads
    only on arrival at SC03_103 by entrance 4 or 5.
  * No record on disc leads there. A scan of every file (SLUS_007.26, the overlays, the 140 stage images,
    disc/payload, the .CD archives) for 0x24-byte doorway records with map 0x3040 and code words at +4 / +8 / +0x1C /
    +0x20 finds entrances **0** (SC03_092's hub door), **3** (SC02_037, and SC03_103's own record [4]), **1** and
    **2** (SC03_103's records [2] / [1]) only (five more hits with entrance 24-27 and camera 0x80 are other data).
    Entrance 0xFF (the Memory Box continue) runs the copied request record's own +0x20, not SC03_103's table.
  * The block is **SC03_116's room mesh**: its first 0x65F0 bytes equal SC03_116's 'K' block at 0x80186790 byte for
    byte (header 'K', 0x80 chunks, 0xA00, 0x26D0, the same chunk boxes); SC03_116 (map 0x304C) has the 'K' renderer
    in slot 0xD. SC03_103 carries a copy of it without the renderer.
  So as shipped, records [4] / [5]'s arrival hook and the 'K' block are left-over data no shipped route reaches; the
  game cannot crash there by a door. **Unconfirmed** (needs a run to rule out): a run-time-built request record for
  map 0x3040 entrance 4 / 5 (none is known; the scan covers every static record, whoever requests it, but
  r751 did not read all 61 RequestMapChange callers for records built at run time). Labels "left-over" and the reading that SC03_103 once used SC03_116's room are **Unofficial**.
* ~~What the depth-ramp CLUTs of 'D' and 'I' look like~~: distance-fog ramps, read from VRAM by r550 ('D' and 'I'
  above). Still open: the type-3 blend of 'M' on screen, **Unconfirmed (look only; r751 checked that no file on disc
  settles it)**: the packets are read (DrawBlendQuadMesh, level D_801DCCA0 stepped 0x80 / -4 / +4), what they look
  like needs a run: a capture of SC06_029's four wall pieces with `al` above 0, i.e. the room entered as the game
  enters it, not by a debug warp (r550's warp to SC06_029 also traps in the port about 300 vblanks after the load, a
  separate port issue).
* ~~Whether any 'B' cell holds types 8-15~~: closed by r759 (6.4): only the unloaded grid block of SC01_005 /
  SC01_006 (Musashi's bedroom, 0x801A29F4, no pointer to it and no 'B' renderer slot) holds them (285 type 10, 2
  type 8); every 'B' block a room loads, and every patch block, holds types 0, 2, 3, 6, 7 only.

### 6.3 DrawChunkedMesh (village 0x8017C710; the 'C' copies, DrawChunkedMesh200, at 0x8017BEBC and elsewhere)

`DrawChunkedMesh(player)`, MATCHED and placed (r159), 952 instructions, PsyQ inline GTE macros:

1. `zlim = ReadGeomScreen() + player->0x64` (the projection distance plus the room's depth value): a far clip.
   `GsGetLs(player + 0x10, &ls); GsSetLsMatrix(&ls)`.
2. Packets from g_PrimNext; OT = g_WorldOtTable[frame].
3. For each of `header->8` chunks in the list at `player->0xC` (**20-byte** chunk records: x min/max, y min/max, z
   min/max as halfword pairs, the polygon list, the polygon count; the r11 text said 12): project the 8 corners of the
   chunk's box (RTPT, RTPS, RTPT, RTPS), skip the chunk when the last SZ is beyond zlim, or when the box's screen
   extent is wholly outside x -160..160 or y -120..120.
4. For a visible chunk, per 12-byte polygon record `{ colour word or texture-record pointer, v0 | v1 << 16, v2 |
   (v3 | type) << 16 }` (vertex offsets in bytes; the type 0-7 in the low 3 bits of the fourth): RTPT, skip on
   FLAG & 0x7F85E000, NCLIP and skip back faces, store xy, RTPS the fourth vertex for quads, skip a polygon whose own
   screen extent is outside the screen, then depth and link:

| type | packet | bytes | GPU primitive | depth (SZ) |
|---|---|---|---|---|
| 0, 1 | len 5 | 0x18 | POLY_F4 | max(SZ0..3) (no push for type 1) |
| 2, 3 | len 9 | 0x28 | POLY_FT4 | max(SZ0..3), + 0x20 for type 3 |
| 4, 5 | len 4 | 0x14 | POLY_F3 | max(SZ0..2), + 0x20 for type 5 |
| 6, 7 | len 7 | 0x20 | POLY_FT3 | max(SZ0..2), + 0x20 for type 7 |

   The entry is `SZ >> 2`. **Correction** to the r11 text: the depth is the farthest vertex, not AVSZ3 / AVSZ4, and
   the odd type's flag is a **depth push** (drawn behind its neighbours), not semi-transparency. **One surface
   identified (r737, 13 Nov; folded in by r751, which owns this file in wave 18, in place of r738's planned line):** the
   top of the pedestal in SC01_001 (map 0x3006) is a fan of **24 POLY_FT3 records of type 7**
   round (0, -656, 0), radius 120, in the 'C' block 0x80189F70 (records 0x8018F4E0-F51C, F540-F57C, F624-F660,
   F684-F6C0; chunks 47, 48, 52, 53), the room's only type-7 records; func_sc01_001_8017BEBC links them at
   `(max SZ + 0x200) >> 2`, 0x80 entries behind their farthest vertex. So the push is a **floor layer**: an actor
   standing on it is never cut by it (and an actor behind it shows through from across-the-top views, which no
   shipped camera of that room takes; docs/ex_character_viewer.md 14.8, PC port capture). The same room also holds 96
   type-3 FT4s, whose surfaces were not traced. The census over every block on the disc is section 6.4 (r759): the
   odd types sit in 65 blocks of 50 images, and most of them are level surfaces (67% of the pushed odd records,
   against 30% of the even textured ones), so the floor-layer reading holds for most of them; the rest (15%
   vertical, 18% other) are listed there.
   The push is in three of the four odd types (3, 5, 7: r152's "three odd-type depth adds");
   type 1, the flat quad, shares type 0's code with no push. On the disc **type 5 is never used** and type 1 only
   twice (6.4), so in practice the push is on the textured types 3 and 7. Untextured polygons copy the colour word; textured ones copy four words from the texture record
   (uv0 / CLUT, uv1 / tpage, uv2, uv3).
5. g_PrimNext is left at the end of the packets.

The odd-type push is +0x20 in the village and its five clones and +0x200 in DrawChunkedMesh200 (r152), so in most
images the pushed layer drops 0x80 entries back.

### 6.4 Census of the polygon types on the disc (r759, 14 Nov 2026)

`python -I tools/draw_census.py [--per-map] [--archives]` (stdlib, read-only, about 6 s) walks every room mesh block it
can find and counts the polygon records by type. Block finding: a 4-byte-aligned scan of each `disc/pac4/SC*.bin` for
a 'C'-'N' header (r554's tests, then every chunk walked: ordered x / y / z bounds, every polygon list inside the
file) and for a 'B' header (relocated byte 0, 0x1000 cell offsets each 0 or inside the file, every cell walked);
plus the 12 'B' patch blocks named by the func_8013C414 calls in src/stg (SC02_000 / SC02_003 0x801B6AD0, 8
replacement cells each, set up by the chase boulder A151; SC02_005's nine, 2-12 cells each, set up by the intro
director A320 and applied by A340; SC03_028 0x801E461C, 4 cells, BossSaveSnapshot; docs/actor_families.md), and with
`--archives` a raw scan of `disc/files/*.CD`. Formats as in 6.1 / 6.2.1 / 6.3; vertices are SVECTORs at the block's (or cell's) vertex base
plus the record's byte offsets. A check that the walk reads real polygon records: in all 190,656 records, every
textured type (2, 3, 6, 7) carries a texture-relocation byte (0x24 / 0x2C / 0x26 / 0x2E) in word 0 and no untextured
one does (the untextured carry the GPU codes 0x28 / 0x20); 0 exceptions. The address of a block is the file offset
+ 0x80128158; each block is also checked for a pointer to it in its image (an aligned word, or a `lui` / `addiu` or
`ori` pair).

**What was found.** 'B' 17 blocks in 14 images, 'C' 225 in 113, 'D' 2, 'E' 11, 'F' 2, 'G' 1, 'H' 1, 'I' 1, 'J' 1,
'K' 2, 'L' 1, 'M' 1, 'N' 6. Records per type over all of them:

| letter | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8-15 |
|---|---|---|---|---|---|---|---|---|---|
| B (+ 12 patch blocks) | 21 | 0 | 20,137 | 1,462 | 0 | 0 | 3,591 | 14 | 8: 4, 10: 570 |
| C | 918 | 2 | 104,855 | 3,303 | 149 | 0 | 17,076 | 375 | - |
| D | 204 | 0 | 3,212 | 0 | 24 | 0 | 950 | 0 | - |
| E | 0 | 0 | 2,990 | 0 | 0 | 0 | 618 | 0 | - |
| F | 127 | 0 | 4,638 | 0 | 26 | 0 | 828 | 0 | - |
| G | 0 | 0 | 2,132 | 16 | 0 | 0 | 246 | 8 | - |
| H | 1 | 0 | 1,679 | 259 | 0 | 0 | 1,109 | 48 | - |
| I | 0 | 0 | 74 | 34 | 0 | 0 | 46 | 5 | - |
| J | 0 | 0 | 328 | 16 | 0 | 0 | 20 | 0 | - |
| K | 0 | 0 | 1,504 | 0 | 0 | 0 | 14 | 0 | - |
| L | 0 | 0 | 713 | 0 | 0 | 0 | 28 | 0 | - |
| M | 0 | 0 | 224 | 4 | 0 | 0 | 40 | 0 | - |
| N | 900 | 0 | 11,544 | 324 | 174 | 0 | 3,036 | 36 | - |

* **Type 5 (pushed F3) is never used**, in any block. **Type 1** occurs twice: SC05_011 (Thirstquencher Overlook
  Scene) 'C' 0x80182988, two level F4s, drawn as type 0 (no push in 'C', as the code says). So the odd-type push
  is, in the shipped data, a push of textured polygons (types 3 and 7).
* **The 'B' patch blocks** hold types 2, 3, 6 and 7 (SC02_005's are mostly type 3: its 0x801DF3B4 is 48 type-3
  records and nothing else; 'B' pushes every odd type).
* **The raw archives** (`--archives`): the 140 images are not stored raw in the .CD files (only one 'C' and one 'L'
  header turn up), but **7 more 'N' blocks** do, each 4 times (twice in SC03.CD, once in SC04.CD and SC05.CD): 28
  blocks, the count of the 28 shop-room sub-room maps (type-1 blocks, docs/type1_blocks.md: 7 rooms x 4 chapters,
  loaded behind the village, whose 'N' renderer draws them). ~~Tied by count only~~: **each block is tied to its
  file by r764** (6.4.1: one per room file, named by the room record's +0x94, proven on 12 RAM dumps). One of them
  (the Bakery's) has 68 type-3 and 18 type-7 records. So the type-1 blocks do carry map data: these 'N' blocks, and
  no 'B'-'M' block.

**Odd-type surfaces on other maps (the open row).** The 65 blocks with odd types are listed by the tool (image,
block, count, how many are level, what the letter's renderer does). The shape of each polygon, from its vertices:

| class | level (one y) | vertical (one x or one z) | other | records |
|---|---|---|---|---|
| odd, pushed (the letter's renderer adds the push) | 67.3% | 14.7% | 18.0% | 5,463 |
| odd, not pushed ('G' 3 / 7, 'M' 3, 'C' 1) | 6.7% | 80.0% | 13.3% | 30 |
| even textured (2, 6) | 29.6% | 33.3% | 37.1% | 179,993 |
| even flat (0, 4) | 7.7% | 42.6% | 49.7% | 2,544 |

So the pushed odd types are mostly **level** surfaces, more than twice as often as the ordinary textured polygons:
the floor-layer reading of r737 (a surface drawn 0x80 entries behind its farthest vertex, so an actor standing on
it is never cut by it) fits most of them. Blocks where every pushed odd record is level: SC01_000 (243), SC01_001
(120, r737's pedestal), SC06_018 (191), SC06_032 (127), SC06_033 (72), SC03_121 (32); nearly all: SC02_005's 'B'
block (954 of 1,026), SC03_114 (116 of 140), SC01_008 (179 of 193). (The shape table covers the blocks, not the
patch cells.) Blocks where none is: SC03_112 (145: 83 vertical), SC03_113 and SC05_002 (71
each: 44 vertical), SC05_003 (111), SC02_027 (16 vertical), SC02_028 (10 vertical), SC06_010's 12 'C' blocks and its
'J' block (16 each, all vertical), and the 4-record sets of SC03_002 / SC03_125 / SC04_020 / SC05_018 (four
blocks with the same 1,460-record count and type mix). The pushed vertical ones would be wall surfaces drawn behind the wall in front of them (a sign or
panel against a wall, for example): **Unofficial** reading, **Unconfirmed** on screen (look only: needs a capture
of one of those rooms with an actor beside the surface; SC06_010's 16-record sets are the cleanest case). The
not-pushed odd records match what their renderer does with the flag instead: 'M''s four type-3 records are not level
(the four blended wall pieces of 6.2.1) and 'G''s 24 are all vertical (the relaxed GTE error test, 6.2.1).

**r798 (16 Nov 2026): SC03_112's and SC05_003's pushed sets on the GPU (PC port runs; a helper agent's OT walk, one
packet re-checked by hand).** Warps 3 ACTION 28 (map 0x3048, loaded at v3411) and 5 ACTION 4 (0x306E, v3051), a short
walk, RAM / VRAM / GPU log every 20th vblank to v6001 (deleted). Both rooms' blocks are letter 'C' (SC03_112
DrawChunkedMesh200 = func_sc03_112_8017C294, block 0x80189938; SC05_003 func_sc05_003_8017BEBC, block 0x80186600). 'C'
has no grey ramp, so each packet's depth was recovered from a per-frame linear fit SZ = a . v + d over the frame's
unpushed (even-type) records (residuals within +-2.6 SZ), the packets being matched to the block's records in allocation
order by their texture words (the screen corners agreeing at shared vertices). **Every pushed odd record drawn sits at
(max SZ + 0x200) >> 2, 128 OT entries behind its unpushed slot**: SC03_112 10-17 records a frame in 103 frames, SC05_003
10-15 in 121 frames, no exception (e.g. SC03_112 v5201: record 0x80192680, packet 0x80090520 `2C808080 ... 79C0C01F ...
008CCF1F` at entry **358** of 997, the fit giving 230.9 unpushed / 358.9 pushed; the entry re-checked by walking the OT from
0x800AE60C). What they are: 143 of SC03_112's 145 and 98 of SC05_003's 111 odd records form a band of wall at y -128..-64
directly under each room's water surface (blocks 0x8019AA74 / 0x8019B394 at y -128, drawn semi-transparent and wavy by
func_sc03_112_8017D174 / func_sc05_003_8017CD9C); in every frame 2-8 water quads overlap a pushed band in screen box and
sit between its two slots (e.g. SC05_003 v5601: band record 0x80194F08 at entry 501 against 373.3 unpushed, water packet
0x800908C0 `2E808080` (CLUT 0x7800) at 394), so **the push puts the wavy water over the wall below the water line**.
Reading (**Unofficial**; seen as packets only, no screenshot): the pushed vertical sets keep the underwater wall behind
the water surface. Musashi was never beside one (no change for him).

**r782 (15 Nov 2026): SC06_010's 'J' set on the GPU (PC port runs).** What the 16 records are (static, the block 0x8018B2C0
walked as draw_census.py does): **one ring of 16 POLY_FT4 in the plane z = 13680**, round the axis (0, -1152), inner corners
at radius about 300 and outer about 400 (e.g. record 0x8018D4D8: (0, -1456) (-116, -1433) (0, -1553) (-154, -1523)), all with
the same texture words (uv0 / CLUT 0x7A00E840, uv1 / page 0x008AE87F, uv2 / uv3 0xFB7FFB40). The same plane holds 16
type-2 FT4s (8 with uv0 / CLUT 0x7A80D445, 8 with 0x7A80D95F) and nothing else of that block. Runs (this card's worktree
build, no change; As Shipped, deterministic, muted): warp 6 ACTION scene 3 (0x3083, loaded at vblank 3153); R6 stood at the
entrance, R8 held Up with Cross every 64 vblanks and walked down the tube; RAM, VRAM and GPU log every 20th vblank
(range_006 / range_008, deleted after this write-up). Method: walk the world OT in the RAM dump from its head 0x800AE60C
(997 entries) and note each packet's entry (slot). The 'J' renderer (func_sc06_010_8017BEBC, src/stg/sc06_010.c) adds the
push **before** both the grey and the slot (`g.z = zb + 0x200` for type 3; `v0 = 0x80 - (zz - 400) / 24`; slot `zz >> 2`),
so a pushed quad's grey and slot agree with each other; the push shows only against an unpushed neighbour at the same
depth. From the entrance (R6 v4001, R8 v3701-v6001) every faded packet's slot equals its grey's depth >> 2 (one grey-0x40 FT4
per frame with CLUT 0x4CD6 / page 0x1A does not, and is no 'J' record: J's textures use CLUT rows 480-490 only) and the
ring is not drawn (too far down the tube; the quads with its texture words there are the block's three type-2 users of
the same texture record, unpushed). **R8 v6201** (Musashi well down the tube): the ring's quads sit at **slots 827-844, grey
4-7**; the plane's type-2 quads, beside them on screen (e.g. ring x 0..21, y -59..-42; type 2 x 0..16, y -65..-56), sit at
**slots 699-712, grey 26-29**. The gap is **+128 slots** (0x200 >> 2) and **-21 / -22 grey** (0x200 / 24 = 21.3), pair by
pair. At v6101 the ring's 14 quads sit at slots 891-918 (grey 0, the floor) against the type-2 quads' 762-792. So the code's
+0x200 push on 'J' type 3 is **proven on the GPU**: the ring is linked 128 entries behind the plane it lies in, so where they
overlap the type-2 quads are drawn over it, and the fade makes it 21 grey levels darker than the plane round it. On screen
(R8 shots at 6100 / 6200) the far end of the tube is near black at that distance and the ring cannot be told apart by eye.
Reading: a ring set into (drawn under) a wall plane, as a decal or inset would be: **Unofficial**, and why the designers
pushed it is **Unconfirmed**.

**'B' types 8-15 (the open row).** 574 records in **one** 'B' block: SC01_005 (Musashi's bedroom) and its copy
SC01_006, both at 0x801A29F4: 63 cells, 285 records of type 10 (in 62 cells) and 2 of type 8 (cell 2336), beside 192
of type 2 and 134 of type 6. DrawGridMesh would skip them (`switch (w & 0xF)` has no case 8-15). But that block is
**never loaded**: no word and no `lui` / `addiu` pair in either image names 0x801A29F4, and both images have only the
'C' renderer in their table (slot 0, 'B', is zero: r532's tsv), so a loaded 'B' block would call address 0. The 15
'B' blocks that are named in their images (and the 12 patch blocks) hold types 0, 2, 3, 6, 7 only. So **no shipped
room draws a 'B' cell of type 8-15**; the bedroom's unused grid block is left-over data (**Unofficial** label;
**Unconfirmed** what type 10 meant to the tool that wrote it, since no code reads it; type 10 & 7 = 2, textured quads,
and the records carry texture-relocation bytes as type 2 does).

**Other findings of the census.**
* **Polygons their renderer never draws** (correction to 6.2.1's "no block holds any"): the two 'F' blocks hold 135 +
  18 F3 / F4 records and the 'H' block one F4; 'F' and 'H' draw textured types only. 'D' holds 228 F3 / F4, which
  'D' does draw.
* **The four "Game Over Bed" images** (SC03_003, SC03_126, SC04_021, SC05_019) have a 'B' renderer in slot 0 but no
  'B' block in the image and none in the raw archives: their slot 0 has nothing on the disc to draw (**Unconfirmed**
  whether a compressed chunk holds one; the scan reads raw data only).
* **SC03_111** (Misteria Flower Cave) 'C' 0x801A95BC (267 records) has no pointer in its image. ~~Unconfirmed
  whether it is loaded through a computed address~~: **settled by r764** (6.4.1): nothing on the disc loads it.

#### 6.4.1 The shop-room 'N' blocks by file, and SC03_111's spare 'C' block (r764, 14 Nov 2026)

`python -I tools/draw_census.py --subrooms [--ram]` (about 1 s; `--ram` reads the dumps) and `--unref` (under 1 s).

**The 28 'N' blocks, one per shop-room file.** The tool walks every type-1 chunk of the 28 sub-room entries with
tools/type1_census.py's chunk reader (read-only use), scans each body for 'N' headers (6.4's tests), and places the
body at the host's `GetStageLoadAddr` word (type1_census `load_addr`; docs/type1_blocks.md). Each of the 28 files
holds **exactly one** 'N' block, always in **chunk 2 of 3** (the type-1 chunk). The chain that loads it, every step
read from the disc:

1. The host village's room table (`GetRoomRecord`, engine_80144B9C.c: `D_8018D220[id & 0xFFF]` for the 28 sub-room
   ids; the table is at SC03_001 0x8018D220, SC03_124 0x8018A8C4, SC04_018 0x8018CF28, SC05_017 0x8018CEEC) names a
   room record inside the room's block, at index `map & 0xFFF`.
2. That record's **+0x94** (`LoadRoomMesh`'s first block, 6.1) is the one aligned word in the body that names the 'N'
   block; +0x98 is 0, +0x9C (the depth value) is 0xED4 in all 28, and +0xC8 (the doorways) points inside the body.
3. `LoadRoomMesh` maps 'N' to mode 0x10, and slot 0x10 of each host's renderer table (SC03_001 0x8018D4BC,
   SC03_124 0x8018AB60, SC04_018 0x8018D1C4, SC05_017 0x8018D188) is **0x8017C710, DrawChunkedMesh** (6.3, the
   village copy with the +0x20 push). In all four hosts it is the only slot filled.

| room | chapter 1 (host SC03_001) | chapter 2 (SC03_124) | chapter 3 (SC04_018) | chapter 4 (SC05_017) | chunks | bytes | types |
|---|---|---|---|---|---|---|---|
| Toy Shop | SC03_073 0x2013 0x801F12D4 | SC03_132 0x2055 0x801E4434 | SC04_024 0x207A 0x801E999C | SC05_023 0x2097 0x801EF82C | 12 | 0x1EB8 | 0:2 2:186 6:9 |
| Bakery | SC03_074 0x2015 0x801F0D20 | SC03_133 0x2056 0x801E3E88 | SC04_025 0x207B 0x801E93F0 | SC05_024 0x2098 0x801EF278 | 12 | 0x2028 | 2:150 3:68 6:9 7:18 |
| Grocery | SC03_075 0x2016 0x801F1780 | SC03_134 0x2057 0x801E4910 | SC04_026 0x207C 0x801E9E50 | SC05_025 0x2099 0x801EFCD8 | 12 | 0x1D34 | 2:191 6:11 |
| Inn | SC03_076 0x2017 0x801F4588 | SC03_135 0x2058 0x801E76F0 | SC04_027 0x207D 0x801ECC58 | SC05_026 0x209A 0x801F2AE0 | 15 | 0x1A9C | 0:5 2:183 6:11 |
| Pawn Shop | SC03_077 0x2018 0x801F1C34 | SC03_136 0x2059 0x801E4D7C | SC04_028 0x207E 0x801EA2E4 | SC05_027 0x209B 0x801F016C | 12 | 0x1FC8 | 0:4 2:197 6:22 |
| Church | SC03_078 0x2019 0x801F06E8 | SC03_137 0x205A 0x801E3850 | SC04_029 0x207F 0x801E8DB8 | SC05_028 0x209C 0x801EEC40 | 16 | 0x1638 | 2:153 6:30 |
| Bar | SC03_079 0x201A 0x801F13D8 | SC03_138 0x205B 0x801E488C | SC04_030 0x2080 0x801E9AA8 | SC05_029 0x209D 0x801EF930 | 12 | 0x30C4 | 0:6 2:335 6:25 |

Each cell is file, map id, RAM address of the block. The four copies of each room's block are **byte-identical over
the whole block** (header, chunks, polygons, texture records, vertices; only the address differs), as r439 found
for the rooms' collision maps (docs/collision.md 2.1); the room names and the block-to-room order are the same as
there. The Bakery is the room whose block holds the pushed types (68 type-3, 18 type-7): the village renderer pushes
them +0x20.

**Proof against RAM** (`--ram`): every 2 MB dump under disc/dumps taken in a sub-room (map id at 0x800B9A08), with the
room mesh player (village D_801EF3F8, moved per image by tools/engine_addrs.py) read: **12 of 12** have player +8 =
that room's 'N' block, +0x68 = mode 0x10, the player shown (+0 = 0), and the block in RAM relocated ('N', flag 1, the
disc's chunk count). They cover six rooms of chapter 1 (Toy Shop, Bakery, Grocery, Inn, Church, Bar) and the
chapter 4 Inn. The Pawn Shop and chapters 2 / 3 have no in-room dump; their tie rests on the disc chain above (the
same code path, byte-identical blocks).

**SC03_111's 'C' block 0x801A95BC: nothing loads it (settled on the disc; no dump of the map exists).**
* **No reference of any kind.** No aligned word and no `lui` / `addiu` (or `ori`) pair in the image names any
  address inside the block (0x801A95BC-0x801AB54C). No raw 4-byte copy of 0x801A95BC is in the image, in any
  disc/files archive (LIST.CD, MAIN.CD, SC01-SC07.CD) or in SLUS_007.26, so no script, table or record built from
  data can hold it either.
* **No loader call from the image's own code.** Every `jal` to LoadRoomMesh, ReloadRoomMesh, StartSeqBlock,
  RelocateSeqBlock, RelocateSeqBlockPair, LoadSeqBlockB and RelocateSeqBlockB in SC03_111 is inside the shared engine
  (2 / 0 / 12 / 1 / 0 / 0 / 3). The image's own code (from 0x8017BE9C) calls none of them, so there is no
  actor-driven mesh like SC06_000's (6.2.2) and no mesh swap like SC03_103's (6.2.3). The engine callers take the
  block from the room record, and the one record (0x80188BA8) names the other block: **+0x94 = +0x98 = 0x801890E4**
  (183 chunks), +0x9C = 0xED4, +0xA8 = 0x80181324 (the room hook). A computed address would need a base plus an
  offset, and no word names any address in the block to start from.
* **Where it sits.** The image's data runs: the room mesh 0x801890E4-0x801925D0, the collision map (+0x88 = +0x8C)
  0x801925D0-0x801A95BC, **this block 0x801A95BC-0x801AB54C**, then the prop, actor and effect handler tables that the
  record's +0x64 / +0x60 / +0x5C name (0x801AB54C, 0x801AB74C, 0x801AC6BC). So it is packed with no gap at either
  end, where a room's own data goes: linked into the image as room data and then never named.
* **What it is.** 40 chunks, 267 records (250 type 2, 17 type 6), every chunk's y bounds 0: one **level plane at
  y = 0**, x and z within -1719..1719 (the room mesh spans x -1849..1849, y -976..0, z -2048..1889). No copy of its
  bytes is anywhere else on the disc (unlike SC03_103's 'K' block, a copy of SC03_116's mesh).

So as shipped the block is left-over data that no code path reaches. **Unofficial**: the label "spare" or
"left-over", and the reading that it was an earlier or alternative floor for the cave. **Unconfirmed**: what it would
look like (it is never drawn, so only an export of the block could show it), and, as for every static claim here, a
load through an address the code builds at run time from nothing on the disc (none seen in the engine's mesh paths).

#### Matching history (r11 to r159)

**MATCHED and placed (r159, 22 Oct 2026)**: `src/stage/sc03_001.c`, 952 / 952, `make check-stage` OK. The source is
r144's `func_sc01_000_8017BEBC` (the 111-copy renderer) with `+ 0x20` instead of `+ 0x200` in the three odd-type depth
adds (r152). Its five clones (SC03_124; SC04_015, SC04_018, SC04_019, SC05_017) belong to the stage streams. The notes
below are the history of the 15 Oct attempt; where they disagree with the placed C, the C wins.

2026-10-15: a full C version, `build/work/dcm.c` (in the hourly backups), compiled to 950-952 instructions against
952, with the same 0x210 frame, the same spill slots (0xE0, 0xE8, 0x1E0) and the same loop and switch structure.
Parked (Fable, 15 Oct evening) at 8 instructions of structure and about 190 of register choice. What the source turned
out to be:
* Locals: a 3-word temporary (`gte_stsxy3c` target), `SVECTOR box[8]`, `SVECTOR scr[8]`, the `MATRIX` for GsGetLs,
  then **one struct** holding the GTE-stored values `{ zbox, flag, z, sz0, sz1, sz2, sz3 }`: as separate scalars gcc
  2.7.2 moved the load of `z` above the packet stores.
* The polygon pointer is read before the count (gcc's second chunk pointer at +12, as in the original).
* Range tests: the first two values compared as `a > b`, the third as `c > hi`, a fourth (quads) low end first; the
  chunk's two halves merged into separate `s32` variables and tested as `(s16)hi < -160 || (s16)lo > 160`.
* Depths: triangles `if (sz0 > sz1) { m = sz0; if (m < sz2) m = sz2; } else { m = sz1; if (m < sz2) m = sz2; }`
  (`sz0 > sz1`, not `sz1 < sz0`: the direction decides which register holds m); quads `za = max(sz2, sz3); zb =
  max(sz0, sz1); z = max(zb, za)`. The flat quad computes the OT address before storing the colour word.
* The textured quad reads the last texture word once and stores its halves to uv2 and uv3.
* The box corners: declared `volatile`, so the 16 x / y stores stay per corner as in the original; the box reads reuse
  two variables (`x = c[0]; y = c[1]; x0 = x; x1 = x >> 16; ...`).
* The r11 m2c draft is `build/work/draw_m2c.c`; splat marks the function "handwritten" only because of the GTE
  instructions: it is ordinary GCC output (0x210 frame, all saved registers).

## 7. The stage engine's 3D helpers (shared draw path)

The stage engine draws no 3D geometry of its own besides the room mesh dispatch; it feeds the EXE's model draw and
projects points for sprites and effects. Roles and names from r272 (docs/names_stage_engine_proposals.md), checked
against engine.c for this doc:

| address | name in src / r272 | role for the renderer |
|---|---|---|
| 0x80129CF8 | UpdateCamera | the frame's view: GsSetRefView2L, then Work.wsm = the world-to-screen matrix (every 3D helper below loads it) |
| 0x8012B2CC / 0x8012B370 / 0x8012B414 / 0x8012B4B8 | UpdateModelZYX / YXZ / Rot / XZY | an actor's model matrix (+0x34) from its rotation in that order, translation = position + offset, model flags \|= 1 so DrawTmdModel uses it as is (662 + 124 + 17 + 2 stage calls) |
| (engine.c) | SyncModelPos | translation only, flags \|= 1 |
| 0x8012EFB8 / 0x8012EF34 / 0x8012EF70 | ProjectPoint / ProjectPointZ / ProjectPointOtz | RTPS of a point through Work.wsm: the GTE flag / xy and SZ / xy and SZ / 4 (an OT entry, as in section 2.3) |
| 0x8012E32C | LoadWorldScreenMatrix | SetRotMatrix / SetTransMatrix with Work.wsm |
| (engine.c) | IsOnScreen | RTPS of an actor's position through Work.wsm; 1 when within a packed x / y half size (no behind test, unlike IsPointOnScreen) |
| 0x8012EA90 / 0x8012EC04 | GetPartLocalMatrix / GetPartWorldMatrix | a part's matrix from the model's pose (8- or 12-byte records, the same decoding as CalcPartMatrices*), composed with the model matrix: attachments and hand points |
| 0x8012F038 / 0x8012F14C | WorldToLocal / LocalToWorld | points between a matrix's frame and the world |
| 0x801330E0 | PushAlongView | a point moved along the view axis through Work.wsm and back |
| (engine.c) | SetMapOtDepth | the per-map OT depth limit (section 2.3) |
| (engine.c) | ClearWorkA3E1 | Work+0xA3E1 = 0: every model and sprite group drawn again |

## 8. EXE math and world-space primitive helpers

The math helpers that build the matrices the renderer uses are r274's "Math, angles and GTE helpers" (RotateMatrixX /
Y / Z with NormalizeMatrix, SetIdentityRot, SetScaleMatrix, SetMatrixTrans, RotateMatrixBy / ByZYX, the vector
rotations); their roles there stand. The ones with a direct part in drawing:

| address | name in src | role |
|---|---|---|
| 0x80017E8C | SetGteLocalMatrix | GTE rotation / translation = Work.wsm x the given matrix (CompMatrix): every DrawPrim* with a matrix calls it |
| 0x800123F0 / 0x80012558 / 0x800126C4 | (r274 RotateMatrixZ / Y / X) | multiply a matrix by an axis rotation on the GTE (RTIR per column), then NormalizeMatrix; CalcPlayerPartMatrices turns Musashi's root with RotateMatrixY |

The **DrawPrim** family (c23F0 0x80016A7C-0x80017930, roles and names in r274 "Screen primitives") draws one primitive
from a shape record. With a matrix it is a 3D drawer: SetGteLocalMatrix, RotTransPers3 / 4 (or RTPT + RTPS + AVSZ4
for GT4), skip on FLAG & ~0x1000, depth = the OTZ clamped to 0xFFF, linked with AddPrimFlat / AddPrimTextured or their
dither-off forms (section 2.4); without one ("Screen") it is 2D. The 3D cores: DrawPrimLineG2 (0x80016A7C), LineG3
(0x80016B60), LineG4 (0x80016C28), FT3 (0x80016D78), FT4 (0x80016F18), F3 (0x80017168), F4 (0x80017294), G3
(0x800173DC), GT3 (0x8001751C), G4 (0x80017778), GT4 (0x80017930); their callers are effects (glows, trails:
DrawPrimG4Mtx alone has 244 stage calls), which r537 describes.

## 9. Pointer: 2D, sprite, HUD and effect drawing

2D, sprite, HUD and effect drawing are in `docs/draw_2d.md` (r537, wave 6): the sprite pool and DrawAllSprites /
DrawSprite with g_SpriteDrawFuncs (0x8006351C), the shape and tile drawers, the BG layers (DrawBgLayers), message
windows, fades, the front OT and Work.pool users, and the effect callers of the DrawPrim family. This doc keeps only
model kinds 3 and 4, which go through the model table.

## 10. Name proposals (Unofficial, for r396)

New in r532 (everything else cited above is an earlier batch's or already in src):

| address | current | proposed | why |
|---|---|---|---|
| 0x8001EFE0 | func_8001EFE0 | DrawSpriteModel | model kind 3's handler: sprite frames at a projected 3D point |
| 0x8013B83C | func_8013B83C | LoadRoomMesh | replaces r272 InitSeqPlayer: it loads the room's mesh block into the room mesh player |
| 0x8013B7F4 | func_8013B7F4 | ReloadRoomMesh | replaces RestartSeqPlayer |
| 0x8013B568 | func_8013B568 | SetRoomFrameHook | replaces SetSeqHook |
| 0x8013BCDC | RunSeqHook | RunRoomFrameHook | the room's per-frame hook after the mesh |
| 0x8013BC7C | func_8013BC7C | DrawRoomMesh | replaces RunSeqState: the per-image renderer by block mode |
| 0x8013C938 | StartSeqPlayer | HideRoomMesh | sets the flag the stage frame tests before drawing |
| 0x8013C964 | StopSeqPlayer | ShowRoomMesh | clears it |
| 0x8013B598 / 0x8013B6A0 / 0x8013B7AC | SetSeqPoint / SetSeqPointN / ClearSeqPoint | SetMeshLight / SetMeshLightRadius / ClearMeshLight | the renderers' light spots (r451) |
| 0x801EF3F8 | D_801EF3F8 | g_RoomMesh | the player object (type `SeqPlayer` -> `RoomMesh`); +0 `hidden`, +0x68 `mode` |
| 0x801EF460 | D_801EF460 | (field g_RoomMesh.mode) | the block mode |
| 0x8018D4BC (village) | D_8018D4BC | g_RoomMeshDrawFuncs | per-image table, address relinked per image |
| 0x801EF328 | D_801EF328 | g_MeshLights | the four light spot records |
| 0x8012CFA8 | func_8012CFA8 | DebugDrawMarker | a red marker triangle at a point |
| 0x801287B8 | func_801287B8 | StageFrame | the stage's per-frame update and draw (camera, actors, effects, room mesh, messages) |

New in r554 (room renderer kinds, section 6.2.1; all **Unofficial**; the addresses are each image's own and differ
between copies):

| address (image) | current | proposed | why |
|---|---|---|---|
| 0x8017C59C (SC01_080; 'B' copies) | func_<img>_8017C59C etc. | DrawGridMesh | 'B': the 64 x 64 cell grid walked over the ground footprint |
| 0x8017BEBC (SC01_080) | func_sc01_080_8017BEBC | GetGroundViewRect | the screen rectangle's footprint on y = 0 |
| 0x8017C294 (SC01_080) | func_sc01_080_8017C294 | ViewToMeshPoint | transposed rotation applied to (point - translation) |
| 0x8017C338 (SC01_080) | func_sc01_080_8017C338 | RayToGround | ray from the camera through a point, met with y = 0, clamped |
| 0x8017C530 (SC01_080) | func_sc01_080_8017C530 | ProjectNoOffset | RotTransPers with the geometry offset at 0 |
| 0x8017C730 (SC03_010, SC03_013) | func_<img>_8017C730 | DrawBandMeshDepthClut | 'D' |
| 0x8017D960 (SC03_089 ...) | func_<img>_8017D960 | DrawLitMapFaces | 'E' (r451's proposal, kept) |
| 0x8017F590 / 0x8017F5B4 (SC02_031) | func_sc02_031_8017F590 / _8017F5B4 | DrawPlayerLightMesh / DrawPlayerLightMeshBody | 'F' entry and body (SC03_006: 0x8017F4EC / 0x8017F510) |
| 0x8017CE58 (SC03_092) | func_sc03_092_8017CE58 | DrawDepthFadeMesh12 | 'G' |
| 0x80180FE4 (SC02_011) | func_sc02_011_80180FE4 | DrawTexturedChunkedMesh | 'H' |
| 0x8017E35C (SC06_000) | func_sc06_000_8017E35C | DrawDepthClutRowMesh | 'I' |
| 0x8017BEBC (SC06_010) | func_sc06_010_8017BEBC | DrawDepthFadeMesh24 | 'J' |
| 0x8017BEBC / 0x8017BF14 (SC03_116) | func_sc03_116_8017BEBC / _8017BF14 | DrawSpotLitMesh / DrawSpotLitMeshBody | 'K' entry and body |
| 0x8017BEBC (SC03_107) | func_sc03_107_8017BEBC | DrawDepthFadeMesh24L | 'L' (output as 'J') |
| 0x8017C954 (SC06_029) | func_sc06_029_8017C954 | DrawBlendQuadMesh | 'M' |
| 0x8017C8D0 / 0x8017C8E4 / 0x8017C918 (SC06_029) | func_sc06_029_* | SetMeshBlendFull / StepMeshBlendDown / StepMeshBlendUp | 'M''s level D_801DCCA0 (0x80, -4, +4) |

## 11. Open questions

* (Closed by r554: all 13 room renderer kinds are read, section 6.2.1; SC03_116's 0x8017BEBC is the 'K' entry and
  0x8017BF14 its body.)
* ~~SC03_103's 'K' block with a zero table slot~~: closed by r751 (6.2.3: only arrival by entrances 4 / 5 loads it, no
  doorway record on disc leads there, and the block is a copy of SC03_116's mesh). ~~The look of the 'D' / 'I' depth
  CLUTs~~ (r550). Left: 'M''s type-3 blend on screen (**Unconfirmed**, needs a capture of SC06_029 entered normally);
  ~~'B' types 8-15~~: closed by r759 (6.4, `tools/draw_census.py`): no loaded 'B' block holds them; the only 574
  records are in SC01_005 / SC01_006's unreferenced grid block. ~~Which shop-room file holds which 'N' block~~ and
  ~~what loads SC03_111's 'C' block~~: closed by r764 (6.4.1, `tools/draw_census.py --subrooms --ram` / `--unref`):
  one 'N' block per room file, named by its room record's +0x94 (12 of 12 in-room dumps agree); SC03_111's second
  block is named by nothing on the disc and no loader call outside the engine exists, so it is left-over data.
* ~~D_80072784[4] as the GPU type~~: closed by r751 (4.4: the word is libgpu's printf pointer, the byte read is printf's
  code byte 0x21 in every dump, so the newer-GPU branch is dead; only func_8001EFE0 has the test).
* The packet buffer's high-water mark: measured by r550 for the scenes captured (draw_2d.md 12.2); heavy boss scenes
  **Unconfirmed** (need a capture there).
* ~~The GTE ZSF3 / ZSF4 values~~: closed by r751 (2.3: InitGeom sets 0x155 / 0x100, the only writes on disc).
* ~~Which models set attr 0x10000 / 0x20000~~: closed by r759 (5.2): two, both kind 5 and lit, both the same 80-
  primitive G3 / G4 mesh: the Water Scroll barrier (ovl32, 0x40010000, texture 0) and the Fire Scroll aura (ovl33,
  0x50020000, texture 1); no stage, engine or EXE model. Left: what they look like on screen (**Unconfirmed**, look
  only: needs a capture of Musashi with either technique active), and attribute values copied from data, which the
  constant read cannot rule out (**Unconfirmed**, none seen).
* ~~Which map surfaces use the odd-type depth push~~: closed as far as static data goes by r759 (6.4): types 3 / 7 in
  65 blocks of 50 images (type 5 never, type 1 twice), listed per block by `tools/draw_census.py`; 67% of the pushed
  records are level (the floor layer of r737's pedestal), 15% vertical, 18% other. What the vertical and other
  pushed surfaces are on screen is **Unconfirmed** (look only: a capture of SC06_010, SC03_112 or SC05_003 with an
  actor beside one). **r782: SC06_010's 'J' set proven on the GPU** (6.4 r782: a ring of 16 vertical quads linked +128 OT
  entries behind the type-2 quads of its own plane, 21 grey levels darker); SC03_112 / SC05_003 and the 'C' sets not
  captured.
* Notes for asset work, kept from r11: the per-chunk box is what the map exporter's chunk directories are, and the
  8-case type switch is the set of polygon kinds the map packets hold; the odd types are depth-pushed layers (above),
  which the map exporter should keep as a flag rather than read as semi-transparency. r759 (6.4) adds two for the
  exporter: the 'F' and 'H' blocks hold flat F3 / F4 records the game never draws (an as-shipped export drops them),
  and SC01_005 / SC01_006 hold an unused 'B' grid block with type-10 records that no room loads.
