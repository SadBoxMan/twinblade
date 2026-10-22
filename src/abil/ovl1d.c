#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl1d_800CAF6C[];
extern AbilStep D_ovl1d_800CAF40[];
extern s32 func_80161104();
void func_ovl1d_800CAEC0(u8 *a);

void func_ovl1d_800CAE0C(void) {
    func_800183E0(D_ovl1d_800CAF6C);
}

void func_ovl1d_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1d_800CAF40[AF(a, u8, 0x197)](a);
}

void func_ovl1d_800CAE78(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl1d_800CAEC0(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_801655E4();

void func_ovl1d_800CAEC0(u8 *arg0) {
    func_801655E4();
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern void func_8014BB24();
extern void func_801599A4();
extern void func_80159B3C();

void func_ovl1d_800CAEF8(s32 arg0) {
    func_8014BB24(arg0, 0xA, 1);
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

void func_ovl1d_800CAF38(void) {
}
