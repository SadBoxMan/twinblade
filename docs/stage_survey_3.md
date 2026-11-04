# Stage survey, part 3 of 3 (r275)

Continues `docs/stage_survey_2.md`; method, names, the timeline and the shared patterns are in `docs/stage_survey.md`.

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
  an extra exit step 0x8017D1DC [S10] that fades with StartFade(4); P02, P03).
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
* **Exits:** 0x80183068 RequestMapChange(D_sc06_025_801886A4) after placing kind 0x2CD at D_80188EDC (0x8018300C, H);
  the caller of 0x80183068 is a table entry; destination unknown (data).

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

### SC06_027
* **Place:** a tiny scripted map (M: a short cutscene room): 40 functions, one event, Musashi hidden. No progress or
  flag code (H).
* **Size:** 40 functions (own 15 + 5 lone-shared; F033 x5; 3 actor kinds; P01 with a different exit-done step; P02,
  P03).
* **Events / scripted scenes:** 0x8017D5BC: after 5 frames starts event script D_sc06_027_80181AB0, waits for it,
  then frees itself (H). 0x8017D688: EndScene, HidePlayerScene, SetPlayerFlag7E2, then draws a full-screen
  primitive 0x8017D3A0 [S3] (H; M: a fade / flash overlay while Musashi is hidden). Entry player script step
  0x8017CFD0 spawns SpawnActor(0x3BA) (H). 0x8017D708 SetupActor set-up; 0x8017D824 frees three linked actors;
  0x8017D8B8 / 0x8017D96C scripted models.
* **Exits:** exit-done step 0x8017CF58: after ExitFadeDone, func_80165A20(player) (ends held timed abilities),
  D_80078EC0 = 6, and func_800CF804 (ovl36: D_80127084 = 1) (H; M: leaves with a special mode set, value 6 meaning
  unknown). Destination unknown (data).

#### Names: SC06_027
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CF58 | func_sc06_027_8017CF58 | RoomExitDone | ExitFadeDone, D_80078EC0 = 6, func_800CF804 | H |
| 0x8017CFD0 | func_sc06_027_8017CFD0 | EntrySpawn3BA | SpawnActor(0x3BA) in the entry script | H |
| 0x8017D5BC | func_sc06_027_8017D5BC | EventRun | StartEvent(D_80181AB0), free when done | H |
| 0x8017D688 | func_sc06_027_8017D688 | HidePlayerOverlay | HidePlayerScene + overlay prim | M |
| 0x8017D708 | func_sc06_027_8017D708 | CastInit | SetupActor | M |
| 0x8017D030 | func_sc06_027_8017D030 | SetRoomCamera | SetCameraUpdate + SnapCamera | M |

### SC06_029
* **Place:** a boss arena late in the chapter (H: a boss core with HP 0x1E0 and weak points; the closing event sets
  progress 0x636 (1590) and changes map, 0x801867D0). It is also the map that forces the end-game state: two own
  routines set flags 0x16-0x1A **and** all five boss flags 0x8A-0x8E (H, see below).
* **Size:** 294 functions (own 165 + 17 dup + 26 lone-shared; F041 x11, F017 x8, F033 x5, F018 x5, F087 x3, F010 x3;
  24 actor kinds; P01, P02 (three camera dispatchers)).
* **Why it sets 0x8A-0x8E:** 0x8017E494 (a step of the player action script 0x8017E458) and 0x80185F4C (state of the
  actor 0x80185F08) both do: SetFlag80(Musashi), D_80078EC0 = 6, SetFlag(0x16..0x1A, 1), SetFlag(0x8A..0x8E, 1),
  func_8014C6E0, SpawnEffectOn(0x3B, Musashi); 0x8017E494 also sets player action flags (clear 01, set 02 / 08,
  SetWorkA3E7) (H). Every later frame 0x80186044 keeps D_80126D20 = 0xBA, replaces effect 0x3B by spawning effect
  0x3C on Musashi every 32 frames, and clamps his y (D_80126B62) to -0x100..-0x580 (H). Reading: this is a scripted
  transformation / power-up of Musashi for the final part, and the flags are set together so the state is the same
  whatever order the player cleared things in (M); the five flags 0x16-0x1A are the ones F020 sets one at a time
  after its five-way choice in earlier stages (H, SC06_000 F020 0x8017DE8C), so 0x16-0x1A plausibly mark five
  collected items / powers and 0x8A-0x8E the five bosses beaten (L). D_80078EC0 = 6 is also set by SC06_027's exit
  (H), so the two maps hand over into the same mode (M). The y clamp suggests Musashi flies or floats in this mode
  (L).
* **Boss:** core set-up 0x8017EBC4: sprite, HP (+0x76) = 0x1E0, StoreImage x2 (palette copies for flashing),
  D_801DDB28 = core, SpawnActorArg(0x2EF) (H). 0x8017EDA8: when Musashi has no action (GetPlayerAction()==0),
  TakePlayerControlNoStop and event D_sc06_029_80190534 (H: intro). Attack states 0x8017EF34 (99 lines) and
  0x8017F330 (162 lines; spawns 12 x SpawnActorArg(0x2C1), sound 0x936 loop) (H; M: a volley of 12 projectiles).
  0x80180A70 spawns five weak points SpawnActorArg(0x294, i); each (0x80183B1C) rides the core rotated +0xE00 and,
  when hit (+0x5C & 1), deals a fixed 0x28 to the core's HP with TakeDamage / ShowDefeatAlt / sound 0xB7C; at 0 the
  core goes to state 0xC and it and its five parts get +0xE0 |= 0x1000 (H: 12 hits of 0x28 = 480). Score-like value
  +0xEC = (part index + 1) * 100 (H). 0x80182ED8 (145 lines) part motion. 0x801809D4: once kind 0x2EF is gone,
  state 0xE and event D_sc06_029_8019060C, with flag 0x11D choosing one of two follow-ups (func_8002959C when clear)
  (H).
* **Events / scripted scenes:** 0x801862C0: when flag 0x8E is set and a check passes, SpawnActor(0x353) (H).
  0x801866B0 set-up spawns 0x354, 0x355, 0x356, 0x35F, 0x330, 0x38B x2, 0x39A and starts event
  D_sc06_029_80191474; 0x801867D0 shows / moves five of them (sound 0xBD2) and when the script ends sets progress
  0x636, EndEvent, RequestMapChange(D_sc06_029_8018FFFC) (H).
* **Exits:** RequestMapChange(D_8018FFFC) at the end of the closing event (H); destination unknown (data).
* **Sound:** 0x936 loop (stop cmd 4), 0x9CF with a two-channel volume, 0xBD2-0xBD7, 0xB5C / 0xB5F, 0xB96 / 0xB97,
  0xCA1, SoundCmd1(1) with an argument in one place.

#### Names: SC06_029
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E494 | func_sc06_029_8017E494 | EventGrantFinalState | sets 0x16-0x1A, 0x8A-0x8E, D_80078EC0 = 6, effect 0x3B | H |
| 0x80185F4C | func_sc06_029_80185F4C | FinalStateInit | same flag set from an actor | H |
| 0x80186044 | func_sc06_029_80186044 | FinalStateUpdate | effect 0x3C, y clamp | M |
| 0x8017EBC4 | func_sc06_029_8017EBC4 | BossCoreInit | HP 0x1E0, spawns 0x2EF | H |
| 0x8017EDA8 | func_sc06_029_8017EDA8 | BossIntro | StartEvent(D_80190534) | H |
| 0x8017EF34 | func_sc06_029_8017EF34 | BossAttackA | attack state | M |
| 0x8017F330 | func_sc06_029_8017F330 | BossVolley | 12 x 0x2C1, sound 0x936 | M |
| 0x80180A70 | func_sc06_029_80180A70 | SpawnWeakPoints | 5 x SpawnActorArg(0x294) | H |
| 0x80183B1C | func_sc06_029_80183B1C | WeakPointHit | 0x28 to core HP, defeat at 0 | H |
| 0x80182ED8 | func_sc06_029_80182ED8 | WeakPointMove | part motion | M |
| 0x801809D4 | func_sc06_029_801809D4 | EventAfterBoss | kind 0x2EF gone -> StartEvent(D_8019060C) | H |
| 0x801862C0 | func_sc06_029_801862C0 | Spawn353IfFlag8E | GetFlag(0x8E) -> SpawnActor(0x353) | H |
| 0x801867D0 | func_sc06_029_801867D0 | EventClosing | SetProgress(0x636), RequestMapChange | H |

About 140 more own functions (camera modes, effects, part helpers) not proposed.

### SC06_030
* **Place:** a boss arena of the F116 building (H: an own boss with HP and the F017 HP-bar helper; F116 door exit).
  Exit step 0x8017DA24 sets progress 0x514 (1300) after FadeDone with func_8002931C and func_8002AED0 (H), the
  lowest of the four sc06 boss values (0x514 here, 0x578 SC06_016, 0x5DC SC06_025, 0x636 SC06_029), so this fight
  comes first of them (M).
* **Size:** 87 functions (own 32 + 13 lone-shared; F116 x13, F017 x8; 5 actor kinds; P01 with an extra fade exit
  0x8017D9A8 [S10]; P02, P03).
* **Boss:** main 0x8017E120 (302 lines): turns to Musashi, scripted poses, panned sounds 0x942 / 0x944 (flag 0x2000),
  0x943, SpawnActor(0x30B) (H). Attacks 0x8017EEF0 (SpawnActor(0x30C), 0xA8C, 0x945) and 0x8017F0A0
  (SpawnActor(0x30D), 0xA8D), both aimed with HeadingToTarget (H; M: two kinds of shot); 0x8017F268 (101 lines):
  a close attack with ActorTouchesPlayer, SquareRoot distance, sounds 0xA8A / 0xA8B / 0x93F / 0xC65 and
  SpawnActorArg(0x3DD) (H; M: a charge or grab). Hurt 0x8017DF70: HP -= damage (min 1), ShowDamage / ShowDefeat /
  rumble, sound 0xA8E; HP < 0 -> state 7, sound 0xA8F; HP bar via F017 0x8017C010(HP, D_80185D14, max 0xD2) (H:
  maximum HP 210).
* **Events / scripted scenes:** 0x8017F65C: event D_sc06_030_80185C9C with SoundCmd1(1), several IsEventDone waits,
  moves the boss (MoveCollide), then F017 0x8017C068 frees it and sound 0xA47 (H; M: the intro / defeat scene).
  0x801805F8: event D_sc06_030_80185C2C with sound 0xC7C (H). Shots 0x8017FE9C (panned 0x93E, freed on collision),
  0x8017FCF4 (contact sound 0x941); 0x80180940 LoadImage + 0x941 (H: a palette flash).
* **Exits:** F116 door exit; 0x8017DA24 (progress 0x514). Destinations unknown (data).

#### Names: SC06_030
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E120 | func_sc06_030_8017E120 | BossMain | 302-line main, sounds 0x942-0x944, spawns 0x30B | M |
| 0x8017EEF0 | func_sc06_030_8017EEF0 | BossShotA | SpawnActor(0x30C), 0xA8C | M |
| 0x8017F0A0 | func_sc06_030_8017F0A0 | BossShotB | SpawnActor(0x30D), 0xA8D | M |
| 0x8017F268 | func_sc06_030_8017F268 | BossCloseAttack | ActorTouchesPlayer, 0x3DD | M |
| 0x8017DF70 | func_sc06_030_8017DF70 | BossHurt | HP, 0xA8E / 0xA8F, HP bar max 0xD2 | H |
| 0x8017F65C | func_sc06_030_8017F65C | EventBossScene | StartEvent(D_80185C9C), SoundCmd1(1) | M |
| 0x801805F8 | func_sc06_030_801805F8 | EventObjStart | StartEvent(D_80185C2C), 0xC7C | H |
| 0x8017FE9C | func_sc06_030_8017FE9C | ShotFly | panned 0x93E, free on hit | M |
| 0x8017DA24 | func_sc06_030_8017DA24 | RoomExitAfterBoss | FadeDone, SetProgress(0x514) | H |

### SC06_032
* **Place:** a combat field of the machine area (M); its code is SC06_018's family set (F117, F115, F118, F119,
  F041, F098, F120, F121, F010) with one own function. No progress, flag, event or map-change code (H).
* **Size:** 297 functions (own 1 + 25 lone-shared; F117 x87, F115 x52, F118 x42, F119 x25, F041 x11, F098 x5, F120
  x4, F121 x3, F010 x3; 13 actor kinds; P01, P02).
* **Actors:** all shared (see SC06_018 and the families). Own: the pad-steered camera 0x8017D4A0 (43 lines,
  GetObjPadPressed) (H). Compared with SC06_018 it lacks SC06_018's own rise-and-bob and timed-event actors (H).
* **Exits:** P01 only; destinations unknown (data).

#### Names: SC06_032
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D4A0 | func_sc06_032_8017D4A0 | CamPadSteer | GetObjPadPressed camera mode | M |

### SC06_033
* **Place:** a machine-area field (M) with F117 / F115 / F119 enemies, a guarded switch-like object and an event
  when two linked objects change. No progress or flag code (H).
* **Size:** 271 functions (own 22 + 1 dup + 23 lone-shared; F117 x87, F115 x52, F119 x24, F041 x11, F120 x4, F036 x3,
  F010 x3; 13 actor kinds; P01, P02).
* **Actors:**
  * 0x8017E224 / 0x8017E3EC: spawn SpawnActorArg(0x263, 1), move with MoveCollide toward Musashi (HeadingToPlayer)
    when GroundDistSqToPlayer <= 0x9000, sounds 0xB23 / 0xB24 (H; M: something that comes out when he approaches).
  * 0x8017E60C SetupActor + script; 0x8017E69C: once the +0x36 of both linked actors (+0xCC, +0xD0) differ from its
    stored value, and Musashi is within 0x7900 and touching it (+0x74), starts event D_sc06_033_80195360 (H; M: a
    reward / message after two switches are set).
  * 0x8017DE00..0x8017E0E4: sway actor like F121 (own copy, rsin / rcos, two sub-points) (M).
  * Enemy 0x80190CE0 (SetupActor, two extra models, StopWithGravity) / 0x80190E64 (90 lines: sound 0xB33, spawns
    0x33C, a table of follow-up spawns SpawnActorArg(e[1], e[2]), SpawnKind205 debris, palette flash via LoadImage
    0x80190E64_pal, drop func_8002A04C) / 0x8019131C (approaches Musashi) / 0x801915A8 (ShowDamage, ShowDefeat,
    rumble) / 0x8019171C (MoveCollide shot) (H; M: an own enemy kind with a breakable shell).
* **Exits:** P01 only; destinations unknown (data).

#### Names: SC06_033
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E224 | func_sc06_033_8017E224 | EmergerUpdate | spawns 0x263, approaches, 0xB23 / 0xB24 | M |
| 0x8017E69C | func_sc06_033_8017E69C | EventOnLinkedChange | linked +0x36 changed -> StartEvent(D_80195360) | H |
| 0x8017E60C | func_sc06_033_8017E60C | EventObjInit | SetupActor + script | M |
| 0x8017DFE8 | func_sc06_033_8017DFE8 | SwayUpdate | rsin / rcos, two sub-points | M |
| 0x80190CE0 | func_sc06_033_80190CE0 | ShellEnemyInit | SetupActor + two models | M |
| 0x80190E64 | func_sc06_033_80190E64 | ShellEnemyBreak | 0xB33, spawns 0x33C, debris, drop | M |
| 0x801915A8 | func_sc06_033_801915A8 | ShellEnemyHurt | ShowDamage / ShowDefeat | H |
| 0x8019171C | func_sc06_033_8019171C | ShellShotFly | MoveCollide, FreeActor | M |
| 0x8017D7E0 | func_sc06_033_8017D7E0 | CamPadSteer | GetObjPadPressed | M |

## The end of the game (archive SC07)

Progress 1600-1700.

### SC07_000
* **Place:** an SC07 (late game, M by archive order and SC07's progress values) map with scripted events and spawned
  kinds 0x38D, 0x38E, 0x3A3, 0x3A5, 0x3B3 (x2), 0x3C4 (H). No progress values. Read briefly (time).
* **Size:** 151 functions (own 84, F022 x15, F029 x7; P01-P03; 10 actor blocks).
* **Actors:** 0x8017E118: SpawnActorArg(0x3B3, 0 / 1) as a pair, SoundRequest(0xB74), sets D_801D0BB8 bit 1 (H).
  0x8017F15C / 0x8017F0D0: SpawnPropFrom(0x76) with sound 0xC1B; 0x8017F59C / 0x8017F69C sound 0xC1A; 0x801805C0
  SpawnActorArg(0x3C4) + sound 0xC02; 0x8018000C sound 0xB75 (H). Sounds 0xB70 / SoundRequest(4, 0xB70) in pairs
  (start / stop, M).
* **Events / scripted scenes:** 0x8017ECB4 StartEvent(D_801862C0), then when IsEventDone: EndEvent and
  SpawnActor(0x38E) (H). 0x8017E20C SoundCmd1(1), StartEvent(D_801863A0), SetState 4 (H).
* **Exits:** S10 0x8017E58C RequestMapChange(&D_8018608C) (H); destination unknown (data). Exit step S2 without
  SoundCmd1.
* **Sound:** 0xB70, 0xB74, 0xB75, 0xC02, 0xC1A, 0xC1B; SoundCmd1(1) twice (H).

#### Names: SC07_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017ECB4 | func_sc07_000_8017ECB4 | EventSceneA | StartEvent D_801862C0, end -> spawn 0x38E | H |
| 0x8017E20C | func_sc07_000_8017E20C | EventSceneB | SoundCmd1(1), StartEvent D_801863A0 | H |
| 0x8017E118 | func_sc07_000_8017E118 | SpawnPair3B3 | two kind 0x3B3, sound 0xB74 | H |
| 0x8017E58C | func_sc07_000_8017E58C | RoomExit | RequestMapChange(&D_8018608C) | H |

### SC07_001
* **Place:** an SC07 map where a scene starts when Musashi stands at height -0xE82 near kind 0x3BC (H); kinds 0x3A2,
  0x3BC, 0x386, 0x3C3, 0x3A8 (H). No progress values. Read briefly.
* **Size:** 86 functions (own 49, F033 x5; P01-P03; 7 actor blocks).
* **Actors:** 0x8017E4DC spawns 0x3A2, 0x3BC, 0x386, 0x3C3 (H). 0x8017E8DC / 0x8017EA84 sounds 0xB7A / 0xB7B;
  0x8017EDC0 sound 0xC03; 0x8017F0EC / 0x8017F15C SoundRequest(4, 0xC04) / 0xC04 (H).
* **Events / scripted scenes:** 0x8017EBE8: when the player's y == -0xE82, PlayerState1F4Bit1, and kind 0x3BC is
  absent or within ground distance^2 0x10000: StartEvent(D_801851F4), SpawnActor(0x3A8), HideModel, SoundCmd1(1)
  (H). 0x8017ECA0 waits func_8001AAA0(0x8E), then on script end EndEvent, FreeActor, RequestMapChange(&D_80184F3C)
  (H).
* **Exits:** D_80184F3C after the event (H); destination unknown.

#### Names: SC07_001
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EBE8 | func_sc07_001_8017EBE8 | EventTrigger | height / distance test, StartEvent | H |
| 0x8017ECA0 | func_sc07_001_8017ECA0 | EventRunExit | script end -> RequestMapChange | H |
| 0x8017E4DC | func_sc07_001_8017E4DC | RoomSpawnCast | spawns 0x3A2 / 0x3BC / 0x386 / 0x3C3 | H |

### SC07_002
* **Place:** an SC07 map with two versions by progress 0x640 (1600): below it spawn lists D_8018A728 / D_8018A7C8 and
  camera distance 0x320, from 0x640 on D_8018A7DC / D_8018A87C and distance 0x190 (H) (M: the same place before and
  after an event that sets 0x640 elsewhere). func_8002931C(0x04740000) at start (H). Read briefly.
* **Size:** 211 functions (own 86, F017 x8, F018 x5, F022 x15, F029 x7, F033 x5, F087 x3; P01-P03; 11 actor blocks).
* **Events / scripted scenes:** 0x80182B10: when +0x70 == 0 and D_8019F070 is set: StartEvent(D_8018A418), screen
  white (func_80016450(0xFF, 1)) fading by +0xF6, then EndEvent and 0x80181C18; freed when D_8019FF8A bit 0x4000
  (H).
* **Exits:** two P01 exit steps (one own 0x8017EEF8) (H); records not read.

### SC07_006
* **Place:** an SC07 cutscene-type map: one 115-line scene actor starts event D_8018E7A0, spawns three kind 0x3AC and
  plays 0xBB8, 0xBC9, 0xBD5, 0xBB6 (H). Image is large (58 KB) but only 86 functions (H: data heavy). Read briefly.
* **Size:** 86 functions (own 48, F081 x3; P01-P03; 4 actor blocks).
* **Exits:** S10 RequestMapChange(&D_8018DE1C) (H).

#### Names: SC07_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80183374 | func_sc07_006_80183374 | EventSceneMain | StartEvent D_8018E7A0, 3 x kind 0x3AC, sounds | H |

### SC07_007
* **Place:** an ending map (M): its fade-done step 0x8017CFEC sets progress 0x6A4 (1700, the highest value), flags
  0x11D and 0x123, SetScreenMode2(1), D_800B9A18 = 2, D_80078EC6 = 1, func_8002AEE4() (H) (M: the game-cleared state;
  same step as SC07_009 / SC07_010, S2 there).
* **Size:** 244 functions (own 164; P01-P03; 2 actor blocks, 2 PLAYER-ACTION-MAIN).
* **Events / scripted scenes:** 0x8017DFB8, the scene controller: with flag 0x123 set, func_8002AE60() == 0 and
  Start (0x800) or Cross (0x40) pressed (TestPadAll) -> RequestMapChange(&D_80186964) (H: a skip). Each frame it
  sets the three lights from D_80187C60 rotated by the camera heading (H). Flags 0x125-0x12C are cleared together
  (0x801812BC) and tested / cleared by index (0x80181384 / 0x801813A8) as script-to-code signals (H; same use as
  SC01_005's 0x125-0x129).
* **Exits:** D_80186964 (skip), D_80186940 (0x80181B28) (H).

#### Names: SC07_007
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CFEC | func_sc07_007_8017CFEC | RoomSetClearState | SetProgress(0x6A4), flags 0x11D / 0x123 | H |
| 0x8017DFB8 | func_sc07_007_8017DFB8 | EndingSceneMain | skip test, lights by camera heading | M |
| 0x801812BC | func_sc07_007_801812BC | ClearScriptSignals | flags 0x125-0x12C = 0 | H |
| 0x80181384 | func_sc07_007_80181384 | GetScriptSignal | GetFlag(0x125 + n) | H |
| 0x801813A8 | func_sc07_007_801813A8 | ClearScriptSignal | SetFlag(0x125 + n, 0) | H |
| 0x80181B28 | func_sc07_007_80181B28 | EndingExit | RequestMapChange(&D_80186940) | H |

### SC07_008
* **Place:** a bare room: only the P01 / P02 / P03 skeleton and camera helpers (S7, S34, S75), no actors (H). 18
  functions. Unknown purpose (L: a staging map between ending scenes).

### SC07_009
* **Place:** an ending map (M): S2 step sets progress 0x6A4, flags 0x11D, 0x123 (H, as SC07_007).
* **Size:** 62 functions (own 52; 2 actor blocks, 1 PLAYER-ACTION-MAIN).
* **Exits:** 0x8017D3EC: with flag 0x123, RequestMapChange(&D_801817D8) (H: the skip / leave test).

### SC07_010
* **Place:** an ending map (M): S2 step sets progress 0x6A4, flags 0x11D, 0x123 (H); spawns kinds 0x3A6 (x4),
  0x3A9, 0x3AA; sounds 0xC12-0xC15 (H).
* **Size:** 156 functions (own 106, F006 x4, F105 x3; 5 actor blocks, 2 PLAYER-ACTION-MAIN).
* **Exits:** 0x80180138: flag 0x123 test then RequestMapChange(&D_801859D0) (H).

### SC07_011
* **Place:** a three-way choice map (H): actors with index +0x70 = 0 / 1 / 2 wait for Start or Cross; the chosen one
  RequestMapChange(D_80182314[n]); choice 2 also SetProgress(0x398) (920) and func_8002AC00(0x1D) (H). Three exit
  sequences end in RequestFieldFileLoad(2 / 3 / 4) (picture cards) and three S2 exits RequestMapChange D_80182090 /
  D_801820B4 / D_801820D8 (H). M: a menu reached at the end (setting progress back to 0x398 reads like returning to an
  earlier story point; L: a post-game replay / epilogue choice).
* **Size:** 80 functions (own 14, F018 x5; 4 actor blocks).

#### Names: SC07_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DB90 | func_sc07_011_8017DB90 | ChoiceWaitPress | Start / Cross -> RequestMapChange(table[n]) | H |
