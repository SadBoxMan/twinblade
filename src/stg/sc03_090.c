#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_090_8017BE9C(void) {
}

void func_sc03_090_8017BEA4(void) {
}

void func_sc03_090_8017BEAC(void) {
}

void func_sc03_090_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc03_090_8018F4A0[])();
extern void func_80147324();
extern void func_sc03_090_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_090_8018F4B4[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_090_8018F4C8[])();
extern void func_800D22E4();
extern void func_sc03_090_8017C910();
extern void (*D_sc03_090_8018F6F0[])();
void func_sc03_090_801812F4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_090_8018F6F8[])();
void func_sc03_090_8018131C(void);
extern void func_800D1EBC();
extern void (*D_sc03_090_8018F704[])();
extern void (*D_sc03_090_8018F710[])();
void func_sc03_090_80181450(void);
extern void (*D_sc03_090_8018F718[])();
extern u8 D_sc03_090_8018F728;
extern void func_8016EE40();
extern u8 D_sc03_090_8018F72C;
extern void (*D_sc03_090_8018F740[])();
extern u8 D_sc03_090_8018F738;
extern void (*D_sc03_090_8018F758[])();
extern u8 D_sc03_090_8018F750;
extern void func_sc03_090_80181874();
extern void (*D_sc03_090_8018F760[])();
extern void (*D_sc03_090_801A0FC4[])();
extern void (*D_sc03_090_801A1078[])();
extern void (*D_sc03_090_801A2EF8[])();
extern void (*D_sc03_090_801A3030[])();
extern void (*D_sc03_090_801A31A8[])();
extern void (*D_sc03_090_801A31B8[])();
extern void (*D_sc03_090_801A5C14[])();
extern void (*D_sc03_090_801A5CA8[])();
extern void (*D_sc03_090_801C9098[])();
extern void (*D_sc03_090_801C9184[])();

void func_sc03_090_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_090_8017BEF8(u8 *arg0) {
    D_sc03_090_8018F4A0[AF(arg0, u16, 2)]();
}

void func_sc03_090_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_090_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_090_8017C218((s32) arg0);
}

void func_sc03_090_8017BFE0(u8 *arg0) {
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
    func_sc03_090_8017C218((s32) arg0);
}

void func_sc03_090_8017C064(u8 *arg0) {
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
    func_sc03_090_8017C218((s32) arg0);
}

void func_sc03_090_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_090_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_090_80181550(void);
extern s32 func_sc03_090_801814FC();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern s32 func_80171928();
extern s32 D_sc03_090_8018F7A8[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_090_8018BDB4;
extern u8 D_sc03_090_801A0AD8;
extern u8 D_sc03_090_801A0AF8;
extern s32 func_8012C354();
extern u8 D_sc03_090_801A0BBC;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_090_801ABAA8;
extern void func_8012B14C();
extern u8 D_sc03_090_801B7FA4;
extern void func_8012C588();
extern u8 D_sc03_090_801ABAC4;
extern u8 D_sc03_090_801B7D8C;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_090_801ABD5C;
extern u8 D_sc03_090_801ABD64;
extern u8 D_sc03_090_801B884C;
extern u8 D_sc03_090_801B8FCC;
extern s32 func_8012DEB8();
extern u8 D_sc03_090_801B8B8C;
extern u8 D_sc03_090_801B943C;
extern void func_8012C218();
extern void func_sc03_090_8018A8DC();
extern u8 D_sc03_090_801C8FFC;
extern void func_sc03_090_8018AC0C();
extern s32 func_sc03_090_8018A9C8();
extern void func_sc03_090_8018A84C();
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
extern void func_8013B7AC();
extern void (*D_sc03_090_801A2F84[])();
extern void func_sc03_090_80184998();
extern void func_8012CBF4();
extern s32 func_80013478();
extern s16 D_80126CBA;
extern s32 func_8012BE54();
extern s32 func_sc03_090_80184A04();
extern s32 func_8012BEE8();
extern void func_8012E88C();
extern void func_8002A04C();
extern void func_8012B200();
extern void func_8012E8A8();
extern u8 D_sc03_090_801A2FB0;
extern s32 func_8012D5E4();
extern u8 D_80078EC1;
extern void func_sc03_090_80184E20();
extern void func_sc03_090_80185178();
extern void func_8012B2CC();
extern void func_sc03_090_80185138();
extern u8 D_sc03_090_801A3048;
extern void func_80017274();
extern void (*D_sc03_090_801A5BC4[])();
extern void func_8012C0EC();
extern void func_8012B030();
extern u8 D_800D3918;
extern s32 func_sc03_090_801870EC();
extern void func_801292C8();
extern void func_sc03_090_80187318();
extern void (*D_sc03_090_801A9058[])();
extern void func_sc03_090_80187F4C();
extern void func_sc03_090_80187B44();
extern void func_8012C098();

extern u8 D_80126B58;
extern u8 D_801202A0;

extern s32 func_8012BD14();
extern void func_80016714();


extern u8 D_801152B0;
extern void func_sc03_090_80187C64();
extern s32 func_8012CC40();
extern s32 func_8012B70C();
extern void func_sc03_090_80187D70();
extern void func_sc03_090_80187CBC();

extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_090_801A0E94[];
extern u8 D_sc03_090_801A0BF8;
extern u8 D_sc03_090_801A0CB8;
extern u8 D_sc03_090_801A0D40;
extern u8 D_sc03_090_801A0E00;
extern u8 D_sc03_090_801A0EE4;
extern u8 D_sc03_090_801A0F08;
extern u8 D_sc03_090_801A0EF4;
extern u8 D_sc03_090_801A0F00;

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8017C218);

void func_sc03_090_8017C524(u8 *arg0) {
    D_sc03_090_8018F4B4[AF(arg0, u16, 2)]();
}

void func_sc03_090_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_090_8017C5A0(u8 *arg0) {
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
    func_sc03_090_8017C218((s32) arg0);
}

void func_sc03_090_8017C610(u8 *arg0) {
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
    func_sc03_090_8017C218((s32) arg0);
}

void func_sc03_090_8017C69C(u8 *arg0) {
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
    func_sc03_090_8017C218((s32) arg0);
}

void func_sc03_090_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_090_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_090_8017C7C4(u8 *arg0) {
    D_sc03_090_8018F4C8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8017C800);

void func_sc03_090_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_090_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8017C910);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8017CA80);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8017D960);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80180D88);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80180DC8);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80180E08);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80180E48);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80180E88);

void func_sc03_090_80180EC8(u8 *arg0) {
    D_sc03_090_8018F6F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_090_80180F04(u8 *arg0) {
    func_sc03_090_801812F4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_090_80180F48(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_090_80180F6C(u8 *arg0) {
    D_sc03_090_8018F6F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_090_80180FA8(u8 *arg0) {
    func_sc03_090_8018131C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_090_80180FE8(u8 *arg0) {
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

void func_sc03_090_80181064(void) {
    func_800D1EBC();
}

void func_sc03_090_80181084(u8 *arg0) {
    D_sc03_090_8018F704[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_090_801810C0(u8 *arg0) {
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

void func_sc03_090_80181134(u8 *arg0) {
    D_sc03_090_8018F710[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_090_80181170(u8 *arg0) {
    func_sc03_090_80181450();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_090_801811B4(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_80171990((s32) &D_80126B58);
        return 1;
    }
    return 0;
}

void func_sc03_090_801811F4(u8 *arg0) {
    D_sc03_090_8018F718[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_090_80181230(u8 *arg0) {
    func_sc03_090_80181550();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_090_8018126C(void) {
    return 0;
}

s32 func_sc03_090_80181274(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_090_801812D4(void) {
    func_800D1EBC();
}

void func_sc03_090_801812F4(void) {
    func_8016EE40((s32) &D_sc03_090_8018F728, 0x01000000);
}

void func_sc03_090_8018131C(void) {
    func_8016EE40((s32) &D_sc03_090_8018F72C, 0x01000000);
}

void func_sc03_090_80181344(u8 *arg0) {
    D_sc03_090_8018F740[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181380);

void func_sc03_090_801813C8(void) {
}

void func_sc03_090_801813D0(s32 arg0) {
    func_80146994(0x1A, arg0, 0x06E706E8, 0);
    func_80171990(arg0);
}

void func_sc03_090_80181414(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        func_80171928(arg0);
    }
}

void func_sc03_090_80181450(void) {
    func_8016EE40((s32) &D_sc03_090_8018F738, 0x01000000);
}

void func_sc03_090_80181478(u8 *arg0) {
    D_sc03_090_8018F758[AF(arg0, u8, 0x216)]();
}

void func_sc03_090_801814B4(s32 arg0) {
    func_80171990();
    func_80146994(0x19, arg0, 0x06920693, 0);
    func_sc03_090_801814FC(arg0);
}

s32 func_sc03_090_801814FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = func_8014C050(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_sc03_090_80181550(void) {
    func_8016EE40((s32) &D_sc03_090_8018F750, 0x01000000);
}

void func_sc03_090_80181578(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_090_80181874, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_090_80181874((s32) &D_80126948);
}

void func_sc03_090_80181614(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_090_80181874, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_090_80181874((s32) &D_80126948);
}

void func_sc03_090_801816AC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_090_80181874, 2);
    func_8012A094((s32) &D_80126948);
    func_sc03_090_80181874((s32) &D_80126948);
}

void func_sc03_090_80181744(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_090_80181874, 3);
    func_8012A094((s32) &D_80126948);
    func_sc03_090_80181874((s32) &D_80126948);
}

void func_sc03_090_801817DC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_090_80181874, 4);
    func_8012A094((s32) &D_80126948);
    func_sc03_090_80181874((s32) &D_80126948);
}

void func_sc03_090_80181874(s32 arg0) {
    D_sc03_090_8018F760[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801818B0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181970);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181AA0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181B50);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181C80);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181D30);

void func_sc03_090_80181EC8(void) {
}

s32 func_sc03_090_80181ED0(s32 arg0) {
    return func_8013B7F4(D_sc03_090_8018F7A8[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181F00);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181F84);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80181FA4);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018223C);

void func_sc03_090_801823C4(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_090_801A0E94[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_090_801A0E94[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_090_801A0E94[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_090_801A0BF8);
        SetScript(arg0, &D_sc03_090_801A0CB8);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_090_801A0D40);
        SetScript(arg0, &D_sc03_090_801A0E00);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_090_801A0EE4;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_090_801A0F08;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_090_801A0BBC;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_090_801A0BF8);
        SetScript(arg0, &D_sc03_090_801A0CB8);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_090_801A0D40);
        SetScript(arg0, &D_sc03_090_801A0E00);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_090_801A0EF4);
        SetScript(arg0, &D_sc03_090_801A0F00);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_090_801A0BF8);
        SetScript(arg0, &D_sc03_090_801A0CB8);
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80182870);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80182A04);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80182DB4);

void func_sc03_090_80182EA0(u8 *arg0) {
    D_sc03_090_801A0FC4[AF(arg0, u16, 2)]();
}

void func_sc03_090_80182EDC(u8 *arg0) {
    D_sc03_090_801A1078[AF(arg0, u16, 2)]();
}

void func_sc03_090_80182F18(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_090_80182F30(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_090_801A0AF8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_090_801A0AD8;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_090_8018BDB4);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_090_80182FD4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_090_80182FF0(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_090_801A0BBC) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_090_801A0AD8;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_090_8018BDB4, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183074);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801830B0);

void func_sc03_090_801830E0(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183164);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183228);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183308);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183378);

void func_sc03_090_80183454(void) {
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018345C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183514);

void func_sc03_090_801835D8(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018362C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801836A8);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018378C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183858);

void func_sc03_090_80183930(u8 *arg0) {
    D_sc03_090_801A2EF8[AF(arg0, u16, 2)]();
}

void func_sc03_090_8018396C(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8013B7AC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 3);
    AF(arg0, s32, 0xCC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801839C4);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183B98);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183BF0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183C3C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183C80);

void func_sc03_090_80183CC4(void) {
}

void func_sc03_090_80183CCC(u8 *arg0) {
    s32 temp_v0;

    D_sc03_090_801A2F84[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE4) + 1;
        AF(arg0, s32, 0xE4) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_090_80184998((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183D48);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183E14);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80183EC4);

void func_sc03_090_8018400C(s32 arg0, s32 arg1) {
    func_8012CBF4(arg0, arg1);
    if (func_80013478(arg0 + 4, arg0 + 0x88) < 0x101) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_090_80184060(s32 arg0) {
    if ((func_8012BE54(arg0) <= 0x40000) && (D_80126CBA == 0) && (func_sc03_090_80184A04(arg0) == 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801840C0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801841A4);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018440C);

void func_sc03_090_8018455C(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 2) = 9;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x34) = 0;
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184588);

void func_sc03_090_801846E4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        temp_a0 = AF(arg0, void *, 0xCC);
        if (temp_a0 != NULL) {
            AF(temp_a0, s16, 0xFC) = 0;
        }
    }
}

void func_sc03_090_80184734(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_090_80184750(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018480C);

s32 func_sc03_090_8018485C(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_090_801A2FB0, (s32) (&D_sc03_090_801A2FB0 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184888);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184958);

void func_sc03_090_80184998(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

s32 func_sc03_090_80184A04(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_090_80184A1C(u8 *arg0) {
    D_sc03_090_801A3030[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184A58);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184B30);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184C74);

void func_sc03_090_80184D74(u8 *arg0) {
    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_sc03_090_80184E20((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C((s32) arg0);
        func_sc03_090_80185178(AF(arg0, s32, 0xCC));
        AF(arg0, s32, 4) = (s32) AF(AF(arg0, void *, 0x64), s32, 4);
        AF(arg0, s32, 8) = (s32) AF(AF(arg0, void *, 0x64), s32, 8);
        AF(arg0, s32, 0xC) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xC);
        func_8012B2CC((s32) arg0);
        func_sc03_090_80185138((s32) arg0);
    }
}

void func_sc03_090_80184E20(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_090_80184E58(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_090_801A3048, (s32) (&D_sc03_090_801A3048 + 8), 5);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80184E84);

void func_sc03_090_80185138(s32 arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0x19);
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    }
}

void func_sc03_090_80185178(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_090_80185198(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801851B8);

void func_sc03_090_8018525C(u8 *arg0) {
    D_sc03_090_801A31A8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80185298);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80185354);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80185484);

void func_sc03_090_8018555C(u8 *arg0) {
    D_sc03_090_801A31B8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80185598);

void func_sc03_090_80185934(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x40);
    if ((func_8012CBCC((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_80017274((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

void func_sc03_090_801859A8(u8 *arg0) {
    void *temp_v0;

    D_sc03_090_801A5BC4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (!(AF(arg0, u16, 0x70) & 0x20)) {
            func_8012C0EC((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80185A34);

void func_sc03_090_80185BA0(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s32, 0xE8) = 0x40;
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80185BE4);

void func_sc03_090_80185F7C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 4;
    func_8012B030((s32) arg0);
}

void func_sc03_090_80185FA8(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin(AF(arg0, s32, 0x1C) << 6, arg1);
    AF(temp_s0, s16, 0x1C) = temp_v0;
    AF(temp_s0, s16, 0x1A) = temp_v0;
    AF(temp_s0, s16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 >= 0x11) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    }
}

void func_sc03_090_80186020(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 6;
        AF(arg0, s16, 0x34) = 0;
        AF(temp_v1, s16, 0x1C) = 0x400;
        AF(temp_v1, s16, 0x18) = 0x400;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x3000;
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186074);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186224);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801862F0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186554);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186568);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801867C8);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186874);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186944);

s32 func_sc03_090_80186AAC(void) {
    s32 *var_v1;
    s32 var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &D_801202A0;
    do {
        if ((AF(var_v1, u16, 0) == 0x17F) && !(AF(var_v1, u16, 0x70) & 0xF)) {
            var_a1 += 1;
        }
        var_a0 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 0x10C);
    } while (var_a0 < 0x60);
    return var_a1 < 0xB;
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186B00);

void func_sc03_090_80186D04(u8 *arg0) {
    D_sc03_090_801A5C14[AF(arg0, u16, 2)]();
}

void func_sc03_090_80186D40(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = func_sc03_090_801870EC(arg0, (s32) &D_800D3918, 0x11);
    if (!(temp_v0 & 0xFF)) {
        if (temp_v0 & 0x2000) {
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, s16, 2) = 4;
                return;
            }
            goto block_11;
        }
        if (AF(arg0, s32, 0x1C) < 0x23) {
            AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x62;
            }
        }
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            goto block_8;
        }
    } else {
block_8:
        temp_v1 = AF(arg0, void *, 0x2C);
        if ((temp_v1 != NULL) && (temp_v1 != (void *)-1)) {
            AF(temp_v1, s32, 0x30) = (s32) (AF(temp_v1, s32, 0x30) - 1);
        }
block_11:
        func_801292C8(arg0);
    }
}

void func_sc03_090_80186E24(s32 arg0) {
    func_sc03_090_80187318(arg0);
    if (AF(arg0, s32, 0x30) == 0) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0;
        return;
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80186E78);

void func_sc03_090_80186F84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc03_090_80186FB8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        if (AF(arg0, s32, 0x2C) == -1) {
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

void func_sc03_090_80186FF8(s32 arg0) {
    func_sc03_090_80187318(arg0);
    if (*AF(arg0, u16 *, 0x2C) == 0) {
        func_801292C8(arg0);
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187050);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801870EC);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187240);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187318);

void func_sc03_090_80187378(u8 *arg0) {
    D_sc03_090_801A5CA8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801873B4);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801873DC);

void func_sc03_090_8018745C(u8 *arg0) {
    D_sc03_090_801A9058[AF(arg0, u16, 2)]();
    if (AF(arg0, s16, 0xFE) != 0) {
        func_sc03_090_80187F4C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801874BC);

void func_sc03_090_80187598(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0xE6) = (u16) AF(arg0, u16, 0xFC);
        return;
    }
    AF(arg0, s16, 2) = 2;
    func_sc03_090_80187B44((s32) arg0, 0);
}

void func_sc03_090_801875E4(u8 *arg0) {
    SV8 a;
    SV8 b;
    s32 m[8];
    s32 v[4];
    u32 r[4];
    s32 t;
    s32 d;

    if (!(AF(arg0, s32, 0x1C) & 0x1FF)) {
        func_sc03_090_80187B44(arg0, 1);
    }
    func_sc03_090_80187C64(arg0, -0xA0000);
    AF(arg0, s16, 0x52) = (u32)rsin(AF(arg0, s32, 0x1C) << 6) >> 8;
    RotMatrixZYX(arg0 + 0x100, m);
    v[1] = 0;
    v[0] = 0;
    v[2] = 0xFFD00000;
    ApplyMatrixLV(m, v, r);
    b.x = ((u16 *)r)[1];
    b.y = ((u16 *)r)[3] + 0x28;
    b.z = ((u16 *)r)[5];
    t = func_8012CC40(arg0, &b);
    if (t != 0) {
        if (t & 0x2000) {
            AF(arg0, u16, 0x100) = 0x1000 - AF(arg0, u16, 0x100);
        } else if (t & 0x8000) {
            a.x = AF(arg0, s32, 0x10) >> 8;
            a.z = AF(arg0, s32, 0x18) >> 8;
            d = func_8012B70C(&D_800D3918, &D_801152B0);
            AF(arg0, s16, 0x102) = d * 2 - func_8012B70C(&a, &D_800D3918);
        }
    }
    if (AF(arg0, s16, 0xA) < AF(arg0, s16, 0xFC)) {
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0xFC);
        AF(arg0, u16, 0x100) = 0x1000 - AF(arg0, u16, 0x100);
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += 0x40;
    if (AF(arg0, s32, 0x1C) % 20 == 0) {
        func_sc03_090_80187D70(arg0);
    }
    func_sc03_090_80187CBC(arg0);
    AF(arg0, s32, 0x1C) += 1;
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801877B8);

void func_sc03_090_801879A8(void) {
}

void func_sc03_090_801879B0(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x48) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_8012B2CC((s32) arg0, arg1);
}

void func_sc03_090_801879D8(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801879E4);

void func_sc03_090_80187AD4(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(AF(arg0, void *, 0x20), s16, 0x18) = 0x1800;
}

void func_sc03_090_80187AF8(u8 *arg0) {
    if (AF(arg0, s16, 0xFE) == 0) {
        func_8012C098((s32) arg0);
        return;
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8A8((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187B44);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187C64);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187CBC);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187D70);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187F4C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80187FD8);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018805C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801880F0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80188274);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80188498);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018884C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80188A8C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80188CF4);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80188E9C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801890E8);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189234);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801892EC);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189440);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801894EC);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018959C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189684);

void func_sc03_090_801897A0(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189880);

void func_sc03_090_80189958(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_090_801899C0(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_801899FC);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189AA0);

void func_sc03_090_80189B60(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_090_801ABAA8);
}

void func_sc03_090_80189B94(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_090_80189BF0(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_090_80189C28(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_090_801B7FA4, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189C84);

void func_sc03_090_80189D5C(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_090_801B7FA4);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189DF0);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_80189EBC);

void func_sc03_090_80189F94(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_090_801B7D8C);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_090_801ABAC4 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_090_8018A030(u8 *arg0) {
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

void func_sc03_090_8018A088(void) {
}

void func_sc03_090_8018A090(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_090_801ABD5C, (s32) &D_sc03_090_801ABD64) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_090_801B884C);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_090_801B8FCC);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_090_8018A130(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_090_801B8FCC);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_090_8018A184(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_090_801ABD5C, (s32) &D_sc03_090_801ABD64) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_090_801B8B8C);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_090_801B943C);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018A218);

void func_sc03_090_8018A260(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_090_8018A288(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018A2D4);

void func_sc03_090_8018A3C0(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018A444);

void func_sc03_090_8018A550(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_090_8018A588(u8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018A5F4);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018A84C);

void func_sc03_090_8018A8A0(u8 *arg0) {
    D_sc03_090_801C9098[AF(arg0, u16, 2)]();
}

void func_sc03_090_8018A8DC(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_090_801C8FFC;
    func_sc03_090_8018AC0C(temp_s1, (s32) temp_s2);
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

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018A9C8);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018AA88);

void func_sc03_090_8018AAD8(u8 *arg0) {
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
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_090_8018A9C8((s32) arg0, 0x30) != 0)) {
                func_sc03_090_8018A84C((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_090_8018A8DC((s32) arg0);
        }
    }
}

void func_sc03_090_8018ABC0(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_090_8018A8DC(arg0);
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018AC0C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018B028);

void func_sc03_090_8018B548(void) {
}

void func_sc03_090_8018B550(u8 *arg0) {
    D_sc03_090_801C9184[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018B58C);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018B780);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018B830);

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018B8E0);

void func_sc03_090_8018B990(void) {
}

INCLUDE_ASM("asm/stg/sc03_090/nonmatchings/sc03_090", func_sc03_090_8018B998);
