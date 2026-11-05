#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_007_8017BE9C(void) {
}

void func_sc03_007_8017BEA4(void) {
}

void func_sc03_007_8017BEAC(void) {
}

void func_sc03_007_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_007_8018BBCC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_007_8017DBB4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_007_8018BBD4[])();
extern void (*D_sc03_007_8018BBE0[])();
extern void (*D_sc03_007_8018BBEC[])();
void func_sc03_007_8017DBDC(void);
extern void func_800D1EBC();
extern u8 D_sc03_007_8018BBF8;
extern void func_8016EE40();
extern u8 D_sc03_007_8018BC04;
extern void func_sc03_007_8017DDE4();
extern void (*D_sc03_007_8018BC38[])();
extern void func_sc03_007_8017DE40();
extern u8 D_sc03_007_801BB024;
extern void (*D_sc03_007_8018BEF0[])();
extern void (*D_sc03_007_8018BF50[])();
extern void (*D_sc03_007_8018BFC8[])();
extern void (*D_sc03_007_8018C0EC[])();
extern void (*D_sc03_007_8018C150[])();
extern void func_80178CBC();
extern u8 D_sc03_007_8018C138;
extern s32 func_80178970();
extern void func_80178D18();
extern s32 * func_sc03_007_80181E30();
extern void func_80178BF8();
extern void func_80172710();
extern s32 func_8012BD14();
extern void (*D_sc03_007_8018C230[])();
extern void (*D_sc03_007_8018C37C[])();
extern void (*D_sc03_007_8018C534[])();
extern void (*D_sc03_007_8018C574[])();
extern void (*D_sc03_007_8018C57C[])();
extern void (*D_sc03_007_8018C830[])();
extern void func_sc03_007_80185230();
extern void (*D_sc03_007_801E4D70[])();
extern void (*D_sc03_007_801E4D84[])();
extern u8 D_sc03_007_801E4D78;
extern void func_8001CB00();
extern void func_801292C8();
extern void (*D_sc03_007_801E4DD8[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s16 D_80126CE0;
extern void func_8012B14C();
extern void func_8012B23C();
extern u8 D_sc03_007_8018BF30;
extern u8 D_sc03_007_8018BF3C;
extern u8 D_sc03_007_801BEC20;
extern s32 func_8012BEE8();
extern void func_sc03_007_80180A58();
extern u8 D_sc03_007_801CAB58;
extern u8 D_sc03_007_801CAFE0;
extern void func_sc03_007_801824FC();
extern u8 D_sc03_007_801CACF8;
extern void func_80142414();
extern void func_sc03_007_801824A8();
extern s32 func_8012CBF4();
extern void func_sc03_007_80183004();
extern void func_8012C218();
extern void func_80016714();

extern void func_8002A04C();
extern s32 func_8012C098();
extern void func_sc03_007_80182FB8();

extern s32 func_80029178();
extern void func_80029124();
extern s32 func_sc03_007_8017D4C4();
extern s32 func_800291B4();
extern void func_800291A0();
extern s32 func_sc03_007_80183F7C();
extern void (*D_sc03_007_8018BD14[])();
extern s32 func_sc03_007_8017EE50();
extern u8 D_sc03_007_801BB034;
extern u8 D_sc03_007_801BB0FC;
extern s32 func_sc03_007_8017EA04();
extern s32 func_sc03_007_8017EA48();
extern void func_sc03_007_8017EC90();
extern s32 func_sc03_007_8017E83C();
extern s32 func_8012E778();
extern void func_80130D48();
s32 func_sc03_007_8017EE20(s32 arg0);
extern s32 func_sc03_007_801802A4();
extern u8 D_sc03_007_801BE488;
extern void func_8012B178();
extern u8 D_800D3918;
extern s32 func_sc03_007_80180064();
extern void func_sc03_007_8018022C();
extern u8 D_sc03_007_801BE580;
extern u8 D_sc03_007_801BE658;
extern u8 D_sc03_007_801BE730;
extern void func_8012B2CC();
extern s32 func_8012B864();
extern u8 D_sc03_007_8018BF48;
extern void func_8012DBD0();
extern void func_80131E00();
extern s32 func_8012CC64();
extern u16 D_80126CB4;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern u8 D_sc03_007_8018C03C;
extern u8 D_sc03_007_801B0CFC;
extern void func_8012B1B4();
extern s32 func_8012CBCC();
extern u8 D_sc03_007_801B101C;
extern u8 D_sc03_007_8018C0A8;
extern u8 D_sc03_007_8018C0B8;
extern u8 D_sc03_007_801B35E8;
extern s32 func_8012C354();
extern void func_8001C214();
extern u8 D_sc03_007_80187704;
extern u8 D_sc03_007_8018C104;
extern s32 func_80029504();
extern void func_8012CAE4();
extern void func_801788B8();
extern void (*D_sc03_007_8018C350[])();
extern s32 func_8012BCCC();
void func_sc03_007_80182468(s32 arg0);
extern u8 D_sc03_007_801CAF38;
extern void func_8002AC00();
extern u8 D_sc03_007_801E3998;
extern s32 D_800A654C;
extern s32 func_sc03_007_80183FB4();
extern void func_8013CB84();
extern s16 D_80126B5E;
extern s16 D_80126B66;
extern void func_8001AAA0();
extern s32 func_sc03_007_80185B48();
extern s32 func_sc03_007_80185B20();
extern void func_80146A6C();
extern void func_8012B200();
extern s32 func_sc03_007_80185E30();
extern void func_8012AD80();




extern u8 D_sc03_007_8018C588;

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
extern s32 D_801270C8[];
extern s32 func_sc03_007_80180AF4();
extern s32 func_8012BC60();

extern void func_sc03_007_80185E68();
extern void func_8013C9C4();
extern s32 D_80126B5C;
extern s32 D_80126B64;
extern u8 D_sc03_007_8018C728;
extern u8 D_sc03_007_8018C7DC;
extern u8 D_sc03_007_8018C700;
void func_sc03_007_80185E3C(s32 arg0, s32 arg1);


extern void func_sc03_007_801869C0();

extern u8 D_sc03_007_8018CE04;
extern u8 D_sc03_007_8018CE90;
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc03_007_8018CEA4;
extern u8 D_sc03_007_8018CF1C;
extern u8 D_sc03_007_8018CF30;
extern u8 D_sc03_007_8018CF94;
extern u8 D_sc03_007_8018CFA8;
extern u8 D_sc03_007_8018D034;
extern u8 D_sc03_007_8018D048;
extern u8 D_sc03_007_8018D0AC;
extern u8 D_sc03_007_8018D0C0;
extern u8 D_sc03_007_8018D14C;
extern u8 D_sc03_007_8018D160;
extern u8 D_sc03_007_8018D1EC;
extern u8 D_sc03_007_8018D200;
extern u8 D_sc03_007_8018D2A0;
extern u8 D_sc03_007_8018D2B4;
extern u8 D_sc03_007_8018D32C;
extern u8 D_sc03_007_8018D340;
extern u8 D_sc03_007_8018D3B8;
extern u8 D_sc03_007_8018D3CC;
extern u8 D_sc03_007_8018D46C;
extern u8 D_sc03_007_8018D480;
extern u8 D_sc03_007_8018D4F8;
extern u8 D_sc03_007_8018D50C;
extern u8 D_sc03_007_8018D584;
extern u8 D_sc03_007_8018D598;
extern u8 D_sc03_007_8018D610;
extern u8 D_sc03_007_8018CAA8;
extern u8 D_sc03_007_8018CDC8;
extern u8 D_sc03_007_8018CB84;
extern u8 D_sc03_007_8018CDDC;
extern u8 D_sc03_007_8018CCC4;
extern u8 D_sc03_007_8018CDF0;
extern s32 func_8012B608();
extern s32 func_sc03_007_801803DC();


typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern void func_80128ED8();
extern s32 func_80132EF4();
extern void func_sc03_007_8018726C();
extern u16 D_800B99DA;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc03_007_8017C294();

void func_sc03_007_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc03_007_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_007_8017C294(&v[i], &w4[i]);
        if (func_sc03_007_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_007_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_007_8017C294(&v[i], &w4[i]);
            func_sc03_007_8017C338(&c, &w4[i], &p[i], arg2);
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

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_sc03_007_801E9D30;
extern void func_8001CD9C();
extern void func_800233CC();
extern void func_sc03_007_80184560();
extern void *D_sc03_007_801EB13C;

extern u8 D_sc03_007_8018C610;
extern u8 D_sc03_007_8018C750;
extern u8 D_sc03_007_801EB14C;
extern s32 func_sc03_007_80185DD8();
extern s16 func_sc03_007_80185A24();
extern s32 func_8012BB3C();
extern void func_sc03_007_801858D4();
extern void func_sc03_007_80185948();
extern s32 func_8012BDBC();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
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
extern void func_8012AD50();
extern s32 func_801290DC();
extern u8 D_sc03_007_8018C554;
extern u8 D_sc03_007_8018C55C;
extern s8 D_sc03_007_801E9D2F;
extern s32 D_sc03_007_801EB130;
extern s16 D_sc03_007_801EB134;
extern u8 D_sc03_007_801E9CE0[];
extern void func_80015978();
extern void *D_sc03_007_801EB138;
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void func_800139C8();
static inline void clamp_DCB4(s16 *p, s16 x, s16 lim) {
    if (x > lim) {
        *p = x - lim;
    } else if (-lim > x) {
        *p = x + lim;
    }
}

extern u8 D_801274E8;
extern u8 D_sc03_007_8018BC18;
extern void func_sc03_007_801846EC();

typedef struct { s32 w[4]; } W16;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_sc03_007_801BB2BC;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_sc03_007_8017FD6C();
extern SV8 D_sc03_007_8018BE48;
extern SV8 D_sc03_007_8018BE50;
extern void func_sc03_007_8017FC6C();
extern s32 D_sc03_007_8018BFA8[];
extern s32 D_sc03_007_8018BD88[][16];
void func_sc03_007_8018732C(s32 o, s16 *v, s16 arg2);
extern s32 func_8012B8E4();
extern void func_8012B0B4();
extern s32 func_8012913C();
extern s16 D_sc03_007_801E4D50[];
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_sc03_007_801E4D8C;
extern u8 D_sc03_007_801E4D98;
extern s32 func_sc03_007_80187214();
extern s32 func_8012C194();
extern u16 D_801202A0;
extern void func_8012F14C();
extern void func_8012EC04();
extern s32 func_8012C51C();

void func_sc03_007_8017C294(SV8 *zero, SV8 *out) {
    MtxDCM m;
    MtxDCM mt;
    SV8 d;
    ReadRotMatrix(&m);
    PushMatrix();
    d.x = zero->x - m.t[0];
    d.y = zero->y - m.t[1];
    d.z = zero->z - m.t[2];
    TransposeMatrix(&m, &mt);
    ApplyMatrixSV(&mt, &d, out);
    PopMatrix();
}

s32 func_sc03_007_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc03_007_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern u16 D_801274E4;
extern u8 D_sc03_007_8018C248;
extern u8 D_sc03_007_8018C2B0;
extern s32 SetScript();
extern u8 D_sc03_007_8018B928;
extern u8 D_sc03_007_8018B9B8;
extern u8 D_sc03_007_8018BA00;
extern u8 D_sc03_007_8018B5C8;
extern u8 D_sc03_007_8018B874;
extern u8 D_sc03_007_8018B970;
extern s16 D_801270C0;
extern s32 func_sc03_007_801806B8();
extern u8 D_sc03_007_8018BF58;
extern u8 D_sc03_007_8018BF60;
extern s16 D_80126B62;
extern void func_8012931C();
extern s32 func_8012BE54();
extern u16 D_80126B94;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s16 D_80126B9A;
extern s32 rand();

extern void func_sc03_007_801832B4();
extern s32 func_8012CE2C();
extern u8 D_sc03_007_801E3AE0;

extern R34 D_sc03_007_8018C394[][2];
extern u8 D_sc03_007_8018C4CC;
extern void func_80143970();
extern void func_8012B030();
extern s16 D_sc03_007_8018C7F0[];
extern u8 *func_8012C658();
extern void RotMatrixYXZ();
extern void ApplyMatrixSV();
extern SV8 D_sc03_007_8018BF68[];
extern void func_80020DA4();
extern void func_80020F34();
extern void RotTransSV();
extern s32 func_80135888();
extern s32 func_8012CBA4();
extern u8 D_sc03_007_801B0ED4;
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();
extern void func_8012ADE4();

extern u8 D_sc03_007_801CB130;
extern u8 D_sc03_007_8018C374;
extern void FaceHelper();
extern u8 D_sc03_007_8018C778;
extern s32 D_sc03_007_801EB140;
extern s32 D_sc03_007_801EB144;
extern s32 D_sc03_007_801EB148;
extern s32 func_80143994();
extern void MoveImage();
extern s32 D_sc03_007_8018C50C;
extern s32 func_8012CC1C();
extern s32 func_8012AF0C();

extern s32 func_8012BD3C();
extern void func_8012D624();
extern s32 func_sc03_007_8017EEA4();
extern WMtx D_800AE620;
extern void RotMatrixY();
extern void ApplyMatrixLV();
extern u8 D_sc03_007_8018C048;
extern u16 D_sc03_007_8018C054[];
extern u16 D_sc03_007_8018C05C[];
extern s32 func_8012B744();

extern s32 func_8014CAFC();
extern s32 D_80126B78;
extern s32 D_80126B90;
extern s32 func_sc03_007_80180838();
extern void VectorNormalSS();
extern void func_8012F568();
extern u8 D_sc03_007_8018C678;
extern void func_8016AA50();
extern u8 *func_80143BDC();
extern void func_sc03_007_8017FE04();
extern s32 rsin();
extern s32 rcos();
extern s32 D_sc03_007_801EB154;

extern u8 D_sc03_007_8018BFE0;
extern u8 D_sc03_007_8018C014;

extern s32 func_80133784();
extern s32 func_80134510();

extern s32 func_8012DF34();
extern SV8 D_sc03_007_8018BD34[];
extern s32 func_sc03_007_8017EF68();
extern u8 D_80126B58;
extern SV8 D_sc03_007_8018C340[];
extern u8 D_801152A8;
extern void SetRotMatrix();
extern void SetTransMatrix();
extern s16 D_801274EC;
extern s16 D_80126940;
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 D_sc03_007_8018BC3C[];
extern s32 func_80148800();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void RotMatrixZYX();
extern s32 D_sc03_007_801E9CD8;
extern u8 D_sc03_007_801E38F0;
extern u8 D_sc03_007_801E3DA8;
extern void func_80143B6C();
extern void func_sc03_007_801836B8();

extern u16 D_sc03_007_8018C064[];
extern u16 D_sc03_007_8018C06C[];
extern u8 D_sc03_007_801B0DD4;
extern u8 D_sc03_007_801E4B08;
extern u8 D_sc03_007_801E3B88;
extern u8 D_sc03_007_801E3C10;
extern s32 D_sc03_007_8018C510;
extern u8 D_sc03_007_8018C514;
extern u8 D_sc03_007_801E3CE0;

extern SV8 D_sc03_007_8018C524[];
extern s32 func_sc03_007_80185D3C();
extern u8 D_sc03_007_8018BC20;
extern u8 D_sc03_007_8018BC28;
extern u8 D_sc03_007_8018BC30;

extern u8 D_sc03_007_8018C7AC[];
extern s16 D_sc03_007_8018C7CC[];
extern s16 D_sc03_007_8018C7CE[];

typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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






typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
extern s32 func_8012C1B8();
extern s32 D_sc03_007_8018C36C[];



extern u8 D_sc03_007_801E42B0;

void func_sc03_007_80180388(s32 arg0);
s32 func_sc03_007_8018033C(s32 arg0, s32 arg1);
extern s32 func_800D0CE0();

extern u8 D_sc03_007_8018C220;
extern s32 *D_sc03_007_8018C1F0[];
extern u8 D_sc03_007_801B0DA4;
s32 func_sc03_007_8017EF1C(void);
extern u8 D_sc03_007_8018BC50;
extern u8 D_sc03_007_8018BC84;
s32 func_sc03_007_80180454(void);
extern u8 D_sc03_007_8018BD54;
extern u8 D_sc03_007_8018BE58;

extern void func_8001CD50();


typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u16 D_800B9A02;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc03_007_801EB160;

void func_sc03_007_8017C59C(u8 *o) {
    SV8 r;
    s32 tmp[4];
    SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    GteC77 g;
    s32 x0, x1, y0, y1;
    s32 xi, yi;
    CellC77 **row;
    CellC77 **cp;
    CellC77 *c;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    u32 *poly;
    u32 *end;
    u32 w;
    s32 hi;
    s32 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;
    u32 cx, cy, cz;
    u32 bxl, bxh, byl, byh, bzl, bzh;

    ReadGeomScreen();
    GsGetLs(o + 0x10, &ls);
    GsSetLsMatrix(&ls);
    func_sc03_007_8017BEBC(&D_sc03_007_801EB160, &r, AF(o, s32, 0x60));
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    x0 = (r.x + 0x4000) / 512;
    x1 = (r.x + r.z + 0x4000) / 512 + 2;
    x0 = x0 < 0 ? 0 : (x0 > 63 ? 63 : x0);
    x1 = x1 < 0 ? 0 : (x1 > 63 ? 63 : x1);
    y0 = (r.y + 0x4000) / 512 - 1;
    y1 = (r.y + r.pad + 0x4000) / 512 + 2;
    y0 = y0 < 0 ? 0 : (y0 > 63 ? 63 : y0);
    y1 = y1 < 0 ? 0 : (y1 > 63 ? 63 : y1);
    row = &AF(o, CellC77 **, 0xC)[y0 * 64 + x0];
    for (yi = y0; yi < y1; yi++, row += 64) {
        for (xi = x0, cp = row; xi < x1; xi++, cp++) {
            c = *cp;
            if (c == 0) continue;
            cx = c->x; cy = c->y; cz = c->z;
            bxl = cx & 0xFFFF; byl = cy & 0xFFFF; bzl = cz & 0xFFFF;
            bxh = cx >> 16; bzh = cz >> 16; byh = cy >> 16;
            box[0].x = bxl; box[0].y = byl; box[0].z = bzl;
            box[1].x = bxh; box[1].y = byl; box[1].z = bzl;
            box[2].x = bxl; box[2].y = byl; box[2].z = bzh;
            box[3].x = bxh; box[3].y = byl; box[3].z = bzh;
            box[4].x = bxl; box[4].y = byh; box[4].z = bzl;
            box[5].x = bxh; box[5].y = byh; box[5].z = bzl;
            box[6].x = bxl; box[6].y = byh; box[6].z = bzh;
            box[7].x = bxh; box[7].y = byh; box[7].z = bzh;
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

            if (scr[0].x > scr[1].x) { hi = scr[0].x; xh = scr[1].x; } else { xh = scr[0].x; hi = scr[1].x; }
            if (scr[2].x > hi) hi = scr[2].x; else if (scr[2].x < xh) xh = scr[2].x;
            if (scr[3].x > hi) hi = scr[3].x; else if (scr[3].x < xh) xh = scr[3].x;
            if (scr[4].x > scr[5].x) { yl = scr[4].x; yh = scr[5].x; } else { yh = scr[4].x; yl = scr[5].x; }
            if (scr[6].x > yl) yl = scr[6].x; else if (scr[6].x < yh) yh = scr[6].x;
            if (scr[7].x > yl) yl = scr[7].x; else if (scr[7].x < yh) yh = scr[7].x;
            xl = xh; if (yh < xl) xl = yh;
            xh = hi; if (xh < yl) xh = yl;
            if (xh < -160 || xl > 160) continue;

            if (scr[0].y > scr[1].y) { xl = scr[0].y; yl = scr[1].y; } else { yl = scr[0].y; xl = scr[1].y; }
            if (scr[2].y > xl) xl = scr[2].y; else if (scr[2].y < yl) yl = scr[2].y;
            if (scr[3].y > xl) xl = scr[3].y; else if (scr[3].y < yl) yl = scr[3].y;
            if (scr[4].y > scr[5].y) { xh = scr[4].y; yh = scr[5].y; } else { yh = scr[4].y; xh = scr[5].y; }
            if (scr[6].y > xh) xh = scr[6].y; else if (scr[6].y < yh) yh = scr[6].y;
            if (scr[7].y > xh) xh = scr[7].y; else if (scr[7].y < yh) yh = scr[7].y;
            if (yh < yl) yl = yh;
            yh = xl; if (yh < xh) yh = xh;
            if (yh < -120 || yl > 120) continue;

            poly = c->start;
            end = c->end;
            verts = c->verts;
            for (; poly < end; poly += 3) {
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
                type = w & 0xF;
                d = verts + ((w & 0xFFF0) >> 1);
                gte_stopz(&g.z);
                if (g.z <= 0) continue;
                switch (type) {
                case 4:
                case 5:
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3_f3(pk);
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
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3c(tmp);
                    gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz3();
                    if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                    g.z = m;
                    if (type != 6) g.z = m + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
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
                { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
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
                    if (zb < za) zb = za;
                    g.z = zb;
                    if (type != 0) g.z = zb + 0x200;
                    AF(pk, u32, 4) = poly[0];
                    otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x18;
                    break;
                }
                case 2:
                case 3:
                { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                    gte_stsxy3c(tmp);
                    gte_ldv0(d);
                    gte_rtps();
                    gte_stflg(&g.flag);
                    if (g.flag & 0x7F85E000) continue;
                    gte_stsxy(&tmp[3]);
                    gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    p3 = AF(tmp, s16, 0xC);
                    if (p3 > xh) xh = p3; else if (p3 < xl) xl = p3;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    q3 = AF(tmp, s16, 0xC);
                    if (q3 > yh) yh = q3; else if (q3 < yl) yl = q3;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz4();
                    za = g.sz2; if (za < g.sz3) za = g.sz3;
                    zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                    if (zb < za) zb = za;
                    g.z = zb;
                    if (type != 2) g.z = zb + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
                    AF(pk, s32, 0x20) = tmp[3];
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
    }
    g_PrimNext = pk;
}

void func_sc03_007_8017D468(s32 arg0, s32 arg1) {
    if (func_80029178(0x142, arg1) & 0xFF) {
        func_8002D4C8(0xC4D, 0);
    } else {
        func_80029124(0x142, 1);
    }
    func_sc03_007_8017D4C4(arg0);
}

s32 func_sc03_007_8017D4C4(s32 arg0) {
    D_801274C8 = &D_sc03_007_8018CE04;
    D_801274CC = &D_sc03_007_8018CE90;
    return (s32) &D_sc03_007_8018CE90;
}

void func_sc03_007_8017D4EC(void) {
    D_801274C8 = &D_sc03_007_8018CEA4;
    D_801274CC = &D_sc03_007_8018CF1C;
}

void func_sc03_007_8017D514(void) {
    D_801274C8 = &D_sc03_007_8018CF30;
    D_801274CC = &D_sc03_007_8018CF94;
}

void func_sc03_007_8017D53C(void) {
    D_801274C8 = &D_sc03_007_8018CFA8;
    D_801274CC = &D_sc03_007_8018D034;
}

void func_sc03_007_8017D564(void) {
    D_801274C8 = &D_sc03_007_8018D048;
    D_801274CC = &D_sc03_007_8018D0AC;
}

void func_sc03_007_8017D58C(void) {
    D_801274C8 = &D_sc03_007_8018D0C0;
    D_801274CC = &D_sc03_007_8018D14C;
}

void func_sc03_007_8017D5B4(void) {
    D_801274C8 = &D_sc03_007_8018D160;
    D_801274CC = &D_sc03_007_8018D1EC;
}

void func_sc03_007_8017D5DC(void) {
    D_801274C8 = &D_sc03_007_8018D200;
    D_801274CC = &D_sc03_007_8018D2A0;
}

void func_sc03_007_8017D604(void) {
    D_801274C8 = &D_sc03_007_8018D2B4;
    D_801274CC = &D_sc03_007_8018D32C;
}

void func_sc03_007_8017D62C(void) {
    D_801274C8 = &D_sc03_007_8018D340;
    D_801274CC = &D_sc03_007_8018D3B8;
}

void func_sc03_007_8017D654(void) {
    D_801274C8 = &D_sc03_007_8018D3CC;
    D_801274CC = &D_sc03_007_8018D46C;
}

void func_sc03_007_8017D67C(void) {
    D_801274C8 = &D_sc03_007_8018D480;
    D_801274CC = &D_sc03_007_8018D4F8;
}

void func_sc03_007_8017D6A4(void) {
    D_801274C8 = &D_sc03_007_8018D50C;
    D_801274CC = &D_sc03_007_8018D584;
}

void func_sc03_007_8017D6CC(void) {
    D_801274C8 = &D_sc03_007_8018D598;
    D_801274CC = &D_sc03_007_8018D610;
}

void func_sc03_007_8017D6F4(void) {
    if (((u32) (func_800291B4(0xCC) & 0xFF) < 0xFU) && (func_800291B4(0xCC) & 0xFF)) {
        func_800291A0(0xCC, 1);
    }
}

void func_sc03_007_8017D740(void) {
    switch (func_800291B4(0xCC) & 0xFF) {
    case 3:
        func_800291A0(0xCC, 4);
        break;
    case 5:
        func_800291A0(0xCC, 6);
        break;
    case 7:
        func_800291A0(0xCC, 8);
        break;
    case 9:
        func_800291A0(0xCC, 0xA);
        break;
    case 11:
        func_800291A0(0xCC, 0xC);
        break;
    case 13:
        func_800291A0(0xCC, 0xE);
        break;
    case 14:
        func_800291A0(0xCC, 0xF);
        break;
    }
}

void func_sc03_007_8017D7E4(void) {
}

void func_sc03_007_8017D7EC(void) {
    D_801274C8 = &D_sc03_007_8018CAA8;
    D_801274CC = &D_sc03_007_8018CDC8;
}

void func_sc03_007_8017D814(void) {
    D_801274C8 = &D_sc03_007_8018CB84;
    D_801274CC = &D_sc03_007_8018CDDC;
}

void func_sc03_007_8017D83C(void) {
    D_801274C8 = &D_sc03_007_8018CCC4;
    D_801274CC = &D_sc03_007_8018CDF0;
}

void func_sc03_007_8017D864(u8 *arg0) {
    D_sc03_007_8018BBCC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017D8A0(u8 *arg0) {
    func_sc03_007_8017DBB4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_007_8017D8E4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_007_8017D908(u8 *arg0) {
    D_sc03_007_8018BBD4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017D944(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28((s32) arg0);
        if (func_sc03_007_80183F7C() != 0) {
            func_8002D4C8(0x1C, 0);
            func_8001BFD0();
            func_8002D4C8(0x1D, 0);
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_007_8017D9D0(u8 *arg0) {
    D_sc03_007_8018BBE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017DA0C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        if (!(func_80029178(0x117) & 0xFF)) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_007_8017DA9C(u8 *arg0) {
    D_sc03_007_8018BBEC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017DAD8(u8 *arg0) {
    func_sc03_007_8017DBDC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_007_8017DB18(u8 *arg0) {
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

void func_sc03_007_8017DB94(void) {
    func_800D1EBC();
}

void func_sc03_007_8017DBB4(void) {
    func_8016EE40((s32) &D_sc03_007_8018BBF8, 0x01000000);
}

void func_sc03_007_8017DBDC(void) {
    func_8016EE40((s32) &D_sc03_007_8018BC04, 0x01000000);
}

void func_sc03_007_8017DC04(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC18;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DC54(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC20;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DCA4(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC28;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DCF4(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC30;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DD44(void) {
    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_007_8017DDE4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_007_8017DDE4((s32) &D_80126948);
}

void func_sc03_007_8017DDE4(s32 arg0) {
    D_sc03_007_8018BC38[AF(arg0, u8, 4)]();
}

void func_sc03_007_8017DE20(s32 arg0) {
    func_sc03_007_8017DE40(arg0);
}

void func_sc03_007_8017DE40(u8 *o) {
    WMtx m;
    SV4 v;
    SV4 q;
    s16 *y;
    u8 t;

    if (func_80148800(&D_80126B58) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc03_007_8018BC3C[t];
    }
    AF(o, s32, 8) = (s16) func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16) func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    {
        s16 g = D_80126940;
        s16 p = *(s16 *)&D_801274E8;
        if (g < p - 0x280) {
            q.x = p - 0x280;
        } else if (p + 0x280 < g) {
            q.x = p + 0x280;
        } else {
            q.x = g;
        }
    }
    {
        s16 g = D_80126944;
        s16 p = D_801274EC;
        if (g < p - 0x280) {
            q.z = p - 0x280;
        } else if (p + 0x280 < g) {
            q.z = p + 0x280;
        } else {
            q.z = g;
        }
    }
    y = &D_80126942;
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + q.x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + *y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + q.z;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + q.x;
    m.t[1] = AF(o, s16, 0x2A) + *y;
    m.t[2] = AF(o, s16, 0x2C) + q.z;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &q);
    AF(o, s32, 0x3C) = q.x;
    AF(o, s32, 0x40) = q.y;
    AF(o, s32, 0x44) = q.z;
}

void func_sc03_007_8017E0B4(u8 *arg0) {
    void *temp_v1;

    D_sc03_007_8018BD14[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    }
}

void func_sc03_007_8017E124(u8 *o) {
    u8 *p;
    s32 c;
    u16 *q;

    if (func_sc03_007_8017EF1C() == 0) {
        q = &D_801274E4;
        *q |= 1;
        return;
    }
    if (func_8012C354(o, &D_sc03_007_8018BC50) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018BC84;
        AF(o, s32, 0xB4) = 0xFFFBDFDD;
        AF(o, s16, 0xDE) = 0;
        AF(o, s32, 0xC4) |= 1;
        func_80143970(o);
        SetScript(o, &D_sc03_007_801BB024);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        c = rcos(0x380);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = c;
        AF(p, s16, 0x1A) = c;
        AF(p, s16, 0x18) = c;
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x86) = 1;
        func_8012B2CC(o);
    }
}

void func_sc03_007_8017E218(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 2;
        return;
    }
    temp_v0_2 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = temp_v0_2;
    AF(temp_v1, s16, 0x1A) = temp_v0_2;
    AF(temp_v1, s16, 0x18) = temp_v0_2;
}

s32 func_sc03_007_8017E294(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    return SetScript(arg0, (s32) &D_sc03_007_801BB024);
}

void func_sc03_007_8017E2C0(u8 *arg0) {
    if (func_sc03_007_8017EE50() <= 0x10000) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_007_8017E2FC(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BB034);
    AF(arg0, s32, 0x1C) = 0x17;
}

void func_sc03_007_8017E33C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_007_8017E370(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_8012B23C((s32) arg0);
    func_sc03_007_8017EA04((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BB0FC);
    AF(arg0, s32, 0x1C) = 0x23;
}

void func_sc03_007_8017E3C0(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) - 0x71);
    if (func_sc03_007_8017EA48() == 1) {
        func_sc03_007_8017EC90((s32) arg0, 2);
        goto block_7;
    }
    func_sc03_007_8017E83C((s32) arg0);
    if ((AF(arg0, u16, 0x72) & 0x4000) && (func_8012E778((s32) arg0, 0x8C00B4) == 1)) {
        func_8002D4C8(0x662, 0);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc03_007_8017EA04((s32) arg0);
block_7:
        AF(arg0, s32, 0x1C) = 0x23;
    }
}

void func_sc03_007_8017E47C(u8 *o) {
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0;
    if (AF(o, s16, 0xAA) == 0) {
        AF(o, u16, 0x100) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(o, s16, 0x104) = 0;
    } else {
        AF(o, u16, 0x102) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(o, s16, 0x104) = 1;
    }
}

void func_sc03_007_8017E4C8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x102);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_007_8017E56C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_007_8017E57C(u8 *o) {
    u8 *p;
    s32 v;

    if (func_8012BEE8(o) != 0) {
        if (AF(o, s16, 0x104) != 0) {
            v = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
            AF(o, s16, 0x104) = 0;
        } else {
            v = AF(o, s16, 0x100);
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        }
        p = o;
        AF(p, s16, 0x60) = 0;
        AF(p, u16, 0x5C) |= 1;
        AF(p, s16, 0x62) = AF(AF(p, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(p, s16, 0x5E) = 1;
        func_80131E00(p, 1);
    } else {
        p = AF(o, u8 *, 0x20);
        v = AF(p, s16, 0x18) + (AF(o, s16, 0x100) - AF(p, s16, 0x18)) / 4;
        AF(p, s16, 0x1C) = v;
        AF(p, s16, 0x18) = v;
    }
}

void func_sc03_007_8017E654(u8 *arg0) {
    s32 t;
    s32 var_a0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x37;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BB2BC);
    AF(arg0, s16, 0x34) = 0;
    t = func_8012BCCC((s32) arg0);
    var_a0 = 0x52B;
    if (t <= 0x8FFF) {
        var_a0 = 0x52A;
    }
    func_8002D4C8(var_a0, 0);
}

void func_sc03_007_8017E6C0(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_80130D48((s32) arg0);
        func_sc03_007_8017EE20((s32) arg0);
    }
}

void func_sc03_007_8017E730(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc03_007_8017E748(void) {
}

void func_sc03_007_8017E750(u8 *arg0) {
    s16 v[3];
    u16 t;

    t = AF(arg0, u16, 0x5E);
    if (t == 0x23) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D4C8(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = v[2] = 0;
        v[1] = -8;
        func_sc03_007_8018732C((s32) arg0, v, 0xB);
    }
}

void func_sc03_007_8017E7B4(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

s32 func_sc03_007_8017E83C(u8 *o) {
    SV a;
    SV b;
    s32 w;
    s32 *wp;
    u8 *p;
    s32 i;
    s32 ret = 1;
    s32 f;

    f = func_8012CBA4(o);
    if (f == 0) {
        func_8012ADE4(o);
        func_sc03_007_8017EC90(o, 2);
        ret = 0;
    } else if (f & 0xC000) {
        if (!(f & 0x2000)) {
            func_8012ADE4(o);
        }
        func_sc03_007_8017EC90(o, 2);
        ret = 0;
    }
    for (p = (u8 *)&D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, s32, 0x58) != 0 && o != p) {
            if (func_8012BC60(o + 4, p + 4) < 0x1000) {
                wp = &w;
                func_8012B0B4(wp, func_8012B6D4(o + 4, p + 4), 0x41);
                b.vx = AF(p, s16, 6);
                b.vy = AF(p, s16, 0xA);
                b.vz = AF(p, s16, 0xE);
                b.vx += w;
                b.vz += w >> 16;
                a.vx = AF(o, s16, 0x3A);
                a.vy = AF(o, s16, 0x3E);
                a.vz = AF(o, s16, 0x42);
                if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                    func_8012ADE4(o);
                    break;
                }
                AF(o, s16, 6) = b.vx;
                AF(o, s16, 0xA) = b.vy;
                AF(o, s16, 0xE) = b.vz;
                break;
            }
        }
    }
    return ret;
}

s32 func_sc03_007_8017EA04(u8 *o) {
    if (AF(o, s16, 0xAA) > 0) {
        func_sc03_007_8017EC90(o, 4);
        return 0;
    }
    func_sc03_007_8017EC90(o, 0);
    return 1;
}

s32 func_sc03_007_8017EA48(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 flag;
    s32 r;
    u16 h;

    r = 0;
    m = D_800AE620;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc03_007_8018BD34[0], &a, &flag);
    RotTransSV(&D_sc03_007_8018BD34[1], &b, &flag);
    if (((s32 (*)())func_sc03_007_8017EF68)() == 1 && (AF(D_801270C8[0], u16, 0x5C) & 0x8000)
        && AF(D_801270C8[0], u16, 0x5E) != 1) {
        c = a;
        d = b;
        if (func_80135888(AF(D_801270C8[0], s32, 0x20), AF(D_801270C8[0], s32, 0x58), &c, &d) != 0) {
            AF(D_801270C8[0], u16, 0x5C) |= 1;
            AF(D_801270C8[0], s16, 0x60) = 0xD;
            r = 1;
            AF(D_801270C8[0], s16, 0x62) = AF(o, u16, 0xDC);
            AF(D_801270C8[0], s16, 0x5E) = 1;
        }
    }
    if (func_8012DF34(o, &a, &b) == 1) {
        r = 1;
        h = AF(o, u16, 0xDC);
        D_80126B98 = 0xD;
        D_80126B9A = h;
    }
    return r;
}

void func_sc03_007_8017EC90(u8 *o, s32 k) {
    V3 v;
    WMtx m;
    s32 a;
    s32 b;

    v.z = -0x40000;
    v.y = 0;
    v.x = 0;
    switch (k) {
    case 0:
        if (rand() & 1) {
            break;
        }
    case 1:
        AF(o, s16, 0xDC) = func_sc03_007_8017EEA4(o);
        break;
    case 2:
        b = rand() % 80;
        a = AF(o, s16, 0xDC);
        AF(o, s16, 0xDC) = ((rand() & 1) == 0) ? (s16)(a + 0x800) - b : (s16)(a + 0x800) + b;
        break;
    case 3:
        AF(o, s16, 0xDC) = rand() % 4096;
        break;
    case 4:
        AF(o, s16, 0xDC) = (func_sc03_007_8017EEA4(o) + 0x800) & 0xFFF;
        break;
    }
    m = D_800AE620;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

s32 func_sc03_007_8017EE20(s32 arg0) {
    func_8002A04C(arg0);
    return func_8012C098(arg0);
}

s32 func_sc03_007_8017EE50(s32 arg0) {
    if (func_sc03_007_8017EF68() == 1) {
        return func_8012BC60(arg0 + 4, D_801270C8[0] + 4);
    }
    return func_8012BCCC(arg0);
}

s32 func_sc03_007_8017EEA4(u8 *o) {
    SV8 v;
    u8 *p;

    if (func_sc03_007_8017EF68() == 1) {
        p = (u8 *)D_801270C8[0];
        v.x = AF(p, u16, 6);
        v.y = AF(p, u16, 0xA);
        v.z = AF(p, u16, 0xE);
        return func_8012B744(o + 4, &v);
    }
    return func_8012B864(o);
}

s32 func_sc03_007_8017EF1C(void) {
    s32 v = func_800291B4(0xCC) & 0xFF;
    if (v == 10) return 1;
    if (v == 12) return 1;
    if (v != 11) return v == 13;
    return 1;
}

s32 func_sc03_007_8017EF68(s32 arg0, s32 arg1, s32 arg2) {
    if ((*(void * *)&D_801270C8) != NULL) {
        return AF((*(void * *)&D_801270C8), s16, 0x76) > 0;
    }
    return 0;
}

void func_sc03_007_8017EF98(u8 *arg0) {
    D_sc03_007_8018BEF0[AF(arg0, u16, 2)]();
}

void func_sc03_007_8017EFD4(u8 *o) {
    u8 *p;
    s32 c;
    u16 *q;

    if (func_sc03_007_80180454() == 0) {
        q = &D_801274E4;
        *q |= 1;
        return;
    }
    if (func_8012C354(o, &D_sc03_007_8018BD54) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018BE58;
        AF(o, s32, 0xB4) = -0xA9;
        func_80143970(o);
        AF(o, s32, 0xE0) = 0;
        SetScript(o, &D_sc03_007_801BE488);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, s32, 0x1C) = 8;
        c = rcos(0x380);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = c;
        AF(p, s16, 0x18) = c;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = rsin(0x380) * 2 + 0x1000;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x86) = 1;
        func_8012B2CC(o);
    }
}

void func_sc03_007_8017F0C8(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 2;
        return;
    }
    temp_v0_2 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = temp_v0_2;
    AF(temp_v1, s16, 0x18) = temp_v0_2;
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rsin((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3) * 2) + 0x1000);
}

void func_sc03_007_8017F164(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE488);
    AF(arg0, s32, 0x1C) = (s32) ((rand() % 10) + 0x18);
    if (AF(arg0, s32, 0xE0) != 0) {
        AF(arg0, s32, 0xE0) = 0;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x30);
    }
}

void func_sc03_007_8017F1F8(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 0x40);
    if ((func_sc03_007_801802A4() != 1) && (func_8012BEE8((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_007_8017F258(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_8012B23C((s32) arg0);
    func_8012B178((s32) arg0, -0x18000);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE488);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_007_8017F2B4(s32 arg0) {
    s32 temp_v0;

    if (func_sc03_007_801802A4() != 1) {
        temp_v0 = func_sc03_007_80180064(arg0, (s32) &D_800D3918);
        if (temp_v0 != 0) {
            if (temp_v0 == -1) {
                func_sc03_007_8018022C(arg0);
                return;
            }
            if (func_8012BEE8(arg0) != 0) {
                goto block_5;
            }
        } else {
block_5:
            AF(arg0, s16, 2) = 2;
        }
    }
}

void func_sc03_007_8017F334(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_8012B23C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE580);
    AF(arg0, s32, 0x1C) = 0x24;
}

void func_sc03_007_8017F37C(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_sc03_007_8018033C((s32)o, 8);
    if (AF(o, s32, 0x1C) < 0x19) {
        func_8012B178(o, -0x40000);
        func_sc03_007_80180064((s32)o, (s32)&D_800D3918);
    }
    if (func_8012BEE8(o) != 0 || ((s32 (*)())func_sc03_007_80180388)(o) < 0x2001) {
        AF(o, s16, 2) = 8;
    }
}

void func_sc03_007_8017F414(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 8;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
}

void func_sc03_007_8017F444(u8 *o) {
    SV8 v;
    u8 *p;
    u8 *q;
    s16 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x1E;
            ((TB *)(AF(o, u8 *, 0x20) + 4))->top = 1;
            AF(o, s16, 0xE4) = 3;
            return;
        }
        t = rsin(AF(o, s32, 0x1C) << 10 >> 3);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = t;
        AF(p, s16, 0x18) = t;
        t = rcos(AF(o, s32, 0x1C) << 10 >> 3) * 2;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = t + 0x1000;
        break;
    case 1:
        if (--AF(o, s16, 0xE4) == 0) {
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA) - 0x38;
            v.z = AF(o, s16, 0xE);
            q = func_80143BDC(&v);
            if (q != 0) {
                p = AF(q, u8 *, 0xCC);
                if (p != 0) {
                    AF(p, s16, 0x1A) = 0x5000;
                    AF(p, s16, 0x18) = 0x5000;
                }
            }
            AF(o, s16, 0x34) = 2;
        }
    case 2:
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34) = 3;
            ((TB *)(AF(o, u8 *, 0x20) + 4))->top = 0;
            func_sc03_007_8017FE04(o);
            AF(o, s32, 0x1C) = 8;
            AF(o, u16, 0x5C) = 0xAA10;
        }
        break;
    case 3:
        if (func_8012BEE8(o) != 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(o, s16, 2) = 0xA;
            return;
        }
        t = rcos(AF(o, s32, 0x1C) << 10 >> 3);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = t;
        AF(p, s16, 0x18) = t;
        t = rsin(AF(o, s32, 0x1C) << 10 >> 3) * 2;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = t + 0x1000;
        break;
    }
}

void func_sc03_007_8017F658(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_8012B23C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE658);
    AF(arg0, s32, 0x1C) = 0x1A;
    func_8012B23C((s32) arg0);
}

void func_sc03_007_8017F6A8(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_sc03_007_8018033C((s32)o, 8);
    func_8012B178(o, -0x40000);
    if (func_sc03_007_80180064(o, &D_800D3918) == 2) {
        AF(o, s16, 2) = 0xC;
    } else if (func_8012BEE8(o) != 0) {
        if (((s32 (*)())func_sc03_007_80180388)(o) > 0x7000) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 0xC;
        }
    } else if (((s32 (*)())func_sc03_007_80180388)(o) <= 0x3800) {
        AF(o, s16, 2) = 0xC;
    }
}

void func_sc03_007_8017F750(u8 *arg0) {
    AF(arg0, s16, 2) = 0xD;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE730);
    AF(arg0, s32, 0x1C) = 0x5A;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc03_007_8017F794(u8 *o) {
    if (AF(o, s32, 0x1C) >= 0x16) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_sc03_007_8018033C((s32)o, 8);
    }
    if (AF(o, s32, 0x1C) == 0x15) {
        func_8002D4C8(0x522, 0);
    }
    if (AF(o, s32, 0x1C) == 0x15 || AF(o, s32, 0x1C) == 0xB || AF(o, s32, 0x1C) == 1) {
        func_sc03_007_8017FC6C(o);
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s16, 2) = 2;
    }
}

void func_sc03_007_8017F850(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 2) = 0xF;
    func_8012B2CC((s32) arg0, arg1);
    func_8012B23C((s32) arg0);
    func_8012B178((s32) arg0, -0x30000);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE580);
    AF(arg0, s32, 0x1C) = 0x1A;
}

void func_sc03_007_8017F8AC(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0xAA) <= 0) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_007_801BE580);
        AF(arg0, s32, 0x1C) = 0x1A;
    }
    func_sc03_007_80180064((s32) arg0, (s32) &D_800D3918);
}

void func_sc03_007_8017F920(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_v1_2;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a1, u16, 0x2C);
    if (temp_v1 & 0x10) {
        AF(temp_a1, u16, 0x2C) = (u16) (temp_v1 & 0xFFEF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 0x1000;
        AF(temp_v1_2, s16, 0x1A) = 0x1000;
        AF(temp_v1_2, s16, 0x18) = 0x1000;
    }
}

void func_sc03_007_8017F95C(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((func_8012B864((s32) arg0) + 0x800) & 0xFFF);
}

void func_sc03_007_8017F99C(u8 *arg0) {
    s16 var_v0;
    u16 temp_v1_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    func_8012B23C((s32) arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1000;
    AF(temp_v1_2, s16, 0x1A) = 0x1000;
    AF(temp_v1_2, s16, 0x18) = 0x1000;
    temp_v1_3 = AF(arg0, u16, 0x5E);
    if ((temp_v1_3 == 9) || (temp_v1_3 == 0x1C)) {
        func_8012B14C((s32) arg0, (s32) &D_sc03_007_8018BF30);
        var_v0 = 0xCC;
    } else {
        func_8012B14C((s32) arg0, (s32) &D_sc03_007_8018BF3C);
        var_v0 = 0x100;
    }
    AF(arg0, s16, 0xDE) = var_v0;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BEC20);
}

void func_sc03_007_8017FA84(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    func_8012DBD0((s32) arg0, 0xA, AF(AF(arg0, void *, 0x20), s16, 0x12) + 0x800, 0x1D);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0xDE));
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x29) {
        func_80131E00((s32) arg0, 0xD);
        return;
    }
    if (func_8012CC64((s32) arg0, (s32) &D_sc03_007_8018BF48) & 0x2000) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0U;
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0xE0) = 1;
    }
}

void func_sc03_007_8017FB40(u8 *arg0) {
    void *temp_v1;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x3C);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BEC20);
}

void func_sc03_007_8017FBA0(u8 *o) {
    SV8 v;
    s32 s;
    u8 *p;

    if (func_8012BEE8(o) != 0) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE);
        func_80143BDC(&v);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_80130D48(o);
        func_sc03_007_8018022C(o);
        return;
    }
    s = rsin((AF(o, s32, 0x1C) << 10) >> 4);
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x1C) = s;
    AF(p, s16, 0x1A) = s;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = rcos((AF(o, s32, 0x1C) << 10) >> 4) * 4 + 0x1000;
}

void func_sc03_007_8017FC6C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;

    gte_SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc03_007_8018BE48, &a, &f);
    RotTransSV(&D_sc03_007_8018BE50, &b, &f);
    func_sc03_007_8017FD6C(AF(AF(o, u8 *, 0x20), s16, 0x12), &a, AF(o, s16, 0xDC));
    func_sc03_007_8017FD6C(AF(AF(o, u8 *, 0x20), s16, 0x12), &b, AF(o, s16, 0xDC));
    if (++AF(o, s16, 0xDC) >= 3) {
        AF(o, s16, 0xDC) = 2;
    }
}

s32 func_sc03_007_8017FD6C(s32 arg0, s32 a1, s32 a2) {
    s16 a0 = arg0;
    s32 e;
    s32 *t;

    e = func_801290DC(0x1D);
    if (e == 0) {
        return 0;
    }
    t = D_sc03_007_8018BD88[a2];
    a2 = AF(e, s32, 0x20);
    func_8001CD50(a2, t);
    AF(a2, s16, 0x1E) = 0xC00;
    AF(a2, s16, 0x18) = AF(a2, s16, 0x1A) = 0x1000;
    AF(a2, s16, 0x12) = a0;
    AF(a2, s32, 4) |= 0x40000000;
    return e;
}

void func_sc03_007_8017FE04(u8 *o) {
    V4 dir;
    V4 out;
    SV8 s;
    SV8 t;
    u8 unused[8];
    WMtx m;
    UXY pos[3];

    func_8012B23C(o);
    s.x = AF(o, u16, 0x3A);
    s.y = AF(o, u16, 0x3E);
    s.z = AF(o, u16, 0x42);
    if (func_sc03_007_80180AF4() == 1) {
        AF(o, u16, 6) = AF(D_801270C8[0], u16, 6);
        AF(o, u16, 0xA) = AF(D_801270C8[0], u16, 0xA);
        AF(o, u16, 0xE) = AF(D_801270C8[0], u16, 0xE);
    } else {
        AF(o, u16, 6) = D_80126CB4;
        AF(o, u16, 0xA) = D_80126CB6;
        AF(o, u16, 0xE) = D_80126CB8;
    }
    dir.y = 0;
    dir.x = 0;
    dir.z = 0xFF600000;
    m = D_800AE620;
    RotMatrixY(rand() % 4096, &m);
    pos[1].w = AF(o, s32, 8);
    do {
        pos[0].w = AF(o, s32, 4);
        pos[2].w = AF(o, s32, 0xC);
        ApplyMatrixLV(&m, &dir, &out);
        pos[0].w += out.x;
        pos[2].w += out.z;
        t.x = pos[0].s.y;
        t.y = pos[1].s.y;
        t.z = pos[2].s.y;
        if (!(func_80133784(1, &s, &t) & 0x8000)) {
            if (func_80134510(&t) != 0) {
                AF(o, u16, 6) = t.x;
                AF(o, u16, 0xA) = t.y;
                AF(o, u16, 0xE) = t.z;
                AF(o, s32, 0x14) = 0;
                goto end;
            }
        }
        dir.z >>= 1;
    } while (-dir.z > 0xFFFF);
    AF(o, u16, 6) = AF(o, u16, 0x88);
    AF(o, u16, 0xA) = AF(o, u16, 0x8A);
    AF(o, u16, 0xE) = AF(o, u16, 0x8C);
end:
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_sc03_007_801803DC(o);
}

s32 func_sc03_007_80180064(u8 *o) {
    SV a;
    SV b;
    s32 w;
    s32 *wp;
    u8 *p;
    s32 i;
    s32 r;

    if (!(func_8012CC1C(o) & 0x2000)) {
        func_8012ADE4(o);
    }
    for (p = (u8 *)&D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(o, u16, 0) != 0 && o != p && AF(o, u16, 0) == AF(p, u16, 0)) {
            if (func_8012BC60(o + 4, p + 4) < 0x1000) {
                wp = &w;
                func_8012B0B4(wp, func_8012B6D4(o + 4, p + 4), 0x41);
                b.vx = AF(p, s16, 6);
                b.vy = AF(p, s16, 0xA);
                b.vz = AF(p, s16, 0xE);
                b.vx += w;
                b.vz += w >> 16;
                a.vx = AF(o, s16, 0x3A);
                a.vy = AF(o, s16, 0x3E);
                a.vz = AF(o, s16, 0x42);
                if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                    func_8012ADE4(o);
                    break;
                }
                AF(o, s16, 6) = b.vx;
                AF(o, s16, 0xA) = b.vy;
                AF(o, s16, 0xE) = b.vz;
                break;
            }
        }
    }
    r = func_sc03_007_80180AF4();
    if (r == 1 && func_8012AF0C(o, D_801270C8[0]) == r) {
        return 2;
    }
    return 1;
}

void func_sc03_007_8018022C(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_v1 = AF(arg0, void *, 0x68);
        if ((temp_v1 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) & 0x7FFF);
        }
    }
    func_8012C218(arg0);
}

s32 func_sc03_007_801802A4(u8 *o) {
    s32 d;
    s32 a;
    s32 ok;

    d = ((s32 (*)())func_sc03_007_80180388)(o);
    if (d > 0x2000) {
        if (d > 0x10000) {
            return 0;
        }
        a = (func_sc03_007_801803DC(o) - AF(AF(o, u8 *, 0x20), s16, 0x12)) & 0xFFF;
        if (a < 0x800) {
            ok = a < 0x400;
        } else {
            ok = 0x1000 - a < 0x400;
        }
        if (!ok) {
            return 0;
        }
    }
    AF(o, s16, 2) = 6;
    return 1;
}

s32 func_sc03_007_8018033C(s32 arg0, s32 arg1) {
    return func_8012B608((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), func_sc03_007_801803DC(arg0), (s32) (s16) arg1);
}

void func_sc03_007_80180388(s32 arg0) {
    if (func_sc03_007_80180AF4() != 1) {
        func_8012BCCC(arg0);
        return;
    }
    func_8012BC60(arg0 + 4, D_801270C8[0] + 4);
}

s32 func_sc03_007_801803DC(u8 *o) {
    SV8 v;
    u8 *p;

    if (func_sc03_007_80180AF4() == 1) {
        p = (u8 *)D_801270C8[0];
        v.x = AF(p, u16, 6);
        v.y = AF(p, u16, 0xA);
        v.z = AF(p, u16, 0xE);
        return func_8012B744(o + 4, &v);
    }
    return func_8012B864(o);
}

s32 func_sc03_007_80180454(void) {
    s32 temp_v1;

    temp_v1 = func_800291B4(0xCC) & 0xFF;
    if ((temp_v1 == 8) || (temp_v1 == 0xC) || (temp_v1 == 9)) {
        return 1;
    }
    return temp_v1 == 0xD;
}

void func_sc03_007_801804A0(u8 *arg0) {
    D_sc03_007_8018BF50[AF(arg0, u16, 2)]();
}

void func_sc03_007_801804DC(u8 *o) {
    WMtx m;
    V3 v;

    v.y = 0;
    v.x = 0;
    v.z = -0x18000;
    m = D_800AE620;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
    AF(o, s16, 0x2C) = 0x3C;
    AF(o, s16, 2) = 1;
}

void func_sc03_007_80180598(u8 *o) {
    SV8 v;
    u16 c;
    if (D_801270C0 == 2) return;
    if (func_sc03_007_80180AF4() == 1) {
        v.x = AF(D_801270C8[0], s16, 6);
        v.y = AF(D_801270C8[0], s16, 0xA) - 0x10;
        v.z = AF(D_801270C8[0], s16, 0xE);
        func_sc03_007_801806B8(o, &v, &D_sc03_007_8018BF58, 0);
    }
    v.x = D_80126B5E;
    v.y = D_80126B62 - 0x30;
    v.z = D_80126B66;
    func_sc03_007_801806B8(o, &v, &D_sc03_007_8018BF60, 1);
    c = AF(o, u16, 0x2C);
    AF(o, u16, 0x2C) = c - 1;
    if ((s16)c < 0) {
        func_801292C8(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x18) += 0x100;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x100;
    func_8012931C(o);
}

s32 func_sc03_007_801806B8(u8 *o, s32 a1, s32 a2, s32 a3) {
    SV8 d;
    SV8 v;
    s32 p;

    if (a3 != 0) {
        if (func_8014CAFC() != 0) {
            return 0;
        }
        if (func_sc03_007_80180838(o, D_80126B78, D_80126B90) == 0) {
            return 0;
        }
        v.x = D_80126B5E;
        v.y = D_80126B62;
        v.z = D_80126B66;
        d.x = v.x - AF(o, s16, 6);
        d.y = v.y - AF(o, s16, 0xA);
        d.z = v.z - AF(o, s16, 0xE);
        VectorNormalSS(&d, &d);
        v.y -= 0x20;
        func_8012F568(1, 0x5001, 0, 0, &v, &d);
        D_80126B9A = AF(AF(o, u8 *, 0x20), u16, 0x12);
    } else {
        p = D_801270C8[0];
        if (AF(p, s16, 0xAA) > 0) {
            return 0;
        }
        if (func_sc03_007_80180838(o, AF(p, s32, 0x20), AF(p, s32, 0x58)) == 0) {
            return 0;
        }
        AF(D_801270C8[0], u16, 0x5C) |= 1;
        AF(D_801270C8[0], s16, 0x5E) = 0x1E;
        AF(D_801270C8[0], s16, 0x62) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    }
    return 1;
}

s32 func_sc03_007_80180838(u8 *o, s32 a1, s32 a2) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 i;

    p = AF(o, u8 *, 0x20);
    func_80020DA4(p + 0x10, &m);
    func_80020F34(&m, p + 0x18);
    m.t[0] = AF(p, s16, 8);
    m.t[1] = AF(p, s16, 0xA);
    m.t[2] = AF(p, s16, 0xC);
    for (i = 0; i < 4; i++) {
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        RotTransSV(&D_sc03_007_8018BF68[i], &a, &f);
        RotTransSV(&D_sc03_007_8018BF68[i + 4], &b, &f);
        if (func_80135888(a1, a2, &a, &b)) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_007_80180990(u8 *arg0) {
    D_sc03_007_8018BFC8[AF(arg0, u16, 2)]();
}

void func_sc03_007_801809CC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 2;
    AF(arg0, u8, 0xFC) = 1;
    AF(arg0, u8, 0xFE) = 2;
    AF(arg0, u8, 0xFD) = 0;
    AF(arg0, u8, 0xFF) = 4;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc03_007_80180A00(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc03_007_80180A58(0, arg0 + 0xFD);
        func_sc03_007_80180A58(1, arg0 + 0xFE);
        func_sc03_007_80180A58(2, arg0 + 0xFF);
        AF(arg0, s32, 0x1C) = 2;
    }
}

void func_sc03_007_80180A58(s32 arg0, u8 *arg1) {
    s32 pad[1];
    s32 *p;

    if (*arg1 >= 7) {
        *arg1 = 0;
    }
    p = D_sc03_007_8018BD88[arg0];
    *p++ = D_sc03_007_8018BFA8[*arg1];
    if (*arg1 - 1 < 0) {
        *p = D_sc03_007_8018BFA8[6];
    } else {
        *p = D_sc03_007_8018BFA8[*arg1 - 1];
    }
    (*arg1)++;
}

inline s32 func_sc03_007_80180AF4(void) {
    if ((*(void * *)&D_801270C8) != NULL) {
        return AF((*(void * *)&D_801270C8), s16, 0x76) > 0;
    }
    return 0;
}

void func_sc03_007_80180B24(u8 *o) {
    s16 t;
    u8 *p;

    AF(o, s32, 0xB4) |= 1;
    AF(o, s32, 0xC4) &= ~2;
    if (AF(o, s16, 0x60) != 0) {
        AF(o, s16, 0x7C) = AF(o, s16, 0x6);
        AF(o, s16, 0x7E) = AF(o, s16, 0xA);
        AF(o, s16, 0x80) = AF(o, s16, 0xE);
        func_8016AA50(o, AF(o, s16, 0x60));
    }
    t = AF(o, s16, 0x60);
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x60) = 0;
    AF(o, s16, 0x76) -= t;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, s16, 0x62) + 0x800) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    func_8012B2CC(o);
    func_8012B23C(o);
    AF(o, u8, 0xC2) = 1;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0x3C;
    func_8002D4C8(0x526, 0);
}

inline void func_sc03_007_80180BF8(u8 *arg0) {
    AF(arg0, s16, 0x98) = 1;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, u16, 0x5C) = 0x8810;
    AF(arg0, s32, 0xB4) = (s32) (AF(arg0, s32, 0xB4) & ~1);
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
    if (AF(arg0, s16, 0x76) < 0x370) {
        AF(arg0, s16, 0x76) = 0x2BC;
    }
}

void func_sc03_007_80180C48(u8 *arg0) {
    D_80126CB4 = AF(arg0, u16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = AF(arg0, u16, 0xE);
}

void func_sc03_007_80180C74(u8 *o) {
    u8 f;
    u8 c;
    u8 r;
    if (func_8012C354(o, &D_sc03_007_8018BFE0) == 0) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = 0x4000;
    AF(o, u8 *, 0xBC) = &D_sc03_007_8018C014;
    AF(o, u8, 0xC1) = 0;
    AF(o, s32, 0xC4) = 3;
    if (func_80029504() != 0x32) {
        f = 0;
    } else {
        c = func_800291B4(0xCC);
        if (c == 2 || c == 4 || c == 6 || c == 8 || c == 10 || c == 12) {
            f = 0;
        } else {
            f = 1;
        }
    }
    if (f) func_8002D4C8(0xC4D, 0);
    c = func_800291B4(0xCC);
    if (c == 2) { AF(o, s32, 0xE0) = 0xB4; r = 2; }
    else if (c == 4) { AF(o, s32, 0xE0) = 0xD2; r = 2; }
    else if (c == 6) { AF(o, s32, 0xE0) = 0xF0; r = 0; }
    else if (c == 8) { AF(o, s32, 0xE0) = 0x10E; r = 3; }
    else if (c == 10) { AF(o, s32, 0xE0) = 0x12C; r = 0; }
    else if (c == 12) { AF(o, s32, 0xE0) = 0x14A; r = 0; }
    else r = 4;
    if (r == 4) {
        func_8012C218(o);
        return;
    }
    AF(o, s16, 0x102) = 0;
    func_80143970(o);
    AF(o, s16, 2) = 1;
    func_8012B23C(o);
    SetScript(o, &D_sc03_007_801B101C);
    AF(o, s16, 0xDC) = AF(o, s16, 6);
    AF(o, s16, 0xDE) = AF(o, s16, 0xE);
    AF(o, s32, 4) = D_80126B5C;
    AF(o, s32, 0xC) = D_80126B64;
    D_801270C8[0] = (s32)o;
}

void func_sc03_007_80180E3C(u8 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x190) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x191) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        temp_v1_2 = AF(arg0, s16, 0xE) - AF(arg0, s16, 0xDE);
        if (temp_v1_2 < -0x190) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x800;
        } else if (temp_v1_2 >= 0x191) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_007_801B0CFC);
            AF(arg0, s16, 2) = 5;
            AF(arg0, s32, 0x2C) = 0xFFF40000;
        }
    }
    func_8012B1B4((s32) arg0, (s32) &D_sc03_007_8018C03C);
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    D_80126CB4 = (u16) AF(arg0, s16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = (u16) AF(arg0, s16, 0xE);
}

void func_sc03_007_80180F4C(u8 *o) {
    SV8 v;

    func_8012B14C(o, &D_sc03_007_8018C048);
    func_8012CBA4(o);
    if (--AF(o, s16, 0x84) == 0) {
        AF(o, s16, 0x84) = 0xF;
        func_8002D4C8(0x527, 0);
    }
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 0x100) = (rand() & 3) + 1;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += rand() & 0x1FF;
        AF(AF(o, u8 *, 0x20), u16, 0x12) -= 0x100;
        v.x = D_sc03_007_8018C054[AF(o, u8, 0xFE)] + AF(o, u16, 0xDC);
        v.y = 0;
        v.z = D_sc03_007_8018C05C[AF(o, u8, 0xFE)] + AF(o, u16, 0xDE);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), func_8012B744(o + 4, &v), 8);
    }
    if (--AF(o, s32, 0xE0) == 0) {
        SetScript(o, &D_sc03_007_801B101C);
        AF(o, s16, 2) = 3;
        AF(o, s16, 0xFC) = 0;
    }
    D_80126CB4 = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void func_sc03_007_801810E4(u8 *o) {
    SV8 v;
    s32 f;
    s32 n;

    func_8012B1B4(o, &D_sc03_007_8018C03C);
    f = func_8012CBCC(o);
    if (f & 0x6000) {
        AF(o, s16, 0x16) = -4;
    }
    if (f & 0x8000) {
        n = (AF(o, u16, 0x104) + 1) & 0x3F;
        AF(o, u16, 0x104) = n;
        if (n < 0x1F) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x200;
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x12) -= 0x200;
        }
    }
    if (AF(o, s16, 0xFC) != 0) {
        v.x = D_sc03_007_8018C064[AF(o, u8, 0xFE)] + AF(o, u16, 0xDC);
        v.y = 0;
        v.z = D_sc03_007_8018C06C[AF(o, u8, 0xFE)] + AF(o, u16, 0xDE);
    } else {
        v.x = D_sc03_007_8018C054[AF(o, u8, 0xFE)] + AF(o, u16, 0xDC);
        v.y = 0;
        v.z = D_sc03_007_8018C05C[AF(o, u8, 0xFE)] + AF(o, u16, 0xDE);
    }
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), func_8012B744(o + 4, &v), 4);
    if ((AF(o, s16, 6) - v.x) * (AF(o, s16, 6) - v.x) + (AF(o, s16, 0xE) - v.z) * (AF(o, s16, 0xE) - v.z) < 0x400) {
        if (AF(o, s16, 0xFC) != 0) {
            if (AF(o, u8, 0xFF) != 0) {
                AF(o, s16, 2) = 4;
                SetScript(o, &D_sc03_007_801B0DD4);
                AF(o, s32, 0x1C) = 0xF;
                switch (func_800291B4(0xCC) & 0xFF) {
                case 2:
                    func_800291A0(0xCC, 3);
                    break;
                case 4:
                    func_800291A0(0xCC, 5);
                    break;
                case 6:
                    func_800291A0(0xCC, 7);
                    break;
                case 8:
                    func_800291A0(0xCC, 9);
                    break;
                case 10:
                    func_800291A0(0xCC, 0xB);
                    break;
                case 12:
                    func_800291A0(0xCC, 0xD);
                    break;
                }
            } else {
                AF(o, s16, 2) = 1;
                SetScript(o, &D_sc03_007_801B101C);
            }
        } else {
            AF(o, s16, 0xFC)++;
        }
    }
    D_80126CB4 = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void func_sc03_007_801813D0(u8 *o) {
    s32 r;
    s32 n;

    AF(o, s32, 0x2C) += 0x14000;
    func_8012B14C(o, o + 0x24);
    func_8012CBA4(o);
    if (AF(o, s32, 0x2C) >= -0x20000) {
        AF(o, s16, 2) = 2;
        SetScript(o, &D_sc03_007_801B0ED4);
        AF(o, s16, 0x100) = (rand() & 3) + 1;
        AF(o, s32, 0xE0) = 0xB4;
        AF(o, s16, 0x84) = 1;
        if (rand() & 3) {
            r = func_800291B4(0xCC) & 0xFF;
            if (r == 2) {
                AF(o, s32, 0xE0) = 0xB4;
                n = 2;
            } else if (r == 4) {
                AF(o, s32, 0xE0) = 0xD2;
                n = 2;
            } else if (r == 6) {
                AF(o, s32, 0xE0) = 0xF0;
                n = 0;
            } else if (r == 8) {
                AF(o, s32, 0xE0) = 0x10E;
                n = 3;
            } else if (r == 0xA) {
                AF(o, s32, 0xE0) = 0x12C;
                n = 0;
            } else if (r == 0xC) {
                AF(o, s32, 0xE0) = 0x14A;
                n = 0;
            } else {
                n = 4;
            }
            AF(o, u8, 0xFE) = n;
            AF(o, u8, 0xFF) = 1;
        } else {
            AF(o, u8, 0xFE) = rand() & 3;
            AF(o, u8, 0xFF) = 0;
        }
    }
    D_80126CB4 = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void func_sc03_007_80181544(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    u16 a = AF(p, u16, 0x12);
    s32 f;
    AF(p, u16, 0x12) = (a & 0x800) ? a + 0x80 : a - 0x80;
    func_8012B1B4(o, &D_sc03_007_8018C03C);
    f = func_8012CBCC(o);
    if (f & 0x6000) AF(o, s16, 0x16) = -4;
    if (f & 0x8000) {
        AF(o, s32, 4) += AF(o, s32, 0x10);
        AF(o, s32, 0xC) += AF(o, s32, 0x18);
    }
    if (AF(o, s16, 0xE) - AF(o, s16, 0xDE) < -0xFA0) {
        func_8012C218(o);
        D_801270C8[0] = 0;
        return;
    }
    if (--AF(o, s16, 0x84) == 0) {
        func_8002D4C8(0x526, 0);
        AF(o, s16, 0x84) = 10;
    }
    D_80126CB4 = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

extern void (*D_sc03_007_8018C08C[])();
extern void (*D_sc03_007_8018C074[])();
void func_sc03_007_80181668(u8 *o) {
    u16 s = AF(o, u16, 2);

    if (s != 0) {
        if (AF(o, s16, 0x76) < 800) {
            D_sc03_007_8018C08C[AF(o, s16, 0x102)]();
        } else {
            D_sc03_007_8018C074[s]();
        }
    } else {
        D_sc03_007_8018C074[0]();
    }
}

void func_sc03_007_801816EC(u8 *o) {
    AF(o, s16, 0xAA) = 0;
    AF(o, s16, 0x5C) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1800;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x100;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0x1E;
    AF(o, s16, 0x98) = 0;
    func_8002D4C8(0x526, 0);
    AF(o, s16, 0x7C) = AF(o, s16, 6);
    AF(o, s16, 0x7E) = AF(o, s16, 0xA);
    AF(o, s16, 0x80) = AF(o, s16, 0xE);
    func_8016AA50(o, 0xA);
}

void func_sc03_007_8018178C(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34)++;
        }
        break;
    case 1:
        if (--AF(o, s32, 0x1C) & 2) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1600;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1600;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x400;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1800;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x100;
        }
        if (AF(o, s32, 0x1C) == 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
            AF(o, s16, 0x34)++;
            AF(o, s16, 0xA) -= 0x40;
            func_8012B23C(o);
        }
        break;
    case 2:
        if (func_8012CBCC(o)) {
            AF(o, s16, 0x76) -= 10;
            AF(o, u8, 0xC1) = 0;
            func_sc03_007_80180BF8(o);
        }
        break;
    }
}

void func_sc03_007_80181954(u8 *o) {
    s32 a;
    u8 *p;

    a = func_8012B6D4(o + 4, &D_80126B5C);
    a = func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), a, 4);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += a;
    if (--AF(o, s32, 0x1C) == 0) {
        if ((AF(o, u8, 0xFF) ^= 1) != 0) {
            AF(o, s32, 0x1C) = 5;
            SetScript(o, &D_sc03_007_801B0DA4);
            func_8002D4C8(0x525, 0);
        } else {
            AF(o, s32, 0x1C) = 0xF;
            SetScript(o, &D_sc03_007_801B0DD4);
        }
    }
    D_80126CB4 = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void func_sc03_007_80181A44(s32 arg0) {
    s32 temp_v1;

    SetScript(arg0, (s32) &D_sc03_007_801B101C);
    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x60) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x61) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    }
    AF(arg0, s16, 0x84) = 0xA;
    AF(arg0, s16, 0x102) = 1;
    func_800291A0(0xCC, 1);
    AF(arg0, s16, 0x5C) = 0;
    D_80126CB4 = (u16) AF(arg0, s16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = AF(arg0, u16, 0xE);
}

void func_sc03_007_80181B04(u8 *arg0) {
    s32 temp_v1;
    u16 temp_v0;

    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x60) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x61) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        AF(arg0, s16, 0x102) = 2;
    }
    func_8012B1B4((s32) arg0, (s32) &D_sc03_007_8018C03C);
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    temp_v0 = AF(arg0, u16, 0x84) - 1;
    AF(arg0, u16, 0x84) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_8002D4C8(0x526, 0);
        AF(arg0, u16, 0x84) = 0xAU;
    }
    D_80126CB4 = (u16) AF(arg0, s16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = AF(arg0, u16, 0xE);
}

void func_sc03_007_80181BE8(u8 *arg0) {
    D_sc03_007_8018C0EC[AF(arg0, u16, 2)]();
}

void func_sc03_007_80181C24(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_007_8018C0B8) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc03_007_801B35E8);
            AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_007_8018C0A8 | 0x40000000 | 0x20000000);
        }
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u8, 0x75) = 2;
    }
}

void func_sc03_007_80181CB4(void) {
}

void func_sc03_007_80181CBC(u8 *arg0) {
    D_sc03_007_8018C150[AF(arg0, u16, 2)]();
}

void func_sc03_007_80181CF8(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_007_8018C104) != 0) {
        if ((func_80029504() >= 0x384U) || ((AF(arg0, s16, 0x70) == 0) && ((temp_v1 = func_800291B4(0xCC) & 0xFF, ((temp_v1 < 3) == 0)) || (temp_v1 < 0xF)))) {
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_007_80187704);
        func_801788B8(arg0, (s32) func_sc03_007_80181E30);
    }
}

void func_sc03_007_80181DB0(void) {
}

void func_sc03_007_80181DB8(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc03_007_8018C138);
    AF(arg0, s16, 2) = 3;
}

void func_sc03_007_80181DF0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc03_007_80181E30(u8 *arg0) {
    s32 *r;

    if (func_8012BD14(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_007_80181E8C(u8 *arg0) {
    D_sc03_007_8018C230[AF(arg0, u16, 2)]();
}

void func_sc03_007_80181EC8(u8 *o) {
    s32 r;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, 0);
    AF(o, u8 *, 0x58) = &D_sc03_007_8018C220;
    AF(o, s16, 0x5C) = 0x80;
    AF(o, s16, 2) += 1;
    AF(o, s32, 0xDC) = D_sc03_007_8018C1F0[AF(o, u16, 0x70) & 0xF][rand() % 3];
    AF(o, s16, 0xFC) = (AF(o, u16, 0x70) >> 12) << 9;
}

void func_sc03_007_80181F94(u8 *o) {
    s32 r = func_800291B4(0xCC);
    switch ((AF(o, u16, 0x70) >> 4) & 0xF) {
    case 2:
        if ((r & 0xFF) == 3) AF(o, u8 *, 0xDC) = &D_sc03_007_8018B928;
        break;
    case 3:
        if ((r & 0xFF) == 5) AF(o, u8 *, 0xDC) = &D_sc03_007_8018B9B8;
        break;
    case 4:
        if ((r & 0xFF) == 7) AF(o, u8 *, 0xDC) = &D_sc03_007_8018BA00;
        else if ((r & 0xFF) == 0xD) AF(o, u8 *, 0xDC) = &D_sc03_007_8018B5C8;
        break;
    case 5:
        if ((r & 0xFF) == 9) AF(o, u8 *, 0xDC) = &D_sc03_007_8018B874;
        break;
    case 6:
        if ((r & 0xFF) == 0xB) AF(o, u8 *, 0xDC) = &D_sc03_007_8018B970;
        break;
    }
}

s32 func_sc03_007_801820AC(s32 arg0) {
    func_8002A04C(arg0);
    return func_8012C098(arg0);
}

void func_sc03_007_801820DC(u8 *arg0) {
    s16 v[3];
    u16 t;

    t = AF(arg0, u16, 0x5E);
    if (t == 0x23) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D4C8(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc03_007_8018732C((s32) arg0, v, 0xD);
    }
}

void func_sc03_007_80182148(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

void func_sc03_007_801821D0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        return;
    }
    AF(arg0, u16, 0x102) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
}

void func_sc03_007_80182214(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x102);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_007_801822B8(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_007_801822C8(u8 *arg0) {
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (func_8012BEE8((s32) arg0) != 0) {
        p2 = AF(arg0, u8 *, 0x20);
        AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        func_80131E00((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc03_007_80182374(u8 *arg0) {
    if ((AF(arg0, u8, 0xC3) & 1) && (AF(arg0, s32, 0x90) != &D_sc03_007_801CAB58)) {
        SetScript((s32) arg0, (s32) &D_sc03_007_801CAB58);
    }
}

void func_sc03_007_801823BC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_a0;

    var_a0 = 0x43F;
    if (AF(arg0, u16, 0x5E) == 0x1D) {
        var_a0 = 0x440;
    }
    func_8002D4C8(var_a0, 0, arg2);
    AF(arg0, s32, 0x1C) = 0x5A;
    AF(arg0, s16, 0xDE) = 0;
    AF(arg0, s32, 0xB4) = (s32) (AF(arg0, s32, 0xB4) & ~0x2000);
    func_8002AC00(2);
}

void func_sc03_007_80182420(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 0x98) = 0;
        func_8002A04C((s32) arg0);
        func_8012C098((s32) arg0);
    }
}

void func_sc03_007_80182468(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    SetScript(arg0, (s32) &D_sc03_007_801CAFE0);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc03_007_801824A8(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    SetScript(arg0, (s32) &D_sc03_007_801CAB58);
    AF(arg0, u16, 0x5C) = 0xA810;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, s32, 0x1C) = 0xA;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc03_007_801824FC(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript(arg0, (s32) &D_sc03_007_801CACF8);
    AF(arg0, s32, 0x1C) = 0x1E;
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 0xFC) = 1;
        func_80142414(arg0, -0x96);
    }
}

s32 func_sc03_007_80182558(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc03_007_8018256C(u8 *o) {
    u8 unused[32];
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 flag;
    u8 *q;
    s32 r;

    q = &D_80126B58;
    if (AF(o, s32, 0x1C) == 9) {
        SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
        SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
        RotTransSV(&D_sc03_007_8018C340[0], &a, &flag);
        RotTransSV(&D_sc03_007_8018C340[1], &b, &flag);
        if ((AF(D_801270C8[0], u16, 0x5C) & 0x8000) && AF(D_801270C8[0], u16, 0x5E) != 1) {
            if (func_sc03_007_80180AF4() == 1) {
                c = a;
                d = b;
                if (func_80135888(AF(D_801270C8[0], s32, 0x20), AF(D_801270C8[0], s32, 0x58), &c, &d) != 0) {
                    AF(D_801270C8[0], u16, 0x5C) |= 1;
                    AF(D_801270C8[0], s16, 0x60) = 9;
                    AF(D_801270C8[0], s16, 0x62) = AF(AF(o, u8 *, 0x20), u16, 0x12);
                    AF(D_801270C8[0], s16, 0x5E) = 1;
                }
            }
        }
        r = func_8012DF34(o, &a, &b);
        if (r == 1) {
            func_8012F568(1, 1, AF(AF(o, u8 *, 0x20), s16, 0x12), 9, &b, &D_801152A8);
            if (AF(o, s16, 0x70) == r) {
                AF(q, u16, 0x3E) |= 0x800;
            }
        }
        func_8002D4C8(0x43E, 0);
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc03_007_801CAB58);
        AF(o, u16, 0x5C) = 0xA810;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s32, 0x1C) = 10;
        AF(o, s16, 0xFE) = 0;
    }
}

void func_sc03_007_801827CC(u8 *arg0) {
    void *temp_v1;

    D_sc03_007_8018C350[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    }
}

void func_sc03_007_8018283C(u8 *o) {
    SV8 v;
    u8 *m = AF(o, u8 *, 0x64);

    if (AF(o, s16, 0xFE) == 0x7FFF) {
        AF(o, u16, 0xFE) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    }
    if (AF(o, s16, 0xFC) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(o);
        return;
    }
    *(B8 *)(AF(o, u8 *, 0x20) + 0x10) = *(B8 *)(AF(m, u8 *, 0x20) + 0x10);
    if (AF(AF(o, u8 *, 0x64), u8 *, 0x90) != &D_sc03_007_801CB130) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xFE);
        AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
        AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8);
        AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    } else {
        FaceHelper(AF(o, u8 *, 0x64), &D_sc03_007_8018C374, &v);
        AF(o, s16, 6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
    }
    *(B8 *)(AF(o, u8 *, 0x20) + 0x18) = *(B8 *)(AF(m, u8 *, 0x20) + 0x18);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = AF(AF(m, u8 *, 0x20), u16, 0x2C);
    AF(AF(o, u8 *, 0x20), s32, 4) = AF(AF(m, u8 *, 0x20), s32, 4);
    AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
}

void func_sc03_007_801829DC(u8 *arg0) {
    D_sc03_007_8018C37C[AF(arg0, u16, 2)]();
}

void func_sc03_007_80182A18(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) + 0x200);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) >= 0x1001) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, void *, 0x20), u16, 0x1A) = 0x1000U;
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 0x5C) = 0xA810;
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0xFFEF);
    }
}

void func_sc03_007_80182A80(s32 arg0) {
    if (func_8012BCCC(arg0) <= 0x24000) {
        func_sc03_007_80182468(arg0);
    }
}

void func_sc03_007_80182AC4(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc03_007_801824A8(arg0);
    }
}

void func_sc03_007_80182AFC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    if (func_8012BEE8(arg0, arg1) == 1) {
        temp_v0 = func_8012BCCC(arg0);
        if (temp_v0 <= 0x9000) {
            func_sc03_007_801824FC(arg0);
            return;
        }
        temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
        AF(arg0, u16, 0xDC) = temp_v0_2;
        if (((s16) temp_v0_2 >= 0x79) && (temp_v0 > 0x24000)) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc03_007_801CAF38);
        }
    }
}

void func_sc03_007_80182BA4(s32 arg0) {
    s32 v;
    void *p;

    v = func_8012B8E4(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (func_8012BEE8(arg0) != 0) {
        func_sc03_007_80182558(arg0);
    }
}

void func_sc03_007_80182BFC(u8 *o) {
    s32 t = func_800291B4(0xCC) & 0xFF;
    s32 r;
    if (t == 4 || t == 0xC || t == 5) r = 1; else r = t == 0xD;
    if (r == 0) {
        u16 *q = &D_801274E4;
        *q |= 1;
        return;
    }
    if (func_8012C354(o, &D_sc03_007_8018C248 + AF(o, s16, 0x70) * 0x34)) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018C2B0;
        AF(o, s32, 0xC4) = 1;
        AF(o, s32, 0xB4) = 0xFFFBFFFD;
        AF(o, s16, 0x86) = 1;
        AF(o, s16, 0x52) = 0x28;
        func_8012B2CC(o);
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc03_007_801CAF38);
    }
}

void func_sc03_007_80182D04(u8 *o) {
    s32 r;
    u16 v;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, D_sc03_007_8018C36C[AF(o, s16, 0x70)]);
    v = AF(AF(o, u8 *, 0x64), u16, 0x36);
    AF(o, s16, 2) = 1;
    AF(o, s16, 0xFE) = 0x7FFF;
    AF(o, u16, 0xFC) = v;
}

void func_sc03_007_80182D88(u8 *o) {
    SV8 a;
    SV8 v;
    s32 w;
    u8 *p;
    s32 i;
    s32 t;
    s32 *wp;
    u8 *q;

    p = (u8 *)&D_801202A0;
    i = 0;
    q = o + 4;
    wp = &w;
    for (; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0) continue;
        if (AF(p, s32, 0x58) == 0) continue;
        if (o == p) continue;
        if (func_8012BC60(q, p + 4) >= 0x1000) continue;
        t = func_8012B6D4(q, p + 4);
        func_8012B0B4(wp, t, 0x41);
        v.x = AF(p, s16, 6);
        v.y = AF(p, s16, 0xA);
        v.z = AF(p, s16, 0xE);
        v.x += w;
        v.z += w >> 16;
        a.x = AF(o, s16, 0x3A);
        a.y = AF(o, s16, 0x3E);
        a.z = AF(o, s16, 0x42);
        if (!(func_8012CEB0(&a, &v, 0) & 0x2000)) {
            func_8012ADE4(o);
        } else {
            AF(o, s16, 6) = v.x;
            AF(o, s16, 0xA) = v.y;
            AF(o, s16, 0xE) = v.z;
        }
        return;
    }
}

void func_sc03_007_80182F00(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x6AA, 0, arg2);
}

void func_sc03_007_80182F24(s32 arg0) {
    s32 var_a0;

    func_8002A04C(arg0);
    var_a0 = 3;
    if (AF(arg0, u16, 0x70) & 0x200) {
        var_a0 = 7;
    }
    func_8002AC00(var_a0);
    func_8012C098(arg0);
}

void func_sc03_007_80182F74(u8 *arg0) {
    if (AF(arg0, s32, 0xC4) & 4) {
        func_sc03_007_80182FB8();
        return;
    }
    func_sc03_007_80183004((s32) arg0);
}

void func_sc03_007_80182FB8(u8 *o) {
    AF(o, s16, 2) = 7;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    SetScript((s32) o, (s32) &D_sc03_007_801E42B0);
    func_8012B23C(o);
}

void func_sc03_007_80183004(u8 *o) {
    s32 r;

    AF(o, s16, 2) = 3;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    r = (rand() & 0x3FF) - 0x200;
    if (r >= 0) {
        r += 0x300;
    } else {
        r -= 0x300;
    }
    AF(o, u16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + r) & 0xFFF;
    func_8012B23C(o);
    if (func_8012CE2C(o) != 0) {
        AF(o, u16, 0x86) |= 1;
    } else {
        AF(o, u16, 0x86) &= ~1;
    }
    SetScript(o, &D_sc03_007_801E3AE0);
}

void func_sc03_007_801830C0(u8 *o) {
    s32 d;

    if (func_8012BCCC(o) <= 0x10000) {
        func_sc03_007_801832B4(o);
        return;
    }
    if (AF(o, s32, 0x1C) >= 8) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    func_8012B178(o, D_sc03_007_8018C50C);
    if (AF(o, u16, 0x86) & 1) {
        if (!(func_8012CBA4(o) & 0x2000)) {
            func_8012ADE4(o);
        }
    } else {
        if (func_8012CBCC(o) & 0x2000) {
            AF(o, u16, 0x86) |= 1;
        }
    }
    func_sc03_007_80182D88(o);
    if (func_8012BEE8(o) == 0) {
        return;
    }
    if (AF(o, u16, 0x86) & 1) {
        func_sc03_007_80183284(o);
        return;
    }
    AF(o, s16, 2) = 3;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    d = (rand() & 0x3FF) - 0x200;
    if (d >= 0) {
        d += 0x300;
    } else {
        d -= 0x300;
    }
    AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + d) & 0xFFF;
    func_8012B23C(o);
    if (func_8012CE2C(o)) {
        AF(o, u16, 0x86) |= 1;
    } else {
        AF(o, u16, 0x86) &= ~1;
    }
    SetScript(o, &D_sc03_007_801E3AE0);
}

s32 func_sc03_007_80183284(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_007_801E3998);
}

void func_sc03_007_801832B4(u8 *o) {
    AF(o, s16, 2) = 5;
    if (AF(o, u16, 0x86) & 2) {
        AF(o, s16, 0x34) = 1;
        AF(o, s32, 0x1C) = 0x28;
        if (AF(o, u16, 0x70) & 0x200) {
            SetScript(o, &D_sc03_007_801E4B08);
        } else {
            SetScript(o, &D_sc03_007_801E3B88);
        }
        AF(o, s16, 0xFE) = 0;
    } else {
        AF(o, s16, 0x34) = 0;
        SetScript(o, &D_sc03_007_801E3C10);
        AF(o, s32, 0x1C) = 0x19;
        AF(o, u16, 0x86) |= 2;
    }
}

void func_sc03_007_8018335C(u8 *o) {
    s32 d;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
        if (AF(o, s32, 0x1C) == 0xF) {
            func_80142414(o, -0x78);
            func_8002D4C8(0x6A9, 0);
        }
        if (func_8012BEE8(o) == 0) {
            break;
        }
        AF(o, s16, 2) = 5;
        if (AF(o, u16, 0x86) & 2) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x28;
            if (AF(o, u16, 0x70) & 0x200) {
                SetScript(o, &D_sc03_007_801E4B08);
            } else {
                SetScript(o, &D_sc03_007_801E3B88);
            }
            AF(o, s16, 0xFE) = 0;
        } else {
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_007_801E3C10);
            AF(o, s32, 0x1C) = 0x19;
            AF(o, u16, 0x86) |= 2;
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) >= 0x16) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
        }
        func_8012B178(o, D_sc03_007_8018C510);
        if (AF(o, u16, 0x86) & 1) {
            if (!(func_8012CBA4(o) & 0x2000)) {
                func_8012ADE4(o);
            }
        } else {
            if (func_8012CBCC(o) & 0x2000) {
                AF(o, u16, 0x86) |= 1;
            }
        }
        func_sc03_007_80182D88(o);
        if (--AF(o, s16, 0xFE) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFE) = 8;
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 3;
            AF(o, s16, 0x34) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
            d = (rand() & 0x3FF) - 0x200;
            if (d >= 0) {
                d += 0x300;
            } else {
                d -= 0x300;
            }
            AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + d) & 0xFFF;
            func_8012B23C(o);
            if (func_8012CE2C(o)) {
                AF(o, u16, 0x86) |= 1;
            } else {
                AF(o, u16, 0x86) &= ~1;
            }
            SetScript(o, &D_sc03_007_801E3AE0);
        }
        if (func_8012BD3C(o, 0x200, 0x1440)) {
            if (AF(o, u16, 0x70) & 0x200) {
                func_sc03_007_80183670(o, 3, 0x28, &D_sc03_007_8018C514);
                D_sc03_007_801E9CD8 = D_sc03_007_8018C510;
                func_8002D4C8(0x660, 0);
            } else {
                func_sc03_007_80183670(o, 0, 0x14, &D_sc03_007_801E3CE0);
            }
        }
        break;
    }
}

s32 func_sc03_007_80183670(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    AF(arg0, s16, 0x34) = (s16) arg1;
    AF(arg0, s16, 2) = 6;
    temp_v0 = SetScript(arg0, arg3);
    AF(arg0, s32, 0x1C) = arg2;
    return temp_v0;
}

void func_sc03_007_801836B8(u8 *o, s32 a1) {
    u8 unused[0x20];
    SV8 a;
    SV8 b;
    SV8 c[2];
    s32 f;
    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc03_007_8018C524[0], &a, &f);
    RotTransSV(&D_sc03_007_8018C524[1], &b, &f);
    if (func_sc03_007_80180AF4() == 1) {
        if ((AF(D_801270C8[0], u16, 0x5C) & 0x8000) && AF(D_801270C8[0], u16, 0x5E) != 1) {
            c[0] = a;
            c[1] = b;
            if (func_80135888(AF(D_801270C8[0], u8 *, 0x20), AF(D_801270C8[0], s32, 0x58), &c[0], &c[1])) {
                AF(D_801270C8[0], u16, 0x5C) |= 1;
                AF(D_801270C8[0], s16, 0x60) = a1;
                AF(D_801270C8[0], s16, 0x62) = AF(AF(o, u8 *, 0x20), u16, 0x12);
                AF(D_801270C8[0], s16, 0x5E) = 1;
            }
        }
    }
    if (func_8012DF34(o, &a, &b) == 1) {
        func_8012F568(1, 1, AF(AF(o, u8 *, 0x20), s16, 0x12), a1, &b, &D_801152A8);
    }
}

void func_sc03_007_80183894(u8 *o) {
    s32 f;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) == 7) {
            func_sc03_007_801836B8(o, 0xB);
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0xA) {
            func_sc03_007_801836B8(o, 0xB);
        }
        break;
    case 3:
        if (AF(o, s32, 0x1C) % 10 == 0) {
            D_sc03_007_801E9CD8 += 0x10000;
        }
        func_8012B178(o, D_sc03_007_801E9CD8);
        if (AF(o, u16, 0x86) & 1) {
            if (func_8012CBA4(o) & 0x2000) {
                f = 0;
            } else {
                func_8012ADE4(o);
                f = 1;
            }
        } else {
            if (func_8012CBCC(o) & 0x2000) {
                AF(o, u16, 0x86) |= 1;
            }
            f = 0;
        }
        func_sc03_007_80182D88(o);
        func_sc03_007_801836B8(o, 0x11);
        if (--AF(o, s16, 0xFE) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFE) = -(D_sc03_007_801E9CD8 / 0x10000);
        }
        if (f == 1) {
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_007_801E3998);
        }
        break;
    case 4:
        break;
    }
    if (func_8012BEE8(o) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (func_8012BD3C(o, 0x400, 0x4000)) {
                AF(o, s16, 0x34)++;
                SetScript(o, &D_sc03_007_801E38F0);
                AF(o, s32, 0x1C) = 0xA;
            } else {
                AF(o, s16, 2) = 4;
                AF(o, s16, 0x34) = 0;
                SetScript(o, &D_sc03_007_801E3998);
            }
            break;
        case 1:
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0x18;
            SetScript(o, &D_sc03_007_801E3DA8);
            break;
        case 2:
        case 4:
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_007_801E3998);
            break;
        case 3:
            AF(o, s32, 0x1C) = 0xA;
            AF(o, s16, 0x34)++;
            break;
        }
    }
}

void func_sc03_007_80183B58(u8 *o) {
    s32 r;
    s32 ok;
    s32 t;
    u16 *q;
    u16 f;
    s32 t2;
    s32 k;
    R34 *row;
    s32 i;
    s32 j;

    r = func_800291B4(0xCC) & 0xFF;
    if (r == 6) {
        ok = AF(o, u16, 0x70) & 1;
    } else if (r == 0xC) {
        t = AF(o, u16, 0x70) & 2;
        ok = t != 0;
    } else if (r == 7) {
        ok = AF(o, u16, 0x70) & 1;
    } else if (r == 0xD) {
        t = AF(o, u16, 0x70) & 2;
        ok = t != 0;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        q = &D_801274E4;
        *q |= 1;
        return;
    }
    f = AF(o, u16, 0x70);
    i = (f & 0xF00) >> 8;
    k = i * 0x68;
    t2 = f & 0x1000;
    j = t2 != 0;
    row = &D_sc03_007_8018C394[0][j];
    if (func_8012C354(o, k + (s32)row)) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0xC1) = 0;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018C4CC;
        func_80143970(o);
        func_8012B030(o);
        AF(o, s16, 2) = AF(o, s16, 0x86) = 1;
    }
}

void func_sc03_007_80183C94(u8 *arg0) {
    D_sc03_007_8018C534[AF(arg0, u16, 2)]();
}

void func_sc03_007_80183CD0(s32 arg0) {
    func_8012CBF4(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc03_007_80183004(arg0);
    }
}

void func_sc03_007_80183D14(u8 *o) {
    s32 a;

    if (AF(o, u16, 0x34) != 0) {
        return;
    }
    if (!(AF(o, u16, 0x72) & 0x4000)) {
        return;
    }
    if (func_8012BCCC(o) <= 0x10000) {
        func_sc03_007_801832B4(o);
        return;
    }
    AF(o, s16, 2) = 3;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    a = (rand() & 0x3FF) - 0x200;
    if (a >= 0) {
        a += 0x300;
    } else {
        a -= 0x300;
    }
    AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
    func_8012B23C(o);
    if (func_8012CE2C(o) != 0) {
        AF(o, u16, 0x86) |= 1;
    } else {
        AF(o, u16, 0x86) &= ~1;
    }
    SetScript(o, &D_sc03_007_801E3AE0);
}

void func_sc03_007_80183E18(u8 *o) {
    AF(o, s16, 2) = 2;
    func_8012B2CC(o);
    func_8012B23C(o);
    func_8012B178(o, D_sc03_007_8018C510);
    if (AF(o, u16, 0x70) & 0x200) {
        SetScript(o, &D_sc03_007_801E4B08);
    } else {
        SetScript(o, &D_sc03_007_801E3B88);
    }
    AF(o, s32, 0x1C) = 0x88;
}

void func_sc03_007_80183E9C(u8 *o) {
    s32 r;

    func_8012CBA4(o);
    if (func_8012BEE8(o) != 0 || func_8012BCCC(o) <= 0x3000) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x34) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
        r = (rand() & 0x3FF) - 0x200;
        if (r < 0) {
            r -= 0x300;
        } else {
            r += 0x300;
        }
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + r) & 0xFFF;
        func_8012B23C(o);
        if (func_8012CE2C(o) != 0) {
            AF(o, u16, 0x86) |= 1;
        } else {
            AF(o, u16, 0x86) &= ~1;
        }
        SetScript(o, &D_sc03_007_801E3AE0);
    }
}

s32 func_sc03_007_80183F7C(void) {
    return func_sc03_007_80183FB4(func_80029504()) != D_800A654C;
}

s32 func_sc03_007_80183FB4(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x74;
    if (arg0 < 0x2EE) {
        var_v0 = 0xB;
    }
    return var_v0;
}

void func_sc03_007_80183FCC(void) {
    func_8013CB84();
}

void func_sc03_007_80183FEC(u8 *arg0) {
    D_sc03_007_8018C574[AF(arg0, u16, 2)]();
}

void func_sc03_007_80184028(u8 *o) {
    typedef struct { u8 p0[0x70]; s16 f70; u8 p1[0xDC - 0x72]; s32 fDC; u8 p2[0xFC - 0xE0]; s16 fFC; } ObjS;
    SV8 v;
    s32 i;
    u8 *e;
    s8 *p;

    D_sc03_007_801EB130 = ((ObjS *) o)->fFC;
    D_sc03_007_801EB134 = ((ObjS *) o)->fDC;
    D_sc03_007_801EB138 = &D_sc03_007_8018C554 + ((ObjS *) o)->f70 * 4;
    D_sc03_007_801EB13C = &D_sc03_007_8018C55C + ((ObjS *) o)->f70 * 8;
    func_80015978(&D_80126B5C, &v);
    i = 0x4F;
    v.y = AF(o, s16, 0xA);
    p = &D_sc03_007_801E9D2F;
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);
    for (i = 0; i < D_sc03_007_801EB130; i++) {
        e = (u8 *) func_801290DC(0x61, &v);
        if (e != 0) {
            D_sc03_007_801E9CE0[i] = 1;
            AF(e, s32, 0x34) = i;
            func_sc03_007_80184560(e);
            AF(e, s16, 0xA) += (rand() & 0xF) * 0x30;
        }
    }
    func_8012AD50(o);
}

void func_sc03_007_80184170(u8 *o) {
    SV8 v;
    s32 i;
    s32 idx;
    u8 *e;

    idx = -1;
    func_80015978(&D_80126B5C, &v);
    v.y = AF(o, s16, 0xA);
    for (i = 0; i < D_sc03_007_801EB130; i++) {
        if (idx != -1) {
            break;
        }
        if (D_sc03_007_801E9CE0[i] == 0) {
            idx = i;
        }
    }
    if (idx != -1) {
        e = (u8 *) func_801290DC(0x61, &v);
        if (e != 0) {
            D_sc03_007_801E9CE0[idx] = 1;
            AF(e, s32, 0x34) = idx;
        }
    }
}

void func_sc03_007_8018423C(u8 *arg0) {
    D_sc03_007_8018C57C[AF(arg0, u16, 2)]();
}

void func_sc03_007_80184278(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    void *temp_s0;
    void *p;
    s32 t;


    temp_s4 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x34) << 6) + &D_sc03_007_801E9D30;
    func_8001CD9C(temp_s4, (s32) temp_s0);
    func_800233CC((s32) temp_s0, 0x10);
    temp_v0 = (rand() & 7) + 1;
    temp_a1 = (temp_v0 << 7) | ((temp_v0 << 0x17) | (temp_v0 << 0xF));
    AF(temp_s0, s32, 0) = temp_a1;
    AF(temp_s0, s32, 4) = 0;
    AF(temp_s4, s32, 4) = (s32) (AF(temp_s4, s32, 4) | 0x50000000);
    func_sc03_007_80184560((s32) arg0, temp_a1);
    temp_v1 = (rand() & 3) * 0x555;
    p = D_sc03_007_801EB13C;
    AF(temp_s4, s16, 0x1A) = temp_v1;
    AF(temp_s4, s16, 0x18) = temp_v1;
    AF(arg0, s16, 0x12) = (s16) (AF(arg0, u16, 6) + AF(p, u16, 2));
    t = AF(arg0, u16, 0xE) + AF(p, u16, 6);
    AF(arg0, s16, 0x10) = 0;
    AF(arg0, s16, 0x18) = 0;
    AF(arg0, s16, 0x1A) = t;
    temp_s0_2 = rand((s32) p);
    temp_s1 = rand();
    temp_s2 = rand();
    AF(temp_s4, s16, 0x12) = (s16) (((temp_s0_2 & 3) << 0xA) + ((temp_s1 & 0x1F) << 5) + ((temp_s2 & 3) << 8) + (rand() & 0xFF));
    AF(arg0, s16, 0x2E) = (s16) ((rand() & 7) * 0xB);
    AF(arg0, s16, 0x2C) = (s16) ((rand() & 0x1F) + 4);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_007_80184410(u8 *o0) {
    typedef struct { u8 p0[2]; s16 f2; u8 p1[2]; s16 f6; u8 p2[2]; s16 fA; u8 p3[2]; s16 fE; s16 f10; s16 f12; u8 p4[2]; s16 f16; s16 f18; s16 f1A; u8 p5[4]; u8 *f20; u8 p6[8]; s16 f2C; s16 f2E; } ObjS;
    ObjS *o = (ObjS *)o0;
    u8 *e;
    u16 *p;
    SV8 v;

    e = o->f20;
    v.x = v.y = 0;
    v.z = o->f2C;
    AF(e, s16, 0x12) += o->f2E;
    func_800139C8(AF(e, s16, 0x12), &v, &v);
    o->f6 = o->f12 + v.x;
    o->fE = o->f1A + v.z;
    o->fA += o->f16;
    p = D_sc03_007_801EB13C;
    o->f10 += p[0];
    o->f12 -= o->f10;
    o->f18 += p[1];
    o->f1A -= o->f18;
    if (D_sc03_007_801EB134 < o->fA) {
        o->f2++;
    }
}

void func_sc03_007_80184500(s32 arg0) {
    s32 temp_a1;
    u8 *temp_a2;

    temp_a2 = (AF(arg0, s32, 0x34) << 6) + &D_sc03_007_801E9D30;
    temp_a1 = *temp_a2;
    temp_a1 -= 8;
    if (temp_a1 <= 0) {
        func_sc03_007_801846EC(arg0);
    } else {
        temp_a1 |= (temp_a1 << 0x10) | (temp_a1 << 8);
        AF(temp_a2, s32, 0) = temp_a1;
    }
}

void func_sc03_007_80184560(u8 *o) {
    SV8 v;
    s32 a;
    s32 b;
    s32 c;
    s32 e;
    s32 f;
    s32 g;
    s32 h;
    s32 x;
    s32 lim;

    a = rand();
    b = rand();
    c = rand();
    a &= 1;
    a <<= 8;
    b &= 0x1F;
    b <<= 3;
    a += b;
    a += c & 0x1F;
    v.x = a;
    v.z = 0;
    v.y = 0;
    e = rand();
    f = rand();
    g = rand();
    h = rand();
    e &= 3;
    e <<= 10;
    f &= 0x1F;
    f <<= 5;
    e += f;
    g &= 3;
    g <<= 8;
    e += g;
    func_800139C8(e + (h & 0xFF), &v, &v);
    clamp_DCB4(&v.x, v.x, ((s16 *) D_sc03_007_801EB138)[0]);
    clamp_DCB4(&v.z, v.z, ((s16 *) D_sc03_007_801EB138)[1]);
    AF(o, s16, 6) += v.x;
    AF(o, s16, 0xA) += v.y;
    AF(o, s16, 0xE) += v.z;
    AF(o, s16, 0x16) = (rand() & 7) + 8;
}

void func_sc03_007_801846EC(s32 arg0) {
    D_sc03_007_801E9CE0[AF(arg0, s32, 0x34)] = 0;
    func_801292C8(arg0);
}

void func_sc03_007_8018471C(u8 *o) {
    RECT r;
    s16 i;
    u8 *t;
    u16 n;

    if (func_800291B4(0x89) & 0xFF) {
        func_8012CAE4(o);
        return;
    }
    for (i = 0; i < 0xD; i++) {
        if (!(func_80029178(i + 0x40) & 0xFF)) {
            func_8012CAE4(o);
            return;
        }
    }
    if (AF(o, s32, 0x20) != 0) {
        return;
    }
    if (func_8012C354(o, &D_sc03_007_8018C778) == 0) {
        return;
    }
    SetScript(o, &D_sc03_007_8018C588);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    t = AF(o, u8 *, 0x20);
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = AF(t, s16, 0x1C) = 0x3800;
    D_sc03_007_801EB140 = AF(o, s16, 0x88) << 16;
    D_sc03_007_801EB144 = AF(o, s16, 0x8A) << 16;
    D_sc03_007_801EB148 = AF(o, s16, 0x8C) << 16;
    AF(o, s32, 0xCC) = func_80143994(o, 0x4000);
    AF(o, s16, 0xF8) = 3;
    r.x = 0x2A8;
    r.y = 0x188;
    r.w = 0xC;
    r.h = 0x28;
    MoveImage(&r, 0x2B4, 0x188);
    r.x = 0x248;
    r.y = 0x1C0;
    MoveImage(&r, 0x2A8, 0x188);
    n = AF(o, u16, 2) + 1;
    AF(o, s16, 0xA) -= 0x400;
    AF(o, s16, 2) = n;
}

void func_sc03_007_801848BC(u8 *o) {
    s16 i;
    s32 r;
    s32 n;
    s32 a;
    s32 b;

    n = AF(o, s32, 0x1C) - 1;
    AF(o, s32, 0x1C) = n;
    if (n == -1) {
        SetScript(o, &D_sc03_007_8018C610);
        i = 0;
        if (++AF(o, u16, 0x10A) & 3) {
            if (AF(o, s16, 0x104) == 0) {
                r = rand();
                a = AF(o, s16, 0x88) - 0x200;
                *(s32 *)&D_sc03_007_801EB14C = (a + (r & 0x7F) * 8) << 16;
                b = AF(o, s16, 0x8C) - 0x200;
                D_sc03_007_801EB154 = (b + ((u32)(r & 0x7F00) >> 5)) << 16;
            } else {
                func_sc03_007_80185948(o);
                AF(AF(o, u8 *, 0x20), s16, 0x12) += 0xC00;
            }
        } else {
            for (; i < 2; i++) {
                ((s32 *)&D_sc03_007_801EB14C)[i] = (&D_sc03_007_801EB140)[i];
            }
        }
        i = 8;
        if (AF(o, s16, 0x108) >= 0xD) {
            i = 2;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012BB3C(o + 4, &D_sc03_007_801EB14C, AF(AF(o, u8 *, 0x20), s16, 0x12), i);
        func_sc03_007_801858D4(o, (s16)(-6 - AF(o, s16, 0x104)), 0x50);
        if (AF(o, s16, 0x104) != 0) {
            func_80146A6C(2, o, 0, 0, 0, 3, (AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) | 0x30009000);
        }
        AF(o, s16, 0x108) = 0;
        if ((s16)func_sc03_007_80185DD8() == 0) {
            AF(o, u16, 0x5C) |= 0x200;
        }
        AF(o, s16, 2)++;
    } else if (AF(o, s16, 0x102) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B8E4(o, AF(o, s16, 0x102));
    }
}

void func_sc03_007_80184AFC(s32 arg0) {
    u8 unused[0x10];
    s32 t;
    s32 r;
    s32 d;
    s32 s1;
    s16 s2;
    s16 h;
    s16 h2;
    s16 k;
    s32 u;

    s2 = 0;
    if ((AF(arg0, u16, 0x5C) & 0x200) && (s16) func_sc03_007_80185DD8() != 0) {
        AF(arg0, u16, 0x5C) &= 0xFDFF;
    }
    func_sc03_007_80185A24(arg0);
    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t != 0) {
        if (!(t & 3) && ((s32 (*)()) func_8012BC60)(arg0 + 4, &D_sc03_007_801EB14C) < 0x900) {
            AF(arg0, s32, 0x1C) = 1;
        }
        if (AF(arg0, s16, 0x106) == 0) {
            r = func_8012BB3C(arg0 + 4, &D_sc03_007_801EB14C, AF(AF(arg0, s32, 0x20), s16, 0x12), 8);
            AF(AF(arg0, s32, 0x20), s16, 0x12) += r;
            func_sc03_007_801858D4(arg0, (s16) (-6 - AF(arg0, s16, 0x104)), 0);
        }
        if (AF(arg0, s16, 0x104) != 0) {
            if (AF(arg0, s32, 0x90) == (s32) &D_sc03_007_8018C610) {
                u32 c = AF(arg0, u32, 0x94);
                if (c < 11) {
                    AF(arg0, u32, 0x94) = c + 1;
                }
            }
            if (!(AF(arg0, s32, 0x1C) & 3)) {
                s2 = 1;
            }
        }
    } else {
        func_8012B200(arg0);
        SetScript(arg0, &D_sc03_007_8018C588);
        AF(arg0, s32, 0x1C) = 0x14 - AF(arg0, s16, 0x104) * 2;
        if (func_8012BD14(arg0) <= 0x23FFF) {
            AF(arg0, s16, 0x102) = 0xA - AF(arg0, u16, 0x104);
        } else {
            AF(arg0, s16, 0x102) = 0;
        }
        h = AF(arg0, s16, 0x104);
        if (h != 0) {
            h2 = h - 4;
            AF(arg0, s16, 0x104) = h2;
            if (h2 < 0) {
                AF(arg0, s16, 0x104) = 0;
            }
        }
        AF(arg0, s16, 2) = 3;
    }
    k = ((s32 (*)()) func_sc03_007_80185B48)(arg0);
    if (k != 0) {
        if (k < 0) {
            return;
        }
        if (AF(arg0, s16, 0xFE) == 0) {
            AF(AF(arg0, s32, 0x20), s16, 0x12) = -AF(arg0, u16, 0x62);
            func_sc03_007_801858D4(arg0, -0x1E, 0);
            s2 = 1;
            func_sc03_007_80185948(arg0);
            AF(arg0, s16, 0x104) = 10;
        } else {
            AF(arg0, u16, 0x5C) &= 0xFDFF;
            func_8012B200(arg0);
            SetScript(arg0, &D_sc03_007_8018C750);
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 2) = 10;
            return;
        }
    } else {
        d = func_8012BD14(arg0);
        if (d <= 0xFFFF) {
            s1 = 0;
            if (d >= 0x6400) {
                s1 = (func_8012BDBC(arg0, 0x500) != 0) * 4;
            } else if (d >= 0x2400) {
                if (func_8012BDBC(arg0, 0x680) != 0) {
                    s1 = 7;
                }
            } else {
                s1 = 10;
            }
            if (s1 != 0) {
                func_sc03_007_80185948(arg0);
                r = func_8012B864(arg0);
                u = -0xE - s1;
                if (AF(arg0, s16, 0x104) == 0) {
                    s2 = 1;
                    AF(AF(arg0, s32, 0x20), s16, 0x12) = r - 0x800;
                }
                AF(arg0, s16, 0x104) = s1;
                func_sc03_007_801858D4(arg0, u, 0);
            }
        }
    }
    if (s2 != 0) {
        func_80146A6C(2, arg0, 0, 0, 0, 3, ((AF(AF(arg0, s32, 0x20), s16, 0x12) + 0x800) & 0xFFF) | 0x30009000);
    }
}

s32 func_sc03_007_80184E8C(u8 *o) {
    s16 r;
    u8 unused[0x20];

    if ((AF(o, u16, 0x5C) & 0x200) && (s16)func_sc03_007_80185DD8() != 0) {
        AF(o, u16, 0x5C) &= 0xFDFF;
    }
    r = func_sc03_007_80185B48(o);
    if (r != 0) {
        if (r >= 0) {
            AF(o, s16, 0xF4) = 1;
            AF(o, u16, 0x5C) &= 0xFDFF;
            SetScript(o, &D_sc03_007_8018C750);
            AF(o, s32, 0x1C) = 0x10;
            AF(o, s16, 2) = 0xA;
        }
        return;
    }
    if (AF(o, s16, 0x76) == 0) {
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 0x5E) = 0;
        SetScript(o, &D_sc03_007_8018C700);
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 0xF8) = 0x14;
        AF(o, s16, 2) = 0x11;
        return;
    }
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) < 0x1E) {
            if (AF(o, s16, 0xFE) >= 3 && func_8012BD3C(o, 0x400, 0x10000) == 1) {
            L:
                AF(o, s16, 0xF4) = 0;
                AF(o, u16, 0x5C) &= 0xFDFF;
                SetScript(o, &D_sc03_007_8018C700);
                AF(o, s32, 0x1C) = 8;
                AF(o, s16, 2) = 0xB;
                return;
            }
            if (func_8012BD3C(o, 0x2C0, 0x31000) == 1) {
                if ((s16)func_sc03_007_80185D3C(o, 1) != 0) {
                    goto L;
                }
                AF(o, s32, 0x1C) = 8;
                AF(o, s16, 0xF4) = 0;
                AF(o, s16, 2) = 0xE;
                AF(o, u16, 0x5C) &= 0xFDFF;
                return;
            }
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 0x10);
        }
        return --AF(o, s32, 0x1C);
    }
    if ((s16)func_sc03_007_80185D3C(o, 1) == 0) {
        func_8012B178(o, -0x30000);
        func_8012CBA4(o);
    }
    func_8012B200(o);
    AF(o, s16, 0xF4) = 0;
    AF(o, s32, 0x1C) = 0x1D;
}

void func_sc03_007_801850B4(u8 *o) {
    u8 *p;
    s16 t;
    s16 r;
    s16 v;
    s32 one;
    u8 unused[16];

    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        t = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = t - 0x480;
        r = func_8012BD3C(o, 0x100, 0x9000);
        if (r == 1) {
            func_8012D624(o, 0xC0, 0x30);
        }
        one = 1;
        if (r != one) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x800;
            if (func_8012BD3C(o, 0x100, 0x9000) == one) {
                func_8012D624(o, 0xC0, 0x30);
            }
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) = t;
        if (AF(o, s32, 0x1C) >= 5) {
            p = AF(o, u8 *, 0x20);
            v = AF(p, u16, 0x1C) + 0x200;
            AF(p, s16, 0x1C) = v;
            AF(p, s16, 0x18) = v;
            AF(AF(o, u8 *, 0x20), u16, 0x1A) -= 0x100;
        } else {
            p = AF(o, u8 *, 0x20);
            v = AF(p, u16, 0x1C) - 0x600;
            AF(p, s16, 0x1C) = v;
            AF(p, s16, 0x18) = v;
            AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x300;
        }
        AF(o, s32, 0x1C) -= 1;
    } else {
        SetScript(o, &D_sc03_007_8018C588);
        AF(o, s32, 0x1C) = 0;
        func_sc03_007_80185E30(o);
    }
}

void func_sc03_007_80185230(s32 arg0) {
    s32 x;
    s32 z;
    s32 o;
    s16 i;
    s32 ang;

    if (AF(arg0, u16, 2) == 0xC) {
        x = D_80126B5C;
        z = D_80126B64;
    } else {
        x = 0;
        z = 0xFB000000;
    }
    func_sc03_007_80185B48(arg0);
    func_8012AD80(arg0);
    if (AF(arg0, s16, 0x16) > 0) {
        func_sc03_007_80185E68(arg0);
    }
    if (AF(arg0, s16, 0xA) < -2) {
        if (AF(arg0, s32, 0x1C) == 0) {
            func_80146A6C(2, arg0, 0, 0, 0, 3, 0x30000000);
            o = AF(arg0, s32, 0x20);
            if (AF(o, s16, 0x1A) != 0x3800) {
                AF(o, s16, 0x1A) -= 0x400;
            }
            if (AF(arg0, s16, 0x16) > 0) {
                AF(arg0, s32, 0x1C) = 1;
                SetScript(arg0, &D_sc03_007_8018C728);
            }
            AF(arg0, s32, 0x10) = (x - AF(arg0, s32, 4)) >> 5;
            AF(arg0, s32, 0x18) = (z - AF(arg0, s32, 0xC)) >> 5;
        } else {
            if (AF(arg0, s32, 0x1C) < 0xD) {
                AF(AF(arg0, s32, 0x20), s16, 0x12) = func_8012B864(arg0);
                AF(arg0, s32, 0x10) = (x - AF(arg0, s32, 4)) / 11;
                AF(arg0, s32, 0x18) = (z - AF(arg0, s32, 0xC)) / 11;
            }
            AF(arg0, s32, 0x1C) += 1;
        }
    } else {
        func_8002D4C8(0xB2D, 0);
        func_8013C9C4(&D_sc03_007_8018C7DC);
        ang = AF(AF(arg0, s32, 0x20), u16, 0x12);
        for (i = 0; i < 8; i++) {
            func_80146A6C(2, arg0, 0, 0, 0, 3, (ang & 0xFFF) | 0x3000A000);
            ang += 0x200;
        }
        AF(arg0, s16, 0xA) = -2;
        func_8012B200(arg0);
        SetScript(arg0, &D_sc03_007_8018C700);
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2) += 1;
    }
    ((void (*)())func_sc03_007_80185E3C)(arg0);
}

void func_sc03_007_801854A4(u8 *o) {
    u8 *p;
    u8 *q;
    u16 s;
    s16 v;

    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0xA0;
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x140;
        }
        p = AF(o, u8 *, 0x20);
        v = ((0x3800 - AF(p, s16, 0x1A)) >> 1) + 0x3800;
        AF(p, s16, 0x1C) = v;
        AF(p, s16, 0x18) = v;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
        AF(o, s32, 0x1C) -= 1;
    } else {
        q = AF(o, u8 *, 0x20);
        s = AF(q, u16, 0x10);
        AF(q, s16, 0x10) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B864(o);
        func_8012B2CC(o);
        func_8012B178(o, -0x1E0000);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = s;
        func_8012B2CC(o);
        SetScript(o, &D_sc03_007_8018C700);
        func_sc03_007_80185B20(o);
        func_80146A6C(2, o, 0, 0, 0, 3, ((AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800) & 0xFFF) | 0x30009000);
        AF(o, s32, 0x1C) = 0xC;
        AF(o, u16, 2) += 1;
    }
}

void func_sc03_007_80185620(u8 *o) {
    s16 r;
    func_sc03_007_80185B48(o);
    r = func_sc03_007_80185B20(o);
    if (func_8012BE54(o) < 0x4000) {
        D_80126B96 = 0x4004;
        D_80126B94 |= 1;
        D_80126B9A = func_8012B864(o);
        D_80126B98 = 0x30;
    }
    if (r != 0 || --AF(o, s32, 0x1C) == -1 || AF(o, u16, 0x5E) != 0) {
        SetScript(o, &D_sc03_007_8018C588);
        AF(o, s32, 0x1C) = 4;
        AF(o, s16, 2)++;
    }
    func_80146A6C(2, o, 0, 0, 0, 3, ((AF(AF(o, u8 *, 0x20), u16, 0x12) + (s16)((rand() & 0xFF) + 0x780)) & 0xFFF) | 0x30009000);
}

void func_sc03_007_8018574C(u8 *o) {
    SV8 a;
    WMtx m;
    u8 *p;
    s32 r;
    u8 *q;
    s16 *t;

    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = AF(p, u16, 0x1C) - 0x100;
    r = rand();
    t = &D_sc03_007_8018C7F0[r & 0x1E];
    q = func_8012C658(t[0], t[1], o);
    if (q != 0) {
        AF(q, s16, 0xA) = AF(q, u16, 0xA) - 0x10 - AF(o, s32, 0x1C) * 4;
        a.x = (r & 0xFF) - 0x3FC;
        a.y = (s16)r >> 3;
        a.z = 0;
        RotMatrixYXZ(&a, &m);
        a.y = 0;
        a.x = 0;
        a.z = -0x1A;
        ApplyMatrixSV(&m, &a, &a);
        AF(q, s16, 0x12) = a.x;
        AF(q, s16, 0x16) = a.y;
        AF(q, s16, 0x1A) = a.z;
    }
    if (--AF(o, s32, 0x1C) == 0) {
        AF(o, s32, 0x1C) = 0x1E;
        func_800D0C48(1);
        AF(o, s16, 2)++;
    }
}

void func_sc03_007_80185898(u8 *arg0) {
    D_sc03_007_8018C830[AF(arg0, u16, 2)]();
}

void func_sc03_007_801858D4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    func_8012B0B4(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_007_80185948(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (func_8012B6D4(&D_80126B5C, &D_sc03_007_801EB140) >> 7) & 0x18;
    i = D_sc03_007_8018C7AC[a | ((func_8012B6D4(arg0 + 4, &D_sc03_007_801EB140) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_007_8018C7CC[i * 2] - 0x100;
    *(s32 *)&D_sc03_007_801EB14C = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_007_8018C7CE[i * 2] - 0x100;
    D_sc03_007_801EB154 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

s16 func_sc03_007_80185A24(u8 *o) {
    s32 r = 0;
    s16 f;

    f = func_8012CBA4(o);
    if ((f & 0x6000) != 0x2000) {
        func_8012ADE4(o);
        if (AF(o, s32, 0x1C) > 8) {
            AF(o, s32, 0x1C) -= 8;
        }
    }
    if ((f & 0x8000) || (f & 0x6000) != 0x2000) {
        if (AF(o, s16, 0x106) == 0) {
            AF(o, s16, 0x106) = f < 0 ? -0x100 : 0x100;
        }
        if (AF(o, s32, 0x1C) > 4) {
            AF(o, s32, 0x1C) -= 4;
        }
        AF(o, s16, 0x108)++;
        r = 1;
    } else {
        AF(o, s16, 0x106) = 0;
    }
    return r | func_sc03_007_80185D3C(o, 0);
}

s32 func_sc03_007_80185B20(u8 *o) {
    return (s16) (func_8012CBA4(o) & 0x8000U);
}

s32 func_sc03_007_80185B48(u8 *o) {
    RECT r;
    s32 ret;
    s32 n;
    ret = 0;
    if (AF(o, u16, 0x5E) != 0) {
        n = AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30) >> 12;
        if (n <= 0) n = 1;
        if (AF(o, u16, 0x5E) == 10) {
            AF(o, s16, 0xF4) = 1;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x14;
            AF(o, u16, 0x5C) &= 0xFDFF;
            func_8012B200(o);
            SetScript(o, &D_sc03_007_8018C678);
            AF(o, s16, 2) = 7;
            return -1;
        }
        if (n != 0) {
        if (AF(o, s16, 0xFA) == 0) {
            func_8016AA50(o, n);
            AF(o, s16, 0x76) -= n;
            if (AF(o, s16, 0x76) < 0) AF(o, s16, 0x76) = 0;
            AF(o, s16, 0xFA) = 8;
            switch (AF(o, s16, 0xFE)) {
            case 0:
                if (AF(o, s16, 0x76) < 2000) {
                    AF(o, s16, 0xFE)++;
                    r.x = 0x2B4;
                    r.y = 0x188;
                    r.w = 0xC;
                    r.h = 0x28;
                    MoveImage(&r, 0x2A8, 0x188);
                }
                break;
            case 1:
                if (AF(o, s16, 0x76) < 1600) {
                    AF(o, s16, 0xFE)++;
                    AF(o, s16, 0xF8) = 5;
                    return -1;
                }
                break;
            case 2:
                if (AF(o, s16, 0x76) < 1000) {
                    AF(o, s16, 0xFE)++;
                }
                break;
            }
            ret = 1;
        } else {
            if (--AF(o, s16, 0xFA) == 0) {
                AF(o, s16, 0x60) = 0;
                AF(o, s16, 0x5E) = 0;
            }
        }
        }
    }
    return ret;
}

s32 func_sc03_007_80185D3C(u8 *o, s32 flag0) {
    s16 flag = flag0;
    s32 r = 0;

    if (AF(o, s16, 6) < -0x17D) {
        if (flag == 0) {
            AF(o, s16, 6) = -0x17D;
        }
        r = 1;
    } else if (AF(o, s16, 6) > 0x17D) {
        if (flag == 0) {
            AF(o, s16, 6) = 0x17D;
        }
        r = 1;
    }
    if (AF(o, s16, 0xE) < -0x67D) {
        if (flag == 0) {
            AF(o, s16, 0xE) = -0x67D;
        }
        r = 1;
    } else if (AF(o, s16, 0xE) > -0x383) {
        if (flag == 0) {
            AF(o, s16, 0xE) = -0x383;
        }
        r = 1;
    }
    return r;
}

s32 func_sc03_007_80185DD8(void) {
    s32 r = 0;
    if (D_80126B5E < -0x17D) {
        r = 1;
    } else if (D_80126B5E >= 0x17E) {
        r = 1;
    }
    if (D_80126B66 < -0x67D) {
        r = 1;
    } else if (D_80126B66 >= -0x382) {
        r = 1;
    }
    return r;
}

s32 func_sc03_007_80185E30(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xF8);
    AF(arg0, u16, 2) = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_007_80185E3C(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_a0;

    temp_a0 = AF(AF(arg0, void *, 0xCC), void *, 0xCC);
    temp_v0 = 0x4000 - ((-2 - AF(arg0, u16, 0xA)) * 0x10);
    AF(temp_a0, s16, 0x1A) = temp_v0;
    AF(temp_a0, s16, 0x18) = temp_v0;
}

void func_sc03_007_80185E68(u8 *o) {
    if ((u16)(D_80126B62 - AF(o, u16, 0xA) + 0x2F) < 0x6F && func_8012BE54() < 0x3840) {
        D_80126B96 = 0x4002;
        D_80126B94 |= 1;
        D_80126B9A = AF((u8 *)D_80126B78, u16, 0x12);
        D_80126B98 = 0x40;
    }
}

void func_sc03_007_80185EF8(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s16, 6) - D_80126B5E;
    temp_v0_2 = AF(arg0, s16, 0xE) - D_80126B66;
    if (((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) <= 0xFFFF) {
        AF(arg0, s32, 0x1C) = 0x19;
        func_800D0C48(1, arg1);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_007_80185F84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x48) = 0x38000;
        AF(arg0, s32, 0x1C) = 0x10;
        func_8001AAA0(0x9C);
        AF(arg0, s16, 2) = 0xC;
    }
}

void func_sc03_007_80185FE0(u8 *o) {
    if ((s16)func_sc03_007_80185DD8() == 0) {
        AF(o, u16, 0x5C) |= 0x200;
    }
    func_8012B200(o);
    SetScript(o, &D_sc03_007_8018C588);
    if (AF(o, u16, 0x5E) == 0 && AF(o, s16, 0xF4) == 0) {
        AF(o, s32, 0x1C) = 0x3B;
    } else {
        AF(o, s32, 0x1C) = 0x1D;
    }
    AF(o, u16, 2) += 1;
}

void func_sc03_007_80186074(u8 *o) {
    V3 v;
    u16 k;

    k = AF(o, u16, 0x5E);
    if ((k == 9) | (k == 0x11)) {
        func_8002D4C8(0x829, 0);
        AF(o, s16, 0x5E) = 0;
        v.y = -0x40000;
        v.x = 0;
        v.z = 0x30000;
        func_8012B14C(o, &v);
        AF(o, s32, 0x48) = 0x12000;
        AF(o, s16, 0x108) = 0;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 2) = 8;
    }
    func_sc03_007_80185D3C(o, 0);
    ((void (*)())func_sc03_007_80185E3C)(o);
}

void func_sc03_007_8018611C(u8 *o) {
    V3 v;
    s32 r;
    s32 t;

    if (func_8012CBCC(o) & 0x2000) {
        func_80146A6C(2, o, 0, 0, 0, 3, 0x30000000);
        r = AF(o, s32, 0x1C) + 1;
        AF(o, s32, 0x1C) = r;
        if (r == 1) {
            v.x = 0;
            v.y = -0x30000;
            v.z = 0x20000;
            func_8012B14C(o, &v);
            return;
        }
        func_8012B200(o);
        SetScript(o, &D_sc03_007_8018C678);
        AF(o, s32, 0x1C) = 0x50;
        AF(o, s16, 0x98) = 0;
        AF(o, s16, 0xF6) = AF(o, s16, 0x76) - 8;
        AF(o, s16, 2)++;
    }
    func_sc03_007_80185D3C(o, 0);
    ((void (*)())func_sc03_007_80185E3C)(o);
}

void func_sc03_007_80186200(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    func_sc03_007_80185B48(arg0);
    if (AF(arg0, s32, 0x1C) != 0) {
        if (AF(arg0, s16, 0x98) == 0) {
            if (AF(arg0, s16, 0x76) < AF(arg0, s16, 0xF6)) {
                AF(arg0, s32, 0x1C) = 0x14;
            }
            if (AF(arg0, s32, 0x1C) == 0x14) {
                AF(arg0, s16, 0x98) = 1;
            }
        }
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_007_8018C588);
    AF(arg0, s32, 0x1C) = (s32) (0x14 - (AF(arg0, s16, 0x104) * 2));
    if (func_8012BD14(arg0) <= 0xFFFF) {
        AF(arg0, s16, 0x102) = (s16) (0xA - (u16) AF(arg0, s16, 0x104));
    } else {
        AF(arg0, s16, 0x102) = 0;
    }
    temp_v0 = AF(arg0, s16, 0x104);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 4;
        AF(arg0, s16, 0x104) = temp_v0_2;
        if ((s16) (temp_v0_2) < 0) {
            AF(arg0, s16, 0x104) = 0;
        }
    }
    func_sc03_007_80185E30(arg0);
}

void func_sc03_007_80186310(u8 *o) {
    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x800;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0xC00;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = ((0x3800 - AF(AF(o, u8 *, 0x20), s16, 0x1A)) >> 1) + 0x3800;
        AF(o, s32, 0x1C)--;
    } else {
        AF(o, s32, 0x14) = 0xFFB80000;
        AF(o, s32, 0x48) = 0x38000;
        func_80146A6C(2, o, 0, 0, 0, 3, 0x30000000);
        func_8012AD80(o);
        AF(o, s16, 2)++;
    }
}

void func_sc03_007_80186408(u8 *o) {
    u8 *p;
    s16 v;

    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        func_sc03_007_80185E68(o);
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x800;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x800;
        }
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1C) = ((0x3800 - AF(p, s16, 0x1A)) >> 1) + 0x3800;
        AF(o, s32, 0x1C)--;
    } else {
        SetScript((s32) o, (s32) &D_sc03_007_8018C588);
        func_sc03_007_80185E30((s32) o);
    }
}

void func_sc03_007_801864D8(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    func_sc03_007_80185B48(arg0);
    func_sc03_007_80185B20(arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0xA0);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    func_80146A6C(2, arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ ((AF(AF(arg0, void *, 0x20), u16, 0x12) & 0xFFF) | 0x30009000));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012B200(arg0);
        func_sc03_007_80185E30(arg0);
    }
}

void func_sc03_007_80186584(u8 *o) {
    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x800;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0xC00;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = ((0x3800 - AF(AF(o, u8 *, 0x20), s16, 0x1A)) >> 1) + 0x3800;
        AF(o, s32, 0x1C)--;
    } else {
        AF(o, s32, 0x14) = 0xFFB80000;
        AF(o, s32, 0x48) = 0x38000;
        func_80146A6C(2, o, 0, 0, 0, 3, 0x30000000);
        func_8012AD80(o);
        AF(o, s16, 2)++;
    }
}

void func_sc03_007_8018667C(s32 arg0) {
    func_sc03_007_80185230(arg0);
}

void func_sc03_007_8018669C(u8 *o) {
    u8 *p;
    s16 v;

    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        func_sc03_007_80185E68(o);
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x800;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x800;
        }
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1C) = ((0x3800 - AF(p, s16, 0x1A)) >> 1) + 0x3800;
        AF(o, s32, 0x1C)--;
    } else {
        SetScript((s32) o, (s32) &D_sc03_007_8018C588);
        func_sc03_007_80185E30((s32) o);
    }
}

void func_sc03_007_8018676C(u8 *o) {
    RECT r;

    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0, 4);
    if (AF(o, s32, 0x1C)++ > 0x14) {
        r.x = 0x248;
        r.y = 0x1C0;
        r.w = 0xC;
        r.h = 0x28;
        MoveImage(&r, 0x2A8, 0x188);
        AF(o, s32, 0x1C) = 0x28;
        AF(o, u16, 2) += 1;
    }
}

void func_sc03_007_80186818(u8 *o) {
    if (AF(o, s32, 0x1C) < 0xF) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xA00, 4);
    }
    if (--AF(o, s32, 0x1C) == 0) {
        func_8012B178(o, -0xC0000);
        SetScript(o, &D_sc03_007_8018C610);
        AF(o, s32, 0x1C) = 0x2D;
        func_800D0CE0();
        AF(o, u16, 2) += 1;
    }
}

void func_sc03_007_801868C8(u8 *arg0) {
    s32 temp_v0;
    u32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_8012AD80((s32) arg0);
        temp_v1 = AF(arg0, u32, 0x94);
        if (temp_v1 < 0xBU) {
            AF(arg0, u32, 0x94) = (u32) (temp_v1 + 1);
        }
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            func_80146A6C(2, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ 0);
        }
    } else {
        func_8002AC00(0x27);
        if (AF(arg0, s32, 0x78) != 0) {
            func_8002A04C((s32) arg0);
        }
        func_8012C218((s32) arg0);
    }
}

void func_sc03_007_80186984(u8 *arg0) {
    D_sc03_007_801E4D70[AF(arg0, u16, 2)]();
}

void func_sc03_007_801869C0(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_sc03_007_801E4D50[AF(arg0, s16, 0xFC)];
    if (D_sc03_007_801E4D50[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_sc03_007_801E4D50[0];
    }
    AF(arg0, s16, 0xFC)++;
    r = ((rand() & 3) << 10) + 0x1800;
    s = (r - 0x1000) << 5;
    o = func_8012913C(4);
    if (o != 0) {
        AF(o, s16, 6) = arg1;
        AF(o, u16, 0xA) = val;
        AF(o, s16, 0xE) = 0;
        AF(o, s32, 0x10) = s;
        AF(o, s16, 0x2C) = r;
    }
}

void func_sc03_007_80186A84(u8 *arg0) {
    D_sc03_007_801E4D84[AF(arg0, u16, 2)]();
}

void func_sc03_007_80186AC0(u8 *arg0) {
    s16 n;

    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x1C) = 1;
    n = AF(arg0, u16, 0x70) & 7;
    AF(arg0, s16, 0xFE) = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_sc03_007_801869C0(arg0, -0x80);
        func_sc03_007_801869C0(arg0, -0x30);
        func_sc03_007_801869C0(arg0, 0x20);
        func_sc03_007_801869C0(arg0, 0x70);
        func_sc03_007_801869C0(arg0, 0xC0);
    }
    if (n >= 2) {
        func_sc03_007_801869C0(arg0, -0x58);
        func_sc03_007_801869C0(arg0, -8);
        func_sc03_007_801869C0(arg0, 0x48);
        func_sc03_007_801869C0(arg0, 0x98);
        func_sc03_007_801869C0(arg0, 0xE8);
    }
    func_8012AD50(arg0);
}

void func_sc03_007_80186BA8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFE);
        func_sc03_007_801869C0(arg0, 0x110);
    }
}

void func_sc03_007_80186BE8(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_sc03_007_801E4D78, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_007_80186C70(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

void func_sc03_007_80186CB8(u8 *arg0) {
    D_sc03_007_801E4DD8[AF(arg0, u16, 2)]();
}

void func_sc03_007_80186CF4(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc03_007_80187214() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc03_007_801E4D8C, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc03_007_801E4D98);
    func_sc03_007_8018726C((s32) arg0);
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, u16, 0x2C) = 0xC010;
    x = AF(arg0, u16, 2);
    x++;
    temp_a2 = AF(AF(arg0, void *, 0x64), u16, 0x36);
    AF(arg0, s32, 0x1C) = 0x180;
    AF(arg0, u16, 2) = x;
    AF(arg0, u16, 0x10A) = temp_a2;
    func_8002D4C8(0xAA0, 0, temp_a2);
}

void func_sc03_007_80186DF0(u8 *arg0) {
    u8 *q;
    u8 *o;
    u8 *p;
    s32 t;

    q = AF(arg0, u8 *, 0x64);
    if (AF(arg0, s16, 0x10A) == AF(q, s16, 0x36) && AF(q, s16, 0x76) > 0) {
        if (AF(arg0, s32, 0x1C) % 48 == 0 && AF(q, u8, 0xC1) == 0) {
            AF(q, s16, 0x60) = 0xA;
            AF(q, u16, 0x5C) |= 1;
            AF(q, s16, 0x62) = AF(AF(q, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(q, s16, 0x5E) = 1;
            AF(q, s16, 0x7C) = AF(arg0, s16, 6);
            AF(q, s16, 0x7E) = AF(arg0, s16, 0xA);
            AF(q, s16, 0x80) = AF(arg0, s16, 0xE);
        }
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            o = func_80132EF4(arg0, 0x22);
            if (o != 0) {
                AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xA) -= 0x20;
                AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 3) << 16);
                t = rand();
                AF(o, s16, 0x34) = ((t % 6144 + 0x1000) & ~0xF) | (rand() & 1);
                AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
            }
        }
        p = AF(arg0, u8 *, 0xCC);
        if (p != 0) {
            func_80128ED8(p, arg0 + 0xDC);
            func_sc03_007_8018726C(arg0);
            AF(p, s16, 8) = AF(arg0, s16, 6);
            AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
            AF(p, s16, 0x18) += 0x15;
            AF(p, s16, 0x1A) += 0x15;
        }
        if (AF(q, u16, 0x5E) == 0x23) {
            AF(arg0, s16, 2)++;
        }
        if (func_8012BEE8(arg0) == 0) {
            return;
        }
    }
    func_sc03_007_801872E8(arg0);
}

void func_sc03_007_80187080(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc03_007_8018726C(arg0);
        AF(p, s16, 8) = AF(arg0, s16, 6);
        AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
        AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
        AF(p, s16, 0x18) -= 0x200;
        AF(p, s16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) >= 0) {
            if (D_800B99DA % 5 == 0) {
                o = func_80132EF4(arg0, 0x22);
                if (o != 0) {
                    AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xA) -= 0x20;
                    AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 4) << 16);
                    AF(o, s16, 0x34) = rand() % 6144 + 0x2000;
                    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                }
            }
            return;
        }
    }
    func_sc03_007_801872E8(arg0);
}

s32 func_sc03_007_80187214(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_007_8018726C(u8 *o) {
    SMtx m;
    SV8 c;
    u8 *p;

    p = AF(o, u8 *, 0x64);
    if (AF(p, s16, 0x36) == AF(o, s16, 0x10A)) {
        func_8012EC04(p, AF(o, s16, 0xFC), &m);
        func_8012F14C(&m, o + 0x88, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
}

void func_sc03_007_801872E8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc03_007_8018732C(s32 o, s16 *v, s16 arg2) {
    SpawnDef d;

    d.x = v[0];
    d.y = v[1];
    d.z = v[2];
    d.kind = 0x35C;
    d.flags = 0;
    d.unk8 = 0;
    d.unkE = arg2;
    d.unk10 = 0;
    d.unkC = 0x7FFF;
    func_8012C51C(&d, o);
}
