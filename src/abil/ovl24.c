#include "common.h"
#include "abil.h"

extern void func_80147364();
extern void func_800183E0();
extern u8 D_ovl24_800CB4FC[];
extern u8 D_ovl24_800CB4BC[];
extern AbilStep D_ovl24_800CB458[];
extern AbilStep D_ovl24_800CB490[];
void func_ovl24_800CAEC0(u8 *a);

void func_ovl24_800CAE0C(void) {
    func_800183E0(D_ovl24_800CB4FC);
    func_800183E0(D_ovl24_800CB4BC);
}

void func_ovl24_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl24_800CB458[AF(a, u8, 0x197)](a);
}

void func_ovl24_800CAE88(u8 *a) {
    func_ovl24_800CAEC0(a);
    AF(a, u8, 0x197)++;
}

extern void func_80146994();
extern void func_80147324();
extern void func_8014B33C();
extern void func_801655E4();
extern void func_801657A0();
extern s32 func_80165910();

void func_ovl24_800CAEC0(u8 *arg0) {
    func_801657A0();
    if (func_80165910(arg0) == 0) {
        func_801655E4(arg0);
    }
    func_8014B33C(arg0);
    AF(arg0, s32, 0x1AC) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x100);
    func_80146994(0x37, arg0, 0x8000, 0);
    func_80147324(0x83F);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern void func_80165840();
extern void func_80165A20();
extern s32 D_80078EC8;
extern s32 RotMatrixY();
extern s32 rcos();

void func_ovl24_800CAF44(s32 arg0) {
    if (D_80078EC8 == 0) {
        func_80165840();
        func_80165A20(arg0);
    }
}

void func_ovl24_800CAF84(void) {
    func_80147364(4, 0x83f);
}

extern u8 D_ovl24_800CB51C[];
extern u8 D_ovl24_800CB51D;
extern u8 D_ovl24_800CB51E;
extern s32 func_80146C3C();
extern u8 D_ovl24_800CB464;
extern u8 D_ovl24_800CB470;
extern s8 D_ovl24_800CB520;
extern s8 D_ovl24_800CB521;
extern s8 D_ovl24_800CB522;
extern void func_ovl24_800CB158();
extern void func_80146AB4();
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();
extern void func_8001CD9C();

void func_ovl24_800CAFA8(u8 *arg0) {
    s32 pad[6];
    u8 *o;
    s16 i;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x2C) & 0x8000) {
        D_ovl24_800CB51E = 0;
        D_ovl24_800CB51D = 0;
        D_ovl24_800CB51C[0] = 0;
        D_ovl24_800CB522 = 0;
        D_ovl24_800CB521 = 0;
        D_ovl24_800CB520 = 0;
        func_ovl24_800CB158();
        for (i = 0; i < 4; i++) {
            func_80146AB4(0x37, arg0, 0, 0, 0, (i << 16) >> 6, 0);
        }
        AF(arg0, s16, 0x16) = -0x38;
        AF(arg0, s16, 2) = 1;
        return;
    }
    if (o == 0) {
        o = (u8 *) func_801465C0();
        if (o == 0) {
            goto fail;
        }
        func_8001CC3C(o, &D_ovl24_800CB464, 0, 0);
        AF(o, s16, 0x18) = 0x6000;
        AF(o, s16, 0x1A) = 0x6000;
        AF(o, u8, 0x27) = 0x19;
        AF(o, u8, 0x26) = 0;
        AF(o, u8, 0x25) = 0;
        AF(o, u8, 0x24) = 0;
        AF(o, s32, 4) |= 0xD0000000;
        func_80128EA8(o, arg0 + 0x24, &D_ovl24_800CB470);
        AF(arg0, u8 *, 0x20) = o;
        AF(arg0, s32, 0x34) = 0;
        AF(arg0, s16, 2) = 2;
    }
    if (AF(arg0, s32, 0x34) == 0) {
        o = (u8 *) func_801465C0();
        if (o == 0) {
fail:
            func_80146C3C(arg0);
            return;
        }
        AF(arg0, u8 *, 0x34) = o;
        func_8001CD9C(o, D_ovl24_800CB51C);
        AF(o, u16, 0x2C) = 0x8001;
        AF(o, s32, 4) |= 0xE0000000;
    }
}

extern u8 D_80078EC1;
extern void func_800233CC();

void func_ovl24_800CB158(u8 *arg0) {
    u8 v;

    if (D_80078EC1 == 0x13) {
        if (AF(arg0, s32, 0x1C) < 0x10) {
            v = D_ovl24_800CB51E + 8;
            D_ovl24_800CB51E = v;
            D_ovl24_800CB51D = v;
            D_ovl24_800CB51C[0] = v;
            func_800233CC(D_ovl24_800CB51C, 0x24);
        }
        AF(arg0, s32, 0x1C)++;
    } else {
        func_80146C3C(arg0);
    }
}

extern AMtx D_800AE620;
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern void func_80128ED8();
extern void func_8012F14C();
extern void func_80016714();

void func_ovl24_800CB1EC(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *mo;
    u8 *o;
    s16 k;
    s32 t;
    u8 c;
    s32 msk;

    mo = AF(arg0, u8 *, 0x20);
    o = AF(arg0, u8 *, 0x34);
    if (D_80078EC1 == 0x13) {
        t = AF(arg0, s32, 0x1C);
        k = 0;
        if (t < 0x10) {
            c = AF(mo, u8, 0x26) + 4;
            AF(mo, u8, 0x24) = AF(mo, u8, 0x25) = AF(mo, u8, 0x26) = c;
            AF(mo, u16, 0x18) -= 0x400;
            AF(mo, u16, 0x1A) -= 0x400;
        } else {
            k = t - 0x10;
            func_80128ED8(mo, arg0 + 0x24);
        }
        msk = 0x7FFFFFFF;
        AF(mo, s32, 4) &= msk;
        m = D_800AE620;
        RotMatrixY((k << 5) + AF(arg0, s32, 0x2C), &m);
        v.vx = 0;
        m.t[0] = D_80126B5E;
        m.t[1] = D_80126B62;
        m.t[2] = D_80126B66;
        v.vy = (rcos(((k & 0xF) << 8) + AF(arg0, s32, 0x2C)) >> 9) - 0x30;
        v.vz = -0x50;
        func_8012F14C(&m, &v, &v);
        AF(arg0, u16, 6) = v.vx;
        AF(arg0, u16, 0xA) = v.vy;
        AF(arg0, u16, 0xE) = v.vz;
        AF(o, s32, 4) &= msk;
        AF(o, u16, 0x18) = AF(mo, u16, 0x18);
        AF(o, u16, 0x1A) = AF(mo, u16, 0x1A);
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA);
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(arg0, s32, 0x1C)++;
        return;
    }
    if (o != NULL) {
        func_80016714(o, 0x38);
    }
    func_80146C3C(arg0);
}

void func_ovl24_800CB41C(u8 *a) {
    D_ovl24_800CB490[AF(a, u16, 2)](a);
}
