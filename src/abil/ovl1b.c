#include "common.h"
#include "abil.h"

extern s32 D_ovl1b_800CB538;
extern void func_800183E0();
void func_ovl1b_800CAE0C(void) {
    func_800183E0(&D_ovl1b_800CB538);
}

extern AbilStep D_ovl1b_800CB4FC[];
extern AbilStep D_ovl1b_800CB508[];
void func_ovl1b_800CAEB0(u8 *a);

void func_ovl1b_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1b_800CB4FC[AF(a, u8, 0x197)](a);
}

void func_ovl1b_800CAE78(u8 *a) {
    func_ovl1b_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

extern s32 func_80146A6C();
extern void func_80146C3C();
extern u8 D_80078EC1;
extern void func_80147324();
extern void func_8014B944();
extern void func_801655E4();
extern void func_801657A0();
extern s32 func_80165910();

void func_ovl1b_800CAEB0(u8 *arg0) {
    func_801657A0();
    if (func_80165910(arg0) == 0) {
        func_80147324(0x7A3);
        func_8014B944(arg0, 0x100000, 1);
        func_801655E4(arg0);
    }
    func_80146A6C(0x21, arg0, 0, 0, 0, 0, 0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern void func_80165840();
extern void func_80165A20();
extern s32 D_80078EA4;
extern s32 D_80078EC8;
extern s32 MulMatrix();
extern s32 RotMatrixYXZ();
extern s32 ApplyMatrixSV();
extern s32 RotMatrixZ();

void func_ovl1b_800CAF38(s32 arg0) {
    if (D_80078EC8 == 0) {
        func_80165840();
        func_80165A20(arg0);
        return;
    }
    D_80078EA4 = 0xA00000;
}

void func_ovl1b_800CAF8C(void) {
}

extern u8 D_ovl1b_800CB558[];
extern void func_800233CC();
extern u8 *func_801465C0();
extern void func_8001CD50();

INCLUDE_ASM("asm/abil/ovl1b/nonmatchings/ovl1b", func_ovl1b_800CAF94);

INCLUDE_ASM("asm/abil/ovl1b/nonmatchings/ovl1b", func_ovl1b_800CB0C8);

void func_ovl1b_800CB33C(u8 *a) {
    D_ovl1b_800CB508[AF(a, u16, 2)](a);
}

void func_ovl1b_800CB378(u8 *arg0) {
    u8 *o;

    if (D_80078EC1 != 2) {
        func_80146C3C(arg0);
        return;
    }
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        D_ovl1b_800CB558[1] = D_ovl1b_800CB558[2] = 0xA0;
        D_ovl1b_800CB558[0] = D_ovl1b_800CB558[4] = D_ovl1b_800CB558[5] = D_ovl1b_800CB558[6] = 0;
        func_800233CC(D_ovl1b_800CB558, 0x60);
        AF(arg0, u16, 2) = 3;
        return;
    }
    o = func_801465C0();
    if (o != NULL) {
        func_8001CD50(o, D_ovl1b_800CB558);
        AF(o, u8 *, 0x34) = arg0 + 0x38;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u8 *, 0x20) = o;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2)++;
    }
}

void func_ovl1b_800CB478(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = AF(arg0, s32, 0x34);
    if (D_80078EC1 == 2) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == -1) {
            func_80146A6C(0x21, temp_a1, 0, 0, 0, 0x8000, 0);
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else {
        func_80146C3C(arg0, temp_a1);
    }
}
