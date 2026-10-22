#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_084_8017BE9C(void) {
}

void func_sc01_084_8017BEA4(void) {
}

void func_sc01_084_8017BEAC(void) {
}

void func_sc01_084_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc01_084_8018A264[])();
extern void func_80147324();
extern void func_sc01_084_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc01_084_8018A278[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc01_084_8018A28C[])();
extern void func_800D22E4();
extern void func_sc01_084_8017C910();
extern void func_sc01_084_8017DD2C();
extern void (*D_sc01_084_8018A294[])();
extern void (*D_sc01_084_8018A2F8[])();
extern void func_8016EDEC();
void func_sc01_084_8017E290(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_084_8018A300[])();
extern void func_800D1EBC();
extern void (*D_sc01_084_8018A47C[])();
extern void (*D_sc01_084_8018A48C[])();
void func_sc01_084_8017E524(u8 *arg0);
extern void (*D_sc01_084_8018A4A0[])();
void func_sc01_084_8017E734(u8 *arg0);
extern void (*D_sc01_084_8018A798[])();
extern void (*D_sc01_084_8018A8A0[])();
extern void (*D_sc01_084_8018A8E4[])();
extern void (*D_sc01_084_8018A8EC[])();
extern void (*D_sc01_084_8018A8F4[])();
extern void (*D_sc01_084_8018A8FC[])();
extern void (*D_sc01_084_8018A904[])();
extern void (*D_sc01_084_8018A90C[])();
extern void (*D_sc01_084_8018A990[])();
extern void (*D_sc01_084_8018AA50[])();
extern void (*D_sc01_084_8018AC10[])();
extern void (*D_sc01_084_8018AC2C[])();
extern void (*D_sc01_084_8018AC38[])();
extern void (*D_sc01_084_8018AC44[])();
extern void (*D_sc01_084_8018AC50[])();
extern void (*D_sc01_084_8018ACBC[])();
extern void (*D_sc01_084_801A2D9C[])();
extern void (*D_sc01_084_801A2DB0[])();

void func_sc01_084_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc01_084_8017BEF8(u8 *arg0) {
    D_sc01_084_8018A264[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_084_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc01_084_8017C218((s32) arg0);
}

void func_sc01_084_8017BFE0(u8 *arg0) {
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
    func_sc01_084_8017C218((s32) arg0);
}

void func_sc01_084_8017C064(u8 *arg0) {
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
    func_sc01_084_8017C218((s32) arg0);
}

void func_sc01_084_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc01_084_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern s32 D_sc01_084_801C7728;
extern s32 func_8012C588();

extern s32 func_8012BEE8();
extern s32 func_sc01_084_8017F26C();
extern s32 func_80128ED8();
extern void func_801292C8();
extern void func_sc01_084_80180CBC();
extern void func_8012E364();
extern s32 func_8012E470();
extern void func_8012E4C8();
extern void func_8012C218();
extern void func_8012B14C();
extern s32 func_8012CBF4();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc01_084_801A2D88;
extern u8 D_sc01_084_801A2D94;
extern s32 func_80132EF4();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc01_084_801A3058;

extern u8 D_sc01_084_801A24C8;

extern void func_8012BF4C();
extern void func_8012AD50();

extern s32 func_801399F0();
extern void func_80139914();

extern u8 D_sc01_084_8018A568;

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
extern s16 D_80126B5E;
extern s16 D_80126B66;
extern void func_sc01_084_8017DECC();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern u16 D_80126980;
extern s32 func_8013767C();
extern void func_sc01_084_8017DCAC();
extern void func_8016F0E4();
extern void func_80165770();
extern void func_80175414();
extern void func_80175454();
extern s32 func_80012B04();
extern void func_80146994();
extern void func_sc01_084_8017DB44();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern void func_sc01_084_8017DBA0();
extern u8 D_sc01_084_8018A4C0;
extern u8 D_sc01_084_801A3220;
extern u8 D_sc01_084_801A3288;
extern u8 D_sc01_084_801A32A4;
extern void func_sc01_084_8017DBDC();
extern s32 func_8017484C();
extern s32 D_801270D0;
extern void func_80130D48();
extern u8 D_sc01_084_8018A6B8;
extern u8 D_sc01_084_8018A714;
extern u8 D_sc01_084_8018A724;
extern u8 D_sc01_084_801BB3C0;
extern void func_8001D0E8();
extern u8 D_sc01_084_8018A778;
extern u8 D_sc01_084_8018A788;
extern u8 D_sc01_084_801BE5E8;
extern u8 D_sc01_084_801C7B00;
extern void func_8001CD9C();
extern s32 D_801270D8;
extern u8 D_sc01_084_801C7B40;
extern void (*D_sc01_084_8018AB4C[])();
extern void func_sc01_084_80182A00();
extern s32 D_sc01_084_8018ABC8[];
extern s32 D_sc01_084_8018ABD8[];
extern u8 D_sc01_084_80186B78;
extern s16 D_sc01_084_8018A91A;
extern u8 D_sc01_084_8018A9C0;
extern u8 D_sc01_084_801BE010;
extern u8 D_sc01_084_801C7748;
extern void func_8012B2CC();
extern void func_8012CBA4();
extern void func_sc01_084_801818E0();
extern s32 D_sc01_084_8018AA40;
extern s32 func_8012BD3C();
extern void func_sc01_084_80181978();
extern void func_sc01_084_80181920();
extern s32 D_801270D4;
extern s32 D_801270E4;
extern void func_8012AD80();
extern void func_8012C098();
extern void func_sc01_084_8018392C();
extern void func_sc01_084_80183A7C();
extern void func_sc01_084_80183BD0();
extern u8 D_sc01_084_8018AC1C;
extern u8 D_sc01_084_801C4854;
extern s32 func_800183E0();

extern u8 D_sc01_084_8018A7A8;
extern u8 D_sc01_084_8018A838;
extern void func_8001CA1C();

extern s32 D_80126950;
extern s8 D_8012694C;
extern u8 D_sc01_084_801B67C8;
extern void func_80174E9C();
extern u8 D_sc01_084_8018A4C8;
extern void func_80174824();
extern u8 D_sc01_084_801A18C8;
extern u8 D_sc01_084_801A1A10;
extern u8 D_sc01_084_801A1B40;
extern void func_80142414();
extern void func_sc01_084_80181F3C();
extern u8 D_sc01_084_801A2400;
extern void func_8012B23C();
extern void func_80143CD4();
extern void func_800CB0E8();
extern u16 D_80126B62;
extern void func_8012B21C();
extern u8 D_sc01_084_801A2750;

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017C218);

void func_sc01_084_8017C524(u8 *arg0) {
    D_sc01_084_8018A278[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_084_8017C5A0(u8 *arg0) {
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
    func_sc01_084_8017C218((s32) arg0);
}

void func_sc01_084_8017C610(u8 *arg0) {
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
    func_sc01_084_8017C218((s32) arg0);
}

void func_sc01_084_8017C69C(u8 *arg0) {
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
    func_sc01_084_8017C218((s32) arg0);
}

void func_sc01_084_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc01_084_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc01_084_8017C7C4(u8 *arg0) {
    D_sc01_084_8018A28C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017C800);

void func_sc01_084_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc01_084_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017C910);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017CA80);

void func_sc01_084_8017D960(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x320;
    D_80126968 = 0x60;
    D_80126976 = 0x18;
    D_80126978 = -0x80;
    D_8012696A = 0;
    D_8012696C = 0;
    D_8012697A = -0x7D;
    func_8012A018((s32) func_sc01_084_8017DD2C, 0);
    func_sc01_084_8017DD2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017DA00);

void func_sc01_084_8017DA9C(void) {
    D_80126950 = 0x1F4;
    D_80126954 = 0x1F4;
    func_8012A018((s32) func_sc01_084_8017DD2C, 2);
    func_sc01_084_8017DD2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017DAF8);

void func_sc01_084_8017DB44(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    D_80126950 = 0x190;
    D_80126954 = 0x190;
    func_8012A018((s32) func_sc01_084_8017DD2C, 3);
    func_sc01_084_8017DD2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_084_8017DBA0(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    D_8012694C = 4;
    D_8012695C = 0x258;
    D_80126968 = -0xE3;
    D_80126976 = 0;
    D_8012697A = 0;
}

void func_sc01_084_8017DBDC(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    D_8012695C = 0x320;
    D_8012694C = 0;
    D_80126968 = 0x60;
}

void func_sc01_084_8017DC04(void) {
    func_80174E9C((s32) &D_sc01_084_801B67C8);
    D_80126950 = 0x1F4;
    D_80126954 = 0x1F4;
    D_8012695C = 0x320;
    D_80126968 = 0x60;
    D_8012696A = 0x800;
    D_80126976 = 0x18;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_8012697A = -0x7D;
    func_sc01_084_8017DD2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_084_8017DCAC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x320;
    D_80126968 = 0x60;
    D_80126976 = 0x18;
    D_80126978 = -0x80;
    D_8012696A = 0;
    D_8012696C = 0;
    D_8012697A = -0x7D;
    func_8012A018((s32) func_sc01_084_8017DD2C, 0);
}

void func_sc01_084_8017DD2C(s32 arg0) {
    D_sc01_084_8018A294[AF(arg0, u8, 4)]();
}

void func_sc01_084_8017DD68(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = ratan2((s32) D_80126B5E, (s32) D_80126B66) & 0xFFF;
    temp_s1 = temp_s2 - 0x400;
    AF(arg0, s16, 0x2E) = (s16) (rsin(temp_s1) / 32);
    AF(arg0, s16, 0x32) = (s16) (rcos(temp_s1) / 32);
    func_sc01_084_8017DECC((s32) arg0, temp_s2);
}

void func_sc01_084_8017DDFC(u8 *arg0) {
    AF(arg0, s32, 0x3C) = 0x380;
    AF(arg0, s32, 0x40) = -0x200;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x4C) = -0x440;
    AF(arg0, s32, 0x50) = 0;
}

void func_sc01_084_8017DE24(u8 *arg0) {
    AF(arg0, s32, 0x3C) = 0x140;
    AF(arg0, s32, 0x40) = -0x880;
    AF(arg0, s32, 0x44) = -0x140;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x4C) = -0x440;
    AF(arg0, s32, 0x50) = 0;
}

void func_sc01_084_8017DE50(u8 *arg0) {
    AF(arg0, s32, 0x3C) = 0x409;
    AF(arg0, s32, 0x40) = -0x840;
    AF(arg0, s32, 0x44) = 0x1DF;
    AF(arg0, s32, 0x48) = 0x129;
    AF(arg0, s32, 0x4C) = -0x592;
    AF(arg0, s32, 0x50) = 0x36;
}

void func_sc01_084_8017DE84(s32 arg0) {
    func_sc01_084_8017DECC(arg0, ratan2((s32) D_80126B5E, (s32) D_80126B66) & 0xFFF);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017DECC);

void func_sc01_084_8017E0C0(u8 *arg0) {
    D_sc01_084_8018A2F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_084_8017E0FC(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_084_8017E290, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_084_8017E14C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_084_8017E170(u8 *arg0) {
    D_sc01_084_8018A300[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_084_8017E1AC(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_800D0C48(2);
    func_8002D4C8(7, 0);
    func_8016EDEC((s32) func_sc01_084_8017E524, 0x01000000);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_084_8017E21C(void) {
    return 0;
}

s32 func_sc01_084_8017E224(u8 *arg0) {
    func_8002D4C8(0x1D, 0);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_084_8017E270(void) {
    func_800D1EBC();
}

void func_sc01_084_8017E290(u8 *arg0) {
    D_sc01_084_8018A47C[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017E2CC);

void func_sc01_084_8017E334(u8 *arg0) {
    if (D_80126980 & 0x8000) {
        AF(arg0, s16, 0x20C) = 0;
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017E384);

void func_sc01_084_8017E4E4(s32 arg0) {
    func_sc01_084_8017DCAC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc01_084_8017E524(u8 *arg0) {
    D_sc01_084_8018A48C[AF(arg0, u8, 0x214)]();
}

void func_sc01_084_8017E560(u8 *arg0) {
    func_80175454();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017E598);

void func_sc01_084_8017E608(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0xB1C, 4);
    if ((temp_v0 << 0x10) == 0) {
        func_80146994(0x19, (s32) arg0, 0x04BB04BC, 0);
        func_sc01_084_8017DB44();
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc01_084_8017E6A8(s32 arg0) {
    if (func_8014C050(arg0, 0x19) == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
        D_800AE6BD += 1;
    }
}

void func_sc01_084_8017E704(void) {
}

void func_sc01_084_8017E70C(void) {
    func_8016EDEC((s32) func_sc01_084_8017E734, 0x05000000);
}

void func_sc01_084_8017E734(u8 *arg0) {
    D_sc01_084_8018A4A0[AF(arg0, u8, 0x214)]();
}

void func_sc01_084_8017E770(u8 *arg0) {
    func_8002D4C8(0x12, 2);
    func_sc01_084_8017DBA0();
    func_80175454();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017E7C0);

void func_sc01_084_8017E834(s32 arg0) {
    if ((ActionHelper_1AB0(arg0, (s32) &D_sc01_084_8018A4C0) << 0x10) == 0) {
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_084_801A3220);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_084_8017E890(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x204) = 0x40;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_084_8017E8E8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_084_801A3288);
        AF(arg0, s32, 0x204) = 0;
        AF(arg0, s16, 0x20C) = 0x5A;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_084_8017E94C(u8 *arg0) {
    s32 temp_v0;

    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_084_801A32A4);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
        return;
    }
    if (AF(arg0, s16, 0x20C) != 0) {
        temp_v0 = AF(arg0, s32, 0x204);
        AF(arg0, s32, 0x204) = (s32) (temp_v0 + 1);
        if (!(temp_v0 & 0xF)) {
            AF(arg0, s16, 0xAC) = 0x40;
            AF(arg0, s16, 0xAA) = 0x40;
        }
        AF(arg0, s16, 0x20C) = (s16) ((u16) AF(arg0, s16, 0x20C) - 1);
    }
}

void func_sc01_084_8017E9F8(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_084_8017EA4C(s32 arg0) {
    func_80175414(arg0);
    func_8002D4C8(0x13, 2);
    func_sc01_084_8017DBDC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017EA98);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017ED5C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017EDBC);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017EEF4);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017EF28);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017F198);

void func_sc01_084_8017F218(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    SetScript(arg0, (s32) &D_sc01_084_8018A4C8);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x3C;
    func_80174824();
    func_8002D4C8(0x4BA, 0);
}

s32 func_sc01_084_8017F26C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x5C) = 0;
    return func_8017484C(arg0);
}

void func_sc01_084_8017F294(u8 *arg0) {
    D_sc01_084_8018A798[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017F2D0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_8018A568);
    AF(arg0, s16, 2) = 2;
}

void func_sc01_084_8017F308(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v1;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        func_80130D48(arg0);
        temp_v1 = AF(arg0, s16, 0x70);
        if (temp_v1 == 0x100) {
            D_801270D0 = 0;
        } else if (!(temp_v1 & 0xFF00)) {
            func_8012C588(0x26, 0);
        }
        func_8012C218(arg0);
    }
}

void func_sc01_084_8017F378(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_084_801BB3C0);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xAA, 0xD0);
    AF(arg0, s32 *, 0x58) = &D_sc01_084_8018A714;
    AF(arg0, s32 *, 0xBC) = &D_sc01_084_8018A6B8;
    AF(arg0, s32 *, 0x78) = &D_sc01_084_8018A724;
    temp_v1 = AF(arg0, s16, 0x70) & 0xFF00;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x8000);
    switch (temp_v1) {                              /* irregular */
    case 0x0:
        SetScript(arg0, (s32) &D_sc01_084_8018A568);
        AF(arg0, s16, 2) = 1;
        return;
    case 0x100:
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc01_084_8018A568);
        func_8002D4C8(0x4AA, 0);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s16, 0xE2) = (s16) (rand() & 0xFFF);
        return;
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017F474);

void func_sc01_084_8017F520(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc01_084_8017F26C(arg0);
    }
}

void func_sc01_084_8017F558(void) {
}

void func_sc01_084_8017F560(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_084_801BE5E8);
    AF(arg0, s32 *, 0x58) = &D_sc01_084_8018A778;
    AF(arg0, s16, 0x5C) = 0x800;
    SetScript(arg0, (s32) &D_sc01_084_8018A788);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x140;
}

void func_sc01_084_8017F5E4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc01_084_8018A7A8);
    AF(temp_v0, s16, 0x1A) = 0x3000;
    AF(temp_v0, s16, 0x18) = 0x3000;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    AF(arg0, s16, 0xE) = 0;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xA) = -0x3AA;
    AF(arg0, s32, 0xDC) = (s32) D_801270D8;
    SetScript(arg0, (s32) &D_sc01_084_8018A838);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017F690);

void func_sc01_084_8017F768(u8 *arg0) {
    D_sc01_084_8018A8A0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017F7A4);

void func_sc01_084_8017F83C(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc01_084_8017F87C(u8 *arg0) {
    D_sc01_084_8018A8E4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017F8B8);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017F9F4);

void func_sc01_084_8017FBD4(u8 *arg0) {
    D_sc01_084_8018A8EC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017FC10);

void func_sc01_084_8017FD24(void) {
}

void func_sc01_084_8017FD2C(u8 *arg0) {
    D_sc01_084_8018A8F4[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017FD68(u8 *arg0) {
    func_8001CD9C(AF(arg0, s32, 0x20), (s32) &D_sc01_084_801C7B00);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_084_8017FDB0(s32 arg0) {
    if (D_801270D8 >= 6) {
        func_801292C8(arg0);
    }
}

void func_sc01_084_8017FDE0(u8 *arg0) {
    D_sc01_084_8018A8FC[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017FE1C(u8 *arg0) {
    func_8001CD9C(AF(arg0, s32, 0x20), (s32) &D_sc01_084_801C7B40);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017FE64);

void func_sc01_084_8017FF2C(u8 *arg0) {
    D_sc01_084_8018A904[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8017FF68);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80180000);

void func_sc01_084_801801BC(u8 *arg0) {
    D_sc01_084_8018A90C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801801F8);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018028C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80180300);

void func_sc01_084_80180614(u8 *arg0) {
    D_sc01_084_8018A990[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80180650);

s32 func_sc01_084_80180720(s32 arg0) {
    return -arg0 & 0xFFF;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018072C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801807D8);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801809C4);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80180CBC);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80180D38);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80180E74);

void func_sc01_084_801812F4(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    D_sc01_084_8018A91A = -1;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80181310);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801814E8);

void func_sc01_084_801818E0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_801A18C8);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x28;
}

void func_sc01_084_80181920(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x3C;
    SetScript(arg0, (s32) &D_sc01_084_801A1A10);
    AF(arg0, u16, 0xDC) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
}

void func_sc01_084_80181978(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_801A1B40);
    AF(arg0, s16, 2) = 4;
    AF(arg0, s32, 0x1C) = 0x19;
    func_80142414(arg0, -0x96);
    func_8002D4C8(0x6A9, 0);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801819D0);

void func_sc01_084_80181A40(u8 *arg0) {
    D_sc01_084_8018AA50[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80181A7C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80181DEC);

void func_sc01_084_80181ED4(s32 arg0) {
    if (AF(arg0, u16, 0x100) & 4) {
        func_sc01_084_80181F3C(arg0);
        return;
    }
    SetScript(arg0, (s32) &D_sc01_084_801A1B40);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x19;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80181F3C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80181F80);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801822A4);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80182328);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801826C4);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80182A00);

void func_sc01_084_80182D3C(s32 arg0) {
    AF(arg0, s16, 2) = 0xC;
    SetScript(arg0, (s32) &D_sc01_084_801A2400);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4(arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8(arg0);
    AF(arg0, u8, 0xC1) = 6;
}

void func_sc01_084_80182DB4(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x5C) = 0;
    SetScript(arg0, (s32) &D_sc01_084_801A24C8);
    AF(arg0, s32, 0x1C) = 0x1E;
}

void func_sc01_084_80182DF8(s32 arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x98) = 0;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80182E14);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80182F90);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80182FEC);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183068);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183244);

void func_sc01_084_801834B8(u8 *arg0) {
    if ((AF(arg0, u16, 2) != 0) && (AF(arg0, u16, 0x5C) & 1)) {
        func_sc01_084_80182A00();
    }
    if (AF(arg0, u16, 0) != 0) {
        D_sc01_084_8018AB4C[AF(arg0, u16, 2)](arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018353C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183630);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183790);

void func_sc01_084_801838F0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_8018A568);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018392C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183A7C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183BD0);

void func_sc01_084_80183D38(u8 *arg0) {
    s32 (*var_v0)();

    if (AF(arg0, s16, 0x70) != 1) {
        var_v0 = D_sc01_084_8018ABC8[AF(arg0, u16, 2)];
    } else {
        var_v0 = D_sc01_084_8018ABD8[AF(arg0, u16, 2)];
    }
    var_v0();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80183DA4);

void func_sc01_084_80184090(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0x7FFE);
    func_8012B21C(arg0);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 0x24) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0x28) = (u16) AF(arg0, u16, 0xE);
    AF(arg0, u16, 0x26) = (u16) D_80126B62;
    func_8002D4C8(0x4B4, 0);
}

void func_sc01_084_801840FC(u8 *arg0) {
    D_sc01_084_8018AC10[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184138);

void func_sc01_084_80184424(u8 *arg0) {
    D_sc01_084_8018AC2C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184460);

void func_sc01_084_801845A0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_801A2750);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFC) = 1;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801845EC);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801846B4);

void func_sc01_084_801847F8(u8 *arg0) {
    D_sc01_084_8018AC38[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184834);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184908);

void func_sc01_084_801849A0(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc01_084_80180CBC(arg0);
    }
}

void func_sc01_084_801849D8(u8 *arg0) {
    AF(arg0, s16, 0xA) = -0x4BD;
}

void func_sc01_084_801849E4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x70000000);
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc01_084_801BE010);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xBE, 0xD0);
    AF(arg0, s32 *, 0x58) = &D_sc01_084_8018A9C0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x8000);
    D_sc01_084_8018A91A = -1;
    SetScript(arg0, (s32) &D_sc01_084_80186B78);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x14;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xDC) = 0;
    func_8012B2CC(arg0);
    AF(arg0, s32, 0xCC) = func_8012C588(0x17, 0);
    bzero((s32) &D_sc01_084_801C7748, 0xC);
}

void func_sc01_084_80184AD0(s32 arg0) {
    func_8012CBA4(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_sc01_084_801818E0(arg0);
    }
}

void func_sc01_084_80184B10(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    temp_s1 = D_sc01_084_8018AA40;
    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        if (func_8012BD3C(arg0, 0x400, temp_s1 * temp_s1) != 0) {
            func_sc01_084_80181978(arg0);
            return;
        }
        func_sc01_084_80181920(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184B80);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184C90);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184CE8);

void func_sc01_084_80184D88(void) {
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184D90);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184E28);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80184EEC);

void func_sc01_084_80184F6C(void) {
    func_8012E364();
}

void func_sc01_084_80184F8C(s32 arg0) {
    if (func_8012E470() != 0) {
        func_8012E4C8(arg0);
    }
}

void func_sc01_084_80184FC4(s32 arg0, s32 arg1, s32 arg2) {
    func_8012BEE8(arg0, arg1, arg2);
    if (AF(arg0, s32, 0x1C) == 1) {
        SetScript(arg0, (s32) &D_sc01_084_801A24C8);
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018500C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185080);

void func_sc01_084_80185150(s32 arg0, s32 arg1) {
    void *temp_v1;

    func_8012AD80(arg0, arg1);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x100);
    if (func_8012BEE8(arg0) != 0) {
        if (AF(arg0, s16, 0x70) == 2) {
            D_801270E4 -= 1;
        } else {
            D_801270D4 -= 1;
        }
        func_8012C098(arg0);
    }
}

void func_sc01_084_801851EC(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    if (func_8012BEE8((s32) arg0, 0x80000000, arg2) != 0) {
        func_80130D48((s32) arg0);
        if (AF(arg0, s16, 0x70) == 2) {
            D_801270E4 -= 1;
        } else {
            D_801270D4 -= 1;
        }
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018528C);

void func_sc01_084_80185348(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_sc01_084_8018392C();
        return;
    case 1:
        func_sc01_084_80183A7C();
        return;
    case 2:
        func_sc01_084_80183BD0();
        return;
    }
}

void func_sc01_084_801853C4(void) {
}

void func_sc01_084_801853CC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_084_801BB3C0);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xAA, 0xD0);
    SetScript(arg0, (s32) &D_sc01_084_8018A568);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018544C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185528);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801855EC);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801856D8);

void func_sc01_084_801857BC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = &D_sc01_084_8018AC1C;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185834);

s32 func_sc01_084_80185904(void) {
    return func_800183E0((s32) &D_sc01_084_801C4854);
}

void func_sc01_084_8018592C(u8 *arg0) {
    D_sc01_084_8018AC44[AF(arg0, u16, 2)]();
}

void func_sc01_084_80185968(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_8018599C);

void func_sc01_084_80185AF8(u8 *arg0) {
    D_sc01_084_8018AC50[AF(arg0, u16, 2)]();
}

void func_sc01_084_80185B34(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x14) = 0x20000;
    AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1) & 0x1F);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185B78);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185C0C);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185E38);

s32 func_sc01_084_80185E68(s32 arg0, s32 arg1, s32 arg2) {
    D_sc01_084_801C7728 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80185E98);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801860DC);

void func_sc01_084_8018637C(u8 *arg0) {
    D_sc01_084_8018ACBC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801863B8);

void func_sc01_084_80186530(u8 *arg0) {
    D_sc01_084_801A2D9C[AF(arg0, u16, 2)]();
}

void func_sc01_084_8018656C(u8 *arg0) {
    D_sc01_084_801A2DB0[AF(arg0, u16, 2)]();
}

void func_sc01_084_801865A8(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc01_084_801A2D88);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc01_084_801A2D94, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80186688);

void func_sc01_084_801867A4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_084_801A3058);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}
