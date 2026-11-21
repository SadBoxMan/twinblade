#include "common.h"
#include "psyq.h"
#include "work.h"

extern void NextStep(void);
extern void SetMode(s32 a);
extern void ClearDebugText(void);
extern s32 GetPadPressedDir(s32 a);
extern void StartFade(s32 a);
extern s32 FadeStep(s32 a);
extern void ClearObjectPools(void);
extern void TrialEndDraw(void);
extern u8 D_800B9A11;
extern void (*g_TrialEndSteps[])(void);
extern s32 g_TrialEndTimer;

void TrialEndMain(void) {
    register Work *w = &D_800AF630;
    TrialEndDraw();
    g_TrialEndSteps[w->step]();
}

void TrialEndInit(void) {
    ClearObjectPools();
    ClearDebugText();
    D_800B9A11 = 0;
    g_TrialEndTimer = 0;
    StartFade(0);
    NextStep();
}

void TrialEndFadeIn(void) {
    if (FadeStep(0) & 0xFFFF) {
        NextStep();
    }
}

void TrialEndHold(void) {
    s32 pad;
    pad = GetPadPressedDir(0);
    if (++g_TrialEndTimer > 0x12C || (pad & 0x8F0)) {
        StartFade(4);
        NextStep();
    }
}

void TrialEndFadeOut(void) {
    if (FadeStep(4) & 0xFFFF) {
        SetMode(0xC);
    }
}

typedef struct {
    u32 tag;
    u32 tpage;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 w, h;
} TitleSprt;
extern u32 D_800AA60C[][0x1000];
extern TitleSprt g_TrialEndSprtLeft;
extern TitleSprt g_TrialEndSprtRight;

void TrialEndDraw(void) {
    register Work *w = &D_800AF630;
    setlen(&g_TrialEndSprtLeft, 5);
    g_TrialEndSprtLeft.tpage = 0xE100008A;
    g_TrialEndSprtLeft.code = 0x64;
    g_TrialEndSprtLeft.x0 = -0xA0;
    g_TrialEndSprtLeft.y0 = -0x6E;
    g_TrialEndSprtLeft.r0 = g_TrialEndSprtLeft.g0 = g_TrialEndSprtLeft.b0 = 0x80;
    g_TrialEndSprtLeft.u0 = 0;
    g_TrialEndSprtLeft.v0 = 0xA;
    g_TrialEndSprtLeft.w = 0x100;
    g_TrialEndSprtLeft.h = 0xF0;
    g_TrialEndSprtLeft.clut = 0x7800;
    setlen(&g_TrialEndSprtRight, 5);
    g_TrialEndSprtRight.tpage = 0xE100008C;
    g_TrialEndSprtRight.code = 0x64;
    g_TrialEndSprtRight.x0 = 0x60;
    g_TrialEndSprtRight.y0 = -0x6E;
    g_TrialEndSprtRight.r0 = g_TrialEndSprtRight.g0 = g_TrialEndSprtRight.b0 = 0x80;
    g_TrialEndSprtRight.u0 = 0;
    g_TrialEndSprtRight.v0 = 0xA;
    g_TrialEndSprtRight.w = 0x40;
    g_TrialEndSprtRight.h = 0xF0;
    g_TrialEndSprtRight.clut = 0x7800;
    addPrim(D_800AA60C[w->frame], &g_TrialEndSprtLeft);
    addPrim(D_800AA60C[w->frame], &g_TrialEndSprtRight);
}
