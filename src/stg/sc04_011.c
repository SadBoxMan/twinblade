#include "common.h"
#include "gte.h"
#include "psyq.h"
extern s32 func_sc04_011_8018E6EC();
extern void func_sc04_011_8017E6EC();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_011_8017BE9C(void) {
}

void func_sc04_011_8017BEA4(void) {
}

void func_sc04_011_8017BEAC(void) {
}

void func_sc04_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc04_011_80193E44[])();
extern void func_80147324();
extern void func_sc04_011_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc04_011_80193E58[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc04_011_80193E6C[])();
extern void func_800D22E4();
extern void func_sc04_011_8017C910();
extern void (*D_sc04_011_80193EC8[])();
extern void (*D_sc04_011_80193ED0[])();
extern void (*D_sc04_011_80193F84[])();
extern void (*D_sc04_011_80193FBC[])();
extern void func_sc04_011_8017F700();
extern s32 func_sc04_011_8017F6D8();
extern u8 D_sc04_011_80193F64;
extern void (*D_sc04_011_8019429C[])();
extern s32 func_800167F0();
extern void (*D_sc04_011_801942A4[])();
void func_sc04_011_8017FD04(void);
extern void func_800D1EBC();
extern void (*D_sc04_011_801942B0[])();
extern void (*D_sc04_011_801942C8[])();
extern u8 D_sc04_011_801942C0;
extern void func_8016EE40();
extern u8 D_sc04_011_801942D0;
extern void (*D_sc04_011_801942E4[])();
extern u8 D_sc04_011_801942DC;
extern void func_sc04_011_80180050();
extern void (*D_sc04_011_8019433C[])();
void func_sc04_011_80187698(s32 arg0);
extern void (*D_sc04_011_801947F4[])();
extern void (*D_sc04_011_80194840[])();
extern void (*D_sc04_011_801948D0[])();
extern void (*D_sc04_011_80194904[])();
extern void (*D_sc04_011_801949B0[])();
extern void (*D_sc04_011_801949B8[])();
extern void (*D_sc04_011_80194A60[])();
extern void (*D_sc04_011_80194A88[])();
extern void (*D_sc04_011_80194A90[])();
extern void (*D_sc04_011_80194B18[])();
extern void (*D_sc04_011_80194B24[])();
extern void (*D_sc04_011_80194B5C[])();
extern void (*D_sc04_011_80194C0C[])();
extern void (*D_sc04_011_80194CDC[])();
extern void (*D_sc04_011_80194CE4[])();
extern void (*D_sc04_011_80194D20[])();
extern void (*D_sc04_011_801EBE38[])();
extern s32 func_sc04_011_8018FC00();
extern void (*D_sc04_011_801EBE74[])();

void func_sc04_011_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc04_011_8017BEF8(u8 *arg0) {
    D_sc04_011_80193E44[AF(arg0, u16, 2)]();
}

void func_sc04_011_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_011_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_011_8017C218((s32) arg0);
}

void func_sc04_011_8017BFE0(u8 *arg0) {
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
    func_sc04_011_8017C218((s32) arg0);
}

void func_sc04_011_8017C064(u8 *arg0) {
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
    func_sc04_011_8017C218((s32) arg0);
}

void func_sc04_011_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_011_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern u8 D_sc04_011_80193EF8;
extern void (*D_sc04_011_80193F1C[])();
extern void StartRumbleScript();
extern u8 D_sc04_011_80193F28;
extern void (*D_sc04_011_80193F4C[])();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_8012931C();
extern void func_801292C8();
extern void func_sc04_011_8018EFB0();
extern void func_sc04_011_8018F02C();
extern s32 func_sc04_011_8018F68C();
extern s32 func_801290DC();

void func_sc04_011_8017FE44(void);
extern s32 func_8012AD44();
extern s32 func_sc04_011_801805D8();
extern void (*D_sc04_011_8019466C[])();
extern void func_sc04_011_80183E20();
extern u8 D_sc04_011_801F141C;
extern u16 D_sc04_011_801F1414;
extern u16 D_sc04_011_801F1416;
extern s16 D_sc04_011_801F1418;
extern s16 D_sc04_011_801F141A;
extern s32 func_sc04_011_8018E2C4();
extern void func_sc04_011_8018E1F0();
extern void func_80015978();
extern s32 func_sc04_011_8018E738();
extern s32 func_sc04_011_8018EA7C();
extern void func_sc04_011_8018E960();

extern s16 D_sc04_011_801F1314;

extern s32 func_sc04_011_8017CAF8();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_80146CA0();
extern void func_sc04_011_8017EA44();
extern void func_8014BC44();
extern s32 func_80151664();
extern s32 func_sc04_011_8017EBE8();
extern u8 D_80062C04;
extern void func_sc04_011_8017ECD8();
extern void func_80149020();
extern void func_80172630();
extern u8 D_sc04_011_80193F30;
extern void func_801511E0();
extern void func_80154274();
extern s32 func_sc04_011_8017EDC4();
extern void func_80159B3C();
extern void func_80165718();
extern void func_80146E90();
extern s32 func_80146E98();
extern void func_sc04_011_8017F85C();
extern u8 D_sc04_011_80194270;
extern void func_800D1724();
extern void func_8012BF4C();
extern void func_8012AD50();
extern u8 D_sc04_011_80194D14;
extern void func_800159E4();
extern void func_8001CC3C();

extern void func_80171990();
extern void func_80171928();
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
extern u8 D_80126E60;
extern s32 D_80126E6C;
extern s32 D_80126E74;
extern s16 D_80126E80;
extern s16 D_80126E82;
extern s16 D_80126E84;
extern s16 D_80126E8E;
extern s16 D_80126E90;
extern s16 D_80126E92;
extern s16 D_80126F00;
extern void func_8012A048();
extern s32 func_8012A100();
extern void func_sc04_011_80186EFC();
extern void func_sc04_011_801803D8();
extern s32 func_sc04_011_801833D4();
extern void func_sc04_011_80183A28();
extern s32 func_8012BEE8();
extern void func_sc04_011_801837C4();
extern void func_sc04_011_80183BAC();
extern u8 D_sc04_011_80194468;
extern void func_sc04_011_8018332C();
extern s32 func_sc04_011_8017FF80();
extern s32 func_sc04_011_8018FC58();
extern u8 D_sc04_011_80194490;
extern u16 D_sc04_011_801EFD20;
extern u16 D_sc04_011_801EFD40;
extern s32 D_sc04_011_801EFC4C[];
extern void func_sc04_011_80186710();
extern s32 func_sc04_011_80183564();
extern u8 D_sc04_011_801944A8;
extern void func_sc04_011_80183BD0();
extern s32 func_sc04_011_80186BD8();
extern u8 D_sc04_011_801944D0;
extern s32 D_sc04_011_801EFD18;
extern s32 func_sc04_011_80188E00();
extern void func_sc04_011_80183CF4();
extern void func_sc04_011_80185B04();
extern void func_sc04_011_80185C04();
extern s32 D_sc04_011_80194530[];
extern void func_sc04_011_80186EBC();
extern void func_sc04_011_80184840();
extern void func_sc04_011_8018637C();
extern u8 D_sc04_011_80194538;
extern s32 func_sc04_011_80186908();
extern s32 func_sc04_011_80186C40();
extern void func_sc04_011_801835B0();
extern void func_80175454();
extern void func_80175414();
extern void (*D_sc04_011_801947D8[])();
extern void func_sc04_011_80186940();
extern void func_8016B3F4();
extern s32 func_sc04_011_80185960();
extern u8 D_80063548;
extern u8 D_sc04_011_801AA158;
extern void func_8001C924();
extern s32 func_sc04_011_8018B948();
extern s32 func_sc04_011_8018BA44();
extern void func_80016714();
extern u16 D_80126B58;
extern s16 D_80126B5E;
extern s16 D_80126B66;
extern u8 D_sc04_011_80194378;
extern u8 D_sc04_011_801EFD28;
extern u8 D_sc04_011_801EFD2C;
extern void func_80139A68();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
void func_sc04_011_8017CACC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_sc04_011_80180AB4();
extern u8 D_sc04_011_801EFD50;
extern void (*D_sc04_011_801947E4[])();
extern void func_sc04_011_80187618();
extern void func_sc04_011_801876A0();
extern s32 func_80132EF4();
extern void func_8012C218();
extern s32 func_sc04_011_80181868();
extern s32 func_80143970();
extern s32 func_8012C658();
extern u8 D_sc04_011_80194BEC;
extern s32 func_sc04_011_8018BB44();
extern u8 D_sc04_011_801EA9FC;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void func_8001C1E4();
extern void func_sc04_011_801875D8();
extern u8 D_sc04_011_801E9634;
extern u8 D_sc04_011_801EA2A4;
extern void func_8012B2CC();
extern void func_sc04_011_80187B40();
extern void func_8012B414();
extern void func_sc04_011_80187D68();
extern void func_sc04_011_8018778C();
extern void func_sc04_011_80187A04();
extern u8 D_sc04_011_80194818;
extern s32 func_sc04_011_8018985C();
extern s32 func_sc04_011_80188764();
extern u8 D_sc04_011_80194898;
extern void func_8001C2C4();
extern u8 D_sc04_011_80194950;
extern void func_8012AD80();
extern void func_sc04_011_8018A7E8();
extern u8 D_sc04_011_801E1AF4;
extern s32 func_sc04_011_8018A784();
extern u8 D_sc04_011_801EC144;
extern s32 func_sc04_011_8018DA64();
extern void func_sc04_011_8018DFDC();
extern void func_80016940();
extern s32 func_80016978();
extern s32 func_80146994();

extern void func_sc04_011_8018E82C();

extern s32 D_8011F9C4;
void func_sc04_011_8017FCDC(void);
extern void func_800167B8();
extern u8 D_sc04_011_801EFF20;
extern void func_800233CC();
extern u8 D_sc04_011_80194A10;
extern s32 D_sc04_011_801948F0[];
extern void func_8012B23C();
extern u8 D_sc04_011_801EBD40;
extern u8 D_sc04_011_801EBD68;
extern void func_80017254();
extern void func_800176F0();

extern u8 D_sc04_011_80193F00;
extern void func_8014CBF8();
extern void func_801474EC();
extern void func_80146DE8();
extern void func_801477E8();
extern u8 D_sc04_011_801E30C4;
extern u8 D_sc04_011_801E5870;
extern void func_sc04_011_8018A074();
extern void func_sc04_011_8018A42C();



extern u8 D_800AE6BD;
extern s32 func_8012E544();
extern s32 D_sc04_011_801EFCA0;
extern s32 func_8012C588();
extern s32 func_8014C050();

extern u8 D_80126940;
extern u8 D_801274E8;
extern void func_sc04_011_80180570();
extern u8 D_sc04_011_80194328;
extern u8 D_sc04_011_80194314;
extern u8 D_sc04_011_80194300;
extern u8 D_sc04_011_801942EC;

extern s32 D_sc04_011_801E6898;
extern u8 D_sc04_011_801E795C;
extern s32 D_sc04_011_801EFEE0[];
extern s32 D_sc04_011_801EFEE4;
extern void func_80133298();
extern s32 func_sc04_011_80189478();
extern s32 func_sc04_011_801893D4();
extern void func_sc04_011_80189EFC();

extern s32 func_sc04_011_80180030();
extern void func_sc04_011_8018FC84();
extern u8 D_sc04_011_801944EC[];
extern void func_sc04_011_80186BF8();
extern u8 D_sc04_011_80194A50;
extern u8 D_sc04_011_801E29B4;
extern u8 D_sc04_011_801E57F8;
extern u8 D_sc04_011_80194D4C[];
extern u8 D_sc04_011_80194D50[];
extern void func_8012C098();

extern u8 D_sc04_011_80194724[];
extern void func_sc04_011_801868A0();

extern void *D_801151D4;
extern u8 D_80126B5C;
extern s32 func_8012B6D4();
extern void *D_sc04_011_801EFC48;
extern void *D_sc04_011_801EFC54;
extern u8 D_sc04_011_801DEC6C;
extern void func_sc04_011_80186110();
extern void func_sc04_011_8018615C();
extern s32 func_sc04_011_80189A98();
extern s32 func_sc04_011_801862A4();
extern s32 func_8017267C();
extern void func_sc04_011_8018D1F0();
extern void *D_80126B78;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern u8 D_sc04_011_80193F7C;
extern s32 D_sc04_011_80193F94[];
extern void func_sc04_011_8017F2C4();
extern void func_800183E0();
extern void func_sc04_011_8017F8D0();
extern s32 func_sc04_011_8017F8E0();
extern void func_8014ABF0();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern s32 D_800AF648[];

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc04_011_80193E18[];
extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern PtSys D_sc04_011_801F1308;
extern void func_sc04_011_8018EAB8();
extern s16 D_sc04_011_801F130E;
extern void func_sc04_011_8018EBCC();

void func_sc04_011_8017C218(u8 *arg0) {
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
    t = D_sc04_011_80193E18;
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
    t = D_sc04_011_80193E18;
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
        t = D_sc04_011_80193E18;
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

void func_sc04_011_8017C524(u8 *arg0) {
    D_sc04_011_80193E58[AF(arg0, u16, 2)]();
}

void func_sc04_011_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_011_8017C5A0(u8 *arg0) {
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
    func_sc04_011_8017C218((s32) arg0);
}

void func_sc04_011_8017C610(u8 *arg0) {
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
    func_sc04_011_8017C218((s32) arg0);
}

void func_sc04_011_8017C69C(u8 *arg0) {
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
    func_sc04_011_8017C218((s32) arg0);
}

void func_sc04_011_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_011_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc04_011_8017C7C4(u8 *arg0) {
    D_sc04_011_80193E6C[AF(arg0, u16, 2)]();
}

extern OtRef D_800A651C[];
extern Ot14 D_800A6518[];
extern s32 func_80016638();
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern u8 D_sc04_011_801F1310;
extern u8 D_sc04_011_801F1311;
extern u8 D_sc04_011_801F1312;

extern u8 D_sc04_011_80194554[];
extern u8 D_sc04_011_80194550[];
extern void func_80132EC4();
extern s32 func_8002AC00();
extern void func_sc04_011_801805F8();
extern void func_sc04_011_801852BC();
extern void func_sc04_011_801853D0();
extern void func_sc04_011_80185648();
extern u8 D_sc04_011_801E8A1C;
extern void func_sc04_011_80188AC4(arg0);
extern u8 D_sc04_011_801949C0;
extern u16 D_sc04_011_801949DC;
extern s16 D_sc04_011_801949F2[];
extern s8 D_sc04_011_801EFEA0;
extern s8 D_sc04_011_801EFEA1;
extern s8 D_sc04_011_801EFEA2;
extern u8 D_sc04_011_80194D90;
extern u8 D_sc04_011_801F01C8;
extern void func_sc04_011_8018D7C8();

extern u8 D_sc04_011_8019473C[];

extern u8 D_sc04_011_80194BF4;
extern u8 D_sc04_011_80194BFC;

extern u8 D_sc04_011_801EFC64;
extern u8 D_sc04_011_80194350;
extern u8 D_sc04_011_80194348;

extern u16 D_801202A0;


extern u8 D_sc04_011_80194CEC;
extern void func_80149350();


extern u8 D_sc04_011_80193E98[];
extern s32 func_8012C750();
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;




extern s16 D_80126B62;
extern void func_sc04_011_80186B08();
extern void func_8013C9C4();
extern u8 D_sc04_011_80190B88;
extern u16 D_sc04_011_801944B8[];
extern s32 func_8012BE54();
extern void func_801439C0();
extern u8 D_sc04_011_801944C8;
extern void func_sc04_011_80183880();

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
extern s32 D_sc04_011_801F1500[];
extern void func_80017D98();
extern void func_sc04_011_80190174();

extern u8 D_sc04_011_801EEDC8[];
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
extern SV8 D_sc04_011_80193ED8[];
extern void func_800139C8();
extern s32 func_8012EFB8();
extern void func_80017E30();
extern void func_80016ED4();
extern u8 *AllocPrim();
extern void func_80017E8C();

typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 func_801465C0();
extern void func_8001CF00();
extern void func_80015954();
extern u16 D_sc04_011_80194008[];
extern V4 D_sc04_011_80193FF8;
extern SV8 D_sc04_011_80193FC8[];

typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
extern E40 D_sc04_011_801EFE60[];
extern CV D_sc04_011_801ED994;
extern CV D_sc04_011_801ED9A0;
extern CV D_sc04_011_801ED9A4;
extern void func_8001CD9C();

extern s16 D_sc04_011_80193E94; extern s16 D_sc04_011_80193E88; extern s16 D_sc04_011_80193E7C; extern u8 D_sc04_011_801EED00; extern u8 *func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc04_011_801EED28; extern s16 D_sc04_011_801EED38; extern s16 D_sc04_011_801EED32; extern s16 D_sc04_011_801EED2A; extern s16 D_sc04_011_801EED42; extern s16 D_sc04_011_801EED3A; extern s16 D_sc04_011_801EED66; extern s16 D_sc04_011_801EED5E; extern s16 D_sc04_011_801EED76; extern s16 D_sc04_011_801EED6E; extern s16 D_sc04_011_801EED90; extern s16 D_sc04_011_801EEDA0; extern s16 D_sc04_011_801EED9A; extern s16 D_sc04_011_801EED92; extern s16 D_sc04_011_801EEDAA; extern s16 D_sc04_011_801EEDA2; extern s16 D_sc04_011_801EED94; extern s16 D_sc04_011_801EED60; extern s16 D_sc04_011_801EED2C; extern u8 D_sc04_011_801EED50; extern u8 D_sc04_011_801EED48; extern u8 D_sc04_011_801EED54; extern u8 D_sc04_011_801EED4C; extern u8 D_sc04_011_801EED51; extern u8 D_sc04_011_801EED49; extern u8 D_sc04_011_801EED56; extern u8 D_sc04_011_801EED52; extern u8 D_sc04_011_801EED4E; extern u8 D_sc04_011_801EED4A; extern u8 D_sc04_011_801EED84; extern u8 D_sc04_011_801EED7C; extern u8 D_sc04_011_801EED85; extern u8 D_sc04_011_801EED7D; extern u8 D_sc04_011_801EED89; extern u8 D_sc04_011_801EED81; extern u8 D_sc04_011_801EEDBC; extern u8 D_sc04_011_801EEDB8; extern u8 D_sc04_011_801EEDB4; extern u8 D_sc04_011_801EEDB0; extern u8 D_sc04_011_801EEDBD; extern u8 D_sc04_011_801EEDB9; extern u8 D_sc04_011_801EEDB5; extern u8 D_sc04_011_801EEDB1; extern u8 D_sc04_011_801EEDBE; extern u8 D_sc04_011_801EEDBA; extern u8 D_sc04_011_801EEDB6; extern u8 D_sc04_011_801EEDB2; extern u8 D_sc04_011_801EED8A; extern u8 D_sc04_011_801EED86; extern u8 D_sc04_011_801EED82; extern u8 D_sc04_011_801EED7E; extern s32 D_sc04_011_801EED8C; extern s32 D_sc04_011_801EED58; extern s32 D_sc04_011_801EEDC0;
typedef struct { u8 b[4]; } B4;
extern XY D_sc04_011_801EBCC4[];
extern u8 D_sc04_011_801EBCF0[];
extern B4 D_sc04_011_801EBCFC[];
extern u8 D_sc04_011_801EBD28;
extern B4 D_sc04_011_801EBE28, D_sc04_011_801EBE24, D_sc04_011_801EBDF4, D_sc04_011_801EBDF0, D_sc04_011_801EBDC0, D_sc04_011_801EBDBC, D_sc04_011_801EBD8C, D_sc04_011_801EBD88, D_sc04_011_801EBD60;
extern void func_8001CBDC();

extern s32 D_sc04_011_80194D2C[];
extern void func_800134FC();
extern void func_8001382C();

extern void func_sc04_011_80184CCC();
extern void func_sc04_011_80183D00();
extern void func_sc04_011_80184DB8();
extern s32 func_sc04_011_80185A30();
extern void func_sc04_011_8018214C();
extern u8 D_sc04_011_80194C64;
extern u8 D_sc04_011_80194C8C;
extern u8 D_sc04_011_80194C14;
extern u16 D_sc04_011_801F161E;
extern u8 D_sc04_011_80194558[];
extern u8 D_sc04_011_801945A4;
extern void func_sc04_011_8018B5E4();
extern void func_sc04_011_8018B1B4();
extern void func_sc04_011_8018B744();
extern void func_sc04_011_8018B2F8();
extern s32 func_sc04_011_80186DCC();
extern void func_8001C810();
typedef struct { s32 a, b; } P8;
extern s32 D_sc04_011_801E4928[];
extern P8 D_sc04_011_801F0020[];
extern V3 D_sc04_011_801E5888[];
extern u16 D_sc04_011_801949F0;
extern s32 D_sc04_011_801E57E4[];
extern P8 D_sc04_011_801F00A0[];
extern V3 D_sc04_011_801E5948[];
extern u8 D_sc04_011_801949E0;

extern u8 D_sc04_011_80194470;
extern s32 D_sc04_011_801EFCA4;
extern s32 D_sc04_011_801EFCE8[];
extern void func_sc04_011_801861D4();
extern void func_sc04_011_80184BAC();
extern u8 D_sc04_011_801E6094;
extern s32 D_sc04_011_801E689C;
extern u8 D_sc04_011_801E7944;
extern u8 D_sc04_011_801E7968;
extern u8 D_sc04_011_801E798C;
extern P8 D_sc04_011_801EFEE8;
extern s32 D_sc04_011_801E73D4[];
extern P8 D_sc04_011_801EFEF0[];
extern u8 D_sc04_011_80194A98;

extern s32 D_sc04_011_80194500[][3];
extern void *D_sc04_011_801EFC5C;
extern void *D_sc04_011_801EFC60;
extern void *D_sc04_011_801EFC68;
extern s32 func_sc04_011_80183EA8();
extern s32 func_sc04_011_80183F10();
extern void func_sc04_011_80186C1C();
extern s32 func_sc04_011_8018AC00();
extern s32 func_sc04_011_8018BAC4();
extern u16 *D_sc04_011_801DEC8C;
extern s32 D_sc04_011_80194754[];
extern u8 D_sc04_011_8019470C[];
extern u8 D_sc04_011_801946AC[];
extern u8 D_sc04_011_801947A8;
extern u8 D_sc04_011_801947C0;
extern void func_sc04_011_80184414();
extern s32 func_80135004();
extern u8 *D_sc04_011_801EFD70[];
extern s32 func_sc04_011_80188054();
extern B4 D_sc04_011_801EFDC0;
extern B4 D_sc04_011_801ED99C;
extern B4 D_sc04_011_801ED998;

extern u8 D_sc04_011_801DF1D4;
extern void func_sc04_011_80185B5C();
extern void func_sc04_011_80185C5C();
extern s32 func_sc04_011_80186300();
extern void func_sc04_011_8018AA70();
extern void func_sc04_011_80185214();
extern s32 func_sc04_011_80184F4C();
extern s32 func_sc04_011_80181EA0();
extern s16 func_sc04_011_80184884();
extern void func_sc04_011_801826E4();

extern s32 func_8012B70C();
extern s32 func_sc04_011_80187940();
extern void func_8012F568();
extern u8 D_801152A8;

extern s32 func_sc04_011_8018B0B0();
extern s16 D_sc04_011_801EFD30[];
extern u16 D_sc04_011_801EFD3C;
extern void func_sc04_011_80185020();
extern void func_sc04_011_8018681C();
extern SV8 D_sc04_011_80194850[];

extern s32 D_sc04_011_801EFD14;
extern u8 D_sc04_011_801944D8;
extern u8 D_sc04_011_801DF06C;
extern void func_sc04_011_80189270();
extern s32 D_sc04_011_801944E8[];
extern s32 func_sc04_011_80184978();

extern V3 D_sc04_011_801944F0[];
extern void func_sc04_011_80182630();
extern u8 D_sc04_011_80194C3C;
extern s32 D_sc04_011_80194A78[];
extern V3 D_sc04_011_801E5810[];

extern void func_80017DF8();
extern void func_80017168();

extern void func_sc04_011_801885C0();
extern u8 D_sc04_011_801F00C0[];
extern s16 D_sc04_011_801F01C0;
extern s16 D_sc04_011_801F01C4;
extern u8 D_sc04_011_80194BAA[];
extern u8 D_sc04_011_801F00C6[];
extern u8 D_sc04_011_80194B6A[];

extern void func_sc04_011_80185DDC();
extern void func_sc04_011_80186020();
extern void func_sc04_011_8018489C();
extern void func_80132784();

extern void func_sc04_011_80181390();
extern u8 D_sc04_011_80194CB4;
extern void func_8012F038();
extern SV8 D_sc04_011_80194910[];
extern s8 D_sc04_011_80194BE4[];
extern u8 D_sc04_011_801EFD80;
extern u8 D_sc04_011_801EFD84;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_sc04_011_8018D988();
extern SV4 D_sc04_011_80194DD0;
extern SV4 D_sc04_011_80194DD8;
extern SV4 D_sc04_011_80194DE0;
extern SV4 D_sc04_011_80194DE8;
extern s32 func_80016EF8();

extern s32 func_sc04_011_801836D4();
extern UV4 D_sc04_011_80194B2C[];
extern void func_8012B21C();
extern s32 D_sc04_011_801F1501[];
extern s32 D_sc04_011_801F1502[];

extern u8 D_sc04_011_801E33A0;
extern u16 D_sc04_011_80194978[];
extern u16 D_sc04_011_8019497A[];
extern u16 D_sc04_011_8019497C[];
extern u8 D_sc04_011_80194960;
extern u8 D_sc04_011_80194940;
extern s32 func_8012913C();
extern u8 D_sc04_011_80194B64[];
extern u8 D_sc04_011_80194B66[];
extern u8 D_sc04_011_80194B68[];
extern B8 D_sc04_011_80194BA4[];


extern s32 D_80126B90;
extern s32 func_80135888();
extern s32 func_8012B8A4();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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
extern u8 D_sc04_011_80193F58;
extern s32 func_800D21C4();
extern void func_sc04_011_8017F2A8();
extern void func_80149374();
s32 func_sc04_011_80186E54(s32 arg0, s32 arg1, s32 arg2);
extern CV4 D_sc04_011_801ED9B8;

void func_sc04_011_8017C800(u8 *arg0) {
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

void func_sc04_011_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc04_011_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc04_011_8017C910(u8 *arg0) {
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

void func_sc04_011_8017CA80(s32 arg0, s32 arg1) {
    func_sc04_011_8017CAF8(arg0, arg1, 0xC, 0);
}

void func_sc04_011_8017CAA4(s32 arg0, s32 arg1, s16 arg2) {
    func_sc04_011_8017CAF8(arg0, arg1, (s32) arg2, 0);
}

void func_sc04_011_8017CACC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc04_011_8017CAF8(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

s32 func_sc04_011_8017CAF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc04_011_80193E98)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc04_011_8017CB80(s32 arg0, s32 arg1) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

void func_sc04_011_8017CBD4(s32 arg0, s32 arg1, s16 arg2) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s16, 0x70) = arg2;
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

void func_sc04_011_8017CC2C(void) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            if (AF(p, s32, 0xCC) != 0) {
                func_80016714(AF(p, s32, 0xCC), 0x38);
            }
            if (AF(p, s32, 0xD0) != 0) {
                func_80016714(AF(p, s32, 0xD0), 0x38);
            }
            func_8012C218((s32) p);
            return;
        }
    }
}

void func_sc04_011_8017CCD8(u8 *arg0) {
    D_sc04_011_80193EC8[AF(arg0, u16, 2)]();
}

void func_sc04_011_8017CD14(u8 *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc04_011_80193E94 = 0;
    D_sc04_011_80193E88 = 0;
    D_sc04_011_80193E7C = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = func_8012C194();
        if (m == 0) return;
        func_80024054(AF(o, s32, 0xDC), &D_sc04_011_801EED00);
        func_8001CE28(m, &D_sc04_011_801EED00);
        AF(m, s16, 8) = AF(o, s16, 6) + 6;
        AF(m, s16, 0xA) = AF(o, s16, 0xA) + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        AF(o, u8 *, 0xD0) = m;
    }
    x1 = AF(o, s16, 6);
    D_sc04_011_801EED28 = x1;
    D_sc04_011_801EED38 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc04_011_801EED2A = D_sc04_011_801EED32 = y1;
    D_sc04_011_801EED3A = D_sc04_011_801EED42 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc04_011_801EED5E = D_sc04_011_801EED66 = y2;
    D_sc04_011_801EED6E = D_sc04_011_801EED76 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc04_011_801EED90 = x2 + 2;
    D_sc04_011_801EEDA0 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc04_011_801EED48 = D_sc04_011_801EED50 = 0xFF;
    D_sc04_011_801EED4C = D_sc04_011_801EED54 = 0xFF;
    D_sc04_011_801EED49 = D_sc04_011_801EED51 = 0;
    D_sc04_011_801EED52 = D_sc04_011_801EED56 = 0;
    D_sc04_011_801EED4A = D_sc04_011_801EED4E = 0;
    D_sc04_011_801EED7C = D_sc04_011_801EED84 = 0xFF;
    D_sc04_011_801EED92 = D_sc04_011_801EED9A = y + 4;
    D_sc04_011_801EEDA2 = D_sc04_011_801EEDAA = y + 0xB;
    D_sc04_011_801EED7D = D_sc04_011_801EED85 = 0xFF;
    D_sc04_011_801EED81 = D_sc04_011_801EED89 = 0xFF;
    D_sc04_011_801EEDB0 = D_sc04_011_801EEDB4 = D_sc04_011_801EEDB8 = D_sc04_011_801EEDBC = 0x40;
    D_sc04_011_801EEDB1 = D_sc04_011_801EEDB5 = D_sc04_011_801EEDB9 = D_sc04_011_801EEDBD = 0x40;
    D_sc04_011_801EEDB2 = D_sc04_011_801EEDB6 = D_sc04_011_801EEDBA = D_sc04_011_801EEDBE = 0x40;
    D_sc04_011_801EED7E = D_sc04_011_801EED82 = D_sc04_011_801EED86 = D_sc04_011_801EED8A = 0;
    D_sc04_011_801EED2C = D_sc04_011_801EED60 = 2;
    D_sc04_011_801EED94 = 4;
    D_sc04_011_801EED58 = D_sc04_011_801EED8C = 0;
    D_sc04_011_801EEDC0 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) AF(o, s16, 0x70) = 0x100;
    D_sc04_011_80193E94 = 2;
    AF(o, s16, 2)++;
}


void func_sc04_011_8017D000(u8 *arg0) {
    s16 cur = AF(arg0, s16, 0x108);
    s32 tgt = *AF(arg0, s16 *, 0xD4);
    s32 max = *AF(arg0, s16 *, 0xD8);
    s32 half;
    s16 n;

    if (cur != tgt) {
        if (tgt < cur) {
            AF(arg0, s16, 0x108) = cur - (max * 3) / AF(arg0, s16, 0x70);
            if (AF(arg0, s16, 0x108) < tgt) {
                AF(arg0, s16, 0x108) = tgt;
            }
            ((XY *)&D_sc04_011_80193E7C)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            if (((XY *)&D_sc04_011_80193E7C)->x == 0 && tgt != 0) {
                ((XY *)&D_sc04_011_80193E7C)->x = 1;
            }
        } else {
            s16 t = AF(arg0, s16, 0x10A);
            if (cur < t) {
                AF(arg0, s16, 0x108) = cur + (max * 3) / AF(arg0, s16, 0x70);
                if (tgt < AF(arg0, s16, 0x108)) {
                    AF(arg0, s16, 0x108) = max;
                }
                ((XY *)&D_sc04_011_80193E7C)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            } else if (t < max) {
                AF(arg0, s16, 0x10A) = t + (max * 3) / AF(arg0, s16, 0x70);
                if (max < AF(arg0, s16, 0x10A)) {
                    AF(arg0, s16, 0x10A) = max;
                }
                D_sc04_011_80193E88 = (AF(arg0, s16, 0x10A) * AF(arg0, s16, 0x70)) / max;
                D_sc04_011_80193E94 = D_sc04_011_80193E88 + 2;
            }
        }
    }
    if (AF(arg0, s16, 0xFC) == 0xB) {
        u8 c = (AF(arg0, s32, 0x1C)++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[2].g = c;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[0].g = c;
        ((QuadArg *)&D_sc04_011_801EED28)[1].c[3].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[1].c[2].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[1].c[1].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[1].c[0].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[3].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[2].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[1].b = c;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[0].b = c;
    }
    half = AF(arg0, s16, 0x70) >> 1;
    n = ((XY *)&D_sc04_011_80193E7C)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc04_011_801EED28)[0].p[1].x = ((QuadArg *)&D_sc04_011_801EED28)[0].p[0].x + n;
        ((QuadArg *)&D_sc04_011_801EED28)[0].p[3].x = ((QuadArg *)&D_sc04_011_801EED28)[0].p[1].x - 4;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[3].g = v;
        ((QuadArg *)&D_sc04_011_801EED28)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc04_011_801EED28)[0].c[1].g;
        *g = ((QuadArg *)&D_sc04_011_801EED28)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc04_011_801EED28)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc04_011_801EED28)[1].p[0].x = x;
        ((QuadArg *)&D_sc04_011_801EED28)[1].p[1].x = ((QuadArg *)&D_sc04_011_801EED28)[0].p[0].x + n;
        ((QuadArg *)&D_sc04_011_801EED28)[0].p[1].x = x;
        ((QuadArg *)&D_sc04_011_801EED28)[1].p[2].x = xm;
        ((QuadArg *)&D_sc04_011_801EED28)[0].p[3].x = xm;
        ((QuadArg *)&D_sc04_011_801EED28)[1].p[3].x = ((QuadArg *)&D_sc04_011_801EED28)[1].p[1].x - 4;
        ((QuadArg *)&D_sc04_011_801EED28)[1].c[3].r = -v;
        ((QuadArg *)&D_sc04_011_801EED28)[1].c[1].r = -v;
        func_800176F0(&((QuadArg *)&D_sc04_011_801EED28)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc04_011_801EED28)[2].p[3].x;
        ((QuadArg *)&D_sc04_011_801EED28)[2].p[1].x = ((QuadArg *)&D_sc04_011_801EED28)[2].p[0].x + D_sc04_011_80193E88;
        *p = ((QuadArg *)&D_sc04_011_801EED28)[2].p[1].x - 4;
    }
    func_800176F0(&((QuadArg *)&D_sc04_011_801EED28)[0]);
    func_800176F0(&((QuadArg *)&D_sc04_011_801EED28)[2]);
}

void func_sc04_011_8017D494(u8 *obj) {
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

void func_sc04_011_8017E374(u8 *arg0) {
    D_sc04_011_80193ED0[AF(arg0, u16, 2)]();
}

void func_sc04_011_8017E3B0(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc04_011_801EEDC8 + i * 0x1D0;
        AF(b, s16, 0) = 0;
        AF(b, s16, 2) = i << 9;
        AF(b, s32, 0xC) = (rand() & 0xF) << 16;
        AF(b, s32, 4) = ((rand() & 0xF) << 15) + 0x10000;
        AF(b, s32, 8) = ((rand() & 0xF) << 12) + 0x8000;
        for (j = 0; j < 16; j++) {
            e = b + 0x10 + j * 0x1C;
            AF(e, s16, 0) = 0;
            AF(e, s16, 2) = (rand() & 3) + 4;
            AF(e, s16, 8) = (j << 8) + (rand() & 0xF) * 56;
            AF(e, s16, 0xA) = (rand() & 0xF) << 8;
            AF(e, s32, 0x14) = (rand() & 0xF) << 13;
            AF(e, s32, 0xC) = ((rand() & 0xF) << 14) + 0x10000;
            AF(e, s32, 0x10) = ((rand() & 0xF) << 12) + 0x8000;
            AF(e, s16, 4) = 0x200;
            AF(e, s16, 6) = (rand() & 0xF) << 4;
            AF(e, s32, 0x18) = ((rand() & 3) << 5) + 0x40;
        }
    }
    AF(o, s16, 2)++;
}

void func_sc04_011_8017E558(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc04_011_801EEDC8 + i * 0x1D0;
        if (AF(b, s16, 0) == 0) AF(b, s32, 0xC) += 0x10000;
        for (j = 0; j < 16; j++) {
            e = b + 0x10 + j * 0x1C;
            switch (AF(e, s16, 0)) {
            case 0:
                AF(e, s32, 0xC) += AF(e, s32, 0x10);
                AF(e, s32, 0x14) += AF(e, s32, 0xC);
                AF(e, s16, 2)--;
                if (AF(e, s16, 2) == -1) AF(e, s16, 0)++;
                AF(e, s16, 4) += AF(e, s16, 6);
                AF(e, s16, 0xA) += 0x10;
                break;
            case 1:
                AF(e, s16, 4) += 0x80;
                AF(e, s32, 0x18) -= 8;
                if (AF(e, s32, 0x18) < 0) { AF(e, s32, 0x18) = 0; AF(e, s16, 0)++; }
                break;
            case 2:
                n++;
                break;
            }
        }
        func_sc04_011_8017E6EC(o, b);
    }
    if (n == 0x80) func_80146C3C(o);
}

void func_sc04_011_8017E6EC(u8 *o, u8 *b) {
    Q40 q;
    SMtx m;
    SV8 pos;
    SV8 rot;
    SV8 out;
    SV8 v[4];
    s32 k;
    u8 *e;
    s32 a;
    Q40 *qp;

    func_80015978(o + 4, &pos);
    rot.x = 0;
    rot.y = 0;
    rot.z = AF(b, s16, 0xE);
    func_800139C8(AF(b, s16, 2), &rot, &rot);
    if (func_8012EFB8(&pos, &pos) & ~0x1000) return;
    q.p[0].z = 3;
    q.flag = 0x12;
    q.code = 0x50000000;
    q.uv[0] = 0x870;
    q.uv[1] = 0x1A8;
    q.uv[2] = 0x88F;
    q.uv[3] = 0x1A8;
    q.uv[4] = 0x870;
    q.uv[5] = 0x1C7;
    q.uv[6] = 0x88F;
    q.uv[7] = 0x1C7;
    pos.x += rot.x;
    pos.y += rot.y;
    pos.z += rot.z;
    qp = &q;
    for (k = 0; k < 16; k++) {
        e = b + 0x10 + k * 0x1C;
        a = AF(e, s32, 0x18);
        qp->col = a | (a << 16 | a << 8);
        rot.x = rot.y = rot.z = AF(e, s16, 4);
        func_80017DC4(&rot, &m);
        rot.x = 0;
        rot.y = 0;
        rot.z = AF(e, s16, 0xA);
        func_80017E30(&rot, &m);
        ApplyMatrixSV(&m, &D_sc04_011_80193ED8[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc04_011_80193ED8[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc04_011_80193ED8[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc04_011_80193ED8[3], &v[3]);
        rot.x = 0;
        rot.y = 0;
        rot.z = AF(e, s16, 0x16);
        func_800139C8(AF(e, s16, 8), &rot, &out);
        out.x += pos.x;
        out.z += pos.y;
        qp->p[0].x = out.x + v[0].x;
        qp->p[0].y = out.z + v[0].y;
        qp->p[1].x = out.x + v[1].x;
        qp->p[1].y = out.z + v[1].y;
        qp->p[2].x = out.x + v[2].x;
        qp->p[2].y = out.z + v[2].y;
        qp->p[3].x = out.x + v[3].x;
        qp->p[3].y = out.z + v[3].y;
        func_80016ED4(qp);
    }
}

void func_sc04_011_8017E9A4(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_011_80193EF8);
    D_sc04_011_80193F1C[AF(arg0, u16, 2)](arg0);
}

void func_sc04_011_8017E9FC(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc04_011_8017EA44(arg0);
    func_80146CA0(arg0);
}

void func_sc04_011_8017EA44(s32 arg0) {
    s16 temp_v0;

    func_80149020();
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc04_011_80193F00);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    temp_v0 = (AF(arg0, u16, 0xF4) + 0x800) & 0xFFF;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = temp_v0;
    AF(arg0, s16, 0x244) = temp_v0;
    func_80146DE8(arg0, 0, 0, 0x100000);
    func_801477E8(arg0, -0xC0000);
    AF(arg0, u8, 0xDF) = 0;
    AF(arg0, u8, 0xDE) = 0x5A;
    func_80147324(0x7EB);
    func_80146A6C(0x3F, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
    func_80146CA0(arg0);
}



extern u8 D_sc04_011_801E81A4;
extern u8 D_sc04_011_80194800;
extern u8 D_sc04_011_80194808;
extern u8 D_sc04_011_80194828;
extern void func_sc04_011_80188650();

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;


extern s32 func_8012E57C();
extern u8 D_sc04_011_801F12C8;

extern void StoreImage();


extern s32 func_sc04_011_8018B9D4(s32 arg0, s32 arg1);
extern s32 D_sc04_011_801EFD1C;
extern void func_sc04_011_8018BC08(void);
extern s32 func_sc04_011_80186CD8(s32 arg0);
extern u16 D_sc04_011_801948D8[];

extern void func_80147A84();
extern void func_801473EC();
extern void func_80148038();
extern void func_80147460();
extern s32 func_801535F4();
extern void func_80146D90();
extern u16 D_sc04_011_801EFD24;
extern s32 func_sc04_011_80186A20();
extern void func_8016AA50();
s32 func_sc04_011_80186A68(void);
extern u8 D_sc04_011_80194A68;

void func_sc04_011_8017EB10(s32 arg0) {
    s32 r;
    u8 t;

    func_80149020(arg0);
    if (AF(arg0, u8, 0xDF) == 0) {
        func_80147A84(arg0);
        func_801473EC(arg0);
        func_80148038(arg0, 0x18000);
        func_80147460(arg0);
    }
    r = func_801535F4(arg0);
    switch (r) {
    case 0:
        break;
    case 1:
    case 2:
        if (AF(arg0, s32, 0x34) > 0 && AF(arg0, u8, 0xDF) == 0) {
            AF(arg0, u8, 0xDF) = 1;
            func_80146D90(arg0);
        }
        break;
    }
    t = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8)(t + 0xFF);
    if (t == 0) {
        func_sc04_011_8017EBE8(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
    }
}

s32 func_sc04_011_8017EBE8(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc04_011_8017EC38(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_011_80193F28);
    D_sc04_011_80193F4C[AF(arg0, u16, 2)](arg0);
}

void func_sc04_011_8017EC90(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc04_011_8017ECD8(arg0);
    func_80146CA0(arg0);
}

void func_sc04_011_8017ECD8(s32 arg0) {
    func_80149020(arg0);
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc04_011_80193F30);
    AF(arg0, u8, 0xDE) = 0x5A;
    func_80147324(0x7EB);
    func_80146A6C(0x3F, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
    func_80172630(arg0);
    func_80146CA0(arg0);
}

void func_sc04_011_8017ED60(s32 arg0) {
    u8 temp_v1;

    func_80149020(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_sc04_011_8017EDC4(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
        return;
    }
    func_80172630(arg0);
}

s32 func_sc04_011_8017EDC4(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc04_011_8017EE14(u8 *arg0) {
    D_sc04_011_80193F84[AF(arg0, u16, 2)]();
}

void func_sc04_011_8017EE50(s32 arg0) {
    V4 v;
    WMtx m;
    u8 *o;

    o = (u8 *)func_800D21C4(arg0, &D_sc04_011_80193F58, 0x2B);
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        AF(o, s16, 0x28) = 0x224;
        AF(o, s16, 0x2A) = 0x1A8;
        AF(o, s16, 0x1A) = 0x3000;
        AF(o, s16, 0x18) = 0x3000;
        AF(o, s16, 0x14) = -0x400;
        AF(o, u16, 0x2C) = 0xC080;
        AF(o, s32, 4) |= 0x48000000;
        func_sc04_011_8017F2A8(arg0);
        func_sc04_011_8017F2C4(arg0);
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x30) = 0;
        func_80146E90(arg0, 0x5A);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_sc04_011_8017EF0C(u8 *arg0) {
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_s6;

    temp_s6 = AF(arg0, void *, 0x20);
    func_sc04_011_8017F2C4((s32) arg0);
    temp_v0 = AF(arg0, s32, 0x30);
    if (temp_v0 == 0) {
        var_a0 = D_sc04_011_80193F94[AF(arg0, s32, 0x2C)];
        if (var_a0 == 0) {
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x2C) = 0;
            var_a0 = D_sc04_011_80193F94[0];
        }
        func_800183E0(var_a0);
        AF(arg0, s32, 0x2C) = (s32) (AF(arg0, s32, 0x2C) + 1);
    } else {
        AF(arg0, s32, 0x30) = temp_v0_2 = temp_v0 - 1; if ((temp_v0_2 == 0) && (AF(arg0, s32, 0x1C) != 0)) {
            func_80147324(0x7EC);
        }
    }
    temp_s5 = AF(arg0, s32, 0x1C);
    if (temp_s5 == 1) {
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ temp_s5);
        func_sc04_011_8017F8D0((s32) &D_sc04_011_80193F7C);
        func_80147324(0x7F4);
        AF(temp_s6, s32, 4) = (s32) (AF(temp_s6, s32, 4) | 0x80000000);
    }
    if ((func_80146E98((s32) arg0) != 0) && (func_sc04_011_8017F8E0((s32) &D_sc04_011_80193F7C) != 0)) {
        func_8014ABF0(0x40);
        func_80146C3C((s32) arg0);
    }
}

void func_sc04_011_8017F2A8(s32 *arg0) {
    arg0[4] = arg0[1];
    arg0[5] = arg0[2];
    arg0[6] = arg0[3];
}

void func_sc04_011_8017F2C4(s32 arg0) {
    s32 t = AF(arg0, s32, 0x34);
    AF(arg0, s32, 4) = AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) = AF(arg0, s32, 0x18);
    func_80149374(t, arg0 + 4);
}

void func_sc04_011_8017F304(u8 *arg0) {
    D_sc04_011_80193FBC[AF(arg0, u16, 2)]();
}

void func_sc04_011_8017F340(u8 *o) {
    SV8 a;
    SV8 r;
    WMtx m;
    V4 v;
    u8 *p;
    u8 *w;
    s16 *q;
    s32 i;

    p = AF(o, u8 *, 0x34);
    w = (u8 *)func_801465C0();
    AF(o, u8 *, 0x20) = w;
    if (w != 0) {
        func_8001CF00(w);
        AF(w, s32, 4) |= 0x80000000;
        func_80015978(p + 4, &a);
        func_80015954(&a, o + 4);
        AF(w, u16, 0x18) = AF(w, u16, 0x1A) = AF(w, u16, 0x1C) = D_sc04_011_80194008[AF(o, s32, 0x30)];
        v = D_sc04_011_80193FF8;
        r = D_sc04_011_80193FC8[AF(o, s32, 0x2C)];
        if (AF(o, s32, 0x30) != 0) {
            r.x += (rand() & 0x3F) * 16 - 0x200;
            r.y += (rand() & 0x3F) * 16 - 0x200;
            r.z += (rand() & 0x3F) * 16 - 0x200;
            v.x = ((rand() & 0x1F) - 0x10) << 16;
            v.y = ((rand() & 0x1F) - 0x10) << 16;
            v.z = ((rand() & 0x1F) - 0x10) << 16;
        }
        RotMatrixZYX(&r, &m);
        ApplyMatrixLV(&m, &v, &v);
        AF(o, s32, 0x10) = v.x;
        AF(o, s32, 0x14) = v.y;
        AF(o, s32, 0x18) = v.z;
        AF(o, s32, 0x4C) = ((rand() & 0x1F) - 0x10) * 11;
        AF(o, s32, 0x50) = ((rand() & 0x1F) - 0x10) * 11;
        AF(o, s32, 0x54) = ((rand() & 0x1F) - 0x10) * 11;
        q = (s16 *)(o + 0x38);
        for (i = 0; i < 3; i++) {
            *q++ = (rand() & 0x7F) - 0x40;
            *q++ = (rand() & 0x7F) - 0x40;
            *q++ = (rand() & 0x7F) - 0x40;
        }
        func_80146E90(o, 2);
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc04_011_8017F614(s32 arg0) {
    func_sc04_011_8017F6D8(arg0);
    func_sc04_011_8017F85C(arg0);
    if (func_80146E98(arg0) != 0) {
        AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 2);
        AF(arg0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 2);
        AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 2);
        func_80146E90(arg0, 0x40);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_011_8017F690(s32 arg0) {
    func_sc04_011_8017F6D8(arg0);
    func_sc04_011_8017F85C(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
    }
}

s32 func_sc04_011_8017F6D8(s32 arg0) {
    func_sc04_011_8017F700(arg0, (s32) &D_sc04_011_80193F64);
}

void func_sc04_011_8017F700(u8 *o, u8 *p) {
    WMtx m;
    SV8 v;
    u8 *q;

    q = AF(o, u8 *, 0x20);
    AF(p, s32, 0x1C) = 0x50000000;
    func_80017DC4(q + 0x18, &m);
    func_80017DF8(q + 0x10, &m);
    func_80015978(o + 4, &v);
    func_80017E68(&v, &m);
    func_80017168(p, &m);
    m.t[0] += AF(o, s16, 0x38);
    m.t[1] += AF(o, s16, 0x3A);
    m.t[2] += AF(o, s16, 0x3C);
    func_80017168(p, &m);
    func_80017E68(&v, &m);
    m.t[0] += AF(o, s16, 0x3E);
    m.t[1] += AF(o, s16, 0x40);
    m.t[2] += AF(o, s16, 0x42);
    func_80017168(p, &m);
    func_80017E68(&v, &m);
    m.t[0] += AF(o, s16, 0x44);
    m.t[1] += AF(o, s16, 0x46);
    m.t[2] += AF(o, s16, 0x48);
    func_80017168(p, &m);
}

void func_sc04_011_8017F85C(u8 *arg0) {
    u8 *p;
    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x10) += AF(arg0, s32, 0x4C);
    AF(p, s16, 0x12) += AF(arg0, s32, 0x50);
    AF(p, s16, 0x14) += AF(arg0, s32, 0x54);
}

void func_sc04_011_8017F8D0(u8 *arg0) {
    AF(arg0, s32, 0) = 0x80404080;
}

s32 func_sc04_011_8017F8E0(u8 *p) {
    s32 t;
    s16 v;

    t = p[3] - 2;
    p[3] = t;
    if (t & 0xFF) {
    if (D_800B99DA & 1) {
        v = (u8)t;
    } else {
        v = (u8)t + 0x40;
    }
    if (v > 0x100) {
        v = 0xFF;
    }
    p[2] = v;
    if (v < p[0]) {
        p[0] = v;
    }
    if (v < p[1]) {
        p[1] = v;
    }
    return 0;
    }
    return 1;
}

void func_sc04_011_8017F96C(u8 *arg0) {
    D_sc04_011_8019429C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_011_8017F9A8(u8 *arg0, s32 arg1, s32 arg2) {
    D_8011F9C4 = 1;
    func_8002D4C8(6, 0, arg2);
    func_sc04_011_8017FCDC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_011_8017FA08(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_011_8017FA2C(u8 *arg0) {
    D_sc04_011_801942A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_011_8017FA68(u8 *arg0) {
    func_sc04_011_8017FD04();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_011_8017FAA8(u8 *arg0) {
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

void func_sc04_011_8017FB24(void) {
    func_800D1EBC();
}

void func_sc04_011_8017FB44(u8 *arg0) {
    D_sc04_011_801942B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_011_8017FB80(u8 *arg0) {
    func_sc04_011_8017FE44();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_011_8017FBBC(void) {
    return 0;
}

s32 func_sc04_011_8017FBC4(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D0C48(1);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc04_011_8017FC2C(void) {
    func_800D1EBC();
}

void func_sc04_011_8017FC4C(u8 *arg0) {
    D_sc04_011_801942C8[AF(arg0, u8, 0x216)]();
}

void func_sc04_011_8017FC88(s32 arg0) {
    func_80171990(arg0);
}

void func_sc04_011_8017FCA8(u8 *arg0) {
    if (AF(arg0, s16, 0xA) >= -0x7A2) {
        func_80171928((s32) arg0);
    }
}

void func_sc04_011_8017FCDC(void) {
    func_8016EE40((s32) &D_sc04_011_801942C0, 0x01000000);
}

void func_sc04_011_8017FD04(void) {
    func_8016EE40((s32) &D_sc04_011_801942D0, 0x01000000);
}

void func_sc04_011_8017FD2C(u8 *arg0) {
    D_sc04_011_801942E4[AF(arg0, u8, 0x216)]();
}

s32 func_sc04_011_801859E4(s32 arg0, s32 arg1);
s32 func_sc04_011_80185FAC(void);
extern void func_sc04_011_80186470();
extern void func_sc04_011_801863B4();
extern s32 MoveImage();
s32 func_sc04_011_8018AD3C(u8 *p, s32 *q, s32 c);
extern u8 D_sc04_011_801EFD81;
extern SV4 D_sc04_011_801EBE44[];
void func_sc04_011_80190264(s32 a0, s32 a);
void func_sc04_011_8018FE20(s32 arg0, SV4 *p, SV4 *q, s32 ang0);

extern s32 D_sc04_011_801EFCA8[];
extern s32 D_sc04_011_801EFCF8[];
extern u8 *func_sc04_011_80189A60();
extern CV D_sc04_011_801ED9A8;
extern void func_8001CD50();
extern SV8 D_sc04_011_801ED9AC;

extern void func_sc04_011_8018B830();
extern void func_sc04_011_8018B8C0();
extern void func_sc04_011_80189410();
extern void func_80016450();
s32 func_sc04_011_80185A18(s32 arg0, s32 arg1);
extern s16 D_sc04_011_801EFD44;
extern s16 D_sc04_011_801EFD48;
extern s16 D_sc04_011_801EFD4C;
extern void func_80017714();

extern s16 D_80126B9A;
extern u8 D_sc04_011_801948A8;
extern void func_sc04_011_80189108();
extern s16 D_800B9AB0;
extern s16 D_800B9AB2;
extern s32 SquareRoot0();
extern s32 ratan2();

extern void func_sc04_011_801863D4();
extern void func_sc04_011_80184ABC();
void func_sc04_011_801888B8(u8 *o);
s32 func_sc04_011_801886C4(s32 arg0);
extern s32 func_sc04_011_80188A30();

void func_sc04_011_8017FD68(s32 arg0) {
    s32 i;
    u8 *p;

    func_80175454();
    func_80171990(arg0);
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&D_801202A0 + i * 0x10C;
        if (*(u16 *)p == 0x3AF) {
            func_8012AD50(p);
        }
    }
    func_sc04_011_8017FDF0(arg0);
}

void func_sc04_011_8017FDF0(s32 arg0) {
    if (func_8012E544(0x3AF) == 0) {
        D_800AE6BD += 1;
        func_80171928(arg0);
    }
}

void func_sc04_011_8017FE44(void) {
    func_8016EE40((s32) &D_sc04_011_801942DC, 0x01000000);
}

void func_sc04_011_8017FE6C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_011_80180050, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_011_80180050((s32) &D_80126948);
}

void func_sc04_011_8017FF04(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x2EE;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x96;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_011_80180050, 1);
}

s32 func_sc04_011_8017FF80(void) {
    s32 temp_v0;

    D_80126E6C = 0x190;
    D_80126E74 = 0x258;
    D_80126E80 = -0xE3;
    D_80126E82 = 0x400;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = 0x20;
    D_80126E92 = 0;
    func_8012A048((s32) &D_80126E60, (s32) func_sc04_011_80180050, 2);
    func_8012A094((s32) &D_80126E60);
    func_sc04_011_80180050((s32) &D_80126E60);
    temp_v0 = func_8012A100(1);
    D_80126F00 = 0;
    return temp_v0;
}

s32 func_sc04_011_80180030(void) {
    return func_8012A100(0);
}

void func_sc04_011_80180050(s32 arg0) {
    D_sc04_011_8019433C[AF(arg0, u8, 4)]();
}

void func_sc04_011_8018008C(s32 arg0) {
    SV8 v;
    u8 *a;

    v = *(SV8 *)&D_80126940;
    if (v.z > 0x1500) {
        *(SV8 *)&D_801274E8 = v;
        D_80126954 = 0x12C;
        D_8012695C = 0x2EE;
        D_80126968 = 0x155;
        D_8012696A = 0x800;
        D_8012696C = 0;
        D_80126976 = 0;
        D_80126978 = -0x96;
        D_8012697A = 0;
        func_8012A018(func_sc04_011_80180050, 1);
    } else {
        if (v.z > 0x900) {
            a = &D_sc04_011_80194328;
        } else if (v.x > 0x440) {
            a = &D_sc04_011_80194314;
        } else if (v.z > 0x340) {
            a = &D_sc04_011_80194300;
        } else {
            a = &D_sc04_011_801942EC;
        }
        func_sc04_011_80180570(a);
    }
    if (v.y > -0x680) {
        v.y = -0x680;
    }
    func_sc04_011_801803D8(arg0, &v);
}

void func_sc04_011_80180200(void) {
    AF(D_801151D4, s32, 0x14) = 0x2EE;
}

void func_sc04_011_80180214(void) {
    AF(D_801151D4, s32, 0x14) = 0x4B0;
}

void func_sc04_011_80180228(u8 *o) {
    SV8 v;

    v = *(SV8 *)&D_80126940;
    if (v.x < 0x340) {
        v.x = 0x340;
    }
    if (v.x > 0x6C0) {
        v.x = 0x6C0;
    }
    if (v.z < 0x1580) {
        v.z = 0x1580;
    }
    if (v.z > 0x1800) {
        v.z = 0x1800;
    }
    if (AF(&D_801274E8, s16, 2) != -0x782) {
        AF(&D_801274E8, s16, 2) = func_80012C6C(AF(&D_801274E8, s16, 2), -0x782, 0x10);
    }
    v.y = AF(&D_801274E8, s16, 2);
    func_sc04_011_801803D8(o, &v);
}

void func_sc04_011_80180320(u8 *arg0) {
    s32 sp10;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;

    temp_v1 = AF(arg0, s16, 0xA0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u16, 0x22) + 2;
        AF(arg0, u16, 0x22) = (u16) temp_v0;
        AF(arg0, s16, 0x1A) = temp_v0;
        if (temp_v0 >= 0x801) {
            AF(arg0, s16, 0xA0) = 1;
        }
        break;
    case 1:
        temp_v0_2 = AF(arg0, u16, 0x22) - 2;
        AF(arg0, u16, 0x22) = (u16) temp_v0_2;
        AF(arg0, s16, 0x1A) = temp_v0_2;
        if (temp_v0_2 < 0x400) {
            AF(arg0, s16, 0xA0) = 0;
        }
        break;
    }
    func_sc04_011_80186EFC((s32) &sp10);
    func_sc04_011_801803D8((s32) arg0, (s32) &sp10);
}

void func_sc04_011_801803D8(u8 *o, s16 *v) {
    WMtx m;
    SV8 s;
    SV8 r;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 10);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 10);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 10);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 10);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 10);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + v[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + v[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + v[2];
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + v[0];
    m.t[1] = AF(o, s16, 0x2A) + v[1];
    m.t[2] = AF(o, s16, 0x2C) + v[2];
    s.x = 0;
    s.y = 0;
    s.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &s, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

void func_sc04_011_80180570(u8 *a) {
    D_80126954 = AF(a, s16, 0);
    D_8012695C = AF(a, s16, 2);
    D_80126968 = AF(a, s16, 4);
    D_8012696A = AF(a, s16, 6);
    D_8012696C = AF(a, s16, 8);
    D_80126976 = AF(a, s16, 0xC);
    D_80126978 = AF(a, s16, 0xE);
    D_8012697A = AF(a, s16, 0x10);
}

s32 func_sc04_011_801805D8(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

void func_sc04_011_801805F8(o)
    u8 *o;
{
    func_sc04_011_8018637C(o, &D_sc04_011_801DEC6C);
    func_8012AD44(o, 2);
}

void func_sc04_011_80180634(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_8002D4C8(0x7F2, 0, arg2);
}

s32 func_sc04_011_80180660(u8 *o) {
    if (func_8012BEE8(o) != 0) {
        return 1;
    }
    if ((AF(o, s32, 0x1C) & 0xF) == 0) {
        func_8013C9C4(&D_sc04_011_80190B88);
    }
    return 0;
}

extern u8 D_sc04_011_80194460;
void func_sc04_011_8018A47C(s32 arg0);
void func_sc04_011_801806B8(u8 *o) {
    s32 t;
    D_sc04_011_801EFD40 = (D_sc04_011_801EFD40 | 0x20) & 0xFFF7;
    func_sc04_011_8018332C(o, &D_sc04_011_80194460);
    t = D_sc04_011_801EFCA0;
    AF(o, s32, 0x1C) = 0x20;
    func_sc04_011_8018A47C(t);
}

void func_sc04_011_80180714(s32 arg0) {
    func_sc04_011_801833D4(arg0, -0x40);
    func_sc04_011_80183A28(arg0);
    func_8012BEE8(arg0);
}

s32 func_sc04_011_80180750(u8 *o) {
    if (func_sc04_011_801833D4(o, -0x40) != 0) {
        return 1;
    }
    func_sc04_011_80183A28(o);
    return 0;
}

void func_sc04_011_80180790(s32 arg0) {
    func_sc04_011_801837C4(arg0);
    func_sc04_011_80183BAC(arg0);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s32, 0x1C) = 0x70;
}

s32 func_sc04_011_801807CC(u8 *o) {
    u8 *t = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
    s32 v;
    s16 a;
    s16 b;

    v = AF(AF(t, u8 *, 0x20), u16, 0x12) & 0xFFF;
    a = v >= 0x800 ? v | 0xF000 : v;
    func_sc04_011_80183880(o);
    v = AF(AF(t, u8 *, 0x20), u16, 0x12) & 0xFFF;
    b = v >= 0x800 ? v | 0xF000 : v;
    if ((a < -0x200 && b >= -0x200) || (a > -0x200 && b <= -0x200)) {
        func_8002D4C8(0x9C3, 0);
    }
    func_sc04_011_80185960(0, AF(t, s32, 0x20) + 0x14, 0xFFC0);
    if (func_8012BEE8(o) != 0) {
        return AF(AF(t, u8 *, 0x20), s16, 0x14) == 0;
    }
    return 0;
}

void func_sc04_011_801808EC(s32 arg0) {
    func_sc04_011_8018332C(arg0, (s32) &D_sc04_011_80194468);
    AF(arg0, s32, 0x1C) = 0x10;
    func_8002D4C8(0x9C3, 0);
}

s32 func_sc04_011_80180930(u8 *o) {
    if (func_sc04_011_801833D4(o, 0x20) != 0) {
        return 1;
    }
    func_sc04_011_80183A28(o);
    return 0;
}

extern u8 D_sc04_011_801DECA4;
void func_sc04_011_80180970(u8 *o) {
    D_sc04_011_801EFD40 &= 0xFFFB;
    func_sc04_011_801863D4(o);
    AF(o, s16, 6) = -0x40;
    AF(o, s16, 0xE) = 0x40;
    AF(o, s16, 0xA) = -0x200;
    func_sc04_011_8018637C(o, &D_sc04_011_801DECA4);
}

s32 func_sc04_011_801809D4(u8 *arg0) {
    return AF(arg0, s16, 0x98) == 0;
}

void func_sc04_011_801809E0(u8 *arg0) {
    func_sc04_011_8017FF80();
    func_sc04_011_8018FC58(3);
    AF(arg0, s32, 0x1C) = 0xC0;
    AF(arg0, s16, 0x84) = 0x28;
}

s32 func_sc04_011_80180A20(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0_2 = AF(arg0, u16, 0x84) - 1;
    AF(arg0, u16, 0x84) = temp_v0_2;
    if ((s16) temp_v0_2 == 0x14) {
        func_8002D4C8(0x9C2, 0, arg2);
    }
    if ((s16) AF(arg0, s16, 0x84) == 0) {
        func_8002D4C8(0x9C4, 0);
        AF(arg0, u16, 0x84) = 0x28U;
    }
    temp_v0 = func_8012BEE8((s32) arg0);
    if (temp_v0 != 0) {
        func_sc04_011_80180030();
        func_sc04_011_8018FC84();
    }
    return temp_v0;
}

void func_sc04_011_80180AB4(u8 *o) {
    u16 f;
    AF(o, s16, 0xF4) = 0;
    func_sc04_011_8018332C(o, &D_sc04_011_80194470);
    func_sc04_011_80183BAC(o);
    f = D_sc04_011_801EFD40;
    AF(o, s16, 0xE0) = 0x10;
    AF(o, s16, 0xF2) = 0;
    D_sc04_011_801EFD40 = f | 0x200;
    func_8012AD44(o, 3);
    AF(o, s16, 0x34) = 3;
}

void func_sc04_011_80180B24(u8 *o) {
    typedef struct { u8 p0[0x34]; u16 st; u8 p1[0xF2 - 0x36]; u16 f2; u16 f4; } ObjS;
    SV8 s;
    u8 *pl = (u8 *)&D_80126B58;
    u8 *e;
    s16 a;
    s16 b;
    s16 n;

    if (AF(o, u16, 0x34) == 4) {
        e = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
        a = AF(AF(e, u8 *, 0x20), u16, 0x12) & 0xFFF;
        if (a >= 0x800) {
            a |= 0xF000;
        }
        func_sc04_011_80183880(o);
        b = AF(AF(e, u8 *, 0x20), u16, 0x12) & 0xFFF;
        if (b >= 0x800) {
            b |= 0xF000;
        }
        if ((a < -0x200 && b >= -0x200) || (a > -0x200 && b <= -0x200)) {
            func_8002D4C8(0x9C3, 0);
        }
        if (func_8012BEE8(o) != 0) {
            s.x = AF(pl, u16, 6);
            s.y = AF(pl, u16, 0xA) - 0x50;
            s.z = AF(pl, u16, 0xE);
            func_sc04_011_80183BD0(o);
            func_sc04_011_80183564(o, &s);
            AF(o, s16, 0xE0) = 0x10;
            AF(o, s16, 0x34) = 0;
        }
        return;
    }
    if (func_sc04_011_801833D4(o, 0) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            AF(o, u16, 0xF4)++;
            AF(o, u16, 0xF2)++;
            AF(o, u16, 0x34)++;
            func_8002D4C8(0x992, 0);
            break;
        case 1:
            {
                ObjS *q = (ObjS *)o;
                D_sc04_011_801EFD40 &= 0xFFFE;
                q->f4 += 1 + (q->f2 & 1);
                q->st++;
            }
            break;
        case 2:
            if (AF(o, s16, 0x76) == 0) {
                func_sc04_011_80180E80(o);
                return;
            }
            AF(o, s16, 0xF4) = 0;
            func_sc04_011_80183BAC(o);
            AF(o, s16, 0x34) = 3;
            break;
        case 3:
            func_sc04_011_801837C4(o);
            func_sc04_011_80183BAC(o);
            AF(o, s32, 0x1C) = 0x80;
            AF(o, s16, 0x100) = 0;
            AF(o, s16, 0x34) = 4;
            return;
        }
        func_sc04_011_80183564(o, &((SV8 *)&D_sc04_011_80194470)[AF(o, s16, 0xF4)]);
        AF(o, s16, 0xE0) = 0x10;
        return;
    }
    n = AF(o, s16, 0xE0);
    if (n != 0) {
        AF(o, s16, 0xE0) = n - 1;
    } else {
        func_sc04_011_80183A28(o);
        AF(o, s16, 0xE0) = 0x10;
    }
    if (AF(o, u16, 0x34) == 0 && !(D_sc04_011_801EFD40 & 1)) {
        e = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
        if ((u16)((AF(o, u16, 0x106) & 0xFFF) - (AF(AF(e, u8 *, 0x20), u16, 0x12) & 0xFFF) - 0x180) > 0xD00) {
            D_sc04_011_801EFD40 |= 1;
            func_8002D4C8(0x7E3, 0);
        }
    }
}

s32 func_sc04_011_80180E80(s32 arg0) {
    void *temp_v1;

    temp_v1 = D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
    AF(temp_v1, s16, 6) = 0x640;
    AF(temp_v1, s16, 0xA) = -0x980;
    AF(temp_v1, s16, 0xE) = 0x240;
    AF(AF(temp_v1, void *, 0x20), s16, 0x12) = 0x600;
    AF(AF(temp_v1, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0xFE) = 0;
    func_sc04_011_80186710();
    AF(arg0, s16, 0xF4) = 0;
    AF(arg0, s16, 0xF2) = 0;
    func_sc04_011_80183564(arg0, (s32) &D_sc04_011_80194490);
    D_sc04_011_801EFD40 &= 0xFDFF;
    return func_8012AD44(arg0, 4);
}

void func_sc04_011_80180F30(u8 *o) {
    s32 i;
    s32 *p;
    u16 n;

    if (AF(o, u16, 0x34) < 4) {
        if (func_sc04_011_801833D4(o, 0x30) != 0) {
            switch (AF(o, u16, 0x34)) {
            case 0:
                AF(o, s16, 0x84) = 0;
            case 1:
                n = AF(o, u16, 0xF4) + 1;
                AF(o, u16, 0xF4) = n;
                func_sc04_011_80183564(o, &D_sc04_011_80194490 + (s16)n * 8);
                AF(o, u16, 0x34)++;
                break;
            case 2:
                func_sc04_011_8018A018(D_sc04_011_801EFCA4);
                AF(o, s16, 0xF2) = 0x20;
                func_sc04_011_80183564(o, &D_sc04_011_80194470);
                AF(o, u16, 0x34)++;
                func_8012C588(0x3D8, o);
                break;
            case 3:
                func_sc04_011_801837C4(o);
                func_sc04_011_80183BAC(o);
                AF(o, s16, 0x100) = 0;
                AF(o, s32, 0x1C) = 8;
                AF(o, u16, 0x34)++;
                func_sc04_011_801861D4(o);
                break;
            }
        } else {
            func_sc04_011_80183A28(o);
            if (AF(o, u16, 0x34) == 1) {
                if (++AF(o, s16, 0x84) == 0x50) {
                    func_8002D4C8(0x992, 0);
                }
            }
        }
    } else {
        func_sc04_011_80183880(o);
        func_sc04_011_80185960(0, AF(D_sc04_011_801EFC4C[D_sc04_011_801EFD20], s32, 0x20) + 0x14, 0x40);
        switch (AF(o, u16, 0x34)) {
        case 4:
            if (func_8012BEE8(o) != 0) {
                AF(o, s16, 0xF2) = 0xC0;
                for (i = 0x10, p = D_sc04_011_801EFCE8; i < 0x14; i++) {
                    func_sc04_011_80189D38(*p++);
                }
                AF(o, u16, 0x34) = 5;
            }
            break;
        case 5:
            if (AF(o, s16, 0xF2) == 0) {
                func_sc04_011_801811D0(o);
            }
            break;
        }
    }
    if (AF(o, s16, 0xF2) != 0) {
        if ((AF(o, u16, 0xF2) & 0xF) == 0) {
            func_8013C9C4(&D_sc04_011_80190B88);
        }
        AF(o, u16, 0xF2)--;
    }
}

s32 func_sc04_011_801811D0(s32 arg0) {
    AF(arg0, s16, 0xF4) = 0;
    func_sc04_011_8018332C(arg0, (s32) &D_sc04_011_801944A8);
    func_sc04_011_80183BD0(arg0);
    AF(arg0, s16, 0xF2) = 0;
    func_sc04_011_80186BD8();
    return func_8012AD44(arg0, 5);
}

void func_sc04_011_80181220(u8 *o) {
    SV8 v;
    u8 *p = (u8 *) &D_80126B58;
    s16 t;

    if (func_sc04_011_801833D4(o, 0) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
        case 2:
            if (AF(o, s16, 0xF2) != 0) {
                func_sc04_011_80181390(o);
            } else {
                v.x = AF(p, u16, 0x6);
                v.y = AF(p, u16, 0xA) - 0x50;
                v.z = AF(p, u16, 0xE);
                func_sc04_011_80183564(o, &v);
                AF(o, u16, 0x34)++;
            }
            break;
        case 1:
        case 3:
            AF(o, u16, 0xF4) = (AF(o, u16, 0xF4) + 1) & 1;
            func_sc04_011_80183564(o, &D_sc04_011_801944A8 + AF(o, u16, 0xF4) * 8);
            AF(o, u16, 0x34) = (AF(o, u16, 0x34) + 1) & 3;
            func_8002D4C8(0x992, 0);
            break;
        }
    } else {
        func_sc04_011_80183A28(o);
    }
    t = AF(o, s16, 0xF2);
    if (t == 0 && AF(p, s16, 0xE) >= 0xA01 && AF(p, s16, 0xA) >= -0x73F) {
        AF(o, s16, 0xF2) = t + 1;
    }
}

void func_sc04_011_80181390(u8 *o) {
    SV8 v;

    AF(o, s16, 0xF4) = 0;
    v.x = 0x500;
    v.y = -0xE00;
    v.z = D_sc04_011_801944B8[0] + 0x200;
    func_sc04_011_8018332C(o, &v);
    func_sc04_011_80186BD8();
    func_8012AD44(o, 6);
    AF(o, u16, 0x34) = 3;
}

void func_sc04_011_801813FC(u8 *o) {
    SV8 s;
    u8 *pl = (u8 *)&D_80126B58;
    s16 n;
    u16 t;
    typedef struct { u8 pad[0x34]; s16 state; } ObjS;

    if (AF(o, u16, 0x34) != 7) {
        if (func_sc04_011_801833D4(o, 0) != 0) {
            switch (AF(o, u16, 0x34)) {
            case 0:
                func_sc04_011_80186B08(o);
                func_8013C9C4(&D_sc04_011_80190B88);
                s.x = 0x500;
                s.y = -0xB00;
                s.z = D_sc04_011_801944B8[AF(o, s16, 0xF4)] - 0x100;
                func_sc04_011_80183564(o, &s);
                ((ObjS *)o)->state = 1;
                if (func_8012BE54(D_sc04_011_801EFC4C[D_sc04_011_801EFD20]) < 0x24000) {
                    func_8002D4C8(0x992, 0);
                }
                break;
            case 1:
                if ((s16)++AF(o, u16, 0xF4) >= 8) {
                    func_sc04_011_80185FAC();
                    ((ObjS *)o)->state = 6;
                    D_sc04_011_801EFD40 |= 8;
                } else {
                    s.x = 0x500;
                    s.y = -0xB00;
                    t = D_sc04_011_801944B8[AF(o, s16, 0xF4)];
                    s.z = t + 0x580;
                    if ((s16)D_sc04_011_801944B8[AF(o, s16, 0xF4)] + 0xE0 < AF(pl, s16, 0xE)) {
                        s.z = t + 0x280;
                    }
                    func_sc04_011_80183564(o, &s);
                    AF(o, s16, 0x34) = 2;
                }
                break;
            case 2:
                s.x = 0x600;
                s.y = -0xB00;
                s.z = D_sc04_011_801944B8[AF(o, s16, 0xF4)] + 0x180;
                func_sc04_011_80183564(o, &s);
                AF(o, s16, 0x34) = 3;
                break;
            case 3:
                s.x = 0x500;
                s.y = -0x700;
                s.z = D_sc04_011_801944B8[AF(o, s16, 0xF4)];
                D_sc04_011_801EFD18 = func_sc04_011_80188E00(D_sc04_011_801EFC4C[D_sc04_011_801EFD20], &s);
                func_sc04_011_80183564(o, &s);
                AF(o, s16, 0x84) = 0;
                AF(o, s16, 0x34) = 4;
                break;
            case 4:
                func_sc04_011_80186B08(o);
                func_8013C9C4(&D_sc04_011_80190B88);
                if (D_sc04_011_801EFD18 != 0) {
                    func_801439C0(D_sc04_011_801EFD18);
                    D_sc04_011_801EFD18 = 0;
                }
                func_sc04_011_80183564(o, &D_sc04_011_801944C8);
                AF(o, s16, 0x34) = 5;
                break;
            case 5:
                func_sc04_011_801837C4(o);
                func_sc04_011_80183BAC(o);
                AF(o, s16, 0x100) = 0;
                n = ++AF(o, u16, 0xF4);
                if ((s16)D_sc04_011_801944B8[n] + 0xC0 < AF(pl, s16, 0xE) || n == 7) {
                    AF(o, s32, 0x1C) = 0x18;
                } else {
                    AF(o, s32, 0x1C) = 0x90;
                }
                AF(o, s16, 0x34) = 7;
                break;
            case 6:
                break;
            }
            return;
        }
        func_sc04_011_80183A28(o);
        if (AF(o, u16, 0x34) == 4 && AF(o, s16, 0x84) == 0) {
            if (func_8012BE54(D_sc04_011_801EFC4C[D_sc04_011_801EFD20]) < 0x24000) {
                if (D_80126B62 - AF(D_sc04_011_801EFC4C[D_sc04_011_801EFD20], s16, 0xA) < 0x180) {
                    func_8002D4C8(0x992, 0);
                    AF(o, s16, 0x84) = 1;
                }
            }
        }
    } else {
        func_sc04_011_80183880(o);
        if (func_8012BEE8(o) != 0) {
            s.x = 0x500;
            s.y = -0x700;
            s.z = D_sc04_011_801944B8[AF(o, s16, 0xF4)];
            func_sc04_011_80183BD0(o);
            func_sc04_011_80183564(o, &s);
            AF(o, s16, 0x34) = 0;
        }
    }
}

s32 func_sc04_011_80181868(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
    if (!(D_sc04_011_801EFD40 & 0x400)) {
        D_sc04_011_801EFD18 = func_sc04_011_80188E00(temp_s0, (s32) &D_sc04_011_801944D0);
    }
    AF(temp_s0, s16, 6) = 0x500;
    AF(temp_s0, s16, 0xA) = -0xD88;
    AF(temp_s0, s16, 0xE) = 0x1980;
    AF(AF(temp_s0, void *, 0x20), s16, 0x12) = 0;
    AF(AF(temp_s0, void *, 0x20), s16, 0x10) = 0x380;
    AF(arg0, s16, 0xFE) = 0x380;
    func_sc04_011_80186710();
    func_sc04_011_80183BD0(arg0);
    D_sc04_011_801EFD40 &= 0xFFF7;
    func_sc04_011_80183564(arg0, (s32) &D_sc04_011_801944D0);
    func_sc04_011_80186BD8();
    return func_8012AD44(arg0, 7);
}

void func_sc04_011_80181948(u8 *o) {
    u8 unused[8];
    u16 t = D_sc04_011_801EFD20;

    switch (AF(o, u16, 0x34)) {
    case 0:
    case 1:
        if (func_sc04_011_801833D4(o, 0) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if ((D_sc04_011_801EFD40 & 0x400) == 0) {
                func_sc04_011_80189188(D_sc04_011_801EFD14);
                func_sc04_011_80189270(D_sc04_011_801EFD14);
                D_sc04_011_801EFD40 |= 0x400;
                if (D_sc04_011_801EFD18 != 0) {
                    func_801439C0(D_sc04_011_801EFD18);
                    D_sc04_011_801EFD18 = 0;
                }
            } else {
                func_sc04_011_80189270(D_sc04_011_801EFD14);
            }
            AF(o, s16, 0xF4) = 0;
            func_sc04_011_80183564(o, &D_sc04_011_801944D8);
            func_8013C9C4(&D_sc04_011_80190B88);
            AF(o, u16, 0x34)++;
            break;
        case 1:
            AF(o, s16, 0x6) = 0;
            AF(o, s16, 0xE) = 0;
            AF(o, s16, 0xA) = 0;
            func_sc04_011_80186300(o, &D_sc04_011_801DF06C, 0);
            AF(o, u16, 0x34)++;
            break;
        }
        } else {
            func_sc04_011_80183A28(o);
        }
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            D_sc04_011_801EFD20 = 0xD;
            D_sc04_011_801EFD40 &= 0xFFDF;
            func_sc04_011_80184CCC(o, &D_sc04_011_80194C14);
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        func_sc04_011_80184DB8(t);
        if (func_sc04_011_80184F4C() != 0) {
            func_sc04_011_80181B30(o);
            func_sc04_011_80184840();
        }
        break;
    }
}

s32 func_sc04_011_80181B30(s32 arg0) {
    func_sc04_011_80183CF4(arg0);
    func_sc04_011_80185B04(1, 0x20);
    func_sc04_011_80185C04(3, 0x30);
    func_sc04_011_80186BD8();
    AF(arg0, s16, 0xF2) = 0;
    AF(arg0, s32, 0x1C) = (s32) ((AF(arg0, s16, 0xF6) * 6) + 0x10);
    return func_8012AD44(arg0, 8);
}

void func_sc04_011_80181BA0(u8 *o) {
    typedef struct { u8 pad[0x1C]; s32 f1C; u8 pad2[0x14]; u16 st; } ObjS;
    u8 unused[8];
    s16 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        func_sc04_011_80183C74(D_sc04_011_801EFC4C[D_sc04_011_801EFD20], (u16)(0x18 - AF(o, s16, 0xF6) * 4));
        func_sc04_011_80183D00(o);
        func_sc04_011_80185B5C(1);
        func_sc04_011_80185C5C(3);
        func_sc04_011_80184DB8(D_sc04_011_801EFD20);
        func_sc04_011_80185A30(0);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x6) = 0x508;
            AF(o, s16, 0xA) = -0x76C;
            AF(o, s16, 0xE) = 0x18CD;
            func_sc04_011_80186300(o, &D_sc04_011_801DF1D4, AF(AF(o, u8 *, 0x20), s16, 0x12));
            func_sc04_011_80186BF8();
            ((ObjS *)o)->st++;
            D_sc04_011_801EFD40 |= 0x800;
        }
        break;
    case 1:
        if (AF(o, s16, 0x98) == 0) {
            ((ObjS *)o)->f1C = AF(o, s16, 0xF6) * 8;
            ((ObjS *)o)->st++;
            D_sc04_011_801EFD40 &= ~0x800;
        } else {
            if (AF(o, s32, 0x94) == 0x28) {
                AF(o, s16, 0xF2) = 0x20;
            }
            if (AF(o, s32, 0x94) == 0x24) {
                func_8002D4C8(0x889, 0);
            }
            if ((u32)(AF(o, s32, 0x94) - 0x24) < 6) {
                func_sc04_011_8018AA70(D_sc04_011_801EFC4C[0]);
            }
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            D_sc04_011_801EFD40 |= 0x20;
            func_sc04_011_80184CCC(o, &D_sc04_011_80194C14);
            func_sc04_011_80183CF4(o);
            func_sc04_011_80185B04(1, 0x20);
            func_sc04_011_80185C04(3, 0x30);
            func_sc04_011_80185214(AF(AF(o, u8 *, 0x20), s16, 0x12));
            D_sc04_011_801EFD40 |= 2;
            ((ObjS *)o)->st++;
        }
        break;
    case 3:
        func_sc04_011_80184DB8(D_sc04_011_801EFD20);
        if (func_sc04_011_80184F4C() != 0) {
            D_sc04_011_801EFD40 &= 0xFFDD;
            func_sc04_011_80186BD8();
            func_sc04_011_80181EA0(o);
        }
        break;
    }
    t = AF(o, s16, 0xF2);
    if (t > 0) {
        if ((t & 0xF) == 0) {
            func_8013C9C4(&D_sc04_011_80190B88);
        }
        AF(o, s16, 0xF2)--;
    }
    if (func_sc04_011_80184884() == 0) {
        func_sc04_011_801826E4(o);
    }
}

s32 func_sc04_011_80181EA0(u8 *o) {
    u16 f;

    func_sc04_011_80184CCC(o, &D_sc04_011_80194C3C);
    AF(o, s32, 0x1C) = 0x18;
    f = D_sc04_011_801EFD40;
    AF(o, s16, 0xF2) = 5;
    D_sc04_011_801F161E = 0;
    D_sc04_011_801EFD40 = (f & 0xFFFE) | 2;
    return func_8012AD44(o, 9);
}

void func_sc04_011_80181F0C(u8 *o) {
    typedef struct { u8 pad[0x34]; u16 s34; u8 pad2[0xF2 - 0x36]; s16 sF2; } ObjS;
    u8 *pl = (u8 *)&D_80126B58;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            func_sc04_011_80184CCC(o, &D_sc04_011_80194C64);
            AF(o, s32, 0x1C) = 8;
            D_sc04_011_801EFD40 &= 0xFFFD;
            ((ObjS *)o)->s34++;
        }
        break;
    case 1:
        if (func_8012BEE8(o) != 0) {
            func_sc04_011_80184CCC(o, &D_sc04_011_80194C8C);
            AF(o, s32, 0x1C) = 3;
            D_sc04_011_801EFD40 |= 1;
            ((ObjS *)o)->s34++;
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            func_sc04_011_80183DF8();
            AF(o, s32, 0x1C) = (AF(o, s16, 0xF6) - 1) * 2 + 1;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (func_8012BEE8(o) != 0) {
            D_sc04_011_801EFD40 &= 0xFFFE;
            if (((ObjS *)o)->sF2 != 0) {
                ((ObjS *)o)->sF2--;
                AF(o, s32, 0x1C) = 3;
                AF(o, u16, 0x34) = 0;
            } else {
                AF(o, s32, 0x1C) = 0x10;
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 4:
        if (func_8012BEE8(o) != 0) {
            if (D_sc04_011_801F161E < 2) {
                func_sc04_011_8018214C(o, AF(pl, s16, 6) >= 0x509);
                return;
            }
            func_sc04_011_80184CCC(o, &D_sc04_011_80194C14);
            func_sc04_011_80185B04(1, 0x20);
            func_sc04_011_80185C04(3, 0x30);
            func_8012AD44(o, 8);
        }
        break;
    }
    func_sc04_011_80183C74(D_sc04_011_801EFC4C[D_sc04_011_801EFD20], 8);
    func_sc04_011_80183D00(o);
    func_sc04_011_80184DB8(D_sc04_011_801EFD20);
    func_sc04_011_80185A30(0);
}

void func_sc04_011_8018214C(u8 *o, s32 a) {
    if (a < 0) {
        AF(o, s16, 0xE2) = rand() & 1;
    } else {
        AF(o, s16, 0xE2) = a & 1;
    }
    func_80132EC4(D_sc04_011_801944E8[AF(o, s16, 0xE2) * 3], 2);
    D_sc04_011_801EFD40 |= 0x20;
    func_sc04_011_80184CCC(o, &D_sc04_011_80194C14);
    func_8012AD44(o, 0xA);
}

void func_sc04_011_801821E4(u8 *o) {
    SV8 a;
    SV8 b;
    s16 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        func_sc04_011_80185960(0, AF(o, u8 *, 0x20) + 0x12, 0x40);
        if (AF(AF(o, u8 *, 0x20), s16, 0x12) == 0 && func_sc04_011_80184F4C() != 0) {
            AF(o, s16, 0x6) = 0x508;
            AF(o, s16, 0xA) = -0x76C;
            AF(o, s16, 0xE) = 0x18CD;
            func_sc04_011_80186300(o, D_sc04_011_801944E8[AF(o, s16, 0xE2) * 3], AF(AF(o, u8 *, 0x20), s16, 0x12));
            func_sc04_011_80188560(D_sc04_011_801EFC4C[0], D_sc04_011_801EFC48);
            func_sc04_011_80185F1C();
            AF(o, u16, 0x34)++;
        } else {
            func_sc04_011_80185214(AF(AF(o, u8 *, 0x20), s16, 0x12));
            func_sc04_011_80184DB8(D_sc04_011_801EFD20);
        }
        break;
    case 1:
        v = AF(o, s16, 0x98);
        if (v != 0) {
            if (v == 1) {
            if (AF(o, s32, 0x94) == 0x29) {
                AF(o, s32, 0xD0) = func_8012C588(0x2B6, D_sc04_011_801EFC4C[0]);
                func_8002D4C8(0x88B, 0);
            } else if (AF(o, s32, 0x94) == 0x75) {
                if (AF(o, s32, 0xD0) != 0) {
                    func_sc04_011_801873D8(AF(o, s32, 0xD0));
                    func_sc04_011_80185D04(1);
                }
            }
            }
        } else {
            func_sc04_011_801823C0(o);
        }
        break;
    }
    b.y = 0x20;
    a.y = 0x20;
    b.x = 0;
    a.x = 0;
    a.z = 0;
    b.z = 0x100;
    func_sc04_011_80184978(D_sc04_011_801EFC4C[0], &a, &b);
}

s32 func_sc04_011_801823C0(s32 arg0) {
    func_sc04_011_8018637C(arg0, (*(s32 *)&D_sc04_011_801944EC[(AF(arg0, s16, 0xE2) * 0xC)]));
    func_sc04_011_80186BF8();
    return func_8012AD44(arg0, 0xB);
}

void func_sc04_011_80182420(u8 *o) {
    s16 n;
    s16 c;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((s16)func_sc04_011_80184884() == 0) {
            func_sc04_011_80182630(o);
            break;
        }
        if (AF(o, s16, 0x98) != 0) break;
        func_sc04_011_8018637C(o, D_sc04_011_801944F0[AF(o, s16, 0xE2)].x);
        AF(o, s16, 0xF2) = 0;
        AF(o, u16, 0x34)++;
        break;
    case 1:
        if ((s16)func_sc04_011_80184884() == 0) {
            func_sc04_011_80182630(o);
            break;
        }
        if ((AF(o, u16, 0x72) & 0x400) && AF(o, s32, 0x94) == 0) {
            n = AF(o, u16, 0xF6) - 1;
            c = AF(o, u16, 0xF2) + 1;
            AF(o, s16, 0xF2) = c;
            if (n <= 0) n = 1;
            if (c == n) {
                func_sc04_011_80186BD8();
                func_sc04_011_80184CCC(o, &D_sc04_011_80194C3C);
                AF(o, u16, 0x34)++;
                break;
            }
        }
        if (AF(o, s32, 0x94) == 0xC) func_sc04_011_8018BD18(D_sc04_011_801EFC4C[0]);
        break;
    case 2:
        func_sc04_011_80184DB8(D_sc04_011_801EFD20);
        if (func_sc04_011_80184F4C() == 0) break;
        func_sc04_011_80184CCC(o, &D_sc04_011_80194C14);
        func_sc04_011_80183CF4(o);
        func_sc04_011_80185B04(1, 0x20);
        func_sc04_011_80185C04(3, 0x30);
        func_sc04_011_80186BD8();
        AF(o, s16, 0xF2) = 0;
        AF(o, s32, 0x1C) = AF(o, s16, 0xF6) * 6 + 0x10;
        func_8012AD44(o, 8);
        break;
    }
}

void func_sc04_011_80182630(u8 *o) {
    u8 *p;
    void **w;

    AF(o, u16, 0xE2) |= rand() & 2;
    func_sc04_011_8018637C(o, D_sc04_011_80194500[AF(o, s16, 0xE2)][0]);
    w = &D_sc04_011_801EFC54;
    p = (u8 *)func_sc04_011_8018B948(*w);
    AF(o, u8 *, 0xD0) = p;
    if (p != 0) {
        func_sc04_011_8018B9D4((s32)*w, (s32)p);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x1400;
    }
    func_8012AD44(o, 0xC);
}

void func_sc04_011_801826E4(u8 *o) {
    u8 *p;
    void **w;

    AF(o, s16, 6) = 0x508;
    AF(o, s16, 0xA) = -0x76C;
    AF(o, s16, 0xE) = 0x18CD;
    AF(o, s16, 0xE2) = 0;
    if ((AF(AF(o, u8 *, 0x20), s16, 0x12) & 0xFFF) < 0x800) {
        AF(o, s16, 0xE2) = 1;
    }
    AF(o, u16, 0xE2) |= rand() & 2;
    func_sc04_011_80186300(o, D_sc04_011_80194500[AF(o, s16, 0xE2)][0], 0);
    w = &D_sc04_011_801EFC54;
    p = (u8 *)func_sc04_011_8018B948(*w);
    AF(o, u8 *, 0xD0) = p;
    if (p != 0) {
        func_sc04_011_8018B9D4((s32)*w, (s32)p);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x1400;
    }
    func_8012AD44(o, 0xC);
}

void func_sc04_011_801827DC(u8 *o) {
    u8 *t;

    switch (AF(o, u16, 0x34)) {
    case 0:
    case 1:
        if (AF(o, s16, 0x98) == 0) {
            func_sc04_011_8018637C(o, D_sc04_011_80194500[AF(o, s16, 0xE2)][AF(o, u16, 0x34) + 1]);
            AF(o, u16, 0x34)++;
        }
        func_sc04_011_8018B9D4(D_sc04_011_801EFC54, AF(o, s32, 0xD0));
        break;
    case 2:
        if (AF(o, s32, 0x94) == 11) {
            func_sc04_011_80186C1C();
            AF(o, s16, 0x76) = 100;
            AF(o, s32, 0x1C) = 0x80;
            AF(o, s16, 0xF2) = 1;
            AF(o, s16, 0xE2) = AF(o, s16, 0xE2) >> 1;
            func_8013C9C4(&D_sc04_011_80190B88);
            func_sc04_011_8018AC00(D_sc04_011_801EFC4C[0]);
            func_sc04_011_8018AC00(D_sc04_011_801EFC54);
            func_sc04_011_8018AC00(D_sc04_011_801EFC5C);
            func_sc04_011_8018AC00(D_sc04_011_801EFC60);
            func_sc04_011_8018AC00(*(void **)&D_sc04_011_801EFC64);
            func_sc04_011_8018AC00(D_sc04_011_801EFC68);
            func_8002D4C8(0x907, 0);
            AF(o, u16, 0x34)++;
        }
        func_sc04_011_8018B9D4(D_sc04_011_801EFC54, AF(o, s32, 0xD0));
        break;
    case 3:
        if (AF(o, s16, 0x76) == 0) {
            *(s16 *)&D_sc04_011_801EFD28 = --AF(o, s16, 0xF6) * 100;
            func_sc04_011_80183F10();
            t = AF(o, u8 *, 0xD0);
            if (t != 0) {
                AF(t, s16, 0x18) = AF(t, s16, 0x1A) = 0x800;
            }
            func_sc04_011_8018BA9C();
            AF(o, u16, 0x34)++;
            if (AF(o, s16, 0xF6) == 0) {
                u16 d = D_sc04_011_801EFD40;
                AF(o, s32, 0x1C) = 8;
                D_sc04_011_801EFD40 = d | 0x100;
            } else {
                AF(o, s32, 0x1C) = 0x10;
            }
        } else {
            if (func_8012BEE8(o) != 0) {
                func_sc04_011_80182AF8(o);
                break;
            }
            if ((AF(o, s32, 0x1C) & 0xF) == 0 && AF(o, s16, 0xF2) != 0) {
                AF(o, s16, 0xF2)--;
                func_8013C9C4(&D_sc04_011_80190B88);
            }
            func_sc04_011_8018B9D4(D_sc04_011_801EFC54, AF(o, s32, 0xD0));
            if (!(AF(o, s32, 0x1C) & 1)) {
                func_sc04_011_80183EA8();
            }
        }
        break;
    case 4:
        if (func_8012BEE8(o) != 0) {
            if (AF(o, s16, 0xF6) == 0) {
                func_sc04_011_80182D34(o);
            } else {
                func_sc04_011_80182AF8(o);
            }
        } else {
            t = AF(o, u8 *, 0xD0);
            if (t != 0) {
                AF(t, u16, 0x1A) = AF(t, u16, 0x18) = AF(t, u16, 0x18) + 0x600;
            }
            func_sc04_011_8018BAC4();
        }
        break;
    }
}

s32 func_sc04_011_80182AF8(s32 arg0) {
    func_sc04_011_80186EBC(arg0);
    func_sc04_011_80184840();
    func_sc04_011_80186BD8();
    func_sc04_011_8018637C(arg0, D_sc04_011_80194530[AF(arg0, s16, 0xE2)]);
    return func_8012AD44(arg0, 0xD);
}

s32 func_sc04_011_80182B5C(s32 arg0) {
    AF(arg0, s16, 0xF4) = 0;
    func_sc04_011_8018332C(arg0, (s32) &D_sc04_011_80194538);
    func_sc04_011_80186908();
    D_sc04_011_801EFD40 |= 0x20;
    return func_8012AD44(arg0, 0xE);
}

void func_sc04_011_80182BBC(u8 *o) {
    u8 unused[8];
    u8 *e;

    switch (AF(o, u16, 0x34)) {
    case 0:
    case 1:
        if (func_sc04_011_801833D4(o, 0) != 0) {
            AF(o, s16, 0xF4)++;
            func_sc04_011_80183564(o, &D_sc04_011_80194538 + AF(o, s16, 0xF4) * 8);
            AF(o, u16, 0x34)++;
        } else {
            func_sc04_011_80183A28(o);
        }
        break;
    case 2:
        if (func_sc04_011_801833D4(o, 0) != 0) {
            e = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
            if (!(D_sc04_011_801EFD40 & 0x400)) {
                D_sc04_011_801EFD18 = func_sc04_011_80188E00(e, &D_sc04_011_801944D0);
            }
            AF(e, s16, 6) = 0x500;
            AF(e, s16, 0xA) = -0xD88;
            AF(e, s16, 0xE) = 0x1980;
            AF(AF(e, u8 *, 0x20), s16, 0x12) = 0;
            AF(o, s16, 0xFE) = AF(AF(e, u8 *, 0x20), s16, 0x10) = 0x380;
            func_sc04_011_80186710();
            func_sc04_011_80183BD0(o);
            D_sc04_011_801EFD40 &= 0xFFF7;
            func_sc04_011_80183564(o, &D_sc04_011_801944D0);
            func_sc04_011_80186BD8();
            func_8012AD44(o, 7);
        } else {
            func_sc04_011_80183A28(o);
        }
        break;
    }
}

s32 func_sc04_011_80182D34(s32 arg0) {
    func_80132EC4(*(s32 *)&D_sc04_011_80194554[(AF(arg0, s16, 0xE2) * 0xC)], 2);
    func_sc04_011_8018637C(arg0, *(s32 *)&D_sc04_011_80194550[(AF(arg0, s16, 0xE2) * 0xC)]);
    func_sc04_011_80186EBC(arg0);
    func_8012AD44(arg0, 0xF);
    func_800D0C48(1);
    return func_8002AC00(0x18);
}

void func_sc04_011_80182DCC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) != 0) {
            break;
        }
        func_sc04_011_8018637C(o, *(s32 *)&D_sc04_011_80194554[AF(o, s16, 0xE2) * 0xC]);
        AF(o, s16, 0xF2) = 0;
        AF(o, s16, 0x10A) = 0;
        func_80178B18(o, &D_sc04_011_801945A4);
        AF(o, u16, 0x34)++;
        break;
    case 1:
        AF(o, s16, 0x6) += rsin(AF(o, s16, 0xF2)) >> 9;
        AF(o, s16, 0xF2) += 0x400;
        if (AF(o, s16, 0x98) != 0) {
            break;
        }
        func_sc04_011_8018637C(o, *(s32 *)&D_sc04_011_80194558[AF(o, s16, 0xE2) * 0xC]);
        AF(o, u16, 0x34)++;
        func_sc04_011_8018B5E4(D_sc04_011_801EFC4C);
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            func_sc04_011_80185D04(0);
            AF(o, s32, 0x1C) = 0x10;
            AF(o, u16, 0x34)++;
        }
        func_sc04_011_8018B744(D_sc04_011_801EFC4C);
        break;
    case 3:
        if (func_8012BEE8(o) != 0) {
            func_sc04_011_8018B1B4(D_sc04_011_801EFC4C);
            AF(o, s32, 0x1C) = 0x38;
            AF(o, u16, 0x34)++;
        }
        func_sc04_011_8018B744(D_sc04_011_801EFC4C);
        break;
    case 4:
        func_sc04_011_8018B2F8(D_sc04_011_801EFC4C, 0);
        func_sc04_011_8018B744(D_sc04_011_801EFC4C);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x10A) = 1;
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        if (AF(o, s16, 0x10A) == 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 6:
        func_sc04_011_80186D58(o);
        if (func_sc04_011_80186DCC(o) != 0) {
            if (D_sc04_011_801EFD18 != 0) {
                func_801439C0(D_sc04_011_801EFD18);
                D_sc04_011_801EFD18 = 0;
            }
            AF(o, u16, 0x34)++;
        }
        break;
    case 7:
        break;
    }
    func_80178970(o);
}

s32 func_sc04_011_80183008(void) {
    return 0;
}

s16 func_sc04_011_80183010(u8 *arg0) {
    return AF(arg0, s16, 0x10A);
}

void func_sc04_011_8018301C(u8 *arg0) {
    func_sc04_011_80186C40();
    AF(arg0, s16, 0xF2) = 0x20;
    func_8002D4C8(0x8C2, 0);
}

s32 func_sc04_011_80183058(u8 *o) {
    func_sc04_011_8018B2F8(D_sc04_011_801EFC4C, 1);
    func_sc04_011_8018B830(D_sc04_011_801EFC4C);
    if (AF(o, s16, 0xF2) < 0x60) {
        AF(o, s16, 0xF2) += 1;
    } else {
        AF(o, s16, 0xF2) += 8;
    }
    if (AF(o, s16, 0xF2) >= 0x100) AF(o, s16, 0xF2) = 0xFF;
    func_80016450(AF(o, u8, 0xF2), 1);
    if (AF(o, s16, 0xF2) == 0xFF) {
        if (D_sc04_011_801EFD14 != 0) {
            func_sc04_011_80189410(D_sc04_011_801EFD14);
            D_sc04_011_801EFD14 = 0;
        }
        func_sc04_011_8018B8C0(D_sc04_011_801EFC4C);
        D_sc04_011_801EFD18 = func_80143970(o);
        func_sc04_011_8017CC2C();
        return 1;
    }
    return 0;
}

void func_sc04_011_8018314C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 0x84) = 0;
}

s32 func_sc04_011_8018315C(u8 *o) {

    func_80016450(AF(o, u8, 0xF2), 1);
    if (AF(o, s32, 0x1C) != 0) {
        if (--AF(o, s32, 0x1C) != 0) {
            return 0;
        }
        func_sc04_011_8018BC08();
        if (D_sc04_011_801EFD1C != 0) {
            func_8012C218(D_sc04_011_801EFD1C);
            D_sc04_011_801EFD1C = 0;
        }
        func_sc04_011_80186CD8((s32)o);
        AF(o, s16, 0x10A) = 0;
        if (AF(o, s32, 0x1C) != 0) {
            return 0;
        }
    }
    if (AF(o, s16, 0x84) == 0) {
        if (func_8001AAA0(0x68) != 0) {
            AF(o, s16, 0x84) = 1;
        }
    }
    if (AF(o, s16, 0xF2) != 0) {
        AF(o, s16, 0xF2) -= 2;
        if (AF(o, s16, 0xF2) < 0) {
            AF(o, s16, 0xF2) = 0;
        }
    }
    if (AF(o, s16, 0xF2) != 0 || AF(o, s16, 0x84) == 0) {
        return 0;
    }
    return 1;
}

extern s32 func_80174774();
s32 func_sc04_011_80183258(u8 *o) {
    if (func_80174774() != 0) {
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_sc04_011_80186EBC(o);
        return 1;
    }
    return 0;
}

void func_sc04_011_801832B4(void) {
    func_800D1724((s32) &D_sc04_011_80194270);
}

void func_sc04_011_801832DC(u8 *arg0) {
    D_sc04_011_8019466C[AF(arg0, u16, 2)]();
    func_sc04_011_80183E20((s32) arg0);
}

void func_sc04_011_8018332C(u8 *o, s32 p) {
    u8 *e;

    e = (u8 *)D_sc04_011_801EFC4C[0];
    D_sc04_011_801EFD20 = 0;
    D_sc04_011_801EFD40 |= 4;
    if (D_sc04_011_801EFD40 & 0x10) {
        func_sc04_011_801863D4();
        func_sc04_011_801863B4(o);
    }
    func_sc04_011_80184ABC(D_sc04_011_801EFD20);
    func_sc04_011_80183564((s32)o, p);
    AF(o, s16, 0xFE) = AF(AF(e, u8 *, 0x20), s16, 0x10);
    AF(o, s16, 0x102) = 0;
    AF(o, s16, 0x104) = 0;
}

s32 func_sc04_011_801833D4(u8 *o, s32 d0) {
    s16 d = d0;
    u8 unused[8];
    V3 v;
    u8 *e;
    u16 n;
    u16 k;
    s32 r;

    n = D_sc04_011_801EFD20;
    r = 0;
    e = (u8 *)D_sc04_011_801EFC4C[n];
    if (D_sc04_011_801EFD40 & 4) {
        func_sc04_011_801852BC(n);
        func_sc04_011_801853D0(n);
        func_sc04_011_80185648(n);
        v.x = v.y = 0;
        if (D_sc04_011_801EFD40 & 0x20) {
            v.z = -0x280000;
        } else {
            v.z = -0x140000;
        }
        ApplyMatrixLV(AF(e, u8 *, 0x20) + 0x34, &v, &v);
        AF(e, s32, 4) += v.x;
        AF(e, s32, 8) += v.y;
        AF(e, s32, 0xC) += v.z;
        AF(AF(e, u8 *, 0x20), s16, 0x14) += d;
        func_sc04_011_80183BF0(o);
        AF(AF(e, u8 *, 0x20), s16, 0x10) = AF(o, u16, 0xFE) + AF(o, u16, 0x102);
        if (func_sc04_011_801836D4(o, e) != 0) {
            r = 1;
        } else {
            k = 0x20;
            if (D_sc04_011_801EFD40 & 0x20) k = 0x40;
            func_sc04_011_80185960(AF(o, s16, 0x106), AF(e, u8 *, 0x20) + 0x12, k);
            func_sc04_011_80185960(AF(o, s16, 0x100), o + 0xFE, k);
        }
    }
    return r;
}

s32 func_sc04_011_80183564(s32 arg0, s32 arg1) {
    AF(arg0, u16, 0xE4) = (u16) AF(arg1, u16, 0);
    AF(arg0, u16, 0xE6) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 0xE8) = (u16) AF(arg1, u16, 4);
    func_sc04_011_80183A28(arg0, arg1);
    return ((s32 (*)())func_sc04_011_801835B0)(arg0);
}

void func_sc04_011_801835B0(u8 *o) {
    u8 *e;
    s16 *s;
    s16 *d;
    s16 m;
    s16 v;
    s16 tx, ty, tz;

    d = (s16 *)(o + 0xEC);
    e = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
    s = (s16 *)(o + 0xE4);
    if (s != 0) {
        d[0] = s[0] - AF(e, u16, 0x6);
        d[1] = s[1] - AF(e, u16, 0xA);
        d[2] = s[2] - AF(e, u16, 0xE);
    } else {
        d[0] = d[1] = d[2] = 0;
    }
    AF(o, s16, 0xEA) = 0x1E0;
    tx = d[0]; if (tx < 0) m = -tx; else m = tx;
    AF(o, s16, 0xE2) = 0;
    ty = d[1]; if (ty < 0) v = -ty; else v = ty;
    if (m < v) {
        m = v;
        AF(o, s16, 0xE2) = 1;
    }
    tz = d[2]; if (tz < 0) v = -tz; else v = tz;
    if (m < v) {
        AF(o, s16, 0xE2) = 2;
    }
}

s32 func_sc04_011_801836D4(u8 *o, u8 *e) {
    s16 dv[3];
    u8 unused[0x18];
    s32 lim;
    s32 l2;
    s16 d;
    u16 ov;
    s32 b;
    d = AF(o, s16, 0xEA);
    if (d != 0) AF(o, s16, 0xEA) = d - 1;
    switch (AF(o, s16, 0xE2)) {
    case 0:
        ov = AF(o, u16, 0xE4);
        d = AF(e, u16, 0x6);
        d = ov - d;
        dv[0] = d;
        lim = AF(o, s16, 0xEC);
        break;
    case 1:
        ov = AF(o, u16, 0xE6);
        d = AF(e, u16, 0xA);
        d = ov - d;
        dv[1] = d;
        lim = AF(o, s16, 0xEE);
        break;
    case 2:
        ov = AF(o, u16, 0xE8);
        d = AF(e, u16, 0xE);
        d = ov - d;
        dv[2] = d;
        lim = AF(o, s16, 0xF0);
        break;
    default:
        return AF(o, s16, 0xEA) == 0;
    }
    if (lim == 0) return 1;
    l2 = (s16)lim;
    if (d == 0 || (s16)(d ^ l2) < 0) return 1;
    return AF(o, s16, 0xEA) == 0;
}

void func_sc04_011_801837C4(u8 *o) {
    u8 *e = (u8 *)D_sc04_011_801EFC4C[0];

    D_sc04_011_801EFD20 = 0;
    D_sc04_011_801EFD40 |= 4;
    if (D_sc04_011_801EFD40 & 0x10) {
        func_sc04_011_801863D4();
        func_sc04_011_801863B4(o);
    }
    func_sc04_011_80184ABC(D_sc04_011_801EFD20);
    AF(o, u16, 0xFE) = AF(AF(e, u8 *, 0x20), u16, 0x10);
    AF(o, s16, 0x102) = 0;
    AF(o, s16, 0x104) = 0;
    AF(AF(e, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    AF(o, u16, 0x106) = AF(AF(e, u8 *, 0x20), u16, 0x12);
}

void func_sc04_011_80183880(u8 *o) {
    V3 v;
    u8 *e;
    u16 n;
    s32 d;

    n = D_sc04_011_801EFD20;
    e = (u8 *)D_sc04_011_801EFC4C[n];
    if (!(D_sc04_011_801EFD40 & 4)) return;
    func_sc04_011_801852BC(n);
    func_sc04_011_801853D0(n);
    func_sc04_011_80185648(n);
    v.x = v.y = 0;
    if (D_sc04_011_801EFD40 & 0x20) {
        v.z = -0x280000;
    } else {
        v.z = -0x140000;
    }
    ApplyMatrixLV(AF(e, u8 *, 0x20) + 0x34, &v, &v);
    AF(e, s32, 4) += v.x;
    AF(e, s32, 8) += v.y;
    AF(e, s32, 0xC) += v.z;
    func_sc04_011_80183BF0(o);
    AF(AF(e, u8 *, 0x20), s16, 0x10) = AF(o, u16, 0xFE) + AF(o, u16, 0x102);
    func_sc04_011_80185960(AF(o, s16, 0x100), o + 0xFE, 0x20);
    d = 0x20;
    if (D_sc04_011_801EFD40 & 0x20) d = 0x40;
    if (AF(AF(e, u8 *, 0x20), s16, 0x12) < AF(o, s16, 0x106) + 0x1000) {
        AF(AF(e, u8 *, 0x20), s16, 0x12) += d;
        if (AF(AF(e, u8 *, 0x20), s16, 0x12) >= AF(o, s16, 0x106) + 0x1000) {
            AF(AF(e, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0x106) + 0x2000;
        }
    } else {
        AF(AF(e, u8 *, 0x20), s16, 0x12) -= d;
        if (AF(AF(e, u8 *, 0x20), s16, 0x12) <= AF(o, s16, 0x106) + 0x1000) {
            AF(AF(e, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0x106);
        }
    }
}

void func_sc04_011_80183A28(u8 *o) {
    WMtx m;
    SV8 s;
    u8 *e;

    m = D_800AE620;
    e = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD20];
    m.t[0] = AF(e, s16, 6);
    m.t[1] = AF(e, s16, 0xA);
    m.t[2] = AF(e, s16, 0xE);
    RotMatrixZ(AF(AF(e, u8 *, 0x20), s16, 0x14), &m);
    func_8012F038(&m, o + 0xE4, &s);
    AF(o, s16, 0x106) = (-ratan2(s.z, s.x) - 0x400) & 0xFFF;
    m = D_800AE620;
    RotMatrixY(AF(o, s16, 0x106), &m);
    func_8012F038(&m, &s, &s);
    AF(o, s16, 0x100) = (ratan2(s.z, s.y) + 0x400) & 0xFFF;
}

void func_sc04_011_80183BAC(u8 *o) {
    u16 f = D_sc04_011_801EFD40;
    AF(o, s16, 0x104) = -0x20;
    D_sc04_011_801EFD40 = f | 0x40;
}

void func_sc04_011_80183BD0(u8 *o) {
    u16 f = D_sc04_011_801EFD40;
    AF(o, s16, 0x104) = 0;
    D_sc04_011_801EFD40 = f & 0xFFBF;
}

void func_sc04_011_80183BF0(s32 arg0, s32 arg1) {
    u16 temp_v0;

    if (D_sc04_011_801EFD40 & 0x40) {
        temp_v0 = AF(arg0, u16, 0x102) + AF(arg0, u16, 0x104);
        AF(arg0, u16, 0x102) = temp_v0;
        if ((s16) temp_v0 < -0x17F) {
            AF(arg0, u16, 0x104) = 0x20U;
        }
        if ((s16) AF(arg0, u16, 0x102) >= 0x180) {
            AF(arg0, s16, 0x104) = -0x20U;
        }
    } else {
        func_sc04_011_80185960(0, arg0 + 0x102, 0x20);
    }
}

s32 func_sc04_011_80183C74(s32 arg0, s32 arg1) {
    s32 var_a0;

    var_a0 = func_8012B6D4(arg0 + 4, (s32) &D_80126B5C) & 0xFFF;
    if (var_a0 < 0x800) {
        if (var_a0 >= 0x221) {
            var_a0 = 0x220;
        }
    } else if (var_a0 < 0xDE0) {
        var_a0 = 0xDE0;
    }
    return func_sc04_011_80185960(var_a0, AF(D_sc04_011_801EFC48, s32, 0x20) + 0x12, arg1 & 0xFFFF);
}

void func_sc04_011_80183CF4(s32 arg0) {
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0xE2) = 0;
}

void func_sc04_011_80183D00(u8 *o) {
    s16 a[5];
    u8 *p;
    s32 i;

    p = AF(o, u8 *, 0xCC);
    AF(o, s16, 0x108) = rsin(AF(o, s16, 0xE2) += 0x20) >> 3;
    a[4] = 0;
    a[3] = AF(o, s16, 0x108) / 4 * 3;
    a[2] = -(AF(o, s16, 0x108) >> 1);
    a[1] = AF(o, s16, 0x108);
    for (i = 1; i < 5; i++) {
        func_sc04_011_80185A18(p[i * 8 + 6], (s16)(a[i] + (AF(p, u16, i * 8 + 2) + AF(AF(o, u8 *, 0x20), u16, 0x12))));
        if (AF(p, s16, i * 8 + 6) & 0x8000) break;
    }
}

s32 func_sc04_011_80183DF8(void) {
    return func_8012C588(0x2A9, (*(s32 *)D_sc04_011_801EFC4C));
}

void func_sc04_011_80183E20(u8 *o) {
    u16 f = D_sc04_011_801EFD40;

    if (f & 0x80) {
        s32 v;
        AF(o, s16, 0x76) -= AF(o, s16, 0x60);
        AF(o, s16, 0x60) = 0;
        v = AF(o, s16, 0x76);
        D_sc04_011_801EFD40 = f & 0xFF7F;
        if (v < 0) {
            AF(o, s16, 0x76) = 0;
        }
    }
    if (D_sc04_011_801EFD24 != 0) {
        D_sc04_011_801EFD24--;
        if (D_sc04_011_801EFD24 == 0) {
            func_sc04_011_80186AB8();
        }
    }
}

s32 func_sc04_011_80183EA8(void) {
    SV8 v;
    void *p;

    p = D_sc04_011_801EFC54;
    v.x = (rand() & 0x3F) - 0x20;
    v.y = 0x80;
    v.z = (rand() & 0x3F) - 0x20;
    return func_sc04_011_8018B0B0(p, &v, 0, 8);
}

s32 func_sc04_011_80183F10(void) {
    SV8 s;
    WMtx m;
    V4 v;
    V4 r;
    void *w;
    s32 i;

    w = D_sc04_011_801EFC54;
    s.x = 0;
    s.y = 0x80;
    s.z = 0;
    v.x = 0;
    v.y = 0xE0000;
    v.z = -0xE0000;
    for (i = 0; i < 8; i++) {
        m = D_800AE620;
        RotMatrixY(i << 9, &m);
        ApplyMatrixLV(&m, &v, &r);
        func_sc04_011_8018B0B0(w, &s, &r, 0x10);
    }
    v.x = 0;
    v.y = 0x80000;
    v.z = -0x120000;
    for (i = 0; i < 8; i++) {
        m = D_800AE620;
        RotMatrixY((i << 9) + 0x100, &m);
        ApplyMatrixLV(&m, &v, &r);
        func_sc04_011_8018B0B0(w, &s, &r, 0x10);
    }
}

void func_sc04_011_801840B8(void) {
    func_80175454();
}

void func_sc04_011_801840D8(void) {
    func_80175414();
}

void func_sc04_011_801840F8(u8 *o) {
    u16 n;
    u16 m;
    u16 *tb;
    u8 *d;
    s16 *s;
    u16 *p;
    u16 *q;
    s32 a;

    n = AF(o, u16, 0x70);
    tb = D_sc04_011_801DEC8C;
    s = (s16 *)(o + 0x104);
    a = func_8012C1B8();
    AF(o, s32, 0x20) = a;
    if (a == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(a, D_sc04_011_80194754[n]);
    AF(o, s16, 0x102) = D_sc04_011_8019470C[n];
    if (D_sc04_011_80194724[n] != 0 && (d = AF(o, u8 *, 0x64)) != 0) {
        func_8001C1E4(AF(o, s32, 0x20), AF(d, s32, 0x20));
        AF(o, u16, 0x86) |= 8;
        AF(o, s16, 0x6) = tb[n * 6 + 0] - tb[(n - 1) * 6 + 0];
        AF(o, s16, 0xA) = tb[n * 6 + 1] - tb[(n - 1) * 6 + 1];
        AF(o, s16, 0xE) = tb[n * 6 + 2] - tb[(n - 1) * 6 + 2];
        AF(AF(o, u8 *, 0x20), s16, 0x10) = tb[n * 6 + 3] - tb[(n - 1) * 6 + 3];
        AF(AF(o, u8 *, 0x20), s16, 0x12) = tb[n * 6 + 4] - tb[(n - 1) * 6 + 4];
        AF(AF(o, u8 *, 0x20), s16, 0x14) = tb[n * 6 + 5] - tb[(n - 1) * 6 + 5];
    } else {
        m = n + 1;
        if (D_sc04_011_80194724[m] != 0) {
            m = n + 2;
        }
        if (m < 21) {
            s[0] = tb[m * 6 + 0] - tb[n * 6 + 0];
            s[1] = tb[m * 6 + 1] - tb[n * 6 + 1];
            s[2] = tb[m * 6 + 2] - tb[n * 6 + 2];
        }
        AF(o, s16, 0x6) = 0;
        AF(o, s16, 0xA) = 0;
        AF(o, s16, 0xE) = 0;
        AF(o, s32, 0x58) = (s32)(D_sc04_011_801946AC + AF(o, s16, 0x102) * 16) | 0x40000000;
    }
    func_sc04_011_80184414(o);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
    AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc04_011_80194348;
    AF(o, u8, 0x75) = 0x15;
    switch (n) {
    case 0:
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc04_011_801947A8;
        AF(o, u16, 0x5C) = 0x8000;
        AF(o, s32, 0xB4) = 0;
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0xAE) = -5;
        AF(o, s32, 0xC4) |= 2;
        break;
    case 2:
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc04_011_801947C0;
        AF(o, u16, 0x5C) = 0x8000;
        AF(o, s32, 0xB4) = 0;
        AF(o, u8, 0xC1) = 0;
        AF(o, s32, 0xC4) |= 2;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, s16, 0xAE) = -1;
        break;
    default:
        AF(o, s16, 0xAE) = -1;
        AF(o, u16, 0x5C) = 0xC000;
        break;
    }
    func_sc04_011_80185D9C((s32)o);
}

extern void func_sc04_011_80185FF4();
void func_sc04_011_80184414(u8 *o) {
    if (AF(o, s16, 0x70) == 1) {
        func_sc04_011_80185FF4(o);
    }
    func_8012AD44(o, 1);
}

void func_sc04_011_8018445C(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    D_sc04_011_801947D8[AF(arg0, u16, 2)]();
    if ((D_sc04_011_801EFD40 & 8) || (AF(arg0, u16, 0x86) & 0x10)) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
}

void func_sc04_011_80184504(u8 *o) {
    u8 *w = D_sc04_011_801EFC54;
    u8 *p;
    s16 t;
    s16 v;

    AF(o, u8, 0xC1) = 1;
    AF(o, s32, 0x1C) = 4;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, s16, 0x76) != 0) {
        t = AF(o, s16, 0x76) - AF(o, u16, 0x60);
        AF(o, s16, 0x76) = t;
        if (t < 0) {
            AF(o, s16, 0x76) = 0;
        }
        v = 0x1000 - (0x240 - AF(o, s16, 0x76)) * 3;
        p = AF(w, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = v;
    }
    func_sc04_011_80186940(o, AF(o, s16, 0x60), 1);
}

void func_sc04_011_801845A8(u8 *o) {
    s16 s;
    void *g;

    if (func_8012BEE8(o) != 0) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
    }
    func_sc04_011_80185DDC(o);
    if (AF(o, s16, 0x70) == 1) {
        func_sc04_011_80186020(o);
    }
    if (AF(o, u16, 0x86) & 0x10) {
        return;
    }
    if (!(D_sc04_011_801EFD40 & 4)) {
        g = D_sc04_011_801EFC48;
        AF(o, s16, 6) = AF(o, s16, 0xA) = AF(o, s16, 0xE) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
        func_80132784(o, g, AF(o, u16, 0x70));
    }
    s = AF(o, s16, 0x70);
    if (s == 0 || s == 2) {
        if (D_sc04_011_801EFD40 & 0x1000) {
            func_sc04_011_8018489C(o, 0x30, -0x20);
            func_sc04_011_8018489C(o, 0x30, 0x20);
        } else {
            func_sc04_011_8018489C(o, 0x30, 0);
        }
    } else {
        func_sc04_011_8018489C(o, 0x24, 0);
    }
}

void func_sc04_011_801846C0(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_sc04_011_80186940((s32) arg0, 0x64, 1);
    func_8016B3F4((s32) arg0);
    func_sc04_011_80186BD8();
    func_8002D4C8(0xB36, 0);
}

void func_sc04_011_80184728(u8 *o) {
    s16 s;
    void *g;

    if (func_8012BEE8(o) != 0) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
    }
    func_sc04_011_80185DDC(o);
    if (AF(o, s16, 0x70) == 1) {
        func_sc04_011_80186020(o);
    }
    if (AF(o, u16, 0x86) & 0x10) {
        return;
    }
    if (!(D_sc04_011_801EFD40 & 4)) {
        g = D_sc04_011_801EFC48;
        AF(o, s16, 6) = AF(o, s16, 0xA) = AF(o, s16, 0xE) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
        func_80132784(o, g, AF(o, u16, 0x70));
    }
    s = AF(o, s16, 0x70);
    if (s == 0 || s == 2) {
        if (D_sc04_011_801EFD40 & 0x1000) {
            func_sc04_011_8018489C(o, 0x30, -0x20);
            func_sc04_011_8018489C(o, 0x30, 0x20);
        } else {
            func_sc04_011_8018489C(o, 0x30, 0);
        }
    } else {
        func_sc04_011_8018489C(o, 0x24, 0);
    }
}

void func_sc04_011_80184840(void) {
    u8 *p;
    u8 *q;

    p = (u8 *)D_sc04_011_801EFC4C[0];
    AF(p, s16, 0x76) = 0x240;
    AF(D_sc04_011_801EFC48, s16, 0x76) = 0x1000;
    p = D_sc04_011_801EFC54;
    q = AF(p, u8 *, 0x20);
    AF(q, s16, 0x18) = AF(q, s16, 0x1A) = AF(q, s16, 0x1C) = 0x1000;
}

s16 func_sc04_011_80184884(void) {
    return AF(D_sc04_011_801EFC4C[0], s16, 0x76);
}

void func_sc04_011_8018489C(u8 *o, s32 x0, s32 y0) {
    s16 x = x0;
    s16 y = y0;
    SV8 a;
    SV8 b;
    u8 *t;
    s32 n;
    if (D_sc04_011_801EFD24 != 0) return;
    n = -x0;
    if (D_sc04_011_801EFD40 & 0x100) return;
    t = D_sc04_011_801946AC + AF(o, s16, 0x102) * 16;
    a.z = AF(t, u16, 0xC);
    b.z = AF(t, u16, 0xE);
    b.y = y;
    a.y = y;
    b.x = n;
    a.x = n;
    if (func_sc04_011_80184978(o, &a, &b) != 0) return;
    b.x = 0;
    a.x = 0;
    if (func_sc04_011_80184978(o, &a, &b) != 0) return;
    b.x = x;
    a.x = x;
    func_sc04_011_80184978(o, &a, &b);
}

s32 func_sc04_011_80184978(u8 *o, SV8 *a, SV8 *b) {
    SV8 p;
    SV8 q;
    s16 n;
    u8 *cam;

    FaceHelper(o, a, &p);
    FaceHelper(o, b, &q);
    cam = (u8 *)&D_80126B58;
    if (func_80135888(D_80126B78, D_80126B90, &p, &q) == 0) {
        return 0;
    }

    n = 0x28;
    if (D_sc04_011_801EFD40 & 0x800) {
        n = 0x50;
    } else if (D_sc04_011_801EFD40 & 0x1000) {
        n = 0x40;
    }

    if (D_sc04_011_801EFD40 & 0x200) {
        func_8012F568(1, 0x4017, AF(AF(o, u8 *, 0x20), s16, 0x12), n, &q, &D_801152A8);
        if (((func_8012B8A4(o) + 0x200) & 0xFFF) < 0x800) {
            AF(cam, s16, 0x42) = 0x200;
        } else {
            AF(cam, s16, 0x42) = 0xA00;
        }
    } else {
        func_8012F568(1, 0x4013, AF(AF(o, u8 *, 0x20), s16, 0x12), n, &q, &D_801152A8);
    }
    return 1;
}

extern void func_sc04_011_80184B3C();
void func_sc04_011_80184ABC(u32 a) {
    s32 i;
    if (a < 0x14) {
        for (i = a + 1; i < 0x15; i++) {
            if (D_sc04_011_80194724[i] == 0) {
                func_sc04_011_80184B3C(D_sc04_011_801EFC4C[i]);
            }
        }
    }
}

void func_sc04_011_80184B3C(u8 *o) {
    s32 i;
    u16 *p;

    p = (u16 *)(o + 0xE4);
    if (AF(o, u8, 0x10A) != 1) {
        for (i = 0; i < 4; i++) {
            *p++ = AF(AF(o, u8 *, 0x20), u16, 0x10);
            *p++ = AF(AF(o, u8 *, 0x20), u16, 0x12);
            *p++ = AF(AF(o, u8 *, 0x20), u16, 0x14);
        }
        AF(o, u8, 0x10B) = 0;
        AF(o, u8, 0x10A) = 1;
    }
}

void func_sc04_011_80184BAC(u8 *o, u8 *p) {
    u8 k;
    s16 *v;
    s32 step;
    s32 mask;

    k = AF(o, u8, 0x10B);
    v = (s16 *)(o + (k * 6 + 0xE4));
    if (D_sc04_011_801EFD40 & 0x20) {
        step = 0x80;
        mask = 1;
    } else {
        step = 0x40;
        mask = 3;
    }
    func_sc04_011_80185960(v[0], AF(o, u8 *, 0x20) + 0x10, (u16)step);
    func_sc04_011_80185960(v[1], AF(o, u8 *, 0x20) + 0x12, (u16)step);
    func_sc04_011_80185960(v[2], AF(o, u8 *, 0x20) + 0x14, (u16)step);
    AF(o, u8, 0x10B) = mask & (k + 1);
    v = (s16 *)(o + (k * 6 + 0xE4));
    v[0] = AF(AF(p, u8 *, 0x20), u16, 0x10);
    v[1] = AF(AF(p, u8 *, 0x20), u16, 0x12);
    v[2] = AF(AF(p, u8 *, 0x20), u16, 0x14);
}

void func_sc04_011_80184CCC(u8 *o, SV8 *e) {
    s32 n;
    s32 c;

    D_sc04_011_801EFD40 |= 4;
    if (D_sc04_011_801EFD40 & 0x10) {
        func_sc04_011_80186470();
        func_sc04_011_801863B4(o);
    }
    func_sc04_011_80185FAC();
    n = 0;
    AF(o, SV8 *, 0xCC) = e;
    do {
        c = AF(e, u8, 6);
        if (c < 0x15 && D_sc04_011_80194724[c] == 0) {
            D_sc04_011_801EFD30[n] = c;
            func_sc04_011_801859E4(c, (s32)e);
            n++;
        }
        if (e->pad & 0x8000) break;
        e++;
    } while (n < 5);
    D_sc04_011_801EFD3C = n;
}

void func_sc04_011_80184DB8(s32 arg) {
    s32 i;
    u8 *p;
    SV8 s;

    for (i = 0; i < D_sc04_011_801EFD3C; i++) {
        p = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD30[i]];
        func_sc04_011_801858DC(p);
    }
    for (i = 0; i < D_sc04_011_801EFD3C - 1; i++) {
        func_sc04_011_80185020(D_sc04_011_801EFD30[i], D_sc04_011_801EFD30[i + 1]);
    }
    if (D_sc04_011_801EFD30[i] < 0x13) {
        p = (u8 *)D_sc04_011_801EFC4C[D_sc04_011_801EFD30[i]];
        s.x = AF(AF(p, u8 *, 0x20), u16, 0x10);
        s.y = AF(AF(p, u8 *, 0x20), u16, 0x12);
        s.z = AF(AF(p, u8 *, 0x20), u16, 0x14);
        func_sc04_011_8018681C(D_sc04_011_801EFD30[i], &s);
    }
    if (D_sc04_011_801EFD40 & 4) {
        func_sc04_011_801852BC(arg);
        func_sc04_011_801853D0(arg);
        func_sc04_011_80185648(arg);
    }
}

extern s32 func_sc04_011_80184FC4();
s32 func_sc04_011_80184F4C(void) {
    s32 r;
    s32 i;
    r = 1;
    for (i = 0; i < D_sc04_011_801EFD3C; i++) {
        r &= func_sc04_011_80184FC4(D_sc04_011_801EFD30[i]);
    }
    return r;
}

s32 func_sc04_011_80184FC4(s32 i) {
    u8 *o = (u8 *)D_sc04_011_801EFC4C[i];
    u8 *p = AF(o, u8 *, 0x20);
    s32 r;

    if (AF(p, s16, 0x10) != AF(o, s16, 0xE4)) {
        r = 0;
    } else if (AF(p, s16, 0x12) != AF(o, s16, 0xE6)) {
        r = 0;
    } else {
        r = AF(p, s16, 0x14) == AF(o, s16, 0xE8);
    }
    return r;
}

void func_sc04_011_80185020(u32 s, u32 e) {
    u32 i;
    s32 n;
    u8 *a;
    u8 *b;
    u8 *q;
    s32 d;
    s32 dx, dy, dz;
    s32 x, y, z;

    n = 0;
    for (i = s + 1; i < e; i++) {
        if (D_sc04_011_80194724[i] == 0) {
            n++;
        }
    }
    if (n == 0) {
        return;
    }
    b = AF(D_sc04_011_801EFC4C[s], u8 *, 0x20);
    a = AF(D_sc04_011_801EFC4C[e], u8 *, 0x20);
    d = (AF(a, s16, 0x10) - AF(b, s16, 0x10)) & 0xFFF;
    if (d >= 0x800) d -= 0x1000;
    dx = (d << 16) / (n + 1);
    d = (AF(a, s16, 0x12) - AF(b, s16, 0x12)) & 0xFFF;
    if (d >= 0x800) d -= 0x1000;
    dy = (d << 16) / (n + 1);
    d = (AF(a, s16, 0x14) - AF(b, s16, 0x14)) & 0xFFF;
    if (d >= 0x800) d -= 0x1000;
    dz = (d << 16) / (n + 1);
    x = AF(b, s16, 0x10) << 16;
    y = AF(b, s16, 0x12) << 16;
    z = AF(b, s16, 0x14) << 16;
    for (i = s + 1; i < e; i++) {
        if (D_sc04_011_80194724[i] == 0) {
            x += dx;
            y += dy;
            q = (u8 *)D_sc04_011_801EFC4C[i];
            z += dz;
            AF(AF(q, u8 *, 0x20), s16, 0x10) = x >> 16;
            AF(AF(q, u8 *, 0x20), s16, 0x12) = y >> 16;
            AF(AF(q, u8 *, 0x20), s16, 0x14) = z >> 16;
        }
    }
}

void func_sc04_011_80185214(s32 n) {
    typedef struct { s16 a; s16 b; s16 c; u8 id; u8 fl; } Ent;
    Ent *b;
    s32 i;
    s32 id;

    b = AF(D_sc04_011_801EFC48, Ent *, 0xCC);
    for (i = 0; i < 5; i++) {
        id = b[i].id;
        if (id < 0x15 && D_sc04_011_80194724[id] == 0) {
            func_sc04_011_80185A18(id, (s16)(b[i].b + n));
        }
        if (AF(&b[i], s16, 6) & 0x8000) {
            break;
        }
    }
}

void func_sc04_011_801852BC(s32 n) {
    WMtx m;
    u8 *o;

    o = (u8 *)D_sc04_011_801EFC4C[n];
    RotMatrixZYX(AF(o, u8 *, 0x20) + 0x10, &m);
    m.t[0] = AF(o, s16, 6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    AF(AF(o, u8 *, 0x20), WMtx, 0x34) = m;
    AF(AF(o, u8 *, 0x20), WMtx, 0x54) = m;
    AF(AF(o, u8 *, 0x20), s32, 0x30) = 1;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 1;
}

void func_sc04_011_801853D0(s32 n) {
    WMtx m;
    SV8 v;
    V4 r;
    s32 flag;
    s32 i;
    u8 *o;
    u8 *t;

    if (n == 0 || (u32)n >= 0x15) {
        return;
    }
    for (i = n - 1; i >= 0; i--) {
        if (D_sc04_011_80194724[i] != 0) {
            continue;
        }
        o = (u8 *)D_sc04_011_801EFC4C[i];
        if (D_sc04_011_80194724[i + 1] != 0) {
            t = (u8 *)D_sc04_011_801EFC4C[i + 2];
        } else {
            t = (u8 *)D_sc04_011_801EFC4C[i + 1];
        }
        RotMatrixZYX(AF(o, u8 *, 0x20) + 0x10, &m);
        gte_SetTransMatrix(AF(t, u8 *, 0x20) + 0x34);
        gte_SetRotMatrix(&m);
        v.x = -AF(o, u16, 0x104);
        v.y = -AF(o, u16, 0x106);
        v.z = -AF(o, u16, 0x108);
        gte_ldv0(&v);
        gte_rtv0tr();
        gte_stlvnl(&r);
        gte_stflg(&flag);
        m.t[0] = AF(o, s16, 0x6) = r.x;
        m.t[1] = AF(o, s16, 0xA) = r.y;
        m.t[2] = AF(o, s16, 0xE) = r.z;
        *(WMtx *)(AF(o, u8 *, 0x20) + 0x34) = m;
        *(WMtx *)(AF(o, u8 *, 0x20) + 0x54) = m;
        AF(AF(o, u8 *, 0x20), s32, 0x30) = 1;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 1;
    }
}

void func_sc04_011_80185648(u32 n) {
    u8 unused[0x20];
    WMtx m;
    V3 v;
    s32 flag;
    s32 i;
    u8 *a;
    u8 *b;
    u8 *t;

    if (n < 0x14) {
        for (i = n + 1; i < 0x15; i++) {
            if (D_sc04_011_80194724[i] != 0) {
                continue;
            }
            a = (u8 *)D_sc04_011_801EFC4C[i];
            if (D_sc04_011_80194724[i - 1] != 0) {
                b = (u8 *)D_sc04_011_801EFC4C[i - 2];
            } else {
                b = (u8 *)D_sc04_011_801EFC4C[i - 1];
            }
            t = AF(b, u8 *, 0x20) + 0x34;
            gte_SetRotMatrix(t);
            gte_SetTransMatrix(t);
            gte_ldv0(b + 0x104);
            gte_rtv0tr();
            gte_stlvnl(&v);
            gte_stflg(&flag);
            RotMatrixZYX(AF(a, u8 *, 0x20) + 0x10, &m);
            m.t[0] = AF(a, s16, 6) = v.x;
            m.t[1] = AF(a, s16, 0xA) = v.y;
            m.t[2] = AF(a, s16, 0xE) = v.z;
            AF(AF(a, u8 *, 0x20), WMtx, 0x34) = m;
            AF(AF(a, u8 *, 0x20), WMtx, 0x54) = m;
            AF(AF(a, u8 *, 0x20), s32, 0x30) = 1;
            AF(AF(a, u8 *, 0x20), u16, 0x2C) |= 1;
            switch (AF(a, u8, 0x10A)) {
            case 1:
                func_sc04_011_80184BAC(a, b);
                break;
            case 2:
                func_sc04_011_801858DC(a);
                break;
            }
        }
    }
}

s32 func_sc04_011_801858DC(s32 arg0) {
    s32 temp_s0;
    s32 var_s0;

    var_s0 = 0x20;
    if (D_sc04_011_801EFD40 & 0x20) {
        var_s0 = 0x40;
    }
    temp_s0 = var_s0 & 0xFFFF;
    func_sc04_011_80185960((s32) AF(arg0, s16, 0xE4), AF(arg0, s32, 0x20) + 0x10, temp_s0);
    func_sc04_011_80185960((s32) AF(arg0, s16, 0xE6), AF(arg0, s32, 0x20) + 0x12, temp_s0);
    return func_sc04_011_80185960((s32) AF(arg0, s16, 0xE8), AF(arg0, s32, 0x20) + 0x14, temp_s0);
}

s32 func_sc04_011_80185960(s32 a, u16 *p, s32 n) {
    s32 v;
    s16 d;
    s16 m;

    v = (a - *p) & 0xFFF;
    d = v >= 0x800 ? v | 0xF000 : v;
    if (d < 0) {
        m = -d;
    } else {
        m = d;
    }
    if (m > (u16)n) {
        if (d < 0) {
            *p -= n;
        } else {
            *p += n;
        }
    } else {
        *p = a;
    }
}

s32 func_sc04_011_801859E4(s32 arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = D_sc04_011_801EFC4C[arg0];
    AF(temp_v1, u16, 0xE4) = (u16) AF(arg1, u16, 0);
    AF(temp_v1, u16, 0xE6) = (u16) AF(arg1, u16, 2);
    temp_v0 = AF(arg1, u16, 4);
    AF(temp_v1, u16, 0xE8) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc04_011_80185A18(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = D_sc04_011_801EFC4C[arg0];
    AF(temp_v0, s16, 0xE6) = (s16) arg1;
    return (s32) temp_v0;
}

s32 func_sc04_011_80185A30(s32 i) {
    u8 *o;
    u8 *pl;
    u8 *p;
    s32 a;

    o = (u8 *)D_sc04_011_801EFC4C[i];
    pl = (u8 *)&D_80126B58;
    p = o + 0xE4;
    if (func_8012BE54(o) < 0x4000) {
        return AF(p, s16, 2);
    }
    a = func_8012B6D4(o + 4, pl + 4) & 0xFFF;
    if (a < 0x800) {
        if (a >= 0x401) {
            a = 0x800 - a;
        }
        if (a >= 0x301) {
            a = 0x300;
        }
    } else {
        if (a < 0xC00) {
            a = 0x17FF - a;
        }
        if (a < 0xD00) {
            a = 0xD00;
        }
    }
    AF(p, s16, 2) = a;
    return (s16)a;
}

void func_sc04_011_80185B04(s32 n0, s32 a) {
    u16 n = n0;
    u8 *e;

    e = (u8 *)D_sc04_011_801EFC4C[AF(D_sc04_011_801EFC48, u8 *, 0xCC)[n * 8 + 6]];
    if (e != 0) {
        AF(e, s16, 0xEC) = 0;
        AF(e, s16, 0xEE) = 0;
        AF(e, s16, 0xF2) = a;
        AF(e, s16, 0xF0) = AF(e, s16, 0xE4);
    }
}

void func_sc04_011_80185B5C(s32 n0) {
    u16 n = n0;
    u8 *e;
    s16 v;

    e = (u8 *)D_sc04_011_801EFC4C[AF(D_sc04_011_801EFC48, u8 *, 0xCC)[n * 8 + 6]];
    if (e != 0) {
        AF(e, s16, 0xEE) += AF(e, s16, 0xF2);
        v = rsin(AF(e, s16, 0xEE)) / 22;
        AF(e, s16, 0xEC) = v;
        AF(e, s16, 0xE4) = AF(e, s16, 0xF0) + v;
    }
}

void func_sc04_011_80185C04(s32 n0, s32 a) {
    u16 n = n0;
    u8 *e;

    e = (u8 *)D_sc04_011_801EFC4C[AF(D_sc04_011_801EFC48, u8 *, 0xCC)[n * 8 + 6]];
    if (e != 0) {
        AF(e, s16, 0xF4) = 0;
        AF(e, s16, 0xF6) = 0;
        AF(e, s16, 0xFA) = a;
        AF(e, s16, 0xF8) = AF(e, s16, 0xE8);
    }
}

void func_sc04_011_80185C5C(s32 n0) {
    u16 n = n0;
    u8 *e;
    s16 v;

    e = (u8 *)D_sc04_011_801EFC4C[AF(D_sc04_011_801EFC48, u8 *, 0xCC)[n * 8 + 6]];
    if (e != 0) {
        AF(e, s16, 0xF6) += AF(e, s16, 0xFA);
        v = rsin(AF(e, s16, 0xF6)) / 22;
        AF(e, s16, 0xF4) = v;
        AF(e, s16, 0xE8) = AF(e, s16, 0xF8) + v;
    }
}

s32 func_sc04_011_80185D04(s32 arg0) {
    s32 i;
    void *o;

    for (i = 6; i < 0x15; i++) {
        o = ((void **)&D_sc04_011_801EFC64)[i - 6];
        AF(AF(o, void *, 0x20), s16, 0x18) = 0x1000;
        AF(AF(o, void *, 0x20), s16, 0x1A) = 0x1000;
        AF(o, u16, 0x86) &= 0xFFFE;
        if (arg0 != 0) {
            func_sc04_011_80185D9C((s32) o);
        }
    }
}

void func_sc04_011_80185D9C(s32 arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x70);
    if ((u32) (temp_v1 - 6) < 0xDU) {
        AF(arg0, s16, 0x84) = (s16) (temp_v1 * 8);
        AF(arg0, s16, 0xFE) = 0x30;
        AF(arg0, s16, 0x100) = 0x40;
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 3);
    }
}

void func_sc04_011_80185DDC(u8 *o) {
    s16 t;

    if (AF(o, u16, 0x86) & 1) {
        t = AF(o, s16, 0x84);
        if (t != 0) {
            AF(o, s16, 0x84) = t - 1;
            return;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        if (AF(o, u16, 0x86) & 2) {
            AF(AF(o, u8 *, 0x20), u16, 0x18) += AF(o, u16, 0x100);
            AF(AF(o, u8 *, 0x20), u16, 0x1A) += AF(o, u16, 0x100);
            if (AF(AF(o, u8 *, 0x20), s16, 0x18) >= 0x1380) {
                AF(o, u16, 0x86) &= ~2;
            }
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x18) -= AF(o, u16, 0x100);
            AF(AF(o, u8 *, 0x20), u16, 0x1A) -= AF(o, u16, 0x100);
            if (AF(AF(o, u8 *, 0x20), s16, 0x18) < 0x1001) {
                AF(o, u16, 0x86) |= 2;
                AF(o, u16, 0x84) = AF(o, u16, 0xFE);
                AF(AF(o, u8 *, 0x20), u16, 0x2C) &= ~0x10;
            }
        }
    }
}

s32 func_sc04_011_80185F1C(void) {
    s32 i;
    void *o;

    for (i = 6; i < 0x15; i++) {
        o = ((void **)&D_sc04_011_801EFC64)[i - 6];
        AF(AF(o, void *, 0x20), s16, 0x18) = 0x1000;
        AF(AF(o, void *, 0x20), s16, 0x1A) = 0x1000;
        if (i < 0xD) {
            AF(o, s16, 0x84) = (0xC - i) * 4;
            AF(o, s16, 0xFE) = 0x10;
            AF(o, s16, 0x100) = 0x80;
            AF(o, u16, 0x86) |= 3;
        } else {
            AF(o, u16, 0x86) &= 0xFFFE;
        }
    }
}

s32 func_sc04_011_80185FAC(void) {
    s32 temp_v0;
    s32 var_v1;
    void **var_a0;

    var_v1 = 0;
    var_a0 = &D_sc04_011_801EFC4C;
    do {
        if (D_sc04_011_80194724[var_v1] == 0) {
            AF(*var_a0, u8, 0x10A) = 0;
        }
        var_v1 += 1;
        temp_v0 = var_v1 < 0x15;
        var_a0 += 1;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc04_011_80185FF4(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    D_sc04_011_801EFD48 = 0;
    D_sc04_011_801EFD44 = AF(p, u16, 0x10);
    D_sc04_011_801EFD4C = 0x60;
}

void func_sc04_011_80186020(u8 *o) {
    typedef struct { u8 pad[0x20]; u8 *p20; } ObjS;
    s16 v;

    if (D_sc04_011_801EFD40 & 2) {
        v = D_sc04_011_801EFD48;
        if (v >= 0x120) {
            D_sc04_011_801EFD4C = -0x60;
        } else if (v < -0x5F) {
            D_sc04_011_801EFD4C = 0x60;
        }
        D_sc04_011_801EFD48 += D_sc04_011_801EFD4C;
        AF(((ObjS *)o)->p20, s16, 0x10) = D_sc04_011_801EFD44 + D_sc04_011_801EFD48;
    } else if (D_sc04_011_801EFD40 & 1) {
        v = D_sc04_011_801EFD48;
        if (v < 0x120) {
            v += 0x60;
            D_sc04_011_801EFD48 = v;
            AF(((ObjS *)o)->p20, s16, 0x10) = D_sc04_011_801EFD44 + v;
        }
    } else {
        v = D_sc04_011_801EFD48;
        if (v >= -0x5F) {
            v -= 0x60;
            D_sc04_011_801EFD48 = v;
            AF(((ObjS *)o)->p20, s16, 0x10) = D_sc04_011_801EFD44 + v;
        }
    }
}

void func_sc04_011_80186110(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C588(0x214, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 6) = 0x60;
        AF(temp_v0, s16, 0xA) = -0x540;
        AF(temp_v0, s16, 0xE) = 0x900;
    }
    D_sc04_011_801EFCA0 = temp_v0;
}

void func_sc04_011_8018615C(u8 *o) {
    s32 i;
    D_sc04_011_801EFCA4 = func_8012C588(0x255, o);
    for (i = 0x10; i < 0x14; i++) {
        D_sc04_011_801EFCE8[i - 0x10] = func_8012C658(0x257, i, o);
    }
}

void func_sc04_011_801861D4(u8 *o) {
    s32 i;

    for (i = 0; i < 16; i++) {
        D_sc04_011_801EFCA8[i] = func_8012C658(0x257, i, o);
    }
    for (i = 0; i < 7; i++) {
        D_sc04_011_801EFCF8[i] = func_8012C658(0x258, i + 1, o);
    }
    D_sc04_011_801EFD14 = func_8012C588(0x272, o);
    D_sc04_011_801EFD1C = func_8012C588(0x291, o);
}

s32 func_sc04_011_801862A4(s32 arg0) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;

    var_a2 = 0;
    var_s0 = 0;
    var_s1 = &D_sc04_011_801EFC4C;
    do {
        var_a2 = func_8012C658(0x200, var_s0, var_a2);
        *var_s1 = var_a2;
        var_s0 += 1;
        temp_v0 = var_s0 < 0x15;
        var_s1 = (s32 *)((u8 *)var_s1 + 4);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc04_011_80186300(u8 *o, s32 a1, s32 a2_0) {
    s16 a2 = a2_0;
    D_sc04_011_801EFD40 &= 0xFFFB;
    func_sc04_011_80186470(o);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = a2;
    AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
    func_sc04_011_8018637C(o, a1);
}

void func_sc04_011_8018637C(s32 arg0, s32 arg1) {
    SetScript();
    D_sc04_011_801EFD40 |= 0x10;
}

void func_sc04_011_801863B4(u8 *o) {
    u16 f = D_sc04_011_801EFD40;
    AF(o, s16, 0x98) = 0;
    D_sc04_011_801EFD40 = f & 0xFFEF;
}

void func_sc04_011_801863D4(u8 *o) {
    s32 i;
    u8 *e;

    for (i = 0; i < 0x15; i++) {
        e = (u8 *)D_sc04_011_801EFC4C[i];
        if (D_sc04_011_801EFD40 & 4) {
            func_sc04_011_80186518(o, e, i);
            AF(e, u16, 0x86) &= 0xFFEF;
        } else {
            func_sc04_011_801866C4((s32)e);
            AF(e, u16, 0x86) &= 0xFFEF;
        }
    }
}

void func_sc04_011_80186470(u8 *o) {
    s32 i;
    u8 *e;

    for (i = 0; i < 0x15; i++) {
        e = (u8 *)D_sc04_011_801EFC4C[i];
        if (D_sc04_011_801EFD40 & 4) {
            if (i < 0xE) {
                func_sc04_011_80186518(o, e, i);
            }
        } else if (i >= 0xE) {
            AF(e, u16, 0x86) |= 0x10;
        } else {
            func_sc04_011_801866C4((s32)e);
        }
    }
}

void func_sc04_011_80186518(u8 *q, u8 *o, s32 n) {
    u16 *tb;
    u16 *t;
    s16 *p;
    s32 i;

    tb = D_sc04_011_801DEC8C;
    if (AF(o, u16, 0x86) & 8) {
        AF(o, s16, 0x6) = tb[n * 6 + 0] - tb[(n - 1) * 6 + 0];
        AF(o, s16, 0xA) = tb[n * 6 + 1] - tb[(n - 1) * 6 + 1];
        AF(o, s16, 0xE) = tb[n * 6 + 2] - tb[(n - 1) * 6 + 2];
        AF(AF(o, u8 *, 0x20), s16, 0x10) = tb[n * 6 + 3] - tb[(n - 1) * 6 + 3];
        AF(AF(o, u8 *, 0x20), s16, 0x12) = tb[n * 6 + 4] - tb[(n - 1) * 6 + 4];
        AF(AF(o, u8 *, 0x20), s16, 0x14) = tb[n * 6 + 5] - tb[(n - 1) * 6 + 5];
        func_8001C1E4(AF(o, s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x20));
        return;
    }
    t = AF(AF(q, u8 *, 0x20), u16 *, 0x20);
    if (t != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = t[n * 6 + 3];
        AF(AF(o, u8 *, 0x20), s16, 0x12) = t[n * 6 + 4] + AF(AF(q, u8 *, 0x20), u16, 0x12);
        AF(AF(o, u8 *, 0x20), s16, 0x14) = t[n * 6 + 5];
    }
    AF(o, s16, 0x6) = AF(AF(o, u8 *, 0x20), s32, 0x48);
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x20), s32, 0x50);
    p = (s16 *)(o + 0xE4);
    for (i = 0; i < 4; i++) {
        *p++ = AF(AF(o, u8 *, 0x20), s16, 0x10);
        *p++ = AF(AF(o, u8 *, 0x20), s16, 0x12);
        *p++ = AF(AF(o, u8 *, 0x20), s16, 0x14);
    }
}

s32 func_sc04_011_801866C4(s32 arg0) {
    void *temp_v0;

    if (AF(arg0, u16, 0x86) & 8) {
        AF(AF(arg0, void *, 0x20), s32, 0x78) = 0;
    }
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xA) = 0;
    AF(arg0, s16, 0xE) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    return (s32) temp_v0;
}

void func_sc04_011_80186710(void) {
    SV8 s;
    u16 n = D_sc04_011_801EFD20;
    u8 *e = (u8 *)D_sc04_011_801EFC4C[n];

    s.x = AF(AF(e, u8 *, 0x20), s16, 0x10);
    s.y = AF(AF(e, u8 *, 0x20), s16, 0x12);
    s.z = AF(AF(e, u8 *, 0x20), s16, 0x14);
    func_sc04_011_80186798(n, (s32)&s);
    func_sc04_011_8018681C(n, &s);
}

void func_sc04_011_80186798(s32 arg0, s32 arg1) {
    s32 pad[2];
    s32 *var_s1;
    u32 var_s0;

    var_s0 = 0;
    if (arg0 != 0) {
        var_s1 = &D_sc04_011_801EFC4C;
        do {
            if (D_sc04_011_80194724[var_s0] == 0) {
                func_sc04_011_801868A0(*var_s1, arg1);
            }
            var_s0 += 1;
            var_s1 += 0x1;
        } while (var_s0 < (u32) arg0);
    }
}

void func_sc04_011_8018681C(s32 a, s32 b) {
    s32 i;
    for (i = a + 1; i < 0x15; i++) {
        if (D_sc04_011_80194724[i] == 0) {
            func_sc04_011_801868A0(D_sc04_011_801EFC4C[i], b);
        }
    }
}

void func_sc04_011_801868A0(u8 *o, u16 *v) {
    u16 *p;
    s32 i;

    AF(AF(o, u8 *, 0x20), u16, 0x10) = v[0];
    AF(AF(o, u8 *, 0x20), u16, 0x12) = v[1];
    AF(AF(o, u8 *, 0x20), u16, 0x14) = v[2];
    p = (u16 *)(o + 0xE4);
    for (i = 0; i < 4; i++) {
        *p++ = v[0];
        *p++ = v[1];
        *p++ = v[2];
    }
}

s32 func_sc04_011_80186908(void) {
    s32 i;

    for (i = 0; i < 0x15; i++) {
        AF(((void **)&D_sc04_011_801EFC4C)[i], u16, 0x86) &= 0xFFEF;
    }
}

void func_sc04_011_80186940(s32 o, s32 a1, s32 a2) {
    s32 r;

    D_sc04_011_801EFD40 |= 0x80;
    r = func_sc04_011_80186A20(D_sc04_011_801EFC48, (s16)a1);
    AF(D_sc04_011_801EFC48, u16, 0x60) += r;
    if ((s16)a2 != 0) {
        func_8016AA50(o, (s16)r);
    }
    D_sc04_011_801EFD24 = 8;
    if ((s16)r != 0) {
        func_sc04_011_80186A68();
        func_8002D4C8((*(u16 *)&D_sc04_011_801EFD28 - AF(D_sc04_011_801EFC48, s16, 0x60)) > 0 ? 0x906 : 0xBA9, 0);
    }
}

s32 func_sc04_011_80186A20(u8 *o, s32 n) {
    u16 t = AF(o, u16, 0x76) - AF(o, u16, 0x60);
    s16 d = t;
    s16 r = t - n;
    if (d <= 0) {
        return 0;
    }
    if (r <= 0) {
        return d;
    }
    return (s16)n;
}

s32 func_sc04_011_80186A68(void) {
    s32 i;
    void *o;

    for (i = 0; i < 0x15; i++) {
        o = ((void **)&D_sc04_011_801EFC4C)[i];
        if (o != NULL) {
            o = AF(o, void *, 0x20);
            if (o != NULL) {
                AF(o, s32 *, 0x80) = &D_sc04_011_80194350;
            }
        }
    }
}

s32 func_sc04_011_80186AB8(void) {
    s32 i;
    void *o;

    for (i = 0; i < 0x15; i++) {
        o = ((void **)&D_sc04_011_801EFC4C)[i];
        if (o != NULL) {
            o = AF(o, void *, 0x20);
            if (o != NULL) {
                AF(o, s32 *, 0x80) = &D_sc04_011_80194348;
            }
        }
    }
}

extern s32 D_sc04_011_801EFCF4[];
void func_sc04_011_80186B08(u8 *o) {
    s16 n;
    s32 i;
    s32 *p;
    s32 *b;
    s32 *b2;

    n = AF(o, s16, 0xF4);
    if (n != 0) {
        b = D_sc04_011_801EFCF4;
        p = &b[n];
        if (*p != 0) {
            func_8012C218(*p);
            *p = 0;
        }
    }
    i = (s16)(n * 2);
    b2 = D_sc04_011_801EFCA8;
    p = &b2[i];
    if (*p != 0) {
        func_sc04_011_80189D38(*p);
        *p = 0;
    }
    i = (s16)(n * 2 + 1);
    p = &b2[i];
    if (*p != 0) {
        func_sc04_011_80189D38(*p);
        *p = 0;
    }
}

s32 func_sc04_011_80186BD8(s32 arg0, s32 arg1) {
    AF((*(void * *)D_sc04_011_801EFC4C), s16, 0xAE) = -1;
    AF(D_sc04_011_801EFC54, s16, 0xAE) = -1;
    return (s32) D_sc04_011_801EFC54;
}

void func_sc04_011_80186BF8(void) {
    AF(D_sc04_011_801EFC4C[0], s16, 0xAE) = -5;
    AF(D_sc04_011_801EFC54, s16, 0xAE) = -1;
}

void func_sc04_011_80186C1C(void) {
    AF(D_sc04_011_801EFC4C[0], s16, 0xAE) = -1;
    AF(D_sc04_011_801EFC54, s16, 0xAE) = -3;
}

s32 func_sc04_011_80186C40(void) {
    s32 temp_v0;
    s32 var_s2;
    void **var_s1;
    void *temp_s0;

    var_s2 = 0;
    var_s1 = &D_sc04_011_801EFC4C;
    do {
        temp_s0 = *var_s1;
        if (temp_s0 != NULL) {
            AF(temp_s0, u16, 0x86) = (u16) (AF(temp_s0, u16, 0x86) | 0x10);
            if (D_sc04_011_8019473C[AF(temp_s0, s16, 0x70)] != 0) {
                func_sc04_011_8018B060((s32) temp_s0);
            }
            func_8012AD44((s32) temp_s0, 2);
        }
        var_s2 += 1;
        temp_v0 = var_s2 < 0x15;
        var_s1 += 1;
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc04_011_80186CD8(s32 arg0) {
    s32 var_v0;

    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc04_011_801AA158);
    AF(AF(arg0, s32, 0x20), s32 *, 0x20) = &D_80063548;
    AF(arg0, s16, 6) = 0x500;
    AF(arg0, s16, 0xA) = -0x9C0;
    AF(arg0, s16, 0xE) = 0x18A0;
    AF(arg0, s16, 0xF4) = 0;
    var_v0 = func_sc04_011_8018B948(arg0);
    AF(arg0, s32, 0xD0) = var_v0;
    if (var_v0 != 0) {
        var_v0 = func_sc04_011_8018BA44(arg0, var_v0);
    }
    return var_v0;
}

void func_sc04_011_80186D58(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    func_sc04_011_8018BA44(arg0, AF(arg0, s32, 0xD0));
    temp_v0 = AF(arg0, s16, 0xA);
    if (temp_v0 < -0x7C0) {
        AF(arg0, s16, 0xA) = (s16) (temp_v0 + 3);
        return;
    }
    temp_v0_2 = AF(arg0, u16, 0xF4) + 0x40;
    AF(arg0, u16, 0xF4) = (u16) temp_v0_2;
    AF(arg0, s16, 0x52) = (s16) (rsin((s32) temp_v0_2) >> 8);
}

s32 func_sc04_011_80186DCC(s32 o) {
    SV8 a;
    SV8 b;

    a.x = -0x18;
    b.x = 0x18;
    b.y = 0x18;
    a.y = 0x18;
    b.z = -0x18;
    a.z = -0x18;
    if (func_sc04_011_80186E54(o, (s32)&a, (s32)&b) == 0) {
        b.z = 0x18;
        a.z = 0x18;
        return func_sc04_011_80186E54(o, (s32)&a, (s32)&b) != 0;
    }
    return 1;
}

s32 func_sc04_011_80186E54(s32 arg0, s32 arg1, s32 arg2) {
    SV8 a;
    SV8 b;

    FaceHelper(arg0, arg1, &a);
    FaceHelper(arg0, arg2, &b);
    return func_80135888(D_80126B78, D_80126B90, &a, &b);
}

void func_sc04_011_80186EBC(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xD0);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
        AF(arg0, s32, 0xD0) = 0;
    }
}

void func_sc04_011_80186EFC(s16 *out) {
    u8 *p = (u8 *)D_sc04_011_801EFC4C[0];
    out[0] = AF(AF(p, u8 *, 0x20), s32, 0x48);
    out[1] = AF(AF(p, u8 *, 0x20), s32, 0x4C);
    out[2] = AF(AF(p, u8 *, 0x20), s32, 0x50);
}

void func_sc04_011_80186F44(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    D_sc04_011_801EFC48 = arg0;
    (*(s16 *)&D_sc04_011_801EFD40) = 8;
    func_sc04_011_80186110((s32) arg0);
    func_sc04_011_8018615C((s32) arg0);
    func_sc04_011_80189A98();
    (*(s16 *)&D_sc04_011_801EFD20) = 0;
    func_sc04_011_8018637C((s32) arg0, (s32) &D_sc04_011_801DEC6C);
    func_sc04_011_801862A4((s32) arg0);
    AF(arg0, s16, 0x76) = 0x40;
    AF(arg0, s16, 0xF6) = 3;
    (*(s16 *)&D_sc04_011_801EFD2C) = 0x12C;
    (*(s16 *)&D_sc04_011_801EFD28) = 0x12C;
    func_sc04_011_801805D8((s32) arg0);
}

void func_sc04_011_80187008(void) {
    s32 temp_s0;

    temp_s0 = D_sc04_011_801EFD20;
    func_sc04_011_801805F8();
    if (D_sc04_011_801EFD40 & 4) {
        func_sc04_011_801852BC((s32) temp_s0);
        func_sc04_011_801853D0((s32) temp_s0);
        func_sc04_011_80185648((s32) temp_s0);
    }
}

void func_sc04_011_80187068(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((D_80126B5E >= 0x201) && (D_80126B66 >= 0x5F9) && ((u32) (D_80126B58 - 2) >= 2U)) {
            func_80139A68(4, 0);
            func_80139A68(0xC, 1);
            func_80178B18((s32) arg0, (s32) &D_sc04_011_80194378);
            AF(arg0, s16, 0x10A) = 0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_sc04_011_8017CACC((s32) &D_sc04_011_801EFD28, (s32) &D_sc04_011_801EFD2C, 4, 0xB4);
            func_sc04_011_80180AB4((s32) arg0);
            func_8002D4C8(0xB37, 0);
        }
        break;
    }
}

void func_sc04_011_80187178(u8 *o) {
    u16 n;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) == 0) {
            func_sc04_011_80184CCC(o, &D_sc04_011_80194C14);
            n = AF(o, u16, 0x34) + 1;
            D_sc04_011_801EFD40 |= 0x20;
            AF(o, u16, 0x34) = n;
            D_sc04_011_801EFD40 &= ~0x1000;
        } else if (AF(o, s32, 0x94) == 0x42) {
            D_sc04_011_801EFD40 |= 0x1000;
            func_8002D4C8(0x994, 0);
        }
        break;
    case 1:
        func_sc04_011_80184DB8(D_sc04_011_801EFD20);
        if (func_sc04_011_80184F4C() != 0) {
            func_sc04_011_80184CCC(o, &D_sc04_011_80194CB4);
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        func_sc04_011_80184DB8(D_sc04_011_801EFD20);
        if (func_sc04_011_80184F4C() != 0) {
            func_sc04_011_80182B5C(o);
        }
        break;
    }
}

void func_sc04_011_801872D0(u8 *o) {
    s16 s;
    void *g;

    func_sc04_011_80185DDC(o);
    if (AF(o, s16, 0x70) == 1) {
        func_sc04_011_80186020(o);
    }
    if (AF(o, u16, 0x86) & 0x10) {
        return;
    }
    if (!(D_sc04_011_801EFD40 & 4)) {
        g = D_sc04_011_801EFC48;
        AF(o, s16, 6) = AF(o, s16, 0xA) = AF(o, s16, 0xE) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
        func_80132784(o, g, AF(o, u16, 0x70));
    }
    s = AF(o, s16, 0x70);
    if (s == 0 || s == 2) {
        if (D_sc04_011_801EFD40 & 0x1000) {
            func_sc04_011_8018489C(o, 0x30, -0x20);
            func_sc04_011_8018489C(o, 0x30, 0x20);
        } else {
            func_sc04_011_8018489C(o, 0x30, 0);
        }
    } else {
        func_sc04_011_8018489C(o, 0x24, 0);
    }
}

void func_sc04_011_801873D0(void) {
}

s32 func_sc04_011_801873D8(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc04_011_801873F8(u8 *o) {
    u8 *p;
    u8 *m;
    u8 *q;
    s16 v;
    u16 t;
    s32 i;

    p = AF(o, u8 *, 0x20);
    v = AF(p, s16, 0x18);
    m = AF(o, u8 *, 0xCC);
    if (v != 0) {
        AF(p, s16, 0x18) = v - 0x400;
        t = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(AF(o, u8 *, 0x20), u16, 0x1A) = t;
        if (m != 0) {
            AF(m, u16, 0x18) = t;
            AF(m, u16, 0x1A) = t;
        }
        for (i = 0; i < 4; i++) {
            q = D_sc04_011_801EFD70[i];
            if (q != 0) {
                AF(q, u16, 0x18) = t;
                AF(q, u16, 0x1A) = t;
            }
        }
        if (AF(AF(o, u8 *, 0x20), s16, 0x18) != 0) goto alive;
    }
    for (i = 0; i < 4; i++) {
        q = D_sc04_011_801EFD70[i];
        if (q != 0) func_80016714(q, 0x38);
    }
    if (AF(o, u8 *, 0xD0) != 0) func_80016714(AF(o, u8 *, 0xD0), 0x38);
    if (AF(o, u8 *, 0xD4) != 0) func_80016714(AF(o, u8 *, 0xD4), 0x38);
    if (m != 0) func_80016714(m, 0x84);
    func_8012C218(o);
    func_8002D4C8(4, 0x88A);
    func_8002D4C8(4, 0x88B);
    return;
alive:
    AF(AF(o, u8 *, 0x20), s16, 0x14) += 0x100;
    func_8012B414(o);
    func_sc04_011_80187D68(o);
}

void func_sc04_011_80187574(u8 *arg0) {
    D_sc04_011_801947E4[AF(arg0, u16, 2)]();
    func_sc04_011_80187618((s32) &D_sc04_011_801EFD50, 0x160, 0x18F);
    func_sc04_011_801876A0((s32) arg0);
}

void func_sc04_011_801875D8(s32 p, s32 x, s32 y) {
    SV8 r;
    r.x = x;
    r.y = y;
    r.z = 0x10;
    r.pad = 1;
    StoreImage(&r, p);
}

void func_sc04_011_80187618(u32 *p, s32 x, s32 y) {
    RECT r;
    u32 a, b;
    s32 i;
    a = p[7];
    b = p[6];
    for (i = 7; i >= 3; i -= 2) {
        p[i] = p[i - 2];
        p[i - 1] = p[i - 3];
    }
    p[i] = a;
    p[i - 1] = b;
    r.x = x;
    r.y = y;
    r.w = 16;
    r.h = 1;
    LoadImage(&r, p);
}

void func_sc04_011_80187698(s32 arg0) {
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc04_011_801876A0(u8 *o) {
    typedef struct { s16 x, y, w, h; } RC;
    RC r;

    AF(o, s16, 0xFE) += 8;
    if (AF(o, s16, 0xFE) >= 0x80) {
        AF(o, s16, 0xFE) = 0;
    }
    if (AF(o, s16, 0xFE) != 0) {
        r.x = 0x2B0;
        r.y = 0x200 - AF(o, s16, 0xFE);
        r.w = 0x10;
        r.h = AF(o, s16, 0xFE);
        MoveImage(&r, 0x2B0, 0x100);
        r.y = 0x180;
        r.h = 0x80 - AF(o, s16, 0xFE);
        MoveImage(&r, 0x2B0, AF(o, s16, 0xFE) + 0x100);
    } else {
        r.x = 0x2B0;
        r.y = 0x180;
        r.w = 0x10;
        r.h = 0x80;
        MoveImage(&r, 0x2B0, 0x100);
    }
}

void func_sc04_011_8018778C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;
    s32 i;

    a.x = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x48);
    a.y = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x4C);
    a.z = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x50);
    b.x = D_80126B5E;
    b.y = D_80126B62;
    b.z = D_80126B66;
    r = func_8012B70C(&a, &b) & 0xFFF;
    for (i = 0; i < 3; i++) {
        a.x = b.x = i * 0x40 - 0x40;
        a.z = -0x140;
        b.z = 0;
        a.y = b.y = -0x40;
        if (func_sc04_011_80187940(o, &a, &b, r)) return;
        a.y = b.y = 0;
        if (func_sc04_011_80187940(o, &a, &b, r)) return;
        a.y = b.y = 0x40;
        if (func_sc04_011_80187940(o, &a, &b, r)) return;
        a.z = -0x280;
        b.z = -0x140;
        if (func_sc04_011_80187940(o, &a, &b, r)) return;
        a.y = b.y = 0;
        if (func_sc04_011_80187940(o, &a, &b, r)) return;
        a.y = b.y = -0x40;
        if (func_sc04_011_80187940(o, &a, &b, r)) return;
    }
}

s32 func_sc04_011_80187940(u8 *o, SV8 *a, SV8 *b, s32 r0) {
    SV8 p;
    SV8 q;
    s16 r = r0;

    func_8012F14C(AF(o, u8 *, 0x20) + 0x54, a, &p);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x54, b, &q);
    if (func_80135888(D_80126B78, D_80126B90, &p, &q) != 0) {
        func_8012F568(1, 0x4017, r, 0x78, &q, &D_801152A8);
        D_80126B9A = r;
        return 1;
    }
    return 0;
}

void func_sc04_011_80187A04(u8 *o) {
    SV8 a;
    SV8 b;
    s32 flag;
    s32 d;
    s32 i;
    u8 *p;
    s16 t;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x54);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x54);
    a.x = AF(AF(o, u8 *, 0x20), s32, 0x68);
    a.y = AF(AF(o, u8 *, 0x20), s32, 0x6C);
    a.z = AF(AF(o, u8 *, 0x20), s32, 0x70);
    b.x = 0;
    b.y = 0;
    b.z = -0x280;
    RotTransSV(&b, &b, &flag);
    d = func_8012B70C(&a, &b);
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (*(u16 *)p == 0x2A9) {
            b.x = AF(p, u16, 0x6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            t = func_8012B70C(&a, &b) - d;
            if (t < 0) {
                t = -t;
            }
            if (t < 0x80) {
                func_sc04_011_80188B78(p);
            }
        }
    }
}

extern CV D_sc04_011_801ED990;

void func_sc04_011_80187B40(u8 *o) {
    s32 k;
    u8 *e;
    s32 i;
    u8 **p;

    func_800233CC(&D_sc04_011_801EFD80, 0xC0);
    ((E40 *)&D_sc04_011_801EFD80)[0].a = D_sc04_011_801ED990;
    ((E40 *)&D_sc04_011_801EFD80)[0].b = D_sc04_011_801ED994;
    i = 0;
    k = 0x1000;
    p = D_sc04_011_801EFD70;
loop:
    do {
        e = func_8012C194();
        *p = e;
        if (e != 0) {
            func_8001CD9C(e, &D_sc04_011_801EFD80);
            AF(e, u16, 0x2C) = 0xC060;
            AF(e, s16, 0x18) = k;
            AF(e, s16, 0x1A) = k;
            AF(e, s32, 4) |= 0x50000000;
        }
    } while (0);
    i++;
    p++;
    if (i < 4) goto loop;
    func_800233CC((E40 *)&D_sc04_011_801EFD80 + 1, 0x120);
    ((E40 *)&D_sc04_011_801EFD80)[1].a = *(CV *)&D_sc04_011_801ED998;
    ((E40 *)&D_sc04_011_801EFD80)[1].b = D_sc04_011_801ED994;
    e = func_8012C194();
    AF(o, u8 *, 0xD0) = e;
    if (e != 0) {
        func_8001CD9C(e, (E40 *)&D_sc04_011_801EFD80 + 1);
        AF(e, s16, 0x18) = 0x1000;
        AF(e, s16, 0x1A) = 0x1000;
        AF(e, u16, 0x2C) = 0xC060;
        AF(e, s32, 4) |= 0x50000000;
    }
    func_800233CC((E40 *)&D_sc04_011_801EFD80 + 2, 0x100);
    ((E40 *)&D_sc04_011_801EFD80)[2].a = *(CV *)&D_sc04_011_801ED998;
    ((E40 *)&D_sc04_011_801EFD80)[2].b = D_sc04_011_801ED994;
    e = func_8012C194();
    AF(o, u8 *, 0xD4) = e;
    if (e != 0) {
        func_8001CD9C(e, (E40 *)&D_sc04_011_801EFD80 + 2);
        AF(e, s16, 0x18) = 0x1000;
        AF(e, s16, 0x1A) = 0x1000;
        AF(e, u16, 0x2C) = 0xC060;
        AF(e, s32, 4) |= 0x50000000;
    }
    func_sc04_011_80187D68(o);
}

void func_sc04_011_80187D68(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;
    s32 flag;
    s32 i;
    s32 r;
    s32 z;
    u8 **pp;
    u8 *e;
    s32 k;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x54);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x54);
    b.x = AF(AF(o, u8 *, 0x20), s32, 0x68);
    b.y = AF(AF(o, u8 *, 0x20), s32, 0x6C);
    b.z = AF(AF(o, u8 *, 0x20), s32, 0x70);
    for (i = 0; i < 7; ) {
        a.x = a.y = 0;
        a.z = -((i + 1) * 128);
        RotTransSV(&a, &c, &flag);
        r = func_80135004(1, &b, &c);
        i++;
        if (r != 0) {
            break;
        }
        b = c;
    }
    for (i = 0, z = -0x40, pp = D_sc04_011_801EFD70; i < 4; z -= 0xC0, i++, pp++) {
        e = *pp;
        if (e != 0) {
            a.x = 0;
            a.y = 0;
            a.z = z;
            RotTransSV(&a, &a, &flag);
            AF(e, s16, 0x8) = a.x;
            AF(e, s16, 0xA) = a.y;
            AF(e, s16, 0xC) = a.z;
            AF(e, u32, 0x4) &= 0x7FFFFFFF;
            if (r != 0 && AF(e, s16, 0xC) < c.z) {
                AF(e, u32, 0x4) |= 0x80000000;
            }
        }
    }
    if (r == 0) {
        e = AF(o, u8 *, 0xD0);
        if (e != 0) {
            AF(e, u32, 0x4) |= 0x80000000;
        }
        e = AF(o, u8 *, 0xD4);
        if (e != 0) {
            AF(e, u32, 0x4) |= 0x80000000;
        }
    } else {
        k = AF(AF(o, u8 *, 0x20), s32, 0x68);
        c.x = ((c.x - k) * 20 >> 4) + k;
        k = AF(AF(o, u8 *, 0x20), s32, 0x6C);
        c.y = ((c.y - k) * 20 >> 4) + k;
        k = AF(AF(o, u8 *, 0x20), s32, 0x70);
        c.z = ((c.z - k) * 20 >> 4) + k;
        func_sc04_011_80188054(AF(o, u8 *, 0xD0), &c);
        func_sc04_011_80188054(AF(o, u8 *, 0xD4), &c);
        if (D_sc04_011_801EFDC0.b[0] == 0xFF) {
            D_sc04_011_801EFDC0 = D_sc04_011_801ED99C;
        } else {
            D_sc04_011_801EFDC0 = D_sc04_011_801ED998;
        }
    }
}

s32 func_sc04_011_80188054(u8 *e, SV8 *c) {
    if (e != 0) {
        AF(e, s16, 0x8) = c->x;
        AF(e, s16, 0xA) = c->y;
        AF(e, s16, 0xC) = c->z;
        AF(e, u32, 0x4) &= 0x7FFFFFFF;
    }
}

void func_sc04_011_80188094(u8 *o) {
    WMtx m;
    SV8 v;
    CV c;
    s32 k;

    m = D_800AE620;
    c = D_sc04_011_801ED9A0;
    k = AF(o, u16, 0x2C) & 1;
    func_8001CD9C(AF(o, u8 *, 0x20), &D_sc04_011_801EFE60[k]);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
    if (k == 0) {
        func_800233CC(D_sc04_011_801EFE60, 0x80);
        D_sc04_011_801EFE60[0].a = D_sc04_011_801ED994;
        D_sc04_011_801EFE60[0].b = D_sc04_011_801ED994;
        func_sc04_011_8018E6EC();
        func_sc04_011_8018E82C(0, &c, -8);
    } else {
        func_800233CC(&D_sc04_011_801EFE60[1], 0x10);
        D_sc04_011_801EFE60[1].a = D_sc04_011_801ED9A4;
        D_sc04_011_801EFE60[1].b = D_sc04_011_801ED994;
        RotMatrixZ(rand() & 0xFFF, &m);
        v.x = 0xC0;
        v.z = 0;
        v.y = 0;
        ApplyMatrixSV(&m, &v, &v);
        AF(o, s16, 6) += v.x;
        AF(o, s16, 0xA) += v.y;
        AF(o, s16, 0xE) += v.z;
        AF(o, s32, 0x10) = -(v.x << 12);
        AF(o, s32, 0x14) = -(v.y << 12);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(o, s32, 0x1C) = 0xC;
    }
    AF(o, s16, 2)++;
}

void func_sc04_011_801882F8(u8 *o) {
    SV8 v;
    u8 *w;
    u8 *p;
    s32 r;
    s32 m;
    s32 n;
    s32 c;
    u8 q;

    w = AF(o, u8 *, 0x30);
    if (!(AF(o, u16, 0x2C) & 1)) {
        if (AF(w, s32, 0x94) < 3) return;
        func_sc04_011_801885C0();
        func_sc04_011_8018E89C(o + 4);
        if (AF(w, s32, 0x94) == 0x75) {
            AF(o, s16, 2)++;
            return;
        }
        p = &D_sc04_011_801EFE60[0].a.b;
        n = *p;
        if (n < 0xFF) {
            m = n + 5;
            if (m > 0xFF) q = 0xFF; else q = m;
            c = D_sc04_011_801EFE60[0].a.r;
            *p = D_sc04_011_801EFE60[0].a.g = q;
            D_sc04_011_801EFE60[0].a.r = c + 3;
        }
        if (AF(w, s32, 0x94) == 0x19) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        }
        if (AF(w, s32, 0x94) == 0x29) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x800;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x800;
            D_sc04_011_801EFE60[0].a.b = D_sc04_011_801EFE60[0].a.g = D_sc04_011_801EFE60[0].a.r = 0xFF;
        }
        if (AF(w, s32, 0x94) < 0x14) {
            if (!(++AF(o, s32, 0x1C) & 1)) {
                v.x = AF(o, s16, 6);
                v.y = AF(o, s16, 0xA);
                v.z = AF(o, s16, 0xE);
                r = func_801290DC(0x5C, &v);
                if (r != 0) AF(r, s16, 0x2C) = 1;
            } else {
                func_sc04_011_8018E914(rand() & 0xFF0, 0x40);
            }
        }
        func_sc04_011_8018EAB8();
        return;
    }
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x18) < 0x1000) {
        AF(p, s16, 0x18) += 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x400;
    }
    func_8012931C(o);
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    AF(o, s16, 2)++;
}

void func_sc04_011_80188524(u8 *arg0) {
    D_sc04_011_801947F4[AF(arg0, u16, 2)]();
}

s32 func_sc04_011_80188560(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_80132EF4(arg0, 0x5C);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x34) = arg0;
        AF(temp_v0, s32, 0x30) = arg1;
    }
    func_8002D4C8(0x88A, 0);
    return temp_v0;
}

void func_sc04_011_801885C0(u8 *o) {
    SV8 a;
    s32 flag;
    u8 *p;

    p = AF(o, u8 *, 0x34);
    a.x = 0;
    a.y = 0x40;
    a.z = -0x28;
    SetRotMatrix(AF(p, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(p, u8 *, 0x20) + 0x34);
    RotTransSV(&a, &a, &flag);
    AF(o, s16, 6) = a.x;
    AF(o, s16, 0xA) = a.y;
    AF(o, s16, 0xE) = a.z;
}

extern void func_8012B178();
void func_sc04_011_80188650(u8 *o) {
    AF(o, s16, 0xFE) = D_80126B5E;
    AF(o, s16, 0x100) = -0x788;
    AF(o, s16, 0x102) = D_80126B66;
    func_sc04_011_801888B8(o);
    func_8012B2CC(o);
    func_8012B178(o, 0xFFD00000);
    func_8002D4C8(0x88C, 0);
    func_8012AD44(o, 1);
}

s32 func_sc04_011_801886C4(s32 arg0) {
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc04_011_801E8A1C);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x800;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_011_80194818 | 0x20000000);
    AF(arg0, u16, 0x5C) = 0x8C00;
    func_sc04_011_80188AC4(arg0);
    func_8002D4C8(0x8F8, 0);
    return func_8012AD44(arg0, 2);
}

s32 func_sc04_011_80188764(s32 arg0) {
    AF(arg0, s16, 0xAE) = -5;
    AF(arg0, s32, 0x1C) = 0x100;
    return func_8012AD44(arg0, 3);
}

void func_sc04_011_80188794(u8 *arg0) {
    D_sc04_011_80194840[AF(arg0, u16, 2)]();
}

void func_sc04_011_801887D0(u8 *arg0) {
    s16 temp_v0;

    AF(arg0, u8, 0xC1) = 1;
    temp_v0 = AF(AF(arg0, void *, 0x20), u16, 0x1A) - 0x200;
    AF(arg0, s16, 0x104) = temp_v0;
    if (temp_v0 < 0x801) {
        AF(arg0, s16, 0x104) = 0;
    }
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

void func_sc04_011_80188818(u8 *arg0) {
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    temp_a1 = AF(arg0, void *, 0x20);
    if (AF(arg0, s16, 0x104) < AF(temp_a1, s16, 0x1A)) {
        AF(temp_a1, u16, 0x18) = (u16) (AF(temp_a1, u16, 0x18) - 0x10);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, s16, 0x1A) = (s16) ((u16) AF(temp_v1, s16, 0x1A) - 0x80);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1C) = (u16) (AF(temp_v1_2, u16, 0x1C) - 0x10);
    } else {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
    }
    if (AF(AF(arg0, void *, 0x20), s16, 0x1A) <= 0) {
        func_8012C218((s32) arg0);
    }
}

void func_sc04_011_801888B8(u8 *o) {
    WMtx m;
    SV8 v;

    m = D_800AE620;
    m.t[0] = AF(o, s16, 0x6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    RotMatrixZ(AF(AF(o, u8 *, 0x20), s16, 0x14), &m);
    func_8012F038(&m, o + 0xFE, &v);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (-ratan2(v.z, v.x) - 0x400) & 0xFFF;
    m = D_800AE620;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    func_8012F038(&m, &v, &v);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = (ratan2(v.z, v.y) + 0x400) & 0xFFF;
}

extern s16 D_sc04_011_80194814;
extern s16 D_sc04_011_80194816;
extern s32 func_8012DEB8();
extern s16 D_80126B98;
s32 func_sc04_011_80188A30(u8 *o) {
    SV8 a;
    SV8 b;
    u16 t;

    a.x = a.y = 0;
    b.x = b.y = 0;
    a.z = D_sc04_011_80194814;
    b.z = D_sc04_011_80194816;
    if (func_8012DEB8(o, &a, &b)) {
        D_80126B98 = 0x18;
        if (AF(o, s16, 0x106) == 0) {
            t = D_sc04_011_801F161E;
            AF(o, s16, 0x106) = 1;
            D_sc04_011_801F161E = t + 1;
        }
    }
}

void func_sc04_011_80188AC4(u8 *o) {
    u8 *q;
    SV8 s;

    q = (u8 *)func_80132EF4(o, 0x22);
    if (q != 0) {
        AF(AF(q, u8 *, 0x20), u16, 0x2C) = 0xC020;
        AF(q, u16, 0x34) = 0x7001;
        AF(q, s16, 0xA) -= 0x10;
    }
    s.x = AF(o, s16, 6);
    s.y = AF(o, s16, 0xA) - 0x10;
    s.z = AF(o, s16, 0xE);
    func_sc04_011_8018AD3C((u8 *)&s, 0, 8);
    func_sc04_011_8018AD3C((u8 *)&s, 0, 8);
    func_sc04_011_8018AD3C((u8 *)&s, 0, 8);
    func_sc04_011_8018AD3C((u8 *)&s, 0, 8);
}

void func_sc04_011_80188B78(u8 *o) {
    WMtx m;
    SV8 s;
    V4 a;
    V4 b;
    u8 *e;
    s32 n;
    s32 i;
    s16 y;

    m = D_800AE620;
    y = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    n = 9;
    if (y < 0x801) {
        n = 4;
    } else if (y < 0xC01) {
        n = 8;
    }
    i = 0;
    RotMatrixY(rand() & 0xFF0, &m);
    SetRotMatrix(&m);
    for (; i < n; i++) {
        ApplyRotMatrix(&D_sc04_011_80194850[i], &a);
        s.x = AF(o, s16, 6) + a.x;
        s.y = AF(o, s16, 0xA) + a.y;
        s.z = AF(o, s16, 0xE) + a.z;
        s.pad = 0x10;
        b.x = a.x << 15;
        b.y = (a.y * 3) << 13;
        b.z = a.z << 15;
        b.pad = 0;
        e = (u8 *)func_sc04_011_8018F68C(&s, &b, 0xE08060);
        if (e != 0) {
            AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC010;
            AF(AF(e, u8 *, 0x20), s16, 0x18) = (rand() & 0x1F0) + 0x600;
        }
    }
    func_8012C218(o);
}

void func_sc04_011_80188D18(u8 *arg0) {
    D_sc04_011_801948D0[AF(arg0, u16, 2)]();
}

void func_sc04_011_80188D54(u8 *arg0) {
    func_sc04_011_80181868(AF(arg0, s32, 0x64));
}

void func_sc04_011_80188D78(u8 *o) {
    s32 d = AF(o, s16, 0xA) - AF(AF(o, u8 *, 0x64), s16, 0xA);
    u8 *p = AF(o, u8 *, 0xCC);
    s16 v;
    if ((u32)d > 0x600) {
        AF(p, u32, 4) |= 0x80000000;
    } else {
        v = (0x600 - d) * 0x5000 / 0x600;
        AF(p, u32, 4) &= 0x7FFFFFFF;
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = v;
    }
}

s32 func_sc04_011_80188E00(s32 arg0, s32 arg1) {
    s16 temp_v0_3;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_4;
    void *temp_v1;

    temp_v0 = func_80143970(arg0);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0xCC);
        AF(temp_v0, s16, 0) = 0x278;
        temp_v0_2 = AF(arg1, u16, 0);
        AF(temp_v1, u16, 8) = temp_v0_2;
        AF(temp_v0, u16, 6) = temp_v0_2;
        temp_v0_3 = AF(arg1, u16, 2) - 0x10;
        AF(temp_v1, s16, 0xA) = temp_v0_3;
        AF(temp_v0, s16, 0xA) = temp_v0_3;
        temp_v0_4 = AF(arg1, u16, 4);
        AF(temp_v1, u16, 0xC) = temp_v0_4;
        AF(temp_v0, u16, 0xE) = temp_v0_4;
        AF(temp_v1, s16, 0x10) = 0x400;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x14) = 0x200;
    }
    return temp_v0;
}

void func_sc04_011_80188E88(u8 *o) {
    u8 unused[8];
    s32 m;
    s32 i;

    m = func_8012C1B8();
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        func_8001C810(m, &D_sc04_011_801E6094);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1100;
        func_sc04_011_8018A42C(o, &D_sc04_011_801E7944);
        AF(o, u16, 0xA)++;
        break;
    case 1:
        D_sc04_011_801EFEE8.a = D_sc04_011_801E689C;
        D_sc04_011_801EFEE8.b = 0;
        func_8001C214(AF(o, s32, 0x20), &D_sc04_011_801EFEE8);
        func_sc04_011_8018A42C(o, &D_sc04_011_801E7968);
        AF(o, u16, 0xA)++;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        i = AF(o, s16, 0x70) - 2;
        D_sc04_011_801EFEF0[i].a = D_sc04_011_801E73D4[i];
        D_sc04_011_801EFEF0[i].b = 0;
        func_8001C214(AF(o, s32, 0x20), &D_sc04_011_801EFEF0[i]);
        func_sc04_011_8018A42C(o, &D_sc04_011_801E798C + i * 12);
        func_8012B23C(o);
        AF(o, s32, 0x10) = (AF(o, s16, 6) - AF(AF(o, u8 *, 0x64), s16, 6)) << 13;
        AF(o, s32, 0xE0) = AF(o, s32, 0x14) = (AF(o, s16, 0xA) - AF(AF(o, u8 *, 0x64), s16, 0xA)) << 15;
        AF(o, s32, 0x18) = (AF(o, s16, 0xE) - AF(AF(o, u8 *, 0x64), s16, 0xE)) << 13;
        AF(o, s16, 0x106) = rand() & 0xF0;
        AF(o, s16, 0x108) = rand() & 0xF0;
        AF(o, s32, 0x1C) = AF(o, s16, 0x70);
        break;
    default:
        func_8001C214(AF(o, s32, 0x20), D_sc04_011_801948F0[AF(o, u16, 0x70) & 3]);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x500;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        func_8012B23C(o);
        AF(o, s16, 0x106) = rand() & 0xF0;
        AF(o, s16, 0x108) = rand() & 0xF0;
        AF(o, s32, 0x1C) = AF(o, s16, 0x70);
        break;
    }
    func_8012AD50(o);
}

void func_sc04_011_80189108(u8 *o) {
    AF(o, s32, 0x10) >>= 1;
    AF(o, s32, 0x14) = AF(o, s32, 0xE0) >> 1;
    AF(o, s32, 0x18) >>= 1;
    func_8012AD44(o, 2);
}

void func_sc04_011_8018914C(u8 *arg0) {
    D_sc04_011_80194904[AF(arg0, u16, 2)]();
}

void func_sc04_011_80189188(s32 arg0) {
    if (AF(arg0, s16, 0x70) == 0) {
        D_sc04_011_801EFEE4 = 0;
        D_sc04_011_801EFEE0[0] = D_sc04_011_801E6898;
        func_8001C924(AF(arg0, s32, 0x20), D_sc04_011_801EFEE0);
        func_sc04_011_8018A42C(arg0, (s32) &D_sc04_011_801E795C);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 1);
        AF(arg0, s32, 0xCC) = func_8012C658(0x272, 1, arg0);
        func_8012C658(0x272, 2, arg0);
        func_8012C658(0x272, 3, arg0);
        func_8012C658(0x272, 4, arg0);
        func_8012C658(0x272, 5, arg0);
        func_8012C658(0x272, 6, arg0);
        func_8002D4C8(0x84C, 0);
    }
}

void func_sc04_011_80189270(s32 a) {
    SV8 v;
    s32 i;
    u8 *p;
    s32 n = 6;

    for (i = 0; i < n; i++) {
        p = (u8 *) func_8012C658(0x272, (rand() & 3) | 8, a);
        if (p != 0) {
            v.x = D_sc04_011_80194910[i].x + (rand() & 0x1F) - 0x10;
            v.y = D_sc04_011_80194910[i].y;
            v.z = D_sc04_011_80194910[i].z + (rand() & 0x1F) - 0x10;
            AF(p, s16, 0x6) += v.x;
            AF(p, s16, 0xA) += v.y;
            AF(p, s16, 0xE) += v.z;
            AF(p, s32, 0x10) = v.x << 13;
            AF(p, s32, 0xE0) = AF(p, s32, 0x14) = -0x188000 - ((rand() & 0x3F0) << 8);
            AF(p, s32, 0x18) = v.z << 13;
        }
    }
    func_8002D4C8(0x946, 0);
}

s32 func_sc04_011_801893D4(u8 *o) {
    if (AF(o, s32, 0x14) < 0) {
        return 0;
    }
    return AF(o, s16, 0xA) >= AF(AF(o, u8 *, 0x64), s16, 0xA) - 0x40;
}

extern u8 D_sc04_011_801E793C;
void func_sc04_011_80189410(u8 *o) {
    if (AF(o, s16, 0x70) == 0) {
        func_8001C924(AF(o, s32, 0x20), &D_sc04_011_801E793C);
        AF(o, s16, 0xA) += 2;
        if (AF(o, s32, 0xCC) != 0) {
            func_8012C218(AF(o, s32, 0xCC));
            AF(o, s32, 0xCC) = 0;
        }
    }
}

s32 func_sc04_011_80189478(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 p;
    SV8 q;

    a.x = -D_sc04_011_801948D8[AF(o, s16, 0x70)];
    b.x = D_sc04_011_801948D8[AF(o, s16, 0x70)];
    a.y = b.y = 0;
    a.z = b.z = 0;
    func_8012F14C(AF(o, u8 *, 0x20) + 0x54, &a, &p);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x54, &b, &q);
    if (func_80135888(D_80126B78, D_80126B90, &p, &q) != 0) {
        func_8012F568(1, 1, 0, 0x10, &q, &D_801152A8);
        return 1;
    }
    return 0;
}

void func_sc04_011_80189578(u8 *o) {
    s32 r;
    s32 t;

    r = func_8012C1B8(o);
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, &D_sc04_011_801E33A0);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1400;
    if (AF(o, s16, 0x70) != 0) {
        t = (AF(o, s16, 0x70) - 1) * 8;
        AF(o, u16, 0x6) = *(u16 *)((u8 *)D_sc04_011_80194978 + t);
        t = (AF(o, s16, 0x70) - 1) * 8;
        AF(o, u16, 0xA) = *(u16 *)((u8 *)D_sc04_011_8019497A + t);
        t = (AF(o, s16, 0x70) - 1) * 8;
        AF(o, u16, 0xE) = *(u16 *)((u8 *)D_sc04_011_8019497C + t);
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, u8 *, 0xBC) = &D_sc04_011_80194960;
    AF(o, s16, 0xAE) = -5;
    AF(o, s32, 0x58) = (s32)&D_sc04_011_80194940 | 0x20000000;
    AF(o, u16, 0x5C) = 0x8C00;
    AF(o, s32, 0xB4) = 0;
    AF(o, u8, 0xC1) = 0;
    AF(o, u8, 0x75) = 0xC;
    AF(o, s32, 0xC4) |= 2;
    AF(o, s32, 0x1C) = rand() & 0xF;
    func_8012AD50(o);
}

void func_sc04_011_801896BC(u8 *arg0) {
    D_sc04_011_801949B0[AF(arg0, u16, 2)]();
}

void func_sc04_011_801896F8(u8 *arg0) {
    s16 temp_v0;

    AF(arg0, u8, 0xC1) = 1;
    temp_v0 = AF(AF(arg0, void *, 0x20), u16, 0x1A) - 0x180;
    AF(arg0, s16, 0xFE) = temp_v0;
    if (temp_v0 < 0x601) {
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x100) = 0x10;
    }
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_80132EF4((s32) arg0, 0x79);
}

void func_sc04_011_80189764(u8 *arg0) {
    s16 temp_v1;
    u16 temp_v0;
    void *temp_a1;
    void *temp_v1_2;

    if (AF(AF(arg0, void *, 0x20), s16, 0x1A) < 0x601) {
        temp_v0 = AF(arg0, u16, 0x100) - 1;
        AF(arg0, u16, 0x100) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            func_80132EF4((s32) arg0, 0x79);
        }
    }
    temp_a1 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a1, s16, 0x1A);
    if (AF(arg0, s16, 0xFE) < temp_v1) {
        AF(temp_a1, s16, 0x1A) = (s16) (temp_v1 - 0x30);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1C) = (u16) (AF(temp_v1_2, u16, 0x1C) - 0xC);
    } else {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0xAE) = -5;
    }
    if (AF(arg0, s16, 0xFE) != 0) {
        func_sc04_011_8018985C((s32) arg0, (s32) &D_sc04_011_80194950);
    }
    if (AF(AF(arg0, void *, 0x20), s16, 0x1A) <= 0) {
        func_8012C218((s32) arg0);
    }
}

s32 func_sc04_011_8018985C(u8 *o, u8 *p) {
    WMtx m;
    SV8 d;
    SV8 a;
    SV8 b;
    SV8 x;

    d.x = D_80126B5E - AF(o, u16, 6);
    d.z = D_80126B66 - AF(o, u16, 0xE);
    func_80017DC4(AF(o, u8 *, 0x20) + 0x18, &m);
    a.x = AF(p, u16, 4);
    b.x = AF(p, u16, 6);
    a.z = AF(p, u16, 0xC);
    b.z = AF(p, u16, 0xE);
    gte_SetRotMatrix(&m);
    gte_ldv0(&a);
    gte_rtv0();
    gte_stsv(&a);
    gte_SetRotMatrix(&m);
    gte_ldv0(&b);
    gte_rtv0();
    gte_stsv(&b);
    if (d.x > a.x && d.x < b.x && d.z > a.z && d.z < b.z) {
        func_8012F568(1, 0x4001, 0, 0x14, &x, &D_801152A8);
        return 1;
    }
    return 0;
}

void func_sc04_011_80189A24(u8 *arg0) {
    D_sc04_011_801949B8[AF(arg0, u16, 2)]();
}

u8 *func_sc04_011_80189A60(void) {
    u8 *p = &D_sc04_011_801EFF20;
    s32 i;

    for (i = 0; i < 4; i++, p += 0x40) {
        if (p[0xB] == 0) {
            return p;
        }
    }
    return 0;
}

s32 func_sc04_011_80189A98(s32 arg0) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &D_sc04_011_801EFF20;
    var_s1 = 0;
    do {
        func_800233CC((s32) var_s0, 0x40);
        AF(var_s0, u8, 0xB) = 0;
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x40);
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc04_011_80189AEC(u8 *o) {
    s32 k;
    s32 t;
    u16 *p;

    AF(o, s32, 0x20) = func_8012C1B8();
    if (AF(o, s32, 0x20) == 0) {
        func_8012CAE4(o);
        return;
    }
    if (AF(o, s16, 0x70) < 0x10) {
        D_sc04_011_801F0020[AF(o, s16, 0x70)].a = D_sc04_011_801E4928[AF(o, s16, 0x70)];
        D_sc04_011_801F0020[AF(o, s16, 0x70)].b = 0;
        func_8001C214(AF(o, u8 *, 0x20), &D_sc04_011_801F0020[AF(o, s16, 0x70)]);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        func_sc04_011_8018A42C(o, &D_sc04_011_801E5888[AF(o, s16, 0x70)]);
        if (AF(o, s16, 0x70) == 0xF) {
            p = &D_sc04_011_801949DC;
            *p = D_sc04_011_801949F0;
            AF(o, s32, 0x58) = (s32)((u8 *)&D_sc04_011_801949DC - 0xC) | 0x10000000 | 0x40000000;
            AF(o, u16, 0x5C) = 0xCC00;
            AF(o, u8, 0x75) = 2;
        }
        AF(o, s16, 0xFE) = 1;
    } else {
        k = AF(o, s16, 0x70) - 0x10;
        t = D_sc04_011_801E57E4[k];
        D_sc04_011_801F00A0[k].b = 0;
        D_sc04_011_801F00A0[k].a = t;
        func_8001C810(AF(o, u8 *, 0x20), &D_sc04_011_801F00A0[k]);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1008;
        func_sc04_011_8018A42C(o, &D_sc04_011_801E5948[AF(o, s16, 0x70)]);
        AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x01000180;
        AF(o, s16, 0xFE) = 0;
        AF(o, s32, 0x48) >>= 1;
        if (AF(o, s16, 0x70) == 0x10) {
            AF(o, s32, 0x58) = (s32)&D_sc04_011_801949E0 | 0x10000000 | 0x40000000;
            AF(o, u16, 0x5C) = 0xCC00;
            AF(o, u8, 0x75) = 2;
        } else {
            AF(o, s16, 0x5C) = 0;
        }
    }
    func_8012B23C(o);
    func_8012AD50(o);
}

void func_sc04_011_80189D38(s32 arg0) {
    u16 temp_v1;

    if (AF(arg0, s16, 0xFE) != 0) {
        func_sc04_011_80189EAC(arg0);
        temp_v1 = AF(arg0, u16, 0x70);
        if (temp_v1 & 1) {
            D_sc04_011_801949DC = D_sc04_011_801949F2[((s32) (temp_v1 << 0x10) >> 0x11)];
        }
        func_8012C218(arg0);
        func_8002D4C8(0x84C, 0);
        return;
    }
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_011_801949C0 | 0x40000000);
    AF(arg0, u16, 0x5C) = 0xCC00;
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s32, 0x1C) = (s32) ((((s16) AF(arg0, u16, 0x70) - 0x10) << 5) + 0x10);
    func_8012AD44(arg0, 2);
}

extern void (*D_sc04_011_80194A04[])();
extern u16 D_sc04_011_801949C8[][8];

void func_sc04_011_80189DFC(u8 *o) {
    s32 t;

    D_sc04_011_80194A04[AF(o, u16, 2)]();
    if (AF(o, u16, 0) != 0) {
        if (AF(o, u8, 0x74) != 0) {
            t = D_sc04_011_801949C8[AF(o, s16, 0xFE)][0] - 1;
            D_80126B62 = AF(o, u16, 0xA) + t;
        }
        if (AF(o, s16, 0xA) >= -0x3FF) {
            func_8012C218(o);
        }
    }
}

s32 func_sc04_011_80189EAC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8012C658(0x276, var_s0, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 8;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc04_011_80189F6C(s32 arg0, s32 arg1);
void func_sc04_011_80189EFC(u8 *o) {
    SV8 v;

    v.x = AF(o, u16, 0x6) + (rand() & 0x3F) - 0x20;
    v.y = AF(o, u16, 0xA) - 0x40;
    v.z = AF(o, u16, 0xE) + (rand() & 0xFF) - 0x80;
    func_sc04_011_80189F6C((s32)o, (s32)&v);
}

void func_sc04_011_80189F6C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_801290DC(0x22, arg1);
    if (temp_v0 != 0) {
        AF(AF(temp_v0, void *, 0x20), u16, 0x2C) = 0xC020;
        AF(temp_v0, s32, 0x34) = 0x4001;
        AF(temp_v0, s32, 0x10) = (s32) (((rand() & 0x7FF0) - 0x4000) * 0x10);
        AF(temp_v0, s32, 0x18) = (s32) (((rand() & 0x7FF0) - 0x4000) * 0x10);
    }
}

void func_sc04_011_80189FDC(u8 *arg0) {
    D_sc04_011_80194A60[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018A018(s32 arg0) {
    func_sc04_011_8018A074();
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc04_011_801E30C4);
    func_sc04_011_8018A42C(arg0, (s32) &D_sc04_011_801E5870);
    AF(arg0, s32, 0x58) = 0;
    func_8002D4C8(0x84C, 0);
}

void func_sc04_011_8018A0E0(s32 o);
void func_sc04_011_8018A074(u8 *o) {
    s32 i;
    s32 r;

    for (i = 0; i < 4; i++) {
        r = func_8012C658(0x256, i, o);
        if (r != 0) {
            func_8012C658(0x256, i + 4, r);
        }
    }
    func_sc04_011_8018A0E0(o);
}

void func_sc04_011_8018A0E0(s32 o) {
    WMtx m;
    s32 i;
    u8 *e;

    m = D_800AE620;
    RotMatrixZ(-0x200, &m);
    for (i = 0; i < 6; i++) {
        e = (u8 *)func_80132EF4(o, 0x22);
        if (e != 0) {
            AF(e, s32, 0x34) = 0x6002;
            ApplyMatrixLV(&m, &D_sc04_011_80194A68, e + 0x10);
        }
        RotMatrixZ(0x100, &m);
    }
}

void func_sc04_011_8018A1B4(u8 *o) {
    SV8 d;
    u8 *r;

    r = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    if (AF(o, s16, 0x70) < 4) {
        func_8001C214(r, D_sc04_011_80194A78[AF(o, s16, 0x70)]);
        func_sc04_011_8018A42C(o, &D_sc04_011_801E5810[AF(o, s16, 0x70)]);
        func_8012B23C(o);
        AF(o, s32, 0x10) = 0xFFFA0000 - ((AF(o, s16, 6) - AF(AF(o, u8 *, 0x64), s16, 6)) << 13);
        AF(o, s32, 0x14) = ((AF(o, s16, 0xA) - AF(AF(o, u8 *, 0x64), s16, 0xA)) << 13) + 0xFFE80000;
        AF(o, s32, 0x18) = ((AF(o, s16, 0xE) - AF(AF(o, u8 *, 0x64), s16, 0xE)) << 13) + 0xFFF80000;
    } else {
        func_8001C214(r, D_sc04_011_801948F0[AF(o, s16, 0x70) & 3]);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x300;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        d.x = (rand() & 0x3F) - 0x20;
        d.y = (rand() & 0x3F) - 0x20;
        d.z = (rand() & 0x3F) - 0x20;
        AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + d.x;
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) + d.y;
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + d.z;
        func_8012B23C(o);
        AF(o, s32, 0x10) = AF(AF(o, u8 *, 0x64), s32, 0x10) + (d.x << 14);
        AF(o, s32, 0x14) = AF(AF(o, u8 *, 0x64), s32, 0x14) + (d.y << 14);
        AF(o, s32, 0x18) = AF(AF(o, u8 *, 0x64), s32, 0x18) + (d.z << 14);
    }
    AF(o, s16, 0x106) = rand() & 0xF0;
    AF(o, s16, 0x108) = rand() & 0xF0;
    AF(o, s32, 0x1C) = AF(o, s16, 0x70);
    func_8012AD50(o);
}

void func_sc04_011_8018A3F0(u8 *arg0) {
    D_sc04_011_80194A88[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018A42C(s32 arg0, s32 arg1) {
    AF(arg0, u16, 6) = (u16) AF(arg1, u16, 0);
    AF(arg0, u16, 0xA) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 0xE) = (u16) AF(arg1, u16, 4);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg1, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg1, u16, 8);
    AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(arg1, u16, 0xA);
}

void func_sc04_011_8018A47C(s32 arg0) {
    AF(arg0, s16, 0xFC) = 1;
}

void func_sc04_011_8018A488(u8 *arg0) {
    D_sc04_011_80194A90[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018A4C4(u8 *o) {
    s32 m;
    u8 *e;
    u8 *p;
    s16 c;
    s32 t;

    m = func_8012C1B8();
    p = (u8 *)m;
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    if (AF(o, s16, 0x70) < 0x10) {
        e = &D_sc04_011_80194A98 + AF(o, s16, 0x70) * 8;
        c = AF(e, u16, 6) & 7;
        AF(o, s16, 0xFE) = c;
        func_8001C214(m, D_sc04_011_801948F0[c]);
        c = AF(e, u16, 6) & 0xFFF0;
        AF(m, s16, 0x1C) = c;
        AF(m, s16, 0x1A) = c;
        AF(m, s16, 0x18) = c;
        AF(m, u16, 0x2C) |= 0x10;
        AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + AF(e, u16, 0);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) + AF(e, u16, 2);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + AF(e, u16, 4);
        func_8012B23C(o);
        AF(o, s32, 0x10) = AF(e, s16, 0) * 0xC00;
        AF(o, s32, 0x14) = (AF(e, s16, 2) << 12) - 0x80000;
        t = AF(e, s16, 4) * 0xC00;
        AF(o, s32, 0x1C) = AF(o, s16, 0x70);
        AF(o, s32, 0x18) = t;
    } else {
        func_8001C214(p, D_sc04_011_801948F0[rand() & 3]);
        AF(p, s16, 0x1C) = 0x600;
        AF(p, s16, 0x1A) = 0x600;
        AF(p, s16, 0x18) = 0x600;
        AF(p, u16, 0x2C) |= 0x10;
        AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + (rand() & 0x7F) - 0x40;
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) + (rand() & 0x7F) - 0x40;
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + (rand() & 0x7F) - 0x40;
        func_8012B23C(o);
        AF(o, s32, 0x10) = AF(AF(o, u8 *, 0x64), s32, 0x10) * 4 / 3;
        AF(o, s32, 0x14) = AF(AF(o, u8 *, 0x64), s32, 0x14) * 4 / 3;
        AF(o, s32, 0x18) = AF(AF(o, u8 *, 0x64), s32, 0x18) * 4 / 3;
    }
    AF(o, s16, 0x106) = rand() & 0xF0;
    AF(o, s16, 0x108) = rand() & 0xF0;
    func_8012AD50(o);
}

void func_sc04_011_8018A748(u8 *arg0) {
    D_sc04_011_80194B18[AF(arg0, u16, 2)]();
}

s32 func_sc04_011_8018A784(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_v0_2 = func_8012C658(0x215, var_s0, arg0);
        if (temp_v0_2 != 0) {
            func_8012C658(0x215, 0x10, temp_v0_2);
        }
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc04_011_8018A7E8(u8 *o) {
    typedef struct { s32 x, y, z, pad; } V4;
    SV8 s;
    V4 b;
    u8 *e;

    s.x = (rand() & 0x7F) - 0x40;
    s.y = (rand() & 0x7F) - 0x40;
    s.z = (rand() & 0x7F) - 0x40;
    b.x = s.x << 13;
    b.y = 0;
    b.z = s.z << 13;
    b.pad = 0xC000;
    s.x += AF(o, s16, 6);
    s.y += AF(o, s16, 0xA);
    s.z += AF(o, s16, 0xE);
    s.pad = 0x10;
    e = (u8 *)func_sc04_011_8018F68C(&s, &b, 0xC0C040);
    if (e != 0) {
        AF(AF(e, u8 *, 0x20), s16, 0x18) = (rand() & 0x1F0) + 0x600;
        AF(AF(e, u8 *, 0x20), u32, 0x4) |= 0x50000000;
        AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC030;
    }
}

void func_sc04_011_8018A8EC(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    temp_s0 = (AF(arg0, s16, 0x70) * 8) + &D_sc04_011_80194A10;
    func_8001C214(temp_v0, D_sc04_011_801948F0[(AF(temp_s0, u16, 6) & 3)]);
    temp_v0_2 = AF(temp_s0, u16, 6) & 0xFFF0;
    AF(temp_v0, s16, 0x1C) = temp_v0_2;
    AF(temp_v0, s16, 0x1A) = temp_v0_2;
    AF(temp_v0, s16, 0x18) = temp_v0_2;
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, s16, 6) = (s16) (AF(AF(arg0, void *, 0x64), u16, 6) + AF(temp_s0, u16, 0));
    AF(arg0, s16, 0xA) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xA) + AF(temp_s0, u16, 2));
    AF(arg0, s16, 0xE) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xE) + AF(temp_s0, u16, 4));
    func_8012B23C((s32) arg0);
    AF(arg0, s32, 0x10) = (s32) ((s16) AF(temp_s0, u16, 0) << 0xE);
    AF(arg0, s32, 0x18) = (s32) ((s16) AF(temp_s0, u16, 4) << 0xD);
    AF(arg0, s32, 0x14) = (s32) -(((rand() & 0xF) + 0x10) << 0x10);
    AF(arg0, s16, 0x106) = (s16) (rand() & 0xF0);
    AF(arg0, s16, 0x108) = (s16) (rand() & 0xF0);
    func_8012AD50((s32) arg0);
}

void func_sc04_011_8018AA34(u8 *arg0) {
    D_sc04_011_80194B24[AF(arg0, u16, 2)]();
}

extern s32 func_sc04_011_8018AAE4();
void func_sc04_011_8018AA70(u8 *o) {
    SV8 v;
    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    v.x = -0x28;
    v.y = 0x20;
    v.z = -0x50;
    func_sc04_011_8018AAE4(o, &v);
    v.x = 0x28;
    func_sc04_011_8018AAE4(o, &v);
}

s32 func_sc04_011_8018AAE4(u8 *o, SV8 *in) {
    typedef struct { s32 x, y, z, pad; } V4;
    SV8 s;
    V4 b;
    s32 flag;
    s32 r;

    RotTransSV(in, &s, &flag);
    s.y = -0x778;
    b.x = (s.x - AF(AF(o, u8 *, 0x20), s32, 0x48)) << 11;
    b.y = -0x30000;
    b.z = (s.z - AF(AF(o, u8 *, 0x20), s32, 0x50)) << 11;
    r = func_8012913C(0x22);
    if (r != 0) {
        AF(r, s16, 6) = s.x;
        AF(r, s16, 0xA) = s.y;
        AF(r, s16, 0xE) = s.z;
        AF(r, s32, 0x10) = b.x;
        AF(r, s32, 0x14) = b.y;
        AF(r, s32, 0x18) = b.z;
        AF(r, s16, 0x34) = 0x6002;
        AF(AF(r, u8 *, 0x20), u16, 0x2C) = 0xC010;
    }
    func_sc04_011_8018AD3C(&s, &b, 0x20);
    func_sc04_011_8018AD3C(&s, &b, 0x20);
    func_sc04_011_8018AD3C(&s, &b, 0x20);
    return r;
}

s32 func_sc04_011_8018AC50(u8 *o, SV8 *in);
s32 func_sc04_011_8018AC00(u8 *o) {
    SV8 v;
    v.x = -0x40;
    v.z = -0x50;
    func_sc04_011_8018AC50(o, &v);
    v.x = 0x40;
    return func_sc04_011_8018AC50(o, &v);
}

s32 func_sc04_011_8018AC50(u8 *o, SV8 *in) {
    typedef struct { s32 x, y, z, pad; } V4;
    V4 b;
    SV8 s;
    s32 r;

    s.x = in->x + AF(AF(o, u8 *, 0x20), s32, 0x48);
    s.y = -0x778;
    s.z = in->z + AF(AF(o, u8 *, 0x20), s32, 0x50);
    b.x = in->x << 11;
    b.y = -0x30000;
    b.z = 0;
    r = func_8012913C(0x22);
    if (r != 0) {
        AF(r, s16, 6) = s.x;
        AF(r, s16, 0xA) = s.y;
        AF(r, s16, 0xE) = s.z;
        AF(r, s32, 0x10) = b.x;
        AF(r, s32, 0x14) = b.y;
        AF(r, s32, 0x18) = b.z;
        AF(r, s16, 0x34) = 0x6002;
        AF(AF(r, u8 *, 0x20), u16, 0x2C) = 0xC010;
    }
    func_sc04_011_8018AD3C(&s, &b, 0x20);
    return r;
}

s32 func_sc04_011_8018AD3C(u8 *p, s32 *q, s32 c) {
    typedef struct { s32 x, y, z, pad; } V4;
    SV8 a;
    V4 b;
    s32 r;

    a.x = AF(p, u16, 0) + (rand() & 0x3F) - 0x1F;
    a.y = AF(p, u16, 2) + (rand() & 0x3F) - 0x1F;
    a.z = AF(p, u16, 4) + (rand() & 0x3F) - 0x1F;
    a.pad = c;
    if (q != 0) {
        b.x = q[0] * 22 / 16;
        b.y = q[1];
        b.z = q[2] * 22 / 16;
        b.pad = 0;
        r = func_sc04_011_8018F68C(&a, &b, 0xE08060);
    } else {
        r = func_sc04_011_8018F68C(&a, 0, 0xE08060);
    }
    if (r != 0) {
        AF(AF(r, u8 *, 0x20), u16, 0x2C) = 0xC080;
        AF(AF(r, u8 *, 0x20), u32, 0x4) |= 0x50000000;
        AF(AF(r, u8 *, 0x20), s16, 0x18) = (rand() & 0x1F0) + 0x600;
    }
    return r;
}

void func_sc04_011_8018AEA8(u8 *o) {
    u8 *m;
    UV4 *p;

    if ((AF(o, u8 *, 0x20) = m = (u8 *)func_8012C1B8(o)) == 0) {
        func_8012CAE4(o);
        return;
    }
    p = &D_sc04_011_80194B2C[AF(o, s16, 0x70)];
    func_8001C214(m, D_sc04_011_801948F0[p->pad & 7]);
    AF(m, u16, 0x18) = AF(m, u16, 0x1A) = AF(m, u16, 0x1C) = p->pad & 0xFFF0;
    AF(m, u16, 0x2C) |= 0x10;
    AF(o, s16, 6) = p->x + AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x68);
    AF(o, s16, 0xA) = p->y + AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x6C);
    AF(o, s16, 0xE) = p->z + AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x70);
    func_8012B21C(o);
    AF(o, s32, 0x10) = ((s16)p->x + (rand() & 0x1F) - 0x10) << 14;
    AF(o, s32, 0x14) = ((s16)p->y - 0x48) << 14;
    AF(o, s32, 0x18) = ((rand() & 0xF) - 8) << 14;
    AF(o, s16, 0x106) = rand() & 0xF0;
    AF(o, s16, 0x108) = rand() & 0xF0;
    AF(o, s32, 0x1C) = AF(o, s16, 0x70);
    func_8012AD50(o);
}

void func_sc04_011_8018B024(u8 *arg0) {
    D_sc04_011_80194B5C[AF(arg0, u16, 2)]();
}

s32 func_sc04_011_8018B060(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8012C658(0x2DD, var_s0, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 6;
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc04_011_8018B0B0(u8 *o, SV8 *v, s32 *w, s32 c) {
    typedef struct { s32 x, y, z, pad; } V4;
    SV8 s;
    V4 b;
    s32 flag;
    u8 *e;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(v, &s, &flag);
    if ((u16)c > 0x40) {
        c = 0x40;
    }
    s.pad = c;
    if (w != 0) {
        ApplyRotMatrixLV(w, &b);
        e = (u8 *)func_sc04_011_8018F68C(&s, &b, 0xC0C040);
    } else {
        e = (u8 *)func_sc04_011_8018F68C(&s, 0, 0xC0C040);
    }
    if (e != 0) {
        AF(AF(e, u8 *, 0x20), s16, 0x18) = (rand() & 0x1F0) + 0x600;
        AF(AF(e, u8 *, 0x20), u32, 0x4) |= 0x50000000;
        AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC040;
    }
}

void func_sc04_011_8018B1B4(u8 *o) {
    typedef struct { s16 x, y, z, w; B8 uv; CV c0; CV c1; s16 a, b; s32 code; } E20;
    E20 *d;
    s32 i;
    s32 j;
    u8 *q;

    d = (E20 *)D_sc04_011_801F00C0;
    for (i = 0; i < 8; i++, d++) {
        j = i * 8;
        q = AF(o, u8 *, *(s16 *)(D_sc04_011_80194B6A + j) * 4);
        if (q != 0) {
            d->x = *(u16 *)(D_sc04_011_80194B64 + j) + AF(AF(q, u8 *, 0x20), s32, 0x68);
            d->y = *(u16 *)(D_sc04_011_80194B66 + j) + AF(AF(q, u8 *, 0x20), s32, 0x6C);
            d->z = *(u16 *)(D_sc04_011_80194B68 + j) + AF(AF(q, u8 *, 0x20), s32, 0x70);
            d->uv = D_sc04_011_80194BA4[i];
            d->c0 = D_sc04_011_801ED994;
            d->c1 = D_sc04_011_801ED994;
            d->a = 0;
            d->b = 0;
            d->w = 0;
            d->code = 0x50000000;
        }
    }
    D_sc04_011_801F01C0 = 0;
    D_sc04_011_801F01C4 = 0;
}

void func_sc04_011_8018B2F8(s32 *tbl, s32 mode) {
    s16 n;
    u16 t;
    s32 w;
    s32 i;
    u8 *e;
    u8 *p;
    s32 v;
    s16 k;
    s32 q;
    u8 r;

    n = D_sc04_011_801F01C0;
    e = D_sc04_011_801F00C0;
    if (n < 8) {
        if (D_sc04_011_801F01C4 != 0) {
            D_sc04_011_801F01C4--;
        } else {
            k = n + 1;
            t = AF(D_sc04_011_80194BAA, u16, n * 8);
            AF(D_sc04_011_801F00C6, s16, n * 32) = 0x240;
            D_sc04_011_801F01C0 = k;
            D_sc04_011_801F01C4 = t;
            func_8002D4C8(0x8C1, 0);
        }
    }
    p = e + 0x10;
    i = 0;
top:
    do {
        if (tbl[AF(D_sc04_011_80194B6A, s16, i)] != 0) {
            if (AF(p, s16, -0xA) != 0) {
                if (mode == 0) {
                    if (AF(p, u16, 8) < 0x18) {
                        AF(p, u16, 8) += 3;
                        AF(p, u16, 0xA) += 0xC;
                    }
                    if (p[2] < 0xF0) {
                        p[2] += 0x10;
                        p[1] += 0x10;
                        p[0] += 0xA;
                    }
                } else {
                    if (AF(p, u16, 8) != 0) {
                        AF(p, u16, 8) -= 6;
                        AF(p, u16, 0xA) -= 0x18;
                    }
                    if (p[2] != 0) {
                        v = p[2] - 0x20;
                        q = v;
                        if (v < 0) q = 0;
                        p[2] = q;
                        p[1] = q;
                        q = p[0];
                        v = q - 0x14;
                        if (v < 0) r = 0; else r = v;
                        p[0] = r;
                    }
                }
            }
            func_sc04_011_8018F734(e);
        }
    } while (0);
    i += 8;
    p += 0x20;
    e += 0x20;
    if (i < 0x40) goto top;
}

u8 *func_sc04_011_8018B4E0(u8 *o) {
    u8 *e;

    func_800233CC(&D_sc04_011_801EFD80, 0x100);
    *(CV *)&D_sc04_011_801EFD80 = D_sc04_011_801ED994;
    *(CV *)&D_sc04_011_801EFD84 = D_sc04_011_801ED994;
    e = func_8012C194();
    if (e != 0) {
        func_8001CD9C(e, &D_sc04_011_801EFD80);
        AF(e, s16, 0x18) = 0xC00;
        AF(e, s16, 0x1A) = 0x1C00;
        AF(e, u16, 0x2C) = 0xC040;
        AF(e, u32, 4) |= 0x50000000;
        AF(e, s16, 8) = AF(AF(o, u8 *, 0x20), s32, 0x68);
        AF(e, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x6C);
        AF(e, s16, 0xC) = AF(AF(o, u8 *, 0x20), s32, 0x70);
    }
    return e;
}

void func_sc04_011_8018B5E4(u8 **t) {
    s32 i;
    u8 *q;
    u8 *r;
    s32 j;

    func_800233CC(&D_sc04_011_801EFD80, 0xC0);
    *(CV *) &D_sc04_011_801EFD80 = D_sc04_011_801ED994;
    *(CV *) &D_sc04_011_801EFD84 = D_sc04_011_801ED994;
    for (i = 0; (j = D_sc04_011_80194BE4[i]) >= 0; i++) {
        q = t[j];
        if (q != 0) {
            r = func_8012C194();
            if (r != 0) {
                func_8001CD9C(r, &D_sc04_011_801EFD80);
                AF(r, u16, 0x2C) = 0xC040;
                AF(r, u32, 0x4) |= 0x50000000;
                AF(r, s16, 0x18) = 0x1000;
                AF(r, s16, 0x1A) = 0x1000;
                AF(r, s16, 0x8) = AF(AF(q, u8 *, 0x20), s32, 0x68);
                AF(r, s16, 0xA) = AF(AF(q, u8 *, 0x20), s32, 0x6C);
                AF(r, s16, 0xC) = AF(AF(q, u8 *, 0x20), s32, 0x70);
            }
            AF(q, u8 *, 0xCC) = r;
        }
    }
}

void func_sc04_011_8018B744(u8 **tab) {
    s32 i;
    u8 v;
    s32 t;
    s32 w;
    u8 *p;
    u8 *m;
    u8 *c;

    c = &D_sc04_011_801EFD80 + 2;
    t = *c;
    if (t < 0x50) {
        w = t + 3;
        if (w > 0x50) {
            v = 0x50;
        } else {
            v = w;
        }
        D_sc04_011_801EFD81 = v;
        *c = v;
        D_sc04_011_801EFD80 += 2;
    }
    i = 0;
    while ((w = D_sc04_011_80194BE4[i]) >= 0) {
        p = tab[w];
        if (p != 0) {
            m = AF(p, u8 *, 0xCC);
            if (m != 0) {
                AF(m, s16, 8) = AF(AF(p, u8 *, 0x20), s32, 0x68);
                AF(m, s16, 0xA) = AF(AF(p, u8 *, 0x20), s32, 0x6C);
                AF(m, s16, 0xC) = AF(AF(p, u8 *, 0x20), s32, 0x70);
            }
        }
        i++;
    }
}

void func_sc04_011_8018B830(u8 **t) {
    s32 i;
    s32 j;
    u8 *q;
    u8 *r;

    for (i = 0; (j = D_sc04_011_80194BE4[i]) >= 0; i++) {
        q = t[j];
        if (q != 0) {
            r = AF(q, u8 *, 0xCC);
            if (r != 0 && AF(r, s16, 0x18) < 0x5000) {
                AF(r, s16, 0x18) += 0x100;
                AF(r, s16, 0x1A) += 0x100;
            }
        }
    }
}

void func_sc04_011_8018B8C0(s32 *arr) {
    s32 i;
    s32 k;
    u8 *e;
    for (i = 0; (k = D_sc04_011_80194BE4[i]) >= 0; i++) {
        e = (u8 *)arr[k];
        if (e != 0 && AF(e, s32, 0xCC) != 0) {
            func_80016714(AF(e, s32, 0xCC), 0x38);
        }
    }
}

extern CV D_sc04_011_801ED9B4;
s32 func_sc04_011_8018B948(u8 *o) {
    u8 *e;

    e = func_8012C194();
    if (e != 0) {
        func_8001CD9C(e, &D_sc04_011_801EFEA0);
        AF(e, u16, 0x2C) = 0xC010;
        AF(e, u32, 4) |= 0x50000000;
        func_800233CC(&D_sc04_011_801EFEA0, 0x40);
        *(CV *)&D_sc04_011_801EFEA0 = D_sc04_011_801ED9B4;
    }
    return (s32)e;
}

s32 func_sc04_011_8018B9D4(s32 arg0, s32 arg1) {
    s32 sp10;

    if ((arg0 != 0) && (arg1 != 0)) {
        SetRotMatrix(AF(arg0, s32, 0x20) + 0x34, arg1);
        SetTransMatrix(AF(arg0, s32, 0x20) + 0x34);
        RotTransSV((s32) &D_sc04_011_80194BEC, arg1 + 8, (s32) &sp10);
    }
    return func_sc04_011_8018BB44();
}

s32 func_sc04_011_8018BA44(s32 arg0, s32 arg1) {
    AF(arg1, s16, 8) = (s16) (AF(arg0, u16, 6) + AF(arg0, u16, 0x50));
    AF(arg1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52));
    AF(arg1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54));
    return func_sc04_011_8018BB44();
}

void func_sc04_011_8018BA9C(void) {
    *(u8 *)&D_sc04_011_801EFEA0 = 0xF0;
    *(u8 *)&D_sc04_011_801EFEA1 = 0xF0;
    *(u8 *)&D_sc04_011_801EFEA2 = 0x80;
}

s32 func_sc04_011_8018BAC4(void) {
    s16 v;
    v = *(u8 *)&D_sc04_011_801EFEA0;
    if (v != 0) { v -= 0x18; if (v < 0) v = 0; *(u8 *)&D_sc04_011_801EFEA0 = v; }
    v = *(u8 *)&D_sc04_011_801EFEA1;
    if (v != 0) { v -= 0x18; if (v < 0) v = 0; *(u8 *)&D_sc04_011_801EFEA1 = v; }
    v = *(u8 *)&D_sc04_011_801EFEA2;
    if (v != 0) { v -= 0xD; if (v < 0) v = 0; *(u8 *)&D_sc04_011_801EFEA2 = v; }
}

extern u8 D_sc04_011_801EFEA3;

s32 func_sc04_011_8018BB44(void) {
    u8 *f = &D_sc04_011_801EFEA3;

    if (*f == 0) {
        D_sc04_011_801EFEA0 -= 3;
        D_sc04_011_801EFEA1 -= 5;
        D_sc04_011_801EFEA2 -= 7;
        if ((u8)D_sc04_011_801EFEA2 < 0x61) {
            *f = 1;
        }
    } else {
        D_sc04_011_801EFEA0 += 3;
        D_sc04_011_801EFEA1 += 5;
        D_sc04_011_801EFEA2 += 7;
        if ((u8)D_sc04_011_801EFEA2 >= 0xE0) {
            *f = 0;
        }
    }
}

void func_sc04_011_8018BC08(void) {
    typedef struct { s32 x, y, z, pad; } V4;
    SV8 s;
    V4 b;
    s32 i;
    s32 e;

    for (i = 0; i < 0x20; i++) {
        s.x = (rand() & 0x3F0) + 0x300;
        s.y = (rand() & 0x1F0) - 0xA80;
        s.z = (rand() & 0x1F0) + 0x1800;
        s.pad = (rand() & 0x1F) + 0x50;
        b.x = ((rand() & 0xF) - 8) << 15;
        b.z = ((rand() & 0xF) - 8) << 15;
        b.y = 0x40000;
        b.pad = 0;
        e = func_sc04_011_8018F68C(&s, &b, 0xC0C040);
        if (e != 0) {
            AF(AF(e, u8 *, 0x20), s16, 0x18) = (rand() & 0x1F0) + 0x500;
            AF(AF(e, u8 *, 0x20), u32, 0x4) |= 0x50000000;
            AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC040;
        }
    }
}

void func_sc04_011_8018BD18(s32 arg0) {
    u16 sp10[3];
    s32 sp18;
    s32 temp_s0;

    if (arg0 != 0) {
        temp_s0 = func_80132EF4(arg0, 0x22);
        SetRotMatrix(AF(arg0, s32, 0x20) + 0x34);
        SetTransMatrix(AF(arg0, s32, 0x20) + 0x34);
        RotTransSV((s32) &D_sc04_011_80194BF4, (s32) sp10, (s32) &sp18);
        AF(temp_s0, u16, 6) = sp10[0];
        AF(temp_s0, u16, 0xA) = sp10[1];
        AF(temp_s0, u16, 0xE) = sp10[2];
        AF(AF(temp_s0, void *, 0x20), u16, 0x2C) = 0xC008;
        AF(temp_s0, s16, 0x34) = 0x6001;
        ApplyRotMatrixLV((s32) &D_sc04_011_80194BFC, temp_s0 + 0x10);
        AF(temp_s0, s32, 0x14) = (s32) (AF(temp_s0, s32, 0x14) + 0xFFFC0000);
    }
}

void func_sc04_011_8018BDCC(u8 *arg0) {
    D_sc04_011_80194C0C[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018BE08(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_011_801EA9FC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0xA) = 0x30;
    AF(arg0, s16, 0xE) = -0x28;
    AF(arg0, s16, 6) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0xC0;
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x400;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x400;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x400;
    func_8001C1E4(AF(arg0, s32, 0x20), AF(AF(arg0, void *, 0x64), s32, 0x20));
    func_sc04_011_801875D8((s32) &D_sc04_011_801EFD50, 0x160, 0x18F);
    func_sc04_011_80187698((s32) arg0);
    func_8012AD50((s32) arg0);
}

void func_sc04_011_8018BEEC(s32 arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    func_8012B2CC(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x18);
    if (temp_v0 < 0x1000) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0 + 0x400);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) + 0x400);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1C) = (u16) (AF(temp_v1_2, u16, 0x1C) + 0x400);
        return;
    }
    func_8001C924((s32) temp_a0, (s32) &D_sc04_011_801E9634);
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0xCC) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_8001C214(temp_v0_2, (s32) &D_sc04_011_801EA2A4);
        AF(temp_v0_2, u16, 0x2C) = (u16) (AF(temp_v0_2, u16, 0x2C) | 0x10);
        AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x50000000);
        AF(temp_v0_2, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v0_2, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0_2, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        AF(temp_v0_2, u16, 0x10) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
        func_8001C1E4(temp_v0_2, AF(AF(arg0, void *, 0x64), s32, 0x20));
    }
    func_sc04_011_80187B40(arg0);
    func_8012AD50(arg0);
}

void func_sc04_011_8018C024(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x100);
    func_8012B414();
    func_sc04_011_80187D68((s32) arg0);
    func_sc04_011_8018778C((s32) arg0);
    func_sc04_011_80187A04((s32) arg0);
}

void func_sc04_011_8018C07C(u8 *o) {
    u8 *p;

    func_8012931C();
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x18) >= 0x400) {
        AF(p, s16, 0x18) -= 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x400;
        if (!(AF(o, u16, 0x2C) & 1)) {
            D_sc04_011_801EFE60[0].a.r -= 8;
            D_sc04_011_801EFE60[0].a.g -= 0x20;
            D_sc04_011_801EFE60[0].a.b -= 0x30;
            func_sc04_011_801885C0(o);
        }
    } else {
        func_801292C8(o);
    }
}

void func_sc04_011_8018C14C(u8 *o) {
    SV8 v;
    s32 flag;
    u32 c;
    AF(o, s32, 0x20) = func_8012C1B8(o);
    if (AF(o, s32, 0x20) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), &D_sc04_011_801E81A4);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    SetRotMatrix(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc04_011_80194800, &v, &flag);
    AF(o, s16, 6) = v.x;
    c = AF(o, u32, 0xC4);
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    AF(o, u8, 0xC0) = 1;
    AF(o, u32, 0xC4) = c | 2;
    AF(o, u8 *, 0xBC) = &D_sc04_011_80194828;
    AF(o, s16, 0xAE) = -1;
    AF(o, s32, 0x58) = (s32)&D_sc04_011_80194808 | 0x40000000;
    AF(o, s32, 0xB4) = 0;
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x5C) = 0;
    AF(o, u8, 0x75) = 2;
    func_sc04_011_80188650(o);
}

void func_sc04_011_8018C260(u8 *o) {
    SV8 s;

    AF(AF(o, u8 *, 0x20), s16, 0x14) += 0x100;
    func_8012AD80(o);
    func_sc04_011_801888B8(o);
    s.x = AF(o, s16, 6);
    s.y = AF(o, s16, 0xA);
    s.z = AF(o, s16, 0xE) + 0x20;
    func_sc04_011_8018AD3C((u8 *)&s, 0, 8);
    func_sc04_011_8018AD3C((u8 *)&s, 0, 8);
    if (AF(o, s16, 0xA) >= -0x780) {
        func_sc04_011_801886C4((s32)o);
    } else {
        func_sc04_011_80188A30(o);
    }
}

void func_sc04_011_8018C310(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) + 0x800);
    func_sc04_011_8018985C((s32) arg0, (s32) &D_sc04_011_80194818);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) >= 0x1800) {
        func_sc04_011_80188764((s32) arg0);
    }
}

void func_sc04_011_8018C378(s32 arg0, s32 arg1) {
    void *temp_a0;
    void *temp_v0;

    if (func_8012BEE8(arg0, arg1) != 0) {
        func_8012C218(arg0);
        return;
    }
    if (AF(arg0, s32, 0x1C) < 0x18) {
        AF(arg0, s16, 0x5C) = 0;
        if (AF(arg0, s32, 0x1C) & 1) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        return;
    }
    if (AF(arg0, u8, 0x74) != 0) {
        func_80133298(arg0);
        func_sc04_011_8018985C(arg0, (s32) &D_sc04_011_80194818);
    }
}

void func_sc04_011_8018C440(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s32 *, 0x58) = &D_sc04_011_80194898;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s16, 6) = 0x500;
    AF(arg0, s16, 0xA) = -0x780;
    AF(arg0, s16, 0xE) = 0x1820;
    func_8012AD50((s32) arg0);
}

void func_sc04_011_8018C4BC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_80126B66 >= 0x14FF && D_80126B62 < -0x780 && (u16)(D_80126B58 - 2) >= 2) {
            func_80178B18(o, &D_sc04_011_801948A8);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_80178970(o)) {
            func_80178D18(o);
            AF(o, u16, 0x34)++;
        }
        break;
    }
}

void func_sc04_011_8018C58C(u8 *o) {
    if (AF(o, s16, 0x70) < 2) {
        if (AF(o, s16, 0x70) >= 0) return;
    }
    func_8012AD80(o);
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x106);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x108);
    if ((AF(o, s32, 0x1C) & 3) == 0) {
        func_sc04_011_8018A7E8(o);
    }
    AF(o, s32, 0x1C)++;
    if (func_sc04_011_801893D4(o)) {
        func_sc04_011_80189108(o);
    }
    func_sc04_011_80189478(o);
}

void func_sc04_011_8018C64C(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8012AD80((s32) arg0, arg1);
        func_sc04_011_80189478((s32) arg0);
        if (func_sc04_011_801893D4((s32) arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_8012C218((s32) arg0);
            return;
        }
        if (AF(arg0, s32, 0x1C) & 1) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        break;
    }
}

void func_sc04_011_8018C72C(u8 *arg0) {
    if (AF(arg0, u8, 0x74) != 0) {
        func_sc04_011_8018985C((s32) arg0, (s32) &D_sc04_011_80194950);
    }
}

void func_sc04_011_8018C764(u8 *o) {
    u8 *p;
    u8 *q;

    p = func_sc04_011_80189A60();
    if (p == 0) {
        func_801292C8(o);
    }
    p[0xB] = 1;
    *(CV *)p = D_sc04_011_801ED994;
    *(CV *)(p + 4) = D_sc04_011_801ED9A8;
    func_8001CD50(AF(o, u8 *, 0x20), p);
    AF(o, u8 *, 0x34) = p;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0xC00;
    q = AF(o, u8 *, 0x20);
    AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x400;
    AF(o, s16, 2)++;
}

void func_sc04_011_8018C838(u8 *arg0) {
    s16 temp_v0_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, void *, 0x20);
    temp_a1 = AF(arg0, void *, 0x34);
    AF(temp_v0, u16, 0x18) = (u16) (AF(temp_v0, u16, 0x18) + 0xA0);
    temp_a2 = AF(arg0, void *, 0x20);
    temp_v0_2 = (s16) AF(temp_a2, u16, 0x18);
    if (temp_v0_2 >= 0x1200) {
        AF(temp_a1, u8, 0xB) = 0;
        func_801292C8((s32) arg0);
        return;
    }
    AF(temp_a2, s16, 0x1A) = temp_v0_2;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x1E) = (u16) (AF(temp_v1, u16, 0x1E) + 0x20);
    AF(temp_a1, u8, 5) = (u8) (AF(temp_a1, u8, 5) - 5);
    AF(temp_a1, u8, 6) = (u8) (AF(temp_a1, u8, 6) - 8);
}

void func_sc04_011_8018C8CC(void) {
}

void func_sc04_011_8018C8D4(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        if (AF(arg0, s16, 0x84) == 0) {
            func_8002D4C8(0x84C, 0);
            AF(arg0, s16, 0x84) = (s16) ((u16) AF(arg0, s16, 0x84) + 1);
        }
        func_8012AD80(arg0);
        if (AF(arg0, s16, 0xFE) == 0) {
            func_sc04_011_80189EFC(arg0);
        }
    }
}

void func_sc04_011_8018C94C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_011_801E29B4);
    func_sc04_011_8018A42C((s32) arg0, (s32) &D_sc04_011_801E57F8);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_011_80194A50 | 0x40000000);
    AF(arg0, u16, 0x5C) = 0xCC00;
    AF(arg0, u8, 0x75) = 2;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1100;
    AF(temp_v1_2, s16, 0x1A) = 0x1100;
    AF(temp_v1_2, s16, 0x18) = 0x1100;
    func_8012AD50((s32) arg0);
}

void func_sc04_011_8018C9FC(void) {
}

void func_sc04_011_8018CA04(u8 *arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x108));
    func_8012AD80((s32) arg0, (s32) temp_a1);
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_sc04_011_8018A7E8((s32) arg0);
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    if (AF(arg0, s16, 0xA) >= -0x3FF) {
        func_8012C218((s32) arg0);
    }
}

void func_sc04_011_8018CA98(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_011_801E1AF4);
    func_8012AD50((s32) arg0);
}

void func_sc04_011_8018CAF0(u8 *arg0) {
    void *temp_a1;

    if ((AF(arg0, u16, 0x34) == 0) && (AF(arg0, s16, 0xFC) != 0)) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
        func_sc04_011_8018A784((s32) arg0, (s32) temp_a1);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        func_8002D4C8(0x7E2, 0);
    }
}

void func_sc04_011_8018CB68(u8 *arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x108));
    func_8012AD80((s32) arg0, (s32) temp_a1);
    if (AF(arg0, s16, 0x70) < 0x10) {
        if (AF(arg0, s32, 0x1C) & 1) {
            func_sc04_011_8018A7E8((s32) arg0);
        }
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    }
    if (AF(arg0, s16, 0xA) >= -0x3FF) {
        func_8012C218((s32) arg0);
    }
}

void func_sc04_011_8018CC1C(void) {
}

void func_sc04_011_8018CC24(s32 arg0, s32 arg1) {
    void *temp_a0;
    void *temp_a0_2;

    func_8012AD80(arg0, arg1);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x14) = (u16) (AF(temp_a0_2, u16, 0x14) + AF(arg0, u16, 0x108));
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_sc04_011_8018A7E8(arg0);
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    if (AF(arg0, s16, 0xA) >= -0x3FF) {
        func_8012C218(arg0);
    }
}

void func_sc04_011_8018CCB8(u8 *o) {
    SV8 v;

    v = D_sc04_011_801ED9AC;
    func_8012AD80(o);
    AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, s16, 0x106);
    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0x108);
    if ((AF(o, s32, 0x1C) & 3) == 0) {
        func_sc04_011_8018B0B0(o, &v, 0, 8);
    }
    AF(o, s32, 0x1C)++;
    if (AF(o, s16, 0xA) >= -0x77F) {
        func_8012C218(o);
    }
}

void func_sc04_011_8018CD8C(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_011_801EC144);
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0x600;
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = 0x20;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    func_8012AD50((s32) arg0, temp_a1);
}

void func_sc04_011_8018CE0C(u8 *o) {
    typedef struct { s16 v; } W16;
    u8 unused[8];
    s16 x;

    x = D_80126B5E;
    if (x >= 0x429 || ((W16 *)&D_80126B62)->v >= -0x6BF) {
        func_8012C218(o);
        return;
    }
    AF(o, s16, 6) = x;
    AF(o, s16, 0xA) = D_80126B62 - 0xE0;
    AF(o, s16, 0xE) = D_80126B66;
    AF(AF(o, u8 *, 0x20), s16, 0x10) -= 0x40;
    if (func_8012BEE8(o) != 0) {
        if (AF(o, u16, 0x34) == 0) {
            AF(AF(o, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
            AF(o, s32, 0x1C) = 0xC;
            AF(o, s16, 0x34) = 1;
        } else {
            AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
            AF(o, s32, 0x1C) = 4;
            AF(o, s16, 0x34) = 0;
        }
    }
}

s32 func_sc04_011_8018CF10(void) {
    return 0x5D;
}

void func_sc04_011_8018CF18(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_011_8018CF2C(void) {
    u8 *p = D_801151D4;
    s16 dx;
    s16 dz;
    s16 t;

    dx = AF(p, s32, 0x48) - AF(p, s32, 0x5C);
    dz = AF(p, s32, 0x50) - AF(p, s32, 0x64);
    t = ratan2(AF(p, s32, 0x4C) - AF(p, s32, 0x60), (s16)SquareRoot0(dx * dx + dz * dz));
    t = (t >> 2) + 0x58;
    D_800B9AB2 = t;
    t = ratan2(dx, dz);
    D_800B9AB0 = t >> 1;
}

void func_sc04_011_8018CFF4(u8 *arg0) {
    D_sc04_011_80194CDC[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018D030(u8 *arg0) {
    D_sc04_011_80194CE4[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018D06C(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_011_8018D0A0(s32 arg0, s32 arg1) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_011_8018D1F0(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_011_8018D1F0(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_011_8018D1F0(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_011_8018D1F0(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_011_8018D1F0(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_011_8018D1F0(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_011_8018D1F0(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_011_80194CEC;
    switch (t) {
    case 0:
        func_80149350((s32) &D_80126B58, (s32) p, (s32) &sp10);
        func_801290DC(0x56, (s32) &sp10);
        break;
    case 1:
        v = func_8012E544(0x245);
        if (v != 0) {
            FaceHelper(v, (s32) p, (s32) &sp10);
            func_801290DC(0x56, (s32) &sp10);
        }
        break;
    default:
        q = (u8 *)&D_801202A0;
        for (i = 0; i < 0x60; i++, q += 0x10C) {
            if (*(u16 *)q == AF(p, s16, 6)) {
                FaceHelper((s32) q, (s32) p, (s32) &sp10);
                func_801290DC(0x56, (s32) &sp10);
            }
        }
        break;
    }
}

void func_sc04_011_8018D2DC(u8 *arg0) {
    D_sc04_011_80194D20[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018D318(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_011_80194D14, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    func_80146E90((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_011_8018D3FC(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_011_8018D468(u8 *o) {
    u8 *p;
    SV8 v;
    u16 a;

    p = AF(o, u8 *, 0x20);
    a = AF(o, u16, 0x2C) + 0x40;
    AF(o, u16, 0x2C) = a;
    v.z = rsin((s16)a) / 256;
    v.x = v.y = 0;
    func_800139C8(AF(p, s16, 0x12), &v, &v);
    AF(o, s16, 6) = AF(o, s16, 0x12) + v.x;
    AF(o, s16, 0xE) = AF(o, s16, 0x1A) + v.z;
    AF(o, s16, 0xA) -= AF(o, s16, 0x30);
    AF(o, s16, 0x2E) += 0x10;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1A) + AF(o, s16, 0x2E);
    AF(p, u8, 0x24) = AF(p, u8, 0x25) = AF(p, u8, 0x26) = AF(p, u8, 0x26) - 4;
    if (func_80146E98(o) != 0) {
        func_801292C8(o);
    }
}

extern void (*D_sc04_011_80194D5C[])();
extern void (*D_sc04_011_80194D6C[])();

void func_sc04_011_8018D554(u8 *o) {
    switch (AF(o, s16, 0x70)) {
    case 0:
        D_sc04_011_80194D5C[AF(o, u16, 2)](o);
        break;
    case 1:
        D_sc04_011_80194D6C[AF(o, u16, 2)](o);
        break;
    }
}

void func_sc04_011_8018D5D0(void) {
}

void func_sc04_011_8018D5D8(u8 *arg0) {
    u8 *p;
    s32 i;

    p = (u8 *)&D_sc04_011_801F01C8;
    func_80016714((s32) &D_sc04_011_801F01C8, 0x1100);
    AF(arg0, void *, 0xDC) = (void *) ((AF(arg0, s16, 0xFC) << 5) + &D_sc04_011_80194D90);
    for (i = 0; i < 0x40; i++) {
        func_sc04_011_8018D7C8((s32) p, (s32) AF(arg0, void *, 0xDC));
        p += 0x44;
    }
    func_8012BF4C((s32) arg0, 0xA);
    func_8012AD50((s32) arg0);
}

void func_sc04_011_8018D66C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_8002D4C8((s32) (*(u16 *)&D_sc04_011_80194D4C[(AF(arg0, s16, 0xFC) * 8)]), 0);
        func_8012AD50(arg0);
    }
}

void func_sc04_011_8018D6C4(u8 *o) {
    s32 i;
    u8 *p;

    for (i = 0; i < 0x40; i++) {
        p = (u8 *)&D_sc04_011_801F01C8 + i * 0x44;
        switch (AF(p, s16, 0)) {
        case 0:
            if (--AF(p, s16, 2) == -1) {
                AF(p, s16, 2) = 10;
                AF(p, s16, 0)++;
            }
            break;
        case 1:
            if (--AF(p, s16, 2) == -1) {
                func_sc04_011_8018D7C8(p, AF(o, void *, 0xDC));
            } else {
                func_sc04_011_8018DA18(o, p);
                func_sc04_011_8018D988(p);
            }
            break;
        }
    }
}

void func_sc04_011_8018D7C8(u8 *p, u8 *q) {
    s32 r;
    s16 t;

    AF(p, s16, 6) = AF(p, s16, 4) = 0x100;
    AF(p, s16, 0) = 0;
    AF(p, s16, 2) = (rand() & 7) + 1;
    r = rand() % AF(p, s16, 4);
    t = r;
    if (rand() & 1) {
        t = -r;
    }
    AF(p, s16, 0x3C) = t;
    r = rand() % AF(p, s16, 6);
    t = r;
    if (rand() & 1) {
        t = -r;
    }
    AF(p, s16, 0x3E) = t;
    AF(p, s16, 0x40) = 0;
    AF(p, s16, 0xC) = -AF(p, s16, 0x3E);
    AF(p, s16, 0xE) = (0x800 - AF(p, s16, 0x3C)) & 0xFFF;
    AF(p, s32, 8) = D_sc04_011_80194D2C[rand() & 7];
    func_800134FC(AF(p, s16, 0xC), q, p + 0x1C);
    func_8001382C(AF(p, s16, 0xE), p + 0x1C, p + 0x1C);
    func_800134FC(AF(p, s16, 0xC), q + 0x10, p + 0x2C);
    func_8001382C(AF(p, s16, 0xE), p + 0x2C, p + 0x2C);
    AF(p, s16, 0x16) = 0x1000;
    if (rand() & 1) {
        AF(p, s16, 0x14) = 0x1000;
        AF(p, s16, 0x18) = 0x7000;
    } else {
        AF(p, s16, 0x14) = AF(p, s16, 0x18) = 0x2000;
    }
}

void func_sc04_011_8018D988(u8 *p) {
    s32 t[3];

    t[0] = AF(p, s32, 0x1C) += AF(p, s32, 0x2C);
    t[1] = AF(p, s32, 0x20) += AF(p, s32, 0x30);
    t[2] = AF(p, s32, 0x24) += AF(p, s32, 0x34);
    AF(p, s16, 0x3C) += ((s16 *)t)[1];
    AF(p, s16, 0x3E) += ((s16 *)t)[3];
    AF(p, s16, 0x40) += ((s16 *)t)[5];
}

s32 func_sc04_011_8018DA18(s32 arg0, s32 arg1) {
    s32 sp18;

    func_80015978(arg0 + 4, (s32) &sp18);
    return func_sc04_011_8018DA64(arg1 + 0x14, arg1 + 0xC, (s32) &sp18, arg1 + 8, /* extra? */ (arg1 + 0x3C));
}

s32 func_sc04_011_8018DA64(s32 r, s32 t, s16 *a, s32 *c, s16 *b) {
    typedef struct { SV4 p[4]; s32 uv[4]; s32 col; s32 code; u8 n; } Arg;
    Arg g;
    WMtx m;
    s32 k;

    g.code = 0x50000000;
    g.n = 0x9B;
    g.p[0] = D_sc04_011_80194DD0;
    g.p[1] = D_sc04_011_80194DD8;
    g.p[2] = D_sc04_011_80194DE0;
    g.p[3] = D_sc04_011_80194DE8;
    k = *c;
    g.uv[0] = 0x10009C0;
    g.uv[1] = 0x10009DF;
    g.uv[2] = 0x11F09C0;
    g.uv[3] = 0x11F09DF;
    g.col = k;
    func_80017DC4(r, &m);
    func_80017E30(t, &m);
    m.t[0] = a[0] + b[0];
    m.t[1] = a[1] + b[1];
    m.t[2] = a[2] + b[2];
    return func_80016EF8(&g, &m);
}

void func_sc04_011_8018DBE8(void) {
}

extern s32 D_sc04_011_801F12CC;
void func_sc04_011_8018DBF0(u8 *o) {
    u8 *d;
    u8 *p;

    d = &D_sc04_011_801F12C8;
    AF(o, u8 *, 0x20) = p = (u8 *)func_8012C194();
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CD9C(p, d);
    AF(p, s16, 0x2C) = 3;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0;
    AF(p, s32, 4) |= 0x50000000;
    func_800233CC(d, 0x80);
    D_sc04_011_801F12CC = 0;
    func_sc04_011_8018DFDC(o);
    func_8012AD50(o);
}

void func_sc04_011_8018DC9C(u8 *arg0) {
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc04_011_8018DFDC((s32) arg0);
    temp_v0 = AF(temp_s0, u16, 0x18) + 0x200;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 >= 0x1001) {
        AF(temp_s0, u16, 0x18) = 0x1000U;
    }
    AF(temp_s0, u16, 0x1A) = (u16) AF(temp_s0, u16, 0x18);
    if ((s16) AF(temp_s0, u16, 0x18) == 0x1000) {
        func_8012BF4C((s32) arg0, 0x78);
        func_8012AD50((s32) arg0);
    }
}

void func_sc04_011_8018DD24(s32 arg0) {
    func_sc04_011_8018DFDC(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8002D4C8((s32) (*(u16 *)&D_sc04_011_80194D50[(AF(arg0, s16, 0xFC) * 8)]), 0);
        func_8012AD50(arg0);
    }
}

void func_sc04_011_8018DD84(u8 *arg0) {
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc04_011_8018DFDC((s32) arg0);
    temp_v0 = AF(temp_s0, u16, 0x18) + 0x200;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 >= 0x7001) {
        AF(temp_s0, u16, 0x18) = 0x7000U;
    }
    AF(temp_s0, u16, 0x1A) = (u16) AF(temp_s0, u16, 0x18);
    if ((s16) AF(temp_s0, u16, 0x18) == 0x7000) {
        func_80016940(4);
        func_8012AD50((s32) arg0);
    }
}

void func_sc04_011_8018DE0C(u8 *o) {
    u8 *p;
    s32 r;

    func_sc04_011_8018DFDC(o);
    p = &D_80126B58;
    if (func_80016978(4) & 0xFFFF) {
        r = func_8012E57C(0x3AF, 0);
        if (r != 0) {
            func_8012C098(r);
        }
        if (AF(o, s16, 0xFC) == 0) {
            func_8014708C((s32) p);
            func_801472C8((s32) p);
        } else {
            func_80147084((s32) p);
            func_801472B4((s32) p);
        }
        func_8012AD50(o);
    }
}

void func_sc04_011_8018DEB0(s32 arg0) {
    func_sc04_011_8018DFDC(arg0);
    if (func_80016978(0) & 0xFFFF) {
        func_8012AD50(arg0);
    }
}

void func_sc04_011_8018DEF4(u8 *arg0) {
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc04_011_8018DFDC((s32) arg0);
    temp_v0 = AF(temp_s0, u16, 0x1A) - 0x800;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    if ((s16) temp_v0 < 0x100) {
        AF(temp_s0, u16, 0x1A) = 0x100U;
    }
    if ((s16) AF(temp_s0, u16, 0x1A) == 0x100) {
        func_8012AD50((s32) arg0);
    }
}

void func_sc04_011_8018DF6C(u8 *arg0) {
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc04_011_8018DFDC((s32) arg0);
    temp_v0 = AF(temp_s0, u16, 0x18) - 0x800;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(temp_s0, u16, 0x18) = 0U;
    }
    if ((s16) AF(temp_s0, s16, 0x18) == 0) {
        func_8012C098((s32) arg0);
    }
}

void func_sc04_011_8018DFDC() {
    s32 *p = (s32 *)&D_sc04_011_801F12C8;

    if (D_800B99DA & 1) {
        *p = 0xE0E0E0;
    } else {
        *p = 0xFFFFFF;
    }
}

void func_sc04_011_8018E010(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc04_011_801F141C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc04_011_8018E034(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc04_011_8018E0D4(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc04_011_8018E1F0(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc04_011_8018E0D4(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc04_011_801F1414 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc04_011_801F1418 = (s16) arg1;
    D_sc04_011_801F141A = (s16) arg2;
    D_sc04_011_801F1416 = temp_v0;
    return (s32) temp_v0;
}

void func_sc04_011_8018E104(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc04_011_801F1414 = sp10[0];
    D_sc04_011_801F1416 = sp10[1];
}

void func_sc04_011_8018E17C(s32 arg0) {
    s16 *p = &D_sc04_011_801F141A;
    *p += arg0;
}

void func_sc04_011_8018E198(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc04_011_8018E2C4();
    if (temp_v0 >= 0) {
        func_sc04_011_8018E1F0(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc04_011_8018E1F0(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc04_011_801F141C + arg0 * 14);
    e->a = arg1[0];
    e->c0 = *(struct C8E8 *)arg2;
    e->c0.cd = 0;
    e->c1 = *(struct C8E8 *)arg3;
    e->c1.cd = 0;
    e->y = arg1[1] + (rand() & 0x3F) - 0x20;
    e->z = (arg1[2] * ((rand() & 0x7F0) + 0xC00)) >> 12;
    if (arg1[3] != 0) {
        e->c0.cd = 1;
        e->c1.cd = e->z;
        e->z = 0;
    }
}

s32 func_sc04_011_8018E2C4(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc04_011_801F141C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc04_011_8018E300(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc04_011_801F141C, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc04_011_8018E34C(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc04_011_801F141C, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc04_011_8018E428(i);
            switch (AF(p, u8, 9)) {
            case 1:
                v = AF(p, s16, 4);
                if (v < AF(p, u8, 13)) {
                    AF(p, s16, 4) = v + 8;
                } else {
                    AF(p, u8, 9) = 0;
                }
                break;
            case 2:
                w = AF(p, s16, 4);
                if (w == 0 || (w -= 0x10, AF(p, s16, 4) = w, w <= 0)) {
                    AF(p, u16, 0) = 0;
                }
                break;
            }
        }
    }
}

void func_sc04_011_8018E428(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = D_800AE620;
    p = g_PrimNext;
    g_PrimNext = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc04_011_801F141C + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc04_011_801F1414;
    cy = D_sc04_011_801F1416;
    RotMatrixZ(D_sc04_011_801F141A, &m);
    s.x = s.y = s.z = D_sc04_011_801F1418;
    ScaleMatrix(&m, &s);
    v.x = AF(r, u16, 0);
    v.y = v.z = 0;
    AF(p, u16, 8) = cx;
    AF(p, u16, 0xA) = cy;
    RotMatrixZ(AF(r, s16, 2) - (AF(r, s16, 4) >> 1), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cy + o.y;
    RotMatrixZ(AF(r, s16, 4), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x18) = cx + o.x;
    AF(p, u16, 0x1A) = cy + o.y;
    ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

s32 func_sc04_011_8018E6EC(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc04_011_801F1314;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc04_011_8018E710(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc04_011_8018E738((s32) &sp10);
}

s32 func_sc04_011_8018E738(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc04_011_801ED9B8;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc04_011_8018E7C0((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc04_011_8018E7C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc04_011_8018E82C(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc04_011_8018E960(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc04_011_8018E82C(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc04_011_801F1308.a = p[0];
        D_sc04_011_801F1308.b = p[1];
    } else {
        D_sc04_011_801F1308.a = 0;
        D_sc04_011_801F1308.b = 0;
    }
    D_sc04_011_801F1310 = c[0];
    D_sc04_011_801F1311 = c[1];
    D_sc04_011_801F1312 = c[2];
    AF(&D_sc04_011_801F1308, s32, 4) = g << 16;
}

void func_sc04_011_8018E89C(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc04_011_801F1308.a = sp10[0];
    D_sc04_011_801F1308.b = sp10[1];
}

void func_sc04_011_8018E914(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc04_011_8018EA7C();
    if (temp_v0 >= 0) {
        func_sc04_011_8018E960(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc04_011_8018E960(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc04_011_801F1308.pts[i];
    s = spd;
    s += rand() % (s >> 2) - (s >> 3);
    m = s;
    p->ang = ang + (rand() & 0x3F) - 0x20;
    vx = (rcos(p->ang) * m) >> 12;
    vz = (rsin(p->ang) * m) >> 12;
    p->x = vx << 16;
    p->z = vz << 16;
    p->active = (rand() & 0xF) + 0x10;
    p->y = m << 6;
    gg = D_sc04_011_801F1308.g;
    p->dy = gg << 6;
}

s32 func_sc04_011_8018EA7C(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc04_011_801F1314)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc04_011_8018EAB8(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc04_011_801F130E;
    p = (Pt16 *)&D_sc04_011_801F1314;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc04_011_8018EBCC(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc04_011_8018EBCC(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    Pt16 *r;
    u16 cx;
    u16 cz;

    p = g_PrimNext;
    m = D_800AE620;
    g_PrimNext = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc04_011_801F1310;
    AF(p, u8, 5) = D_sc04_011_801F1311;
    AF(p, u8, 6) = D_sc04_011_801F1312;
    r = (Pt16 *)&D_sc04_011_801F1314 + i;
    cx = AF(r, u16, 0xA) + D_sc04_011_801F1308.a;
    cz = AF(r, u16, 0xE) + D_sc04_011_801F1308.b;
    RotMatrixZ(r->ang, &m);
    s.x = r->y;
    s.y = r->y;
    s.z = r->y;
    ScaleMatrix(&m, &s);
    v.x = r->active;
    v.y = v.z = 0;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 8) = cx + (o.x >> 1) * 3;
    AF(p, u16, 0xA) = cz + (o.y >> 1) * 3;
    AF(p, u16, 0xC) = cx - (o.x >> 1);
    AF(p, u16, 0xE) = cz - (o.y >> 1);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cz + o.y;
    if (r->active & 1) {
        RotMatrixZ(0x400, &m);
    } else {
        RotMatrixZ(-0x400, &m);
    }
    v.x = 2;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) += o.x;
    AF(p, u16, 0x12) += o.y;
    ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

void func_sc04_011_8018EEB0(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc04_011_8018EFB0();
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    if ((temp_v0 == 0) || ((AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1), func_8012931C((s32) arg0), (AF(arg0, s16, 0x32) == 0)) && ((u32) ((AF(arg0, u16, 0xA) + 0x1000) & 0xFFFF) >= 0x1001U))) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + AF(arg0, s32, 0x34));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0x30));
    AF(AF(arg0, void *, 0x20), u16, 8) = (u16) AF(arg0, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(AF(arg0, void *, 0x20), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    func_sc04_011_8018F02C((s32) AF(arg0, void *, 0x20));
}

void func_sc04_011_8018EFB0(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    AF(p, s16, 2) = 0xB;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x18) == 0) AF(p, s16, 0x18) = 0x600;
    AF(p, s16, 0x14) = rand() & 0xFF0;
    AF(o, s16, 0x30) = 0x100;
    AF(o, s16, 2)++;
}

void func_sc04_011_8018F02C(u8 *arg0) {
    XY sxy;
    MAT3 m;
    SV8 v;
    s32 unused[6];
    s32 flag;
    s32 sz;
    s32 otz;
    UXY d;
    u32 fl;
    s32 z;
    u32 *ot;
    u16 h;
    s32 r;
    s32 hi;
    PF4 *p;
    PF4 *p1;
    u32 semi;
    PTAG *t;
    s32 *wm;

    wm = D_800AF648;
    fl = AF(arg0, u32, 4);
    gte_SetRotMatrix(wm);
    gte_SetTransMatrix(wm);
    gte_ldv0(arg0 + 8);
    gte_rtps();
    gte_stsxy(&sxy);
    gte_stflg(&flag);
    gte_stsz(&sz);
    gte_stszotz(&otz);
    if (flag & ~0x1000) return;
    z = otz + 1;
    ot = g_WorldOtTable[D_800B9A02[0]];
    h = AF(arg0, u16, 0x2C);
    if ((h & 0xC000) != 0) {
        if ((h & 0xC000) == 0xC000) {
            z -= h & 0xFFF;
            if (z < 0) z = 0;
        } else {
            z += h & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) return;
    m.m[0][0] = AF(arg0, s16, 0x18);
    m.m[0][1] = 0;
    m.m[0][2] = 0;
    m.m[1][0] = 0;
    m.m[1][1] = AF(arg0, s16, 0x18);
    m.m[1][2] = 0;
    m.m[2][0] = 0;
    m.m[2][1] = 0;
    m.m[2][2] = 0x1000;
    m.t[2] = 0;
    m.t[1] = 0;
    m.t[0] = 0;
    r = (s32)&m;
    RotMatrixZ(AF(arg0, s16, 0x14), r);
    gte_SetRotMatrix(r);
    gte_SetTransMatrix(r);
    v.x = 0x20;
    v.y = 0;
    v.z = sz;
    gte_ldv0(&v);
    gte_rtps();
    gte_stsxy(&d);
    r = (d.s.x >> 3) & 0xFFFF;
    r |= (d.s.y >> 3) << 16;
    p = (PF4 *)g_PrimNext;
    p1 = p + 1;
    p->tag.len = 5;
    p->code = 0x28;
    p1->tag.len = 5;
    p1->code = 0x28;
    semi = fl & 0x40000000;
    if (semi) {
        p->code |= 2;
        p1->code |= 2;
    }
    p->r0 = arg0[0x24];
    p->g0 = arg0[0x25];
    p->b0 = arg0[0x26];
    p1->r0 = arg0[0x24];
    p1->g0 = arg0[0x25];
    p1->b0 = arg0[0x26];
    hi = r >> 16;
    p->x0 = sxy.x + d.s.x;
    p->y0 = sxy.y + d.s.y;
    p->x1 = sxy.x - hi;
    p->y1 = sxy.y + r;
    p->x2 = sxy.x + hi;
    p->y2 = sxy.y - r;
    p->x3 = sxy.x - d.s.x;
    p->y3 = sxy.y - d.s.y;
    p1->x0 = sxy.x - d.s.y;
    p1->y0 = sxy.y + d.s.x;
    p1->x1 = sxy.x - r;
    p1->y1 = sxy.y - hi;
    p1->x2 = sxy.x + r;
    p1->y2 = sxy.y + hi;
    p1->x3 = sxy.x + d.s.y;
    p1->y3 = sxy.y - d.s.x;
    p->tag.addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p;
    p1->tag.addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p1;
    g_PrimNext += 0x30;
    if (semi) {
        s32 unused2[2];
        t = (PTAG *)g_PrimNext;
        g_PrimNext += 8;
        t->len = 1;
        ((u32 *)t)[1] = 0xE1000000 | ((fl >> 23) & 0x60);
        t->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}

void func_sc04_011_8018F4CC(u16 *cnt, s16 *pos, s16 *rng, s32 sh, s32 arg4) {
    SV8 v;
    u8 *r;
    if (!(*cnt & (s16)((1 << sh) - 1))) {
        v.x = pos[0] + rand() % (rng[0] * 2) - rng[0];
        v.y = pos[1] + rand() % (rng[1] * 2) - rng[1];
        v.z = pos[2] + rand() % (rng[2] * 2) - rng[2];
        v.pad = rng[3];
        r = func_sc04_011_8018F68C(&v, 0, arg4);
        if (r != 0) {
            AF(AF(r, u8 *, 0x20), s16, 0x18) = pos[3];
        }
    }
    (*cnt)++;
}

s32 func_sc04_011_8018F658(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc04_011_8018F68C(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc04_011_8018F68C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_801290DC(0x55, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x1C) = (s32) AF(arg0, s16, 6);
        if (arg1 != 0) {
            AF(temp_v0, s32, 0x10) = (s32) AF(arg1, s32, 0);
            AF(temp_v0, s32, 0x14) = (s32) AF(arg1, s32, 4);
            AF(temp_v0, s32, 0x18) = (s32) AF(arg1, s32, 8);
            AF(temp_v0, s32, 0x34) = (s32) AF(arg1, s32, 0xC);
        }
        if (arg2 != 0) {
            AF(AF(temp_v0, void *, 0x20), s32, 0x24) = arg2;
        }
    }
    return temp_v0;
}

void func_sc04_011_8018F734(u8 *o) {
    SV8 v[4];
    SMtx m;
    s32 pp;
    s32 flag;
    u32 *ot;
    u8 *p;
    u8 *t;
    s32 z;
    u16 w;

    ot = g_WorldOtTable[D_800B9A02[0]];
    w = AF(o, u16, 6);
    if (w == 0) return;
    v[0].x = 0;
    v[0].y = -(AF(o, u16, 0x18) >> 1);
    v[0].z = 0;
    v[1].x = 0;
    v[1].y = AF(o, u16, 0x18) >> 1;
    v[1].z = 0;
    v[2].x = w;
    v[2].y = -(AF(o, u16, 0x1A) >> 1);
    v[2].z = 0;
    v[3].x = w;
    v[3].y = AF(o, u16, 0x1A) >> 1;
    v[3].z = 0;
    RotMatrixZYX(o + 8, &m);
    m.t[0] = AF(o, s16, 0);
    m.t[1] = AF(o, s16, 2);
    m.t[2] = AF(o, s16, 4);
    p = AllocPrim(0x24);
    AF(p, s32, 4) = AF(o, s32, 0x10);
    AF(p, s32, 0xC) = AF(o, s32, 0x10);
    AF(p, s32, 0x14) = AF(o, s32, 0x14);
    AF(p, s32, 0x1C) = AF(o, s32, 0x14);
    p[3] = 8;
    p[7] = 0x38;
    func_80017E8C(&m);
    z = RotTransPers4(&v[0], &v[1], &v[2], &v[3], p + 8, p + 0x10, p + 0x18, p + 0x20, &pp, &flag);
    if (flag & ~0x1000) return;
    z++;
    if ((u32)z >= 0x1000) return;
    ((PTAG *)p)->addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p;
    if (AF(o, u32, 0x1C) & 0x40000000) {
        p[7] |= 2;
        t = AllocPrim(8);
        t[3] = 1;
        AF(t, u32, 4) = 0xE1000200 | ((AF(o, u32, 0x1C) >> 23) & 0x60);
        ((PTAG *)t)->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}

void func_sc04_011_8018F984(u8 *arg0) {
    D_sc04_011_801EBE38[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018F9C0(u8 *o) {
    u8 *a;
    B4 *p;

    a = func_801465C0();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        func_8001CBDC(a, &D_sc04_011_801EBD28, D_sc04_011_801EBCC4[AF(o, s32, 0x2C)].x, D_sc04_011_801EBCC4[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc04_011_801EBCF0[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc04_011_801EBE28 = D_sc04_011_801EBCFC[AF(o, s32, 0x2C)];
        D_sc04_011_801EBE24 = AF(&D_sc04_011_801EBE24, B4, 0x4);
        D_sc04_011_801EBDF4 = AF(&D_sc04_011_801EBDF4, B4, 0x30);
        D_sc04_011_801EBDF0 = AF(&D_sc04_011_801EBDF0, B4, 0x4);
        D_sc04_011_801EBDC0 = AF(&D_sc04_011_801EBDC0, B4, 0x30);
        D_sc04_011_801EBDBC = AF(&D_sc04_011_801EBDBC, B4, 0x4);
        D_sc04_011_801EBD8C = AF(&D_sc04_011_801EBD8C, B4, 0x30);
        p = &D_sc04_011_801EBD88;
        *p = D_sc04_011_801EBD8C;
        D_sc04_011_801EBD60 = *p;
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc04_011_8018FBC0(s32 arg0) {
    func_sc04_011_8018FC00(arg0);
}

void func_sc04_011_8018FBE0(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc04_011_8018FC00(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc04_011_801EBD40);
    var_s1 = 0;
    var_s0 = &D_sc04_011_801EBD68;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc04_011_8018FC58(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc04_011_8018FC84(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc04_011_8018FCC8(u8 *arg0) {
    D_sc04_011_801EBE74[AF(arg0, u16, 2)]();
}

void func_sc04_011_8018FD04(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x100) = 0x7D;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x102) = 0x533;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc04_011_8018FD38(u8 *o) {
    SV4 *p;
    SV4 *q;

    func_sc04_011_80190264((s32)o, AF(o, s16, 0xFE));
    p = D_sc04_011_801EBE44;
    q = p + 1;
    func_sc04_011_8018FE20((s32)o, p, q, AF(o, s16, 0xFC));
    p += 2;
    AF(o, s16, 0xFE) += 12;
    func_sc04_011_80190264((s32)o, AF(o, s16, 0x100));
    func_sc04_011_8018FE20((s32)o, p, p + 1, AF(o, s16, 0xFC));
    AF(o, s16, 0x100) += 12;
    func_sc04_011_80190264((s32)o, AF(o, s16, 0x102));
    func_sc04_011_8018FE20((s32)o, q + 3, q + 4, AF(o, s16, 0xFC));
    AF(o, s16, 0x102) += 12;
    if (D_80126B66 > 0x900) {
        func_8012C098(o);
    }
}

void func_sc04_011_8018FE20(s32 arg0, SV4 *p, SV4 *q, s32 ang0) {
    QuadW prim;
    s32 pad;
    WMtx m;
    SV4 d;
    SV4 a;
    SV4 b;
    SV4 u;
    SV4 s;
    s32 i;
    s32 col;
    s32 *tbl;
    QuadW *pr;
    s16 ang = ang0;

    prim.code = 0x50000000;
    func_80017D98(&m);
    m.t[0] = p->x;
    m.t[1] = p->y;
    m.t[2] = p->z;
    tbl = D_sc04_011_801F1500;
    d.x = q->x - p->x;
    d.y = q->y - p->y;
    d.z = q->z - p->z;
    col = 0x78D878;
    b.x = b.y = b.z = 0;
    pr = &prim;
    if (D_800B99DA & 1) {
        col = 0x80E080;
    }
    for (i = 1; i < 16; i++) {
        a = b;
        s.y = (rsin(i * 0x1800 / 15 + ang) << 4) / 4096;
        b.x = d.x * i / 16;
        b.y = s.y + d.y * i / 16;
        b.z = d.z * i / 16;
        pr->p[0] = a;
        pr->p[1] = b;
        pr->p[2] = a;
        pr->p[3] = b;
        pr->c[0] = pr->c[1] = col;
        pr->c[2] = pr->c[3] = 0;
        pr->p[2].y += 0x33;
        pr->p[3].y += 0x33;
        pr->p[2].x -= 0x19;
        pr->p[3].x -= 0x19;
        func_sc04_011_80190174(pr, &m, i);
        pr->c[2] = tbl[0];
        pr->c[3] = tbl[1];
        tbl++;
        pr->p[2].y -= 0x99;
        pr->p[3].y -= 0x99;
        pr->p[2].x += 0x4C;
        pr->p[3].x += 0x4C;
        func_sc04_011_80190174(pr, &m, i);
        pr->c[0] = pr->c[1] = 0;
        pr->p[0].y -= 0x1CC;
        pr->p[1].y -= 0x1CC;
        pr->p[0].x += 0xE6;
        pr->p[1].x += 0xE6;
        func_sc04_011_80190174(pr, &m, i);
    }
}

void func_sc04_011_80190174(QuadW *src, WMtx *m, s32 n) {
    QuadW q;
    s32 pp;
    s32 flag;

    q = *src;
    if (n == 1) {
        q.c[0] = q.c[2] = 0;
    } else if (n == 15) {
        q.c[1] = q.c[3] = 0;
    }
    func_80017E8C(m);
    RotTransPers4(&q.p[0], &q.p[1], &q.p[2], &q.p[3], &q.p[0], &q.p[1], &q.p[2], &q.p[3], &pp, &flag);
    if (!(flag & ~0x1000)) {
        q.p[0].z = 0xFFD;
        func_80017714(&q);
    }
}

void func_sc04_011_80190264(s32 a0, s32 a) {
    s32 i;
    u16 t;
    s32 k;
    u8 v;

    for (i = 0; i < 16; i++) {
        t = (i << 8) - a;
        v = rsin((s16)t + 0x155) / 64 < 0 ? -(rsin((s16)t + 0x155) / 64) : rsin((s16)t + 0x155) / 64;
        *(u8 *)&D_sc04_011_801F1500[i] = v;
        k = i * 4;
        ((u8 *)D_sc04_011_801F1502)[k] = rsin((s16)t + 0x155) / 128 < 0 ? -(rsin((s16)t + 0x155) / 128) : rsin((s16)t + 0x155) / 128;
        v = rcos((s16)t) * 63 / 4096 - 0x80;
        *(u8 *)&D_sc04_011_801F1501[i] = v;
    }
}
