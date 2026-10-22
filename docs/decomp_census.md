# Decomp census: the whole tail (r141, 21 Oct 2026)

How big is everything left after the tracker's counts, and how much of the stage-specific code is the same code at
shifted addresses? Counts and descriptions only (no game code or data). Rerun with `python -I tools/stage_census.py`
(`--md out.md` writes the per-stage table below, `--csv out.csv` writes it as CSV; read-only: it reads disc/pac4 and
src/ only, about 10 seconds). The numbers move as the village (SC03_001, the reference) gets more matched.
**Per-stage matched / total (r145):** docs/stage_status.md, written by `python -I tools/stage_progress.py --md`; every
image is split and checked (`make check-stg`, docs/decomp_pilot.md Part 4).

## 0. After the clone pass (r146, 21 Oct 2026)

r146 generalised tools/stage_clone.py: every function in C in any image (the village or a split stage) is a source,
and every still-asm function anywhere with the same census shape gets its C, renamed (tools/stage_bulk/clone_all.py
runs it over all 139 split stages, compiles, places with each stage's check and repeats until a pass places nothing).
The census now classes against every matched function, not only the village's.

| | r141 / r145 (before) | r146 clone pass | r146 end (after SC06_032 bulk + a second clone pass) |
|---|---|---|---|
| Stage own functions in C (`make stage-progress`) | 469 / 23 756 (2.0 %) | 6 311 (26.6 %) | **7 025 / 23 756 (29.6 %)** |
| Clones placed | (estimate: 5 093, 20 % of 24 930, stubs included) | **5 842 measured** (25 % of the 23 287 that were asm), from 469 sources in 329 shapes | +631 (from SC06_032's 83 bulk matches): **6 473 in all** |
| Clones whose copy does not compile to the same bytes | | 36 | 42 (0.6 %) |
| Still asm | 23 287 | 17 445 | 16 731 |
| Distinct shapes still to match | 7 543 | 7 440 (cloning removes occurrences, not shapes; the 103 fewer are SC02_031's r143 matches) | **7 360** |
| Of them in one stage only | 5 059 (5 325 functions) | 5 029 (5 294) | 5 029 (5 294) |
| Shapes in 2+ stages | 2 484 (14 167 functions) | 2 411 (12 115) | 2 331 (11 395): matching one places all its copies |

By size (instructions, distinct shapes left at the end): 1-8 381; 9-16 892; 17-32 2 052; 33-64 2 257; 65-128 1 225;
129-256 421; 257+ 132. The rebuilt estimate is in docs/decomp_pilot.md Part 5.

## 0a. After the bulk sweep (r147, 21 Oct 2026)

r147 ran the bulk method (tools/stage_bulk/round.ps1: m2c drafts, levers, placement with each stage's check; two
rounds at most) over every distinct split stage (132; the seven alias members were left to the clone pass), in order
of shared shapes, with clone_all.py after each of six groups (tools/stage_bulk/sweep.py; docs/decomp_pilot.md Part 6).

| | r146 end | r147 end |
|---|---|---|
| Stage own functions in C (`make stage-progress`) | 7 025 / 23 756 (29.6 %) | **13 530 / 23 757 (57.0 %)** (the count now sees old-style definitions: +25) |
| Placed by r147 | | 6 504: 3 997 bulk + 2 507 clones of them |
| Still asm | 16 731 | 10 227 |
| Clones whose copy does not compile to the same bytes | 42 | 72 |
| **Distinct shapes still to match** | 7 360 | **4 198** (3 162 matched by bulk: **43 % of the shapes**) |
| Of them in one stage only | 5 029 (5 294 functions) | 2 817 (2 927) |
| Shapes in 2+ stages | 2 331 (11 395 functions) | 1 381 (7 229) |

Shapes left by size (instructions), r146 -> r147, and the share bulk matched: 1-8 381 -> 55 (86 %); 9-16 892 -> 170
(81 %); 17-32 2 052 -> 817 (60 %); 33-64 2 257 -> 1 430 (37 %); 65-128 1 225 -> 1 176 (4 %); 129-256 421 -> 418
(1 %); 257+ 132 -> 132 (0 %). **What is left is mostly large: 1 726 of the 4 198 shapes (41 %, 250 k of the 341 k
instructions) are over 64 instructions**, where bulk matches almost nothing.

## 1. Live counts (`make BUILD=build/work/census progress`, 21 Oct, own build dir)

| Area | Matched / total | Left |
|---|---|---|
| Main EXE (src/*.c) | 585 / 783 | 198 |
| Stage engine + the village's own code (SC03_001) | 1942 / 2871 (r138 was moving it) | 929 |
| Ability packages (35) | 603 / 660 | 57 |
| Mode overlays ovl39 / ovl36 / ovl37 / ovl3a / ovl3b | 55/58, 123/145, 21/21, 17/19, 5/6 = 221 / 249 | 28 |
| ovl38 (licence screen) | 10 / 11 | 1 |
| **Counted by the tracker** | **3361 / 4574** (73 %) | 1213 |

The tracker's d-match line (main EXE) said 577 / 783 from 14 Oct; it is 585 / 783 (75 %, which the percent already was).
Not in any count: the PsyQ library, 710 asm symbols from `_SpuInit` (0x8003A444) on in slus_007.26.yaml (asm
subsegment `psyq`; the PC build replaces it with the shim; it is SDK code, not the game's), the older prologue
MAIN.CD 9 (about 12 functions, not split), and MAIN.CD entry 12, which docs/overlays.md calls a stage engine image
(2403 functions, 18 at -O0; not extracted by `make overlays` and not checked here: if it is the same engine it adds
nothing).

## 2. The stage images

There are **140** images in disc/pac4 (the brief said 134), 133 of them with distinct own code (identical own code:
SC01_005 = 006, SC02_000 = 003, SC03_014 = 015, SC03_118 = 119, SC04_018 = 019, SC03_126 = SC04_021 = SC05_019).
The engine (0x80128158-0x8017BE9C) is identical to SC03_001's after masking the relocated addresses in **all 140**
(100 % of its words). **The own code starts at 0x8017BE9C, not 0x8017BEA4**: every other stage has a two-word stub
(`jr ra; nop`) there, and SC03_001's first own function starts there (the symbol func_8017BEA4 names an address inside
it); SC03_001 has 499 functions of its own, not 481. The own code ends at the first zero word after a function's
return (what follows are pointers: data); every instruction in every range decodes as MIPS I. In all: 1 245 440
words (4.98 MB) of own code in 24 930 functions.

How a function is classed (tools/stage_census.py): its *shape* is its instruction words with the relocated parts
masked (the lui in 0x8017-0x8020 and the offsets off the register it loaded, jal targets in the own code; jals into the
engine keep their target). The same shape is the same code at shifted addresses (spot-checked by hand in SC04_018:
the clones differ from their SC03_001 originals only in data-address immediates, 2 to 3 words in 43 to 49).

| Class | Functions | Instructions |
|---|---|---|
| SC03_001's own, matched | 344 | 6 666 |
| SC03_001's own, still asm | 155 | 10 967 |
| **Clone of a matched SC03_001 function** (copy its C) | 5 093 (20 %) | 66 871 |
| Shared: not such a clone, but the shape occurs again (match once, copy) | 14 441 | 885 833 |
| Unique: the shape occurs once in all 140 images (764 of these have an opcode-only twin elsewhere) | 4 897 | 275 103 |
| All | 24 930 | |

### Distinct shapes still to match (what a template-and-clone approach must still do by hand or bulk, once each)

**7 543 distinct shapes** (SC03_001's 155 asm ones included, clones of a matched function excluded) for 19 492
occurrences; 6 460 groups if shapes that differ only in registers and immediates are merged.

| Appears in N stages | Shapes | Instructions (one copy each) | Occurrences |
|---|---|---|---|
| 1 | 5 059 (67 %) | 281 163 | 5 325 |
| 2 | 941 | 50 819 | 1 945 |
| 3-5 | 831 | 51 504 | 3 126 |
| 6-10 | 471 | 27 741 | 3 523 |
| 11-30 | 200 | 12 582 | 3 361 |
| 31-200 | 41 | 2 517 | 2 212 |

By size (instructions): 1-8: 398 shapes; 9-16: 931; 17-32: 2 116; 33-64: 2 308; 65-128: 1 237; 129-256: 421;
257 and over: 132 (426 k instructions in all). So the stage tail is **mostly real, stage-specific code**: only 20 % of
its functions copy a function of the village that is matched today, and two thirds of the shapes left occur in one
stage only. The shared engine (774 of its functions still asm) is matched once for all 140 images and is not in
these tables.

### Per stage

Regenerated after r147's bulk sweep (`--md`). Own code = from 0x8017BE9C. Matched = in C in its own file (splat's
empty stubs included). Clone still asm = its shape is matched in some image but the copy did not compile to the same
bytes. Shared = still asm, the shape occurs elsewhere (another image, twice in the image, or in its identical twin) and
is matched nowhere. Unique = still asm, occurs once in all 140. (The r141 table above this one classed against the
village only; its totals stay in the class table above for comparison.)

| Stage | Own code | Bytes | Functions | Matched (C, stubs too) | Clone of a matched, still asm | Shared (also elsewhere) | Unique | Same code as |
|---|---|---|---|---|---|---|---|---|
| SC01_000 | 8017BE9C-8017EBBC | 11552 | 33 | 21 | 0 | 3 | 9 |  |
| SC01_001 | 8017BE9C-8018380C | 31088 | 96 | 54 | 0 | 10 | 32 |  |
| SC01_004 | 8017BE9C-8017F1D0 | 13108 | 46 | 28 | 0 | 16 | 2 |  |
| SC01_005 | 8017BE9C-80182364 | 25800 | 133 | 92 | 0 | 41 | 0 | SC01_006 |
| SC01_006 | 8017BE9C-80182364 | 25800 | 133 | 92 | 0 | 41 | 0 | SC01_005 |
| SC01_008 | 8017BE9C-8017F744 | 14504 | 58 | 38 | 0 | 19 | 1 |  |
| SC01_009 | 8017BE9C-8018292C | 27280 | 139 | 82 | 0 | 21 | 36 |  |
| SC01_074 | 8017BE9C-8017E5AC | 10000 | 57 | 42 | 0 | 4 | 11 |  |
| SC01_077 | 8017BE9C-80186AD0 | 44084 | 215 | 125 | 3 | 50 | 37 |  |
| SC01_080 | 8017BE9C-8018350C | 30320 | 144 | 71 | 0 | 12 | 61 |  |
| SC01_084 | 8017BE9C-80186800 | 43364 | 211 | 124 | 0 | 10 | 77 |  |
| SC02_000 | 8017BE9C-8018ABB0 | 60692 | 313 | 185 | 2 | 126 | 0 | SC02_003 |
| SC02_003 | 8017BE9C-8018ABB0 | 60692 | 313 | 177 | 10 | 126 | 0 | SC02_000 |
| SC02_004 | 8017BE9C-8017DC90 | 7668 | 33 | 24 | 0 | 4 | 5 |  |
| SC02_005 | 8017BE9C-80190894 | 84472 | 559 | 317 | 0 | 21 | 221 |  |
| SC02_011 | 8017BE9C-80190CE4 | 85576 | 525 | 308 | 2 | 146 | 69 |  |
| SC02_015 | 8017BE9C-8017E1F8 | 9052 | 46 | 38 | 0 | 8 | 0 |  |
| SC02_016 | 8017BE9C-80184430 | 34196 | 177 | 111 | 0 | 39 | 27 |  |
| SC02_017 | 8017BE9C-8018A488 | 58860 | 364 | 217 | 0 | 77 | 70 |  |
| SC02_021 | 8017BE9C-8017FA7C | 15328 | 69 | 49 | 0 | 7 | 13 |  |
| SC02_026 | 8017BE9C-801860D0 | 41524 | 204 | 99 | 0 | 101 | 4 |  |
| SC02_027 | 8017BE9C-8018B1F4 | 62296 | 324 | 172 | 0 | 125 | 27 |  |
| SC02_028 | 8017BE9C-8018B3F8 | 62812 | 333 | 172 | 3 | 150 | 8 |  |
| SC02_031 | 8017BE9C-80184C24 | 36232 | 194 | 152 | 0 | 27 | 15 |  |
| SC02_035 | 8017BE9C-80184484 | 34280 | 152 | 68 | 1 | 83 | 0 |  |
| SC02_037 | 8017BE9C-80183BC0 | 32036 | 146 | 80 | 1 | 57 | 8 |  |
| SC02_039 | 8017BE9C-8017F0B0 | 12820 | 48 | 23 | 0 | 25 | 0 |  |
| SC02_041 | 8017BE9C-80184D80 | 36580 | 193 | 109 | 0 | 81 | 3 |  |
| SC03_001 | 8017BE9C-8018D220 | 70532 | 499 | 347 | 6 | 122 | 24 |  |
| SC03_002 | 8017BE9C-801854B0 | 38420 | 261 | 176 | 1 | 70 | 14 |  |
| SC03_003 | 8017BE9C-8017F278 | 13276 | 55 | 42 | 0 | 12 | 1 |  |
| SC03_006 | 8017BE9C-8018C594 | 67320 | 397 | 251 | 1 | 119 | 26 |  |
| SC03_007 | 8017BE9C-8018738C | 46320 | 255 | 118 | 1 | 61 | 75 |  |
| SC03_010 | 8017BE9C-8017FEAC | 16400 | 102 | 75 | 0 | 21 | 6 |  |
| SC03_011 | 8017BE9C-8018121C | 21376 | 159 | 119 | 0 | 5 | 35 |  |
| SC03_012 | 8017BE9C-8017E0FC | 8800 | 38 | 30 | 0 | 6 | 2 |  |
| SC03_013 | 8017BE9C-80180EE4 | 20552 | 124 | 87 | 0 | 21 | 16 |  |
| SC03_014 | 8017BE9C-8018B520 | 63108 | 317 | 183 | 1 | 133 | 0 | SC03_015 |
| SC03_015 | 8017BE9C-8018B520 | 63108 | 317 | 181 | 3 | 133 | 0 | SC03_014 |
| SC03_023 | 8017BE9C-8017EE9C | 12288 | 67 | 52 | 0 | 6 | 9 |  |
| SC03_024 | 8017BE9C-80186EC0 | 45092 | 273 | 166 | 0 | 79 | 28 |  |
| SC03_028 | 8017BE9C-8018B98C | 64240 | 296 | 146 | 0 | 59 | 91 |  |
| SC03_029 | 8017BE9C-801877C4 | 47400 | 276 | 177 | 1 | 75 | 23 |  |
| SC03_030 | 8017BE9C-80181E00 | 24420 | 127 | 82 | 0 | 8 | 37 |  |
| SC03_031 | 8017BE9C-8018231C | 25728 | 146 | 100 | 0 | 30 | 16 |  |
| SC03_089 | 8017BE9C-80189618 | 55164 | 213 | 117 | 1 | 88 | 7 |  |
| SC03_090 | 8017BE9C-8018BA3C | 64416 | 257 | 132 | 1 | 119 | 5 |  |
| SC03_091 | 8017BE9C-8018C8E4 | 68168 | 272 | 141 | 1 | 125 | 5 |  |
| SC03_092 | 8017BE9C-80184CB4 | 36376 | 219 | 145 | 1 | 45 | 28 |  |
| SC03_093 | 8017BE9C-80185E8C | 40944 | 195 | 102 | 1 | 90 | 2 |  |
| SC03_094 | 8017BE9C-80187888 | 47596 | 209 | 92 | 1 | 104 | 12 |  |
| SC03_095 | 8017BE9C-80180EE8 | 20556 | 106 | 51 | 0 | 51 | 4 |  |
| SC03_096 | 8017BE9C-80180A68 | 19404 | 97 | 48 | 0 | 48 | 1 |  |
| SC03_097 | 8017BE9C-80185E48 | 40876 | 235 | 140 | 0 | 92 | 3 |  |
| SC03_098 | 8017BE9C-801852D4 | 37944 | 173 | 87 | 1 | 85 | 0 |  |
| SC03_099 | 8017BE9C-801833D4 | 30008 | 136 | 60 | 1 | 74 | 1 |  |
| SC03_100 | 8017BE9C-801848A0 | 35332 | 171 | 94 | 0 | 76 | 1 |  |
| SC03_101 | 8017BE9C-8018387C | 31200 | 160 | 86 | 0 | 73 | 1 |  |
| SC03_102 | 8017BE9C-80186134 | 41624 | 124 | 55 | 1 | 59 | 9 |  |
| SC03_103 | 8017BE9C-801840E4 | 33352 | 142 | 68 | 1 | 71 | 2 |  |
| SC03_104 | 8017BE9C-8018AC74 | 60888 | 248 | 137 | 0 | 109 | 2 |  |
| SC03_105 | 8017BE9C-8018A2FC | 58464 | 229 | 101 | 0 | 30 | 98 |  |
| SC03_107 | 8017BE9C-8018245C | 26048 | 127 | 73 | 0 | 47 | 7 |  |
| SC03_108 | 8017BE9C-80180C54 | 19896 | 75 | 34 | 0 | 41 | 0 |  |
| SC03_109 | 8017BE9C-8017E300 | 9316 | 56 | 44 | 1 | 10 | 1 |  |
| SC03_110 | 8017BE9C-80181D20 | 24196 | 100 | 61 | 0 | 37 | 2 |  |
| SC03_111 | 8017BE9C-801848D4 | 35384 | 142 | 93 | 1 | 41 | 7 |  |
| SC03_112 | 8017BE9C-801856DC | 38976 | 158 | 83 | 1 | 65 | 9 |  |
| SC03_113 | 8017BE9C-80182D8C | 28400 | 100 | 61 | 0 | 39 | 0 |  |
| SC03_114 | 8017BE9C-8017E9F4 | 11096 | 47 | 31 | 0 | 8 | 8 |  |
| SC03_115 | 8017BE9C-80180460 | 17860 | 104 | 62 | 0 | 35 | 7 |  |
| SC03_116 | 8017BE9C-80182864 | 27080 | 70 | 42 | 0 | 8 | 20 |  |
| SC03_117 | 8017BE9C-80184870 | 35284 | 189 | 130 | 0 | 32 | 27 |  |
| SC03_118 | 8017BE9C-8018991C | 55936 | 317 | 197 | 2 | 118 | 0 | SC03_119 |
| SC03_119 | 8017BE9C-8018991C | 55936 | 317 | 195 | 4 | 118 | 0 | SC03_118 |
| SC03_121 | 8017BE9C-80182138 | 25244 | 91 | 57 | 0 | 6 | 28 |  |
| SC03_124 | 8017BE9C-8018A8C4 | 59944 | 373 | 243 | 1 | 101 | 28 |  |
| SC03_125 | 8017BE9C-80183D34 | 32408 | 220 | 147 | 1 | 70 | 2 |  |
| SC03_126 | 8017BE9C-8017F22C | 13200 | 55 | 42 | 0 | 13 | 0 | SC04_021 SC05_019 |
| SC04_000 | 8017BE9C-80183238 | 29596 | 176 | 116 | 2 | 49 | 9 |  |
| SC04_002 | 8017BE9C-801883A4 | 50440 | 268 | 146 | 0 | 117 | 5 |  |
| SC04_003 | 8017BE9C-80182140 | 25252 | 134 | 79 | 0 | 53 | 2 |  |
| SC04_004 | 8017BE9C-80184674 | 34776 | 190 | 107 | 0 | 81 | 2 |  |
| SC04_005 | 8017BE9C-80187AA8 | 48140 | 244 | 141 | 0 | 100 | 3 |  |
| SC04_006 | 8017BE9C-8017FB88 | 15596 | 86 | 54 | 0 | 28 | 4 |  |
| SC04_007 | 8017BE9C-80185B40 | 40100 | 201 | 123 | 1 | 75 | 2 |  |
| SC04_008 | 8017BE9C-8017EA78 | 11228 | 47 | 28 | 0 | 16 | 3 |  |
| SC04_009 | 8017BE9C-8017EAA4 | 11272 | 73 | 58 | 0 | 9 | 6 |  |
| SC04_010 | 8017BE9C-8017E150 | 8884 | 51 | 39 | 0 | 5 | 7 |  |
| SC04_011 | 8017BE9C-801903E0 | 83268 | 435 | 184 | 0 | 65 | 186 |  |
| SC04_012 | 8017BE9C-8017E5B4 | 10008 | 52 | 34 | 0 | 12 | 6 |  |
| SC04_015 | 8017BE9C-801844E4 | 34376 | 243 | 158 | 1 | 67 | 17 |  |
| SC04_016 | 8017BE9C-8017FFB0 | 16660 | 72 | 47 | 0 | 9 | 16 |  |
| SC04_018 | 8017BE9C-8018CF28 | 69772 | 487 | 338 | 1 | 148 | 0 | SC04_019 |
| SC04_019 | 8017BE9C-8018CF28 | 69772 | 487 | 336 | 3 | 148 | 0 | SC04_018 |
| SC04_020 | 8017BE9C-80183300 | 29796 | 199 | 134 | 1 | 62 | 2 |  |
| SC04_021 | 8017BE9C-8017F22C | 13200 | 55 | 42 | 0 | 13 | 0 | SC03_126 SC05_019 |
| SC05_000 | 8017BE9C-8017E240 | 9124 | 52 | 41 | 1 | 6 | 4 |  |
| SC05_001 | 8017BE9C-80185A1C | 39808 | 206 | 122 | 0 | 63 | 21 |  |
| SC05_002 | 8017BE9C-801801DC | 17216 | 74 | 54 | 0 | 20 | 0 |  |
| SC05_003 | 8017BE9C-80182514 | 26232 | 113 | 63 | 0 | 49 | 1 |  |
| SC05_004 | 8017BE9C-80181620 | 22404 | 96 | 62 | 1 | 29 | 4 |  |
| SC05_005 | 8017BE9C-801823F4 | 25944 | 123 | 74 | 0 | 47 | 2 |  |
| SC05_006 | 8017BE9C-8017F414 | 13688 | 62 | 45 | 0 | 16 | 1 |  |
| SC05_007 | 8017BE9C-80180A10 | 19316 | 114 | 71 | 0 | 38 | 5 |  |
| SC05_008 | 8017BE9C-80182968 | 27340 | 175 | 103 | 0 | 31 | 41 |  |
| SC05_009 | 8017BE9C-8017EA78 | 11228 | 70 | 50 | 0 | 14 | 6 |  |
| SC05_010 | 8017BE9C-80188954 | 51896 | 220 | 131 | 0 | 19 | 70 |  |
| SC05_011 | 8017BE9C-8017DCCC | 7728 | 41 | 35 | 0 | 2 | 4 |  |
| SC05_017 | 8017BE9C-8018CEEC | 69712 | 474 | 322 | 1 | 117 | 34 |  |
| SC05_018 | 8017BE9C-801868E8 | 43596 | 305 | 201 | 1 | 67 | 36 |  |
| SC05_019 | 8017BE9C-8017F22C | 13200 | 55 | 42 | 0 | 13 | 0 | SC03_126 SC04_021 |
| SC06_000 | 8017BE9C-8018823C | 50080 | 321 | 184 | 0 | 76 | 61 |  |
| SC06_006 | 8017BE9C-80181D60 | 24260 | 143 | 81 | 0 | 9 | 53 |  |
| SC06_008 | 8017BE9C-801857C8 | 39212 | 174 | 110 | 0 | 54 | 10 |  |
| SC06_010 | 8017BE9C-801869A4 | 43784 | 149 | 79 | 0 | 48 | 22 |  |
| SC06_011 | 8017BE9C-80180404 | 17768 | 100 | 63 | 0 | 29 | 8 |  |
| SC06_013 | 8017BE9C-8017EB80 | 11492 | 57 | 40 | 0 | 15 | 2 |  |
| SC06_014 | 8017BE9C-8017FEE4 | 16456 | 85 | 52 | 0 | 16 | 17 |  |
| SC06_015 | 8017BE9C-8017EA3C | 11168 | 53 | 39 | 0 | 14 | 0 |  |
| SC06_016 | 8017BE9C-80184E4C | 36784 | 181 | 100 | 0 | 35 | 46 |  |
| SC06_018 | 8017BE9C-80193588 | 95980 | 297 | 123 | 0 | 171 | 3 |  |
| SC06_020 | 8017BE9C-80185010 | 37236 | 150 | 77 | 0 | 71 | 2 |  |
| SC06_022 | 8017BE9C-8018D2CC | 70704 | 274 | 132 | 1 | 123 | 18 |  |
| SC06_024 | 8017BE9C-8018F7A4 | 80136 | 299 | 141 | 1 | 130 | 27 |  |
| SC06_025 | 8017BE9C-80184C48 | 36268 | 204 | 122 | 0 | 15 | 67 |  |
| SC06_027 | 8017BE9C-8017DF88 | 8428 | 40 | 27 | 0 | 7 | 6 |  |
| SC06_029 | 8017BE9C-8018C518 | 67196 | 294 | 137 | 0 | 31 | 126 |  |
| SC06_030 | 8017BE9C-80181E0C | 24432 | 88 | 49 | 0 | 19 | 20 |  |
| SC06_032 | 8017BE9C-801932D8 | 95292 | 290 | 116 | 0 | 172 | 2 |  |
| SC06_033 | 8017BE9C-801917E8 | 88396 | 263 | 110 | 0 | 137 | 16 |  |
| SC07_000 | 8017BE9C-80182630 | 26516 | 151 | 93 | 0 | 18 | 40 |  |
| SC07_001 | 8017BE9C-801814E0 | 22084 | 86 | 49 | 0 | 9 | 28 |  |
| SC07_002 | 8017BE9C-8018679C | 43264 | 211 | 115 | 0 | 41 | 55 |  |
| SC07_006 | 8017BE9C-8018A3C0 | 58660 | 86 | 46 | 0 | 15 | 25 |  |
| SC07_007 | 8017BE9C-80182EE4 | 28744 | 244 | 168 | 0 | 11 | 65 |  |
| SC07_008 | 8017BE9C-8017D2B4 | 5144 | 18 | 15 | 0 | 3 | 0 |  |
| SC07_009 | 8017BE9C-8017DD58 | 7868 | 62 | 52 | 0 | 1 | 9 |  |
| SC07_010 | 8017BE9C-80181F74 | 24792 | 156 | 84 | 0 | 8 | 64 |  |
| SC07_011 | 8017BE9C-8017E634 | 10136 | 80 | 66 | 0 | 7 | 7 |  |

## 3. What the village says about matching by size

The village (engine + SC03_001's own code, 2 869 functions) after about 8 points of the weekly bar of bulk and hand
rounds (r19 passes, r132, r133), matched per function size (instructions):

| Size | Matched | Still asm | Matched share |
|---|---|---|---|
| 1-8 | 422 | 21 | 95 % |
| 9-16 | 751 | 99 | 88 % |
| 17-32 | 470 | 277 | 63 % |
| 33-64 | 206 | 252 | 45 % |
| 65-128 | 70 | 178 | 28 % |
| 129-256 | 15 | 75 | 17 % |
| 257+ | 7 | 26 | 21 % |

Applying those shares to the tail's 7 543 distinct shapes: about **4 000 shapes fall to bulk and easy hand rounds** and
about **3 500 (276 k instructions) are hard**; the 1 213 functions the tracker already counts as left (774 of them in
the engine) are as hard as these.

## 4. Estimate (weekly points of the 5x all-models bar; 100 points = one full week at 5x)

Rates from docs/usage_log.md: bulk and easy rounds 0.003-0.01 per function (r132: 1 247 functions for about 1 point;
about 0.005 on average over r19 to r137); hard hand work 0.05 (r137 0.06, r127 0.04) rising to 0.1-0.2 (r19 pass 3:
0.17) as the easy ones go; Fable about 0.4 per function and about 0.9 of the Fable bar. A heavy Opus card costs about
2-5 points.

| Part | Low | Likely | High |
|---|---|---|---|
| Tail, easy shapes (4 000) | 12 | 24 | 40 |
| Tail, hard shapes (3 500) | 176 (0.05 each) | 353 (0.10) | 705 (0.20) |
| What the tracker counts as left (1 213) | 60 (0.05) | 120 (0.10) | 240 (0.20) |
| Infrastructure: 140 split configs and source files, the stage clone copier, a check per image, a larger make | 10 | 15 | 25 |
| **Total, 5x points** | **about 260** | **about 510** | **about 1 010** |
| Weeks of the whole 5x bar | 2.6 | 5.1 | 10 |
| At 20x (four times the room) | 65 points, 0.65 weeks | 128, 1.3 weeks | 253, 2.5 weeks |
| Heavy Opus sessions (about 4 points each at 5x) | 65 | 130 | 250 |

Decomp gets only part of the bar (the port, rips and the catalogue use the rest): at about 50 points a week it is
5 / 10 / 20 weeks at 5x and 1.3 / 2.6 / 5 weeks at 20x.

What would change it:
* The hard rate. Nothing in the usage log measures functions over 64 instructions at scale; the village's leftovers
  (r138) are the first test. A lever that fixes a whole family (docs/decomp_recipes.md section 9) moves many shapes at once,
  which is why the easy part is cheap.
* The clone step. One match is copied to every occurrence for free (abil_clone.py: 127 of the packages' 493 at the time
  came from 12 templates). Done for the stages in r143 / r146 (tools/stage_clone.py, keyed on this tool's shape):
  6 473 of 6 515 copies matched, see section 0.
* Fable. It saves sessions, not points (0.4 per function against about 0.1 for Opus), and is worth it for a function Opus
  failed twice; the Fable bar, not the all-models bar, limits it.
* 20x gives four times the room; it does not make a function cheaper.
* Not in the figures: the PsyQ library (710 symbols), data tables and scripts, MAIN.CD entries 9 and 12. The stage tail
  could also keep running as translated code (as the unmatched rest does today); matching it is for reading and editing.

Summary: about **24 900 functions in 140 images**, a fifth of them copies of matched village code, **7 500 distinct
shapes still to match**, of which about 3 500 are hard. Everything counted: about 260 / 510 / 1 010 points at 5x
(2.6 / 5 / 10 weeks of the whole bar), 65 / 128 / 253 at 20x (0.65 / 1.3 / 2.5 weeks).
