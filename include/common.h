#ifndef COMMON_H
#define COMMON_H

#include "include_asm.h"

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;

#ifndef NULL
#define NULL ((void *)0)
#endif

/*
 * Game function pointers in matched C. PS1_FN(f): a function pointer read from game data, at the call
 * (`PS1_FN(table[i])(o)`); PS1_FN_ADDR(f): the game address of a function, where matched C stores one in game data.
 * On the console both are the plain value. The PC build runs matched C as host code while game RAM holds what the
 * console holds (PS1 code addresses), so there PS1_FN turns a PS1 address into the host function and PS1_FN_ADDR a
 * host function into its PS1 address (pc/ps1mem.c, r219).
 */
#ifdef PC
void *pc_fn(u32 addr);
u32 pc_fn_addr(void *host);
#define PS1_FN(f) ((__typeof__(f))pc_fn((u32)(f)))
#define PS1_FN_ADDR(f) ((__typeof__(&(f)))pc_fn_addr((void *)(f)))
#else
#define PS1_FN(f) (f)
#define PS1_FN_ADDR(f) (f)
#endif

/*
 * MATCH-TRICK (ruled by LuciDin, 4 Nov 2026; docs/phase1_rulings.md, docs/decomp_recipes.md): the one accepted use of a
 * machine register in the source. HARD_V0(r) declares the result variable r pinned to v0 from its first line. Three
 * engine functions (func_8012CB64, func_8013E448, func_801536DC) keep their result in v0 across the compare blocks; our
 * GCC 2.7.2 only writes v0 directly for `return constant;` (jump.c, expr.c), so no plain C reaches the original's
 * registers. Every other compiler sees a plain local (the build runs cpp with -undef, so no __GNUC__ test here).
 */
#if defined(PC) || defined(M2CTX) || defined(_MSC_VER)
#define HARD_V0(r) s32 r
#else
#define HARD_V0(r) register s32 r asm("$2")
#endif

#endif /* COMMON_H */
