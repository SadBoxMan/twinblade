#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_013_8017BE9C(void) {
}

void func_sc03_013_8017BEA4(void) {
}

void func_sc03_013_8017BEAC(void) {
}

void func_sc03_013_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_013_80184A40[])();
extern void func_sc03_013_8017C234();
extern void (*D_sc03_013_80184AC0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_013_8017DA84(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_013_80184AC8[])();
void func_sc03_013_8017DAAC(void);
extern void func_800D1EBC();
extern void (*D_sc03_013_80184AD4[])();
extern void func_800D1E28();
extern u8 D_sc03_013_80184AE0;
extern void func_8016EE40();
extern u8 D_sc03_013_80184AEC;
extern void (*D_sc03_013_80184C64[])();
extern void (*D_sc03_013_80184C6C[])();
extern u8 D_sc03_013_80184C74;
extern void (*D_sc03_013_80184C9C[])();
extern u8 D_sc03_013_80184C80;
extern void func_sc03_013_8017E388();
extern void (*D_sc03_013_80184CA4[])();
extern void (*D_sc03_013_80184D50[])();
extern void (*D_sc03_013_80184E98[])();
extern void (*D_sc03_013_80184EC0[])();
extern void (*D_sc03_013_80184F30[])();
extern void (*D_sc03_013_801850F8[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern s32 func_8012AD44();

extern s32 func_801399F0();
extern void func_80139914();
extern void func_80171928();
extern s32 func_sc03_013_8017E1C0();

extern s32 func_80146994();
extern void (*D_sc03_013_80184A48[])();
extern void func_80148634();
extern u8 D_800D5DF4;
extern void func_80154274();
extern s32 func_sc03_013_8017BEBC();
extern void func_80171990();
extern void func_sc03_013_8017C4C4();
extern void func_sc03_013_8017BEE8();
extern void func_80171A04();
extern void func_80171A10();
extern u8 D_sc03_013_80184C18;
extern u8 D_sc03_013_80184C59[];
extern s32 func_800291B4();
extern s32 func_80029178();
extern s32 func_800D0F8C();
extern void func_8016216C();
extern void func_sc03_013_8017F574();
extern void func_sc03_013_8017F5A4();
extern void func_sc03_013_8017E080();
extern s32 func_sc03_013_8017E1C0();
extern u8 D_sc03_013_80184BF8;
extern s32 func_8016EDBC();
extern s32 func_sc03_013_8017E290();
extern u16 D_800B99DA;
extern u8 D_sc03_013_80184C88;
extern s32 func_8013C9C4();
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
extern s32 func_sc03_013_8017ED9C();
extern s32 func_sc03_013_8017ECD0();
extern void (*D_sc03_013_80184F18[])();
extern s32 func_sc03_013_8017F7E8();
extern void func_8012C098();
extern u8 D_sc03_013_80184EE0;
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_8012BF4C();
extern void func_8012AD50();
extern s8 D_sc03_013_80184EEC;
extern s32 func_8012BF10();
extern u8 D_80127058;
extern u8 D_sc03_013_80184F4C;
extern u8 D_sc03_013_801A45A8;
extern s32 func_8012C354();
extern s32 func_80029504();
extern void func_8012C218();
extern s32 func_80143970();
extern void func_8012B23C();
extern u8 D_sc03_013_80184FB0;
extern void func_80178B18();
extern u16 D_800B99D8;
extern s8 D_sc03_013_801AD358;
extern void func_sc03_013_80180518();
extern void func_8012B0B4();

s32 func_sc03_013_8017BEBC(s32 arg0, s32 arg1) {
    return func_80146994(0x29, 0, arg0, arg1);
}

extern u8 D_80126B58;
extern void func_80147364();
extern s32 func_8014C050();
extern void func_80016714();
extern void func_80146C3C();
extern s32 func_80148800();
extern void func_sc03_013_8017C6B8();
extern u8 D_sc03_013_80184A60[];
extern u8 D_sc03_013_80184A68[];
extern u8 D_sc03_013_80184A94;
extern void func_sc03_013_8017F5FC();
extern void func_800D1724();
extern s32 func_8012E544();
extern u16 D_sc03_013_80184ECC[];

void func_sc03_013_8017BEE8(arg0)
    s32 arg0;
{
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_v0;

    func_80147364(4, 0x542);
    func_80147364(4, 0x543);
    func_80147364(4, 0x541);
    temp_v0 = func_8014C050((s32) &D_80126B58, 0x29);
    if (temp_v0 != 0) {
        temp_a0 = AF(temp_v0, s32, 0x34);
        if (temp_a0 != 0) {
            func_80016714(temp_a0, 0x38);
        }
        temp_a0_2 = AF(temp_v0, s32, 0x10);
        if (temp_a0_2 != 0) {
            func_80016714(temp_a0_2, 0x38);
        }
        temp_a0_3 = AF(temp_v0, s32, 0x14);
        if (temp_a0_3 != 0) {
            func_80016714(temp_a0_3, 0x38);
        }
        temp_a0_4 = AF(temp_v0, s32, 0x18);
        if (temp_a0_4 != 0) {
            func_80016714(temp_a0_4, 0x38);
        }
        temp_a0_5 = AF(temp_v0, s32, 0x1C);
        if (temp_a0_5 != 0) {
            func_80016714(temp_a0_5, 0x38);
        }
        func_80146C3C(temp_v0);
    }
}

void func_sc03_013_8017BFC8(u8 *arg0) {
    D_sc03_013_80184A40[AF(arg0, u16, 2)]();
}

extern s32 func_8012BEE8();

extern u8 D_800D5E18;
void func_sc03_013_8017C6F4(s32 arg0, s32 arg1);
extern void func_801542A4();
extern void func_80147324();
extern void func_80171A80();

extern s32 D_sc03_013_80184E84[];
extern u8 D_sc03_013_80184E7C[];
extern void func_80139A68();
extern u8 D_sc03_013_80184D2C[];
extern void func_sc03_013_8017E6F4();
extern void func_8002D59C();
extern u8 D_sc03_013_8019DFB8;
extern u8 D_sc03_013_80184E90[];
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern s32 func_sc03_013_801803E8();
extern s32 func_sc03_013_8018032C();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_80012C6C();
extern s32 func_80012ABC();

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017C004);

void func_sc03_013_8017C214(s32 arg0) {
    func_sc03_013_8017C234(arg0);
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017C234);

void func_sc03_013_8017C404(u8 *arg0) {
    D_sc03_013_80184A48[AF(arg0, u8, 0x216)]();
    func_80148634((s32) arg0);
}

void func_sc03_013_8017C454(u8 *arg0) {
    func_8002D4C8(0x1A, 0);
    AF(arg0, s32, 0x204) = 0;
    EndScene((s32) arg0);
    func_80154274((s32) arg0, (s32) &D_800D5DF4);
    AF(arg0, s16, 0x20C) = 0;
    AF(arg0, s16, 0x20E) = 0;
    func_sc03_013_8017BEBC((s32) (arg0 + 0x20C), (s32) (arg0 + 0x20E));
    func_80171990((s32) arg0);
    func_sc03_013_8017C4C4((s32) arg0);
}

void func_sc03_013_8017C4C4(s32 arg0) {
    if (func_80148800(arg0) & 0x10) {
        AF(arg0, u8, 0x216) = 5;
        return;
    }
    func_sc03_013_8017C6B8(arg0, (s32) AF(arg0, u8, 0x218));
    if (func_80148800(arg0) & 0x40) {
        func_80171990(arg0);
    }
}

void func_sc03_013_8017C528(u8 *arg0) {
    u16 temp_v0;

    if ((u32) (AF(arg0, u16, 0x20E) - 0x44) < 0xDU) {
        func_sc03_013_8017C6F4((s32) arg0, (s32) AF(arg0, u8, 0x218));
        func_801542A4((s32) arg0, (s32) &D_800D5E18);
        D_80127058 = AF(arg0, u8, 0x218) + 1;
        func_80147324(0x544);
    } else {
        temp_v0 = AF(arg0, u16, 0x20C) - 0x10;
        AF(arg0, u16, 0x20C) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x20C) = 0U;
        }
    }
    func_80171A80((s32) arg0, 0x10);
    func_80171990((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017C5D8);

void func_sc03_013_8017C628(s32 arg0) {
    func_8002D4C8(0x1B, 0);
    BeginScene(arg0);
    func_sc03_013_8017BEE8();
    func_80171A04(arg0);
}

void func_sc03_013_8017C670(s32 arg0) {
    func_8002D4C8(0x1B, 0);
    BeginScene(arg0);
    func_sc03_013_8017BEE8();
    func_80171A10(arg0);
}

void func_sc03_013_8017C6B8(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) + D_sc03_013_80184A60[arg1];
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20E) = 0U;
    }
}

void func_sc03_013_8017C6F4(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20C) + D_sc03_013_80184A68[arg1];
    AF(arg0, u16, 0x20C) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20C) = 0x60U;
    }
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017C730);

void func_sc03_013_8017D7C4(u8 *arg0) {
    D_sc03_013_80184AC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_013_8017D800(u8 *arg0) {
    func_sc03_013_8017DA84();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_013_8017D844(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_013_8017D868(u8 *arg0) {
    D_sc03_013_80184AC8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_013_8017D8A4(u8 *arg0) {
    func_sc03_013_8017DAAC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_013_8017D8E4(u8 *arg0) {
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

void func_sc03_013_8017D960(void) {
    func_800D1EBC();
}

void func_sc03_013_8017D980(u8 *arg0) {
    D_sc03_013_80184AD4[AF(arg0, u8, 0x15)]();
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017D9BC);

s32 func_sc03_013_8017DA10(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_013_8017DA64(void) {
    func_800D1EBC();
}

void func_sc03_013_8017DA84(void) {
    func_8016EE40((s32) &D_sc03_013_80184AE0, 0x01000000);
}

void func_sc03_013_8017DAAC(void) {
    func_8016EE40((s32) &D_sc03_013_80184AEC, 0x01000000);
}

void func_sc03_013_8017DAD4(u8 *arg0) {
    if (StepToward((s32) arg0, (s32) ((AF(arg0, u8, 0x218) * 8) + &D_sc03_013_80184C18)) != 0) {
        func_80171928((s32) arg0);
    }
}

void func_sc03_013_8017DB20(u8 *arg0) {
    if ((u32) (func_800291B4(0xCE) & 0xFF) < D_sc03_013_80184C59[AF(arg0, u8, 0x218)]) {
        func_80171A04((s32) arg0);
        return;
    }
    func_80171A10((s32) arg0);
}

void func_sc03_013_8017DB84(u8 *arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = AF(arg0, u8, 0x218) + 1;
    var_a0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_a0 = 0xC1;
        break;
    case 4:
        var_a0 = 0xC2;
        break;
    case 8:
        var_a0 = 0xC3;
        break;
    }
    if ((var_a0 == 0) || (func_80029178(var_a0) & 0xFF)) {
        func_80171A04((s32) arg0);
        return;
    }
    func_80171A10((s32) arg0);
}

void func_sc03_013_8017DC38(u8 *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = arg1;
    temp_v1 = AF(arg0, u8, 0x218) + 1;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_a1 = 0x5B;
        break;
    case 4:
        var_a1 = 0x5C;
        break;
    case 8:
        var_a1 = 0x5D;
        break;
    }
    if (func_800D0F8C(var_a1 & 0xFF) != 0) {
        func_80171A04((s32) arg0);
        return;
    }
    func_80171A10((s32) arg0);
}

void func_sc03_013_8017DCDC(s32 arg0) {
    s32 var_s0;

    var_s0 = func_800D0F8C(0x5B) != 0;
    if (func_800D0F8C(0x5C) != 0) {
        var_s0 += 1;
    }
    if (func_800D0F8C(0x5D) != 0) {
        var_s0 += 1;
    }
    if (var_s0 == 0) {
        func_80171A04(arg0);
        return;
    }
    func_80171A10(arg0);
}

void func_sc03_013_8017DD5C(u8 *arg0) {
    D_sc03_013_80184C64[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017DD98);

void func_sc03_013_8017DE70(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        func_80171928((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017DEC0);

void func_sc03_013_8017DF5C(s32 arg0) {
    if ((func_800291B4(0xCE) & 0xFF) == 9) {
        func_80171A04(arg0);
        func_8016216C();
        return;
    }
    func_80171A10(arg0);
}

void func_sc03_013_8017DFB8(s32 arg0) {
    if ((func_800291B4(0xCE) & 0xFF) == 2) {
        func_sc03_013_8017F574();
    } else {
        func_sc03_013_8017F5A4();
    }
    func_80171928(arg0);
}

void func_sc03_013_8017E014(u8 *arg0) {
    D_sc03_013_80184C6C[AF(arg0, u8, 0x216)]();
}

void func_sc03_013_8017E050(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_013_8017E080(arg0);
}

void func_sc03_013_8017E080(s32 arg0) {
    func_sc03_013_8017F5FC(arg0);
    func_800D1724((s32) &D_sc03_013_80184A94);
    func_80171928(arg0);
}

void func_sc03_013_8017E0C0(void) {
    func_sc03_013_8017E1C0(0);
}

void func_sc03_013_8017E0E0(void) {
    func_sc03_013_8017E1C0(1);
}

void func_sc03_013_8017E100(void) {
    func_sc03_013_8017E1C0(2);
}

void func_sc03_013_8017E120(void) {
    func_sc03_013_8017E1C0(3);
}

void func_sc03_013_8017E140(void) {
    func_sc03_013_8017E1C0(4);
}

void func_sc03_013_8017E160(void) {
    func_sc03_013_8017E1C0(5);
}

void func_sc03_013_8017E180(void) {
    func_sc03_013_8017E1C0(6);
}

void func_sc03_013_8017E1A0(void) {
    func_sc03_013_8017E1C0(7);
}

s32 func_sc03_013_8017E1C0(s32 arg0) {
    return func_8016EDBC((s32) &D_sc03_013_80184BF8, 0x01000000, arg0);
}

void func_sc03_013_8017E1EC(void) {
    func_8016EE40((s32) &D_sc03_013_80184C74, 0x01000000);
}

void func_sc03_013_8017E214(u8 *arg0) {
    D_sc03_013_80184C9C[AF(arg0, u8, 0x216)]();
}

void func_sc03_013_8017E250(s32 arg0) {
    func_8002D4C8(0x540, 0);
    func_80171990(arg0);
    func_sc03_013_8017E290(arg0);
}

s32 func_sc03_013_8017E290(s32 arg0) {
    s32 var_v0;

    var_v0 = D_800B99DA & 7;
    if (var_v0 == 0) {
        var_v0 = func_8013C9C4((s32) &D_sc03_013_80184C88);
    }
    return var_v0;
}

void func_sc03_013_8017E2C8(void) {
    func_8016EE40((s32) &D_sc03_013_80184C80, 0x01000000);
}

void func_sc03_013_8017E2F0(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x2E8;
    D_80126968 = 0x71;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_013_8017E388, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_013_8017E388((s32) &D_80126948);
}

void func_sc03_013_8017E388(s32 arg0) {
    D_sc03_013_80184CA4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017E3C4);

void func_sc03_013_8017E528(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;
    SV a;
    u16 o[4];
    SV r;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
    r.vx = AF(arg0, s16, 0x18);
    r.vy = AF(arg0, s16, 0x1A) + arg1;
    r.vz = AF(arg0, s16, 0x1C);
    func_sc03_013_80180148(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017E6F4);

void func_sc03_013_8017E9CC(u8 *arg0) {
    D_sc03_013_80184D50[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017EA08);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017EAB0);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017EBA0);

s32 func_sc03_013_8017ECD0(s32 arg0) {
    func_80139A68((s32) (*(s16 *)&D_sc03_013_80184E7C[(AF(arg0, s16, 0x70) * 2)]), 0);
    func_80178B18(arg0, D_sc03_013_80184E84[AF(arg0, s16, 0x70)]);
    return func_8012AD44(arg0, 2);
}

s32 func_sc03_013_8017ED40(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc03_013_8017ED60(u8 *arg0) {
    D_sc03_013_80184E98[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017ED9C);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017EE28);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017EEA4);

void func_sc03_013_8017EF34(u8 *arg0) {
    s32 pad[2];
    s16 temp_a2;

    func_sc03_013_8017E6F4();
    if ((AF(arg0, s16, 0x104) != 0) && (AF(arg0, s16, 0x102) == 0)) {
        temp_a2 = AF(arg0, s16, 0x70);
        func_8002D59C(4, (s32) (*(u16 *)&D_sc03_013_80184D2C[(temp_a2 * 2)]), temp_a2 & 0xFFFF);
    }
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017EF9C);

void func_sc03_013_8017F0A0(u8 *arg0) {
    s32 temp_v0;

    if ((func_80029178((s32) (*(u16 *)&D_sc03_013_80184E90[(AF(arg0, s16, 0x70) * 2)])) & 0xFF) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_013_8019DFB8);
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x400;
    AF(arg0, s32, 0xCC) = func_80143970((s32) arg0);
    func_8012AD50((s32) arg0);
}

void func_sc03_013_8017F140(s32 arg0) {
    void *temp_v1;

    if (func_sc03_013_8017ED9C() != 0) {
        func_sc03_013_8017ECD0(arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x80);
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017F198);

void func_sc03_013_8017F288(s32 arg0) {
    void *temp_v1;

    if (func_sc03_013_8017ED9C() == 0) {
        func_8012AD44(arg0, 1);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x80);
}

void func_sc03_013_8017F2E0(u8 *arg0) {
    D_sc03_013_80184EC0[AF(arg0, u16, 2)]();
}

void func_sc03_013_8017F31C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017F324);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017F4B4);

void func_sc03_013_8017F574(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x1EF);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 1;
    }
}

void func_sc03_013_8017F5A4(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_800291B4(0xCE);
    temp_v0 = func_8012E544(0x1EF);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0xFC) = D_sc03_013_80184ECC[(temp_s0 & 0xFF)];
    }
}

void func_sc03_013_8017F5FC(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;

    temp_v0 = func_8012E544(0x1EF);
    if (temp_v0 != 0) {
        temp_a0 = AF(temp_v0, s32, 0xDC);
        if (temp_a0 != 0) {
            func_80016714(temp_a0, 0x38);
        }
        temp_a0_2 = AF(temp_v0, s32, 0xE0);
        if (temp_a0_2 != 0) {
            func_80016714(temp_a0_2, 0x38);
        }
        AF(temp_v0, s16, 2) = 0;
    }
}

void func_sc03_013_8017F664(s32 arg0) {
    if (func_sc03_013_8017F7E8() != 0) {
        func_8012C098(arg0);
        return;
    }
    D_sc03_013_80184F18[AF(arg0, u16, 2)](arg0);
}

void func_sc03_013_8017F6C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, (s32) &D_sc03_013_80184EE0);
        AF(temp_v0, s16, 0x2E) = 0xA0;
        AF(temp_v0, s16, 0x30) = 0x70;
        AF(temp_v0, s16, 8) = 0;
        AF(temp_v0, s16, 0xA) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_8012BF4C((s32) arg0, 0x40);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_013_8017F748(u8 *arg0) {
    s32 var_v0;

    var_v0 = rsin(AF(arg0, s32, 0x1C) << 5);
    if (var_v0 < 0) {
        var_v0 += 0x1F;
    }
    D_sc03_013_80184EEC = (s8) ((u32) var_v0 >> 5);
    if (func_8012BF10((s32) arg0, 0x40) != 0) {
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_013_8017F7AC(s32 arg0) {
    if (func_8012BF10(arg0, 0x40) != 0) {
        func_8012AD44(arg0, 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017F7E8);

void func_sc03_013_8017F820(u8 *arg0) {
    D_sc03_013_80184F30[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017F85C);

void func_sc03_013_8017F958(u8 *arg0) {
    s16 temp_v1;
    s32 var_a0;
    void *temp_s1;

    temp_v1 = AF(arg0, s16, 0xFC);
    temp_s1 = AF(arg0, void *, 0x20);
    var_a0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_a0 = 0xC1;
        break;
    case 4:
        var_a0 = 0xC2;
        break;
    case 8:
        var_a0 = 0xC3;
        break;
    }
    if ((var_a0 == 0) || (func_80029178(var_a0) & 0xFF)) {
        if (AF(temp_s1, s32, 4) < 0) {
            func_8002D4C8(0x854, 0);
            AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        }
        if (D_80127058 == AF(arg0, s16, 0xFC)) {
            func_8012BF4C((s32) arg0, 0x10);
            func_8012AD50((s32) arg0);
        }
    }
}

void func_sc03_013_8017FA4C(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) ((AF(temp_v1, u16, 0x14) - 0x71) & 0xFFF);
    if (func_8012BEE8() != 0) {
        D_80127058 = 0;
        func_8012AD44((s32) arg0, 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017FAA8);

void func_sc03_013_8017FE4C(u8 *arg0) {
    D_sc03_013_801850F8[AF(arg0, u16, 2)]();
}

void func_sc03_013_8017FE88(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_013_80184F4C) != 0) {
        if (func_80029504() >= 0x3D4U) {
            func_8012C218(arg0);
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        func_80143970(arg0);
        SetScript(arg0, (s32) &D_sc03_013_801A45A8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s32, 0xD4) = arg0;
    }
}

void func_sc03_013_8017FF28(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_80178B18((s32) arg0, (s32) &D_sc03_013_80184FB0);
    }
}

s32 func_sc03_013_8017FF6C(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x63;
    if (arg0 < 0x3D4) {
        var_v0 = 0x61;
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8017FF84);

void func_sc03_013_8017FFE8(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc03_013_801803E8(a);
    s = func_sc03_013_8018032C(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
}

void func_sc03_013_80180148(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc03_013_801803E8(r[0] & 0xFFF);
    cx = func_sc03_013_8018032C(r[0] & 0xFFF);
    sy = func_sc03_013_801803E8(r[1] & 0xFFF);
    cy = func_sc03_013_8018032C(r[1] & 0xFFF);
    sz = func_sc03_013_801803E8(r[2] & 0xFFF);
    cz = func_sc03_013_8018032C(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8018032C);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_801803E8);

void func_sc03_013_80180494(u8 *arg0) {
    s8 var_v0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc03_013_80180518();
        return;
    }
    if (D_800B99D8 & 4) {
        var_v0 = ((D_800B99D8 & 3) * 0x30) + 0x3F;
    } else {
        var_v0 = ~((D_800B99D8 & 3) * 0x30);
    }
    D_sc03_013_801AD358 = var_v0;
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_80180518);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_8018063C);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_801806F8);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_80180818);

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_80180958);

void func_sc03_013_80180A94(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0xF3);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x800) {
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_013_80180B0C(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x800) {
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_013_80180B84(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x800) {
        AF(arg0, s16, 0x34) = 4;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_013_80180BFC(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_013_80180C74(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_013_80180CEC(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0xF3);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

INCLUDE_ASM("asm/stg/sc03_013/nonmatchings/sc03_013", func_sc03_013_80180D60);

void func_sc03_013_80180E00(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
    if (AF(arg0, s16, 0xA) >= (-0x16D - AF(arg0, s16, 0x16))) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s32, 0xDC) = 0xC00;
        AF(arg0, s16, 0xE2) = -0x16D;
    }
}

void func_sc03_013_80180E4C(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0xF3);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc03_013_80180EC0(u8 *arg0) {
    if (AF(arg0, u8, 0x74) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 1;
    }
}
