#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_089_8017BE9C(void) {
}

void func_sc03_089_8017BEA4(void) {
}

void func_sc03_089_8017BEAC(void) {
}

void func_sc03_089_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc03_089_8018D07C[])();
extern void func_80147324();
extern void func_sc03_089_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_089_8018D090[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_089_8018D0A4[])();
extern void func_800D22E4();
extern void func_sc03_089_8017C910();
extern void (*D_sc03_089_8018D2D8[])();
void func_sc03_089_801812B4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_089_8018D2E0[])();
void func_sc03_089_801812DC(void);
extern void func_800D1EBC();
extern void (*D_sc03_089_8018D2EC[])();
extern void (*D_sc03_089_8018D2F8[])();
void func_sc03_089_80181410(void);
extern void (*D_sc03_089_8018D300[])();
extern u8 D_sc03_089_8018D310;
extern void func_8016EE40();
extern u8 D_sc03_089_8018D314;
extern void (*D_sc03_089_8018D328[])();
extern u8 D_sc03_089_8018D320;
extern void (*D_sc03_089_8018D340[])();
extern u8 D_sc03_089_8018D338;
extern void func_sc03_089_801817A4();
extern void (*D_sc03_089_8018D348[])();
extern void (*D_sc03_089_8018D3BC[])();
extern void (*D_sc03_089_8018D408[])();
extern void (*D_sc03_089_8018D4AC[])();
extern void (*D_sc03_089_801A1B1C[])();
extern void (*D_sc03_089_801A1BD0[])();
extern void (*D_sc03_089_801A3A50[])();
extern void (*D_sc03_089_801A3B88[])();
extern void (*D_sc03_089_801A3D00[])();
extern void (*D_sc03_089_801A3D10[])();
extern void (*D_sc03_089_801C3C2C[])();
extern void (*D_sc03_089_801C3D18[])();

void func_sc03_089_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_089_8017BEF8(u8 *arg0) {
    D_sc03_089_8018D07C[AF(arg0, u16, 2)]();
}

void func_sc03_089_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_089_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017BFE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C064(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_089_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_089_80181510(void);
extern s32 func_sc03_089_801814BC();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern s32 func_80171928();
extern s32 D_sc03_089_8018D368[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_089_80189990;
extern u8 D_sc03_089_801A1630;
extern u8 D_sc03_089_801A1650;
extern s32 func_8012C354();
extern u8 D_sc03_089_801A1714;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_089_801A663C;
extern void func_8012B14C();
extern u8 D_sc03_089_801B2B38;
extern void func_8012C588();
extern u8 D_sc03_089_801A6658;
extern u8 D_sc03_089_801B2920;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_089_801A68F0;
extern u8 D_sc03_089_801A68F8;
extern u8 D_sc03_089_801B33E0;
extern u8 D_sc03_089_801B3B60;
extern s32 func_8012DEB8();
extern u8 D_sc03_089_801B3720;
extern u8 D_sc03_089_801B3FD0;
extern void func_8012C218();
extern void func_sc03_089_801884B8();
extern u8 D_sc03_089_801C3B90;
extern void func_sc03_089_801887E8();
extern s32 func_sc03_089_801885A4();
extern void func_sc03_089_80188428();
extern void func_80029124();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800D1724();

extern void func_80146994();
extern void func_80171990();
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
extern u8 D_sc03_089_8018D3D4;
extern void func_8001D0E8();
extern u8 D_sc03_089_8018D430;
extern u8 D_sc03_089_8018D4A4;
extern void func_8012B2CC();
extern void func_8013B7AC();
extern void (*D_sc03_089_801A3ADC[])();
extern void func_sc03_089_80184CBC();
extern void func_8012CBF4();
extern s32 func_80013478();
extern s16 D_80126CBA;
extern s32 func_8012BE54();
extern s32 func_sc03_089_80184D28();
extern s32 func_8012BEE8();
extern void func_8012E88C();
extern void func_8002A04C();
extern void func_8012B200();
extern void func_8012E8A8();
extern u8 D_sc03_089_801A3B08;
extern s32 func_8012D5E4();
extern u8 D_80078EC1;
extern void func_sc03_089_80185144();
extern void func_sc03_089_8018549C();
extern void func_sc03_089_8018545C();
extern u8 D_sc03_089_801A3BA0;
extern void func_80017274();

extern u8 D_80126B58;

extern s32 func_8012BD14();
extern void func_80016714();


extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_089_801A19EC[];
extern u8 D_sc03_089_801A1750;
extern u8 D_sc03_089_801A1810;
extern u8 D_sc03_089_801A1898;
extern u8 D_sc03_089_801A1958;
extern u8 D_sc03_089_801A1A3C;
extern u8 D_sc03_089_801A1A60;
extern u8 D_sc03_089_801A1A4C;
extern u8 D_sc03_089_801A1A58;
extern void func_8012C098();

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8017C218);

void func_sc03_089_8017C524(u8 *arg0) {
    D_sc03_089_8018D090[AF(arg0, u16, 2)]();
}

void func_sc03_089_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_089_8017C5A0(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C610(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C69C(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_089_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_089_8017C7C4(u8 *arg0) {
    D_sc03_089_8018D0A4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8017C800);

void func_sc03_089_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_089_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8017C910);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8017CA80);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8017D960);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80180D88);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80180DC8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80180E08);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80180E48);

void func_sc03_089_80180E88(u8 *arg0) {
    D_sc03_089_8018D2D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80180EC4(u8 *arg0) {
    func_sc03_089_801812B4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_80180F08(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_089_80180F2C(u8 *arg0) {
    D_sc03_089_8018D2E0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80180F68(u8 *arg0) {
    func_sc03_089_801812DC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_80180FA8(u8 *arg0) {
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

void func_sc03_089_80181024(void) {
    func_800D1EBC();
}

void func_sc03_089_80181044(u8 *arg0) {
    D_sc03_089_8018D2EC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80181080(u8 *arg0) {
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

void func_sc03_089_801810F4(u8 *arg0) {
    D_sc03_089_8018D2F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80181130(u8 *arg0) {
    func_sc03_089_80181410();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_80181174(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_80171990((s32) &D_80126B58);
        return 1;
    }
    return 0;
}

void func_sc03_089_801811B4(u8 *arg0) {
    D_sc03_089_8018D300[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_801811F0(u8 *arg0) {
    func_sc03_089_80181510();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_8018122C(void) {
    return 0;
}

s32 func_sc03_089_80181234(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_089_80181294(void) {
    func_800D1EBC();
}

void func_sc03_089_801812B4(void) {
    func_8016EE40((s32) &D_sc03_089_8018D310, 0x01000000);
}

void func_sc03_089_801812DC(void) {
    func_8016EE40((s32) &D_sc03_089_8018D314, 0x01000000);
}

void func_sc03_089_80181304(u8 *arg0) {
    D_sc03_089_8018D328[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80181340);

void func_sc03_089_80181388(void) {
}

void func_sc03_089_80181390(s32 arg0) {
    func_80146994(0x1A, arg0, 0x06E706E8, 0);
    func_80171990(arg0);
}

void func_sc03_089_801813D4(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        func_80171928(arg0);
    }
}

void func_sc03_089_80181410(void) {
    func_8016EE40((s32) &D_sc03_089_8018D320, 0x01000000);
}

void func_sc03_089_80181438(u8 *arg0) {
    D_sc03_089_8018D340[AF(arg0, u8, 0x216)]();
}

void func_sc03_089_80181474(s32 arg0) {
    func_80171990();
    func_80146994(0x19, arg0, 0x06920693, 0);
    func_sc03_089_801814BC(arg0);
}

s32 func_sc03_089_801814BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = func_8014C050(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_sc03_089_80181510(void) {
    func_8016EE40((s32) &D_sc03_089_8018D338, 0x01000000);
}

void func_sc03_089_80181538(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xA6;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x41;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_801815D4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_8018166C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xA6;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x41;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 2);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_80181708(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 3);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_801817A4(s32 arg0) {
    D_sc03_089_8018D348[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801817E0);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018188C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80181A68);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80181B14);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80181BCC);

void func_sc03_089_80181D64(void) {
}

s32 func_sc03_089_80181D6C(s32 arg0) {
    return func_8013B7F4(D_sc03_089_8018D368[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80181D9C);

void func_sc03_089_80181EE8(u8 *arg0) {
    D_sc03_089_8018D3BC[AF(arg0, u16, 2)]();
}

void func_sc03_089_80181F24(u8 *arg0) {
    D_sc03_089_8018D408[AF(arg0, u16, 2)]();
}

void func_sc03_089_80181F60(u8 *arg0) {
    D_sc03_089_8018D4AC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80181F9C);

void func_sc03_089_801820A8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_089_8018D3D4) != 0) {
        SetScript(arg0, (s32) &D_sc03_089_80189990);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x104, 0xDC);
    }
}

void func_sc03_089_8018210C(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + AF(arg0, u16, 0x12));
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 4);
    }
}

void func_sc03_089_80182150(u8 *arg0) {
    if (func_8012C354((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 0x34) + &D_sc03_089_8018D430)) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_089_8018D4A4);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        func_8012B2CC((s32) arg0);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x1E0, 0x12C);
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801821DC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801822A8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801822C8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80182560);

void func_sc03_089_801826E8(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1750);
        SetScript(arg0, &D_sc03_089_801A1810);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1898);
        SetScript(arg0, &D_sc03_089_801A1958);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_089_801A1A3C;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A1A60;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_089_801A1714;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1750);
        SetScript(arg0, &D_sc03_089_801A1810);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1898);
        SetScript(arg0, &D_sc03_089_801A1958);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1A4C);
        SetScript(arg0, &D_sc03_089_801A1A58);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1750);
        SetScript(arg0, &D_sc03_089_801A1810);
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

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80182B94);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80182D28);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801830D8);

void func_sc03_089_801831C4(u8 *arg0) {
    D_sc03_089_801A1B1C[AF(arg0, u16, 2)]();
}

void func_sc03_089_80183200(u8 *arg0) {
    D_sc03_089_801A1BD0[AF(arg0, u16, 2)]();
}

void func_sc03_089_8018323C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_089_80183254(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_089_801A1650) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_089_801A1630;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_089_80189990);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_089_801832F8(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_089_80183314(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_089_801A1714) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_089_801A1630;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_089_80189990, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183398);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801833D4);

void func_sc03_089_80183404(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183488);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018354C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018362C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018369C);

void func_sc03_089_80183778(void) {
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183780);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183838);

void func_sc03_089_801838FC(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183950);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801839CC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183AB0);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183B7C);

void func_sc03_089_80183C54(u8 *arg0) {
    D_sc03_089_801A3A50[AF(arg0, u16, 2)]();
}

void func_sc03_089_80183C90(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8013B7AC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 3);
    AF(arg0, s32, 0xCC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183CE8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183EBC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183F14);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183F60);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80183FA4);

void func_sc03_089_80183FE8(void) {
}

void func_sc03_089_80183FF0(u8 *arg0) {
    s32 temp_v0;

    D_sc03_089_801A3ADC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE4) + 1;
        AF(arg0, s32, 0xE4) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_089_80184CBC((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018406C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184138);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801841E8);

void func_sc03_089_80184330(s32 arg0, s32 arg1) {
    func_8012CBF4(arg0, arg1);
    if (func_80013478(arg0 + 4, arg0 + 0x88) < 0x101) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_089_80184384(s32 arg0) {
    if ((func_8012BE54(arg0) <= 0x40000) && (D_80126CBA == 0) && (func_sc03_089_80184D28(arg0) == 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801843E4);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801844C8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184730);

void func_sc03_089_80184880(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 2) = 9;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x34) = 0;
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801848AC);

void func_sc03_089_80184A08(s32 arg0, s32 arg1) {
    void *temp_a0;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        temp_a0 = AF(arg0, void *, 0xCC);
        if (temp_a0 != NULL) {
            AF(temp_a0, s16, 0xFC) = 0;
        }
    }
}

void func_sc03_089_80184A58(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_089_80184A74(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

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
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0xFFEF);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 0x1000;
        AF(temp_v1_3, s16, 0x1A) = 0x1000;
        AF(temp_v1_3, s16, 0x18) = 0x1000;
        func_8012B200(arg0);
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184B30);

s32 func_sc03_089_80184B80(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_089_801A3B08, (s32) (&D_sc03_089_801A3B08 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184BAC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184C7C);

void func_sc03_089_80184CBC(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

s32 func_sc03_089_80184D28(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_089_80184D40(u8 *arg0) {
    D_sc03_089_801A3B88[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184D7C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184E54);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80184F98);

void func_sc03_089_80185098(u8 *arg0) {
    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_sc03_089_80185144((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C((s32) arg0);
        func_sc03_089_8018549C(AF(arg0, s32, 0xCC));
        AF(arg0, s32, 4) = (s32) AF(AF(arg0, void *, 0x64), s32, 4);
        AF(arg0, s32, 8) = (s32) AF(AF(arg0, void *, 0x64), s32, 8);
        AF(arg0, s32, 0xC) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xC);
        func_8012B2CC((s32) arg0);
        func_sc03_089_8018545C((s32) arg0);
    }
}

void func_sc03_089_80185144(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_089_8018517C(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_089_801A3BA0, (s32) (&D_sc03_089_801A3BA0 + 8), 5);
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801851A8);

void func_sc03_089_8018545C(s32 arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0x19);
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    }
}

void func_sc03_089_8018549C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_089_801854BC(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801854DC);

void func_sc03_089_80185580(u8 *arg0) {
    D_sc03_089_801A3D00[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801855BC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80185678);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801857A8);

void func_sc03_089_80185880(u8 *arg0) {
    D_sc03_089_801A3D10[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801858BC);

void func_sc03_089_80185C58(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x40);
    if ((func_8012CBCC((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_80017274((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80185CCC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80185E50);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186074);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186428);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186668);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801868D0);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186A78);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186CC4);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186E10);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80186EC8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018701C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801870C8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80187178);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80187260);

void func_sc03_089_8018737C(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018745C);

void func_sc03_089_80187534(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_089_8018759C(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801875D8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018767C);

void func_sc03_089_8018773C(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_089_801A663C);
}

void func_sc03_089_80187770(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_089_801877CC(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_089_80187804(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2B38, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80187860);

void func_sc03_089_80187938(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2B38);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801879CC);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80187A98);

void func_sc03_089_80187B70(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2920);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_089_801A6658 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_089_80187C0C(u8 *arg0) {
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

void func_sc03_089_80187C64(void) {
}

void func_sc03_089_80187C6C(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_089_801A68F0, (s32) &D_sc03_089_801A68F8) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_089_801B33E0);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_089_801B3B60);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_089_80187D0C(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_089_801B3B60);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_089_80187D60(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_089_801A68F0, (s32) &D_sc03_089_801A68F8) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_089_801B3720);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_089_801B3FD0);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80187DF4);

void func_sc03_089_80187E3C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_089_80187E64(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80187EB0);

void func_sc03_089_80187F9C(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80188020);

void func_sc03_089_8018812C(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_089_80188164(u8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801881D0);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80188428);

void func_sc03_089_8018847C(u8 *arg0) {
    D_sc03_089_801C3C2C[AF(arg0, u16, 2)]();
}

void func_sc03_089_801884B8(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_089_801C3B90;
    func_sc03_089_801887E8(temp_s1, (s32) temp_s2);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) - 4);
        temp_v0 = AF(temp_s2, u16, 4) + 1;
        AF(temp_s2, u16, 4) = temp_v0;
        if ((s16) temp_v0 >= 0x30) {
            AF(temp_s2, u16, 4) = 0x10U;
        }
    } else {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) + 4);
        temp_v0_2 = AF(temp_s2, u16, 4) - 1;
        AF(temp_s2, u16, 4) = temp_v0_2;
        if ((s16) temp_v0_2 < 0x11) {
            AF(temp_s2, u16, 4) = 0x30U;
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801885A4);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80188664);

void func_sc03_089_801886B4(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s1;

    temp_v0 = AF(arg0, s16, 0x70);
    temp_s1 = AF(arg0, void *, 0x20);
    if (!(temp_v0 & 0x8000)) {
        if (temp_v0 & 0x2000) {
            if (temp_v0 & 0x1000) {
                AF(arg0, s16, 0x70) = (s16) (temp_v0 & 0xDFFF);
                func_8002D4C8(0x701, 0);
                goto block_4;
            }
        } else {
block_4:
            temp_v0_2 = AF(temp_s1, s16, 0x18);
            if (temp_v0_2 < 0x800) {
                AF(temp_s1, s16, 0x18) = (s16) (temp_v0_2 + 0x40);
                AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) + 0x40);
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_089_801885A4((s32) arg0, 0x30) != 0)) {
                func_sc03_089_80188428((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_089_801884B8((s32) arg0);
        }
    }
}

void func_sc03_089_8018879C(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_089_801884B8(arg0);
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801887E8);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80188C04);

void func_sc03_089_80189124(void) {
}

void func_sc03_089_8018912C(u8 *arg0) {
    D_sc03_089_801C3D18[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80189168);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018935C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_8018940C);

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_801894BC);

void func_sc03_089_8018956C(void) {
}

INCLUDE_ASM("asm/stg/sc03_089/nonmatchings/sc03_089", func_sc03_089_80189574);
