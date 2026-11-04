# Stage engine: naming proposals (r272, research only)

Proposals for the shared stage engine's (0x80128158-0x8017BE9C, every stage image) still-generic functions and globals,
from the matched C in `src/stage/engine*.c` and from how the stage code in `src/stg/*.c` calls them. Nothing here is
applied: a later local card applies the names to `symbol_addrs_stage.txt` / `stg/symbol_addrs_engine.txt` and checks
that everything still matches. Snapshot: main = fab5bf5a (4 Nov 2026).

## How to read this
* **Calls** in the evidence column: call sites in `src/stg/*.c` / number of stage files with at least one (counted with
  `grep` over the 147 stage C files, `extern` lines excluded). A function used by 100+ stage files is one stage code leans on.
* **Evidence** names the engine function's file (all under `src/stage/`) and what its body shows, then what the stage
  call sites pass or test. "e.c" = engine.c, "e5F4" = engine_8012F5F4.c, "eB568" = engine_8013B568.c,
  "eC98C" = engine_8013C98C.c, "e4B9C" = engine_80144B9C.c, "e58E0" = engine_801458E0.c.
* **Confidence.** H: the body says it and the call sites agree. M: the behaviour is clear but the name picks one reading
  (or the caller context is thin). L: a guess from a few call sites; check before applying.
* **Style** follows the names already in the symbol files: CamelCase verb first (SetScript, StartFace, NextPhase,
  StepToward, ClearActionHandler), `g_` for globals (g_PrimNext, g_FileTable). No module prefixes.
* Engine *data* (0x8018Dxxx in SC03_001) moves with each stage image, so only the fixed-address globals (EXE bss
  0x800xxxxx is out of scope; the engine's own bss below 0x80128158) are proposed as globals.
* Where a struct already in `include/game.h` names the field (StageActor, Mover, ModelObj, Player), the evidence uses
  its field names; corrections to those comments are in "Struct fields" at the end.

## Names that already exist (not re-proposed)
Already in `symbol_addrs_stage.txt` / `stg/symbol_addrs_engine.txt`: SetScript, FaceHelper, BeginScene, EndScene,
StartFace(At), StartFaceScript(At), FaceScriptStep, FaceSet, FaceLoad, UpdateWeaponParts, ShowAllParts, HideAllParts,
SetDisplayFlag20, ClearDisplayFlag20, UpdateFlag10Part21, ClearDisplayFlag10, RunStateHandler4E, NextPhase, SetPhase,
BumpSub1, BumpSub2, ActionHelper_1AB0, StepToward, ClearActionHandler, SetActionHandler, EngineReady, AnimHelper.

Named only in a **comment** of `symbol_addrs.txt` (the 12 Oct block and the dump_10 line). They are known, so they are
not proposed again below, but they are not applied yet; the local batch can apply them as they are (the engine is at the
same address in every image, so the dump_10 addresses hold):

| address | current | known name | note |
|---|---|---|---|
| 0x8012AA80 | func_8012AA80 | AnimAdvance | dump_10 line; e.c: index++ then the step |
| 0x8012AAAC | func_8012AAAC | AnimStep | dump_10 line; e.c: one script entry (docs/animation_controller.md) |
| 0x8012ACA0 | func_8012ACA0 | AnimStartDefault | dump_10 line; e.c: SetScript with D_8018D838 |
| 0x8012ACE0 | func_8012ACE0 | AnimScriptLength | dump_10 line; e.c: entries before the first -1/-2/0 |
| 0x8012AD44 | func_8012AD44 | SetState | 12 Oct block; +2 = n, +0x34 = 0. 565 calls / 87 files |
| 0x8012AD50 | func_8012AD50 | NextState | 12 Oct block; +0x34 = 0, +2 += 1. 567 calls / 111 files |
| 0x8012AD64 | func_8012AD64 | SetCounter | 12 Oct block; +0x34 = n |
| 0x8012AD6C | func_8012AD6C | IncCounter | 12 Oct block; +0x34 += 1 |
| 0x8012AD80 | func_8012AD80 | MoveObject | 12 Oct block; vel += accel, pos += vel. 302 calls / 84 files |

(0x8012AA80 is not a function start in today's split; the step-and-advance is inside func_8012A988. The local card
should check that address before applying AnimAdvance; the other eight are function starts.)

## Actors and objects

The actor table is 96 StageActors of 0x10C bytes from 0x801202A0 (slot 0, 0x80120194, is never handed out). An actor's
+0 is its **kind** (index into the room's handler table D_8011DB08, which func_8017849C calls every frame and
func_8012C890 calls once at spawn), +2 its state (SetState / NextState), +0x34 the state's frame count. Props are a
second, simpler pool (128 x 0x38 at D_8011DB30, handlers D_80126AEC by kind).

### Actor pool, spawning, freeing

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012C218 | func_8012C218 | FreeActor | zero the actor (0x10C) and its model (0x84 or 0x38 by model type) | H | e.c: two func_80016714 (zero-fill) calls. 1415 calls / 123 files, the commonest "delete myself" (e.g. after func_8012BEE8 runs out, eC98C func_80143D28) |
| 0x8012C098 | func_8012C098 | DespawnActor | FreeActor, and when animFlags bit 15 is set clear bit 15 of its SpawnDef's flags so the spawner may place it again | H | e.c (inline). 232 calls / 71 files |
| 0x8012CAE4 | func_8012CAE4 | RejectSpawn | a kind's set-up refuses: set bit 0 of D_801274E4 (func_8012C890 then frees the actor and its def) and FreeActor | H | e.c; func_8012C890 tests `*D_801274E4 & 1` after the set-up call. 1029 calls / 125 files, nearly all `if (model == 0) { func_8012CAE4(a); return; }` after func_8012C1B8 |
| 0x8012C1B8 | func_8012C1B8 | AllocActorModel | a free 0x84-byte model object from the model pool slots 0x26-0x85 (func_8001CFDC), or 0 | H | e.c; func_8012C354 inlines the same call. 919 calls / 135 files: `a->model (+0x20) = func_8012C1B8()` then func_8001C214 / func_8001C810 with the stage's model data |
| 0x8012C194 | func_8012C194 | AllocActorSprite | a free 0x38-byte object (ModelObj type 2) from slots 0x3E-0x7D (func_8001D074) | M | e.c. 149 calls / 87 files; eC98C func_80144364 uses it for the shadow object (+0xCC) and sets +4 = 0x60000000, +0x27 = 0x14. "Sprite" is a reading of the 0x38-byte kind; "AllocActorObj38" if unsure |
| 0x8012C1DC | func_8012C1DC | NextFreeModel | the next free model after the actor's own | M | e.c comment; no stage calls |
| 0x8012C284 | func_8012C284 | FindFreeActorAfter | the next free actor slot after a (slot 1 when NULL) | H | e.c comment; inlined into func_8012C51C |
| 0x8012C2D0 | func_8012C2D0 | FindFreeActor | the first free actor slot | H | e.c; 1 call |
| 0x8012C31C | func_8012C31C | FindLastFreeActor | the last free actor slot | H | e.c comment; func_8012C750 uses it for defs with flag 0x800 |
| 0x8012C354 | func_8012C354 | SetupActor | take an ActorInit record: HP (+0x76, init+0 x1.5 unless D_80078EAE), flags5C, a model built from init+4 (func_8001C214), hitData from init+8 with 0x60000000; 0 (and RejectSpawn) when no model is free | H | e.c comment. 565 calls / 113 files: `if (func_8012C354(a, &stage_init_record) == 0) return;` in set-up states |
| 0x8012C438 | func_8012C438 | SetupActorAlt | the same with func_8001C810's kind of model | M | e.c comment. 8 calls / 8 files. Rename when func_8001C214 / func_8001C810 get names (the difference is the model kind) |
| 0x8012C51C | func_8012C51C | SpawnActorFromDef | spawn from a SpawnDef into the next free slot after parent | H | e.c comment. 234 calls / 73 files |
| 0x8012C588 | func_8012C588 | SpawnActor | spawn an actor of a kind at the parent's position (origin when no parent), facing kept | H | e.c. 384 calls / 93 files: `func_8012C588(0x1C4, a)`, `(0x281, a)` |
| 0x8012C658 | func_8012C658 | SpawnActorArg | SpawnActor with a second value (the def's +8, the new actor's +0x70) | H | e.c. 992 calls / 106 files: `func_8012C658(0x33, 3, a)`, `(0x8F, a->unk70, a)`; children read the value at +0x70 as their variant |
| 0x8012C724 | func_8012C724 | SpawnActorFromDefAt | mark a def out (flag 0x8000) and spawn it into a given slot | H | e.c comment; inline |
| 0x8012C750 | func_8012C750 | SpawnFromDef | spawn a placed def (the room's spawn lists) into the first free slot, or the last with def flag 0x800; marks the def out | H | e.c. 32 calls / 26 files: `if (func_8012C750(&s) == 0) break;` loops |
| 0x8012C890 | func_8012C890 | InitSpawnedActor | fill a slot from a def (kind, position, origin, +0x70, flags, id from D_801270C4, parent / def), run the kind's handler once, undo on RejectSpawn, apply the def's facing | H | e.c |
| 0x8012DE2C | func_8012DE2C | FirstActor | start the live-actor iterator, skipping one actor, and return the first | H | e.c comment |
| 0x8012DDA4 | func_8012DDA4 | NextActor | the iterator's next live actor | H | e.c comment; func_8012DBD0 loops with them |
| 0x8012E504 | func_8012E504 | FindOtherActorByKind | the first live actor of a kind other than skip | H | e.c comment. 25 calls / 16 files |
| 0x8012E544 | func_8012E544 | FindActorByKind | the first live actor of a kind | H | e.c comment. 159 calls / 44 files: `func_8012E544(0x245)`, `(0x2CD)`, `(0x306)` |
| 0x8012E57C | func_8012E57C | FindActorByKindArg | the first live actor of a kind whose +0x70 is n | H | e.c comment. 124 calls / 18 files: `func_8012E57C(0x61, n)` (kind 0x61's numbered instances) |
| 0x8012C044 | func_8012C044 | IsActorFar | Musashi's focus (Player +0x154) is at least D_801274E0 away, or the room's own test D_801274D4 when set | M | e.c. The comment says "in range" but the test is distance >= D_801274E0, i.e. *out* of range. 48 calls / 27 files |
| 0x8012C0EC | func_8012C0EC | DespawnIfFar | DespawnActor when IsActorFar, returning 1 | M | e.c. 35 calls / 34 files, mostly at the top of a state step (`func_8012C0EC(a)`); the name follows the same reading |
| 0x8012BF7C | func_8012BF7C | IsFarInDepth | |z - focus z| >= 0x360 | M | e.c comment; no stage calls |
| 0x8012BFA8 | func_8012BFA8 | IsFarFromFocus | squared distance to the focus > 0xFFFFF | M | e.c comment; no stage calls |
| 0x80178608 | func_80178608 | ResetActors | zero the 96 actors (0x6480 bytes), D_801270C0 = 1, room lights and layer values from the room record | M | e58E0. Named for its first job; the rest is the room's set-up (lights, BG layers, handler tables) and could justify "InitRoomActors" |
| 0x8017849C | func_8017849C | UpdateActors | per frame: the animation pass (func_8012A908), then every live actor (all while D_801270C0 is 1, else those with animFlags 0x1000): save prev, run its kind's handler (or the hit reaction func_80130D0C), move its model | H | e58E0 |

### State, timers, flags

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012BEE8 | func_8012BEE8 | TickTimer | count +0x1C down; 1 when it is or reaches 0 | H | e.c comment. 1352 calls / 118 files: `if (func_8012BEE8(a)) NextState(a);` |
| 0x8012BF10 | func_8012BF10 | TickTimerReload | the same, restarting at n when it runs out | H | e.c comment; 4 calls |
| 0x8012BF4C | func_8012BF4C | SetTimer | +0x1C = n | H | e.c. 88 calls / 34 files: `(a, 0x1E)`, `(a, (rand() & 0x1F) | 0x20)` before TickTimer loops |
| 0x8012BF54 | func_8012BF54 | SetHittable | flags5C |= 0x8000 | M | e.c; func_8012DBD0 only hurts actors with flags5C bit 15 (and not 0x4000) |
| 0x8012BF68 | func_8012BF68 | ClearHittable | flags5C &= 0x7FFF | M | e.c; as above |
| 0x8012E88C | func_8012E88C | ShowModel | model +4 bit 31 cleared | H | e.c; the EXE's draw (src/code_800123F0.c func_8002374C) returns at once when `*(s32 *)(model + 4) < 0`. 306 calls / 44 files |
| 0x8012E8A8 | func_8012E8A8 | HideModel | model +4 bit 31 set | H | as above; 180 calls / 61 files. eC98C func_801439FC sets the same bit by hand to hide a shadow with no ground under it |
| 0x8012E8C4 | func_8012E8C4 | ToggleModel | model +4 bit 31 flipped | H | as above; 17 calls / 14 files (blinking) |

### Motion and the model

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012ADE4 | func_8012ADE4 | RestorePrevPos | position = prev (+0x38), undoing the frame's move | H | e.c. 152 calls / 58 files, after a failed collision test |
| 0x8012AE00 | func_8012AE00 | UndoMoveIntoPlayer | undo the move when the path crosses Musashi's model and he is nearer the start | H | e.c comment; 12 calls |
| 0x8012AF0C | func_8012AF0C | UndoMoveIntoObject | the same against another object's model | H | e.c comment; 5 calls |
| 0x8012B030 | func_8012B030 | SnapToGround | drop the position onto the ground below (func_80134510); 0 when there is none | H | e.c. 116 calls / 60 files |
| 0x8012B14C | func_8012B14C | SetLocalVelocity | velocity = a vector in the model's frame | H | e.c comment. 333 calls / 80 files |
| 0x8012B178 | func_8012B178 | SetForwardVelocity | velocity = speed straight ahead in the model's frame | H | e.c comment. 400 calls / 74 files: `(a, 0x20000)` style speeds |
| 0x8012B1B4 | func_8012B1B4 | SetLocalVelocityXZ | only the horizontal velocity from a model-frame vector (vertical kept) | H | e.c comment. 359 calls / 58 files |
| 0x8012B200 | func_8012B200 | StopMotion | velocity and acceleration zeroed | H | e.c. 259 calls / 83 files |
| 0x8012B21C | func_8012B21C | StopWithHalfGravity | velocity zeroed, acceleration (0, 0xC000, 0) | H | e.c comment ("gravity 0.75"); 41 calls |
| 0x8012B23C | func_8012B23C | StopWithGravity | velocity zeroed, acceleration (0, 0x18000, 0) | H | e.c comment ("gravity 1.5"). 750 calls / 97 files: the usual state set-up before MoveOnGround |
| 0x8012B260 | func_8012B260 | SyncModelPos | model position = position + ofs (+0x50), model flag 1 | H | e.c comment. 46 calls |
| 0x8012B2CC | func_8012B2CC | UpdateModelZYX | model matrix from its rotation (RotMatrixZYX), then SyncModelPos | H | e.c comment. 662 calls / 115 files: the per-frame "draw me here" |
| 0x8012B370 | func_8012B370 | UpdateModelYXZ | the same in YXZ order | H | e.c comment. 124 calls / 36 files |
| 0x8012B414 | func_8012B414 | UpdateModelRot | the same with RotMatrix | H | e.c comment; 17 calls |
| 0x8012B4B8 | func_8012B4B8 | UpdateModelXZY | the same, rotations X, Z, Y on the identity | H | e.c comment; 2 calls |
| 0x8012E8E0 | func_8012E8E0 | PlaceObject | position = a point (frac 0), heading = its pad, then UpdateModelZYX | H | e.c comment. 311 calls / 21 files: `func_8012E8E0(a, &stage_point)` with stage point tables |
| 0x8012E364 | func_8012E364 | UpdateSquash | the model's x / z scale eased toward Musashi's +0x188 squash (0 to 0x90) | M | e.c; 7 calls |
| 0x8012E470 | func_8012E470 | EaseScaleNormal | x / z scale a quarter of the way to 1.0, TickTimer | H | e.c comment; 4 calls |
| 0x8012E4C8 | func_8012E4C8 | RecoilFromBehind | scale 1.0, damage 0, flags5C bit 0, knock angle = heading + 0x800, hit kind 1: a self-inflicted hit from behind | L | e.c; e5F4 func_80131E7C calls it when the squash ends and then starts reaction step 1 |
| 0x8012DFD4 | func_8012DFD4 | CarryPlayer | Musashi rides the actor's model (exact or whole-unit version by +0x74) | M | e.c; 80 calls / 36 files (lifts, platforms) |
| 0x8012E014 | func_8012E014 | CarryPlayerExact | his position into the model's frame, the model moved, back out | M | e.c comment |
| 0x8012E138 | func_8012E138 | CarryPlayerClipped | the same in whole units, moved only where func_80135888 finds the way clear | M | e.c comment |
| 0x80133298 | func_80133298 | CarryPlayerScaled | the same with the model's matrix divided by its scale first | M | e5F4 comment (func_8013339C) |
| 0x80132DC4 | func_80132DC4 | SetVelocityToward | velocity = unit direction to a point x speed | H | e5F4 comment |

### Animation (scripts and frame lists)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012A860 | func_8012A860 | SetScriptAtEnd | SetScript from the last entry, playing backwards (animFlags 0x200) | H | e.c comment; docs/animation_controller.md already calls it that |
| 0x8012A8B0 | func_8012A8B0 | SetScriptCopy | a byte-identical second SetScript | H | e.c (docs/animation_controller.md: "an identical copy"); 64 calls / 4 files |
| 0x8012A8E8 | func_8012A8E8 | AnimStepNow | run AnimStep on the actor once | M | e.c; 4 calls |
| 0x8012A908 | func_8012A908 | AnimateActors | AnimTick for every actor with animFlags 0x1000 (all while D_801270C0 is 1) | H | e.c comment |
| 0x8012A988 | func_8012A988 | AnimTick | count the pose down, then the next entry (forwards, backwards for 0x200, replay for 0x400) | H | e.c comment |
| 0x80128D60 | func_80128D60 | StartImageAnim | start a frame list whose frames are image-queue requests (func_800183E0 / func_80018450) | M | e.c; 14 calls / 3 files. The frame value goes to the EXE's image queue (ClearImageQueue / FlushImageQueue's list) |
| 0x80128DB4 | func_80128DB4 | StepImageAnim | step it; 1 when it ended (flags 0xC0), 0x80 loops | M | e.c; 10 calls |
| 0x80128EA8 | func_80128EA8 | StartSpriteAnim | start a frame list on a sprite object: each frame writes object +0x28 / +0x2A | H | e.c. 101 calls / 70 files: `func_80128EA8(a->model, a + 0x24, frames)` (the actor's +0x24 is the AnimPlayer) |
| 0x80128ED8 | func_80128ED8 | StepSpriteAnim | step it; 1 when it ended | H | e.c. 107 calls / 68 files: `if (func_80128ED8(a->model, a + 0x24)) FreeActor(a)` |

### Props (the 128-entry pool)

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80129010 | func_80129010 | UpdateProps | while D_8011DB2C: each prop's handler (D_80126AEC by kind), then its model follows | H | e.c |
| 0x801290DC | func_801290DC | SpawnPropAt | SpawnProp, at a point | H | e.c. 108 calls / 55 files |
| 0x8012913C | func_8012913C | SpawnProp | a prop of a kind with a model from slots 0x7E-0xFF | H | e.c. 191 calls / 55 files (eC98C func_80143640 spawns kinds 0x22 / 0x23 with it) |
| 0x801291C0 | func_801291C0 | AllocProp | the first free prop, zeroed | H | e.c; 11 calls |
| 0x80129220 | func_80129220 | InitProps | ClearProps, props on | H | e.c |
| 0x80129248 | func_80129248 | SetPropsActive | D_8011DB2C = on | H | e.c |
| 0x80129258 | func_80129258 | ClearProps | every prop's kind = 0 | H | e.c |
| 0x8012927C | func_8012927C | FreeAllProps | FreeProp on all 128 | H | e.c |
| 0x801292C8 | func_801292C8 | FreeProp | zero its model, kind = 0 | H | e.c. 245 calls / 96 files |
| 0x8012931C | func_8012931C | MoveProp | position += velocity | H | e.c. 100 calls / 60 files |
| 0x80129350 | func_80129350 | CopyPropPos | position from another prop | H | e.c; 15 calls |
| 0x80129374 | func_80129374 | CopyPropVel | velocity from another prop | H | e.c; 11 calls |
| 0x80132EF4 | func_80132EF4 | SpawnPropFrom | SpawnProp at another prop's position | H | e5F4 comment. 261 calls / 75 files |

### Shadows and other fixed engine kinds

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80143970 | func_80143970 | SpawnShadow | SpawnActor kind 0x1B for the owner | M | eC98C. Stage: `a->+0xCC = func_80143970(a)` (35x), freed with func_801439C0(a->+0xCC). Kind 0x1B's state step func_801439FC puts the +0xCC object on the ground under the owner, turned to the ground normal (D_801152A8..AC), hidden with no ground |
| 0x80143994 | func_80143994 | SpawnShadowSized | SpawnActorArg kind 0x1B with a size (the +0x70 value) | M | eC98C; stage passes 0x1000, 0x1800, 0x3000, 0x4000 (scale-like) |
| 0x801439C0 | func_801439C0 | FreeShadow | zero the shadow's 0x38 object (+0xCC) and FreeActor it | M | eC98C; 69 calls / 41 files |
| 0x801439FC | func_801439FC | ShadowFollow | the step described above | M | eC98C |
| 0x80143B6C | func_80143B6C | SpawnShadowB | SpawnActorArg kind 0x1C (n 1: flat, n 0: turned to the ground; n 0 copies the owner's heading to +0xFC) | L | eC98C; its step func_80143EBC is the same ground snap with `+0x70 == 1` giving a flat object and the owner's rotation scaling it. 241 calls / 56 files, mostly not stored. A second shadow kind; rename once the kind is seen in game |
| 0x80143BDC | func_80143BDC | SpawnShadowBAt | kind 0x1C, n 1, at a point, no owner | L | eC98C; 30 calls |
| 0x80143C74 | func_80143C74 | SpawnKind205 | SpawnActorArg kind 0x205 | L | eC98C; 83 calls / 45 files, the result's fields are set by the caller. Kind unknown: placeholder name |
| 0x80143CD4 | func_80143CD4 | SpawnKind39Trio | kind 0x39 with n 0, 1, 2 | L | eC98C; 8 calls |

## Collision

Two families. **Map collision** runs a path (from, to) through the room's collision map (the "current header"
D_801ED3B0, a cell grid of 0x80-unit cells with polygon records; the room record's +0x88/+0x8C/+0x90 give the map and two
alternates). The path's end comes back moved, its `pad` set to the hit polygon's first halfword (low byte = the surface
type), and the result's bits say what was hit: **0x2000 floor** (normal y below -0xBCB, i.e. facing up), **0x4000 steep
slope** (-0xBCB..-0x578), **0x8000 wall**; types 2 and 0x1B also set 0x1000. Mode bit 0x10 lets the path pass polygons
whose record has flag 0x100. **Model collision** tests a path against one model's collision data (the actor's hitData
+0x58; Musashi's model D_80126B78 and hitData D_80126B90).

### Moving with the map

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012CC88 | func_8012CC88 | MoveCollideOfs | MoveObject, then CollidePath from the old to the new position (both + ofs) with a mode; vel y = 0 on floor or slope; returns the bits | H | e.c |
| 0x8012CBA4 | func_8012CBA4 | MoveOnGround | MoveCollideOfs mode 0 (walk: the path, then a probe down for the ground), no offset | H | e.c. 345 calls / 81 files; stage tests `& 0x6000` (88x: on ground) |
| 0x8012CBCC | func_8012CBCC | MoveCollide | mode 1 (one straight path), no offset | H | e.c. 432 calls / 83 files; `& 0x2000` (107x: landed), `& 0x8000` (25x: hit a wall); e5F4 func_8012F68C tests `(u8)r == 2` (surface type) |
| 0x8012CBF4 | func_8012CBF4 | MoveCollidePassable | mode 0x11: as MoveCollide, passing polygons flagged 0x100 | M | e.c + e5F4 func_80133CD4 (`(kind & 0x10) && (rec[0] & 0x100)` skips). 272 calls / 75 files |
| 0x8012CC1C | func_8012CC1C | MoveOnGroundOfs | MoveOnGround with an offset point (e.g. a body centre above the feet) | H | e.c; 22 calls |
| 0x8012CC40 | func_8012CC40 | MoveCollideAt | MoveCollide with an offset | H | e.c; 45 calls |
| 0x8012CC64 | func_8012CC64 | MoveCollidePassableAt | MoveCollidePassable with an offset | H | e.c; 94 calls / 38 files |
| 0x8012CEB0 | func_8012CEB0 | CollidePath | mode bit 0: one TraceMap (mode 1); else TraceMap mode 0, then a 6-unit probe down (mode 2) for the floor; the result | H | e.c. 184 calls / 69 files: `& 0x1F` (32x, the surface type), `& 0x2000` (37x) |
| 0x8012CE2C | func_8012CE2C | IsOnGround | an 8-unit path down from the position stops nowhere short | M | e.c comment ("standing on something"); 7 calls |
| 0x8012B030 | func_8012B030 | SnapToGround | (listed under motion) | | |

### The room's collision map

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80133784 | func_80133784 | TraceMap | a path through the current map (up to five slides off what it hits); the end moved, flags 0x2000 / 0x4000 / 0x8000 | H | e5F4 comment. 251 calls / 61 files: `func_80133784(1, &a, &b) & 0x6000` (58x), `!= 0` (52x) |
| 0x80133AB0 | func_80133AB0 | TraceMapCell | the polygon records of the cell under (x, z) against the path | H | e5F4 |
| 0x80133CD4 | func_80133CD4 | TraceMapPolygon | one polygon record (3 or 4 edges): crossing, the end pushed out along the normal, floor / wall noted | M | e5F4 |
| 0x801343C4 | func_801343C4 | TraceMapTwoCells | the path against its start cell, then its end cell when that differs; no slides | H | e5F4 comment; 2 calls |
| 0x80134510 | func_80134510 | FindGround | the ground under a point (a path from 4 above to 0x2FC below); y set to it | H | e5F4 comment. 29 calls / 27 files: `if (func_80134510(&b) != 0 && y - b.y < 0x80)`; the shadows use it |
| 0x80135168 | func_80135168 | RaycastMap | the path against the map's cell records with the second record test (func_80134A74 / func_80134C20): the end set to the hit, no slide | M | e5F4 comment; 2 calls |
| 0x80135004 | func_80135004 | RaycastMapTwoCells | the same, tried again from the end cell | M | e5F4 comment; 4 calls (`func_80135004(1, &a, &b)`) |
| 0x80134A74 | func_80134A74 | RaycastMapCell | the cell's records for that test | M | e5F4 |
| 0x801336E8 | func_801336E8 | SetCollisionMaps | the current map (relocated once, func_80136BC4) and two alternates | H | e5F4 comment; the loader passes room +0x88, +0x8C, +0x90 (e4B9C func_80144B9C) |
| 0x8013373C | func_8013373C | SelectCollisionMap | make alternate i (0 / 1) the current map | H | e5F4 comment. 21 calls / 12 files: `func_8013373C(0)`, `(1)` |
| 0x80136BC4 | func_80136BC4 | RelocateCollisionMap | turn the header's section offsets (+0xC..+0x1C) into addresses once | M | e5F4 (the struct comment at line 298) |

### Model collision

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80135888 | func_80135888 | PathHitsModel | a path (from, to) against a model's collision (model, hitData); on a hit `to` is moved | H | e5F4. 166 calls / 79 files: `func_80135888(a->model, a->hitData, &p, &q)`, `func_80135888(D_80126B78, D_80126B90, ...)` (Musashi's model and hitData) |
| 0x80135260 | func_80135260 | PathHitsModelTwoCells | the same with a second try at the end cell | H | e5F4 comment; 5 calls |
| 0x80135A4C | func_80135A4C | PathHitsMovingModel | the same for a moving path (up to six tries along it) | M | e5F4 comment; 4 calls |
| 0x80135D20 | func_80135D20 | FindGroundOnModel | a point's ground on a model; the position moved with the model's frame | M | e5F4 comment |
| 0x80135480 | func_80135480 | ClassifyModelHit | which of the four lists / frames a model hit uses (0 none, 1-4) | L | e5F4; internal |
| 0x8013361C | func_8013361C | BoxesOverlap | two collision boxes at two offsets overlap on x, z and y | H | e5F4 comment |

### Hits on Musashi and on actors

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012F568 | func_8012F568 | HitPlayer | note a hit on Musashi: hitFlags |= flags, +0x3E kind, +0x42 facing, +0x40 damage, the two points | H | e.c comment. 117 calls / 57 files: `func_8012F568(1, 1, facing, damage, &p, &D_801152A8)` |
| 0x8012DB84 | func_8012DB84 | HitPlayerFatal | D_80126B50 = 1 (func_8014C978), then HitPlayer(1, 0xC001, 0, 1000) | M | e.c; 15 calls / 8 files, no arguments (falls and instant-death floors). 1000 damage and kind 0xC001 are the reason for "fatal" |
| 0x8012DF34 | func_8012DF34 | SegmentHitsPlayer | a world segment hits Musashi's model (unless the actor's +0xAA says not), then HitPlayer | H | e.c comment; 11 calls |
| 0x8012DEB8 | func_8012DEB8 | ActorSegmentHitsPlayer | the same for a segment in the actor's model frame (FaceHelper turns both points), noting the actor's heading | H | e.c comment. 219 calls / 48 files: `if (func_8012DEB8(a, &p0, &p1) == 1)` (weapon / body segments) |
| 0x8012D5E4 | func_8012D5E4 | ActorSegmentDamagesPlayer | ActorSegmentHitsPlayer, then Musashi's damage (+0x40) = v | H | e.c comment. 208 calls / 72 files: v = 0x96, 0x30 |
| 0x8012D664 | func_8012D664 | PointHitsPlayer | a point within r + 0x20 of Musashi's chest (0x40 above his feet): HitPlayer with damage x | H | e.c comment; 7 calls `(&v, 0x10, 0xB4)` |
| 0x8012D624 | func_8012D624 | ActorTouchesPlayer | PointHitsPlayer from the actor's position | H | e.c. 94 calls / 40 files: `func_8012D624(a, 0x1C, 0xA) == 1` (radius, damage) |
| 0x8012D714 | func_8012D714 | HitBoxEdgesHitPlayer | the actor's collision box edges (bit 1 x, 2 y, 4 z) tested with ActorSegmentHitsPlayer | H | e.c comment; 9 calls |
| 0x8012DBD0 | func_8012DBD0 | DamageActorsNear | every hittable actor (flags5C 0x8000, not 0x4000, not already hit by this hit id) within the actor's box radius takes speed/angle/hit id n: flags5C |= 1 | H | e.c. 27 calls / 19 files: `func_8012DBD0(a, 0x50, heading + 0x800, 0x1D)` |
| 0x8012E9C0 | func_8012E9C0 | TakeDamage | pending damage (+0x60) scaled by the init record's +0x30, applied (func_8016AA50); finished: func_8016B428 and a rumble | H | e.c comment; 27 calls / 22 files |
| 0x80131B14 | func_80131B14 | TakeDamageAndRecoil | the same plus HP (+0x76) -= damage, status effects (func_8002A520 / func_8002A790), the model turned to the knock angle, StopWithGravity | H | e5F4. 45 calls / 36 files |

## Camera

A Camera is 0xA4 bytes (struct in e.c): +0 the update function (the stage's own, run every frame), +4 a mode byte the
update switches on, then (current, target) pairs: +0x08/+0x0C projection, +0x10/+0x14 distance, +0x18/+0x20 angles
(SVECTOR), +0x28/+0x2E an offset; +0x3C the GsRVIEW2 before offsets, +0x5C the one given to GsSetRefView2L. The main
camera is D_80126948, three alternates at D_80126E60 (D_801150D6 = 1-3 picks one), three saved at D_80114EE8, one kept
across map changes at D_801201F8, and D_80126DB8 is the blend that eases toward the picked camera.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80129C40 | func_80129C40 | InitCameras | zero all nine cameras, main camera picked, no blend, InitDefaultView | H | e.c |
| 0x80129CF8 | func_80129CF8 | UpdateCamera | the frame's camera: focus follow (func_8012A328), the picked camera's update, projection, the blend eased (func_80012F74) or copied, offsets added, GsSetRefView2L, the world-screen matrix into Work +0x18, D_801151D4 = the camera | H | e.c |
| 0x8012A018 | func_8012A018 | SetCameraUpdate | the main camera's update function and mode (SetCameraUpdateOf on D_80126948) | H | e.c. 310 calls / 143 files: `func_8012A018(stage_cam_fn, 0/1/2)` right after the stage writes the target fields |
| 0x8012A048 | func_8012A048 | SetCameraUpdateOf | a camera's update and mode, its +0x9C/+0xA0/+0xA2 cleared, the followed point = Musashi's position | H | e.c; 9 calls |
| 0x80129FF4 | func_80129FF4 | ClearCameraUpdate | SetCameraUpdate(NULL, 0): the main camera stops moving | H | e.c; 10 calls |
| 0x8012A094 | func_8012A094 | SnapCamera | current = target for projection, distance, angles and offset | H | e.c comment ("snaps current to target"). 281 calls / 141 files: `func_8012A094(&D_80126948)` after setting the targets |
| 0x8012A100 | func_8012A100 | SelectCamera | D_801150D6 = n (0 main, 1-3 an alternate) | H | e.c. 17 calls: `(1)`, `(0)`, `(2)` |
| 0x8012A0E0 | func_8012A0E0 | SelectMainCamera | SelectCamera(0) | H | e.c |
| 0x8012A110 | func_8012A110 | ResetKeptCamera | the kept camera (D_801201F8) to its defaults: projection 0x1F4, distance 0x5DC, pitch 0x238 | H | e.c; 9 calls |
| 0x8012A1BC | func_8012A1BC | RestoreKeptCamera | copy the kept camera's settings into the main camera | H | e.c |
| 0x8012A2F4 | func_8012A2F4 | ClearCameraHeightLimit | D_801152C0 = 0 | H | e.c |
| 0x8012A304 | func_8012A304 | SetCameraHeightLimit | keep the followed height at y while Musashi is within range of it | H | e.c comment on func_8012A328 |
| 0x8012A328 | func_8012A328 | UpdateCameraFocus | the followed point D_80126940..44 = Musashi's focus (+0x154), its height eased (or held, see above) | H | e.c comment |
| 0x8012A418 | func_8012A418 | SaveCamera | copy the current camera into save slot 0 | H | e.c |
| 0x8012A464 | func_8012A464 | SaveCameraView | copy only its view (+0x3C) | H | e.c |
| 0x8012A4BC | func_8012A4BC | RestoreSavedCamera | blend from the current camera back to the saved one over 48 frames | H | e.c comment |
| 0x8012A598 | func_8012A598 | StartCameraBlend | blend from the current camera, 48 frames | H | e.c comment |
| 0x8012A568 | func_8012A568 | BlendCameraThen | StartCameraBlend, then call f (which sets the new camera) | H | e.c. 19 calls / 20 files: `func_8012A568(stage_setup_fn)` |
| 0x8012A62C | func_8012A62C | StartCameraBlendFrames | the same for n frames | H | e.c; stage `func_8012A62C(0x1E)` |
| 0x8012A5F8 | func_8012A5F8 | BlendCameraFramesThen | StartCameraBlendFrames(n), then f | H | e.c |
| 0x8012A7D4 | func_8012A7D4 | GetCameraView | the current camera's eye and target points | H | e.c |
| 0x8012A68C | func_8012A68C | GetCameraPitch | the pitch from target to eye | H | e.c comment. 9 calls / 17 files (sprites turned to face the camera: `+0x10 = func_8012A68C()`) |
| 0x8012A6D0 | func_8012A6D0 | PitchBetween | ratan2(dy, ground distance) | H | e.c |
| 0x8012A758 | func_8012A758 | GetCameraHeading | the heading from target to eye | H | e.c comment. 23 calls / 30 files: `RotMatrixY(func_8012A758(), &m)` |
| 0x8012A79C | func_8012A79C | HeadingBetween | ratan2(dx, dz) | H | e.c |
| 0x80132E6C | func_80132E6C | GroundDistSqToFocus | squared ground distance from Musashi's focus (the camera's followed point) | M | e5F4 comment says "camera's focus": it reads Player +0x154, which the camera follows |
| 0x80133060 | func_80133060 | PushAlongView16 | a 16.16 position through func_801330E0 | M | e5F4 comment; 7 calls / 15 files |
| 0x801330E0 | func_801330E0 | PushAlongView | a point through the world-screen matrix, pushed by a along the view axis in proportion, and back | M | e5F4 comment; 4 calls |

## Math and vectors

Angles are 4096 a turn. "Target" below is the Player's point at +0x15C (game.h: "another point of his", +0x162 nonzero
= not set). Enemies chase and face it far more than Musashi's own position (func_8012B8E4 279 calls against
func_8012BA10 30), and stage NPCs write their own position into it (sc03_007: `D_80126CB4 = o->x` and so on), so it is
the point enemies are told to go for; "Target" is a reading, not a fact (M). If the local card prefers a neutral word,
"Aim" works the same way in every name below.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8012B0B4 | func_8012B0B4 | AngleToVec2 | a 2D vector of length len at an angle, packed x low / y high | H | e.c comment. 203 calls / 77 files |
| 0x8012B608 | func_8012B608 | TurnStep | a step from angle a toward b the short way round: the difference over n, at least 1 | H | e.c comment. 427 calls / 91 files: `rot.vy += func_8012B608(rot.vy, heading, 8)` |
| 0x8012B6D4 | func_8012B6D4 | HeadingTo | the ground heading from one 16.16 point to another | H | e.c comment. 163 calls / 71 files |
| 0x8012B70C | func_8012B70C | HeadingToSV | the same for two SVECTORs | H | e.c; 61 calls / 36 files |
| 0x8012B744 | func_8012B744 | HeadingToPoint | the same from a 16.16 point to an SVECTOR | H | e.c. 211 calls / 69 files: `func_8012B744(a + 4, &v)` |
| 0x8012B77C | func_8012B77C | HeadingPitchTo | heading (high half) and pitch (low half) from a to b | H | e.c comment; 114 calls / 59 files |
| 0x8012B864 | func_8012B864 | HeadingToTarget | the heading from an object to the Player's target point | M | e.c comment ("other point"); 95 calls / 60 files |
| 0x8012B8A4 | func_8012B8A4 | HeadingToPlayer | the heading from an object to Musashi | H | e.c comment; 54 calls / 35 files |
| 0x8012B8E4 | func_8012B8E4 | TurnStepToTarget | TurnStep from the model's heading toward the target point | M | e.c comment. 279 calls / 72 files: `rot.vy += func_8012B8E4(a, 8)` |
| 0x8012BA10 | func_8012BA10 | TurnStepToPlayer | the same toward Musashi | H | e.c comment; 30 calls |
| 0x8012BB3C | func_8012BB3C | TurnStepToward | TurnStep from an angle toward the heading from a to b | H | e.c comment; 34 calls / 21 files |
| 0x8012BC60 | func_8012BC60 | DistSq | squared distance between two 16.16 points (whole units) | H | e.c comment; 60 calls / 47 files |
| 0x8012BCCC | func_8012BCCC | DistSqToTarget | squared distance to the target point, 0x7FFFFFFF when it is not set | M | e.c comment. 344 calls / 66 files: `if (func_8012BCCC(a) < 0x...)` (notice ranges) |
| 0x8012BD14 | func_8012BD14 | DistSqToPlayer | squared distance to Musashi | H | e.c comment. 296 calls / 96 files |
| 0x8012BD3C | func_8012BD3C | TargetInSight | the target point within dist (squared) and within range of the model's facing | M | e.c comment; 109 calls / 44 files |
| 0x8012BDBC | func_8012BDBC | TargetInFront | the target point within range of the model's facing | M | e.c comment. 180 calls / 78 files: `func_8012BDBC(p, 0x300)` |
| 0x8012BE54 | func_8012BE54 | GroundDistSqToPlayer | squared ground distance to Musashi | H | e.c comment; 121 calls / 61 files |
| 0x8012BE98 | func_8012BE98 | GroundDistSqTo | squared ground distance to a point | H | e.c comment. 124 calls / 53 files: `func_8012BE98(a, &D_80126CB4) <= 0x240000` |
| 0x8012EF34 | func_8012EF34 | ProjectPointZ | a point to the screen: xy and depth (SZ) | H | e.c comment |
| 0x8012EF70 | func_8012EF70 | ProjectPointOtz | the same with the depth over 4 (an OT index) | H | e.c comment; 39 calls / 26 files (sprite effects) |
| 0x8012EFB8 | func_8012EFB8 | ProjectPoint | a point through the world-screen matrix (Work +0x18); returns the GTE flag | H | e.c comment; 66 calls / 38 files |
| 0x8012F40C | func_8012F40C | ScreenPos | a point's screen xy (0 when the GTE flags an error) | H | e.c comment |
| 0x8012F49C | func_8012F49C | ActorPointScreenPos | ScreenPos of a point of the actor's model frame | H | e.c |
| 0x8012E32C | func_8012E32C | LoadWorldScreenMatrix | SetRotMatrix / SetTransMatrix with the world-screen matrix | H | e.c comment; 22 calls / 16 files |
| 0x8012E778 | func_8012E778 | IsOnScreen | the object's screen point within (lim low half, lim high half) of the centre | H | e.c comment. 85 calls / 55 files |
| 0x8012F038 | func_8012F038 | WorldToLocal | a world point into a matrix's frame (whole units) | H | e.c comment; 17 calls |
| 0x8012F0BC | func_8012F0BC | WorldToLocal16 | the same for a 16.16 point | H | e.c comment |
| 0x8012F14C | func_8012F14C | LocalToWorld | a point of a matrix's frame into the world | H | e.c comment. 450 calls / 134 files: `func_8012F14C(&a->model->coord.coord, &ofs, &out)` |
| 0x8012F1A4 | func_8012F1A4 | LocalToWorld16 | the same for a 16.16 point | H | e.c comment |
| 0x8012F274 | func_8012F274 | ActorLocalToWorld16 | a 16.16 point from the actor's model frame into the world | H | e.c comment |
| 0x8012F2E8 | func_8012F2E8 | WorldToActorLocal | a world point into the actor's model frame | H | e.c comment; 34 calls |
| 0x8012F374 | func_8012F374 | TargetToActorLocal | the target point in the actor's model frame | M | e.c comment |
| 0x8012EA90 | func_8012EA90 | GetPartLocalMatrix | a part's local matrix from the model's current pose (8- or 12-byte records) | H | e.c comment; 10 calls |
| 0x8012EC04 | func_8012EC04 | GetPartWorldMatrix | a part's matrix composed with the model's (the pose's 8- or 12-byte record, then the model matrix) | H | e.c (same record decoding as func_8012EA90, then the model's coord). 108 calls / 29 files: `func_8012EC04(a, part, &m)` then LocalToWorld(&m, ...) for weapon tips |
| 0x8013339C | func_8013339C | UnscaleMatrix | a matrix's columns divided by a scale vector | H | e5F4 comment |
| 0x80134310 | func_80134310 | DotPlus | dot product of two SVECTORs plus a constant (a plane test) | H | e5F4 comment (copies at 0x80134A28, 0x80134FB8) |
| 0x8012EECC | func_8012EECC | ScaleByDifficulty | x less x * func_8002A4FC() * 100 / 7680 | L | e.c; the EXE function's meaning is not known yet |

## Script and messages

### The event script VM (e58E0, 0x80178xxx-0x8017Bxxx)

An interpreter for the stage's event scripts (talks, cutscenes): state D_801EF464 (0 idle, 1 / 2 waiting on a message
window, 3 run on, 4 a frame wait, 5 a native wait hook, 6 a finished choice), a 512-halfword command ring, a gosub slot,
ten hooks. Stage NPC code starts one with func_80178B18 when spoken to, polls func_80178970 each frame and calls
func_80178D18 when it is over.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80178B18 | func_80178B18 | StartEvent | reset the VM, patch the built-in script's goto target with s, take Musashi's control (func_801746A4, func_8017435C), run | H | e58E0 comment. 234 calls / 95 files: `func_80178B18(a, def->+0xC)` (an NPC's script from its def) |
| 0x80178B70 | func_80178B70 | StartEventKeepPlayer | the same without taking Musashi's control | H | e58E0 comment; 14 calls / 18 files |
| 0x80178BB8 | func_80178BB8 | ResetAndRunScript | reset, then RunScript on a script directly | H | e58E0 |
| 0x80178BF8 | func_80178BF8 | ResetScriptVM | all VM state cleared (window, gosub slot, hooks, the command ring, the actor-move block) | H | e58E0 comment. 185 calls / 61 files |
| 0x80178CBC | func_80178CBC | RunScript | interpret from a script pointer until it waits (state other than 3); returns the state | H | e58E0. 296 calls / 63 files |
| 0x80178D40 | func_80178D40 | ScriptStep | one command (the interpreter proper) | M | e58E0 (the switch that follows "the interpreter's declarations") |
| 0x801789AC | func_801789AC | UpdateScript | the VM's frame: the hooks, then by state wait for the window's answer, a frame count or the wait hook, and run on; at state 6 return the choice (1 / 2 / 3) | H | e58E0. 128 calls / 64 files: `if (func_801789AC(a) == 1)` |
| 0x80178970 | func_80178970 | IsEventDone | UpdateScript says done and the scripted camera (D_801EF3F0) is idle | H | e58E0 comment ("finished?"). 461 calls / 91 files: `if (func_80178970(a) != 0)` |
| 0x80178D18 | func_80178D18 | EndEvent | VM state 0; unless the field overlay objects (func_800CF8CC), BeginScene on Musashi and end his scripted action | H | e58E0 (with func_80174714). 461 calls / 106 files, right after IsEventDone |
| 0x80174714 | func_80174714 | ReleasePlayer | as above without the VM reset | M | e58E0 |
| 0x8017B368 | func_8017B368 | ScriptOpCameraCut | op 0x21: cut the scripted camera to two points (absolute or the actor's numbered points) | H | e58E0 comment; 9 calls (stages call ops directly) |
| 0x8017B490 | func_8017B490 | ScriptOpCameraMove | the same, easing over 0x1E frames from the current view | M | e58E0 (D_801EE5DC = 0x1E, the main camera's view fields copied as the start) |
| 0x801788B8 | func_801788B8 | SpawnTalkMarker | spawn kind 0x83 linked to the actor (its position and heading, +0xDC = the second argument) | L | e58E0; 165 calls / 60 files. Kind 0x83 next to the VM, given the speaker and a value: probably the "can talk" helper; check the kind |

### Message windows (e5F4, 0x80137xxx-0x80139xxx)

Three windows of 0x4C at D_801269F0 (window 0 is the fixed one), text from message ids.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8013767C | func_8013767C | OpenMessage | a free window opened with a message | H | e5F4. 66 calls / 32 files: `a->+0x198 = func_8013767C(msg)`, closed later with func_80139914(a->+0x198) |
| 0x80137614 | func_80137614 | OpenMessageEx | the same with a value (+0x1C) and flags (& 0xD8) | H | e5F4 comment |
| 0x801376E8 | func_801376E8 | OpenMessageAt | window 0 with a message, centred on a screen point when given | H | e5F4 comment; 17 calls |
| 0x801377B4 | func_801377B4 | SetupMessage | a window set up for a message id; front window unless flags 0x2000 | H | e5F4 comment |
| 0x801378F0 | func_801378F0 | InitMessages | the window system cleared | H | e5F4 comment; called by the stage start (e.c func_80128420) |
| 0x801379FC | func_801379FC | UpdateMessages | the windows' frame: front one first, then the others, then each drawn | H | e5F4 comment |
| 0x80137B80 | func_80137B80 | UpdateMessage0 | window 0's frame only (its step, the blink counter) | M | e5F4; 22 calls |
| 0x80137D08 | func_80137D08 | DrawMessage0 | window 0's text, then the arrow (state 7) or blinking prompt (state 3) | H | e5F4 comment; 9 calls |
| 0x80139914 | func_80139914 | CloseMessage | a window closed | H | e5F4 comment. 64 calls / 32 files |
| 0x80139954 | func_80139954 | CloseMessage0 | CloseMessage on window 0 | H | e5F4; 43 calls |
| 0x801399A8 | func_801399A8 | FindFreeWindow | the first free window after window 0 | H | e5F4 comment |
| 0x801399F0 | func_801399F0 | GetMessageAnswer | -1 closed / closing, the choice once made (state 0xD), else 0 | H | e5F4 comment. 83 calls / 40 files: `if (func_801399F0(a->+0x198) != 0)` |
| 0x80139A44 | func_80139A44 | SetMessageText | inserted text slot i (0-3) = v (window +0x4A picks the slot) | M | e5F4 struct comment ("which text (D_80127530)"); 12 calls |
| 0x80139A68 | func_80139A68 | SetMessageNumber | number slot i (0-3) = v, printed by func_80138AB4 | H | e5F4 (func_80138AB4 prints D_80127540[w->+0x48]). 45 calls: `func_80139A68(count, 0)` |
| 0x80138AB4 | func_80138AB4 | PutMessageNumber | the number put into the window digit by digit | H | e5F4 comment |
| 0x801379D8 | func_801379D8 | EnableMessageVoice | D_8012752E = 1 | L | e5F4 (func_80138? reads it through `voice`); 2 calls |
| 0x801379EC | func_801379EC | DisableMessageVoice | D_8012752E = 0 | L | as above |

### Musashi's scripted actions (Player +0x1F8.., e58E0 0x8016Exxx-0x80174xxx)

Player +0x1F8 holds an action handler (a function, low 24 bits and bit 31) with flags in bits 24-30; +0x1FC an action
script (a list of handlers), +0x214 the phase (NextPhase / SetPhase, already named), +0x215 / +0x216 the two
sub-counts (BumpSub1 / BumpSub2), +0x200 a timer. Stage code drives Musashi in cutscenes with these.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8016EE94 | func_8016EE94 | SetPlayerAction | +0x1F8 = handler | 0x04000000 | flags, the action's state cleared | H | e58E0 |
| 0x8016EDEC | func_8016EDEC | StartPlayerAction | SetPlayerAction, then (unless Musashi's kind is 0x19 / 0x1A) his state handler and func_80159B3C | H | e58E0. 51 calls / 16 files: `func_8016EDEC(stage_fn, 0x01000000)` |
| 0x8016EFC8 | func_8016EFC8 | SetPlayerActionScript | +0x1FC = an action script, +0x1F8 = its first handler | flags, phase 1 | H | e58E0 |
| 0x8016EF78 | func_8016EF78 | SetPlayerActionScriptReset | SetPlayerActionScript and func_801726D0 | M | e58E0 (arguments pass through in registers) |
| 0x8016EE40 | func_8016EE40 | StartPlayerActionScript | the above, then as StartPlayerAction | H | e58E0. 338 calls / 135 files: `func_8016EE40(&stage_script, 0x01000000)` |
| 0x8016F14C | func_8016F14C | RunPlayerAction | each frame: call the handler (func_80148634 first with flag 0x01000000) | H | e58E0; called from the player update func_80146128 |
| 0x8016F0E4 | func_8016F0E4 | EndPlayerActionOf | +0x1F8 / +0x1FC = 0, phase 0, BeginScene, func_801511A8 | H | e58E0; 50 calls / 16 files |
| 0x8016F0AC | func_8016F0AC | EndPlayerAction | EndPlayerActionOf(Musashi) and func_80165770 | H | e58E0; 13 calls / 20 files |
| 0x8016F4C4 | func_8016F4C4 | EndPlayerActionAndRest | the same for any player object | M | e58E0 |
| 0x8016F1AC | func_8016F1AC | GetPlayerAction | the handler (+0x1F8 & 0x80FFFFFF) | H | e58E0; 63 calls / 44 files (`if (func_8016F1AC() == 0)`) |
| 0x8016F1C4 | func_8016F1C4 | PlayerActionBlocksInput | 1 on maps listed at D_801908E8, else the handler unless flag 0x10000000 | M | e58E0; 13 calls |
| 0x8016F264 | func_8016F264 | ClearPlayerActionFlag01 | +0x1F8 &= ~0x01000000 | M | e58E0 (the flag's meaning: func_80148634 is run before the handler) |
| 0x8016F288 | func_8016F288 | SetPlayerActionFlag01 | +0x1F8 |= 0x01000000 | M | e58E0 |
| 0x8016F2A8 | func_8016F2A8 | SetPlayerActionFlag02 | |= 0x02000000 | L | e58E0 |
| 0x8016F2C8 | func_8016F2C8 | ClearPlayerActionFlag02 | &= ~0x02000000 | L | e58E0 |
| 0x8016F2EC | func_8016F2EC | SetPlayerActionFlag08 | |= 0x08000000 | L | e58E0 |
| 0x8016F30C | func_8016F30C | ClearPlayerActionFlag08 | &= ~0x08000000 | L | e58E0 |
| 0x8016F330 | func_8016F330 | SetPlayerActionFlag10 | |= 0x10000000 (see PlayerActionBlocksInput) | M | e58E0 |
| 0x8016F350 | func_8016F350 | ClearPlayerActionFlag10 | &= ~0x10000000 | M | e58E0 |
| 0x80171928 | func_80171928 | NextPlayerActionHandler | the next handler from the action script (+0x1FC[phase]), NextPhase | H | e58E0; 110 calls / 44 files |
| 0x801718AC | func_801718AC | SetPlayerActionList | a new action script, its first handler, NextPhase | M | e58E0 |
| 0x80171904 | func_80171904 | SetPlayerActionHandler | the handler replaced, flags kept | H | e58E0 |
| 0x801719A4 | func_801719A4 | TakeActionArgs | copy n words after the phase into D_8011F738 and skip them | H | e58E0 |
| 0x8017196C | func_8017196C | SetPhaseCopy | identical to SetPhase | H | e58E0 |
| 0x8017197C | func_8017197C | BumpSub1Copy | identical to BumpSub1 | H | e58E0 |
| 0x80171990 | func_80171990 | BumpSub2Copy | identical to BumpSub2 | H | e58E0. 244 calls / 56 files |
| 0x80171A6C | func_80171A6C | DropSub2 | +0x216 -= 1 | H | e58E0 |
| 0x80171A04 | func_80171A04 | SetActionMark1 | +0x217 = 1 | L | e58E0; 17 calls |
| 0x80171A10 | func_80171A10 | SetActionMark2 | +0x217 = 2 | L | e58E0; 17 calls |
| 0x80171A80 | func_80171A80 | SetActionTimer | +0x200 = n | H | e58E0; 13 calls |
| 0x80171A88 | func_80171A88 | TickActionTimer | count +0x200 down; 1 at 0 | H | e58E0; 13 calls |
| 0x80171B10 | func_80171B10 | FacePoint | the model's heading = the heading to a point (func_8014C568) | M | e58E0 |
| 0x80171B44 | func_80171B44 | ClearWalkCount | +0x20C = 0 | M | e58E0; 9 calls (before func_80171B4C) |
| 0x80171B4C | func_80171B4C | AutoWalkFrames | fake pad input (+0xA9 = digital, +0xAA = the direction toward the model's heading relative to the camera) for n frames; then stop | H | e58E0; 9 calls |
| 0x80171D78 | func_80171D78 | WalkToPoint | face a point and walk (func_80171EC8); returns nonzero when arrived (func_8017248C) | M | e58E0; 16 calls |
| 0x80171E08 | func_80171E08 | WalkToPointTurning | the same, the turn limited by arg2 | M | e58E0 |
| 0x80171D1C | func_80171D1C | StepTowardEx | as StepToward with a speed byte (func_80171FFC) | M | e58E0 |
| 0x80172710 | func_80172710 | CallActionHandler | call D_80127088 (set by SetActionHandler) | H | e58E0. 176 calls / 60 files (as an action: `func_8016EDEC(func_80172710, ...)`) |
| 0x801746A4 | func_801746A4 | TakePlayerControl | StartPlayerAction(CallActionHandler, 0x01000000), SetActionHandler(func_80172760) | H | e58E0; 43 calls / 40 files |
| 0x801746DC | func_801746DC | TakePlayerControlNoStop | the same with SetPlayerAction | H | e58E0; 22 calls |
| 0x80174784 | func_80174784 | StartActionTable | StartPlayerAction(func_801747CC): run D_80190B70[phase] | M | e58E0 |
| 0x801747AC | func_801747AC | EndActionTable | EndPlayerAction | M | e58E0 |
