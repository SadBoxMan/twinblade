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

## (b) Musashi's controller and its neighbours, 0x80146128-0x8016F000

The range holds more than the controller: the effect pools' code, the player object's update and its sub-steps,
the face and part routines (already named), the engine's own effect kinds and the HUD slots. It is split by address
below; each slice opens with a short overview. Functions already named in part 1 or in (a) are not repeated.

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
