#include "common.h"
#include "abil.h"

extern void func_80162CCC();
extern AbilStep D_ovl31_800CD6EC[];
extern AbilStep D_ovl31_800CD6F8[];

extern s32 func_80146E98();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80161208();
extern void func_80146CA0();
extern void func_80146D90();
extern s32 func_8014ED28();
extern void func_80154274();
extern void func_8016151C();
extern void func_801725A4();
extern s32 func_ovl31_800CCEAC();
extern s32 D_800D5404;
extern s32 rsin();

extern void func_ovl31_800CCEA0();

extern void func_80154150();
extern void func_801483E8();
extern void func_8014CBF8();
extern void func_801474EC();
extern void func_80146DE8();
extern void func_801477E8();
extern s32 D_800D3414;
extern void func_8014B5C4();
extern void func_8013C9C4();
extern void func_801466F0();
extern void func_8014C010();
extern s32 func_80147324();
extern s32 D_800D53C0;
extern void func_80148038();
extern void func_80147460();
extern void func_80147AD4();
extern void func_801473EC();
extern s32 func_80161450();
extern s32 func_ovl31_800CCE24();
extern void func_80146E90();

void func_ovl31_800CCB20(s32 arg0) {
    func_80154150(arg0, 0xF);
    func_801483E8(arg0);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    func_80146DE8(arg0, 0, 0, 0);
    func_801477E8(arg0, -0x120000);
    func_ovl31_800CCEA0(arg0);
}

extern AbilStep D_ovl31_800CD6DC[];

void func_ovl31_800CCB8C(u8 *arg0) {
    s32 i = AF(arg0, u16, 2) - 2;

    D_ovl31_800CD6DC[i]();
}

void func_ovl31_800CCBCC(s32 arg0) {
    func_80148038(arg0, 0x1A000);
    func_80147460(arg0);
    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    if (func_8014ED28(arg0) != 0) {
        func_80146D90(arg0);
    }
    func_8016151C(arg0);
    func_801725A4(arg0);
    if (AF(arg0, s32, 0x34) > 0) {
        func_801477E8(arg0, 0x40000);
        func_80154274(arg0, (s32) &D_800D53C0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl31_800CCEAC(arg0);
}

void func_ovl31_800CCC88(u8 *arg0) {
    if (func_8014ED28() != 0) {
        func_80146D90(arg0);
    }
    func_8016151C(arg0);
    func_801725A4(arg0);
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        func_80154274(arg0, &D_800D5404);
        func_80146CA0(arg0);
    }
    func_ovl31_800CCEAC(arg0);
}

void func_ovl31_800CCD04(s32 arg0) {
    s32 temp_v0;

    func_80148038(arg0, 0x1A000);
    func_80147460(arg0);
    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    if (func_8014ED28(arg0) != 0) {
        func_80146D90(arg0);
    }
    temp_v0 = func_80161450(arg0);
    if (temp_v0 & 5) {
        func_ovl31_800CCE24(arg0);
        func_80146E90(arg0, 0x10);
        func_80146CA0(arg0);
    }
    if (temp_v0 == 0) {
        func_801725A4(arg0);
        func_ovl31_800CCEAC(arg0);
    }
}

void func_ovl31_800CCDC4(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (func_80146E98() != 0) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    func_80161208(arg0);
}

s32 func_ovl31_800CCE24(s32 arg0) {
    func_8014B5C4(arg0, 2, 0);
    func_8013C9C4((s32) &D_800D3414);
    func_801466F0(5, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
    func_8014C010(arg0, 1);
    return func_80147324(0x47D);
}

void func_ovl31_800CCEA0(u8 *arg0) {
    AF(arg0, s32, 0x234) = 0x96;
}

extern void func_80013F3C();
extern void func_800126C4();
extern void func_800123F0();
extern void func_80012558();
extern s16 D_800B9A08;

s32 func_ovl31_800CCEAC(u8 *arg0) {
    if (D_800B9A08 == 0x306F) {
        if (AF(arg0, s32, 0x234) != 0) {
            AF(arg0, s32, 0x234)--;
            return 0;
        }
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return 1;
    }
    return 0;
}

void func_ovl31_800CCF14(u8 *a) {
    D_ovl31_800CD6EC[AF(a, u16, 2)](a);
}

extern s32 func_800233CC();

extern u8 D_801202A0[];
extern s32 func_8014C308();
extern s32 func_8014C278();
extern void func_80015978();
extern void func_8014C3A4();

extern u8 D_ovl31_800CD704;
extern u8 D_ovl31_800CD744;
extern s32 func_80146578();
extern void func_8001CD50();
extern void func_80149374();
extern void func_ovl31_800CD1F4();
extern void func_ovl31_800CD258();
extern void func_ovl31_800CD27C();
extern void func_ovl31_800CD1D4();

void func_ovl31_800CCF50(u8 *arg0) {
    u8 *s;
    u8 *o;
    u8 *p;

    s = AF(arg0, u8 *, 0x4C);
    o = (u8 *) func_80146578();
    p = &D_ovl31_800CD704;
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        func_8001CD50(o, p);
        AF(o, s32 *, 0x34) = &D_ovl31_800CD744;
        AF(o, s16, 0x1C) = 0;
        AF(o, s32, 4) |= 0x50000000;
        func_80149374(s, arg0 + 4);
        AF(o, u16, 0x10) = AF(s, u16, 0x100);
        AF(o, u16, 0x14) = AF(s, u16, 0x104);
        AF(o, u16, 0x12) = AF(AF(s, u8 *, 0x20), u16, 0x12);
        func_80146E90(arg0, 0x10);
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, s16, 0x62) = 0;
        func_ovl31_800CD1F4(arg0, p);
        func_ovl31_800CD258(arg0, p);
        func_ovl31_800CD27C(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl31_800CD1D4(arg0);
}

extern s32 func_80012FC8();
extern void func_ovl31_800CD31C();

void func_ovl31_800CD054(u8 *arg0) {
    u8 *m;
    u8 *p;
    s16 n;
    s16 v;
    u16 t;
    u16 u;

    p = &D_ovl31_800CD704;
    m = AF(arg0, u8 *, 0x20);
    func_ovl31_800CD258(arg0, p);
    func_ovl31_800CD27C(arg0);
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_801466F0(6, arg0, 0, 0, 0, AF(arg0, s16, 0x62), 0, 1);
        n = AF(arg0, s16, 0x62) + 1;
        AF(arg0, s16, 0x62) = n;
        if (n >= 8) {
            AF(arg0, s16, 0x62) = 0;
        }
        func_80147324(0x47E);
    }
    v = AF(m, s16, 0x1A) + func_80012FC8(AF(m, s16, 0x1A), 0x5000, 0xA, 1);
    AF(m, s16, 0x1A) = v;
    AF(m, s16, 0x18) = v;
    t = AF(arg0, u16, 0x60) + 0x20;
    AF(arg0, u16, 0x60) = t;
    u = AF(m, u16, 0x1C) + t;
    AF(m, u16, 0x1C) = u;
    if ((s16) u >= 0x1000) {
        AF(m, u16, 0x1C) = 0x1000;
    }
    AF(m, s16, 0x1E) = AF(m, u16, 0x1C) | 0x4000;
    if (AF(m, s16, 0x1C) == 0x1000) {
        AF(m, u16, 0x1C) = 0;
        AF(arg0, u16, 0x60) = 0;
        AF(p, ACol, 4) = AF(p, ACol, 0xC);
    }
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    func_ovl31_800CD31C(arg0);
}

void func_ovl31_800CD1D4(void) {
    func_80162CCC();
}

void func_ovl31_800CD1F4(u8 *arg0, u8 *arg1) {
    if (AF(arg0, s32, 0x50) == 0) {
        func_800233CC(arg1, 0x40);
    } else {
        func_800233CC(arg1, 0x30);
    }
    AF(arg1, u8, 0) = 0;
    AF(arg1, u8, 1) = 0;
    AF(arg1, u8, 2) = 0;
    AF(arg1, u8, 4) = 0;
    AF(arg1, u8, 5) = 0;
    AF(arg1, u8, 6) = 0;
}

void func_ovl31_800CD258(u8 *arg0, u8 *arg1) {
    u8 temp_v0;

    AF(arg1, u8, 8) = 0;
    AF(arg1, u8, 9) = 0;
    AF(arg1, u8, 0xA) = 0;
    temp_v0 = AF(arg0, s32, 0x1C) * 8;
    AF(arg1, u8, 0xE) = 0;
    AF(arg1, u8, 0xC) = temp_v0;
    AF(arg1, u8, 0xD) = temp_v0;
}

void func_ovl31_800CD27C(u8 *arg0) {
    AMtx sp10;
    s32 pad[2];
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_80013F3C(&sp10);
    func_800126C4(&sp10, AF(temp_s0, s16, 0x10));
    func_800123F0(&sp10, AF(temp_s0, s16, 0x14));
    func_80012558(&sp10, AF(temp_s0, s16, 0x12));
    func_800126C4(&sp10, 0x400);
    *AF(temp_s0, AMtx *, 0x34) = sp10;
}

void func_ovl31_800CD31C(u8 *arg0) {
    AVec v;
    u8 *p;

    for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C) {
        if (func_8014C308(arg0, p, 0x22, 0) != 0 && func_8014C278(arg0, p, 0x80) != 0) {
            func_80015978(p + 4, &v);
            v.pad = 0;
            func_8014C3A4(arg0, p, 0x22, &v);
        }
    }
}

void func_ovl31_800CD3C8(u8 *a) {
    D_ovl31_800CD6F8[AF(a, u16, 2)](a);
}

extern u8 D_ovl31_800CD764[];
extern void func_ovl31_800CD6D4();
extern u8 D_800D3428;
extern AMtx D_ovl31_800CD964[];
extern void func_ovl31_800CD670();
extern void func_ovl31_800CD650();

void func_ovl31_800CD404(u8 *arg0) {
    u8 *t;
    u8 *d;
    u8 *o;
    AMtx *m;

    t = AF(arg0, u8 *, 0x4C);
    d = &D_ovl31_800CD764[AF(arg0, s32, 0x50) << 6];
    func_8013C9C4(&D_800D3428);
    o = (u8 *) func_80146578();
    AF(arg0, u8 *, 0x20) = o;
    if (o != NULL) {
        func_8001CD50(o, d);
        AF(o, s16, 0x1E) = 0xCCC;
        AF(o, s16, 0x18) = 0;
        AF(o, s16, 0x1A) = 0;
        AF(o, s32, 4) |= 0x50000000;
        m = &D_ovl31_800CD964[AF(arg0, s32, 0x50)];
        AF(o, AMtx *, 0x34) = m;
        *m = *AF(AF(AF(arg0, u8 *, 0x4C), u8 *, 0x20), AMtx *, 0x34);
        AF(arg0, u16, 6) = AF(t, u16, 6);
        AF(arg0, u16, 0x60) = AF(arg0, u16, 0xA) = AF(t, u16, 0xA);
        AF(arg0, u16, 0xE) = AF(t, u16, 0xE);
        AF(arg0, s16, 0x62) = AF(t, s32, 0x1C);
        func_80146E90(arg0, 0x20);
        func_ovl31_800CD670(arg0, d);
        func_ovl31_800CD6D4(arg0, d);
        func_80146CA0(arg0);
        return;
    }
    func_ovl31_800CD650(arg0);
}

void func_ovl31_800CD57C(u8 *arg0) {
    s32 t;
    s32 sum;
    s32 d;
    s32 var_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_ovl31_800CD6D4(arg0, &D_ovl31_800CD764[AF(arg0, s32, 0x50) << 6]);
    sum = AF(temp_s0, u16, 0x1A) + func_80012FC8(AF(temp_s0, s16, 0x1A), 0x5000, 0xA, 1);
    AF(temp_s0, s16, 0x1A) = sum;
    AF(temp_s0, s16, 0x18) = sum;
    d = (s16) sum;
    t = rsin(d / 10) * 2;
    var_v1 = AF(arg0, s16, 0x62) * t;
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    AF(arg0, s16, 0xA) = AF(arg0, u16, 0x60) - (var_v1 >> 0xC);
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
    }
}

void func_ovl31_800CD650(void) {
    func_80162CCC();
}

void func_ovl31_800CD670(u8 *arg0, u8 *arg1) {
    u8 t;

    func_800233CC(arg1, 0x40);
    AF(arg1, u8, 0) = 0;
    AF(arg1, u8, 1) = 0;
    AF(arg1, u8, 2) = 0;
    t = AF(arg0, s16, 0x62) * 0xC;
    AF(arg1, u8, 6) = 0;
    AF(arg1, u8, 5) = t;
    AF(arg1, u8, 4) = t;
}

void func_ovl31_800CD6D4(void) {
}
