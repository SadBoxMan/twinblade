#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_096_8017BE9C(void) {
}

void func_sc03_096_8017BEA4(void) {
}

void func_sc03_096_8017BEAC(void) {
}

void func_sc03_096_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_096_801844F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_096_8017D00C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_096_8017D034(void);
extern void func_800D1EBC();
extern void (*D_sc03_096_80184504[])();
extern u8 D_sc03_096_80184510;
extern void func_8016EE40();
extern u8 D_sc03_096_80184514;
extern void func_sc03_096_8017D0F4();
extern void (*D_sc03_096_80184518[])();
extern void (*D_sc03_096_80190940[])();
extern void (*D_sc03_096_801909F4[])();
extern void (*D_sc03_096_80192A4C[])();
extern void (*D_sc03_096_80192A64[])();
extern void (*D_sc03_096_80197D98[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_096_80184520[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_096_80180DE0;
extern u8 D_sc03_096_80190454;
extern u8 D_sc03_096_80190474;
extern s32 func_8012C354();
extern u8 D_sc03_096_80190538;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern s32 D_sc03_096_8019A7D0;

extern void func_8012AD44();
extern void func_80016224();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8012AD50();
extern s32 D_sc03_096_80192A58[];
extern u8 D_sc03_096_80193A18;
extern void (*D_sc03_096_80193A78[])();
extern void func_sc03_096_80180148();
extern s32 func_8012BEE8();
extern s32 func_8012BE54();
extern void func_sc03_096_801801D4();
extern void func_sc03_096_8018028C();
extern void func_sc03_096_8018026C();
extern void func_8002A04C();
extern void func_8012E8A8();
extern void func_80016714();
extern void func_8012C098();
extern void func_8012B260();
extern u8 D_sc03_096_80193AA4;


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
extern SV8 D_sc03_096_80190810[];
extern u8 D_sc03_096_80190574;
extern u8 D_sc03_096_80190634;
extern u8 D_sc03_096_801906BC;
extern u8 D_sc03_096_8019077C;
extern u8 D_sc03_096_80190860;
extern u8 D_sc03_096_80190884;
extern u8 D_sc03_096_80190870;
extern u8 D_sc03_096_8019087C;

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017CD9C);

void func_sc03_096_8017CDDC(u8 *arg0) {
    D_sc03_096_801844F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_096_8017CE18(u8 *arg0) {
    func_sc03_096_8017D00C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_096_8017CE5C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_096_8017CE80(u8 *arg0) {
    func_sc03_096_8017D034();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_096_8017CEC0(u8 *arg0) {
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

void func_sc03_096_8017CF3C(void) {
    func_800D1EBC();
}

void func_sc03_096_8017CF5C(u8 *arg0) {
    D_sc03_096_80184504[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_096_8017CF98(u8 *arg0) {
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

void func_sc03_096_8017D00C(void) {
    func_8016EE40((s32) &D_sc03_096_80184510, 0x01000000);
}

void func_sc03_096_8017D034(void) {
    func_8016EE40((s32) &D_sc03_096_80184514, 0x01000000);
}

void func_sc03_096_8017D05C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_096_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_096_8017D0F4((s32) &D_80126948);
}

void func_sc03_096_8017D0F4(s32 arg0) {
    D_sc03_096_80184518[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017D130);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017D238);

s32 func_sc03_096_8017D3D0(s32 arg0) {
    return func_8013B7F4(D_sc03_096_80184520[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017D400);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017D420);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017D6B8);

void func_sc03_096_8017D840(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190574);
        SetScript(arg0, &D_sc03_096_80190634);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_801906BC);
        SetScript(arg0, &D_sc03_096_8019077C);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_096_80190860;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_096_80190884;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_096_80190538;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190574);
        SetScript(arg0, &D_sc03_096_80190634);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_801906BC);
        SetScript(arg0, &D_sc03_096_8019077C);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190870);
        SetScript(arg0, &D_sc03_096_8019087C);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190574);
        SetScript(arg0, &D_sc03_096_80190634);
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

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017DCEC);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017DE80);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E230);

void func_sc03_096_8017E31C(u8 *arg0) {
    D_sc03_096_80190940[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017E358(u8 *arg0) {
    D_sc03_096_801909F4[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017E394(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_096_8017E3AC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_096_80190474) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_096_80190454;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_096_80180DE0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_096_8017E450(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_096_8017E46C(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_096_80190538) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_096_80190454;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_096_80180DE0, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E4F0);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E52C);

void func_sc03_096_8017E55C(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E5E0);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E6A4);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E784);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E7F4);

void func_sc03_096_8017E8D0(void) {
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E8D8);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017E990);

void func_sc03_096_8017EA54(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017EAA8);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017EB24);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017EC08);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017ECD4);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017EDAC);

void func_sc03_096_8017EE48(s32 arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017EE6C);

void func_sc03_096_8017F01C(s32 arg0) {
    AF(arg0, s16, 0xFC) = 1;
    func_8012AD44(arg0, 2);
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F044);

s32 func_sc03_096_8017F1DC(s32 arg0, s32 arg1) {
    D_sc03_096_8019A7D0 = 1;
    return 1;
}

void func_sc03_096_8017F1F0(void) {
    D_sc03_096_8019A7D0 = 0;
}

void func_sc03_096_8017F200(u8 *arg0) {
    D_sc03_096_80192A4C[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017F23C(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F2A4);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F308);

void func_sc03_096_8017F370(u8 *arg0) {
    D_sc03_096_80192A64[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F3AC);

void func_sc03_096_8017F444(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_096_80192A58[AF(arg0, s16, 0x70)]);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8000);
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0);
}

void func_sc03_096_8017F4D4(u8 *arg0) {
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

void func_sc03_096_8017F528(u8 *arg0) {
    s32 temp_a2;

    D_sc03_096_80193A78[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_096_80180148((s32) arg0);
    }
    if (AF(arg0, u16, 0) != 0) {
        temp_a2 = AF(arg0, s32, 0xD4);
        if (temp_a2 != 0) {
            FaceHelper((s32) arg0, (s32) &D_sc03_096_80193A18, temp_a2 + 8);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F5B8);

void func_sc03_096_8017F744(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_8012BEE8(arg0, arg1, arg2) != 0) && (func_8012BE54(arg0) <= 0x40000)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F794);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F810);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017F864);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017FA38);

void func_sc03_096_8017FCCC(void) {
}

void func_sc03_096_8017FCD4(u8 *arg0) {
    func_sc03_096_801801D4(AF(arg0, s32, 0xD4), 1);
    AF(arg0, s32, 0x48) = 0;
}

void func_sc03_096_8017FD08(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_096_8018028C(AF(arg0, s32, 0xD4));
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017FD34);

void func_sc03_096_8017FE20(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_096_8018028C(AF(arg0, s32, 0xD4));
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8017FE4C);

void func_sc03_096_8017FEA8(u8 *arg0) {
    void *temp_v1;

    func_sc03_096_801801D4(AF(arg0, s32, 0xD4), 0);
    AF(arg0, s16, 2) = 4;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    func_sc03_096_8018026C(AF(arg0, s32, 0xD4));
}

void func_sc03_096_8017FF08(s32 arg0) {
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
    func_sc03_096_801801D4(AF(arg0, s32, 0xD4), 0);
    func_8012B260(arg0);
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8018001C);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_801800D0);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_80180148);

void func_sc03_096_801801D4(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = (arg1 * 4) + &D_sc03_096_80193AA4;
        AF(arg0, u16, 0x28) = (u16) AF(temp_v0, u16, 0);
        AF(arg0, u16, 0x2A) = (u16) AF(temp_v0, u16, 2);
    }
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_80180208);

void func_sc03_096_8018026C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_096_8018028C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_801802AC);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_80180350);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_801803D0);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_80180474);

void func_sc03_096_8018057C(u8 *arg0) {
    D_sc03_096_80197D98[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_801805B8);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_801807AC);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8018085C);

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_8018090C);

void func_sc03_096_801809BC(void) {
}

INCLUDE_ASM("asm/stg/sc03_096/nonmatchings/sc03_096", func_sc03_096_801809C4);
