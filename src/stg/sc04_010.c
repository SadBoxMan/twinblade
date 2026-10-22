#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_010_8017BE9C(void) {
}

void func_sc04_010_8017BEA4(void) {
}

void func_sc04_010_8017BEAC(void) {
}

void func_sc04_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_010_80181BD8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_010_8017D03C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_010_80181BE0[])();
void func_sc04_010_8017D08C(void);
extern void func_800D1EBC();
extern u8 D_sc04_010_80181C68;
extern void func_8016EE40();
extern u8 D_sc04_010_80181C78;
extern void func_sc04_010_8017D1D4();
extern void (*D_sc04_010_80181C8C[])();
extern void (*D_sc04_010_80181C94[])();
extern void (*D_sc04_010_80181D60[])();
void func_sc04_010_8017D6C4(s32 arg0);
extern void (*D_sc04_010_80181D6C[])();
extern void func_sc04_010_8017D6CC();
extern void (*D_sc04_010_80181D74[])();
extern void (*D_sc04_010_80181DB0[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_010_80181C90[];
extern s32 func_8013B7F4();

extern s32 func_80178970();
extern void func_80178D18();
extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_010_80181DA4;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();

extern void func_8013CB84();

extern s32 func_8013373C();

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
extern s32 D_80126950;
extern u8 D_sc04_010_8018B798;
extern void func_80174E9C();
extern void func_80175014();
extern void func_80129FF4();
extern u8 D_sc04_010_80181D00;
extern void func_80029124();
extern void func_80016714();
extern void func_80178B18();
extern void func_8012AD44();
extern void func_8012C588();
extern u8 D_sc04_010_8018CBA8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc04_010_8018C568;

extern u8 D_sc04_010_80181C84;

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017BEBC);

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017CD9C);

void func_sc04_010_8017CE0C(u8 *arg0) {
    D_sc04_010_80181BD8[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_010_8017CE48(u8 *arg0) {
    func_sc04_010_8017D03C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_010_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_010_8017CEB0(u8 *arg0) {
    D_sc04_010_80181BE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_010_8017CEEC(u8 *arg0) {
    func_sc04_010_8017D08C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_010_8017CF2C(u8 *arg0) {
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

void func_sc04_010_8017CFA8(void) {
    func_800D1EBC();
}

s32 func_sc04_010_8017CFC8(u8 *arg0) {
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

void func_sc04_010_8017D03C(void) {
    func_8016EE40((s32) &D_sc04_010_80181C68, 0x01000000);
}

void func_sc04_010_8017D064(void) {
    func_8016EE40((s32) &D_sc04_010_80181C78, 0x01000000);
}

void func_sc04_010_8017D08C(void) {
    func_8016EE40((s32) &D_sc04_010_80181C84, 0x01000000);
    func_8002D4C8(0x1D, 0);
}

void func_sc04_010_8017D0C0(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x352;
    D_80126968 = 0x18E;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0xE4;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_010_8017D1D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_010_8017D1D4((s32) &D_80126948);
}

void func_sc04_010_8017D15C(void) {
    D_80126950 = 0x1A5;
    func_80174E9C((s32) &D_sc04_010_8018B798);
}

void func_sc04_010_8017D190(void) {
    D_80126950 = 0x1A5;
    func_80175014((s32) &D_80126948, (s32) &D_sc04_010_8018B798, 0);
    func_80129FF4();
}

void func_sc04_010_8017D1D4(s32 arg0) {
    D_sc04_010_80181C8C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017D210);

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017D2D4);

s32 func_sc04_010_8017D478(s32 arg0) {
    return func_8013B7F4(D_sc04_010_80181C90[arg0], 0);
}

s32 func_sc04_010_8017D4A8(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

void func_sc04_010_8017D4C8(void) {
    func_8013CB84();
}

void func_sc04_010_8017D4E8(u8 *arg0) {
    D_sc04_010_80181C94[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017D524(u8 *arg0) {
    D_sc04_010_80181D60[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017D560(u8 *arg0) {
    s32 temp_a0;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_80029124(0xBC, 1);
    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_80178B18((s32) arg0, (s32) &D_sc04_010_80181D00);
    func_8012AD44((s32) arg0, 2);
    func_8002D4C8(0xAAF, 0);
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017D5DC);

void func_sc04_010_8017D6C4(s32 arg0) {
    AF(arg0, s16, 0xFE) = 0;
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017D6CC);

void func_sc04_010_8017D7A0(s32 arg0) {
    func_8012C588(0x2D6, arg0);
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017D7C4);

void func_sc04_010_8017D808(u8 *arg0) {
    D_sc04_010_80181D6C[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017D844(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_010_8018CBA8);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 0xA) = -0x880;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x1330;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x70000000);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0;
    func_8002D4C8(0x90F, 0);
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017D904);

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017DA58);

void func_sc04_010_8017DB20(s32 arg0) {
    func_sc04_010_8017D6CC(arg0);
}

void func_sc04_010_8017DB40(u8 *arg0, s32 arg1) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0, arg1) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    }
}

void func_sc04_010_8017DB9C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_010_8018C568);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x40);
    AF(arg0, s16, 0xA) = -0x7E0;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x129C;
    func_8012AD50((s32) arg0);
}

void func_sc04_010_8017DC1C(void) {
}

s32 func_sc04_010_8017DC24(void) {
    return 0x5C;
}

void func_sc04_010_8017DC2C(u8 *arg0) {
    D_sc04_010_80181D74[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017DC68(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017DC9C);

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017DDEC);

void func_sc04_010_8017DED8(u8 *arg0) {
    D_sc04_010_80181DB0[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017DF14(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_010_80181DA4, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    func_80146E90((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_010_8017DFF8(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_010/nonmatchings/sc04_010", func_sc04_010_8017E064);
