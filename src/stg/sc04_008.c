#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_008_8017BE9C(void) {
}

void func_sc04_008_8017BEA4(void) {
}

void func_sc04_008_8017BEAC(void) {
}

void func_sc04_008_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_008_80182500[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_008_8017D03C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc04_008_8017D064(void);
extern void func_800D1EBC();
extern void (*D_sc04_008_80182514[])();
extern u8 D_sc04_008_80182520;
extern void func_8016EE40();
extern u8 D_sc04_008_80182524;
extern void func_sc04_008_8017D12C();
extern void (*D_sc04_008_80182530[])();
extern void (*D_sc04_008_8018255C[])();
extern void (*D_sc04_008_80182564[])();
extern void (*D_sc04_008_80182570[])();
extern void (*D_sc04_008_801825AC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_008_80182538[];
extern s32 func_8013B7F4();

extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_008_801825A0;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();
extern void func_8012C218();
extern void (*D_sc04_008_8018EE98[])();
extern s32 func_80143C74();

extern void func_8013CB84();

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

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017BEBC);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017CD9C);

void func_sc04_008_8017CE0C(u8 *arg0) {
    D_sc04_008_80182500[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_008_8017CE48(u8 *arg0) {
    func_sc04_008_8017D03C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_008_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_008_8017CEB0(u8 *arg0) {
    func_sc04_008_8017D064();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_008_8017CEF0(u8 *arg0) {
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

void func_sc04_008_8017CF6C(void) {
    func_800D1EBC();
}

void func_sc04_008_8017CF8C(u8 *arg0) {
    D_sc04_008_80182514[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_008_8017CFC8(u8 *arg0) {
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

void func_sc04_008_8017D03C(void) {
    func_8016EE40((s32) &D_sc04_008_80182520, 0x01000000);
}

void func_sc04_008_8017D064(void) {
    func_8016EE40((s32) &D_sc04_008_80182524, 0x01000000);
}

void func_sc04_008_8017D08C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0x155;
    D_8012696A = 0x600;
    D_80126978 = -0x60;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = 0x30;
    func_8012A018((s32) func_sc04_008_8017D12C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_008_8017D12C((s32) &D_80126948);
}

void func_sc04_008_8017D12C(s32 arg0) {
    D_sc04_008_80182530[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017D168);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017D210);

s32 func_sc04_008_8017D3A8(s32 arg0) {
    return func_8013B7F4(D_sc04_008_80182538[arg0], 0);
}

void func_sc04_008_8017D3D8(void) {
    func_8013CB84();
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017D3F8);

s32 func_sc04_008_8017D738(void) {
    return 0x55;
}

void func_sc04_008_8017D740(u8 *arg0) {
    D_sc04_008_8018255C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017D77C);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017D8C4);

void func_sc04_008_8017D990(u8 *arg0) {
    D_sc04_008_80182564[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017D9CC);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017DB64);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017DC54);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017DCB4);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017DE40);

void func_sc04_008_8017DE70(u8 *arg0) {
    D_sc04_008_80182570[AF(arg0, u16, 2)]();
}

void func_sc04_008_8017DEAC(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017DEE0);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017E030);

void func_sc04_008_8017E11C(u8 *arg0) {
    D_sc04_008_801825AC[AF(arg0, u16, 2)]();
}

void func_sc04_008_8017E158(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_008_801825A0, 0x270, 0x100);
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

void func_sc04_008_8017E23C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017E2A8);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017E394);

void func_sc04_008_8017E628(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    D_sc04_008_8018EE98[AF(arg0, u16, 2)]();
    if (AF(arg0, s16, 0x102) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x18) = (u16) (AF(temp_v0, u16, 0x18) - 0x80);
        temp_v1 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1, u16, 0x18) < 0x100) {
            func_8012C218((s32) arg0);
            return;
        }
        AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) - 0x80);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1C) = (u16) (AF(temp_v1_2, u16, 0x1C) - 0x80);
        temp_v0_2 = (u16) AF(arg0, s16, 0x102) - 1;
        AF(arg0, s16, 0x102) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            AF(arg0, s16, 0x102) = 3;
            temp_v0_3 = func_80143C74((s32) arg0, 0);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, s16, 0x16) = -8;
                AF(temp_v0_3, u16, 0xA) = (u16) (AF(temp_v0_3, u16, 0xA) - 0x20);
                AF(temp_v0_3, s16, 0x12) = (s16) ((rand() & 7) - 4);
                AF(temp_v0_3, s16, 0x1A) = (s16) ((rand() & 7) - 4);
            }
        }
    }
}

void func_sc04_008_8017E754(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x102) = 3;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
}

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017E780);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017E8B8);

INCLUDE_ASM("asm/stg/sc04_008/nonmatchings/sc04_008", func_sc04_008_8017E9D8);
