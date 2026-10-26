#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_004_8017BE9C(void) {
}

void func_sc02_004_8017BEA4(void) {
}

void func_sc02_004_8017BEAC(void) {
}

void func_sc02_004_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_004_80181718[])();
extern void func_8016EDEC();
void func_sc02_004_8017D670(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_004_80181720[])();
extern void func_800D1EBC();
extern void (*D_sc02_004_8018172C[])();
extern void (*D_sc02_004_8018173C[])();
void func_sc02_004_8017D804(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_004_801817F8[])();
extern void (*D_sc02_004_80181804[])();

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern s32 D_80126950;
extern u8 D_sc02_004_801919B0;
extern void func_80174E9C();
extern u8 D_sc02_004_801816EC;
extern void func_800D1724();
extern s16 D_80126B66;

extern s32 func_8012913C();

typedef struct { s16 x, y, z, pad; } SV4;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc02_004_8017C294();

void func_sc02_004_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc02_004_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc02_004_8017C294(&v[i], &w4[i]);
        if (func_sc02_004_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc02_004_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc02_004_8017C294(&v[i], &w4[i]);
            func_sc02_004_8017C338(&c, &w4[i], &p[i], arg2);
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

void func_sc02_004_8017C294(SV8 *zero, SV8 *out) {
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

s32 func_sc02_004_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc02_004_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern s32 func_80128ED8();
extern void func_801292C8();
extern void func_8012931C();
extern s32 func_80135168();

extern u8 D_sc02_004_801817E0;
extern void func_8013C9C4();

void func_sc02_004_8017D9C4(s32 arg0);
extern u8 D_sc02_004_80194F04;
extern u8 D_sc02_004_80194F0C;
extern s32 func_801724EC();
extern s32 func_80172664();
extern s32 func_80171D78();
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern u8 D_sc02_004_801817A4;
extern u8 D_sc02_004_801817B0;

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017C59C);

void func_sc02_004_8017D468(void) {
    func_80174E9C((s32) &D_sc02_004_801919B0);
    D_80126950 = 0x1F4;
}

void func_sc02_004_8017D49C(u8 *arg0) {
    D_sc02_004_80181718[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_004_8017D4D8(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_004_8017D670, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_004_8017D528(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_004_8017D54C(u8 *arg0) {
    D_sc02_004_80181720[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_004_8017D588(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_004_8017D804, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_004_8017D5D4(u8 *arg0) {
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

void func_sc02_004_8017D650(void) {
    func_800D1EBC();
}

void func_sc02_004_8017D670(u8 *arg0) {
    D_sc02_004_8018172C[AF(arg0, u8, 0x214)]();
}

void func_sc02_004_8017D6AC(u8 *arg0) {
    AF(arg0, s32, 0x204) = 0x20;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_004_8017D6C4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_004_8017D6F0(u8 *o) {
    B8 a;
    B8 b;

    a = *(B8 *)&D_sc02_004_80194F04;
    b = *(B8 *)&D_sc02_004_80194F0C;
    if (func_801724EC(o, &b) != 0 && func_80172664(o) == 0) {
        AF(o, s16, 0xAA) = AF(o, s16, 0xAC) = 0x40;
    }
    if (func_80171D78(o, &a) != 0) {
        AF(o, s32, 0x204) = 0x20;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_004_8017D7B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc02_004_801816EC);
        func_8016F0E4((s32) arg0);
    }
}

void func_sc02_004_8017D804(u8 *arg0) {
    D_sc02_004_8018173C[AF(arg0, u8, 0x214)]();
}

void func_sc02_004_8017D840(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_004_8017D854(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_004_8017D874(u8 *arg0) {
    D_sc02_004_801817F8[AF(arg0, u16, 2)]();
}

void func_sc02_004_8017D8B0(u8 *o) {
    if (AF(o, s16, 0xE) > D_80126B66) {
        AF(o, s32, 0x1C) = 0x10;
        AF(o, u16, 2)++;
        func_8013C9C4(&D_sc02_004_801817E0);
        func_8002D4C8(0x4E8, 0);
    }
}

void func_sc02_004_8017D910(u8 *o) {
    s32 i;

    for (i = 0; i < AF(o, s32, 0x1C); i++) {
        func_sc02_004_8017D9C4((s32)o);
    }
    func_sc02_004_8017D9C4((s32)o);
    func_sc02_004_8017D9C4((s32)o);
    AF(o, s32, 0x1C) >>= 1;
    if (AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2)++;
    }
}

void func_sc02_004_8017D99C(u8 *arg0) {
    if (AF(arg0, s16, 0xE) < D_80126B66) {
        AF(arg0, s16, 2) = 0;
    }
}

void func_sc02_004_8017D9C4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012913C(5);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        AF(temp_v0, s16, 0x2E) = (s16) (rand() & 3);
    }
}

void func_sc02_004_8017DA30(u8 *o) {
    u8 *m;
    u32 r;

    m = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0x2E) != 0) {
        func_8001CC3C(m, &D_800D387C, 0, 0);
        AF(m, u8, 0x27) = 0x9C;
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = 0x4000;
        AF(m, s32, 4) |= 0x50000040;
        func_80128EA8(m, o + 0x24, &D_800D3888);
        AF(o, s16, 0x1A) = 0x2C;
    } else {
        func_8001CC3C(m, &D_sc02_004_801817A4, 0, 0);
        AF(m, u8, 0x27) = 0x33;
        func_80128EA8(m, o + 0x24, &D_sc02_004_801817B0);
        AF(o, s16, 0x1A) = 0x1C;
    }
    r = rand();
    AF(o, s16, 0x12) = (r & 0x3F) - 0x20;
    AF(o, s16, 0x16) = 0x20 - ((r >> 4) & 0x3F);
    AF(o, s16, 2)++;
}

void func_sc02_004_8017DB2C(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0x2E) != 0) {
        func_8012931C((s32) arg0);
        AF(arg0, s32, 0x10) -= AF(arg0, s32, 0x10) >> 3;
        AF(arg0, s32, 0x14) -= 0x4000;
        AF(arg0, s32, 0x18) -= AF(arg0, s32, 0x18) >> 3;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.y = AF(arg0, s16, 0xA);
    a.z = AF(arg0, s16, 0xE);
    func_8012931C((s32) arg0);
    b.x = AF(arg0, s16, 6);
    b.y = AF(arg0, s16, 0xA);
    b.z = AF(arg0, s16, 0xE);
    if (func_80135168(0, (s32) &a, (s32) &b) != 0) {
        AF(arg0, s16, 6) = b.x;
        AF(arg0, s16, 0xA) = b.y;
        AF(arg0, s16, 0xE) = b.z;
        AF(arg0, s32, 0x14) = -(AF(arg0, s32, 0x14) >> 1);
    }
    AF(arg0, s32, 0x14) += 0x1C000;
}

void func_sc02_004_8017DC54(u8 *arg0) {
    D_sc02_004_80181804[AF(arg0, u16, 2)]();
}
