# Project Twinblade: decomp

A matching decompilation of Brave Fencer Musashi (PlayStation, NTSC-U, SLUS-00726), built with GCC 2.7.2 (PsyQ)
and checked byte for byte against the original executable, overlays and stage images.

This repository is a backup of the decomp only. It contains no game data: no disc files, no assembly that splat
writes from the game (`asm/`), no extracted text, pictures or sound. Building it needs your own copy of the game,
extracted into `disc/` (which `.gitignore` keeps out of the repository).

The working repository is local. Each commit here is a snapshot of its decomp files, made by
`tools/publish/publish_decomp.py` from the allowlist in `tools/publish/manifest.txt`; `docs/publishing.md` explains it.

Where to start:

- `docs/decomp_recipes.md`: what GCC 2.7.2 wants, by symptom
- `docs/test_infrastructure.md`: the regression suite (`tools/regress.py`) and the commit gate
- `docs/stage_status.md`: matched functions per stage image
- `docs/overlays.md`, `docs/stage_engine.md`: how the code is split
