# The stage engine (split 2026-10-13)

Every stage image (`disc/pac4/*.bin`, loaded to 0x80128158) begins with the **same engine code**:
0x80128158-0x8017BEA4 (0x53D4C bytes) is identical in all 134 images apart from relocated addresses
(the immediates of `lui`/`addiu`/loads/stores and `jal` targets). After it each stage carries its own code
(SC03_001: 0x8017BEA4-0x8018D220) and its data (models, maps, scripts, text, tables) to the end of the image.
Many functions of the stage-specific part recur in other stages at shifted addresses.

## Split and build
* `stage.yaml` splits SC03_001 (the village): the engine in `src/stage/engine.c` (0x80128158-0x8012F5F4) and
  five files from 0x8012F5F4 to 0x8017BEA4 (2296 functions between them; see Source files below),
  `src/stage/sc03_001.c` (481), `asm/stage/data/`, and a 3-byte binary tail (the image length is not a multiple of 4).
* `make check-stage` rebuilds the image byte-identical (`make check` checks the EXE, ovl38 and the stage).
* Engine function names live in `symbol_addrs_stage.txt`. After renaming there, re-run
  `python -m splat split stage.yaml` and delete `build/src/stage/*.o` (make does not track the included asm).
* The matching tools work on stage functions: `tools/draft.py <name>`, `tools/cmp_all.py`, and
  `tools/put_func.py` (it builds and checks `check-stage` for functions in `src/stage/`). Run them from PowerShell.

## Source files
The engine was several C files in the original; a boundary shows when evidence lines up (16 Oct 2026):
* Inline helpers. engine.c's non-static `inline` helpers are inlined into later functions of the same file and called
  with `jal` from other files. Inlined: func_8012AD80 into func_8012CC88, func_8012B2CC into func_8012E8E0,
  func_8012E32C into func_8012F40C, FaceHelper (0x8012F214) into func_8012F49C, so one file runs at least to
  func_8012F568. Called with `jal`: func_8012AD80 from func_80130858, func_8012C218 from func_801319E0 and
  func_80131D68, func_8012B2CC from func_80131B14, func_8012F038 from func_80132F40 (and more later ones).
* Data order. Each file's initialised data follows its declarations, files in link order. The data at 0x8018D870 (the
  default motion record of func_80131170) comes before func_8012F828's (0x8018D87C), after the damage step's
  (0x8018D860, engine.c). 0x8018D9CC repeats 0x8018D860 byte for byte: a second file's own copy.
* The two handler tables (0x8018D8A0, 0x8018D9DC) hold the reaction steps from func_8012F5F4 to 0x80131EE4.
So `engine_8012F5F4.c` starts at func_8012F5F4 (the first reaction step; func_8012F568, noting a hit on Musashi, is
called from engine.c's hit tests and stays there). Its end is not known yet: it runs to the end of the engine until
the next boundary is found the same way. Text has no padding between files (4-byte alignment), so code alone does not
show a boundary. To split again: add the subsegment to `stage.yaml`, move the functions into the new file with the
declarations they use, rewrite its INCLUDE_ASM paths to `asm/stage/nonmatchings/<file>`, re-run
`python -m splat split stage.yaml` (it only adds the object to the linker script and writes the new asm directory),
then `make check`.
* -O0 files (r113, 19 Oct). Two runs of the engine were compiled without optimisation (fp frames; the only 18 such
  functions in the image), so the engine after 0x8012F5F4 is five files: `engine_8012F5F4.c` (-O2, to 0x8013B568),
  `engine_8013B568.c` (-O0: the sequence player at D_801EF3F8 and the relocation of its loaded blocks, to
  0x8013C98C), `engine_8013C98C.c` (-O2: the rumble sequence, the stage-mode steps, to 0x80144B9C),
  `engine_80144B9C.c` (-O0: the stage loader func_80144B9C and the room-record lookup func_801457A4, to
  0x801458E0) and `engine_801458E0.c` (-O2, to the end of the engine). The -O0 ones are in the Makefile's
  `O0_FILES`; each new -O2 file declares only what its functions use. Recipes: docs/decomp_recipes.md section 6.

## Matched so far (d-parts)
ShowAllParts, HideAllParts, SetDisplayFlag20, ClearDisplayFlag20, ClearDisplayFlag10, UpdateFlag10Part21
(flag 303), UpdateWeaponParts (parts 21, 22, 24, 25), RunStateHandler4E (table at 0x8018F378 in SC03_001),
FaceLoad. Parked: FaceSet (0x80154ED8, only the register holding the object differs).

## Notes for asset work (not acted on)
* In SC03_001 the face rectangle table used by FaceLoad is at 0x8018F338 (per stage; 0x80185684 in dump_10's stage).
* FaceSet hands FaceLoad the address 0x800D8D10 (inside the field overlay) instead of a face word when the game-mode
  flag 0x80078E96 bit 0x8000 is set: likely a default or placeholder face request.
