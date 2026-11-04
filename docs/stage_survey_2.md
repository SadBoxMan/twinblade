# Stage survey, part 2 of 3 (r275)

Continues `docs/stage_survey.md`; method, names, the timeline and the shared patterns are in `docs/stage_survey.md`.

## The village and its surroundings (archive SC03)

The village (SC03_001) and its variants, and the maps around it, across the whole story (progress 20-1120).

Common reading used below (all from sc03_001 code, cited once here):
* **Game clock**: byte D_80078EB1 = hour 0-23, D_80078EB0 = minute 0-59 (H: ovl36 func_800D0D7C wraps them at 60 / 24).
  Village code tests "hour in [a,b)" (func_8018766C, F068) and "hh:mm in [t0,t1)" (func_80187690, F068), and builds
  minutes-of-day D_801EEAEC = hour*60+minute (func_80180078) (H).
* **Chapter index**: func_801877C0 (F068) maps progress to 0-4 by thresholds 0x14/0x46/0x64/0x82 (20/70/100/130);
  func_80187904 maps progress to 0-4 by 0x3B6/0x3E8/0x44C/0x4B0 (950/1000/1100/1200) (H). Villager talk scripts are
  picked by these indices (H).
* **Inventory slots**: ovl36 func_800D0F8C(a) finds the inventory slot (vars 0x2F-0x3A) holding item a,
  func_800D0F4C(a) removes item a, func_800D0F0C(i, v) puts item v in slot i (H: ovl36 code). Names below:
  FindItemSlot / TakeItem / PutItem (proposed, M).

### SC03_001
* **Place:** the village (Grillin Village hub, L for the name) in its first version. Code shows a day/night clock world:
  16 house-window lights switched on by clock windows, villagers placed by hour, a positional ambient sound, house
  doors kind 0x61 that open, a shop/inn menu (H for the mechanisms, M for "village"). The brief's village ids are
  0x1010/0x1052/0x1077/0x1094 (which one this image serves is data). Progress: sets 0x3AC (940) when progress is
  exactly 0x3A2 (930) (func_80187960, F068, H); the shop menu sets progress 100 (0x64) and flags 0xEB, 0x91, var 0xCE
  when the bought/used entry is flag-kind item 0x1F (func_8018C000 case 15, F069, H). Tested progress bands: 0x14,
  0x1E, 0x46, 0x55..0x181, 0x64, 0x6E, 0x82, 0x87, 0xC8, 0xDC, 0xE6, 0x1F4, 0x258, 0x276, 0x384, 600, 950, 930 (H)
  — i.e. this image is used across the whole story (M).
* **Size:** 496 functions (own 89 + dup 12, stubs 18, 43 actor dispatchers, S-shapes 58; families 269: F067 112,
  F068 69, F069 39, F070 21, F071 17, F072 4, F007 4, F009 3; P01, P02, PLAYER-ACTION-MAIN x2).
* **Actors:**
  * A1-A3 (0x8017BE9C..): F068 point-list spawner (func_8017BF50 spawns up to 16 SpawnFromDef def 0x158 or SpawnProp(0x11)
    from a list at +0xDC) and F068 small model props.
  * A4-A5 (0x8017C338, 0x8017C5CC): S27 / F009 effect actors (SpawnEffect 0x11 / 0x12, M: dust or splash).
  * Own walker (dispatcher func_8017DA48 over D_80191044, set-up func_8017DB6C): present only for 0x14 <= progress < 0x46
    and not when flag 0xE5 is set (unless progress == 0x3C) (H). Wanders: every 20-30 frames picks a new heading, turns
    back toward home point D_80191010 when far, random turn when near (func_8017D734, H); a second mode follows actor
    kind 0xAD at +0x20/+0x20 offset (func_8017DCE4, freed when 0xAD is gone, H); script-set mode +0xFC 0-3 (H).
    L: a village animal (dog / chicken) that follows a villager.
  * A7 (0x8017DEAC): morning light effect: at hour 7 starts 4 entries in D_801EE888, fades their colours with rsin,
    stops after hour 9 when all are done (func_8017DEE8 / func_8017DF78, H). L: dawn mist / sun shafts.
  * A8 (0x8017EEA8) and A15-A30, A33-A34: the **villagers** (F067 + F068 + F069 + F070 + own glue). Each set-up
    allocates a model, picks a state by progress band and by hour (func_8018766C), places itself at a schedule point
    (func_80187778 = hide + place), spawns a talk marker with a talk handler (SpawnTalkMarker), and walks point paths
    (func_80187994 start path, func_80187A64 step: 8x faster while PlayerFlag80B, M) between its house door (kind 0x61,
    asked to open by func_801886A0) and spots in the village (H for the mechanics). Talking runs a script chosen by
    chapter index / conversation counters: vars 0xD6-0xD9 (pair of villagers kinds 0xA2 / 0xA4, func_80182F3C, who
    only talk as a pair when the other is present), var 0xDA (func_80184968), var 0xDB (func_8018631C, progress 0x87
    split) (H). One-time talk flags: 0x110, 0x113, 0x115, 0x116 (F067 GetFlag/SetFlag pairs, H). Villager
    func_80185B54 (A30): states by progress 0x14/0x1E/0x64/0x6E/0x82; between 0x64 and 0x6E it stands at a fixed spot
    and spawns kind 0x157 and calls func_8014CB68 (H; M: a story scene in chapter 3). A22 func_80181A68 loads stage
    extra file 4 (LoadStageFileA) and runs script D_80191C58 once (H).
  * A31-A32 (0x80185C60, 0x80185CD8): villagers whose per-state code lives in a **stage extra file**: LoadStageFileA(1/2)
    then calls 0x801EF46C / 0x801EF558 / 0x801EF58C / 0x801EF624 / 0x801EF734 / 0x801EF904 (H): that code is not in the
    repo. Their schedule tests clock 10:00-10:30 and 15:00-15:30 (func_80185DC8 / func_80185E44, flag 0xDF, H). A
    follower actor (func_8018617C) sticks to kind 0xAA at a 0x40 offset and changes script on +0xFC (H).
  * A36 (0x8018691C): actor set up for progress < 0x1E or < 0x46 (two states), else gone (func_80186A8C, H).
  * A37 (0x80186F4C) F068: a **two-leaf gate**: leaves +0x70 = 0/1 rotate to +-0x600 (open) once flag 0xF6 is set or
    progress >= 0xE6; while closed, leaf 0 has a talk marker; the script outcome (func_80187004) plays sound 0x7A0,
    sets flag 0xF6, removes item 0x59 from the inventory (TakeItem), and signals actor kind 0x1F2 (H). M: a gate opened
    with a key item 0x59.
  * A38/A39 (0x801875EC, 0x80187C74) F068: **house doors** (kind 0x61, M): door model per index +0x70, swings open with
    sound 0x514 and closed with 0x515 (func_801881A0 / func_8018828C, H); talk handler func_8018872C (own) fires when
    Musashi stands in the door's front area and no villager is there, except on map 0x3069 (H); the script is picked by
    door index and conditions (func_80188830, F072: D_80078EBA = 0/2/3/6, progress 300-600 with flag 0xFA, 100-600,
    chapter indices) (H; M: "closed / nobody home" texts).
  * A40 (0x80188B44) F068: a marker that snaps to the nearest kind-0x61 door to Musashi (func_80188BFC, H).
  * Room manager (set-up func_80180134): spawns kinds 0x13F, 0x66, 0x65, 0x14C, 0x335, 0x3D9 (H); its frame
    (func_80180078) updates the minutes-of-day clock, draws the 16 window lights (func_8017F258 -> func_8017F2AC ->
    func_8017F368: yellow additive quads, fading in/out over 16 minutes at each window's own time, e.g. 19:00-21:00,
    6:00-7:00; some windows also gated by progress 0x64-0x258 or 0xC8-0x1A4) and runs the ambient sound (H).
  * A9 (0x8017F7C8) F071: between hours 7 and 19 spawns kind 0x140 at random offsets every 0x50 frames (H; L: birds).
  * A13 (0x8017F9D4): a swaying model (random angular kicks, S2) (H; L: a weathervane or sign). F071 sprite / prop
    actors (func_80180224 .. func_80180574), one hidden for progress 0x181-0x1D5 (func_801804D0, H).
  * A41-A42 F007 (particle props), func_8018CEA8: spawns kind 0x21 when progress is 100-129 (index 0) or 950-999
    (index 1) (H).
  * A43 (0x8018CF54): generic talk NPC (S20 set-up, script from table D_801EB468 by +0x70) (H).
* **Events / scripted scenes:** all talk: RunScript + IsEventDone / EndEvent in each villager; F067 / F070 handlers
  (func_8018739C: Musashi in an area in front of the villager's door) start house-door conversations (H). Two
  PLAYER-ACTION-MAIN entry walks (P01).
* **Puzzles / mechanisms:** the key gate (flag 0xF6, item 0x59); time-of-day schedules; the shop / inn menu
  (F069, func_80188FDC .. func_8018D0E4): goods lists by shop type D_80115126 (type 3 = 4 entries and extra goods
  unlocked by flags 0x11D, 0x1B-0x21, a count of >= 0x1B, and all 42 collectibles: vars 0x63-0x8C bit 0x40), message
  windows and choice cursor, sounds 0x45A-0x474 / 0x5EE / 0xC62, buy / use writing flags or inventory slots
  (PutItem), and a rest option that calls AddHp, AddBp, ClearStatsWords (H; M: shop + inn).
* **Exits:** P01 exit step (func_8017E578: sound 0x1C/0x1D, SoundCmd1(1), StartExitFade). Extra exit variants:
  func_8017E648 (fade only) and func_8017E69C (SoundCmd1(1) only when var 0xCE is set) (H). No RequestMapChange in
  stage code: house doors / map exits are data (unknown).
* **Sound:** ambient positional sound 0x7E6 from point D_80191968: pan from screen x, volume from distance, stopped by
  SoundRequest(4, 0x7E6) off-screen (func_8017FC00, H; L: river / mill). 0x464 (villager, F067), 0x7A0 gate, 0x7E0.
* **Unknown / notes:** much villager behaviour is in the stage extra files (0x801EF4xx-0x801EF9xx) and in scripts.
  The camera set-up func_8017E91C (dist 0x4B0, angle 0x238, proj 0x1F4) is the village camera. Map id 0x3069 is tested
  by the door talk (H); what it is is unknown.

#### Names: SC03_001
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D5F0 | func_8017D5F0 | AvoidActorPath | PathHitsModel + RestorePrevPos against kind 0xAD | M |
| 0x8017D734 | func_8017D734 | WalkerWander | turns every 20-30 frames, home point D_80191010 | M |
| 0x8017D8A8 | func_8017D8A8 | WalkerApproach | heads to points, TurnStep, kind 0xAD | M |
| 0x8017DA48 | func_8017DA48 | WalkerMain | own dispatcher D_80191044, mode from +0xFC | H |
| 0x8017DB6C | func_8017DB6C | WalkerInit | SetupActor; progress 0x14-0x46, flag 0xE5 | H |
| 0x8017DCE4 | func_8017DCE4 | WalkerFollow | follows kind 0xAD, freed without it | H |
| 0x8017DEE8 | func_8017DEE8 | DawnLightStart | waits for hour 7, starts 4 entries | H |
| 0x8017DF78 | func_8017DF78 | DawnLightUpdate | rsin colour fade, ends after hour 9 | M |
| 0x8017E1B4 | func_8017E1B4 | DawnLightRestart | re-arms one entry | M |
| 0x8017E3D8 | func_8017E3D8 | RoomFrame | UpdateDayLighting + fog + func_800D06E8 | M |
| 0x8017E494 | func_8017E494 | RoomEntryStep | StartPlayerAction + StartFade(0) | H |
| 0x8017E508 | func_8017E508 | RoomEntryStepB | second entry walk, 10-frame timer | M |
| 0x8017E69C | func_8017E69C | RoomExitStepVar | SoundCmd1(1) gated by var 0xCE | H |
| 0x8017E91C | func_8017E91C | RoomInitCamera | camera distance/angle/projection set, SnapCamera | H |
| 0x8017EA1C | func_8017EA1C | CameraModeVillage | calls F068 pad camera + S9 transform | M |
| 0x8017EDB8 | func_8017EDB8 | Villager1Init | progress bands + hour 10-16 states, talk marker | H |
| 0x8017EFD4 | func_8017EFD4 | Villager1Schedule | hour/progress test then hide | M |
| 0x8017F258 | func_8017F258 | DrawWindowLight | per-window time test D_801918A4[i] | H |
| 0x8017F2AC | func_8017F2AC | DrawWindowLightQuads | colour from fade, loops quads | H |
| 0x8017F368 | func_8017F368 | DrawWindowLightQuad | RotTransPers4, AddPrim | H |
| 0x8017FD90 | func_8017FD90 | WindowLitTime2 | clock window test (one of 16) | M |
| 0x8017FE60 | func_8017FE60 | WindowLitTime6 | 6:00-7:00 or 19:00-21:00, not progress 0xC8-0x1A4 | H |
| 0x8017FF08 | func_8017FF08 | WindowLitTime8 | 2:30-4:00, not progress 0x64-0x258 | H |
| 0x80180078 | func_80180078 | RoomManagerFrame | minutes-of-day, window lights, ambient sound | H |
| 0x80180134 | func_80180134 | RoomManagerInit | spawns six kinds | H |
| 0x8017FC00 | func_8017FC00 | UpdateAmbientSound | pan/volume sound 0x7E6 | H |
| 0x80180A58 | func_80180A58 | VillagerSetScript | SetScript helper | M |
| 0x80180ECC | func_80180ECC | VillagerTalkChoice | UpdateScript answer picks one of two scripts | H |
| 0x80180FF8 | func_80180FF8 | Villager3Init | talk marker set-up | M |
| 0x80181948 | func_80181948 | FindPartnerA2 | FindActorByKind(0xA2) | H |
| 0x80181A68 | func_80181A68 | VillagerLoadExtraScene | LoadStageFileA(4) + script D_80191C58 | H |
| 0x80182F3C | func_80182F3C | PickPairTalkScript | vars 0xD6-0xD9, kinds 0xA2/0xA4 | H |
| 0x80184968 | func_80184968 | PickTalkScriptVarDA | var 0xDA | H |
| 0x80185B54 | func_80185B54 | Villager30Init | progress bands, kind 0x157 | H |
| 0x801856A8 | func_801856A8 | Villager30TalkCheck | four door areas, ResetScriptVM | M |
| 0x801859AC | func_801859AC | Villager30Walk | path steps, door open | M |
| 0x80185DC8 | func_80185DC8 | ExtraVillagerClock1 | 10:00-10:30 / 15:00-15:30 | H |
| 0x80185E44 | func_80185E44 | ExtraVillagerClock2 | same with flag 0xDF | H |
| 0x80186124 | func_80186124 | FollowerInit | model D_801E6640 | M |
| 0x8018617C | func_8018617C | FollowerUpdate | sticks to kind 0xAA | H |
| 0x8018631C | func_8018631C | PickTalkScriptVarDB | var 0xDB, progress 0x87 | H |
| 0x80186A8C | func_80186A8C | Villager36Init | progress < 0x1E / < 0x46 | H |
| 0x80186C54 | func_80186C54 | Villager36Talk | DistSqToPlayer + ResetScriptVM | M |
| 0x8018872C | func_8018872C | DoorTalkCheck | area test, map 0x3069 excluded | H |
| 0x8018CD98 | func_8018CD98 | ParticleTimer | TickTimer then F007 spawn | M |

n more own functions not proposed: about 30 (villager state glue, set-ups with only a model, F068-like wrappers).

Engine-side helpers seen in village stages (ovl36, H from its code and comments): func_800D06E8 = per-frame map music /
ambient state (picks the map's track; in village maps 0x1010-0x1011 / 0x1077-0x1078 / 0x1094-0x1095 starts sound
0x517 / 0x518 by the time-of-day period) -> "UpdateMapMusic" (M); func_800D06CC = restart that state; func_800D0CA0(a)
= SoundCmd1(a) + restart; func_800D0CE0 = wait until the progress-chosen track is ready (M).

### SC03_002
* **Place:** a village version (shares 95 shapes with the hub: F068 house doors / villager helpers, F072, F007; H).
  Story placement: the opening village visit. Sets progress 0x14 (20) together with flag 0xE1 and word var 10 = 0x1011
  (func_8017E8B0, only while progress < 0x14, flag 0xDF set and var(10) bit 0x40) (H; 0x1011 looks like a village map id,
  M); sets progress 0x87 (135) at the end of a villager scene (func_80181BCC, H); F068 0x3A2 -> 0x3AC (H). Progress
  0x85-0x86 (133-134) is a special band: music restart (F073 func_8017EAE8), several villagers absent / present only
  then (H). Things freed at progress >= 0x492 (1170) (F073, H): so the image serves the village up to late in the game
  (M).
* **Size:** 260 functions (own 38 + dup 2, stubs 20, 27 dispatchers, S 47; F068 67, F073 29, F025 10, F007 4, F072 4,
  F036 3; P01, P02, three PLAYER-ACTION-MAIN).
* **Actors:**
  * A1-A2: F036 (other group). A3-A4: F068 point-list spawner / props.
  * A5 (0x8017CF30): F025 (other group: item / reward handler with StartEventKeepPlayer, sounds 0x828 / 0x829,
    SpawnActorArg 0x30 / 0x1F8, flag table D_8018926C).
  * Hazard (func_8017E4E4, S2): within 0x200 of Musashi spawns prop 0x22 every other frame, hurts him on segment contact
    (g_PlayerHitDamage = 0xC), plays sound 0x644 with volume by distance, stops it with SoundRequest(4, 0x644) (H).
    L: a fire / steam vent.
  * A6 (0x8017E6CC): model launched forward (velocity 0xC0000), absent once var 0xCD is set (func_8017E7FC, H).
  * Opening-visit walker (func_8017E8B0, own): appears at Musashi's position at heading 0xF00, walks off; its set-up is
    what sets progress 0x14 / flag 0xE1 (H). M: a character met on the first visit.
  * A7-A12: F073 (this group): sky / line effect between two points (func_8017EBD0 / func_8017EC98), debris props
    (func_8017F068 / func_8017F304), a model present for progress >= 0x3B6 except 0x460-0x487 (func_8017F500).
  * A13 (0x8017FAE8) F073: talk NPC absent when flag 0xF0 set; script by var 0x40 (set to 2) (H).
  * A14-A15 villagers (own + F073 + F068): func_801816F0 schedule set-up with two talk markers; A15 talk before / after
    progress 0x82 (130) (func_80181844 / func_80181A64), both loading stage extra file 3 (H). func_80181BCC: loads
    extra file 3, runs script D_80189ADC, waits for flag 0x10A, turns to heading 0x1E0, then sets progress 0x87 and
    SoundCmd1-restart (func_800D0CA0(1)), waits for the track, ends the event (H).
  * A16 (0x80181D3C): scripted walker: waits, walks toward D_80189CEC, idles with random scripts every 180-211 frames,
    reacts when +0x102 is set by script (H). M: a villager in a scene.
  * A17 (0x8018225C): present only at progress 0x85-0x86, spawns kind 0x266 and calls func_8014CB68; helpers track
    kind 0x266; sound 0x525 (H).
  * A18-A19 F073: a spinning model (random spin-up / spin-down, gone at progress >= 0x492) and a model that spawns
    kind 0x3BF (H; L: windmill sails).
  * Trigger actor (func_80182964 / func_801828C0, own): only at progress == 0x14 and flag 0x10B clear; when
    g_PlayerFlags bit 0x08000000 is set starts event D_80189D4C, then sets flag 0x10B and frees itself (H).
  * A20 onwards: F068 doors (sounds 0x514 / 0x515, map 0x3069 test), F072 door texts, F007 particles, S6 kind-0x21
    spawner, A26 S20 talk NPC (script table D_801C2E38), F068 key gate (flag 0xF6, sound 0x7A0).
* **Events / scripted scenes:** a PLAYER-ACTION scene (func_80180290 .. func_80180710): BeginScene, an object moves
  for +0x200 frames, then camera shake, six debris props and six F073 props, sound 0x842 (func_80180378, H; M: a crash
  or explosion). func_801805B0 puts kind 0x19C above it (H). Event D_80189D4C (flag 0x10B) at progress 0x14.
* **Exits:** P01 exit steps as the hub (incl. the var-0xCE SoundCmd1 variant); no RequestMapChange in stage code.
* **Sound:** 0x644 (hazard), 0x842 (scene), 0x525, 0x514 / 0x515 doors, 0x7A0 gate.
* **Unknown / notes:** three own camera set-ups (func_80180770 S8, func_80180834, func_801808F8) and an own camera
  mode func_80180A38 (H: SetCameraUpdate / SnapCamera). Calls into extra files at 0x801CBB54 / 0x801CBBDC (H).

#### Names: SC03_002
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E8B0 | func_sc03_002_8017E8B0 | FirstVisitWalkerInit | progress < 0x14 + flag 0xDF; sets progress 0x14, flag 0xE1 | H |
| 0x8017EA28 | func_sc03_002_8017EA28 | FirstVisitWalkerStep | timer state of the walker | L |
| 0x80180014 | func_sc03_002_80180014 | RoomRestartMusic | func_800D06CC only | M |
| 0x80180290 | func_sc03_002_80180290 | SceneCrashEnd | EndScene, player motion | M |
| 0x801802F4 | func_sc03_002_801802F4 | SceneCrashFall | MoveEffect, effect spawn | M |
| 0x80180378 | func_sc03_002_80180378 | SceneCrashImpact | camera shake, debris, sound 0x842 | H |
| 0x80180570 | func_sc03_002_80180570 | SceneCrashBegin | BeginScene + place | H |
| 0x801805B0 | func_sc03_002_801805B0 | PlaceMarker19C | moves kind 0x19C above the object | H |
| 0x80180710 | func_sc03_002_80180710 | SceneWaitTrack | func_800D0CE0 then next handler | M |
| 0x80180834 | func_sc03_002_80180834 | RoomInitCameraB | SetCameraUpdate + SnapCamera | H |
| 0x801808F8 | func_sc03_002_801808F8 | RoomInitCameraC | same, other parameters | H |
| 0x80180A38 | func_sc03_002_80180A38 | CameraModeScene | camera mode calling S9 transform | M |
| 0x801813E4 | func_sc03_002_801813E4 | Villager14Talk | DistSqToPlayer + ResetScriptVM talk handler | M |
| 0x801815AC | func_sc03_002_801815AC | Villager14Walk | path steps, door open | M |
| 0x801816F0 | func_sc03_002_801816F0 | Villager14Init | progress, two talk markers | M |
| 0x80181844 | func_sc03_002_80181844 | Villager15TalkEarly | script before progress 0x82 | H |
| 0x80181A64 | func_sc03_002_80181A64 | Villager15TalkLate | extra file 3, script after 0x82 | H |
| 0x80181BCC | func_sc03_002_80181BCC | EventSetProgress87 | flag 0x10A wait, SetProgress(0x87) | H |
| 0x80181D78 | func_sc03_002_80181D78 | SceneWalkerUpdate | walk to point, idle scripts | M |
| 0x801821B4 | func_sc03_002_801821B4 | SpawnWalkerDust | SpawnPropFrom at rcos/rsin offset | M |
| 0x8018235C | func_sc03_002_8018235C | Visitor266Init | progress 0x85-0x86, spawns kind 0x266 | H |
| 0x801822F8 | func_sc03_002_801822F8 | PlaySound525 | SoundRequest(0x525) | H |
| 0x80182964 | func_sc03_002_80182964 | FlagEventInit | progress 0x14 and flag 0x10B clear | H |
| 0x801828C0 | func_sc03_002_801828C0 | FlagEventRun | event D_80189D4C, SetFlag(0x10B) | H |

n more own functions not proposed: about 12 (small state glue).

### SC03_003
* **Place:** a small room with a scripted Musashi sequence and a button exit; no progress values (H). F074 is shared
  with sc03_126 / sc04_021 / sc05_019 (the identical-code trio), so it is one of a set of similar small rooms (M).
  L: a well / pit or a lookout reached from the village.
* **Size:** 55 functions (own 5, stubs 5, S 10, 2 dispatchers; F074 19, F006 4; P01, P02, P03, three PLAYER-ACTION-MAIN).
* **Actors:** A1 (0x8017BEBC): F074 effect sprite (AllocSprite16To3E, timer) + S8 effect tick. F006 (other group) and
  an S15 chunked mesh draw (0x8017C6F4) with the P03 renderer. A2 (0x8017F1A0): F074 **exit trigger**: when the pad
  button 0x800 is pressed and func_800CF8B4 allows, sets D_8018FB78 = 1 and RequestMapChange(+0xDC record) (H).
* **Events / scripted scenes:** Musashi action script: falls (AddFallSpeedLimited 0x1A000) until landing, BeginScene
  (func_8017ED44); when within 0x190 of the point (F074 func_8017EC64) opens message D_801830B0 with motion and sound
  0x7E7, then two more messages D_801830D8, D_8018310C on answers, then closes and continues (H). All skipped once the
  exit flag D_8018FB78 is set (H).
* **Exits:** two P01-style exit steps (S100, sound 0x1C/0x1D, SoundCmd1(1)); the button exit RequestMapChange
  (destination data, unknown).
* **Sound:** 0x7E7 at the first message.

#### Names: SC03_003
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EA10 | func_sc03_003_8017EA10 | ActionLookMessage1 | distance < 0x190, OpenMessage, PlaySe 0x7E7 | H |
| 0x8017EADC | func_sc03_003_8017EADC | ActionLookMessage2 | answer -> next message | H |
| 0x8017EB6C | func_sc03_003_8017EB6C | ActionLookMessage3 | answer -> next message | H |
| 0x8017EBF4 | func_sc03_003_8017EBF4 | ActionLookMessageEnd | close, next handler | H |
| 0x8017ED44 | func_sc03_003_8017ED44 | ActionFallLand | fall until ground, BeginScene | H |

### SC03_006
* **Place:** a large field with enemies, treasure-like flag holders and a big moving set-piece; day lighting runs
  (UpdateDayLighting, UpdateMapMusic) so it is an outdoor map (M). Sets progress 0x5A (90) and flag 0xEA when the
  flag-holder whose flag is 0x54 is collected (func_80187060, H). Tests boss flag 0x8B (H), progress 0x20, 0x70, 200,
  0x138, 0x4B0 (H). One function tests map id 0x3028 (H), so this image may serve more than one map (M).
* **Size:** 393 functions (own 58 + dup 4, stubs 13, 24 dispatchers, S 56; families 222: F021 35, F075 30, F043 17,
  F076 16, F013 15, F056 15, F023 12, F044 12, F024 11, F025 10, F003 8, F028 8, F030 6, F032 6, F008 4, F034 4,
  F077 4, F009 3, F035 3, F037 3; P01 x10, P02, five PLAYER-ACTION-MAIN).
* **Actors:**
  * F025 item / reward handler (flag table D_80190450, sounds 0x828 / 0x829) and F021 / F013 / F023 / F024 / F043 /
    F044 / F056 (other groups).
  * Flag holders (0x80186F14 .. 0x80187180, own): pick a script by whether flag 0x1D is set and the holder's +8 bits,
    set a flag from table D_801C9634 / D_801C94EC; flag 0x54 -> progress 0x5A + flag 0xEA; with flag 0x1D calls
    UploadFlagImages(0); a full set calls func_8002AC00(0x26) (H). M: collectibles / chests whose contents are data.
  * Set-piece (A at 0x80182290, func_801822CC / func_801823B8, own): near Musashi starts event D_80190C14 (boss flag
    0x8B clear) or D_80190C24 (set) (H); then, if flag 0x121 is clear and GetStatsByteC0() matches, waits for a
    player action (HUD panel opened, GetPlayerByte1C7 == 3), plays sound 0xB11, sets flag 0x121, SoundCmd1-restart (H).
    The room frame func_80182A44 then draws a large own mesh (func_8017F510, 586 lines) that moves by up to 0x71
    steps with repeated camera shakes; with flag 0x121 already set it is skipped (H). M: something sinks / rises
    after Musashi uses an ability; flag 0x121 records it.
  * Var-0xCC actor (func_80181454 .. func_8018163C, own): a model that reacts to var 0xCC (set to 2, 0x10) and leaves
    (H); flags 0x142 cleared, var 0xCC = 2 (func_80180CAC, H). A6-like launched model gated by var 0xCD (as sc03_002).
  * Hazard func_80181694 (own copy of sc03_002's): sound 0x5A5 by distance, damage on segment contact (H).
  * Flag-0x138 actor (func_80183744 .. func_80183864): finds kind 0x3C9, sets flag 0x138, SoundCmd1-restart, event
    D_80190DC8 on a player action (H); func_80182EA8 restarts music when flag 0x138 is set (H).
  * Enemies: F075 (mime-animated melee enemy, sounds 0x7F / 0x524 / 0xA74), F076 (enemy with DropItem, sound 0x662 /
    0xAA1), own enemy 0x8018A124 .. 0x8018AD7C (patrols random points, TargetInSight, chases, segment damage,
    SpawnKind13, sounds 0x6A9 / 0x660 / 0x6AA, death via func_8002AC00 tally) (H for calls, M for "enemy"); a
    spawner of kind 0x125 / 0x240 / 0x8F (H). func_8018B9F8 sets flag 0xF0 (H).
* **Events / scripted scenes:** events above; five PLAYER-ACTION-MAIN scripts (entry walks and the set-piece).
* **Exits:** P01 exits (ten step functions; one exit step reads progress) (H). No RequestMapChange in own code.
* **Sound:** 0xB11 (set-piece loop, stopped by SoundRequest(4, 0xB11)), 0x5A5 hazard, 0xBFE / 0x62E, 0x51F-0x522.
* **Unknown / notes:** own camera mode func_80181228 reads the pad (GetObjPadPressed) (H: a player-turnable camera).

#### Names: SC03_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F510 | func_sc03_006_8017F510 | DrawSetPieceMesh | 586-line GTE mesh draw from the room frame | M |
| 0x80180CAC | func_sc03_006_80180CAC | RoomResetVarCC | flag 0x142 = 0, var 0xCC = 2 | H |
| 0x8018112C | func_sc03_006_8018112C | RoomInitCamera | SetCameraUpdate + SnapCamera | H |
| 0x80181228 | func_sc03_006_80181228 | CameraModePad | pad-driven camera transform | M |
| 0x80181694 | func_sc03_006_80181694 | HazardUpdate | sound 0x5A5 by distance, damage | H |
| 0x801818D8 | func_sc03_006_801818D8 | HazardHitsPlayer | ActorSegmentHitsPlayer x6 | H |
| 0x801822CC | func_sc03_006_801822CC | SetPieceInit | flag 0x121 | M |
| 0x801823B8 | func_sc03_006_801823B8 | SetPieceTrigger | events by flag 0x8B, sets flag 0x121, sound 0xB11 | H |
| 0x80182A44 | func_sc03_006_80182A44 | RoomFrame | set-piece motion + camera shake + lighting | H |
| 0x80183774 | func_sc03_006_80183774 | SetFlag138 | SetFlag(0x138) + music restart | H |
| 0x801837C4 | func_sc03_006_801837C4 | Event138Run | StartEvent D_80190DC8 | H |
| 0x80186F14 | func_sc03_006_80186F14 | FlagHolderTalk | picks script by flag 0x1D | H |
| 0x80187060 | func_sc03_006_80187060 | FlagHolderTake | sets progress 0x5A on flag 0x54 | H |
| 0x8018A1B4 | func_sc03_006_8018A1B4 | Enemy3Chase | TargetInSight, SpawnKind13, sound 0x6A9 | M |
| 0x8018ACD0 | func_sc03_006_8018ACD0 | Enemy3Init | SetupActor, shadow, hidden | M |
| 0x8018B9F8 | func_sc03_006_8018B9F8 | SetFlagF0 | SetFlag(0xF0, 1) | H |

n more own functions not proposed: about 40.

### SC03_007
* **Place:** an outdoor map with a multi-step **chase sequence** driven by byte var 0xCC (H); no progress set; tests
  progress 0x32 (50) and 0x384 (900) (H). M: an early-game area (progress 50) revisited later.
* **Size:** 256 functions (own 125 + dup 30, stubs 8, 14 dispatchers, S 34; F078 8, F030 6, F032 6, F034 5, F006 4,
  F007 4, F008 4; P01, P02).
* **Actors:**
  * Runner (func_80180C74 set-up, func_801810E4 move, own): exists only for var 0xCC = 2/4/6/8/10/12, each step with
    its own start value (+0xE0 = 0xB4 .. 0x14A); at progress 0x32 and on odd steps plays sound 0xC4D (H). It walks
    toward per-step points; on arrival advances var 0xCC to the next odd step (2->3, 4->5 ...) (H).
    func_8017D740 advances odd -> even (3->4 ... 13->14, 14->15) (H), func_80181A44 starts the chase (var 0xCC = 1,
    sets the player's target to the runner) (H). M: a chase / tag game over six legs; var 0xCC 0xF = finished.
  * Talk NPC (func_80181CF8): absent at progress >= 0x384 and, for index 0, while 3 <= var 0xCC < 0xF (H).
  * Reward actor (func_8018471C): appears only when all 13 flags 0x40-0x4C are set and var 0x89 is clear; copies VRAM
    rects (MoveImage) (H). L: a reward for collecting 13 things.
  * Burst spawner (func_8018574C): spawns random kinds from table D_8018C7F0 in a cone, SoundCmd1(1) every 30 frames
    (H; M: fireworks / celebration).
  * Walker func_8017EFD4 (scaled model, set-up gated by func_80180454); F078 debris / particle props (this group);
    F030 / F032 / F034 / F006 / F007 / F008 (other groups); own enemy copy (SpawnKind13, sounds 0x6A9 / 0x660).
* **Events / scripted scenes:** RunScript D_8018C138 (talk); flag 0x142: one-time, sound 0xC4D on repeats
  (func_8017D468) (H).
* **Exits:** P01 exits; one exit step tests flag 0x117 before SoundCmd1 (H).
* **Sound:** 0xC4D (chase cue), 0x525-0x527, 0xB2D.

#### Names: SC03_007
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D468 | func_sc03_007_8017D468 | TouchFlag142 | GetFlag/SetFlag 0x142, sound 0xC4D | H |
| 0x8017D740 | func_sc03_007_8017D740 | ChaseNextLeg | var 0xCC odd -> even | H |
| 0x8017EFD4 | func_sc03_007_8017EFD4 | ScaledWalkerInit | SetupActor, scale from rcos/rsin | M |
| 0x80180C74 | func_sc03_007_80180C74 | ChaseRunnerInit | per-step start, sound 0xC4D | H |
| 0x801810E4 | func_sc03_007_801810E4 | ChaseRunnerRun | points per step, var 0xCC even -> odd | H |
| 0x80181A44 | func_sc03_007_80181A44 | ChaseStart | var 0xCC = 1, player target | H |
| 0x80181CF8 | func_sc03_007_80181CF8 | ChaseNpcInit | progress 0x384, var 0xCC | H |
| 0x8018471C | func_sc03_007_8018471C | RewardInit | flags 0x40-0x4C, var 0x89 | H |
| 0x8018574C | func_sc03_007_8018574C | CelebrationBurst | random kinds, SoundCmd1(1) | M |

n more own functions not proposed: about 110 (many dup16 / small helpers).

### SC03_010
* **Place:** a **timed challenge course** (H for the mechanics: countdown, checkpoints in byte var 0xCE, retry by map
  change). No progress values (H). Var 0xCE is also tested by the village exit step (SoundCmd1 only when var 0xCE is
  set, sc03_001 func_8017E69C), so the challenge is entered from the village (M). L: a trial / race event.
* **Size:** 102 functions (own 10, stubs 4, 4 dispatchers, S 17; F079 38 (shared with sc03_013), F080 10, F033 5,
  F081 3; P01 x8, P02, two PLAYER-ACTION-MAIN).
* **Actors:**
  * F079 course logic (this group): start scene sends sound command 0x1A, the finish scene 0x1B (H); a countdown on
    screen (func_8017ECE8: +0xFC frames, shown as seconds with func_800242D0) that on reaching 0 resets var 0xCE to 1
    and ends the player action (H); checkpoint test func_8017DB84: if var 0xCE is in the checkpoint's range it is
    raised to the checkpoint's value, otherwise var 0xCE = 1 (H); checkpoint markers switch texture when var 0xCE >=
    their index (func_8017EA58, H); a carrier platform (func_8017F7E0, CarryPlayer) with a height-based sound 0x547
    (H). Sounds 0x540-0x544 (H).
  * Indicator kind 0xC7 (own helpers func_8017EDA8 / func_8017EDD8 / func_8017EE30): its +0xFC set from table
    D_80183CF4[var 0xCE] (H). M: a sign / gate showing the current checkpoint.
  * Own hazard func_8017E69C (segment hits player) and launched model func_8017E744 (as sc03_002 A6) (H).
* **Exits:** func_8017DD44 (F079): RequestMapChange(&D_80183A5C) from a Musashi action step (H): a fixed record in
  the stage's data (destination unknown; M: back to the village or a restart).
* **Sound:** sound commands 0x1A / 0x1B (start / end of the challenge music, M), 0x540-0x547.

#### Names: SC03_010
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D9BC | func_sc03_010_8017D9BC | RoomExitWaitTrack | func_8001AAA0 then step | L |
| 0x8017E69C | func_sc03_010_8017E69C | HazardHitsPlayer | ActorSegmentHitsPlayer x2 | H |
| 0x8017E744 | func_sc03_010_8017E744 | LaunchedModelInit | model + local velocity | M |
| 0x8017EDA8 | func_sc03_010_8017EDA8 | FindIndicator | FindActorByKind(0xC7) | H |
| 0x8017EDD8 | func_sc03_010_8017EDD8 | ShowCheckpointOnIndicator | table by var 0xCE | H |
| 0x8017EE30 | func_sc03_010_8017EE30 | ResetIndicator | kind 0xC7 reset | M |
| 0x8017F090 | func_sc03_010_8017F090 | CountdownSpriteInit | AllocActorSprite | M |

### SC03_013
* **Place:** a second **timed challenge course** sharing F079 / F080 / F081 with sc03_010 (H), plus a story part:
  sets progress 0x3D4 (980) at the end of an event (func_8017FAA8, H); an actor present only at progress 0x3D4
  (func_8017FE88) starts event D_80184FB0 (H). Indicator kind is 0x1EF here (H).
* **Size:** 123 functions (own 26, stubs 4, 6 dispatchers, S 19; F079 38, F080 10, F033 5, F081 3; P01 x8, P02,
  three PLAYER-ACTION-MAIN).
* **Actors:**
  * F079 course (see SC03_010), RequestMapChange(&D_80184A94) (H).
  * Item gates (func_8017DB84 / func_8017DC38 / func_8017DD98, own): by type 1/4/8 test a flag or an inventory item
    (FindItemSlot), then set the flag, take the item (TakeItem) and open a message (H). M: doors opened with keys.
  * Hazard pair (func_8017EA08 / func_8017EAB0 / func_8017EE28 / func_8017EEA4): PathHitsModel -> HitPlayer (H).
  * Flag actors (func_8017F0A0 / func_8017F198): present until their flag (table D_80184E90) is set; an event
    (StartEvent from table D_80184E84) sets it and frees the actor (H).
  * Story actor (func_8017FAA8): SpawnKind205 effects with random directions, sounds 0x9E2 / 0x9E3, waits for the
    event, then SetProgress(0x3D4) (H). Sprite checkpoints test flags with sound 0x854 (func_8017F958, H).
* **Exits:** F079 RequestMapChange(&D_80184A94) (destination unknown) and P01 exits.
* **Sound:** 0x1A / 0x1B, 0x540-0x547, 0x854, 0x9E2 / 0x9E3.

#### Names: SC03_013
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DB84 | func_sc03_013_8017DB84 | ItemGateCheckFlag | flag by type 1/4/8, action marks | M |
| 0x8017DC38 | func_sc03_013_8017DC38 | ItemGateCheckItem | FindItemSlot | H |
| 0x8017DD98 | func_sc03_013_8017DD98 | ItemGateOpen | SetFlag, TakeItem, OpenMessage | H |
| 0x8017EE28 | func_sc03_013_8017EE28 | HazardFaceHit | FaceHelper x2 + hit test | M |
| 0x8017EEA4 | func_sc03_013_8017EEA4 | HazardHitPlayer | PathHitsModel -> HitPlayer | H |
| 0x8017F0A0 | func_sc03_013_8017F0A0 | FlagActorInit | flag table D_80184E90 | H |
| 0x8017F198 | func_sc03_013_8017F198 | FlagActorDone | event done, SetFlag, free | H |
| 0x8017ECD0 | func_sc03_013_8017ECD0 | FlagActorTalk | StartEvent from table | H |
| 0x8017F958 | func_sc03_013_8017F958 | CheckpointSpriteFlag | GetFlag, sound 0x854 | M |
| 0x8017FAA8 | func_sc03_013_8017FAA8 | EventSetProgress3D4 | SpawnKind205, SetProgress(0x3D4) | H |
| 0x8017FE88 | func_sc03_013_8017FE88 | StoryActorInit | progress 0x3D4 only | H |
| 0x8017FF28 | func_sc03_013_8017FF28 | StoryActorTalk | StartEvent D_80184FB0 | H |

### SC03_011
* **Place:** an outdoor map (day lighting) tied to the challenge course: shares F080 with sc03_010 / sc03_013, reads
  var 0xCE (=9 suppresses the map music) and flags 0x90 / 0x95 (H). Story: sets progress 0x3CA (970) in a scene
  (func_80180694) and 0x3F2 (1010) with TakeItem(0x6C) (func_80180EA8), in a scene that exists only at progress 0x3E8
  (1000) (func_80180A10: sets the scene clock from D_80078EAC days * 24 + hour) (H). Tests 0x32, 0x82, 0x3B6 (H).
* **Size:** 157 functions (own 90 + dup 5, stubs 10, 12 dispatchers, S 18; F080 10; P01 x8, P02, P03, two
  PLAYER-ACTION-MAIN).
* **Actors:**
  * Exit steps (func_8017D888 / next): set flag 0x90 on leaving (H); room frame func_8017E5B8 runs map music only
    when var 0xCE != 9, flag 0x95 clear and flag 0x90 set (H). M: first-visit silence, then music.
  * Talk sequence (own message chain, D_80185EC8 .. D_80186068): five messages; the second answer sets flag 0xBD (H).
    Sprites present until flag 0xBD (sound 0x854) (H).
  * Course entry (Musashi action): var 0xCE 0 / 1 set and tested; F080 start / end scenes (sound commands 0x1A / 0x1B);
    despawns kind 0x83 (talk marker) at start (H).
  * Story NPCs: one with talk marker absent once flag 0xF2 is set or before progress 0x82; its event D_8018570C sets
    flag 0xF2 (H); progress-0x3E8 scene actor spawns kind 0x374 and runs events D_80185870 / D_80185948 / D_80185BDC
    (H). func_80180E04 / 80180EE0 drive two scene actors through +0xFC (H).
  * Ambient: rotating prop spawner sound 0x67D; hazard sound 0x645 by distance; var-0xCD launched model (as
    sc03_002); a model spawning kind 0xE1; sounds 0x54F / 0x550; 0xB3D (H).
* **Exits:** P01 (with flag 0x90). No RequestMapChange in own code.
* **Sound:** 0x645, 0x67D, 0x54F / 0x550, 0x854, 0xB3D.

#### Names: SC03_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D888 | func_sc03_011_8017D888 | RoomExitStepSetFlag90 | SetFlag(0x90) + P01 exit | H |
| 0x8017DC08 | func_sc03_011_8017DC08 | RoomStartScene | TakePlayerControl, BlendCameraThen, progress 0x3E8 | M |
| 0x8017E5B8 | func_sc03_011_8017E5B8 | RoomFrame | lighting + music gate var 0xCE / flags 0x90, 0x95 | H |
| 0x80180694 | func_sc03_011_80180694 | SceneSetProgress3CA | SetProgress(0x3CA) | H |
| 0x80180A10 | func_sc03_011_80180A10 | Scene3E8Init | progress 0x3E8 only, clock copy | H |
| 0x80180E04 | func_sc03_011_80180E04 | SceneActorsSetScript | two SetScript | M |
| 0x80180E4C | func_sc03_011_80180E4C | TurnPlayerToActor | TurnStep on Musashi's model | H |
| 0x80180EA8 | func_sc03_011_80180EA8 | SceneSetProgress3F2 | SetProgress(0x3F2), TakeItem(0x6C) | H |

n more own functions not proposed: about 80.

### SC03_012
* **Place:** a short **collapse / earthquake scene** room (H for the mechanics: repeated camera shakes, falling-piece
  props, a forced map change). Its entry step sets progress: 0x3E8 (1000) if progress >= 0x3D4 (980), else 0x82
  (130) with flag 0xEE; and increments byte var 0xCD on every entry (func_8017D548, H). Var 0xCD is the counter that
  removes the "launched model" actors in sc03_002 / sc03_006 / sc03_011 (H there), so this scene changes those maps (M).
  So the image is used twice in the story: chapter 4 start (130) and late (1000) (H).
* **Size:** 38 functions (own 13 + dup 2, stubs 5, 2 dispatchers, S 7; F006 4; P01 x4, P02).
* **Actors:** A1 (0x8017D890): the scene object: set-up by +0x70 spawns sub-actors from defs, sound 0x556
  (func_8017D8CC); stages: sound 0x555 + camera shake (func_8017DA80), model swap + sound 0x557 + shake
  (func_8017DB28), swaying shake with debris props (func_8017DBE4 / func_8017DCB4), final shake then
  RequestMapChange(&D_80181B58) (func_8017DE18) (H). Two own camera modes (dup2, SetCameraUpdate) (H).
  A2 (0x8017DFCC): sprite props (dust) (H).
* **Exits:** the scripted RequestMapChange(&D_80181B58) (destination unknown); P01 exit (S65: no SoundCmd1) (H).
* **Sound:** 0x555, 0x556, 0x557.

#### Names: SC03_012
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D548 | func_sc03_012_8017D548 | RoomEntrySetProgress | SetProgress 0x3E8 / 0x82, flag 0xEE, var 0xCD++ | H |
| 0x8017D8CC | func_sc03_012_8017D8CC | QuakeSceneInit | sub-actors, sound 0x556 | H |
| 0x8017DA80 | func_sc03_012_8017DA80 | QuakeSceneShake1 | sound 0x555, StartCameraShake | H |
| 0x8017DB28 | func_sc03_012_8017DB28 | QuakeSceneShake2 | model swap, sound 0x557 | H |
| 0x8017DBE4 | func_sc03_012_8017DBE4 | QuakeSceneSway | rsin sway, shake, debris | M |
| 0x8017DCB4 | func_sc03_012_8017DCB4 | SpawnQuakeDebris | SpawnPropFrom | M |
| 0x8017DE18 | func_sc03_012_8017DE18 | QuakeSceneEnd | shake + RequestMapChange | H |
| 0x8017DEF0 | func_sc03_012_8017DEF0 | QuakeCameraUpdate | camera set by state | M |
| 0x8017E008 | func_sc03_012_8017E008 | DustSpriteInit | StartSpriteAnim | M |

### SC03_014
* **Place:** a story map with a **big multi-phase fight** (F082, this group) that runs progress 0x2BC (700) ->
  0x2C6 (710) -> 0x2D0 (720) -> 0x2DA (730) (H: SetProgress calls in F082 0x80184F14 / 0x80185380, tests in
  0x80185180 / 0x801856C4). Also F020 (other group) sets progress 0x85 (133) with flag 0x16, or flags 0x17-0x1A,
  by D_80126B3A (H), and F013 / F023 / F024 code like sc03_006 (M: same region). No own code: every function is
  family, S-shape, stub or P01/P02 (H).
* **Size:** 313 functions (own 0, stubs 14, 22 dispatchers, S 39; F082 75, F020 52, F013 15, F022 15, F056 15, F023 12,
  F024 11, F017 8, F029 7, F009 3, F035 3, F038 3, F083 3, F084 3; P01 x8, P02, four PLAYER-ACTION-MAIN). The split
  pieces _o0 / _post are merged in the digest.
* **Actors / boss (F082):**
  * Opening trigger 0x80184A08 (same pattern as sc03_006's set-piece): events D_8018FE60 / D_8018FE70 by boss flag
    0x8B; with GetStatsByteC0() == 3 and a player action sets flag 0xB9, SoundCmd1(0), sound 0xBD8 (H).
  * Phase 1 (0x80184F14): after 6 counted hits sets progress 0x2C6, SoundCmd1(1), sound 0x8B5 then SoundRequest(0xD,
    0x8B5) (H).
  * Phase 2 (0x80185180): from progress 0x2D0: SoundCmd1(1), spawns kind 0x265 waves (args 5, 5, 0, 6), event
    D_80190078 (H).
  * Phase 3 (0x80185380): when the linked actor's +0x76 (HP, M) <= 0 starts an event at a computed point, then sets
    progress 0x2DA (H).
  * Attacker 0x801874C0: random wind-up sounds 0xA7F / 0xA80, sweeps three segments that damage Musashi
    (ActorSegmentDamagesPlayer, hit kind 4), sound 0xA89, spawns kind 0x3DE (H). Other F082 attacks spawn 0x265 /
    0x3DE with sounds 0xA35-0xA37, 0xA7E-0xA87 (H). Positional loop 0xBAB, 0x81E, 0x87A-0x87D; event D_80191ABC;
    kind 0x2B4 spawned when flag 0x18 is set (H).
  * Flag 0xB9 gates three F082 actors (H).
* **Events / scripted scenes:** RunScript D_8018FEE0 / D_8018FFA0 / D_8018FF38 from progress 0x2BC (H); events
  above. The flags 0x16-0x1A set in F020 are the same flags the village shop tests (0x1B-0x21 region) (H; M: a set of
  five collected things).
* **Exits:** P01 exits (three with SoundCmd1(1)).
* **Sound:** 0xBD8, 0x8B5, 0xA35-0xA37, 0xA7E-0xA89, 0xBAB, 0x81E, 0x87A-0x87D, 0x445.
* **Unknown / notes:** which creature this is is data (L: a boss). It does not set a boss flag 0x8A-0x8E itself (H).

#### Names: SC03_014
No own functions (all F082 / other families; F082 names are in G3_families.md).

### SC03_015
Same code as SC03_014 (H: identical shapes; 315 functions, two more S-shapes); differs only in data.

### SC03_023
* **Place:** the **last leg of the var-0xCC chase** begun in SC03_007 (H: same var 0xCC, runner set-up only when
  var 0xCC == 0xE (flag_cc_is_0e), same sounds 0x525 / 0x526 / 0x529). On catching it Musashi's action puts item
  0x4D into a free inventory slot (PutItem(func_800D0EC4(), 0x4D)), sets var 0xCC = 0xF, **progress 0x3C (60)** and
  flag 0xE6 (func_8017D828, H). A branch checks for a free slot first (func_8017D774, H). Sets flag 0x8F at the end of
  a timed actor (func_8017E524, H; 0x8F is next to the boss flags 0x8A-0x8E, meaning unknown).
* **Size:** 68 functions (own 31 + dup 2, stubs 5, 3 dispatchers, S 13; F006 4; P01 x7, P02, two PLAYER-ACTION-MAIN).
* **Actors:** runner (func_8017E614 set-up at Musashi's position -0x40, func_8017E70C / func_8017E79C / func_8017EA40 /
  func_8017EB2C run with MoveCollide, sound 0x526; func_8017E834 turns to Musashi, sound 0x525; func_8017E988 caught /
  reset: var 0xCC back to 1 unless already 0xF) (H). A spawner of kind 0x88 (sound 0x529) and a bouncing actor
  (sound 0x532, random scripts) (H). Talk check func_8017EC30 (DistSqToPlayer + player action) (H).
* **Events / scripted scenes:** the catch / reward PLAYER-ACTION script (func_8017D6E8 .. func_8017D8AC) (H).
* **Exits:** P01 exits. Camera: five own camera set-ups (SetCameraUpdate) and a pad camera mode func_8017DBC4 (H).
* **Sound:** 0x525, 0x526, 0x529, 0x532.

#### Names: SC03_023
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D6E8 | func_sc03_023_8017D6E8 | SetPlayerPose | SetPlayerByte1C2 | M |
| 0x8017D774 | func_sc03_023_8017D774 | RewardCheckFreeSlot | func_800D0EC4 -> action mark 1 / 2 | M |
| 0x8017D828 | func_sc03_023_8017D828 | RewardGiveItem4D | PutItem 0x4D, var 0xCC = 0xF, progress 0x3C, flag 0xE6 | H |
| 0x8017D8AC | func_sc03_023_8017D8AC | RewardEnd | EndPlayerAction | H |
| 0x8017D8CC | func_sc03_023_8017D8CC | RoomInitCamera | SetCameraUpdate + SnapCamera | H |
| 0x8017DBC4 | func_sc03_023_8017DBC4 | CameraModePad | GetObjPadPressed camera | M |
| 0x8017E230 | func_sc03_023_8017E230 | BouncerUpdate | random scripts, sound 0x532 | M |
| 0x8017E414 | func_sc03_023_8017E414 | Spawner88Update | SpawnActorArg(0x88), sound 0x529 | H |
| 0x8017E524 | func_sc03_023_8017E524 | TimerSetFlag8F | countdown, SetFlag(0x8F) | H |
| 0x8017E614 | func_sc03_023_8017E614 | ChaseRunnerInit | var 0xCC == 0xE | H |
| 0x8017E70C | func_sc03_023_8017E70C | ChaseRunnerRun | velocity + MoveCollide | M |
| 0x8017E834 | func_sc03_023_8017E834 | ChaseRunnerFace | TurnStepToPlayer, sound 0x525 | H |
| 0x8017E988 | func_sc03_023_8017E988 | ChaseRunnerCaught | var 0xCC reset to 1 unless 0xF | H |
| 0x8017EA40 | func_sc03_023_8017EA40 | ChaseRunnerFlee | MoveCollide, sound 0x526 | M |
| 0x8017EB2C | func_sc03_023_8017EB2C | ChaseRunnerLeave | MoveCollide, FreeActor | M |
| 0x8017EC30 | func_sc03_023_8017EC30 | ChaseTalkCheck | DistSqToPlayer + player action | M |

### SC03_024
* **Place:** a story map late in the game: sets **progress 0x44C (1100)** when an event ends (func_80182CE0) and
  **0x460 (1120)** at the end of a long scripted scene (func_801830A8) (H); several actors exist only at progress >=
  0x460 (H). Shares F020 / F022 / F029 / F083 with sc03_014 / sc03_118 / sc03_119 (H), and F020 here also has the
  progress-0x85 / flags 0x16-0x1A step (H). One-time flag 0x144 on the first exit with SoundCmd1(1) (func_80180230, H).
* **Size:** 265 functions (own 67 + dup 4, stubs 16, 21 dispatchers, S 40; F020 53, F022 15, F025 10, F029 7, F085 4,
  F086 4, F036 3, F083 3; P01 x9, P02, eight PLAYER-ACTION-MAIN).
* **Actors:**
  * Long scene actor (func_801830A8, 211 lines, ~25 steps on +0x10A): turns to Musashi, sets scripts, waits for the
    button (TestPadAll 0x80) at several steps, sound 0x9CC, then on event end SetProgress(0x460) and frees itself (H).
    M: a dialogue / demonstration scene advanced by the player.
  * Scene props (func_80183ACC / func_80183BF8): MoveCollide movers spawning kind 0x300 x2, sound 0x9CB (H); a
    spawner of kinds 0x383 / 0x308 with sounds 0x948 / 0x9CA (H); kind 0x2FC spawned for progress 0x460 (H).
  * Event actor (func_8018295C .. func_80182CE0): spawns kind 0x2B9 (only when flag 0x19 is set at set-up), waits for
    event, SetProgress(0x44C) (H).
  * Carried object (func_801821D4 / func_80182534): scaled model with shadow; counts matches against an 8-entry table
    and spawns prop 0x58; sounds 0x86C-0x86F; event D_8018B318 (H). M: an object Musashi carries / places.
  * F025 reward handler, F020 / F022 / F029 (other groups), F085 / F086 (this group: small shared helpers).
* **Events / scripted scenes:** a PLAYER-ACTION scene with camera shake and sound 0x949 (func_8017F...: StartFace,
  StartCameraShake, SpawnPropAt), one with positional sound 0x8E4; event D_8018B458 (H).
* **Exits:** P01 exits (first exit sets flag 0x144).
* **Sound:** 0x8E4, 0x949, 0x86C-0x86F, 0x948, 0x9CA-0x9CC, 0x62E.

#### Names: SC03_024
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180230 | func_sc03_024_80180230 | RoomExitStepFlag144 | one-time flag 0x144 + SoundCmd1(1) | H |
| 0x801821D4 | func_sc03_024_801821D4 | CarriedObjectPlace | model swap, shadow, state 3 | M |
| 0x80182534 | func_sc03_024_80182534 | CarriedObjectMatch | 8-entry table, prop 0x58 | M |
| 0x80182CE0 | func_sc03_024_80182CE0 | EventSetProgress44C | SetProgress(0x44C) | H |
| 0x801830A8 | func_sc03_024_801830A8 | SceneHostUpdate | button-advanced steps, SetProgress(0x460) | H |
| 0x80183BF8 | func_sc03_024_80183BF8 | SceneMoverUpdate | MoveCollide, kind 0x300, sound 0x9CB | M |
| 0x80184700 | func_sc03_024_80184700 | SceneHostInit | SetupActor, progress 0x460 | M |

n more own functions not proposed: about 55.

Common pieces of this run of stages (described once in G4_families.md): F045 (the kind-0x12C foot soldier enemy),
F048 + F051 (a bundle of small actors: hazard segments, hopper with three spinning parts, shuttling platform,
particles), F050 (room lights with a pulsing light), F055 (warp disc that starts an event and changes map), F089
(flying diver enemy, its thrown bomb, blast ring, debris, and the nearest-two-sources seq points), F090, F091, F092.
F013 (entry / exit door effects) is another group's family.

### SC03_089
* **Place:** an indoor / dungeon area with F045 soldiers and F089 flying divers (M); four room set-ups 0x80180D88,
  0x80180DC8, 0x80180E08, 0x80180E48 each set spawn lists A/B and restart the seq player with block 0-3 (H), so the
  image serves four map variants or rooms (M). No progress values (H).
* **Size:** 214 functions (own 15; shared: F013 15, F045 39, F048 21, F051 3, F050 5, F055 5, F089 36; 37 lone S
  shapes; 14 ACTOR-MAIN, 2 PLAYER-ACTION-MAIN, P01, P02, 11 stubs).
* **Actors:**
  * A1-A3 (0x8017BEF8, 0x8017C524, 0x8017C7C4): F013 (door / entry effects).
  * A4 (own, set-up 0x80181D9C): a fixture that spawns two kind-0x1B8 parts 0x100 either side in z, raised 0x78 and
    offset 0x180 in x towards the room centre (H). State 0x80181F9C: when a kind-0x12C actor (the F045 soldier) is
    inside a box (dy -0x30..0x20, dx/dz +-0x80) it sets both parts' +0xFC = 12 and plays sound 0x6EB, once (H).
    The parts (0x801820A8 set-up, 0x8018210C) then slide 12 frames in x by their +0x12 (+-0x20) while sinking
    4 per frame (H): a gate that opens when a soldier walks into it (M; L what it is).
  * A6 (own, set-up 0x80182150, model by subtype +0x70): a shuttle platform: x +-6 per frame, every 0x43 frames
    it reverses with a 30-frame pause, sound 0x6E9 at the turn and 0x6EA when it moves off again, CarryPlayer (H).
  * A7-A8 and the F048/F051 handlers 0x801822C8-0x80183B7C: F048 (hazard segments, hopper with three 0x164 parts,
    shuttling platform 0x1C4, particles 0x12F).
  * A9-A12 (0x80183C54, 0x80184D40, 0x80185580, 0x80185880): F089 (flying diver kind with companion 0x178, its bomb,
    the 0x1AA blast ring and the 0x1B0 debris).
  * 0x80185CCC-0x80188164: F045 (kind-0x12C soldier: sight, chase, melee, throw) and two S14 thrown-model set-ups.
  * A13 (0x8018847C) with 0x801881D0-0x8018879C: F055 (warp disc, kind 0x1E1 companion).
  * A14 (0x8018912C): F050 (room lights, five set-ups by +0xFC, pulsing light).
* **Events / scripted scenes:** only through F055 (StartEvent on standing on the disc). The player-action
  handlers are the shared ones: 0x80181390 spawns effect 0x1A (arg 0x06E706E8) and 0x801813D4 waits until it is gone;
  0x80181474 (F089) spawns effect 0x19 (arg 0x06920693) and 0x801814BC waits for it, then D_800AE6BD += 1 (H).
* **Puzzles / mechanisms:** the soldier-triggered gate (A4), the shuttle platform (A6), F048 platform.
* **Exits:** P01 (two exit step sets, 0x80180FA8 with SoundCmd1(1), 0x80181080 and 0x80181234 without); F055
  RequestMapChange(+0xDC record): destination unknown (data).
* **Camera:** four camera set-ups 0x80181538 / 0x801815D4 / 0x8018166C / 0x80181708 (targets, SetCameraUpdate,
  SnapCamera) and four camera modes 0x801817E0 / 0x8018188C / 0x80181A68 / 0x80181B14: a button (pad bits 0-1)
  toggles between two camera distances (table D_8018D358...), the focus is clamped to the room (e.g. x +-0x120,
  z -0x6C0..0xC0 in 0x8018188C); common update 0x80181BCC (S75) (H).
* **Sound:** 0x6E9 / 0x6EA (platform), 0x6EB (gate); family sounds (0x6FE / 0x6FF / 0x705 F089, 0xA9B / 0xCB2-0xCBA
  F045, 0xBA2 / 0x679 F048, 0x701 F055).
* **Unknown / notes:** 0x801822A8 (S5) returns 0x3E or 0x47 by D_8012704C (unknown). Two big GTE renderers
  0x8017CA80 (S26) and 0x8017D960 (S5, 870 lines) are chunked-mesh renderer variants (M), not P03.

#### Names: SC03_089
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180D88 | func_sc03_089_80180D88 | RoomStart0 | spawn lists A/B, RestartSeqPlayer(block 0) | M |
| 0x80180DC8 | func_sc03_089_80180DC8 | RoomStart1 | the same with lists 1 and block 1 | M |
| 0x80180E08 | func_sc03_089_80180E08 | RoomStart2 | the same, block 2 | M |
| 0x80180E48 | func_sc03_089_80180E48 | RoomStart3 | the same, block 3 | M |
| 0x80181D6C | func_sc03_089_80181D6C | RestartRoomSeq | RestartSeqPlayer(D_8018D368[n], 0) | H |
| 0x80181538 | func_sc03_089_80181538 | RoomCameraInit0 | camera targets, SetCameraUpdate(0x801817A4), SnapCamera | M |
| 0x801815D4 | func_sc03_089_801815D4 | RoomCameraInit1 | the same | M |
| 0x8018166C | func_sc03_089_8018166C | RoomCameraInit2 | the same | M |
| 0x80181708 | func_sc03_089_80181708 | RoomCameraInit3 | the same | M |
| 0x801817E0 | func_sc03_089_801817E0 | CameraZoomToggleFixed | pad toggles distance, focus x 0, z -0x920 | M |
| 0x8018188C | func_sc03_089_8018188C | CameraZoomToggleClamped | pad toggles distance, focus clamped to the room | M |
| 0x80181A68 | func_sc03_089_80181A68 | CameraZoomToggle2 | same pattern | M |
| 0x80181B14 | func_sc03_089_80181B14 | CameraZoomToggle3 | same pattern | M |
| 0x80181D9C | func_sc03_089_80181D9C | SoldierGateInit | SetupActor, two 0x1B8 parts | M |
| 0x80181F9C | func_sc03_089_80181F9C | SoldierGateWait | kind 0x12C in the box: parts move, 0x6EB | M |
| 0x801820A8 | func_sc03_089_801820A8 | GateLeafInit | SetupActor, state 1 | M |
| 0x8018210C | func_sc03_089_8018210C | GateLeafSlide | 12 frames of x += +0x12, y -= 4 | M |
| 0x80182150 | func_sc03_089_80182150 | ShuttlePlatformInit | SetupActor by subtype | M |
| 0x801821DC | func_sc03_089_801821DC | ShuttlePlatformMove | x +-6, reverse every 0x43 frames, CarryPlayer | H |

### SC03_090
* **Place:** same area type as SC03_089 (shares F089, F045, F048, F055, F050 with it) with F047 blobs and F090
  drifting creatures added (M); five room set-ups 0x80180D88-0x80180E88 (spawn lists + seq block 0-4, H). No
  progress values (H).
* **Size:** 257 functions (own 5; F013 15, F045 39, F047 26, F048 21, F051 3, F050 5, F055 5, F089 36, F090 22;
  42 S shapes; 13 ACTOR-MAIN, 2 PLAYER-ACTION-MAIN, P01, P02, 12 stubs).
* **Actors:** A1-A3 F013; F048/F051 hazard + hopper + platform; A6-A9 F089 (diver 0x8018396C.., bomb A7 0x80184A1C,
  ring A8, debris A9); A10 0x80186D04 F047 (blob droplets); A11 0x80187378 F090 (kind 0x19E drifter, set-up
  0x801874BC); F045 soldier; A12 0x8018A8A0 F055 warp disc; A13 0x8018B550 F050 lights.
* **Events / scripted scenes:** only F055 (disc -> StartEvent) (H).
* **Exits:** P01 exit steps (one with SoundCmd1(1)); F055 RequestMapChange(+0xDC), destination unknown (data).
* **Camera:** five camera set-ups (0x80181578 and 0x80181744 F090, three S3) and five own pad-toggled camera modes
  0x801818B0 / 0x80181970 / 0x80181AA0 / 0x80181B50 / 0x80181C80 (pad bits 0-1 toggle the distance; two also
  use func_80012F74) feeding 0x80181D30 (S75) (H). 0x80181F00 (F090) puts seq points 1-2 at fixed table points by
  subtype (H).
* **Sound:** family sounds only (see F089, F045, F047, F048).

#### Names: SC03_090
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801818B0 | func_sc03_090_801818B0 | CameraZoomToggle0 | pad toggles distance | M |
| 0x80181970 | func_sc03_090_80181970 | CameraZoomToggle1 | same, with func_80012F74 | M |
| 0x80181AA0 | func_sc03_090_80181AA0 | CameraZoomToggle2 | same | M |
| 0x80181B50 | func_sc03_090_80181B50 | CameraZoomToggle3 | same, with func_80012F74 | M |
| 0x80181C80 | func_sc03_090_80181C80 | CameraZoomToggle4 | same | M |

### SC03_091
* **Place:** sister room of SC03_090 (the same families F045, F047, F048, F050, F055, F089, F090) plus F024 (an item
  holder that starts an event, AddMaxBp / SetVar 0x3A + n; F024 tests map id 0x3028) (H for the calls).
  No progress values (H).
* **Size:** 272 functions (own 5; F013 15, F024 11, F045 39, F047 26, F048 21, F051 3, F050 5, F055 5, F089 36,
  F090 22; 45 S; 14 ACTOR-MAIN, P01, P02).
* **Actors:** as SC03_090, plus A1 F024 (0x8017BFEC-0x8017CC80).
* **Events:** F024 StartEvent (item / bonus), F055 warp disc.
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** five own pad-toggled camera modes 0x801826C8 / 0x80182788 / 0x801828B8 / 0x80182968 / 0x80182A98,
  same pattern as SC03_090 (H).

#### Names: SC03_091
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801826C8 | func_sc03_091_801826C8 | CameraZoomToggle0 | pad toggles distance | M |
| 0x80182788 | func_sc03_091_80182788 | CameraZoomToggle1 | same | M |
| 0x801828B8 | func_sc03_091_801828B8 | CameraZoomToggle2 | same | M |
| 0x80182968 | func_sc03_091_80182968 | CameraZoomToggle3 | same | M |
| 0x80182A98 | func_sc03_091_80182A98 | CameraZoomToggle4 | same | M |

### SC03_092
* **Place:** a story room of this area (the hub of SC03_089-104, M): own event code keyed on progress bands
  <0x140, 0x140-0x149, 0x14A-0x171, 0x172-0x17B, >=0x17C (H, 0x8017F8D8 / 0x8017FE88). Sets progress 0x14A (330)
  (0x8017FF34) and 0x17C (380) (0x8018010C) (H), so it sits around progress 320-380 (M).
* **Size:** 220 functions (own 57; F009 3, F013 15, F023 12, F031 6, F035 6, F048 21, F049 6, F050 5, F051 3,
  F055 5; 34 S; 20 ACTOR-MAIN, P01, P02, 16 stubs).
* **Actors:**
  * Event controller (0x8017F8D8): progress 0x140-0x149 and Musashi in a state (+0x44 bit 27) at z >= -0x16F ->
    StartEvent D_80188FB8; progress 0x172-0x17B: flag 0x105 clear and Musashi in area x -0x880..-0x680 ->
    StartEvent D_801892E0, else (flag set) area x -0xE60..-0xDA0 -> StartEvent D_80189190 (H). 0x8017FA74 runs
    the cut (ScriptOpCameraCut x4, PlaceObject) (H).
  * A9 (0x8017FE4C) script callbacks: SetProgress(0x14A), SetFlag(0x100, 1), test flags 0x101-0x104 (all four, M),
    SetProgress(0x17C), SetFlag(0x105, 1), find kind 0x1AF (H); 0x8017FE88 RunScript D_8018910C in band 0x14A-0x171.
  * 0x8017FC44: two kind-0x1AF NPCs placed by progress, with talk markers (SpawnTalkMarker), talk by distance
    (0x80180150, ResetScriptVM) (H; L who they are).
  * 0x8017E780: an object whose picture (MoveImage) depends on flag 0xB3 and a per-subtype flag; talk marker;
    0x8017E6A0 sets flag 0xB3 with sound 0x758 (H; M a sign / board that changes once used).
  * A6 0x8017ECFC: talk / touch objects running per-subtype scripts (RunScript D_80188C58[subtype]) (H).
  * A7 0x8017F2F8: model chosen by a flag table, spawns kind 0x188 (H). A8 0x8017F544 (flag 0xB3): StartEvent
    D_80188EB8, sound 0x757, timer (H). A10 0x801801F4: StartEvent D_801893D4 when flag 0x100 clear and close, then
    SetFlag(0x100, 1), ShowModel (H). A11 0x80180584 shows / hides with sound 0x5BF (H).
  * Families: F023 / F031 / F035 / F009 (others'), F048 / F051, F049, F050, F055 warp disc (A19-A20).
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** two own set-ups (0x8017DE74, 0x8017DF40) and a mode 0x8017E044 that follows Musashi's action
  (GetPlayerAction) (H). Own renderer 0x8017CE58 (240 lines, GTE, with cam_local) (H).
* **Sound:** 0x739 / 0x73B (event end, 0x8017EAA0), 0x757, 0x758, 0x5BF, 0xB16.
* **Unknown / notes:** event script contents unknown (data); flags 0x100-0x105 and 0xB3 are this room's (H).

#### Names: SC03_092
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F8D8 | func_sc03_092_8017F8D8 | EventByProgressArea | progress bands, IsInArea, StartEvent | M |
| 0x8017FA74 | func_sc03_092_8017FA74 | EventCutScene | ScriptOpCameraCut x4, PlaceObject | M |
| 0x8017FE88 | func_sc03_092_8017FE88 | EventRunBandScript | RunScript in band 0x14A-0x171 | M |
| 0x8017FF34 | func_sc03_092_8017FF34 | EventSetProgress14A | SetProgress(0x14A) | H |
| 0x8018010C | func_sc03_092_8018010C | EventSetProgress17C | SetProgress(0x17C) | H |
| 0x8017FFB4 | func_sc03_092_8017FFB4 | EventSetFlag100 | SetFlag(0x100, 1) | H |
| 0x8018012C | func_sc03_092_8018012C | EventSetFlag105 | SetFlag(0x105, 1) | H |
| 0x8017FFD8 | func_sc03_092_8017FFD8 | EventTestFlags101To104 | GetFlag 0x101-0x104 | M |
| 0x8017FC44 | func_sc03_092_8017FC44 | NpcPairInit | two 0x1AF by progress, talk marker | M |
| 0x80180150 | func_sc03_092_80180150 | NpcTalkWait | distance, ResetScriptVM | M |
| 0x8017E780 | func_sc03_092_8017E780 | FlagBoardInit | MoveImage by flag 0xB3 | M |
| 0x8017E6A0 | func_sc03_092_8017E6A0 | FlagBoardUse | SetFlag(0xB3), 0x758 | M |
| 0x8017E044 | func_sc03_092_8017E044 | CameraFollowAction | GetPlayerAction, camera targets | M |
| 0x8017CE58 | func_sc03_092_8017CE58 | DrawRoomMesh | GTE renderer | M |
| 0x8018074C | func_sc03_092_8018074C | ShowIfInRange | func_80013450, Hide/ShowModel (6 callers) | L |

### SC03_093
* **Place:** a room of the same area with F045 soldiers, F091 glowing creatures and F092 vanishing walls (M);
  three room set-ups 0x8017E778 / 0x8017E7B8 / 0x8017E7F8 (spawn lists + seq block) (H). No progress values (H).
* **Size:** 192 functions (own 6; F013 15, F024 11, F045 39, F048 22, F050 5, F051 3, F091 19, F092 9; 35 S;
  12 ACTOR-MAIN, P01, P02, P03).
* **Actors:**
  * A5 (own, 0x8017F0E8): set-up 0x8017F124 takes a velocity and a time from a table by +0xFC; 0x8017F1E8 moves it
    (MoveOnGround) until the timer ends, then F048's reverse step 0x8017F23C; CarryPlayer (H): a shuttle
    platform (M), a local copy of the F048 platform without the 0x1C4 spawn.
  * A6-A7 F092 (vanishing walls, kind 0x167 parts); F048 / F051; F091 kind-0x1A2 creatures (0x801813E0..);
    F045 soldier; A1 F024 (item holder; StartEvent); A2-A4 F013; A12 F050 lights.
  * 0x80184938-0x8018547C (S2, shared with one other stage): a hazard actor that sprays props (SpawnPropFrom x13),
    hits Musashi with four segments, looped sound by distance (func_8002D59C), sound 0x6F1 (H; L what it is).
  * A11 0x8018575C (S2): set-up spawning 0x1C4, gravity (H).
* **Events:** F024 only (H).
* **Exits:** P01 only (no RequestMapChange in own code) (H).
* **Camera:** own set-ups 0x8017EAF4 / 0x8017EB8C / 0x8017EC24; pad-toggled modes 0x8017ECF8, 0x8017ED98 (S34)
  and own 0x8017EE38 (H).

#### Names: SC03_093
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F124 | func_sc03_093_8017F124 | ShuttlePlatformInit | SetupActor, velocity / time table | M |
| 0x8017F1E8 | func_sc03_093_8017F1E8 | ShuttlePlatformMove | MoveOnGround, timer, CarryPlayer | H |
| 0x8017EAF4 | func_sc03_093_8017EAF4 | RoomCameraInit0 | SetCameraUpdate, SnapCamera | M |
| 0x8017EB8C | func_sc03_093_8017EB8C | RoomCameraInit1 | same | M |
| 0x8017EC24 | func_sc03_093_8017EC24 | RoomCameraInit2 | same | M |
| 0x8017EE38 | func_sc03_093_8017EE38 | CameraZoomToggle | pad toggles distance | M |

### SC03_094
* **Place:** a puzzle room of the same area: push blocks and hittable targets that set per-subtype flags
  (table D_8018B52C) (H); F045 soldiers, F047 blobs, F057 divers, F091 creatures (H). No progress values (H).
* **Size:** 208 functions (own 18; F045 39, F047 26, F048 23, F050 5, F051 3, F057 10, F091 19; 39 S; 9 ACTOR-MAIN,
  P01, P02, P03).
* **Actors:**
  * Push block (kind 0x1BE, set-up 0x8017E890): if its flag is already set it starts at its solved position
    (table D_8018B4EC), else pushable (H). 0x8017DEBC: by Musashi's heading (four quadrants) and a free-path test
    0x8017D898 (TraceMap), the block moves one step and drags Musashi's position along, sound 0x743; no floor ->
    falls (state 6) (H). 0x8017E0FC / 0x8017E254 slide steps with sound 0x744 (H). 0x8017E52C idles, testing the
    four directions (H).
  * Target (0x8017DAC8): takes damage (ShowDamage, HP +0x76), ShowDefeat + StartRumbleScript on a finishing hit;
    at HP < 0: sound 0xCBC and +1 on the counter (+0xFC) of every unsolved 0x1BE block (H), more lines follow
    (0xCBD, props) (H).
  * 0x8017E3B0: a pulsing glow (light colours in D_8018B50C by subtype); when done each unsolved block's counter
    -1, and at zero SetFlag(table[subtype], 1) with sound 0x745 (H). M: blocks lock in place once their target(s)
    are broken.
  * 0x8017E9D4 (SetupActorAlt, flag-gated) / 0x8017EA74 (sounds 0x746, sound command 4 arg 0x745) (H); 0x8017EAEC
    platform set-up for the F048 mover (H).
  * Families: F045, F047, F048 / F051, F057, F091, F050.
* **Puzzles / mechanisms:** push blocks + targets -> flags D_8018B52C[subtype] (H).
* **Exits:** P01 only (H). **Camera:** four set-ups 0x8017D11C-0x8017D2E4, pad modes 0x8017D458, 0x8017D544 (own),
  0x8017D630 (S34) (H).

#### Names: SC03_094
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E890 | func_sc03_094_8017E890 | PushBlockInit | flag set -> solved position | M |
| 0x8017DEBC | func_sc03_094_8017DEBC | PushBlockPush | heading quadrant, moves block and Musashi, 0x743 | M |
| 0x8017D898 | func_sc03_094_8017D898 | PushBlockPathFree | TraceMap test for a direction | M |
| 0x8017E0FC | func_sc03_094_8017E0FC | PushBlockSlideA | rsin, 0x744 | M |
| 0x8017E254 | func_sc03_094_8017E254 | PushBlockSlideB | rsin, 0x744 | M |
| 0x8017E52C | func_sc03_094_8017E52C | PushBlockIdle | four direction tests | M |
| 0x8017DAC8 | func_sc03_094_8017DAC8 | TargetTakeHit | ShowDamage / ShowDefeat, HP < 0 -> block counters | M |
| 0x8017E3B0 | func_sc03_094_8017E3B0 | TargetGlowSolve | glow, counters -1, SetFlag, 0x745 | M |
| 0x8017D11C | func_sc03_094_8017D11C | RoomCameraInit0 | SetCameraUpdate / SnapCamera (also 0x8017D1B4, 0x8017D24C, 0x8017D2E4 = Init1-3) | M |

### SC03_095
* **Place:** a small room of the area: F091 creatures, F092 vanishing walls, F048 movers (H). No progress (H).
* **Size:** 105 functions (own 6, dup2 2; F048 22, F050 5, F051 3, F091 19, F092 9; 20 S; P01, P02, P03).
* **Actors:** own platform set-up 0x8017D618 (SetupActor, script) with two identical movers 0x8017D704 / 0x8017D7B0
  (MoveOnGround, timer, CarryPlayer, dup2) and a carry-only step 0x8017D758 (H): a platform with a pause (M).
  0x8017D558 (6 field writes, unknown). Families as listed.
* **Exits:** P01 only. **Camera:** two set-ups 0x8017D09C / 0x8017D134, pad mode 0x8017D2A8 (H).

#### Names: SC03_095
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D618 | func_sc03_095_8017D618 | PlatformInit | SetupActor, SetScript | M |
| 0x8017D704 | func_sc03_095_8017D704 | PlatformMoveA | MoveOnGround, timer, CarryPlayer | M |
| 0x8017D758 | func_sc03_095_8017D758 | PlatformPause | CarryPlayer only | M |
| 0x8017D7B0 | func_sc03_095_8017D7B0 | PlatformMoveB | same as 0x8017D704 | M |

### SC03_096
* **Place:** a small room of the area (F048, F050, F051, F091, F092) (H). No progress (H).
* **Size:** 96 functions (own 2; F048 21, F050 5, F051 3, F091 19, F092 9; 18 S; P01, P02, P03).
* **Actors:** families only (F091 creatures, F092 vanishing walls, F048 movers / hopper).
* **Exits:** P01 only. **Camera:** one set-up 0x8017D05C (own) and a pad-toggled mode 0x8017D130 (own) (H).

#### Names: SC03_096
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D05C | func_sc03_096_8017D05C | RoomCameraInit | SetCameraUpdate, SnapCamera | M |
| 0x8017D130 | func_sc03_096_8017D130 | CameraZoomToggle | pad, update 0x8017D238 | M |

### SC03_097
* **Place:** a room of the area with the F054 switch set: when all switches' flags (table D_8019AEF4) are set it
  **sets progress 0x172 (370)** (0x8017F9BC-region F054 code, H); also F022/F023 code (another group's) sets
  progress 0x5A (90) and flag 0xEA (H for the call; M that it is a shared pickup / save step).
* **Size:** 232 functions (own 8, dup2 2; F013 15, F022 15, F023 12, F024 11, F029 7, F035 3, F048 21, F050 5,
  F051 3, F054 14, F055 5, F091 19, F092 9; 43 S; 13 ACTOR-MAIN, 3 PLAYER-ACTION-MAIN, P01, P02).
* **Actors:** A6-A7 F054 (switches: touch -> StartEvent D_8019AEC4 + sound 0x700; event done -> SetFlag, all set ->
  SetProgress(0x172)); F055 warp disc; F091 creatures (own wake step 0x80184324: timer and Musashi within 0x40000
  -> state 2, H); F092 vanishing walls; F024 item holder; F022/F029 (helpers used by F054); F048, F050, F013.
* **Events:** F054 switch events, F055 disc event, F024 (H). Player actions: two dup2 handlers 0x8017EE04 /
  0x8017F038 (BumpSub2Copy, SpawnEffectOn, wait) and own 0x8017EF54 (SpawnEffectOn) (H).
* **Exits:** P01 (extra exit / entry step sets, 12 P01 shapes); F055 RequestMapChange (data).
* **Camera:** set-ups 0x8017F0FC / 0x8017F194 (own), 0x8017F230 (S3); pad modes 0x8017F304 / 0x8017F3D4 /
  0x8017F48C (own) (H).

#### Names: SC03_097
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F0FC | func_sc03_097_8017F0FC | RoomCameraInit0 | SetCameraUpdate, SnapCamera | M |
| 0x8017F194 | func_sc03_097_8017F194 | RoomCameraInit1 | same | M |
| 0x8017F304 | func_sc03_097_8017F304 | CameraZoomToggle0 | pad toggle | M |
| 0x8017F3D4 | func_sc03_097_8017F3D4 | CameraZoomToggle1 | pad toggle | M |
| 0x8017F48C | func_sc03_097_8017F48C | CameraZoomToggle2 | pad toggle | M |
| 0x80184324 | func_sc03_097_80184324 | GlowCreatureWake | TickTimer, GroundDistSqToPlayer <= 0x40000 | M |
| 0x8017EF54 | func_sc03_097_8017EF54 | PlayerActionSpawnEffect | SpawnEffectOn, BumpSub2Copy | M |

### SC03_098
* **Place:** a room of the area built only from shared code: F045 soldiers, F047 blobs, F058 swinging hazard and
  platform, F048 movers, F024 item holder (H). No progress values (H).
* **Size:** 173 functions (own 0; F013 15, F024 11, F045 39, F047 26, F048 21, F050 5, F051 3, F058 8; 20 S;
  10 ACTOR-MAIN, P01, P02, P03).
* **Actors:** families only (see G4_families.md). **Events:** F024 StartEvent (item). **Exits:** P01 only (H).
* **Notes:** no own functions to name.

### SC03_099
* **Place:** a room of the area: F045 soldiers, F057 divers, F058 swinging hazard, F053 on-screen spawner with
  sounds 0x6D5 / 0x856 / 0x857 (H). No progress values (H).
* **Size:** 136 functions (own 2; F045 39, F048 21, F050 5, F051 3, F053 7, F057 10, F058 8; 22 S; 5 ACTOR-MAIN,
  P01, P02, P03).
* **Actors:** families only. **Exits:** P01 only (H).
* **Camera:** set-up 0x8017D134 (own; 0x8017D09C shared), pad mode 0x8017D2AC (own) (H).

#### Names: SC03_099
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D134 | func_sc03_099_8017D134 | RoomCameraInit1 | SetCameraUpdate, SnapCamera | M |
| 0x8017D2AC | func_sc03_099_8017D2AC | CameraZoomToggle | pad toggle | M |

### SC03_100
* **Place:** a room of the area: F045, F058, F053, F024 item holder, F022/F023-type pickup code (another group's)
  that sets progress 0x5A (90) and flag 0xEA (H for the calls). No own progress code (H).
* **Size:** 171 functions (own 1; F013 15, F023 12, F024 11, F035 3, F045 39, F048 21, F050 5, F051 3, F053 7,
  F058 8; 20 S; 11 ACTOR-MAIN, P01, P02, P03).
* **Actors:** families only. **Events:** F024 (item), F023 (H). **Exits:** P01 only.
* **Camera:** pad mode 0x8017EC84 (own) (H).

#### Names: SC03_100
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EC84 | func_sc03_100_8017EC84 | CameraZoomToggle | pad toggle, update 0x8017ED90 | M |

### SC03_101
* **Place:** a switch room: F054 set (flags table D_8019A9E8; all set -> **SetProgress(0x172)** (370), H),
  F055 warp disc, F058, F053 (H).
* **Size:** 159 functions (own 2; F013 15, F022 15, F029 7, F048 21, F050 5, F051 3, F053 7, F054 14, F055 5,
  F058 8; 29 S; 10 ACTOR-MAIN, PLAYER-ACTION-MAIN, P01, P02).
* **Actors:** A5-A7 F054 switches (StartEvent D_8019A9B8 + 0x700 on touch, D_8019A9C0 after) ; A8 0x8018118C F055
  disc; F058, F053, F048.
* **Events:** F054, F055 (H). Own player action 0x8017DDEC (BumpSub2Copy, SpawnEffectOn, wait 0x8017DE34) (H).
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** pad mode 0x8017E0BC (own) (H).

#### Names: SC03_101
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DDEC | func_sc03_101_8017DDEC | PlayerActionSpawnEffect | SpawnEffectOn, BumpSub2Copy | M |
| 0x8017E0BC | func_sc03_101_8017E0BC | CameraZoomToggle | pad toggle | M |

### SC03_102
* **Place:** a room of the area with a dropping-props hazard and an ambient sound source (own), F045 soldiers,
  F053 (H). No progress values (H).
* **Size:** 124 functions (own 12; F045 39, F048 21, F050 5, F051 3, F053 7; 16 S; 7 ACTOR-MAIN, P01, P02, P03).
* **Actors:**
  * Dropper 0x80180A38: when Musashi is within ground distance^2 0x9C400 (and a height band) it spawns three props
    (0x80181260, SpawnPropAt; at home x, x+0x28, x-0x28) every +0xFC frames, three volleys then a 30-frame rest (H).
    Prop states: 0x80180C38 falls (MoveProp), on hitting the map (TraceMap) lands / splashes, PathHitsModel ->
    HitPlayer (H); 0x80181030 / 0x8018110C move then free (0x801811F0) (H). M: falling drops / rocks.
  * 0x80180810: a room-global timer cycling two 32-entry tables every 3 frames via 0x80180964 (S14) (H; L a
    texture / palette animation).
  * Sound source 0x8018139C: sound 0xA20 once when Musashi is below y -0x7EF; looped sound 0x76E with volume and
    pan from Musashi's y/z distance (func_8002D59C), stopped when out of range (H). M: a waterfall-type ambience.
  * 0x801815D4: ProjectPointOtz + func_80015954 (unknown draw helper) (H for the calls).
* **Exits:** P01 only. **Camera:** set-up 0x80180484, pad mode 0x80180558 (own) (H).

#### Names: SC03_102
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180A38 | func_sc03_102_80180A38 | DropperSpawnVolley | three props every +0xFC frames near Musashi | M |
| 0x80181260 | func_sc03_102_80181260 | DropperSpawnProp | SpawnPropAt, rotated velocity | M |
| 0x80180C38 | func_sc03_102_80180C38 | DropPropFall | MoveProp, TraceMap, HitPlayer | M |
| 0x801811F0 | func_sc03_102_801811F0 | DropPropFree | FreeProp | M |
| 0x80180810 | func_sc03_102_80180810 | RoomAnimTick | two table cycles every 3 frames | L |
| 0x8018139C | func_sc03_102_8018139C | AmbientSoundSource | 0xA20, looped 0x76E by distance | M |
| 0x80180484 | func_sc03_102_80180484 | RoomCameraInit | SetCameraUpdate, SnapCamera | M |
| 0x80180558 | func_sc03_102_80180558 | CameraZoomToggle | pad toggle | M |

### SC03_103
* **Place:** a room of the area: F045 soldiers, F057 divers, F053, F048 (H); three room set-ups, the third
  (0x8017DE58, own) also sets D_8012704C = 1 (H; the S5 helper in SC03_089 etc. returns 0x47 instead of 0x3E when
  it is set, so this is a room-wide mode, L). No progress values (H).
* **Size:** 142 functions (own 6; F009 3, F045 39, F048 21, F050 5, F051 3, F053 7, F057 10; 25 S; 8 ACTOR-MAIN,
  P01, P02, P03).
* **Actors:**
  * A4 (0x8017E80C / 0x8017E830, own): a room animator: every 2 frames applies entry n of an 8-entry table via
    0x8017E8F4 (S14), and every 8 frames calls func_800183E0 with the next of 16 values (D_8018806C) (H; L
    texture scroll / palette cycle).
  * 0x8017E73C / 0x8017E780 (own): RelocateSeqBlock(D_80197F1C), then each frame 0x8017D174 with a step +0xA (H;
    L a scrolling or animated mesh driven by a seq block).
  * Families: F045, F057, F053, F048 / F051, F050.
* **Exits:** P01 only. **Camera:** own camera update 0x8017E5A4 (smoothing plus a fixed offset -0x3CD / -0x182) (H).

#### Names: SC03_103
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DE58 | func_sc03_103_8017DE58 | RoomStart2 | spawn lists, seq block 2, D_8012704C = 1 | M |
| 0x8017E80C | func_sc03_103_8017E80C | RoomAnimInit | counters set, NextState | M |
| 0x8017E830 | func_sc03_103_8017E830 | RoomAnimTick | 8-entry / 16-entry cycles | M |
| 0x8017E73C | func_sc03_103_8017E73C | SeqMeshInit | RelocateSeqBlock | M |
| 0x8017E780 | func_sc03_103_8017E780 | SeqMeshStep | 0x8017D174, step +0xA | L |
| 0x8017E5A4 | func_sc03_103_8017E5A4 | CameraUpdateOffset | smoothing, fixed offset | M |

### SC03_104
* **Place:** a big room of the area combining F089 divers / bombs, F045 soldiers, the F054 switch set (flags table
  D_8019CA20; all set -> **SetProgress(0x172)** (370), H), F055 warp disc and F022/F023 pickup code that sets
  progress 0x5A (90) and flag 0xEA (another group's family; H for the calls).
* **Size:** 247 functions (own 3; F013 15, F022 15, F023 12, F029 7, F035 3, F045 39, F048 21, F050 5, F051 3,
  F054 14, F055 5, F089 36; 34 S; 14 ACTOR-MAIN, PLAYER-ACTION-MAIN, P01, P02).
* **Actors:** families only (F089 A-blocks, F045, F054 switches, F055 disc, F048 / F051, F050, F013).
* **Events:** F054 switch events, F055 disc event, F023 (H).
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** set-up 0x801812D8 (own), 0x8018136C (S2); pad modes 0x80181440 / 0x80181528 (own) (H).

#### Names: SC03_104
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801812D8 | func_sc03_104_801812D8 | RoomCameraInit0 | SetCameraUpdate, SnapCamera | M |
| 0x80181440 | func_sc03_104_80181440 | CameraZoomToggle0 | pad toggle | M |
| 0x80181528 | func_sc03_104_80181528 | CameraZoomToggle1 | pad toggle | M |

### SC03_105
* **Place:** a **boss arena** (H: a shared HP pool, TakeDamage, StartCameraShake, intro / outro events), keyed on
  progress 0x258 (600): the controller (0x801860D0) runs the fight when progress < 0x258 and a calm version when
  >= 0x258 (H). The exit step 0x8017DF40 sets flag 0x132 with SoundCmd1(1) when progress == 0x258 and the flag is
  clear (H); A16 0x801893BC also acts only at progress 0x258 with flag 0x132 clear (H). The progress set to 0x258
  is not in this C (M: it is in the event scripts). Mostly own code, unlike the rest of the area.
* **Size:** 227 functions (own 136; F017 8, F018 5, F019 3, F050 5, F053 7, F087 3; 22 S; 19 ACTOR-MAIN, P01,
  2 P02, P03).
* **Actors:**
  * A10 controller 0x80186094 (set-up 0x801860D0): progress < 0x258 -> SelectCollisionMap(0), spawns kind 0x1DE
    (kept at +0x6C) and 0x14D, then 0x801861DC starts intro event D_8018EEB4 (H). Fight-direction states
    0x8018624C / 0x801867D0 / 0x80186B24 / 0x80186DDC: camera shakes, sounds 0x726 / 0x727 / 0x72D / 0x72F / 0x79F /
    0xC05 / 0xBC2 / 0xBC3 / 0xC8F, spawns 0x14B, 0x3BD, 0x222, 0x21E, 0x217, events D_8018EFBC and D_8018F04C
    (the latter with SoundCmd1(1)), a second SelectCollisionMap (H). M: intro, phase change and outro of the fight.
  * A9 boss body (set-up 0x801801F8, states 0x801802B0-0x8018226C): several large attack states (0x801803A0,
    0x801806F8, 0x80180ABC, 0x80180EC0, 0x801813BC, 0x801818E8, 0x80181C84), flying with HeadingPitchTo /
    MoveCollidePassable, contact hits via BoxesOverlap (0x8018388C) and PathHitsModel (0x801839A4) -> HitPlayer,
    sounds 0x725 / 0x729 / 0x7A7 / 0x7A8 / 0xC2D / 0xC06, a panned sound 0x730 (0x80183DA0), camera shake (H).
  * Boss damage 0x8018233C: on a hit (+0x5C bit 0, but not hit kind 0x22) 8 damage to the shared pool
    D_8018EDFC, sound 0xC08, a spark prop; pool <= 0 -> parent's state 4 and own state 0xA (defeat) (H).
  * A3-A8 (0x8017E758-0x8017FF54): boss projectiles / pieces: homing shots (0x8017E7E8, TurnStepToPlayer,
    ActorSegmentDamagesPlayer), a lobbed piece that lands (0x8017EE34, sound 0xC07, HitPlayer), part debris
    (0x8017F234 / 0x8017F55C, GetPartWorldMatrix, sounds 0x770 / 0x72B), sprite effects (H).
  * A11 0x80187788 (sound by subtype, 0x775), A13 0x801884D4 (0x72E / 0x732), A15 0x8018868C (0x773, 0x14C,
    ShowDefeatAlt, 0xBC1, spawns 0x1F3) (H; M more boss parts).
  * Families: F017 / F018 / F019 / F087 (others'), F050 lights, F053 (A19).
* **Boss:** shared HP pool D_8018EDFC (starts from data), 8 per hit (H); phases driven by the controller's states
  (M); defeat -> controller state 4 (H). What follows (progress / flags) is in the event scripts (unknown).
* **Exits:** P01 (exit step sets flag 0x132 at progress 0x258) (H); no RequestMapChange in own code (H).
* **Camera:** set-up 0x8017E08C, mode 0x8017E180 follows kind 0x14B (FindActorByKind) (H); a second camera
  dispatcher at 0x8018774C with update 0x80187554 (H).

#### Names: SC03_105
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801860D0 | func_sc03_105_801860D0 | BossCtrlInit | progress < 0x258: spawn 0x1DE / 0x14D | M |
| 0x801861DC | func_sc03_105_801861DC | BossCtrlIntro | StartEvent D_8018EEB4 | M |
| 0x8018624C | func_sc03_105_8018624C | BossCtrlPhase1 | shakes, sounds, spawns 0x14B / 0x3BD | L |
| 0x801801F8 | func_sc03_105_801801F8 | BossInit | SetupActor, AllocActorModel | M |
| 0x8018233C | func_sc03_105_8018233C | BossTakeHit | pool -= 8, 0xC08, defeat at 0 | H |
| 0x8018388C | func_sc03_105_8018388C | BossBodyHitPlayer | BoxesOverlap, HitPlayer | M |
| 0x801839A4 | func_sc03_105_801839A4 | BossPartHitPlayer | PathHitsModel, HitPlayer | M |
| 0x80183DA0 | func_sc03_105_80183DA0 | PlayBossSoundPanned | ProjectPoint, 0x730 with pan | M |
| 0x80183EE8 | func_sc03_105_80183EE8 | StopBossSound | sound command 4, 0x730 | M |
| 0x8017DF40 | func_sc03_105_8017DF40 | RoomExitSetFlag132 | flag 0x132 at progress 0x258 | H |
| 0x8017E7E8 | func_sc03_105_8017E7E8 | HomingShotInit | AllocActorModel, HeadingPitchTo | M |
| 0x8017EA24 | func_sc03_105_8017EA24 | HomingShotFly | TurnStepToPlayer, damage segment | M |
| 0x8017EE34 | func_sc03_105_8017EE34 | LobbedPieceFly | 0xC07, HitPlayer | M |
| 0x8017E180 | func_sc03_105_8017E180 | CameraFollow14B | FindActorByKind(0x14B) | M |
| 0x801893BC | func_sc03_105_801893BC | PostBossMarker | progress 0x258, flag 0x132 clear | M |
* About 100 more own boss helper functions (0x801829CC-0x80185810, prop / part math) not proposed.

### SC03_107
* **Place:** unknown field room with several enemies (M). It tests progress >= 0x1D7 (471) (removes the roaming
  object, below) and its model prop picks data by progress bands >= 0xC8 (200) / >= 0x258 (600) / >= 0x384 (900)
  (H), so the room is visited across the story (M). The roaming object sets progress 0x1D6 (470) only on map 0x1052
  (village version 2), i.e. when the same code runs in the village image (H; that code path is shared with sc03_124).
* **Size:** 128 functions (own 8, lone-shared 28, family 72: F093 x29, F094 x19, F044 x12, F030 x6, F095 x6; 4 actor
  dispatchers, 8 stubs; P01, P02, P03 = own copy 0x8017BEBC).
* **Actors:**
  * A1 (0x8017D540): a model prop; set-up 0x8017D5C4 (S7) AllocActorModel and remaps its +0xDC model key through one of
    three pair tables (helper 0x8017D57C) chosen by progress >= 0x384 / >= 0x258 / >= 0xC8 (H). A second, dispatcher-less
    model set-up 0x8017D698 (S2, also sc03_091) picks its data by variant +0x70 (H). L: scenery that changes with the
    story.
  * A2 (0x8017D730): a talking NPC: SetupActor, SetScript, SpawnTalkMarker with condition 0x8017D878 (talk allowed when
    Musashi is within distance 64, DistSqToPlayer <= 0x1000, and no actor of kind 0x224 is within 64 of the NPC) (H);
    talk runs event script D_80186134 (variant +0x70 != 0) or D_8018611C (H), then IsEventDone / EndEvent (S25).
  * Enemy (main 0x8017D92C, F044 core + F094): a ground melee enemy that wanders, chases, swipes and does a radial
    ground-burst attack; drops an item on 1 frame in 32 when it dies (see F094) (M).
  * A3 (0x801805BC) and the set-up 0x8017EF3C: F093, actor kind 0x1EA, a chained creature (a head with up to six linked
    segments) that rears up, lunges and spits a projectile (see F093) (M).
  * Roaming object (dispatcher 0x801819C8, F095; set-up 0x80181850 and knock-back 0x80181500, S2 with sc03_124): an
    invulnerable object (its HP +0x76 is put back to 0x384 whenever it drops below 0x320, H) that remembers which map it
    is on in the save halfword at D_800BA1B8+10 (func_800291C8 / func_800291DC, H). Set-up frees it when progress >=
    0x1D7, or when the saved word has no 0x100 bit and is not the current map D_800B9A08 (H). When hit it flies off
    (SetLocalVelocity), bounces up to three times (SoundRequest(0x754) and a dust shadow per bounce), and if it lands in
    a pit/water surface (MoveCollide bit 0x1000) plays 0x531 and is put back at its saved spot after a sinking state
    0x80181CC0 (H). On map 0x1052 it starts in a placed pose (PlaceObject D_80198C08, 0x80181A70) (H). 0x80181AB8 (S2)
    keeps an actor within 0x60 of the first actor of kind 0x17E, and frees itself in sub-state 2 (H). L: a carryable /
    kickable story object that Musashi has to bring somewhere.
  * A4 (0x80181D88): F030 (sprite effect actor; its set-up plays 0xAA0) (H); spawned by the F044 state 0x8017E270
    through 0x801823FC SpawnActorFromDef (with 0xAA1) (M).
* **Events / scripted scenes:** the NPC's two talk scripts only (H).
* **Exits:** P01, three exit variants: 0x8017CB70 (with SoundCmd1(1)), 0x8017CC48 (without), 0x8017CCF8 (SoundCmd1(1)
  only when flag 0xB8 is clear) (H). No RequestMapChange in own code; destinations unknown (data).
* **Sound:** effects 0x521 (enemy ground burst), 0x51F / 0x520 (enemy, by distance), 0x531 / 0x754 (roaming object),
  0x833 / 0x8C6 / 0x8C7 / 0x98F / 0xC5D (F093) (H; meanings unknown).
* **Unknown / notes:** camera set-up 0x8017CDD8 (projection 0x190, distance 0x258, angle 0x71) and camera mode
  0x8017CF48: clamps the focus x to -0x740..0xA40 (z > 0x100) or -0x640..0x580, then tests nine x/z boxes
  (D_80185FF0, 16 bytes each, 0x8017D418); the box it is in sets the camera angle targets +0xA0/+0xA2 and +0x14, and
  centres the focus on the box's x (0x8017D474) or z (0x8017D4C8) mid-line or neither (0x8017D51C); eased with
  func_80012DBC / func_80012ABC / func_80012F74 (H).

#### Names: SC03_107
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CDD8 | func_sc03_107_8017CDD8 | RoomInitCamera | camera targets, SetCameraUpdate(0x8017CF0C), SnapCamera | H |
| 0x8017CF48 | func_sc03_107_8017CF48 | CameraZoneFollow | focus clamp + nine zone boxes setting angle targets | H |
| 0x8017D418 | func_sc03_107_8017D418 | PointInZoneXZ | x/z bounds test against a 16-byte zone | H |
| 0x8017D474 | func_sc03_107_8017D474 | ApplyZoneCenterX | zone angles + focus x = zone mid x | H |
| 0x8017D4C8 | func_sc03_107_8017D4C8 | ApplyZoneCenterZ | zone angles + focus z = zone mid z | H |
| 0x8017D51C | func_sc03_107_8017D51C | ApplyZoneAngles | zone angles only | H |
| 0x8017D540 | func_sc03_107_8017D540 | StoryPropMain | ACTOR-MAIN of A1 | M |
| 0x8017D57C | func_sc03_107_8017D57C | LookupPairTable | returns t[i+1] where t[i] == +0xDC | H |
| 0x8017D5C4 | func_sc03_107_8017D5C4 | StoryPropInit | AllocActorModel, progress-band remap | H |
| 0x8017D698 | func_sc03_107_8017D698 | VariantModelInit | AllocActorModel, data by +0x70 | M |
| 0x8017D730 | func_sc03_107_8017D730 | TalkerMain | ACTOR-MAIN of A2 | M |
| 0x8017D76C | func_sc03_107_8017D76C | TalkerInit | SetupActor, SetScript, SpawnTalkMarker | H |
| 0x8017D7D8 | func_sc03_107_8017D7D8 | TalkerStartTalk | RunScript by variant, state 3 | H |
| 0x8017D878 | func_sc03_107_8017D878 | TalkerCanTalk | distance + no kind 0x224 nearby | H |
| 0x80181500 | func_sc03_107_80181500 | RoamObjKnockBack | bounce / pit handling after a hit | H |
| 0x80181850 | func_sc03_107_80181850 | RoamObjInit | progress / saved-map gate, SetProgress(0x1D6) on 0x1052 | H |
| 0x80181A70 | func_sc03_107_80181A70 | RoamObjPlace | PlaceObject(D_80198C08), state 3 | M |
| 0x80181AB8 | func_sc03_107_80181AB8 | FollowKind17E | stays within 0x60 of kind 0x17E | M |
| 0x8018134C | func_sc03_107_8018134C | ProbeBehindWall | TraceMap behind the facing, pushes out on hit | M |

### SC03_108
* **Place:** unknown; no progress value set or tested (H). It shares almost all of its code with sc02_039 (F059) and
  its hopping enemy with sc03_110 / sc03_112 / sc05_001 (F096) (H), so it is likely a room of the same kind as
  sc02_039 (L).
* **Size:** 75 functions (own 0, lone-shared 12, family 49: F096 x26, F059 x18, F033 x5; 3 actor dispatchers, 4 stubs;
  P01, P02, P03).
* **Actors:**
  * A1-A3 (0x8017DAD0, 0x8017E240, 0x8017E984) and set-ups 0x8017D96C / 0x8017DF10 / 0x8017E508 / 0x8017EB38: F059.
    Observation (H from the code here): kind 0x199 is a multi-part model (variant +0x70 & 3: parts 0 / 1 spawn
    SpawnActorArg(0x199, 2 / 3) children that share the parent's model, func_8001C1E4); a timed emitter 0x8017E128
    walks a (flag, delay) table D_801847C8 and SpawnActorArg(0x1A9, flags) while its +0x100 lies within +-0xFF and +0xE0
    < 0x150; kind 0x1A9 moves (MoveCollidePassableAt), hurts Musashi through ActorSegmentHitsPlayer and plays sound
    0x6DA with a volume / pan computed from its screen position (0x8017E27C) (H). L: things that roll or fly out of
    an opening on a timer.
  * Hopping enemy (main 0x8017F0B0, set-up 0x8017F140): F096 (a squash-and-stretch hopper that lunges at Musashi;
    variant bit 2 hides it until Musashi is near) (M).
* **Puzzles / mechanisms:** none in own code.
* **Exits:** P01 only (0x8017CE80 with SoundCmd1(1), 0x8017CF58 without) (H); destinations unknown (data).
* **Sound:** 0x6DA (F059 emitter, positional), 0x832 / 0xA74 (F096) (H).
* **Unknown / notes:** the camera (F059, 0x8017D01C / 0x8017D110) follows Musashi's facing, clamps its angle to
  0x480-0xB80 and the focus to y <= 0, z <= -0x80, and toggles between two distances (D_80184768) when a shoulder-type
  button (GetObjPadPressed & 3) is pressed (H; which buttons M).

#### Names: SC03_108
No own functions (all are P01-P03, F033, F059, F096 or lone shapes named where they first occur).

### SC03_109
* **Place:** unknown; a small room with a spinning platform / fan, two talkers and an effect actor (M). No progress
  value set or tested (H). It shares its spinning-platform code with sc05_004 (F097) (H).
* **Size:** 56 functions (own 2, lone-shared 14, family 23: F097 x11, F031 x6, F035 x3, F036 x3; 4 actor dispatchers,
  6 stubs; P01, P02, P03).
* **Actors:**
  * A1 (0x8017C0E4): F036 effect actor (SpawnEffect / FreeEffect) (H).
  * A2 (0x8017D8A4): F097, a spinning platform with four arm parts (kind 0x191, variants 0-3) that carries Musashi and
    turns him with it; variant != 0 waits for flag 0xBA before it starts; while spinning it lifts Musashi when he is
    close above it (see F097) (M). Own arm set-up 0x8017DB84: AllocActorModel; if the 0x100 bit of the variant is
    clear the arm faces parent facing + arm index * 0x400 (a quarter turn each) and collides (+0x58 = D_80181E74,
    +0x5C 0x4C00); with the bit set it uses D_80181E84 / 0x4800 (H).
  * A3 (0x8017DCE4): a talking NPC (S20 set-up, S11 RunScript(D_80181F10[variant]), S25 event wait); talk allowed
    when Musashi is within distance 64 (0x8017DE18, S18) (H).
  * A4 (0x8017DE74): F031 talker / scripted actor (SetupActor by variant & 0xF, SpawnActorArg(0x1E3, 1), talk marker
    with a facing test, sounds 0x5BF / 0x888) (H).
* **Puzzles / mechanisms:** the spinning platform; flag 0xBA starts the waiting one (H). Who sets 0xBA is not in this
  stage's code (unknown).
* **Exits:** P01 only (0x8017D144 with SoundCmd1(1), 0x8017D21C without) (H); destinations unknown (data).
* **Sound:** 0x720 (platform starts), 0x721 then sound command 4 with 0x720 (spin cycle) (H).
* **Unknown / notes:** camera set-up 0x8017D2E0 (F097: projection 0x190, distance 0x4B0, angle 0x155) and an own camera
  mode 0x8017D3C0 that clamps the focus x to -0x2E0..0x2C0 when focus y < -0x680, else -0x240..0x240 (H): a tall
  room with a wider upper part (M).

#### Names: SC03_109
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D3C0 | func_sc03_109_8017D3C0 | CameraClampByHeight | focus x clamp chosen by focus y | H |
| 0x8017D8A4 | func_sc03_109_8017D8A4 | SpinPlatformMain | ACTOR-MAIN of A2 (F097 states) | M |
| 0x8017DB84 | func_sc03_109_8017DB84 | SpinArmInit | arm model, facing parent + i * 0x400 | H |
| 0x8017DCE4 | func_sc03_109_8017DCE4 | TalkerMain | ACTOR-MAIN of A3 | M |
| 0x8017DE74 | func_sc03_109_8017DE74 | Talker2Main | ACTOR-MAIN of A4 (F031) | M |

### SC03_110
* **Place:** unknown; a room with a flowing floor / stream zone and an animated texture (M). No progress value set or
  tested (H). Its F024 treasure-type actor tests map 0x3028 (H; this or a twin map, data unknown).
* **Size:** 100 functions (own 4, lone-shared 18, family 62: F096 x26, F013 x15, F024 x11, F057 x10; 4 actor
  dispatchers, 4 stubs; P01, P02, P03).
* **Actors:**
  * A1 (0x8017C8B8) + set-ups 0x8017BFEC / 0x8017C378: F024 (a collectable that checks GetVar(0x3B + i) and starts
    event D_80185818 when Musashi comes within distance ~0x52; AddMaxBp / AddBp on pick-up) (H; owned elsewhere).
  * A2-A4 (0x8017CD10, 0x8017D33C, 0x8017D5DC): F013 effect / scene actors (owned elsewhere).
  * Flow zone 0x8017ED94 (own; dispatcher-less handler, variants 0-4): when Musashi is inside its band (+-0x60 across,
    +-0x1B0 along x or z) and on the ground (TraceMap bit 0x2000), it picks one of 25 8-byte vectors (D_80185988,
    5 sub-bands per variant) and passes it to engine func_8014CB9C, which stores it as Musashi's per-frame push
    vector (player +0x140, flag +0x146 = 1, cleared each frame) (H). Variant 0 also drives a looping sound 0x738:
    full volume inside a zone, otherwise volume by ground distance to the nearest kind-0x1E4 actor, and sound command
    4 with 0x738 (stop, M) beyond it (H). M: a current / conveyor floor; L: flowing water.
  * Static model 0x8017F234 (own): AllocActorModel, model data D_8019BF28, flags 0x60000040 (H).
  * Texture animator 0x8017F2D8 -> 0x8017F2F8 (own): every frame steps a 16-frame cycle of two MoveImage VRAM copies
    (tables D_8019BB90 / D_8019BC50, 0x8017F3D4) (H): an animated texture (M: the flowing surface).
  * Hopping enemy (0x8017F43C, set-up 0x8017F4CC): F096 (M).
  * Creature with main 0x80180FE0 (S11) and F057 states: plays 0x6FE every 16 frames with distance volume
    (0x80181CB4) (H); behaviour in F057 (owned elsewhere).
* **Exits:** P01 only (0x8017E898 with SoundCmd1(1), 0x8017E970 without) (H); destinations unknown (data).
* **Sound:** 0x738 loop (flow), 0x6FE (F057 creature), 0x62E / 0xBFE (F024), 0x832 / 0xA74 (F096) (H).
* **Unknown / notes:** camera 0x8017EA34 (projection 0x190, distance 0x3E8, angle 0xE3); mode 0x8017EB14 clamps focus
  x -0xB40..0x940, y <= -0x300 and toggles two distances (D_80185984) on GetObjPadPressed & 3 (H).

#### Names: SC03_110
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EB14 | func_sc03_110_8017EB14 | CameraClampToggleDist | clamp + pad-toggled distance | H |
| 0x8017ED94 | func_sc03_110_8017ED94 | FlowZoneUpdate | band test, func_8014CB9C push vector, sound 0x738 | H |
| 0x8017F234 | func_sc03_110_8017F234 | StaticModelInit | AllocActorModel + fixed model data | M |
| 0x8017F2D8 | func_sc03_110_8017F2D8 | TexAnimMain | calls 0x8017F2F8 | M |
| 0x8017F2F8 | func_sc03_110_8017F2F8 | StepTexAnim | 16-frame MoveImage cycle | H |
| 0x8017F3D4 | func_sc03_110_8017F3D4 | CopyTexFrame | MoveImage of one 6-halfword entry | H |
| 0x80180FE0 | func_sc03_110_80180FE0 | HummingCreatureMain | dispatcher + 0x6FE every 16 frames | M |
| 0x80181CB4 | func_sc03_110_80181CB4 | PlayDistanceHum | SoundRequest(0x6FE) volume by distance | H |

### SC03_111
* **Place:** unknown outdoor room (M) with a clock-driven object: sets progress 0xE6 (230) (H) and, through the F023
  chest-type actor, progress 0x5A (90) with flag 0xEA (H). F025 walker set-up (S4, 0x8017BEBC) gates on a flag table
  D_801885D0 and progress 200 (H).
* **Size:** 142 functions (own 14, lone-shared 15, family 88: F093 x29, F013 x15, F023 x12, F024 x11, F025 x10, F033,
  F009, F035; 11 actor dispatchers, 7 stubs; P01, P02, P03 plus an own mesh drawer 0x8017FB38).
* **Actors:**
  * Clock object (dispatcher 0x80180FB4, set-up 0x80181090, state 0x80180D4C; all own): a model with a second model at
    +0xCC; while the game hour D_80078EB1 is 3-6 it swells (scale x/z up to +0x280 * rsin, y shrinks) and otherwise
    shrinks back (H). Talk (marker only while progress < 0xE6; callback 0x801812B4: within distance^2 0x14400) runs
    event script D_80188AB8 if fully opened, else D_80188AF8; after the first one ends, SetProgress(0xE6) (H); from
    progress >= 0xE6 it stays opened and hidden-flagged (H). L: something that opens at dawn (a flower / gate).
  * Rotating carrier 0x80181178 / 0x801811E0 (own): SetupActor, SpawnActorArg(0x1C4, 1); turns by +0xFC per frame and
    moves on a circle of radius +0xDC, carrying Musashi and turning him with it (CarryPlayer) (H): a turntable / ride (M).
  * Glow sprite 0x8018151C / 0x8018154C -> 0x80181574 (own): draws four screen quads (clut 0x31, colour 0x406040)
    around its projected position (H). L: a light effect.
  * Texture animation 0x80181324 -> 0x80181344 (MoveImage cycle, as in sc03_110) (H).
  * F025 walker NPC (0x8017C058-0x8017C650: walks, StartEventKeepPlayer when talked to, sound 0x828), F024 collectable
    (event D_801886EC, map 0x3028 test), F013 effects, F093 chained creature, F023 chest / reward actor (A10: flag
    table D_801B61D0, AddMoney, SetProgress(0x5A), SetFlag(0xEA)) and F023 talker A11 (0x5BF) (H; families elsewhere).
* **Events / scripted scenes:** D_80188AB8 / D_80188AF8 (clock object); F025 / F023 / F024 scripts (H).
* **Exits:** P01 only (0x80180850 with SoundCmd1(1)) (H); destinations unknown (data).
* **Unknown / notes:** camera 0x8018093C / 0x80180A10: focus y >= -0x332, z >= -0x620, camera angle by distance from a
  centre point (0xE3 + d * 683 / 1568, capped 0x38E) and heading ratan2(x, z): a camera orbiting a central point (H);
  pad toggle of two distances (D_80188A54).

#### Names: SC03_111
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8018093C | func_sc03_111_8018093C | RoomInitCamera | SetCameraUpdate(0x801809D4), SnapCamera | H |
| 0x80180A10 | func_sc03_111_80180A10 | CameraOrbitCentre | ratan2 heading, angle by centre distance | H |
| 0x80180D4C | func_sc03_111_80180D4C | ClockObjOpenAndTalk | hour 3-6 swell, scripts, SetProgress(0xE6) | H |
| 0x80180FB4 | func_sc03_111_80180FB4 | ClockObjMain | table dispatch + second model follow | M |
| 0x80181090 | func_sc03_111_80181090 | ClockObjInit | two models, talk marker while progress < 0xE6 | H |
| 0x801812B4 | func_sc03_111_801812B4 | ClockObjCanTalk | distance^2 <= 0x14400, sets +0xFE = 1 | H |
| 0x80181178 | func_sc03_111_80181178 | TurntableInit | SetupActor, SpawnActorArg(0x1C4, 1) | M |
| 0x801811E0 | func_sc03_111_801811E0 | TurntableCarry | circle move + CarryPlayer | H |
| 0x80181344 | func_sc03_111_80181344 | StepTexAnim | MoveImage cycle | H |
| 0x80181574 | func_sc03_111_80181574 | DrawGlowQuads | four screen quads at projected position | M |
| 0x8017FB38 | func_sc03_111_8017FB38 | DrawMeshVariant | own GTE mesh renderer | M |

### SC03_112
* **Place:** unknown; an enemy room built from the same parts as sc02_039 / sc03_108 (an own copy of the F059
  multi-part machine and camera) plus the F093 / F094 / F096 enemies (H). No progress value set or tested (H).
* **Size:** 158 functions (own 12, lone-shared 26, family 100: F093 x29, F096 x26, F094 x19, F044 x12, F030 x6,
  F033 x5, F009 x3; 6 actor dispatchers, 6 stubs; P01, P02, P03).
* **Actors:**
  * A1 / A2 (0x8017BEBC, 0x8017C150): effect actors (S27 / F009) (H).
  * A3 (0x8017EBA8) with set-ups 0x8017EA24 / 0x8017F0F4 and helper 0x8017E9A0 (own): the sc03_108 F059 multi-part
    model rebuilt for kind 0x19B (instead of 0x199): parts spawn SpawnActorArg(0x19B, n) children sharing the model;
    0x8017F1CC runs a MimeBlend shape animation (0x8017EBE4), a motion step (0x8017EE48) and five
    ActorSegmentHitsPlayer tests (0x8017EFAC) (H). L: a large moving machine / creature that hurts on contact.
  * A4 (0x8017F3B8): a talking NPC (S20 set-up, RunScript D_801896F0 (S12), S25 wait, distance-64 talk test S18) (H).
  * Burst enemy (F044 + F094), A5 F093 chained creature (0x80184278), F096 hopper, A6 F030 sprite effect (H).
* **Exits:** two own exit steps 0x8017DEF8 / 0x8017DFBC: only SoundRequest(0x1D) (no 0x1C, no func_8001BFD0), with
  / without SoundCmd1(1), then StartExitFade (H). Destinations unknown (data).
* **Sound:** 0xAA1 (F044), 0x521 / 0xC5D / 0x98F etc. via families (H).
* **Unknown / notes:** camera 0x8017E06C / 0x8017E160 (own copy of the F059 camera: follows Musashi's facing, pad
  toggle of two distances; 0x8017E4B4 adds a third clip test 0x8017E7C4) (H).

#### Names: SC03_112
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DEF8 | func_sc03_112_8017DEF8 | RoomExitStepMusic | 0x1D, SoundCmd1(1), StartExitFade | H |
| 0x8017DFBC | func_sc03_112_8017DFBC | RoomExitStep | 0x1D, StartExitFade | H |
| 0x8017E06C | func_sc03_112_8017E06C | RoomInitCamera | SetCameraUpdate(0x8017E124) | H |
| 0x8017E160 | func_sc03_112_8017E160 | CameraFollowFacing | pad distance toggle, facing offset | H |
| 0x8017E4B4 | func_sc03_112_8017E4B4 | CameraClipAngle | three clip tests + ratan2 | M |
| 0x8017EA24 | func_sc03_112_8017EA24 | MachineInit | AllocActorModel, SpawnActorArg(0x19B) parts | H |
| 0x8017E9A0 | func_sc03_112_8017E9A0 | SpawnMachinePart | SpawnActorArg(0x19B) | H |
| 0x8017EBA8 | func_sc03_112_8017EBA8 | MachineMain | ACTOR-MAIN of A3 | M |
| 0x8017EBE4 | func_sc03_112_8017EBE4 | MachineMimeBlend | MimeBlend between shapes | M |
| 0x8017EFAC | func_sc03_112_8017EFAC | MachineHitPlayer | 5 x ActorSegmentHitsPlayer | H |
| 0x8017F0F4 | func_sc03_112_8017F0F4 | MachinePartInit | two models, NextState | M |
| 0x8017F1CC | func_sc03_112_8017F1CC | MachineUpdate | blend + motion + hit tests | M |
| 0x8017F3B8 | func_sc03_112_8017F3B8 | TalkerMain | ACTOR-MAIN of A4 | M |

### SC03_113
* **Place:** unknown; a room with vertical moving-step columns tied to flag 0xBA (H), the F025 walker NPC (progress
  200 / flag-table gate) and F093 / F057 creatures. No progress value set (H). Its step-column code is shared only
  with sc05_002 (S2) (H).
* **Size:** 100 functions (own 2, lone-shared 25, family 52: F093 x29, F025 x10, F057 x10, F009 x3; 6 actor
  dispatchers, 7 stubs; P01, P02, P03).
* **Actors:**
  * A1 / A2: effect actors (S27, F009). A3 (0x8017E6EC): F025 walker / talker (StartEventKeepPlayer, event D_80186E90,
    SpawnActorArg(0x30 / 0x1F8), sounds 0x828 / 0x829, SetFlag(D_80186EB0[variant])) (H; family elsewhere).
  * Step column, kind 0x1A3 (A5 0x8017F8C8, set-up 0x8017F904, S2): a sprite whose texture offset +0x30 scrolls by a
    per-variant speed (0x8017F394, wrapping every 0x30) and that emits a kind-0x1A4 step every D_8018716C[variant]
    frames; at set-up it fills the column with steps (0x8017F6CC: spacing 0x100 while its 0x8000 variant bit is set
    and flag 0xBA is clear, else 0x180) (H).
  * Step, kind 0x1A4 (set-up 0x8017F9FC, move 0x8017FAD4, S2): a model platform that moves vertically at the column's
    speed, carries Musashi exactly (CarryPlayerExact) and is freed after the column length D_80187154 (H). M: an
    escalator-like chain of rising / falling platforms (L: a waterfall with floating logs).
  * Column variant 0 runs 0x8017F4DC (own): a loop sound 0x704 (or 0xBAA for 0x8000-bit columns) with volume by
    Musashi's x distance to the nearest column, sound command 4 (stop) when far (H).
  * F093 chained creature; F057 creature with distance hum (0x8017FC3C, S11) (H).
* **Puzzles / mechanisms:** flag 0xBA changes the marked columns' step pattern (H): M, a switch elsewhere (sc03_109's
  spinning platform also waits for 0xBA) turns the flow on.
* **Exits:** P01 only (with / without SoundCmd1(1)) (H); destinations unknown (data).
* **Unknown / notes:** camera 0x8017F07C (own set-up) + mode 0x8017F15C (S34, pad toggle) (H).

#### Names: SC03_113
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F07C | func_sc03_113_8017F07C | RoomInitCamera | SetCameraUpdate(0x8017F120), SnapCamera | H |
| 0x8017F394 | func_sc03_113_8017F394 | StepColumnScrollEmit | texture scroll + timed SpawnActor(0x1A4) | H |
| 0x8017F4DC | func_sc03_113_8017F4DC | StepColumnSound | 0x704 / 0xBAA volume by nearest 0x1A3 | H |
| 0x8017F6CC | func_sc03_113_8017F6CC | StepColumnFill | initial steps, spacing by flag 0xBA | H |
| 0x8017F8C8 | func_sc03_113_8017F8C8 | StepColumnMain | ACTOR-MAIN of A5 | M |
| 0x8017F904 | func_sc03_113_8017F904 | StepColumnInit | AllocActorSprite, flag 0xBA state choice | H |
| 0x8017F9FC | func_sc03_113_8017F9FC | StepInit | AllocActorModel, collision | H |
| 0x8017FAD4 | func_sc03_113_8017FAD4 | StepMoveCarry | vertical move, CarryPlayerExact, free at end | H |

### SC03_114
* **Place:** a cutscene room (M): a director actor plays one event with camera cuts and leaves by RequestMapChange
  (H). No progress value set or tested (H). One alternate exit step loads field file 2 instead (0x8017CF38:
  FadeDone(4) -> RequestFieldFileLoad(2), S2) (H).
* **Size:** 47 functions (own 12, lone-shared 14, family 5: F098; 3 actor dispatchers, 6 stubs; P01, P02, P03).
* **Actors:**
  * Director (A1 0x8017D704; room set-up 0x8017D110 spawns seven cast actors kind 0x336 with SpawnActorFromDef and
    keeps them at +0xCC.. +0xF4) (H). 0x8017D814 waits +0x1C frames, clears flags 0x125-0x12C and 0x130, StartEvent
    D_80183140 (H). 0x8017D518 runs it: each flag 0x125-0x12B the script raises is cleared and turned into an action -
    0x125 / 0x126 camera cuts (ScriptOpCameraCut D_801830F0 / D_80183110), 0x127 a camera move (D_80183120), 0x128 /
    0x129 / 0x12A swap a cast member's motion data (+0xF8), 0x12B func_800183E0(D_8019A6CC) (H). Pad (GetPadPressedDir
    & 0x840) when func_800CF8B4() allows skips ahead (H; M: skip button). When the script ends, 0x8017D8DC
    RequestMapChange(D_80182450) (H). 0x8017D7C8 / 0x8017D7F8 set cast motion data (H).
  * Cast member behaviour 0x8017D928 (own): idles on script D_801824A8 (blinks via +0x98 timer), switches to D_80182640
    when flag 0x12C is set and to D_80182778 when flag 0x130 is set (H); 0x8017DA30 / 0x8017DB74 random-idle helpers
    (func_800183E0, rand) (H); 0x8017DC38 slides +6 by one every third frame for 21 frames after flag 0x130 (H);
    0x8017DCC0 draws a 0x54 x 0x58 shaded quad on the model (H: a shadow / glow card, M).
  * A2 (0x8017DD64, S2): a model that bobs with rsin (H). A3 (0x8017DEA8, S2): a sprite emitter of F098 particles
    (0x8017E070: prop 0x55 with velocity from a curve, func_800139C8 / func_8001382C) (H): smoke or sparks (L).
* **Events / scripted scenes:** event D_80183140 with flag-driven camera and cast changes (H).
* **Exits:** RequestMapChange(D_80182450) after the event (H; destination unknown, data); RequestFieldFileLoad(2)
  exit step (H).
* **Unknown / notes:** camera 0x8017CFC0 (own) with S34 pad-toggle mode and 0x8017D0E4 (H).

#### Names: SC03_114
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D110 | func_sc03_114_8017D110 | RoomSpawnCast | 7 x SpawnActorFromDef(kind 0x336) | H |
| 0x8017D518 | func_sc03_114_8017D518 | EventRunFlagCues | flags 0x125-0x12B -> camera / motion cues, skip | H |
| 0x8017D704 | func_sc03_114_8017D704 | DirectorMain | ACTOR-MAIN of A1 | M |
| 0x8017D814 | func_sc03_114_8017D814 | EventStartScene | clear cue flags, StartEvent(D_80183140) | H |
| 0x8017D8DC | func_sc03_114_8017D8DC | EventExitMap | RequestMapChange(D_80182450) | H |
| 0x8017D7C8 | func_sc03_114_8017D7C8 | CastSetMotionA | +0xF8 = D_80182BD0 | M |
| 0x8017D7F8 | func_sc03_114_8017D7F8 | CastSetMotionB | +0xF8 = D_80182908 | M |
| 0x8017D928 | func_sc03_114_8017D928 | CastPickScript | scripts by flags 0x12C / 0x130 | H |
| 0x8017DC38 | func_sc03_114_8017DC38 | CastSlideOnCue | moves after flag 0x130 | H |
| 0x8017DCC0 | func_sc03_114_8017DCC0 | DrawShadeQuad | fixed quad on model | M |

### SC03_115
* **Place:** unknown room visited around progress 0x280-0x294 (640-660): its pick-one item stand appears only while
  progress < 0x294 and can be talked to from 0x280; scripts change at 0x28A (650) (H). Also the F044 / F094 burst enemy
  and an F057 creature (H).
* **Size:** 102 functions (own 16, lone-shared 22, family 47: F094 x19, F044 x12, F057 x10, F030 x6; 2 actor
  dispatchers, 1 player-action dispatcher, 6 stubs; P01, P02, P03).
* **Actors:**
  * Item stand objects (A1 0x8017D5B8, set-up 0x8017D7CC, own): models whose variant +0x70 names an item; var 0xDE holds
    the variant Musashi has taken (H). Taking one (0x8017D628) puts item 0x62 + variant in a free bag slot (ovl36
    func_800D0EC4 / func_800D0F0C: vars 0x2F-0x3A) and hides the model; taking another (0x8017D684) removes the old
    item from the bag (func_800D0F4C), puts the new one in and swaps the scripts (H). Talk (0x8017D8C8, allowed only for
    a shown object within ground distance 64, 0x8017D9C4) runs D_80183F98 before progress 0x28A, after it D_801840B0
    if something is taken else D_80184010 (H). M: Musashi may carry exactly one of several objects.
  * 0x8017D750 (own): stores Musashi's offset from the actor and plays 0x6A6 (H).
  * Burst enemy (dispatcher 0x8017DA34, own copy of the F044 main; F094 states), F057 creature, A2 F030 effect (H).
* **Events / scripted scenes:** player-action sequence 0x8017D09C (own phases): BeginScene; Musashi turns to the
  active camera's point (ActionHelper_1AB0), EndScene, SetPlayerMotion; a second scene turns him to D_80126B3C,
  ClearActionHandler (H). M: used when he picks an object up.
* **Exits:** P01 only (with / without SoundCmd1(1)) (H); destinations unknown (data).
* **Unknown / notes:** camera 0x8017D2D0 + mode 0x8017D3B0 (own clamp) (H).

#### Names: SC03_115
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D09C | func_sc03_115_8017D09C | PickUpSceneMain | PLAYER-ACTION-MAIN | M |
| 0x8017D128 | func_sc03_115_8017D128 | PickUpSceneFaceCamera | ActionHelper_1AB0 to camera point, EndScene | H |
| 0x8017D234 | func_sc03_115_8017D234 | PickUpSceneTurnBack | turn to D_80126B3C, ClearActionHandler | H |
| 0x8017D3B0 | func_sc03_115_8017D3B0 | CameraClampFocus | clamp then follow helper | M |
| 0x8017D5B8 | func_sc03_115_8017D5B8 | ItemStandMain | ACTOR-MAIN of A1 | M |
| 0x8017D628 | func_sc03_115_8017D628 | ItemStandTake | item 0x62 + variant to bag, var 0xDE | H |
| 0x8017D684 | func_sc03_115_8017D684 | ItemStandSwap | remove old item, give new | H |
| 0x8017D7CC | func_sc03_115_8017D7CC | ItemStandInit | progress 0x280 / 0x294 gates | H |
| 0x8017D8C8 | func_sc03_115_8017D8C8 | ItemStandTalk | scripts by progress 0x28A / var 0xDE | H |
| 0x8017D948 | func_sc03_115_8017D948 | ItemStandTalkEnd | EndEvent, show / hide model | H |
| 0x8017D9C4 | func_sc03_115_8017D9C4 | ItemStandCanTalk | shown + ground distance 64 | H |
| 0x8017D750 | func_sc03_115_8017D750 | ItemStandNoteOffset | offset to Musashi + 0x6A6 | M |

### SC03_116
* **Place:** unknown room with a barrier removed by destroying a set of objects (M). Exit 0x80180B8C sends SoundCmd1(1)
  only while progress < 0x258 (600) (H), so the room is visited before and after that point (M).
* **Size:** 69 functions (own 35, lone-shared 11, family 5: F050; 4 actor dispatchers, 7 stubs; P01, P02, no P03:
  an own 652-line mesh renderer 0x8017BF14 called from 0x8017BEBC).
* **Actors:**
  * Swelling objects, kind 0x1C0 (set-up 0x80181A5C, update 0x801819F4, own): not spawned once flag 0x11C is set (H).
    Each hit (except hit kind 0x22) shrinks the model by 0x80 per frame for 8 frames, spawns prop 0x22 and plays 0xA26;
    at scale <= 0x2000 it plays 0xA25 and enters its last state 0x80181B88 (shrink to 0, dust shadow, clear sequence
    point +0x70, free) (H). 0x80181E28 runs a loop sound 0xA2C with volume from the on-screen position (H). Touching
    one hurts (HitBoxEdgesHitPlayer, 0x80181B44) (H).
  * Barrier (A3 0x80181F6C, set-up 0x80181FA8, own): not spawned once flag 0x11C is set; when no kind-0x1C0 with arg 2
    remains it dims its colour, and when none at all remain it StartEvent(D_80186500) (0x801820AC) (H). Script cues
    (0x8018213C): 1 = find kind 0x334 and play 0xA27, 2 = animate the model 0x40 frames then 0xA2A, 3 = SetSeqPointN,
    SetFlag(0x11C, 1), hide (H).
  * A1 (0x80180FBC, own): an effect sequence started by cue 1 (sound 4 + 0xA27 stop, 0xA28, timed phases, drawn with
    func_80017758 in 0x801812AC) (H). A2 (0x801814B0, own): a sprite effect with grow / hold / fade phases (H).
  * A4 (0x80182378): F050 (owned elsewhere). 0x801822A0 sets four sequence points at start (SetSeqPointN x4) (H).
* **Puzzles / mechanisms:** destroy every 0x1C0 object to open the barrier; flag 0x11C keeps it open (H).
* **Exits:** P01 + 0x80180B8C (progress-dependent SoundCmd1(1)) (H); destinations unknown (data).
* **Sound:** 0xA25-0xA2C series (H).

#### Names: SC03_116
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017BEBC | func_sc03_116_8017BEBC | DrawRoomMesh | GsGetLs + own renderer 0x8017BF14 | M |
| 0x80180B8C | func_sc03_116_80180B8C | RoomExitStep | SoundCmd1(1) only below progress 0x258 | H |
| 0x80181A5C | func_sc03_116_80181A5C | SwellingInit | flag 0x11C gate, model, script | H |
| 0x801819F4 | func_sc03_116_801819F4 | SwellingUpdate | sound + hit handling | M |
| 0x80181C4C | func_sc03_116_80181C4C | SwellingTakeHit | shrink, prop 0x22, 0xA26 / 0xA25 | H |
| 0x80181E28 | func_sc03_116_80181E28 | SwellingLoopSound | 0xA2C by screen position | H |
| 0x80181B88 | func_sc03_116_80181B88 | SwellingVanish | shrink to 0, ClearSeqPoint, free | H |
| 0x80181F6C | func_sc03_116_80181F6C | BarrierMain | ACTOR-MAIN of A3 | M |
| 0x80181FA8 | func_sc03_116_80181FA8 | BarrierInit | flag 0x11C gate, model | H |
| 0x801820AC | func_sc03_116_801820AC | BarrierWaitCleared | no kind 0x1C0 left -> StartEvent | H |
| 0x8018213C | func_sc03_116_8018213C | BarrierEventCues | cues 1-3, SetFlag(0x11C) | H |
| 0x80180FBC | func_sc03_116_80180FBC | OpenEffectMain | ACTOR-MAIN of A1 | M |
| 0x801814B0 | func_sc03_116_801814B0 | SpriteFxMain | ACTOR-MAIN of A2 | M |
| 0x801822A0 | func_sc03_116_801822A0 | RoomSetSeqPoints | 4 x SetSeqPointN | H |

### SC03_117
* **Place:** unknown; a large scripted room whose main object wakes after boss flag 0x8C (H) in a camera-shaking event
  that sets flag 0xBB (H). Sets progress 0x5A (90) through the F023 chest-type actor (H); one mover appears only for
  progress 900-999 (0x8017FCF0) (H).
* **Size:** 189 functions (own 47, lone-shared 26, family 75: F093 x29, F056 x15, F023 x12, F057 x10, F009, F035,
  F036; 17 actor dispatchers, 2 player-action dispatchers, 10 stubs; P01 with extra steps, P02, P03).
* **Actors / events (main points only):**
  * Wake-up object, state 0x8017E498 (own): when Musashi is within ground distance 80 and not in player state 2/3 it
    starts event D_8018865C (flag 0x8C clear) or D_8018866C (set) (H). With flag 0x8C set it then waits for Musashi to
    come back with GetStatsByteC0() == 4 (L: a particular power / scroll), gives him player action script
    D_80188350 (SetPlayer1C4And21C(4, ..)), turns music off 0x5A frames later (SoundCmd1(0)), swaps its sprite
    (0x8017EA1C) and, when his action ends, starts event D_8018868C (0x8017E6A0) (H).
  * Wake-up sequence 0x8017E6EC (own): camera shakes every 8 frames, then 11 parts SpawnActorArg(0x1E0, 0-10), sound
    0x866 / 0x865, motion steps (0x8017EB34 / 0x8017ECC4), SpawnActor(0x23A) with 0x868 and stronger shakes; when that
    child reports done (+0xE2) SetFlag(0xBB, 1), func_8002959C, stop 0x868 (H). L: a giant awakened / a structure that
    rises.
  * Flag-0xBB users: sprite 0x8017EA1C and model set-up 0x8017F894 (GetFlag(0xBB) picks the "after" look) (H).
  * A4 / A5 (0x8017EFF0, 0x8017F25C, own): VRAM image save / restore (StoreImage / LoadImage, 0x8017F298 / 0x8017F2D8)
    around a sprite actor that spawns kind 0x2B0 (H). 0x8017EE78: MoveImage texture animation (H).
  * A6 / A7 (0x8017F568, 0x8017F750, own): a moving object with a loop sound 0x756 by distance (0x8017F5A4) and four
    ActorSegmentHitsPlayer tests; variant 0 starts event D_801887B4 when Musashi is within 0x60 (0x8017FDB4) (H).
  * Progress 900-999 mover 0x8017FCF0: a model launched with local velocity z 0xC0000 (H).
  * Families: F093 chained creature, F056 / F057 creatures, F023 reward actor (SetProgress(0x5A)), F009 / F036
    effects (H).
* **Events / scripted scenes:** D_8018865C / D_8018866C / D_8018868C / D_801887B4 (H); player-action sequences
  0x8017CD9C (EndScene, SetPlayerMotion) and 0x8017DFE8 (timed, 0x8017E024 / 0x8017E058) (H).
* **Exits:** P01 (several step tables, 11 P01 functions) (H); destinations unknown (data).
* **Sound:** 0x865 / 0x866 / 0x868 (wake-up), 0x756 (mover), SoundCmd1(0) music stop (H).
* **Unknown / notes:** 30+ further own helpers (effects, sprite set-ups) not read in detail; camera 0x8017E118 /
  0x8017E218 (pad toggle).

#### Names: SC03_117
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E118 | func_sc03_117_8017E118 | RoomInitCamera | SetCameraUpdate(0x8017E1DC) | H |
| 0x8017E498 | func_sc03_117_8017E498 | WakeObjApproach | flag 0x8C events, ability check, action script | H |
| 0x8017E6A0 | func_sc03_117_8017E6A0 | WakeObjStartEvent | StartEvent(D_8018868C) | H |
| 0x8017E6EC | func_sc03_117_8017E6EC | WakeObjRiseSequence | shakes, 11 x 0x1E0, 0x23A, SetFlag(0xBB) | H |
| 0x8017CF24 | func_sc03_117_8017CF24 | IsWakeActionScript | g_PlayerActionScript == D_80188350 | H |
| 0x8017EA1C | func_sc03_117_8017EA1C | WakeObjSpriteInit | sprite by flag 0xBB | M |
| 0x8017EE78 | func_sc03_117_8017EE78 | StepTexAnim | MoveImage x2 | H |
| 0x8017F298 | func_sc03_117_8017F298 | SaveVramRect | StoreImage | H |
| 0x8017F2D8 | func_sc03_117_8017F2D8 | RestoreVramRect | LoadImage | H |
| 0x8017F5A4 | func_sc03_117_8017F5A4 | MoverLoopSound | 0x756 by distance | H |
| 0x8017F894 | func_sc03_117_8017F894 | AfterWakeModelInit | GetFlag(0xBB), SpawnActor(0x2B0) | M |
| 0x8017FCF0 | func_sc03_117_8017FCF0 | LateMoverInit | progress 900-999 gate | H |
| 0x8017FDB4 | func_sc03_117_8017FDB4 | MoverNearEvent | StartEvent(D_801887B4) within 0x60 | H |
About 34 more own functions not proposed.

### SC03_118
* **Place:** a story hub room revisited across the story (M): its code sets progress 0x85 (133, F020 with flags
  0x16-0x1A), 0x1CC (460), 0x1D1 (465), 0x276 (630) and 0x5A (90, F023), and tests 0x1D7 (471) and 0x276 (H). Boss
  flag 0x8B and flag 0xB8 drive its main event (H). sc03_118 and sc03_119 are the same code (split pieces _o0 / _post
  merged) (H).
* **Size:** 313 functions (lone-shared 43, family 216: F099 x54 (only with sc03_119), F020 x52, F093 x29, F022 x15,
  F056 x15, F023 x12, F025 x10, F029 x7, F095 x6, F085, F083, F084, F009, F035; 20 actor dispatchers, 4 player-action
  dispatchers, 17 stubs; P01, P02 x2). Practically all of its own code is F099 (see the family).
* **Actors / events (main points):**
  * Ability gate 0x80183D68 (F099): when Musashi is within distance 32 it takes control and starts event D_8018EBE8
    (boss flag 0x8B clear) or D_8018EBF8 (set) (H). With 0x8B set, flag 0xB8 clear and GetStatsByteC0() == 3 it gives
    him action script D_8018DA14 (SetPlayer1C4And21C(3, ..)), opens a HUD panel, music off after 0x5A frames
    (SoundCmd1(0)), and when his action reaches step 3 switches to a scripted camera (0x80184430 / 0x801842DC, paths
    D_8018EBD8 then D_8018EBC8 after 0x78 frames); when done SetFlag(0xB8, 1) and SpawnActor(0x249) (H). Same pattern as
    sc03_117 (flag 0x8C, stats 4) (M): L, a power earned from each boss used at a story object.
  * Hit-to-trigger object 0x801825EC (F099): a hit of one of eight kinds (D_8018E10C) bumps a counter on its parent,
    spawns prop 0x42, StartEvent(D_8018E014), SoundRequest(0x74B), func_8001AAA0(0x4D) (H); 0x80182DC4 then sets
    progress 0x1CC when that event ends (H).
  * 0x801845C8 (F099): after its timer and func_8001AAA0(0x49) != 0, SetProgress(0x276) and frees itself (H).
  * 0x80188FB0 (F099): when Musashi comes within distance 64 (sub-state 1) it starts event D_801D09F4, faces him and sets
    progress 0x1D1 (H). 0x80188990 (F099): a knock-about object like sc03_107's (bounces with 0x754 / 0x7DF, F095
    dispatcher), gone from progress 0x1D7 (H).
  * Families: F020 (progress 0x85 event, sound 0x445), F025 walker, F093 chained creature, F023 reward, F022 / F056 /
    F029 / F083-F085 (owned elsewhere).
* **Exits:** P01; one exit step sends SoundCmd1(1) only while flag 0xB8 is clear (0x80181780 area, as sc03_107) (H);
  destinations unknown (data).
* **Sound:** 0x74B, 0x426, 0x754, 0x7DF, 0x445 (H).
* **Unknown / notes:** func_8001AAA0(n) (EXE, unnamed) is called with 0x4D / 0x49 at story steps (H; meaning unknown).

#### Names: SC03_118
All own code is in F099 (named in the family section); no further proposals.

### SC03_119
Same code as SC03_118 (F099 and all other shapes identical; 315 vs 313 functions only from how the split pieces were
merged); differs only in data (H). Names as SC03_118.

### SC03_121
* **Place:** an arena with a staged fight / contest in rounds (M); when it is over it sets progress 0x1A4 (420) and
  leaves by RequestMapChange (0x801818A4) (H).
* **Size:** 91 functions (own 52, lone-shared 17, family 3: F010; 6 actor dispatchers, 7 stubs; P01, P02, P03).
* **Round controller (own, 0x80180254-0x80180E64; var 0xDD = round 1-4):** start (0x80180254): func_8001AAA0(0x41),
  five SpawnActor(0x1C5) kept in D_801AECD8, SpawnActorArg(0x21D, 0 / 1) and up to ten SpawnActorArg(0x220, n),
  sound 0x716; then SetVar(0xDD, 1) (H). Each round (0x80180568 / 0x80180850 / 0x80180B1C): after a delay it wakes one
  of the five 0x1C5 actors at random (interval 0xB4 - D_80078E78+0x1A); when the game byte D_80078E78+0x39 reaches 3
  (and no player event is running) all five are told to go, and once none is left active it starts the round's event
  (D_8019BB90 / D_8019BBB0 / D_8019BBD0) and sets var 0xDD to the next round; if D_80078E78+0x1A reaches 0xD2 first
  the round is skipped to the next (H). Last round 0x80180E64: SoundCmd1(1), event D_8019BBF8, func_8001AAA0 (H).
  Then 0x801818A4: SetProgress(0x1A4), RequestMapChange(D_80185BDC) (H). M: the meaning of +0x39 (hits?) and +0x1A
  (a timer?) is not visible.
* **Actors:** a large enemy with own movement / attack states 0x8017D8D4-0x8017E880 (TraceMap probes 0x8017D65C,
  SetLocalVelocityXZ charges, ActorSegmentHitsPlayer, DamageActorsNear, sounds 0x709 / 0x70A / 0x713 / 0x715) (H);
  hurt states 0x8017F998 / 0x8017FAC8 (TakeDamageAndRecoil, 0xA99 / 0x714) (H); spawned objects 0x203 / 0x205
  (SpawnKind205) / 0x207 (0x7BF / 0x7C0 / 0x776) (H). A5 (0x80181868): an NPC (SetupActor, two SpawnActorArg(0x1F7))
  that starts event D_8019B9B0 (0x801819B8) (H).
* **Musashi grab (own effect states 0x8017CDF4-0x8017D16C):** Musashi is held (CollidePlayerMove, 0x451 hurt); the
  stick (ObjUp/Down/Left/Right) and pad input in 0x8017CEA4 work him free (func_80148E54 / func_80148AFC,
  ResetPlayerKind, DropTimedAbility); if the effect timer runs out first, HitPlayerFatal (H). M: a grab you must
  wriggle out of.
* **Boss:** M: this is a boss-type fight in four rounds; HP thresholds are not used, rounds end on the counters above.
* **Exits:** RequestMapChange(D_80185BDC) after the last round (H; destination unknown); P01 exit steps (H).
* **Sound:** 0x709-0x718 series, 0x79E, 0xA99 (H).

#### Names: SC03_121
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CEA4 | func_sc03_121_8017CEA4 | GrabStruggle | stick input frees Musashi | H |
| 0x8017D16C | func_sc03_121_8017D16C | GrabTimeoutFatal | timer -> HitPlayerFatal | H |
| 0x8017D65C | func_sc03_121_8017D65C | ProbeTwoCells | TraceMapTwoCells helper | M |
| 0x80180254 | func_sc03_121_80180254 | ContestStart | spawns 5 x 0x1C5, 0x21D, 0x220, var 0xDD = 1 | H |
| 0x80180568 | func_sc03_121_80180568 | ContestRound1 | random wake, event D_8019BB90, var 0xDD = 2 | H |
| 0x80180850 | func_sc03_121_80180850 | ContestRound2 | event D_8019BBB0, var 0xDD = 3 | H |
| 0x80180B1C | func_sc03_121_80180B1C | ContestRound3 | event D_8019BBD0, var 0xDD = 4 | H |
| 0x80180E64 | func_sc03_121_80180E64 | ContestFinal | SoundCmd1(1), event D_8019BBF8 | H |
| 0x801818A4 | func_sc03_121_801818A4 | ContestExit | SetProgress(0x1A4), RequestMapChange | H |
| 0x801819B8 | func_sc03_121_801819B8 | NpcStartEvent | StartEvent(D_8019B9B0) | M |
| 0x8017F998 | func_sc03_121_8017F998 | BigFoeHurt | TakeDamageAndRecoil, 0xA99 | M |
About 35 more own functions not proposed.

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

### SC04_020
* **Place:** a village version of the smaller kind (H: shares F068 / F072 / F073 with SC03_001 / SC03_002, the ~95-shape
  group with SC03_002 / SC03_125 / SC05_018; mapid test 0x3069 in shared code). No progress set in own code; shared
  code tests 0x85, 0xF0, 0x492 (F073) and sets 0x3AC at >= 0x3A2 (F068) (H).
* **Size:** 213 functions (own 5; shared: F025, F068, F072, F073, S-shapes; P01).
* **Actors:**
  * S2 0x8017C61C (+ F025 0x8017C9BC-0x8017D4CC): a flag-indexed creature (flag table D_801870BC by +0x70; variant 4
    also needs progress >= 200); it uses one set-up when the clock word D_80078E78+0x1A is < 300 or >= 1320 and
    another otherwise (H: minutes, so night before 5:00 / after 22:00, M); F025 sets its flag and starts events
    (D_8018709C, child kind 0x1F8) (H).
  * Own villager 0x8017F1D4 / 0x8017F24C / 0x8017F0DC / 0x8017F068 / 0x8017EE50: talk marker (state 2: own test, state
    3: distance^2 <= 0x4000), talk script D_80187238, then hides and returns to D_801871F8 (H); 0x8017F068 switches
    state by two range tests (0x801813AC(5, 0, 5, 0x1E) and 0x80181388(7, 0x15)) (H; clock hours 5:00-5:30 and
    7-21, L); 0x8017EE50 is a five-step walk between two script points with the same tests (H).
* **Exits:** village exits in shared code only (H).
* **Unknown / notes:** compared with SC03_001 almost everything is shared; the own part is this one villager (H).

#### Names: SC04_020
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EE50 | func_sc04_020_8017EE50 | VillagerWalkRoute | five-step walk with tests | M |
| 0x8017F068 | func_sc04_020_8017F068 | VillagerPickByClock | two range tests | L |
| 0x8017F0DC | func_sc04_020_8017F0DC | VillagerTalk | RunScript, hide, return | M |
| 0x8017F1D4 | func_sc04_020_8017F1D4 | VillagerInit | talk marker, hidden | M |
| 0x8017F24C | func_sc04_020_8017F24C | VillagerTalkCheck | state 2 / 3 tests | M |

### SC04_021
* Same code as SC03_126 / SC05_019 (H: identical own code; described by another helper); differs only in data.

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

### SC05_018
* **Place:** a village variant (the ~95-shape group with the village sc03_001: F068 / F072 / F007, H) carrying
  this stretch's story scenes (M). Sets progress 0x3C0 (960) when it is 0x3B6-0x3BF (0x8017F350, H), 0x47E (1150)
  after an area event (0x80181BF4, H) and 0x492 (1170) in a staged scene (0x801805E0, H); F068 sets 0x3AC from
  0x3A2 (H). Entry differs at progress 0x488 (1160) (0x8017E770, H); several actors exist only from 0x492 on (H).
* **Size:** 302 functions (own 77 + 4 dup, lone-shared 47, family 117: F007 F025 F036 F068 F072 F073; 25 actor
  dispatchers, 6 player-action dispatchers, 17 stubs; P01, P02, P03).
* **Events / scripted scenes (own, H):**
  * Entry 0x8017E770: at progress 0x488 Musashi's entry runs action script D_8018A848 (0x8017F038), otherwise the
    normal entry (0x8017F528, sound 0xBE6), then StartFade(0).
  * 0x8017F350 (a player-action handler): progress 0x3B6-0x3BF -> SetProgress(0x3C0).
  * 0x80181BF4: when Musashi enters the box x -0x380..-0x180, z 0x40D..0x60D, StartEvent D_8018AB74; at its end
    SetProgress(0x47E).
  * 0x80180408: a timed scene: at frame D_8018A978 / D_8018A97A it switches a model sequence, StartCameraPan
    D_801B44DC, bursts of dust props 0x22 (0x801809B8, sounds 0xBE1 / 0xC2C), sounds 0xBE2, 0xBDD / 0xBDE, and sound
    command 4 for 0x42E, 0x406, 0x407 (stops looping sounds). 0x801805E0: FindActorByKind(0x2C6) advances that
    actor, SetProgress(0x492), SpawnActorArg(0x3BE, 0, 0), func_800D0CA0(1), SoundRequest(0xBDF). L: a building or
    machine finished / destroyed in the village.
  * 0x80181760: RunScript D_8018AA6C, then shows a model and RequestMapChange(D_8018A7D4) (same record from
    0x80181738, S10). Other own talk / event actors: D_8018AAE4, D_8018AC14, D_8018ACBC, D_8018ADF4, D_8018AE34,
    D_8018ADBC; partner look-ups FindActorByKind(0x19C / 0x29A / 0x37C).
* **Actors:** A4-A5 F025 NPCs (S2 set-up 0x8017C61C: flag gate and "slot 4 before progress 200", like SC05_004);
  F073 (A10-A11); F036 effects. Messages D_801E31B4 / D_801E3224 (0x8017F3A8 / 0x8017F448).
* **Exits:** RequestMapChange(D_8018A7D4) (0x80181738 / 0x80181760; destination unknown, data); P01 exits (one with
  the village "keep music" test on var 0xCE, S3).
* **Sound:** 0xBDF, 0xBE1-0xBE6, 0xC27, 0xC2C, 0xC4C (H).

#### Names: SC05_018
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E770 | func_sc05_018_8017E770 | RoomEntryByProgress | progress 0x488 picks entry script | H |
| 0x8017F038 | func_sc05_018_8017F038 | StartEntryScript488 | StartPlayerActionScript(D_8018A848) | H |
| 0x8017F350 | func_sc05_018_8017F350 | SetProgress3C0Step | 0x3B6-0x3BF -> 0x3C0 | H |
| 0x80180408 | func_sc05_018_80180408 | EventStagedCollapse | timed model switch, camera pan, dust, sound stops | M |
| 0x801805E0 | func_sc05_018_801805E0 | EventSetProgress492 | FindActorByKind(0x2C6), SetProgress(0x492), 0x3BE | H |
| 0x801809B8 | func_sc05_018_801809B8 | SpawnDustBurst | SpawnPropFrom(0x22), 0xBE1 / 0xC2C | H |
| 0x80181760 | func_sc05_018_80181760 | EventLeaveVillage | RunScript D_8018AA6C, RequestMapChange | M |
| 0x80181BF4 | func_sc05_018_80181BF4 | EventAreaSetProgress47E | IsInArea box, StartEvent D_8018AB74, SetProgress(0x47E) | H |
(about 70 more own functions not proposed.)

### SC05_019
* Same code as SC03_126 / SC04_021 (described by another helper); differs only in data (H: identical own code).
