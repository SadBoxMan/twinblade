#include "common.h"
#include "abil.h"
#include "gte.h"

extern void func_ovl21_800CC024();
extern void func_800183E0();
extern u8 D_ovl21_800CC22C[];
extern u8 D_ovl21_800CC1EC[];
extern AbilStep D_ovl21_800CC134[];
extern AbilStep D_ovl21_800CC140[];
void func_ovl21_800CAEC0(u8 *a);
extern void func_80162CCC();

void func_ovl21_800CAE0C(void) {
    func_800183E0(D_ovl21_800CC22C);
    func_800183E0(D_ovl21_800CC1EC);
}

void func_ovl21_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl21_800CC134[AF(a, u8, 0x197)](a);
}

void func_ovl21_800CAE88(u8 *a) {
    func_ovl21_800CAEC0(a);
    AF(a, u8, 0x197)++;
}

extern void func_ovl21_800CAFEC();
extern void func_801662F4();
extern void func_80154A74();
extern void func_801553C0();
extern void func_801599A4();
extern void func_801655E4();
extern s32 func_80165910();
extern s32 func_ovl21_800CAF5C();
extern void func_ovl21_800CB7FC();
extern u8 D_80078EC1;
extern AbilStep D_ovl21_800CC180[];
extern void func_ovl21_800CC004();
extern AbilStep D_ovl21_800CC1C4[];
extern void func_80146CA0();
extern void func_80154150();
extern void func_801553A8();
extern void func_80155440();
extern s32 func_80161208();
extern void func_80165A20();
extern void func_8012A62C();
extern s32 func_80148800();
extern void func_80159B3C();
extern s32 D_80078EC8;
extern void func_801466F0();
extern void func_80147324();
extern void func_800178EC();

void func_ovl21_800CAEC0(u8 *arg0) {
    func_801599A4();
    func_ovl21_800CAF5C(arg0);
    if (func_80165910(arg0) == 0) {
        func_801655E4(arg0);
    }
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl21_800CAF18(void) {
}

void func_ovl21_800CAF20(void) {
}

extern s32 rcos();
extern s32 rsin();

extern void func_80147078();
extern void func_ovl21_800CAF90();
extern s32 func_ovl21_800CB82C();
extern s32 func_80146E98();
extern void func_80146D90();

void func_ovl21_800CAF28(s32 arg0) {
    func_80147078(arg0, 0x20);
    func_ovl21_800CAFEC(arg0);
}

s32 func_ovl21_800CAF5C(s32 arg0) {
    func_80147078(arg0, 0x20);
    func_ovl21_800CAF90(arg0);
    return;
}

void func_ovl21_800CAF90(u8 *a) {
    D_ovl21_800CC140[AF(a, u16, 2)](a);
}

void func_ovl21_800CAFCC(void) {
    func_ovl21_800CAFEC();
}

void func_ovl21_800CAFEC(u8 *arg0) {
    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    func_801553A8(arg0);
    func_80155440(arg0);
    func_80154150(arg0, 0x26);
    func_80154A74(arg0, 0x1E);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xFE9;
    AF(arg0, s32, 0x238) = 0;
    func_80146CA0(arg0);
}

void func_ovl21_800CB06C(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x238) = (s32) (AF(arg0, s32, 0x238) + 0x1C000);
    AF(temp_a0, u16, 0x10) = (u16) ((AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0x23A)) & 0xFFF);
    temp_v1 = AF(arg0, void *, 0x20);
    if ((s16) AF(temp_v1, u16, 0x10) < 0xC00) {
        AF(temp_v1, u16, 0x10) = 0xC00U;
        AF(arg0, s16, 0xB8) = 1;
        func_80146CA0(arg0);
    }
}

void func_ovl21_800CB108(u8 *arg0) {
    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154150(arg0, 0x27);
        func_80154A74(arg0, 0x1F);
        func_801466F0(0xD, arg0, 0, -0x40, 0, 0, 0, 0);
        func_80147324(0x6E2);
        func_80146CA0(arg0);
    }
}

void func_ovl21_800CB1A0(u8 *arg0) {
    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    if ((func_80148800(arg0) & 0x20) || (D_80078EC8 == 0)) {
        func_8012A62C(0x10);
        func_80165A20(arg0);
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    AF(arg0, s16, 0x15A) = 1;
}

void func_ovl21_800CB234(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    func_801553C0();
    func_80154A74(arg0, 0x11);
}

void func_ovl21_800CB270(u8 *arg0) {
    if (D_80078EC1 != 0x18) {
        func_ovl21_800CB7FC();
        return;
    }
    D_ovl21_800CC180[AF(arg0, u16, 2)]();
}

extern u8 D_ovl21_800CC150;
extern AVec D_ovl21_800CC298;
extern s32 func_8014659C();
extern void func_8001C2C4();
extern void func_80146E90();
extern void func_80149374();
extern void func_801466B4();

void func_ovl21_800CB2CC(u8 *arg0) {
    AModel *m;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    m = func_8014659C();
    AF(arg0, AModel *, 0x20) = m;
    if (m != 0) {
        func_8001C2C4(m);
        m->rot.vy = AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        m->scale.vy = 0;
        m->scale.vx = 0;
        m->scale.vz = 0x1000;
        func_80146E90(arg0, 0x20);
        func_80149374(temp_s2, arg0 + 4);
        AF(arg0, s32 *, 0x58) = &D_ovl21_800CC150;
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, s16, 0x62) = 0;
        AF(arg0, s16, 0x64) = 0;
        func_801466B4(0x28, arg0, 0, 0, 1);
        func_801466B4(0x28, arg0, 1, 0, 1);
        D_ovl21_800CC298 = AF(temp_s2, AVec, 0x154);
        func_80146CA0(arg0);
        return;
    }
    func_ovl21_800CB7FC(arg0);
}

void func_ovl21_800CB3E0(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_ovl21_800CB82C((s32) arg0, AF(arg0, s32, 0x58));
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 1);
    temp_v0 = AF(temp_s0, u16, 0x18) + 0x100;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 >= 0x1CCD) {
        AF(temp_s0, u16, 0x18) = 0x1CCCU;
    }
    temp_v0_2 = AF(temp_s0, u16, 0x1A) + 0x100;
    AF(temp_s0, u16, 0x1A) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x1CCD) {
        AF(temp_s0, u16, 0x1A) = 0x1CCCU;
    }
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s0, u16, 0x18) = 0x1CCCU;
        AF(temp_s0, u16, 0x1A) = 0x1CCCU;
        func_80146D90((s32) arg0);
        func_80146CA0((s32) arg0);
    }
}

extern s16 D_800B9A08;
extern void func_80015978();
extern void func_80015954();

typedef struct { s32 vx, vy, vz, pad; } ALVec;
extern s32 func_801488A8();
extern s32 func_80148D44();
extern void func_80162FF4();
extern void func_800134FC();
extern void func_8001599C();
extern void func_80162FC0();
extern s32 func_80012F74();
extern void func_ovl21_800CBCB4(u8 *arg0);

void func_ovl21_800CB4A4(u8 *arg0) {
    ALVec v;
    ALVec w;
    u8 *s;
    u8 *m;
    s32 x;
    s32 y;
    s32 f;

    s = AF(arg0, u8 *, 0x4C);
    m = AF(arg0, u8 *, 0x20);
    if (D_80078EC8 < 0x28) {
        AF(m, u16, 0x18) -= 0x40;
        AF(m, u16, 0x1A) -= 0x40;
    }
    func_ovl21_800CB82C(arg0, AF(arg0, u8 *, 0x58));
    if (func_801488A8(s) != 0) {
        w = AF(arg0, ALVec, 0x10);
        func_80146D90(arg0);
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x14) = AF(arg0, s32, 0x18) = 0;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = func_80148D44(arg0);
        func_80162FF4(arg0, 0, 0, -0x1C000);
        if (D_800B9A08 == 0x3038) {
            v = AF(arg0, ALVec, 0x10);
            func_800134FC(0x400, &v, &v);
            func_8001599C(&v, arg0 + 0x10);
        }
        AF(arg0, s32, 0x10) += w.vx;
        AF(arg0, s32, 0x14) += w.vy;
        AF(arg0, s32, 0x18) += w.vz;
        if (AF(arg0, s32, 0x10) > 0xE0000) {
            AF(arg0, s32, 0x10) = 0xE0000;
        } else if (AF(arg0, s32, 0x10) < -0xE0000) {
            AF(arg0, s32, 0x10) = -0xE0000;
        }
        if (AF(arg0, s32, 0x14) > 0xE0000) {
            AF(arg0, s32, 0x14) = 0xE0000;
        } else if (AF(arg0, s32, 0x14) < -0xE0000) {
            AF(arg0, s32, 0x14) = -0xE0000;
        }
        if (AF(arg0, s32, 0x18) > 0xE0000) {
            AF(arg0, s32, 0x18) = 0xE0000;
        } else if (AF(arg0, s32, 0x18) < -0xE0000) {
            AF(arg0, s32, 0x18) = -0xE0000;
        }
        goto move;
    }
    x = AF(arg0, s32, 0x10);
    f = 0;
    if (x != 0) {
        f = 1;
        if (x >= 0) {
            y = x - 0x8000;
            AF(arg0, s32, 0x10) = y;
            if (y < 0) AF(arg0, s32, 0x10) = 0;
        } else {
            y = x + 0x8000;
            AF(arg0, s32, 0x10) = y;
            if (y >= 0) AF(arg0, s32, 0x10) = 0;
        }
    }
    x = AF(arg0, s32, 0x14);
    if (x != 0) {
        f = 1;
        if (x >= 0) {
            y = x - 0x8000;
            AF(arg0, s32, 0x14) = y;
            if (y < 0) AF(arg0, s32, 0x14) = 0;
        } else {
            y = x + 0x8000;
            AF(arg0, s32, 0x14) = y;
            if (y >= 0) AF(arg0, s32, 0x14) = 0;
        }
    }
    x = AF(arg0, s32, 0x18);
    if (x != 0) {
        f = 1;
        if (x >= 0) {
            y = x - 0x8000;
            AF(arg0, s32, 0x18) = y;
            if (y < 0) AF(arg0, s32, 0x18) = 0;
        } else {
            y = x + 0x8000;
            AF(arg0, s32, 0x18) = y;
            if (y >= 0) AF(arg0, s32, 0x18) = 0;
        }
    }
    if (f != 0) {
    move:
        func_80162FC0(arg0);
    }
    func_ovl21_800CBCB4(arg0);
    D_ovl21_800CC298.vx = func_80012F74(D_ovl21_800CC298.vx, AF(arg0, s16, 6), 0xA, 1);
    D_ovl21_800CC298.vy = func_80012F74(D_ovl21_800CC298.vy, AF(arg0, s16, 0xA), 0xA, 1);
    D_ovl21_800CC298.vz = func_80012F74(D_ovl21_800CC298.vz, AF(arg0, s16, 0xE), 0xA, 1);
    AF(s, AVec, 0x154) = D_ovl21_800CC298;
}

void func_ovl21_800CB7FC(s32 arg0) {
    func_801662F4();
    func_80162CCC(arg0);
}

extern u16 D_ovl21_800CC190[];
extern u16 D_ovl21_800CC1A0[];
extern s32 D_ovl21_800CC1B0[];
extern u16 D_ovl21_800CC1C0[];
extern AVec D_ovl21_800CC290;
extern s32 func_8012EF34();
extern void func_80017DC4();
extern void func_ovl21_800CBBF8(u8 *arg0, u8 *arg1);
extern s32 func_ovl21_800CBA44(AVec *v, u16 *a, u8 *b, u16 *c, u8 *o, s32 *z);

s32 func_ovl21_800CB82C(u8 *arg0, u8 *arg1) {
    s32 o[0x12];
    AVec p;
    AVec k;
    AVec v[4];
    AMtx m;
    AVec r;
    s32 pad[2];
    u8 *md;
    u8 *po;
    u8 *pk;
    u16 s;
    s32 i;

    po = (u8 *) o;
    md = AF(arg0, u8 *, 0x20);
    func_80015978(arg0 + 4, &p);
    if (func_8012EF34(&p, &D_ovl21_800CC290) & ~0x1000) {
        return;
    }
    k = D_ovl21_800CC290;
    s = AF(arg1, u16, 0x16) + 3;
    func_80017DC4(md + 0x18, &m);
    pk = (u8 *) &k;
    m.t[0] = m.t[1] = m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    v[0].vz = v[1].vz = v[2].vz = v[3].vz = k.vz;
    AF(o, u8, 0x44) = AF(arg1, u16, 0x14);
    o[0x10] = 0x50000000;
    i = AF(arg0, s16, 0x60);
    o[0xC] = 0x808080;
    o[0xD] = 0x808080;
    o[0xE] = 0x808080;
    o[0xF] = 0x808080;
    AF(arg0, s16, 0x60) = (i + 1) & 3;
    if (func_ovl21_800CBA44(v, D_ovl21_800CC190, arg1, D_ovl21_800CC1C0, po, &D_ovl21_800CC1B0[i]) != 0) {
        return;
    }
    AF(po, u16, 4) = s;
    func_ovl21_800CBBF8(po, pk);
    arg1 += 0x18;
    r.vx = rcos(AF(arg0, s16, 0x62) << 8) / 1024;
    AF(arg0, u16, 0x62) = (AF(arg0, u16, 0x62) + 1) & 0xF;
    r.vy = 0;
    if (func_ovl21_800CBA44(v, D_ovl21_800CC1A0, arg1, (u16 *) &r, po, (s32 *) D_ovl21_800CC1C0) != 0) {
        return;
    }
    func_ovl21_800CBBF8(po, pk);
}

s32 func_ovl21_800CBA44(AVec *v, u16 *a, u8 *b, u16 *c, u8 *o, s32 *z) {
    s32 flag;

    v[0].vx = a[0] + AF(b, u16, 0x10);
    v[0].vy = a[1] + AF(b, u16, 0x12);
    v[1].vx = a[2] + AF(b, u16, 0x10);
    v[1].vy = a[3] + AF(b, u16, 0x12);
    v[2].vx = c[0] + (a[4] + AF(b, u16, 0x10));
    v[2].vy = c[1] + (a[5] + AF(b, u16, 0x12));
    v[3].vx = c[0] + (a[6] + AF(b, u16, 0x10));
    v[3].vy = c[1] + (a[7] + AF(b, u16, 0x12));
    gte_ldv3(&v[0], &v[1], &v[2]);
    gte_rtpt();
    gte_stsxy3(o, o + 8, o + 0x10);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return 1;
    }
    gte_ldv0(&v[3]);
    gte_rtps();
    gte_stsxy(o + 0x18);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return 1;
    }
    AF(o, s32, 0x20) = AF(b, s32, 0) + *z;
    AF(o, s32, 0x24) = AF(b, s32, 4) + *z;
    AF(o, s32, 0x28) = AF(b, s32, 8) + *z;
    AF(o, s32, 0x2C) = AF(b, s32, 0xC) + *z;
    return 0;
}

void func_ovl21_800CBBF8(u8 *arg0, u8 *arg1) {
    AF(arg0, u16, 0) = (u16) (AF(arg0, u16, 0) + AF(arg1, u16, 0));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + AF(arg1, u16, 2));
    AF(arg0, u16, 8) = (u16) (AF(arg0, u16, 8) + AF(arg1, u16, 0));
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg1, u16, 2));
    AF(arg0, u16, 0x10) = (u16) (AF(arg0, u16, 0x10) + AF(arg1, u16, 0));
    AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + AF(arg1, u16, 2));
    AF(arg0, u16, 0x18) = (u16) (AF(arg0, u16, 0x18) + AF(arg1, u16, 0));
    AF(arg0, u16, 0x1A) = (u16) (AF(arg0, u16, 0x1A) + AF(arg1, u16, 2));
    func_800178EC();
}

void func_ovl21_800CBCB4(u8 *arg0) {
    AVec v;

    func_80015978(arg0 + 4, &v);
    switch (D_800B9A08) {
    case 0x3035:
        if (v.vx < -0x93E) v.vx = -0x93E;
        if (v.vx > -0x3C2) v.vx = -0x3C2;
        if (v.vz < 0x3C2) v.vz = 0x3C2;
        if (v.vz > 0xCBE) v.vz = 0xCBE;
        break;
    case 0x3037:
        if (v.vx < 0x4C2) v.vx = 0x4C2;
        if (v.vx > 0xA3E) v.vx = 0xA3E;
        if (v.vz < 0xAC2) v.vz = 0xAC2;
        if (v.vz > 0x13BE) v.vz = 0x13BE;
        break;
    case 0x3038:
        if (v.vx < -0xF3E) v.vx = -0xF3E;
        if (v.vx > -0x9C2) v.vx = -0x9C2;
        if (v.vy < -0xA00) v.vy = -0xA00;
        if (v.vy > -0x202) v.vy = -0x202;
        break;
    case 0x3039:
        if (v.vx < -0x153E) v.vx = -0x153E;
        if (v.vx > -0xFC2) v.vx = -0xFC2;
        if (v.vz < 0x3C2) v.vz = 0x3C2;
        if (v.vz > 0xFBE) v.vz = 0xFBE;
        break;
    }
    func_80015954(&v, arg0 + 4);
}

void func_ovl21_800CBECC(u8 *arg0) {
    if (D_80078EC1 != 0x18) {
        func_ovl21_800CC004();
        return;
    }
    D_ovl21_800CC1C4[AF(arg0, u16, 2)]();
}

extern u8 D_ovl21_800CC250[];
extern s32 D_ovl21_800CC254;
extern s32 func_80146578();
extern void func_8001CD04();
extern void func_800233CC();

void func_ovl21_800CBF28(u8 *arg0) {
    s32 temp_v0;
    u8 *o;
    u8 *p;

    temp_v0 = func_80146578(arg0);
    p = D_ovl21_800CC250;
    AF(arg0, s32, 0x20) = temp_v0;
    o = (u8 *) temp_v0;
    if (temp_v0 != 0) {
        func_8001CD04(temp_v0, p);
        if (AF(arg0, s32, 0x50) == 0) {
            func_800233CC(p, 0x20);
            D_ovl21_800CC254 = 0;
            temp_v0 = 0x202000;
            *(s32 *) p = temp_v0;
        }
        AF(arg0, s16, 0x60) = 0;
        AF(o, s32, 4) |= 0x50000000;
        func_ovl21_800CC024(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl21_800CC004(arg0);
    temp_v0 = 1; /* MATCH-TRICK: dead store; temp_v0 referenced after the |= keeps it cse's canonical copy, so o stays apart (s2) */
}

void func_ovl21_800CBFE4(void) {
    func_ovl21_800CC024();
}

void func_ovl21_800CC004(void) {
    func_80162CCC();
}

void func_ovl21_800CC024(u8 *arg0) {
    AVec v;
    u8 *s;
    u8 *m;
    u16 t;
    s16 a;
    s16 b;
    s32 c;
    s32 f;

    s = AF(arg0, u8 *, 0x4C);
    m = AF(arg0, u8 *, 0x20);
    if (s != NULL) {
        func_80015954(&D_ovl21_800CC290, arg0 + 4);
        t = AF(arg0, u16, 0x60);
        a = t & 0x1F;
        b = a << 7;
        AF(arg0, u16, 0xA) -= 0x10;
        f = AF(arg0, s32, 0x50);
        AF(arg0, u16, 0x60) = t + 1;
        if (f == 0) {
            c = rcos(a << 7);
        } else {
            c = 0x1000 - rcos(a << 7);
        }
        v.vx = c / 1024;
        v.vy = rsin(b) / 512;
        AF(arg0, u16, 6) += v.vx;
        AF(arg0, u16, 0xA) += v.vy;
        AF(m, s32, 0x18) = AF(AF(s, u8 *, 0x20), s32, 0x18);
    }
}
