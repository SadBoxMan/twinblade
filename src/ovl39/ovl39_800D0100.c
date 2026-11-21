#include "common.h"
#include "psyq.h"
#include "work.h"

extern void NextStep(void);
extern void ClearDebugText(void);
extern void QueueImage(void *p);
extern void ClearObjectPools(void);
extern void InitMovieSound(void);
extern s32 TitleMovieExists(void);
extern void TitlePlayMovie(void);
extern void DrawAltTitleLow(void);
extern void DrawAltTitleHigh(void);
extern void SetScreenMode2(s32 mode);
extern void AltTitleSetOptionText(s32 a, s32 b);
extern void (*g_AltTitleSteps[])(void);
extern u8 D_800D4E6C[];
extern u8 D_800D52BC[];
extern s32 g_AltTitleIdleCountdown;
extern s16 D_800EC898;
extern s32 D_800EC8A0;
extern u8 D_800D93FC[];
extern s32 g_AltTitleBrightness;
extern s16 g_AltTitleCursor;
extern s32 D_800EC8B0;

void AltTitleMain(void) {
    register Work *w = &D_800AF630;
    g_AltTitleSteps[w->step]();
}

void AltTitleInit(void) {
    register Work *w = &D_800AF630;
    w->unkA3E1 = 1;
    ClearObjectPools();
    ClearDebugText();
    InitMovieSound();
    QueueImage(D_800D93FC);
    g_AltTitleCursor = 0;
    D_800EC8B0 = TitleMovieExists();
    NextStep();
}

void AltTitleMovie(void) {
    if (D_800EC8B0 != 0) {
        TitlePlayMovie();
        DrawAltTitleLow();
        NextStep();
    } else {
        NextStep();
    }
}

typedef struct { s16 n; s16 pad; } TitleSprite;
extern void SetStep(u16 step);
extern void SetDebugText(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern u8 g_AltTitleOptionOff[];
extern u8 g_AltTitleOptionY[];
extern u8 *g_AltTitleOptionText[];
extern TitleSprite g_AltTitleOptionSlot[];

extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern u16 GetPadPressedDir(s32 a);
extern u16 FadeStep(s32 a);
extern void StartFade(s32 a);
extern void PlaySoundId(s32 a, s32 b);

void AltTitleMenu(void) {
    register Work *w = &D_800AF630;
    u16 pad;
    pad = GetPadPressedDir(0);
    if (pad & 0x4000) {
        PlaySoundId(0x9C1, 0);
        g_AltTitleCursor++;
        if (g_AltTitleCursor >= 3) {
            g_AltTitleCursor = 0;
        }
    } else if (pad & 0x1000) {
        PlaySoundId(0x9C1, 0);
        g_AltTitleCursor--;
        if (g_AltTitleCursor < 0) {
            g_AltTitleCursor = 2;
        }
    }
    switch (g_AltTitleCursor) {
    case 0:
        if (pad & 0x800) {
            PlaySoundId(0x9C0, 0);
            StartFade(4);
            NextStep();
        }
        break;
    case 1:
    case 2:
        if (pad & 0x800) {
            PlaySoundId(0x9C0, 0);
            StartFade(4);
            NextStep();
        }
        break;
    }
    DrawAltTitleLow();
}

void AltTitleFadeOutFinish(void) {
    register Work *w = &D_800AF630;
    RECT r;
    if (FadeStep(4)) {
        switch (g_AltTitleCursor) {
        case 0:
            w->done = 1;
            w->timer = 2;
            break;
        case 1:
            w->done = 1;
            w->timer = 0;
            break;
        case 2:
            w->done = 1;
            w->timer = 1;
            break;
        case 4:
            w->done = 1;
            w->timer = 4;
            break;
        }
        r.x = 0;
        r.y = 0;
        r.w = 0x140;
        r.h = 0x1E0;
        ClearImage(&r, 0, 0, 0);
    }
    DrawAltTitleLow();
}

void AltTitleInit2(void) {
    register Work *w = &D_800AF630;
    s32 unused[4];
    ClearObjectPools();
    ClearDebugText();
    w->unkA3E1 = 0;
    g_AltTitleBrightness = 0;
    D_800EC8A0 = 1;
    QueueImage(D_800D4E6C);
    QueueImage(D_800D52BC);
    g_AltTitleCursor = 0;
    g_AltTitleIdleCountdown = -1;
    w->timer = 0;
    NextStep();
}

void AltTitleQueueImages(void) {
    register Work *w = &D_800AF630;
    s32 unused;
    ClearDebugText();
    QueueImage(D_800D93FC);
    NextStep();
}

void AltTitleFadeIn(void) {
    register Work *w = &D_800AF630;
    DrawAltTitleHigh();
    g_AltTitleBrightness += 4;
    if (g_AltTitleBrightness >= 0x80) {
        g_AltTitleBrightness = 0x80;
        NextStep();
    }
}

extern u16 D_800EC888;
/* a DR_TPAGE word and a SPRT in one packet */
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
extern TitleSprt D_800EC8B4;
extern TitleSprt D_800EC8CC;
extern TitleSprt D_800EC944;
extern TitleSprt D_800EC98C;

void AltTitleMenu2(void) {
    register Work *w = &D_800AF630;
    s32 moved;
    DrawAltTitleHigh();
    D_800EC888 = GetPadPressedDir(0);
    moved = 0;
    if (D_800EC888 & 0x4000) {
        PlaySoundId(0x9C1, 0);
        moved = 1;
        g_AltTitleCursor++;
        if (g_AltTitleCursor >= 3) {
            g_AltTitleCursor = 0;
        }
    } else if (D_800EC888 & 0x1000) {
        PlaySoundId(0x9C1, 0);
        moved = 1;
        g_AltTitleCursor--;
        if (g_AltTitleCursor < 0) {
            g_AltTitleCursor = 2;
        }
    }
    D_800EC898 = 0;
    switch (g_AltTitleCursor) {
    case 0:
        if (D_800EC888 & 0x800) {
            PlaySoundId(0x9C0, 0);
            StartFade(4);
            NextStep();
        }
        break;
    case 1:
    case 2:
        if (D_800EC888 & 0x800) {
            PlaySoundId(0x9C0, 0);
            StartFade(4);
            NextStep();
        }
        break;
    }
    if (g_AltTitleIdleCountdown > 0) {
        if (--g_AltTitleIdleCountdown == 0) {
            StartFade(4);
            g_AltTitleCursor = 4;
            NextStep();
        }
    }
}

void AltTitleBlinkChoice(void) {
    register Work *w = &D_800AF630;
    DrawAltTitleHigh();
    D_800EC898++;
    if (D_800EC898 & 4) {
        AltTitleSetOptionText(g_AltTitleCursor, 1);
    } else {
        AltTitleSetOptionText(g_AltTitleCursor, 0);
    }
    if (D_800EC898 >= 0x21) {
        NextStep();
    }
}

void AltTitleFadeOut(void) {
    register Work *w = &D_800AF630;
    g_AltTitleBrightness -= 4;
    if (g_AltTitleBrightness < 0) {
        g_AltTitleBrightness = 0;
        SetScreenMode2(1);
        w->vsyncMode = 2;
        NextStep();
    } else {
        DrawAltTitleHigh();
    }
}

void AltTitleFinish(void) {
    register Work *w = &D_800AF630;
    QueueImage(D_800D4E6C);
    switch (g_AltTitleCursor) {
    case 0:
        w->done = 1;
        w->timer = 2;
        break;
    case 1:
        w->done = 1;
        w->timer = 0;
        break;
    case 2:
        w->done = 1;
        w->timer = 1;
        break;
    case 4:
        w->done = 1;
        w->timer = 4;
        break;
    }
}

void AltTitleLoadPicture(void) {
    RECT r[2];
    u8 *q;
    u8 *p;
    p = (u8 *)(g_AltTitleCursor * 0x4B220 + 0x80114014);
    q = (u8 *)(g_AltTitleCursor * 0x4B220 + 0x80114220);
    r[0].x = 0;
    r[0].y = 0x1E0;
    r[0].w = 0x100;
    r[0].h = 1;
    r[1].x = 0x280;
    r[1].y = 0x10;
    r[1].w = 0x140;
    r[1].h = 0x1E0;
    LoadImage(&r[0], (u32 *)p);
    LoadImage(&r[1], (u32 *)q);
    SetStep(3);
}

void DrawAltTitleLow(void) {
    register Work *w = &D_800AF630;
    setlen(&D_800EC8B4, 5);
    D_800EC8B4.tpage = 0xE100010A;
    D_800EC8B4.code = 0x64;
    D_800EC8B4.b0 = 0x80;
    D_800EC8B4.g0 = 0x80;
    D_800EC8B4.r0 = 0x80;
    D_800EC8B4.x0 = -0xA0;
    D_800EC8B4.y0 = -0x78;
    D_800EC8B4.u0 = 0;
    D_800EC8B4.v0 = 0;
    D_800EC8B4.clut = 0x7800;
    D_800EC8B4.w = 0x100;
    D_800EC8B4.h = 0xF0;
    setlen(&D_800EC8CC, 5);
    D_800EC8CC.tpage = 0xE100010E;
    D_800EC8CC.code = 0x64;
    D_800EC8CC.b0 = 0x80;
    D_800EC8CC.g0 = 0x80;
    D_800EC8CC.r0 = 0x80;
    D_800EC8CC.x0 = 0x60;
    D_800EC8CC.y0 = -0x78;
    D_800EC8CC.u0 = 0;
    D_800EC8CC.v0 = 0;
    D_800EC8CC.clut = 0x7800;
    D_800EC8CC.w = 0x40;
    D_800EC8CC.h = 0xF0;
    setlen(&D_800EC944, 5);
    D_800EC944.tpage = 0xE100000F;
    D_800EC944.code = 0x64;
    D_800EC944.b0 = 0x80;
    D_800EC944.g0 = 0x80;
    D_800EC944.r0 = 0x80;
    D_800EC944.x0 = -0x50;
    D_800EC944.y0 = 0x20;
    D_800EC944.u0 = 0;
    D_800EC944.v0 = 0;
    D_800EC944.clut = 0x7800;
    D_800EC944.w = 0x78;
    D_800EC944.h = 0x3C;
    D_800EC944.clut = 0x7A00;
    addPrim(D_800AA60C[w->frame], &D_800EC944);
    setlen(&D_800EC98C, 5);
    D_800EC98C.tpage = 0xE100000F;
    D_800EC98C.code = 0x64;
    D_800EC98C.b0 = 0x80;
    D_800EC98C.g0 = 0x80;
    D_800EC98C.r0 = 0x80;
    D_800EC98C.x0 = -0x6E;
    D_800EC98C.y0 = g_AltTitleCursor * 20 + 0x20;
    D_800EC98C.u0 = 0;
    D_800EC98C.v0 = 0x3C;
    D_800EC98C.clut = 0x7800;
    D_800EC98C.w = 0x1E;
    D_800EC98C.h = 0x14;
    D_800EC98C.clut = 0x7A00;
    addPrim(D_800AA60C[w->frame], &D_800EC98C);
    addPrim(D_800AA60C[w->frame], &D_800EC8CC);
    addPrim(D_800AA60C[w->frame], &D_800EC8B4);
}

extern TitleSprt D_800EC8E4;
extern TitleSprt D_800EC8FC;
extern TitleSprt D_800EC914;
extern TitleSprt D_800EC92C;

void DrawAltTitleHigh(void) {
    register Work *w = &D_800AF630;
    setlen(&D_800EC8B4, 5);
    D_800EC8B4.tpage = 0xE100008A;
    D_800EC8B4.code = 0x64;
    D_800EC8B4.r0 = D_800EC8B4.g0 = D_800EC8B4.b0 = g_AltTitleBrightness;
    D_800EC8B4.x0 = -0x140;
    D_800EC8B4.y0 = -0xF0;
    D_800EC8B4.u0 = 0;
    D_800EC8B4.v0 = 0x10;
    D_800EC8B4.clut = 0x7800;
    D_800EC8B4.w = 0x100;
    D_800EC8B4.h = 0xF0;
    setlen(&D_800EC8CC, 5);
    D_800EC8CC.tpage = 0xE100008C;
    D_800EC8CC.code = 0x64;
    D_800EC8CC.r0 = D_800EC8CC.g0 = D_800EC8CC.b0 = g_AltTitleBrightness;
    D_800EC8CC.x0 = -0x40;
    D_800EC8CC.y0 = -0xF0;
    D_800EC8CC.u0 = 0;
    D_800EC8CC.v0 = 0x10;
    D_800EC8CC.clut = 0x7800;
    D_800EC8CC.w = 0x100;
    D_800EC8CC.h = 0xF0;
    setlen(&D_800EC8E4, 5);
    D_800EC8E4.tpage = 0xE100008E;
    D_800EC8E4.code = 0x64;
    D_800EC8E4.r0 = D_800EC8E4.g0 = D_800EC8E4.b0 = g_AltTitleBrightness;
    D_800EC8E4.x0 = 0xC0;
    D_800EC8E4.y0 = -0xF0;
    D_800EC8E4.u0 = 0;
    D_800EC8E4.v0 = 0x10;
    D_800EC8E4.clut = 0x7800;
    D_800EC8E4.w = 0x80;
    D_800EC8E4.h = 0xF0;
    setlen(&D_800EC8FC, 5);
    D_800EC8FC.tpage = 0xE100009A;
    D_800EC8FC.code = 0x64;
    D_800EC8FC.r0 = D_800EC8FC.g0 = D_800EC8FC.b0 = g_AltTitleBrightness;
    D_800EC8FC.x0 = -0x140;
    D_800EC8FC.y0 = 0;
    D_800EC8FC.u0 = 0;
    D_800EC8FC.v0 = 0;
    D_800EC8FC.clut = 0x7800;
    D_800EC8FC.w = 0x100;
    D_800EC8FC.h = 0xF0;
    setlen(&D_800EC914, 5);
    D_800EC914.tpage = 0xE100009C;
    D_800EC914.code = 0x64;
    D_800EC914.r0 = D_800EC914.g0 = D_800EC914.b0 = g_AltTitleBrightness;
    D_800EC914.x0 = -0x40;
    D_800EC914.y0 = 0;
    D_800EC914.u0 = 0;
    D_800EC914.v0 = 0;
    D_800EC914.clut = 0x7800;
    D_800EC914.w = 0x100;
    D_800EC914.h = 0xF0;
    setlen(&D_800EC92C, 5);
    D_800EC92C.tpage = 0xE100009E;
    D_800EC92C.code = 0x64;
    D_800EC92C.r0 = D_800EC92C.g0 = D_800EC92C.b0 = g_AltTitleBrightness;
    D_800EC92C.x0 = 0xC0;
    D_800EC92C.y0 = 0;
    D_800EC92C.u0 = 0;
    D_800EC92C.v0 = 0;
    D_800EC92C.clut = 0x7800;
    D_800EC92C.w = 0x80;
    D_800EC92C.h = 0xF0;
    setlen(&D_800EC944, 5);
    D_800EC944.tpage = 0xE100000F;
    D_800EC944.code = 0x64;
    D_800EC944.r0 = D_800EC944.g0 = D_800EC944.b0 = g_AltTitleBrightness;
    D_800EC944.x0 = -0xA0;
    D_800EC944.y0 = 0x64;
    D_800EC944.u0 = 0;
    D_800EC944.v0 = 0;
    D_800EC944.clut = 0x7800;
    D_800EC944.w = 0x78;
    D_800EC944.h = 0x3C;
    D_800EC944.clut = 0x7A00;
    addPrim(D_800AA60C[w->frame], &D_800EC944);
    setlen(&D_800EC98C, 5);
    D_800EC98C.tpage = 0xE100000F;
    D_800EC98C.code = 0x64;
    D_800EC98C.r0 = D_800EC98C.g0 = D_800EC98C.b0 = g_AltTitleBrightness;
    D_800EC98C.x0 = -0xBE;
    D_800EC98C.y0 = g_AltTitleCursor * 20 + 0x64;
    D_800EC98C.u0 = 0;
    D_800EC98C.v0 = 0x3C;
    D_800EC98C.clut = 0x7800;
    D_800EC98C.w = 0x1E;
    D_800EC98C.h = 0x14;
    D_800EC98C.clut = 0x7A00;
    addPrim(D_800AA60C[w->frame], &D_800EC98C);
    addPrim(D_800AA60C[w->frame], &D_800EC92C);
    addPrim(D_800AA60C[w->frame], &D_800EC914);
    addPrim(D_800AA60C[w->frame], &D_800EC8FC);
    addPrim(D_800AA60C[w->frame], &D_800EC8E4);
    addPrim(D_800AA60C[w->frame], &D_800EC8CC);
    addPrim(D_800AA60C[w->frame], &D_800EC8B4);
}

void AltTitleSetOptionText(s32 a, s32 b) {
    if (b == 0) {
        SetDebugText(((TitleSprite *)g_AltTitleOptionSlot)[a].n, (s32)g_AltTitleOptionOff, 0, 0, 0, 0);
    } else {
        SetDebugText(((TitleSprite *)g_AltTitleOptionSlot)[a].n, (s32)((u8 **)g_AltTitleOptionText)[a], 0x50, ((u8 *)g_AltTitleOptionY)[a], 0, 0);
    }
}
