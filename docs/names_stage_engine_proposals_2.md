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
| 0x80130088 | func_80130088 | PlayRetreatSound | parameter sound 0x32 near the target point (DistSqToTarget < 0x9000), 0x33 farther, the other when one is missing | M | e5F4 comment ("moves 0x32 and 0x33"; they go through PlayParamSound, so they are sounds); 6 / 4, after a defeat test (`a->+0x76 <= 0`) |
| 0x8013001C | func_8013001C | PlayApproachSound | the same with parameters 0x30 / 0x31 | M | e5F4 comment; inline |
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

## Refinements to part 1

Not new proposals: better evidence for names part 1 gave, for the local card to pick from.

* 0x80142414 (part 1: SpawnKind13, L): kind 0x13 (set-up func_80142608, step func_801424E4) follows its parent at the
  +0x52 height (stage: -0x90, -0x96) and grows in from scale 0x200, so **SpawnHeadMarker** reads better (still L).
