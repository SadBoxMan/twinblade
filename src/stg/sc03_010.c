#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_010_8017BE9C(void) {
}

void func_sc03_010_8017BEA4(void) {
}

void func_sc03_010_8017BEAC(void) {
}

void func_sc03_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_010_80183A08[])();
extern void func_sc03_010_8017C234();
extern void (*D_sc03_010_80183A88[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_010_8017DA84(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_010_80183A90[])();
void func_sc03_010_8017DAAC(void);
extern void func_800D1EBC();
extern void (*D_sc03_010_80183A9C[])();
extern void func_800D1E28();
extern u8 D_sc03_010_80183AA8;
extern void func_8016EE40();
extern u8 D_sc03_010_80183AB4;
extern void (*D_sc03_010_80183BD0[])();
extern u8 D_sc03_010_80183BD8;
extern void (*D_sc03_010_80183C00[])();
extern u8 D_sc03_010_80183BE4;
extern void func_sc03_010_8017E04C();
extern void (*D_sc03_010_80183C08[])();
extern void (*D_sc03_010_80183C88[])();
extern void (*D_sc03_010_80183CE8[])();
extern void (*D_sc03_010_80183D58[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern s32 func_sc03_010_8017DE84();

extern s32 func_80146994();
extern void (*D_sc03_010_80183A10[])();
extern void func_80148634();
extern u8 D_800D5DF4;
extern void func_80154274();
extern s32 func_sc03_010_8017BEBC();
extern void func_80171990();
extern void func_sc03_010_8017C4C4();
extern void func_sc03_010_8017BEE8();
extern void func_80171A04();
extern void func_80171A10();
extern u8 D_sc03_010_80183B84;
extern void func_80171928();
extern u8 D_sc03_010_80183BC5[];
extern s32 func_800291B4();
extern void func_8016216C();
extern void func_sc03_010_8017EDA8();
extern void func_sc03_010_8017EDD8();
extern void func_sc03_010_8017DD44();
extern s32 func_sc03_010_8017DE84();
extern u8 D_sc03_010_80183B64;
extern s32 func_8016EDBC();
extern s32 func_sc03_010_8017DF54();
extern u16 D_800B99DA;
extern u8 D_sc03_010_80183BEC;
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
extern u16 D_800B99D8;
extern s8 D_sc03_010_8019FFA0;
extern void func_sc03_010_8017E934();
extern void (*D_sc03_010_80183D40[])();
extern s32 func_sc03_010_8017F01C();
extern void func_8012C098();
extern u8 D_sc03_010_80183D08;
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_8012BF4C();
extern void func_8012AD50();
extern s8 D_sc03_010_80183D14;
extern s32 func_8012BF10();
extern void func_8012AD44();
extern u8 D_80127058;
extern void func_8012B0B4();

s32 func_sc03_010_8017BEBC(s32 arg0, s32 arg1) {
    return func_80146994(0x29, 0, arg0, arg1);
}

extern u8 D_80126B58;
extern void func_80147364();
extern s32 func_8014C050();
extern void func_80016714();
extern void func_80146C3C();
extern s32 func_80148800();
extern void func_sc03_010_8017C6B8();
extern u8 D_sc03_010_80183A28[];
extern u8 D_sc03_010_80183A30[];
extern u8 D_sc03_010_80183A5C;
extern void func_sc03_010_8017EE30();
extern void func_800D1724();
extern s32 func_8012E544();
extern u16 D_sc03_010_80183CF4[];

void func_sc03_010_8017BEE8(arg0)
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

void func_sc03_010_8017BFC8(u8 *arg0) {
    D_sc03_010_80183A08[AF(arg0, u16, 2)]();
}

extern s32 func_8012BEE8();

extern u8 D_800D5E18;
void func_sc03_010_8017C6F4(s32 arg0, s32 arg1);
extern void func_801542A4();
extern void func_80147324();
extern void func_80171A80();

extern u8 D_sc03_010_80183C68[];
extern void func_sc03_010_8017E3B8();
extern void func_8002D59C();

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
extern s32 func_sc03_010_8017F614();
extern s32 func_sc03_010_8017F558();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_80012C6C();
extern s32 func_80012ABC();

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017C004);

void func_sc03_010_8017C214(s32 arg0) {
    func_sc03_010_8017C234(arg0);
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017C234);

void func_sc03_010_8017C404(u8 *arg0) {
    D_sc03_010_80183A10[AF(arg0, u8, 0x216)]();
    func_80148634((s32) arg0);
}

void func_sc03_010_8017C454(u8 *arg0) {
    func_8002D4C8(0x1A, 0);
    AF(arg0, s32, 0x204) = 0;
    EndScene((s32) arg0);
    func_80154274((s32) arg0, (s32) &D_800D5DF4);
    AF(arg0, s16, 0x20C) = 0;
    AF(arg0, s16, 0x20E) = 0;
    func_sc03_010_8017BEBC((s32) (arg0 + 0x20C), (s32) (arg0 + 0x20E));
    func_80171990((s32) arg0);
    func_sc03_010_8017C4C4((s32) arg0);
}

void func_sc03_010_8017C4C4(s32 arg0) {
    if (func_80148800(arg0) & 0x10) {
        AF(arg0, u8, 0x216) = 5;
        return;
    }
    func_sc03_010_8017C6B8(arg0, (s32) AF(arg0, u8, 0x218));
    if (func_80148800(arg0) & 0x40) {
        func_80171990(arg0);
    }
}

void func_sc03_010_8017C528(u8 *arg0) {
    u16 temp_v0;

    if ((u32) (AF(arg0, u16, 0x20E) - 0x44) < 0xDU) {
        func_sc03_010_8017C6F4((s32) arg0, (s32) AF(arg0, u8, 0x218));
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

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017C5D8);

void func_sc03_010_8017C628(s32 arg0) {
    func_8002D4C8(0x1B, 0);
    BeginScene(arg0);
    func_sc03_010_8017BEE8();
    func_80171A04(arg0);
}

void func_sc03_010_8017C670(s32 arg0) {
    func_8002D4C8(0x1B, 0);
    BeginScene(arg0);
    func_sc03_010_8017BEE8();
    func_80171A10(arg0);
}

void func_sc03_010_8017C6B8(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) + D_sc03_010_80183A28[arg1];
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20E) = 0U;
    }
}

void func_sc03_010_8017C6F4(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20C) + D_sc03_010_80183A30[arg1];
    AF(arg0, u16, 0x20C) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20C) = 0x60U;
    }
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017C730);

void func_sc03_010_8017D7C4(u8 *arg0) {
    D_sc03_010_80183A88[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_010_8017D800(u8 *arg0) {
    func_sc03_010_8017DA84();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_010_8017D844(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_010_8017D868(u8 *arg0) {
    D_sc03_010_80183A90[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_010_8017D8A4(u8 *arg0) {
    func_sc03_010_8017DAAC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_010_8017D8E4(u8 *arg0) {
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

void func_sc03_010_8017D960(void) {
    func_800D1EBC();
}

void func_sc03_010_8017D980(u8 *arg0) {
    D_sc03_010_80183A9C[AF(arg0, u8, 0x15)]();
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017D9BC);

s32 func_sc03_010_8017DA10(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_010_8017DA64(void) {
    func_800D1EBC();
}

void func_sc03_010_8017DA84(void) {
    func_8016EE40((s32) &D_sc03_010_80183AA8, 0x01000000);
}

void func_sc03_010_8017DAAC(void) {
    func_8016EE40((s32) &D_sc03_010_80183AB4, 0x01000000);
}

void func_sc03_010_8017DAD4(u8 *arg0) {
    if (StepToward((s32) arg0, (s32) ((AF(arg0, u8, 0x218) * 8) + &D_sc03_010_80183B84)) != 0) {
        func_80171928((s32) arg0);
    }
}

void func_sc03_010_8017DB20(u8 *arg0) {
    if ((u32) (func_800291B4(0xCE) & 0xFF) < D_sc03_010_80183BC5[AF(arg0, u8, 0x218)]) {
        func_80171A04((s32) arg0);
        return;
    }
    func_80171A10((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017DB84);

void func_sc03_010_8017DC20(s32 arg0) {
    if ((func_800291B4(0xCE) & 0xFF) == 9) {
        func_80171A04(arg0);
        func_8016216C();
        return;
    }
    func_80171A10(arg0);
}

void func_sc03_010_8017DC7C(s32 arg0) {
    if ((func_800291B4(0xCE) & 0xFF) == 2) {
        func_sc03_010_8017EDA8();
    } else {
        func_sc03_010_8017EDD8();
    }
    func_80171928(arg0);
}

void func_sc03_010_8017DCD8(u8 *arg0) {
    D_sc03_010_80183BD0[AF(arg0, u8, 0x216)]();
}

void func_sc03_010_8017DD14(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_010_8017DD44(arg0);
}

void func_sc03_010_8017DD44(s32 arg0) {
    func_sc03_010_8017EE30(arg0);
    func_800D1724((s32) &D_sc03_010_80183A5C);
    func_80171928(arg0);
}

void func_sc03_010_8017DD84(void) {
    func_sc03_010_8017DE84(0);
}

void func_sc03_010_8017DDA4(void) {
    func_sc03_010_8017DE84(1);
}

void func_sc03_010_8017DDC4(void) {
    func_sc03_010_8017DE84(2);
}

void func_sc03_010_8017DDE4(void) {
    func_sc03_010_8017DE84(3);
}

void func_sc03_010_8017DE04(void) {
    func_sc03_010_8017DE84(4);
}

void func_sc03_010_8017DE24(void) {
    func_sc03_010_8017DE84(5);
}

void func_sc03_010_8017DE44(void) {
    func_sc03_010_8017DE84(6);
}

void func_sc03_010_8017DE64(void) {
    func_sc03_010_8017DE84(7);
}

s32 func_sc03_010_8017DE84(s32 arg0) {
    return func_8016EDBC((s32) &D_sc03_010_80183B64, 0x01000000, arg0);
}

void func_sc03_010_8017DEB0(void) {
    func_8016EE40((s32) &D_sc03_010_80183BD8, 0x01000000);
}

void func_sc03_010_8017DED8(u8 *arg0) {
    D_sc03_010_80183C00[AF(arg0, u8, 0x216)]();
}

void func_sc03_010_8017DF14(s32 arg0) {
    func_8002D4C8(0x540, 0);
    func_80171990(arg0);
    func_sc03_010_8017DF54(arg0);
}

s32 func_sc03_010_8017DF54(s32 arg0) {
    s32 var_v0;

    var_v0 = D_800B99DA & 7;
    if (var_v0 == 0) {
        var_v0 = func_8013C9C4((s32) &D_sc03_010_80183BEC);
    }
    return var_v0;
}

void func_sc03_010_8017DF8C(void) {
    func_8016EE40((s32) &D_sc03_010_80183BE4, 0x01000000);
}

void func_sc03_010_8017DFB4(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x2E8;
    D_80126968 = 0x71;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_010_8017E04C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_010_8017E04C((s32) &D_80126948);
}

void func_sc03_010_8017E04C(s32 arg0) {
    D_sc03_010_80183C08[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017E088);

void func_sc03_010_8017E1EC(s32 arg0, s32 arg1, s32 arg2) {
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
    func_sc03_010_8017F374(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017E3B8);

void func_sc03_010_8017E660(u8 *arg0) {
    D_sc03_010_80183C88[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017E69C);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017E744);

void func_sc03_010_8017E848(u8 *arg0) {
    s32 pad[2];
    s16 temp_a2;

    func_sc03_010_8017E3B8();
    if ((AF(arg0, s16, 0x102) != 0) && (AF(arg0, s16, 0x100) == 0)) {
        temp_a2 = AF(arg0, s16, 0x70);
        func_8002D59C(4, (s32) (*(u16 *)&D_sc03_010_80183C68[(temp_a2 * 2)]), temp_a2 & 0xFFFF);
    }
}

void func_sc03_010_8017E8B0(u8 *arg0) {
    s8 var_v0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc03_010_8017E934();
        return;
    }
    if (D_800B99D8 & 4) {
        var_v0 = ((D_800B99D8 & 3) * 0x30) + 0x3F;
    } else {
        var_v0 = ~((D_800B99D8 & 3) * 0x30);
    }
    D_sc03_010_8019FFA0 = var_v0;
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017E934);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017EA58);

void func_sc03_010_8017EB14(u8 *arg0) {
    D_sc03_010_80183CE8[AF(arg0, u16, 2)]();
}

void func_sc03_010_8017EB50(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017EB58);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017ECE8);

void func_sc03_010_8017EDA8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0xC7);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 1;
    }
}

void func_sc03_010_8017EDD8(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_800291B4(0xCE);
    temp_v0 = func_8012E544(0xC7);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0xFC) = D_sc03_010_80183CF4[(temp_s0 & 0xFF)];
    }
}

void func_sc03_010_8017EE30(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;

    temp_v0 = func_8012E544(0xC7);
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

void func_sc03_010_8017EE98(s32 arg0) {
    if (func_sc03_010_8017F01C() != 0) {
        func_8012C098(arg0);
        return;
    }
    D_sc03_010_80183D40[AF(arg0, u16, 2)](arg0);
}

void func_sc03_010_8017EEFC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, (s32) &D_sc03_010_80183D08);
        AF(temp_v0, s16, 0x2E) = 0xA0;
        AF(temp_v0, s16, 0x30) = 0x70;
        AF(temp_v0, s16, 8) = 0;
        AF(temp_v0, s16, 0xA) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_8012BF4C((s32) arg0, 0x40);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_010_8017EF7C(u8 *arg0) {
    s32 var_v0;

    var_v0 = rsin(AF(arg0, s32, 0x1C) << 5);
    if (var_v0 < 0) {
        var_v0 += 0x1F;
    }
    D_sc03_010_80183D14 = (s8) ((u32) var_v0 >> 5);
    if (func_8012BF10((s32) arg0, 0x40) != 0) {
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_010_8017EFE0(s32 arg0) {
    if (func_8012BF10(arg0, 0x40) != 0) {
        func_8012AD44(arg0, 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F01C);

void func_sc03_010_8017F054(u8 *arg0) {
    D_sc03_010_80183D58[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F090);

void func_sc03_010_8017F100(u8 *arg0) {
    if (D_80127058 == AF(arg0, s16, 0xFC)) {
        func_8012BF4C((s32) arg0, 0x10);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_010_8017F14C(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) ((AF(temp_v1, u16, 0x14) - 0x71) & 0xFFF);
    if (func_8012BEE8() != 0) {
        D_80127058 = 0;
        func_8012AD44((s32) arg0, 1);
    }
}

s32 func_sc03_010_8017F1A8(void) {
    return 0x1F;
}

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F1B0);

void func_sc03_010_8017F214(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc03_010_8017F614(a);
    s = func_sc03_010_8017F558(a);
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

void func_sc03_010_8017F374(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc03_010_8017F614(r[0] & 0xFFF);
    cx = func_sc03_010_8017F558(r[0] & 0xFFF);
    sy = func_sc03_010_8017F614(r[1] & 0xFFF);
    cy = func_sc03_010_8017F558(r[1] & 0xFFF);
    sz = func_sc03_010_8017F614(r[2] & 0xFFF);
    cz = func_sc03_010_8017F558(r[2] & 0xFFF);
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

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F558);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F614);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F6C0);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F7E0);

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017F920);

void func_sc03_010_8017FA5C(u8 *arg0) {
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

void func_sc03_010_8017FAD4(u8 *arg0) {
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

void func_sc03_010_8017FB4C(u8 *arg0) {
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

void func_sc03_010_8017FBC4(u8 *arg0) {
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

void func_sc03_010_8017FC3C(u8 *arg0) {
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

void func_sc03_010_8017FCB4(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_010/nonmatchings/sc03_010", func_sc03_010_8017FD28);

void func_sc03_010_8017FDC8(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
    if (AF(arg0, s16, 0xA) >= (-0x16D - AF(arg0, s16, 0x16))) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s32, 0xDC) = 0xC00;
        AF(arg0, s16, 0xE2) = -0x16D;
    }
}

void func_sc03_010_8017FE14(u8 *arg0) {
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

void func_sc03_010_8017FE88(u8 *arg0) {
    if (AF(arg0, u8, 0x74) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 1;
    }
}
