# Merged naming proposals (r276, research only)

One checked list of every function / global name the r271-r275 research cards proposed, cut into batches a
local card can apply. Nothing in src/, include/, the configs or the symbol files was changed; the input docs
were read from their branches and not edited.

## Inputs

| branch | doc | what was taken |
|---|---|---|
| research/r271-abil-packages | docs/abil_packages.md | section 6 (6a package symbols, 6b engine / EXE symbols) |
| research/r271-abil-packages | docs/mode_overlays.md | section 4 (ovl36-ovl3b) |
| research/r272-engine-names | docs/names_stage_engine_proposals.md, _2.md | every `address / current / proposed` table, and the "known name" table |
| research/r273-object-struct | docs/object_struct.md, docs/structs_2.md | nothing: both hold only struct field rows (1183 skipped), no function or global names |
| research/r274-exe-names | docs/names_exe_proposals.md | every `address / current / proposed` table |
| research/r275-stage-survey | docs/stage_survey.md, _2.md, _3.md | the per-stage "Names: SCxx_xxx" tables, the "working names" table (EXE / field calls), the family shape tables (separate file, see below) |

## Method

`merge_names.py` (run from the repository root with the five branches fetched: `python3 docs/names_merged/merge_names.py`)
reads the docs with `git show`, parses every markdown table that has an address and a proposed name, and writes
every file here. It is deterministic; re-running it reproduces the CSVs.

* **Scope.** r271 6a: `abil:<package>`. r271 section 4: `ovl:<nn>`. r275 "Names: SCxx_xxx": `stage:scxx_xxx`.
  Everything else by address: below 0x800CAE00 `exe`; 0x80100000-0x8017BE9C (engine bss + engine text, stage.yaml)
  `engine`; slot-0 addresses in r271 6b and the r275 "field overlay" working names `ovl:36`.
* **Confidence.** Taken from the doc. r271 has no confidence column (both docs say "H or strong M only"): a row is
  M or L when its evidence says "(M)" / "(L)", else H, with the note `conf inferred`. Same rows from two docs are
  merged (sources joined, best confidence kept).
* **"X (also proposed: Y)"** in r271 keeps X (the doc's own rule) and notes Y.
* Rows skipped as not a name: r274's 9 `(skip)` rows (empty / asm-only functions) and 7 rows whose "proposed" is a
  Work field (`Work.frame` ...; r274 lists those as fields on purpose), r271's two Steel_Band rows that name three
  halves in one cell and one `(none: role unclear)` row, r272's struct-field tables (+0x offsets, 55 rows).

### Checks

* **(a) same address, different names:** 71 (scope, address) pairs. 70 resolved, 1 needs a ruling. Rulings are in
  `rulings_applied.csv` (scope, address, chosen, reason), which the script reads. Rules used, in order:
  1. The C settles it (6): `D_801270C0` is tested for 1, 2 and 3, so a mode, `g_WorldAnimMode` (r271's name plus
     the g_ the style needs, not g_UpdateAllActors); `func_80146750` / `func_8014680C` take a spawn record and fill
     the entry (`SpawnObj68Upper` / `Lower`, not AllocObj68*); `func_801657A0` / `func_80165840` latch
     D_80078EC3 (`SaveStatusOnce` / `RestoreStatusOnce`); `func_800167F0` advances and draws the fade (`FadeStep`);
     `func_8014C168` is a second copy of FindActorByKind (`FindActorByKindAny`).
  2. Meaning (13): D_80078EC0 is the Lumina technique selection (r271 read the slot-3 packages), so r271's
     `*Technique*` / `SetLuminaSelection` / `TickGlideTimer` / `IsSteelActive` replace r272's address-based
     `*EC0Mode*` / `PlayerFlag800` placeholders (M / L).
  3. Style (17): r271 6b's `Module_Name` engine names (`Stats_AddHP`, `Actor_SendHit`, `Pad_Held`, `Camera_LockHeight`
     ...) break the engine's no-prefix CamelCase; the owning card's names win.
  4. Synonyms (34): the owning card's name (r274 for exe, r272 for engine, r271 mode_overlays for ovl36) keeps its
     family stem (DrawPrim*, Pos*, GetVar*, PlaySound, Free*, StartCameraBlend*); r275 working names lose to the
     owners. The losing names are in `dropped.csv` with `superseded by ...`, and the winners' notes name them.
* **(b) same name, different addresses in one link scope** (engine + exe are one global scope; each stage image,
  package and mode overlay is its own scope and also links against the global one): 2 hits, both ovl36 names
  that r272 also proposes for an engine function (`LoadAbilityPackage`, `ToBcd`).
* **(c) clashes with existing symbols** (all symbol files, `stg/`, `abil/`, identifiers declared in `include/`,
  non-generic functions defined in `src/`): none.
* **(d) already named:** none of the proposed addresses has a real name in the symbol files today; nothing dropped
  for this reason. 3 rows note that their current name is not in `src/` (AnimAdvance 0x8012AA80, which r272 says is
  not a function start today; ovl3b `g_TrialEndSprtLeft` / `Right`, data only reached through the config).
* **(e) style:** functions `^[A-Z][A-Za-z0-9]*$`, globals `^g_[A-Z][A-Za-z0-9]*$`. Two r271 conventions are
  kept in the batches but need **one ruling each** (they are noted on every row): `Pkg_Name` package functions
  (205 rows, e.g. `Stun_Update`) and package / overlay-local data without g_ (41 rows, e.g. `Stun_StepTable`).
  Global names that break the style go to `needs_ruling.csv`.
* **(f) keywords and libraries:** C keywords, MIPS register names, libc names, every name in
  symbol_addrs_psyq.txt and a short list of PsyQ API names (SpuInit, CdInit, DecDCTReset ...) block a row; a
  PsyQ-like prefix (Gs, Ss, Spu, Cd, Pad, MemCard, DecDCT, Mdec) only adds a warning (21 rows: ovl39's LIBPRESS
  DecDCT* / Mdec* identifications, and `CdTrackStep`, `CdFilesReady` in the EXE).

## Output

| file | rows | what |
|---|---|---|
| exe_H.csv | 466 | EXE, H. Applying needs the port's Comprehensive Test locally |
| exe_MM.csv | 306 | EXE, M and L (259 M, 47 L). Same test |
| engine_H.csv | 508 | stage engine (stg/symbol_addrs_engine.txt), H |
| engine_ML.csv | 1248 | stage engine, M and L |
| stage_H.csv | 631 | stage images (stg/symbol_addrs_scxx_xxx.txt), H; 120 stages in all |
| stage_ML.csv | 545 | stage images, M and L |
| abil_H.csv | 267 | packages (abil/symbol_addrs_ovlNN.txt), H (mostly inferred) |
| abil_ML.csv | 6 | packages, M |
| ovl_H.csv | 290 | mode overlays ovl36-ovl3b and the field calls, H (mostly inferred) |
| ovl_ML.csv | 4 | mode overlays, M |
| needs_ruling.csv | 16 | blocked rows, see below |
| dropped.csv | 70 | names that lost a same-address conflict |
| stage_family_shapes.csv | 282 | r275 family shapes: one name per shared shape, address in its first stage only |
| all_rows.csv | 4357 | everything, with purpose, status and every note |
| rulings_applied.csv | 70 | the conflict rulings the script applies |
| summary.txt | | the script's counts |

Batch columns: `address, scope, current, proposed, confidence, source, note`. `source` is `card:doc:line`
(several when docs agree); `note` carries the conflict that was resolved and any warnings.

Counts by scope and confidence (after merging, before batching):

| scope | H | M | L | total |
|---|---|---|---|---|
| exe | 468 | 259 | 48 | 775 |
| engine | 509 | 990 | 259 | 1758 |
| stage | 631 | 530 | 15 | 1176 |
| abil | 267 | 6 | 0 | 273 |
| ovl | 301 | 4 | 0 | 305 |

### Notes for the local card

* **Mode overlays** (ovl36-ovl3b) all read `symbol_addrs.txt` and share slot 0 (0x800CEDF8), so their names cannot
  go there: each needs its own file like `symbol_addrs_ovl39.txt` (and its yaml line). Same for applying two
  overlays' names at the same address.
* **Family shapes** (`stage_family_shapes.csv`) are not in the stage batches: the same code sits at another
  address in each stage, so each copy needs its address found first (by the r275 shape hash or by eye).
* The **EXE batches** are apart because they change the names every other image links against.

## Rulings needed

1. `func_80165770` (engine): `Ability_ResumeHop` (r271, wrong style) or `EndAbility12` (r272, L). The C:
   `if (D_80078EC1 == 12) func_800CAF6C(obj)`; r271 says ovl1a's CAF6C puts Musashi back in the hop's state 0.
   Suggest `ResumeHopAbility`.
2. `Pkg_Name` for package functions (205 rows in abil_*.csv): accept as the package convention, or turn into
   `StunUpdate` style.
3. Package / overlay-local data without g_ (41 rows): accept, or add g_.
4. `D_80078EBF` (exe) `ChargeGauge`: a global without g_; suggest `g_ChargeGauge`.
5. `D_800AE620` (exe) `GsIDMATRIX`: if it is libgs's own GsIDMATRIX it belongs in symbol_addrs_psyq.txt
   (check with tools/psyq_match.py), not here.
6. `func_8003A424` (exe) `SpuInit`: the PsyQ LIBSPU name; check whether it is the library function (then
   symbol_addrs_psyq.txt) or pick another name.
7. ovl36 `LoadAbilityPackage` (0x800D02D0) and `ToBcd` (0x800D2CA8): r272 proposes the same names for engine
   functions 0x801554B8 / 0x801783D0. The overlay links against the engine's names only when a stage is loaded,
   but one name for two functions is confusing: suggest `FieldLoadAbilityPackage` / `FieldToBcd`, or rename the
   engine ones.
8. ovl39 movie-sample names (`strSetDefDecEnv`, `strInit`, `strCallback`, `strNextVlc`, `strNext`, `strSync`,
   `strKickCD`, `isEndOfFlame`) and `DecDCTReset`: these are the PsyQ movie sample's / LIBPRESS's own names. Keep
   them lower-case like DecDCTvlc in symbol_addrs_ovl39.txt (r271's choice), or not.

## r278: Phase 2 cleanup (stage_H and engine_H to "apply as is")

Docs only; branch research/r278-names-cleanup from research/r277-names-check. `r278_apply.py` rebuilds every changed
batch from r277's copy plus its CHANGES list and writes `CHANGES_r278.csv` (address, scope, old, new, reason; one
note-only row has old == new). Every changed row's `note` starts with `r278:` (and `was <old name>` for a rename).
Run from the repository root, in this order: `r278_apply.py`, `r278_evidence_check.py`, `r278_clash_check.py`.

| batch | rows changed | what |
|---|---|---|
| stage_H.csv | 6 renamed, 1 note | evidence check (below) and the item hand-over names |
| engine_H.csv | 10 renamed | the 0x80146C98-0x80146E98 helper family |
| exe_H.csv | 1 renamed | r277's VAGUE `SaveCardStep` |
| abil_H.csv | 36 renamed | the Pkg_ style note |
| ovl_H.csv | 6 renamed | the "stage menu" / g_StageMode note |
| total | 59 renamed + 1 note = 60 rows in CHANGES_r278.csv | |

* **Evidence check (stage_H, all 631 rows).** `r278_evidence_check.py` finds each call or constant named in r275's
  evidence cell in the function's body, under its proposed and its current name (stage-local `D_` / `func_` written
  with the stage prefix, 16.16 and range-end forms of constants allowed). It writes `r278_evidence_check.csv`
  (status, what was checked, what was missing, r278's reading). 542 rows confirmed, 77 have nothing checkable (prose
  such as "attack state", "part motion"), 12 missed. 10 of the 12 are fine one level down (a helper or wrapper holds
  the call: MoveImage, ClearSeqPoint, GetVarCF / SetVarCF, spawn 0x38E, or the constant is written another way).
  The other 2 are r277's sc06_029 case, and they are not a plain swap: 0x8017EBC4 (`BossCoreInit`, state 0 of the
  core) is the function with the five `SpawnActorArg(0x294, i)` weak points. The name stays and the note corrects
  the evidence (kind 0x2EF is spawned by 0x80180030). 0x80180A70 is the core's state 0xE after `EventAfterBoss`,
  renamed `BossCollapseSequence` (r277's fix). The rest of the sc06_029 table was re-read and matches the C.
* **Weak "Thing + flag number" names (stage_H).** 61 names are built on a flag, var or progress number. 5 bodies
  have a clear point and were renamed: `TalkerTakeItem58` and `GiveItem28SetFlag124` (r277's fixes),
  `TakeFourItemsSetProgress50` (TakeItem 0x4E / 0x50 / 0x51 / 0x52), `SceneTakeItem6C`, `EventGiveItem1C` (an
  event that gives item 0x1C). **56 kept**: their bodies only set or test that flag or progress, so the name says
  what they do. No door case was found.
* **engine_H 0x80146C98-0x80146E98.** These are generic object-record helpers. Callers include Musashi's action handlers
  (most of the 62 +0x24-setter calls in engine_801458E0.c), StepToward on any walker, stage code, and the packages
  on Musashi and their 0x68 objects. +0x02 / +0x10 / +0x1C are fields of the
  shared ObjHeader (r273 object_struct.md 3.1). +0x24..+0x2C is **not an acceleration**: func_80147F78 /
  func_80147B5C copy it into the pending push D_80127090 and from there into vel. So it is a stored velocity, which
  r273 calls Musashi's `push` (the Mover's accel is +0x44). New names: `SetObjState`, `NextObjState`, `PrevObjState`,
  `ClearObjVel`, `ClearObjPush`, `SetObjPushV`, `SetObjPush`, `SetObjPushClamped`, `SetObjTimer`, `TickObjTimer`.
  r277 suggested `SetObjAccel`; that was not taken, for the reason above. The M neighbours `AddPushVel` /
  `SetPushVel` (engine_ML) already use the word.
* **exe_H 0x8002B0B4** is now `CardStep`: it steps g_CardStep for check / save / load / mode 3. r277's `MemCardStep`
  was not taken because the EXE links LIBMCRD and its `MemCard*` names are in symbol_addrs_psyq.txt.
* **Pkg_ style (abil_H).** r271 section 6 gives every package-local name a `Prefix_` (slot 3 by behaviour). 36 rows
  in ovl2e, ovl2f and ovl30-ovl35 lacked the underscore and now have it (`Grenade_ObjUpdate`, `Slam_Quake`,
  `Shockwave_Update`, `Spin_States` ...). The convention itself is still ruling 2 above (and package data without
  g_ is ruling 3), but it is now applied the same way to all packages, so either ruling is one mechanical step.
* **Stage menu / stage mode.** The word is now Mode: engine_H's `g_StageMode`, matching the C's own `StageMode`
  typedef (engine_8013C98C.c, engine_8012F5F4.c); the engine card owns engine bss. In ovl_H: `ClearStageMode`,
  `OpenStageMode`, `StageModeUpdate`, `CloseStageMode`. Two ovl36 globals were the **same addresses** as engine_H
  rows under other names (0x80115110 `g_StageMenu`, 0x8011DB24 `g_StageMenuUpdate`). They now carry the engine's
  names (`g_StageMode`, `g_StageFrameHook`); define each once, in the engine's symbol file.
* **Clash checks.** `r278_clash_check.py` writes `r278_clash_check.txt`. It checks style; the same name at another
  address in the same link scope, in any batch (H, ML / MM and family shapes); the symbol files; every identifier
  in include/ and src/; C keywords and symbol_addrs_psyq.txt. **0 clashes in the 59 new names.** It also looks for
  an engine or EXE address named differently by two scopes, a check r276 ran only inside one scope. On r277's files
  it finds exactly the two stage-menu globals above; after r278 it finds 0. A test run with planted names
  (SetScript, PlaySound, MemCardInit, a duplicate stage name, a bad style) flags all five.
* **engine_H comment-only rows (r277's "if time allows").** 10 more were read, drawn with
  `random.Random("278:engine-comment")` from the 135 whose r272 evidence is only a comment citation:
  HeadingTo, IsOnScreen, GetCameraHeading, HeadingToPlayer, AddDrawModeAt, g_NextActorId, PathHitsModelTwoCells,
  WorldToLocal16, GetMessageAnswer, DebugDrawActorLine. All 10 fit the C. Only the "Debug" in DebugDrawActorLine
  rests on thin ground: its one caller (sc01_084) draws red tick-marked ruler lines.

**Recommendation after r278:** all five H batches (exe_H, engine_H, stage_H, abil_H, ovl_H) are "apply as is",
with the usual match check.

**Still "review"** (none of it blocks applying):
1. The 56 kept flag / progress-number names in stage_H. They are accurate; better names can come later.
2. The 77 stage_H rows with nothing mechanically checkable, and r277's four UNSURE stage words ("Tough", "Bgm",
   "Glow", "Face"). Not changed.
3. Rulings 2 and 3 above (Pkg_Name, package data without g_) are still open.
4. Outside the H batches: engine_ML `MoveEffect` (0x801473EC) also sets Musashi's +0x44 bit 31 and is probably
   another generic helper. stage_family_shapes.csv F014's evidence text still says "SetEffectAccel" (r275 text, not
   a name). Neither was touched.
