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
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

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
extern void StartRumbleScript();
extern u8 D_80062BDC;
extern void func_8012B200();
extern void func_80130088();
extern u8 D_sc01_084_8018AA9C;
extern u8 D_sc01_084_8018AAA8;
extern u8 D_sc01_084_801A1DA0;
extern W16 D_sc01_084_801C611C;

typedef struct { s16 x, y; s32 col; } Star8;
extern void func_8013C9C4();
extern void func_80016450();
extern void func_8012C51C();
extern void func_8002850C();
extern void func_80028558();
extern void func_sc01_084_8017DA00();
extern void func_sc01_084_8017DAF8();
extern void func_sc01_084_801809C4();
extern s16 D_sc01_084_801C7752;
extern u8 D_sc01_084_8018A9A8;
extern u8 D_sc01_084_8018A9D8;
extern Star8 D_sc01_084_801C74E0[];
extern s32 D_sc01_084_801C75E0;
extern s32 D_80126B9C;
extern s32 D_801270E0;
extern s32 D_801270E8;
extern s16 D_sc01_084_8018A914;
extern s16 D_sc01_084_8018A916;
extern s16 D_sc01_084_8018A918;
extern s16 D_sc01_084_801C774C;
extern s16 D_sc01_084_801C774E;
extern s16 D_sc01_084_801C7750;
extern s32 func_8001AAA0();
extern void func_sc01_084_80181310();
extern void func_8012C658();
extern u8 D_sc01_084_8018AA8C;
extern u8 D_sc01_084_801A1CD8;
extern u8 D_sc01_084_8018AA6C;
extern u8 D_sc01_084_801A2940;
extern u8 D_sc01_084_801A1C10;

typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_800D20C0();
extern void func_800D23D0();
extern s32 func_8012C354();
extern void func_8012F14C();
extern u8 D_801152A8;
extern u8 D_sc01_084_8018AC84;
extern WMtx *D_sc01_084_8018ACB8;
extern WMtx D_sc01_084_801C7708[];
extern s32 func_80134510();
extern s8 D_sc01_084_8018AC70[];

typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void func_80015978();
extern s32 func_8012EF34();
extern void func_80017D98();
extern void func_8001739C();
extern SV8 D_sc01_084_8018AC58;
extern SV8 D_sc01_084_8018AC60;
extern SV8 D_sc01_084_8018AC68;
extern s16 D_sc01_084_8018AC5C;
extern s16 D_sc01_084_8018AC64;
extern s16 D_sc01_084_8018AC6C;


void func_sc01_084_8017C800(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

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
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
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
    g_PrimNext = pk;
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

typedef union { s32 w; XY s; } UXY;
extern s32 func_8012B8E4();

extern s32 D_sc01_084_8018AA44;
extern s32 SetScript();
extern void func_8001CD50();
extern u8 D_sc01_084_801C7AC0;
extern u8 *D_sc01_084_801C7B80;
extern s32 ratan2();
extern void RotMatrixYXZ();
extern s16 D_sc01_084_8018A6E0;
extern s16 D_sc01_084_8018A6E2;
extern u16 D_sc01_084_8018A6E4;
extern s16 D_sc01_084_8018A6E6;
extern s16 D_sc01_084_8018A6E8;
extern s16 D_sc01_084_8018A6EA;
extern void func_sc01_084_8018072C();
extern void func_sc01_084_8017EEF4();
extern s32 rsin();
extern u8 *func_8012913C();
extern void func_800233CC();
extern u8 D_sc01_084_801C7830;
extern s16 D_sc01_084_8018A9D0;
extern s16 D_sc01_084_8018A9D2;

extern s32 func_8016F410();
extern void func_80154274();
extern u8 D_sc01_084_8018A310;
extern u8 D_sc01_084_8018A410;
extern u8 D_sc01_084_8018A390;
extern u8 D_800D59EC;
extern u8 D_800D5A34;
extern s16 D_sc01_084_8018AB98;
extern s16 D_sc01_084_8018AB9A;
extern u16 D_sc01_084_8018AB9C;
extern s16 D_sc01_084_8018AB9E;
extern s16 D_sc01_084_8018ABA0;
extern s32 func_8012CBCC();
extern s32 func_80013328();

extern void func_8012B0B4();
extern void func_8012E32C();
extern s32 D_801270CC;
extern u8 D_sc01_084_8018AA74;
extern u8 D_sc01_084_801A2378;
extern s32 D_sc01_084_8018AC34;
extern u8 D_sc01_084_8018ABB0;
extern s32 func_80013478();
extern u8 D_sc01_084_8018ABBC;
extern s32 func_801290DC();
extern u8 D_80126B58;

extern s16 D_800D391C;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_80013F3C();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern u16 D_sc01_084_8018A6EC;
extern s16 D_sc01_084_8018A6EE;
extern s16 D_sc01_084_8018A6F0;
extern s16 D_sc01_084_8018A6F2;
extern s16 D_sc01_084_8018A6F4;
extern s16 D_sc01_084_8018A6F6;
extern u8 D_sc01_084_8018A610;
extern u8 D_sc01_084_8018A6F8;
extern u8 D_sc01_084_8018A704;

typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
extern L16 D_800A5E88[];
extern void func_80028620();
extern s32 D_801270C8[];
extern s32 rand();
typedef struct { s16 a, b; s32 type; } Ent8;
extern Ent8 D_sc01_084_8018A9EC[];
extern u8 * func_sc01_084_801845EC();

extern u8 D_sc01_084_8018AB18;
extern u8 D_sc01_084_8018CE0C;
extern u8 D_sc01_084_8018AAE4;
extern void func_80143970();
extern u8 D_sc01_084_8018AA7C;
extern u16 D_sc01_084_8018AABC;
extern u16 D_sc01_084_8018AABE;
extern u16 D_sc01_084_8018AAC0;
extern s16 D_801270C0;
extern WMtx D_800AF648;
extern void SetRotMatrix();
extern void SetTransMatrix();
extern s32 D_sc01_084_801C74D8;
extern s32 GetTPage();
extern s32 GetClut();
extern s32 RotTransPers();
extern OtRef D_800A651C[];
extern u8 *AllocPrim();
extern void SetPolyFT4();
extern void AddPrim();

extern void func_sc01_084_8017ED5C();
extern XY D_sc01_084_8018A6D4[];
extern u8 D_sc01_084_8018A6C8;
extern s32 D_sc01_084_801C74DC;
extern void func_8012E28C();
extern s16 D_sc01_084_8018A998[];
extern s16 D_sc01_084_8018A9A4[];
extern s16 D_sc01_084_8018A9A6[];
extern void func_8012D4B4();

extern s16 D_sc01_084_8018ABA4;
extern s16 D_sc01_084_8018ABA6;
extern u16 D_sc01_084_8018ABA8;
extern s16 D_sc01_084_8018ABAA;
extern s16 D_sc01_084_8018ABAC;
extern s32 rcos();

extern s32 func_800CF854();


typedef struct { s32 w[41]; } W164;
extern u8 D_8011F920;
extern void func_8016F398();
void func_sc01_084_8017DC04(void);
extern void EndScene();
extern u8 D_sc01_084_801C60B8;
extern s32 func_80171D78();
extern s32 D_sc01_084_8018AA48;
extern s32 D_sc01_084_8018AA4C;
extern u8 D_sc01_084_801C60C0;
extern s32 func_80171D1C();
void func_sc01_084_80182FEC(s32 arg0);


extern void func_8001CB6C();
extern void func_80128EA8();
extern u8 D_sc01_084_8018A8A8;
extern u8 D_sc01_084_8018A8B4;
extern u8 D_sc01_084_80191B50;
extern s32 D_sc01_084_8018A984[];
extern s32 *D_sc01_084_8018A978[];
extern B8 D_sc01_084_8018A790;
extern s32 func_8012BD14();
void func_sc01_084_8017F218(s32 arg0);
void func_sc01_084_80183630(u8 *arg0);
void func_sc01_084_80183790(u8 *arg0);
extern s32 D_sc01_084_8018ABF4;
void func_sc01_084_80183DA4(u8 *o);

void func_sc01_084_8017DA00(void) {
    u8 *p;

    p = &D_80126948;
    *(W164 *)&D_8011F920 = *(W164 *)p;
    AF(p, s32, 8) = 0x1F4;
    AF(p, s32, 0xC) = 0x1F4;
    func_8012A018((s32) func_sc01_084_8017DD2C, 1);
    func_sc01_084_8017DD2C((s32) p);
    func_8012A094((s32) p);
}

void func_sc01_084_8017DA9C(void) {
    D_80126950 = 0x1F4;
    D_80126954 = 0x1F4;
    func_8012A018((s32) func_sc01_084_8017DD2C, 2);
    func_sc01_084_8017DD2C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_084_8017DAF8(void) {
    *(W164 *)&D_80126948 = *(W164 *)&D_8011F920;
}

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

void func_sc01_084_8017DECC(u8 *o, s32 a1) {
    WMtx m;
    SV8 r;
    SV8 out;
    SV8 ang;

    AF(o, s32, 0x8) = (s16)func_80012C6C(AF(o, s16, 0x8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + D_80126B5E;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + (s16)D_80126B62;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126B66;
    ang.x = AF(o, u16, 0x18);
    ang.y = AF(o, u16, 0x1A) + a1;
    ang.z = AF(o, u16, 0x1C);
    func_80013F3C(&m);
    func_800123F0(&m, ang.z);
    func_80012558(&m, ang.y);
    func_800126C4(&m, ang.x);
    m.t[0] = AF(o, s16, 0x28) + D_80126B5E;
    m.t[1] = AF(o, s16, 0x2A) + (s16)D_80126B62;
    m.t[2] = AF(o, s16, 0x2C) + D_80126B66;
    r.x = 0;
    r.y = 0;
    r.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &r, &out);
    AF(o, s32, 0x3C) = out.x;
    AF(o, s32, 0x40) = out.y;
    AF(o, s32, 0x44) = out.z;
}

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

void func_sc01_084_8017E2CC(u8 *o) {
    func_8016F398();
    if (func_800CF854() != 0) {
        AF(o, u8, 0x214) = 3;
        return;
    }
    func_sc01_084_8017DC04();
    func_80154274(o, &D_800D5A34);
    EndScene(o);
    AF(o, u8, 0x214)++;
}

void func_sc01_084_8017E334(u8 *arg0) {
    if (D_80126980 & 0x8000) {
        AF(arg0, s16, 0x20C) = 0;
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_084_8017E384(u8 *arg0) {
    switch (AF(arg0, s16, 0x20C)) {
    case 0:
        if (func_8016F410(0) != 0) {
            func_80154274(arg0, &D_sc01_084_8018A310);
            AF(arg0, s16, 0x20E) = 0;
            AF(arg0, s16, 0x20C)++;
        }
        break;
    case 1:
        if ((AF(arg0, u16, 0xB8) & 0x8000) && AF(arg0, s16, 0x20E) == 0) {
            AF(arg0, s16, 0x20E) = 1;
            func_80154274(arg0, &D_sc01_084_8018A410);
        }
        if (func_8016F410(1) != 0) {
            func_80154274(arg0, &D_sc01_084_8018A390);
            AF(arg0, s16, 0x20C)++;
        }
        break;
    case 3:
        if (func_8016F410(2) != 0) {
            func_80154274(arg0, &D_800D59EC);
            AF(arg0, s16, 0x20C)++;
        }
        break;
    case 2:
    case 4:
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            func_80154274(arg0, &D_800D5A34);
            AF(arg0, s16, 0x20C)++;
        }
        break;
    case 5:
        break;
    }
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x4D)--;
        AF(arg0, u8, 0x214)++;
    }
}

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

void func_sc01_084_8017E598(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc01_084_801C60B8;
    if (func_80171D78(o, &v) != 0) {
        AF(o, u8, 0x214)++;
    }
}

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

void func_sc01_084_8017E7C0(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc01_084_801C60C0;
    if (func_80171D1C(o, &v, 0x80) != 0) {
        AF(o, s32, 0x204) = 8;
        AF(o, u8, 0x214)++;
    }
}

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

static inline void ea98_track(u8 *o, SV8 *sv, s32 k) {
    V4 p;
    s32 v;
    s32 t;

    ((s16 *)&p.x)[1] = sv->x;
    ((s16 *)&p.y)[1] = sv->y;
    ((s16 *)&p.z)[1] = sv->z;
    func_8012B14C(o, &D_sc01_084_8018A6C8);
    func_8012AD80(o);
    if (((AF(o, s16, 6) - sv->x) >= 0 ? (AF(o, s16, 6) - sv->x) : (sv->x - AF(o, s16, 6))) +
        ((AF(o, s16, 0xE) - sv->z) >= 0 ? (AF(o, s16, 0xE) - sv->z) : (sv->z - AF(o, s16, 0xE))) < 0x80) {
        return;
    }
    func_8012B77C(&v, o + 4, &p);
    t = v;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = t;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), t >> 16, k);
}

static inline void ea98_track_ang(u8 *o, SV8 *sv, s32 a) {
    SV8 w;
    s32 t;

    func_8012B0B4(&w, -a & 0xFFF, 0x400);
    t = *(s32 *)&w;
    sv->x = D_80126B5E;
    sv->y = D_80126B62;
    sv->z = D_80126B66;
    sv->x = t;
    sv->z = t >> 16;
    ea98_track(o, sv, 3);
}

void func_sc01_084_8017EA98(u8 *o) {
    SV8 sv;
    s32 a;
    s32 i;
    s32 j;

    if (AF(o, u16, 0x5C) & 1) {
        func_sc01_084_8017ED5C();
        return;
    }
    a = *(s16 *)&D_sc01_084_801C7748;
    for (j = 0, i = 0; i < 3; i++, j += 4) {
        if (a >= AF(D_sc01_084_8018A6D4, s16, j) && a < AF(D_sc01_084_8018A6D4, s16, j + 2)) {
            break;
        }
    }
    if (i == 3) {
        ea98_track_ang(o, &sv, a);
    } else {
        sv.x = D_80126B5E;
        sv.y = D_80126B62;
        sv.z = D_80126B66;
        sv.y = (s16)(sv.y - 0xA0) - AF(o, s16, 0x70) * 32;
        ea98_track(o, &sv, AF(o, s16, 0x70) * 4 + 6);
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc01_084_8017ED5C(u8 *o) {
    func_8012E9C0(o);
    SetScript(o, &D_sc01_084_8018A610);
    AF(o, s16, 2) = 3;
    AF(o, s32, 0x1C) = 0x14;
    AF(o, s16, 0x5C) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
}

void func_sc01_084_8017EDBC(u8 *o) {
    SV8 v;
    s32 b;
    s16 e;

    b = *(s16 *)&D_sc01_084_801C7748 + D_sc01_084_8018A6E0 + (AF(o, u8, 0x70) - 1) * D_sc01_084_8018A6EA;
    func_sc01_084_8018072C(b, D_sc01_084_801C774A + D_sc01_084_8018A6E2, &v);
    v.y -= D_sc01_084_8018A6E4 + D_sc01_084_8018A6E8 * AF(o, s32, 0x1C);
    e = AF(o, u16, 0xE2) + 0x70;
    AF(o, s16, 0xE2) = e;
    v.y += rsin(e) >> 8;
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_sc01_084_80180720(b) + 0x400;
    AF(o, s32, 0x1C)++;
    if (AF(o, s32, 0x1C) >= D_sc01_084_8018A6E6) {
        func_sc01_084_8017EEF4(o);
    }
}

void func_sc01_084_8017EEF4(u8 *o) {
    u8 unused[8];
    s16 d;

    AF(o, s16, 2) = 2;
    d = *(s16 *)&D_sc01_084_801C7748;
    AF(o, s32, 0x1C) = 0;
    AF(o, s16, 0x34) = 0;
    AF(o, s16, 0xE0) = 0;
    AF(o, s16, 0xDC) = d + 0x600;
}

void func_sc01_084_8017EF28(u8 *o) {
    SV8 v;
    s16 e;
    s32 t;

    if (AF(o, u16, 0x5C) & 1) {
        func_8012E9C0(o);
        SetScript(o, &D_sc01_084_8018A610);
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x14;
        AF(o, s16, 0x5C) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        e = AF(o, u16, 0xDC) - D_sc01_084_8018A6EC;
        AF(o, s16, 0xDC) = e;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = func_sc01_084_80180720(e);
        func_sc01_084_8018072C(AF(o, s16, 0xDC), D_sc01_084_801C774A + (AF(o, u8, 0x70) - 1) * D_sc01_084_8018A6F4, &v);
        t = D_sc01_084_8018A6F0 - D_sc01_084_8018A6F2 * AF(o, s32, 0x1C);
        if (t < 0) {
            t = 0;
        }
        v.y = v.y - t + 0x10;
        e = AF(o, u16, 0xE2) + 0x70;
        AF(o, s16, 0xE2) = e;
        v.y += rsin(e) >> 8;
        AF(o, s16, 6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
        if (AF(o, s16, 0xE0) == 0) {
            if (func_8012D5E4(o, &D_sc01_084_8018A704, &D_sc01_084_8018A704 + 8, 5) != 0) {
                AF(o, s16, 0xE0) = 1;
            }
        }
        if (AF(o, s32, 0x1C) == D_sc01_084_8018A6F6) {
            func_8002D4C8(0x4B5, 0);
        }
        AF(o, s32, 0x1C)++;
        if (AF(o, s32, 0x1C) >= D_sc01_084_8018A6EE) {
            AF(o, u16, 0x34)++;
            func_8012B14C(o, &D_sc01_084_8018A6F8);
            AF(o, s32, 0x1C) = 0x1E;
        }
        break;
    case 1:
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            e = AF(o, s16, 0x70);
            if (e == 0x100) {
                D_801270D0 = 0;
            } else if (!(e & 0xFF00)) {
                func_8012C588(0x26, 0);
            }
            func_8012C218(o);
        }
        break;
    }
}

extern void (*D_sc01_084_8018A758[])();
extern void (*D_sc01_084_8018A768[])();
void func_sc01_084_8017F198(u8 *o) {
    switch (AF(o, s16, 0x70) & 0xFF00) {
    case 0:
        D_sc01_084_8018A758[AF(o, u16, 2)]();
        break;
    case 0x100:
        D_sc01_084_8018A768[AF(o, u16, 2)]();
        break;
    }
}

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

void func_sc01_084_8017F474(u8 *o) {
    AF(o, B8, 0x50) = D_sc01_084_8018A790;
    if (D_801270D8 == 6 && func_8012BEE8(o) != 0 && func_8012BD14(o) <= 0x27100 && (D_80126B9C & 0x08000000)) {
        func_sc01_084_8017F218((s32) o);
    }
}

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

extern void bzero();
extern u8 D_sc01_084_8018ABF8;
extern u8 D_sc01_084_8018ABE4;
extern u8 D_sc01_084_8018AB8C;
void func_sc01_084_801838F0(s32 arg0);

extern s16 D_80126960;
extern void TransposeMatrix();
extern void ApplyMatrixSV();
extern s32 TestPadAll();
void func_sc01_084_80184090(s32 arg0);
extern void func_80129350();

void func_sc01_084_8017F690(u8 *o) {
    u8 *p;

    if (AF(o, s32, 0xDC) != D_801270C8[4]) {
        AF(o, s32, 0xDC) = D_801270C8[4];
        switch (D_801270C8[4]) {
        case 2:
        case 4:
        case 6:
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            p = func_8012913C(3);
            if (p != 0) {
                func_80129350(p, o);
                AF(p, s16, 0xA) -= 0x30;
            }
            break;
        case 3:
        case 5:
            AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
            break;
        }
    }
}

void func_sc01_084_8017F768(u8 *arg0) {
    D_sc01_084_8018A8A0[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017F7A4(u8 *o) {
    u8 *m;

    m = AF(o, u8 *, 0x20);
    func_8001CB6C(m, &D_sc01_084_8018A8A8, 0x2E0, 0);
    AF(m, u8, 0x27) = 0x9E;
    AF(m, s16, 0x1A) = 0x4000;
    AF(m, s16, 0x18) = 0x4000;
    AF(m, s16, 0x10) = 0x400;
    AF(m, s32, 4) |= 0x50000000;
    func_80128EA8(m, o + 0x24, &D_sc01_084_8018A8B4);
    AF(o, s16, 2)++;
}

void func_sc01_084_8017F83C(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc01_084_8017F87C(u8 *arg0) {
    D_sc01_084_8018A8E4[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017F8B8(u8 *o) {
    u8 *p;
    u16 n;

    p = func_8012913C(7);
    if (p != 0) {
        AF(p, s16, 6) = 0x20;
        AF(p, s16, 0xA) = 0x80;
        AF(p, s16, 0xE) = 0;
    }
    func_8012913C(8);
    ((CV4 *)&D_sc01_084_801C7AC0)->r = ((CV4 *)&D_sc01_084_801C7AC0)->g = ((CV4 *)&D_sc01_084_801C7AC0)->b = 0xE0;
    ((CV4 *)&D_sc01_084_801C7AC0)[1].r = ((CV4 *)&D_sc01_084_801C7AC0)[1].g = ((CV4 *)&D_sc01_084_801C7AC0)[1].b = 0;
    func_800233CC(&D_sc01_084_801C7AC0, 0xE0);
    ((CV4 *)&D_sc01_084_801C7B00)->r = ((CV4 *)&D_sc01_084_801C7B40)->r = 0xFF;
    ((CV4 *)&D_sc01_084_801C7B00)->g = ((CV4 *)&D_sc01_084_801C7B40)->g = 0xC0;
    ((CV4 *)&D_sc01_084_801C7B00)->b = ((CV4 *)&D_sc01_084_801C7B40)->b = 0x40;
    ((CV4 *)&D_sc01_084_801C7B00)[1].r = ((CV4 *)&D_sc01_084_801C7B00)[1].g = ((CV4 *)&D_sc01_084_801C7B00)[1].b = ((CV4 *)&D_sc01_084_801C7B40)[1].r = ((CV4 *)&D_sc01_084_801C7B40)[1].g = ((CV4 *)&D_sc01_084_801C7B40)[1].b = 0;
    func_800233CC(&D_sc01_084_801C7B00, 0x80);
    func_800233CC(&D_sc01_084_801C7B40, 0x1C0);
    n = AF(o, u16, 2) + 1;
    D_sc01_084_801C7B80 = &D_sc01_084_801C7830;
    AF(o, u16, 2) = n;
}

void func_sc01_084_8017F9F4(u8 *o) {
    s16 a;
    u8 *p;
    s32 x;

    if (D_801270D8 >= 6) {
        for (a = 0x80; a < 0x1000; a += 0x200) {
            p = func_8012913C(6);
            if (p != 0) {
                AF(p, s16, 6) = (u32)(rcos(a) * 55) >> 8;
                AF(p, s16, 0xA) = -0x220;
                AF(p, s16, 0xE) = (u32)(rsin(a) * 55) >> 8;
            }
        }
        for (a = 0x180; a < 0x1000; a += 0x200) {
            p = func_8012913C(6);
            if (p != 0) {
                AF(p, s16, 6) = (u32)(rcos(a) * 103) >> 9;
                AF(p, s16, 0xA) = -0x388;
                AF(p, s16, 0xE) = (u32)(rsin(a) * 103) >> 9;
            }
        }
        for (a = 0x180; a < 0x1000; a += 0x400) {
            p = func_8012913C(6);
            if (p != 0) {
                /* MATCH-TRICK: the (s16) cast adds two RTL insns so loop.c keeps -0x4F0 in the loop */
                x = (s16)((u32)(rcos(a) * 3) >> 4);
                AF(p, s16, 6) = x;
                AF(p, s16, 0xA) = -0x4F0;
                AF(p, s16, 0xE) = (u32)(rsin(a) * 3) >> 4;
            }
        }
        func_8012C218(o);
    }
}

void func_sc01_084_8017FBD4(u8 *arg0) {
    D_sc01_084_8018A8EC[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017FC10(u8 *o) {
    WMtx m;
    SV8 a;
    u8 *p;
    u8 *q;
    u16 n;

    p = AF(o, u8 *, 0x20);
    func_8001CD50(p, &D_sc01_084_801C7AC0);
    q = D_sc01_084_801C7B80;
    AF(p, s32, 4) |= 0x50000100;
    AF(p, u8 *, 0x34) = q;
    a.x = 0x40;
    a.y = ratan2(AF(o, s16, 6), AF(o, s16, 0xE));
    a.z = 0;
    RotMatrixYXZ(&a, &m);
    m.t[0] = AF(o, s16, 6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    *(WMtx *)D_sc01_084_801C7B80 = m;
    n = AF(o, u16, 2) + 1;
    D_sc01_084_801C7B80 += 0x20;
    AF(o, u16, 2) = n;
}

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

void func_sc01_084_8017FE64(u8 *o) {
    WMtx m;
    SV8 v;

    v.x = 0x100;
    v.y = -0x440;
    if (D_801270D8 != 0) {
        v.z = 0x600;
    } else if (D_80126960 == 0x60) {
        v.z = 0x380;
    } else {
        v.z = 0x600;
    }
    TransposeMatrix(&D_800AF648, &m);
    ApplyMatrixSV(&m, &v, &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    if (D_801270D8 >= 2) {
        func_801292C8(o);
    }
}

void func_sc01_084_8017FF2C(u8 *arg0) {
    D_sc01_084_8018A904[AF(arg0, u16, 2)]();
}

void func_sc01_084_8017FF68(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_084_80191B50);
    SetScript(arg0, (s32) &D_sc01_084_801A1820);
    AF(arg0, s16, 2) = 1;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
    AF(arg0, s32, 0xDC) = D_801270D8;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 1;
}

void func_sc01_084_80180000(u8 *o) {
    s16 y;

    if (AF(o, s32, 0xE0) != 0 && --AF(o, s32, 0xE0) == 0) {
        D_800A5E88[0].x = 0;
        D_800A5E88[0].y = 0x1E;
        D_800A5E88[0].z = 0;
        D_800A5E88[0].r = 0x99;
        D_800A5E88[0].g = 0xB2;
        D_800A5E88[0].b = 0xB2;
        func_80028620(0, &D_800A5E88[0]);
        D_800A5E88[1].r = 0x19;
        D_800A5E88[1].g = 0x19;
        func_80028620(1, &D_800A5E88[1]);
        func_8012C218(o);
        return;
    }
    if (--AF(o, s32, 0xE4) == 0) {
        D_800A5E88[0].x = (rand() - 0x4000) >> 10;
        y = D_80126B62;
        if (y >= -0x2A0) {
            D_800A5E88[0].y = 0x1E;
        } else if (y >= -0x4A0) {
            D_800A5E88[0].y = 0;
        } else {
            D_800A5E88[0].y = -0x1E;
        }
        D_800A5E88[0].z = (rand() - 0x4000) >> 10;
        func_80028620(0, &D_800A5E88[0]);
        AF(o, s32, 0xE4) = (rand() & 1) + 1;
    }
    if (AF(o, s32, 0xDC) != D_801270C8[4]) {
        AF(o, s32, 0xDC) = D_801270C8[4];
        switch (D_801270C8[4]) {
        case 2:
        case 4:
        case 6:
            AF(o, s32, 0xE0) = 0x1E;
            break;
        case 3:
        case 5:
            break;
        }
    }
}

void func_sc01_084_801801BC(u8 *arg0) {
    D_sc01_084_8018A90C[AF(arg0, u16, 2)]();
}

s32 func_sc01_084_801801F8(u8 *o) {
    s32 a;
    s32 y;

    a = *(s16 *)&D_sc01_084_801C7748 + 0xC00;
    y = AF(o, s16, 2);
    if (y >= -0x60) {
        y = 0;
    } else if (y < -0x601) {
        y = 0x3000;
    } else {
        y = ((y + 0x20) * 0x3000) / -0x600;
    }
    if (((a - y) < 0 ? -(a - y) : (a - y)) < 0x21) {
        return 1;
    }
    return 0;
}

s32 func_sc01_084_8018028C(u8 *o) {
    s32 y = AF(o, s16, 0xA);
    s32 d = *(s16 *)&D_sc01_084_801C7748;

    if (y >= -0x60) {
        y = 0;
    } else if (y < -0x601) {
        y = 0x3000;
    } else {
        y = (y + 0x20) * 0x3000 / -0x600;
    }
    d -= y;
    if (d >= 0x100) {
        return 1;
    }
    return d < -0xBFF;
}

void func_sc01_084_80180300(u8 *o) {
    SV8 a;
    SV8 b;
    s32 i;

    for (i = 0; i < 8; i++) {
        a.x = i << 8;
        a.y = 0;
        a.z = 0;
        b.x = (i + 1) << 8;
        b.y = 0;
        b.z = 0;
        func_8012D4B4(o, &a, &b, 0xFF);
        b.y += 0x10;
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
        a.y -= 0x20;
        func_8012D4B4(o, &a, &b, 0xFF);
        a.x = -(i << 8);
        a.y = 0;
        a.z = 0;
        b.x = -((i + 1) << 8);
        b.y = 0;
        b.z = 0;
        func_8012D4B4(o, &a, &b, 0xFF);
        b.y += 0x10;
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
        a.y -= 0x20;
        func_8012D4B4(o, &a, &b, 0xFF);
    }
    for (i = 0; i < 8; i++) {
        a.x = 0;
        a.y = i << 8;
        a.z = 0;
        b.x = 0;
        b.y = (i + 1) << 8;
        b.z = 0;
        func_8012D4B4(o, &a, &b, 0xFF00);
        b.z += 0x10;
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
        a.z -= 0x20;
        func_8012D4B4(o, &a, &b, 0xFF00);
        a.x = 0;
        a.y = -(i << 8);
        a.z = 0;
        b.x = 0;
        b.y = -((i + 1) << 8);
        b.z = 0;
        func_8012D4B4(o, &a, &b, 0xFF00);
        b.z += 0x10;
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
        a.z -= 0x20;
        func_8012D4B4(o, &a, &b, 0xFF00);
    }
    for (i = 0; i < 8; i++) {
        a.x = 0;
        a.y = 0;
        a.z = i << 8;
        b.x = 0;
        b.y = 0;
        b.z = (i + 1) << 8;
        func_8012D4B4(o, &a, &b, 0xFF0000);
        b.y += 0x10;
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
        a.y -= 0x20;
        func_8012D4B4(o, &a, &b, 0xFF0000);
        a.x = 0;
        a.y = 0;
        a.z = -(i << 8);
        b.x = 0;
        b.y = 0;
        b.z = -((i + 1) << 8);
        func_8012D4B4(o, &a, &b, 0xFF0000);
        b.y += 0x10;
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
        a.y -= 0x20;
        func_8012D4B4(o, &a, &b, 0xFF0000);
    }
}

void func_sc01_084_80180614(u8 *arg0) {
    D_sc01_084_8018A990[AF(arg0, u16, 2)]();
}

void func_sc01_084_80180650(s32 ang, SV8 *out) {
    s32 y;
    s32 r;
    s32 x;

    y = -(ang * 0x600) / 0x3000 - 0x22;
    r = -(ang * 0xA0) / 0x3000 + 0x260;
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    out->z = (rsin(ang) * r) >> 12;
    out->x = x;
    out->y = y;
}

s32 func_sc01_084_80180720(s32 arg0) {
    return -arg0 & 0xFFF;
}

void func_sc01_084_8018072C(s32 ang, s32 r, SV8 *v) {
    s32 x;
    s32 y;
    s32 z;

    y = -(ang * 0x600) / 0x3000 - 0x22;
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    v->x = x;
    v->y = y;
    v->z = z;
}

s32 func_sc01_084_801807D8(SV8 *p) {
    s32 ang;
    s32 r;
    s32 h[3];
    u8 unused[8];
    s32 d[3];
    u8 unused2[8];
    s32 y;

    ang = (ratan2(D_800D391C - p->z, p->x - *(s16 *)&D_800D3918) - 0x400) & 0xFFF;
    ang = (-ang - 0x400) & 0xFFF;
    if (ang >= 0xC00 && p->y >= -0x80) {
        return 0;
    }
    h[0] = -(ang * 0x600) / 0x3000 - 0x22;
    h[1] = -((ang + 0x1000) * 0x600) / 0x3000 - 0x22;
    h[2] = -((ang + 0x2000) * 0x600) / 0x3000 - 0x22;
    y = p->y;
    if (y >= -0x60) {
        return 0;
    }
    if (y < -0x601) {
        return 0x3000;
    }
    d[0] = p->y - h[0];
    if (d[0] < 0) {
        d[0] = -d[0];
    }
    d[1] = p->y - h[1];
    if (d[1] < 0) {
        d[1] = -d[1];
    }
    d[2] = p->y - h[2];
    if (d[2] < 0) {
        d[2] = -d[2];
    }
    if (d[0] == 0) {
        r = 0;
    } else if (d[1] == 0) {
        r = 0x1000;
    } else if (d[2] == 0) {
        r = 0x2000;
    } else if (d[0] < d[1] && d[0] < d[2]) {
        r = 0;
    } else if (d[1] < d[2]) {
        r = 0x1000;
    } else {
        r = 0x2000;
    }
    return ang | r;
}

void func_sc01_084_801809C4(u8 *o) {
    SV8 v[6];
    s32 sxy[6];
    u8 *pr[2];
    SV8 w;
    s32 p;
    s32 flag;
    s32 i;
    s32 x;
    s32 y;
    s32 z;
    u32 c;
    u32 d;
    u16 *pt;

    x = AF(o, s16, 0);
    y = AF(o, s16, 2);
    for (i = 0; i < 3; i++) {
        func_8012B0B4(&w, y - D_sc01_084_8018A998[i], D_sc01_084_8018A9A4[0]);
        v[i].y = x;
        v[i].x = *(s32 *)&w;
        v[i].z = *(s32 *)&w >> 16;
        func_8012B0B4(&w, y - D_sc01_084_8018A998[i + 3], D_sc01_084_8018A9A6[0]);
        v[i + 3].y = x;
        v[i + 3].x = *(s32 *)&w;
        v[i + 3].z = *(s32 *)&w >> 16;
    }
    func_8012E32C();
    z = 0;
    for (i = 0; i < 6; i++) {
        z += RotTransPers(&v[i], &sxy[i], &p, &flag);
    }
    z /= 6;
    pr[0] = AllocPrim(0x48);
    pr[1] = pr[0] + 0x24;
    c = AF(o, u32, 4);
    AF(pr[0], s32, 4) = AF(pr[1], s32, 4) = 0;
    AF(pr[0], s32, 0xC) = AF(pr[1], s32, 0xC) = 0;
    d = (((c >> 16) * 7 >> 3) << 16) | (c & 0xFFFF);
    AF(pr[0], u32, 0x14) = AF(pr[1], u32, 0x14) = d;
    AF(pr[0], u32, 0x1C) = AF(pr[1], u32, 0x1C) = (d & 0xFCFCFC) >> 2;
    AF(pr[0], u8, 7) = 0x3A;
    AF(pr[0], u32, 0) = 0x8000000;
    AF(pr[1], u8, 7) = 0x3A;
    AF(pr[1], u32, 0) = 0x8000000;
    AF(pr[0], s32, 8) = sxy[0];
    AF(pr[0], s32, 0x10) = sxy[3];
    AF(pr[0], s32, 0x18) = sxy[1];
    AF(pr[0], s32, 0x20) = sxy[4];
    AF(pr[1], s32, 8) = sxy[2];
    AF(pr[1], s32, 0x10) = sxy[5];
    AF(pr[1], s32, 0x18) = sxy[1];
    AF(pr[1], s32, 0x20) = sxy[4];
    pt = &D_800B9A02;
    AddPrim(D_800A651C[*pt].ot + z, pr[0]);
    AddPrim(D_800A651C[*pt].ot + z, pr[1]);
    func_8012E28C(z, 1);
}

void func_sc01_084_80180CBC(u8 *o) {
    SetScript(o, &D_sc01_084_80186B78);
    AF(o, s16, 2) = 2;
    AF(o, s32, 0xDC) = D_sc01_084_8018A9D0;
    AF(o, s32, 0xE0) = D_sc01_084_8018A9D2;
    AF(o, s32, 0xE4) = 0;
    AF(o, s16, 0xFC) = 0x18;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, s32, 0xE4);
    AF(o, s32, 0x1C) = 0x12C;
    D_sc01_084_801C774C = 1;
}

void func_sc01_084_80180D38(u8 *o) {
    s32 f;
    s32 dc;

    f = 0;
    if (AF(o, s32, 0xE4) > 0) {
        AF(o, s32, 0xDC) -= AF(o, s32, 0xE0);
    } else {
        f = 1;
        AF(o, s32, 0xDC) += AF(o, s32, 0xE0);
    }
    AF(o, s32, 0xE4) += AF(o, s32, 0xDC);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, s32, 0xE4);
    if (AF(o, s32, 0xE4) <= 0) {
        if (f == 1) goto end;
    } else {
        if (f == 0) goto end;
    }
    dc = AF(o, s32, 0xDC);
    if (dc > 0) {
        if (dc - 3 >= 0) goto end;
    } else {
        if (dc + 3 <= 0) goto end;
    }
    SetScript(o, &D_sc01_084_80186B78);
    AF(o, s16, 2) = 2;
    AF(o, s32, 0xDC) = D_sc01_084_8018A9D0;
    AF(o, s32, 0xE0) = D_sc01_084_8018A9D2;
    AF(o, s32, 0xE4) = 0;
    AF(o, s16, 0xFC) = 0x18;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, s32, 0xE4);
    AF(o, s32, 0x1C) = 0x12C;
    D_sc01_084_801C774C = 1;
end:
    AF(o, s32, 0x24) = AF(o, s16, 6);
    AF(o, s32, 0x28) = AF(o, s16, 0xA);
    AF(o, s32, 0x2C) = AF(o, s16, 0xE);
}

void func_sc01_084_80180E74(s32 arg0) {
    s32 i;
    s32 c;
    Star8 *p;

    AF(arg0, s32, 0x28) -= 8;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) >= 0xF) {
            func_8012AD80(arg0);
        }
        if (AF(arg0, s32, 0x1C) == 2) {
            func_sc01_084_8017DA00();
        }
        if (AF(arg0, s32, 0x1C) == 0xF) {
            D_sc01_084_801C7752 = 1;
            func_8002D4C8(0x4B3, 0);
            func_8013C9C4(&D_sc01_084_8018A9A8);
            D_801270D8 = 2;
        }
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x27;
            AF(arg0, s16, 8) = 0;
            AF(arg0, u16, 0x34)++;
            AF(arg0, s16, 0xA) = AF(arg0, u16, 0xFE);
            func_8012B21C(arg0);
            D_801270D8 = 3;
        }
        break;
    case 1:
        if (AF(arg0, s32, 0x1C) >= 0xF) {
            func_8012AD80(arg0);
        }
        if (AF(arg0, s32, 0x1C) == 2) {
            func_sc01_084_8017DA9C();
        }
        if (AF(arg0, s32, 0x1C) == 0xF) {
            func_8002D4C8(0x4B3, 0);
            func_8013C9C4(&D_sc01_084_8018A9A8);
            D_801270D8 = 4;
        }
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x27;
            AF(arg0, s16, 8) = 0;
            AF(arg0, u16, 0x34)++;
            AF(arg0, s16, 0xA) = AF(arg0, u16, 0xFE);
            func_8012B21C(arg0);
            D_801270D8 = 5;
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) >= 0xF) {
            func_8012AD80(arg0);
        }
        if (AF(arg0, s32, 0x1C) == 0xF) {
            func_8002D4C8(0x4B3, 0);
            func_8013C9C4(&D_sc01_084_8018A9A8);
            D_801270D8 = 6;
        }
        if (AF(arg0, s32, 0x1C) == 0x1A) {
            func_8002D4C8(0x4B2, 0);
        }
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x100;
            AF(arg0, u16, 0x34)++;
            func_8012B21C(arg0);
            D_sc01_084_801C75E0 = 0;
            p = D_sc01_084_801C74E0;
            for (i = 0; i < 0x20; i++) {
                p->y = rand() & 0xFFF;
                p->x = -((rand() & 0x3FF) + 0x180);
                p->col = 0x1F1F1F;
                p++;
            }
            func_8002D4C8(4, 0x4BD);
            if (AF(arg0, s32, 0xCC) != 0) {
                func_8012C218(AF(arg0, s32, 0xCC));
            }
        }
        break;
    case 3:
        p = D_sc01_084_801C74E0;
        for (i = 0; i < D_sc01_084_801C75E0 / 4; i++, p++) {
            c = p->col;
            if (c != 0xFFFFFF) {
                c += 0x10101;
            }
            p->col = c;
            func_sc01_084_801809C4(p);
        }
        if (D_sc01_084_801C75E0 < 0x80) {
            D_sc01_084_801C75E0++;
        }
        if (AF(arg0, s32, 0x1C) < 0x20) {
            func_80016450(((0x20 - AF(arg0, s32, 0x1C)) * 8 - 1) & 0xFF, 0);
        }
        if (AF(arg0, s32, 0x1C) == 2) {
            func_sc01_084_8017DAF8();
        }
        if (func_8012BEE8(arg0) != 0) {
            func_sc01_084_80185904();
            func_8002850C(0x800, 0x800, 0x800);
            func_80028558(0, 0x80, 0x80, 0x80);
            AF(arg0, s32, 0x1C) = 0x20;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 4:
        func_80016450(((AF(arg0, s32, 0x1C) - 1) * 8) & 0xF8, 0);
        if (func_8012BEE8(arg0) != 0) {
            func_80175414();
            func_sc01_084_801812F4(arg0);
            func_8017484C();
            func_8012C51C(&D_sc01_084_8018A9D8, 0);
        }
        break;
    }
}

void func_sc01_084_801812F4(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    D_sc01_084_8018A91A = -1;
}

void func_sc01_084_80181310(void) {
    Ent8 *e;
    s32 pos;
    s32 *q;

    if (D_sc01_084_801C774C == 1) {
        D_801270C8[0] = 0;
        pos = *(s16 *)&D_sc01_084_801C7748;
        for (e = D_sc01_084_8018A9EC; e->type != -1; e++) {
            if (e->a <= pos && pos < e->b) {
                switch (e->type) {
                case 1:
                    q = &D_801270D0;
                    if (*q == 0) {
                        *q = 1;
                        func_8012C658(0x26, 0x100, 0);
                        func_8012C658(0x26, 0x101, 0);
                        func_8012C658(0x26, 0x102, 0);
                    }
                    break;
                case 2:
                    if (D_801270C8[3] == 0 && *(s16 *)&D_sc01_084_801C7748 < 0x2501) {
                        func_8012C658(0x1D, 0, 0);
                        D_801270C8[3]++;
                    }
                    break;
                case 3:
                    if (D_801270C8[3] == 0 && *(s16 *)&D_sc01_084_801C7748 < 0x2501) {
                        func_8012C658(0x1D, 1, 0);
                        D_801270C8[3]++;
                    }
                    break;
                case 4:
                    D_801270C8[0] = 1;
                    break;
                }
            }
        }
    }
}

void func_sc01_084_801814E8(u8 *arg0) {
    extern void (*D_sc01_084_8018AA2C[])();
    SV8 sv;
    s32 v;
    u16 t;

    D_sc01_084_8018AA2C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 2) != 0) {
        if (D_sc01_084_801C774C > 0) {
            D_sc01_084_8018A914 = AF(arg0, s32, 0x24);
            D_sc01_084_8018A916 = AF(arg0, s32, 0x28);
            D_sc01_084_8018A918 = AF(arg0, s32, 0x2C);
            D_sc01_084_8018A91A = 0;
        }
        if (D_80126B9C & 0x08000000) {
            sv.x = D_80126B5E;
            sv.y = D_80126B62;
            sv.z = D_80126B66;
            (&D_sc01_084_801C774A)[-1] = func_sc01_084_801807D8(&sv);
            D_sc01_084_801C774A = SquareRoot0(sv.x * sv.x + sv.z * sv.z);
            if (D_sc01_084_801C774E < *(s16 *)&D_sc01_084_801C7748) {
                D_sc01_084_801C774E = *(s16 *)&D_sc01_084_801C7748;
            }
        }
        if (D_sc01_084_801C774C == 1) {
            if (*(s16 *)&D_sc01_084_801C7748 >= 0x1E80) {
                v = 0x7F;
            } else {
                v = 0x7F - (0x1E80 - *(s16 *)&D_sc01_084_801C7748) * 0x7F / 7808;
            }
            func_8002D4C8(0x4BD, (u16)(v | 0x1000));
        }
        if (D_sc01_084_801C7752 == 1) {
            if (D_sc01_084_801C7750 == 0) {
                func_8002D4C8(1, 0);
            }
            if (++D_sc01_084_801C7750 >= 0x52 && func_8001AAA0(0x12) != 0) {
                D_sc01_084_801C7752 = 2;
            }
        }
        switch (D_801270DC) {
        case 0:
            if (*(s16 *)&D_sc01_084_801C7748 >= 0x1AE6) {
                D_801270DC = 1;
                func_sc01_084_8017E70C();
            }
            break;
        case 1:
            D_801270E0++;
            if (D_80126D50 == 0) {
                D_801270DC = 2;
                D_801270E0 = 0;
            }
            break;
        case 2:
            break;
        }
        func_sc01_084_80181310();
        if (D_sc01_084_801C774C == 1 && D_801270D8 == 0 && *(s16 *)&D_sc01_084_801C7748 >= 0x23F0 && D_801270E4 <= 0) {
            if (--D_801270E8 <= 0) {
                D_801270E8 = 0x1E;
                func_8012C658(0x1D, 2, 0);
                D_801270E4++;
            }
        }
    }
    if (AF(arg0, u16, 2) == 2) {
        t = AF(arg0, u16, 0x5C);
        if (t & 1) {
            if (AF(arg0, u16, 0x5E) == 0x10) {
                AF(arg0, u16, 0x5C) = 0;
                AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
                AF(arg0, u16, 2) = 3;
                func_8012B21C(arg0);
                AF(arg0, s32, 0x1C) = 0x27;
                AF(arg0, s16, 0x34) = 0;
                AF(arg0, u16, 0xFE) = AF(arg0, u16, 0xA);
                D_sc01_084_801C774C = 2;
                func_8002D4C8(0x4BD, 0x1000);
                func_80174824();
                D_801270D8 = 1;
                func_80175454();
            } else {
                AF(arg0, u16, 0x5C) = t & 0xFFFE;
            }
        }
    }
}

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

void func_sc01_084_801819D0(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = D_sc01_084_8018AA48;
    SetScript(o, &D_sc01_084_801A1AB8);
    AF(o, s16, 2) = 5;
    AF(o, s32, 0x1C) = D_sc01_084_8018AA4C;
    func_8012B21C(o);
    func_8012B14C(o, &v);
    AF(o, s16, 0xFC) = 0;
}

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

void func_sc01_084_80181DEC(u8 *o) {
    SV8 sv;

    if (rand() & 1) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        SetScript(o, &D_sc01_084_801A1A10);
        AF(o, s32, 0x1C) = 10;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) |= 0x8000;
        AF(o, u16, 0xFC) ^= 1;
        sv.x = AF(o, s16, 6);
        sv.y = AF(o, s16, 0xA);
        sv.z = AF(o, s16, 0xE);
        AF(o, s16, 0xDE) = SquareRoot0(sv.x * sv.x + sv.z * sv.z);
        AF(o, s16, 0xDC) = func_sc01_084_801807D8(&sv);
    } else {
        AF(o, s16, 2) = 5;
        SetScript(o, &D_sc01_084_801A18C8);
        AF(o, s32, 0x1C) = 0x28;
    }
}

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

void func_sc01_084_801822A4(u8 *o) {
    if (AF(o, s16, 0x70) == 0) {
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x34) = 0;
        SetScript(o, &D_sc01_084_801A1C10);
        AF(o, s32, 0x1C) = 0x18;
        AF(o, u16, 0x100) |= 4;
    } else {
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x34) = 3;
        SetScript(o, &D_sc01_084_801A2848);
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, u16, 0x100) |= 4;
    }
}

void func_sc01_084_80182328(u8 *arg0) {
    SV8 sv;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 9) {
            func_8012D5E4(arg0, &D_sc01_084_8018AA8C, &D_sc01_084_8018AA8C + 8, 11);
        }
        if (func_8012BEE8(arg0) == 0) {
            break;
        }
        if (func_8012BCCC(arg0) > 0x40000) {
            goto reset;
        }
        AF(arg0, s16, 2) = 4;
        AF(arg0, s16, 0x34) = 1;
        SetScript(arg0, &D_sc01_084_801A1820);
        AF(arg0, s32, 0x1C) = 10;
        AF(arg0, u16, 0x100) |= 4;
        break;
    case 1:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s16, 2) = 4;
            AF(arg0, s16, 0x34) = 2;
            SetScript(arg0, &D_sc01_084_801A1CD8);
            AF(arg0, s32, 0x1C) = 0x18;
            AF(arg0, u16, 0x100) |= 4;
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            func_8012D5E4(arg0, &D_sc01_084_8018AA8C, &D_sc01_084_8018AA8C + 8, 11);
        }
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0xFC) = 0;
            AF(arg0, u8, 0xC1) = 0;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc01_084_801A1A10);
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, s32, 0x1C) = 10;
            AF(arg0, u16, 0x5C) |= 0x8000;
            AF(arg0, u16, 0xFC) ^= 1;
            sv.x = AF(arg0, s16, 6);
            sv.y = AF(arg0, s16, 0xA);
            sv.z = AF(arg0, s16, 0xE);
            AF(arg0, s16, 0xDE) = SquareRoot0(sv.x * sv.x + sv.z * sv.z);
            AF(arg0, s16, 0xDC) = func_sc01_084_801807D8(&sv);
        }
        break;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 4);
        t = AF(arg0, s32, 0x1C);
        if (t == 12) {
            func_sc01_084_801845EC(arg0, 0);
        } else if (t == 15) {
            func_sc01_084_80185E68(arg0, &D_sc01_084_8018AA6C);
        }
        if (func_8012BEE8(arg0) != 0) {
            if (++AF(arg0, s16, 0xE0) >= 3) {
                AF(arg0, s16, 0xE0) = 0;
                AF(arg0, s16, 0x34)++;
                SetScript(arg0, &D_sc01_084_801A2940);
                AF(arg0, s32, 0x1C) = 0x1E;
            } else {
                AF(arg0, s32, 0x1C) = 1;
                AF(arg0, s16, 0x34)++;
            }
        }
        break;
    case 4:
        if (func_8012BEE8(arg0) == 0) {
            break;
        }
        if (func_8012BCCC(arg0) > 0x64000 || AF(arg0, s16, 0xDC) <= *(s16 *)&D_sc01_084_801C7748) {
            goto reset;
        }
        if (AF(arg0, s16, 0x70) == 0) {
            AF(arg0, s16, 2) = 4;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc01_084_801A1C10);
            AF(arg0, s32, 0x1C) = 0x18;
            AF(arg0, u16, 0x100) |= 4;
        } else {
            AF(arg0, s16, 2) = 4;
            AF(arg0, s16, 0x34) = 3;
            SetScript(arg0, &D_sc01_084_801A2848);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x100) |= 4;
        }
        break;
    reset:
        AF(arg0, u16, 0xFC) = 0;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 0;
        SetScript(arg0, &D_sc01_084_801A1A10);
        AF(arg0, s32, 0x1C) = 10;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) |= 0x8000;
        AF(arg0, u16, 0xFC) ^= 1;
        sv.x = AF(arg0, s16, 6);
        sv.y = AF(arg0, s16, 0xA);
        sv.z = AF(arg0, s16, 0xE);
        AF(arg0, s16, 0xDE) = SquareRoot0(sv.x * sv.x + sv.z * sv.z);
        AF(arg0, s16, 0xDC) = func_sc01_084_801807D8(&sv);
        break;
    }
}

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
        StartRumbleScript(&D_80062BDC);
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

void func_sc01_084_80182E14(s32 arg0) {
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) += 0xE0;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
        if (func_8012CBCC(arg0) != 0) {
            v = func_80013328(arg0 + 4, &D_80126B5C);
            if (v < 0) {
                v = 0;
            }
            if (v > 0x300) {
                v = 0x300;
            }
            v = (0x300 - v) * 0x7F / 0x300;
            if (v < 0) {
                v = 0;
            }
            if (v > 0x7F) {
                v = 0x7F;
            }
            func_8002D4C8(0x43B, (u16) (v | 0x1000));
            func_8012B23C(arg0);
            AF(arg0, s32, 0x14) = 0xFFF00000;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, s16, 0x34) = 1;
        }
        break;
    case 1:
        if (func_8012CBCC(arg0) != 0) {
            func_8012B23C(arg0);
            AF(arg0, s16, 0x34) = 2;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, s32, 0x1C) = 10;
        }
        break;
    case 2:
        if (func_8012BEE8(arg0) != 0) {
            func_sc01_084_80182F90(arg0);
        }
        break;
    }
}

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

void func_sc01_084_80183068(u8 *o) {
    u8 *t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc01_084_801A2848);
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
    case 2:
    case 3:
        if (D_801270D8 != 0) {
            if (AF(o, s16, 0x70) == 2) {
                D_801270E4 -= 1;
            } else {
                D_801270D4 -= 1;
            }
            func_8012C098(o);
            break;
        }
        if (AF(o, s32, 0x1C) == 12) {
            func_sc01_084_801845EC(o, 0);
        } else if (AF(o, s32, 0x1C) == 15) {
            func_sc01_084_80185E68(o, &D_sc01_084_8018AA6C);
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            AF(o, s32, 0x1C) = 0x1E;
            if (AF(o, u16, 0x34) == 4) {
                SetScript(o, &D_sc01_084_801A2940);
            }
        }
        break;
    case 4:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 2) = 0xE;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc01_084_801A21E0);
            t = AF(o, u8 *, 0x20);
            AF(o, u16, 0x5C) = 0xAA00;
            AF(o, s16, 0x5E) = 0;
            AF(t, s16, 0x14) = 0;
            AF(t, s16, 0x10) = 0;
            func_8012B23C(o);
            SetScript(o, &D_sc01_084_801A2848);
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
}

void func_sc01_084_80183244(u8 *o) {
    SV8 sv;
    SV8 sv2;
    s32 ang;
    s32 y;
    s32 r;
    s32 x;
    s32 z;

    if (func_8012C354(o, &D_sc01_084_8018AB18) == 0) {
        return;
    }
    if (AF(o, s16, 0x70) != 0) {
        func_8001C214(AF(o, s32, 0x20), &D_sc01_084_8018CE0C);
        AF(o, u8 *, 0x78) = &D_sc01_084_8018AAE4;
    }
    func_8001D0E8(AF(o, s32, 0x20), 0xBE, 0x8C);
    AF(o, s16, 0x100) = 0;
    AF(o, s16, 0xDC) = *(u16 *)&D_sc01_084_801C7748 + 0x800;
    ang = AF(o, s16, 0xDC);
    y = -(ang * 0x600) / 0x3000 - 0x22;
    r = -(ang * 0xA0) / 0x3000 + 0x260;
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    sv.x = x;
    sv.y = y;
    sv.z = z;
    AF(o, s16, 6) = x;
    AF(o, s16, 0xA) = sv.y;
    AF(o, s16, 0xE) = sv.z;
    func_80143970(o);
    AF(o, u8 *, 0xBC) = &D_sc01_084_8018AA7C;
    if (AF(o, s16, 0x70) == 2) {
        AF(o, s16, 2) = 0xD;
        AF(o, s16, 0x34) = 0;
        SetScript(o, (s32) &D_sc01_084_801A24C8);
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 0x5E) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0xE00;
        AF(o, u16, 6) = D_sc01_084_8018AABC;
        AF(o, u16, 0xA) = D_sc01_084_8018AABE;
        AF(o, u16, 0xE) = D_sc01_084_8018AAC0;
        func_8012B23C(o);
    } else {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        SetScript(o, (s32) &D_sc01_084_801A1A10);
        AF(o, s32, 0x1C) = 10;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) |= 0x8000;
        AF(o, u16, 0xFC) ^= 1;
        sv2.x = AF(o, s16, 6);
        sv2.y = AF(o, s16, 0xA);
        sv2.z = AF(o, s16, 0xE);
        AF(o, s16, 0xDE) = SquareRoot0(sv2.x * sv2.x + sv2.z * sv2.z);
        AF(o, s16, 0xDC) = func_sc01_084_801807D8(&sv2);
    }
}

void func_sc01_084_801834B8(u8 *arg0) {
    if ((AF(arg0, u16, 2) != 0) && (AF(arg0, u16, 0x5C) & 1)) {
        func_sc01_084_80182A00();
    }
    if (AF(arg0, u16, 0) != 0) {
        D_sc01_084_8018AB4C[AF(arg0, u16, 2)](arg0);
    }
}

void func_sc01_084_8018353C(u8 *o) {
    SV8 sv;
    V4 p;
    s32 v;
    s32 k;
    s32 t;

    sv.x = D_80126B5E;
    sv.y = D_80126B62;
    sv.z = D_80126B66;
    sv.y = (s16)(sv.y - 0x40) - AF(o, s16, 0x70) * 32;
    k = AF(o, s16, 0x70) * 4 + 6;
    ((s16 *)&p.x)[1] = sv.x;
    ((s16 *)&p.y)[1] = sv.y;
    ((s16 *)&p.z)[1] = sv.z;
    func_8012B14C(o, &D_sc01_084_8018AB8C);
    func_8012AD80(o);
    func_8012B77C(&v, o + 4, &p);
    t = v;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = t;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), t >> 16, k);
    if (AF(o, s16, 0x70) == 0) {
        func_sc01_084_801838F0((s32)o);
    }
}

void func_sc01_084_80183630(u8 *arg0) {
    SV8 sv;
    s32 ang;
    s32 r;
    s32 y;
    s32 x;
    s32 z;

    ang = *(s16 *) &D_sc01_084_801C7748;
    r = D_sc01_084_801C774A;
    ang += D_sc01_084_8018AB98;
    r += D_sc01_084_8018AB9A;
    y = -(ang * 0x600) / 0x3000 - 0x22;
    x = (rcos(ang & 0xFFF) * r) >> 12;
    z = (rsin(ang & 0xFFF) * r) >> 12;
    sv.x = x;
    sv.y = y;
    sv.z = z;
    y -= D_sc01_084_8018AB9C + D_sc01_084_8018ABA0 * AF(arg0, s32, 0x1C);
    sv.y = y;
    AF(arg0, s16, 6) = x;
    AF(arg0, s16, 0xA) = sv.y;
    AF(arg0, s16, 0xE) = sv.z;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (-ang & 0xFFF) + 0x400;
    AF(arg0, s32, 0x1C)++;
    if (AF(arg0, s32, 0x1C) >= D_sc01_084_8018AB9E) {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s16, 0x34)++;
    }
}

void func_sc01_084_80183790(u8 *arg0) {
    SV8 sv;
    s32 ang;
    s32 r;
    s32 t;
    s32 y;
    s32 x;
    s32 z;

    ang = *(s16 *) &D_sc01_084_801C7748;
    ang = D_sc01_084_8018ABA4 + ang;
    t = D_sc01_084_8018ABA6;
    r = D_sc01_084_801C774A;
    r += t;
    y = -(ang * 0x600) / 0x3000 - 0x22;
    x = (rcos(ang & 0xFFF) * r) >> 12;
    z = (rsin(ang & 0xFFF) * r) >> 12;
    sv.x = x;
    sv.y = y;
    sv.z = z;
    y -= D_sc01_084_8018ABA8 + D_sc01_084_8018ABAC * AF(arg0, s32, 0x1C);
    sv.y = y;
    AF(arg0, s16, 6) = x;
    AF(arg0, s16, 0xA) = sv.y;
    AF(arg0, s16, 0xE) = sv.z;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = -ang & 0xFFF;
    AF(arg0, s32, 0x1C)++;
    t = D_sc01_084_8018ABAA;
    if (AF(arg0, s32, 0x1C) >= t) {
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x34)++;
    }
}

void func_sc01_084_801838F0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_8018A568);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc01_084_8018392C(o)
    u8 *o;
{
    SV8 a;
    V4 p;
    s32 v;
    s32 w;
    s32 ang;
    s32 y;
    s32 r;
    s32 x;
    s32 z;

    ang = *(s16 *)&D_sc01_084_801C7748 + 0x400;
    y = -(ang * 0x600) / 0x3000;
    r = 0x180;
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    a.x = x;
    a.y = y - 0x22;
    a.z = z;
    a.y = y - 0x32;
    ((s16 *)&p.x)[1] = x;
    ((s16 *)&p.y)[1] = y - 0x32;
    ((s16 *)&p.z)[1] = z;
    func_8012B14C(o, &D_sc01_084_8018ABB0);
    func_8012AD80(o);
    func_8012B77C(&v, o + 4, &p);
    w = v;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), w >> 16, 6);
    if (func_80013478(o + 4, &a) < 0x1000) {
        AF(o, s32, 0x1C) = 0x28;
        AF(o, u16, 0x34)++;
    }
}

void func_sc01_084_80183A7C(o)
    u8 *o;
{
    SV8 a;
    V4 p;
    s32 v;
    s32 w;
    s32 ang;
    s32 y;
    s32 r;
    s32 x;
    s32 z;

    ang = *(s16 *)&D_sc01_084_801C7748 + 0x200;
    y = -(ang * 0x600) / 0x3000;
    r = D_sc01_084_801C774A;
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    a.x = x;
    a.y = y - 0x22;
    a.z = z;
    a.y = y - 0x32;
    ((s16 *)&p.x)[1] = x;
    ((s16 *)&p.y)[1] = y - 0x32;
    ((s16 *)&p.z)[1] = z;
    func_8012B14C(o, &D_sc01_084_8018ABBC);
    func_8012AD80(o);
    func_8012B77C(&v, o + 4, &p);
    w = v;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), w >> 16, 4);
    if (func_80013478(o + 4, &a) < 0x1000) {
        AF(o, s32, 0x1C) = 0x78;
        AF(o, u16, 0x34)++;
    }
}

void func_sc01_084_80183BD0(arg0)
    u8 *arg0;
{
    SV8 sv;
    s32 ang;
    s32 r;
    s32 y;
    s32 x;
    s32 z;

    sv.x = AF(arg0, s16, 6);
    sv.y = AF(arg0, s16, 0xA);
    sv.z = AF(arg0, s16, 0xE);
    ang = func_sc01_084_801807D8(&sv);
    r = SquareRoot0(sv.x * sv.x + sv.z * sv.z);
    ang -= 4;
    y = -(ang * 0x600) / 0x3000 - 0x22;
    ang &= 0xFFF;
    x = (rcos(ang) * r) >> 12;
    z = (rsin(ang) * r) >> 12;
    sv.x = x;
    sv.y = y;
    sv.z = z;
    sv.y = y - 0x10;
    AF(arg0, s16, 6) = x;
    AF(arg0, s16, 0xA) = sv.y;
    AF(arg0, s16, 0xE) = sv.z;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 8);
    if (func_8012BEE8(arg0) != 0) {
        SetScript(arg0, (s32) &D_sc01_084_8018A568);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0x34) = 0;
    }
}

void func_sc01_084_80183D38(u8 *arg0) {
    s32 (*var_v0)();

    if (AF(arg0, s16, 0x70) != 1) {
        var_v0 = D_sc01_084_8018ABC8[AF(arg0, u16, 2)];
    } else {
        var_v0 = D_sc01_084_8018ABD8[AF(arg0, u16, 2)];
    }
    var_v0();
}

void func_sc01_084_80183DA4(u8 *o) {
    SV8 a;
    SV8 b;
    UXY s0;
    s32 p;
    s32 flag;
    UXY s1;
    u8 *pk;
    u32 *ot;
    s32 z;
    s32 sc;
    s32 u0;
    s32 v;
    u16 tp;
    u16 cl;

    if (D_801270C0 == 3) {
        return;
    }
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    D_sc01_084_801C74D8 = D_80126950;
    tp = GetTPage(0, 0, 0x300, 0x100);
    cl = GetClut(0x160, 0x14C);
    u0 = 0xF0;
    v = 0;
    b.x = AF(o, s16, 0);
    b.y = AF(o, s16, 2);
    b.z = AF(o, s16, 4);
    for (;;) {
        a.x = b.x;
        a.y = b.y - 0x40;
        a.z = b.z;
        z = RotTransPers(&a, &s0, &p, &flag);
        if (z <= D_sc01_084_801C74D8 >> 3) {
            return;
        }
        if (flag < 0) {
            return;
        }
        if (RotTransPers(&b, &s1, &p, &flag) <= D_sc01_084_801C74D8 >> 3) {
            return;
        }
        if (flag < 0) {
            return;
        }
        ot = D_800A651C[D_800B9A02].ot + z;
        sc = (D_sc01_084_801C74D8 << 3) / (z * 4);
        if (s0.s.y < 0x78) {
            if (s1.s.y < -0x77) {
                return;
            }
            if ((s16)sc >= 2) {
                pk = AllocPrim(0x28);
                AF(pk, s32, 4) = 0x808080;
                SetPolyFT4(pk);
                AF(pk, s16, 0x8) = s0.s.x - sc;
                AF(pk, s16, 0xA) = s0.s.y;
                AF(pk, s16, 0x10) = s0.s.x + sc;
                AF(pk, s16, 0x12) = s0.s.y;
                AF(pk, s16, 0x18) = s1.s.x - sc;
                AF(pk, s16, 0x1A) = s1.s.y;
                AF(pk, s16, 0x20) = s1.s.x + sc;
                AF(pk, s16, 0x22) = s1.s.y;
                AF(pk, u8, 0xC) = u0;
                AF(pk, u8, 0xD) = v;
                AF(pk, u8, 0x14) = 0xF7;
                AF(pk, u8, 0x15) = v;
                AF(pk, u8, 0x1C) = u0;
                AF(pk, u8, 0x1D) = v + 0x3F;
                AF(pk, u8, 0x24) = 0xF7;
                AF(pk, u8, 0x25) = v + 0x3F;
                AF(pk, u16, 0x16) = tp;
                AF(pk, u16, 0xE) = cl;
                AddPrim(ot, pk);
            }
        }
        b.y -= 0x40;
    }
}

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

void func_sc01_084_80184138(u8 *o) {
    SV8 v;
    SV8 base;
    UXY sxy;
    s32 p;
    s32 flag;
    UXY sxy2;
    u8 *prim;
    u32 *ot;
    s32 z;
    s16 w;
    s32 d;
    s32 u0;
    s32 vv;
    u16 tp;
    u16 clut;

    if (D_801270C0 == 3) {
        return;
    }
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    D_sc01_084_801C74DC = D_80126950;
    tp = GetTPage(0, 0, 0x300, 0x100);
    clut = GetClut(0x160, 0x14D);
    base.x = AF(o, u16, 0);
    base.y = AF(o, u16, 2);
    base.z = AF(o, u16, 4);
    u0 = 0xF8;
    vv = 0;
    for (;;) {
        v.x = base.x;
        v.y = base.y - 0x40;
        v.z = base.z;
        z = RotTransPers(&v, &sxy, &p, &flag);
        if ((D_sc01_084_801C74DC >> 3) >= z || flag < 0) {
            return;
        }
        d = RotTransPers(&base, &sxy2, &p, &flag);
        if ((D_sc01_084_801C74DC >> 3) >= d || flag < 0) {
            return;
        }
        ot = D_800A651C[D_800B9A02].ot + z;
        w = (D_sc01_084_801C74DC * 8) / (z * 4);
        if (sxy.s.y < 0x78) {
            if (sxy2.s.y < -0x77) {
                return;
            }
            if (w >= 2) {
                prim = AllocPrim(0x28);
                AF(prim, u32, 4) = 0x808080;
                SetPolyFT4(prim);
                AF(prim, s16, 8) = sxy.s.x - w;
                AF(prim, s16, 0xA) = sxy.s.y;
                AF(prim, s16, 0x10) = sxy.s.x + w;
                AF(prim, s16, 0x12) = sxy.s.y;
                AF(prim, s16, 0x18) = sxy2.s.x - w;
                AF(prim, s16, 0x1A) = sxy2.s.y;
                AF(prim, s16, 0x20) = sxy2.s.x + w;
                AF(prim, s16, 0x22) = sxy2.s.y;
                AF(prim, u8, 0xC) = u0;
                AF(prim, u8, 0xD) = vv;
                AF(prim, u8, 0x14) = 0xFF;
                AF(prim, u8, 0x15) = vv;
                AF(prim, u8, 0x1C) = u0;
                AF(prim, u8, 0x1D) = vv + 0x3F;
                AF(prim, u8, 0x24) = 0xFF;
                AF(prim, u8, 0x25) = vv + 0x3F;
                AF(prim, u16, 0x16) = tp;
                AF(prim, u16, 0xE) = clut;
                AddPrim(ot, prim);
            }
        }
        base.y -= 0x3C;
    }
}

void func_sc01_084_80184424(u8 *arg0) {
    D_sc01_084_8018AC2C[AF(arg0, u16, 2)]();
}

void func_sc01_084_80184460(u8 *o) {
    SV8 w;
    UXY sxy;
    s32 p;
    s32 flag;

    func_8012B0B4(&w, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x18);
    AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + *(s32 *)&w;
    AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + (*(s32 *)&w >> 16);
    func_8012AD80(o);
    if (AF(o, s16, 0xFC) == 0 && AF(o, s16, 0xA) <= (s16)D_80126B62 && D_sc01_084_801C774C == 1) {
        if (D_80126CBA != 0) {
            AF(o, s16, 0xFC) = 1;
        } else {
            func_sc01_084_801845A0(o);
            return;
        }
    }
    if (AF(o, s16, 0xFC) == 1) {
        w.x = AF(o, u16, 6);
        w.y = AF(o, u16, 0xA);
        w.z = AF(o, u16, 0xE);
        func_8012E32C();
        RotTransPers(&w, &sxy, &p, &flag);
        if (sxy.s.y < -0x6F) {
            D_801270CC = 0;
            func_8012C218(o);
        }
    }
}

void func_sc01_084_801845A0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_084_801A2750);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFC) = 1;
}

u8 *func_sc01_084_801845EC(u8 *o, s32 n) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s16 pos[4];
    u8 *p;

    FaceHelper(o, &D_sc01_084_8018AA6C + n * 8, pos);
    d.x = pos[0];
    d.y = pos[1];
    d.z = pos[2];
    d.kind = 0x20;
    d.unk8 = n;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    p = ((u8 *(*)())func_8012C51C)(&d, o);
    if (n == 0 && p != 0) {
        if (AF(o, u8 *, 0x20) != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
        }
        func_8012B2CC(p);
    }
    return p;
}

void func_sc01_084_801846B4(u8 *o) {
    SV8 w;
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s16 pos[4];

    func_8012B0B4(&w, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x18);
    AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + *(s32 *)&w;
    AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + (*(s32 *)&w >> 16);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
    if (AF(o, s32, 0x1C) == 0x11) {
        func_sc01_084_80185E68(o, &D_sc01_084_8018AA74);
    } else if (AF(o, s32, 0x1C) == 0xF) {
        FaceHelper(o, &D_sc01_084_8018AA74, pos);
        d.x = pos[0];
        d.y = pos[1];
        d.z = pos[2];
        d.kind = 0x20;
        d.unk8 = 1;
        d.flags = 0;
        d.unk10 = 0;
        d.unkE = 0;
        func_8012C51C(&d, o);
    }
    if (func_8012BEE8(o) != 0) {
        SetScript(o, &D_sc01_084_801A2378);
        AF(o, s16, 2) = 1;
        func_8012B200(o);
        AF(o, s32, 0x14) = D_sc01_084_8018AC34;
    }
}

void func_sc01_084_801847F8(u8 *arg0) {
    D_sc01_084_8018AC38[AF(arg0, u16, 2)]();
}

void func_sc01_084_80184834(u8 *o) {
    s32 s;
    s16 n;

    if ((s16)TestPadAll(1, 0, 0x40) != 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x200;
    }
    if ((s16)TestPadAll(1, 0, 0x20) != 0) {
        n = AF(o, u16, 0xFC) + 1;
        AF(o, s16, 0xFC) = n;
        s = D_sc01_084_8018A978[AF(o, s16, 0x70)][n];
        if (s == 0) {
            AF(o, s16, 0xFC) = 0;
            s = D_sc01_084_8018A978[AF(o, s16, 0x70)][0];
        }
        SetScript(o, s);
    }
}

void func_sc01_084_80184908(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc01_084_8018A984[AF(arg0, s16, 0x70)]);
    SetScript(arg0, D_sc01_084_8018A978[AF(arg0, s16, 0x70)][AF(arg0, s16, 0xFC)]);
    AF(arg0, s16, 2) = 1;
}

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

void func_sc01_084_80184B80(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = D_sc01_084_8018AA44;
    if (AF(o, u16, 0x34) == 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xDC) + 0x800, 4);
        if (AF(o, s32, 0x1C) == 0x28) {
            AF(o, s16, 0x34) = 1;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0xDC) + 0x800) & 0xFFF;
            func_8012B2CC(o);
            func_8012B21C(o);
            func_8012B14C(o, &v);
        }
    } else if (func_8012CBA4(o) & 0x2000) {
        AF(o, s32, 0x14) = 0;
    }
    if (func_8012BEE8(o) != 0) {
        SetScript(o, &D_sc01_084_801A1820);
        AF(o, s16, 2) = 1;
        func_8012B21C(o);
        AF(o, s32, 0x1C) = 0x14;
    }
}

void func_sc01_084_80184C90(s32 arg0) {
    s32 v;
    void *p;

    v = func_8012B8E4(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (func_8012BEE8(arg0) != 0) {
        func_sc01_084_801819D0(arg0);
    }
}

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

void func_sc01_084_80184D90(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_084_80191B50);
    AF(arg0, s16, 0xDC) = AF(AF(arg0, s32, 0x20), s16, 0x12);
    AF(arg0, s16, 0xA) -= 0x80;
    func_80143970(arg0);
    SetScript(arg0, (s32) &D_sc01_084_801A1820);
    AF(arg0, s16, 2) = 1;
    func_8012B21C(arg0);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc01_084_80184E28(u8 *arg0) {
    SV8 sv;

    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 0;
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
}

void func_sc01_084_80184EEC(u8 *o) {
    s32 v = func_8012B8E4(o, 4);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += v;
    if (AF(o, s32, 0x1C) == 0xF) {
        func_8002D4C8(0x6A9, 0);
        func_80142414(o, -0x78);
    }
    if (func_8012BEE8(o) != 0) {
        func_sc01_084_80181F3C(o);
    }
}

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

void func_sc01_084_8018500C(u8 *o) {
    if (func_8012BEE8(o) == 0) {
        return;
    }
    if (AF(o, s16, 0x70) == 2) {
        func_sc01_084_80182FEC((s32)o);
        return;
    }
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) = 0xAA00;
    SetScript(o, &D_sc01_084_801A1AB8);
    AF(o, s16, 2) = 3;
    AF(o, s16, 0xFE) = 0;
}

void func_sc01_084_80185080(u8 *o) {
    SV8 v;

    func_8012CBA4(o);
    if (func_8012BEE8(o) != 0) {
        AF(o, s16, 0xFC) = 0;
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        SetScript(o, &D_sc01_084_801A1A10);
        AF(o, s32, 0x1C) = 0xA;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) |= 0x8000;
        AF(o, u16, 0xFC) ^= 1;
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE);
        AF(o, s16, 0xDE) = SquareRoot0(v.x * v.x + v.z * v.z);
        AF(o, s16, 0xDC) = func_sc01_084_801807D8(&v);
    }
}

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

void func_sc01_084_8018528C(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s16, 0x34)++;
        AF(o, s32, 0x1C) = 0;
        func_8002D4C8(0x4AA, 0);
        break;
    case 1:
        func_sc01_084_80183630(o);
        break;
    case 2:
        func_sc01_084_80183790(o);
        break;
    case 3:
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34) = 0;
        }
        break;
    }
}

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

void func_sc01_084_8018544C(u8 *o) {
    SV8 v;
    s16 a;

    a = AF(o, u16, 0xDC) + 0x10;
    AF(o, s16, 0xDC) = a;
    AF(o, s16, 0xA) = AF(o, u16, 0xDE) + ((rsin(a) * 32) >> 12);
    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    AF(AF(o, u8 *, 0xCC), s16, 8) = v.x;
    AF(AF(o, u8 *, 0xCC), s16, 0xA) = v.y;
    AF(AF(o, u8 *, 0xCC), s16, 0xC) = v.z;
    func_sc01_084_80183DA4((u8 *)&v);
    if (AF(o, u16, 0x5C) & 1) {
        if (AF(o, u16, 0x5E) == 0x10) {
            func_sc01_084_80184090((s32)o);
        } else {
            AF(o, u16, 0x5C) &= ~1;
        }
    }
}

void func_sc01_084_80185528(u8 *o) {
    SV8 sv;

    func_8012AD80(o);
    sv.x = AF(o, s16, 6);
    sv.y = AF(o, s16, 0xA);
    sv.z = AF(o, s16, 0xE);
    AF(AF(o, u8 *, 0xCC), s16, 8) = sv.x;
    AF(AF(o, u8 *, 0xCC), s16, 0xA) = sv.y;
    AF(AF(o, u8 *, 0xCC), s16, 0xC) = sv.z;
    AF(o, s16, 0x26) -= D_sc01_084_8018ABF4;
    func_sc01_084_80183DA4(o + 0x24);
    if (++AF(o, s32, 0x1C) >= 0x28) {
        bzero(AF(o, s32, 0xCC), 0x84);
        func_8012C098(o);
    }
}

void func_sc01_084_801855EC(u8 *o) {
    u8 *r;

    r = (u8 *)func_8012C1B8(o);
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CA1C(r, &D_sc01_084_8018ABF8 + (AF(o, u16, 0x70) & 1) * 12);
    AF(r, s16, 0x18) = AF(r, s16, 0x1A) = AF(r, s16, 0x1C) = 0x3000;
    if ((AF(o, s32, 0x20) = func_8012C1B8()) == 0) {
        bzero(r, 0x84);
        func_8012CAE4(o);
        return;
    }
    AF(o, s16, 0xDE) = AF(o, s16, 0xA);
    AF(o, u8 *, 0xCC) = r;
    func_8001C214(AF(o, s32, 0x20), 0);
    AF(o, void *, 0x58) = &D_sc01_084_8018ABE4;
    AF(o, s16, 2) = 1;
    AF(o, u16, 0x5C) |= 0x8000;
    AF(o, u16, 0x72) |= 0x1000;
    AF(o, s16, 0xDC) = rand() & 0xFFF;
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc01_084_801856D8(u8 *o) {
    SV8 v;
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    void *q;

    if (func_8012BEE8(o) != 0) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE);
        func_sc01_084_80184138((u8 *)&v);
        if ((&D_sc01_084_8018A914)[3] == 0) {
            func_sc01_084_80183DA4((u8 *)&D_sc01_084_8018A914);
        }
    }
    q = &d;
    if (D_801270C8[0] != 0 && D_801270CC == 0) {
        D_801270CC = 1;
        d.x = AF(o, s16, 6);
        d.y = AF(o, s16, 0xA);
        d.z = AF(o, s16, 0xE);
        d.kind = 0x1E;
        d.flags = 0;
        d.unk8 = 0;
        d.unk10 = 0;
        d.unkE = 0;
        func_8012C51C(q, o);
    }
}

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

void func_sc01_084_80185834(u8 *o) {
    u8 *p;
    u8 unused[8];

    if ((AF(o, u8 *, 0x20) = p = (u8 *)func_8012C1B8(o)) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc01_084_8018CE0C);
    func_8001D0E8(AF(o, u8 *, 0x20), 0xBE, 0x8C);
    func_8012B2CC(o);
    p = AF(o, u8 *, 0x20);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (ratan2(D_800D391C - AF(p, s16, 0xC), AF(p, s16, 8) - *(s16 *)&D_800D3918) - 0x400) & 0xFFF;
    SetScript(o, &D_sc01_084_801A2378);
    AF(o, s16, 2) = 1;
    func_8012B200(o);
    AF(o, s32, 0x14) = D_sc01_084_8018AC34;
}

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

void func_sc01_084_8018599C(u8 *o) {
    SV8 pos;
    SV8 v;
    s32 i;
    s32 d;
    s32 d2;
    s16 t;
    u8 *q;
    u8 *g;

    g = &D_80126B58;
    if (func_8012BEE8(o) == 0) {
        return;
    }
    func_80015978(o + 4, &pos);
    for (i = 0; i < 4; i++) {
        if (AF(o, s32, 0xDC) != 0) {
            d = ((rand() & 0xF) << 6) + ((rand() & 0xF) << 2);
            t = d;
            if (rand() & 1) {
                t = -d;
            }
            v.x = pos.x + t;
            d2 = ((rand() & 0xF) << 6) + ((rand() & 0xF) << 2);
            t = d2;
            if (rand() & 1) {
                t = -d2;
            }
            v.z = pos.z + t;
            v.y = AF(g, u16, 0xA) - 0x200;
        }
        q = (u8 *)func_801290DC(0x67, &v);
        if (q != 0) {
            AF(q, s16, 0x2E) = AF(o, u16, 0xFC);
        }
    }
    func_8012BF4C(o, (rand() & 0x1F) + 8);
}

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

void func_sc01_084_80185C0C(u8 *o) {
    TriArg t;
    SV8 a;
    SV8 b;
    SV8 s[4];
    WMtx m;
    s32 z;
    s32 flag;
    TriArg *p;
    u16 y;

    p = &t;
    func_80015978(o + 4, &a);
    if (func_8012EF34(&a, &b) & ~0x1000) {
        return;
    }
    gte_stszotz(&z);
    D_sc01_084_8018AC5C = b.z;
    D_sc01_084_8018AC64 = b.z;
    D_sc01_084_8018AC6C = b.z;
    func_80017D98(&m);
    m.t[0] = m.t[1] = m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(&D_sc01_084_8018AC58, &D_sc01_084_8018AC60, &D_sc01_084_8018AC68);
    gte_rtpt();
    gte_stsxy3(&s[0], &s[1], &s[2]);
    gte_stflg(&flag);
    if (flag < 0) {
        return;
    }
    t.c[0].r = t.c[0].g = t.c[0].b = 0xC0;
    t.c[1].r = t.c[1].g = 0x20;
    t.c[1].b = 0x40;
    t.c[2].r = t.c[2].g = 0x20;
    t.c[2].b = 0x40;
    t.code = 0x50000000;
    t.p[0].x = s[0].x + b.x;
    t.p[0].y = s[0].y + b.y;
    t.p[1].x = s[1].x + b.x;
    t.p[1].y = s[1].y + b.y;
    t.p[2].x = s[2].x + b.x;
    t.p[2].y = s[2].y + b.y;
    t.p[0].z = z;
    func_8001739C(p);
    y = s[1].y;
    t.p[1].y = b.y - y;
    func_8001739C(p);
    y = s[2].x;
    t.p[2].x = b.x - y;
    func_8001739C(p);
    t.p[1].y = s[1].y + b.y;
    func_8001739C(p);
}

s32 func_sc01_084_80185E38(void) {
    s32 r;

    r = func_800CF854();
    if (r == 0) {
        return 3;
    }
    return 4;
}

s32 func_sc01_084_80185E68(s32 arg0, s32 arg1, s32 arg2) {
    D_sc01_084_801C7728 = arg1;
    return func_8012C588(0x85, arg0);
}

void func_sc01_084_80185E98(u8 *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    u8 *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (func_8012C354(o, &D_sc01_084_8018AC84) == 0) {
        func_8012C218(o);
    }
    SetScript(o, &D_sc01_084_80186B78);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x70) = 0x80;
    AF(p, s32, 4) |= 0x50000040;
    AF(p, u16, 0x2C) |= 1;
    m = AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34;
    func_8012F14C(m, D_sc01_084_801C7728, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    func_80017DC4(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, p + 0x34);
    func_80017E68(&b, p + 0x34);
    q = D_sc01_084_8018ACB8++;
    AF(o, WMtx *, 0xCC) = q;
    if (D_sc01_084_8018ACB8 > D_sc01_084_801C7708) {
        D_sc01_084_8018ACB8 = D_sc01_084_801C7708 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    func_80017E68(&a, q);
    y = b.y;
    if (func_80134510(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc01_084_8018ACB8++;
        AF(o, WMtx *, 0xD0) = q;
        if (D_sc01_084_8018ACB8 > D_sc01_084_801C7708) {
            D_sc01_084_8018ACB8 = D_sc01_084_801C7708 - 9;
        }
        func_800D23D0(&D_801152A8);
        RotMatrixYXZ(&D_801152A8, q);
        func_80017E68(&b, q);
    }
    AF(o, s16, 2)++;
}

void func_sc01_084_801860DC(u8 *o) {
    QuadArg q;
    u8 *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s32, 0x1C)++ < 2) {
        t = D_sc01_084_8018AC70;
        i = 0;
        m = AF(o, u8 *, 0xCC);
        v = AF(o, u16, 0x70);
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; i < 4; i++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        mm = AF(o, u8 *, 0xD0);
        if (mm != 0) {
            m = mm;
            t = D_sc01_084_8018AC70;
            j = 0;
            v = AF(o, u16, 0x70);
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; j < 4; j++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        }
        AF(o, s16, 0x70) >>= 1;
        AF(p, u16, 0x2C) |= 1;
    } else {
        func_8012C218(o);
    }
}

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
