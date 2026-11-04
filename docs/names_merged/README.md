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
