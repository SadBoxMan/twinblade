#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_000_8017BE9C(void) {
}

void func_sc02_000_8017BEA4(void) {
}

void func_sc02_000_8017BEAC(void) {
}

void func_sc02_000_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc02_000_8018E614[])();
extern void func_80147324();
extern void func_sc02_000_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc02_000_8018E628[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc02_000_8018E63C[])();
extern void func_800D22E4();
extern void func_sc02_000_8017C910();
extern void (*D_sc02_000_8018E65C[])();
extern void (*D_sc02_000_8018E664[])();
extern u8 D_sc02_000_8018E650;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_sc02_000_801803D0();
extern void func_sc02_000_80181D2C();
extern void (*D_sc02_000_8018EA0C[])();
extern void (*D_sc02_000_8018EAC4[])();
extern void (*D_sc02_000_8018EACC[])();
extern void (*D_sc02_000_8018EAD8[])();
extern s32 func_800167F0();
extern void (*D_sc02_000_8018EAE0[])();
extern void (*D_sc02_000_8018ED20[])();
void func_sc02_000_801824E0(u8 *arg0);
extern void (*D_sc02_000_8018ED38[])();
void func_sc02_000_801826C4(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_000_8018ED5C[])();
void func_sc02_000_80182D00(u8 *arg0);
extern void (*D_sc02_000_8018EDA0[])();
void func_sc02_000_80183238(u8 *arg0);
extern void (*D_sc02_000_8018EDC0[])();
void func_sc02_000_80183718(u8 *arg0);
extern void (*D_sc02_000_8018F2E0[])();
extern void (*D_sc02_000_8018F2E8[])();
extern void (*D_sc02_000_8018F2F4[])();
extern void (*D_sc02_000_8018F2FC[])();
extern void (*D_sc02_000_8018F31C[])();
extern void (*D_sc02_000_8018F394[])();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc02_000_8018AF28;
extern u8 D_sc02_000_801DCA30;
extern void (*D_sc02_000_8018F3AC[])();
extern void (*D_sc02_000_8018F3C4[])();
extern void (*D_sc02_000_8018F3D4[])();
extern void (*D_sc02_000_8018F460[])();
extern void (*D_sc02_000_8018F46C[])();
extern void (*D_sc02_000_8018F540[])();
extern void (*D_sc02_000_8018F558[])();
extern void (*D_sc02_000_8018F590[])();
extern void (*D_sc02_000_8018F598[])();
extern void (*D_sc02_000_8018F5A0[])();
extern void (*D_sc02_000_8018F5BC[])();
extern void (*D_sc02_000_8018F6C4[])();
extern void (*D_sc02_000_8018F714[])();
extern void (*D_sc02_000_8018F724[])();
extern void (*D_sc02_000_801A7818[])();
extern void (*D_sc02_000_801A782C[])();
extern void (*D_sc02_000_801A7B28[])();

void func_sc02_000_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_000_8017BEF8(u8 *arg0) {
    D_sc02_000_8018E614[AF(arg0, u16, 2)]();
}

void func_sc02_000_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017BFE0(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C064(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_000_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern s32 D_sc02_000_801E8668;
extern s32 func_8012C588();

extern u8 D_sc02_000_8018E6EC;
extern u8 D_sc02_000_801A6F44;
extern void func_8012B2CC();
extern void func_8012B23C();
extern s32 func_8012B14C();
extern u8 D_sc02_000_8018E6F8;
extern u8 D_sc02_000_801A73BC;
extern s32 func_8002D4C8();
extern void func_8012E364();
extern s32 func_8012E470();
extern void func_8012E4C8();
extern s32 func_8012BEE8();
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
extern s32 D_801269E4;
extern s8 D_801269E8;
extern u16 D_80126B5E;
extern u16 D_801274E8;
extern s32 func_80129CF8();
extern s32 D_sc02_000_801E8770;
extern void func_8016EDEC();
extern void func_800167B8();
extern u8 D_800D5A34;
extern s32 func_800CF854();
extern void func_80154274();
extern void func_80146994();
extern s32 func_8014C050();
extern s32 func_8013767C();
extern s32 func_801399F0();
extern void func_80139914();
extern void func_80165770();
extern void func_80175414();
extern void func_80171B44();
extern void func_sc02_000_80182744();
extern void (*D_sc02_000_8018ED44[])();
extern s32 func_8001AAA0();
extern void func_80175454();
extern void func_sc02_000_801818C0();
extern u8 D_sc02_000_8018EC34;
extern u8 D_sc02_000_8018ED10;
extern void func_sc02_000_80182BD0();
extern void func_sc02_000_80182CB4();
extern s32 func_8001B23C();
extern void func_801599A4();
extern void func_sc02_000_80181914();
extern u8 D_800D4744;
extern u8 D_sc02_000_801A7F50;
extern u8 D_sc02_000_801A7FF0;
extern void func_80142454();
extern void func_sc02_000_80185E88();
extern void func_801466F0();
extern void func_80154150();
extern void func_801477E8();
extern s32 D_80126984;
extern s32 D_80126990;
extern u8 D_sc02_000_8018ED88;
extern s32 func_8013C9C4();
extern void func_80147AD4();
extern void func_801473EC();
extern void func_80172414();
extern void func_80146D90();
extern void func_sc02_000_80185F24();
extern void func_sc02_000_80185F58();
extern s16 D_800B9ABA;
extern u8 D_sc02_000_8018EA90;
extern s32 func_sc02_000_80188F08();
extern void func_8016F094();
extern void func_800D1744();
extern void func_sc02_000_80183B64();
extern void func_sc02_000_80181CE0();
extern void func_sc02_000_80183C94();
extern s32 func_80146E98();
extern void func_80146E90();
extern void func_80146DE8();
extern void func_80146CA0();
extern void func_80162FF4();
extern void func_80162FC0();
extern void func_80162CCC();
extern void (*D_sc02_000_8018F1B4[])();
extern void func_8013D064();
extern u8 D_sc02_000_8018EDDC;
extern u8 D_sc02_000_801B9230;
extern s32 D_sc02_000_801E8754;
extern s32 D_sc02_000_801E8820;
extern void func_80036D58();
extern s32 func_sc02_000_8018623C();
extern void func_sc02_000_80185E00();
extern void func_sc02_000_80181934();
extern s32 func_sc02_000_8018621C();
extern void func_sc02_000_8018483C();
extern s32 D_sc02_000_801E873C;
extern s32 D_sc02_000_801E8750;
extern void func_8013D164();
extern u8 D_sc02_000_8018F210;
extern u8 D_sc02_000_8018F288;
extern void func_8001CA1C();
extern void func_8012C218();
extern void func_8012AD80();
extern s32 func_8013BD34();
extern s32 D_sc02_000_801E8010;
extern u8 D_sc02_000_8018F39C;
extern u8 D_sc02_000_801E0294;
extern void func_8001D0E8();
extern void func_8012B200();
extern s32 func_8012CBCC();
extern void func_80143B6C();
extern u8 D_sc02_000_801E10B4;
extern u8 D_sc02_000_801E14AC;
extern void func_8012AD44();
extern s32 func_80128ED8();
extern void func_801292C8();
extern u8 D_sc02_000_8018F5C4;
extern u8 D_sc02_000_8018F684;
extern u8 D_sc02_000_801E8830;
extern s32 func_sc02_000_8018A3C8();
extern void func_800233CC();
extern void func_sc02_000_8018A550();
extern void func_8012AD50();
extern s32 func_sc02_000_8018A3FC();
extern s16 D_800B9A0E;
extern s32 func_8012E544();
extern s16 D_sc02_000_8018F71E;
extern void func_sc02_000_80189C6C();
extern void func_sc02_000_80189D10();
extern u8 D_sc02_000_801A7AD4;

extern u8 D_sc02_000_8018F560;
extern void func_8001CB6C();

extern u8 D_sc02_000_8018EFDC;
extern u8 D_sc02_000_801DF700;
extern u8 D_sc02_000_8018F5A4;
extern u8 D_sc02_000_801AFAC8;

extern u8 D_sc02_000_801A668C;
extern u8 D_sc02_000_801A72C4;
extern u8 D_8012694C;
extern void func_sc02_000_80181AD4();
extern s8 D_80126D6C;
extern u8 D_80126B58;
extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern s32 func_8012E504();

extern u8 D_sc02_000_8018E704;
extern void func_8001BFD0();
extern void func_800D0C48();
s32 func_sc02_000_801831A8(s32 arg0, s32 arg1);
extern u16 D_800B99DC;
extern u8 D_sc02_000_8018B358;
extern s32 func_sc02_000_80185C48();
extern void func_sc02_000_80187354();
extern void func_sc02_000_80187480();
extern s32 D_sc02_000_801E8778;
extern s32 D_sc02_000_801E877C;

extern u8 D_sc02_000_801A6E7C;
extern void func_80143CD4();
extern void func_800CB0E8();
extern u8 D_sc02_000_8018E78C;
extern void func_80130740();

extern void func_sc02_000_80183A78();

extern s32 func_8012CBF4();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc02_000_801A7804;
extern u8 D_sc02_000_801A7810;
extern s32 func_80132EF4();

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017C218);

void func_sc02_000_8017C524(u8 *arg0) {
    D_sc02_000_8018E628[AF(arg0, u16, 2)]();
}

void func_sc02_000_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8017C5A0(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C610(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C69C(u8 *arg0) {
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
    func_sc02_000_8017C218((s32) arg0);
}

void func_sc02_000_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_000_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_000_8017C7C4(u8 *arg0) {
    D_sc02_000_8018E63C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017C800);

void func_sc02_000_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_000_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017C910);

void func_sc02_000_8017CA80(u8 *arg0) {
    D_sc02_000_8018E65C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017CABC);

void func_sc02_000_8017CC80(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc02_000_8017CD14(u8 *arg0) {
    D_sc02_000_8018E664[AF(arg0, u16, 2)]();
}

void func_sc02_000_8017CD50(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_000_8018E650, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc02_000_8017CDF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017CE58);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017D230);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017D2D4);

s32 func_sc02_000_8017D4CC(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017D538);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017E404);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017E51C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017E5AC);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017E6D8);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017E958);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017EA84);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017F390);

void func_sc02_000_8017F5A0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc02_000_801A668C);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc02_000_8017F5E4(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 3;
    SetScript(arg0, (s32) &D_sc02_000_801A72C4);
    AF(arg0, s32, 0x1C) = 0x1E;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017F62C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017F950);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017FB24);

void func_sc02_000_8017FC9C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017FCB0);

s32 func_sc02_000_8017FD2C(s32 arg0) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
    return 6;
}

void func_sc02_000_8017FD44(s32 arg0) {
    u16 temp_a1;

    AF(arg0, s16, 2) = 5;
    temp_a1 = AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    if (((s32) (temp_a1 << 0x10) >> 0x18) == 5) {
        AF(arg0, u16, 0x70) = (u16) ((temp_a1 & 0xFF) | 0x100);
    }
}

s32 func_sc02_000_8017FD80(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc02_000_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    temp_v0 = func_8012B14C(arg0, (s32) &D_sc02_000_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return temp_v0;
}

s32 func_sc02_000_8017FDE8(s32 arg0) {
    AF(arg0, u8, 0xC1) = 7;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc02_000_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_000_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return func_8012B14C(arg0, (s32) &D_sc02_000_8018E6F8);
}

s32 func_sc02_000_8017FE68(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc02_000_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_000_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFDC0000);
    func_8012B14C(arg0, (s32) &D_sc02_000_8018E704);
    func_8012B2CC(arg0);
    return func_8002D4C8(0x6AA, 0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8017FF18);

void func_sc02_000_801801EC(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    SetScript(arg0, (s32) &D_sc02_000_801A6E7C);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4(arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8(arg0);
    AF(arg0, u8, 0xC1) = 6;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80180264);

void func_sc02_000_80180394(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc02_000_801803B0(s32 arg0) {
    func_sc02_000_801803D0(arg0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801803D0);

s32 func_sc02_000_80180428(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 2;
    temp_v0 = SetScript(arg0, (s32) &D_sc02_000_801A73BC);
    AF(arg0, u8, 0x102) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018046C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801806E4);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80180878);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801808C4);

void func_sc02_000_80180A18(s32 arg0) {
    func_80130740(arg0, (s32) &D_sc02_000_8018E78C);
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s16, 2) = 0xF;
    AF(arg0, s16, 0x5C) = 0;
}

s32 func_sc02_000_80180A64(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    SetScript(arg0, (s32) &D_sc02_000_801A6F44);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x100;
    return func_8002D4C8(0x436, 0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80180AD4);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80180D6C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018127C);

void func_sc02_000_80181498(void) {
    func_8012E364();
}

void func_sc02_000_801814B8(s32 arg0) {
    if (func_8012E470() != 0) {
        func_8012E4C8(arg0);
    }
}

void func_sc02_000_801814F0(s32 arg0, s32 arg1, s32 arg2) {
    func_8012BEE8(arg0, arg1, arg2);
    if (AF(arg0, s32, 0x1C) == 1) {
        SetScript(arg0, (s32) &D_sc02_000_801A6F44);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80181538);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801815F4);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80181698);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018173C);

void func_sc02_000_80181820(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x80;
    D_8012696A = 0x200;
    D_80126976 = 0x50;
    D_8012696C = 0;
    D_80126978 = -0xC8;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_000_80181D2C, 0);
    func_sc02_000_80181D2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc02_000_801818C0(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x12C;
    D_80126968 = -0x80;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
}

void func_sc02_000_80181914(void) {
    D_8012694C += 1;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80181934);

void func_sc02_000_801819F4(void) {
    D_80126954 = 0x64;
    D_8012695C = 0x190;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = 0xC8;
    D_801269E4 = 0;
    D_801269E8 = 0;
    D_801274E8 = D_80126B5E;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
}

void func_sc02_000_80181A94(void) {
    func_sc02_000_80181AD4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc02_000_80181D2C((s32) &D_80126948);
}

void func_sc02_000_80181AD4(s32 arg0) {
    D_801274E8 = D_80126B5E;
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x190;
    AF(arg0, s16, 0x20) = 0x80;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x30) = -0x80;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x32) = -0xC8;
    AF(arg0, s32, 0x9C) = 0;
    AF(arg0, u8, 0xA0) = 0;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
}

s32 func_sc02_000_80181B4C(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x190;
    D_80126968 = 0x80;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = -0xC8;
    D_801269E4 = 0;
    D_801269E8 = 0;
    D_801274E8 = D_80126B5E;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
    D_80126968 = 0x120;
    func_8012A094((s32) &D_80126948);
    return func_80129CF8();
}

void func_sc02_000_80181C10(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x190;
    D_80126968 = 0x80;
    D_8012696A = 0x800;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = -0xC8;
    D_801269E4 = 0;
    D_801269E8 = 0;
    D_801274E8 = D_80126B5E;
    func_8012A018((s32) func_sc02_000_80181D2C, 2);
    D_80126954 = 0x96;
    D_8012695C = 0x64;
    D_80126968 = 0x120;
    D_80126978 = -0x60;
}

void func_sc02_000_80181CE0(arg0)
    s32 arg0;
{
    D_8012695C = 0x50;
    D_80126968 = 0x71;
    D_80126978 = -0x80;
}

void func_sc02_000_80181D0C(void) {
    D_80126968 = 0x200;
    D_80126978 = -0x1C0;
}

void func_sc02_000_80181D2C(s32 arg0) {
    D_sc02_000_8018EA0C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80181D68);

void func_sc02_000_80181DE0(void) {
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80181DE8);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80181E70);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182058);

void func_sc02_000_80182154(u8 *arg0) {
    D_sc02_000_8018EAC4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182190(u8 *arg0) {
    D_sc02_000_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_000_801824E0, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801821E8);

void func_sc02_000_80182234(u8 *arg0) {
    D_sc02_000_8018EACC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182270(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_000_801826C4, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801822BC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc02_000_80182338(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc02_000_8018235C(u8 *arg0) {
    D_sc02_000_8018EAD8[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182398(u8 *arg0) {
    D_sc02_000_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_000_80183238, 0x0B000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801823F0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_000_80182414(u8 *arg0) {
    D_sc02_000_8018EAE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_000_80182450(u8 *arg0) {
    D_sc02_000_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_000_80183718, 0x0B000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_000_801824A8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc02_000_801824CC(s32 arg0, s32 arg1) {
    D_sc02_000_801E8770 = 1;
    return 1;
}

void func_sc02_000_801824E0(u8 *arg0) {
    D_sc02_000_8018ED20[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_8018251C(s32 arg0) {
    if (func_800CF854(arg0) != 0) {
        AF(arg0, u8, 0x214) = 5U;
        return;
    }
    func_80154274(arg0, (s32) &D_800D5A34);
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_8018258C(void) {
}

void func_sc02_000_80182594(s32 arg0) {
    func_80146994(0x1A, arg0, 0x04CC04CD, 0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_000_801825E0(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182630(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_8018268C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc02_000_801826C4(u8 *arg0) {
    D_sc02_000_8018ED38[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80182700(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
    func_sc02_000_80182744((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182744);

void func_sc02_000_801827A0(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_000_801827C0(u8 *arg0) {
    s16 temp_v0;

    if (AF(arg0, s16, 0x20E) < 0) {
        if (func_8001AAA0(0x13) != 0) {
            AF(arg0, s16, 0x20E) = 0;
        }
    }
    if (AF(arg0, s16, 0x20E) > 0) {
        temp_v0 = AF(arg0, s16, 0x20E) - 1;
        AF(arg0, s16, 0x20E) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            AF(arg0, s16, 0x20E) = -1;
        }
    }
    D_sc02_000_8018ED44[AF(arg0, u8, 0x214)](arg0);
}

void func_sc02_000_80182854(u8 *arg0) {
    func_80175454();
    func_sc02_000_801818C0();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182894);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182964);

void func_sc02_000_801829F8(u8 *arg0) {
    func_sc02_000_80182BD0();
    if (AF(arg0, u16, 0xB8) & 0x800) {
        func_80147324(0x4C8);
    }
    if (AF(arg0, u16, 0xB8) & 0x1000) {
        func_80147324(0x4C9);
    }
    if (AF(arg0, u16, 0xB8) & 0x2000) {
        AF(arg0, s16, 0x20E) = 1;
        AF(arg0, u8, 0x20C) = 2;
    }
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, u16, 0xD4) = (u16) (AF(arg0, u16, 0xD4) + 1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc02_000_80182CB4((s32) arg0);
        func_80154274((s32) arg0, (s32) &D_sc02_000_8018EC34);
        StartFaceScript((s32) arg0, (s32) &D_sc02_000_8018ED10);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182AE4(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    if (temp_v1 & 0x2000) {
        ClearDisplayFlag20((s32) arg0);
        func_80147324(0x445);
    } else if (temp_v1 & 0x4000) {
        AF(arg0, u16, 0xD4) = (u16) (AF(arg0, u16, 0xD4) + 1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
    }
}

void func_sc02_000_80182B74(s32 arg0) {
    if (func_8001B23C(0) != 0) {
        func_8016F0E4(arg0);
        func_801599A4(arg0);
        ClearDisplayFlag20(arg0);
        func_8016EDEC((s32) func_sc02_000_80182D00, 0x01000000);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182BD0);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182CB4);

void func_sc02_000_80182D00(u8 *arg0) {
    D_sc02_000_8018ED5C[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80182D3C(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x02000000);
    func_sc02_000_80181914();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182D84);

void func_sc02_000_80182E08(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x40;
        func_80154274((s32) arg0, (s32) &D_800D4744);
        AF(arg0, s32 *, 0xB0) = &D_sc02_000_801A7F50;
        AF(arg0, s32 *, 0xCC) = &D_sc02_000_801A7FF0;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182E84(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_sc02_000_801831A8(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(4, 0x4E0);
        AF(arg0, s32, 0x204) = 0x40;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182EEC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x10;
        func_80142454(-0x80);
        func_sc02_000_80185E88();
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80182F4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80182F78);

void func_sc02_000_80183010(void) {
}

void func_sc02_000_80183018(s32 arg0) {
    func_801466F0(3, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    func_80154150(arg0, 0xF);
    func_801477E8(arg0, 0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183098);

void func_sc02_000_8018316C(void) {
    if (D_80126984 >= 0x3E9) {
        D_80126984 -= 0x14;
        D_80126990 -= 0x14;
    }
}

s32 func_sc02_000_801831A8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x204) & 0xF;
    if (var_v0 == 0) {
        var_v0 = func_8013C9C4((s32) &D_sc02_000_8018ED88);
    }
    return var_v0;
}

void func_sc02_000_801831E4(void) {
    D_80126D6C = 8;
}

void func_sc02_000_801831F8(void) {
    func_8016F0E4((s32) &D_80126B58);
    func_8016EDEC((s32) func_sc02_000_80183238, 0x0B000000);
    func_80175414();
}

void func_sc02_000_80183238(u8 *arg0) {
    D_sc02_000_8018EDA0[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183274);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183310);

void func_sc02_000_801834EC(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    func_80172414(arg0);
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        func_80146D90(arg0);
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_80183574(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_000_80185F24();
        AF(arg0, s32, 0x204) = 0x30;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_801835C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x30;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_801835F8(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x132) = 0x800;
    if (!(AF(arg0, s32, 0x204) & 0xF)) {
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
    }
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_000_80185F58();
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_8018366C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_80147324(0xA52);
        func_80142454(-0x80);
        AF(arg0, s32, 0x204) = 1;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_000_801836C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s16, 0x132) = 0;
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
        func_8016F0E4((s32) arg0);
        func_8016EDEC((s32) func_sc02_000_80183718, 0x0B000000);
    }
}

void func_sc02_000_80183718(u8 *arg0) {
    D_sc02_000_8018EDC0[AF(arg0, u8, 0x214)]();
}

void func_sc02_000_80183754(s32 arg0) {
    func_sc02_000_80188F08();
    func_8016F094(arg0);
    if (func_800CF854() != 0) {
        AF(arg0, s32, 0x204) = 1;
    } else {
        AF(arg0, s32, 0x204) = 0;
    }
    AF(arg0, s32, 0x208) = 0;
    func_800D1744((s32) &D_sc02_000_8018EA90);
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, s32 *, 0xB0) = &D_sc02_000_801A7F50;
    AF(arg0, s32 *, 0xCC) = &D_sc02_000_801A7FF0;
    AF(arg0, s16, 0x132) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x03000000);
    D_800B9ABA = 0x1E0;
    func_sc02_000_80183B64(arg0);
    func_sc02_000_80181CE0();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_sc02_000_80183C94(arg0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183814);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801839C4);

void func_sc02_000_80183A78(s32 arg0) {
    AF(arg0, u8, 0x20C) = 0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183A80);

void func_sc02_000_80183B64(s32 arg0) {
    AF(arg0, s16, 0x20E) = (s16) (D_800A5E94 << 8);
    AF(arg0, s16, 0x210) = (s16) (D_800A5E95 << 8);
    AF(arg0, s16, 0x212) = (s16) (D_800A5E96 << 8);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183BA4);

void func_sc02_000_80183C94(s32 arg0) {
    AF(arg0, u8, 0x20C) = 0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183C9C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183D80);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183DD8);

void func_sc02_000_80183EB8(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146E90(arg0, 0x10);
        func_80146DE8(arg0, 0, 0x40000, 0);
        func_80146CA0(arg0);
    }
}

void func_sc02_000_80183F0C(s32 arg0) {
    func_80162FF4(arg0, 0, 0x1C000, 0);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80162CCC(arg0);
    }
}

void func_sc02_000_80183F64(u8 *arg0) {
    D_sc02_000_8018F1B4[AF(arg0, u16, 2)]();
    if ((u16) AF(arg0, u16, 2) >= 0xAU) {
        func_8013D064();
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80183FC8);

void func_sc02_000_80184164(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
}

void func_sc02_000_80184174(u8 *arg0) {
    AF(arg0, s16, 0xDC) = 0x5A;
    AF(arg0, s16, 0xDE) = 0x3C;
    AF(arg0, s16, 0xE0) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8018419C(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (AF(arg0, s16, 0xDE) != 0) {
        temp_v0 = AF(arg0, u16, 0xE0) - 1;
        AF(arg0, u16, 0xE0) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            func_8013C9C4((s32) &D_sc02_000_8018B358);
            AF(arg0, u16, 0xE0) = (u16) ((D_800B99DC & 7) + 3);
        }
        AF(arg0, s16, 0xDE) = (s16) ((u16) AF(arg0, s16, 0xDE) - 1);
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80184250);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80184358);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018453C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801847B8);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018483C);

void func_sc02_000_80184A08(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = D_sc02_000_801E8754 - 1;
    D_sc02_000_801E8754 = temp_v0;
    if (temp_v0 == -1) {
        func_80036D58(2);
    }
    temp_v0_2 = AF(arg0, u16, 0xDE) - 1;
    AF(arg0, u16, 0xDE) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        func_sc02_000_8018623C(0x4E1, 0);
    }
    temp_v0_3 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0_3;
    if ((temp_v0_3 << 0x10) == 0) {
        func_sc02_000_80185E00();
        SetScript((s32) arg0, (s32) &D_sc02_000_8018EDDC);
        D_sc02_000_801E8820 = 0x3E8;
        func_sc02_000_80181934();
        AF(AF(arg0, void *, 0x20), s16, 0x14) = -0x400;
        func_sc02_000_8018621C((s32) &D_sc02_000_801B9230);
        AF(arg0, s16, 0xA) = -0x3F4;
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xE) = 0x3C98;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_sc02_000_8018483C((s32) arg0);
}

void func_sc02_000_80184B00(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80184B14);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80184BD8);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018512C);

void func_sc02_000_801852E4(s32 arg0) {
    s16 temp_a1;

    temp_a1 = AF(arg0, s16, 0xE);
    if (temp_a1 >= 0x18F5) {
        AF(arg0, s16, 6) = 0;
        return;
    }
    if (temp_a1 < 0x150E) {
        AF(arg0, s16, 6) = 0x35;
        return;
    }
    AF(arg0, s16, 6) = (s16) (((0x18F3 - temp_a1) * 0x35) / 998);
}

void func_sc02_000_8018535C(void) {
}

void func_sc02_000_80185364(u8 *arg0) {
    AF(arg0, s16, 0xA) = -0x1B26;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x1C59;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018537C);

void func_sc02_000_801853D4(s32 arg0) {
    if (func_sc02_000_80185C48(arg0, 1) != 0) {
        func_8013C9C4((s32) &D_sc02_000_8018B358);
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x40000;
        AF(arg0, s32, 0x4C) = 0;
        func_sc02_000_80187354(arg0);
        func_sc02_000_8018623C(0x4D7, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_8018545C(s32 arg0) {
    if (func_sc02_000_80185C48(arg0, 1) != 0) {
        func_8013C9C4((s32) &D_sc02_000_8018B358);
        func_sc02_000_80187354(arg0);
        func_sc02_000_8018623C(0x4D7, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_801854C4(void) {
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801854CC);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801855D4);

void func_sc02_000_801857B0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xDC) = 0x10U;
        AF(arg0, s32, 0x18) = 0xFFFE0000;
        AF(arg0, s32, 0x4C) = -0x4000;
        AF(arg0, s16, 0xE2) = 2;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s16, 0xE0) = 0;
        D_sc02_000_801E873C = 1;
        D_sc02_000_801E8750 = 0;
        func_8013D164();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185840);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185910);

void func_sc02_000_80185B40(u8 *arg0) {
    D_sc02_000_8018F2E0[AF(arg0, u16, 2)]();
}

void func_sc02_000_80185B7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_000_8018F210);
    SetScript((s32) arg0, (s32) &D_sc02_000_8018F288);
    AF(arg0, s16, 0xDC) = 0xA;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80185BF0(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = -0x8000;
    AF(temp_v1, s16, 0x1A) = -0x8000;
    AF(temp_v1, s16, 0x18) = -0x8000;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185C48);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185D58);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185E00);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185E88);

void func_sc02_000_80185EC8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        func_8002D4C8(4, 0x4DF);
        AF(temp_v0, s16, 0xA) = -0x1B26;
        AF(temp_v0, s16, 0xE) = 0x1C59;
        AF(temp_v0, s16, 6) = 0;
        AF(temp_v0, s16, 2) = 0xE;
    }
}

void func_sc02_000_80185F24(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 0xF;
    }
}

void func_sc02_000_80185F58(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 0x13;
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80185F8C);

void func_sc02_000_801860A8(u8 *arg0) {
    D_sc02_000_8018F2E8[AF(arg0, u16, 2)]();
}

void func_sc02_000_801860E4(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801DF700);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    SetScript((s32) arg0, (s32) &D_sc02_000_8018EFDC);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s16, 0xDC) = 0x40;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_8018618C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    func_8012AD80(arg0, arg1);
    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801861D8);

s32 func_sc02_000_8018621C(s32 arg0) {
    return func_8013BD34();
}

s32 func_sc02_000_8018623C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = D_sc02_000_801E8010;
    if (var_v0 == 0) {
        var_v0 = func_8002D4C8(arg0 & 0xFFFF, arg1 & 0xFFFF);
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018626C);

void func_sc02_000_801863AC(u8 *arg0) {
    D_sc02_000_8018F2F4[AF(arg0, u16, 2)]();
}

void func_sc02_000_801863E8(u8 *arg0) {
    D_sc02_000_8018F2FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186424);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186530);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186764);

void func_sc02_000_801868D4(u8 *arg0) {
    D_sc02_000_8018F31C[AF(arg0, u16, 2)]();
}

void func_sc02_000_80186910(u8 *arg0) {
    D_sc02_000_8018F394[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018694C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801869CC);

void func_sc02_000_80186A64(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    func_8002D4C8(0x402, 0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186A9C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186AE4);

void func_sc02_000_80186C44(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801DCA30);
    SetScript(arg0, (s32) &D_sc02_000_8018AF28);
    AF(arg0, s16, 2) = 1;
}

void func_sc02_000_80186CAC(u8 *arg0) {
    D_sc02_000_8018F3AC[AF(arg0, u16, 2)]();
}

void func_sc02_000_80186CE8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801E0294);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xDC, 0xB8);
    AF(arg0, s32 *, 0x58) = &D_sc02_000_8018F39C;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xC00);
    SetScript((s32) arg0, (s32) &D_sc02_000_8018AF28);
    func_8012B200((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186D88);

void func_sc02_000_80186E30(u8 *arg0) {
    D_sc02_000_8018F3C4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80186E6C);

void func_sc02_000_80186F44(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), s16, 0xE) - 0x10) < AF(arg0, s16, 0xE)) {
        AF(arg0, s32, 0x18) = 0xFFDBC000;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0x12) = (s16) (0xF - (D_800B99DC & 0x1F));
        func_8002D4C8(0x4D8, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80186FDC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80187060(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_000_801870DC(u8 *arg0) {
    D_sc02_000_8018F3D4[AF(arg0, u16, 2)]();
}

void func_sc02_000_80187118(u8 *arg0) {
    s32 *var_a1;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    var_a1 = &D_sc02_000_801E14AC;
    if (AF(arg0, s16, 0x70) == 0) {
        var_a1 = &D_sc02_000_801E10B4;
    }
    func_8001C214(temp_v0, (s32) var_a1);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x140, 0xF0);
    SetScript((s32) arg0, (s32) &D_sc02_000_8018AF28);
    func_8012B200((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_801871B8(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), s16, 0xE) - 0x80) < AF(arg0, s16, 0xE)) {
        AF(arg0, s32, 0x18) = 0xFFDBC000;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0x12) = (s16) (0xF - (D_800B99DC & 0x1F));
        func_sc02_000_80187480();
        func_8002D4C8(0x4DA, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_80187254(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_801872D8(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187354);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187480);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187558);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018762C);

void func_sc02_000_801876FC(u8 *arg0) {
    D_sc02_000_8018F460[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187738);

void func_sc02_000_80187834(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x40);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_000_801878D0(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_000_8018794C(u8 *arg0) {
    D_sc02_000_8018F46C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187988);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187B40);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187DB8);

void func_sc02_000_80187EB4(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80187F30);

void func_sc02_000_80187FEC(u8 *arg0) {
    D_sc02_000_8018F540[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188028);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188134);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018825C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188414);

void func_sc02_000_80188484(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0xDC) - 1;
    AF(arg0, s32, 0xDC) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc02_000_801884B8(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s32, 0x48) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801884FC);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188680);

void func_sc02_000_801886DC(u8 *arg0) {
    D_sc02_000_8018F558[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188718(u8 *arg0) {
    D_sc02_000_8018F590[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188754(u8 *arg0) {
    D_sc02_000_8018F598[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188790);

void func_sc02_000_801888CC(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012AD44((s32) arg0, 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_801888F4);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188A18);

void func_sc02_000_80188AEC(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) (((rand() & 3) * 0xC) + &D_sc02_000_8018F560), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    AF(arg0, s32, 0x14) = (s32) ((rand() + 0xC000) * 2);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    AF(arg0, s32, 0x18) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188BAC);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188C0C);

void func_sc02_000_80188C9C(u8 *arg0) {
    D_sc02_000_8018F5A0[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188CD8(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_000_80188D18(u8 *arg0) {
    D_sc02_000_8018F5BC[AF(arg0, u16, 2)]();
}

void func_sc02_000_80188D54(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801AFAC8);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    SetScript((s32) arg0, (s32) &D_sc02_000_8018F5A4);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_000_80188DF0(void) {
}

void func_sc02_000_80188DF8(s32 arg0) {
    func_sc02_000_8018A3C8((s32) &D_sc02_000_801E8830);
    func_800233CC((s32) &D_sc02_000_8018F5C4, 0x20);
    func_800233CC((s32) (&D_sc02_000_8018F5C4 + 0x40), 0x20);
    func_800233CC((s32) (&D_sc02_000_8018F5C4 + 0x80), 0x20);
    func_sc02_000_8018A550((s32) &D_sc02_000_801E8830, (s32) &D_sc02_000_8018F684);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188E80);

void func_sc02_000_80188ECC(u8 *arg0) {
    D_sc02_000_8018F6C4[AF(arg0, u16, 2)]();
}

s32 func_sc02_000_80188F08(void) {
    return func_sc02_000_8018A3FC((s32) &D_sc02_000_801E8830);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188F30);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80188F60);

void func_sc02_000_80189304(u8 *arg0) {
    D_sc02_000_8018F714[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189340);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189750);

void func_sc02_000_801897E8(void) {
    s32 temp_v0;

    if ((D_sc02_000_801E8778 == 0) && (D_800B9A0E == 0)) {
        temp_v0 = D_sc02_000_801E877C + 1;
        D_sc02_000_801E877C = temp_v0;
        if (temp_v0 >= 0x10) {
            func_8002D4C8(0x106, 0);
            D_sc02_000_801E8778 = 1;
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189858);

s32 func_sc02_000_80189888(void) {
    return (s32) D_800B9A0E;
}

void func_sc02_000_80189898(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x338);
    if (temp_v0 != 0) {
        func_8012AD50(temp_v0);
    }
}

void func_sc02_000_801898C8(u8 *arg0) {
    D_sc02_000_8018F724[AF(arg0, u16, 2)]();
}

void func_sc02_000_80189904(s32 arg0) {
    func_sc02_000_80189C6C();
    func_sc02_000_80189D10(arg0);
    AF(arg0, s16, 0xFC) = 0;
    D_sc02_000_8018F71E = 1;
    func_8012AD50(arg0);
}

void func_sc02_000_80189950(void) {
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189958);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189A00);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189A70);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189B1C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189C6C);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189D10);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189DB8);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_80189E58);

void func_sc02_000_80189FD0(u8 *arg0) {
    D_sc02_000_801A7818[AF(arg0, u16, 2)]();
}

void func_sc02_000_8018A00C(u8 *arg0) {
    D_sc02_000_801A782C[AF(arg0, u16, 2)]();
}

void func_sc02_000_8018A048(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc02_000_801A7804);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc02_000_801A7810, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A128);

void func_sc02_000_8018A244(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_000_801A7AD4);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A2A0);

s32 func_sc02_000_8018A3C8(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = var_a0;
    AF(var_a0, s16, 2) = 0;
    AF(var_a0, s16, 0) = 0;
    do {
        AF(var_a0, s16, 4) = 0;
        AF(var_v1, s32, 0x14) = 0;
        var_v1 += 4;
        var_a1 += 1;
        temp_v0 = var_a1 < 8;
        var_a0 += 2;
    } while (temp_v0 != 0);
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A3FC);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A440);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A550);

void func_sc02_000_8018A640(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    AF(arg0, u8, 0) = arg1;
    AF(arg0, u8, 1) = arg2;
    AF(arg0, u8, 2) = arg3;
}

void func_sc02_000_8018A650(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    AF(arg0, u8, 4) = arg1;
    AF(arg0, u8, 5) = arg2;
    AF(arg0, u8, 6) = arg3;
}

s32 func_sc02_000_8018A660(s32 arg0, s32 arg1, s32 arg2) {
    D_sc02_000_801E8668 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A690);

INCLUDE_ASM("asm/stg/sc02_000/nonmatchings/sc02_000", func_sc02_000_8018A8D4);

void func_sc02_000_8018AB74(u8 *arg0) {
    D_sc02_000_801A7B28[AF(arg0, u16, 2)]();
}
