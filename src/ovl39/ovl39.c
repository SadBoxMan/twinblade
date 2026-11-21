#include "common.h"
#include "psyq.h"
#include "work.h"

typedef struct { char *name; s32 rest[7]; } TitleMovie;
extern CdlFILE *CdSearchFile(CdlFILE *fp, char *name);
extern int ResetCallback(void);
extern void *DMACallback(s32 ch, void (*cb)(void));
extern void NextStep(void);
extern void SetScreenMode2(s32 mode);
extern void QueueImage(void *p);
extern s32 GetTitleMovieIndex(void);
extern void NextTitleMovie(void);
extern void StrPlayMovie(TitleMovie *m);
extern void MdecReset(s32 a);
extern void MdecOut(void);
extern s32 MdecInSync(void);
extern s32 MdecOutSync(void);
extern u32 MdecStatus(void);
extern u16 D_800B99E4;
extern u16 D_800B99E6;
extern u16 D_800B99E8;
extern s32 D_800B9A18;
extern void (*g_TitleSteps[])(void);
extern u8 D_800D52BC[];
extern TitleMovie g_TitleMovies[];
extern u32 *D_800DB670;
extern s32 g_TitleResult;
extern s32 g_StrSkipRequested;
extern CdlFILE g_TitleMovieFile;

void TitleMain(void) {
    g_TitleSteps[D_800B99E4]();
}

extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern int CdControl(u8 com, u8 *param, u8 *result);
extern int CdRead2(s32 mode);
extern void StSetRing(u32 *ring, u32 size);
extern void StSetStream(u32 mode, u32 start, u32 end, void (*f1)(), void (*f2)());
extern void ClearDebugText(void);
extern s32 LoadFileStep(CdlFILE *file, void *dest, s32 arg2, s32 arg3);
extern void DrawNowLoading(s32 n);
extern void DrawTitle(void);
extern void ClutListSetWhite(void *p);
extern void TitleInitScreen(void);
extern void TitlePlayMovie(void);
extern void DecDCTReset(s32 a);
extern s32 strKickCD(u8 *loc);
extern void DecDCToutCallback(void (*cb)(void));
extern void MdecIn(u32 *p, u16 v);
extern CdlFILE D_800AE858;
extern u32 *g_StrRingBufPtr;
extern u8 g_TitleImageList[];
extern s32 g_TitleHasMovie;
extern s32 g_TitleBrightness;
extern s32 g_TitleFadeInDone;
extern s32 D_800EC6A4;
extern u8 D_800EC9E8[];

extern s32 ClutListFadeIn(void *p);
extern u32 D_800DB530[];
extern u32 D_800DB570[];
extern u32 D_800DB5B4[];
extern s32 g_TitleMenuState;

typedef struct { u16 type; u16 pad; RECT r; u16 *pix; } TitleImg;
extern void ClearObjectPools(void);
extern void InitMovieSound(void);
extern void InitDrawDispEnvs(void);
extern s32 TitleMovieExists(void);
extern void GsInitGraph2(s32 w, s32 h, s32 a, s32 b, s32 c);
extern void GsDefDispBuff2(s32 a, s32 b, s32 c, s32 d);
extern void GsInit3D(void);
extern u8 D_800B9A11;
extern s16 g_TitleCursor;
extern s32 g_TitleIdleFrames;
extern s32 D_800EC688;
extern s32 g_TitlePressStartOn;
extern s32 g_TitleBlinkCounter;
extern s32 g_ClutFadeDivider;
extern s16 D_800AF7BC;
extern s16 D_800AF7BE;
extern s16 D_800AF7C0;
extern u8 D_800AF6DC;
extern u8 D_800AF680;

void TitleInit(void) {
    D_800B9A11 = 1;
    ClearObjectPools();
    ClearDebugText();
    InitMovieSound();
    g_TitlePressStartOn = 1;
    g_TitleBrightness = 0x80;
    g_TitleCursor = 0;
    g_TitleIdleFrames = 0;
    g_TitleResult = 0;
    g_TitleMenuState = 0;
    g_TitleBlinkCounter = 0;
    D_800EC688 = 0xFF;
    g_TitleHasMovie = TitleMovieExists();
    ClutListSetWhite(g_TitleImageList);
    NextStep();
    NextStep();
}

void TitleLoadPicture1(void) {
    DrawNowLoading(0);
    if (LoadFileStep(&D_800AE858, (void *)0x80164E20, 0, 0) != 0) {
        ClearDebugText();
        NextStep();
    }
}

void TitleMovieAndScreen(void) {
    if (g_TitleHasMovie != 0) {
        TitlePlayMovie();
    }
    TitleInitScreen();
    D_800B9A18 = 0;
    g_TitleFadeInDone = 0;
    ClutListSetWhite(g_TitleImageList);
    D_800EC6A4 = 1;
    NextStep();
}

void TitleFadeInFromWhite(void) {
    DrawTitle();
    if (g_TitleFadeInDone == 0) {
        if (ClutListFadeIn(g_TitleImageList) == 0) {
            g_TitleFadeInDone = 1;
        }
    }
    if (g_TitleFadeInDone != 0 && D_800EC6A4 != 0) {
        g_TitleMenuState = 1;
        NextStep();
    }
}

extern s32 GetPadPressedDir(s32 a);
extern s32 GetPadHeldDir(s32 a);
extern void PlaySoundId(s32 a, s32 b);
extern void TitleLoadPicture(void);

void TitleMenu(void) {
    s32 pad;
    pad = GetPadPressedDir(0);
    GetPadHeldDir(0);
    switch (g_TitleMenuState) {
    case 0:
        break;
    case 1:
        g_TitlePressStartOn = (g_TitleBlinkCounter & 0x1F) < 0x18;
        g_TitleBlinkCounter++;
        if (pad & 0x840) {
            PlaySoundId(0xC6E, 0);
            g_TitleMenuState++;
        } else {
            g_TitleIdleFrames++;
        }
        break;
    case 3:
        TitleLoadPicture();
        g_TitleMenuState = 2;
        break;
    case 2:
        if (pad & 0x4000) {
            PlaySoundId(0x9C1, 0);
            if (++g_TitleCursor >= 2) {
                g_TitleCursor = 0;
            }
            g_TitleIdleFrames = 0;
        } else if (pad & 0x1000) {
            PlaySoundId(0x9C1, 0);
            if (--g_TitleCursor < 0) {
                g_TitleCursor = 1;
            }
            g_TitleIdleFrames = 0;
        } else if (pad & 0x840) {
            PlaySoundId(0x9C0, 0);
            g_TitleResult = g_TitleCursor;
            NextStep();
        }
        break;
    }
    DrawTitle();
    if (g_TitleIdleFrames >= 0x1C3) {
        g_TitleResult = 4;
        NextStep();
    }
}

void TitleFadeOut(void) {
    RECT r;
    DrawTitle();
    g_TitleBrightness -= 4;
    if (g_TitleBrightness < 0) {
        r.x = 0;
        r.y = 0;
        r.w = 0x280;
        r.h = 0x1E0;
        ClearImage(&r, 0, 0, 0);
        NextStep();
    }
}

void TitleRestoreScreen(void) {
    SetScreenMode2(1);
    D_800B9A18 = 2;
    NextStep();
}

void TitleFinish(void) {
    QueueImage(D_800D52BC);
    D_800B99E6 = 1;
    D_800B99E8 = g_TitleResult;
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
extern TitleSprt D_800EC6A8[2];
extern TitleSprt D_800EC6D8[2];
extern TitleSprt D_800EC708[2];
extern TitleSprt D_800EC738[2];
extern TitleSprt D_800EC768[2];
extern TitleSprt D_800EC798[2];
extern TitleSprt D_800EC7C8[2];
extern TitleSprt D_800EC7F8[2];
extern TitleSprt D_800EC828[2];
extern TitleSprt D_800EC858[2];

void DrawTitle(void) {
    Work *w = &D_800AF630;
    TitleSprt *p;
    TitleSprt *q;
    TitleSprt *p1, *p2, *p3, *p4, *p5, *p6;
    s32 f = w->frame;
    switch (g_TitleMenuState) {
    case 0: break;
    case 1:
        if (g_TitlePressStartOn != 0) {
            setlen(&D_800EC7C8[f], 5);
            p = &D_800EC7C8[f];
            ((u32 *)&D_800EC7C8[f])[1] = 0xE100008A;
            p->code = 0x64;
            p->r0 = p->g0 = p->b0 = g_TitleBrightness;
            p->x0 = -0xB0;
            p->y0 = 0x54;
            p->u0 = 0;
            p->v0 = 0;
            p->clut = 0x7800;
            p->w = 0x100;
            p->h = 0x20;
            D_800EC7C8[f].clut = 0x7880;
            addPrim(D_800AA60C[w->frame], p);
            setlen(&D_800EC7F8[f], 5);
            p = &D_800EC7F8[f];
            ((u32 *)&D_800EC7F8[f])[1] = 0xE100008C;
            p->code = 0x64;
            p->r0 = p->g0 = p->b0 = g_TitleBrightness;
            p->x0 = 0x50;
            p->y0 = 0x54;
            p->u0 = 0;
            p->v0 = 0;
            p->clut = 0x7800;
            p->w = 0x60;
            p->h = 0x20;
            D_800EC7F8[f].clut = 0x7880;
            addPrim(D_800AA60C[w->frame], p);
        }
        break;
    case 2:
        setlen(&D_800EC828[f], 5);
        q = &D_800EC828[f];
        ((u32 *)&D_800EC828[f])[1] = 0xE100008F;
        q->code = 0x64;
        q->r0 = q->g0 = q->b0 = g_TitleBrightness;
        q->x0 = -0x40;
        q->y0 = 0x44;
        q->u0 = 0;
        q->v0 = 0;
        q->clut = 0x7800;
        q->w = 0x80;
        q->h = 0x40;
        D_800EC828[f].clut = 0x7A80;
        addPrim(D_800AA60C[w->frame], q);
        setlen(&D_800EC858[f], 5);
        q = &D_800EC858[f];
        ((u32 *)&D_800EC858[f])[1] = 0xE100008D;
        q->code = 0x64;
        q->r0 = q->g0 = q->b0 = g_TitleBrightness;
        q->x0 = -0x70;
        q->y0 = g_TitleCursor * 32 + 0x44;
        q->u0 = 0;
        q->v0 = 0;
        q->clut = 0x7800;
        q->w = 0xE0;
        q->h = 0x20;
        D_800EC858[f].clut = 0x7800;
        addPrim(D_800AA60C[w->frame], q);
        break;
    }
    setlen(&D_800EC6A8[f], 5);
    p1 = &D_800EC6A8[f];
    ((u32 *)&D_800EC6A8[f])[1] = 0xE100008A;
    p1->code = 0x64;
    p1->r0 = p1->g0 = p1->b0 = g_TitleBrightness;
    p1->x0 = -0x140;
    p1->y0 = -0xDC;
    p1->u0 = 0;
    p1->v0 = 0x24;
    p1->clut = 0x78C0;
    p1->w = 0x100;
    p1->h = 0xDC;
    setlen(&D_800EC6D8[f], 5);
    p2 = &D_800EC6D8[f];
    ((u32 *)&D_800EC6D8[f])[1] = 0xE100008C;
    p2->code = 0x64;
    p2->r0 = p2->g0 = p2->b0 = g_TitleBrightness;
    p2->x0 = -0x40;
    p2->y0 = -0xDC;
    p2->u0 = 0;
    p2->v0 = 0x24;
    p2->clut = 0x78C0;
    p2->w = 0x100;
    p2->h = 0xDC;
    setlen(&D_800EC708[f], 5);
    p3 = &D_800EC708[f];
    ((u32 *)&D_800EC708[f])[1] = 0xE100008E;
    p3->code = 0x64;
    p3->r0 = p3->g0 = p3->b0 = g_TitleBrightness;
    p3->x0 = 0xC0;
    p3->y0 = -0xDC;
    p3->u0 = 0;
    p3->v0 = 0x24;
    p3->clut = 0x78C0;
    p3->w = 0x80;
    p3->h = 0xDC;
    setlen(&D_800EC738[f], 5);
    p4 = &D_800EC738[f];
    ((u32 *)&D_800EC738[f])[1] = 0xE100009A;
    p4->code = 0x64;
    p4->r0 = p4->g0 = p4->b0 = g_TitleBrightness;
    p4->x0 = -0x140;
    p4->y0 = 0;
    p4->u0 = 0;
    p4->v0 = 0;
    p4->clut = 0x78C0;
    p4->w = 0x100;
    p4->h = 0xDC;
    setlen(&D_800EC768[f], 5);
    p5 = &D_800EC768[f];
    ((u32 *)&D_800EC768[f])[1] = 0xE100009C;
    p5->code = 0x64;
    p5->r0 = p5->g0 = p5->b0 = g_TitleBrightness;
    p5->x0 = -0x40;
    p5->y0 = 0;
    p5->u0 = 0;
    p5->v0 = 0;
    p5->clut = 0x78C0;
    p5->w = 0x100;
    p5->h = 0xDC;
    setlen(&D_800EC798[f], 5);
    p6 = &D_800EC798[f];
    ((u32 *)&D_800EC798[f])[1] = 0xE100009E;
    p6->code = 0x64;
    p6->r0 = p6->g0 = p6->b0 = g_TitleBrightness;
    p6->x0 = 0xC0;
    p6->y0 = 0;
    p6->u0 = 0;
    p6->v0 = 0;
    p6->clut = 0x78C0;
    p6->w = 0x80;
    p6->h = 0xDC;
    addPrim(D_800AA60C[f], p6);
    addPrim(D_800AA60C[f], p5);
    addPrim(D_800AA60C[f], p4);
    addPrim(D_800AA60C[f], p3);
    addPrim(D_800AA60C[f], p2);
    addPrim(D_800AA60C[f], p1);
}

void ClutListSetWhite(void *arg) {
    TitleImg *p = arg;
    RECT r;
    u16 *d;
    s32 i;
    g_ClutFadeDivider = 0;
    while (p->type != 0xFF) {
        if (p->type == 9) {
            d = p->pix + p->r.w;
            for (i = 0; i < p->r.w; i++) {
                *d++ = 0x7FFF;
            }
            d = p->pix + p->r.w;
            r.x = p->r.x;
            r.y = p->r.y;
            r.w = p->r.w;
            r.h = p->r.h;
            LoadImage(&r, (u32 *)d);
        }
        p++;
    }
}

s32 ClutListFadeIn(void *arg) {
    TitleImg *p = arg;
    RECT r;
    u16 *d;
    u16 *s;
    u16 *src;
    s32 i;
    s32 ch;
    s32 any;
    s32 cr, cg, cb;
    s32 tr, tg, tb;
    u16 c;
    s32 t;
    any = 0;
    /* PORT NOTE: no return while the counter is below 2, as the original (it returns the slti result, 1) */
    if (++g_ClutFadeDivider >= 2) {
        g_ClutFadeDivider = 0;
        while (p->type != 0xFF) {
            if (p->type == 9) {
                ch = 0;
                src = p->pix;
                s = src + p->r.w;
                d = s;
                for (i = 0; i < p->r.w; i++, src++) {
                    t = *src;
                    cr = *d & 0x1F;
                    cg = *d & 0x3E0;
                    cb = *d & 0x7C00;
                    tr = t & 0x1F;
                    tg = t & 0x3E0;
                    tb = t & 0x7C00;
                    if (cr != tr) {
                        ch = 1;
                        if (cr < tr) cr += 1;
                        if (tr < cr) cr -= 1;
                    }
                    if (cg != tg) {
                        ch = 1;
                        if (cg < tg) cg += 0x20;
                        if (tg < cg) cg -= 0x20;
                    }
                    if (cb != tb) {
                        ch = 1;
                        if (cb < tb) cb += 0x400;
                        if (tb < cb) cb -= 0x400;
                    }
                    c = cr | cg | cb | (t & ~0x7FFF);
                    if (c == 0 && t != 0) {
                        c |= 0x8000;
                    }
                    *d++ = c;
                }
                if (ch) {
                    r.x = p->r.x;
                    r.y = p->r.y;
                    r.w = p->r.w;
                    r.h = p->r.h;
                    LoadImage(&r, (u32 *)s);
                }
                any |= ch;
            }
            p++;
        }
        return any;
    }
}

void TitleLoadPicture(void) {
    RECT r[2];
    s32 off;
    u8 *p;
    u8 *q;
    r[0].x = 0;
    r[0].y = 0x1E0;
    r[0].w = 0x100;
    r[0].h = 1;
    r[1].x = 0x280;
    r[1].y = 0x24;
    r[1].w = 0x140;
    r[1].h = 0x1B8;
    off = g_TitleCursor * 0x44E20;
    p = (u8 *)0x80120014 + off;
    q = (u8 *)0x80120220 + off;
    LoadImage(&r[0], (u32 *)p);
    LoadImage(&r[1], (u32 *)q);
}

s32 ClutListFadeOut(void *arg) {
    TitleImg *p = arg;
    RECT r;
    u16 *d;
    u16 *s;
    s32 i;
    s32 ch;
    s32 any;
    s32 cr, cg, cb;
    u16 c;
    u16 n;
    any = 0;
    while (p->type != 0xFF) {
        if (p->type == 9) {
            ch = 0;
            s = p->pix + p->r.w;
            d = s;
            for (i = 0; i < p->r.w; i++) {
                c = *d;
                cr = c & 0x1F;
                cg = c & 0x3E0;
                cb = c & 0x7C00;
                if (cr != 0) cr -= 1;
                if (cg != 0) cg -= 0x20;
                if (cb != 0) cb -= 0x400;
                n = cr | cg | cb;
                if (n != 0) {
                    ch = 1;
                }
                *d++ = n;
            }
            if (ch) {
                r.x = p->r.x;
                r.y = p->r.y;
                r.w = p->r.w;
                r.h = p->r.h;
                LoadImage(&r, (u32 *)s);
            }
            any |= ch;
        }
        p++;
    }
    return any;
}

void TitleInitScreen(void) {
    RECT r[3];
    D_800AF7BC = 0x280;
    D_800AF7BE = 0x1E0;
    D_800AF7C0 = 1;
    GsInitGraph2(0x280, 0x1E0, 5, 0, 0);
    GsDefDispBuff2(0, 0, 0, 0);
    ResetGraph(1);
    GsInit3D();
    InitDrawDispEnvs();
    r[0].x = 0;
    r[0].y = 0;
    r[0].w = 0x280;
    r[0].h = 0x14;
    ClearImage(&r[0], 0, 0, 0);
    r[1].x = 0;
    r[1].y = 0x14;
    r[1].w = 0x280;
    r[1].h = 0x1B8;
    ClearImage(&r[1], 0xFF, 0xFF, 0xFF);
    r[2].x = 0;
    r[2].y = 0x1CC;
    r[2].w = 0x280;
    r[2].h = 0x14;
    ClearImage(&r[2], 0, 0, 0);
    D_800AF6DC = 0;
    D_800AF680 = 0;
}
