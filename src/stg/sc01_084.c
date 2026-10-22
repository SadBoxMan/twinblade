#include "common.h"
#include "gte.h"
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
extern s32 func_8012CBA4();
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
extern s32 func_8012B23C();
extern void func_80143CD4();
extern void func_800CB0E8();
extern u16 D_80126B62;
extern void func_8012B21C();
extern u8 D_sc01_084_801A2750;

extern u8 D_sc01_084_801A1820;
extern void func_80143B6C();

extern u8 D_sc01_084_801A1AB8;
extern u8 D_sc01_084_801A21E0;
extern u8 D_sc01_084_801A2848;

extern void func_sc01_084_80185C0C();
extern void func_8012931C();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
extern WMtx D_800AE620;
extern void func_80016A5C();
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc01_084_8018A238[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();

void func_sc01_084_8017C218(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    func_80017DC4(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    func_80017E68(&r, &m);
    t = D_sc01_084_8018A238;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        func_80017758(&q, &m);
    }
    t = D_sc01_084_8018A238;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        func_80017758(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc01_084_8018A238;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            func_80017758(&q, &m);
        }
    }
}

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

typedef struct { s32 x, y, z, pad; } V4;
extern u8 D_sc01_084_801A2F28;
extern u8 D_sc01_084_801A2D00;
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern u8 D_sc01_084_801A2DA4;

extern s16 D_80126CBA;
extern s32 D_801270DC;
extern s32 func_8012B608();
extern void func_sc01_084_80181DEC();
extern s16 D_sc01_084_801C774A;
extern s32 func_sc01_084_801807D8();
extern void func_sc01_084_801822A4();
extern s32 SquareRoot0();
extern u8 D_sc01_084_8018AAB4;
extern void func_8012DBD0();
extern s32 func_8012CC64();
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
extern void func_8012E9C0();
extern void func_80019064();
extern u8 D_80062BDC;
extern void func_8012B200();
extern void func_80130088();
extern u8 D_sc01_084_8018AA9C;
extern u8 D_sc01_084_8018AAA8;
extern u8 D_sc01_084_801A1DA0;
extern W16 D_sc01_084_801C611C;

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

void func_sc01_084_8017C910(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = D_800AE620;
    l.code = 0x50000000;
    func_80016A5C(&l, &m);
}

void func_sc01_084_8017CA80(u8 *obj) {
    s32 tmp[3];
    volatile SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *hdr;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 w2;
    u32 *t;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02];
    c = AF(obj, ChunkDCM *, 0xC);
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        y = c->y;
        xl = c->x;
        xh = c->x >> 16;
        yl = y;
        yh = y >> 16;
        x = c->z;
        y = x >> 16;
        box[0].x = xl; box[0].y = yl;
        box[1].x = xh; box[1].y = yl;
        box[2].x = xl; box[2].y = yl;
        box[3].x = xh; box[3].y = yl;
        box[4].x = xl; box[4].y = yh;
        box[5].x = xh; box[5].y = yh;
        box[6].x = xl; box[6].y = yh;
        box[7].x = xh; box[7].y = yh;
        box[0].z = x;
        box[1].z = x;
        box[4].z = x;
        box[5].z = x;
        box[2].z = y;
        box[3].z = y;
        box[6].z = y;
        box[7].z = y;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        gte_stsxy(&scr[3]);
        gte_ldv3c(&box[4]);
        gte_rtpt();
        gte_stsxy3(&scr[4], &scr[5], &scr[6]);
        gte_ldv0(&box[7]);
        gte_rtps();
        gte_stsxy(&scr[7]);
        gte_stszotz(&g.zbox);
        if (g.zbox > zlim) continue;

        if (scr[0].x > scr[1].x) { hi = scr[0].x; lo = scr[1].x; } else { lo = scr[0].x; hi = scr[1].x; }
        if (scr[2].x > hi) hi = scr[2].x; else if (scr[2].x < lo) lo = scr[2].x;
        if (scr[3].x > hi) hi = scr[3].x; else if (scr[3].x < lo) lo = scr[3].x;
        if (scr[4].x > scr[5].x) { hi2 = scr[4].x; lo2 = scr[5].x; } else { lo2 = scr[4].x; hi2 = scr[5].x; }
        if (scr[6].x > hi2) hi2 = scr[6].x; else if (scr[6].x < lo2) lo2 = scr[6].x;
        if (scr[7].x > hi2) hi2 = scr[7].x; else if (scr[7].x < lo2) lo2 = scr[7].x;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -160 || (s16)l > 160) continue;

        if (scr[0].y > scr[1].y) { hi = scr[0].y; lo = scr[1].y; } else { lo = scr[0].y; hi = scr[1].y; }
        if (scr[2].y > hi) hi = scr[2].y; else if (scr[2].y < lo) lo = scr[2].y;
        if (scr[3].y > hi) hi = scr[3].y; else if (scr[3].y < lo) lo = scr[3].y;
        if (scr[4].y > scr[5].y) { hi2 = scr[4].y; lo2 = scr[5].y; } else { lo2 = scr[4].y; hi2 = scr[5].y; }
        if (scr[6].y > hi2) hi2 = scr[6].y; else if (scr[6].y < lo2) lo2 = scr[6].y;
        if (scr[7].y > hi2) hi2 = scr[7].y; else if (scr[7].y < lo2) lo2 = scr[7].y;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -120 || (s16)l > 120) continue;

        poly = c->poly;
        nf = c->n;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = (s32)(verts + (w & 0xFFFF));
            b = (s32)(verts + (w >> 16));
            w = poly[2];
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            gte_ldv3(a, b, d3);
            gte_rtpt();
            gte_stflg(&g.flag);
            if (g.flag & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.z);
            if (g.z <= 0) continue;
            switch (type) {
            case 4:
            case 5:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m, m2;
                gte_stsxy3_f3(pk);
                gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0xC);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x10);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                if (xh < -160 || xl > 160) continue;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0xE);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x12);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -120 || yl > 120) continue;
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type != 4) g.z = m + 0x200;
                AF(pk, u32, 4) = poly[0];
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x4000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x14;
                break;
            }
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m, m2;
                gte_stsxy3_ft3(pk);
                gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0x10);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x18);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                if (xh < -160 || xl > 160) continue;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0x12);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x1A);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -120 || yl > 120) continue;
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type == 7) g.z = m + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x20;
                break;
            }
            case 0:
            case 1:
            { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3_f4(pk);
                gte_ldv0(d);
                gte_rtps();
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0xC);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x10);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0xE);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x12);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                gte_stflg(&g.flag);
                if (g.flag & 0x7F85E000) continue;
                gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                gte_stsxy(pk + 0x14);
                p3 = AF(pk, s16, 0x14);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(pk, s16, 0x16);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -120 || yl > 120) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                zc = zb;
                if (zc < za) zc = za;
                g.z = zc;
                otp = (u32 *)(((zc >> 2) << 2) + (u32)ot);
                AF(pk, u32, 4) = poly[0];
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x18;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3c(tmp);
                gte_ldv0(d);
                gte_rtps();
                p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(tmp, s16, 8);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(tmp, s16, 0xA);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                gte_stflg(&g.flag);
                if (g.flag & 0x7F85E000) continue;
                gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                gte_stsxy(pk + 0x20);
                p3 = AF(pk, s16, 0x20);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(pk, s16, 0x22);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -120 || yl > 120) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type == 3) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            }
        }
    }
    D_800A5E60 = pk;
}

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

void func_sc01_084_80181A7C(u8 *arg0) {
    SV8 v[1];
    s32 a1;
    u16 dc;
    s32 x;
    s32 z;
    s16 de;
    s32 t;
    s32 ang;
    s32 r;
    s32 y;
    s32 d;

    if (AF(arg0, u16, 0x34) == 0) {
        a1 = -AF(arg0, s16, 0xDC) & 0xFFF;
        if (AF(arg0, s16, 0xFC) == 0) {
            a1 += 0x800;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), a1, 4);
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x3C;
            AF(arg0, u16, 0x34)++;
        }
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        dc = AF(arg0, u16, 0xDC) + 4;
        a1 = (-(s16)dc & 0xFFF) + 0x800;
        AF(arg0, u16, 0xDC) = dc;
    } else {
        dc = AF(arg0, u16, 0xDC) - 4;
        a1 = -(s16)dc & 0xFFF;
        AF(arg0, u16, 0xDC) = dc;
    }
    if (AF(arg0, s16, 0xDC) < 0x400) {
        AF(arg0, u16, 0x100) |= 3;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a1;
    t = -(AF(arg0, s16, 0xDC) * 0xA0) / 12288 + 0x260;
    de = AF(arg0, s16, 0xDE);
    if (t < de) {
        if (de - t >= 6) {
            AF(arg0, s16, 0xDE) = de - 6;
        } else {
            AF(arg0, s16, 0xDE) = t;
        }
    } else if (de < t) {
        if (t - de < 6) {
            AF(arg0, s16, 0xDE) = t;
        } else {
            AF(arg0, s16, 0xDE) = de + 6;
        }
    }
    ang = AF(arg0, s16, 0xDC);
    y = -(ang * 0x600) / 12288 - 0x22;
    r = AF(arg0, s16, 0xDE);
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    v[0].x = x;
    v[0].y = y;
    v[0].z = z;
    AF(arg0, s16, 6) = x;
    AF(arg0, s16, 0xA) = v[0].y;
    AF(arg0, s16, 0xE) = v[0].z;
    if (func_8012BEE8(arg0) != 0) {
        func_sc01_084_80181DEC(arg0);
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        return;
    }
    if (D_801270DC == 1) {
        return;
    }
    if (D_801270DC == 0 && AF(arg0, s16, 0xA) < -0x37F) {
        return;
    }
    d = AF(arg0, s16, 0xDC) - *(s16 *)&D_sc01_084_801C7748;
    if (d < -0xFF) {
        if (AF(arg0, s16, 0x70) == 2) {
            D_801270E4--;
        } else {
            D_801270D4--;
        }
        func_8012C098(arg0);
    } else if (d > 0) {
        if (d < 0x601) {
            if (!(AF(arg0, u16, 0x100) & 2) && D_80126CBA == 0) {
                func_sc01_084_80181ED4((s32) arg0);
            }
        } else if (d > 0xD00) {
            if (AF(arg0, s16, 0x70) == 2) {
                D_801270E4--;
            } else {
                D_801270D4--;
            }
            func_8012C098(arg0);
        }
    }
}

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

void func_sc01_084_80181F3C(s32 arg0) {
    AF(arg0, u16, 0x5C) = 0xAA00;
    SetScript(arg0, (s32) &D_sc01_084_801A1AB8);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc01_084_80181F80(u8 *arg0) {
    SV8 sv;
    s16 cur;
    s32 tgt;
    s32 x;
    s32 z;
    s32 ang;
    s32 y;
    s32 r;
    s32 d;

    AF(arg0, s16, 0xDC) -= 8;
    if (AF(arg0, s16, 0xDC) < 0x400) {
        AF(arg0, u16, 0xFC) = 1;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, u16, 0x100) |= 3;
        SetScript(arg0, (s32) &D_sc01_084_801A1A10);
        AF(arg0, s32, 0x1C) = 10;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) |= 0x8000;
        AF(arg0, u16, 0xFC) ^= 1;
        sv.x = AF(arg0, s16, 6);
        sv.y = AF(arg0, s16, 0xA);
        sv.z = AF(arg0, s16, 0xE);
        AF(arg0, s16, 0xDE) = SquareRoot0(sv.x * sv.x + sv.z * sv.z);
        AF(arg0, s16, 0xDC) = func_sc01_084_801807D8(&sv);
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, void *, 0x20), s16, 0x12), -AF(arg0, s16, 0xDC) & 0xFFF, 0x10);
    cur = AF(arg0, s16, 0xDE);
    tgt = D_sc01_084_801C774A;
    if (tgt < cur) {
        if (cur - tgt < 6) {
            AF(arg0, s16, 0xDE) = tgt;
        } else {
            AF(arg0, s16, 0xDE) = cur - 6;
        }
    } else if (cur < tgt) {
        if (tgt - cur < 6) {
            AF(arg0, s16, 0xDE) = tgt;
        } else {
            AF(arg0, s16, 0xDE) = cur + 6;
        }
    }
    ang = AF(arg0, s16, 0xDC);
    y = -(ang * 0x600) / 0x3000 - 0x22;
    r = AF(arg0, s16, 0xDE);
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    sv.x = x;
    sv.y = y;
    sv.z = z;
    AF(arg0, s16, 6) = sv.x;
    AF(arg0, s16, 0xA) = sv.y;
    AF(arg0, s16, 0xE) = sv.z;
    d = AF(arg0, s16, 0xDC) - *(s16 *) &D_sc01_084_801C7748;
    if (d < -0xFF) {
        if (AF(arg0, s16, 0x70) == 2) {
            D_801270E4 -= 1;
        } else {
            D_801270D4 -= 1;
        }
        func_8012C098(arg0);
        return;
    }
    if (d <= 0) {
        AF(arg0, u16, 0x100) |= 1;
    } else if (!(AF(arg0, u16, 0x100) & 1)) {
        if (AF(arg0, s16, 0x70) == 0 ? d < 0x51 : d < 0x201) {
            func_sc01_084_801822A4(arg0);
            return;
        }
    }
    if (--AF(arg0, s16, 0xFE) <= 0) {
        func_80143B6C(arg0, 0);
        AF(arg0, s16, 0xFE) = 8;
    }
}

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_801822A4);

INCLUDE_ASM("asm/stg/sc01_084/nonmatchings/sc01_084", func_sc01_084_80182328);

void func_sc01_084_801826C4(s32 arg0) {
    SV6 v;
    s32 ret;
    s32 cnt;

    func_8012DBD0(arg0, 0x50, AF(AF(arg0, void *, 0x20), s16, 0x12) + 0x800, 0x1D);
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        AF(AF(arg0, void *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) > 0x28) {
            func_sc01_084_80182DB4(arg0);
            break;
        }
        if (AF(arg0, s32, 0x14) <= 0) {
            ret = func_8012CBF4(arg0);
        } else {
            ret = func_8012CC64(arg0, &D_sc01_084_8018AAB4);
        }
        if (ret & 0x2000) {
            AF(arg0, u8, 0xC2) = 1;
            func_80143B6C(arg0, 1);
            AF(arg0, s32, 0x14) = -0xD0000;
            AF(arg0, s32, 0x1C) = 0;
        }
        break;
    case 1:
        AF(AF(arg0, void *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) > 0x28) {
            func_sc01_084_80182DB4(arg0);
            break;
        }
        cnt = AF(arg0, s32, 0x14);
        if (func_8012CC64(arg0, &D_sc01_084_8018AAB4) & 0x2000) {
            func_80143B6C(arg0, 1);
            AF(arg0, s32, 0x14) = cnt;
            AF(arg0, u8, 0xC2) = 2;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, void *, 0x20), u16, 0x10) = 0;
        }
        break;
    case 2:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        if (AF(arg0, u8, 0xC3) & 1) {
            ret = func_8012CBA4(arg0);
            if (!(ret & 0x2000)) {
                func_sc01_084_80182DB4(arg0);
                break;
            }
        } else {
            ret = func_8012CBF4(arg0);
            if (ret & 0x2000) {
                AF(arg0, u8, 0xC3) |= 1;
            }
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) > 0x10) {
            if (!(ret & 0x2000)) {
                func_sc01_084_80182DB4(arg0);
            } else if (AF(arg0, s16, 0x76) > 0 && AF(arg0, s16, 0xA) < -0x28) {
                AF(arg0, u16, 0xFC) = 0;
                AF(arg0, u8, 0xC1) = 0;
                AF(arg0, s16, 2) = 1;
                AF(arg0, s16, 0x34) = 0;
                SetScript(arg0, &D_sc01_084_801A1A10);
                AF(arg0, s32, 0x1C) = 10;
                AF(arg0, s16, 0x5E) = 0;
                AF(arg0, u16, 0x5C) |= 0x8000;
                AF(arg0, u16, 0xFC) ^= 1;
                v.x = AF(arg0, s16, 6);
                v.y = AF(arg0, s16, 0xA);
                v.z = AF(arg0, s16, 0xE);
                AF(arg0, s16, 0xDE) = SquareRoot0(v.x * v.x + v.z * v.z);
                AF(arg0, s16, 0xDC) = func_sc01_084_801807D8(&v);
            } else {
                func_sc01_084_80182DF8(arg0);
            }
        }
        break;
    }
}

void func_sc01_084_80182A00(arg0)
    s32 arg0;
{
    W16 sp;

    sp = D_sc01_084_801C611C;
    func_8012E9C0(arg0);
    if (AF(arg0, u8, 0x5E) == 5) {
        func_80019064(&D_80062BDC);
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x76) -= AF(arg0, s16, 0x60);
    AF(arg0, u16, 0x5C) &= ~1;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (AF(arg0, u16, 0x62) + 0x800) & 0xFFF;
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    AF(arg0, s16, 2) = 6;
    func_80143B6C(arg0, 0);
    switch (AF(arg0, u16, 0x5E)) {
    case 13:
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x98) = 0;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 0x5C) = 0;
        break;
    case 14:
        if (AF(arg0, s16, 0x70) == 2) {
            D_801270E4 -= 1;
        } else {
            D_801270D4 -= 1;
        }
        func_8012C098(arg0);
        break;
    case 10:
        AF(arg0, s16, 2) = 9;
        AF(arg0, s16, 0x98) = 0;
        AF(arg0, s32, 0x1C) = 0x10;
        break;
    case 9:
        AF(arg0, s16, 2) = 0xA;
        SetScript(arg0, (s32) &D_sc01_084_801A24C8);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_084_8018AA9C);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s16, 0x76) = 0;
        AF(arg0, u16, 0x5C) = 0;
        func_80130088(arg0);
        AF(arg0, u8, 0xC2) = 0;
        AF(arg0, u8, 0xC3) = 0;
        break;
    case 17:
        AF(arg0, u8, 0xC1) = 7;
        AF(arg0, s16, 2) = 0xA;
        SetScript(arg0, (s32) &D_sc01_084_801A24C8);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_084_8018AA9C);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s16, 0x76) = 0;
        AF(arg0, u16, 0x5C) = 0;
        func_80130088(arg0);
        AF(arg0, u8, 0xC2) = 0;
        AF(arg0, u8, 0xC3) = 0;
        func_8012B14C(arg0, &D_sc01_084_8018AAA8);
        break;
    case 33:
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, u16, 0x5C) = 0;
        break;
    case 15:
        if (AF(arg0, s16, 0x76) > 0) {
            func_sc01_084_80182D3C(arg0);
            break;
        }
        goto block;
    default:
        if (AF(arg0, s16, 0x76) > 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            SetScript(arg0, (s32) &D_sc01_084_801A1DA0);
            break;
        }
    block:
        func_8002D4C8(0x6AA, 0);
        AF(arg0, s16, 2) = 0xA;
        SetScript(arg0, (s32) &D_sc01_084_801A24C8);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_084_8018AA9C);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s16, 0x76) = 0;
        AF(arg0, u16, 0x5C) = 0;
        func_80130088(arg0);
        AF(arg0, u8, 0xC2) = 0;
        AF(arg0, u8, 0xC3) = 0;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0x300;
        AF(arg0, s32, 8) -= 0x240000;
        func_8012B2CC(arg0);
        break;
    }
}

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

s32 func_sc01_084_80182F90(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc01_084_801A21E0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = 0xAA00;
    AF(arg0, s16, 0x5E) = 0;
    AF(temp_v1, s16, 0x14) = 0;
    AF(temp_v1, s16, 0x10) = 0;
    return func_8012B23C(arg0);
}

void func_sc01_084_80182FEC(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc01_084_801A21E0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = 0xAA00;
    AF(arg0, s16, 0x5E) = 0;
    AF(temp_v1, s16, 0x14) = 0;
    AF(temp_v1, s16, 0x10) = 0;
    func_8012B23C(arg0);
    SetScript(arg0, (s32) &D_sc01_084_801A2848);
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x34) = 1;
}

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

void func_sc01_084_80184CE8(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        func_80143B6C((s32) arg0, 0);
        AF(arg0, u16, 0xFC) = 8U;
    }
    if (func_8012CBA4((s32) arg0) & 0x2000) {
        AF(arg0, s32, 0x14) = 0;
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        SetScript((s32) arg0, (s32) &D_sc01_084_801A1820);
        AF(arg0, s16, 2) = 1;
        func_8012B21C((s32) arg0);
        AF(arg0, s32, 0x1C) = 0x14;
    }
}

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

void func_sc01_084_80185B78(u8 *arg0) {
    s32 pad[2];
    s16 temp_v0_2;
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 == 0) {
        func_sc01_084_80185C0C();
        AF(arg0, s32, 0x10) = (s32) AF(arg0, s32, 0x10);
        temp_a1 = AF(arg0, s32, 0x18);
        AF(arg0, s32, 0x18) = temp_a1;
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0xC000);
        func_8012931C((s32) arg0, temp_a1);
        temp_v0_2 = AF(arg0, s16, 0x2E);
        if (temp_v0_2 < AF(arg0, s16, 0xA)) {
            AF(arg0, s16, 0xA) = temp_v0_2;
            func_801292C8((s32) arg0);
        }
    } else {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
    }
}

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

void func_sc01_084_801863B8(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc01_084_801A2F28);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc01_084_801A2D00);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 100;
    p.x = D_80126B5C;
    p.y = D_80126B60;
    p.z = D_80126B64;
    ((s16 *)&p.y)[1] -= 0x20;
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    switch (AF(arg0, u16, 0x70) & 0xF) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        break;
    case 2:
        break;
    }
    if (AF(arg0, u16, 0x70) & 0x1000) {
        AF(arg0, s32, 0x1C) <<= 1;
    }
    func_8012B2CC(arg0);
    func_8012C588(0xBC, arg0);
}

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

void func_sc01_084_80186688(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_084_801A2DA4);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(arg0, &a, &b);
        AF(arg0, s16, 6) = b.x;
        AF(arg0, s16, 0xA) = b.y;
        AF(arg0, s16, 0xE) = b.z;
        AF(arg0, s32, 0x1C) = 0x5A;
        AF(arg0, s16, 0x34) = 1;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 5;
    func_8012AD80(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

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
