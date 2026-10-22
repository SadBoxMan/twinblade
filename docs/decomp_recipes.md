# Decomp recipes: what GCC 2.7.2 wants, by symptom

The matching build compiles `src/` with GCC 2.7.2 (PsyQ) at `-O2` (`main.c`, `code_8002C410.c` and the stage engine's `engine_8013B568.c` and
`engine_80144B9C.c` at `-O0`, section 6). This
file is the working reference for turning a diff into a source change: find the symptom in the left column, write
the source the way the right column says. Every entry was confirmed by a byte match in this project; the function
named is the example to read. Add an entry the moment a new lesson is confirmed by a match (LuciDin, 2026-10-14):
one line in the table, or a paragraph in section 4 if it needs explaining. Keep the roadmap for history; keep this
for recipes.

## 1. The loop

```
python tools/draft.py func_XXXXXXXX              asm (comments stripped) and m2c's draft
python tools/cmp_all.py build/work/batchN.c -O2  compile every function in the file on its own, print MATCH or the diff
python tools/cmp_func.py <file> func_X 2.7.2 -O2 the diff of one function (left: original, right: yours, !! = differs)
python tools/variant_search.py t.c func_X -O2 --show 1   try every {{a|b|c}} combination in t.c, print the best
python tools/put_func.py build/work/pN.c         insert the matched functions into src/ (the file with the INCLUDE_ASM),
                                                 run `make check`, revert on failure
python tools/regdump.py t.c func_X -O2           how GCC placed each variable: refs, live length, local- or global-alloc,
                                                 the register, the global allocation order (for a register-only diff)
```

* Run them from **PowerShell** with `$env:PATH = "C:\msys64\usr\bin;" + $env:PATH`; the Git Bash shell hangs in maspsx.
* `-O0` for anything in `main.c` (0x80010178-0x800123F0), `code_8002C410.c`, and the stage's
  0x8013B568-0x8013C98C and 0x80144B9C-0x801458E0 (section 6); `-O2` elsewhere.
* A batch file is `#include "common.h"`, `#include "psyq.h"` (and `work.h`, `gte.h` as needed), the externs, then the
  functions. `cmp_all` compiles each function alone with all of the file's declarations.
* Before placing, check every extern against the target `src/` file (`grep -n "D_xxxx" src/code_8002C8BC.c`): the
  placement file must use the **same declaration text** or none at all; a different prototype or type is a
  redefinition error and `put_func` reverts. Typedefs the src file already has (SoundChan, SoundSlot, LightDir, Pad,
  Mtx, VECTOR, Blk24, Pair) must not be repeated with different text.
* Functions below 0x8002C8BC go in `code_800123F0.c`, above in `code_8002C8BC.c`; split a batch per target file.
* `pc/gen.py`'s `build/pc/report.txt` is the authoritative list of what is still assembly (`asm stubs:`); a grep
  for `^[a-z].* func_X(` matches `extern` lines too and lies.
* `variant_search.py --shape` ranks the variants with the register fields ignored: for a large function, get the
  structure (opcodes, offsets, branches) right first, the register choice after. Variants are written with LF line
  endings: gcc 2.7.2's preprocessor does not join a backslash before CR LF, so multi-line macros failed (fixed
  2026-10-15).
* **cc1 exits with status 2816 and writes nothing** (Git Bash shows exit 0 and an empty .s): our cc1 is a 64-bit MSYS
  build of GCC 2.7.2 and crashes in the delay-slot pass (`-fno-delayed-branch` compiles, which finds it) where the
  original compiler did not. Seen on a search loop whose pointer is used after it: the pass moves `p += 3` into the
  loop branch's slot and adds `p -= 3` on the exit itself (the original has exactly that). Write it out:
  `if (v >= p[0]) { p += 3; do { t = p[0]; p += 3; } while (v >= t); p -= 3; }` gives the same instructions
  (func_80130D48). Bisect a crash with cut-down copies of the function before suspecting the source.
* **cmp_all / cmp_func compare a symbol's relocations by shape, not by address**: an array-of-struct store
  `%lo(D_80126A28)(at)` matched ours, `D_801269F0[i].unk28`, although the original's field is at +0x38 and ours at +0x28.
  Only `put_func`'s `make check` catches it (sha1 mismatch). When a placement fails with no compile error, build the
  overlay (`make build/stage/stage.bin`), compare it word by word with disc/pac4/SC03_001.bin (the stage loads at
  0x80127000), and read the differing `%lo` immediates: they give the field's real offset (func_801378F0, 19 Oct).
  put_func also re-inserts a typedef whose lines are already in the file when its batch is placed a second time:
  place later functions of a batch from a file holding only `#include "common.h"` and the functions.
* A variant that resists two rounds is parked: template in `build/work/`, one line in `docs/roadmap.md`, and (if the
  PC build needs it) a functional copy in `pc/native/near_miss.c`.
* **Switches with jump tables can be placed** (2026-10-15). The build runs `tools/jtbl_relabel.py` after maspsx: it
  drops the compiler's copy of each jump table and points the code at the original `jtbl_XXXXXXXX` in the split's
  data (found by its case addresses), because the original tables carry per-object 8-byte padding a merged C file
  cannot reproduce. Nothing to do in the source: write the `switch`, match the code with `cmp_func`, place it. A
  function whose table count or entry count disagrees with the data stops the build with a message. First:
  func_8001AAD0.

## 2. Symptom to source

| The diff shows | Write the source as | Example |
|---|---|---|
| a register copy of a value before the first branch, then the older register used in arithmetic | `d = w = b - a;` (cse keeps a plain copy, but reads the older register inside arithmetic) | func_80012E6C |
| a global reloaded for the slot and again for the return value | `next = D_8006AEFC; next++;` (a local that shadows the global forces the reloads) | func_80034CF0 |
| the then-block falls through and the final `return 0` block follows the `return b` block | `if (b != 0) { ...; return b; } return 0;` | func_8002FD14 |
| `&&` conditions return 0 and a value is loaded lazily at the join label | `if (A && B) return 0; v = *(s32 *)file;` with the load as the first statement after | func_80019A24 |
| a parameter is masked once and used for two calls | `s32 p = port;` then use `p` | func_80014E24 |
| a switch becomes a balanced compare tree | assign the switch's result to a variable in every case | func_8001AE90 |
| every case ends `j end; addu v0,zero,zero` (the last falls into it), and only the register choice differs | `break` out of each case and write one `return 0;` after the switch: a `return 0` per case lets the first scheduling pass move `v0 = 0` up, which takes v0 away from the case's own values | func_8001ACF0 |
| early `return 1`s jump into the last block's `addiu v0,zero,1` (cross-jumped) where the original keeps its own `j end; addiu v0,zero,1` | put the shared tail inside the final `if`, with a label the other path jumps to: `if (f() != 0) { done: g = 0; return 1; } return 0;` | func_8001ABBC |
| a global array of 6-byte records read as `%lo(D_X)` and `%lo(D_X+4)` with one index register | declare it as an array of structs and read the members (`D_80063138[id].sound`), not `u8` plus offsets | func_8001ABBC |
| another function's whole body inside this one (its arguments loaded into saved registers first, its `return 0`s jumping to a `beqz v0` test) | the callee is `inline` and defined earlier in the file: GCC 2.7.2 inlines it and still emits its own copy unchanged (`inline s32 func_80019A24(...)`) | func_8001AF34 |
| a jump table whose extra entries lead to the exit | list those values as empty cases (`case 0: case 3: break;`): with fewer than 5 case labels GCC builds a compare tree instead | func_8001AF34 |
| the case blocks of a switch in another order | the blocks follow the source order of the cases (a case whose block was merged into an identical one elsewhere leaves no trace): reorder the cases | func_8001B0D4 |
| a global's address held in a register (`lui s1; addiu s1, %lo(D_X)`) and other globals reached as offsets from it (`0x58(s1)`, `addiu a2, s0, -0x18`), or fields that splat never names because nothing addresses them directly | the globals are **members of one struct**: declare it (a symbol for its start in `undefined_syms_extra.txt`) and write `g.member`; the plain code then matches. The CD streamer's 0x800AE6F0-0x800AE7B3 is `g_CdStream` (CdStream). With separate globals func_8001A114 needed explicit pointers (each assigned once) to match; with the struct it matches written plainly | func_8001A114, func_8001A338 |
| several cases jump back to one shared block that sits in an early case (`j .L_first`), where your build keeps the last copy and the early ones jump forward | GCC's cross-jumping keeps the last copy; the original wrote the jumps: a label in the first case (`lid_open: state = 9; break;`) and `goto lid_open;` in the others | func_80019AF8 |
| a test laid out as `beqz v0, end` + `j shared` where yours is `bnez v0, shared` | invert it: `if (!(x & 0x10)) break; goto shared;` | func_80019AF8 (state 8) |
| a call's result stored and tested straight from v0, where yours copies it to the shared result variable first | write the assignment in the condition: `if ((D_800AE6E8 = func_8001A114()) != 0)` | func_80019AF8 (state 10) |
| a struct member read through another member's register (`lw a0, -92(s0)`) where the original reads it directly | CSE ties the struct's address to the register already holding a member's address (here `&done`, kept for a call's argument), once a later member access needs the struct address as a value. Read the member that triggers it into a temporary **before** the others (`r = g.soundCount; g.state++; if (r == 0) g.state++;`); the GCC 2.7.2 RTL dumps (`cc1 ... -ds -dt`, in `.cse` and `.cse2`) show where the fold happens | func_80019AF8 (state 6) |
| a struct's address loaded into a saved register at the very top of the function (before the first test), its members direct in the first block and register-relative after a switch dispatch | an explicit local pointer: `CdStream *cd = &g_CdStream;` and `cd->member` throughout (in the entry block the second CSE pass turns them back into direct addresses) | func_8001A338 |
| constants kept in registers across a loop (`addiu a1, zero, 0x80` before it) in the original, materialised inside the loop in yours | a `goto` into the loop from outside stops GCC's loop optimizer: write the shared exit code in each place (GCC's cross-jumping merges the copies later) instead of jumping to a label inside the loop | func_8001A338 (case 1) |
| a shared tail (`srl; sw; j; sw`) that several cases jump to sits in the last of them in the original, but in yours they merge into an earlier one or not at all | the tails must be identical instruction for instruction: compute each case's value before the shared statements (`dst = table[..]; cd->words = ..; cd->cursor = dst;`) so the scheduler and allocator give every copy the same shape | func_8001A338 (inner cases 7, 1, 2) |
| a call argument computed (with its branch) before another argument's address is loaded | compute it into a temporary first: `pos = (cd->words + 3) / 4; CdGetSector(D_80079A70, pos);` | func_8001A338 |
| `An argument type that has a default promotion can't match an empty parameter name list declaration` | an old-style `extern void f();` meets a definition with `u8`/`s16` parameters: declare the full prototype | func_8001A338 |
| the scratchpad stack switch with `sw ra` scheduled after `lui $6,0x1f80; ori` (-O2) | `SetSpadStack()` passes the address as an `"r"` operand (include/psyq.h): GCC loads it into $6 as ordinary code; the hand-coded `lui/ori` inside the asm cannot move. The same macro still matches -O0 code (main.c) | func_80128564 |
| a result variable kept in a saved register (`move s0,v0`) where the original sets v0 in delay slots | an assignment before a call makes the variable live across it: set it after the calls (`if (t != 0x4B0 \|\| (f() & 0xFF) != 0) r = 1; else r = g();`) | func_8012832C |
| a loop's switch table address loaded before the loop's base pointer, `nop` at the loop head | index the array each time (`obj->script[i].value`) instead of walking a pointer: GCC hoists the table address first and makes the pointer itself; a 51-entry table needs at least six case labels down to the lowest value | func_8012ACE0 |
| no `nop` between an inline asm's `lw $29,0($29)` and the epilogue's `lw $31,16($sp)` | name the register `$sp` in the asm text: maspsx compares register names as text, so `$29` never matches the next instruction's `($sp)` and the load-delay nop is lost (SetSpadStack/ResetSpadStack in include/psyq.h) | func_80128678 |
| `return 0` set in a load delay slot (`lhu v1; move v0,zero; sh v1`) where the original has `lhu v0; nop; sh v0; addu v0,zero,zero` | make the `return 0` a shared tail: `if (--t <= 0) { ... } return 0;`. Its own block keeps the scheduler from setting v0 early, so the last value can live in v0 | func_80128ED8 (its twin func_80128DB4 matched with early returns) |
| `bgez` to the main path with `li v0,1` first, where the original has `bltz` to a `return 1` block at the end | `if (n < 0) return 1; return f(...);`: the early return becomes the branch target placed last | func_80128C98 |
| a global's value loaded before its address (`lui v0; lw v0`), where the original loads the address once into a0 and reads `0(a0)` | read it through a local pointer (`s32 *p = &D_X; if (*p == 0) f(p);`) | func_801287B8 |
| a global's load scheduled above stores through a struct pointer, where the original keeps it after them | read it as a field of its struct (`D_800AF630.unkA3C0`, not the plain extern `D_800B99F0`): GCC 2.7 assumes a fixed-address scalar never aliases an in-struct store through a pointer, so the scalar load moves; a struct field does not | func_801298F4 |
| two registers swapped between a pointer and a run of byte values (`lbu v1 / sh v1` where the original has `lbu a0 / sh a0`) | reuse one variable for all the values (`u8 c; c = *p++; l->a = c; c = *p++; ...`): one long-lived pseudo ranks below the pointer in local-alloc, so the pointer gets the first free register | func_801298F4 (found by tools/variant_search.py) |
| in a loop over a pointer and a counter, the increments (and the preheader's inits) in the other order | the order in the `for` decides it: `for (l = tbl, i = 0; i < n; l++, i++)`. A reduced giv's increment goes in just before its biv's | func_8012944C, func_8012956C |
| a fixed address (scratchpad 0x1F800000) set into s-registers at function entry, before the first test | declare it as a local with an initializer (`GsBG *bg = (GsBG *)0x1F800010;`); loop-invariant hoisting puts it at the loop head instead | func_8012956C |
| a global's address set into an s-register in each branch (`lui s0; addiu s0; lh a0,0(s0)`) before a shared `jal f; sh v0,0(s0)` tail | a pointer per call site: `{ s16 *v = &D_X; *v = f(*v, to, 4, 1); }` in each branch (likely a macro in the original). Cross-jumping merges the tails; a `static inline` helper does not give it, and neither does plain `D_X = f(D_X, ...)` | func_8012A328 |
| a frame 0x20 bigger than the saved registers and outgoing arguments need, with nothing stored there | an unused local of that size (`MATRIX unused;`): GCC 2.7 keeps the stack slot of an unused BLKmode local | func_80129CF8 |
| `lwl/lwr` + `swl/swr` pairs for an 8-byte copy | a struct copy of a 2-aligned 8-byte struct (SVECTOR). Three `lhu` then three `sh` are field-by-field copies: a 6-byte struct copy gives `lwl/lwr` + `lh` instead | func_8012A094, func_8012A1BC |
| a switch case that branches into the middle of the next case's then-block (past its load and test) with the loaded value in a register; yours re-loads, or its tail is cross-jumped with another case's | one variable for the value in both cases, and a `goto` into the then-block: `case -2: r = a->x; if (r == NULL) { ...; break; } goto ret; case -1: r = a->x; if (r != NULL) { ret: ... }`. A plain fallthrough re-tests | func_8012AAAC |
| `addiu v0,a0,0x1000; subu v1,a1,v0` where yours has `addiu v0,a1,-0x1000; subu v1,v0,a0` | GCC folds `b - (a + c)` to `(b - c) - a`; go through a temporary: `t = a + 0x1000; d = b - t;` | func_8012B608 |
| a function whose body repeats a smaller function defined just above it (the angle step func_8012B608 inside func_8012B8E4, the headings inside the turn steps) | the small one is `inline` (a non-static `inline` definition: GCC 2.7 keeps the out-of-line copy and inlines later calls in the file). Mark it `inline` where it is defined; test the caller in one file with the helper's body (cmp_all compiles each function alone, so it cannot inline) | func_8012B8E4, func_8012BA10 |
| one path jumps (`j L`) straight to a `jal` in another path's code and skips that call's argument move (`move a0,s0` missing: a0 still holds the parameter on that path) | the source repeats the code in both branches (`if (x) { if (y) { f(a); g(a); } } else if (h(a)) { f(a); g(a); }`). CSE drops the move on the path where a0 still holds `a` (no call since entry), then cross-jumping merges the rest of the copy into the other one. One shared body (a ternary, `\|\|`, goto, a flag) always keeps the move | func_801301E8 |
| a `jal` to a function that is `inline` and defined earlier in the C file (other callers inline it) | the caller is in another source file of the original: split the C file there (docs/stage_engine.md, "Source files"). Data order and duplicated constant tables confirm the boundary | func_80130858 (calls func_8012AD80) |
| an inlined copy that differs from the out-of-line one (the address taken directly, or the test the other way round) | the caller had its own copy: a `static inline` helper above the caller (placed by hand, since put_func only places functions with an INCLUDE_ASM) or the code written out | func_8012BD3C, func_8012BF10 |
| `bgez v0,L; nop; negu v0,v0` | `if ((d = a - b) < 0) d = -d;` (not `x < 0 ? -x : x`, whose registers differ). Read delay slots with the nops shown: with them filtered out this looked like a negate in the delay slot | func_8012BF7C |
| a search loop whose end pointer is set first (and the start derived from it, `addiu v1,a0,0x6480`), where yours sets the start first | the bound in a local: `StageActor *end = D_80120194; for (a = end + 96; a != end; a--)`, `ModelObj *end = D_800B3DF0;` | func_8012C31C, func_8012C284, func_8012C1DC |
| two cases cross-jumped to one call, the higher value's block placed first | a `switch` with that case written first (the dispatch still tests in value order) | func_8012C218 |
| a global flag loaded before the stores to a struct that come first in the source, where the original keeps it after them, and there is no struct it belongs to yet | declare it as an array and read element 0 (`extern u8 D_80078EAE[]; ... D_80078EAE[0]`): GCC 2.7 marks array references in-struct too, so they may alias the struct stores and stay in order | func_8012C354, func_8012C438 |
| a global re-read right after a store to a struct (`lhu v0,0(v1); sh v0,0x36(s1); lhu v0,0(v1)`), its address held in a register | an array element (`extern s16 D_801270C4[]; a->id = D_801270C4[0]; if (++D_801270C4[0] == 0) ...`): in-struct, so it may alias the store. A flag kept across a call goes through a local pointer to it (`flg = D_801274E4; *flg &= ...; call; if (*flg & 1)`) | func_8012C890 |
| a struct's neighbouring fields (Musashi's three position words) read and written through one base register (`lui s1; addiu s1,4; lw 0(s1)/4(s1)/8(s1)`) where the original addresses each one (`lui; lw %lo(D_80126B5C)`) | declare them as separate scalars (`extern s32 D_80126B5C, D_80126B60, D_80126B64;`): CSE's related-value folding joins offsets of one symbol, not different symbols | func_8012E014, func_8012E138 |
| an argument computed (`addiu a0,sp,0x10`) before the inlined code that comes ahead of the call | the call is to an earlier `inline` function taking that argument (`return func_8012C51C(&d, parent);`): inlining copies the argument into the parameter first | func_8012C588 |
| a constant in v1 where the original has v0, in a block that ends with `j end; addu v0,zero,zero` | that case must `break` to the shared `return 0`; search every case's `return 0;` / `break;` with variant_search (`{{return 0;\|break;}}` per case): the right mix can be uneven | func_8001B0D4 |
| an if/else-if chain of returns sets the result in delay slots | write the chain of `return`s, not a temporary | func_80011DF4 |
| `add` operands in the other order | `(c + k)[off]` versus `c[k + off]` choose the order | func_800346D0 (inner loop) |
| a fixed-address flag kept in a register and stored through it | `register u8 *f = &D_800A4F17; *f = v;` | func_8002D59C |
| `sltu` comparing a `u16` global with a call's masked result | the callee returns `u32` (an unsigned operand makes the comparison unsigned): `return D_80078EB8 < (func_80165658(o, a & 0x7F) & 0x7F);` | func_80165624 |
| a load-modify-store of a global through one address register (`lui v1; addiu v1; lhu 0(v1); sh 0(v1)`) | `u16 *c = (u16 *)&D_800A46CC; *c += 1;` | func_80030470 |
| a struct member store floats above a global load | the store is through a plain `u32 *` cast, not a struct member (GCC 2.7 thinks a member store cannot alias a scalar) | func_80016110 |
| `A \| (B \| K)` reassociated as `(A \| K) \| B` | write it as fold leaves it: `cg = (c << 8) \| K; col = (c << 16) \| cg \| c;` | func_8001BC6C |
| `(x & 0xFF0000) >> 8` and `((x >> 8) & 0xFF) << 16` kept as separate shifts | write exactly those two expressions | func_8003A3D8 |
| `(x & 0x800) == 0x800` compiled as `srl 11; andi 1` when the original materialises a 0/1 with a compare | `u16 t = x & 0x800; s32 ok = t == 0x800;` (the u16 temp defeats the single-bit fold) | func_80015208 (batch105) |
| an s16-cast quotient returned from an s32 function without sign extension | `s32 r = (s16)(w * m / n); return r;` | func_80012E6C |
| `rsin(a + i * 0x155)` strength-reduced into an incremented angle | write the call with the index expression; gcc makes the giv | func_800234E4 |
| the loop runs backwards (`while (--n != -1)`) for a plain fill | `while (--n != -1) *p++ = 0;` is gcc's reversed loop | func_80016714 |
| `for (i = 0; i < 10; i++)` with `i` unused in the body becomes a down-counter whose init follows hoisted invariants | write the forward loop; the init order comes out by itself | func_80015A74 |
| a 0x24-byte struct copied with a 16-byte-chunk loop | the struct must be word-aligned: `typedef struct { s32 w[9]; } Blk24;` | func_80029274 |
| the inner loop's base pointer hoisted into a saved register and copied in (`move s1,s7`) | the pointer is an invariant computed inside the outer loop (gcc hoists it); as a loop variable it is a biv and stays | func_800346D0 |
| the argument's halves (`sll 16; sra 16` and `sra 16`) computed after `i = 0` | use `(s16)a` and `a >> 16` inside the loop; gcc hoists them after the counter's init | func_800346D0 |
| two table bases in `lui at; addu at; lh %lo(sym)(at)` form inside a loop, with a loaded (non-induction) index | the two tables are one array of structs: `typedef struct { s16 lo, hi; } Pair; extern Pair tbl[]; v = tbl[i].hi;` (pointer arithmetic on a byte array hoists the symbol into a saved register and merges the two loads) | func_80031A98 |
| an array indexed by a loop variable in the `lui at; addu at; sb %lo(sym)(at)` form with the offset in a register | make the offset an explicit loop variable: `for (i = 0, off = 0; ...; i++, off += 0x60) arr[off] = 0;` (a `biv + symbol` address needs no new register; `arr[i * 0x60]` gives one pointer per array) | func_800373D0, func_80037D98 (first loop) |
| a loop exit compared against `symbol + size` with a signed `slt` | the loop counts `i` and the pointer is a giv: `for (i = 0; i < 5; i++)` with `p` derived from `i`; gcc rewrites the exit test onto the giv with `i`'s signedness | func_800373D0 (open) |
| a symbol kept across calls in a saved register (`lui s2; addiu s2` then `addu v0,v0,s2; lw 0(v0)`) where the original recomputes `lui at; addu at` | the table is a struct array: `D_800A651C[D_800B9A02].ot` (array-of-struct indexing keeps the at-form; byte-pointer arithmetic lets cse keep the symbol) | func_80018094 (2 left) |
| `p[3] * (cols * 2)` computed as `(p[3] << 1) * cols` | the stride is its own variable: `s32 stride = cols * 2; ... p[3] * stride` | func_8002F4E4 (open) |
| `RotTransPers3`'s last two arguments | `&otz, &flag` in that order; flag lands at sp+0x24; cull with `if (!(flag & ~0x1000))` | func_80016B60, func_80017168 |
| inline GTE stores to several locals in a fixed stack order | the targets are members of one local struct `{ s32 flag; s32 z; }` | func_80027058 |
| a sorter's packet pointer in `a3` and `pkt + 4` in `t0`, with the semi-transparent block | order: OT entry, then the `pkt[3] = 1` byte, then the DR_MODE word; `do { } while (--n)` with early `continue` | func_80027058 (build/work/s27058_P2.c) |
| a wrapper that matches only with the callee's body inlined (argument addresses computed before the asm block) | the callee is `inline` in the same file (GCC 2.7 still emits its standalone copy) | func_800134FC (RotX/Y/Z helpers) |
| a variable typed `s32` where `rsin`'s result is stored gives extra sign handling | type it `s16` | RotY helper |
| `GsInitGraph2` / `GsDefDispBuff2` argument moves | prototypes with `s32` arguments; mode table read as `k = (mode & 0xFFFF) * 6; *(u16 *)((u32)&D_80062A3C + k)` | func_800146B0 |
| a function defined `s32` that never returns a value | a caller declares it `extern s32 f()`; keep the definition `s32` with no `return` | func_80016A7C, func_8002D4C8 |
| a `u8` return used as `(f(x) << 16) != 0` | declare the callee `u8` and call it implicitly in the test | func_8003836C callers |
| the candidate record of a "best channel" search kept in four stack slots | a local struct `{ s32 idx; u8 *ch; u16 prio; u8 found; } b;` and `return ++b.idx;` | func_80030CA4 |
| a byte store to Work through `lui at,1; addu at,a1,at; sb -0x5C1B(at)` with the base in an argument register | the pointer is set at function start (`register Work *w = &D_800AF630;`) and the store is in a block with two predecessors, so cse cannot fold the constant address; a `#define WORK ((Work *)0x800AF630)` constant gives `lui at,0x800c; sb` instead | func_80015208 (open), docs: include/work.h |
| a Work field read after stores through other pointers, reloaded | `WORK->field` (the constant pointer is never cached in a register) | include/work.h comment |
| a function that takes arguments is called with none, and the callee uses the caller's a0 | write the call as `f()` with a K&R extern: GCC leaves a0..a3 as they are, so the caller's own arguments arrive (the PC build writes them in, pc/gen.py "argument pass-through") | func_8001CD50 -> func_8001CF48, func_80027BF0 |
| `-O0` code: every local on the stack, `fp` frame | it is `main.c`, `code_8002C410.c` or one of the stage's two -O0 files; write plain statements, locals in declaration order (section 6) | func_80010BB4 |
| the first test's taken branch lands straight in the then-block of a later test of the same flag (`bnez v0, .L_late` past the whole body) | test it twice: `if (!(a->unkC4 & 2) && (a->unkB4 & 0x20000)) { ... } if (a->unkC4 & 2) f(5); else f(0x38);`: CSE follows the jump, knows the flag on that path and threads the branch. An early `return` for the first test lays the path out inline instead | func_80130C08 |
| a chain of thresholds whose results sit in the delay slots of branches that skip to the join (`bnez v0,L; addiu s1,zero,4` ... `addiu s1,zero,8` ... `addiu s1,zero,0xC`) | nest the assignments, each before the test that may skip the rest: `k = 4; if (max / 2 >= cur) { k = 8; if (max / 5 >= cur) k = 0xC; }`. An if / else-if chain branches on the false side instead | func_80130D48 |
| signed division of a u16 field (`sra v1,a0,31; subu; sra`) and one magic constant (`0x66666667` in a2) shared by `/10` and `/5`, where yours divides unsigned (`srl`, `multu 0xCCCCCCCD`) | load the field into an `s32` local first (`max = w->hpMax;`): a zero-extended operand written directly is known non-negative and divided unsigned | func_80130D48 |
| values passed to a function with `s16` parameters without `sll 16; sra 16` (a loop counter straight into a1) | the caller's source file declares the callee old-style (`StageActor *func_8012C658();`): no prototype, no narrowing. A prototype in another file of the original does not reach this one | func_80130D48 |
| one saved register walks two different tables in two cases (`s0` for D_8018D91C and for D_8018D8EC's 6-byte records) | one `s16 *p` for both, the records read as `p[0]`, `p[1]`, `p[2]` with `p += 3` | func_80130D48 |
| the `return 0` path (`j end; addu v0,zero,zero`) right after the test, the work after it (`bnez v0,L_work`) | `if (f != NULL) { f(a); return 1; } return 0;`: an early `if (f == NULL) return 0;` puts the work first and the zero last | func_80131CA8, func_80131A34, func_80131AC8 |
| two members zeroed through one load of a pointer, the later member first (`lw v0,0x20(s0); sh zero,0x14(v0); sh zero,0x10(v0)`), where yours reloads the pointer for the second | a chained assignment: `a->model->rot.vx = a->model->rot.vz = 0;` (the left address is taken first, CSE merges the two loads, the inner store goes first). The same gives `out->vx = out->vz = 0; out->vy = v;` for z, x, then y | func_80131B14, func_801312D0 |
| a byte read with `lbu` compared without `andi 0xFF` at each use | the local is `s32 kind = *(u8 *)&a->unk5E;`, not `u8` (a `u8` local is masked again at every comparison) | func_80131B14 |
| an 8-byte struct copied (`lwl/lwr` + `swl/swr`) to a stack slot that nothing reads afterwards | the source copies it to a local it never uses (`r = q;` before `func_8012CEB0(&p, &q, 1)`): GCC 2.7 has no dead-store removal for a BLKmode local. Declare it in its slot's order | func_80131340 |
| a few stores after a call in another order, everything else equal | permute the statements with variant_search: write the 24 orders of four statements as one `{{...\|...}}` group (itertools.permutations in a few lines of Python) | func_80131340 |
| every instruction in place but the saved registers of two or three locals rotated (`vd` / `n` / `to` in s1 / s2 / s0 where the original has s0 / s1 / s2) | the allocator's order (section 4): run `tools/regdump.py`, then change which variables are block-local and their reference counts and lifetimes until the order comes out. Here: `n` and `d = vd + 4` as block-scoped locals in each half (local-alloc places them before global-alloc runs: the pointer bump `d` takes s0 in its block and dies before `vd` needs it, `n` takes s1), `to` one variable for both halves (placed after them, into s2), `vd` the parameter itself (placed last among the three, into s0, which `d` no longer holds) | func_801325B8 |
| after a call, the next call's `li a0,1` placed before the stack arguments' address computations, where the original has it with the other register arguments | the first call reads a0 (its argument), so the `a0 = 1` depends on it and sched1 places it right after; the argument loads with no dependency get a 0x7f000000 priority bonus and go next to their call. The original's first call used no register argument: write it `func_8014C978()` with a K&R `extern void func_8014C978();` (the callee reads the caller's a0, see the pass-through row) | func_8012DB84 |
| `(r2 & ~0x8000) \| (r & 0x8000)` with the and / andi / or in other registers | two statements with the mask as an unsigned constant: `r2 &= 0xFFFF7FFF; r2 \|= r & 0x8000;` (r2 updated in place keeps its register; `~0x8000` as one expression gave the merge a temporary) | func_8012CEB0 |
| a sign test with a compare in each arm (`slt v0,a0,v1` for x >= 0, `negu v0,v1; slt v0,a0,v0` for x < 0) where yours negates conditionally and compares once | three things at once. (1) The limit computed into a local **after** the value is loaded (`x = ...; lx = (s16)lim;`): the shift's temporary is then live across the load, so x cannot take v0 and -x (block-local, local-alloc) gets v0 instead of x's register, which keeps the two compares different. (2) The arms as nested ifs, each with its own `return 0`, so each branch is `jumpifnot` (`beqz` to the join and the return inline), not a conditional expression (`c ? a : b` in an `if` gives `bnez` to the return and a jump to the join). (3) Cross-jumping keeps the last copy of `v0 = 0; j end`, but the original keeps the first: put the label in the then-arm and `goto` it from the else: `if (x >= 0) { if (lx < x) { out_x: return 0; } } else if (lx < -x) goto out_x;` (the y half the same with its own label and one `return 1` after both) | func_8012E778 |
| a local struct's address recomputed for every call (`addiu a1,sp,0x10` in each delay slot) after a struct copy into it, where yours keeps it in an s-register (`addiu s0,sp,0x10; move a1,s0`) | the MIPS block move copies `&mat` into a pseudo; cse rewrites every later `&mat` to that pseudo, and only a pseudo with **one** use is folded back by combine (so one call after a copy matches by itself, func_8012CE2C). With several calls, end cse's extended basic block between the copy and the calls: cse stops at a loop's end note, so `do { mat = D_800AE620; } while (0);` (a macro in the original) leaves each call its own `addiu`. The dumps: `-ds` shows `(set a1 (reg 75))`, `-dc` the single-use fold | func_8012B4B8 |
| the opposite: a local's address **kept** in an s-register (`addiu s0,sp,0x10; move a1,s0` ... `move a0,s0`) across a call and a later inlined call that takes it, where yours recomputes it (`addiu a1,sp,0x10` ... `addiu a0,sp,0x10`) | a pointer variable: `SVECTOR *wp = &w; RotTransSV(v, wp, &r); *out = *func_8012F40C(&r, wp);`. Its pseudo has two uses (the argument and the inline's parameter copy), so combine cannot fold the address back; written as `&w` twice, each is its own `addsi3` with no pseudo at all | func_8012F49C |
| a table's end computed from its base register (`lui v1,%hi(tbl); addiu v1; addiu a0,v1,0x658C`) in a `j`'s delay slot before a `return a` block, the loop start loaded as a fresh constant after it (`lui v1,%hi(tbl+0x10C)`), and the loop's entry `beq` with the pointer first (`beq v1,a0`), where yours folds the end to a constant, derives the start from a register (`addiu v1,v1,0x10C` or `end - 0x6480`) or swaps the `beq` | three cse rules at once. cse ends its extended block at an unconditional `goto`, folds `(eq a end)` to `(eq end a)` when only `a` is constant-equivalent (`fold_rtx`: constant operand second), and rewrites a constant `sym + k` as `reg + k'` when a register holds `sym` or `sym + j` (its related-value rule). So: the base is the loop variable itself, set before the goto (`a = D_80120194; goto test;`), `end = a + 97` after the `test:` label (another block: combine cannot fold the base into it, and a fresh cse block keeps the add), and the start a **single-use pointer to its own symbol**, set first (`StageActor *first = D_801202A0; ... for (a = first; ...)`): a bare symbol has no related-value chain, `a = first` is not constant-equivalent in the test block (no swap), and local-alloc's `update_equiv_regs` replaces the single use by the constant, which gives the fresh `lui/addiu`. D_801202A0 is the table from slot 1 | func_8012C2D0 |
| the prologue's `move a0,s4` (the first statement) and a `sw s3` (a save) in the other order, nothing else | sched2 breaks the tie by position: the save of s3 waits for the s3 = a3 parameter copy, and the copy is picked before the first statement only if it comes later in the insn stream. Copy the parameter into a local declared after the first statement's initialiser: `TmdHead *t = src; s32 *nd = ndp;` (the a3 copy is then the local's initialisation, emitted after `t = src`) | func_801325B8 |
| an inlined search's loop variable in the result's register (`a1`, with `end` in v1) where the original keeps `end` in a1, the loop variable in v1 and a real `move a1,v1` at `found:` | the result doubles as the search's end: `a = p + 97; for (p = first; p != a; p++) if (p->state == 0) goto found; a = NULL; found: a = p;`. The loop variable then conflicts with `a`, so global-alloc's expand_preferences does not hand it a's a1 preference (from the call's `a1 = a` copy) at the `a = p` copy; it takes the lowest free register (v1: v0 holds the block-local `lhu` temporary) and `a` keeps a1 for its own copy preference | func_8012C750 |
| the `return 0` arm placed right after the test (`bnez a1,CALL; j END; addu v0,zero,zero` in the slot, the call block after) where yours has the call block first and `move v0,zero` at the end | jump.c's `if (foo) bar; else break;` rule inverts the condition and swaps the two arms when the conditional jump targets the next label (one use), the first arm ends in a jump to the label after the second, and the second arm ends in a jump followed by a barrier. So write the arms the other way round and let the first arm end in a plain return of the call: `if (a != NULL) { d->flags \|= 0x8000; return func_8012C890(d, a, NULL); } return 0;`. With the inline `func_8012C724` in the arm its own return jumped to the inline's label first, the rule did not fire, and the layout stayed call-first | func_8012C750 |
| after a call, `addiu v0,v0,-0x400` (the result adjusted) before an s16 parameter's `sll/sra` and both `andi` masks after them (`andi s1` then `andi a0`), where yours has the addiu after the sll or the mask right behind it | the inliner expands each argument with EXPAND_SUM: `ratan2(...) - 0x400` is kept as a sum and the add is only emitted by the parameter copy, after every argument (so after the s16's sign extension). Compute the heading into a local first (`s32 h = ratan2(...) - 0x400;`): the add is emitted at once. Keep the inline's parameter never assigned (`h = b & 0xFFF;`, not `b &= 0xFFF`): save_for_inline marks a never-assigned parameter read-only and the inliner then passes the argument's pseudo without a copy (a copy would absorb the single-use add by combine and move it after the sign extension). The masks are then single-set pseudos, which sched1 boosts (birthing_insn_p: a live, once-set destination) to the end of the block in insn order, so `b`'s mask lands last | func_8012BB3C |
| a division's quotient in a register of its own (`sra v0,t0,5; subu a0,v0,v1`) where yours reuses the dividend's (`subu v0,v0,v1`) | assign the quotient to a variable that lives across blocks, here the loaded value's own: `t = D_80126B58.unk188; ... t = ((0x90 - t) << 12) / 144; d = D_801ED358 - t;`. local-alloc ties a block-local result to an operand that dies in the insn, and even untied an output born at an insn may reuse an input dying there (deaths at 2n, births at 2n; the interval is half-open), so a block-local quotient always lands in the lowest free register; a pseudo referenced in two blocks is never tied and is placed by global-alloc (a0, after `t`'s earlier life) | func_8012E364 |
| a global's load placed after the quotient and right before its use (`subu a0,v0,v1; lui v1; lw v1; nop; subu v0,v1,a0`), the constant for later (`addiu a3,zero,0x1000`) in the branch's delay slot; yours hoists the load above the quotient and gives it a1 | write the constant's statement **before** the one that computes the branch's value: `k = 0x1000; m->timer++; t = .../144; d = D_801ED358 - t;`. sched1 (section 4) breaks ties among boosted insns by position, later first, so with `k = 0x1000` after `d` the constant is scheduled before `d`, the load (latency 2) is queued and the quotient (ready at once) is placed between them; with `k` written first, `d` goes first, the load becomes ready a cycle later and beats the quotient. The load then no longer overlaps the sign shift in v1, global-alloc gives it v1, and sched2 cannot hoist a `lw v1` above `subu a0,v0,v1` (the anti-dependence), which leaves the `nop` | func_8012E364 |
| the pointer parameter copied to a2 at entry (`addu a2,a0,zero`) and a0 given to a loaded global (`lh a0`), where yours keeps the parameter in a0 and the global takes a1 | global-alloc skips, in its first pass, the registers that a lower-priority conflicting pseudo prefers; the parameter prefers a0 from its copy, so `t` avoids a0 unless the parameter's preference is pruned by a **conflict with hard a0**: a block-local temporary that local-alloc places in a0 while the parameter is live. Here the model pointer for the flags byte as its own local (`o1 = m->model; o1->flags \|= 0x10;`, not the shared `o`): with v0 (the flags halfword) and v1 (the scale) taken it lands in a0, `t` takes a0 and the parameter the next free register, a2 behind `old` in a1 | func_8012E364 |
| three loads in the original's order (`lw a1 (old); lw a0 (o1); lui v1; lw v1 (cur)`) where sched1 gives another | among boosted single-set loads sched1 keeps the source order (position tie-break), so write the loads as statements in that order rather than one expression: `old = D_801ED35C; o1 = m->model; v = D_801ED358 - old + k; D_801ED35C = k; D_801ED358 = v;` | func_8012E364 |
| a run of tests that each `return 0` (`bnez; addu v0,zero,zero` in every slot) ending in `addiu v0,zero,1`, where yours turns the last test into a store flag (`slt; xori v0,v0,1; jr`) | jump.c rewrites `if (c) x = 0; else x = 1;` on the hard return register into `x = c ^ 1` (its store-flag case runs on this target because the md has conditional-move patterns, whatever BRANCH_COST says) when the `x = 0` block sits right after the conditional jump. Give the tests one shared `return 0` and `goto` it: `if (c1) { out: return 0; } if (c2) goto out; ... if (c6) goto out; return 1;` (the same device as func_8012E778's). Every branch then targets the shared block, reorg steals its `v0 = 0` into each slot, and the `return 1` stays a plain constant | func_8013361C |
| `bgez v1,L; addu v0,v1,zero; negu v0,v0; L:` (a local label, the move in the slot, the result in a new register) | `abs(v)`: GCC's `abssi2` template is exactly those three instructions (`bgez; move; subu $0`), one insn to the schedulers and the allocator, and `abs` is a builtin that needs no declaration. `v < 0 ? -v : v` is **not** folded to it by 2.7.2: with a store target it stores in each arm. Here with the chained stores: `o->scale.vx = o->scale.vz = abs(v);` | func_8012E364 |
| a loaded halfword copied to a second register before the compare (`lh v0; move a0,v0; slt v0,v0,v1`) and the copy used in the arm, where yours compares and copies one register | the value is an **s16 local** read in the compare and copied in the arm: s16 locals are HImode pseudos in this GCC (no promotion), combine folds the load into the compare's sign extension and rewrites the local's own load as a copy of the extended register. The other operand stays s32 (loaded once); a temporary reused for three such picks gives a second `lhu` instead (combine rewrites only a pseudo set once): one temporary per pick (`tx`, `ty`, `tz`) | func_8013339C, func_80132F40 (parked) |
| a call's result copied to v1 before its `beqz` (`move v1,v0; beqz v1`), where an earlier call's result was copied to v1 too | one variable for both results (`d = SquareRoot0(...)` and later `d = func_80133AB0(...)`): the pseudo keeps the register of its first use | func_80133784 |
| a scalar global's load after two stores through a pointer in the last block, the pointer in v1, where yours hoists the load and gives the pointer a0 | read the global pointer afresh in that block (`to->vx = D_8018DAA0->vx;`), not a variable shared with another block: a block-local pseudo takes v1, the global's temporary (born after its last use) takes v1 too, and sched2's anti-dependence keeps the load after the pointer's last use | func_80133784 |
| the saved registers' zero inits in another order (`move s1,zero` first, `move s2,zero` last) with the allocation right | declaration order: the inits are scheduled by position, the later declared later | func_80133784 |
| `to->vx` reloaded after a store through another pointer (`lhu v0,0(s0)` twice), or `p->vy` loaded twice for `- 4` and `+ 0x2FC` | the value in a temporary before the store: `a = to->vx; e->vx = a; b = from->vx; s->vx = b; d->vx = a - b;` | func_80135168, func_80134510 |
| a global pointer's load scheduled after the first `lhu` where the original has it first, above the prologue | one temporary per axis (`ax, bx, ay, by, az, bz`), not one reused: the reused temporary adds output and anti dependences that delay the first load's readiness in sched2, so the pointer load (ready at the same time otherwise, and later by position) is picked first | func_80135168, func_80135004 |
| two pointer globals loaded at the top in the order D_8018DAA0, D_8018DA9C, the stores through them s first | locals `e = D_8018DAA0; s = D_8018DA9C;` declared in that order and passed to the call; after the call the globals directly (a local used after a call takes a saved register) | func_80134510 |
| the then-arm out of line (`bnez` to it) and the else inline | write the bigger arm as the then-arm: `if (w >= -0xBCB) { r = 0x8000; if (w < -0x578) r = 0x4000; } else r = 0x2000;` | func_80134510 |
| a second call's hit code merged into the first's (`bnez v0` back to the first copy), where yours keeps the last copy or jumps forward | cross-jumping keeps the last copy (the func_80019AF8 row): a label in the first copy and a `goto` from the second test: `if (f() != 0) { hit: ...; return 1; } ... if (f() != 0) goto hit; return 0;` | func_801343C4, func_80135004 |
| `sll/sra` of an s16 parameter before each of two calls, where the original extends once into s1; an s16 value passed to an s16 parameter through a HImode copy and `sll/sra` | `s32 k = kind;` and pass `k` (combine knows a pseudo set once by a sign extension and drops the conversion at the call); the same for a compared value passed on: `s32 x1 = e->vx;`, no HImode copy | func_801343C4 |
| a global pointer reloaded for the second call's argument (`lw v0; lh a2,4(v0)`) where the original keeps it from the compare (`lh a2,4(a2)`) | a local pointer assigned in that block (`e2 = D_8018DAA0;`) and used by both the compare and the call; not one live across the earlier call (a saved register then) | func_801343C4, func_80135004 |
| a 19-instruction dot product repeated inside the next function | `inline s32 func_80134310(SVECTOR *a, SVECTOR *b, s32 c)` and the caller calls it (GCC 2.7 inlines and keeps the copy); three copies in three original source files (func_80134310, func_80134A28, func_80134FB8) | func_8013435C |
| `lwl/lwr` x2 then `lb/sb` x2 to the stack before a call | a 10-byte struct of `u8` copied to a local (`Text10 t = D_801EBEBC;`): alignment 1 gives `lb/sb` for the tail (2-aligned would give `lh/sh`) | func_80136C90 |
| a function on one record of a table whose fields are named as separate symbols (`sh zero,%lo(D_801269F4)`, `lw %lo(D_80126A30)`), the same code as a pointer function just above it | the pointer function is `inline` and this one calls it with the table's first record: `func_80139914(D_801269F0);`. The inlined constant pointer gives each field its own direct address; window 0's other fields (func_801376E8) are declared as separate scalars for the same reason | func_80139954 |
| `srl` where a `/ 2` of a u16 field times 3 gave `sra` | `(u32)(w->unk14 * 3) / 2` | func_8013914C |
| a range test folded into `addiu -2; sltiu 5` (and `andi 0xFFFF` first for a u16 parameter) | write both bounds: `w->unk18 >= 2 && w->unk18 < 7 && n >= 2 && n < 7` (fold builds the unsigned compare) | func_80138D58 |
| a backward clear loop whose counter is set before the pointer (`li v1,0x287; la v0`) | both in the `for` init, counter first: `for (i = 0x287, p = &D_8012811A; i >= 0; i--) *p-- = 0;` (a pointer initialised at its declaration is set first) | func_80139DC8 |
| a GPU colour run stored from one register, out of field order (`0xFF` to b1 then r0, `0x80` to g1, g0, r1, b0) | chained assignments, the inner store first: `p->r0 = p->b1 = 0xFF; p->b0 = p->r1 = p->g0 = p->g1 = 0x80;`; and the two RotTransPers results summed in one expression, so the first result's register is free for `&flag` | func_80136D08 |
| a GsLINE built on the stack and sorted, repeated two or three times in one function | the one-line helper (func_80136ECC) is `inline` and the markers call it; its stores in field order (`attribute, r, g, b, x0, y0, x1, y1`). The markers' corner registers are still parked (section 5) | func_80136ECC |
| a field reloaded right after one store at a join (`sb v0,0x1E(s0); lbu v0,0x1E(s0)`), where yours re-masks the stored register | two stores, one per arm: `if (w->unk1E == 0) w->unk1E = 4; else w->unk1E += 5;`. Cross-jumping merges the two `sb` into the join, and the load after it has two predecessors, so cse knows nothing | func_8013A0A4 |
| a struct word tested, then loaded again after a store to another member of the same struct (`lw v0,8(s0); andi; beqz` ... `lw v1,8(s0); sh v0,4(s0)`) | the stores come first in the source and the field is read afresh after them: `w->state = 2; w->unkC = 0; if (!(w->flags & 0x20000)) w->flags &= ~0x20;` (a member store may alias the member; sched2 then hoists the reload above the halfword store) | func_80139DF4, func_80139E84 |
| a quotient stored with no `andi 0xFFFF` before the `or` that uses it | the quotient is a `u16` local: `q = n / d; b = q \| (b << 4);` | func_80139D04 |
| an s16 field halved with `lhu; sll 16; sra 17` where a plain `>> 1` gives `lh; sra 1` | `(s16)(w->unk34 >> 1)` into an s32 local (HImode shift); the same field in an arm that adds first stays `lh; addiu; sra` | func_80139C7C |
| a value assigned to a temporary in each arm and stored once after the join gives the right code but the temporary takes v1 | store in each arm instead (`if (f & 0x40000) w->state = 2; else w->state = 0x10;`): cross-jumping shares the `sh`, and the constants take v0 | func_8013A164 |
| a function's body repeated inside a later one (as if inlined), but other functions further on `jal` it | not `inline` (a later call in the same file would be inlined too): write the body out in the caller. func_80138B88 in func_80139B18, func_80139788 in func_80139A8C and func_80139B18 | func_80139B18 |
| an early test that skips to a shared `li v0,2; sh v0,4(s0)` placed last, after the default arm | a label inside the last arm and a `goto` from the early test: `if (r == 2 \|\| r == 4) goto done; ... else { f(w); if (w->flags & 0x20) { done: w->state = 2; } }`. A `switch` with three labels builds a compare tree instead | func_80139FE8 |
| `lwc2 $9-$11` from a stack VECTOR, `sqr 1` (or `sqr 0`), `swc2 $25-$27`, then the three words summed | `gte_ldlvl(&d); gte_sqr12(); gte_stlvnl(&s); return SquareRoot12(s.vx + s.vy + s.vz);` (`gte_sqr0()` for `sqr 0`); `Square12(&d, &s)` when it is a call | func_8013E064, func_8013E2C4, func_8013E22C |
| a jump-table load kept after a store to a fixed scalar that comes before it, where yours hoists it | the scalars are fields of one struct (StageMode at D_80115110): a constant in-struct store may alias the indexed table load; a field's single use is still a direct `%lo` | func_8013E5E8 |
| in a loop over an `s16` counter (`sll 16; sra 14` each pass), a struct's word array stored as `0x78(a0)` with `a0 = index + base` and the base (`la t0` or `addiu a1,s0,-8` from a register holding another member) set **after** the counter's `move a2,zero`, next to `lui at; addu at; sw %lo(D_X)(at)` stores to other word arrays | the base form is a pointer to the struct set in the `for` init after the counter: `for (i = 0, m = &D_80115110; i < 5; i++) { m->unk78[i] = 0; D_80115168[i].v = 0; }`; the at-form arrays are arrays of one-word structs (`typedef struct { s32 v; } S32R; extern S32R D_80115168[];`). `D_80115110.unk78[i]` hoists `sym + 0x78` into a register, a plain `s32 D_X[]` hoists `sym`, and a pointer set before the `for` comes before the counter | func_8013EE10, func_8013EF88 |
| in such a loop the store's address (`addu a2,a1,t1` for `0x58(a2)`) computed right after the load's (`addu v0,a1,t0`) and **before** the `lw`, which costs the counter a higher register (a3 instead of a2) | assign through the store in the same statement: `m->unk58[i] = v = D_8018E8AC[i] * 3 >> 2; D_80115188[i].v = v;`. expand_assignment computes the left side's address before the right side; `v = ...; m->unk58[i] = v;` computes it after the load | func_8013E6AC, func_8013E958 |
| a branch to the very next instruction with a store in its slot (`sltiu v0,v0,2; beqz v0,L; sb zero,0x20(s0); L:`), so the store runs either way | a plain `if (w->unk18 < 2) w->unk20 = 0;`: reorg fills the slot from the then-block. Both arms storing the same value gives no branch at all | func_80138C60 |
| a loop with one pointer register per table coordinate (`t3` = tbl, `t5` = tbl + 2, each `+= 4`), and a byte-pair table and output walked by **one** register each with offsets 0 and 1 (`lbu 0(a2)`, `lbu 1(a2)`, `+= 2`) | index everything by the counter: the coordinate tables as plain `s16` arrays (`D_800D45F4[i * 2]`, `[i * 2 + 1]`: one giv per address), the pairs as arrays of `{ u8 x, y; }` (`dir[i].x`, `t[i].y`: the two fields' givs combine, same multiplier). An array of `{ s16 x, y; }` gives the `lui at; addu at` form instead, and explicit `p++` pointers split into a register per field. After the loop `out[i] = out[0]` uses the counter (`sll v0,t1,2`) | func_8013AD38 |
| a list search whose first call is outside the loop (`jal f; bnez v0,HIT; lw s0,0(s0); beqz s0,ret0`), the success block (`HIT: ... j end; li v0,1`) sitting inside the loop right after the loop's own call, and the next-node load at the loop's bottom (`lw s0,0(s0); bnez s0,top`) | the success code inside the `while`, reached from outside by `goto`: `if (f(p, 0) != 0) goto hit; while ((p = *p) != NULL) { if (f(p, 0) != 0) { hit: g(...); return 1; } } return 0;` (GCC rotates the `while`, duplicating its test as the entry check). The other path's `if (h(x) != 0) goto hit;` goes in the `else` | func_80135D20 |
| a GTE routine: `ctc2` x7 from a matrix, `lwc2` x2, `mvmva 1,0,0,0,0`, `swc2 $25-27`, `cfc2 $31` | `gte_SetTransMatrix(m); gte_SetRotMatrix(m); gte_ldv0(v); gte_rtv0tr(); gte_stlvnl(&r); gte_stflg(&flag);` in that order with the macros of include/gte.h, `m` a pointer to the Work member `D_800AF630.wsm` | func_801330E0 |
| the first test of a flags parameter computed from the incoming register into itself (`move t3,a1; andi a1,a1,1; bnez a1`), the later tests from the copy (`andi v0,t3,0x8000`), where yours tests the copy (`andi v0,t3,1`) | the parameter is `s16` (or another narrow type) and only bits that need no extension are tested (`f & 1`, `f & 0x8000`): the incoming SImode a1 is copied whole into the long-lived pseudo and the first `and` reads the hard register, dying there, so its result takes a1. No mask or `sll/sra` appears to give the type away | func_80136334, func_801365B8, func_80136824 |
| two stores in one arm in the other order (a constant to a scalar global hoisted above `p->f = v`), which lets cross-jumping merge the arm with the other one where the original keeps both | the scalar store is an in-struct reference (`((S16R *)&D_801152AC)->v = 0xFFF;`, `((s16 *)&D_801152AC)[0]`): it may alias the member store, so the source order stays and the arms stay apart. The twin functions with the stores in matching order cross-jump as plain scalars | func_80136334 |
| a local struct filled from another struct's fields with all the loads first (`lh v0; lh v1; lhu a1`, three registers) and the stores after, where yours alternates `lh v0; sw v0` | read the fields into locals first (`s32 x = o->sx; s32 y = o->sy; s16 z = o->sz;`), then store: member stores to the stack struct may alias member loads, so written alternately they keep that order | func_80135480 |
| stores of a call's results to scalar globals (`sh %lo(D_801ED3E8)`) kept before the next loads through a pointer (`lhu 6(s0)`), where yours hoists the loads above them | declare those globals as one-member structs (`extern S16R D_801ED3E8; D_801ED3E8.v = r.vx;`): an in-struct store conflicts with the varying-address load, a plain scalar store does not. Each keeps its own `%lo` (one use per symbol) | func_80135480 |
| `lui v0,%hi(D_80000004); or s0,s0,v0; lhu %lo(D_80000004)(s0)` (splat's names for 0x80000004) | a KSEG0 pointer made from a value: `t = (u16 *)((f & 0x0FFFFFFF) \| 0x80000000); t[2]`; cmp_func compares the `lui 0x8000` and the offset as equal | func_80135480 |
| an `&&` chain's 0/1 computed into a temporary (`addu a0,zero,zero` in the first `bne`'s slot, `sltiu v0; move a0,v0`) and copied to a saved register at the join (`move s3,a0`), the saved register shared with a dead parameter; yours sets the saved register itself (`move s2,zero`, `sltiu s2`) | the flag is an `s16` local: `s16 same = a == b && c == d && e == f;` (the chain is expanded in SImode and narrowed by a copy; tested later with a plain `bnez`). The list search of the other path stays in the `if` arm with the rest in `else` and one `return 0` after (the func_80135D20 row) | func_80135A4C |
| a byte-sized parameter used straight from its saved register (`move s3,a1`, no `andi 0xFF`), where yours masks it at entry (`andi s4,s5,0xff`) and needs one saved register more | the parameter is `s32` (a `u8` parameter is re-masked by the callee in GCC 2.7); callers passing `u8` fields load them with `lbu` either way, so the prototype can change without touching them | func_801392FC |
| `lh` before an `andi` mask of a `u16` field (`lh a2,0x38(s0); andi a2,a2,0xFFC0`) | cast it: `(s16)w->unk38 & 0xFFC0` | func_801392FC |

## 3. Prototype and declaration rules that bit us

* `extern u8 D_80076214;` (not s8), `extern u8 D_800A63E4;` (both files), `typedef struct { u8 flag; } Flag8;
  extern Flag8 D_80076242;`, `extern void (*D_80063500[])(u8 *o);`, `extern void func_8002D1F0(s16 mode);`,
  `extern void func_800385C0(s32 n);`, `SpuSetReverbModeParam` K&R `()`.
* `func_80013FE0(u8 *n, void *a)`, `func_800128B4(void *p)`, `func_8001311C` returns s32, `func_80013F3C(Mtx *m)`,
  `func_80012B04` returns s32, `func_80014CF8(u8, s32)`, `func_80016714(void *p, s32)`, `func_80017E8C(s32 n)`,
  `func_8003819C(s32, s16, s16, s16)`, `func_8003836C` returns u8, `ResetGraph` returns int (psyq.h).
* `VECTOR` is `typedef struct { s32 vx, vy, vz, pad; } VECTOR;`, `Mtx` is `typedef struct { s16 m[3][3]; s16 pad;
  s32 t[3]; } Mtx;`, `Pad` is in code_800123F0.c lines 7-11: copy exactly or do not redeclare.
* The song-state table: `typedef struct { s16 lo; s16 hi; } Pair; extern Pair D_800C5328[];` (D_800C532A is its hi
  half; the old `u8 []` uses are cast).

## 4. How the compiler thinks (the reasons behind the table)

* **cse works inside an extended basic block and does not substitute across a plain copy.** `y = x` stays a copy;
  `x - k` reads the older register. A label with two predecessors ends what cse knows: a pointer set at the top of the
  function is still in its register at a join block, which is why `register Work *w` survives into a big-offset
  store there.
* **The loop pass** (`-O2`) hoists invariants out of a loop in the order it meets them, after the counter's init; a
  label between a variable's init and the loop start hides the init from it. Induction variables: a `biv` is a
  variable incremented in the loop; a `giv` is `biv * m + c`. `biv + symbol` is a legal MIPS address and needs no
  register; `symbol + i * stride` is a giv and gets one, one per distinct symbol. Array-of-struct indexing keeps a
  symbol in the address; pointer arithmetic on a byte array makes the symbol a value that can be hoisted and shared.
* **fold** rewrites `A | (B | K)` to `(A | K) | B`, turns `(x & bit) == bit` into a shift-and-mask, and moves a
  constant factor outward (`a * (b * 2)` to `(a * 2) * b`); a temporary of the right width stops each of them.
* **The scheduler** puts the longest dependency chain first; a store of the loop counter followed by the increment
  wins over independent stores (func_80037D98's second loop is parked on exactly this).
* **Aliasing**: a store through a struct member is assumed not to alias a plain scalar global; a store through a
  plain cast pointer is assumed to alias everything (so the global is reloaded after it).
* **Register allocation** prefers the variable with more references; a copy adds a reference. The sorter family
  (func_800249F0 and 17 siblings) is parked on this: the primitive pointer must keep exactly 7 references.
  The exact rule (confirmed on func_801325B8 with the `-dl -dg` dumps, 2026-10-17): **local-alloc runs first** and
  places every pseudo whose whole life is inside one basic block, giving it the lowest free register of the right
  kind (s0 first for one that lives across a call, v0/a0... otherwise, or the hard register it is copied from or to).
  Then **global-alloc** sorts the rest by `floor(log2(refs)) * refs / live length` (refs and length as `flow` counts
  them, notes included; `tools/regdump.py` prints both and the resulting order) and gives each in turn the lowest free
  register that no already-placed conflicting pseudo holds, or a preferred one (a copy to or from a hard register)
  when it is free. A variable used in both halves of a duplicated body is one pseudo spanning blocks (global); the
  same variable declared inside each half's block is two block-local pseudos (local). So the register a variable
  gets is steered by: block scope or not, reference count, lifetime (declaration and statement order), and which
  other variables are still alive when it is born.
* **The second scheduler (sched2)** is a backward list scheduler: from the block's last insn it picks, among the
  insns whose dependants are all placed, the one with the highest priority (latency to the end) and, for equal
  priorities, the one later in the insn stream; a load or store that becomes ready goes to the front ("greater
  potential hazard"). Prologue saves and parameter copies are in the block and obey the same rule, so the order of
  `move a0,s4` against a `sw s3` can hinge on where the s3 = a3 copy sits in the stream (func_801325B8).
* **sched1 (before allocation) boosts "birthing" insns**: an insn whose destination is set once in the function and is
  live gets the ready list's top priority (adjust_priority), so the backward list scheduler places it as late as it can;
  ties among boosted insns go by insn order (later first). A parameter masked in place (`b &= 0xFFF`, two sets) is not
  boosted and sinks to the front of the block; masked into a fresh local it is (func_8012BB3C).
* **local-alloc's tie rule** (local-alloc.c block_alloc / combine_regs, read 18 Oct): for an insn with an output register
  it tries to tie the output to *any* operand that dies in the insn (the one a "0" constraint names first), and the tie
  succeeds only when the output is a block-local pseudo not yet in a quantity (`reg_qty == -2`: referenced in one block
  and dying once) and the operand already has one. Lifetimes are counted in half-insns: an input dies at 2n and an
  output is born at 2n, with half-open intervals, so an untied output may still take the register of an input dying
  in the same insn. Quantities are allocated in priority order (`floor_log2(refs) * refs * size / length`), each
  taking the lowest hard register free over its whole interval; registers held by global pseudos are invisible to it.
  A value that must end in a register of its own (func_8012E364's quotient in a0) is therefore a global pseudo.
* **sched1 in detail** (sched.c, 18 Oct; the list scheduler runs backward, a clock counting from the block's end):
  when an insn is placed, each of its predecessors whose other dependants are all placed becomes *ready* at
  `clock + cost` (cost = the predecessor's result latency: r3000 loads 2, ALU 1, the multiply 12; anti and output
  dependences cost 0 on MIPS), so a load feeding the placed insn is queued one cycle behind an ALU op feeding it.
  Each cycle the ready list is sorted by priority (the longest latency path to the block end), ties by class
  (independent of the last placed insn first), then by position, the later insn first; within the top priority
  group a blocked function unit defers an insn and the one with the larger "potential hazard" (a memory insn) wins.
  Priorities are rewritten before the pick: an insn whose destination is set exactly once in the function and is live
  gets the block's maximum ("birthing", adjust_priority); a register set twice is never boosted. So the source order
  of independent single-set statements is usually the final order, and a value's second assignment changes its
  neighbours' order (func_8012E364: `k = 0x1000` before or after `d`; the scale variable set twice).
* **Constant addresses of struct and array members go through a register** (explow.c memory_address: "by passing
  constant addresses thru registers we get a chance to cse them"; a plain scalar global's `(mem (symbol))` is taken
  as is). cse keeps the register, because on MIPS `ADDRESS_COST` is 1 for a register and 2 for a symbol, and merges
  every later address of the same symbol in its extended block into the first register; only a single use is folded
  back into the direct `lui at; lw %lo(at)` form, by combine. That is why `D_X[0]` orders a load after a member store
  (sched.c true_dependence: a store through a varying in-struct address and a load from a constant non-struct address
  never conflict) but gives `lui; addiu; lw 0(r)` when the symbol is used again in the same extended block.
* **The inliner (integrate.c)** evaluates every argument first (with EXPAND_SUM, so `f() - k` stays a sum and the add
  is emitted by the parameter copy), then copies each argument into the parameter's pseudo unless the parameter is
  read-only: never assigned in the body (save_for_inline marks it) or `const`. The copy is where combine folds a
  single-use add, so a `- k` can land after a later argument's sign extension (func_8012BB3C).
* **jump.c swaps the arms of an if/else** whose conditional jump targets the next label when the first arm ends in a
  jump to the label after the second and the second arm ends in a jump plus barrier (`if (foo) bar; else break;` in
  jump.c): the arm written first ends up second. An inlined callee's `return` jumps to the inline's own label and
  stops the rule (func_8012C750).
* **`return expr` never writes the return register early**: expand_assignment computes the value into a temporary
  and copies it to v0 at the end ("Don't move directly into a return register"), so a result variable is a pseudo
  that global-alloc places after the block-local compare temporaries. func_8012CB64 is byte-exact only with the
  result pinned to the hard register from the first statement (`register s32 r asm("$2") = 0;`): v0 is then live
  through the tests, the compare temporaries take v1 and the loaded x prefers v1 through them. No plain-C form found
  that gives the hard register at expand time. The rules above are from the GCC 2.7.2 source (expr.c, stmt.c,
  local-alloc.c, global.c, sched.c, jump.c, integrate.c), fetched from ftp.gnu.org when needed.
* **s16 locals are HImode pseudos** in this GCC (no promotion for locals, 18 Oct dumps): a compare needs an explicit
  sign extension (`ashift/ashiftrt`, or `lh` when combine can fold the load into it), and a local that is both
  compared and copied gets combine's rewrite `89 = sign_extend(mem); 76 = subreg(89)`: the load into the extended
  register and the local's own value as a copy of it (func_8013339C's picks, func_80132F40's y1). A reused temporary
  (set three times) is not rewritten and loads twice. An s16 local copied in a branch arm and stored later costs
  **8 bytes of frame** nothing references (func_8013339C: three picks, frame 0x18; func_80132F40: one plus an unused
  SVECTOR gives the original's 0x40); where the slot comes from is not found yet.
* **The first insn after a loop note is a scheduling barrier** (sched.c sched_analyze_insn, `loop_notes`): it depends
  on every earlier use and set, and every later insn depends on it (`reg_pending_sets_all`), at a cost of 1 for the
  priority. So after a `do { } while (0)` (the func_8012B4B8 row) an argument computed after the note, such as a
  symbol's `la a2`, gets priority 2 and sinks to its call, while the original's `la a2` sits before the note. A symbol
  assigned to a pointer before the note is folded by combine into the hard-register argument copy after it (its
  single use; can_combine_p allows the hard register on MIPS) unless the pseudo has a second set: an empty
  `__asm__("" : "=r"(from) : "0"(from))` after the do-while gives func_80132F40 byte for byte
  (build/work/park_80132F40_asm.c); no plain-C second set found. `la` of a symbol is a **load** to the scheduler
  (movsi_internal2's "S" alternative has type load), so it waits like the lhu's after a store, and among ready loads
  of equal priority the later position wins.
* **cse follows a conditional jump to a single-use label** (-fcse-follow-jumps, on at -O2): the setup block that an
  `if (cz >= h->d) return 0;` jumps over is in the test's extended block, so a second `(u16)cz` mask is shared with
  the first. func_80133AB0 (and its twins func_801345F8, func_80134A74) recompute the mask from the u16 variable's
  copy at the jump target, so there the label had two uses or the path differed; the lever still to find.
* **Delay slots** are filled from the following block; an `addiu` or `move` in a delay slot in the original is the
  first instruction of the next statement, not evidence of a different source order. When reading a branch,
  the slot always runs: `bne a0,v0,L; addiu a1,zero,0xF0; addiu a1,zero,0x168; L:` means `a1 = 0xF0`, replaced by
  `0x168` only when the branch is *not* taken (`a1 = (h == 0xF0) ? 0x168 : 0xF0`). func_800147B8's draft had this
  backwards and the PC build drew the licence text twice (2026-10-14).

## 5. Parked (templates in build/work/, functional copies for the PC build in pc/native/near_miss.c)

func_800249F0 and the sorter family (gte12.c, t_249F0_near.c), func_80016110 (t_16110b.c), func_8001BC6C
(t_1BC6Cb.c), func_800190AC (t_190ACb.c), func_8002CC4C (v2CC4C_d.c), func_800191D4, func_800183E0 (Work member at
0xA1A8), func_8002F150, func_8001BADC (vBADC_e.c), func_8002C320 (v2C320_d.c), func_8002A108/func_8002A354
(v2A108_f.c), func_80016638 (v16638_g1.c), func_8001BBBC, func_800167F0, FaceSet, func_80037D98 (v37D98.c),
func_800147B8 and func_800149E0 (batch108.c), the batch105 set (v2F4E4.c, v15208.c, v335B8.c, v346D0.c, v38210.c,
v30538.c, v373D0.c, v18094.c), and the older list: func_80015908, func_80037368, func_800348A8, func_800331D4,
func_800168C4, func_8002AC00, func_80018450, func_80013154, func_80038838, func_8002FC64, func_80016978,
func_8001B26C, func_80015144, func_8002E638, func_80029344, func_8003324C, func_8001AAD0, func_8002EED8,
func_80031BE0, func_80030634, func_80020F34 (hand-scheduled asm, leave), func_80020DA4 (NON_MATCHING C in src).
Stage: func_8012B4B8, func_8012C2D0, func_8012F49C: matched 17 Oct evening (Fable; the three "address recomputed, not
kept" rows in section 2: a `do { } while (0)` ends cse's block, a pointer variable keeps a two-use address, and the
actor search's base / end / start rules). func_8012BB3C: matched 17 Oct night (Fable; the EXPAND_SUM / read-only parameter row in section 2; func_8012B608's
masked heading is a local so its parameter is never assigned).
func_8012C750: matched 17 Oct night (Fable; two rows in section 2: the result doubles as the search's end, and the
call arm first because jump.c swaps the arms).
func_8012CB64 (park_8012CB64.c): the ground-rectangle test, 16 instructions, every instruction in place with the result
in v1 and a `move v0,v1` tail. 17 Oct night (Fable): the mechanism is settled from the compiler source. It matches
byte for byte with `register s32 r asm("$2") = 0;` (t2CB64i.c): a hard v0 live from the first statement keeps the
block-local compare temporaries (local-alloc, lowest free register) out of v0, they take v1, x then prefers v1 through
them, and the result's own `slt` writes v0. Any plain `return` form (and-chain, nested ifs, early returns, a result
variable, a shared compare variable, inline, static, -O1/-O3 and the -fno- flags) gives a pseudo for the result
(expand_assignment's "Don't move directly into a return register"), placed after the temporaries, so it ends in v1.
Parked: a plain-C way to a hard return register at expand time is the one lever left (none known in GCC 2.7.2: the
C front end always builds `RESULT_DECL = expr`). 32 forms tried in all. 18 Oct (Fable), two more rounds, with
stmt.c read: a `return 0` does store straight into hard v0 (`expand_value_return`), and a bare `return a < b;` or a
`return` of a `&&` chain becomes `if (cond) return 1; else return 0;` (the HAVE_return case in expand_return), which
is why the chain forms branch. With three early `return 0`s and `r = p->vz < z1; return r;` (t2CB64l.c) the
layout comes out exactly as the original: the three `v0 = 0; goto end` tails merge, reorg steals the `v0 = 0` into
the second and third branches' slots and retargets them past it. Two differences remain: x is loaded into v0 (the
original: v1) and so the first branch's slot takes the fallthrough's `slt` while the original's takes the stolen
`v0 = 0`. The lever is still whatever keeps v0 busy from the first block on (hard v0 live, as `register asm` gives).
func_8012CEB0, func_8012DB84, func_8012E778: matched 17 Oct (rows in section 2).
func_8012E364: matched 18 Oct (Fable; six rows in section 2 and three section 4 notes). The 17 Oct analysis had the
register picture right (m prefers a0 from its parameter copy, t skips a0 for that) but not the lever: the quotient is
`t` itself (a global pseudo local-alloc cannot tie, so it gets a0 of its own), `k = 0x1000` is written before `d`
(sched1's position tie-break puts the load after the quotient, in v1), the flags byte's model pointer is a local of
its own (local-alloc puts it in a0 while m is live, which prunes m's preference), the three loads of the last block
are statements in the original's order, and the tail is `abs(v)` (GCC's three-instruction abssi2 template). The
templates t364g-w.c in build/work/ are the steps; tools/regdump.py and the sched dump (`cc1 -dS`, its `;;` lines show
the ready list per cycle) found each.
func_801325B8: matched 17 Oct (the two register rows in section 2; template t325F.c).
func_80132F40 (park_80132F40.c, 18 Oct, two sessions): Musashi on an actor's model, held to the box's smaller y.
Everything settled but one insn: `s16 y; s32 y0; s16 y1;` gives the compare's copy, y in s2 and &np in s1 (the s16
row in section 2), `SVECTOR unused` plus the s16's own 8 bytes give the 0x40 frame, and the call inside the
`do { np = p; r = func_80135888(...); } while (0)` moves `la a2` ahead of the argument loads. Left: `la a2` between
the lhu's and the saves, which needs the symbol's insn before the loop note and kept out of combine's fold (section
4): byte-exact with an empty asm as a second set of `from` (park_80132F40_asm.c); no plain-C form found.
func_80133AB0, func_801345F8, func_80134A74 (park_80133AB0.c, park_801345F8.c, 18 Oct): the cell-record searches,
the same shape three times. Shape, registers and the out-of-line stop block right; left is the u16 cell coordinate's
copy (`addu t0,a1`) and its second mask at the setup label, which cse merges when it follows the single-use jump
(section 4). Two rounds.
func_8013361C: matched 18 Oct (the shared `return 0` label row in section 2). engine_8012F5F4.c's first-try set of
18 Oct (func_80132DC4, E6C, EC4, EF4, func_80133060, 298, func_801336E8, 73C, func_80136BC4): no new rules.
18 Oct, second Fable session (440 / 2872, +14): func_8013339C (the s16 picks), func_801330E0 (GTE, first try),
func_80133784 (the path check: d reused, the fresh pointer in the last block, the inits' order), func_80134310 /
func_80134A28 / func_80134FB8 (the inline dot product, three copies), func_8013435C, func_80136C1C, func_80136C54,
func_80136C90, func_80134510, func_80135168, func_801343C4, func_80135004 (rows in section 2). Next in
engine_8012F5F4.c: func_80135260 (needs jtbl_801EBE30, five cases, and func_80135480, func_80135EB0, func_80136A94),
then func_80135480 (272), func_80135888 (121), func_80135A4C (194) onward; the parked three above when the cse lever
is found.
19 Oct (Opus first-try pass, 530 / 2872, +90; templates build/work/park_*.c, two rounds each):
func_80136F3C, func_80137030, func_80137178 (park_80136F3C.c): the debug markers through the inline func_80136ECC;
stores and size right, the four corners' registers rotated (best variant 18 lines off). func_80139BE0 (park_80139BE0.c):
the original compares unk18 signed (`slti`) and masks the type bits twice (`andi 0x60; andi 0xFF`). func_8013A9F8
(park_8013A9F8.c): the original copies n first (`move v0,a1`) and masks it again for the value; ours shares the test's
mask. func_8013A2BC (park_8013A2BC.c): the original rereads `*f` (`lw a0,0(a0)`) for the call after the 0x1A store; ours
reuses the stored pointer. func_8013A8FC (in park_8013A2BC.c): the inlined cursor search's found block sits before the
`unk40` test in the original. func_80139680 (park_80139680.c): one swapped pair, the `s.x` store against `sll a0,s1,1`.
func_801387B8 (park_801387B8.c): layout right (zero test before a four-label switch, `continue`s), w and p swapped in
s0/s1 and the text base in a2 (original v1). func_801397B0 (same file): the frame is 8 bytes short and the tpage
expression is narrowed to 16 bits (`lhu; srl` where the original has `lh; sra`). func_8013B204 (park_8013CA14.c): the
original copies the cursor pointer into a2 at entry and adds 8 in place. func_8013CA14 (same): the pair pointer and the
loaded value in v1/v0 swapped. func_8013CF68 (park_8013CF68.c): the lights' base register is &D_800A5E88[0].r (+0xC),
with some fields direct and some through it. func_8013D064 (same): the compare tree tests `== 2`, `< 3`, `== 1` after
the zero test. func_8013E448 (park_8013E448.c): one insn, the original's `v0 = 0` in the branch slot. func_8013F1BC
(park_8013F1BC.c): the original reloads the fade after `-= 0x10`; ours re-masks the register.
19 Oct, second Opus first-try pass (544 / 2872, +14; templates build/work/park_*.c): func_8013EB7C (park_8013EB7C.c):
the address of D_8011511A (StageMode.unkA) stays in s0 across the calls, even written as a plain scalar; the original
reads it directly each time. func_80137DD4 (park_80137DD4.c): one load, the original reads the choice byte unk1F with
`lbu` + `sll/sra 24` where ours gives `lb` (`(s8)` of a u8 read gives the original's form inside func_8013AF20's loop,
not here). func_8013B274 (park_8013B274.c, three rounds): the band clamp's branch shape comes from an `&&` chain with a
shared `clamp:` label in the last arm; left are the s16 locals' frame slots (0x68 needs 0x20 more than sv/v/w) and the
second test's threaded jump. func_80138ED0 (park_80138ED0.c, three rounds): structure right; left the colour's
`andi 0xF; andi 0xFF` into s4 with `andi 0xFFFF` per loop, and the pixel's speculative `or` in the branch slot.
func_80136A94 (park_80136A94.c): all but the last two adds: the original keeps each `o->t[k]` load and D_80126724's
load after the previous store; func_801365B8 needed `s16 D_80126720[]` array elements for the same order, but here
two of them are load-modify-stores and an array element puts the address in a register. func_801365B8
(park_801365B8.c): one register, the first `f & 1` is computed from a1 into a1 (ours `andi v0,t2,1` from the copy);
its likely twins func_80136334 and func_80136824 were not tried. Matched 19 Oct (third pass) with its twins: the flags
parameter is `s16` (the row in section 2).
19 Oct, third Opus first-try pass (568 / 2872, +6: func_80136334, func_801365B8, func_80136824, func_80135480,
func_80135A4C, func_801392FC; rows in section 2). Parked (templates build/work/park_*.c): func_80135EB0
(park_80135EB0.c): the outcode clip test; layout and the jump table right, left the inside-the-box block's load order
(the original reads e->vx once with `lhu` and loads e->vz only after the D_801152A8 store), f / cy swapped in s3 / s2,
6 instructions long. func_801372B0 (park_801372B0.c): the debug axes; all but the inlined X marker's corner registers,
the marker family's lever (func_80136F3C as `inline` gives the same; 24 corner orders as locals are worse).
20 Oct, r132 (the bulk pass, section 9; 1815 / 2872): no function parked by name. The last round's misses are in
build/work/sb5 and sb5v (one draft and its cmp log per function; `python tools/stage_bulk/misses.py build/work/sb5 60` lists the
nearest). Families seen there, untried: an `s32 *` walk m2c steps by bytes (`addiu s0,0x10C` against our `0x430`: the
abil stride lever handles u16 only; func_80163764, func_801787D4, func_801565C0, func_801567BC); `slt` against our `sltu`
(func_80148038); two constants loaded in the other order (func_80160DEC, func_8016E1CC, func_8016E26C); a byte constant
stored as `0xB4` against our `-76` (an s8 local, func_8016AFB0); a `void` draft that matches but whose placed callers use
its result (18 in build/work/sb5vT: the callee it tail-calls was itself placed `void`); register swaps (func_80147860,
func_80162F08: the parameter copies a1 / a2 against a2 / a3).
21 Oct, r133 (hand rounds on those misses; the families above are now section 9 rows and levers.py levers). Parked
after two or three rounds each, drafts in build/work/h7 (levers for Fable / Opus high): func_8018166C, func_8018872C
(the original re-copies s0 into a0 in a call's slot, `addu a0,s0,zero`, where ours leaves a0 = arg0: the call's
argument is probably a second variable for the same pointer); func_8018CD98 (the 0xFE load from the s0 copy, ours
from a0); func_80160DEC, func_801508F8 (two constants loaded in the other order: `&= ~0x180` in three forms, the
loop's `0x1A` test in three forms); func_8016E1CC, func_8016E26C (the call's first argument `0x48` loaded before
the stack argument `0x8000`); func_801806E8, func_801809D0 (the `li v0,2` store after `sw ra` and the 0xCC load: a
local pointer and a constant local tried); func_80175218 (`sw s0` before `sw ra` in the prologue); func_8016EE94
(an `or` in a0 against our a1). NextPhase and func_8016F0AC match only as `void`, but a placed caller uses their value
(func_80174714 reads func_8016F0AC's; NextPhase's at `var_v0 = NextPhase(arg0)`): the callee's real return needs
reading.
21 Oct, r138 (the 101-118 instruction functions by hand, Opus high; templates build/work/r138/park_*.c, three rounds
each): func_80177940 (the 4-digit counter's sprites; 58 off: the original ranks x / y / digits / p into s0-s3, ours
gives p s0 (regdump 1.14, p is dead in the loop) and hoists 0x74808080 out of the loop); func_8017B614 (12 off: the
`sb zero,D_8012694C` before the six loads and `move a0,s1` first in the FaceHelper arm); func_80168828 (10 off: the
original loads 0x40 into v1 early and stores the 0x40 chain and the zeros after the register saves; 720 orders and
split chains tried); func_8017FA18 (the random speed in s0 and the actor in s1: regdump ranks the actor first, 2.41
against 1.71); func_8017742C (x stays in a1, the original copies it to t1 and gives a1 to the second tag's mask);
func_8015D1B8 (6 off: the table field's address `lui v0,%hi(D_8018FDD0)` scheduled before the index's `srl` in the
original); func_80156848 (4 off: `la D_801151E0` before `sll i,2` for the flags pointer, six address forms tried).
21 Oct, r148 (the hard-shape sample, docs/decomp_pilot.md Part 7, Opus high; templates build/work/r148/<func>.c and
v*.c): func_sc01_004_8017D4A4 (173; 7 rounds; goto first loop and `a[-25]` matched the loads, s16 `found` matched its
copy; left: reorg fills the found test's slot from the body instead of the continue point, i / j in s2 / s1 instead
of s1 / s2); func_sc03_114_8017E2EC (296; frame 0x80 against 0x88 and arg0 in s0 where the original keeps it in s1 with
&m then the packed offset in s0); func_sc02_000_80188F60 (233; the loop counter, table and destination pointers in
s2 / s0 / s1 against s0 / s1 / s2, and `ori a1` direct; three loop forms tried); func_sc03_102_80180C38 (254; one
instruction: three zero stores into the actor scheduled above a stack read; struct and array forms of both tried);
func_sc02_021_8017DC10 (512; POLY_FT4 strip; about 200 lines: min / max registers, a mode chain's branch shape and a
dead `(y8 - y) * h` multiply the original keeps). Parked at triage, no rounds (the GTE renderer family, all nine
s-registers and $fp, spills): func_sc03_092_8017CE58 (733), func_sc01_000_8017BEBC (952, 111 copies, jump table),
func_sc02_031_8017F5B4 (1 511, about 50 spill reloads).

## 6. -O0 code (r113, 19 Oct)

Some files of the original were built without optimisation: `main.c` and `code_8002C410.c` in the EXE, and two
stretches of the stage engine, 0x8013B568-0x8013C98C (`src/stage/engine_8013B568.c`: the stage's sequence player
and the relocation of its loaded blocks) and 0x80144B9C-0x801458E0 (`src/stage/engine_80144B9C.c`: the stage loader
and the room-record lookup). All 18 stage functions matched in one session, 13 at the first compile and the rest in
one or two rounds: at -O0 every statement becomes code in source order, so the asm reads back almost line for line.

**Recognising it.** An `fp` frame in every function, leaves included (`addu fp,sp,zero` after the saves,
`addu sp,fp,zero` before the restores); the arguments stored to the caller's slots (`sw a0,0x8(fp)`) and every use
reloaded from the stack, with the load-delay `nop` unfilled; no delay slot filled (`jal; nop`, `j; nop`). The word
0x03A0F021 (`addu fp,sp,zero`) finds them all: SC03_001 has exactly 18 such functions, all in the two runs above.
The -O2 code after an -O0 run is a file of its own too: the linker cannot wrap one object around another
(`engine_8013C98C.c`, `engine_801458E0.c`; docs/stage_engine.md, Source files).

**Building it.** The Makefile's `O0_FILES` takes overlay files as `stage/<name>`. Compare with
`tools/cmp_all.py <file> -O0` (and `cmp_func ... 2.7.2 -O0`, `variant_search ... -O0`).

| The diff shows (-O0) | Write the source as | Example |
|---|---|---|
| `addiu v0,v1,K; lw 0(v0)` where you have `lw K(v1)`, or the reverse | the original's `addiu` form is a pointer index (`p[3]`, `*(u8 *)(h + 1)`); the folded `lw K(v1)` is a struct member (`p->f`). Index 0 (`*p`, `p[0]`) is plain `0(v1)` either way. Most fields want a struct; a `u16 *v` read as `v[1]` gave `addiu; lhu 0`, `v->y` gave `lhu 2(v1)` | func_8013B598, func_8013BC7C, func_8013C08C, func_8013C0F8 (the type byte `r->type`) |
| an increment `addiu v0,v1,1; addu v1,v0,zero; sw v1` (a copy) against `addiu v1,v0,0xC; sw v1` (none) | the copy is a post-increment (`i++`, `p++`); no copy is an assignment (`e += 3`). The `for`'s increments come out in the order written | func_8013C414 (`e += 3, i++`), func_8013C0F8 (`i++, s++`) |
| locals' stack slots | declaration order, upwards from the outgoing-argument area (0x10 when the function calls, 0 in a leaf); the locals area is rounded to 8. An unused slot is a declared local that is never used (func_8013C414 one, func_8013BD74 three); a frame 0x10 bigger with nothing stored there is `s32 unused[4];` | func_8013BCDC |
| a pointer kept in `s0` for the whole function (`lui s0; addiu s0,%lo(D_800AF630)` among the initialised locals) | a `register` local, declared in that place: `register Work *w = &D_800AF630;` (as in main.c). Calls through a function pointer go through the next free saved register (`s0`, or `s1` when `s0` is taken): the compiler's own, nothing to write | func_80144B9C, func_8013BCDC |
| a second `j end; nop` after a return in a switch | the `break;` after that `return` (`default: return D_8018D220[0]; break;`): at -O0 even unreachable statements emit their jumps | func_801457A4 |
| `memcpy` with its operands loaded into v0 / v1 first and moved (`lw v0,entry; la v1,D; move a0,v1; move a1,v0; li a2,0x24`) | a struct assignment, `D_80078E50 = *entry;`: at -O0 the MIPS block move of 0x24 bytes is a library call to memcpy, which loads its operands before moving them. A written `memcpy(&D, entry, 0x24)` loads a0-a2 directly | func_80144B9C |
| `a = b = c = v` | stores the innermost first (`c`, then `b`, then `a`); with a global array element the outermost store keeps the `lui at; addu at; sh %lo(sym)(at)` form and the inner ones get `la` + offset | func_8013B83C, func_80144B9C |
| `addu v1,i,room; addiu a0,v1,0xAC; lbu 0(a0)` (the index added to the base, the offset after) | `*(i + (u8 *)room + 0xAC)`; `room->unkAC[i]` adds the offset first, `((u8 *)room)[i + 0xAC]` folds the sum | func_80144B9C (found with variant_search) |
| a test that skips the whole body (`bnez v0,end`) against `bnez v0,skip; j end` | `if (x == 0) { ... }` gives the first, `if (x != 0) return;` the second | func_8013C0F8, func_8013B83C |
| a jump table whose two case bodies are identical | write both bodies: there is no cross-jumping at -O0. The cases come from the table (`jtbl_*` in asm/stage/data) | func_8013C0F8, func_8013C414 |

Casts between pointers and integers emit nothing at -O0, so the types only have to give the right loads, stores and
member offsets; a prototype matters only where it converts an argument. Section 4's allocation and scheduling notes do
not apply here: -O0 keeps every value in its stack slot between statements.

## 7. The mode overlays (r121, 19 Oct)

The mode overlays on MAIN.CD (docs/overlays.md) are split like ovl38: `<name>.yaml` (ovl39 title, ovl36 field, ovl37
debug menu, ovl3a cut prologue, ovl3b trial end), the exact code block in `disc/overlays/code/<name>.bin` (`make
overlays`), `make check-<name>`, sources in `src/<name>/`. -O0 files: the title's `ovl39_800D0100.c` (0x800D0100-
0x800D1E18) and all of the debug menu's `ovl37.c` (Makefile O0_FILES).

* **Names collide between overlays**: they all load at 0x800CEDF8, so `func_800CEF04` is in ovl36, ovl38 and ovl39.
  Set `$env:TWINBLADE_OVL = "ovl39"` before `draft.py`, `cmp_all.py`, `cmp_func.py` and `put_func.py`: the asm is then
  looked up in `asm/<overlay>` only.
* A jump table or strings in front of the code (.rodata links before .text) are a `data` subsegment with
  `linker_section_order: .rodata` (ovl37.yaml): as a `rodata` subsegment spimdisasm names a jump table's cases
  `.L800CF3FC`, and as(1) keeps `.L` names out of the symbol table even when declared global, so the link fails.
  Naming the cases in a symbol file instead makes splat end the function at the first case.
* The title's steps open with `register Work *w = &D_800AF630;` like main.c, even when they never use it.
* put_func.py inserts a batch's declarations but not its `#include` lines: add `#include "work.h"` (or psyq.h) to
  the overlay's C file by hand before the first placement (ovl37.c and ovl3b.c started with common.h only).
* Parked overlay functions and their levers are listed in docs/overlays.md (Matched), templates in build/work/park_o*.c.
* The -O0 debug menu (r123): all nine large pages (158-575 instructions) matched at the first compile by writing the
  draft line for line with section 6's rules (struct members for the folded offsets, `register Work *w` first, string
  literals as `extern char D_xxx[]` passed with an `(s32)` cast, the jump table's cases from `jtbl_*` in the data).
  A run of near-identical pages (the cheat presets) converts mechanically: rewrite m2c's `M2C_FIELD(&D, T *, 0xNN)` as
  `s->unkNN` and `(x | 0x80) & 0xFF` as `(u8)(x | 0x80)`.
* When two files' functions need different views of one global (the debug menu's stats block D_80078E78 as `DbgStats`
  and as a clock with an `s16` at 0x1A), keep one `extern` and cast the address into a second struct type: at -O0 and
  -O2 the cast emits nothing (func_800CFDB4, func_800CF28C).

| The diff shows | Write the source as | Example |
|---|---|---|
| (-O0) a table read as `sll; la a0,tbl; addu v1,v0,a0; lh 0(v1)` (the base loaded whole, index first, offset 0) where yours has `lui at; addu at,at,a0; lh %lo(tbl)(at)` | the array cast to a pointer: `((TitleSprite *)D_800D3630)[a].n`, `((u8 **)D_800D3624)[a]`, `((u8 *)D_800D3620)[a]`: a cast makes the base an rvalue pointer, computed into a register; a plain array symbol is folded into the address | func_800D1D14 |
| (-O0) `addiu v0,fp,0x18; addu a0,v0,zero` for one argument but `addiu a0,fp,0x10` for the other | one local array of two RECTs: `&r[1]` goes through v0, `&r[0]` is the slot's own address | func_800D0C50 |
| (-O0) a leaf with an 8-byte frame (only `fp` saved) that sets `lui v0; addiu v0,%lo(D_800AF630)` and reads Work through v0 | still `register Work *w = &D_800AF630;`: in a function without calls the register variable takes v0, not s0 | func_800D0D6C, func_800D12D0 |
| (-O0) sprite packets built field by field in globals: `sb len`, a `0xE1000xxx` word, `sb 0x64`, then the colour bytes b, g, r, and the link as `lw; and 0xFFFFFF; and 0xFFFFFF` / `lw; and 0xFF000000; or; sw` | a struct `{ u32 tag; u32 tpage; u8 r0, g0, b0, code; s16 x0, y0; u8 u0, v0; u16 clut; s16 w, h; }` per packet, `setlen(&p, 5)`, `p.code = 0x64`, `p.r0 = p.g0 = p.b0 = v` (the chain stores the innermost first) and psyq.h's `addPrim(D_800AA60C[w->frame], &p)` (the bitfield macros give both masks; the OT row is recomputed for each half) | func_800D0D6C, func_800D12D0 |
| a retry loop that sets a symbol's address into an s-register at its top (`L: lui s0; addiu s0,%lo(D_800EC9E8)`) every time round, and the parameter in s1 / the address in s0 where yours hoists the address before the loop and swaps them | the outer loop is a `goto`: `retry: do { r = CdControl(2, loc, D_800EC9E8); if (D_800EC9E8[0] & 0x10) return 1; } while (r == 0); if (CdRead2(0x1C0) == 0) goto retry; return 0;` (no loop notes, so nothing is hoisted out of it) | func_800D2A24 |
| a two-way branch whose `bnez a0` skips the first call (`a == 0` path laid out first) and yours tests `beqz` | write the nonzero case first with its own `return`: `if (a != 0) return (func_800D30B8() >> 29) & 1; return func_800D2F88();`, and give the callee a `u32` prototype (implicit int gives `sra`) | func_800D2CA8, func_800D2CE4 |
| (-O0) one `lbu` of a word global stored to three colour bytes | `p.r0 = p.g0 = p.b0 = D_800EC890;` with D_800EC890 an `s32`: the truncation to u8 is a byte load of the word's low byte | func_800D12D0 |
| `sll v1,v1,4` of one factor before a `mult` (`(w << 4) * q`), where yours shifts the other factor (`q << 4`, `mult w`) or multiplies first | write the shift: `((s.w << 4) * ((s.h - 1) / 16 + 1)) >> 1`. fold moves a constant factor outward (`w * 16 * q` becomes `w * (q * 16)`) but leaves a written `<<` alone; a temporary for `w * 16` gave yet another order (found by variant_search) | func_800D1E9C, func_800D24D0 |
| a compare tree `beq v,1; slti v,2; bnez default; beq v,2; beq v,3` (pivot 1) where yours tests 2 first | an empty `case 0: break;` in the switch: with cases {0,1,2,3} the balanced tree splits at 1 and the `case 0` test merges into the default | func_800CF104 |
| a loop counter kept on the stack (`sw; lw; addiu -1; sw; lw; bne`) | a `volatile s32 cnt = 0x100000;` local (PsyQ's timeout loops: `while (*reg & BUSY) { if (--cnt == -1) { timeout(); return -1; } }`) | func_800D2F88, func_800D298C |
| a hardware register read whose value is thrown away (`lw v0,0(v0)` then `v0` overwritten) | a pointer global to a `volatile u32` and a bare `*D_800DB650;` statement; the pointer itself is reloaded before every access because each volatile store may alias it | func_800D30D0, func_800D2D68 |
| a DECENV-like global reached as separate labels (`%lo(D_800EC9B8)`, `D_800EC9D0`, ...) with one `la` reused for a load and a store | one struct over the labels: `extern DECENV2 D_800EC9A4;` (the PsyQ movie sample's DECENV plus one word) and `D_800EC9A4.d.imgid`; the relocations compare by shape and the linker resolves the labels' addresses. Reading `id = dec.imgid;` **before** the `snap = dec.slice;` struct copy gives the two loads through the `la` (the block move invalidates memory) | func_800D24D0 |
| a stack RECT placed above the other locals (0x18 after pointers at 0x10 / 0x14) where yours puts it first | declare it inside the block that uses it: an inner block's locals get their slots after the function's | func_800D27A0 |
| the result of a loaded pixel held in the loaded value's register (`lhu v0; ... or a0,v0,a2`) where yours reuses the loaded variable | a fresh `u16 n = r \| g \| b;` for the result instead of `c = r \| g \| b;` | func_800CFEB4 |
| (-O0) a function table read in the `lui at; addu at,at,v0; lw s1,%lo(tbl)(at)` form where yours loads the base with `la` and adds | the table is an array of one-member structs: `typedef struct { void (*fn)(void); } MenuFn; extern MenuFn D_800D4C54[]; D_800D4C54[w->step].fn();`. A plain `void (*tbl[])(void)` gives the `la` form (main.c's func_80010B40, the title's func_800D0100); found by variant_search | func_800CEE74, func_800D0450 |
| a frame 8 bytes bigger with nothing stored there | `s32 pad[2];` declared last (both movie functions; section 2's unused-local row); in a function with no locals at all, the only declaration (`ra` at 0x18 in a 0x20 frame) | func_800D1E9C, func_800D24D0, ovl36 func_800CEF5C |
| (-O0) `lhu; andi v1,v0,K; andi v0,v1,0xFFFF; beqz` for a flag test where yours has `lh` | the global is `u16` and the test is a plain `if (x & K)` (gcc narrows the AND to the 16-bit mode and zero-extends it for the test); an `s16` loads with `lh` | ovl37 func_800CFDB4, func_800CF28C (D_800D4C9C, the pad's new presses) |
| (-O0) a step-and-wrap on a global: `lw; addiu; addu copy; sw; lw; slti` (reloaded) against `lw; addiu; addu copy; sw; bgez v1` (the copy tested, no reload) against `... sw v1; lw v0; addiu v1,v0,1; sw v1; slti v0,v0,7` (the old value tested) | `x++; if (x >= 7)` / `if ((x -= 10) < 0)` (an assignment used as a value: its copy is tested; with an `s16` the copy is `sll; sra` first) / `if (x++ >= 7)` (the original's double increment, kept as shipped) | ovl37 func_800CF28C |
| a call result passed on unchanged where yours adds `sll; sra` or `andi 0xFFFF` after the `jal` | the callee returns `int` even when it returns a `u16` global (`s32 func_800D1714(void) { return D_80078E50; }`): an `s16` / `u16` return type makes the caller re-extend | ovl36 func_800CF8E4 |
| a `jal` with nothing loaded into `a0` before it, the result used as an argument (`jal f; andi a0,v0,0xFF; jal g`) | an unprototyped declaration called with no arguments: `extern s32 func_800291B4();` and `g(func_800291B4())` (the callee takes an argument the caller never sets) | ovl36 func_800D1028, func_800D109C |
| a result initialised to 0 kept in `s0` across the first call (`jal f; sw s0` ... `beqz v1; move s0,zero`) where yours keeps it in `a0` and moves it at the end | initialise it before the call: `s32 r = 0; s32 t = func_80029504(); if (D_800D375C != NULL) r = D_800D375C(t); return r;` | ovl36 func_800D05E8 |
| after an allocation call, `bnez s0,body; move a0,s0` then `j end; move v0,zero` (the NULL return laid out first) where yours tests `beqz` and returns at the bottom | `if (o != NULL) { use(o); return o; } return NULL;` (an early `if (o == NULL) return NULL;` is laid out the other way) | ovl36 func_800D21C4, func_800D222C, func_800D2294 |
| two separate `return 1` blocks (`beq ...,L1` with `li v0,1` at L1, and `beq ...,L2` with `li v0,1` in the delay slot) where yours shares one | nested ifs with a return each: `if (a != K) { if (b != L) return f(); return 1; } return 1;` (the `\|\|` form merges them) | ovl36 func_800CF864 |
| a run of `beq a0,v0,L` against constants loaded one by one (`addiu v0,zero,0x2015` in each slot), several runs each ending in `j end; li v0,K` | one `if (a == 0x2013) return 1;` per constant: an `\|\|` chain of neighbouring constants is folded into range tests (`addiu; sltiu 2`) and a `switch` of 27 cases builds a jump table. The last test of a `return K; return 0;` pair becomes the store flag (`xori; sltiu; sll 2`) by itself | ovl36 func_800CFC5C |
| a call's s16 result extended (`sll; sra`) before a struct field or global it is compared or combined with is loaded, where yours loads first or drops the extension | the converted result in an s32 local, the other operand read after it: `s32 t = (s16)func_800291DC(x); s32 c = st->unk34; if (c - t >= n)`, and `t = (s16)f(); r = g(k, D_80078EAC - t);` | ovl36 func_800D10EC, func_800D11F0 |
| two paths that call the same function with different constants share one `jal` (the constant in a branch's delay slot, `bnez v0,L; addiu a0,zero,5`), where yours keeps the value in a saved register | write each call with its constant (`func_80011D54(5); return;` and `func_80011D54(6);` last): cross-jumping merges them and reorg puts each constant in its branch's slot. A shared `a = 5` / `a = 6` variable lives across the earlier calls | ovl36 func_800CF628 |
| a two-case switch (cases 0 and 1) tested `beq v,1; slti v,2; beqz default; bnez default` (pivot 1), where yours tests `beqz` first | an empty `case 2:` (alone with `break;`, or stacked on `default:`): {0,1,2} splits at 1 and the 2 test merges into the default. The blocks still follow the cases' source order (case 0 before case 1) | ovl36 func_800D19F0, func_800D1BF8 |
| a call to a function defined earlier in the same C file as `s16` tested straight from v0 (`jal; beqz v0`), where yours adds `sll; sra` | the original caller saw an `int` prototype (the callee was in another source file): call it through a cast, `((s32 (*)(void))func_800CFBE8)()`, which emits the same `jal` | ovl36 func_800D1BF8 |

## 8. The ability packages (r125, 19 Oct)

The 35 packages (MAIN.CD entries 13-47, docs/overlays.md "The ability packages") are split by
`tools/gen_ability_ovls.py`: `abil/ovlNN.yaml` and `abil/symbol_addrs_ovlNN.txt`, sources `src/abil/ovlNN.c`, asm
`asm/abil/ovlNN/`; `make split-abil` (splat twice: the first pass lists the outside symbols, which go into the symbol
file under their plain names), `make check-abil` (all 35; `make check-ovlNN` one; part of `make check`).

* **Names carry the package** (`func_ovl13_800CAE0C`, `D_ovl13_800CB880`, splat's `symbol_name_format`), so no
  TWINBLADE_OVL: draft.py, cmp_func, cmp_all and put_func find them as they are (put_func checks `check-ovlNN`).
* `include/abil.h`: the actor (Musashi's object, the stage engine's) is read by offset, `AF(a, u8, 0x197)` (the
  button template's step), `AF(a, u16, 2)` (the actor's state); `AbilStep` is a step / state handler table entry,
  **unprototyped** (`void (*)()`: the tables are called with and without the actor).
* **The packages are built from shared templates**: `tools/abil_clone.py groups` lists the shapes (equal
  instructions once each package symbol is numbered by first use) shared by several unmatched functions;
  `abil_clone.py <template.c>` writes a matched representative's C, renamed, for every function of its shape to
  `build/work/clone/<package>.c` (cmp_all, then put_func each). 12 templates gave 127 functions.
* `tools/auto_match.py scan 0x80 --abil` / `apply --abil`: the branchless functions (46).
* **The bulk pass** `tools/abil_bulk/run.ps1 [-void]`: m2c for every unmatched function, cleaned into C, compiled,
  the matches placed (212 over four passes). What the clean-up does, each confirmed by matches:

| The diff shows | Write the source as | Example |
|---|---|---|
| `addiu a1,zero,0x1F` where the draft sets `a0` (m2c dropped a first argument passed through untouched in a0) | the actor as the first argument, `func_80147078(a, 0x1F)`. m2c only sees registers set before the `jal`; `m2c_ctx.py` gives it each callee's arity (the highest a-register set before any of its calls) as `--context` | func_ovl1a_800CAF38 |
| one instruction short: m2c returned a leftover `v0` (`return temp_v0;` after a store) | a `void` function (m2c `--void`); try both drafts, keep what matches | func_ovl20_800CB078 |
| `sll v0,v0,6` against our `sll 8` for `(x << 6) + &D_xxx` | the symbol as a byte, `extern u8 D_xxx;`: m2c's `&D + n` is byte arithmetic; an `s32` scales it by 4 | func_ovl32_800CDB4C |
| `lh` of a halfword global where the draft has `lhu` (m2c typed it `u16` from another use) | the global as `s16` (the load says signed; a store does not tell) | func_ovl34_800CD708, func_ovl33_800CCC54 |
| `addiu v0,zero,0xFF; sb` against our `li v0,-1` | the field as `u8` (m2c types a byte store it cannot sign as `s8`) | func_ovl33_800CD010 |
| `sll v1,v1,16; bgez` against our `andi v1,0x8000; beqz` (m2c's `x & 0x8000`) | the sign test on the halfword, `if ((s16) x < 0)` (`rewrite.py s16sign`, r127: 4 of 11 drafts) | func_ovl27_800CB720, func_ovl28_800CC4E8 |
| `move a0,s1` in a branch's delay slot where we leave a `nop`, around a `jal rand` | `rand()` with no arguments: m2c passes the live a-registers to a callee it has no arity for (`rewrite.py rand`) | func_ovl34_800CD884 |
| `move v0,v1` before the epilogue: our `var_v0 = 0; if (x == 0) { ...; var_v0 = 1; } return var_v0;` | early returns, `if (x != 0) return 0; ...; return 1;` (and the halfword read `s16`: `lh`) | func_ovl34_800CD494 |
| a byte zero test `lbu 0x58` where the original has `lw 0x58` after byte stores to 0x58-0x5A | the test reads the word: `if (AF(a, s32, 0x58) == 0)` (m2c follows the stores' type) | func_ovl20_800CB77C |
| a `switch` case whose test falls into a call shared with an earlier `goto` (call block between the case and its `else`) | `if (x == 0) { call: f(a); } else { x -= 4; } break;` inside the case, with the early test's `goto call;` | func_ovl1f_800CAF7C |
| a field load (`lw a0,0x34(a2)`) above the branch that tests a global, ours inside the taken path | the field read into a local before the `if`: `s32 t = AF(a, s32, 0x34); if (D == 0x11) f(t, ...)` | func_ovl17_800CB2CC |
| three or more read-modify-writes in m2c's order (0x10, 0x18, 0x14) give ours a different load order | the natural order, x y z (0x10, 0x14, 0x18): m2c prints the scheduled order (`rewrite.py rmwsort`) | func_ovl2a_800CBC14, func_ovl2a_800CBC90, func_ovl2a_800CBEB0 |
| m2c: `sp14' undeclared` (it saw `sp10` passed by address, then `sp14`, `sp18` read) | one buffer: `s32 sp10[3]; f(..., sp10); x = sp10[1];`, or an `AVec sp18` when the halfwords are written (`sp18.pad = 0`) | func_ovl34_800CD6A4, func_ovl29_800CB1F8 |
| eight word loads from the stack and eight stores through a pointer (m2c: `sp14` ... `sp2C` undeclared) | a MATRIX on the stack copied whole: `AMtx sp10; ... *AF(o, AMtx *, 0x34) = sp10;` (`AMtx` in abil.h; plus `s32 pad[2]` for the frame here). The same for a model's coord matrix copied from another model: `AF(m, AMtx, 0x34) = AF(src, AMtx, 0x34);` (lw/sw in fours; m2c shows eight word copies with temps) | func_ovl31_800CD27C, func_ovl26_800CB0B0 |
| a stride loop over an object array (`var_s0 += 0x58` on a `u16 *`: m2c's byte stride scaled by 2) | `u8 *p; ... p += 0x58` with `AF(p, u16, 0)`, `for (i = 0, p = D; i < N; i++, p += 0x58)`, or with an end pointer `for (p = D; p < D + 0x820; p += 0x68)` when the original compares `sltu` against base + size; the array `extern u8 D[]` (`rewrite.py stride`) | func_ovl35_800CD4D0, func_ovl19_800CAF08 |
| our `sltu; negu; and` (branchless select of 0 / -0x80000) against the original's branch with two calls | the call in both arms: `if (x) f(a, 0, 0, -0x80000); else f(a, 0, 0, 0);` (m2c merges the arms into one call with a variable) | func_ovl1a_800CB034 |
| m2c's `u16 sp10; u16 sp12; u16 sp14;` (a vector on the stack, passed by address) and 16 instructions short | one `AVec v` with `v.vx += ...`; m2c's bias form `if (x < 0) x += 0x1FF; ... x >> 9` is `x / 512`; `v.vy += X - 0x20` (not `v.vy - 0x20 + X`) for `lhu vy; addiu -0x20; addu` | func_ovl33_800CD204 |
| m2c's run of stack words (`sp20` ... `sp3C` read from `*arg1`, `sp24 += ...` after a call on `&sp10`) and 10-40 instructions short | the stack holds an `AMtx` (and `AVec`s): `AMtx m; m = *arg1;`, `m.t[0] += ...`; lay the locals out from the frame (0x10 vector, 0x18 vector, 0x20 matrix ...) | func_ovl2a_800CBD54, func_ovl32_800CD63C |
| indexed `lwl/lwr` pairs through four labels (`D_x+3`, `D_x`, `D_x+7`, `D_x+4`) with `sll 3` on the index (m2c: "Unable to handle lwr") | an `AVec` table: `extern AVec D_x[]; AF(a, AVec, 0x60) = D_x[AF(a, s32, 0x50)];` | func_ovl34_800CDAB4 |
| a global's address held in a saved register (`lui s2,%hi(D); addiu s2` before the spawn's null test, then `sb 0(s2)`, `move a1,s2`) | a local pointer set at the top of the function, `u8 *p = &D;`, used for the calls and the byte store (`p = &D` inside the `if` leaves it after the test) | func_ovl19_800CBD68 |
| two stores of one value in the other order (`sh 0x1C` then `sh 0x1A`) | a chained assignment stores right to left: `b.vy = b.vz = x;` stores vz first (m2c writes `sp1C = t; sp1A = t;`) | func_ovl25_800CB1CC |
| the frame larger and m2c's `s32 sp18` passed by address | the buffer is bigger: `s32 sp18[7]` (the frame difference over 4, plus one), not a separate pad | func_ovl34_800CDEB4 |
| m2c's 7-argument call `f(a, &sp20, a + 0x10, a + 0x14, /* extra? */ a + 0x58, ...)` | keep all seven: the stack arguments are real (sp+0x10..0x18); drop only the `(s32)` casts | func_ovl20_800CB6E8 |
| a function that a matched caller calls with arguments (`too many arguments` on placing) | an old-style empty definition, `void f()`, not `f(void)` | func_ovl1c_800CB4AC |
| `addiu v0,v0,-2; sll v0,2; lw %lo(D)(at)` against our `sll 2; lw -8(at)` (a table call on the state minus 2) | the index in its own statement, `s32 i = AF(a, u16, 2) - 2; D[i](a);`: in one expression GCC folds the -2 into the address (`rewrite.py idx`) | func_ovl31_800CCB8C, func_ovl30_800CCBA0 (+2 clones) |
| the frame 8 (or 0x20) bytes larger, `addiu sp,sp,-0x20` against our -24, every other instruction equal but the sp offsets | an unused local array, `s32 pad[2];`: GCC 2.7.2 gives an array stack even when nothing reads it (`rewrite.py frame` takes the size from the log). The frame rounds to 8, so when `pad[2]` overshoots by 8 try a lone `s32 pad;` (func_ovl2b_800CAE0C) | func_ovl22_800CB350, func_ovl19_800CB3FC (0x20), func_ovl2d_800CBCBC |
| the original loads through another pointer (`lw 0x20(s2)`, a global) **before** storing to the new model object, ours after (and a branch laid out differently) | the model as a real struct, `AModel *m` (abil.h, game.h's ModelObj) with `m->rot.vx = ...`: GCC 2.7.2's alias check lets a load move above a struct-member store, not above an `AF()` store. Then write the stores in source order (rot.vx before rot.vy here; m2c shows the scheduled order) | func_ovl34_800CDD9C, func_ovl33_800CD390 |
| two halfword globals 4 bytes apart (`lh D_801152B0`, `lh D_801152B4`) whose loads and the stores around them will not take the original's order in any statement order, the second `lui/lh` scheduled after a store | the two are one vector's vx and vz: `extern AVec D_801152B0;` read as `.vx` / `.vz` (one object to GCC's scheduler), stores in field order (0x234, 0x238, 0x23C, then the state). The struct actor was not needed (r131: three parked ovl34 functions) | func_ovl34_800CCFA8, func_ovl34_800CCFDC, func_ovl34_800CD0DC |
| one global's address held in a register (`lui a1; addiu a1,%lo(D)`, then `sh 0(a1)` twice) beside direct `%lo` stores to its neighbours | that global is an array: `extern s16 D[];` stored as `D[0] = ...` (the neighbours stay plain), also when its address is passed to a call first (`f(o, D); D[0] = 0xF0;`, `rewrite.py arr`) (r131) | func_ovl2a_800CB3B4, func_ovl1c_800CB1BC |
| the original keeps a model store (`sh 0x1A(s3)`) **above** a later global load, ours hoists the load over it | the inverse of the AModel lever: write that model through `AF(m, s16, 0x1A)` (a `u8 *m`), not `m->scale.vy`; GCC 2.7.2 moves loads over struct-member stores only (r131) | func_ovl2a_800CB3B4 |
| m2c passes a second argument that is only a register left over from the statement before (`func_801619D0(s1, a1)` where a1 held the model just stored through) | drop it, `func_801619D0(s1)`: the same as the `rand` row, for any callee whose arity m2c_ctx guessed from a caller that left a1 set (r131) | func_ovl32_800CCBE4 |
| the frame 0x20-0x40 bytes larger with the passed buffer high in it (`addiu s0,sp,0x40`, nothing between 0x20 and 0x40) | an unused array declared **before** the buffer: `s32 pad[8]; AMtx m;` (GCC 2.7.2 gives the first local the lowest address; `AMtx m; s32 pad[8];` puts m at 0x20) (r131) | func_ovl32_800CD2EC |
| one `lwl/lwr` + `swl/swr` pair between two globals next to byte stores (`sb 0(v1)`, `sb D+1`, `sb D+2`; m2c's `M2C_UNALIGNED32`) | 4-byte colours: `extern ACol D_a, D_b;` (`ACol` in abil.h, a CVECTOR) with `D_b.r = ...; D_a = D_b;` (r131) | func_ovl28_800CC310 |
| `move v1,v0` after a call whose result is only tested (`beqz v1; andi v0,v1,0x8000`), where ours tests v0 directly; the function later switches on another call's result, also copied to v1 | one local for both results, `u32 t; t = f(a, &v); if (t) ...; t = g(a); switch (t)`: one pseudo, one register (r131) | func_ovl2f_800CB118 |
| m2c's clamp `if (x > 0xB0000 \|\| (v = -0xB0000, (x < 0xFFF50000) != 0))` (ours `sltu` against `lui 0xfff4; ori 0xffff`) | the plain signed clamp, `if (f > 0xB0000) f = 0xB0000; else if (f < -0xB0000) f = -0xB0000;`; and for a slow-down toward zero (`x -= 0x8000; if (x < 0) x = 0;` on the field) a second local, `y = x - 0x8000; f = y; if (y < 0) f = 0;` (r131) | func_ovl34_800CD288 |
| a loop over an object array where ours hoists a constant out of the loop (`li s3,0x200` before it), strength-reduces a field address (`addiu s0,s1,32`), counts down, or reverses the index, and the original reloads the constant each pass with the plain counter | **the loop written with a backward `goto`**: `i = 0; p = D; loop: ...; i++; p += 0x10C; if (i < 0x60) goto loop;`. GCC 2.7.2 runs its loop optimizer only on for / while / do (the LOOP_BEG notes), so a goto loop is compiled as plain blocks, as m2c's `loop_1:` shows (r131) | func_ovl32_800CD894 |
| a real loop (the compare constant hoisted, `li a2,0x25` before it) that walks a pointer up with a separate counter up (`addiu a0,1; slti a0,0x14`), where a moving pointer gives ours a counter down (`li v1,19`) and `D[i]` gives `lui at; addu at,at,v1` | index through a base-pointer local: `O68 *p = D; for (i = 0; i < 0x14; i++) if (p[i].type == 0x25) n++;` with the array as a struct of the stride (`AObj68` in abil.h for D_8011F9D0): the giv is then a pointer, and i is used, so it is not reversed (r131) | func_ovl2d_800CAED8, func_ovl26_800CAFD0, func_ovl25_800CB3B4 |
| a small constant held in a saved register across a loop (`addiu s3,zero,0x25` before it, `move a2,s3` at two calls) where ours loads `li a2,37` at each call | the constant is a local, `s32 k = 0x25;` passed to both calls (GCC 2.7.2 hoists the variable's register, not the literal); the 0x10C-stride actor walk itself is `for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C)` with `extern u8 D_801202A0[];` (r131) | func_ovl34_800CD5CC |
| m2c's two dozen `s16 sp10 ... s8 sp3E; s32 sp40` stack locals (frame 0x58) filled with `sh/sb zero` runs, then a loop of six `lbu; addiu s0,1; sll 24; sra 24; sh` reads ending `addiu s0,-1` before `func_80017758(&sp10, a + 0x38)` | one stack primitive, `APrim s` (abil.h: four AVecs, four ACols, a code word), zeroed with chained stores (`s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;` stores vz first), the table `extern s8 D[]` read `*p++` five times and `*p--` the sixth (r131; ovl15 and ovl2c are twin packages: clone by hand, swapping the table symbol) | func_ovl15_800CB6FC, func_ovl15_800CB988 |
| a load through another pointer (`lhu 0x1A(a1)`) right after one store to the actor and before the rest, where ours loads it after all of them | m2c prints the stores to one base in their **scheduled** order (disjoint offsets on one base reorder freely); a load through another pointer cannot pass any of them, so its statement sits where the load is: `a.12 = s.12 >> 1; a.1A = s.1A >> 1; a.30 = ...;` (r131) | func_ovl16_800CB228, func_ovl14_800CB254 |
| `lwl/lwr` + `swl/swr` pairs at o and o+4 (m2c's `M2C_UNALIGNED32`, a compile error) | one 8-byte struct copy with 2-byte alignment: `AF(d, AVec, 0x58) = AF(s, AVec, 0x10);` (`AVec` in abil.h, an SVECTOR; `rewrite.py avec`, r127) | func_ovl2e_800CB038, func_ovl32_800CD1D4 |
| (r137) an "untried" function whose old m2c draft MATCHes as it is (one.py says so at once) | place it: five of the 65 had never been placed. Run one.py over a list first (a triage) before writing anything | func_ovl29_800CAEE0, func_ovl35_800CD58C |
| (r137) GTE code (`lwc2`, `ctc2`, `rtpt`, `mvmva`, "handwritten instruction") | gte.h's macros as they are (ldv3, rtpt, stflg, nclip, stopz, stsxy3_f3 / _g3 / _gt3 / _gt4, avsz3 / 4, stotz, ldrgb, nccs, ncct, strgb, SetRotMatrix, ldclmv / rtir / stclmv, ldv0 / rtv0 / rtv0tr / stsv); add `#include "gte.h"` to the package file, or put_func fails at link with no message. gte.h gained `gte_strgb3` (three pointers) and `gte_strgb3_g3` (4, 12, 20), PSX side only | func_ovl21_800CBA44, func_ovl28_800CB1F8, func_ovl25_800CB964 |
| (r137) a primitive loop `for (n...) { ldv3(vert + idx * 8, ...); rtpt; ...; f += stride; p += size; }` with `s1 = prim + D_800C7C74 * size / 2` | `for (; n != 0; n--, f += 0x14, p += 0x30)` with the indices read as `AF(f, u16, 0xA) * 8`; `continue` for each failed test; `return p;` (ovl28's F3 / F4 / G3 / G4 / FT4 / GT3 / GT4 loops, all first or second try) | func_ovl28_800CB3C0, func_ovl28_800CBE28 |
| (r137) a stack primitive's address set in a0 at the top and passed to the final call (the GTE stores go through it in between) | a pointer set before the first use, `ps = &s; gte_stsv(ps); ... f(ps);` (a plain `&s` is rebuilt just before each use) | func_ovl25_800CB964, func_ovl25_800CB6A0, func_ovl20_800CB900 |
| (r137) a clamp whose two branches share one store, the bound in a register (`lui a0,0xE; slt; bnez L; nop; lui a0,0xFFF2; slt; beqz; L: sw a0`) | a bound variable: `c = 0xE0000; if (x > c) goto st; c = -0xE0000; if (x < c) { st: AF = c; }` (an `\|\|` becomes an unsigned range test, an else-if two stores) | func_ovl21_800CB4A4 (parked for other reasons) |
| (r137) a call with an empty delay slot that m2c shows as a `goto` target from two arms | the call written in both arms: cross-jumping merges them and the jump lands on the `move a0`, so the slot stays empty | func_ovl30_800CCBF0 |
| (r137) the s2 / s3 roles of an accumulator and the actor swapped around a loop | initialise the accumulator inside the branch that uses it (`if (...) { r = 0; ... }`), not before | func_ovl27_800CB190 |
| (r137) a list walk whose word stays in a0 for the call | the word in a local read before the loop and at its end: `w = *q; if (w) do { f(w); q++; w = *q; } while (w);` | func_ovl25_800CAE74 |
| (r137) v0 read on entry before anything sets it, and a flag in a3 where a1 is free | an uninitialised local, `s32 x; if (!(x & 1))`; a3 means a1 / a2 are live: the tail call passes the parameters through, `g(arg0, arg1, arg2)`. In ovl28 the split cut the real start (two instructions sit at the end of the jump table before it): see docs/overlays.md | func_ovl28_800CAE88 |
| (r137) globals loaded above the prologue and above a field load, the global stored after it | read the globals into locals first: `n = D - 1; c = D2; m = AF(a, ...); D = n; switch (c)` | func_ovl2a_800CB218 |
| (r137) `slt; xori 1; beqz` | the comparison kept in a local, `c = x >= -0x20000; if (c)`; and a subtraction GCC re-associates (`x - (r - 0xC00)`): the inner value in a temp | func_ovl25_800CBCD4 |
| (r137) chained halfword / byte stores in the opposite order | a chain stores its rightmost target first: for 4 then 0xC then 0x14, `AF(p, 0x14) = AF(p, 0xC) = AF(p, 4) = x`; colour bytes the same | func_ovl28_800CB5D0, func_ovl35_800CCBC0 |
| (r137) a byte array global whose +1 address is held while its neighbours are stored by `%lo` | chained stores into one array, `D[1] = D[2] = 0xA0; D[0] = D[4] = D[5] = D[6] = 0;` | func_ovl1b_800CB378, func_ovl18_800CAFE0 |
| (r137) word colours reloaded through a pointer after each store into a stack primitive | a primitive with s32 colour words (`typedef struct { AVec v[4]; s32 c[4]; s32 code; }`): struct-member stores may alias the scalar loads, so GCC reloads | func_ovl20_800CB900 |
| (r137) a compare tree 0, then `< 3`, then `== 4` (default elsewhere) | an if chain on a u32, `if (r != 0 && (r < 3 \|\| r == 4))`; a three-case `switch` (1, 2, 4) tests 2 first | func_ovl2d_800CB228, func_ovl2e_800CB114 |
| (r137) a jump-table switch in a package placed: `jtbl_relabel` exits (no table after the function) | tools/jtbl_relabel.py now reads `jtbl_ovlNN_XXXXXXXX` / `func_ovlNN_XXXXXXXX` and takes a table whose label runs on over words that are no case addresses | func_ovl28_800CB00C |
| (r137) a renamed copy of a matched function against its twin MATCHes, then fails to place | the compare ignores call targets: check the twin's `jal` list (func_ovl32_800CDE04 calls func_ovl32_800CE004 where its twin calls 800CDDA8) | func_ovl32_800CDE04 |
| (r137) `conflicting types for X` on placing a hand match | the package file's own declaration wins: give the hand file the same return type (`extern s32 RotMatrixY();`) and cast at the use; a `void` declaration whose value a new function needs becomes `s32` (unused results compile the same) | func_ovl24_800CB1EC, func_ovl1b_800CB0C8 |

* **A lever over every draft** (r127): `python tools/abil_bulk/rewrite.py <lever> build/work/m2c build/work/rw/m2c`
  writes only the functions the lever changes; then `cmpdir.ps1`, `keep_matched.py`, `place.ps1` as for a bulk
  pass. Add each lever that a hand match confirms to its LEVERS table.
* **Hand rounds**: `python tools/abil_bulk/one.py <func> --dir build/work/m2c3` writes the draft to
  `build/work/h/<func>.c` once and prints only the differing lines (cmp_all cuts a diff at 1800 characters);
  `tools/abil_bulk/place.ps1 <files>` aligns, places and copies each match over its shape.
* **Placing**: put_func with many files reverts all of them when one fails: place file by file. A template's
  prototype (`void f(u8 *a);`) or an earlier guess (`extern s32 f();`) conflicts with a new definition of `f`:
  `abil_bulk/align_decls.py` rewrites them to the definition's signature first. Two r127 catches: align_decls edits
  src before put_func, and put_func's revert does not undo it (a failed placement once left `extern u8` for a word
  that a placed function stores as `s32`; place.ps1 now restores the file); a matched caller that passes nothing
  (`f()`, a0 passed through) needs the function unprototyped, which align_decls now keeps; when that caller comes
  after the definition, give the caller the parameter instead (`void g(u8 *a) { f(a); }` compiles the same as
  `void g(void) { f(); }`: func_ovl32_800CE1C4). A batch that wants a
  byte of a word src declares as `s32` writes `*(u8 *) &D_x` rather than retyping it (func_ovl2a_800CBF3C).
* **A placed function changed its caller** (r125): a placement that fails `check-ovlNN` although cmp_all said MATCH
  can be the source edit, not the function. `align_decls.py` once rewrote an indented call (`func_ovl13_800CAEE0(a);`)
  into a prototype, so the button template's caller lost its call (2 instructions short). Find the function at the
  first differing address in `build/abil/ovlNN/ovlNN.map` before parking anything (the regex now anchors at column 0).

## 9. The stage engine's bulk pass (r132, 20 Oct)

The ability packages' bulk method (section 8) run over the stage engine: `tools/stage_bulk/` (run from PowerShell).
`round.ps1 <name>` is one round: `m2c_stage.py` drafts every unmatched -O2 function of src/stage twice (as m2c gives
it, and `--void`), one file per function in `build/work/<name>[v]/` (the target file's includes, all its typedefs,
its own declarations of every symbol the draft uses, guesses for the rest); `cmp_par.py` compiles them against the
original eight at a time (cmp_func); `place_stage.py` places the matches a target file at a time (it compiles the
whole file once with all of them in, drops the drafts the errors point at, then runs `make check-stage` and halves
only on a byte mismatch: 200 functions in 20 s, where put_func per function took minutes); then
`tools/abil_bulk/rewrite.py all` over the misses (AVec written as psyq.h's SVECTOR) and the same again. `misses.py
<dir>` groups the compile errors and lists the nearest misses. Each round re-drafts with the declarations the last
one placed, so a draft deferred for a clash usually goes in the next round. The stage files that took matches
(engine_8013C98C.c, engine_801458E0.c, sc03_001.c) now have abil.h's `#define AF(p, T, off)` after their includes; the drafts read the actor and other structs by offset, like the packages.
568 -> 1815 (+1247): five rounds and the stage levers below (`tools/stage_bulk/levers.py <misses> <out>`: cond, ret,
bit, width, passthru), about one point of the weekly bar in all. Round 5 found only 21 more: what is left (1057) is the
near misses of `misses.py` (register choice, s0 / s1 swaps, a reordered pair) and the larger functions m2c drafts badly.

| The diff shows / the error says | Write the source as | Example |
|---|---|---|
| `lw %lo(D)(at)` (or `lhu`) after `sll v0,2` where the draft gives `lbu`: m2c's `(s32) *(&D_x + (i * 4))` | a typed array, `extern s32 D_x[]; ... D_x[i]` (the stride gives the type: 4 s32, 2 s16, none u8; a cast gives it when present) | func_80180D5C |
| `invalid type argument of unary *` on m2c's `*((i * 4) + AF(p, s32, 0xB0))` | the field is a pointer: `AF(p, s32 *, 0xB0)[i]` | func_80154150 |
| `X redeclared as different kind of symbol` for a function whose address is stored (m2c: `extern u8 func_X;`) | declare it as a function, `extern void func_X();`; `&func_X` is the same address | func_801726D0 (`D_80127088 = &func_80172760;`) |
| `too few arguments to function X` in callers placed earlier, which pass a0 through untouched | an old-style definition, `void func_80146CA0(arg0, arg1, arg2, arg3) s32 arg0; ...; {`: no prototype, and word-sized parameters compile the same (place_stage.py does it when every parameter is `s32` or a pointer) | func_80146CA0 |
| `conflicting types for X` between a guess left by an earlier round (`extern void f();`) and f's own definition | the guess takes the definition's return type (`extern s32 f();`): a call whose result is unused compiles the same | func_8014F3E8 |
| `nop` in the epilogue's delay slot where the draft has `li v0,1` | a `void` function (m2c returned a leftover v0): the `--void` drafts | func_8014CB68 |
| `bnez s0` / `sw s0,0x20(s1)` after a call where the original tests and stores v0 (`bnez v0`; `sw v0` in the slot) | the assignment in the condition: `if ((AF(arg0, s32, 0x20) = t = func_8012C1B8(arg0, arg1)) == 0) {` (levers.py cond; recipe row 81 for the stage) | func_80142DC4, func_80142E38, func_80142EC0, func_8014305C |
| `move v1,zero` ... `sltiu v1` ... `move v0,v1` (a result variable) where the original sets v0 | early returns: `if (c) { return e; } return 0;` (levers.py ret) | func_80161A00, func_80161A30, func_801619D0 |
| `srl v0,7; andi v0,1` where the original has `andi v0,0x80; sltu v0,zero,v0` | the masked bit through a temporary: `s32 bt = AF(arg0, u16, 0xAC) & 0x80; return bt != 0;` (fold turns a single-bit `!= 0` in one expression into a shift; levers.py bit) | func_80149AA8 |
| `lbu` / `lw` of a global at another width than its declaration (an earlier round declared it from another use) | read it at the original's width, `*(s32 *)&D_801DD064` / `*(u8 *)&D_8011F738` (levers.py width, the width from the cmp log) | func_80182898, func_80170EAC |
| `nop` in a `jal`'s delay slot where ours sets `li a0,10` (the same constant was put in a0 by an earlier branch's slot) | the call passes nothing, `func_80187904()` with its K&R declaration: a0 still holds the 10 (row 148's pass-through; levers.py passthru) | func_8017EFD4, func_8017F058, func_80184968 |
| (r133) a draft that MATCHES alone but `place_stage.py` defers it, `too many arguments to function ClearDisplayFlag20` (a named function with a one-parameter prototype; the draft passes its own a1 on) | drop the extra argument, `ClearDisplayFlag20(arg0)`: a1 is untouched either way | func_8015BD8C, func_8015A1C8 (11 in all) |
| (r133) the same, `too few arguments to function func_80149020` where the callee is already placed with a prototype | make the callee's definition old-style (`s32 func_80149020(arg0, arg1) s32 arg0; s32 arg1; {`): word parameters compile the same, and the caller passes a1 through | SetActionHandler, func_80149020, func_80149048 |
| (r133) the same, `void value not ignored`: placed callers `return f(...)` and f matches only as the `--void` draft | the callers call it as a statement, `f(...);` (`return f()` was m2c's guess; v0 is left as f left it, so the code is the same), and `extern void f();`. Not when a caller really uses the value (func_80174714 reads func_8016F0AC's) | func_801479BC, 26 others |
| (r133) `lhu %lo(D_x)` (or `lw`, `sh`, `sb`) where ours reads `lbu 0(at)` after an index: m2c's `extern u8 D_x[]; ... D_x[(i * 2)]` | index by bytes at the original's width, `(*(u16 *)((u8 *)D_x + (i * 2) * 1))` (levers.py width, array case) | func_80188438, func_80156A1C, func_8013B204 (the 19 Oct park) |
| (r133) a scalar global (`extern u16 D_8011511C;` in the file) where the original's store comes before an unrelated table load and ours after | write it as the struct field the draft had, `((SVECTOR *)&D_8011511C)->vx = ...`: a field store schedules like the original's; the plain scalar is held back | func_80141874 |
| (r133) `addiu s0,s0,0x10C` where ours steps `0x430`: m2c steps a word pointer by bytes (`s32 *p; p += 0x10C;`) | step through a byte pointer, `p = (s32 *)((u8 *)p + 0x10C);` (levers.py stride) | func_8017E1B4, func_80163764, func_801565C0 (5) |
| (r133) `move s0,a2` (or `addu v0,a1`) where ours uses a0: m2c's `void f(s16 arg2)`, the parameters before the used one left out | fill the gaps, `void f(s32 arg0, s32 arg1, s16 arg2)` (levers.py argpos) | func_80153C44, func_8014BC0C, func_80155C0C |
| (r133) `slt` against our `sltu` on `x <= 0xFFE10000` | the constant negative, `x <= -0x1F0000` (an unsigned constant makes the compare unsigned) | func_80148038 |
| (r133) `ori 0x8080` against our `li -32640` | store it as u16, `AF(p, u16, 0xAE) = 0x8080` | func_80148634 |
| (r133) `srl 5` against our `sra` on a call's result | `(u32) rsin(...) >> 5` | func_80180488 |
| (r133) `place_stage.py` neither places nor defers an old-style (K&R) draft: put_func's split does not see the definition | place it by hand (the INCLUDE_ASM replaced, its new externs before it) and run check-stage | func_8014C4AC |
| (r133) a result variable (`r = 0; if (c) { D = 0; r = 1; } return r;`): `move v1,zero` ... `move v0,v1` | early returns with the statements inside the if (levers.py ret, widened) | func_80153BF0 |
| (r133) a table search, `move v0,v1` in the found branch's slot and `move v0,zero` after the loop, m2c's `goto loop` with a result variable | `i = 0; for (p = &D_x; i < n; i++) { if (*p == k) return p; p = (u16 *)((u8 *)p + stride); } return 0;` (`i = 0` before the for, so it is set before the address; an end pointer `p < end` for the bounded form) | func_8014C050, func_8014C088, func_8014C168 |
| (r133) a word walk, `li a1,0x38` before the step adds where ours sets it in the call's slot | `do { f(*p, 0x38); p++; i++; } while (i < 3);` (or an indexed `D_x[i]`): the call first, the steps after | func_8016216C, func_801622C4, func_80162760 |
| (r133) `li v0,1` / `li v0,2` against our v1 for a flag picked from a test | `AF(p, s16, 2) = v ? 1 : 2;` (or an if / else of the two stores) instead of m2c's `x = 1; if (!v) x = 2;` | func_80181200, func_80180884 |
| (r133) `lui v1,0x8000` / `lw v0` / `or v0,v0,v1` order swapped | the compound assignment in each arm, `AF(a, s32, 4) \|= 0x80000000;` / `&= 0x7FFFFFFF;` | func_801470C0, func_801628F4 |
| (r133) m2c's `f(/* extra? */ arg4)` where the original passes a0-a3 through and arg4 on the stack | `f(arg0, arg1, arg2, arg3, arg4)` with the full parameter list | func_80173A28 |
| (r133) `li v1,0xB4` against our `-76` | the local is `u8` (or `s32`), not m2c's `s8` | func_8016AFB0 |
| (r133) `addu v0,zero,zero` in a branch's slot before a tail call where ours has `nop` | the function returns the call's value or 0 (`s32`, `return f(...)`); a placed `void` callee becomes `s32` with no return statement (the same code) | func_80146924 (func_80146994 retyped) |
| (r133) a draft that matches with its own declaration of a global (`extern u8 D_x;` against the file's `s8`, or `SVECTOR` against `u8`) but not with casts to the file's type | retype the file's declaration when its other uses do not depend on it (a store of 0, an address), then check-stage | D_80078EBF (func_8016A1CC), D_8011F750 (func_801627E8) |
| (r138) an 8-byte `lwl/lwr` copy from `lui a1,%hi(D_X)` and a later store to D_X as its own `lui at; sh %lo(D_X)`, where ours stores through the copy's address register | the copy through another symbol plus offset (`AF(&D_80126B58, SVECTOR, 0x90) = AF(&D_80126B58, SVECTOR, 0x88);`), the store to the scalar: the block move's address pseudo is cse'd with every later use of the same symbol, a different symbol is not related | func_801463A0 |
| (r138) the opposite: a global whose address was passed to a call, its first field later read through that s-register (`lh 0(s0)`), the other fields direct | a struct type for it and `.x` (a typedef in the draft where the file has none, e.g. sc03_001.c without SVECTOR); a plain scalar or `(&D)[0]` does not share the register | func_8017D8A8 |
| (r138) `beqz v0,L1; move a0,s0` / `j L2; li a1,K1` / `L1: li a1,K2` / `L2: jal f` | the call in both arms, `if (c) f(a, K1, 0); else f(a, K2, 0);` (cross-jumped); a variable for the argument gives a store-flag `li; li` pair | func_8014B7A4 |
| (r138) `slti` (signed) on a masked u16 counter or a halfword `andi 0x8000; sra` where ours has `sltiu` / `srl` | the value in an `s32` local (`n = (x + 1) & 0x3F; x = n; if (n < 0x1F)`, `s32 a = h; (a & 0x8000) >> 2`): written on a u16 expression GCC proves it non-negative | func_8017D8A8, func_80148648 |
| (r138) `beq 0x53; slti 0x54; bnez out; li 0x73; bne out` for a two-value test | `(t == 0x53 \|\| (t >= 0x54 && t == 0x73))` with t `s32` (a two-label switch gives a plain chain) | func_80148648 |
| (r138) one global loaded with `lh` into an s-register, another with `lhu; sll; sra` | both are `s16` locals (`s16 x = D_A; s16 z = D_B;`): HImode pseudos, extended at the use | func_801749C8 |
| (r138) in a switch case, `sh a0` / `beq v0,a0` where a0 held the case constant from the dispatch, and ours loads `li v0,2` again | use the switch variable, not the case's constant (`case 2: if (x != k) x = k;`): cse follows the dispatch jump and substitutes the register | func_80187DAC |
| (r138) an inner jump table that starts below the first value with code (entries 2..31, code only for 7, 18, 23, 31) | `case 2: default:` on the default code: the fifth label makes it a table and sets its base | func_801859AC |
| (r138) `j L; move a0,s1` into a shared tail whose `jal` has `li a1,0xC` in its slot, where ours writes the tail twice and cross-jumping lands one instruction off | `goto tail;` from the earlier arm to a label in the later copy | func_80159120 |
| (r138) calls nested in another call's arguments, each result in an s-register (`sll s1,v0,16; sra`) before the next call | write them as arguments, `p = f(p, g1(), g2(), g3(), y, v);` (left to right), with globals read before the calls in locals assigned first and an `s16` prototype for f | func_80141100 |
| (r138) a model's coord copied in two groups of four `lw` / `sw` | `AF(dst, MATRIX, 0x34) = AF(src, MATRIX, 0x34);` | func_80163A94, func_80167714, func_801678F0 |
| (r138) a callee declared `void` (or `(void)`) whose result a draft uses, or that a draft calls with an argument | retype it (`s32 func_80146A6C(...)` in every prototype), or make an empty definition `()`: callers that ignore the value or pass nothing compile the same | func_801678F0, func_80162B1C |
| (r138) a box test whose two arms share one `slti 0x40; beqz` in ours (cross-jumped into an abs), where the original's positive arm is `slti; bnez next; j cont` | `if (x >= 0) { if (x < 0x40) goto ok; continue; } if (-x >= 0x40) continue; ok:` | func_8014A850 |
| (r138) a failing `beqz` whose delay slot holds the first insn of the fall-through (`addiu a0,s1,4`), where ours steals the `i++` from the target | reorg predicts a jump to a `for` loop's continue point as taken: write a `do { ... next: i++; off += 0x10C; } while (i < n);` with `goto next` (a plain label, an EQ test predicted not taken) | func_8014A850 |
| (r138) the high half of an s32 global (`lh %lo(D_X+2)`) loaded after a store to the word, where ours hoists it | read it as `((s16 *)&D_X)[1]` (an array element may alias the store); a read the original does hoist stays the plain scalar `D_X+2` (two array reads in one block share an address register) | func_8014B944 |
| (r138) the same register pair swapped in every copy of a repeated block (`a1` / `a0` for the pointer and the loaded target) | declare the block's locals inside each copy, `{ u8 *c; u8 v; c = &D[i]; v = *c; ... }`, not once for the function | func_8013D178 |
| (r138) a value kept in s0 across code with no call, where s0 is later the loop variable | one variable for both (the screen y and the loop's packed nibbles), declared `s32` (`u16` adds `andi 0xFFFF` before each use in the loop) | func_8016B234 |
| (r138) `addu v1,s0,v1` (the s-register first) where ours has the operands the other way | the field read into a local first, `w = a->h; y2 = k + w;` | func_8016B234 |
| (r138) a leaf's frame bigger than its locals need, nothing stored there | an unused array local sized to the difference (`u8 unused[0x28];`: test the size, the base frame is not zero) | func_80179B74 |
| (r138) `sll s0,v0,16; sra s0,s0,16` right after a call where ours moves v0 to s0 and extends later | the result in an `s32` local through a cast, `r = (s16)ratan2(dz, dx);` (an `s16` local extends at the use) | func_8014DD8C |

## 10. The other stage images (r143, 21 Oct; docs/decomp_pilot.md)

A stage other than the village is split by `tools/gen_stage_cfgs.py --split SCxx_yyy` (`make split-stg` for every
`stg/*.yaml`): `stg/<stage>.yaml` (the engine a `bin` piece, the own code from 0x8017BE9C, the data), `stg/symbol_addrs_<stage>.txt`
(names by hand, then the EXE's names from a first splat pass), `stg/symbol_addrs_engine.txt` (the engine's functions under
the village's names, shared), sources `src/stg/<stage>.c`, `make check-<stage>` / `make check-stg` (part of `make check`).
Symbols carry the stage (`func_sc02_031_8017BEA4`, `D_sc02_031_80188B50`), so no TWINBLADE_OVL; put_func and draft.py find
them. Needs build/stage/stage.elf (`make check-stage`) for the engine's names.
**r145: all 139 images are configured and committed** (docs/decomp_pilot.md Part 4): `make split-stg` splats the
committed configs (24 s), `make stg-cfgs` regenerates them, `make check-stg STG=<stage>` checks one, `make
stage-progress` / docs/stage_status.md count matched / total per image.

* **Clones first:** `python tools/stage_clone.py SC02_031 build/work/<dir>`, then `cmp_par.py` and
  `$env:TWINBLADE_STG = "sc02_031"; place_stage.py <dir>` (29 / 29 in SC02_031).
* **Bulk:** `$env:TWINBLADE_STG = "sc02_031"; tools/stage_bulk/round.ps1 <name>` (m2c_stage.py and place_stage.py read
  the variable; three rounds gave 84 of 155).
* **Hand:** `python tools/stage_bulk/hand.py <func> [--dir build/work/<round>]` copies the draft once to `build/work/hs/` and
  prints the differing lines; place the matches with place_stage.py (a folder of them and a `_matched.txt`).
* Functions m2c cannot draft (no file in the round's folder) are often short and easy by hand from the asm (4 of 4 tried).

| The diff shows / the error says | Write the source as | Example |
|---|---|---|
| a frame 0x18 or 0x10 bytes bigger around a call that gets a stack address (`GsGetLw`, `RotMatrixYXZ`, `func_8012B14C`) | the buffer at its real size: a MATRIX is `s32 m[8]`, a VECTOR `s32 v[4]` (stores `v[0..2]`), not m2c's one `s32 sp10` | func_sc02_031_8017F53C, func_sc02_031_8017F124, func_sc02_031_8017C180 |
| m2c's bias form `q = x >> 12; if (x < 0) q = (x + 0xFFF) >> 12; r = x - (q << 12);` | `x % 0x1000` (a remainder, not a division); read a field the original loads before the division into a local first | func_sc02_031_80184028, func_sc02_031_8018418C |
| two calls of the same clean-up (`func_8012CAE4(a)`) where the original has one inline after the inner failure's call and the outer failure branches into it, the success block last | `if (t == 0) goto fail; ... if (t2 == 0) { f(...); fail: g(a); return; } success...;` (a plain `if (t != 0) { ... }` with g at the end cross-jumps the other way) | func_sc02_031_80183394, func_sc02_031_80182C60 |
| `beqz s0` to a `move v0,zero` at the end after an allocation, the body falling through and returning the object | an early `if (o == 0) return 0;` before the body (section 7 has the other layout) | func_sc02_031_801830EC |
| the success body first and `j end` over a `move v0,zero` | a result variable, `if (c) { ...; r = &f; } else { r = NULL; } return r;` | func_sc02_031_80184358 |
| a two-way test of a halfword (`bne v1,1`, `bne v1,2`) where m2c wrote a `switch` and ours builds a compare tree | an `if` / `else if` chain | func_sc02_031_8018496C |
| `lwl/lwr` + `swl/swr` 4-byte copies into a stack struct at 2-byte offsets | a struct of two halfwords copied whole: `typedef struct { s16 x, y; } XY; s.p = arg0[0];` with the stack object a struct of the fields m2c listed | func_sc02_031_80181E88 |
| a global's address set in a register at the top, before the first branch, used much later | a pointer local set at the top: `u8 *g = &D_80078E78; ... AF(g, u16, 0x1A)` | func_sc02_031_8017F24C |
| `cc1` dies (exit status 2816) on a short `while` list search | the loop with labels and `goto` | func_sc02_031_80181F5C (parked: still one `addiu a1,8` / `-8` pair short) |
| `M2C_FIELD(AF(...), s16 *, 0x12) = ...` (m2c's nested field left in the draft: parse error) | one more `AF(..., s16, 0x12)` level | func_sc02_031_801844C4 |
| (r148) a switch draft that MATCHES but place_stage defers with "build differs" / `jtbl_relabel: no address for func_scXX_YYY_...` | fixed in tools/jtbl_relabel.py (r148): it now reads stage-prefixed function and jtbl names and the stage's own symbol file. Every jump-table switch in a split stage was blocked before | func_sc05_017_801808D4 (clone of func_80182BB8) |
| (r148) no m2c draft at all for a switch (`jump table is not provided`) or a GTE function (the bulk wrapper drops it) | write it from the asm: the table's entries in asm/stg/<stage>/data give each case's address; for GTE run m2c directly (`m2c.py <the .s>`) for a skeleton and fill the gaps with gte.h | func_sc02_026_8017FEE0 (299, one round), func_sc06_029_8017EF34 |
| (r148) `void value not ignored` in a clone draft: the stage file declares an engine function `extern void` that the shape uses | retype the declaration in every stage file (`extern s32 func_8012C658();`, also func_8012CBCC, func_8012BEE8): callers that ignore it compile the same; one retype placed 13 clones of other shapes too | func_sc02_028_80181AD0 and 14 more |
| (r148) `nop` in a branch's delay slot where ours puts the next statement's first instruction (not an epilogue) | the function returns a value: `s32`, v0 live at the exit stops reorg filling the slot (section 9's `--void` row is the opposite case) | func_sc03_024_80183ACC |
| (r148) `move v0,sN` (or `addu v0,s4,zero`) right before a compare or test of a local that is already masked | the local is `s16`: a known non-negative HImode value is copied, not re-extended | func_sc05_008_8017E850, func_sc01_004_8017D4A4 |
| (r148) a global read-modify-written through an address register (`lui a1; addiu a1; lw 0(a1) ... sw 0(a1)`) where ours uses `lui at` pairs | declare it an array and write element 0: `extern u16 D_80126B5E[]; D_80126B5E[0] += ...`; neighbours that use `%lo` pairs are the other elements (`D[1]`...); fields of one record read through its base (`-0x32(a3)` for 0xE) mean one symbol with offsets (a struct) | func_sc03_094_8017E52C, func_sc01_001_80182D04 (`D_800DE2F8[6]`), func_sc03_014_80186C4C |
| (r148) `slti v,N; bnez default` inside a small switch's compare tree where ours tests only the case values | a `case K:` label on the default code (`case 0: default:`) makes the tree test the gap | func_sc02_041_8017CEF4 |
| (r148) a stack address hoisted into an s-register before a loop (`addiu s6,sp,0x20` among the invariants) where ours computes it at each call | assign it to a pointer local inside the loop (`dp = &d; f(dp, ...)`): loop.c hoists the invariant set | func_sc03_107_8017EB70 |
| (r148) the failure branch of an inner test placed among the early returns, before the loop | `if (0) { miss: f(a); return 1; }` there and `goto miss` from the loop | func_sc03_107_8017EB70 |
| (r148) the original keeps one load after a store where ours schedules it above (same base, different fields), in a two-armed store | write the store in both arms (`if (c) X = A \| k; else X = B \| k;`): sched sees two blocks, jump2 merges the tails afterwards | func_sc03_105_8017EC98 |
| (r148) two ORs of constants kept apart (`or v0,v1` with 0x40000000, then `lui 0x2000; or`) where ours folds them | `0x20000000 \| (p \| 0x40000000)` (the constant outside); `(p \| A) \| B` folds. In variant_search, write `\|` through a macro (`#define OR(a, b) ((a) \| (b))`): a bare `\|` inside `{{ }}` splits the alternatives | func_sc03_105_8017EC98 |
| (r148) one s-register holding a table address for three calls and later a found actor | one variable for both (`q = (s32)&D_tbl; f(arg0, q, ...); ... q = find(...)`) | func_sc03_014_80186C4C |
| (r148) a 512-instruction GTE function's frame 0x80 bytes too big (`vars=192`) | s16 temporaries next to inline GTE asm went to the stack; make them `s32` (the original compares `lh` values directly) | func_sc02_021_8017DC10 (parked) |
| (r148) a matched callee placed with a two-parameter prototype, called by the original with a0 only (a1 passed through) | call it through a K&R cast, `((void (*)())f)(arg0)`: no prototype change, same `jal` | func_sc03_007_80185230 |
| (r148) `sll 16; sra 19` pairs from the high halves of a result VECTOR, loaded `lhu` | read the halves as u16 elements, `b.x = ((u16 *)r)[1]; b.y = ((u16 *)r)[3] + 0x28; b.z = ((u16 *)r)[5];` in source order x, y, z | func_sc03_090_801875E4 |
| (r148) cmp_func says MATCH for a variant with a `goto` to the wrong place | it compares jump targets by shape: only place_stage's image check is proof. Keep the semantically faithful variant | func_sc03_105_8017EC98 |

Parked in SC02_031 (two rounds each; drafts in build/work/hs/): 8017ECEC and 8017ED60 (frame / re-association),
80184760, 80181EF0, 80184B94 (the original keeps a value in a0 or copies a0 to a1 at entry: not found), 80182CF4
(203 instructions: case 0's two calls are not cross-jumped in the original), 80184844 (a counted loop's `i++` in a delay
slot), 8017CCF8, 801818A4, 8017D8DC, 8017F050, 801831B4, 8017C180, 80181C2C (register choice and store order), 80181F5C.
