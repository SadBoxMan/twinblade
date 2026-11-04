#include "common.h"
#include "abil.h"

extern s32 func_ovl1c_800CB008();
extern s32 D_ovl1c_800CBD48;
extern void func_800183E0();
void func_ovl1c_800CAE0C(void) {
    func_800183E0(&D_ovl1c_800CBD48);
}

extern AbilStep D_ovl1c_800CBC90[];
extern AbilStep D_ovl1c_800CBC9C[];
void func_ovl1c_800CAEB0(u8 *a);
extern void func_80162CCC();

void func_ovl1c_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1c_800CBC90[AF(a, u8, 0x197)](a);
}

void func_ovl1c_800CAE78(u8 *a) {
    func_ovl1c_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

extern void func_801655E4();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80146C3C();
extern s32 func_80146E98();
extern void func_80146994();
extern void func_80147324();
extern void func_8014B2F8();
extern u8 D_80078EC1;
extern AbilStep D_ovl1c_800CBD0C[];
extern AbilStep D_ovl1c_800CBD14[];
extern void func_ovl1c_800CBAA4();
extern void func_800D22E4();
extern void func_ovl1c_800CBB38();
extern void func_ovl1c_800CB3D0();
extern void func_ovl1c_800CB3F0();
extern void func_ovl1c_800CB4AC();
extern AbilStep D_ovl1c_800CBCA8[];
extern s32 RotMatrixYXZ();

void func_ovl1c_800CAEB0(u8 *arg0) {
    func_801655E4();
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl1c_800CAEE8(s32 arg0) {
    func_8014B2F8();
    func_80146994(0x41, arg0, 0, 0);
    func_80147324(0x836);
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

void func_ovl1c_800CAF3C(void) {
}

extern void func_80147078();
extern void func_ovl1c_800CAFAC();
extern void func_80154150();
extern s32 func_80146CA0();
extern void func_80146E90();
extern s32 func_8014C050();
extern void func_80165A20();
extern s32 D_ovl1c_800CBCCC;
extern s32 func_800D2294();
extern void func_800233CC();

void func_ovl1c_800CAF44(s32 arg0) {
    func_80147078(arg0, 0x22);
    func_ovl1c_800CB008(arg0);
}

void func_ovl1c_800CAF78(s32 arg0) {
    func_80147078(arg0, 0x22);
    func_ovl1c_800CAFAC(arg0);
}

void func_ovl1c_800CAFAC(u8 *a) {
    D_ovl1c_800CBC9C[AF(a, u16, 2)](a);
}

void func_ovl1c_800CAFE8(void) {
    func_ovl1c_800CB008();
}

s32 func_ovl1c_800CB008(s32 arg0, s32 arg1) {
    func_80154150(arg0, 0);
    return func_80146CA0(arg0);
}

extern u16 D_800B99DA;
extern u8 D_ovl1c_800CBD68[];
extern u8 D_ovl1c_800CBD69;
extern u8 D_ovl1c_800CBD6A;

extern u8 D_ovl1c_800CBD6B;
extern u8 D_ovl1c_800CBD6C;
extern u8 D_ovl1c_800CBD6D;
extern u8 D_ovl1c_800CBD6E;
extern u8 D_ovl1c_800CBD6F;
extern s32 func_80146578();
extern void func_8001CD9C();

extern void func_80146A6C();

extern void func_800D20C0();
extern void func_800D23D0();

extern u8 D_ovl1c_800CBCBC;
extern u8 D_ovl1c_800CBCC4;
extern void func_80017DC4();
extern void func_80017DF8();
extern void func_80149350();
extern void func_8012F14C();
extern s32 func_80015954();

extern AMtx D_800AE620;
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern u8 D_ovl1c_800CBDB0[];
extern u8 D_ovl1c_800CBDB1;
extern u8 D_ovl1c_800CBDB2;
extern u8 D_ovl1c_800CBDB4;
extern u8 D_ovl1c_800CBDB5;
extern u8 D_ovl1c_800CBDB6;
extern s32 func_801465C0();
extern void func_8001CD50();

extern void func_80017758();
extern void MulMatrix2();

extern s32 func_8014C088();

void func_ovl1c_800CB03C(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (func_8014C088(arg0, 0x1C) != 0) {
        var_s0 = 1;
    } else if (func_8014C050(arg0, 0x3E) != 0) {
        var_s0 = 1;
    }
    if (var_s0 == 0) {
        func_80146994(0x41, arg0, 0, 0);
        func_80147324(0x836);
        func_80146CA0(arg0);
    }
}

void func_ovl1c_800CB0B8(s32 arg0) {
    if (func_8014C050(arg0, 0x41) == 0) {
        func_80165A20(arg0);
        func_801599A4(arg0);
        func_80159B3C(arg0);
    }
}

void func_ovl1c_800CB104(void) {
}

void func_ovl1c_800CB10C(u8 *arg0) {
    if (D_80078EC1 != 4) {
        func_ovl1c_800CB3D0();
        return;
    }
    func_ovl1c_800CB3F0(arg0);
    func_ovl1c_800CB4AC(arg0);
    D_ovl1c_800CBCA8[AF(arg0, u16, 2)](arg0);
}

void func_ovl1c_800CB184(u8 *arg0) {
    func_80146E90(arg0, AF(arg0, s32, 0x50) * 4);
    func_80146CA0(arg0);
}

void func_ovl1c_800CB1BC(u8 *arg0) {
    u8 *o;

    if (func_80146E98(arg0) != 0) {
        o = (u8 *) func_80146578();
        AF(arg0, u8 *, 0x20) = o;
        if (o != 0) {
            func_8001CD9C(o, D_ovl1c_800CBD68);
            func_800233CC(D_ovl1c_800CBD68, 0x20);
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
            AF(o, s32, 4) |= 0x50000000;
            AF(arg0, s16, 0x62) = 0x1000;
            AF(arg0, s16, 0x60) = 0;
            AF(o, s16, 0x14) = -0x155;
            AF(o, s16, 0x12) = AF(arg0, s32, 0x54) * 0x555 + AF(arg0, s32, 0x50) * 0xB;
            D_ovl1c_800CBD68[0] = 0xF0;
            D_ovl1c_800CBD69 = 0xF0;
            D_ovl1c_800CBD6A = 0xF0;
            D_ovl1c_800CBD6B = 0;
            D_ovl1c_800CBD6C = 0;
            D_ovl1c_800CBD6D = 0x20;
            D_ovl1c_800CBD6E = 0x20;
            D_ovl1c_800CBD6F = 0;
            func_80146CA0(arg0);
            return;
        }
        func_ovl1c_800CB3D0(arg0);
    }
}

void func_ovl1c_800CB2F4(u8 *arg0) {
    s16 v;
    u8 *m;

    m = AF(arg0, u8 *, 0x20);
    AF(arg0, u16, 0x60) += 0x60;
    v = AF(m, u16, 0x1A) + 0x200;
    AF(m, s16, 0x1A) = v;
    AF(m, s16, 0x18) = v;
    if (v > 0x1000) {
        AF(m, s16, 0x1A) = 0x1000;
        AF(m, s16, 0x18) = 0x1000;
        func_80146CA0(arg0);
    }
}

void func_ovl1c_800CB354(u8 *arg0) {
    u8 *m;
    u16 v;

    m = AF(arg0, u8 *, 0x20);
    v = AF(arg0, u16, 0x62) - 0x40;
    AF(arg0, u16, 0x62) = v;
    if ((s16) v < 0) {
        func_80146CA0(arg0);
        return;
    }
    AF(m, u16, 0x12) = (AF(m, u16, 0x12) - 0x71) & 0xFFF;
    func_80146A6C(0x3E, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
}

void func_ovl1c_800CB3D0(void) {
    func_80162CCC();
}

void func_ovl1c_800CB3F0(u8 *arg0) {
    AMtx m;
    AVec v;
    u8 *s;
    u8 *o;

    s = AF(arg0, u8 *, 0x4C);
    o = AF(arg0, u8 *, 0x20);
    v.vx = v.vy = v.vz = AF(arg0, u16, 0x62);
    func_80017DC4(&v, &m);
    func_80017DF8(o + 0x10, &m);
    func_80149350(s, &D_ovl1c_800CBCBC, &v);
    m.t[0] = v.vx;
    m.t[1] = v.vy;
    m.t[2] = v.vz;
    func_8012F14C(&m, &D_ovl1c_800CBCC4, &v);
    func_80015954(&v, arg0 + 4);
}

void func_ovl1c_800CB4AC() {
    u8 var_v0;
    u8 var_v1;

    var_v1 = 0xCF;
    if (D_800B99DA & 1) {
        var_v0 = 0xFF;
    } else {
        var_v1 = 0xBF;
        var_v0 = 0xEF;
    }
    D_ovl1c_800CBD68[0] = var_v1;
    D_ovl1c_800CBD69 = var_v0;
    D_ovl1c_800CBD6A = var_v1;
}

void func_ovl1c_800CB4F4(u8 *arg0) {
    if (D_80078EC1 != 4) {
        func_80146C3C();
        return;
    }
    D_ovl1c_800CBD0C[AF(arg0, u16, 2)]();
}

void func_ovl1c_800CB550(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_800D2294(arg0, (s32) &D_ovl1c_800CBCCC);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_800233CC((s32) &D_ovl1c_800CBCCC, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        func_80146E90(arg0, 8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl1c_800CB5E4(u8 *arg0) {
    s16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) << 9;
    AF(temp_v1, s16, 0x1A) = temp_v0;
    AF(temp_v1, s16, 0x18) = temp_v0;
    if (func_80146E98() != 0) {
        func_80146C3C(arg0);
    }
}

void func_ovl1c_800CB630(u8 *arg0) {
    if (D_80078EC1 == 4) {
        D_ovl1c_800CBD14[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl1c_800CB68C(u8 *arg0) {
    AVec v;
    s32 pad[8];
    AMtx m;
    u8 *s;
    u8 *o;
    s32 r;

    s = AF(arg0, u8 *, 0x34);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        o = (u8 *) func_801465C0();
        if (o != 0) {
            D_ovl1c_800CBDB2 = 0xC0;
            D_ovl1c_800CBDB0[0] = 0xC0;
            D_ovl1c_800CBDB1 = 0;
            D_ovl1c_800CBDB6 = 0;
            D_ovl1c_800CBDB5 = 0;
            D_ovl1c_800CBDB4 = 0;
            func_800233CC(D_ovl1c_800CBDB0, 0x40);
            func_8001CD50(o, D_ovl1c_800CBDB0);
            AF(o, u8 *, 0x34) = arg0 + 0x38;
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
            AF(o, s32, 4) |= 0x50000000;
            func_ovl1c_800CBAA4(arg0);
            AF(arg0, u8 *, 0x20) = o;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 2)++;
        }
    } else {
        v.vx = 0;
        v.vy = 0;
        v.vz = 0x20;
        m = D_800AE620;
        r = rand();
        RotMatrixY((u32) (r & 0x7F00) >> 3, &m);
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, s16, 6) = D_80126B5E + v.vx;
        AF(arg0, s16, 0xA) = D_80126B62 - (r & 0x3F);
        AF(arg0, s16, 0xE) = D_80126B66 + v.vz;
        AF(arg0, AMtx, 0x38) = AF(s, AMtx, 0x38);
        AF(arg0, s32, 0x2C) = 0x1000;
        AF(arg0, s32, 0x30) = 0xFF;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = 4;
    }
}

void func_ovl1c_800CB8A4(u8 *arg0) {
    u8 *m = AF(arg0, u8 *, 0x20);

    func_ovl1c_800CBAA4(arg0);
    if (--AF(arg0, s32, 0x1C) != 0) {
        func_80146A6C(0x41, arg0, 0, 0, 0, 0x8000, 0);
        AF(m, u16, 0x18) += 0x100;
        AF(m, u16, 0x1A) += 0x140;
        return;
    }
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, u16, 2)++;
}

void func_ovl1c_800CB944(u8 *arg0) {
    func_ovl1c_800CBAA4(arg0);
    if (--AF(arg0, s32, 0x1C) != 0) {
        func_80146A6C(0x41, arg0, 0, 0, 0, 0x8000, 0);
    } else {
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2)++;
    }
}

void func_ovl1c_800CB9C0(u8 *arg0) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    func_ovl1c_800CBAA4();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) - 0x100);
        AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) - 0x120);
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl1c_800CBA30(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        func_800D22E4();
        AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) - 3);
        AF(arg0, s32, 0x30) = (s32) (AF(arg0, s32, 0x30) - 0xE);
        func_ovl1c_800CBB38(arg0, arg0 + 0x38);
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl1c_800CBAA4(u8 *arg0) {
    AVec v;
    AVec r;
    u8 *o;

    o = AF(arg0, u8 *, 0x34);
    v.vx = AF(o, u16, 6);
    v.vy = AF(o, u16, 0xA) - 0x28;
    v.vz = AF(o, u16, 0xE);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
    func_800D23D0(&r);
    RotMatrixYXZ(&r, arg0 + 0x38);
}

void func_ovl1c_800CBB38(u8 *arg0, AMtx *arg1) {
    APrim s;
    AMtx m;
    AVec r;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    u8 t;
    u8 u;
    u8 w;

    a = 7;
    b = -7;
    c = 3;
    d = -3;
    s.v[0].vx = a;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = b;
    s.v[1].vy = c;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = d;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    t = AF(arg0, u8, 0x30);
    s.code = 0x50000000;
    u = t >> 2;
    w = u >> 2;
    s.c[1].r = s.c[2].r = s.c[1].b = s.c[2].b = t;
    s.c[1].g = s.c[2].g = u;
    s.c[0].g = s.c[3].g = s.c[0].b = s.c[3].b = s.c[0].r = s.c[3].r = w;
    r.vx = r.vy = AF(arg0, u16, 0x2C);
    func_80017DC4(&r, &m);
    MulMatrix2(arg1, &m);
    m.t[0] = AF(arg0, s16, 6);
    m.t[1] = AF(arg0, s16, 0xA);
    m.t[2] = AF(arg0, s16, 0xE);
    func_80017758(&s, &m);
    s.v[0].vx = c;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = d;
    s.v[1].vy = a;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = b;
    func_80017758(&s, &m);
}
