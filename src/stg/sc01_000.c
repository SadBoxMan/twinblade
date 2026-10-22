#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_000_8017BE9C(void) {
}

void func_sc01_000_8017BEA4(void) {
}

void func_sc01_000_8017BEAC(void) {
}

void func_sc01_000_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_000_80182668[])();
extern s32 func_800167F0();
extern void (*D_sc01_000_80182670[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_000_8017CFFC(void);
extern void (*D_sc01_000_8018267C[])();
extern u8 D_sc01_000_80182688;
extern void func_8016EE40();
extern u8 D_sc01_000_80182694;
extern void func_sc01_000_8017D1B4();
extern void (*D_sc01_000_801826A8[])();

extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();

extern s32 func_sc01_000_8017EB54();

extern void func_800167B8();
extern void func_80019028();
void func_sc01_000_8017CFD4(void);
extern void func_800CFBCC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern s32 func_sc01_000_8017EB28();

extern s16 D_sc01_000_80182698;
extern s16 D_sc01_000_8018269A;
extern s16 D_sc01_000_8018269C;
extern s16 D_sc01_000_801826A0;
extern s16 D_sc01_000_801826A2;
extern s16 D_sc01_000_801826A4;
extern s16 D_800AF7CE;
extern s32 func_80016224();


INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017BEBC);

void func_sc01_000_8017CD9C(u8 *arg0) {
    D_sc01_000_80182668[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_000_8017CDD8(u8 *arg0) {
    func_80019028();
    func_sc01_000_8017CFD4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_000_8017CE24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_000_8017CE48(u8 *arg0) {
    D_sc01_000_80182670[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_000_8017CE84(u8 *arg0) {
    func_sc01_000_8017CFFC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_000_8017CEC4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_sc01_000_8017EB28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc01_000_8017CF40(void) {
    return func_sc01_000_8017EB54() != 0;
}

void func_sc01_000_8017CF60(u8 *arg0) {
    D_sc01_000_8018267C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_000_8017CF9C(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(0);
        return 1;
    }
    return 0;
}

void func_sc01_000_8017CFD4(void) {
    func_8016EE40((s32) &D_sc01_000_80182688, 0x01000000);
}

void func_sc01_000_8017CFFC(void) {
    func_8016EE40((s32) &D_sc01_000_80182694, 0x01000000);
}

void func_sc01_000_8017D024(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_000_8017D1B4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_000_8017D1B4((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017D0BC);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017D164);

void func_sc01_000_8017D1B4(s32 arg0) {
    D_sc01_000_801826A8[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017D1F0);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017D290);

void func_sc01_000_8017D428(u8 *arg0) {
    AF(arg0, s32, 0x3C) = (s32) D_sc01_000_80182698;
    AF(arg0, s32, 0x40) = (s32) D_sc01_000_8018269A;
    AF(arg0, s32, 0x44) = (s32) D_sc01_000_8018269C;
    AF(arg0, s32, 0x48) = (s32) D_sc01_000_801826A0;
    AF(arg0, s32, 0x4C) = (s32) D_sc01_000_801826A2;
    AF(arg0, s32, 0x50) = (s32) D_sc01_000_801826A4;
}

s32 func_sc01_000_8017D488(void) {
    return 0x80;
}

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017D490);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017DD04);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017E1A8);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017E210);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017E3A0);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017E4A0);

INCLUDE_ASM("asm/stg/sc01_000/nonmatchings/sc01_000", func_sc01_000_8017E594);

s32 func_sc01_000_8017EB28(s32 arg0) {
    D_800AF7CE = 0;
    return func_80016224(0, 0);
}

s32 func_sc01_000_8017EB54(void) {
    u16 temp_v0;

    temp_v0 = D_800AF7CE + 4;
    D_800AF7CE = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x100U) {
        D_800AF7CE = 0xFF;
    }
    func_80016224((s32) (u8) D_800AF7CE, 0);
    return (u16) D_800AF7CE >= 0xFFU;
}
