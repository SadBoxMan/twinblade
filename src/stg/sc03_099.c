#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_099_8017BE9C(void) {
}

void func_sc03_099_8017BEA4(void) {
}

void func_sc03_099_8017BEAC(void) {
}

void func_sc03_099_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_099_80186EAC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_099_8017D04C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_099_8017D074(void);
extern void func_800D1EBC();
extern void (*D_sc03_099_80186EC0[])();
extern u8 D_sc03_099_80186ECC;
extern void func_8016EE40();
extern u8 D_sc03_099_80186ED0;
extern void func_sc03_099_8017D1D0();
extern void (*D_sc03_099_80186ED4[])();
extern void func_sc03_099_8017D54C();
extern void (*D_sc03_099_801989D8[])();
extern void (*D_sc03_099_80198A8C[])();
extern void (*D_sc03_099_8019A980[])();
extern void (*D_sc03_099_801BC61C[])();
extern void (*D_sc03_099_801BC760[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_099_80186F24[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_099_8018374C;
extern u8 D_sc03_099_801984EC;
extern u8 D_sc03_099_8019850C;
extern s32 func_8012C354();
extern u8 D_sc03_099_801985D0;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_099_8019F0C8;
extern void func_8012B14C();
extern u8 D_sc03_099_801AB5C4;
extern void func_8012C588();
extern u8 D_sc03_099_8019F0E4;
extern u8 D_sc03_099_801AB3AC;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_099_8019F37C;
extern u8 D_sc03_099_8019F384;
extern u8 D_sc03_099_801ABE6C;
extern u8 D_sc03_099_801AC5EC;
extern s32 func_8012DEB8();
extern u8 D_sc03_099_801AC1AC;
extern u8 D_sc03_099_801ACA5C;
extern void func_8012C218();
extern void func_8012AD50();
extern s8 D_sc03_099_801BF2EC;
extern void func_sc03_099_80182A50();

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
extern void (*D_sc03_099_8019CA78[])();
extern void func_sc03_099_801802C4();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_099_8019EF68;
extern u8 D_sc03_099_8019CA98;
extern s32 func_8012D5E4();
extern s32 func_sc03_099_801802AC();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern void (*D_sc03_099_8019AB1C[])();
extern u8 D_sc03_099_8019A91C;
extern void func_8001D0E8();

extern u8 D_sc03_099_8019808C;
extern s32 D_sc03_099_801BF198;
extern s32 D_sc03_099_801BF19C;
extern s32 D_sc03_099_801BF1A0;
extern s32 D_sc03_099_801BF1A4;
extern s32 D_sc03_099_801BF3D4;
extern s32 D_sc03_099_80186EE4[];
extern void func_sc03_099_8017D688();
extern void func_800183E0();

extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_099_801988A8[];
extern u8 D_sc03_099_8019860C;
extern u8 D_sc03_099_801986CC;
extern u8 D_sc03_099_80198754;
extern u8 D_sc03_099_80198814;
extern u8 D_sc03_099_801988F8;
extern u8 D_sc03_099_8019891C;
extern u8 D_sc03_099_80198908;
extern u8 D_sc03_099_80198914;
extern void func_8012B2CC();
extern void func_8012C098();

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017CD9C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017CDDC);

void func_sc03_099_8017CE1C(u8 *arg0) {
    D_sc03_099_80186EAC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_099_8017CE58(u8 *arg0) {
    func_sc03_099_8017D04C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_099_8017CE9C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_099_8017CEC0(u8 *arg0) {
    func_sc03_099_8017D074();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_099_8017CF00(u8 *arg0) {
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

void func_sc03_099_8017CF7C(void) {
    func_800D1EBC();
}

void func_sc03_099_8017CF9C(u8 *arg0) {
    D_sc03_099_80186EC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_099_8017CFD8(u8 *arg0) {
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

void func_sc03_099_8017D04C(void) {
    func_8016EE40((s32) &D_sc03_099_80186ECC, 0x01000000);
}

void func_sc03_099_8017D074(void) {
    func_8016EE40((s32) &D_sc03_099_80186ED0, 0x01000000);
}

void func_sc03_099_8017D09C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_099_8017D1D0, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_099_8017D1D0((s32) &D_80126948);
}

void func_sc03_099_8017D134(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_099_8017D1D0, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_099_8017D1D0((s32) &D_80126948);
}

void func_sc03_099_8017D1D0(s32 arg0) {
    D_sc03_099_80186ED4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D20C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D2AC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D364);

s32 func_sc03_099_8017D4FC(s32 arg0) {
    return func_8013B7F4(D_sc03_099_80186F24[arg0], 0);
}

void func_sc03_099_8017D52C(s32 arg0) {
    func_sc03_099_8017D54C(arg0);
}

void func_sc03_099_8017D54C(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_sc03_099_801BF3D4) {                  /* irregular */
    case 0:
        D_sc03_099_801BF198 = 1;
        D_sc03_099_801BF19C = 0;
        D_sc03_099_801BF1A0 = 1;
        D_sc03_099_801BF1A4 = 1;
        D_sc03_099_801BF3D4 = 1;
        return;
    case 1:
        temp_v0 = D_sc03_099_801BF198 - 1;
        D_sc03_099_801BF198 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_099_801BF198 = 2;
            func_sc03_099_8017D688((s32) &D_sc03_099_8019808C, D_sc03_099_801BF19C * 6);
            D_sc03_099_801BF19C = (D_sc03_099_801BF19C + 1) & 7;
        }
        temp_v0_2 = D_sc03_099_801BF1A0 - 1;
        D_sc03_099_801BF1A0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            D_sc03_099_801BF1A0 = 8;
            func_800183E0(D_sc03_099_80186EE4[D_sc03_099_801BF1A4]);
            D_sc03_099_801BF1A4 = (D_sc03_099_801BF1A4 + 1) & 0xF;
        }
        return;
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D688);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D6E8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D708);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017D9A0);

void func_sc03_099_8017DB28(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_8019860C);
        SetScript(arg0, &D_sc03_099_801986CC);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_80198754);
        SetScript(arg0, &D_sc03_099_80198814);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_099_801988F8;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019891C;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_099_801985D0;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_8019860C);
        SetScript(arg0, &D_sc03_099_801986CC);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_80198754);
        SetScript(arg0, &D_sc03_099_80198814);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_80198908);
        SetScript(arg0, &D_sc03_099_80198914);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_8019860C);
        SetScript(arg0, &D_sc03_099_801986CC);
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

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017DFD4);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017E168);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017E518);

void func_sc03_099_8017E604(u8 *arg0) {
    D_sc03_099_801989D8[AF(arg0, u16, 2)]();
}

void func_sc03_099_8017E640(u8 *arg0) {
    D_sc03_099_80198A8C[AF(arg0, u16, 2)]();
}

void func_sc03_099_8017E67C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_099_8017E694(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_099_8019850C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_099_801984EC;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_099_8018374C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_099_8017E738(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_099_8017E754(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_099_801985D0) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_099_801984EC;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_099_8018374C, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017E7D8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017E814);

void func_sc03_099_8017E844(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017E8C8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017E98C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EA6C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EADC);

void func_sc03_099_8017EBB8(void) {
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EBC0);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EC78);

void func_sc03_099_8017ED3C(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017ED90);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EE0C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EEF0);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017EFBC);

void func_sc03_099_8017F094(u8 *arg0) {
    D_sc03_099_8019A980[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F0D0);

void func_sc03_099_8017F224(u8 *arg0) {
    D_sc03_099_8019AB1C[AF(arg0, u16, 2)]();
    func_8012DFD4((s32) arg0);
}

void func_sc03_099_8017F274(s32 arg0) {
    u16 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_099_8019A91C) != 0) {
        SetScript(arg0, (s32) &D_sc03_099_8018374C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 8;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x104, 0xDC);
        temp_v1 = AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFC) = 0x60U;
        AF(arg0, u16, 0xFE) = temp_v1;
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F2EC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F3EC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F480);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F538);

void func_sc03_099_8017F5F0(u8 *arg0) {
    s32 temp_v0;

    D_sc03_099_8019CA78[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_099_801802C4((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F66C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F72C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F854);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017F9C4);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017FB58);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017FDAC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8017FEB8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80180054);

void func_sc03_099_80180110(s32 arg0) {
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

void func_sc03_099_8018019C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_099_8019EF68);
}

s32 func_sc03_099_801801D4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_099_8019CA98, (s32) (&D_sc03_099_8019CA98 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80180200);

s32 func_sc03_099_801802AC(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_099_801802C4(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80180330);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801804B4);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801806D8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80180A8C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80180CCC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80180F34);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801810DC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181328);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181474);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8018152C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181680);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_8018172C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801817DC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801818C4);

void func_sc03_099_801819E0(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181AC0);

void func_sc03_099_80181B98(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_099_80181C00(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181C3C);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181CE0);

void func_sc03_099_80181DA0(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_099_8019F0C8);
}

void func_sc03_099_80181DD4(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_099_80181E30(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_099_80181E68(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB5C4, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80181EC4);

void func_sc03_099_80181F9C(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB5C4);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182030);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801820FC);

void func_sc03_099_801821D4(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB3AC);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_099_8019F0E4 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_099_80182270(u8 *arg0) {
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

void func_sc03_099_801822C8(void) {
}

void func_sc03_099_801822D0(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_099_8019F37C, (s32) &D_sc03_099_8019F384) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_099_801ABE6C);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_099_801AC5EC);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_099_80182370(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_099_801AC5EC);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_099_801823C4(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_099_8019F37C, (s32) &D_sc03_099_8019F384) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_099_801AC1AC);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_099_801ACA5C);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182458);

void func_sc03_099_801824A0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_099_801824C8(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182514);

void func_sc03_099_80182600(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182684);

void func_sc03_099_80182790(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_099_801827C8(u8 *arg0, s32 arg1) {
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

void func_sc03_099_80182834(u8 *arg0) {
    D_sc03_099_801BC61C[AF(arg0, u16, 2)]();
}

void func_sc03_099_80182870(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_099_80182A50();
        return;
    }
    var_v0 = &D_sc03_099_801BF2EC;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801828E8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182998);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182A50);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182B10);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182BDC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182DDC);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182E64);

void func_sc03_099_80182EE8(u8 *arg0) {
    D_sc03_099_801BC760[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80182F24);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80183118);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_801831C8);

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80183278);

void func_sc03_099_80183328(void) {
}

INCLUDE_ASM("asm/stg/sc03_099/nonmatchings/sc03_099", func_sc03_099_80183330);
