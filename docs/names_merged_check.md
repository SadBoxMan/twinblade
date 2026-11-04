# r277: sample check of the r276 high-confidence names

Research only. Nothing in src/, include/, the configs, the symbol files or the `docs/names_merged/` batches was
changed. Input: `docs/names_merged/{exe,engine,stage,abil,ovl}_H.csv` on research/r276-names-merged. Output: this
file and `docs/names_merged_fixes.csv` (address, scope, proposed, corrected, reason; one row per WRONG or VAGUE
verdict).

## Summary

| batch | sampled | CORRECT | VAGUE | WRONG | UNSURE | WRONG % (95%) | VAGUE % (95%) | recommendation |
|---|---|---|---|---|---|---|---|---|
| exe_H | 60 | 58 | 1 | 0 | 1 | 0.0 (0-6) | 1.7 (0-9) | (pending) |
| engine_H | 60 | 57 | 1 | 0 | 2 | 0.0 (0-6) | 1.7 (0-9) | (pending) |
| stage_H | 60 | 53 | 2 | 1 | 4 | 1.7 (0-9) | 3.3 (1-11) | (pending) |
| abil_H | 60 | 59 | 0 | 0 | 1 | 0.0 (0-6) | 0.0 (0-6) | (pending) |

Not yet checked: ovl.

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

## engine_H.csv

508 rows, 361 eligible, 60 sampled (5 of them comment-only evidence; 94 comment-only rows were eligible).

| # | address | current | proposed | verdict | reason | better name |
|---|---|---|---|---|---|---|
| 0 | 0x8011F738 | D_8011F738 | g_ActionArgs | CORRECT | TakeActionArgs fills it; action handlers pass word 0 to RequestMapChange / store it as a timer |  |
| 1 | 0x801269C8 | D_801269C8 | g_CameraShakeY | CORRECT | cleared with g_CameraShakeB, both set from the shake table's byte each step; the Y part rests on the camera +0x80 offset struct |  |
| 2 | 0x80126B5E | D_80126B5E | g_PlayerX | CORRECT | read with D_80126B62 / D_80126B66 as the player's x / y / z in stage tests |  |
| 3 | 0x80126B98 | D_80126B98 | g_PlayerHitDamage | CORRECT | stage hit code writes it with g_PlayerHitKind (0xC, 0x20, a record's damage) |  |
| 4 | 0x801270C4 | D_801270C4 | g_NextActorId | CORRECT | InitSpawnedActor takes the id and increments it, skipping 0 |  |
| 5 | 0x80127540 | D_80127540 | g_MessageNumbers | CORRECT | PutMessageNumber formats D_80127540[w->unk48]; window struct comment names it |  |
| 6 | 0x80128ED8 | func_80128ED8 | StepSpriteAnim | CORRECT | timer down, next / loop / end frame from flags 0xC0 / 0x80, returns 1 at the end; callers free the object on 1 |  |
| 7 | 0x80129010 | func_80129010 | UpdateProps | CORRECT | for 0x80 props: g_PropHandlers[kind](e), then the model follows pos; engine frame |  |
| 8 | 0x801291C0 | func_801291C0 | AllocProp | CORRECT | first kind == 0 entry of 0x80, ZeroFill'd; stage spawners fill kind 0x19 |  |
| 9 | 0x8012927C | func_8012927C | FreeAllProps | CORRECT | FreeProp on all 0x80; no callers |  |
| 10 | 0x8012956C | func_8012956C | DrawBgLayers | CORRECT | per layer: sky bands / gradient / BG cell map, gated by g_BgLayersOn; engine frame |  |
| 11 | 0x801298F4 | func_801298F4 | InitBgLayerMap | CORRECT | GsMAP / GsBG fields from the layer's cell and map files; SetupBgLayers |  |
| 12 | 0x8012A328 | func_8012A328 | UpdateCameraFocus | CORRECT | eases D_80126942 toward the player's focus height (or the height limit); first thing UpdateCamera does |  |
| 13 | 0x8012A7D4 | func_8012A7D4 | GetCameraView | CORRECT | copies the active camera's vp / vr; GetCameraPitch / Heading and a stage use it |  |
| 14 | 0x8012A908 | func_8012A908 | AnimateActors | CORRECT | AnimTick for 0x60 actors when the all-flag is 1 or animFlags 0x1000; UpdateActors |  |
| 15 | 0x8012ACA0 | func_8012ACA0 | AnimStartDefault | CORRECT | script = D_8018D838, index 0, return cleared, AnimStep; no callers |  |
| 16 | 0x8012AD80 | func_8012AD80 | MoveObject | CORRECT | vel += accel, pos += vel (Mover); stage movers call it every frame |  |
| 17 | 0x8012ADE4 | func_8012ADE4 | RestorePrevPos | CORRECT | pos = prev; stage callers use it after a failed MoveOnGround / CollidePath |  |
| 18 | 0x8012BE98 | func_8012BE98 | GroundDistSqTo | CORRECT | SVecDistSq with y = 0; callers compare to squared radii |  |
| 19 | 0x8012CEB0 | func_8012CEB0 | CollidePath | CORRECT | mode bit 0 one TraceMap, else trace then probe down for the floor; callers test 0x2000 / 0x6000 |  |
| 20 | 0x80131170 | func_80131170 | StartKnockback | CORRECT | TakeDamageAndRecoil, velocity from a record, knock scripts 0xB / 0x24 / 0x20; hit-state entries |  |
| 21 | 0x80131B14 | func_80131B14 | TakeDamageAndRecoil | CORRECT | HP -= scaled damage, ShowDamage / ShowDefeat, rewards, model turned, StopWithGravity; stage hit handlers |  |
| 22 | 0x80132EC4 | func_80132EC4 | SetParamValues | CORRECT | writes v into every value slot of a 0-terminated key / value list; boss anim setup passes the list |  |
| 23 | 0x8013339C | func_8013339C | UnscaleMatrix | CORRECT | columns of m scaled by 4096 / scale (0 treated as 1); CarryPlayerScaled before LocalToWorld16 |  |
| 24 | 0x80146014 | func_80146014 | UploadImageList | CORRECT | MoveImage per 16-byte record until size 0; UploadFlagImages per flag |  |
| 25 | 0x80146924 | func_80146924 | SpawnEffectOnLimited | CORRECT | counts live effects of the kind in g_Effects, SpawnEffectOn only below n; no callers |  |
| 26 | 0x80146A6C | func_80146A6C | SpawnEffect | CORRECT | packs kind / owner / xyz / two values and AllocEffect; 540 effect spawns |  |
| 27 | 0x80146DE8 | func_80146DE8 | SetEffectAccel | VAGUE | writes +0x24..+0x2C; most callers pass the player or an actor (with SetPlayerMotion / SetFallSpeed / ClearHitPending), StepToward clears it on any walker: the "Effect" in the name is too narrow (the whole SetEffect* / ClearEffect* helper family in 0x80146C98-0x80146E98 shares this) | SetObjAccel |
| 28 | 0x801470C0 | func_801470C0 | ApplyPlayerHidden | CORRECT | model +4 bit 31 from the three hide bytes +0x220..222; FinishPlayerFrame |  |
| 29 | 0x80147118 | func_80147118 | ApplyPlayerScale | CORRECT | model scale = three s16 factor vectors multiplied, capped 0xFFFF; FinishPlayerFrame |  |
| 30 | 0x801477C8 | func_801477C8 | AddModelRotZ | CORRECT | model +0x14 (rot.vz; +0x12 is the heading elsewhere) += n, & 0xFFF; no callers |  |
| 31 | 0x80148E54 | func_80148E54 | GetObjStickAngle | CORRECT | camera yaw + the object's pad stick (digital table / analog), -1 when centred; abil / stage / GuardStep |  |
| 32 | 0x8014900C | func_8014900C | SetHitPending | CORRECT | +0x3C /= 0x8000; UpdatePlayerKind every frame |  |
| 33 | 0x80149374 | func_80149374 | ObjLocalToWorld16 | CORRECT | PosToSVec, local to world, SVecToPos; stage carries a point on a model |  |
| 34 | 0x801496D4 | func_801496D4 | CanJump | CORRECT | +0xAC & 0x40 (pressed) and nothing carried (+0x178); callers then TriggerJump |  |
| 35 | 0x8014B084 | func_8014B084 | NextDay | CORRECT | day++ (wraps 366 -> 1), weekday %= 7, item ageing; both clock paths call it at 0x5A0 minutes |  |
| 36 | 0x8014BC0C | func_8014BC0C | AddMaxHp | CORRECT | D_80078EB2 += n, capped 500; no callers (the 500 cap matches a max-HP field) |  |
| 37 | 0x8014BC80 | func_8014BC80 | LoseHp | CORRECT | HP -= n clamped at 0 (also clears D_800B9A17); poison / clock drains |  |
| 38 | 0x8014BCC0 | func_8014BCC0 | LoseHpNonLethal | CORRECT | HP -= n, never below 1 |  |
| 39 | 0x8014BD60 | func_8014BD60 | SpendBp | CORRECT | BP -= n clamped at 0; clock drain and knockback on kind 0x11 |  |
| 40 | 0x8014C088 | func_8014C088 | FindObj68ByKind | CORRECT | linear search of the 0x68-byte pool for kind; stage waits on kind 0xA |  |
| 41 | 0x80151780 | func_80151780 | RunHitHandler | CORRECT | +0x1F0 table entry by +0xDD (1..0x20), missing -> HitHandlerNop, else entry 3; both hit-state entries |  |
| 42 | 0x80154B7C | func_80154B7C | RestartFaceScript | UNSURE | stores a script at +0xD0 and resets its timers; sc06_006 calls it from a "cut motion" switch. The face reading rests on StartFaceScript (not in this sample); the C here does not say face |  |
| 43 | 0x801571C4 | func_801571C4 | TraceAttackPathBody | CORRECT | map ray then each hittable actor's model along the path; TraceAttackPath forwards to it |  |
| 44 | 0x80159C84 | func_80159C84 | PlayerStandStep | CORRECT | talk / ability / jump / technique / direction checks, idle cycle, ground check |  |
| 45 | 0x8015A3C8 | func_8015A3C8 | PlayerRunningStep | CORRECT | same action checks, then pad-type speed with caps; the running state |  |
| 46 | 0x801619A4 | func_801619A4 | GetActiveTechnique | CORRECT | D_80078EC0 & 0x7F while +0x1C8; the r276 ruling (Lumina technique selection) is what makes it "Technique" |  |
| 47 | 0x80161A30 | func_80161A30 | IsTechnique5Active | CORRECT | (D_80078EC0 & 0x7F) == 5 while +0x1C8; ProcessPlayerHit cancels +0x1C8 when true |  |
| 48 | 0x80165CA0 | func_80165CA0 | UpdateEffects | CORRECT | 30 effects: handler by kind, then their models follow; engine frame |  |
| 49 | 0x80168640 | func_80168640 | GlowFxInit | UNSURE | +0x1C = 0x20, +0x12 = 0, +0x10 = 0x80, state++; nothing in the body says glow, and it has no callers (handler table only) |  |
| 50 | 0x8016E95C | func_8016E95C | UpdateHudSlots | CORRECT | 4 slots of 0x20 at D_80115218, handler by p[1]; engine frame (OpenHudSlot opens them) |  |
| 51 | 0x8016EE40 | func_8016EE40 | StartPlayerActionScript | CORRECT | SetPlayerActionScriptReset (args pass through), then the kind handler and reset unless kind 0x19 / 0x1A; 338 script starts |  |
| 52 | 0x8016F14C | func_8016F14C | RunPlayerAction | CORRECT | +0x1F8 handler (low 24 bits), ClearObjPadInput first when bit 0x01000000; UpdatePlayer |  |
| 53 | 0x801719A4 | func_801719A4 | TakeActionArgs | CORRECT | n words from the action script at +0x214 into D_8011F738, cursor += n |  |
| 54 | 0x80171A88 | func_80171A88 | TickActionTimer | CORRECT | +0x200 down, 1 at 0 (or already 0); handlers then NextPlayerActionHandler |  |
| 55 | 0x80172358 | func_80172358 | PlaceObjAt | CORRECT | x y z and the two last-position SVECTORs = p; scene set-ups place the player |  |
| 56 | 0x8017250C | func_8017250C | SnapToPointIfNearXZ | CORRECT | IsNearPointXZ, then x / z = point; StepToward stops the walk on 1 |  |
| 57 | 0x801783D0 | func_801783D0 | ToBcd | CORRECT | decimal digits into nibbles, << s; shop code prints prices from it |  |
| 58 | 0x80178BF8 | func_80178BF8 | ResetScriptVM | CORRECT | zeroes the VM globals, gosub slots, the 0x200 ring, a 0x14 block; stage scenes reset before RunScript |  |
| 59 | 0x8017B368 | func_8017B368 | ScriptOpCameraCut | CORRECT | reads two points (absolute, or the actor's numbered points), sets the script camera cut flag; stages call it with point pairs |  |

Counts: CORRECT 57, VAGUE 1, WRONG 0, UNSURE 2. WRONG 0.0% (95% Wilson 0-6%), VAGUE 1.7% (0-9%), WRONG + VAGUE 1.7% (0-9%).

## stage_H.csv

631 rows, 570 eligible, 60 sampled (0 of them comment-only evidence; 0 comment-only rows were eligible).

| # | address | current | proposed | verdict | reason | better name |
|---|---|---|---|---|---|---|
| 0 | 0x8017CF58 | func_sc06_027_8017CF58 | RoomExitDone | CORRECT | ExitFadeDone, then EndHeldAbility, D_80078EC0 = 6, RequestFullReload; returns 1 when done |  |
| 1 | 0x8017D060 | func_sc01_004_8017D060 | PickDefaultExit | UNSURE | returns one of six records by progress (first visit sets flag 0xB5, progress 10, the clock); the only caller is a menu choice, and nothing here shows the records are exits (they may be scripts or destinations) |  |
| 2 | 0x8017D128 | func_sc03_115_8017D128 | PickUpSceneFaceCamera | CORRECT | walks the player toward the camera's point (ActionHelper_1AB0), then EndScene, motion, next phase |  |
| 3 | 0x8017D3E0 | func_sc04_012_8017D3E0 | EventArrival | CORRECT | 20-frame wait, StartEvent by player z (< 0x400), frees itself when the event ends |  |
| 4 | 0x8017D490 | func_sc05_007_8017D490 | RideWaitPlayer | CORRECT | ground distance < 0x80 and player y < -0x1BF: StartEvent, next state |  |
| 5 | 0x8017D610 | func_sc05_011_8017D610 | CastBUpdate | CORRECT | script switches on flags 0x128 / 0x12A / 0x12C and a random blink through QueueImage |  |
| 6 | 0x8017DB30 | func_sc06_011_8017DB30 | FloorSwitchUpdate | CORRECT | state 0: stood on with player byte 1C7 == 2 -> sinks 0x20; then slides its +0x6C part with sounds |  |
| 7 | 0x8017DC50 | func_sc05_011_8017DC50 | EventSceneEnd | CORRECT | SetProgress(0x398), GiveItem(0x1D), RequestMapChange, next state |  |
| 8 | 0x8017DD04 | func_sc01_000_8017DD04 | DrawOpeningPicture | CORRECT | ScaleGridPoints then four POLY_FT4 (code 0x2C) linked into the OT; the opening sequence calls it every step |  |
| 9 | 0x8017DD98 | func_sc03_013_8017DD98 | ItemGateOpen | CORRECT | per +0x218 slot: SetFlag(0xC1..C3), TakeItem(0x5B..5D), OpenMessage; the "gate" is not in the C but nothing contradicts it |  |
| 10 | 0x8017DDEC | func_sc02_041_8017DDEC | EventSwitchSpawnsD4 | CORRECT | SetFlag(0xD4), SetVar32(4, 0xD4), new g_SpawnListA / B, respawn |  |
| 11 | 0x8017E07C | func_sc01_074_8017E07C | DrawCable | CORRECT | one DrawCableSegment, or two through the object when it is past the anchor |  |
| 12 | 0x8017E20C | func_sc07_000_8017E20C | EventSceneB | CORRECT | SoundCmd1(1), StartEvent(D_801863A0), state 4; called when the player reaches a zone |  |
| 13 | 0x8017E770 | func_sc05_018_8017E770 | RoomEntryByProgress | CORRECT | progress 0x488 picks StartEntryScript488, else the other entry; StartFade |  |
| 14 | 0x8017E9F8 | func_sc05_001_8017E9F8 | RoomInitCamera | CORRECT | camera targets, SetCameraUpdate(room hook), SnapCamera |  |
| 15 | 0x8017ECB4 | func_sc07_000_8017ECB4 | EventSceneA | CORRECT | StartEvent, timer, spawns on the end; EndEvent when done |  |
| 16 | 0x8017EFAC | func_sc03_112_8017EFAC | MachineHitPlayer | CORRECT | five ActorSegmentHitsPlayer probes across the machine; MachineUpdate then sets the player hit |  |
| 17 | 0x8017EFC4 | func_sc01_009_8017EFC4 | PickStoryTalk | CORRECT | progress x var 0x3B picks the talk script into D_801E91D4, bumps var 0x3B |  |
| 18 | 0x8017F028 | func_sc01_004_8017F028 | MenuHostInit | CORRECT | SetProgress(5) if below, timer 4, next state |  |
| 19 | 0x8017F1FC | func_sc01_008_8017F1FC | AdvisorFirstTalkEnd | CORRECT | UpdateScript done -> EndEvent, TakePlayerControl, next state |  |
| 20 | 0x8017F200 | func_sc05_002_8017F200 | ColumnScrollAndSpawn | CORRECT | texture v scroll on +0x30 with wrap, SpawnActor(0x1A4) on the timer |  |
| 21 | 0x8017F3B0 | func_sc02_017_8017F3B0 | EventExitWalk | CORRECT | rumble, step table: RequestMapChange or NextPlayerActionHandler |  |
| 22 | 0x8017F460 | func_sc01_077_8017F460 | SensorCheck | CORRECT | hit count (mode 4) or z distance triggers 0x8017F5BC with sound 0x495 |  |
| 23 | 0x8017F770 | func_sc05_002_8017F770 | ColumnInit | CORRECT | AllocActorSprite, InitSpriteKind2, ColumnSpawnRow, state 2 while flag 0xBA clear |  |
| 24 | 0x8017F904 | func_sc03_113_8017F904 | StepColumnInit | CORRECT | same shape in sc03_113 (AllocActorSprite, StepColumnFill, flag 0xBA) |  |
| 25 | 0x8017F940 | func_sc05_002_8017F940 | ColumnPlatformMove | CORRECT | moves by the column's speed, freed past the column's range, CarryPlayerExact while stood on |  |
| 26 | 0x8017FCE0 | func_sc03_029_8017FCE0 | ToughEnemyInit | UNSURE | rejects when kind 0x95 exists or flag 0x9D, then SetupActor / shadow / script; nothing in this body supports "Tough" (that reading is from the actor data, not checked here) |  |
| 27 | 0x8017FF08 | func_8017FF08 | WindowLitTime8 | CORRECT | null outside progress 0x64-0x258, else the time window 0x96-0xF0 minutes (2:30-4:00) |  |
| 28 | 0x8017FFA8 | func_sc06_006_8017FFA8 | SpawnCast | CORRECT | 27 x 0x34A, 25 x 0x389 with sub-ids, 0x38F; DirectorInit |  |
| 29 | 0x80180034 | func_sc05_001_80180034 | LiftFrameInit | CORRECT | frame model, wheel model, props, SpawnActorArg children |  |
| 30 | 0x80180078 | func_80180078 | RoomManagerFrame | CORRECT | minutes of day, hide flags, DrawWindowLight 2..0x11, ambient timer |  |
| 31 | 0x801800B8 | func_sc06_006_801800B8 | StartShot | CORRECT | shot camera + per-cast commands (hide, show, script ...); every ShotN calls it with its record |  |
| 32 | 0x80180300 | func_sc06_025_80180300 | RivalNextRound | CORRECT | round counter + 1, StartEvent for the next round or RivalDefeat at 4 |  |
| 33 | 0x80180304 | func_sc05_001_80180304 | LiftEndRide | CORRECT | EndEvent, sound 0x8F9, SetFlag per lift, state 3; LiftRise calls it at the top |  |
| 34 | 0x80180520 | func_sc05_001_80180520 | ShiftBlockWait | CORRECT | random smoke puffs until the parent's +0xFE is set, then ShiftBlockStart |  |
| 35 | 0x801805B0 | func_sc04_000_801805B0 | PropScaleOut | CORRECT | scale = rsin of a falling counter, FreeProp at 0 |  |
| 36 | 0x801805E0 | func_sc05_018_801805E0 | EventSetProgress492 | CORRECT | FindActorByKind(0x2C6) -> SetProgress(0x492), SpawnActorArg(0x3BE), music, sound |  |
| 37 | 0x80180734 | func_sc03_124_80180734 | TalkerFlag106 | VAGUE | the C is an item hand-over: flag 0x106 set -> after-script; item 0x58 missing -> ask script; else take item 0x58, set flag 0x106 | TalkerTakeItem58 |
| 38 | 0x801808C0 | func_sc06_006_801808C0 | DirectorInit | CORRECT | model, flags 0x143 / 0x6F-0x73, SpawnCast and the set-up helpers |  |
| 39 | 0x801809D4 | func_sc06_029_801809D4 | EventAfterBoss | CORRECT | timer and kind 0x2EF gone -> state 0xE, bonus unless flag 0x11D, StartEvent |  |
| 40 | 0x80180A10 | func_sc03_011_80180A10 | Scene3E8Init | CORRECT | progress 0x3E8 only, model, clock copy into vars, SpawnActor(0x374) |  |
| 41 | 0x80180A70 | func_sc06_029_80180A70 | SpawnWeakPoints | WRONG | no SpawnActorArg(0x294) here: a multi-state sequence (3 rings x 8 debris of kind 0x32B via func_8012C51C, sounds, camera shake, EndEvent, state 0xF, GiveItem(0x24)) run after EventAfterBoss; the 5 x 0x294 spawn the evidence describes is in func_sc06_029_8017EBC4 (proposed BossCoreInit) | BossCollapseSequence |
| 42 | 0x80180CAC | func_sc03_006_80180CAC | RoomResetVarCC | CORRECT | flag 0x142 = 0, var 0xCC 1 -> 2 |  |
| 43 | 0x8018104C | func_sc02_031_8018104C | RoomExitStepFlag90 | CORRECT | exit countdown: SoundCmd1(1) unless flag 0x90, stop sounds / chime, StartExitFade |  |
| 44 | 0x8018112C | func_sc03_006_8018112C | RoomInitCamera | CORRECT | camera targets, SetCameraUpdate(room hook), SnapCamera |  |
| 45 | 0x80181850 | func_sc03_107_80181850 | RoamObjInit | CORRECT | progress / saved-map gate, SetProgress(0x1D6) on map 0x1052, actor set-up |  |
| 46 | 0x801818D8 | func_sc03_006_801818D8 | HazardHitsPlayer | CORRECT | six ActorSegmentHitsPlayer probes; HazardUpdate sets damage 0xC on 1 |  |
| 47 | 0x80181A5C | func_sc03_116_80181A5C | SwellingInit | CORRECT | flag 0x11C gate, sprite model at scale 0x4000, hit data, script |  |
| 48 | 0x80181C1C | func_sc05_017_80181C1C | SetFlag124Var8A | VAGUE | also GiveItem(0x28) first; the name lists the flag and var but leaves out the item, which is the point of the function | GiveItem28SetFlag124 |
| 49 | 0x80181FA8 | func_sc03_116_80181FA8 | BarrierInit | CORRECT | flag 0x11C gate, translucent model, hit data, colour fields |  |
| 50 | 0x8018287C | func_sc01_080_8018287C | HazardBurst | CORRECT | four SegmentHitsPlayer probes set the player hit, sound 0x4A7, SpawnActor(0x37), FreeActor |  |
| 51 | 0x80182C10 | func_sc01_001_80182C10 | ResetBlinkTexture | CORRECT | MoveImage rect at (0x280, 0x188), blink timer 0x3C; the prologue scene resets it per cut |  |
| 52 | 0x80182E68 | func_sc02_011_80182E68 | SetPieceInit | CORRECT | RejectSpawn unless var 0xCD and not flag 0x9E, state 1 |  |
| 53 | 0x80182F94 | func_sc01_001_80182F94 | DebrisInit | CORRECT | model, cull box, script, StopMotion, velocity (0, 0x20000, 0) |  |
| 54 | 0x80183B1C | func_sc06_029_80183B1C | WeakPointHit | CORRECT | parent-following part; on hit 0x28 off the core's HP (+0x76), defeat at 0 |  |
| 55 | 0x8018495C | func_sc05_001_8018495C | DripEmitterInit | CORRECT | random timer and period from +0xFC |  |
| 56 | 0x80185158 | func_sc03_028_80185158 | BossHitBig | UNSURE | MoveCollide; on a hit the boss is touched and ShowDamage(o, 0x64): reads as a thrown object that damages the boss as much as "the boss is hit"; the C does not settle which actor o is |  |
| 57 | 0x80185344 | func_sc03_028_80185344 | BossHitMid | UNSURE | same family: MoveCollide, shatters into 8 x 0xCC on the floor, ShowDamage(o, 0x28) on a hit near the boss; same open question as BossHitBig |  |
| 58 | 0x801862C0 | func_sc06_029_801862C0 | Spawn353IfFlag8E | CORRECT | flag 0x8E and helper 1 -> SpawnActor(0x353), state 2 |  |
| 59 | 0x8018872C | func_8018872C | DoorTalkCheck | CORRECT | map 0x3069 excluded, state / area tests, ResetScriptVM, returns the action handler; installed as the actor's talk hook |  |

Counts: CORRECT 53, VAGUE 2, WRONG 1, UNSURE 4. WRONG 1.7% (95% Wilson 0-9%), VAGUE 3.3% (1-11%), WRONG + VAGUE 5.0% (2-14%).

## abil_H.csv

267 rows, 227 eligible, 60 sampled (0 of them comment-only evidence; 0 comment-only rows were eligible).

| # | address | current | proposed | verdict | reason | better name |
|---|---|---|---|---|---|---|
| 0 | 0x800CAE74 | func_ovl25_800CAE74 | Map_BuildPalette | CORRECT | copies a 0x1F-byte CLUT image, zeroes 2-byte entries whose flag is unset, QueueImage; the map package's entry and step call it twice |  |
| 1 | 0x800CAE80 | func_ovl28_800CAE80 | Steel_DrawModel | CORRECT | two ping-pong counters, blend rate from the record's top bits, then Steel_SortPackets (the kind-6 model draw) |  |
| 2 | 0x800CAEC0 | func_ovl22_800CAEC0 | BO_Start | CORRECT | pays BP once, effect 0x35, sound 0x838, four SpawnObj68(0xE) with random angles; the package's step 0 |  |
| 3 | 0x800CAEC0 | func_ovl24_800CAEC0 | Toxin_Start | CORRECT | Ability_SaveStats, pays BP, SetPoisonWord, effect 0x37, sound; step 0 |  |
| 4 | 0x800CAEE8 | func_ovl1c_800CAEE8 | Antidote_Cure | CORRECT | CurePoison, effect 0x41, sound, back to the normal kind |  |
| 5 | 0x800CAEF4 | func_ovl16_800CAEF4 | Depress_Step2WaitTimer | CORRECT | ends the held ability when D_80078EC8 reaches 0 (the shared timer); same body as ovl14 CAF20 |  |
| 6 | 0x800CAEF8 | func_ovl1d_800CAEF8 | CutHeal_Step2Heal | CORRECT | AddHp(a, 10, 1), back to the normal kind |  |
| 7 | 0x800CAF0C | func_ovl15_800CAF0C | Gunshot_Step2Draw | CORRECT | at the draw anim end: fire anim when the button is held, else holster |  |
| 8 | 0x800CAF24 | func_ovl27_800CAF24 | Fence_StepThrust | CORRECT | attack flag, spawn 0x21 on the 0x4000 marker, RunAttackHit while grounded, ends at 0x8000 |  |
| 9 | 0x800CAF28 | func_ovl16_800CAF28 | Depress_CloudUpdate | CORRECT | state table while D_80078EC1 == 1, else FreeEffect |  |
| 10 | 0x800CAF60 | func_ovl26_800CAF60 | DKick_StepAir | CORRECT | in-air step: move, fall speed, RunAttackHitSet2 until landing |  |
| 11 | 0x800CAFC4 | func_ovl2e_800CAFC4 | GrenadeObjUpdate | CORRECT | handler table while ability 0x1D, removed out of range (y > 0x400) |  |
| 12 | 0x800CB028 | func_ovl2b_800CB028 | Acid_BlobUpdate | CORRECT | same shape for ability 0x19 (acid) |  |
| 13 | 0x800CB030 | func_ovl2a_800CB030 | Clone_DecoyInit | CORRECT | sprite model, local to world, lifetime 900 (Clone_Lifetime), next state |  |
| 14 | 0x800CB05C | func_ovl13_800CB05C | Stun_RampScale | UNSURE | k 1 / 2 ramps +0xC0 (0..0x2000) and +0x1B8 / +0x1BA by 0x800; what those three fields are is not in the C (scale is plausible, not shown) |  |
| 15 | 0x800CB068 | func_ovl1f_800CB068 | Bowl_StepThrow | CORRECT | SpawnObj68(0xA) and sound at the 0x4000 marker, next step at 0x8000 |  |
| 16 | 0x800CB06C | func_ovl21_800CB06C | Sublime_StateLieDown | CORRECT | airborne: model rot.x tipped to 0xC00, then lies (state); landing ends the ability |  |
| 17 | 0x800CB10C | func_ovl1c_800CB10C | Antidote_RingUpdate | CORRECT | ability 4 check, two helpers, then the state table; else delete |  |
| 18 | 0x800CB140 | func_ovl15_800CB140 | Gunshot_Step4Holster | CORRECT | at the anim end back to the normal kind |  |
| 19 | 0x800CB158 | func_ovl16_800CB158 | Depress_CloudStart | CORRECT | +0x28 grows 0x120 for 8 frames, matrix from the owner, DrawCloud, then state 4 |  |
| 20 | 0x800CB1A0 | func_ovl1f_800CB1A0 | Bowl_BallUpdate | CORRECT | state table while ability 0xF, positional sound off screen, deleted out of range |  |
| 21 | 0x800CB1A0 | func_ovl19_800CB1A0 | Shrink_UpdateLights | CORRECT | three light directions from rsin / rcos of the frame counter; the flash step installs and refreshes them |  |
| 22 | 0x800CB1CC | func_ovl25_800CB1CC | Map_StepShow | CORRECT | waits for button 0x20 (then next step and sound), draws the map layers and the blinking area |  |
| 23 | 0x800CB1F8 | func_ovl29_800CB1F8 | Hurl_Release | CORRECT | the carried actor (+0x178) gets hit 0x29 with RollDamage, +0x178 cleared; the throw step at the 0x4000 marker |  |
| 24 | 0x800CB21C | func_ovl15_800CB21C | Gunshot_BulletInit | CORRECT | empty model, owner's rotation, accel, timer 0x10, next state |  |
| 25 | 0x800CB23C | func_ovl1f_800CB23C | Bowl_BallInit | CORRECT | sprite model, owner's rotation, accel, timer 0x60, next state |  |
| 26 | 0x800CB2A8 | func_ovl2b_800CB2A8 | Acid_PuddleSpread | CORRECT | model scale +0x80 per frame, hit test until the timer |  |
| 27 | 0x800CB2CC | func_ovl17_800CB2CC | Sleepy_MarksFollow | CORRECT | follows the owner's model point while ability 0x11, else FreeEffect |  |
| 28 | 0x800CB2CC | func_ovl21_800CB2CC | Sublime_SpiritInit | CORRECT | empty model at zero scale, timer, two SpawnObj68On(0x28), next state |  |
| 29 | 0x800CB2E0 | func_ovl15_800CB2E0 | Gunshot_BulletFly | CORRECT | timer -> spark and next; else rotate, move, sweep hit 0x10, impact effects by result |  |
| 30 | 0x800CB358 | func_ovl2f_800CB358 | JavelinGlowUpdate | CORRECT | state table while the owner is kind 0x26, else FreeEffect |  |
| 31 | 0x800CB3B4 | func_ovl2a_800CB3B4 | Clone_DecoyBurst | CORRECT | pulsing scale, glow colour ramp to 0xFF, then dust, 0x46 effects, sounds, next state |  |
| 32 | 0x800CB4D8 | func_ovl14_800CB4D8 | Perfume_CloudEmit | CORRECT | cloud follows the owner and draws; SpawnEffect(0xA) every 0x18 frames while ability 5 |  |
| 33 | 0x800CB4EC | func_ovl27_800CB4EC | Fence_ProjHitTest | CORRECT | SweepHitObj68 type 0x28, spark 0xB at the hit, 1 on a hit; Fence_ProjHitAt |  |
| 34 | 0x800CB510 | func_ovl13_800CB510 | Stun_EffectBUpdate | CORRECT | state table while ability 7, else FreeEffect |  |
| 35 | 0x800CB580 | func_ovl27_800CB580 | Fence_GlowUpdate | CORRECT | state table while ability 0xB, else FreeEffect |  |
| 36 | 0x800CB5DC | D_ovl14_800CB5DC | Perfume_CloudStates | CORRECT | Perfume_CloudUpdate indexes it by state |  |
| 37 | 0x800CB6D4 | func_ovl22_800CB6D4 | BO_FlyOrbitStep | CORRECT | ellipse offsets eased in, model turned, angle stepped, 1 after a full turn; three callers loop on it |  |
| 38 | 0x800CB780 | func_ovl2c_800CB780 | ThreeWay_DrawFanXZ | CORRECT | four Gouraud quads in the XZ plane from a byte table, brightness +0x30; the muzzle effect |  |
| 39 | 0x800CB880 | D_ovl13_800CB880 | Stun_StepTable | CORRECT | Stun_Update indexes it by +0x197 |  |
| 40 | 0x800CB8A4 | D_ovl27_800CB8A4 | Fence_StepTable | CORRECT | Fence_Update indexes it by +0x197 |  |
| 41 | 0x800CBA74 | func_ovl22_800CBA74 | BO_CloudUpdate | CORRECT | state table while ability 0x15, else FreeEffect |  |
| 42 | 0x800CBB00 | D_ovl15_800CBB00 | Gunshot_FireAnim | CORRECT | SetPlayerMotion while the button is held (draw and fire steps) |  |
| 43 | 0x800CBBA0 | func_ovl1f_800CBBA0 | Bowl_CloseGauge | CORRECT | the kind-0x27 gauge: state 3 if past state 2, else kill; Bowl_Release |  |
| 44 | 0x800CBC0C | func_ovl19_800CBC0C | Shrink_ShotHit | CORRECT | actors within 0x40 that can be struck get hit 0x1E |  |
| 45 | 0x800CBC2C | func_ovl28_800CBC2C | Steel_SortGT3 | CORRECT | POLY_GT3 runs, glint band or lit colours, Steel_AddPrim; Steel_SortPackets case 0x14 |  |
| 46 | 0x800CBD0C | func_ovl19_800CBD0C | Shrink_RingUpdate | CORRECT | state table while ability 0xD, else FreeObj68 |  |
| 47 | 0x800CBD54 | func_ovl2a_800CBD54 | Clone_DrawShard4 | CORRECT | one FT4 drawn at four offsets with the model's scale / rotation |  |
| 48 | 0x800CBE28 | func_ovl28_800CBE28 | Steel_SortGT4 | CORRECT | POLY_GT4 runs; Steel_SortPackets case 0x1C |  |
| 49 | 0x800CBE7C | D_ovl1f_800CBE7C | Bowl_Steps | CORRECT | Bowl_Update indexes it by +0x197 |  |
| 50 | 0x800CBED8 | func_ovl25_800CBED8 | Map_ClampToBox | CORRECT | x to +-0x60, y to +-0x40, returns how many were clamped; the map trail |  |
| 51 | 0x800CC12C | D_ovl2a_800CC12C | Clone_Lifetime | CORRECT | set 0x384 at init, decremented by the idle step |  |
| 52 | 0x800CC5B0 | D_ovl19_800CC5B0 | Shrink_TrailPoints | CORRECT | the trail init indexes 0xA0 bytes (20 SVECTOR) per trail |  |
| 53 | 0x800CCA18 | D_ovl28_800CCA18 | Steel_StepTable | CORRECT | Steel_Update indexes it by +0x197 |  |
| 54 | 0x800CCB28 | func_ovl35_800CCB28 | GlideStart | CORRECT | effect 0x3B, +0x1C8 = 0xBA (the timed technique), back to normal kind |  |
| 55 | 0x800CCB78 | func_ovl32_800CCB78 | BarrierStart | CORRECT | byte 1C7 = 3, SpawnObj68(7), +0x1C8 = 0xFF |  |
| 56 | 0x800CCB78 | func_ovl33_800CCB78 | FlameStart | CORRECT | sound, SpawnObj68 0x10 + three 0x11 orbs, +0x1C8 = 0xFF |  |
| 57 | 0x800CCBC0 | func_ovl35_800CCBC0 | GlideTrailDraw | CORRECT | ring buffer of segment pairs drawn as fading G4 quads; the glide step |  |
| 58 | 0x800CD5CC | func_ovl34_800CD5CC | SpinContactHit | CORRECT | actors within 0x40 strikable with class 0x25 get the hit, returns the last one; three spin steps |  |
| 59 | 0x800CD668 | D_ovl33_800CD668 | FlameSteps | CORRECT | kind-8 handler indexes it by state - 2 |  |

Counts: CORRECT 59, VAGUE 0, WRONG 0, UNSURE 1. WRONG 0.0% (95% Wilson 0-6%), VAGUE 0.0% (0-6%), WRONG + VAGUE 0.0% (0-6%).

