# Stage survey, part 2 of 2 (r275)

Continues `docs/stage_survey.md`; method, names, the timeline and the shared patterns are in `docs/stage_survey.md`.

## Chapter: archive SC04

Progress about 640-780.

### SC04_000
* **Place:** unknown field map with talkable characters, chests and a respawning enemy (M). Story hub of the
  0x2F8-0x30C stretch: sets progress 0x2F8 (760) at the end of an arrival cutscene, 0x302 (770) after an effect
  sequence, 0x30C (780) after handing over three items (H). The entry step sets flag 0xC7 and calls
  func_800291F0(4, 0xC7), sound command 6 (H).
* **Size:** 176 functions (own ~45; shared: F013, F023, F024, F030, F031, F035, F065, F077, F103, F104, F105, S-shapes;
  P01-P03).
* **Actors:**
  * A1: F024 (pickup of kind 0x128 that raises max BP by 5 and refills BP, sound 0xBFE, guarded by GetVar(+0x3A)).
    A2-A4: F013 (effect actors that hide / show Musashi). A9-A10: F023 (flag-indexed treasure giver). A12: F030
    (sprite effect, sound 0xAA0). A13: F031 (talk NPC, child kind 0x1E3). A11: F103 (respawning spinning enemy, see
    families). 0x801822F0: F104/F105 (warp flash / sparkle swarm, see families).
  * Flag-0xDA object 0x8017F224-0x8017F3F4: set-up frees itself once flag 0xDA is set; talk marker opens when the
    ground distance to Musashi is < 0x2401 (H); talk runs script D_80187040; when its event ends with +0x34 set it sets
    flag 0xDA and frees itself (H); while +0x10A is set it climbs 2 units a frame shaking and stops sound 0xB1D (via
    SoundRequest(4, 0xB1D)) after 0xE1 units (H; what it is: unknown).
  * A5 (0x8017F468) + A6 (0x8017F714): timed random spawner of F065 props that drift and fade (M; ambient effect, L).
  * Cutscene walker 0x8017F98C (own, no dispatcher of its own): turns to a point, walks, waits, turns to Musashi, walks
    off past z < -0x398, SoundCmd1(1), func_8002AC00(0x17), func_8001AAA0(0x55); when its script ends:
    EndEvent, **SetProgress(0x2F8)**, BlendCameraThen(camera set-up 0x8017ECC8) (H).
  * Barrier actor 0x801803BC: its dispatcher clamps Musashi's z (D_80126B66) to <= 0x4FD (H: an invisible wall, M);
    set-up 0x80180418 frees it at progress >= 0x2F8, otherwise after 15 frames starts event D_80199618 (H): the
    arrival cutscene (M).
  * A8 (0x8017FCC8) the item-taker NPC: set-up 0x8017FEBC (freed at progress >= 0x30C; a talk marker 0x801806B8 that
    opens when Musashi is within 0x50 in z and 0x100 in x; child kind 0x246; variant +0x70 != 0 uses another model; at
    >= 0x302 two MoveImage calls swap textures) (H). Talk 0x80180738 runs script D_80199830 before 0x302 and
    D_80199868 after (H). 0x80180604: hit by kind 0x24 before 0x302 starts event D_8019979C (H).
    0x8017FD04 (event helper): spawns 6 SpawnKind205 effects per frame for 0x1F frames, then the two MoveImage swaps
    and **SetProgress(0x302)** (H). 0x80180020: spawns three kind-0x6D props one at a time with red / green / blue
    colour sets (M), raises them, plays sound 0xC1F and stops it; on event end with +0x34 set: **SetProgress(0x30C)**,
    frees itself and its children, removes inventory items 0x60, 0x61, 0x62 (func_800D0F4C, H).
    0x8018066C: true when all three items 0x60-0x62 are held (func_800D0F8C searches vars 0x2F-0x3A, H: ovl36);
    0x8017F204: item 0x60 held. 0x8018050C-0x801805B0: a prop that scales in by rsin, then out and frees (H).
* **Events / scripted scenes:** arrival cutscene (auto, progress < 0x2F8) -> 0x2F8; effect sequence -> 0x302 (H);
  item hand-over (three items 0x60-0x62) -> 0x30C (H). Player-action handlers 0x8017EB98 (hide Musashi, EndScene),
  0x8017EBE8 (NextState on every kind-0x3AF actor), 0x8017EC64 (wait until no kind 0x3AF remains) (H).
  0x8017F450 returns 0x55 at progress >= 0x2F8, else 0x54 (H; use unknown).
* **Puzzles / mechanisms:** the three-item check (M).
* **Exits:** no RequestMapChange in own code; P01 exit steps only (H).
* **Sound:** 0xC1F (props rising), 0xB1D stopped, 0x662 / 0x98A (F103), sound command 6 on entry (H).
* **Unknown / notes:** camera 0x8017EE5C toggles between two preset values with pad bits 0-1 and clamps the focus
  to a box (H). progress.txt's set(0x5A) here comes from F023 (0x80180A68: SetProgress(0x5A) and flag 0xEA when the
  treasure's flag id is 0x54), shared code not specific to this stage (H). A7 (0x8017FC8C) has no handlers here.

#### Names: SC04_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E7B4 | func_sc04_000_8017E7B4 | RoomEntryStart | P01 entry step + SetFlag(0xC7), sound cmd 6 | M |
| 0x8017EBE8 | func_sc04_000_8017EBE8 | AdvanceWarpActors | NextState on every kind 0x3AF | M |
| 0x8017EC64 | func_sc04_000_8017EC64 | WaitWarpActorsGone | NextPlayerActionHandler when no kind 0x3AF | M |
| 0x8017ECC8 | func_sc04_000_8017ECC8 | RoomCameraInit | camera targets + SetCameraUpdate | H |
| 0x8017ED64 | func_sc04_000_8017ED64 | RoomCameraInitNear | same with distance 0x12C | H |
| 0x8017EE5C | func_sc04_000_8017EE5C | RoomCameraToggle | pad toggles preset, clamps focus | M |
| 0x8017F204 | func_sc04_000_8017F204 | HasItem60 | func_800D0F8C(0x60) | M |
| 0x8017F224 | func_sc04_000_8017F224 | FlagDaObjInit | SetupActor, flag 0xDA, talk marker | M |
| 0x8017F324 | func_sc04_000_8017F324 | FlagDaObjWait | sets flag 0xDA on event end, rises | M |
| 0x8017F3F4 | func_sc04_000_8017F3F4 | FlagDaObjTalkCheck | ground distance < 0x2401 | M |
| 0x8017F450 | func_sc04_000_8017F450 | PickByProgress2F8 | 0x55 / 0x54 by progress | H |
| 0x8017F98C | func_sc04_000_8017F98C | ArrivalWalker | walk script, SetProgress(0x2F8) | M |
| 0x8017FD04 | func_sc04_000_8017FD04 | EventSmokeAndSwap | 6 x SpawnKind205, MoveImage, SetProgress(0x302) | M |
| 0x8017FEBC | func_sc04_000_8017FEBC | ItemTakerInit | set-up, progress 0x30C / 0x302 | M |
| 0x80180020 | func_sc04_000_80180020 | ItemTakerReceive | three props, SetProgress(0x30C), takes items | M |
| 0x801803BC | func_sc04_000_801803BC | BarrierMain | clamps player z, dispatcher | M |
| 0x80180418 | func_sc04_000_80180418 | BarrierInit | freed at >= 0x2F8 | M |
| 0x801804B4 | func_sc04_000_801804B4 | BarrierStartEvent | StartEvent after 15 frames | H |
| 0x80180548 | func_sc04_000_80180548 | PropScaleIn | rsin scale up | H |
| 0x801805B0 | func_sc04_000_801805B0 | PropScaleOut | rsin scale down, FreeProp | H |
| 0x80180604 | func_sc04_000_80180604 | ItemTakerOnHit | hit kind 0x24 -> event | M |
| 0x8018066C | func_sc04_000_8018066C | HasThreeItems | items 0x60-0x62 | M |
| 0x801806B8 | func_sc04_000_801806B8 | ItemTakerTalkCheck | box test on player | M |
| 0x80180738 | func_sc04_000_80180738 | ItemTakerTalk | RunScript by progress 0x302 | H |
| 0x80182408 | func_sc04_000_80182408 | WarpFlashWaitSound | TickTimer, table sound | M |
6 more own functions not proposed.

### SC04_002
* **Place:** unknown field map with two entrances (M) and a gate opened by an event (flag 0xDB); no progress
  values (H). Entry steps set flag 0xC8 (one entrance) or 0xC9 (the other), func_800291F0(4, flag), sound command 6
  and install spawn lists D_8018C88C / D_8018C9CC (H).
* **Size:** 266 functions (own ~12; shared: F008, F011, F013, F023, F024, F030, F035, F037, F041, F060, F061, F062,
  F063, F065, F066, F106, F107, S-shapes; P01-P03).
* **Actors:**
  * A1: F024 (max-BP-up pickup). A2-A4: F013. A5-A6: F062. A7-A8: F060 / F065 spawner and drifting props. A9-A10:
    F041. 0x80181368-0x80181B0C: F061 (sounds 0xB6B, 0xA9C, 0x7E4). A12-A14: F011 / F063 / F008 / F037. A15-A16:
    F060 (kind 0x1EB children). A17: F030.
  * A11 (0x80182E64): F106, the large kind-0x1FC enemy (scaled 1.5) that shoots kind-0x20 projectiles in bursts and,
    in the +0x70 variant, lifts and throws F107 blocks (kind 0x239). Two own state handlers in its block:
    0x80182FBC (wait on a timer, then turn: F106 helpers 0x80182618 / 0x80181FE0) and 0x80183008 (two-step: when its
    animation id +0x94 is 0xE and +0x72 bit 0x400 is clear wait 8 frames, else turn toward a heading from 0x80182808)
    (H); both run the contact check 0x80182BA4.
  * Gate 0x80180090 / 0x80180190 (own): freed when flag 0xDB is set; talk marker (S3 0x80180258) opens an event
    (script D_8018C4F0 via S12 0x80180158); when the event ends with +0x34 set it sets flag 0xDB, stops sound 0xB1D
    and frees itself; while +0x10A is set it rises 2 units a frame, shaking, up to 0x120 units (H). Same pattern as
    SC04_000's flag-0xDA object (M: a gate that rises). 0x80180070: inventory item 0x61 held (func_800D0F8C, H),
    probably the gate's key test used by the script (L).
  * Barrier dispatcher 0x8017FFF0 (own): clamps Musashi's x to >= -0x580 and runs table D_8018C560 (H).
* **Events / scripted scenes:** the gate event only (H).
* **Puzzles / mechanisms:** gate needing item 0x61 (L for the link between the two).
* **Exits:** none in own code; P01 exit steps (H).
* **Sound:** 0xB1D stopped (gate), family sounds; sound command 6 on entry (H).
* **Unknown / notes:** two camera set-ups 0x8017FB28 / 0x8017FBC4 (distance 0x4B0, angle 0x155 / 0x1C7); 0x8017FD38
  toggles a preset with pad bits 0-1 and tilts the camera angle with the focus y (H). 0x801802B4 returns 0x55 (H),
  the same constant SC04_000 0x8017F450 returns at progress >= 0x2F8.

#### Names: SC04_002
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F7C8 | func_sc04_002_8017F7C8 | RoomEntryStartA | SetFlag(0xC8), spawn lists | M |
| 0x8017F838 | func_sc04_002_8017F838 | RoomEntryStartB | SetFlag(0xC9), spawn lists | M |
| 0x8017FB28 | func_sc04_002_8017FB28 | RoomCameraInit | camera targets + SetCameraUpdate | H |
| 0x8017FBC4 | func_sc04_002_8017FBC4 | RoomCameraInitAlt | same, angle 0x1C7 | H |
| 0x8017FD38 | func_sc04_002_8017FD38 | RoomCameraToggle | pad toggle, angle from focus y | M |
| 0x8017FFF0 | func_sc04_002_8017FFF0 | BarrierMain | clamps player x, dispatcher | M |
| 0x80180070 | func_sc04_002_80180070 | HasItem61 | func_800D0F8C(0x61) | M |
| 0x80180090 | func_sc04_002_80180090 | GateInit | flag 0xDB, talk marker | M |
| 0x80180190 | func_sc04_002_80180190 | GateWait | sets flag 0xDB, rises | M |
| 0x80182FBC | func_sc04_002_80182FBC | BlockThrowerWaitTurn | timer then turn (F106 helpers) | M |
| 0x80183008 | func_sc04_002_80183008 | BlockThrowerTurn | two-step turn | M |
1 more own function (0x801802B4) not proposed.

### SC04_003
* **Place:** unknown field map with two entrances (entry steps set flag 0xCA or 0xCB, func_800291F0(4, flag),
  sound command 6; H) and a fight that is rewarded when the enemies are gone (F108, M). No progress values of its
  own (progress.txt's set(0x5A) is F023's shared code, H).
* **Size:** 133 functions (own 3; shared: F011, F013, F023, F035, F065, F106, F107, F108, S-shapes; P01-P02; the map
  renderer at 0x8017BEBC is the S26 variant, not P03).
* **Actors:**
  * A1 (0x8017D578): talk NPC (S20 set-up 0x8017D5B4, talk marker F108 0x8017D698: distance^2 < 0x1001 and Musashi
    idle; talk script D_80185CA4 via S12) (H).
  * A2-A3: F065 spawner + drifting props. A3-A4 (0x8017DC20-0x8017E39C): F108, the enemy-clear reward light: once no
    actor of kinds 0x1FC / 0x1DC / 0x210 / 0x219 remains (its variant 0) it sets its flag, starts an event, grows a
    sprite with sounds 0x7F5 / 0x7F6 and spawns kind 0x8E (see families). Own helper 0x8017DDDC is its trigger:
    SetFlag(D_80190C90[i], 1), copies the event id D_80190CCC[i] into a small script and starts it (H).
  * 0x8017F150-0x80180A78 (A5 dispatcher 0x80180394): F106 (kind-0x1FC block-throwing enemy) with three S2 copies of
    its handlers; 0x80180B10-0x80181454: F107 (thrown kind-0x239 blocks). A6-A7: F011. A8-A9: F023 (treasure).
* **Events / scripted scenes:** the reward event of F108 (H).
* **Puzzles / mechanisms:** clear-the-room reward (F108, M).
* **Exits:** none in own code (H).
* **Sound:** family sounds only (0x7F5, 0x7F6, 0xB6B, 0x83A, 0x83B, 0xB3F, 0xBCB) (H).
* **Unknown / notes:** which F108 variant this room uses is data (+0xDC record) (H).

#### Names: SC04_003
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD9C | func_sc04_003_8017CD9C | RoomEntryStartA | SetFlag(0xCA), sound cmd 6 | M |
| 0x8017CE0C | func_sc04_003_8017CE0C | RoomEntryStartB | SetFlag(0xCB), sound cmd 6 | M |
| 0x8017DDDC | func_sc04_003_8017DDDC | RewardLightTrigger | SetFlag(table), StartEvent | M |

### SC04_004
* **Place:** unknown field map with two entrances (entry steps set flag 0xCC or 0xCD, func_800291F0(4, flag), sound
  command 6; H); enemy room of the same set as SC04_002 / SC04_003 (shares F106 / F107 / F062, H). No progress values.
* **Size:** 189 functions (own 5; shared: F008, F011, F013, F023, F024, F030, F035, F037, F062, F063, F065, F106,
  F107, F109, S-shapes; P01-P03).
* **Actors:**
  * A1: F024 (max-BP pickup). A2-A4: F013. A5-A6: F062 (own copies 0x8017EFF4 / 0x8017F07C of its helpers: 0x8017EFF4
    plays sounds 0x451 / 0x7EB, H). A7: F065 spawner.
  * A8-A9: F106 (kind-0x1FC block thrower) + F107 blocks; own handler 0x80181968 is a copy of F106's "lift a block"
    state (timer, spawn block via 0x80180750, then throw via 0x80180878, contact check 0x80181130) (H).
  * A11 (0x80182728): F109, the leaping enemy (approach, lunge, splash sound 0x83C on water) (see families).
  * A12: F063 / F037 / F008. A13: F030.
* **Exits:** none in own code (H).
* **Sound:** family sounds (0x83C, 0xA9D, 0xA9E, 0x98A, 0x83A, 0x83B, 0xB3F, 0xBCB) (H).
* **Unknown / notes:** nothing room-specific beyond the entry flags (H).

#### Names: SC04_004
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E778 | func_sc04_004_8017E778 | RoomEntryStartA | SetFlag(0xCC), sound cmd 6 | M |
| 0x8017E7E8 | func_sc04_004_8017E7E8 | RoomEntryStartB | SetFlag(0xCD), sound cmd 6 | M |
| 0x80181968 | func_sc04_004_80181968 | BlockThrowerLift | timer, spawn block, throw | M |
2 more own functions not proposed.

### SC04_005
* **Place:** unknown field map, two entrances (entry steps set flag 0xCE or 0xCF, func_800291F0(4, flag), sound
  command 6; H); third of the gate rooms (flag 0xDC gate, item 0x62), same set as SC04_000 / SC04_002 (M).
  No progress values of its own (set(0x5A) is F023's, H).
* **Size:** 243 functions (own ~10; shared: F013, F023, F024, F035, F041, F060, F061, F064, F065, F108-like F110,
  S-shapes; P01-P03).
* **Actors:**
  * A1: F024. A2-A4: F013. A6: F060 spawner. A7-A9: F041. 0x8018259C-0x80182D40: F061. A12-A13: F023 (treasure).
    0x80183E14-0x80184458: F064 (sounds 0xB41 / 0xB42, child kind 0x244). A13-A15: F060 (kind 0x1EB children; own
    copies 0x80184E78 / 0x80184F08 / 0x801853A8 of three of its handlers).
  * A9-A11: F110 (enemy-clear reward light like F108, trigger 0x8018093C, plus an actor that wakes kind-0x210
    enemies near it, sound 0x84B; see families).
  * Gate 0x8017F290 / 0x8017F390 (own): freed when flag 0xDC is set; talk script D_8018B844; on event end with
    +0x34 set: SetFlag(0xDC, 1), stops sound 0xB1D; rises while +0x10A is set (H). 0x8017F270: item 0x62 held
    (func_800D0F8C, H).
  * A5 (0x8017F4BC): talk NPC, set-up 0x8017F4F8, talk script D_8018B908 (H).
* **Events / scripted scenes:** gate event, NPC talk, reward event (H).
* **Puzzles / mechanisms:** gate with item 0x62 (L for the link), clear-the-room reward (M).
* **Exits:** none in own code (H).
* **Unknown / notes:** the three gate rooms SC04_000 / 002 / 005 test items 0x60 / 0x61 / 0x62 and set flags
  0xDA / 0xDB / 0xDC; SC04_000's NPC then takes all three items (H for each test; M for the overall reading).

#### Names: SC04_005
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EA94 | func_sc04_005_8017EA94 | RoomEntryStartA | SetFlag(0xCE) | M |
| 0x8017EB04 | func_sc04_005_8017EB04 | RoomEntryStartB | SetFlag(0xCF) | M |
| 0x8017F270 | func_sc04_005_8017F270 | HasItem62 | func_800D0F8C(0x62) | M |
| 0x8017F290 | func_sc04_005_8017F290 | GateInit | flag 0xDC, talk marker | M |
| 0x8017F390 | func_sc04_005_8017F390 | GateWait | SetFlag(0xDC), rises | M |
| 0x8017F4F8 | func_sc04_005_8017F4F8 | TalkNpcInit | SetupActor, talk marker | M |
4 more own functions not proposed.

### SC04_006
* **Place:** unknown field map, two entrances (entry steps set flag 0xD0 or 0xD1, func_800291F0(4, flag), sound
  command 6; H); small enemy room. No progress values of its own (set(0x5A) is F023's, H).
* **Size:** 86 functions (own 6; shared: F023, F030, F033, F065, F077, F103, S-shapes; P01-P03).
* **Actors:**
  * A1-A2: F065 spawner / props; F033 helpers 0x8017DB64-0x8017DFC8. A3-A4: F023 (treasure). A6: F030.
  * A5 (0x8017E854): F103, the respawning spinning enemy (sounds 0x662, 0x98A); own handler 0x8017E948 replaces
    F103's "hidden, wait" state (in SC04_000 the matching own shape is 0x801810B0) (M).
  * 0x8017D5B4 (own): a collision-only object: model, flags 0x40, hit box D_801836F8, no drawing set-up (H; what it is:
    unknown).
* **Exits:** none in own code (H).
* **Unknown / notes:** camera 0x8017D268 toggles a preset with pad bits 0-1 and sets the camera yaw from the focus x
  ((x - 0x4C0) * 1024 / 3648 + 0x600) (H); 0x8017D3E4 is its smoothing / placement step (H).

#### Names: SC04_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD9C | func_sc04_006_8017CD9C | RoomEntryStartA | SetFlag(0xD0) | M |
| 0x8017CE0C | func_sc04_006_8017CE0C | RoomEntryStartB | SetFlag(0xD1) | M |
| 0x8017D268 | func_sc04_006_8017D268 | RoomCameraFollowX | yaw from focus x, pad toggle | M |
| 0x8017D3E4 | func_sc04_006_8017D3E4 | RoomCameraApply | smooth + place camera | M |
| 0x8017D5B4 | func_sc04_006_8017D5B4 | HitBoxObjInit | model + hit box only | M |
| 0x8017E948 | func_sc04_006_8017E948 | SpinnerHiddenWait | F103 hidden-state copy | M |

### SC04_007
* **Place:** unknown field map, two entrances (entry steps set flag 0xD2 or 0xD3, func_800291F0(4, flag), sound
  command 6; H); enemy room of the SC04_002-005 set (shares F108 / F109 / F110 / F060, H). No progress values of its
  own (set(0x5A) is F023's, H).
* **Size:** 200 functions (own 3; shared: F013, F023, F024, F035, F041, F060, F065, F066, F108, F109, F110,
  S-shapes; P01-P03).
* **Actors:**
  * A1: F024 (max-BP pickup). A2-A4: F013. A5 (0x8017EEFC): talk NPC (S-shapes, script D_80189838, H). A6: F065.
  * A7: F108 (enemy-clear reward light, sounds 0x7F5 / 0x7F6). A8-A9: F060 / F066 (kind 0x1EB children).
  * A10-A11: F109 (leaping enemy, 0x83C / 0xA9D / 0xA9E) and F110 (wakes kind 0x210, 0x84B).
  * A12-A13: F023 (treasure); A13-A15: F041.
* **Exits:** none in own code (H).
* **Unknown / notes:** own code is only the two entry steps and a camera set-up (H).

#### Names: SC04_007
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E778 | func_sc04_007_8017E778 | RoomEntryStartA | SetFlag(0xD2) | M |
| 0x8017E7E8 | func_sc04_007_8017E7E8 | RoomEntryStartB | SetFlag(0xD3) | M |
| 0x8017EAD8 | func_sc04_007_8017EAD8 | RoomCameraInit | camera targets + SetCameraUpdate | M |

### SC04_008
* **Place:** unknown field map, one entrance (entry step sets flag 0xD6, func_800291F0(4, 0xD6), sound command 6;
  H); outdoor-looking map with falling streaks (M; rain or wind, L). No progress values (H).
* **Size:** 48 functions (own 4; shared: F064, F065, F078, S-shapes; P01-P03).
* **Actors:**
  * A1-A2: F078 (owned elsewhere). A3-A4: F065 spawner / props. 0x8017E394-0x8017E9D8: F064 (sounds 0xB41 / 0xB42,
    child kind 0x244).
  * 0x8017D3F8 (own): plays sound 0x98C once, then each frame draws 8 white semi-transparent lines (0x200 x 0x100
    diagonal) that move -0x40 in x and +0x20 in y and respawn at random x (H): a weather streak effect (M; rain, L).
* **Exits:** none in own code (H).
* **Unknown / notes:** camera set-up 0x8017D08C and camera step 0x8017D168 (S75 placement) (H).

#### Names: SC04_008
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD9C | func_sc04_008_8017CD9C | RoomEntryStart | SetFlag(0xD6) | M |
| 0x8017D08C | func_sc04_008_8017D08C | RoomCameraInit | camera targets + SetCameraUpdate | M |
| 0x8017D168 | func_sc04_008_8017D168 | RoomCameraStep | calls S75 placement | M |
| 0x8017D3F8 | func_sc04_008_8017D3F8 | DrawRainStreaks | 8 LineF2, sound 0x98C | M |

### SC04_009
* **Place:** unknown field map, one entrance (entry step sets flag 0xD7, func_800291F0(4, 0xD7), sound command 6;
  H) with a two-target switch puzzle (M). No progress values of its own (set(0x5A) is F023's, H).
* **Size:** 73 functions (own 10; shared: F023, F031, F035, F065, S-shapes; P01-P03).
* **Actors:**
  * A2 (0x8017D57C) switch pair: the parent 0x8017D6A8 (not spawned once flag 0xDD is set) spawns two kind-0x286
    targets and counts 2 (H); each target 0x8017D808 sits at a table position by its index, and when struck
    (0x8017D5B8) plays sound 0xC5F, swaps its model / scale (0x8017D638) and lowers the parent's count (H). At count 0
    the parent sets **flag 0xDD** and starts event D_8018259C, then frees itself (H). With flag 0xDD already set the
    targets start in the struck look (H).
  * A1 (0x8017D450): a slider used by the event (M): 0x8017D48C stores its start; 0x8017D4AC slides +0x30 in z, then
    sinks 0xC0 with sound 0xA48 (stopped at the end) and hides; returns 1 when done (H): a door or block that opens (M).
  * A3-A4: F065. A5-A6: F023 (treasure). A7: F031 (talk NPC, child kind 0x1E3, script D_80194FD4).
* **Events / scripted scenes:** switch event D_8018259C (H).
* **Puzzles / mechanisms:** hit both targets to open the way (M).
* **Exits:** none in own code (H).

#### Names: SC04_009
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD9C | func_sc04_009_8017CD9C | RoomEntryStart | SetFlag(0xD7) | M |
| 0x8017D0C8 | func_sc04_009_8017D0C8 | RoomCameraInit | camera set-up | M |
| 0x8017D48C | func_sc04_009_8017D48C | SliderInit | stores start z / y | M |
| 0x8017D4AC | func_sc04_009_8017D4AC | SliderOpen | slide, sink, sound 0xA48 | M |
| 0x8017D5B8 | func_sc04_009_8017D5B8 | SwitchTargetOnHit | sound 0xC5F, count-- | M |
| 0x8017D5E4 | func_sc04_009_8017D5E4 | SwitchTargetSetStruck | clears hit, count-- | M |
| 0x8017D638 | func_sc04_009_8017D638 | SwitchTargetStruckLook | model / scale / script | M |
| 0x8017D6A8 | func_sc04_009_8017D6A8 | SwitchPairInit | spawns 2 x 0x286, flag 0xDD | M |
| 0x8017D768 | func_sc04_009_8017D768 | SwitchPairWait | count 0 -> flag 0xDD, event | H |
| 0x8017D808 | func_sc04_009_8017D808 | SwitchTargetInit | table position, flag 0xDD | M |

### SC04_010
* **Place:** unknown field map, one entrance (entry step sets flag 0xD8, sound command 6; H) with a fixed camera
  path (StartCameraPan / SetCameraViewFromList on D_8018B798, H). Tests progress 0x384 (900): its main object is not
  spawned at progress >= 0x384 (H), i.e. this map is revisited later than this chapter's range (M).
* **Size:** 51 functions (own ~14; shared: F065, S-shapes; P01-P03).
* **Actors:**
  * A3 (0x8017D808) glowing object 0x8017DA58: spawns a kind-0x288 child, rejected at progress >= 0x384, has a glow
    sprite (0x8017D5DC) whose colour pulses (0x8017D6CC) (H). When struck (0x8017D560, A2): **SetFlag(0xBC, 1)**,
    removes the glow, starts event D_80181D00, sound 0xAAF (H). 0x8017D7C4: frees the child, sound 0xA49 (H);
    0x8017D7A0 spawns kind 0x2D6 (H).
  * Kind-0x288-like effect 0x8017D844 / 0x8017D904: a model at fixed (0, -0x880, 0x1330) that grows to scale
    0x1400, holds 0x60 frames, shrinks and frees (H). 0x8017DB9C: a second fixed model at (0, -0x7E0, 0x129C) (H).
  * A4-A5: F065.
* **Events / scripted scenes:** the struck-object event (flag 0xBC) (H). 0x8017D08C: a scripted entry
  (StartPlayerActionScript D_80181C84 + sound command 0x1D) (H).
* **Exits:** none in own code (H).

#### Names: SC04_010
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD9C | func_sc04_010_8017CD9C | RoomEntryStart | SetFlag(0xD8) | M |
| 0x8017D08C | func_sc04_010_8017D08C | RoomScriptedEntry | player script + sound 0x1D | M |
| 0x8017D15C | func_sc04_010_8017D15C | RoomCameraPan | StartCameraPan | H |
| 0x8017D190 | func_sc04_010_8017D190 | RoomCameraFixed | SetCameraViewFromList | H |
| 0x8017D560 | func_sc04_010_8017D560 | OrbOnHit | SetFlag(0xBC), event, sound 0xAAF | M |
| 0x8017D5DC | func_sc04_010_8017D5DC | OrbSpawnGlow | sprite at object | M |
| 0x8017D6CC | func_sc04_010_8017D6CC | OrbPulseGlow | colour ramps | H |
| 0x8017D7A0 | func_sc04_010_8017D7A0 | OrbSpawnEffect | SpawnActor(0x2D6) | H |
| 0x8017D7C4 | func_sc04_010_8017D7C4 | OrbFreeChild | sound 0xA49 | M |
| 0x8017D844 | func_sc04_010_8017D844 | BurstInit | fixed-position model | M |
| 0x8017D904 | func_sc04_010_8017D904 | BurstGrowShrink | scale up, hold, down | H |
| 0x8017DA58 | func_sc04_010_8017DA58 | OrbInit | progress 0x384, kind 0x288 | M |
| 0x8017DB9C | func_sc04_010_8017DB9C | FixedModelInit | fixed-position model | M |

### SC04_011
* **Place:** a boss arena (M): one large multi-part enemy driven by a shared state block (D_801EFC48 / D_801EFC4C
  part table), a damage counter with a cap, camera shakes, boss-stage families F017 / F018 (H for each piece). No
  flags or progress values in own code (H); the outcome must be set by event scripts (data, unknown).
* **Size:** 434 functions (own ~259; shared: F013, F017, F018, F022, F029, F062, F065, F087, F098, F104, F105,
  S-shapes; P01-P02).
* **Actors:**
  * A1-A4: F013 / F062 / F022 / F029 (owned elsewhere); A5-A6 with own copies 0x8017EA44 / 0x8017EB10 of F062
    helpers (sounds 0x451 / 0x7EB) (H).
  * Boss (0x80180228-0x801882F8, own, ~200 functions): phase handlers return 1 when done (M): 0x80180660 timer with
    camera shake every 16 frames; 0x801807CC swings a part (D_801EFC4C[D_801EFD20]) and plays 0x9C3 as it passes
    heading -0x200; 0x80180A20 timed charge with sounds 0x9C2 / 0x9C4; 0x80180B24, 0x80180F30 (spawns kind 0x3D8,
    0x992, camera shake), 0x80181220, 0x801813FC (ground-distance tests on Musashi, 0x992 twice) are attack moves;
    0x80181948 / 0x80181BA0 / 0x801821E4 (spawns kind 0x2B6, 0x88B) / 0x801827DC (0x907) more phases (H for the
    calls, M for "attack phases"). Damage 0x80186940: adds the hit to D_801EFC48+0x60, ShowDamage, plays 0x906 while
    under the cap D_801EFD28, 0xBA9 when it reaches it (H): the boss's HP (M). Start-up 0x80186F44 spawns kinds 0x214,
    0x255, 0x257, 0x200 (H). Defeat-looking scene 0x80182DCC: StartEvent D_801945A4, rocks the boss with rsin, runs
    parts helpers, frees the shadow (M).
  * Parts and effects A8-A20 (own): many child kinds (0x272 x6 with sound 0x84C, 0x276, 0x256, 0x215, 0x2DD,
    0x2A9) (H); A20 0x8018BDCC-0x8018CF2C is a 20-state controller (M).
  * A23: F104 / F105 (warp flash, own copy 0x8018D66C of its sound step).
* **Events / scripted scenes:** 0x80187068: when Musashi passes x > 0x200 and z >= 0x5F9 sets message numbers
  (4 -> 0, 0xC -> 1), starts event D_80194378, then sets up the damage meter (0x8017CACC(.., 4, 0xB4)) and plays
  0xB37 (H): the boss intro (M). 0x8018C4BC: event D_801948A8 when Musashi reaches z >= 0x14FF above y -0x780 (H).
  0x8018315C waits on func_8001AAA0(0x68) (H; meaning unknown).
* **Boss:** phases above; ends when the damage reaches the cap (0xBA9), then the 0x80182DCC scene (M). HP value and
  phase order are data (unknown).
* **Exits:** 0x801832B4 RequestMapChange(D_80194270) (H; destination unknown, called from a data table).
* **Sound:** 0x906 / 0xBA9 hit / kill, 0xB37 at the intro (L: boss music), 0x992 stomp-like, 0x84C (H for ids).
* **Unknown / notes:** too large to name every function in the time; 0x80180200 / 0x80180214 set the camera
  distance to 0x2EE / 0x4B0 (H).

#### Names: SC04_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F9A8 | func_sc04_011_8017F9A8 | RoomEntryStart | P01 entry, sound cmd 6 | M |
| 0x80180200 | func_sc04_011_80180200 | CameraDistNear | camera +0x14 = 0x2EE | H |
| 0x80180214 | func_sc04_011_80180214 | CameraDistFar | camera +0x14 = 0x4B0 | H |
| 0x80180660 | func_sc04_011_80180660 | BossWaitShake | timer + StartCameraShake | M |
| 0x801807CC | func_sc04_011_801807CC | BossSwingPart | part heading, sound 0x9C3 | M |
| 0x80180A20 | func_sc04_011_80180A20 | BossChargeTimer | 0x9C2 / 0x9C4 timer | M |
| 0x80182DCC | func_sc04_011_80182DCC | BossDefeatScene | StartEvent D_801945A4, rocking | L |
| 0x801832B4 | func_sc04_011_801832B4 | RoomExit | RequestMapChange | H |
| 0x80186940 | func_sc04_011_80186940 | BossTakeDamage | damage counter, 0x906 / 0xBA9 | M |
| 0x80186F44 | func_sc04_011_80186F44 | BossInit | model + child spawns | M |
| 0x80187068 | func_sc04_011_80187068 | BossIntroTrigger | position test, StartEvent, meter | M |
| 0x8018C4BC | func_sc04_011_8018C4BC | EventHighLedge | position test, StartEvent | M |
About 245 more own functions not proposed.

### SC04_012
* **Place:** unknown map with swinging doors / gates and three exits (H); entered with sound command 7 (not 6) and
  flag 0x117 set (H). **Sets progress 0x2F0 (752)** once (0x8017D6E8, H) and tests 0x384 (900) (H), so it is
  visited both before SC04_000's 0x2F8 and much later (M).
* **Size:** 53 functions (own 12; shared: F065, F078, S-shapes; P01-P03).
* **Actors:**
  * Doors 0x8017D4CC (own): four variants by +0x70 with different models and hit boxes; at progress >= 0x2F0 they are
    set open (yaw 0xD00 / 0x300), otherwise variants 0-1 wait in state 2 and 2-3 in state 3 (H). 0x8017D7F0: when
    Musashi's z >= 0x6D0 plays sound 0xB40 once and swings the door by rsin to 0x300; 0x8017D894: when z >= 0x710
    swings the other pair (H): doors that open as Musashi walks up (M).
  * Arrival event 0x8017D3E0: 20 frames after spawn starts event D_80182154 if Musashi's z < 0x400, else
    D_801821A4; frees itself when done (H).
  * A2-A3: F078. A4-A5: F065.
* **Events / scripted scenes:** arrival event (two versions by entry side, H). Script helpers: 0x8017D6E8 returns 1
  if progress >= 0x2F0, else sets progress 0x2F0 and returns 0 (H); 0x8017D720 returns 1 once (sets flag 0x99) when
  progress >= 0x384 (H); 0x8017D930 returns 0x74 if flag 0x117 is set, else 0x53 (H).
* **Exits:** three S10 helpers: RequestMapChange(D_80182010), (D_80181FEC), (D_80182034) (H; destinations unknown).
  The exit step 0x8017CF5C skips SoundCmd1(1) when flag 0x117 is set (H).
* **Sound:** sound command 7 on entry, 0xB40 doors (H).
* **Unknown / notes:** 0x8017D028 calls func_8002931C(0x030C0000) before the exit timer (H; meaning unknown).

#### Names: SC04_012
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CDD8 | func_sc04_012_8017CDD8 | RoomEntryStart | SetFlag(0x117), sound cmd 7 | M |
| 0x8017CF5C | func_sc04_012_8017CF5C | RoomExitStep | flag 0x117 skips SoundCmd1 | M |
| 0x8017D028 | func_sc04_012_8017D028 | RoomExitPrep | func_8002931C, 10-frame timer | M |
| 0x8017D0BC | func_sc04_012_8017D0BC | RoomCameraInit | camera set-up | M |
| 0x8017D3E0 | func_sc04_012_8017D3E0 | EventArrival | StartEvent by player z | H |
| 0x8017D4CC | func_sc04_012_8017D4CC | DoorInit | 4 variants, progress 0x2F0 | M |
| 0x8017D6E8 | func_sc04_012_8017D6E8 | SetProgressOnce2F0 | SetProgress(0x2F0) | H |
| 0x8017D720 | func_sc04_012_8017D720 | CheckFlag99Late | progress 0x384, flag 0x99 | H |
| 0x8017D7F0 | func_sc04_012_8017D7F0 | DoorSwingA | z >= 0x6D0, sound 0xB40 | M |
| 0x8017D894 | func_sc04_012_8017D894 | DoorSwingB | z >= 0x710 | M |
| 0x8017D930 | func_sc04_012_8017D930 | PickByFlag117 | 0x74 / 0x53 | H |

### SC04_015
* **Place:** a village version (H: shares F068 / F071 / F007 / F009 with the village SC03_001 and F100 with the
  village variants; mapid test 0x3069 in shared code). Story: **sets progress 0x29E (670)** after an event and
  **0x2A8 (680)** in a map-change helper (H); the shared village code sets 0x3AC at >= 0x3A2 (F068, H).
* **Size:** 266 functions (own 49; shared: F007, F009, F068 (67 shapes), F071, F100, S-shapes; dup3 villager
  pairs). Compared with SC03_001: the village core (F068, F071) is the same code; the own part is this version's
  villagers and events (H).
* **Actors:**
  * Villagers (own, dup3 shapes 0x8017F9B4 / 0x8017FA78 and copies at 0x8017FC7C / 0x8017FD40 ...): model + talk
    marker that opens within distance^2 0x4001 unless the villager's flag is set; talk runs a script (D_80188968 ...)
    (H). Script helpers set the "talked" flags: 0x8017F990 flag 0x13A, 0x8017FC58 0x139, 0x8017E014 0x13C,
    0x8017FF20 0x13B and 0x116 (H).
  * Event NPC 0x8017E0CC: waits for g_PlayerFlags bit 0x08000000, starts event D_8018845C, then **SetProgress(0x29E)**
    and turns into a talkable NPC (0x8017DF20, talk check 0x8017E038 gated by flag 0x13C) (H).
  * Controller 0x8017E2CC: while D_801C8B74 is set, starts event D_80188590 when func_800CF8B4() and Musashi's flag
    0x8000000 allow it (H; trigger meaning unknown); otherwise updates two helpers 0x8017EA2C / 0x8017ED28 (H).
  * Spawner 0x8017F748: spawns kinds 0x66, 0x65, 0x14C and eight kind-0x23B actors (index 0-7) (H).
  * 0x8017F600: an object that reacts to a hit of kind 0x23 (sound 0x76D) and is replaced by prop 0x4E when its
    parent reaches state 1 / step 2 (H).
* **Events / scripted scenes:** event D_8018845C -> progress 0x29E; event D_80188590 (H).
* **Exits:** 0x8017F708: RequestMapChange(D_801882CC), **SetProgress(0x2A8)**, func_8014B034(0x5A), func_800290BC()
  (H; destination unknown). Village exit step 0x8017D7CC skips SoundCmd1(1) when var 0xCE is set (H).
* **Unknown / notes:** entry step 0x8017D610 clears bit 0x80 of D_80078EC0 and starts player action 0x8017D97C (H).

#### Names: SC04_015
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D610 | func_sc04_015_8017D610 | RoomEntryStart | StartPlayerAction, StartFade(0) | M |
| 0x8017D7CC | func_sc04_015_8017D7CC | RoomExitStep | var 0xCE skips SoundCmd1 | M |
| 0x8017DAB8 | func_sc04_015_8017DAB8 | RoomCameraInit | camera set-up | H |
| 0x8017DF20 | func_sc04_015_8017DF20 | EventNpcBecomeTalkable | talk marker after event | M |
| 0x8017E014 | func_sc04_015_8017E014 | SetFlag13C | SetFlag(0x13C) | H |
| 0x8017E038 | func_sc04_015_8017E038 | EventNpcTalkCheck | flag 0x13C, distance | M |
| 0x8017E0CC | func_sc04_015_8017E0CC | EventNpcWait | StartEvent, SetProgress(0x29E) | M |
| 0x8017E2CC | func_sc04_015_8017E2CC | VillageEventController | StartEvent D_80188590 | L |
| 0x8017F708 | func_sc04_015_8017F708 | ExitSetProgress2A8 | RequestMapChange, SetProgress(0x2A8) | H |
| 0x8017F748 | func_sc04_015_8017F748 | SpawnVillageActors | kinds 0x66 0x65 0x14C, 8 x 0x23B | M |
| 0x8017F990 | func_sc04_015_8017F990 | SetFlag13A | SetFlag(0x13A) | H |
| 0x8017F9B4 | func_sc04_015_8017F9B4 | VillagerTalk | RunScript / IsEventDone | M |
| 0x8017FA78 | func_sc04_015_8017FA78 | VillagerInit | model + talk marker | M |
| 0x8017FB40 | func_sc04_015_8017FB40 | VillagerTalkCheck | flag 0x13A, distance | M |
| 0x8017FC58 | func_sc04_015_8017FC58 | SetFlag139 | SetFlag(0x139) | H |
| 0x8017FF20 | func_sc04_015_8017FF20 | SetFlag13B116 | SetFlag(0x13B), (0x116) | H |
About 30 more own functions not proposed.

### SC04_016
* **Place:** a cutscene room (M): one long event script steers several kind-0x337 characters through flags
  0x125-0x133 used as signals, can be skipped with a pad button, then a map change (H for each piece). No progress
  values (H). The step table loads field file 3 (RequestFieldFileLoad(3), S2) (H).
* **Size:** 71 functions (own ~35; shared: F098, S-shapes; P01-P03).
* **Actors:**
  * Director 0x8017D118 (own, 145 lines): spawns kind-0x337 actors from SpawnDefs at fixed positions (variants 0-4
    ...) and plays sounds 0xB90 (H). 0x8017EE78: after a delay clears flags 0x125-0x12C, 0x130, 0x131, 0x133 and
    starts event D_80184A0C (H). 0x8017D588: while the event runs, unless a pad button (0x840) is pressed and
    func_800CF8B4() allows it, reacts to the signal flags: 0x125 camera cut D_8018492C, 0x126 / 0x131 / 0x133 change
    a character's script (and clear the flag), 0x127 picks a value -0x7300 / -0x7100; when the script ends, or on the
    skip button, moves on (H).
  * Character face animator 0x8017D6D8: on flags 0x129 / 0x12A runs image-queue requests (func_800183E0) at random
    intervals of 0x1E-0x3D / 0x23-0x42 frames, on 0x12B / 0x12C / 0x130 single image changes, 0x128 resets (H):
    texture swaps such as blinking or mouth frames (M).
  * 0x8017DA50 (sound 0xB91), 0x8017EFA4 (sound 0xB8F): other cutscene props (H for the sounds).
  * A2-A3: S2 shapes and F098 (owned elsewhere).
* **Events / scripted scenes:** event D_80184A0C with skip (H).
* **Exits:** S2 0x8017EF58 RequestMapChange(D_80183A0C) after the scene (H; destination unknown).
* **Unknown / notes:** which characters appear is data (kind 0x337 records) (H).

#### Names: SC04_016
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D118 | func_sc04_016_8017D118 | CutsceneDirectorInit | spawns kind 0x337 set | M |
| 0x8017D588 | func_sc04_016_8017D588 | CutsceneRunSignals | flag signals, skip button | M |
| 0x8017D6D8 | func_sc04_016_8017D6D8 | CutsceneFaceAnim | image requests on flags | M |
| 0x8017EE78 | func_sc04_016_8017EE78 | CutsceneStart | clears flags, StartEvent | H |
About 30 more own functions not proposed.

### SC04_018
* **Place:** a village version (H: shares F067 / F068 / F069 / F070 / F071 / F100 with the village SC03_001 and its
  variants; mapid test 0x3069 in shared code). Story: **sets progress 0x280 (640)** (helper 0x8017F1A8), **0x2B2
  (690)** after an event (0x8017FF70) and **0x2BC (700)** (0x8017E950) (H); villagers appear only from progress
  0x2A8 (H), so this version follows SC04_015 (0x29E / 0x2A8) (M). Shared village code also sets progress 100 and
  0x3AC (shop / item code S4 0x80189540, F068) (H; not specific to this map).
* **Size:** 525 functions (own code is F111, 52 shapes shared only with SC04_019; F112 with SC05_017; F067 (109
  shapes), F068, F069, F070, F071, F100, F101, S-shapes). Compared with SC03_001 the village core is the same; F111 /
  F112 are this version's villagers (H).
* **Actors:**
  * F111 villagers (0x8017E628-0x801877B0): each set-up places a model, sets a script and a talk marker; several are
    gated by progress (0x8017EAFC: needs >= 0x2A8; 0x8018001C: only for 0x2A8 <= progress < 0x2B2) and by a range test
    0x80184BAC(8, 0x14) (H; likely the in-game clock 8:00-20:00, L). 0x8017E8FC picks villager script D_80191110 or
    D_80191270 by progress < 0x2BC (H).
  * 0x8017FF70: waits for Musashi's flag bit 0x08000000, starts event D_80191744, **SetProgress(0x2B2)**, then the
    actor walks to D_8019171C (H) (same pattern as SC04_015's 0x8017E0CC).
  * 0x8017E950: makes the kind-0x22B actor advance (+0x34 = 1) and raises progress to 0x2BC if lower (H).
  * Script helpers: 0x8017F0D8 / 0x8017F108 swap flags 0x10C / 0x10D, 0x8017FA34 sets flag 0x107, 0x8017F1A8
    SetProgress(0x280) (H).
  * F112 handlers (show / place / script steps used by the villagers, see families). F067 sets flags 0x110, 0x113,
    0x115, 0x116 once each (shared code, H).
* **Events / scripted scenes:** event D_80191744 -> progress 0x2B2 (H); the rest is in scripts (data).
* **Exits:** S10 0x80180134 RequestMapChange(D_80190F88) (H; destination unknown), plus the village exits in shared
  code.
* **Unknown / notes:** the clock reading of 0x80184BAC / 0x80184BD0 is a guess (L).

#### Names: SC04_018
Own code is the family F111 (see G6_families.md); no other own functions.

### SC04_019
* Same code as SC04_018 (identical own code, F111 / F112 at the same addresses; H); differs only in data.

## Chapter: archive SC05

Progress about 920-1170.

### SC05_000
* **Place:** unknown; a small outdoor-looking room with a hazard swarm and one talker (L). The stage neither sets nor
  tests a progress value in a progress line, but its prop actor A2 picks its data by progress bands >= 0xC8 (200),
  >= 0x258 (600), >= 0x384 (900) (H), so the room is visited across the story (M).
* **Size:** 52 functions (own 9, lone-shared 16, family 3: F036; 6 actor dispatchers, 7 stubs; P01, P02, P03).
* **Actors:**
  * A1 (0x8017CFC4): an effect actor built on F036 (SpawnEffect / FreeEffect particle helpers) (M).
  * A2 (0x8017D6D0): a model prop; set-up 0x8017D754 (S7, shared with sc02_031, sc03_029, sc03_092, sc03_107,
    sc03_118/119) does AllocActorModel and then remaps its +0xDC value through one of three key/value tables
    (helper 0x8017D70C, S14) chosen by progress >= 0x384 / >= 0x258 / >= 0xC8 (H). L: an NPC or object whose look or
    behaviour changes with the story.
  * A3 (0x8017D828): a static model; set-up 0x8017D864 SetupActor(D_80181E28), func_8001D0E8(model, 0x7FFF, 0x7FFF),
    model +0x20 = D_80198064 (H); nothing else (8017D8CC stub, 8017D8D4 S8).
  * A4 (0x8017D8DC): a swarm spawner. State 0 (0x8017D918): RejectSpawn if flag 0x137 is set; otherwise 0x30 (48)
    SpawnActor(0x3C0) children, each with a random centre x 0x200-0x37F, z -0x1B0..-0x111, y -0x60, a random phase
    (+0xFC) and angular speed 0x20-0x5F (+0xFE) (H). State 1: when g_PlayerX >= 0x181 it starts event script
    D_80181EC0 (the z test `D_80126B66 > -0x80 || < 0x80` is always true, H: a coding slip); state 2 waits
    IsEventDone, EndEvent (H). 0x8017DB10 is the children's per-frame code (M: it uses the fields the spawner sets):
    each circles its centre with radius 0x100>>8 units (rsin/rcos), and when Musashi is inside a small box around it
    (dy -0xF..0x6F, dx +-0x1F) it is freed if PlayerFlag1000 is set, else, after his collision path crosses it once
    (PathHitsModel), it calls HitPlayer(1, 0x201D, 0x400, 0x10) (H). L: a swarm (bees / bats) that knocks Musashi
    about until flag 0x137 is set by the event.
  * A5 (0x8017DC9C): a talking NPC: set-up 0x8017DCD8 (S20: SetupActor, SetScript, SpawnTalkMarker), RunScript
    D_80181EA8 (S12), event wait (S25). A second set-up 0x8017DDBC (own) loads a model with StopMotion and
    SetScript(D_80181F24), scale 0x4000 (H); 0x8017DE70 is a script callback: when its target (+0x64) is within
    distance 64 of Musashi (DistSqToPlayer < 0x1001) it sets the target's state to 2 and resets the script VM (H).
  * A6 (0x8017DECC): a Musashi hit-reaction sequence (effect-state chain on the player object): 0x8017DF38 starts a
    rumble, ApplyQueuedHurt, turns him, sets a motion, an upward fall speed and PlaySe(0x451); 0x8017DFDC moves him
    through the air spawning effect 3 every other frame, StartCameraShake on hard landing; 0x8017E098 (S3, also
    sc03_028, sc07_002) lands him: DamagePlayerHp by +0xF2 (0x8017E1A0), ResetPlayerKind or SetPlayerKind4,
    SpawnEffect(2), DropTimedAbility (H). M: the "thrown in the air" hurt used by the swarm's HitPlayer kind 0x201D (L).
* **Events / scripted scenes:** event D_80181EC0 when Musashi passes x >= 0x181 while the swarm is up (H); NPC talk
  scripts D_80181EA8 / D_80181F24 (H). Which event sets flag 0x137 is in script data (unknown).
* **Exits:** P01 only; two exit-step variants, one with SoundCmd1(1) (0x8017D180, S100) and one without
  (0x8017D258, S65) (H). Destinations unknown (data).
* **Sound:** PlaySe(0x451) on the hurt launch (H); P01 sound commands 0x1C / 0x1D.
* **Unknown / notes:** camera set-up 0x8017D3C0 (projection 0x190, distance 0x320, angle 0xE3) and a camera mode
  0x8017D4A0 that clamps the focus to y >= -0x4E0, x within +-0x2D0 before following (helper 0x8017D538, S75) (H).

#### Names: SC05_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D3C0 | func_sc05_000_8017D3C0 | RoomInitCamera | sets camera projection / distance / angle targets, SetCameraUpdate(0x8017D464), SnapCamera | H |
| 0x8017D4A0 | func_sc05_000_8017D4A0 | CameraClampFocus | clamps g_CameraFocus y >= -0x4E0, x +-0x2D0, then the follow helper | H |
| 0x8017D6D0 | func_sc05_000_8017D6D0 | StoryPropMain | ACTOR-MAIN of A2 | M |
| 0x8017D754 | func_sc05_000_8017D754 | StoryPropInit | AllocActorModel, progress-band table remap of +0xDC | H |
| 0x8017D70C | func_sc05_000_8017D70C | LookupPairTable | returns t[i+1] where t[i] == a->+0xDC, else the value itself | H |
| 0x8017D828 | func_sc05_000_8017D828 | StaticModelMain | ACTOR-MAIN of A3 | M |
| 0x8017D864 | func_sc05_000_8017D864 | StaticModelInit | SetupActor + fixed model data | M |
| 0x8017D8DC | func_sc05_000_8017D8DC | SwarmMain | ACTOR-MAIN of A4 | M |
| 0x8017D918 | func_sc05_000_8017D918 | SwarmSpawnAndEvent | flag 0x137 gate, 48 x SpawnActor(0x3C0), event at x >= 0x181 | H |
| 0x8017DB10 | func_sc05_000_8017DB10 | SwarmBugCircle | circles a centre, HitPlayer(1, 0x201D, ...) on contact | M |
| 0x8017DC9C | func_sc05_000_8017DC9C | TalkerMain | ACTOR-MAIN of A5 | M |
| 0x8017DDBC | func_sc05_000_8017DDBC | ScriptedModelInit | AllocActorModel, StopMotion, SetScript(D_80181F24) | M |
| 0x8017DE70 | func_sc05_000_8017DE70 | ScriptNearPlayerCallback | DistSqToPlayer < 0x1001: target state 2, ResetScriptVM | M |
| 0x8017DECC | func_sc05_000_8017DECC | ThrownHurtMain | ACTOR-MAIN of A6 | M |
| 0x8017DF38 | func_sc05_000_8017DF38 | ThrownHurtStart | rumble, ApplyQueuedHurt, launch, PlaySe(0x451) | H |
| 0x8017DFDC | func_sc05_000_8017DFDC | ThrownHurtFly | air move, trail effect, camera shake on landing | H |
| 0x8017E1E8 | func_sc05_000_8017E1E8 | SpawnThrownTrail | SpawnEffect(3, ...) below the player | M |

### SC05_001
* **Place:** unknown; a field / dungeon room with counterweight lifts, a shifting block structure and three enemy
  kinds (M). The "set(0x5A)" in progress.txt is F023's shared code (SetProgress(0x5A) and flag 0xEA only when that
  actor's flag is 0x54, H), not a stage-specific set. It also sets flag 0x137 (H), the flag that removes the
  SC05_000 swarm (H there), so this room is visited before the swarm room is cleared (M).
* **Size:** 204 functions (own 34, lone-shared 22, family 114: F013 F023 F024 F030 F033 F035 F044 F094 F096 F113;
  18 actor dispatchers, 9 stubs; P01, P02, P03).
* **Actors:**
  * A1-A2: F013; A3-A4: F024 (GetVar 0x3A/0x3B checks, event D_80189570, map-id 0x3028 test, H); A12-A13: F113
    (Musashi's knock-down hurt + a sprite effect, see G7 families); A14: F044 + F094 + F096 enemy code (sounds
    0xAA1, 0x51F/0x520, 0x521, 0x832, 0xA74, H); A16: F030 (sprite emitter, sound 0xAA0); A17-A18: F023 + F035.
  * Shifting structure (A11 at 0x801803F8, set-up 0x80180434, M on the grouping): a model; unless flag
    D_80189738[a->+0x70] is set it spawns 9 x SpawnActorArg(0x1D3, i) "blocks", and always 14 x
    SpawnActorArg(0x1D0, i) "debris" (H). Its trigger state 0x8017F268: when Musashi is within an x window of 0xFF
    units in front of it and GetPlayerByte1C7() == 2 (L: a particular player mode / technique), StartEvent
    D_80189728, SoundRequest(0xB10), a 0x30-frame timer with StartCameraShake every 16 frames, then EndEvent and
    SetFlag(D_80189738[a->+0x70], 1) (H).
    * blocks (set-up 0x8017F3E4 in block A5, states 0x80180520 / 0x8017F744, M): placed at an offset table and,
      until the trigger, puff random smoke props (SpawnPropFrom 0x49, 0x8017F964); on the trigger each waits its
      own delay (0x8017F6C4) and slides in z to its target spinning, with dust props (0x22) every 8 frames;
      SoundRequest(0xB0F) when block 0 arrives (H). With the flag already set they start at the end positions.
    * debris (set-up 0x80180600: MimeBlend of the parent's model; 0x80180710 / 0x8017FA18 / 0x80180748): on the
      trigger, pieces with a non-zero launch vector fly off with gravity and spin, freed below y -0xFF (H).
    * L: a rock face that rearranges into a passage or steps when Musashi uses the right ability.
  * Counterweight lift (A8 at 0x8017FFF8, set-up 0x80180034; A10 at 0x80180260, set-up 0x80180874; A7 props, M):
    A8 builds a frame model with wheel models, a rope prop (SpawnPropFrom 0x45) and spawns 0x1B3 (counterweight)
    and 0x1B5 (platform) (H). The platform (0x80180874) spawns 0x1B4 with its own rope prop; 0x8018098C starts the
    ride when D_80126CD4 == itself (M: Musashi stands on it): StartEvent D_80189B10, SetPlayerActionFlag02/08,
    SoundRequest(0x8FE); 0x801809B8 raises it 8 units every 2 frames for 0x14 steps (0xA0 in all) carrying Musashi
    (D_80126B62 += 8), lowers the counterweight and turns the wheels; at the end EndEvent, SoundRequest(0x8F9),
    SetFlag(D_80189ACC[a->+0x70], 1) (H). With the flag set it starts raised (0x80180364) (H).
    The rope props (A7 0x8017FBB0 / 0x8017FE0C) draw 9 or 6 segments of 32 units and grow / shrink them as the
    parent moves (H); 0x8017FB04 is a prop that rises and is freed after 0xC0 units (H).
  * Flag setter (0x80180AB4): SetFlag(0x137, 1) then RejectSpawn (H): placed in the room's spawn list (data).
  * Glow sprite (A14 set-up 0x801814E4, update 0x80181574): a sprite at a fixed projected point whose colour
    flickers between two greens every frame (H).
  * Emitter (A15 at 0x80184920): when Musashi is within ground distance 0x400 it spawns SpawnActorArg(0x183, 1) at a
    random point 0x30 from its home at two random periods (H). L: drips / bubbles.
  * 0x80182F68 (own, inside the F096 block): a knock-back state (StopWithGravity, back speed 0x28000, state 2) (H).
* **Events / scripted scenes:** structure trigger D_80189728 and lift ride D_80189B10 (above); F024's D_80189570.
* **Puzzles / mechanisms:** the shifting structure (player mode == 2 near it) and up to two one-time lifts (flags
  D_80189ACC[0..1], data) (H).
* **Exits:** P01 only (exit steps with and without SoundCmd1(1)); destinations unknown (data).
* **Sound:** 0xB10 / 0xB0F structure, 0x8FE / 0x8F9 lift (H).
* **Unknown / notes:** camera mode 0x8017EAEC: the pad buttons (GetObjPadPressed & 3) toggle between two camera
  settings, and the yaw comes from a zone table D_80189680 (0x8017EE08: zone tests 0/1/2, then a rule: face a point,
  face away, or fixed 0x800 / 0x400 / 0xC00), smoothed (H). 0x8017F1E4 is a distance test (> 0x143FFF squared) with
  no caller in the stage (H).

#### Names: SC05_001
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E9F8 | func_sc05_001_8017E9F8 | RoomInitCamera | camera targets, SetCameraUpdate(0x8017EAB0), SnapCamera | H |
| 0x8017EAEC | func_sc05_001_8017EAEC | CameraZoneFollow | pad toggles setting, yaw from zone table, smoothed | H |
| 0x8017EE08 | func_sc05_001_8017EE08 | CameraZoneYaw | walks zone records, returns a yaw rule's angle | H |
| 0x8017F1E4 | func_sc05_001_8017F1E4 | IsPlayerFar | squared xz distance to the focus > 0x143FFF | M |
| 0x8017F268 | func_sc05_001_8017F268 | ShiftWallTrigger | x window + GetPlayerByte1C7()==2: event, shakes, SetFlag | H |
| 0x8017F3A8 | func_sc05_001_8017F3A8 | ShiftBlockMain | ACTOR-MAIN of A5 | M |
| 0x8017F3E4 | func_sc05_001_8017F3E4 | ShiftBlockInit | start / end position by flag | H |
| 0x8017F5A4 | func_sc05_001_8017F5A4 | ShiftBlockAim | heading to target, local velocity, spin rate | H |
| 0x8017F6C4 | func_sc05_001_8017F6C4 | ShiftBlockStart | SetState(2) with a per-block delay | H |
| 0x8017F710 | func_sc05_001_8017F710 | ShiftBlockSetDone | SetState(2), sub-state 3 | H |
| 0x8017F744 | func_sc05_001_8017F744 | ShiftBlockSlide | delay, slide to target, dust, 0xB0F | H |
| 0x8017F88C | func_sc05_001_8017F88C | SpawnBlockDust | SpawnPropFrom(o, 0x22) | H |
| 0x8017F928 | func_sc05_001_8017F928 | ShiftDebrisMain | ACTOR-MAIN of A6 | M |
| 0x8017F964 | func_sc05_001_8017F964 | SpawnBlockSmoke | SpawnPropFrom(o, 0x49) jittered | H |
| 0x8017FA18 | func_sc05_001_8017FA18 | ShiftDebrisLaunch | gravity + launch vector + spin | H |
| 0x8017FAC8 | func_sc05_001_8017FAC8 | RopePropMain | ACTOR-MAIN of A7 | M |
| 0x8017FB04 | func_sc05_001_8017FB04 | RisingPropUpdate | MoveProp, freed after 0xC0 rise | H |
| 0x8017FBB0 | func_sc05_001_8017FBB0 | RopeInit | 9 / 6 segment rope, flag-dependent length | H |
| 0x8017FE0C | func_sc05_001_8017FE0C | RopeUpdate | resizes segments to the parent's height | H |
| 0x8017FFF8 | func_sc05_001_8017FFF8 | LiftFrameMain | ACTOR-MAIN of A8 | M |
| 0x80180034 | func_sc05_001_80180034 | LiftFrameInit | wheel models, rope, SpawnActorArg 0x1B3 / 0x1B5 | H |
| 0x80180260 | func_sc05_001_80180260 | LiftMain | ACTOR-MAIN of A10 | M |
| 0x8018029C | func_sc05_001_8018029C | LiftStartRide | StartEvent D_80189B10, 0x8FE | H |
| 0x80180304 | func_sc05_001_80180304 | LiftEndRide | EndEvent, 0x8F9, SetFlag | H |
| 0x80180364 | func_sc05_001_80180364 | LiftSetRaised | +0xA0 at once | H |
| 0x801803F8 | func_sc05_001_801803F8 | ShiftWallMain | ACTOR-MAIN of A11 | M |
| 0x80180434 | func_sc05_001_80180434 | ShiftWallInit | spawns 9 x 0x1D3, 14 x 0x1D0 | H |
| 0x80180520 | func_sc05_001_80180520 | ShiftBlockWait | smoke until parent triggered | H |
| 0x80180600 | func_sc05_001_80180600 | ShiftDebrisInit | MimeBlend piece of the parent's model | H |
| 0x80180710 | func_sc05_001_80180710 | ShiftDebrisWait | waits parent +0xFE | H |
| 0x80180748 | func_sc05_001_80180748 | ShiftDebrisFall | spins, falls, FreeActor | H |
| 0x801807F8 | func_sc05_001_801807F8 | LiftWeightInit | model + collision data | M |
| 0x80180874 | func_sc05_001_80180874 | LiftInit | SpawnActor(0x1B4), rope, raised if flag | H |
| 0x8018098C | func_sc05_001_8018098C | LiftWaitRider | D_80126CD4 == self | M |
| 0x801809B8 | func_sc05_001_801809B8 | LiftRise | 8 units / 2 frames, carries Musashi | H |
| 0x80180AB4 | func_sc05_001_80180AB4 | SetSwarmGoneFlag | SetFlag(0x137, 1), RejectSpawn | H |
| 0x801814A8 | func_sc05_001_801814A8 | GlowSpriteMain | ACTOR-MAIN of A14 | M |
| 0x801814E4 | func_sc05_001_801814E4 | GlowSpriteInit | AllocActorSprite at a point | H |
| 0x80181574 | func_sc05_001_80181574 | GlowSpriteUpdate | project, flicker colour | H |
| 0x80182F68 | func_sc05_001_80182F68 | StartKnockBack | StopWithGravity, back velocity | M |
| 0x80184920 | func_sc05_001_80184920 | DripEmitterMain | ACTOR-MAIN of A15 | M |
| 0x8018495C | func_sc05_001_8018495C | DripEmitterInit | random phase / period | H |
| 0x801849C4 | func_sc05_001_801849C4 | DripEmitterUpdate | near player: SpawnActorArg(0x183, 1) | H |
| 0x80184AF8 | func_sc05_001_80184AF8 | PickDripPoint | random point radius 0x30 | H |

### SC05_002
* **Place:** unknown; a room with columns of moving platforms and a wandering creature (F057) (M). The "set(0x5A)"
  in progress.txt is F023's shared code (only for its flag 0x54, H), not a stage-specific set. Its moving-column code
  is shared only with sc03_113 (five S2 shapes, H), so the two rooms are built alike (M).
* **Size:** 74 functions (own 2, lone-shared 22, family 28: F009 F023 F035 F057; 6 actor dispatchers, 7 stubs;
  P01, P02, P03).
* **Actors:**
  * A1-A2: F009 (+ S27 set-up); A2 tail: F057 (an enemy that roams, turns and lunges, sound 0x6FF; the S11/S14/S15
    helpers around it play 0x6FE by distance and damage Musashi by segment, H); A5-A6: F023 + F035.
  * Moving column (A3 at 0x8017F30C / A4 at 0x8017F734, S2 = sc03_113): set-up 0x8017F770 makes a sprite with a
    texture that scrolls by a per-column speed (0x8017F200, wraps every 0x30, H) and spawns a row of SpawnActor(0x1A4)
    platforms spaced 0x180 (0x8017F538), then one more every D_8019C7DC[i] frames (H). A column whose +0x70 has bit
    0x8000 is held while flag 0xBA is clear: its platforms are spaced 0x100 and left in state 2 instead of moving (H;
    L: a stopped flow that flag 0xBA starts). Platforms (set-up 0x8017F868: model + collision, update 0x8017F940)
    move up or down by the column's speed, are freed past the column's length and carry Musashi while he stands on
    them (CarryPlayerExact) (H). M: an escalator of blocks (L: rising stones in a waterfall).
  * Column sound (0x8017F348, run by column 0 every frame): finds the nearest kind-0x1A3 actor to Musashi in x,
    and within a combined distance 0x200 plays SoundRequest(0x704, or 0xBAA for the held column) with volume
    0x7F - d/4; out of range it sends sound command 4 once (H). M: a looping positional sound for the columns, and
    0x1A3 is the column's own kind.
* **Events / scripted scenes:** none of its own (F023's talk scripts).
* **Puzzles / mechanisms:** the platform columns and the flag-0xBA hold (above).
* **Exits:** P01 with two S116 entry steps (two entry walks, M) and the two exit variants; destinations unknown.
* **Sound:** 0x704 / 0xBAA column loop, sound command 4 to stop it (H).
* **Unknown / notes:** 0x8017E41C (S4, also sc03_112/113, sc05_003) relocates a sequence block once
  (RelocateSeqBlock D_80196B4C) and then plays it through 0x8017CD9C (S5) with a frame counter stepping 0x14 (H;
  L: an animated texture / model sequence). Camera 0x8017E100 (distance 0x4B0) with a pad-toggled setting
  (0x8017E1DC, S34) (H).

#### Names: SC05_002
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E100 | func_sc05_002_8017E100 | RoomInitCamera | camera targets, SetCameraUpdate(0x8017E1A0) | H |
| 0x8017F348 | func_sc05_002_8017F348 | UpdateColumnSound | nearest 0x1A3 actor, SoundRequest(0x704 / 0xBAA) by distance | H |
| 0x8017F30C | func_sc05_002_8017F30C | ColumnSoundMain | ACTOR-MAIN of A3 | M |
| 0x8017F734 | func_sc05_002_8017F734 | ColumnMain | ACTOR-MAIN of A4 | M |
| 0x8017F200 | func_sc05_002_8017F200 | ColumnScrollAndSpawn | texture scroll, SpawnActor(0x1A4) on a timer | H |
| 0x8017F538 | func_sc05_002_8017F538 | ColumnSpawnRow | initial row of 0x1A4 platforms, spacing by flag 0xBA | H |
| 0x8017F770 | func_sc05_002_8017F770 | ColumnInit | sprite set-up, held state 2 while flag 0xBA clear | H |
| 0x8017F868 | func_sc05_002_8017F868 | ColumnPlatformInit | model + collision; held like its column | H |
| 0x8017F940 | func_sc05_002_8017F940 | ColumnPlatformMove | moves by column speed, CarryPlayerExact, freed at the end | H |
| 0x8017E41C | func_sc05_002_8017E41C | RoomPlaySeqBlock | RelocateSeqBlock once, then step the sequence | M |

### SC05_003
* **Place:** unknown; a room with a pushing current along x and the F114 creature (M). No progress value (H).
* **Size:** 113 functions (own 3, lone-shared 21, family 72: F009 F030 F076 F077 F114; 5 actor dispatchers,
  5 stubs; P01, P02, P03).
* **Actors:**
  * A1-A2 head: F009 (+ S27); A2: F076 + F077 (an enemy: shadow, wander, contact HitPlayer, DropItem, sounds 0x662,
    0xAA1, H); A2 tail-A4: F114 (the large walking creature and its thrown parts, see G7 families); A5: F030.
  * Current (0x8017E380, own, run each frame by a room actor, M): unless Musashi is in a special state
    (PlayerState1F4Bit8, func_800CF8B4() == 0 or PlayerFlag1000) it moves g_PlayerX toward -x by up to 10 units per
    frame in bands: ramping between x -0xE8E..-0xCEC, full 10 between -0xCEC..-0x87, ramping down to 0 at 0xF7 (H);
    SoundRequest(0xAFA) with volume = push strength x 12.7, sound command 4 (arg 0xAFA) when he leaves it (H); the
    rest spawns SpawnKind205 at random (H). L: a river current or wind.
* **Exits:** P01 only; destinations unknown (data).
* **Sound:** 0xAFA current loop (H); F114 footsteps 0x7F9 / 0x7F8.
* **Unknown / notes:** 0x8017E684 (S4, sound 0x662) plays a relocated sequence like SC05_002's; 0x80180E34 (own) is
  a one-line ApplyMatrixSV helper used by F114 states (H). Camera 0x8017E130 (S2 with sc05_007).

#### Names: SC05_003
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E380 | func_sc05_003_8017E380 | UpdateCurrentPush | g_PlayerX pushed by x bands, SoundRequest(0xAFA) by strength | H |
| 0x8017F914 | func_sc05_003_8017F914 | CreatureStartIdle | StopWithGravity, random timer, SetScript | M |
| 0x80180E34 | func_sc05_003_80180E34 | ApplyActorMatrix | ApplyMatrixSV on the actor's vector | M |

### SC05_004
* **Place:** unknown; a room with day/night NPCs (F025), a talker, a machine (F097), an F093 enemy and the switch that
  sets flag 0xBA (M). Progress tested only as "< 200 (0xC8)" for one NPC slot (H, S4 0x8017D060).
* **Size:** 96 functions (own 8, lone-shared 16, family 53: F025 F036 F093 F097; 6 actor dispatchers, 6 stubs;
  P01, P02, P03).
* **Actors:**
  * A1-A2: F025 NPCs with S4 set-up 0x8017D060: RejectSpawn when flag D_80185330[i] is set, or slot 4 before
    progress 200; a different model / script when the clock word D_80078E78+0x1A is < 300 or >= 1320 than in
    between (H; M: night vs day, the game clock); F025 starts events (StartEventKeepPlayer, D_80185310), spawns
    0x30 / 0x1F8, sets D_80185330[i], sounds 0x828 / 0x829 (H).
  * Switch / mechanism (A3 at 0x8017E5D8-0x8017E91C, own): slot 0 is a model that spawns SpawnActorArg(0x292, 1);
    other slots are hittable actors (hit data at +0xBC) (H). When activated (0x8017E76C, M: on a hit) it raises by
    0x30, swaps two texture blocks (MoveImage), adds a glow sprite above its parent (0x8017E808) and SetFlag(0xBA, 1)
    (H). If 0xBA is already set it starts in that state (H). 0x8017E91C: once 0xBA is set, TakePlayerControl and
    RunScript D_80185428 (a short cutscene), then EndEvent (H). Flag 0xBA releases the held platform column in
    SC05_002 and is tested by F097 here (H; M: the same story switch).
  * A4: talker (S20 SpawnTalkMarker, S12 RunScript D_801854E0, S25) + F097 (machine: sounds 0x720 / 0x721, four
    SpawnActorArg(0x191), runs with flag 0xBA, H). 0x8017F0B8 (own): a part model turned in 0x400 steps from its
    parent, collision data by +0x70 bit 0x100 (H).
  * A5-A6: F093 (an enemy firing SpawnActorArg(0x1EA) shots, sounds 0x833, 0x8C6, 0x8C7, 0x98F, 0xC5D, H).
* **Puzzles / mechanisms:** the flag-0xBA switch (above).
* **Exits:** P01 only (0x8017E008 in F025 also does the exit sound commands); destinations unknown (data).
* **Unknown / notes:** 0x8017E90C clears D_80126B8C (H; meaning unknown). Camera 0x8017E3A8 (own).

#### Names: SC05_004
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D060 | func_sc05_004_8017D060 | DayNightNpcInit | flag / progress gate, model by clock band | H |
| 0x8017E3A8 | func_sc05_004_8017E3A8 | RoomInitCamera | camera set-up (own) | M |
| 0x8017E5D8 | func_sc05_004_8017E5D8 | FlowSwitchInit | model + SpawnActorArg(0x292) / hittable slot | H |
| 0x8017E76C | func_sc05_004_8017E76C | FlowSwitchActivate | SetFlag(0xBA, 1) | H |
| 0x8017E79C | func_sc05_004_8017E79C | FlowSwitchSetOn | raise 0x30, MoveImage x2, glow | H |
| 0x8017E808 | func_sc05_004_8017E808 | SpawnSwitchGlow | sprite above the parent | M |
| 0x8017E90C | func_sc05_004_8017E90C | ClearPlayerVar8C | D_80126B8C = 0 | M |
| 0x8017E91C | func_sc05_004_8017E91C | EventFlowStarted | flag 0xBA: TakePlayerControl, RunScript D_80185428 | H |
| 0x8017F0B8 | func_sc05_004_8017F0B8 | MachinePartInit | part model turned from parent | M |

### SC05_005
* **Place:** unknown; a room built like SC05_001 (same F013 / F024 / F033 / F113 set, same zone camera) with the F114
  creature of SC05_003 (H: shared families). No progress value (H).
* **Size:** 123 functions (own 4, lone-shared 19, family 79: F013 F024 F033 F113 F114; 9 actor dispatchers,
  5 stubs; P01, P02, P03).
* **Actors:**
  * A1-A2: F013; A3-A4: F024 (GetVar 0x3A/0x3B, event D_80185F48, map-id 0x3028 test, sounds 0xBFE / 0x62E, H);
    A5-A7: F114 (the walking creature; 0x8017FA1C own: its state that spawns SpawnActor(0x24F), H); F033 helpers;
    A8-A9: F113 (Musashi knock-down hurt + sprite effect).
  * A5 head: a collision-only model (0x8017F1F8, S10): AllocActorModel, collision data D_801860B0, facing from +0xFC (H).
* **Exits:** P01 only; destinations unknown (data).
* **Sound:** F114's distance / pan sound helper (S8 0x80181BB4) (H).
* **Unknown / notes:** camera 0x8017EAEC: pad toggle of two settings, focus clamped (x >= -0x1440, y <= -0x200, z <=
  -0x80 past x 0x1100) and yaw from zone table D_80186058 (0x8017EE64, rules incl. fixed 0xB00 / 0x480) (H).
  0x80180F3C (own) is a 3-line helper used by F114 states (H).

#### Names: SC05_005
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EAEC | func_sc05_005_8017EAEC | CameraZoneFollow | clamp focus, zone-table yaw, smoothed | H |
| 0x8017EE64 | func_sc05_005_8017EE64 | CameraZoneYaw | zone records -> yaw rule | H |
| 0x8017F1F8 | func_sc05_005_8017F1F8 | CollisionModelInit | model + collision data | M |
| 0x8017FA1C | func_sc05_005_8017FA1C | CreatureStartIdle | as SC05_003 0x8017F914 | M |

### SC05_006
* **Place:** unknown; a small square room (camera focus clamped to +-0x100 in x and z, H) with the SC05_001-style
  F013 / F024 set and F086 sinking posts (M). No progress value (H).
* **Size:** 62 functions (own 1, lone-shared 11, family 30: F013 F024 F086; 6 actor dispatchers, 4 stubs; P01 with
  a third entry sequence, P02, P03).
* **Actors:**
  * A1-A2: F013; A3-A4: F024 (event D_80182F68, map-id 0x3028 test, H).
  * A4 tail-A6: F086 posts with set-up 0x8017F25C (S2, shared with sc05_009): model from the spawn's +0xDC data,
    scale from +0x70 (kind 1 when > 0x1000), collision data (H). F086's update 0x8017EE0C: while Musashi stands on
    it (+0x74), is within ground distance 0x80 and PlayerFlag1000 is set, it rumbles, spawns SpawnActor(0x27D) each
    frame and after 9 frames sinks 1 unit per frame (shrinking its model), keeping Musashi on top; plays its sound
    +0xFC every 16 frames; freed when 0xA0 below its start (H). L: stakes Musashi presses into the ground.
* **Puzzles / mechanisms:** the sinking posts (above).
* **Exits:** P01 (three room-step dispatchers, three entry-walk scripts: three entrances, M); destinations unknown.
* **Unknown / notes:** camera 0x8017EA9C (S5, distance 0x4B0) and clamp mode 0x8017EB74 (pad toggles setting) (H).

#### Names: SC05_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EB74 | func_sc05_006_8017EB74 | CameraClampFocus | pad toggle; focus clamped to +-0x100 | H |
| 0x8017EA9C | func_sc05_006_8017EA9C | RoomInitCamera | camera targets, SetCameraUpdate | H |
| 0x8017F25C | func_sc05_006_8017F25C | SinkPostInit | model from +0xDC, scale +0x70, collision | H |

### SC05_007
* **Place:** unknown; a room with a ride that carries Musashi out of the map, enemies of SC05_001 / SC05_002 kinds
  (F044 / F094 / F057) and a lamp lit by flag 0xBA (M). Tests progress >= 0x4B0 (1200): the ride actor is despawned
  from then on (H).
* **Size:** 113 functions (own 10, lone-shared 28, family 52: F030 F044 F057 F094 F113; 5 actor dispatchers,
  1 player-action dispatcher, 9 stubs; P01, P02, P03).
* **Actors:**
  * Ride (A1 at 0x8017D380, set-up 0x8017D3BC): before progress 0x4B0 a model (or, with +0xFC set, a collision-only
    block in state 4) (H). 0x8017D490: when Musashi is within 0x80 of it horizontally and above y -0x1BF
    (D_80126B62 < -0x1BF) it starts event D_801845DC; 0x8017D52C ends it (H). Script callbacks: 0x8017D59C (Musashi
    in PlayerState1F4Bit1, counting up to 0x40 frames), 0x8017D614 (flag 0xBA set?), 0x8017D64C / 0x8017D66C
    (PlaySe 0x7F1 / 0x7F0), 0x8017D638 (reset), 0x8017D68C: rumble, accelerate along +x carrying Musashi
    (PlacePlayer), and once x > 0x200 RequestMapChange(D_8018446C) (H). L: a raft / cart / lift he rides away;
    the event script decides when (data).
  * Lamp (A2 at 0x8017D764, set-up 0x8017D7A0): a model; when flag 0xBA is set it swaps the same two texture
    blocks as SC05_004's switch (MoveImage to 0x2D0,0x180 / 0x160,0x155) and adds a glow sprite (H): M, the same
    device shown switched on.
  * A3-A4 head: F113 (knock-down hurt + sprite effect); A4: F044 + F094 enemy, F057 roaming enemy (sounds 0xAA1,
    0x51F/0x520, 0x521, 0x6FF, 0x6FE, H); A5: F030.
  * Player action (0x8017DDE0, S2 with sc05_009): a scripted Musashi drop: EndScene, motion, fall speed and
    acceleration, land effect (SpawnEffect2), ClearActionHandler (H).
* **Events / scripted scenes:** ride event D_801845DC (above).
* **Exits:** RequestMapChange(D_8018446C) from the ride (destination unknown, data) (H); P01 exits.
* **Sound:** 0x7F0 / 0x7F1 from the ride script (H).

#### Names: SC05_007
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D380 | func_sc05_007_8017D380 | RideMain | ACTOR-MAIN of A1 | M |
| 0x8017D3BC | func_sc05_007_8017D3BC | RideInit | progress >= 0x4B0 despawn; model or collision block | H |
| 0x8017D490 | func_sc05_007_8017D490 | RideWaitPlayer | within 0x80, y < -0x1BF: StartEvent D_801845DC | H |
| 0x8017D52C | func_sc05_007_8017D52C | RideEventWait | IsEventDone, EndEvent | H |
| 0x8017D59C | func_sc05_007_8017D59C | RideCheckPlayerState | PlayerState1F4Bit1 counter | M |
| 0x8017D614 | func_sc05_007_8017D614 | IsFlagBASet | GetFlag(0xBA) | H |
| 0x8017D638 | func_sc05_007_8017D638 | RideResetMove | clears speed, saves x | M |
| 0x8017D64C | func_sc05_007_8017D64C | PlayRideSe7F1 | PlaySe(0x7F1) | H |
| 0x8017D66C | func_sc05_007_8017D66C | PlayRideSe7F0 | PlaySe(0x7F0) | H |
| 0x8017D68C | func_sc05_007_8017D68C | RideCarryAndExit | PlacePlayer, RequestMapChange past x 0x200 | H |
| 0x8017D764 | func_sc05_007_8017D764 | LampMain | ACTOR-MAIN of A2 | M |
| 0x8017D7A0 | func_sc05_007_8017D7A0 | LampInit | lit textures + glow when flag 0xBA | H |
| 0x8017DDE0 | func_sc05_007_8017DDE0 | PlayerDropMain | PLAYER-ACTION-MAIN | M |

### SC05_008
* **Place:** unknown; a scripted run / chase stage with no shared families: almost all code is its own (M). No
  progress value (H). Uses byte vars 0xE0 (phase 0-2) and 0xE1 (a fail counter, capped at 10) (H).
* **Size:** 176 functions (own 62 + 66 in dupN groups of 2-23 copies, lone-shared 10; 7 actor dispatchers, 6 stubs;
  P01 partly replaced, P02, P03).
* **Room code (own, 0x8017CE98-0x8017DC50):** the entry step (0x8017CF68) plays PlaySe(0x70B) and picks Musashi's
  action list by var 0xE0 (D_80186444 / D_8018646C / D_8018648C, closing the HUD panel for phases 1-2) (H); three
  phase starters (0x8017D098 / 0x8017D4E8 / 0x8017D668) SetVar(0xE0, 0/1/2), EndScene, a fixed motion, and set up
  his model and the active camera (H). The camera mode 0x8017D900 follows a recorded track (+0x34 track, +0x38
  frame): phase 0 -> 1 at track D_8018AF54 frame >= 0x169, 1 -> 2 at D_8018DE54 frame >= 0x155, and frame 0x398 /
  0x2EF triggers spawns (0x8017DC50 / 0x8017D78C) (H). 0x8017D2AC: when GetVarD0() reaches 0 (L: a timer or life)
  it takes control, HitPlayerFatal and SetVar(0xE1, +1) (H). 0x8017D434: a 0x80-frame countdown, then
  RequestMapChange(D_801863C4) (H). The exit (0x8017CE98) also sends sound command 4 with 0x70B (H).
* **Actors:** obstacle actors spawned by camera-frame schedules (0x8017F288 / 0x8017F438: SpawnActor(D_801865B8[i]),
  H) slide toward -x by 0x50 per frame (e.g. 0x80180E84), test three hit points against Musashi (0x801823B8), on a
  hit spawn SpawnActorArg(0x209, 4) and hide, and despawn off track (0x80182334) (H); five near-copies (dup5)
  play a looping 0xA76 by distance (< 0xA00) and SoundRequest(0x894, 2..6) at their cue frame (H); others spawn
  SpawnActor(0x2B2) (dup5 / dup2) or sounds 0x88E-0x893 (H). 0x8017E464 spawns four SpawnActorArg(0x209) with 0x8BB
  (H). FindActorByKind(0x204) (0x8017EF50, 0x801823B8) locates the main mover (H). L: a run where things fly at
  Musashi along a fixed camera path.
* **Exits:** RequestMapChange(D_801863C4) after the countdown (destination unknown, data) (H).
* **Sound:** 0x70B (start; stopped with command 4), 0xA76 loop, 0x894 cues with arg 2-6, 0x88E-0x893, 0x8BB (H).
* **Unknown / notes:** the dup groups (23, 18, 9, 5 copies) are per-lane / per-cue copies of the same handlers;
  not named one by one.

#### Names: SC05_008
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CF68 | func_sc05_008_8017CF68 | RoomEntryByPhase | PlaySe(0x70B), action list by var 0xE0 | H |
| 0x8017D098 | func_sc05_008_8017D098 | StartRunPhase0 | SetVar(0xE0, 0), motion, camera | H |
| 0x8017D4E8 | func_sc05_008_8017D4E8 | StartRunPhase1 | SetVar(0xE0, 1) | H |
| 0x8017D668 | func_sc05_008_8017D668 | StartRunPhase2 | SetVar(0xE0, 2) | H |
| 0x8017D2AC | func_sc05_008_8017D2AC | RunFailCheck | GetVarD0()==0: HitPlayerFatal, var 0xE1 += 1 | H |
| 0x8017D434 | func_sc05_008_8017D434 | RunExitCountdown | 0x80 frames then RequestMapChange | H |
| 0x8017D900 | func_sc05_008_8017D900 | CameraTrackPhase | camera track frame advances var 0xE0 | H |
| 0x8017F288 | func_sc05_008_8017F288 | SpawnScheduled | SpawnActor from table by cue | M |
| 0x80180E84 | func_sc05_008_80180E84 | ObstacleSlide | -0x50 x per frame, hit -> SpawnActorArg(0x209, 4) | H |
| 0x801823B8 | func_sc05_008_801823B8 | ObstacleHitsMover | hit test against kind 0x204 | M |
(about 110 more own / dup functions not proposed.)

### SC05_009
* **Place:** unknown; the arrival end of the SC05_007 ride (same ride code shape and PLAYER-ACTION block S2, H) where
  the vehicle breaks apart (M). No progress value (H).
* **Size:** 69 functions (own 15, lone-shared 20, family 13: F031 F035 F086; 5 actor dispatchers, 1 player-action
  dispatcher, 8 stubs; P01, P02, P03).
* **Actors:**
  * Ride (A1, set-up 0x8017D6AC: model, or a collision block in state 4 when +0xFC is set, H): 0x8017D840 waits until
    GetPlayerAction() == 0, then StartEvent D_80182594; 0x8017D888 ends it (H). Script callbacks: 0x8017D950 rumble
    and carry Musashi along +x (PlacePlayer) until x >= 0x121 (then 0x8017DF34); 0x8017D9F0 runs on to x >= 0x1A1,
    then spawns 5 x SpawnActorArg(0x251, 0..4), StartCameraShake, PlaySe(0x807), PlaySePositional(4, 0x9D2) (H);
    0x8017D914 plays 0x9D2 (H).
  * Wreck pieces (A2 set-up 0x8017DAF4, update 0x8017DCB0): each takes a part model of the ride, an offset, random
    spin and an upward / sideways launch; despawned past x 0x1000 (H). M: the vehicle smashing at the end.
  * PLAYER-ACTION block (S2 with sc05_007): Musashi's scripted drop off the ride (M).
  * A2-A4: F086 posts (set-up S2 with sc05_006); A5: F031 + F035 (SpawnActorArg(0x1E3), sounds 0x5BF / 0x888,
    RunScript D_80193974, H).
* **Exits:** P01 only; destinations unknown (data).
* **Sound:** 0x807 crash, 0x9D2 (H).
* **Unknown / notes:** room start 0x8017CDBC calls func_8001AAA0(0x6B) (meaning unknown, H). Two camera set-ups
  (0x8017D010 with snap, 0x8017D148 with SetCameraUpdate mode 2, H).

#### Names: SC05_009
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CDBC | func_sc05_009_8017CDBC | RoomStart | func_8001AAA0(0x6B) | M |
| 0x8017D010 | func_sc05_009_8017D010 | RoomInitCamera | camera targets + SnapCamera | H |
| 0x8017D148 | func_sc05_009_8017D148 | RoomInitCameraSmooth | same without snap, mode 2 | H |
| 0x8017D4D8 | func_sc05_009_8017D4D8 | CameraEaseToTargets | eases camera fields, builds matrix | M |
| 0x8017D6AC | func_sc05_009_8017D6AC | RideInit | model or collision block | H |
| 0x8017D840 | func_sc05_009_8017D840 | RideWaitPlayer | GetPlayerAction()==0: StartEvent D_80182594 | H |
| 0x8017D888 | func_sc05_009_8017D888 | RideEventWait | IsEventDone, EndEvent | H |
| 0x8017D950 | func_sc05_009_8017D950 | RideCarryPlayer | PlacePlayer until x >= 0x121 | H |
| 0x8017D9F0 | func_sc05_009_8017D9F0 | RideCrash | x >= 0x1A1: 5 x 0x251, shake, 0x807 | H |
| 0x8017DAF4 | func_sc05_009_8017DAF4 | WreckPieceInit | part model, random launch | H |
| 0x8017DCB0 | func_sc05_009_8017DCB0 | WreckPieceFly | spin, MoveObject, despawn | H |

### SC05_010
* **Place:** unknown; a large event room (108 own functions) built around six platforms and staged sequences, left
  by Musashi being lifted off screen (M). No progress value (H). Not surveyed function by function (time).
* **Size:** 221 functions (own 108 + 2 dup, lone-shared 30, family 39: F017 F018 F019 F056 F087 F113; 20 actor
  dispatchers, 1 player-action dispatcher, 8 stubs; P01, P02, P03).
* **Actors / sequences (own, H unless marked):**
  * Platform event (0x8017FFA8): when Musashi stands (+0x74) on one of six platform actors (table D_801C7E30 via
    D_80192478) he is pinned to its height, StartEvent D_8019231C, TakePlayerControlNoStop; at sub-step 4
    SpawnActor(0x27C); on IsEventDone it resets and clears a flag word in D_801C7E4C.
  * Big sequence (0x8018388C): StartEvent D_801923C4, TakePlayerControlNoStop, SoundCmd1(4) (L: a music change),
    frees every kind-0x2B5 actor, then for 0x80 frames spawns SpawnActor(0x2DE) every 16 frames with 0x8B8, then
    SpawnActor(0x2DC) + prop 0x5F on platform 0, 0x8B9, SpawnActor(0x2F7), SpawnActor(0x2E3) (113 lines).
  * Ability lesson (0x801844AC): within distance 32 of it, TakePlayerControlNoStop + StartEvent D_80194234; then,
    while GetStatsByteC0() == 5 (L: Musashi holds ability 5), SetPlayer1C4And21C(5, D_8018C490), OpenHudPanel when he
    acts, SoundCmd1(0) after 0x5A frames, and it advances when GetPlayerByte1C7() reports mode 5; a second script
    D_80194244 follows. L: a tutorial for an ability gained here.
  * Exit lift (0x8018473C): timer, SoundRequest(0xC61), ten props 0x7D in a column, then Musashi's y speed is set
    upward each frame until his projected point leaves the screen (|x| > 200 or |y| > 160), then
    RequestMapChange(D_8019222C).
  * Spawner set-up 0x8017EE68: SpawnActorArg(0x25E), SpawnActor(0x2B1 / 0x28C / 0x28E); other own actors spawn
    0x2EC / 0x2EB (0x89B / 0x89C), 0x29E, 0x2DB (0x89F), 0x274 (0x903-0x905), 0x2B5, 0x2ED (0x80B / 0x80C / 0xC8E),
    0x275, 0x28A, 0x2D4, 0x27B, 0x28D, 0x28F; several call HitPlayer via PathHitsModel (hazards).
  * Families: F017 / F056 / F087 / F018 / F019 (owned by other groups); A19-A20: F113 (knock-down hurt).
* **Exits:** RequestMapChange(D_8019222C) after the lift (destination unknown, data); 0x8017E7BC waits FadeDone(4)
  and calls RequestFieldFileLoad(5) (H).
* **Sound:** SoundCmd1(4) at the big sequence and SoundCmd1(0) in the lesson (L: music); many effects 0x895-0x905.

#### Names: SC05_010
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E7BC | func_sc05_010_8017E7BC | RoomLoadFieldFile5 | FadeDone(4) then RequestFieldFileLoad(5) | H |
| 0x8017EE68 | func_sc05_010_8017EE68 | RoomSpawnSet | SpawnActorArg(0x25E), three SpawnActor | M |
| 0x8017FFA8 | func_sc05_010_8017FFA8 | EventPlatformStep | stands on platform: StartEvent D_8019231C | H |
| 0x8018388C | func_sc05_010_8018388C | EventBigSequence | StartEvent D_801923C4, SoundCmd1(4), staged spawns | H |
| 0x801844AC | func_sc05_010_801844AC | EventAbilityLesson | StartEvent D_80194234, ability 5 checks | M |
| 0x8018473C | func_sc05_010_8018473C | ExitLiftPlayer | lift Musashi off screen, RequestMapChange | H |
(about 100 more own functions not proposed.)

### SC05_011
* **Place:** a cutscene room: one scripted scene with three characters, then a map change (M). Sets progress 0x398
  (920) at the end (H): the start of this group's story stretch.
* **Size:** 41 functions (own 10 + 4 dup, lone-shared 14; 1 actor dispatcher, 5 stubs; P01 with an exit that ends in
  RequestFieldFileLoad(4) (0x8017CF38, S2), P02, P03).
* **Actors:** cast set-up 0x8017D25C (own, 76 lines): a model that spawns three SpawnActorFromDef(kind 0x385) at
  offsets (0,-0x202,-0x140), (0x40,-0x202,-0x60), (-0x40,-0x202,-0x60) (H). Two cast behaviours 0x8017D4A4 /
  0x8017D610 switch their scripts when the event script sets flags 0x127 / 0x129 (one) or 0x128 / 0x12A / 0x12C
  (the other), clearing each, and blink at random (func_800183E0 on three image sets) (H). Eleven SetScript
  one-liners (0x8017D8B0-0x8017DA3C, S4 / dup4) are script-state helpers (H).
* **Events / scripted scenes:** 0x8017DA68: after a delay clears flags 0x125-0x12C, 0x130, 0x131, 0x133 and
  StartEvent D_80182230 (H). 0x8017DB54 runs it: flags 0x125 / 0x126 trigger ScriptOpCameraMove D_801821D0 /
  D_801821E0, flag 0x12B swaps two cast scripts; a pad press (GetPadPressedDir(0) & 0x840) skips (H, M: skip).
  0x8017DC50: SetProgress(0x398), func_8002AC00(0x1D), RequestMapChange(D_80181728) (H).
* **Exits:** RequestMapChange(D_80181728) after the scene (destination unknown, data); P01 exit loads field file 4.
* **Unknown / notes:** 0x8017D174 scrolls a texture strip with MoveImage each frame (H); 0x8017D0EC is a camera
  helper of the S34 mode (H).

#### Names: SC05_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D118 | func_sc05_011_8017D118 | RoomScrollTexture | calls 0x8017D174 | M |
| 0x8017D174 | func_sc05_011_8017D174 | ScrollTextureStrip | MoveImage x3, counter D_8019D068 | H |
| 0x8017D25C | func_sc05_011_8017D25C | CutsceneCastInit | three SpawnActorFromDef(0x385) | H |
| 0x8017D4A4 | func_sc05_011_8017D4A4 | CastAUpdate | flags 0x127 / 0x129 switch scripts, blink | H |
| 0x8017D610 | func_sc05_011_8017D610 | CastBUpdate | flags 0x128 / 0x12A / 0x12C switch scripts, blink | H |
| 0x8017DA68 | func_sc05_011_8017DA68 | EventSceneStart | clear flags 0x125-0x133, StartEvent D_80182230 | H |
| 0x8017DB54 | func_sc05_011_8017DB54 | EventSceneRun | camera moves by flags, skip on pad | H |
| 0x8017DC50 | func_sc05_011_8017DC50 | EventSceneEnd | SetProgress(0x398), RequestMapChange | H |

### SC05_017
* **Place:** a village variant (shares F067 / F068 / F069 / F071 / F072 / F007 / F009 with the village sc03_001, H)
  (M: the village in this part of the story). Own progress code: SetProgress(0x3A2) (930) in callback 0x8017E5F4
  (H); one actor exists only while progress is 0x384-0x3A1 (900-929) (0x8017E6D8, H); data chosen by progress ==
  0x3AC (940) or 0x3E8-0x44B (1000-1099) without flag 0x12D (0x80183E44, H). The 0x3A2 -> 0x3AC step (0x80184BA0)
  and the NPC band selector (0x80184B44: < 0x3B6 / < 0x3E8 / < 0x44C / < 0x4B0 / later) are F068 (H). The
  set(100) in progress.txt is in the own item / message handler 0x80189240: when the item flag given is 0x1F it sets
  progress 100 and flags 0xEB, 0x91, var 0xCE (H; M: village item code carried over, not a story step of this map).
* **Size:** 473 functions (own 67 + 7 dup, lone-shared 56, family 281: F007 F009 F067 F068 F069 F071 F072 F100
  F112; 41 actor dispatchers, 2 player-action dispatchers, 12 stubs; P01, P02).
* **Actors:** most NPC actors (A8-A37) are F067 / F068 / F069 / F112 villager code with a few own states each:
  RunScript calls for their talks (D_80191248, D_80191318, D_80191A54, D_80191BA8, D_80191F38, D_80191F70,
  D_801920BC, D_801921A0, H) and FindActorByKind(0x363 / 0x365 / 0x372 / 0x37D) partner look-ups (H). F100 (A29)
  spawns village set pieces 0x13F, 0x66, 0x65, 0x14C, 0x335, 0x3D9 in progress bands 100-599 / 200-419 (H).
  A39: a talker (S20 / S25). A40-A41: F007.
  * 0x8017E6D8 (own): a model placed at D_80191010 with script D_801B990C, only in progress 0x384-0x3A1 (H).
  * 0x8017E614 (S2): when GetPlayerAction() == 0, StartEvent D_80191028, then frees itself (H): an arrival scene.
* **Events / scripted scenes:** script callbacks set flags 0x110 (0x8017F174), 0x115 (0x80182540), 0x12D
  (0x80183DB8), and 0x124 with var 0x8A |= 0x40 (0x80181C1C) (H); SetProgress(0x3A2) (0x8017E5F4) (H).
* **Exits:** P01-style exit 0x8017DEA0: SoundCmd1(1) is skipped when var 0xCE is set or progress is in 0x384-0x3F1
  or 0x460-0x491 (H; M: the music keeps playing in those story stretches). 0x8017E778 picks a value 0x89 / 0x65 /
  0x28 / 0xF / 0x10 by the same progress bands and D_80078EAE (L: the village tune id).
* **Sound:** the message handler 0x80189240 plays 0x46F, 0x472, 0x474, 0x5EE, 0x45F (H; M: menu / shop sounds).
* **Unknown / notes:** S9 0x8018596C tests map id 0x3069 (H). Not all own functions read (time).

#### Names: SC05_017
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DEA0 | func_sc05_017_8017DEA0 | RoomExitStep | StartExitFade, music kept by progress / var 0xCE | H |
| 0x8017E5F4 | func_sc05_017_8017E5F4 | SetProgress3A2 | SetProgress(0x3A2) | H |
| 0x8017E614 | func_sc05_017_8017E614 | EventArrival | GetPlayerAction()==0: StartEvent D_80191028 | H |
| 0x8017E6D8 | func_sc05_017_8017E6D8 | StoryPropInit | only for progress 0x384-0x3A1 | H |
| 0x8017E778 | func_sc05_017_8017E778 | PickVillageTune | value by progress band | L |
| 0x8017F174 | func_sc05_017_8017F174 | SetFlag110 | SetFlag(0x110, 1) | H |
| 0x80181C1C | func_sc05_017_80181C1C | SetFlag124Var8A | var 0x8A bit 0x40, SetFlag(0x124) | H |
| 0x80182540 | func_sc05_017_80182540 | SetFlag115 | SetFlag(0x115, 1) | H |
| 0x80183DB8 | func_sc05_017_80183DB8 | SetFlag12D | SetFlag(0x12D, 1) | H |
| 0x80183E44 | func_sc05_017_80183E44 | PickSceneByProgress | data by progress 0x3AC / 0x3E8-0x44B | H |
| 0x80189240 | func_sc05_017_80189240 | ItemMessageHandler | message / item steps, SetProgress(100) for item 0x1F | M |
(about 55 more own functions not proposed.)

## Chapter: archive SC06

Progress about 1210-1590.

### SC06_000
* **Place:** the opening map of the sc06 block. Its room start 0x80180A50 sets progress 0x4BA (1210) (H), the lowest
  value of the chapter, so this is where the chapter begins (M). A wide room with a liquid-like surface whose level
  (D_sc06_000_801AEAFE) sets the height of floating, rotating platforms that carry Musashi (M); what the surface is
  in the game is unknown (L: water / lava). The F020 code it shares with sc02_011 / sc03_014/015 / sc03_024 /
  sc03_118/119 contains SetProgress(0x85) and SetFlag(0x16..0x1A) after a five-way choice (H, 0x8017DE8C); that is
  family code, and progress 0x85 would be far behind this map, so it is probably not reached here or is data-gated (L).
* **Size:** 314 functions (own 105 + 8 dup + 37 lone-shared; families F020 x52, F022 x15, F013 x15, F015 x8, F029 x7,
  F098 x5, F033 x5, F083 x3, F038 x3, F009 x3; 24 actor kinds; P01, P02).
* **Room start:** 0x80180A50: SetSkipSe(0x42E), ClearStatsWords, sets D_80078EA4 = 0xA00000, clears bit 7 of
  D_80078EC0, func_8002931C(0x1A40000), installs the engine's player-placement hook D_8011DB28 = 0x80180AB8 (H), which
  puts Musashi on top of the platform actor stored in D_sc06_000_801AECB4 (0x80183674: its x/z, y + a per-variant
  height table - 8, H). The engine calls that hook with the player's +0xA0 vector (engine func_8015369C), so a reset /
  re-entry position follows the moving platform (M).
* **Actors:**
  * A1-A10: mostly F020 effects/actors (A1-A5), F009 (A7 start), F013 / F022 / F029 shared code; A6 0x8017DFC0 [S27].
  * A7 (0x8017E218) and helpers 0x8017E35C (202 lines) / 0x8017EF68 (263 lines): two own GTE mesh renderers
    (RotTransPers of triangles/quads into OT, H) used by A11/A12 (0x801823BC, 0x80182464, 0x80182614, 0x8018270C) to
    draw the platforms and two big meshes D_sc06_000_8019FD8C / 80197B60 at the surface level (M).
  * A11 (0x80182348): platform hub. Set-up 0x80182CD8 picks a model by variant +0x70; variants 0-3 rotate (heading =
    variant << 10) and, except variant 2, spawn SpawnActorArg(0x26A, 4, self); variants >= 4 copy the parent's
    heading (H). 0x80182950: y = base + offset +0x100 + surface level - 0x131, UpdateModelZYX, and a distance-scaled
    looping sound 0xB6A (volume 0x7F within 0x40 units of D_sc06_000_8018C60C, fading to 0 by 0x140, H). 0x80182A30
    spawns four 0x26A children, 0x80182B68 spawns 0x26B (H). 0x80182E38 places children on a rotated offset that
    stretches as the parent's +0x100 sinks, and CarryPlayerExact (M: a spoke / arm that carries Musashi).
    0x80182B10 / 0x801829E8: lowering steps ending with sounds 0x929 + cmd 4,0x928 and 0x919 + cmd 4,0x918 (H).
  * A12 (0x80183088): 0x801830C4 spawns kind 0x271 and decrements a grand-parent counter +0x102 (H; M: a piece that
    is knocked off). 0x80183398: two variants bob up and down (+0x100 between 0 and -0x27F / -0x3BF in steps of 4 / 6)
    while D_sc06_000_801AECB0 is set, rotating +-4 per frame (H). 0x80183338 CarryPlayerScaled (H).
  * A13 (0x80183574): 0x801835B0 spawns a chain of 0x268 children from a (kind-arg, offset) list ended by -1; on
    variant 0 the third child becomes the platform Musashi is placed on (D_sc06_000_801AECB4, H).
  * A14 (0x80183638): 0x80183A1C: when Musashi stands on it (+0x74 set and GetPlayerByte1C7()==2) it ticks its
    parent model's +0x1A down by 0x800 per 4 frames; at 0 it bumps the parent's +0x102 counter (H; M: a pressure
    switch / step that sinks under Musashi). 0x80183C9C rides a rotating parent at a table offset and carries Musashi.
  * A15 (0x801836E0): set-ups 0x8018371C (spawns the 0x26A and 0x26B sets), 0x801838FC, 0x80183B20 (two
    RelocateSeqBlock objects + the 0x268 chain), 0x80183BC4, 0x80183DAC (scripted model, sound 0x92B). States
    0x80183790 / 0x8018381C start event scripts D_sc06_000_8018C558 / 8018C5A0 and wait (IsEventDone / EndEvent, H).
  * A16 (0x80183EFC): set-up 0x80183F38: variant 0 = model + sprite (StartSpriteAnim), else a scripted model at
    state 9 (H). 0x801840F8 sways the object and its parent +-3 per frame, calls RefreshDayLighting at timer 0x30,
    waits for func_8001AAA0(0x7B), then a pad/read check (0x8018278C) before 0x80184398: drop (y -0xA0), shadow,
    parent to state 2, sound 0x920 (H). 0x801845CC: free shadow/prop, sound 0x922 (H). M: something that falls when
    triggered.
  * A17 (0x801846BC): 0x801846F8: when its hit-kind +0x5E equals one of 8 values (D_sc06_000_8018CC30) it nudges the
    parent, spawns prop 0x59 on itself, starts event D_sc06_000_8018CB50, sound 0x91F; every call also requests 0x426
    (H). Set-up 0x80184B80 is rejected once flag 0x1A is set and spawns 0x2BB; 0x80184D68 spawns SpawnActorArg(0x2BB,
    1) on a timer (H). L: an object that reacts to a specific attack and is gone after flag 0x1A.
  * A18/A19 (0x80185318 / 0x8018593C): random ambient particles (rand x6 positions, SetTimer, H; M: bubbles/sparks).
  * A20-A24: small sprite / model actors (0x80185BE4 sprite, 0x80185DE0 model); A24 0x80186688 with a 117-line
    GTE sprite draw 0x80187B34 [S2].
* **Events / scripted scenes:** player action script 0x80180D5C (steps 0x80180D98..0x801814DC): camera set-up
  0x801815E8, camera target D_801274E8.y lowered with acceleration to 0x600000 then braked (0x80180DD4 / 0x80180E58),
  a 30-frame wait, then 0x80180F14 despawns kinds 0x2E6, 0x2F6, 0x2F5, 0x310, 0x2F2 if present (H), Musashi hidden /
  shown, a message D_sc06_000_80191F00 opened once effect 0x1A is gone and closed on the answer (0x80181114 /
  0x80181164, H), sounds 0x92A (H). Six camera modes 0x801815E8..0x801819F4 feed P02; 0x80181AB4 is a pad-steered
  camera (GetObjPadPressed + ratan2, H). 0x80182614: the surface level D_801AEAFC drops by 0x12000 per frame with a
  random camera shake every 3-10 frames; 0x8018270C finishes it and SelectCollisionMap(0) (H; M: a drain / sink scene
  that changes the floor).
* **Puzzles / mechanisms:** sinking step A14 counting into the parent (+0x102); A12 decrements the same counter (H);
  what the counter unlocks is in data (unknown).
* **Exits:** 0x80184A28 RequestMapChange(D_sc06_000_8018BFF0) (H); its caller is a table entry (unknown); destination
  unknown (data). P01 exit step 0x80180BF8.
* **Sound:** 0xB6A distance-faded loop (0x80182C10), 0xB39 with a 16x16 texture scroll (0x80181F78: rotates two 16-row
  tables by D_801AE6F0 >> 8 and MoveImage, H; M: animated surface texture), 0x918/0x919/0x928/0x929, 0x920-0x922,
  0x92A, 0x92B, 0x426.
* **Unknown / notes:** the meaning of kinds 0x268/0x26A/0x26B/0x271/0x2BB; the five despawned kinds are probably F020
  actors left from the shared code (L).

#### Names: SC06_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180A50 | func_sc06_000_80180A50 | RoomStart | entry->start; SetProgress(0x4BA), installs D_8011DB28 hook | H |
| 0x80180AB8 | func_sc06_000_80180AB8 | PlacePlayerHook | the D_8011DB28 hook, calls 0x80183674 | H |
| 0x80183674 | func_sc06_000_80183674 | GetRidePlatformPos | x/z/y of D_801AECB4 + height table | H |
| 0x80180D5C | func_sc06_000_80180D5C | EventIntroMain | PLAYER-ACTION-MAIN over +0x216 | M |
| 0x80180DD4 | func_sc06_000_80180DD4 | EventIntroCamDrop | lowers D_801274E8.y with acceleration | M |
| 0x80180E58 | func_sc06_000_80180E58 | EventIntroCamBrake | decelerates, sets a 30-frame wait | M |
| 0x80180F14 | func_sc06_000_80180F14 | EventIntroClearActors | despawns kinds 0x2E6/0x2F6/0x2F5/0x310/0x2F2 | H |
| 0x80181114 | func_sc06_000_80181114 | EventIntroOpenMsg | OpenMessage(D_80191F00) when effect 0x1A gone | H |
| 0x801815E8 | func_sc06_000_801815E8 | SetIntroCamera | SetCameraUpdate + SnapCamera | M |
| 0x80181AB4 | func_sc06_000_80181AB4 | CamPadSteer | GetObjPadPressed + ratan2 camera mode | M |
| 0x80181F78 | func_sc06_000_80181F78 | ScrollSurfaceTexture | rotates 16x16 tables, MoveImage, sound 0xB39 | M |
| 0x8017E35C | func_sc06_000_8017E35C | DrawMeshTris | GTE triangle mesh draw | M |
| 0x8017EF68 | func_sc06_000_8017EF68 | DrawMeshQuads | GTE quad/tri mesh draw, 5 callers | M |
| 0x80182348 | func_sc06_000_80182348 | PlatformHubMain | ACTOR-MAIN of A11 | M |
| 0x80182CD8 | func_sc06_000_80182CD8 | PlatformHubInit | AllocActorModel, spawns 0x26A | H |
| 0x80182950 | func_sc06_000_80182950 | PlatformHubFloat | y from surface level, sound 0xB6A | M |
| 0x80182C10 | func_sc06_000_80182C10 | UpdateHumVolume | distance-scaled SoundRequest(0xB6A) | H |
| 0x80182A30 | func_sc06_000_80182A30 | SpawnArms | four SpawnActorArg(0x26A) | H |
| 0x80182B68 | func_sc06_000_80182B68 | SpawnArm26B | SpawnActorArg(0x26B) | H |
| 0x80182E38 | func_sc06_000_80182E38 | ArmFollowHub | rotated offset from parent, CarryPlayerExact | M |
| 0x801825D8 | func_sc06_000_801825D8 | GetSurfaceLevel | returns D_801AEAFE | H |
| 0x80182614 | func_sc06_000_80182614 | SurfaceDrainStep | level drops, camera shakes | M |
| 0x8018270C | func_sc06_000_8018270C | SurfaceDrainDone | final draw, SelectCollisionMap(0) | M |
| 0x80183088 | func_sc06_000_80183088 | BobPlatformMain | ACTOR-MAIN of A12 | M |
| 0x80183398 | func_sc06_000_80183398 | BobPlatformMove | +0x100 oscillation while D_801AECB0 | H |
| 0x801835B0 | func_sc06_000_801835B0 | SpawnPlatformChain | 0x268 list, keeps the ride platform | H |
| 0x80183638 | func_sc06_000_80183638 | SinkStepMain | ACTOR-MAIN of A14 | M |
| 0x80183A1C | func_sc06_000_80183A1C | SinkStepUpdate | sinks while stood on, bumps +0x102 | M |
| 0x801836E0 | func_sc06_000_801836E0 | Actor15Main | ACTOR-MAIN of A15 (several set-ups) | M |
| 0x80183790 | func_sc06_000_80183790 | EventStartA | StartEvent(D_8018C558) | H |
| 0x8018381C | func_sc06_000_8018381C | EventStartB | StartEvent(D_8018C5A0) | H |
| 0x80183EFC | func_sc06_000_80183EFC | DropObjMain | ACTOR-MAIN of A16 | M |
| 0x80183F38 | func_sc06_000_80183F38 | DropObjInit | model + sprite set-up | H |
| 0x801840F8 | func_sc06_000_801840F8 | DropObjSway | sways, waits, then drops | M |
| 0x80184398 | func_sc06_000_80184398 | DropObjFall | shadow, sound 0x920 | M |
| 0x801846BC | func_sc06_000_801846BC | HitTargetMain | ACTOR-MAIN of A17 | M |
| 0x801846F8 | func_sc06_000_801846F8 | HitTargetCheck | hit-kind table, StartEvent(D_8018CB50) | H |
| 0x80184B80 | func_sc06_000_80184B80 | HitTargetInit | rejected when flag 0x1A | H |
| 0x80184A28 | func_sc06_000_80184A28 | RoomExit | RequestMapChange(D_8018BFF0) | H |
| 0x80185318 | func_sc06_000_80185318 | AmbientParticleMain | ACTOR-MAIN of A18, rand | M |

About 40 more own functions (A19-A24 states, small draw helpers) not proposed.

### SC06_006
* **Place:** a non-interactive cutscene map (M): a shot list drives a cast of 27 models, there is no player control,
  a button press skips it and it leaves by itself after the last shot. No progress set or tested (H). Sets flag
  0x143 = 1 and clears flags 0x6F-0x73 when the director spawns (0x801808C0, H). What the scene shows is unknown.
* **Size:** 138 functions (own 88 + 4 dup + 19 lone-shared; F098 x5, F018 x5; 4 actor kinds; P01, P02, P03).
* **Actors:**
  * Director (0x801808C0 set-up; A3 0x8017F594 block): spawns the cast with 0x8017FFA8: 27 x SpawnActorArg(0x34A, i)
    kept in D_sc06_006_801F80AC[], and 25 x 0x389 props in groups (arg 0-4, 0x100-0x106, 0x300-0x302, 0x400-0x409)
    attached to cast members, plus SpawnActor(0x38F) (H).
  * A1 (0x8017DD28): cast member: set-ups 0x8017DB90 / 0x8017EA18 load one of several models by variant +0x70 (H);
    0x8017DD64 animates three parts (M).
  * A2 (0x8017ECE8): particles placed with rand x9 (0x8017ED24), drawn as primitives (0x8017F074 AllocPrim / AddPrim,
    H; M: sparks or dust).
  * A4 (0x80181198): 0x80181658 [S3] GTE sprite drawer.
* **Events / scripted scenes:** shots 0x8017D428 .. 0x8017D9AC (22 tiny steps, each `+2 = next; 0x801800B8(shot)`),
  and 0x80180424 .. 0x80180840 (per-shot updates). 0x801800B8 (the shot starter, H): picks the camera mode
  (0x80180E68 -> SetCameraUpdate), sets D_801F8AEC, UpdateCamera, then runs a command list per cast slot: 0 hide,
  1 show + pose, 2 show + SetScript(arg), 3 store arg at +0xDC. 0x8017D04C switches Musashi's motion between
  D_800D5F14 / D_800D5FD4 (func_80154B7C, H). 0x8017F3E8 runs up to 12 effect slots and a 4-frame camera shake while
  D_801F80A4 (H). 0x8017FA2C draws a shaded quad whose colour turns green-ish when flag 0x81 is set (H).
* **Exits:** RequestMapChange(D_sc06_006_801857BC) either from 0x80180840 at frame 0x168 (360) of the last shot, or
  from 0x8017DA8C when func_800CF8B4() allows and the pad shows 0x800 or 0x40 (skip, H). Destination unknown (data).
  EnableMessageVoice follows both (H).
* **Sound:** 0x406 (volume falling from 0x7F to 0x1F after frame 0x171) and 0x407 on a beat (0x8017D730, H); a
  per-shot table of sound ids (0x8017FECC, D_801863A4 + i*20); 0xB49 (0x80180734).
* **Unknown / notes:** the meaning of flags 0x6F-0x73 (cleared here) and 0x143.

#### Names: SC06_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801808C0 | func_sc06_006_801808C0 | DirectorInit | sets flags, spawns cast | H |
| 0x8017FFA8 | func_sc06_006_8017FFA8 | SpawnCast | 27 x 0x34A, 25 x 0x389, 0x38F | H |
| 0x801800B8 | func_sc06_006_801800B8 | StartShot | camera mode + per-cast commands | H |
| 0x8017DA8C | func_sc06_006_8017DA8C | DirectorUpdate | shot table, counters, pad skip -> RequestMapChange | H |
| 0x80180840 | func_sc06_006_80180840 | ShotLastUpdate | RequestMapChange at frame 0x168 | H |
| 0x8017D04C | func_sc06_006_8017D04C | SetPlayerCutMotion | func_80154B7C with two motion sets | M |
| 0x8017D730 | func_sc06_006_8017D730 | ShotRumbleSounds | 0x406/0x407 on a beat | M |
| 0x8017FECC | func_sc06_006_8017FECC | PlayShotSound | SoundRequest(table[i]) | H |
| 0x8017F3E8 | func_sc06_006_8017F3E8 | UpdateShotEffects | 12 effect slots, camera shake | H |
| 0x8017FA2C | func_sc06_006_8017FA2C | DrawGlowQuad | shaded quad, flag 0x81 tint | M |
| 0x8017DD28 | func_sc06_006_8017DD28 | CastMain | ACTOR-MAIN of A1 | M |
| 0x8017DB90 | func_sc06_006_8017DB90 | CastInit | model by variant | M |
| 0x8017ECE8 | func_sc06_006_8017ECE8 | SparkMain | ACTOR-MAIN of A2 | M |
| 0x8017F074 | func_sc06_006_8017F074 | DrawSpark | AllocPrim / AddPrim | M |
| 0x80180E68 | func_sc06_006_80180E68 | SetShotCamera | SetCameraUpdate | H |
| 0x8017D428 | func_sc06_006_8017D428 | Shot0 | first shot, StartShot(D_8018597C) | M |

The other 21 shot steps (0x8017D460..0x8017D9AC, 0x80180424..0x801807EC) follow the same pattern: `ShotN` /
`ShotNUpdate`; not listed one by one.

### SC06_008
* **Place:** a field / dungeon room with mechanical enemies (F115, M). No own progress code; the SetProgress(0x5A) +
  SetFlag(0xEA) in the digest is inside the shared F023 talk/reward actor (0x80185274, gated by a per-instance flag
  table D_sc06_008_801A7328 and flag 0x1D, H), family code, not a placement of this map (M).
* **Size:** 171 functions (own 22 + 21 lone-shared; F115 x52, F023 x12, F041 x11, F035 x6, F031 x6, F051 x3,
  F010 x3, F009 x3; 14 actor kinds; P01 with an extra exit step 0x8017D38C [S65] without SoundCmd1; P02, P03).
* **Actors:**
  * A2 (0x8017C150): set-up 0x8017DA3C by variant: 0 = hub that spawns seven SpawnActorArg(0x305, 3) at table x/z,
    1 / 2 = scripted models, 3 = state 2 (H). 0x8017D73C: segment lists vs Musashi (ActorSegmentHitsPlayer, hit kind
    0x4004) at a height clamped to Musashi's y (H; M: a hazard / barrier). 0x8017DBB0 moves a child onto floor type
    0x1B toward Musashi and keeps the nearest distance in the parent's +0xDC; 0x8017DF28 turns that into the volume
    of loop sound 0x8B4 (stop with cmd 4 beyond 0x1E3FF) (H; M: a sound source that gets louder as he nears it).
  * A3 (0x8017DCD0): set-up 0x8017DD24 SetupActor (an enemy-style record) + three SpawnActorArg(0x25C, 0x555/0xAAA/
    0x1000) children at three angles (H; M: something with three rotating parts). 0x8017DFEC: texture strip
    animation via MoveImage (H).
  * A4 (0x8017E1A0): 0x8017E204 three emitters on random timers 0x20-0x5E frames spawning props via 0x8017E37C
    (SpawnPropAt, ratan2) (H; M: steam / sparks vents).
  * A5, A6: prop helpers (FreeProp, ProjectPointOtz).
  * A6 tail - A9: F115 (the rotor flyer and the sprayer mechs, see families). A10/A11: F041 (player knock-back
    reaction); A11 has its own copy 0x801848F0..0x80184AEC (sounds 0x92F, 0x930, 0x451; HitPlayer, H).
  * A12: F031 talker (spawns 0x1E3, RunScript D_801A6B60, sounds 0x5BF/0x888). A13/A14: F023 (flag-table reward
    talker, AddMoney, UploadFlagImages).
* **Exits:** none own; P01 exit steps 0x8017D2B4 and 0x8017D38C (H); destinations unknown (data).
* **Sound:** 0x8B4 distance loop; F115 panned sounds 0x849, 0x84A, 0x95F-0x961, 0xAF8, 0x9B7.

#### Names: SC06_008
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017C150 | func_sc06_008_8017C150 | HazardMain | ACTOR-MAIN of A2 | M |
| 0x8017DA3C | func_sc06_008_8017DA3C | HazardInit | variant switch, spawns 7 x 0x305 | H |
| 0x8017D73C | func_sc06_008_8017D73C | HazardHitPlayer | segment tests, hit kind 0x4004 | H |
| 0x8017DBB0 | func_sc06_008_8017DBB0 | TrackNearestToPlayer | min distance into parent +0xDC | M |
| 0x8017DF28 | func_sc06_008_8017DF28 | UpdateLoopVolume | SoundRequest(0x8B4, volume) | H |
| 0x8017DD24 | func_sc06_008_8017DD24 | TriPartInit | SetupActor + 3 x 0x25C | H |
| 0x8017DFEC | func_sc06_008_8017DFEC | AnimateTexture | MoveImage strips | M |
| 0x8017E204 | func_sc06_008_8017E204 | VentEmitters | three random-timer emitters | M |
| 0x8017E37C | func_sc06_008_8017E37C | VentEmit | SpawnPropAt + ratan2 | M |
| 0x801848F0 | func_sc06_008_801848F0 | KnockbackFall | CollidePlayerMove, PlaySe 0x92F | M |
| 0x80184AEC | func_sc06_008_80184AEC | KnockbackHit | HitPlayer, sounds 0x92F/0x930 | M |

### SC06_010
* **Place:** a machine room / field with F115 enemies and a large rotating hazard (M). No own progress code; the
  SetProgress(0x5A) / SetFlag(0xEA) is inside the F023 reward talker (as in SC06_008, H). The knock-back reaction
  0x8017D748 [S4] lowers Musashi 8 units when the current map id D_800B9A08 == 0x3083 (H): one of the four images
  sharing this shape serves map 0x3083 (which one is data).
* **Size:** 148 functions (own 28 + 16 lone-shared; F115 x52, F023 x12, F041 x11, F035 x3, F010 x3; 7 actor kinds;
  P01, P02).
* **Actors:**
  * Rotating hazard 0x8017E764 (152 lines, own): spawns its parts SpawnActorArg(0x238, 10) and more 0x238 from a
    list; aims at Musashi (ratan2), tests each 0x238 part in state 1 with PathHitsModel and calls HitPlayer(1, 0x4018,
    0, 0x20) on contact; while he is on it, it moves g_PlayerPosX around its centre on a radius (rsin(ang) * 0x1240)
    (H; M: a drum / wheel he rides or is carried round by). Loop sound 0x931 with volume by distance, stopped by cmd
    4 (H). 0x8017EE3C / 0x8017F024: part motion (rsin / rcos, UpdateModelZYX).
  * Own copy of the F115 rotor flyer (0x80180864 set-up, roam 0x8017FE3C, 0x80180170, hurt 0x8017F978, exhaust
    0x8017F600 SpawnActor(0x281), panned sounds via 0x8017F10C with an id argument): same logic plus RestorePrevPos
    calls (H; differs from F115 in code shape only).
  * 0x80180A88 (117 lines): draws 12 RelocateSeqBlock objects with the own GTE mesh drawers 0x8017BEBC / 0x8017CAD4
    (M: animated machine parts such as gears).
  * A1-A7 otherwise F115 / F041 / F023 / F010.
* **Exits:** none own (P01 only); destinations unknown (data).
* **Sound:** 0x931 distance loop, 0xB32, 0x84A, 0x451 (hurt).

#### Names: SC06_010
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E764 | func_sc06_010_8017E764 | WheelHazardUpdate | 0x238 parts, HitPlayer, circular carry, 0x931 | M |
| 0x8017EE3C | func_sc06_010_8017EE3C | WheelPartMove | rsin/rcos part motion | M |
| 0x80180864 | func_sc06_010_80180864 | RotorFlyerInit | SetupActor + two models (F115 twin) | M |
| 0x8017FE3C | func_sc06_010_8017FE3C | RotorFlyerRoam | wander + aggro (F115 twin) | M |
| 0x8017F10C | func_sc06_010_8017F10C | PlayPannedSound | RotTransPers pan, SoundRequest(id) | H |
| 0x80180A88 | func_sc06_010_80180A88 | DrawMachineParts | 12 seq blocks, mesh draw | M |
| 0x8017CAD4 | func_sc06_010_8017CAD4 | DrawMeshTris | GTE mesh draw | M |
| 0x8017D748 | func_sc06_010_8017D748 | KnockbackLand | map 0x3083 y fix, PlaySe(0x451) | M |

### SC06_011
* **Place:** a small interior / machine room (M) with a timed floor switch, several entrances (six entry variants)
  and actor-held exits (F116). No progress or flag code (H).
* **Size:** 100 functions (own 20 + 2 dup + 26 lone-shared; F116 x13, F088 x9; 8 actor kinds; P01 with two entry
  sequences and the extra exit step 0x8017D1D8 [S65]; P02, P03).
* **Room start:** six entry starters 0x8017CD9C..0x8017CF18 (func_8002931C + RestartSeqPlayer), one per entrance
  (M); five camera presets 0x8017D29C..0x8017D4FC with pad-steered modes 0x8017D5D0..0x8017D850 [S34] (H).
* **Actors:**
  * Floor switch 0x8017DB30: when Musashi stands on it (+0x74, GetPlayerByte1C7()==2) it sinks 0x20 and slides its
    linked object (+0x6C) in x by 0x10 per frame to -0x300 (loop sound 0x976 while on screen, 0x977 + cmd 4,0x976 at
    the stop), holds 150 frames, then rises and the object returns; CarryPlayer (H; M: a timed switch opening a
    sliding door / bridge).
  * 0x8017DF7C: a timed object (15-frame start, then 0x7F frames one way or the other by Musashi's z) drawn with
    0x8017DE14 primitives, sound 0xC46 (H; M: a beam / gate effect).
  * Set-ups 0x8017E0FC / 0x8017E1DC (dup), 0x8017E25C (spawns 0x2BE), 0x8017E2F4 (spawns 0x2BD) (H); 0x8017E3F8
    swings on rcos with sound 0xA66; 0x8017E17C stops 0xA66 and plays 0xA67 (H).
  * F088 walker (shared with sc03_031): 0x8017F7D4 / 0x8017F8F8 random-heading wander with floor check, sounds
    0x6AA, 0x9DA (M: a small creature).
  * F116: push current 0x8017E9F4 and the door exit script.
* **Exits:** F116 0x8017F510: RequestMapChange(+0xDC of the nearest door actor) after Musashi's walk-in script (H);
  destinations unknown (data). P01 exits 0x8017D100 / 0x8017D1D8.
* **Sound:** 0x976 / 0x977 switch, 0xA66 / 0xA67, 0xC46, 0x978 (F116 current).

#### Names: SC06_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DB30 | func_sc06_011_8017DB30 | FloorSwitchUpdate | sinks when stood on, slides +0x6C, 150-frame hold | H |
| 0x8017DF7C | func_sc06_011_8017DF7C | TimedBeamUpdate | timed states, prims, 0xC46 | M |
| 0x8017DE14 | func_sc06_011_8017DE14 | DrawBeam | AllocPrim / AddPrim | M |
| 0x8017E25C | func_sc06_011_8017E25C | Prop2BEInit | SetupActor, SpawnActor(0x2BE) | H |
| 0x8017E2F4 | func_sc06_011_8017E2F4 | Prop2BDInit | SetupActor, SpawnActor(0x2BD) | H |
| 0x8017E3F8 | func_sc06_011_8017E3F8 | SwingUpdate | rcos swing, 0xA66 | M |
| 0x8017F8F8 | func_sc06_011_8017F8F8 | WalkerPickHeading | rand target, HeadingToPoint | M |
| 0x8017D29C | func_sc06_011_8017D29C | SetCamera0 | SetCameraUpdate + SnapCamera (also 0x8017D334..0x8017D4FC) | M |

### SC06_013
* **Place:** a small room of the same set as SC06_011 (shares F116 and the 0x976 / 0x977 switch sounds, M); two
  entrances (0x8017CD9C, 0x8017CDE4). No progress or flag code (H).
* **Size:** 56 functions (own 5 + 16 lone-shared; F116 x13; 6 actor kinds; P01 + 0x8017D02C [S65]; P02, P03).
* **Actors:** 0x8017D564: switch / lift with the same 0x976 loop / 0x977 stop sounds and IsOnScreen test as SC06_011's
  floor switch (H; M: same kind of mechanism). 0x8017D700 model set-up; 0x8017D784 SetupActor + SpawnActor(0x29C);
  0x8017D804 SetupActor; 0x8017D87C: PathHitsModel -> HitPlayer (H: a hazard that hurts on contact). F116 current
  and door exit.
* **Exits:** F116 door exit (RequestMapChange from a door actor's +0xDC, H); P01 exits. Destinations unknown.

#### Names: SC06_013
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D564 | func_sc06_013_8017D564 | SwitchLiftUpdate | 0x976 / 0x977, IsOnScreen | M |
| 0x8017D784 | func_sc06_013_8017D784 | Prop29CInit | SetupActor, SpawnActor(0x29C) | H |
| 0x8017D87C | func_sc06_013_8017D87C | HazardTouch | PathHitsModel -> HitPlayer | H |

### SC06_014
* **Place:** a machine room of the F116 set (M) with a crushing press, two lifts / switches and small creatures; two
  entrances (0x8017D174, 0x8017D1BC). No progress or flag code (H).
* **Size:** 84 functions (own 23 + 22 lone-shared; F116 x13, F009 x3; 6 actor kinds; P01 + 0x8017D404 [S65]; P02,
  P03).
* **Actors:**
  * Press 0x8017D9E8: moves with MoveCollide; on impact sound 0xADB, a 60-frame wait, a ring of 16 SpawnKind205 dust
    puffs, then every frame a grid of segments over its 0x100 x 0x140 footprint damages Musashi (damage 0x64, hit
    kind 0x4002); CarryPlayer when he stands on it (H; M: a crusher block that can also be ridden).
  * 0x8017DC40: SetupActor + six SpawnActorArg(0x2D1) children by variant (H); 0x8017DDE0 / 0x8017DF08: two lifts
    with the 0x976 loop / 0x977 stop sounds of SC06_011 (H).
  * Wanderer (0x8017E29C set-up with SpawnShadowSized; states 0x8017E32C / 0x8017E3B8 / 0x8017E4B4 / 0x8017E5C0):
    random headings, TurnStep, a charge with sound 0x6FF that damages on contact (0x8017E8AC ActorSegmentDamagesPlayer),
    0x8017E9C0 distance-volume cry 0x6FE (H; M: a small enemy animal).
  * 0x8017E034 random scripted model; 0x8017E164 ActorTouchesPlayer; 0x8017E778 / 0x8017E80C show / hide by
    IsOnScreen (M: pop-up object).
  * Platforms 0x8017EA2C set-up, 0x8017EADC / 0x8017EB34 CarryPlayer (H); 0x8017EBA0 sounds 0xC45 / 0xADC.
* **Exits:** F116 door exit; P01 exits. Destinations unknown (data).

#### Names: SC06_014
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D9E8 | func_sc06_014_8017D9E8 | PressUpdate | impact 0xADB, dust ring, footprint damage 0x64, CarryPlayer | H |
| 0x8017DC40 | func_sc06_014_8017DC40 | PartsHubInit | SetupActor + 6 x 0x2D1 | H |
| 0x8017DDE0 | func_sc06_014_8017DDE0 | LiftAUpdate | 0x976 / 0x977 | M |
| 0x8017DF08 | func_sc06_014_8017DF08 | LiftBUpdate | 0x976 / 0x977 | M |
| 0x8017E29C | func_sc06_014_8017E29C | CritterInit | SetupActor, sized shadow | H |
| 0x8017E3B8 | func_sc06_014_8017E3B8 | CritterWander | TurnStep, forward velocity, timer | M |
| 0x8017E5C0 | func_sc06_014_8017E5C0 | CritterCharge | sound 0x6FF, contact damage | M |
| 0x8017E9C0 | func_sc06_014_8017E9C0 | CritterCry | distance volume 0x6FE | M |
| 0x8017EA2C | func_sc06_014_8017EA2C | PlatformInit | SetupActor, gravity | M |
| 0x8017EADC | func_sc06_014_8017EADC | PlatformCarry | CarryPlayer | M |

### SC06_015
* **Place:** a tiny connecting room of the F116 set (M); one entrance starter (0x8017D174). No progress or flag code.
* **Size:** 52 functions (own 1 + 14 lone-shared; F116 x13, F009 x3; 5 actor kinds; P01 + 0x8017D3F8 [S65]; P02,
  P03).
* **Actors:** only F116 (current + door exit), F009, and 0x8017D818 [S11] (func_800183E0, M: a texture /
  palette animation). One own camera preset 0x8017D4BC.
* **Exits:** F116 door exit; P01 exits. Destinations unknown (data).

#### Names: SC06_015
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D4BC | func_sc06_015_8017D4BC | SetRoomCamera | SetCameraUpdate + SnapCamera | M |

### SC06_016
* **Place:** a boss arena (H: an own enemy with HP, TakeDamage and a defeat routine that sets progress). Defeat sets
  progress 0x578 (1400) (0x8017EBB8, H); an exit step 0x8017DAC4 also sets 0x578 after a fade-out together with
  func_8002931C(0x3930000) and func_8002AED0 (H). Shares F116 with the small sc06 rooms, so it belongs to the same
  building (M).
* **Size:** 180 functions (own 83 + 4 dup + 19 lone-shared; F022 x15, F116 x13, F017 x8, F029 x7; 11 actor kinds;
  P01 with an extra exit 0x8017DA48 (sound commands then StartFade, not StartExitFade); P02).
* **Boss:** set-up 0x80182334: SetupActor, PlaceObject, spawns SpawnActor(0x2D9), (0x2EE), (0x30A) (H). Every state
  goes through 0x8017EEFC (pose index, PlaceObject, SetScript, ShowModel, H). Intro 0x80181B68: when Musashi's z
  passes 0x80 starts event D_sc06_016_80188AC4 and waits (H). Attack loop (state handlers 0x80181C78..0x80182008, each
  a timer then an action, M): 0x8017E114 (sounds 0x97D + 0xA90, prop from self), turn to Musashi + 0xA91
  (0x8017E190), 0x8017E1D8 (0x97E + 0xA92), 0x8017E26C (loop 0x97F, stopped by cmd 4), 0x8017E710 (0xA97, a lunge
  with SetLocalVelocity), SpawnActor(0x2FD) (0x8017E8A8 / 0x8018205C), 0x8017E910 (0x981, a ring of props
  0x8017EDA0), 0x8017E9CC (random PlaceObject x2 + 0xA94, M: a teleport), SpawnActorArg(0x2FF) (0x8017EAE4).
  Hurt 0x8017E54C: HP -= max(1, +0x60 * weapon factor >> 12); status effects; sound 0xA95 at most every 15 frames;
  hit kinds 1-4 / 8 add 1, others add 4 to a counter D_8019F70C (H; M: a stagger threshold). HP <= 0: 0x8017EBB8:
  drop, sound 0xA96, SetProgress(0x578), SoundCmd1(1), TakePlayerControl, RunScript(D_sc06_016_80188BFC) (H).
* **Actors:** 0x8017F784 (60 lines) drives five sub-parts (scale / update helpers) with a trail drawn by primitives
  (0x80180894) and PathHitsModel -> HitPlayer (0x80180D24) (H; M: the boss's swinging weapon or a spinning trap);
  0x80181290 / 0x80181840 aimed hazards that HitPlayer on contact; 0x80182744 a moving shot (sounds 0x983 / 0x984)
  spawning SpawnActorArg(0x303) (0x80181018); sprite effects 0x80180E24, 0x801810A4, 0x80181998. 0x8017E074: event
  D_sc06_016_80188974 when Musashi is within GroundDistSqToPlayer 0x6400 and D_8019F71C == 1 (H; M: talk after the
  fight).
* **Events / scripted scenes:** 0x801820E0 waits for an event and calls func_800D0CE0; 0x801822C4 / 0x801822FC hide /
  show Musashi (H); sound 0xC0B (0x801822A0).
* **Exits:** F116 door exit; exit steps 0x8017DA48 / 0x8017DAC4 (progress 0x578). Destinations unknown (data).

#### Names: SC06_016
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80182334 | func_sc06_016_80182334 | BossInit | SetupActor, spawns 0x2D9 / 0x2EE / 0x30A | H |
| 0x8017EEFC | func_sc06_016_8017EEFC | BossSetPose | PlaceObject + SetScript per state | M |
| 0x80181B68 | func_sc06_016_80181B68 | BossIntro | StartEvent(D_80188AC4) when z > 0x80 | H |
| 0x8017E54C | func_sc06_016_8017E54C | BossHurt | TakeDamage, HP, 0xA95, hit counter | H |
| 0x8017EBB8 | func_sc06_016_8017EBB8 | BossDefeat | SetProgress(0x578), RunScript(D_80188BFC) | H |
| 0x8017E114 | func_sc06_016_8017E114 | BossAttackA | sounds 0x97D / 0xA90 | M |
| 0x8017E26C | func_sc06_016_8017E26C | BossAttackLoop | loop 0x97F | M |
| 0x8017E710 | func_sc06_016_8017E710 | BossLunge | 0xA97, velocity toward Musashi | M |
| 0x8017E910 | func_sc06_016_8017E910 | BossRingAttack | 0x981, ring of props | M |
| 0x8017E9CC | func_sc06_016_8017E9CC | BossWarp | random PlaceObject, 0xA94 | M |
| 0x8017E8A8 | func_sc06_016_8017E8A8 | BossSpawn2FD | SpawnActor(0x2FD) | H |
| 0x8017EAE4 | func_sc06_016_8017EAE4 | BossSpawn2FF | SpawnActorArg(0x2FF) | H |
| 0x8017DAC4 | func_sc06_016_8017DAC4 | RoomExitAfterBoss | FadeDone(4), SetProgress(0x578) | H |
| 0x8017E074 | func_sc06_016_8017E074 | EventPostFight | StartEvent(D_80188974) near + flag | M |
| 0x8017F784 | func_sc06_016_8017F784 | BladeSetUpdate | five parts, trails, hits | M |
| 0x80180D24 | func_sc06_016_80180D24 | BladeHitPlayer | PathHitsModel -> HitPlayer | H |
| 0x80180894 | func_sc06_016_80180894 | DrawBladeTrail | AllocPrim x2 | M |
| 0x80182744 | func_sc06_016_80182744 | ShotFly | 0x983 / 0x984, spawns 0x303 | M |

About 30 more own helpers (sprite effects, part set-ups 0x80182638..0x80182B4C) not proposed.

### SC06_018
* **Place:** a large combat field of the sc06 machine area (M): almost all of it is the shared enemy families F115,
  F117, F118, F119 (the chain machine) and F041. No progress or flag code (H).
* **Size:** 304 functions (own 6 + 25 lone-shared; F117 x87, F115 x52, F118 x42, F119 x25, F041 x11, F098 x5, F120
  x4, F121 x3, F010 x3; 13 actor kinds; P01, P02).
* **Actors:** own: 0x8017DCC0: rises from y 0 to -0x60 at 8 per frame, sound 0xB02, then bobs on rsin for 0x400
  steps (H; M: something that surfaces / pops up). 0x8017DD88 SetupActor + script; 0x8017DE08 starts event script
  D_sc06_018_80197090 after a timer, with sound 0xB23, and 0x8017DE64 waits for it (H; M: a timed cutscene or
  message when the room opens). 0x8017D864 / 0x8017D874 vector-length helpers (gte_sqr0). 0x8017DC60 [S7]
  CarryPlayer platform; F121 sway actor. Everything else: F115 / F117 / F118 / F119 / F041 / F120 (see families).
* **Events / scripted scenes:** the timed event above; pad-steered camera 0x8017D4DC (55 lines, GetObjPadPressed).
* **Exits:** none own (P01). Destinations unknown (data).

#### Names: SC06_018
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DCC0 | func_sc06_018_8017DCC0 | RiseAndBob | y -8/frame to -0x60, 0xB02, rsin bob | H |
| 0x8017DD88 | func_sc06_018_8017DD88 | EventObjInit | SetupActor + SetScript | M |
| 0x8017DE08 | func_sc06_018_8017DE08 | EventObjStart | timer -> StartEvent(D_80197090), 0xB23 | H |
| 0x8017DE64 | func_sc06_018_8017DE64 | EventObjWait | IsEventDone / EndEvent | H |
| 0x8017D4DC | func_sc06_018_8017D4DC | CamPadSteer | GetObjPadPressed camera mode | M |

### SC06_020
* **Place:** a field of the same machine area (M): F117 enemies plus the F023 reward talker (whose shared code holds
  SetProgress(0x5A) / SetFlag(0xEA), H, family code). No own progress code.
* **Size:** 150 functions (own 2 + 14 lone-shared; F117 x87, F023 x12, F120 x4, F121 x3, F035 x3, F010 x3; 10 actor
  kinds; P01 + an extra exit [S65]; P02, P03).
* **Actors:** only shared families (F117 enemies, F121 sway platform, F120 effects, F023 / F035 talker). Own code is
  the camera preset 0x8017D3CC and pad camera 0x8017D4A0 (H).
* **Exits:** P01 only; destinations unknown (data).

#### Names: SC06_020
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D3CC | func_sc06_020_8017D3CC | SetRoomCamera | SetCameraUpdate + SnapCamera | M |
| 0x8017D4A0 | func_sc06_020_8017D4A0 | CamPadSteer | GetObjPadPressed | M |

### SC06_022
* **Place:** a machine-area field with breakable machinery and the F122 big mechanism (M). No progress or flag code
  (H). Room start 0x8017CDE4 sets three light / colour records (func_8002850C, func_80028620 x3), func_8002931C(
  0x3C00000), D_800B9B00 = D_800B9AAC = 0x7FFF, and installs its own spawn lists g_SpawnListA / B (H).
* **Size:** 273 functions (own 34 + 25 lone-shared; F117 x88, F115 x52, F122 x34, F010 x3; 15 actor kinds; P01,
  P02, P03).
* **Actors:**
  * Breakable machines: 0x8017DC0C / 0x8017E998 set-ups (SetupActor, StartImageAnim, link to another actor of the same
    kind); 0x8017DCA4: hit test 0x8017EFE0 (PathHitsMovingModel), TakeDamage, then spawns 0x2F1, 0x27A and the
    explosion pair 0x32 / 0x33, sound 0x9D8 (H); 0x8017EA6C (0x9D5, spawns 0x2F1); 0x8017EBE8 blinking break-up with
    0x9D6 and 0x32 / 0x33 (H). Debris 0x8017DF28 (0x955), 0x8017E104, scattered models 0x8017E448 / 0x801859F4.
  * 0x8017F0D4 / 0x8017F1C0: an emitter with a distance-volume loop 0x9D3 (cmd 4 to stop) (H).
  * 0x8017F604 / 0x8017F684 / 0x8017F704: SetupActor, then StartEvent(D_sc06_022_801910D0) with sound 0xB01, then a
    rise-and-bob with sound 0xB02 while waiting for the event (H; same pattern as SC06_018 0x8017DCC0).
  * F115 / F117 enemies; F122 mechanism (see families).
* **Events / scripted scenes:** the event above; four pad-steered camera modes 0x8017D5D8..0x8017D8D4, two of which
  restart the sequence player (0x8017DB58 RestartSeqPlayer) (H).
* **Exits:** P01 only; destinations unknown (data).

#### Names: SC06_022
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CDE4 | func_sc06_022_8017CDE4 | RoomStart | light records, spawn lists | M |
| 0x8017DC0C | func_sc06_022_8017DC0C | BreakableInit | SetupActor, image anim | M |
| 0x8017DCA4 | func_sc06_022_8017DCA4 | BreakableHit | TakeDamage, 0x2F1 / 0x27A / 0x32 / 0x33, 0x9D8 | H |
| 0x8017EFE0 | func_sc06_022_8017EFE0 | BreakableHitTest | PathHitsMovingModel | M |
| 0x8017EBE8 | func_sc06_022_8017EBE8 | BreakableExplode | ToggleModel blink, 0x9D6, explosion | M |
| 0x8017F1C0 | func_sc06_022_8017F1C0 | UpdateHumVolume | distance volume 0x9D3 | H |
| 0x8017F684 | func_sc06_022_8017F684 | EventObjStart | StartEvent(D_801910D0), 0xB01 | H |
| 0x8017F704 | func_sc06_022_8017F704 | EventObjRise | 0xB02 bob, IsEventDone | M |

### SC06_024
* **Place:** a machine-area room with a large own enemy (M: a mini-boss; no progress or boss flag is set, H) plus
  F115 / F117 / F122. One entry starter 0x8017CDE4.
* **Size:** 297 functions (own 44 + 27 lone-shared; F117 x87, F115 x52, F122 x34, F041 x11, F010 x3; 19 actor kinds;
  P01, P02, P03).
* **Boss:** big enemy (set-up 0x8017D89C: SetupActor, two sprites, StartImageAnim). Main 0x8017DBFC (159 lines):
  turns to Musashi (TurnStepToPlayer, TargetInFront), part matrices (GetPartWorldMatrix), aim line 0x8017EADC, a
  sweeping hit 0x8017EC4C (PathHitsModel -> HitPlayer, TraceMap), sounds 0x95A-0x95C, 0x962, 0x963 (H). 0x8017E1F0:
  a second attack that spawns from a definition (SpawnActorFromDef) with 0x953, 0x956-0x958 (H). 0x8017D804 /
  0x8017E8F8 hurt: only when +0x5C & 1 (a vulnerable phase); hit kinds 0x23 / 0x24 do a fixed 8 damage, kind 0x2A a
  tenth, others a fifth (H); HP between 0x1F and 0x32 sets phase bit 1, between 0xB and 0x1E bit 2 (H: two
  damage stages); HP <= 0 -> state 6. 0x8017E61C death: SpawnActorArg(0x3B4, i) pieces, stops 0x95A / 0x95C,
  sound 0xB92, sparks, then drop and FreeActor of actor kind 0x390 (arg 0) (H; M: its removal opens the way).
  0x8017F4FC emits props from three part matrices; 0x8017E548 distance-triggered 0x958 / 0x959.
* **Actors:** shots 0x8017F7F4 / 0x8017FA1C (0x954, 0x95D on impact), 0x8017FB28 (ActorTouchesPlayer); debris
  0x8017FCFC / 0x8017FFCC (explosion 0x33 / 0x32); platform 0x80180894 CarryPlayer; 0x80180724 spawns 0x263 when
  Musashi is near; 0x801809A8 SetupActor + 2 x 0x346; 0x80180C9C StartEvent(D_sc06_024_801936E4) when near (H);
  0x80180D98 sound 0xC2A; 0x8018036C sound 0xB26; 0x80181068 PathHitsMovingModel / CollidePath (a moving solid).
* **Exits:** P01 only; destinations unknown (data).

#### Names: SC06_024
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D89C | func_sc06_024_8017D89C | BigMechInit | SetupActor, sprites | M |
| 0x8017DBFC | func_sc06_024_8017DBFC | BigMechMain | aims, attacks, sounds 0x95A-0x963 | M |
| 0x8017EC4C | func_sc06_024_8017EC4C | BigMechSweepHit | PathHitsModel -> HitPlayer | H |
| 0x8017EADC | func_sc06_024_8017EADC | BigMechAim | HeadingPitchTo, DebugDrawLine | M |
| 0x8017E1F0 | func_sc06_024_8017E1F0 | BigMechLaunch | SpawnActorFromDef, 0x956-0x958 | M |
| 0x8017E8F8 | func_sc06_024_8017E8F8 | BigMechHurt | hit-kind damage rules, HP stages | H |
| 0x8017E61C | func_sc06_024_8017E61C | BigMechDie | 0x3B4 pieces, 0xB92, frees kind 0x390 | H |
| 0x8017F4FC | func_sc06_024_8017F4FC | BigMechSparks | props from part matrices | M |
| 0x8017FA1C | func_sc06_024_8017FA1C | MechShotFly | 0x954, impact 0x95D | M |
| 0x80180C9C | func_sc06_024_80180C9C | EventNearStart | StartEvent(D_801936E4) | H |
| 0x80180724 | func_sc06_024_80180724 | Spawner263 | SpawnActor(0x263) near Musashi | M |

### SC06_025
* **Place:** a boss arena (H: a scripted opponent, kind 0x2CD, whose end sets progress 0x5DC (1500) in 0x80180D84;
  an exit step 0x8017D258 also sets 0x5DC after FadeDone(4) with func_8002931C(0x41A0000) and func_8002AED0, H).
  The F023 reward talker (SetProgress(0x5A), family code) is also present.
* **Size:** 199 functions (own 115 + 3 dup + 22 lone-shared; F023 x12, F041 x11, F035 x3; 11 actor kinds; P01 with
  an extra exit 0x8017D1D0-ish step that fades with StartFade(4); P02, P03).
* **Boss:** a round-based fight without an HP check in the own code (H: no TakeDamage / ShowDamage in sc06_025; M).
  Arena set-up 0x8017E6C0 spawns the opponent SpawnActorArg(0x2CD) and its set: 0x2C7 x4, 0x2C8 x4, 0x2CA x4,
  0x2CB x2, 0x327 x3, 0x2C9, 0x32F x2 (H). Opponent states go through PlaceObject(D_801889F8) + SetScript
  (0x80180284 state 2 clears flag 0x11E; 0x80180300 state 3). Each round 0x80180300 increments a round counter
  (D_801B1714 + 1); below 4 it starts event D_sc06_025_80188E40 and sets D_801270C8 = 2, at 4 it calls the defeat
  0x80180D84 (H: three rounds). 0x801824B4 / 0x801825EC run event D_80188D50 and react to flags 0x11E / 0x120 set by
  the event scripts (clear them, change the opponent's script) (H). 0x801808AC (state 5) opens message
  D_sc06_025_80189BE4 with TakePlayerControl; 0x8018098C opens message D_801897FC and waits for the answer, with
  sounds 0x9DB (H). Defeat 0x80180D84: state 8, func_8002A088(0x190), sound 0xA98, SetProgress(0x5DC), SoundCmd1(1),
  RunScript(D_sc06_025_80188F18) (H).
* **Actors:** 0x8017E430 starts event D_sc06_025_801887C4 after a timer with sound 0xC0C (H; M: the opening scene);
  0x80183228 StartEvent(D_801892CC) + 0xB01, then rise / bob 0xB02 (as in SC06_018 / 022); SpawnActor(0x3B9)
  (0x8017D318); sounds 0xC0E, 0xC0F, 0xC10, 0xC11.
* **Sound:** 0x801817A8 issues sound command 0x27 with an argument from table D_801894F8 indexed by the round state,
  and waits until func_8002D80C() returns that value (H; L: switching the music track between phases).
* **Exits:** 0x80183068 RequestMapChange(D_sc06_025_801886A4) after placing kind 0x2CD at D_80188EDC (0x80183020
  area, H); destination unknown (data).

#### Names: SC06_025
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E6C0 | func_sc06_025_8017E6C0 | ArenaInit | spawns 0x2CD and its set | H |
| 0x8017E430 | func_sc06_025_8017E430 | EventOpening | timer -> StartEvent(D_801887C4), 0xC0C | H |
| 0x80180300 | func_sc06_025_80180300 | RivalNextRound | round counter, StartEvent(D_80188E40) or defeat | H |
| 0x801808AC | func_sc06_025_801808AC | RivalTalk | OpenMessageEx(D_80189BE4), TakePlayerControl | H |
| 0x8018098C | func_sc06_025_8018098C | RivalAsk | OpenMessageEx(D_801897FC), answer | H |
| 0x80180D84 | func_sc06_025_80180D84 | RivalDefeat | SetProgress(0x5DC), RunScript(D_80188F18) | H |
| 0x801824B4 | func_sc06_025_801824B4 | RivalEventFlags | event D_80188D50, flag 0x11E | M |
| 0x801825EC | func_sc06_025_801825EC | RivalMsgFlags | flag 0x120, message answer | M |
| 0x801817A8 | func_sc06_025_801817A8 | SyncSoundCmd27 | SoundRequest(0x27, table), func_8002D80C | M |
| 0x80181700 | func_sc06_025_80181700 | TurnToFront | TurnStep to heading 0 | H |
| 0x8017D258 | func_sc06_025_8017D258 | RoomExitAfterBoss | FadeDone(4), SetProgress(0x5DC) | H |
| 0x80183068 | func_sc06_025_80183068 | RoomExit | RequestMapChange(D_801886A4) | H |
| 0x80183228 | func_sc06_025_80183228 | EventObjStart | StartEvent(D_801892CC), 0xB01 | H |
