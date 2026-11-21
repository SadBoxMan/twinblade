#include "common.h"
#include "work.h"

extern void NextStep(void);
extern u16 GetPadPressedDir(s32 a);
extern s16 TestPadsAny(s32 a, s32 b);
extern void ClearDebugText(void);
extern void SetDebugText(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern void StartFade(s32 a);
extern s32 FadeStep(s32 arg0);
extern void QueueImage(void *p);
extern void LoadPatPicture(char *name);
extern void ClearObjectPools(void);
extern s32 CutCheckSkip(void);
extern void CutDrawPic1(s32 a, s32 b);
extern void CutDrawPic2(s32 a, s32 b);
extern u16 D_800B99E4;
extern u16 D_800B99E6;
extern s16 D_800B99E8;
extern u8 D_800B9A11;
extern char g_CutPic1Path[];
extern char g_CutPic2Path[];
extern char D_800CFAB4[];
extern char D_800CFAC4[];
extern char D_800CFAD4[];
extern void (*g_CutDebugSteps[])(void);
extern char g_CutDebugFontUpload[];
extern void (*g_CutPrologueSteps[])(void);
extern void (*g_CutPrologueSubSteps[])(void);
extern s32 D_800D1364;
extern s32 g_CutPic1Y;
extern s32 g_CutPic2X;
extern s32 D_800D1370;
extern s32 g_CutSubStep;

void CutDebugMain(void) {
    register Work *w = &D_800AF630;

    D_800CFAB4[11] = D_800B99E4 + '0';
    SetDebugText(1, (s32)D_800CFAB4, 0x60, 0x64, 0, 0);
    if (D_800D1364 != 0) {
        SetDebugText(2, (s32)D_800CFAC4, 0x60, 0x70, 0, 0);
    } else {
        SetDebugText(3, (s32)D_800CFAD4, 0x60, 0x70, 0, 0);
    }
    if (w->step < 4) {
        g_CutDebugSteps[w->step]();
    }
}

void CutDebugInit(void) {
    D_800B9A11 = 1;
    ClearObjectPools();
    ClearDebugText();
    D_800D1364 = 0;
    QueueImage(g_CutDebugFontUpload);
    StartFade(0);
    D_800B99E8 = 0;
    NextStep();
}

void CutDebugFadeIn(void) {
    if (FadeStep(0) & 0xFFFF) {
        NextStep();
    }
}

void CutDebugHold(void) {
    if (++D_800B99E8 > 0x80 || TestPadsAny(0, 0x800) != 0) {
        StartFade(4);
        NextStep();
    }
}

void CutDebugFadeOut(void) {
    if (FadeStep(4) & 0xFFFF) {
        D_800B99E6 = 1;
    }
}

void CutPrologueMain(void) {
    g_CutPrologueSteps[D_800B99E4]();
}

void CutPrologueInit(void) {
    LoadPatPicture(g_CutPic1Path);
    g_CutPic1Y = 0;
    D_800D1370 = 0;
    g_CutSubStep = 0;
    StartFade(0);
    NextStep();
}

void CutPrologueRun(void) {
    g_CutPrologueSubSteps[g_CutSubStep]();
}

void CutPic1FadeIn(void) {
    CutDrawPic1(0, g_CutPic1Y);
    if (FadeStep(0) & 0xFFFF) {
        g_CutSubStep++;
    }
}

void CutPic1Scroll(void) {
    if (CutCheckSkip() == 0) {
        CutDrawPic1(0, g_CutPic1Y);
        if (--g_CutPic1Y < -0x10F) {
            StartFade(4);
            g_CutPic1Y = -0x110;
            g_CutSubStep++;
        }
    }
}

void CutPic1FadeOut(void) {
    CutDrawPic1(0, g_CutPic1Y);
    if (FadeStep(4) & 0xFFFF) {
        g_CutSubStep++;
    }
}

void CutPic2Load(void) {
    LoadPatPicture(g_CutPic2Path);
    StartFade(0);
    g_CutSubStep++;
}

void CutPic2FadeIn(void) {
    CutDrawPic2(-0x400, 0);
    if (FadeStep(0) & 0xFFFF) {
        g_CutPic2X = -0x340;
        g_CutSubStep++;
    }
}

void CutPic2Scroll(void) {
    if (CutCheckSkip() == 0) {
        CutDrawPic2(g_CutPic2X++, 0);
        if (g_CutPic2X > 0x140) {
            StartFade(4);
            g_CutSubStep++;
        }
    }
}

void CutPic2FadeOut(void) {
    CutDrawPic2(g_CutPic2X, 0);
    if (FadeStep(4) & 0xFFFF) {
        g_CutSubStep++;
    }
}

void CutPrologueWaitEnd(void) {
    CutCheckSkip();
}

s32 CutCheckSkip(void) {
    if ((GetPadPressedDir(0) | GetPadPressedDir(1)) & 0x800) {
        D_800B99E6 = 1;
        return 1;
    }
    return 0;
}

typedef struct {
    u32 tag;
    u32 tpage;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 w, h;
} CutSprt;
extern CutSprt *g_PrimNext;
extern u32 D_800AA60C[][0x1000];

void CutDrawPic1(s32 a, s32 b) {
    register Work *w = &D_800AF630;
    CutSprt *p;

    a -= 160;
    b -= 120;

    p = g_PrimNext;
    setlen(p, 5);
    p->tpage = 0xE1000086;
    p->code = 0x64;
    p->clut = 0x7980;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a;
    p->y0 = b;
    p->u0 = 0x20;
    p->v0 = 0;
    p->w = 160;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE1000087;
    p->code = 0x64;
    p->clut = 0x7980;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a + 160;
    p->y0 = b;
    p->u0 = 0x40;
    p->v0 = 0;
    p->w = 160;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE1000096;
    p->code = 0x64;
    p->clut = 0x7980;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a;
    p->y0 = b + 256;
    p->u0 = 0x20;
    p->v0 = 0;
    p->w = 160;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE1000097;
    p->code = 0x64;
    p->clut = 0x7980;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a + 160;
    p->y0 = b + 256;
    p->u0 = 0x40;
    p->v0 = 0;
    p->w = 160;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    g_PrimNext = p;
}

void CutDrawPic2(s32 a, s32 b) {
    register Work *w = &D_800AF630;
    CutSprt *p;

    a -= 160;
    b -= 120;

    p = g_PrimNext;
    setlen(p, 5);
    p->tpage = 0xE1000089;
    p->code = 0x64;
    p->clut = 0x7940;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a;
    p->y0 = b;
    p->u0 = 0;
    p->v0 = 0;
    p->w = 256;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE100008B;
    p->code = 0x64;
    p->clut = 0x7940;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a + 256;
    p->y0 = b;
    p->u0 = 0;
    p->v0 = 0;
    p->w = 256;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE100008D;
    p->code = 0x64;
    p->clut = 0x7940;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a + 512;
    p->y0 = b;
    p->u0 = 0;
    p->v0 = 0;
    p->w = 256;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE100008F;
    p->code = 0x64;
    p->clut = 0x7940;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = a + 768;
    p->y0 = b;
    p->u0 = 0;
    p->v0 = 0;
    p->w = 64;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE1000086;
    p->code = 0x64;
    p->clut = 0x7880;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = -160;
    p->y0 = -120;
    p->u0 = 0x20;
    p->v0 = 0;
    p->w = 160;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    setlen(p, 5);
    p->tpage = 0xE1000087;
    p->code = 0x64;
    p->clut = 0x7880;
    p->r0 = p->g0 = p->b0 = 0x80;
    p->x0 = 0;
    p->y0 = -120;
    p->u0 = 0x40;
    p->v0 = 0;
    p->w = 160;
    p->h = 256;
    addPrim(D_800AA60C[w->frame], p);
    p++;
    g_PrimNext = p;
}
