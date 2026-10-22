#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_035_8017BE9C(void) {
}

void func_sc02_035_8017BEA4(void) {
}

void func_sc02_035_8017BEAC(void) {
}

void func_sc02_035_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_035_80187F0C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc02_035_8017D00C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc02_035_8017D034(void);
extern void func_800D1EBC();
extern void (*D_sc02_035_80187F20[])();
extern u8 D_sc02_035_80187F2C;
extern void func_8016EE40();
extern u8 D_sc02_035_80187F30;
extern void func_sc02_035_8017D0F4();
extern void (*D_sc02_035_80187F34[])();
extern void (*D_sc02_035_80194854[])();
extern void (*D_sc02_035_80196DBC[])();
extern void (*D_sc02_035_80196E70[])();
extern void (*D_sc02_035_80198E30[])();
extern void (*D_sc02_035_80198EC4[])();
extern void (*D_sc02_035_801BBE9C[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc02_035_80187F3C[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc02_035_801847FC;
extern u8 D_sc02_035_801968D0;
extern u8 D_sc02_035_801968F0;
extern s32 func_8012C354();
extern u8 D_sc02_035_801969B4;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc02_035_8019C1AC;
extern void func_8012B14C();
extern u8 D_sc02_035_801A86A8;
extern void func_8012C588();
extern u8 D_sc02_035_8019C1C8;
extern u8 D_sc02_035_801A8490;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc02_035_8019C460;
extern u8 D_sc02_035_8019C468;
extern u8 D_sc02_035_801A8F50;
extern u8 D_sc02_035_801A96D0;
extern s32 func_8012DEB8();
extern u8 D_sc02_035_801A9290;
extern u8 D_sc02_035_801A9B40;
extern void func_8012C218();

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
extern void (*D_sc02_035_80198DE0[])();
extern void func_8012C0EC();
extern void func_8012B030();
extern s32 func_8012BEE8();
extern u8 D_801202A0;
extern u8 D_800D3918;
extern s32 func_sc02_035_801809E4();
extern void func_801292C8();
extern void func_sc02_035_80180C10();
extern void (*D_sc02_035_801B977C[])();
extern void func_sc02_035_80183F2C();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc02_035_801BBC6C;
extern u8 D_sc02_035_801B979C;
extern s32 func_8012D5E4();
extern s32 func_sc02_035_80183F14();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern void (*D_sc02_035_801949F0[])();
extern u8 D_sc02_035_801947F0;
extern void func_8001D0E8();

extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc02_035_80196C8C[];
extern u8 D_sc02_035_801969F0;
extern u8 D_sc02_035_80196AB0;
extern u8 D_sc02_035_80196B38;
extern u8 D_sc02_035_80196BF8;
extern u8 D_sc02_035_80196CDC;
extern u8 D_sc02_035_80196D00;
extern u8 D_sc02_035_80196CEC;
extern u8 D_sc02_035_80196CF8;
extern void func_8012B2CC();
extern void func_8012C098();

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017BEBC);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017CD9C);

void func_sc02_035_8017CDDC(u8 *arg0) {
    D_sc02_035_80187F0C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_035_8017CE18(u8 *arg0) {
    func_sc02_035_8017D00C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_035_8017CE5C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc02_035_8017CE80(u8 *arg0) {
    func_sc02_035_8017D034();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_035_8017CEC0(u8 *arg0) {
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

void func_sc02_035_8017CF3C(void) {
    func_800D1EBC();
}

void func_sc02_035_8017CF5C(u8 *arg0) {
    D_sc02_035_80187F20[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_035_8017CF98(u8 *arg0) {
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

void func_sc02_035_8017D00C(void) {
    func_8016EE40((s32) &D_sc02_035_80187F2C, 0x01000000);
}

void func_sc02_035_8017D034(void) {
    func_8016EE40((s32) &D_sc02_035_80187F30, 0x01000000);
}

void func_sc02_035_8017D05C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_035_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_035_8017D0F4((s32) &D_80126948);
}

void func_sc02_035_8017D0F4(s32 arg0) {
    D_sc02_035_80187F34[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D130);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D1D0);

s32 func_sc02_035_8017D368(s32 arg0) {
    return func_8013B7F4(D_sc02_035_80187F3C[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D398);

void func_sc02_035_8017D3B8(u8 *arg0) {
    D_sc02_035_80194854[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D3F4);

void func_sc02_035_8017D548(u8 *arg0) {
    D_sc02_035_801949F0[AF(arg0, u16, 2)]();
    func_8012DFD4((s32) arg0);
}

void func_sc02_035_8017D598(s32 arg0) {
    u16 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc02_035_801947F0) != 0) {
        SetScript(arg0, (s32) &D_sc02_035_801847FC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 8;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x104, 0xDC);
        temp_v1 = AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFC) = 0x60U;
        AF(arg0, u16, 0xFE) = temp_v1;
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D610);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D710);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D7A4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D85C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017D914);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017DBAC);

void func_sc02_035_8017DD34(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_801969F0);
        SetScript(arg0, &D_sc02_035_80196AB0);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_80196B38);
        SetScript(arg0, &D_sc02_035_80196BF8);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc02_035_80196CDC;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_80196D00;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc02_035_801969B4;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_801969F0);
        SetScript(arg0, &D_sc02_035_80196AB0);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_80196B38);
        SetScript(arg0, &D_sc02_035_80196BF8);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_80196CEC);
        SetScript(arg0, &D_sc02_035_80196CF8);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_801969F0);
        SetScript(arg0, &D_sc02_035_80196AB0);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017E1E0);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017E374);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017E724);

void func_sc02_035_8017E810(u8 *arg0) {
    D_sc02_035_80196DBC[AF(arg0, u16, 2)]();
}

void func_sc02_035_8017E84C(u8 *arg0) {
    D_sc02_035_80196E70[AF(arg0, u16, 2)]();
}

void func_sc02_035_8017E888(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc02_035_8017E8A0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_035_801968F0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_035_801968D0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc02_035_801847FC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc02_035_8017E944(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc02_035_8017E960(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc02_035_801969B4) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_035_801968D0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc02_035_801847FC, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017E9E4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EA20);

void func_sc02_035_8017EA50(s32 arg0) {
    void *temp_a0;

    if (func_8012CBCC(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            func_8012E688(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EAD4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EB98);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EC78);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017ECE8);

void func_sc02_035_8017EDC4(void) {
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EDCC);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EE84);

void func_sc02_035_8017EF48(s32 arg0) {
    s32 temp_v0;

    func_8012CBA4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    func_8012DFD4(arg0);
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017EF9C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017F018);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017F0FC);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017F1C8);

void func_sc02_035_8017F2A0(u8 *arg0) {
    void *temp_v0;

    D_sc02_035_80198DE0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (!(AF(arg0, u16, 0x70) & 0x20)) {
            func_8012C0EC((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017F32C);

void func_sc02_035_8017F498(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s32, 0xE8) = 0x40;
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017F4DC);

void func_sc02_035_8017F874(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 4;
    func_8012B030((s32) arg0);
}

void func_sc02_035_8017F8A0(u8 *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin(AF(arg0, s32, 0x1C) << 6);
    AF(temp_s0, s16, 0x1C) = temp_v0;
    AF(temp_s0, s16, 0x1A) = temp_v0;
    AF(temp_s0, s16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 >= 0x11) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    }
}

void func_sc02_035_8017F918(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 6;
        AF(arg0, s16, 0x34) = 0;
        AF(temp_v1, s16, 0x1C) = 0x400;
        AF(temp_v1, s16, 0x18) = 0x400;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x3000;
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017F96C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017FB1C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017FBE8);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017FE4C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8017FE60);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801800C0);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8018016C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8018023C);

s32 func_sc02_035_801803A4(void) {
    s32 *var_v1;
    s32 var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &D_801202A0;
    do {
        if ((AF(var_v1, u16, 0) == 0x17F) && !(AF(var_v1, u16, 0x70) & 0xF)) {
            var_a1 += 1;
        }
        var_a0 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 0x10C);
    } while (var_a0 < 0x60);
    return var_a1 < 0xB;
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801803F8);

void func_sc02_035_801805FC(u8 *arg0) {
    D_sc02_035_80198E30[AF(arg0, u16, 2)]();
}

void func_sc02_035_80180638(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = func_sc02_035_801809E4(arg0, (s32) &D_800D3918, 0x11);
    if (!(temp_v0 & 0xFF)) {
        if (temp_v0 & 0x2000) {
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, s16, 2) = 4;
                return;
            }
            goto block_11;
        }
        if (AF(arg0, s32, 0x1C) < 0x23) {
            AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x62;
            }
        }
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            goto block_8;
        }
    } else {
block_8:
        temp_v1 = AF(arg0, void *, 0x2C);
        if ((temp_v1 != NULL) && (temp_v1 != (void *)-1)) {
            AF(temp_v1, s32, 0x30) = (s32) (AF(temp_v1, s32, 0x30) - 1);
        }
block_11:
        func_801292C8(arg0);
    }
}

void func_sc02_035_8018071C(s32 arg0) {
    func_sc02_035_80180C10(arg0);
    if (AF(arg0, s32, 0x30) == 0) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0;
        return;
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180770);

void func_sc02_035_8018087C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_035_801808B0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        if (AF(arg0, s32, 0x2C) == -1) {
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

void func_sc02_035_801808F0(s32 arg0) {
    func_sc02_035_80180C10(arg0);
    if (*AF(arg0, u16 *, 0x2C) == 0) {
        func_801292C8(arg0);
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180948);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801809E4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180B38);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180C10);

void func_sc02_035_80180C70(u8 *arg0) {
    D_sc02_035_80198EC4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180CAC);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180CD4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180D54);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80180ED8);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801810FC);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801814B0);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801816F0);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80181958);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80181B00);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80181D4C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80181E98);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80181F50);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801820A4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182150);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182200);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801822E8);

void func_sc02_035_80182404(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        if (AF(arg0, s16, 0x70) == 4) {
            temp_v0 = func_8012C658(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0x88) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, u16, 0x8C) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0x8A) - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) AF(arg0, u16, 0x8A);
                func_8012B2CC(temp_v0);
            }
        }
        if (func_80153BD8((s32) arg0) != 0) {
            func_80153BF0((s32) arg0);
        }
        if (AF(arg0, s32, 0x78) != 0) {
            func_8002A04C((s32) arg0);
        }
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801824E4);

void func_sc02_035_801825BC(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc02_035_80182624(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182660);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182704);

void func_sc02_035_801827C4(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc02_035_8019C1AC);
}

void func_sc02_035_801827F8(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc02_035_80182854(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc02_035_8018288C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_035_801A86A8, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801828E8);

void func_sc02_035_801829C0(u8 *arg0) {
    s32 var_a0;

    if (AF(arg0, s32, 0x94) == 0x17) {
        if (AF(arg0, s16, 0x70) == 2) {
            var_a0 = 0x1A7;
        } else {
            func_8002D4C8(0xCB3, 0);
            var_a0 = 0x19F;
        }
        func_8012C588(var_a0, (s32) arg0);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_035_801A86A8);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182A54);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182B20);

void func_sc02_035_80182BF8(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc02_035_801A8490);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc02_035_8019C1C8 | 0x40000000 | 0x20000000);
    }
}

void func_sc02_035_80182C94(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_035_80182CEC(void) {
}

void func_sc02_035_80182CF4(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc02_035_8019C460, (s32) &D_sc02_035_8019C468) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc02_035_801A8F50);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_035_801A96D0);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc02_035_80182D94(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_035_801A96D0);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc02_035_80182DE8(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc02_035_8019C460, (s32) &D_sc02_035_8019C468) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc02_035_801A9290);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_035_801A9B40);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182E7C);

void func_sc02_035_80182EC4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc02_035_80182EEC(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80182F38);

void func_sc02_035_80183024(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_8012CBCC(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        func_8002D4C8(0xCB4, 0);
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801830A8);

void func_sc02_035_801831B4(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_035_801831EC(u8 *arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x200);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x200);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) < 0x401) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc02_035_80183258(u8 *arg0) {
    s32 temp_v0;

    D_sc02_035_801B977C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc02_035_80183F2C((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801832D4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80183394);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801834BC);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_8018362C);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801837C0);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80183A14);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80183B20);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80183CBC);

void func_sc02_035_80183D78(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 7;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x10) = 0;
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc02_035_80183E04(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc02_035_801BBC6C);
}

s32 func_sc02_035_80183E3C(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc02_035_801B979C, (s32) (&D_sc02_035_801B979C + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80183E68);

s32 func_sc02_035_80183F14(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc02_035_80183F2C(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc02_035_80183F98(u8 *arg0) {
    D_sc02_035_801BBE9C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80183FD4);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801841C8);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80184278);

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_80184328);

void func_sc02_035_801843D8(void) {
}

INCLUDE_ASM("asm/stg/sc02_035/nonmatchings/sc02_035", func_sc02_035_801843E0);
