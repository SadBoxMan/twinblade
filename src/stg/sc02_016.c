#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_016_8017BE9C(void) {
}

void func_sc02_016_8017BEA4(void) {
}

void func_sc02_016_8017BEAC(void) {
}

void func_sc02_016_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_016_80187E80[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_016_80187E68;
extern void (*D_sc02_016_80187E88[])();
extern u8 D_sc02_016_80187E74;
extern void (*D_sc02_016_80187FA0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc02_016_8017C294();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void (*D_sc02_016_80187FF8[])();
extern s32 func_80147324();
extern void func_sc02_016_8017D408();
extern void (*D_sc02_016_8018800C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc02_016_80188020[])();
extern void func_800D22E4();
extern void func_sc02_016_8017DB00();
extern void (*D_sc02_016_80188078[])();
void func_sc02_016_8017ED30(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_016_80188080[])();
void func_sc02_016_8017ED58(void);
extern void func_800D1EBC();
extern u8 D_sc02_016_8018808C;
extern void func_8016EE40();
extern u8 D_sc02_016_80188098;
extern void func_sc02_016_8017EE24();
extern void (*D_sc02_016_801880AC[])();
extern void (*D_sc02_016_801880FC[])();
extern void (*D_sc02_016_801884B0[])();
extern void func_8012AD50();
extern void (*D_sc02_016_801886F0[])();
extern void (*D_sc02_016_80188728[])();
extern void func_sc02_016_80182E34();
extern void (*D_sc02_016_801A41D4[])();
extern void (*D_sc02_016_801A41D8[])();
extern void (*D_sc02_016_801A4514[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc02_016_801847A8;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc02_016_801A4204;
extern void func_sc02_016_801839A0();
extern s32 D_sc02_016_801A426C[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc02_016_801A4438;
extern s32 D_sc02_016_801A443C;
extern s32 D_sc02_016_801A4450;
extern s32 D_sc02_016_801A4464;
extern s32 D_sc02_016_801A44D0;
extern s32 D_sc02_016_801A43B4[];
extern s32 D_sc02_016_801A4330[];
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc02_016_80183748();
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc02_016_801A453C[])();
extern u8 D_sc02_016_801A4238;
extern u8 D_sc02_016_801A49DC;
extern u8 D_sc02_016_801A4BFC;
extern u8 D_sc02_016_801A49EC;
extern u8 D_sc02_016_801A4AF4;
extern void (*D_sc02_016_801B0758[])();
extern void (*D_sc02_016_801B076C[])();
extern void (*D_sc02_016_801B0A68[])();

void func_sc02_016_8017BEBC(u8 *arg0) {
    D_sc02_016_80187E80[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017BEF8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    func_80146A6C(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.x = AF(a, s16, 6);
    p.y = AF(a, s16, 0xA);
    p.z = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.x;
    AF(a, s16, 0xE) = p.z;
    r.y = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = func_80146A6C(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc02_016_80187E68, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.x;
        AF(o, s16, 0x12) = r.y;
        AF(a, u16, 2)++;
    } else {
        func_80146C3C(a);
    }
}

void func_sc02_016_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_016_8017C150(u8 *arg0) {
    D_sc02_016_80187E88[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_016_80187E74, 0x18);
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

void func_sc02_016_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8014708C();
extern void func_801472C8();

extern u8 D_sc02_016_801886BC;
extern void (*D_sc02_016_801886E4[])();
extern void func_80019064();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern s32 func_sc02_016_80182274();
extern s32 func_80146CA0();
extern void func_80147364();
extern void func_8014BC44();
extern s32 func_80151664();
extern s8 D_sc02_016_801B42EB;
extern void func_80146E90();
extern void func_801495C4();
extern s32 func_80146E98();
extern void func_sc02_016_80182874();
extern s32 D_sc02_016_801B4960;
extern s32 func_8012C588();

extern u8 D_sc02_016_80188450;
extern u8 D_sc02_016_801AF9CC;
extern u8 D_sc02_016_801AFD14;
extern s32 func_sc02_016_80181054();
extern u8 D_sc02_016_801B03E4;
extern u8 D_sc02_016_801B02EC;
extern s32 func_8012CBF4();
extern void func_sc02_016_80180728();
extern s32 D_sc02_016_80188630;
extern s32 func_8012BCCC();
extern void func_sc02_016_8018140C();
extern s32 func_8012A4BC();
extern s32 func_sc02_016_80182E14();
extern void func_8012B14C();
extern s32 func_8012BEE8();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc02_016_801B0744;
extern u8 D_sc02_016_801B0750;
extern s32 func_80132EF4();
extern u8 D_sc02_016_801B0A14;

extern s32 D_sc02_016_8018861C;
extern u8 D_sc02_016_801B062C;
extern s32 D_sc02_016_801B42D0;
extern u8 D_sc02_016_80188620;
extern s32 func_8012BD3C();
extern void func_sc02_016_801804F8();
extern void func_80131E00();

extern u8 D_sc02_016_801B42D8[];

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
extern void func_8012A018();
extern void func_8012A094();
extern void func_8012B200();
extern s32 func_8012AD44();
extern void (*D_sc02_016_801880EC[])();
extern void func_sc02_016_8017F33C();
extern void func_sc02_016_8017F630();
extern void func_8013CB84();
extern void func_sc02_016_8017FB54();
extern void (*D_sc02_016_80188514[])();
extern void func_8012C0EC();
extern u8 D_sc02_016_801AF924;
extern s32 func_80172688();
extern void func_sc02_016_80182D54();
extern void func_8012BF4C();

extern void func_8001BFD0();
extern void func_800D0C74();
extern void func_800D1E28();

extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 func_sc02_016_8017F264();

void func_sc02_016_8017F228(s32 arg0);

extern u8 D_sc02_016_801AFF2C;
extern s32 func_8012B23C();

extern u8 D_sc02_016_801886C4;
extern s32 func_801511E0();
extern s32 func_80154274();
extern s32 func_80149020();
s32 func_sc02_016_80182488();
extern s32 func_80172630();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc02_016_80187F50;
extern u8 D_sc02_016_80187EEC[];
extern s32 func_80013328();
extern void func_801746A4();
extern s32 func_8012BD14();
extern void func_800233CC();
extern u8 D_sc02_016_801B3FB8;
extern u8 D_sc02_016_801B3FB9;
extern u8 D_sc02_016_801B3FBA;
extern u8 D_sc02_016_801B3FBC;
extern u8 D_sc02_016_801B3FBD;
extern u8 D_sc02_016_801B3FBE;
extern s32 D_sc02_016_801B41BC;
extern s32 D_sc02_016_801B41C0;
extern s32 D_sc02_016_801B41C4;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc02_016_801B1448;

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
extern s8 D_sc02_016_80187FCC[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();

typedef struct { s32 x, y, z, pad; } V4;
extern void func_8012B2CC();
extern u8 D_sc02_016_801B08E4;
extern u8 D_sc02_016_801B06BC;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern void func_8012AD80();
extern u8 D_sc02_016_801B0760;

extern u8 D_sc02_016_801881A4;
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_sc02_016_801AFDDC;
extern s32 func_8012B8E4();
extern void func_80143B6C();
extern void func_8012ADE4();
extern s32 func_8012CBA4();
extern void func_8012B178();
extern void func_sc02_016_8018035C();
extern void func_sc02_016_801815DC();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern u8 D_sc02_016_80187EB8;
extern u8 D_sc02_016_80187EF4;
extern u8 D_sc02_016_801B1420;
extern u8 D_sc02_016_801B3F48;
extern u8 D_sc02_016_801B3F54;
extern u8 D_sc02_016_801B3F55;
extern u8 D_sc02_016_801B3F56;
extern u8 D_sc02_016_801B3F64;
extern u8 D_sc02_016_801B3F65;
extern u8 D_sc02_016_801B3F66;
extern u8 D_sc02_016_801B3F75;
extern u8 D_sc02_016_801B3F76;
extern u8 D_sc02_016_801B3F78;
extern u8 D_sc02_016_801B3F79;
extern u8 D_sc02_016_801B3F7A;
extern u8 D_sc02_016_801B3F7C;
extern u8 D_sc02_016_801B3F7D;
extern u8 D_sc02_016_801B3F7E;
extern u8 D_sc02_016_801B3F84;
extern u8 D_sc02_016_801B3FF8;
extern void func_8001C810();

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017C294);

void func_sc02_016_8017C3C4(u8 *arg0) {
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
        if (func_8012C354(arg0, &D_sc02_016_80187EB8) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc02_016_801B1420);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc02_016_80187EF4);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc02_016_801B3F48;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc02_016_801B3F78;
        func_8001CD50(o, p);
        D_sc02_016_801B3F7A = 0x80;
        p[0] = 0x80;
        D_sc02_016_801B3F79 = 0xE0;
        D_sc02_016_801B3F7D = 0;
        D_sc02_016_801B3F7C = 0;
        D_sc02_016_801B3F7E = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc02_016_801B1448;
        b = (U12x9 *) &D_sc02_016_801B3FF8;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc02_016_801B3F76 = 0xFF;
        D_sc02_016_801B3F84 = 0xFF;
        D_sc02_016_801B3F66 = 0xFF;
        D_sc02_016_801B3F64 = 0xFF;
        D_sc02_016_801B3F56 = 0xFF;
        D_sc02_016_801B3F54 = 0xFF;
        D_sc02_016_801B3F75 = 0x80;
        D_sc02_016_801B3F65 = 0x80;
        D_sc02_016_801B3F55 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc02_016_801B3FF8;
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

void func_sc02_016_8017C750(u8 *arg0) {
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
    func_sc02_016_8017C294(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc02_016_80187EEC[(s16) i]) {
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
            func_80178B18(arg0, &D_sc02_016_80187F50);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc02_016_8017C9C8(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc02_016_801B3FB8;
        func_8001CD50(o, p);
        D_sc02_016_801B3FB9 = 0xFF;
        D_sc02_016_801B3FBA = 0xFF;
        p[0] = 0xFF;
        D_sc02_016_801B3FBE = 8;
        D_sc02_016_801B3FBC = 8;
        D_sc02_016_801B3FBD = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc02_016_801B41BC;
        q[0] = v.vx;
        D_sc02_016_801B41C0 = v.vy;
        D_sc02_016_801B41C4 = v.vz;
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

void func_sc02_016_8017CB10(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc02_016_801B1448;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc02_016_8017C294(arg0, 0);
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

void func_sc02_016_8017CC90(u8 *arg0) {
    D_sc02_016_80187FA0[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017CCCC(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc02_016_8017CD18(u8 *arg0) {
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
        func_sc02_016_8017C294((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017CE0C);

void func_sc02_016_8017CE8C(u8 *arg0) {
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

void func_sc02_016_8017CF40(u8 *arg0) {
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

void func_sc02_016_8017CFAC(u8 *arg0, s32 arg1) {
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

void func_sc02_016_8017D038(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_016_8017D058(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_016_8017C294(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_016_8017D0AC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_016_8017D0E8(u8 *arg0) {
    D_sc02_016_80187FF8[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D124(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017D174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D1D0(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D254(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D3BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_016_8017D408((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_016_8017D408(u8 *arg0) {
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
    t = D_sc02_016_80187FCC;
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
    t = D_sc02_016_80187FCC;
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
        t = D_sc02_016_80187FCC;
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

void func_sc02_016_8017D714(u8 *arg0) {
    D_sc02_016_8018800C[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D750(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017D790(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D800(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D88C(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D960(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_016_8017D408((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_016_8017D9B4(u8 *arg0) {
    D_sc02_016_80188020[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017D9F0);

void func_sc02_016_8017DAA4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_016_8017DB00((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_016_8017DB00(u8 *arg0) {
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

void func_sc02_016_8017DC70(u8 *obj) {
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

void func_sc02_016_8017EB50(u8 *arg0) {
    D_sc02_016_80188078[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_016_8017EB8C(u8 *arg0) {
    func_sc02_016_8017ED30();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_016_8017EBD0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_016_8017EBF4(u8 *arg0) {
    D_sc02_016_80188080[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_016_8017EC30(u8 *arg0) {
    func_sc02_016_8017ED58();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_016_8017EC70(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C74(1);
        func_8002D4C8(4, 0x579);
        func_8002D4C8(4, 0x578);
        func_8002D4C8(4, 0x57A);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_016_8017ED10(void) {
    func_800D1EBC();
}

void func_sc02_016_8017ED30(void) {
    func_8016EE40((s32) &D_sc02_016_8018808C, 0x01000000);
}

void func_sc02_016_8017ED58(void) {
    func_8016EE40((s32) &D_sc02_016_80188098, 0x01000000);
}

void func_sc02_016_8017ED80(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0xAA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_016_8017EE24, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_016_8017EE24((s32) &D_80126948);
}

void func_sc02_016_8017EE24(s32 arg0) {
    D_sc02_016_801880AC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017EE60);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017EF84);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F11C);

s32 func_sc02_016_8017F154(s32 arg0) {
    func_8012B200(arg0);
    AF(arg0, s32, 0x1C) = 0x20;
    return func_8012AD44(arg0, 2);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F190);

void func_sc02_016_8017F1C8(u8 *arg0) {
    D_sc02_016_801880EC[AF(arg0, u16, 2)]();
    if (AF(arg0, u8, 0x70) == 0) {
        func_sc02_016_8017F33C((s32) arg0);
    }
}

void func_sc02_016_8017F228(s32 arg0) {
    if (func_sc02_016_8017F264() != 0) {
        D_80126B96 = 0x4018;
        D_80126B98 = 0x10;
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F264);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F33C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F434);

void func_sc02_016_8017F4A0(u8 *arg0) {
    D_sc02_016_801880FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F4DC);

void func_sc02_016_8017F600(u8 *arg0) {
    if (AF(arg0, u16, 2) == 0) {
        func_sc02_016_8017F630();
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F630);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F6A4);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F78C);

void func_sc02_016_8017F880(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_8012AD44(arg0, 1);
    }
    func_sc02_016_8017F228(arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F8C0);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F9F4);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017FABC);

void func_sc02_016_8017FB2C(void) {
    func_8013CB84();
    func_sc02_016_8017FB54();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017FB54);

void func_sc02_016_8017FBE0(u8 *arg0) {
    D_sc02_016_801884B0[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017FC1C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_016_80188450;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017FCD0(u8 *arg0) {
    struct { s32 x, y, z, w; } range;
    struct { s32 x, y, z, w; } off;
    u8 *obj;
    u8 *ent;
    s32 r;

    obj = AF(arg0, u8 *, 0x20);
    if (--AF(arg0, s32, 0x1C) == -1) {
        func_8001CC3C(obj, &D_sc02_016_801881A4, 0, 0);
        AF(obj, u8, 0x27) = 0x88;
        AF(obj, s16, 0x1A) = 0x4000;
        AF(obj, s16, 0x18) = 0x4000;
        AF(obj, s32, 4) |= 0x50000040;
        ent = AF(arg0, s32, 0x2C) * 0xC + &D_sc02_016_80188450;
        func_80128EA8(obj, arg0 + 0x24, AF(ent, s32, 0));
        range = AF(AF(ent, u8 *, 8), typeof(range), 0x10);
        r = rand();
        off.x = r % (range.x + 1);
        if (r & 1) off.x = -off.x;
        off.y = r % (range.y + 1);
        if (r & 1) off.y = -off.y;
        off.z = r % (range.z + 1);
        if (r & 1) off.z = -off.z;
        AF(arg0, s32, 0x10) = AF(AF(ent, u8 *, 8), s32, 0) + off.x;
        AF(arg0, s32, 0x14) = AF(AF(ent, u8 *, 8), s32, 4) + off.y;
        AF(arg0, s32, 0x18) = AF(AF(ent, u8 *, 8), s32, 8) + off.z;
        range = AF(AF(ent, u8 *, 8), typeof(range), 0x30);
        r = rand();
        off.x = r % (range.x + 1);
        if (r & 1) off.x = -off.x;
        off.y = r % (range.y + 1);
        if (r & 1) off.y = -off.y;
        off.z = r % (range.z + 1);
        if (r & 1) off.z = -off.z;
        AF(arg0, s32, 0x2C) = AF(AF(ent, u8 *, 8), s32, 0x20) + off.x;
        AF(arg0, s32, 0x30) = AF(AF(ent, u8 *, 8), s32, 0x24) + off.y;
        AF(arg0, s32, 0x34) = AF(AF(ent, u8 *, 8), s32, 0x28) + off.z;
        AF(arg0, s32, 0x1C) = AF(ent, u16, 4);
        AF(arg0, u16, 2)++;
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018003C);

void func_sc02_016_801800E4(u8 *arg0) {
    D_sc02_016_80188514[AF(arg0, u16, 2)]();
    func_8012C0EC((s32) arg0);
}

void func_sc02_016_80180134(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180154);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801802C8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018035C);

void func_sc02_016_801804D4(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x6AA, 0, arg2);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801804F8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801805D8);

s32 func_sc02_016_801806DC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc02_016_801AFF2C);
    return func_8012B23C(arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180728);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180828);

s32 func_sc02_016_8018096C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc02_016_801AF9CC);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018099C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180B30);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180BD8);

s32 func_sc02_016_80180F6C(s32 arg0) {
    return func_sc02_016_80181054(arg0, 0, 0x14, (s32) &D_sc02_016_801AFD14);
}

void func_sc02_016_80180F98(s32 arg0) {
    func_sc02_016_80181054(arg0, 3, 0x28, (s32) &D_sc02_016_801B062C);
    D_sc02_016_801B42D0 = D_sc02_016_8018861C;
    func_8002D4C8(0x660, 0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180FE0);

s32 func_sc02_016_80181028(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 8;
    return SetScript(arg0, (s32) &D_sc02_016_801B03E4);
}

s32 func_sc02_016_80181054(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    AF(arg0, s16, 0x34) = (s16) arg1;
    AF(arg0, s16, 2) = 4;
    temp_v0 = SetScript(arg0, arg3);
    AF(arg0, s32, 0x1C) = arg2;
    return temp_v0;
}

s32 func_sc02_016_8018109C(s32 arg0, s32 arg1) {
    return func_8012D5E4(arg0, (s32) &D_sc02_016_80188620, (s32) (&D_sc02_016_80188620 + 8), arg1);
}

void func_sc02_016_801810C8(u8 *arg0) {
    s32 flags;
    s32 go;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 7) {
            func_8012D5E4(arg0, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0xB);
        }
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 6);
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            func_8012D5E4(arg0, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x1C) % 10 == 0) {
            D_sc02_016_801B42D0 += 0x10000;
        }
        func_8012B178(arg0, D_sc02_016_801B42D0);
        flags = func_8012CBA4(arg0);
        if (flags & 0x1000) {
            func_80131E00(arg0, 0x12);
            go = 0;
        } else {
            if (flags != 0x2000) {
                func_8012ADE4(arg0);
            }
            go = 1;
        }
        func_sc02_016_8018035C(arg0);
        func_8012D5E4(arg0, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0x11);
        if (--AF(arg0, s16, 0xFE) <= 0) {
            func_80143B6C(arg0, 0);
            AF(arg0, s16, 0xFE) = -(D_sc02_016_801B42D0 / 0x10000);
        }
        if (go == 1) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_016_801AF9CC);
        }
        break;
    case 4:
        break;
    case 5:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 6);
        if (AF(arg0, s32, 0x1C) == 0xC) {
            func_sc02_016_801815DC(arg0);
        }
        break;
    }
    if (func_8012BEE8(arg0) != 0) {
        switch (AF(arg0, u16, 0x34)) {
        case 0:
            if (func_8012BD3C(arg0, 0x400, 0x4000) != 0) {
                AF(arg0, s16, 0x34)++;
                SetScript(arg0, &D_sc02_016_801AF924);
                AF(arg0, s32, 0x1C) = 0xA;
                break;
            }
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_016_801AF9CC);
            break;
        case 1:
            AF(arg0, s16, 0x34) = 2;
            AF(arg0, s32, 0x1C) = 0x18;
            SetScript(arg0, &D_sc02_016_801AFDDC);
            break;
        case 2:
        case 4:
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_016_801AF9CC);
            break;
        case 3:
            AF(arg0, s32, 0x1C) = 0xA;
            AF(arg0, s16, 0x34)++;
            break;
        case 5:
            if (--AF(arg0, s16, 0x100) == 0) {
                AF(arg0, s16, 2) = 8;
                SetScript(arg0, &D_sc02_016_801B03E4);
            } else {
                AF(arg0, s32, 0x1C) = 0x1E;
            }
            break;
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018140C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801814A8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801815DC);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181714);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801818F8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181AE8);

void func_sc02_016_80181CB8(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 0x100) = 3;
        if (func_8012BD3C((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_016_80181054((s32) arg0, 5, 0x1E, (s32) &D_sc02_016_801B02EC);
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        SetScript((s32) arg0, (s32) &D_sc02_016_801AF9CC);
    }
}

void func_sc02_016_80181D3C(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    SetScript((s32) arg0, (s32) &D_sc02_016_801AF9CC);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181D68);

void func_sc02_016_80181DEC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    SetScript((s32) arg0, (s32) &D_sc02_016_801B03E4);
}

void func_sc02_016_80181E18(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 9;
        AF(arg0, s16, 0x100) = 3;
    }
}

void func_sc02_016_80181E40(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    SetScript((s32) arg0, (s32) &D_sc02_016_801B02EC);
    AF(arg0, s32, 0x1C) = 0x1E;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181E80);

void func_sc02_016_80181F54(s32 arg0) {
    void *temp_a0;

    SetScript(arg0, (s32) &D_sc02_016_801AF924);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc02_016_80181FB0(void) {
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181FB8);

void func_sc02_016_801820C0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc02_016_801804F8();
        return;
    }
    temp_v0 = func_8012CBF4((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            func_80131E00((s32) arg0, 0x12);
            return;
        }
        func_sc02_016_80180728((s32) arg0);
    }
}

void func_sc02_016_80182140(s32 arg0) {
    func_8012CBF4(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc02_016_80180728(arg0);
    }
}

void func_sc02_016_80182184(s32 arg0) {
    if (func_8012BCCC(arg0) < D_sc02_016_80188630) {
        func_sc02_016_8018140C(arg0);
    }
}

void func_sc02_016_801821CC(u8 *arg0) {
    func_80019064((s32) &D_sc02_016_801886BC);
    D_sc02_016_801886E4[AF(arg0, u16, 2)](arg0);
}

void func_sc02_016_80182224(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc02_016_80182274(arg0);
    func_80147324(0x92F);
    func_80146CA0(arg0);
}

s32 func_sc02_016_80182274(s32 arg0) {
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc02_016_801886C4);
    func_80149020(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    func_sc02_016_80182488();
    func_80172630(arg0);
    return func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801822E0);

s32 func_sc02_016_80182434(s32 arg0) {
    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc02_016_80182488(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc02_016_801B42EB;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801824AC);

void func_sc02_016_801824F0(u8 *arg0) {
    D_sc02_016_801886F0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018252C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182678);

void func_sc02_016_801826F0(s32 arg0) {
    D_sc02_016_801B42D8[AF(arg0, s32, 0x2C)] = 0;
    func_80146C3C(arg0);
}

void func_sc02_016_80182720(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182734);

void func_sc02_016_8018279C(u8 *arg0) {
    D_sc02_016_80188728[AF(arg0, u16, 2)]();
}

void func_sc02_016_801827D8(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    func_80146E90((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_80182824(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_sc02_016_80182874(arg0);
}

void func_sc02_016_8018286C(void) {
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182874);

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc02_016_801B47EC[4];
extern CV D_sc02_016_801B480C;
extern CV D_sc02_016_801B4810;
extern u8 D_sc02_016_801B4814;
extern u8 D_sc02_016_801B4815;
extern u8 D_sc02_016_801B4816;
extern u8 D_sc02_016_801B4818;
extern u8 D_sc02_016_801B4819;
extern u8 D_sc02_016_801B481A;
extern s32 D_sc02_016_801B481C;
extern void func_80013F3C();
extern void func_80017714();
void func_sc02_016_801829D8(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6, CV *arg7) {
    SMtx m;
    SV8 *p2;
    SV8 *p3;
    SV8 *d;

    func_80013F3C(&m);
    RotMatrixZ(*arg6, &m);
    m.t[0] = arg1->x;
    m.t[1] = arg1->y;
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    d = D_sc02_016_801B47EC;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc02_016_801B481C = 0x50000000;
        D_sc02_016_801B4814 = 0;
        D_sc02_016_801B4815 = 0;
        D_sc02_016_801B4816 = 0;
        D_sc02_016_801B4818 = 0;
        D_sc02_016_801B4819 = 0;
        D_sc02_016_801B481A = 0;
    }
    D_sc02_016_801B480C = arg7[0];
    D_sc02_016_801B4810 = arg7[1];
    arg5->x += arg2->x;
    arg5->y += arg2->y;
    {
        s32 r = ((u16 *)arg5)[3] & rand();
        if (*(u16 *)(arg0 + 0x12) & 1) {
            arg5->x += r;
        } else {
            arg5->x -= r;
        }
    }
    arg5->y += (rand() & 0x1F) - 0x10;
    gte_ldv0(arg2);
    gte_rtv0tr();
    gte_stsv(d);
    gte_ldv0(arg5);
    gte_rtv0tr();
    gte_stsv(&d[1]);
    gte_ldv0(arg3);
    gte_rtv0tr();
    p2 = &d[2];
    gte_stsv(p2);
    *arg3 = *arg5;
    arg3->x -= ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg3);
    gte_rtv0tr();
    p3 = &d[3];
    gte_stsv(p3);
    d->z = arg1->z;
    func_80017714(d);
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p2);
    *arg4 = *arg5;
    arg4->x += ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p3);
    d->z = arg1->z;
    func_80017714(d);
    *arg2 = *arg5;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182D54);

s32 func_sc02_016_80182E14(void) {
    return func_8012A4BC();
}

void func_sc02_016_80182E34(s32 arg0) {
    D_sc02_016_801A41D4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182E70);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182FE8);

void func_sc02_016_80183194(u8 *arg0) {
    D_sc02_016_801A41D8[AF(arg0, u16, 2)]();
}

void func_sc02_016_801831D0(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc02_016_801831F0(s32 arg0) {
    if (func_80172688((s32) &D_80126B58) != 0) {
        func_sc02_016_80182D54(arg0);
        func_8012BF4C(arg0, 0x20);
        func_8012AD50(arg0);
    }
}

void func_sc02_016_80183248(s32 arg0) {
    if (func_80172688((s32) &D_80126B58) == 0) {
        if (func_8012BEE8(arg0) != 0) {
            func_sc02_016_80182E14();
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
        }
    } else {
        func_8012BF4C(arg0, 0x20);
    }
}

void func_sc02_016_801832B8(u8 *arg0) {
    D_sc02_016_801A4514[AF(arg0, u16, 2)]();
}

void func_sc02_016_801832F4(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc02_016_801A4204) != 0) {
        if (!(func_80029178(D_sc02_016_801A426C[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc02_016_801839A0);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_016_801847A8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_016_801833C8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc02_016_801833F0(void) {
}

void func_sc02_016_801833F8(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc02_016_801A4450 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_016_801A43B4[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_016_801A443C = 0;
            func_80029124(D_sc02_016_801A43B4[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_016_801A4438 = 2;
        } else {
            D_sc02_016_801A4450 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_016_801A4330[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_016_801A4438 = 0;
            D_sc02_016_801A443C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc02_016_801A4464);
    } else {
        var_a1 = &D_sc02_016_801A44D0;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc02_016_80183544(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc02_016_801A426C[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_016_801A426C[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc02_016_80183748() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_016_80183664(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc02_016_80183690(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_016_801836A0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_016_801836B0(u8 *arg0) {
    func_80029124(D_sc02_016_801A426C[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_016_801836F0(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_016_80183724(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80183748);

void func_sc02_016_801837AC(u8 *arg0) {
    D_sc02_016_801A453C[AF(arg0, u16, 2)]();
}

void func_sc02_016_801837E8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_016_801A4238) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_016_801A4BFC);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_016_801A49DC);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_016_80183870(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_016_801A49EC);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_016_801A4AF4);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc02_016_80183930(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_016_801A4BFC);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_016_801A49DC);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801839A0);

void func_sc02_016_80183A98(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc02_016_801B08E4);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc02_016_801B06BC);
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

void func_sc02_016_80183C10(u8 *arg0) {
    D_sc02_016_801B0758[AF(arg0, u16, 2)]();
}

void func_sc02_016_80183C4C(u8 *arg0) {
    D_sc02_016_801B076C[AF(arg0, u16, 2)]();
}

void func_sc02_016_80183C88(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc02_016_801B0744);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc02_016_801B0750, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc02_016_80183D68(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_016_801B0760);
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

void func_sc02_016_80183E84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_016_801B0A14);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc02_016_80183EE0(s32 arg0, s32 arg1, s32 arg2) {
    D_sc02_016_801B4960 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80183F10);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80184154);

void func_sc02_016_801843F4(u8 *arg0) {
    D_sc02_016_801B0A68[AF(arg0, u16, 2)]();
}
