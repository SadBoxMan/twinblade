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

INCLUDE_ASM("asm/abil/ovl18/nonmatchings/ovl18", func_ovl18_800CB168);

INCLUDE_ASM("asm/abil/ovl18/nonmatchings/ovl18", func_ovl18_800CB328);

void func_ovl18_800CB5AC(u8 *a) {
    D_ovl18_800CB614[AF(a, u16, 2)](a);
}
