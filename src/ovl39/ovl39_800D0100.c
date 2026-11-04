#include "common.h"
#include "psyq.h"
#include "work.h"

extern void NextStep(void);
extern void func_80015310(void);
extern void func_800183E0(void *p);
extern void func_8001C044(void);
extern void func_8002D858(void);
extern s32 func_800D1E18(void);
extern void func_800D1E58(void);
extern void func_800D0D6C(void);
extern void func_800D12D0(void);
extern void SetScreenMode2(s32 mode);
extern void func_800D1D14(s32 a, s32 b);
extern void (*D_800D363C[])(void);
extern u8 D_800D4E6C[];
extern u8 D_800D52BC[];
extern s32 D_800EC88C;
extern s16 D_800EC898;
extern s32 D_800EC8A0;
extern u8 D_800D93FC[];
extern s32 D_800EC890;
extern s16 D_800EC894;
extern s32 D_800EC8B0;

void func_800D0100(void) {
    register Work *w = &D_800AF630;
    D_800D363C[w->step]();
}

void func_800D0174(void) {
    register Work *w = &D_800AF630;
    w->unkA3E1 = 1;
    func_8001C044();
    func_80015310();
    func_8002D858();
    func_800183E0(D_800D93FC);
    D_800EC894 = 0;
    D_800EC8B0 = func_800D1E18();
    NextStep();
}

void func_800D0204(void) {
    if (D_800EC8B0 != 0) {
        func_800D1E58();
        func_800D0D6C();
        NextStep();
    } else {
        NextStep();
    }
}

typedef struct { s16 n; s16 pad; } TitleSprite;
extern void SetStep(u16 step);
extern void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern u8 D_800D3618[];
extern u8 D_800D3620[];
extern u8 *D_800D3624[];
extern TitleSprite D_800D3630[];

extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern u16 GetPadPressedDir(s32 a);
extern u16 func_800167F0(s32 a);
extern void func_800167B8(s32 a);
extern void func_8002D4C8(s32 a, s32 b);

void func_800D0268(void) {
    register Work *w = &D_800AF630;
    u16 pad;
    pad = GetPadPressedDir(0);
    if (pad & 0x4000) {
        func_8002D4C8(0x9C1, 0);
        D_800EC894++;
        if (D_800EC894 >= 3) {
            D_800EC894 = 0;
        }
    } else if (pad & 0x1000) {
        func_8002D4C8(0x9C1, 0);
        D_800EC894--;
        if (D_800EC894 < 0) {
            D_800EC894 = 2;
        }
    }
    switch (D_800EC894) {
    case 0:
        if (pad & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            NextStep();
        }
        break;
    case 1:
    case 2:
        if (pad & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            NextStep();
        }
        break;
    }
    func_800D0D6C();
}

void func_800D0440(void) {
    register Work *w = &D_800AF630;
    RECT r;
    if (func_800167F0(4)) {
        switch (D_800EC894) {
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
    func_800D0D6C();
}

void func_800D05B4(void) {
    register Work *w = &D_800AF630;
    s32 unused[4];
    func_8001C044();
    func_80015310();
    w->unkA3E1 = 0;
    D_800EC890 = 0;
    D_800EC8A0 = 1;
    func_800183E0(D_800D4E6C);
    func_800183E0(D_800D52BC);
    D_800EC894 = 0;
    D_800EC88C = -1;
    w->timer = 0;
    NextStep();
}

void func_800D0664(void) {
    register Work *w = &D_800AF630;
    s32 unused;
    func_80015310();
    func_800183E0(D_800D93FC);
    NextStep();
}

void func_800D06BC(void) {
    register Work *w = &D_800AF630;
    func_800D12D0();
    D_800EC890 += 4;
    if (D_800EC890 >= 0x80) {
        D_800EC890 = 0x80;
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

void func_800D0740(void) {
    register Work *w = &D_800AF630;
    s32 moved;
    func_800D12D0();
    D_800EC888 = GetPadPressedDir(0);
    moved = 0;
    if (D_800EC888 & 0x4000) {
        func_8002D4C8(0x9C1, 0);
        moved = 1;
        D_800EC894++;
        if (D_800EC894 >= 3) {
            D_800EC894 = 0;
        }
    } else if (D_800EC888 & 0x1000) {
        func_8002D4C8(0x9C1, 0);
        moved = 1;
        D_800EC894--;
        if (D_800EC894 < 0) {
            D_800EC894 = 2;
        }
    }
    D_800EC898 = 0;
    switch (D_800EC894) {
    case 0:
        if (D_800EC888 & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            NextStep();
        }
        break;
    case 1:
    case 2:
        if (D_800EC888 & 0x800) {
            func_8002D4C8(0x9C0, 0);
            func_800167B8(4);
            NextStep();
        }
        break;
    }
    if (D_800EC88C > 0) {
        if (--D_800EC88C == 0) {
            func_800167B8(4);
            D_800EC894 = 4;
            NextStep();
        }
    }
}

void func_800D09A0(void) {
    register Work *w = &D_800AF630;
    func_800D12D0();
    D_800EC898++;
    if (D_800EC898 & 4) {
        func_800D1D14(D_800EC894, 1);
    } else {
        func_800D1D14(D_800EC894, 0);
    }
    if (D_800EC898 >= 0x21) {
        NextStep();
    }
}

void func_800D0A7C(void) {
    register Work *w = &D_800AF630;
    D_800EC890 -= 4;
    if (D_800EC890 < 0) {
        D_800EC890 = 0;
        SetScreenMode2(1);
        w->vsyncMode = 2;
        NextStep();
    } else {
        func_800D12D0();
    }
}

void func_800D0B1C(void) {
    register Work *w = &D_800AF630;
    func_800183E0(D_800D4E6C);
    switch (D_800EC894) {
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

void func_800D0C50(void) {
    RECT r[2];
    u8 *q;
    u8 *p;
    p = (u8 *)(D_800EC894 * 0x4B220 + 0x80114014);
    q = (u8 *)(D_800EC894 * 0x4B220 + 0x80114220);
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

void func_800D0D6C(void) {
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
    D_800EC98C.y0 = D_800EC894 * 20 + 0x20;
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

void func_800D12D0(void) {
    register Work *w = &D_800AF630;
    setlen(&D_800EC8B4, 5);
    D_800EC8B4.tpage = 0xE100008A;
    D_800EC8B4.code = 0x64;
    D_800EC8B4.r0 = D_800EC8B4.g0 = D_800EC8B4.b0 = D_800EC890;
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
    D_800EC8CC.r0 = D_800EC8CC.g0 = D_800EC8CC.b0 = D_800EC890;
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
    D_800EC8E4.r0 = D_800EC8E4.g0 = D_800EC8E4.b0 = D_800EC890;
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
    D_800EC8FC.r0 = D_800EC8FC.g0 = D_800EC8FC.b0 = D_800EC890;
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
    D_800EC914.r0 = D_800EC914.g0 = D_800EC914.b0 = D_800EC890;
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
    D_800EC92C.r0 = D_800EC92C.g0 = D_800EC92C.b0 = D_800EC890;
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
    D_800EC944.r0 = D_800EC944.g0 = D_800EC944.b0 = D_800EC890;
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
    D_800EC98C.r0 = D_800EC98C.g0 = D_800EC98C.b0 = D_800EC890;
    D_800EC98C.x0 = -0xBE;
    D_800EC98C.y0 = D_800EC894 * 20 + 0x64;
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

void func_800D1D14(s32 a, s32 b) {
    if (b == 0) {
        func_8001534C(((TitleSprite *)D_800D3630)[a].n, (s32)D_800D3618, 0, 0, 0, 0);
    } else {
        func_8001534C(((TitleSprite *)D_800D3630)[a].n, (s32)((u8 **)D_800D3624)[a], 0x50, ((u8 *)D_800D3620)[a], 0, 0);
    }
}
