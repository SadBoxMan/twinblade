#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_089_8017BE9C(void) {
}

void func_sc03_089_8017BEA4(void) {
}

void func_sc03_089_8017BEAC(void) {
}

void func_sc03_089_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc03_089_8018D07C[])();
extern void func_80147324();
extern void func_sc03_089_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_089_8018D090[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_089_8018D0A4[])();
extern void func_800D22E4();
extern void func_sc03_089_8017C910();
extern void (*D_sc03_089_8018D2D8[])();
void func_sc03_089_801812B4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_089_8018D2E0[])();
void func_sc03_089_801812DC(void);
extern void func_800D1EBC();
extern void (*D_sc03_089_8018D2EC[])();
extern void (*D_sc03_089_8018D2F8[])();
void func_sc03_089_80181410(void);
extern void (*D_sc03_089_8018D300[])();
extern u8 D_sc03_089_8018D310;
extern void func_8016EE40();
extern u8 D_sc03_089_8018D314;
extern void (*D_sc03_089_8018D328[])();
extern u8 D_sc03_089_8018D320;
extern void (*D_sc03_089_8018D340[])();
extern u8 D_sc03_089_8018D338;
extern void func_sc03_089_801817A4();
extern void (*D_sc03_089_8018D348[])();
extern void (*D_sc03_089_8018D3BC[])();
extern void (*D_sc03_089_8018D408[])();
extern void (*D_sc03_089_8018D4AC[])();
extern void (*D_sc03_089_801A1B1C[])();
extern void (*D_sc03_089_801A1BD0[])();
extern void (*D_sc03_089_801A3A50[])();
extern void (*D_sc03_089_801A3B88[])();
extern void (*D_sc03_089_801A3D00[])();
extern void (*D_sc03_089_801A3D10[])();
extern void (*D_sc03_089_801C3C2C[])();
extern void (*D_sc03_089_801C3D18[])();

void func_sc03_089_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_089_8017BEF8(u8 *arg0) {
    D_sc03_089_8018D07C[AF(arg0, u16, 2)]();
}

void func_sc03_089_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_089_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017BFE0(u8 *arg0) {
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
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C064(u8 *arg0) {
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
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_089_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_089_80181510(void);
extern s32 func_sc03_089_801814BC();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern s32 func_80171928();
extern s32 D_sc03_089_8018D368[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_089_80189990;
extern u8 D_sc03_089_801A1630;
extern u8 D_sc03_089_801A1650;
extern s32 func_8012C354();
extern u8 D_sc03_089_801A1714;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_089_801A663C;
extern void func_8012B14C();
extern u8 D_sc03_089_801B2B38;
extern void func_8012C588();
extern u8 D_sc03_089_801A6658;
extern u8 D_sc03_089_801B2920;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_089_801A68F0;
extern u8 D_sc03_089_801A68F8;
extern u8 D_sc03_089_801B33E0;
extern u8 D_sc03_089_801B3B60;
extern s32 func_8012DEB8();
extern u8 D_sc03_089_801B3720;
extern u8 D_sc03_089_801B3FD0;
extern void func_8012C218();
extern void func_sc03_089_801884B8();
extern u8 D_sc03_089_801C3B90;
extern void func_sc03_089_801887E8();
extern s32 func_sc03_089_801885A4();
extern s32 func_sc03_089_80188428();
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
extern u8 D_sc03_089_8018D3D4;
extern void func_8001D0E8();
extern u8 D_sc03_089_8018D430;
extern u8 D_sc03_089_8018D4A4;
extern void func_8012B2CC();
extern void func_8013B7AC();
extern void (*D_sc03_089_801A3ADC[])();
extern void func_sc03_089_80184CBC();
extern s32 func_8012CBF4();
extern s32 func_80013478();
extern s16 D_80126CBA;
extern s32 func_8012BE54();
extern s32 func_sc03_089_80184D28();
extern s32 func_8012BEE8();
extern void func_8012E88C();
extern void func_8002A04C();
extern void func_8012B200();
extern void func_8012E8A8();
extern u8 D_sc03_089_801A3B08;
extern s32 func_8012D5E4();
extern u8 D_80078EC1;
extern void func_sc03_089_80185144();
extern void func_sc03_089_8018549C();
extern void func_sc03_089_8018545C();
extern u8 D_sc03_089_801A3BA0;
extern void func_80017274();

extern u8 D_80126B58;

extern s32 func_8012BD14();
extern void func_80016714();


extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_089_801A19EC[];
extern u8 D_sc03_089_801A1750;
extern u8 D_sc03_089_801A1810;
extern u8 D_sc03_089_801A1898;
extern u8 D_sc03_089_801A1958;
extern u8 D_sc03_089_801A1A3C;
extern u8 D_sc03_089_801A1A60;
extern u8 D_sc03_089_801A1A4C;
extern u8 D_sc03_089_801A1A58;
extern void func_8012C098();

extern u8 D_sc03_089_801A3BB8;
extern u8 D_sc03_089_801A3C78;

extern s32 D_sc03_089_801C3C18[];
extern void func_80178B18();
extern s32 func_8012AD44();

extern void (*D_sc03_089_801A69C4[])();
extern s32 func_8012D624();
extern void func_8012B370();

extern u8 D_sc03_089_8018D590;
extern u8 D_sc03_089_8018D61C;
s32 func_sc03_089_80181D6C(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc03_089_8018D630;
extern u8 D_sc03_089_8018D8B0;
extern u8 D_sc03_089_8018D8C4;
extern u8 D_sc03_089_8018D93C;
extern u8 D_sc03_089_8018D950;
extern u8 D_sc03_089_8018DA18;
extern s32 func_sc03_089_80183F60();
extern s32 func_sc03_089_80183FA4();
extern u8 D_sc03_089_801A6988;
extern u8 D_sc03_089_801A69A0;
extern u8 D_sc03_089_801A69B8;
extern u8 D_sc03_089_801A69D0;
extern u8 D_sc03_089_801A6A90;
extern u8 D_sc03_089_801A6B18;

void func_sc03_089_80181388();

typedef struct { s16 vx, vy, vz, pad; } SV;
extern void func_8012B77C();
extern s32 func_80143C74();
extern u8 *D_801151D4;
extern u8 D_sc03_089_801B2298;
extern u8 D_sc03_089_801B24A0;
extern u8 D_sc03_089_801B3058;
extern s32 func_8012CEB0();
extern void func_80131E00();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 D_801202A0;
extern VoidFn D_sc03_089_801A1748[];
extern s32 func_8012B6D4();
extern s32 func_80135888();
extern void func_8002AC00();
extern void func_8012B030();
extern u8 D_sc03_089_801ACA0C;
extern u8 D_sc03_089_801B4150;
extern void func_8001C214();
extern s32 func_8012B8E4();
extern s32 func_8012B1B4();
extern u8 D_sc03_089_801A6910;
extern u8 D_sc03_089_801B3618;
extern s32 func_80133784();
extern s32 func_8012BCCC();
extern s32 func_8012BDBC();
extern s32 D_80126B5C;
extern s16 D_80126B62;
extern s32 D_80126B64;

typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_089_8018D050[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s32 func_8012BD3C();
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern u8 D_sc03_089_801A6648;
extern u8 D_sc03_089_801A691C;
extern u8 D_sc03_089_801B4168;
extern s16 D_sc03_089_801C3C38;
extern s16 D_sc03_089_801C3C3A;
extern s16 D_sc03_089_801C3C3C;
extern Blk30 D_sc03_089_801C3C40;
extern s16 D_sc03_089_801C3C70;
extern s16 D_sc03_089_801C3C72;
extern s16 D_sc03_089_801C3C74;
extern Blk30 D_sc03_089_801C3C78;
extern s16 D_sc03_089_801C3CA8;
extern s16 D_sc03_089_801C3CAA;
extern s16 D_sc03_089_801C3CAC;
extern Blk30 D_sc03_089_801C3CB0;
extern s16 D_sc03_089_801C3CE0;
extern s16 D_sc03_089_801C3CE2;
extern s16 D_sc03_089_801C3CE4;
extern Blk30 D_sc03_089_801C3CE8;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

void func_sc03_089_8017C218(u8 *arg0) {
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
    t = D_sc03_089_8018D050;
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
    t = D_sc03_089_8018D050;
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
        t = D_sc03_089_8018D050;
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

void func_sc03_089_8017C524(u8 *arg0) {
    D_sc03_089_8018D090[AF(arg0, u16, 2)]();
}

void func_sc03_089_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_089_8017C5A0(u8 *arg0) {
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
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C610(u8 *arg0) {
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
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C69C(u8 *arg0) {
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
    func_sc03_089_8017C218((s32) arg0);
}

void func_sc03_089_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_089_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_089_8017C7C4(u8 *arg0) {
    D_sc03_089_8018D0A4[AF(arg0, u16, 2)]();
}

typedef struct { u8 b[0x34]; } R34;
extern u16 D_sc03_089_801A1684[];
extern u16 D_sc03_089_801A16AC[];
extern u16 D_sc03_089_801A16D4[];
extern VoidFn D_sc03_089_801A16FC[];
extern void func_8002D59C();
extern R34 D_sc03_089_801A6678[];
extern u8 D_sc03_089_801A67B0;
extern u8 D_sc03_089_801A6850;
extern u8 D_sc03_089_801A6898;
extern u8 D_sc03_089_801B3E50;
extern void func_80143970();

typedef struct { u16 v[6]; } U12;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_089_801B32D8;
extern u8 D_sc03_089_801B3958;

extern s32 func_sc03_089_801857A8();
extern s32 * func_sc03_089_80184BAC();
extern void func_8012B178();
extern s32 func_sc03_089_80184C7C();


extern void func_80143B6C();
extern u8 D_sc03_089_801B29C8;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 pad[0x10]; XY pt[12]; } Pts80182FD4;
typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 x1, y1;
    u8 u1, v1;
    u16 tpage;
    s16 x2, y2;
    u8 u2, v2;
    u16 pad1;
    s16 x3, y3;
    u8 u3, v3;
    u16 pad2;
} PFT4;
typedef struct { u32 tag; u32 code; } PMODE;
typedef struct { u8 pad[0x10]; XY t[13]; } FANUV;
extern void func_sc03_089_80188C04();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_089_80181BCC();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern void func_8001E094();
extern void func_8001E378();

typedef union { s32 w; XY s; } UXY;
extern u8 D_sc03_089_801A64DC;
extern void func_8012B0B4();
extern s32 func_8012E778();
extern u8 D_sc03_089_801A3B98;
extern void func_sc03_089_801851A8();

extern s32 func_sc03_089_80183EBC();

extern u8 D_sc03_089_801A3AA4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void RotMatrixZYX();
extern u8 D_sc03_089_801A3BB0;

extern s32 D_8012704C;
extern s32 func_80134510();
typedef struct { u16 x, y, z; } Pos3;
extern void func_8013B598();
extern void func_8013B6A0();
typedef struct { u8 r, g, b, cd; s32 pad[3]; } C16;
extern u8 D_sc03_089_801A3B18;
extern u8 D_sc03_089_801A3B19;
extern u8 D_sc03_089_801A3B1A;
extern C16 D_sc03_089_801A3B64[];
extern u8 D_sc03_089_801A3A68;
extern u8 D_sc03_089_801A3AAC;
extern u8 D_sc03_089_801A3B58;
extern u8 D_sc03_089_801A4014;
extern s32 func_8012C194();
extern void func_8001CD9C();
extern void func_8012F568();
extern s32 D_sc03_089_801A3D08;
extern void *D_80126B78;
extern u8 D_sc03_089_801C53F8;
extern s32 func_8012CC64();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern VoidFn D_sc03_089_801A1A70[];
extern s16 D_80126CB6;
extern u8 D_sc03_089_801A19E0;
extern s32 func_8012B864();
extern s32 func_8012B70C();
extern s16 D_sc03_089_801A1AE2[];
extern u8 D_sc03_089_801A1AA8;
extern u16 D_sc03_089_801A1ADC[];
extern u16 D_sc03_089_801A1ADE[];
extern u16 D_sc03_089_801A1AE0[];
extern u8 D_sc03_089_801A1B28;
extern u8 D_sc03_089_801A1B88;
extern VoidFn D_sc03_089_801A6934[];
extern VoidFn D_sc03_089_801A6B24[];
extern u8 D_sc03_089_801B3EE8;
extern u8 D_sc03_089_801A662C;
extern void func_80153C74();
extern u8 D_sc03_089_801B3850;
extern u8 D_sc03_089_801A6900;
extern u8 D_sc03_089_801A6908;
extern u8 D_sc03_089_801A6928;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 v; } S16R;
extern s16 D_80126B5E;
extern u16 D_80126B66;
extern V16 D_sc03_089_801C3C60;
extern s32 D_800A5EB0;
extern V16 D_sc03_089_801C3C98;
extern s32 D_800A5E90;

void func_sc03_089_8017C800(u8 *arg0) {
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

void func_sc03_089_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_089_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc03_089_8017C910(u8 *arg0) {
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

void func_sc03_089_8017CA80(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02[0]];
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

typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern void func_8012AD50();
extern s32 func_800291B4();
extern void func_800233CC();
extern s16 D_sc03_089_801C3B94[];
extern s16 D_sc03_089_801C3B96[];
extern Rec8 D_sc03_089_801C3BFC[];
extern s32 D_sc03_089_801C3C0C[];
extern s32 D_sc03_089_801C6770;
extern void func_8001CB6C();
extern void func_8001CF00();

extern u8 D_sc03_089_8018D388;
extern s32 func_80148800();
extern s16 D_sc03_089_8018D35C[];
extern SV8 D_80126940;

extern s16 D_sc03_089_8018D358[];
extern s16 D_sc03_089_8018D360[];
extern s16 D_sc03_089_8018D364[];

extern s32 D_sc03_089_801C67F8;
extern s16 D_sc03_089_801C67FC;
extern s16 D_sc03_089_801C67FE;
extern s16 D_sc03_089_801C6800;
extern s32 D_sc03_089_801C6804;
extern s32 D_sc03_089_801C6814;
extern s16 D_sc03_089_801C6818;
extern s16 D_sc03_089_801C681A;
extern s16 D_sc03_089_801C681C;
extern s32 D_sc03_089_801C6820;
extern s32 D_sc03_089_801C6830;
extern s16 D_sc03_089_801C6834;
extern s16 D_sc03_089_801C6836;
extern s16 D_sc03_089_801C6838;
extern s32 D_sc03_089_801C683C;

void func_sc03_089_8017D960(u8 *o) {
    u8 *w;
    s32 sxy[3];
    SV8 box[8];
    SV8 scr[8];
    s32 ls[8];
    s32 otz;
    s32 flag;
    s32 z;
    s32 sz0, sz1, sz2, sz3;
    s32 far;
    s32 i;
    u32 j;
    u8 *p3;
    u32 *ot;
    u8 *pkt;
    s16 vx3, vz3, vy3;
    u32 *face;
    u32 count;
    u8 *base;
    s32 n;
    u32 *bb;
    s16 x0_1, x1_1, y0_1, y1_1, z0_1, z1_1;
    s16 x0_2, x1_2, y0_2, y1_2, z0_2, z1_2;
    s16 x0_3, x1_3, y0_3, y1_3, z0_3, z1_3;
    s16 cx1, cy1, cz1;
    s16 cx2, cy2, cz2;
    s16 cx3, cy3, cz3;
    s16 r1, r2, r3, q1, q2, q3;
    s32 in1, in2, in3;
    u8 *hdr;
    u32 wx, wy, wz;
    s16 bz0, bz1;
    s32 mx0, mn0, mx1, mn1, mx, mn;
    s32 v;
    u8 *p0, *p1, *p2;
    u32 hi;
    s32 type;
    s16 tmx, tmn, umx, umn;
    s32 zm;
    u32 q0, qw;
    s16 vx0, vy0, vz0, vx1, vy1, vz1, vx2, vy2, vz2;
    s32 d, a, b, c;
    s32 c0, c1, c2, c3;
    u32 *tex;
    u32 code;
    u32 cw;
    s32 zb;

    w = (u8 *)&D_800AF630;
    far = ReadGeomScreen() + AF(o, s32, 0x64);
    GsGetLs(o + 0x10, ls);
    GsSetLsMatrix(ls);
    q3 = 0;
    q2 = 0;
    q1 = 0;
    r3 = 0;
    r2 = 0;
    r1 = 0;
    if (D_sc03_089_801C67F8 != 0) {
        cx1 = D_sc03_089_801C67FC;
        cy1 = D_sc03_089_801C67FE;
        cz1 = D_sc03_089_801C6800;
        r1 = D_sc03_089_801C6804;
        q1 = r1 - 0x80;
    } else {
        cx1 = cy1 = cz1 = 0x6000;
    }
    if (D_sc03_089_801C6814 != 0) {
        cx2 = D_sc03_089_801C6818;
        cy2 = D_sc03_089_801C681A;
        cz2 = D_sc03_089_801C681C;
        r2 = D_sc03_089_801C6820;
        q2 = r2 - 0x80;
    } else {
        cx2 = cy2 = cz2 = 0x6000;
    }
    if (D_sc03_089_801C6830 != 0) {
        cx3 = D_sc03_089_801C6834;
        cy3 = D_sc03_089_801C6836;
        cz3 = D_sc03_089_801C6838;
        r3 = D_sc03_089_801C683C;
        q3 = r3 - 0x80;
    } else {
        cx3 = cy3 = cz3 = 0x6000;
    }
    x0_1 = cx1 - r1;
    x1_1 = cx1 + r1;
    y0_1 = cy1 - r1;
    y1_1 = cy1 + r1;
    z0_1 = cz1 - r1;
    z1_1 = cz1 + r1;
    x0_2 = cx2 - r2;
    x1_2 = cx2 + r2;
    y0_2 = cy2 - r2;
    y1_2 = cy2 + r2;
    z0_2 = cz2 - r2;
    z1_2 = cz2 + r2;
    x0_3 = cx3 - r3;
    x1_3 = cx3 + r3;
    y0_3 = cy3 - r3;
    y1_3 = cy3 + r3;
    z0_3 = cz3 - r3;
    z1_3 = cz3 + r3;
    pkt = g_PrimNext;
    ot = g_WorldOtTable[AF(w, u16, 0xA3D2)];
    bb = AF(o, u32 *, 0xC);
    hdr = AF(o, u8 *, 8);
    n = AF(hdr, s32, 8);
    base = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, bb += 5) {
        wx = bb[0];
        wy = bb[1];
        wz = bb[2];
        tmn = wx;
        tmx = wx >> 16;
        umn = wy;
        umx = wy >> 16;
        bz0 = wz;
        bz1 = wz >> 16;
        box[0].x = tmn;
        box[0].y = umn;
        box[1].x = tmx;
        box[1].y = umn;
        box[2].x = tmn;
        box[2].y = umn;
        box[3].x = tmx;
        box[3].y = umn;
        box[4].x = tmn;
        box[4].y = umx;
        box[5].x = tmx;
        box[5].y = umx;
        box[6].x = tmn;
        box[6].y = umx;
        box[7].x = tmx;
        box[7].y = umx;
        box[0].z = bz0;
        box[1].z = bz0;
        box[4].z = bz0;
        box[5].z = bz0;
        box[2].z = bz1;
        box[3].z = bz1;
        box[6].z = bz1;
        box[7].z = bz1;
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
        gte_stszotz(&otz);
        if (far < otz) continue;
        if (scr[0].x > scr[1].x) {
            mx0 = scr[0].x;
            mn0 = scr[1].x;
        } else {
            mn0 = scr[0].x;
            mx0 = scr[1].x;
        }
        v = scr[2].x;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        v = scr[3].x;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        if (scr[4].x > scr[5].x) {
            mx1 = scr[4].x;
            mn1 = scr[5].x;
        } else {
            mn1 = scr[4].x;
            mx1 = scr[5].x;
        }
        v = scr[6].x;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        v = scr[7].x;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        mn = mn0;
        if (mn1 < mn) mn = mn1;
        mx = mx0;
        if (mx < mx1) mx = mx1;
        if ((s16)mx < -0xA0 || (s16)mn > 0xA0) continue;
        if (scr[0].y > scr[1].y) {
            mx0 = scr[0].y;
            mn0 = scr[1].y;
        } else {
            mn0 = scr[0].y;
            mx0 = scr[1].y;
        }
        v = scr[2].y;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        v = scr[3].y;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        if (scr[4].y > scr[5].y) {
            mx1 = scr[4].y;
            mn1 = scr[5].y;
        } else {
            mn1 = scr[4].y;
            mx1 = scr[5].y;
        }
        v = scr[6].y;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        v = scr[7].y;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        mn = mn0;
        if (mn1 < mn) mn = mn1;
        mx = mx0;
        if (mx < mx1) mx = mx1;
        if ((s16)mx < -0x6E || (s16)mn > 0x6E) continue;
        face = (u32 *)bb[4];
        count = bb[3];
        for (j = 0; j < count; j++, face += 3) {
            hi = face[1];
            p0 = base + (hi & 0xFFFF);
            p1 = base + (hi >> 16);
            hi = face[2];
            p2 = base + (hi & 0xFFFF);
            hi = hi >> 16;
            gte_ldv3(p0, p1, p2);
            gte_rtpt();
            gte_stflg(&flag);
            if (flag & 0x7F85E000) continue;
            gte_nclip();
            type = hi & 7;
            p3 = base + (hi & 0xFFF8);
            gte_stopz(&z);
            if (z <= 0) continue;
            switch (type) {
            case 6:
            case 7: {
                gte_stsxy3c(sxy);
                gte_stsz3(&sz0, &sz1, &sz2);
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 0);
                    pb = AF(sxy, s16, 4);
                    if (pa > pb) {
                        tmx = pa;
                        tmn = pb;
                    } else {
                        tmn = pa;
                        tmx = pb;
                    }
                    pc = AF(sxy, s16, 8);
                    if (pc > tmx) tmx = pc;
                    else if (pc < tmn) tmn = pc;
                }
                if (tmx < -0xA0 || tmn > 0xA0) break;
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 2);
                    pb = AF(sxy, s16, 6);
                    if (pa > pb) {
                        umx = pa;
                        umn = pb;
                    } else {
                        do { umn = pa; } while (0); /* MATCH-TRICK: raises umn above umx in global-alloc (umn a2, umx a3) */
                        umx = pb;
                    }
                    pc = AF(sxy, s16, 10);
                    if (pc > umx) umx = pc;
                    else if (pc < umn) umn = pc;
                }
                if (umx < -0x6E || umn > 0x6E) break;
                if (sz0 > sz1) {
                    zm = sz0;
                    if (zm < sz2) zm = sz2;
                } else {
                    zm = sz1;
                    if (zm < sz2) zm = sz2;
                }
                z = zm;
                in1 = in2 = in3 = 0;
                q0 = AF(p0, u32, 0);
                qw = AF(p0, u32, 4);
                vx0 = q0;
                vy0 = q0 >> 16;
                vz0 = qw;
                if (x0_1 < vx0 && vx0 < x1_1 && y0_1 < vy0 && vy0 < y1_1 && z0_1 < vz0 && vz0 < z1_1) in1 = 1;
                if (x0_2 < vx0 && vx0 < x1_2 && y0_2 < vy0 && vy0 < y1_2 && z0_2 < vz0 && vz0 < z1_2) in2 = 1;
                if (x0_3 < vx0 && vx0 < x1_3 && y0_3 < vy0 && vy0 < y1_3 && z0_3 < vz0 && vz0 < z1_3) in3 = 1;
                q0 = AF(p1, u32, 0);
                qw = AF(p1, u32, 4);
                vx1 = q0;
                vy1 = q0 >> 16;
                vz1 = qw;
                if (x0_1 < vx1 && vx1 < x1_1 && y0_1 < vy1 && vy1 < y1_1 && z0_1 < vz1 && vz1 < z1_1) in1 = 1;
                if (x0_2 < vx1 && vx1 < x1_2 && y0_2 < vy1 && vy1 < y1_2 && z0_2 < vz1 && vz1 < z1_2) in2 = 1;
                if (x0_3 < vx1 && vx1 < x1_3 && y0_3 < vy1 && vy1 < y1_3 && z0_3 < vz1 && vz1 < z1_3) in3 = 1;
                q0 = AF(p2, u32, 0);
                qw = AF(p2, u32, 4);
                vx2 = q0;
                vy2 = q0 >> 16;
                vz2 = qw;
                if (x0_1 < vx2 && vx2 < x1_1 && y0_1 < vy2 && vy2 < y1_1 && z0_1 < vz2 && vz2 < z1_1) in1 = 1;
                if (x0_2 < vx2 && vx2 < x1_2 && y0_2 < vy2 && vy2 < y1_2 && z0_2 < vz2 && vz2 < z1_2) in2 = 1;
                if (x0_3 < vx2 && vx2 < x1_3 && y0_3 < vy2 && vy2 < y1_3 && z0_3 < vz2 && vz2 < z1_3) in3 = 1;
                if (in1 | in2 | in3) {
                    a = 0;
                    if (in1) {
                        d = vx0 - cx1;
                        if (d < 0) d = cx1 - vx0;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz0 - cz1;
                        if (d < 0) d = cz1 - vz0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy0 - cy1;
                        if (d < 0) d = cy1 - vy0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx0 - cx2;
                        if (d < 0) d = cx2 - vx0;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz0 - cz2;
                        if (d < 0) d = cz2 - vz0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy0 - cy2;
                        if (d < 0) d = cy2 - vy0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx0 - cx3;
                        if (d < 0) d = cx3 - vx0;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz0 - cz3;
                        if (d < 0) d = cz3 - vz0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy0 - cy3;
                        if (d < 0) d = cy3 - vy0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c0 = a + b + c;
                    if (c0 > 0x80) c0 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx1 - cx1;
                        if (d < 0) d = cx1 - vx1;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz1 - cz1;
                        if (d < 0) d = cz1 - vz1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy1 - cy1;
                        if (d < 0) d = cy1 - vy1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx1 - cx2;
                        if (d < 0) d = cx2 - vx1;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz1 - cz2;
                        if (d < 0) d = cz2 - vz1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy1 - cy2;
                        if (d < 0) d = cy2 - vy1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx1 - cx3;
                        if (d < 0) d = cx3 - vx1;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz1 - cz3;
                        if (d < 0) d = cz3 - vz1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy1 - cy3;
                        if (d < 0) d = cy3 - vy1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c1 = a + b + c;
                    if (c1 > 0x80) c1 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx2 - cx1;
                        if (d < 0) d = cx1 - vx2;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz2 - cz1;
                        if (d < 0) d = cz1 - vz2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy2 - cy1;
                        if (d < 0) d = cy1 - vy2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx2 - cx2;
                        if (d < 0) d = cx2 - vx2;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz2 - cz2;
                        if (d < 0) d = cz2 - vz2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy2 - cy2;
                        if (d < 0) d = cy2 - vy2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx2 - cx3;
                        if (d < 0) d = cx3 - vx2;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz2 - cz3;
                        if (d < 0) d = cz3 - vz2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy2 - cy3;
                        if (d < 0) d = cy3 - vy2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c2 = a + b + c;
                    if (c2 > 0x80) c2 = 0x80;
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    tex = (u32 *)face[0];
                    code = 0x34000000;
                    cw = code | c0 | (c0 << 8) | (c0 << 16);
                    AF(pkt, u32, 0x04) = cw;
                    cw = code | c1 | (c1 << 8) | (c1 << 16);
                    AF(pkt, u32, 0x10) = cw;
                    cw = code | c2 | (c2 << 8) | (c2 << 16);
                    AF(pkt, u32, 0x1C) = cw;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    AF(pkt, u16, 0x24) = tex[3];
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((9) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x28;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = tex[0] & 0xFF000000;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    AF(pkt, u16, 0x1C) = tex[3];
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((7) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x20;
                }
                break;
            }
            case 2:
            case 3: {
                gte_stsxy3c(sxy);
                gte_ldv0(p3);
                gte_rtps();
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 0);
                    pb = AF(sxy, s16, 4);
                    if (pa > pb) {
                        tmx = pa;
                        tmn = pb;
                    } else {
                        tmn = pa;
                        tmx = pb;
                    }
                    pc = AF(sxy, s16, 8);
                    if (pc > tmx) tmx = pc;
                    else if (pc < tmn) tmn = pc;
                }
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 2);
                    pb = AF(sxy, s16, 6);
                    if (pa > pb) {
                        umx = pa;
                        umn = pb;
                    } else {
                        umn = pa;
                        umx = pb;
                    }
                    pc = AF(sxy, s16, 10);
                    if (pc > umx) umx = pc;
                    else if (pc < umn) umn = pc;
                }
                gte_stflg(&flag);
                if (flag & 0x7F85E000) break;
                gte_stsz4(&sz0, &sz1, &sz2, &sz3);
                gte_stsxy(pkt + 0x20);
                {
                    s16 pd;
                    pd = AF(pkt, s16, 0x20);
                    if (pd < tmn) tmn = pd;
                    else if (tmx < pd) tmx = pd;
                }
                if (tmx < -0xA0 || tmn > 0xA0) break;
                {
                    s16 pd;
                    pd = AF(pkt, s16, 0x22);
                    if (pd < umn) umn = pd;
                    else if (umx < pd) umx = pd;
                }
                if (umx < -0x6E || umn > 0x6E) break;
                {
                s32 za, zc;
                zc = sz2;
                if (zc < sz3) zc = sz3;
                za = sz0;
                if (za < sz1) za = sz1;
                if (za < zc) za = zc;
                z = za;
                }
                in1 = in2 = in3 = 0;
                q0 = AF(p0, u32, 0);
                qw = AF(p0, u32, 4);
                vx0 = q0;
                vy0 = q0 >> 16;
                vz0 = qw;
                if (x0_1 < vx0 && vx0 < x1_1 && y0_1 < vy0 && vy0 < y1_1 && z0_1 < vz0 && vz0 < z1_1) in1 = 1;
                if (x0_2 < vx0 && vx0 < x1_2 && y0_2 < vy0 && vy0 < y1_2 && z0_2 < vz0 && vz0 < z1_2) in2 = 1;
                if (x0_3 < vx0 && vx0 < x1_3 && y0_3 < vy0 && vy0 < y1_3 && z0_3 < vz0 && vz0 < z1_3) in3 = 1;
                q0 = AF(p1, u32, 0);
                qw = AF(p1, u32, 4);
                vx1 = q0;
                vy1 = q0 >> 16;
                vz1 = qw;
                if (x0_1 < vx1 && vx1 < x1_1 && y0_1 < vy1 && vy1 < y1_1 && z0_1 < vz1 && vz1 < z1_1) in1 = 1;
                if (x0_2 < vx1 && vx1 < x1_2 && y0_2 < vy1 && vy1 < y1_2 && z0_2 < vz1 && vz1 < z1_2) in2 = 1;
                if (x0_3 < vx1 && vx1 < x1_3 && y0_3 < vy1 && vy1 < y1_3 && z0_3 < vz1 && vz1 < z1_3) in3 = 1;
                q0 = AF(p2, u32, 0);
                qw = AF(p2, u32, 4);
                vx2 = q0;
                vy2 = q0 >> 16;
                vz2 = qw;
                if (x0_1 < vx2 && vx2 < x1_1 && y0_1 < vy2 && vy2 < y1_1 && z0_1 < vz2 && vz2 < z1_1) in1 = 1;
                if (x0_2 < vx2 && vx2 < x1_2 && y0_2 < vy2 && vy2 < y1_2 && z0_2 < vz2 && vz2 < z1_2) in2 = 1;
                if (x0_3 < vx2 && vx2 < x1_3 && y0_3 < vy2 && vy2 < y1_3 && z0_3 < vz2 && vz2 < z1_3) in3 = 1;
                q0 = AF(p3, u32, 0);
                qw = AF(p3, u32, 4);
                vx3 = q0;
                vy3 = q0 >> 16;
                vz3 = qw;
                if (x0_1 < vx3 && vx3 < x1_1 && y0_1 < vy3 && vy3 < y1_1 && z0_1 < vz3 && vz3 < z1_1) in1 = 1;
                if (x0_2 < vx3 && vx3 < x1_2 && y0_2 < vy3 && vy3 < y1_2 && z0_2 < vz3 && vz3 < z1_2) in2 = 1;
                if (x0_3 < vx3 && vx3 < x1_3 && y0_3 < vy3 && vy3 < y1_3 && z0_3 < vz3 && vz3 < z1_3) in3 = 1;
                if (in1 | in2 | in3) {
                    a = 0;
                    if (in1) {
                        d = vx0 - cx1;
                        if (d < 0) d = cx1 - vx0;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz0 - cz1;
                        if (d < 0) d = cz1 - vz0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy0 - cy1;
                        if (d < 0) d = cy1 - vy0;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx0 - cx2;
                        if (d < 0) d = cx2 - vx0;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz0 - cz2;
                        if (d < 0) d = cz2 - vz0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy0 - cy2;
                        if (d < 0) d = cy2 - vy0;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx0 - cx3;
                        if (d < 0) d = cx3 - vx0;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz0 - cz3;
                        if (d < 0) d = cz3 - vz0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy0 - cy3;
                        if (d < 0) d = cy3 - vy0;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c0 = a + b + c;
                    if (c0 > 0x80) c0 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx1 - cx1;
                        if (d < 0) d = cx1 - vx1;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz1 - cz1;
                        if (d < 0) d = cz1 - vz1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy1 - cy1;
                        if (d < 0) d = cy1 - vy1;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx1 - cx2;
                        if (d < 0) d = cx2 - vx1;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz1 - cz2;
                        if (d < 0) d = cz2 - vz1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy1 - cy2;
                        if (d < 0) d = cy2 - vy1;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx1 - cx3;
                        if (d < 0) d = cx3 - vx1;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz1 - cz3;
                        if (d < 0) d = cz3 - vz1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy1 - cy3;
                        if (d < 0) d = cy3 - vy1;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c1 = a + b + c;
                    if (c1 > 0x80) c1 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx2 - cx1;
                        if (d < 0) d = cx1 - vx2;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz2 - cz1;
                        if (d < 0) d = cz1 - vz2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy2 - cy1;
                        if (d < 0) d = cy1 - vy2;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx2 - cx2;
                        if (d < 0) d = cx2 - vx2;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz2 - cz2;
                        if (d < 0) d = cz2 - vz2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy2 - cy2;
                        if (d < 0) d = cy2 - vy2;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx2 - cx3;
                        if (d < 0) d = cx3 - vx2;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz2 - cz3;
                        if (d < 0) d = cz3 - vz2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy2 - cy3;
                        if (d < 0) d = cy3 - vy2;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c2 = a + b + c;
                    if (c2 > 0x80) c2 = 0x80;
                    a = 0;
                    if (in1) {
                        d = vx3 - cx1;
                        if (d < 0) d = cx1 - vx3;
                        if (d < r1) {
                            if (d < q1) a = 0x80;
                            else a = r1 - d;
                        }
                        d = vz3 - cz1;
                        if (d < 0) d = cz1 - vz3;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                        d = vy3 - cy1;
                        if (d < 0) d = cy1 - vy3;
                        if (r1 < d) a = 0;
                        else if (q1 < d) a = (a * (r1 - d)) >> 7;
                    }
                    b = 0;
                    if (in2) {
                        d = vx3 - cx2;
                        if (d < 0) d = cx2 - vx3;
                        if (d < r2) {
                            if (d < q2) b = 0x80;
                            else b = r2 - d;
                        }
                        d = vz3 - cz2;
                        if (d < 0) d = cz2 - vz3;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                        d = vy3 - cy2;
                        if (d < 0) d = cy2 - vy3;
                        if (r2 < d) b = 0;
                        else if (q2 < d) b = (b * (r2 - d)) >> 7;
                    }
                    c = 0;
                    if (in3) {
                        d = vx3 - cx3;
                        if (d < 0) d = cx3 - vx3;
                        if (d < r3) {
                            if (d < q3) c = 0x80;
                            else c = r3 - d;
                        }
                        d = vz3 - cz3;
                        if (d < 0) d = cz3 - vz3;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                        d = vy3 - cy3;
                        if (d < 0) d = cy3 - vy3;
                        if (r3 < d) c = 0;
                        else if (q3 < d) c = (c * (r3 - d)) >> 7;
                    }
                    c3 = a + b + c;
                    if (c3 > 0x80) c3 = 0x80;
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    gte_stsxy(pkt + 0x2C);
                    tex = (u32 *)face[0];
                    code = 0x3C000000;
                    cw = code | c0 | (c0 << 8) | (c0 << 16);
                    AF(pkt, u32, 0x04) = cw;
                    cw = code | c1 | (c1 << 8) | (c1 << 16);
                    AF(pkt, u32, 0x10) = cw;
                    cw = code | c2 | (c2 << 8) | (c2 << 16);
                    AF(pkt, u32, 0x1C) = cw;
                    cw = code | c3 | (c3 << 8) | (c3 << 16);
                    AF(pkt, u32, 0x28) = cw;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x24) = q0;
                    AF(pkt, u16, 0x30) = q0 >> 16;
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((12) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x34;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = tex[0] & 0xFF000000;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x1C) = q0;
                    AF(pkt, u16, 0x24) = q0 >> 16;
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((9) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x28;
                }
                break;
            }
            }
        }
    }
    g_PrimNext = pkt;
}

void func_sc03_089_80180D88(void) {
    D_801274C8 = &D_sc03_089_8018D590;
    D_801274CC = &D_sc03_089_8018D61C;
    func_sc03_089_80181D6C(0);
}

void func_sc03_089_80180DC8(void) {
    D_801274C8 = &D_sc03_089_8018D630;
    D_801274CC = &D_sc03_089_8018D8B0;
    func_sc03_089_80181D6C(1);
}

void func_sc03_089_80180E08(void) {
    D_801274C8 = &D_sc03_089_8018D8C4;
    D_801274CC = &D_sc03_089_8018D93C;
    func_sc03_089_80181D6C(2);
}

void func_sc03_089_80180E48(void) {
    D_801274C8 = &D_sc03_089_8018D950;
    D_801274CC = &D_sc03_089_8018DA18;
    func_sc03_089_80181D6C(3);
}

void func_sc03_089_80180E88(u8 *arg0) {
    D_sc03_089_8018D2D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80180EC4(u8 *arg0) {
    func_sc03_089_801812B4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_80180F08(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_089_80180F2C(u8 *arg0) {
    D_sc03_089_8018D2E0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80180F68(u8 *arg0) {
    func_sc03_089_801812DC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_80180FA8(u8 *arg0) {
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

void func_sc03_089_80181024(void) {
    func_800D1EBC();
}

void func_sc03_089_80181044(u8 *arg0) {
    D_sc03_089_8018D2EC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80181080(u8 *arg0) {
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

void func_sc03_089_801810F4(u8 *arg0) {
    D_sc03_089_8018D2F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_80181130(u8 *arg0) {
    func_sc03_089_80181410();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_80181174(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_80171990((s32) &D_80126B58);
        return 1;
    }
    return 0;
}

void func_sc03_089_801811B4(u8 *arg0) {
    D_sc03_089_8018D300[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_089_801811F0(u8 *arg0) {
    func_sc03_089_80181510();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_089_8018122C(void) {
    return 0;
}

s32 func_sc03_089_80181234(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_089_80181294(void) {
    func_800D1EBC();
}

void func_sc03_089_801812B4(void) {
    func_8016EE40((s32) &D_sc03_089_8018D310, 0x01000000);
}

void func_sc03_089_801812DC(void) {
    func_8016EE40((s32) &D_sc03_089_8018D314, 0x01000000);
}

void func_sc03_089_80181304(u8 *arg0) {
    D_sc03_089_8018D328[AF(arg0, u8, 0x216)]();
}

void func_sc03_089_80181340(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80171990(arg0, arg1, arg2, arg3);
    func_8014708C(arg0);
    func_801472C8(arg0);
    EndScene(arg0);
    func_sc03_089_80181388(arg0);
}

void func_sc03_089_80181388(void) {
}

void func_sc03_089_80181390(s32 arg0) {
    func_80146994(0x1A, arg0, 0x06E706E8, 0);
    func_80171990(arg0);
}

void func_sc03_089_801813D4(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        func_80171928(arg0);
    }
}

void func_sc03_089_80181410(void) {
    func_8016EE40((s32) &D_sc03_089_8018D320, 0x01000000);
}

void func_sc03_089_80181438(u8 *arg0) {
    D_sc03_089_8018D340[AF(arg0, u8, 0x216)]();
}

void func_sc03_089_80181474(s32 arg0) {
    func_80171990();
    func_80146994(0x19, arg0, 0x06920693, 0);
    func_sc03_089_801814BC(arg0);
}

s32 func_sc03_089_801814BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = func_8014C050(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_sc03_089_80181510(void) {
    func_8016EE40((s32) &D_sc03_089_8018D338, 0x01000000);
}

void func_sc03_089_80181538(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xA6;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x41;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_801815D4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_8018166C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xA6;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x41;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 2);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_80181708(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_089_801817A4, 3);
    func_8012A094((s32) &D_80126948);
    func_sc03_089_801817A4((s32) &D_80126948);
}

void func_sc03_089_801817A4(s32 arg0) {
    D_sc03_089_8018D348[AF(arg0, u8, 4)]();
}

void func_sc03_089_801817E0(u8 *o) {
    SV8 v;
    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_089_8018D358[AF(o, u8, 5)];
    }
    v = D_80126940;
    v.x = 0;
    v.z = -0x920;
    func_sc03_089_80181BCC(o, &v);
}

void func_sc03_089_8018188C(u8 *o) {
    SV8 v;
    s16 t;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_089_8018D35C[AF(o, u8, 5)];
    }
    v = D_80126940;
    AF(o, s16, 0x2E) = -rsin(AF(D_80126B78, s16, 0x12)) / 64;
    AF(o, s16, 0x32) = -rcos(AF(D_80126B78, s16, 0x12)) / 32;
    t = -0x120 - AF(o, s16, 0x28);
    if (v.x < t) {
        v.x = t;
    }
    t = 0x120 - AF(o, s16, 0x28);
    if (v.x > t) {
        v.x = t;
    }
    t = -0x700 - AF(o, s16, 0x2A);
    if (v.y < t) {
        v.y = t;
    }
    t = -0x6C0 - AF(o, s16, 0x2C);
    if (v.z < t) {
        v.z = t;
    }
    t = 0xC0 - AF(o, s16, 0x2C);
    if (v.z > t) {
        v.z = t;
    }
    func_sc03_089_80181BCC(o, &v);
}

void func_sc03_089_80181A68(u8 *o) {
    SV8 v;
    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_089_8018D360[AF(o, u8, 5)];
    }
    v = D_80126940;
    v.x = 0;
    v.z = 0x3A0;
    func_sc03_089_80181BCC(o, &v);
}

void func_sc03_089_80181B14(u8 *o) {
    SV8 v;
    s16 lim;
    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_089_8018D364[AF(o, u8, 5)];
    }
    v = D_80126940;
    v.x = 0;
    lim = 0x2A0;
    if (v.z < lim) {
        v.z = lim;
    }
    func_sc03_089_80181BCC(o, &v);
}

void func_sc03_089_80181BCC(u8 *arg0, u8 *arg1) {
    FeMtx m;
    FeSv v;
    FeSv o;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    RotMatrixZYX(arg0 + 0x18, &m);
    m.t[0] = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    m.t[1] = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    m.t[2] = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    v.x = 0;
    v.y = 0;
    v.z = AF(arg0, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(arg0, s32, 0x3C) = o.x;
    AF(arg0, s32, 0x40) = o.y;
    AF(arg0, s32, 0x44) = o.z;
}

void func_sc03_089_80181D64(void) {
}

s32 func_sc03_089_80181D6C(s32 arg0) {
    return func_8013B7F4(D_sc03_089_8018D368[arg0], 0);
}

void func_sc03_089_80181D9C(u8 *o) {
    u8 *c;

    func_8012B030();
    if (func_8012C354(o, &D_sc03_089_8018D388) != 0) {
        SetScript(o, &D_sc03_089_80189990);
        AF(o, s16, 2) = 1;
        c = ((u8 *(*)())func_8012C588)(0x1B8, o);
        AF(o, u8 *, 0xCC) = c;
        if (c != 0) {
            AF(c, s16, 0xE) -= 0x100;
            AF(c, s16, 0xA) += 0x78;
            if (AF(o, s16, 6) < 0) {
                AF(AF(c, u8 *, 0x20), s16, 0x12) = 0x800;
                AF(c, s16, 0x12) = 0x20;
                AF(c, s16, 6) -= 0x180;
            } else {
                AF(c, s16, 0x12) = -0x20;
                AF(c, s16, 6) += 0x180;
            }
        }
        c = ((u8 *(*)())func_8012C588)(0x1B8, o);
        AF(o, u8 *, 0xD0) = c;
        if (c != 0) {
            AF(c, s16, 0xE) += 0x100;
            AF(c, s16, 0xA) += 0x78;
            if (AF(o, s16, 6) < 0) {
                AF(AF(c, u8 *, 0x20), s16, 0x12) = 0x800;
                AF(c, s16, 0x12) = 0x20;
                AF(c, s16, 6) -= 0x180;
            } else {
                AF(c, s16, 0x12) = -0x20;
                AF(c, s16, 6) += 0x180;
            }
        }
        AF(o, u8, 0x75) = 0;
        func_8001D0E8(AF(o, s32, 0x20), 0x104, 0xDC);
    }
}

void func_sc03_089_80181EE8(u8 *arg0) {
    D_sc03_089_8018D3BC[AF(arg0, u16, 2)]();
}

void func_sc03_089_80181F24(u8 *arg0) {
    D_sc03_089_8018D408[AF(arg0, u16, 2)]();
}

void func_sc03_089_80181F60(u8 *arg0) {
    D_sc03_089_8018D4AC[AF(arg0, u16, 2)]();
}

static inline s32 near_12C(u8 *o) {
    u8 *p;
    s32 i;
    s32 d;
    for (p = &D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x12C) {
            d = AF(p, s16, 0xA) - AF(o, s16, 0xA);
            if ((u32)(d + 0x30) < 0x51) {
                d = AF(p, s16, 6) - AF(o, s16, 6);
                if ((u32)(d + 0x80) < 0x101) {
                    d = AF(p, s16, 0xE) - AF(o, s16, 0xE);
                    if ((u32)(d + 0x80) < 0x101) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void func_sc03_089_80181F9C(u8 *o) {
    if (AF(o, s16, 0xFE) == 0) {
        if (near_12C(o) == 1) {
            if (AF(o, u8 *, 0xCC) != 0) {
                AF(AF(o, u8 *, 0xCC), s16, 0xFC) = 0xC;
            }
            if (AF(o, u8 *, 0xD0) != 0) {
                AF(AF(o, u8 *, 0xD0), s16, 0xFC) = 0xC;
            }
            AF(o, s16, 0xFE) = 1;
            func_8002D4C8(0x6EB, 0);
        }
    }
}

void func_sc03_089_801820A8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_089_8018D3D4) != 0) {
        SetScript(arg0, (s32) &D_sc03_089_80189990);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x104, 0xDC);
    }
}

void func_sc03_089_8018210C(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + AF(arg0, u16, 0x12));
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 4);
    }
}

void func_sc03_089_80182150(u8 *arg0) {
    if (func_8012C354((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 0x34) + &D_sc03_089_8018D430)) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_089_8018D4A4);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        func_8012B2CC((s32) arg0);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x1E0, 0x12C);
    }
}

void func_sc03_089_801821DC(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    u16 temp_v0_3;
    u16 var_v0;

    temp_v0 = AF(arg0, s16, 0x102);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0x102) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            func_8002D4C8(0x6EA, 0);
        }
    } else {
        temp_v0_3 = AF(arg0, u16, 0xFE) + 1;
        AF(arg0, u16, 0xFE) = temp_v0_3;
        if ((s16) temp_v0_3 == 0x43) {
            AF(arg0, u16, 0xFE) = 0U;
            AF(arg0, s16, 0x102) = 0x1E;
            AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) ^ 1);
            func_8002D4C8(0x6E9, 0);
        }
        if ((s16) AF(arg0, s16, 0x100) != 0) {
            var_v0 = AF(arg0, u16, 6) + 6;
        } else {
            var_v0 = AF(arg0, u16, 6) - 6;
        }
        AF(arg0, u16, 6) = var_v0;
    }
    func_8012DFD4((s32) arg0);
}

s32 func_sc03_089_801822A8(void) {
    if (D_8012704C == 0) {
        return 0x3E;
    }
    return 0x47;
}

void func_sc03_089_801822C8(u8 *arg0) {
    UV4 a;
    UV4 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;

    k = AF(arg0, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    a.y = y;
    b.y = y;
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_089_801A1684[i];
        a.z = D_sc03_089_801A1684[i + 1];
        b.x = D_sc03_089_801A1684[i + 2];
        b.z = D_sc03_089_801A1684[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_089_801A16AC[i];
        a.z = D_sc03_089_801A16AC[i + 1];
        b.x = D_sc03_089_801A16AC[i + 2];
        b.z = D_sc03_089_801A16AC[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_089_801A16D4[i];
        a.z = D_sc03_089_801A16D4[i + 1];
        b.x = D_sc03_089_801A16D4[i + 2];
        b.z = D_sc03_089_801A16D4[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_089_801A16FC[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_089_80182560(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_089_801A1748[AF(arg0, u16, 2)]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            ang = func_8012B6D4(arg0 + 4, p + 4);
            if (AF(AF(arg0, u8 *, 0x64), s16, 0xFC) < 0) {
                ang -= 0x400;
            } else {
                ang += 0x400;
            }
            ang &= 0xFFF;
            a.x -= rsin(ang) >> 8;
            a.z -= rcos(ang) >> 8;
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            c = b;
            if (func_80135888(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &c) != 0) {
                AF(p, u16, 6) = a.x;
                AF(p, u16, 0xE) = a.z;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_089_801826E8(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1750);
        SetScript(arg0, &D_sc03_089_801A1810);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1898);
        SetScript(arg0, &D_sc03_089_801A1958);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_089_801A1A3C;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A1A60;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_089_801A1714;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1750);
        SetScript(arg0, &D_sc03_089_801A1810);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1898);
        SetScript(arg0, &D_sc03_089_801A1958);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1A4C);
        SetScript(arg0, &D_sc03_089_801A1A58);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_089_801A1750);
        SetScript(arg0, &D_sc03_089_801A1810);
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

void func_sc03_089_80182B94(u8 *arg0) {
    AF(AF(arg0, u8 *, 0x20), s32, 4) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4);
    AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0xEFFFFFFF;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x08000000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x60000000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4) - (rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC) - (rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1A) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1C) / 2;
}

void func_sc03_089_80182D28(u8 *arg0) {
    SV in;
    SV out;
    s32 flag;
    u8 *m;
    s32 n;

    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(AF(arg0, u8 *, 0x64), u16, 0x100) & 0x4000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) -= 0x200;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) -= 0x200;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x200) {
            func_80143B6C(arg0, 0);
            func_8012C218(arg0);
            return;
        }
    } else {
        if (--AF(arg0, s16, 0x100) < 9) {
            AF(arg0, s16, 0x100) = 0x18;
            if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 5) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
                AF(arg0, s16, 0x1A) = rand() % 56 - 0x2C;
            } else if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 6) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
                AF(arg0, s16, 0x1A) = rand() % 128 - 0x60;
            }
        }
        n = AF(arg0, s16, 0x100);
        if (n < 0x10) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = n * 0x300;
        } else {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (0x20 - n) * 0x300;
        }
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC);
    in.vx = AF(arg0, s16, 0x12);
    in.vy = AF(arg0, s16, 0x16);
    in.vz = AF(arg0, s16, 0x1A);
    m = AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&in, &out, &flag);
    AF(arg0, s16, 6) = out.vx;
    AF(arg0, s16, 0xA) = out.vy;
    AF(arg0, s16, 0xE) = out.vz;
}

void func_sc03_089_801830D8(u8 *arg0) {
    s32 temp_v0;

    D_sc03_089_801A1A70[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(AF(arg0, void *, 0x20), s32, 4) >= 0)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, 0x1C, 0xA) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        if (AF(arg0, s16, 0x70) == 1) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                AF(arg0, s32, 0x1C) = 8;
                func_8012C658(0x12F, 3, (s32) arg0);
            }
        }
    }
}

void func_sc03_089_801831C4(u8 *arg0) {
    D_sc03_089_801A1B1C[AF(arg0, u16, 2)]();
}

void func_sc03_089_80183200(u8 *arg0) {
    D_sc03_089_801A1BD0[AF(arg0, u16, 2)]();
}

void func_sc03_089_8018323C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_089_80183254(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_089_801A1650) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_089_801A1630;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_089_80189990);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_089_801832F8(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_089_80183314(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_089_801A1714) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_089_801A1630;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_089_80189990, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_089_80183398(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_089_801833D4(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_089_80183404(s32 arg0) {
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

void func_sc03_089_80183488(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc03_089_801A19E0);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_089_8018354C(s32 arg0) {
    s32 t;

    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        AF(AF(arg0, s32, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_8012E688(arg0, 0x679, 0);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u16, 0x12) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_089_801A19EC[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_089_8018362C(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_089_8018369C(u8 *arg0) {
    SV8 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc03_089_801A19E0);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_089_80183778(void) {
}

void func_sc03_089_80183780(u8 *arg0) {
    s32 t;

    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) -= 0x100;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= 0x100;
    if (AF(AF(arg0, u8 *, 0x20), s16, 0x1A) <= 0x80) {
        if (AF(arg0, s16, 0x70) == 1) {
            t = AF(arg0, s32, 0xCC);
            if (arg0 != NULL) {
                func_8012C218(t);
            }
        }
        func_8002A04C(arg0);
        func_8012C218(arg0);
    }
}

void func_sc03_089_80183838(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_089_801A1AA8) != 0) {
        SetScript(arg0, (s32) &D_sc03_089_80189990);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc03_089_801A1ADC[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc03_089_801A1ADE[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc03_089_801A1AE0[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc03_089_801A1AE2[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_089_801838FC(s32 arg0) {
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

void func_sc03_089_80183950(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc03_089_801A1AE2[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc03_089_801839CC(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_089_801A1B28);
    SetScript(arg0, &D_sc03_089_801A1B88);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x10;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x10;
    AF(arg0, s32, 0x94) = rand() & 7;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
    if ((u16)(AF(arg0, u16, 0x70) - 1) >= 0x6FFF) {
        AF(arg0, u16, 0x70) = rand() & 0x77FF;
        st = 2;
    } else {
        st = 1;
    }
    AF(arg0, s16, 2) = st;
}

void func_sc03_089_80183AB0(u8 *arg0) {
    s32 v;
    u16 a;
    void *p;
    s16 s;

    v = AF(arg0, s32, 0x1C);
    if (v == 0) {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
        a = AF(arg0, u16, 0xFE) + 0x40;
        AF(arg0, u16, 0xFE) = a;
        if ((s16) a >= 0x800) {
            AF(arg0, u16, 0xFE) = 0;
            AF(arg0, s32, 0x1C) = rand() & 0x1F;
            AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
        }
        s = (AF(arg0, s16, 0x70) * rsin(AF(arg0, s16, 0xFE)) >> 12) + 0x800;
        p = AF(arg0, void *, 0x20);
        AF(p, s16, 0x1A) = s;
        AF(p, s16, 0x18) = s;
    } else {
        AF(arg0, s32, 0x1C) = v - 1;
    }
}

void func_sc03_089_80183B7C(u8 *o) {
    s32 n;
    s32 t;
    u8 *p;
    u8 *q;

    n = AF(o, s32, 0x1C);
    if (n == 0) {
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 0xFE) += 0x40;
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0x1C) = rand() & 0x1F;
            AF(o, s16, 0x70) = rand() & 0x77FF;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        }
        t = ((AF(o, s16, 0x70) * rsin(AF(o, s16, 0xFE))) >> 12) + 0x800;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x1A) = t;
        AF(q, s16, 0x18) = t;
    } else {
        AF(o, s32, 0x1C) = n - 1;
    }
}

void func_sc03_089_80183C54(u8 *arg0) {
    D_sc03_089_801A3A50[AF(arg0, u16, 2)]();
}

void func_sc03_089_80183C90(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8013B7AC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 3);
    AF(arg0, s32, 0xCC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_089_80183CE8(u8 *p) {
    u8 *a;
    u8 *b;
    u8 *o;
    s32 i;
    s32 found;
    s32 da;
    s32 db;
    s32 d;
    u8 unused[8];

    a = 0;
    b = 0;
    found = 0;
    if (AF(p, u8 *, 0xCC) != 0) {
        func_sc03_089_80183F60(AF(p, u8 *, 0xCC) + 4, 0);
    } else {
        func_8013B7AC(0);
    }
    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (func_sc03_089_80183EBC(o) == 1) {
            da = func_8012BD14(o);
            a = o;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        func_8013B7AC(1);
        func_8013B7AC(2);
        return;
    }
    found = 0;
    for (; i < 0x60; i++, o += 0x10C) {
        if (func_sc03_089_80183EBC(o) == 1) {
            db = func_8012BD14(o);
            b = o;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        func_sc03_089_80183F14(a, 1);
        func_8013B7AC(2);
        return;
    }
    for (; i < 0x60; i++, o += 0x10C) {
        if (func_sc03_089_80183EBC(o) == 1) {
            d = func_8012BD14(o);
            if (d < da) {
                b = a;
                a = o;
                db = da;
                da = d;
            } else if (d < db) {
                b = o;
                db = d;
            }
        }
    }
    func_sc03_089_80183F14(a, 1);
    func_sc03_089_80183F14(b, 2);
}

s32 func_sc03_089_80183EBC(u8 *o) {
    if (AF(o, u16, 0) == 0x1E8 || AF(o, u16, 0) == 0x19E ||
        (AF(o, u16, 0) == 0x178 && AF(AF(o, u8 *, 0x20), s32, 4) >= 0)) {
        return 1;
    }
    return AF(o, u16, 0) == 0x1AA;
}

s32 func_sc03_089_80183F14(s32 arg0, s32 arg1) {
    u16 temp_v1;

    temp_v1 = AF(arg0, s32, 0);
    if ((temp_v1 != 0x178) && (temp_v1 != 0x1E8)) {
        return func_sc03_089_80183F60(arg0 + 4, arg1);
    }
    return func_sc03_089_80183FA4(arg0 + 4, arg1, 0xC0);
}

s32 func_sc03_089_80183F60(u16 *a, s32 b) {
    Pos3 p;

    p.x = a[1];
    p.y = a[3];
    p.z = a[5];
    func_8013B598(b, &p);
}

s32 func_sc03_089_80183FA4(u16 *a, s32 b, s32 n) {
    Pos3 p;

    p.x = a[1];
    p.y = a[3];
    p.z = a[5];
    func_8013B6A0(b, &p, n);
}

void func_sc03_089_80183FE8(void) {
}

void func_sc03_089_80183FF0(u8 *arg0) {
    s32 temp_v0;

    D_sc03_089_801A3ADC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE4) + 1;
        AF(arg0, s32, 0xE4) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_089_80184CBC((s32) arg0);
        }
    }
}

void func_sc03_089_8018406C(u8 *arg0) {
    s32 r;

    if (func_8012C354(arg0, &D_sc03_089_801A3A68) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *)&D_sc03_089_801A3AAC;
        AF(arg0, s32, 0xC4) |= 1;
        r = rand();
        AF(arg0, s32, 0xE0) = -((r % 8 + 8) << 16);
        SetScript(arg0, &D_sc03_089_801A64DC);
        AF(arg0, s32, 0xCC) = func_8012C658(0x178, AF(arg0, s16, 0x70), arg0);
        if (AF(arg0, u16, 0x70) & 1) {
            AF(arg0, s16, 2) = 1;
        } else {
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc03_089_80184138(u8 *arg0) {
    s16 r;

    r = rand();
    AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC);
    func_8012B200(arg0);
    AF(arg0, s32, 0x1C) = rand() % 60 + 0x78;
    AF(arg0, s16, 0xFE) = r % 32 + 10;
    AF(arg0, s16, 2) = 2;
}

void func_sc03_089_801841E8(u8 *arg0) {
    s32 w;
    s32 t;
    s32 x;

    func_sc03_089_80184BAC(&w, arg0, arg0 + 0x102);
    x = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = x;
    t = func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), w >> 16, AF(arg0, s16, 0xFE));
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += t;
    func_8012B178(arg0, AF(arg0, s32, 0xE0));
    func_8012CBF4(arg0);
    if (func_8012BEE8(arg0) != 0 && func_sc03_089_80184D28(arg0) != 1 && func_sc03_089_80184C7C(arg0) == 1) {
        if (func_8012BE54(arg0) <= 0x8000) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(arg0, s32, 0x1C) = rand() % 60 + 0x78;
        AF(arg0, s16, 0xFE) = rand() % 32 + 0xA;
    }
}

void func_sc03_089_80184330(s32 arg0, s32 arg1) {
    func_8012CBF4(arg0, arg1);
    if (func_80013478(arg0 + 4, arg0 + 0x88) < 0x101) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_089_80184384(s32 arg0) {
    if ((func_8012BE54(arg0) <= 0x40000) && (D_80126CBA == 0) && (func_sc03_089_80184D28(arg0) == 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_089_801843E4(u8 *arg0) {
    s16 v[3];
    s32 w;
    s16 r;
    s32 x;

    func_8012B0B4(&w, AF(D_80126B78, s16, 0x12) + 0x800, (s16)(r % 128) + 0x100);
    v[0] = w;
    v[1] = -0x20;
    v[2] = w >> 16;
    func_sc03_089_80184BAC(&w, arg0, v);
    x = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = x;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE0) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_089_801844C8(u8 *p) {
    s16 v[8];
    UXY w;
    UXY *wp;
    UXY x;
    s16 t;

    switch (AF(p, u16, 0x34)) {
    case 0:
        if (func_8012CBF4(p) != 0) {
            AF(p, s32, 0x1C) = 0x1E;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(p, u16, 0x34)++;
            break;
        }
        t = AF(p, s16, 0x100);
        if (t < AF(p, s16, 0xA)) {
            AF(p, s16, 0xA) = t;
            AF(p, s32, 0x1C) = 0x1E;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(p, u16, 0x34)++;
        }
        break;
    case 1:
        AF(AF(p, u8 *, 0x20), u16, 0x12) += func_8012B8E4(p, 6);
        if (func_8012BEE8(p) != 0) {
            AF(p, u16, 0x34)++;
            func_8012B200(p);
            AF(p, s32, 0x1C) = 0x20;
            func_8002D4C8(0x6FF, 0);
        }
        break;
    case 2:
        wp = &w;
        func_sc03_089_80184BAC(wp, p, &D_sc03_089_801A3AA4);
        x = w;
        AF(AF(p, u8 *, 0x20), s16, 0x10) = x.s.x;
        AF(AF(p, u8 *, 0x20), s16, 0x12) = x.s.y;
        func_8012B178(p, AF(p, s32, 0xE0) - 0x80000);
        func_8012CBF4(p);
        if (func_sc03_089_80184B80(p) == 1 || func_8012BEE8(p) != 0) {
            AF(p, u16, 0x34)++;
            v[1] = AF(p, u16, 0x88);
            v[3] = AF(p, u16, 0x8A);
            v[5] = AF(p, u16, 0x8C);
            func_8012B77C(wp, p + 4, v);
            x = w;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = x.s.x;
            AF(AF(p, u8 *, 0x20), s16, 0x12) = x.s.y;
            func_8012B2CC(p);
            func_8012B178(p, AF(p, s32, 0xE0) - 0x80000);
            AF(p, s32, 0x1C) = 0x80;
        }
        break;
    case 3:
        func_8012CBF4(p);
        if (func_8012BEE8(p) != 0 || AF(p, s16, 0xA) < AF(p, s16, 0x8A)) {
            AF(p, u16, 0xA) = AF(p, u16, 0x8A);
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(p, s32, 0x1C) = 0x3C;
            AF(p, u16, 0x34)++;
        }
        break;
    case 4:
        if (func_8012BEE8(p) != 0) {
            AF(p, s16, 2) = 4;
        }
        break;
    default:
        AF(p, s16, 2) = 4;
        break;
    }
}

void func_sc03_089_80184730(u8 *p) {
    s16 v[8];
    UXY w;
    UXY *wp;
    UXY x;
    s32 h;

    if (func_8012BEE8() != 0) {
        if (AF(p, u16, 0x70) & 1) {
            AF(p, s16, 2) = 1;
        } else {
            AF(p, s16, 2) = 3;
            wp = &w;
            func_8012B0B4(wp, rand() % 4096, 0x100);
            x = w;
            AF(p, u16, 6) += x.s.x;
            AF(p, u16, 0xA) -= 0x100;
            AF(p, u16, 0xE) += x.s.y;
            v[1] = AF(p, u16, 0x88);
            v[3] = AF(p, u16, 0x8A);
            v[5] = AF(p, u16, 0x8C);
            func_8012B77C(wp, p + 4, v);
            x = w;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = x.s.x;
            AF(AF(p, u8 *, 0x20), s16, 0x12) = x.s.y;
            func_8012B2CC(p, x);
            func_8012B178(p, AF(p, s32, 0xE0));
        }
        AF(p, u16, 0x5C) = AF(AF(p, u8 *, 0x78), u16, 2);
        AF(p, u16, 0x76) = AF(AF(p, u8 *, 0x78), u16, 0);
        func_8012E88C(p);
        SetScript(p, &D_sc03_089_801A64DC);
        if (AF(p, u8 *, 0xCC) != 0) {
            AF(AF(p, u8 *, 0xCC), s16, 0xFC) = 0;
        }
    }
}

void func_sc03_089_80184880(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 2) = 9;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x34) = 0;
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_089_801848AC(u8 *p) {
    s16 v[8];
    s32 pad[2];
    UXY w;
    UXY *wp;
    UXY x;
    s16 r;

    if (AF(p, u16, 0x34) == 0) {
        if (func_8012BEE8() != 0) {
            r = rand();
            wp = &w;
            func_8012B0B4(wp, (s16) (r % 4096), (s16) (r % 128) + 0xC0);
            x = w;
            v[1] = x.s.x;
            v[3] = AF(p, u16, 0xA) - 0x180;
            v[5] = x.s.y;
            func_8012B77C(wp, p + 4, v);
            x = w;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = x.s.x;
            AF(AF(p, u8 *, 0x20), s16, 0x12) = x.s.y;
            func_8012B200(p);
            func_8012B2CC(p);
            func_8012B178(p, AF(p, s32, 0xE0) - 0x20000);
            AF(p, u16, 0x34)++;
        }
    } else {
        func_8012CBF4(p);
        if (func_8012E778(p, 0xA000C8) == 0) {
            AF(p, s16, 2) = 0xA;
            AF(p, s32, 0x1C) = 0x80;
            func_8012E8A8(p);
        }
    }
}

void func_sc03_089_80184A08(s32 arg0, s32 arg1) {
    void *temp_a0;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        temp_a0 = AF(arg0, void *, 0xCC);
        if (temp_a0 != NULL) {
            AF(temp_a0, s16, 0xFC) = 0;
        }
    }
}

void func_sc03_089_80184A58(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_089_80184A74(s32 arg0) {
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

void func_sc03_089_80184B30(u8 *arg0) {
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, s16, 2) = 1;
    } else {
        AF(arg0, s16, 2) = 4;
    }
    AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_089_801A64DC);
}

s32 func_sc03_089_80184B80(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_089_801A3B08, (s32) (&D_sc03_089_801A3B08 + 8), 5) != 0;
}

s32 *func_sc03_089_80184BAC(s32 *ret, u8 *p, u16 *off) {
    s16 v[8];
    s32 r;
    u16 *b;
    s16 *g;

    g = &D_80126CBA;
    if (*g == 0 && func_sc03_089_80184D28(p) == 0) {
        b = (u16 *)(g - 3);
        AF(p, s32, 0xDC) = 0;
    } else {
        b = (u16 *)(p + 0x88);
        AF(p, s32, 0xDC) = 1;
    }
    v[1] = b[0] + off[0];
    v[3] = b[1] + off[1];
    AF(p, s16, 0x100) = v[3];
    v[5] = b[2] + off[2];
    func_8012B77C(&r, p + 4, v);
    *ret = r;
    return ret;
}

s32 func_sc03_089_80184C7C(u8 *arg0) {
    UV4 v;

    v.x = AF(arg0, u16, 0x6);
    v.y = AF(arg0, u16, 0xA);
    v.z = AF(arg0, u16, 0xE);
    return func_80134510(&v) != 0;
}

void func_sc03_089_80184CBC(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

s32 func_sc03_089_80184D28(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_089_80184D40(u8 *arg0) {
    D_sc03_089_801A3B88[AF(arg0, u16, 2)]();
}

void func_sc03_089_80184D7C(u8 *arg0) {
    s32 o;
    s32 q;
    u8 *t;


    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(o, &D_sc03_089_801A4014);
    q = func_8012C194();
    if (q != 0) {
        AF(arg0, s32, 0xCC) = q;
        func_8001CD9C(q, &D_sc03_089_801A3B18);
        AF(q, s16, 0x18) = 0x800;
        AF(q, s16, 0x1A) = 0x800;
        AF(q, s32, 4) |= 0x50000000;
    }
    t = AF(arg0, u8 *, 0x20);
    AF(t, u16, 0x2C) |= 0x20;
    AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc03_089_801A3B58;
    AF(arg0, u16, 0xFE) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_089_80184E54(u8 *p) {
    u16 sp10[4];
    u8 *o;

    o = AF(p, u8 *, 0x64);
    if (AF(p, s16, 0xFC) != 0) {
        AF(p, s16, 2) = 2;
        func_8012B23C(p);
        AF(p, s32, 0x1C) = 0x5A;
        return;
    }
    if (AF(p, s16, 0xFE) != AF(o, s16, 0x36)) {
        func_sc03_089_80185144(p);
        return;
    }
    FaceHelper(o, &D_sc03_089_801A3B98, sp10);
    AF(p, u16, 6) = sp10[0];
    AF(p, u16, 0xA) = sp10[1];
    AF(p, u16, 0xE) = sp10[2];
    func_sc03_089_801851A8(p);
    AF(AF(p, u8 *, 0x20), s32, 0x20) = AF(AF(o, u8 *, 0x20), s32, 0x20);
    AF(AF(p, u8 *, 0x20), B8, 0x10) = AF(AF(o, u8 *, 0x20), B8, 0x10);
    AF(AF(p, u8 *, 0x20), B8, 0x18) = AF(AF(o, u8 *, 0x20), B8, 0x18);
    AF(AF(p, u8 *, 0x20), u16, 0x2C) = AF(AF(o, u8 *, 0x20), u16, 0x2C) | 0x20;
    AF(AF(p, u8 *, 0x20), s32, 4) = AF(AF(o, u8 *, 0x20), s32, 4);
}

void func_sc03_089_80184F98(u8 *arg0) {
    B8 sp10;
    s32 i;

    sp10 = *(B8 *)&D_sc03_089_801C53F8;
    if (func_8012CC64(arg0, &sp10) & 0x2000) {
        AF(arg0, s16, 2) = 3;
        func_8012E8A8(arg0);
        func_sc03_089_801854BC(AF(arg0, s32, 0xCC));
        func_8012C588(0x1AA, arg0);
        for (i = 0; i < 8; i++) {
            func_8012C588(0x1B0, arg0);
        }
        func_8002D4C8(0x705, 0);
    } else if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s16, 2) = 3;
        func_8012E8A8(arg0);
        func_sc03_089_801854BC(AF(arg0, s32, 0xCC));
    } else {
        func_sc03_089_8018517C((s32) arg0);
        func_sc03_089_8018545C(arg0);
    }
}

void func_sc03_089_80185098(u8 *arg0) {
    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_sc03_089_80185144((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C((s32) arg0);
        func_sc03_089_8018549C(AF(arg0, s32, 0xCC));
        AF(arg0, s32, 4) = (s32) AF(AF(arg0, void *, 0x64), s32, 4);
        AF(arg0, s32, 8) = (s32) AF(AF(arg0, void *, 0x64), s32, 8);
        AF(arg0, s32, 0xC) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xC);
        func_8012B2CC((s32) arg0);
        func_sc03_089_8018545C((s32) arg0);
    }
}

void func_sc03_089_80185144(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_089_8018517C(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_089_801A3BA0, (s32) (&D_sc03_089_801A3BA0 + 8), 5);
}

void func_sc03_089_801851A8(u8 *p) {
    B8 o;
    SV4 a;
    WMtx m;
    WMtx r;
    u8 *s;
    u32 w;
    WMtx *g;
    u8 *q;
    u8 unused[8];

    if (AF(p, u8 *, 0xCC) == 0) {
        return;
    }
    s = (u8 *) (AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), u32, 0x20) & 0xFEFFFFFF);
    a.x = AF(s, u16, 6);
    w = AF(s, u32, 0);
    a.y = AF(s, u8, 1) | ((w & 0xF) << 8);
    a.z = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
    RotMatrixZYX(&a, &m);
    m.t[0] = AF(s, s8, 3);
    m.t[1] = AF(s, s8, 4);
    m.t[2] = AF(s, s8, 5);
    g = (WMtx *) (AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34);
    gte_SetRotMatrix(g);
    gte_ldclmv(&m.m[0][0]);
    gte_rtir();
    gte_stclmv(&r.m[0][0]);
    gte_ldclmv(&m.m[0][1]);
    gte_rtir();
    gte_stclmv(&r.m[0][1]);
    gte_ldclmv(&m.m[0][2]);
    gte_rtir();
    gte_stclmv(&r.m[0][2]);
    g = (WMtx *) (AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(g);
    gte_ldlv0(m.t);
    gte_rtv0tr();
    gte_stlvnl(r.t);
    func_8012F14C(&r, &D_sc03_089_801A3BB0, &o);
    AF(AF(p, u8 *, 0xCC), B8, 8) = o;
    if (AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), TB, 4).top) {
        AF(AF(p, u8 *, 0xCC), TB, 4).top = 1;
    } else {
        AF(AF(p, u8 *, 0xCC), TB, 4).top = 0;
    }

}

void func_sc03_089_8018545C(s32 arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0x19);
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    }
}

void func_sc03_089_8018549C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_089_801854BC(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

void func_sc03_089_801854DC(u8 *arg0) {
    C16 *p;
    s32 i;
    s32 v;

    v = ((rsin((AF(arg0, s32, 0x1C) << 6) & 0x7C0) * 0x64) >> 0xC) + 0x64;
    i = 0;
    p = D_sc03_089_801A3B64;
loop:
    i++;
    p->b = v;
    p->g = v;
    p->r = v;
    p++;
    if (i < 3) goto loop;
    D_sc03_089_801A3B1A = v;
    D_sc03_089_801A3B19 = v;
    D_sc03_089_801A3B18 = v;
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_089_80185580(u8 *arg0) {
    D_sc03_089_801A3D00[AF(arg0, u16, 2)]();
}

void func_sc03_089_801855BC(s32 arg0) {
    s32 pad[2];
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CA1C(temp_v0, (s32) &D_sc03_089_801A3BB8);
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, s16, 0x1A) = 1;
    AF(temp_v0, u16, 0x2E) = 0xC004;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x19);
    SetScript(arg0, (s32) &D_sc03_089_801A3C78);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_089_80185678(u8 *arg0) {
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        v = rsin(AF(arg0, s32, 0x1C) << 6);
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = v * 7;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = v * 2;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x7000;
            AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = rsin(AF(arg0, s32, 0x1C) << 6) * 2;
        if (--AF(arg0, s32, 0x1C) == 0) {
            func_8012C218(arg0);
            return;
        }
        break;
    }
    func_sc03_089_801857A8(arg0);
}

s32 func_sc03_089_801857A8(u8 *arg0) {
    s32 r;
    s32 lim;
    UV4 v;

    r = AF(AF(arg0, u8 *, 0x20), s16, 0x18);
    r = (r & ~0xFF) >> 8;
    if (func_8012BE54(arg0) > r * r) {
        return 0;
    }
    lim = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
    lim = (lim & ~0x3F) >> 6;
    if (lim < ((AF(arg0, s16, 0xA) - D_80126B62) >= 0 ? (AF(arg0, s16, 0xA) - D_80126B62) : -(AF(arg0, s16, 0xA) - D_80126B62))) {
        return 0;
    }
    v.x = AF(arg0, u16, 0x6);
    v.y = AF(arg0, u16, 0xA);
    v.z = AF(arg0, u16, 0xE);
    return ((s32 (*)())func_8012F568)(1, 0x4201, 0, 0x1C, &v, &D_sc03_089_801A3D08);
}

void func_sc03_089_80185880(u8 *arg0) {
    D_sc03_089_801A3D10[AF(arg0, u16, 2)]();
}

void func_sc03_089_801858BC(s32 arg0) {
    s32 o;
    s32 t;
    s32 r;
    s32 sign;
    s32 x;
    s32 pad[2];
    s32 v;
    s32 m;

    o = func_8012C1B8();
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = o;
    func_8001C214(o, 0);
    t = rand();
    r = (s16)t;
    sign = -1;
    AF(o, u16, 0x2C) |= 0x10;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(o, s16, 0x1C) = r % 384 + 0x400;
    if (t & 1) {
        sign = 1;
    }
    m = sign * (r % 128);
    AF(o, s16, 0x10) = m - 0x300;
    AF(o, s16, 0x12) = r % 4096;
    AF(o, s16, 0x14) = 0;
    AF(arg0, u16, 0xA) -= 0x19;
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B178(arg0, -0xC0000 - ((r % 8) << 16));
    AF(arg0, s32, 0x1C) = 0x5A;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xDC) = v;
    AF(arg0, s16, 0xDE) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xE0) = v;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xE4) = v;
    AF(arg0, s16, 0xE6) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xE8) = v;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x - 16; else v = x - 16;
    AF(arg0, s16, 0xEC) = v;
    AF(arg0, s16, 0xEE) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xF0) = v;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xF4) = v;
    AF(arg0, s16, 0xF6) = 0;
    x = rand() % 8;
    if (!(rand() & 1)) v = -x + 16; else v = x + 16;
    AF(arg0, s16, 0xF8) = v;
    AF(arg0, u8, 0xFC) = 0x80;
    AF(arg0, u8, 0xFD) = 0x80;
    AF(arg0, u8, 0xFE) = 0x80;
    AF(arg0, s32, 0x100) |= 0x50000000;
    AF(arg0, s16, 2)++;
}

void func_sc03_089_80185C58(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x40);
    if ((func_8012CBCC((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_80017274((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

void func_sc03_089_80185CCC(u8 *arg0) {
    UV4 a;
    UV4 b;
    u16 s;
    u8 *o;
    s16 t;
    u16 v;

    func_8002AC00(0xD);
    if (AF(arg0, u16, 0) != 0) {
        b.x = a.x = AF(arg0, u16, 6);
        b.y = a.y = AF(arg0, u16, 0xA);
        b.z = a.z = AF(arg0, u16, 0xE);
        a.y -= 8;
        b.y += 8;
        if (!(func_8012CEB0(&a, &b, 0) & 0x1F) && !(AF(arg0, s16, 0x100) & 0x8000)) {
            s = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
            func_8001C214(AF(arg0, u8 *, 0x20), &D_sc03_089_801ACA0C);
            SetScript(arg0, &D_sc03_089_801B4150);
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) = s;
            o = (u8 *)func_8012C658(0x12C, 1, arg0);
            if (o != 0) {
                if (AF(arg0, s16, 0xA) >= 0x10) {
                    func_8012C218(o);
                    return;
                }
                AF(AF(o, u8 *, 0x20), u16, 0x12) = s;
                func_8012B030(o);
                if (AF(arg0, s16, 0x70) == 5) {
                    v = AF(arg0, u16, 0x100);
                    AF(o, s16, 0x70) = 6;
                    AF(o, s16, 0xFE) = 1;
                    AF(o, u16, 0x100) = v;
                    do {
                        func_8012C658(0x12F, 5, o);
                        t = AF(o, s16, 0xFE) + 3;
                        AF(o, s16, 0xFE) = t;
                    } while (t < 0x10);
                    AF(o, s16, 0xFE) = 0;
                }
            }
        }
    }
}

void func_sc03_089_80185E50(u8 *arg0) {
    s16 t;

    if (func_8012C354(arg0, &D_sc03_089_801A6678[AF(arg0, s16, 0x70)]) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    func_80143970(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc03_089_801B3058);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A67B0;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc03_089_801B2920);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A6850;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc03_089_801B3FD0);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A6898;
        break;
    case 4:
        SetScript(arg0, &D_sc03_089_801B3058);
        AF(arg0, s16, 2) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A67B0;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc03_089_801B3E50);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc03_089_801B3058);
            AF(arg0, s16, 2) = 1;
        }
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A67B0;
        AF(arg0, s16, 0xFE) = 1;
        do {
            func_8012C658(0x12F, 5, arg0);
            t = AF(arg0, s16, 0xFE) + 1;
            AF(arg0, s16, 0xFE) = t;
        } while (t < 6);
        AF(arg0, s16, 0xFE) = 0;
        break;
    }
    func_8012B2CC(arg0);
}

void func_sc03_089_80186074(u8 *arg0) {
    s32 vec[8];
    SV a;
    SV b;
    SV c;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 ax;
    s32 r;

    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript(arg0, &D_sc03_089_801B3058);
        AF(arg0, s16, 0xFE) = 0;
    }
    AF(arg0, s16, 0xFC)++;
    if (func_8012BE98(arg0, arg0 + 0x88) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    vec[0] = 0;
    vec[1] = 0;
    vec[2] = -(AF(arg0, s16, 0xFC) << 17) / 24;
    func_8012B1B4(arg0, vec);
    if (!(((s32 (*)())func_8012CBA4)(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    r = 0x30;
    a.vx = AF(arg0, s16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.vy = AF(arg0, s16, 0xA) - 0x20;
    a.vz = AF(arg0, s16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.vx = a.vx;
    b.vy = a.vy + 0x60;
    b.vz = a.vz;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    if (AF(arg0, s16, 0xFE) == 0 && func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        SetScript(arg0, &D_sc03_089_801B29C8);
        AF(arg0, s16, 2) = 2;
        c.vx = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        c.vy = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        c.vz = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&c, &sxy, &p, &flag);
        if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16)(((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            x = ((s16 *)&sxy)[0];
            ax = x;
            if (x < 0) {
                ax = -x;
            }
            ax = (0xA0 - ax) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 16) {
                x = 15;
            }
            x <<= 8;
            func_8002D4C8(0xA9B, (u16)(ax | 0x3000 | x));
        }
    }
    if (AF(arg0, s16, 0xFC) == 0x18) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_089_80186428(u8 *arg0) {
    s32 v[4];
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    AF(arg0, s16, 0xFC)++;
    v[0] = 0;
    v[1] = 0;
    v[2] = -(AF(arg0, s16, 0xFC) << 17) / 36;
    func_8012B1B4(arg0, v);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = func_8012BCCC(arg0);
    if (t < 0x1001 && func_8012BDBC(arg0, 0x200) == 1) {
        if (!(rand() & 3)) {
            SetScript(arg0, &D_sc03_089_801B3958);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc03_089_801B32D8);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc03_089_801B3B60);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_089_80186668(u8 *arg0) {
    u8 unused[0x10];
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    u8 *q;
    s32 x;
    s32 a;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    func_8012B1B4(arg0, &D_sc03_089_801A6910);
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 7;
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            a = x;
            if (x < 0) {
                a = -x;
            }
            a = (0xA0 - a) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8;
            func_8002D4C8(0xA9B, (u16)(a | 0x3000 | x));
        }
    }
}

void func_sc03_089_801868D0(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    func_8012B1B4(arg0, &D_sc03_089_801A6910);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = func_8012BCCC(arg0);
    if (t < 0x2401 && func_8012BDBC(arg0, 0x200) == 1) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, &D_sc03_089_801B3618);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_089_80186A78(u8 *arg0) {
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    s32 x;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xD) {
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            if (x < 0) {
                x = -x;
            }
            x = (0xA0 - x) * 0x7F / 160;
            func_8002D4C8(0x702, (u16)(x | 0x1000));
        }
    }
    if (func_8012BCCC(arg0) <= 0x24000) {
        if (++AF(arg0, s16, 0x102) >= 0x78) {
            if (!(AF(arg0, u16, 0x100) & 0x2000)) {
                SetScript(arg0, &D_sc03_089_801B4168);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc03_089_801A6648 | 0x40000000 | 0x20000000;
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0x100) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62 - 0x80) {
        AF(arg0, s16, 0xA) = y - 8;
    }
    func_8012B1B4(arg0, &D_sc03_089_801A691C);
    func_8012CBCC(arg0);
}

void func_sc03_089_80186CC4(u8 *arg0) {
    s32 v[4];
    s32 d;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 0x98) = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 4);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    v[0] = 0;
    v[1] = 0;
    d = AF(arg0, s32, 4) - D_80126B5C;
    v[2] = d;
    if (d > 0) {
        v[2] = -d;
    }
    d = AF(arg0, s32, 0xC) - D_80126B64;
    v[3] = d;
    if (d > 0) {
        v[3] = -d;
    }
    v[2] = (v[2] + v[3]) >> 4;
    func_8012B1B4(arg0, v);
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0xA) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62) {
        AF(arg0, s16, 0xA) = y - 8;
    } else if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x98) = 1;
    }
    func_8012CBCC(arg0);
}

void func_sc03_089_80186E10(u8 *arg0) {
    u8 *p;
    s32 i;

    D_sc03_089_801A6934[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0 && (AF(arg0, u16, 0x100) & 0x1000)) {
        for (p = &D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x15E) {
                if (AF(arg0, s16, 6) < AF(p, s16, 6) + 0xF0) {
                    AF(arg0, s16, 6) = AF(p, s16, 6) + 0xF0;
                }
                return;
            }
        }
    }
}

void func_sc03_089_80186EC8(u8 *arg0) {
    s16 v[8];
    s32 r[2];
    s32 t;
    u8 *o;
    u8 *g;

    g = D_801151D4;
    AF(arg0, s32, 0x1C) -= 1;
    v[1] = AF(g, s32, 0x5C);
    v[3] = AF(g, s32, 0x60);
    v[5] = AF(g, s32, 0x64);
    func_8012B77C(r, arg0 + 4, v);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = (r[0] + 0x400) & 0xFFF;
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0x55;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) += 0x55;
    t = AF(arg0, s32, 0x1C);
    if (t == 0xF) {
        func_8002D4C8(0xCBA, 0);
        t = AF(arg0, s32, 0x1C);
    }
    if (t < 0x10) {
        if (t == 0) {
            func_8012C218(arg0);
            return;
        }
        o = (u8 *) func_80143C74(arg0, 0);
        if (o != 0) {
            AF(o, s16, 0x16) = -4;
            AF(o, s16, 0x12) = (rand() & 7) - 4;
            AF(o, s16, 0x1A) = (rand() & 7) - 4;
            AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
            AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
        }
    }
}

void func_sc03_089_8018701C(u8 *arg0) {
    D_sc03_089_801A69C4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0x14) == 1) {
            func_8012C218((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        func_8012B370(arg0);
    }
}

void func_sc03_089_801870C8(u8 *arg0) {
    D_sc03_089_801A6B24[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624(arg0, 0x10, 0x16) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
            func_8012C218(arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc03_089_80187178(u8 *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.vx = x;
    b.vx = x;
    y = AF(arg0, u16, 0xA);
    a.vy = y;
    b.vy = y;
    z = AF(arg0, u16, 0xE);
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (func_8012CEB0(&a, &b, 0) & 0x1F) {
        func_80131E00(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc03_089_801B3EE8);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, u8 *, 0xBC) = &D_sc03_089_801A67B0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x58) = (s32)&D_sc03_089_801A6648 | 0x40000000 | 0x20000000;
    AF(arg0, u16, 0x88) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x8A) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x8C) = AF(arg0, u16, 0xE);
}

void func_sc03_089_80187260(u8 *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.vx = x;
    b.vx = x;
    y = AF(arg0, u16, 0xA);
    a.vy = y;
    b.vy = y;
    z = AF(arg0, u16, 0xE);
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (func_8012CEB0(&a, &b, 0) & 0x1F) {
        AF(arg0, u16, 0x100) |= 0x8000;
        func_80131E00(arg0, 6);
        return;
    }
    if (AF(arg0, u8 *, 0x90) == &D_sc03_089_801B24A0) {
        SetScript(arg0, &D_sc03_089_801B2298);
        AF(arg0, s16, 2) = 0x14;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, u8 *, 0xCC) = &D_sc03_089_801B3058;
    } else {
        if (AF(arg0, s16, 0xFE) != 0) {
            SetScript(arg0, &D_sc03_089_801B3B60);
        } else {
            SetScript(arg0, &D_sc03_089_801B3058);
        }
        AF(arg0, s16, 2) = 1;
    }
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc03_089_8018737C(u8 *arg0) {
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

void func_sc03_089_8018745C(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        func_8012B1B4(arg0, &D_sc03_089_801A662C);
        if (!(func_8012CBA4(arg0) & 0x6000)) {
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            b = a;
            b.y += 8;
            if (func_80133784(1, &a, &b) != 0) {
                AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
                AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
                AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
            }
        }
    }
}

void func_sc03_089_80187534(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_089_8018759C(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_089_801875D8(u8 *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.vx = x;
    b.vx = x;
    y = AF(arg0, u16, 0xA);
    a.vy = y;
    b.vy = y;
    z = AF(arg0, u16, 0xE);
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (func_8012CEB0(&a, &b, 0) & 0x19) {
        func_80131E00(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc03_089_801B3FD0);
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc03_089_8018767C(u8 *arg0) {
    UV4 a;
    UV4 b;

    func_8012B1B4(arg0, &D_sc03_089_801A662C);
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        a.x = AF(arg0, u16, 0x3A);
        a.y = AF(arg0, u16, 0x3E);
        a.z = AF(arg0, u16, 0x42);
        b = a;
        b.y += 8;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
            AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
            AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        }
    }
}

void func_sc03_089_8018773C(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_089_801A663C);
}

void func_sc03_089_80187770(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_089_801877CC(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_089_80187804(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2B38, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

void func_sc03_089_80187860(s32 arg0) {
    s32 temp_v1;

    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc03_089_801B2B38);
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && func_8012DEB8(arg0, (s32) &D_sc03_089_801A68F0, (s32) &D_sc03_089_801A68F8) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_089_80187938(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2B38);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_089_801879CC(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc03_089_801B3850);
        AF(arg0, s16, 0x34) = 7;
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    if (AF(arg0, s32, 0x94) == 0x17 && func_8012DEB8(arg0, (s32) &D_sc03_089_801A68F0, (s32) &D_sc03_089_801A68F8) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_089_80187A98(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        func_8012B1B4((s32) arg0, (s32) &D_sc03_089_801A6928);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2920);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && func_8012D5E4((s32) arg0, (s32) &D_sc03_089_801A6900, (s32) &D_sc03_089_801A6908, 0x14) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &D_80126B96;
            D_80126B98 = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc03_089_80187B70(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_089_801B2920);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_089_801A6658 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_089_80187C0C(u8 *arg0) {
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

void func_sc03_089_80187C64(void) {
}

void func_sc03_089_80187C6C(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_089_801A68F0, (s32) &D_sc03_089_801A68F8) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_089_801B33E0);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_089_801B3B60);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_089_80187D0C(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_089_801B3B60);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_089_80187D60(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_089_801A68F0, (s32) &D_sc03_089_801A68F8) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_089_801B3720);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_089_801B3FD0);
    AF(arg0, s16, 2) = 6;
}

void func_sc03_089_80187DF4(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_089_801B3850);
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 8;
    }
}

void func_sc03_089_80187E3C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_089_80187E64(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

void func_sc03_089_80187EB0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_089_801A6988);
    SetScript((s32) arg0, (s32) &D_sc03_089_801A69A0);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_089_801A69B8);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_089_80187F9C(s32 arg0) {
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

void func_sc03_089_80188020(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_089_801A69D0);
    SetScript((s32) arg0, (s32) &D_sc03_089_801A6A90);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_089_801A6B18);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_089_8018812C(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_089_80188164(u8 *arg0, s32 arg1) {
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

void func_sc03_089_801881D0(s32 arg0) {
    u8 unused[8];
    s32 o;
    s32 k;
    Rec8 *r;
    s16 c;
    s32 i;
    s32 t;

    o = func_8012C194();
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    t = AF(arg0, u16, 0x72);
    k = AF(arg0, s16, 0x70);
    AF(arg0, s32, 0x20) = o;
    t |= 0x1000;
    t &= 0xFFFF;
    AF(arg0, u16, 0x72) = t;
    i = k;
    k &= 0x8000;
    if (k) {
        i &= 1;
        r = &D_sc03_089_801C3BFC[i];
        func_8001CB6C(o, D_sc03_089_801C3C0C[i], r->x, r->y);
        c = r->c;
        AF(o, s16, 0x10) = 0x400;
        AF(o, s16, 0x1A) = 0x2000;
        AF(o, s16, 0x18) = 0x2000;
        AF(o, u8, 0x27) = c;
    } else {
        func_8001CF00(o);
        AF(o, s32 *, 0x20) = &D_sc03_089_801C6770;
        AF(o, s16, 0x28) = 0x300;
        AF(o, s16, 0x2A) = 0x110;
        AF(o, u8, 0x27) = 0x78;
        AF(o, s16, 0x10) = 0x400;
        AF(o, s16, 0x1A) = 0x800;
        AF(o, s16, 0x18) = 0x800;
        if (!(AF(arg0, u16, 0x70) & 3)) {
            func_800233CC(&D_sc03_089_801C6770, 0x80);
        }
        if (AF(arg0, u16, 0x70) & 1) {
            D_sc03_089_801C3B94[(AF(arg0, u16, 0x70) & 3) * 6] = 0x10;
            AF(o, s16, 0x14) = 0x400;
        } else {
            D_sc03_089_801C3B94[(AF(arg0, u16, 0x70) & 3) * 6] = 0x20;
            AF(o, s32, 4) |= 0x40000000;
            if (AF(arg0, u16, 0x70) & 0x4000) {
                func_8002D4C8(0x701, 0);
            }
            if (AF(arg0, u16, 0x70) & 0x2000) {
                if (!(func_800291B4(AF(arg0, s16, 0xFC)) & 0xFF)) {
                    AF(arg0, u16, 0x70) |= 0x4000;
                } else {
                    AF(arg0, u16, 0x70) &= 0xDFFF;
                }
            }
            func_8012C658(0x1E1, (s16) (AF(arg0, u16, 0x70) | 1), arg0);
        }
        D_sc03_089_801C3B96[(AF(arg0, u16, 0x70) & 3) * 6] = 0x20;
        if (AF(arg0, u16, 0x70) & 0x4000) {
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
        }
    }
    func_8012AD50(arg0);
}

s32 func_sc03_089_80188428(s32 arg0) {
    D_sc03_089_801C3C18[0] = AF(arg0, u16, 6) | (AF(arg0, s16, 0xE) << 0x10);
    func_80178B18(arg0, (s32) (D_sc03_089_801C3C18 - 0x1), D_sc03_089_801C3C18);
    return func_8012AD44(arg0, 2);
}

void func_sc03_089_8018847C(u8 *arg0) {
    D_sc03_089_801C3C2C[AF(arg0, u16, 2)]();
}

void func_sc03_089_801884B8(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_089_801C3B90;
    func_sc03_089_801887E8(temp_s1, (s32) temp_s2);
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

s32 func_sc03_089_801885A4(s32 arg0, s32 arg1) {
    V3 v;
    V3 r;
    s16 dy;

    v.x = AF(arg0, s16, 6) - D_80126B5E;
    v.y = 0;
    v.z = AF(arg0, s16, 0xE) - (s16) D_80126B66;
    Square0(&v, &r);
    dy = D_80126B62 - AF(arg0, u16, 0xA);
    if (dy < 0) {
        dy = -dy;
    }
    if (r.x + r.z < (u16) arg1 * (u16) arg1 && dy < 4) {
        return 1;
    }
    return 0;
}

void func_sc03_089_80188664(void) {
    u8 *p;
    s32 i;

    p = (u8 *) &D_801202A0;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1E1) {
            AF(p, u16, 0x70) |= 0x1000;
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_089_801886B4(u8 *arg0) {
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
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_089_801885A4((s32) arg0, 0x30) != 0)) {
                func_sc03_089_80188428((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_089_801884B8((s32) arg0);
        }
    }
}

void func_sc03_089_8018879C(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_089_801884B8(arg0);
}

void func_sc03_089_801887E8(u8 *arg0, s32 arg1) {
    SV pos;
    SV v[3];
    struct { s32 scr[13]; s32 zs[6]; } s;
    s32 flag;
    s32 z;
    s32 flag2;
    u32 *ot;
    Pts80182FD4 *p;
    s32 i;
    s32 d;
    u16 t;

    ot = g_WorldOtTable[D_800B9A02[0]];
    p = AF(arg0, Pts80182FD4 *, 0x20);
    if (p == 0) {
        return;
    }
    if (AF(arg0, s32, 0x34) != 0) {
        func_8001E094();
    } else {
        func_8001E378(arg0);
    }
    pos.vx = AF(arg0, s16, 0x2E);
    pos.vy = AF(arg0, s16, 0x30);
    pos.vz = AF(arg0, s16, 0x32);
    gte_ldv0(&pos);
    gte_rtps();
    gte_stsxy(&s.scr[0]);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (flag & ~0x1000) {
        return;
    }
    d = z + 1;
    t = AF(arg0, u16, 0x2C);
    if (t & 0xC000) {
        if ((t & 0xC000) == 0xC000) {
            d -= t & 0xFFF;
            if (d < 0) {
                d = 0;
            }
        } else {
            d += t & 0xFFF;
        }
    }
    if (d >= 0x1000) {
        return;
    }
    if (AF(arg0, s16, 0x1E) & 0x8000) {
        for (i = 0; i < 12; i += 6) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            v[1].vx = pos.vx + p->pt[i + 2].x;
            v[1].vy = pos.vy + p->pt[i + 2].y;
            v[1].vz = pos.vz;
            v[2].vx = pos.vx + p->pt[i + 4].x;
            v[2].vy = pos.vy + p->pt[i + 4].y;
            v[2].vz = pos.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.scr[i + 1], &s.scr[i + 3], &s.scr[i + 5]);
        }
        for (i = 1; i < 12; i += 2) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            gte_ldv0(&v[0]);
            gte_rtps();
            gte_stsxy(&s.scr[i + 1]);
            gte_stflg(&flag2);
            gte_stszotz(&z);
            *(s.zs + (i >> 1)) = z + 1;
        }
        func_sc03_089_80188C04(arg0, arg1, s.scr, ot);
    } else {
        for (i = 0; i < 12; i += 3) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            v[1].vx = pos.vx + p->pt[i + 1].x;
            v[1].vy = pos.vy + p->pt[i + 1].y;
            v[1].vz = pos.vz;
            v[2].vx = pos.vx + p->pt[i + 2].x;
            v[2].vy = pos.vy + p->pt[i + 2].y;
            v[2].vz = pos.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.scr[i + 1], &s.scr[i + 2], &s.scr[i + 3]);
        }
        func_sc03_089_80188C04(arg0, arg1, s.scr, &ot[d]);
    }
}

void func_sc03_089_80188C04(u8 *o, u8 *s, u8 *v, u32 *ot) {
    PFT4 *p;
    PMODE *m;
    FANUV *uv;
    u32 fl;
    s32 tp, sh, i;
    u16 x, y;
    s32 code, abr, tpage, clut, c, tb;
    u32 ty;
    u16 u;
    u8 u0, v0;
    u16 vv;
    s32 t;
    u16 u1, v1;
    u16 sflag;

    p = (PFT4 *)g_PrimNext;
    sflag = *(u16 *)(o + 0x1E) & 0x8000;
    fl = *(u32 *)(o + 4);
    tp = (fl >> 24) & 3;
    sh = 2 - tp;
    x = *(u16 *)(o + 0x28) + (*(s16 *)(s + 4) >> sh);
    y = *(u16 *)(o + 0x2A) + *(u16 *)(s + 6);
    uv = *(FANUV **)(o + 0x20);
    g_PrimNext = (u8 *)p + 0xF0;
    if (fl & 0x40000000) {
        code = 0x2E;
        abr = (fl >> 28) & 3;
    } else {
        code = 0x2C;
        abr = 1;
    }
    tb = (tp << 7) | (abr << 5);
    ty = y & 0x100;
    tpage = tb | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    c = (o[0x27] + 0x100) << 6;
    if (o[0x27] < 0xE0) {
        clut = c | 0x16;
    } else {
        clut = c | 0x10;
    }
    u = ((x - ((tpage & 0xF) << 6)) << sh) + (*(u16 *)(s + 4) & ((1 << sh) - 1));
    u1 = u + s[2] - 1;
    if (u1 > 0xFF) u1 = 0xFF;
    t = y;
    if (tpage & 0x10) {
        vv = t - 0x100;
    } else {
        vv = t;
    }
    v1 = vv + s[3] - 1;
    if (v1 > 0xFF) v1 = 0xFF;
    i = 1;
    u0 = u;
    v0 = vv;
    for (; i < 13; i += 2, p++) {
        ((u8 *)p)[3] = 9;
        p->code = code;
        p->tpage = tpage;
        p->u2 = u;
        p->v2 = vv;
        p->u0 = (uv->t[i - 1].x >> 3) + u0;
        p->v0 = (uv->t[i - 1].y >> 3) + v0;
        p->u1 = (uv->t[i].x >> 3) + u0;
        p->v1 = (uv->t[i].y >> 3) + v0;
        p->u3 = (uv->t[i + 1].x >> 3) + u0;
        p->v3 = (uv->t[i + 1].y >> 3) + v0;
        p->clut = clut;
        p->r0 = o[0x24];
        p->g0 = o[0x25];
        p->b0 = o[0x26];
        p->x0 = *(s16 *)(v + i * 4);
        p->y0 = *(s16 *)(v + i * 4 + 2);
        p->x1 = *(s16 *)(v + i * 4 + 4);
        p->y1 = *(s16 *)(v + i * 4 + 6);
        p->x2 = *(s16 *)(v + 0);
        p->y2 = *(s16 *)(v + 2);
        p->x3 = *(s16 *)(v + i * 4 + 8);
        p->y3 = *(s16 *)(v + i * 4 + 10);
        if (sflag) {
            addPrim(&ot[*(s32 *)(v + (i >> 1) * 4 + 0x34)], p);
        } else {
            addPrim(ot, p);
        }
    }
    p[-1].x3 = *(s16 *)(v + 4);
    p[-1].y3 = *(s16 *)(v + 6);
    p[-1].u3 = u + (uv->t[0].x >> 3);
    p[-1].v3 = (uv->t[0].y >> 3) + vv;
    if (fl & 0x40000000) {
        m = (PMODE *)p;
        if (sflag) {
            g_PrimNext += 0x30;
            for (i = 0; i < 6; i++, m++) {
                ((u8 *)m)[3] = 1;
                m->code = (abr << 5) | 0xE100000A;
                addPrim(&ot[((s32 *)(v + i * 4))[13]], m);
            }
        } else {
            m->code = (abr << 5) | 0xE100000A;
            g_PrimNext += 8;
            ((u8 *)m)[3] = 1;
            addPrim(ot, m);
        }
    }
}

void func_sc03_089_80189124(void) {
}

void func_sc03_089_8018912C(u8 *arg0) {
    D_sc03_089_801C3D18[AF(arg0, u16, 2)]();
}

void func_sc03_089_80189168(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_089_801C3C38, D_sc03_089_801C3C3A, D_sc03_089_801C3C3C);
        p = &D_sc03_089_801C3C40;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_089_801C3C70, D_sc03_089_801C3C72, D_sc03_089_801C3C74);
        p = &D_sc03_089_801C3C78;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_089_801C3CA8, D_sc03_089_801C3CAA, D_sc03_089_801C3CAC);
        p = &D_sc03_089_801C3CB0;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_089_801C3C38, D_sc03_089_801C3C3A, D_sc03_089_801C3C3C);
        p = &D_sc03_089_801C3C40;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_089_801C3CE0, D_sc03_089_801C3CE2, D_sc03_089_801C3CE4);
        p = &D_sc03_089_801C3CE8;
        func_8012AD44(arg0, 5);
        break;
    }
    D_800A5E88.a = p->a;
    D_800A5E88.b = p->b;
    D_800A5E88.c = p->c;
    func_80028620(0, &D_800A5E88.a);
    func_80028620(1, &D_800A5E88.b);
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_089_8018935C(u8 *arg0) {
    D_800A5E88.c = D_sc03_089_801C3C60;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_089_8018940C(u8 *arg0) {
    D_800A5E88.c = D_sc03_089_801C3C98;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_089_801894BC(u8 *arg0) {
    D_800A5E88.a = D_sc03_089_801C3CB0.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_089_8018956C(void) {
}

void func_sc03_089_80189574(u8 *arg0) {
    D_800A5E88.a = D_sc03_089_801C3CE8.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}
