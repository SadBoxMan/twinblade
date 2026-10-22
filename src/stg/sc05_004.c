#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_004_8017BE9C(void) {
}

void func_sc05_004_8017BEA4(void) {
}

void func_sc05_004_8017BEAC(void) {
}

void func_sc05_004_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_004_80185064[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc05_004_80185340[])();
extern s32 func_80178970();
extern void func_80146A6C();
extern u8 D_sc05_004_801850F4;
extern s32 func_8012CBCC();
extern void func_8012B2CC();
extern void func_8012B14C();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc05_004_80185330[];
extern void func_80029124();
extern s32 func_8012C658();
extern void func_80178B18();
extern u8 D_80078E78;
extern u8 D_sc05_004_80185310;
extern s32 func_8012E778();
extern void func_801439C0();
extern void (*D_sc05_004_801853B4[])();
void func_sc05_004_8017E278(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_004_8017E2A0(void);
extern void func_800D1EBC();
extern void (*D_sc05_004_801853C8[])();
extern u8 D_sc05_004_801853D4;
extern void func_8016EE40();
extern u8 D_sc05_004_801853E0;
extern void func_sc05_004_8017E36C();
extern void (*D_sc05_004_801853F4[])();
extern void (*D_sc05_004_80185484[])();
extern void (*D_sc05_004_801854F8[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_004_80181998;
extern u8 D_sc05_004_801854AC;
extern u8 func_sc05_004_8017EAFC;
extern void func_80178CBC();
extern u8 D_sc05_004_801854E0;
extern void (*D_sc05_004_80198728[])();
extern void (*D_sc05_004_8019AF58[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();
extern s32 func_sc05_004_8017EB58();

extern void (*D_sc05_004_8019AF08[])();
extern void func_8012B260();
extern void func_sc05_004_801808CC();
extern void func_8001CD50();
extern u8 D_sc05_004_8019F078;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern s32 func_8012BCCC();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc05_004_801807AC();
extern u8 D_sc05_004_8019AEC8;
extern u8 D_sc05_004_8019AED0;
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s32 func_8012BE54();
extern void func_sc05_004_801804B8();
extern u8 D_sc05_004_8019F0B8;
extern void func_800233CC();
extern void func_801292C8();


extern u8 D_80126948;
extern s32 D_80126950;
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
extern s32 func_sc05_004_8017E79C();
extern u8 D_sc05_004_8018548C;
extern s32 func_sc05_004_8017E808();
extern s32 D_80126B8C;
extern u8 D_sc05_004_801986E8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern s32 func_sc05_004_8017EB78();
extern s32 func_sc05_004_8017EC60();
extern s32 func_80029178();
extern s32 func_8012BEE8();
extern s32 func_sc05_004_8017EBA0();

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017BEBC);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017CD9C);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017CE68);

void func_sc05_004_8017CFC4(u8 *arg0) {
    D_sc05_004_80185064[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017D000(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017D060);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017D1FC);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017D400);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017D7F4);

void func_sc05_004_8017D974(u8 *arg0) {
    D_sc05_004_80185340[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017D9B0);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017DA24);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017DB00);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017DD14);

void func_sc05_004_8017DDE8(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    func_80178970(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (func_8012CBCC(arg0) & 0x2000)) {
        func_80146A6C(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc05_004_801850F4);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        func_8012B2CC(arg0);
        func_8012B14C(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_004_8017DEB8(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_80029124((s32) D_sc05_004_80185330[AF(arg0, s16, 0x70)], 1);
        func_8012C218(arg0);
    }
}

void func_sc05_004_8017DF10(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &D_80078E78;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        func_80178B18((s32) arg0, (s32) &D_sc05_004_80185310);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (func_8012E778((s32) arg0, 0x9000B8) == 0)) {
        if (func_8012C658(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012C218((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc05_004_8017E008(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_004_8017E048(u8 *arg0) {
    D_sc05_004_801853B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_004_8017E084(u8 *arg0) {
    func_sc05_004_8017E278();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_004_8017E0C8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_004_8017E0EC(u8 *arg0) {
    func_sc05_004_8017E2A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_004_8017E12C(u8 *arg0) {
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

void func_sc05_004_8017E1A8(void) {
    func_800D1EBC();
}

void func_sc05_004_8017E1C8(u8 *arg0) {
    D_sc05_004_801853C8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_004_8017E204(u8 *arg0) {
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

void func_sc05_004_8017E278(void) {
    func_8016EE40((s32) &D_sc05_004_801853D4, 0x01000000);
}

void func_sc05_004_8017E2A0(void) {
    func_8016EE40((s32) &D_sc05_004_801853E0, 0x01000000);
}

void func_sc05_004_8017E2C8(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_004_8017E36C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_004_8017E36C((s32) &D_80126948);
}

void func_sc05_004_8017E36C(s32 arg0) {
    D_sc05_004_801853F4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017E3A8);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017E440);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017E5D8);

void func_sc05_004_8017E730(u8 *arg0) {
    D_sc05_004_80185484[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017E76C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    func_sc05_004_8017E79C((s32) arg0);
    func_80029124(0xBA, 1);
}

s32 func_sc05_004_8017E79C(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x30);
    MoveImage((s32) &D_sc05_004_8018548C, 0x2D0, 0x180);
    MoveImage((s32) (&D_sc05_004_8018548C + 8), 0x160, 0x155);
    return func_sc05_004_8017E808(arg0);
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017E808);

void func_sc05_004_8017E90C(void) {
    D_80126B8C = 0;
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017E91C);

s32 func_sc05_004_8017E9D4(void) {
    return 0x5F;
}

void func_sc05_004_8017E9DC(u8 *arg0) {
    D_sc05_004_801854F8[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017EA18(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_004_801854AC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_004_80181998);
        func_801788B8(arg0, (s32) &func_sc05_004_8017EAFC);
    }
}

void func_sc05_004_8017EA7C(void) {
}

void func_sc05_004_8017EA84(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc05_004_801854E0);
    AF(arg0, s16, 2) = 3;
}

void func_sc05_004_8017EABC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017EAFC);

s32 func_sc05_004_8017EB58(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

s32 func_sc05_004_8017EB78(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    return func_8012AD44(arg0, 2);
}

s32 func_sc05_004_8017EBA0(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0xC0;
    return func_8012AD44(arg0, 3);
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017EBC8);

s32 func_sc05_004_8017EC60(s32 arg0) {
    func_8012C658(0x191, 0, arg0);
    func_8012C658(0x191, 1, arg0);
    func_8012C658(0x191, 2, arg0);
    return func_8012C658(0x191, 3, arg0);
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017ECC4);

void func_sc05_004_8017EDD8(u8 *arg0) {
    D_sc05_004_80198728[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017EE14(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, AF(arg0, s32, 0xDC));
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0x01800180;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_004_801986E8 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4C00;
    AF(arg0, u8, 0x75) = 8;
    if (AF(arg0, s16, 0x70) == 0) {
        func_sc05_004_8017EB78(arg0);
    } else {
        func_sc05_004_8017EB58(arg0);
    }
    func_sc05_004_8017EC60(arg0);
}

void func_sc05_004_8017EEBC(s32 arg0) {
    if (func_80029178(0xBA) & 0xFF) {
        func_sc05_004_8017EB78(arg0);
        AF(arg0, s32, 0x1C) = 0;
        func_8002D4C8(0x720, 0);
    }
}

void func_sc05_004_8017EF0C(u8 *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;

    if (func_8012BEE8() != 0) {
        temp_v0 = AF(arg0, u16, 0xFC) + 4;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x11) {
            func_sc05_004_8017EBA0((s32) arg0);
        }
    } else {
        temp_v0_2 = (s16) AF(arg0, u16, 0xFC);
        if (temp_v0_2 != 0) {
            if (temp_v0_2 < 3) {
                if (((AF(AF(arg0, void *, 0x20), s16, 0x12) + 2) & 0x3FF) < 4) {
                    AF(arg0, u16, 0xFC) = 0U;
                }
            } else {
                AF(arg0, u16, 0xFC) = (u16) (temp_v0_2 - 2);
            }
        }
        if (AF(arg0, s32, 0x1C) == 1) {
            func_8002D4C8(0x720, 0);
        }
    }
}

void func_sc05_004_8017EFD4(u8 *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    if (AF(arg0, s16, 0x70) == 0) {
        if (func_8012BEE8() != 0) {
            temp_v0 = AF(arg0, u16, 0xFC) - 2;
            AF(arg0, u16, 0xFC) = temp_v0;
            if ((s16) temp_v0 < 0x10) {
                AF(arg0, s32, 0x1C) = 0x40;
                func_8012AD44((s32) arg0, 2);
            }
        } else {
            temp_v0_2 = (s16) AF(arg0, u16, 0xFC);
            if (temp_v0_2 < 0x100) {
                AF(arg0, u16, 0xFC) = (u16) (temp_v0_2 + 4);
            }
            if (AF(arg0, s32, 0x1C) == 1) {
                func_8002D4C8(0x721, 0);
                func_8002D4C8(4, 0x720);
            }
        }
    } else {
        temp_v0_3 = (s16) AF(arg0, u16, 0xFC);
        if (temp_v0_3 < 0x100) {
            AF(arg0, u16, 0xFC) = (u16) (temp_v0_3 + 4);
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017F0B8);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017F188);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017F210);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017F9BC);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8017FFC4);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_801800F8);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_801804B8);

void func_sc05_004_801806FC(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc05_004_8019AF08[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        if ((temp_v1 == 0) || (temp_v1 == 7)) {
            temp_a1 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1 + 0x10, temp_a1 + 0x34);
        }
        if (AF(arg0, s16, 0x70) == 0xF) {
            temp_a1_2 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1_2 + 0x10, temp_a1_2 + 0x34);
        }
        func_8012B260((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_801807AC);

void func_sc05_004_80180890(u8 *arg0) {
    D_sc05_004_8019AF58[AF(arg0, u16, 2)]();
}

void func_sc05_004_801808CC(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc05_004_8019F078);
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_80180930);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_801809C4);

void func_sc05_004_80180AEC(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc05_004_80180B1C(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc05_004_80180B48(void) {
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_80180B50);

void func_sc05_004_80180C3C(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_80180CBC);

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_80180D70);

void func_sc05_004_80180E50(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc05_004_80180EB8(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012BCCC((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc05_004_80180F18(u8 *arg0) {
    s32 sp10;
    u16 temp_v0;

    func_8012B77C((s32) &sp10, arg0 + 4, (s32) &D_80126B5C);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (sp10 >> 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) sp10;
    temp_v0 = AF(arg0, u16, 0xA) - 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) >= 0x81) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0xFC) = 0xC;
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_80180FA8(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s16, 2) = 0xB;
    }
    if ((s16) AF(arg0, u16, 0xFC) == 6) {
        func_8012C658(0x1EA, 0xE, (s32) arg0);
        func_8002D4C8(0xC5D, 0);
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_8018101C(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_8018106C(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc05_004_8019AEC8, (s32) &D_sc05_004_8019AED0, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc05_004_801808CC(arg0);
}

void func_sc05_004_801810EC(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (func_8012BE54() <= 0x23FFFF) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = func_8012C658(0x1EA, 0xF, (s32) arg0);
            AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x1F) + 0x2D);
            if ((AF(arg0, s16, 0x70) == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8018118C);

void func_sc05_004_8018125C(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    AF(arg0, s16, 2) = 0x11;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = temp_v0_2;
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 0x11) << 9);
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc05_004_801804B8((s32) arg0);
}

void func_sc05_004_801812F0(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

INCLUDE_ASM("asm/stg/sc05_004/nonmatchings/sc05_004", func_sc05_004_8018132C);

void func_sc05_004_80181414(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc05_004_8019F0B8;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_004_801814D8(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc05_004_8019F0B8;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc05_004_8018158C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x58000000);
    AF(arg0, s32, 0x2C) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_004_801815CC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}
