#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_027_8017BE9C(void) {
}

void func_sc06_027_8017BEA4(void) {
}

void func_sc06_027_8017BEAC(void) {
}

void func_sc06_027_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_027_80181A10[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_027_8017CFA8(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_027_80181A18[])();
void func_sc06_027_8017D008(void);
extern u8 D_sc06_027_80181A24;
extern void func_8016EE40();
extern u8 D_sc06_027_80181A28;
extern void func_sc06_027_8017D0C8();
extern void (*D_sc06_027_80181A30[])();
extern void (*D_sc06_027_80181A78[])();
extern void (*D_sc06_027_80181A80[])();
extern void (*D_sc06_027_80181A88[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void func_8002931C();

extern void func_8012C588();
extern void func_80171928();
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
extern u8 D_sc06_027_80181AB0;
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc06_027_80199B1C;
extern s32 D_sc06_027_8019D2B8;
extern void func_sc06_027_8017D3A0();

extern s8 D_80078EC0;
extern u8 D_80126B58;
extern s32 func_800D1EBC();
extern void func_80165A20();
extern void func_800CF804();
extern u8 D_sc06_027_801954A4;
extern u8 D_sc06_027_80199A94;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc06_027_801989E8;
extern u8 D_sc06_027_8019A074;

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017BEBC);

void func_sc06_027_8017CD9C(void) {
    func_8002931C(0x04740000);
}

void func_sc06_027_8017CDBC(u8 *arg0) {
    D_sc06_027_80181A10[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_027_8017CDF8(u8 *arg0) {
    func_sc06_027_8017CFA8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_027_8017CE3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_027_8017CE60(u8 *arg0) {
    D_sc06_027_80181A18[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_027_8017CE9C(u8 *arg0) {
    func_sc06_027_8017D008();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_027_8017CEDC(u8 *arg0) {
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

s32 func_sc06_027_8017CF58(void) {
    if (func_800D1EBC() != 0) {
        func_80165A20((s32) &D_80126B58);
        D_80078EC0 = 6;
        func_800CF804();
        return 1;
    }
    return 0;
}

void func_sc06_027_8017CFA8(void) {
    func_8016EE40((s32) &D_sc06_027_80181A24, 0x01000000);
}

void func_sc06_027_8017CFD0(s32 arg0) {
    func_8012C588(0x3BA, 0);
    func_80171928(arg0);
}

void func_sc06_027_8017D008(void) {
    func_8016EE40((s32) &D_sc06_027_80181A28, 0x01000000);
}

void func_sc06_027_8017D030(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_027_8017D0C8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_027_8017D0C8((s32) &D_80126948);
}

void func_sc06_027_8017D0C8(s32 arg0) {
    D_sc06_027_80181A30[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D104);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D1C0);

s32 func_sc06_027_8017D398(void) {
    return 0x81;
}

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D3A0);

void func_sc06_027_8017D508(u8 *arg0) {
    D_sc06_027_80181A78[AF(arg0, u16, 2)]();
}

void func_sc06_027_8017D544(u8 *arg0) {
    D_sc06_027_80181A80[AF(arg0, u16, 2)]();
}

void func_sc06_027_8017D580(u8 *arg0) {
    D_sc06_027_80181A88[AF(arg0, u16, 2)]();
}

void func_sc06_027_8017D5BC(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 2);
    switch (temp_v1) {                              /* irregular */
    case 0:
        AF(arg0, s32, 0x1C) = 5;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        /* fallthrough */
    case 1:
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            AF(arg0, s32, 0x1C) = 0x7F;
            func_80178B18((s32) arg0, (s32) &D_sc06_027_80181AB0);
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
        /* fallthrough */
    case 2:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_8012C218((s32) arg0);
        }
        return;
    }
}

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D688);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D708);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D824);

void func_sc06_027_8017D8B8(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_027_801954A4);
    SetScript((s32) arg0, (s32) &D_sc06_027_80199A94);
    AF(arg0, s16, 2) = 1;
    D_sc06_027_8019D2B8 = 0;
}

void func_sc06_027_8017D92C(s32 arg0) {
    if (D_sc06_027_8019D2B8 == 1) {
        D_sc06_027_8019D2B8 = 0;
        SetScript(arg0, (s32) &D_sc06_027_80199B1C);
    }
}

void func_sc06_027_8017D96C(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_027_801989E8);
    SetScript((s32) arg0, (s32) &D_sc06_027_8019A074);
    AF(arg0, s16, 2) = 1;
}

void func_sc06_027_8017D9D8(void) {
}

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017D9E0);

s32 func_sc06_027_8017DA3C(s32 arg0) {
    s32 temp_v0;

    func_sc06_027_8017D3A0(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 3;
    AF(arg0, s32, 0x1C) = temp_v0;
    return temp_v0 < 1;
}

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017DA78);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017DADC);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017DC3C);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017DE20);

INCLUDE_ASM("asm/stg/sc06_027/nonmatchings/sc06_027", func_sc06_027_8017DEDC);
