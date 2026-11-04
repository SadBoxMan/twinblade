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

## Summary
* (a): 80 rows (20 H, 43 M, 17 L): every stage-called engine function part 1 left out, outside the (b) range.
* (b): 1094 rows (102 H, 806 M, 186 L): every func_ in 0x80146128-0x8016F000 that part 1 and (a) do not name, one row
  each (checked by script against stg/symbol_addrs_engine.txt: none missing, none twice, no name used twice in
  either doc or clashing with an existing symbol).
* How (b) was made: five slices, four of them researched by read-only helper agents under one brief (the same columns,
  evidence rules and part 1's names as vocabulary) and merged here after a format check and spot checks against the
  C (NextDay, the number pop-up, the poison words, func_80149290). The M share is high on purpose: most of these are
  states of Musashi's kind machine whose behaviour is clear from the code but whose in-game meaning (guard, charge,
  Fusion throw, ...) is one reading.
* Main findings: Player +0 / +2 are the kind and state of a per-kind state machine (kinds 0-0x1E listed in the
  0x80153000 and 0x8015C000 slices); D_8018FBA8 is the kinds' exit table; the Stats block holds the clock (minutes,
  day, weekday), the poison and shrink timers and two gauges; the engine's own effect kinds, sword trails and HUD slots
  sit at 0x80166000 onward. Corrections to part 1 are under "Refinements to part 1" at the end.

## What is left
* The handler tables (D_8018Fxxx, D_80190xxx) are stage data and are not in this repository, so the order of states
  inside a kind and which effect kind number each engine effect handler serves are inferred from the call graph and
  address order (marked in the rows). One look at SC03_001's tables would settle them.
* func_801536DC is INCLUDE_ASM (no asm in this checkout): named from its callers only (L).
* Engine functions outside 0x80146128-0x8016F000 that no stage code calls are still unsurveyed (part 1 covered their
  neighbours only).

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

### 0x80146128-0x8014B000: the player update, pools, model matrix, pad input, action tests

This slice opens Musashi's controller: the per-frame update of the player object (UpdatePlayer and the
end-of-frame step), the small pool allocators, his model matrix (ground tilt, scale, angle overrides), the
"move speed" fields +0x24/+0x28/+0x2C turned into a velocity by the model's facing, pose point pairs used by the sword
trails, pad reading and camera-relative stick / d-pad facing (two 16-entry d-pad tables), a double-tap detector, the
hit-flag bits (0x8000 pending, 0x4000 guarding), the action tests and starts the kind steps call (jump, the two swords
by button, the circle ability, R1 guard and its gauge, talk, carry and grab), the mode word 0x80078EC0 ("EC0 mode",
as part 2 calls it), the per-frame game clock, money and floating numbers.
Button bits (PS pad, +0xAA/+0xAC): 0x10 triangle, 0x20 circle, 0x40 cross, 0x80 square, 0x08 R1, 0x100 select.
Player kinds met here (SetKindAndState; names as in part 2's kind tables): 2 jump, 5 Fusion combo (square), 6 Lumina
slash (triangle), 7 air slash, 8, 0xB pole, 0xC bar, 0xD carry, 0xE / 0xF throw the carried actor, 0x10 grab, 0x11
guard, 0x12 guard hop, 0x14 wall climb, 0x15 charged attack, 0x17 use ability, 0x1D lie down.

#### Player frame update and per-frame counters

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80146128 | func_80146128 | UpdatePlayer | Musashi's per-frame update: respawn check, pad, clock, sub-steps, the move; 1 when the kind steps ran | H | e58E0; its only caller func_8014607C stores the result in D_801ED4D0 and runs func_80146360 / func_801463A0 only when it is 1. Body calls ReadObjPad (func_80148648(p, 0)), UpdateDoubleTap, TickGameClock, ... ClearVel, then 16.16 pos to +0x98 |
| 0x80146360 | func_80146360 | RunPlayerMarkHandler | D_8018EFFC[player +0x4C](player) | L | e58E0; +0x4C is the byte SetPlayerMark4C / ClearPlayerMark4C write (D_80126BA4); called by func_8014607C after UpdatePlayer |
| 0x801463A0 | func_801463A0 | FinishPlayerFrame | end of Musashi's frame: weapon parts, ApplyPlayerHidden, BuildPlayerMatrixOnce, ApplyPlayerScale, model position = pos + offset (+0x138), +0x90 = +0x88, last pos (+0x88..) = pos, +0x48 = flags, flags &= 0x3FFFFFFF | M | e58E0; called last by func_8014607C |
| 0x80146FC4 | func_80146FC4 | RespawnIfFallenOut | when pos y (+0xA) >= 0x401: pos = D_80126DB0 (16.16 from SVECTOR), +0x88 = that point, model heading = D_80126DB6 | M | e58E0; first call of UpdatePlayer |
| 0x80147118 | func_80147118 | ApplyPlayerScale | model scale (+0x18/+0x1A/+0x1C) = +0x60 * +0x68 * +0x70 per axis (4096 = 1.0), capped 0xFFFF | H | e58E0; called by FinishPlayerFrame. The init (func_80145CEC area, line ~1366) sets all three vectors to 0x1000 |
| 0x80147264 | func_80147264 | SetPlayerScaleA | the first scale vector D_80126BB8/BA/BC (+0x60) = three u16 | M | e58E0; no C callers. Field use from ApplyPlayerScale |
| 0x80147290 | func_80147290 | ResetPlayerScaleA | the same vector = 0x1000 x3 | M | e58E0; no C callers |
| 0x8014A638 | func_8014A638 | DecaySquash | while +0x44 bit 0x10: squash (+0x188) -= 4, at least 0 | M | e58E0; called by UpdatePlayer. +0x188 = squash (brief) |
| 0x80149BEC | func_80149BEC | TickActionLock | +0x223 counts down to 0 | M | e58E0; called by UpdatePlayer. CancelEC0Mode sets +0x223 = 0x10; CanAirSlash / CanDoubleJump refuse while it runs |
| 0x8014A674 | func_8014A674 | IsTimer1BCClear | +0x1BC == 0 | L | e58E0; func_8015AE2C: `if (func_8014A674(a) && func_8014E434(a))` then kind 0xB (func_8015CC40) |
| 0x8014A680 | func_8014A680 | TickTimer1BC | +0x1BC counts down to 0 | M | e58E0; called by UpdatePlayer |
| 0x8014A69C | func_8014A69C | IsTimer1BDClear | +0x1BD == 0 | L | e58E0; func_8015AE2C: `if (func_8014A69C(a) && func_8014E6A0(a))` then kind 0xC (func_8015CF8C) |
| 0x8014A6A8 | func_8014A6A8 | TickTimer1BD | +0x1BD counts down to 0 | M | e58E0; called by UpdatePlayer |
| 0x8014A71C | func_8014A71C | TickWallClimbCooldown | +0x1BE counts down to 0 | M | e58E0; called by UpdatePlayer; +0x1BE gates CanWallClimb |

#### Pools and allocators

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80146534 | func_80146534 | ClearPushVel | the push vector D_80127090/94/98 = 0 | H | e58E0; no C callers. AddPushVel / SetPushVel consume the same three words |
| 0x80146554 | func_80146554 | AllocSprite4To6 | func_8001D074(4, 6): a free sprite object from slots 4-5 | H | e58E0; no C callers. Same pattern as AllocSprite16To3E (func_8001D074 = AllocActorSprite's allocator) |
| 0x80146578 | func_80146578 | AllocSprite6To16 | func_8001D074(6, 0x16) | H | e58E0; 18 abil calls / 14 files, result used (`temp_v0 = func_80146578()`, ovl1f) |
| 0x801465E4 | func_801465E4 | AllocModel16To26 | func_8001CFDC(0x16, 0x26): a free model object from slots 0x16-0x25 | H | e58E0; 2 abil calls: `o = (u8 *) func_801465E4()` (ovl2c, ovl15). Same pattern as AllocModel6To16 |
| 0x801468C8 | func_801468C8 | AllocShadow | first free of the two 0x2C-byte shadow records at D_8011F750: +0 = kind, +4 = owner; the record or 0 | M | e58E0; one call, the stage init func_80145CEC: `func_801468C8(&D_80126B58, 1)`. Part 2: D_8011F750 = the shadow decal object, run by UpdateShadow (D_801900B0[kind - 1]) |
| 0x8014AB5C | func_8014AB5C | ClearObj68Kind | FreeObj68ByKind(kind) (wrapper) | M | e58E0; func_8015F118: `func_8014AB5C(0x19)`, `(0x1D)` |
| 0x8014ABF0 | func_8014ABF0 | ClearEffectKind | FreeEffectsByKind(kind) (wrapper) | M | e58E0; 4 stage calls / 4 files, all `func_8014ABF0(0x40)` (sc04_002/004/011) |
| 0x8014AC10 | func_8014AC10 | FreeEffectsByKind | every effect (0x58-byte pool at D_8011D030) of a kind: zero its model (0x84 or 0x38 bytes) and itself | H | e58E0; same body as FreeEffect per entry; CancelEC0Mode calls it with 0x26, 0x27, 0x39, 0x3A, 0x3B, 0x3C |

#### Model matrix: ground tilt, angle overrides, rotation

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80147478 | func_80147478 | BuildPlayerMatrixOnce | unless +0x44 bit 0x40000000: SmoothTiltUpVector, BuildTiltedMatrix, set that bit | M | e58E0; called by FinishPlayerFrame; FinishPlayerFrame's `D_80126B9C &= 0x3FFFFFFF` clears the bit for the next frame |
| 0x80147514 | func_80147514 | SmoothTiltUpVector | +0x118 eases (1/8) toward the target +0x120 (default (0, -0xFFF, 0)) plus +0x128 when +0x12E; the tilt angles +0x100 from it (func_800129CC) | M | e58E0; called only by BuildPlayerMatrixOnce |
| 0x80147628 | func_80147628 | BuildTiltedMatrix | model matrix = rotY(+0x102) rotX(+0x100) rotZ(+0x104), then the model's angles, each replaced by +0x130/+0x132/+0x134 when +0x136 bit 1/2/4 | M | e58E0; called only by BuildPlayerMatrixOnce |
| 0x801474D8 | func_801474D8 | ClearAngleOverride | +0x130..+0x136 (override angles and their mask) = 0 | M | e58E0; func_80158BB0 (a player state set-up) calls it with ResetTiltVectors |
| 0x801474EC | func_801474EC | ResetTiltVectors | +0x118, +0x120, +0x128 (smoothed up, target up, extra) = 0 | M | e58E0; 5 engine callers (func_801520DC, func_801528B0, ...), 2 stage calls (sc04_011, sc05_010), 2 abil (ovl1a, ovl31), all `func_801474EC(a)` |
| 0x80147718 | func_80147718 | RebuildModelMatrix | the model matrix (model +0x34) from the model's own angles +0x10/+0x12/+0x14; model +0x2C bit 1 | M | e58E0; no C callers |
| 0x80147788 | func_80147788 | AddModelRotX | model +0x10 += n (12-bit wrap) | H | e58E0; no C callers |
| 0x801477A8 | func_801477A8 | AddModelRotY | model +0x12 (heading) += n | H | e58E0; no C callers |
| 0x801477C8 | func_801477C8 | AddModelRotZ | model +0x14 += n | H | e58E0; no C callers |
| 0x8014905C | func_8014905C | ClearTilt | tilt angles +0x100..+0x104 and their target +0x108..+0x10C = 0 | M | e58E0; no C callers |
| 0x80149078 | func_80149078 | SetTiltTarget | +0x108/+0x10A/+0x10C = x, y, z | M | e58E0; no C callers; calls the three below |
| 0x801490E0 | func_801490E0 | SetTiltTargetX | +0x108 = n | M | e58E0; called by SetTiltTarget |
| 0x801490E8 | func_801490E8 | SetTiltTargetY | +0x10A = n | M | e58E0; called by SetTiltTarget |
| 0x801490F0 | func_801490F0 | SetTiltTargetZ | +0x10C = n | M | e58E0; called by SetTiltTarget |
| 0x801490F8 | func_801490F8 | StepTiltToTarget | each tilt angle +0x100.. steps toward +0x108.. by the speed given (func_80012B04) | M | e58E0; no C callers |

#### Move speed (+0x24/+0x28/+0x2C, the facing frame) to velocity (+0x10..)

The player (and objects moved this way) keep a speed in the model's frame at +0x24/+0x28/+0x2C (the words
SetEffectAccel writes; forward is -z); these add to it with a limit and turn it into the world velocity +0x10/+0x14/+0x18
through the push vector D_80127090.. (cleared after). +0x44 bits 0x400000/0x800000/0x1000000 keep an axis raw.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80147860 | func_80147860 | AddMoveSpeed | x, y, z added, each within +-0x1F0000 | M | e58E0; no C callers (AddMoveSpeedX is called with the caller's a0/a1 left in place) |
| 0x801478B8 | func_801478B8 | AddMoveSpeedUnlimited | the same with the limit 0x7FFFFFFF | M | e58E0; no C callers |
| 0x80147928 | func_80147928 | AddMoveSpeedX | +0x24 += n within +-0x1F0000 | M | e58E0; called by AccelMoveToWorld, AccelFacingYXZ, AccelWorld |
| 0x80147948 | func_80147948 | AddMoveSpeedXLimit | +0x24 += n; on the side n pushes, at most the limit | H | e58E0; func_80162F60 passes 0x7F0000 |
| 0x8014799C | func_8014799C | AddMoveSpeedY | +0x28 += n within +-0x1F0000 | M | e58E0 |
| 0x801479BC | func_801479BC | AddMoveSpeedYLimit | +0x28 += n with a limit | H | e58E0; func_80162F80 passes 0x7F0000 |
| 0x80147A10 | func_80147A10 | AddMoveSpeedZ | +0x2C += n within +-0x1F0000 | M | e58E0 |
| 0x80147A30 | func_80147A30 | AddMoveSpeedZLimit | +0x2C += n with a limit | H | e58E0; func_8015AE2C: `func_80147A30(a, -0x10000, 0xBA000)` (forward acceleration up to a top speed) |
| 0x80147AAC | func_80147AAC | ApplyMoveSpeedFree | AccelFacingFree(o, 0, 0, 0) | M | e58E0; no C callers. Pair of ResetObjMoveParams (= AccelFacing(o, 0, 0, 0)) |
| 0x80147AD4 | func_80147AD4 | AccelFacing | add (x, y, z) to the move speed (limited), turn it by the model's facing, velocity from it (axis keeps honoured) | M | e58E0; 7 stage calls / 6 files + 3 abil: `func_80147AD4(a, 0, 0, 0x10000)`, func_80155EA4 `(a, 0, 0, 0x8000)` |
| 0x80147B18 | func_80147B18 | AccelFacingUnlimited | the same without the 0x1F0000 limit | M | e58E0; 2 stage calls: `func_80147B18(a, 0, 0, 0x10000)` (sc05_007, sc05_009) |
| 0x80147B5C | func_80147B5C | SetVelKeepAxes | velocity = the turned speed, except axes whose +0x44 keep bit is set take the raw +0x24.. value | M | e58E0; called by AccelFacing / AccelFacingUnlimited |
| 0x80147C30 | func_80147C30 | AccelFacingFree | AccelFacing without the axis keep bits | M | e58E0; called by ApplyMoveSpeedFree |
| 0x80147CC8 | func_80147CC8 | AccelMoveToWorld | add (limited) then MoveSpeedToWorld into a vector | M | e58E0; called by AccelFacing, AccelFacingFree |
| 0x80147D38 | func_80147D38 | AccelMoveToWorldUnlimited | the same unlimited | M | e58E0; called by AccelFacingUnlimited |
| 0x80147DC0 | func_80147DC0 | MoveSpeedToWorld | the move speed through the model's rotation (rotX, rotY, rotZ from model +0x10..) into a VECTOR | H | e58E0 (ApplyMatrixLV) |
| 0x80147E44 | func_80147E44 | AccelFacingYXZ | as AccelFacingFree but the matrix built RotMatrixY, then X, then Z | M | e58E0; no C callers |
| 0x80147F50 | func_80147F50 | ApplyMoveSpeedWorld | AccelWorld(o, 0, 0, 0) | M | e58E0; 4 stage calls / 2 files (sc07_002) + 2 abil: `func_80147F50(o)` |
| 0x80147F78 | func_80147F78 | AccelWorld | add to the move speed, velocity = the move speed unturned (world axes) | M | e58E0; called by ApplyMoveSpeedWorld |
| 0x80148094 | func_80148094 | SlopeScaleMoveSpeed | from a surface normal: the move speed cut (uphill) or raised (downhill) by the slope, on its larger axis, into a vector | L | e58E0; no C callers. ratan2 of the normal against the turned speed; 0x200 = across the slope |
| 0x801483E8 | func_801483E8 | SaveSafeGroundPos | TraceMap 8 units down: floor (0x2000) right below, surface type 0 -> +0xA0 = the position | M | e58E0; 4 engine callers (player kind steps) + 3 abil (ovl1a, ovl31, ovl34): `func_801483E8(a)` |

#### Frames, camera and screen points

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80146EC0 | func_80146EC0 | PlaceAtObjPoint | out (16.16) = a point of the object's frame in the world, plus an offset turned by the camera | M | e58E0 (func_80015954, ObjLocalToWorld16, RotateByCamera); 1 abil call: ovl20 `func_80146EC0(a->+0x4C, a + 4, &pt, &ofs)` |
| 0x80146F58 | func_80146F58 | RotateByCamera | a vector turned by the camera's pitch and heading (GetCameraPitch, GetCameraHeading, RotMatrix, ApplyMatrixSV) | H | e58E0; called by PlaceAtObjPoint |
| 0x80149290 | func_80149290 | ObjLocalToWorldAtPos | ObjLocalToWorld with the model's translation (+0x48/+0x4C/+0x50) set to the object's whole position for the call | M | e58E0; func_8014FD54 turns two points (0,0,7) and (0,0,-0x18) for a TraceMap wall test (surface 0x15). Note: the save reads +0x4C twice, so +0x50 is restored with the +0x4C value |
| 0x801493D0 | func_801493D0 | ObjLocalToWorld16To | ObjLocalToWorld16 into another 16.16 point | M | e58E0; 1 abil call: ovl17 `func_801493D0(t, a + 0x10, a + 4)` |
| 0x8014942C | func_8014942C | ObjWorldToLocal | WorldToLocal with the object's model matrix | H | e58E0; no C callers. Mirror of ObjLocalToWorld |
| 0x80149450 | func_80149450 | ObjWorldToLocal16 | the same for the whole parts (+2/+6/+0xA) of a 16.16 point, in place | M | e58E0; no C callers |
| 0x801494CC | func_801494CC | ObjWorldToLocal16To | the same into another point | M | e58E0; no C callers |
| 0x80149544 | func_80149544 | ObjPointToScreenOtz | ObjLocalToWorld, then ProjectPointOtz | M | e58E0; no C callers |
| 0x80149584 | func_80149584 | ObjPointToScreen | ObjLocalToWorld, then ProjectPoint | M | e58E0; no C callers |
| 0x8014964C | func_8014964C | ObjPoint16ToScreen | a 16.16 point's whole parts through ObjLocalToWorld and ProjectPoint, in place | M | e58E0; 1 abil call: ovl22 `func_8014964C(o, a + 4)`. Twin of IntoParentFrame (0x801495C4), which does the same with ProjectPointOtz |
| 0x80149184 | func_80149184 | GetHeadingFromCamera | model heading minus GetCameraViewYaw (12 bits) | M | e58E0; 1 stage call (sc06_000) and 3 engine callers, all `D_801152A0 = func_80149184(a)`, later added back (`heading = D_801152A0 + GetCameraViewYaw()`, func_80160534) |
| 0x801491C4 | func_801491C4 | GetCameraViewYaw | ratan2 of the camera's eye-to-target vector (D_801151D4 +0x3C..+0x50) | M | e58E0; used by GetHeadingFromCamera, func_8015AE2C, func_80160534 |

#### Pose point pairs (sword trails)

The current pose record (model +0x20) carries two s8 point pairs before it: at -0x10 and at -8.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801484B0 | func_801484B0 | GetPosePointsA | the pair at pose -0x10 of Musashi's current pose | M | e58E0; func_80156B74 (mode 0) feeds it to func_80156ECC with the next pose's pair; also func_8015F448, func_80165E90, func_80166994 |
| 0x801484E8 | func_801484E8 | GetNextPosePointsA | the same pair of the pose one step ahead (func_80154358 peeks the next pose and restores the motion state) | M | e58E0; func_80156B74 |
| 0x80148534 | func_80148534 | GetPosePointsB | the pair at pose -8 | M | e58E0; func_80156B74 (mode 1), func_8015E40C, func_8015F380, func_8015F448; 1 abil call: ovl35 `func_80148534(&s, &t)` then into the model's frame (ObjLocalToWorld) |
| 0x8014856C | func_8014856C | GetNextPosePointsB | the pair at -8 of the next pose | M | e58E0; func_80156B74 |
| 0x801485B8 | func_801485B8 | ReadPosePoints | six s8 at p into two s16 vectors | H | e58E0; used by the four above |

#### Pad input, stick and d-pad facing

The d-pad tables are indexed by held >> 12 (bit 0 up 0x1000, bit 1 right 0x2000, bit 2 down 0x4000, bit 3 left 0x8000,
the bits ObjUpHeld..ObjLeftHeld test); `a` is the camera's view yaw. The table data is not in the repository: the
index of each entry is inferred from address order, and each one's angle matches its direction combination (up = a,
right = a+0x400, down = a+0x800, left = a-0x400, opposite pairs = none), so the order is very likely right.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80148634 | func_80148634 | ClearObjPadInput | held = pressed = 0, stick = 0x8080 (centred) | H | e58E0; 4 stage calls / 4 files (`func_80148634(a)`), 4 engine callers (func_8016F0E4, func_8016F14C, ...). ClearPadInput is the EXE's own |
| 0x80148648 | func_80148648 | ReadObjPad | pad type, held, pressed, stick from pad n (or the demo pad); cleared when +0x1C5 or outside kinds 0x1E / 0x1A while func_800CF8B4 is 0; an analog pad (0x53 / 0x73) with the d-pad held counts as digital (0x41); while +0x1B0 the buttons are swapped (SW1) and the stick x mirrored | H | e58E0; UpdatePlayer `func_80148648(p, 0)`; +0x1B0 counts down in UpdatePlayer |
| 0x80148AAC | func_80148AAC | FaceStickDirOffset | FaceStickDir, then when a direction was held heading = (heading + 0xFA) & 0xFF8 | L | e58E0; func_8015C7E4, func_8015CA28 (`if (func_80148AAC(a) & 0xFF)`) |
| 0x80148AFC | func_80148AFC | FaceStickDir | model heading = the camera-relative d-pad / stick direction (D_8018F004 handlers for a digital pad); 1 when a direction was held | H | e58E0; 1 stage + 3 abil + 4 engine calls, e.g. sc03_121 `func_80148AFC(o)`, func_80155800 before a swing |
| 0x80148C18 | func_80148C18 | FaceDpadNone | D_8018F004[0]: nothing held, returns 0 | M | e58E0 |
| 0x80148C20 | func_80148C20 | FaceDpadUp | [1] up: heading = a, returns 1 | M | e58E0 |
| 0x80148C34 | func_80148C34 | FaceDpadRight | [2] right: a + 0x400 | M | e58E0 |
| 0x80148C4C | func_80148C4C | FaceDpadUpRight | [3] up+right: a + 0x200 | M | e58E0 |
| 0x80148C64 | func_80148C64 | FaceDpadDown | [4] down: a + 0x800 | M | e58E0 |
| 0x80148C7C | func_80148C7C | FaceDpadUpDown | [5] up+down: returns 0 | M | e58E0 |
| 0x80148C84 | func_80148C84 | FaceDpadDownRight | [6] right+down: a + 0x600 | M | e58E0 |
| 0x80148C9C | func_80148C9C | FaceDpadUpRightDown | [7] up+right+down: a + 0x400 | M | e58E0 |
| 0x80148CB4 | func_80148CB4 | FaceDpadLeft | [8] left: a - 0x400 | M | e58E0 |
| 0x80148CCC | func_80148CCC | FaceDpadUpLeft | [9] up+left: a - 0x200 | M | e58E0 |
| 0x80148CE4 | func_80148CE4 | FaceDpadLeftRight | [10] right+left: returns 0 | M | e58E0 |
| 0x80148CEC | func_80148CEC | FaceDpadUpLeftRight | [11] up+right+left: returns 0 | M | e58E0 |
| 0x80148CF4 | func_80148CF4 | FaceDpadDownLeft | [12] down+left: a - 0x600 | M | e58E0 |
| 0x80148D0C | func_80148D0C | FaceDpadUpDownLeft | [13] up+down+left: a - 0x400 | M | e58E0 |
| 0x80148D24 | func_80148D24 | FaceDpadRightDownLeft | [14] right+down+left: a - 0x800 | M | e58E0 |
| 0x80148D3C | func_80148D3C | FaceDpadAll | [15] all four: returns 0 | M | e58E0 |
| 0x80148D44 | func_80148D44 | GetPlayerStickAngle | Musashi's camera-relative input direction (D_8018F044 for a digital pad), -1 when none | H | e58E0; 2 abil calls: `model->+0x12 = func_80148D44(a)` (ovl21, ovl34) |
| 0x80148E54 | func_80148E54 | GetObjStickAngle | the same for an object's own pad fields (D_8018F084) | H | e58E0; 1 stage (sc03_121 `t = func_80148E54(o)`), 2 abil, func_8015EA3C (`if (t >= 0)` move toward it) |
| 0x80148F60 | func_80148F60 | GetDpadAngleNone | angle table [0]: -1 | M | e58E0 |
| 0x80148F68 | func_80148F68 | GetDpadAngleUp | [1]: a | M | e58E0 |
| 0x80148F74 | func_80148F74 | GetDpadAngleRight | [2]: a + 0x400 | M | e58E0 |
| 0x80148F80 | func_80148F80 | GetDpadAngleUpRight | [3]: a + 0x200 | M | e58E0 |
| 0x80148F8C | func_80148F8C | GetDpadAngleDown | [4]: a + 0x800 | M | e58E0 |
| 0x80148F98 | func_80148F98 | GetDpadAngleUpDown | [5]: -1 | M | e58E0 |
| 0x80148FA0 | func_80148FA0 | GetDpadAngleDownRight | [6]: a + 0x600 | M | e58E0 |
| 0x80148FAC | func_80148FAC | GetDpadAngleUpRightDown | [7]: a + 0x400 | M | e58E0 |
| 0x80148FB8 | func_80148FB8 | GetDpadAngleLeft | [8]: a - 0x400 | M | e58E0 |
| 0x80148FC4 | func_80148FC4 | GetDpadAngleUpLeft | [9]: a - 0x200 | M | e58E0 |
| 0x80148FD0 | func_80148FD0 | GetDpadAngleLeftRight | [10]: -1 | M | e58E0 |
| 0x80148FD8 | func_80148FD8 | GetDpadAngleUpLeftRight | [11]: -1 | M | e58E0 |
| 0x80148FE0 | func_80148FE0 | GetDpadAngleDownLeft | [12]: a - 0x600 | M | e58E0 |
| 0x80148FEC | func_80148FEC | GetDpadAngleUpDownLeft | [13]: a - 0x400 | M | e58E0 |
| 0x80148FF8 | func_80148FF8 | GetDpadAngleRightDownLeft | [14]: a - 0x800 | M | e58E0 |
| 0x80149004 | func_80149004 | GetDpadAngleAll | [15]: -1 | M | e58E0 |
| 0x80149204 | func_80149204 | ClearDoubleTap | +0x1E4 (countdown and window) and +0x1DC (double-tapped buttons) = 0 | M | e58E0; no C callers |
| 0x80149210 | func_80149210 | SetDoubleTapWindow | countdown +0x1E4 and window +0x1E6 = n frames | M | e58E0; player init: `func_80149210(&D_80126B58, 8)` |
| 0x80149228 | func_80149228 | UpdateDoubleTap | a press within the window of the same button's last press sets +0x1DC = those buttons; the countdown restarts at each press | M | e58E0; called by UpdatePlayer after ReadObjPad |
| 0x80149284 | func_80149284 | TestDoubleTap | +0x1DC & mask | M | e58E0; no C callers |
| 0x80149FB0 | func_80149FB0 | ToggleEC0BitOnSelect | select (0x100) pressed, not on a map listed at D_8018F0C4, not +0x44 bit 0x400 or +0x1C8: 0x80078EC0 ^= 0x80; 1 then | M | e58E0; func_80159C84, func_8015A3C8, func_8015AE2C, func_8015C128 call it each frame. Guard start (func_8015E9B8) branches on that bit |

#### Hit flags, guard and charge

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014900C | func_8014900C | SetHitPending | hitFlags (+0x3C) bit 0x8000 set | H | e58E0; pair of ClearHitPending (func_80149020); func_80159A20 |
| 0x80149034 | func_80149034 | SetGuarding | hitFlags bit 0x4000 set | H | e58E0; set by the guard start func_8015E9B8 (kind 0x11, R1) and func_80160534; GuardBlocksHit tests it |
| 0x80149048 | func_80149048 | ClearGuarding | hitFlags bit 0x4000 cleared | H | e58E0; func_8015ED6C, func_8015F080, func_8015F260, func_801607B8 (the guard's exits) |
| 0x8014A454 | func_8014A454 | GuardBlocksHit | guarding (bit 0x4000) and the hit's facing (+0x42) within 0x2AA of the reverse heading: the hit came from the front | H | e58E0; func_8015126C: then func_80160368 (blocked) and the hit is dropped; 2 stage calls: sc03_102 `if (func_8014A454(&D_80126B58) == 0)` apply the push, sc02_027 the same |
| 0x80149CD4 | func_80149CD4 | CanGuard | R1 (0x08) held, no EC0 mode time (+0x1C8), not +0x44 bits 0x404 | M | e58E0; then kind 0x11 (SwitchToGuard, func_8015E880) in func_80159C84 / func_8015A3C8 / func_8015B950; 4 stage calls / 4 files `if (func_80149CD4(p))` (sc04_002/005/007) |
| 0x8014A59C | func_8014A59C | ChargeGauge | while +0x44 bit 1 and R1 held: the charge 0x80078EBF += 3 (6 with flag 0x20), at most 0x80; else 0 | M | e58E0; called by UpdatePlayer. The guard start sets +0x44 bit 1; 0x80078EBF is the charge byte (part 2 doc, ChargeFxStep) |

#### Actions: tests and starts (called from the player kind steps)

A test returns 1 when the action may start; the caller then runs RunPlayerKindHandler (the old kind's exit) and the
start, which is SetKindAndState(p, kind) plus that kind's first state.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801496D4 | func_801496D4 | CanJump | cross (0x40) pressed and no carried actor (+0x178) | H | e58E0; then TriggerJump in func_80155800, func_80159C84, func_8015A3C8, func_8015B950; 1 abil call (ovl34) |
| 0x80149704 | func_80149704 | TriggerJump | kind 2 from its first state (EnterPlayerJump, func_8015AD08) | H | e58E0; always after CanJump |
| 0x80149724 | func_80149724 | TriggerJumpRising | kind 2 entered at state 1 (StartPlayerJump, func_8015ACC4): fall speed -0x120000, SpawnEffect2(p, 2), +0xA8 at most 0x18 | M | e58E0; func_8015CD20, func_8015D1B8, func_8015F448 (jumps out of other kinds) |
| 0x80149744 | func_80149744 | CanChargedAttack | square pressed with the charge full (0x80078EBF >= 0x80), not +0x44 bit 4 | M | e58E0; in the guard step func_8015EA3C and func_8015B950, then TriggerChargedAttack |
| 0x80149788 | func_80149788 | TriggerChargedAttack | kind 0x15, the charged attack (SwitchToChargedAttack, func_8015F7A0) | M | e58E0; after CanChargedAttack (func_8015EA3C, func_8015B950) |
| 0x801497A8 | func_801497A8 | CanUseAbility | circle (0x20) pressed, not kind 0x1A, not PlayerFlag800, not +0x44 bits 0x404, the held ability (stats +0x49) not blocked by D_801901EC (bit 0x80); ability 0xF needs no obj68 kind 0xA out | M | e58E0; func_80161BE0: then TriggerUseAbility |
| 0x80149864 | func_80149864 | TriggerUseAbility | kind 0x17 (SwitchToUseAbility, func_801653B8; CheckAbilityFails sets 0x80078EC5) | M | e58E0; func_80161BE0 |
| 0x80149884 | func_80149884 | HasNoPlayerAction | GetPlayerAction == 0 (always 0 on map 0x308F) | M | e58E0; func_80161B84 and func_8015F448: `(+0x44 & 0x100) && func_80149884(a)` |
| 0x801498C0 | func_801498C0 | TriggerLieDown | kind 0x1D, lie down (SwitchToLieDown, func_80160B00) | M | e58E0; func_80161B84 (CheckLieDownFlag), when +0x44 bit 0x100 (fall asleep) and no action |
| 0x801498E0 | func_801498E0 | TryEC0Mode3Swing | when CanSwingFusion or CanSwingLumina: obj68 kind 8 on Musashi (AllocObj68High, offset (0, -0x1E, 0)); 1 then | L | e58E0; case 3 of the EC0-mode switch (func_801619A4, GetActiveEC0Mode) in func_80159C84 / func_8015A3C8 / func_8015AE2C / func_8015B950 |
| 0x80149954 | func_80149954 | TryEC0Mode4Swing | square or triangle held: PlaySe(0x8E0) on a new press, func_800CCF28 (overlay), obj68 kind 0x12 on Musashi; released: the sound request (4, 0x8E0) (likely stopping it), 0 | L | e58E0; case 4 of the same switch |
| 0x80149A64 | func_80149A64 | CanSwingSword | CanSwingFusion or CanSwingLumina | M | e58E0; case 5 of the switch, then func_800CCCC0 (overlay) |
| 0x80149AA8 | func_80149AA8 | CanSwingFusion | square (0x80) pressed, not +0x44 bits 0x404 | M | e58E0; then TriggerFusionCombo (func_80159C84, func_8015A3C8, the guard step) |
| 0x80149AD4 | func_80149AD4 | TriggerFusionCombo | with a carried actor (+0x178) kind 0xE (SwitchToThrowCarried); else combo step +0x1AA = 1 and kind 5 (EnterFusionCombo, func_8015554C) | M | e58E0; func_80155800 (a swing chained from a swing), func_80159C84, func_8015A3C8, func_8015B950 |
| 0x80149B14 | func_80149B14 | ContinueFusionCombo | the same without resetting +0x1AA | M | e58E0; func_80155800 after it advances +0x1AA (1..4) |
| 0x80149B54 | func_80149B54 | CanSwingLumina | triangle (0x10) pressed, flag 0x80 (TestFlag80), not +0x44 bit 0x400 | M | e58E0; then TriggerLuminaSlash or (near a marked actor) TriggerGrab |
| 0x80149BAC | func_80149BAC | TriggerLuminaSlash | with a carried actor kind 0xF (SwitchToThrowCarriedAlt); else +0x1AA = 1 and kind 6 (EnterLuminaSlash, func_80157510) | M | e58E0; func_80159C84, func_8015A3C8, func_8015B950, func_8015C32C |
| 0x80149C08 | func_80149C08 | CanAirSlash | triangle pressed, flags 0x80 and 0x89, no action lock (+0x223), no EC0 mode time, not +0x44 bits 0x404 | M | e58E0; func_8015AE2C only while the motion is D_800D4BE0 (the jump motion, see func_8015B858), then kind 7 (func_801577C8) |
| 0x80149C94 | func_80149C94 | TriggerAirSlash | kind 7, the air slash (EnterAirSlash, func_801577C8) | M | e58E0; no C callers (func_8015AE2C calls func_801577C8 itself) |
| 0x80149CB4 | func_80149CB4 | TriggerSwordSkill | StartSwordSkill(p, n) (func_80157D20): kind D_8018F848[n] | M | e58E0; func_80155A44 `(a, 2)`, `(a, 3)` (triangle during a swing, flag 0x85), func_80157F64 `(a, 5)` |
| 0x80149D10 | func_80149D10 | CheckEC0ModePower | triangle pressed, charge 0x80, an EC0 mode picked (0x80078EC0 & 0x7F): 2 when +0x1C4, else 1; 0 otherwise | M | e58E0; the guard step func_8015EA3C: 1 -> kind 8 (func_80175150), 2 -> StartPlayerActionScript(+0x21C). +0x1C4: GetPlayerByte1C4 |
| 0x8014A4B4 | func_8014A4B4 | CanGuardHop | flag 0x1E and cross pressed | M | e58E0; the guard step func_8015EA3C, then TriggerGuardHop |
| 0x8014A4FC | func_8014A4FC | TriggerGuardHop | kind 0x12, the guard hop (SwitchToGuardHop, func_8015EDD4) | M | e58E0; func_8015EA3C |
| 0x8014A51C | func_8014A51C | CanDoubleJump | flag 0x1E, cross pressed, not +0x44 bit 0x400, +0xA8 < 0x19, no action lock | M | e58E0; func_8015B858: once per jump (+0x240), fall speed -0xE0000 and the jump motion again |
| 0x8014A6C4 | func_8014A6C4 | CanWallClimb | flag 0x1F, not +0x44 bit 4, cooldown +0x1BE clear | M | e58E0; func_8016163C / func_80161774: on a wall (0x8000) of surface 0x15, then kind 0x14 (func_8015F2F0) facing the wall normal |
| 0x8014A738 | func_8014A738 | IsGrabbableNear | flag 0x83 and an actor with +0xC1 == 7 (reaction 7) within 0x40 (x and z) | M | e58E0; func_80159C84: then TriggerGrab instead of the triangle swing |
| 0x8014A830 | func_8014A830 | TriggerGrab | kind 0x10, grab (SwitchToGrab, func_8015E184) | M | e58E0; func_80159C84, chosen over the Lumina slash when IsGrabbableNear |
| 0x8014A850 | func_8014A850 | CatchGrabbableActor | the first live actor with +0xC1 == 7, hit data, flags5C 0x8000 within 0x40 (y from its +0x40): +0x18C = it, hit type 0x1B (func_8014C4AC); 1 then | M | e58E0; func_8015E288 (GrabReachStep, kind 0x10) |
| 0x8014A048 | func_8014A048 | TryPickUpActor | square, or triangle with flag 0x80: the first actor (flags5C 0x200, no +0xAA, not +0x184) the segment from Musashi to (0, -0x10, -0x20) of his frame crosses: +0x178 = it, LiftActor; 1 then | M | e58E0; func_8015A3C8 only while the motion is D_800D5428, then TriggerCarry. +0x178 = the carried actor (CanJump refuses, square / triangle throw it: kinds 0xE / 0xF) |
| 0x8014A1B0 | func_8014A1B0 | LiftActor | strike record type 0xA (lifted; thrown is 9) func_8014C4AC(actor, 0xA, func_80156370(0xA), Musashi's position, his heading) | M | e58E0; TryPickUpActor and func_801723C4 |
| 0x8014A218 | func_8014A218 | TriggerCarry | kind 0xD, carry (SwitchToCarry, func_8015D4B4) | M | e58E0; after TryPickUpActor |
| 0x8014A238 | func_8014A238 | FindUnhittableActorAhead | the first live actor with +0xAA set within 0x30 (func_8014C278) and 0x200 of his facing (func_8014C2B0) | L | e58E0; no C callers. StageActor +0xAA: cannot hit Musashi |
| 0x8014A2E4 | func_8014A2E4 | FindUnhittableActorNear | the first live actor with flags5C 0x8000 and +0xAA set within 0x30 | L | e58E0; func_801508B4, then HitActorType1F |
| 0x8014A380 | func_8014A380 | HitActorType1F | func_8014C4AC(actor, 0x1F, 0, Musashi's position, his heading) | M | e58E0; func_801508B4 |
| 0x8014A3E0 | func_8014A3E0 | RevertMoveAgainstDir | when the velocity's whole parts (+0x12, +0x1A) point against D_801152B0 / D_801152B4: position = last position (+0x88); 0 then, else 1 | L | e58E0; no C callers |

#### Talking

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80149D9C | func_80149D9C | TryTalk | TryTalkOnRequest, else TryTalkOnSquare | M | e58E0; func_80159C84 / func_8015A3C8: `if (func_80149D9C(a)) { RunPlayerKindHandler; func_80149FA8; return; }` |
| 0x80149DD8 | func_80149DD8 | TryTalkOnSquare | square pressed, no carried actor, not +0x44 bits 0x404: +0x190 = 0, then TalkToActor over the 96 actors | M | e58E0; called by TryTalk |
| 0x80149E94 | func_80149E94 | TryTalkOnRequest | no action and +0x1C5 set: clear it, then TalkToActor over the actors | M | e58E0; called by TryTalk. +0x1C5 is set by RequestTalkCheck (0x8014CB68, 5 stage calls) and blanks the pad in ReadObjPad |
| 0x80149F2C | func_80149F2C | TalkToActor | an actor of kind 0x83 (SpawnTalkMarker's) or 0x61: its +0xDC callback (func_80144A04); an action back -> RunPlayerKindHandler, ResetPlayerKind, StartPlayerAction(it, 0x01000000) | M | e58E0; called by the two above |
| 0x80149FA8 | func_80149FA8 | AfterTalkNop | empty | L | e58E0; called after a successful TryTalk (func_80159C84, func_8015A3C8) |

#### EC0 mode, game clock, money, floating numbers

0x80078EC0 (stats +0x48): low 7 bits = the mode picked in the sub-screen (one of six entries whose ownership flags are
D_8018E5A8[i], func_8013F350); bit 0x80 toggled by select (then guard becomes kind 0x1C). +0x1C8 = the mode's time
left (GetActiveEC0Mode returns the pick only while it runs). Likely Lumina's elemental scrolls, not proven; the names
keep part 2's neutral "EC0 mode".

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8014AA04 | func_8014AA04 | SetEC0Mode | 0x80078EC0 = n, keeping bit 0x80 | M | e58E0; eC98C func_8013F350 (the sub-screen list): `func_8014AA04((u8)(n + 1))` then the sound request 0x460 / 0x461 |
| 0x8014AA28 | func_8014AA28 | CancelEC0Mode | unless Musashi is kind 0x19-0x1A / 0x1D-0x1E: end his kind (ResetPlayerKind; abilities 0xA / 0xC / 0x18 end too, func_80165A20); +0x1C8..+0x1D8 = 0; frees obj68 kinds 5-9 and 0x10-0x14 and effects 0x26, 0x27, 0x39-0x3C; action lock +0x223 = 0x10 | M | e58E0; eC98C func_8013E958 calls it when 0x80078EC0 changed in the sub-screen |
| 0x8014ACC0 | func_8014ACC0 | SpendEC0ModeTime | +0x1C8 -= n, at least 0 | M | e58E0; 5 abil calls / 2 files: ovl33 `func_8014ACC0(o, 1)`, `(o, 0xA)` |
| 0x8014ACE8 | func_8014ACE8 | ShowNumberAbove | ShowNumberAt 0x20 above the object | M | e58E0; func_801506A4 `(a, 3, D_8018F16C[..])`, `(a, 2, ..)`, func_80150820 `(a, 4, n)`, func_80151204 `(a, 1, n & 0x7FFF)` |
| 0x8014AD30 | func_8014AD30 | ShowNumberAt | AllocEffect kind 0x1D (the damage-number effect, ShowDamage's) at a point: +0x2C = mode, +0x30 = value | M | e58E0; func_8014B350 `(a, &v, 6, 0)`, func_801636D0, func_80163EC8. Part 2: DamageNumberSetup reads the value at +0x30 and the launch mode at +0x2C |
| 0x8014AD7C | func_8014AD7C | AddPlayerMoney | AddMoney(Musashi, n) | H | e58E0; 1 stage call: sc05_017 `func_8014AD7C(0x3C)` |
| 0x8014ADE0 | func_8014ADE0 | TickGameClock | the clock 0x80078E90 (16.16, whole = minutes, 0x5A0 a day) += 0x1555 a frame (0xAAA8 while asleep, +0x44 bit 0x80, set by StartLieDown); each hour bp > 0: AddHp 4 (10 with flag 0x1B while asleep), bp 0: LoseHp 4 (down to 1); bp -4 each hour (asleep: AddBp 8 with flag 0x1B, else SpendBp 1); at 0x5A0 the next day (func_8014B084) | M | e58E0; called by UpdatePlayer when func_80029104 allows, unless PlayerActionBlocksInput or kind 0x1A / 0x1E or +0x44 bit 0x10. Also AddBp 1 each minute while stats +0x49 (the held ability) is 3 |

#### Notes

* IntoParentFrame (0x801495C4, already named) is not a parent-frame transform: it is ObjLocalToWorld followed by
  ProjectPointOtz on a 16.16 point in place (a screen point with depth), the twin of ObjPoint16ToScreen (0x8014964C).
  A name like ObjPoint16ToScreenOtz would fit better.
* func_80149290 (ObjLocalToWorldAtPos) saves model +0x4C twice (`v[1]` and `v[2]`), so it restores the model's z
  translation +0x50 with the y value. Matching code; worth a comment.
* func_80147860, func_80147E44 and func_80147F78 call AddMoveSpeedX (func_80147928) with no arguments: the original
  passes its own a0/a1 through. The K&R definition of func_80147928 hides it.
* Player fields pinned down here: +0x24/+0x28/+0x2C move speed in the facing frame; +0x60/+0x68/+0x70 three scale
  vectors multiplied into the model scale; +0xA0 last safe ground position; +0x100..+0x104 tilt angles,
  +0x108..+0x10C their target; +0x118 / +0x120 / +0x128 smoothed, target and extra up vectors (+0x12E enables the
  extra); +0x130..+0x134 angle overrides, +0x136 their mask; +0x178 carried actor; +0x18C grabbed actor;
  +0x1AA combo step; +0x1B0 swapped-controls timer; +0x1BC / +0x1BD / +0x1BE cooldowns; +0x1C5 talk request;
  +0x1C8 EC0 mode time; +0x1DC / +0x1E0 / +0x1E4 / +0x1E6 double-tap state; +0x223 action lock. hitFlags 0x4000 =
  guarding.

Rows: 171 (H 29, M 131, L 11); skipped (already known): 69

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

### 0x80153000-0x8015C000: the kind / state machine, motion scripts, sword attacks, death

Musashi's kind / state machine (Player +0 kind, +2 state, a `D_xxx[+2]` state table per kind; D_8018FBA8[kind] is the
kind's exit handler, run before every kind change). Here: two hazard kinds (shrink-out, pit fall) with the safe-spot respawn search;
the grabbed kind; motion- and face-script restarts and the motion interpreter; the sword attacks (kind 5 Fusion combo, kind 6 Lumina
slash, kind 7 air slash, three skill kinds) with the attack-record hit test and damage / critical rolls; death and the continue
choice (kind 0x1A); a five-step scene task; the per-frame kind update; kinds 0-4 (stand, run, jump, fall, slide).

#### Hazard kinds: shrink-out and pit fall, then respawn at a safe spot

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80153060 | func_80153060 | RunVanishKindState | this hazard kind's state handler, D_8018F2DC[+2] (5 states: the five below) | M | e58E0; no C callers (a D_8018FBA8-style kind table entry); the table runs to D_8018F2F0, five words |
| 0x8015309C | func_8015309C | VanishEnter | state 0: CollidePlayerMove, PlayerObjFallStep, PlayerObjGroundStep, then VanishStart and NextEffectState (so state 1 is skipped) | M | e58E0 func_8015309C; same shape as the sibling hazard kinds at 0x80152094 / 0x801523AC |
| 0x801530E4 | func_801530E4 | VanishStart | StartRumbleScript(D_80062C04), ClearHitPending, SetPlayerFlag7E2, +0xDE = 0x40, drop the linked object (func_8014CBF8), zero +0x118..+0x12C (func_801474EC), ClearDisplayFlag10, next state | M | e58E0; 1 call (VanishEnter) |
| 0x80153150 | func_80153150 | VanishShrinkStep | the model scale +0x60/+0x62/+0x64 shrinks by 0x100 a frame; at 0: HidePlayerAbility, StartRespawnWait, next state | M | e58E0 (the scale words are reset to 0x1000 by RecoverFromVanish and ResetPlayerForDeath) |
| 0x801531BC | func_801531BC | VanishWaitStep | ClearHitPending; when TickRespawnWait returns 0: +0xDE = 1 (ring radius for FindRespawnPoint), +0xDF = 0, next state | M | e58E0; identical to the waits at 0x8015220C / 0x80152A08 / 0x80152EFC |
| 0x80153204 | func_80153204 | VanishRespawnStep | FindRespawnPoint until it succeeds; then position = +0x88 (the spot), ClearEffectAccel, RecoverFromVanish, ResetPlayerKind, DropTimedAbility | M | e58E0 |
| 0x8015327C | func_8015327C | RecoverFromVanish | DamagePlayerHp(+0xF2), +0xA8 = 0x20, face 0x11, UpdateFlag10Part21, ShowPlayerAbility, ClearPlayerFlag7E2, hit fields +0x3E/+0x40/+0x42/+0xDD cleared, +0x3C bit 0 off, model +0x10 = 0, scale 0x1000, SetFallSpeed(0), ForgetPlayerHit | M | e58E0; 1 call (VanishRespawnStep); byte-for-byte the same as func_801522CC |
| 0x80153320 | func_80153320 | RunPitFallKindState | the second hazard kind's state handler, D_8018F2F0[+2] (5 states) | M | e58E0; no C callers (kind table entry) |
| 0x8015335C | func_8015335C | PitFallEnter | state 0: the three move steps, PitFallStart, NextEffectState | M | e58E0 |
| 0x801533A4 | func_801533A4 | PitFallStart | the same set-up as VanishStart (rumble, +0xDE = 0x40, parts hidden) | M | e58E0; 1 call (PitFallEnter); its body equals VanishStart's |
| 0x80153410 | func_80153410 | PitFallStep | ClearHitPending, AddFallSpeedLimited(0x18000), AddFallSpeed; once y >= 0x201 or +0xDE has counted out: HidePlayerAbility, StartRespawnWait, next state | M | e58E0 (y grows downward: he drops out of the room) |
| 0x80153490 | func_80153490 | PitFallWaitStep | as VanishWaitStep | M | e58E0 |
| 0x801534D8 | func_801534D8 | PitFallRespawnStep | as VanishRespawnStep, with RecoverFromPitFall | M | e58E0 |
| 0x80153550 | func_80153550 | RecoverFromPitFall | as RecoverFromVanish (damage +0xF2, face, parts, scale, ForgetPlayerHit) | M | e58E0; 1 call (PitFallRespawnStep) |

#### Respawn helpers (shared by the five hazard kinds 0x80151xxx-0x801535xx)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015369C | func_8015369C | StartRespawnWait | calls the stage's respawn hook D_8011DB28 with the last safe point (+0xA0) when one is set, then +0xDE = 0x5A (90 frames) | M | e58E0; 5 calls (func_80152194, func_8015294C, func_80152E4C, VanishShrinkStep, PitFallStep); sc06_000 sets D_8011DB28 (`D_8011DB28 = func_sc06_000_80180AB8`); +0xA0 is written by func_801483E8 only when he stands on a surface-0 floor |
| 0x801536DC | func_801536DC | TickRespawnWait | INCLUDE_ASM (no asm in this checkout); 0 when the wait set by StartRespawnWait is over | L | e58E0; 5 callers, all `if (func_801536DC(o) == 0) { +0xDE = 1; +0xDF = 0; NextEffectState }` |
| 0x80153800 | func_80153800 | FindRespawnPoint | with the stage hook: +0x88 = his position; when +0xDE > 0x20: the room's entry point D_80126DB0 (also the model heading); else tries 128 points on a ring of radius +0xDE*4 round the safe point +0xA0 (TestRespawnSpot) and widens the ring each frame; 1 while still searching | M | e58E0; 5 callers (the respawn steps), each placing him at +0x88 when it returns 0; func_80146FC4 uses D_80126DB0 the same way when he falls below y 0x400 |
| 0x80153978 | func_80153978 | TestRespawnSpot | TraceMap from the candidate to 0x1F below: 0 when it is floor (0x2000) of surface type 0 and ValidateRespawnSpot accepts it | M | e58E0; 1 call (FindRespawnPoint) |
| 0x801539F8 | func_801539F8 | ValidateRespawnSpot | traces from the safe point (+0xA0, 4 up) to the candidate (must stay floor), then 8 further down and a mode-2 trace agree; stores the spot at +0x88 (and +0x90); 0 on success | M | e58E0; 1 call (TestRespawnSpot) |
| 0x80153B58 | func_80153B58 | EmitPlayerSmoke | every 4th frame SpawnFx31 (func_8016DA04), every 2nd frame a puff (SpawnEffect kind 3, values 0x08880000 / 0x18009000) at his position | L | e58E0; 2 calls: func_80151780 when +0xF0 & 0x200 (a hit attribute), func_80152E4C (a hazard kind's sink step); doc2 names func_8016DA04 SpawnFx31 |

#### Being grabbed (struggle free), grab requests

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80153C30 | func_80153C30 | SetGrabFatal | D_8011F748 = 1: the grabbed state then ends the grab and DamagePlayerHp(current hp), i.e. the hold kills | M | e58E0 GrabbedStep; 2 stage calls (sc02_027, sc02_028) `func_80153C30()` |
| 0x80153C44 | func_80153C44 | SetGrabReactionEx | SetGrabReaction(kind, value) and D_8011DB18 = a third value | M | e58E0; no C callers |
| 0x80153CCC | func_80153CCC | RunGrabbedKindState | StartRumbleScript(D_8018F304), D_8018F32C[+2], then D_8011DB0C (grab reaction) and D_8011F748 cleared each frame | M | e58E0; kind table entry |
| 0x80153D34 | func_80153D34 | GrabbedEnter | state 0: the three move steps, GrabbedStart, NextEffectState | M | e58E0 |
| 0x80153D7C | func_80153D7C | GrabbedStart | PlaySe(0x451), motion D_8018F30C, ClearHitPending, his position saved at +0x244..+0x248, struggle count +0xDE = 10 (20 on map 0x3075), +0xDF = 0 | M | e58E0; 1 call (GrabbedEnter) |
| 0x80153E00 | func_80153E00 | GrabbedStep | each newly pressed direction (digital 0x41 or analog 0x53/0x73) counts +0xDE down, at 0 ForgetPlayerHit (he breaks free); once the holder D_80127518 is gone: back to the saved spot (not on map 0x3075), EndGrab, ResetPlayerKind, DropTimedAbility; grab reactions 1/2/3 deal D_8011DB1A (DamagePlayerHp, func_8014ACE8), 2 with effect 0x42 bursts; SetGrabFatal's flag kills | H | e58E0; SetGrabReaction calls from stages: `func_80153C74(3, 0x18)`, `(1, 0x14)` (sc02_027, sc03_089) |
| 0x8015410C | func_8015410C | EndGrab | D_80127518 (the holder) = 0, then ResetPlayerAfterHit | M | e58E0; 2 calls (GrabbedStep) |

#### Motion script (Player +0xB4 script, +0xB8 timer and flags, +0xBC index)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80154218 | func_80154218 | RestartPlayerMotionIndexBlend | motion n of the table +0xB0 started unconditionally with blend frames (+0xBC / +0xBD = n), +0xDC = CountMotionPoses, then StepPlayerMotion | H | e58E0; 1 call (SetPlayerMotionIndexBlend, the "if different" form) |
| 0x8015430C | func_8015430C | RestartPlayerMotionBlend | a motion pointer started unconditionally with blend frames, then StepPlayerMotion | H | e58E0; 1 call (SetPlayerMotionBlend) |
| 0x80154358 | func_80154358 | PeekPlayerMotionPose | runs one step of the script with side effects off (arg3 = 1) and returns the pose it would put in model +0x20; the motion fields and model +0x20 are restored | M | e58E0; 2 calls: func_801484E8 / func_8014856C `func_801485B8(func_80154358(&D_80126B58) - 0x10, ...)` (a weapon point from the next pose) |
| 0x80154418 | func_80154418 | StepPlayerMotion | one frame of the motion script with side effects on | H | e58E0; 5 calls: the player update func_80146128 and every Set/Restart motion |
| 0x8015444C | func_8015444C | RunPlayerMotionScript | the motion script interpreter: on the timer's end reads op +0xB4[+0xBC]: 0 end (flag 0x8000), 1 loop, 2 stop, 3 set hold, 4/11/12 skip, 5 jump to script, 6 go to index, 7-10 raise flags 0x4000/0x2000/0x1000/0x800, 14 face script, 15 face, 16-19 part / display flags, 20 toggle +0x1A8 (the attack's hit window), 21/22 StoreImage, 23/24 fixed pose, 25/26 +0x44 bit 0x20000, else a pose (model +0x20 = op + 0x10) | H | e58E0; 2 calls (StepPlayerMotion, PeekPlayerMotionPose) and itself |
| 0x801549F8 | func_801549F8 | CountMotionPoses | the number of pose entries before index +0xBC (ops skipped by their length), stored in +0xDC | M | e58E0; 3 calls (the blend starters and op 6) |

#### Face scripts

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80154AB4 | func_80154AB4 | RestartFace | face script n of +0xCC started unconditionally (+0xD0, timers 1, index 0) | H | e58E0; 1 call (StartFace, the "if different" form) |
| 0x80154B20 | func_80154B20 | RestartFaceAt | the same from index n (+0xD8 / +0xD9) | H | e58E0; 1 call (StartFaceAt) |
| 0x80154B7C | func_80154B7C | RestartFaceScript | a face script pointer started unconditionally | H | e58E0 (StartFaceScript); 3 stage calls (sc06_006) `func_80154B7C(p, &D_800D5F14)` |
| 0x80154BC8 | func_80154BC8 | RestartFaceScriptAt | the same from an index | H | e58E0; 1 call (StartFaceScriptAt) |
| 0x80154BE4 | func_80154BE4 | UpdatePlayerFace | FaceScriptStep with fresh flags, then RefreshFaceOverride | H | e58E0; called each frame by the player update func_80146128 |
| 0x80154F9C | func_80154F9C | RefreshFaceOverride | swaps the loaded face for the placeholder D_800D8D10 (game-mode word 0x80078E96 bit 0x8000) or the tired face 0x40000002 (stats +0x26 or +0x2E below 0x10) while no action runs, and back to the face word +0xC8 when that ends | M | e58E0; 1 call (UpdatePlayerFace); FaceSet makes the same choice when a face is set |

#### Ability package

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801554B8 | func_801554B8 | LoadAbilityPackage | when the wanted package +0x1A0 differs from the loaded one +0x196: func_800D02D0 (ovl36: a package's archive file loaded) until done, then +0x196 = it and its set-up (func_801659DC: D_801902E8[pkg]); 1 while loading | M | e58E0; no C callers (a handler); func_8015FF20 sets +0x1A0 from +0x184 and D_80078EC1 from it |

#### Kind 5: the Fusion (square button) combo

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80155518 | func_80155518 | StartFusionCombo | SetKindAndState(5), then FusionSwingStart at once | M | e58E0; no C callers. Kind 5 is the attack-button (pad 0x80) kind: func_80149AA8 (0x80 pressed) leads to func_80149AD4, which sets +0x1AA = 1 and calls EnterFusionCombo |
| 0x8015554C | func_8015554C | EnterFusionCombo | SetKindAndState(5), then its state handler (state 0 waits for the current motion) | M | e58E0; 2 calls: func_80149AD4, func_80149B14 (the stand / run / land steps and the combo itself) |
| 0x80155580 | func_80155580 | RunFusionComboState | kind 5's state handler, D_8018F37C[+2] | M | e58E0 |
| 0x801555BC | func_801555BC | FusionComboWait | state 0: when the current motion has ended (func_80161104), FusionSwingStart | M | e58E0 |
| 0x801555F4 | func_801555F4 | FusionSwingStart | face 0x15; combo step +0x1AA (5 when +0x44 & 0x200; 7 when running at full speed 0xFFF50000 with flag 0x82); per step a motion (D_800D4C94 ...), PlaySe 0x400 / 0x446 / 0x7F, voice PlaySeNow 0x5F3..0x5F6, ResetAttackHit, the trail effect (SpawnEffectOn kind 4); steps 0/1 alternate on +0x1AB; D_8011F730 \|= 3 | M | e58E0; 2 calls (StartFusionCombo, FusionComboWait); effect 4 is the blue trail of doc2's TrailFx A (weapon points func_801484B0) |
| 0x80155800 | func_80155800 | FusionSwingStep | the swing: +0x44 \|= 2; at the motion's end back to kind 0; square pressed from frame 4 (+0x1A9): after a hit (+0x1C0) the next step (1..4, via func_80149B14), else a fresh combo (func_80149AD4); jump and direction cancel (EnterPlayerJump, EnterPlayerRunning); a drift along the heading; RunAttackHit(+0x1AA) | M | e58E0; kind 5 state 1 |
| 0x80155A44 | func_80155A44 | CheckFusionSkillInput | steps 0/1: flag 0x85, Lumina owned (TestFlag80), a hit and triangle (0x10) pressed: StartSwordSkill(2); step 2: flag 0x86 and triangle: StartSwordSkill(3); 1 when one started | M | e58E0; 1 call (FusionSwingStep); func_80149CB4 = StartSwordSkill |
| 0x80155B20 | func_80155B20 | FusionFinisherLaunch | step 4 (the finisher): at the motion's end velocity 0, SetFallSpeed(-0x100000) (up), motion D_800D4DA8 | M | e58E0; reached by FusionSwingStart's double NextEffectState |
| 0x80155B9C | func_80155B9C | FusionFinisherRise | AddFallSpeedLimited(0x30000) and AddFallSpeed until he falls, then motion D_800D4DB4, PlaySe(0x447) | M | e58E0 |
| 0x80155C0C | func_80155C0C | FusionFinisherTurn | at the motion's end motion D_800D4DD4, next state | L | e58E0 |
| 0x80155C64 | func_80155C64 | FusionFinisherFall | falls (0x30000); a fall step that lands: ResetPlayerKind; else the ground check func_8014FA04 (as in MovePlayerObj): steep slope 0x4000: SetPlayerKind4; floor 0x2000: landing motion D_800D4DF4 and dust; else RunAttackHit(+0x1AA) | M | e58E0 |
| 0x80155D70 | func_80155D70 | FusionFinisherLand | at the motion's end: square held: func_8015E880 (the hold-attack kind), else ResetPlayerKind; ground lost: StartPlayerFall | M | e58E0; func_80149CD4 also leads to func_8015E880 |
| 0x80155E30 | func_80155E30 | FusionSwingHoldStep | +0x44 \|= 2; RunAttackHit(+0x1AA) until the motion's end, then ResetPlayerKind | M | e58E0; the state FusionSwingStart sets for step 5 (state 7) |
| 0x80155EA4 | func_80155EA4 | FusionDashSlashStep | step 7: forward drive (func_80147AD4 0x8000), dust every 4th frame, RunAttackHit; ends when the forward speed +0x2C reaches 0 or something was hit (+0x1C0) | M | e58E0; state 8 |
| 0x80155F58 | func_80155F58 | FusionComboNop | empty | L | e58E0; sits among kind 5's states (a table slot) |
| 0x80155F60 | func_80155F60 | EndFusionComboKind | kind 5's exit handler (RunPlayerKindHandler is called before every kind change): EndSwordSwing | M | e58E0 |
| 0x80155F80 | func_80155F80 | EndSwordSwing | +0x44 &= ~2 (the swinging bit set by every attack step), face 0x11 | M | e58E0; 3 calls (FusionSwingStep twice, EndFusionComboKind) |

#### Attack hit tests and damage (attack records of 20 bytes, damage records of 12)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80155FB0 | func_80155FB0 | RunAttackHitSet1 | RunAttackHit with record set 1 (D_8018F534) | M | e58E0; abil ovl30 `func_80155FB0(o, (AF(g, u8, 0x48) & 0x7F) - 1)` |
| 0x80155FD4 | func_80155FD4 | RunAttackHitSet2 | RunAttackHit with record set 2 (D_8018F548) | M | e58E0; abil ovl26 / ovl13 `func_80155FD4(o, AF(o, u8, 0x1AA))` |
| 0x80155FF8 | func_80155FF8 | RunAttackHit | AttackHitStep(o, record) on the scratchpad stack (SetSpadStackNested / ResetSpadStack); record = attack step, bit 16 / 17 pick set 1 / 2 | M | e58E0; 16 engine calls, nearly all `(o, AF(o, u8, 0x1AA))` from the attack steps; abil ovl27 1 call, same form |
| 0x80156044 | func_80156044 | AttackHitStep | picks the record (D_8018F3CC + n*20, 18 of them: the +0x1AA steps 0..0x11), rolls its damage; while the hit window +0x1A8 is open: TraceAttackPoints, TurnToAttackHit (record +0x10), SpawnAttackHitEffects, PlayAttackHitSe, +0x1C0 = 1 on a hit | M | e58E0; 1 call (RunAttackHit). Motion op 20 toggles +0x1A8 |
| 0x8015616C | func_8015616C | RollAttackDamage | damage record +0's damage: base + rand(range), or the level formulas func_80029B4C / func_80029BC8 / func_80029C44 (flags 0x4000 / 0x2000); D_8012693A = knock value (doubled with flag 0x81); D_801152B8 = +0xA plus 1-5 by flags 0x16-0x1A; flag 0x8000: ApplyCriticalDamage | M | e58E0; 1 call (AttackHitStep) |
| 0x80156370 | func_80156370 | RollDamage | base (low 12 bits) + rand(0..range) of damage record n | M | e58E0; 4 engine calls (func_8014A1B0 `(0xA)`, func_8014C43C, func_80163C2C `(0xD)`, func_80163EC8 `(0xE)`); abil ovl29 `func_8014C4AC(a, 0x29, func_80156370(0x29) & 0xFFFF, ...)` |
| 0x801563EC | func_801563EC | GetDamageRecord | D_8018F570 + n * 0xC | H | e58E0; 2 calls (RollAttackDamage, RollDamage) |
| 0x8015640C | func_8015640C | ApplyCriticalDamage | when RollCriticalHit says so: damage x 1.75 (flag 0x1C) or x 1.5, marked 0x8000 | M | e58E0; 1 call; func_801571C4 hands 0x8000 on as the hit's critical mark (v.pad = 1) |
| 0x801564B0 | func_801564B0 | RollCriticalHit | 0x8000 by chance: 1/2 with +0x44 & 0x200, 1/4 when any of func_8002A1B4 / A400 / A670 / A8E0, else 1/4 * a roll in 81..stats+0x2E | M | e58E0; 1 call (ApplyCriticalDamage) |
| 0x801565C0 | func_801565C0 | AnyAttackPointHit | 1 when any of the three point results D_801151E0[0..2] has bit 0 (an actor hit) | M | e58E0; 1 call (AttackHitStep sets +0x1C0) |
| 0x80156600 | func_80156600 | GetAttackHitPoint | the first attack point (D_80126AF0[i]) whose result has bit 0, else 0 | M | e58E0; 1 call (SkillAStep spawns effect 0x54 there) |
| 0x80156648 | func_80156648 | ResetAttackHit | +0x1A8 (hit window), +0x1A9 (swing frame), +0x1C0 (hit landed) = 0, ResetClankSe | M | e58E0; 9 engine calls (every attack start); abil ovl30 / ovl27 / ovl26 / ovl13 `func_80156648(o)` |
| 0x80156670 | func_80156670 | TraceAttackPoints | ComputeAttackPoints, then TraceAttackPath for each of the three points whose pad is 0, results in D_801151E0[i], the actor hit in D_801150E0[i] | M | e58E0; 1 call (AttackHitStep) |
| 0x801567BC | func_801567BC | TurnToAttackHit | for each point that hit an actor: model heading = func_8014C568(o, D_8011DAD8[i]) (doc1: the heading to a point) | M | e58E0; 1 call (AttackHitStep when record +0x10) |
| 0x80156848 | func_80156848 | SpawnAttackHitEffects | per point: an actor hit spawns the record's effect (+8, value +9) at the point; a wall / guarded hit (bits 6) plays PlayClankSeOnce and spawns sparks (kind 6), plus kind 0x53 on surface 0x24 | M | e58E0; 1 call (AttackHitStep) |
| 0x80156A14 | func_80156A14 | ResetClankSe | +0xDA = 0 | M | e58E0; 1 call (ResetAttackHit); also cleared by TryAirFusionSlash / TryAirLuminaSlash |
| 0x80156A1C | func_80156A1C | PlayClankSeOnce | once per swing (+0xDA): PlaySe(D_8018F7E0[material of point i]) | M | e58E0; 1 call (SpawnAttackHitEffects); the material comes from the wall polygon's pad >> 13 or func_8014C918 |
| 0x80156A88 | func_80156A88 | PlayAttackHitSe | record +0xC for each point that hit: 0x01000000 a plain PlaySe, 0x02000000 func_8014CA88 (the actor's sound), else func_8014CA14; 0x80000000 = none | M | e58E0; 1 call (AttackHitStep) |
| 0x80156B74 | func_80156B74 | ComputeAttackPoints | the attack segment for the record's point source: 0 = weapon A's two points (func_801484B0 / func_801484E8), 1 = weapon B's (func_80148534 / func_8014856C), 2 = a fixed point ahead turned by +0x24A, else a table of s8 triples indexed by the swing frame +0x1A9 (advanced unless flagged); then AttackPointsToWorld | M | e58E0; 1 call; doc2: UpdateSwordTrail takes the same weapon points (func_801484B0 / func_80148534) |
| 0x80156ECC | func_80156ECC | AttackPointsToWorld | SplitAttackSegment, then the origin D_801270A8 and each used point through ObjLocalToWorld | M | e58E0; 1 call |
| 0x80156FA8 | func_80156FA8 | SplitAttackSegment | from segment a-b makes three points a, a+d, b-d (d = (b-a)/3) when a is longer than 0x40; pad 1 marks an unused point | M | e58E0; 1 call |
| 0x80157158 | func_80157158 | TraceAttackPath | u16 wrapper of TraceAttackPathBody | M | e58E0; 2 calls: TraceAttackPoints, func_80163664 (a second user of the same test) |
| 0x801571C4 | func_801571C4 | TraceAttackPathBody | from origin to point: a map hit (RaycastMapTwoCells) gives 2 with the material; each live hittable actor (96 of D_801202A0, not kind 0xA, not the same damage type unless arg9 & 0x80) whose model the path crosses (PathHitsModelTwoCells): guarded (+0x5C & 0x4000 or +0xAE & mask) gives 4, else damage via func_8014C4AC (type, amount, the critical mark) and 1 | H | e58E0; 1 call |

#### Kind 6: the Lumina (triangle button) slash

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801574DC | func_801574DC | StartLuminaSlash | SetKindAndState(6), then LuminaSlashStart at once | M | e58E0; no C callers. Kind 6 needs Lumina: func_80149B54 (triangle 0x10 pressed and TestFlag80, the flag that also shows weapon part 24 in UpdateWeaponParts) leads to func_80149BAC |
| 0x80157510 | func_80157510 | EnterLuminaSlash | SetKindAndState(6), then its state handler | M | e58E0; 1 call: func_80149BAC (+0x1AA = 1 first) |
| 0x80157544 | func_80157544 | RunLuminaSlashState | kind 6's state handler, D_8018F7F0[+2] | M | e58E0 |
| 0x80157580 | func_80157580 | LuminaSlashEnter | state 0: fall and ground steps; no ground: StartPlayerFall; else LuminaSlashStart | M | e58E0 |
| 0x801575E4 | func_801575E4 | LuminaSlashStart | face 0x15, step 0xA / 0xB alternating on +0x1AB, motion D_800D4F14, PlaySe(0x455), ResetAttackHit, trail effect kind 5, func_8014B768(o, 0x333), voice 0x5F3, D_8011F730 \|= 4 | M | e58E0; 2 calls; effect 5 is doc2's TrailFx B (weapon points func_80148534) |
| 0x801576A8 | func_801576A8 | LuminaSlashStep | +0x44 \|= 2; RunAttackHit(+0x1AA) until the motion's end, then ResetPlayerKind | M | e58E0 |
| 0x8015771C | func_8015771C | EndLuminaSlashKind | kind 6's exit: +0x1AA = 0, EndLuminaSlash | M | e58E0 |
| 0x8015773C | func_8015773C | EndLuminaSlash | +0x44 &= ~2, face 0x11, UpdateFlag10Part21, ClearDisplayFlag20 | M | e58E0; 1 call |

#### Kind 7: the air slash (from the second jump, flag 0x89)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80157788 | func_80157788 | StartAirSlash | D_801ED510 = 300, SetKindAndState(7), AirSlashStart | M | e58E0; no C callers |
| 0x801577C8 | func_801577C8 | EnterAirSlash | D_801ED510 = 300, SetKindAndState(7), RunAirSlashState | M | e58E0; 2 calls: func_80149C94, PlayerAirborneStep (during the double-jump motion D_800D4BE0 when func_80149C08: flag 0x89, Lumina, triangle, no cooldown +0x223) |
| 0x80157808 | func_80157808 | RunAirSlashState | D_8018F818[+2], and a 300-frame safety: when D_801ED510 runs out, exit and ResetPlayerKind | M | e58E0; 1 call (EnterAirSlash) |
| 0x80157880 | func_80157880 | AirSlashEnter | state 0: func_8014ED28, func_8014D3E0, func_8014FA04 (the move steps), AirSlashStart | M | e58E0 |
| 0x801578C0 | func_801578C0 | AirSlashStart | ResetAttackHit, step 9, motion D_800D5128, face 0x15, PlaySe(0xC20), drive D_8018F7F8, both trails (kind 4 value 7, kind 5 value 9), func_801725A4 (+0x1F4 \|= 2) | M | e58E0; 2 calls |
| 0x8015795C | func_8015795C | AirSlashStep | forward drive, gravity 0x1A000; landing (func_80161450 & 5): SpawnLandingFx, timer 8, next; while airborne RunAttackHit and, after a hit (+0x1C0): face 0x17, motion D_800D5178, rebound drive D_8018F808 and SetFallSpeed(-0xC0000), state 4 | M | e58E0 |
| 0x80157A8C | func_80157A8C | SpawnLandingFx | func_80161D20(o, +0x16E) and SpawnEffect2(o, 1) (dust) | M | e58E0; 1 call; AirSlashRebound does the same inline on landing |
| 0x80157AC8 | func_80157AC8 | AirSlashSkidStep | after landing: decelerating drive (0x10000); once +0x2C turns positive: both trails freed (func_8016706C 4 / 5), motion D_800D51AC, next; else RunAttackHit | M | e58E0 |
| 0x80157B74 | func_80157B74 | AirSlashEndStep | at the motion's end exit and ResetPlayerKind | M | e58E0 |
| 0x80157BC8 | func_80157BC8 | AirSlashReboundStep | after the rebound: drive and gravity; landing: dust, trails freed, ResetPlayerKind; falling with nothing below: EnterPlayerFall | M | e58E0 |
| 0x80157CCC | func_80157CCC | EndAirSlash | kind 7's exit: +0x223 = 0x10 (the cooldown func_80149BEC counts down and func_80149C08 checks), +0x44 &= ~2, face 0x11, parts, ClearDisplayFlag20 | M | e58E0 |

#### Sword skills (kinds from D_8018F848: 0x24, 0x25 and a third)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80157D20 | func_80157D20 | StartSwordSkill | ResetAttackHit, SetKindAndState(o, D_8018F848[n]), RunSwordSkillState | M | e58E0; 1 call: func_80149CB4(o, n), called with 2 / 3 (CheckFusionSkillInput) and 5 (CheckSkillAFollowUp) |
| 0x80157D74 | func_80157D74 | RunSwordSkillState | kind 0x24: RunSkillAState, 0x25: RunSkillBState | M | e58E0; 1 call |
| 0x80157DC4 | func_80157DC4 | RunSkillAState | kind 0x24's state handler, D_8018F858[+2] | M | e58E0 |
| 0x80157E00 | func_80157E00 | SkillAWait | state 0: after the motion's end SkillAStart | M | e58E0 |
| 0x80157E38 | func_80157E38 | SkillAStart | step 0xD, motion D_800D4F14 (the Lumina slash's), face 0x15, trail kind 5, PlaySe(0x455), +0x244 = 0, next | M | e58E0; 2 calls |
| 0x80157EA4 | func_80157EA4 | SkillAStep | +0x44 \|= 2; at the motion's end ResetPlayerKind; else unless CheckSkillAFollowUp: RunAttackHit and on the first hit effect 0x54 at GetAttackHitPoint | M | e58E0 |
| 0x80157F64 | func_80157F64 | CheckSkillAFollowUp | flag 0x87 and square (0x80) pressed: StartSwordSkill(5), 1 | M | e58E0; 1 call |
| 0x80157FC4 | func_80157FC4 | RunSkillBState | kind 0x25's state handler, D_8018F860[+2] | M | e58E0 |
| 0x80158000 | func_80158000 | SkillBWait | state 0: after the motion's end SkillBStart | M | e58E0 |
| 0x80158038 | func_80158038 | SkillBStart | step 0xE, motion D_800D51E0, face 0x15, drive D_8018F82C, +0x234 = 0, trail kind 5 (value 0xC), PlaySe(0x455), next | M | e58E0; 2 calls |
| 0x801580B4 | func_801580B4 | SkillBLeapStep | motion flag 0x4000: SetFallSpeed(-0xC0000) (a hop); then gravity; at the motion's end step 0xF, motion D_800D524C, PlaySe(0x455), next; else RunAttackHit | M | e58E0 |
| 0x801581AC | func_801581AC | SkillBFinishStep | gravity and move; RunAttackHit until the motion's end, then ResetPlayerKind | M | e58E0 |
| 0x8015824C | func_8015824C | RunSkillCState | a third skill kind's state handler, D_8018F86C[+2] (its kind number is in data) | M | e58E0 |
| 0x80158288 | func_80158288 | SkillCWait | state 0: after the motion's end SkillCStart | M | e58E0 |
| 0x801582C0 | func_801582C0 | SkillCStart | step 0x10, +0x44 \|= 2, motion D_800D52A8, face 0x15, ClearSkillInput, Lumina trails freed (func_8016706C(5)), Fusion trail (kind 4 value 8), PlaySe(0x446), next | M | e58E0; 2 calls |
| 0x80158344 | func_80158344 | SkillCStep | RunAttackHit until the motion's end; triangle latched (LatchSkillInput): step 0x11, motion D_800D52E8, both trails, timer 300, next | M | e58E0 |
| 0x80158434 | func_80158434 | SkillCLeapStep | motion flag 0x4000: unlink (func_8014CBF8, func_801474EC), SetFallSpeed(-0x60000), drive D_8018F83C; gravity; landing or the timer: motion D_800D533C, next; else RunAttackHit | M | e58E0 |
| 0x80158548 | func_80158548 | SkillCEndStep | at the motion's end ResetPlayerKind, else func_80161208 | M | e58E0 |
| 0x801585A4 | func_801585A4 | ClearSkillInput | +0x244 = 0 | M | e58E0; 1 call (SkillCStart) |
| 0x801585AC | func_801585AC | LatchSkillInput | +0x244 \|= the pressed buttons; 1 when triangle (0x10) has been pressed | M | e58E0; 1 call (SkillCStep) |
| 0x801585EC | func_801585EC | EndSwordSkill | a skill kind's exit: +0x44 &= ~2, face 0x11, UpdateFlag10Part21, ClearDisplayFlag20 | M | e58E0; same body as EndLuminaSlash |

#### Death (kind 0x1A) and the continue / game-over choice

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80158638 | func_80158638 | CheckPlayerDeath | hp (0x80078EB4) at 0, outside kinds 0x1A / 0x1E and actions: with the revive item (func_800D0F8C(0xA)) and a map rule that allows it: use it (func_800D0F4C), FillHp, FillBp, ClearStatsWords, message D_80110EC0; else end the action and StartPlayerDeath | H | e58E0; 1 call (UpdatePlayerKind, every frame) |
| 0x80158794 | func_80158794 | DeathNop | empty | L | e58E0; sits between CheckPlayerDeath and the death starters (a table slot) |
| 0x8015879C | func_8015879C | StartPlayerDeathNoReset | as StartPlayerDeath but enters at state 1, skipping DeathResetStep | M | e58E0; no C callers |
| 0x80158814 | func_80158814 | StartPlayerDeath | game-over sequencer D_801ED518 = 0, D_801ED524 = 1, D_801ED528 = 0, +0xA8 = 0, ShowPlayerScene / Sys / Ability, SetKindAndState(0x1A), RunPlayerDeath | H | e58E0; 1 call (CheckPlayerDeath) |
| 0x80158880 | func_80158880 | RunPlayerDeath | ClearHitPending, then D_8018F8A8[+0x4F] (the word before RunDeathState's table) | M | e58E0; 2 calls (the starters) |
| 0x801588CC | func_801588CC | RunDeathState | D_8018F8AC[+2], then the sequencer D_801ED518: fade func_800D0CA0(2), waits (func_8001BD80, 0x46 frames), func_8001AAA0(0x83), opens the message gate D_801ED524 = 0, waits 0xD2 frames or a skip (D_801ED528), fade func_800D0CA0(1), done D_801ED520 = 1 | M | e58E0; no C callers (kind 0x1A's handler) |
| 0x80158AB4 | func_80158AB4 | DeathResetStep | state 0: ResetPlayerForDeath, next | M | e58E0 |
| 0x80158AE4 | func_80158AE4 | ResetPlayerForDeath | D_800AE6B0 = D_800AE6AC \| 0x1000000, ClearPlayerActionFlag01, ability parts and the held ability ended (func_80165840 / func_801658DC / func_80165A20 / func_80165A78), ClearVarCF, unlink, ClearHitPending, every scale word (+0x60..+0x74, +0xF6, +0x1B8, +0x1BA) = 0x1000, D_80078EC8 = 0, +0x1C8 = 0, next | M | e58E0; 1 call |
| 0x80158BB0 | func_80158BB0 | DeathStart | starts the sequencer (D_801ED518 = 1), PlaySe(0x456), motion D_800D58D8, face 0x16, spin speed +0x234 = 0xE30000, model +0x10 = 0, SetPlayerFlag7E2, next | M | e58E0 |
| 0x80158C40 | func_80158C40 | DeathSpinStep | SpinPlayerModel by 0x3C000 a frame (x4 with a face button held) until the spin speed is below 0: timer 4, next | M | e58E0 |
| 0x80158CD8 | func_80158CD8 | DeathPauseStep | the timer (x4 with a face button held); then PlaySe(0x453), tip speed +0x238 = 0x5B0000, next | M | e58E0 |
| 0x80158D60 | func_80158D60 | DeathToppleStep | TipPlayerModel by 0x4C000 until the model's x angle is below 0xC00: PlaySe(0x454), bounce +0x238 = -0x160000, next | M | e58E0 |
| 0x80158E24 | func_80158E24 | DeathFallStep | the same until it lands again: motion D_800D5904, face 0x20, func_8002D4C8 0x2A and 0x1C, next | M | e58E0 |
| 0x80158F00 | func_80158F00 | DeathQuoteStep | model heading += 0x16; once the gate D_801ED524 opens: one of 11 messages (D_8018F87C[rand() % 11]), next | M | e58E0 |
| 0x80158FA4 | func_80158FA4 | DeathQuoteWaitStep | turning; a face button sets the skip D_801ED528; after the answer: a map rule (GetGameOverRule) nonzero: ApplyGameOverRule and state 0xC; else the question D_80110C3C, next | M | e58E0 |
| 0x80159070 | func_80159070 | ContinueChoiceStep | turning; the answer kept in +0x244, the confirm message D_80110C94 (1) or D_80110CD4 (2), next | M | e58E0 |
| 0x80159120 | func_80159120 | ContinueConfirmStep | answer 1: choice 1 reloads the save when func_80029A94(1) (money 0x80078E8C halved), choice 2 func_80029A94(0) / func_8002992C(0) / func_80145A2C; then state 0xC; no save: message D_80110D0C and state 0xB; answer 2: back to the question (state 9) | M | e58E0 |
| 0x801592CC | func_801592CC | ContinueRetryStep | after the "no save" message: the question D_80110C3C again, state 9 | M | e58E0 |
| 0x8015934C | func_8015934C | DeathExitStep | lets the sequencer pass step 4; when it is done (D_801ED520): func_80145BF8, next, D_800AE6BD += 1 | M | e58E0 |
| 0x801593E4 | func_801593E4 | DeathIdleStep | model heading += 0x16 | M | e58E0 |
| 0x80159404 | func_80159404 | SpinPlayerModel | model heading += +0x236 (the speed's whole part); +0x234 -= step; the new speed | M | e58E0; 1 call (DeathSpinStep) |
| 0x80159434 | func_80159434 | TipPlayerModel | model x angle -= +0x23A; +0x238 += step; the new speed | M | e58E0; 2 calls (DeathToppleStep, DeathFallStep) |
| 0x80159464 | func_80159464 | GetGameOverRule | the rule listed for the current map (D_8018F8E4 pairs, map D_800B9A08); else -1 when func_80029A94(1) and (0) both fail, else 0 | M | e58E0; 3 calls (CheckPlayerDeath: revive only when <= 0 or >= 6; RunDeathState: wait length; DeathQuoteWaitStep) |
| 0x801594E8 | func_801594E8 | ApplyGameOverRule | -1: a fresh start keeping flags 0xB-0xD, 0x2C/0x2D and stats +4 (func_80029274 ...), SetFlag80, func_800D185C(D_800D3A44); 1: hp = bp = 150, money = D_80128150; 2-6: func_800D1F90, 5/6 also a jump (func_800D185C) and func_80029514(0x636) | M | e58E0; 1 call (DeathQuoteWaitStep) |

#### A scene task (+0x15 step list D_8018FAF8, five steps)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80159698 | func_80159698 | RunSceneTaskStep | D_8018FAF8[+0x15] | L | e58E0; no C callers; the step functions return 0 and advance +0x15 like the stage tasks (e.g. sc06_000 `D_sc06_000_8018C040[AF(o, u8, 0x15)]()`) |
| 0x801596D4 | func_801596D4 | SceneTaskStartTimer | +0x28 = 0x10, next step | L | e58E0 |
| 0x801596F0 | func_801596F0 | SceneTaskHideAll | after the timer: func_80174B6C, D_800B9AAC = D_800B9B00 = 0x7FFF, every sprite (0x38 records) and every model (0x84 records) but the one at 0x800AFAE8 hidden, D_801270C0 = 3, SetPropsActive(0), StartSeqPlayer, func_8013CB20, InitCameraShake, light colours (func_8002850C / func_80028620 from D_8018F918); +0x28 = 0xFF, next | L | e58E0 |
| 0x80159874 | func_80159874 | SceneTaskIdle | returns 0 (stays) | L | e58E0 |
| 0x8015987C | func_8015987C | SceneTaskStartFade | func_800167B8(4) (a fade towards 0), next step | L | e58E0 |
| 0x801598BC | func_801598BC | SceneTaskFadeStep | func_800167F0(4) != 0 (the fade still moving) | L | e58E0 |

#### The player's per-frame kind update

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801598E0 | func_801598E0 | UpdatePlayerNoVertical | drops up / down from the pad (digital: held and pressed &= 0xAFFF; analog: stick y centred), then RunPlayerUpdatePhase | M | e58E0; no C callers |
| 0x80159968 | func_80159968 | RunPlayerUpdatePhase | D_8018FB9C[+0x4D] (three entries) | M | e58E0; 1 call (UpdatePlayerNoVertical) |
| 0x801599E0 | func_801599E0 | PlayerUpdateFirstPhase | UpdatePlayerKind, then +0x4D += 1 | M | e58E0 |
| 0x80159A18 | func_80159A18 | PlayerUpdateNop | empty | L | e58E0; next to the phase functions (likely a D_8018FB9C slot) |
| 0x80159A20 | func_80159A20 | UpdatePlayerKind | func_80150B28, CheckPlayerDeath, func_8015126C (doc1: the attacker bookkeeping), +0x3C \|= 0x8000 (func_8014900C), the per-kind step D_8018FC4C[kind & 0x7FFF]; +0x44 \|= 0x08000000 except for kinds 2, 3, 11, 12 and kind 25 in some states | M | e58E0; 1 call (PlayerUpdateFirstPhase) |

#### Kind 0: standing

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80159B08 | func_80159B08 | StartPlayerStand | SetKindAndState(0), StandStart | M | e58E0; no C callers (ResetPlayerKind is the form that runs the state handler) |
| 0x80159BAC | func_80159BAC | StandWait | state 0: after the motion's end StandStart | M | e58E0 |
| 0x80159BE4 | func_80159BE4 | StandStart | drive D_8018FB0C, motion index 4 with face 0x11 (or 5 / face 0x1C when +0x44 & 0x200), idle counters +0x234 / +0x238 = 0, UpdateFlag10Part21, ClearDisplayFlag20, func_80172590 (doc2 SetPlayerEvent01), next | H | e58E0; 5 calls (StartPlayerStand, StandWait, func_8015C32C, func_8015E344, func_8015E698) |
| 0x80159C84 | func_80159C84 | PlayerStandStep | the standing state: action / skill / attack (square: func_80149AD4, triangle: func_80149BAC) / jump (EnterPlayerJump) / direction (EnterPlayerRunning) checks, each after the kind's exit; random idle faces; the idle motion cycle (indices 0-3, PlaySe(0x445), face 0x13 at the end); records the safe point (func_801483E8) | H | e58E0; kind 0's main state (D_8018FCF0) |
| 0x8015A1C8 | func_8015A1C8 | EndStandKind | kind 0's exit: UpdateFlag10Part21, face 0x11 | M | e58E0 |

#### Kind 1: running

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015A1FC | func_8015A1FC | StartPlayerRunning | SetKindAndState(1), RunningStart | M | e58E0; no C callers |
| 0x8015A230 | func_8015A230 | EnterPlayerRunning | SetKindAndState(1), RunPlayerRunningState | M | e58E0; 2 calls: FusionSwingStep, PlayerStandStep (`if (ObjDirHeld(o)) { exit; func_8015A230(o); }`) |
| 0x8015A264 | func_8015A264 | RunPlayerRunningState | kind 1's state handler, D_8018FCF8[+2] | M | e58E0; 2 calls (EnterPlayerRunning, PlayerLandStep) |
| 0x8015A2A0 | func_8015A2A0 | RunningWait | state 0: after the motion's end RunningStart | M | e58E0 |
| 0x8015A2D8 | func_8015A2D8 | RunningStart | drive D_8018FB1C; motion index 0xA / face 0x1C / speed -0x40000 when +0x44 & 0x200, else 7 (digital pad 0x41) or 6 (analog 0x53 / 0x73) with face 0x21; +0x23C = 0, dust, func_80172608 (doc2 SetPlayerEvent40), next | M | e58E0; 2 calls |
| 0x8015A3C8 | func_8015A3C8 | PlayerRunningStep | the running state: the same action checks as standing; stick released: stand (with StartSkidStop at full speed); speed +0x2C by pad type (digital accelerates by 0x1000, 0x4000 on map 0x302A; analog by stick tilt), capped -0xB0000 and lower when stats +0x26 / +0x2E are low; motions 6 / 7 / 8 by speed; wall: push motion 0x12 and face 0x17; func_8014D738: func_8015C6E0 | H | e58E0; kind 1's main state |
| 0x8015AB7C | func_8015AB7C | GetRunBlendFrames | the blend count for switching to motion 7: by the frame +0xDC of motion D_800D48DC (0x10 / 0x12 / 7 / 9), else the current index +0xBC | M | e58E0; 2 calls (PlayerRunningStep, both pad branches: `SetPlayerMotionIndexBlend(o, 7, func_8015AB7C(o))`) |
| 0x8015ABD4 | func_8015ABD4 | ShouldSkidStop | no action running and the saved speed at the limit, or on a slippery floor (D_8011F9C4) without flag 0x21 | M | e58E0; 1 call (PlayerRunningStep; PlayerLandStep inlines the same test) |
| 0x8015AC48 | func_8015AC48 | StartSkidStop | motion index 9, drive D_8018FB3C, func_80161CD0(o, +0x16E) | M | e58E0; 1 call |
| 0x8015AC90 | func_8015AC90 | EndRunningKind | kind 1's exit: UpdateFlag10Part21, face 0x11 | M | e58E0 |

#### Kind 2: jumping (and kind 3 falling, which shares the air steps)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015ACC4 | func_8015ACC4 | StartPlayerJump | SetKindAndState(2), func_8014ED28, func_8014FA04, JumpStart | M | e58E0; 1 call: func_80149724 |
| 0x8015AD08 | func_8015AD08 | EnterPlayerJump | SetKindAndState(2), RunPlayerJumpState | M | e58E0; 1 call: func_80149704, called after func_801496D4 (cross 0x40 pressed) from the stand / run / land / swing states |
| 0x8015AD3C | func_8015AD3C | RunPlayerJumpState | kind 2's state handler, D_8018FD00[+2] | M | e58E0 |
| 0x8015AD78 | func_8015AD78 | JumpWait | state 0: after the motion's end JumpStart | M | e58E0 |
| 0x8015ADB0 | func_8015ADB0 | JumpStart | +0xA8 capped at 0x18, func_80161124 (airborne set-up), SetFallSpeed(-0x120000), dust, D_8011F730 \|= 1, next | M | e58E0; 2 calls |
| 0x8015AE2C | func_8015AE2C | PlayerAirborneStep | the air state: glide while cross is held when func_80161A60 (+0x1C8 set and ability mode 0x80078EC0 & 0x7F == 6; momentum +0x50..+0x58, effects 0x3B / 0x3C), longer jump while cross is held rising, air attacks (TryAirFusionSlash / TryAirLuminaSlash), TryDoubleJump, EnterAirSlash from the double jump, vertical control by cross while +0x1C6 is set (speed limits 0x40000 / 0xC0000), steering, landing (func_80161488: motion 0xE / 0x10, next), two more exits (func_8014A674 + func_8014E434: func_8015CC40; func_8014A69C + func_8014E6A0: func_8015CF8C) | M | e58E0; 2 calls: func_8015BEC4 (kind 3) and the jump table; doc2's PlayerAirStep (0x80172414) is a smaller helper, hence the different name |
| 0x8015B6F4 | func_8015B6F4 | TryAirFusionSlash | square pressed (func_80149AA8): ResetAttackHit, step 6, swing flag, saves the motion at +0x23C / +0x244, motion index 0xB or 0xC, face 0x22, trail kind 4 (value 5), PlaySe(0x400), voice 0x5F3; 1 | M | e58E0; 1 call (PlayerAirborneStep) |
| 0x8015B7B4 | func_8015B7B4 | TryAirLuminaSlash | triangle with Lumina (func_80149B54): step 0xC, motion D_800D4F8C, trail kind 5, PlaySe(0x455); 1 | M | e58E0; 1 call |
| 0x8015B858 | func_8015B858 | TryDoubleJump | once per jump (+0x240), not when +0x1C6: with flag 0x1E and cross pressed (func_8014A51C): saves the motion, SetFallSpeed(-0xE0000), motion D_800D4BE0, D_8011F730 \|= 2; 1 | M | e58E0; 1 call (PlayerAirborneStep increments +0x240 on success; func_80161124 clears it) |
| 0x8015B8F8 | func_8015B8F8 | RestoreAirMotion | after an air attack: back to the saved jump motion (D_800D4A9C / D_800D4B48 with the saved index as blend), else motion index 0xF (falling) | M | e58E0; 2 calls (PlayerAirborneStep) |
| 0x8015B950 | func_8015B950 | PlayerLandStep | the landed state: action / attack / charge (func_80149744) / jump / direction (to kind 1 keeping speed) checks; at the motion's end stand; at full speed or on a slippery floor stand with the skid motion 9 | M | e58E0; 2 calls: func_8015BEE4 (kind 3) and the jump table |
| 0x8015BD8C | func_8015BD8C | EndJumpKind | kind 2's exit: ClearDisplayFlag20, face 0x11, +0x44 &= ~2 | M | e58E0 |
| 0x8015BDD0 | func_8015BDD0 | StartPlayerFall | SetKindAndState(3), FallStart | M | e58E0; 5 calls (func_80151AE4, FusionFinisherLand, LuminaSlashEnter, func_8016130C, func_80161374): every "no ground below" exit |
| 0x8015BE04 | func_8015BE04 | EnterPlayerFall | SetKindAndState(3), RunPlayerFallState | M | e58E0; 1 call (AirSlashReboundStep) |
| 0x8015BE38 | func_8015BE38 | RunPlayerFallState | kind 3's state handler, D_8018FD1C[+2] | M | e58E0 |
| 0x8015BE74 | func_8015BE74 | FallEnter | state 0: FallStart | M | e58E0 |
| 0x8015BE94 | func_8015BE94 | FallStart | func_80161124 (airborne set-up), next | M | e58E0; 5 calls (StartPlayerFall, FallEnter, func_8015C128, func_8015C32C, func_8015FAE8) |
| 0x8015BEC4 | func_8015BEC4 | FallAirStep | PlayerAirborneStep for kind 3 | M | e58E0 |
| 0x8015BEE4 | func_8015BEE4 | FallLandStep | PlayerLandStep for kind 3 | M | e58E0 |
| 0x8015BF04 | func_8015BF04 | EndFallKind | kind 3's exit: ClearDisplayFlag20, face 0x11, +0x44 &= ~2 | M | e58E0 |

#### Kind 4: sliding down a steep slope

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015BF7C | func_8015BF7C | EnterPlayerSlide | SetKindAndState(4), RunPlayerSlideState | M | e58E0; no C callers; SetPlayerKind4 (doc1) is the form used after a 0x4000 slope result (FusionFinisherFall) |
| 0x8015BFB0 | func_8015BFB0 | StartPlayerSlideDir | SetKindAndState(4), then func_8015C030(o, v): slide speed from the vector's x / z (<< 7), motion index 0x11 | M | e58E0; no C callers |
| 0x8015BFF4 | func_8015BFF4 | RunPlayerSlideState | kind 4's state handler, D_8018FD28[+2] | M | e58E0; 1 call (EnterPlayerSlide) |

Rows: 193 (H 17, M 164, L 12); skipped (already known): 34 (19 doc1 names still func_ in symbol_addrs_engine.txt, 15 existing symbols)

### 0x8015C000-0x80166000: the kinds (slide, push, pole, bar, carry, guard, climb, assimilate, abilities), ground checks, Obj68 handlers

The slice is mostly Musashi's kind ("mode") state machine: each player kind K has the same set of
functions - EnterX (SetKindAndState(p, K) + StartX), SwitchToX (SetKindAndState + RunXState), RunXState
(D_8018Fxxx[p->sub]), TryStartX (state 0: StartX unless the ground check changed the kind), StartX, the step
handlers, and ExitX (its entry in the exit table D_8018FBA8 that RunPlayerKindHandler calls before every switch).
Kinds found: 4 slope slide, 9 push block (+0x170), 0xB pole (+0x17C), 0xC bar swing (+0x180), 0xD carry / 0xE, 0xF
throw (+0x178), 0x10 grab (+0x18C), 0x11 guard + charge (R1, gauge D_80078EBF), 0x12 guard hop, 0x13 counter burst,
0x14 wall climb (surface 0x15, flag 0x1F), 0x15 charged attack, 0x16 assimilate (ability from +0x184), 0x17 use ability,
0x18, 0x1B guard recoil, 0x1C, 0x1D lie down, 0x1E recover. Then the ground / landing checks, footstep sounds, the two
clock deadlines (game vars 8 and 0x12), a shadow decal object, Obj68 helpers (matrix orders, accel, sweep hit tests,
map traces), the Fusion-throw (assimilate) Obj68 and two effect Obj68s, and the ability bookkeeping (cost table,
timers, status save / restore, clone counters).

Conventions used in the evidence: +0xB8 = motion event bits (0x8000 motion ended, 0x4000 / 0x2000 / 0x1000 markers),
+0x3C bit 0x4000 = guarding (func_80149034 sets, func_80149048 clears, func_8014A454 tests it against the hit facing),
+0x44 bit 0 = guard/charge held, bit 2 = sword thrown, bit 0x10 = assimilate pending.

#### Ground checks and landing

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80161104 | func_80161104 | StayedGrounded | 1 when CheckPlayerGround did not switch the kind (so a state may start) | M | e58E0: `return func_80161208(a) == 0`; 38 calls, every TryStartX (`if (func_80161104(p)) StartX(p)`) |
| 0x80161124 | func_80161124 | StartFall | kind 3 start: fall speed capped at -0xBA000, motion 0xF (moving) or 0xD, face 0x22, timer 4, guard heading saved (D_801152A0), SE 0x8E1 in EC0 mode 6 | M | e58E0; called by func_8015BE94 (kind 3 start, then NextEffectState) and func_8015ADB0 |
| 0x80161208 | func_80161208 | CheckPlayerGround | collide, fall and ground steps; on no floor / wall start falling (kind 3), on a steep slope slide (kind 4); 1 when it switched | M | e58E0: FallOrSlideOnResult(p, RunPlayerGroundSteps(p, 0)); 55 calls, the last line of most state steps |
| 0x80161240 | func_80161240 | CheckPlayerGroundNoCollide | the same without CollidePlayerMove | M | e58E0: RunPlayerGroundSteps(p, 1); push-block steps func_8015C7E4 / C944 / CA28 |
| 0x80161278 | func_80161278 | CheckPlayerGroundUphill | the same, but a steep hit only slides when D_801152BC is set or he is not below +0x8A; else the position goes back to +0x88 | M | e58E0: D_801152BC = 0 then func_80161374; 1 call (func_8015A3C8) |
| 0x801612B8 | func_801612B8 | RunPlayerGroundSteps | (arg1 bit 0 clear: CollidePlayerMove) then PlayerObjFallStep \| PlayerObjGroundStep; returns the TraceMap bits | M | e58E0; also 2 ovl34 calls |
| 0x8016130C | func_8016130C | FallOrSlideOnResult | result 0 / 0x8000: exit kind, fall (func_8015BDD0); 0x4000: exit kind, SetPlayerKind4; returns 1 when switched | M | e58E0; called by CheckPlayerGround(NoCollide) |
| 0x80161374 | func_80161374 | FallOrSlideBlockUphill | as FallOrSlideOnResult, but a steep hit while climbing restores the position from +0x88 instead | M | e58E0; called by func_80161278 |
| 0x80161418 | func_80161418 | CheckLanding | air steps, then HandleLandingToNormal | M | e58E0; 4 calls (func_801580B4, func_801581AC, GuardHopStep, ovl26) |
| 0x80161450 | func_80161450 | CheckLandingKeepKind | air steps, then HandleLandingKeepKind | M | e58E0; 4 stage calls (sc03_003, sc03_126, sc04_021, sc05_019), ovl31, func_8015795C |
| 0x80161488 | func_80161488 | CheckLandingBy1C6 | air steps; +0x1C6 == 0: HandleLandingKeepKind, else only the bits (& ~7) | M | e58E0; 1 call (func_8015AE2C, `if (r & 5)`) |
| 0x801614E4 | func_801614E4 | CheckLandingFx | air steps, then HandleLandingFx (dust and landing SE only) | M | e58E0; no caller found |
| 0x8016151C | func_8016151C | CheckLandingDust | air steps, then HandleLandingDust | M | e58E0; 5 ability calls (ovl1a Hop, ovl31, ovl34) |
| 0x80161554 | func_80161554 | CheckLandingNoBump | as CheckLanding with RunPlayerAirSteps(p, 1) (no accel clear on a bump) | M | e58E0; no caller found |
| 0x8016158C | func_8016158C | CheckLandingKeepKindNoBump | as CheckLandingKeepKind with RunPlayerAirSteps(p, 1) | M | e58E0; 1 call (func_80157BC8) |
| 0x801615C4 | func_801615C4 | RunPlayerAirSteps | (bit 0 clear and func_8014ED28: ClearEffectAccel), fall step while +0x34 > 0, \| func_8014FA04; returns the bits | M | e58E0; 9 callers, all landing checks plus func_80158434 |
| 0x8016163C | func_8016163C | HandleLandingToNormal | bit 0 / 0x2000: ResetPlayerKind + SpawnEffect2(p, 1) + PlayLandSe, returns 1 / 4; 0x4000: slope slide (2); 0x8000 on surface 0x15 with func_8014A6C4: wall climb facing g_WallNormal (8) | M | e58E0; calls func_8015F2F0 (kind 0x14) |
| 0x80161774 | func_80161774 | HandleLandingKeepKind | as HandleLandingToNormal but the kind is kept on a floor (only dust and SE) | M | e58E0; 3 callers |
| 0x80161888 | func_80161888 | HandleLandingFx | bits 1 / 0x4000 / 0x2000: SpawnEffect2(p, 1) + PlayLandSe, returns 1 / 2 / 4 | M | e58E0; called by func_801614E4 |
| 0x8016191C | func_8016191C | HandleLandingDust | the same with the dust only | M | e58E0; called by func_8016151C |
| 0x8016197C | func_8016197C | LandingResultCode | bits 1 / 0x4000 / 0x2000 to 1 / 2 / 4 | M | e58E0; called by func_80161488 |

#### Kind 4: slope slide

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015C030 | func_8015C030 | StartSlopeSlideVec | kind 4 start with a given vector: +0x234/+0x23C = v.x / v.z << 7, +0x238 = 0x80000, motion 0x11 | M | e58E0; called by func_8015BFB0 (SetKindAndState(p, 4) + this, a vector argument) |
| 0x8015C08C | func_8015C08C | TryStartSlopeSlide | state 0: StartSlopeSlide when StayedGrounded | M | e58E0; table entry (no direct caller) |
| 0x8015C0C4 | func_8015C0C4 | StartSlopeSlide | +0x234/+0x23C = g_WallNormal x / z << 6 (down the steep plane), +0x238 = 0x80000, motion 0x11, display flag 20 off | H | e58E0; SetPlayerKind4 (doc1) calls it; FallOrSlideOnResult uses it on a 0x4000 (steep) result |
| 0x8015C128 | func_8015C128 | SlopeSlideStep | slide by +0x234 (stick adds forward), dust + SE 0x65F every 4 frames; push -> kind 9; non-steep ground: timer 6, next; steep: restart; airborne: fall | M | e58E0; table entry; PlayerObjGroundStep result 0x4000 |
| 0x8015C32C | func_8015C32C | SlopeSlideEndStep | the same with input allowed (jump, attacks, EC0 modes); timer out on flat ground -> kind 0 (func_80159BE4) | M | e58E0; table entry (state after SlopeSlideStep's NextEffectState) |
| 0x8015C6A4 | func_8015C6A4 | NopC6A4 | empty (a handler-table entry, likely kind 4's exit) | L | e58E0 |

#### Kind 9: push block (+0x170 the pushed actor)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015C6AC | func_8015C6AC | EnterPushBlock | SetKindAndState(p, 9) + StartPushBlock | M | e58E0; table entry |
| 0x8015C6E0 | func_8015C6E0 | SwitchToPushBlock | SetKindAndState(p, 9) + RunPushBlockState | M | e58E0; 3 calls, each after func_8014D738 (the push test that sets +0x170 to an actor with flags5C 0x1000) |
| 0x8015C714 | func_8015C714 | RunPushBlockState | D_8018FD34[p->sub] | H | e58E0; also called after SetKindAndState(p, 9) in func_8015D738 / EA3C / 60534 |
| 0x8015C750 | func_8015C750 | TryStartPushBlock | state 0: StartPushBlock when StayedGrounded | M | e58E0; table entry |
| 0x8015C788 | func_8015C788 | StartPushBlock | motion 0x12, face 0x17, display flags 20 / 10 off, timer 0xA | M | e58E0 |
| 0x8015C7E4 | func_8015C7E4 | PushBlockReadyStep | jump / no input -> kind 0; timer out: turn to stick, push accel D_8018FB4C, timer 0x14, next; footstep + dust on marker 0x2000 | M | e58E0; table entry |
| 0x8015C944 | func_8015C944 | PushBlockShoveStep | moves with the block (func_8014D738); +0x170 lost -> kind 0; timer out -> next | M | e58E0; table entry |
| 0x8015CA28 | func_8015CA28 | PushBlockHoldStep | stick held: turn and push again (accel, timer 0x14, SetEffectState(2)); +0x170 lost -> kind 0 | M | e58E0; table entry |
| 0x8015CB94 | func_8015CB94 | ExitPushBlock | +0x170 = 0, UpdateFlag10Part21, face 0x11 | M | e58E0; exit-table entry (same shape as the other ExitX) |
| 0x8015CBCC | func_8015CBCC | NopCBCC | empty table entry | L | e58E0 |
| 0x8015CBD4 | func_8015CBD4 | NopCBD4 | empty table entry | L | e58E0 |
| 0x8015CBDC | func_8015CBDC | NopCBDC | empty table entry | L | e58E0 |
| 0x8015CBE4 | func_8015CBE4 | NopCBE4 | empty table entry | L | e58E0 |
| 0x8015CBEC | func_8015CBEC | NopCBEC | empty table entry | L | e58E0 |
| 0x8015CBF4 | func_8015CBF4 | NopCBF4 | empty table entry | L | e58E0 |
| 0x8015CBFC | func_8015CBFC | NopCBFC | empty table entry | L | e58E0 |
| 0x8015CC04 | func_8015CC04 | NopCC04 | empty table entry | L | e58E0 |

#### Kind 0xB: pole (+0x17C the pole actor, flags5C 0x40)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015CC0C | func_8015CC0C | EnterPole | SetKindAndState(p, 0xB) + StartPole | M | e58E0; table entry |
| 0x8015CC40 | func_8015CC40 | SwitchToPole | SetKindAndState(p, 0xB) + RunPoleState | M | e58E0; func_8015AE2C when +0x1BC == 0 and func_8014E434 (actor with flags5C 0x40 hit, x / z snapped to it, +0x17C set) |
| 0x8015CC74 | func_8015CC74 | RunPoleState | D_8018FD44[p->sub] | H | e58E0 |
| 0x8015CCB0 | func_8015CCB0 | PoleState0 | StartPole (no ground check) | M | e58E0; table entry |
| 0x8015CCD0 | func_8015CCD0 | StartPole | motion 0x14, +0xB8 = 0, state bit 0x10, +0x234 = 0xF frames delay, SE 0x6A7 | M | e58E0 |
| 0x8015CD20 | func_8015CD20 | PoleStep | jump off (+0x1BC = 10, func_80149724); after the delay: down = motion 0x15 spinning, up = climb accel D_8018FD5C, left / right turn by 0x71; off the pole -> kind 0 | M | e58E0; table entry |
| 0x8015CF24 | func_8015CF24 | ExitPole | UpdateFlag10Part21, face 0x11 | M | e58E0; exit-table entry |

#### Kind 0xC: bar swing (+0x180 the bar actor, flags5C 0x20)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015CF58 | func_8015CF58 | EnterBarSwing | SetKindAndState(p, 0xC) + StartBarSwing | M | e58E0; table entry |
| 0x8015CF8C | func_8015CF8C | SwitchToBarSwing | SetKindAndState(p, 0xC) + RunBarSwingState | M | e58E0; func_8015AE2C when +0x1BD == 0 and func_8014E6A0 (a bar 0x54 above him, +0x180 set) |
| 0x8015CFC0 | func_8015CFC0 | RunBarSwingState | D_8018FD7C[p->sub] | H | e58E0 |
| 0x8015CFFC | func_8015CFFC | BarSwingState0 | StartBarSwing | M | e58E0; table entry |
| 0x8015D01C | func_8015D01C | StartBarSwing | motion D_800D550C, pitch 0, facing = the bar's facing or its opposite (the nearer), hitData = D_8018FD6C \| 0x40000000, state bit 0x20 | M | e58E0 |
| 0x8015D104 | func_8015D104 | BarSwingWindupStep | still on the bar: spin speed (+0x236) = -0xE3, pitch 0x600 (kept at +0x244), next; off -> kind 0 | M | e58E0; table entry |
| 0x8015D1B8 | func_8015D1B8 | BarSwingStep | pitch += speed, SE 0x5E9 each turn; jump (pad 0x40): launch by the pitch sector (D_8018FD88 / D_8018FD8C), SE 0x5EA; off -> kind 0 | M | e58E0; table entry |
| 0x8015D380 | func_8015D380 | UpdateBarSwingPoint | +0x138 = D_8018FDD8 turned by his facing and pitch | M | e58E0; called by BarSwingStep; ExitBarSwing zeroes +0x138..+0x13E |
| 0x8015D414 | func_8015D414 | ExitBarSwing | +0x1BD = 8 (regrab delay), hitData = D_8018EEBC, +0x138 zeroed, y += 0x48, pitch 0, face 0x11 | M | e58E0; exit-table entry |

#### Kinds 0xD-0xF: carry and throw (+0x178 the carried actor)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015D480 | func_8015D480 | EnterCarry | SetKindAndState(p, 0xD) + StartCarry | M | e58E0; table entry |
| 0x8015D4B4 | func_8015D4B4 | SwitchToCarry | SetKindAndState(p, 0xD) + RunCarryState | M | e58E0; func_8014A218 (after func_8014A048 picked an actor into +0x178); func_801723C4 does the same by hand |
| 0x8015D4E8 | func_8015D4E8 | RunCarryState | D_8018FDE0[p->sub] | H | e58E0 |
| 0x8015D524 | func_8015D524 | ExitCarry | face 0x11 | M | e58E0; exit-table entry |
| 0x8015D544 | func_8015D544 | TryStartCarry | state 0: StartCarry when StayedGrounded | M | e58E0; table entry |
| 0x8015D57C | func_8015D57C | StartCarry | motion 0x19 (lift), display flags off, +0x234 = 0; a carried kind-0x1F8 actor gets +0xFC = 1 and TakePlayerControlNoStop | M | e58E0 |
| 0x8015D5E8 | func_8015D5E8 | CarryLiftStep | while lifting, the carried actor follows the D_8018FDEC offsets (3 per frame); motion end: motion 0x1A, +0x234 -= 3, next | M | e58E0; table entry |
| 0x8015D738 | func_8015D738 | CarryStep | carrying: square -> throw (kind 0xE), triangle with TestFlag80 -> kind 0xF, circle with ability 10 (Hurl): func_800CAF14, or drop and the no-bp motion when LacksAbilityBp; walk (motion 0x1B) / stand (0x1A) with the actor held | M | e58E0; table entry; carried actor gone -> kind 0 |
| 0x8015DA5C | func_8015DA5C | DropCarried | face 0x11, ReleaseCarriedAlt | M | e58E0; called by CarryStep when Hurl lacks bp |
| 0x8015DA90 | func_8015DA90 | EnterThrowCarried | SetKindAndState(p, 0xE) + StartThrowCarried | M | e58E0; table entry |
| 0x8015DAC4 | func_8015DAC4 | SwitchToThrowCarried | SetKindAndState(p, 0xE) + RunThrowCarriedState | M | e58E0; 3 calls: func_80149AD4 / func_80149B14 (square when +0x178 set), CarryStep |
| 0x8015DAF8 | func_8015DAF8 | RunThrowCarriedState | D_8018FE20[p->sub] | H | e58E0 |
| 0x8015DB34 | func_8015DB34 | TryStartThrowCarried | state 0: StartThrowCarried when StayedGrounded | M | e58E0; table entry |
| 0x8015DB6C | func_8015DB6C | StartThrowCarried | motion 0x1C, face 0x19, +0x234 = 0, first throw offset, PlaySeNow(0x5F5), SpendBp(p, 4) | M | e58E0 |
| 0x8015DBD4 | func_8015DBD4 | ThrowCarriedStep | marker 0x4000: ReleaseCarried; motion end -> kind 0; else the actor follows the throw offsets | M | e58E0; table entry |
| 0x8015DC84 | func_8015DC84 | ExitThrowCarried | face 0x11, ReleaseCarried (if still held) | M | e58E0; exit-table entry |
| 0x8015DCB8 | func_8015DCB8 | MoveCarriedAlongThrow | carried actor = its origin offset + D_8018FE28[+0x234..] (3 per frame), into his frame | M | e58E0; called by StartThrowCarried / ThrowCarriedStep |
| 0x8015DD74 | func_8015DD74 | ReleaseCarried | hit the carried actor with kind 9 (thrown) at its position, his facing; +0x178 = 0 | M | e58E0: `func_8014C4AC(o, 9, func_80029AAC(), &v, facing)` |
| 0x8015DDF0 | func_8015DDF0 | EnterThrowCarriedAlt | SetKindAndState(p, 0xF) + StartThrowCarriedAlt | M | e58E0; table entry |
| 0x8015DE24 | func_8015DE24 | SwitchToThrowCarriedAlt | SetKindAndState(p, 0xF) + RunThrowCarriedAltState | M | e58E0; func_80149BAC (triangle when +0x178 set), CarryStep |
| 0x8015DE58 | func_8015DE58 | RunThrowCarriedAltState | D_8018FE40[p->sub] | H | e58E0 |
| 0x8015DE94 | func_8015DE94 | TryStartThrowCarriedAlt | state 0: StartThrowCarriedAlt when StayedGrounded | M | e58E0; table entry |
| 0x8015DECC | func_8015DECC | StartThrowCarriedAlt | as StartThrowCarried (motion 0x1C, face 0x19, SE 0x5F5, SpendBp 4) | M | e58E0 |
| 0x8015DF34 | func_8015DF34 | ThrowCarriedAltStep | as ThrowCarriedStep with ReleaseCarriedAlt | M | e58E0; table entry |
| 0x8015DFE4 | func_8015DFE4 | ExitThrowCarriedAlt | face 0x11, ReleaseCarriedAlt | M | e58E0; exit-table entry |
| 0x8015E018 | func_8015E018 | MoveCarriedAlongThrowAlt | the same offsets walk as MoveCarriedAlongThrow (a second copy) | M | e58E0; byte-for-byte the same body |
| 0x8015E0D4 | func_8015E0D4 | ReleaseCarriedAlt | hit the carried actor with kind 0x11; +0x178 = 0 | M | e58E0: `func_8014C4AC(o, 0x11, ...)` |

#### Kind 0x10: grab (+0x18C the grabbed actor)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015E150 | func_8015E150 | EnterGrab | SetKindAndState(p, 0x10) + StartGrab | M | e58E0; table entry |
| 0x8015E184 | func_8015E184 | SwitchToGrab | SetKindAndState(p, 0x10) + RunGrabState | M | e58E0; func_8014A830, chosen on triangle when func_8014A738 (flag 0x83 and an actor in reaction 7 within 0x40) |
| 0x8015E1B8 | func_8015E1B8 | RunGrabState | D_8018FE60[p->sub] | H | e58E0 |
| 0x8015E1F4 | func_8015E1F4 | TryStartGrab | state 0: StartGrab when StayedGrounded | M | e58E0; table entry |
| 0x8015E22C | func_8015E22C | StartGrab | motion D_800D4FF4, effect 5 (value 0xA), +0x44 \|= 2 | M | e58E0 |
| 0x8015E288 | func_8015E288 | GrabReachStep | func_8014A850 caught one (+0x18C, hit 0x1B): motion D_800D5098, hold it, camera shake, effects 0x1F and 0xB, next; motion end: miss motion D_800D5060, state 3 | M | e58E0; table entry |
| 0x8015E344 | func_8015E344 | GrabHoldStep | hold it at his hands; marker 0x4000: ReleaseGrabbed (+0x234 = 1); motion end -> kind 0 | M | e58E0; table entry |
| 0x8015E40C | func_8015E40C | HoldGrabbedAtHands | +0x18C actor = its origin offset + the hand point (func_80148534), into his frame | M | e58E0 |
| 0x8015E4B0 | func_8015E4B0 | SpawnGrabEffect | effect 0x1F at the grabbed actor (D_8018FE70 + its origin offset, y doubled) | M | e58E0; called by GrabReachStep |
| 0x8015E588 | func_8015E588 | ShakeCameraForGrab | StartCameraShake(D_8018FE80) | H | e58E0 |
| 0x8015E5B0 | func_8015E5B0 | ReleaseGrabbed | trace from his chest to the actor (TraceMap, moved back on a hit), hit it with kind 0x1C, +0x18C = 0 | M | e58E0 |
| 0x8015E698 | func_8015E698 | GrabMissStep | motion end -> kind 0 | M | e58E0; state 3 (SetEffectState(p, 3) in GrabReachStep) |
| 0x8015E714 | func_8015E714 | ExitGrab | release the actor if not yet (+0x234 == 0), parts back, +0x44 &= ~2, face 0x11 | M | e58E0; exit-table entry |

#### Guard and charge (R1): kinds 0x11, 0x12, 0x13, 0x15, 0x1B

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015E84C | func_8015E84C | EnterGuard | SetKindAndState(p, 0x11) + StartGuardWithFx | M | e58E0; table entry |
| 0x8015E880 | func_8015E880 | SwitchToGuard | SetKindAndState(p, 0x11) + RunGuardState | M | e58E0; 4 calls, after func_80149CD4 (R1 (+0xAA & 8) held, no +0x1C8) in func_80159C84 / A3C8 / B950, and func_80155D70 |
| 0x8015E8B4 | func_8015E8B4 | EnterGuardNoFx | SetKindAndState(p, 0x11) + StartGuard (no aura effect) | M | e58E0; table entry |
| 0x8015E8E8 | func_8015E8E8 | RunGuardState | D_8018FE94[p->sub] | H | e58E0 |
| 0x8015E924 | func_8015E924 | TryStartGuard | state 0: StartGuardWithFx when StayedGrounded | M | e58E0; table entry |
| 0x8015E95C | func_8015E95C | StartGuardWithFx | effect 0x14 on him (unless D_80078EC0 bit 0x80), then StartGuard | M | e58E0 |
| 0x8015E9B8 | func_8015E9B8 | StartGuard | D_80078EC0 bit 0x80: kind 0x1C instead; else motion 0x1D, +0x44 \|= 1 (the gauge D_80078EBF fills while R1 is held, func_8014A59C), hitFlags \|= 0x4000 (blocks frontal hits, func_8014A454), heading saved | M | e58E0; also called from GuardRecoilStep with R1 still held |
| 0x8015EA3C | func_8015EA3C | GuardStep | R1 released -> kind 0; full gauge + square -> charged attack; guard hop, attacks, lock-on turn; strafe in stick direction (motion 0x1E) else stand (0x1D); push -> kind 9 | M | e58E0; table entry |
| 0x8015ED6C | func_8015ED6C | ExitGuard | gauge D_80078EBF = 0, +0x44 &= ~1, guard bit cleared (func_80149048) | M | e58E0; exit-table entry |
| 0x8015EDA0 | func_8015EDA0 | EnterGuardHop | SetKindAndState(p, 0x12) + StartGuardHop | M | e58E0; table entry |
| 0x8015EDD4 | func_8015EDD4 | SwitchToGuardHop | SetKindAndState(p, 0x12) + RunGuardHopState | M | e58E0; func_8014A4FC, taken in GuardStep when func_8014A4B4 (flag 0x1E and pad 0x40 pressed) |
| 0x8015EE08 | func_8015EE08 | RunGuardHopState | D_8018FE9C[p->sub] | H | e58E0 |
| 0x8015EE44 | func_8015EE44 | TryStartGuardHop | state 0: StartGuardHop when StayedGrounded | M | e58E0; table entry |
| 0x8015EE7C | func_8015EE7C | StartGuardHop | motion D_800D4C48, accel D_8018FB8C, SetFallSpeed(-0xC0000) (upward) | M | e58E0 |
| 0x8015EEE0 | func_8015EEE0 | GuardHopStep | gravity 0x10000, move; motion end -> kind 0; CheckLanding | M | e58E0; table entry |
| 0x8015EF9C | func_8015EF9C | NopEF9C | empty table entry (kind 0x12 exit) | L | e58E0 |
| 0x8015EFA4 | func_8015EFA4 | EnterCounterBurst | SetKindAndState(p, 0x13) + StartCounterBurst | M | e58E0; table entry |
| 0x8015EFD8 | func_8015EFD8 | SwitchToCounterBurst | SetKindAndState(p, 0x13) + RunCounterBurstState | M | e58E0; table entry |
| 0x8015F00C | func_8015F00C | RunCounterBurstState | D_8018FEA4[p->sub] | H | e58E0; GuardRecoilStep calls it after SetKindAndState(p, 0x13) at full gauge with square / triangle |
| 0x8015F048 | func_8015F048 | TryStartCounterBurst | state 0: StartCounterBurst when StayedGrounded | M | e58E0; table entry |
| 0x8015F080 | func_8015F080 | StartCounterBurst | motion 0x17, face 0x15, effect 5 (value 7), guard off, func_80156648, +0x1AA = 8, ClearHitPending, +0xF6 = 0x19EB | M | e58E0 |
| 0x8015F118 | func_8015F118 | CounterBurstStep | marker 0x4000: two Obj68 0x19 rings and an Obj68 0x1D, rumble D_80062BE8, SE 0x9DA; motion end -> kind 0 | M | e58E0; table entry |
| 0x8015F260 | func_8015F260 | ExitCounterBurst | flags 1 / 2 off, guard bit off, +0xF6 = 0x1000, face 0x11 | M | e58E0; exit-table entry |
| 0x8015F76C | func_8015F76C | EnterChargedAttack | SetKindAndState(p, 0x15) + StartChargedAttack | M | e58E0; table entry |
| 0x8015F7A0 | func_8015F7A0 | SwitchToChargedAttack | SetKindAndState(p, 0x15) + RunChargedAttackState | M | e58E0; func_80149788, when func_80149744 (gauge D_80078EBF >= 0x80 and square pressed) |
| 0x8015F7D4 | func_8015F7D4 | RunChargedAttackState | D_8018FEE4[p->sub] | H | e58E0 |
| 0x8015F810 | func_8015F810 | TryStartChargedAttack | state 0: StartChargedAttack when StayedGrounded | M | e58E0; table entry |
| 0x8015F848 | func_8015F848 | StartChargedAttack | motion 0x1F, D_8011F730 \|= 5 | M | e58E0 |
| 0x8015F89C | func_8015F89C | ChargedAttackStep | marker 0x4000: Obj68 kind 1 at (0, -0x1E); motion end -> kind 0 | M | e58E0; table entry |
| 0x8015F948 | func_8015F948 | StartNoBpMotion | SetKindAndState(p, 0x15), then (StayedGrounded) motion 0x22, face 0x1A, state 2 | M | e58E0; CarryStep when Hurl lacks bp; motion 0x22 / face 0x1A is also the ability-fail motion (func_80165BB4) |
| 0x8015F9A4 | func_8015F9A4 | NoBpMotionStep | motion end -> kind 0, else CheckPlayerGround | M | e58E0; kind 0x15 state 2 |
| 0x8015FA24 | func_8015FA24 | ExitChargedAttack | face 0x11 | M | e58E0; exit-table entry |
| 0x80160334 | func_80160334 | EnterGuardRecoil | SetKindAndState(p, 0x1B) + StartGuardRecoil | M | e58E0; table entry |
| 0x80160368 | func_80160368 | SwitchToGuardRecoil | SetKindAndState(p, 0x1B) + RunGuardRecoilState | M | e58E0; func_8015126C (hit handling) when +0x44 bit 0 and func_8014A454 (hit from the front while guarding) |
| 0x8016039C | func_8016039C | RunGuardRecoilState | D_8018FF90[p->sub] | H | e58E0 |
| 0x801603D8 | func_801603D8 | TryStartGuardRecoil | state 0: StartGuardRecoil when StayedGrounded | M | e58E0; table entry |
| 0x80160410 | func_80160410 | StartGuardRecoil | rumble, ClearHitPending, effect 6 at the hit point (+0xE0), SE 0x43D, pushed back along the hit facing, timer 8 | M | e58E0 |
| 0x80160534 | func_80160534 | GuardRecoilStep | full gauge + square / triangle -> counter burst; attacks; timer out: R1 held -> guard again, else kind 0; slide back | M | e58E0; table entry |
| 0x801607B8 | func_801607B8 | DropGuard | +0x44 &= ~1, guard bit off | M | e58E0; func_8015126C when a hit lands (not blocked) |

#### Kind 0x14: wall climb (surface 0x15 walls, flag 0x1F)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015F2BC | func_8015F2BC | EnterWallClimb | SetKindAndState(p, 0x14) + StartWallClimb | M | e58E0; table entry |
| 0x8015F2F0 | func_8015F2F0 | SwitchToWallClimb | SetKindAndState(p, 0x14) + RunWallClimbState | M | e58E0; HandleLandingToNormal / KeepKind on a 0x8000 hit with surface (+0x16C) 0x15 and func_8014A6C4 (flag 0x1F), facing set to g_WallNormal |
| 0x8015F324 | func_8015F324 | RunWallClimbState | D_8018FEAC[p->sub] | H | e58E0 |
| 0x8015F360 | func_8015F360 | WallClimbState0 | StartWallClimb | M | e58E0; table entry |
| 0x8015F380 | func_8015F380 | StartWallClimb | motion 0x18, +0x244 / +0x245 = 0, two effects 0x25 at his chest, SE 0x56D, state bit 4 | M | e58E0 |
| 0x8015F448 | func_8015F448 | WallClimbStep | triangle / square queue the next stab (+0x244 side, +0x245); markers 0x2000 / 0x1000: hand point, SE 0x56D / 0x56E, rumble, effects; motion end: next stroke up (or down with down held); jump or off the wall -> fall | M | e58E0; table entry |
| 0x8015F738 | func_8015F738 | ExitWallClimb | display flag 20 off, face 0x11 | M | e58E0; exit-table entry |

#### Kind 0x16: assimilate (+0x184 the ability won, bit 31 = failed; +0x1A0 the new ability)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8015FA44 | func_8015FA44 | EnterAssimilate | SetKindAndState(p, 0x16) + StartAssimilate | M | e58E0; table entry |
| 0x8015FA78 | func_8015FA78 | SwitchToAssimilate | SetKindAndState(p, 0x16) + RunAssimilateState | M | e58E0; CheckAssimilatePending (+0x44 bit 0x10, set by the Fusion throw's catch step) |
| 0x8015FAAC | func_8015FAAC | RunAssimilateState | D_8018FEF0[p->sub] | H | e58E0 |
| 0x8015FAE8 | func_8015FAE8 | AssimilateState0 | ground check: falling or sliding cancels (CancelAssimilate, +0x184 \|= 0x80000000, kind 3 / 4), else StartAssimilate | M | e58E0; table entry |
| 0x8015FBE0 | func_8015FBE0 | StartAssimilate | failed (+0x184 < 0) -> kind 0; else D_80078EC1 = 0, motion 0x20, face 0x18, effect 0x16, SE 0x44F, g_UpdateAllActors = 2 (others frozen), D_800B9A17 = 0 | M | e58E0 |
| 0x8015FCC8 | func_8015FCC8 | AssimilateTakeStep | an event running: cancel -> kind 0; else +0x1A0 = the new ability (+0x184), +0x197 / +0xBE / +0xBF = 0, func_8014BFF4(p, 1) | M | e58E0; table entry |
| 0x8015FD74 | func_8015FD74 | OpenAbilityNameMessage | PlaySe(0x18), +0x198 = OpenMessage(D_8018FF04[+0x1A0]) | M | e58E0; table entry |
| 0x8015FDCC | func_8015FDCC | WaitAbilityNameMessage | answer given: SE 0x19, CloseMessage; GetAbilityFanfare: Obj68 0x24 + SE 0x989 | M | e58E0; table entry |
| 0x8015FE70 | func_8015FE70 | AssimilateEndStep | motion end: chain to +0xBA or -> kind 0; marker 0x4000: face 0x11 | M | e58E0; table entry |
| 0x8015FF20 | func_8015FF20 | ExitAssimilate | failed: bp bonus (func_80150820(p, GetAbilityBpBonus)); else hold the ability (D_80078EC1 = EC2 = +0x1A0), SetAbilityTimer, RestoreStatusOnce, ClearAbilityUsed, unfreeze; then ClearAssimilateState | M | e58E0; exit-table entry |
| 0x8016004C | func_8016004C | ClearAssimilateState | +0x184 = 0, +0x188 / +0x18A = 0, +0x44 &= ~0x10, D_800B9A17 = 1 | M | e58E0 |
| 0x8016007C | func_8016007C | CancelAssimilate | ClearAssimilateState plus face 0x11, g_UpdateAllActors = 1 | M | e58E0; 4 calls (AssimilateState0 x2, AssimilateTakeStep, ExitAssimilate) |

#### Kind 0x17 and the ability tables (D_80078EC1 = the held ability)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8016533C | func_8016533C | RestoreAbilityOnLoad | D_80126CF8 = D_80078EC1, then RunAbilityInitHandler(Musashi) | M | e58E0; called by the stage init func_80145CEC |
| 0x80165374 | func_80165374 | EnterUseAbility | CheckAbilityFails, SetKindAndState(p, 0x17), +0x197 = 1, RunAbilityUse | M | e58E0; table entry |
| 0x801653B8 | func_801653B8 | SwitchToUseAbility | CheckAbilityFails, SetKindAndState(p, 0x17), RunAbilityUse | M | e58E0; func_80149864 (circle, func_801497A8) |
| 0x801653F4 | func_801653F4 | CheckAbilityFails | D_80078EC5 = 0x80 when LacksAbilityBp, or ability 0x1A (Map) outside maps 0x305C-0x3066 | M | e58E0 |
| 0x801654A8 | func_801654A8 | RunPassiveAbility | each frame (not in kinds 0x16 / 0x1A, no action): abilities with info bit 0x80 run D_80190170[ability]; ability 0x19 (Acid): func_800CAE0C | M | e58E0; called by the player update func_80146128 |
| 0x80165580 | func_80165580 | RunAbilityUse | D_80078EC5 bit 0x80: RunAbilityFailState; else D_80190170[ability] | M | e58E0 |
| 0x801655E4 | func_801655E4 | SpendAbilityBp | SpendBp(p, GetAbilityInfo & 0x7F) | H | e58E0; 29 ability calls (one per package) |
| 0x80165624 | func_80165624 | LacksAbilityBp | bp (D_80078EB8) < the ability's cost | H | e58E0; CarryStep, CheckAbilityFails, ovl2c / ovl15 |
| 0x80165658 | func_80165658 | GetAbilityInfo | D_801901EC[a & 0x7F]: cost in bits 0-6, 0x80 = runs every frame (not on circle) | M | e58E0; 4 callers (func_801497A8 refuses circle when bit 0x80) |
| 0x80165670 | func_80165670 | SetAbilityTimer | D_80078EC8 = D_8019020C[a & 0x7F] | M | e58E0; ExitAssimilate; func_80146128 reads EC8 for ability 0x10 (Steel) |
| 0x80165694 | func_80165694 | TickAbilityTimer | D_80078EC8-- while no action runs | H | e58E0; called by func_80146128 |
| 0x801656D0 | func_801656D0 | GetAbilityAssimilateRate | D_80190288[a]: gauge added per square press | M | e58E0; FusionThrowStuckStep adds it to +0x188 |
| 0x801656E8 | func_801656E8 | GetAbilityBpBonus | D_801902A8[a]: bp given when assimilating fails | M | e58E0; ExitAssimilate: func_80150820 (AddBp + a number effect) |
| 0x80165700 | func_80165700 | GetAbilityFanfare | D_801902C8[a]: nonzero = the Obj68 0x24 and SE 0x989 after the name | L | e58E0; WaitAbilityNameMessage |
| 0x801657A0 | func_801657A0 | SaveStatusOnce | when D_80078EC3 == 0: set it, SaveStatus | M | e58E0; 3 ability calls (ovl1b Mint, ovl24 Toxin, ovl17 Sleepy) |
| 0x801657D8 | func_801657D8 | SaveStatus | the words 0x80078E94 / E9C / EA0 / EA4 / EA8 and byte EBB copied to 0x80078ECC.. | M | e58E0 |
| 0x80165840 | func_80165840 | RestoreStatusOnce | when D_80078EC3: clear it, RestoreStatus | M | e58E0; func_80158AE4, ExitAssimilate, the same three packages |
| 0x80165874 | func_80165874 | RestoreStatus | the copies back | M | e58E0 |
| 0x801658DC | func_801658DC | ClearAbilityUsed | D_80078EC4 = 0 | M | e58E0 |
| 0x801658EC | func_801658EC | SetAbilityUsed | D_80078EC4 = 1 | M | e58E0; no caller found |
| 0x80165900 | func_80165900 | GetAbilityUsed | D_80078EC4 | M | e58E0; no caller found |
| 0x80165910 | func_80165910 | TestAndSetAbilityUsed | returns D_80078EC4, sets it | M | e58E0; 12 ability calls |
| 0x80165938 | func_80165938 | ResetCloneCounters | D_8012672C, D_8012811C, D_80126B08 = 0 | L | e58E0; stage init func_80145CEC |
| 0x80165958 | func_80165958 | IncCloneUseCount | D_8012672C++ | L | e58E0; ovl2a (Clone) after SpendAbilityBp |
| 0x80165978 | func_80165978 | GetCloneUseCount | D_8012672C | L | e58E0; no caller found |
| 0x80165988 | func_80165988 | IncStageCount811C | D_8012811C++ | L | e58E0; 6 stage calls (sc04_002 / 004 / 005 / 007, sc02_041) |
| 0x801659A8 | func_801659A8 | GetStageCount811C | D_8012811C | L | e58E0; 3 stage calls (sc04_003 / 005 / 007: `if (func_801659A8() <= 0)`) |
| 0x801659B8 | func_801659B8 | SetCloneFlag6B08 | D_80126B08 = 1 | L | e58E0; ovl2a func_ovl2a_800CB3B4 |
| 0x801659CC | func_801659CC | GetCloneFlag6B08 | D_80126B08 | L | e58E0; 6 stage calls (sc04_*, sc02_041) |
| 0x801659DC | func_801659DC | RunAbilityInitHandler | D_801902E8[+0x1A0](p) | M | e58E0; func_801554B8 once the ability's overlay is in (+0x196 = +0x1A0), RestoreAbilityOnLoad |
| 0x80165A18 | func_80165A18 | NopA18 | empty table entry | L | e58E0 |
| 0x80165A20 | func_80165A20 | EndHeldAbility | StopAbility, then ClearHeldAbility | H | e58E0; 21 calls (DropTimedAbility, 17 ability packages, sc06_027) |
| 0x80165A78 | func_80165A78 | StopAbility | the ability's end handler, +0x197 = 0, +0x44 &= ~8, model flag 0x20 off | M | e58E0; also ovl19 / ovl25 |
| 0x80165AC8 | func_80165AC8 | RunAbilityEndHandler | D_80190364[ability & 0x7F] | M | e58E0 |
| 0x80165B08 | func_80165B08 | NopB08 | empty table entry | L | e58E0 |
| 0x80165B10 | func_80165B10 | NopB10 | empty table entry | L | e58E0 |
| 0x80165B18 | func_80165B18 | NopB18 | empty table entry | L | e58E0 |
| 0x80165B20 | func_80165B20 | NopB20 | empty table entry | L | e58E0 |
| 0x80165B28 | func_80165B28 | RunAbilityFailState | +0x44 \|= 8, D_801903E0[+0x197] | M | e58E0; RunAbilityUse when CheckAbilityFails said so |
| 0x80165B6C | func_80165B6C | AbilityFailState0 | StayedGrounded: StartAbilityFailMotion, +0x197++ | M | e58E0; table entry |
| 0x80165BB4 | func_80165BB4 | StartAbilityFailMotion | motion 0x22, face 0x1A, +0x197++ | M | e58E0 |
| 0x80165BFC | func_80165BFC | AbilityFailStep | motion end: face 0x11, exit kind, ResetPlayerKind | M | e58E0; table entry |
| 0x80165C58 | func_80165C58 | EndAbilityFailFace | StartFace(p, 0x11) | M | e58E0; called by AbilityFailStep |

#### Kinds 0x18, 0x1C, 0x1D, 0x1E

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801600D0 | func_801600D0 | EnterKind18 | SetKindAndState(p, 0x18) + StartKind18 | L | e58E0; table entry |
| 0x80160104 | func_80160104 | SwitchToKind18 | SetKindAndState(p, 0x18) + RunKind18State | L | e58E0; no caller found |
| 0x80160138 | func_80160138 | RunKind18State | D_8018FF80[p->sub] | H | e58E0 |
| 0x80160174 | func_80160174 | TryStartKind18 | state 0: StartKind18 when StayedGrounded | M | e58E0; table entry |
| 0x801601AC | func_801601AC | StartKind18 | motion 0x21, state 1 | L | e58E0 |
| 0x801601E4 | func_801601E4 | Kind18Step1 | motion end: motion 0x22, face 0x1A, next | L | e58E0; table entry |
| 0x80160244 | func_80160244 | Kind18Step2 | motion end: motion 0x23, face 0x1B, next | L | e58E0; table entry |
| 0x801602A4 | func_801602A4 | Kind18Step3 | motion end: exit, face 0x11, kind 0 | L | e58E0; table entry |
| 0x8016032C | func_8016032C | Nop0032C | empty table entry (kind 0x18 exit) | L | e58E0 |
| 0x801607E4 | func_801607E4 | EnterKind1C | SetKindAndState(p, 0x1C) + StartKind1C | L | e58E0; table entry |
| 0x80160818 | func_80160818 | SwitchToKind1C | SetKindAndState(p, 0x1C) + RunKind1CState | M | e58E0; StartGuard when D_80078EC0 bit 0x80 (toggled by select in func_80149FB0) |
| 0x8016084C | func_8016084C | RunKind1CState | D_8018FF98[p->sub] | H | e58E0 |
| 0x80160888 | func_80160888 | TryStartKind1C | state 0: StartKind1C when StayedGrounded | M | e58E0; table entry |
| 0x801608C0 | func_801608C0 | StartKind1C | +0x44 \|= 0x41 (bit 0: the gauge fills), display flags off, motion 0x24, face 0x1D | L | e58E0 |
| 0x80160920 | func_80160920 | Kind1CStep1 | R1 released: EndKind1C; motion end: motion 0x25, next | L | e58E0; table entry |
| 0x801609B8 | func_801609B8 | Kind1CStep2 | R1 released: EndKind1C | L | e58E0; table entry |
| 0x80160A28 | func_80160A28 | ExitKind1C | parts back, +0x44 &= ~0x41, face 0x11 | L | e58E0; exit-table entry |
| 0x80160A74 | func_80160A74 | EndKind1C | full gauge (D_80078EBF == 0x80): lie down (kind 0x1D), else kind 0 | M | e58E0; called by both steps after the exit handler |
| 0x80160ACC | func_80160ACC | EnterLieDown | SetKindAndState(p, 0x1D) + StartLieDown | L | e58E0; table entry |
| 0x80160B00 | func_80160B00 | SwitchToLieDown | SetKindAndState(p, 0x1D) + RunLieDownState | M | e58E0; EndKind1C, func_801498C0 (from CheckLieDownFlag) |
| 0x80160B34 | func_80160B34 | RunLieDownState | D_8018FFA4[p->sub] | H | e58E0 |
| 0x80160B70 | func_80160B70 | TryStartLieDown | state 0: StartLieDown when StayedGrounded, else +0x1AC = 0 | M | e58E0; table entry |
| 0x80160BB4 | func_80160BB4 | StartLieDown | +0x44 \|= 0x80, motion 0x26, face 0x1E, pitch 0xFE9, +0x234 / +0x238 = 0 | M | e58E0 |
| 0x80160C28 | func_80160C28 | LieDownTiltStep | pitch falls back with growing speed (+0x238 += 0x1C000) to 0xC00 (on his back), then next | M | e58E0; table entry |
| 0x80160CB4 | func_80160CB4 | LieDownSettleStep | motion end: motion 0x27, face 0x1F, next | M | e58E0; table entry |
| 0x80160D10 | func_80160D10 | LieDownStep | assimilate pending -> kind 0; +0x1AC == 0: a face button gets up; else +0x1AC -= 0xAAA8 until below 0 | M | e58E0; table entry |
| 0x80160DEC | func_80160DEC | ExitLieDown | +0x1AC = 0, pitch 0, parts back, +0x44 &= ~0x180, face 0x11 | M | e58E0; exit-table entry |
| 0x80160E3C | func_80160E3C | EnterRecover | SetKindAndState(p, 0x1E) + StartRecover | M | e58E0; table entry |
| 0x80160E70 | func_80160E70 | SwitchToRecover | SetKindAndState(p, 0x1E) + RunRecoverState | M | e58E0; no caller found |
| 0x80160EA4 | func_80160EA4 | RunRecoverState | D_8018FFB4[p->sub] | H | e58E0 |
| 0x80160EE0 | func_80160EE0 | RecoverState0 | StartRecover | M | e58E0; table entry |
| 0x80160F00 | func_80160F00 | StartRecover | ClearHitPending, motion 4, face 0x11, g_UpdateAllActors = 2, SetPropsActive(0), timer 0x10 | M | e58E0 |
| 0x80160F70 | func_80160F70 | RecoverHealStep | timer out: func_800D0F4C(0xA), AddHp(p, 150), AddBp(p, 150), +0x198 = OpenMessage(D_80110EC0) | M | e58E0; table entry |
| 0x80160FE0 | func_80160FE0 | RecoverMessageStep | answer given: CloseMessage, next | M | e58E0; table entry |
| 0x80161034 | func_80161034 | RecoverEndStep | ClearHitPending, exit, kind 0 | M | e58E0; table entry |
| 0x80161094 | func_80161094 | ExitRecover | close the window, g_UpdateAllActors = 1, SetPropsActive(1), D_800B9A17 = 1 | M | e58E0; exit-table entry |
| 0x801610FC | func_801610FC | Nop10FC | empty table entry | L | e58E0 |

#### Kind switches from flags, EC0 modes

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80161B18 | func_80161B18 | CheckAssimilatePending | no event (D_800AE6B0) and +0x44 bit 0x10: exit kind, SwitchToAssimilate, 1 | M | e58E0; 8 state steps call it first |
| 0x80161B84 | func_80161B84 | CheckLieDownFlag | +0x44 bit 0x100 and func_80149884 (no player action, not map 0x308F): exit kind, kind 0x1D, 1 | M | e58E0; 8 state steps |
| 0x80161BE0 | func_80161BE0 | CheckUseAbility | func_801497A8 (circle, a usable ability): exit kind, SwitchToUseAbility, 1 | M | e58E0; func_80159C84, func_8015A3C8 |
| 0x801619A4 | func_801619A4 | GetActiveEC0Mode | D_80078EC0 & 0x7F while +0x1C8 (its timer) runs, else 0 | M | e58E0; 5 callers switch on it (3 / 4 / 5 / 6) |
| 0x801619D0 | func_801619D0 | IsEC0Mode3 | +0x1C8 and mode 3 | M | e58E0; func_80150BC8, func_8015126C, ovl32 x2 |
| 0x80161A00 | func_80161A00 | IsEC0Mode4 | +0x1C8 and mode 4 | M | e58E0; func_8015126C, ovl33 x3 |
| 0x80161A30 | func_80161A30 | IsEC0Mode5 | +0x1C8 and mode 5 | M | e58E0; func_8015126C, ovl34 x3, sc03_092 |
| 0x80161A60 | func_80161A60 | IsEC0Mode6 | +0x1C8 and mode 6 | M | e58E0; StartFall (SE 0x8E1), func_8015126C, func_8015AE2C |
| 0x80161A90 | func_80161A90 | TickEC0Mode6Timer | mode 6 active: +0x1C8--; mode 6 with the timer out: func_8014AC10(0x3B) (frees those effects) | M | e58E0; called by func_80146128 |

#### Footstep and surface sounds (+0x16E = the surface under him)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80161C24 | func_80161C24 | PlayFootstep | surface < 8: PlaySe of D_8018FFC4 / D_8018FFC6 by the +0xDA left / right toggle | M | e58E0; 4 calls on motion marker 0x2000 (`func_80161C24(p, p->+0x16E)`) |
| 0x80161C98 | func_80161C98 | PlaySurfaceSeE4 | surface < 8: PlaySe(D_8018FFE4[surface]) | L | e58E0; no caller found |
| 0x80161CD0 | func_80161CD0 | PlayJumpSe | surface < 8 and func_800CF8B4: PlaySe(D_8018FFF4[surface]) | M | e58E0; func_8015AC48 (motion 9, the jump) and func_8015B950 |
| 0x80161D20 | func_80161D20 | PlayLandSe | surface < 8: PlaySe(D_80190004[surface]) | M | e58E0; 11 calls, all with the landing dust (HandleLanding*, func_80157A8C / 7BC8) |

#### Clock deadlines (game vars 8 and 0x12: 0x8000 \| hour << 8 \| minute, against the clock 0x80078EB0)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80161D58 | func_80161D58 | UpdateDeadlines | UpdateDeadline8, then UpdateDeadline12 | M | e58E0; called by the player update func_80146128 |
| 0x80161D88 | func_80161D88 | StartDeadlineEvent | no event running and flag 0x141: clear it, set flag 0x95, func_800D1734(D_80190048) | M | e58E0; called by func_801463A0 |
| 0x80161E08 | func_80161E08 | UpdateDeadline8 | var 8 active: build the three on-screen sprites once (two labels, the time left), refresh the digits; time reached: ExpireDeadline8 | M | e58E0; skipped for kind 0x1A and maps 0x3012 / 3054 / 3079 / 3096 |
| 0x801620C4 | func_801620C4 | GetDeadline8Left | the time left (func_800D0E30) as hours * 100 + minutes | M | e58E0; UpdateDeadline8 x2 |
| 0x80162120 | func_80162120 | StartDeadline8 | var 8 unset: var 8 = func_800D0D7C(0, 1) \| 0x8000 | M | e58E0; sc03_011 (`func_80162120()`), func_80145B24 |
| 0x8016216C | func_8016216C | ClearDeadline8 | var 8 = 0, the three sprite records zeroed (0x38 each) | M | e58E0; sc03_010, sc03_013 |
| 0x801621CC | func_801621CC | GetDeadline8Passed | D_80190048 when var 8's time has passed within the last n hours (hour 0x80078EB1, wrap at 0x17), else 0 | M | e58E0; 7 stage calls, all `if (... func_801621CC(8) != 0) func_801622C4();` |
| 0x801622C4 | func_801622C4 | ExpireDeadline8 | flag 0x141 = 1 (StartDeadlineEvent picks it up), var 8 = 0, sprites zeroed | M | e58E0; 8 calls (UpdateDeadline8, the 7 stage callers above) |
| 0x80162438 | func_80162438 | UpdateDeadline12 | the same for var 0x12 (labels D_80190078 / D_80190090); time reached: ClearDeadline12 | M | e58E0; called by UpdateDeadlines |
| 0x801626B8 | func_801626B8 | GetDeadline12Left | var 0x12's time left as hours * 100 + minutes | M | e58E0 |
| 0x80162714 | func_80162714 | StartDeadline12 | var 0x12 unset: var 0x12 = func_800D0D7C(0xC, 0) \| 0x8000 | M | e58E0; sc02_021 |
| 0x80162760 | func_80162760 | ClearDeadline12 | var 0x12 = 0, its three sprite records zeroed | M | e58E0; UpdateDeadline12, sc02_021 |

#### A three-step scene-exit object (D_8019006C by +0x15)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80162330 | func_80162330 | RunSceneExitStep | D_8019006C[+0x15](o) | M | e58E0; no caller found (a handler) |
| 0x8016236C | func_8016236C | SceneExitStart | EndScene(Musashi), +0x28 = 10, step++ | M | e58E0; table entry |
| 0x801623B8 | func_801623B8 | SceneExitWait | after 10 frames: func_800D0C48(1), func_800167B8(4), step++ | L | e58E0; table entry |
| 0x80162414 | func_80162414 | SceneExitBusy | func_800167F0(4) != 0 | L | e58E0; table entry |

#### Shadow decal object (D_8011F750, 0x58 bytes: +0 kind, +1 step, +4 owner, +8 sprite)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x801627C0 | func_801627C0 | ClearShadow | zero the 0x58 bytes at D_8011F750 | M | e58E0; stage init func_80145CEC |
| 0x801627E8 | func_801627E8 | UpdateShadow | kind != 0: D_801900B0[kind - 1](obj) | M | e58E0; the stage frame func_801287B8 (e.c) |
| 0x80162834 | func_80162834 | RunShadowStep | D_801900B4[+1](o) | M | e58E0; table entry |
| 0x80162870 | func_80162870 | InitShadow | sprite D_800B5CB8 from texture D_801900A4 (0x250, 0x1A0), its matrix at +0xC, flags 0x60000000, UpdateShadowMatrix, next step | M | e58E0; table entry |
| 0x801628F4 | func_801628F4 | ShadowStep | hidden while the owner's +0x7E is set; +0x20..+0x28 = the owner's ground point (+0x78..+0x7C); UpdateShadowMatrix | M | e58E0; table entry |
| 0x80162968 | func_80162968 | UpdateShadowMatrix | tilt to the owner's ground normal (+0x80..+0x84), turn to his facing; scale shrinks with his height above the point (0x300 range, a third with +0x44 bit 0x400) | M | e58E0 |
| 0x80162AC0 | func_80162AC0 | SetShadowKind | +0 = kind, +1 = 0 | M | e58E0; no caller found |
| 0x80162ACC | func_80162ACC | NextShadowStep | +1++ | M | e58E0; InitShadow |
| 0x80162AE0 | func_80162AE0 | PrevShadowStep | +1-- | M | e58E0; no caller found |

#### Obj68 helpers: matrices, accel, sweep hits, map traces

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80162CC4 | func_80162CC4 | DefaultObj68Handler | empty; UpdateObj68s calls it for a kind whose table entry is NULL | H | e58E0: func_80162B1C `else func_80162CC4(o)` |
| 0x80162D88 | func_80162D88 | UpdateObj68MatrixYXZ | model matrix from its rotation in Y, X, Z order | M | e58E0; 3 calls (Fusion throw) |
| 0x80162DE8 | func_80162DE8 | UpdateObj68MatrixZXY | the same in Z, X, Y order | M | e58E0; no caller found |
| 0x80162E48 | func_80162E48 | UpdateObj68MatrixZYX | the same in Z, Y, X order | M | e58E0; no caller found |
| 0x80162EA8 | func_80162EA8 | UpdateObj68MatrixYZX | the same in Y, Z, X order | M | e58E0; no caller found |
| 0x80162F08 | func_80162F08 | AddObj68Accel | +0x24 / +0x28 / +0x2C += (x, y, z), each clamped to +-0x7F0000 | M | e58E0; ovl2a, ovl25 |
| 0x80162F60 | func_80162F60 | AddObj68AccelX | func_80147948(o, x, 0x7F0000) | M | e58E0; 5 callers here |
| 0x80162F80 | func_80162F80 | AddObj68AccelY | func_801479BC(o, y, 0x7F0000) | M | e58E0 |
| 0x80162FA0 | func_80162FA0 | AddObj68AccelZ | func_80147A30(o, z, 0x7F0000) | M | e58E0 |
| 0x80162FF4 | func_80162FF4 | AddObj68AccelLocal | AddObj68Accel, then velocity = the accel turned by the model's XYZ rotation (via g_PushVel / SetPushVel) | M | e58E0; 6 calls (sc02_000, sc02_003, ovl21, ovl2b, ovl2e, ovl2f) |
| 0x801630C4 | func_801630C4 | AddObj68AccelLocalYXZ | the same with the YXZ rotation order | M | e58E0; HomeFusionThrow |
| 0x80163194 | func_80163194 | AddObj68AccelByMatrix | the same turned by a given matrix | M | e58E0; 9 calls (Fusion throw, 8 ability packages) |
| 0x80163234 | func_80163234 | SetObj68VelFromAccel | AddObj68AccelWorld(o, 0, 0, 0) | M | e58E0; no caller found |
| 0x8016325C | func_8016325C | AddObj68AccelWorld | AddObj68Accel, then velocity = the accel unturned | M | e58E0; 9 stage calls (sc03_006, sc05_010, sc03_119, sc03_015, ...) |
| 0x801632E0 | func_801632E0 | GetSweepHitActor | D_80115100 (the first actor the last sweep hit) | M | e58E0; Fusion throw, ovl1f, ovl32 |
| 0x801632F0 | func_801632F0 | GetSweepHitResult | the first nonzero of the three sweep results D_80115200 | M | e58E0; 11 calls (`if (r & 1)` hit an actor, `r & 6` a wall) |
| 0x80163328 | func_80163328 | MarkSweepHitPoints | each result with bit 0: the actor's hitPos (+0x7C) = the hit point D_80126B18[i], +0x82 = 0 | M | e58E0; 12 ability calls |
| 0x801633A8 | func_801633A8 | GetSweepHitSoft | the first result whose actor lacks flags5C 0x400 | L | e58E0; ovl1f |
| 0x80163408 | func_80163408 | SweepHitObj68 | SweepHitObj68Rolled with a zero offset | M | e58E0; 11 ability calls |
| 0x8016345C | func_8016345C | SweepHitObj68Rolled | damage rolled for the hit kind (func_80156370), then SweepHitObj68Full | M | e58E0; ovl1f |
| 0x801634D8 | func_801634D8 | SweepHitObj68Dmg | SweepHitObj68Full with the damage given and a zero offset | M | e58E0; FusionThrowFlyStep (kind 0xD) |
| 0x80163534 | func_80163534 | SweepHitObj68Full | clear the results; segment from last frame's position (+0x44) to now (+6), plus the offset; D_80115200[0] = CallSweepHit(...) | M | e58E0 |
| 0x80163664 | func_80163664 | CallSweepHit | func_80157158 with the 13 arguments (kind / damage masked to u16) | M | e58E0; called by SweepHitObj68Full |
| 0x801636D0 | func_801636D0 | SpawnSweepHitSparks | each result with bit 0: func_8014AD30 (effect 0x1D) at its hit point | M | e58E0; no caller found |
| 0x80163764 | func_80163764 | CollectPickupsNear | the first live actor with flags5C 0x100 within 0x40: func_801506A4 (pickups 0x31 money? 0x32 hp, 0x33 bp, 0xC5, 0x27B) for the owner (+0x4C), 1 | M | e58E0; Fusion throw fly / return steps |
| 0x8016380C | func_8016380C | TraceObj68Move | TraceMap(1) from +0x44 to the position; on a hit the position takes the moved end; returns the bits | M | e58E0; ovl1f, ovl2b |
| 0x801638A0 | func_801638A0 | RaycastObj68Move | RaycastMapTwoCells the same way; hit classed by the normal's y (D_801152AA): 0x8000 wall, 0x4000 steep, 0x2000 floor | M | e58E0; ovl2f, ovl2e |
| 0x80163950 | func_80163950 | LandObj68OnActor | a vertical segment (y-0x20 to y+8) against actors with flags5C 0x400 and hitData (PathHitsMovingModel); snaps the position, 1 | M | e58E0; ovl1f, ovl2b, ovl2e |

#### Obj68: the Fusion throw (assimilate; +0x4C the owner Musashi)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80163A58 | func_80163A58 | RunFusionThrowState | D_801900BC[o->sub](o) | M | e58E0; an Obj68 kind handler (no direct caller) |
| 0x80163A94 | func_80163A94 | StartFusionThrow | owner +0x44 \|= 4 (sword out: attacks blocked), sword model D_800DE5A0 at his hand matrix, SE 0x448, timer 0x10, effect 0xD, forward accel -0x200000 | M | e58E0; table entry |
| 0x80163C2C | func_80163C2C | FusionThrowFlyStep | spin, aim (AimFusionThrow), move; sweep hit kind 0xD: an actor -> owner +0x184 = it, +0x44 \|= 0x20, +0x194 = its id, effect 0x30, stick; a wall or range end -> return | M | e58E0; table entry |
| 0x80163EC8 | func_80163EC8 | FusionThrowStuckStep | stuck in the actor: each square press adds GetAbilityAssimilateRate to the gauge (+0x188, decays); 0x80: hit 0xE, effect 0x33, +0x184 = its ability; 0x80 frames or kind 0x19: hit 0x21; then return (SE 0x449) | M | e58E0; table entry |
| 0x80164270 | func_80164270 | FusionThrowReturnStart | UpdateObj68MatrixYXZ, timer 0x20, next | M | e58E0; table entry |
| 0x801642AC | func_801642AC | FusionThrowReturnStep | home to the owner; within 0x28 or timer out: timer 8, SE 0x44A, next; picks up items on the way | M | e58E0; table entry |
| 0x8016432C | func_8016432C | FusionThrowCatchStep | timer out: owner caught it: a target and no action -> +0x44 \|= 0x10 (assimilate pending; +0x184 bit 31 when the gauge was short), else +0x184 = 0; +0x44 &= ~4, SE 0x44B, FreeObj68 | M | e58E0; table entry |
| 0x80164410 | func_80164410 | Nop4410 | empty table entry | L | e58E0 |
| 0x80164418 | func_80164418 | HomeFusionThrow | turn toward the owner's chest (+0x1E) by halves, spin, AddObj68AccelLocalYXZ(0, 0, 0x8000), move | M | e58E0; return and catch steps |
| 0x80164530 | func_80164530 | AimFusionThrow | turn (10 steps) to the actor with flags5C 0x2000 nearest its heading (within 0x200); on map 0x30A0 also pitch to its box centre | M | e58E0; FusionThrowFlyStep |

#### Obj68 effects: ring (kind 0x19), flash, trail sprite

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80164744 | func_80164744 | RunRingState | D_80190110[o->sub](o), then UpdateObj68Matrix if it has a model | M | e58E0; Obj68 kind 0x19 (FadeRing frees every kind 0x19) |
| 0x801647A4 | func_801647A4 | StartRing | model D_800DF2E0 (colour D_80190108.. = 0x80), +0x60 = 0, +0x62 = 0x200, at his hand; else FadeRing | M | e58E0; spawned by CounterBurstStep (`func_801466F0(0x19, p, ..., 0 / 1, ...)`) |
| 0x80164864 | func_80164864 | RingGrowStep | spin and grow; value 0 (+0x50): hits actors (RingHitActors); next past 0x4000 (0x2000 for value 1) | M | e58E0; table entry |
| 0x80164930 | func_80164930 | FadeRing | value 0: fade the colour by 8, at -0x80 free every kind-0x19 Obj68 with +0x50 and itself; value 1: shrink | M | e58E0; table entry, StartRing |
| 0x80164A74 | func_80164A74 | PlaceAtHand | position = the hand point (func_80148534) into the owner's frame | M | e58E0; StartRing |
| 0x80164ACC | func_80164ACC | RingHitActors | actors within 0x50 that take hit kind 0xB (func_8014C308): func_8014C3A4 hit, their +0x60 halved | M | e58E0; RingGrowStep, FadeRing |
| 0x80164BA0 | func_80164BA0 | RunFlashState | D_8019011C[o->sub](o) | L | e58E0; an Obj68 kind handler |
| 0x80164BDC | func_80164BDC | StartFlash | model from func_80146578, colour D_801ED5E8 = (0xF0, 0xF0, 0xC0), scale 0xCCC, pitch 0x400, at his hand 0x40 up; else FreeFlash | L | e58E0; table entry |
| 0x80164CD4 | func_80164CD4 | FlashGrowStep | fade, scale += growing speed; next when the speed turns negative | L | e58E0; table entry |
| 0x80164D4C | func_80164D4C | FlashFadeStep | fade until black (then next), scale += 0x100 | L | e58E0; table entry |
| 0x80164DB0 | func_80164DB0 | FreeFlash | FreeObj68 | M | e58E0 |
| 0x80164DD0 | func_80164DD0 | PlaceFlashAtHand | hand point into the owner's frame, y -= 0x40 | M | e58E0 |
| 0x80164E40 | func_80164E40 | FadeFlashColour | D_801ED5E8..EA each -= 0x10 while nonzero; 1 when all are 0 | M | e58E0 |
| 0x80164EA4 | func_80164EA4 | RunTrailSpriteState | D_8019012C[o->sub](o) | L | e58E0; an Obj68 kind handler |
| 0x80164EE0 | func_80164EE0 | StartTrailSprite | clear the 8 trail copies (D_801ED628), scale 0x4000, colour 0, next | L | e58E0; table entry |
| 0x80164F44 | func_80164F44 | TrailSpriteShrinkStep | colour up, scale down to 0x1000 (then timer 0xE, next); a trail copy every 2-3 frames; draw | L | e58E0; table entry |
| 0x80165024 | func_80165024 | TrailSpriteHoldStep | timer out: next; draw | L | e58E0; table entry |
| 0x80165064 | func_80165064 | TrailSpriteBrightenStep | colour += 0x10 up to 0xFF, then next; draw | L | e58E0; table entry |
| 0x801650C4 | func_801650C4 | TrailSpriteFadeStep | colour -= 0x10; below 0: FreeObj68 | L | e58E0; table entry |
| 0x80165124 | func_80165124 | SetTrailSpriteColour | +0x50..+0x52 = +0x62 (grey level) | M | e58E0; 4 callers |
| 0x80165140 | func_80165140 | AddTrailCopy | a free slot of D_801ED628 (8): 8 frames, the rotation (+0x2C) and colour | M | e58E0 |
| 0x801651B8 | func_801651B8 | DrawTrailSprite | DrawTrailQuad for itself and each live copy (counting it down) | M | e58E0 |
| 0x80165240 | func_80165240 | DrawTrailQuad | a textured quad (D_80190140 corners, D_80190160 uvs, tpage 0x2C, semi-transparent) turned by a rotation, coloured, added with func_80016ED4 | M | e58E0 |

#### Other

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80165E2C | func_80165E2C | DebugPrintWord | func_8001534C / func_800153CC: a label and *arg at (0xA8, 0x80) | L | e58E0; no caller found |
| 0x80165E90 | func_80165E90 | UpdateSwordTrails | +0x44 bits 0x10000000 / 0x20000000 (and the model shown): the two hand points (func_801484B0 / func_80148534) to world, func_80167DBC / func_80167AE0 draw the trail | M | e58E0; the stage frame func_801287B8 (e.c) |
| 0x80165FA4 | func_80165FA4 | ModelPointsToWorld | two points through the model's matrix (+0x18, func_80020F34) | M | e58E0; UpdateSwordTrails x2, func_80166994, ovl35 |


Rows: 340 (H 25, M 262, L 53); skipped (already known): 10

### 0x80166000-0x8016F000: engine effect kinds, sword trails, HUD slots

0x80166000-0x8016F000 is the engine's own effect kinds (the handlers that g_Effects entries run: a
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
* 0x801599A4 (part 1: RunPlayerKindHandler, M): D_8018FBA8[kind] is each kind's **exit** handler, run just before
  every kind change (exit, SetKindAndState, then the new kind's start); the functions it reaches only clean up
  (EndSwordSwing, EndStandKind, ...). **RunPlayerKindExit** says what it does. Both (b) slices found this
  independently.
* 0x8012E364 / g_PlayerSquash (part 1): Player +0x188 is also the assimilate gauge (filled by square-mashing in the
  Fusion throw), not only a squash value; the squash reading of func_8012E364 stands for what it does with it.
* 0x801495C4 (part 1: IntoParentFrame, L): it runs ObjLocalToWorld and then ProjectPointOtz on a 16.16 point in place,
  so it yields a screen point; **ObjPoint16ToScreenOtz** fits (its twin 0x8014964C, ObjPoint16ToScreen, is in (b)).
* Not a naming matter, for the record: func_80149290 (matched, so the original's code) saves the model's +0x4C twice
  and restores +0x50 (the z translation) with the y value.
