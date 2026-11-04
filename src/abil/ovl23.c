#include "common.h"
#include "abil.h"

extern void func_80146994();
extern AbilStep D_ovl23_800CB49C[];
extern AbilStep D_ovl23_800CB4BC[];
void func_ovl23_800CAEE0(u8 *a);
extern void func_80165A20();
extern s32 D_80078EC8;

extern void func_800183E0();
extern s32 D_ovl23_800CB4E8;
extern s32 D_ovl23_800CB528;
extern s32 D_ovl23_800CB568;
extern s32 D_ovl23_800CB5A8;

void func_ovl23_800CAE0C(void) {
    func_800183E0(&D_ovl23_800CB528);
    func_800183E0(&D_ovl23_800CB568);
    func_800183E0(&D_ovl23_800CB5A8);
    func_800183E0(&D_ovl23_800CB4E8);
}

void func_ovl23_800CAE64(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl23_800CB49C[AF(a, u8, 0x197)](a);
}

void func_ovl23_800CAEA8(u8 *a) {
    func_ovl23_800CAEE0(a);
    AF(a, u8, 0x197)++;
}

extern void func_801655E4();
extern s32 func_80165910();
extern void func_ovl23_800CAF64();
extern s32 RotMatrixY();
extern s32 rand();

void func_ovl23_800CAEE0(u8 *arg0) {
    if (func_80165910() == 0) {
        func_801655E4(arg0);
    }
    func_ovl23_800CAF64(arg0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl23_800CAF30(void) {
    if (D_80078EC8 == 0) {
        func_80165A20();
    }
}

void func_ovl23_800CAF5C(void) {
}

void func_ovl23_800CAF64(s32 a) {
    func_80146994(0x38, a, 0x8000, 0);
}

extern u8 D_800D387C;
extern u16 D_80126BC8;
extern u16 D_80126BCA;
extern u16 D_80126BCC;
extern s16 D_ovl23_800CB4A8[];
extern s32 func_801465C0();
extern void func_8001CC3C();
extern s32 func_ovl23_800CB2AC();
extern void func_80146A6C();
extern void func_80147324();

void func_ovl23_800CAF90(u8 *arg0) {
    s32 pad;
    s16 i;
    u8 *o;
    u16 t;

    if (AF(arg0, s32, 0x2C) & 0x8000) {
        AF(arg0, s16, 0x12) = 0x14;
        AF(arg0, s16, 2) = 1;
        return;
    }
    i = AF(arg0, u32, 0x30) >> 15;
    o = (u8 *) func_801465C0();
    if (o != 0) {
        func_8001CC3C(o, &D_800D387C, D_ovl23_800CB4A8[i], D_ovl23_800CB4A8[i + 1]);
        AF(o, u8, 0x27) = (i >> 1) + 0x19;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u8 *, 0x20) = o;
        AF(arg0, s16, 2) = 2;
        AF(arg0, u32, 0x30) = AF(arg0, u16, 0x30);
        func_ovl23_800CB2AC(arg0);
        func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0x0CCCFFFC, 0xE0009C00);
        t = D_80126BCC - 0x300;
        D_80126BCC = t;
        D_80126BC8 = t;
        D_80126BCA += 0xC0;
        func_80147324(0x8E9);
    }
}

extern u8 D_80078EC1;
extern u16 D_800B99DA;
extern s32 func_80146AB4();
extern void func_8002D4C8();
extern void func_80146C3C();

void func_ovl23_800CB0D0(u8 *arg0) {
    s32 r;
    s32 n;
    s16 h;
    s16 *p;

    if (D_80078EC1 == 0x14) {
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
            if (!(n & 1)) {
                if (func_80146AB4(0x38, arg0, 0, 0, 0, AF(arg0, s16, 0x12), AF(arg0, s16, 0x1A) | (AF(arg0, s16, 0x28) << 16)) == 0) {
                    AF(arg0, u16, 0x2A) = 0;
                }
                h = AF(arg0, s16, 0x28) + 1;
                AF(arg0, s16, 0x28) = h;
                if (h >= 3) {
                    AF(arg0, s16, 0x28) = 0;
                }
                AF(arg0, u16, 0x2A)--;
                if (AF(arg0, s16, 0x2A) <= 0) {
                    AF(arg0, s32, 0x1C) = 0xE;
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
        p = (s16 *)&D_80126BCC;
        if (*p < 0x1000) {
            *p += 0xE0;
            D_80126BC8 = *p;
            D_80126BCA -= 0x38;
        }
        if (!(D_800B99DA & 0xF)) {
            func_8002D4C8(0x5FB, 0);
        }
    } else {
        D_80126BCC = 0x1000;
        D_80126BCA = 0x1000;
        D_80126BC8 = 0x1000;
        func_80146C3C(arg0);
    }
}

extern AMtx D_800AE620;
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern u16 D_ovl23_800CB4B4[];
extern void func_8012F14C();

s32 func_ovl23_800CB2AC(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *o;
    u32 n;
    u32 n2;
    s32 k;

    o = AF(arg0, u8 *, 0x20);
    if (D_80078EC1 == 0x14) {
        n = AF(arg0, u32, 0x2C) + 4;
        AF(arg0, u32, 0x2C) = n;
        if (n <= 0x1C0) {
            k = AF(arg0, s32, 0x1C);
            AF(arg0, s32, 0x1C) = k + 1;
            AF(o, u16, 0x18) = AF(o, u16, 0x1A) = D_ovl23_800CB4B4[k & 3];
            AF(arg0, s32, 0x30) += 0xA00000U / (AF(arg0, u32, 0x2C) * 0x324);
            m = D_800AE620;
            RotMatrixY(AF(arg0, s32, 0x30), &m);
            v.vx = 0;
            v.vy = -AF(arg0, s32, 0x2C);
            n2 = AF(arg0, u32, 0x2C);
            m.t[0] = D_80126B5E;
            m.t[1] = D_80126B62 - 0x1C;
            m.t[2] = D_80126B66;
            v.vz = n2 - (n2 >> 2);
            func_8012F14C(&m, &v, &v);
            AF(arg0, u16, 6) = v.vx;
            AF(arg0, u16, 0xA) = v.vy;
            AF(arg0, u16, 0xE) = v.vz;
            return;
        }
    }
    func_80146C3C(arg0);
}

void func_ovl23_800CB460(u8 *a) {
    D_ovl23_800CB4BC[AF(a, u16, 2)](a);
}
