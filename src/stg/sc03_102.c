#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_102_8017BE9C(void) {
}

void func_sc03_102_8017BEA4(void) {
}

void func_sc03_102_8017BEAC(void) {
}

void func_sc03_102_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_102_80189BBC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_102_80180434(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_102_8018045C(void);
extern void func_800D1EBC();
extern void (*D_sc03_102_80189BD0[])();
extern u8 D_sc03_102_80189BDC;
extern void func_8016EE40();
extern u8 D_sc03_102_80189BE0;
extern void func_sc03_102_8018051C();
extern void (*D_sc03_102_80189BE4[])();
extern void func_sc03_102_80180810();
extern void (*D_sc03_102_80189BFC[])();
extern void (*D_sc03_102_80189C04[])();
extern void (*D_sc03_102_80189CBC[])();
extern void (*D_sc03_102_8019794C[])();
extern void (*D_sc03_102_80197A00[])();
extern void (*D_sc03_102_801B6EC4[])();
extern void (*D_sc03_102_801B6EDC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_102_80189BEC[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_102_801864AC;
extern u8 D_sc03_102_80197460;
extern u8 D_sc03_102_80197480;
extern s32 func_8012C354();
extern u8 D_sc03_102_80197544;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_102_80199890;
extern void func_8012B14C();
extern u8 D_sc03_102_801A5D8C;
extern void func_8012C588();
extern u8 D_sc03_102_801998AC;
extern u8 D_sc03_102_801A5B74;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_102_80199B44;
extern u8 D_sc03_102_80199B4C;
extern u8 D_sc03_102_801A6634;
extern u8 D_sc03_102_801A6DB4;
extern s32 func_8012DEB8();
extern u8 D_sc03_102_801A6974;
extern u8 D_sc03_102_801A7224;
extern void func_8012C218();
extern void func_8012AD50();
extern s8 D_sc03_102_801B9AB4;
extern void func_sc03_102_80185C9C();

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
extern s32 D_sc03_102_80189CB8[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc03_102_801815D4();

extern u8 D_sc03_102_80197280;
extern u8 D_sc03_102_80197400;
extern s32 D_sc03_102_801B9960;
extern s32 D_sc03_102_801B9964;
extern s32 D_sc03_102_801B9968;
extern s32 D_sc03_102_801B996C;
extern s32 D_sc03_102_801B9B9C;
extern void func_sc03_102_80180964();

extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_102_8019781C[];
extern u8 D_sc03_102_80197580;
extern u8 D_sc03_102_80197640;
extern u8 D_sc03_102_801976C8;
extern u8 D_sc03_102_80197788;
extern u8 D_sc03_102_8019786C;
extern u8 D_sc03_102_80197890;
extern u8 D_sc03_102_8019787C;
extern u8 D_sc03_102_80197888;
extern void func_8012B2CC();
extern void func_8002A04C();
extern void func_8012C098();

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8017CD9C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801801C4);

void func_sc03_102_80180204(u8 *arg0) {
    D_sc03_102_80189BBC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_102_80180240(u8 *arg0) {
    func_sc03_102_80180434();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_102_80180284(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_102_801802A8(u8 *arg0) {
    func_sc03_102_8018045C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_102_801802E8(u8 *arg0) {
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

void func_sc03_102_80180364(void) {
    func_800D1EBC();
}

void func_sc03_102_80180384(u8 *arg0) {
    D_sc03_102_80189BD0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_102_801803C0(u8 *arg0) {
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

void func_sc03_102_80180434(void) {
    func_8016EE40((s32) &D_sc03_102_80189BDC, 0x01000000);
}

void func_sc03_102_8018045C(void) {
    func_8016EE40((s32) &D_sc03_102_80189BE0, 0x01000000);
}

void func_sc03_102_80180484(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x155;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_102_8018051C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_102_8018051C((s32) &D_80126948);
}

void func_sc03_102_8018051C(s32 arg0) {
    D_sc03_102_80189BE4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80180558);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80180628);

s32 func_sc03_102_801807C0(s32 arg0) {
    return func_8013B7F4(D_sc03_102_80189BEC[arg0], 0);
}

void func_sc03_102_801807F0(s32 arg0) {
    func_sc03_102_80180810(arg0);
}

void func_sc03_102_80180810(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    switch (D_sc03_102_801B9B9C) {                  /* irregular */
    case 0:
        D_sc03_102_801B9960 = 1;
        D_sc03_102_801B9964 = 0;
        D_sc03_102_801B9968 = 1;
        D_sc03_102_801B996C = 0;
        D_sc03_102_801B9B9C = 1;
        return;
    case 1:
        temp_v0 = D_sc03_102_801B9960 - 1;
        D_sc03_102_801B9960 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_102_801B9960 = 3;
            func_sc03_102_80180964((s32) &D_sc03_102_80197280, D_sc03_102_801B9964 * 6);
            temp_v0_2 = D_sc03_102_801B9964 + 1;
            D_sc03_102_801B9964 = temp_v0_2;
            if (temp_v0_2 >= 0x20) {
                D_sc03_102_801B9964 = 0;
            }
        }
        temp_v0_3 = D_sc03_102_801B9968 - 1;
        D_sc03_102_801B9968 = temp_v0_3;
        if (temp_v0_3 == 0) {
            D_sc03_102_801B9968 = 3;
            func_sc03_102_80180964((s32) &D_sc03_102_80197400, D_sc03_102_801B996C * 6);
            temp_v0_4 = D_sc03_102_801B996C + 1;
            D_sc03_102_801B996C = temp_v0_4;
            if (temp_v0_4 >= 8) {
                D_sc03_102_801B996C = 0;
            }
        }
        return;
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80180964);

void func_sc03_102_801809C4(u8 *arg0) {
    D_sc03_102_80189BFC[AF(arg0, u16, 2)]();
}

void func_sc03_102_80180A00(s32 arg0) {
    AF(arg0, s32, 0x1C) = rand(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80180A38);

void func_sc03_102_80180BFC(u8 *arg0) {
    D_sc03_102_80189C04[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80180C38);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80181030);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018110C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801811F0);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80181260);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018139C);

void func_sc03_102_80181500(u8 *arg0) {
    D_sc03_102_80189CBC[AF(arg0, u16, 2)]();
}

void func_sc03_102_8018153C(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc03_102_80189CB8[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc03_102_801815D4((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801815D4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801816E4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80181704);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018199C);

void func_sc03_102_80181B24(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_102_8019781C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_102_8019781C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_102_8019781C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_102_80197580);
        SetScript(arg0, &D_sc03_102_80197640);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_102_801976C8);
        SetScript(arg0, &D_sc03_102_80197788);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_102_8019786C;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_102_80197890;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_102_80197544;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_102_80197580);
        SetScript(arg0, &D_sc03_102_80197640);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_102_801976C8);
        SetScript(arg0, &D_sc03_102_80197788);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_102_8019787C);
        SetScript(arg0, &D_sc03_102_80197888);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_102_80197580);
        SetScript(arg0, &D_sc03_102_80197640);
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

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80181FD0);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182164);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182514);

void func_sc03_102_80182600(u8 *arg0) {
    D_sc03_102_8019794C[AF(arg0, u16, 2)]();
}

void func_sc03_102_8018263C(u8 *arg0) {
    D_sc03_102_80197A00[AF(arg0, u16, 2)]();
}

void func_sc03_102_80182678(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_102_80182690(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_102_80197480) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_102_80197460;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_102_801864AC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_102_80182734(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_102_80182750(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_102_80197544) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_102_80197460;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_102_801864AC, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801827D4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182810);

void func_sc03_102_80182840(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801828C4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182988);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182A68);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182AD8);

void func_sc03_102_80182BB4(void) {
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182BBC);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182C74);

void func_sc03_102_80182D38(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182D8C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182E08);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182EEC);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80182FB8);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80183090);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80183214);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80183438);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801837EC);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80183A2C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80183C94);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80183E3C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184088);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801841D4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018428C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801843E0);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018448C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018453C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184624);

void func_sc03_102_80184740(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184820);

void func_sc03_102_801848F8(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_102_80184960(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_8018499C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184A40);

void func_sc03_102_80184B00(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_102_80199890);
}

void func_sc03_102_80184B34(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_102_80184B90(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_102_80184BC8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_102_801A5D8C, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184C24);

void func_sc03_102_80184CFC(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_102_801A5D8C);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184D90);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80184E5C);

void func_sc03_102_80184F34(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_102_801A5B74);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_102_801998AC | 0x40000000 | 0x20000000);
    }
}

void func_sc03_102_80184FD0(u8 *arg0) {
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

void func_sc03_102_80185028(void) {
}

void func_sc03_102_80185030(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_102_80199B44, (s32) &D_sc03_102_80199B4C) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_102_801A6634);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_102_801A6DB4);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_102_801850D0(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_102_801A6DB4);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_102_80185124(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_102_80199B44, (s32) &D_sc03_102_80199B4C) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_102_801A6974);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_102_801A7224);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801851B8);

void func_sc03_102_80185200(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_102_80185228(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185274);

void func_sc03_102_80185360(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801853E4);

void func_sc03_102_801854F0(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_102_80185528(u8 *arg0, s32 arg1) {
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

void func_sc03_102_80185594(u8 *arg0) {
    D_sc03_102_801B6EC4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801855D0);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801857C4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185874);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185924);

void func_sc03_102_801859D4(void) {
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801859DC);

void func_sc03_102_80185A80(u8 *arg0) {
    D_sc03_102_801B6EDC[AF(arg0, u16, 2)]();
}

void func_sc03_102_80185ABC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_102_80185C9C();
        return;
    }
    var_v0 = &D_sc03_102_801B9AB4;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185B34);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185BE4);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185C9C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185D5C);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80185E28);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_80186028);

INCLUDE_ASM("asm/stg/sc03_102/nonmatchings/sc03_102", func_sc03_102_801860B0);
