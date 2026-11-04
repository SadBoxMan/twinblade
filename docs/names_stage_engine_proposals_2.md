# Stage engine: naming proposals, part 2 (r272 round 2, research only)

Follows `docs/names_stage_engine_proposals.md` (part 1), which is left as it is. Same columns, same confidence scale
(H / M / L), same evidence abbreviations ("e.c" = src/stage/engine.c, "e5F4" = engine_8012F5F4.c, "eB568" =
engine_8013B568.c, "eC98C" = engine_8013C98C.c, "e58E0" = engine_801458E0.c). Names proposed in part 1 are used as
evidence and not proposed again. Snapshot: main a75e323d (4 Nov 2026, merged into this branch), which adds matched
ability packages (src/abil) and mode overlays: their calls into the engine are counted here as "abil" calls.

Contents:
* (a) the stage-called engine functions with fewer than 9 call sites that part 1 left out (those inside
  0x80146128-0x8016F000 are in (b) instead);
* (b) Musashi's own controller and its neighbours, 0x80146128-0x8016F000, function by function.

## (a) Smaller stage callers

Counts: stage calls / stage files, then abil calls where there are any.

### Actors, kinds, reactions

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80130088 | func_80130088 | PlayDistanceSound32 | parameter sound 0x32 near the target point (DistSqToTarget < 0x9000), 0x33 farther, the other when one is missing | M | e5F4 comment ("moves 0x32 and 0x33"; they go through PlayParamSound, so they are sounds); 6 / 4, after a defeat test (`a->+0x76 <= 0`) |
| 0x8013001C | func_8013001C | PlayDistanceSound30 | the same with parameters 0x30 / 0x31 | M | e5F4 comment; inline |
| 0x80132EC4 | func_80132EC4 | SetParamValues | every value's low half in a key / value list = v | H | e5F4 comment; 4 / 2: `func_80132EC4(p->a, k)` |
| 0x80132F40 | func_80132F40 | PushPlayerOntoBox | when Musashi's path from his last position (+0x88) crosses the actor's model, put him on the box's top in its frame | M | e5F4 (PathHitsModel, WorldToLocal, the box's lower y, LocalToWorld into D_80126B5E..66); 1 / 1 |
| 0x80142454 | func_80142454 | SpawnHeadMarkerOnPlayer | SpawnKind13 (part 1) over Musashi (parent g_Player, n 1), +0x52 = a height offset | L | eC98C; 7 / 5: `func_80142454(-0x80)` |
| 0x80142608 | func_80142608 | HeadMarkerSetup | kind 0x13's set-up: a model (own, or the parent's next free one), scale 0x200, height 0x40, the parent's id kept at +0xFE | M | eC98C |
| 0x801424E4 | func_801424E4 | HeadMarkerStep | its state handler, then follow the parent (or free itself when the parent's id changed) | M | eC98C |

### Lighting, the stage step

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8013CABC | func_8013CABC | RefreshDayLighting | lighting flags set so UpdateDayLighting re-applies the period at once (D_801ED44C / 440 = 1, 450 = 1) | L | eC98C; 7 / 7 |
| 0x8013CAE8 | func_8013CAE8 | ResetDayLighting | the same with the remembered period forgotten (D_801ED448 = -1) and the hold off | M | eC98C; 7 / 7 |
| 0x8013CB20 | func_8013CB20 | HoldDayLighting | save two lighting flags and set the hold (D_801ED450 = 1) | M | eC98C comment ("two flags saved and set"); 1 / 1 |
| 0x8013CB5C | func_8013CB5C | ReleaseDayLighting | restore them | M | eC98C comment ("and restored") |
| 0x8013D064 | func_8013D064 | StepTimedDusk | a timed light change: count 0x23B frames, then step to period 2's colours (func_8013D9B0(2)) | L | eC98C; 2 / 2 |
| 0x8013D164 | func_8013D164 | StartTimedDusk | D_801ED458 = 1 (starts the above) | L | eC98C; 2 / 2 |
| 0x8013D13C | func_8013D13C | ApplyLightPeriod | func_8013D9B0(n), then whether the change is still running | L | eC98C; 3 / 2: `if (func_8013D13C(0xA) == 0)` |
| 0x801285D4 | func_801285D4 | ClearWorkA3E1 | Work byte 0x800B9A11 = 0 | L | e.c; abil 1 |
| 0x80128940 | func_80128940 | LoadMapExtraB | the extra file of map 0x30A0 (late in the game), sound bank 0x5E | M | e.c (called by LoadMapExtras for 0x30A0 when the play time is >= 0x640) |
| 0x801289F0 | func_801289F0 | LoadMapExtraD | the extra file of map 0x300E, no sound bank | M | e.c (LoadMapExtras, 0x300E when func_800CF854() != 0) |
| 0x80136EC4 | func_80136EC4 | DebugNop36EC4 | an empty function among the debug draws | H | e5F4; abil 1 |

### The block player (eB568)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8013BD74 | func_8013BD74 | RelocateSeqBlockB | a kind-'B' block's 0x1000 entries relocated in place (once) | M | eB568; 1 / 1 |
| 0x8013C08C | func_8013C08C | StartSeqBlock | the player's block pointers, then RelocateSeqBlock | M | eB568; 1 / 1 |
| 0x8013BC7C | func_8013BC7C | RunSeqState | the player's state handler (D_8018D4BC) | M | eB568 |
| 0x8013BCDC | func_8013BCDC | RunSeqHook | the hook SetSeqHook set | H | eB568 |

### Musashi's scripted actions (continued from part 1)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8016ED8C | func_8016ED8C | StartPlayerActionArg | StartPlayerAction, +0x218 (D_80126D70) = a value | H | e58E0; 1 / 1 |
| 0x8016EDBC | func_8016EDBC | StartPlayerActionScriptArg | StartPlayerActionScript, +0x218 = a value | H | e58E0; 3 / 3 |
| 0x8016EFA8 | func_8016EFA8 | SetPlayerActionScriptPass | SetPlayerActionScript with the caller's arguments passed through | M | e58E0; 1 / 1 |
| 0x8016F094 | func_8016F094 | ClearPlayerActionFlag04 | +0x1F8 &= ~0x04000000 (the "just started" flag SetPlayerAction sets) | M | e58E0; 6 / 4 |
| 0x8016F250 | func_8016F250 | SetPlayerByte1C2 | Player +0x1C2 (D_80126D1A) = 1, cleared by every action start | L | e58E0; 1 / 1 |
| 0x8016F374 | func_8016F374 | SetWorkA3E7 | 0x800B9A17 = 1 (cleared by every action start; LoseHp clears it at 0 HP) | L | e58E0; 4 / 4 |
| 0x8016F388 | func_8016F388 | ClearWorkA3E7 | 0x800B9A17 = 0 | L | e58E0; 8 / 1 |
| 0x80171EC8 | func_80171EC8 | PushStickForward | fake analog input (+0xA9 = 0x73): the stick tilted fully toward the model's heading relative to the camera | H | e58E0; 1 / 1; AutoWalk's step |
| 0x80171FFC | func_80171FFC | WalkToPointSpeed | WalkToPoint with a stick tilt (func_80172170) | M | e58E0 |
| 0x8017209C | func_8017209C | WalkToPointSpeedTurning | the same with the turn limited | M | e58E0; 1 / 1 |
| 0x80172170 | func_80172170 | PushStickToward | as PushStickForward with a tilt (0-0xFF) | H | e58E0 |
| 0x801722CC | func_801722CC | PressCross | unless +0x1F4 bit 2: held and pressed = 0x40 (the cross button) | M | e58E0; 3 / 2. 0x40 is the PS pad's cross bit; the scripted actions press it (func_8016FD08) |
| 0x80172304 | func_80172304 | HoldCross | held = 0x40 | M | e58E0; 3 / 2 |
| 0x80172310 | func_80172310 | PlacePlayer | Musashi at a point (position, +0x88, +0x90) and facing its +6 | H | e58E0; 6 / 5 |
| 0x80172358 | func_80172358 | PlaceObjAt | an object's position and its last positions (+0x88, +0x90) = a point | H | e58E0; 4 / 3 |
| 0x801723C4 | func_801723C4 | SetPlayerKindD | kind handler run, SetKindAndState(p, 0xD), +0x178 = v, then func_8014A1B0 | L | e58E0; 1 / 1 |
| 0x80172414 | func_80172414 | PlayerAirStep | +0xB8 bit 0x2000: func_80161C24; falling fast (+0x2C < -0x70000) every 8 frames: SpawnEffect2(p, 2) | L | e58E0; 2 / 2 |
| 0x8017248C | func_8017248C | SnapToPointIfNear | within 0x10 of a point: put the object on it, return 1 | H | e58E0 (func_801724EC) |
| 0x801724EC | func_801724EC | IsNearPoint | distance (func_80013450) to a point < 0x10 | H | e58E0; 1 / 1 |
| 0x8017250C | func_8017250C | SnapToPointIfNearXZ | the same on the ground plane | H | e58E0 |
| 0x80172560 | func_80172560 | IsNearPointXZ | the same test with the point's height made the object's | H | e58E0 |
| 0x80172588 | func_80172588 | ClearPlayerEvents | +0x1F4 = 0 (once a frame, at the end of the player update) | M | e58E0 (func_80146128's list) |
| 0x80172590 | func_80172590 | SetPlayerEvent01 | +0x1F4 \|= 1 | M | e58E0 |
| 0x801725A4 | func_801725A4 | SetPlayerEvent02 | +0x1F4 \|= 2 | M | e58E0; abil 3 |
| 0x801725B8 | func_801725B8 | SetPlayerEvent04 | \|= 4 | M | e58E0 |
| 0x801725CC | func_801725CC | SetPlayerEvent08 | \|= 8 | M | e58E0 (the hit handler sets it, func_80151780) |
| 0x801725E0 | func_801725E0 | SetPlayerEvent10 | \|= 0x10 | M | e58E0 |
| 0x801725F4 | func_801725F4 | SetPlayerEvent20 | \|= 0x20 | M | e58E0 |
| 0x80172608 | func_80172608 | SetPlayerEvent40 | \|= 0x40 | M | e58E0 |
| 0x8017261C | func_8017261C | SetPlayerEvent80 | \|= 0x80 | M | e58E0; 2 / 1 |
| 0x80172644 | func_80172644 | SetPlayerEvent200 | \|= 0x200 | M | e58E0 |
| 0x80172670 | func_80172670 | PlayerEvent04 | +0x1F4 & 4 | M | e58E0; 4 / 1 (sc02_011 waits on it with PlayerState1F4Bit1) |
| 0x80172688 | func_80172688 | PlayerEvent10 | & 0x10 | M | e58E0; 4 / 2 |
| 0x80172694 | func_80172694 | PlayerEvent20 | & 0x20 | M | e58E0 |
| 0x801726A0 | func_801726A0 | PlayerEvent40 | & 0x40 | M | e58E0; 1 / 1 |
| 0x801726AC | func_801726AC | PlayerEvent80 | & 0x80 | M | e58E0; 5 / 1 |
| 0x801726B8 | func_801726B8 | PlayerEvent100 | & 0x100 | M | e58E0; 4 / 4 |
| 0x801726C4 | func_801726C4 | PlayerEvent200 | & 0x200 | M | e58E0; 6 / 6 |
| 0x801726D0 | func_801726D0 | ResetActionHandler | the action handler back to the idle one (func_80172760), not ready, ClearActionHandler | H | e58E0 |
| 0x80172738 | func_80172738 | SetIdleActionHandler | SetActionHandler(func_80172760) | H | e58E0 |
| 0x80172760 | func_80172760 | IdleActionHandler | ClearActionHandler | H | e58E0 |
| 0x80172780 | func_80172780 | WalkPlayerTo | an action: BeginScene, StepToward a point (D_80126B30), then ClearActionHandler | M | e58E0 (func_801727D0 / func_80172844); 2 / 2 |
| 0x801727D0 | func_801727D0 | WalkPlayerToStep | its phase table (D_80190A8C) | M | e58E0 |
| 0x80172844 | func_80172844 | WalkPlayerToArrive | StepToward; on arrival NextPhase and ClearActionHandler | M | e58E0 |
| 0x80172B14 | func_80172B14 | StartPlayerActionB14 | D_80126B32 = n, action handler func_80172B44 (phase table D_80190AB4) | L | e58E0; 2 / 2 |
| 0x8017303C | func_8017303C | StartPlayerMotionAction | D_80127508 = a motion, action handler func_80173078 (phase table D_80190AD8) | L | e58E0; 6 / 3 |
| 0x80172EFC | func_80172EFC | StartPlayerMotionAction599C | StartPlayerMotionAction with the field overlay's motion 0x800D599C | L | e58E0; 2 / 2 |
| 0x80172F9C | func_80172F9C | EndPlayerMotionAction | motion 0x800D46E4, face 0x11, ClearActionHandler | M | e58E0; 2 / 2 |
| 0x80174824 | func_80174824 | StartActionTable2 | StartPlayerAction(func_80174888, phase table D_80190B78) | M | e58E0; 2 / 1 (as StartActionTable) |
| 0x8017484C | func_8017484C | EndActionTable2 | EndPlayerAction, +0x44 bit 26 cleared | M | e58E0; 2 / 1 |
| 0x80174888 | func_80174888 | RunActionTable2 | D_80190B78[phase] | H | e58E0 |
| 0x801747CC | func_801747CC | RunActionTable | D_80190B70[phase] | H | e58E0 |
| 0x80174808 | func_80174808 | NextPhaseInline | phase += 1 (without NextPhase's sub-count reset) | H | e58E0 |

### Camera helpers and the HUD panel

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80174EF0 | func_80174EF0 | StartCameraPanArg | D_8012697C = n, D_80126980 = v, SetCameraUpdate(func_80174F28, 1) | L | e58E0; 1 / 1 (StartCameraPan's sibling, mode 1) |
| 0x80174F28 | func_80174F28 | CameraPanUpdate | the camera update: D_80190B8C[camera mode] | M | e58E0 |
| 0x80174ED4 | func_80174ED4 | CameraPanDone | D_80126980 bit 15 (as s16) | L | e58E0; 4 / 3 |
| 0x80175014 | func_80175014 | SetCameraViewFromList | a camera's view (+0x3C..+0x54) from record i of a 14-byte list; 1 at the end mark (+0xC = 0x7FFF) | H | e58E0; 4 / 3 |
| 0x80175494 | func_80175494 | LockHudPanel | D_8011F7A8 = 2 | L | e58E0; 2 / 2 (OpenHudPanel / CloseHudPanel only act on states 0 / 1) |

## (b) Musashi's controller and its neighbours, 0x80146128-0x8016F000

The range holds more than the controller: the effect pools' code, the player object's update and its sub-steps,
the face and part routines (already named), the engine's own effect kinds and the HUD slots. It is split by address
below; each slice opens with a short overview. Functions already named in part 1 or in (a) are not repeated.

### 0x8014B000-0x80153000: day clock, statuses, ground and wall probes, surfaces, hit reactions

This slice is Musashi's support code: the day clock (minutes / days in the Stats block), timed status effects
(poison, shrink) and two draining gauges (Stats +0x24 drains to an HP loss, +0x2C drains to falling asleep), finders
and angle helpers, the "strike an actor" record writer, focus / target points, the platform (+0x174), pushable block
(+0x170), pole (+0x17C) and swing bar (+0x180) probes, solid-actor and map traces of the frame's move (+0x88 -> pos),
the floor-below search, pickups, the surface-type handlers (+0x16C, incl. 16 map exits), the hit queue
(+0x3C..+0x42) and eight hit-reaction handler families (each: dispatcher on +2, begin, start, steps, end).

#### Day clock

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014B00C | func_8014B00C | AdvanceClockHours | the clock (Stats +0x1A, 0x80078E92) advanced by n hours (n * 60 minutes) | H | e58E0: func_8014B034(n * 60); 2 stage calls `func_8014B00C(8)` (sc01_005/006, after a sleep sound) |
| 0x8014B034 | func_8014B034 | AdvanceClockMinutes | 0x80078E92 += n; at 0x5A0 (1440 minutes) it wraps and the next day starts | H | e58E0; 3 stage calls (`func_8014B034(0x5A)` sc04_015, `(t)` sc01_005/006) |
| 0x8014B084 | func_8014B084 | NextDay | day count 0x80078EAC += 1 (366 wraps to 1), weekday 0x80078EBA = (+1) % 7, then two EXE day hooks and func_80145C54 | H | e58E0; called by AdvanceClockMinutes and by the per-frame clock tick func_8014ADE0 (same 0x5A0 test) |

#### Status effects and gauges (Stats block 0x80078E78)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014B160 | func_8014B160 | CureStatus | both timed statuses ended: CurePoison and CureShrink | M | e58E0; 1 call (func_80158AE4, next to LeavePlatform) |
| 0x8014B190 | func_8014B190 | UpdatePlayerStatusFlags | per frame: scale +0x68..+0x6C = 0x1000, +0x44 bit 0x200 set when poisoned (+0x1E bit 15), bp < 11, wake gauge < 16 or ability 1 held; while shrunk (+0x22 bit 15) scale 0x555 and bit 0x400 | M | e58E0; 1 call from the player update func_80146128; skipped while PlayerActionBlocksInput or state 0x1E / 0x1A |
| 0x8014B2D0 | func_8014B2D0 | PoisonPlayer | StartPoison on Musashi | M | e58E0: func_8014B310(&D_80126B58); no callers |
| 0x8014B2F8 | func_8014B2F8 | CurePoison | poison words 0x80078E94 (+0x1C) and its saved copy 0x80078ECC (+0x54) = 0 | M | e58E0; called by ClearStatsWords, CureStatus, the antidote pickup func_8015086C (effect 0x48, PlaySe(0xA1B)); abil ovl1c |
| 0x8014B310 | func_8014B310 | StartPoison | +0x1C and +0x54 = 0x80000000 (bit 31 = poisoned, timer 0) | M | e58E0; ProcessPlayerHit calls it for hit kinds with bit 0x2000; 2 calls in func_80153E00 |
| 0x8014B33C | func_8014B33C | SetPoisonWord | 0x80078E94 = 0x80000000 only (the saved copy left alone) | M | e58E0; called by StartPoison; abil ovl24 `func_8014B33C(arg0)` |
| 0x8014B350 | func_8014B350 | UpdatePoison | while +0x1E bit 15: timer += 0x1555 (0xAAA8 asleep); at 61 LoseHp(8), number popup kind 6 (func_8014AD30), StartRumbleScript; same timer step for the saved copy +0x54 | M | e58E0; 1 call from func_80146128 |
| 0x8014B4C4 | func_8014B4C4 | CureShrink | shrink word 0x80078E98 (+0x20) = 0 | M | e58E0; called by CureStatus |
| 0x8014B4D4 | func_8014B4D4 | StartShrink | +0x1C8 = 0, 0x80078E98 = 0x80000000, func_80166244 | M | e58E0; ProcessPlayerHit calls it for hit kinds with bit 0x1000; the 0x400 / scale 0x555 effect is in UpdatePlayerStatusFlags |
| 0x8014B504 | func_8014B504 | UpdateShrink | while +0x22 bit 15 and no player action: += 0x1555 per frame, ends (0) past 0x25 | M | e58E0; 1 call from func_80146128 |
| 0x8014B5D8 | func_8014B5D8 | DrainGauge24 | Stats +0x24 (100 at a new game) -= 0x16C per frame (x4 asleep, x2 when Stats +0x49 == 0x12); empty: LoseHp(4) every 60 ticks (+0x28) | L | e58E0; no direct callers. A hunger-like gauge; neutral name kept |
| 0x8014B6F0 | func_8014B6F0 | AddGauge24 | +0x24 and its saved copy +0x58 += n, each at most 160 | L | e58E0; no direct callers |
| 0x8014B768 | func_8014B768 | SubGauge24 | +0x24 -= n, at least 0 | L | e58E0; 1 call: func_801575E4 `func_8014B768(arg0, 0x333)` in an action start |
| 0x8014B7A4 | func_8014B7A4 | UpdateWakeGauge | asleep (+0x44 bit 0x80): AddWakeGauge(0x16C0, 0x2D80 with flag 0x1B); awake: Stats +0x2C -= 0x16C (0xF2 with flag 0x21, not in 4 maps); empty for 60 ticks: +0x44 bit 0x100 (fall asleep) unless map 0x3051 | M | e58E0; 1 call from func_80146128. Bit 0x100 leads to the sleep state 0x1D (func_80160BB4 sets bit 0x80) |
| 0x8014B944 | func_8014B944 | AddWakeGauge | Stats +0x2C (and +0x60) += n; cap 160 with force or flag 0x1B, else 128 | M | e58E0; 15 calls / 11 files: stages `func_8014B944(m, 0x1000000, 1)` after a sleep; ovl36 0x500000 / 0x900000; ProcessPlayerHit `(o, 0x50000, 1)` for hit bit 0x800 |

#### Player bytes, flags and small setters

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014B5B0 | func_8014B5B0 | ClearPlayerByte1C4 | +0x1C4 = 0 | L | e58E0; 1 call (func_801463A0, per frame). SetPlayer1C4And21C sets the byte |
| 0x8014B5B8 | func_8014B5B8 | GetPlayerByte1C4 | +0x1C4 | L | e58E0; 1 call: func_80149D10 returns 2 instead of 1 when it is set (pad pressed 0x10) |
| 0x8014B5D0 | func_8014B5D0 | ClearObjByte1C7 | +0x1C7 = 0 (pairs with SetObjByte1C7) | M | e58E0; 1 call from func_80146128 |
| 0x8014BDE0 | func_8014BDE0 | NopBDE0 | empty | L | e58E0; no callers |
| 0x8014BDE8 | func_8014BDE8 | CountWalkDistance | with no player action: the horizontal distance from +0x98 to the position handed to func_80029ED4 (the EXE's walked-distance counter, 0x80078F08 up to 9999999) | M | e58E0; 1 call (func_801463A0) |
| 0x8014BFF4 | func_8014BFF4 | SetState4EIfIdle | +0x4E (state4E) = v when it is 0; returns the old value | M | e58E0; 2 calls `func_8014BFF4(arg0, 1)` (func_8015FCC8, func_8015FF20) |
| 0x8014C6AC | func_8014C6AC | EnableAreaKeep | Player +0x1BF = 1: func_801508F8 then pulls Musashi back inside an area each frame | L | e58E0; 7 stage calls (sc02_005, sc06_022, sc06_024) |
| 0x8014C6C0 | func_8014C6C0 | DisableAreaKeep | Player +0x1BF = 0 | L | e58E0; 6 stage calls, the same files |
| 0x8014C6D0 | func_8014C6D0 | ClearPlayerMode1C6 | Player +0x1C6 = 0 | L | e58E0; func_80145CEC (stage set-up) and sc06_029. +0x1C6 picks other movement steps (func_801615C4: func_8016197C instead of func_80161774) |
| 0x8014C6E0 | func_8014C6E0 | SetPlayerMode1C6 | Player +0x1C6 = 1 | L | e58E0; 2 calls in sc06_029 (with effect 0x3B and a height clamp) |
| 0x8014C968 | func_8014C968 | ClearFatalHit | D_80126B50 = 0 | M | e58E0; func_80145CEC (stage set-up) |
| 0x8014C978 | func_8014C978 | SetFatalHit | D_80126B50 = 1, returns 1 | M | e58E0; HitPlayerFatal calls it; sc02_011 |
| 0x8014C98C | func_8014C98C | GetFatalHit | D_80126B50 | M | e58E0; func_80158638 tests `== 0` |
| 0x8014C99C | func_8014C99C | CloseFlaggedMessage | flag 0x119 set and a player action running: CloseMessage(+0x198), +0x198 = 0, flag 0x119 = 0 | M | e58E0; 1 call from func_80146128 |
| 0x8014CB68 | func_8014CB68 | RequestTalkCheck | Player +0x1C5 = 1: next frame the pad reads blank and func_80149E94 looks for an actor of kind 0x83 (SpawnTalkMarker's talk marker) or 0x61 to start (func_80144A04) | M | e58E0; 5 stage calls (sc02_017, sc03_002, sc03_001) when Musashi is near: `if (func_8012BD14(a) < 0x5100) func_8014CB68();` |
| 0x8014CB9C | func_8014CB9C | SetGroundPush | Player +0x140 = a vector, +0x146 = 1: the ground trace adds that offset this frame (func_8014F4C0 / F74C), cleared each frame by func_801463A0 | M | e58E0; 1 stage call sc03_110 `func_8014CB9C(&table[idx * 8])` (a conveyor / current) |
| 0x8014CBD8 | func_8014CBD8 | ClearPlayerWord184 | Player +0x184 = 0 | L | e58E0; no callers. +0x184 is an actor pointer with a bit-31 flag (func_80163EC8, func_8015FF20) |
| 0x8014CBE8 | func_8014CBE8 | ClearPlayerSurface | Player +0x16C (surface type of the last trace) = 0 | M | e58E0; 1 stage call (sc04_015); the debug print func_80136DFC shows the same word |

#### Finders, distances and angles

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014C0C8 | func_8014C0C8 | FindActorByKindAndDefE | the first of the 96 actors with state == kind and +0xFC (the definition's unkE) == v | M | e58E0; no callers (sibling of func_8014C118) |
| 0x8014C118 | func_8014C118 | FindActorByKindAnd70 | the first actor with state == kind and +0x70 (the definition's unk8) == v | M | e58E0; 2 calls: `D_80127508 = func_8014C118(&D_80126B58, kind, (s16) n)` (func_801736B0, func_80173A60) |
| 0x8014C1A0 | func_8014C1A0 | ClipObjBehindWallDef | ClipObjBehindWall with the default offset D_8018F14C | M | e58E0; 2 calls before StrikeActor kinds 9 / 0x11 (func_8015DD74, func_8015E0D4); abil ovl29 |
| 0x8014C1C8 | func_8014C1C8 | ClipObjBehindWall | TraceMap(1) from a to b + offset; on a hit b's whole position = the trace end | M | e58E0; called by ClipObjBehindWallDef |
| 0x8014C278 | func_8014C278 | IsObjWithin | the 3D distance between two objects' positions < r | H | e58E0 (func_80013328 = sqrt of the summed squares); 12 calls: `func_8014C278(arg0, p, 0x40) != 0` in abil ovl19/2a/2b/2e/31/34 and the pickup scan |
| 0x8014C2B0 | func_8014C2B0 | IsFacingObj | the angle between a's model heading and GetHeadingToObj(a, b) < n | M | e58E0; 1 call `func_8014C2B0(arg0, o, 0x200)` (func_8014A238) |
| 0x8014C568 | func_8014C568 | GetHeadingToPoint | ratan2(x - p.x, z - p.z) & 0xFFF: the heading an object turns to for a point | H | e58E0; FacePoint uses it; sc06_025 sets a model heading with it; 4 calls |
| 0x8014C59C | func_8014C59C | GetHeadingToObj | the same heading towards another object's position | H | e58E0; 6 calls (sc07_002 `D_8012696A = func_8014C59C(&D_80126B58, p)`, abil ovl2d / ovl34 turn steps) |
| 0x8014C5D0 | func_8014C5D0 | GetPitchToObj | GetPitchToObjOffset with the default offset D_8018F154 | M | e58E0; no callers |
| 0x8014C5FC | func_8014C5FC | GetPitchToObjOffset | ratan2(dy, horizontal distance) to b + offset: the up / down angle | M | e58E0; abil ovl2d sets a model's x rotation with it (next to GetHeadingToObj for y) |
| 0x8014C918 | func_8014C918 | SurfaceIndexOf | an actor's surface byte (+0x75) as an index: its slot in the 8-entry table D_801151F0, 0x18 -> 8, else 0 | M | e58E0; 7 calls, all store it to Player +0x16E when standing on an actor |

#### Striking actors

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014C308 | func_8014C308 | CanStrikeActor | the actor is live, has hitData, is not already hit by this kind, is hittable (flags5C & 0xC100 == 0x8000), not immune (+0xAE & mask) and not Musashi's last target (+0x178) except for kinds 9 / 0x11 / 0x29 / 0xA | M | e58E0; 9 calls: `func_8014C308(arg0, p, 0x2A, 0x20) != 0 && IsObjWithin(...)` in the ability packages |
| 0x8014C3A4 | func_8014C3A4 | StrikeActorFacing | StrikeActorWithDamage with the attacker's model heading as the hit direction | M | e58E0; 12 calls: `func_8014C3A4(&D_80126B58, o, 0x25, &v)` (sc06_018/032/033), abil ovl19/2b/2e/31/34 |
| 0x8014C3D0 | func_8014C3D0 | StrikeActorToward | StrikeActorWithDamage with GetHeadingToObj(attacker, actor) as the direction | M | e58E0; 1 call (abil ovl2a) |
| 0x8014C43C | func_8014C43C | StrikeActorWithDamage | StrikeActor with damage = func_80156370(kind) (the kind's base + rand range from D_8018F570) | M | e58E0; called by the two above |
| 0x8014C4AC | func_8014C4AC | StrikeActor | writes a hit into an actor: +0x5E kind, +0x60 damage, +0x62 direction, flags5C bit 0, +0x7C hit point, +0xC8 / +0xC9 from two globals; refused when the actor is dead or is Musashi's last target (+0x178) for single-hit kinds; returns the actor | H | e58E0; 12 calls: `func_8014C4AC(o, 0x1C, 0, &a, model->rot.y)` etc. |
| 0x801508B4 | func_801508B4 | StrikeTouchedActor | the first hittable actor (flags5C 0x8000, +0xAA set) within 0x30 (func_8014A2E4) gets StrikeActor kind 0x1F (func_8014A380); 1 if any | M | e58E0; 1 call from engine.c func_801287B8 (per frame, with Musashi) |

#### Focus and target points

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014C6F4 | func_8014C6F4 | UpdatePlayerPoints | per frame: +0x164 = the model's +0x10 vector; target point +0x15C = his position (or the kind-0x22 object's in mode 0x17), +0x162 = 1 (unset) during an action or while weak (bit 0x200); focus +0x154 = his position unless overridden this frame (+0x15A) | M | e58E0; 1 call (func_801463A0) |
| 0x8014C860 | func_8014C860 | SetPlayerFocus | focus +0x154 = a point, +0x15A = 1 (keeps it for this frame) | H | e58E0; 1 stage call sc03_030 `func_8014C860((u8 *)p - 0xE, q)` |
| 0x8014C88C | func_8014C88C | SetTargetPointToSelf | SetTargetPoint with the object's own whole position | M | e58E0; 3 stage calls sc03_030 `func_8014C88C(arg0)` |
| 0x8014C8C8 | func_8014C8C8 | SetTargetPoint | target point +0x15C = a point, +0x162 = 0 (set) | H | e58E0; called by SetTargetPointToSelf (game.h: +0x162 nonzero = not set) |
| 0x8014C8F0 | func_8014C8F0 | SetTargetPointToSafePos | target point +0x15C = +0x90 (the last safe position, see func_80153800) | L | e58E0; 2 calls: the hit entries func_801516F0 / func_8015173C |

#### Actor init-record sounds

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014CA00 | func_8014CA00 | GetInitWord2C | the s16 at the actor's init record (+0x78) + 0x2C | L | e58E0; 3 uses in func_80163EC8 (added to +0x188, stored to +0x184) |
| 0x8014CA14 | func_8014CA14 | PlayInitSeA | the sound GetInitSeA(o, i) positional, unless it is the skip id (g_SkipSeId cleared then); 1 when there was none | M | e58E0; 1 call in func_80156A88 (motion sound events for the objects in D_801150E0) |
| 0x8014CA70 | func_8014CA70 | GetInitSeA | the u16 at init + 0x14 + 2i | M | e58E0; read by PlayInitSeA (a0 / a1 passed through) |
| 0x8014CA88 | func_8014CA88 | PlayInitSeB | as PlayInitSeA with the table at init + 0x1C | M | e58E0; 1 call in func_80156A88 (event flag 0x02000000) |
| 0x8014CAE4 | func_8014CAE4 | GetInitSeB | the u16 at init + 0x1C + 2i | M | e58E0; read by PlayInitSeB |

#### Standing on actors (platform +0x174)

All the probe wrappers run their body on the scratchpad stack (SetSpadStackNested) and leave the result in D_801ED4D8.
A platform is a live actor with flags5C 0x400 and hitData; Player +0x174 points to it, its +0x74 = 1 while ridden, and
Player +0x16E gets SurfaceIndexOf(its +0x75).

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014CBF8 | func_8014CBF8 | LeavePlatform | +0x174 = NULL and the platform's +0x74 = 0 | H | e58E0; 12 calls / 4 files (knockback starts func_801520DC etc., sc04_011, sc05_010, abil ovl31) |
| 0x8014CCB4 | func_8014CCB4 | ProbePlatformStill | the still case of PlayerObjFallStep (no height or x / z change) | M | e58E0; called by PlayerObjFallStep |
| 0x8014CD0C | func_8014CD0C | ProbePlatformStillBody | a 3-down / 5-up segment at his feet: KeepPlatformStill when riding, else FindPlatformStill | M | e58E0 |
| 0x8014CD80 | func_8014CD80 | KeepPlatformStill | the ridden platform still under him (from +0x98): position follows it (also +0x78..+0x7C for flags5C 8 movers); else LeavePlatform-like clear | M | e58E0 (PathHitsMovingModel / PathHitsModel) |
| 0x8014CF04 | func_8014CF04 | FindPlatformStill | the first platform (not +0x178 or the ridden one, not below him) the segment hits becomes +0x174, he is put on it | M | e58E0 |
| 0x8014D04C | func_8014D04C | ProbePlatformSlide | the x / z-changed case of PlayerObjFallStep | M | e58E0; doc1's "slide step" |
| 0x8014D0A4 | func_8014D0A4 | ProbePlatformSlideBody | the move +0x88 -> position: KeepPlatformSlide or FindPlatformSlide | M | e58E0 |
| 0x8014D12C | func_8014D12C | KeepPlatformSlide | the moving check against the ridden platform (segment from +0x98, 0x18 deep for flags5C 8) | M | e58E0 |
| 0x8014D2A0 | func_8014D2A0 | FindPlatformSlide | a platform hit by the move puts him on it (does not set +0x174) | M | e58E0 |
| 0x8014D3E0 | func_8014D3E0 | ProbePlatformFall | the height-changed case of PlayerObjFallStep | M | e58E0; doc1's "fall step"; also func_80157880 (with PushOutOfSolidActors and ClipMoveToMap) |
| 0x8014D438 | func_8014D438 | ProbePlatformFallBody | the fall +0x88 -> position: KeepPlatformFall or FindPlatformFall | M | e58E0 |
| 0x8014D4C0 | func_8014D4C0 | KeepPlatformFall | the fall checked against the ridden platform | M | e58E0 |
| 0x8014D610 | func_8014D610 | FindPlatformFall | a platform the fall hits becomes +0x174 (landing on it) | M | e58E0 |

#### Pushable blocks (+0x170, flags5C 0x1000)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014D738 | func_8014D738 | PushBlock | spad wrapper of PushBlockBody; nonzero while a block is pushed | M | e58E0; 8 calls from player states (func_8015A3C8, func_8015C128, func_8015D738 ...) `if (func_8014D738(arg0) != 0)` |
| 0x8014D790 | func_8014D790 | PushBlockBody | the move at waist height (-0x10): PushHeldBlock when +0x170 is set, else FindPushBlock | M | e58E0 |
| 0x8014D820 | func_8014D820 | PushHeldBlock | moving into the held block (within 0x400 of its direction): the block is moved by the step (clipped against other actors and TraceMap), Musashi follows; else +0x170 = NULL | M | e58E0 (map 0x3008 uses three rays, BlockRaysHitActor) |
| 0x8014DCE0 | func_8014DCE0 | BlockRaysHitActor | any of three rays from a point hits an actor's model | M | e58E0; 1 call (PushHeldBlock) |
| 0x8014DD8C | func_8014DD8C | FindPushBlock | the first flags5C-0x1000 actor the move runs into, in front (angle < 0x400), becomes +0x170 | M | e58E0 |
| 0x8014DF3C | func_8014DF3C | PullBlock | spad wrapper of PullBlockBody | M | e58E0; no callers |
| 0x8014DF94 | func_8014DF94 | PullBlockBody | the move mirrored (target = 2 * last - position): PullHeldBlock or FindPullBlock | M | e58E0 |
| 0x8014E048 | func_8014E048 | PullHeldBlock | the held block moved the other way, unless TraceMap blocks it (then Musashi goes back to +0x88) | M | e58E0 |
| 0x8014E284 | func_8014E284 | FindPullBlock | FindPushBlock on the mirrored move | M | e58E0 |

#### Poles (+0x17C, flags5C 0x40) and swing bars (+0x180, flags5C 0x20)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014E434 | func_8014E434 | GrabPole | spad wrapper of GrabPoleBody; nonzero while on a pole | M | e58E0; 2 calls: func_8015AE2C enters player state 0xB (turns +-0x71 around it, PlaySe(0x6A7)); func_8015CD20 leaves the state when it fails |
| 0x8014E48C | func_8014E48C | GrabPoleBody | KeepPole when +0x17C is set, else FindPole | M | e58E0 |
| 0x8014E514 | func_8014E514 | KeepPole | the held pole still crossed by the move: x / z snap to it; else +0x17C = NULL | M | e58E0 |
| 0x8014E5B4 | func_8014E5B4 | FindPole | the first flags5C-0x40 actor the move crosses becomes +0x17C, x / z snap | M | e58E0 |
| 0x8014E6A0 | func_8014E6A0 | GrabBar | spad wrapper of GrabBarBody | M | e58E0; 3 calls: func_8015AE2C enters state 0xC (the swing: model x rotation, PlaySe(0x5E9) per turn, D_800D550C), func_8015D104 / func_8015D1B8 |
| 0x8014E6F8 | func_8014E6F8 | GrabBarBody | KeepBar when +0x180 is set, else FindBar at hand height (0x54 up) | M | e58E0 |
| 0x8014E790 | func_8014E790 | KeepBar | the held bar still crossed: the whole position snaps to it; else +0x180 = NULL | M | e58E0 |
| 0x8014E83C | func_8014E83C | FindBar | the first flags5C-0x20 actor crossed becomes +0x180 | M | e58E0 |

#### Solid actors (flags5C 0x1800)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014E98C | func_8014E98C | CollidePlayerMoveBody | unless +0x44 bit 0x80000 or action flag 0x4000000: two passes of CollideSolidActorsPass over the move at -0x10; ORs their results | M | e58E0; body of CollidePlayerMove |
| 0x8014EA4C | func_8014EA4C | CollideSolidActorsPass | every solid actor (not +0x178 / +0x174) the move hits: a side hit (D_801150D8 bit 0) puts him 7 / 8 units off the contact (result 2, not for flags5C 0x10); a top hit puts him on it (result 1; steep faces push him off) | M | e58E0 |
| 0x8014ED28 | func_8014ED28 | PushOutOfSolidActors | spad wrapper of PushOutOfSolidActorsBody | M | e58E0; 11 calls: player states (func_80155C64, func_8015795C, func_8015F448 ...) `if (func_8014ED28(arg0) != 0)`, abil ovl31 x3 |
| 0x8014ED80 | func_8014ED80 | PushOutOfSolidActorsBody | the same guards as CollidePlayerMoveBody, one segment at -0x10 | M | e58E0 |
| 0x8014EE14 | func_8014EE14 | PushOutOfSolidActorsPass | one pass like CollideSolidActorsPass, result 1 on any hit (+0x44 bit 0x100000 picks the variant without the steep-face push) | M | e58E0 |
| 0x8014F1F4 | func_8014F1F4 | MoveHitsSolidActor | spad wrapper: 1 when the move hits a solid actor (no correction) | M | e58E0; 1 call: func_8015F448 restores the saved position when it is 1 |
| 0x8014F24C | func_8014F24C | MoveHitsSolidActorBody | the guarded segment for AnySolidActorOnPath | M | e58E0 |
| 0x8014F2E0 | func_8014F2E0 | AnySolidActorOnPath | 1 if any solid actor's model is hit by the segment | M | e58E0 |

#### Ground and map traces

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014F468 | func_8014F468 | ProbeGroundStill | spad wrapper (result in D_801ED4DC) for the not-moved case of PlayerObjGroundStep | M | e58E0 |
| 0x8014F4C0 | func_8014F4C0 | ProbeGroundStillBody | TraceMap(0) from +0x88 to 8 below his position (TraceGroundMoveBody when a ground push is set); records surface +0x16C, +0x16E = pad >> 13, normal +0x120; surface 0x1D counts as steep (0x4000) unless flag 0x21 | M | e58E0 |
| 0x8014F6F4 | func_8014F6F4 | TraceGroundMove | spad wrapper for the moved case of PlayerObjGroundStep | M | e58E0 |
| 0x8014F74C | func_8014F74C | TraceGroundMoveBody | TraceMap(0) of the move (+ ground push +0x140): the position = the trace end, surface / normal as above; 0x8000 when the move was fully blocked | M | e58E0; also used by ProbeGroundStillBody |
| 0x8014FA04 | func_8014FA04 | ClipMoveToMap | unless +0x44 bit 0x40000: spad wrapper of ClipMoveToMapBody | M | e58E0; 9 calls from climbing / swinging / special states (func_8015CD20, func_8015D104, func_8015F448, func_801615C4 ...) |
| 0x8014FA70 | func_8014FA70 | ClipMoveToMapBody | TraceMap(1) from +0x88 to the position; on a hit the position = the end, surface kept (0x1D as steep) | M | e58E0; also run by CommitPlayerMove |
| 0x8014FBC0 | func_8014FBC0 | SnapToFloor | spad wrapper of SnapToFloorBody | M | e58E0; no callers |
| 0x8014FC18 | func_8014FC18 | SnapToFloorBody | TraceMap(1) from the position to 0x10 below; on a hit he is put there | M | e58E0 |
| 0x8014FCFC | func_8014FCFC | IsClimbWallAhead | spad wrapper of IsClimbWallAheadBody | M | e58E0; 1 call: func_8015F448 jumps off (fall speed -0x180000) when it is 0 |
| 0x8014FD54 | func_8014FD54 | IsClimbWallAheadBody | a ray from 7 in front to 0x18 behind (func_80149290, model space): 1 when it hits a wall (0x8000) of surface 0x15 | M | e58E0 |
| 0x80150A70 | func_80150A70 | CommitPlayerMove | when the position changed: ClipMoveToMapBody (unless +0x44 bit 0x40000), then +0x88 = the position | M | e58E0; 1 call from func_80146128 |

#### Floor below Musashi (+0x78 point, +0x80 normal)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014FDF4 | func_8014FDF4 | FindFloorBelowPlayer | FindFloorBelowMoved when the position changed since +0x88, else FindFloorBelowStill | M | e58E0; 1 call from engine.c func_801287B8 (per frame, &D_80126B58) |
| 0x8014FE60 | func_8014FE60 | FindFloorBelowStill | the higher of the platform floor and the map floor below: +0x78..+0x7C = the point, +0x80 = its normal, +0x7E bit 0 cleared; none: height 0x7FFF and bit 0 set | M | e58E0 (likely the shadow's floor) |
| 0x8014FFDC | func_8014FFDC | FindPlatformFloorA | the highest floor on a platform actor (flags5C 0x400) below a point (FindGroundOnModel), with its normal | M | e58E0; 1 call (FindFloorBelowStill) |
| 0x80150150 | func_80150150 | FindMapFloorA | FindGround(p) != 0 | M | e58E0; 1 call (FindFloorBelowStill) |
| 0x80150170 | func_80150170 | FindFloorBelowMoved | a copy of FindFloorBelowStill (calls the B copies) | M | e58E0 |
| 0x801502EC | func_801502EC | FindPlatformFloorB | a copy of FindPlatformFloorA | M | e58E0 |
| 0x80150460 | func_80150460 | FindMapFloorB | a copy of FindMapFloorA | M | e58E0 |

#### Exit actors, pickups and the area keep

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80150480 | func_80150480 | ProbeExitActor | spad wrapper of ProbeExitActorBody | M | e58E0; 1 call (TakeActorExit) |
| 0x801504D8 | func_801504D8 | ProbeExitActorBody | a 3-up / 1-down segment at his feet for FindExitActorOnPath | M | e58E0 |
| 0x80150528 | func_80150528 | FindExitActorOnPath | the first actor with flags5C 0x80 the segment hits: Player +0x1A4 = it, 1 | M | e58E0; TakeActorExit reads the map-change record from that actor's +0xDC |
| 0x801505FC | func_801505FC | CollectPickups | the first live pickup actor (flags5C 0x100) within 0x30: ApplyPickup, 1 | M | e58E0; 1 call from engine.c func_801287B8 (per frame, &D_80126B58) |
| 0x801506A4 | func_801506A4 | ApplyPickup | marks the pickup taken (flags5C bit 0); kind 0x31 AddMoney + popup 3, 0x32 AddHp(force) + popup 2 (not at 0 HP), 0x33 GainBpShown, 0xC5 / 0x27B CurePoisonWithFx; PlaySe(0x452); amounts by the actor's +0x70 from D_8018F16C / 74 / 7C | H | e58E0; 2 calls (CollectPickups, func_80163764) |
| 0x80150820 | func_80150820 | GainBpShown | AddBp(n) and a popup kind 4, when n is not 0 | M | e58E0; ApplyPickup and func_8015FF20 |
| 0x8015086C | func_8015086C | CurePoisonWithFx | effect 0x48 on him, CurePoison, PlaySe(0xA1B) | M | e58E0; ApplyPickup kinds 0xC5 / 0x27B (the antidote pickups) |
| 0x801508F8 | func_801508F8 | KeepPlayerInArea | while Player +0x1BF is set (EnableAreaKeep) and state != 0x1A: PullPlayerIntoArea until it returns 0 | L | e58E0; 1 call (func_801463A0). Defined s32 with no return (docs/decomp_recipes.md) |
| 0x8015094C | func_8015094C | PullPlayerIntoArea | when his x / z point is outside the shape D_8018F184 (func_80021174): x / z moved 4 towards D_80126990 / the camera's +0x50; 1 while outside | L | e58E0 |

#### Surface handlers (Player +0x16C) and map exits

RunSurfaceHandler calls D_8018F188[surface - 1] for surface types 1..0x25. The table's data is not in the repository;
the functions 0x80150B9C..0x80151138 have no direct callers and sit in order between the dispatcher and QueueHit, so
they are taken as its entries (if the table is in address order, 0x80150B9C is type 1 and the exits are types 6..21).
"QueueHit(k, d)" below = func_80151184: hit kind k, damage d.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80150B28 | func_80150B28 | RunSurfaceHandler | unless a map change is pending (0x800AE6B0 & 0x80FFFFFF): D_8018F188[+0x16C - 1](o) for types 1..0x25; then +0x16C = 0 | H | e58E0; 1 call (func_80159A20, right before ProcessPlayerHit) |
| 0x80150B9C | func_80150B9C | SurfaceNop1 | empty | L | e58E0; no callers (table entry) |
| 0x80150BA4 | func_80150BA4 | HurtBySurface1 | QueueHit(1, 0x10) | M | e58E0; no callers (table entry) |
| 0x80150BC8 | func_80150BC8 | HurtBySurfaceC003 | in guard mode 3 (func_801619D0): effect 0x34 every 8 frames; else unless variable 0xCF: QueueHit(0xC003, 0x10) | L | e58E0; no callers (table entry) |
| 0x80150C48 | func_80150C48 | TakeActorExit | standing on an exit actor (ProbeExitActor): the map-change record 0x800AE6B0 = its +0xDC, 0x800AE6DC = its +0xFC | M | e58E0; no callers (table entry); docs/stage_loader.md: 0x800AE6B0 is the map-change record |
| 0x80150CA0 | func_80150CA0 | HurtBySurfaceE001 | QueueHit(0xE001, 0x10) | M | e58E0; no callers (table entry) |
| 0x80150CC4 | func_80150CC4 | TakeExit0 | StartExit(o, 0) | M | e58E0; no callers (table entry) |
| 0x80150CE4 | func_80150CE4 | TakeExit1 | StartExit(o, 1) | M | e58E0; no callers (table entry) |
| 0x80150D04 | func_80150D04 | TakeExit2 | StartExit(o, 2) | M | e58E0; no callers (table entry) |
| 0x80150D24 | func_80150D24 | TakeExit3 | StartExit(o, 3) | M | e58E0; no callers (table entry) |
| 0x80150D44 | func_80150D44 | TakeExit4 | StartExit(o, 4) | M | e58E0; no callers (table entry) |
| 0x80150D64 | func_80150D64 | TakeExit5 | StartExit(o, 5) | M | e58E0; no callers (table entry) |
| 0x80150D84 | func_80150D84 | TakeExit6 | StartExit(o, 6) | M | e58E0; no callers (table entry) |
| 0x80150DA4 | func_80150DA4 | TakeExit7 | StartExit(o, 7) | M | e58E0; no callers (table entry) |
| 0x80150DC4 | func_80150DC4 | TakeExit8 | StartExit(o, 8) | M | e58E0; no callers (table entry) |
| 0x80150DE4 | func_80150DE4 | TakeExit9 | StartExit(o, 9) | M | e58E0; no callers (table entry) |
| 0x80150E04 | func_80150E04 | TakeExit10 | StartExit(o, 10) | M | e58E0; no callers (table entry) |
| 0x80150E24 | func_80150E24 | TakeExit11 | StartExit(o, 11) | M | e58E0; no callers (table entry) |
| 0x80150E44 | func_80150E44 | TakeExit12 | StartExit(o, 12) | M | e58E0; no callers (table entry) |
| 0x80150E64 | func_80150E64 | TakeExit13 | StartExit(o, 13) | M | e58E0; no callers (table entry) |
| 0x80150E84 | func_80150E84 | TakeExit14 | StartExit(o, 14) | M | e58E0; no callers (table entry) |
| 0x80150EA4 | func_80150EA4 | TakeExit15 | StartExit(o, 15) | M | e58E0; no callers (table entry) |
| 0x80150EC4 | func_80150EC4 | StartExit | map exit n: 0x800AE6C0 = 1, his whole position and model heading saved (0x800AE6C8..CE), the record 0x800AE6B0 = the stage's exit table D_800AE6C4[n + 1], 0x800AE6BE = n + 1, the camera copied to g_KeptCamera | H | e58E0; 16 calls (TakeExit0..15); docs/stage_loader.md (0x800AE6BE / 0x800AE6B0 fields of the block at 0x800AE6A8) |
| 0x80150F78 | func_80150F78 | SurfaceNop2 | empty | L | e58E0; no callers (table entry) |
| 0x80150F80 | func_80150F80 | HurtBySurfaceC007 | unless ability 0xC is held (D_80078EC1): QueueHit(0xC007, 0x20) | M | e58E0; no callers (table entry) |
| 0x80150FB4 | func_80150FB4 | HurtBySurface8 | QueueHit(8, 0) | M | e58E0; no callers (table entry) |
| 0x80150FD8 | func_80150FD8 | SplashOnSurface | effect 0x34 on him every 8 frames | L | e58E0; no callers (table entry); the same effect as HurtBySurfaceC003's guard case |
| 0x80151014 | func_80151014 | HurtBySurfaceC00B | QueueHit(0xC00B, 0x20) | M | e58E0; no callers (table entry) |
| 0x80151038 | func_80151038 | HurtBySurfaceC00C | QueueHit(0xC00C, 0x18; 0x30 in map 0x30A0) | M | e58E0; no callers (table entry) |
| 0x80151070 | func_80151070 | HurtBySurfaceE003 | QueueHit(0xE003, 0x10) | M | e58E0; no callers (table entry) |
| 0x80151094 | func_80151094 | HurtBySurfaceC00D | QueueHit(0xC00D, 0x18) | M | e58E0; no callers (table entry) |
| 0x801510B8 | func_801510B8 | SurfaceNop3 | empty | L | e58E0; no callers (table entry) |
| 0x801510C0 | func_801510C0 | SurfaceNop4 | empty | L | e58E0; no callers (table entry) |
| 0x801510C8 | func_801510C8 | HurtBySurface4018 | QueueHit(0x4018, 0x20) | M | e58E0; no callers (table entry) |
| 0x801510EC | func_801510EC | HurtBySurfaceE016 | QueueHit(0xE016, 0x10) | M | e58E0; no callers (table entry) |
| 0x80151110 | func_80151110 | KillBySurface | HitPlayerFatal | M | e58E0; no callers (table entry) |
| 0x80151130 | func_80151130 | SurfaceNop5 | empty | L | e58E0; no callers (table entry) |
| 0x80151138 | func_80151138 | HurtBySurfaceC01F | QueueHit(0xC01F, 0x10) | M | e58E0; no callers (table entry) |
| 0x8015115C | func_8015115C | SetPlayerSurface | +0x16C = v | M | e58E0; no callers |
| 0x80151164 | func_80151164 | QueueHitDamage10 | QueueHit(kind, 0xA) | M | e58E0; no callers |

#### Hit queue and hit processing

Fields pinned here: +0x3C bit 0 = a hit is queued, +0x3E kind, +0x40 damage, +0x42 facing; +0xF0 / +0xF2 / +0xF4 = the
accepted hit's copies; +0xDD = the hit handler index (the kind's low byte), +0xDE = the previous state / a counter;
+0xA8 = invincibility frames after a hit (odd frames hide him).

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80151184 | func_80151184 | QueueHit | +0x3E = kind, +0x40 = damage, +0x42 = the model heading, +0x3C bit 0 | H | e58E0; 13 calls, all the surface handlers (`func_80151184(arg0, 0xC00B, 0x20)`) |
| 0x801511A8 | func_801511A8 | ClearHit | +0x3E / +0x40 / +0x42 = 0, +0x3C bit 0 cleared | H | e58E0; EndPlayerActionOf calls it |
| 0x801511C4 | func_801511C4 | SaveHitInfo | +0xF0 / +0xF2 / +0xF4 = +0x3E / +0x40 / +0x42 | M | e58E0; no callers (ProcessPlayerHit does the same inline) |
| 0x80151204 | func_80151204 | ShowDamageNumber | damage popup (func_8014ACE8 kind 1) of n & 0x7FFF unless n is 0 or 1000 | M | e58E0; 10 calls: the hit starts `func_80151204(arg0, +0xF2)`, ApplyQueuedHurt, sc07_002 `func_80151204(o, r)` |
| 0x80151238 | func_80151238 | ShowBpLossNumber | popup kind 5 of +0xF2 when nonzero | M | e58E0; no callers. StartHitKnockback uses kind 5 for handler 0x11, whose end spends BP instead of HP |
| 0x8015126C | func_8015126C | ProcessPlayerHit | per frame: invincibility count (+0xA8, blink), drops a queued hit while invincible, in a map change or without bit 0x8000; else counter / guard checks, copies to +0xF0.., handler +0xDD = kind, damage scaled (func_80029D3C, halved in mode 5 or with PlayerFlag800), EnterHitState; kind bits 0x2000 StartPoison, 0x1000 StartShrink, 0x800 AddWakeGauge(5), 0x400 stop | M | e58E0; 1 call (func_80159A20, after RunSurfaceHandler) |
| 0x801516F0 | func_801516F0 | EnterHitStateSub1 | EnterHitState with sub-state 1 | M | e58E0; no callers |
| 0x8015173C | func_8015173C | EnterHitState | SetTargetPointToSafePos, +0xDE = old kind, kind 0x19 (SetKindAndState), RunHitHandler | M | e58E0; 1 call (ProcessPlayerHit) |
| 0x80151780 | func_80151780 | RunHitHandler | the handler +0x1F0[+0xDD - 1] for 1..0x20 (damage via func_80029D3C unless 1000), else entry 3; a missing entry runs HitHandlerNop; +0xF0 bit 0x200 adds func_80153B58 | H | e58E0; called by the two entries above; the +0x1F0 hit handler table (brief) |
| 0x80151878 | func_80151878 | HitHandlerNop | empty | L | e58E0; 1 call (RunHitHandler, missing entry) |
| 0x80151880 | func_80151880 | GetHitGuardClass | for hit kinds 0x1B / 0x1C / 0xF / 0x10 / 0x1F: 1, 0xB: 2, else kind bit 9 (0 or 2) | L | e58E0; 2 calls in ProcessPlayerHit: with func_801619D0 (guard mode 3) a nonzero class cancels the damage (func_800CCF68); class 2 plays PlaySe(0x676) |
| 0x801518D8 | func_801518D8 | IsHitGuardedMode4 | 1 for hit kinds 0x1B / 0x1C / 0xF / 0x10 / 3 / 0x13 / 0x17 | L | e58E0; 1 call in ProcessPlayerHit with func_80161A00 (mode 4) -> func_800CCF58 |

#### Hit handlers (entries of the +0x1F0 table and their steps)

Each family: an entry that dispatches on +2 (D_8018Fxxx[sub]), a begin step (CollidePlayerMove, PlayerObjFallStep,
PlayerObjGroundStep, start, NextEffectState), the start, its steps, and an end that applies the damage (DamagePlayerHp
of +0xF2), sets +0xA8 = 0x20 (not in the sleep family), and resets face 0x11, parts, hit fields, scale and fall speed
(the same tail as ResetPlayerAfterHit). Which hit index uses which family is in the table data, not in the repository.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80151924 | func_80151924 | RunKnockbackHit | entry: RunKnockbackSub (a0 passed through) | M | e58E0; no callers (table entry) |
| 0x80151944 | func_80151944 | RunKnockbackSub | D_8018F21C[+2](o) | H | e58E0; 1 call (RunKnockbackHit) |
| 0x80151980 | func_80151980 | KnockbackHitBegin | the begin step, StartHitKnockback | M | e58E0; no callers (D_8018F21C entry) |
| 0x801519C8 | func_801519C8 | StartHitKnockback | rumble, damage popup (BP popup kind 5 for handler 0x11), front / back motion by the hit facing (D_800D5880 / D_800D58AC), face 0x16, PlaySe(0x451); old kinds 2, 3, 0xB skip a state | M | e58E0; 1 call (KnockbackHitBegin) |
| 0x80151AE4 | func_80151AE4 | KnockbackGroundStep | motion done (+0xB8 == 0x8000): EndKnockback, ResetPlayerKind; off the ground: EndKnockback and func_8015BDD0 (fall); then DropTimedAbility | M | e58E0; no callers (D_8018F21C entry) |
| 0x80151B98 | func_80151B98 | KnockbackAirStep | MovePlayerObj until landing: EndKnockback, ResetPlayerKind or SetPlayerKind4, SpawnEffect2(o, 1) | M | e58E0; no callers (D_8018F21C entry) |
| 0x80151C54 | func_80151C54 | EndKnockback | the end; handler 0x11 spends BP (SpendBp) instead of HP | M | e58E0; 6 calls (the two steps) |
| 0x80151D24 | func_80151D24 | RunFlattenHit | entry: D_8018F22C[+2]() | M | e58E0; no callers (table entry) |
| 0x80151D60 | func_80151D60 | FlattenHitBegin | the begin step, StartFlattenHit, +0xDE = 0x20 | M | e58E0; no callers (D_8018F22C entry) |
| 0x80151DB0 | func_80151DB0 | StartFlattenHit | rumble D_80062C14, damage popup, the motion, model laid flat (x rotation 0xC00 / 0x400 by the facing), scale +0x64 = 0xCC, PlaySe(0x436), SetPlayerState1F4Bit100 | M | e58E0; 1 call |
| 0x80151E78 | func_80151E78 | FlattenHitWait | counts +0xDE down, then 0x10 and the next step | M | e58E0; no callers (D_8018F22C entry) |
| 0x80151ECC | func_80151ECC | FlattenHitStretch | +0x64 grows by +0xDE * 64 (accelerating) to 0x1556 | M | e58E0; no callers (D_8018F22C entry) |
| 0x80151F38 | func_80151F38 | FlattenHitSettle | +0x64 shrinks back below 0x1000: EndFlattenHit, ResetPlayerKind, DropTimedAbility | M | e58E0; no callers (D_8018F22C entry) |
| 0x80151FB4 | func_80151FB4 | EndFlattenHit | the end | M | e58E0; 1 call |
| 0x80152058 | func_80152058 | RunPitFallHit | entry: D_8018F250[+2]() | M | e58E0; no callers (table entry) |
| 0x80152094 | func_80152094 | PitFallHitBegin | the begin step, StartPitFall | M | e58E0; no callers (D_8018F250 entry) |
| 0x801520DC | func_801520DC | StartPitFall | rumble, popup, SetPlayerFlag7E2, +0xDE = 0x10, accel D_8018F240, fall speed +0x40000 (down), LeavePlatform, func_801474EC, SpawnEffect 0x10 at him, PlaySe(0x441) | M | e58E0; 1 call |
| 0x80152194 | func_80152194 | PitFallDrop | moves and falls for 16 frames, then HidePlayerAbility and the stage's pit hook (func_8015369C: D_8011DB28, +0xDE = 0x5A) | M | e58E0; no callers (D_8018F250 entry) |
| 0x8015220C | func_8015220C | PitFallWait | waits for func_801536DC == 0 | L | e58E0; no callers (D_8018F250 entry) |
| 0x80152254 | func_80152254 | PitFallRespawn | when func_80153800 has found a safe spot: position = +0x88, velocity 0, EndPitFall, ResetPlayerKind | M | e58E0; no callers (D_8018F250 entry); func_80153800 searches rings around +0xA0 for a floor |
| 0x801522CC | func_801522CC | EndPitFall | the end | M | e58E0; 1 call |
| 0x80152370 | func_80152370 | RunBlowbackHit | entry: D_8018F264[+2]() | M | e58E0; no callers (table entry) |
| 0x801523AC | func_801523AC | BlowbackHitBegin | the begin step, StartBlowback | M | e58E0; no callers (D_8018F264 entry) |
| 0x801523F4 | func_801523F4 | StartBlowback | timer 0, rumble, popup, front / back motion, face 0x16, velocity D_8018F270 turned to the hit direction, fall speed from its +0xC, PlaySe(0x451) | M | e58E0; 1 call |
| 0x80152500 | func_80152500 | BlowbackAirStep | airborne move (MovePlayerObj); landing or the motion ending: EndBlowback, ResetPlayerKind / SetPlayerKind4 | M | e58E0; no callers (D_8018F264 entry) |
| 0x801525F4 | func_801525F4 | EndBlowback | the end | M | e58E0; 3 calls |
| 0x80152698 | func_80152698 | RunSleepHit | entry: D_8018F280[+2]() | M | e58E0; no callers (table entry) |
| 0x801526D4 | func_801526D4 | SleepHitBegin | the begin step, StartSleepHit | M | e58E0; no callers (D_8018F280 entry) |
| 0x80152714 | func_80152714 | StartSleepHit | rumble, popup; unless ability 2 is held: forced-sleep timer +0x1AC = 60 and +0x44 bit 0x100 (fall asleep); EndSleepHit, ResetPlayerKind | M | e58E0; 1 call. +0x1AC is counted down in the sleep state (func_80160D10) |
| 0x80152790 | func_80152790 | EndSleepHit | the end without invincibility frames | M | e58E0; 1 call |
| 0x8015282C | func_8015282C | RunLaunchHit | entry: D_8018F298[+2]() | M | e58E0; no callers (table entry) |
| 0x80152868 | func_80152868 | LaunchHitBegin | the begin step, StartLaunchHit | M | e58E0; no callers (D_8018F298 entry) |
| 0x801528B0 | func_801528B0 | StartLaunchHit | rumble, popup, motion D_800D5880, PlaySe(0x451), accel D_8018F288, fall speed -0x100000 (up), LeavePlatform | M | e58E0; 1 call |
| 0x8015294C | func_8015294C | LaunchHitRise | blinks while flying 16 frames, then SetPlayerFlag7E2, hidden, the pit hook (func_8015369C) | M | e58E0; no callers (D_8018F298 entry) |
| 0x80152A08 | func_80152A08 | LaunchHitWait | waits for func_801536DC == 0 | L | e58E0; no callers (D_8018F298 entry) |
| 0x80152A50 | func_80152A50 | LaunchHitRespawn | as PitFallRespawn, ends with EndLaunchHit | M | e58E0; no callers (D_8018F298 entry) |
| 0x80152AC8 | func_80152AC8 | EndLaunchHit | the end | M | e58E0; 1 call |
| 0x80152B6C | func_80152B6C | RunFlinchHit | entry: D_8018F2AC[+2]() | M | e58E0; no callers (table entry) |
| 0x80152BA8 | func_80152BA8 | FlinchHitBegin | the begin step, StartFlinchHit | M | e58E0; no callers (D_8018F2AC entry) |
| 0x80152BF0 | func_80152BF0 | StartFlinchHit | rumble D_80062C14 and the damage popup only | M | e58E0; 1 call |
| 0x80152C40 | func_80152C40 | FinishFlinchHit | EndFlinchHit, ResetPlayerKind, DropTimedAbility at once | M | e58E0; no callers (D_8018F2AC entry) |
| 0x80152C80 | func_80152C80 | EndFlinchHit | the end | M | e58E0; 1 call |
| 0x80152D24 | func_80152D24 | RunFlingHit | entry: D_8018F2C8[+2]() | M | e58E0; no callers (table entry) |
| 0x80152D60 | func_80152D60 | FlingHitBegin | the begin step, StartFlingHit | M | e58E0; no callers (D_8018F2C8 entry) |
| 0x80152DA8 | func_80152DA8 | StartFlingHit | as StartLaunchHit with accel D_8018F2B8, fall speed -0x1C0000 and 8 frames without gravity (+0xDF) | M | e58E0; 1 call |
| 0x80152E4C | func_80152E4C | FlingHitRise | func_80153B58, the move, gravity after +0xDF frames; after 16 frames hidden and the pit hook | M | e58E0; no callers (D_8018F2C8 entry) |
| 0x80152EFC | func_80152EFC | FlingHitWait | waits for func_801536DC == 0 | L | e58E0; no callers (D_8018F2C8 entry) |
| 0x80152F44 | func_80152F44 | FlingHitRespawn | as PitFallRespawn, ends with EndFlingHit | M | e58E0; no callers (D_8018F2C8 entry) |
| 0x80152FBC | func_80152FBC | EndFlingHit | the end | M | e58E0; 1 call |

Rows: 229 (H 17, M 184, L 28); skipped (already known): 42

### 0x80166000-0x8016F000: engine effect kinds, sword trails, HUD slots

Overview: 0x80166000-0x8016F000 is the engine's own effect kinds (the handlers that g_Effects entries run: a
per-kind state dispatcher `D_801903xx[e->+2](e)` followed by that kind's set-up, step and draw), the sword-trail
buffers at D_801ED6A8, the HUD slots at D_80115218, and the first few of Musashi's scripted-action helpers.
Which effect kind number each dispatcher serves is room data (the table g_EffectHandlers points at), so most kinds
are named from what they draw; the kind numbers are given where engine code spawns them.

#### Dust and sprite puffs

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80166018 | func_80166018 | RunDustFxState | the kind's state handler (D_801903EC[e->+2]) | M | e58E0 |
| 0x80166054 | func_80166054 | DustFxSetup | a sprite (field overlay func_800D21C4, D_800D387C frame 0x9C) at the owner's point, pushed out sideways / back by +0x2C's mode (3: angle and shift from +0x30), sprite anim D_800D3888 | M | e58E0 |
| 0x801661CC | func_801661CC | DustFxStep | StepSpriteAnim (free at its end), move, x / z speed x 3/4 | M | e58E0 |
| 0x80166244 | func_80166244 | SpawnDustA | SpawnEffect kind 3 at the actor's feet (y - 0x10) with values 0x08F8FFF8 / 0xE000B000-style packing | M | e58E0 (kind 3 is the configurable puff below); called from e5F4 reaction code |
| 0x8016629C | func_8016629C | SpawnDustB | the same with 0x0F88FFF2 / 0xE000C000 | M | e58E0; abil 1 |
| 0x801662F4 | func_801662F4 | SpawnDustC | 0x08FEFFF4 / 0xE000C000 | M | e58E0; abil 1 |
| 0x8016634C | func_8016634C | SpawnDustD | 0x0EEEFFF8 / 0x6800B000 | M | e58E0; abil 1 |
| 0x801663A4 | func_801663A4 | SpawnDustE | 0x0CCCFFF8 / 0xE000C000 | M | e58E0; abil 1 |
| 0x801663FC | func_801663FC | RunPuffFxState | D_801903F4[e->+2] | M | e58E0 |
| 0x80166438 | func_80166438 | PuffFxSetup | kind 3's set-up: a sprite (0x9B or 0x9C by +0x30 bit 28) scaled by +0x30's low 15 bits, semi-transparency / colour from +0x30's top bits and +0x2C's nibbles | H | e58E0 (the values SpawnDustA-E pack) |
| 0x801665B4 | func_801665B4 | PuffFxStep | StepSpriteAnim, move, y speed x 7/8 | H | e58E0 |
| 0x80166618 | func_80166618 | RunTrailFxStateA | D_801904BC[e->+2] | M | e58E0 (its states are the trail steps below) |
| 0x80166654 | func_80166654 | RunTrailFxStateB | D_801904CC[e->+2] | M | e58E0 |

#### Sword trails (D_801ED6A8: four buffers of 0xC4, 16 segments each)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80166690 | func_80166690 | DrawSwordTrail | buffer id's segments as fading gouraud quads (func_80017758), blue for ids 0 / 1 (or gold with arg1), red for 2 / 3 | H | e58E0 |
| 0x80166994 | func_80166994 | UpdateSwordTrail | mode 0 start, 1 add the weapon's two points (func_801484B0 / func_80148534 for ids < 2 / >= 2) with a midpoint segment, 2 fade (1 when gone) | H | e58E0 |
| 0x80166F58 | func_80166F58 | ResetSwordTrail | free the other effects of two kinds (same +0x2C when the kinds are equal), clear trail buffer id | H | e58E0 |
| 0x8016706C | func_8016706C | FreeEffectsOfKind | FreeEffect every effect of a kind | H | e58E0 |
| 0x801681FC | func_801681FC | TrailFxSetupA | trail kind A's set-up: flag 0x81 picks the buffer, ResetSwordTrail | M | e58E0 |
| 0x8016829C | func_8016829C | TrailFxStartA | UpdateSwordTrail mode 0 while the owner's +0x44 says swinging, else free | L | e58E0 |
| 0x80168328 | func_80168328 | TrailFxStepA | UpdateSwordTrail mode 1 and DrawSwordTrail while swinging; mode 2 at the end | M | e58E0 |
| 0x801683D8 | func_801683D8 | TrailFxFadeA | mode 2 and draw until gone, then free | M | e58E0 |
| 0x80168430 | func_80168430 | TrailFxSetupB | trail kind B's set-up (buffers 2 / 3) | M | e58E0 |
| 0x801684B4 | func_801684B4 | TrailFxStartB | as TrailFxStartA | L | e58E0 |
| 0x80168540 | func_80168540 | TrailFxStepB | as TrailFxStepA | M | e58E0 |
| 0x801685EC | func_801685EC | TrailFxFadeB | as TrailFxFadeA | M | e58E0 |

#### Weapon glows and auras

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801670E4 | func_801670E4 | DrawGlowFx | a glow at a point of the owner's frame: four camera-facing quads (D_80190410), four ground quads (D_801903FC), and with +0x30 > 0 eight more scaled by +0x30 and g_PlayerSquash | M | e58E0 |
| 0x80167540 | func_80167540 | GlowFxStep | flicker (+0x10 / +0x12 random), the owner's matrix, DrawGlowFx, a trailing kind 0xE; owner +0x44 bit 5 moves to the next state | M | e58E0 |
| 0x80167714 | func_80167714 | GlowFxPulse | the same pulsing +0x30, PlaySe(0x44E) every 16 frames, back while bit 5 is gone | M | e58E0 |
| 0x801678B4 | func_801678B4 | RunGlowFxState | D_801904DC[e->+2] | M | e58E0 |
| 0x801678F0 | func_801678F0 | HeldGlowFxStep | while the owner's +0x44 bit 4: a spinning glow at (-6, -0x44, -0x18) of its frame and a kind 0xE trail | L | e58E0 |
| 0x80167A9C | func_80167A9C | RunHeldGlowFxState | D_801904E8[e->+2] | M | e58E0 |
| 0x80167AD8 | func_80167AD8 | FxNop | an empty state | H | e58E0 |
| 0x80167AE0 | func_80167AE0 | DrawWeaponGlowB | the second weapon's glow quads between its two points | M | e58E0 (called from func_80165E90 for weapon bits 0x20000000) |
| 0x80167DBC | func_80167DBC | DrawWeaponGlowA | the first weapon's, colour by flag 0x81 | M | e58E0 (func_80165E90, bits 0x10000000) |
| 0x80168070 | func_80168070 | WeaponGlowMatrix | the matrix along the weapon's two points (ObjLocalToWorld, a facing rotation) | M | e58E0 |
| 0x80168640 | func_80168640 | GlowFxInit | +0x1C = 0x20, flicker values reset, next state | H | e58E0 |
| 0x80168664 | func_80168664 | SpinGlowFxStep | flicker, a rotation about x added, DrawGlowFx | L | e58E0 |

#### Sparks, rings and bursts

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80168744 | func_80168744 | RunRingFxState | D_80190500[e->+2] | M | e58E0 |
| 0x80168780 | func_80168780 | RingFxSetup | EmitFxAhead, then the step | L | e58E0 |
| 0x801687CC | func_801687CC | RingFxStep | DrawRingFx until +0x1C runs out, then free | M | e58E0 |
| 0x80168828 | func_80168828 | DrawRingFx | a fan of orange-white triangles scaled by +0x1C, turned by +0x12..+0x1A | M | e58E0 |
| 0x801689D8 | func_801689D8 | RunSparkFxStateA | D_80190508[e->+2] | M | e58E0 |
| 0x80168A14 | func_80168A14 | SparkFxSetupA | EmitFxAhead with a sub-kind and 0xC0009C00 | L | e58E0 |
| 0x80168A88 | func_80168A88 | SparkFxEndA | FreeEffect | H | e58E0 |
| 0x80168AA8 | func_80168AA8 | RunSparkFxStateB | D_80190510[e->+2] | M | e58E0 |
| 0x80168AE4 | func_80168AE4 | SparkFxSetupB | as SparkFxSetupA with a timer | L | e58E0 |
| 0x80168B70 | func_80168B70 | SparkFxStepB | EmitFxAhead until the timer runs out | L | e58E0 |
| 0x80168BDC | func_80168BDC | EmitFxAhead | move the effect a step along its facing (+0x12 / +0x16), then n effects of a kind there with its facing | M | e58E0 |
| 0x80168D58 | func_80168D58 | RunShardFxState | D_80190518[e->+2] | M | e58E0 |
| 0x80168D94 | func_80168D94 | ShardFxSetup | a random direction from the facing, speed from +0x2C | L | e58E0 |
| 0x80168EC4 | func_80168EC4 | ShardFxStep | DrawShardFx, move, free at the timer's end | L | e58E0 |
| 0x80168F40 | func_80168F40 | DrawShardFx | a gouraud line / quad between the position and its trail (func_80016A5C) | L | e58E0 |
| 0x8016901C | func_8016901C | RunStreakFxStateA | D_80190520[e->+2] | M | e58E0 |
| 0x80169058 | func_80169058 | StreakFxSetupA | a random direction (two spreads by +0x2C bit 1), facing the camera | L | e58E0 |
| 0x801691B8 | func_801691B8 | StreakFxStepA | DrawStreakFxA, move, free at the timer's end | L | e58E0 |
| 0x80169228 | func_80169228 | DrawStreakFxA | a stretched quad along the velocity | L | e58E0 |
| 0x801693CC | func_801693CC | RunStreakFxStateB | D_80190528[e->+2] | M | e58E0 |
| 0x80169408 | func_80169408 | StreakFxSetupB | as A, facing set once | L | e58E0 |
| 0x8016951C | func_8016951C | StreakFxStepB | as A | L | e58E0 |
| 0x80169584 | func_80169584 | DrawStreakFxB | as A, another colour | L | e58E0 |
| 0x801696D8 | func_801696D8 | DrawFlashQuad | a scaled glow quad at the effect's matrix (+0x2C / +0x30 size and colour) | L | e58E0; 4 stage calls / 1 file |
| 0x80169830 | func_80169830 | RunFlashFxState | D_80190530[e->+2] | M | e58E0 |
| 0x8016986C | func_8016986C | FlashFxSetup | facing the camera, a random spin | L | e58E0 |
| 0x801699D0 | func_801699D0 | FlashFxStep | DrawFlashQuadB, move, free at the timer's end | L | e58E0 |
| 0x80169A4C | func_80169A4C | DrawFlashQuadB | the second flash quad | L | e58E0; 2 stage / 2 abil calls |
| 0x80169B80 | func_80169B80 | RunBoltFxState | D_801905E4[e->+2] | M | e58E0 |
| 0x80169BBC | func_80169BBC | BoltFxSetup | a step back along the facing, kinds 9 and 0xC spawned, a model (func_800D222C, D_801905D8 0x17) turned by a table angle | L | e58E0 |
| 0x80169E44 | func_80169E44 | BoltFxStep | StepSpriteAnim with a trailing effect, free at the end | L | e58E0 |
| 0x80169F00 | func_80169F00 | RunBlinkFxState | D_801905EC[e->+2] | M | e58E0 |
| 0x80169F3C | func_80169F3C | BlinkFxSetup | a semi-transparent sprite with sprite anim | L | e58E0 |
| 0x80169FE0 | func_80169FE0 | BlinkFxStep | StepSpriteAnim, free at the end | M | e58E0 |

#### Sword charge, damage numbers, defeat

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8016A020 | func_8016A020 | RunChargeFxState | D_80190624[e->+2] | M | e58E0 |
| 0x8016A05C | func_8016A05C | ChargeFxWait | next state when the stats byte 0x80078EC0 & 0x7F, else state 2 | L | e58E0 |
| 0x8016A08C | func_8016A08C | ChargeFxStep | while the charge byte 0x80078EBF is up: the glow along the weapon (func_8016A290), PlaySe(0x44C) at 4 frames, sparks (kind 0x17) below 0x80, then PlaySe(0x44D) every 32 frames when full | M | e58E0 |
| 0x8016A1CC | func_8016A1CC | ChargeFxHold | the same without the build-up | L | e58E0 |
| 0x8016A290 | func_8016A290 | DrawChargeGlow | quads along the weapon's two points, sized by the charge | M | e58E0 |
| 0x8016A700 | func_8016A700 | RunAuraFxState | D_80190630[e->+2] | M | e58E0 |
| 0x8016A73C | func_8016A73C | AuraFxSetup | a spin matrix about the owner (+0x4C..+0x54) | L | e58E0 |
| 0x8016A890 | func_8016A890 | AuraFxStep | DrawAuraFx, free at the timer's end | L | e58E0 |
| 0x8016A8FC | func_8016A8FC | DrawAuraFx | a gouraud strip (func_80016A5C) round the owner | L | e58E0 |
| 0x8016AB30 | func_8016AB30 | RunDamageNumberState | D_80190678[e->+2] (effect 0x1D, ShowDamage) | M | e58E0 |
| 0x8016AB6C | func_8016AB6C | DamageNumberSetup | the value (+0x30) to digits (ToBcd), the digit count, a launch by +0x2C's mode (0 rise, 1 / 5 random hop, ...) | H | e58E0 (ShowDamage passes the damage as the second value) |
| 0x8016AE5C | func_8016AE5C | DamageNumberRise | move up, DrawDamageNumber | M | e58E0 |
| 0x8016AFB0 | func_8016AFB0 | DamageNumberHop | fall with gravity 0x18000, DrawDamageNumber | M | e58E0 |
| 0x8016B114 | func_8016B114 | DamageNumberFade | DrawDamageNumber until the timer runs out, then free | M | e58E0 |
| 0x8016B234 | func_8016B234 | DrawDamageNumber | each digit as a sprite at the projected point (RotTransPers, func_80016ED4) | H | e58E0 |
| 0x8016B4BC | func_8016B4BC | RunDefeatFxState | D_801906F4[e->+2] (effect 0x1E, SpawnDefeatEffect) | M | e58E0 |
| 0x8016B4F8 | func_8016B4F8 | DefeatFxSetup | the screen point, three sub-objects (func_8016B834), lifetime 0xF0 (0x2D0 with +0x2C) | M | e58E0 |
| 0x8016B5C0 | func_8016B5C0 | DefeatFxStep | grow the sub-objects (+0x200 a frame), DrawDefeatFx, end when off screen or out of time | M | e58E0 |
| 0x8016B6BC | func_8016B6BC | DrawDefeatFx | the three pieces as gouraud quads | L | e58E0 |
| 0x8016B834 | func_8016B834 | DefeatFxPiece | a 0x38 object for piece n (func_8001CD9C / func_800233CC) | L | e58E0 |
| 0x8016B91C | func_8016B91C | DefeatFxPlacePieces | func_8016B964 on the three pieces | L | e58E0 |
| 0x8016B964 | func_8016B964 | DefeatFxPlacePiece | one piece's position | L | e58E0 |
| 0x8016B984 | func_8016B984 | EndDefeatFx | zero the three pieces (0x38 each) and FreeEffect | M | e58E0 (SpawnDefeatEffect ends an older one with it) |
| 0x8016B9F8 | func_8016B9F8 | DefeatFxOffScreen | ProjectPoint's flag for the effect's position | L | e58E0 |
| 0x8016BA48 | func_8016BA48 | ShowDefeat56 | func_8016BA68 | M | e58E0 (called by ShowDefeatAlt) |
| 0x8016BA68 | func_8016BA68 | SpawnDefeatEffect56 | one effect 0x56 (an older one freed) at the actor's hit position | M | e58E0 (as SpawnDefeatEffect with kind 0x56) |
| 0x8016BADC | func_8016BADC | SpawnBurst22 | three effects 0x22 (values 0, 1, 2) and one 0x24 at a height | L | e58E0 |

#### Other engine effect kinds

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8016BBA4 | func_8016BBA4 | RunOrbitFxState | D_80190744[e->+2] | M | e58E0 |
| 0x8016BBE0 | func_8016BBE0 | OrbitFxSetup | a model (func_8001CF00), angles from +0x2C x 0x555 (three around) | L | e58E0 |
| 0x8016BCC0 | func_8016BCC0 | OrbitFxGrow | OrbitFxPlace, DrawOrbitFx, SetEffectTimer | L | e58E0 |
| 0x8016BD78 | func_8016BD78 | OrbitFxSpin | turn about the owner, OrbitFxPlace, DrawOrbitFx | L | e58E0 |
| 0x8016BEA0 | func_8016BEA0 | OrbitFxEnd | as above, then free | L | e58E0 |
| 0x8016BF34 | func_8016BF34 | OrbitFxAngle | +0x12 / +0x16 / +0x1A combined | L | e58E0 |
| 0x8016BF50 | func_8016BF50 | OrbitFxPlace | the position from the owner's frame (ObjLocalToWorld) | L | e58E0 |
| 0x8016BFA8 | func_8016BFA8 | DrawOrbitFx | func_8016BFD0 with the effect's colours | L | e58E0 |
| 0x8016BFD0 | func_8016BFD0 | DrawOrbitQuad | one scaled quad through the owner's matrix | L | e58E0 |
| 0x8016C14C | func_8016C14C | RunLinkFxState | D_80190774[e->+2] | M | e58E0 |
| 0x8016C188 | func_8016C188 | LinkFxSetup | a model, placed from the owner's frame | L | e58E0 |
| 0x8016C2C4 | func_8016C2C4 | LinkFxStep | follow the owner (func_8016C374), free when it is gone | L | e58E0 |
| 0x8016C374 | func_8016C374 | LinkFxFollow | a chained position update | L | e58E0 |
| 0x8016C49C | func_8016C49C | ProjectileFxSetup | a model, direction (VectorNormalSS) and speed toward a point, its matrix | L | e58E0 |
| 0x8016C74C | func_8016C74C | ProjectileFxAim | velocity = unit direction x speed | L | e58E0 |
| 0x8016C83C | func_8016C83C | ProjectileFxStep | move, turn, collide (func_8016CF04) | L | e58E0 |
| 0x8016C998 | func_8016C998 | ProjectileFxTrail | draw its trail (func_8016CBC0), spawn trailing effects | L | e58E0 |
| 0x8016CB84 | func_8016CB84 | RunProjectileFxState | D_8019077C[e->+2] | M | e58E0 |
| 0x8016CBC0 | func_8016CBC0 | DrawProjectileTrail | gouraud quads (func_80017758) | L | e58E0 |
| 0x8016CF04 | func_8016CF04 | ProjectileFxMatrix | the model's matrix from its angles, a step along it | L | e58E0 |
| 0x8016D19C | func_8016D19C | RunBeamFxState | D_80190798[e->+2] | M | e58E0 |
| 0x8016D1D8 | func_8016D1D8 | BeamFxSetup | a model, PlaySe, its matrix | L | e58E0 |
| 0x8016D428 | func_8016D428 | RunBeamFxStateB | D_801907A0[e->+2] | M | e58E0 |
| 0x8016D464 | func_8016D464 | BeamFxStep | move, ProjectileFxMatrix | L | e58E0 |
| 0x8016D4DC | func_8016D4DC | BeamFxHome | turn toward the target (ProjectileFxAim) | L | e58E0 |
| 0x8016D5EC | func_8016D5EC | BeamFxEnd | ProjectileFxMatrix, free | L | e58E0 |
| 0x8016D64C | func_8016D64C | BeamFxDrawEnd | DrawProjectileTrail, free | L | e58E0 |
| 0x8016D688 | func_8016D688 | RingWaveSetup | a model scaled by 0x1400 | L | e58E0 |
| 0x8016D778 | func_8016D778 | RingWaveStep | grow, free at the end | L | e58E0 |
| 0x8016D848 | func_8016D848 | RingWaveEmit | grow and spawn kind 0x33 | L | e58E0 |
| 0x8016D984 | func_8016D984 | RingWaveFade | move, free at the timer's end | L | e58E0 |
| 0x8016DA04 | func_8016DA04 | SpawnFx31 | SpawnEffectOn kind 0x31 for an owner | M | e58E0 (func_80153B58 calls it every 4th frame) |
| 0x8016DA30 | func_8016DA30 | RunFollowFxState | follow (func_8016DBD8), then D_80190808[e->+2] | M | e58E0 |
| 0x8016DA7C | func_8016DA7C | FollowFxSetup | a sprite at slot 0x250 / 0x3000, sprite anim | L | e58E0 |
| 0x8016DB34 | func_8016DB34 | FollowFxStep | StepSpriteAnim with growth, free at the end | L | e58E0 |
| 0x8016DBD8 | func_8016DBD8 | FollowFxPlace | position from the owner's frame (ObjLocalToWorld16) | M | e58E0 |
| 0x8016DC20 | func_8016DC20 | SplashFxStep | from the owner's frame: a sprite with sprite anim, sub-effects | L | e58E0 |
| 0x8016DEA4 | func_8016DEA4 | RunSplashFxState | D_8019083C[e->+2] | M | e58E0 |
| 0x8016DEE0 | func_8016DEE0 | SplashFxEnd | StepSpriteAnim, free at the end | M | e58E0 |
| 0x8016DF20 | func_8016DF20 | RunSwirlFxState | D_80190844[e->+2] | M | e58E0 |
| 0x8016DF5C | func_8016DF5C | SwirlFxSetup | a model (func_8001CD50), RotMatrixY, its matrix (func_8016E3CC) | L | e58E0 |
| 0x8016E1CC | func_8016E1CC | SwirlFxGrow | grow toward 0x140, spawn trailing effects | L | e58E0 |
| 0x8016E26C | func_8016E26C | SwirlFxSpin | spin, spawn trailing effects | L | e58E0 |
| 0x8016E2E8 | func_8016E2E8 | SwirlFxShrink | shrink, free at 0 | L | e58E0 |
| 0x8016E358 | func_8016E358 | SwirlFxTrailStep | move, DrawSwirlTrail, free at the timer's end | L | e58E0 |
| 0x8016E3CC | func_8016E3CC | SwirlFxMatrix | the effect's matrix (facing the camera) | L | e58E0 |
| 0x8016E460 | func_8016E460 | DrawSwirlTrail | a scaled gouraud quad | L | e58E0 |
| 0x8016E5B8 | func_8016E5B8 | RunScreenFxState | D_80190898[e->+2] | M | e58E0 |
| 0x8016E5F4 | func_8016E5F4 | ScreenFxSetup | free when the point is off screen (ProjectPoint), else set up | L | e58E0 |
| 0x8016E688 | func_8016E688 | ScreenFxGrow | grow, DrawScreenFx | L | e58E0 |
| 0x8016E6E4 | func_8016E6E4 | ScreenFxHold | DrawScreenFx until the timer runs out | L | e58E0 |
| 0x8016E728 | func_8016E728 | ScreenFxShrink | shrink, free | L | e58E0 |
| 0x8016E778 | func_8016E778 | DrawScreenFx | func_8016E7C8 with its angles and colour | L | e58E0 |
| 0x8016E7C8 | func_8016E7C8 | DrawScreenFxQuad | a sprite at the projected point (func_80016ED4) | L | e58E0 |
| 0x8016ED6C | func_8016ED6C | FxFree | FreeEffect (a state-table entry) | H | e58E0 |

#### HUD slots (D_80115218: four of 0x20)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8016E8F0 | func_8016E8F0 | ClearHudSlots | zero the four slots | H | e58E0; called by StageStart (e.c) |
| 0x8016E918 | func_8016E918 | OpenHudSlot | slot a: on, state 0, value b (< 10) | M | e58E0 |
| 0x8016E95C | func_8016E95C | UpdateHudSlots | each live slot's state handler (D_801908D8) | H | e58E0; called from e.c's frame |
| 0x8016E9EC | func_8016E9EC | HudSlotSetup | a picture loaded for the slot (func_800D2CA8 / func_800D2D10, func_80024054), position -0xD7, next state | L | e58E0 |
| 0x8016EAC0 | func_8016EAC0 | HudSlotSlideIn | move in, DrawHudSlot | L | e58E0 |
| 0x8016EB3C | func_8016EB3C | HudSlotHold | DrawHudSlot | L | e58E0 |
| 0x8016EBA8 | func_8016EBA8 | HudSlotSlideOut | move out, DrawHudSlot, off at the end | L | e58E0 |
| 0x8016EC0C | func_8016EC0C | DrawHudSlot | its sprite (func_80017B98) with a brightness | L | e58E0 |

## Refinements to part 1

Not new proposals: better evidence for names part 1 gave, for the local card to pick from.

* 0x80142414 (part 1: SpawnKind13, L): kind 0x13 (set-up func_80142608, step func_801424E4) follows its parent at the
  +0x52 height (stage: -0x90, -0x96) and grows in from scale 0x200, so **SpawnHeadMarker** reads better (still L).
* 0x801511E0 (part 1: ApplyQueuedHurt, L): func_8014ACE8 is a number pop-up (effect 0x1D with a kind: 1 damage,
  2 HP gain, 3 money, 4 BP gain, 5 BP loss, 6 poison), not a hurt call, so 0x801511E0 shows the queued damage number
  (+0xF2): **ShowQueuedDamageNumber** fits better. See 0x80151204 / 0x8014ACE8 in (b).
* 0x8014B2A8 (part 1: ClearStatsWords, L): the two words are the poison timer (Stats +0x1C) and its saved copy, so the
  call cures poison (see CurePoison, 0x8014B2F8, in (b)).
* Stats (0x80078E78) fields found in (b): +0x1A minutes of the day (0x80078E92), +0x1C poison timer, +0x20 shrink
  timer (bit 31 = active), +0x24 a draining gauge, +0x2C the wake gauge, +0x34 the day count, +0x42 the weekday,
  +0x54..+0x68 saved copies of +0x1C..+0x30.
