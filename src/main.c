#include "common.h"
#include "psyq.h"
#include "work.h"

typedef struct {
    /* 0x00 */ u32 *ot;
    /* 0x04 */ u8 pad4[8];
    /* 0x0C */ u32 *otLast;
    /* 0x10 */ u8 pad10[4];
} OtInfo; /* size 0x14 */

extern u8 D_800BA118[];
extern s32 D_80074778;
extern s32 D_800A2B7C;
extern s32 D_800C7C70;
extern s16 D_800C7C74;
extern u8 D_8007BA70[2][0x13880];
extern u8 *D_800A5E60;
extern u8 D_800A4F48[2][0x640];
extern OtInfo D_800A651C[2];
extern u32 D_800A6610[2][0x1000];
extern OtInfo D_800AE7BC[2];
extern u32 D_800BA0D8[2][4];

extern void InitGraph(void);
extern void InitPad(void);
extern void InitSound(void);
extern void InitCdFiles(void);
extern void func_80014238(void);
extern void func_80014390(void);
extern void func_800191A8(void);
extern void func_800189A8(void);
extern void func_80015208(void);
extern void func_80010B40(void);
extern void func_80015498(void);
extern void func_8001C00C(void);
extern void func_800D25FC(void);
extern void func_800184F0(void);
extern void func_8003500C(void);
extern void func_8002D034(void);
extern void func_8001AF34(void);
extern void func_8001513C(void);

extern s32 D_80074788;
extern u16 D_80074794;
extern u16 D_80074798;
extern s32 D_800629D0;
extern s32 D_800AE810[];

extern int DrawSyncCallback(void (*func)(void));
extern void func_8001096C(void);
void DrawSyncHandler(void);
void SetFrameCallbacks(void);


/*
 * Boot: hardware/CD/memory card init, then the frame loop. Each frame flips
 * the double buffers, clears the ordering tables, runs the update on the
 * scratchpad stack (func_800D25FC lives in a MAIN.CD overlay), then waits
 * for vsync and draws. w->exitLoop drops out to the outer loop, which
 * re-runs the per-mode setup.
 */
int main(void)
{
    register u8 *unused_s0 = D_800BA118;
    register Work *w = &D_800AF630;
    s32 unused[6];

    SetVideoMode(0);
    D_80074778 = 0x3E0;
    InitGraph();
    MemCardInit(0);
    MemCardStart();
    InitPad();
    D_800A2B7C = CdInit();
    InitSound();
    InitCdFiles();

    while (1) {
        func_80014238();
        func_80014390();
        func_800191A8();
        SetFrameCallbacks();

        while (!w->exitLoop) {
            D_800C7C70++;
            D_800C7C70 = D_800C7C70 ? D_800C7C70 : 1;
            D_800C7C74 = !D_800C7C74;
            w->frame = D_800C7C74;

            D_800A5E60 = D_8007BA70[w->frame];
            w->pool[w->frame].buf = D_800A4F48[w->frame];
            w->pool[w->frame].size = 0x640;
            w->pool[w->frame].used = 0;

            func_800189A8();
            func_80015208();

            if (!w->unkA3E3) {
                w->unkA3A8++;
                w->unkA3AC += w->unkA3A8;
                D_800A651C[w->frame].ot = D_800A6610[w->frame];
                D_800A651C[w->frame].otLast = &D_800A6610[w->frame][0xFFF];
                ClearOTagR(D_800A651C[w->frame].ot, 0x1000);
                D_800AE7BC[w->frame].ot = D_800BA0D8[w->frame];
                D_800AE7BC[w->frame].otLast = &D_800BA0D8[w->frame][3];
                ClearOTagR(D_800AE7BC[w->frame].ot, 4);
                func_80010B40();
                SetSpadStack();
                func_80015498();
                ResetSpadStack();
                SetSpadStack();
                func_8001C00C();
                ResetSpadStack();
            } else {
                D_800AE7BC[w->frame].ot = D_800BA0D8[w->frame];
                D_800AE7BC[w->frame].otLast = &D_800BA0D8[w->frame][3];
                ClearOTagR(D_800AE7BC[w->frame].ot, 4);
                SetSpadStack();
                func_800D25FC();
                ResetSpadStack();
            }

            func_800184F0();
            DrawSync(0);
            VSync(w->vsyncMode);

            w->dispIdx = w->drawIdx;
            w->drawIdx++;
            if (w->drawIdx >= 2) {
                w->drawIdx = 0;
            }
            PutDispEnv(&w->disp[w->dispIdx]);
            PutDrawEnv(&w->draw[w->drawIdx]);
            CatPrim(D_800A651C[w->frame].ot + 0xFFC, &D_800A651C[w->frame].ot[D_80074778]);
            DrawOTag(D_800A651C[w->frame].ot + 0xFFF);
            DrawOTag(D_800AE7BC[w->frame].ot + 3);

            func_8003500C();
            func_8002D034();
            func_8001AF34();
            func_8001513C();
        }
        VSyncCallback(0);
    }
}

extern void func_80011778(void);
extern void func_80011818(u16 n);
extern void func_80011B7C(u16 n);
extern void func_800CEDFC(void);

extern u8 D_800AE888[];
extern s32 D_80072C70;
extern s32 D_80074780;
extern void func_8001C044(void);
extern void func_80015310(void);
extern void func_80010AE0(s32 n);
extern void func_8001A9F8(s32 n);
extern s32 func_80019A24(u8 *p, s32 a, s32 b, s32 c);

extern void func_8002D4C8(s32 a, s32 b);

extern void (*D_800629F4[])(void);
extern u8 D_800AE838[];
extern s32 D_80074784;

extern s32 D_80074790;

extern u8 D_800AE870[];

extern s16 D_801150D4;
extern void func_80029690(void);
extern void func_80018FC8(void);
extern void func_8001903C(void);
extern void func_80029274(void);
extern void func_8002941C(void);
extern void func_8002CDD8(void);
extern void func_800CEE74(void);
extern u16 func_80014B10(s32 port);
extern u16 func_800149E0(u8 port);
extern void func_800CEEC8();
extern void func_80029514(s32 a);
extern s32 D_800629C8;
extern u8 D_80078E78[];
extern void func_80014338(void);
extern u8 D_800AE880[];
extern u8 D_800AE848[];
extern s32 D_800C7C60;
extern u8 *D_800C7C64;
extern u8 D_800A2E20[];
extern s16 D_800B99DA;

void func_8001096C(void) {
    func_8002CDD8();
}

/* DrawSync callback: records the VSync counter for the current frame */
void DrawSyncHandler(void)
{
    register Work *w = &D_800AF630;

    D_800AE810[w->frame] = VSync(1);
}

u8 *func_80010A08(s32 size) {
    register Work *w = &D_800AF630;
    u8 *p;
    s32 n;
    n = (size + 3) / 4;
    p = D_800A5E60;
    D_800A5E60 += n << 2;
    return p;
}

/* Install the frame-timing callbacks */
void SetFrameCallbacks(void)
{
    DrawSyncCallback(DrawSyncHandler);
    VSyncCallback(func_8001096C);
}

void func_80010AE0(s32 a) {
    D_80074778 = a;
}

s32 func_80010B10(void) {
    return D_80074778;
}

void func_80010B40(void) {
    register Work *w = &D_800AF630;
    register void (*fn)(void);
    fn = D_800629F4[w->mode];
    fn();
}

void func_80010BB4(void) {
    register Work *w = &D_800AF630;
    w->unkA3E0 = 0;
    w->unkA3E1 = 1;
    w->unkA434 = 0;
    func_8001C044();
    func_80015310();
    func_80029690();
    D_801150D4 = 0;
    D_80074784 = 0;
    func_80018FC8();
    func_8001903C();
    func_80029274();
    func_8002941C();
    func_80010AE0(0x3E0);
    func_80011B7C(0);
    func_80011778();
}

void func_80010C7C(void) {
    s32 r;
    r = func_80019A24(D_800AE838, D_80072C70, 0, 0);
    if (r != 0) {
        func_80010AE0(0x3E0);
        func_80011778();
    }
}

void func_80010CEC(void) {
    register Work *w = &D_800AF630;
    func_800CEDFC();
    if (w->unkA3B6 != 0) {
        func_8001C044();
        func_80015310();
        func_80011818(3);
    }
}

void func_80010D60(void) {
    func_80010AE0(0x3E0);
    func_80011818(5);
}

void func_80010DA0(void) {
    register Work *w = &D_800AF630;
    func_80011778();
}

void func_80010DE0(void) {
    func_80011818(5);
}

void func_80010E14(void) {
    func_80011818(0xD);
}

void func_80010E48(void) {
    func_80011818(0xC);
}

void func_80010E7C(void) {
    register Work *w = &D_800AF630;
    func_8002D4C8(2, 0);
    w->exitLoop = 1;
}

void func_80010ED4(void) {
    D_800C7C60 = 0x57;
    D_800C7C64 = D_800A2E20;
    if (func_80019A24(D_800AE848, D_80072C70, 0, (s32)&D_800C7C60) != 0) {
        func_8002D4C8(2, 0);
        func_80010AE0(0x3E0);
        func_80014338();
        func_800116E0();
        D_800B99DA = 0;
        func_80011778();
    }
}

void func_80010F80(void) {
    register Work *w = &D_800AF630;
    u8 *p = D_80078E78;
    func_800CEEC8();
    if (w->unkA3B6 != 0) {
        func_80011B7C(0);
        func_8001C044();
        func_80015310();
        if (w->timer == 4) {
            w->unkA434 = 1;
            func_80011818(0xF);
        } else if (w->timer < 2) {
            w->mapId = 0x3005;
            w->unkA3DA = 0x3000;
            func_80029514(D_800629C8);
            if (w->timer == 1) {
                func_80011818(0xA);
                func_80011B7C(0xB);
            } else {
                func_80011818(0xA);
            }
        }
    }
}

void func_800110CC(void) {
    s32 pad0;
    func_8001A9F8(0);
    if (func_80019A24(D_800AE880, D_80072C70, 0, 0) != 0) {
        func_80010AE0(0x3E0);
        func_80011778();
        func_80015310();
    }
}

void func_80011144(void) {
    s32 pad0;
    s32 pad1;
    func_8001A9F8(0);
    if (func_80019A24(D_800AE888, D_80072C70, 0, 0) != 0) {
        func_80010AE0(0x3E0);
        func_80011778();
        func_80015310();
    }
}

void func_800111BC(void) {
    register Work *w = &D_800AF630;
    func_800CEE74();
    if (w->unkA3B6 != 0) {
        func_80011818(0xA);
    }
}

void func_80011220(void) {
    func_80011778();
    func_80011B7C(0);
}

void func_8001125C(void) {
    register Work *w = &D_800AF630;
    w->unkA434 = 0;
    func_800CEDFC();
}

void func_800112A8(void) {
}

void func_800112C8(void) {
    if (func_80019A24(D_800AE870, D_80072C70, 0, 0) != 0) {
        func_80011778();
    }
}

void func_80011320(void) {
    func_800CEDFC();
}

s32 func_80011350(void) {
    return D_80074784;
}

INCLUDE_ASM("asm/nonmatchings/main", func_80011380);

void func_80011680(void) {
    register Work *w = &D_800AF630;
    w->unkA434 = 0;
    func_8002D4C8(0x29, 0);
    func_80011818(5);
}

void func_800116E0(void) {
    func_8002D4C8(0x21, (u16)func_80028FBC());
    func_8002D4C8(0x22, (u16)func_80029000());
    if (func_80028D9C() == 0) {
        func_8002D4C8(0xC, 0);
    } else {
        func_8002D4C8(0xB, 0);
    }
}

void func_80011778(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3AE))++;
    *(u16 *)(w + 0xA3B4) = 0;
    *(u16 *)(w + 0xA3BA) = 0;
    *(u16 *)(w + 0xA3B8) = 0;
    *(u16 *)(w + 0xA3BE) = 0;
    *(u16 *)(w + 0xA3B0) = 0;
    *(u16 *)(w + 0xA3B6) = 0;
    *(u16 *)(w + 0xA3BC) = 0;
}

void func_80011818(u16 mode) {
    register Work *w = &D_800AF630;
    w->mode = mode;
    w->step = 0;
    w->unkA3BA = 0;
    w->timer = 0;
    w->unkA3BE = 0;
    w->unkA3B0 = 0;
    w->unkA3B6 = 0;
    w->unkA3BC = 0;
}

void func_800118AC(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3B4))++;
    *(u16 *)(w + 0xA3BA) = 0;
    *(u16 *)(w + 0xA3BE) = 0;
    *(u16 *)(w + 0xA3B6) = 0;
    *(u16 *)(w + 0xA3BC) = 0;
}

void func_80011928(u16 step) {
    register Work *w = &D_800AF630;
    w->step = step;
    w->unkA3BA = 0;
    w->unkA3BE = 0;
    w->unkA3B6 = 0;
    w->unkA3BC = 0;
}

void func_80011998(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3BA))++;
    *(u16 *)(w + 0xA3BC) = 0;
}

void func_800119F0(u16 v) {
    register Work *w = &D_800AF630;
    w->unkA3BA = v;
    w->unkA3BC = 0;
}

void func_80011A3C(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C0))++;
    *(u16 *)(w + 0xA3C6) = 0;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3CA) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C2) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

void func_80011ADC(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C0))--;
    *(u16 *)(w + 0xA3C6) = 0;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3CA) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C2) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

void func_80011B7C(u16 n) {
    register Work *w = &D_800AF630;
    w->unkA3C0 = n;
    w->unkA3C6 = 0;
    w->unkA3CC = 0;
    w->unkA3CA = 0;
    w->unkA3D0 = 0;
    w->unkA3C2 = 0;
    w->unkA3C8 = 0;
    w->unkA3CE = 0;
}

void func_80011C10(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C6))++;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

void func_80011C8C(u16 n) {
    register Work *w = &D_800AF630;
    w->unkA3C6 = n;
    w->unkA3CC = 0;
    w->unkA3D0 = 0;
    w->unkA3C8 = 0;
    w->unkA3CE = 0;
}

void func_80011CFC(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3CC))++;
    *(u16 *)(w + 0xA3CE) = 0;
}

void func_80011D54(u16 v) {
    register u8 *w = (u8 *)&D_800AF630;
    *(u16 *)(w + 0xA3CC) = v;
    *(u16 *)(w + 0xA3CE) = 0;
}

void func_80011DA0(void) {
    D_80074780 = 1;
}

void func_80011DCC(void) {
    D_80074780 = 0;
}

s32 func_80011DF4(void) {
    return D_80074780;
}

void func_80011E24(void)
{
    register Work *w = &D_800AF630;
    s32 unused; /* pads the frame to 0x10 like the original */

    D_80074788 = 0;
    if (D_800629D0 == 0) {
        w->unkA434 = 0;
    }
    D_80074794 = 0;
    D_80074798 = 0;
}

void func_80011E84(s32 v) {
    D_80074790 = v;
}

void func_80011EB4(void) {
    u16 r;
    switch (D_800629D0) {
    case 0:
        r = func_80014B10(0);
        ((u16 *)0x80700000)[D_80074788] = r;
        D_80074788++;
        r = func_800149E0(0);
        ((u16 *)0x80700000)[D_80074788] = r;
        D_80074788++;
        break;
    case 1:
        if (D_80074790 != 0) {
            D_80074794 = ((u16 *)D_80074790)[D_80074788++];
            D_80074798 = ((u16 *)D_80074790)[D_80074788++];
        } else {
            D_80074794 = 0;
            D_80074798 = 0;
        }
        break;
    case 2:
        D_80074794 = ((u16 *)0x80700000)[D_80074788++];
        D_80074798 = ((u16 *)0x80700000)[D_80074788++];
        break;
    }
}

void func_800120DC(u16 *a, u16 *b) {
    *a = D_80074794;
    *b = D_80074798;
}

typedef struct { u32 tag; u32 tpage; u8 r0, g0, b0, code; s16 x0, y0; u8 u0, v0; u16 clut; s16 w, h; } Spr18;

void func_8001212C(void) {
    register Work *w = &D_800AF630;
    Spr18 *s = (Spr18 *)D_800A5E60;
    u32 *ot = D_800A6610[w->frame];
    setlen(s, 5);
    *(u32 *)((u8 *)s + 4) = 0xE1000018;
    s->code = 0x66;
    s->clut = 0x77D6;
    s->r0 = 0x80;
    s->g0 = 0x80;
    s->b0 = 0x80;
    s->x0 = 0x30;
    s->y0 = 0x2E;
    s->u0 = 0x40;
    s->v0 = 0xE0;
    s->w = 0x60;
    s->h = 0x18;
    addPrim(ot + 1, s);
    s++;
    setlen(s, 5);
    *(u32 *)((u8 *)s + 4) = 0xE1000018;
    s->code = 0x66;
    s->clut = 0x77D6;
    s->r0 = 0x80;
    s->g0 = 0x80;
    s->b0 = 0x80;
    s->x0 = 0x30;
    s->y0 = 0x46;
    s->u0 = 0xA0;
    s->v0 = 0xE0;
    s->w = 0x60;
    s->h = 0x18;
    addPrim(ot + 1, s);
    s++;
    D_800A5E60 = (u8 *)s;
}
