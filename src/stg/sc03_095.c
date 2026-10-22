#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_095_8017BE9C(void) {
}

void func_sc03_095_8017BEA4(void) {
}

void func_sc03_095_8017BEAC(void) {
}

void func_sc03_095_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_095_801849C0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_095_8017D04C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_095_8017D074(void);
extern void func_800D1EBC();
extern void (*D_sc03_095_801849D4[])();
extern u8 D_sc03_095_801849E0;
extern void func_8016EE40();
extern u8 D_sc03_095_801849E4;
extern void func_sc03_095_8017D1CC();
extern void (*D_sc03_095_801849E8[])();
extern void (*D_sc03_095_80191B78[])();
extern void (*D_sc03_095_80191B90[])();
extern void (*D_sc03_095_80192F4C[])();
extern void (*D_sc03_095_80193000[])();
extern void (*D_sc03_095_801992E4[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_095_801849F8[];
extern s32 func_8013B7F4();
extern s32 D_sc03_095_8019BD18;
extern s32 func_8012C658();
extern u8 D_sc03_095_80181260;
extern u8 D_sc03_095_80192A60;
extern u8 D_sc03_095_80192A80;
extern s32 func_8012C354();
extern u8 D_sc03_095_80192B44;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();

extern void func_8012AD44();
extern void func_80016224();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8012AD50();
extern s32 D_sc03_095_80191B84[];
extern u8 D_sc03_095_80194F64;
extern void (*D_sc03_095_80194FC4[])();
extern void func_sc03_095_801805C8();
extern s32 func_8012BEE8();
extern s32 func_8012BE54();
extern void func_sc03_095_80180654();
extern void func_sc03_095_8018070C();
extern void func_sc03_095_801806EC();
extern void func_8002A04C();
extern void func_8012E8A8();
extern void func_80016714();
extern void func_8012C098();
extern void func_8012B260();
extern u8 D_sc03_095_80194FF0;


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

extern void func_8012B23C();
extern void func_8001CA1C();
extern SV8 D_sc03_095_80192E1C[];
extern u8 D_sc03_095_80192B80;
extern u8 D_sc03_095_80192C40;
extern u8 D_sc03_095_80192CC8;
extern u8 D_sc03_095_80192D88;
extern u8 D_sc03_095_80192E6C;
extern u8 D_sc03_095_80192E90;
extern u8 D_sc03_095_80192E7C;
extern u8 D_sc03_095_80192E88;

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017CD9C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017CDDC);

void func_sc03_095_8017CE1C(u8 *arg0) {
    D_sc03_095_801849C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_095_8017CE58(u8 *arg0) {
    func_sc03_095_8017D04C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_095_8017CE9C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_095_8017CEC0(u8 *arg0) {
    func_sc03_095_8017D074();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_095_8017CF00(u8 *arg0) {
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

void func_sc03_095_8017CF7C(void) {
    func_800D1EBC();
}

void func_sc03_095_8017CF9C(u8 *arg0) {
    D_sc03_095_801849D4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_095_8017CFD8(u8 *arg0) {
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

void func_sc03_095_8017D04C(void) {
    func_8016EE40((s32) &D_sc03_095_801849E0, 0x01000000);
}

void func_sc03_095_8017D074(void) {
    func_8016EE40((s32) &D_sc03_095_801849E4, 0x01000000);
}

void func_sc03_095_8017D09C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x578;
    D_80126968 = 0x31C;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_095_8017D1CC, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_095_8017D1CC((s32) &D_80126948);
}

void func_sc03_095_8017D134(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_095_8017D1CC, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_095_8017D1CC((s32) &D_80126948);
}

void func_sc03_095_8017D1CC(s32 arg0) {
    D_sc03_095_801849E8[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D208);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D2A8);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D390);

s32 func_sc03_095_8017D528(s32 arg0) {
    return func_8013B7F4(D_sc03_095_801849F8[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D558);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D618);

void func_sc03_095_8017D704(u8 *arg0) {
    s32 temp_v0;

    func_8012CBA4();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 2) = 4;
    }
    func_8012DFD4((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D758);

void func_sc03_095_8017D7B0(u8 *arg0) {
    s32 temp_v0;

    func_8012CBA4();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 2) = 4;
    }
    func_8012DFD4((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D804);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D880);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D8A0);

void func_sc03_095_8017D93C(s32 arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D960);

void func_sc03_095_8017DB10(s32 arg0) {
    AF(arg0, s16, 0xFC) = 1;
    func_8012AD44(arg0, 2);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DB38);

s32 func_sc03_095_8017DCD0(s32 arg0, s32 arg1) {
    D_sc03_095_8019BD18 = 1;
    return 1;
}

void func_sc03_095_8017DCE4(void) {
    D_sc03_095_8019BD18 = 0;
}

void func_sc03_095_8017DCF4(u8 *arg0) {
    D_sc03_095_80191B78[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017DD30(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFE);
    if (temp_v0 != 0) {
        func_80016224(temp_v0 & 0xFF, 4);
        AF(arg0, s16, 0x2A) = -2;
        temp_v0_2 = 0x80 - (AF(arg0, s16, 0xFE) * 3);
        AF(arg0, s16, 0x28) = temp_v0_2;
        AF(arg0, s16, 0x26) = temp_v0_2;
        AF(arg0, s16, 0x24) = temp_v0_2;
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DD98);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DDFC);

void func_sc03_095_8017DE64(u8 *arg0) {
    D_sc03_095_80191B90[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DEA0);

void func_sc03_095_8017DF38(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_095_80191B84[AF(arg0, s16, 0x70)]);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8000);
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0);
}

void func_sc03_095_8017DFC8(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    if (AF(AF(arg0, void *, 0x64), s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017E01C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017E2B4);

void func_sc03_095_8017E43C(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192CC8);
        SetScript(arg0, &D_sc03_095_80192D88);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_095_80192E6C;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_095_80192E90;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_095_80192B44;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192CC8);
        SetScript(arg0, &D_sc03_095_80192D88);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192E7C);
        SetScript(arg0, &D_sc03_095_80192E88);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
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

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017E8E8);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017EA7C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017EE2C);

void func_sc03_095_8017EF18(u8 *arg0) {
    D_sc03_095_80192F4C[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017EF54(u8 *arg0) {
    D_sc03_095_80193000[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017EF90(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_095_8017EFA8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_095_80192A80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_095_80192A60;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_095_80181260);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_095_8017F04C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_095_8017F068(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_095_80192B44) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_095_80192A60;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_095_80181260, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F0EC);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F128);

void func_sc03_095_8017F158(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F1DC);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F2A0);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F380);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F3F0);

void func_sc03_095_8017F4CC(void) {
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F4D4);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F58C);

void func_sc03_095_8017F650(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F6A4);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F720);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F804);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F8D0);

void func_sc03_095_8017F9A8(u8 *arg0) {
    s32 temp_a2;

    D_sc03_095_80194FC4[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_095_801805C8((s32) arg0);
    }
    if (AF(arg0, u16, 0) != 0) {
        temp_a2 = AF(arg0, s32, 0xD4);
        if (temp_a2 != 0) {
            FaceHelper((s32) arg0, (s32) &D_sc03_095_80194F64, temp_a2 + 8);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017FA38);

void func_sc03_095_8017FBC4(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_8012BEE8(arg0, arg1, arg2) != 0) && (func_8012BE54(arg0) <= 0x40000)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017FC14);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017FC90);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017FCE4);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017FEB8);

void func_sc03_095_8018014C(void) {
}

void func_sc03_095_80180154(u8 *arg0) {
    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 1);
    AF(arg0, s32, 0x48) = 0;
}

void func_sc03_095_80180188(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801801B4);

void func_sc03_095_801802A0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801802CC);

void func_sc03_095_80180328(u8 *arg0) {
    void *temp_v1;

    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 0);
    AF(arg0, s16, 2) = 4;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    func_sc03_095_801806EC(AF(arg0, s32, 0xD4));
}

void func_sc03_095_80180388(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if ((AF(arg0, s32, 0xE4) == 0) && !(AF(arg0, u16, 0x70) & 0x800)) {
        func_80016714(AF(arg0, s32, 0xD4), 0x38);
        func_8012C098(arg0);
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    if (!(AF(arg0, u16, 0x70) & 0x800)) {
        AF(arg0, s16, 2) = 6;
        func_8012E8A8(arg0);
        func_80016714(AF(arg0, s32, 0xD4), 0x38);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 0);
    func_8012B260(arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8018049C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180550);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801805C8);

void func_sc03_095_80180654(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = (arg1 * 4) + &D_sc03_095_80194FF0;
        AF(arg0, u16, 0x28) = (u16) AF(temp_v0, u16, 0);
        AF(arg0, u16, 0x2A) = (u16) AF(temp_v0, u16, 2);
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180688);

void func_sc03_095_801806EC(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_095_8018070C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8018072C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801807D0);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180850);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801808F4);

void func_sc03_095_801809FC(u8 *arg0) {
    D_sc03_095_801992E4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180A38);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180C2C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180CDC);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180D8C);

void func_sc03_095_80180E3C(void) {
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180E44);
