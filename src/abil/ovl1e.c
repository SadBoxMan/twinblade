#include "common.h"
#include "abil.h"

extern s32 D_ovl1e_800CAF34;
extern void func_800183E0();
void func_ovl1e_800CAE0C(void) {
    func_800183E0(&D_ovl1e_800CAF34);
}

extern AbilStep D_ovl1e_800CAF08[];
void func_ovl1e_800CAEB0(u8 *a);

void func_ovl1e_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1e_800CAF08[AF(a, u8, 0x197)](a);
}

void func_ovl1e_800CAE78(u8 *a) {
    func_ovl1e_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

extern void func_801655E4();
extern s32 func_80165910();

void func_ovl1e_800CAEB0(u8 *arg0) {
    if (func_80165910() == 0) {
        func_801655E4(arg0);
    }
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl1e_800CAEF8(void) {
}

void func_ovl1e_800CAF00(void) {
}
