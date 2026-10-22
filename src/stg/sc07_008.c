#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_008_8017BE9C(void) {
}

void func_sc07_008_8017BEA4(void) {
}

void func_sc07_008_8017BEAC(void) {
}

void func_sc07_008_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_008_80180D3C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc07_008_8017CF58(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_008_80180D44[])();
void func_sc07_008_8017CF80(void);
extern void func_800D1EBC();
extern u8 D_sc07_008_80180D50;
extern void func_8016EE40();
extern u8 D_sc07_008_80180D5C;
extern void func_sc07_008_8017D040();
extern void (*D_sc07_008_80180D70[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
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

INCLUDE_ASM("asm/stg/sc07_008/nonmatchings/sc07_008", func_sc07_008_8017BEBC);

void func_sc07_008_8017CD9C(u8 *arg0) {
    D_sc07_008_80180D3C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_008_8017CDD8(u8 *arg0) {
    func_sc07_008_8017CF58();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_008_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_008_8017CE40(u8 *arg0) {
    D_sc07_008_80180D44[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_008_8017CE7C(u8 *arg0) {
    func_sc07_008_8017CF80();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_008_8017CEBC(u8 *arg0) {
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

void func_sc07_008_8017CF38(void) {
    func_800D1EBC();
}

void func_sc07_008_8017CF58(void) {
    func_8016EE40((s32) &D_sc07_008_80180D50, 0x01000000);
}

void func_sc07_008_8017CF80(void) {
    func_8016EE40((s32) &D_sc07_008_80180D5C, 0x01000000);
}

void func_sc07_008_8017CFA8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_008_8017D040, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_008_8017D040((s32) &D_80126948);
}

void func_sc07_008_8017D040(s32 arg0) {
    D_sc07_008_80180D70[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc07_008/nonmatchings/sc07_008", func_sc07_008_8017D07C);

INCLUDE_ASM("asm/stg/sc07_008/nonmatchings/sc07_008", func_sc07_008_8017D11C);
