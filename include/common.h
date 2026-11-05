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

#endif /* COMMON_H */
