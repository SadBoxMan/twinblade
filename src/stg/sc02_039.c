#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_039_8017BE9C(void) {
}

void func_sc02_039_8017BEA4(void) {
}

void func_sc02_039_8017BEAC(void) {
}

void func_sc02_039_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_039_80182B38[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc02_039_8017CFCC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc02_039_8017CFF4(void);
extern void func_800D1EBC();
extern void (*D_sc02_039_80182B4C[])();
extern u8 D_sc02_039_80182B58;
extern void func_8016EE40();
extern u8 D_sc02_039_80182B64;
extern void func_sc02_039_8017D0D4();
extern void (*D_sc02_039_80182B78[])();
extern void (*D_sc02_039_8019B58C[])();
extern void (*D_sc02_039_8019B5A4[])();
extern void (*D_sc02_039_8019B634[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc02_039_8019B574[])();
extern void func_8012B2CC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern u16 D_801269E8;
extern u16 D_sc02_039_801A0C88;
extern void func_8012A018();
extern void func_8012A094();
extern s16 D_80126B96;
extern u16 D_80126B98;
extern s32 D_sc02_039_8019B618[];
extern s32 func_sc02_039_8017EF5C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C2C4();
extern void func_8012AD50();

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017BEBC);

void func_sc02_039_8017CD9C(u8 *arg0) {
    D_sc02_039_80182B38[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_039_8017CDD8(u8 *arg0) {
    func_sc02_039_8017CFCC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_039_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc02_039_8017CE40(u8 *arg0) {
    func_sc02_039_8017CFF4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_039_8017CE80(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_039_8017CEFC(void) {
    func_800D1EBC();
}

void func_sc02_039_8017CF1C(u8 *arg0) {
    D_sc02_039_80182B4C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_039_8017CF58(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_039_8017CFCC(void) {
    func_8016EE40((s32) &D_sc02_039_80182B58, 0x01000000);
}

void func_sc02_039_8017CFF4(void) {
    func_8016EE40((s32) &D_sc02_039_80182B64, 0x01000000);
}

void func_sc02_039_8017D01C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_039_8017D0D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_039_8017D0D4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc02_039_801A0C88 = D_801269E8;
}

void func_sc02_039_8017D0D4(s32 arg0) {
    D_sc02_039_80182B78[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D110);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D2B8);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D484);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D5F4);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D6AC);

s32 func_sc02_039_8017D764(void) {
    return 0x49;
}

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D76C);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D7D0);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017D930);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017DB14);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017DBD0);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017DC7C);

void func_sc02_039_8017DDB0(u8 *arg0) {
    D_sc02_039_8019B574[AF(arg0, u16, 2)]();
    func_8012B2CC((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017DE00);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017DE84);

void func_sc02_039_8017DFE8(u8 *arg0) {
    D_sc02_039_8019B58C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E024);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E25C);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E2F4);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E428);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E500);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E640);

void func_sc02_039_8017E758(u8 *arg0) {
    D_sc02_039_8019B5A4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E794);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017E910);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017EA20);

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017EC34);

void func_sc02_039_8017EE9C(u8 *arg0) {
    D_sc02_039_8019B634[AF(arg0, u16, 2)]();
}

void func_sc02_039_8017EED8(s32 arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = D_sc02_039_8019B618[AF(arg0, s16, 0x102)];
    if (temp_s1 != 0) {
        func_8012B2CC(arg0, arg1);
        if (func_sc02_039_8017EF5C(arg0, temp_s1) != 0) {
            D_80126B96 = AF(temp_s1, u16, 4);
            D_80126B98 = AF(temp_s1, u16, 6);
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_039/nonmatchings/sc02_039", func_sc02_039_8017EF5C);

void func_sc02_039_8017F050(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFC);
    func_8012AD50(arg0);
}
