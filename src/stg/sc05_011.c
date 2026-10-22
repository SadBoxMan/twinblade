#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_011_8017BE9C(void) {
}

void func_sc05_011_8017BEA4(void) {
}

void func_sc05_011_8017BEAC(void) {
}

void func_sc05_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_011_80181754[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_011_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_011_8018175C[])();
void func_sc05_011_8017CF98(void);
extern u8 D_sc05_011_80181768;
extern void func_8016EE40();
extern u8 D_sc05_011_80181774;
extern void func_sc05_011_8017D010();
extern void (*D_sc05_011_80181778[])();
extern void (*D_sc05_011_801823B0[])();
extern void func_sc05_011_8017D818();

extern u8 D_sc05_011_80181808;
extern u8 D_sc05_011_801818A0;
extern u8 D_sc05_011_801819B0;
extern u8 D_sc05_011_80181A40;
extern u8 D_sc05_011_80181B20;
extern u8 D_sc05_011_80181B48;

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern s32 D_8012695C;
extern s32 D_sc05_011_8019D068;
extern s32 D_sc05_011_8019D154;
extern void func_sc05_011_8017D174();
extern u8 D_sc05_011_80182230;
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc05_011_80181878;
extern u8 D_sc05_011_80181CA0;
extern u8 D_sc05_011_801821D0;
extern u8 D_sc05_011_801821E0;
extern s32 func_800149E0();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B490();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc05_011_80181728;
extern void func_80029514();
extern void func_8002AC00();
extern void func_800D1724();

extern u8 D_sc05_011_80181D80;
extern u8 D_sc05_011_80181EF0;
extern u8 D_sc05_011_80181FB8;


extern s32 func_80012ABC();

INCLUDE_ASM("asm/stg/sc05_011/nonmatchings/sc05_011", func_sc05_011_8017BEBC);

void func_sc05_011_8017CD9C(u8 *arg0) {
    D_sc05_011_80181754[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_011_8017CDD8(u8 *arg0) {
    func_sc05_011_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_011_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_011_8017CE40(u8 *arg0) {
    D_sc05_011_8018175C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_011_8017CE7C(u8 *arg0) {
    func_sc05_011_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_011_8017CEBC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc05_011_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(4);
        return 1;
    }
    return 0;
}

void func_sc05_011_8017CF70(void) {
    func_8016EE40((s32) &D_sc05_011_80181768, 0x01000000);
}

void func_sc05_011_8017CF98(void) {
    func_8016EE40((s32) &D_sc05_011_80181774, 0x01000000);
}

void func_sc05_011_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126958 = 0x4B0;
    func_sc05_011_8017D010((s32) &D_80126948);
}

void func_sc05_011_8017D010(s32 arg0) {
    D_sc05_011_80181778[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_011/nonmatchings/sc05_011", func_sc05_011_8017D04C);

void func_sc05_011_8017D0EC(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x40) = -0x341;
    AF(arg0, s32, 0x44) = -0x612;
    AF(arg0, s32, 0x4C) = -0x26B;
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x50) = -0x171;
}

void func_sc05_011_8017D118(void) {
    switch (D_sc05_011_8019D154) {                  /* irregular */
    case 0:
        D_sc05_011_8019D068 = 0;
        D_sc05_011_8019D154 = 1;
        return;
    case 1:
        func_sc05_011_8017D174();
        return;
    }
}

INCLUDE_ASM("asm/stg/sc05_011/nonmatchings/sc05_011", func_sc05_011_8017D174);

INCLUDE_ASM("asm/stg/sc05_011/nonmatchings/sc05_011", func_sc05_011_8017D25C);

INCLUDE_ASM("asm/stg/sc05_011/nonmatchings/sc05_011", func_sc05_011_8017D4A4);

INCLUDE_ASM("asm/stg/sc05_011/nonmatchings/sc05_011", func_sc05_011_8017D610);

void func_sc05_011_8017D7DC(u8 *arg0) {
    D_sc05_011_801823B0[AF(arg0, u16, 2)]();
}

void func_sc05_011_8017D818(s32 arg0) {
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 & 0x8000) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), temp_v0 & 0xFFF, 4);
    }
    temp_a1 = AF(arg0, s32, 0xF8);
    if ((temp_a1 != 0) && (AF(arg0, s32, 0x90) != temp_a1)) {
        SetScript(arg0, temp_a1);
        AF(arg0, s32, 0xF8) = 0;
    }
}

void func_sc05_011_8017D8A0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7800;
}

void func_sc05_011_8017D8B0(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc05_011_80181808);
}

void func_sc05_011_8017D8DC(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_801818A0);
}

void func_sc05_011_8017D908(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_801819B0);
}

void func_sc05_011_8017D934(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181A40);
}

void func_sc05_011_8017D960(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181B20);
}

void func_sc05_011_8017D98C(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181B48);
}

void func_sc05_011_8017D9B8(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181D80, arg2);
}

void func_sc05_011_8017D9E4(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181CA0, arg2);
}

void func_sc05_011_8017DA10(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181EF0, arg2);
}

void func_sc05_011_8017DA3C(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181FB8, arg2);
}

void func_sc05_011_8017DA68(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    func_80029124(0x125, 0);
    func_80029124(0x126, 0);
    func_80029124(0x127, 0);
    func_80029124(0x128, 0);
    func_80029124(0x129, 0);
    func_80029124(0x12A, 0);
    func_80029124(0x12B, 0);
    func_80029124(0x12C, 0);
    func_80029124(0x130, 0);
    func_80029124(0x130, 0);
    func_80029124(0x131, 0);
    func_80029124(0x133, 0);
    func_80178B18((s32) arg0, (s32) &D_sc05_011_80182230);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_011_8017DB54(s32 arg0) {
    if (!(func_800149E0(0) & 0x840) || (func_800CF8B4() == 0)) {
        if (func_80029178(0x125) & 0xFF) {
            func_8017B490(arg0, (s32) &D_sc05_011_801821D0);
        }
        if (func_80029178(0x126) & 0xFF) {
            func_8017B490(arg0, (s32) &D_sc05_011_801821E0);
        }
        if (func_80029178(0x12B) & 0xFF) {
            func_80029124(0x12B, 0);
            SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181878);
            SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181CA0);
        }
        if (func_801789AC(arg0) != 0) {
            func_80178D18(arg0);
            goto block_10;
        }
    } else {
block_10:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_011_8017DC50(u8 *arg0) {
    func_80029514(0x398);
    func_8002AC00(0x1D);
    func_800D1724((s32) &D_sc05_011_80181728);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_011_8017DCA4(void) {
}

void func_sc05_011_8017DCAC(s32 arg0) {
    func_sc05_011_8017D818(arg0);
}
