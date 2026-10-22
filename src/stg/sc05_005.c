#include "common.h"
#include "gte.h"
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
extern s32 func_8012C218();
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
extern s32 func_8012B178();
extern u8 D_sc05_005_801A6058;
extern u8 D_sc05_005_801AB144;
extern void func_8012B2CC();
extern s32 func_8012AD80();
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

extern void func_8012B23C();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern s16 D_800B9A08;
extern u8 D_sc05_005_80185F48;
extern u8 D_sc05_005_80185EE4[];
extern s32 func_80013328();
extern void func_801746A4();
extern s32 func_8012BD14();
extern void func_800233CC();
extern u8 D_sc05_005_801B1CA8;
extern u8 D_sc05_005_801B1CA9;
extern u8 D_sc05_005_801B1CAA;
extern u8 D_sc05_005_801B1CAC;
extern u8 D_sc05_005_801B1CAD;
extern u8 D_sc05_005_801B1CAE;
extern s32 D_sc05_005_801B1EAC;
extern s32 D_sc05_005_801B1EB0;
extern s32 D_sc05_005_801B1EB4;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc05_005_801AC11C;
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
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc05_005_80185E2C[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern s32 func_sc05_005_8017F6E8();
extern s32 func_sc05_005_8017F62C();

void func_sc05_005_8017C218(u8 *arg0) {
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
    t = D_sc05_005_80185E2C;
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
    t = D_sc05_005_80185E2C;
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
        t = D_sc05_005_80185E2C;
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

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern s32 func_8012C354();
extern u8 D_sc05_005_80185EB0;
extern u8 D_sc05_005_80185EEC;
extern u8 D_sc05_005_801AC0F4;
extern u8 D_sc05_005_801B1C38;
extern u8 D_sc05_005_801B1C44;
extern u8 D_sc05_005_801B1C45;
extern u8 D_sc05_005_801B1C46;
extern u8 D_sc05_005_801B1C54;
extern u8 D_sc05_005_801B1C55;
extern u8 D_sc05_005_801B1C56;
extern u8 D_sc05_005_801B1C65;
extern u8 D_sc05_005_801B1C66;
extern u8 D_sc05_005_801B1C68;
extern u8 D_sc05_005_801B1C69;
extern u8 D_sc05_005_801B1C6A;
extern u8 D_sc05_005_801B1C6C;
extern u8 D_sc05_005_801B1C6D;
extern u8 D_sc05_005_801B1C6E;
extern u8 D_sc05_005_801B1C74;
extern u8 D_sc05_005_801B1CE8;
extern void func_8001C810();
typedef struct { u8 r, g, b, cd; } CV;
extern s32 func_80012ABC();
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern void func_8012931C();
extern s32 func_8012CEB0();

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

void func_sc05_005_8017C910(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc05_005/nonmatchings/sc05_005", func_sc05_005_8017CA80);

void func_sc05_005_8017CBB0(u8 *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (func_800291B4(*AF(arg0, u8 *, 0xDC) + 0x3A) & 0xFF) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(arg0, s32, 0x20) == 0) {
        if (func_8012C354(arg0, &D_sc05_005_80185EB0) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc05_005_801AC0F4);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc05_005_80185EEC);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc05_005_801B1C38;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc05_005_801B1C68;
        func_8001CD50(o, p);
        D_sc05_005_801B1C6A = 0x80;
        p[0] = 0x80;
        D_sc05_005_801B1C69 = 0xE0;
        D_sc05_005_801B1C6D = 0;
        D_sc05_005_801B1C6C = 0;
        D_sc05_005_801B1C6E = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc05_005_801AC11C;
        b = (U12x9 *) &D_sc05_005_801B1CE8;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc05_005_801B1C66 = 0xFF;
        D_sc05_005_801B1C74 = 0xFF;
        D_sc05_005_801B1C56 = 0xFF;
        D_sc05_005_801B1C54 = 0xFF;
        D_sc05_005_801B1C46 = 0xFF;
        D_sc05_005_801B1C44 = 0xFF;
        D_sc05_005_801B1C65 = 0x80;
        D_sc05_005_801B1C55 = 0x80;
        D_sc05_005_801B1C45 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc05_005_801B1CE8;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc05_005_8017CF3C(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &D_801202A0, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = func_80013328(arg0 + 4, &D_80126B5C);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc05_005_8017CA80(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc05_005_80185EE4[(s16) i]) {
                func_801746A4();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (func_8012BD14(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            func_80178B18(arg0, &D_sc05_005_80185F48);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc05_005_8017D1B4(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc05_005_801B1CA8;
        func_8001CD50(o, p);
        D_sc05_005_801B1CA9 = 0xFF;
        D_sc05_005_801B1CAA = 0xFF;
        p[0] = 0xFF;
        D_sc05_005_801B1CAE = 8;
        D_sc05_005_801B1CAC = 8;
        D_sc05_005_801B1CAD = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc05_005_801B1EAC;
        q[0] = v.vx;
        D_sc05_005_801B1EB0 = v.vy;
        D_sc05_005_801B1EB4 = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc05_005_8017D2FC(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc05_005_801AC11C;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc05_005_8017CA80(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        AF(arg0, u16, 2) += 1;
    }
}

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

void func_sc05_005_8017D898(u8 *obj) {
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

void func_sc05_005_8017EC98(s32 arg0, s32 arg1, s32 arg2) {
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
    func_sc05_005_8017F448(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

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

void func_sc05_005_8017F2E8(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc05_005_8017F6E8(a);
    s = func_sc05_005_8017F62C(a);
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

void func_sc05_005_8017F448(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc05_005_8017F6E8(r[0] & 0xFFF);
    cx = func_sc05_005_8017F62C(r[0] & 0xFFF);
    sy = func_sc05_005_8017F6E8(r[1] & 0xFFF);
    cy = func_sc05_005_8017F62C(r[1] & 0xFFF);
    sz = func_sc05_005_8017F6E8(r[2] & 0xFFF);
    cz = func_sc05_005_8017F62C(r[2] & 0xFFF);
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

void func_sc05_005_8017FA1C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = rand();
    var_v0 = temp_v0 / 4096;
    AF(arg0, s32, 0xE0) = (s32) (temp_v0 - (var_v0 << 0xC));
    AF(arg0, s16, 2) = 4;
    var_v0_2 = rand();
    temp_v1 = var_v0_2;
    if (temp_v1 < 0) {
        var_v0_2 = temp_v1 + 0x1F;
    }
    AF(arg0, s32, 0x1C) = (s32) ((temp_v1 - ((var_v0_2 >> 5) << 5)) + 0x40);
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) & ~1);
    func_8012B23C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_005_801AB144);
}

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

s32 func_sc05_005_80181BB4(s32 arg0, SV *d, s32 arg2) {
    SV a;
    SV b;
    s32 r;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    a.vx += d->vx;
    a.vy += d->vy;
    a.vz += d->vz;
    func_8012931C(arg0);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA);
    b.vz = AF(arg0, s16, 0xE);
    b.vx += d->vx;
    b.vy += d->vy;
    b.vz += d->vz;
    r = func_8012CEB0(&a, &b, arg2);
    b.vx -= d->vx;
    b.vy -= d->vy;
    b.vz -= d->vz;
    AF(arg0, s16, 6) = b.vx;
    AF(arg0, s16, 0xA) = b.vy;
    AF(arg0, s16, 0xE) = b.vz;
    if (r & 0x6000) {
        AF(arg0, s32, 0x14) = 0;
    }
    return r;
}

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
