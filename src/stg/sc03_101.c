#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_101_8017BE9C(void) {
}

void func_sc03_101_8017BEA4(void) {
}

void func_sc03_101_8017BEAC(void) {
}

void func_sc03_101_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc03_101_801872E0[])();
extern void func_80147324();
extern void func_sc03_101_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_101_801872F4[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_101_80187308[])();
extern void func_800D22E4();
extern void func_sc03_101_8017C910();
extern void (*D_sc03_101_801873AC[])();
void func_sc03_101_8017DD60(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_101_801873B4[])();
void func_sc03_101_8017DD88(void);
extern void func_800D1EBC();
extern void (*D_sc03_101_801873C0[])();
extern void (*D_sc03_101_801873CC[])();
extern u8 D_sc03_101_801873DC;
extern void func_8016EE40();
extern u8 D_sc03_101_801873E0;
extern void (*D_sc03_101_801873EC[])();
extern u8 D_sc03_101_801873E4;
extern void func_sc03_101_8017DFE0();
extern void (*D_sc03_101_801873F4[])();
extern void func_sc03_101_8017E35C();
extern void (*D_sc03_101_80196940[])();
extern void (*D_sc03_101_801969F4[])();
extern void (*D_sc03_101_801988E8[])();
extern void (*D_sc03_101_8019AA38[])();
extern void (*D_sc03_101_8019AADC[])();
extern void (*D_sc03_101_8019B168[])();
extern void (*D_sc03_101_8019B2AC[])();

void func_sc03_101_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_101_8017BEF8(u8 *arg0) {
    D_sc03_101_801872E0[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_101_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017BFE0(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C064(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_101_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_101_8017DE88(void);
extern s32 func_sc03_101_8017DE34();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern s32 func_80171928();
extern s32 D_sc03_101_80187444[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_101_80183BF4;
extern u8 D_sc03_101_80196454;
extern u8 D_sc03_101_80196474;
extern s32 func_8012C354();
extern u8 D_sc03_101_80196538;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void (*D_sc03_101_8019AA0C[])();
extern void func_sc03_101_8018095C();
extern void func_sc03_101_80181FA8();
extern void func_8012B2CC();
extern void func_sc03_101_80181F30();
extern s32 func_sc03_101_80182178();
extern s8 D_sc03_101_8019DCF8;
extern s8 D_sc03_101_8019DCF9;
extern s8 D_sc03_101_8019DCFA;
extern void func_sc03_101_801809B0();
extern s32 func_8012C1B8();
extern s32 D_sc03_101_8019A9DC;
extern u8 D_sc03_101_8019AA28;
extern void func_8012CAE4();
extern void func_8001C2C4();
extern void func_8012AD50();
extern void func_sc03_101_801811C8();
extern u8 D_sc03_101_8019AA40;
extern void func_sc03_101_801814F8();
extern s32 func_sc03_101_801812B4();
extern void func_sc03_101_80181138();
extern void func_80029124();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800D1724();
extern u8 D_sc03_101_8019DE8C;
extern u16 D_sc03_101_8019DE84;
extern u16 D_sc03_101_8019DE86;
extern s16 D_sc03_101_8019DE88;
extern s16 D_sc03_101_8019DE8A;
extern s32 func_sc03_101_801820F0();
extern void func_sc03_101_8018201C();
extern void func_80015978();
extern s32 func_sc03_101_80182564();
extern s32 func_sc03_101_801828A8();
extern void func_sc03_101_8018278C();
extern s8 D_sc03_101_8019E0B4;
extern void func_sc03_101_80182EF8();

extern s16 D_sc03_101_8019DD84;

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

extern void func_80171990();
extern void func_80146994();
extern void (*D_sc03_101_80198A84[])();
extern u8 D_sc03_101_80198884;
extern void func_8001D0E8();
extern s32 func_8012AD44();
extern u8 D_sc03_101_8019A9C0;
extern void func_80178B18();
extern s32 func_sc03_101_801807F4();

extern u8 D_sc03_101_80195FF4;
extern s32 D_sc03_101_8019DCE8;
extern s32 D_sc03_101_8019DCEC;
extern s32 D_sc03_101_8019DCF0;
extern s32 D_sc03_101_8019DCF4;
extern s32 D_sc03_101_8019E19C;
extern s32 D_sc03_101_80187404[];
extern void func_sc03_101_8017E498();
extern void func_800183E0();

extern void func_sc03_101_80182658();

extern void func_8012B23C();
extern void func_8001CA1C();
extern SV8 D_sc03_101_80196810[];
extern u8 D_sc03_101_80196574;
extern u8 D_sc03_101_80196634;
extern u8 D_sc03_101_801966BC;
extern u8 D_sc03_101_8019677C;
extern u8 D_sc03_101_80196860;
extern u8 D_sc03_101_80196884;
extern u8 D_sc03_101_80196870;
extern u8 D_sc03_101_8019687C;

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017C218);

void func_sc03_101_8017C524(u8 *arg0) {
    D_sc03_101_801872F4[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_101_8017C5A0(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C610(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C69C(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_101_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_101_8017C7C4(u8 *arg0) {
    D_sc03_101_80187308[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017C800);

void func_sc03_101_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_101_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017C910);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017CA80);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017D960);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017D9A0);

void func_sc03_101_8017D9EC(u8 *arg0) {
    D_sc03_101_801873AC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DA28(u8 *arg0) {
    func_sc03_101_8017DD60();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_101_8017DA6C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_101_8017DA90(u8 *arg0) {
    D_sc03_101_801873B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DACC(u8 *arg0) {
    func_sc03_101_8017DD88();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_101_8017DB0C(u8 *arg0) {
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

void func_sc03_101_8017DB88(void) {
    func_800D1EBC();
}

void func_sc03_101_8017DBA8(u8 *arg0) {
    D_sc03_101_801873C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DBE4(u8 *arg0) {
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

void func_sc03_101_8017DC58(u8 *arg0) {
    D_sc03_101_801873CC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DC94(u8 *arg0) {
    func_sc03_101_8017DE88();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_101_8017DCD0(void) {
    return 0;
}

s32 func_sc03_101_8017DCD8(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D0C48(1);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_101_8017DD40(void) {
    func_800D1EBC();
}

void func_sc03_101_8017DD60(void) {
    func_8016EE40((s32) &D_sc03_101_801873DC, 0x01000000);
}

void func_sc03_101_8017DD88(void) {
    func_8016EE40((s32) &D_sc03_101_801873E0, 0x01000000);
}

void func_sc03_101_8017DDB0(u8 *arg0) {
    D_sc03_101_801873EC[AF(arg0, u8, 0x216)]();
}

void func_sc03_101_8017DDEC(s32 arg0) {
    func_80171990();
    func_80146994(0x19, arg0, 0x06960697, 0);
    func_sc03_101_8017DE34(arg0);
}

s32 func_sc03_101_8017DE34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = func_8014C050(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_sc03_101_8017DE88(void) {
    func_8016EE40((s32) &D_sc03_101_801873E4, 0x01000000);
}

void func_sc03_101_8017DEB0(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_101_8017DFE0, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_101_8017DFE0((s32) &D_80126948);
}

void func_sc03_101_8017DF48(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x35;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x73;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_101_8017DFE0, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_101_8017DFE0((s32) &D_80126948);
}

void func_sc03_101_8017DFE0(s32 arg0) {
    D_sc03_101_801873F4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E01C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E0BC);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E174);

s32 func_sc03_101_8017E30C(s32 arg0) {
    return func_8013B7F4(D_sc03_101_80187444[arg0], 0);
}

void func_sc03_101_8017E33C(s32 arg0) {
    func_sc03_101_8017E35C(arg0);
}

void func_sc03_101_8017E35C(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_sc03_101_8019E19C) {                  /* irregular */
    case 0:
        D_sc03_101_8019DCE8 = 1;
        D_sc03_101_8019DCEC = 0;
        D_sc03_101_8019DCF0 = 1;
        D_sc03_101_8019DCF4 = 1;
        D_sc03_101_8019E19C = 1;
        return;
    case 1:
        temp_v0 = D_sc03_101_8019DCE8 - 1;
        D_sc03_101_8019DCE8 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_101_8019DCE8 = 2;
            func_sc03_101_8017E498((s32) &D_sc03_101_80195FF4, D_sc03_101_8019DCEC * 6);
            D_sc03_101_8019DCEC = (D_sc03_101_8019DCEC + 1) & 7;
        }
        temp_v0_2 = D_sc03_101_8019DCF0 - 1;
        D_sc03_101_8019DCF0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            D_sc03_101_8019DCF0 = 8;
            func_800183E0(D_sc03_101_80187404[D_sc03_101_8019DCF4]);
            D_sc03_101_8019DCF4 = (D_sc03_101_8019DCF4 + 1) & 0xF;
        }
        return;
    }
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E498);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E4F8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E518);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017E7B0);

void func_sc03_101_8017E938(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196574);
        SetScript(arg0, &D_sc03_101_80196634);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_801966BC);
        SetScript(arg0, &D_sc03_101_8019677C);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_101_80196860;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_101_80196884;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_101_80196538;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196574);
        SetScript(arg0, &D_sc03_101_80196634);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_801966BC);
        SetScript(arg0, &D_sc03_101_8019677C);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196870);
        SetScript(arg0, &D_sc03_101_8019687C);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196574);
        SetScript(arg0, &D_sc03_101_80196634);
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

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017EDE4);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017EF78);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F328);

void func_sc03_101_8017F414(u8 *arg0) {
    D_sc03_101_80196940[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017F450(u8 *arg0) {
    D_sc03_101_801969F4[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017F48C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_101_8017F4A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_101_80196474) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_101_80196454;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_101_80183BF4);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_101_8017F548(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_101_8017F564(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_101_80196538) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_101_80196454;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_101_80183BF4, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F5E8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F624);

void func_sc03_101_8017F654(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F6D8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F79C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F87C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F8EC);

void func_sc03_101_8017F9C8(void) {
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017F9D0);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017FA88);

void func_sc03_101_8017FB4C(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017FBA0);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017FC1C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017FD00);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017FDCC);

void func_sc03_101_8017FEA4(u8 *arg0) {
    D_sc03_101_801988E8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8017FEE0);

void func_sc03_101_80180034(u8 *arg0) {
    D_sc03_101_80198A84[AF(arg0, u16, 2)]();
    func_8012DFD4((s32) arg0);
}

void func_sc03_101_80180084(s32 arg0) {
    u16 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_101_80198884) != 0) {
        SetScript(arg0, (s32) &D_sc03_101_80183BF4);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 8;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x104, 0xDC);
        temp_v1 = AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFC) = 0x60U;
        AF(arg0, u16, 0xFE) = temp_v1;
    }
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801800FC);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801801FC);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180290);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180348);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180400);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180584);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801806B8);

s32 func_sc03_101_80180754(s32 arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    AF(arg0, s16, 0xFC) = 0;
    return func_8012AD44(arg0, 3);
}

s32 func_sc03_101_80180790(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    return func_8012AD44(arg0, 4);
}

s32 func_sc03_101_801807B8(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc03_101_8019A9C0);
    return func_8012AD44(arg0, 5);
}

s32 func_sc03_101_801807F4(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return func_8012AD44(arg0, 6);
}

void func_sc03_101_80180814(u8 *arg0) {
    D_sc03_101_8019AA0C[AF(arg0, u16, 2)]();
    func_sc03_101_8018095C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180864);

s32 func_sc03_101_80180918(s32 arg0) {
    func_sc03_101_80181FA8(8);
    func_8012B2CC(arg0);
    func_sc03_101_80181F30(arg0 + 4);
    return func_sc03_101_80182178();
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8018095C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801809B0);

void func_sc03_101_80180B10(u8 *arg0) {
    D_sc03_101_8019AA38[AF(arg0, u16, 2)]();
}

void func_sc03_101_80180B4C(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;
    s8 temp_v0;

    temp_v1 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v1 & 0x10) {
        var_v0 = ((s32) (temp_v1 & 0xF) >> 1) + 9;
    } else {
        var_v0 = 0x10 - ((s32) (temp_v1 & 0xF) >> 1);
    }
    temp_v0 = (var_v0 & 0xFF) * 8;
    D_sc03_101_8019DCFA = temp_v0;
    D_sc03_101_8019DCF9 = temp_v0;
    D_sc03_101_8019DCF8 = temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180BAC);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180CB8);

void func_sc03_101_80180DC4(s32 arg0) {
    if (func_80178970() != 0) {
        func_80178D18(arg0);
        func_sc03_101_801807F4(arg0);
    }
}

void func_sc03_101_80180E04(u8 *arg0) {
    if (AF(arg0, u16, 0x34) != 0) {
        func_sc03_101_801809B0((s32) arg0, 0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) - 1);
    }
}

void func_sc03_101_80180E50(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_101_8019AA28 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    D_sc03_101_8019A9DC = AF(arg0, s32, 0xDC);
    func_8012AD50(arg0);
}

void func_sc03_101_80180ED8(void) {
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80180EE0);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80181138);

void func_sc03_101_8018118C(u8 *arg0) {
    D_sc03_101_8019AADC[AF(arg0, u16, 2)]();
}

void func_sc03_101_801811C8(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_101_8019AA40;
    func_sc03_101_801814F8(temp_s1, (s32) temp_s2);
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

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801812B4);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80181374);

void func_sc03_101_801813C4(u8 *arg0) {
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
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_101_801812B4((s32) arg0, 0x30) != 0)) {
                func_sc03_101_80181138((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_101_801811C8((s32) arg0);
        }
    }
}

void func_sc03_101_801814AC(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_101_801811C8(arg0);
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801814F8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80181914);

void func_sc03_101_80181E34(void) {
}

void func_sc03_101_80181E3C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_101_8019DE8C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80181E60);

s32 func_sc03_101_80181F00(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_101_8019DE84 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_101_8019DE88 = (s16) arg1;
    D_sc03_101_8019DE8A = (s16) arg2;
    D_sc03_101_8019DE86 = temp_v0;
    return (s32) temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80181F30);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80181FA8);

void func_sc03_101_80181FC4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_101_801820F0();
    if (temp_v0 >= 0) {
        func_sc03_101_8018201C(temp_v0, arg0, arg1, arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8018201C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801820F0);

void func_sc03_101_8018212C(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_101_8019DE8C, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182178);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182254);

s32 func_sc03_101_80182518(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_101_8019DD84;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_101_8018253C(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc03_101_80182564((s32) &sp10);
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182564);

s32 func_sc03_101_801825EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_101_80182658(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_101_8018278C(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182658);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801826C8);

void func_sc03_101_80182740(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_101_801828A8();
    if (temp_v0 >= 0) {
        func_sc03_101_8018278C(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8018278C);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801828A8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801828E4);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801829F8);

void func_sc03_101_80182CDC(u8 *arg0) {
    D_sc03_101_8019B168[AF(arg0, u16, 2)]();
}

void func_sc03_101_80182D18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_101_80182EF8();
        return;
    }
    var_v0 = &D_sc03_101_8019E0B4;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182D90);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182E40);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182EF8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80182FB8);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80183084);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80183284);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_8018330C);

void func_sc03_101_80183390(u8 *arg0) {
    D_sc03_101_8019B2AC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801833CC);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801835C0);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80183670);

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_80183720);

void func_sc03_101_801837D0(void) {
}

INCLUDE_ASM("asm/stg/sc03_101/nonmatchings/sc03_101", func_sc03_101_801837D8);
