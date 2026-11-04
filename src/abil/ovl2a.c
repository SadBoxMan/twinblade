#include "common.h"
#include "abil.h"

extern void func_80162CCC();
extern s32 D_ovl2a_800CBFE0;
extern void func_ovl2a_800CBD54();
extern void func_800183E0();
extern u8 D_ovl2a_800CC0CC[];
extern u8 D_ovl2a_800CC10C[];
extern u8 D_ovl2a_800CC08C[];
extern AbilStep D_ovl2a_800CBF94[];
extern s32 func_80161104();
void func_ovl2a_800CAEE0(s32 arg0);

void func_ovl2a_800CAE0C(void) {
    func_800183E0(D_ovl2a_800CC0CC);
    func_800183E0(D_ovl2a_800CC10C);
    func_800183E0(D_ovl2a_800CC08C);
}

void func_ovl2a_800CAE54(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2a_800CBF94[AF(a, u8, 0x197)](a);
}

void func_ovl2a_800CAE98(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2a_800CAEE0(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_80165A20();
extern s32 D_80126B58;
extern void func_80146CA0();
extern s32 func_80146E98();
extern void func_ovl2a_800CB5A8();
extern u8 D_80078EC1;
extern AbilStep D_ovl2a_800CBFB8[];
extern void func_ovl2a_800CB774();
extern AbilStep D_ovl2a_800CBFD4[];
extern void func_80146C3C();
extern AbilStep D_ovl2a_800CC01C[];
extern void func_801599A4();
extern void func_80159B3C();
extern void func_801466F0();
extern s32 rand();

extern s32 D_ovl2a_800CC010;
extern s32 rsin();
extern s32 ApplyMatrixLV();
extern s32 RotMatrixZYX();
extern void func_ovl2a_800CBF24();

extern s32 func_8014C088();
extern void func_801655E4();
extern void func_80165958();
extern void func_80146E90();
extern u8 D_ovl2a_800CBFA0;
extern s32 func_8014659C();
extern void func_8001CA1C();
extern void func_80146DE8();
extern s32 D_ovl2a_800CC12C;
extern s32 D_ovl2a_800CC130;
extern void func_80149374();

void func_ovl2a_800CAEE0(s32 arg0) {
    if (func_8014C088(arg0, 0x22) != 0) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    func_801655E4(arg0);
    func_80165958();
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl2a_800CAF4C(s32 arg0) {
    func_801466F0(0x22, arg0, 0, 0, 0, 0, 0, 0);
    func_801466F0(0x22, arg0, 0, 0, 0, 1, 0, 0);
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

void func_ovl2a_800CAFCC(void) {
}

void func_ovl2a_800CAFD4(u8 *arg0) {
    if (D_80078EC1 == 0x17) {
        D_ovl2a_800CBFB8[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl2a_800CB5A8();
}

void func_ovl2a_800CB030(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CA1C(temp_v0, (s32) ((AF(arg0, s32, 0x50) * 0xC) + &D_ovl2a_800CBFA0));
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x08000000);
        func_80149374(temp_s2, (s32) (arg0 + 4));
        AF(arg0, u16, 0x60) = (u16) AF(arg0, u16, 0xA);
        AF(arg0, s32, 0x58) = 0;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x200);
        if (AF(arg0, s32, 0x50) == 0) {
            func_80146E90((s32) arg0, 0);
            D_ovl2a_800CC130 = 0;
        }
        AF(arg0, s16, 0x62) = 0;
        D_ovl2a_800CC12C = 0x384;
        func_80146CA0((s32) arg0);
        return;
    }
    func_ovl2a_800CB5A8((s32) arg0);
}

extern void func_ovl2a_800CBD2C();
extern void func_ovl2a_800CBEB0();

void func_ovl2a_800CBF3C(void);

extern u8 D_ovl2a_800CC011;
extern u8 D_ovl2a_800CC012;
extern u8 D_ovl2a_800CC013;

extern void func_80015978();
extern void func_80017DC4();
extern void func_80017DF8();
extern void func_80017E68();
extern s32 func_80016EF8();

extern void func_80147324();
extern s16 D_ovl2a_800CC134[];
extern s16 D_ovl2a_800CC136;
extern s16 D_ovl2a_800CC138;
extern void func_801663A4();
extern void func_80146A6C();
extern void func_ovl2a_800CB794();
extern void func_80147364();
extern void func_801659B8();

void func_ovl2a_800CB11C(u8 *arg0) {
    s32 pad;
    u8 *m;
    s32 t;
    s16 v;

    m = AF(arg0, u8 *, 0x20);
    t = AF(arg0, s32, 0x58) + 0x30000;
    AF(arg0, s32, 0x58) = t;
    AF(arg0, s32, 8) += t;
    v = AF(arg0, s16, 0x60);
    if (v < AF(arg0, s16, 0xA)) {
        AF(arg0, s16, 0xA) = v;
        if (AF(arg0, s16, 0x62) == 0) {
            AF(arg0, s16, 0x62)++;
            func_80147324(0x8EC);
        }
        AF(m, u16, 0x1A) -= 0x100;
        if (AF(m, s16, 0x1A) < 0xC00) {
            func_80146CA0(arg0);
        }
    }
}

void func_ovl2a_800CB1CC(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_v1, u16, 0x1A) + 0x100;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    if ((s16) temp_v0 >= 0x1000) {
        AF(temp_v1, u16, 0x1A) = 0x1000U;
        func_80146CA0();
    }
}

extern u8 D_801202A0[];
extern u8 D_80126720[];
extern s32 func_8014C308();
extern s32 func_8014C278();
extern s32 func_8014C3D0();

extern u16 D_800B99DA;
extern s32 func_80012DBC();
extern s32 func_80148800();

void func_ovl2a_800CB218(u8 *arg0) {
    u8 *m;
    s32 x;
    s32 n;
    s32 c;

    n = D_ovl2a_800CC12C - 1;
    c = D_ovl2a_800CC130;
    m = AF(arg0, u8 *, 0x20);
    D_ovl2a_800CC12C = n;
    switch (c) {
    case 0:
        x = rsin((D_800B99DA & 0x3F) << 6) / 64;
        goto store;
    case 1:
        x = rsin((D_800B99DA & 0x1F) << 7) / 32;
    store:
        AF(arg0, s16, 0x60) = x;
        break;
    }
    AF(m, s16, 0x14) = func_80012DBC(AF(m, s16, 0x14), AF(arg0, s16, 0x60), 0xA, 1);
    if (AF(arg0, s32, 0x50) == 0 && func_80146E98(arg0) != 0) {
        func_80146E90(arg0, (rand() & 0x3F) + 0x20);
        D_ovl2a_800CC130 = rand() & 1;
    }
    if (D_ovl2a_800CC12C < 0x80 || (func_80148800(&D_80126B58) & 0x20)) {
        AF(m, s16 *, 0x80) = D_ovl2a_800CC134;
        AF(m, u16, 0x2C) |= 0x80;
        D_ovl2a_800CC138 = 0x80;
        D_ovl2a_800CC136 = 0x80;
        D_ovl2a_800CC134[0] = 0x80;
        func_80146E90(arg0, 0);
        func_80147324(0x8ED);
        func_80146CA0(arg0);
    }
}

void func_ovl2a_800CB3B4(u8 *arg0) {
    s16 temp_v0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    u8 *temp_s3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s3 = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    AF(temp_s3, s16, 0x18) = (s16) ((rsin((temp_v0 & 7) << 9) / 32) + 0x1000);
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    AF(temp_s3, s16, 0x1A) = (s16) ((rsin((temp_v0_2 & 7) << 9) / 64) + 0x1000);
    temp_v0_3 = D_ovl2a_800CC138 + 1;
    D_ovl2a_800CC138 = (u16) temp_v0_3;
    D_ovl2a_800CC136 = temp_v0_3;
    D_ovl2a_800CC134[0] = temp_v0_3;
    if (temp_v0_3 >= 0xFF) {
        D_ovl2a_800CC138 = 0xFF;
        D_ovl2a_800CC136 = 0xFF;
        D_ovl2a_800CC134[0] = 0xFF;
        func_801663A4((s32) arg0);
        var_s0 = 0;
        do {
            func_80146A6C(0x46, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ var_s0, /* extra? */ 0);
            func_80146A6C(0x46, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ var_s0, /* extra? */ 1);
            func_80146A6C(0x46, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ var_s0, /* extra? */ 1);
            var_s0 += 1;
        } while (var_s0 < 6);
        AF(temp_s3, s32, 4) = (s32) (AF(temp_s3, s32, 4) | 0x80000000);
        func_ovl2a_800CB794((s32) arg0);
        func_80146E90((s32) arg0, 0x1E);
        func_80147364(4, 0x8ED);
        func_80147324(0x8EE);
        func_801659B8();
        func_80146CA0((s32) arg0);
    }
}

void func_ovl2a_800CB570(s32 arg0) {
    if (func_80146E98() != 0) {
        func_80146CA0(arg0);
    }
}

void func_ovl2a_800CB5A8(void) {
    func_80162CCC();
    func_80165A20(&D_80126B58);
}

void func_ovl2a_800CB5D8(u8 *arg0) {
    if (D_80078EC1 == 0x17) {
        D_ovl2a_800CBFD4[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl2a_800CB774();
}

void func_ovl2a_800CB634(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CA1C(temp_v0, (s32) ((AF(arg0, s32, 0x50) * 0xC) + &D_ovl2a_800CBFA0));
        temp_s0 = ((rand() & 0x3F) - 0x20) << 0xF;
        temp_s1 = ((rand() & 0x3F) - 0x20) << 0xF;
        func_80146DE8((s32) arg0, temp_s0, -(((rand() & 0x1F) + 0x10) << 0xF), temp_s1);
        func_80146E90((s32) arg0, 0x40);
        func_80146CA0((s32) arg0);
        return;
    }
    func_ovl2a_800CB774((s32) arg0);
}

typedef struct { s32 vx, vy, vz, pad; } ALVec;
extern AVec D_ovl2a_800CC028[];
extern ALVec D_ovl2a_800CC058;
extern u16 D_ovl2a_800CC068[];
extern s32 func_801465C0();
extern void func_8001CF00();
extern void func_80015954();

extern void func_80162F08();
extern void func_80162FC0();

void func_ovl2a_800CB708(u8 *arg0) {
    func_80162F08(arg0, 0, 0, 0);
    AF(arg0, s32, 0x10) = AF(arg0, s32, 0x24);
    AF(arg0, s32, 0x14) = AF(arg0, s32, 0x28);
    AF(arg0, s32, 0x18) = AF(arg0, s32, 0x2C);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
    }
}

void func_ovl2a_800CB774(void) {
    func_80162CCC();
}

void func_ovl2a_800CB794(u8 *arg0) {
    AVec v;
    u8 *p;
    u8 *o;

    for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C) {
        if (func_8014C308(arg0, p, 0x33, 0x4000) != 0 && func_8014C278(arg0, p, 0xC0) != 0) {
            func_80015978(p + 4, &v);
            v.pad = 0;
            if (func_8014C3D0(arg0, p, 0x33, &v) != 0 && AF(p, u16, 0) == 0x219) {
                o = AF(p, u8 *, 0x78);
                if (o != NULL) {
                    AF(p, s16, 0x60) = (AF(p, s16, 0x76) << 12) / AF(o, s16, 0x30) + 1;
                }
            }
        }
    }
}

void func_ovl2a_800CB8B4(u8 *arg0) {
    if (D_80078EC1 == 0x17) {
        D_ovl2a_800CC01C[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl2a_800CB910(u8 *arg0) {
    AVec p;
    AVec r;
    AMtx m;
    ALVec w;
    u8 *o;
    u8 *o2;
    u8 *t;
    s16 *q;
    s32 i;

    t = AF(arg0, u8 *, 0x34);
    o = (u8 *) func_801465C0();
    o2 = o;
    AF(arg0, u8 *, 0x20) = o;
    if (o == NULL) {
        goto fail;
    }
    func_8001CF00(o);
    AF(o, s32, 4) |= 0x80000000;
    func_80015978(t + 4, &p);
    p.vy -= 0x40;
    func_80015954(&p, arg0 + 4);
    if (AF(arg0, s32, 0x2C) == 0) {
        func_ovl2a_800CBF24();
    }
    AF(o2, u16, 0x18) = AF(o2, u16, 0x1A) = AF(o2, u16, 0x1C) = D_ovl2a_800CC068[AF(arg0, s32, 0x30)];
    w = D_ovl2a_800CC058;
    r = D_ovl2a_800CC028[AF(arg0, s32, 0x2C)];
    if (AF(arg0, s32, 0x30) != 0) {
        r.vx += ((rand() & 0x3F) << 4) - 0x200;
        r.vy += ((rand() & 0x3F) << 4) - 0x200;
        r.vz += ((rand() & 0x3F) << 4) - 0x200;
        w.vx = ((rand() & 0x1F) - 0x10) << 18;
        w.vy = ((rand() & 0x1F) - 0x10) << 18;
        w.vz = ((rand() & 0x1F) - 0x10) << 18;
    }
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &w, &w);
    AF(arg0, s32, 0x10) = w.vx;
    AF(arg0, s32, 0x14) = w.vy;
    AF(arg0, s32, 0x18) = w.vz;
    AF(arg0, s32, 0x4C) = ((rand() & 0x1F) - 0x10) * 0xB;
    AF(arg0, s32, 0x50) = ((rand() & 0x1F) - 0x10) * 0xB;
    AF(arg0, s32, 0x54) = ((rand() & 0x1F) - 0x10) * 0xB;
    q = (s16 *) (arg0 + 0x38);
    i = 0;
    do {
        i++;
        *q++ = (rand() & 0x7F) - 0x40;
        *q++ = (rand() & 0x7F) - 0x40;
        *q++ = (rand() & 0x7F) - 0x40;
    } while (i < 3);
    func_80146E90(arg0, 2);
    AF(arg0, u16, 2)++;
    return;
fail:
    func_80146C3C(arg0);
}

void func_ovl2a_800CBC14(s32 arg0) {
    func_ovl2a_800CBD2C(arg0);
    func_ovl2a_800CBEB0(arg0);
    if (func_80146E98(arg0) != 0) {
        AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 2);
        AF(arg0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 2);
        AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 2);
        func_80146E90(arg0, 0x40);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_ovl2a_800CBC90(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + 0x2D);
    AF(temp_a0, u16, 0x12) = (u16) (AF(temp_a0, u16, 0x12) + 0x2D);
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + 0x2D);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x4000);
    func_ovl2a_800CBD2C((s32) arg0);
    func_ovl2a_800CBEB0((s32) arg0);
    if (AF(arg0, s32, 0x2C) == 0) {
        func_ovl2a_800CBF3C();
    }
    if (func_80146E98((s32) arg0) != 0) {
        func_80146C3C((s32) arg0);
    }
}

void func_ovl2a_800CBD2C(s32 a) {
    func_ovl2a_800CBD54(a, &D_ovl2a_800CBFE0);
}

void func_ovl2a_800CBD54(u8 *arg0, u8 *arg1) {
    AMtx m;
    AVec v;
    u8 *s;

    s = AF(arg0, u8 *, 0x20);
    AF(arg1, s32, 0x34) = 0x50000000;
    func_80017DC4(s + 0x18, &m);
    func_80017DF8(s + 0x10, &m);
    func_80015978(arg0 + 4, &v);
    func_80017E68(&v, &m);
    func_80016EF8(arg1, &m);
    m.t[0] += AF(arg0, s16, 0x38);
    m.t[1] += AF(arg0, s16, 0x3A);
    m.t[2] += AF(arg0, s16, 0x3C);
    func_80016EF8(arg1, &m);
    func_80017E68(&v, &m);
    m.t[0] += AF(arg0, s16, 0x3E);
    m.t[1] += AF(arg0, s16, 0x40);
    m.t[2] += AF(arg0, s16, 0x42);
    func_80016EF8(arg1, &m);
    func_80017E68(&v, &m);
    m.t[0] += AF(arg0, s16, 0x44);
    m.t[1] += AF(arg0, s16, 0x46);
    m.t[2] += AF(arg0, s16, 0x48);
    func_80016EF8(arg1, &m);
}

void func_ovl2a_800CBEB0(u8 *arg0) {
    void *temp_v1;

    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) += AF(arg0, s32, 0x4C);
    AF(temp_v1, u16, 0x12) += AF(arg0, s32, 0x50);
    AF(temp_v1, u16, 0x14) += AF(arg0, s32, 0x54);
}

void func_ovl2a_800CBF24(void) {
    D_ovl2a_800CC010 = 0x40404040;
}

void func_ovl2a_800CBF3C(void) {
    D_ovl2a_800CC013 -= 2;
    if (D_ovl2a_800CC013 >= 0x81) {
        D_ovl2a_800CC013 = 0;
    }
    *(u8 *) &D_ovl2a_800CC010 = D_ovl2a_800CC013;
    D_ovl2a_800CC011 = D_ovl2a_800CC013;
    D_ovl2a_800CC012 = D_ovl2a_800CC013;
}
