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
* put_func keeps the target file's declarations (r161): a batch compiled with other types matches in cmp_all and then
  fails `make check`; and its declaration scan skips `extern void (*D[10])(s32);` (use a typedef).
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
| `-O0` code: every local on the stack, `fp` frame | it is `main.c`, `code_8002C410.c`, one of the stage's two -O0 files or a stage image's `src/stg/<stage>_o0.c` (r209: SC03_014 / 015 / 118 / 119); write plain statements, locals in declaration order (section 6) | func_80010BB4 |
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
| (r150) a u16 field decremented and tested, the original reloading it (`sh v0,0(v1); lhu v0,0(v1); bnez`) where yours re-masks the register | two statements, `if (f != 0) f -= 0x10; if (f == 0) {...}`: the second test sits at a join label (two predecessors), so cse knows nothing and reloads; the first branch is threaded straight to the body | func_8013F1BC |
| (r150) a `u16` parameter copied first (`move v0,a1`), the range test done on the hard register in place (`addiu a1,-2; andi; sltiu`) and the value re-masked from the copy (`andi v0,v0,0xFFFF; addiu; sll`) | `u16 n` with the test `n >= 2 && n < 7` and the value through an `s32` copy: `v = n; c->unkE = (v - 2) << 10;` (written on `n` directly, the store narrows the arithmetic to HImode and shares the test's subtraction) | func_8013A9F8 |
| (r150) `sll v0,idx,1; addu v0,v0,base` (the index first) where yours adds base first | `e = (s8 *)(idx * 2 + (s32)base)`: the add's operand order follows the expression | func_8013CA14 |
| (r150) a struct member's address kept in s0 across calls (`lhu a1,0(s0)` three times) where the original reads `lui; lhu %lo(D_X)` each time | read the plain scalar symbol (`D_8011511A`), not the struct member (`D_80115110.unkA`): a member address is forced through a register and cse merges the later uses; a scalar's `(mem (symbol))` is taken as is. One read wanted an `(s16)` cast (the `s16` parameter) | func_8013EB7C |
| (r150) the original reloads `*f` for a call argument right after a halfword store through another pointer (`sh v0,0x1A(v1); lw a0,0(a0)`), where yours passes the value stored to `*f` a moment ago | no plain form found: `func(*(Win * volatile *)f)` matches (cse keeps the stored value because `f`'s constant address makes `*f` non-varying, so the in-struct varying store does not invalidate it); eight other forms tried | func_8013A2BC |
| (r166) a tpage argument shifted with `srl` (`srl a1,s1,28; andi 3`) where yours gives `sra` | the parameter is `u32` (`u32 a`), the shift unsigned | func_80018094 |
| (r166) a row stride multiplied as `sll v0,v0,1; mult a0,v0` (the doubled column count times the row) where yours multiplies first and shifts the product | write the shift: `row = base + p[3] * (cols << 1); v = *(u16 *)(idx * 2 + (s32)row);` (fold leaves a written `<<` alone, the func_800D1E9C rule) | func_8002F4E4 |
| (r166) an inner loop's pointer hoisted into a saved register AFTER the outer loop's hoisted halves (`sra s6; sra s5; addiu s7,s2,0x2A0`), copied in per outer iteration (`move s1,s7`) | the pointer as a giv of the inner counter: `func_80030D80(&g_SoundChan[8 + j], 0)`; its init is a single-set pseudo the outer loop hoists in the order met. An explicit biv `k = base + 0x2A0; k += 0x54` has two sets, so scan_loop never moves its init (n_times_set must be 1) | func_800346D0 |
| (r166) in a two-biv loop the body's base register is the record (`s0 = s1 + 0x1FA`, stores at `-0xE(s0)`, `-0x1F6(s0)`) where yours picks the lowest offset as the base | the combined address giv is the LAST one recorded in the body (record_giv prepends): put the statement whose address you want as the base last: `*(s32 *)(f - 0x1F6) = *(s32 *)s; f[1] = 1; f[0] = 0;` | func_80038210 |
| (r166) a clear loop with the counter set before the pointer and both stepping (`li a1,0xF; addiu a0,s1,0xF; L: sb zero,0x1BA(a0); addiu a1,-1; bgez; addiu a0,-1`) | two bivs in the `for`, counter first: `for (j = 0xF, q = s + 0xF; j >= 0; j--, q--) q[0x1BA] = 0;` (`(s + j)[0x1BA]` alone is a giv not worth reducing: no second register) | func_80038210 |
| (r166) a table read inside a loop with a loaded index in the `lui at; addu at; lhu %lo(sym)(at)` form where yours hoists the symbol into a saved register | a one-member struct array: `typedef struct { u16 v; } U16R; extern U16R D_80065438[]; D_80065438[*(s16 *)st].v` (the func_80031A98 rule for one table); the loop bound compared as its own symbol `(s32)p < (s32)D_80076298` | func_800373D0 |
| (r166) a result tested against -2 and -1 as `beq -2; beq -1; j default` with the case bodies after, the `return 0` of two cases in one shared tail | `switch (r) { case -2: ...; break; case -1: ...; return 1; default: cnt = (u16 *)&D_800A46CC; *cnt += 2; break; } return 0;` (the compare tree is the switch's; a `return 0` per case lets sched1 hoist `v0 = 0` and costs the case values v0, the func_8001ACF0 rule) | func_80030538 |
| (r166) a pad state halfword loaded and returned unchanged when nonzero (`lhu v0; bnez v0,end`), a masked parameter in a0 reused by a K&R-style call (`andi a0,s0,0xFF` ... `jal f` with no argument move), the same parameter masked in place later (`andi s0,s0,0xFF`) and passed with `move a0,s0` four times, `andi 0xFF` results in the call slots and `andi 0xFFFF` compares | `t = (&D_80078DD2)[port * 0x26]; if (t != 0) return t;`; `id = func_80014C28(port) & 0xFF;` with the file's `u8 f(u8)` prototype (the u8 argument's promotion mask is the same expression as the index's, cse shares it and the call's copy gives it the a0 preference); `s32 p = port;` then `lx = func_80014D30(p, 5);` with `u16` locals and `u8` returns (the extension is sunk into each call's slot; an `s32 p` passed to the `u8` parameter needs no second mask: combine knows p's nonzero bits); `if (rx >= 0x80) r = 0x4000; else r = 0x1000;` (jump.c emits the else value first and the then value after the test) | func_800149E0 |
| (r166) three stores at equal scheduler priority in the other order (`sb; sb; sh i` where yours gives `sh i; addiu i; sb; sb`) with the counter's increment and the offset's increment both in the loop | the `for` header's increments in the other order: `for (i = 0, off = 0; i < 2; off += 0x1FC, i++)`: with every insn at priority 1 sched1 falls back to insn order, and the increments' order decides which store is anti-dependent on the insn scheduled last | func_80037D98 |
| (r166) two early `return 0`s (`beqz; bltz` to one shared `v0 = 0` block, the second with `v0 = 0` stolen into its slot), the work after them, and a two-way tail `jal; sw; j end; v0 = 0` / `jal; j end; v0 = 1` where yours inverts the first branch | the early returns as one nested condition with the work inside: `if (f() != 0 && s >= 0) { g += a; if (h() != 0) { if (s != 0) { g = f(); return 0; } k(); return 1; } } return 0;` (a chain of early returns, or a shared `ret0:` label, both invert the first branch) | func_8002A108, func_8002A354 |

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
* **global-alloc's priority is an integer** (global.c allocno_compare: `(int)(floor_log2(refs) * refs / live_length * 10000 * size)`, ties to the lower pseudo number). Two loop-hoisted addresses with equal weighted refs and live lengths one apart tie whenever `390000 / L` and `390000 / (L + 1)` truncate alike (every third L), and then the operand expanded first wins. r152's renderer sat on such a tie (`&g.sz1` / `&g.sz2` in t8 / t9 swapped, every other instruction identical) until the loop's insn count at allocation time moved by one; that count is sched1's recount after combine, so it includes combine's `(use reg)` placeholders (one per `s16` memory read in a compare, placed at the nearest label or jump when the dying temporary's insn was merged away), no-op copies deleted after allocation and tails cross-jumped after reload: two sources with identical output can allocate differently. r144's form of the same function (explicit `s16` temporaries per compare, a third depth variable, `g.z = m + 0x200`) lands on a non-tie.
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

* **cse follows jumps and then reprocesses the block (r149, cse.c cse_end_of_basic_block / cse_main).** A conditional
  jump is followed when its label has one use and a BARRIER precedes the label (TAKEN), or when it jumps around a
  label-free block (AROUND, -fcse-skip-blocks); then the same block is scanned again with that branch NOT_TAKEN, so both
  arms are processed with the top block's table. A register copy `m = o` survives only when m is the canonical register
  (make_regs_eqv: NEW wins when it is a pseudo and OLD a non-fixed hard register, or when NEW lives beyond the current
  extended block and its last use is later than OLD's); otherwise every later use of m becomes o and the copy dies.
  That is why `if (x == 0) {...; return 1;} return 0;` keeps the first call's `move a0,s0` (the fall-through block is
  scanned after the taken branch, without a0 == arg0) and why a copy of the actor inside an if-body can be kept.
* **cse forgets memory at any register-addressed store (r149).** A store through `(reg + k)` invalidates every memory
  equivalence whose address is register-based, disjoint offsets on the same base included; a value stored and re-read
  across another store is reloaded unless the reuse is inside one expression (the nested `+=` of func_ovl2b_800CB55C).
* **jump.c's if/else rewrite (r149).** `if (c) x = a; else x = b;` becomes `x = b; if (c) x = a;` (jump.c, "Simplify
  if (...) x = a; else x = b;") unless the test references x or the "x = b" insn carries a note; the moved store is
  then live across the test and conflicts with the test's temporary, which is where a `move v0,v1` tail comes from.
  The store-flag rewrite (`x = a; if (c) x = b` with a or b zero into `x = (c)`) needs BRANCH_COST >= 2 and no shared
  label; with the arms written on a value the test uses, neither fires.
* **MOVE_RATIO is 2 on MIPS (r149, expr.c).** mips.h does not define it and movstrsi exists, so every struct copy of 8
  bytes or more is one movstrsi_internal insn (lw/sw in fours, the last store split off after reload to fill a delay
  slot) whose words cse cannot see; three separate word assignments are by-pieces moves it can (func_ovl2a_800CB708).
* **combine and hard-register copies (r149, combine.c).** Without SMALL_REGISTER_CLASSES combine may substitute a hard
  register source (an incoming parameter, a call's v0) into a use of the pseudo it was copied to, but only when the
  pseudo dies in that use: if it lives on, the combined PARALLEL is not recognised and nothing changes. So `sll a1,a1`
  on a parameter means its pseudo had that one use left (func_ovl1f_800CB760), while a kept `move s2,v0` next to
  `beqz v0; sw v0` (func_ovl21_800CBF28) is not combine's doing.
* **stmt.c's `return x == y` jump form is dead on MIPS (r149).** HAVE_return is `mips_can_use_return_insn ()`, false
  before reload, so returns of comparisons take the generic path; the branch-and-constant returns of the originals
  come from `if (...) return 1; return 0;` statements, and the shared true-label of an `||` is what keeps the last test
  from becoming an `slt` (func_ovl28_800CC0A0).
* **`p[k]` is an in-struct reference** (r161): the alias rule above (a varying in-struct address never conflicts with a
  fixed scalar) applies to `ptr[const]` and `ptr->field`, so sched1 hoists such loads above stores to scalar globals and
  sinks such stores below later global loads. Where the original keeps the source order, read and write through a plain
  pointer variable: a walking `s32 *p = base + 0x12; x = *p++;` when no call intervenes (func_8017B824), or a fresh
  `q = p + k; *q = f(*q);` per field across calls (func_8017B0E4; a walking pointer keeps its adds there).
* **flow weights a pseudo's refs by loop depth** (r161, flow.c `reg_n_refs += loop_depth`): a `do { } while (0)` around a
  variable's sets and uses raises its global-alloc priority (`floor_log2(refs) * refs / length`) without changing the
  code, but its loop notes are scheduling barriers. func_800CFE60's w/mode swap goes the right way with it (park).
* **An orphan pseudo can cost a stack slot** (r161): an address pseudo that combine folds into the load (`&D_800D34AC[k]`)
  keeps its ref count, gets no hard register, and reload still gives it a slot: `vars= 8` with nothing stored there. A
  32-bit table read whole and as its upper half from one address is a bitfield struct (`{unsigned file:12; unsigned
  mode:4; signed slot:16;}`): one address, no orphan, and the frame matches (func_800CFE60).

* **`*(p + k)` is in-struct, `*(T *)((u8 *)p + k)` is not (r165, expr.c INDIRECT_REF).** expand_expr marks an
  INDIRECT_REF whose operand is a PLUS_EXPR MEM_IN_STRUCT_P ("If address was computed by addition, mark this as an
  element of an aggregate"); AF's cast is a NOP_EXPR between the deref and the PLUS and hides it. So a varying
  `((u8 **) s2)[8]` load passes a scalar-global store in sched1 while the same field through AF waits behind it
  (func_ovl27_800CB058).
* **`short / constant` is shortened by the C front end (r165, c-typeck build_binary_op, convert.c).** A division by a
  positive constant sets `shorten`, so `(s16) x / 10` and `(s32) h / 10` (get_unwidened sees through the cast) are
  computed in HImode and sign-extended again where an int is needed (`sll/sra` before the call); an int variable
  holding the sign-extended value, `s32 d = (s16) sum; rsin(d / 10)`, keeps the division in SImode
  (func_ovl31_800CD57C).
* **How sched1 picks among ready insns (r165, sched.c schedule_block / rank_for_schedule).** Within the top-priority
  group the insn with the largest potential hazard wins (a memory insn over an ALU op or a copy); otherwise the rank
  is priority, then class against the last scheduled insn (independent = 3 beats anti/output = 2 beats data = 1), then
  INSN_LUID (the later insn first). A boosted insn (set once and live, birthing_insn_p) has the maximum priority, so a
  twice-set variable's load sinks to the block's start while a single-set one lands as late as possible
  (func_ovl2b_800CB480's `u16 st = AF(2) + 1`). A load costs 2 cycles to its consumer; the memory unit blocks a load
  for one cycle after a store. Parks that are only this: func_ovl23_800CB2AC (three boosted `lh` loads and the a2 = a1
  copy), func_ovl2a_800CB708 (the third load's second consumer is picked after the three stores).
* **A block move whose source address stays a constant runs with three scratch registers (r165, mips.c
  output_block_move).** When combine folds the single-use `reg = &sym` into the movstrsi, output_block_move spends one
  of the four scratches on `la` (lw x3 / sw x3 / lw x2 / sw x2 for a matrix); with the address in a pseudo it moves
  four words at a time. Two copies of the same global in one extended block share the pseudo (cse: COST(reg) is 0, a
  SYMBOL_REF costs COSTS_N_INSNS(2)), so the second never folds: func_ovl13_800CB56C / CB138 are parked on it (a user
  pointer, a dead reassignment, an initialised declaration and loop notes change nothing).
* **cse folds a paradoxical subreg of an s16 copy back to its source (r165).** After `x = t` (x s16, t s32), the
  then-block's `x += k` reads `(subreg:SI x)`, which cse replaces by t, and the copy dies; the original's
  `addu v1,v0; ...; addiu v1,v1,k` (func_ovl23_800CB0D0, func_ovl18_800CB168) is not reached from C yet.

* **jump.c's 0/1 store-flag needs the constants in place (r165).** `if (c) return 0; return 1;` becomes
  `slti; xori` (the arms are `v0 = 0; jump end` and `v0 = 1` falling into end); a constant return written through a
  variable, `x = 1; return x;`, keeps the branches with the constant in the delay slot (func_ovl1f_800CB7B0).
* **A loop's init statements written right before the loop (r165).** `p = table; i = 0;` written early in the
  function get early LUIDs: sched1 places them at the block's start and the counter's long life drops its
  allocation priority below the actor's (s3 / s4 swapped); written right before the `do`, they land late and the
  registers come out as the original's (func_ovl2f_800CB3BC, func_ovl16_800CAF84).
* **A stored counter makes cse reload the halfword the arithmetic reads (r165).** `t = AF(0x23A) + 0x100;
  AF(0x23A) = t; u = AF(u16, 0x236) - t;`: the store through the actor invalidates the test's `lh` of 0x236, so
  the subtraction reloads with `lhu` as the original; with the store after the subtraction cse reuses the `lh`
  value through a copy and an s16 orphan slot appears (func_ovl25_800CB288).
* **Single-set pointers sink, so set the shared one after the call (r164).** In a two-arm `if` whose arms both give
  one pointer variable p (arm 1 `p = (SVECTOR *)arg`, arm 2 a table address), p is set twice and is not boosted, so
  its add lands before the argument setup; the original computes the other address first and p in the jal's slot.
  Block-scope `SVECTOR *q = &tbl[arg].a; SVECTOR *t = &tbl[arg].b;` (set once: sched1 sinks them) then the call, then
  `p = t;` gives the original's order and still shares s0 with arm 1 (func_8017B614, B490, B238, B368).
* **A struct-member store at a fixed address keeps its place (r164).** `((T *)&g)->m = 0` is an in-struct constant
  address: it conflicts with the in-struct register reads after it, so it stays before them, while a plain scalar
  store `g = 0` floats below them (func_8017B614's mode byte; `S16Cell` in engine_8012F5F4.c gives an array element's
  register form to scalars).
* **One constant spelled two ways is not shared (r164).** cse keeps a constant address in a pseudo across calls when
  the same RTL constant is passed twice in an extended block; the original passing the same point as `&D_801EF3B4` to
  one call and `(SVECTOR *)(D_801EF3A8 + 0xC)` to the next (two RTL forms, splat names both D_801EF3B4) loads it fresh
  each time, and the allocation follows (func_8017AE2C).
* **Orphan address pseudos make a big frame (r164).** Each `x = D_801EE1D0[D_801EE5D0]; D_801EE5D0 = (D_801EE5D0 + 1)
  & 0x1FF;` pop leaves one orphan address pseudo worth an 8-byte slot (section 4 r161 row): func_8017A4AC's 0x140 frame
  is its 32 pops, no dummy array (one doubles it); an `i = D_801EE5D0` index form drops the slots.
* **Keeping two identical blocks apart (r164, jump.c cross-jumping).** In jump2 a `j L` first cross-jumps with the code
  just before L (one matching insn is enough) and the label it creates there is outside the jump chain, so two
  identical blocks that each end in `j L` are then never compared with each other. func_801789AC's two window polls
  stay apart when each case is `if ((D = f(w)) == 0) break; goto run;` and case 5's identical test falls into `run`;
  with full tails or a shared `test:` label the copies merge.
* **A do-while as a goto loop (r164).** `loop: ... if (r != 0) goto loop;` has no loop notes, so flow does not weight
  the body's refs by loop depth: func_801387B8's w (0.883) then outranks p (0.643) and takes s0, as in the original.
* **The real inline, not a static copy (r164).** func_8013A8FC inlines func_8013A8BC: marking the existing definition
  `inline` (it stays out of line too) and writing the window's unk40 test as an `&&` chain with the call
  (`if (w->unk40 == NULL && (c = func_8013A8BC()) != NULL)`) removes the barrier there, and jump.c moves the search's
  found block up behind the first test's return, as in the original.

* **A giv's init reads the biv's initial value, and a parameter's is its hard register (r175, loop.c record_initial /
  valid_initial_value_p).** The loop pass scans back from the loop start to the first label for the biv's last set; a hard
  register is a valid initial value when no call was seen, so a parameter used as the biv gets `addiu t2,a0,8` (reads a0) while
  a local copy of it (`pk = pkt`) gives `pk_pseudo + 4`, which cse2 rewrites to read pk (pk is canonical: it lives beyond the
  block). The sorter family needed both at once: `prim` itself as the biv, `pk = pkt` for the packet, and NO explicit `pkt + 4`
  variable (a user insn has the earliest LUID and sched1 puts it first; the loop pass emits its giv inits after the movables, so
  the init lands last). The giv list is built by prepending, so the LAST `prim + k` met in the body is the base register the
  address givs combine into: write the GTE statements in the asm's order (func_800249F0 and 18 siblings).
* **A giv is non-replaceable when its last use is in another loop (r175, record_giv / check_final_value).** record_giv keeps the
  giv's own register when `regno_first_uid == the set && last use < loop_end && (every iteration || all uses in its block)`; else
  check_final_value needs a computable final value, which a loop with a `break` has not. ONE function-scope slot pointer set in
  both arms' loops (`q = &g_SoundChan[8 + i]`) makes arm 1's giv non-replaceable (its last use is in arm 2) and the loop pass emits
  the `v0 = a0` copy the original has, while arm 2's stays replaceable (func_800335B8). Block-scoped or single-arm pointers are
  all replaceable.
* **`c[K + i]` and `(c + i)[K]` add in different orders (r175, expr.c PLUS_EXPR).** `c[0xE + i]` folds to `(c + 0xE) + i`; expand's
  "make sure any term that's a sum with a constant comes last" swap then builds `(plus i c)` (`addu v0,v1,a3`); `(c + i)[0xE]` keeps
  `(plus c i)` (`addu v0,a3,v1`).
* **cse re-targets a load into its copy's destination (r175, cse.c 'Special handling for (set REG0 REG1)').** When `y = h` is
  processed and y is the quantity's canonical register (make_regs_eqv: y lives beyond the block with a later last use) AND the
  previous insn is the one that set h, cse changes that insn to set y and the copy to `h = y`: `lhu s0; move v1,s0` instead of
  the original's `lhu v1; move s0,v1`. Any insn between the load and the copy (here `register Work *w = &D_800AF630;` declared
  after `s32 h = D_800AF7BE;`) stops it (func_800147B8). Not combine (r166's guess).
* **Constants of different modes are different cse classes (r175).** jump.c's if/else rewrite moves `oy = 0xF0` right before the
  conditional jump, after the compare's `tmp = 0xF0`, and cse then makes oy canonical for tmp (`bne a0,a1`); with `s16 oy` the
  HImode constant hashes apart from the SImode one and both `li`s survive, the `oy = 0xF0` in the branch slot (func_800147B8).
* **A pointer walked in the for header is a biv, so its init precedes the loop pass's giv inits (r175).** `pp = D_8006A970; for
  (i = 0; i < 4; i++, pp++) { q = *pp; for (k = 0; k < D_80065504[i]; ) { k++; ... } }`: `lui t0` (pp) comes before `lui a2`
  (the D_80065504 + i*4 giv), the inner bound's hoisted address is the `a1 = a2` copy, and a guarding `if (n > 0)` must NOT be
  written: jump.c's duplicated exit test is the one `blez` (func_8002CC4C).
* **cmp_func masks %lo, so a wrong struct byte passes it (r175).** func_800147B8's drafts stored `dfe` (+0x17) where the original
  stores `isbg` (+0x18): cmp_func MATCH, check-main FAIL by two words. When put_func fails on a MATCHing draft, build the EXE by
  hand and diff the words (build/work/r175/bindiff_all.py in C:\tw\exe-parks).
* **Expand places `x = b` before the test and cse folds a 0/1 flag (r175, func_80015208 still parked).** The flag
  `v0 = 0; bne t,v1 -> L; v0 = 1; L: bnez v0` is expand_expr's clr / jumpifnot / 0_to_1 code (a comparison whose do_store_flag
  failed, or `&&` / `||` as a value). Every single-test source form is then folded by cse: the skip label has one use and the
  skipped block is label-free, so cse_end_of_basic_block follows AROUND it knowing v0 = 0 / 1 (53-54 instructions). `ok = A || B`
  (two jumps to the label) keeps a flag, but with both tests inside it. The lever is a label cse cannot skip; not found.
* **Two single-set copies at the top of a block: the twice-set one sinks, the other lands in the slot (r175).** `t = p; xx = x;
  b = &D_8011F7F0;` as the first statements: t (set again later) is not boosted and sits at the block top; xx and b are boosted
  and land last in LUID order (b's `la` before the sltiu, xx's copy in the beqz slot, combine folding the parameter's a1 into it)
  (func_8017742C). The parameter copies themselves have the earliest LUIDs, so a parameter cannot land in the slot unaided.
* **A call-argument copy that is not deleted steals a sched2 pick (r175, func_801806E8 / 801809D0 parked).** Ours carries `a0 = s0`
  for `f(arg0, ...)` into sched2 (it is deleted later, the counts match) and it wins the T-4 pick over `li v0,2` at equal priority
  (later LUID); the lw and `sw ra` then beat the li on the memory-hazard rule. The original has no such copy: cse must see a0 ==
  arg0 at the call. A local `u8 *s = arg0` for the field accesses did not change it.
* **-O0 register variables live only through their own scope (r206, gcc 2.7.2 stupid.c).** At -O0 the allocator is
  stupid.c: stmt.c (obey_regdecls) makes a `register` variable live from the start to the end of its `{ }` scope, and a
  pseudo crossing a call gets a call-saved register. A function-scope `register` k in a function with calls takes an
  s-register (extra save / restore); the same k declared in a small block with no call takes a scratch register.
  fold always associates `(k * 2) * 2` (split_tree strips same-mode conversions), so two `move; sll 1` pairs need the
  inner product hidden from fold (an assignment does it: `(k = x * 2) * 2`, at the cost of the store into k).
* **cmp_func can pass a wrong neighbour-symbol base (r206).** A draft using `(u8 *)g_SoundChan - 0x24` compared MATCH
  where the original's base is `g_SoundSlot + 0x54` (0x800A4694; g_SoundChan is 0x800A46E8, so the right form is
  `&g_SoundChan[a - 1]`); put_func's build check caught one byte. Check a neighbour-symbol offset against
  symbol_addrs.txt, or trust only the build check.

## 5. Parked (templates in build/work/, functional copies for the PC build in pc/native/near_miss.c)

func_800249F0 and the sorter family (gte12.c, t_249F0_near.c), func_80016110 (t_16110b.c), func_8001BC6C
(t_1BC6Cb.c), func_800190AC (t_190ACb.c), func_8002CC4C (v2CC4C_d.c), func_8002C320 (v2C320_d.c), func_8002A108/func_8002A354
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
22 Oct: all of these but func_sc02_021_8017DC10 were matched in plain C by the r144 Ultracode slice and placed by r151
(ed04c3f, with 62 clones). func_sc02_021_8017DC10 stays parked by LuciDin's call: its plain-C match keeps the dead
multiply alive with two tests whose arms are identical (`if (t < 0) x = 9; else x = 9;`), judged too contrived.
22 Oct, r150 (Fable, stream F-B; worktree C:\tw\exe-parks, hand files build/work/r150 there, notes in the dispatcher's
folder r150_progress.md): matched func_8013F1BC, func_8013A9F8, func_8013CA14, func_8013EB7C, func_8013A2BC (rows in
section 2) and six ovl36 parks (section 7). Re-parked with the mechanism settled from the GCC 2.7.2 source
(reorg.c, sched.c, toplev.c): **func_8013E448** (park_8013E448.c, 1 insn): the original's `v0 = 0` in the `beqz` slot is
reorg's steal_delay_list_from_target from the `L0: j END; move v0,zero` block (the return-0 block must be a filled jump
for that path); our cc1 never performs it in seven source shapes (g1-h8 tests in build/work/r150/exp), so this is likely
a defect of the 64-bit build, like its delay-slot crash. **func_80139680** (1 insn): toplev.c runs cross-jumping
(jump_optimize with cross_jump=1) AFTER sched2, so the two arms' `sh` of the x value lands at the join label ahead of
the already-scheduled `sll a0,s1,1`; the original scheduled one store after the shift, which needs the shift (a boosted
single-set pseudo, always picked ahead of a store in sched1) to lose its boost: no plain form found (sched1 dumps
`-dS`, sched2 `-dR`). func_80137DD4 (`lbu + sll/sra 24` of unk1F: the byte pseudo needs a second use or a block
boundary; `lb` otherwise), func_80139BE0 (the signed `slti` on unk18 and the second mask of k need the pseudos' nonzero
bits unknown: two sets; `k = 0` in the else arm was not enough). func_80138ED0, func_8013B274, func_80135EB0,
func_80136A94, the markers, func_8013CF68, func_8013D064, func_801387B8 / 97B0, func_8013A8FC, the cell searches,
func_8012CB64, func_80132F40, func_8018B478 and the r133 / r138 parks were not reached.

Parked by r161 (22 Oct, Opus high; templates copied to build/work/r161/): func_800D128C (the item switch, 243 vs 238
with a held `u16 *pl = &D_80126B58` and an `s16 mode`: case 1 cross-jumps into case 0x75's identical `jal; v = 0x96`
tail where the original keeps both; jump.c merges any two jumps to one label with 2+ identical RTL insns before them,
so the original's blocks differ in RTL); func_800CFE60 (frame and p fixed, see section 4; left the w/mode registers:
`do { v = f(); w = &D_800AF630; mode = -1; if ... } while (0);` swaps them right but moves v to a0); func_8013CF68 (the
lights: the base register is `sym+0xC`, created after light 0's vy/vz/g/b and before its vx/r in the RTL; not a 3-byte
struct copy, not an inline setter); func_80133AB0 and twins (r138's template has the layout; only the recomputed u16
masks are left); func_8017AD0C and func_8017BD50 (sched1 ties: argument setup before the `r.w` / `r.h` stores; s16
loads before their s32 partners); func_8017B238 / func_8017B368 (76/76, 74/74: one `SVECTOR *p` for both arms, only
the order of the `.a` / `.b` table addresses differs). Skipped: the marker family (register assignment only) and the
ovl39 / 3a / 3b constant-order parks.

r164 (22 Oct, Opus high + helper agents with fresh context per function; templates build/work/r164/ in C:\tw\engine3,
copied to the main checkout's build/work/r164/): matched r161's func_8017B238 / func_8017B368 (section 4 r164 row),
func_8013A8FC, func_80136A94, func_801387B8, func_8013B274, func_80156848, func_8017FA18. Parked: func_8015D1B8
(MATCHES in cmp_func with `s16 k`, but the original addresses an S3 struct at 0x8018FDC8 whose field is D_8018FDD0,
`la D_8018FDD0; addiu a1,v0,-8`; the stage link has no symbol D_8018FDC8, and spelling it from D_8018FDD0 or D_8018FD88
changes the code: needs `D_8018FDC8` in symbol_addrs_stage.txt (stream T), then it places as is,
park_8015D1B8_needs_symbol.c); func_801397B0 (24 off, registers only: k-1, k*4 and c in a0, y in a1; tpage kept int
by s32 locals, frame 0x48 only with an unused pad); func_80138ED0 (12 lines, one block's v0/v1); func_80135EB0 (the
inside-the-box block now right; left f/cy in s2/s3 and the return-0 block's place); func_8017742C (2 off: two copies
swapped by reorg's slot fill); func_80168828 (6 off: the 0x10 constant hoisted once the 0x40 one is right);
func_80177940 (p's priority beats x, y, digits). The r133 set: matched func_80160DEC (the call takes one argument), func_801508F8 (defined `s32` with no return value: v0 live at the exit keeps reorg from filling the slot with `li v0,26`), func_80175218, func_8016E26C / func_8016E1CC (pass arg0 to the first call: a0 set twice is not birthing), func_8016EE94, func_8018CD98 (`u8 *b = arg0` as the second call's argument), func_8018166C / func_8018872C (`if (x == 3) { } else { return NULL; }`: the empty then keeps a label before the call, so jump2 keeps the `move a0,s0` copy; maybe also r156's func_sc04_018_8018C1E0 / func_sc05_017_8018BEE0). Parked: func_801806E8 / func_801809D0 (3 lines: the a0 argument load is birthing and lands by the jal, so sched2 takes `li v0,2` before the 0xCC load; the siblings with a call in the body match) and func_8018B478 (8 lines: the prologue `addiu a1` / `move s5,a2` order, the first colour test reads dim not t, `move s3,zero` placement; r133_8018B478_best8.c).

Open after r166 (22 Oct, Fable high, 5 rounds each; templates in C:\tw\exe-parks\build\work\r166, notes r166_progress.md in the dispatcher's folder): **func_800335B8** (`u16 cmd` and `u16 c0 = cmd` give the `addu t0,a1,zero` copy and both `& 0x7F` masks when they are computed inside the loops and hoisted, so cse2 cannot merge c0 into cmd; 1 insn left: the first arm's `addu v0,a0,zero`, a non-replaceable DEST_REG giv copy before the two stores; a block-scoped pointer at the loop top is replaceable, and in the if-body, after the break, at function scope, with a dead init or as a struct pointer all replaceable too). **func_80015208** (the flag `v0 = 0; bne t,v1(0x800) -> L; v0 = 1; L: bnez v0` is expr.c's TRUTH_ANDIF/ORIF-as-value or the do_store_flag-fails fallback, the only caller of emit_0_to_1_insn; `seq` exists and can_compare_p widens HImode, so every `t == 0x800` form (u16/s16/u32 temps, two sets, a `u16 m = 0x800` operand, if/else assignment) gives `xor; sltu` or a direct `andi; bnez`; the Work pointer then folds because cse's path has one branch fewer). **func_800147B8** (`u32 hh = D_800AF7BE` for `srl`, `hw = D_800AF7BC >> 1` first, `if (hh == 0xF0) oy = 0x168; else oy = 0xF0;` for two separate 0xF0 constants; left: combine merges the load into the copy `y = h` and keeps `h = y` (added_sets_2), so the lhu lands in s0 (y) and h is `move v1,s0`, where the original loads v1 and copies to s0; `u16 h`, `register`, declaration order change nothing). **func_800249F0 and the sorter family** (18 functions): `p = prim; if (n != 0) { do { ... p += 0x10; } while (--n != 0); } return pkt;` with no label before the loop gives n = t5, p = t6, `addiu t2,a0,8` (the biv init is found, loop.c record_initial scans back to the first label, and the giv init reads the parameter's register) and one `move v0,a3` at the end: 116/116 shape, 2 lines left: `pkt + 4`'s init reads hard a3 (the parameter's biv init is the entry copy), so pkt conflicts with a3 and moves to t1 (`move t1,a3; addiu a3,a3,4`); the original's init read the pseudo (`addiu t1,a3,4`), so pkt too had a copy or a later use; and the entry copy's slot position. -fno-rerun-cse-after-loop changes nothing. **func_80020DA4**: 100/100, the structure right; the original saves an unused s0 and keeps 16 bytes of locals nothing references (orphan pseudos or a pseudo allocated and then deleted), the products' registers differ.

r175 (23 Oct, Fable high, worktree C:\tw\exe-parks, templates build/work/r175 there; notes r175_progress.md in the dispatcher's folder): MATCHED func_800249F0 and the whole sorter family (18 siblings by four Opus helper agents: the F3/F4/G3/G4 lit and unlit kinds, FT3/FT4 with the light colour loaded before the loop and a `D_80078D88 & 0x8000` depth-mode branch with stsz3/stsz4 and a nested max, textured GT3/GT4 with the clut and tpage from D_8006388C[idx] stored through a POLY_GT3 typedef while the uv bytes stay byte stores, 27D20/27F4C with the func_80028200 call and `z = (min >> 2) - 1` clamped at 0), func_800335B8, func_8002CC4C, func_800147B8 (section 4 r175 bullets), func_8017742C and placed func_8015D1B8 (D_8018FDC8 in symbol_addrs_stage.txt). Still parked: **func_80015208** (the flag folded by cse's skip-blocks path, section 4), **func_80020DA4** (not retried), **func_80011380** (-O0: the two `move a0,v1; sll v1,a0,1` pairs are expand_mult's copy_to_mode_reg + shift into the SAME register, i.e. two `k = k * 2` on one short-lived temp whose load is a signedness cast (`lw v0; move v1,v0`); `register u32 k` at -O0 takes an s-register (197 instructions); the `%hi(D_800629D4 + 2)` constant needs the address to reach expand as `(sym + 2) + k`, e.g. `D_800629D4[k + 2]`), **func_801806E8 / 801809D0** (the a0 = s0 copy, section 4), and the ovl39 / ovl3a / ovl3b constant-order parks (not attempted: sched1 LUID puzzles over 10+ boosted constants). Not reached: func_80168828, 801397B0, 8018B478, 80138ED0, 80135EB0, 80177940, r161's set, the markers, func_80139BE0, 8013E448.
r206 (26 Oct, Opus medium, worktrees C:\tw\exe-parks and C:\tw\abil-parks, drafts build/work/r206 in each; notes
r206_progress.md in the dispatcher's folder): MATCHED func_800191D4 (the call's `a0 = s0` re-copy in the jal slot: an
else-if chain `if (*p < 0) r = 1; else if (f(a) != 0) r = 1; else r = *p != a;`, where the `||` form lets cse drop
the copy), func_8001BADC (c / p in a2 / a3: `c = (i < n) ? -(flag != 0) & 8 : 0;` instead of `c = 0; if (i < n) c =
...;`), func_800183E0 (32 slots of 0x10 bytes at Work + 0xA1A8 through a local overlay type, `break` after `r = 1`),
func_8002F150 (`t = (u8 *)&g_SoundChan[a - 1]`, flags `*(t + i + 0xE)` (`t[i + 0xE]` swaps the addu operands), voices
`&g_SoundChan[8 + i]`); abilities func_ovl14_800CAF90 and func_ovl22_800CB8A0 (CAF84's body with their own tables and
`s.c[1].r = s.c[1].b = ... + 0x70; s.c[1].g = 0;` / `s.c[1].r = s.c[1].g = ... + 0x60; s.c[1].b = 0;`, K&R),
func_ovl25_800CB0B0 (CB288's lever: each counter stored right after it is computed), func_ovl14_800CB358 (the 0x1A
halfword read after the 0x4C / 0x50 updates puts the call's a0 copy first in the join block). Still parked:
**func_80011380** (-O0, 194 / 192: `{ register s32 k; p->unk16 = D_800629D4[(k = D_80074784 * 2) * 2 + 2]; }` gives the
shape plus the store into k; open: an unfoldable inner `* 2` with no variable; section 4 r206 bullet), **func_8002C320**
(r166's pointer bivs keep k and hoist the 1 / 2 constants, `==` arm first, but init blk, chk, data after them; indexing
D_80075AC0 gives the original's data, chk, blk order but eliminates k and merges the shift arms; drafts v2C320_a..j.c).

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

* (r166) main.c's -O0 steps: `register Work *w = &D_800AF630;` and plain statements in asm order matched six at the first or second
  compile (func_80010ED4, 800110CC, 800111BC, 80011C8C, 80010F80, 80011EB4). A frame 8 bytes bigger than the saves and
  outgoing area need is an unused local (`s32 pad0;`); an `sw v0,0x10(fp)` of a symbol's address with no use is an unused
  pointer local (`u8 *p = D_80078E78;`). A store through `lui v1,%hi(D_80700000); addu v0,v0,v1; sh v1,%lo(D_80700000)(v0)`
  where yours gives `la v1; addu; sh 0(v0)`: the ring at 0x80700000 is a constant pointer cast, `((u16 *)0x80700000)[idx]`
  (the big constant is split by LEGITIMIZE_ADDRESS and splat names the lui/0 pair D_80700000); a post-incremented index
  `buf[D_80074788++]` stores the increment before the load. `switch` on a global with cases 0, 1, 2 gives the
  `beq 1; slti 2; beqz; j` tree (the ovl36 rule). Left in main.c: func_80011380 (192), func_8001212C (177).
* (r166) `func_8001212C`: two sprite packets built through a struct pointer `Spr18 *s` (members give the offset form
  `sb a0,3(v1)`; the one computed address `addiu v1,a0,4; sw 0(v1)` is `*(u32 *)((u8 *)s + 4) = 0xE1000018`),
  `setlen(s, 5)`, `addPrim(ot + 1, s)` with `u32 *ot = D_800A6610[w->frame]`, `s++` (`addiu 0x18; move; sw`).
  Parked `func_80011380` (192/192, one expression): `p->unk16 = <byte at (D_800629D4 + 2) + idx * 2 * 2>`, where the
  original scales `idx * 2` twice with a copy each time (two `* 2` expansions, unfolded); a pointer base folds them to one
  `sll 2`, `<< 1` loses the copy, casts fold, an array or struct-array symbol at +2 gives the `at` form (template
  C:\tw\exe-parks\build\work\r166\m8a.c, the rest of the function right).

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
| (r150) a global's address held in s0 across the first call (`lui s0; addiu s0` before the `jal`, `lw a0,0(s0)` after) | a pointer local set before the call, read as an element: `s32 *m = &D_800AE6A8.next; ... t = m[0]; m[0] = 0;` (a one-member struct did not do it) | ovl36 func_800D1754 |
| (r150) an SVECTOR component loaded `lh` into an s-register before a call (`lh s0,2(s2)`) where yours loads `lhu` and extends at the use | an `s32` local for it (`s32 y; y = v->vy;`); an `s16` local is a HImode pseudo, extended at each use | ovl36 func_800D23D0 |
| (r150) a byte load hoisted above a word store to another struct (`lbu v1,3(t0); or; sw v0,8(t2); jr; sb v1`) where yours loads it after the store | read the byte into a local before the word statement (`b3 = ((u8 *)p)[3]; m->cur = ...; m->unk19 = b3;`): a QImode load cannot pass an in-struct word store | ovl36 func_800D185C |
| (r150) a `* 10` as `sll 1; sll 3; addu` (two shifts and an add) where synth_mult gives `sll 2; addu; sll 1` | write the shifts, `(n << 1) + (n << 3)`; and the result OR'd in place, `r = r \| (m << s); return r << shift;` (the one-expression return gives the OR its own register) | ovl36 func_800D2CA8 |
| (r150) the stage mode block seen from the field as `u8 D_80115110[]`: one member's address held (`lui v0,0x8011; addiu v0,0x5112; sh zero,0(v0)`) and a loop base derived from it (`addiu a1,v0,-2`, `sw zero,0x78(a0)` with `a0 = j*4 + a1`), the other members direct `%lo` stores | `*(s16 *)&D_80115110[2] = 0;` (the +2 address goes through a register and keeps it for the related value), the loop as `p = D_80115110 + j * 4; *(s32 *)(p + 0x78) = 0;` (the symbol plus the index first, the +0x78 as the displacement), the neighbours as plain scalars (`D_8011512A = 0`), `D_80115168[j].v` with the one-word-struct array. The register pair then came from ONE `s16 j` counting both loops (`(u16)j < 5` for the first): the longer life ranks it after the loop base | ovl36 func_800D24A0 |
| (r150) a 30-case jump-table switch whose result reuses the argument register (`addiu a0,zero,k` in every case) and a record read before two pointer stores | `switch (n) { case 5: n = 1; break; ... default: n = -1; }` (the parameter itself reassigned); then `t = D_800D3764[n].unk4; p = &D_800C7C60; D_800C7C64[0] = &D_800A2E20; *p = t;` (the record load first, so its temporary and the address temporary overlap and the result variable is pushed to a0). The blocks follow the case order: list the cases in the order of their k values | ovl36 func_800D02D0 |
| (r161) a glyph builder that reloads the frame index after the primitive's tag store (`lhu v1,0(t4)` twice, the address hoisted) | the index as the work struct's member `D_800AF630.frame` (two in-struct accesses may conflict, so cse reloads); the cases in block order; an `s16` parameter for a stack argument read with `lw` when the two stack-argument registers are swapped | ovl36 func_800D2650 |
| (r161) a loop-invariant `flags & 2` kept in a saved register (`andi s3,a0,2`) and two constants set `t2` before `t1` | the parameter `u16 flags`; `dv = 8;` before `du = 8;` | ovl36 func_800D27DC |
| (r161) `or v0,v0,v1` building a colour in the shifted value's register, then `addu v0,v0,v1` for the next corner | store, then read the stored member back: `p->c0 = ((semi \| 0x38) << 24) \| *(u32 *)d; p->c1 = p->c0 - 0x280000;` (cse forwards the stored value; a local ties the OR to the load) | ovl36 func_800D29F8 |
| (r161) `beq k,1,A; beq k,2,B; j end` (two compares, then the default jump) with A's block kept and B merged into it | a `switch` with the merged case first (`case 2: ...; case 1: ...`): the kept copy is the later one; an if / else-if chain inverts the last test instead | ovl36 func_800D06E8 |
| (r161) `xori s1,v0,1` after `bnez v0,L; move s1,zero` (a flag cleared in the slot, the second test a store flag) | `m = 1; if (t - 0x64 < 0x1E) m = 0;` in the else arm of the first test; one variable for both flags that share the register | ovl36 func_800D06E8 |

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
| (r149) a word of the actor loaded above two halfword stores to the same base (ours), below them in the original (disjoint offsets on one base reorder freely) | one local for both values, `t = -0x100; AF(0x12) = t; AF(0x16) = t; t = AF(arg0, s32, 0x50); ...; AF(0x18) = t;`: the second set's anti-dependence pins the load | func_ovl20_800CB688 |
| (r149) `sll a1,a1,16; sra a1,a1,16`: a parameter's sign extension done on the incoming hard register, and the parameters' s0 / s1 swapped | `s16 t = arg1;` (or the parameter `u16`): the extension reads the pseudo; with `(s16) arg1` combine substitutes a1 into the use and the pseudo loses a reference | func_ovl1f_800CB760 |
| (r149) `v = 0x140; if (!(D & 1)) v = 0x160;` puts v in v1 with a final `move v0,v1`; the original has v in v0, set in the branch's delay slot | `v = D & 1; if (v) v = 0x140; else v = 0x160;`: the test references v, so jump.c's `x = b; if (...) x = a` rewrite is off; the arms stay, reorg steals one into the slot and inverts the branch, and v is born after the test | func_ovl28_800CC9AC, func_ovl22_800CB59C, func_ovl22_800CB484 |
| (r149) `if (A && B) return 1; if (C && D) return 1; return 0;` store-flags the last test (`slt` as the result, one short) | one `if ((A && B) \|\| (C && D)) return 1; return 0;`: the shared true-label blocks the store-flag rewrite | func_ovl28_800CC0A0 |
| (r149) a `nop` where the original has `move a0,s0` in the first call's slot after a test (`if (x != 0) return 0; f(a); g(a); return 1;`) | `if (x == 0) { f(a); g(a); return 1; } return 0;`: cse follows the taken branch, so the fall-through block starts without a0 == arg0 and keeps the copy; the `return 0` lands in the branch slot | func_ovl34_800CD240 |
| (r149) `if (D != 0xF) f(a); else { ...; f(a); }` leaves the actor copy in the second jal's slot; the original has it in the branch slot before a cross-jumped jal | the early return first, `if (D != 0xF) { f(a); return; }`: on that path a0 still equals arg0 and the copy is deleted; the then-block's tail keeps its own, so only the jal is merged | func_ovl1f_800CB1A0 |
| (r149) `move a0,s1` before `lw v1,0x4C(a0)`: the actor copied to a0 and a field loaded through the copy | a copy made inside the if-body and used only there, `p = arg0; AF(AF(p, 0x4C), u8, 0xBE) = 1; f(p);` (a copy before the if, or an inline function's parameter, is folded away) | func_ovl20_800CB3C0 |
| (r149) a halfword sum stored sign-extended, where the original stores the raw sum and extends in place for the division | `s32 t = x - 0x100; AF(0x60) = t; v = (s16) t / 2;` (the cast at the use, not an s16 t) | func_ovl19_800CBEC0, func_ovl31_800CD57C (partly) |
| (r149) a table value (or another object's field) loaded after the model stores in ours, first and stored last in the original | the value into a local before the stores: a load never passes a store through another pointer, so its source position fixes its place; the stores to one base then schedule around it | func_ovl32_800CD494, func_ovl27_800CB5DC |
| (r149) a value stored and used two statements later is reloaded (`lw a0,20(a2)`) where the original keeps its register | cse forgets every register-addressed memory equivalence at the next store through a register address, whatever the offset: reuse inside one expression, `AF(8) += (AF(0x14) += 0xC000); if (--AF(0x1C) == -1)` | func_ovl2b_800CB55C |
| (r149) a call's stack argument `s0 + 0x555` computed after a0-a3 in ours, before them in the original | its own statement before the call, `t = temp_s0 + 0x555; f(..., t, ...);` | func_ovl20_800CB190 |
| (r165) `lbu v1; addiu v0,v1,-4; bgez; move v1,v0 (slot); move v1,zero; move v0,v1; sb x3`: the loaded byte and the clamp share a register the sum does not | `s16 v = AF(0x24); v -= 4; if (v < 0) v = 0; AF(0x24) = AF(0x25) = AF(0x26) = v;` (an s16 loaded first, the subtraction in HImode: no sign_extend insn for combine to merge the load into, so the lbu lands in v's register and local-alloc cannot tie it) | func_ovl2e_800CB874, func_ovl27_800CB2C8 |
| (r165) a model-pointer load (`lw a2,0x20(a0)`) between the global's load and its store, where ours puts it below the store | `n = D_984++; h = AF(((u8 **) s2)[8], u16, 0x12);`: the pointer read as an in-struct reference passes the scalar store (the halfword read through AF stays below it) | func_ovl27_800CB058 |
| (r165) the state++'s lhu at the block's top in ours, after the second table load in the original (st in v1 after `sw v1,0x10`) | a single-set temporary, `u16 st = AF(2) + 1; AF(2) = st;` (boosted, so sched1 places the load late) | func_ovl2b_800CB480 |
| (r165) `sll/sra` of the division result before `jal rsin`, and the sum stored sign-extended | `s32 sum` stored raw, `s32 d = (s16) sum; rsin(d / 10)`: `short / constant` is shortened to HImode otherwise | func_ovl31_800CD57C |
| (r165) `addiu v1,v1,-0x200; addu v1,v1,v0` (the constant applied to the field) where ours folds it onto the random term | `r.vx += ((rand() & 0x3F) << 4) - 0x200;` | func_ovl2e_800CB4E4, func_ovl2d_800CB860, func_ovl2a_800CB910 |
| (r165) `addu s2,s0,zero` right after the spawn call, s0 dying at the third call and s2 used for late stores | a second pointer copied right after the call, `o = f(); o2 = o; AF(0x20) = o; if (o == NULL) ...` (before the store and the test; inside the if it is merged away) | func_ovl2d_800CB860, func_ovl2a_800CB910 |
| (r165) a counter's increment store between two stack arguments (`sw zero,0x10(sp); lh; sw 0x14(sp); lhu 0x28; addiu; sh 0x28; lh 0x1A; ...; sw 0x18(sp)`) | the post-increment inside the argument list, `f(..., AF(0x12), AF(0x1A) \| ((AF(0x28)++ & 7) << 16))` (the queued store lands when that argument is evaluated); the switch on a `u32` | func_ovl18_800CB168 (still parked on one copy) |
| (r165) the primitive loop's counter and table pointer in the prologue (`lui s2` first, `move s4,zero` early), the actor one s-register off | `p = D; i = 0;` written right before the `do {`, one s16 counter for both loops (`++i < 4`) | func_ovl2f_800CB3BC, func_ovl16_800CAF84 |
| (r165) `slti; xori` for the last test where the original branches with constant returns (38 against 31) | `if (-x < 161) return 0; x = 1; return x;` (the constant return through a variable) | func_ovl1f_800CB7B0 |
| (r165) `lhu a1,0x12; sll a1,16; sra a1,16` for a halfword passed to the call and added to a word, where the original has one `lh a1` after the 0x28 update | `s32 r = AF(arg0, s16, 0x12);` read after `AF(0x28) += AF(0x1C)` | func_ovl16_800CB304, func_ovl22_800CBC7C |
| (r165) the test's `lh` value copied for the subtraction (`move a0,v1; subu v0,a0,v1`) where the original reloads `lhu`, and 8 bytes of frame | the counter stored right after it is computed, before the subtraction reads the other halfword | func_ovl25_800CB288 |
| (r165) the flag and the actor in s1 / s0 (the actor allocated first: 5 refs / 19 against 3 / 11) | the flag set in both arms, `if (A) f = 1; else if (B) f = 1;` (four references) | func_ovl1c_800CB03C |
| (r165) `extern s32 f();` in the package file with callers passing 0, 1 and 2 arguments: a prototyped definition fails to place | a K&R definition `s32 f(arg0) u8 *arg0; {` inserted by hand (put_func cannot split K&R); `s32 f(u8 *arg0, s32 x, s32 y, s32 z)` where every caller passes all arguments (func_ovl2f_800CB3BC) | func_ovl16_800CAF84 |

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
| (r161) a two-case switch tested `== 2; < 3; == 1` | an empty `case 3: break;` after the two cases: three nodes balance to the root 2 | func_8013D064 |
| (r161) a scene-command push: a kind and halfword arguments stored from `0x10(sp)` and `addiu a0,sp,0x10` | an `s16 c[n]` array local, `c[1] = a; c[0] = K; return func_80179B74((s32)c);` (18 VM functions first try) | func_80179DCC |
| (r161) `beqz v1,end` with `li v0,1` in the slot, then `bne v1,1,end`, then `move v0,zero` | `switch (x) { case 0: return 1; case 1: return 0; } return 1;` (an `&&` gives a store flag) | func_8017A3B0 |
| (r161) a call's result copied to v1 and tested, `move v0,zero` in the slot | `if (f() != 0 && D == 0) return 1; return 0;` | func_80178970 |
| (r161) loads through a pointer that stay after stores to scalar globals | a plain pointer variable, not `p[k]` (section 4) | func_8017B824, func_8017B0E4 |
| (r161) `lh` reads of globals the file declares `u16` | `(s16)` casts in the expression (put_func keeps the file's declaration; test batches must use the file's text) | func_8017B940 |
| (r164) a two-arm pointer (`p = arg` / `p = &tbl[arg].b`) whose table address the original computes after the other argument | block-scope single-set `q`, `t`, the call, then `p = t` (section 4) | func_8017B614 |
| (r164) a byte store that the original keeps before register-based reads, ours sinks below them | the byte as a struct member `((T *)&g)->m = 0` | func_8017B614 |
| (r164) an address loaded fresh for each of two calls, ours shares it in an s-register | spell it two ways (`&D_X` and `(T *)(D_Y + off)`) | func_8017AE2C |
| (r164) a 5-entry jump table whose entry 0 is the exit | `case 0: break;` | func_8017AE2C |
| (r164) two identical switch cases the original keeps, ours merges | per-case `if (...) == 0) break; goto run;` with a falling case before `run:` | func_801789AC |
| (r164) w and p swapped in a do-while loop | a goto loop (no loop notes) | func_801387B8 |
| (r164) loads that stay behind the previous stores in a run of `g += o->t[k]` | a plain walking pointer `s32 *t = &o->t[1]; g1 += *t; t++; g2 += *t;`, the globals as plain scalars | func_80136A94 |
| (r164) a 0x140 frame with nothing stored in most of it | the ring pops written plainly (`x = R[g]; g = (g + 1) & 0x1FF;`): one orphan slot each | func_8017A4AC |
| (r164) a model field read the original keeps after the ring index store | read it through `AF(pl, ModelObj *, 0x20)->rot.vy` (a plain cast; `pl->model` is in-struct and rises) | func_8017A4AC |
| (r164) a frame 0x20 bigger than the locals need | an unused `MATRIX m;` (marked in the source) | func_8013B274 |
| (r164) `la base` before `sll i,2` for `&base[i]` | `{ s32 *p = &base; f = &p[i]; }` | func_80156848 |
| (r164) the actor in s1 and a computed value in s0 where ours swaps them | compute the value inside `do { } while (0)` (loop-depth weight) | func_8017FA18 |
| (r164) the partner pointer reloaded after each stack store | read it once into a block local `s32 q = AF(obj, s32, 0xD4);` | func_80178D40 |

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
| (r153) `lw v0,X; beqz v0; move s0,v0` (the test on v0, the object variable set in the slot) where ours loads straight into s0 | a temporary for the load, `t = X; if (t != 0) { obj = t; ... }`: obj is the long-lived s-register pseudo, t the short one | func_sc06_018_80192B60 |
| (r153) a local in a0 where ours has it in v0 (the constant beside it in v1 instead of v0) | use the same variable where it is a call's first argument elsewhere in the function (here the else branch's SetScript(q, ...)): the preference for a0 applies to the whole pseudo | func_sc06_008_8018165C |
| (r153) the 8-byte pad must sit below a stack struct (pos at sp+0x18 rather than 0x10) | declare u8 unused[8]; before the struct: locals are laid out in declaration order | func_sc06_008_8018165C |
| (r153) a value and a later result in the same register (sra a2,... for x, then subu a2,... for a quotient of x) where ours keeps them apart and copies | reuse the variable: x = (x + 0xF0) / 30; instead of a new q, so one pseudo spans both | func_sc06_008_801823F0 (and its two siblings) |
| (r153) an abs whose copy goes the wrong way (move a2,v1 / 
| (r153) ori 0x3000 applied to the wrong operand of a two-OR expression | fold rewrites A \| (B \| K) to (A \| K) \| B: write the operand that must get the ori first and the constant inside the other's parentheses,  \| (x \| 0x3000) | func_sc06_008_801823F0 |
| (r153) a branch into the middle of another case's tail (`lhu v0,0x34; j L; sw zero,0x1C` where L is after the other case's `lhu; sw`) | write both tails in full; cross-jumping merges the common suffix after scheduling. m2c's `goto block_N` for such a shared tail gives the wrong layout | func_sc06_018_801886B0 |
| (r153) a frame 8 bytes bigger than ours with nothing stored in the gap, in a non-leaf function (`.frame` vars= 8 more) | an unused `u8 unused[8];` local (both SC06_018 state machines and the spawner matched with it; a u8 or s16 scalar does not always give the slot) | func_sc06_018_80186994, func_sc06_018_801894F0 |
| (r153) a chained store `a = b = c = v` stored in the reverse of the original's order | GCC stores the innermost first: write the chain in the reverse order (`o->18 = o->1A = o->1C = v` stores 0x1C first) | func_sc06_018_801894F0 |
| (r153) a jump-table function whose cases branch into another case's tail (`beqz v0, <label in case 3>`, `bnez v0, <label in case 1>`) where ours writes the tail inline or jump2 merges the wrong copy | label the tail once where the original has it and `goto` it from the other cases; write the target's own test as `if (c) goto next; tail: call(); break; next:` so the call stays in place | func_sc06_018_80186270 |
| (r153) a constant address (`&D_800AF630.wsm`) passed to two calls held in an s-register (`la s0` once, `move a0,s0` twice) where the original loads it twice (`lui a0; addiu a0` before each call) | cse merges two equal constant arguments into one pseudo that crosses the call; write the two arguments as different expressions of the same address (`&D_800AF630.wsm` and `&D_800AF648`, a MATRIX extern at the member's address) | func_sc06_008_801823F0 |
| (r153) a spawned object kept in s0 in a function with several spawn calls, where ours has it in a0 / v0 | one variable for every spawn result, including the one in the loop whose life crosses calls: the single pseudo crosses calls, so every use is s0 | func_sc06_008_801823F0 |
| (r153) a frame 8 bytes bigger for every s16 / u8 local (the .frame comment says vars= 8 + 8 per local, nothing stored there) | measured on func_sc04_011_8017D000: all s32 vars=8 (its u8 colour local), each s16 local that is compared and copied adds 8; pick which locals are s16 by the original's `move` copies and its frame together | func_sc04_011_8017D000 (parked) |
| (r153) a 4-byte struct copy into a global as `lui a1,%hi(D); addiu a1,%lo(D); lwl/lwr; swl/swr 3(a1)/0(a1)` where ours uses `lui at` before each swl / swr | the struct is byte-aligned (CVECTOR, `u8 r, g, b, cd`): at alignment 1 the copy takes the movstrsi path, which puts the address in a register; a two-halfword struct (alignment 2) is copied by move_by_pieces with the symbol in each store | func_sc04_002_80180FEC |

| (r152) a 400+ GTE renderer identical except one pair of hoisted stack addresses swapped between t8 and t9 (`addiu t8/t9,sp,k` before the loop and their `swc2` operands) | a global-alloc priority tie (section 4's integer-priority bullet): change the loop's pre-allocation insn count by one or two with the code unchanged. r152's forms that kept the code did not move it (range-macro forms, `& 0xFFFF` masks, `++j`, chained stores); r144's form of the function does | func_sc01_000_8017BEBC (r152 park at 10 lines; r144 match) |
| (r152) the box corners' `move` copies in a renderer and their t1 / t0 / a3 / a2 registers (a0 / a1 skipped) | write the corners through the same four `s16` variables the polygon range tests use: multi-block pseudos keep the copies (the shifts read `x`), and pass 0 of global-alloc skips a0 / a1, preferred by the argument-copy pseudos | func_sc01_000_8017BEBC |
| (r152) `srl v1,v0,16` (a z high half) before the vz stores where ours sinks it below them | the high half into a two-set variable (`y = z >> 16` with `y` reused): a single-set local is sched1-boosted and sinks to its first use | func_sc01_000_8017BEBC |
| (r152) `addu a0,a0,s4` (index first) for an OT entry where ours gives `addu a0,s4,a0` | `(u32 *)((((z) >> 2) << 2) + (u32)ot)`, not `&ot[z >> 2]`; the form also moved the t8 / t9 pair the right way in one draft | func_sc01_000_8017BEBC |
| (r152) the same 952-instruction renderer with `addiu v0,v1,0x20` in the village (DrawChunkedMesh and 5 clones) against `0x200` in SC01_000 and 110 others | one source, one constant: r144's function with `+ 0x20` is DrawChunkedMesh byte for byte (the census splits the two shapes on that immediate and the `j` targets) | DrawChunkedMesh |
| (r152) two loads (`lw v1,0x64(s1); lw v1,0xCC(v1)`) above a store through another pointer (`sh v0,0x2C(a2)`) where ours keeps them below, with a call's constant argument (`li a0,0x1EA`) at the top of the block and that pointer in a2 instead of a1 | the statement order: read the value before the `\|=` store (`v = AF(AF(a, s32, 0x64), s32, 0xCC); AF(AF(a, s32, 0x20), u16, 0x2C) \|= 0x80;`): the accesses may alias, so the source order is the final order, and the argument constants then schedule to the top of the block on their own | func_sc03_107_8017EF3C |
| (r152) `lui v1,%hi(D); addiu v1,%lo(D); addiu a0,v1,-1; sb v0,-1(v1); sb zero,0(v1)` (a symbol kept in a register, elements -1 and 0, the pointer one below passed on) where ours gives `la a0,D-1` and a `%lo(D)` store | `extern u8 D[]` written `D[-1]`, `D[0]` with `&D[-1]` as the argument gives the register form only when the `[0]` access comes first in the RTL (cse rewrites `D-1` through the register of `D` only once `D` is in one), and then the stores keep that order; a pointer local (`u8 *p = D; p[-1]`) folds `p[-1]` back to `D-1`. Left: the original stores `D_8019BA8A`, `[-1]`, `[0]` in that order with the register `D` (7 lines) | func_sc03_107_8017EF3C (parked) |
| (r157) `li s0,0x30` + `mult v0,s0` (a constant factor kept in an s-register across calls) where ours gives `sll/addu/sll` | the factor is a local, `r = 0x30; ... rsin(a) * r ... rcos(a) * r`, set just before its first use (mulsi3 takes only registers, so the variable is never folded back into a constant multiply) | func_sc02_026_80183B04, func_sc02_026_8018365C |
| (r157) a small switch dispatched as `beq 1; beqz; beq 2; beq 3` (equality only, case 0 as `beqz`) where ours splits the tree with `slti v0,a0,2` | an unsigned index, `switch (AF(p, u32, 0x30))`: node 0 is bounded below by the type and jumps straight | func_sc01_084_8017C910 |
| (r157) a sound pan's abs / quotient chain in one register (`sra a1`, `negu a1`, ... `subu a1`) where ours keeps x in v1 | reuse one variable: `x = (0xA0 - x) * 0x7F / 160; f(0x702, (u16)(x \| 0x1000));`; with an octave term the raw x is reused too (`x = (x + 0xA0) / 20; if (x == 16) x = 15; x <<= 8;`) | func_sc02_026_80183CAC, func_sc02_026_8018389C |
| (r157) `sll v0,v0,1` straight after the `sll 24; sra 24` of a signed byte where ours re-extends (`sll 16; sra 15`) or loads `lb` | an `s16` temporary and a shift: `k = *t++; a = k; b = k << 1;` (`k * 2` re-extends, `k + k` gives `addu`, `s32 k` gives `lb`) | func_sc01_084_8017C218 |
| (r157) three groups of four `lw`/`sw` from one base register (a 48-byte copy) where ours copies in a loop | three 16-byte member copies (`D.a = p->a; D.b = p->b; D.c = p->c;`); per-field `lui` pairs on a table record mean separate symbols, not one struct array | func_sc02_026_80185440 |
| (r157) locals starting at sp+0x20 with nothing below them (frame 16 bytes bigger), or an 8-byte gap after a first SVECTOR | `u8 unused[0x10];` declared first, or `u8 gap[8];` between the two structs (declaration order is stack order); a leaf with a 0x20 frame and no locals needs none | func_sc02_026_8017FD58, func_sc01_084_8017C218, func_sc01_077_8017C710 |
| (r157) a loop's induction pointer at the record's first written field where ours sits at the last | the giv base follows the field the body writes LAST: reorder the updates (`p->x += dx; p->z += dz; p->y += p->dy;`) (r151's 8017CDD4 row is the same rule from the other side) | func_sc02_011_8018B1B0 |
| (r157) a global loaded after a store through a pointer into a neighbouring global (`sh s2,2(s1)` then `lh %lo(D_5D6)`) where ours hoists the load | both are one object: a struct from the lowest 4-aligned label (`typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys; extern PtSys D_..._801EB5D0;`). CAUTION: based at the 2-aligned label the aligned array lands at +8, not +6, and cmp_func still says MATCH (relocations masked); check offsets by hand | func_sc02_011_8018B058 |
| (r157) `lh` (not `lhu`) of a global that is only shifted and stored as a halfword | read it into an `s32` local first (`gg = D; p->dy = gg << 6;`) | func_sc02_011_8018B058 |
| (r157) a new value in its own register zero-extended into the parameter's (`subu s3,s2,v1`; `andi s2,s3,0xFFFF`) | `u16 s = spd; s += rand() % (s >> 2) - (s >> 3);` and `s32 m = s;` for the uses, with an `s32` parameter | func_sc02_011_8018B058 |
| (r157) two halves of a vector kept apart (`sra 12` before a call, `sll 16` after it) | `s16` locals stored later: `vx = (c * s) >> 12; vz = (n * s) >> 12; p->x = vx << 16; p->z = vz << 16;` | func_sc02_011_8018B058 |
| (r157) `rand()` copied twice (`move v1,v0; move a2,v1`) with a `srl` on its masked high byte | the result is a `u16` local and the shift `(u32)(r & 0x7F00) >> 5` | func_sc02_011_8017C360 |
| (r157) `addiu v1,v1,-0x10; addu v1,v1,v0` (field minus 16, plus the random) where ours folds the constant into the random | `f += (rand() & 0x1F) - 0x10;`; the same order for `x + (((r & 0x7F) << 3) - 0x200)` | func_sc02_011_801909D8, func_sc02_011_8017D50C |
| (r157) `multu ... andi 0xFFFF` on `D % 5` | a u16 global: `D % 5 == 0` (the % is shortened to u16) | func_sc02_011_801909D8 |
| (r157) a loop counter and a later call argument in one register, both re-extended | one `s16` variable for both; `if (x >= 0xD) i = 2; else i = 8;` for the `bnez; li 8` layout | func_sc02_011_8017D50C |
| (r157) a clamp that falls through `slti; bnez; li 0x7FFF; slt; bnez; li; j; move` | the ternary `c = (x < -0x7FFF) ? -0x7FFF : (x > 0x7FFF) ? 0x7FFF : x;` (the if/else chain lays out differently) | func_sc01_077_8017C710 |
| (r157) a constant store after the loads of the next statement (`5C \|= 1; lw 0x20; lhu 0x12; sh 1,0x5E; sh 0x62`) | write the constant store last in the source | func_sc02_011_80190748 |
| (r157) the OT link `lw tag; and 0xFF000000; lw ot; and 0xFFFFFF; or` with the masks in registers and the OT index reloaded through one address register | PsyQ's addPrim written out on a bitfield tag (`typedef struct { unsigned addr : 24; unsigned len : 8; } PTag; ((PTag *)p)->addr = ((PTag *)ot)->addr; ((PTag *)ot)->addr = (u32)p;`), the index `extern u16 D_800B9A02[]` read as `D_800B9A02[0]` (a stage that declares it scalar needs the retype for clones) | func_sc02_011_8018AB20, func_sc02_011_8018B2C4 |
| (r157) stack addresses recomputed (`addiu a0,sp,0x10`) after a two-way constant argument where ours keeps them in s-registers | two calls in an if/else (`if (f & 1) RotMatrixZ(0x400, &m); else RotMatrixZ(-0x400, &m);`): cross-jumped into one call, and cse restarts after it | func_sc02_011_8018B2C4 |
| (r157) `lw a1,0x10(sp)` of an out-parameter before `lw v0,0x20(s0)` (the object) where ours loads the object first | copy it to an `s32` local first (`w = v; AF(AF(o, u8 *, 0x20), s16, 0x10) = w;`) | func_sc02_035_801834BC, func_sc02_035_80183A14 |
| (r157) a shared `sh v0,2(s0)` reached by branches with `li v0,1` / `li v0,5` in their slots | nested ifs with the stores last: `if (E0 == 0) { if (F14()) { ...; return; } AF(2) = 5; } else { AF(2) = 1; }` | func_sc02_035_801834BC |
| (r157) `bnez v0; addu v0,s2,s0; subu v0,s2,s0` (a random sign) | the ternary `(rand() & 1) ? c + d : c - d` with an `s32` copy of the `lh` base; `rand() % 4096` written inline as the call's argument | func_sc02_035_8018362C |
| (r157) a sound id picked by `bnez; li 0x6D6 / li 0x43A` | the negated ternary `f(!(x & 0x1000) ? 0x43A : 0x6D6, 0)` | func_sc01_077_80185428 |
| (r157) a y stored twice to a stack vector with the z load between (`sh 0x1A; sh 0x12; lhu z; addiu 0x40; sh 0x1A`) | `y = AF(o, s16, 0xA); a.y = b.y = y; a.z = b.z = ...; b.y = y + 0x40;` (an `s16` y) | func_sc03_107_8017FCF0 |
| (r157) a stage file with no `SetScript` declaration whose placed code uses its value | declare it `extern s32 SetScript();` in drafts for that stage (a `void` declaration breaks the placed callers): sc02_011, sc01_077 | func_sc02_011_8017DB04 |
| (r151) an r147 draft that matches but place_stage defers it: `conflicting types for D_...` (the stage file declares the global with another type) | keep the stage's declaration and cast at each use (`*(s16 *)&D`); tools/stage_bulk/fix_decl.py does it, and retypes an `extern void` engine function to `s32` in the stage file when the draft uses its value | func_sc06_006_80180CA8 (and 45 more) |
| (r151) a callee placed as `void` whose value placed C already returns (`return f(arg0);`), `void value not ignored` | define the callee `s32` with no return statement: same code | func_sc02_005_8018655C, func_sc02_005_80186F14 |
| (r151) `ori r,zero,0xAA10` / `addiu r,zero,0xFF` where ours `li r,-22000` / `li r,-1` (or `addiu -0x400` where ours `li 0xfc00`) | the store's type decides the immediate's sign: write the literal unsigned (0xAA10, 0xFF) or make the field / global `u16` / `u8` (or the reverse); levers2.py tries both | func_sc01_077_8017E924 and about 120 more |
| (r151) `lw` / `lh` / `lhu` of a global or field where ours loads another width | retype that field (`AF(p, T, off)`) or global; a table read through `*(&D + off)` is `*(T *)((u8 *)&D + off)` (levers2.py) | func_sc03_031_8018043C |
| (r151) `srl` where ours `sra` (or back) | the shifted value's signedness: a `u16` / `u32` type or cast on that line (levers2.py) | func_sc03_093_8018164C |
| (r151) `addiu a1,a2,-0x4` where ours `-16` | the pointer step is in elements: `p - 1` on an `s32 *`, not `p - 4` (levers2.py) | func_sc03_089_80188428 |
| (r151) `nop` in a call's delay slot where ours `li a1,K` / `move a0,s0` (or the reverse, `addiu aN` / `addu aN,sX` against our `nop`) | the call passes fewer (more) arguments: the register is passed through from the caller (K&R); drop the trailing arguments that only repeat a parameter in its own position (`f(arg0, arg1)` -> `f(arg0)`) | func_sc02_011_80188D80, func_sc03_002_80184C20, func_sc02_026_80184250 |
| (r151) m2c's `q = t >> n; if (t < 0) q = (t + K) >> n;` and `t - ((q >> n) * M)` | `t / 2^n` and `t % M` (`rand() % 4`); a `do {} while` counter bumped first is a plain `for` | func_sc02_026_80181CC8 |
| (r151) `lw a0,0xD0(s0); beqz a0` where ours loads v1 and calls with no argument | the tested field is the call's argument: `p = AF(arg0, s32, 0xD0); if (p != 0) f(p);` (levers2.py) | func_sc02_011_801861FC |
| (r151) `bnez` to the end where ours `beqz` to the shared block (or `if (p == NULL) return 0; return x;` the wrong way round) | invert: `if (t != 0) return; goto block;` / `if (p != NULL) return x; return 0;` (levers2.py: early-return polarity; --swap tries adjacent statement swaps) | func_sc02_026_8017F9D4, func_sc03_007_8017EF68 |
| (r151) a found flag set from `sltiu` copied v0 -> s2 and back before its test | `s16 found;` (uninitialised, as the original leaves it) | func_sc02_011_8017CA14 |
| (r151) a global's address reused from a register (the call's argument, then `sb 0(a0)`; `sw 0(s0)` then `s0 - 0x14` as a MATRIX pointer) | pointer locals: `p = &D; f(o, p); p[0] = 0xFF; g(p, ...)`; `q = &D2; q[0] = x; ...; m = q - 5;` | func_sc02_011_8017CC8C |
| (r151) a global loaded before a store through arg0 (`lui v1; lw v1,%lo(D)` above the `sw 0x1C(s0)`) where ours loads it after | read the global into a local first, before the store | func_sc02_026_801840FC |
| (r151) one call reached from both arms with only its argument different (`lui a1` in each arm, one `jal`) where ours selects the pointer first | two calls, one per arm: jump2 merges their tails | func_sc02_026_80184494 |
| (r151) m2c drafts that do not compile (`conflicting types`, `undeclared spXX`, `parse error` on M2C_FIELD, `void value not ignored`, `invalid type argument of unary *`, wrong argument counts, `void *` arithmetic, a subscripted scalar) | tools/stage_bulk/fixdraft.py patches them by the compiler's errors (up to 6 rounds): 2 390 of r147's 2 553 compile after it, 383 match outright | (r151 batch 1) |
| (r151) a placed function whose clones all fail to compile | no helper `#define`s in placed code: clone drafts take only the function body from the stage file | func_sc02_026_8018038C |
| (r151) a GTE draft that MATCHes but place_stage defers as "build differs" | (before b4fe2a8) place_stage dropped `#include "gte.h"`; r151_tools/insert_hand.py inserts by hand and keeps it only if make check-<stage> is byte-identical. Not every "build differs" is a tool bug: a MATCH can load permuted globals (relocations masked), the image check is the proof | func_sc02_016_801829D8, func_sc02_041_8017F314 |
| (r156) a draft matches in cmp_func but the stage build stops with "too few arguments to function X" (X in C with parameters, the original passes fewer: a1.. through) | call it through a K&R cast `((s32 (*)())X)(a0)`: same jal, no prototype check | func_sc07_010_8017DC10 and 16 more |
| (r156) `addiu a0,a0,4` where ours steps 16 (a pointer walked in elements) | the pointer's step in bytes: `p = (void *)((u8 *)p + 4)` or the right pointee type; m2c's `s32 *` += 4 is 16 bytes | func_sc04_011_80185FAC |
| (r156) an m2c do-while / goto loop that differs in register order (counter in a1 vs a0, the increments swapped) | rewrite as a plain `for (i = 0; i < N; i++)` over `((T **)&D)[i]` (strength reduction gives the original's pointer); for two consecutive loops use one counter variable (both in s0) | func_sc04_015_80183C3C, func_sc06_029_8017EE10 |
| (r156) a loop starting at index 6 whose pointer starts at a second symbol (`lui %hi(D_..._801EFC64)` = D_801EFC4C + 0x18) | index the second symbol: `((void **)&D_801EFC64)[i - 6]` for i = 6..; `&D_4C[i]` gives a D_4C+0x18 relocation | func_sc04_011_80185F1C |
| (r156) a search loop over 0x10C-byte objects where the pointer and counter increments are swapped | `for (i = 0; i < 0x60; p += 0x10C, i++)`: the order in the for's third clause is the order of the two increments | func_sc05_010_8017BFBC |
| (r156) `lhu v0,%lo(D)(at)` with `addu at,at,a0` and a byte step 0xE (14-byte records) | index the symbol with a byte offset: `*(u16 *)&((u8 *)&D)[off]`, `off += 0xE` in the for | func_sc06_000_80186A0C |
| (r156) a stack copy with lwl/lwr/swl/swr (8 bytes) | the struct is byte-aligned: `typedef struct { u8 b[8]; } B8; B8 v = *(B8 *)&D;` | func_sc04_002_8017FC98 |
| (r156) `sw v0,8(s0)` after sll/sra 16 of a call result (field read with lh elsewhere) | the field is s32 and the value s16: `AF(o, s32, 8) = (s16) f(...)` | func_sc04_002_8017FE28 |
| (r156) a symbol's address in s1 (`lui s1; addiu s1`) loaded after a call and only used as `s1 + 4` | assign the address to a local at the top (`p = (u8 *)&D;` before the call) and pass `p + 4` | func_sc05_008_8017FE64 |
| (r156) compare chain `beqz t, case0; beq t,1, case1; j default` with the cases out of line in source order | a `switch` with case 0, case 1, default (if/else chains place the first arm inline) | func_sc04_000_8017F628 |
| (r156) a hoisted loop constant (`li a1,1` for a `sb`) placed after the pointer init in ours, before it in the original | put the constant in a variable assigned before the pointer (`i = 0; one = 1; for (p = &D; ...)`) | func_sc04_002_80180AC0 |
| (r156) loads in a different order (`lhu 6, 0x12, 0xE, 0x1A` vs ours 0x1A first) | read each into its own local in the original's order (`e = AF(o,u16,0xE); a = AF(o,u16,0x1A); AF(o,u16,0xE) = e + a;`) | func_sc04_002_80180C8C |
| (r156) a global pointer loaded late (lui/lw after the stores) where the original loads it before | read it into a local before those stores (`p = D_x; AF(s4, s16, 0x1A) = ...; AF(arg0, ..) = AF(p, u16, 2) + ..`) and keep a fresh temp for a later sum | func_sc04_008_8017D9CC |
| (r156) a stack local 8 bytes too small / at the wrong offset (sp+0x1C instead of 0x20) | an SVECTOR / 8-byte local is `s32 sp18[2]` (or `u16 x[4]`), not one s32; locals are laid out in declaration order | func_sc06_000_8018684C |
| (r156) a rand tier list (`slti; bnez end; li v0,K` repeated) | early returns in order: `if (r < 0xC8) return 5; if (r < 0x12C) return 0; ...` (nested ifs with a result variable put it in a0) | func_sc04_015_8018106C |
| (r156) a call whose a0 is the function's own a0 untouched (no `move a0,s0` before the jal) | call it with no arguments, K&R (`f()`), the caller's a0 passes through | func_sc04_018_80180CC0 |
| (r156) `andi v0,x,0x8000; sltiu v0,v0,1` where ours `srl; xori; andi` | compute the mask into its own variable, then compare: `m = t & 0x8000; return m == 0;` (one expression folds to the shift form) | func_sc06_018_8018765C |
| (r156) the if arm laid out after the else arm (bnez to the out-of-line test) | write the arm the original reaches by the branch first: `if (t & 0x2000) { ...; return ...; } call(); return 0;` | func_sc06_018_8018765C |
| (r156) a function returning a constant that the caller ignores (`li v0,2; sh v0,2(s0)`) | make it `void` and store the constant: m2c's `return 2` adds a second register | func_sc06_018_80188234 |
| (r156) a 0x14-byte stack record filled field by field and passed to a call | a struct local in the original's field order (s16 fields for negative constants: `li -0x94`, u16 gives `ori`) and the stores in the original's order | func_sc04_011_8017CAF8 |
| (r156) unaligned 8-byte copies of D_80126940 into two SVECTOR-like locals | `*(B8 *)&a = *(B8 *)&D_80126940;` with `typedef struct { u8 b[8]; } B8;`, the fields read through the SVECTOR type | func_sc07_002_8017FF84 |
| (r156) a pointer loop whose store address gets its own induction register in ours (`addiu s0,s2,28`) | a goto loop (no loop notes, so no strength reduction) and the stored constant in a variable set before it | func_sc04_015_80180618 (one register pair left) |
| (r160) a jump-table switch (`sltiu 0xA; lw jtbl; jr`) where ours compiles a beq tree | list every case the table sends to the default block explicitly (`case 1: case 2: ... case 8: default:`), so the case count reaches the table threshold; case bodies come in source order (read the table to map indices to blocks); a case ending at the common `return r` is `break`, not `return r;` | func_sc01_004_8017E3A0, func_sc01_004_8017E5B8 (park), func_sc03_093_801818F0 |
| (r160) `addiu v0,s0,1; sll 2; lw %lo(D)(at)` (an index + 1 not folded into the offset) where ours gives `lw 4(at)` | the index in its own variable, `k = j + 1; r = D[k];` | func_sc01_004_8017E3A0 |
| (r160) a global's address in a register for its read-modify-write (`lui a0; addiu a0; lbu v1,0(a0) ... sb v0,0(a0)`) while its neighbours use `lui at` | a pointer local for that one global (`u8 *c = (u8 *)&D_801D3100; if (*c > 0x10) *c -= 0x10;`); stores of 0xFF (`addiu 0xFF`, not `li -1`) into `s8` globals: through `u8` (`*(u8 *)&D = 0xFF`); a pointer local assigned late (inside the `if (s != 0)` arm) for `lui v1; addiu v1; lw 0(v1); sw 0(v1)` | func_sc02_028_80182688, func_sc02_028_80182060, func_sc01_004_8017D964 |
| (r160) a call whose `a1` is set in a branch delay slot before the jal (`addiu a1,zero,0x4000` with nothing else using it) | the call takes that argument (m2c drops it) | func_sc02_028_80182688 (`func_sc02_028_8018248C(arg0, 0x4000)`) |
| (r160) `lhu 0x34` re-read for `AF(p,0x34)++` after an `sw` to the same struct (`AF(p,s32,0x14) = ..`) where ours reuses the earlier test load | the statement order of the original (the s32 store before the increment) | func_sc02_026_8017E02C |
| (r160) `lw a1,0x10(sp)` (a stack word) loaded before `lw v0,0x20(s0)` for `AF(AF(p,0x20),0x10) = w` | copy it first (`x = w; AF(..) = x;`); a `+=` whose right side is a call and whose target is re-read after it (`lw a0,0x20(s0); lhu 0x12` after the jal): `t = f(..); AF(AF(p,0x20),s16,0x12) += t;` | func_sc03_089_801841E8 |
| (r160) an arg passed through the OR constant's register (`lui a1,0x5000; or v0,v0,a1` before `jal f`, m2c's `f(p, 0x50000000)`) | the call has ONE argument; the constant only feeds the `\|=` | func_sc03_093_80181470. A word read back through a pointer just stored (`sw v0,0xCC(s1); lw v0,0(v0)`): `AF(p,s32,0xE0) = *AF(p, s32 *, 0xCC);` (same function) |
| (r160) `srl v0,v0,8` before an `sh` of `rsin(x) >> 8` | `(u32) rsin(x) >> 8` | func_sc03_093_8018171C, func_sc03_093_801818F0 |
| (r160) two stores to one field in a row (`sh 0x7000` then `sh 0x2000` to 0x1A) are in the original; keep both |  | func_sc03_089_80185678 |
| (r160) a switch whose arms load a pointer into the same s-register as the switch value (`lhu s0,0x34(s1)`, later `lw s0, 0x20(s1)` in two cases) with the parameter in s1, where ours swaps s0/s1 | the arm locals declared inside each case's block (`case 2: { u8 *p; ... }`, and in case 3 also its `s16 h`) | func_sc02_026_80181B18 |
| (r160) a loop-invariant `move s0,a3` / `move s5,a3` in each of two loops' preheaders (after the hoisted constants) for a value computed before the if | the variable is narrower than its use (`s8 k = AF(p, u16, 0x70) & 0xF;` passed as an int argument): the extension simplifies to a move that loop.c hoists | func_sc02_026_8018200C |
| (r160) a stack address hoisted into an s-register before a loop (`addiu s6,sp,0x20` after `addiu s5,a0,4`) where ours rematerialises it at the call | a pointer local assigned inside the loop body (`wp = &w; f(wp, ...)`); assigned before the loop it lands first in the prologue | func_sc02_026_801823E8 |
| (r160) two calls sharing their tail (`jal func_80131E00` reached from `li a1,0x12` and from `li a1,0xD`; `jal func_80131C78` from two arms) are plain calls in each arm | cross-jumping merges them (m2c's gotos are not needed) | func_sc02_026_80181D94 |
| (r160) a call result tested in v0 while a copy holds it for later (`move a0,v0` after unrelated insns, `bnez v0`), or a computed value copied into an s-register in a delay slot (`addiu a0,..; ...; move s1,a0`) where ours computes straight into the s-register | two variables, the copy taken BEFORE the last use of the first (`t = f(); o = t; AF(p,0x20) = t; if (t == 0) ...` / `t = x + 0x6000; d = t; AF(p,0x14) += t;`) | func_sc02_011_8018FE94, func_sc02_011_8017F67C |
| (r160) both arms of an if storing a different constant to one field, compiled as `li v0,C1 / li v0,C2` then one shared `sw v0` where ours keeps a variable in a3 (scheduled early) | write the store in each arm (`AF(p,0x14) = 0x80;` / `= 0x20;`), not `v = ..; AF(p,0x14) = v;`: GCC merges the tails itself | func_sc02_011_8017F32C |
| (r160) an and-mask tail (`and v0,v1,v0; sw; li 3; sh`) placed BEFORE the other case's block, with the masks loaded in the branch delay slots | `if (f & 1) m = ~1; else if (f & 0x10) m = ~0x10; else goto other; tail; return; other: ...` (an if/else with return puts the other block first; m2c's comma form gives the masks in a0) | func_sc02_017_80185064 |
| (r160) a GTE output base kept in s0 from a `lui/addiu` AFTER SetTransMatrix, with `+0x10`/`+0x18` in s5/s4 and one field stored through its own symbol (`lui at; sh %lo(D_..CC)`) where ours CSEs one global struct to the top | a pointer local assigned late (`q = D_x;` after SetTransMatrix) and `q + 1..3`; the other fields as separate externs (code, colours, the +4 halfword) | func_sc02_011_8017F7B4 |
| (r160) two hoisted address registers (`lui s4/s5` at the top, used inside a loop) are pointer locals initialised at their declaration (`u8 *w = (u8 *)&D_800AF630; u8 *g = &D_80078E78;`); a counting loop whose induction pointer is separate from the counter (no loop reversal) indexes the array (`((Fx24 *)&D)[j].done`), and its variables are not shared with the second loop; `c \|= (c << 16) \| (c << 8); p->c4 = c;` keeps the OR chain in the arg register |  | func_sc03_002_8017F688 |
| (r160) a QuadArg on the stack whose colour words are written as words (`sw 0x80` to c[0], c[1]) | `*(s32 *)&q.c[0] = 0x80;`; the points from 2-aligned SV4 globals are struct copies (lwl/lwr pairs) | func_sc02_027_8018A21C |
| (r160) stack layout follows declaration order (first declared at 0x10) | a WMtx at 0x10 and an SV at 0x30 are declared in that order (m2c's `s32 sp10; u16 sp30[3]` put them the other way round); the result of a two-step `u16` table read `lhu` from an `s32[]` table is `(u16) D[i]`: func_sc02_011_8017EB3C. `(s16)u >> 3` of a u16 struct field gives `lhu; sll 16; sra 19` (UV4/`u16 o[4]` locals) | func_sc02_017_8017F92C, func_sc02_011_8018FE94 |
| (r158, checked in the stage build) base+idx*size address computed after the multiply and reusing the index register (lui after sll chain), where the original loads the symbol first into its own register | assign the base symbol to a pointer local just before indexing (b = (T *)&D; d = &b[i];); for a second use after a call or loop, use a separate fresh local (b2 = (T *)&D;) rather than reusing b, which would hold it in t1 across the code between | `func_sc02_011_8017C688` |
| (r158, checked in the stage build) Two if/else arms that end in identical stores get merged into one shared tail (fewer instructions; the original has a separate tail in each arm, with registers swapped) | write each arm's stores as one chained assignment `A = B = expr` (B is stored first) with the base pointer re-read inside the expression, so the arms' RTL differs and cross-jump leaves them apart; a sign-bit test whose delay slot holds the wrong arm's constant: `if (x & 0x80000000)` instead of `if (x < 0)` | `func_sc02_026_80180520` |
| (r158, checked in the stage build) a 4-byte local passed by address (RotTransPers sxy) leaves a 4-byte gap after it in the frame (later locals shifted by 4) | declare it s32 and read halves as ((s16 *)&v)[0]/[1]: a struct or array of two s16 is BLKmode on MIPS (alignment 2 < SImode), so it takes an 8-aligned, 8-byte slot | `func_sc02_026_801832A8` |
| (r158, checked in the stage build) a flag's `li s2,1` placed after a call's argument moves (just before the store in the jal delay slot), where yours puts it at the top of the block | write the flag assignment AFTER the call in the source (`f(a, -15, 0); go = 1;`): the flag's variable crosses calls, so sched1 adds no anti-dependence on the call, hoists the set above the jal, and it comes after the arg moves in the stream (position tie-break). Written before the call it always sinks to the front of the block | `func_sc02_011_8017D710` |
| (r158, checked in the stage build) loop counter shared by both if/else arms sits one register too high (t2 where the original has t0; the loop givs take t0/t1) | write the init in each arm (for (i = 0; ...) in both) instead of once before the if: one extra ref lifts its global-alloc priority (here 22 to 23 refs, 0.647 to 0.681) over the givs; reorg still merges the two inits into the branch delay slot | `func_sc02_028_80182FD4` |
| (r158, checked in the stage build) frame 8 bytes short, and a top-level pad[2] lands before an address-taken scalar (t at 0x30 instead of 0x28) | the scalar gets its stack slot only when its address is first taken, so put `{ s32 pad[1]; }` in an inner block after the first `&t`; a pad[2] there overshoots by 8 | `func_sc03_107_8017F6E8` |
| (r158, checked in the stage build) Two if/else arms both end in the same store (`sh v0,0x12(s0)`), and ours cross-jumps them into one shared store (`j L; addiu` with the sh at L) where the original keeps `j L; sh` in each arm | put the arm's flag assignment (`i = 1;`) AFTER the store, so the last insns before the jump differ and cross-jumping does not merge them; sched2 still moves the flag into the jal's delay slot (func_sc03_107_8017FE24) | `func_sc03_107_8017FE24` |
| (r158, checked in the stage build) no m2c draft for a GTE function | grep src/stg for the same callee set (here func_80017714 + RotMatrixZ) and start from a matched near-twin in another stage; this one only changed the argument count and the colour source | `func_sc02_011_8017E72C` |
| (r158, checked in the stage build) repeated calls whose one field argument is loaded first into its own temporary (lw t0 before the lh args, sw t0 in the jal delay slot) | an inlined wrapper (func_8017E520(a, a->0x2C, k)): load that argument into a block-local first, { s32 k = AF(a,s32,0x2C); f(0x2B, a, ..., k, K); }, or use an inline helper (both match) | `func_sc02_011_8017ED98` |
| (r158, checked in the stage build) a conditional negate before a call argument puts the variable in a1 (`sll a1; negu a1; ... addiu a1,a1,-K` in the jal delay slot) where the original keeps it in v0 and does `addiu a1,v0,-K; jal; move a0` | `t = x * 16; f(a, (x >= 0 ? -t : t) - K);`: the ?: result temp breaks global-alloc's a1 preference from `a1 = t + const`, while `if (x >= 0) t = -t; f(a, t - K)` ties t to a1 | `func_sc02_026_80181688` |
| (r158, checked in the stage build) a global's increment through a register (`lui v1; addiu v1; lhu 0(v1); sh 0(v1)`) where the original sets `li a0` before the `la` and ours sets it after (same block as a call) | one pointer local per site, each set only once (`q2 = &D; (*q2)++;`): a single pointer assigned in two cases is scheduled differently | `func_sc01_004_8017EB30` |
| (r158, checked in the stage build) a global index re-read after an addPrim tag store with its address held in a register (lui a2; addiu a2,%lo(D_800B9A02); lhu 0(a2)), copied to another register for a loop | read it as a one-member struct at the use, ((U16R *)&D_800B9A02)->v (in-struct, so it may alias the P_TAG store); a u16 *db local gives the register but no reload, and the array-cast form gives neither | `func_sc01_004_8017E804` |
| (r158, checked in the stage build) if/else whose bnez delay slot holds the fallthrough arm's first insn (negu) and whose j slot holds the arm's last insn, but ours puts the other arm's insn in the bnez slot and drops the j | put the arm that falls through first in the source (if (!(c)) A; else B;); reorg's simple pass fills the slot from the fallthrough, so arm order decides the shape | `func_sc03_089_801858BC` |
| (r158, checked in the stage build) two slt arms (lh/lh/slt in each, `j` join with slt in its delay slot) feeding one beqz at a join, with the registers swapped in one arm | not a flag variable (a global pseudo shifts the registers): write `if (c) { if (a < b) BODY } else if (a > b) BODY` with BODY repeated; cross-jump merges the body and the beqz, and each compare keeps its own load order | `func_sc03_108_8017F83C` |
| (r158, checked in the stage build) arg0 and the result variable of several calls have swapped s registers (ours arg0=s0, ret=s1; original ret=s0, arg0=s1), and a call's result is only tested once with an andi straight on v0 | store that result in the shared result variable too (`ret = f(o); if (ret & 0x2000)`): the copy is combined away, but flow has already counted its uses, so ret's priority goes above arg0's (func_sc03_108_801803E0) | `func_sc03_108_801803E0` |
| (r158, checked in the stage build) nested jump-table switches repeated in several outer cases, where the shared inner arm is kept in the last outer case in the original but in the first in yours | write the inner tail once, after the inner switch (the arm does `break;`, and the case that skips the tail does `goto skipN;` to a label after it). If the tail is duplicated inside the arm, cross-jumping merges it at once and keeps the first copy. Also `f = 1; if (m != A && m != B) f = (cond);` for an `li a3,1 / bnez / sltiu a3` store-flag; func_sc01_077_80183324 | `func_sc01_077_80183324` |
| (r158, checked in the stage build) tail `lhu ctr; lhu tbl; addiu; sh ctr; sw 0x1C` comes out as `lhu ctr; addiu; sh; lhu tbl; sw` | write the word store `x->1C = tbl->u16` before the `x->ctr++` in the source; sched1 then loads both before the halfword store | `func_sc02_011_8018797C` |
| (r158, checked in the stage build) a store to a stack local (gte_stsz target) sits before a following field load where the original puts it after that load, in a delay slot | read the field through a struct member (((XY *)(p + off))->y): MEM_IN_STRUCT plus a varying address does not conflict with a fixed-address scalar in 2.7 sched/reorg, so the store can move | `func_sc02_000_80184BD8` |
| (r158, checked in the stage build) frame 0x10 bigger than the locals need, plus `lh v0; beqz; addu a0,v0,zero; andi a0,0xFFFF` (a shared s16 gives `lh` + `lhu` reloads) | a separate block-local s16 for each table read, `s16 id = tbl[i]; if (id) f((u16) id, 0);`: each orphan s16 gets an 8-byte spill slot, so do not add an unused local | `func_sc01_005_80181B00` |
| (r158, checked in the stage build) prologue `sw s3` placed before `sw ra` (original has ra first), rest identical | the callee-saved variable's first value was set before the if/else-if chain (dir = 1; if ...): set it inside each arm instead, so the set no longer drags the s3 save forward in sched2 | `func_sc03_014_80185EF8` |
| (r158, checked in the stage build) a 6-byte s16 triple table read in a loop through three separate induction variables (one pointer, one base+offset, one spilled pointer) where ours folds into one | declare it as a flat s16 array and index tbl[i*3], tbl[i*3+1], tbl[i*3+2] (not a struct or [][3]); also a stack load of a local (p) emitted before stores through a pointer: put the statements that read the local first in the source, because the scheduler cannot hoist the load above stores that may alias | `func_sc02_000_80189340` |
| (r158, checked in the stage build) `move a0,s1` sits in the branch delay slots and at the top of a store block, while the jal at the join has a nop delay | write the call in each arm (if/else, with the outer else duplicated as well), not once after the join. Cross-jumping merges only the jal, and sched2 hoists each arm's own arg move. | `func_sc03_118_80183D68` |
| (r158, checked in the stage build) a field load after a call (lw v1,0x1C(s1)) scheduled above the store of the call's result to a scalar global, where yours loads it after the global store | read the field as a pointer index ((s32 *)arg0)[7] (or a struct member, e.g. AF(arg0, V3, 0x14).z): an in-struct varying load never conflicts with a fixed non-struct store, so it may move above it | `func_sc02_027_80187400` |
| (r158, checked in the stage build) in one block after a call, the original keeps a load (lhu 6(s0)) below a store to another field of the same base (sh 0xA(s0)), and sra fills the load delay; yours moves the load above the store into a1, and the stack address (addiu a0,sp,0x10) ends up at the top | make the store and that load volatile, AF(p, volatile s16, 0xA) = ...; b.x = AF(p, volatile s16, 6); (same-base accesses at different offsets never conflict otherwise; a pointer variable or an inline helper did not stop the move) | `func_sc03_014_801874C0` |
| (r158, checked in the stage build) a global's load (lhu/lw of a symbol) sits above AF stores through the actor pointer in the original but comes after them in yours | read the global into a local before those stores (`t = D_X; ...; p->f = t;`, or `t = D_cnt; p->c = k; D_cnt = t + 1;`): an AF cast-pointer store is assumed to alias the scalar, so only source order moves the load | `func_sc03_014_80185B44` |
| (r158, checked in the stage build) table load as lui at; addu at,(i-1)<<3; lhu %lo(sym)(at) with a separate addiu -1, where yours folds to -8(at) | the table is an array of 8-byte structs indexed tbl[i - 1].field (ARRAY_REF keeps (i-1)*8); a flat s16/u16 array indexed [(i-1)*4] distributes the -1 | `func_sc03_093_80184F90` |
| (r158, checked in the stage build) a few field stores in one block (`lhu 2C; li v1,-8; sh C; ori; sh 2C; lw 4; ... sh A; or; sw 4`, nothing hoisted) where yours hoists `lw 4` above `sh 2C` with the -8 in v0 and the 2C temp in v1 | the order of the source statements decides local-alloc's register pick (a constant store moved after the `|=`: `p->f2C |= 0x10; p->fA = 0; p->fC = -8; p->f4 |= ...`). With the registers swapped, sched2's anti-dependence on v0 keeps the original order | `func_sc01_005_801812B0` |
| (r158, checked in the stage build) tail: a u16 counter++ lhu scheduled into an earlier load-delay nop, with a later u16 load placed after the sh | write the store fed by the other u16 load (x = ent->u16) before the counter++ statement | `func_sc02_016_8017FCD0` |
| (r158, checked in the stage build) a global load sits after struct stores (sb aliases it) where the original loads it first into the same reg as the dead temporary | read the global into the existing temporary before the stores (v = -D; ... f = v), not f = -D at the end | `func_sc03_107_80181500` |
| (r158, checked in the stage build) a branch on one condition jumps (j) over the other arm to a call that both arms share, each arm with its own beqz to the tail | write the test as a ternary condition: if (flag == 0 ? d < A : d < B) { call; return; } (the nested if / else-if forms give a different layout) | `func_sc01_084_80181F80` |
| (r158, checked in the stage build) Read-modify-write of a field through a struct pointer (lw ptr; lhu; addiu; sh) has the pointer and value registers swapped | do the update inline as AF(AF(base,u8*,off),T,f) -= k instead of first loading the pointer into a local that is then reloaded | `func_sc02_011_80183630` |
| (r158, checked in the stage build) chained store a=b=c=x comes out in the reverse order (sh 0x18,0x1A,0x1C vs 0x1C,0x1A,0x18), or a narrowed % result loses its sll/sra-16 before a negate-or-store branch | write the chain in reverse (the rightmost target is stored first); keep the narrowed value as `s32 k = (s16)(r % N)`, not as an s16 local | `func_sc03_105_8017F234` |
| (r158, checked in the stage build) An arg move (`move a0,s0`) for a shared call is in each predecessor block or branch delay slot, and the call's jal delay slot is a nop | duplicate the call into each arm (if {f(a); g(a);} else {store; g(a);}): sched2 hoists the move above the store in one copy and cross-jumping merges only the jal | `func_sc02_031_80182CF4` |
| (r158, checked in the stage build) field loads in the opposite order to the stores (lhu 0x34; lhu 0x100; ...; sh 0x100; sh 0x34) | compute the later store's value into a temporary first: t = p->s34 + 1; p->flags |= 1; p->s34 = t; | `func_sc03_006_801823B8` |
| (r158, checked in the stage build) a global's address in s0 (`lui s0,%hi(D_X)`) used for a struct copy, then its lower neighbour read and written as -8(s0)/-6(s0) and passed as `addiu a1,s0,-8`, where yours reloads `lui a0; lh %lo(D_X-8)` each time | declare both as one array from the lower symbol (`extern SV8 D_801274E8[2];`), copy into `[1]` and use `[0].x/.y/.z`: cse's related-value rule needs the register to hold `sym+8`, and a bare symbol has no chain; func_sc03_107_8017CF48 | `func_sc03_107_8017CF48` |
| (r158, checked in the stage build) case-local result kept in $s1 in one case where m2c's per-case temp goes to $v0 | share one result variable across the switch cases that are live across calls (the reuse gives it a callee-saved reg) | `func_sc01_084_801826C4` |
| (r158, checked in the stage build) a 16-byte lw/sw copy from a named rodata label into an unused stack slot at entry | an unused local struct assigned from an extern: `typedef struct { s32 w[4]; } W16; W16 sp; sp = D_xxx;` (the movstrsi block move is kept even though nothing reads it) | `func_sc01_084_80182A00` |
| (r158, checked in the stage build) Switch tree has an extra `beqz v1, <end>` (2 insns short) | add an explicit empty `case 0: break;` so GCC keeps the zero test in the binary decision tree | `func_sc01_001_80180514` |
| (r158, checked in the stage build) A global load is scheduled after an sh through a pointer, but in the original it comes before | read the global into a temp before the store in the source (GCC 2.7.2 sched will not move a global load past a possibly aliasing store) | `func_sc02_011_80188A10` |
| (r158, checked in the stage build) Compare against a large constant shows `lui/ori K; slt d,K; bnez` but ours gives `slt K-1,d` | put the constant in a local (lim = K; if (d < lim)) so fold() cannot rewrite it to K-1. Hoisted loop invariant (&local) reused at a later call (move a2,sN instead of addiu a2,sp,N); write the flag test as if/else (if (d < lim) flag = 0; else { flag = 1; ... }) rather than flag = 0; if (d >= lim) {...} | `func_sc03_028_8018150C` |
| (r158, checked in the stage build) In two counting loops over one table, the counter and the strength-reduced pointer have their registers swapped (orig: counter a1, pointer a0, count a2), or the count and the counter are swapped | give each loop its own counter and its own count variable (no sharing between switch cases): a variable shared by several loops collects more refs and outranks the loop's pointer giv in global-alloc priority (func_sc03_121_80180B1C) | `func_sc03_121_80180B1C` |
| (r158, checked in the stage build) a tail shared by two switch cases (both reach the same label, which reloads a global and tests a bit) | write the tail into each case and the compiler merges the copies into one label; and a stack slot of the right size that nothing writes needs an unused local struct (SV8 r;) declared in that slot's order | `func_sc03_121_8017D8D4` |
| (r158, checked in the stage build) Switch arms end in identical code, and the asm shows a j to a shared label with the differing instruction in the delay slot | write each arm out in full; GCC merges the shared tail itself, so no goto is needed | `func_sc03_028_80183A74` |
| (r158, checked in the stage build) Constant stored inside a loop is loaded into a callee-saved register before the loop (not hoisted like a literal), and the s-regs swap with a hoisted literal | make it a variable declared in a block around each loop ({ s16 c = K; for ... = c; }); one function-wide variable gets a different priority and takes the wrong s-reg; keep a literal 0 where the original stores $zero | `func_sc01_080_801809E4` |
| (r158, checked in the stage build) A store to a field sits at the join of an if/else and the field is reloaded right after it (lh after sh), even though the value is still in a register | write the store at the end of each arm (identical tails); cross-jumping merges them at the join and CSE loses the value across the block boundary, so the field is reloaded | `func_sc01_084_80181A7C` |
| (r158, checked in the stage build) a call's argument move (move a0,s1) scheduled to the top of the block after ratan2, while the store of the call's result goes into the next jal's delay slot (the original has the store before the jal and the move in the slot) | write the call and the store into the field in both if/else arms, not `a = ratan2(..)` in the arms followed by one shared store. Cross-jumping merges the identical tails and sched2 then orders them like the original | `func_sc03_028_80181EBC` |
| (r158, checked in the stage build) a pointer field reloaded into a different register and scheduled above a scalar-global store (lw v1,0x20(s0); li v0,3; sh v0,D; ... sh zero,0x10(v1)), where yours CSEs it with the condition's load or reloads it into v0 after the store | write the store first and the reload as array indexing: D = 3; AF(((u8 **)arg0)[8], s16, 0x10) = 0; (p[i] is INDIRECT_REF of PLUS_EXPR, so the MEM is in_struct; the AF cast (NOP_EXPR) is not, and sched then lets the load pass the scalar global store) | `func_sc02_011_80183178` |
| (r158, checked in the stage build) loop flag var (found=0; loop sets found=1) loses v1 to the strength-reduced loop pointer (flag/pointer regs swapped) | declare the flag s16 (or reuse an existing pointer temp for it) to raise its global-alloc priority; separate loop-counter variables per loop when only one loop's counter/pointer pair is swapped | `func_sc03_121_80180E64` |
| (r158, checked in the stage build) lw ptr / li const swap their v0/v1 even with the pointer loaded first in source | split the dependent add off the load: v = AF(p, s16, off); v += K; (a two-statement add changes local-alloc order) | `func_sc03_108_8017F2E8` |
| (r158, checked in the stage build) bounding-box tail: inner MIN/MAX in s16 regs, outer pick against a stack field in SImode (sra tN; move tN,tM), frame 2 slots too big | s16 local for the inner two-level pick, then an s32 result in if-form: `r = e; if (c.x < r) r = c.x;` (the ?: form of the same pick adds 10 insns) | `func_sc01_077_8017C294` |
| (r158, checked in the stage build) a load of an actor field (lh 0x108(s3)) scheduled above independent stack-struct stores in the original where ours keeps it after them (ours has a nop or a load delay) | 2.7.2 sched true_dependence exempts only an in-struct load at a varying address against a non-struct store at a fixed address. Write the load as ((s16 *)arg0)[off / 2] (an INDIRECT_REF of a PLUS_EXPR is in-struct; AF's cast gives no /s) and the stores through a cast, *(s32 *)&p.col[k] = v (CVECTOR members). Both changes are needed; func_sc02_011_8018E8A0 | `func_sc02_011_8018E8A0` |
| (r158, checked in the stage build) hoisted 0xFFFFFF / 0xFF000000 in the wrong order (or a register tie between them and a loop pointer) in OT linking code | write the link with psyq.h addPrim (bitfield setaddr/getaddr): store_bit_field masks the value with 0xFFFFFF before clearing with 0xFF000000, so loop.c hoists 0xFFFFFF first; func_sc02_028_801833F0 | `func_sc02_028_801833F0` |
| (r167) a 50-200 instruction stage function whose m2c draft is far off | write it from the asm statement by statement into a stub with the right externs (show.py / mk.py / hv.py in the r167 notes); 21 of 28 shapes matched on the 1st-2nd compile, 51 of 54 by helper agents with a 1-page brief | func_sc06_008_80183750 and 80 more |
| (r167) a frame slot nothing uses in a function that compares a u16 table entry as signed | the `(s16)` cast of the u16 read is the slot; no `unused[]` local | func_sc04_015_80182720 |
| (r167) `e + r` / `e - r` chosen by `rand() & 1`, ours with an extra s-register or o in the wrong one | one ternary store `AF(o,s32,0xE8) = (rand() & 1) ? e + r : e - r;` (if/else and a result variable add a pseudo) | func_sc06_018_80183CDC, func_sc06_018_80183DA4 |
| (r167) `bgez` with the else arm inline where ours inverts it (sign of a word copied into another) | test `x & 0x80000000` instead of `x < 0`; it also gave the leaf's 0x10 frame | func_sc06_008_8017ED80 |
| (r167) a word read as `lui s2; addiu s2; lw 0(s2)` with the address kept across calls | the symbol is an array: `extern s32 D[];`, read `D[0]` (a scalar or cast pointer gives `lui; lw %lo`) | func_sc06_008_80180000 |
| (r167) a store to a scalar global placed after a later array-indexed load in ours | declare the global `extern s32 D[];` and store `D[0] = 1`: a fixed scalar and an array reference never alias, so they reorder | func_sc04_015_80180CCC |
| (r167) a jal with no `move a0,s0` before it | either K&R `f()` or `f(o)`: cse drops the move while a0 still holds o; f(o) can also change the delay-slot fill | func_sc06_008_80183BF4 (r156's park) |
| (r167) a narrow parameter (u8 / s16 / u16) is needed for the copies, but the stage declares `extern ... f();` | prototype `s32 f(u8 *o, s32 n0) { s16 n = n0; ...`: same code, no "default promotion" conflict; K&R definitions also match but place_stage / stage_clone skip them | func_sc06_018_801874E4, 801876BC, 80189E60, 80188E10, func_sc06_008_8017EC48 |
| (r167) two 12-bit fields packed in a word, the registers permuted when read as bytes | read the word once: `(u8)(v >> 8) \| ((v & 0xF) << 8)`; combine narrows it to the lbu | func_sc06_018_80187DD0 |
| (r167) a 12-byte stack copy whose destination base lands in s0 with a V3 struct copy | three s32 word assignments | func_sc06_018_80183A70 |
| (r167) a matrix pool take `lw v0; move s1,v0` before the increment | post-increment the pool pointer: `q = D_8019E738++;` (`extern WMtx *D_8019E738;`) | func_sc06_008_80180578 |
| (r167) object and loop-counter registers swapped in a function with two loops | give the second loop its own counter variable | func_sc06_008_801807BC |
| (r167) a table walk whose end pointer is recomputed, or o / min swapped | the end pointer as its own local `end = p + 0x6480;` and the start statements in the original's order (`p = &D; min = 0x7FFF; end = ...`) | func_sc04_015_80182614, func_sc04_015_801824A8 |
| (r167) SetRotMatrix / SetTransMatrix both on D_800AF648 with the address in a0 twice | two expressions: `SetRotMatrix(&D_800AF630.wsm); SetTransMatrix(&D_800AF648);` (r153's row) also for this shape; the sound-pan block after RotTransPers is r153's with another sound id | func_sc06_008_8017EF54, 80181B20, 80181CF0, 8017F624 |

Parked in SC02_031 (two rounds each; drafts in build/work/hs/): 8017ECEC and 8017ED60 (frame / re-association),
80184760, 80181EF0, 80184B94 (the original keeps a value in a0 or copies a0 to a1 at entry: not found), 80182CF4
(203 instructions: case 0's two calls are not cross-jumped in the original), 80184844 (a counted loop's `i++` in a delay
slot), 8017CCF8, 801818A4, 8017D8DC, 8017F050, 801831B4, 8017C180, 80181C2C (register choice and store order), 80181F5C.

Parked by r151 (22 Oct): func_sc02_011_8017C558 (76 instructions, 27 copies; all but one OR: the original computes
`k | 0x40000000` into v0 after loading the field into v1, with the mask in v0; 11 forms tried. Lever left: a bitfield
for the 0x30000000 bits, or k as the arg1 register itself).

Parked by r160 (22 Oct; templates in C:\tw\stage-sweep\build\work\r160\, notes folder r160_notes.md): func_sc02_028_801829BC
(150, 8 copies; one register copy: `lh v1; move s0,v1; andi v1,0x8000`, 288 variants), func_sc01_004_8017E1D4 (115, 10
copies; the dim flag copied s0 -> s4 -> s6: inlined helpers?), func_sc03_107_801801E4 (145, 8 copies, GTE; the sign-bit copy
block's AND arm scheduling), func_sc02_026_801825A4 (129, 6 copies; zero stores against the remainder code),
func_sc01_004_8017E5B8 (147, 5 copies; one table-entry access form), func_sc01_004_8017D758 (124, 5 copies; register order),
func_sc02_028_80182794 (67, 4 copies; loop 1's counter / pointer registers swapped). The r158 rows above are its agents'
notes for functions that build byte-identical in the stages (the levers are theirs, not re-derived); its park / stopped
rows stay in the notes folder (r158_patches/r158_recipe_rows.md).

Parked by r156 (22 Oct, S2; templates in C:\tw\stage-s2\build\work\s2b): func_sc04_000_8017F8A0 (59, 12 copies: only
the `move a0,s0` after the func_800139C8 call is placed later in ours), func_sc04_002_80180D48 (26, 11 copies: fold
gives `(v << 8 | K) | v` where the original ORs `v | K` first, and the loads go via v0 instead of straight into a2),
func_sc04_002_801829E8 (33, 8 copies: the original reloads the u16 in each branch), func_sc04_002_80185CC8 and its two
copies (45: `li v0,4` in the beqz slot before the D_8011F730 load), func_sc04_018_8018C1E0 / func_sc05_017_8018BEE0 (27:
`move a0,s0` in the jal slot), func_sc07_007_8017F788 / 8017FD2C (35: the prologue loads D_801151D4 into s1 before
saving s0), func_sc06_008_80183BF4 (71, 7 copies: the 0xA store sinks below the zero stores in ours). After merge 1: func_sc06_011_8017F2DC (18,
6 copies) and func_sc04_015_8017C2D0 (34) want the selected constant in v0 where ours puts it in v1 / a1;
func_sc04_015_801827BC (25: range checks with v0 = 0 in each delay slot), func_sc04_015_801819D0 (31: a 2-case switch
whose tree has an extra slti < 2), func_sc04_015_80180F94 (26: two stores later in ours), func_sc04_015_80180618 (36: a
goto loop and a `one` variable leave only s2 / s3 swapped), func_sc04_015_8017D6FC (44: s0 / s1 swapped),
func_sc06_018_8018931C (25: the arg0 copy and a load scheduled earlier in ours).

### r163 rows (S1 batch 5, 22 Oct; merge 6a4a138)

| Symptom | Source | Example |
|---|---|---|
| (r163) a stack word filled by a call (`f(&w, ..)`), then read whole (`lw a1,0x20(sp)`) with a1 used as the low half and `sra 16` for the high half | a union `typedef union { s32 w; XY s; } UXY;` copied to a local (`x = w; .. += x.s.x; .. += x.s.y;`); XY alone (2-aligned) gives lwl/lwr, an s32 with `>> 16` ties the shift to the load's register | func_sc03_089_80184730, 801848AC, 801844C8, func_sc02_011_80188250 |
| (r163) the sign-bit copy `if (src < 0) dst \|= 0x80000000; else dst &= 0x7FFFFFFF;` with the OR arm's `lui 0x8000` in the bgez delay slot and the AND arm's lui after its load (ours hoists the AND lui) | a 31:1 bitfield: `typedef struct { unsigned lo : 31; unsigned top : 1; } TB;` and `if (AF(src, TB, 4).top) AF(dst, TB, 4).top = 1; else AF(dst, TB, 4).top = 0;`; the bitfield access costs an 8-byte stack slot at the top of the locals (shrink a pad or array by 8) | func_sc03_089_801851A8, func_sc03_107_801801E4 (r160 park) |
| (r163) one store whose constant comes from either arm (`li v0,0x1000` in the beqz slot, `sh v0` after the join) | a constant store in each arm (cross-jumping merges the sh), not a variable set before the test (that conflicts with the call result in v0) | func_sc02_026_8017E1FC |
| (r163) a field load or store through a1 just before a call that takes the object (`move a1,s1; lw v1,0xDC(a1)`) | a copy `q = p;` before those statements, the accesses and the call through q | func_sc02_028_8018248C, func_sc03_108_8017F140 |
| (r163) two `return 1` tails vs one | `if (..) {stores; return 1;} f(p); return 1;` gives two (li v0,1 before the last store's load); an if/else with one `return 1` gives a shared tail: write whichever the original shows | func_sc02_011_80188250 (if/else), func_sc01_077_801809BC (two returns) |
| (r163) a local table whose first constant stays in an s-register and whose stores come after all prologue saves | an initializer `s32 lim[2] = { 0x3C100, 0x51000 };` (two assignments schedule into the prologue) | func_sc01_077_80180F10 |
| (r163) `\|x\| < n` tests compiled per sign arm (bltz to a negu arm, each arm its own slti / branch) | a ternary of comparisons `(x >= 0 ? x < n : -x < n)`, not a ternary abs | func_sc03_108_8017FD64 |
| (r163) an abs whose negative arm recomputes the subtraction (`s - 0x1000`, no negu) | `(x >= 0 ? x : -(x))` written out with x = `0x1000 - s` | func_sc03_108_8017F640 |
| (r163) a product used in both arms computed once before the if (`sll t0,v1,1` kept for the end) | the product in its own variable before the if (`m = b * 0x666;`) | func_sc02_026_8017EA88 (park) |
| (r163) a compare's load order (global first) | operand order in the source: `D > z`, not `z < D`; a reused s16 temp loads twice (lh + lhu): a fresh local for the last read | func_sc03_093_8017F570 |
| (r163) a global's address hoisted into a register at the top and used once (`lh 6(a1)`) in a later block; a table at D+2 indexed by a re-read field | a pointer local assigned at the top (`c = (s16 *)&D;` .. `c[3]`); `D[AF(p, s16, 0x70) + 1]` | func_sc03_093_8017F398 |
| (r163) three loops sharing i and o (first match, second match, then the two nearest) | three `for` loops continuing the counter, `break` without the increment | func_sc03_089_80183CE8 |
| (r163) object pointer in s0 and parameter in s1 where each arm had a block-local pointer | one function-scope pointer shared by both arms | func_sc02_026_8017DAB8 |
| (r163) two s-registers swapped between a pointer and a value parameter | the value parameter u16 (a truncating store needs no mask); an s16 count parameter gives the entry sll/sra | func_sc03_002_8017F068 |
| (r163) s16 parameters where the stage file already has a non-prototype extern ("an argument type that has a default promotion") | a K&R definition (`s32 f(p, d, e) u8 *p; s16 d; s16 e; {`); place_stage and stage_clone skip K&R definitions (insert by hand; build/work/r163/kr_put.py, samesh.py finds the copies) | func_sc03_107_8018134C |
| (r163) clone repairs: "conflicting types" (a stage-local `extern void F();` the clone defines s32), "void value not ignored", PtSys stores from a u16 source, `func_80029504() < 200` giving slti, `&D + i * 14` with D s16 in the target, `D_800A6610[D_800B9A02[0]]` with the target's 1-D table | retype the extern to the definition; s32 for a value-used function still asm; `D.a = ..; D.b = ..;`; `(u32) func_80029504() < 200`; `(u8 *) &D + i * 14`; `((u32 (*)[0x1000]) D_800A6610)[..]` (build/work/r163/cfix.py does the first three plus stray K&R bodies and headers) | 144 + 59 clones in SC01-SC03 |
| (r163) "build differs" with "emits 1 jump tables, the data has 0 after it" (jtbl_relabel) | splat's dlabel for the table ran on into the next data (a pointer and zeros), so its smallest "case" lies below the function: a symbol at the table's true end in stg/symbol_addrs_<stage>.txt (no comment: splat rejects `// type:data` and free text), then `gen_stage_cfgs.py --resplit <STAGE>` (PYTHONUTF8=1) | func_sc03_111_80182BCC (symbol D_sc03_111_801B82AC) |

Parked by r163 (one-line levers): func_sc02_011_8018E678 (66, 3 copies: the original stores 0x50 before loading 0xE0, as if
the two conflict; lever left: the 0x50/0x54 pair through another struct view, or 0xE0 as a field of a different struct
type); func_sc02_026_8017EA88 (76, 3 copies: body right with m before the if and struct types for p->o; every register
one up in the original: p a3, D_80126CE0 a1, k a2, m t0; lever left: a second unused parameter, or p copied first).

Parked by r167 (22 Oct, S2; files in C:\tw\stage-s2\build\work\s7 and the agents' s7v_<tag> folders; notes folder
r167_progress.md): func_sc04_015_80180F3C (22, 6 copies: frame `u8 unused[0x20]`; the result lands in t0, the original
v0, and masks both params before the shift), func_sc06_018_80187250 (52, 6: one branch target, the 801893CC test goes to
the shared return-0 block in ours, to the epilogue in the original), func_sc04_018_80180D38 (60, 6: switch 3/2/4 right;
each `return 0` inline in the original, shared in ours), func_sc06_011_8017F5F0 (55, 6: goto loop right but o / best
in s3 / s2 swapped; a for loop hoists 0x26E), func_sc06_008_8017F8CC (76, 7: compares `(D_80126B5C >> 16)`, stores
`*(s16 *)((u8 *)&D_80126B5C + 2)`; one load scheduled early), func_sc06_018_80187320 (6: a0 / a1 swap in case 0x2F4),
func_sc04_011_8017CD14 (187, 6: only the `li v1,2` schedule; SOLVED by r170), func_sc04_011_8018F9C0 (128, 6, SOLVED by r170: the `D60 = D88 = D8C`
4-byte copy reloads D88's address).

### r168 rows (S1 batch 6, 22-23 Oct; merge 61cadb4)

| Symptom | Source | Example |
|---|---|---|
| (r168) a counting loop's counter and pointer swapped between s0 / s1 where the table is walked twice (once by pointer, once to test each entry) | one counter and one pointer variable for the first loop, the second loop indexing the table by the counter (`D[i]`): the pointer's life ends after loop 1 and the counter outranks it in global-alloc (a pointer set before the first call also flips it, but moves its lui) | func_sc02_028_80182794 |
| (r168) a loop's table pointer initialised after the hoisted constants (`move s0,zero; lui s3,8; la s1,D`) where ours sets it first | index the table by the counter (`(u8 *) &D + i * 8`): the strength-reduced giv is initialised after the invariants; a pointer variable is set before them | func_sc02_026_8017E3AC |
| (r168) `sll 16; sra 16` re-extensions of `t % 128` / `t % 768` on an s16 t | an `s32 x = t;` copy just before and `x % 128`: GCC shortens the remainder of an s16 operand to HImode (`(s32) t %` is shortened too) | func_sc02_026_801825A4 (park) |
| (r168) table reads (`lui at; addu at; lhu / lw %lo(D)(at)`) kept between scalar-global stores where ours hoists them all first | read them through a cast, `AF(D_tbl, u16, idx * 2)`: an array element is an in-struct reference, which never conflicts with a fixed scalar store; the cast form does | func_sc01_004_8017D758 (park) |
| (r168) the reverse: a global loaded before a field store where ours keeps the store first (`lhu 0x84; lw D; addiu; bnez; sh 0x84` in the slot) | write the field through an in-struct form, `((u16 *) arg0)[0x42]++`: a store through an AF cast pointer may alias the scalar, an in-struct one may not | func_sc03_014_80188828 |
| (r168) a global's address kept in a register and the global reloaded after field stores (`la a1,D; lhu 0(a1)` twice) | declare it an array and read `D[0]` (r148's row); `((u16 *) &D)[0]` and `(&D)[0]` do not give the register; retype the stage's extern and its other uses `[0]` (images unchanged) | func_sc02_000_80188028 (D_800B99DC in sc02_000 / sc02_003) |
| (r168) a constant 1 held in s1 for a switch case compare and a later `== 1` after calls | a local `one = 1;` before the switch, compared with later | func_sc02_035_80183B20 |
| (r168) both arms of an if ending in the same stores, the original loading a pointer field in each arm before the join | write each arm in full with its own `return`; cross-jumping merges only the common suffix | func_sc02_035_80183B20 |
| (r168) one s-register for five spawn results in nested ifs where ours alternates s0 / s1 | one variable for every result (r153's row) | func_sc03_010_8017C004 |
| (r168) a call argument field loaded before two scalar-global stores where ours loads it after | read it into an `s32` local before the stores (an s16 local reused for the result loads lhu and re-extends) | func_sc03_010_8017C234 |
| (r168) a byte value stored from a copy (`addu v1,v0`, `sb v1` twice) while the original register gets the next sum | a second variable taken before the add: `b = c; D1 = b; D2 = b; c += k; D3 = c;` (r160's two-variable row) | func_sc03_010_8017C234 |
| (r168) loads of three vector fields interleaved with their adds (`lw 0x10; lw 0x44; lw 0x48; lw 0x4C; addu; sw`) | struct member accesses, `AF(p, V3, 0x10).x += AF(p, V3, 0x44).x;`: in-struct references reorder freely, AF word casts keep the source order | func_sc02_000_80185C48 |
| (r168) a top-bit store `lui 0x8000; or` / `lui 0x7FFF; ori; and` chosen by a call's flag test | the TB bitfield (r163's row): `if (f(..) & ~0x1000) AF(o, TB, 4).top = 1; else AF(o, TB, 4).top = 0;` | func_sc02_015_8017D878 |
| (r168) four `lwl/lwr` + `swl/swr` copies of a 4-byte stack colour into globals with `la a1,D` | a CV4 local and `*(CV4 *) &D = c;` per global (r153's byte-aligned struct row); the 8-byte copy from a 2-aligned global into an SV4 local the same way (`v = *(SV4 *) &D_80126940;`) | func_sc02_015_8017D878, func_sc03_014_80183A54 |
| (r168) the last of several early-return tests laid out as `bnez body; j end; li v0,0` | invert it around the body: `if (f() < 0x2401) { body; return 1; } return 0;` | func_sc02_017_80185B5C |
| (r168) the order of two compares' loads (a global first) in a range test | the compare's operand order: `y > -w`, not `-w < y` | func_sc02_000_8018A2A0 (park) |
| (r168) clone drafts that use a pointer-returning stage function defined later in the file ("undeclared", "used prior to declaration") | add `extern s32 *F();` to the stage file's declarations by hand: place_stage drops the draft's extern because the file defines F | func_sc03_124_80181870 and two more |

Parked by r168 (one-line levers; templates in C:\tw\stage-sweep\build\work\r168\): func_sc02_028_801829BC (cse merges the k / i
copy in every form tried; the copy must not be a same-mode copy cse can see), func_sc02_026_801825A4 (4 lines: the first
call's `li a0,0x41` / `move a1,v0` sink to the jal in ours), func_sc01_004_8017E5B8 (8 lines: the index*4 / table base
a0 / a1 pair), func_sc01_004_8017E1D4 (dim copied s0 -> s4 -> s6: inlined helpers), func_sc01_004_8017D758 (case 9's
registers), func_sc02_011_8017DE10 (r157's t / diff pair: local-alloc gives the block-local difference v0 first),
func_sc02_000_8018A2A0 (4 lines: the y load sinks below D_800AF7BE's, sched1's boost of a single-set live local).

### r170 rows (S2 batch 4, 22-23 Oct; helper agents, 42 agents)

| Symptom | Source | Example |
|---|---|---|
| (r170) a register pair swapped inside one block (a0/a1, v0/v1) | give the second use its own variable and declare it before the other one: declaration order sets the pseudo number, which breaks the allocation tie | func_sc04_018_80188428 |
| (r170) a constant `li` scheduled too late (after another constant) | a constant's `li` is not scheduled above the `li` of the constant set just before it in source: reorder the neighbouring constant stores so nothing sits between them; the scheduler restores the store order | func_sc04_011_8017CD14 (r167 park) |
| (r170) a 4-byte struct copy `D60 = D88 = D8C` that reloads D88's address | a pointer local for the middle word: `p = &D88; *p = D8C; D60 = *p;` (struct B4 { u8 b[4]; }) | func_sc04_011_8018F9C0 (r167 park) |
| (r170) the original reads `%hi/%lo(D + 2)` with a separate lui, ours keeps D's base in a register | a separate symbol for D+2 (stg/symbol_addrs_<stage>.txt + `make split-stg STG=<stage>`), not an array: cse keeps an array base | func_sc04_018_80188428 (D_80115122) |
| (r170) a frame bigger than the locals with no calls and repeated identical blocks | a `static inline` helper called N times: each inlined call reserves the helper's frame (0x18 for a 4-pointer helper); static inline helpers are placeable, unlike #define macros | func_sc07_006_8017F5D4 (lerpv) |
| (r170) a frame address rematerialised (`addiu aX,sp,N`) before each call while &m sits in an s-register | the prologue block in a static inline helper that takes `WMtx *m` and owns the SV8 / V3 locals, `u8 unused[0x20]` in the caller | func_sc06_029_80188D90 |
| (r170) constant address arguments reloaded with lui/addiu before every call, ours keeps them in s-registers | pass them through a `static inline` helper: its parameters stop cse carrying the constants across calls | func_sc07_006_80182F3C |
| (r170) a global load (lhu D) scheduled above a store to the object in the original, ours below | store through a struct type (`typedef struct { u8 pad[0x34]; s16 state; } ObjS; ((ObjS *)o)->state = 1;`): MEM_IN_STRUCT varying address vs a fixed scalar lets the load move | func_sc04_011_801813FC, func_sc06_006_8017F5D0 |
| (r170) a global object pointer reloaded after every AF store in the original | declare it as an array `extern u8 *D[];` and use D[0]: AF stores alias an array element but not a scalar global | func_sc05_010_8017F15C |
| (r170) the `move a0,s0` of a call hoisted above the store of the previous call's result (`jal f; sw v0,N(s0); jal g; addu a0,s0`) | `do { AF(o,s32,N) = f(..); } while (0);`: the loop notes are a scheduling barrier (temps, copies and comma expressions do not work) | func_sc06_022_8017F85C |
| (r170) a byte stored into a stack struct and read back from the stack | an if/else storing into the field, not a ternary or a local (those keep it in a register) | func_sc04_002_8018739C |
| (r170) a shared success / failure tail giving an extra sign extension or saved register | write the tail out in full in each branch or case; cross-jumping merges it after reload | func_sc04_004_801829BC, func_sc06_025_80180020 |
| (r170) a result in a0 (`or a0,a0,vX`, `move v0,a0` at the exit) with an out-of-line failure tail | one `return r;` at the end, each tail `r \|= byte; stores;` inside if/else arms | func_sc05_003_801808E8 |
| (r170) `if (x < 0)` giving the wrong delay slot / frame | `if (x & 0x80000000)`: the lui moves into the bgez delay slot (when the arm ORs 0x80000000) and the frame grows by 16 bytes | func_sc06_030_8017F268 |
| (r170) a dead `sw` of a packed register to a stack word, uses via sra 16 | `s32 w; *(UXY *)&w = r; v = w;` and the uses through v (sets the frame; `w >> 16` gives lh instead) | func_sc06_018_8018FF98 |
| (r170) the strength-reduced base offset in a pointer-walk loop is off | the last address used in the loop body sets it: order the stores (6, E, 10, 18 for base p+0x18) | func_sc06_018_80191020 |
| (r170) fold re-associates a sum of rand() terms | a nested assignment inside the expression: `D = (rand()&3)*0x20000 + (b = (rand()&3)*0x8000 + 0x40000);` | func_sc06_018_8018EDB8 |
| (r170) stack struct fields re-read from memory after every store | stores through a local pointer `qp = &q;` (aliasing forces the reloads and the extra saved register) | func_sc04_011_8017E6EC |
| (r170) phantom 8-byte frame slots | each `(u32)(v.x + K)` range test on an SV8 stack member costs one; test a local copy (`ty = v.y;`) to drop it | func_sc06_033_80190E64 |
| (r170) a 4-byte stack hole after an XY / 4-byte out-parameter | the parameter is an 8-byte object (SV8, or a union with `s16 pad[4]`) read as `*(UXY *)&w` | func_sc04_003_8017EE80, func_sc06_025_801818D8 |
| (r170) the object load scheduled above a 4-byte struct parameter's home store | pass it as `s32 col`, copy `*(CV *)&col`, read the object field through a struct type | func_sc06_018_8018BCC4 |
| (r170) a global pointer reloaded through an s-register address before each jal (`lw a0,0(s1)`) | `u8 **p = &D_x;` and `*p + off` | func_sc07_006_80182D4C |
| (r170) an s16 field compared then decremented: frame changes with an s32 temp | write the field directly (`if (AF(o,s16,0xFC) != 0) { AF(o,s16,0xFC)--; break; }`) | func_sc04_000_80180020 |
| (r170) a constant-address pointer shared by switch cases takes s0 and pushes the object to s1 | block-scope it in each case (`{ u8 *c = &D_x; ... }`) | func_sc04_000_80180020 |
| (r170) `lh; sra 3` into an s16 store, ours `lhu; sll; sra 19` | `x * 0x200 >> 12` | func_sc06_006_8017E330 |
| (r170) `s16field = u16field - 0x200 + r` builds li 0xFE00 | store to a u16 field or `(s16)(h - 0x200) + r` | func_sc04_005_80182E54 |
| (r170) the giv increment order / loop-carried copies | `p += 0x10C, i++` / `e += 0x10C, k++` in the for clause; `for (; i < 6; i++, a = b)`; a loop pointer init in the for header `for (i = 0, e = &D; ...)` | func_sc06_018_80192F64, func_sc04_003_8017EE80 |
| (r170) a GTE rtps loop with i / v registers swapped | the two-variable for header `for (i = 0, v = q.p; i < 4; i++, v++)` (v set before the loop swaps them) | func_sc06_029_801852E4 |
| (r170) misc | `o->34++` (postfix on u16) vs `+= 1` changes load order; `(u16)D == 3` for a compare against a cse-held constant; `if (f()) field = K; else field = g;` puts the result in v0 (a ternary does not); `(x < 0 ? -x : x) >= K` for bgez/negu with the store in the delay slot; a CV assignment gives lwl/lwr/swl/swr; addPrim through the PTag bitfield fixes mask order and lets globals move across prim writes; struct-typed primitive stores (`->x0`) interleave with stack loads; `if (d != 0) return d; return 0;` gives sltu/negu/and | various (r170 notes) |
| (r170) a 0x10 frame excess with no visible spill | a table base cse keeps in a register across an extended basic block (from an earlier `D[++i]` read) | func_sc06_029_801828E4 (park) |
| (r170) which loop constant is hoisted into an s-register | statement order: the first constant written in the loop body is hoisted | func_sc06_029_80183D84 |
| (r170) placement: a callee used as a value or called before its later C definition | a forward extern after `#include "gte.h"` (place_stage treats the INCLUDE_ASM line as a declaration); a function a matched caller returns but which sets no v0 is `s32` with no return | func_sc04_018_8018CB18, func_sc07_002_80181394 |

Parked by r170 (22-23 Oct, S2; best spec files in C:\tw\stage-s2\build\work\s7spec_<tag>_<n>.txt, notes folder
r170_progress.md): func_sc04_015_80182F2C (250, 6 copies: bne delay slot `move s1,a0` vs our sll; t / t+4 giv a1/a2),
func_sc04_002_80186DD4 (206, 4: x/b/y register choice), func_sc04_011_8017D000 (293, 11: `(s16)half` casts give the copy
with no frame cost; the t copy before the compare, the tail's bases), func_sc06_018_8018F060 (397, 3: &D_800AF630 kept in
s0 + 0x18 per Set*Matrix), func_sc06_018_8018C3F8 (236, 2: lh/sra 6 vs lhu/sll/sra), func_sc07_001_8017FE38 (239, 2:
the tp copy for the 0x16 store), func_sc06_029_80182ED8 (329: t/r s5/s4), func_sc07_002_8017DC80 (346: z copies at the
z-adjust exits), func_sc06_029_80189440 (291: 0xE100004A not hoisted from loop 2), func_sc04_016_8017E26C (269: exit test
register / giv order), func_sc06_016_80180894 (215: a.x via v0 + move a1), func_sc04_011_80180B24 (215: case-1 loads
before the D_801EFD40 store), func_sc07_010_801817D0 (215: base lui before the n*0x90 multiply), func_sc04_018_80188778
(144: loop.c hoists &D_80115158), func_sc04_018_80188B84 (166: case 10 addu / default ok register),
func_sc06_018_80187320 (113, 6: r167's park, 15 rounds in all), func_sc05_010_80180B44 (170: D_80126B5E copy in the delay
slot), func_sc06_029_801857A4 (148: param-copy registers), func_sc06_006_8017EA18 (180: j*4 before j*8), func_sc06_029_801859F4 (158: tpage/clut vs xy[2] store order, vv in a2),
func_sc06_029_801828E4 (185: cse keeps the D_8019EA7C base from `D[++o->94]` across the block: lui early and a 0x10 frame
excess), func_sc06_029_80183534 (197: tpage OR association `A|(B|0x20)` and one e->y load before the vv arms).

### r174 rows (S1 batch 7, 23 Oct; helper agents; merge 1 b434b0e)

Levers found by r174's general-purpose helper agents (brief: notes folder r174_brief.md); one row per finding.

| Symptom | Source | Example |
|---|---|---|
| (r174) two loaded values in swapped registers (a stack word and a field, around stores through o) | a fresh block-scoped local for the stack word (`{ s32 d = r; ... }`), not a reused earlier call-result local | func_sc02_011_8018DAA8 |
| (r174) a switch where two cases end `if (++cnt < N) break; goto shared_call;` and ours jumps into the other case's increment (7 short) | write the call in each case (`if (++cnt >= N) { call(o); } break;`), no goto: cross-jumping merges only the call and break | func_sc03_108_8017FFD0 |
| (r174) a field load (lhu 0x12) scheduled before an unrelated zero store that comes earlier in the C | write the store that uses the load first (E2 before E0), or read the field into a local first | func_sc01_077_80180B64 |
| (r174) two 8-byte lwl/lwr + swl/swr pairs between object sub-structs | an SV8 struct copy `AF(AF(o,u8*,0x20), SV8, 0x10) = AF(AF(p,u8*,0x20), SV8, 0x10);` (2-aligned gives the unaligned copy) | func_sc02_011_8018C5A4 |
| (r174) a stack local's address held in an s-register across a loop, the value read back as `lw 0x18(sp)` | `rp = &r;` before the loop, pass rp to the call, read r directly (`&r` each time drops the s-register; `*rp` gives `lw 0(s6)`) | func_sc02_011_8018D574 |
| (r174) an extra `move` of a rand() result before the `% 0x1000` sequence | both rand() calls inline in the call's arguments `f(rp, rand() % 0x1000, rand() % 0x30);` | func_sc02_011_8018D574 |
| (r174) an if/else storing one field, the store landing before the join's `addiu a0,sp` / `i++` | a ternary `v.y = (rand() & 1) ? base + a : base - a;` | func_sc02_011_8018D574 |
| (r174) a store that should sit after a load's delay slot (`lhu; sw zero; j; sh`) scheduled into an earlier slot | write that store last in the block | func_sc02_011_8018D8B8 |
| (r174) an 8-byte frame gap between two SV8 locals | `SV8 unused;` declared between them | func_sc02_011_8018D8B8 |
| (r174) symbol-file fix for a clone that matches alone but "build differs" in the stage: the original reads D_80115120 + 2 with its own lui | add `D_80115122 = 0x80115122;` to stg/symbol_addrs_<stage>.txt and `make split-stg STG=<stage>` (as r170 did for sc04_018) | sc03_124 80187B50 |
| (r174) `a ? a : 0` that must stay sltu / negu / and | `a ? a : ret` with ret a local still holding 0 (fold() removes the literal-0 form) | func_sc01_004_8017DC38 (park) |
| (r174) base+0x2E / base+0x3E addressing off one s-register holding D_8011511A | the symbols are one struct (D_80115118): access them through its fields so cse's related-value pass shares the register | func_sc01_004_8017DC38 (park) |
| (r174) a loop that does not hoist a global array base (index inline: lui at / addu at / %lo(at)) | a loop with no loop notes (built from gotos); for / while / do-while hoist the base | func_sc01_004_8017DF18 (park) |
| (r174) a u8 table value in an s-register compared with slti after a copy to v1 | the local s16 (u8 gives andi + sltiu, s32 no copy) | func_sc01_004_8017DC38 |
| (r174) an unused 16-byte stack block filled lw/lw/lw sw/sw/sw from a data label | an unused local struct copy `W16 t = D_x;` (`typedef struct { s32 w[4]; } W16;`) | func_sc01_077_80181F08 |
| (r174) a switch on a u16 field with a redundant `andi 0xFFFF`, the arm using the loaded register + 1 | `switch (AF(o,u16,0x34))` with `AF(o,s16,0x34)++` in the arm (a u16 local + 1 allocates differently) | func_sc01_077_80181948 |
| (r174) `lhu` where the original has `lh` for a value held across rand() and used in a ternary | the local s32 read from the s16 field | func_sc01_077_80183834 |
| (r174) a flag computed through a guarded chain, the zero-store block inline and the computed arm branched to | `if (!f) x = 0; else { q = call(); if (q) { if (field != 2) x = 0; else x = abs(..) < N; } }` (x stays unset when q == 0, as in the original) | func_sc01_077_80182A24 |
| (r174) placement: a matched function calling stage functions defined later compiles with implicit declarations (place_stage drops the draft's externs) | forward externs near the file's other stage externs, by hand | sc01_077 |
| (r174) a global's address loaded into an s-register at the very top, then used as `lh 0xE(s2)` in two switch arms | a local pointer as the first statement `pl = D_80126B58;` (`extern u8 D_80126B58[];`), accesses `AF(pl, s16, 0xE)` | func_sc01_077_8018308C |
| (r174) `lh` of a pointer field, then `lh` of a global, then `slt global, field` | the field first in the source: `AF(pl,s16,0xE) > D_x` | func_sc01_077_8018308C |
| (r174) `andi v0,r,N` in the delay slot of a `bnez` on another bit of r, the fall-through a call whose v0 is tested at the target | `if (r & M) x = r & N; else x = f(o); if (x) {...}` (a ternary gives jumps) | func_sc02_026_8017F17C |
| (r174) an if/else storing one halfword, the else arm inline (`bnez` to the then arm, `negu` + `j` in the fall-through) | `if (!(rand() & 1)) x = -n + 0x400; else x = n + 0x400;` into a fresh variable | func_sc02_026_8017F76C (park) |
| (r174) a loop over stack-struct fields off an s-register (`addiu s0,sp,0x30` hoisted, fields at 0xN(s0), a0 = s0 at the call) | a local pointer `SV4 *v = q.p;`, accesses v[k] | func_sc02_000_80189B1C |
| (r174) `bnez v0,end` with `li v0,2` in the slot as the last return-2 test, falling into the final expression | `if (call(..) == 0) { return expr; } return 2;` | func_sc02_000_801884FC |
| (r174) range tests kept as addiu / sltiu on an `lh` value | `s32 z = AF(o, s16, 0xE);` and `(u32)(z - lo) < n` (an s16 z with `z >= a && z < b` gives lhu) | func_sc02_000_801884FC |
| (r174) a matrix at a stack offset 4 mod 8 (sp+0x44, frame 0xC8) | BLKmode locals are 8-aligned: the matrix inside a struct `{ s32 flg; WMtx m; ... }` at the 8-aligned slot below it; gaps as u8 arrays in multiples of 8 | func_sc03_014_80185A0C |
| (r174) `addiu s0,s0,0x70` kept as its own instruction, not folded into the load offsets | the offset as a second statement: `s = (u8 *)(x & 0xFEFFFFFF); s += 0x70;` | sc03_014 (a11) |
| (r174) clone placement: "undeclared" handler table in a clone of a function that dispatches through one | `extern void (*D_<stage>_X[])();` by hand in the target file (missing_decls skips it) | sc02_000 / sc02_003 8018127C |
| (r174) a constant store (`li v0,1; sh`) between copies, the copy loads and an index load scheduled around it in the wrong order | move the constant store later in the source (after the next copy) | func_sc03_118_80184B94 |
| (r174) an fp frame (`move fp,sp`) in a stage function | -O0 code: sc03_118 has an -O0 run 0x80183280-0x801834DC; a struct-pointer parameter folds the fields (`lh 0xDC(v1)`; AF gives `addiu; lh 0` at -O0), `o->f++` gives the lw / copy pattern; needs its own -O0 translation unit (Makefile O0_FILES; T) | func_sc03_118_801833C4 (matched at -O0, not placed) |
| (r174) `r = rand() % 256` with the quotient built in r's own s-register (`sra s1,v0,8`, nop in the bgez slot) where the original builds it in v0 on both arms (`sra v0,v0,8` in the slot) | r declared s16, not s32 | func_sc02_000_80188790 (park) |
| (r174) caution for the do-while(0) row: the first cse respects `do { } while (0)`, but the second cse (after loop) still merges equal `&local` / `&global` pseudos across the loop notes (-ds/-dt dumps) | a do-while does not stop two calls sharing an s-register for `&m`, nor a held `&D_80126B58` folding back to %lo | func_sc02_000_801888F4, 80188790 (parks) |
| (r174) a global kept in an s-register across a call (`lui s0; addiu s0`, `lh a0,0(s0)`, jal, `sh v0,0(s0)`) | a block-scoped pointer `{ u16 *p = &D_x; *p = f((s16)*p, ...); }` | func_sc02_000_80183814 |
| (r174) `bnez s2` with `sll s1,v0,4` in the slot and `sll s1,v0,5` on the fall-through, right after a call | the call into a local first: `r = rand(); if (hi) s = r << 4; else s = r << 5;` | func_sc02_000_80187988 |
| (r174) a value copied to v1 and negated after a later call while the source stays in s1 | `v = (rand() & 1) ? s : -s;` | func_sc02_000_80187988 |
| (r174) `x = a & 0xF; if (x >= 16) x = 31 - x` one instruction short (the original copies into a fresh register) | the ternary inside the expression `(t < 16 ? t : 31 - t) * 4`; a call-argument ternary with the wrong branch sense: swap its arms with `!=` | func_sc02_000_8018512C |
| (r174) placement "void value not ignored" in OTHER functions of the file after missing_decls inserted a draft's `extern void SetScript();` | declare SetScript s32 in drafts for sc02_000 too (as in sc02_011 / sc01_077) | sc02_000 |
| (r174) RotTransPers stack slots in the order flag, sxy, p, with `lhu` of sxy | `s32 sxy` read as `((s16 *)&sxy)[0]` (scalars get slots in the order their address is first taken; an XY struct sits at its declaration); a flag load before the 0x100 store in the bgez slot: `f = flag;` before the store, test `f < 0` | func_sc02_039_8017E910 |
| (r174) an `r \| 0x80` arm that should stay `ori a1,v1,0x80` (ours `li a1,128`: cse knows r == 0 there) | `a = r \| 0x40; if ((s16)r == 0) a = r \| 0x80;` (cse cannot fold the sign-extend) | func_sc02_039_8017E640 |
| (r174) a table read once as `lbu sym(at)` and once through a base register loaded early | a local `t = D_tbl;` for the first two reads only (also the extra 8 frame bytes) | func_sc02_039_8017E640 |
| (r174) early `return 1`s as `bnez end` with `li v0,1` in the slot, the last call's sltu falling into the epilogue | `if (f() == 0) { ...; return g() != 0; } return 1;` | func_sc02_039_8017E2F4 |
| (r174) s1/s2 swapped between a stack address (&q) and a midpoint m = (a+b)>>1 of two s16 | m declared s16 (only its priority changes) | func_sc02_039_8017E2F4 |
| (r174) an fp frame (word 0x03A0F021) in a stage overlay function | -O0 code also in stage overlays: sc03_014 / sc03_015 have a 16-function -O0 run 0x80183CF0-0x80184868 (and sc03_118 0x80183280-0x801834DC); at -O0 AF() is pointer arithmetic (`addiu; sh 0`), write the object as a struct with padded members (`o->dc = 0`) to fold offsets | func_sc03_014_80184538, 80183D50 (matched at -O0, not placed) |
| (r174) stores to a stack struct through an s-register (`addiu s1,sp,0x60`, `sh x,off(s1)`), stack locals reloaded before every store | `p = &q;` and store through p->field (q.field gives sp-relative stores and cse'd loads) | func_sc03_118_80184F18 (park) |
| (r174) a parameter copied to another s-register (`addu s7,s2`) and its own register reused for param + K | a narrowing local copy `s16 a2 = a2_0;`, then `u = a2 + K` | func_sc03_118_80184F18 (park) |
| (r174) `K - G - (r & M)` where the original computes K - G first (fold reassociates ours) | a local `t = 0x40 - G; y = t - (r & 0x3F);` | func_sc02_000_8018483C |
| (r174) an OT row base (`lhu D_800B9A02; sll 14; addu D_800A6610`) held in an s-register across a call, otz reloaded from the stack | `row = D_800A6610[D_800B9A02];` and `&row[otz]` inline in both addPrims (an `ot = &row[otz]` variable swaps the addu operands) | func_sc02_000_80185910 |
| (r174) POLY_G4 header byte stores in the order code, len in the original | write the len store (`AF(p,u8,3) = 8`) before the code store (`AF(p,u8,7) = 0x3A`): GCC reverses the two | func_sc02_000_80185910 |
| (r174) "build differs" for a draft using a data symbol with no label (the original addresses D_X+4 via labels X+2 / X+4 only) | use the labelled symbols: `extern s16 D_..._8018F078[];` and the base as `(SV8 *)(D_..._8018F078 - 2)` (a scalar with `&D - 2` loses the s-register) | func_sc02_000_8018483C |
| (r174) a jump table whose entries mostly point at the default block | read the jtbl in asm/stg/<stage>/data, list the range's end values as `case 1: case 50: default:` (subtract + sltiu bound), then each real case against its block in the asm's block order | sc03_006 (a19) |
| (r174) every stack offset 0x10 too low (frame 0x80 vs 0x90) | `u8 unused[16];` as the first local | func_sc02_039_8017E024 |
| (r174) the `andi 0xFF` of rand() right after the jal, before a table load that must stay ahead of a field store | `x = rand(); t = tbl[i]; p->f \|= ...; ... = t + (x & 0xFF);` (masking at the call or a u8 local schedules later) | func_sc02_039_8017EA20 |
| (r174) a packed sound arg `(0x7F - (b >> 1)) \| ((q << 8) \| 0x3000)`, quotient first in the original | the quotient in a temp `s = (bx + 0xA0) / 20;`, `(s << 8) \| 0x3000` in parentheses | func_sc02_039_8017E794 |
| (r174) a min-search compare with the registers swapped | `if (best > d)` instead of `if (d < best)` | func_sc02_039_8017E794 |
| (r174) a shared failure call in the middle, reached from two early tests (cross-jumped) | `func(o); return;` written at each early exit | func_sc03_118_80181E58 |
| (r174) a parameter copied to another register at entry (`addu a1,a0,zero`) while a0 holds a global's value | update the global directly `D_x = (D_x + 1) % 6; switch (D_tbl[D_x])`, not through a local | func_sc03_010_8017F6C0 |
| (r174) an extra s-register holding a copy of an `& 0xFFF` angle (frame 8 bytes small, `addu s2,s0` after a call) | the angle declared `s16 ang` | func_sc03_010_8017E088 |
| (r174) a global's address in a0 for a call and the global stored through it (`sw zero,0(a0)`) | `p = &D_x; *p = 0; ... f(p, ...)` | func_sc03_010_8017F7E0 |
| (r174) two constant stores (sh 1 to 0x2C, sb 1 to 0x27) scheduled after a later computed field store | write them after that store in the source | func_sc03_010_8017EB58 |
| (r174) `lw` of a pointer-table entry, then `addu v1,v1,v0` (idx << 3), ours summing into the shift's register | the scaled index in a local first: `n = AF(o,s32,0x94) * 8; w = *(u32 *)(entry + n);` | func_sc01_005_801820F8 |
| (r174) DR_MODE + POLY_G4 + DR_MODE fade with t0/t1/a3 and v1/a0 swapped | the last prim as `p = q = p + 0x24;` through q, and each colour group its own u8 local | func_sc01_005_8017FD50 |
| (r174) an odd frame size with no locals | s16 temporaries alone can make it: try without an `unused[]` pad first | func_sc01_005_8017FBCC |
| (r174) placement: a newly matched callee now has a prototype `(u8 *o)` and an existing caller calls it with no arguments ("too few arguments") | pass the caller's object (`f(arg0)`): a0 already holds it, the image stays identical | sc01_005 80180974 |
| (r174) every return `addu v0,s0,zero` (the result in a saved register across a call), ours folding `move v0,zero` | leave the switch with `break` to one final `return r;`, no early `return r;` while r is still 0 | func_sc02_027_8017FB58 |
| (r174) a flag held as a register copy (`addu v0,a1,zero; beqz v0`), ours testing `beqz a1` | `s16 f = 1;` set before the if/else, tested in nested ifs | func_sc02_027_80182AFC |
| (r174) `rcos(x)` with the argument built straight in a0 (`lhu a0; lhu v0; addu a0,a0,v0; andi a0`) | store the field first, then `rcos(AF(o,u16,0x102))` (a local or an assignment inside the call builds it in v0/v1) | func_sc02_027_80187288 |
| (r174) a large pointer offset folded into every access (`lui at; addu at,base,at; lbu 0x5B(at)`) where the original adds it once (`lui s0; ori s0; addu s0,v0,s0`) | the constant in the pointer first, the loaded value added second: `s = (u8 *)0xFF000058; s += AF(AF(m,u8*,0x20), s32, 0x20);` | sc03_014 (a20) |
| (r174) &D_800AF630 loaded early (first block), later `addiu v0,a3,0x18` for gte_SetRotMatrix / gte_SetTransMatrix | `WorkHead *w = &D_800AF630;` as the first statement, `&w->wsm` in both macros | func_sc03_014_80187EE8 |
| (r174) an s16 clamp `x - 0x10` floored at 0 swapping a1/a2 with the object pointer | reuse the variable (`a -= 0x10; if (a < 0) a = 0;`) | sc03_014 (a20) |
| (r174) an s32 field reloaded (two loads of o->64, no store between) through a hoisted reload | a local only for the first uses, re-read `AF(o,u8*,0x64)` later (the scheduler hoists it) | sc03_014 (a20) |
| (r174) `sltiu` on a call result compare | `(u32)func_80029504() >= 0x2D0` | func_sc03_014_80185180 |
| (r174) two rand() results to one call, the a1 one held in an s-register across the second rand(), s0/s1 swapped with the result pointer | both inline: `f(&w, rand() % 4096, rand() % 64)` | func_sc02_017_801859C4 |
| (r174) a value chosen by an if/else stored on the stack in the delay slot of the next jal (ours before) | a ternary `a.y = (rand() & 1) ? y + d : y - d;` | func_sc03_090_80187D70 |
| (r174) frame 8 bytes small, every slot after the first SV8 8 lower | `s32 pad[2];` right after that SV8 | func_sc03_090_80187D70 |
| (r174) `w.w >> 16` from a UXY becoming `lh 0x22(sp)` where the original loads the word and shifts (lw, sra) | a local copy first `t = w.w; ... t >> 16` | func_sc03_090_801877B8 |
| (r174) a store hoisted into a load delay slot in ours, the original keeping a nop and storing at the start of a shared if/else tail | the tail statements written in each arm (scheduled separately, then cross-jumped) | func_sc03_024_80184040 |
| (r174) a scalar global next to an array read through a register (`lh 0(a3)`) instead of %lo | index the array base `D_80126940[1]`, `[2]` | func_sc02_011_8018A2C0 |
| (r174) `o + off` held in an s-register for one later call (`addiu s1,s0,0x88` in a delay slot, frame 8 bigger) | `q = o + 0x88;` at the top of the block before the intervening calls, pass q | func_sc02_011_801887F8 |
| (r174) a0 / v1 swapped in `-h < x && x < h` | each bound its own variable (h, h2) | func_sc02_011_80187E08 |
| (r174) rand() % N then `if (r & 1)` negate, the original keeping the remainder (v1) and the signed copy (a0) apart | both locals s16: `r = rand() % 352; d = r; if (r & 1) d = -r; v.x += d;` | func_sc02_015_8017D9E4 |
| (r174) a subtraction loading the subtrahend first (`lhu v1,s1.y; lhu v0,scr.y; subu v0,v0,v1`) | `-s1.y + scr.y` | func_sc02_015_8017DC24 (park) |
| (r174) a stack value read back right after a call, before object stores, in the wrong register | its own new local (`t = b.y;`), not a reused earlier one; an object field re-read after a stack store: read it once into a u16 local | func_sc03_093_80185344 |
| (r174) frame 8 bytes short with an XY output at sp+0x20 followed by nothing | `XY d; u8 unused[4];` | func_sc03_093_8018547C |
| (r174) a value sign-extended into a0 (`sll`, `sra a0`) just before a `blez`, the sra folded into the blez in ours and a0 never set before the next jal | pass the value to that call: `f(sp)` (an s16 sp set in a switch) | func_sc01_005_801800C0 |
| (r174) `andi` masking the call result in its own register in the delay slot of the `!= 0` test | `r &= 0x2000; if (r != 0)` inside the `if (r != 0)` block | func_sc02_039_8017EC34 |
| (r174) a field load and a table read both scheduled before a sibling field's store | `t = AF(q,u16,0xA) + D[i].x; AF(q,s16,0x34) = s + 1; AF(q,s16,0xA) = t;` | func_sc02_039_8017EC34 |
| (r174) `sh zero` filling a bne delay slot in ours, the original keeping a nop and the zero store early | the zero store right after the first store, before the word-constant store | func_sc01_077_80185E68 |
| (r174) `D_x += v` on a scalar global with the address held in a register (`lui a0; addiu a0; lw 0(a0) ... sw 0(a0)`) | `extern s32 D_x[]; D_x[0] += v;` (an index used later computed before those updates) | func_sc01_077_80186078 |
| (r174) a row of a global S12 table copied into s16 globals, each load followed by its store | targets as `extern s16 D[]`, `D[0] = p->v[n]` with a row pointer `p = &tbl[k]` | func_sc01_077_80185E68 |
| (r174) `k = AF(o,s16,0xFC) = D_tbl[idx];` giving `lbu v0; move s0,v0; sh v0` where the original has `lbu s0` | two separate assignments | func_sc01_077_80185E68 |
| (r174) a pointer to a stack struct kept in s1 across calls (frame 8 bigger) | `TriArg *p = &t;` at the top, p passed to the calls, stores still through t | func_sc01_084_80185C0C (park) |
| (r174) a global's address loaded once into a register and used for two reads of a scalar global | `s32 *p = &D_x;` and read `*p` | sc02_000 (a30) |
| (r174) an object load (`lw v1,0x20(s5)`) scheduled above two scalar-global stores, then reloaded after a store through it | `p = AF(o, u8 *, 0x20);` before the global stores, write through p, later reads via AF again | sc02_000 (a30) |
| (r174) a switch case falling into the middle of the next case's body (jump-table entry mid-block) | a plain C fall-through from case 3 into case 4 | sc03_006 / sc03_118 (a30) |
| (r174) a `void` stage function whose v0 a caller uses (really its own callee's result) | make it `s32` and `return callee(...)` (image unchanged); a cast call `((s32 (*)())f)(..)` also matches | func_sc03_006_80188AF4 / 80187A9C |
| (r174) a load not hoisted above an earlier store inside a jump-table case, a nop in the load delay slot | the case falls through from the previous one: `case 0: f(); state++; /* fall through */ case 1: ...` | func_sc03_014_80184F14 |
| (r174) `move a0,s0` copied into the delay slots of every branch leading to a shared call | the call written once in each arm (`if (c) { A(o); B(o); } else { store; B(o); }`) | func_sc03_014_80184A08 |
| (r174) frame 8 bytes small with an output slot filled by a call and read both as lh and lw (address-taken scalars get slots after arrays / structs) | the slot as a V3 struct, read `*(s16 *)&v` and `w = v.x` | func_sc03_014_8018655C |
| (r174) two identical loops in if / else-if arms with the s-register roles wrong | the second loop gets its own counter and result-pointer variables | func_sc03_014_8018655C |
| (r174, KEY) the prologue interleaves the first call's arguments with the parameter copies, or a later parameter's copy comes before an earlier one (`move v0,a0; li a0,K; move s3,a1; move a1,v0; ...`, or s3=a1 before s7=a0); ours keeps the copies in declaration order with the arguments at the jal | route each parameter whose copy must move through a body local, `s32 x = x0;`, declared in the original's order (the copies that come first stay plain parameters). Why (sched1/sched2 dumps): entry parameter copies sit before NOTE_INSN_FUNCTION_BEG and sched1 never moves them; in sched2 they all have priority 1 and keep stream order; combine merges the entry copy into the local's initialisation, which puts it in the body after the remaining entry copies, before an argument move that overwrites its register | r160 / r168 park func_sc02_026_801825A4 (6 copies), func_sc02_026_8017F76C, func_sc02_000_8018A440 |
| (r174) a TriArg colour run after gte_stsxy3: the two 0x40 bytes stored (`li v1,0x40`) before the first screen-point loads, ours hoisting the loads | the colours one vertex at a time: `c[0].r = c[0].g = c[0].b = 0xC0; c[1].r = c[1].g = 0x20; c[1].b = 0x40; c[2].r = c[2].g = 0x20; c[2].b = 0x40;` (register allocation, not aliasing: the 0x40 pseudo live across the 0x20 one takes v1, the first point load's register, so sched2 cannot hoist) | func_sc02_015_8017DC24, func_sc01_084_80185C0C (parks solved) |
| (r174) the original holds `la v1,D_X` and stores at 0(v1) and 0x10(v1) while neighbouring symbols use `lui at` (all pointer forms fold back to lui at) | step the pointer: `p = (u8 *)D_X; AF(p,s16,0) = a; ...; p += 0x10; AF(p,s16,0) = b;` through casts, not struct members (cse folds reg+const with a known-constant reg; the stepped value becomes a related value combine merges into 0x10(v1)) | func_sc03_014_80185380 (park solved) |
| (r174) tool tip | cc1 `-O2 -dS -dR -dL` (or `-ds -dc`) on the .i dumps each pass's RTL (sched1 order and priorities, cse / combine output): it pinned down both levers above (helper: scratchpad p4/dump.py of session r174) | - |
| (r174, merge 2) two registers swapped where one is a constant pointer set once (REG_EQUIV doubles its live length in local-alloc, so its priority drops) | reuse one variable for the constant and a later value whose life does not overlap (two sets = no REG_EQUIV) | func_sc01_004_8017E5B8, 8017D758 (r160 parks) |
| (r174, merge 2) `addu rd, base, idx` with the operands in the wrong order (cse puts an operand with a known constant second) | `n = -(idx)` in the same basic block and `base - n` (combine rewrites the minus of a negation as a plus, base first); the opposite order via integer arithmetic `(char *)(i * 0x24 + (s32) b)` | func_sc01_004_8017E5B8, 8017D758 |
| (r174, merge 2) method | cc1 -ds -dc -df -dl -dg on the .i; the "Register N used X times across Y insns" lines in .lreg and the dispositions in .greg explain allocation-order swaps directly | - |
| (r174, merge 2) `(x & M) \| (k \| K)` coming out `((x & M) \| K) \| k` (fold's associate step at tree level; visible in the .rtl dump) | the masked field and the OR value as two fresh locals in separate statements, in this order: `x = field & M; t = k \| K; field = x \| t;` (t before x swaps registers) | r151's park func_sc02_011_8017C558 (27 copies), func_sc02_000_80186424 |
| (r174, merge 2) "build differs" for a draft that matches alone, with chained global stores | chained stores store the innermost first, and cmp_func masks relocations: order the chain so its innermost target is the first store in the asm (`B0 = C0 = D0 = v` for D0, C0, B0) | func_sc02_011_8017C558 |
| (r174, merge 2) a load sinking below an unrelated load (sched1 moves a load into a single-set pseudo still live down the block) | load into a variable assigned again elsewhere (`h = D_x; y = h;`, compares on h) | r168's park func_sc02_000_8018A2A0 |
| (r174, merge 2) `lh v1; move s0,v1; andi v1,v1,M` (the copy kept, the test on the loaded register) | `i = k; k &= M; if (k)` (reassigning k after the copy stops cse / optimize_reg_copy_1 moving the test onto the copy; a flag `f = k & M` does not) | func_sc02_028_801829BC (park, 2 lines) |
| (r174, merge 2) an else arm whose lui/addiu of a global's address is scheduled after the constant stores | the store of that address first in the arm | func_sc02_028_801829BC |
| (r174, merge 2) the prologue copy of a narrow parameter between the first call's argument setup, an s32 local not enough | `s16 h = h0;` when the parameter is only stored with sh | func_sc02_000_80188C0C |
| (r174, merge 2) a word store and reload between two ORs into the same field (`or; sw; lw; lui 0x8000; or; sw`) | only `*(volatile s32 *)(a + 4) \|= K1;` then a plain `\|= 0x80000000` matched (plain, u32 and bitfield forms merge); NOT placed: volatile needs LuciDin's ruling | func_sc02_031_80182AB4 |
| (r174, merge 2) an sra of a shared value in a beqz delay slot with the arms' temps in the wrong registers | the shift written in each arm, not in a variable before the if | func_sc03_090_80187B44 |
| (r174, merge 2) correction to the do-while(0) row: it ends only cse1's block; cse2 crosses the loop-end note | per-call `addiu aN,sp,K` comes from &local being vsv+0 (the first-declared local); a second-declared local passed to two calls stays in an s-register whatever the spelling | func_sc02_000_801888F4 (park) |
| (r174, merge 2) a scalar-global store scheduled above an earlier addPrim / struct store, kept after it in the original | the store through a struct cast `((S32R *)&D_x)->v = ...` (MEM_IN_STRUCT stops the reorder) | func_sc01_004_8017DF18 (park) |
| (r174, merge 2) two call-saved registers swapped between a pointer reassigned by call results and a parameter | the call results in their own variable (`p = f(ot, ...)`) so the parameter's life ends at the first call | func_sc01_004_8017E1D4 (park, 8 lines) |
| (r174, merge 2) a u8 truncation (andi) landing on a later copy instead of the definition | `s32 x = (u8)expr;` and the copy a different width (`s16 y = x;`) so cse does not equate them | func_sc01_004_8017E1D4 |
| (r174, merge 2) `(s16)i++` that should copy i before incrementing | i declared s16 | func_sc01_004_8017E1D4 |
| (r174, merge 2) check other stages first | grep a distinctive global: a match in another stage may carry the right form (8017DC38 came from sc03_124's 80187B50; it needed D_80115122 in the stage's symbols) | func_sc01_004_8017DC38 |
| (r174, merge 2) a 4-byte unaligned struct copy between globals through address registers (`lui a1; addiu a1`, lwl/lwr 0(a1)) where ours uses `lui at` per access | the globals as `typedef struct { u8 b[4]; } B4;` (alignment 1 goes through the block-move expander) | func_sc02_005_80183FCC |
| (r174, merge 2) a chain of `bnez v0,end` with `li v0,1` in the slot, the last call's sltu falling into the epilogue | four flat `if (f()) return 1;` then `return 0;` (jump turns the last test into the scc) | func_sc02_005_80187560 |
| (r174, merge 2) a `srl` (not sra) of the difference of two lh fields added to an s16 store | a `u16 d = (a - b) >> 1;` local | func_sc02_005_801873FC |
| (r174, merge 2) a loop writing tbl[k], tbl[k+1] and storing k / k+1, the counter set up after the two strength-reduced pointers | k written as `i * 2` / `i * 2 + 1`, no separate variable | func_sc02_005_8018A968 |
| (r174, merge 2) `la v0,tbl; sll v1,n,3; addu s0,v1,v0` where ours fills the bnez slot with the sll or puts the base in s0 | each table its own pointer local `t1 = (P8 *)D_A; p = t1 + n;` / `t2 = (P8 *)D_B; p = t2 + n;` | func_sc02_005_80186304 |
| (r174, merge 2) a table read once at-form and once through `la a1,sym; addu v1,a1,a2; lh 6(v1)` | a pointer local set inside the enclosing if, the compare still `sym[i].x`, the second read `e[i].pad`; reuse the local for the other branch's table | func_sc02_005_8018675C (park, 4 lines) |
| (r174, merge 2) two loads kept in registers across an if that overrides two stack fields, ours reloading o->20 | the fields into s32 locals first (`y = ..0x4C; z = ..0x50;`) used in both places | func_sc02_005_801870BC |
| (r174, merge 2) a scalar global pointer reloaded once per pair of stores through it (`lw a1,D_x`, two stores, reload), ours loading it once | `extern void *D_x[];` and a chained store `AF(D_x[0], s32, 0x48) = AF(D_x[0], s16, 8) = v;` (the array element is an in-struct fixed-address MEM that cse invalidates on in-struct stores) | func_sc02_005_80186424 |
| (r174, merge 2) the high half of a word global (`lhu D_x+2`) loaded only after the word's store, ours hoisting it | read it through the word symbol `((s16 *)&D_80126B5C)[1]` (a separate D_80126B5E never conflicts with the store) | func_sc02_005_80186424 |
| (r174, merge 2) zero stores through a constant-address s-register (`sw zero,0(s0)`, `sw zero,0x20(s0)`) keeping source order among scalar constant stores | `s32 *p = (s32 *)&D; *p = 0;` and for the offset store a fresh pointer `q = p + 8; *q = 0; f(2, q);` | func_sc02_005_8018FCE4 |
| (r174, merge 2) placement: a void stage function whose v0 existing callers read (m2c's guess), returning a value costs an instruction | keep it void and call it through `((s32 (*)())f)(..)` at the value-reading callers | func_sc02_005_80186304 |

Parked by r174 (best attempts in C:/tw/stage-sweep/build/work/r174/, notes folder r174_notes.md; after merge 2 1617f97): func_sc01_004_8017DF18 (175, 5 copies; 3 lines: the count copy chain v1 -> v0 -> s2; a for loop gives the chain but loop.c hoists &D_80115158), func_sc01_004_8017E1D4 (115, 10 copies; 8 lines in the first block: `move s5,a2` before the (s16)id extend), func_sc02_028_801829BC (2 lines: the 0x72 / 0x70 load order), func_sc02_011_8017DE10 (7 lines: t / diff in v1 / v0), func_sc02_005_8018675C (4 lines), func_sc02_031_80182AB4 (matches only with a volatile: not placed, LuciDin's ruling), func_sc02_000_801888F4 (&m held in s0 across two calls; the original recomputes addiu sp,0x20), func_sc02_000_80188790 (&D_80126B58 held in s3 in the original; cse2 folds ours back to %lo), func_sc03_118_80184F18 (153/153, s1/s2/s3 assignment only). Matched at -O0 only (not placeable in the -O2 stage files; a stage -O0 unit is a tools item): func_sc03_118_801833C4, func_sc03_014_80184538, func_sc03_014_80183D50 (-O0 runs: sc03_118 0x80183280-0x801834DC, sc03_014 / sc03_015 0x80183CF0-0x80184868).

### r173 rows (S2 batch 5, 23 Oct; helper agents; merge 1 2185c1d)

| Symptom | Source | Example |
|---|---|---|
| (r173) a scalar global load (D_801EFD40) kept below the object's field increments / tests | a block-scope `typedef struct { u8 pad[0x34]; u16 s34; ... s16 sF2; } ObjS;` and the fields written through `((ObjS *)o)->s34++`: in-struct references let the scalar access move (r170's ObjS row, now for ++ and tests) | func_sc04_011_80181F0C, func_sc04_011_80181BA0 |
| (r173) a store of a constant address and a second value from the same symbol keep two lui | a `u16 *p = &D;` store, the other value still written from the symbol (`&D - 0xC`): cse reuses p's register | func_sc04_011_80189AEC |
| (r173) a loop's pointer initialised in the wrong place | put it in the for header: `for (i = 0x10, p = D; ...)`; set in its own statement before the for, it is scheduled above `i = 0` instead | func_sc04_011_80180F30, func_sc06_029_8017FE58 |
| (r173) an a0/v1 (value / address) swap in a tail block after a loop | share loop 1's pointer variable: `p = D4C[..]; f(p);`, not `f(D4C[..])`: the a0 copy preference of p carries over | func_sc04_011_80184DB8 |
| (r173) s2/s3 swap and addu operand order in a 2-D table read | the flat index form `tb[n * 6 + k]` instead of a row pointer | func_sc04_011_801840F8 |
| (r173) a call result moved out of a0 before a store | the call in its own statement before the store (`r = f(); AF(o,s32,0x20) = r;`) | func_sc04_011_801840F8 |
| (r173) a division by a count that the original increments only in the divisor | `/ (n + 1)` with no `n++` statement | func_sc04_011_80185020 |
| (r173) the d loads of a box test scheduled after the bounds | write the tests with the tested value first: `d.x > a.x && d.x < b.x ...` | func_sc04_011_8018985C |
| (r173) cse keeps &D in an s-register across a VectorNormalSS(d, d) | wrap the call in a `static inline` helper (norm2(d)) | func_sc04_015_8017F0EC |
| (r173) a duplicated signed /0x200 block | a `static inline` helper with `if (v < 0) v += 0x1FF; v >> 9` written out | func_sc04_015_8017E2CC |
| (r173) an s16-returning stage function whose result the caller uses as int (no sign extension) | call it through a cast at the use: `((s32 (*)(void))f)()` (keeps the file's s16 definition) | func_sc06_000_80183398 |
| (r173) the add order of `field + ((c >> 14) - K)` | cast the inner part: `field + (s16)((c >> 14) - K)`; `+= (s16)(D->86 - 0x20) + (rand() & 0x3F)` | func_sc07_006_8018984C, func_sc07_006_801826E0 |
| (r173) `addiu -128` where the original adds 0x80 | a `u8 t` local for `(D & 1) * 4` | func_sc05_001_80181574 |
| (r173) the increment order of several induction variables | write `i++` first in the for clause; a second byte-offset induction variable in the header (`j += 8` with `i += 4`) | func_sc06_029_80189244, func_sc07_002_80181A14 |
| (r173) two stores of one value to two fields via a temp | a chained assignment | func_sc06_029_8017EBC4 |
| (r173) a global's address reused across a call (`&D; f(&D, ..); D = K`) | a block-scope pointer local | func_sc06_029_8017EBC4 |
| (r173) neighbouring globals reloaded after AF stores in the original | read them as elements of a declared `u8 *[]` (`D_801C7E30[1]`, `D_801C7E50[4]`): array elements are reloaded, scalars are not | func_sc05_010_8017FDE0 |
| (r173) `% 6` giving mult instead of multu | the global is u32 (an unsigned remainder) | func_sc05_010_8017EFC8 |
| (r173) a matrix at sp+0x44 behind other locals | a block-scope struct for the whole stack block (`Coord {s32 flg; WMtx m; ...}`) after `u8 unused1[0x18]`: stack blocks start 8-aligned | func_sc06_030_8017F98C |
| (r173) base+0x84 recomputed instead of kept in s0 | two statements `p = ...; p += 0x84;`; a walking pointer the same way (`p = AF(o,u16*,0xCC); p += 3;`) | func_sc06_030_8017F98C, func_sc06_010_8017EE3C |
| (r173) `lim > p->y + y` vs `p->y + y < lim` | the written order picks the s-registers (s4 / s5) | func_sc07_001_8018088C |
| (r173) a masked value stored and reused | a temp: `AF(o,u16,N) = t; ph = t;`; the pointer increment right after the phase add sets the loop address registers | func_sc07_006_80181E64 |
| (r173) else arms out of line in a chain of range tests | nested `>=` ifs; a result variable of its own per range block | func_sc05_003_8017E380 |
| (r173) the y half of a union read as lh, the original lw / sra 16 | read the word into an s32 copy (`v = w.w; v >> 16`) | func_sc06_025_8017EA74 |
| (r173) a loop invariant (`(s16)D * 2`) not hoisted into the preheader | the store in the loop through a block-scope struct type; the compare order `(s16)D * 2 == T[i].x` | func_sc06_025_80180F70 |
| (r173) placement: new typedefs and function-pointer tables | typedefs go inside the function body (place_stage keeps only extern lines from a draft); `extern void (*D[])();` lines must be added to the stage file by hand (a small script did it: r173's fixfp.py); a global the file declares u8 is used through a cast (`*(WMtx *)&D`) rather than redeclared | func_sc06_022_8017DF28, func_sc06_030_8017F98C |
| (r173) a global array base (`lui at; addu at; %lo(at)`) or a constant kept inside a loop where ours hoists it | write the loop with gotos (no loop notes, so loop.c hoists nothing); copy the bound by hand (`if (n) { m = n; top: ... if (i < m) goto top; }`); wrap the body or the increment block in `do { skip: i++; q += 0x20; } while (0);`: the LOOP_BEG note keeps the loop-depth allocation weight and gives the target-filled delay slot of a for loop. `cc1 -dL` prints loop.c's move decisions | func_sc04_018_80188778, func_sc04_011_8018B2F8 (r170 / r173 parks) |
| (r173) one loop constant hoisted that the original keeps in the loop (0xC060 while 0x1000 is hoisted) | add real insns to the loop: a chained assignment inside the test (`if ((D[i] = m = f()) != 0)`) pushes the loop past loop.c's size threshold | func_sc06_016_8017FE90 (r170 park) |
| (r173) a pointer computed at the top rebuilt in a0 at a call instead of kept in a saved register (`addiu s0,s1,K` in the prologue) | `pos = o + 0xC;` as the first statement and the call wrapped in `do { f(pos, ..); } while (0);` | func_sc06_006_8017EEA4 (r170 park) |
| (r173) an a0/a1 copy pair swapped (p->E and its copy) | `s32 z = p->E; w = (s16)z;` (combine makes the sign-extend a plain move cse cannot merge) and the competing load inside `do { } while (0)` to raise its allocation priority | func_sc06_018_80187320 (r167 park, 6 copies) |
| (r173) an sp+0x20 address hoisted into s6 in the original | call the s32 stage function through a struct-returning cast at the use: `typedef struct { s32 v; } W;` in the body and `((W (*)())func_8012B0B4)(..)` | func_sc06_018_80187320 |
| (r173) a clamp compare reading the copy instead of the sum (slti on v1 vs v0) | the clamp result into a fresh `u8 q` (`m = n + 5; if (m < 0x100) q = m; else q = 0xFF;`): a QI subreg copy that local-alloc's optimize_reg_copy_1 cannot move the compare onto | func_sc04_011_801882F8 |
| (r173) a sum of division-by-constant results (/768, /896) stored in the wrong order | compute the last-stored value first into an s16 temp and write that store first | func_sc07_002_8017FCA8, func_sc07_002_80180DAC (r170 parks) |
| (r173) a case's ok flag not in v0 and the table index recomputed (sll 16 / sra 14) | `t = idx; if (kind == 5) ok = t < 4; else ok = t < 3; if (ok) r = tbl[idx];` with s32 t: the if/else stops cse-skip-blocks | func_sc04_018_80188B84 (r170 park) |
| (r173) parameter fields loaded after scalar-global stores | read them through a block-scope struct type (`ArgS {Cmd8 *c; s32 f4, f8, fC, f10;}`) | func_sc06_006_801800B8 (r170 park) |
| (r173) j*4 computed after j*8 | mask k itself in the cases (`k &= 0xFF`, so j shares k's copy register) and read the table value into a local before the stores | func_sc06_006_8017EA18 (r170 park) |
| (r173) one table base kept by cse across a block (`D[++o->94]` read twice) and a 0x10 frame excess | the second read with the scaled index in a local: `n = (AF(o,s32,0x94) - 1) * 4; *(s32 *)((u8 *)D + n)` (no symbol pseudo for cse to share); the frame excess was combine's `(use (reg))` of the dead address pseudo, one 8-byte slot per case | func_sc06_029_801828E4 (r170 park) |
| (r173) a tpage / v adjust where jump.c makes the plain-copy arm a conditional | declare the adjusted value `s16 vv` (`t = e->y; if (..) vv = t - 0x100; else vv = t;`); load y before x for the tpage | func_sc06_029_80183534, func_sc06_029_801859F4 (r170 parks) |
| (r173) an s32 stack parameter allocated too low (REG_EQUIV doubles its live length in local-alloc) | read it through `s32 cy = *(s32 *)&cy0` to lift it; the full fix is still open | func_sc06_029_801857A4 (park) |
| (r173) a byte decrement wanting `addiu 0xFF` | `u8 t = f; f = t + 0xFF; if (t == 0)` | func_sc04_002_801808F4 |
| (r173) fold rewrites `a - (x + 0x1000)` as `(a - 0x1000) - x` | a temp: `t = x + 0x1000; d = a - t;` | func_sc06_018_8018D40C, func_sc06_018_8018D514 |
| (r173) `sra v0; move a1,v0` copy lost | declare the range local `s16 d` | func_sc04_002_801826E8 |
| (r173) clone drafts from other stages that fail to compile | a helper agent fixed 36 of 36 (K&R fragments, a scalar vs an array, forward externs, function-pointer tables, symbols that are separate addresses in the target, sc02_031's macros expanded): check each with a symbol comparison of the %hi/%lo/jal targets, since cmp_func masks relocations | r173 C1 (build/work/r173_C1 in C:/tw/stage-s2) |
| (r173) lh + sra 7 in the original, ours lhu / sll 16 / sra 23 | `r = field; r = (r & ~0x7F) >> 7;`: combine folds the mask away after merging the load into the sign extension (casts, s16 / u16 locals and helpers all kept lhu) | func_sc05_003_80181720 |
| (r173) `move v0,s1` before a flag test missing (s32) or an andi (u8 / u16) | declare the flag `s16` | func_sc05_006_8017EE0C |
| (r173) two switch cases with the same tail giving an extra sltiu | end both cases with the same `if (f() == 0) return 1; break;` so cross-jumping merges them | func_sc04_003_8017E108 |
| (r173) the frame 8 bytes too big from an orphan address pseudo of a second table read | read it with the scaled index in a local (`n = o->70 * 8; *(u16 *)((u8 *)D + n)`), r173's earlier row | func_sc06_022_801811A4 |
| (r173) coordinate stores scheduled with a constant in the wrong register | single statements in the order x0, x1, x2, x3, y0, y1, y2, y3 rather than chained pairs (found by a permutation sweep of the store order) | func_sc06_011_8017DE14 |
| (r173) a table walk ended by a negative entry | `for (i = 0; (j = D[i]) >= 0; i++)` with s32 j | func_sc04_011_8018B5E4 |
| (r173) the angle union's frame word (`sw` at 0x58, 0x80 frame) missing | also store the union into an otherwise unused SV8 local (`*(UXY *)&ang = u`) | func_sc06_018_8018C190 |
| (r173) placement: a match that place_stage defers with no compile error ('build differs') | cmp_func masks relocations, so a symbol or offset is wrong in the stage build: compare the placed object's relocations with the asm before forcing anything; 9 such functions are listed under 'Parked by r173 (merge 2)' and in r173_progress.md | func_sc06_008_8017F8CC (7 copies), func_sc04_018_801821D4 |

Parked by r173 so far (best spec files in C:\tw\stage-s2\build\work\s7spec_<tag>_<n>.txt, notes folder r173_progress.md): func_sc04_011_8018B2F8 (122/121: D_801F01C0 loaded before the prologue; else-arm n+1 and table load before the D_801F00C6 store; the clamp copy merges), func_sc04_011_801882F8 (139/139, 1 line: the clamp compare reads the copy), func_sc04_011_80187B40 (a for loop hoists a second constant; the goto form matches but for o / k s3-s4), func_sc06_024_8017FCFC (180/180: a1/a2 pointer vs table entry), func_sc05_001_8017FE0C (123/123: o moves to a1 at entry), func_sc05_010_80184E4C (117/119: `(rand() % 4) << 16` remainder built in s0 from v0), func_sc05_010_80183098 (104/104, 6 lines; needs D_80126B5E as s16[], a stage retype), func_sc06_030_80180228 (132/132: o/w/h rotated), func_sc04_016_8017DF8C (185/184: loop.c hoists sym+0x2C; the original rematerialises it), func_sc04_016_8017E6E0 (160/160: loop-1 giv layout).

Parked by r173 (merge 2; best spec files in C:\tw\stage-s2\build\work\s7spec_<tag>_<n>.txt): func_sc06_024_8017FCFC (180/180: a1/a2 pointer vs table entry), func_sc05_001_8017FE0C (o moves to a1 at entry), func_sc05_010_80184E4C (117/119: `(rand() % 4) << 16` remainder built in s0), func_sc05_010_80183098 (6 lines; needs D_80126B5E as s16[]), func_sc06_030_80180228 (o/w/h rotated), func_sc04_016_8017DF8C (183/184: the .y read folds into lui/addu/lh %lo+2; arg 3 not strength-reduced), func_sc05_010_80180B44 (170/170: block B's Y / oA a0 / v1), func_sc06_029_801857A4 (148/148: cy's REG_EQUIV priority), func_sc04_018_8018CDEC (79/79, 2 lines). Matched but not placed (the stage build differs, so a relocation cmp_func masks is wrong): func_sc04_011_80187B40, func_sc06_016_8017FE90, func_sc04_018_801877B0, func_sc04_004_80182014 (needs a D_80126B5E symbol); files in C:/tw/stage-s2/build/work/s7/<stage>/. Solved since merge 1: func_sc04_011_8018B2F8, 801882F8, 80187B40 (unplaced), func_sc04_016_8017E6E0.
Also matched but not placed after merge 2 (stage build differs): func_sc06_008_8017F8CC (r167 park, 7 copies), func_sc04_018_801821D4, 80180A08, 80182378; parked: func_sc04_018_8018CDEC (79/79, 2 lines: the else-arm `move a0,s0` order). Workflow note: a stream worktree that fast-forwards to main must re-split the stages whose stg/symbol_addrs files changed (`git diff --name-only <old> <new> -- stg`), or the full stg regress fails on them.

### r177 rows (S2 batch 6, 23 Oct; helper and park agents)

| Symptom | Source | Example |
|---|---|---|
| (r177) a const-argument `li` scheduled before a load with an unfilled load-delay nop in the original; ours fills the slot with the li | declare the argument local narrow (`s16 n`, not s32): its no-op argument move (`move a3,a3` for s32) survives sched2 (which deletes same-rtx moves up front), fills the slot and keeps the li above the load; jump2 deletes it later | func_sc04_011_80184978 |
| (r177) one pseudo loses a local-alloc / global-alloc priority tie by about one reference (registers permuted, code otherwise equal) | raise its REG_N_REFS without changing code: wrap ONE of its uses in `do { } while (0)` (flow counts refs at loop depth 2), or add a redundant use that only combine removes (`X \| Y \| Y`, `t = w & 0xF0; (t & w) << 4`): priority is floor_log2(refs) * refs / live length; check -dl / -dg | func_sc05_018_80180BE0, func_sc06_030_80180228 |
| (r177) a plain s32 stack parameter gets the wrong register (REG_EQUIV doubles its live length) | wrap its single use in `do { } while (0)` (3 refs: priority above the rivals), then put a split-off statement first after the loop so the barrier lands where the original has it | func_sc06_029_801857A4 |
| (r177) sched1 pulls a load down next to its use (the original keeps it high) | sched1 boosts every load whose target is set once (n_sets == 1, "birthing"): reuse one s32 variable for several jobs (`d = t - o->6; .. d = o->A; d -= K;`) so the load gets no boost | func_sc05_010_80180B44, func_sc04_011_8018C14C (partly) |
| (r177) a chain placed last by sched1 in ours but not in the original | sched1 marks a producer urgent (priority 0x7f000001 in -dS) only when its destination is a plain REG, never `(subreg (reg:HI))`: an s16 local reaching the insn as a SUBREG vs an s32 temp decides which chain goes last | func_sc05_018_8017F818 (parked) |
| (r177) the original keeps a repeated constant set in a branch delay slot; ours has a nop (cse dropped the repeat) | set the constant as the first statement of EVERY arm and not before the if-chain: reorg hoists one copy into the first slot and removes only the copies it makes redundant | func_sc06_018_8017D4DC |
| (r177) a variable in the wrong register that "prefers a0" | look in -dg for a preference left by an unrelated arm that reuses the same variable as a call argument (`p = o; f(p)`): give that arm its own local; a constant set before an if is a global pseudo local-alloc cannot see: set it inside the arm | func_sc06_024_8017FA1C |
| (r177) a value the original keeps in a1/a2/a3 up to a jal | check the stage file's sibling calls to that callee for a missing argument (`f(o, d)` not `f(o)`): the argument gives it the hard-register preference | func_sc06_033_801915A8 |
| (r177) a pointer set separately in each if/else arm loses a1 to a variable living across the if | declare it block-scope in each arm (`u16 *d = &D;`): local-alloc assigns it before global-alloc | func_sc06_024_8017FCFC |
| (r177) entry pointer loaded into a0 in the original (`lw a0,0x64(s1)`), ours v0 | a later callee jal'd with no `move a0` while a0 still holds that pointer takes it as its argument (`func_8012BD14(p)`, as sibling calls in other stages do): the argument gives the a0 preference | func_sc05_018_80181EEC |
| (r177) a random sign on a `% 2^n` value builds copies in v0/v1 | a ternary in the static inline helper `return (rand() & 1) ? t : -t;`, not `if (..) t = -t;` | func_sc05_010_80184E4C |
| (r177) a parked function with no obvious lever | grep the other stages for its callee sequence and compare show.py asm: same-shape siblings that differ only in constants count as different census shapes (sc06_018 8017DB20 / sc06_020 8017D918 / sc06_032 8017DABC for sc06_033 8017E0E4): copy their C | func_sc06_033_8017E0E4 |
| (r177) `k = rand() % 5` steers registers (k reused as the quotient temp has an a0 preference) | `n = rand() % 5 + 2;` with no k; see `cc1 -dg/-dl` "preferences" | func_sc05_010_80185570 |
| (r177) a `beqz; bltz; slti 3` test folded into sltiu | nested ifs `if (r != 0) { if (r >= 0) { if (r < 3) goto body; } }` | func_sc05_010_80187FCC |
| (r177) a switch tree `beq 1; slti 2; ..` with only cases 0/1 tests 0 first | add an empty `case 2: break;` (or `case 0: break;` for a tree with cases 1/2) | func_sc05_001_8017F268, func_sc05_010_80188334 |
| (r177) a call result stored to a scalar global and reloaded (`sw D; lw D`) | `*(s32 *)&D = f();` and read it back with its own type: the mode mismatch stops cse reusing v0 | func_sc05_010_8017EE68 |
| (r177) table loads hoisted above scalar-global stores (array refs are MEM_IN_STRUCT) | the scaled index in a local: `n = m * 4; D = *(s32 *)((u8 *)T + n);` (also fixes a frame 8 too big from stride-8 table stores) | sc05_008 8017D7B4, func_sc05_001_80180600 |
| (r177) a scalar global that cse reuses across an o-field store; the original reloads it | read it through a block-scope struct `((W16 *)&D)->v` (`typedef struct { s16 v; } W16;`) so the store invalidates it | sc05_008 (H27) |
| (r177) a 56-byte block copy: loop.c hoists the source address with a base+48 end | the source as a real struct variable (`extern struct Blk_s { s32 w[14]; } D;` + `= D`), not `*(Blk *)&D` | func_sc07_002_801830D8 |
| (r177) a loop constant hoisted that the original keeps in the loop | loop.c's insn-count threshold: write a coordinate as a giv `(i - 1) * 0x2C`, move a mask into the call argument (cc1 -dL shows the window) | func_sc06_016_80180BF0 |
| (r177) a table base hoisted into an s-register | read it through a struct field at a nonzero offset on its own symbol (`D58[k].y`; a new symbol may be needed: symbol_addrs) | func_sc07_010_8017E5B8 |
| (r177) placement "build differs" with no compile error | first look for "makes pointer from integer" / "incompatible" warnings: a draft's array extern that the stage declares scalar (or with another element size) loses to the file's declaration and silently changes code: use the file's type and cast at the use (`&D`, `&((B8 *)D)[i]`) | func_sc06_029_8018A7C4, func_sc06_024_8017FCFC |
| (r177) placement: a callee defined later in the stage file with a prototype, or a file extern that sits after the new users | insert the draft's extern line before the function's INCLUDE_ASM line (build\work\p177\fwd.py <stage> <ADDR..>) or move the file's extern up: place_stage sees the name as declared and adds nothing | sc05_017 8017F848, sc06_008 8017DBB0 |
| (r177) a function that takes a struct by value (CV4) called with an s32 field by an already placed caller | call it through an unprototyped cast in the caller `((CV4 (*)())f)(p->g)` (`*(CV4 *)&p->g` changes the caller: CV4 is byte-aligned, lwl/lwr) | func_sc06_006_8017ED24 |
| (r177) an argument copy lands in a load-delay gap where the original has nothing (the original's move sits at the block top) | pass that argument as a narrow variable (`u16 b; b = (u8)t;`, not `s32 b = t & 0xFF`): the `(subreg:SI (reg:HI))` no-op copy survives flow (which deletes only REG-to-REG no-op moves), takes the gap in sched2 and is deleted by jump2 | func_sc04_018_8018CDEC (+ clones sc04_019, sc05_017) |
| (r177) of two chained adds, sched1 marks the wrong one urgent (`y += dy` lands in dy's register) | give the earlier result's variable two jobs (`y = base; y = q + y;`) and write the later result as an expression (`v.y = y + dy`); give a partner variable two jobs too (`d = A; d = d - y;`) if a load moves | func_sc05_018_8017F818 |
| (r177) a call argument not strength-reduced; a constant address folded into `lh sym+off(reg)` where the original keeps lui/addiu + addu + lh 0 in the loop | `n = j * 0x50;` as the body's first statement (j the only biv); a real outer for with the constants inline (hoisted, unallocated across the call, rematerialised) and a second use built first (`py = &D[k].y; e = &D[k];`) | func_sc04_016_8017DF8C |
| (r177) a void function whose caller returns its value | the caller as `return ((s32 (*)())f)(arg0);` with f defined void | func_sc04_011_801835B0 |

Parked by r177 (best spec files in C:\tw\stage-s2\build\work\s7spec_<tag>_<n>.txt, notes folder r177_progress.md):
func_sc04_011_8018C14C (69/69, 8 lines, s7spec_P2_3.txt b5: all registers right, the C4 load order), func_sc05_001_8017FE0C
(r173 park; 123/123, 28 lines, s7spec_P12_8.txt b1: n/e a1/a2 global-alloc priority), func_sc05_010_80183098 (r173 park,
not retried: needs D_80126B5E as s16[]). r170's parks were not retried. Solved today from r173's list: sc06_029 801857A4,
sc05_010 80180B44, 80184E4C, sc06_024 8017FCFC, sc06_030 80180228, sc04_016 8017DF8C, sc04_018 8018CDEC.
MATCH-TRICK held for a ruling: func_sc04_016_8017E960 (s7spec_P7_3.txt b1; a dead two-statement cycle on an
uninitialised local `t = u + dy; u = t;` steers cse2 and is deleted by flow; file build\work\s7\sc04_016\).

### r179 rows (S1 batch 8, 23 Oct; helper agents, sc02_005 one-copy 79-154 instructions)

| Symptom | Source | Example |
|---|---|---|
| (r179) A scalar global's address held in an s-register (lui/addiu sN, lw 0(sN)) across a call | `s32 *q; q = &D_x;` right before the first test, then `*q` (at the function top it moves into the prologue) | r179 c2, c5 sc02_005 |
| (r179) A global pointer re-read after a call lands in v0 in the original, a0 (old local) in ours | read through `AF(D_ptr, s16, off)` directly, do not reassign the old local | r179 c2 |
| (r179) sll/sra 16 right after each jal into an s-register | `s16 a = (s16)f(..)`; an s16 local alone delays the sign extension | r179 c2 |
| (r179) Two s-registers holding incoming a2/a3 swapped | copy the later param into a local (`s32 ang0` param, `s32 ang = ang0;`) | r179 c3 sc02_005 8018EB60 |
| (r179) `srl` not `sra` on `(r & 0x7F00) >> 5` of a rand() result | the result local u32 | r179 c3 |
| (r179) Field reloaded with lhu before a global store, decremented and stored back, v0/v1 swapped | `u16 e = AF(o,u16,0xE4); D = 0x100; AF(o,s16,0xE4) = e - 1;` (s16/s32 give lh or keep the swap) | r179 c3 80186600 |
| (r179) Global loaded into a0, copied to an s-register in the bnez delay slot, else a call result | `t = G; if (t != 0) p = t; else p = f(..);` (`p = G; if (p == 0)` and the ternary load straight into the s-reg) | r179 c4 sc03_124 80186ED8 |
| (r179) Global pointer reloaded before each field store, ours cse's it into a register | `extern u8 *D_x[];` and `D_x[0]` (in-struct memory: pointer stores invalidate it; a scalar survives even through a `u16 *q`) | r179 c5 80183B0C |
| (r179) `sw zero,0x10(sN)` through a global base folded into `lui at` by ours | `q = p + 4; *q = 0; f(1, q);` | r179 c5 |
| (r179) `ori v0,zero,0x8800` where ours has `li v0,-30720` | the field store is u16, not s16 | r179 c7 |
| (r179) Frame bigger than saved regs in a rand / `%` function | no `u8 unused[]`: GCC reserves it (the array made it 0x18 too big) | r179 c7 |
| (r179) 4 table fields with a 20-byte stride (D_..FC/FE/500/502) | one `extern S20 D_x[];` struct array (u16 a,b,c,d; pad[12]) | r179 c7 801808B0 |
| (r179) lhu f2, lhu f70, store E, then the +2 stored back | `u16 a = AF(o,u16,2) + 2; AF(o,s16,0xE) = AF(o,s16,0x70); AF(o,u16,2) = a;` | r179 c8 |
| (r179) A constant store (li v1,4; sh 0x16) after the next global load in the original | move the statement one line later | r179 c8 |
| (r179) A global stored, then passed as its address minus 4 in a1 | `u8 **q = &D_x; *q = val; f(o, (u8 *)q - 4);` | r179 c6 8018EFEC |
| (r179) One of two fields into v0 then j to a shared tail; ours swaps v0/v1 | the whole statement in each arm, test inverted to the arm order (cross-jumping merges the tails) | r179 c6 8018E288 |
| (r179) `sll 4; sra 16` on an s32 field | `x << 4 >> 16` (`(s16)(x >> 12)` gives sra 12) | r179 c6 |
| (r179) Frame 8 too big (vars=8), instructions identical, after a cast/pointer read of a struct-table field | cc1 -dl shows a dangling (use (reg N)) before a call; the plain `T[i].f` avoids it but is in_struct (stores pass it) | r179 c1 park 80180610 |
| (r179) place_stage "build differs" on a switch function with new extern tables | insert by hand (handput.py) and `make check-<stage>`: may be byte-identical | r179 8018074C |
| (r179) Raw and masked copies of a u16 table value in swapped registers, arm stores misordered | reorder the arm's statements (FC, then the 0x64 pointer store, then FE = 1) | r179 c9 80184EC0 |
| (r179) `if (x >= K)` arm inline with bnez to else | the `>=` form; `<` gives beqz | r179 c9 |
| (r179) abs kept as a copy in a2 (addu/bgez/negu), sll/sra 16 at each use | `s16 v = field; if (v < 0) t = -v; else t = v;` with s16 t (ternary / s32 v / in-place negate miss) | r179 c11 |
| (r179) 32-byte lw/sw x4 copy into base + (idx << 7) + i * 32 | `extern WMtx D_x[][4]; D_x[AF(o,s16,off)][i] = *(WMtx *)(p + 0x34);` | r179 c11 |
| (r179) Field load (and base reload) hoisted above scalar-global stores, RMW store after them | read the field into a local first, then the global stores, then the store-back | r179 c12 |
| (r179) x*0x300 as `sll 9; sll 8; addu` | `(x << 9) + (x << 8)` | r179 c12 |
| (r179) Stored s16 loop index (sh s3) after the last base-field load | put the index store after the field store that reads that base | r179 c12 |
| (r179) A value picked from two constants into one shared sw (first constant in the bnez delay slot) | if/else with the store in each arm (ternary / local invert the branch) | r179 c10 801822EC |
| (r179) Globals and a field loaded ahead of a constant field store | compute the expressions that use them before the store (`n = G1 + 0x80; e = G2 - AF(o,u16,0xE); AF(o,s16,6) = -0x80;`) | r179 c13 80185B38 |
| (r179) RotTransSV with a 0x40 frame | plain `SV8 v; s32 flag;` (flag[6] is 0x10 too big) | r179 c13 80183D90 |
| (r179) Call result kept sign-extended in an s-reg while the raw value goes to a halfword field | `v = f(); AF(o,s16,off) = v; k = (s16)v;` (s32 k, v) | r179 c14 |
| (r179) Loop bound copied twice before the entry test, beqz not blez | s32 n, `s16 m = n;` right before `for (i = 0; i < m; i++)` (s16 i) | r179 c14 |
| (r179) A redundant `sh zero` in an else arm deleted by ours | reverse the chained init so the field the arm rewrites is stored first | r179 c14 |
| (r179) The ok arm out of line after `bnez q` | `if (q == 0) { f(o); return; }` with the same f(o) also at the end of the other branch | r179 c14 |

Parked by r179 (best attempts in C:/tw/stage-sweep/build/work/r179/, notes folder r179_progress.md): func_sc02_005_80180610 (79/79 instructions, frame 32 vs 24: a cast read of the 801944F4 table field leaves a dangling (use (reg N)) before the first call that reload spills; the plain T[i].f fixes the frame but lets the -96 stores pass the load; best spec_c1_3 v0), func_sc02_005_80184828 (111; 5 lines after the D_80195AF6 branch: D_801E43B4 loaded before `s1 = 1; sh a0,0xE(s0)`, table-first `addu v0,a1,v0`; best v_c10/sc02_005/v0). r178's returned clone func_sc02_041_80184D20 is asm again after the W3 delta (clone_all did not re-place it).

### r186 rows (S1 batch 9, 24 Oct; helper and park agents; merge e91361e)

| Symptom | Source | Example |
|---|---|---|
| (r186) A clone draft with a narrow param (`s16 arg2`) fails to compile against the stage's K&R `extern void f();` | make the param s32 (`sh a2` stores it unchanged) | sc02_041 80184D20 |
| (r186) place_stage defers a function whose function-pointer table extern it drops (`D_x undeclared`) | handput.py (adds the stub's externs) + make check-<stage> | sc03_028 80182E2C |
| (r186) Struct passed by value: words loaded from the stack into a1-a3 before a jal, and a dead `sw zero` folded by ours into `move a2,zero` | `func(o, v)` with V3 v and an unprototyped extern; put the `v.y = 0` store at the end of each if/else arm, not at the join | c17 sc02_005 80190538 |
| (r186) `q - (o + 0x180)` reassociated by ours to `(q - 0x180) - o` | inner sum in a temp: `t = AF(o,s16,0xE) + 0x180; x = AF(q,s16,0xE) - t;` | c17 |
| (r186) Switch on a call result with cases 1 and 2: `beq 1; slti <2; bnez exit; beq 2` | add an empty `case 0: break;` | c17 |
| (r186) Three-way pick into a scalar global, registers wrong with one shared local stored once | store the global in each arm, the value read into an s16 local | c17 sc03_028 801879AC |
| (r186) s16 global into v0, `move s0,v0`, compare on v0, `addiu s0,-K` in the bnez slot | `s16 a = G; if (a > K) { a -= K; a *= 2; ..}` as separate statements (the s16 local also gives the 8-byte frame slot: no `u8 unused[8]`) | c18 sc03_028 80188AE4 |
| (r186) `sll 16; srl 16` zero-extend of a masked value right before a call arg (ours `move a0,v0`) | pass `(s16)t & 0xFFFF` with s32 t (u16 var / cast are elided via nonzero bits) | c18 80182E2C |
| (r186) Two halfword equality tests plus a third as sltiu range + `andi 0xFFFF` + bne | `u16 v = field; if (v == 0x1F \|\| v == 0x20 \|\| v == 0x1C)` (switch gives slti; s32 v drops the andi) | c18 |
| (r186) `beq 1` to an out-of-line arm, `bne 2` skips, case-2 store in the `j` delay slot | `switch (field) { case 1: ..; break; case 2: ..; break; }` (if/else-if gives `bne 1` with the arm inline) | c15 sc02_005 801824D0 |
| (r186) Jump-table switch: table value lhu into an s-reg, `andi v0,sN,0xFF; move sN,v0`, call arg sll/sra'd | one s16 variable: `r = tbl[i].b; flag = r & 0x100; r &= 0xFF; switch (r)` | c15 80185E80 |
| (r186) Trailing `addu v0,zero,zero` block after the main return's `j` epilogue | `if (A == 0 && !(B)) { ..; return r; } return 0;` | c15 80185E80 |
| (r186) Table address materialised before `i = 0`, ours puts `move a1,zero` first | pointer local `p = D_tbl;` right after the `n = const` line, index `p[i]` | c15 8018E450 |
| (r186) A scalar global's lw scheduled above earlier o-field stores in the original, below them in ours (an array load stays below) | the field stores as struct members `((OH06 *)o)->f6 = t;` (AF casts are not MEM_IN_STRUCT: they conflict with scalar globals) | c16 sc02_005 80183610, 80183218 |
| (r186) A reused flags local takes the wrong a-register on a second field load | read the field inline in the test `if (AF(o,s32,0xE8) & 8)`, `&= ~1` in the else arm | c16 80183218 |
| (r186) A lui constant held in an s-register across a call after a ternary argument | if/else with the call in each arm (cross-jumping merges them) | c16 80182A8C |
| (r186) In-place negate of an s16 field: lh in the original, lhu in ours | `s32 v = AF(p,s16,off); AF(p,s16,off) = -v;` or `AF(p,s16,off) *= -1;` (`-AF()`, `0 - AF()`, an s16 local all give lhu) | c19 sc03_028 8018568C, c20 80185864 |
| (r186) `field + (rand() & M) + K` with `(r & M) + K` computed before the field's lhu | the sum in a local first: `r = (rand() & M) + K; .. = (AF(o,u16,off) + r) & 0xFFF;` | c19 8018A500 |
| (r186) Row r179-19 with offset 8 | `s32 *q = &D_x; *q = val; f(o, (u8 *)q - 8);` | c19 8018911C |
| (r186) Frame 8 too big, global lh into v0 then moved to an s-reg (ours loads into the s-reg) | `s16 v = G; if (v > K) { v -= K; a = v * 2; f(a); }` with s16 a | c21 sc03_028 80184B28 |
| (r186) RMW `\|=` of a halfword with a global store between its load and store, base in a2 | `t = AF(o,u8*,0x20); u16 h = AF(t,u16,0x2C); G = 0x10; AF(t,u16,0x2C) = h \| 0x80;` | c21 80186894 |
| (r186) `addiu v0,v0,4; sb 0(v0)` chain that ours folds into fixed offsets from the base | load the base into the pointer and add in place: `p = D[0]; p += 0x2D; *p = 0; p += 4; ..` (`p = D[0] + 0x2D` lets it fold); each store run after a global reload gets its own pointer local | c22 sc03_028 80186368 |
| (r186) Clamp `lh vA; move vB,vA; slti vA; store vB in else`, dead clamp-to-stack then an 8-byte lwl/lwr copy | read the s16 global directly in the test and again in the else store (`if (G < -2) v.y = -2; else v.y = G;`); each clamp reserves an 8-byte slot: the frame gives the real local sizes | c23 sc03_028 8017FE18 |
| (r186) Stores 4, 8, 0x14, 0xC with 0x14 reloaded | statement order `4 += 0x10; 8 += 0x14; 0x14 += 0x18000; 0xC += 0x18;` plus `u8 unused[16]` for the frame | c23 801829F0 |
| (r186) A matched draft indexes tables `D_x[i]` that the stage file declares scalar (another placed function reads them whole) | `(&D_x)[i]` with the scalar extern: same code, no declaration change | 801829F0 |
| (r186) Signed step `if (h < 0) F += h; else F -= h;` with the lh'd s16 copied into v1 in the bgez slot, ours reloads with lhu | read the field directly in the test and both arms (an s16 local reloads; an s32 local shrinks the frame by 8) | c27 sc03_028 801845A4 |
| (r186) Scalar global pointer re-read after a store through the local copy (ours cse's it) | read it the second time through a one-member struct cast `((struct { u8 *v; } *)&D_x)->v` (in-struct: invalidated by the store) | c24 sc03_028 80184C90 |
| (r186) Constant held in an a-register from the prologue, used once in a later store | `s32 k; k = 0x1D;` as the first statement, the store uses k | c24 80184C90 |
| (r186) Global decrement between field loads and their stores (lw G, 3 lhu, sw G, 3 sh) | `n = G; x = f6; y = fA; z = fE; G = n - 1; f7C = x; ..` (s16 x, y, z) | c24 80184C90 |
| (r186) a0/v1 swapped on the first of a chain of `lh p; lh o` compares | `AF(o,s16,0xA) > AF(p,s16,0xA) - 0x60` instead of `p - 0x60 < o` | c24 80184C90 |
| (r186) Call result kept in the loop counter's s-register for later tests | reuse the loop counter variable: `i = f(o);` | c24 80185ED4 |
| (r186) Three clamps of s16 globals into a stack SV8, frame 0x18 above the locals | one s16 local per clamp (plus one for a later re-read): each gives the copy and an 8-byte slot | c24 8017FBE0 |
| (r186) `x*104` kept in a0 and copied to a1 for two `/1024`s | `d = t * 0x68; A += d / 1024; E += d / 1024;` (one `d = t*0x68/1024` swaps regs and store order) | c24 80183264 |
| (r186) Three registers holding the same masked angle (`andi s2; move s3,s2; move s1,s2`) | s32 ang, `s16 b = ang;` right after, `s16 c = ang;` before the first field copy | c24 80183264 |
| (r186) A callee the stage declares void but whose value a new function uses | retype the stage extern s32 (callers that ignore it compile the same; check-<stage> confirms) | sc03_028 func_8012D624 |
| (r186) A big constant held in a register (`ori aN,0xE100` in a delay slot) and `slt d,aN; bnez`; ours folds to `li 0xE0FF; slt; beqz` | s32 local `lim = 0xE100;` set before the expression, `if (d >= lim)` | c25 sc03_028 80182494 |
| (r186) Halfword field sign-extended before an if/else (also used as `sra 21`); ours delays the extension into the arm | an s32 local `s32 px = AF(o,s16,6);` | c25 80182494 |
| (r186) Scalar global pointer reloaded after a field store through its earlier copy | read the first copy in-struct `p = (u8 *)((UXY *)&D_x)->w;`, the later reads plain | c25 80185344 |
| (r186) A constant set in the delay slot of the first null test and held for a later store | `n = 0x20;` right after the pointer read, store n | c25 80185344 |
| (r186) Global halfword `\|= K` through lui/addiu into a register then lhu/sh 0(reg) (ours uses lui at, or swaps s-regs) | `s16 *q = &D_x; *q \|= 0x4000;` (u16 for 1) | c26 801833D8, c29 sc03_007 80182BFC |
| (r186) Switch on cases 1, 2 whose default does real work: `beq 1; slti <2; bnez default; beq 2` | `case 0:` next to `default:` (or `case 0: break;` with the default code after) | c26 8018B390 |
| (r186) An inlined bool helper (`beq 4 / beq 0xC / bne 5`, `xori 0xD; sltiu`, j over `li v0,1`) | `if (t==4 \|\| t==0xC \|\| t==5) r = 1; else r = t == 0xD;` (s32 t), then test r | c29 80182BFC |
| (r186) `field + ((rand() & M) + K)` with the constant arg li before the base lw | `(AF(p,u16,off) + (s16)((rand() & 0xFF) + 0x780)) & 0xFFF` | c29 sc03_007 80185620 |
| (r186) Field plus masked rand minus a constant, field lhu before the andi, addiu -K on the field | `r = rand() & M; AF(p,s16,0xA) = 0; AF(p,s16,6) -= K; AF(p,s16,6) += r;` | c28 sc03_028 801864A8 |
| (r186) A stack vector's zero sw scheduled after the next field load in the original | store the zero member last | c28 80181000 |
| (r186) `addiu aN,0x10; sh; addiu aN,-0x10` around a shared switch tail | step the pointer in place: `h += 0x10; *(s16 *)h = K; h -= 0x10;` | c28 801864A8 |
| (r186) `andi x,2; sltu` (no srl/andi fold), or a sltu index fed into an address computed as a branch | `t = f & 2; ok = t != 0;` as separate statements | c30 sc03_007 80183B58 |
| (r186) 2D table address in the order `(j*0x34 + D) + i*0x68`, i's multiply first | `k = i * 0x68; ..; row = &D[0][j]; f(o, k + (s32)row)` (int + int keeps the order; pointer + int is canonicalised) | c30 80183B58 |
| (r186) Compares interleaved `beq 6; beq C; bne 7; bne D` | if/else-if chain in that order with duplicated arm bodies (a switch merges 6-7 into a range) | c30 80183B58 |
| (r186) Stack address `&w` hoisted into an s-register in the prologue after o+4 | `i = 0; q = o + 4; wp = &w; for (; i < N; ..)`, the call takes wp | c30 80182D88 |
| (r186) A shared byte store at the join of an if-chain, constants in delay slots | one s32 local set in each arm, stored once after the chain | c30 801813D0 |
| (r186) A loop's fail arm `f(o); return ret` moved out of line, ret and &w swap s-registers | end the fail arm with `break`: one `return ret` after the loop | c32 sc03_007 8017E83C |
| (r186) `bnez f` falls into a `j` into the middle of the else-if arm (cross-jumped) | both arms in full: `if (f == 0) {A; B; ret = 0;} else if (f & 0xC000) {if (!(f & 0x2000)) A; B; ret = 0;}` | c32 8017E83C |
| (r186) After `if (r == 1) f();` a second test of the same s-regs that ours threads and cross-jumps | `one = 1;` between the ifs; `if (r != one) { ..; if (g() == one) f(); }` | c31 sc03_007 801850B4 |
| (r186) A scalar global reloaded with lui/lw %lo before each field store | retype the stage extern to an array and read `D[0]` everywhere (the rest of the stage stayed byte-identical) | c31 801806B8 (D_801270C8) |
| (r186) Both paths end `j end; li v0,1`, v0 used for the last field temp | `return 0`s inside the arms, one shared `return 1;` after the if/else | c31 801806B8 |
| (r186) `a + 0x800 +/- b` reassociated to `a +/- (b +/- 0x800)` | `(s16)(a + 0x800) - b` with s32 a (also gives the lh) | c31 8017EC90 |
| (r186) v1/a2 swapped on the object pointer in one branch | a separate pointer local per branch | c31 801854A4 |
| (r186) A store scheduled before an independent field load, no source order moves it; a sibling's body appears inline | mark the sibling's definition `inline` (non-static, defined earlier, no other C callers) and call it (recipes rows on func_8012B8E4) | c33 sc03_007 8018178C (80180BF8) |
| (r186) Switch-local copy `lh a0; addu v1,a0` then `addiu v0,v1,1` in two cases, in-place in a third | `switch (AF(o,s16,0xFE))` with `AF(o,s16,0xFE)++;` in each case | c33 80185B48 |
| (r186) Return variable in a1 (`move v0,a1` at the epilogue jumps), ours folds 0 | nest the tail `if (n != 0) { .. }` and finish with `return ret;` | c33 80185B48 |
| (r186) `(h - 0x200) + x` with the result in h's register | s32 `a = AF(o,s16,off) - 0x200;` just before each use, `(a + x) << 16`; a local per store | c34 801848BC |
| (r186) `beqz v0; lw v1,0xCC(v0); beqz v1` where ours copies v0 first | separate locals `q = f(); if (q) { p = AF(q,u8*,0xCC); if (p) ..}` | c34 8017F444 |
| (r186) Inline copy of a stage helper's body (`beqz p` with `move v1,zero`, lh 0x76, slt, 1 reloaded before bne) in a function after the helper | call the helper and mark its definition `inline`: GCC 2.7 inlines it only into later callers, earlier ones keep the jal | c35 sc03_007 8018256C (80180AF4) |
| (r186) Stack s32 words read back as their upper halfwords (`lhu 0x6A(sp)` after `sw 0x68`) | `UXY pos[3]`: `pos[0].w += out.x; t.x = pos[0].s.y;` | c35 8017FE04 |
| (r186) place_stage defers a function whose K&R extern for a later-defined prototyped stage function it dropped ("used prior to declaration") | handput.py | sc03_007 8017EA48 |
| (r186) A local set in both arms of an if/else hoisted by ours into the outer delay slot (`move s1,zero`), the original has a nop | the assignment at the end of the arm, after the inner if | c36 sc03_007 80183894 |
| (r186) Clamp of an s16 global against centre ±K into a stack vector, a y global later read through an s-register | each clamp in its own block with `s16 g = G; s16 p = P;`, then `y = &G_y;` and `*y` twice (fixes the frame, no unused[]) | c36 8017DE40 |
| (r186) sh of one param to two adjacent fields from its s-register (ours copies it to v0 first) | two separate statements, not a chained `a = b = x` | c39 sc03_105 801850D8 |
| (r186) Masked u16 counter compared with slti, ours sltiu | hold it in an s32 or s16 local: `n = (AF(o,u16,off) + 1) & 0x3F; AF(o,u16,off) = n; if (n < 0x1F)` | c39 sc03_007 801810E4 |
| (r186) `move v0,s0; j end; sh v1,0xE(v0)` (last store through the return register) | `if (o == 0) return 0;` early, the body, then `return o;` | c39 801850D8 |
| (r186) Table base in a register gives `addu idx,base` (index first), original base first (cse swaps the operand with a known-constant equivalent into second place) | r174's negation lever on struct tables: `n = -(idx * 8); ((SV8 *)((u8 *)tbl - n))->z` (s32 n) | c38 sc02_005 80184828, 8018675C (parks) |
| (r186) A scalar global lhu scheduled above an o-field store in the original | that one store as an anonymous one-member struct cast `((struct { u8 pad[0xE]; s16 fE; } *)o)->fE = y` (no typedef) | c38 80184828 |
| (r186) In-struct table reads (the frame-fixing `T[i].f`) let chained scalar-global stores pass them | the global stores through one-member struct casts `((struct { s16 v; } *)&G)->v = K` | c38 80180610 (park, frame 32 vs 24) |
| (r186) A block's last store cross-jumped into the identical last store of the block falling into the epilogue (2 short); swapping the source order only swaps the stores | make the function return s32 and return on the jumping path: `return --AF(o,s32,0x1C);` (the value return adds a `(use v0)` before that path's j, so no common tail); other paths keep `return;` — only for functions reached through handler tables | c37 sc03_007 80184E8C (park) |
| (r186) `bnez v0` to an out-of-line success arm, `j end; move v0,zero` inline | `if (f(..) != 0) { ..; return 1; } return 0;` (`if (f() == 0) return 0;` puts the fail block at the end) | c40 sc03_105 8018526C, 8018388C |
| (r186) A scalar global byte store kept above later scalar-global loads in the original | `extern u8 D_x[];`, `D_x[0] = 0` | c40 80187554 |
| (r186) An arg-hard-reg global (`lw a0, D_x`) loaded early, the object in t0 | compute both masked call args into locals before the vector inits, in argument order | c40 8018388C |
| (r186) `sll 16; sra 16` of an s16 accumulator before a branchy abs division, in each arm | `vol -= b.x >= 0 ? b.x*0x7F/320 : -b.x*0x7F/320;` (if/else drops the extension) | c40 80183DA0 |
| (r186) Division by a loop invariant hoisted whole by ours; the original keeps mult/mfhi in the inner loop and hoists only `x>>31` | write the divisor expression inline from the outer variable `v.x -= ((n*6+0x12)*2)/3;` | c44 sc03_105 801834A4 |
| (r186) A range copied to an s-reg unextended plus `sll 16; sra 18` for the half | `s16 range = n*0x600+0x2000;` with `rand() % (range >> 2)` inline | c44 801834A4 |
| (r186) Two identical `x = f; f = (rand()&1) ? x+r : x-r` blocks, the first lh one slot early | a separate s32 temp per block | c44 8017F8D8 |
| (r186) Stack-vector `sh zero` stores interleaved with the address arithmetic | `a.x = 0; a.z = 0;` after both word computations, before the first use | c44 80185480 |
| (r186) Two-value pick on a scalar global: `beqz` to an out-of-line case 0 then `beq 1`, shared final store | `switch (G) { case 0: ..; break; case 1: ..; break; }` | c44 8017E180 |
| (r186) The last test of an s32 function: `blez` to an out-of-line store block with `li v0,1` in the slot, a shared inline `j end; v0=0` | `if (!(f & 1)) return 0; .. if ((s16)*q <= 0) { stores; return 1; } return 0;` | c41 sc03_105 8018233C |
| (r186) Loop counter `move v1,s0; slti s0,3; bnez; addiu s0,v1,1`, `sll 7; negu` not strength-reduced | `for (i = 0; i < 3; i++) { b.y = -((i + 1) << 7); ..}` | c41 8018423C |
| (r186) A table base held in an s-register scheduled too early when set at the top | assign it inside the outer loop body after the first call (loop opt hoists it after `&b`) | c41 8018423C |
| (r186) A call arg fully sign-extended into an s-reg before an intervening rand() | `s32 r = (s16)(rand() % 4096 + 0x2000);` | c41 8018423C |
| (r186) `lh; sra N` on an s16 field used as an int, ours `lhu; sll 16; sra 16+N` | `f * 2 >> (N+1)` or `f << (16-N) >> 16` (plain `f >> N` always gives lhu/sll/sra) | c45 sc03_105 80184CA8 |
| (r186) Second of two loops: the rand() % 2^k copy in a0 instead of v1 | its own value local, not the first loop's | c45 801871C0 |
| (r186) `(s16 field) >> 9` pairs stored as -v and v, ours reloads the field per store | one s16 local per pair: `t = f >> 9; b[2] = -t; b[3] = t;` | c45 80184CA8 |
| (r186) A table zeroed through `lui at; addu at,at,sN; sh %lo(D+2)(at)` with sN += 8 and a second angle counter | `n = i * 8;` as its own statement, `AF(&D, s16, n) = 0; AF(&D, s16, n + 2) = 0; ..`, `rot.y = i * 0x2AA;` | c46 801829CC |
| (r186) A call arg loaded straight into a0, used for a field RMW and the jal; ours loads v1 + `move a0,v1` | call the callee with no args `f();` (the pointer local lands in a0); a pointer local per switch case | c46 80186B24 |
| (r186) `lui a0,0x4000; lui v1,0x2000; or v0,D,v1; or v0,v0,a0` script-pointer store | `((s32)&D \| 0x20000000) \| 0x40000000` | c46 8017E7E8 |
| (r186) A stack result word loaded before the reloaded object pointer | copy it to a local first `rr = r;`, store from rr | c46 8017E7E8 |
| (r186) A matched stub's typedef copy differs from the stage's (member names) | rename to the stage's members before placing (place_stage defers: "no member named") | 801871C0 |
| (r186) A pointer-to-global local used as a load base (`lhu 0xE(s3)`) folded back to lui/%lo by cse | put a join between the pointer's set and its uses: a ternary call argument as if/else with the call in each arm (cross-jumped later) | c43 sc02_000 80188790 (r174 park) |
| (r186) (correction to r174's "first-declared local recomputes &local") `&m` held in s0 after a struct copy into m | the block move's dest-address pseudo is reused by cse for every later `&m` whatever the declaration order; per-call `addiu aN,sp,K` needs a real basic-block boundary between the calls; a param live across a block boundary becomes a global pseudo and swaps the s-register order | c43 801888F4 (still parked: two labels make it match, no placeable source yet) |
| (r186) `(rand()&1) ? r+K : K-r` as two arms (`negu v0,s0; j; addiu s0,v0,K` / `addiu s0,s0,K`) | if/else with a separate s32 temp in the negate arm: `nr = -r; r = nr + K;` | c47 sc03_105 801831E0 |
| (r186) A table base in an s-register set after the loop counter's li | `i = 0x17; t = D_tbl;` then `for (; i > 0; i--, p--)` | c47 801831E0 |
| (r186) An SV8 copy loop's stores kept above a scalar u16 global load | the copies through `AF(p, s16, off)` (`p->x` lets the load move above) | c47 801831E0 |
| (r186) A uv pick with a constant shared by both arms set inside each (`li v0,0x1E0` twice) | a third local set in each arm, the test inverted so the bit-clear arm falls through | c47 80183F84 |
| (r186) Scalar global `++` after an o-field `++`, the global's lw before the field's sh | `n = field + 1; m = G + 1; field = n; G = m;` | c48 801867D0 |
| (r186) One pointer local for a call result in one case and a field pointer in another (result in a0 not v1) | a pointer local per case | c48 801867D0 |
| (r186) A u16 field RMW loaded before an s16 field, the first-loaded value always in v1 | s32 t with `t \|= K; t &= 0xFFFF;` before the store (the no-op mask raises t's ref count before combine deletes it) | c42 sc02_028 801829BC (r174 park) |
| (r186) loop.c hoists a symbol address (la into an s-reg) out of a for loop with a call; the original keeps `lui at; addu at; %lo(at)` | `*(s16 *)((u8 *)D + (i << 1))` (`&D[i]`, `((s16 *)D)[i]`, `i * 2` all force the symbol into a register) | c42 sc01_004 8017DF18 (still parked: an exact allocation-priority tie, 8 lines) |
| (r186) A loop-bound copy chain `move v0,v1; beqz v0; move s2,v0` before the loop | the count u16 in a real for loop | c42 8017DF18 |
| (r186) A loop's skip-branch delay slot filled from the target where ours fills from the fallthrough | every increment in the for header `for (..; i++, r++)` | c42 8017DF18 |
| (r186) `addiu s0,s0,K; sw s0,G` at a tail, ours `addiu v0,s0,K` | `p += K; G = p;` | c42 8017DF18 |
| (r186) Two call-crossing block-0 locals (a param copy and a stack address) in swapped s-registers | move the param's last use after `i = 0`: `i = 0; u = a2 + K; for (; i < N; i++)` | c42 sc03_118 80184F18 (r174 park) |
| (r186) A prototyped stage callee called by the original with fewer args | K&R cast `((s32 (*)())f)(o)` (the r148 recipe; also sc03_028 8017F93C) | 80183610, 801879AC |

Parked by r186 (best attempts in C:/tw/stage-sweep/build/work/r179/ spec_c<tag>_<n>.txt, notes folder (dispatcher's) r186_progress.md): func_sc03_105_80184500 (65; 14 lines: a 16-colour fade loop feeding LoadImage, the r/g/b field extracts interleaved with the sums in ours; best spec_c36_11 v2), func_sc03_105_80183A98 (98; 14 lines: two `rand() & 1` add/sub arms, the original lays arm 2 sub-first and cross-jumps arm 1 into it, the first 80183C6C result in s0; every equivalent-arm form collapses to 79; best v_c41 round 2 v0), func_sc02_000_801888F4 (r174's; 74/73: needs a basic-block join after func_8001CC3C and after RotMatrixY; `{ static void *lp = &&lab; } lab:` at both points matches exactly but is not placeable; best spec_c43_9), func_sc01_004_8017DF18 (r174's; 8 lines: s2/s3 swapped between r and the loop bound, an exact global-alloc priority tie 1666/1666; best spec_c42_29, which fixes r174's 3 lines). Not S1's (r185's list): func_sc02_011_8017DE10, func_sc01_004_8017E1D4. Placement choices to know: func_sc03_007_80184E8C is s32 and returns a value only on its decrement path (other paths `return;`; reached only through its handler table); func_sc03_007_80180AF4 and 80180BF8 are marked `inline` (later functions inline them in the original); D_801270C8 is `s32[]` read as [0] in sc03_007.

### r185 rows (S2 batch 7, 24 Oct; park, helper and clone-repair agents; merge b2d79ba)

| Symptom | Source | Example |
|---|---|---|
| (r185) a copy the original keeps (a delay-slot `move`, a second register holding the same value) is folded by cse in ours | make it a NARROWING copy (`u8 n = k;`, `s16 f = a;`, `{ s16 m = n; .. }`, `s16 xm = x - 4;`): a narrowing copy is not a plain reg-reg copy, so cse does not make the new variable canonical, and sched1 does not mark it urgent; the copy survives and later becomes a plain move | func_sc04_015_80182F2C, func_sc04_018_801889B8, func_sc04_011_8017D000 |
| (r185) `n >> 6` of an s16 field comes out lhu / sll / sra where the original has `lh; sra` | cse folds the shift into the sll-16 temp ((x<<16)>>22) and blocks the lh combine: read through a narrowing copy `{ s16 m = n; h = m >> 6; }` | func_sc06_018_8018C3F8 |
| (r185) a variable assigned for the third time is hoisted to the top of its block / wins a register by its many refs | a variable set more than once is not "birthing" in sched1 (no 0x7f000001 boost) and keeps all its refs in global-alloc: give that job a fresh block-scope local (`{ s32 c = b - 0x10; x = a; y = c; .. }`) | func_sc04_002_80186DD4 |
| (r185) two chained ALU results in the wrong order (sched1 boosts the second) | set the boosted one's variable twice (`x -= t; x <<= 1; p[0xC] = x;`): it is no longer birthing, and the tie goes by LUID (source) order | func_sc07_001_8017FE38 |
| (r185) a global's address is folded into each access (`lh sym+off`) where the original keeps a base register (`addiu s1, sym+6; lh 4(s1)`) | access two offsets off one symbol through the file's own scalar (`AF(&D_80126B58, s16, 6)` and `.., 0xA`): cse's use_related_value puts sym+6 in a register and rewrites sym+0xA as 4(reg); casting `((s16 *)&D)[k]` does not | func_sc05_010_80183098 |
| (r185) the table base lui/addiu comes after an index multiply in ours, before it in the original | put the base in its own variable first (`base = (u8 *)D; off = n * 0x90;`) and take each address off it with its own pointer local (`q1 = base + 0x18; p1 = (T *)(off + q1);`): in the array form expand forces the symbol into a register only after force_operand emitted the multiply; one expression reassociates | func_sc07_010_801817D0 |
| (r185) a pair pointer `&D + idx*K + 4` is built as (D+4) and &D recomputed as (D+4)-4 | `{ u8 **base = (u8 **)&D; u8 **b1 = base + 1; pb = b1 + idx * 8; pa = base + idx * 8; }`: any folded form becomes the constant D+4 | func_sc06_029_80182ED8 |
| (r185) two pseudos tied exactly in -dg priority come out swapped | the tie goes to the lower pseudo number: declare the one that must win first (`s32 i;` before `u8 **pb;`) | func_sc06_029_80182ED8 |
| (r185) loads of o fields scheduled below a scalar global store in ours, above it in the original | write that case's o accesses through a block-scope `ObjS *q = (ObjS *)o;` (in-struct refs do not alias the scalar store); then sweep the statement order (6 orders x 3 forms in one spec) | func_sc04_011_80180B24 |
| (r185) one `move a1,v0` too few (a value computed straight into the argument register) | statement order: put the store that first uses the late operand next to its partner (`p[2].y = a.y - dx;` right after `p[2].x`): the first use delays the second mult, and the HI copy then shares the loaded register | func_sc06_016_80180894 |
| (r185) a block-local compare temp takes v0 before a global value that the original keeps in v0 | force the temp global: reuse it later for another job (REG_N_DEATHS != 1: `d = v - e; d <<= 16; if (d < 0) ..; .. d = b.z >> 1;`), and write the join's tail in each arm (cross-jumping merges it) so the value is dead at the join | func_sc04_020_8017D0BC |
| (r185) one loop pointer register wrong in both loops of a function | one walking pointer shared by both loops (`for (i = 0x32, v = &w[0x32]; ..; v -= 2)` and `for (i = 0, v = w; ..; v += 2)`): one pseudo picks up both loops' conflicts | func_sc06_029_80189440 |
| (r185) a loop constant hoisted at the wrong point / not hoisted | set it inside the if, right after its first use (`dm = 0xE100004A;` after the first addPrim): its lifetime decides where loop.c moves it | func_sc06_029_80189440 |
| (r185) the walking pointer of the first of two table loops wins a1 over the second loop's t+4 givs | give each table loop its own walking pointer (one shared t gathers 16 refs) | func_sc04_015_80182F2C |
| (r185) two field groups through o->0x20 get v1 instead of v0 | one block-scope `{ u8 *q = AF(o, u8 *, 0x20); .. }` per group, not one shared p set twice | func_sc05_003_8017F4FC |
| (r185) a constant-address pointer local (`u8 *g = &D;`) loses its s-register (cse folds g + K into a constant, combine drops g) | use it only where cse cannot fold: inside a jump-table case block, or behind an if/else whose value is computed into a temp first (`if (n > 0x80) t = -0x40000; else t = -(n << 11); AF(g,s32,0x34) += t;`) | func_sc05_004_8017ECC4, func_sc05_003_8017F338 |
| (r185) the object pointer outranks a call-crossing local in global-alloc by one ref | one store with a ternary instead of a store in each arm (`DC = !(rand()&1) ? d + (0x800 - t) : d + (0x800 + t);`): 12 refs to 11 | func_sc05_003_8017F338 |
| (r185) `li v0,1` missing from the bnez delay slots | `if (f(..)) return 1; return 0;` (gives sltu + the li in the slots); `return f(..) != 0;` does not | func_sc06_022_8017F30C |
| (r185) a pointer local's s-register and a 0x30 frame | set it before the call that crosses it and use it for both loads and the argument (`p = o + 0x88;` before Square0): sched1 may sink its set below the call | func_sc06_011_8017F8F8 |
| (r185) loop.c hoists D+6 out of a loop where the original reloads | a base-pointer local `u8 *pl = &D_80126B58;` for the fields used in and after the loop | func_sc05_002_8017F538 |
| (r185) a matched clone fails to place: `conflicting types .. An argument type that has a default promotion can't match an empty parameter name list` | the draft has a narrow parameter (`s16 arg2`, `s8 n`) and the stage declares `f()`: `s32 arg2_0` then `s16 arg2 = arg2_0;` in the body (same code) | func_sc05_007_801809B0 (x4), func_sc07_002_8017D920 |
| (r185) place_stage: "`D_x' undeclared" although the draft declares it | the draft has several externs on one line and one of them is already declared: place_stage skips the whole line; one extern per line | func_sc07_006_80180CFC |
| (r185) place_stage "build differs" / "subscripted value is neither array nor pointer" | the draft's extern type differs from the file's (`SV8 D[]` vs `u8 D`, `u32 D[]` vs `u32 D[2][0x1000]`): keep the file's and cast at the use (`&((SV8 *)&D)[i]`, `(u32 *)D + (n << 12)`) | func_sc04_011_80180B24, func_sc06_029_80189440 |
| (r185) same census shape matched once, but stage_clone writes no draft (same-stage source, K&R source, "a source symbol left unrenamed") | hand clone: copy the source's C, pair own-stage symbols by walking both asm listings, keep the target file's declarations (cast at the use), prototype instead of K&R; 30 / 30 matched first try (r185 A1) | func_sc06_010_80181234, func_sc07_006_8018163C |

Parked by r185 (best spec files in C:\tw\stage-s2\build\work\s7spec_<tag>_<n>.txt, notes folder r185_progress.md):
func_sc04_011_8018C14C (69/69, 8 lines, still s7spec_P2_3.txt b5; 6 lines in s7spec_K1_4 b2 only with volatile: the
`a0 = o` argument copy must land after the x store while the 0xC4 value wins v1 by birth order), func_sc07_002_8017DC80
(346/346, 63 lines = one s0-s4 rotation; abr's -dg priority 1315 vs z 11111; s7spec_K11_7 b1), func_sc04_016_8017E26C
(267/269, 17 lines, s7spec_K17_1 v3 / K17_4 v0: combine_givs list order), func_sc05_002_8017F348 (124/124, 18 lines:
loop pointer / i a1/a2, the shared pointer+sound-id pseudo needs 2 more refs; s7spec_A3a_6 v0).
MATCH-TRICKS held for LuciDin's ruling (files in C:\tw\stage-s2\build\work\s7\<stage>\): func_sc05_001_8017FE0C
(7 nested `do { } while (0)` around `n = k + 4; n *= 32;`; s7spec_K2_2 v0), func_sc06_018_8018F060 (dead stores
`pq = (u8 *)&D_800AF630;` before an inlined SetWsm() give cse a base register; 3 copies with sc06_032 8018EDB0, sc06_033
8018AD9C), and r177's func_sc04_016_8017E960.

### r186 rows, part 2 (S1 batch 9, 24 Oct; merge ce539c0)

| Symptom | Source | Example |
|---|---|---|
| (r186) Byte stores to several fields of u8 scalar globals (`sb 0(aN)`, `lui at; sb %lo(D+k)`), D's address kept for a later call | chained stores through `((CV4 *)&D)->r`, `[1].b` (`(&D)[k]` / `AF(&D,u8,k)` put D+k in a register) | c49 sc01_084 8017F8B8 |
| (r186) `lui/ori` constant and a global pointer lw both ahead of a field `\|=` | read the global into a local before the `\|=`, store the local after | c49 8017FC10 |
| (r186) `bgtz` to an out-of-line arm, the `<= 0` arm falls through then `j` to shared code | `if (x <= 0) { if (f == 1) goto end; } else { if (f == 0) goto end; }` | c49 80180D38 |
| (r186) RotTransPers screen-xy word read as `lh 0x1A(sp)` and every later stack arg 4 too high | declare it UXY and read `sxy.s.y` (a plain XY gets an 8-byte slot) | c50 sc01_084 80184460 |
| (r186) Two stores to the same stack halfword (`sh y-0x22, 0x12; sh y-0x32, 0x12`) | write both assignments (GCC 2.7 keeps the dead store) | c50 8018392C, c51 80183BD0 |
| (r186) `t = d; if (rand()&1) t = -d;` with `negu s0,s1` where ours merges into `negu s0,s0` | t declared s16 (the mode change stops cse folding `-d` into `-t`) | c50 8018599C |
| (r186) `-ang` and `r` in swapped s-registers, a global load scheduled late | read both globals into the locals first, then add the table offsets | c51 80183630 |
| (r186) An lhu of one table entry inside an otherwise s16 expression | that global is u16: declare it u16 | c51 80183630 |
| (r186) A clone of a K&R-defined source (`s32 f(o)`) placed as a prototype breaks existing no-arg callers ("too few arguments") | keep the prototype; call through `((s32 (*)())f)()` at those callers | sc03_002 80182F0C, sc03_124 80184088, sc03_125 80181790 |
| (r186) A matched clone calls a later same-stage `s16` function with no extern where the source relied on implicit int | `extern s16 f();` plus `((s32 (*)())f)()` (keeps the no-sign-extension code) | c52 sc03_002 80182F0C |
| (r186) Two stack s32[3] arrays (one store-only), frame 16 too big, the second array 8 higher | `s32 h[3]; u8 unused[8]; s32 d[3]; u8 unused2[8];` | c54 sc01_084 801807D8 |
| (r186) A global's address in a register (lui/addiu) and a neighbour global reached as reg+off, or reloaded through it after a store | access both through one array or struct symbol (`extern s32 D_801270C8[]` with [3] / [4] for D_801270D4 / D8; `L16 D_800A5E88[]`) | c53 sc01_084 80180000, 80181310 |
| (r186) A lone scalar global loaded and stored through a register inside a loop (an array form gets hoisted into an extra s-register) | a local pointer in that case arm `q = &D_x; if (*q == 0) { *q = 1; .. }` | c53 |
| (r186) A store to the field just incremented followed by an lhu reload instead of an andi of the kept value | `AF(o,u16,0x34)++;` before the neighbouring store, then the compare | c53 |
| (r186) A jump table for cases 2..6 where only 2/4/6 have bodies | list the empty cases `case 3: case 5: break;` (the table needs the case count) | c53 |
| (r186) A 3-way constant store, two arms sharing one cross-jumped `sw v0`, the zero arm `sw zero` | order the source `if (y >= A) v1; else if (y >= B) 0; else v2;` | c53 |
| (r186) s32 globals stored and the next halfword symbols (D_x+2) read right after each store, interleaved sw / lhu; ours hoists the lhu | read the halfwords as `((u16 *)&D_80126B5C)[1]` from the s32 symbol (they alias the store) | c58 sc02_017 80180D8C |
| (r186) `beq v,K` to an out-of-line arm, the other arm inline | `if (v != K) { inline arm } else { out-of-line arm }` | c58 8017FCFC |
| (r186) Script-pointer store with `lui 0x4000` OR'd first, then `lui 0x2000` | `((s32)&D \| 0x40000000) \| 0x20000000` (the opposite of c46's order) | c58 8017FCFC |
| (r186) `bool = 1` in a branch slot, a call, `bool = 0` on the fall-through, then `bnez` on it | an s32 flag set in both arms of an if/else, then `if (r == 0) {..} else if (field & 4) f(); else g();` | c57 sc02_017 80186168 |
| (r186) `beq r,3` straight to the shared "other" arm that a later `bnez r` also targets | write the other arm twice: `if (r != 3) { ..; if (r == 0) A; else B; } else B;` (cross-jumping merges the B copies) | c57 8017FB60 |
| (r186) A scalar global's address held in an s-register as a call argument, then read `lh 0(sN)`, neighbours by lui/%lo | pass `s16 *q = &D_x;` to the call and read `*q` (also gives the s1 save for the frame) | c57 80187178 |
| (r186) Block-local stack slots reused between two if/else arms (an arm's vector at 0x18 in one, 0x20 in the other), frame smaller than the block locals add up to | GCC 2.7 never shares block-scoped locals: move each arm's locals into `static inline` helpers (their frames are temp slots freed after each arm); placed by hand | c55 sc01_084 8017EA98 |
| (r186) A sum of two inline abs values compared with slti, ours copies the compare into each abs arm | `if (sum < 0x80) return;` inside the inline helper | c55 8017EA98 |
| (r186) Table loop with the byte-offset induction variable set before `i = 0` | a second induction variable: `for (j = 0, i = 0; i < 3; i++, j += 4)` with `AF(D, s16, j)` | c55 8017EA98 |
| (r186) Loop-invariant uv constants in s-registers with their li's out of order | `u0 = 0xF0; v = 0;` right after the last setup call (GetClut), the other constant inline; store the prim's tpage before its clut | c55 80183DA4 |
| (r186) A scalar global's address held in an s-register and read twice (the stage declares it scalar, `(&D_x)[0]` folds) | `u16 *pt = &D_x;` then `*pt` at each use | c56 sc01_084 801809C4 |
| (r186) A global s16 load hoisted above stack-array stores in ours | declare the global as an array, read `D_x[0]` (array refs are in-struct: they conflict with the `v[i]` stores) | c56 801809C4 |
| (r186) Frame 8 too big, screen-xy outputs allocated before other locals | the RotTransPers sxy outputs as UXY, not XY (an SImode union gets its slot at first `&`) | c56 80184138 |
| (r186) `negu sN,sN` in place after a call, after the next call's arg moves | no x0/x1 locals: `a.x = i << 8; b.x = (i + 1) << 8;` then `a.x = -(i << 8); ..` (cse makes the shared value a call-crossing temp) | c56 80180300 |
| (r186) Two prims filled through a stack array `u8 *pr[2]`, the second store first | chained `AF(pr[0],..) = AF(pr[1],..) = v` | c56 801809C4 |
| (r186) A 4-byte gte_stsxy stack target pushes the next stack local 4 too high | declare it UXY, read `s.s.x` / `s.s.y` | c61 sc02_017 80181E98 |
| (r186) `(rand()&1) ? r : -r` then `+ 0x40` (negu in the bnez slot, `j; addiu v0,v0,0x40`) | `z = rand() % 16; v.vz = ((rand() & 1) ? z : -z) + 0x40;` with its own local z | c61 80181294 |
| (r186) A constant (0x8FFFF) held in an s-register across a call, an `o+0x88` call arg not kept in s1 | one if/else with the call-only arm inline; set the pointer local first in the out-of-line block | c60 sc02_017 80186530 |
| (r186) Masked ratan2 result `andi a0; move s1,a0`, a0 reused as the next arg, the global store from the arg copy | `t = ratan2(..) & 0xFFF; ang = t;` (s16 ang), pass t | c60 8017F768 |
| (r186) Array global with [0] and [2] through an s-register but [1] by %lo(D+2) | plain `D[0]`, `D[1]`, `D[2]` of an `extern s16 D[]` (a pointer local folds g[2]) | c60 8017F768 |
| (r186) `lh; slti -0x7FF; beqz L; slti -0xC00; beqz call`, ours folds to a range test | `if (G >= -0x7FF) d = K; else if (G < -0xC00) d = K; else { call }` (cross-jumping merges the duplicate arm) | c59 sc02_017 801842E0 |
| (r186) A call result kept unextended in an s-register, `sll/sra 16` at every compare | `s16 d = f();` | c59 8018347C |
| (r186) A stack address used by two calls in a row held in an s-register in ours; the original rebuilds `addiu aN,sp,K` at each call | move the first call and its input zeroing into a `static inline` helper taking both vector pointers (inlining puts a block boundary between the calls); placed by hand (build/work/r179/handput_inl.py) | c62 sc01_080 801815D4 |
| (r186) sll 17 / sra 13 as the index of an 8-byte table pair (base and base+8 in two s-registers) | `s16 k = i * 2; x = D[k]; y = D[k + 1];` with s32 i and `extern SV8 D[];` | c62 80182B90 |
| (r186) A table reached through a byte offset stepping by 8 in its own s-register next to a loop counter | `for (i = 0, j = 0; i < 4; i++, j += 8)` with `AF(D_tbl, s32, j)` | c62 8018287C |
| (r186) `&r` held in an s-register across `f(&v,&r,K); g(&r); ..; RotMatrixYXZ(&r,&m)`, the original rematerialises `addiu aN,sp,K` per call | wrap the calls in `static inline` helpers taking pointers (`dir(o,&v,&r)`, `rot(&r,&m)`): inlining breaks the cse of the frame address | c63 sc01_080 80181410 |
| (r186) lhu (not lh) on `r.z = r.y * 2` of an s16 stack vector through a pointer | `r->z = r->y << 1` | c63 80181410 |
| (r186) Switch case bodies in the order 0, 2, 3, then 1/4, case 5 straight to the exit | the cases in that source order, `case 1: case 4:` sharing one body, explicit `case 5: break;` | c63 8017EFDC |
| (r186) addPrim tag-link in a loop with the 0xFFFFFF and i registers swapped | PTag bitfield stores `((PTag *)pk)->addr = ((PTag *)otp)->addr; ((PTag *)otp)->addr = (u32)pk;` with `otp = (u32 *)((z << 2) + (u32)ot)` | c66 sc01_080 8017FD64 |
| (r186) A gte_stsxy0 XY target copied whole into a prim word comes out lwl/lwr | `AF(pk, s32, 8) = *(s32 *)&a;` | c66 8017FD64 |
| (r186) `rand() & (field & 0x7FF)` with the mask reassociated onto the rand result | read the field as s16: `rand() & (AF(o, s16, off) & 0x7FF)` | c66 801810E4 |
| (r186) A three-way value into one `sw v0` at the join scheduled after the next block's address setup | the field store in each arm (cross-jumping merges them after scheduling) | c66 801810E4 |
| (r186) lui of a division magic constant in the bltz slot, ori at the top of both arms, one shared mult tail | the whole expression in each arm (`if (x >= 0) vol = (0xA0 - x) * 111 / 160 + 0x10; else ..`) | c65 sc01_080 8018331C |
| (r186) A u16 min-compare masking `andi min` before `andi d` | `if (min > d)` instead of `d < min` | c65 8018331C |
| (r186) Packed sound arg `(pan<<8\|0x3000)\|vol` without sll/sra of the s16 locals | `(u16)(vol \| ((pan << 8) \| 0x3000))` | c65 8018331C |
| (r186) An s-reg constant li before a field decrement store in ours, after it in the original | declare the block local without an initializer and assign it after the store | c65 80180D54 |
| (r186) Two o-based pointer locals in swapped s-registers when one pointer local is reused for a later field pointer | a separate local for the second pointer (and its own local for a call result) | c67 sc02_011 80186070, 80186430 |
| (r186) Field copies into a new object, the last source field's lhu before two constant stores | write the copies in load order before the constant stores | c67 80186430 |

MATCH-TRICK (LuciDin's policy, handoff top; placed by r186 in ce539c0): func_sc02_017_80185680 (one `do { } while (0)` around `nv = old + d;`: raises nv's loop-depth weight so old and p3 get the original's registers; r178's park) and func_sc02_031_80182AB4 (one `volatile` on the first OR into word 4: keeps the two ORs as separate load/store pairs; r174's park). Both carry a `/* MATCH-TRICK: */` comment.

Parked by r186 (merge 2; best attempts in C:/tw/stage-sweep/build/work/r179/ spec_c<tag>_<n>.txt): func_sc01_084_80183790 (16 lines: a pure s1/s2 swap of ang and r; best spec_c51_7 block 1), func_sc01_084_8017F9F4 (4 lines: loop 3's a0=s0 move for rsin after the x multiply chain; best spec_c53_5 block 1), func_sc02_017_801807DC (1 line: the jal-slot store goes through s0, the original through an a0 copy; best stub), func_sc01_080_801820AC (5 lines: the post-division andi/move after the sra/addiu/addu; best spec_c65_6 block 1). Waiting: func_sc03_113_8017F4DC (an A3 twin; its SC05 copy sc05_002 8017F348 is not matched yet). Placement notes: sc01_084 80180000 / 80181310 read D_801270D4 / D8 as D_801270C8[3] / [4]; sc01_084 8017EA98, sc01_080 801815D4 / 80181410 / 80180D54 come with new `static inline` helpers (placed by hand: build/work/r179/handput_inl.py).

### r194 rows (clone pass over all stages, 25 Oct; merge f73fc9f)

| Symptom | Source | Example |
|---|---|---|
| (r194) A clone drafted `void` where a placed wrapper does `return f();` ("void value not ignored") | define it `s32` with no return statement when that compiles to the same bytes (r159's form); if s32 adds an instruction (v0 live at exit, a delay slot filled differently) the original is void: park it, the caller needs a ruling | sc02_028 80183C54 (placed), sc02_028 80183AF8 (parked) |
| (r194) An unsized function-pointer table extern `void (*D[])();` not carried into the file ("undeclared") | `typedef void (*VoidFn)(); extern VoidFn D[];` in the draft | sc05_008 8017F724 |
| (r194) The file's own guess `extern void f();` (used only for its address) clashes with the clone's definition | retype that line to the definition's type | sc06_025 80184B50 |
| (r194) A clone reads `D.x` / `.y` / `.z` of a symbol this file declares `u8` | `AF(&D, s16, 0 / 2 / 4)` | sc06_030 8018017C |
| (r194) A clone's global load comes out `lhu` where this stage's original has `lh` | `*(s16 *)&D` at the use (the file keeps its u16) | sc03_090 8018A9C8 |
| (r194) A clone steps an `s16` symbol by `&D + i * 14` (stride 28, `sll 2`) | `(u8 *)&D + i * 14` | sc02_028 80183AF8 |

Parked by r194: func_sc02_028_80183AF8 (above), func_sc03_118_8018291C and func_sc03_119_8018291C (three bytes at D+0x4306 (+4) and 4304 / 4305 (+6), the original keeps D+0x4306 in a0 and stores at -2 / -1; ours folds the negative offsets into the symbol: tried AF from 4305, AF from 4306, a local pointer), func_sc03_007_80185948 (a near shape of its source: 44 vs 55 instructions, needs a hand pass).

### r197 rows (S1 batch 10, 25 Oct; helper and park agents; merge 61ee1d4)

| Symptom | Source | Example |
|---|---|---|
| (r197) The same `-0x30` in both arms of a rand sign pick (`bnez; negu v0,s0` / `j; addiu v0,v0,-0x30` / `addiu v0,s0,-0x30`) | one subtraction outside the ternary: `((rand() & 1) ? t : -t) - 0x30` (inside each arm drops one instruction) | d3 sc02_011 |
| (r197) A 0/1 flag in v0 at the join (no s-register, small frame) | set it in each arm after the calls `if (A) { call; r = 0; } else { if (B) call; r = 1; }` (set before the if/else: an s-register and +8 frame) | d3 sc02_011 |
| (r197) Object and a later call result in swapped s-registers, two null tests sharing one `func_8012CAE4(o)` fail block | write the call once: `if (p == 0) goto fail; .. if (q == 0) { fail: func_8012CAE4(o); return; }` (two copies give o one more ref and the higher priority, though cross-jumping merges them) | d4 sc02_011 |
| (r197) A guarded tail `if (rand() % 3 != 0) return 0;` gives beq + `li v0,0`, the original bne to the epilogue with v0=0 in the slot | nest the tail `if (rand() % 3 == 0) { .. }` with one `return 0` at the end | d4 sc02_011 |
| (r197) An s-register holding `o + 0x88` (ours one register short, frame 8 small: no call in its live range) | compute `t = o + 0x88;` before the Square0 call ahead of its use (live across the call) | d5 sc02_011 |
| (r197) A switch arm's `jal SetScript` merged into one shared copy where the original keeps one per arm | write the last case so its non-call arm comes last (`if (--x == 0) {call} else {store}`): only the shared `sw` cross-jumps | d5 sc02_011 |
| (r197) `li v0,0xff7e` for a u16 store of `-0x82 - field` where the original has `addiu v0,zero,-0x82` | read the operand as s16: `AF(o,u16,0xFE) = -0x82 - AF(o,s16,0x8A);` (and the store order FC before FE) | d8 sc03_121 8017F234 |
| (r197) An incremented u16 counter reloaded with `lh` before each multiply in the original, kept in a register and sign-extended in ours | a store to another field right after the `++` (`0x102++; 0x104 += 0x40;`), each use its own statement after a field store | d8 sc03_121 8017F374 |
| (r197) OT link with the 0xFFFFFF mask hoisted before 0xFF000000 and the loop counter in the next t-register | the stage's PTag bitfield link `((PTag *)pk)->addr = ((PTag *)&ot[z])->addr; ((PTag *)&ot[z])->addr = (u32)pk;` (needs gte.h) | d6 sc02_011 8018576C |
| (r197) abs-then-halve as `bgez; srl` with `0x20 - w` in the negative arm | `h = (w - 0x20 < 0 ? 0x20 - w : w - 0x20) / 2;` (`if (w<0) w=-w` gives negu, one fewer) | d6 sc02_011 |
| (r197) A shared fail call inline after a compare chain | early `{ f(o); return; }` blocks (inverted chain), not a nested if with the call at the end | d6 sc02_011 80186868 |
| (r197) `bne v0,s2` with s2 the switch value inside `case 1` | a plain `== 1` compare (cse reuses the register known to be 1) | d9 sc03_121 |
| (r197) A masked angle in s0 copied to a second s-register after a call (`move s4,s0` in a slot) | `s32 r = ratan2(..) & 0xFFF; .. d = f(); s16 ang = r;` (a narrowing copy survives cse; an s32 copy folds) | d7 sc02_011 80182714 |
| (r197) A flag in the wrong s-register with its `= 0` in the jal delay slot | `t = f(); flag = 0; if (t & 3)` (init after the call) | d7 80182714 |
| (r197) A range tree repeating the same `slti a0,v,0x800` test (`bnez; ..; beqz a0`) | `(v >= 0x800 && v > 0xB00) \|\| (v < 0x800 && v < 0x210)` | d7 |
| (r197) `switch (mode)` with a `move v1,s3` copy before the case compares | switch on an s16 mode | d7 |
| (r197) -0x10 pulled into an s-register (`li s0,0xfff0`) for `f = AF(p,u16,off) - 0x10 + (rand() & 0x1F)` | `AF(p,s16,off) += (rand() & 0x1F) - 0x10;` (`-= (rand() & 0x1F) + 0x50`) | d10 sc03_121 |
| (r197) `addiu v0,v1,0xFF` (ours `-1`) for a u8 decrement stored back | `AF(o,u8,off) = c + 0xFF;` with `u8 c` | d10 sc03_121 |
| (r197) Byte stores `(i*4+4)` from an s16 loop counter where the original uses the raw counter copy, not the sll/sra shared with the index | write them as shifts `(i << 2) + 4`, `(i << 3) + 8`; an a0-based store only on the first of each CV4 chain: `[1].r = [1].g = 0; [1].b = 0;` | d1 sc01_080 80180728 |
| (r197) A late `AF(o,s16,2)++` whose lhu is scheduled before the field stores | `s16 y = d.y; s16 s = AF(o,s16,2) + 1;` first, the stores, then `AF(o,s16,2) = s;` | d1 80180728 |
| (r197) The second SV8 of a pair-table row reached by `sll 4; ori 8` and its own %lo (ours folds +8 into the offset) | `extern SV8 D[];` indexed `[i * 2]` and `[(i * 2) \| 1]` (not a struct {SV8 a, b;}[i].b) | d11 sc03_121 801816C0 |
| (r197) An s16 field compared with a call result loaded before the jal in ours (extra s-register) | the call result in a local first `r = f() & 0xFF; if (AF(o,s16,0x70) >= r)`, fall-through arm first | d13 sc03_030 8017EDD4 |
| (r197) ctc2 0-7 from a stack MATRIX, then ctc2 0-4 again after RotMatrixZ | `gte_SetRotMatrix(&m); gte_SetTransMatrix(&m);` (psyq.h MATRIX, gte.h), plain `&m` each time (a pointer local costs an s-register) | d13 sc03_030 80181708 |
| (r197) sxy stored to a stack copy just below it (sh 0x20/0x22 from lhu 0x24/0x26), frame 8 too big with two XY locals | one `XY s[2];`: RotTransPers into &s[1], copy field-wise `s[0].x = s[1].x; s[0].y = s[1].y;` (a UXY copy goes through a register) | d12 sc03_121 801813E8 |
| (r197) prim+0xC held in an s-register, computed early among the colour stores | `poly = prim + 0xC;` before SetDrawMode, then AddPrim(ot, poly) | d12 |
| (r197) The original overwrites a vertex pointer's own register (`addiu s0,s0,8`), ours a temp (`addiu v0,s0,8`) | `a++; gte_ldv0(a);` instead of `gte_ldv0(a + 1)` | d15 sc03_030 |
| (r197) A u16 global read with lhu in the original, narrowed to lbu in ours (masked & 1, stored as bytes) | hold it in an s32 local, not u8 | d15 sc03_030 |
| (r197) Two stack structs in swapped order (the second-declared lower, ahead of an s32 flag); declaration order does not move them | declare the struct used only inside the loop in the loop's own block | d16 sc03_030 8017F6E0 |
| (r197) A stub's `extern void f();` for a callee the stage file defines in C as `s32 f(s32 arg0)` (placement: "conflicting types") | the file's prototype in the stub, call `f((s32)o)` | sc01_077 8018047C |
| (r197) A stub's `extern s32 D[]` for a symbol the file declares `WMtx D` ("incompatible types in assignment") | the file's typedef + extern, `m = (s32 *)&D;` | sc03_030 8017F6E0 |
| (r197) place_stage defers a draft whose unsized function-pointer table extern it drops (`D undeclared`) | build/work/r179/handput.py + make check-<stage> | sc03_030 8017F8BC |
| (r197) A call arg picked by `j` + `li a0,K` in both arms (not `li v0; move a0,v0`) | one call in each arm `if (x & 1) p = f(2); else p = f(1);` (cross-jumping merges the jal) | d17 sc01_077 |
| (r197) `(u16 field - K) + expr` into an s16 gives `li 0xFEC0; addu` | the field into an s32 local in its own statement after the call (`addiu -K`); `x % 256` keeps its quotient in v0 only with an s16 result local | d17 sc01_077 |
| (r197) A masked pointer then `addiu s1,s1,0x50` explicitly, used with small offsets | `s = (u8 *)((u32)s & M); s += 0x50;` as separate statements (one expression folds 0x50 into each offset) | d17 sc03_030 80181824 |
| (r197) Switch tree testing ==1 first, then slti <2, bnez (cases 0 and 1 only) | add an empty `case 2: break;` | d19 sc01_077 |
| (r197) A field-minus-shift compiled lhu where the original has lh | the s16 field into an s32 local first (`a = AF(o,s16,0x1A); .. -= a << 4;`) | d19 sc01_077 |
| (r197) After SetScript the loads (lw 0x78 / lhu 2) come before the stores in the original | read the value into a u16 local before the stores | d19 sc01_077 |
| (r197) A 16x8 table read with the row term (`row<<4`) before `col<<3` | `AF(D_tbl, s16, row*16 + col*8 + off)` (a 2D array evaluates the column first); that form also gives the extra 16-byte stack area (no `unused[16]`) | d18 sc01_077 |
| (r197) `addu a0,v0` before the null-test branch of a call result stored to a field | `if ((AF(o,s32,0x20) = t = func_8012C1B8()) == 0)` | d18 sc01_077 |
| (r197) lo/hi loop locals with registers swapped against the base / offset pointers | drop the locals, read the struct fields directly (`y < p->y`, `(p->pad - y)*127/(p->pad - p->z)`); a first range test branching to the increment is `continue` | d18 sc01_077 |
| (r197) Two lh globals kept across GTE calls, one lh into s2, the other lhu+sll/sra into s1 | both into `s16 x = G1; s16 z = G2;` before the 0x48 store, reused for m.t[0] / m.t[2] | d20 sc01_077 (clone of sc01_080 8017E8A0) |
| (r197) `lui at,%hi(SYM); addu at,at,a0; lh %lo(SYM)(at)` at every read, ours cse's `la reg,SYM+i` | `AF(D_sym, s16, i)` with a byte-offset local `i = AF(o,u8,0x70)*4` computed first (hi-half adds in the order x, z, y) | d21 sc01_077 8017FAAC |
| (r197) An out-param word (lw 0x20(sp)) loaded before the object field (lw 0x20(s0)) | copy it first `w = v;`, then use w | d21 sc03_006 |
| (r197) `li v0,-16376` for a 16-bit store of 0xC008, original `ori v0,zero,0xC008` | store through a u16 field `AF(e,u16,off) = 0xC008` | d23 sc03_006 |
| (r197) A global `\|=` through an address register with another global's store between its load and store | `q = &D; D_other = k; *q \|= bit;` (scalar `s16 D` kept) | d23 sc03_006 |
| (r197) A value computed 2-3 times around calls (test, negate arm, plain arm), arm result in v1 not v0 | an inline ABS in the return: `return ((X < 0 ? -X : X) * amp >> 12) + 8;`; a global loaded early and used at the end: s32 local (s16 gives lhu+sll/sra) | d22 sc01_077 8017F7E8 |
| (r197) `p = &g->idx[k]; p[0]; p[1]` / `k + g->idx` in the wrong register | index twice `g->idx[k]`, `g->idx[k + 1]`; struct fields used across an inner loop that stores to memory go into locals at the top of the outer body | d22 sc03_006 80182F4C |
| (r197) An lh global read where the stage declares nothing and another new function reads it lhu | declare it `extern u16` and read `(s16)D` at the lh use (still lh; no clash between drafts) | d25 sc03_092 |
| (r197) Switch on cases 1, 2 only: `beq 1 / slti <2 -> end / beq 2` (ours an if-chain) | add an empty `case 0: break;` | d26 sc03_092 8017EAA0 |
| (r197) Lerp `addiu -K; *N; negu; magic divide; +C` | `(-((d - K) * N)) / D + C` (`(K - d) * N` gives li/subu) | d26 sc03_092 80180874 |
| (r197) A strength-reduced pointer copy in a loop (`p+8` in its own register, `lh -2(a0)` in the exit test), the original `addiu v0,a0,8` inside the loop | `p += 0x10;` twice: at the end of the early-skip arm before `continue` and at the loop bottom (cross-jumping merges them later) | d14 sc03_030 80180054 |
| (r197) abs-difference `lh; lh; move a2,v0; subu; bltz; move a1,v1` | u16 result from a plain ternary on the stack fields `d = (s[1].y - s[0].y >= 0) ? s[1].y - s[0].y : s[0].y - s[1].y;` | d14 sc03_030 8017FB04 |
| (r197) `sw ra` / `sw s2` save order swapped | assign the s-register pointer after the early-return if | d14 8017FB04 |
| (r197) A 0..4 classifier inlined as a 5-entry jump table | `switch` listing every case (`case 0: case 2: case 4: break;`); a `p = &D_80126B58` base assigned before the call so its lui lands right after the jal | d27 sc03_092 |
| (r197) A store through `AF(o,u8*,0x68)` scheduled last but its `lw 0x68` hoisted above the other stores | read the pointer into a local first `m = AF(o,u8*,0x68);`, the other stores, then `AF(m,s16,0xC) = ..` | d27 sc03_092 |
| (r197) Stage-table loops (D_801202A0 stride 0x10C, D_8011DB30 stride 0x38) with hoisted compare constants (`li s3`) before the `lui/addiu s0` base | index the array each time `AF(D_x + i * 0x10C, u16, 0)`, not a walked pointer | d29 sc03_024 8018046C |
| (r197) A callee the file defines later with an unused `(s32 arg0)` called with no a0 set | keep the prototype, call `((void (*)())f)()` | d29 8018046C |
| (r197) A global's address in a register (`lui; addiu` then `lw/sw 0(v1)`) in both arms, the store merged after the arms | assign the pointer inside each arm `if (c) { p = &D; *p -= 1; } else { p = &D; *p += 2; }` | d24 sc03_006 80182A44 |
| (r197) Inner switch tree `==1; slti 2; beqz end; bnez end` (two real cases) | list an empty `case 2: break;` after them | d24 80182A44 |
| (r197) A global store in the middle of an `x->f++` (lhu / sw global / addiu / sh) | split it: `n = AF(p,u16,6); D = 0; AF(p,s16,6) = n + 1;` | d30 sc03_024 |
| (r197) `sb rX,0(a0)` on one global (neighbours lui/%lo), its address passed to two calls | `q = &D; f(p, q); *q = v; g(q, n);` | d30 sc03_024 |
| (r197) An address `lui/addiu D` then `addiu a1,a3,-8` (a pointer just before a real symbol) | declare the real symbol `extern s32 D[];`, store `D[0] = ..`, pass `D - 2` (a phantom `V3 D-8` compares MATCH but cannot place) | d31 sc03_024 |
| (r197) A loop with an s16 counter whose increments come out i, table, dest | `for (i = 0; i < 9; i++, t++, p++)` (not `p++; t++;` in the body) | d31 sc03_024 |
| (r197) A 0x6C-byte global struct copy with an `or a2,a3; andi 3` alignment test and an lwl/lwr loop | a byte-aligned struct type `typedef struct { u8 b[0x6C]; } B6C;` and `dst = src;` | d33 sc03_024 80184CB0 |
| (r197) `la s0, X+0x14` then `addiu s0,s0,-0x14` for a RotMatrixYXZ argument, t[0..2] stored through s0 | the real symbol is X+0x14 (the matrix's t[0]): `extern s32 D[]; D[0..2] = ..; RotMatrixYXZ(&r, (WMtx *)((u8 *)D - 0x14));` (a `WMtx` at X compares MATCH but X does not exist: link fails) | sc03_024 80184CB0, 80184FA0 |
| (r197) Two `AF(o,s16,off) -= k` come out in the reverse of source order | write them in the opposite order to the asm | d33 sc03_024 |
| (r197) A 0/1 found-flag tested with `sll v0,sN,16; beqz` where every s16/u16/(s16) form gives `move` or `andi` | s32 flag with `if (hit << 16)` (marked MATCH-TRICK) | d28 sc03_092 8017E044 |
| (r197) A global's address in a register reused at an offset (`addiu v0,%lo(D+2)`; `sh 0(v0)`; `addiu a1,v0,-2`) | pointer local `q = &D_x; *q = ..; f(&r, q - 1);` | d28 sc03_092 8017E2FC |
| (r197) Stack order: an s32 flag must sit before an XY sxy | make sxy the UXY union (SImode: slot at first use; aggregates get slots at declaration) | d32 sc03_024 801838CC |
| (r197) `addu v1,v0` copy where the store and compare use v0 but the else arm v1 | store the sum to the field first, then `x = AF(prim,s16,0x18);` and use x | d32 sc03_024 |
| (r197) A clamp `lh a0; slti; addu v1,a0` in the slot | read the global directly in every compare and in the store (`if (G < lo) v.x = lo; else if (G > hi) v.x = hi; else v.x = G;`) | d34 sc02_016 |
| (r197) `v=9` in the delay slot; else call, `v=0x11`; one `sh v` | each arm its own store `if (..==0) { f(o); AF=0x11; } else AF=9;` | d34 sc02_016 |
| (r197) A callee the file defines with 3 params called with 2 (a2 never set) | the file's prototype, call through `((s32 (*)())f)(a, b)` | d35 sc02_016 |
| (r197) A 3-way ternary with the branch inverted (beqz vs bnez) | plain if/else with the constant stored in each arm; in-place `<<= 16` on three fields in address order (4, 8, C) | d35 sc02_016 |
| (r197) One constant pointer kept in a register with negative offsets off it (`lui/addiu a0, D+k` then `lb -2(a0)`); a base of D+k with -2/-1, a local pointer or a struct cast all fold into separate %lo | write every access `AF(&D_lowest, T, k)` with positive offsets against ONE symbol, the lowest address the function touches (cse's related-value pass then keeps one base and makes the others negative) | p1 sc03_118 / sc03_119 8018291C (r194 park) |
| (r197) A clone of a near shape 11 instructions short: an s32 store compiled `sb zero` (the file declares the global u8), a table at X+2 that splat names separately | cast at the store `*(s32 *)&D = ..` (keep the file's u8); its own `extern s16 D_X2[];` for the X+2 table | p5 sc03_007 80185948 (r194 park) |
| (r197) In-place sign-extend after a call (`sll s0,s0,16; sra s0,s0,16`), ours `sll v1,s0` from a reused local (global pseudo: local-alloc cannot tie the extendhisi2 temp) | a fresh block-local s32 `m` used only there, `(s16)m` at each use; if a needed `move s1,s0` copy disappears, declare the copy narrower `s16 b = a;` | p5 sc01_080 8017E724 (r186 park) |
| (r197) An insn ordered wrongly around a priority-1 insn with no users in its block (a loop counter init, an arg copy) | read -dS for 0x7f000001 boosts: a single-set destination is "birthing" and gets the top priority; set a register twice to drop its boost (`k = 3; z = k; .. k = ..`), or give a value its own single-set local to gain one (`r2 = r + s` instead of `r += s`) | p3 sc03_006 80182080, sc01_080 801820AC (parks) |
| (r197) A v0/v1 swap between two loads stored to a stack struct, one value stored twice | an unrelated statement (`r = ..`) between them stretches the long-lived value's local-alloc range: move it after the stores | p4 sc01_080 8018230C (park) |
| (r197) An s0/s1 swap between two loop pointers (global-alloc priority floor_log2(refs)*refs/live, refs weighted by loop depth) | no plain-C lever found; a do-while(0) around the loop body flips it but is structure (rejected); build/work/r179/v_p4/pri.py prints each pseudo's refs / live / priority | p4 sc01_080 80181D98 (still parked) |
| (r197) Arg setup `lw a0` before `li a1/a2` at a join, ours the reverse (sched1 potential-hazard tie with a store in the same block) | take the store after the call out of the call's block: write it once at the shared join after the if-chain, an early `return` in the arm that skips it | p2 sc03_092 8017E780 (park) |
| (r197) A store in the jal slot through the a0 copy of an s-register (`move a0,s0; ..; jal; sh v,N(a0)`), ours through s0 (cse folds the `q = o` copy back to o) | a separate pointer q with an early dead `q = 0;` (MATCH-TRICK) so q heads the cse class, then `q = o; AF(q,..) = v; f(q);` with s16 v | p2 sc02_017 801807DC (r186 park) |
| (r197) `addiu v0,v0,-7; sltiu s1,v0,0xC` (temp in v0, s1 only the 0/1 result) | `k = D >= 7 && D < 0x13;` (the explicit `(u32)(D - 7) < 0xC` puts both in s1) | d37 sc02_016 80181AE8 |
| (r197) Two loads (`lw 0x78`, `lw 0x20`) before a constant store to o in the original | read the value through 0x78 into a local before that store | d37 80181AE8 |
| (r197) A pointer global reloaded (lui/lw) after a field store through another object | read the second use through a one-member struct cast `((struct { u8 *v; } *)&D_x)->v` (r186 row 31) | d38 sc02_027 801805EC |
| (r197) `else if (a.FC >= b.FC)` where the original loads b's field first | `b.FC <= a.FC` | d38 sc02_027 80181740 |
| (r197) A clamp `li vA,K; slt vA,vA,x; beqz; li aN,K; sh aN` (constant loaded twice, slt not slti K+1) | an s16 local `lim = K; if (x > lim) x = lim;` (an s32 lim gives one li for both) | d40 sc02_027 8017F498 |
| (r197) A SpawnDef stack build loading the index early (`lh v1,0xFC` ahead of the field stores, lhu reload for unkE) | `idx = AF(o,s16,0xFC);` before the stores, read the field again for unkE; frame 0x40: `u8 unused[8]` after the SpawnDef | d40 sc02_027 |
| (r197) A loop constant hoisted only because the loop is 1-2 insns under loop.c's threshold (with a call: moved at <= 29 real insns, kept at >= 30) | each s16 temporary adds +1 insn, but on the side where order matters it makes the producer's dest a subreg and kills sched1's birthing boost: add the +1 where order does not matter (still open) | p6 sc01_084 8017F9F4 (park) |
| (r197) Stores at p+0x18 / p+4 / p+0x2C / p+0x1A, the original not hoisting the p+4 / p+0x2C RMWs above the slow `%10` store | `s32 n = (AF(o,s16,0xFC) + 1) << 10;` right after the 0x18 store, before the RMWs, n stored last; `(x % 10) << 8` as `sll 16; sra 8`: `s16 t = x % 10;` then `t * 256 + 0x2000` | d39 sc02_027 801815E8 |
| (r197) `slt vK,vC,x` with the constant in a register, ours `slti x,C+1` | compare against an s32 local set just before (`lo = C; if (lo < x)`); when the same constant is also the subtrahend (`C - x`) keep that one literal | d39 sc02_027 8017F2B8 |
| (r197) Frame 8 bytes too big, the stack struct 8 low (sp+0x10 instead of 0x18) | `u8 unused[8];` BEFORE the struct | d41 sc02_027 |
| (r197) A field load scheduled before an earlier-written zero store (lhu 2(v0) before sh zero,0x5E) | swap the two statements: the store that uses the load first | d41 sc02_027 |
| (r197) A global-alloc priority tie (exactly equal floor_log2(refs)*refs/live) broken by the lower pseudo number | live length counts insns after sched1 that survive combine, incl. duplicate stores cross-jumping removes later: write a shared tail in both arms of an if/else to stretch one pseudo (here `tbl = &D` twice instead of a `goto def`); a count as `s32 c = <ternary>; u16 n = c;` turns andi into `move` (nonzero bits) | p7 sc01_004 8017DF18 (r186 park) |
| (r197) dbr fills a conditional's delay slot from the branch target where the original has a nop; two ±rand arms cross-jump wrongly | `return 1` inside each arm, `return 0` at the end; write both rand arms minus-first `if (!(rand() & 1)) x = b - r; else x = b + r;`; a call-result arithmetic as one expression (single-set temp: birthing boost) | p7 sc03_105 80183A98 (r186 park) |
| (r197) A stub declares a symbol B8 (struct copy) that the stage file declares u8 (other placed code uses AF on it) | keep the file's u8: `*(B8 *)&D = D_src;` and `(B8 *)&D` (same bytes) | sc03_030 80180E0C |

MATCH-TRICK (placed by r197, each with a `/* MATCH-TRICK: */` comment): func_sc03_092_8017E044 (`if (hit << 16)` on an s32 found-flag: the original tests the low halfword with `sll 16; beqz`; every s16 / u16 / cast form gives `move` or `andi`) and func_sc02_017_801807DC (an early dead `q = 0;` makes cse keep q, not o, as the 0x100 store base so the jal-slot store goes through a0; r186's park). Rejected under the policy and NOT placed: func_sc01_080_80181D98 matches only with a do-while(0) around the whole case-2 loop body inside a for (a nested do-while is structure); the matching file is kept in C:/tw/stage-sweep/build/work/r179/s/sc01_080/ for a ruling.

Parks cleared by r197 (park agents): r194's func_sc03_118_8018291C / func_sc03_119_8018291C (every byte off the lowest symbol D_801D4304) and func_sc03_007_80185948 (u8 global cast at the s32 store, the X+2 table its own extern); r186's func_sc01_080_8017E724, func_sc01_080_801820AC, func_sc02_017_801807DC, func_sc01_004_8017DF18, func_sc03_105_80183A98; r197's own func_sc01_080_8018230C, func_sc03_092_8017E780, func_sc03_006_80182080.

Parked by r197 (best attempts in C:/tw/stage-sweep/build/work/r179/ spec_<tag>_<n>.txt): func_sc01_080_80181D98 (19 lines: s0/s1 swap of p and t, global-alloc priority 1.306 vs 1.03; only the rejected do-while form flips it; best spec_d1_11 block 1; v_p4/pri.py prints the priorities), func_sc01_084_80183790 (s1/s2 swap: local-alloc ties the -ang and &0xFFF temps into ang, priority 3837 vs r 3571; best spec_c51_7 block 1), func_sc01_084_8017F9F4 (loop 3's a0=s0 copy: loop.c hoists -0x4F0 because loop 3 is 28 real insns; an s16 temp adds the insn but kills the sched1 birthing boost; best spec_c53_5 block 1), func_sc02_027_8017F2B8 (3 lines: `slti C+1` vs `li; slt`; best spec_d39_9 block 1), func_sc02_027_8017F498 (4 lines: a0/a1 swap in the -0x300/-0x340 clamp arm; best spec_d40_5 block 1). Still parked from r186, not tried: func_sc03_105_80184500 (14 lines), func_sc02_000_801888F4 (only a label hack matches: rejected).

Placement gaps met by r197 (tools card): place_stage drops unsized function-pointer table externs (`void (*D[])();`: sc03_030 8017F8BC, sc02_016 80181AE8, placed with handput.py); handput.py copies no typedefs (sc03_024 80184CB0 needed B6C by hand); a draft declaring a phantom symbol (a WMtx at an address splat does not name) compares MATCH in cmp_func but fails to link (sc03_024 80184CB0, 80184FA0: the real symbol is D_801C14D8 = the matrix's t[0]); four drafts declared a symbol differently from the file (stub `extern void f()` vs the file's C definition, `s32 D[]` vs `WMtx D` / `P8 D[]`, `B8` vs `u8`): place_stage reports "build differs" with no detail for some of these; cmp_func on src/stg/<stage>.c itself shows the in-context diff.

### r200 rows (S2 batch 8, 26 Oct; park, helper and clone-repair agents; merge 5fd89eb)

| Symptom | Source | Example |
|---|---|---|
| (r200) One s-register rotation (every pseudo one register too high, same order) | a short, high-priority copy set before a call and used after it takes s0 first: `{ s16 a = abr; if (a < 4) { .. f(8); .. (a << 5) .. } }`; s16 (an s32 copy is removed by cse, u8/u16 give sltiu); placed inside the block after the test, sched1 sinks it below the call | Z2 sc07_002 8017DC80 |
| (r200) A field RMW `x = o->C4 | 2` whose load must be boosted by sched1 while the `a0 = o` arg copy fills a load-delay slot | `c = AF(o,u32,0xC4);` right after the earlier store, `AF(o,u32,0xC4) = c | 2;` later (c set once, the or a separate value); `c |= 2` or a single `|=` miss | Z1 sc04_011 8018C14C |
| (r200) A loop-pointer pseudo losing a register to two others by -dg priority (14 refs / 80 insns) | one marked `do { p += K; } while (0);` as the loop body's last statement: refs inside count at loop depth +1 (MATCH-TRICK) | Z4 sc05_002 8017F348 |
| (r200) A store giv swallowed by an identical test giv in combine_givs (store via `sw zero,0(t1)` not `%lo(D)(a2)`) | one marked `AF(D, volatile s32, off) = 0;` (MATCH-TRICK); a flag set in if/else and tested after the join as s16/s8 moves which slt input shares v0 | Z3 sc04_016 8017E26C |
| (r200) A 0x24-byte table loop with a store after the call costing a fifth saved register | recompute `p = &((Fx24 *)&D)[i]` per iteration (a running `p += 0x24` keeps p+0x1C live) | e2 sc04_015 80180618 |
| (r200) A switch tree rooted at `beq 3` next to a range 1-2 with the same body | separate `case 1: case 2:` and `case 3:` arms with the same statements (cross-jumping merges them); `case 1..3` together gives sltiu | e2 sc04_015 80181F4C |
| (r200) Compare tree `beq 1; slti 2; bnez end; li 2; bne end` with one call for cases 1 and 2 | `case 0: break;` plus case 1 and case 2 each written out; also list an extra empty `case 2: break;` after the real cases when the tree has it | e13/e14 sc04_018 80180F7C, 8017FF70 |
| (r200) Angle step `d = ((a - *p) & 0xFFF) | 0xF000`, the original reloading *p per arm and redoing `sll 16` in the compare's slot | write |d| as a full if/else (`if (d < 0) m = -d; else m = d;`, d s16) so the if ends cse's block; then `if (m > (u16)n)` | e1 sc04_002 801829E8 |
| (r200) Stack-vector loads mixed with s16 field stores, v.z loaded between the 6 and A stores | source order 6, E, A then `AF(o,s16,0x2E) += 0x10;` (stack and o may alias: a read must come before the store it is scheduled above) | e1 sc04_015 8017D6FC |
| (r200) Count-down loop `li a0,0x5F .. bgez` over a table | the plain count-up `for (i = 0; i < 0x60; i++)` (written by hand as a countdown the constant load moves first) | e5 sc04_003 |
| (r200) Two s16 range tests on one global folded into `addiu -K; sltiu` (the original slti/bnez pairs) | if / else-if chain with one bound per arm, each arm `r = 0;`, the last `else r = expr;`, `return r;` | e3 sc04_015 80180F94 |
| (r200) Two cases sharing one store tail (beq to the tail from one, fall-through from the other) | write the tail out in each case + break (cross-jumping merges; no goto) | e3 sc04_018 80180D38 |
| (r200) An `a||b||c||d ? 3 : 2` result in the wrong register, the 3rd test's branch to its own `j end; li 3` | one else-if arm per call `else if (f(0x63)) v = 3; .. else v = 2;` (FLAGGED: identical-arms ruling asked; placed in 8017F5F8 / 8017F6D8 / 8017F7B8 / 8017F898 and e13's chain) | e10/e11 sc04_018 |
| (r200) A 3-valued result from two calls with a0 = 0xA or 0x10 | each case its own literal call, then `switch` with an empty `case 1: break;` (a variable argument is one instruction long) | e11 sc04_018 80181124 |
| (r200) A helper returning a pointer computed straight into v0 (ours `move v0,a0`) | `return &X;` in every branch instead of a local returned once | e10 sc04_018 8018203C |
| (r200) A stack argument read with lhu while the callee is K&R-declared | keep it s32 in the prototype and copy `s16 e = e0;` before the halfword store | e4 sc06_018 80187250 |
| (r200) A call result returned through `beqz v0,<epilogue>` while other failures share `j; move v0,zero` | `if ((r = f()) != 0) { ..; if (g() == 0) return 0; o->st = 0xC; r = 1; } return r;` | e4 sc06_018 80187250 |
| (r200) Loop compare constant hoisted into an s-register by loop.c, the original reloads it | not solved in plain C (for/while/typed index/u16 temp/inline helper all hoist); a backward-goto loop gives 55/55 with s2/s3 swapped | e4 sc06_011 8017F5F0 (parked) |
| (r200) Three s-regs in the wrong order and &global hoisted into an s-reg before the call result's move/bnez | `d = &D;` in its own local before the call, then `AF(o,u8*,0x20) = p = (u8 *)f();` | e6 sc04_000 8018298C |
| (r200) o->0x20 loaded three times into a0/v0/v1, ours reuses a0 | a fresh `AF(AF(o,u8*,0x20),..)` (or its own local) per chained-store group | e6 sc04_000 80181ABC |
| (r200) A global's address kept in a register across an if/else storing a constant in both arms | `s32 *p = D;` (D as s32[]) and `*p = K` in each arm (a ternary or scalar gives lui at / %lo) | e7 sc04_000 80182D78 |
| (r200) Global loads scheduled above the object's field stores in the original | every o-field access through a block-scope struct type `((ObjS *)o)->fX`, sources in the original's register order | e8 sc04_008 8017DB64 |
| (r200) Chained stores `p->18 = p->1A = K` landing too early | move the chain to just after the next field copy | e8 |
| (r200) A switch case `if (x != 1) return NULL;` compiled `beq common; j ret` (original `bne ret; j common`) | write the shared check-and-advance tail out in full in each case | e9 sc04_018 8017F418 |
| (r200) `slti 0x2A8; xori 1; bnez` around a guarded store | the comparison in a flag first `ok = f() >= 0x2A8; if (ok == 0) {..}` | e15 sc04_018 |
| (r200) A table search by key with the increment in the branch slot undone by `addiu -8` (cc1 status 2816 on plain loops) | compensation written out: `if (t[0] != k) { t += 2; do { v = t[0]; if (v == 0) return k; t += 2; } while (v != k); t -= 2; } return t[1];` (also for the parked sc02_031 80181F5C family) | e15 sc05_000 8017D70C |
| (r200) A failure arm placed inline (`beqz`) where the original has bnez to success and `j end; v0=0` inline | `if (f() != 0) { ..; return 1; } return 0;` | e17/e28 sc05_003, sc07_007 |
| (r200) Magic 0x78787879 after sll 16, sra 4 minus the sign | `(x << 16) / 34` | e17 sc05_003 |
| (r200) A shared tail call whose early jal has no `move a0` | early exit first `if (x >= 0x10) { f(o); return; }` and end with `f(o);` (cross-jumping) | e18 sc05_003 |
| (r200) Two stores to one field back to back (`sh zero; sh 0xC006`), ours drops the first | put the `= 0` store earlier, before an unrelated store | e19 sc05_003 801815A0 |
| (r200) GTE sqr range test (lwc2 9-11, sqr0, swc2 25-27, sltu/xori 0x18FFE) | gte_ldlvl / gte_sqr0 / gte_stlvnl on a V3, `return (u32)(d.x+d.y+d.z - 0x90001) <= 0x18FFE;` | e16 sc05_001 8017F150 |
| (r200) A word copy via lwl/lwr/swl/swr between globals | both sides as CV4 {u8 r,g,b,cd} and a struct assignment | e25 sc06_018 8018AB00 |
| (r200) A call result copied to an s-reg only after the next call's a0-a2 setup | two locals `t = f(o); a = t; g(o, 0x32, 2, (s16)t);` then use a | e23 sc06_018 8018ACD4 |
| (r200) `addiu a3,s0,-0x200; subu a3,a3,rand&0x3F0`, ours folds the constant | `b = a - 0x200;` in its own statement first | e23 sc06_018 8018ACD4 |
| (r200) A first argument that is a caller's local returned in v0 (`addu v0,s3; sw s4,0(v0)`) | a struct return, or `T *f(T *out, ..) { *out = u; return out; }` to keep the caller unchanged (retype the extern) | e22 sc06_018 8018BFA8 |
| (r200) &local set in an s-reg in the beqz slot after a call | `p = f(); do {} while (0); mp = &m;` (one marked MATCH-TRICK) | e22 sc06_018 8018AD74 |
| (r200) A do-while over a 16-byte table with an extra `andi 0xFFFF` after the lhu in the exit test | `u16 id` local, then `e++`, then `} while (id != 0xFF);` | e31 sc06_000 801878A8 |
| (r200) Unknown switch cases | read the jtbl words in asm/stg/<stage>/data/*.data.s: equal targets share a case group | e26 sc06_022 |
| (r200) Frame 8 too big from `p->18 = p->1C = p->18 + (o->100 - p->18) / 4` (s16 field read twice) | read it into an s32 local first | e30 sc05_002 |
| (r200) A global read and written back via a register base (`lh 0(reg)`/`sh 0(reg)`) | `s16 *g = (s16 *)&D_u16;` and go through *g (a u16 pointer gives `li 0xfa80`) | f3 sc04_002 80180090 |
| (r200) The last test `bnez v0,end` with `li v0,1` in the slot, ours sltu | clamp the field in its own block, then `if (A != 0 || B == 0) return 0; return 1;` | f1 sc04_011 8018315C |
| (r200) A global's address kept in an s-register for two loads across calls | `void **w = &D;` and `*w` at both places (file's `void *` declaration kept) | f1 sc04_011 801826E4 |
| (r200) `beqz r; bltz r; slti r,3` after a call | `switch (f()) { case 0: break; case 1: case 2: .. }`; a u8 decrement as `(u8)(t + 0xFF)` | f5 sc04_011 |
| (r200) A clamp comparing the temporary, not the copy (`addiu v0,v1,3; move v1,v0; slti v0,v0,0x51`) | the clamped local as u8 (cse cannot use the narrow copy in the SImode compare) | f4 sc04_011 8018B744 |
| (r200) A two-sided range test merged into one sltiu (the original slti then bgez) | nested ifs `if (x < 2) { if (x >= 0) return; }` | f7 sc04_011 |
| (r200) `D = AF(o,u16,0xA) + (tbl[i] - 1)` giving `li 0xffff; addu` | `t = tbl[i] - 1; D = AF(o,u16,0xA) + t;` (s32 t) or `(s16)(tbl[i] - 1)` | f8 sc04_011 |
| (r200) A clone that compares byte-identical but will not place | the target file's declarations differ (callee declared s32 and its value returned: the function becomes `s32` with no return; callees defined later with other parameter types: forward prototypes) | f3 sc04_011 80185960, sc05_003 8017EB44 |

MATCH-TRICK (placed by r200, each with a `/* MATCH-TRICK: */` comment): func_sc06_018_8018F060 and its clones
func_sc06_032_8018EDB0 / func_sc06_033_8018AD9C (r185 K7's dead store `pq = (u8 *)&D_800AF630;` before each inlined SetWsm,
ACCEPTED per the dispatcher's ruling; note: the stores occur three times, each with a do-while(0)); func_sc05_002_8017F348
(Z4: one do-while(0) around `p += 0x10C`); func_sc04_016_8017E26C (Z3: one volatile clear); func_sc06_018_8018AD74 (e22:
one empty do-while(0)). Identical-arms forms placed and FLAGGED for a ruling: sc04_018 8017F5F8 / 8017F6D8 / 8017F7B8 /
8017F898 (else-if item chains `else if (f(K)) v = 3;`), sc04_015 80181F4C and sc04_018 80180F7C (separate switch arms with
one body, matching a real separate case label in the compare tree; r186's duplicated-arm row precedent).

Parks cleared by r200 (park agents): sc04_011 8018C14C (fourth round, plain C), sc07_002 8017DC80 (plain C), sc04_016
8017E26C (one volatile line), sc05_002 8017F348 (one do-while(0)).

Parked by r200 (best attempts in C:/tw/stage-s2/build/work/ s7spec_<tag>_<n>.txt): sc04_015 80180F3C (1 line: `or a2,a2,a3`
in place vs our own register for hi; e3_8 b3), sc06_011 8017F5F0 (3 lines: loop.c hoists the 0x26E compare constant;
e4_2 b1), sc06_018 8018C334 (matches as `void f(SV8 *pos, CV4 col)` but the stage's caller passes the integer 0x4040FF:
"incompatible type"; s32 forms differ), sc05_003 8017ED1C (17 lines: common tail based on an a0 copy of s0, else-arm p/b
swap; e30_10 b1), sc04_011 801836D4 (~14 lines: lim via lh v0 + slot copy to a1, subu operand swaps; f2_5 b5),
sc04_011 8018489C (11 lines: a1->s2 / a2->t0 entry copies, negu from the hard register; f5_3 b2), sc04_011 80186B08
(3 lines: lui/addiu of D_801EFCA8 between sll and sra; f6_3 v0).

Placement gaps met by r200 (tools card): stage_clone drops a source's `static inline` helper (sc06_018 8018F060's clones)
and drafts nothing for shapes whose target file declares callees differently (4 shapes; hand clones); a deferred clone
draft leaves a stray line in the target file (`extern void LoadImage();`, then `#include "psyq.h"` in sc06_025, three
times; the commit gate caught the first); clone drafts carry `#include "psyq.h"`, which clashes with stage files that
declare `extern void LoadImage();`; place_stage still drops unsized function-pointer table externs (5 functions placed
with a hand-insert script) and defers a definition whose file extern is `s32` while the draft is `void` and callers use the
value.

### r199 rows (S1 batch 11, 26 Oct; helper and park agents; merges 0c780cf and 2)

| Symptom | Source | Example |
|---|---|---|
| (r199) Two `beqz` fail paths sharing one call/return tail, the second test a `bnez` to the success block with the fail tail between | two early returns `if (p == 0) { fail(o); return; }`, the tail written out in each place | r199 e1 sc03_117 8017FB04 |
| (r199) lwl/lwr/swl/swr 4-byte copies between globals | `typedef struct { u8 b[4]; } B4;` and a struct assignment `D_a = D_b;` | r199 e1 sc03_117 8017EA1C |
| (r199) `x = r; if (r & 1) x = -r;` with the copy in the beqz slot and negu reading the original register | `s16 r = rand() % N; if (r & 1) r = -r; v.x += r;` (s32 r, if/else, ternary all fail) | r199 e2 sc03_117 8017FED8 |
| (r199) Two pointer induction variables: `addiu s0,s3,8` set before the counter's `move s1,zero` | the pointer step in the for increment after the counter `for (i = 0; i < 6; i++, e += 0x20)` | r199 e2 sc03_117 8017ECC4 |
| (r199) Two calls to one function in an if/else (own a1 constants) merged into one jal in ours, both arms then a shared state++ | `state++` inside each arm, no break in the arms (cross-jumping merges the state++ tails, not the calls); a held `u16 *p = (u16 *)&D_80126B58;` gives the s1 address and the 0x28 frame | r199 e3 sc03_117 8017E498 |
| (r199) An extra `sll v0,v0,16` before testing the result of a stage callee defined `s16 f(void)` | call it through `((s32 (*)())f)()` (also calls an (s32,s32) callee with no args, keeping the file's prototype) | r199 e3 sc03_117 8017E498, 8017E6EC |
| (r199) A `lhu/ori/sh` RMW on a global through a register base (`lui; addiu v0; lhu 0(v0)`) beside `lui at` stores | declare it an array `extern u16 D_80126B96[];` and `D_80126B96[0] \|= 0x4000;` | r199 e5 sc02_031 |
| (r199) A sound volume from magic multiply 0x63E7063F then `sra 18` | `(dx*dx + dz*dz) * 80 / 0xA4000` (0xA4000 = 0x200^2 + 0x280^2, the range-test limits) | r199 e5 sc02_031 |
| (r199) The base-field `lh s1` scheduled before `sra v1,v0,31` of a rand()%N, s0/s1 swapped between remainder and base | remainder and base in their own locals `b = rand() % 320; r = p->vx; v.vx = r + b`, the second pair its own locals (no reuse) | r199 e4 sc02_031 |
| (r199) `sll 16; sra 14` on an s16 global loaded lhu (ours a plain `sll 2`), frame 0x18 short | copy the global into an s16 local first `t = D; a = b = -0x200 - t * 4`, separate s16 locals for each clamped copy (they give the frame) | r199 e4 sc02_031 80181378 |
| (r199) `lui/addiu s1,&D` before `move s2,v0` (the call-result copy), ours the move first | the pointer local `p = &D;` BEFORE the call statement `id = f();`; an early-fail shared tail call written in both arms | r199 e7 sc03_011 80180830 |
| (r199) In `u8 + u16*24` the v0/v1 roles swapped | the u16 into the local first `v = D_u16; v = D_u8 + v * 24;` | r199 e7 sc03_011 80180A10 |
| (r199) A call result copied s1 -> s2 straight after the call (s1 later a constant 1 kept across calls) | `m = f(); n = m;` right after the call, m in one arm, n in the other, and `one = 1` | r199 e8 sc03_011 |
| (r199) Clamped-camera block before RotMatrixZYX / func_8012F14C (a stack slot both clamp result and a2 output, D_80126942 in s0) | copy func_sc03_007_8017DE40: one SV8 q as both, `y = &D_80126942;`, if/else clamp into q.x | r199 e9 sc03_011 |
| (r199) A constant store scheduled into an earlier lhu load-delay slot instead of the one after the last lh | write the table-read store (`AF(p,s32,0x2C) = tbl[i].pad << 16`) before the constant store in the source | r199 e10 sc03_011 8017ECD4 |
| (r199) A switch tree with `slti x,2 -> default` between `==1` and `==2`, no `==0` test | an empty `case 0: break;` (its compare folds into default, the split stays) | r199 e11 sc03_029 |
| (r199) A near-clone of another stage's matched function (sc05_010 80184E4C) using a helper the target stage lacks | copy the matched form with its `static inline` helper renamed per function (`rsgn_80183BB0`): place_stage puts inline helpers in front of the function | r199 e6 sc02_031 80183BB0 |
| (r199) A jump-table switch whose case blocks are out of case order | write the cases in the order their code appears (2, 1, 4, 3, 5), each with its own full tail (cross-jumping gives the shared jumps) | r199 e13 sc03_124 8018009C |
| (r199) A global load placed before earlier constant stores in the original | the `AF(o,s32,0x14) += D` statement before the 0x2C / 0x1C stores (or D into a local first) | r199 e13 sc03_124 8017F63C |
| (r199) An if/else-if chain with the two constants in swapped slots (beqz vs bnez, li 3 / li 4) | invert the test so the nonzero arm comes first `else if (f(0xF7) & 0xFF) v = 3; else v = 4;` | r199 e14 sc03_124 |
| (r199) A product kept in the multiplier's s-register (`mflo s2; sw s2`), ours in v1 | assign it back first `d = (rand() & 0xFFF) * -d; AF(o,s32,0x14) = d;` | r199 e14 sc03_124 |
| (r199) Camera code: an `andi 0xFFF` angle in an s-reg gets a `move a0,sN` before its slti; a global both stored through and passed as a pointer | `s16 ang` (not s32); `s16 *t = &D_801274E8; *t = f(*t, ..); .. g(o, t, ang)` | r199 e12 sc03_029 8017F760 |
| (r199) Two globals loaded into swapped registers for `G = G + 2 + a` | `G += a + 2;` | r199 e15 sc03_124 801810E4 |
| (r199) A table address `lui/addiu` scheduled before a field store and before the index `sll` | a base local `base = D_tbl; AF(o,s16,2) = 8; t = base + idx * 4;` (a global argument loaded before a field store: read it into a local ahead of the store) | r199 e15 sc03_031 8017F0B0 |
| (r199) A limit in a2 not a1, `negu` / `slt` against a field read right after | write the compare `field > -lim` (not `-lim < field`) | r199 e17 sc03_112 |
| (r199) Two SV8 locals swapped s1/s2 with the midpoint (sra into s2) | `SV8 a, b;` on one line and `s16 mid` (not s32) | r199 e17 sc03_112 |
| (r199) Random sign `x +/- rand() % N`, the base's `lh` after the remainder's `sra v1,v0,31` in the original (sched1 parks the load against the mult in plain inline code) | a static inline helper per divisor `static inline s32 rpm_X(s16 *p) { s32 r = rand() % N; s32 x = *p; return (rand() & 1) ? x + r : x - r; }` called `v.x = rpm_X(&AF(o,s16,6));`; N a constant in the body (a parameter adds 5-9 insns) | r199 e16 sc03_031 8017F728, 8017F428 |
| (r199) Inline GTE rotate of a constant vector (RotMatrixX on a copy of D_800AE620, ctc2 x5, lwc2 x2, mvmva, mfc2/sh x3) | `m = D_800AE620; RotMatrixX(-0x300, &m); gte_SetRotMatrix(&m); gte_ldv0(&D); gte_rtv0(); gte_stsv(&v);` | r199 e16 sc03_031 |
| (r199) A field store in the jal delay slot after a global's load (`lh a0,%lo(D)`; `jal; sh v0,0xA0(s0)`), ours stores first | the store as the call's argument `r = f((s16)D, AF(o,s16,0xA0) = r, 4, 1);` | r199 e18 sc03_112 8017E160 |
| (r199) A loop with two switches whose compare constants 1 and 2 are both hoisted to s-registers (the original only 1) | one `s16 t;` reused for both switch indexes (`t = e->type; switch (t)` .. `t = e->kind; switch (t)`): about 4 more RTL insns take the loop past loop.c's threshold for the second constant (`cc1 -dL`; helper build/work/r179/v_e18/dl.py) | r199 e18 sc03_112 8017E4B4 |
| (r199) `lb` reads of an s8 table into s16 stack fields, ours `lbu` + `sll/sra 24` | read through an `s32 k` temp `k = *t++; q.p[0].x = k;` (the reverse of the r157 row) | r199 e20 sc01_001 |
| (r199) A ternary result stored to a stack byte then reloaded `lbu` after the join | an if/else assigning the byte in each arm (a ternary keeps it in a register) | r199 e20 sc01_001 |
| (r199) `lui/addiu a1,&D_x` hoisted to the function top, one switch arm reading N(a1), another arm direct %lo(D_x+N) | a local `u8 *b = &D_x;` declared first, used only in that arm; the other arm keeps the scalar globals | r199 e21 sc03_002 |
| (r199) A slti tree (r<100 -> A, <0x78 -> 7, <0x82 -> 0xB, else A) with one shared `sh v0` for 7/0xB | an if/else-if chain setting `s16 s`, both A cases `goto low` (a shared tail; `r>=100 && r<0x82` or a case range reorders the tree) | r199 e21 sc03_002 801816F0 |
| (r199) Switch arms ending in the same `if (call) AF(o,u16,0x34)++;` tail cross-jumped to one label | write the tail out in each case (GCC merges them) | r199 e22 sc03_002 80181BCC |
| (r199) `D[(x == 3) * 8]` compiled bne / addiu 16 (fold makes cond ? 16 : 0), the original xori / sltiu / sll 4 | the comparison into an s32 local first `i = AF(o,s16,0xFE) == 3; D[i * 8]` | r199 e19 |
| (r199) A switch whose cases each `return 0`, the temps avoiding v0 (`move v0,zero` scheduled early) | `break` out of each case and one `return 0;` after the switch (`return 1` inline) | r199 e19 |
| (r199) A chain of `if (f()) return 1;` with `li v0,1` in each bnez slot, the last call ending `sltu v0,zero,v0` | the last one `if (f()) return 1; return 0;` (not `return f() != 0;`: a j and a separate li block) | r199 e23 sc02_021 |
| (r199) A min/max ladder with x/y registers swapped, layout right | the fields into named locals first (`a = q4; b = q8; c = qC;`) and `y = x = b` / `y = x = c` | r199 e23 sc02_021 |
| (r199) Two store values from one register through a copy (`move a0,a1`, low byte from a0, `srl 8` from a1) | reuse the earlier u8 local for the low byte `c = t; *p = c; .. *p = t >> 8;` | r199 e27 sc02_037 |
| (r199) An `&&` result held in v0 (`and; beqz v0; addu v0,zero,zero` slot, then `slti v0`) before a second test | `if (!(G & BIT)) c = 0; else c = G2 < K;` then `if (c && ..)` (`c = A && B`, ternary forms differ) | r199 e24 sc02_021 |
| (r199) A struct-base global whose base word goes through a register (`lui/addiu; lw/sw 0(reg)`), other fields %lo, address passed to calls | `extern s32 D_x[];` and D_x[0] (plain stores elsewhere still match) | r199 e24 sc02_021 |
| (r199) A scalar global (object pointer) reloaded lui+lw after each store through the pointer it holds, ours keeps the first load | the global as an array `extern s32 D[]; AF(D[0], s16, 2) = 4;` (struct / volatile casts reload but keep the address in a register); retype the file's scalar extern and its other C uses `D[0] = ..` | r199 e25 sc03_023 8017E414 |
| (r199) A global's base in a0 before the first branch, later `lw 0x170(a0)`, ours lui+lw %lo(D+0x170) | a function-top local `u8 *g = &D_80126B58;` used as AF(g, u8 *, 0x170) | r199 e25 sc03_023 |
| (r199) A search loop's hoisted constants in the wrong order (`li 300` before `li found,1`) | a local `id` set in the for-init `i = 0, p = &table, id = 300, found = 1`, compared `AF(p,u16,0) == id`; the hit path `goto hit;` out of the loop (break-with-flag costs one insn) | r199 e26 sc02_037 8017F578 |
| (r199) Stack wider than the locals and an s16 field read into v1 then `move s1,v1` in the beqz slot | the local `s16 v` (not s32): it adds the 8-byte slot and the copy; the negative arm out of line `if (v >= 0) {..} else {..; return;}` | r199 e30 sc01_009 |
| (r199) Stack struct stores in an order the scheduler would not choose (one field last, in the jal slot) | that field's assignment after all the others in the source | r199 e30 sc01_009 |
| (r199) Clamp `addiu v1,zero,-0x500; subu v1,v1,<lhu field>`, ours `li v1,0xfb00` | read the field as s16 `s16 t = -0x500 - AF(o,s16,0x28); if (v.x < (s16)t) v.x = t;` | r199 e28 sc03_094 |
| (r199) A table loop with `sll 3; addiu a1,-8` init, entries at %lo(D+2) / %lo(D+6) and the end flag at %lo(D) read after `addiu a1,8` | a struct based at the flag's label, flag first (`typedef struct { s16 next, x, y, z; } WayPt; extern WayPt D_8018B4F2[];`), index `D[i - 1]` | r199 e28 sc03_094 8017E254 |
| (r199) Three s16 tables 2 bytes apart indexed (n+1)*8 as `addiu; sll 3`, bases not cse'd | `extern u16 D_x[][4];` each, `D_x[n + 1][0]` (1-D `[(n+1)*4]` folds and hoists the bases); a stack SV8 read through t0 in a loop: `q = &a;` before it, `q->x` | r199 e29 sc03_094 |
| (r199) Two drafts declaring one table differently (SV8[] placed, s16[] in the next) | keep the placed declaration and cast at the use `((s16 *)D)[i * 4] = v;` (same code) | r199 sc03_094 8017E3B0 |
| (r199) Sound volume / pan in a3 with the 0x66666667 constant shared in a0 (d/80 and d*127/640) | one variable d throughout `v = 8 - d/80; v <<= 8; if (d<0) d=-d; d = d*127/640; call(.., (u16)(v \| 0x3000 \| (0x7F - d)))` | r199 e32 sc03_102 |
| (r199) Frame 8 bytes too big and one missing register copy (a value compared and copied) | an `s16` local for the reloaded global `s16 py = AF(q,s16,0xA)` compared `y > py` (no unused[]) | r199 e32 |
| (r199) CV4 bytes `k + 0xF0` compiled `addiu v1,v0,-16`, the original `0xF0` | `u16 k = (D_800B99DA & 1) ? 0xF : 0;` (s32 / s16 / u8 give -16 or lbu) | r199 e31 sc03_102 |
| (r199) Two halfword stores of `ang + 0x800` with the add and the next call's args scheduled before earlier constant stores | `t = ang + 0x800;` before the stores and a chained store `AF(a,s16,0x28) = AF(p,s16,0x14) = t;` | r199 e31 sc03_102 |
| (r199) Angle sign-extension `andi a0,x,0xFFF; andi 0x800; beqz; addu v1,a0 (slot); ori v1,a0,0xF000`, s32 versions swap / coalesce | `u16 m = x & 0xFFF; b = m; if (x & 0x800) b = m \| 0xF000;`; then `if ((s16)c < 0) c = -c; s16 e = c;` for the shared sll with sra in the bgez slot | r199 e33 sc03_013 |
| (r199) A constant table's address cse'd into an extra s-register (read twice across calls) | the clamp as `if (v < 0) vol = 0x1000; else vol = v \| 0x1000;` (the ternary kept s3); `u16 vol` puts the ori into a1 | r199 e33 sc03_013 |
| (r199) A found flag set to 1 in the loop preheader (hoisted after the other invariants) and 0 on the natural exit, no flag form reproduces it | the search as a `static inline` helper with `return 1` inside the loop and `return 0` after (its value is a compiler temporary, so loop.c hoists the set) | r199 e34 sc03_089 80181F9C |
| (r199) A clamp limit computed full width (`addiu -0x120; subu`, sll/sra for the compare), ours an HImode `li 0xfee0` | `s16 t = -0x120 - AF(o,s16,0x28); if (v.x < t) v.x = t;` (s16 field keeps SImode; cf. r199 e28) | r199 e34 sc03_089 8018188C |
| (r199) Frame 8 too big with a 4-word stack argument block (0x10..0x1C), frame 0x30 | `s32 sp[4];` (not the 6 words the save-slot gap suggests: GCC adds the 8-byte pad) | r199 e37 sc03_010 |
| (r199) A stage function with a matched caller that passes no arguments (`extern void f();`, `f();`), the new definition takes `u8 *o` | K&R `void f(o) u8 *o; {` (a prototype before the caller fails "too few arguments"); or prototype it and call `((void (*)())f)()` | r199 e33 sc03_013 8017E6F4, e37 sc03_010 8017E3B8 |
| (r199) The result of a call ANDed with a mask, scheduled straight after the jal into an s-register (ours later) | the local u16 `u16 ang; ang = ratan2(..) & 0xFFF;` | r199 e36 sc03_111 |
| (r199) An s16 field compared then updated, loaded once (lh; `move v1,v0`), ours twice or with a frame slot | no local: `if (AF(o,s16,0xFC) < 0x800) AF(o,s16,0xFC) += 0x40;` | r199 e36 sc03_111 |
| (r199) `slti; beqz; slti; bnez` on one lh value, ours `addiu; andi 0xFFFF; sltiu` (frame 8 short) | nested ifs `if (v.x < -0x6FF) { if (v.x > -0x7C0) AF = -0x7C0 - v.x; else AF = 0; } else AF = 0;` | r199 e38 sc03_090 / 091 |
| (r199) Clamp constants in a0 (`addiu a0,K` in the beqz slot, `sh a0`), `>` as `addiu v0,K; slt v0,v0,v1`, ours `slti K+1` | one `s16 lim;` reused for every clamp `lim = K; if (v.x > lim) v.x = lim;` (s32 lim: wrong registers) | r199 e38 |
| (r199) Header stores to a stack primitive through an s-register (`addiu s0,sp,0x30`), ours sp-relative even with `p = &q;` | the conditional argument as an if/else with a call in each arm `if (flag) f(&D, &m); else f(rot, &m);` (the join ends cse's block; cross-jumping merges the calls) | r199 e35 sc03_116 801812AC |
| (r199) `li v0,1` scheduled into the load slot before the last store, the original nop then v0 after the store | `if (q != 0) { ..stores.. } return 1;` instead of an early `if (q == 0) return 1;` | r199 e35 sc03_116 80181C4C |
| (r199) A bail-out branch jumping straight to the shared `o[2]++` tail at the end | an early `{ AF(o,s16,2)++; return; }` plus the second `AF(o,s16,2)++` in the final if (tails merge) | r199 e40 sc03_114 |
| (r199) Two stores to one s16 stack field | separate statements `sv.y = ..; .. sv.y += dy;` | r199 e40 sc01_074 |
| (r199) A clamp pair on a stack SV8 field with the bound in a register (`li aN,K` before the load; `li v0,K2; slt`) | one s16 local reused for all four bounds | r199 e41 sc03_096 |
| (r199) A select chain whose branches all jump to one store with 0x600/0x800 in the slot, z reloaded after the first range test | `if (z < A && in) r = X; else if (z >= B && (z >= C \|\| !in)) r = X; else r = Y;` (merged forms fold the tests) | r199 e41 sc03_100 |
| (r199) A store kept before a load from the same object (`sh 0x2C(a0)` then `lw 0x20(a0)`) after an if/else picking the value | the store in each arm (cross-jumping merges them, sched2 keeps the order) | r199 e42 |
| (r199) `addiu v1,s2,0x28` then `addu s2,v1,s0` (ours folds to s2 + (m+0x28)) | a fresh temp `w = y + 0x28; m = r & 0x1F; y = w + m;` | r199 e42 |
| (r199) A clamp `slti; beqz; addiu vN,K (slot); sh vN` with the constant in v1 / a0, ours `li v0` after the branch | a bound variable set before the test `t = 0x1000; if (v.z < t) v.z = t;`: s32 for a plain stored constant, s16 when it also feeds a cross-jumped `k - x` | r199 e39 sc02_028 |
| (r199) A field compared against several addresses loaded once then reloaded for a later `&&`'s second `!=` | no local: read AF(o,s32,0x90) directly in every compare | r199 e39 sc03_114 |
| (r199) Constants 0x5 / 0x64 in swapped registers in a two-SPRT packet fill | the len byte store (o+3 = 5) before the mode word (o+4) in the first packet only | r199 e43 sc01_000 |
| (r199) An identical if-arm twice in the original, merged into one copy in ours | repeat the shared tail store (o+0x32 = 0) inside every arm instead of once after the chain (cross-jumping then merges only the tail) | r199 e43 sc02_026 |
| (r199) `&local` held in an s-register after a struct copy (the original recomputes `addiu aN,sp,K` per call), plus an s0/s1 order; r174-r186 needed two block joins (labels) | the struct copy and its first call in a `static inline` helper taking the pointer `static inline void h(WMtx *mp, s32 a) { *mp = D; RotMatrixY(a, mp); }` | r199 q2 sc02_000 801888F4 (r174 park) |
| (r199) A v.x copy (HI pseudo) and a clamp constant allocated in the wrong order (global-alloc priority floor_log2(refs)*refs/live, `-dg`) | split a shared lim into one-use s16 locals per arm (lower priority, the copy goes first); or assign the constant into the copy inside the arm `s16 lim = -0x580; if (x > lim) { x = lim; v.x = x; }` (more refs for the copy) | r199 q4 sc02_027 8017F498, 8017F2B8 (r197 parks) |
| (r199) A colour-fade loop with the r/g/b field extracts interleaved with the sums in ours | the extracts as their own single-set statements `r = c & 0x1F; g = ..; b = ..;` before the sums, each sum its own single-set local `rr = (r + ..) & 0x1F` (reusing r loses the tie); `c = *s;` with `s++` in the for increment after `i++` puts the lhu below the z load | r199 q1 sc03_105 80184500 (still parked, 4 lines) |
| (r199) An s1/s2 swap between two call-crossing locals one insn apart in local-alloc lifetime (priority 3571 vs 3837) | reuse one s32 local for the partner load and an unrelated later global load (`t = D_ABA6; .. t = D_ABAA;`): two sets drop sched1's birthing boost, the loads keep source order | r199 q3 sc01_084 80183790 (r186 park) |
| (r199) A loop invariant hoisted because the loop is just under loop.c's threshold (28 vs 30 insns) | `(s16)` on a value assigned to an s32 local that is only stored to an s16 field (2 RTL insns at loop time, combine removes them, no SUBREG dest to kill the birthing boost; marked MATCH-TRICK) | r199 q3 sc01_084 8017F9F4 (r186 park) |
| (r199) A global load and a constant sunk by sched1 to just before their stores (the original right after the call) | the global into a local before the stores and the constant through the reused switch-index variable (`s = 1; .. D = s;`): two sets drop the birthing boost (-dS: 7f000001) | r199 q5 sc02_031 801831B4 |

Placed in r199 under the policy as plain C (listed for LuciDin's review, revert = INCLUDE_ASM): forward gotos to a shared
tail or out of a search loop (sc03_002 801816F0, sc02_037 8017F578, sc03_013 8017E6F4); K&R definitions where a matched
caller passes no arguments (sc03_013 8017E6F4, sc03_010 8017E3B8); `static inline` helpers (sc02_031 80183BB0 `rsgn`,
sc03_031 8017F728 / 8017F428 `rpm_*`, sc03_089 80181F9C `near_12C`, sc02_000 801888F4 `roty`); nested ifs with `= 0` in
both else arms, the unfolded `a && b ? X : 0` (sc03_090 80181970 / 80181B50, sc03_091 80182788 / 80182968); sc03_023's
D_801270C8 retyped `s32[]` (as sc03_007; 8017E988's store `D[0] = 0`). MATCH-TRICK line: sc01_084 8017F9F4 (`(s16)` cast).
HELD, matching, not placed: sc03_094 8017D898 (only `D_80126B66[-4] += ..` for D_80126B5E, an alias index; file
C:/tw/stage-sweep/build/work/r179/s/sc03_094/func_sc03_094_8017D898.c); the clone-pass copies of r200's pending
identical-arms sc04_015 80181F4C (sc03_002 8018418C, sc03_124 80185308, sc03_125 80182A10; drafts in
C:/tw/stage-sweep/build/work/r199/c2/p0) wait for that ruling.

Parked by r199 (best attempts in C:/tw/stage-sweep/build/work/r179/ spec_<tag>_<n>.txt): sc03_105 80184500 (r186 park,
14 -> 4 lines: global-alloc of the three mult products, z product last after the t1..t5 globals; q1_5 v2; dumps v_q1/d5),
sc01_009 8017EFC4 (3 empty branch delay slots that reorg fills from the targets; only an inlined s32 helper tested after
the call keeps them empty, +8 insns; e31_4 b1), sc01_001 80182284 (6 lines: v1/a0 swap in the last `|= 0x50000040`;
e20_3 b1), sc01_001 8018275C (one extra strength-reduced register in the 20 x 0x4C table loop; e19_16 v0),
sc02_028 8017F608 (4 lines: the v.x HI copy in a1 and bound k in a0, swapped; e39_8 b1). Still not placed by ruling:
sc01_080 80181D98, sc02_028 80183AF8, sc04_019 801815DC, r177's sc04_016 8017E960 / sc05_001 8017FE0C.

Placement gaps met by r199 (tools card): place_stage reports a spurious "build differs" with no differing words for a
draft with a `static inline` helper (sc02_000 801888F4; handput_inl.py placed it, check PASS); place_stage does not
reconcile one table declared differently by two drafts of the same batch (sc03_094: SV8[] vs s16[], "incompatible types";
fixed by a cast at the use); a draft that needs a file global retyped scalar -> array (sc03_023 D_801270C8) needs a hand
edit; clone_all copies a source placed under a pending ruling (r200's identical-arms forms) with nothing to flag it.

### r201 rows (S1 batch 12, 26 Oct; helper agents k1-k98; new census list build/work/r201/batches.txt; merges c5b85f2 and 1c82644)

| Symptom | Source that matched | Where |
|---|---|---|
| (r201) Two-constant return, the ==0 value in the beqz delay slot, the !=0 one falling through; ternary / result variable adds `move v0,v1` | `if (D == 0) return A; return B;` (testing != 0 first gives bnez) | sc03_103 8017E954 family (k2) |
| (r201) srl, not sra, before `andi 0xFF` of a signed call result (rsin) | `((u32)rsin(x) >> 5) & 0xFF` | sc03_093 8018164C |
| (r201) lh global, `bne 1 / j / beq 2`, returns 6/7/5 | two plain `if (G == 1) return 6; if (G == 2) return 7; return 5;` (a switch flips the order, a local adds a move) | sc03_010 8017F01C |
| (r201) Clone deferred "conflicting types" for a same-file callee | the draft guessed the callee's prototype: copy the target file's definition prototype (cast args to s32) or its `extern T f();` | sc03_006 80183D18 / 801840E0 (k1) |
| (r201) Clone of a source that calls a `static inline` helper drafts a call to an undefined function | copy the helper into the target too (clone_all copies only the body) | sc03_031 80180F0C <- sc06_011 8017F7D4 |
| (r201) Leaf frame bigger than its locals, nothing stored | `u8 unused[N];` with N = the frame size | sc03_002 8018317C (parked for other reasons) |
| (r201) Branch over an early `return 1/0` comes out inverted (orig bnez + j to the tail, value in the delay slot) | the work-first arm: `if (x != 0) { work; return A; } return B;` | sc01_005 8018078C, sc02_000 801821E8 |
| (r201) A callee defined later as (s32,s32), whose a1 the asm never sets (orig nop where ours has `li a1,K`) | call through `((s32 (*)())f)(o)` / declare `extern s32 f();` before the definition | sc02_016 80180FE0, sc02_000 80182D84 / 80189750 |
| (r201) 3-entry function-pointer table copied to the stack, then `jalr` on tbl[o->u16 at 2] | a struct typedef of VoidFn[3] inside the body: `Fn3 t = *(Fn3 *)D_tbl; t.f[AF(o,u16,2)]();` | sc02_000 80183D80 |
| (r201) A second global pointer loaded before the last store through the first (fills the lh delay slot) | read the last field into a local, reload the pointer from the second global, then store the local | sc03_118 801842DC, sc02_000 8018537C |
| (r201) A global's address reused as store base and call argument (`addiu v0,%lo(D)`, `sw v1,0(v0)`, `sw v0,0x10(sp)`) | `s32 *p = &D; *p = k; ... f(..., (s32) p);` | sc01_005 8017D9A0 |
| (r201) Range test on a u8 global (`addiu -7`, `sltiu 0xC`) | `if (D >= 7 && D < 0x13) x = A; else x = B;` (`D - 7 < 12u` as a ternary inverts) | sc02_011 801895CC |
| (r201) return 0 in the delay slot of both early-exit branches | two early `return 0;` guards, then `|= 1; return 1;` | sc02_017 80185AF0 |
| (r201) Two arms with the same `|= 0x20`, a third `&= ~0x20` | `if (f(o)) {..} else if (rand() & 1) {..} else {..}` (same body, different conditions: natural source) | sc02_017 80185CA4 |
| (r201) `(f() & 0x2000) != 0` gives srl/andi; orig andi + `sltu v0,zero,v0` | `if (f() & 0x2000) return 1; return 0;` or `r = f() & 0x2000; return r != 0;` | sc03_006 80188C18 |
| (r201) s16 index of two terms with the sll16/sra14 truncation in the right place | two statements into an s16 local (`i = ((r>>8)-1)*5 - 1; i += r & 7;`) plus an early `return 0` | sc01_008 8017F2DC |
| (r201) Three byte globals at consecutive addresses, only the first through `la a0` + 0(a0) | `AF(&D_first, u8, 0/1/2)` for all three (keep the file's declaration) | sc03_014 8018973C, sc03_118 80182F44 |
| (r201) `return 0` from three early bnez exits with v0=0 in every delay slot, final compare falling into jr ra | `if (A || B || C) return 0; return D;` | sc02_026 8017DA5C family (k8) |
| (r201) Indexed table address `base + e*16 + h*8` loads the fields in the wrong order | the term to load first written first: `&D + (A & 0xF) * 16 + (B & 0xF) * 8` | sc03_118 80184B18 |
| (r201) In a switch arm the table pointer `lui/addiu s0` is scheduled before `li a0,1`, orig the other way | write `&D` directly in both calls instead of a pointer local (cse still keeps it in s0) | sc03_090 80181F00 |
| (r201) Zeroed stack fields stored in an unexpected order ahead of a constant store | write the zero stores in exactly the asm's order (GCC keeps source order; chained `a = b = 0` does not help) | sc01_005 80180A38, sc02_011 80186B1C |
| (r201) `bnez v0,end` with `li v0,1` in its slot, then `sltu v0,zero,v0` (an `||` of two calls) | `if (f()) return 1; ...; if (g()) return 1; return 0;` | k13 (sc03_006 801888A8) |
| (r201) Compare tree `beq x,1; slti x,2; ...` (pivot at 1) where ours tests cases in sequence | list an empty extra case (`case 2:` into default, or `case 0: default:`) so GCC builds the balanced tree | sc02_000 801869CC, sc01_005 8017FF74 |
| (r201) Object and a spawn result have swapped s-registers with `if (t == 0 || g() != 0) { kill(o); return; }` | two separate ifs, each with its own `kill(o); return;`, and `AF(o,u8*,0x20) = t = f();` | sc02_000 80189750 |
| (r201) Loop read `lhu %lo(D)(at+s0)` with s0 = i*K separate from a pointer register for the call (ours merges them) | `j = i * 0x10C; t = AF(&D, u16, j); f((u8 *)&D + j);` | sc02_000 80185E00 |
| (r201) A scalar-global store hoisted above two indexed table loads | read the tables through `AF(D_tbl, u16, i * 4)` instead of `D_tbl[i * 2]` | sc01_005 8017D9F4 |
| (r201) A symbol's address in an s-reg, a neighbour passed as `addiu aN,sK,-2` (cse related_value) | reach the second symbol through the first: `((s16 *)&D_lowsym)[1] = x;` (file declarations unchanged) | sc02_000 80189958 |
| (r201) Clamp-or-colour puts c in v1, a ternary flips the branch | `c = s; if (s >= 0x20) c |= K; else c |= (s << 16) | (s << 8);` | sc02_000 80189C6C family (k16) |

Placement (r201): void function the file declares `extern s32 f();` whose caller returns its value -> extern void and a cast
at the caller (26 Oct ruling), build/work/r201/voidput.py: sc02_028 80183AF8, sc03_014 / sc03_015 80189160, sc03_118 /
sc03_119 8018295C. A function returning a value that the file declares `extern void` -> extern retyped (with the twin file's):
sc02_000 / sc02_003 80185E88, sc02_017 80185AF0 / sc03_006 80189C68, sc03_014 / sc03_015 801859B0 (`s32 *`), sc03_006
801888A8 / sc03_029 80186ECC.
| (r201) `lh` of a global declared u16 (a `(s16)D` cast still gives lhu) | `*(s16 *)&D_x` | sc02_005 801883C4 |
| (r201) Leaf with an empty 0x10 frame (`u8 unused[8]` gives 0x18) | `u8 c[0];` (marked MATCH-TRICK) | sc03_014 801898BC |
| (r201) A constant kept in an s-register across a call inside an if-arm | `s32 one = 1;` at the function top, not inside the arm | sc03_006 80188978 |
| (r201) A global pointer reloaded after its own null test (`lw; beqz; lw` again) | `if (D != 0) { p = ((struct { u8 *p; } *) &D)->p; ... }` | sc03_024 80181230 family (k91) |
| (r201) A scalar global pointer reloaded with lui/lw before every AF store through it | only `extern void *D[];` with D[0] works (a cast at the use shares one address register) | sc03_028 80186234 (not placed: needs the file retype) |
| (r201) A fixed-address store the original schedules between `lw 4(p)` and the `or` of `p->4 |= K` | write the field as an array element `((s32 *) p)[1] |= K` (in-struct lets sched1 move it) | k91 |
| (r201) `addiu v0,v1,0xFF` for a u8 field decrement with the old value tested | `u8 c = AF(o,u8,off); AF(o,u8,off) = c + 0xFF; if (c == 0)` | sc02_005 family (k71) |
| (r201) 4-byte global copy via lwl/lwr through a base register | the align-1 struct `typedef struct { u8 b[4]; } B4;` | sc02_005 8018BDD0, sc02_016 8017F9F4 |
| (r201) `ori v0,zero,0xC020` (ours `li v0,-16352`) for a halfword store | store through a u16 field, not s16 | sc02_011 80185AAC family, sc01_084 8018500C |
| (r201) An unused 4-byte stack local stored before the first test, `sw ra` scheduled ahead of a global load | an initialised declaration `XY v = { 0, -0x40 };` | sc02_005 8017F898, 8017F7CC |
| (r201) `(rand() >> 4) & 0x3F` needs srl | hold rand() in a `u32` local | k66 |
| (r201) A switch tree pivoting at 1 (`beq 1; slti 2`) | an empty `case 0: break;` (or `case 2: break;`) | many (k14, k21, k37, k79, k83) |
| (r201) `x == C` 0/1 flag built with a branch then andi | a static inline u8 helper `if (..) return 1; return 0;` | sc03_023 8017E614 |
| (r201) Clamp constant held in a register for slt | `lim = K; if (v < lim)` | sc03_028 80186FA4, sc02_027 (k81) |
| (r201) `xori/sltiu` on each value then `or` (no short-circuit) | `if ((k == 9) | (k == 0x11))` | sc03_007 (k85) |

Parked by r201 (best attempts in C:/tw/stage-sweep/build/work/r179/ spec_<tag>_<n>.txt): sc02_000 80188680 (18 lines, && result kept in v0; spec_k8_1 block 2), sc03_002 8018317C (14, the original narrows u8 params in place; spec_k4_4 block 1), sc02_026 8017F5DC (2, sched1 tie on li a0; spec_k12_5 block 3), sc03_118 80184E78 (8, sh after the 0xFC lhu; spec_k15_3), sc02_000 80187738 (15, sh n,2 too early; spec_k24_4 block 3), sc01_001 80182A48 (1, loop-1 counter not eliminated; spec_k57_3 block 2), sc01_009 8017FED8 (10, a1/a2 swap; spec_k59_4 block 4), sc01_000 8017E4A0 (33, v1/a0 swap in a sprite build; spec_k56_8 block 2), sc01_008 8017F470 (1, slti on the copy; spec_k58_5), sc02_005 80186A04 (8, k/table pointer t0/a3; spec_k73_4 block 1), sc02_005 8018C84C (22, the o+0x34 reload and a folded constant; spec_k73_2), sc03_006 80183EF0 (3, else-arm sum in v1; spec_k84_7 block 1), sc03_028 80180A08 (D reload after the 0x5C store; spec_k92_2 v0), sc03_092 8017E60C (3, andi in a3 / copy in v1; spec_k97_3 block 4), sc03_030 8017EEE0 (14, block-move addresses computed before the call; spec_k95_1). -O0 beyond the known runs: sc03_118 80183178 / 801831D0 / 80183228 / 80183830 / 801837B0 and sc03_119 80183280 (and their twins).

Placement gaps met by r201 (tools card; workarounds in C:/tw/stage-sweep/build/work/r201/): (1) tools/stage_clone.py
`Image.matched()` counts a C body as a clone source only when its `.s` file exists in asm/stg/<stage>/nonmatchings, so
shapes whose only C copies were split after matching (sc01_077 8017BEF8, sc01_005 8017BE9C, sc02_000's twins of sc02_003,
sc02_011 8018A9F8, sc03_007 80180388) are never drafted (24 functions hand-cloned by k25 / k26); (2) stage_clone drops a
source's `static inline` helper (sc03_031 80180F0C, sc02_003 801888F4); (3) place_stage puts a draft's new extern lines
above the first INCLUDE_ASM, which can be after the function ("undeclared": function-pointer tables, about 12 times;
r201/handput2.py puts them directly above the function); (4) place_stage treats an empty-parens `extern T f();` as a
zero-parameter prototype and defers any definition with parameters (sc03_002 801821B4); (5) put_func's missing_decls
inserts a later definition's full header as a prototype, which breaks earlier calls with fewer arguments (sc02_005
80186CA8: "too few arguments"); (6) non-extern forward prototypes in a draft are not carried (sc03_030 8017E430, sc01_080
80182F64; inserted by hand); (7) cmp_func masks relocations, so a draft with a symbol the asm does not use (sc03_030
8017E430 read D_80126940 for the asm's D_80126942 / 44) or splat's +0x1000000 alias (sc01_005 8018203C) compares MATCH but
fails to link or reads an alias; a check that every %hi/%lo symbol of the draft is in the function's .s would catch both.
Void / value placements (26 Oct ruling): a void function whose file says `extern s32 f();` with a caller that uses the value
goes in with `extern void` and a cast at the caller (r201/voidput.py: sc02_028 80183AF8, sc03_014 / sc03_015 80189160,
sc03_118 / sc03_119 8018295C, sc01_080 80183278, sc02_011 80186790, sc03_024 80182884, sc03_105 80184604); a function
that returns a value but is `extern void` in its file had the extern retyped (16 functions, see the commit messages).

### r203 rows (S1 batch 13, 26 Oct; helper agents m1-m40; r201's list from g265 to the end, then large F-tier shapes; merges 25414eb, e053320 and 12827bb)

| Symptom | Source that matched | Where |
|---|---|---|
| (r203) SV8 / B8 clamps with the bound held in a register (`addiu a0,K` before the load, `li v0,K; slt`), wrong registers with an slti immediate | one `s16 lim;` reassigned before each clamp (`lim = K; if (v.x < lim) v.x = lim;`); s32 or separate locals give other registers | sc03_092 / sc03_094 / sc03_095 (m1, m2) |
| (r203) stride-8 table split by splat into neighbouring symbols (D_C2C/C2E/C30/C32, lhu x3 then lh) | one extern per field (`u16 D_C2C[]`, ...), each indexed `[idx * 4]` (no lower-neighbour read) | sc03_093 / sc03_094 (m1) |
| (r203) sign-bit copy: `bgez` with `lui a0,0x8000` in the delay slot (ours puts the and-arm's lui 0x7fff there) | test and store through the TB bitfield (`if (AF(q,TB,4).top) AF(r,TB,4).top = 1; else ... = 0;`); drop an 8-byte `unused` pad (the bitfield test takes it) | sc03_105 8017E6C0 (m3) |
| (r203) `or a1,v0,a1` of `table[i] | 0x4000` with `i << 4`; ours ors the shifted value | `t = D[i] | 0x4000; f(0x1F3, (i << 4) | t, o);` in an indexed `for (i = 0; D[i] != -1; i++)` | sc03_105 80188BA8 (m3) |
| (r203) lhu + sll/sra16 of a field feeding `/10`, product stored s16 | `AF(o, s16, 0x52) * ((s16)AF(q, u16, 0x102) / 10)` | sc03_105 (m5) |
| (r203) loop counter starting at 3 in a jal delay slot, pointer stepping 0x14 | `for (i = 3, p = D; i < 5; i++) { f(p, ...); p++; }`; `for (i = 0, q = &D; ...)` puts i=0 before the lui | sc03_105 (m5) |
| (r203) halfword copy `*dst = *src | 0x8000`: original hoists `li a3,-0x8000` + or, ours ori 0x8000 | s16 pointers (`s16 *src, *dst`, cast if the externs are u16) | sc03_105 80187F7C (m4) |
| (r203) `lh; sra 7` of an s16 field as a divisor (ours lhu/sll/sra 23) | `AF(o, s16, 0xC) * 2 >> 8` (or `(n & ~0x7F) >> 7`) | sc03_105 8018574C (m4) |
| (r203) `sll a0,s0,9` computed before the loop label and again in the delay slot | put `(i << 9)` first in the sum, or `a = i << 9;` first in the loop body | sc03_114 (m7) |
| (r203) global word copied into a new object's field, its lw scheduled before an earlier constant sh | write the word store BEFORE the constant store (or read it into a local first) | sc03_111 / sc03_114 (m7) |
| (r203) cold first-time init block at the function's end, `-1` path jumps to a shared store | `if (AF(o,u16,2) != 0) { if (AF(o,s32,0x1C) == 0) {main} else AF(o,s32,0x1C)--; } else {init}` | sc03_105 801847B8 (m6) |
| (r203) switch on u16 cases 1,2,3: `beq 1; slti <2 -> default; beq 2; beq 3` (ours pivots on 2) | add an empty `case 0: break;` | sc03_116 8018213C (m8) |
| (r203) rand jitter `andi 0x3F; addiu x,-0x20; addu` with x loaded after rand | `x + ((rand() & 0x3F) - 0x20)` | sc03_117 80180558 (m8) |
| (r203) u8 byte clamp with `move v1,v0` before the sh; ternaries turn `< 0x20` into `<= 0x20` | `u8 v; v = AF(o,s16,off) -= 8;` then if/else clamps | sc03_116 80181204 (m8, held) |
| (r203) V3 field reloaded and stored back unchanged around `+= 0xC000` on the middle word | `AF(o,s32,0x10) += 0; AF(o,s32,0x14) += K; AF(o,s32,0x18) += 0;` (zero-component velocity add, as sc02_015 8017DB60) | sc03_117 80180064 (m9) |
| (r203) two spawns, kill on first failure, free first then kill on second failure | two early-exit ifs each with its own `kill(o); return;` | sc03_117 801808B0 (m9) |
| (r203) sentinel table scan loads the element twice (lh + lhu/sll/sra), original `move s0,a0` | index loop `for (i = 0; D[i] != -1; i++) if (D[i] == g) ...` | sc03_124 (m10) |
| (r203) `(f() + 0x800) & 0xFFF` stored through a fresh pointer with v0/v1 swapped | `a = f(); a += 0x800; AF(AF(o,u8*,0x20),s16,0x12) = a & 0xFFF;` | sc03_117 (m10) |
| (r203) jump table whose entry 0 targets the post-switch code | list `case 0: break;` so the table starts at 0 (no `addiu -1`) | sc03_121 80180254 (m13) |
| (r203) stack word read back with lw + sll/sra (not lh) after a call filled it | copy into an s32 local, store through the global pointer, then `x1 = r1;` | sc03_124 80180D48 (m11) |
| (r203) boolean tail `bnez v -> v0=1; jal; beq x,3 -> v0=1; v0=0` | `if (v == 0 && f()->x != 3) return 0; return 1;` | sc03_124 8017DEF8 (m11) |
| (r203) hi-half of a stack word stored to an s16 field as lhu (ours lh) | `AF(p, u16, 0x50) = (u32)out.x >> 16;`, E0++ after both stores | sc02_011 8018E678 (m12) |
| (r203) big GTE cell-grid renderer: 4 extra spills, frame 224 bytes too big | clamps as `v < 0 ? 0 : (v > 63 ? 63 : v)`, bbox temps s32, hoist `end = c->end` | sc01_077 8017C974 (m14) |
| (r203) ground flag kept in a1 (set 0 in a delay slot, 1 in the copy block, then `bnez a1`) | `if (v == 0 || (v & 0x4000)) { copy; flag = 1; } else flag = 0; if (flag) ...` (setting flag before the call puts it in an s-reg) | sc01_077 8018103C (m16) |
| (r203) arg kept in an s-reg across setup calls, then copied for the loop | copy into a local after the calls (`p = ph; yo = dy;`) and use it in the loop | sc03_103 8017D174 (m18) |
| (r203) only the spill-slot offsets differ in a big function | declare the spilled locals in the original's slot order (slots follow declaration order); took sc03_116 8017BF14 from 4550 to ~230 lines | sc03_103 8017D174 (m18), sc03_116 (m37) |
| (r203) GTE box renderer: hoisted &g.sz0/&g.sz1 (or a spilled pointer) in swapped s-registers | box z pair as `s16 zl, zh; zl = c->z; zh = c->z >> 16;` (not the u32 x/y locals); box in the original order xl, xh, yl, yh, zl, zh | sc03_014 8017DF84, sc02_011 80180FE4 (m34) |
| (r203) two global pseudos tie on refs, wrong one wins by a few insns of live length (-dl "used R times across L insns") | wrap ONE def of the pseudo that should win in `do { v = q0; } while (0);` inside an inner-loop arm, marked MATCH-TRICK (loop depth +1 = +1 ref); keep it out of blocks whose stores it would move | sc02_011 80180FE4, sc03_107 8017BEBC, sc03_089 8017D960 (m34, m36) |
| (r203) wrong spill set from a loop invariant hoisted out of both loops (original keeps it in the inner preheader) | declare one switch arm's `{ locals }` at function scope (BLOCK notes count as luids; the 5th re-move becomes "not desirable", cc1 -dL "halved since already moved") | sc03_014 8017FA5C (m38) |
| (r203) &m/&mt held in s0 across ReadRotMatrix/PushMatrix/TransposeMatrix in an inline camera block (original rebuilds `addiu aN,sp,K`) | `static inline` helpers taking pointers for `ReadRotMatrix(p); PushMatrix();` and `TransposeMatrix(p,q)`, locals stay in the caller | sc03_107 8017BEBC, sc03_010 8017C730 (m31, m38) |
| (r203) re-test of a flag after its own if-body dropped by our build | probe+adjust in a `static inline s32 helper(o)` returning the flag: `if ((f(..) & 0x8000) || helper(o)) { tail }` | sc03_121 8017E880 (m22) |
| (r203) big state switch whose arms share `SetScript(o,&D); state = 0;` | write each arm in full and let cross-jumping merge them; per-arm stores in the asm's order pick the jump target | sc03_024 801830A8 (m25), sc01_001 8017D2DC (m35) |
| (r203) tail block of a later arm reused by an earlier arm, global reloaded at the label | a single copy with a forward `goto block;` from the earlier arm | sc03_124 80187010 (m24) |
| (r203) s16 global doubled and passed (`lhu; sll 17 / sll 1; sh; sra 16`) | `D <<= 1; f(D, 0);` (a local `v = D * 2` gives lh) | sc03_124 80187010 (m24) |
| (r203) `++g > N` as `li vX,N; addiu; slt; sw; beqz` (plain if gives slti N+1) | `static inline s32 timer_up(s32 n) { return ++g > n; }` called in the if | sc01_001 8017D2DC (m35) |
| (r203) switch on an s16 field as `lh; addiu -1` with no sign-extend (ours lhu/sll/sra) | `st = AF(o,s16,0x70); switch (st)` with an s32 st | sc01_009 8018057C (m32) |
| (r203) quad xy halfword block: scalar global lbu hoisted above the stores in the original | in-struct `((XY *)(pk + off))->x/y` stores (not AF), y2 before y1 | sc03_105 80185810 (m23) |
| (r203) clut `(c + 0x100) << 6 | 0x16/0x10` from two sources sharing one sh | per arm `t = (src + 0x100) << 6; clut = src < 0xE0 ? ...` as if/else, then one store after the if | sc03_105 80185810 (m23) |
| (r203) packet colour words `code | c | (c<<8) | (c<<16)` with v0/v1 swapped | hold the constant in a variable (`code = 0x34000000;`) and store through a named block-local `cw` | sc03_089 8017D960 (m36), sc03_116 (m37) |
| (r203) byte clamp `t = c - 0x10; c = t; if (t < 0) c = 0;`, original loads the byte into the stored copy's register | `u8 c; s16 t;` (searching type / order grids with cpp + cc1 -O2 in one file is cheap: 2880 combinations, no hv runs) | sc03_117 8017F4C4 (m39) |
| (r203) constant held in an s-register across a call, used once (ours folds to addiu) | abs tests as if/else so cse loses the constant, and the single use wrapped in a marked `do { } while (0);` (raises its loop-weighted refs) | sc03_105 8017FAE8 (m39) |
| (r203) `andi s1,v0,0xFF` straight into an s-reg with `addu v1,s1` copies per block; three empty delay slots | `s16 c; c = (u8)f();` and the tail as `if (c >= 0xD) return 0; work; return 1;` | sc01_009 8017EFC4 (m40) |
| (r203) pointer s-reg vs short counter swapped (i/p) | reuse the pointer variable later blocks use (more refs, higher priority); `k = list[i]; ...; id = k;` with s32 k | sc03_124 8018654C (m33) |

Parked by r203 (best attempts in C:/tw/stage-sweep/build/work/r179/): sc03_116 8017BF14 (4763 insns, 34 lines, all register choices; m37/best.c from m37/gen.py), sc03_124 80188C68 (1 line, case-15 store from the copy's register; spec_m27_13 v0; the draft has a BACKWARD goto into case 7, not in the ruled forms), sc01_001 80181A4C (111, loop counter not eliminated: i*0x50 giv "not worth while"; spec_m30_2 b1), sc02_026 8017EA88 (33, x3, second park: regs one higher, sched1 orders 0x90-D before the W load; spec_m12_4 b1), sc01_001 8018275C (~20, a second giv d+4; spec_m40_6 b2 / spec_m40_8 b2), sc01_001 80182284 (6, v1/a0 in the last `|= 0x50000040`: local-alloc ranks the split constant above the pointer; spec_m40_2 b1), sc02_028 8017F608 (15, one register rotation; `s32 k` gives the right registers but cse folds k; spec_m40_15 / spec_m40_17 b1). -O0: sc03_119 801832E0 / 801833C4 / 801834DC, sc03_118 80183634.
Held by r203 (match, not placed; files in build/work/r179/s/<stage>/): lower-neighbour reads sc03_116 801810C8 (D_80186320 as D_8018631C[2]), sc01_000 8017D490 (((s16 *)&D_801A5720)[1] for D_801A5722), sc03_107 8017EF3C (x7: D_8019BA89[-1] for D_8019BA88, plus a comma-expression trick), sc03_124 80185C98 (a new union over D_80115118 reaching D_80115148 / D_80115158, plus a `((U16R *)&D)->v` trick); unset field sc03_116 80181204 (a stack CV4 passed as a word with .cd never set); trick form pending: sc03_010 8017C730 (x2: a dead `if / else if` chain of constant stores before the loop keeps a dead sign-extension).

Placement gaps met by r203 (tools card; notes r203_gaps.md):
1. tools/stage_bulk/clone_all.py has no `--help`: argv[0] is taken as the output root, so `clone_all.py --help` runs a full
   clone pass over EVERY stage (no --stages filter) into a folder named `--help`. r203 hit it once (0 placed; folder removed).
   Wanted: usage text on -h/--help and a refusal when the root starts with `-`.
2. stage_clone drafts keep the source file's expression but the target file's declarations; when the two files declare a
   global with different signedness (sc01_077 `extern s16 D_80126B5E;` vs sc02_000 / sc02_003 `extern u16 D_80126B5E;`),
   the draft compiles to lhu/sltiu instead of lh/slti and never matches. Same family, array vs scalar: sc03_030 declares
   `extern u16 D_800B9A02[];`, so the sc01_077 8017C974 draft's `D_800A6610[D_800B9A02]` failed to compile ("array
   subscript is not an integer") in every pass; hand clone with `D_800B9A02[0]`. r203 hand-cloned 8017EA84 in both with a
   `(s16)` cast at the compare (the twin files already cast it elsewhere). Wanted: when a source global's type differs
   from the target's, insert a cast to the source type at each use (or report the clash in the deferral).
3. (r201's gaps still open) place_stage puts a draft's function-pointer table extern after the function ("undeclared"):
   3 more times in r203 (sc03_095 8017D558, sc03_111 80180FB4, sc03_105 80180100; r201/handput2.py); non-extern forward
   prototypes dropped (sc03_105 80180100's `void func_sc03_105_80183F84(u8 *o, u8 *b);`, added by hand); place_stage
   defers a draft whose extern type clashes with the file (sc03_095 `u8 D_sc03_095_80184A4C` vs s16; sc03_107 a function
   declared `extern u8 func_sc03_107_8017D878;` because its address is taken) with no hint in the deferral line.

### r202 rows (S2 batch 9, 26 Oct; helper agents B1-B114, park agents P1-P4; merge 9173d75)

| Symptom | Source that matched | Where |
|---|---|---|
| Shared tail's stores based on an a0 copy of s0, the other arm swaps p/b registers | ONE pointer q for both: `q = o;` at the join, the tail through q (`f(q, 1)`), the else arm `q = AF(o, u8 *, 0x20)`; q set twice and live past o makes cse keep it as its class head. A static inline helper or a single `q = o` copy folds back into o; store order 0x60, 0x5C, 0x62, 0x5E fixed the schedule | sc05_003 8017ED1C (P3) |
| A function returns its callee's value but the file declared the callee `void` | `return callee();` and the callee's definition retyped s32 `return D = ...;` (same code), per the 26 Oct ruling | sc04_019 801815DC / 80181998 |
| A loop constant hoisted into an s-register that the original reloads each pass | index the table inside the loop (`p = (u8 *)&((O10C *)&D)[i];`) instead of a stepping pointer: the i*0x10C math adds RTL insns before strength reduction, so loop.c finds moving the constant "not desirable" (-dL) | sc06_011 8017F5F0 (P2) |
| A matched caller passes an int to a struct-by-value CV4 parameter ("incompatible type") | declare `s32 col` and read `*(CV4 *)&col`: same code (a1 home slot, lwl/lwr copy), the caller compiles unchanged | sc06_018 8018C334 (P2) |
| `slti` where ours gives `sltiu` testing a u8 field `< 0x15` | copy the u8 into an `s32 id` local first (`id = b[i].id; if (id < 0x15 && T[id] == 0)`); a plain u8 compare or cast gives sltiu | sc04_011 80185214 (B1) |
| Signed `slt` pointer loop end with `addiu s1, s0, 0x28` | `for (i = 0; i < 5; i++)` over `b[i]` with a `break`: strength reduction keeps the signed compare on the pointer | sc04_011 80185214 (B1) |
| The shared tail's load-store after an if/else join gets the loop increment scheduled into its load-delay slot (ours 1 insn short, the original keeps the nop) | write the tail statement at the end of both arms (the arms differ in their calls); cross-jumping merges it after scheduling | sc04_011 801863D4 (B2) |
| In an else arm the beqz/bnez sense is inverted (fall-through on the `|=` path) | `else if (i >= 0xE) { |= } else { call }`, not `else if (i < 0xE) { call } else { |= }` | sc04_011 (B2) |
| A bnez/beqz delay slot stays a nop though the next `li v0,K` could fill it, in a function that never sets v0 | declare it s32 with no return statement (v0 live at the epilogue label, reorg leaves the slot) | sc04_011 80188A30 (B3) |
| `o->field = 1; D++` with the global's lhu scheduled above the field's sh, the constant in v1 | `t = D; o->field = 1; D = t + 1;` | sc04_011 80188A30 (B3) |
| Table walk: `i=0`, the hoisted constant (`li s3`), then `p=&D` before the loop; ours puts p first | `p = (u8 *)&D + i * 0x10C;` inside the loop: strength reduction sets p up after the hoisted constant | sc04_011 (B4) |
| After a field store the original reloads it with `lh` above an unrelated global store (`lh; andi; sh D; bgez`); ours stores first or gives lhu+sll | read the field into an `s32` local before the global store (`s32 v = AF(o,s16,0x76); D = f & 0xFF7F; if (v < 0) ...`) | sc04_011 (B4) |
| Loop over an s8 terminator table turned into a pointer (`lui/addiu s0`, `lb 0(s0)`, +1 insn); the original reloads `lui at; addu at,at,s0; lb %lo(at)` | keep the int index, load the entry into an s32 local in the test: `for (i = 0; (k = D[i]) >= 0; i++) { e = arr[k]; ... }` | sc04_011 (B5) |
| Global read-modify-write (`D |= 0x200`) whose load the original puts before two object stores, ours after | read D into a u16 local before the stores, `D = f | 0x200` after them | sc04_011 80180AB4 (B7) |
| Loop store pointer set up before the counter init (ours the other way) | index the store `D[i - 0x10]` with i from 0x10, not a separate `*p++` | sc04_011 8018615C (B7) |
| Entry `move s2,a1` plus `negu a3,a1` read from the hard argument register | narrow both params (`s32 x0` / `s16 x = x0`), compute `n = -x0` from the s32 param between the two early-return tests (bnez delay slot), use the s16 x after the calls | sc04_011 8018489C (P4) |
| A value loaded into v0 per case, copied to a1 in the join's delay slot | copy it into a u16 local (`u16 l2 = lim;`) after the `== 0` test: cse cannot fold the HImode copy | sc04_011 801836D4 (P4, partial) |

Parked by r202: sc04_011 801836D4 (r200 park; P4 10 runs, 14 -> 7 lines, 60/60; s7spec_P4_5 b3): the two lhu loads swap
order in all 3 cases (local-alloc priority tie between the o-load and the e-load) plus the xor operand order.
| Global u16 load scheduled before an earlier AF store (lhu D before sh 0xF2) | read the global into a local before that store (`f = D; AF(o,s16,0xF2) = 5; ...; D = (f & 0xFFFE) | 2;`) | sc04_011 (B8) |
| An address constant scheduled after the index sra instead of between the sll and sra | the narrowed index in its own s32 local first (`i = (s16)(n * 2); b2 = D; p = &b2[i];`) | sc04_011 80186B08 (P1) |

Parked by r202: sc04_015 80180F3C (r200 park; P1 7 runs, 22/22, 10 lines; s7spec_P1_6 v2; dumps build/work/r202_P1):
every register right but the hi / lo chains swap order: sched1 hoists `r = 0`, fixing r's global-alloc priority
(3 refs / 16 insns); with lo first hi wins v0 and pushes r to t0; only a hi-first source lengthens hi, giving the wrong order.
| A global loaded for a call argument is scheduled before an AF store in the jal delay slot (ours stores first, +nop) | `t = D; AF(o,s32,0x1C) = 0x20; f(t);` | sc04_011 (B10) |
| Callee-returns-0 early exit: original `bnez` to the body, `j` epilogue with v0=0 falling through; ours inverted | `if (f() != 0) { ...; return 1; } return 0;` | sc04_011 80183258 (B10) |
| `bne` with `move a0,s0` in its delay slot where the original has a nop (a no-arg-looking jal inside an if) | call it with the object, `f(o)` | sc04_011 (B12) |
| s16 clamp branch inverted (bgtz/move vs blez) | take the u16 difference once: `u16 t = a - b; s16 d = t; s16 r = t - n; if (d <= 0) return 0; if (r <= 0) return d; return (s16)n;` | sc04_011 (B12) |
| Prologue `lhu` of a global between the param copies and `sw s1`, `move s1,a2` in the jal slot; ours hoists the load / saves s1 first | pass o to the first call (`f(o)`) AND route the sh-only param through `s16 a2 = a2_0;` (either alone fails) | sc04_011 80186300 (B6) |
| Three u8 byte clamps `lbu v1; addiu v0,v1,-K; bgez; move v1,v0; move v1,zero; sb v1` | `s16 v = *(u8 *)&G; if (v != 0) { v -= K; if (v < 0) v = 0; *(u8 *)&G = v; }` (r165 row on u8 globals) | sc04_011 8018BAC4 (B6) |
| 3-field equality test built in a2 then copied (`move v0,a2`); the original has `addu v0,zero,zero` in both bne delay slots | `if (a != b) r = 0; else if (c != d) r = 0; else r = (e == f); return r;` (&&-chain, `r = 0` first or nested ifs give a2; early `return 0` adds a j) | sc04_011 80184FC4 (B11) |
| u16 flag global loaded before the object field store; both statement orders put the object store first (or a nop) | `u16 f = D; AF(o,s16,off) = v; D = f | k;` (3 functions) | sc04_011 (B14) |
| Switch case tail `lhu 2(s0); j tail; sw v1,0x1C(s0)` (cross-jumped increment) | write `AF(o,u16,2)++;` in full in both case arms; gcc merges them | sc04_012 (B15) |
| Two pointer loads swap between a0 and v0 (an object loaded first, then its 0x20 field) | load the global into a reused local p, then the field into a second local q (`p = D_x; q = AF(p, u8 *, 0x20);`) | sc04_011 (B13) |
| An lhu scheduled after the global stores instead of between them | read the 0x20 pointer into a local first (`p = AF(o, u8 *, 0x20);`), then the stores in source order | sc04_011 (B13) |
| Struct-arg stores scheduled in the wrong order (sh zero to 0x1A..0x20 before x/y/z) | assign the zero fields right after kind, before unk8/x/y/z (sc04_016 sibling line 541) | sc04_016 (B18) |
| Stride loop over a u8[] global (`lui at; addu at,at,vN; sw %lo(sym)(at)`); split i/n init swaps registers | `for (i = 0, n = 0; i < 20; i++) { *(s32 *)&D[n] = 0; *(s32 *)&D[n + 4] = 0; n += 0x4C; }` (n step at the body's end, not in the for step) | sc04_020 8017F24C (B18) |
| Global stores scheduled out of order (loads of a param's later fields move above stores to scalar globals) | read the param's fields as `AF(u8 *a, s16, off)` not through `SV8 *a`; store the first field through a local `d = &D_x; *d = ...` also passed to the later calls | sc04_015 8017F018 (B16) |
| Two strength-reduced increments in the wrong order (pointer step before value step) | pointer step in the for header after i++: `for (i = 0; i < N; i++, p += 0x10) AF(p,s32,4) = b + (i << 8);`; store-then-increment as `AF(p,s16,0x18) = i++;` | sc04_015 8017DFCC / 8017E9B0 (B16) |
| The caller does not sign-extend the value of a callee the file defines s16 | call through `((s32 (*)(void))f)()` (the original's callee was int) | sc04_015 80180440 (B16) |
| Object store after the second field's load and before its read-modify-write; ours schedules it early | write that field's update first, the plain constant stores after it (`c->E -= x/64; c->34 = K; c->16 = K2;`) | sc05_001 (B20) |
| Table-entry copies with sh order 12/16/100/1A around a jal rand | source order 12, 16, 1A, then `0x100 = 1` (1A lands in rand's delay slot) | sc05_001 (B20) |
| A GTE sqr0 distance check compiles as calls (30 insns, 40-byte frame vs 33 / 16) | the stub lacks `#include "gte.h"` (mk.py's header leaves it out) | sc05_001 8017F1E4 (B21) |
| `move s0,v0` for the first of several OR-ed call results comes before the next call's arg moves (original: in the jal slot) | `r = 0;` then `r |= f(...)` for every call incl. the first (an inline helper also matches; `r = f(); r |= f();` or `a | b | c` do not) | sc05_008 80180E84 x4 (B23) |
| Post-increment compared with its old value; the original computes `addiu v1,v0,1` before `sll/sra v0` | explicit u16 locals: `t = AF(o,u16,0xFC); n = t + 1; AF(o,u16,0xFC) = n; r = (s16)t <= 0x40;` | sc05_007 8017D59C (B22) |
| Both paths return 1 but the slti stays in v0 | `r = cond; if (r == 0) r = 1; return r;` marked MATCH-TRICK (`if (c) return 1; return 1;` and `c || 1` fold the compare) | sc05_007 8017D59C (B22) |
| Delay slot filled with `move a0,s0` from the join target where the original has a nop, plus an explicit `move a0,s0` before a later call | pass o to the earlier call `f(o)` and wrap the body in `if (p != 0) { ...; return 1; } return 0;` (sc01_005 80180BDC form) | sc04_016 8017DDA0 (B17) |
| `v.y += A - ((rand() & 0xF) + 0x38)` refolds into `addiu -56` | the sum in an s32 local first: `r = (rand() & 0xF) + 0x38; v.y += A - r;` | sc04_016 (B17) |
| Two `lh` of one s16 field narrowed to `lhu` when feeding a u16 `+=` / an s16 store through `<< n` | write `* 64` / `* 512`, not `<< 6` / `<< 9` | sc05_008 80182560 (B24) |
| A global pointer load scheduled ahead of the o-field loads | do the field read-modify-writes through a struct type (`((ObjS *)o)->ae = ...`) | sc05_008 8017D2AC (B24) |
| Frame 8 bytes bigger than the saved registers | a plain s16 + s32 index local pair (an `u8 unused[8]` overshoots by 8) | sc05_008 8017F17C (B26) |
| Loop over a 6-byte table reading point i and i+1: 44 insns vs 41 (extra induction pointer) | `P6 *p = (P6 *)D_base + D_idx; ... p[i].x ... p[i + 1].x` (block-scope P6); pointer-step forms keep the extra register | sc05_008 8017DEC4 (B25) |
| Final range test inverted | early exit `if (d >= 0x30) return 0;` then the success code; abs as `d = a - b; if (d < 0) d = b - a;` | sc05_008 (B25) |

Parked by r202: sc04_016 8017EA74 (B17, 11 runs, 47/47, 4 lines; s7spec_B17_5 b3): prologue order only (the original
hoists `li s3,1` first; its signed slt against a precomputed end points to an int counter that biv elimination removed).
| Two failure exits (first call fails -> X; second fails -> Y then X); nested ifs invert one branch | early returns with each tail written out: `if (AF(o,s32,0xCC) == 0) { X; return; } ... if (AF(o,s32,0xD0) == 0) { Y; X; return; }` | sc05_010 801843C4 (B28) |
| 0x40 frame with a 12-byte stack vector at sp+0x20 | `u8 unused[0x10]; V3 v;` (marked MATCH-TRICK; without it the frame is 0x28) | sc05_010 80188234 (B28) |
| A call whose a0 is still o while the loaded pointer sits in a1 (ours: the pointer takes a0) | write the call `f(o)`, not K&R `f()` | sc05_009 8017DCB0 (B27) |
| Leaf function with a 0x10 frame and nothing stored | hold an address in a local at the top (`u8 *w = &D_X;`, read later): frame and the early lui/addiu without a pad (unused[4]/[8] give 0x18) | sc05_008 80182334 (B27) |
| A global set through a pointer register (`lui s0; addiu s0`, `sh v0,0(s0)`, read back `lh 0(s0)`) while its neighbours use their own lui | `s16 *p = &D_x; *p = f(o); ... *p` for that one global | sc05_010 80187D70 (B29) |
| Leaf: the object arg moves to a1 first while a0 holds a table pointer; globals loaded before an sh through a fetched pointer | load both into locals first (`q = D_tab[i]; n = D_glob; AF(q,s16,0x10A) = 1; ... n * 15`), index loop `D_x[i]` | sc05_010 801854B8 (B29) |
| `lui/addiu` address then `lhu 0(v1)` / `sh 0(v1)` on a scalar s16 global (plain `D += 0xC` gives %lo forms, 8 insns) | `s16 *p = &D; *p += 0xC;` | sc05_010 (B31) |
| Switch tree `beq 1; slti 2; beq 2; bne 3` with only case 3 doing work | list empty `case 0:`, `case 1:`, `case 2:` before case 3 (without case 0 the case-1 test is dropped); `-0x8000 - x` gives `li 0x8000` for a u16 field, `addiu -0x8000` read as s16 | sc05_010 80185920 (B31) |
| Switch with cases 1-3 roots its tree at 2 (`li 2; beq; slti 3`), the original at 1 | add an empty `case 0: break;` (adding case 4 gives a jump table) | sc05_010 (B30) |
| jalr-dispatch function: the tail's `move a0,s0` comes early, field ops through a0, the mult result in a1 | pass o to the dispatch call `D_x[AF(o,u16,2)](o);` (a0 still holds o, no move before the jalr) | sc05_010 80180AA0 (B30) |
| Null-guarded `c = p ? p->2 == 3 : 0` test duplicated in each arm of an if/else that picks the call argument | write the call and the whole `if (p == 0) c = 0; else c = ...;` inside each arm (arms differ in their argument); cross-jumping makes the shared layout | sc05_017 80180AEC (B33) |
| Default address loads into v0 before the test; `r = &A; if (x == K) r = &B; return r;` puts r in a0 | early returns `if (x == K) return &B; return &A;` (`!=` inverts) | sc05_017 80183100 (B33) |
| Switch arm `bne fail; j shared-check` (ours `beq check; j ret`) | that arm uses `if (x != 1) break;` to a `return NULL` after the switch, the other arms keep `return NULL`; forward gotos into case 8's tail | sc05_017 801831C8 (B32) |
| The same `v ? v->2 == 3 : 0` test emitted inside both arms of an if/else | a static inline helper `{ v = f(id); if (v == 0) return 0; return AF(v,u16,2) == 3; }` called once per arm | sc05_017 80180DE0 (B32) |
| Compare tree `beq v1,1; slti v1,2; beqz->default; bnez->default`, only cases 0 and 1 work | cases 0, 1 and an empty `case 2: break;` | sc05_017 8017F0C0 (B35) |
| Two tail-merged calls (shared jal, a0 set in the delay slot) feeding a 0/1/2 switch | the if / else-if chain that sets k (sibling 8017F848), then `switch (k)`; gcc cross-jumps the calls | sc05_017 8017FEBC (B35) |
| `addu a0,s0` in each arm before a shared jal, a1 a different global per arm | write the call in each arm (`r = f(o, &D_A)` / `r = f(o, &D_B)`), test r after | sc05_017 (B34) |
| `ok = t==0 || t->2 != 5 || t->34 == 2` with the original falling through on t==0 into `j join; li a1,1` | `if (t == 0) ok = 1; else { ok = 1; if (t->2 == 5) ok = t->34 == 2; }` | sc05_017 801843E0 (B34) |
| k-chain then switch with the tree `beq 1; slti 2; beqz; bnez` | list the empty `case 2: break;` (without it 39 vs 40 insns) | sc05_017 8017FC00 / 801810A4 (B36) |
| Tail `sw v0,4(v1)` with D_x reloaded in every arm | `AF(D_x, void *, 4) = &D_y;` in each arm of the if/else-if (different values); one pointer local stored once is 4 insns short | sc05_017 80183E44 (B36) |
| u16 switch `beq 1; slti 2; bnez end; beq 2`, ours `li 2; beq; beq` | add an empty `case 0: break;` (top or end); case 3 gives the wrong tree, s16 gives lh | sc05_018 (B39) |
| A fail call reached from several range checks and a null result, placed after the `bnez v0, success` | early returns with the fail tail (`func_8012CAE4(o); return;`) after each check; nested ifs put it at the end | sc05_018 (B38) |
| Same call in two switch arms with the tree `beq 1; slti 2; bnez default; bne 2` | separate case 1 / case 2 bodies plus an empty `case 0: break;` (one shared body gives a range check) | sc05_017 8017FD34 (B37) |
| `v0=0` in a branch delay slot then `li v0,1` (no sltiu) | nested `if (a == 4) { if (!(f() & 0xFF)) return 1; } return 0;` | sc05_017 (B37) |
| The original calls a function with no args that the file defines with a param | make that definition K&R (`f(arg0) s32 arg0; {`), drop the helper's cast | sc05_018 8017FB8C (B39) |
| A reloaded pointer for two stores in each switch arm gets a0 instead of v1 | a block-scope local per arm `{ u8 *q = AF(o,u8*,0x64); AF(q,s16,2)=N; AF(q,s16,0x34)=0; }` (or a static inline helper) | sc05_018 801815AC (B40) |
| An or-accumulated flag tested as `sll 16; bnez` | the accumulator as an s16 local (`s16 s = a; s |= b; ... if (s == 0)`) | sc06_000 (B43) |
| The original passes an argument to a function the file defines `(void)` | make the definition `()` (old-style, no params) and drop the cast | sc06_000 80181E98 (B43) |
| Leaf with an empty 0x10 frame (`u8 unused[N]` gives 0x18 / 0x20) | no pad: an s32 local for the shared multiply (`k = c * 3; D[0] = k * 2;`, the other stores `c * 12`); `u8 c0[0];` also works | sc06_000 (B45) |
| Table walk splitting off a second pointer at base+0x24 (extra s-register, 46 vs 42) | recompute `p = D + i * 0x2C;` inside the loop (`p += 0x2C` / struct `p++` fail) | sc06_000 (B45) |
| o and the ratan2 result swap s0/s1 | split `r = ratan2(..) & 0xFFF;` into `r = ratan2(..); r &= 0xFFF;` (the extra ref raises r's priority) | sc06_000 (B42) |
| A base register holds &sym+0x1C, with `sw zero,-0x1C(vN)` and `a2 = vN-0x1C` (sym+0x1C is a later dlabel) | a struct at the lower dlabel plus `pb = &S->field; S->a = 0; *pb = x; f(&S)`: cse derives &S from pb (`q[-7]` / `&D_X - 0x1C` leave one absolute store) | sc06_000 80182614 (B42) |
| A call to an s16-returning helper inside an addition puts the sum in v0 (original: sum in v1, call result in v0) | call it through `((s32 (*)(void))f)()` inline in the expression (a local or s32 temp fails) | sc06_000 80182950 (B48) |
| Field load (`lhu o+2`) the original schedules above a store to a scalar global; ours after | write the object fields through a block-scope struct type (`((ObjS *)o)->state++`) in natural order | sc06_000 801824D4 (B46) |
| Clamp `if (x < 0x10000) x = 0x10000;`: original `lui v1,1; slt; beqz` (constant shared with the store), ours `li 0xffff; slt; bnez` (fold rewrites LT C as LE C-1) | the bound in a local set just before the test: `lim = 0x10000; if (AF(o,s32,0x204) < lim) AF(o,s32,0x204) = lim;` | sc06_000 (B47) |
| do-while over s16 pairs: ours hoists the -1 test constant into s3 (frame 0x28 vs 0x20), the original reloads it, end compare `s2 = s0 + 8` | an index loop `i = 0; do { .. p[i*2+1] .. p[i*2] .. if (.. && i == 2) ..; i++; } while (p[i*2] != -1);` | sc06_000 (B47) |
| Table index re-read for a post-increment: original lw / addiu / sll / sw (index+1 stored before the table load), ours after | `D[AF(o,s32,0x30)++ * 4]` inline, no local for the index | sc06_008 (B50) |
| `ori v0,zero,0xFFB0` where ours is `li v0,-80` in a 16-bit store of `C - s16global` | cast the s16 operand: `0xFFB0 - (u16)D_800B9AB8` | sc06_000 80185D24 (B49) |
| Loop over o's pointer slots with registers swapped / the base folded into the load offset (`lw 204(s0)` vs `addiu s0,a0,0xCC; lw 0(s0)`) | `u8 **p = (u8 **)(o + 0xCC); ... p[i]`, indexed, not p++ | sc06_000 80182BB8 (B49) |
| The function returns its callee's value implicitly (v0 untouched after the last jal) and a matched caller uses it | `return f(..);` with f's extern retyped s32 in that file (same code) | sc06_000 80184AA8 / func_8002D4C8 (B50) |
| Switch on an s16 field compiled as lhu / addiu -N / sll16 / sra16 / sltiu jump table | plain `switch (AF(o, s16, 0x70))` with the case bodies in the asm's order (or `k = AF(o,u16,0x70) - 3` switched on) | sc06_006 (B52) |
| An 8-byte gap above 5 outgoing stack args (0x24, saves at 0x30) | no pad: gcc rounds the 0x24 args area to 0x30 (`u8 unused[8]` overshoots to 0x48) | sc06_006 8017D9E4 (B52) |
| `o->34++` loaded after two global `sh zero` stores; the original loads it before them (after the jal) | read it into a local first: `v = AF(o,u16,0x34); D_a = 0; D_b = 0; AF(o,u16,0x34) = v + 1;` | sc06_006 (B53) |
| Two stores in a counted loop swapped, the constant's `li` after `move v1,zero` | do-while `j = 0; ... } while (++i < 16);` with the constant in a local set between the counter inits (`i = 0; one = 1; j = 0;`) | sc05_018 80180D40 (B41) |
| A global array address hoisted into s0 across a call taking the same symbol (giv reduced to a walking pointer) | a separate byte-offset biv `j += 16` with `AF(D_sym, s16, j)` (keeps `lui at; addu at,v1; sh %lo(sym)`) | sc05_018 80180D40 (B41) |

Parked by r202: sc05_018 80181294 (B41, 11 runs, 17 lines, registers only; s7spec_B41_1 b1): the original's sched1 pulls the
g-field extraction ahead of the first mult so `k = 0x1000 - t` gets v0 and c&0x1F a2; ours gives c&0x1F v0 (all 40 statement
orders, types, K&R / ANSI u16 params, k/t reuse tried).
| `(x & 1)` test with the arms in the wrong order (beqz vs bnez) | `if (!(a & 1)) return s16 field; return (0x1000 - u16 field) & 0xFFF;` | sc06_010 (B55) |
| A global load the original schedules before a `x->f++` store (ours after, +2 insns) | read the global into a NEW local just before the increment (`g = D; o->f++; if (g == 0)`) | sc06_013 / sc06_011 (B56) |
| Loop store base strength-reduced to `o+0x12` (`addiu s1,a0,18`, stores at -2/0) | index the array `((XY *)(o + 0x10))[i].x / .y` (keeps `move s1,a0`, offsets 0x10/0x12) | sc06_006 8017F4C0 (B51) |
| Loop counter and pointer swapped between s0 and s1 | later loops get their own counter j; first loop `for (i = 0, p = D; i < 12; i++, p++)`; D_801F85EC retyped to the `E54[]` array it is indexed as | sc06_006 8017F308 (B51) |
| `move v0,zero` hoisted above the last stores (stored values in v1/a0 instead of v0/v1) | `do { return 0; } while (0);` marked MATCH-TRICK | sc06_006 8017CE7C (B54) |
| Table entry fields addressed through two splat symbols (%hi/%lo of D_X and D_X+4, same index) | two separate `u8 []` externs, each indexed `+ i * 20` | sc06_006 8017FECC (B54) |
| The 0x8000 store compiled as `ori v0,zero,0x8000` not `li v0,-32768` | store through a u16 field (`AF(o,u16,0x5C) = 0x8000`); the global load after the field load: `AF(o,s16,6) > D_x`, not `D_x < AF(...)` | sc06_014 (B58) |

Parked by r202: sc06_006 8017E078 (B51, 8 runs, 10 lines; s7spec_B51_5 b4, also needs a `u8 unused[8]` pad): the 12-bit unpack
puts the word load in v1 and temporaries in v0, the original the reverse.
| The original keeps a pointer to a global's +6 field and gets the vector base as `addiu a0,a3,-6` (splat names the higher address) | declare the vector at its real lower address (`extern s16 D_80126CB4[];`), test `D_80126CB4[3]`, pass `D_80126CB4` | sc06_014 8017E8D8 (B57) |
| A sh shared by two state values (v0 = 1 or 3 in branch delay slots), the rand arm falling through | nested `if (x == 0) { if (call() != 0) {rand arm} else state = 3; } else state = 1;` (flat else-if / early returns: 65 vs 63) | sc06_014 8017E3B8 (B57) |
| The sh store comes after a global's lh, in the delay slot of the branch on it; ours stores first | `s32 k = D_global;` between the two field stores (sb 0xC1, sh 0x5E), then test k (an s16 local gives lhu+sll/sra) | sc06_016 (B62) |
| A nested if/else picks a lui constant whose shared store gets v1 (original v0) | store the field directly in each arm (`if (x) AF(o,s32,0x10) = A; else AF(o,s32,0x10) = B;`); ternary / local give v1 | sc06_016 (B62) |
| A store to o should go through the call-argument copy (`sw v0,0x1C(a2)` after `move a2,s0`) | `((s32 *)o)[7] = 0x18` (AF stores through s0) | sc06_016 8017EAE4 (B63) |
| Two stores come out in reverse order | swap the two statements in the source | sc06_016 8017E96C / 8017E114 (B63) |
| Inner switch tests `beq v,2`, then `slti 3 / beqz default`, then `bltz default` | `case 0: case 1: X; break; case 2: X; break; case 3: default: Y;` (case 3 sharing default's label makes 2 the root) | sc06_016 80181EE8 (B61) |
| A loop hoists only the first compare constant and store value; later ones reloaded in delay slots | index the globals with the counter (`D_FB68[i] = src[i];`), not walking pointers (+4 insns) | sc06_016 801813B0 (B61) |
| Table-walk prologue sets the counter (`move s2,zero`) before the base (`lui/addiu s1`) | `for (i = 0, p = &D; ...)` with i first | sc06_022 8017EFE0 (B64) |
| abs of an s16 difference (`sll 16; bgez; move a0,v1; negu a0,v1`) | an `s16 d` local: `d = A - B; if (d < 0) d = -d;` | sc06_022 (B65) |
| An 8-byte global copied to the stack with lwl/lwr pairs | `SV8 v = *(SV8 *)&D_80126940;` (u8 extern cast; the 2-byte alignment gives the unaligned copy) | sc06_024 (B66) |
| `lw 0x20(v0)` then `addiu v1,v0,0xC` (no separate register for the loaded pointer) | `p = AF(AF(o,u8*,0x20),u8*,0x20) + 0xC;` in one expression | sc06_024 (B66) |
| A jump table where some case values jump to the second body, emitted in that order | list the case groups in the order their bodies appear in the asm (check the jtbl words in data.s) | sc06_025 (B69) |
| Copy-loop counter increment scheduled before the load (`addiu a3,a3,1; lhu; addiu a2,2; sh`) | `j = 0; while (j < n) { j++; *dst++ = *src++; }` | sc06_025 (B68) |
| Stores out of source order after two divides | compute the quotients into locals and the global into g first, then the stores in the asm's order | sc06_025 8017FF4C (B68) |
| Jump table from index 0 while the first real case is 3 (no `addiu -3`) | list the empty low cases `case 0: case 1: case 2: break;` | sc06_025 80182170 (B67) |
| The original fills the bgez delay slot from the fall-through (`lui 0x8000`), ours from the target | test the sign bit `if (AF(p,u32,4) & 0x80000000) { |= 0x80000000 } else { &= 0x7FFFFFFF }`, not `< 0` | sc06_016 8017F694 (B59) |
| Loop counter in s0 and object in s1 (swapped), `move a0,s0` missing from the loop head | pass o to the call before the loop (`r = f(o)`) though a0 holds it: the extra use lifts o above i | sc06_016 80181840 (B59) |
| A flat if-chain puts the `== -1` special arm inline; the original branches it to the tail | `if (g != -1) { if (a == b && c >= d) { if (e >= f) {...; return 1;} return 2; } return 2; } return special;` | sc06_025 80180808 (B70) |
| Three helper calls whose args (andi/srl of one param) are all computed into s-registers before the first jal | assign every argument to its own local first (`r = c & 0xFF; g = (c >> 8) & 0xFF; b = (c >> 16) & 0xFF;`), reuse them for the results | sc06_025 80182090 (B71) |
| Signed lh of a u16 global reloaded with lui/%lo each time (`*(s16 *)&D` caches the address) | a plain value cast `(s16)D_x` on each read | sc06_025 80182268 (B71) |
| A global loaded straight into the saved register; ours loads into v0 then addiu into s0 | two statements: `v = D_x; v += 4;` | sc06_025 801842C0 (B72) |
| A global address hoisted into a register in the preheader AFTER the loop's other constants | a block-scope `s16 *d = &D_x;` inside the if body within the loop (before the loop / at the body top puts the address first) | sc06_027 8017D9E0 (B74) |
| `&D_80126B58` loaded into s0 before the switch branch, shared by several calls | `u8 *s = &D_80126B58;` as an initialised local at the top, calls through s | sc06_027 8017D688 (B74) |
| One offset register for two tables (`lui at; addu at; sh %lo(sym)(at)`), the constant init before the offset's `move v1,zero` | compute the offset inside the loop: `for (i = 0; i < 4; i++) { off = i * 0x104; *(s16 *)((u8 *)&D_A + off) = 1; *(s16 *)((u8 *)&D_B + off) = i; }` | sc06_025 8017E95C (B73) |
| `v == 6 ? 0 : v != 7` with `bne` to the sltu tail and `v0 = 0` in the slot; ours `beq` | a u16 local: `if (t != 6) return t != 7; return 0;` | sc06_025 80180EE8 (B73) |
| A frame address used as several call args (&m) held in an s-register; the original rebuilds `addiu aN,sp,K` at every call | wrap each call in a `static inline` helper taking the pointer (the inlined arg goes straight to the hard register); caveat: a local at sp+0x10 passed so is itself held | sc06_029 8018A180 (B75, partial) |
| Two allocations where the second failure frees the first and falls into the shared failure tail, success last | two early-return ifs, each writing the full failure path (free; fail; return), success after them | sc06_029 80186214 (B78) |
| A scalar global load the original schedules above stores through o->0x20->field | do those stores through a block-scope struct pointer `AF(o, Sub *, 0x20)->field` | sc06_029 80185D44 (B77) |
| abs of (x+K) with `bltz` to a `-K - x` arm (no negu), the positive arm inline | `if (x + K >= 0) r = ((x+K)<<12)/D; else r = ((-K - x)<<12)/D;` | sc06_029 80188490 (B77) |

Parked by r202: sc06_029 8018A180 (B75, 6 runs, 3 lines; s7spec_B75_3 b2): &s.v[0] at sp+0x10 held in s0 across the calls
(pushes o to s1); the source likely used a call macro with a block per call (several do-while(0)s: rejected).
| Callee-saved registers handed out in reverse (o in s2, not s0) around a table jalr with no `move a0` before it | pass o to the table call `D_tbl[AF(o,u16,2)](o);` | sc06_029 8017EB24 (B79) |
| A u16 global stored with a negative constant gives `li v0,0xff00` (original `addiu v0,zero,-0x100`) | keep the u16 extern, store `*(s16 *)&D_x = -0x100;` | sc06_029 80186044 (B79) |
| a0 copied to s0 three times (bne / jal / j delay slots); the else arm reads o via a0 before a shared tail call f(o) | write the tail call in both arms: `if (g(o) == 1) { h((s32) o); f(o); } else { ...; f(o); }` | sc06_029 (B81) |
| A shared global's halfwords stored as 4C, then 4A, then 0 | `AF(&D,s16,0) = ...; AF(&D,s16,2) = AF(&D,s16,4) = k;` (a chained store writes the innermost first) | sc06_029 (B80) |
| Stack-struct register choice off (the 0x808080 and o->1C registers swapped) | do the OR into the variable itself before the subtract: `a = a | (a << 8) | (a << 16); c = 0x808080 - a;` | sc06_029 80185214 (B76, partial) |

Parked by r202: sc06_029 80185214 (B76, 10 runs, 5 lines; s7spec_B76_7 v10): sched2 puts the `sw flag` (0x50) right after
its lui; the original after `lw 0x1C` and `li -0x40` (sw ra one slot earlier).
| A word-copy loop `lui at; addu at,at,v1; lw %lo(sym)(at)` with the counter stepping by 4 against `slti 0x2C` | `for (i = 0; i < 0x2C; i += 4) AF(dst, s32, i) = AF(src, s32, i);` | sc06_029 (B83) |
| The original falls through to `j epilogue; v0=0` with the work after a bnez; ours ends with `return 0` | `if (cond) { work; return 1; } return 0;` (not an early `if (!cond) return 0;`) | sc06_029 80187CE4 / 80183848 (B82), 80180F88 (B84) |
| The call result and the loaded field in swapped registers in `field += r; return r == 0;` | give the first call's result its own local (`t = f1(...); r = f2(..., t, 8);`) | sc06_029 801870D4 (B82) |
| Loop-invariant `sll a0,v0,3` of a field kept outside the loop (ours inside) | compute it into its own local before the loop: `k = AF(o,s16,0x70) * 8;` then `((u8 **)&D)[k + j]` | sc06_029 (B84) |
| A field reloaded after its own increment (`addiu; sw 0x1C; lw 0x1C` before each mult) | `n = AF(o,s32,0x1C) + 1; AF(o,s32,0x1C) = n;` with n only in the first product, AF reads after | sc06_030 (B87) |
| Inner if/else whose sound-call arm is the inline fall-through, the arg setup before the state store | `>= 5` with the other arm first, each arm with its own tail written out | sc06_030 8017FCF4 (B86) |
| A table loop with a second pointer at p+2; ours does `i++` before that pointer's `+= 0x10C` | `for (i = 0; i < 0x60; i++, p += 0x10C)` with p set before the loop | sc06_030 (B86) |
| A table walk whose constants (li 0x315, li 1) load BEFORE the table base's lui/addiu, the pointer stepped in the bnez slot | `for (i = 0; i < N; i++) { u8 *p = &D_tbl + i * 0x10C; ... }` (or `((Ob *)&D)[i]`); `p = &D` walks put the base first | sc06_033 (B88) |
| The bgez slot after a signed `/4096` gets `move a0,s0` (original nop, the sra before the arg moves) | build the packed argument as its own statement `v = v | (v << 16 | v << 8); f(o, k, v);` | sc06_033 (B88) |
| The original reloads `lui; lh %lo(D_80126B5E)` after each AF word store; ours CSEs the loads or holds the address | these are the high halves of the V3 D_80126B5C: `(*(H *)&D_80126B5C).xh` with `typedef struct { s16 xl, xh, yl, yh, zl, zh; } H;` | sc06_029 80189B74 (B85) |
| A 16-byte-entry loop keeping two address registers (a0, a0+0xC), `i++` at the top | a block-scope struct typedef and `for (...; i++, e++)` | sc06_029 80182334 (B85) |
| Register swap in a two-table lookup (fe*4 / t*8 / base) | update the field in place `AF(o,u16,0x70) &= 0xF;` then index with it (not a local t) | sc07_000 (B89) |
| Two loop increments swapped (`addiu s2,1` in the rand jal slot, then `addiu s1,0x20`) | both in the for header: `for (i = 0; i < 3; i++, y += 0x20)` | sc07_000 (B89) |
| A counted loop (i += 2) where the original uses one pointer for both fields; `p->x; p->y; p++` carries a second pointer at p+2 | cast the array to a 4-byte element type and index with the counter: `XY *p = (XY *)D_arr; p[i].x += ...; p[i].y += ...;` | sc07_000 80180ED0 (B90) |
| A MoveImage call with an 8-byte stack rect, the y store in the jal delay slot | plain field stores in x, y, w, h order with a block-scope RECT typedef (the stage does not include psyq.h) | sc07_000 8017F4F8 (B93) |
| `|= 0x10` on a pointer field sits behind a global `= 0` store; the original loads before and ORs after | the pointer-field store through a block-scope struct type (`AF(o, T20 *, 0x20)->f2C |= 0x10;`) written before the global store | sc07_000 8017EC00 (B92) |
| Frame 8 bytes too big with `*(s32 *)(D_u8tbl + i*8)` stores then a call taking the same table (a never-set pointer pseudo in `(use (reg))`) | declare the table as a real array `extern s32 D[][2];`, index D[i][0] / D[i][1] / D[i] | sc07_000 80181528 (B91) |
| The `lw 0x64` / `lhu 0x36` pair scheduled before the `o->2 += 1` load/store | write the 0xFE store `AF(o,s16,0xFE) = AF(AF(o,u8*,0x64),s16,0x36);` before `AF(o,s16,2) += 1;` | sc07_001 (B95) |
| A two-case switch where each arm gets a value from a different call, then the same `if (v) o->34++` tail | write the tail in full in each case (cross-jumping makes the shared `j`) | sc07_001 (B94) |
| switch(global) with the constant 1 kept in an s-register across a call; cases 1 and 2 share the store tail | list `case 0: break;`, case 1 with early `break`s falling through into `case 2: D = 1; break;` | sc07_007 801819BC (B96) |
| A loop-invariant function pointer loaded after `i = 0` (lui s3 after move s1,zero) | a local `g = func;` just before the for, compare against g | sc07_007 8017F250 (B96) |
| The camera-preset family (D_80126954..D_8012697A stores, func_8012A018, then an 8-byte lwl/lwr copy into D_801274E8/F0) | stores in field order, copy with `*(B8 *)&D_801274E8 = *(B8 *)&D_x;` (the scheduler reorders the zero stores) | sc07_007 8017D350 / 8017D4E4 / 8017D288 (B97) |
| The prologue loads D_801151D4 into s1 before `sw s0`; ours saves s0 first | call the state check K&R with no args, `func_sc07_007_80180F84()` (a0 still holds o); f(o), a local copy or an early return fail | sc07_007 8017F478 (B98) |
| A global's address rematerialised (lui/addiu, lhu 0(vN)) for a read-modify-write with address/value registers swapped | a pointer local per global (`p = &D_EC; (*p)--;` then `q = &D_E8; if (--*q < ...)`); one shared pointer swaps v0/v1 | sc07_007 8017E350 (B99) |
| `&D` loaded into a register before an if/else whose arms each add +4 (ours folds `%lo(D+4)`) | `u8 *b = &D;` first, then `if (o == 0) p = b + 4; else p = o + 4;` | sc07_007 80181494 (B101) |
| "return 1 when f() <= N, else work and return 0", `addiu v0,zero,1` in the bnez slot | `if (f(...) > N) { ...; return 0; } return 1;` | sc07_007 8018152C (B101) |
| Copying a function pointer into a table's first empty slot with `lui/addiu a1,func` before `move a0,zero` | `f = func;` before the for loop, then `.fn = f` | sc07_007 8017F120 (B100) |
| Global store `D = 1` after an object field's `lhu` (load hoisted above the sw) | write `D = 1;` first, then the `|=` through a struct type (`((ObjS *)o)->f72 |= 0x1000;`) | sc07_007 80181AA8 (B102) |
| `lui/addiu` of the table base scheduled before `sll i,2` | index the global array directly each time (`++D[i]`, `D[i] = 0x80`), not `p = &D[i]` | sc07_007 (B102) |
| `lbu v1; move v0,zero; addiu v1; sb v1` vs the original's `lbu v0; nop; addiu v0; sb v0; addu v0,zero,zero` | `do { AF(o,u8,0x15)++; } while (0);` before `return 0;` (marked MATCH-TRICK) | sc07_007 8017CDD8 (B105) |
| `j end; addu v0,zero,zero` in the slot after `bnez a0` around a `lhu a0,0(a0)` argument | an if/else into a local (`if (p == 0) v = 0; else v = *p;`), not `p ? *p : 0` | sc07_007 801813EC (B105) |
| Params o and a swapped between s0/s1 (equal refs, the shorter-lived param wins) | pass o to the first no-arg call as K&R `f(o)` (a0 already holds o: no move, but a third ref) | sc07_007 8018122C (B104) |
| Byte-copy loop `lui at,0xFFFB; addu at,at,v1; lbu -0x62B4(at)` (no reloc on the lui) | maspsx's symbol+addend: a symbol array indexed by the counter into a literal destination, `((u8 *)0x801F0000)[i] = D_sym[i]` | sc07_007 801827E0 (B104, not placed: needs a symbol at 80199D4C) |
| Table walk: the constants set after the base pointer's lui/addiu | compute the pointer inside the loop `p = &D_x + i * stride;` | sc07_010 (B107) |
| `r = f(); o->0x20 = r; test` gives bnez/sw on s0 not v0 | the sibling form `if ((AF(o,s32,0x20) = r = f()) == 0)` | sc07_010 80180BEC (B107) |
| A byte field plus a constant computed straight into the argument register (`lbu a0,0x30(s0); addiu a0,a0,2`), ours via v0 | split it: `v = AF(o,u8,0x30); v += 2;` | sc07_009 8017D994 / 8017DA0C (B106) |
| A global's RMW through an address register (`lui; addiu a1; lhu 0(a1); sh 0(a1)`) while its neighbour uses `%lo` | declare that global `extern s16 D[]` and write `D[0]` in every function of the file (recipes row 1068) | sc07_009 8017D0D4 (B106) |
| A byte-flag table loop needing the counter in s2 and the walking pointer in s1 | write it indexed `for (i = 0; i < 10; i++) if (D_x[i] == 0) { ...; D_x[i] = 1; return 1; }` | sc07_010 (B110) |
| Object in s1 while the field `p = o->0x20` (loaded before the call) is in s0; ours swapped | call the getter with no args `((s32 (*)())f)()` (a0 still holds o) | sc07_010 8018078C (B110) |
| A global's address held in a callee-saved register across a call, its byte reloaded after; the next global's address in a0 with a store in the delay slot | local pointers `p = &D_C00; *p = ..; f(p); q = &D_C08; *q = (*p << 4) + 0x3F; g(q);` | sc07_010 8017D708 (B108) |
| addPrim to D_800A6620[D_800B9A02] with the index reloaded through a held address register, masks / base permuted | the PTag bitfield link with the index read as `((U16R *)&D_800B9A02)->v` (confirms the r158 row) | sc07_010 801810F8 (B108) |
| s0/s1 swapped (o in s1, the child pointer in s0) where the first call has no `move a0` | pass o explicitly `f(o)` | sc07_010 80180D30 (B111) |
| s0/s1 swapped (object vs `p = o->0x20`) calling 8017DCC8 with no `move a0` | call it with no args `((s32 (*)())func_sc07_010_8017DCC8)() == N` | sc07_010 (B112) |
| A field-update block whose load/store order the scheduler sets | compile all statement orders in one spec file (24 here); the match was 0x10, 0x14, 0x18, then 2++ | sc07_010 (B112) |
| Switch tree `beq 1; slti 2; bne 2` (cases 1/2 only give `beq 1; bne 2`) | an empty `case 0: break;` written AFTER the real cases (first as `case 0: case 1:` gives bltz) | sc07_011 8017DB90 (B114) |
| A run of allocations with the fail block between the last success test and the success code | nested `if (m != 0) {...}` chain, then `if (m == 0) { fail(o); return; }` | sc07_011 8017DDB4 (B114) |
| A global's address kept in a register with RMW and a clamp | `s16 *p = &D_x; *p -= 8; if (*p < -0xFF) *p = -0xFF; D_b = D_a = *p;` | sc07_010 (B113) |
| Unrolled u8 subtract-and-clamp, all in v0, each sb before the next lbu | load into the variable first, then subtract: `v = p[0]; v -= n; if (v < 0) v = 0; p[0] = v;` x3 | sc07_010 (B113) |
| In a loop the original addresses two fields as `%lo(sym+k)(at)` from an index giv and a third via a pointer register | retype the global as a real struct array, `D[i].f` for the first two, `AF(&D[i], s32, 0x14)` for the third | sc07_010 8017F798 (B109) |
| Chained s16 store `a = b = (8 - n) * 0x600` with the 8-n and product registers swapped | `AF(r,s16,0x1A) = (8 - n) * 0x600; AF(r,s16,0x18) = AF(r,s16,0x1A);` | sc07_010 (B109) |

Placed by r205 (26 Oct evening, after LuciDin's ruling "Yes to all"; r201/r202/r203 held items): symbol split (offset form, no MATCH-TRICK mark): sc01_000 8017D490, sc01_084 801856D8, sc03_116 801810C8, sc03_094 8017D898, sc03_006 80187E24, sc03_030 801804F4, sc01_080 80181BB0, sc02_005 8018FFC4 / 8018F894 / 8018FE18, sc02_011 8018487C, sc07_010 80181C54 (all with a `/* symbol split: ... */` comment). sc06_014 8017E8D8: D_80126CB4 added to stg/symbol_addrs_sc06_014.txt, re-split (`make split-stg STG=sc06_014`), clean array form. Marked tricks kept: sc03_107 8017EF3C (x7, comma expression), sc03_124 80185C98 (U16R cast). Unset reads (PORT NOTE: undefined under cl, as the original): sc02_000 8018762C (clone sc02_003 8018762C), sc03_013 8017DD98, sc03_116 80181204. Tool gaps: tools/stage_bulk/clone_all.py takes the output root as argv[0] (no --help); tools/stage_bulk/place_stage.py crashes (`re.match(...)[1]` on None) on a draft whose function has a leading comment: put the draft with tools/put_func.py instead.

### r208 rows (decomp tools card, 26 Oct; merge 4b2d427; docs/test_infrastructure.md section 2c)

| Problem | Fix | Where |
|---|---|---|
| A draft's extern or table "undeclared" after placement; a later prototype breaks fewer-argument calls; a leading comment crashes place_stage; a stray psyq.h after a deferral | fixed in put_func / place_stage (declarations directly above the function, empty guesses kept empty, comment moved, group restored whole): no hand-insert scripts (handput2.py, hp.py, kr.py, voidput.py) needed | r208 |
| cmp_func MATCH but the link fails or reads another byte (phantom / alias symbol, a neighbour-symbol base with a negative offset) | cmp_func now says "differs; not in the image's link: SYM" or compares the negative addend; after adding a needed label to the stage symbols, rebuild the stage once so its map has it | r208 |
| A shape with C copies only in re-split images was never cloned | stage_clone reads sources from build/src/stg/<stage>.o: build the stages (`make regress` or check-stg) before a clone pass | r208 |
| Clone a source placed under a pending ruling | list it in tools/stage_bulk/pending_rulings.txt (default skip); `--allow-pending` to use it | r208 |

### r209 rows (stage -O0 units, 27 Oct; merge 7be489e; docs/test_infrastructure.md section 2d)

All 52 -O0 functions of SC03_014 / 015 / 118 / 119 are in `src/stg/<stage>_o0.c`: 21 shapes by hand (20 at the first
compile), r174's three (80183D50, 80184538, sc03_118 801833C4), m2c's 80184028, 28 clone copies. Write them in
`<stage>_o0.c` drafts and compare with `cmp_func ... 2.7.2 -O0` (cmp_par picks -O0 by itself).

| The diff shows (-O0) | Write the source as | Where |
|---|---|---|
| m2c's draft 3 instructions long (an extra `sw v0; lw v0` pair) | m2c's temps are each a stack slot at -O0: write the statements by hand; `r = f(...); return r;` gives the original's `sw v0,0x18(fp); lw v0,0x18(fp); j end` | func_sc03_014_801846E4 (x6 with sc03_118 80183178 / 801831D0 / 80183228) |
| `lw o; lw o; lw o; lhu f; addiu -1; move; sh; sll; sra; bnez` | `if (--o->f == 0)`: the pre-decrement's copy is tested; `o->f++` alone gives the same three loads with no test | func_sc03_014_80184058, sc03_118 801834DC |
| a global decremented with a copy, then reloaded for the test | `D--; if (D == 0)`; `if (++D >= 0x1E)` tests the copy instead (no reload) | func_sc03_014_80184474 |
| `sltiu v1,v0,0x10` in a counted loop | the counter is `u32` (`for (i = 0; i < 16; i++)`, the 2.7.2 `bnez body; j end` test at the top) | func_sc03_014_80184354 |
| s16 fields at 0xE2 / 0xE4 and s32 words at 0xE0 / 0xE4 in one object | two struct views of the one pointer: the file's `Obj` for the halfwords, `((ObjE0 *)o)->e0 += K` for the word (a cast costs nothing at -O0) | func_sc03_014_80184058, sc03_118 80183634 / 801832E0 |
| frame 8 bytes bigger, nothing stored there | an unused `s32` local (section 6) | func_sc03_014_80184474 |
| a clone draft of a stage with -O0 units fails "conflicting types for SV8" | fixed in stage_clone (the three units' headers were concatenated) | r209 |
| a draft placed above the file's only copy of a typedef it uses: "parse error before `*'" | fixed in put_func (the typedef moves up) | r209 |

### r210 rows (the village SC03_001, 27 Oct; merge f1bd37a)

The village (src/stage/sc03_001.c, splat's `stage` overlay: names `func_<ADDR>`, no stage infix) had 146 INCLUDE_ASMs
and no stream: `stage_clone.py --all` never targets it, so no clone pass had ever placed into it although 119 of the
146 shapes were matched elsewhere. `stage_clone.py SC03_001 <dir>` (single target) + cmp_par (TWINBLADE_OVL=stage) +
place_stage (no TWINBLADE_STG: src/stage, check-stage) placed 119 in one pass; the one-copy rest went to helpers.

| The diff shows | Write the source as | Where |
|---|---|---|
| A village function with matched twins elsewhere still INCLUDE_ASM | `stage_clone.py SC03_001 <dir>`, `$env:TWINBLADE_OVL="stage"; cmp_par.py <dir> 4`, `place_stage.py <dir>` (no TWINBLADE_STG); clone_all.py / `--all` skip the village | r210 c1 (117 + 2) |
| A clone draft "not in the image's link: D_sc03_001_<addr>" | the offset-moved name for a village target takes the stage infix; rename to `D_<addr>` (the village's name) and re-check | func_8017F13C (from sc03_124 8018236C) |
| An object field pointer loaded into a0 once and used for a state test and a call; ours loads it into v0 and again into a0 | read it once into a local: `u8 *p = AF(o, void *, 0x64); if (AF(p, u16, 2) ...) func_8012BD14(p);` | func_80186A8C / 80186B54 / 80186C54 |
| A call argument chosen by `li a0,0x10` in a bne delay slot and `li a0,0xA` on the fall-through, no s-register | a ternary straight into the argument: `func_8018766C(func_801877C0() == 3 ? 0xA : 0x10, 0x16)` (an if-assigned local gave 30 insns and a saved s1) | func_8018321C family (m3) |
| The 0 / 3 / other tree on one call (beqz, beq 3, then `j` to a shared fall-through call with its args in delay slots) | `switch (f()) { case 0: v = g(7, 0x13) != 0; break; case 3: v = 0; break; default: v = g(9, 0x11) != 0; }`; an if / else-if chain on a temp swaps the arm layout | func_80180AC4, func_80184AC4 |
| `bnez v0; li v0,2` then `li v0,1` before the `sh` | plain if / else with the store in each arm (the ternary gives the opposite order) | func_80181B40 |
| Several state arms ending in the same tail call | write the call out in full in each arm of the else-if chain (cross-jumping merges them); a state variable followed by a switch adds 4 insns | func_801840E4 |
| func_8017BEA4 has no prologue (starts `lhu v0,2(a0)`) | not a whole function: stage.yaml starts the village's own code at 0x8017BEA4, so the prologue is engine_801458E0.c's 2-insn `func_8017BE9C`; the stg yamls start at 0x8017BE9C. Needs the boundary moved (then sc03_124's func_sc03_124_8017BE9C clones) | parked, r210 |

### r211 rows (stage park round, 27 Oct; merges 50c4e5f and a607038; helper agents a1-a35; docs/test_infrastructure.md 2e)

90 stage functions from asm (128 -> 38 left, 26 of them sc07_002's): 45 of the 100 listed were never-tried leftovers
(sc04 smalls, the sc06_018 / 032 / 033 trios, 13 giants of 411-5122 insns), the rest old parks. Second rounds on
re-parked functions (a fresh agent, the first round's cause in the brief) cleared 13 of 16. Work files:
C:/tw/parks/build/work/r211/ (results.txt, list.md, spec_<tag>_<n>.txt, x_<tag>/ dumps and RESUME notes).

| The diff shows | Write the source as | Where |
|---|---|---|
| a range test's result built in t0 or a pseudo copied to v0, `addu v0,zero,zero` first in the original | nested ifs returning constants, `if (a) { if (b) return 1; } return 0;` (the return sets v0 as a hard register) | sc04_015 80180F3C (x9, + village), sc02_000 80188680 |
| `andi; andi; sll; or` (both masks first) where ours interleaves | each mask in its own s32 local, then the shift / or | sc04_015 80180F3C |
| a colour built from a call result with the wrong register in the final `or` | `c = v; c \|= (c << 16) \| (c << 8);` (one pseudo for v and the result) | sc03_118 80184E78 (x2) |
| a sched1 tie on `li a0,K` after the next argument's ori | pass the object, `f(o)`, where the stage calls f with arg0 elsewhere (a0 set twice is not birthing) | sc02_026 8017F5DC (x3) |
| insns that should follow a value-returning call stay above it (the call is a birthing insn at max priority) | make one later call a call_value: a void callee called through `((s32 (*)())f)(..)`, marked MATCH-TRICK (LuciDin 27 Oct: kept) | sc03_030 8017EEE0 |
| registers one up in a leaf (a1..t0 for a0..a3) | one s32 local reused for an early global read, a quotient and a later read (one multi-block global pseudo) | sc02_026 8017EA88 |
| a value in the wrong register because a short temp outranks it in local-alloc | one variable for the earlier value AND the later one: a pseudo that dies more than once is never local-alloc'd, global-alloc takes it after the locals | sc01_001 80182284 (`c` = D_3044 then 0x50000040), sc01_000 8017E4A0 (`c` = 0xE100001E, 0x80, the tag word), sc06_006 (partial) |
| a clamp temp merged into its copy's register (`subu a0; bgez a0`) | reuse the temp as the variable of a later test (`v = r \| g \| b; if (v == 0)`): it outlives the copy and stays the class leader | sc06_018 8018F694 (x3) |
| a global-alloc preference from the wrong operand | set_preference uses only the FIRST operand of a binary SET_SRC; order the operands, or assign to a variable live where v0 is busy (a switch variable) so the conflict prunes v0 | sc03_116 8017BF14 |
| two global pseudos tied on refs, the longer-lived must win | one do-while(0) around a one-insn statement of it INSIDE the inner loop (+1 loop-weighted ref), marked MATCH-TRICK; in straight-line code the loop notes are a sched1 barrier | sc03_116 8017BF14 |
| a whole permutation of hoisted invariants (s5/s6/s7, t8/t9) shifted by one | global-alloc's integer priority sits on bucket edges: change the loop's RTL length by one insn (`x = c->z; zh = x >> 16;` as two locals, an extra copy `zc = zb; if (zc < za) zc = za;`) | sc06_029 8017C954, sc07_000 8017CDF0 |
| the first stack local's address (sp+0x10, frame offset 0) kept in an s-register across calls | move the whole body with its locals into a `static inline` helper called once: the inlined frame base gets a const-equivalence and every frame address substitutes into the argument registers | sc06_029 8018A180 |
| `&local` passed to two calls in a long loop merged, hoisted and spilled (frame 8 too big) | a static inline helper owning the local and making the calls; a pointer that must be set before `i = 0` goes in the for-init | sc06_010 8017E764 |
| `addiu aN,sp,0x10` / a symbol address rebuilt before every jal, ours kept in s0 | one static inline helper per call step owning its own `SV8 v` (each reuses one frame slot); a helper taking `SV8 *` makes cse fold the parameters | sc06_018 8019059C / 80191C50 (x3 each) |
| a loop compare constant hoisted into an s-register next to n (ours `li v0,1` in the loop) | a local set in the for-init and compared: `for (i = 0, one = 1, q = ...)`, `== one`; a pointer in different registers in different copies of a repeated block is declared inside each block | sc07_006 80183814 |
| a stride chain's first giv "not worth while", the counter not eliminated | index the typed table `D[i].field` as the stage declares it; or end cse1's path in the body (the call written in each arm of an if, an inlined helper with early returns): the chain is recomputed, duplicate givs combine, the biv goes | sc01_001 8018275C, 80182A48, 80181A4C (111 -> 77) |
| a store that must sit before / after a load through an AF cast | AF-cast loads depend on every scalar-global store; struct-field accesses (a local typedef, or the globals as fields of their splat-split base struct through the lower neighbour) depend only on struct stores (MEM_IN_STRUCT); a plain AF store keeps its place before a scalar load | sc07_006 8017D040, sc06_018 80191320, sc06_016 8017F784 |
| a compare jumps onto its copy register (`addu a1,v0` then the slti on a1) | a narrowing copy target: `s16 a; s32 t; t = (s16)(a + 1); a = t;` (not a reg-reg copy, so optimize_reg_copy_1 leaves the compare on t) | sc01_008 8017F470 |
| a constant holder shared by two arms outranks a long-lived copy | a block-scoped variable in each arm (2 refs, short life each) | sc02_028 8017F608 |
| a dead product / sign-extension kept to the end in the original | an else-if over different conditions with one body (LuciDin 27 Oct: the three-arm `t < 0 / t > 0 / else` accepted) | sc02_021 8017DC10 |
| case 8 branches back into case 7's first block | `goto` to a label at the top of case 7 (no 2.7.2 pass creates that branch: the source had it; LuciDin 27 Oct: accepted) | sc03_124 80188C68 (x4 + village) |
| a big function that is N copies of one block, frame about N*24 with no stack stores | N calls to a static inline the stage already has (lerpv) | sc07_006 8017DC1C (1518) |
| a fresh giant renderer | check the matched stages for the same callee sequence first: four of r211's giants were sc01_000's chunk renderer (ReadGeomScreen / GsGetLs / GsSetLsMatrix, MtxDCM / ChunkDCM / GteDCM) with small changes | sc06_000 8017E35C / 8017EF68, sc06_010 8017BEBC / 8017CAD4, sc06_029 8017C954 |

r213 (27 Oct, merge 911cf1a): G14 placed after LuciDin's ruling: sc03_010 8017C730 and its clone sc03_013 8017C730, one MATCH-TRICK line `type = mid > yhi || mid > ymid || mid == ymid;` (a dead store: `type` is reset per poly; its tests keep the original's dead (s16)ymid sign-extension).

Parked by r211 (best files under C:/tw/parks/build/work/r211/; FABLE = the agents' call): sc02_000 80187738 x2 (15
lines, spec_k24_4 b3; sched1 has no memory dependence between same-base disjoint accesses: two volatiles reproduce the
order, 4 lines, spec_a2_12 v3; FABLE), sc03_092 8017E60C (5, spec_a8_8 b1; global-alloc ranks the masked value 1.33 over
the inline's s16 copy 0.5; FABLE), sc04_011 801836D4 (7, spec_a10_8; the right load order and the right registers exclude
each other in local-alloc, xor canonicalised; partial spec_a34_12 v3; FABLE), sc06_006 8017E078 (10, spec_a10_15 b1;
reusing a function-scope temp fixes the unpack but sinks `sh b,8`; FABLE), sc05_001 8017FE0C (15, spec_a13_12 v0; FABLE),
sc01_001 80181A4C (77, spec_a14_2 v2; counter now eliminated, a cse2 path break before the dir stores is missing; FABLE),
sc06_024 8017EC4C (7, spec_a20_19; an s5/s6 tie, r 2222 vs sp 2187, needs one insn of live length; FABLE). No natural
form found (a13): sc04_016 8017E960 (15, spec_a13_3 v0; only the rejected dead cycle keeps dy canonical in cse) and
sc01_080 80181D98 (19, spec_a13_7 v1; only loop notes flip the p / t priorities). HELD for a ruling: sc03_010 8017C730
(x2, 1061) with one marked dead store `type = mid > yhi || mid > ymid || mid == ymid;` (s/sc03_010/*.held).

### r216 rows (shared stage engine round 1, 27 Oct; merges c98ae6a, a14641c0, 5d770923 and b0a4c07d; Ultracode workflows)

The shared engine (src/stage/engine*.c, 0x80128158-0x8017BE9C, the same in all 140 images) from 712 INCLUDE_ASM to 18:
the m2c round with jump tables (15 placed), stage_bulk/fixdraft over the drafts that did not compile (25), then four
Ultracode workflow waves of helper agents with a fresh context per batch (smalls 4 / 33-64 insns 2 / larger 1 per agent,
a fresh xhigh finisher for each park): wave 1 (<= 64 insns) 396 of about 460 tried, waves 2 (65-160) 136, 3 (> 160) 53,
4 (wave 1's re-run) 61 / 61, and a repair workflow that made 10 matched-but-unplaceable drafts place. About 490 agents,
about 50 M agent tokens; weekly 57 -> 79 % account-wide. Work files: C:/tw/engine4/build/work/r216/ (list.md, w1-w4.json
batch lists, results_w*.json, levers_w*.txt, s/<unit>/<func>.c final drafts, spec_<tag>_<n>.txt, x_<tag>/ dumps;
tools/ show.py, mk.py, hv.py, regdump.py (CMP_TMP-aware copy), rtl.py; collect.py, kr.py, voidfix.py, tricks.py).

| The diff shows / the error says | Write the source as | Where |
|---|---|---|
| a nested scratchpad-stack push (`lw t1,0(t0); sw sp,0(t1); addiu t1,-4; move sp,t1` from 0x1F8003FC) | psyq.h `SetSpadStackNested();` ... `ResetSpadStack();` (LuciDin 27 Oct; PC twin pc_set_spad_stack_nested) | func_8014CCB4 and 17 more (18 users) |
| placing a matched draft: `too few arguments to function f` in the draft or in code already in the file | make the callee's definition K&R (`s32 f(a, b) s32 a; s32 b; {`, the file's prototypes `f();`) when all its parameters are words: build/work/r216/kr.py; preferred over a `((s32 (*)())f)(..)` cast at the call | 27 callees (func_801474EC, func_8014B310, func_80156370, EndScene ...) |
| a matched draft deferred with "incompatible types in assignment", "invalid operands", or "build differs" in another function | the draft re-declared a file global with another type: keep the file's FIRST declaration and cast at the use (`*(SVECTOR *)&D_801152B0 = ..`, `((s32 *)&D_801150E0)[i]`, `*(s16 *)&D_8011F7B4 = -0x37`); a u16 global's negative constant costs an extra `li` | the repair workflow's 10 |
| place_stage defers a whole group with no reason after "conflicting types for f" at top level | one draft's `extern s32 f();` for a callee the file defines void retyped the file's guess batch-wide: drop that draft from the group (or fix its extern) and place the rest | func_8016D5EC / 8016DA7C (r216 fixdraft pass) |
| a file-scope `extern void SetActionHandler();` in a draft breaks later callers with "void value not ignored" | leave the callee undeclared where the file relies on implicit int (the K&R void definition comes later) | func_801736B0 |
| a branch to the epilogue whose delay slot writes v0 (ours: nop) | the function is void in the original (reorg keeps v0 live at the exit of any non-void function): define it void, cast at C callers that use the value | func_8012D098, func_801508B4 |
| an s32 function's v0 at return equals a constant it just stored, no second `li v0` | no return statement; store the constant last (`return K` adds a `li`) | wave 1 s55 / s67 |
| a 5th stack argument `&local` and no moves into a0-a3 before the jal | the callee takes the caller's four arguments passed through plus the buffer, `f(a0, a1, a2, a3, buf)` (m2c drops them) | func_80147AD4 |
| a u8 field tested against scattered constants (beq on the middle value, then slti / beq per half) | a plain switch with the cases listed and `return 0` after it | func_80148980 / 801489E8 / 80148A48 |
| two and-immediates on one field (`li -0x41; and`, `li -2; and`, one store) | two statements `x &= ~0x40; x &= ~1;` (one expression folds into one constant) | func_80160A28 |
| u8 field decrement as `addiu 0xFF` with the old value tested | `t = AF(p, u8, off)--;` then test t (or `t + 0xFF`) | wave 1 s32 / s112 |
| two bit tests of one u16 field joined by && come out as one `lw; andi 0xC000; bne` against a hoisted constant | nested ifs, `if (f & 0x8000) { if (!(f & 0x4000) && ..) }` | func_8012DBD0 |
| a store at an if / else join lands one insn early (before a shift scheduled at the join) | compute the value in both arms into a local of the field's own narrow type (s16), store once after the if / else | func_80139680 (r150's park) |
| `lbu; sll/sra 24` where ours gives `lb` | read it as `(s8)AF(p, u8, off)` into an s16 local (`s16 t = (s8)AF(..) + 1;`) | func_80137DD4 (r138's park) |
| a masked u16 coordinate copied first and masked again at the setup label | an s16 local, the test as `(v & 0xFFFFU) < w`, the later use `(u16)v`: and vs zero_extend keep cse apart | func_80133AB0 (r138's park; twins 801345F8 / 80134A74) |
| a callee-saved register stored and re-loaded with a new value right after its last use, before a call | both values are ONE local in the source; reorder struct field stores (constants first) to move birth points | func_80137030 (marker family) |
| a loop whose array base is recomputed in the body, not hoisted | the source loop is a backward `goto` (label; ...; if (i < N) goto label;): 2.7.2 hoists only from loops it recognises | wave 2 l37 |
| a global pointer reloaded after every field store through it | read it as the owning struct's field (`D_80126B58.model`, not the alias `D_80126B78`): MEM_IN_STRUCT fixed address | wave 2 l27 |
| call-then-return-0/1 where the original `bnez`es to the call block | `if (v != 0) { call; return 1; } return 0;` | func_801508B4 |
| all of a pointer's fields loaded first, then all stack-struct stores | read the fields into locals before filling the stack struct (no alias proof) | func_8014AD30 |
| div with the divisor computed first and mflo into a new register | the divisor in its own local first, the quotient into a NEW variable | func_801347A0 |
| a0 copied to two saved registers at entry (`addu s5,a0; addu s6,s5`) | the narrow-parameter pattern `s32 kind0; s16 kind = kind0;` with one test on each copy | func_80134C20, func_80133CD4 |
| a then-arm `return -1` and an else-arm `return 1` whose `li v0,1` sched1 moves early | one `return 1;` after the if / else (a shared exit block; reorg fills the slot) | func_80133CD4 |
| an 8-byte lwl/lwr + swl/swr copy between fields | an SVECTOR assignment `AF(p, SVECTOR, off) = AF(q, SVECTOR, 0)` (cast at the use when the file's global is s16) | wave 1 s63 / s65 |
| `AF(p, void (*)(), off)` is a parse error | `((void (*)())AF(p, s32 *, off))(args)` | func_80144A04 |

MATCH-TRICK lines placed by r216 (one per function, checked by build/work/r216/tricks.py): about 25 frame pads
(`u8 unused[N]` / unused MATRIX, VECTOR, SVECTOR locals), call_value casts on file-void callees, three inert narrowing
copies (`x = (s16)t;`), one stack-parameter read through its address (`lim = *(s32 *)&arg4;`), two do-while(0)s around
one statement (func_8013F350, and func_80132F40 is held), a marked K&R call cast where the callee is not K&R
(func_8016345C, func_80163EC8's func_8014CA00 one).

HELD for LuciDin (matching C in C:/tw/engine4/build/work/r216/s/<unit>/<func>.c; tools/stage_bulk/pending_rulings.txt):
func_801397B0 and func_8015094C / func_80163C2C (two frame pads or pad + do-while(0)), func_8015D738 (pad + dead store),
func_80132F40 (pad + do-while(0)), func_80145C54 (one narrowing copy in each of two repeated blocks), func_8013CF68 (a
byte pointer re-pointed at each light field), func_8013D9B0 (two new gte.h macros: RGB + IRGB loads in one asm, ORGB
store through $12), func_801523F4 (four s32-defined callees called through `((void (*)())f)` casts), func_801536DC (hard
v0 `register asm("$2")`, the func_8012CB64 family), func_80172170 (a widening local in both else arms), func_80176218 (a
compare copied into a second variable in the equal arm, twice).

Parked by r216 (best spec files in C:/tw/engine4/build/work/r216/; first pass + an xhigh finisher each): func_8012CB64
(9 lines; byte-exact only with a hard v0, as r133 found), func_8013E448 (3; two passes need opposite orders of one pair:
no pseudo form satisfies both, spec_s2_5 v0), func_801416D4 (11; a switch loads each case constant fresh at its compare,
spec_s72f_4 probe), func_80136F3C (25; the register ties solved in spec_s70f_1 v1, the corner order not), func_80135EB0
(18; layout and count right, f / cy swapped in s2 / s3, spec_x8f_3 v0), func_80140958 (14; the in-loop sll solved with
`(s8)D_80115158[k << 1]`, spec_x19f_6 v1). Candidates for the Thursday / Friday Fable batch.

### r221 rows (Friday Fable batch, 30 Oct; merge 89c74e13; Fable 5.1 helper agents e1-e5, f1-f6, one function each, a fresh context per park)

The 6 shared-engine parks of r216 and the stage Fable list, Fable 5.1 high (agents inherited the model). Matched in natural forms: func_80136F3C (run 1), func_801416D4 (run 3); sc02_000 80187738 (run 2) and its clone sc02_003, sc06_006 8017E078 (run 2). Engine 18 -> 16, stage own code 36 -> 33. PARKED with the cause settled from the compiler source (register-order and scheduling rules that no statement form reached in the budget; sc04_011 and sc05_001 are one step short): func_8012CB64 (+ func_801536DC: hard v0 needs a hard-register zero live from the first block, which only jump.c's else-store hoist could give and this shape excludes), func_8013E448 (sched1 birthing vs the call-result copy, 1 line with the trick), func_80135EB0 (global-alloc priority f 12/175 vs cy 6/140 pinned by the asm), func_80140958 (a 3-register rotation: loop-weighted priorities need a 4th in-loop ref to n), sc03_092 8017E60C (cse's paradoxical-subreg fold gives the SI temp 4 refs), sc04_011 801836D4 (2 lines: the join's cse-shared sign_extend of the HImode d; loads solved), sc05_001 8017FE0C (case 0 byte-identical naturally with a two-set `m <<= 5`; case 1 one k1 / d register rotation short, 123 / 123), sc01_001 80181A4C (77 lines from two one-insn causes: jump.c's if / else hoist on the max and a non-replaceable giv copy; both ideas untested). Not reached (budget): sc06_024 8017EC4C, sc07_002's 26 (m2c triage 0 / 13 drafts; agents needed), sc04_016 8017E960, sc01_080 80181D98. Work files: C:/tw/fable30/build/work/r221/ (s/<unit>/ final stubs, spec_<tag>_<n>.txt, x_<tag>/ dumps, regress1.log, the GCC 2.7.2 source unpacked in gcc/).

| The diff shows / the error says | Write the source as | Where |
|---|---|---|
| a nonmatching function whose body a matched `static inline ..._x` helper in the same file already has (e.g. the red-X GsLINE pair) | the helper's body verbatim as the standalone function (same locals, same inline recomputation of `x - 3`, same store order); grep the file for the pattern before writing variants | func_80136F3C (r221 e3, run 1) |
| a `case K` constant loaded EARLY into a register that lives across the whole compare tree (`addiu a2,zero,2` before the sra of the argument) | a local slot number `s32 n = 2;` used in the index expression (`D_x[n * 2]`): cse's canon_reg rewrites the case compare to the oldest register holding 2 (the same cse extended block) | func_801416D4 (r221 e2) |
| a pseudo lands one register too high (a1 where the original has v1) with no scheduling difference | global.c's regs_someone_prefers: a lower-priority conflicting pseudo inherited (expand_preferences) a hard-reg preference from a dying mult / arithmetic result whose first operand was local-allocated there; narrow the sum into a `u8` / `s16` local so the addu writes a local temporary instead of a global pseudo | func_801416D4 (r221 e2): `u8 idx` for `D_8011514C + D_8011514D * D_8011515C` |

| `lhu/lh` at the block top with their `addiu/andi` mid-block, while ours sinks each load to its use and places the last `sh` early (its register reused by a later `li`) | write the loaded locals TWO-SET (`n = AF(o, u16, 2); .. n++; AF(o, u16, 2) = n;`, `k = D[0]; .. k &= 0x1F;`): a twice-set pseudo gets no sched1 birthing boost (adjust_priority 0x7f000001), so load and increment fall back to priority + LUID order and the increment keeps the load's register; keep the one value that must sit right before its store single-set. Not a memory-dependence problem: check the -dS LOG_LINKS before blaming aliasing (r211's "no dependence between same-base disjoint accesses" was a red herring; volatiles worked only because volatile also kills the boost) | sc02_000 80187738 (r221 f1, run 2; twin sc02_003) |

| the callee-saved registers of two long-lived locals swapped (s2 / s3) with the layout exact | compare their FLOW-time refs and live lengths with regdump: global.c allocates by floor_log2(refs) * refs / live_length, each asm use site is one ref and each definition one, so only a loop depth (refs x 2 inside a loop) or the birth point moves the order; rewriting the definitions (if / else-if / else, ?:, zero-init plus `\|=`, switch, narrow parameter types) never changes the counts | func_80135EB0 (r221 e5): f 12 refs / 175 vs cy 6 / 140, the original needs cy first: PARKED, no natural form (only a loop region spanning cy's definition through the `return 0` test flips it: rejected structure) |

| after a call, `x = 0; if (G < r) x = r < H; return x;` comes out with x in a1 and an extra `move v0, a1` (the original: `addu v0,zero,zero` in the beqz slot, `slt v0`) | no natural form: a twice-set local's `x = 0` is non-birthing in sched1 (priority 1) and sinks to the top of its block, ahead of the call-result copy, so x overlaps hard v0; a set-once zero is instead propagated into the return block. The do-while(0) barrier (r216's trick) fixes sched1 but its load -> zero dependency then forces the `lw` ahead of the call-result `move` in sched2 (the one-line residue) | func_8013E448 (r221 e1, 5 runs; 1 line left with the trick): compiler-divergence park |

| a word unpacked into byte fields: the original's lbu / lw of the same word put the word in v0, ours in v1 (the one-insn temporaries win local-alloc priority 2/1 over the word's 8/7) | write one byte field as a shift of the word, `out->v[4] = (u8)(w >> 8) \| ((w & 0xF) << 8);`, not a separate byte load `p[1]`: flow counts the extra ref of w (10/7) before combine's make_extraction turns `(w >> 8) & 0xFF` on a MEM-derived value back into `lbu a0, 1(a1)`; the r177 `\| Y \| Y` duplicate term was the trick version of this | sc06_006 8017E078 (r221 f4, run 2; the sibling sc06_018.c line 5232 already had it) |

| an `sh` of a per-arm value sitting at the join label before the hoisted constants, while ours schedules loads / constants first | store it in each arm (`y = ...; AF(p, s16, 0xA) = y;`): the post-reload cross-jump merges the identical tails and sched1 never sees a store in the join block | func_80140958 (r221 e4) |
| an at-form halfword read whose index shift is hoisted (`lui at; addu at,at,t3; lhu %lo(sym)(at)`) | `AF(sym, u16, k << 2)`: a shift index keeps `(plus reg sym)` in the mem; `sym[k * 2]` (a MULT under EXPAND_SUM) hoists the whole sum into a register and a `>> 16` form computes before the other deferred operand | func_80140958 (r221 e4) |
| a three-register rotation of loop locals (n / k / mask in t0 / a2 / a3 vs a2 / a3 / t0), everything else byte-identical | global.c priority with flow's loop_depth weighting (x 3 in the loop, x 2 in its preheader): count each local's weighted refs; the original's order needs one more in-loop reference to n than any natural `for (n = 0; n < 2; n++)` with `continue` gives (11 vs k's 13) | func_80140958 (r221 e4, 6 runs, 1.2 M tokens): PARKED at 14 lines, no natural 4th reference (a duplicated `if (n == 0)` costs 6 insns) |

| a register swap between an SI arithmetic temporary and its s16 copy (the temp takes v1, the copy a3; the original the reverse) | cse's paradoxical-SUBREG fold (cse.c fold_rtx ~4842) gives the SI temp every read of the copy (the compare's sign-extension, the narrowed else arm), so it has 4 refs and is allocated first; a `u16` copy keeps the compare on the copy (zero_extend is not folded) and flips the allocation, but then the compare reads the copy's register. NOTE for the recipes: global.c pass 0 on MIPS allows ANY call-used register (regs_used_so_far starts as call_used_regs); the only pass-0 exclusion is regs_someone_prefers | sc03_092 8017E60C (r221 f2, 4 runs): PARKED at 5 lines, no natural form; the twin 8017E580 matched because its argument is a plain lh load, which cse cannot fold |

| two field loads scheduled and allocated the other way round (`lhu v0 / lhu v1 / subu v1,v0,v1`: the subtrahend's register is the result's) | the e-value loaded INTO the result variable and the other into a multi-set variable (`d = e-field; d = ov - d;`): neither load is single-set, so neither gets sched1's birthing boost, order follows the source and local-alloc's QTY_CMP_PRI; two block-local single-set temps can never give it | sc04_011 801836D4 (r221 f3) |
| an e-side load lands in a1 (`lhu a1, 6(a1)`) whenever its destination is a global variable | global.c expand_preferences: an allocno that dies in the insn setting a non-conflicting allocno hands over its hard-reg preference (the parameter's a1); give the destination an EARLIER live range that overlaps the parameter (reuse it as the prologue's scratch: `d = timer; if (d != 0) timer = d - 1;`), or load into a block-local temp | sc04_011 801836D4 (r221 f3) |

| a max written as `slt v0, ay, ax; bnez; [slot] m = ax; m = ay` (no move before the compare, both arm stores after it) while ours has an extra `move` before the slt, the compare reading m and a register rotation | jump.c's if / else hoist (jump.c ~699) fires on any form whose else arm is a plain REG move (`?:`, if / else, inline max, macro), sched1's birthing boost of the slt result puts the move before the compare, and local-alloc's optimize_reg_copy_1 rewrites the compare to read m; the original's else arm was not a bare REG move at jump1 time (a value read through memory or an expression the arm computes): untested | sc01_001 80181A4C (r221 f6, region R3) |
| a pointer giv's per-iteration COPY (`addu t3, t1, zero` after the loop's active test) that ours lacks, displacing every later lui / addu / sw by one line | loop.c record_giv marks the giv NOT replaceable when its set is inside an `if` (not_every_iteration) and its uses are in a later basic block, so strength reduction keeps the pointer and emits `d = reduced_giv`; make the dir pointer such a giv (assigned on the other side of the test too, or reused across the inner loop) so cse2 cannot fold the copy: untested | sc01_001 80181A4C (r221 f6, region R2; 77 lines = R2 + R3 and the rotation they cause) |

| `n = (k + 4) * 32` must be first in its block (the beqz slot) and in a1 while e (more refs) takes a2, with no do-whiles | a two-set block-local `m = k + 4; m <<= 5;` (never `m *= 32`: expand_mult copies op0 first and cse's canon_reg rewrites the uses, so the second set is dead, the pseudo is single-set again and gets the birthing boost); r177's 7 nested do-whiles only did this by hand | sc05_001 8017FE0C case 0 (r221 f5, byte-identical now) |
| the k / d register pair in a case body rotated (k1 a3 / d t0 in the original) | global.c allocno order: d 4 refs / 38 vs k1 3 refs / 17; floor_log2 jumps at 4 refs, so one more ref of k flips it: the one accepted marked `do { j = 5 - k; } while (0);` around one statement gives it, but with `s32 n = 0;` (needed for the `j -> n` copy) the rotation comes back as k1 v1 / d a3 / n a1 (spec_f5_3 v0, 123 / 123) | sc05_001 8017FE0C case 1 (r221 f5 + me): PARKED one rotation short, next Fable day |
| the sign-extension lands in the division temp and an extra `move` of the tested value appears (`move a1,v0` where the original has `addu v0,v1,zero; addiu v0,v1,0x1F; sra a3`) | read the SAME s32 copy in the division and the test: `s32 dd = d; k = dd / 32; if (dd != 0)`. cse.c's "Special handling for (set REG0 REG1)" swaps which pseudo receives the computation when the copy's source stays live past the next label and its dest does not; a fresh `if (d != 0)` sign-extension triggers it | sc05_001 8017FE0C case 1 (r221 g1, natural) |
| two long-lived locals' allocation order will not move however the statements are reordered | sched1 (reload_completed == 0) rewrites reg_live_length from the scheduled order (sched_reg_live_length), so global-alloc's priority can only be changed through loop-weighted REF counts (flow.c reg_n_refs += loop_depth), never through source statement order | sc05_001 8017FE0C (r221 g1): k1 17, n 22, d 38 fixed by the asm |
| a case body's locals need n > k1 > d in global order with d fixed at 4 refs / 38 | only a loop weight on a statement group holding k, d and n gives it: ONE marked `do { 4 stores } while (0);` (or 3) plus the dead `s32 n = 0;` init MATCHES 123 / 123, but a do-while(0) around a group of statements is not a ruled form: HELD (tools/stage_bulk/pending_rulings.txt); the sibling func_sc05_001_8017FBB0 fills the same table entries inside a real `for` loop, so the original may have had a one-trip loop here | sc05_001 8017FE0C (r221 g1): C in C:/tw/fable30/build/work/r221/s/sc05_001/ |

### r223 rows (31 Oct): the 30 Oct rulings placed

LuciDin's 30 Oct rulings ("as recommended", then "ACCEPTED 30 Oct night") placed from the held C, each marked line kept
as accepted and marked `/* MATCH-TRICK: ... */`: func_801397B0 (pad + do-while(0)), 8015094C / 80163C2C (two frame
pads), 8015D738 (pad + dead store), 80132F40 (pad + do-while(0)), 80145C54 (the narrowing copy in both blocks),
80172170 (the widening local in both else arms), 80176218 (the compare copied in both blocks), 8013CF68 (the
re-pointed byte pointer), 801523F4 (void casts on s32 callees + pad), 8013D9B0 (two new gte.h macros) and
func_sc05_001_8017FE0C (one do-while(0) around case 1's entry stores + `s32 n = 0;`). Rulings: an unused frame-pad
local is natural (a dead variable of the original source); the same marked line repeated in copied blocks counts once
(a macro); a do-while(0) around a small group of related stores is accepted, around a whole loop body it stays
rejected. func_8012CB64 and func_801536DC (hard v0, `register asm` rejected) stay INCLUDE_ASM until the rest of the
decomp is finished.

| The diff shows / the error says | Write the source as | Where |
|---|---|---|
| `mtc2 zero,$8; lwc2 $6,0(a); lwc2 $28,0(b)` then DPCL, then `move t4,x; swc2 $29,0(t4)` | `gte_ldrgb_irgb(&col, &src); gte_dpcl(); gte_storgb(&out);` (include/gte.h, r223; PC twins in pc/gte_pc.h) | func_8013D9B0 |
| a callee the file defines later is called from a placed function (implicit int vs a later `void` definition) | a forward `extern void f();` (or `extern s32 f();`, the definition's return type) right above the placed function | r223 placements (func_80163C2C, 8015D738, 80176218) |

### r224 rows (31 Oct - 1 Nov): the main EXE round (merge 56385d1f)

The EXE's tail of 153 INCLUDE_ASM: 135 matched by one-function helper agents (Opus high, Ultracode workflows) and finishers;
every matched function's lever is in the dispatcher's notes folder r224_levers.txt. Parks, the cause each helper read:
func_80035270 (1 line: one register in a 464-insn switch), 8001EFE0 (10: three blocks of a 470-insn object drawer),
8003388C (22: registers after the func_800316F8 call), 80020DA4 (27: local-alloc qty priorities, the 16-byte frame),
80038698 (34: an a2/a3 swap, global-alloc priority of x vs the *s pointer; a do-while(0) flips it but is rejected),
80032A74 (36: frame size and three register regions), 80023BF0 (89: registers only, structure and switch tree match),
8001D3FC (97: from 1D57C on). Held for the PC (matched C in build/work/r224/held_pc): see docs/handoff.md r224.

| The diff shows / the error says | Write the source as | Where |
|---|---|---|
| a two-test jump (`beqz a1` + `bnez a1` on one register, `j end; nop`) where an if / else-if chain folds the second test | a switch on the masked flag with each case's shared prefix (`c & 0xFF`) written inside the case, the default falling off the end | func_80015908 |
| two sll/sra sign extensions before an slt come out in the other order | write the comparison the other way round (`next > b`, not `b < next`): the operand written first is extended first | func_80013154 |
| a global's address built once (lui/addiu) for a load and a store, a later store using lui at | a pointer local assigned just before that load and store (not at its declaration); the later access by name | func_8002EED8 |
| a search loop's i and a pointer giv in each other's registers | `return ++i;` for `return i + 1;` (the extra set raises i's priority) | func_800348A8, func_800331D4 |
| a table access `lui at / addu at,base,at` with an offset > 0x7FFF on every access, index stepped by 16 | a struct whose pad covers the offset, `s->slot[i].field` in a for loop | func_80018450 |
| the two mask constants 0xFFFFFF / 0xFF000000 swapped between registers around an OT link | the psyq.h addPrim / setaddr / getaddr / setlen macros (P_TAG bitfields), not hand masks | func_80016638, 8001BC6C, 8001BBBC |
| a split large-constant lui hoisted to the block top when the prim pointer advances in place between two addPrims | `q = p + 0x24; addPrim(ot, p); p = q;` | func_80015B6C |
| a load that must stay above a store through a varying pointer (sched will not hoist it) | read it through a pointer to const at that use, `((const s32 *)tbl)[i]` (RTX_UNCHANGING_P has no true dependence on the store) | func_80030F80 |
| an operand kept in its own register with the sum tied to the other operand | load it into a variable already used in another block (a dead parameter, a later temp): a global pseudo is never tied by combine_regs | func_80039308 |
| a sll 16 / beqz test of a call's result with no sra | the callee returns s16 (PsyQ's short SsVabTransCompleted): declare it so | func_80030634 |
| `li v0,1` early in the last block, a result variable in a0 + move | an early `if (!f()) return 0;` at the top and `if (x == 0) { ...; return 1; } ...; return 0;` | func_80030A14 |
| a loop over c+K1/K2/K3 addressed from one register at c+K2 | a pointer biv from the record base (`s = c; s += 8; s[K1] ...`) | func_80034314 |
| two identical `if (x) { G = 1; } return 1;` tails cross-jumped into one | write one as `if (x) { G = 1; return 1; } return 1;` | func_80035C4C |
| one s16 global read in several places: a scalar extern gives direct lui at / %lo, an array or pointer form one shared register | scalar extern; where the original hoists the address, read it through a lower neighbour `(&D_lower)[k]` | func_80030A14, 8002FF0C, 800301C8, 8002FDE8 |
| local-alloc's three-qty sort (block_alloc case 3 compares qty numbers, not qty_order) gives a register rotation | change which pseudo sched1 births first (`c[0]++` after the other loads instead of `*c += 1`) | func_80030730 |
| a `li vN,1` the original keeps between an la and the bank store, sched1 sinks it to the store that uses it (birthing insn) | ACCEPTED 1 Nov (LuciDin): `u8 one; /* MATCH-TRICK */` and one marked `do { slot.a = (s32)D_x; one = 1; } while (0);` (the loop notes are a sched barrier), then `slot.used = one;` | func_80037144 |
| two drafts declare one callee differently: the build is shorter than every draft (put_func keeps the first declaration) | K&R declarations (`extern void f();`) for callees a placed draft calls before their definition; a cast at the call for a narrow argument (`f((u16)a)`) | func_800322A8, 80021D38, 800215F4 |

PC-build rows (the EXE's matched C runs as host code in the port; port_accuracy_check is the test):

| The port check shows | Write the source as | Where |
|---|---|---|
| a crash jumping into the RAM image from a call through a game function pointer | `PS1_FN(ptr)(args)` (plain `(ptr)` under GCC) | func_80030D80, 80034DFC, 8003500C |
| host addresses in game RAM where a function's address is stored (tables, request records, callbacks) | `PS1_FN_ADDR(f)` | func_80036D58, 80035C4C |
| RAM differs after a native caller: a C callee dropped a register argument the console passes through to its handler | give the callee the real parameter and pass it on (`func_8001D388(u8 *a, s32 *x)`, `PS1_FN(tbl[k])(a, x)`) | func_8001D388 |
| a crash in translated code called with more than 8 arguments (RotTransPers4 10, RotNclip4 11) | keep the caller INCLUDE_ASM until the host wrappers pass more than a0-a7 (port card) | func_80017778 (main's func_80017294 has the same call, latent) |
| handler tables of build/pc/stubs.c library functions differ (pc_fn_addr has no rows for stubs) | keep INCLUDE_ASM until the port maps them | func_80028A48, 80028C50 |
| a K&R definition gets a generated wrapper too (duplicate symbol) | keep INCLUDE_ASM until pc/gen.py reads K&R definitions | func_80016450 |
| GsGetLw's coordinate stack (D_800C6D48) 0x48 off, host pointers in it, wrapper leftovers in matrix padding | the native frames missing from the emulated (scratchpad) stack: keep INCLUDE_ASM until the port keeps them | func_8001F9F8, 8001FC08, 800221A8 |
| a record copied with a field the C never sets | keep INCLUDE_ASM (the original copies stack leftovers) | func_80036AF8 |
| a matrix's padding halfword in game objects copies different scratchpad-stack leftovers on the fast-timing routes | keep the function whose frame no longer leaves them INCLUDE_ASM (found by bisecting on one captured word) | func_8002DC68 |
| RAM DIFFERS only in scratchpad words 0x1F8001E0-0x1F8003F7 at hash points with sp on the main stack | dead scratchpad-stack leftovers of frames native C no longer writes: the check's RAM hash rule spadstack (r224) counts them as zero; find other RAM words with TWINBLADE_CAPTURE_RANGE captures (`--set CAPTURE_RANGE=a-b/step --set CAPTURE_PARTS=rs`) diffed against main's | r224 final check |

### r238 rows (1 Nov): r224's held functions as C in the PC build

r224's PC rows above that say "keep INCLUDE_ASM until ..." are answered by the port now (docs/pc_port_log.md r238):
a matched EXE function goes into src/ and runs as C when these hold.

| The port check shows | Do | Where |
|---|---|---|
| a call with more than 8 arguments into translated or interpreted code | nothing: pc/gen.py widens that callee's wrapper to the most arguments any call gives it | func_80017778, 80017294 (RotTransPers4 10) |
| a library function's address stored in game data (PS1_FN_ADDR of a stubs.c PsyQ function) | nothing: funcs_tables.inc has rows for the stubs that run original library code | func_80028A48, 80028C50 |
| a K&R definition | nothing: gen.py reads it (declared `T f();` in the PC copy) | func_80016450 |
| RAM differs where a native function hands a stack local's address to translated / interpreted code, or its callees' frames (stored stack addresses, padding copied from stack leftovers) sit where the console's do not | add the function to pc/frames.txt: its console frame on the emulated stack (layout from a -g compile, tools/frame_layout.py) | func_80017294, 80017778, 8001F9F8, 8001FC08, 800221A8, 80036AF8, 8002DC68 |
| RAM still differs for a framed function and its cause cannot be fixed in the port | PC-only fallback: the name in pc/keep_translated.txt (runs translated; the C stays in src/) and say so | none (empty) |
| a framed function's native callers leave different stack words (packet pad bytes from colour records built over them) | already in its native entry: rc_wrap_step repeats what the old eight-word wrapper did; bisect with pc/keep_translated.txt (one windowed check per half) | func_80017778 (v4000 POLY_G4 pad bytes) |

### r242 rows (4 Nov, Wednesday Fable batch; batch 1 merge 1bd859eb; Fable 5.1 helper agents, 2-4 functions each)

| The diff shows / the error says | Write the source as | Where |
|---|---|---|
| a pointer field reloaded between stores (`lw 0x20(s0)` twice after a call, one load feeding two `sh`, then a reload for the `sb`) | the pointer as the REPEATED field expression `AF(o, u8 *, 0x20)` at each use, not a local: cse shares the load until the first store invalidates it; a local `p` keeps the pointer in a0 and drops the second lw | sc07_002 80182FE4 (a3), 80182818 (a7), 80181ED8 (a5) |
| a global store (`sw zero, %lo(D)(at)`) between a pointer load and the store through that pointer, no nop after the load | load the pointer into a temp in its OWN statement before the global store (`p = AF(o, u8 *, 0x20); D = 0; AF(p, u16, 0x10) = 0;`); nested `AF(AF(o,u8*,0x20),u16,0x10) = 0` after the store keeps the lw below the possibly aliasing sw (+1 insn) | sc07_002 8018637C (a1) |
| a search loop with three induction registers (i, byte offset, the pointer returned in the exit delay slot) and `lui at; addu at,at,off; lbu %lo(D)(at)` | `off = i * N; if (D[off] == 0) return &D[off];`: loop.c makes the pointer giv from the return's address expression; an explicit pointer or `off += N` changes the register roles | sc07_002 8017D8D8 (a1; = the out-of-line original of the file's inline helper find_slot_8017E1E8) |
| a scalar global's `lhu %lo(D)` hoisted above a u16 store through the actor pointer, ours below it | that store as a pointer index `((u16 *)o)[0x72] += ...` instead of AF(): the indexed form is MEM_IN_STRUCT_P with a varying address, so sched's true_dependence lets the fixed scalar load pass it (mirror of the r158 sc02_027 row) | sc07_002 80182F2C (a2) |
| the `lw v1,0(v0)` struct read (`g->n`) staying AFTER every sw / sh to scalar globals, while ours hoists it | the read as a scalar deref `AF(g, s32, 0)`, not `g->n`: the AF() form conflicts with every store and stays last; sched1 hoists a MEM_IN_STRUCT_P load above fixed-symbol scalar stores (the same rule from the other side) | sc07_002 801804D4 (a6) |
| a stack struct's initialiser stores in the "wrong" pair order (z, y, x) | chained assignment `d.x = d.y = d.z = 0;` stores the innermost first; plain statements store in source order; permute the statements, not the forms | sc07_002 80181C18 (a2), 80182818 (a7: `v.x = v.y = 0;` gives y then x) |
| a symbol's address kept in an s-register across a call for a group of its field stores (`sh zero, 0x24(s0)`) while its other fields use `lui at; sh %lo(sym)` | a pointer local `u8 *w = &D_X;` (any position in the first block) and the stores `AF(w, s16, off)`: the address leaves the pseudo only where cse sees the set in the same extended block | sc07_002 8017FA94 (a4) |
| a shared `jal f; move a0,s0; j end` tail reached from two conditions | `f(o); return;` written in BOTH arms (cross-jumping merges them); a goto to a shared label keeps two tails (+2 insns) | sc07_002 80183F28 (a4), 80186298 (a8) |
| a `lhu` of a field, `addiu -c` applied to the LOADED value, then the `rand() % N` remainder added | the field is s16: `AF(p, s16, off) += rand() % N - c;` plainly (GCC loads an s16 with lhu when the sum is truncated back to 16 bits); as u16 the constant lands on the remainder, because fold moves a +-constant to the other operand in the lhs's signedness | sc07_002 80182538 (a6) |
| `* -240` as `sll 4; subu; sll 4` (no negu) where `b * -0xF0` gives `sll; subu; sll; negu` (expand_mult's negate_variant) | two factors fold() does not merge: `-(b * 15) * 16` (also `(b * -15) << 4`, `(b - b * 16) * 16`); 2.7.2's fold has no NEGATE_EXPR * CST rule and does not distribute | sc07_002 801844D8 (a5) |
| a two-populated-case switch tree `beq ==1; slti v0,v1,2; bnez v0,end; li 2; beq ==2` | an EMPTY `case 0: break;` in the source: stmt.c emit_case_nodes with root 1 and leaf children 0 and 2 emits the `index > 1` split before the left leaf and jump.c deletes the left leaf's useless branch, leaving the slti / bnez; without case 0 the tree is the plain `beq 1; beq 2` chain | sc07_002 80186298 (a8) |
| an `lhu` test of a global the file declares s16 (a `(u16)` value cast still gives lh) | cast the USE: `if (*(u16 *)&D_x != 0)` keeping the file's declaration | sc07_002 80185FB0 (a8) |
| `lhu; sll 16; sra 16; mult 0x55555556 ...; sll 16; sra 15; lhu tbl(at)` | `s16 i = (s16)AF(o, u16, 0x70) % 3;` then `u16 tbl[i]` (the s16 local gives the second sign-extend before the x2 index) | sc07_002 80182E48 (a7) |
| PsyQ matrix / vector stack locals: `WMtx s; WMtx m; s32 flag;` at sp+0x10 / 0x30 / 0x50 | declaration order = frame order (first declared lowest); a 12-byte V3 local pads to the 16-byte slot (frame 0x28 for one V3 + ra) | sc07_002 8017E4D8 (a8), 80185C00 (a3) |
| a value loaded per switch arm, tested at the join, then copied to a second register in the test's delay slot (`beqz v0 / addu a1,v0,zero`), while every `s16 l2 = lim;` / `s32 l2 = lim;` loads it straight into the second register | `s32 l2 = (s16)lim;` with `s32 lim`: cse cannot fold an EXPLICIT sign-extension of an s32 (sll/sra), combine reduces it to a move after cse (lim's lh sets give 17 sign-bit copies) and cannot propagate the move across the intervening branch (LOG_LINKS stop at basic-block ends); plain and narrow copies are folded by cse's canon_reg / paradoxical-SUBREG rules inside one extended basic block | sc04_011 801836D4 (b1; r221's 2-line park: the lost line was the lim copy, not the sign_extend) |
| an abs whose delay-slot copy `m = dy` is folded into `move; bgez m; negu m,m` (cse made m canonical for dy because m lives beyond the block, cse.c make_regs_eqv) | `if (dy >= 0) m = dy; else m = -dy;` with the NEGATION in the else arm: jump.c's if/else hoist (jump.c:699) needs a REG / SUBREG / CONSTANT else source, so the copy stays in its own block after the compare and reorg fills the branch slot with it; the other two abs keep the hoisted form `ax = dx; if (dx < 0) ax = -dx;` (the same shape on the first abs leaves a `j`): only the variable whose copy outlives its source needs it | sc04_016 8017E960 (b5; r177's rejected dead cycle replaced) |
| two loop pointers with their s-registers swapped and everything else identical; regdump: the loser's in-loop refs are all real instructions (12 vs 16 refs) | HELD form (sc01_080): the loser's increment written on BOTH paths of the loop body (before an early `continue` and at the body end, or in both if arms, or `t++; t++;`): flow counts both sets (+4 weighted refs at loop depth 2, 12 -> 16 crosses the floor_log2 step), combine / jump2's cross-jumping merge them back into the original's single addiu; an index-giv form does not help: the reduced giv is born in the preheader and its short live length outranks the table pointer | sc01_080 80181D98 (b4; 113 / 113, awaiting LuciDin's ruling) |
| an SI temp and its s16 copy swapped (a3 <-> v1) with identical insns, after every priority lever | NOT a priority question: a 2-ref copy can never outrank a 4-ref source in allocno_compare; check global.c find_reg's pass-0 exclusions: regs_someone_prefers (a lower-priority CONFLICTING allocno's full preference, propagated by expand_preferences along dying copies, taken by set_preference from the FIRST operand of any SET_SRC) and hard_reg_conflicts from local-alloc'd pseudos; if every local in the temp's life is in v0, the swap is unreachable from C. Side lesson: an s32 inline parameter with `(s16)` casts at its uses makes combine's two-SETs split turn the parameter into the copy, and the cast's sign-extension is cse'd into the ELSE arm | sc03_092 8017E60C (b3; PARKED for good, 5 lines) |
| a max `slt v0,ay,ax; bnez; [slot m = ax]; m = ay` with the compare reading the abs registers | an if/else jump.c did NOT hoist (jump.c:699 needs a REG/SUBREG/CONST else source, a one-insn then arm and the else insn last before the join), filled by reorg from the fall-through thread and inverted; a hoisted form always gives `move; slt` (sched1's birthing boost of the single-set compare temp vs a multi-set m, then local-alloc's optimize_reg_copy_1 rewrites the compare to m); MAX_EXPR forms (`a < b ? b : a`) compare `target` itself. Only a dead store in an arm blocks the hoist here (a trick): no natural blocker found | sc01_001 80181A4C R3 (b2; 77 -> 67 lines with the trick, PARKED) |
| a loop giv's per-iteration copy `d = giv` that survives cse2 and flow but vanishes anyway | 2.7.2 global.c has NO pseudo-to-pseudo copy preference (set_preference records hard regs / local-alloc'd pseudos only): both take the first free register and the copy dies as `t3 = t3`; it stays only if the giv is still live at a later pseudo's birth that takes that register, i.e. if sched1 does not float the boosted single-set copy; read the sched dump's ready lists (readiness, not luid, places a boosted insn) | sc01_001 80181A4C R2 (b2) |
| after a call, `x = 0; if (G < r) x = r < H; return x;` with x in a1 and an extra `move v0,a1` (the original: `addu v0,zero,zero` in the beqz slot, `slt v0` last) | PARKED for good: the compare block needs a HARD `v0 = 0` after the call-result copy at local-alloc time (it keeps t out of v0 and its anti-dependence on the copy holds the copy back, so the lw wins the LUID tie and reorg lifts the zero into the slot); a pseudo zero has no dependence on the copy, loses to the copy's LAUNCH_PRIORITY birth boost and sinks to the block top; only jump.c's else-return hoist writes a hard zero there and it needs a ONE-insn then arm (`return r < H` is three insns at jump time); our cc1's reorg never steals from a filled `j` sequence (either thread). Lever learned: a copy of a call result to a set-once local is always emitted right before the compare that launches it unless an insn that READS the hard return register sits in the block | func_8013E448 (b7; the r216 / r221 family) |
| a loop local's register rotation where regdump shows a weighted-ref gap (n 11 refs needs 14) | check each candidate reference against the four pre-flow killers before writing variants: cse's lowpart-subreg equivalence (an s16 counter's exit test reads the SI truncation temp, not the counter), record_jump_equiv (uses in the arm the compare proves constant fold to dead copies), flow's own deletions (dead sets and self-copies go before REG_N_REFS is counted) and loop.c's move_movables threshold (extra RTL insns, even ones combine folds later, raise the loop's insn_count and flip which invariants are hoisted). Corollary for the two-increment form (sc01_080, HELD): it works only for a counter whose exit test does not read a truncation temp; with `s16 n` the multi-predecessor test loses the temp and the increments collapse to `addiu a2,a2,1` | func_80140958 (b8; PARKED for good, 14 lines) |
| two long-lived locals' s-registers swapped (f 12 refs / 175 vs cy 6 / 140; the original needs cy first) | PARKED for good: cy needs >= 10 weighted refs and every ref is an asm site; a duplicate `case 0: if (cy == 0) goto fail;` is NOT absorbed by cross-jumping (it matches the insns before a jump against those before its target label, and the tail label is preceded by a bnez) so it costs 4 insns. Lessons: a do-while(0) region around an if/else whose then arm is a constant store weights only the else arm's set (+1 per depth): loop.c find_and_verify_loops moves any block that ends in a jump out of the loop to before LOOP_BEG and inverts the branch (why r216's wider region relocated the inside block); `x = (a < b) << 5`, `? 0x20 : 0` and the if/else-if chain are the same RTL and the same ref counts | func_80135EB0 (b9) |
| a struct-member store (`((PTag *)p)->addr = x`, `((PMODE *)p)->code = c`) between GTE result reads: the original keeps ONE `lw otz` per addPrim and sinks the constant's `ori` to its `sw`, ours reloads before every use | read the GTE result as a plain scalar (`AF(&g, s32, 8)` or a scalar local), never as `g.z` (COMPONENT_REF, in_struct): a struct-member store invalidates only in_struct / varying memory (cse note_mem_written nonscalar, sched true_dependence's in_struct test) | sc06_024 8017EC4C (b6) |
| a 556-insn match whose frame is 8 bytes short (0xD0 vs 0xD8), the do-while loop form fits the frame but swaps two s-registers | keep the `for (i = 0; n > i; i++) { .. if (hit) break; }` form: combine folds `i = 0` + slt + branch into `blez n` and distribute_notes leaves an orphan `(use (reg))` that reload gives an 8-aligned slot AND that lengthens a live range by one insn, which orders the two s-registers as the original; put the missing 8 bytes INSIDE the GTE result struct (`s32 pad[2]`, the accepted unused frame pad), not as a separate array (allocated early, otz moves) | sc06_024 8017EC4C (b6, run 16) |
| `(X < 0 ? -X : X)` on an EXPRESSION X (`d / 128`) | expr.c's singleton path re-expands X for the compare: the duplicated `sll; subu` with the quotient copy is the natural result; do not hoist X into a local | sc06_024 8017EC4C (b6) |

### r240 rows (4 Nov, the ability packages' and mode overlays' last 43; Opus 5.5 high + Ultracode, one helper per function; batch 1 merge aa9559e5)

| The diff shows / the error says | Write the source as | Where |
|---|---|---|
| a store between a call's argument copy and the jal goes through a0 in the original, s0 in ours | the argument register is set TWICE in the function: the callback takes the object (`p->fn(p)`); the copy then gets no sched1 birthing boost and local-alloc's optimize_reg_copy_1 moves the store onto a0 | ovl36 func_800D1984, func_800D1B80 (FieldTask.fn retyped to take the task) |
| `li a0,K` loads after the stack-argument constant (`ori v0,0x8000`) | pass the earlier K&R call the parameter already in a0 (`f(arg0)`, not `f()`): the call reads a0, so sched1 keeps a0 = K dependent and first (r133's func_8016E1CC row, for the package clones) | ovl1c func_ovl1c_800CB944, 800CB8A4 |
| a load into a hard argument register with no later use (`lw a1` next to `jal f`) in a parked draft | check the callee's arity at its other call sites: the draft passed a phantom argument, which changed sched1 priorities | ovl2a func_ovl2a_800CB708 (func_80162FC0 takes one) |
| `lbu v1; move v0,zero ... sb v1` where the original sets the return value last | `do { return 0; } while (0);` (marked; one statement, accepted) | ovl36 func_800D1B10 |
| a packed two-byte value rebuilt (`hi << 8 | lo`, an `andi 0xFFFF` before `srl 8`, a stray copy) | a local `union { s16 w; struct { u8 lo, hi; } b; }` written field by field and returned as `.w` | ovl36 func_800D0D7C, func_800D0E30 (ClockDiff) |
| `lh v0; bgtz v0; move s0,v0` with an s16 return and a frame 8 bytes too big | load into `s32 t`, test t, then `s16 r = t;` (an s16 local's sign-extension pseudo keeps a stack slot) | ovl36 func_800D1658 |
| a small switch tests the range high bound first (slti before bltz) | write `case 2: default:` together (`case 0: case 1: A; case 2: default: B`): stmt.c's leaf range node tests low first then | ovl36 func_800D1E28, func_800D1EBC |
| an unmerged `k = 2` block mid-function (inverted beqz + j) | the odd value as the FINAL else (`... else if (x) k = 2; else k = 1;`): every k = 2 arm then cross-jumps | ovl36 func_800D1EBC |
| a register pair swapped after a narrowing copy makes the count right | declare the long-lived narrow variable before the short-lived one (allocno_compare ties go by pseudo number = declaration order) | ovl36 func_800D2D10 |
| a constant base + offset kept in its own argument register, the sum in s0 | each sum into its OWN new local before the first call (`q = C + off`), never `b += off` | ovl39 func_800CFE00 |
| `la sym` loaded before the `&A[f]` index multiply, ours multiplies first | make the packet's FIRST use a MEM through `&A[f]` (`setlen(&A[f], 5);` before `p = &A[f];`): memory_address's break_out_memory_refs loads the symbol first | ovl39 func_800CF3E8 |
| the OT frame index reloaded with `lui; lhu %lo(D_800B9A02)` after every tag store | read it in-struct through the files' own `register Work *w = &D_800AF630; ... D_800AA60C[w->frame]` (a scalar global is not invalidated by in-struct stores) | ovl39 func_800CF3E8, ovl3a func_800CF408 / CF6D0, ovl3b func_800CEF50 |
| cmp_func lists `lhu %lo(D_800B9A02)` vs `<%lo(D_800AF630+-0x5c2e)>` | not a difference: the assembler's HI16 carry for `D_800AF630 + 0xA3D2`; tools/cmp_func.py now accepts a %lo exactly 0x10000 off (r240) | the Work.frame readers above |
| a lui / ori constant split apart at the head of a store-only packet builder | the big constant's store (tpage) right after setlen, as the sibling packet builders write it | ovl36 func_800CFAD0 |
| frame `vars= 8` from a variable-index s32 table read twice around a call | declare the table as the struct it is (`FieldMapEnt {file:12, mode:4, slot:16}`): get_inner_reference leaves no orphan address pseudo; a cast at the use does not help | ovl36 func_800CFE60 (+ its four readers .file / .slot) |
| two callee-saved pseudos swapped: a long-lived pointer outranks a short flag | give the flag one more natural set: `if (v == m) mode = -1; else if (v == 0) mode = 0; else { mode = 0; f(); }` (refs 5 -> 6 lifts priority past the pointer) | ovl36 func_800CFE60 |
| a frame-address pointer set in the delay slot of an early-return branch | assign it as the very FIRST statement, before the first call | ovl21 func_ovl21_800CB82C |
| `&r` / `&m` rebuilt with `addiu aN,sp,K` at each call and global matrix copies each with their own `la` | a static inline helper that owns those locals and makes the calls (integrate substitutes the constant and frame addresses; cse has no pseudo to share); confirms r170 / r186 for the packages | ovl13 func_ovl13_800CB138 / CB56C, ovl1b func_ovl1b_800CAF94 / CB0C8 |
| ring-buffer row stores `addu v0,s1,v0` where pointer arithmetic gives `addu v0,v0,s1` | a struct with an array member, `r->e[r->idx][k]` (ARRAY_REF builds base first) | ovl35 func_ovl35_800CCDE8 |
| a global pointer reloaded after each store through another struct pointer | read the global in-struct: `g[0]->f` or `g.p->f` | ovl35 func_ovl35_800CD314 |
| a single-set s32 temp boosted to just before the branch | declare it s16 / u16 (its set becomes a subreg set, not birthing) | ovl21 func_ovl21_800CC024 |
| two equal-ref single-set locals in one block with their registers swapped | lengthen the loser's life: compute the derived value (the table-row pointer) as a variable before the other's uses | ovl19 func_ovl19_800CB578 |
| `and rX,rY,sN` with sN = -0x8000 hoisted, ours `andi 0x8000` on a u16 load | the operand a plain int (`s32 t = *src; t & ~0x7FFF`) | ovl39 func_800CFC1C |
| signed range tests whose if / goto form inverts one arm | each test as a truth conditional `(v >= 0 ? v <= L : -v <= L)` joined with `&&` | ovl2d func_ovl2d_800CB6F4 |
| a read-modify-write copy (`addu vB,vA`; `addiu vB,vB,k` in the delay slot) | through a pointer: `p = (s16 *)&G; if (*p < K) { *p += k; G2 = *p; }` | ovl23 func_ovl23_800CB0D0 |
| a bare `v = K; break;` case gone into another case's delay slot while two call cases stay separate | the bare case label as a fallthrough right before the `v = K` of the case that stays whole | ovl36 func_800D128C |
| `move v1,v0` before a compare kept, then an in-place `addiu v1,v1,k` | reuse the compared variable as a temporary inside the then-block before `x += k` | ovl18 func_ovl18_800CB168 |
| a stack-passed value reloaded right after its own `|=` store | the out-buffer a scalar local (`s32 w; f(&D, &w); w |= K;`), not `s32 w[2]` | ovl1f func_ovl1f_800CB300 |
| equal-priority stores fill a load-delay gap in the wrong order | reorder the source statements (rank_for_schedule ties: later LUID first) | ovl23 func_ovl23_800CB2AC |
| a shared clamp store with the bound in a register, a few nops short | a plain else-if with literal bounds (single-set constants, cross-jumped stores); supersedes the r137 bound-variable row | ovl21 func_ovl21_800CB4A4 |
| s-register assignment off in a straight-line packet draw | the second row as `y + 256`, not `y += 256` | ovl3a func_800CF408 |
| an s-register swap where the actor loses the priority tie and a0 is live at an early jal | pass the argument the callee was spelled without | ovl20 func_ovl20_800CB470 |
| two callee-saved pointers swapped with an early exit jumping to a shared free tail | write the tail out again in the early arm (more refs; jump2 cross-jumps the copies back) | ovl18 func_ovl18_800CB328 |
| a struct word stored through `addiu rS,rSym,off; addu rA,rIdx,rS` | the field's address in a pointer local (`u32 *t = &D[f].field; *t = v;`) | ovl38 func_800CF290 |
| an s-register copy of a new object kept for one arm only | `t = f(); o = t; m = t;` plus one marked do-while(0) around the arm's two related stores | ovl20 func_ovl20_800CB278 |
| a call value kept in v0 (test, store, a0) with an s-register copy for a use after the join | reuse the call-value variable as a temp in the skipped inner block, plus one marked dead store after the copy's last use (cse make_regs_eqv on both paths) | ovl21 func_ovl21_800CBF28 |
| a 5th (stack) parameter loaded at entry into a temp and copied to a0 at the call; ours `lw a0` at the call | declare it `T * volatile p` and read it once at the top, marked (assign_parms' REG_EQUIV lets combine sink the load past the stores); ACCEPTED by LuciDin 4 Nov (r240) | ovl19 func_ovl19_800CB9F8 |
| a wave helper reports a NEW form as HELD | re-run the file's own idiom after the neighbours are placed: the HELD wrapper may come from stale file context (func_800CF6D0's bitfield wrapper was) | process |

r242 EXE rows (the resume, 4 Nov evening; merge 0a002427, Comprehensive Test 18 / 18 PASS incl. the exclusive runs on LuciDin's go, A/B 0 / 796 hashes and 0 / 89 shots at 4:3 and 16:9, the r266 movie identical 826 / 826, launcher_check PASS):

| a global accumulator loses its register to a CSE'd base pointer (priority 23 refs / 54 insns beats 22 / 59), and a separate 2-ref local for the first byte only hands the register to a constant | read the FIRST byte of each accumulation into one shared global temp `b` (set once per block, so cse does not fold it and local-alloc cannot tie it) and start the accumulator from it (`x = b \| ...`, `x = b << 8`): the accumulator's life shortens by the load-to-use gap in every block (59 -> 39 insns) and overtakes the pointer, while the temp, dying exactly where the accumulator is born, inherits its register; write the dying byte FIRST in the `\|` (cse does not swap REG operands). global.c set_preference looks through operand 0 of an arithmetic source | func_80038698 (c1; r224's 24-line park) |
| an EXE frame 8 bytes short (0x70 vs 0x78): a 4th reload slot nothing references | reload1.c alter_reg gives a slot only to a pseudo with refs > 0, no hard reg and no equivalence, so the original's slot pseudo had a SILENT reference: combine's distribute_notes orphan `(use (reg))` (a 3-insn combine of a loop's `i = 0` + slt + branch with a VARIABLE bound; a constant bound is folded by cse before combine and leaves no orphan) that reload turns into `(use (mem slot))`; without such a loop the slot is unreachable (PARKED at 23 lines). Also: one scratch `u32 w` reused across two blocks becomes a global pseudo allocated after the locals, and local-alloc cannot tie a 3-address output to a global first operand (fixes the o / w / index registers of the pitch block); a dedicated loop counter is reversed by loop.c check_dbra_loop with the giv init after the counter init | func_80032A74 (c3; r224's 36-line park, now 23) |
| an unused s0 save with no s0 use, plus a product shifted in place (`mflo a3 .. sra a3,a3,12`) | reload spilled s0 for a GR reload of a mult result that global-alloc put in `lo` (the need vanishes in retry_global_alloc but s0 stays in regs_ever_live: saved, never used): no pad or trick is behind it; the remaining 16 frame bytes are a real unused local. The yv / xv local-alloc order is pinned by the index-order mult schedule (one mult per 12 cycles, the >>12 shifts the only fillers): PARKED at 27 lines; `x_c2\qty.py` in the r242 work folder computes each pseudo's floor_log2(refs)*refs/life from the .lreg dump | func_80020DA4 (c2; r166 / r224 / r242 park) |
| a copy `u = P` (a narrow variable from an SI expression also fed to an add) scheduled AFTER the add, so P no longer dies there and the add's result / the clamp take the wrong registers; a second clamp whose two arms land in one pseudo | when the asm shows two clamp pairs sharing the SAME two hard registers (a0 / v1 twice), the source reused ONE pair of variables for both coordinates: the 3-set `u` loses sched1's birthing boost (the copy falls back to LUID order, before the add), and the many-ref `u1` wins v1 in global-alloc so the second copy lands in a0 in both arms; the join store (`*(u16 *)(p + 0xE) = c`) written ONCE after the if / else, not in each arm | func_8001D3FC (c5; r224's 97-line park) |
| a load scheduled LATE behind an unrelated computation, with no boost and no dependence to explain it (the loop pre-test `lhu` after the colour chain) | the two were separate BASIC BLOCKS at sched time: an if / else whose arms both END in identical code (`code = 0x76000000; col = <chain>;` / `code = 0x74000000; col = <chain>;`, the chain repeated in both arms, `code` a variable set per arm, not an inline constant) is cross-jumped by jump2 AFTER sched2, the old join label before the lhu is deleted and the `lui; beqz; lui` shape rebuilt; test a block-boundary hypothesis by whether the sched2 model can keep the original's adjacency. Remaining 23 lines = the chain temps' local-alloc qty order (a 2-ref a24 cannot outrank the 6-ref a26): PARKED | func_80023BF0 (c4; r224's 89-line park, now 23) |

r242 EXE giants rows (the override run, 5 Nov; merge 7acf8f4a):

| `f(x, v, v)` compiled as `move a1,sN; jal; move a2,a1` where ours gives `move a2,sN` | made by local-alloc.c optimize_reg_copy_1 on `a1 = R` (R a SEPARATE argument temp dying at `a2 = R`, whose setter is NOT a REG-REG copy from a live pseudo), never by cse (make_regs_eqv never makes a non-fixed hard register canonical): a plain variable live after the call always gives `move a2,sN`; casts `(s16)v` reduce to a REG copy in combine and tie back; `u8 v` leaves an `andi`; a short prototype changes nothing (PROMOTE_PROTOTYPES). PARKED at this 1 line; the case-18 lookup (`r = (s32)tbl; t = (u8 *)(row * 64 + r) + col * 4;`) matches | func_80035270 (d1; r224's 4-line park, now 1) |
| a spilled invariant's reload `lw` scheduled one slot late in an if arm (after an unrelated `andi`) | sched2's schedule_select prefers a memory-unit insn among equal-priority ready insns only when the block holds 2 or more memory insns (potential_hazard multiplies by unit_n_insns - 1, zero for a lone load), so the arm's STORE must be in another basic block: assign a variable in the inner arms and store once after the inner if / else, inside EACH outer arm (not in the four inner arms, and not once after the whole if / else: there the store joins the next block's `lhu` and the 3-insn-shorter loop makes two equal-ref invariants tie in global.c's int-truncated priority and swap s7 / fp) | func_8001EFE0 (d2; r224's park, 468 / 468) |
| a shifted value computed early into a0 with its `sh` store last, where ours has `srl v0; sh v0` adjacent | assign it through a NARROW local (`s16 hh = f >> 24; v.vy = hh;`): combine makes the set `(set (subreg:SI (reg:HI hh)) ..)`, sched1's birthing_insn_p needs a REG destination, so the insn gets no launch boost, floats to the block start, lives long and local-alloc gives it a0; an s32 temporary is boosted like the direct form and changes nothing. Also: in 2.7.2 sched.c blocks are scheduled backward, anti / output links cost 1, a load is blocked from the slot right before a store unless nothing else is ready; the -dS / -dR dumps print the ready lists and the "greater potential hazard" / "blocking insn" lines | func_8001EFE0 (d2) |
| an interpolation `m = T[i] * (0x100 - f) + T[i + 1] * f; m >>= 8` with `li v0,256 / lhu v1` swapped and the second `mflo` in t0 | the accumulator as a BLOCK-LOCAL variable tied to the first table load, three statements (`m = T[i] * (0x100 - f); m += T[i + 1] * f; m >>= 8;`) and the store written INSIDE each arm (cross-jumping merges the two `sh`): its quantity (8 refs over 16) outranks the 256 constant's and takes v0; `acc >>= 8; m = acc;` is folded back by combine; `T2[i]` for `T[i + 1]` shrinks the frame by 8 | func_8003388C (d3; r224's 22-line park, 663 / 663) |
| a pitch offset whose sum must not be tied to the mask (`addu v0,a0,v0`, the x chain ahead of the table `lw`) | the mask as a once-set temp and the offset in a variable with TWO LIVES in the block (here `k`, first read from the script and stored before the call, then reused as the offset after it): a pseudo that dies twice goes to global-alloc, its a0 preference is dropped because the first life overlaps the `move a0,s1` argument setup, so it takes v0, and being set twice keeps the `addu` unboosted in sched1 | func_8003388C (d3) |
| a global that takes a HIGH register because a lower-priority conflicting global PREFERS the low one (global.c find_reg pass 0, regs_someone_prefers), where the original has the two swapped (col a0 / x t0) | give the short chain a block-local quantity in that register: write the constant as a per-arm single-set local declared AFTER the other operand's shift, the idiom of the matched sibling (`u32 hi = b << 16; u32 cg = g << 8; u32 code = K; col = hi \| (cg \| code) \| r;`): sched1 boosts its `lui` next to its use (life 2, priority 1.0), the 6-ref chain is allocated after it and takes a0, the hard a0 conflict prunes the other global's preference, and sched2 moves the `lui` back to the block top so cross-jumping still merges the arms. Grep the file for a matched sibling's statement shape before theorising | func_80023BF0 (e1, second pass; r224's 89-line park: 89 -> 23 -> MATCH) |

## func_8012CB64 (hard v0): the cause, settled from the GCC 2.7.2 source (r221, Fable)

The original's registers (x in v1, the compare temporaries in a1 / v1 / v1, `v0 = 0` in the first branch's delay slot,
`slt v0` last) are exactly what local-alloc + global-alloc produce when HARD v0 is live from the first block to the
final slt before local-alloc runs: local-alloc gives a block-local temporary the lowest free hard register (local-alloc.c
find_free_reg, no REG_ALLOC_ORDER on MIPS), so the temporaries take v1 only when v0 is live; x (global) then gets v1 by
global.c's two-pass rule (pass 0 allows only registers already used and not preferred by another pseudo, pass 1 the lowest
free). In our natural forms (`r = 0; if (a && b && c) r = z < z1; return r;`, the `&&` return chain, early returns, the
ternary) the zero is a PSEUDO (expr.c's TRUTH_ANDIF expansion stores 0 first; expand_return's "cleanups" path
always computes the value into a pseudo: stmt.c expand_return, `cleanups = 1`; expr.c "Don't move directly into a
return register"), the temporaries take v0, and the pseudo ends in v1 with a `move v0, v1`. The only pass that writes a
hard-register zero above a branch chain is jump.c's "if (...) x = a; else x = b -> x = b; if (...) x = a" (jump.c ~699,
which walks back over every condjump to the else label and hoists the constant store above the first one): it needs the
success store to be a SINGLE insn `v0 = <reg or const>` directly after the last conditional jump, but here the success
value is an slt computed after that jump (`t = slt; v0 = t`: the compare, not a condjump, precedes the store), so it does
not fire, and before combine no `(set v0 (lt ..))` exists (combine runs after the pre-allocation jump passes). A `return`
of a constant does write hard v0 directly (expand_value_return), but only in its own block. So no plain-C form gives
hard v0 live from the top; `register s32 r asm("$2")` does. Rejected 30 Oct, ACCEPTED as one marked macro by LuciDin's
ruling of 4 Nov: see the r283 rows; func_801536DC and func_8013E448 (the same family) likewise.

## r283 rows (Phase 1 close, 4-5 Nov; docs/phase1_rulings.md)

| Situation | What to do | Example |
|---|---|---|
| a result held in hard v0 across compare blocks, with no plain-C form (the func_8012CB64 family) | `HARD_V0(r) = 0;` from include/common.h, marked `/* MATCH-TRICK: see HARD_V0 in common.h */` at the use: the ONE accepted machine register in the source, only for this cause | func_8012CB64 (16), func_801536DC (73), func_8013E448 (27, r242's last line gone; the do-while(0) is not needed with it) |
| a macro that must differ between the PS1 compiler and others | test `PC` / `M2CTX` / `_MSC_VER`, never `__GNUC__`: the Makefile and cmp_func run cpp with `-undef`, so `__GNUC__` is not defined and the macro silently takes the other arm | HARD_V0 (a first version with `__GNUC__` compiled as a plain local and did not match) |
| a NON_MATCHING block in src/*.c or src/ovl38 | pc/build.bat defines NON_MATCHING, so the block IS compiled and replaces the translated original: add the name to pc/keep_translated.txt unless the C is meant to run; also compile the whole file once with -DNON_MATCHING under GCC 2.7.2, since a stub only shows the text above the function and a later typedef or forward declaration can conflict | func_80032A74, func_80035270 (kept translated; SndBank moved up, `extern void func_80035270()` -> s32). func_80020DA4 is the one NON_MATCHING body running as host C |
| a stub made by mk.py to place | it holds the whole target file above the function, including older blocks: cut at the `/* ==== r242:` marker, not at the first matching line | func_80020DA4 |

### r284 rows (other compilers first, then the source; 5 Nov; docs/compiler_survey.md)

No other compiler or flag helped: vanilla 2.7.1 and 2.7.2 are the only builds that keep all 3,387 control functions. Four parks with "no C form" verdicts then matched in plain C. **Before calling a park final, search three things the compiler-source reading takes for granted: the types (with the real SDK prototypes), the statement shape (conditional expressions, temporaries read first), and which locals are really one variable. A variable set twice ranks higher in the allocator and is never local-alloc's.** build/work/archive/r284_work.zip has perm.py and merge.py for this.

| Symptom | Fix | Example |
|---|---|---|
| `f(x, v, v)` compiled as `move a1,sN; jal; move a2,a1` where ours gives `move a2,sN` | `u8 v` AND the SDK's narrow prototype (`SsSetSerialVol(char, short, short)`), plain C. The argument conversion makes a separate temporary R past cse; combine reduces it to a copy; optimize_reg_copy_1 then gives `a2 = a1` and R dies at `a1 = R`. With s32 v the scan from `R = v` reaches v's death past the call and ties them. Earlier rows tried each half alone. Replaces the r242 row that parked this | func_80035270 |
| an SI temp and its s16 copy swapped although the temp has more refs (r221, r242: "unreachable from C") | the copy's register belongs to a variable already live before: reuse one `s16 a` for the earlier value, the masked value and the result. Set twice, it is allocated first | func_sc03_092_8017E60C: `a = AF(o, s16, 0xA0); if (a != ...) { a = (... ) & 0xFFF; a = fold_angle(a);` |
| a "largest of three" laid out as if the if / else was never simplified, a pointer copy deleted each turn | one nested conditional: `(ax > ay) ? ((ax > az) ? ax : az) : ((ay > az) ? ay : az)`. The register fixes follow from the layout, so a second "cause" can be the first one's shadow | func_sc01_001_80181A4C (77 -> 0) |
| an EXE frame 8 bytes short, a slot nothing reads | any 3->2 combine leaves i2dest's REG_DEAD note unplaced (combine.c: elim_i2 is 0 when a new i2 pattern exists), so distribute_notes writes `(use (reg))` at the last label and reload gives that pseudo a slot. A variable-bound loop is one source. Others: a table base kept for a second read in the same block (`D[i]`, `D[i + 1]`), and a `short` local folded into its load, which turns `lhu` into `lh`. Log them with an instrumented cc1 (instr.py): both SPLIT and ORPHAN events | func_80032A74 |
| that table base does not orphan: `lui t0; addiu t0` instead of `lui at; addu at` | loop.c hoisted it: it moves when `threshold * savings * lifetime >= insn_count`, threshold starting near 30 with a call in the loop and dropping 3 per move. Read both entries into locals first (`ta = D[k]; tb = D[k + 1];`) to shorten the lifetime. See the numbers with cc1 `-dL` | func_80032A74, 374-insn loop, lifetime 10 hoisted |
| `addu rd,product,base` where the original has `addu rd,base,product` the other way | hold the base in an s32, not a pointer: `s32 vb; v = (u8 *)(n * 0x48 + vb);` | func_80032A74 |
| long-lived saved registers swapped (f, cy) | reusing cy where it is dead (the box centre) gives the order, but those uses show in s2 where the original has v0; 6 lines | func_80135EB0, open |
| a merge permuter scores a form well | check the merge keeps the meaning: `x` folded into the loop counter n scored 2 and is simply wrong code | func_80140958 |
| a text experiment also changes a sibling | apply replacements only inside the function: func_80032A74 and func_8003388C share lines word for word | tryc.py SCOPE |

### r287 rows (the last NON_MATCHING and the HARD_V0 family; 5 Nov)

Two NON_MATCHING functions and all three HARD_V0 functions match in plain C, and func_80020DA4 went from 27 lines to 5. **The lever: the allocator's reference counts are taken at flow, before combine and before jump2's cross-jumping. Source repeated on several paths raises a variable's priority, then merges and leaves nothing in the asm. So a "needs N more refs than the code has" park is not settled by counting the original's instructions.** The .lreg dump gives refs and live per pseudo: priority is floor_log2(refs) * refs / live, and a ref inside a loop counts once per loop depth.

| Symptom | Fix | Example |
|---|---|---|
| a result in v0 from the first branch with `slt v0` last, `move v0,v1` in every `r = 0; if (...) r = z < z1;` form | `if (a && b && c && d) return 1; return 0;`: jump.c hoists the hard-register constant above the whole chain only when the success store is a plain constant right after the last jump, and turns the pair into the slt. r221's "no plain C form" was wrong, and no macro is needed. Inverted form: `if (all equal) return 0; return 1;` gives the xor + sltu. An `\|\|` chain does not work | func_8012CB64, func_8013E448, func_801536DC |
| a long-lived variable ranks below a neighbour by a few refs, in a function whose switch arms jump into each other (`j` into the middle of another arm, a lone `return 0` after an arm) | give each arm its own copy of the shared test and remove it after the switch: the copies count, then cross-jump into one. Case 0's jump-table entry landing on the test is the sign. Put `case 0:` last, with the final arm falling into it. If an arm has to merge with a sibling first, make it jump to a label (`goto test`) instead | func_80135EB0 (cy 6 -> 10 refs, above f) |
| a loop counter needs one more mention at its loop depth (+3 at depth 3), but a second `n++` loses the `t = n + 1; n = t; test t` tail | step on two paths through a second variable, `m = ++n; continue;` and `m = ++n; } while ((s16)m < 2);`, with n and m s32 and `(s16)n == 0` at the top. A `continue` label between increment and test makes combine fold them into `addiu a2,a2,1`; a real variable survives it. A third site adds enough insns to change loop.c's hoist threshold (threshold * savings * lifetime >= insn_count), which shows up as a lost `li s8,3` | func_80140958 |
| register rotation in one block where every value is right | the multiply order follows source order: write m[0], m[1], m[2] directly, not a temp computed before m[0]. Then hill-climb the statement order in a small stub (20 statements, about 3 compiles a second per process): 27 -> 5 lines within 2,500 steps | func_80020DA4 |
| a new value in a temporary, register rotated | fold it into a variable that already exists: `old += d;` and store old, no `nv`. Set twice, it ranks higher. This replaced a do-while(0) in 11 clones | func_sc02_011_8018BCC4 family |
| `(u16)(v \| K)` as an argument and v one ref short | `v = (u16)(v \| K);` then pass v. This replaced a do-while(0) in 3 clones | func_sc02_026_8017F5DC family |
| a comma expression or other trick that only holds an address in a register | two plain pointer locals: `u8 *q = A; u8 *r = q - 1;` and pass r to the later call. One pointer alone leaves 7 lines. This replaced the comma-operand store in 8 clones | func_sc03_107_8017EF3C family |
| a marked line that may be stale | delete it and compile the file: 2 of 112 needed nothing (the `t = 8` dead store in func_80015760, the empty do-while in func_sc06_032_80185F4C) | r287 sweep |
| cross-jump order | jump.c scans forward, so the earlier arm is the one replaced by a jump. An arm merges first with the code falling into the jump's target, then with other jumps to the same label | func_80135EB0 arms 4 and 8 |

The MATCH-TRICK sweep: 181 lines to 154. Removed: 3 HARD_V0, 11 nv, 3 v, 8 comma-operand stores, 2 stale. What stayed and why:

| Lines | Family | Why it stayed |
|---|---|---|
| 69 | frame pads (unused locals) | not steering: an unused local is what the frame shows. Not touched |
| 9 | `pq = &D_800AF630` dead store in func_sc06_018_8018F060 and its 2 clones | 216 per-site forms on sc06_018: changing any one site leaves 6 lines, a `MATRIX *` inline parameter 9 at best |
| 6 + 2 | `umn` / `yl` do-while(0) | sc03_089: 96 combinations of declaration order and arm order stop at 6 lines (pa / pb in a1 / a0). The trick keeps the original's `umn = pa` first; the form that lifts umn needs the other arm order. yl not tried |
| 2 | `x = (s16)t` in func_80145C54 | 8 forms: removal gives 1 extra insn at best, as the original's delay-slot `move a1,v1` needs the copy after the test |
| 1 | `q = 0` in func_sc02_017_801807DC | 6 forms, 1 line left (the `sh v0,256(a0)` base) |
| 5 | the loop-top `ph = phase;` re-copy | dropping the copy before the loop instead leaves 21 lines: both sets are needed |
| the rest | the D_800B99DA struct view (5), call-type casts, volatile reads and single lines | the delete or unwrap test only, not a hand pass: each loses lines. Worth a pass with these levers if a trick-free tree matters |

func_80020DA4 stays at 5 lines: the x and z index pipelines are swapped, which swaps v0 and v1. Computing x first lets xv take v1, which only yv could prevent by outranking xv (yv live <= 10, it is 15). Tried: about 50,000 statement orders with x first (best 18 lines), index and pointer locals (the pointer form flips addu's operands), `-yv` in an early local, the 16 s16 / s32 type combinations.

### r290 rows (func_80020DA4, the last NON_MATCHING function; 5 Nov)

func_80020DA4 matches in plain C: no pad, no marked line (merge 91c8a8d8). **The lever: when one function reads the same
kind of table entry in different ways (a word here, halves there), write ONE idiom for all of them and let combine make
the difference. The target's mix of `lw` and `lh` was the compiler's work on three identical word reads, not three
different reads in the source.** Reading halves through a struct gave the right instructions but the wrong reference
counts, and no statement order could repair that (r287's 50,000 orders).

```c
    xv = tab[angles[0] & 0xFFF];        /* s32 xv, yv, zv; s16 xs, ys, zs; s16 xc, yc, zc; s32 a, b, c; */
    yv = tab[angles[1] & 0xFFF];
    zv = tab[angles[2] & 0xFFF];
    xs = xv;  xc = xv >> 16;
    ys = yv;  yc = yv >> 16;
    zs = zv;  zc = zv >> 16;
    c = xc * zs;
    b = xc * zc;
    a = (xs * ys) >> 12;                /* then m[0] .. m[8] in index order, m[6] = -ys */
```

| Symptom | Fix | Example |
|---|---|---|
| a packed table entry (two s16 in one word) read as `lw` + sll / sra + sra for one index, two `lh` for another, `lh` + `lw` + sra for a third | read every entry as a word and split it into s16 locals: `v = tab[i]; s = v; c = v >> 16;`. combine folds "load, shift left 16, shift right 16" into a half load when the three insns are linked, and keeps the word load when the word has another use (its rule for two independent sets made from three insns). flow.c links a register's setter only to its FIRST use, and an s16 local is sign-extended where it is used, so the half that a multiply uses first decides: sin first folds to `lh` (and cos after it, if the word then dies), cos first keeps the `lw`. The order of the split statements does not matter | func_80020DA4: `c = xc * zs;` uses x's cos and z's sin first, so x keeps the word and z becomes two `lh`; `a = xs * ys` uses y's sin first, and y's word stays for `yc` and the negation: `lh` + `lw` |
| a local-alloc quantity needs one more reference than the asm shows, in straight-line code with no repeated paths | a value that combine folds away still counts: refs are taken at flow, before combine. `ys = yv;` folded into `lh` leaves yv with 6 refs where the asm shows 5, so yv's priority is 4000 against the x word's 3947 and yv takes v1. The struct half read gave 5 refs, 3333, and the x word took v1 | func_80020DA4 (r287's rule, without any repeated source) |
| an unused 16-byte frame area and an unused s0 save, until now a `s32 pad[4];` | the s16 cos locals (`s16 xc, yc, zc;` set from `v >> 16`): frame 24 with `vars= 16` and both saves, no pad. With s32 cos locals: frame 8 and 90 lines. Which slots make up the 16 bytes was not traced | func_80020DA4 |
| two address chains take v0 / v1 the wrong way round | local-alloc gives v0 to the higher priority, floor_log2(refs) * refs / life. The chain read twice (9 refs, 27 / life) beats the chain read once (8 refs, 24 / life) only when their lives are about equal, which needs the once-read chain to start first: x first gives z 15000 and x 13333; z first gives x 24000 and z 10384. Print the quantities with an instrumented cc1 before trying orders | func_80020DA4 |
| a search over statement orders stalls a few lines short | stop and ask what source would make the odd part of the target (here the load pattern), then read the pass that makes it. The match was the first compile of the new idiom, and 5 different statement orders of its set-up lines all match (a, b, c in that order does not: the multiply order follows source order) | func_80020DA4 |

Tool: an instrumented local-alloc.c. About 20 lines before "Now propagate the register assignments" in block_alloc print,
for each quantity in allocation order, its birth, death, refs, priority, hard register and pseudos. With the .lreg dump's
insn order beside it, a register question becomes a table to read. The build is r284's GCC 2.7.2 tree under MSYS2
(`make cc1`, about 20 s after the first build).

**How it was found, in plain words (LuciDin's notes for decompiling other games).**

1. The earlier rounds had every instruction and all but two registers right, and searched statement orders for the rest.
2. The instrumented compiler showed why that search could not end. Reading x first made the x / z registers right, and
   moved the error to the next variable: the y word needed one more reference than its instructions had. No order of
   statements adds a reference.
3. The target read three table entries in three different ways. A programmer writes such reads once and copies them, so
   the question became: what single way of reading gives all three? The compiler's own folding of a word read does, and
   the folded read is exactly where the missing reference comes from.
4. So the fix was in how the source reads the table, not in the order of its lines. The same change removed the frame
   pad, which was a second sign that it is what the original source said.

The general lesson: when a function is a few lines off after a long search, the remaining difference is rarely a matter
of order. Look for something in the target that the current C explains only by coincidence (here: mixed load widths, an
unused frame area), and ask what plainer source the compiler would turn into it.
