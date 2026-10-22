#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_012_8017BE9C(void) {
}

void func_sc04_012_8017BEA4(void) {
}

void func_sc04_012_8017BEAC(void) {
}

void func_sc04_012_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_012_80182064[])();
extern s32 func_800167F0();
extern void (*D_sc04_012_8018206C[])();
extern void func_800D1EBC();
extern void (*D_sc04_012_80182084[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_sc04_012_80182090;
extern void func_8016EE40();
extern u8 D_sc04_012_8018209C;
extern void func_sc04_012_8017D154();
extern void (*D_sc04_012_801820A4[])();
extern void (*D_sc04_012_80182280[])();
extern void (*D_sc04_012_801822B0[])();
extern void (*D_sc04_012_801822B8[])();
extern void (*D_sc04_012_801822C4[])();
extern void (*D_sc04_012_80182300[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_012_801930E4;
extern u8 D_sc04_012_80182010;
extern void func_800D1724();
extern u8 D_sc04_012_80181FEC;
extern u8 D_sc04_012_80182034;
extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_012_801822F4;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();

extern s32 func_80029178();
extern void func_8013CB84();

extern s32 D_8011F9C4;
extern void func_80029124();
void func_sc04_012_8017D06C(void);
extern void func_800167B8();
extern void func_8002931C();
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
extern s16 D_80126B66;

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017BEBC);

void func_sc04_012_8017CD9C(u8 *arg0) {
    D_sc04_012_80182064[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_012_8017CDD8(u8 *arg0) {
    D_8011F9C4 = 1;
    func_80029124(0x117, 1);
    func_8002D4C8(7, 0);
    func_sc04_012_8017D06C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_012_8017CE44(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_012_8017CE68(u8 *arg0) {
    D_sc04_012_8018206C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_012_8017CEA4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_012_8017CEC0(u8 *arg0) {
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

void func_sc04_012_8017CF3C(void) {
    func_800D1EBC();
}

s32 func_sc04_012_8017CF5C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        if (!(func_80029178(0x117) & 0xFF)) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc04_012_8017CFEC(u8 *arg0) {
    D_sc04_012_80182084[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_012_8017D028(u8 *arg0) {
    func_8002931C(0x030C0000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc04_012_8017D06C(void) {
    func_8016EE40((s32) &D_sc04_012_80182090, 0x01000000);
}

void func_sc04_012_8017D094(void) {
    func_8016EE40((s32) &D_sc04_012_8018209C, 0x01000000);
}

void func_sc04_012_8017D0BC(void) {
    D_80126954 = 0x21C;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_012_8017D154, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_012_8017D154((s32) &D_80126948);
}

void func_sc04_012_8017D154(s32 arg0) {
    D_sc04_012_801820A4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D190);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D248);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D3E0);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D4CC);

void func_sc04_012_8017D698(u8 *arg0) {
    D_sc04_012_80182280[AF(arg0, u16, 2)]();
}

s32 func_sc04_012_8017D6D4(void) {
    return 2 - D_sc04_012_801930E4;
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D6E8);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D720);

void func_sc04_012_8017D770(void) {
    func_800D1724((s32) &D_sc04_012_80182010);
}

void func_sc04_012_8017D798(void) {
    func_800D1724((s32) &D_sc04_012_80181FEC);
}

void func_sc04_012_8017D7C0(void) {
    func_800D1724((s32) &D_sc04_012_80182034);
}

void func_sc04_012_8017D7E8(void) {
}

void func_sc04_012_8017D7F0(u8 *arg0) {
    s16 temp_v0;

    if (D_80126B66 >= 0x6D0) {
        if (AF(arg0, u16, 0x34) == 0) {
            func_8002D4C8(0xB40, 0);
            AF(arg0, u16, 0x34) = 1U;
        }
        AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) -((s32) (rsin((s32) AF(arg0, s16, 0xFC)) * 0x300) >> 0xC);
        temp_v0 = (u16) AF(arg0, s16, 0xFC) + 0x10;
        AF(arg0, s16, 0xFC) = temp_v0;
        if (temp_v0 >= 0x400) {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc04_012_8017D894(u8 *arg0) {
    s16 temp_v0;

    if (D_80126B66 >= 0x710) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (((s32) (rsin((s32) AF(arg0, s16, 0xFC)) << 9) >> 0xC) + 0x100);
        temp_v0 = (u16) AF(arg0, s16, 0xFC) + 0x10;
        AF(arg0, s16, 0xFC) = temp_v0;
        if (temp_v0 >= 0x400) {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc04_012_8017D910(void) {
    func_8013CB84();
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D930);

void func_sc04_012_8017D960(u8 *arg0) {
    D_sc04_012_801822B0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017D99C);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017DAE4);

void func_sc04_012_8017DBB0(u8 *arg0) {
    D_sc04_012_801822B8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017DBEC);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017DD84);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017DE74);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017DED4);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017E060);

void func_sc04_012_8017E090(u8 *arg0) {
    D_sc04_012_801822C4[AF(arg0, u16, 2)]();
}

void func_sc04_012_8017E0CC(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017E100);

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017E250);

void func_sc04_012_8017E33C(u8 *arg0) {
    D_sc04_012_80182300[AF(arg0, u16, 2)]();
}

void func_sc04_012_8017E378(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_012_801822F4, 0x270, 0x100);
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

void func_sc04_012_8017E45C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_012/nonmatchings/sc04_012", func_sc04_012_8017E4C8);
