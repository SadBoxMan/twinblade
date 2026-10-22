#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_003_8017BE9C(void) {
}

void func_sc02_003_8017BEA4(void) {
}

void func_sc02_003_8017BEAC(void) {
}

void func_sc02_003_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc02_003_8018E614[])();
extern void func_80147324();
extern void func_sc02_003_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc02_003_8018E628[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc02_003_8018E63C[])();
extern void func_800D22E4();
extern void func_sc02_003_8017C910();
extern void (*D_sc02_003_8018E65C[])();
extern void (*D_sc02_003_8018E664[])();
extern u8 D_sc02_003_8018E650;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_sc02_003_801803D0();
extern void func_sc02_003_80181D2C();
extern void (*D_sc02_003_8018EA0C[])();
extern void (*D_sc02_003_8018EAC4[])();
extern void (*D_sc02_003_8018EACC[])();
extern void (*D_sc02_003_8018EAD8[])();
extern s32 func_800167F0();
extern void (*D_sc02_003_8018EAE0[])();
extern void (*D_sc02_003_8018ED20[])();
void func_sc02_003_801824E0(u8 *arg0);
extern void (*D_sc02_003_8018ED38[])();
void func_sc02_003_801826C4(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_003_8018ED5C[])();
void func_sc02_003_80182D00(u8 *arg0);
extern void (*D_sc02_003_8018EDA0[])();
void func_sc02_003_80183238(u8 *arg0);
extern void (*D_sc02_003_8018EDC0[])();
void func_sc02_003_80183718(u8 *arg0);
extern void (*D_sc02_003_8018F2E0[])();
extern void (*D_sc02_003_8018F2E8[])();
extern void (*D_sc02_003_8018F2F4[])();
extern void (*D_sc02_003_8018F2FC[])();
extern void (*D_sc02_003_8018F31C[])();
extern void (*D_sc02_003_8018F394[])();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc02_003_8018AF28;
extern u8 D_sc02_003_801DCA30;
extern void (*D_sc02_003_8018F3AC[])();
extern void (*D_sc02_003_8018F3C4[])();
extern void (*D_sc02_003_8018F3D4[])();
extern void (*D_sc02_003_8018F460[])();
extern void (*D_sc02_003_8018F46C[])();
extern void (*D_sc02_003_8018F540[])();
extern void (*D_sc02_003_8018F558[])();
extern void (*D_sc02_003_8018F590[])();
extern void (*D_sc02_003_8018F598[])();
extern void (*D_sc02_003_8018F5A0[])();
extern void (*D_sc02_003_8018F5BC[])();
extern void (*D_sc02_003_8018F6C4[])();
extern void (*D_sc02_003_8018F714[])();
extern void (*D_sc02_003_8018F724[])();
extern void (*D_sc02_003_801A7818[])();
extern void (*D_sc02_003_801A782C[])();
extern void (*D_sc02_003_801A7B28[])();

void func_sc02_003_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_003_8017BEF8(u8 *arg0) {
    D_sc02_003_8018E614[AF(arg0, u16, 2)]();
}

void func_sc02_003_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_003_8017C218((s32) arg0);
}

void func_sc02_003_8017BFE0(u8 *arg0) {
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
    func_sc02_003_8017C218((s32) arg0);
}

void func_sc02_003_8017C064(u8 *arg0) {
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
    func_sc02_003_8017C218((s32) arg0);
}

void func_sc02_003_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_003_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern s32 D_sc02_003_801E8668;
extern s32 func_8012C588();

extern u8 D_sc02_003_801A668C;
extern u8 D_sc02_003_801A72C4;
extern u8 D_sc02_003_8018E6EC;
extern u8 D_sc02_003_801A6F44;
extern void func_8012B2CC();
extern void func_8012B23C();
extern s32 func_8012B14C();
extern u8 D_sc02_003_8018E6F8;
extern s32 func_8002D4C8();
extern u8 D_sc02_003_8018E704;
extern u8 D_sc02_003_801A6E7C;
extern void func_80143CD4();
extern void func_800CB0E8();
extern u8 D_sc02_003_801A73BC;
extern u8 D_sc02_003_8018E78C;
extern void func_80130740();
extern void func_8012E364();
extern s32 func_8012E470();
extern void func_8012E4C8();
extern s32 func_8012BEE8();
extern void func_sc02_003_80181914();
extern u8 D_8012694C;
extern u8 D_80126948;
extern void func_8012A094();
extern void func_sc02_003_80181AD4();
extern void func_8012A018();
extern u16 D_80126B5E;
extern u16 D_801274E8;
extern s32 D_sc02_003_801E8770;
extern void func_8016EDEC();
extern void func_800167B8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern u8 D_800D5A34;
extern s32 func_800CF854();
extern void func_80154274();
extern void func_80146994();
extern s32 func_8014C050();
extern s32 func_8013767C();
extern s32 func_801399F0();
extern void func_80139914();
extern void func_80165770();
extern void func_80175414();
extern void func_80171B44();
extern void func_sc02_003_80182744();
extern void (*D_sc02_003_8018ED44[])();
extern s32 func_8001AAA0();
extern void func_80175454();
extern void func_sc02_003_801818C0();
extern u8 D_sc02_003_8018EC34;
extern u8 D_sc02_003_8018ED10;
extern void func_sc02_003_80182BD0();
extern void func_sc02_003_80182CB4();
extern s32 func_8001B23C();
extern void func_801599A4();
extern u8 D_800D4744;
extern u8 D_sc02_003_801A7F50;
extern u8 D_sc02_003_801A7FF0;
s32 func_sc02_003_801831A8(s32 arg0, s32 arg1);
extern void func_80142454();
extern void func_sc02_003_80185E88();
extern void func_801466F0();
extern void func_80154150();
extern void func_801477E8();
extern s32 D_80126984;
extern s32 D_80126990;
extern u8 D_sc02_003_8018ED88;
extern s32 func_8013C9C4();
extern s8 D_80126D6C;
extern u8 D_80126B58;
extern void func_80147AD4();
extern void func_801473EC();
extern void func_80172414();
extern void func_80146D90();
extern void func_sc02_003_80185F24();
extern void func_sc02_003_80185F58();
extern void func_sc02_003_80183A78();
extern void func_sc02_003_80183B64();
extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern void func_sc02_003_80183C94();
extern s32 func_80146E98();
extern void func_80146E90();
extern void func_80146DE8();
extern void func_80146CA0();
extern void func_80162FF4();
extern void func_80162FC0();
extern void func_80162CCC();
extern void (*D_sc02_003_8018F1B4[])();
extern void func_8013D064();
extern u16 D_800B99DC;
extern u8 D_sc02_003_8018B358;
extern u8 D_sc02_003_8018EDDC;
extern u8 D_sc02_003_801B9230;
extern s32 D_sc02_003_801E8754;
extern s32 D_sc02_003_801E8820;
extern void func_80036D58();
extern s32 func_sc02_003_8018623C();
extern void func_sc02_003_80185E00();
extern void func_sc02_003_80181934();
extern s32 func_sc02_003_8018621C();
extern void func_sc02_003_8018483C();
extern s32 func_sc02_003_80185C48();
extern void func_sc02_003_80187354();
extern s32 D_sc02_003_801E873C;
extern s32 D_sc02_003_801E8750;
extern void func_8013D164();
extern u8 D_sc02_003_8018F210;
extern u8 D_sc02_003_8018F288;
extern void func_8001CA1C();
extern void func_8012C218();
extern s32 func_8012E504();
extern void func_8001D0E8();
extern u8 D_sc02_003_8018EFDC;
extern u8 D_sc02_003_801DF700;
extern void func_8012AD80();
extern s32 func_8013BD34();
extern s32 D_sc02_003_801E8010;
extern u8 D_sc02_003_8018F39C;
extern u8 D_sc02_003_801E0294;
extern void func_8012B200();
extern s32 func_8012CBCC();
extern void func_80143B6C();
extern u8 D_sc02_003_801E10B4;
extern u8 D_sc02_003_801E14AC;
extern void func_sc02_003_80187480();
extern void func_8012AD44();
extern u8 D_sc02_003_8018F560;
extern void func_8001CB6C();
extern s32 func_80128ED8();
extern void func_801292C8();
extern u8 D_sc02_003_8018F5A4;
extern u8 D_sc02_003_801AFAC8;
extern u8 D_sc02_003_8018F5C4;
extern u8 D_sc02_003_8018F684;
extern u8 D_sc02_003_801E8830;
extern s32 func_sc02_003_8018A3C8();
extern void func_800233CC();
extern void func_sc02_003_8018A550();
extern void func_8012AD50();
extern s32 func_sc02_003_80188F08();
extern s32 func_sc02_003_8018A3FC();
extern s16 D_800B9A0E;
extern s32 D_sc02_003_801E8778;
extern s32 D_sc02_003_801E877C;
extern s32 func_8012E544();
extern s16 D_sc02_003_8018F71E;
extern void func_sc02_003_80189C6C();
extern void func_sc02_003_80189D10();
extern u8 D_sc02_003_801A7AD4;

extern s32 func_8012CBF4();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc02_003_801A7804;
extern u8 D_sc02_003_801A7810;
extern s32 func_80132EF4();

extern u8 D_sc02_003_801A6C5C;
extern u8 D_sc02_003_8018EFF4;
extern s8 D_sc02_003_8018EFF5;
extern s8 D_sc02_003_8018EFF6;
extern s32 func_8001D074();
extern void func_8001CD9C();
extern void func_sc02_003_8018626C();

extern u8 D_sc02_003_8018F034;
extern u8 D_sc02_003_8018F03C;
extern void func_8012F14C();

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
extern SndReq D_800A5E98;
extern s32 D_801270C8;
extern s32 D_801270D4;
extern u8 D_sc02_003_8018F6CC;
extern void func_80028620();
extern s32 func_8012B8A4();
extern s32 func_800CF8B4();
extern void func_sc02_003_80189340();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc02_003_8018E5E8[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();

void func_sc02_003_8017C218(u8 *arg0) {
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
    t = D_sc02_003_8018E5E8;
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
    t = D_sc02_003_8018E5E8;
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
        t = D_sc02_003_8018E5E8;
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

void func_sc02_003_8017C524(u8 *arg0) {
    D_sc02_003_8018E628[AF(arg0, u16, 2)]();
}

void func_sc02_003_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_8017C5A0(u8 *arg0) {
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
    func_sc02_003_8017C218((s32) arg0);
}

void func_sc02_003_8017C610(u8 *arg0) {
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
    func_sc02_003_8017C218((s32) arg0);
}

void func_sc02_003_8017C69C(u8 *arg0) {
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
    func_sc02_003_8017C218((s32) arg0);
}

void func_sc02_003_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_003_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_003_8017C7C4(u8 *arg0) {
    D_sc02_003_8018E63C[AF(arg0, u16, 2)]();
}


typedef struct { s32 x, y, z, pad; } V4;
extern u8 D_sc02_003_801A79A4;
extern u8 D_sc02_003_801A777C;
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern u8 D_sc02_003_801A7820;

extern void func_sc02_003_8017D230();
extern s32 func_8012BCCC();
extern s32 func_8012B8E4();
extern s32 func_8012C51C();
extern u8 D_sc02_003_8018E6D4;
extern u8 D_sc02_003_8018E66C;
extern u8 D_sc02_003_801A629C;
extern u8 D_sc02_003_801A6754;
extern u8 D_sc02_003_801A6534;
extern s32 func_8012C354();
extern void func_80143970();
extern void func_8012B030();
extern u8 D_sc02_003_8018E990;
extern s32 D_sc02_003_8018E960[];
extern u8 D_sc02_003_8018E7C0[][52];
extern u8 D_sc02_003_8018E6BC;
extern u8 D_sc02_003_8018E68C;
extern u8 D_sc02_003_801A648C;
extern u16 D_sc02_003_8018E7A8[][4];
typedef struct { u32 *ot; s32 pad[4]; } OtE;
extern u8 D_800AF648;
extern s32 D_80126950;
extern OtE D_800A651C[];
extern u16 D_800B9A02;
extern u8 *func_80010A08(s32 n);
extern s16 D_sc02_003_8018F6E4[];

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017C800);

void func_sc02_003_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_003_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_003_8017C910(u8 *arg0) {
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

void func_sc02_003_8017CA80(u8 *arg0) {
    D_sc02_003_8018E65C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017CABC);

void func_sc02_003_8017CC80(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc02_003_8017CD14(u8 *arg0) {
    D_sc02_003_8018E664[AF(arg0, u16, 2)]();
}

void func_sc02_003_8017CD50(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_003_8018E650, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc02_003_8017CDF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

void func_sc02_003_8017CE58(SV8 *r, SV8 *out, s32 arg2) {
    SV8 v[4];
    SV8 w4[4];
    SV8 p[4];
    SV8 c0;
    SV8 c;
    s32 x, y, x2, y2, z, d;
    s16 w, h, m;
    s32 i;
    s16 a;
    s16 x0, x1, x2_, x3, z0, z1, z2, z3, cx, cz;
    s16 a1, b1, e1, a2, b2, e2, a3, b3, e3, a4, b4, e4;
    s16 ex, ez, fx, fz;
    s32 minx, miny, maxx, maxy;

    x = r->x;
    y = r->y;
    w = r->z;
    h = r->pad;
    x2 = x + w;
    y2 = y + h;
    m = w < h ? h : w;
    d = (s16)(m / 20);
    z = ReadGeomScreen();
    v[0].x = x;  v[0].y = y;  v[0].z = z;
    v[1].x = x2; v[1].y = y;  v[1].z = z;
    v[2].x = x;  v[2].y = y2; v[2].z = z;
    v[3].x = x2; v[3].y = y2; v[3].z = z;
    c0.x = 0;
    c0.y = 0;
    c0.z = 0;
    func_sc02_003_8017D230(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc02_003_8017D230(&v[i], &w4[i]);
        if (func_sc02_003_8017D2D4(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc02_003_8017D4CC(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc02_003_8017D230(&v[i], &w4[i]);
            func_sc02_003_8017D2D4(&c, &w4[i], &p[i], arg2);
        }
    }
    ex = ((((p[0].x) < (p[1].x) ? (p[0].x) : (p[1].x))) < (((p[2].x) < (p[3].x) ? (p[2].x) : (p[3].x))) ? (((p[0].x) < (p[1].x) ? (p[0].x) : (p[1].x))) : (((p[2].x) < (p[3].x) ? (p[2].x) : (p[3].x))));
    minx = ex; if (c.x < minx) minx = c.x;
    ez = ((((p[0].z) < (p[1].z) ? (p[0].z) : (p[1].z))) < (((p[2].z) < (p[3].z) ? (p[2].z) : (p[3].z))) ? (((p[0].z) < (p[1].z) ? (p[0].z) : (p[1].z))) : (((p[2].z) < (p[3].z) ? (p[2].z) : (p[3].z))));
    miny = ez; if (c.z < miny) miny = c.z;
    fx = ((((p[0].x) > (p[1].x) ? (p[0].x) : (p[1].x))) > (((p[2].x) > (p[3].x) ? (p[2].x) : (p[3].x))) ? (((p[0].x) > (p[1].x) ? (p[0].x) : (p[1].x))) : (((p[2].x) > (p[3].x) ? (p[2].x) : (p[3].x))));
    maxx = fx; if (c.x > maxx) maxx = c.x;
    fz = ((((p[0].z) > (p[1].z) ? (p[0].z) : (p[1].z))) > (((p[2].z) > (p[3].z) ? (p[2].z) : (p[3].z))) ? (((p[0].z) > (p[1].z) ? (p[0].z) : (p[1].z))) : (((p[2].z) > (p[3].z) ? (p[2].z) : (p[3].z))));
    maxy = fz; if (c.z > maxy) maxy = c.z;
    out->z = maxx - minx;
    out->x = minx;
    out->y = miny;
    out->pad = maxy - miny;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017D230);

s32 func_sc02_003_8017D2D4(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
    s32 x;
    s32 z;
    s32 c;
    s32 r;

    r = 0;
    if (b->y <= a->y) {
        x = a->x - a->y * (b->x - a->x);
        z = a->z - a->y * (b->z - a->z);
    } else {
        x = b->x + b->y * (b->x - a->x) / (a->y - b->y);
        z = b->z + b->y * (b->z - a->z) / (a->y - b->y);
    }
    c = (x < -0x7FFF) ? -0x7FFF : (x > 0x7FFF) ? 0x7FFF : x;
    o->x = c;
    c = (z < -0x7FFF) ? -0x7FFF : (z > 0x7FFF) ? 0x7FFF : z;
    o->z = c;
    o->y = 0;
    if (o->x < a->x - lim) {
        r = -1;
        o->x = a->x - lim;
    }
    if (o->x > a->x + lim) {
        r = -1;
        o->x = a->x + lim;
    }
    if (o->z < a->z - lim) {
        r = -1;
        o->z = a->z - lim;
    }
    if (o->z > a->z + lim) {
        r = -1;
        o->z = a->z + lim;
    }
    return r;
}

s32 func_sc02_003_8017D4CC(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017D538);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017E404);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017E51C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017E5AC);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017E6D8);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017E958);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017EA84);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017F390);

void func_sc02_003_8017F5A0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc02_003_801A668C);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc02_003_8017F5E4(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 3;
    SetScript(arg0, (s32) &D_sc02_003_801A72C4);
    AF(arg0, s32, 0x1C) = 0x1E;
}

void func_sc02_003_8017F62C(s32 arg0) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s16 pos[4];
    s32 r;
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 7) {
            func_8012D5E4(arg0, &D_sc02_003_8018E6D4, &D_sc02_003_8018E6D4 + 8, 0xB);
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            func_8012D5E4(arg0, &D_sc02_003_8018E6D4, &D_sc02_003_8018E6D4 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x1C) >= 0x19) {
            AF(AF(arg0, s32, 0x20), u16, 0x12) += func_8012B8E4(arg0, 4);
        }
        if (AF(arg0, s32, 0x1C) == 0xC) {
            FaceHelper(arg0, &D_sc02_003_8018E66C, pos);
            d.x = pos[0];
            d.y = pos[1];
            d.z = pos[2];
            d.kind = 0x20;
            d.unk8 = 2;
            d.flags = 0;
            d.unk10 = 0;
            d.unkE = 0;
            d.unkC = AF(AF(arg0, s32, 0x20), u16, 0x12);
            r = func_8012C51C(&d, arg0);
            if (r != 0) {
                AF(AF(r, s32, 0x20), u16, 0x12) = AF(AF(arg0, s32, 0x20), u16, 0x12);
                func_8012B2CC(r);
            }
        } else if (AF(arg0, s32, 0x1C) == 0xF) {
            func_sc02_003_8018A660(arg0, &D_sc02_003_8018E66C);
        }
        break;
    }
    if (func_8012BEE8(arg0) == 0) {
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        v = AF(arg0, s16, 0x70) >> 8;
        if (v == 0 || v == 3 || v == 4) {
            if (func_8012BCCC(arg0) <= 0x4000) {
                AF(arg0, s16, 2) = 2;
                AF(arg0, s16, 0x34) = 1;
                SetScript(arg0, &D_sc02_003_801A629C);
                AF(arg0, s32, 0x1C) = 10;
                return;
            }
        }
        goto def;
    case 1:
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, &D_sc02_003_801A6754);
        AF(arg0, s32, 0x1C) = 0x18;
        return;
    case 3:
        if (++AF(arg0, u8, 0x102) >= 3) {
            AF(arg0, u8, 0x102) = 0;
            AF(arg0, s16, 0x34) = AF(arg0, u16, 0x34) + 1;
            SetScript(arg0, &D_sc02_003_801A73BC);
        } else {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 3;
            SetScript(arg0, &D_sc02_003_801A72C4);
        }
        AF(arg0, s32, 0x1C) = 0x1E;
        return;
    case 4:
        if (func_8012BEE8(arg0) != 0 && func_8012BCCC(arg0) <= 0x40000) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 3;
            SetScript(arg0, &D_sc02_003_801A72C4);
            AF(arg0, s32, 0x1C) = 0x1E;
        }
    case 2:
    default:
    def:
        AF(arg0, u16, 0x5C) = 0xAA10;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
        SetScript(arg0, &D_sc02_003_801A6534);
        AF(arg0, s16, 0xFC) = 0;
        break;
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017F950);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017FB24);

void func_sc02_003_8017FC9C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017FCB0);

s32 func_sc02_003_8017FD2C(s32 arg0) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
    return 6;
}

void func_sc02_003_8017FD44(s32 arg0) {
    u16 temp_a1;

    AF(arg0, s16, 2) = 5;
    temp_a1 = AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    if (((s32) (temp_a1 << 0x10) >> 0x18) == 5) {
        AF(arg0, u16, 0x70) = (u16) ((temp_a1 & 0xFF) | 0x100);
    }
}

s32 func_sc02_003_8017FD80(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc02_003_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    temp_v0 = func_8012B14C(arg0, (s32) &D_sc02_003_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return temp_v0;
}

s32 func_sc02_003_8017FDE8(s32 arg0) {
    AF(arg0, u8, 0xC1) = 7;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc02_003_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_003_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return func_8012B14C(arg0, (s32) &D_sc02_003_8018E6F8);
}

s32 func_sc02_003_8017FE68(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc02_003_801A6F44);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_003_8018E6EC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFDC0000);
    func_8012B14C(arg0, (s32) &D_sc02_003_8018E704);
    func_8012B2CC(arg0);
    return func_8002D4C8(0x6AA, 0);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8017FF18);

void func_sc02_003_801801EC(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    SetScript(arg0, (s32) &D_sc02_003_801A6E7C);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4(arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8(arg0);
    AF(arg0, u8, 0xC1) = 6;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80180264);

void func_sc02_003_80180394(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc02_003_801803B0(s32 arg0) {
    func_sc02_003_801803D0(arg0);
}

void func_sc02_003_801803D0(s32 arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 1;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc02_003_801A72C4);
    AF(arg0, u8, 0x102) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
}

s32 func_sc02_003_80180428(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 2;
    temp_v0 = SetScript(arg0, (s32) &D_sc02_003_801A73BC);
    AF(arg0, u8, 0x102) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018046C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801806E4);

void func_sc02_003_80180878(s32 arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc02_003_801A6C5C);
    func_8012B23C(arg0);
    AF(arg0, u16, 0x5C) = 0xAA10;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801808C4);

void func_sc02_003_80180A18(s32 arg0) {
    func_80130740(arg0, (s32) &D_sc02_003_8018E78C);
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s16, 2) = 0xF;
    AF(arg0, s16, 0x5C) = 0;
}

s32 func_sc02_003_80180A64(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    SetScript(arg0, (s32) &D_sc02_003_801A6F44);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x100;
    return func_8002D4C8(0x436, 0);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80180AD4);

void func_sc02_003_80180D6C(s32 arg0) {
    s32 idx;
    u8 *p;
    u16 m;
    s32 f;
    s32 pad[4];

    if (func_8012C354(arg0, &D_sc02_003_8018E990) == 0) {
        return;
    }
    idx = (s16)AF(arg0, u16, 0x70) >> 8;
    func_8001C214(AF(arg0, s32, 0x20), D_sc02_003_8018E960[idx]);
    p = D_sc02_003_8018E7C0[idx];
    AF(arg0, u8 *, 0x78) = p;
    AF(arg0, u16, 0x76) = *(u16 *)p;
    func_80143970(arg0);
    func_8012B030(arg0);
    AF(arg0, s32, 0x38) = AF(arg0, s32, 0x4);
    AF(arg0, s32, 0x3C) = AF(arg0, s32, 0x8);
    AF(arg0, s32, 0x40) = AF(arg0, s32, 0xC);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, u8 *, 0xBC) = &D_sc02_003_8018E6BC;
    m = AF(arg0, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (f) {
        AF(arg0, s16, 0x86) = 0xB4;
    }
    switch ((s16)AF(arg0, u16, 0x70) >> 8) {
    case 0:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_003_801803B0(arg0);
            goto skip0;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_003_8018E68C);
        SetScript(arg0, &D_sc02_003_801A648C);
    skip0:
        if (AF(arg0, u16, 0x70) & 0x80) {
            AF(arg0, u16, 0x5C) = 0xAA10;
            AF(arg0, s16, 0x2) = 1;
            AF(arg0, s16, 0x34) = 2;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, s32, 0x1C) = 0x1E;
            SetScript(arg0, &D_sc02_003_801A6534);
            AF(arg0, s16, 0xFC) = 0;
        }
        break;
    case 1:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_003_801803B0(arg0);
            goto skip1;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_003_8018E68C);
        SetScript(arg0, &D_sc02_003_801A648C);
    skip1:
        break;
    case 2:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_003_801803B0(arg0);
            goto skip2;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_003_8018E68C);
        SetScript(arg0, &D_sc02_003_801A648C);
    skip2:
        break;
    case 3:
        AF(arg0, u16, 0x6) = D_sc02_003_8018E7A8[AF(arg0, u8, 0x70)][0];
        AF(arg0, u16, 0xA) = D_sc02_003_8018E7A8[AF(arg0, u8, 0x70)][1];
        AF(arg0, u16, 0xE) = D_sc02_003_8018E7A8[AF(arg0, u8, 0x70)][2];
        AF(arg0, s16, 0x2) = 9;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        SetScript(arg0, &D_sc02_003_801A629C);
        break;
    case 4:
        AF(AF(arg0, s32, 0x20), s16, 0x12) = rand() & 0xFFF;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc02_003_801803B0(arg0);
            goto skip4;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_003_8018E68C);
        SetScript(arg0, &D_sc02_003_801A648C);
    skip4:
        break;
    case 5:
        func_sc02_003_801803D0(arg0);
        break;
    case 6:
        AF(arg0, s16, 0x2) = 0xD;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x1C) = 0x10;
        SetScript(arg0, &D_sc02_003_801A6534);
        break;
    case 7:
        AF(arg0, s16, 0x2) = 0x11;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5C) = 0;
        SetScript(arg0, &D_sc02_003_801A6534);
        AF(arg0, s32, 0x1C) = 0;
        func_8012B2CC(arg0);
        break;
    }
    AF(arg0, s32, 0x24) = AF(arg0, s16, 0x6);
    AF(arg0, s32, 0x28) = AF(arg0, s16, 0xA);
    AF(arg0, s32, 0x2C) = AF(arg0, s16, 0xE);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018127C);

void func_sc02_003_80181498(void) {
    func_8012E364();
}

void func_sc02_003_801814B8(s32 arg0) {
    if (func_8012E470() != 0) {
        func_8012E4C8(arg0);
    }
}

void func_sc02_003_801814F0(s32 arg0, s32 arg1, s32 arg2) {
    func_8012BEE8(arg0, arg1, arg2);
    if (AF(arg0, s32, 0x1C) == 1) {
        SetScript(arg0, (s32) &D_sc02_003_801A6F44);
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181538);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801815F4);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181698);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018173C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181820);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801818C0);

void func_sc02_003_80181914(void) {
    D_8012694C += 1;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181934);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801819F4);

void func_sc02_003_80181A94(void) {
    func_sc02_003_80181AD4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc02_003_80181D2C((s32) &D_80126948);
}

void func_sc02_003_80181AD4(s32 arg0) {
    D_801274E8 = D_80126B5E;
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x190;
    AF(arg0, s16, 0x20) = 0x80;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x30) = -0x80;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x32) = -0xC8;
    AF(arg0, s32, 0x9C) = 0;
    AF(arg0, u8, 0xA0) = 0;
    func_8012A018((s32) func_sc02_003_80181D2C, 2);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181B4C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181C10);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181CE0);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181D0C);

void func_sc02_003_80181D2C(s32 arg0) {
    D_sc02_003_8018EA0C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181D68);

void func_sc02_003_80181DE0(void) {
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181DE8);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80181E70);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182058);

void func_sc02_003_80182154(u8 *arg0) {
    D_sc02_003_8018EAC4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_003_80182190(u8 *arg0) {
    D_sc02_003_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_003_801824E0, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801821E8);

void func_sc02_003_80182234(u8 *arg0) {
    D_sc02_003_8018EACC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_003_80182270(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_003_801826C4, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_003_801822BC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc02_003_80182338(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc02_003_8018235C(u8 *arg0) {
    D_sc02_003_8018EAD8[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_003_80182398(u8 *arg0) {
    D_sc02_003_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_003_80183238, 0x0B000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_003_801823F0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_003_80182414(u8 *arg0) {
    D_sc02_003_8018EAE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_003_80182450(u8 *arg0) {
    D_sc02_003_801E8770 = 0;
    func_8016EDEC((s32) func_sc02_003_80183718, 0x0B000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_003_801824A8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc02_003_801824CC(s32 arg0, s32 arg1) {
    D_sc02_003_801E8770 = 1;
    return 1;
}

void func_sc02_003_801824E0(u8 *arg0) {
    D_sc02_003_8018ED20[AF(arg0, u8, 0x214)]();
}

void func_sc02_003_8018251C(s32 arg0) {
    if (func_800CF854(arg0) != 0) {
        AF(arg0, u8, 0x214) = 5U;
        return;
    }
    func_80154274(arg0, (s32) &D_800D5A34);
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_003_8018258C(void) {
}

void func_sc02_003_80182594(s32 arg0) {
    func_80146994(0x1A, arg0, 0x04CC04CD, 0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_003_801825E0(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_80182630(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_8018268C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc02_003_801826C4(u8 *arg0) {
    D_sc02_003_8018ED38[AF(arg0, u8, 0x214)]();
}

void func_sc02_003_80182700(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
    func_sc02_003_80182744((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182744);

void func_sc02_003_801827A0(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_003_801827C0(u8 *arg0) {
    s16 temp_v0;

    if (AF(arg0, s16, 0x20E) < 0) {
        if (func_8001AAA0(0x13) != 0) {
            AF(arg0, s16, 0x20E) = 0;
        }
    }
    if (AF(arg0, s16, 0x20E) > 0) {
        temp_v0 = AF(arg0, s16, 0x20E) - 1;
        AF(arg0, s16, 0x20E) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            AF(arg0, s16, 0x20E) = -1;
        }
    }
    D_sc02_003_8018ED44[AF(arg0, u8, 0x214)](arg0);
}

void func_sc02_003_80182854(u8 *arg0) {
    func_80175454();
    func_sc02_003_801818C0();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182894);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182964);

void func_sc02_003_801829F8(u8 *arg0) {
    func_sc02_003_80182BD0();
    if (AF(arg0, u16, 0xB8) & 0x800) {
        func_80147324(0x4C8);
    }
    if (AF(arg0, u16, 0xB8) & 0x1000) {
        func_80147324(0x4C9);
    }
    if (AF(arg0, u16, 0xB8) & 0x2000) {
        AF(arg0, s16, 0x20E) = 1;
        AF(arg0, u8, 0x20C) = 2;
    }
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, u16, 0xD4) = (u16) (AF(arg0, u16, 0xD4) + 1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc02_003_80182CB4((s32) arg0);
        func_80154274((s32) arg0, (s32) &D_sc02_003_8018EC34);
        StartFaceScript((s32) arg0, (s32) &D_sc02_003_8018ED10);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_80182AE4(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    if (temp_v1 & 0x2000) {
        ClearDisplayFlag20((s32) arg0);
        func_80147324(0x445);
    } else if (temp_v1 & 0x4000) {
        AF(arg0, u16, 0xD4) = (u16) (AF(arg0, u16, 0xD4) + 1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
    }
}

void func_sc02_003_80182B74(s32 arg0) {
    if (func_8001B23C(0) != 0) {
        func_8016F0E4(arg0);
        func_801599A4(arg0);
        ClearDisplayFlag20(arg0);
        func_8016EDEC((s32) func_sc02_003_80182D00, 0x01000000);
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182BD0);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182CB4);

void func_sc02_003_80182D00(u8 *arg0) {
    D_sc02_003_8018ED5C[AF(arg0, u8, 0x214)]();
}

void func_sc02_003_80182D3C(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x02000000);
    func_sc02_003_80181914();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182D84);

void func_sc02_003_80182E08(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x40;
        func_80154274((s32) arg0, (s32) &D_800D4744);
        AF(arg0, s32 *, 0xB0) = &D_sc02_003_801A7F50;
        AF(arg0, s32 *, 0xCC) = &D_sc02_003_801A7FF0;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_80182E84(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_sc02_003_801831A8(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(4, 0x4E0);
        AF(arg0, s32, 0x204) = 0x40;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_80182EEC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x10;
        func_80142454(-0x80);
        func_sc02_003_80185E88();
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_80182F4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80182F78);

void func_sc02_003_80183010(void) {
}

void func_sc02_003_80183018(s32 arg0) {
    func_801466F0(3, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    func_80154150(arg0, 0xF);
    func_801477E8(arg0, 0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183098);

void func_sc02_003_8018316C(void) {
    if (D_80126984 >= 0x3E9) {
        D_80126984 -= 0x14;
        D_80126990 -= 0x14;
    }
}

s32 func_sc02_003_801831A8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x204) & 0xF;
    if (var_v0 == 0) {
        var_v0 = func_8013C9C4((s32) &D_sc02_003_8018ED88);
    }
    return var_v0;
}

void func_sc02_003_801831E4(void) {
    D_80126D6C = 8;
}

void func_sc02_003_801831F8(void) {
    func_8016F0E4((s32) &D_80126B58);
    func_8016EDEC((s32) func_sc02_003_80183238, 0x0B000000);
    func_80175414();
}

void func_sc02_003_80183238(u8 *arg0) {
    D_sc02_003_8018EDA0[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183274);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183310);

void func_sc02_003_801834EC(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    func_80172414(arg0);
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        func_80146D90(arg0);
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_80183574(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_003_80185F24();
        AF(arg0, s32, 0x204) = 0x30;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_801835C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x30;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_801835F8(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x132) = 0x800;
    if (!(AF(arg0, s32, 0x204) & 0xF)) {
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
    }
    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_003_80185F58();
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_8018366C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_80147324(0xA52);
        func_80142454(-0x80);
        AF(arg0, s32, 0x204) = 1;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_003_801836C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s16, 0x132) = 0;
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
        func_8016F0E4((s32) arg0);
        func_8016EDEC((s32) func_sc02_003_80183718, 0x0B000000);
    }
}

void func_sc02_003_80183718(u8 *arg0) {
    D_sc02_003_8018EDC0[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183754);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183814);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801839C4);

void func_sc02_003_80183A78(s32 arg0) {
    AF(arg0, u8, 0x20C) = 0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183A80);

void func_sc02_003_80183B64(s32 arg0) {
    AF(arg0, s16, 0x20E) = (s16) (D_800A5E94 << 8);
    AF(arg0, s16, 0x210) = (s16) (D_800A5E95 << 8);
    AF(arg0, s16, 0x212) = (s16) (D_800A5E96 << 8);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183BA4);

void func_sc02_003_80183C94(s32 arg0) {
    AF(arg0, u8, 0x20C) = 0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183C9C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183D80);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183DD8);

void func_sc02_003_80183EB8(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146E90(arg0, 0x10);
        func_80146DE8(arg0, 0, 0x40000, 0);
        func_80146CA0(arg0);
    }
}

void func_sc02_003_80183F0C(s32 arg0) {
    func_80162FF4(arg0, 0, 0x1C000, 0);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80162CCC(arg0);
    }
}

void func_sc02_003_80183F64(u8 *arg0) {
    D_sc02_003_8018F1B4[AF(arg0, u16, 2)]();
    if ((u16) AF(arg0, u16, 2) >= 0xAU) {
        func_8013D064();
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80183FC8);

void func_sc02_003_80184164(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
}

void func_sc02_003_80184174(u8 *arg0) {
    AF(arg0, s16, 0xDC) = 0x5A;
    AF(arg0, s16, 0xDE) = 0x3C;
    AF(arg0, s16, 0xE0) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_8018419C(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (AF(arg0, s16, 0xDE) != 0) {
        temp_v0 = AF(arg0, u16, 0xE0) - 1;
        AF(arg0, u16, 0xE0) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            func_8013C9C4((s32) &D_sc02_003_8018B358);
            AF(arg0, u16, 0xE0) = (u16) ((D_800B99DC & 7) + 3);
        }
        AF(arg0, s16, 0xDE) = (s16) ((u16) AF(arg0, s16, 0xDE) - 1);
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_80184250(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (temp_v0 != 0) {
        func_800233CC((s32) &D_sc02_003_8018EFF4, 0x50);
        func_8001CD9C(temp_v0, (s32) &D_sc02_003_8018EFF4);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000040);
    }
    temp_v0_2 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_800233CC((s32) &D_sc02_003_8018EFF4, 0x40);
        func_8001CD9C(temp_v0_2, (s32) &D_sc02_003_8018EFF4);
        AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x50000040);
    }
    D_sc02_003_8018EFF4 = 0xFF;
    D_sc02_003_8018EFF5 = 0x10;
    D_sc02_003_8018EFF6 = 0x10;
    AF(arg0, s16, 0xDC) = 6;
    AF(arg0, s16, 0xDE) = 0xFF;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80184358);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018453C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801847B8);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018483C);

void func_sc02_003_80184A08(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = D_sc02_003_801E8754 - 1;
    D_sc02_003_801E8754 = temp_v0;
    if (temp_v0 == -1) {
        func_80036D58(2);
    }
    temp_v0_2 = AF(arg0, u16, 0xDE) - 1;
    AF(arg0, u16, 0xDE) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        func_sc02_003_8018623C(0x4E1, 0);
    }
    temp_v0_3 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0_3;
    if ((temp_v0_3 << 0x10) == 0) {
        func_sc02_003_80185E00();
        SetScript((s32) arg0, (s32) &D_sc02_003_8018EDDC);
        D_sc02_003_801E8820 = 0x3E8;
        func_sc02_003_80181934();
        AF(AF(arg0, void *, 0x20), s16, 0x14) = -0x400;
        func_sc02_003_8018621C((s32) &D_sc02_003_801B9230);
        AF(arg0, s16, 0xA) = -0x3F4;
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xE) = 0x3C98;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_sc02_003_8018483C((s32) arg0);
}

void func_sc02_003_80184B00(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80184B14);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80184BD8);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018512C);

void func_sc02_003_801852E4(s32 arg0) {
    s16 temp_a1;

    temp_a1 = AF(arg0, s16, 0xE);
    if (temp_a1 >= 0x18F5) {
        AF(arg0, s16, 6) = 0;
        return;
    }
    if (temp_a1 < 0x150E) {
        AF(arg0, s16, 6) = 0x35;
        return;
    }
    AF(arg0, s16, 6) = (s16) (((0x18F3 - temp_a1) * 0x35) / 998);
}

void func_sc02_003_8018535C(void) {
}

void func_sc02_003_80185364(u8 *arg0) {
    AF(arg0, s16, 0xA) = -0x1B26;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x1C59;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018537C);

void func_sc02_003_801853D4(s32 arg0) {
    if (func_sc02_003_80185C48(arg0, 1) != 0) {
        func_8013C9C4((s32) &D_sc02_003_8018B358);
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x40000;
        AF(arg0, s32, 0x4C) = 0;
        func_sc02_003_80187354(arg0);
        func_sc02_003_8018623C(0x4D7, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_8018545C(s32 arg0) {
    if (func_sc02_003_80185C48(arg0, 1) != 0) {
        func_8013C9C4((s32) &D_sc02_003_8018B358);
        func_sc02_003_80187354(arg0);
        func_sc02_003_8018623C(0x4D7, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_801854C4(void) {
}

void func_sc02_003_801854CC(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (temp_v0 != 0) {
        func_800233CC((s32) &D_sc02_003_8018EFF4, 0x50);
        func_8001CD9C(temp_v0, (s32) &D_sc02_003_8018EFF4);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000040);
    }
    temp_v0_2 = func_8001D074(0x3E, 0x7D);
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_800233CC((s32) &D_sc02_003_8018EFF4, 0x40);
        func_8001CD9C(temp_v0_2, (s32) &D_sc02_003_8018EFF4);
        AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x50000040);
    }
    D_sc02_003_8018EFF4 = 0xFF;
    D_sc02_003_8018EFF5 = 0x10;
    D_sc02_003_8018EFF6 = 0x10;
    AF(arg0, s16, 0xDC) = 6;
    AF(arg0, s16, 0xDE) = 0xFF;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_801855D4(s32 arg0) {
    u16 sp10[3];
    s16 temp_v0;
    u16 temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    func_8012B2CC(arg0);
    if (AF(arg0, void *, 0xCC) != NULL) {
        func_8012F14C(AF(arg0, void *, 0x20) + 0x34, (s32) &D_sc02_003_8018F034, (s32) sp10);
        AF(AF(arg0, void *, 0xCC), u16, 8) = sp10[0];
        AF(AF(arg0, void *, 0xCC), u16, 0xA) = sp10[1];
        AF(AF(arg0, void *, 0xCC), u16, 0xC) = sp10[2];
        AF(AF(arg0, void *, 0xCC), u16, 0x10) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
        AF(AF(arg0, void *, 0xCC), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
        AF(AF(arg0, void *, 0xCC), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x14);
    }
    if (AF(arg0, void *, 0xD0) != NULL) {
        func_8012F14C((s32) (AF(arg0, void *, 0x20) + 0x34), (s32) &D_sc02_003_8018F03C, (s32) sp10);
        AF(AF(arg0, void *, 0xD0), u16, 8) = sp10[0];
        AF(AF(arg0, void *, 0xD0), u16, 0xA) = sp10[1];
        AF(AF(arg0, void *, 0xD0), u16, 0xC) = sp10[2];
        AF(AF(arg0, void *, 0xD0), u16, 0x10) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
        AF(AF(arg0, void *, 0xD0), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
        AF(AF(arg0, void *, 0xD0), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x14);
    }
    temp_v0 = AF(arg0, s16, 0xDC);
    if (temp_v0 == 0) {
        temp_v0_2 = AF(arg0, u16, 0xDE) - 0x20;
        AF(arg0, u16, 0xDE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) <= 0) {
            AF(arg0, u16, 0xDE) = 0U;
        }
        (*(s8 *)&D_sc02_003_8018EFF4) = (s8) AF(arg0, u16, 0xDE);
        if ((s16) AF(arg0, s16, 0xDE) == 0) {
            temp_v0_3 = AF(arg0, void *, 0xCC);
            if (temp_v0_3 != NULL) {
                AF(temp_v0_3, s16, 0) = 0;
            }
            temp_v0_4 = AF(arg0, void *, 0xD0);
            if (temp_v0_4 != NULL) {
                AF(temp_v0_4, s16, 0) = 0;
            }
            AF(arg0, s16, 0xDC) = 0x2E;
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
    } else {
        AF(arg0, s16, 0xDC) = (s16) (temp_v0 - 1);
    }
}

void func_sc02_003_801857B0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xDC) = 0x10U;
        AF(arg0, s32, 0x18) = 0xFFFE0000;
        AF(arg0, s32, 0x4C) = -0x4000;
        AF(arg0, s16, 0xE2) = 2;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s16, 0xE0) = 0;
        D_sc02_003_801E873C = 1;
        D_sc02_003_801E8750 = 0;
        func_8013D164();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185840);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185910);

void func_sc02_003_80185B40(u8 *arg0) {
    D_sc02_003_8018F2E0[AF(arg0, u16, 2)]();
}

void func_sc02_003_80185B7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_003_8018F210);
    SetScript((s32) arg0, (s32) &D_sc02_003_8018F288);
    AF(arg0, s16, 0xDC) = 0xA;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_80185BF0(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = -0x8000;
    AF(temp_v1, s16, 0x1A) = -0x8000;
    AF(temp_v1, s16, 0x18) = -0x8000;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185C48);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185D58);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185E00);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185E88);

void func_sc02_003_80185EC8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        func_8002D4C8(4, 0x4DF);
        AF(temp_v0, s16, 0xA) = -0x1B26;
        AF(temp_v0, s16, 0xE) = 0x1C59;
        AF(temp_v0, s16, 6) = 0;
        AF(temp_v0, s16, 2) = 0xE;
    }
}

void func_sc02_003_80185F24(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 0xF;
    }
}

void func_sc02_003_80185F58(void) {
    s32 temp_v0;

    temp_v0 = func_8012E504(0, 0x29);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 0x13;
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80185F8C);

void func_sc02_003_801860A8(u8 *arg0) {
    D_sc02_003_8018F2E8[AF(arg0, u16, 2)]();
}

void func_sc02_003_801860E4(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_003_801DF700);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    SetScript((s32) arg0, (s32) &D_sc02_003_8018EFDC);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s16, 0xDC) = 0x40;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_8018618C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    func_8012AD80(arg0, arg1);
    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801861D8);

s32 func_sc02_003_8018621C(s32 arg0) {
    return func_8013BD34();
}

s32 func_sc02_003_8018623C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = D_sc02_003_801E8010;
    if (var_v0 == 0) {
        var_v0 = func_8002D4C8(arg0 & 0xFFFF, arg1 & 0xFFFF);
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018626C);

void func_sc02_003_801863AC(u8 *arg0) {
    D_sc02_003_8018F2F4[AF(arg0, u16, 2)]();
}

void func_sc02_003_801863E8(u8 *arg0) {
    D_sc02_003_8018F2FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80186424);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80186530);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80186764);

void func_sc02_003_801868D4(u8 *arg0) {
    D_sc02_003_8018F31C[AF(arg0, u16, 2)]();
}

void func_sc02_003_80186910(u8 *arg0) {
    D_sc02_003_8018F394[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018694C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801869CC);

void func_sc02_003_80186A64(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    func_8002D4C8(0x402, 0);
}

void func_sc02_003_80186A9C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) != 0) && (func_8012BEE8((s32) arg0, arg1, arg2) != 0)) {
        func_8002D4C8(0xD, 0x402);
    }
    func_sc02_003_8018626C();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80186AE4);

void func_sc02_003_80186C44(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_003_801DCA30);
    SetScript(arg0, (s32) &D_sc02_003_8018AF28);
    AF(arg0, s16, 2) = 1;
}

void func_sc02_003_80186CAC(u8 *arg0) {
    D_sc02_003_8018F3AC[AF(arg0, u16, 2)]();
}

void func_sc02_003_80186CE8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_003_801E0294);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xDC, 0xB8);
    AF(arg0, s32 *, 0x58) = &D_sc02_003_8018F39C;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xC00);
    SetScript((s32) arg0, (s32) &D_sc02_003_8018AF28);
    func_8012B200((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80186D88);

void func_sc02_003_80186E30(u8 *arg0) {
    D_sc02_003_8018F3C4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80186E6C);

void func_sc02_003_80186F44(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), s16, 0xE) - 0x10) < AF(arg0, s16, 0xE)) {
        AF(arg0, s32, 0x18) = 0xFFDBC000;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0x12) = (s16) (0xF - (D_800B99DC & 0x1F));
        func_8002D4C8(0x4D8, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_80186FDC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_80187060(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_003_801870DC(u8 *arg0) {
    D_sc02_003_8018F3D4[AF(arg0, u16, 2)]();
}

void func_sc02_003_80187118(u8 *arg0) {
    s32 *var_a1;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    var_a1 = &D_sc02_003_801E14AC;
    if (AF(arg0, s16, 0x70) == 0) {
        var_a1 = &D_sc02_003_801E10B4;
    }
    func_8001C214(temp_v0, (s32) var_a1);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x140, 0xF0);
    SetScript((s32) arg0, (s32) &D_sc02_003_8018AF28);
    func_8012B200((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_801871B8(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), s16, 0xE) - 0x80) < AF(arg0, s16, 0xE)) {
        AF(arg0, s32, 0x18) = 0xFFDBC000;
        AF(arg0, s32, 0x14) = 0xFFE00000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s16, 0x12) = (s16) (0xF - (D_800B99DC & 0x1F));
        func_sc02_003_80187480();
        func_8002D4C8(0x4DA, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_80187254(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_801872D8(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187354);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187480);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187558);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018762C);

void func_sc02_003_801876FC(u8 *arg0) {
    D_sc02_003_8018F460[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187738);

void func_sc02_003_80187834(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x40);
    if (func_8012CBCC((s32) arg0) != 0) {
        AF(arg0, s32, 0x18) = 0xFFE80000;
        AF(arg0, s32, 0x14) = 0xFFC80000;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x48) = 0x80000;
        AF(arg0, s32, 0x4C) = 0;
        func_80143B6C((s32) arg0, 0);
        AF(arg0, s16, 0xFC) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_003_801878D0(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

void func_sc02_003_8018794C(u8 *arg0) {
    D_sc02_003_8018F46C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187988);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187B40);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187DB8);

void func_sc02_003_80187EB4(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x20);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    func_8012AD80((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80187F30);

void func_sc02_003_80187FEC(u8 *arg0) {
    D_sc02_003_8018F540[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188028);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188134);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018825C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188414);

void func_sc02_003_80188484(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0xDC) - 1;
    AF(arg0, s32, 0xDC) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc02_003_801884B8(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s32, 0x4C) = 0;
        AF(arg0, s32, 0x48) = 0;
        AF(arg0, s32, 0x44) = 0;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801884FC);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188680);

void func_sc02_003_801886DC(u8 *arg0) {
    D_sc02_003_8018F558[AF(arg0, u16, 2)]();
}

void func_sc02_003_80188718(u8 *arg0) {
    D_sc02_003_8018F590[AF(arg0, u16, 2)]();
}

void func_sc02_003_80188754(u8 *arg0) {
    D_sc02_003_8018F598[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188790);

void func_sc02_003_801888CC(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012AD44((s32) arg0, 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_801888F4);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188A18);

void func_sc02_003_80188AEC(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) (((rand() & 3) * 0xC) + &D_sc02_003_8018F560), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    AF(arg0, s32, 0x14) = (s32) ((rand() + 0xC000) * 2);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    AF(arg0, s32, 0x18) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188BAC);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188C0C);

void func_sc02_003_80188C9C(u8 *arg0) {
    D_sc02_003_8018F5A0[AF(arg0, u16, 2)]();
}

void func_sc02_003_80188CD8(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_003_80188D18(u8 *arg0) {
    D_sc02_003_8018F5BC[AF(arg0, u16, 2)]();
}

void func_sc02_003_80188D54(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_003_801AFAC8);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    SetScript((s32) arg0, (s32) &D_sc02_003_8018F5A4);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_003_80188DF0(void) {
}

void func_sc02_003_80188DF8(s32 arg0) {
    func_sc02_003_8018A3C8((s32) &D_sc02_003_801E8830);
    func_800233CC((s32) &D_sc02_003_8018F5C4, 0x20);
    func_800233CC((s32) (&D_sc02_003_8018F5C4 + 0x40), 0x20);
    func_800233CC((s32) (&D_sc02_003_8018F5C4 + 0x80), 0x20);
    func_sc02_003_8018A550((s32) &D_sc02_003_801E8830, (s32) &D_sc02_003_8018F684);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80188E80);

void func_sc02_003_80188ECC(u8 *arg0) {
    D_sc02_003_8018F6C4[AF(arg0, u16, 2)]();
}

s32 func_sc02_003_80188F08(void) {
    return func_sc02_003_8018A3FC((s32) &D_sc02_003_801E8830);
}

void func_sc02_003_80188F30(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 0xA8) = 0x7F;
    AF(arg0, s16, 0x84) = 1;
    AF(arg0, s32, 0xA4) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
}

void func_sc02_003_80188F60(s32 arg0, s32 arg1) {
    u8 *dst = (u8 *)arg0 + 0x103;
    u8 *tbl = &D_sc02_003_8018F6CC;
    u8 *p = &D_80126B58;
    s32 i;
    s32 t;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s32, 0x1C) = (rand() & 1) + 1;
        for (i = 0; i < 24; i++) {
            if (*tbl != 0) {
                *dst = rand() % *tbl;
            } else {
                *dst = 0;
            }
            dst--;
            tbl++;
        }
    }
    if (AF(arg0, s16, 0x70) != 0) {
        D_800A5E98.a = -0x12;
        D_800A5E98.b = (rand() % 31) + 10;
        D_800A5E98.d = AF(arg0, u16, 0xA8);
        D_800A5E98.e = (AF(arg0, s16, 0xA8) * 5) / 127;
        D_800A5E98.f = (AF(arg0, s16, 0xA8) * 51) / 127;
        func_80028620(1, &D_800A5E98);
    }
    t = (s16)AF(arg0, u16, 0xA8) >> 1;
    AF(arg0, u16, 0xA8) = t;
    if (D_801270C8 != 1) {
        AF(arg0, u16, 0xA8) = t | 0x40;
        if (AF(arg0, s16, 0x70) == 0) {
            goto end;
        }
        if (--AF(arg0, s16, 0x84) == 0) {
            i = (func_8012B8A4(arg0) - 0x400) & 0xFFF;
            if (i >= 0x800) {
                i = 0xFFF - i;
            }
            i >>= 5;
            i += 0x10;
            if (AF(p, s16, 6) >= 0x381) {
                i += ((AF(p, s16, 6) - 0x380) * 80) / 120;
            }
            if (i >= 0x80) {
                i = 0x7F;
            }
            AF(arg0, u16, 0x84) = 0xF;
            if (func_800CF8B4() != 0) {
                func_8002D4C8(0x4CF, (u16)(i | 0x1000));
            } else {
                func_8002D4C8(4, 0x4CF);
            }
            AF(arg0, s32, 0xA4) = 1;
        }
    } else {
        if (AF(arg0, s16, 0x70) != 0 && AF(arg0, s32, 0xA4) != 0) {
            func_8002D4C8(4, 0x4CF);
            AF(arg0, u16, 0x84) = 1;
            AF(arg0, s32, 0xA4) = 0;
        }
        if (D_801270D4 == 1) {
            func_8012C218(arg0);
            D_800A5E98.b = 0x18;
            D_800A5E98.d = 0x7F;
            D_800A5E98.e = 0x66;
            D_800A5E98.f = 0x7F;
            func_80028620(1, &D_800A5E98);
            return;
        }
    }
    if (AF(arg0, s16, 0x70) != 0 && AF(arg0, s32, 0xA4) != 0 && D_800B9A0E != 0) {
        func_8002D4C8(4, 0x4CF);
        AF(arg0, s32, 0xA4) = 0;
    }
end:
    func_sc02_003_80189340(arg0);
}

void func_sc02_003_80189304(u8 *arg0) {
    D_sc02_003_8018F714[AF(arg0, u16, 2)]();
}

void func_sc02_003_80189340(u8 *arg0) {
    u8 *pp[28];
    s16 sv[4];
    s16 sxy[4];
    s32 p;
    s32 flag;
    u8 *prim;
    u32 *ot;
    u8 mask;
    s32 otz;
    s32 i;
    s32 j;
    s32 d;
    u8 *b;
    u8 *q;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    mask = 1;
    b = arg0 + 0x100;
    sv[0] = D_sc02_003_8018F6E4[0 * 3] + arg0[0x103];
    sv[1] = D_sc02_003_8018F6E4[0 * 3 + 1] + arg0[0x102];
    sv[2] = D_sc02_003_8018F6E4[0 * 3 + 2] + arg0[0x101];
    otz = RotTransPers(sv, &sxy[2], &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = D_800A651C[D_800B9A02].ot + otz;
    prim = func_80010A08(0x3FC);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    for (i = 1; i < 28; i++) {
        pp[i] = pp[0] + i * 0x24;
    }
    q = pp[0];
    d = ((D_80126950 + 500) * 8) / (otz * 4);
    for (i = 1; i < 8; i++) {
        sv[0] = D_sc02_003_8018F6E4[i * 3] + *b--;
        sv[1] = D_sc02_003_8018F6E4[i * 3 + 1] + *b--;
        sv[2] = D_sc02_003_8018F6E4[i * 3 + 2] + *b--;
        sxy[0] = sxy[2];
        sxy[1] = sxy[3];
        RotTransPers(sv, &sxy[2], &p, &flag);
        if (AF(arg0, s16, 0xA8) & mask) {
            p = AF(arg0, s32, 0x1C) << 6;
            for (j = 0; j < 4; j++) {
                AF(q, s32, 4) = p;
                AF(q, s32, 0x14) = p;
                AF(q, u8, 3) = 8;
                AF(q, s32, 0xC) = 0;
                AF(q, s32, 0x1C) = 0;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = sxy[0];
                AF(q, s16, 0x10) = sxy[0];
                AF(q, s16, 0x18) = sxy[2];
                AF(q, s16, 0x20) = sxy[2];
                AF(q, s16, 0xA) = sxy[1];
                AF(q, s16, 0x12) = sxy[1];
                AF(q, s16, 0x1A) = sxy[3];
                AF(q, s16, 0x22) = sxy[3];
                switch (j) {
                case 0:
                    AF(q, s16, 0x10) += d;
                    AF(q, s16, 0x20) += d;
                    break;
                case 1:
                    AF(q, s16, 0x10) -= d;
                    AF(q, s16, 0x20) -= d;
                    break;
                case 2:
                    AF(q, s16, 0x12) += d;
                    AF(q, s16, 0x22) += d;
                    break;
                case 3:
                    AF(q, s16, 0x12) -= d;
                    AF(q, s16, 0x22) -= d;
                    break;
                }
                AddPrim(ot, q);
                q += 0x24;
            }
        }
        mask <<= 1;
    }
    AddPrim(ot, prim);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189750);

void func_sc02_003_801897E8(void) {
    s32 temp_v0;

    if ((D_sc02_003_801E8778 == 0) && (D_800B9A0E == 0)) {
        temp_v0 = D_sc02_003_801E877C + 1;
        D_sc02_003_801E877C = temp_v0;
        if (temp_v0 >= 0x10) {
            func_8002D4C8(0x106, 0);
            D_sc02_003_801E8778 = 1;
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189858);

s32 func_sc02_003_80189888(void) {
    return (s32) D_800B9A0E;
}

void func_sc02_003_80189898(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x338);
    if (temp_v0 != 0) {
        func_8012AD50(temp_v0);
    }
}

void func_sc02_003_801898C8(u8 *arg0) {
    D_sc02_003_8018F724[AF(arg0, u16, 2)]();
}

void func_sc02_003_80189904(s32 arg0) {
    func_sc02_003_80189C6C();
    func_sc02_003_80189D10(arg0);
    AF(arg0, s16, 0xFC) = 0;
    D_sc02_003_8018F71E = 1;
    func_8012AD50(arg0);
}

void func_sc02_003_80189950(void) {
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189958);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189A00);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189A70);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189B1C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189C6C);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189D10);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_80189DB8);

void func_sc02_003_80189E58(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc02_003_801A79A4);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc02_003_801A777C);
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

void func_sc02_003_80189FD0(u8 *arg0) {
    D_sc02_003_801A7818[AF(arg0, u16, 2)]();
}

void func_sc02_003_8018A00C(u8 *arg0) {
    D_sc02_003_801A782C[AF(arg0, u16, 2)]();
}

void func_sc02_003_8018A048(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc02_003_801A7804);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc02_003_801A7810, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc02_003_8018A128(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_003_801A7820);
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

void func_sc02_003_8018A244(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_003_801A7AD4);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018A2A0);

s32 func_sc02_003_8018A3C8(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = var_a0;
    AF(var_a0, s16, 2) = 0;
    AF(var_a0, s16, 0) = 0;
    do {
        AF(var_a0, s16, 4) = 0;
        AF(var_v1, s32, 0x14) = 0;
        var_v1 += 4;
        var_a1 += 1;
        temp_v0 = var_a1 < 8;
        var_a0 += 2;
    } while (temp_v0 != 0);
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018A3FC);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018A440);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018A550);

void func_sc02_003_8018A640(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    AF(arg0, u8, 0) = arg1;
    AF(arg0, u8, 1) = arg2;
    AF(arg0, u8, 2) = arg3;
}

void func_sc02_003_8018A650(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) {
    AF(arg0, u8, 4) = arg1;
    AF(arg0, u8, 5) = arg2;
    AF(arg0, u8, 6) = arg3;
}

s32 func_sc02_003_8018A660(s32 arg0, s32 arg1, s32 arg2) {
    D_sc02_003_801E8668 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018A690);

INCLUDE_ASM("asm/stg/sc02_003/nonmatchings/sc02_003", func_sc02_003_8018A8D4);

void func_sc02_003_8018AB74(u8 *arg0) {
    D_sc02_003_801A7B28[AF(arg0, u16, 2)]();
}
