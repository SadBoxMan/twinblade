#include "common.h"
#include "abil.h"

extern void func_80147364();
extern void func_800183E0();
extern u8 D_ovl17_800CB3BC[];
extern u8 D_ovl17_800CB37C[];
extern AbilStep D_ovl17_800CB318[];
extern AbilStep D_ovl17_800CB350[];
void func_ovl17_800CAEC0(u8 *a);

void func_ovl17_800CAE0C(void) {
    func_800183E0(D_ovl17_800CB3BC);
    func_800183E0(D_ovl17_800CB37C);
}

void func_ovl17_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl17_800CB318[AF(a, u8, 0x197)](a);
}

void func_ovl17_800CAE88(u8 *a) {
    func_ovl17_800CAEC0(a);
    AF(a, u8, 0x197)++;
}

extern void func_80165840();
extern void func_80165A20();
extern s32 D_80078EA4;
extern s32 D_80078EC8;
extern void func_80146994();
extern void func_80147324();
extern void func_801655E4();
extern void func_801657A0();
extern s32 func_80165910();

void func_ovl17_800CAEC0(u8 *arg0) {
    func_801657A0();
    if (func_80165910(arg0) == 0) {
        func_801655E4(arg0);
    }
    func_80147324(0x47C);
    func_80146994(0x20, arg0, 0x8000, 0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl17_800CAF2C(s32 arg0) {
    if (D_80078EC8 == 0) {
        func_80165840();
        func_80165A20(arg0);
        return;
    }
    D_80078EA4 = 0;
}

void func_ovl17_800CAF7C(void) {
    func_80147364(4, 0x47c);
}

extern u8 D_80078EC1;
extern void func_801493D0();
extern void func_80146C3C();

extern u8 D_ovl17_800CB324;
extern u8 D_ovl17_800CB330;
extern void func_80146AB4();
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();

extern AMtx D_800AE620;
extern void func_80146A6C();
extern void func_8012F14C();
extern void func_80128ED8();

void func_ovl17_800CAFA0(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *s;
    u8 *o;

    s = AF(arg0, u8 *, 0x34);
    o = AF(arg0, u8 *, 0x20);
    if (D_80078EC1 != 0x11) {
        func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0x0AAAFFFA, 0xE000B400);
        func_80146C3C(arg0);
        return;
    }
    m = D_800AE620;
    RotMatrixY((AF(arg0, s32, 0x1C) << 5) + AF(arg0, s32, 0x2C), &m);
    m.t[0] = AF(s, s16, 6);
    m.t[1] = AF(s, s16, 0xA);
    m.t[2] = AF(s, s16, 0xE);
    v.vx = 0;
    v.vy = (rcos(((AF(arg0, s32, 0x1C) & 0xF) << 8) + AF(arg0, s32, 0x2C)) >> 9) - 0x14;
    v.vz = -0x40;
    func_8012F14C(&m, &v, &v);
    if (AF(arg0, s32, 0x1C) == 0) {
        func_80146A6C(3, arg0, v.vx, v.vy, v.vz, 0x0AAAFFFA, 0xE000B800);
    } else {
        AF(o, s32, 4) &= 0x7FFFFFFF;
        AF(arg0, s16, 6) = v.vx;
        AF(arg0, s16, 0xA) = v.vy;
        AF(arg0, s16, 0xE) = v.vz;
        func_80128ED8(o, arg0 + 0x24);
    }
    AF(arg0, s32, 0x1C)++;
}

void func_ovl17_800CB190(u8 *a) {
    D_ovl17_800CB350[AF(a, u16, 2)](a);
}

void func_ovl17_800CB1CC(u8 *arg0) {
    s32 pad[6];
    s16 i;
    s32 temp_v0_2;

    if (AF(arg0, s32, 0x2C) & 0x8000) {
        for (i = 0; i < 4; i++) {
            func_80146AB4(0x20, arg0, 0, 0, 0, (i << 0x10) >> 6, 0);
        }
        AF(arg0, s16, 0x16) = -0x38;
        AF(arg0, s16, 2) = 1;
        return;
    }
    temp_v0_2 = func_801465C0();
    if (temp_v0_2 != 0) {
        func_8001CC3C(temp_v0_2, &D_ovl17_800CB324, 0, 0);
        AF(temp_v0_2, s16, 0x1A) = 0x1C00;
        AF(temp_v0_2, s16, 0x18) = 0x1C00;
        AF(temp_v0_2, u8, 0x27) = 0x19;
        AF(temp_v0_2, s32, 4) |= 0xC0000000;
        func_80128EA8(temp_v0_2, arg0 + 0x24, &D_ovl17_800CB330);
        AF(arg0, s32, 0x20) = temp_v0_2;
        AF(arg0, s16, 2) = 2;
    }
}

void func_ovl17_800CB2CC(u8 *arg0) {
    s32 t = AF(arg0, s32, 0x34);

    if (D_80078EC1 == 0x11) {
        func_801493D0(t, arg0 + 0x10, arg0 + 4);
        return;
    }
    func_80146C3C(arg0);
}
