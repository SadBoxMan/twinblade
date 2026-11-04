#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_080_8017BE9C(void) {
}

void func_sc01_080_8017BEA4(void) {
}

void func_sc01_080_8017BEAC(void) {
}

void func_sc01_080_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_080_80187050[])();
extern void func_sc01_080_8017E578();
extern void (*D_sc01_080_80189458[])();
extern void (*D_sc01_080_801894B8[])();
extern void func_8016EDEC();
void func_sc01_080_8017EEE0(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_080_801894C0[])();
extern void func_800D1EBC();
extern void (*D_sc01_080_80189638[])();
extern void (*D_sc01_080_80189648[])();
void func_sc01_080_8017F184(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc01_080_80189654[])();
void func_sc01_080_8017F268(u8 *arg0);
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_sc01_080_80189684;
extern void func_8016EE40();
extern void (*D_sc01_080_8018A05C[])();
extern void (*D_sc01_080_8018A1F8[])();
extern void (*D_sc01_080_8018A20C[])();
extern void (*D_sc01_080_8018A214[])();
extern void (*D_sc01_080_8018A22C[])();
extern void (*D_sc01_080_8018A240[])();
extern void (*D_sc01_080_8018A248[])();
extern void (*D_sc01_080_8018A250[])();
extern void (*D_sc01_080_8018A258[])();
extern void (*D_sc01_080_8018A264[])();
extern void (*D_sc01_080_8018A26C[])();
extern void (*D_sc01_080_8018A2F4[])();
extern void (*D_sc01_080_8018A32C[])();
extern void (*D_sc01_080_8018A40C[])();
extern void func_8012AD50();
extern void (*D_sc01_080_8018A488[])();

extern void func_80165770();
extern void func_80175414();
extern void func_80171B44();
extern void func_sc01_080_8017F204();
extern s32 D_sc01_080_801C7EC0;
extern void (*D_sc01_080_8018A454[])();
extern void func_sc01_080_80182EF8();

extern void func_8001C214();
extern u8 D_sc01_080_80183884;
extern u8 D_sc01_080_801891AC;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001D0E8();
extern u8 D_sc01_080_80186F5C;
extern u8 D_sc01_080_80186F6C;
extern u8 D_sc01_080_80186FC4;
extern u8 D_sc01_080_80188970;
extern s32 D_sc01_080_80186FB0[];
extern void (*D_sc01_080_80187028[])();
extern void func_sc01_080_8017D72C();
extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_801399F0();
extern void func_80139914();

extern s32 func_80171B4C();

extern void func_8012AD80();
extern s32 func_8012BEE8();
extern void func_8012C218();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126970;
extern s16 D_80126972;
extern s16 D_80126974;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();
extern void func_8016F398();
extern u8 D_800D5A34;
extern s32 func_800CF854();
extern void func_80154274();
extern s32 func_8013767C();
extern u8 D_sc01_080_8018A6A8;
extern s32 func_80012B04();
extern void (*D_sc01_080_80189690[])();
extern u8 D_sc01_080_80189694;
extern void func_80171928();
extern s32 func_8001AAA0();
extern s8 D_sc01_080_80189974;
extern s32 D_80127190;
extern void func_801292C8();
extern s16 D_80126B62;
extern void func_sc01_080_80181D98();
extern void func_8016ED8C();
extern void func_8012B200();
extern s16 D_sc01_080_8018A2A4[];
extern void func_sc01_080_80181FAC();
extern void func_8002D59C();
extern u16 D_sc01_080_8018A408;
extern s32 func_8012C658();
extern u8 D_sc01_080_8018A338;
extern u8 D_sc01_080_8018A3B0;
extern void func_8001CA1C();
extern void func_sc01_080_80183278();

extern u8 D_sc01_080_80189D04;
extern u8 D_sc01_080_801ACC1C;
extern void func_8001C810();



typedef struct { s16 x, y, z, pad; } SV4;

extern s32 D_80127188;
extern u8 D_sc01_080_801C5D40;
extern s32 func_8012913C();
extern s32 func_801291C0();

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc01_080_8017C294();

void func_sc01_080_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc01_080_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc01_080_8017C294(&v[i], &w4[i]);
        if (func_sc01_080_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc01_080_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc01_080_8017C294(&v[i], &w4[i]);
            func_sc01_080_8017C338(&c, &w4[i], &p[i], arg2);
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

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef union { s32 w; XY s; } UXY;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s32 w[4]; } W16;
extern void func_8012B0B4();
extern u16 D_800B9A02;
extern u8 D_800A651C[];
extern u8 *AllocPrim();
extern void func_8012E32C();
extern void func_8012E28C();
extern s32 D_sc01_080_80186FF8[];

extern s32 func_8012C588();
extern s16 D_sc01_080_801C5AAA[];
extern s16 D_sc01_080_801C5AAE[];
extern s16 D_sc01_080_801C5AB2[];
extern s32 D_sc01_080_801C5AA8[];
extern s32 D_sc01_080_801C5AAC[];
extern s32 D_sc01_080_801C5AB0[];
extern s32 D_sc01_080_8018703C[];
extern void func_8012B21C();


void func_sc01_080_8017C294(SV8 *zero, SV8 *out) {
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

s32 func_sc01_080_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc01_080_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern u8 D_sc01_080_801C5D00;
extern u8 D_sc01_080_8018A220;
extern void func_8001CD50();
extern s32 func_801465C0();
extern void func_8001CB6C();
extern u8 D_80126B58;
extern s32 D_sc01_080_8018A30C[];
extern s32 D_sc01_080_8018A310[];
extern s32 func_8012DF34();
extern SV8 D_sc01_080_8018A414[];
extern s32 D_sc01_080_801C7550[];
extern void func_sc01_080_80182CB8();

extern u16 D_800B99DA;
extern s16 D_sc01_080_801C7540;
extern void func_800D20C0();
extern void func_800D23D0();
extern s32 func_8001D074();
extern void func_800233CC();
extern void func_8001CD9C();
extern u8 D_sc01_080_801AE2D8;
extern u8 D_sc01_080_8018A02C;
extern s32 func_8012C194();
extern void func_8012C098();
extern void func_8001CC3C();
extern u8 D_sc01_080_8018A45C;
extern void func_8012AD44();
extern s32 D_sc01_080_801C7594;
extern s32 D_sc01_080_801C7598;
extern void func_8012BF4C();
extern void func_80015954();
extern s32 func_8016F410();
extern u8 D_800D599C;
extern u8 D_sc01_080_801894CC;
extern u8 D_sc01_080_801895CC;
extern u8 D_sc01_080_8018954C;

extern void RotMatrixYXZ();
extern s32 rand();
extern void func_801696D8();
extern void func_8012931C();
extern s32 func_80135168();
extern void func_8012B2CC();
extern void func_8012F14C();
extern u8 D_sc01_080_801899B4;
extern u8 D_sc01_080_801899BC;
extern void (*D_sc01_080_8018A200[])();
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc01_080_801C7600[];
extern void GsGetLs();
extern void GsSetLsMatrix();
extern SV8 D_sc01_080_801C7560[];
extern void func_80017D98();
extern void func_80017758();
extern s32 rsin();
extern SV8 D_sc01_080_801C46E8;
extern s32 D_8012718C;
extern s16 D_80126ADA;
extern s16 D_80126ADE;
extern s16 D_80126AE2;
extern s32 D_sc01_080_801C5AB8;
extern u16 D_800B99DC;
extern u8 D_sc01_080_801C7EE0;
extern u8 D_sc01_080_80193C64;
extern u8 D_sc01_080_80183CB4;
extern void func_8013BD74();
extern void func_8013373C();
extern void func_8013C9C4();
extern WMtx D_800AE620;
extern void RotMatrixY();
extern void ApplyMatrixSV();
extern void func_80169A4C();

extern s16 D_80126B5E;
extern s16 D_80126B66;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_80013F3C();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern u8 D_801202A0[];
extern s32 func_80013328();
extern void func_80015978();
extern s32 func_8012EFB8();

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_80062BDC;
extern void StartRumbleScript();
extern u8 D_80062C04;
extern void func_8016B428();
extern S12 D_sc01_080_801C5A30[];
extern u8 D_sc01_080_80186F8C[];
extern u8 D_sc01_080_80186F7C;
extern S12 D_sc01_080_80188990[];

extern u8 D_sc01_080_801C0264;
extern u16 D_80126CB4;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern void *D_80126B78;
extern s32 D_80126B68;
extern s32 D_80126B70;
extern s16 D_sc01_080_8018A300;

extern u8 D_sc01_080_801C5AC0;
extern CV4 D_sc01_080_801C5B00[][16];

extern s32 ratan2();
extern s32 rcos();
void func_sc01_080_8017E8A0(u8 *o, SV8 *p);
extern void func_sc01_080_8017EA68();

extern s32 D_sc01_080_8018A2AC;
extern s32 D_sc01_080_8018A2B0[];
extern s32 D_sc01_080_8018A2BC[];
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s16 D_80126B9A;
extern s32 func_8012BD14();
extern s32 func_8012D714();
s32 func_sc01_080_80182290(s32 arg0);

extern s16 D_sc01_080_8018A302;
extern s16 D_sc01_080_8018A304;
extern s16 D_sc01_080_8018A306;
extern s32 D_sc01_080_8018A308;
extern void func_8012D3B4();
extern s32 func_sc01_080_801824D0(s32 arg0);

extern B8 D_sc01_080_80187014;

extern void func_80174784();
void func_sc01_080_8017DC78(u8 *o);
extern s32 D_80126D50;
extern u8 *func_8012E544();
extern s32 D_801270DC[];
extern s32 D_801270C8;
extern s32 D_801270CC;
extern u8 D_sc01_080_80189450;
extern void func_801747AC();
void func_sc01_080_8017D468(u8 *o);

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern s32 func_8012C750();

extern UV4 D_sc01_080_8018A478[];
void func_sc01_080_80182B90(u8 *o, s32 b, s32 c0);
extern s32 func_8012B864();
void func_sc01_080_80180188(u8 *o);

void func_sc01_080_8017E4F4(void);
extern void func_8016F0AC();
extern void func_sc01_080_8017E448();
extern s32 func_80013200();
extern s16 D_800B9ABA;
extern u16 D_800B9AB8;
extern s32 D_sc01_080_8018A2E8[];
extern u8 D_sc01_080_8018A2D8;
extern u8 D_sc01_080_8018A2C8;
extern u8 D_sc01_080_801AE850;
extern u8 D_sc01_080_8018A044;
void func_sc01_080_8017F458(void);
extern void func_80175454();
extern u8 D_sc01_080_801AC738;
extern u8 D_sc01_080_80189CEC;
void func_sc01_080_801806DC(void);

extern u8 D_sc01_080_80189975;
extern u8 D_sc01_080_80189976;
extern u8 D_sc01_080_801C5CC0;
extern s32 func_80172658();
extern SV8 D_sc01_080_80189664[];
extern SV8 D_sc01_080_80189668[];
extern s32 D_80126B5C;
extern s32 D_80126950;
extern s32 func_8012B6D4();
extern s16 D_80126B6A;
extern s16 D_80126B72;

extern s32 D_sc01_080_80189464[];
extern void func_sc01_080_8017EC48();
extern s32 D_80126B9C;
extern s16 D_800D391C;
extern s16 D_800D3918;
extern s32 D_801270D0;
extern u8 D_sc01_080_801A37A4;
extern u8 D_sc01_080_801899C4;
extern s32 SetScript();
extern s32 func_8012C51C();

typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern SV8 D_sc01_080_801C75E0;

void func_sc01_080_8017C59C(u8 *o) {
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
    func_sc01_080_8017BEBC(&D_sc01_080_801C75E0, &r, AF(o, s32, 0x60));
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

void func_sc01_080_8017D468(u8 *o) {
    SV8 v[4];
    SV8 c;
    SV8 w;
    s32 pp;
    s32 flag;
    UXY x;
    s32 r;
    s32 h;
    s32 a;
    s32 b;
    s32 i;
    s32 z;
    u8 *p;

    func_8012E32C();
    i = 0;
    r = rsin((AF(o, s32, 0x1C) << 11) / 30);
    h = (r << 8) >> 12;
    c.x = AF(o, u16, 6);
    c.y = AF(o, u16, 0xA);
    c.z = AF(o, u16, 0xE);
    a = AF(o, s32, 0x1C) << 4;
    for (; i < 6; i++, a = b) {
        func_8012B0B4(&w, a, 0x20);
        x = *(UXY *)&w;
        b = a + 0x2AA;
        v[0].x = c.x + x.s.x;
        v[0].y = c.y;
        v[0].z = c.z + x.s.y;
        v[2].x = c.x + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[2].y = c.y - h;
        v[2].z = c.z + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        func_8012B0B4(&w, b, 0x20);
        x = *(UXY *)&w;
        v[1].x = c.x + x.s.x;
        v[1].y = c.y;
        v[1].z = c.z + x.s.y;
        v[3].x = c.x + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[3].y = c.y - h;
        v[3].z = c.z + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        p = AllocPrim(0x24);
        AF(p, s32, 4) = D_sc01_080_80186FF8[i];
        AF(p, s32, 0xC) = D_sc01_080_80186FF8[i + 1];
        p[7] = 0x3A;
        AF(p, s32, 0x1C) = 0;
        AF(p, s32, 0x14) = 0;
        AF(p, u32, 0) = 0x08000000;
        z = RotTransPers(&v[0], p + 8, &pp, &flag);
        RotTransPers(&v[1], p + 0x10, &pp, &flag);
        RotTransPers(&v[2], p + 0x18, &pp, &flag);
        RotTransPers(&v[3], p + 0x20, &pp, &flag);
        AddPrim(*(u8 **)(D_800A651C + D_800B9A02 * 0x14) + z * 4, p);
        func_8012E28C(z, 1);
    }
}

void func_sc01_080_8017D72C(o)
    u8 *o;
{
    s32 i;
    s32 k;
    s32 s;
    S12 *p;

    AF(o, s16, 2) = 2;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0x15;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, u8, 0x5E) == 5) {
        StartRumbleScript(&D_80062BDC);
    }
    if (AF(o, u16, 0x82) & 1) {
        func_8016B428(o);
        StartRumbleScript(&D_80062C04);
    }
    if (--AF(o, s16, 0x76) == 0) {
        AF(o, u16, 0x5C) &= 0x7FFF;
        func_8002D4C8(0x4A8, 0);
    } else {
        func_8002D4C8(0x4A9, 0);
    }
    k = AF(o, s16, 0xFC) = D_sc01_080_80186F8C[AF(o, s16, 0x76)];
    for (i = 0; i < 10; i++) {
        D_sc01_080_801C5A30[i] = (*(S12 **)D_sc01_080_80186FB0[AF(o, s16, 0x76)])[i];
    }
    SetScript(o, &D_sc01_080_80186F7C);
    p = &D_sc01_080_80188990[k];
    D_sc01_080_801C5AAA[0] = p->v[0];
    D_sc01_080_801C5AAE[0] = p->v[1];
    D_sc01_080_801C5AB2[0] = p->v[2];
    func_8012B21C(o);
    AF(o, s32, 0x48) = 0x18000;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x10) = s;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x18) = s;
    AF(o, s32, 0x14) = -0xC0000;
}

void func_sc01_080_8017D93C(u8 *o) {
    SV8 a;
    SV8 b;
    S12 *tbl;
    S12 *t;
    u8 *m;
    u8 *p;

    AF(AF(o, u8 *, 0x20), s32, 0x48) = AF(o, s16, 0xDC);
    AF(AF(o, u8 *, 0x20), s32, 0x50) = AF(o, s16, 0xDE);
    a.x = (AF(o, s32, 0x1C) & 1) << 2;
    a.y = a.z = 0;
    FaceHelper(o, &a, &b);
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xE) = b.z;
    AF(o, s16, 0x98) = 0;
    tbl = *AF(o, S12 **, 0x90);
    AF(o, s32, 0x10) += AF(o, s32, 0x44);
    AF(o, s32, 0x14) += AF(o, s32, 0x48);
    AF(o, s32, 0x18) += AF(o, s32, 0x4C);
    t = &tbl[AF(o, s16, 0xFC)];
    D_sc01_080_801C5AA8[0] += AF(o, s32, 0x10);
    D_sc01_080_801C5AAC[0] += AF(o, s32, 0x14);
    D_sc01_080_801C5AB0[0] += AF(o, s32, 0x18);
    t->v[0] = D_sc01_080_801C5AAA[0] - a.x;
    t->v[1] = D_sc01_080_801C5AAE[0];
    t->v[2] = D_sc01_080_801C5AB2[0] - a.z;
    if (AF(o, s32, 0x1C) >= 11) {
        m = (u8 *)func_8012C588(0x24, o);
        if (m != 0) {
            a.x = t->v[0];
            a.y = t->v[1];
            a.z = t->v[2];
            FaceHelper(o, &a, &b);
            AF(m, s16, 6) = b.x;
            AF(m, s16, 0xA) = b.y;
            AF(m, s16, 0xE) = b.z;
        }
    }
    if (func_8012BEE8(o) == 0) {
        return;
    }
    if (AF(o, s16, 0x76) <= 0) {
        if (AF(o, s16, 0x70) == 4) {
            func_8012C218(o);
        } else {
            func_sc01_080_8017DBF4(o);
        }
        return;
    }
    SetScript(o, D_sc01_080_80186FB0[AF(o, s16, 0x76)]);
    AF(o, s16, 2) = 1;
    if (AF(o, s16, 0x70) == 4) {
        AF(o, u8 *, 0x58) = &D_sc01_080_80186F6C;
    } else {
        AF(o, u8 *, 0x58) = &D_sc01_080_80186F5C;
    }
    AF(o, s32, 0x58) |= 0x60000000;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x1C00;
    AF(o, u16, 0x5C) |= 0x8800;
    AF(o, s16, 0x5E) = 0;
    AF(o, s16, 6) = AF(o, s16, 0xDC);
    AF(o, s16, 0xE) = AF(o, s16, 0xDE);
}

void func_sc01_080_8017DBF4(s32 arg0) {
    s32 temp_v1;

    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc01_080_801891AC);
    SetScript(arg0, (s32) &D_sc01_080_80183884);
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0x77FF);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc01_080_8017DC78(u8 *o) {
    SetScript(o, &D_sc01_080_80183884);
    AF(o, s16, 2) = 4;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0x1E;
    AF(o, u16, 0xEA) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    AF(o, s16, 0xE8) = 0;
    AF(o, s32, 0xE0) = 0x400000;
    AF(o, s32, 0xE4) = 0;
    func_8002D4C8(0x49E, 0);
    func_8002D4C8(0x4A2, 0);
    func_80174784();
}

void func_sc01_080_8017DCF8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1, arg2)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_080_80188970);
    func_8001D0E8(temp_v0, 0x104, 0x190);
    AF(temp_v0, s16, 0x1C) = 0x1C00;
    AF(temp_v0, s16, 0x1A) = 0x1C00;
    AF(temp_v0, s16, 0x18) = 0x1C00;
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0x76) = 4;
    AF(arg0, s32 *, 0x78) = &D_sc01_080_80186FC4;
    AF(arg0, u16, 0xDC) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0xDE) = (u16) AF(arg0, u16, 0xE);
    SetScript(arg0, D_sc01_080_80186FB0[AF(arg0, s16, 0x76)]);
    AF(arg0, s16, 2) = 1;
    if (AF(arg0, s16, 0x70) == 4) {
        AF(arg0, s32 *, 0x58) = &D_sc01_080_80186F6C;
    } else {
        AF(arg0, s32 *, 0x58) = &D_sc01_080_80186F5C;
    }
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s32 *, 0x58) = (s32 *) ((s32) AF(arg0, s32 *, 0x58) | 0x60000000);
    AF(temp_v1, s16, 0x1C) = 0x1C00;
    AF(temp_v1, s16, 0x1A) = 0x1C00;
    AF(temp_v1, s16, 0x18) = 0x1C00;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x8800);
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
}

void func_sc01_080_8017DE38(u8 *arg0) {
    if (((u32) (AF(arg0, u16, 2) - 1) < 2U) && (AF(arg0, u16, 0x5C) & 1)) {
        func_sc01_080_8017D72C();
        return;
    }
    D_sc01_080_80187028[AF(arg0, u16, 2)]();
}

void func_sc01_080_8017DEB0(u8 *o) {
    s32 m;
    s32 a;
    s32 s;
    u8 *t;
    SV8 *v;

    m = func_8012C1B8(o);
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), D_sc01_080_8018703C[rand() % 3]);
    if (AF(o, s16, 0x70) != 0) {
        v = (SV8 *)(o + 0x24);
        AF(o, s16, 0x2A) = -2;
        a = -AF(o, s16, 0xE) + 0x400;
        v->x = (a * 48) / 2048;
        v->y = (a * 96) / 2048;
        v->z = a / 64;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(o, u8 *, 0x20), SV8 *, 0x80) = v;
    }
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    t = AF(o, u8 *, 0x20);
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = AF(t, s16, 0x1C) = 0x2000;
    SetScript(o, &D_sc01_080_80183884);
    AF(o, s16, 2) = 1;
    func_8012B21C(o);
    AF(o, s32, 0x48) = 0x18000;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x10) = s;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x18) = s;
    if (AF(o, s16, 0x70) == 0) {
        AF(o, s32, 0x14) = -(rand() << 4);
    } else {
        AF(o, s32, 0x14) = -0x80000 - (rand() << 5);
    }
    AF(o, s32, 0x1C) = 0x32;
}

void func_sc01_080_8017E0A4(u8 *arg0) {
    D_sc01_080_80187050[AF(arg0, u16, 2)]();
}

void func_sc01_080_8017E0E0(u8 *o) {
    if (AF(o, s16, 0x70) == 4) {
        AF(o, B8, 0x50) = D_sc01_080_80187014;
    }
}

void func_sc01_080_8017E124(u8 *o) {
    u8 *p;

    if (D_801270DC[0] == 0) {
        if (func_8012BD14() < 0x4001) {
            p = func_8012E544(0x161);
            if (p != 0) {
                AF(p, s16, 0xFC) = 1;
                AF(p, s16, 0xFE) = 3 - AF(o, u16, 0x70);
            }
            D_801270DC[0] = 1;
            AF(o, s32, 0x1C) = 0x1E;
        }
    } else {
        func_8012BEE8(o);
        if (AF(o, s32, 0x1C) == 0 && D_80126D50 == 0 && func_8012BD14(o) < 0x241) {
            func_sc01_080_8017DC78(o);
        }
    }
}

void func_sc01_080_8017E1FC(u8 *o) {
    s32 *p;

    if (AF(o, u16, 0x34) == 0) {
        AF(o, s32, 0xE4) += AF(o, s32, 0xE0);
        AF(o, s32, 0xE8) += AF(o, s32, 0xE4);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xEA);
        func_sc01_080_8017D468(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34) = 1;
            func_8001C214(AF(o, s32, 0x20), &D_sc01_080_80189450);
            SetScript(o, &D_sc01_080_80183884);
            func_801747AC();
            p = &D_801270C8;
            if (++*p >= 4) {
                D_801270CC = 2;
            }
        }
    }
}

void func_sc01_080_8017E2C8(s32 arg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    func_8012AD80(arg0);
    if (AF(arg0, s32, 0x1C) >= 0x30) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
    } else {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x17);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x43);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x14) = (u16) (AF(temp_v1_3, u16, 0x14) + 0x58);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

void func_sc01_080_8017E394(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x2BC;
    D_80126968 = 0x38;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x8C;
    D_80126972 = -0x8C;
    D_8012697A = 0;
    D_80126970 = 0;
    D_80126974 = 0;
    func_8012A018((s32) func_sc01_080_8017E578, 0);
    func_sc01_080_8017E578((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_080_8017E448(void) {
    V3 v;

    D_80126950 = D_80126954 = 0x1F4;
    D_8012695C = 0x4EE;
    v.x = v.y = v.z = 0;
    D_80126968 = 0x120;
    D_8012696A = func_8012B6D4(&D_80126B5C, &v);
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_080_8017E578, 1);
    func_sc01_080_8017E578((s32) &D_80126948);
}

void func_sc01_080_8017E4F4(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x190;
    D_80126968 = 0;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_080_8017E578, 2);
    func_sc01_080_8017E578((s32) &D_80126948);
}

void func_sc01_080_8017E578(s32 arg0) {
    D_sc01_080_80189458[AF(arg0, u8, 4)]();
}

void func_sc01_080_8017E5B4(u8 *o) {
    SV8 v;

    AF(o, s16, 0x22) = ratan2(D_80126B5E, D_80126B66) & 0xFFF;
    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_sc01_080_8017E8A0(o, &v);
    func_sc01_080_8017EA68(o);
}

void func_sc01_080_8017E630(u8 *o) {
    SV8 v;

    AF(o, s16, 0x2E) = (-rsin(AF(o, s16, 0x22)) * D_sc01_080_80189464[0]) / 4096;
    AF(o, s16, 0x32) = (-rcos(AF(o, s16, 0x22)) * D_sc01_080_80189464[0]) / 4096;
    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_sc01_080_8017E8A0(o, &v);
    AF(o, s32, 0x48) = D_80126ADA;
    AF(o, s32, 0x4C) = D_80126ADE;
    AF(o, s32, 0x50) = D_80126AE2;
    func_sc01_080_8017EC48(o);
}

void func_sc01_080_8017E724(u8 *o) {
    s32 t;
    s32 a;
    s32 c;
    s16 d;
    s16 b;
    s32 m;
    u8 *q;
    SV8 v;

    t = ratan2(D_80126B5E, D_80126B66) & 0xFFF;
    AF(o, s16, 0x22) = t;
    a = (t + 0x400) & 0xFFF;
    c = rcos((AF(D_80126B78, u16, 0x12) - a) & 0xFFF);
    q = &D_80126B58;
    b = a;
    m = c / 32;
    AF(o, s16, 0x2E) = -(rsin(b) * (s16)m) / 4096;
    AF(o, s16, 0x32) = -(rcos(b) * (s16)m) / 4096;
    v.x = D_80126B5E;
    v.z = D_80126B66;
    d = -0x480 - D_80126B62;
    if ((u16)D_80126B62 > 0xFB7F) {
        v.y = -0x480;
    } else if ((d < 0 ? -d : d) > 0x80) {
        v.y = AF(q, s16, 0xA) + 0x80;
    } else {
        v.y = -0x480;
    }
    func_sc01_080_8017E8A0(o, &v);
    func_sc01_080_8017EA68(o);
}

void func_sc01_080_8017E8A0(u8 *o, SV8 *p) {
    WMtx m;
    SV8 r;
    SV8 out;

    AF(o, s32, 0x8) = (s16)func_80012C6C(AF(o, s16, 0x8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + D_80126B5E;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126B62;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126B66;
    func_80013F3C(&m);
    func_800123F0(&m, AF(o, s16, 0x1C));
    func_80012558(&m, AF(o, s16, 0x1A));
    func_800126C4(&m, AF(o, s16, 0x18));
    m.t[0] = AF(o, s16, 0x28) + p->x;
    m.t[1] = AF(o, s16, 0x2A) + p->y;
    m.t[2] = AF(o, s16, 0x2C) + p->z;
    r.x = 0;
    r.y = 0;
    r.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &r, &out);
    AF(o, s32, 0x3C) = out.x;
    AF(o, s32, 0x40) = out.y;
    AF(o, s32, 0x44) = out.z;
}

void func_sc01_080_8017EA68(u8 *o) {
    V4 a;
    V4 b;
    s32 r;

    a.x = AF(o, s32, 0x48);
    a.y = 0;
    a.z = AF(o, s32, 0x50);
    b.x = AF(o, s32, 0x3C);
    b.y = 0;
    b.z = AF(o, s32, 0x44);
    r = ratan2(AF(o, s32, 0x4C) - AF(o, s32, 0x40), func_80013200(&a, &b));
    if (r > 0x800) {
        r = 0x1000 - r;
    }
    D_800B9ABA = r * 300 / 1024 + 200;
    D_800B9AB8 = ratan2(AF(o, s32, 0x48) - AF(o, s32, 0x3C), AF(o, s32, 0x50) - AF(o, s32, 0x44)) * 640 / 4096 + 320;
}

void func_sc01_080_8017EB64(u8 *o) {
    V3 a, b;
    s32 r;

    a.x = AF(o, s32, 0x48);
    a.y = 0;
    a.z = AF(o, s32, 0x50);
    b.x = AF(o, s32, 0x3C);
    b.y = 0;
    b.z = AF(o, s32, 0x44);
    r = ratan2(AF(o, s32, 0x4C) - AF(o, s32, 0x40), func_80013200(&a, &b));
    if (r > 0x800) r = 0x1000 - r;
    D_800B9ABA = r * 300 / 1024 + 0xC8;
    D_800B9AB8 = AF(o, s32, 0x48) * 640 / 4096;
}

void func_sc01_080_8017EC48(u8 *o) {
    V3 a, b;
    s32 r;

    a.x = AF(o, s32, 0x48);
    a.y = 0;
    a.z = AF(o, s32, 0x50);
    b.x = AF(o, s32, 0x3C);
    b.y = 0;
    b.z = AF(o, s32, 0x44);
    r = ratan2(AF(o, s32, 0x4C) - AF(o, s32, 0x40), func_80013200(&a, &b));
    if (r > 0x800) r = 0x1000 - r;
    D_800B9ABA = r * 300 / 1024 + 0xC8;
    D_800B9AB8 = 0xFFEC;
}

void func_sc01_080_8017ED0C(u8 *arg0) {
    D_sc01_080_801894B8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_080_8017ED48(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_080_8017EEE0, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_080_8017ED98(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_080_8017EDBC(u8 *arg0) {
    D_sc01_080_801894C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_080_8017EDF8(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_080_8017F184, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_080_8017EE44(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc01_080_8017EEC0(void) {
    func_800D1EBC();
}

void func_sc01_080_8017EEE0(u8 *arg0) {
    D_sc01_080_80189638[AF(arg0, u8, 0x214)]();
}

void func_sc01_080_8017EF1C(u8 *arg0) {
    func_8016F398();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_80171B44((s32) arg0);
}

void func_sc01_080_8017EF58(s32 arg0) {
    if (func_80171B4C(arg0, 0x1E) != 0) {
        if (func_800CF854() != 0) {
            AF(arg0, u8, 0x214) = 3U;
            return;
        }
        func_80154274(arg0, (s32) &D_800D5A34);
        EndScene(arg0);
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, s16, 0x20C) = 0;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017EFDC(u8 *o) {
    switch (AF(o, s16, 0x20C)) {
    case 0:
        if (func_8016F410(0) != 0) {
            AF(o, s16, 0x20C)++;
            func_80154274(o, &D_800D599C);
        }
        break;
    case 2:
        if (func_8016F410(1) != 0) {
            func_80154274(o, &D_sc01_080_801894CC);
            AF(o, s16, 0x20E) = 0;
            AF(o, s16, 0x20C)++;
        }
        break;
    case 3:
        if ((AF(o, u16, 0xB8) & 0x8000) && AF(o, s16, 0x20E) == 0) {
            AF(o, s16, 0x20E) = 1;
            func_80154274(o, &D_sc01_080_801895CC);
        }
        if (func_8016F410(2) != 0) {
            func_80154274(o, &D_sc01_080_8018954C);
            AF(o, s16, 0x20C)++;
        }
        break;
    case 1:
    case 4:
        if (AF(o, u16, 0xB8) & 0x8000) {
            func_80154274(o, &D_800D5A34);
            AF(o, s16, 0x20C)++;
        }
        break;
    case 5:
        break;
    }
    if (func_801399F0(AF(o, s32, 0x198)) != 0) {
        func_80139914(AF(o, s32, 0x198));
        BeginScene(o);
        AF(o, u8, 0x214)++;
    }
}

void func_sc01_080_8017F14C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc01_080_8017F184(u8 *arg0) {
    D_sc01_080_80189648[AF(arg0, u8, 0x214)]();
}

void func_sc01_080_8017F1C0(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
    func_sc01_080_8017F204((s32) arg0);
}

void func_sc01_080_8017F204(s32 arg0) {
    if (func_80171B4C(arg0, 2) != 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017F248(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc01_080_8017F268(u8 *arg0) {
    D_sc01_080_80189654[AF(arg0, u8, 0x214)]();
}

void func_sc01_080_8017F2A4(u8 *o) {
    s32 i;

    if (func_80172658(o) != 0) {
        i = AF(o, s32, 0x218);
        AF(o, s16, 0x20C) = ratan2(AF(o, s16, 6) - D_sc01_080_80189664[i].x,
                                   AF(o, s16, 0xE) - D_sc01_080_80189668[i].x) & 0xFFF;
        AF(o, s16, 0x20E) = D_80126968;
        D_80126968 = 0x38E;
        func_80175454();
        AF(o, u8, 0x214)++;
    }
}

void func_sc01_080_8017F344(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) AF(arg0, s16, 0x20C), 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) (((u16) AF(temp_a0, s16, 0x12) + temp_v0) & 0xFFF);
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_080_8018A6A8);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017F3C0(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017F414(s32 arg0) {
    func_80175414(arg0);
    D_80126968 = AF(arg0, u16, 0x20E);
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_080_8017F458(void) {
    func_8016EE40((s32) &D_sc01_080_80189684, 0x01000000);
}

void func_sc01_080_8017F480(u8 *arg0) {
    D_sc01_080_80189690[AF(arg0, u8, 0x215)]();
}

void func_sc01_080_8017F4BC(s32 arg0) {
    if ((ActionHelper_1AB0(arg0, (s32) &D_sc01_080_80189694) << 0x10) == 0) {
        func_80171928(arg0);
    }
}

void func_sc01_080_8017F500(u8 *arg0) {
    D_sc01_080_8018A05C[AF(arg0, u16, 2)]();
}

void func_sc01_080_8017F53C(u8 *o) {
    struct { s16 x, y, z, kind, a, b; s32 c[3]; } d1, d2, d3;
    s32 m;

    AF(o, s32, 0x20) = m = func_8012C1B8(o);
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(m, &D_sc01_080_801A37A4);
    func_8001D0E8(m, 0x7FFF, 0x7FFF);
    SetScript(o, &D_sc01_080_801899C4);
    AF(o, u8, 0xFC) = 0;
    d1.kind = 0xB;
    d1.b = 0;
    d1.a = 0;
    func_8012C51C(&d1, o);
    AF(o, s32, 0xF0) = 0x1C0;
    d3.kind = 0x28;
    d3.b = 0;
    d3.a = 0;
    func_8012C51C(&d3, o);
    d2.kind = 0x27;
    d2.b = 0;
    d2.a = 0;
    func_8012C51C(&d2, o);
    AF(o, s16, 0x100) = 0x90;
    AF(o, s16, 0xFE) = 0;
    AF(o, s16, 0x102) = 0xFF;
    AF(o, s16, 2)++;
}

void func_sc01_080_8017F638(u8 *o) {
    u8 unused[8];

    if (D_801270C8 >= 4) {
        func_sc01_080_8017F458();
        func_80175454();
        AF(o, s16, 0xA) = 0x89F;
        AF(o, s32, 0xF0) = 0xA5F;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(o, s32, 0xDC) = 1;
        AF(o, s32, 0xE4) = 0x20;
        D_8012718C = AF(o, s16, 0xA);
        func_8001C214(AF(o, s32, 0x20), &D_sc01_080_801AC738);
        func_8001D0E8(AF(o, s32, 0x20), 0x800, 0x800);
        func_800D0C48(0);
        func_8002D4C8(0x404, 0);
        SetScript(o, &D_sc01_080_80189CEC);
        func_sc01_080_801806DC();
        AF(o, u16, 2)++;
    }
}

void func_sc01_080_8017F710(u8 *o) {
    if (--AF(o, s32, 0xE4) == 0) {
        AF(o, s32, 0xE0) = 0x30;
        AF(o, s32, 0xE4) = 0x40;
        func_sc01_080_8017E448();
        D_80126ADA = AF(o, u16, 6);
        D_80126ADE = -0x130;
        D_80126AE2 = AF(o, u16, 0xE);
        AF(o, u16, 2)++;
        return;
    }
    if (--AF(o, s32, 0xDC) == 0) {
        func_8013C9C4(&D_sc01_080_80183CB4);
        AF(o, s32, 0xDC) = (D_800B99DC & 7) + 3;
    }
}

void func_sc01_080_8017F7D0(u8 *o) {
    u16 t;

    if (--AF(o, s32, 0xE0) == 0) {
        AF(o, u8, 0xFC) = 1;
        D_80127188 = 1;
    }
    if (--AF(o, s32, 0xE4) == 0) {
        AF(o, s32, 0xE4) = 0;
        AF(o, s32, 0xE8) = D_80126978 << 16;
        AF(o, s32, 0xEC) = 0;
        AF(o, s16, 0xDE) = D_80126950;
        AF(o, s16, 0xDC) = 0;
        D_80127188 = AF(o, s32, 0xE0) = 2;
        t = AF(o, u16, 2);
        D_sc01_080_801C5AB8 = 1;
        AF(o, s16, 2) = t + 1;
    } else if (--AF(o, s32, 0xDC) == 0) {
        func_8013C9C4(&D_sc01_080_80183CB4);
        AF(o, s32, 0xDC) = (D_800B99DC & 7) + 3;
    }
}

void func_sc01_080_8017F8C0(u8 *o) {
    SV8 v;
    u8 *g;
    s16 t;
    u16 y;
    s16 h;
    s32 e;

    v = D_sc01_080_801C46E8;
    g = &D_80126948;
    t = AF(o, s16, 0x100);
    if (t == 0) {
        if (AF(o, s16, 0xFE) == 0) {
            if (func_8001AAA0(0x11) != 0) {
                AF(o, s16, 0xFE) = 1;
            }
        }
    } else {
        AF(o, s16, 0x100) = t - 1;
    }
    if (--AF(o, s16, 0x102) == 0 && AF(o, s16, 0xFE) != 0) {
        func_8002D4C8(0x102, 0);
        AF(o, s16, 0xFE) = 2;
    }
    D_8012718C = AF(o, s16, 0xA);
    y = AF(o, u16, 0xA);
    AF(o, s16, 0xA) = y - 8;
    if (y > 0x1E0 && y < 0x3C0) {
        AF(o, s32, 0xE8) += 0xCCC00;
        AF(g, s16, 0x30) = AF(o, s32, 0xE8) >> 16;
    }
    if (AF(o, s16, 0xA) < 0x3B8) {
        AF(o, s32, 0xDC) += -0x1AE40;
        AF(o, s32, 0xEC) += 0xD;
        AF(g, s32, 8) = AF(g, s32, 0xC) = AF(o, s16, 0xDE);
    }
    h = AF(o, s16, 0xA);
    if (h <= 0) {
        AF(o, s16, 0xA) = 0;
        func_8013BD74(&D_sc01_080_801C7EE0, &D_sc01_080_80193C64);
        func_8013373C(0);
        AF(AF(o, u8 *, 0x20), s32, 0x24) = 0;
        func_8002D4C8(4, 0x404);
        func_8002D4C8(0x405, 0);
        D_80127188 = 3;
        AF(o, s32, 0xDC) = 0x34;
        AF(o, s32, 0xE0) = 0x44;
        AF(o, u16, 2)++;
        return;
    }
    if (AF(o, s32, 0xE4) != 0) {
        D_80126ADA = AF(o, u16, 6);
        D_80126AE2 = AF(o, u16, 0xE);
        e = AF(o, s32, 0xEC) + 0x4E8;
        D_80126ADE = AF(o, u16, 0xA) - e;
    } else if (h < 0x3B8) {
        AF(o, s32, 0xE4) = 1;
        D_80126ADA = AF(o, u16, 6);
        D_80126ADE = AF(o, u16, 0xA) - 0x4E8;
        D_80126AE2 = AF(o, u16, 0xE);
    }
    if (--D_sc01_080_801C5AB8 == 0) {
        func_8013C9C4(&D_sc01_080_80183CB4);
        D_sc01_080_801C5AB8 = (D_800B99DC & 7) + 3;
    }
}

void func_sc01_080_8017FB5C(u8 *arg0) {
    s16 temp_v1;

    temp_v1 = AF(arg0, s16, 0xFE);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_8001AAA0(0x11) != 0) {
            AF(arg0, s16, 0xFE) = 1;
            return;
        }
        return;
    case 1:
        func_8002D4C8(0x102, 0);
        AF(arg0, s16, 0xFE) = (s16) ((u16) AF(arg0, s16, 0xFE) + 1);
        return;
    case 2:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        break;
    }
}

void func_sc01_080_8017FC04(u8 *o) {
    SV8 v;

    v = D_sc01_080_801C46E8;
    if (AF(o, s32, 0xE0) < 0x4000) {
        if (--AF(o, s32, 0xDC) == 0) {
            D_80127188 = 4;
            func_sc01_080_8017E4F4();
            func_8016F0AC();
            func_80175414();
        }
        if (--AF(o, s32, 0xE0) == 0) {
            AF(o, s32, 0xE0) = 0x4000;
            AF(o, s32, 0xDC) = 8;
        }
    }
}

void func_sc01_080_8017FCC0(void) {
    SV8 *p = D_sc01_080_801C7600;
    s32 i;

    for (i = 0; i < 0x100; i++, p++) {
        p->x = p->y = p->z = p->pad = 0;
    }
}

void func_sc01_080_8017FCFC(SV8 *s) {
    SV8 *t;
    s32 i;

    t = D_sc01_080_801C7600;
    for (i = 0; i < 0x100; i++, t++) {
        if (t->pad == 0) {
            t->pad = 0x20;
            t->x = s->x;
            t->y = s->y;
            t->z = s->z;
            return;
        }
    }
}

void func_sc01_080_8017FD64(u8 *o) {
    MtxDCM ls;
    SV8 v;
    XY a;
    XY b;
    XY c;
    s32 z;
    s32 i;
    SV8 *t;
    u8 *pk;
    u32 *ot;
    u32 *otp;

    t = D_sc01_080_801C7600;
    GsGetLs(o + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    for (i = 0; i < 0x100; i++, t++) {
        if (t->pad == 0) continue;
        v.x = 0x80;
        v.y = 0x80;
        v.z = t->z;
        gte_ldv3(t, &v, &v);
        gte_rtpt();
        gte_stsxy0(&a);
        gte_stsxy1(&b);
        gte_stszotz(&z);
        if ((u16)(a.x + 0xA0) > 0x140) continue;
        if ((u16)(a.y + 0x78) > 0xF0) continue;
        AF(pk, u8, 3) = 9;
        AF(pk, u8, 7) = 0x2C;
        AF(pk, s32, 8) = *(s32 *)&a;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        AF(pk, s16, 0x10) = c.x;
        AF(pk, s16, 0x12) = a.y;
        AF(pk, s16, 0x18) = a.x;
        AF(pk, s16, 0x1A) = c.y;
        AF(pk, s16, 0x20) = c.x;
        AF(pk, s16, 0x22) = c.y;
        AF(pk, u8, 4) = 0x80;
        AF(pk, u8, 5) = 0x80;
        AF(pk, u8, 6) = 0x80;
        AF(pk, s32, 0xC) = 0x5C56F030;
        AF(pk, s32, 0x14) = 0x19F03F;
        AF(pk, s32, 0x1C) = 0xFF30;
        AF(pk, s32, 0x24) = 0xFF3F;
        otp = (u32 *)((z << 2) + (u32)ot);
        ((PTag *)pk)->addr = ((PTag *)otp)->addr;
        ((PTag *)otp)->addr = (u32)pk;
        pk += 0x28;
    }
    g_PrimNext = pk;
}

void func_sc01_080_8017FF78(u8 *arg0) {
    D_sc01_080_8018A1F8[AF(arg0, u16, 2)]();
}

void func_sc01_080_8017FFB4(u8 *o) {
    s32 m;
    s32 p;

    if ((AF(o, s32, 0x20) = m = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(m, &D_sc01_080_801AE2D8);
    func_8001D0E8(m, 0x800, 0x800);
    SetScript(o, &D_sc01_080_8018A02C);
    D_sc01_080_801C7EC0 = 0;
    p = func_8001D074(0x3E, 0x7D);
    AF(o, s32, 0xF4) = p;
    if (p != 0) {
        func_800233CC(&D_sc01_080_80189974, 0x50);
        func_8001CD9C(p, &D_sc01_080_80189974);
    }
    p = func_8001D074(0x3E, 0x7D);
    AF(o, s32, 0xF8) = p;
    if (p != 0) {
        func_800233CC(&D_sc01_080_80189974, 0x40);
        func_8001CD9C(p, &D_sc01_080_80189974);
    }
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8) - AF(AF(o, u8 *, 0x64), s32, 0xF0);
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    AF(o, s16, 2)++;
}

void func_sc01_080_801800F4(u8 *o) {
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) - AF(AF(o, u8 *, 0x64), s32, 0xF0);
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B864(o);
    if (AF(o, s32, 0xF4) != 0) {
        func_sc01_080_80180188(o);
    }
}

s32 func_sc01_080_80180174(s32 arg0, s32 arg1) {
    D_sc01_080_801C7EC0 = 1;
    return 1;
}

void func_sc01_080_80180188(u8 *o) {
    SV8 v;

    func_8012B2CC(o);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc01_080_801899B4, &v);
    AF(AF(o, u8 *, 0xF4), s16, 8) = v.x;
    AF(AF(o, u8 *, 0xF4), s16, 0xA) = v.y;
    AF(AF(o, u8 *, 0xF4), s16, 0xC) = v.z;
    AF(AF(o, u8 *, 0xF4), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(AF(o, u8 *, 0xF4), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
    AF(AF(o, u8 *, 0xF4), s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc01_080_801899BC, &v);
    AF(AF(o, u8 *, 0xF8), s16, 8) = v.x;
    AF(AF(o, u8 *, 0xF8), s16, 0xA) = v.y;
    AF(AF(o, u8 *, 0xF8), s16, 0xC) = v.z;
    AF(AF(o, u8 *, 0xF8), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(AF(o, u8 *, 0xF8), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
    AF(AF(o, u8 *, 0xF8), s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    D_sc01_080_8018A200[AF(o, u16, 0x34)](o);
}

void func_sc01_080_801802D8(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xF4);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0xD0000040);
    temp_v1_2 = AF(arg0, void *, 0xF8);
    AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0xD0000040);
    AF(arg0, s32, 0xE4) = 0x80;
    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
}

void func_sc01_080_80180320(u8 *o) {
    u8 *q;

    if (D_801270C8 < 4 && D_sc01_080_801C7EC0 != 0) {
        AF(AF(o, u8 *, 0xF4), s32, 4) = 0x50000040;
        q = AF(o, u8 *, 0xF8);
        D_sc01_080_801C7EC0 = 0;
        AF(q, s32, 4) = 0x50000040;
        *(u8 *)&D_sc01_080_80189974 = 0xFF;
        D_sc01_080_80189975 = 0x10;
        D_sc01_080_80189976 = 0x10;
        AF(o, s32, 0xE4) = 6;
        AF(o, s32, 0xE8) = 0xFF;
        AF(o, s16, 0x34)++;
    }
}

void func_sc01_080_801803AC(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0xE4);
    if (temp_v0 == 0) {
        temp_v0_2 = AF(arg0, s32, 0xE8) - 0x40;
        AF(arg0, s32, 0xE8) = temp_v0_2;
        if (temp_v0_2 <= 0) {
            AF(arg0, s32, 0xE8) = 0;
        }
        D_sc01_080_80189974 = (s8) AF(arg0, s32, 0xE8);
        if (AF(arg0, s32, 0xE8) == 0) {
            AF(AF(arg0, void *, 0xF4), s32, 4) = 0xD0000040;
            AF(AF(arg0, void *, 0xF8), s32, 4) = 0xD0000040;
            AF(arg0, s16, 0x34) = 1;
        }
    } else {
        AF(arg0, s32, 0xE4) = (s32) (temp_v0 - 1);
    }
}

void func_sc01_080_80180420(u8 *arg0) {
    D_sc01_080_8018A20C[AF(arg0, u16, 2)]();
}

void func_sc01_080_8018045C(u8 *o) {
    s32 m;

    if ((AF(o, s32, 0x20) = m = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(m, &D_sc01_080_801AE850);
    func_8001D0E8(m, 0x800, 0x800);
    SetScript(o, &D_sc01_080_8018A044);
    AF(m, s32, 4) |= 0x40;
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8) - AF(AF(o, u8 *, 0x64), s32, 0xF0);
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    AF(o, u16, 2)++;
}

void func_sc01_080_80180528(u8 *o) {
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) - AF(AF(o, u8 *, 0x64), s32, 0xF0);
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
}

void func_sc01_080_8018055C(u8 *arg0) {
    D_sc01_080_8018A214[AF(arg0, u16, 2)]();
}

void func_sc01_080_80180598(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc01_080_801ACC1C);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    SetScript((s32) arg0, (s32) &D_sc01_080_80189D04);
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 4) = 0;
    D_80127190 = (s32) AF(arg0, s16, 0xA);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x40000040);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_080_80180654(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u8, 0xFC) != 0) {
        AF(arg0, s32, 0xDC) = 0x60;
        D_80127190 = (s32) AF(arg0, s16, 0xA);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_080_80180694(u8 *arg0, s32 arg1) {
    s32 temp_v1;

    D_80127190 = (s32) AF(arg0, s16, 0xA);
    temp_v1 = AF(arg0, s32, 0xDC) - 1;
    AF(arg0, s16, 0xA) = (s16) ((u16) AF(arg0, s16, 0xA) + 8);
    AF(arg0, s32, 0xDC) = temp_v1;
    if (temp_v1 == 0) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc01_080_801806DC(void) {
    FeS14s s;

    D_80127188 = 0;
    s.a = 0x72;
    s.x = s.y = s.z = 0;
    s.b = s.c = 0;
    s.e = 0;
    s.f = 0;
    func_8012C750(&s);
}

static inline void dir_80180728(SV8 *c, SV8 *d) {
    c->x = c->y = c->z = 0;
    func_800D20C0(c, d, 1);
}

void func_sc01_080_80180728(u8 *o) {
    u8 unused[16];
    SV8 c;
    SV8 d;
    s16 i;

    ((CV4 *)&D_sc01_080_801C5AC0)->r = ((CV4 *)&D_sc01_080_801C5AC0)->g = 0;
    ((CV4 *)&D_sc01_080_801C5AC0)[1].r = ((CV4 *)&D_sc01_080_801C5AC0)[1].g = 0x10;
    ((CV4 *)&D_sc01_080_801C5AC0)->b = 0;
    ((CV4 *)&D_sc01_080_801C5AC0)[1].b = 0x30;
    func_800233CC(&D_sc01_080_801C5AC0, 0x140);
    for (i = 0; i < 8; i++) {
        D_sc01_080_801C5B00[i][0].r = D_sc01_080_801C5B00[i][0].g = (i << 2) + 4;
        D_sc01_080_801C5B00[i][0].b = (i << 3) + 8;
        D_sc01_080_801C5B00[i][1].r = D_sc01_080_801C5B00[i][1].g = 0;
        D_sc01_080_801C5B00[i][1].b = 0;
        func_800233CC(&D_sc01_080_801C5B00[i][0], 0x280);
    }
    ((CV4 *)&D_sc01_080_801C5D00)->r = 0xE0;
    ((CV4 *)&D_sc01_080_801C5D00)->g = ((CV4 *)&D_sc01_080_801C5D00)->b = 0xC0;
    ((CV4 *)&D_sc01_080_801C5D00)[1].r = ((CV4 *)&D_sc01_080_801C5D00)[1].g = 0;
    ((CV4 *)&D_sc01_080_801C5D00)[1].b = 0;
    func_800233CC(&D_sc01_080_801C5D00, 0x50);
    dir_80180728(&c, &d);
    func_800D23D0(&d);
    {
        s16 y = d.y;
        s16 s = AF(o, s16, 2) + 1;
        AF(o, s16, 0xDC) = 0;
        AF(o, s16, 0x84) = 8;
        D_sc01_080_801C7540 = y - 0x400;
        AF(o, s16, 2) = s;
    }
}

void func_sc01_080_801808B8(u8 *o) {
    s16 i;
    u8 *p;
    u8 *q;

    for (i = 0; i < 3; i++) {
        p = (u8 *)func_801291C0();
        if (p != 0) {
            AF(p, s16, 0) = 0x19;
            AF(p, s16, 0x2C) = 0;
            AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(o, s16, 0xDC) << 5);
            if (++AF(o, s16, 0xDC) >= 0xC0) {
                AF(o, s16, 0xDC) = 0;
            }
        }
    }
    if (AF(o, s32, 0x1C) == 0) {
        func_8012913C(0x14);
        q = (u8 *)func_8012913C(0x14);
        if (q != 0) {
            AF(q, s16, 0x2E) = 0x71;
        }
        q = (u8 *)func_8012913C(0x14);
        if (q != 0) {
            AF(q, s16, 0x2E) = 0xE3;
        }
        AF(o, s32, 0x1C) = 0x10;
        if (D_80127188 != 0) {
            AF(o, s32, 0x1C) = 0x60;
            AF(o, s16, 2)++;
        }
    } else {
        AF(o, s32, 0x1C)--;
    }
}

void func_sc01_080_801809E4(u8 *arg0) {
    s16 i;
    u8 *p;

    if (AF(arg0, s32, 0x1C) != 0) {
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            func_8012913C(0x1A);
        }
        AF(arg0, s32, 0x1C)--;
        for (i = 0; i < 1; i++) {
            p = (u8 *)func_801291C0();
            if (p != 0) {
                AF(p, s16, 0) = 0x19;
                AF(p, s16, 0x2C) = 0;
                AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                    AF(arg0, s16, 0xDC) = 0;
                }
            }
        }
        {
            s16 c = 0xFF;
            for (i = 0; i < 1; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
        {
            s16 c = 0x1FF;
            for (i = 0; i < 1; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
        {
            s16 c = 0x3FF;
            for (i = 0; i < 2; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
    } else {
        {
            s16 c = 0x3FF;
            for (i = 0; i < 2; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
    }
    if (D_80127188 == 3) {
        {
            s16 c = -0x7C01;
            for (i = 0; i < 0x80; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2)++;
    }
}

static inline void dir_80180D54(SV8 *c, SV8 *d) {
    c->x = c->y = c->z = 0;
    func_800D20C0(c, d, 1);
}

void func_sc01_080_80180D54(u8 *o) {
    SV8 c;
    SV8 d;
    s16 i;
    u8 *p;
    u8 *q;
    s32 t;

    dir_80180D54(&c, &d);
    func_800D23D0(&d);
    t = AF(o, s32, 0x1C);
    D_sc01_080_801C7540 = d.y - 0x400;
    if (t != 0) {
        s16 k;
        AF(o, s32, 0x1C) = t - 1;
        k = 0x3FF;
        for (i = 0; i < 1; i++) {
            p = (u8 *)func_801291C0();
            if (p != 0) {
                AF(p, s16, 0) = 0x19;
                AF(p, s16, 0x2C) = k;
                AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(o, s16, 0xDC) << 5);
                if (++AF(o, s16, 0xDC) >= 0xC0) {
                    AF(o, s16, 0xDC) = 0;
                }
            }
        }
    } else if (D_80127188 < 4) {
        if (!(D_800B99DA & 1)) {
            s16 k = 0x3FF;
            for (i = 0; i < 1; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = k;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(o, s16, 0xDC) << 5);
                    if (++AF(o, s16, 0xDC) >= 0xC0) {
                        AF(o, s16, 0xDC) = 0;
                    }
                }
            }
        }
    } else {
        func_8012913C(0x1C);
        q = (u8 *)func_8012913C(0x1C);
        if (q != 0) {
            AF(q, s16, 0x2C) = 1;
        }
        AF(o, s16, 2)++;
    }
}

void func_sc01_080_80180F30(u8 *arg0) {
    D_sc01_080_8018A22C[AF(arg0, u16, 2)]();
}

void func_sc01_080_80180F6C(u8 *arg0) {
    D_sc01_080_8018A240[AF(arg0, u16, 2)]();
}

void func_sc01_080_80180FA8(u8 *o) {
    u8 *s;

    s = AF(o, u8 *, 0x20);
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = D_80127190 - 0x150;
    AF(o, s16, 0xE) = 0;
    func_8001CD50(s, &D_sc01_080_801C5AC0);
    AF(s, s16, 0x1E) = -0x7334;
    AF(s, s16, 0x10) = 0x400;
    AF(s, s32, 4) |= 0x50000000;
    AF(s, s16, 0x14) = AF(o, s16, 0x2E);
    AF(o, s16, 0x2E) = 0x2E;
    AF(o, s16, 2)++;
}

void func_sc01_080_80181040(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0xA) = (s16) (D_80127190 - 0x150);
    temp_v0 = AF(temp_v1, u16, 0x18) + 0x80;
    AF(temp_v1, u16, 0x18) = temp_v0;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    temp_v0_2 = AF(arg0, u16, 0x2E) - 1;
    AF(arg0, u16, 0x2E) = temp_v0_2;
    if ((s16) temp_v0_2 == -1) {
        func_801292C8((s32) arg0);
    }
}

void func_sc01_080_801810A8(u8 *arg0) {
    D_sc01_080_8018A248[AF(arg0, u16, 2)]();
}

void func_sc01_080_801810E4(u8 *o) {
    WMtx m;
    SV8 v;
    SV8 w;
    s16 y;
    s32 z;
    s32 r;
    u16 q;
    s16 h;

    y = D_80127190 - 0x128;
    if (AF(o, s16, 0x2C) != 0) {
        if (D_8012718C - y < 0x628) {
            y += D_8012718C - y - 0x628;
        }
        y -= rand() & (AF(o, s16, 0x2C) & 0x7FF);
        if (y < D_8012718C - 0x9C8) {
            func_801292C8(o);
            return;
        }
    }
    m = D_800AE620;
    z = ((0x9C8 - (D_8012718C - y)) >> 4) + 0x134;
    r = rand();
    RotMatrixY(D_sc01_080_801C7540 + (r & 0x7FF), &m);
    v.x = v.y = 0;
    v.z = z;
    ApplyMatrixSV(&m, &v, &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y = y;
    AF(o, s16, 0xE) = v.z;
    AF(o, s32, 0x10) = v.x << 9;
    q = r;
    if (AF(o, s16, 0x2C) != 0) {
        if (AF(o, s16, 0x2C) & 0x8000) {
            AF(o, s16, 0x16) = (r & 3) - 0xE;
            AF(o, s32, 0x1C) = ((-0x600 - y) >> 5) + 0x12;
        } else {
            AF(o, s32, 0x1C) = 0x1E;
        }
    } else {
        AF(o, s16, 0x16) = (r & 3) - 0xA;
        AF(o, s32, 0x1C) = 0x12;
    }
    AF(o, s32, 0x18) = v.z << 9;
    func_800D20C0(&v, &w, 1);
    func_800D23D0(&w);
    RotMatrixYXZ(&w, AF(o, u8 *, 0x34));
    AF(o, s32, 0x2C) = 0x1000 - ((q & 0x7FF0) >> 4);
    AF(o, s32, 0x30) = 0x88;
    h = q & 0x803C;
    AF(o, s16, 0x28) = h;
    if (h == 0) {
        AF(o, s32, 0x1C) *= 2;
    }
    func_8012931C(o);
    if (AF(o, s16, 0x28) != 0) {
        func_80169A4C(o, AF(o, u8 *, 0x34));
        AF(o, s32, 0x14) += 0xF000;
    } else {
        func_801696D8(o, AF(o, u8 *, 0x34));
        AF(o, s32, 0x14) += 0x8000;
    }
    if (--AF(o, s32, 0x1C) == -1) {
        func_801292C8(o);
    }
    AF(o, u16, 2)++;
}

void func_sc01_080_801813D4(u8 *arg0) {
    D_sc01_080_8018A250[AF(arg0, u16, 2)]();
}

static inline void dir_80181410(u8 *o, SV8 *v, SV8 *r) {
    v->x = AF(o, s16, 6);
    v->y = AF(o, s16, 0xA);
    v->z = AF(o, s16, 0xE);
    func_800D20C0(v, r, 1);
}
static inline void rot_80181410(SV8 *r, WMtx *m) {
    func_800D23D0(r);
    r->z = r->y << 1;
    RotMatrixYXZ(r, m);
}
void func_sc01_080_80181410(u8 *o) {
    SV8 p;
    SV8 q;
    SV8 v;
    SV8 r;
    WMtx m;

    dir_80181410(o, &v, &r);
    rot_80181410(&r, &m);
    if (AF(o, s32, 0x1C) & 1) {
        AF(o, s32, 0x2C) = (rand() & 0x7FF) + 0x600;
    } else {
        AF(o, s32, 0x2C) = 0x500;
    }
    func_801696D8(o, &m);
    AF(o, s32, 0x1C)--;
    if (AF(o, s32, 0x1C) != -1) {
        p.x = AF(o, s16, 6);
        p.y = AF(o, s16, 0xA);
        p.z = AF(o, s16, 0xE);
        func_8012931C(o);
        q.x = AF(o, s16, 6);
        q.y = AF(o, s16, 0xA);
        q.z = AF(o, s16, 0xE);
        if (func_80135168(1, &p, &q) != 0) {
            AF(o, s16, 6) = q.x;
            AF(o, s16, 0xA) = q.y;
            AF(o, s16, 0xE) = q.z;
            AF(o, s32, 0x1C) = 0xC;
            AF(o, s16, 2)++;
        }
    } else {
        func_801292C8(o);
    }
}

void func_sc01_080_8018155C(u8 *arg0) {
    D_sc01_080_8018A258[AF(arg0, u16, 2)]();
}

void func_sc01_080_80181598(u8 *arg0) {
    D_sc01_080_8018A264[AF(arg0, u16, 2)]();
}

static inline void dir_801815D4(SV8 *c, SV8 *d) {
    c->x = c->y = c->z = 0;
    func_800D20C0(c, d, 1);
}
void func_sc01_080_801815D4(u8 *o) {
    SV8 c;
    SV8 d;
    s16 i;
    u8 *p;

    dir_801815D4(&c, &d);
    func_800D23D0(&d);
    D_sc01_080_801C7540 = d.y - 0x400;
    if (!(D_800B99DA & 3)) {
        if (!(D_800B99DA & 0xF)) {
            func_8012913C(0x1B);
        } else {
            s16 k = 0x1FF;
            for (i = 0; i < 1; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = k;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(o, s16, 0xDC) << 5);
                    if (++AF(o, s16, 0xDC) >= 0xC0) {
                        AF(o, s16, 0xDC) = 0;
                    }
                }
            }
        }
    }
}

void func_sc01_080_801816E4(u8 *o) {
    u8 *s;

    s = AF(o, u8 *, 0x20);
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = D_80127190 - 0x154;
    AF(o, s16, 0xE) = 0;
    func_8001CD50(s, &D_sc01_080_801C5CC0);
    AF(s, s16, 0x1E) = -0x7800;
    AF(s, s16, 0x10) = 0x400;
    AF(s, s32, 4) |= 0x50000000;
    AF(o, s16, 0x2E) = 0x1F;
    AF(o, s16, 2)++;
}

void func_sc01_080_80181770(u8 *o) {
    u8 *m = AF(o, u8 *, 0x20);
    s16 t = AF(o, s16, 0x2E)--;

    if (t < 0) {
        func_801292C8(o);
    } else {
        AF(m, CV4 *, 0x20) = D_sc01_080_801C5B00[AF(o, s16, 0x2E) >> 2];
    }
}

void func_sc01_080_801817CC(u8 *o) {
    func_8012931C(o);
    if (AF(o, s16, 0x28) != 0) {
        func_80169A4C(o, AF(o, s32, 0x34));
        AF(o, s32, 0x14) += 0xF000;
    } else {
        func_801696D8(o, AF(o, s32, 0x34));
        AF(o, s32, 0x14) += 0x8000;
    }
    if (--AF(o, s32, 0x1C) == -1) {
        func_801292C8(o);
    }
}

static inline void dir_80181854(u8 *o, SV8 *v, SV8 *r) {
    v->x = AF(o, s16, 6);
    v->y = AF(o, s16, 0xA);
    v->z = AF(o, s16, 0xE);
    func_800D20C0(v, r, 1);
}

static inline void rot_80181854(SV8 *r, WMtx *m) {
    func_800D23D0(r);
    r->z = r->y << 1;
    RotMatrixYXZ(r, m);
}

void func_sc01_080_80181854(u8 *o) {
    SV8 v;
    SV8 r;
    WMtx m;

    dir_80181854(o, &v, &r);
    rot_80181854(&r, &m);
    if (AF(o, s32, 0x1C) & 1) {
        AF(o, s32, 0x2C) = (rand() & 0x7FF) + 0x600;
    } else {
        AF(o, s32, 0x2C) = 0x500;
    }
    func_801696D8(o, &m);
    if (--AF(o, s32, 0x1C) == -1) {
        func_801292C8(o);
    }
}

void func_sc01_080_80181918(u8 *o) {
    u8 unused[0x30];
    s32 r;

    r = rand();
    AF(o, s16, 6) = D_80126B5E + (D_80126B6A << 5) + (r & 0x1FF) - 0xFF;
    AF(o, s16, 0xA) = D_80126B62 - 0x120;
    AF(o, s16, 0xE) = D_80126B66 + (D_80126B72 << 5) + ((u16)r >> 7) - 0xFF;
    AF(o, s32, 0x14) += 0x50000;
    AF(o, s32, 0x1C) = 0x60;
    AF(o, s16, 2)++;
    AF(o, s32, 0x30) = 0x88;
}

void func_sc01_080_801819D0(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *p;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    func_800D20C0(&a, &b, 1);
    func_800D23D0(&b);
    b.z = b.y << 2;
    p = AF(o, u8 *, 0x34);
    if (p != 0) {
        AF(p, SV8, 0x10) = b;
    }
}

void func_sc01_080_80181A70(u8 *o) {
    u8 *w;
    u8 *p;

    w = AF(o, u8 *, 0x20);
    AF(o, s16, 0xA) = -0x680;
    AF(o, s16, 0xE) = 0xF0;
    func_8001CD50(w, &D_sc01_080_801C5D00);
    if (AF(o, s16, 0x2C) == 0) {
        AF(o, s16, 6) = 0;
        AF(w, s16, 0x12) = -0x200;
    } else {
        AF(o, s16, 6) = -0x60;
        AF(w, s16, 0x12) = 0x1A0;
    }
    AF(w, s16, 0x10) = -0x100;
    AF(w, s32, 4) |= 0x50000000;
    p = (u8 *)func_801465C0();
    if (p != 0) {
        func_8001CB6C(p, &D_sc01_080_8018A220, 0x280, 0x180);
        AF(p, u8, 0x27) = 0x4D;
        AF(p, s16, 8) = AF(o, s16, 6);
        AF(p, s16, 0xA) = AF(o, s16, 0xA);
        AF(p, s16, 0xC) = AF(o, s16, 0xE);
        AF(p, s32, 4) |= 0x50000000;
        AF(o, u8 *, 0x34) = p;
    }
    AF(o, s32, 0x2C) = 0x4000;
    AF(o, s32, 0x30) = 0x70;
    AF(o, s16, 2)++;
}

void func_sc01_080_80181B80(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
}

void func_sc01_080_80181B8C(u8 *arg0) {
    if (D_80126B62 < -0x282) {
        AF(arg0, s16, 2) = 2;
    }
}

extern s32 func_8012B8A4();
extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern void func_80028620();

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc01_080_80181BB0(void) {
    s32 a;
    u8 *p;

    a = (func_8012B8A4() - 0x600) & 0xFFF;
    if (a >= 0x800) {
        a = 0xFFF - a;
    }
    p = &D_800A5E94;
    *p = (a * 255) / 2048;
    D_800A5E95 = (a * 204) / 2048;
    D_800A5E96 = (a * 127) / 2048;
    func_80028620(0, p - 0xC);
}

void func_sc01_080_80181C68(u8 *arg0) {
    D_sc01_080_8018A26C[AF(arg0, u16, 2)]();
}

void func_sc01_080_80181CA4(void) {
    SV8 v;
    s32 r;
    s32 y;
    s32 c;

    if (D_80126B9C & 0x8000000) {
        v.x = D_80126B5E;
        v.y = D_80126B62;
        v.z = D_80126B66;
        y = v.y;
        if (y >= -0x202) {
            r = 0;
        } else if (y < -0x601) {
            r = 0x2000;
        } else {
            r = (ratan2(D_800D391C - v.z, v.x - D_800D3918) - 0x400) & 0xFFF;
            r = (-r - 0x400) & 0xFFF;
            if (r > 0xF00 && r < 0xFFF) {
                if (y < -0x500) {
                    r += 0x1000;
                }
            } else if (r > 0 && r < 0x100) {
                if (y < -0x300) {
                    r += 0x1000;
                }
            } else if (y < -0x400) {
                r += 0x1000;
            }
        }
        D_801270D0 = r;
    }
}

extern s32 D_sc01_080_801C7548;
extern s32 D_sc01_080_801C754C;
extern s16 D_sc01_080_8018A278[];

/* r242: the loop's `t += 2` is written on both paths of the body (before the early `continue` and at the end):
   flow counts both sets, so global-alloc gives t s0 and p s1 as the original; jump2's cross-jumping merges the two
   copies into one addiu. Ruled natural source by LuciDin (4 Nov 2026). */
void func_sc01_080_80181D98(void) {
    s32 *p = &D_801270CC;
    s16 *t;
    u8 *r;
    s32 f;

    switch (p[0]) {
    case 0:
        p[0] = 1;
        D_sc01_080_801C7548 = 0;
        D_sc01_080_801C754C = 1;
        break;
    case 1:
        f = D_80126D50;
        p[0] = 1;
        if (f != 0) {
            break;
        }
        if (D_sc01_080_801C7548 == 0x34) {
            /* MATCH-TRICK: call_value cast, the original calls it without its two arguments */
            ((s32 (*)())func_sc01_080_80180174)();
        }
        if (++D_sc01_080_801C7548 >= 0x3C && D_80126B66 >= -0x500 && (D_80126B9C & 0x8000000)) {
            D_sc01_080_801C7548 = 0;
            func_8012C588(0x36, 0);
        }
        break;
    case 2:
        p += 15;
        func_sc01_080_80181CA4();
        t = D_sc01_080_8018A278;
        if (D_80127188 == 4) {
            for (; t[0] != -1; p++) {
                s16 a = t[0];
                if (*p != 0 || D_801270D0 < a) {
                    t += 2;
                    continue;
                }
                r = (u8 *)func_8012C658(0x2C, t[1], 0);
                if (r != 0) {
                    s16 v = t[0];
                    AF(r, s32 *, 0xCC) = p;
                    AF(r, s16, 0xFC) = v + 0x500;
                }
                *p = 1;
                t += 2;
            }
        }
        break;
    }
}

void func_sc01_080_80181F5C(u8 *arg0) {
    func_sc01_080_80181D98();
    if (AF(arg0, s16, 0xFC) == 1) {
        func_8016ED8C((s32) func_sc01_080_8017F268, 0x01000000, (s32) AF(arg0, s16, 0xFE));
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc01_080_80181FAC(u8 *o) {
    s32 d;
    s32 v;
    s32 id;

    if (D_800B99DA & 1) {
        return;
    }
    d = AF(o, s16, 0xFC) - D_801270D0;
    if (d < 0) {
        d = -d;
    }
    v = (0x2BC - d) * 127 / 700;
    if (v < 0) {
        v = 0;
    } else if (v >= 0x80) {
        v = 0x7F;
    }
    id = 0x4A4;
    if (AF(o, s16, 0x70) == 2) {
        id = 0x4A5;
    }
    if (AF(o, s32, 0xDC) == 0) {
        if (d < 0x2BC) {
            func_8002D59C(id, (u16)(v | 0x5000), AF(o, u16, 0x36));
            AF(o, s32, 0xDC) = 1;
        }
    } else if (d < 0x2BC) {
        func_8002D59C(id, (u16)(v | 0x5000), AF(o, u16, 0x36));
        AF(o, s32, 0xDC) = 1;
    } else {
        func_8002D59C(4, id, AF(o, u16, 0x36));
        AF(o, s32, 0xDC) = 0;
    }
}

void func_sc01_080_801820AC(u8 *o) {
    SV8 v;
    s32 a;
    s32 y;
    s32 r;
    s32 x;
    u8 *w;
    s16 m;
    s32 t;
    s32 f;
    s32 tb;
    s32 n;
    s32 dd;
    s32 s;
    s32 r2;

    dd = D_sc01_080_8018A2AC;
    t = AF(o, u16, 0xFC) + dd;
    n = (s16)t;
    AF(o, s16, 0xFC) = t;
    tb = D_sc01_080_8018A2B0[AF(o, s16, 0x70)];
    y = -(n << 10) / 0x2000 - 0x202;
    r = (n * -371) / 0x2000;
    s = tb + 0x328;
    r2 = r + s;
    a = n & 0xFFF;
    x = rcos(a) * r2 >> 12;
    v.z = rsin(a) * r2 >> 12;
    v.x = x;
    v.y = y;
    v.y = y + D_sc01_080_8018A2BC[AF(o, s16, 0x70)];
    AF(o, s16, 6) = x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    f = AF(o, s16, 0xFC);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = -f & 0xFFF;
    w = AF(o, u8 *, 0x20);
    AF(w, u16, 0x10) += D_sc01_080_8018A2A4[AF(o, s16, 0x70)];
    if (func_8012BD14(o) <= 0x10000 && func_8012D714(o, 1) != 0) {
        D_80126B98 = 10;
        D_80126B9A = AF(AF(o, u8 *, 0x20), u16, 0x12);
        m = 2;
        if (AF(o, s16, 0x70) == 2) {
            m = 4;
        }
        D_80126B96 = m | 0x4000;
    }
    func_sc01_080_80181FAC(o);
    if (AF(o, s16, 0xFC) <= 0) {
        func_sc01_080_80182290((s32)o);
    }
}

s32 func_sc01_080_80182290(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012B200();
    AF(arg0, s32, 0x18) = 0xFFF20000;
    AF(arg0, s32, 0x1C) = 0x3C;
    return 0x3C;
}

void func_sc01_080_801822D0(u8 *arg0) {
    D_sc01_080_8018A2F4[AF(arg0, u16, 2)]();
}

void func_sc01_080_8018230C(u8 *o) {
    SV8 c;
    SV8 pts[16];
    s32 w;
    s32 k;
    s32 i;
    s32 ang;
    s32 r;
    s32 col;
    SV8 *b;

    col = 0;
    for (k = AF(o, s32, 0x1C); k >= 0; k--) {
        if (k < AF(o, s32, 0x1C) - 0x10) {
            break;
        }
        b = &c;
        c.x = AF(o, s16, 6);
        c.y = AF(o, s16, 0xA);
        c.z = AF(o, s16, 0xE);
        c.y -= D_sc01_080_8018A302 * k;
        r = D_sc01_080_8018A304 + D_sc01_080_8018A306 * k;
        for (i = 0, ang = 0; i < 16; i++, ang += 0x100) {
            func_8012B0B4(&w, ang, r);
            pts[i].x = b->x + w;
            pts[i].y = b->y;
            pts[i].z = b->z + (w >> 16);
        }
        for (i = 0; i < 16; i++) {
            func_8012D3B4(&pts[i], &pts[(i + 1) & 0xF], col);
        }
        col += D_sc01_080_8018A308;
    }
    if (AF(o, s32, 0x1C) == 0x10) {
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    if (func_8012BEE8(o) != 0) {
        func_sc01_080_801824D0((s32)o);
    }
}

s32 func_sc01_080_801824D0(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x10;
    temp_v0 = AF(temp_v1, s32, 4) & 0x7FFFFFFF;
    AF(temp_v1, s32, 4) = temp_v0;
    return temp_v0;
}

void func_sc01_080_801824FC(u8 *o) {
    s32 m;
    u8 *t;
    u16 z;

    m = func_8012C1B8(o);
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(m, &D_sc01_080_801C0264);
    SetScript(o, &D_sc01_080_80183884);
    AF(o, s16, 2) = 1;
    AF(o, u16, 6) = D_80126CB4;
    AF(o, u16, 0xA) = D_80126CB6;
    z = D_80126CB8;
    AF(o, s32, 8) = 0xFDFE0000;
    AF(o, u16, 0xE) = z;
    if ((u16)(D_80126B5E + 0x2C0) > 0x580 && AF(D_80126B78, s16, 0x12) == 0x800) {
        AF(o, s32, 4) += D_80126B68 * 40 + (rand() & 0x3F) - 0x20;
        AF(o, s32, 0xC) += D_80126B70 * 40;
        if (AF(o, s16, 0xE) >= 0x380) {
            AF(o, s16, 0xE) = 0x380;
        }
    }
    t = AF(o, u8 *, 0x20);
    AF(t, s32, 4) |= 0x80000000;
    AF(o, s32, 0x1C) = D_sc01_080_8018A300;
    func_8002D4C8(0x49F, 0);
}

void func_sc01_080_80182670(u8 *arg0) {
    D_sc01_080_8018A32C[AF(arg0, u16, 2)]();
}

void func_sc01_080_801826AC(u8 *arg0) {
    D_sc01_080_8018A40C[AF(arg0, u16, 2)]();
}

void func_sc01_080_801826E8(u8 *arg0) {
    s32 var_a1;
    void *temp_a1;
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x14) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    func_8012AD80((s32) arg0);
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x10) = (u16) (AF(temp_a1, u16, 0x10) + D_sc01_080_8018A2A4[AF(arg0, s16, 0x70)]);
    func_sc01_080_80181FAC((s32) arg0);
    if (func_8012BEE8((s32) arg0) != 0) {
        if (AF(arg0, s32, 0xDC) != 0) {
            var_a1 = 0x4A4;
            if (AF(arg0, s16, 0x70) == 2) {
                var_a1 = 0x4A5;
            }
            func_8002D59C(4, var_a1, (s32) AF(arg0, u16, 0x36));
        }
        func_8012C218((s32) arg0);
    }
}

void func_sc01_080_801827B4(u8 *o) {
    s32 m;

    m = func_8012C1B8();
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(m, D_sc01_080_8018A2E8[AF(o, s16, 0x70)]);
    func_8001D0E8(AF(o, s32, 0x20), 0xC0, 0x94);
    AF(o, s32, 0x58) = (AF(o, s16, 0x70) == 2 ? (s32)&D_sc01_080_8018A2D8 : (s32)&D_sc01_080_8018A2C8) | 0x40000000;
    AF(o, s16, 0x5C) = 0x800;
    SetScript(o, &D_sc01_080_80183884);
    AF(o, s16, 2) = 1;
    AF(o, s32, 0xDC) = 0;
}

void func_sc01_080_8018287C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 i;
    u8 *q;
    s32 j;

    q = &D_80126B58;
    if (func_8012BEE8() != 0) {
        for (i = 0, j = 0; i < 4; i++, j += 8) {
            a.x = AF(o, s16, 6) + AF(D_sc01_080_8018A30C, s32, j);
            a.y = AF(o, s16, 0xA);
            a.z = AF(o, s16, 0xE) + AF(D_sc01_080_8018A310, s32, j);
            b = a;
            b.y -= 0x18;
            if (func_8012DF34(0, &a, &b) != 0) {
                AF(q, s16, 0x42) = i << 10;
                AF(q, s16, 0x40) = 0xA;
            }
        }
        func_8002D4C8(0x4A7, 0);
        func_8012C588(0x37, o);
        func_8012C218(o);
    }
}

void func_sc01_080_80182990(s32 arg0) {
    void *temp_v1;

    func_8012C658(0x24, 1, arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x1C) = (u16) D_sc01_080_8018A408;
    AF(temp_v1, u16, 0x1A) = (u16) D_sc01_080_8018A408;
    AF(temp_v1, u16, 0x18) = (u16) D_sc01_080_8018A408;
}

void func_sc01_080_80182A00(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc01_080_8018A338);
    SetScript((s32) arg0, (s32) &D_sc01_080_8018A3B0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0xA;
}

s32 func_sc01_080_80182A70(void) {
    return 2;
}

void func_sc01_080_80182A78(u8 *arg0) {
    func_sc01_080_80182EF8();
    D_sc01_080_8018A454[AF(arg0, u16, 2)](arg0);
}

void func_sc01_080_80182AC4(u8 *o) {
    u8 *q;
    s32 i;
    s32 one;

    q = (u8 *)D_sc01_080_801C7560;
    one = 1;
    for (i = 3; i >= 0; i--) {
        D_sc01_080_801C7550[i] = one;
    }
    AF(q, s32, 0x30) = 0x50000000;
    AF(q, s32, 0x20) = AF(q, s32, 0x24) = 0xC0E060;
    AF(q, s32, 0x28) = AF(q, s32, 0x2C) = 0;
    AF(o, s16, 0xFC) = 0;
    AF(o, s16, 0xFE) = 0;
    func_8012AD50(o, q);
}

void func_sc01_080_80182B30(u8 *o) {
    s16 a;
    s16 b;

    func_sc01_080_80182B90(o, AF(o, s16, 0xFC), AF(o, s16, 0xFE));
    a = AF(o, s16, 0xFC) + 1;
    b = AF(o, s16, 0xFE) + 1;
    AF(o, s16, 0xFC) = a;
    AF(o, s16, 0xFE) = b;
    if (b >= 0x10) {
        AF(o, s16, 0xFE) = 0;
    }
}

void func_sc01_080_80182B90(u8 *o, s32 b, s32 c0) {
    SV8 x;
    SV8 y;
    s32 i;
    s16 k;
    s16 c = c0;

    for (i = 0; i < 4; i++) {
        if (D_sc01_080_801C7550[i] != 0 && D_sc01_080_801C7550[(i + 1) & 3] != 0) {
            k = i * 2;
            x = D_sc01_080_8018A414[k];
            y = D_sc01_080_8018A414[k + 1];
            func_sc01_080_80182CB8(o, &x, &y, (s16)b, c);
        }
    }
}

void func_sc01_080_80182CB8(u8 *o, SV8 *x, SV8 *y, s32 b0) {
    WMtx m;
    SV8 d;
    SV8 a;
    SV8 b;
    u8 unused[8];
    SV8 t;
    u8 unused2[8];
    s32 i;
    s32 amp;
    s16 ang = b0;
    SV8 *q;

    func_80017D98(&m);
    m.t[0] = x->x;
    m.t[1] = x->y;
    m.t[2] = x->z;
    d.x = y->x - x->x;
    d.z = y->z - x->z;
    q = D_sc01_080_801C7560;
    b.x = b.y = b.z = 0;
    for (i = 1; i < 17; i++) {
        a = b;
        amp = 8;
        if (i != 16) {
            amp = (rand() & 0x1F) + (rand() & 0x1F) + 8;
        }
        ang++;
        amp = amp * rsin(ang << 9) / 4096;
        t.y = amp;
        b.x = d.x * i / 16;
        b.y = amp;
        b.z = d.z * i / 16;
        q[0] = a;
        q[1] = b;
        q[2] = a;
        q[3] = b;
        q[2].y -= 10;
        q[3].y -= 10;
        func_80017758(q, &m);
        q[2].y += 20;
        q[3].y += 20;
        func_80017758(q, &m);
    }
}

void func_sc01_080_80182EF8(void) {
    s32 i;
    u8 *p;

    for (i = 0; i < 0x60; i++) {
        p = D_801202A0 + i * 0x10C;
        if (AF(p, u16, 0) == 0x14 && AF(p, s16, 0x76) < 3) {
            D_sc01_080_801C7550[AF(p, u16, 0x70) & 3] = 0;
        }
    }
}

void func_sc01_080_801832C0(u8 *arg0);
extern void (*D_sc01_080_8018A468[])();
void func_sc01_080_80182F64(u8 *o) {
    s16 i;

    if (AF(o, s16, 0x70) == 2) {
        func_sc01_080_801832C0(o);
        return;
    }
    D_sc01_080_8018A468[AF(o, u16, 2)](o);
    i = AF(o, s16, 0xFC);
    if (D_sc01_080_801C7550[i] == 0
        || (D_sc01_080_801C7550[(i - 1) & 3] == 0 && D_sc01_080_801C7550[(i + 1) & 3] == 0)) {
        func_8012C098(o);
    }
}

void func_sc01_080_80183034(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc01_080_80183054(u8 *o) {
    u8 *m;
    s32 *q;

    m = (u8 *)func_8012C194();
    AF(o, u8 *, 0x20) = m;
    q = &D_sc01_080_801C7594;
    if (m != 0) {
        switch (AF(o, u16, 0x70) & 0x7F) {
        case 0:
            func_8001CC3C(m, &D_sc01_080_8018A45C, 0, 0);
            func_sc01_080_80183258(o);
            func_8012AD44(o, 2);
            break;
        case 1:
            func_8001CD9C(m, q);
            AF(m, u16, 0x2C) = 0xC020;
            func_800233CC(q, 0x50);
            *q = 0x80A040;
            D_sc01_080_801C7598 = 0;
            func_8012AD44(o, 3);
            break;
        }
        if (AF(o, u16, 0x70) & 0x80) {
            func_8012BF4C(o, 1);
        } else {
            func_8012BF4C(o, 0);
            func_80015954(&D_sc01_080_8018A414[AF(o, s16, 0xFC) * 2], o + 4);
        }
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = 0x1000;
        AF(m, s32, 4) |= 0x50000000;
    } else {
        func_8012C098(o);
    }
}

void func_sc01_080_801831A0(u8 *o) {
    func_sc01_080_80183278(o);
    if (AF(o, s32, 0x1C) != 0 && --AF(o, s32, 0x1C) == 0) {
        func_8012C098(o);
    }
}

void func_sc01_080_801831E8(u8 *o) {
    s32 *q;
    s32 n;

    q = &D_sc01_080_801C7594;
    if (D_800B99DA & 1) {
        *q = 0x80A040;
    } else {
        *q = 0x709030;
    }
    D_sc01_080_801C7598 = 0;
    if (AF(o, s32, 0x1C) != 0) {
        n = AF(o, s32, 0x1C) - 1;
        AF(o, s32, 0x1C) = n;
        if (n == 0) {
            func_8012C098(o);
        }
    }
}

s32 func_sc01_080_80183258(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0xFE) = 0;
    return ((s32 (*)())func_sc01_080_80183278)();
}

void func_sc01_080_80183278(u8 *o) {
    UV4 *p;
    u8 *m;

    AF(o, u16, 0xFE) = (AF(o, u16, 0xFE) + 1) & 1;
    p = &D_sc01_080_8018A478[AF(o, u16, 0xFE)];
    m = AF(o, u8 *, 0x20);
    AF(m, u16, 0x28) = p->x;
    AF(m, u16, 0x2A) = p->y;
    AF(m, u8, 0x27) = p->z;
}

void func_sc01_080_801832C0(u8 *arg0) {
    D_sc01_080_8018A488[AF(arg0, u16, 2)]();
}

void func_sc01_080_801832FC(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc01_080_8018331C(void) {
    s32 i;
    u8 *p;
    u16 min;
    u8 *best;
    u16 d;
    SV8 sv;
    s16 x;
    s16 vol;
    s16 pan;
    u8 *q;

    q = &D_80126B58;
    min = 0x200;
    best = 0;
    for (i = 0; i < 0x60; i++) {
        p = D_801202A0 + i * 0x10C;
        if (AF(p, u16, 0) == 0x329 && AF(p, s16, 0x70) == 0) {
            d = func_80013328(p + 4, q + 4);
            if (min > d) {
                min = d;
                best = p;
            }
        }
    }
    if (best != 0) {
        func_80015978(best + 4, &sv);
        func_8012EFB8(&sv, &sv);
        if ((u16)(sv.x + 0xA0) < 0x141) {
            x = sv.x;
            if (x >= 0) {
                vol = (0xA0 - x) * 111 / 160 + 0x10;
            } else {
                vol = (x + 0xA0) * 111 / 160 + 0x10;
            }
            pan = (sv.x + 0xA0) * 14 / 320 + 1;
            if (vol < 0x10) {
                vol = 0x10;
            } else if (vol >= 0x80) {
                vol = 0x7F;
            }
            if (pan <= 0) {
                pan = 1;
            } else if (pan >= 0x10) {
                pan = 0xF;
            }
            func_8002D4C8(0xB1C, (u16)(vol | ((pan << 8) | 0x3000)));
            return;
        }
    }
    func_8002D4C8(4, 0xB1C);
}
