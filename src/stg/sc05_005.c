#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_005_8017BE9C(void) {
}

void func_sc05_005_8017BEA4(void) {
}

void func_sc05_005_8017BEAC(void) {
}

void func_sc05_005_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc05_005_80185E58[])();
extern void func_80147324();
extern void func_sc05_005_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc05_005_80185E6C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc05_005_80185E80[])();
extern void func_800D22E4();
extern void func_sc05_005_8017C910();
extern void (*D_sc05_005_80185F98[])();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc05_005_8017CA80();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void (*D_sc05_005_80186014[])();
void func_sc05_005_8017E9A8(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_005_8017E9D0(void);
extern void func_800D1EBC();
extern void (*D_sc05_005_80186028[])();
extern u8 D_sc05_005_80186034;
extern void func_8016EE40();
extern u8 D_sc05_005_80186040;
extern void func_sc05_005_8017EAB0();
extern void (*D_sc05_005_80186054[])();
extern void (*D_sc05_005_801860C0[])();
extern u8 D_sc05_005_801860B0;
extern void func_8012CAE4();
extern void (*D_sc05_005_801A6294[])();
extern void (*D_sc05_005_801A62E8[])();
extern void (*D_sc05_005_801ABAB4[])();
extern void (*D_sc05_005_801ABB1C[])();

void func_sc05_005_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc05_005_8017BEF8(u8 *arg0) {
    D_sc05_005_80185E58[AF(arg0, u16, 2)]();
}

void func_sc05_005_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_005_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_005_8017C218((s32) arg0);
}

void func_sc05_005_8017BFE0(u8 *arg0) {
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
    func_sc05_005_8017C218((s32) arg0);
}

void func_sc05_005_8017C064(u8 *arg0) {
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
    func_sc05_005_8017C218((s32) arg0);
}

void func_sc05_005_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc05_005_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc05_005_801A62CC[])();
extern void func_sc05_005_80181828();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_80146CA0();
extern void func_sc05_005_80181FCC();

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
extern u16 D_801269E8;
extern u16 D_sc05_005_801B1EB8;
extern void func_8012A018();
extern void func_8012A094();
extern u8 D_800D46E4;
extern u8 D_800D5880;
extern void func_80149020();
extern s32 func_sc05_005_80182194();
extern void func_80159B3C();
extern void func_801542DC();
extern void func_80165718();
extern void func_8014BC44();
extern s32 func_80151664();
extern u8 D_sc05_005_801ABAC0;
extern u8 D_sc05_005_801ABACC;
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();
extern s32 func_sc05_005_801823AC();
extern s32 func_80128ED8();
extern void func_80149374();
extern s32 func_800D1FC8();

extern u8 D_sc05_005_801AB1CC;
extern u8 D_80126CB4;
extern s32 func_8012BE98();
extern u8 D_800D3918;
extern u8 D_801152A8;
extern u8 D_801152B0;
extern u8 D_sc05_005_801A60E8;
extern s32 func_sc05_005_80180C0C();
extern s32 func_sc05_005_80180F3C();
extern s32 func_sc05_005_801809F0();
extern s32 func_sc05_005_80180DF0();
extern void func_8012B178();
extern u8 D_sc05_005_801A6058;
extern u8 D_sc05_005_801AB144;
extern void func_8012B2CC();
extern void func_8012AD80();
extern u8 D_sc05_005_801A6048;
extern u8 D_sc05_005_801A6100;
extern u8 D_sc05_005_801AB214;
extern s32 D_sc05_005_801A60D8[];
extern void func_8012C588();
extern s32 func_8012CBCC();
extern void func_80131E00();
extern s32 func_sc05_005_80180900();
extern s32 func_8012BEE8();
extern void func_sc05_005_801808A4();
extern u8 D_sc05_005_801AB3AC;
extern void func_8002A04C();
extern s32 func_8012C098();
extern s32 func_80012C6C();
extern s32 func_sc05_005_80180E78();
extern u16 D_800B99DA;
extern s32 D_sc05_005_801A61D8[];
extern s32 D_sc05_005_801A6210[];
extern s32 D_sc05_005_801A6248[];
extern void func_800183E0();
extern u8 D_sc05_005_801A6288;
extern void func_8001CA1C();
extern void func_sc05_005_801815E0();
extern u8 D_sc05_005_801AB2EC;
extern u8 D_sc05_005_801AB374;
extern void func_801292C8();
extern s32 func_sc05_005_80181BB4();

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017C218);

void func_sc05_005_8017C524(u8 *arg0) {
    D_sc05_005_80185E6C[AF(arg0, u16, 2)]();
}

void func_sc05_005_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_005_8017C5A0(u8 *arg0) {
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
    func_sc05_005_8017C218((s32) arg0);
}

void func_sc05_005_8017C610(u8 *arg0) {
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
    func_sc05_005_8017C218((s32) arg0);
}

void func_sc05_005_8017C69C(u8 *arg0) {
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
    func_sc05_005_8017C218((s32) arg0);
}

void func_sc05_005_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc05_005_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc05_005_8017C7C4(u8 *arg0) {
    D_sc05_005_80185E80[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017C800);

void func_sc05_005_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc05_005_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017C910);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017CA80);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017CBB0);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017CF3C);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017D1B4);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017D2FC);

void func_sc05_005_8017D47C(u8 *arg0) {
    D_sc05_005_80185F98[AF(arg0, u16, 2)]();
}

void func_sc05_005_8017D4B8(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc05_005_8017D504(u8 *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xDC);
    temp_s2 = AF(arg0, s16 *, 0xCC);
    temp_s1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_v1, u8, 1) != 0) && (AF(arg0, s16, 0x108) == 0)) {
        AF(arg0, s16, 0x108) = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc05_005_8017CA80((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017D5F8);

void func_sc05_005_8017D678(u8 *arg0) {
    SV8 sp10;
    SV8 sp18;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x58) = 0;
        sp10.x = AF(arg0, u16, 6);
        sp10.y = AF(arg0, u16, 0xA);
        sp10.z = AF(arg0, u16, 0xE);
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (sp18.y + 0x800);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_005_8017D72C(u8 *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = AF(arg0, u8 *, 0xD0);
    d = AF(arg0, u8 *, 0xDC);
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        func_80178B18((s32) arg0, AF(d, s32, 0xC));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_005_8017D798(u8 *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0xDC);
    if (func_80178970((s32) arg0, arg1) != 0) {
        func_80178D18((s32) arg0);
        func_800291A0(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            func_8002AC00(0x25);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_005_8017D824(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc05_005_8017D844(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc05_005_8017CA80(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017D898);

void func_sc05_005_8017E778(u8 *arg0) {
    D_sc05_005_80186014[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_005_8017E7B4(u8 *arg0) {
    func_sc05_005_8017E9A8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_005_8017E7F8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_005_8017E81C(u8 *arg0) {
    func_sc05_005_8017E9D0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_005_8017E85C(u8 *arg0) {
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

void func_sc05_005_8017E8D8(void) {
    func_800D1EBC();
}

void func_sc05_005_8017E8F8(u8 *arg0) {
    D_sc05_005_80186028[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_005_8017E934(u8 *arg0) {
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

void func_sc05_005_8017E9A8(void) {
    func_8016EE40((s32) &D_sc05_005_80186034, 0x01000000);
}

void func_sc05_005_8017E9D0(void) {
    func_8016EE40((s32) &D_sc05_005_80186040, 0x01000000);
}

void func_sc05_005_8017E9F8(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x155;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_005_8017EAB0, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_005_8017EAB0((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc05_005_801B1EB8 = D_801269E8;
}

void func_sc05_005_8017EAB0(s32 arg0) {
    D_sc05_005_80186054[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017EAEC);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017EC98);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017EE64);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017EFF4);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F0AC);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F164);

void func_sc05_005_8017F1BC(u8 *arg0) {
    D_sc05_005_801860C0[AF(arg0, u16, 2)]();
}

void func_sc05_005_8017F1F8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x5C) = 0x20;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_005_801860B0 | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc05_005_8017F274(void) {
}

s32 func_sc05_005_8017F27C(void) {
    return 0x5F;
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F284);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F2E8);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F448);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F62C);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F6E8);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F794);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017F840);

void func_sc05_005_8017F988(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_005_801AB1CC);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_005_8017F9C0(u8 *arg0) {
    if (!(AF(arg0, u16, 0x70) & 1) && (func_8012BE98((s32) arg0, (s32) &D_80126CB4) <= 0x240000)) {
        AF(arg0, s16, 2) = 0xC;
    }
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017FA1C);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017FABC);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017FCA4);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017FD44);

void func_sc05_005_8017FE10(s32 arg0) {
    s32 sp10;
    s32 *var_a1;
    s32 var_v1;

    var_v1 = func_sc05_005_80180C0C(arg0, (s32) &D_800D3918, 1);
    if (!(var_v1 & 0xE000)) {
        func_sc05_005_80180F3C(arg0, (s32) &D_sc05_005_801A60E8, (s32) &sp10);
        var_v1 = func_sc05_005_801809F0(arg0, (s32) &sp10, 1, 1);
        if (!(var_v1 & 0xE000)) {
            func_8012C218(arg0);
            return;
        }
    }
    var_a1 = &D_801152A8;
    if (var_v1 & 0xC000) {
        var_a1 = &D_801152B0;
    }
    func_sc05_005_80180DF0(arg0, (s32) var_a1, 4);
    func_8012B178(arg0, -0x80000);
}

void func_sc05_005_8017FEC8(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_005_801AB144);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg0, u16, 0xDC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_005_801A6058 | 0x40000000 | 0x20000000);
    func_8012B2CC(arg0);
    func_8012B178(arg0, -0x80000);
    AF(arg0, s16, 2) = 9;
}

void func_sc05_005_8017FF4C(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 temp_v0;
    s32 temp_v1;

    func_8012AD80(arg0, arg1);
    func_sc05_005_80180F3C(arg0, (s32) &D_sc05_005_801A60E8, (s32) &sp10);
    temp_v0 = func_sc05_005_801809F0(arg0, (s32) &sp10, 1, 1);
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v1 == 0x1A) || (temp_v1 == 0x1C) || (temp_v0 == 0)) {
        func_8012C218(arg0);
    }
}

void func_sc05_005_8017FFC8(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_005_801AB144);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg0, u16, 0xDC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_005_801A6048 | 0x40000000 | 0x20000000);
    AF(arg0, void *, 0xCC) = (void *) (((AF(arg0, u16, 0x70) & 0xF0) * 2) + &D_sc05_005_801A6100);
    func_8012B2CC(arg0);
    func_8012B178(arg0, -0x80000);
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80180068);

void func_sc05_005_801802C8(u8 *arg0) {
    AF(arg0, s16, 2) = 0xD;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_8012C588(0x24F, (s32) arg0);
    AF(AF(arg0, void *, 0x20), s32, 0x24) = D_sc05_005_801A60D8[(AF(arg0, u16, 0x70) & 0xF)];
    SetScript((s32) arg0, (s32) &D_sc05_005_801AB214);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80180338);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801804C0);

void func_sc05_005_801805D4(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    temp_v1 = func_8012CBCC(arg0) & 0xFF;
    if (temp_v1 == 2) {
        func_80131E00(arg0, 0x12);
        return;
    }
    if (temp_v1 == 0x1A) {
        func_sc05_005_80180900(arg0);
        return;
    }
    if (AF(arg0, u8, 0xC2) != 0) {
        var_v0 = func_8012BEE8(arg0);
    } else {
        var_v0 = AF(arg0, u16, 0x72) & 0x4000;
    }
    if (var_v0 != 0) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        func_sc05_005_801808A4(arg0);
    }
}

void func_sc05_005_8018068C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x5E) = 0;
}

void func_sc05_005_801806A0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_005_801AB3AC);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    func_8002D4C8(0x84D, 0);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801806EC);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801808A4);

s32 func_sc05_005_80180900(s32 arg0) {
    func_8002AC00(0x19);
    func_8002A04C(arg0);
    return func_8012C098(arg0);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8018093C);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801809F0);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80180C0C);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80180D4C);

s32 func_sc05_005_80180DF0(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0xE8) = func_80012C6C((s32) AF(arg0, s16, 0xE8), (s32) AF(arg1, s16, 0), (s32) (s16) arg2);
    AF(arg0, s16, 0xEA) = func_80012C6C((s32) AF(arg0, s16, 0xEA), (s32) AF(arg1, s16, 2), (s32) (s16) arg2);
    AF(arg0, s16, 0xEC) = func_80012C6C((s32) AF(arg0, s16, 0xEC), (s32) AF(arg1, s16, 4), (s32) (s16) arg2);
    return func_sc05_005_80180E78(arg0, arg0 + 0xE8);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80180E78);

s32 func_sc05_005_80180F3C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ApplyMatrixSV(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80180F60);

void func_sc05_005_8018104C(void) {
    func_800183E0(D_sc05_005_801A61D8[((D_800B99DA % 14) & 0xFFFF)]);
    func_800183E0(D_sc05_005_801A6210[((D_800B99DA % 14) & 0xFFFF)]);
    func_800183E0(D_sc05_005_801A6248[(D_800B99DA & 0xF)]);
}

void func_sc05_005_80181128(u8 *arg0) {
    D_sc05_005_801A6294[AF(arg0, u16, 2)]();
}

void func_sc05_005_80181164(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CA1C(temp_v0, (s32) &D_sc05_005_801A6288);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x18) = (u16) ((s32) (AF(temp_v1_2, u16, 0x18) << 0x10) >> 0x11);
    temp_v1_3 = AF(arg0, s32, 0x20);
    AF(temp_v1_3, u16, 0x1A) = (u16) ((s32) (AF(temp_v1_3, u16, 0x1A) << 0x10) >> 0x11);
    AF(arg0, u16, 0xFE) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
    func_sc05_005_801815E0(arg0, 2);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_005_80181224(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x64);
    temp_a1 = AF(arg0, void *, 0x20);
    if ((AF(arg0, s16, 0xFE) != AF(temp_a2, s16, 0x36)) || (AF(temp_a2, s32, 0x90) == &D_sc05_005_801AB374)) {
        AF(arg0, s32, 0x48) = 0xC000;
        AF(arg0, s16, 2) = 3;
        return;
    }
    AF(temp_a1, u16, 0x18) = (u16) (AF(temp_a1, u16, 0x18) + 0x40);
    temp_v1 = AF(temp_a1, u16, 0x1A) + 0x40;
    AF(temp_a1, u16, 0x1A) = temp_v1;
    if (((s16) AF(temp_a1, u16, 0x18) >= 0x1801) || ((s16) temp_v1 >= 0x1801)) {
        AF(temp_a1, u16, 0x1A) = 0x1800U;
        AF(temp_a1, u16, 0x18) = 0x1800U;
    }
    temp_a1_2 = AF(arg0, void *, 0x64);
    if ((AF(temp_a1_2, s32, 0x90) == &D_sc05_005_801AB2EC) && (AF(temp_a1_2, s32, 0x94) == 9)) {
        AF(arg0, s16, 2) = 2;
    }
    func_sc05_005_801815E0((s32) arg0, 2);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801812F4);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801813B4);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80181540);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801815E0);

void func_sc05_005_80181648(u8 *arg0) {
    D_sc05_005_801A62CC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc05_005_80181828((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801816A8);

void func_sc05_005_80181740(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x20);
    AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x80) {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_005_80181798(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x40) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_005_801817CC(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
    temp_v0 = AF(temp_v1, u16, 0x1A) - 0x100;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    if (((s16) AF(temp_v1, u16, 0x18) <= 0) || ((temp_v0 << 0x10) <= 0)) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80181828);

void func_sc05_005_80181984(u8 *arg0) {
    D_sc05_005_801A62E8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_801819C0);

void func_sc05_005_80181B10(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_801292C8((s32) arg0);
        return;
    }
    if (func_sc05_005_80181BB4((s32) arg0, (s32) &D_800D3918, 0x11) & 0x6000) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 < 0x23) {
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
    }
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80181BB4);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80181D08);

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80181DE4);

void func_sc05_005_80181F48(u8 *arg0) {
    D_sc05_005_801ABAB4[AF(arg0, u16, 2)]();
}

void func_sc05_005_80181F84(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc05_005_80181FCC(arg0);
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_80181FCC);

void func_sc05_005_80182120(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc05_005_80182194(arg0);
        func_80159B3C(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            func_801542DC(arg0, (s32) &D_800D46E4, 0xE);
        }
        func_80165718(arg0);
    }
}

s32 func_sc05_005_80182194(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_005_801821D4(u8 *arg0) {
    D_sc05_005_801ABB1C[AF(arg0, u16, 2)]();
}

void func_sc05_005_80182210(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_801465C0();
    if (temp_v0 == 0) {
        func_80146C3C(arg0);
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc05_005_801ABAC0, 0x270, 0x100);
    AF(temp_v0, u8, 0x27) = 0x9B;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    if (AF(arg0, s32, 0x2C) == 0) {
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x18) = 0x3000;
    }
    AF(temp_v0, u8, 0x25) = 0xC0;
    AF(temp_v0, u8, 0x26) = 0x40;
    AF(temp_v0, u8, 0x24) = 0x40;
    func_80128EA8(temp_v0, arg0 + 0x24, (s32) &D_sc05_005_801ABACC);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    func_sc05_005_801823AC(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_005_801822E8(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    u16 var_v0;
    u8 temp_v0_2;

    temp_s1 = AF(arg0, s32, 0x20);
    if (func_80128ED8(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x14) - 0x8000;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) + 0x500);
    if (AF(arg0, s32, 0x2C) == 0) {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x300;
    } else {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x600;
    }
    AF(temp_s1, u16, 0x1A) = var_v0;
    temp_v0_2 = AF(temp_s1, u8, 0x26) - 4;
    AF(temp_s1, u8, 0x26) = temp_v0_2;
    AF(temp_s1, u8, 0x24) = temp_v0_2;
    AF(temp_s1, u8, 0x25) = (u8) (AF(temp_s1, u8, 0x25) - 8);
}

s32 func_sc05_005_801823AC(s32 arg0) {
    s32 var_v0;

    func_80149374(AF(arg0, s32, 0x34), arg0 + 4);
    var_v0 = AF(arg0, s32, 0x2C);
    if (var_v0 == 0) {
        var_v0 = func_800D1FC8(arg0, 5);
    }
    return var_v0;
}
