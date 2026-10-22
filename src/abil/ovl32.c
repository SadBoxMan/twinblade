#include "common.h"
#include "abil.h"

void func_ovl32_800CCB20(void) {
}

extern void func_80162CCC();
extern void func_80146CA0();
extern void func_ovl32_800CE004();
extern void func_ovl32_800CE134();
extern void func_80015954();
extern AbilStep D_ovl32_800CE220[];
extern AbilStep D_ovl32_800CE24C[];
extern AbilStep D_ovl32_800CE254[];
extern AbilStep D_ovl32_800CE25C[];
extern AbilStep D_ovl32_800CE268[];

extern void func_80015978();
extern void func_80146C3C();
extern s32 func_80146E98();
extern s32 func_80012F74();
extern void func_ovl32_800CD758();
extern s32 func_801619D0();
extern void func_ovl32_800CD178();
extern AbilStep D_ovl32_800CE204[];
extern s32 func_801469C8();
extern void func_ovl32_800CD7A8();
extern void func_ovl32_800CCE88();
extern s32 func_ovl32_800CCF30();
extern void func_ovl32_800CCF58();
extern void func_8001C810();
extern s32 func_8014659C();
extern void func_ovl32_800CCE68();
extern s32 D_ovl32_800CEBEC;
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern void func_80013F3C();
extern s32 MulMatrix();
extern s32 RotMatrixY();
extern void func_80020F34();
extern s32 rand();

extern s32 func_8014C088();
extern s32 func_80146A6C();
extern void func_8014B5C4();
extern void func_801466F0();
extern void func_801599A4();
extern void func_80159B3C();

extern u8 D_ovl32_800CEBF4;
extern void func_80146E90();
extern s32 func_800D2294();
extern void func_800233CC();

extern u8 D_ovl32_800CE1E8;
extern u8 D_ovl32_800CE230;
extern s32 func_80146578();
extern void func_8001CC3C();
extern void func_80149374();
extern void func_ovl32_800CD5EC();
extern void func_ovl32_800CD834();
extern void func_80146DB8();
extern void func_ovl32_800CD494();

extern u8 D_ovl32_800CE240;
extern s32 func_800D21C4();

extern AbilStep D_ovl32_800CE1E4[];
extern void func_80149020();

void func_ovl32_800CCB28(u8 *arg0) {
    s32 i;

    func_80149020(arg0);
    i = AF(arg0, u16, 2) - 2;
    D_ovl32_800CE1E4[i](arg0);
}

void func_ovl32_800CCB78(s32 arg0) {
    func_8014B5C4(arg0, 3, 0);
    func_801466F0(7, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
    AF(arg0, s16, 0x1C8) = 0xFF;
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

extern void func_80169A4C();

extern void func_80015A2C();
extern void func_8012F14C();

extern void func_80163194();
extern void func_80162FC0();
extern void func_80147324();
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern void func_ovl32_800CD57C();
extern void func_ovl32_800CD848();
extern void func_ovl32_800CD780();
extern void func_ovl32_800CD63C();
extern s32 func_ovl32_800CD894();
extern void func_80146DE8();
extern void func_80146C98();
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();
extern void func_801632E0();

extern AbilStep D_ovl32_800CE1F4[];
extern void func_80146994();

void func_ovl32_800CCBE4(u8 *arg0) {
    void *temp_a1;
    void *temp_s1;
    void *temp_v1;

    temp_s1 = AF(arg0, void *, 0x4C);
    D_ovl32_800CE1F4[AF(arg0, u16, 2)]();
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | (AF(AF(temp_s1, void *, 0x20), s32, 4) & 0x80000000));
    if (func_801619D0(temp_s1) == 0) {
        func_ovl32_800CCE68((s32) arg0);
        func_80146994(0x3A, (s32) temp_s1, 0, 0);
        func_80147324(0xA13);
    }
}

void func_ovl32_800CCCA0(u8 *arg0) {
    void *temp_v0;

    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001C810(temp_v0, &D_ovl32_800CEBEC);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40010000);
        func_ovl32_800CCF58(temp_v0, 0);
        func_ovl32_800CCE88(arg0);
        AF(arg0, s16, 0x60) = 0;
        func_80146CA0(arg0);
        return;
    }
    func_ovl32_800CCE68(arg0);
}

void func_ovl32_800CCD2C(u8 *arg0) {
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    if (func_ovl32_800CCF30() == 0) {
        temp_v0 = AF(temp_s0, u16, 0x18) + 0x100;
        AF(temp_s0, u16, 0x18) = temp_v0;
        if ((s16) temp_v0 >= 0x1001) {
            AF(temp_s0, u16, 0x18) = 0x1000U;
            func_80146CA0(arg0);
        }
        func_ovl32_800CCF58(temp_s0, (s16) AF(temp_s0, u16, 0x18));
        func_ovl32_800CCE88(arg0);
    }
}

void func_ovl32_800CCDB0(u8 *arg0) {
    s32 var_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_s1 = AF(arg0, void *, 0x20);
    var_a1 = 0x1000;
    if (AF(temp_s2, u16, 0x1C8) & 0x10) {
        var_a1 = 0x1400;
    }
    temp_v0 = func_80012F74(AF(temp_s1, s16, 0x18), var_a1, 0xA, 1);
    AF(temp_s1, s16, 0x18) = temp_v0;
    func_ovl32_800CCF58(temp_s1, temp_v0);
    if (func_ovl32_800CCF30(arg0) == 0) {
        temp_v0_2 = (s16) AF(temp_s2, u16, 0x1C8);
        if (temp_v0_2 == 0) {
            func_ovl32_800CCE68(arg0);
            return;
        }
        AF(temp_s2, u16, 0x1C8) = (u16) (temp_v0_2 - 1);
        func_ovl32_800CCE88(arg0);
    }
}

void func_ovl32_800CCE68(void) {
    func_80162CCC();
}

void func_ovl32_800CCE88(u8 *arg0) {
    s32 temp_s0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_a0 = AF(temp_s2, void *, 0x20);
    temp_s1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 6) = (s16) AF(temp_a0, s32, 0x48);
    temp_s0 = temp_s1 + 0x34;
    AF(arg0, s16, 0xA) = (s16) (AF(temp_a0, s32, 0x4C) - 0x20);
    AF(arg0, s16, 0xE) = (s16) AF(temp_a0, s32, 0x50);
    func_80013F3C(temp_s0);
    RotMatrixY(AF(temp_s1, s16, 0x12), temp_s0);
    MulMatrix(temp_s0, AF(temp_s2, void *, 0x20) + 0x34);
    func_80020F34(temp_s0, temp_s1 + 0x18);
    AF(temp_s1, u16, 0x2C) = (u16) (AF(temp_s1, u16, 0x2C) | 1);
}

s32 func_ovl32_800CCF30(u8 *arg0) {
    if (AF(arg0, s16, 0x60) != 0) {
        AF(arg0, s16, 2) = 3;
        return 1;
    }
    return 0;
}

void func_ovl32_800CCF58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0x1C) = (s16) arg1;
    AF(arg0, s16, 0x1A) = (s16) arg1;
    AF(arg0, s16, 0x18) = (s16) arg1;
}

void func_ovl32_800CCF68(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8014C088(arg0, 7);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x60) = 1;
    }
    AF(arg0, s16, 0x1C8) = 0;
    func_80146A6C(0x39, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
}

void func_ovl32_800CCFC8(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    D_ovl32_800CE204[AF(arg0, u16, 2)]();
    if (func_801619D0(temp_s0) == 0) {
        func_ovl32_800CD178(arg0);
    }
}

void func_ovl32_800CD030(u8 *a) {
    *(s16 *)(a + 0x60) = 0;
    func_80146CA0();
}

extern u8 D_801202A0[];
extern s32 func_80135260();

extern void func_800D22E4();
extern s32 func_80135168();

extern s32 func_801487F4();
extern s32 func_80146608();

void func_ovl32_800CD050(u8 *arg0) {
    u8 *a;
    s32 i;
    s32 r;
    u16 t;

    a = AF(arg0, u8 *, 0x4C);
    if (!(func_801487F4(a) & 0x90)) {
        func_80146CA0(arg0);
        return;
    }
    t = AF(arg0, u16, 0x60) - 1;
    AF(arg0, u16, 0x60) = t;
    if ((s16) t < 0) {
        AF(arg0, u16, 0x60) = 0;
    }
    r = 0;
    if (!(D_800B99DA & 3)) {
        for (i = 0; i < 3; i++) {
            r |= func_80146608(9, a, 0, -0x1E, 0, AF(arg0, s32, 0x50)++, 0, 0xC, 1);
        }
        if (AF(arg0, s16, 0x60) == 0 && r != 0) {
            func_80147324(0x747);
            AF(arg0, u16, 0x60) = 0xF;
        }
    }
}

void func_ovl32_800CD178(void) {
    func_80162CCC();
}

void func_ovl32_800CD198(u8 *a) {
    D_ovl32_800CE220[AF(a, u16, 2)](a);
}

void func_ovl32_800CD1D4(u8 *arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;
    void *temp_v0_2;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = func_80146578((s32) arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CC3C(temp_v0, (s32) &D_ovl32_800CE1E8, 0x238, 0x180);
        AF(temp_v0, u8, 0x27) = 0x21;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40000000);
        func_80149374(temp_s2, (s32) (arg0 + 4));
        func_ovl32_800CD5EC((s32) arg0);
        temp_v0_2 = AF(temp_s2, void *, 0x20);
        AF(temp_v0, AVec, 0x10) = AF(temp_v0_2, AVec, 0x10);
        AF(arg0, u16, 0x60) = (u16) AF(temp_s2, u16, 0x100);
        AF(arg0, u16, 0x62) = (u16) AF(temp_s2, u16, 0x102);
        AF(arg0, u16, 0x64) = (u16) AF(temp_s2, u16, 0x104);
        func_ovl32_800CD834((s32) arg0);
        func_80146DB8((s32) arg0, (s32) &D_ovl32_800CE230);
        func_80146E90((s32) arg0, 0x20);
        AF(arg0, s16, 0x5E) = 0;
        func_80146CA0((s32) arg0);
        return;
    }
    func_ovl32_800CD494((s32) arg0);
}

void func_ovl32_800CD2EC(u8 *arg0, s32 arg1) {
    s32 pad[8];
    AMtx sp40;
    s32 temp_v0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0, arg1) == 0) {
        if (!(D_800B99DA & 3)) {
            func_ovl32_800CD57C((s32) arg0);
        }
        func_80146A6C(0x26, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ (s32) AF(temp_s2, s16, 0x12), /* extra? */ 0);
        func_ovl32_800CD848((s32) arg0);
        func_ovl32_800CD780((s32) arg0);
        func_ovl32_800CD7A8((s32) arg0, &sp40);
        func_80163194((s32) arg0, 0, -0x1000, 0x14000, /* extra? */ &sp40);
        func_80162FC0((s32) arg0);
        func_ovl32_800CD758((s32) arg0);
        func_ovl32_800CD63C((s32) arg0, &sp40);
        if (D_800B9A08 == 0x3067) {
            if (func_ovl32_800CD894((s32) arg0) != 0) {
                func_80146DE8((s32) arg0, 0, -0xC0000, 0x20000);
                func_80146E90((s32) arg0, 0x10);
                AF(temp_s2, s32, 4) = (s32) (AF(temp_s2, s32, 4) | 0x50000000);
                func_80146C98((s32) arg0, 3);
                func_80147324(0x990);
                return;
            }
            goto block_7;
        }
block_7:
        func_80163408((s32) arg0, 0x23, 0x80, 8);
        func_80163328((s32) arg0);
        temp_v0 = func_801632F0((s32) arg0);
        if (temp_v0 & 1) {
            func_801632E0((s32) arg0);
            goto block_10;
        }
        if (temp_v0 & 6) {
            goto block_10;
        }
    } else {
block_10:
        func_80146CA0((s32) arg0);
    }
}

extern void func_800D20C0();
extern void func_800D23D0();
extern void func_ovl32_800CDDA8();
extern void RotMatrixYXZ();
extern void ApplyMatrixSV();

extern s16 D_ovl32_800CE210[];
extern u16 D_ovl32_800CE212[];

void func_ovl32_800CD494(u8 *arg0) {
    s16 i;
    s16 v;
    u16 t;
    void *m;

    i = AF(arg0, s16, 0x5E);
    m = AF(arg0, void *, 0x20);
    v = D_ovl32_800CE210[i * 2];
    if (v != 0) {
        AF(arg0, s16, 0x5E) = i + 1;
        t = D_ovl32_800CE212[i * 2];
        AF(m, s16, 0x28) = v;
        AF(m, u16, 0x18) = AF(m, u16, 0x1A) += 0x555;
        AF(m, u16, 0x2A) = t;
        return;
    }
    func_80162CCC(arg0, m);
}

void func_ovl32_800CD508(u8 *arg0) {
    s32 pad[8];
    AMtx m;

    if (func_80146E98(arg0) != 0) {
        func_80162CCC(arg0);
        return;
    }
    func_ovl32_800CD7A8(arg0, &m);
    func_80163194(arg0, 0, 0x20000, 0, &m);
    func_80162FC0(arg0);
}

void func_ovl32_800CD57C(u8 *arg0) {
    if (func_801469C8(0x27, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), (s32) AF(arg0, s16, 0xE), AF(arg0, s32, 0x50) & 7, 0, 8) != 0) {
        AF(arg0, s32, 0x50) = (s32) (AF(arg0, s32, 0x50) + 1);
    }
}

void func_ovl32_800CD5EC(u8 *arg0) {
    func_ovl32_800CD758();
    AF(arg0, s16, 0x66) = (s16) ((AF(arg0, s32, 0x50) * 0x555) & 0xFFF);
}

void func_ovl32_800CD63C(u8 *arg0, AMtx *arg1) {
    AVec v;
    AVec out;
    AMtx m;
    s16 r;

    r = (0x20 - AF(arg0, s32, 0x1C)) * 2;
    v.vx = r * rsin(AF(arg0, s16, 0x66)) / 4096;
    v.vy = r * rcos(AF(arg0, s16, 0x66)) / 4096;
    v.vz = 0;
    m = *arg1;
    func_80015A2C(arg0 + 0x58, m.t);
    func_8012F14C(&m, &v, &out);
    func_80015954(&out, arg0 + 4);
    AF(arg0, s16, 0x66) = (AF(arg0, s16, 0x66) + 0xE3) & 0xFFF;
}

void func_ovl32_800CD758(s32 arg0) {
    func_80015978(arg0 + 4, arg0 + 0x58);
}

void func_ovl32_800CD780(s32 a) {
    func_80015954((a + 0x58), (a + 0x4));
}

void func_ovl32_800CD7A8(u8 *arg0, s32 arg1) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x20);
    func_80013F3C(arg1);
    func_800126C4(arg1, AF(arg0, s16, 0x60));
    func_800123F0(arg1, AF(arg0, s16, 0x64));
    func_80012558(arg1, AF(arg0, s16, 0x62));
    func_80012558(arg1, AF(temp_s2, s16, 0x12));
    func_800126C4(arg1, AF(temp_s2, s16, 0x10));
    func_800123F0(arg1, AF(temp_s2, s16, 0x14));
}

void func_ovl32_800CD834(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
}

void func_ovl32_800CD848(u8 *arg0) {
    s16 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012F74(AF(AF(arg0, void *, 0x20), s16, 0x1A), 0x1000, 4, 1);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1A) = temp_v0;
    AF(temp_v1, s16, 0x18) = temp_v0;
}

s32 func_ovl32_800CD894(u8 *arg0) {
    AVec v;
    AVec w;
    s32 i;
    u8 *p;

    v = AF(arg0, AVec, 0x44);
    func_80015978(arg0 + 4, &w);
    i = 0;
    p = D_801202A0;
loop:
    if (AF(p, u16, 0) == 0x200 && AF(p, s32, 0x58) != 0 && AF(p, s32, 0x20) != 0 &&
        func_80135260(AF(p, s32, 0x20), AF(p, s32, 0x58), &v, &w) != 0) {
        return 1;
    }
    i++;
    p += 0x10C;
    if (i < 0x60) {
        goto loop;
    }
    return 0;
}

void func_ovl32_800CD948(u8 *a) {
    D_ovl32_800CE24C[AF(a, u16, 2)](a);
}

void func_ovl32_800CD984(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_800D21C4(arg0, (s32) &D_ovl32_800CE240, 0x21);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40000000);
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s16, 0x28) = 0x230;
        AF(temp_v0, s16, 0x2A) = 0x1C0;
        func_80146E90(arg0, 2);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl32_800CDA0C(s32 arg0) {
    if (func_80146E98() != 0) {
        func_80146C3C(arg0);
    }
}

void func_ovl32_800CDA44(u8 *a) {
    D_ovl32_800CE254[AF(a, u16, 2)](a);
}

void func_ovl32_800CDA80(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s3;

    temp_s3 = (AF(arg0, s32, 0x2C) << 6) + &D_ovl32_800CEBF4;
    temp_v0 = func_800D2294((s32) arg0, (s32) temp_s3);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = rand();
        func_800233CC((s32) temp_s3, (temp_v0_2 & 0x1F) | 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_s3, s32, 0) = (s32) (((temp_v0_2 & 0x3F) + 0x40) << 0x10);
        AF(temp_s3, s32, 4) = 0;
        func_80146E90((s32) arg0, 4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_ovl32_800CDB4C(u8 *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = (AF(arg0, s32, 0x2C) << 6) + &D_ovl32_800CEBF4;
    AF(temp_v0, u8, 2) = (u8) (AF(temp_v0, u8, 2) - 8);
    if (func_80146E98((s32) arg0, arg1) != 0) {
        func_80146C3C((s32) arg0);
    }
}

void func_ovl32_800CDBA8(u8 *arg0) {
    AVec b;
    AVec r;
    AVec q;
    AMtx m;
    u8 *t;
    u8 *o;
    s32 x;
    s16 i;

    t = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s32, 0x2C) == 0) {
        i = 0;
        b.vx = AF(t, u16, 6);
        b.vy = AF(t, u16, 0xA) - 0x28;
        b.vz = AF(t, u16, 0xE);
        do {
            x = rand();
            r.vx = ((x & 0x7F) << 3) - 0x40;
            r.vy = (u32) (x & 0x7F00) >> 3;
            r.vz = 0;
            RotMatrixYXZ(&r, &m);
            r.vy = 0;
            r.vx = 0;
            r.vz = 0x240;
            ApplyMatrixSV(&m, &r, &r);
            q.vx = b.vx + (r.vx >> 4);
            q.vy = b.vy + (r.vy >> 4);
            q.vz = b.vz + (r.vz >> 4);
            o = (u8 *) func_80146A6C(0x39, arg0, q.vx, q.vy, q.vz, (x & 0xFFF) | 0x1000, 0);
            if (o == NULL) {
                break;
            }
            AF(o, s32, 0x10) = r.vx << 11;
            AF(o, s32, 0x14) = r.vy << 11;
            AF(o, s32, 0x18) = r.vz << 11;
        } while (++i < 0x12);
        func_80146C3C(arg0);
        return;
    }
    func_80015978(arg0 + 4, &b);
    func_800D20C0(&b, &q, 1);
    func_800D23D0(&q);
    RotMatrixYXZ(&q, arg0 + 0x38);
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, u16, 2)++;
    func_ovl32_800CDDA8(arg0);
}

void func_ovl32_800CDDA8(void) {
    func_ovl32_800CE004();
}

void func_ovl32_800CDDC8(u8 *a) {
    D_ovl32_800CE25C[AF(a, u16, 2)](a);
}

void func_ovl32_800CDE04(u8 *arg0) {
    AVec b;
    AVec r;
    AVec q;
    AMtx m;
    u8 *t;
    u8 *o;
    s32 x;
    s16 i;

    t = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s32, 0x2C) == 0) {
        i = 0;
        b.vx = AF(t, u16, 6);
        b.vy = AF(t, u16, 0xA) - 0x28;
        b.vz = AF(t, u16, 0xE);
        do {
            x = rand();
            r.vx = ((x & 0x7F) << 3) - 0x40;
            r.vy = (u32) (x & 0x7F00) >> 3;
            r.vz = 0;
            RotMatrixYXZ(&r, &m);
            r.vy = 0;
            r.vx = 0;
            r.vz = 0x240;
            ApplyMatrixSV(&m, &r, &r);
            q.vx = b.vx + (r.vx >> 4);
            q.vy = b.vy + (r.vy >> 4);
            q.vz = b.vz + (r.vz >> 4);
            o = (u8 *) func_80146A6C(0x3A, arg0, q.vx, q.vy, q.vz, (x & 0xFFF) | 0x1000, 0);
            if (o == NULL) {
                break;
            }
            AF(o, s32, 0x10) = r.vx << 8;
            AF(o, s32, 0x14) = r.vy << 8;
            AF(o, s32, 0x18) = r.vz << 8;
        } while (++i < 0x12);
        func_80146C3C(arg0);
        return;
    }
    func_80015978(arg0 + 4, &b);
    func_800D20C0(&b, &q, 1);
    func_800D23D0(&q);
    RotMatrixYXZ(&q, arg0 + 0x38);
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, u16, 2)++;
    func_ovl32_800CE004(arg0);
}

void func_ovl32_800CE004(u8 *arg0) {
    AVec a;
    AVec b;
    u8 *p;

    AF(arg0, s32, 0x30) = AF(arg0, s32, 0x1C) * 8;
    func_80169A4C(arg0, arg0 + 0x38);
    if (--AF(arg0, s32, 0x1C) != 0) {
        p = arg0 + 4;
        func_80015978(p, &a);
        func_800D22E4(arg0);
        func_80015978(p, &b);
        if ((s16) func_80135168(1, &a, &b) != 0) {
            func_80015954(&b, p);
            if (AF(&b, u8, 6) == 2) {
                if (AF(arg0, u32, 0x2C) > 0x1E00) {
                    func_80146A6C(0x11, arg0, AF(arg0, s16, 6), (s16) (AF(arg0, u16, 0xA) - 8), AF(arg0, s16, 0xE), 0, 0);
                }
                goto end;
            }
            AF(arg0, u16, 2)++;
            return;
        }
        AF(arg0, s32, 0x14) += 0x10000;
        return;
    }
end:
    func_80146C3C(arg0);
}

void func_ovl32_800CE134(u8 *arg0) {
    AF(arg0, s32, 0x30) = AF(arg0, s32, 0x1C) * 8;
    func_80169A4C(arg0, arg0 + 0x38);
    if (--AF(arg0, s32, 0x1C) == 0) {
        func_80146C3C(arg0);
    }
}

void func_ovl32_800CE188(u8 *a) {
    D_ovl32_800CE268[AF(a, u16, 2)](a);
}

void func_ovl32_800CE1C4(u8 *a) {
    func_ovl32_800CE134(a);
}
