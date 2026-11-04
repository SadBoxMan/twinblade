#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_030_8017BE9C(void) {
}

void func_sc03_030_8017BEA4(void) {
}

void func_sc03_030_8017BEAC(void) {
}

void func_sc03_030_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_030_80185850[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_030_80185838;
extern void (*D_sc03_030_80185858[])();
extern u8 D_sc03_030_80185844;
extern void (*D_sc03_030_801858D8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_030_8017D9FC(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_030_801858E0[])();
void func_sc03_030_8017DA24(void);
extern void func_800D1EBC();
extern u8 D_sc03_030_80185918;
extern void func_8016EE40();
extern void func_sc03_030_8017E3F4();
extern void (*D_sc03_030_80185960[])();
extern void (*D_sc03_030_80185974[])();
extern void (*D_sc03_030_8018597C[])();
extern void (*D_sc03_030_80186160[])();
extern void func_8012AD50();
extern void (*D_sc03_030_8018686C[])();
extern u8 D_80126CB4;
extern s32 func_80013294();
extern void (*D_sc03_030_80186884[])();
extern void (*D_sc03_030_8018688C[])();
extern void (*D_sc03_030_801868A4[])();
extern void (*D_sc03_030_801869A4[])();
extern void (*D_sc03_030_801869F0[])();
extern void (*D_sc03_030_80186A44[])();

void func_sc03_030_8017BEBC(u8 *arg0) {
    D_sc03_030_80185850[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_030_80185838, 0xFD);
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

void func_sc03_030_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_030_8017C150(u8 *arg0) {
    D_sc03_030_80185858[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_030_80185844, 0x18);
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

void func_sc03_030_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012BEE8();
extern void func_8012AD80();
extern void func_8012C098();
extern u8 D_sc03_030_80186028;
extern s32 func_80128ED8();
extern void func_801292C8();

extern void func_8012C218();
extern void func_sc03_030_80181DC0();
extern void func_80016714();

extern void func_80171990();
extern void func_sc03_030_8017DD08();
extern void (*D_sc03_030_80186494[])();
extern void func_8012C0EC();
extern s32 D_sc03_030_80186694[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc03_030_8017FB04();

extern void (*D_sc03_030_8018593C[])();
extern void func_8014C88C();
extern u8 D_sc03_030_801858EC;
extern void StartRumbleScript();
extern void func_sc03_030_8017DFA0();
extern void func_sc03_030_8017E204();
extern void func_sc03_030_8017E090();
extern void func_sc03_030_8017E194();
extern s32 func_80172664();
extern void func_80171928();
extern s32 func_sc03_030_8017E240();
extern void func_sc03_030_8017DF1C();
extern void (*D_sc03_030_8018594C[])();
extern void (*D_sc03_030_80185958[])();
extern s32 func_sc03_030_8017E1E8();
extern s32 func_801489E8();
extern s32 func_80148A48();
extern u8 D_sc03_030_8018592C;
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
extern s32 D_801269E4;
extern void func_8012A094();
extern s32 D_sc03_030_801E1BB8;
extern void func_sc03_030_8017E7D4();
extern void func_8014BF18();
extern s32 func_8012C658();
extern u8 D_sc03_030_801DF018;
extern u8 D_sc03_030_8118596C;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_sc03_030_8017F018();
extern s16 D_80126CB0;
extern void (*D_sc03_030_8018689C[])();
extern u8 D_sc03_030_80182178;
extern s32 D_sc03_030_80186894[];
extern void func_8012CAE4();
extern u8 D_sc03_030_801B31B0;
extern void func_8012E8A8();
extern void (*D_sc03_030_80186934[])();
extern u8 D_sc03_030_801868CC;
extern s32 func_8012C354();
extern void func_8012B2CC();
extern u8 D_sc03_030_80186950;
extern s32 func_8012CC40();
extern void func_8012C588();
extern s32 func_sc03_030_80180B44();
extern u8 D_sc03_030_80186958;
extern u8 D_sc03_030_80186968;
extern u8 D_sc03_030_80186974;
extern void func_8001CB6C();
extern void func_80128EA8();
extern void (*D_sc03_030_801869C4[])();
extern void (*D_sc03_030_801869CC[])();
extern u8 D_sc03_030_801DD870;
extern u8 D_sc03_030_801DD8F0;
extern s32 func_8012BD14();
extern u8 D_sc03_030_801DD900;
extern u8 D_sc03_030_801DD860;
extern s32 func_sc03_030_80181C08();
extern void func_sc03_030_80181708();
extern u8 D_sc03_030_80186A14;
extern void func_8001CC3C();

extern u8 D_sc03_030_8018687C;
extern u16 D_sc03_030_80186880;

extern u8 D_sc03_030_80185904;
extern u8 D_sc03_030_801858F4;
extern s32 func_80012DBC();

s32 func_sc03_030_8017E1BC(s32 arg0);
extern void func_80146D90();
extern u8 D_sc03_030_801858FC;
extern void func_80147324();

extern s16 D_sc03_030_801E1ABE[];
extern s16 D_sc03_030_801E1AC0;
extern s16 D_sc03_030_801E1AC2;
extern s16 D_sc03_030_801E1AC6;
extern s32 D_sc03_030_801E1AC8;
extern void func_8012C750();
extern void func_sc03_030_8017DF54();

typedef struct { s16 x, y, z, pad; } SV4;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc03_030_8017C66C();
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
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern u8 D_sc03_030_801859FC;

void func_sc03_030_8017C294(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc03_030_8017C66C(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_030_8017C66C(&v[i], &w4[i]);
        if (func_sc03_030_8017C710(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_030_8017C908(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_030_8017C66C(&v[i], &w4[i]);
            func_sc03_030_8017C710(&c, &w4[i], &p[i], arg2);
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

extern u8 D_sc03_030_801DA588;
extern u8 D_sc03_030_801DA5E8;
extern u8 D_sc03_030_801DA648;
extern u8 D_sc03_030_801DA6A8;
extern u8 D_sc03_030_801DA708;
extern u8 D_sc03_030_801DA768;
extern u8 D_sc03_030_801DA7C8;
extern u8 D_sc03_030_801DA828;
extern u8 D_sc03_030_801DA888;
extern u8 D_sc03_030_801DA8E8;
extern u8 D_sc03_030_801DA948;
extern u8 D_sc03_030_801DA9A8;
extern u8 D_sc03_030_801DAA08;
extern u8 D_sc03_030_801DAA68;
extern u8 D_sc03_030_801DAAC8;
extern u8 D_sc03_030_801DAB28;
typedef struct { s32 v[8]; } Row8;
extern Row8 D_sc03_030_801E06C4;
extern Row8 D_sc03_030_801E06E4;
extern Row8 D_sc03_030_801E0704;
extern Row8 D_sc03_030_801E0724;
extern Row8 D_sc03_030_801E0744;
extern s32 D_sc03_030_801E1BB4;
extern s32 D_sc03_030_801E1C40;
extern s32 D_sc03_030_801E1C44;
extern void func_800183E0();
extern void func_sc03_030_8017EB98();
extern u16 D_800AF7BE;
extern u16 D_800B99DA;
extern u8 D_sc03_030_801866AC;
extern u8 D_sc03_030_8018677C;
extern u8 D_sc03_030_801867BC;
extern u8 D_sc03_030_801867DC;
extern u8 D_sc03_030_801867FC;
extern u8 D_sc03_030_8018681C;
extern s32 func_sc03_030_80180054();

typedef union { s32 w; XY s; } UXY;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s32 w[4]; } W16;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_80012F74();
typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 func_8014BF6C();
extern void func_8012B260();
extern void *D_80126B78;
extern s32 D_sc03_030_801859E8[];

void func_sc03_030_8017C66C(SV8 *zero, SV8 *out) {
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

s32 func_sc03_030_8017C710(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc03_030_8017C908(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern s32 rsin();
extern void func_801290DC();
extern u8 D_sc03_030_801869BC;
extern u16 D_sc03_030_801869C0;
extern B8 D_sc03_030_801E0764;
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern void func_8012B23C();
extern s32 D_sc03_030_8018598C;
extern s32 D_sc03_030_80185990;
extern s32 D_sc03_030_80185994;
extern void func_sc03_030_8017F0E8();
extern s32 func_sc03_030_80181824();
extern SV8 D_sc03_030_801869E0;
extern SV8 D_sc03_030_801869E8;
extern void RotTransSV();
extern void RotMatrixZ();
extern void func_sc03_030_80181A60();

extern s32 D_sc03_030_801869AC[];
extern B8 D_sc03_030_801869B4;

extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
extern void RotMatrixZYX();
extern u8 *AllocPrim();
extern WMtx D_800AF648;
extern OtRef D_800A651C[];
extern u16 D_800B9A02[];

extern void (*D_sc03_030_801866A4[])();
extern CV4 D_sc03_030_80186500;
extern CV4 D_sc03_030_8018651C;
extern CV4 D_sc03_030_80186538;
extern CV4 D_sc03_030_80186554;
extern CV4 D_sc03_030_8018658C;
extern CV4 D_sc03_030_801865A8;
extern CV4 D_sc03_030_801865C4;
extern CV4 D_sc03_030_801865E0;
extern CV4 D_sc03_030_80186618;
extern CV4 D_sc03_030_80186634;
extern CV4 D_sc03_030_80186650;
extern CV4 D_sc03_030_8018666C;
extern s32 func_80133784();
extern s32 func_8012E778();
extern void func_8012F568();
extern u16 D_sc03_030_80186A04[];
extern u16 D_sc03_030_80186A08[];
extern u8 D_sc03_030_80186A0C;

extern s16 *D_sc03_030_80186464[];

extern void func_80020DA4();

extern u8 D_80126CAC;
extern WorkHead D_800AF630;
extern void func_80015954();
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern u8 D_sc03_030_80186960;


extern void func_8016F374();
extern s32 D_80126D54;

extern s32 func_8012BE98();
extern void func_8012E88C();
extern s32 func_80143994();

void func_sc03_030_8017E5F8(u8 *p, s16 *q);
extern s16 D_80126942;
extern s16 D_80126944;
extern u8 D_80126B58;
extern s32 func_8017267C();
extern void func_8012DB84();
extern void func_8012931C();
extern B8 D_sc03_030_801E06BC;
extern void func_80171D78();
extern void func_80175414();
extern void func_8016F264();

extern u8 D_sc03_030_801DCCE8;
extern s16 D_sc03_030_80186A00[];
extern void func_8012BF4C();
extern B8 D_sc03_030_80186874;
extern u8 D_sc03_030_801B5900;

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc03_030_801E1AD8;

void func_sc03_030_8017C974(u8 *o) {
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
    func_sc03_030_8017C294(&D_sc03_030_801E1AD8, &r, AF(o, s32, 0x60));
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02[0]];
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

void func_sc03_030_8017D840(u8 *arg0) {
    D_sc03_030_801858D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_030_8017D87C(u8 *arg0) {
    func_sc03_030_8017D9FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_030_8017D8C0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_030_8017D8E4(u8 *arg0) {
    D_sc03_030_801858E0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_030_8017D920(u8 *arg0) {
    func_sc03_030_8017DA24();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_030_8017D960(u8 *arg0) {
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

void func_sc03_030_8017D9DC(void) {
    func_800D1EBC();
}

void func_sc03_030_8017D9FC(void) {
    func_8016EE40((s32) &D_sc03_030_80185904, 0x0B000000);
}

void func_sc03_030_8017DA24(void) {
    func_8016EE40((s32) &D_sc03_030_80185918, 0x01000000);
}

void func_sc03_030_8017DA4C(u8 *arg0) {
    D_sc03_030_8018593C[AF(arg0, u8, 0x216)]();
    func_8014C88C((s32) arg0);
}

void func_sc03_030_8017DA9C(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s16 t;
    AF(o, s16, 0x136) = 2;
    t = AF(p, s16, 0x12);
    AF(o, s16, 0x210) = AF(o, s16, 0x212) = 0x80;
    AF(o, s16, 0x20C) = 0;
    AF(o, s16, 0x20E) = 0;
    AF(o, s32, 0x200) = 0xB0;
    AF(o, s16, 0x132) = t;
    func_8016F374(o);
    func_80171990(o);
}

void func_sc03_030_8017DAFC(u8 *o) {
    B8 v;

    v = D_sc03_030_801E06BC;
    StartRumbleScript(&D_sc03_030_801858EC);
    func_80171D78(o, &v);
    func_sc03_030_8017DFA0(o);
    if (--AF(o, s32, 0x200) == -1) {
        func_80175414();
        func_8016F264();
        func_80171990(o);
    }
}

void func_sc03_030_8017DB98(s32 arg0) {
    StartRumbleScript((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E204(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E194(arg0);
    if (func_80172664(arg0) != 0) {
        func_80171990(arg0);
    }
    if (AF(arg0, s16, 0xE) < -0xE00) {
        func_80171928(arg0);
    }
}

void func_sc03_030_8017DC20(s32 arg0, s32 arg1) {
    func_sc03_030_8017DFA0(arg0, arg1);
    func_sc03_030_8017E240(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E194(arg0);
    if (func_80172664(arg0) == 0) {
        func_sc03_030_8017DF1C(arg0);
        AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) - 1);
    }
}

void func_sc03_030_8017DC88(u8 *arg0) {
    D_sc03_030_8018594C[AF(arg0, u8, 0x216)]();
    func_8014C88C((s32) arg0);
}

void func_sc03_030_8017DCD8(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_030_8017DD08(arg0);
}

void func_sc03_030_8017DD08(s32 arg0) {
    StartRumbleScript((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E204(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E1BC(arg0);
    if (AF(arg0, s16, 0xE) < -0x1120) {
        func_80146D90(arg0);
        func_80171990(arg0);
    }
}

void func_sc03_030_8017DD80(s32 arg0) {
    s16 *temp_s0;

    func_80146D90(arg0);
    if (AF(arg0, s16, 0xE) < -0x1180) {
        AF(arg0, s16, 0xE) = -0x1180;
    }
    StartRumbleScript((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E240(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E1E8(arg0);
    if (AF(arg0, s16, 0xA) >= -0x302) {
        D_sc03_030_801E1ABE[0] = 0x10E;
        temp_s0 = D_sc03_030_801E1ABE - 0x3;
        func_80015978(arg0 + 4, (s32) temp_s0);
        D_sc03_030_801E1AC8 = 0;
        D_sc03_030_801E1AC6 = 0;
        D_sc03_030_801E1AC2 = 0;
        D_sc03_030_801E1AC0 = 0;
        func_8012C750((s32) temp_s0);
        func_sc03_030_8017DF54(arg0);
        func_80171928(arg0);
    }
}

void func_sc03_030_8017DE60(u8 *arg0) {
    D_sc03_030_80185958[AF(arg0, u8, 0x216)]();
    func_8014C88C((s32) arg0);
}

void func_sc03_030_8017DEB0(s32 arg0) {
    StartRumbleScript((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E204(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E194(arg0);
    if (func_80172664(arg0) != 0) {
        func_80171990(arg0);
    }
}

void func_sc03_030_8017DF1C(s32 arg0) {
    AF(arg0, s16, 0x20C) = 0x800;
    AF(arg0, s16, 0x13A) = 1;
    StartRumbleScript((s32) &D_sc03_030_801858F4);
}

void func_sc03_030_8017DF54(s32 arg0) {
    StartRumbleScript((s32) &D_sc03_030_801858FC);
    func_80147324(0x57F);
    AF(arg0, s16, 0x20C) = 0x1000;
    AF(arg0, s16, 0x13A) = 1;
}

void func_sc03_030_8017DFA0(u8 *arg0) {
    u16 *p = &D_800B99DA;
    AF(arg0, s16, 0x20E) = func_80012F74(AF(arg0, s16, 0x20E), 0, 10, 1);
    AF(arg0, s16, 0x12E) = 1;
    AF(arg0, s16, 0x128) = AF(arg0, u16, 0x20E) + rsin((*p & 0x3F) << 6) / 4;
    AF(arg0, s16, 0x12C) = rcos((*p & 0x3F) << 6) / 8;
    if (AF(arg0, s16, 0x13A) != 0) {
        AF(arg0, s16, 0x13A) += (s8)AF(arg0, u8, 0x20D);
        AF(arg0, s16, 0x20C) -= 0xE0;
        if (AF(arg0, s16, 0x13A) < 0) {
            AF(arg0, s16, 0x13A) = 0;
            AF(arg0, s16, 0x20C) = 0;
        }
    }
}

void func_sc03_030_8017E090(u8 *o) {
    u16 v;
    u16 x;

    switch (AF(o, u8, 0xA9)) {
    case 0x41:
        if (AF(o, u16, 0xAA) & 0x8000) {
            AF(o, s16, 0x210) = 0;
        } else if (AF(o, u16, 0xAA) & 0x2000) {
            AF(o, s16, 0x210) = 0xFF;
        } else {
            AF(o, s16, 0x210) = 0x80;
        }
        break;
    case 0x53:
    case 0x73:
        AF(o, s16, 0x210) = AF(o, u8, 0xAE);
        break;
    }
    AF(o, u16, 0xAE) = AF(o, u8, 0xAE) | 0x8000;
    v = func_80012F74(AF(o, s16, 0x212), AF(o, s16, 0x210), 10, 1);
    AF(o, s16, 0x212) = v;
    x = v | (AF(o, u16, 0xAE) & 0xFF00);
    AF(o, u16, 0xAE) = x;
    AF(o, s16, 0x20E) = (x & 0xFF) * 682 / 256;
    AF(o, u8, 0xA9) = 0x73;
}

void func_sc03_030_8017E194(u8 *o) {
    AF(o, u16, 0xAE) |= 0xFF00;
    AF(o, u16, 0xAA) &= 0xFF40;
    AF(o, u16, 0xAC) &= 0xFF40;
}

s32 func_sc03_030_8017E1BC(s32 arg0) {
    AF(arg0, u16, 0xAE) = (u16) (AF(arg0, u16, 0xAE) | 0xFF00);
    return func_sc03_030_8017E1E8(arg0);
}

s32 func_sc03_030_8017E1E8(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xAA) & 0xFF00;
    AF(arg0, u16, 0xAA) = temp_v0;
    AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) & 0xFF00);
    return (s32) temp_v0;
}

void func_sc03_030_8017E204(s32 arg0) {
    AF(arg0, s16, 0x132) = func_80012DBC((s32) AF(arg0, s16, 0x132), 0, 0xA, 1);
}

s32 func_sc03_030_8017E240(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (func_801489E8() != 0) {
        var_v0_2 = AF(arg0, u16, 0x132) + 0x71;
        goto block_4;
    }
    var_v0 = func_80148A48(arg0);
    if (var_v0 != 0) {
        var_v0_2 = AF(arg0, u16, 0x132) - 0x71;
block_4:
        var_v0 = var_v0_2 & 0xFFF;
        AF(arg0, u16, 0x132) = (u16) var_v0;
    }
    return var_v0;
}

void func_sc03_030_8017E2A0(void) {
    func_8016EE40((s32) &D_sc03_030_8018592C, 0x0A000000);
}

void func_sc03_030_8017E2C8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = -0x80;
    func_8012A018((s32) func_sc03_030_8017E3F4, 0);
    func_sc03_030_8017E3F4((s32) &D_80126948);
}

void func_sc03_030_8017E354(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x1F4;
    D_80126968 = 0x71;
    D_8012696A = 0xF1C;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_030_8017E3F4, 1);
    func_8012A094((s32) &D_80126948);
    D_801269E4 = 0x40;
    func_sc03_030_8017E3F4((s32) &D_80126948);
}

void func_sc03_030_8017E3F4(s32 arg0) {
    D_sc03_030_80185960[AF(arg0, u8, 4)]();
}

void func_sc03_030_8017E5F8(u8 *p, s16 *q);
extern s16 D_80126942;
extern s16 D_80126944;
void func_sc03_030_8017E430(u8 *o) {
    SV8 v;
    v.x = 0;
    v.y = D_80126942;
    if (D_80126944 < -0x2A80) {
        v.z = -0x2A80;
    } else {
        v.z = D_80126944;
    }
    func_sc03_030_8017E5F8(o, (s16 *) &v);
}

void func_sc03_030_8017E484(u8 *o) {
    SV8 v;

    AF(o, u16, 0x22) = (AF(o, u16, 0x22) + 0xB) & 0xFFF;
    v.x = 0;
    v.y = D_80126942;
    v.z = D_80126944;
    func_sc03_030_8017E5F8(o, (s16 *) &v);
    if (--AF(o, s32, 0x9C) == -1) {
        func_8012A018(func_sc03_030_8017E3F4, 2);
        AF(o, s32, 0x9C) = 0x40;
    }
}

void func_sc03_030_8017E50C(u8 *o) {
    SV8 v;

    AF(o, s16, 0x22) = func_80012DBC(AF(o, s16, 0x22), 0x800, 0x14, 1);
    v.x = 0;
    v.y = D_80126942;
    v.z = D_80126944;
    func_sc03_030_8017E5F8(o, (s16 *) &v);
    if (--AF(o, s32, 0x9C) == -1) {
        D_80126954 = 0x1F4;
        D_8012695C = 0x4B0;
        D_80126968 = 0x238;
        D_8012696A = 0x800;
        D_8012696C = 0;
        D_80126976 = 0;
        D_80126978 = 0;
        D_8012697A = -0x80;
        func_8012A018((s32) func_sc03_030_8017E3F4, 0);
        func_sc03_030_8017E3F4((s32) &D_80126948);
    }
}

void func_sc03_030_8017E5F8(u8 *p, s16 *q) {
    WMtx m;
    SV4 v;
    SV4 o;

    AF(p, s32, 8) = (s16) func_80012C6C(AF(p, s16, 8), AF(p, s16, 0xC), 0x10);
    AF(p, s32, 0x10) = (s16) func_80012C6C(AF(p, s16, 0x10), AF(p, s16, 0x14), 0x10);
    AF(p, s16, 0x18) = func_80012ABC(AF(p, s16, 0x18), AF(p, s16, 0x20), 0x10);
    AF(p, s16, 0x1A) = func_80012ABC(AF(p, s16, 0x1A), AF(p, s16, 0x22), 0x10);
    AF(p, s16, 0x1C) = func_80012ABC(AF(p, s16, 0x1C), AF(p, s16, 0x24), 0x10);
    AF(p, s16, 0x28) = func_80012C6C(AF(p, s16, 0x28), AF(p, s16, 0x2E), 4);
    AF(p, s16, 0x2A) = func_80012C6C(AF(p, s16, 0x2A), AF(p, s16, 0x30), 4);
    AF(p, s16, 0x2C) = func_80012C6C(AF(p, s16, 0x2C), AF(p, s16, 0x32), 4);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + q[0];
    m.t[1] = AF(p, s16, 0x2A) + q[1];
    m.t[2] = AF(p, s16, 0x2C) + q[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc03_030_8017E790(void) {
    if (D_sc03_030_801E1BB8 == 0) {
        func_8002D4C8(0x5A2, 0);
        D_sc03_030_801E1BB8 = 1;
    }
    func_sc03_030_8017E7D4();
}

void func_sc03_030_8017E7D4(void) {
    Row8 t[5];
    s32 s;

    t[0] = D_sc03_030_801E06C4;
    t[1] = D_sc03_030_801E06E4;
    t[2] = D_sc03_030_801E0704;
    t[3] = D_sc03_030_801E0724;
    t[4] = D_sc03_030_801E0744;
    switch (D_sc03_030_801E1BB4) {
    case 0:
        D_sc03_030_801E1C40 = 1;
        D_sc03_030_801E1C44 = 0;
        D_sc03_030_801E1BB4 = 1;
        break;
    case 1:
        if (--D_sc03_030_801E1C40 == 0) {
            D_sc03_030_801E1C40 = 2;
            s = D_sc03_030_801E1C44 * 6;
            func_800183E0(t[0].v[D_sc03_030_801E1C44]);
            func_800183E0(t[1].v[D_sc03_030_801E1C44]);
            func_800183E0(t[2].v[D_sc03_030_801E1C44]);
            func_800183E0(t[3].v[D_sc03_030_801E1C44]);
            func_800183E0(t[4].v[D_sc03_030_801E1C44]);
            func_sc03_030_8017EB98(&D_sc03_030_801DA588, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA5E8, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA648, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA6A8, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA708, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA768, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA7C8, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA828, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA888, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA8E8, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA948, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DA9A8, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DAA08, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DAA68, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DAAC8, s);
            func_sc03_030_8017EB98(&D_sc03_030_801DAB28, s);
            D_sc03_030_801E1C44 = (D_sc03_030_801E1C44 + 1) & 7;
        }
        break;
    }
}

void func_sc03_030_8017EB98(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

void func_sc03_030_8017EBF8(u8 *arg0) {
    D_sc03_030_80185974[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017EC34(s32 arg0) {
    func_8014BF18(4);
    func_8012C658(0xCA, 0, arg0);
    func_8012C658(0xCA, 1, arg0);
    func_8012C658(0xCA, 2, arg0);
    func_8012C658(0xCA, 3, arg0);
    func_8012AD50(arg0);
}

void func_sc03_030_8017ECA8(void) {
    u8 *b;
    s32 n;

    b = &D_80126B58;
    n = func_8014BF6C();
    if (n & 0xFF) {
        if (func_8017267C(b) != 0) {
            n--;
            n &= 0xFF;
            func_8014BF18(n);
            if (n == 0) {
                func_8012DB84();
            }
        }
    } else if (AF(b, u16, 0) != 0x1A) {
        func_8012DB84();
    }
}

void func_sc03_030_8017ED30(u8 *arg0) {
    D_sc03_030_8018597C[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017ED6C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc03_030_801DF018);
        AF(temp_v0, s32 *, 0x20) = &D_sc03_030_8118596C;
        func_sc03_030_8017F018((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_030_8017EDD4(u8 *o) {
    B8 c;
    s32 r;

    c = D_sc03_030_801E0764;
    r = func_8014BF6C() & 0xFF;
    if (AF(o, s16, 0x70) >= r) {
        AF(o, s32, 4) = D_80126B5C;
        AF(o, s32, 8) = D_80126B60;
        AF(o, s32, 0xC) = D_80126B64;
        func_8012B23C(o);
        AF(o, s32, 0x10) = D_sc03_030_8018598C;
        AF(o, s32, 0x14) = D_sc03_030_80185990;
        AF(o, s32, 0x18) = D_sc03_030_80185994;
        func_8002D4C8(0x580, 0);
        func_8012AD50(o);
    } else {
        func_sc03_030_8017F018(o);
        if (!(D_800B99DA & 3)) {
            func_sc03_030_8017F0E8(o, &c);
        }
    }
}

extern void func_8014C860();

extern B8 D_sc03_030_801E076C;
extern s32 func_8012CBCC();
extern void func_80131E00();
extern void func_8012B21C();

void func_sc03_030_8017EEE0(u8 *o) {
    B8 a;
    B8 b;
    u8 *p;

    a = D_sc03_030_801E076C;
    b = D_sc03_030_801E076C;
    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x10) = (AF(p, u16, 0x10) + 0xE3) & 0xFFF;
    AF(p, u16, 0x14) = (AF(p, u16, 0x14) + 0x71) & 0xFFF;
    if (func_8012CBCC(o) & 0x6000) {
        func_sc03_030_8017F0E8(o, &a);
        func_sc03_030_8017F0E8(o, &b);
        ((s32 (*)())func_80131E00)(o, 0x12); /* MATCH-TRICK: void callee called through an s32 cast, value unused: a call_value sets v0 twice, so sched1 keeps the first call below the addiu s1/s2 (as the original) */
        func_8012B21C(o);
        func_8012BF4C(o, 0x20);
        func_8012AD50(o);
    }
}

void func_sc03_030_8017EFD8(s32 arg0) {
    func_8012AD80(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C098(arg0);
    }
}

void func_sc03_030_8017F018(u8 *arg0) {
    SV8 c;
    u8 *p;
    u8 *s;

    p = AF(arg0, u8 *, 0x20);
    s = D_80126B78;
    AF(p, V16, 0x34) = AF(s, V16, 0x34);
    AF(p, V16, 0x44) = AF(s, V16, 0x44);
    FaceHelper(arg0, D_sc03_030_801859E8[func_8014BF6C() & 0xFF] + AF(arg0, s16, 0x70) * 8, &c);
    AF(arg0, s16, 6) = c.x;
    AF(arg0, s16, 0xA) = c.y;
    AF(arg0, s16, 0xE) = c.z;
    func_8012B260(arg0);
}

void func_sc03_030_8017F0E8(u8 *o, SV8 *d) {
    SV8 v;
    u8 *p;

    v.x = AF(o, u16, 6);
    v.y = AF(o, u16, 0xA);
    v.z = AF(o, u16, 0xE);
    v.x += d->x;
    v.y += d->y;
    v.z += d->z;
    p = ((u8 * (*)()) func_801290DC)(0x25, &v);
    if (p != 0) {
        AF(p, s32, 0x2C) = d->pad;
    }
}

void func_sc03_030_8017F17C(u8 *arg0) {
    D_sc03_030_80186160[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017F1B8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc03_030_80186028;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_030_8017F26C(u8 *arg0) {
    struct { s32 x, y, z, w; } range;
    struct { s32 x, y, z, w; } off;
    u8 *obj;
    u8 *ent;
    s32 r;

    obj = AF(arg0, u8 *, 0x20);
    if (--AF(arg0, s32, 0x1C) == -1) {
        func_8001CC3C(obj, &D_sc03_030_801859FC, 0, 0);
        AF(obj, u8, 0x27) = 0x88;
        AF(obj, s16, 0x1A) = 0x4000;
        AF(obj, s16, 0x18) = 0x4000;
        AF(obj, s32, 4) |= 0x50000040;
        ent = AF(arg0, s32, 0x2C) * 0xC + &D_sc03_030_80186028;
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

void func_sc03_030_8017F5D8(u8 *o) {
    u8 *s;

    AF(o, s32, 0x10) += AF(o, s32, 0x2C);
    AF(o, s32, 0x14) += AF(o, s32, 0x30);
    AF(o, s32, 0x18) += AF(o, s32, 0x34);
    s = AF(o, u8 *, 0x20);
    func_8012931C(o);
    if (func_80128ED8(s, o + 0x24) != 0 || (AF(o, s32, 0x1C) != 0 && --AF(o, s32, 0x1C) == 0)) {
        func_801292C8(o);
    }
}

void func_sc03_030_8017F670(u8 *arg0) {
    D_sc03_030_80186494[AF(arg0, u16, 2)]();
    func_8012C0EC((s32) arg0);
}

void func_sc03_030_8017F6C0(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc03_030_8017F6E0(u8 *o) {
    SV8 sv;
    s32 flag;
    s16 *p;
    s32 *m;
    u8 *r;

    p = D_sc03_030_80186464[AF(o, s16, 0xFC)];
    m = (s32 *)&D_800AF648;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    func_80015978(o + 4, &sv);
    gte_ldv0(&sv);
    gte_rtps();
    gte_stsxy(&sv);
    gte_stflg(&flag);
    if (-D_800AF7BE / 2 < sv.y && sv.y < (D_800AF7BE >> 1) + 0x20 && flag >= 0) {
        if (AF(o, s32, 0x1C) == 0) {
            while (p[3] != 0xFF) {
                SV8 v;
                v.x = AF(o, u16, 6);
                v.y = AF(o, u16, 0xA);
                v.z = AF(o, u16, 0xE);
                v.x += p[0];
                v.y += p[1];
                v.z += p[2];
                r = (u8 *)((s32 (*)())func_801290DC)(0x25, &v);
                if (r != 0) {
                    AF(r, s32, 0x2C) = p[3];
                }
                p += 4;
            }
            AF(o, s32, 0x1C) = AF(o, s32, 0xDC);
        }
        AF(o, s32, 0x1C)--;
    }
}

void func_sc03_030_8017F8BC(u8 *o) {
    CV4 c;
    s32 v;

    D_sc03_030_801866A4[AF(o, u16, 2)]();
    v = ((D_800B99DA & 1) << 2) | 0xA0;
    c.cd = 0;
    c.r = c.g = c.b = v;
    D_sc03_030_80186500 = c;
    D_sc03_030_8018651C = c;
    D_sc03_030_80186538 = c;
    D_sc03_030_80186554 = c;
    D_sc03_030_8018658C = c;
    D_sc03_030_801865A8 = c;
    D_sc03_030_801865C4 = c;
    D_sc03_030_801865E0 = c;
    D_sc03_030_80186618 = c;
    D_sc03_030_80186634 = c;
    D_sc03_030_80186650 = c;
    D_sc03_030_8018666C = c;
}

void func_sc03_030_8017FA6C(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc03_030_80186694[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc03_030_8017FB04((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_030_8017FB04(u8 *o) {
    WorkHead *w = &D_800AF630;
    u8 *m = AF(o, u8 *, 0x20);
    u8 *v;
    XY sxy;
    s32 flag;

    if (D_80126CB0 + 0x300 < AF(o, s16, 0x100)) {
        func_8012C098(o);
        return;
    }
    v = o + 0xFC;
    if (func_80013294(&D_80126CAC, v) < 0x500) {
        gte_SetRotMatrix(&w->wsm);
        gte_SetTransMatrix(&w->wsm);
        gte_ldv0(v);
        gte_rtps();
        gte_stsxy(&sxy);
        gte_stflg(&flag);
        if (flag & 0x80000000) {
            AF(m, s32, 4) |= 0x80000000;
        } else {
            AF(m, s32, 4) &= 0x7FFFFFFF;
            func_80015954(&sxy, o + 4);
        }
    } else {
        AF(m, s32, 4) |= 0x80000000;
    }
}

void func_sc03_030_8017FC50(u8 *arg0) {
    D_sc03_030_8018686C[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017FC8C(s32 arg0, s32 arg1, s32 arg2) {
    if (D_80126CB0 < 0x2800) {
        func_8012AD50(arg0, arg1, arg2);
    }
}

void func_sc03_030_8017FCBC(void) {
    u16 v;
    u16 *p;

    if (!(D_800B99DA & 7)) {
        v = func_sc03_030_801801E8((s32) &D_sc03_030_801866AC, 0x200);
        if (v != 0xFFFF) {
            func_8002D4C8(0x588, (u16) ((0x7F - v * 80 / 512) | 0x1000));
        } else {
            func_8002D4C8(4, 0x588);
        }
    }
    if (D_800B99DA & 7) {
        return;
    }
    p = &D_800AF7BE;
    v = func_sc03_030_80180054(&D_sc03_030_8018677C, *p >> 1);
    if (v != 0xFFFF) {
        func_8002D4C8(0x587, (u16) ((0x7F - v * 80 / (*p >> 1)) | 0x1000));
    } else {
        func_8002D4C8(4, 0x587);
    }
    if (D_800B99DA & 7) {
        return;
    }
    p = &D_800AF7BE;
    v = func_sc03_030_80180054(&D_sc03_030_801867BC, *p >> 1);
    if (v != 0xFFFF) {
        func_8002D4C8(0x583, (u16) ((0x7F - v * 96 / (*p >> 1)) | 0x1000));
    } else {
        func_8002D4C8(4, 0x583);
    }
    if (D_800B99DA & 7) {
        return;
    }
    p = &D_800AF7BE;
    v = func_sc03_030_80180054(&D_sc03_030_801867DC, (s16) *p);
    if (v != 0xFFFF) {
        func_8002D4C8(0x584, (u16) ((0x7F - v * 96 / *p) | 0x1000));
    } else {
        func_8002D4C8(4, 0x584);
    }
    if (D_800B99DA & 7) {
        return;
    }
    p = &D_800AF7BE;
    v = func_sc03_030_80180054(&D_sc03_030_801867FC, (s16) *p);
    if (v != 0xFFFF) {
        func_8002D4C8(0x585, (u16) ((0x7F - v * 96 / *p) | 0x1000));
    } else {
        func_8002D4C8(4, 0x585);
    }
    if (D_800B99DA & 7) {
        return;
    }
    v = func_sc03_030_801801E8((s32) &D_sc03_030_8018681C, 0x100);
    if (v != 0xFFFF) {
        func_8002D4C8(0x586, (u16) ((0x7F - v * 80 / 256) | 0x1000));
    } else {
        func_8002D4C8(4, 0x586);
    }
}

s32 func_sc03_030_80180054(u8 *p, s32 r0) {
    SV8 s[3];
    s16 r;
    u16 best;
    u16 d1;
    u16 d2;

    best = 0xFFFF;
    gte_SetRotMatrix(&D_800AF648);
    gte_SetTransMatrix(&D_800AF648);
    r = r0;
    while (AF(p, s16, 6) == 0 && best != 0) {
        gte_ldv3(&D_80126CAC, p, p + 8);
        gte_rtpt();
        gte_stsxy3(&s[0], &s[1], &s[2]);
        if (s[1].y - r > s[0].y || s[0].y > s[2].y + r) {
            p += 0x10;
            continue;
        }
        if (s[1].y < s[0].y && s[0].y < s[2].y) {
            best = 0;
            continue;
        }
        d1 = (s[1].y - s[0].y >= 0) ? s[1].y - s[0].y : s[0].y - s[1].y;
        d2 = (s[2].y - s[0].y >= 0) ? s[2].y - s[0].y : s[0].y - s[2].y;
        if (d1 > d2) {
            d1 = d2;
        }
        if (best > d1) {
            best = d1;
        }
        p += 0x10;
    }
    return best;
}

s32 func_sc03_030_801801E8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0xFFFF;
    if (AF(var_s0, s16, 6) == 0) {
        do {
            temp_v0 = func_80013294((s32) &D_80126CB4, var_s0);
            temp_v1 = temp_v0 & 0xFFFF;
            if ((temp_v1 < (s16) arg1) && ((u32) temp_v1 < (u32) (var_s1 & 0xFFFF))) {
                var_s1 = temp_v0;
            }
            var_s0 += 8;
        } while (AF(var_s0, s16, 6) == 0);
    }
    return var_s1 & 0xFFFF;
}

void func_sc03_030_80180280(u8 *arg0) {
    D_sc03_030_80186884[AF(arg0, u16, 2)]();
}

void func_sc03_030_801802BC(u8 *o) {
    u8 *p;

    p = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc03_030_801B5900);
    AF(p, s16, 0x18) = 1;
    AF(p, s16, 0x1A) = 1;
    AF(p, s16, 0x1C) = 1;
    AF(p, u16, 0x2C) |= 0x10;
    *(B8 *)&D_sc03_030_8018687C = D_sc03_030_80186874;
    AF(p, void *, 0x80) = &D_sc03_030_8018687C;
    AF(p, u16, 0x2C) |= 0x80;
    SetScript(o, &D_sc03_030_80182178);
    func_8012BF4C(o, 0);
    func_8012AD50(o);
}

void func_sc03_030_80180398(u8 *arg0) {
    s32 pad[2];
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin(AF(arg0, s32, 0x1C) << 5) + 1;
    AF(temp_s0, s16, 0x1C) = temp_v0;
    AF(temp_s0, s16, 0x18) = temp_v0;
    AF(temp_s0, s16, 0x1A) = (s16) (rsin(AF(arg0, s32, 0x1C) << 6) + 1);
    AF(&D_sc03_030_8018687C, u16, 0) = (u16) (AF(&D_sc03_030_8018687C, u16, 0) - 4);
    AF(&D_sc03_030_8018687C, u16, 2) = (u16) (AF(&D_sc03_030_8018687C, u16, 2) - 4);
    D_sc03_030_80186880 -= 4;
    temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 >= 0x20) {
        func_8012C218((s32) arg0);
    }
}

void func_sc03_030_80180458(u8 *arg0) {
    D_sc03_030_8018688C[AF(arg0, u16, 2)]();
}

void func_sc03_030_80180494(u8 *o) {
    if (D_80126D54 == (s32) &D_sc03_030_8018592C) {
        AF(o, SV8, 0xFC) = *(SV8 *) &D_80126CAC;
        func_8012AD50(o);
    }
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc03_030_801804F4(u8 *o) {
    u8 *q = o + 0xFC;
    s16 *p = (s16 *)&D_80126B66;
    s16 v;

    v = AF(o, s16, 0x100) - 8;
    AF(o, s16, 0x100) = v;
    if (v > *p) {
        AF(o, s16, 0x100) = *p;
    }
    AF(o, s16, 0xFC) = 0;
    AF(o, u16, 0xFE) = D_80126B62;
    func_8014C860((u8 *)p - 0xE, q);
}

void func_sc03_030_8018055C(u8 *arg0) {
    D_sc03_030_8018689C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

void func_sc03_030_801805BC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_030_80186894[(AF(arg0, u16, 0x70) & 1)]);
    if ((s16) AF(arg0, u16, 0x70) & 0x8000) {
        AF(AF(arg0, s32, 0x20), u16, 0x14) = (u16) AF(arg0, u16, 0xFC);
    }
    AF(arg0, s16, 2) = 1;
    SetScript((s32) arg0, (s32) &D_sc03_030_80182178);
}

void func_sc03_030_80180660(void) {
}

void func_sc03_030_80180668(u8 *arg0) {
    D_sc03_030_801868A4[AF(arg0, u16, 2)]();
}

void func_sc03_030_801806A4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_030_801B31B0);
    AF(arg0, s16, 2) = 1;
    func_8012E8A8((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_030_80182178);
}

void func_sc03_030_80180714(u8 *o) {
    SV8 v;

    v.x = D_80126B5E;
    v.z = D_80126B66 + 0x1000;
    if (func_8012BE98(o, &v) < 0x90000) {
        func_8012E88C(o);
    } else if (AF(AF(o, u8 *, 0x20), s32, 4) >= 0) {
        func_8012C218(o);
    }
}

void func_sc03_030_801807A0(u8 *arg0) {
    D_sc03_030_80186934[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

void func_sc03_030_80180800(u8 *arg0) {
    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 1) * 0x34) + &D_sc03_030_801868CC)) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc03_030_80182178);
        func_8012E8A8((s32) arg0);
        func_8012B2CC((s32) arg0);
    }
}

void func_sc03_030_80180880(u8 *o) {
    SV8 v;

    v.x = D_80126B5E;
    v.z = D_80126B66;
    if (func_8012BE98(o, &v) < 0x24000) {
        func_8012E88C(o);
        AF(o, s16, 2) = 3;
    }
}

void func_sc03_030_801808E8(void) {
}

void func_sc03_030_801808F0(u8 *o) {
    if (AF(o, u16, 0x70) & 1) {
        AF(o, s16, 2) = 5;
    } else {
        AF(o, s16, 2) = 4;
    }
    AF(o, s32, 0xCC) = func_80143994(o, 1);
    AF(o, s32, 0x10) = AF(o, s32, 0x14) = AF(o, s32, 0x18) = 0;
    AF(o, s32, 0x44) = AF(o, s32, 0x4C) = 0;
    AF(o, s32, 0x48) = 0x18000;
}

void func_sc03_030_80180960(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0xCC);
    if (temp_v0 != NULL) {
        temp_a0 = AF(temp_v0, void *, 0xCC);
        AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x300);
        AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x300);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x3001) {
            AF(temp_a0, u16, 0x18) = 0x3000U;
        }
        if ((s16) AF(temp_a0, u16, 0x1A) >= 0x3001) {
            AF(temp_a0, u16, 0x1A) = 0x3000U;
        }
    }
    if (func_8012CC40((s32) arg0, (s32) &D_sc03_030_80186950) & 0x2000) {
        func_8002D4C8(0x581, 0);
        AF(arg0, s32, 0x1C) = 0xF;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s16, 2) = 6;
        func_8012C588(0xF0, (s32) arg0);
        return;
    }
    func_sc03_030_80180B44((s32) arg0);
}

void func_sc03_030_80180A3C(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0xCC);
    if (temp_v0 != NULL) {
        temp_a0 = AF(temp_v0, void *, 0xCC);
        AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x700);
        AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x700);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x7001) {
            AF(temp_a0, u16, 0x18) = 0x7000U;
        }
        if ((s16) AF(temp_a0, u16, 0x1A) >= 0x7001) {
            AF(temp_a0, u16, 0x1A) = 0x7000U;
        }
    }
    if (func_8012CC40((s32) arg0, (s32) &D_sc03_030_80186958) & 0x2000) {
        func_8002D4C8(0x582, 0);
        AF(arg0, s16, 2) = 2;
        func_8012C658(0xF0, 1, (s32) arg0);
    }
    func_sc03_030_80180B44((s32) arg0);
}

void func_sc03_030_80180B04(s32 arg0) {
    func_8012AD80();
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

s32 func_sc03_030_80180B44(u8 *o) {
    SV8 c;
    SV8 q;
    s16 *b;
    s32 r;

    c.x = D_80126B5E;
    c.y = D_80126B62;
    c.z = D_80126B66;
    q.x = AF(o, u16, 6);
    q.y = AF(o, u16, 0xA);
    q.z = AF(o, u16, 0xE);
    c.y -= 0x20;
    b = (s16 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    if (b[2] + q.x > c.x || b[3] + q.x < c.x || b[6] + q.z > c.z || b[7] + q.z < c.z || b[4] + q.y - 4 > c.y || b[5] + q.y + 4 < c.y) {
        return 0;
    }
    func_8012F568(1, 8, 0, 0, &c, &D_sc03_030_80186960);
    return 1;
}

void func_sc03_030_80180CA0(u8 *arg0) {
    D_sc03_030_801869A4[AF(arg0, u16, 2)]();
}

void func_sc03_030_80180CDC(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) &D_sc03_030_80186968, 0x320, 0x100);
    AF(temp_s0, u8, 0x27) = 0x35;
    AF(temp_s0, s16, 0x1A) = 0x3000;
    AF(temp_s0, s16, 0x18) = 0x3000;
    AF(temp_s0, s16, 0x10) = 0x400;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    func_80128EA8(temp_s0, (s32) (arg0 + 0x24), (s32) &D_sc03_030_80186974);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_030_80180D6C(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc03_030_80180DAC(u8 *arg0) {
    D_sc03_030_801869C4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

void func_sc03_030_80180E0C(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, D_sc03_030_801869AC[AF(o, u16, 0x70) & 1]);
    AF(o, s16, 2) = 1;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 1;
    if (AF(o, u16, 0x70) & 1) {
        *(B8 *)&D_sc03_030_801869BC = D_sc03_030_801869B4;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(o, u8 *, 0x20), B8 *, 0x80) = (B8 *)&D_sc03_030_801869BC;
    }
    SetScript(o, &D_sc03_030_80182178);
}

void func_sc03_030_80180F14(u8 *o) {
    SV8 v;
    u8 *p;

    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x1A) = rsin(AF(o, s32, 0x1C) << 6) + 1;
    if (AF(o, s32, 0x1C) == 0x1E && !(AF(o, u16, 0x70) & 1)) {
        v.x = AF(o, u16, 6);
        v.y = AF(o, u16, 0xA);
        v.z = AF(o, u16, 0xE);
        func_801290DC(0x29, &v);
    }
    if (AF(o, u16, 0x70) & 1) {
        AF(&D_sc03_030_801869BC, u16, 0) = AF(&D_sc03_030_801869BC, u16, 0) - 4;
        AF(&D_sc03_030_801869BC, u16, 2) = AF(&D_sc03_030_801869BC, u16, 2) - 4;
        D_sc03_030_801869C0 -= 4;
    }
    if (++AF(o, s32, 0x1C) >= 0x20) {
        func_8012C218(o);
    }
}

void func_sc03_030_8018101C(u8 *arg0) {
    D_sc03_030_801869CC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

void func_sc03_030_8018107C(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, &D_sc03_030_801DCCE8);
    SetScript(o, &D_sc03_030_801DD860);
    func_8012C588(0x10F, o);
    AF(o, s32, 0x1C) = rand() % 31 + 0x3C;
    AF(o, s16, 2) = 1;
}

void func_sc03_030_8018112C(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = 0xF;
        SetScript(arg0, (s32) &D_sc03_030_801DD870);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_030_80181178(s32 arg0) {
    if ((func_8012BEE8(arg0) != 0) || (func_8012BD14(arg0) <= 0x40000)) {
        AF(arg0, s32, 0x1C) = (s32) ((rand() % 31) + 0x1E);
        SetScript(arg0, (s32) &D_sc03_030_801DD8F0);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_030_80181214(s32 arg0) {
    if ((func_8012BEE8(arg0) != 0) || (func_8012BD14(arg0) <= 0x24000)) {
        AF(arg0, s32, 0x1C) = 0xF;
        SetScript(arg0, (s32) &D_sc03_030_801DD900);
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_030_8018127C(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) ((rand() % 31) + 0x3C);
        SetScript(arg0, (s32) &D_sc03_030_801DD860);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_030_80181300(u8 *arg0) {
    D_sc03_030_801869F0[AF(arg0, u16, 2)]();
}

void func_sc03_030_8018133C(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, 0);
    AF(o, s16, 0xFC) = AF(AF(o, u8 *, 0x64), s16, 0x36);
    AF(o, s16, 0xFE) = 0xC8;
    AF(o, s16, 0x70) = AF(AF(o, u8 *, 0x64), s16, 0x70);
    func_8012C588(0x10B, o);
    AF(o, s16, 2) = 2;
}

void func_sc03_030_801813BC(s32 arg0) {
    if (func_sc03_030_80181C08() != 1) {
        func_sc03_030_80181708(arg0);
        if (AF(AF(arg0, void *, 0x64), u16, 2) == 1) {
            AF(arg0, s16, 2) = 2;
        }
    }
}

void func_sc03_030_8018141C(u8 *o) {
    s16 v;

    if (func_sc03_030_80181C08() != 1) {
        AF(o, u16, 0x100) += D_sc03_030_80186A00[AF(o, s16, 0x102)] * 38;
        v = AF(o, s16, 0x100);
        if (v >= 0xE5) {
            AF(o, s16, 0x100) = 0xE4;
            AF(o, u16, 0x102) ^= 1;
        } else if (v < -0xE4) {
            AF(o, s16, 0x100) = -0xE4;
            AF(o, u16, 0x102) ^= 1;
        }
        func_sc03_030_80181708(o);
        if (AF(AF(o, u8 *, 0x64), u16, 2) == 2) {
            AF(o, s32, 0x1C) = 0x14;
            AF(o, s16, 2) = 3;
            AF(o, s16, 0x34) = 0;
        }
    }
}

void func_sc03_030_801814F4(u8 *o) {
    SV8 a;
    SV8 b;
    u16 st;

    if (func_sc03_030_80181C08(o) == 1) {
        return;
    }
    st = AF(o, u16, 0x34);
    switch (st) {
    case 0:
        AF(o, u16, 0x100) = (AF(o, u16, 0x100) - D_sc03_030_80186A04[AF(o, u16, 0x70) & 1]) & 0xFFF;
        func_sc03_030_80181708(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        func_sc03_030_80181708(o);
        if (AF(AF(o, u8 *, 0x64), u16, 2) != st) {
            break;
        }
        AF(o, s32, 0x1C) = 0xF;
        AF(o, u16, 0x34)++;
    case 2:
        AF(o, u16, 0x100) = (AF(o, u16, 0x100) + D_sc03_030_80186A08[AF(o, u16, 0x70) & 1]) & 0xFFF;
        func_sc03_030_80181708(o);
        a.x = AF(o, u16, 0x3A);
        a.y = AF(o, u16, 0x3E);
        a.z = AF(o, u16, 0x42);
        b.x = AF(o, u16, 6);
        b.y = AF(o, u16, 0xA);
        b.z = AF(o, u16, 0xE);
        if (func_80133784(1, &a, &b) & 0x6000) {
            func_80146A6C(0x10, o, AF(o, s16, 6), AF(o, s16, 0xA), AF(o, s16, 0xE), 0, 0);
            if (func_8012E778(o, 0x9600AA) == 1) {
                func_8002D4C8(0x5E3, 0);
            }
        }
        if (func_8012BD14(o) < 0x901) {
            func_8012F568(1, 8, 0, 0, &b, &D_sc03_030_80186A0C);
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 2) = 2;
        }
        break;
    }
}

void func_sc03_030_80181708(u8 *o) {
    MATRIX m;
    SV8 a;
    SV8 b;
    s32 flag;

    if (func_sc03_030_80181824(o, &m) != 0) {
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        RotTransSV(&D_sc03_030_801869E0, &a, &flag);
        RotMatrixZ(AF(o, s16, 0x100), &m);
        gte_SetRotMatrix(&m);
        RotTransSV(&D_sc03_030_801869E8, &b, &flag);
        func_sc03_030_80181A60(&a);
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
    }
}

s32 func_sc03_030_80181824(u8 *o, WMtx *out) {
    SV8 r;
    WMtx m;
    u8 unused[8];
    u8 *a;
    u8 *s;
    u32 w;

    a = AF(o, u8 *, 0x64);
    s = *(u8 **)(AF(a, u8 *, 0x90) + AF(a, s32, 0x94) * 8);
    if (s == 0) {
        return 0;
    }
    s = (u8 *)((u32)s & 0xFEFFFFFF);
    s += 0x50;
    r.x = AF(s, u16, 6);
    w = AF(s, u32, 0);
    r.y = AF(s, u8, 1) | ((w & 0xF) << 8);
    r.z = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
    func_80020DA4(&r, &m);
    m.t[0] = AF(s, s8, 3);
    m.t[1] = AF(s, s8, 4);
    m.t[2] = AF(s, s8, 5);
    gte_SetRotMatrix(AF(a, u8 *, 0x20) + 0x34);
    gte_ldclmv(&m.m[0][0]);
    gte_rtir();
    gte_stclmv(&out->m[0][0]);
    gte_ldclmv(&m.m[0][1]);
    gte_rtir();
    gte_stclmv(&out->m[0][1]);
    gte_ldclmv(&m.m[0][2]);
    gte_rtir();
    gte_stclmv(&out->m[0][2]);
    gte_SetTransMatrix(AF(a, u8 *, 0x20) + 0x34);
    gte_ldlv0(m.t);
    gte_rtv0tr();
    gte_stlvnl(out->t);
    return 1;
}

void func_sc03_030_80181A60(SV8 *a) {
    u8 *p;
    s32 flag;
    s32 z;

    p = AllocPrim(0x10);
    AF(p, u8, 3) = 3;
    AF(p, s32, 4) = 0xFFFFFF;
    AF(p, u8, 7) = 0x40;
    gte_SetRotMatrix(&D_800AF648);
    gte_SetTransMatrix(&D_800AF648);
    gte_ldv0(a);
    gte_rtps();
    gte_stsxy(p + 8);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (!(flag & 0xFFFFEFFF)) {
        a++;
        gte_ldv0(a);
        gte_rtps();
        gte_stsxy(p + 0xC);
        gte_stflg(&flag);
        if (!(flag & 0xFFFFEFFF)) {
            ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[z])->addr;
            ((PTag *)&D_800A651C[D_800B9A02[0]].ot[z])->addr = (u32)p;
        }
    }
}

s32 func_sc03_030_80181C08(u8 *o) {
    if (AF(o, s16, 0xFC) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(o);
        return 1;
    }
    return 0;
}

void func_sc03_030_80181C44(u8 *arg0) {
    D_sc03_030_80186A44[AF(arg0, u16, 2)]();
}

void func_sc03_030_80181C80(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
    func_8001CC3C(temp_v0, (s32) &D_sc03_030_80186A14, 0x300, 0x1A0);
    AF(temp_v0, u8, 0x27) = 0x49;
    AF(temp_v0, s16, 0x1A) = 0x1000;
    AF(temp_v0, s16, 0x18) = 0x1000;
    AF(temp_v0, u16, 8) = (u16) AF(AF(arg0, void *, 0x64), u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_030_80181D48(u8 *arg0) {
    s32 pad[2];
    void *temp_a1;
    void *temp_v1;

    temp_a1 = AF(arg0, void *, 0x64);
    if (AF(arg0, s16, 0xFC) != AF(temp_a1, s16, 0x36)) {
        func_sc03_030_80181DC0((s32) arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(temp_a1, u16, 6);
    AF(temp_v1, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
    AF(temp_v1, u16, 0xC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
}

void func_sc03_030_80181DC0(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_030_80181DF8(void) {
    return 0x1A;
}
