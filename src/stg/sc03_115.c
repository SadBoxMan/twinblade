#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_115_8017BE9C(void) {
}

void func_sc03_115_8017BEA4(void) {
}

void func_sc03_115_8017BEAC(void) {
}

void func_sc03_115_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_115_80183EE8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_115_8017D008(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_115_80183EF0[])();
void func_sc03_115_8017D030(void);
extern void func_800D1EBC();
extern void (*D_sc03_115_80183EFC[])();
extern u8 D_sc03_115_80183F08;
extern void func_8016EE40();
extern u8 D_sc03_115_80183F14;
extern void (*D_sc03_115_80183F28[])();
void func_sc03_115_8017D09C(u8 *arg0);
extern void func_sc03_115_8017D374();
extern void (*D_sc03_115_80183F44[])();
extern void (*D_sc03_115_80184110[])();
extern s32 func_800D0EC4();
extern void func_sc03_115_8017D058();
extern void func_sc03_115_8017D2BC();
extern void (*D_sc03_115_801925E4[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc03_115_8018F71C;
extern void func_8012C218();
extern void func_80016714();

extern s32 D_sc03_115_80194FE4;
extern s32 func_8012C044();
extern void (*D_sc03_115_8018AB80[])();
extern void func_sc03_115_8017EFB8();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc03_115_8018C7D8;
extern u8 D_sc03_115_8018F904;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc03_115_8018FAB4;
extern void func_sc03_115_8017EC14();
extern s16 D_80126CE0;
extern u8 D_sc03_115_8018E188;
extern u8 D_sc03_115_8018FDEC;
extern void (*D_sc03_115_8018FF58[])();
extern void func_sc03_115_8017FD20();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_115_80192448;
extern u8 D_sc03_115_8018FF78;
extern s32 func_8012D5E4();
extern s32 func_sc03_115_8017FD08();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern s32 func_8012C354();
extern u8 D_sc03_115_8018AA74;
extern u8 D_sc03_115_8018AAA8;
extern void func_80143970();
extern void func_sc03_115_8017E998();
extern void func_sc03_115_8017EADC();
extern u16 D_800B99DA;
extern void func_80130D48();
extern void func_8002AC00();

extern u8 D_800D5DC0;
extern s16 D_80126B38;
extern void func_80154274();
extern s16 D_80126B3C;
extern s32 func_80012B04();
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
extern void func_800D0F0C();
extern void func_800291A0();
extern s32 func_80178970();
extern void func_80178D18();

extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;


extern void func_80131E00();
extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017BEBC);

void func_sc03_115_8017CD9C(u8 *arg0) {
    D_sc03_115_80183EE8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_115_8017CDD8(u8 *arg0) {
    func_sc03_115_8017D008();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_115_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_115_8017CE40(u8 *arg0) {
    D_sc03_115_80183EF0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_115_8017CE7C(u8 *arg0) {
    func_sc03_115_8017D030();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_115_8017CEBC(u8 *arg0) {
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

void func_sc03_115_8017CF38(void) {
    func_800D1EBC();
}

void func_sc03_115_8017CF58(u8 *arg0) {
    D_sc03_115_80183EFC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_115_8017CF94(u8 *arg0) {
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

void func_sc03_115_8017D008(void) {
    func_8016EE40((s32) &D_sc03_115_80183F08, 0x01000000);
}

void func_sc03_115_8017D030(void) {
    func_8016EE40((s32) &D_sc03_115_80183F14, 0x01000000);
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D058);

void func_sc03_115_8017D09C(u8 *arg0) {
    D_sc03_115_80183F28[AF(arg0, u8, 0x214)]();
}

void func_sc03_115_8017D0D8(s32 arg0) {
    BeginScene();
    NextPhase(arg0);
}

void func_sc03_115_8017D108(s32 arg0) {
    NextPhase(arg0);
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D128);

void func_sc03_115_8017D1A4(s32 arg0) {
    if (D_80126B38 != 0) {
        func_80154274(arg0, (s32) &D_800D5DC0);
        NextPhase(arg0);
    }
}

void func_sc03_115_8017D1EC(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        BeginScene();
        NextPhase((s32) arg0);
    }
}

void func_sc03_115_8017D234(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) D_80126B3C, 4);
    if ((temp_v0 << 0x10) == 0) {
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc03_115_8017D2B4(void) {
}

void func_sc03_115_8017D2BC()
{
    D_80126B38 = 1;
}

void func_sc03_115_8017D2D0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_115_8017D374, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_115_8017D374((s32) &D_80126948);
}

void func_sc03_115_8017D374(s32 arg0) {
    D_sc03_115_80183F44[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D3B0);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D420);

void func_sc03_115_8017D5B8(u8 *arg0) {
    D_sc03_115_80184110[AF(arg0, u16, 2)]();
}

s32 func_sc03_115_8017D5F4(void) {
    return 2 - D_sc03_115_80194FE4;
}

s32 func_sc03_115_8017D608(void) {
    return func_800D0EC4() == 0;
}

void func_sc03_115_8017D628(u8 *arg0) {
    void *temp_a0;

    func_800D0F0C(func_800D0EC4(), AF(arg0, s16, 0x70) + 0x62);
    func_800291A0(0xDE, (s32) (u8) AF(arg0, s16, 0x70));
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x70) = 0;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D684);

void func_sc03_115_8017D710(s32 arg0) {
    func_sc03_115_8017D058(arg0);
}

void func_sc03_115_8017D730(s32 arg0) {
    func_sc03_115_8017D2BC(arg0);
}

void func_sc03_115_8017D750(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0x50) = (s16) (D_80126B5E - (AF(arg0, u16, 6) + 0x20));
    AF(arg0, s16, 0x52) = (s16) (D_80126B62 - (AF(arg0, u16, 0xA) + 0x30));
    AF(arg0, s16, 0x54) = (s16) (D_80126B66 - (AF(arg0, u16, 0xE) + 0x40));
    func_8002D4C8(0x6A6, 0, arg2);
}

void func_sc03_115_8017D7BC(u8 *arg0) {
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D7CC);

void func_sc03_115_8017D8C0(void) {
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D8C8);

void func_sc03_115_8017D948(s32 arg0) {
    void *temp_a0;
    void *temp_v0;

    if (func_80178970() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        if (AF(arg0, s16, 0x70) == 0) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017D9C4);

s32 func_sc03_115_8017DA34(void) {
    return 0x59;
}

void func_sc03_115_8017DA3C(u8 *arg0) {
    void *temp_v0;

    D_sc03_115_8018AB80[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_115_8017EFB8((s32) arg0);
        }
    }
}

void func_sc03_115_8017DAC8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_115_8018AA74) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_115_8018AAA8;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_115_8017DB44(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_115_8018F71C);
}

void func_sc03_115_8017DB74(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_115_8018C7D8);
            SetScript((s32) arg0, (s32) &D_sc03_115_8018F904);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        temp_v0 = func_8012B8E4((s32) arg0, 0xA);
        temp_a1 = AF(arg0, s32, 0x20);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
        if ((func_8012BEE8((s32) arg0, temp_a1) != 0) || (temp_v0 == 0)) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017DC44);

void func_sc03_115_8017DCB8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017DCEC);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017DDB0);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017DE88);

void func_sc03_115_8017DF68(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc03_115_8018FAB4, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc03_115_8017EC14((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017DFB0);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E0D8);

void func_sc03_115_8017E190(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s32, 0xDC) & 8) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x44);
        goto block_3;
    }
    temp_v0 = func_8012B8E4((s32) arg0, 8);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + temp_v0);
    if (temp_v0 != 0) {
block_3:
        if (func_8012BEE8((s32) arg0) != 0) {
            goto block_4;
        }
    } else {
block_4:
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_115_8017E220(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_115_8017E998((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc03_115_8017E264(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc03_115_8017EADC(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E29C);

void func_sc03_115_8017E2C4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_115_8017E2F4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_115_8017E998((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_115_8017EADC((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E380);

void func_sc03_115_8017E438(u8 *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_v1_4 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1_4, u16, 0x18) >= 0x1800) {
            AF(temp_v1_4, u16, 0x1C) = 0x1800U;
            AF(temp_v1_4, u16, 0x1A) = 0x1800U;
            AF(temp_v1_4, u16, 0x18) = 0x1800U;
        }
    }
    if (AF(arg0, s32, 0x1C) == 0xE) {
        func_sc03_115_8017E998((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_115_8017EADC((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E528);

void func_sc03_115_8017E580(u8 *arg0) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8));
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_115_8017E624(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E634);

void func_sc03_115_8017E71C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_115_8018E188);
    SetScript((s32) arg0, (s32) &D_sc03_115_8018FDEC);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc03_115_8017E778(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_115_8017EFB8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E800);

void func_sc03_115_8017E8D0(u8 *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    if ((AF(arg0, s32, 0xDC) & 2) && (AF(arg0, s32, 0x1C) >= 0x15)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x1E);
    }
    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_115_8017EFB8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017E998);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017EA70);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017EADC);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017EBD8);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017EC14);

s32 func_sc03_115_8017EC80(s32 arg0) {
    SV8 a;
    SV8 b;
    s32 d;
    u8 *p;
    s32 i;
    s32 t;
    s32 *dp;

    t = func_8012CBA4();
    if ((t & 0xFF) == 2) {
        func_80131E00(arg0, 0x12);
        return 0;
    }
    if ((t & 0xFF) == 0x1A) {
        func_sc03_115_8017EFB8(arg0);
        return 0;
    }
    if (0) {
miss:
        func_8012ADE4(arg0);
        return 1;
    }
    if (!(t & 0x2000)) {
        func_8012ADE4(arg0);
    }
    AF(arg0, s32, 0xDC) &= ~0x40;
    if (AF(arg0, s32, 0x14) > 0xFFFFF) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, s32, 0x58) != 0 && (u8 *)arg0 != p
            && func_8012BC60(arg0 + 4, p + 4) < 0x2400) {
            dp = &d;
            func_8012B0B4(dp, func_8012B6D4(arg0 + 4, p + 4), 0x61);
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            b.x += *(s32 *)&d;
            b.z += *(s32 *)&d >> 16;
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                goto miss;
            }
            AF(arg0, u16, 6) = b.x;
            AF(arg0, u16, 0xA) = b.y;
            AF(arg0, u16, 0xE) = b.z;
            break;
        }
    }
    return 1;
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017EE7C);

void func_sc03_115_8017EFB8(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C();
        func_8002AC00(0x1A);
    }
    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_v1 = AF(arg0, void *, 0x68);
        if ((temp_v1 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) & 0x7FFF);
        }
    }
    func_8012C218(arg0);
}

void func_sc03_115_8017F04C(u8 *arg0) {
    s32 temp_v0;

    D_sc03_115_8018FF58[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_115_8017FD20((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F0C8);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F188);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F2B0);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F420);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F5B4);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F808);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017F914);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017FAB0);

void func_sc03_115_8017FB6C(s32 arg0) {
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

void func_sc03_115_8017FBF8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_115_80192448);
}

s32 func_sc03_115_8017FC30(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_115_8018FF78, (s32) (&D_sc03_115_8018FF78 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017FC5C);

s32 func_sc03_115_8017FD08(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_115_8017FD20(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc03_115_8017FD8C(u8 *arg0) {
    D_sc03_115_801925E4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017FDC8);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_8017FEC4);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_80180154);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_801802E8);

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_80180340);

void func_sc03_115_801803BC(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc03_115/nonmatchings/sc03_115", func_sc03_115_80180400);
