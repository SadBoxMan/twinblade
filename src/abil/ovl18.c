#include "common.h"
#include "abil.h"

extern void func_80146994();
extern AbilStep D_ovl18_800CB5E8[];
extern AbilStep D_ovl18_800CB614[];
void func_ovl18_800CAF30(u8 *a);
extern void func_80165A20();
extern s32 D_80078EC8;

extern void func_800183E0();
extern s32 D_ovl18_800CB640;
extern s32 D_ovl18_800CB680;
extern s32 D_ovl18_800CB6C0;
extern s32 D_ovl18_800CB700;
extern s32 D_ovl18_800CB740;
extern s32 D_ovl18_800CB780;
extern s32 D_ovl18_800CB7C0;
extern s32 D_ovl18_800CB800;
extern s32 D_ovl18_800CB840;

void func_ovl18_800CAE0C(void) {
    func_800183E0(&D_ovl18_800CB680);
    func_800183E0(&D_ovl18_800CB6C0);
    func_800183E0(&D_ovl18_800CB700);
    func_800183E0(&D_ovl18_800CB740);
    func_800183E0(&D_ovl18_800CB780);
    func_800183E0(&D_ovl18_800CB7C0);
    func_800183E0(&D_ovl18_800CB800);
    func_800183E0(&D_ovl18_800CB840);
    func_800183E0(&D_ovl18_800CB640);
}

void func_ovl18_800CAEB4(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl18_800CB5E8[AF(a, u8, 0x197)](a);
}

void func_ovl18_800CAEF8(u8 *a) {
    func_ovl18_800CAF30(a);
    AF(a, u8, 0x197)++;
}

extern void func_801655E4();
extern s32 func_80165910();
extern void func_ovl18_800CAFB4();
extern s32 rand();
extern s32 RotMatrixY();

void func_ovl18_800CAF30(u8 *arg0) {
    if (func_80165910() == 0) {
        func_801655E4(arg0);
    }
    func_ovl18_800CAFB4(arg0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl18_800CAF80(void) {
    if (D_80078EC8 == 0) {
        func_80165A20();
    }
}

void func_ovl18_800CAFAC(void) {
}

void func_ovl18_800CAFB4(s32 a) {
    func_80146994(0x23, a, 0x8000, 0);
}

extern u8 D_800D387C;
extern s16 D_ovl18_800CB5F4[];
extern s16 D_ovl18_800CB5F6[];
extern u8 D_ovl18_800CB860[];
extern void func_800233CC();
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80146C3C();
extern void func_8001CD9C();

void func_ovl18_800CAFE0(u8 *arg0) {
    s32 pad[2];
    s16 i;
    u8 *o;
    u8 *q;

    if (AF(arg0, s32, 0x2C) & 0x8000) {
        D_ovl18_800CB860[0] = D_ovl18_800CB860[1] = 0xA0;
        D_ovl18_800CB860[2] = 0x70;
        D_ovl18_800CB860[4] = D_ovl18_800CB860[5] = D_ovl18_800CB860[6] = 0;
        func_800233CC(D_ovl18_800CB860, 0x1E);
        AF(arg0, s16, 0x12) = 0x1C0;
        AF(arg0, s16, 2) = 1;
        return;
    }
    i = AF(arg0, u32, 0x30) >> 15;
    o = (u8 *) func_801465C0();
    if (o == NULL) {
        goto fail;
    }
    func_8001CC3C(o, &D_800D387C, D_ovl18_800CB5F4[i], D_ovl18_800CB5F6[i]);
    AF(o, s16, 0x1A) = 0x2000;
    AF(o, s16, 0x18) = 0x2000;
    AF(o, u8, 0x27) = (i >> 1) + 0x19;
    AF(o, s32, 4) |= 0xC0000000;
    AF(arg0, u8 *, 0x20) = o;
    AF(arg0, s16, 2) = 2;
    AF(arg0, u32, 0x30) = AF(arg0, u16, 0x30);
    q = (u8 *) func_801465C0();
    if (q == NULL) {
    fail:
        func_80146C3C(arg0);
        return;
    }
    AF(arg0, u8 *, 0x34) = q;
    func_8001CD9C(q, D_ovl18_800CB860);
    AF(q, u16, 0x2C) = 0xC001;
    AF(q, s32, 4) |= 0xD0000000;
    AF(q, u16, 8) = AF(arg0, u16, 6);
    AF(q, u16, 0xA) = AF(arg0, u16, 0xA);
    AF(q, u16, 0xC) = AF(arg0, u16, 0xE);
}

extern u8 D_80078EC1;
extern u16 D_800B99DA;
extern u16 D_80126BC8;
extern u16 D_80126BCA;
extern u16 D_80126BCC;
extern s32 func_80146AB4();
extern void func_8002D4C8();

void func_ovl18_800CB168(u8 *arg0) {
    s32 r;
    s32 n;
    u16 c;
    s32 t;
    s32 pad[2];
    s16 x;

    if (D_80078EC1 == 3) {
        switch (AF(arg0, u32, 0x30)) {
        case 0:
            r = rand();
            AF(arg0, s16, 0x1A) = r & 0xFFF;
            AF(arg0, u16, 0x2A) = (r & 1) + 2;
            AF(arg0, s32, 0x30)++;
            break;
        case 1:
            n = AF(arg0, s32, 0x1C);
            AF(arg0, s32, 0x1C) = n + 1;
            if (!(n & 3)) {
                if (func_80146AB4(0x23, arg0, 0, 0, 0, AF(arg0, s16, 0x12), AF(arg0, s16, 0x1A) | ((AF(arg0, u16, 0x28)++ & 7) << 16)) == 0) {
                    AF(arg0, u16, 0x2A) = 0;
                }
                c = AF(arg0, u16, 0x2A) - 1;
                AF(arg0, u16, 0x2A) = c;
                if ((s16) c <= 0) {
                    AF(arg0, s32, 0x1C) = 0x10;
                    AF(arg0, s32, 0x30)++;
                }
            }
            break;
        case 2:
            if (--AF(arg0, s32, 0x1C) == 0) {
                AF(arg0, s32, 0x30) = 0;
            }
            break;
        }
        t = *(s16 *)&D_80126BCC;
        x = t;
        if (t > 0x1000) {
            t = D_80126BCA + 0x38;
            x -= 0xE0;
            *(s16 *)&D_80126BCC = x;
            D_80126BC8 = x;
            D_80126BCA = t;
        }
        if (!(D_800B99DA & 0xF)) {
            func_8002D4C8(0x5FB, 0);
        }
    } else {
        *(s16 *)&D_80126BCC = 0x1000;
        D_80126BCA = 0x1000;
        D_80126BC8 = 0x1000;
        func_80146C3C(arg0);
    }
}

extern u8 D_80078EC1;
extern AMtx D_800AE620;
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern u16 D_80126BC8;
extern u16 D_80126BCA;
extern u16 D_80126BCC;
extern s32 func_80146A6C();
extern void func_8012F14C();
extern void func_80016714();

void func_ovl18_800CB328(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *mo;
    u8 *o;
    u32 t;
    u16 s;
    s32 msk;

    mo = AF(arg0, u8 *, 0x20);
    o = AF(arg0, u8 *, 0x34);
    if (D_80078EC1 == 3) {
        t = AF(arg0, s32, 0x2C) - 4;
        AF(arg0, s32, 0x2C) = t;
        if (t < 0x1C) {
            func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0xCCCFFFC, 0xE0009C00);
            D_80126BC8 = D_80126BCC = D_80126BCC + 0x400;
            D_80126BCA -= 0x100;
            if (o != NULL) {
                func_80016714(o, 0x38);
            }
            func_80146C3C(arg0);
            return;
        }
        msk = 0x7FFFFFFF;
        s = AF(mo, u16, 0x1A) - 0x2C;
        AF(mo, s32, 4) &= msk;
        AF(mo, u16, 0x1A) = s;
        AF(mo, u16, 0x18) = s;
        AF(arg0, s32, 0x30) += 0xA00000U / (AF(arg0, u32, 0x2C) * 804);
        m = D_800AE620;
        RotMatrixY(AF(arg0, s32, 0x30), &m);
        v.vx = 0;
        v.vy = -(AF(arg0, u32, 0x2C) >> 1);
        v.vz = AF(arg0, s32, 0x2C);
        m.t[0] = D_80126B5E;
        m.t[1] = D_80126B62 - 0x1C;
        m.t[2] = D_80126B66;
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
        return;
    }
    if (o != NULL) {
        func_80016714(o, 0x38);
    }
    func_80146C3C(arg0);
}

void func_ovl18_800CB5AC(u8 *a) {
    D_ovl18_800CB614[AF(a, u16, 2)](a);
}
