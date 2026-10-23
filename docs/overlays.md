# The overlays on MAIN.CD (r121, 19 Oct 2026)

MAIN.CD (indexed by LIST.CD) holds every piece of code the EXE loads at run time apart from the stage images. Most
entries are PAC chains (tools/ability_art.py `pac_blocks`); the code is the type-1 block, copied whole to an overlay
slot (the EXE's table D_80072C70): its first word is the overlay ID, the code follows. The **mode overlays** go to slot
0, **0x800CEDF8**, loaded and run by the mode handlers (docs/mode_dispatcher.md); the **ability packages** go to slot 2
(0x800CAE08) or slot 3 (0x800CCB1C). `make overlays` (tools/extract_overlays.py) writes `disc/overlays/main_NN.bin`
(the entry from the code block to its end, sound blocks included: what the PC build's recompiler reads) and, for the
split overlays, `disc/overlays/code/<name>.bin`: exactly the bytes the game copies, the targets of the checks.

## Survey

| Split | MAIN.CD | ID | What | Payload / code | Functions | -O0 | EXE calls (still asm) | Port today |
|---|---|---|---|---|---|---|---|---|
| ovl38 | 0, 1 (same) | 0x38 | licence screen | 19996 B / 1.5 KB | 11 | 0 | 15 (3) | 10 matched; the 11th as a PC copy (pc/native/ovl_boot.c) |
| **ovl39** | 3, 4 (same) | 0x39 | title screen and its menu, the logo movie player (PsyQ's movie sample, LIBPRESS VLC.OBJ linked in) | 121884 B / 18 KB | 58 + 2 library | 16 | 59 (5) | recompiled (`ov39_`, tools/recomp.py) |
| **ovl36** | 10 | 0x36 | the field: the mode while Musashi is in a map (map changes, pause menu, items, ability loader, dust sprites); its data (the text font and more) runs to the stage image at 0x80128158 | 365404 B / 18 KB | 145 | 0 | 61 (6) | recompiled (`ov36_`) |
| **ovl37** | 11 | 0x37 | the developer debug menu (CHECK LIST) | 24240 B / 17 KB | 21 | all 21 | 17 (2) | interpreted (pc/interp.c) |
| **ovl3a** | 7 | 0x3A | the cut legend prologue, retail-era build, unreachable (docs/cut_prologue.md) | 9600 B (raw) / 3 KB | 19 | 0 | 10 (3) | not run (restoring it is a port card) |
| **ovl3b** | 8 | 0x3B | the trial version's end screen (mode 13 loads it) | 840 B | 6 | 0 | 7 (2) | not run |
| (not split) | 9 | 0x2D | an older build of the prologue, linked at 0x800CD348 against an earlier EXE (its calls land inside retail functions) | 2544 B | ~12 | 0 | 3 | not run; cannot link against the retail EXE's symbols |
| **ovl13-ovl2f** | 13-41 | 0x13-0x2F | ability packages, slot 2 (docs/abilities.md; below) | 0.3-7 KB each | 5-32 each | 0 | 1-3 each | interpreted |
| **ovl30-ovl35** | 42-47 | 0x30-0x35 | packages for slot 3 (below) | 0.6-9 KB each | 4-44 each | 0 | 0-2 each | interpreted |

Entry 2 has no code; entries 5 and 6 are the trial version's scene-select pictures; entry 12 (no ID word, 2403
functions, 18 -O0) is a stage engine image; entry 48 is data. "EXE calls" counts the distinct EXE functions the
overlay's code calls; "still asm" those not yet matched in src/. The two LIBPRESS functions (DecDCTvlcSize,
DecDCTvlc, 0x800D3204 / 0x800D3234) are hand-written library code, kept as an `asm` subsegment
(symbol_addrs_ovl39.txt).

Mostly code: ovl37, ovl3a, ovl3b. Mostly data: ovl36 (18 KB of code in 357 KB) and ovl39 (18 KB in 119 KB).

## Split and build

* `<name>.yaml` per overlay (vram 0x800CEDF8): `[0x0, rodata, <name>_id]`, any data before the code (the title's file
  names, the debug menu's jump table and strings) as a `data` subsegment with `linker_section_order: .rodata`, then
  the C files, then `data` to the end. `make check-<name>` rebuilds the overlay from asm and C and compares it with
  `disc/overlays/code/<name>.bin`; `make check` runs them all with the EXE, ovl38 and the stage.
* Sources in `src/<name>/`. The title is three files: `ovl39.c` (-O2, 0x800CEEC8 on), `ovl39_800D0100.c` (-O0,
  0x800D0100-0x800D1E18) and `ovl39_800D1E18.c` (-O2 to the library code). The debug menu is one -O0 file. The -O0
  ones are in the Makefile's `O0_FILES`.
* Function names are splat's `func_XXXXXXXX`, the names the recompiler (with its `ov39_` / `ov36_` prefix) and
  the port already use. Because every mode overlay loads at the same address, **names collide** (`func_800CEF04` is in
  ovl36, ovl38 and ovl39): set `$env:TWINBLADE_OVL = "<name>"` before `draft.py`, `cmp_all.py`, `cmp_func.py` and
  `put_func.py` (PowerShell, as always), so they read `asm/<name>` and place into `src/<name>` only.
* Matching recipes for the overlays: docs/decomp_recipes.md section 7 (and section 6 for -O0).

## Matched (r124, 19 Oct night)

| Overlay | Matched | Parked | Left |
|---|---|---|---|
| ovl39 (title) | 55 / 58 (16 -O0, 39 -O2) | 3 | none unattempted |
| ovl36 (field) | 129 / 145 (r150, 22 Oct: +6) | 10 (D1984, D1B80, D1B10, D23D0 matched, D2CA8 matched, CFAD0, D0D7C, D0E30, D1658, D1E28 / D1EBC, D2D10, plus CFE60 below) | 6, all large: func_800CFE60 (hand file at 161 vs 159: a register pair and 8 bytes of frame), func_800D06E8, func_800D128C, func_800D2650, func_800D27DC, func_800D29F8 (m2c drafts in the r150 worktree's build/work/r150/o36) |
| ovl37 (debug) | **21 / 21** (all -O0) | 0 | done |
| ovl3a (cut prologue) | 17 / 19 | 2 | none unattempted |
| ovl3b (trial end) | 5 / 6 | 1 | none unattempted |

221 / 249 over the five (ovl38 10 / 11 besides). r124 took ovl36 from 93 to 123: the step-sequence callers from func_800D3238 up, the four field frame loops (func_800CEFD0-func_800CF3B8, written with labels and `goto` so the loop pass hoists nothing), the area tests (func_800CFC5C one `if` per map id), the save-file and package loaders (func_800D0214, func_800D0488), the item table walks (func_800D10EC, func_800D11F0), the area-kind helper func_800D1DB0, the map-change step (func_800D1BF8) and the camera-follow pair (func_800D1FC8, func_800D20C0). The debug menu's nine large pages all matched at the first compile:
the CHECK LIST entry (func_800CEF00), the selector (func_800CFDB4: a category table D_800D4B64 of
`{ name[12]; items; count }` with 0x24-byte items, `{ name[0x20]; map id }`), the option page (func_800CF28C: a
13-case jump table over the cursor, the clock and the flag toggles), the status line (func_800D04F4) and five cheat
presets (func_800D0BDC, func_800D1254, func_800D1B00, func_800D235C, func_800D2BC4: stats in D_80078E78, flags with
func_80029124, counters with func_800291A0). The cut prologue's C (src/ovl3a/ovl3a.c) is its step machine: the logo,
the two "C:\TIMPACK\OPDEMO" picture loads, the scroll and the wait for a press; only the two draws are still asm.

The title's movie player is PsyQ's movie sample: `DECENV` (vlcbuf, imgbuf, rect, slice, isdone, plus one word) at
D_800EC9A4, strSync (func_800D298C), strNext (func_800D27A0), strNextVlc (func_800D2704), strCallback
(func_800D24D0), the default environment (func_800D2394) and the play loop (func_800D1E9C); the MDEC helpers
func_800D2D68-func_800D30D0 are LIBPRESS-style (DecDCTReset, DecDCTin, DecDCTout, the in / out syncs with their
timeout counters, the timeout report).

**r150 (22 Oct, Fable):** matched func_800D1754, func_800D23D0, func_800D185C, func_800D2CA8 (parks below, levers in
docs/decomp_recipes.md section 7, r150 rows) and two of the eight large ones, func_800D24A0 and func_800D02D0; ovl36
129 / 145. Still parked after a Fable round: func_800D1984 / D1B80 (the `step++` store through a0, the call's copy of
p: seven forms), func_800D1B10 (`return 0` set last needs its own block), func_800D0D7C (the `(u16)r` mask before
`>> 8`: the r pseudo must have unknown bits), func_800D1658 (`s32 r` fixes the frame but loses the `lh v0; move s0,v0`
copy and the `sll/sra` return that `s16 r` gives), func_800CFAD0 (the 0xFFFFFF constant built as two scheduled
instructions: not GCC 2.7.2's one-insn `li`).

Parked (templates in build/work/, one lever each):

* func_800CFE00 (ovl39, park_o39_CFE00.c): register choice only. The original keeps 0x80120014 in a1 and 0x80120220
  in a2 before the RECT stores and adds the offset into s0 in the call's delay slot; six address forms tried.
* func_800CFC1C (ovl39, park_o39_CFC1C.c): one mask. The original ANDs the target pixel with 0xFFFF8000 from a hoisted
  s4; ours folds `t & ~0x7FFF` of a zero-extended load to `andi 0x8000` (u16 and u32 tried).
* func_800CF3E8 (ovl39, park_o39_CF3E8.c): the 469-instruction title draw (ten sprite packets, double-buffered).
  Direct indexing reloads the frame index after every store (1493 instructions); a local frame index and a pointer per
  packet give 376. The original loads the frame once, and stores each packet's tpage word and second clut in the
  array-indexed form, the other fields through a pointer: look for the macro shape.
* func_800CEF50 (ovl3b, park_o3b_CEF50.c): two sprite packets, every store right; only the order the constants are
  loaded in differs. Four field orders tried.
* func_800CF408 and func_800CF6D0 (ovl3a, park_o3a_CF408.c, park_o3a_CF6D0.c): four and six DR_TPAGE + SPRT packets
  from the prim pointer D_800A5E60 into the OT. The original reloads the frame index after every tag store, which
  `D_800AA60C[D_800AF630.frame]` (a struct member, so the store may alias it) reproduces (174 / 178 instructions); a
  plain `D_800B9A02` is loaded once. What is left is register choice: the original keeps x + 160 in s3, adds 256 to y
  in place and loads the tpage words into s-registers in its own order, with one saved register fewer. The params
  updated in place (`a -= 160`) and three statement orders tried.
* func_800D1754 (ovl36, park_o36_D1754.c with the next three): the original holds &D_800AE6A8 in s0 across the first
  call (a struct global used twice) and reads it through s0; a one-member struct over the symbol was not enough.
* func_800D1984, func_800D1B80 (ovl36): one store: `p->step++` stores through a0 (the copy of p made for the call)
  where ours stores through s0. Both branch orders tried.
* func_800D1B10 (ovl36): `p->step++; p->unk15 = 0; return 0;` allocates v1 for the step where the original uses v0
  and sets the return value last; both statement orders tried.
* func_800D23D0 (ovl36, park_o36_D23D0.c): an SVECTOR turned into angles (`-ratan2(y, SquareRoot0(x*x + z*z))`,
  `ratan2(x, z)`); one instruction short (36 / 37). Tried s32 and s16 returns for ratan2; untried: the product order,
  SquareRoot0's return type, the load order of the three components.
* func_800D2CA8 (ovl36, park_o36_D2CA8.c): a binary-to-BCD loop (`n % 10` per nibble, shifted by a second
  argument). The m2c-shaped form (a copy m of n, `n /= 10; r |= (m - n * 10) << s; m = n;`) has the original's 26
  instructions with other registers; the plain `n % 10` form is one short.

* func_800CFAD0 (ovl36, park_o36_CFAD0.c): the field's sprite packet; 2 instructions: the original completes the
  0xFFFFFF mask (`ori a3`) after `li v0,5` and `la a2`, ours before. 66 variants of the statement order and macros.
* func_800D0D7C and func_800D0E30 (ovl36, park_o36_D0D7C.c, park_o36_D0E30.c): the clock subtraction and difference
  (minutes wrap at 60, hours at 24). D0D7C is one `andi 0xFFFF` short (u8 params and `(u8)(...) << 8` got the rest);
  D0E30 has the instruction count, with t / r and the OR halves in other registers. Try a two-byte struct or union.
* func_800D1658 (ovl36, park_o36_D1658.c): the item-cost check; the original loads the cost into v0 and copies it to
  s0 in the bgtz slot, with one shared `sll/sra` return; ours loads twice or straight into s0.
* func_800D1E28, func_800D1EBC (ovl36, park_o36_D1E28.c): both inline func_800D1DB0 (matched as a plain function)
  and switch on it; inlined, the helper's third test comes out inverted. When they match, make func_800D1DB0 `inline`.
* func_800D2D10 (ovl36, park_o36_D2D10.c): BCD digits to glyphs; 38 / 39, the digit in t0 and its copy in v1.
* func_800D185C (ovl36, park_o36_D185C.c): the map record copy; one `lbu` (byte 3) scheduled before the `or`.
* func_800D23D0 also tried with `(s16)SquareRoot0(...)` (the cast that matched its twin func_800D2318): 38 / 36, worse.

## The ability packages (r125, 19 Oct)

Split by `tools/gen_ability_ovls.py` (`make split-abil`): `abil/ovlNN.yaml` and `abil/symbol_addrs_ovlNN.txt` per
package, named by the ID word (entry 13 is ID 0x13 ... entry 47 is ID 0x35), sources `src/abil/ovlNN.c`, all -O2.
`make check-abil` rebuilds and checks the 35 against `disc/overlays/code/ovlNN.bin` (`make check-ovlNN` one; both
part of `make check`). Symbols carry the package (`func_ovl13_800CAE0C`): the packages share their slot's address.
The EXE, stage-engine and slot-0 symbols each one uses are in its symbol file under their plain names. Layout: the ID
word, then code to the last `jr ra`, then data (state tables, the palette and its RECT); Bowl (ovl1f) and Homing
(ovl2d) have two data words and Steel (ovl28) a 31-entry jump table in front of the code (`TEXT_START`). How to
match them: docs/decomp_recipes.md section 8.

Entries 42-47 load into slot 3 (0x800CCB1C); what loads them is not traced yet (not abilities: no entry in the
field's resource table).

| Split | MAIN.CD | What | Slot | Code block | Matched (r125 / r127 / r131 / r137 / r149 / r165) of |
|---|---|---|---|---|---|
| ovl13 | 13 | ability 7, Stun | 2 | 6100 B | 12 / 12 / 14 / 14 / 14 / 14 of 16 |
| ovl14 | 14 | ability 5, Perfume | 2 | 2088 B | 8 / 9 / 11 / 11 / 11 / 11 of 13 |
| ovl15 | 15 | ability 8, Gunshot | 2 | 6768 B | 15 / 15 / 20 / 20 / 20 / 20 of 20 |
| ovl16 | 16 | ability 1, Depress | 2 | 1928 B | 8 / 9 / 11 / 11 / 11 / 13 of 13 |
| ovl17 | 17 | ability 17, Sleepy | 2 | 1492 B | 7 / 9 / 10 / 10 / 10 / 10 of 10 |
| ovl18 | 18 | ability 3, Satiate | 2 | 2712 B | 8 / 8 / 8 / 9 / 9 / 9 of 11 |
| ovl19 | 19 | ability 13, Shrink | 2 | 6760 B | 11 / 16 / 18 / 18 / 19 / 19 of 22 |
| ovl1a | 20 | ability 12, Hop | 2 | 3244 B | 13 / 14 / 14 / 14 / 14 / 14 of 14 |
| ovl1b | 21 | ability 2, Mint | 2 | 1936 B | 8 / 8 / 8 / 9 / 9 / 9 of 11 |
| ovl1c | 22 | ability 4, Antidote | 2 | 4072 B | 21 / 23 / 29 / 30 / 30 / 31 of 33 |
| ovl1d | 23 | ability 6, (6), the cut heal | 2 | 388 B | 6 / 6 / 6 / 6 / 6 / 6 of 6 |
| ovl1e | 24 | ability 18, (18), the cut timed ability | 2 | 332 B | 6 / 6 / 6 / 6 / 6 / 6 of 6 |
| ovl1f | 25 | ability 15, Bowl | 2 | 6396 B | 20 / 25 / 26 / 26 / 28 / 29 of 30 |
| ovl20 | 26 | ability 22, Firefly | 2 | 3600 B | 15 / 17 / 18 / 19 / 22 / 22 of 24 |
| ovl21 | 27 | ability 24, Sublime | 2 | 5272 B | 22 / 23 / 23 / 25 / 25 / 25 of 29 |
| ovl22 | 28 | ability 21, B.O. | 2 | 4460 B | 11 / 13 / 16 / 18 / 20 / 21 of 22 |
| ovl23 | 29 | ability 20, Rip-off | 2 | 1984 B | 8 / 8 / 9 / 9 / 9 / 9 of 11 |
| ovl24 | 30 | ability 19, Toxin | 2 | 1876 B | 7 / 7 / 9 / 10 / 10 / 10 of 10 |
| ovl25 | 31 | ability 26, Map | 2 | 5044 B | 7 / 9 / 10 / 16 / 16 / 17 of 18 |
| ovl26 | 32 | ability 9, D-Kick | 2 | 5572 B | 7 / 8 / 10 / 10 / 10 / 10 of 10 |
| ovl27 | 33 | ability 11, Fence | 2 | 3264 B | 11 / 12 / 13 / 16 / 17 / 19 of 19 |
| ovl28 | 34 | ability 16, Steel | 2 | 7444 B | 13 / 14 / 16 / 26 / 28 / 28 of 28 |
| ovl29 | 35 | ability 10, Hurl | 2 | 1248 B | 10 / 11 / 11 / 16 / 16 / 16 of 16 |
| ovl2a | 36 | ability 23, Clone | 2 | 4916 B | 17 / 22 / 25 / 26 / 26 / 27 of 28 |
| ovl2b | 37 | ability 25, Acid | 2 | 2904 B | 11 / 14 / 14 / 15 / 16 / 17 of 17 |
| ovl2c | 38 | ability 27, 3-Way | 2 | 7232 B | 15 / 15 / 20 / 20 / 20 / 20 of 20 |
| ovl2d | 39 | ability 28, Homing | 2 | 5700 B | 15 / 17 / 22 / 24 / 24 / 25 of 26 |
| ovl2e | 40 | ability 29, Grenade | 2 | 3956 B | 12 / 14 / 15 / 17 / 17 / 19 of 19 |
| ovl2f | 41 | ability 30, Javelin | 2 | 4100 B | 11 / 12 / 13 / 14 / 14 / 15 of 15 |
| ovl30 | 42 | a slot-3 package | 3 | 636 B | 1 / 3 / 3 / 4 / 4 / 4 of 4 |
| ovl31 | 43 | a slot-3 package | 3 | 3912 B | 12 / 19 / 21 / 22 / 22 / 23 of 23 |
| ovl32 | 44 | a slot-3 package | 3 | 8920 B | 29 / 35 / 39 / 43 / 44 / 44 of 44 |
| ovl33 | 45 | a slot-3 package | 3 | 5432 B | 15 / 21 / 21 / 21 / 21 / 21 of 21 |
| ovl34 | 46 | a slot-3 package | 3 | 7612 B | 24 / 32 / 38 / 38 / 39 / 39 of 39 |
| ovl35 | 47 | a slot-3 package | 3 | 3272 B | 6 / 7 / 7 / 10 / 10 / 10 of 12 |

Total 493 / 660 after r127 (422 after r125: 21 empty functions from splat, 46 from auto_match, 127 from 12 templates copied over their shape (abil_clone.py), 226 from the m2c bulk passes (tools/abil_bulk/), 2 by hand). r127 (20 Oct, Opus medium) added 71: about 14 from source levers applied to every draft at once (`tools/abil_bulk/rewrite.py`: s16sign, rand, table, avec, frame, rmwsort, idx, stride, mtx, amodel), the rest by hand with one.py / place.ps1 (their clones included); recipes section 8 has each lesson. 167 are left: 36 parked below (two quick rounds each, templates in build/work/h/<func>.c), the rest not tried by hand yet (`python tools/abil_bulk/left.py build/work/m2c 40 --skip <parked>` lists the nearest misses; `build/work/parked_r127.txt` holds the parked names). The GTE "Handwritten function" entries (ovl19, ovl28, ovl2d) are asm.

**r131** (20 Oct, Opus medium) added 61: **554 / 660**. 8 of them were r127 parks (struck from the list below), the rest the untried mid-size functions by hand, with their clones. The struct actor was not needed after all: the levers that did it are in recipes section 8 (r131 rows): two halfword globals as one `AVec` (`.vx` / `.vz`), a held global address as an array (`D[0]`, `rewrite.py arr`), `ACol` / `APrim` / `AObj68` in abil.h, the loop written with a backward `goto` (no loop optimizer), index through a base pointer for the 0x68-stride array, a constant in a local (held in an s-register), m2c's store order on one base being the scheduled one, `switch` on a `u32`. 106 are left: 41 parked (28 from r127, 13 from r131 including two shape twins; names in build/work/parked_r131.txt) and 65 not tried by hand yet (the larger ones: `left.py` lists them; ovl28_800CB1F8 is GTE inline asm, ovl28_800CAE88 reads v0 on entry).

**r137** (21 Oct, Opus medium) took the 65 larger ones by hand: **603 / 660** (+49). Five had matched their old drafts and were never placed. ovl28 is Steel's model renderer: func_ovl28_800CB00C walks the packet list (`switch (((h >> 24) & 0xFC) - 0x20)`) and calls one loop per primitive type (B1F8 F3, B3C0 F4, B5D0 G3, B7BC G4, BA18 FT4, BC2C GT3, BE28 GT4), all GTE code in gte.h's macros. The lessons are recipes section 8's r137 rows. 57 are left: the 41 parks below (r127 and r131), 15 r137 parks (most one register pair or one expression off) and func_ovl35_800CCDE8 (331 instructions, a state machine with a 16-entry ring and VectorNormalSS: not tried). Names in build/work/parked_r137.txt.

**The split question (r137), settled in r149:** ovl28's code starts at 0x800CAE80, not at the package's entry 0x800CAE88: tools/gen_ability_ovls.py (stream T, decomp/ovl28-start) now puts abil/ovl28.yaml's code start at 0x78, and the entry function is func_ovl28_800CAE80, reading D_800B99DA where r137 had an uninitialised v0 (merged at 40dc620; the other 34 packages regenerate identically). Note for the gate: a yaml or generator change needs `make split-abil` before the check, so that merge was committed with the gate skipped and `make regress R="abil"` run by hand (35 / 35).

**r149** (22 Oct, Fable 5.1 high, stream F-A of the 20x overtime; worktree branch decomp/abil-parks merged at bc8b951 and 7251675) took the parks: **617 / 660** (+14: 13 r127 parks and 1 r131 park; ovl28, ovl32 and ovl34 are complete). The levers were read from the GCC 2.7.2 source and are recipes section 8's r149 rows and section 4's r149 bullets (cse's branch following and canonical-register rule, jump.c's if/else rewrite, the store-flag rewrite, MOVE_RATIO, combine and hard-register copies). 43 are left: 42 parked below with the cause narrowed where a round was spent (names in build/work/parked_r149.txt; the hand files of the r149 rounds are build/work/h and build/work/v in the C:\tw\abil-parks worktree) and func_ovl35_800CCDE8 (not tried). Cost about 1.4 weekly points a match at 20x; the 5-hour bar (74 % after 2 h 50 min, shared with four other streams) was the limit. The full notes: the dispatcher's side-session notes, r149-ability-parks.md.

**r165** (22 Oct, Fable 5.1 high, round 2 on the same worktree branch, merged at 48a35aa and 9a2e801): **631 / 660** (+14: func_ovl2e_800CB874, func_ovl27_800CB2C8, func_ovl27_800CB058, func_ovl2b_800CB480, func_ovl31_800CD57C, func_ovl2e_800CB4E4, func_ovl2d_800CB860, func_ovl2a_800CB910, func_ovl2f_800CB3BC, func_ovl1f_800CB7B0, func_ovl16_800CB304, func_ovl22_800CBC7C, func_ovl25_800CB288, func_ovl1c_800CB03C, func_ovl16_800CAF84; ovl16, ovl27, ovl2b, ovl2e, ovl2f and ovl31 are complete). Levers in recipes section 8's r165 rows and section 4's r165 bullets (in-struct `*(p + k)`, the shortened `short / constant`, sched1's pick rules, output_block_move's `la` path, cse's paradoxical-subreg fold). 29 left: 28 parked below (the r165 notes narrow most of them: CB2AC, CB708, CB56C / CB138, CB0D0 / CB168, CB0C8, CB328, CB578, CB358, CB6F4, CD314, CB9F8, CB4A4, CBE38, CB470, CB944 / CB8A4, CC024, CAF94; CAF90 and CB8A0 are CAF84's twins with their own constants, a quick Opus job) and func_ovl35_800CCDE8 (not tried). The variants of every round are build/work/v in the worktree, with sched.py (the sched1 trace) and dump.py (any -d dump); the full notes: the dispatcher's side-session notes, r165-ability-parks.md.

**Parked (r137)**, templates in build/work/h/<func>.c (r165 took the first nine):

* func_ovl13_800CB138: the r131 park func_ovl13_800CB56C's problem; r165: the original folds each `la D_800AE620` into the block move (three scratch registers), so each copy's address pseudo had one use; ours shares one pseudo across both copies (cse) and copies four words at a time; a user pointer, a dead reassignment, an initialised declaration and loop notes change nothing.
* func_ovl18_800CB168: the twin of func_ovl23_800CB0D0; r165: 112 / 112 with the counter's post-increment inside the argument list and a u32 switch; left: the `addu v1,v0` copy before the compare (+ 8 bytes of frame): cse folds the s16 copy's paradoxical subreg back to t in the then-block, so `x -= 0xE0` reads t and the copy dies.
* func_ovl21_800CB82C: one short; &o (the stack primitive) is set in the flag test's delay slot in the original, ours just before use (s3 / s4 swap with &k).
* func_ovl1b_800CB0C8: two short; ours keeps &ang in s0 (and so saves s4), the original rebuilds `addiu a0,sp,0x50` at each of its three uses while `&v` through a pointer variable is shared in s0 in both; r165: not found what keeps cse from merging the three `fp + 0x50` computations.
* func_ovl18_800CB328, func_ovl19_800CB578: count right; one register pair (the model / the second object; the colour table / the slot index); func_ovl2f_800CB3BC (arg0 / the counter) matched in r165 with the loop inits written right before the loop. r165 on CB328: regdump mo 8 refs / 66 against o 10 / 96 (the original allocates o first), plus the m.t[] / v store schedule of CB2AC.
* func_ovl19_800CB9F8: count right; the fifth (stack) argument is read at entry in the original (combine does not fold the parameter load into its a0 copy), and `addiu a0,sp,0x10` for the last call sits right after the first call (`ps = &s` after `func_80017DC4(rot, &m)`).
* func_ovl2d_800CB6F4: one short; the original ends with `return 0` falling into the epilogue and the s1 arms return 1; r165: rewriting the s1 half that way lets jump.c restructure the s0 half (63).
* func_ovl35_800CD314: the original reloads the global pointer D_8011F758 after each store to the model; r165: AF stores instead of AModel members do not make cse forget the symbol-addressed load.
* func_ovl21_800CB4A4: two short; the clamps are right (shared store of a bound variable), the decay half's value / flag registers swap.
* func_ovl1f_800CB300: two short; the argument scheduling of its two func_80146A6C calls.

**Parked (r131)**, notes in each (templates in build/work/h/<func>.c, most one or two instructions off). Matched in r165 and removed here: func_ovl27_800CB058 (the in-struct pointer read). Matched in r149 and removed here: func_ovl22_800CB484 (the `v = D & 1; if (v) ... else ...` lever).

* func_ovl25_800CB0B0: the twin of func_ovl25_800CB288 (matched in r165: the counter stored right after it is computed, so cse reloads the tested halfword; the frame follows): apply the same.
* func_ovl22_800CB484: only registers (the model in v1, 0x100 / 0x120 in v0 in the original).
* func_ovl21_800CC024: load order around the `(t & 0x1F) << 7` kept in s1; r149: an explicit `b = a << 7` gives `sll s1` and `move a0,s1` for rsin, but the arms then pass b too where the original recomputes `sll a0,a0,7` from a (in a0).
* func_ovl14_800CAF90, func_ovl22_800CB8A0: func_ovl16_800CAF84 matched in r165 (the table pointer and counter set right before the loop; a K&R s32 definition for its 0/1/2-argument callers); these two have the same structure with their own constants (abil_clone: not the same shape): write them from CAF84's body.
* func_ovl20_800CB278: the else arm works through a copy of the new object in s3 (so the arms are not cross-jumped); r149: every copy, re-read or chain spelling is canonicalised by cse into the one pseudo (make_regs_eqv: a copy is kept only when it lives beyond the extended block and later than the original), and the original also stores the spawn result from v0 while testing s0; not reproduced (cse dumps in the worktree's build/dump).
* func_ovl20_800CB470: only the s0/s1 swap (arg0 / the model); r149 regdump: arg0 4 refs / 55 (0.145) against the model 4 / 50 (0.160), so the model is allocated first; the original's source gives the actor a fifth reference or the model a shorter life.
* func_ovl13_800CB56C: ours keeps the identity matrix D_800AE620's address in an s-register for both copies; the original recomputes it.
* func_ovl23_800CB2AC: r165: a second variable for the second 0x2C read, `v.vy = -AF(arg0, s32, 0x2C)` and the chain `AF(0x18) = AF(0x1A) = D[k & 3]` fix the top (109 / 109); left: sched1's pick order of the three boosted `lh` loads (B66 / B5E / B62) and the `a2 = a1` copy (ours boosts the copy and hoists B5E / B62 together, the original keeps each load within two insns of its store).
* func_ovl23_800CB0D0 (ovl18_800CB168 is its twin): 119 / 119 after r165 but for the copy `addu v1,v0` before the compare and the in-place `addiu v1,v1,0xE0`: an s16 `x = t` whose then-block `x += 0xE0` cse rewrites to read t (the paradoxical subreg folds), so the copy dies.

**Parked (r127)**. Matched in r165 and removed here: func_ovl2e_800CB874, func_ovl27_800CB2C8, func_ovl2b_800CB480, func_ovl31_800CD57C. Matched in r149 and removed here (13, recipes section 8 r149 rows): func_ovl20_800CB3C0, func_ovl28_800CC9AC, func_ovl20_800CB688, func_ovl1f_800CB1A0, func_ovl19_800CBEC0, func_ovl34_800CD240, func_ovl1f_800CB760, func_ovl32_800CD494, func_ovl2b_800CB55C, func_ovl22_800CB59C, func_ovl20_800CB190, func_ovl27_800CB5DC, func_ovl28_800CC0A0. Matched in r131 and removed here: func_ovl34_800CCFA8, func_ovl34_800CCFDC, func_ovl34_800CD0DC (two halfword globals as one AVec), func_ovl2a_800CB3B4 (an array global, model stores through AF), func_ovl2d_800CAED8, func_ovl26_800CAFD0, func_ovl25_800CB3B4 (index through a base pointer), func_ovl2d_800CB4D4 (goto loop). Retried without luck: func_ovl20_800CB688.

* func_ovl1c_800CB944, func_ovl1c_800CB8A4: `li a0,0x41` before `ori v0,0x8000` for func_80146A6C's stack argument; ours sets v0 first (if/else flipped makes it worse).
* func_ovl2a_800CB708: r149: three word assignments plus `f(a, AF(a, s32, 0x18))` reuse a1 as the original (27 / 27); r165: the three loads are boosted and picked in LUID order once ready; the 0x2C load is ready a cycle late because its second consumer (the a1 copy) is picked after the three stores (the potential-hazard rule), and no statement order or struct-copy form moves it.
* func_ovl19_800CBE38: arg0 in s0 and the clamped value in s1 in the original, swapped in ours; r149 regdump: arg0 6 refs / 17 (0.706) against the value 5 / 14 (0.714); reusing arg1 as the value made it worse.
* func_ovl14_800CB358: CB304 / CBC7C's shape with a D_80078EC1 == 5 test (both matched in r165: `s32 r = AF(0x12)` read after the 0x28 update); left (70 / 70): the actor's a0 copy for the call is the join block's first insn in the original, mid-block in ours (sched2 picks it when every load is blocked behind a store; a0 is set twice here, so the copy is not boosted).
* func_ovl1b_800CAF94: AVec v, AVec r, AMtx m on the stack right; two off: ours keeps `&r` (sp+0x18) in s0, the original recomputes it (its s0 holds the 0x34 object to the end?).
* func_ovl21_800CBF28: `p = &D_ovl21_800CC250` after the call and `func_ovl21_800CC024(arg0)` give 47 / 47 (r149); left: the original uses v0 directly for the store, the test and the first argument while keeping the model in s2 (the CB278 problem), and s0 / s1 / s2 rotate.

## Order

1. ovl39, ovl37, ovl3a, ovl3b: done but for the parked functions (3 + 0 + 2 + 1, a Fable day).
2. ovl36, the biggest payoff for the port (it is recompiled today): 8 left at -O2, all large: func_800CFE60 (161
   instructions), func_800D02D0 (110), func_800D06E8 (344, a switch with a jump table), func_800D128C (243),
   func_800D24A0 (87), func_800D2650 (99), func_800D27DC (135), func_800D29F8 (172). 14 parked (a Fable day).
5. The ability packages: split (r125), 631 / 660 matched after r165; 29 left, 28 of them parked (above), func_ovl35_800CCDE8 not tried. Entry 9
   last or never.

For the port, a matched overlay lets the build compile its C in place of the recompiled or interpreted code (its own
port card; nothing in pc/ was changed here).
