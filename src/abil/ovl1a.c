#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl1a_800CB294[];
extern AbilStep D_ovl1a_800CB260[];
extern AbilStep D_ovl1a_800CB26C[];
void func_ovl1a_800CAEB0(u8 *a);

void func_ovl1a_800CAE0C(void) {
    func_800183E0(D_ovl1a_800CB294);
}

void func_ovl1a_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1a_800CB260[AF(a, u8, 0x197)](a);
}

void func_ovl1a_800CAE78(u8 *a) {
    func_ovl1a_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

extern void func_80154A74();
extern void func_ovl1a_800CAFFC();
extern void func_8012A2F4();
extern void func_80146CA0();
extern void func_801474EC();
extern void func_ovl1a_800CB17C();
extern void func_801599A4();
extern void func_801655E4();
extern s32 func_80165910();
extern void func_8016629C();
extern s32 func_ovl1a_800CAF6C();
extern void StartRumbleScript();
extern void func_8012A304();
extern void func_80147324();
extern void func_801477E8();
extern void func_801483E8();
extern void func_8014C010();
extern void func_80154274();
extern s32 D_80062BD0;
extern s32 D_ovl1a_800CB1F4;

void func_ovl1a_800CAEB0(u8 *arg0) {
    func_801599A4();
    func_ovl1a_800CAF6C(arg0);
    if (func_80165910(arg0) == 0) {
        func_801655E4(arg0);
    }
    func_8016629C(arg0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl1a_800CAF10(void) {
}

extern void func_80147078();
extern void func_ovl1a_800CAFA0();

void func_ovl1a_800CAF18(s32 arg0) {
    func_80154A74(arg0, 0x11);
}

void func_ovl1a_800CAF38(s32 arg0) {
    func_80147078(arg0, 0x1F);
    func_ovl1a_800CAFFC(arg0);
}

s32 func_ovl1a_800CAF6C(s32 arg0) {
    func_80147078(arg0, 0x1F);
    func_ovl1a_800CAFA0(arg0);
    return;
}

void func_ovl1a_800CAFA0(u8 *a) {
    D_ovl1a_800CB26C[AF(a, u16, 2)](a);
}

void func_ovl1a_800CAFDC(void) {
    func_ovl1a_800CAFFC();
}

void func_ovl1a_800CAFFC(s32 arg0) {
    func_801474EC();
    func_ovl1a_800CB17C(arg0);
    func_80146CA0(arg0);
}

extern s32 D_80078EC8;
extern u8 D_ovl1a_800CB234;
extern s32 func_80148800();
extern void func_80165A20();
extern void func_80159B3C();
extern s32 func_80148AFC();
extern void func_80146DE8();
extern void func_80147A84();
extern void func_801473EC();
extern void func_80148038();
extern void func_80147460();
extern s32 func_8016151C();
extern void func_801615C4();

void func_ovl1a_800CB034(s32 arg0) {
    s32 var_a3;

    if ((func_80148800(arg0) & 0x20) || (D_80078EC8 == 0)) {
        func_80165A20(arg0);
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        func_80154274(arg0, (s32) &D_ovl1a_800CB234);
    }
    if (func_80148AFC(arg0) & 0xFF) {
        func_80146DE8(arg0, 0, 0, -0x80000);
    } else {
        func_80146DE8(arg0, 0, 0, 0);
    }
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x30000);
    func_80147460(arg0);
    if (func_8016151C(arg0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 8);
        func_801615C4(arg0, 0);
        func_ovl1a_800CB17C(arg0);
    }
}

void func_ovl1a_800CB148(s32 arg0) {
    func_8012A2F4();
    func_80154A74(arg0, 0x11);
}

void func_ovl1a_800CB17C(u8 *arg0) {
    func_8012A304(AF(arg0, s16, 0xA), 0x80);
    func_801477E8(arg0, 0xFFE80000);
    func_80154274(arg0, &D_ovl1a_800CB1F4);
    func_80147324(0x47A);
    func_8014C010(arg0, 2);
    func_801483E8(arg0);
    StartRumbleScript(&D_80062BD0);
}
