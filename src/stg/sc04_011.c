#include "common.h"
#include "gte.h"
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
extern void func_80019064();
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
extern void func_sc04_011_801833D4();
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
extern s32 func_sc04_011_801835B0();
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
extern void func_sc04_011_8018985C();
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
extern void func_sc04_011_80189478();
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
extern u8 *D_800A5E60;
extern u16 D_800B9A02[];
extern u32 D_800A6610[2][0x1000];
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


INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017C800);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017CD14);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017D000);

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
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02[0]];
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

void func_sc04_011_8017E374(u8 *arg0) {
    D_sc04_011_80193ED0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017E3B0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017E558);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017E6EC);

void func_sc04_011_8017E9A4(u8 *arg0) {
    func_80019064((s32) &D_sc04_011_80193EF8);
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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017EB10);

s32 func_sc04_011_8017EBE8(s32 arg0) {
    func_80019064((s32) &D_80062C04);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc04_011_8017EC38(u8 *arg0) {
    func_80019064((s32) &D_sc04_011_80193F28);
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
    func_80019064((s32) &D_80062C04);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc04_011_8017EE14(u8 *arg0) {
    D_sc04_011_80193F84[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017EE50);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F2A8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F2C4);

void func_sc04_011_8017F304(u8 *arg0) {
    D_sc04_011_80193FBC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F340);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F700);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F85C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F8D0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017F8E0);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8017FD68);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180228);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801803D8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180570);

s32 func_sc04_011_801805D8(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801805F8);

void func_sc04_011_80180634(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_8002D4C8(0x7F2, 0, arg2);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180660);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801806B8);

void func_sc04_011_80180714(s32 arg0) {
    func_sc04_011_801833D4(arg0, -0x40);
    func_sc04_011_80183A28(arg0);
    func_8012BEE8(arg0);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180750);

void func_sc04_011_80180790(s32 arg0) {
    func_sc04_011_801837C4(arg0);
    func_sc04_011_80183BAC(arg0);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s32, 0x1C) = 0x70;
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801807CC);

void func_sc04_011_801808EC(s32 arg0) {
    func_sc04_011_8018332C(arg0, (s32) &D_sc04_011_80194468);
    AF(arg0, s32, 0x1C) = 0x10;
    func_8002D4C8(0x9C3, 0);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180930);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180970);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180AB4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180B24);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80180F30);

s32 func_sc04_011_801811D0(s32 arg0) {
    AF(arg0, s16, 0xF4) = 0;
    func_sc04_011_8018332C(arg0, (s32) &D_sc04_011_801944A8);
    func_sc04_011_80183BD0(arg0);
    AF(arg0, s16, 0xF2) = 0;
    func_sc04_011_80186BD8();
    return func_8012AD44(arg0, 5);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80181220);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80181390);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801813FC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80181948);

s32 func_sc04_011_80181B30(s32 arg0) {
    func_sc04_011_80183CF4(arg0);
    func_sc04_011_80185B04(1, 0x20);
    func_sc04_011_80185C04(3, 0x30);
    func_sc04_011_80186BD8();
    AF(arg0, s16, 0xF2) = 0;
    AF(arg0, s32, 0x1C) = (s32) ((AF(arg0, s16, 0xF6) * 6) + 0x10);
    return func_8012AD44(arg0, 8);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80181BA0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80181EA0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80181F0C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018214C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801821E4);

s32 func_sc04_011_801823C0(s32 arg0) {
    func_sc04_011_8018637C(arg0, (*(s32 *)&D_sc04_011_801944EC[(AF(arg0, s16, 0xE2) * 0xC)]));
    func_sc04_011_80186BF8();
    return func_8012AD44(arg0, 0xB);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80182420);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80182630);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801826E4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801827DC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80182BBC);

s32 func_sc04_011_80182D34(s32 arg0) {
    func_80132EC4(*(s32 *)&D_sc04_011_80194554[(AF(arg0, s16, 0xE2) * 0xC)], 2);
    func_sc04_011_8018637C(arg0, *(s32 *)&D_sc04_011_80194550[(AF(arg0, s16, 0xE2) * 0xC)]);
    func_sc04_011_80186EBC(arg0);
    func_8012AD44(arg0, 0xF);
    func_800D0C48(1);
    return func_8002AC00(0x18);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80182DCC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183058);

void func_sc04_011_8018314C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 0x84) = 0;
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018315C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183258);

void func_sc04_011_801832B4(void) {
    func_800D1724((s32) &D_sc04_011_80194270);
}

void func_sc04_011_801832DC(u8 *arg0) {
    D_sc04_011_8019466C[AF(arg0, u16, 2)]();
    func_sc04_011_80183E20((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018332C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801833D4);

s32 func_sc04_011_80183564(s32 arg0, s32 arg1) {
    AF(arg0, u16, 0xE4) = (u16) AF(arg1, u16, 0);
    AF(arg0, u16, 0xE6) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 0xE8) = (u16) AF(arg1, u16, 4);
    func_sc04_011_80183A28(arg0, arg1);
    return func_sc04_011_801835B0(arg0);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801835B0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801836D4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801837C4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183880);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183A28);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183BAC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183BD0);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183D00);

s32 func_sc04_011_80183DF8(void) {
    return func_8012C588(0x2A9, (*(s32 *)D_sc04_011_801EFC4C));
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183E20);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183EA8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80183F10);

void func_sc04_011_801840B8(void) {
    func_80175454();
}

void func_sc04_011_801840D8(void) {
    func_80175414();
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801840F8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184414);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184504);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801845A8);

void func_sc04_011_801846C0(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_sc04_011_80186940((s32) arg0, 0x64, 1);
    func_8016B3F4((s32) arg0);
    func_sc04_011_80186BD8();
    func_8002D4C8(0xB36, 0);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184728);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184840);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184884);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018489C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184978);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184ABC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184B3C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184BAC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184CCC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184DB8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184F4C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80184FC4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185020);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185214);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801852BC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801853D0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185648);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185960);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185A30);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185B04);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185B5C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185C04);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185C5C);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185DDC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80185FF4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186020);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018615C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801861D4);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186300);

void func_sc04_011_8018637C(s32 arg0, s32 arg1) {
    SetScript();
    D_sc04_011_801EFD40 |= 0x10;
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801863B4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801863D4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186470);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186518);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186710);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018681C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801868A0);

s32 func_sc04_011_80186908(void) {
    s32 i;

    for (i = 0; i < 0x15; i++) {
        AF(((void **)&D_sc04_011_801EFC4C)[i], u16, 0x86) &= 0xFFEF;
    }
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186940);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186A20);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186B08);

s32 func_sc04_011_80186BD8(s32 arg0, s32 arg1) {
    AF((*(void * *)D_sc04_011_801EFC4C), s16, 0xAE) = -1;
    AF(D_sc04_011_801EFC54, s16, 0xAE) = -1;
    return (s32) D_sc04_011_801EFC54;
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186BF8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186C1C);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186DCC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186E54);

void func_sc04_011_80186EBC(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xD0);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
        AF(arg0, s32, 0xD0) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80186EFC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80187178);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801872D0);

void func_sc04_011_801873D0(void) {
}

s32 func_sc04_011_801873D8(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801873F8);

void func_sc04_011_80187574(u8 *arg0) {
    D_sc04_011_801947E4[AF(arg0, u16, 2)]();
    func_sc04_011_80187618((s32) &D_sc04_011_801EFD50, 0x160, 0x18F);
    func_sc04_011_801876A0((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801875D8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80187618);

void func_sc04_011_80187698(s32 arg0) {
    AF(arg0, s16, 0xFE) = 0;
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801876A0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018778C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80187940);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80187A04);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80187B40);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80187D68);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188054);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188094);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801882F8);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801885C0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188650);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801888B8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188A30);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188AC4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188B78);

void func_sc04_011_80188D18(u8 *arg0) {
    D_sc04_011_801948D0[AF(arg0, u16, 2)]();
}

void func_sc04_011_80188D54(u8 *arg0) {
    func_sc04_011_80181868(AF(arg0, s32, 0x64));
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188D78);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80188E88);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189108);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189270);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_801893D4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189410);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189478);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189578);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018985C);

void func_sc04_011_80189A24(u8 *arg0) {
    D_sc04_011_801949B8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189A60);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189AEC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189DFC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80189EFC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018A074);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018A0E0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018A1B4);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018A4C4);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018A7E8);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018AA70);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018AAE4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018AC00);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018AC50);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018AD3C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018AEA8);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B0B0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B1B4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B2F8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B4E0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B5E4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B744);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B830);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B8C0);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018B948);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018BAC4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018BB44);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018BC08);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018C07C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018C14C);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018C260);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018C4BC);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018C58C);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018C764);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018CCB8);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018CE0C);

s32 func_sc04_011_8018CF10(void) {
    return 0x5D;
}

void func_sc04_011_8018CF18(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018CF2C);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018D468);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018D554);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018D6C4);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018D7C8);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018D988);

s32 func_sc04_011_8018DA18(s32 arg0, s32 arg1) {
    s32 sp18;

    func_80015978(arg0 + 4, (s32) &sp18);
    return func_sc04_011_8018DA64(arg1 + 0x14, arg1 + 0xC, (s32) &sp18, arg1 + 8, /* extra? */ (arg1 + 0x3C));
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018DA64);

void func_sc04_011_8018DBE8(void) {
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018DBF0);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018DE0C);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018DFDC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018E034);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018E17C);

void func_sc04_011_8018E198(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc04_011_8018E2C4();
    if (temp_v0 >= 0) {
        func_sc04_011_8018E1F0(temp_v0, arg0, arg1, arg2);
    }
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018E1F0);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018E34C);

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
    p = D_800A5E60;
    D_800A5E60 = p + 0x1C;
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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018E738);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018E82C);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018EA7C);

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

    p = D_800A5E60;
    m = D_800AE620;
    D_800A5E60 = p + 0x14;
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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018EFB0);

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
    ot = D_800A6610[D_800B9A02[0]];
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
    p = (PF4 *)D_800A5E60;
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
    D_800A5E60 += 0x30;
    if (semi) {
        s32 unused2[2];
        t = (PTAG *)D_800A5E60;
        D_800A5E60 += 8;
        t->len = 1;
        ((u32 *)t)[1] = 0xE1000000 | ((fl >> 23) & 0x60);
        t->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018F4CC);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018F734);

void func_sc04_011_8018F984(u8 *arg0) {
    D_sc04_011_801EBE38[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018F9C0);

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

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018FD38);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_8018FE20);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80190174);

INCLUDE_ASM("asm/stg/sc04_011/nonmatchings/sc04_011", func_sc04_011_80190264);
