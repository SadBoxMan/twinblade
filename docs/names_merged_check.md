# r277: sample check of the r276 high-confidence names

Research only. Nothing in src/, include/, the configs, the symbol files or the `docs/names_merged/` batches was
changed. Input: `docs/names_merged/{exe,engine,stage,abil,ovl}_H.csv` on research/r276-names-merged. Output: this
file and `docs/names_merged_fixes.csv` (address, scope, proposed, corrected, reason; one row per WRONG or VAGUE
verdict).

## Summary

| batch | sampled | CORRECT | VAGUE | WRONG | UNSURE | WRONG % (95%) | VAGUE % (95%) | recommendation |
|---|---|---|---|---|---|---|---|---|
| exe_H | 60 | 58 | 1 | 0 | 1 | 0.0 (0-6) | 1.7 (0-9) | (pending) |

Not yet checked: engine, stage, abil, ovl.

## Method

* **Seed 277.** For each batch the generator is `random.Random("277:<batch>")` (Python 3 string seed, so the
  stream is fixed), e.g. `random.Random("277:exe")`.
* **Eligible rows.** A function row is eligible when its current name has a C definition in `src/` whose body is
  3 lines or more (the `{`..`}` span, so `INCLUDE_ASM` rows and one-line wrappers drop out). A data row (`D_...`)
  has no body; it is eligible when its current name occurs at least twice in `src/` (so its uses can be read).
* **Weighting.** Each row's evidence text was read from the source card's doc (the `source` column, `git show` of
  that card's branch). A row whose evidence is only a comment citation ("e.c comment", "struct comment", and
  similar, under 120 characters) gets weight 0.35, every other row weight 1. 60 rows per batch were drawn by
  weighted sampling without replacement (Efraimidis-Spirakis: key = u ^ (1 / w), u from the seeded stream in
  file order, the 60 largest keys), then sorted by address. Comment-only rows are therefore present but under-
  represented; the per-batch line says how many were eligible and how many were drawn. Only engine has many
  (94 eligible); see its section for how this skews its rate.
* **Judging.** For each row: the function body (over 34 lines: the first 28 and last 6, plus whatever else was needed, read in src/) (or for data, its reads and writes) and up to three call
  sites, with every callee shown under its own proposed name so the row can be checked against its neighbours.
  The question asked was "does the name say what this code does?", trying to refute it first:
  CORRECT (it does), VAGUE (not wrong, but a clearly better name exists; given), WRONG (misleading; the right
  name given), UNSURE (the C in reach cannot settle it). A name that only repeats a comment still had to fit the
  code. A name that follows its family's convention (DrawPrim*, Seq*, Pkg_Name) was judged on its own word.
* **Rates.** Per batch, the share of the 60 with a 95% Wilson interval. 60 rows gives a wide interval
  (0 of 60 still allows up to 6%); the interval is the honest part.

## exe_H.csv

466 rows, 378 eligible, 60 sampled (1 of them comment-only evidence; 3 comment-only rows were eligible).

| # | address | current | proposed | verdict | reason | better name |
|---|---|---|---|---|---|---|
| 0 | 0x800123F0 | func_800123F0 | RotateMatrixZ | CORRECT | Rz from rsin/rcos, multiplied into m with gte_rtir, then NormalizeMatrix; callers build Z-Y-X model matrices |  |
| 1 | 0x80012CB8 | func_80012CB8 | EaseValueStep | CORRECT | returns the step (0 when equal); EaseValue adds it to a; stage callers do `x += step` |  |
| 2 | 0x80012D0C | func_80012D0C | EaseValueStepRec | CORRECT | recursive worker: d / c, halves c up to 4 times when the step rounds to 0 |  |
| 3 | 0x80015A50 | func_80015A50 | VecToSVecAlt | CORRECT | s32[3] -> s16[3]; no callers, same body as VecToSVec |  |
| 4 | 0x80016638 | func_80016638 | AddDrawModeAbr | CORRECT | 8-byte 0xE1 draw-mode packet with (abr << 5) at OT z; every caller guards abr < 4 |  |
| 5 | 0x80016714 | func_80016714 | ZeroFill | CORRECT | byte head, word middle, byte tail zeroing; ResetSystems / InitPad clear structs with it |  |
| 6 | 0x8001751C | func_8001751C | DrawPrimGT3 | CORRECT | POLY_GT3 filled from a record, RotTransPers3 when a matrix is given; two wrappers pass 0 / m |  |
| 7 | 0x80018194 | func_80018194 | AddPrimTextured | CORRECT | sets the semi-transparent code bit from flag 0x40000000, clamps z, AddPrim; called by the textured DrawPrim* family |  |
| 8 | 0x8001AAD0 | func_8001AAD0 | RequestXaClip | CORRECT | n -> g_FileTable[9 + n], RequestLoad kind 3; stage callers pass (1, 0x4331) as clip codes |  |
| 9 | 0x8001B0D4 | func_8001B0D4 | XaClipStep | CORRECT | PlayXa then polls GetCdAudioState to the end; LoadQueueStep state 5 |  |
| 10 | 0x8001B394 | func_8001B394 | BgmPackStep | UNSURE | stores the arg, runs the impl, returns a flag; LoadQueueStep state 2. "Bgm" cannot be checked from these lines (kind 2 = pack load); keep, but the Bgm part rests on the impl |  |
| 11 | 0x8001BB60 | func_8001BB60 | InitWipeBars | CORRECT | 30 TILEs at y = 8i via AddWipeBar, count 0; ScreenWipeStep step 2 |  |
| 12 | 0x8001BDA0 | func_8001BDA0 | ShutdownSystems | CORRECT | ShutdownSound, ResetGraph(3), PadStopCom, StopRCnt, CdInit, ResetCallback, StopCallback; no callers |  |
| 13 | 0x8001C00C | func_8001C00C | DrawModelsAndSprites | CORRECT | unless Work+0xA3E1 == 1: DrawAllModels then DrawAllSprites; main frame loop |  |
| 14 | 0x8001C044 | func_8001C044 | ClearObjectPools | CORRECT | zeroes 0x100 x 0x38 and 0xC0 x 0x84 Work pools and the preset count; mode transitions call it |  |
| 15 | 0x8001C97C | func_8001C97C | MapPartsTmd | CORRECT | GsMapModelingData(part + 4) for each entry of a 0-terminated list; stage callers then SetModelCullBox |  |
| 16 | 0x8001D0F4 | func_8001D0F4 | PartShowAll | CORRECT | clears bits 24-30 of every entry (the PartShow mask); no callers |  |
| 17 | 0x8001FB8C | func_8001FB8C | DrawModel | CORRECT | type 1, kind < 9, +4 >= 0: g_ModelDrawFuncs[kind](o), count++; DrawAllModels calls it per pool |  |
| 18 | 0x8001FC08 | func_8001FC08 | DrawTmdModel | CORRECT | GsGetLws, cull, per-part GsSortObject4 / preset sorters; stage draws an object's model through it |  |
| 19 | 0x80021008 | func_80021008 | ApplyModelLights | CORRECT | three ApplyLight calls from a 3 x 0x10 record; DrawTmdModel only |  |
| 20 | 0x8002374C | func_8002374C | DrawPrimList2D | CORRECT | walks 0x1C records of TILE / POLY_G4 / POLY_G3 with a DR_MODE each, offset by +8 - +0x2E |  |
| 21 | 0x80024448 | func_80024448 | SortTransObjectLit | CORRECT | switch over TMD primitive runs calling the *Lit / *GradLit drawers with the normals |  |
| 22 | 0x80025EB8 | func_80025EB8 | DrawPolyFT4Lit | CORRECT | POLY_FT4 from TMD FT4 runs (0x20 bytes in, 0x28 out); case 0x2C of the lit dispatch |  |
| 23 | 0x80028488 | func_80028488 | ClearLight | CORRECT | light id < 3: rgb 0, direction (0, 0, 0x64), ApplyLight; no callers |  |
| 24 | 0x8002850C | func_8002850C | SetAmbientColor | CORRECT | stores r g b in D_800AE7E0.. and GsSetAmbient; Init3DScene and stage fades call it |  |
| 25 | 0x800285CC | func_800285CC | EnableFog | CORRECT | GsSetFogParam(dqa -0x106, dqb 0x01F40000) + GsSetLightMode(1); no callers |  |
| 26 | 0x80029044 | func_80029044 | ClearFlags | CORRECT | 64 flag bytes (512 bits) to 0; ResetGameState / ResetGameProgress / ApplyGameOverRule |  |
| 27 | 0x80029774 | func_80029774 | SaveStateSlot | CORRECT | copies status, item values, flags, vars, the 0x60 block into slot a, marks it used; SaveContinuePoint(1) |  |
| 28 | 0x8002A544 | func_8002A544 | GainStat3 | CORRECT | AddStat3Exp, on a level-up OpenHudSlot(3) + sound + LevelUpHook; GainBonus / stage rewards |  |
| 29 | 0x8002B0B4 | func_8002B0B4 | SaveCardStep | VAGUE | the card state machine dispatches check-directory / save / load / mode 3 on mode & 7: not save-only | MemCardStep |
| 30 | 0x8002D034 | func_8002D034 | UpdateSound | CORRECT | CD fade, sound timers, merged SFX, frame hook, reverb-depth fade; main / SoftReset / movie loops |  |
| 31 | 0x8002D29C | func_8002D29C | StepCdFadeOut | CORRECT | SsSetSerialVol (the CD input) scaled down each frame, StopMusic at 0; UpdateSound only |  |
| 32 | 0x8002F5C8 | func_8002F5C8 | SetStageSfxTable | CORRECT | clears the old table if any, stores the id halfword and the pointer; ovl36 per-map sound record |  |
| 33 | 0x80034C24 | func_80034C24 | InitCdAudio | CORRECT | zeroes the CD-audio ring and flags, CdGetToc; InitSound |  |
| 34 | 0x8003500C | func_8003500C | RunCdAudioRequests | CORRECT | runs the head request's step, on done its callback, advances the 4-entry ring; main / SoftReset |  |
| 35 | 0x80035C4C | func_80035C4C | CdTrackStep | CORRECT | CdlSetmode, play TOC entry n, watch for the track change; PlayCdTrack installs it as w[0] |  |
| 36 | 0x80036FB0 | func_80036FB0 | MoveCdAudioId | CORRECT | rewrites from -> to in the request-id list; installed as w[8] by PlayXa and PlayCdTrack |  |
| 37 | 0x80038838 | func_80038838 | ResetSeq | CORRECT | 16 channels vol 0x7F / pan 0x40, fade 0x4000, tempo 0x78 = 120; OpenSeq |  |
| 38 | 0x80038A58 | func_80038A58 | RunSequencers | CORRECT | clears key flags, frees ended voices, advances players; UpdateBgm per tick |  |
| 39 | 0x80039B20 | func_80039B20 | SeqNoteOff | CORRECT | reads a note byte, keys off voices on it (KeyOffBits); SeqDoEvent case 8 |  |
| 40 | 0x80039DEC | func_80039DEC | SeqNrpnMsb | CORRECT | cases 0x14 / 0x1E (loop back while count) / 0x28; SeqControlChange case 0x63 = NRPN MSB |  |
| 41 | 0x80039F50 | func_80039F50 | SeqControlChange | CORRECT | CC 6 / 7 / 10 / 0x62 / 0x63 switch; SeqDoEvent case 11 (0xBn) |  |
| 42 | 0x8003A0E4 | func_8003A0E4 | SeqPitchBend | CORRECT | reads one bend byte, re-pitches the channel's voices with the up / down ranges; SeqDoEvent case 14 |  |
| 43 | 0x8003A234 | func_8003A234 | SeqMetaEvent | CORRECT | 0x51 tempo = 60000000 / len, metas skipped, else end flag; SeqDoEvent case 15 |  |
| 44 | 0x80063548 | D_80063548 | g_DefaultPose | CORRECT | InitModel / InitPresetModel / InitModelKind7 all store it at +0x20 (the pose) |  |
| 45 | 0x8006AEF4 | D_8006AEF4 | g_SpuXferFlags | CORRECT | bit 0 cleared on SpuIsTransferCompleted unless bit 1; BeginBankUpload sets bit 1 |  |
| 46 | 0x80073140 | D_80073140 | g_VoiceBit | CORRECT | indexed by voice number to give the SPU voice bit for key on / off queues |  |
| 47 | 0x800747E4 | D_800747E4 | g_XaClipStep | CORRECT | XaClipStep's switch variable; QueueLoad / CancelStreamLoad reset it |  |
| 48 | 0x80076214 | D_80076214 | g_CdAudioError | CORRECT | GetCdAudioState returns 8 once when set, then clears it |  |
| 49 | 0x80078E8C | D_80078E8C | g_Money | CORRECT | demo setup sets 100; ovl36 saves / restores it with the entry vitals; stage caps at 99999 |  |
| 50 | 0x80078EB1 | D_80078EB1 | g_ClockHour | CORRECT | compared against 3..6, 7, >= 9 in clock-driven stage code |  |
| 51 | 0x800A4E74 | D_800A4E74 | g_ReverbDepth | CORRECT | UpdateSound steps it toward D_800A4E76 and passes it to SetReverbDepth |  |
| 52 | 0x800A4E8E | D_800A4E8E | g_BgmFlags | CORRECT | bit 8 gates UpdateBgm in SoundVSync and is cleared when the seq stops |  |
| 53 | 0x800A4EF0 | D_800A4EF0 | g_StageSfxTableId | CORRECT | ResolveSfxAlias returns 0 when it is 0; SetStageSfxTable stores it |  |
| 54 | 0x800A6518 | D_800A6518 | g_WorldOt | CORRECT | two GsOT headers set to g_WorldOtTable[i]; AddDrawModeAbr callers link into [frame] |  |
| 55 | 0x800B9CD8 | D_800B9CD8 | g_SeqPlayer | CORRECT | OpenSeq loops 2 x 0x1FC; SetSeqFade / PlaySeq index it |  |
| 56 | 0x800BA1B4 | D_800BA1B4 | g_LoadQueueState | CORRECT | LoadQueueStep switch; CancelStreamLoad tests 5; ResetLoader 0 |  |
| 57 | 0x800BA1B8 | D_800BA1B8 | g_Vars | CORRECT | SetVar / GetVar / ClearVars over 0x100 bytes |  |
| 58 | 0x800C6D2C | D_800C6D2C | g_LoadSize | CORRECT | QueueLoad kind 0 stores the size; LoadQueueStep passes it to LoadFileStep |  |
| 59 | 0x800C7C60 | D_800C7C60 | g_SoundLoadTable | CORRECT | (sound id, destination) pair handed to LoadFileStep by ModeTitleLoad / LoadExtraSoundFileStep |  |

Counts: CORRECT 58, VAGUE 1, WRONG 0, UNSURE 1. WRONG 0.0% (95% Wilson 0-6%), VAGUE 1.7% (0-9%), WRONG + VAGUE 1.7% (0-9%).

