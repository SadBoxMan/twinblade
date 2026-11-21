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
/* Parameters for an archive read (RequestLoad / LoadFileStep) */
typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ u8 *unk4;
} LoadParam;

extern LoadParam g_SoundLoadTable;
extern u8 g_SoundLoadBuf[];

extern SprtTpage g_BootLogoSprtA[2];
extern SprtTpage g_BootLogoSprtB[2];
extern void (*g_LicenceSteps[8])(void);
extern u8 g_LicenceImageList[];
extern SprtTpage g_LicenceSprtLeft[2];
extern SprtTpage g_LicenceSprtRight[2];
extern s32 g_LicenceEntry2Loaded;
extern s32 g_LicenceBrightness;


extern void ApplySoundOptions(void);
extern void NextStep(void);
extern void SetStep(s32 arg0);
extern void SetScreenMode2(s32 arg0);
extern s32 GetPadPressedDir(s32 arg0);
extern void ClearDebugText(void);
extern void StartFade(s32 arg0);
extern s32 FadeStep(s32 arg0);
extern void QueueImage(void *arg0);
extern s32 RequestLoad(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, LoadParam *arg4);
extern s32 LicenceShown(void);
extern void SetLicenceShown(void);
extern void ClearObjectPools(void);

void LicenceLoadEntry2(void);
void DrawBootLogo(void);
void DrawLicence(void);

/* Overlay main (0x800CEDFC): run the current step of the licence screen */
void func_800CEDFC(void)
{
    if (WORK->step < 8) {
        PS1_FN(g_LicenceSteps[WORK->step])();
    }
}

/* Step 0: reset display state, decide whether to skip straight to the next mode */
void LicenceInit(void)
{
    WORK->unkA3E1 = 1;
    ClearObjectPools();
    ClearDebugText();
    SetScreenMode2(7);
    SetDispMask(0);
    VSync(0);
    SetDispMask(1);
    WORK->vsyncMode = 0;
    StartFade(0);
    QueueImage(g_LicenceImageList);
    g_LicenceEntry2Loaded = 0;
    g_LicenceBrightness = 0;
    ApplySoundOptions();
    WORK->timer = 0;
    if (LicenceShown() != 0) {
        SetStep(3);
        return;
    }
    SetLicenceShown();
    NextStep();
}

/* Step 1: fade the licence image in */
void LicenceFadeIn(void)
{
    g_LicenceBrightness += 16;
    if (g_LicenceBrightness >= 0x80) {
        g_LicenceBrightness = 0x80;
        NextStep();
    }
    DrawLicence();
}

/* Step 2: hold the licence image for 0x105 frames */
void LicenceHold(void)
{
    DrawLicence();
    if (++WORK->stepTimer >= 0x105) {
        NextStep();
    }
}

/* Step 3: fade the licence image out */
void LicenceFadeOut(void)
{
    g_LicenceBrightness -= 4;
    if (g_LicenceBrightness <= 0) {
        g_LicenceBrightness = 0;
        NextStep();
    }
    DrawLicence();
}

/* Step 4: wait for the screen fade, preloading the next data */
void BootLogoFadeIn(void)
{
    DrawBootLogo();
    LicenceLoadEntry2();
    if (FadeStep(0) & 0xFFFF) {
        NextStep();
    }
}

/* Step 5: wait for the preload and a timeout or button press */
void BootLogoWait(void)
{
    s32 pad;

    DrawBootLogo();
    LicenceLoadEntry2();
    WORK->timer++;
    pad = GetPadPressedDir(0);
    if (g_LicenceEntry2Loaded != 0 && (WORK->timer >= 0x81 || (pad & 0x840))) {
        StartFade(4);
        NextStep();
    }
}

/* Step 6: wait for the fade to finish, then hand over to the next mode */
void BootLogoFadeOut(void)
{
    DrawBootLogo();
    if (FadeStep(4) & 0xFFFF) {
        WORK->done = 1;
        SetScreenMode2(1);
        WORK->vsyncMode = 2;
    }
}

/* Start the background read of MAIN.CD entry 2 once */
void LicenceLoadEntry2(void)
{
    if (g_LicenceEntry2Loaded == 0) {
        g_SoundLoadTable.unk0 = 0;
        g_SoundLoadTable.unk4 = g_SoundLoadBuf;
        if (RequestLoad(0, 0, D_800AE840, 0, &g_SoundLoadTable) != 0) {
            g_LicenceEntry2Loaded = 1;
        }
    }
}

/* Link the SQUARESOFT logo's two sprites into this frame's ordering table (shown in steps 4 to 6) */
void DrawBootLogo(void)
{
    addPrim(&g_WorldOtTable[WORK->frame][0xFFF], &g_BootLogoSprtA[WORK->frame]);
    addPrim(&g_WorldOtTable[WORK->frame][0xFFF], &g_BootLogoSprtB[WORK->frame]);
}

/* Steps 1 to 3: build the licence image's two sprites (texture page, colour = the fade level) and link them into
 * the last entry of this frame's ordering table */
void DrawLicence(void)
{
    SprtTpage *p;
    SprtTpage *q;
    u32 *t; /* the texture-page word, written through its own pointer (as the original) */
    u32 *u;
    s32 f = WORK->frame;

    p = &g_LicenceSprtLeft[f];
    t = &g_LicenceSprtLeft[f].tpage;
    setlen(p, 5);
    *t = 0xE100008A;
    p->code = 0x64;
    p->r0 = p->g0 = p->b0 = g_LicenceBrightness;
    p->clut = 0x7840;
    p->x0 = -0x100;
    p->y0 = -0x1C;
    p->u0 = 0;
    p->v0 = 0x38;
    p->w = 0x100;
    p->h = 0x60;
    q = &g_LicenceSprtRight[f];
    u = &g_LicenceSprtRight[f].tpage;
    setlen(q, 5);
    *u = 0xE100008C;
    q->code = 0x64;
    q->r0 = q->g0 = q->b0 = g_LicenceBrightness;
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
