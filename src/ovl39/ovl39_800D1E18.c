#include "common.h"
#include "psyq.h"

typedef struct { char *name; s32 rest[7]; } TitleMovie;
extern CdlFILE *CdSearchFile(CdlFILE *fp, char *name);
extern int ResetCallback(void);
extern void *DMACallback(s32 ch, void (*cb)(void));
extern void NextStep(void);
extern void SetScreenMode2(s32 mode);
extern void func_800183E0(void *p);
extern s32 func_8001BFA0(void);
extern void func_8001BFB0(void);
extern s32 func_800D1E9C(TitleMovie *m);
extern void func_800D2D68(s32 a);
extern void func_800D2EF8();
extern s32 func_800D2F88(void);
extern s32 func_800D3020(void);
extern u32 func_800D30B8(void);
extern u16 D_800B99E4;
extern u16 D_800B99E6;
extern u16 D_800B99E8;
extern s32 D_800B9A18;
extern void (*D_800D3598[])(void);
extern u8 D_800D52BC[];
extern TitleMovie D_800D942C[];
extern volatile u32 *D_800DB670;
extern s32 D_800EC680;
extern s32 D_800EC9E0;
extern CdlFILE D_800EC9FC;

s32 func_800D1E18(void) {
    return CdSearchFile(&D_800EC9FC, D_800D942C[func_8001BFA0()].name) != 0;
}

void func_800D1E58(void) {
    D_800EC9E0 = 0;
    func_800D1E9C(&D_800D942C[func_8001BFA0()]);
    func_8001BFB0();
}

extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern int CdControl(u8 com, u8 *param, u8 *result);
extern int CdRead2(s32 mode);
extern void StSetRing(u32 *ring, u32 size);
extern void StSetStream(u32 mode, u32 start, u32 end, void (*f1)(), void (*f2)());
extern void func_80015310(void);
extern s32 LoadFileStep(CdlFILE *file, void *dest, s32 arg2, s32 arg3);
extern void DrawNowLoading(s32 n);
extern void func_800CF3E8(void);
extern void func_800CFB3C(void *p);
extern void func_800CFFEC(void);
extern void func_800D1E58(void);
extern void func_800D2AA0(s32 a);
extern s32 func_800D2A24(u8 *loc);
extern void func_800D2D44(void (*cb)(void));
extern void func_800D2E64(u32 *p, u32 size);
extern CdlFILE D_800AE858;
extern u32 *D_800D946C;
extern u8 D_800DA48C[];
extern s32 D_800EC684;
extern s32 D_800EC68C;
extern s32 D_800EC6A0;
extern s32 D_800EC6A4;
extern u8 D_800EC9E8[];

extern s32 func_800CFC1C(void *p);
extern u32 D_800DB530[];
extern u32 D_800DB570[];
extern u32 D_800DB5B4[];
extern s32 D_800EC690;

typedef struct {
    u32 *vlcbuf[2];
    s32 vlcid;
    u16 *imgbuf[2];
    s32 imgid;
    RECT rect[2];
    s32 rectid;
    RECT slice;
    s32 isdone;
} DECENV;
extern s32 func_800D30D0(char *s);
extern int printf(char *fmt, ...);
extern volatile u32 *D_800DB63C;
extern volatile u32 *D_800DB640;
extern volatile u32 *D_800DB644;
extern volatile u32 *D_800DB648;
extern volatile u32 *D_800DB64C;
extern volatile u32 *D_800DB650;
extern volatile u32 *D_800DB66C;
extern volatile u32 *D_800DB674;
extern char D_800CEE1C[];
extern char D_800CEE38[];
extern char D_800CEE48[];
extern char D_800CEE58[];
extern char D_800CEE80[];
extern char D_800CEEB8[];
extern u32 D_800DB52C[];
extern u32 D_800DB5B0[];

typedef struct { DECENV d; s32 mode; } DECENV2;
extern u32 *func_800D27A0(DECENV *dec, TitleMovie *m);
extern void DecDCTvlc(u32 *bs, u32 *buf);
extern void StFreeRing(u32 *p);
extern s32 D_800D9480;
extern u32 *D_800D9470;
extern u32 *D_800D9474;
extern u16 *D_800D9478;
extern u16 *D_800D947C;

typedef struct { u16 id, type, secCount, nSectors; u32 frameCount; u32 frameSize; u16 width, height; } StHEADER;
extern int StGetNext(u32 **addr, u32 **header);
extern s32 D_800D9484;
extern s32 D_800D9488;
extern s32 D_800EC9F4;
extern s32 D_800EC9F8;

extern void SetDefDispEnv(DISPENV *env, s32 x, s32 y, s32 w, s32 h);
extern void StUnSetRing(void);
extern void SetFrameCallbacks(void);
extern s32 TestPadsAny(s32 a, s32 b);
extern void UpdatePads(void);
extern void func_8002D034(void);
extern void func_8002D8A8(void);
extern void func_8002D8D4(void);
extern void func_800D2394(DECENV2 *e, s32 x0, s32 y0, s32 x1, s32 y1, TitleMovie *m);
extern s32 func_800D2454();
extern s32 func_800D2704(DECENV *dec, TitleMovie *a);
extern void func_800D298C();
extern void func_800D2C0C(u32 *p, s32 f);
extern void func_800D2C88();
extern void func_800D24D0(void);
extern DECENV2 D_800EC9A4;
extern s32 D_800EC9E4;
extern s32 D_800EC9F0;
#define MW(m, v) ((m)->rest[0] ? (v) * 3 / 2 : (v))

s32 func_800D1E9C(TitleMovie *m) {
    DISPENV disp;
    DRAWENV draw;
    RECT r[2];
    s32 id;
    s32 pad[2];
    D_800EC9F0 = 1;
    func_800D2394(&D_800EC9A4, MW(m, m->rest[3]), m->rest[4], MW(m, m->rest[3]), m->rest[4] + m->rest[6], m);
    if (func_800D2454((u8 *)&D_800EC9FC, func_800D24D0, m) != 0) {
        func_800D2D44(0);
        StUnSetRing();
        func_8002D8D4();
        func_800D2AA0(0);
        SetFrameCallbacks();
        return 1;
    }
    if (func_800D2704(&D_800EC9A4.d, m) != 0) {
        func_800D2D44(0);
        StUnSetRing();
        func_8002D8D4();
        func_800D2AA0(0);
        SetFrameCallbacks();
        return 1;
    }
    D_800EC9F4 = 0;
    D_800EC9F8 = 0;
    SetDispMask(0);
    VSync(0);
    r[0].x = 0;
    r[0].y = 0;
    r[0].w = MW(m, m->rest[5]);
    r[0].h = m->rest[6] * 2;
    if (m->rest[0]) {
        ClearImage(&r[0], 0, 0, 0);
        r[1].x = 0x1E0;
        r[1].y = 0;
        r[1].w = 0xA0;
        r[1].h = 0x1E0;
        ClearImage(&r[1], 0xFF, 0xFF, 0xFF);
    } else {
        ClearImage(&r[0], 0, 0, 0);
        r[1].x = 0x140;
        r[1].y = 0;
        r[1].w = 0x140;
        r[1].h = 0x1E0;
        ClearImage(&r[1], 0xFF, 0xFF, 0xFF);
    }
    while (1) {
        func_800D2C0C(D_800EC9A4.d.vlcbuf[D_800EC9A4.d.vlcid], m->rest[0] ? 3 : 2);
        func_800D2C88(D_800EC9A4.d.imgbuf[D_800EC9A4.d.imgid],
                      ((D_800EC9A4.d.slice.w << 4) * ((D_800EC9A4.d.slice.h - 1) / 16 + 1)) >> 1);
        if (func_800D2704(&D_800EC9A4.d, m) != 0) {
            func_800D2D44(0);
            StUnSetRing();
            func_8002D8D4();
            break;
        }
        func_800D298C(&D_800EC9A4.d, 0);
        VSync(0);
        id = D_800EC9A4.d.rectid ? 0 : 1;
        SetDefDispEnv(&disp, D_800EC9A4.d.rect[id].x - MW(m, m->rest[3]), D_800EC9A4.d.rect[id].y - m->rest[4],
                      MW(m, m->rest[5]), m->rest[6]);
        if (m->rest[0]) {
            disp.isrgb24 = m->rest[0];
            disp.disp.w = disp.disp.w * 2 / 3;
        }
        PutDispEnv(&disp);
        SetDispMask(1);
        if (D_800EC9F4 == 1) {
            goto end;
        }
        UpdatePads();
        if (D_800EC9F8 == 0) {
            if (D_800EC9E0 == 0) {
                if (TestPadsAny(0, 0x800) != 0) {
                    D_800EC9E0 = 1;
                    D_800EC9E4 = 0x10;
                    func_8002D8A8();
                }
            } else if (--D_800EC9E4 == 0) {
                goto end;
            }
        }
        func_8002D034();
        continue;
    end:
        func_800D2D44(0);
        StUnSetRing();
        func_8002D8D4();
        CdControlB(9, 0, 0);
        break;
    }
    func_800D2AA0(0);
    SetDispMask(1);
    SetFrameCallbacks();
    return 1;
}

void func_800D2394(DECENV2 *e, s32 x0, s32 y0, s32 x1, s32 y1, TitleMovie *m) {
    DECENV *dec = &e->d;
    if (D_800D9480 == 1) {
        dec->vlcbuf[0] = D_800D9470;
        dec->vlcbuf[1] = D_800D9474;
        dec->vlcid = 0;
        dec->imgbuf[0] = D_800D9478;
        dec->imgbuf[1] = D_800D947C;
        dec->imgid = 0;
        dec->rectid = 0;
        dec->isdone = 0;
        D_800D9480 = 0;
    }
    dec->rect[0].x = x0;
    dec->rect[0].y = y0;
    dec->rect[1].x = x1;
    dec->rect[1].y = y1;
    dec->slice.w = m->rest[0] ? 24 : 16;
    e->mode = m->rest[0];
    if (dec->rectid == 0) {
        dec->slice.x = x0;
        dec->slice.y = y0;
    } else {
        dec->slice.x = x1;
        dec->slice.y = y1;
    }
}

s32 func_800D2454(u8 *loc, void (*cb)(void), u32 *frames) {
    func_800D2AA0(0);
    func_800D2D44(cb);
    StSetRing(D_800D946C, 0x20);
    StSetStream(frames[1], frames[2], -1, 0, 0);
    func_800D2A24(loc);
}

extern void StCdInterrupt(void);
extern s32 D_800A5F1C;

void func_800D24D0(void) {
    RECT snap;
    s32 id;
    s32 rem;
    s32 pad[2];
    if (D_800EC9A4.mode != 0 && D_800A5F1C != 0) {
        StCdInterrupt();
        D_800A5F1C = 0;
    }
    id = D_800EC9A4.d.imgid;
    snap = D_800EC9A4.d.slice;
    D_800EC9A4.d.imgid = D_800EC9A4.d.imgid ? 0 : 1;
    if (D_800EC9F0 != 0 && (rem = D_800EC9A4.d.rect[D_800EC9A4.d.rectid].w % D_800EC9A4.d.slice.w) != 0) {
        D_800EC9F0 = 0;
        D_800EC9A4.d.slice.x += rem;
    } else {
        D_800EC9A4.d.slice.x += D_800EC9A4.d.slice.w;
    }
    if (D_800EC9A4.d.slice.x < D_800EC9A4.d.rect[D_800EC9A4.d.rectid].x + D_800EC9A4.d.rect[D_800EC9A4.d.rectid].w) {
        func_800D2C88(D_800EC9A4.d.imgbuf[D_800EC9A4.d.imgid],
                      ((D_800EC9A4.d.slice.w << 4) * ((D_800EC9A4.d.slice.h - 1) / 16 + 1)) >> 1);
    } else {
        D_800EC9A4.d.isdone = 1;
        D_800EC9A4.d.rectid = D_800EC9A4.d.rectid ? 0 : 1;
        D_800EC9A4.d.slice.x = D_800EC9A4.d.rect[D_800EC9A4.d.rectid].x;
        D_800EC9A4.d.slice.y = D_800EC9A4.d.rect[D_800EC9A4.d.rectid].y;
        D_800EC9F0 = 1;
    }
    LoadImage(&snap, (u32 *)D_800EC9A4.d.imgbuf[id]);
}

s32 func_800D2704(DECENV *dec, TitleMovie *a) {
    s32 cnt = 0x20;
    u32 *next;
    while ((next = func_800D27A0(dec, a)) == 0) {
        if (--cnt == 0) {
            return 1;
        }
    }
    dec->vlcid = dec->vlcid ? 0 : 1;
    DecDCTvlc(next, dec->vlcbuf[dec->vlcid]);
    StFreeRing(next);
    return 0;
}

u32 *func_800D27A0(DECENV *dec, TitleMovie *m) {
    u32 *addr;
    StHEADER *sector;
    s32 cnt = 0x8000;
    while (StGetNext(&addr, (u32 **)&sector)) {
        if (--cnt == 0) {
            return 0;
        }
    }
    if (sector->frameCount >= (u32)m->rest[2]) {
        D_800EC9F4 = 1;
    }
    if (sector->frameCount >= (u32)(m->rest[2] - 15)) {
        D_800EC9F8 = 1;
    } else {
        D_800EC9F8 = 0;
    }
    if (D_800D9484 != sector->width || D_800D9488 != sector->height) {
        RECT rect;
        rect.x = 0;
        rect.y = 0;
        rect.w = m->rest[0] ? m->rest[5] * 3 / 2 : m->rest[5];
        rect.h = m->rest[6] * 2;
        if (m->rest[0]) {
            ClearImage(&rect, 0, 0, 0);
        } else {
            ClearImage(&rect, 0x40, 0x40, 0x40);
        }
        D_800D9484 = sector->width;
        D_800D9488 = sector->height;
    }
    dec->rect[0].w = dec->rect[1].w = m->rest[0] ? D_800D9484 * 3 / 2 : D_800D9484;
    dec->rect[0].h = dec->rect[1].h = D_800D9488;
    dec->slice.h = D_800D9488;
    return addr;
}

void func_800D298C(DECENV *dec) {
    volatile s32 cnt = 0x8000;
    while (dec->isdone == 0) {
        if (--cnt == 0) {
            dec->isdone = 1;
            dec->rectid = dec->rectid ? 0 : 1;
            dec->slice.x = dec->rect[dec->rectid].x;
            dec->slice.y = dec->rect[dec->rectid].y;
        }
    }
    dec->isdone = 0;
}

s32 func_800D2A24(u8 *loc) {
    s32 r;
retry:
    do {
        r = CdControl(2, loc, D_800EC9E8);
        if (D_800EC9E8[0] & 0x10) {
            return 1;
        }
    } while (r == 0);
    if (CdRead2(0x1C0) == 0) {
        goto retry;
    }
    return 0;
}

void func_800D2AA0(s32 a) {
    if (a == 0) {
        ResetCallback();
    }
    func_800D2D68(a);
}

u32 *func_800D2AD8(u32 *dst) {
    u32 *s;
    u32 *d;
    s32 n;
    d = dst;
    s = D_800DB530;
    n = 15;
    do {
        *d++ = *s++;
    } while (--n != -1);
    d = dst + 16;
    s = D_800DB570;
    n = 15;
    do {
        *d++ = *s++;
    } while (--n != -1);
    d = dst + 32;
    s = D_800DB5B4;
    n = 31;
    do {
        *d++ = *s++;
    } while (--n != -1);
    return dst;
}

u32 *func_800D2B64(u32 *env) {
    u32 *s;
    u32 *d;
    s32 n;
    s = env;
    d = D_800DB530;
    n = 15;
    do {
        *d++ = *s++;
    } while (--n != -1);
    d = D_800DB570;
    s = env + 16;
    n = 15;
    do {
        *d++ = *s++;
    } while (--n != -1);
    func_800D2E64(D_800DB52C, 0x20);
    func_800D2E64(D_800DB5B0, 0x20);
    return env;
}

u16 func_800D2C00(u16 *p) {
    return *p;
}

void func_800D2C0C(u32 *p, s32 f) {
    if (f & 1) {
        *p &= ~0x08000000;
    } else {
        *p |= 0x08000000;
    }
    if (f & 2) {
        *p |= 0x02000000;
    } else {
        *p &= ~0x02000000;
    }
    func_800D2E64(p, *(u16 *)p);
}

void func_800D2C88(void) {
    func_800D2EF8();
}

s32 func_800D2CA8(s32 a) {
    if (a != 0) {
        return (func_800D30B8() >> 29) & 1;
    }
    return func_800D2F88();
}

s32 func_800D2CE4(s32 a) {
    if (a != 0) {
        return (func_800D30B8() >> 24) & 1;
    }
    return func_800D3020();
}

void func_800D2D20(void (*cb)(void)) {
    DMACallback(0, cb);
}

void func_800D2D44(void (*cb)(void)) {
    DMACallback(1, cb);
}

void func_800D2D68(s32 mode) {
    switch (mode) {
    case 0:
        *D_800DB670 = 0x80000000;
        *D_800DB644 = 0;
        *D_800DB650 = 0;
        *D_800DB670 = 0x60000000;
        func_800D2E64(D_800DB52C, 0x20);
        func_800D2E64(D_800DB5B0, 0x20);
        break;
    case 1:
        *D_800DB670 = 0x80000000;
        *D_800DB644 = 0;
        *D_800DB650 = 0;
        *D_800DB650;
        *D_800DB670 = 0x60000000;
        break;
    default:
        printf(D_800CEE1C, mode);
        break;
    }
}

void func_800D2E64(u32 *p, u32 size) {
    func_800D2F88();
    *D_800DB674 |= 0x88;
    *D_800DB63C = (u32)(p + 1);
    *D_800DB640 = ((size >> 5) << 16) | 0x20;
    *D_800DB66C = *p;
    *D_800DB644 = 0x01000201;
}

void func_800D2EF8(u32 *p, u32 size) {
    func_800D3020();
    *D_800DB674 |= 0x88;
    *D_800DB650 = 0;
    *D_800DB648 = (u32)p;
    *D_800DB64C = ((size >> 5) << 16) | 0x20;
    *D_800DB650 = 0x01000200;
}

s32 func_800D2F88(void) {
    volatile s32 cnt = 0x100000;
    while (*D_800DB670 & 0x20000000) {
        if (--cnt == -1) {
            func_800D30D0(D_800CEE38);
            return -1;
        }
    }
    return 0;
}

s32 func_800D3020(void) {
    volatile s32 cnt = 0x100000;
    while (*D_800DB650 & 0x01000000) {
        if (--cnt == -1) {
            func_800D30D0(D_800CEE48);
            return -1;
        }
    }
    return 0;
}

u32 func_800D30B8(void) {
    return *D_800DB670;
}

s32 func_800D30D0(char *s) {
    u32 st;
    printf(D_800CEEB8, s);
    st = *D_800DB670;
    printf(D_800CEE58, (*D_800DB644 >> 24) & 1, (*D_800DB650 >> 24) & 1, *D_800DB63C, *D_800DB648);
    printf(D_800CEE80, ~st >> 31, (st >> 30) & 1, (st >> 29) & 1, (st >> 28) & 1, (st >> 27) & 1,
           (st >> 25) & 1, (st >> 23) & 1);
    *D_800DB670 = 0x80000000;
    *D_800DB644 = 0;
    *D_800DB650 = 0;
    *D_800DB650;
    *D_800DB670 = 0x60000000;
    return 0;
}
