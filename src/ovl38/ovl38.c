/*
 * Overlay 0x38: the Sony licence screen, the first overlay run after boot.
 * Loaded to 0x800CEDF8 from MAIN.CD entry 1; the u32 overlay ID precedes this
 * code, so the step dispatcher below sits at 0x800CEDFC.
 */
#include "common.h"
#include "psyq.h"
#include "work.h"

/* A sprite with its own texture-page command (6 words) */
typedef struct {
    /* 0x00 */ u32 tag;
    /* 0x04 */ u32 tpage;
    /* 0x08 */ u8 r0, g0, b0, code;
    /* 0x0C */ s16 x0, y0;
    /* 0x10 */ u8 u0, v0;
    /* 0x12 */ u16 clut;
    /* 0x14 */ s16 w, h;
} SprtTpage; /* size 0x18 */

extern u32 g_WorldOtTable[2][0x1000];
extern s32 D_800AE840[];
/* Parameters for an archive read (func_8001ABBC / LoadFileStep) */
typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ u8 *unk4;
} LoadParam;

extern LoadParam D_800C7C60;
extern u8 D_800A2E20[];

extern SprtTpage D_800CF3F0[2];
extern SprtTpage D_800CF420[2];
extern void (*D_800CF450[8])(void);
extern u8 D_800D3ABC[];
extern SprtTpage D_800D3AEC[2];
extern SprtTpage D_800D3B1C[2];
extern s32 D_800D3C0C;
extern s32 D_800D3C10;


extern void ApplySoundOptions(void);
extern void NextStep(void);
extern void SetStep(s32 arg0);
extern void SetScreenMode2(s32 arg0);
extern s32 GetPadPressedDir(s32 arg0);
extern void func_80015310(void);
extern void func_800167B8(s32 arg0);
extern s32 func_800167F0(s32 arg0);
extern void func_800183E0(void *arg0);
extern s32 func_8001ABBC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, LoadParam *arg4);
extern s32 func_8001BFE8(void);
extern void func_8001BFF8(void);
extern void func_8001C044(void);

void func_800CF114(void);
void func_800CF180(void);
void func_800CF290(void);

/* Overlay main (0x800CEDFC): run the current step of the licence screen */
void func_800CEDFC(void)
{
    if (WORK->step < 8) {
        PS1_FN(D_800CF450[WORK->step])();
    }
}

/* Step 0: reset display state, decide whether to skip straight to the next mode */
void func_800CEE40(void)
{
    WORK->unkA3E1 = 1;
    func_8001C044();
    func_80015310();
    SetScreenMode2(7);
    SetDispMask(0);
    VSync(0);
    SetDispMask(1);
    WORK->vsyncMode = 0;
    func_800167B8(0);
    func_800183E0(D_800D3ABC);
    D_800D3C0C = 0;
    D_800D3C10 = 0;
    ApplySoundOptions();
    WORK->timer = 0;
    if (func_8001BFE8() != 0) {
        SetStep(3);
        return;
    }
    func_8001BFF8();
    NextStep();
}

/* Step 1: fade the licence image in */
void func_800CEF04(void)
{
    D_800D3C10 += 16;
    if (D_800D3C10 >= 0x80) {
        D_800D3C10 = 0x80;
        NextStep();
    }
    func_800CF290();
}

/* Step 2: hold the licence image for 0x105 frames */
void func_800CEF54(void)
{
    func_800CF290();
    if (++WORK->stepTimer >= 0x105) {
        NextStep();
    }
}

/* Step 3: fade the licence image out */
void func_800CEFA8(void)
{
    D_800D3C10 -= 4;
    if (D_800D3C10 <= 0) {
        D_800D3C10 = 0;
        NextStep();
    }
    func_800CF290();
}

/* Step 4: wait for the screen fade, preloading the next data */
void func_800CEFF4(void)
{
    func_800CF180();
    func_800CF114();
    if (func_800167F0(0) & 0xFFFF) {
        NextStep();
    }
}

/* Step 5: wait for the preload and a timeout or button press */
void func_800CF038(void)
{
    s32 pad;

    func_800CF180();
    func_800CF114();
    WORK->timer++;
    pad = GetPadPressedDir(0);
    if (D_800D3C0C != 0 && (WORK->timer >= 0x81 || (pad & 0x840))) {
        func_800167B8(4);
        NextStep();
    }
}

/* Step 6: wait for the fade to finish, then hand over to the next mode */
void func_800CF0C4(void)
{
    func_800CF180();
    if (func_800167F0(4) & 0xFFFF) {
        WORK->done = 1;
        SetScreenMode2(1);
        WORK->vsyncMode = 2;
    }
}

/* Start the background read of MAIN.CD entry 2 once */
void func_800CF114(void)
{
    if (D_800D3C0C == 0) {
        D_800C7C60.unk0 = 0;
        D_800C7C60.unk4 = D_800A2E20;
        if (func_8001ABBC(0, 0, D_800AE840, 0, &D_800C7C60) != 0) {
            D_800D3C0C = 1;
        }
    }
}

/* Link the SQUARESOFT logo's two sprites into this frame's ordering table (shown in steps 4 to 6) */
void func_800CF180(void)
{
    addPrim(&g_WorldOtTable[WORK->frame][0xFFF], &D_800CF3F0[WORK->frame]);
    addPrim(&g_WorldOtTable[WORK->frame][0xFFF], &D_800CF420[WORK->frame]);
}

/* Steps 1 to 3: build the licence image's two sprites (texture page, colour = the fade level) and link them into
 * the last entry of this frame's ordering table */
void func_800CF290(void)
{
    SprtTpage *p;
    SprtTpage *q;
    u32 *t; /* the texture-page word, written through its own pointer (as the original) */
    u32 *u;
    s32 f = WORK->frame;

    p = &D_800D3AEC[f];
    t = &D_800D3AEC[f].tpage;
    setlen(p, 5);
    *t = 0xE100008A;
    p->code = 0x64;
    p->r0 = p->g0 = p->b0 = D_800D3C10;
    p->clut = 0x7840;
    p->x0 = -0x100;
    p->y0 = -0x1C;
    p->u0 = 0;
    p->v0 = 0x38;
    p->w = 0x100;
    p->h = 0x60;
    q = &D_800D3B1C[f];
    u = &D_800D3B1C[f].tpage;
    setlen(q, 5);
    *u = 0xE100008C;
    q->code = 0x64;
    q->r0 = q->g0 = q->b0 = D_800D3C10;
    q->clut = 0x7840;
    q->x0 = 0;
    q->y0 = -0x1C;
    q->u0 = 0;
    q->v0 = 0x38;
    q->w = 0x100;
    q->h = 0x60;
    addPrim(&g_WorldOtTable[f][0xFFF], q);
    addPrim(&g_WorldOtTable[f][0xFFF], p);
}
