/*
 * PsyQ SDK declarations used by the game, written for this project.
 * Layouts follow the documented PsyQ 4.0 ABI so the game's code matches;
 * these are not Sony's headers.
 */
#ifndef PSYQ_H
#define PSYQ_H

#include "common.h"

/* libgpu */
typedef struct {
    s16 x, y, w, h;
} RECT;

typedef struct {
    u32 tag;
    u32 code[15];
} DR_ENV;

typedef struct {
    /* 0x00 */ RECT clip;
    /* 0x08 */ s16 ofs[2];
    /* 0x0C */ RECT tw;
    /* 0x14 */ u16 tpage;
    /* 0x16 */ u8 dtd;
    /* 0x17 */ u8 dfe;
    /* 0x18 */ u8 isbg;
    /* 0x19 */ u8 r0, g0, b0;
    /* 0x1C */ DR_ENV dr_env;
} DRAWENV; /* size 0x5C */

typedef struct {
    /* 0x00 */ RECT disp;
    /* 0x08 */ RECT screen;
    /* 0x10 */ u8 isinter;
    /* 0x11 */ u8 isrgb24;
    /* 0x12 */ u8 pad0, pad1;
} DISPENV; /* size 0x14 */

/* Primitive header: 24-bit link to the next primitive, 8-bit word count */
typedef struct {
    unsigned addr : 24;
    unsigned len : 8;
    u8 r0, g0, b0, code;
} P_TAG;

/* a flat-shaded triangle */
typedef struct {
    /* 0x00 */ u32 tag;
    /* 0x04 */ u8 r0, g0, b0, code;
    /* 0x08 */ s16 x0, y0;
    /* 0x0C */ s16 x1, y1;
    /* 0x10 */ s16 x2, y2;
} POLY_F3; /* size 0x14 */

/* a flat line */
typedef struct {
    /* 0x00 */ u32 tag;
    /* 0x04 */ u8 r0, g0, b0, code;
    /* 0x08 */ s16 x0, y0;
    /* 0x0C */ s16 x1, y1;
} LINE_F2; /* size 0x10 */

#define setaddr(p, _addr) (((P_TAG *)(p))->addr = (u32)(_addr))
#define getaddr(p) (u32)(((P_TAG *)(p))->addr)
#define setlen(p, _len) (((P_TAG *)(p))->len = (u8)(_len))
#define addPrim(ot, p) setaddr(p, getaddr(ot)), setaddr(ot, p)

extern int SetVideoMode(int mode);
extern int ResetGraph(int mode);
extern int SetGraphDebug(int level);
extern void SetDispMask(int mask);
extern int DrawSync(int mode);
extern int VSync(int mode);
extern int VSyncCallback(void (*func)(void));
extern u32 *ClearOTagR(u32 *ot, int n);
extern void DrawOTag(u32 *p);
extern void CatPrim(void *p0, void *p1);
extern DRAWENV *PutDrawEnv(DRAWENV *env);
extern DISPENV *PutDispEnv(DISPENV *env);
extern int LoadImage(const RECT *r, const u32 *p);

/* libgte */
typedef struct {
    s32 vx, vy, vz, pad;
} VECTOR;

typedef struct {
    s16 vx, vy, vz, pad;
} SVECTOR;

typedef struct {
    s16 m[3][3];
    s32 t[3];
} MATRIX; /* size 0x20 */

/* libgs: a reference view */
typedef struct {
    /* 0x00 */ s32 vpx, vpy, vpz;  /* viewpoint */
    /* 0x0C */ s32 vrx, vry, vrz;  /* reference point */
    /* 0x18 */ s32 rz;             /* twist */
    /* 0x1C */ void *super;        /* GsCOORDINATE2 the view is relative to */
} GsRVIEW2; /* size 0x20 */

extern int GsSetRefView2L(GsRVIEW2 *view);

/* libgs: an ordering table header, and a cell-map background */
typedef struct {
    /* 0x00 */ u32 length;
    /* 0x04 */ u32 *org;
    /* 0x08 */ u32 offset;
    /* 0x0C */ u32 point;
    /* 0x10 */ u32 *tag;
} GsOT; /* size 0x14 */

typedef struct {
    /* 0x00 */ u8 cellw, cellh;
    /* 0x02 */ u16 ncellw, ncellh;
    /* 0x08 */ void *base;          /* GsCELL table */
    /* 0x0C */ u16 *index;
} GsMAP; /* size 0x10 */

typedef struct {
    /* 0x00 */ u32 attribute;
    /* 0x04 */ s16 x, y;
    /* 0x08 */ s16 w, h;
    /* 0x0C */ s16 scrollx, scrolly;
    /* 0x10 */ u8 r, g, b;
    /* 0x14 */ GsMAP *map;
    /* 0x18 */ s16 mx, my;
    /* 0x1C */ s16 scalex, scaley;
    /* 0x20 */ s32 rotate;
} GsBG; /* size 0x24 */

extern void GsSortBg(GsBG *bg, GsOT *ot, u16 pri);
extern void GsSortFastBg(GsBG *bg, GsOT *ot, u16 pri);

/* libcd */
typedef struct {
    u8 minute;
    u8 second;
    u8 sector;
    u8 track;
} CdlLOC;

typedef struct {
    /* 0x00 */ CdlLOC pos;
    /* 0x04 */ u32 size;
    /* 0x08 */ char name[16];
} CdlFILE; /* size 0x18 */

extern int CdInit(void);
extern CdlFILE *CdSearchFile(CdlFILE *fp, char *name);
extern int CdPosToInt(CdlLOC *p);
extern CdlLOC *CdIntToPos(int i, CdlLOC *p);

/* CdControl commands, the status bit, a mode bit, and the CdSync / CdReady results */
#define CdlNop 0x01
#define CdlReadN 0x06
#define CdlPause 0x09
#define CdlSetmode 0x0E
#define CdlSeekL 0x15
#define CdlStatShellOpen 0x10
#define CdlModeSpeed 0x80
#define CdlDataReady 1
#define CdlComplete 2
#define CdlDiskError 5
extern void CdFlush(void);
extern int CdControl(u8 com, u8 *param, u8 *result);
extern int CdControlB(u8 com, u8 *param, u8 *result);
extern int CdSync(int mode, u8 *result);
extern int CdGetSector(void *madr, int size);
extern int CdDiskReady(int mode);
extern int CdGetDiskType(void);

/* libspu */
typedef struct {
    s16 left;
    s16 right;
} SpuVolume;

typedef struct {
    SpuVolume volume;
    s32 reverb;
    s32 mix;
} SpuExtAttr;

typedef struct {
    /* 0x00 */ u32 mask;
    /* 0x04 */ SpuVolume mvol;
    /* 0x08 */ SpuVolume mvolmode;
    /* 0x0C */ SpuVolume mvolx;
    /* 0x10 */ SpuExtAttr cd;
    /* 0x1C */ SpuExtAttr ext;
} SpuCommonAttr; /* size 0x28 */

typedef struct {
    u32 mask;
    u32 queueing;
} SpuEnv;

extern void SpuSetCommonAttr(SpuCommonAttr *attr);
extern s32 SpuReserveReverbWorkArea(s32 on_off);
extern s32 SpuSetReverb(s32 on_off);
extern u32 SpuSetReverbVoice(s32 on_off, u32 voice_bit);
extern void SpuSetEnv(SpuEnv *env);

/* libsnd */
extern void SsInit(void);

/* libapi / libetc */
extern int ResetCallback(void);

/* libpad */
extern void PadInitDirect(u8 *pad1, u8 *pad2);
extern void PadStartCom(void);

/* libmcrd */
extern void MemCardInit(int val);
extern void MemCardStart(void);

#ifdef PC
/* The PC build's game-side stack (the one translated and interpreted code use) switches as on the console: the old
   $sp saved at 0x1F8003FC, the calls run on the scratchpad. Game code relies on it: func_8014F468 switches back to
   the main stack at the saved value, which was stale while these were empty (the pause menu's Lumina Scroll change
   crashed). pc/recomp_rt.c */
void pc_set_spad_stack(void);
void pc_set_spad_stack_nested(void);
void pc_reset_spad_stack(void);
#define SetSpadStack() pc_set_spad_stack()
#define SetSpadStackNested() pc_set_spad_stack_nested()
#define ResetSpadStack() pc_reset_spad_stack()
#else
/*
 * Run a call on a stack in the scratchpad (fast on-chip RAM at 0x1F800000).
 * The old $sp is saved at the top of the scratchpad and restored afterwards. The address is an operand, so GCC
 * loads it ($6, the register it picks) as ordinary code that -O2 scheduling may move (func_80128564). The asm says
 * $sp, not $29: maspsx compares register names as text, and only `lw $sp` gets the load-delay nop the original has
 * before an epilogue's `lw $31,16($sp)` (func_80128678).
 */
#define SetSpadStack()                                                         \
    __asm__ volatile("addu $8,%0,$0\n\t"                                       \
                     "sw $sp,0($8)\n\t"                                        \
                     "addiu $8,$8,-4\n\t"                                      \
                     "addu $sp,$8,$0" :: "r"(0x1F8003FC) : "$8", "memory")
/*
 * The nested form (r216; LuciDin's ruling 27 Oct): the word at 0x1F8003FC holds the address of the slot for the old
 * $sp, so a call already running on the scratchpad stack can move below it. ResetSpadStack() restores it the same way
 * (func_8014CCB4, func_8014D04C, func_8014D3E0, func_8014F6F4, func_8014FA04, func_8014FBC0, func_8014FCFC).
 */
#define SetSpadStackNested()                                                   \
    __asm__ volatile("addu $8,%0,$0\n\t"                                       \
                     "lw $9,0($8)\n\t"                                         \
                     "sw $sp,0($9)\n\t"                                        \
                     "addiu $9,$9,-4\n\t"                                      \
                     "addu $sp,$9,$0" :: "r"(0x1F8003FC) : "$8", "$9", "memory")
#define ResetSpadStack()                                                    \
    __asm__ volatile("addiu $sp,$sp,4\n\t"                                     \
                     "lw $sp,0($sp)" ::: "memory")

#endif /* PC */

#endif /* PSYQ_H */
