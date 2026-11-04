#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_012_8017BE9C(void) {
}

void func_sc03_012_8017BEA4(void) {
}

void func_sc03_012_8017BEAC(void) {
}

void func_sc03_012_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_012_80181B84[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_012_8017D664(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_012_80181B8C[])();
extern void func_800D1EBC();
extern u8 D_sc03_012_80181B98;
extern void func_8016EE40();
extern u8 D_sc03_012_80181BA4;
extern void func_sc03_012_8017D84C();
extern void (*D_sc03_012_80181BB8[])();
extern void (*D_sc03_012_80181BBC[])();
extern void (*D_sc03_012_80181BE0[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D1E28();


extern void func_801292C8();
extern void func_8012931C();
extern s32 func_80128ED8();

extern void func_8013CB84();

extern s32 func_80029504();
extern void func_80029514();
extern void func_80029124();
extern void func_800291A0();
extern s32 func_800291B4();
extern u16 D_800B99DC;
extern u8 D_sc03_012_8017E8A4;
extern void func_sc03_012_8017D780();
extern void func_8013C9C4();
extern u8 D_sc03_012_8018E418;
extern u8 D_sc03_012_8018F458;
extern void func_8001C214();
extern void func_sc03_012_8017DCB4();
extern u8 D_sc03_012_80181B58;
extern void func_800D1724();
extern void func_sc03_012_8017D6B4();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void func_80128EA8();

extern u8 D_sc03_012_8017E474;
extern u8 D_sc03_012_8018CC44;
extern u8 D_sc03_012_8018D3A0;
extern u8 D_sc03_012_8018FB4C;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001D0E8();
extern s32 func_8012C51C();

typedef struct { s16 x, y, z, pad; } SV4;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc03_012_8017C294();

void func_sc03_012_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc03_012_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_012_8017C294(&v[i], &w4[i]);
        if (func_sc03_012_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_012_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_012_8017C294(&v[i], &w4[i]);
            func_sc03_012_8017C338(&c, &w4[i], &p[i], arg2);
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

void func_sc03_012_8017C294(SV8 *zero, SV8 *out) {
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

s32 func_sc03_012_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc03_012_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern u16 D_800B99D8;
extern s32 func_80132EF4();

extern u8 D_sc03_012_80193C90;
extern u8 D_sc03_012_80193C98;
extern s32 D_80126950;
extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;
extern void func_8012A018();

extern u8 D_sc03_012_80193CA0;
extern u8 D_sc03_012_80193CA8;

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u16 D_800B9A02;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc03_012_80194FF8;

void func_sc03_012_8017C59C(u8 *o) {
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
    func_sc03_012_8017BEBC(&D_sc03_012_80194FF8, &r, AF(o, s32, 0x60));
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

void func_sc03_012_8017D468(u8 *arg0) {
    D_sc03_012_80181B84[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_012_8017D4A4(u8 *arg0) {
    func_sc03_012_8017D664();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_012_8017D4E8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_012_8017D50C(u8 *arg0) {
    D_sc03_012_80181B8C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_012_8017D548(u8 *arg0) {
    if (func_80029504() >= 0x3D4) {
        func_80029514(0x3E8);
    } else {
        func_80029514(0x82);
        func_80029124(0xEE, 1);
    }
    func_800291A0(0xCD, (func_800291B4(0xCD) + 1) & 0xFF);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_012_8017D5D0(u8 *arg0) {
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

void func_sc03_012_8017D644(void) {
    func_800D1EBC();
}

void func_sc03_012_8017D664(void) {
    func_8016EE40((s32) &D_sc03_012_80181B98, 0x01000000);
}

void func_sc03_012_8017D68C(void) {
    func_8016EE40((s32) &D_sc03_012_80181BA4, 0x01000000);
}

void func_sc03_012_8017D6B4(void) {
    SV8 a;
    SV8 b;

    *(B8 *)&a = *(B8 *)&D_sc03_012_80193C90;
    *(B8 *)&b = *(B8 *)&D_sc03_012_80193C98;
    D_80126950 = 400;
    D_80126984 = a.x;
    D_80126988 = a.y;
    D_8012698C = a.z;
    D_80126990 = b.x;
    D_80126994 = b.y;
    D_80126998 = b.z;
    func_8012A018(func_sc03_012_8017D84C, 0);
}

void func_sc03_012_8017D780(void) {
    SV8 a;
    SV8 b;

    *(B8 *)&a = *(B8 *)&D_sc03_012_80193CA0;
    *(B8 *)&b = *(B8 *)&D_sc03_012_80193CA8;
    D_80126950 = 400;
    D_80126984 = a.x;
    D_80126988 = a.y;
    D_8012698C = a.z;
    D_80126990 = b.x;
    D_80126994 = b.y;
    D_80126998 = b.z;
    func_8012A018(func_sc03_012_8017D84C, 0);
}

void func_sc03_012_8017D84C(s32 arg0) {
    D_sc03_012_80181BB8[AF(arg0, u8, 4)]();
}

void func_sc03_012_8017D888(void) {
}

void func_sc03_012_8017D890(u8 *arg0) {
    D_sc03_012_80181BBC[AF(arg0, u16, 2)]();
}

void func_sc03_012_8017D8CC(u8 *arg0) {
    s16 s[12];
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001C214(o, &D_sc03_012_8018CC44);
        func_8001D0E8(o, 0x800, 0x800);
        s[3] = 0xBF;
        s[4] = 1;
        AF(arg0, s32, 0x6C) = func_8012C51C(s, arg0);
        s[4] = 2;
        func_8012C51C(s, arg0);
        AF(arg0, s16, 0xE4) = 3;
        AF(arg0, s16, 0xE6) = 4;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, s16, 0xE8) = 0x40;
        func_8002D4C8(0x556, 0);
        AF(arg0, u16, 2) += 1;
        break;
    case 1:
        func_8001C214(o, &D_sc03_012_8018D3A0);
        func_8001D0E8(o, 0x800, 0x800);
        AF(arg0, u16, 6) = AF(AF(arg0, u8 *, 0x64), u16, 6);
        AF(arg0, u16, 0xA) = AF(AF(arg0, u8 *, 0x64), u16, 0xA);
        AF(arg0, u16, 0xE) = AF(AF(arg0, u8 *, 0x64), u16, 0xE);
        AF(arg0, u16, 2) = 5;
        break;
    case 2:
        func_8001C214(o, &D_sc03_012_8018FB4C);
        func_8001D0E8(o, 0x800, 0x800);
        AF(arg0, s16, 0xA) = -0x478;
        AF(arg0, s16, 0xE) = -0x171;
        AF(arg0, s16, 6) = 0;
        AF(arg0, u16, 2) = 6;
        break;
    }
    SetScript(arg0, &D_sc03_012_8017E474);
}

void func_sc03_012_8017DA80(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    temp_v0 = AF(arg0, u16, 0xE8) - 1;
    AF(arg0, u16, 0xE8) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_sc03_012_8017D780();
        AF(arg0, s16, 0xE0) = 1;
        func_8002D4C8(0x555, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v0_2 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
}

void func_sc03_012_8017DB28(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0xE0) == 2) {
        func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc03_012_8018E418);
        func_8001C214(AF(AF(arg0, void *, 0x6C), s32, 0x20), (s32) &D_sc03_012_8018F458);
        func_8002D4C8(0x557, 0);
        AF(arg0, s16, 0xE2) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v0 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
}

void func_sc03_012_8017DBE4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) + 0x18000);
    if (AF(arg0, s16, 0xDE) >= 0x101) {
        AF(arg0, s32, 0xDC) = 0x01000000;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    AF(arg0, s16, 6) = (s16) -(s16) (u16) AF(arg0, s16, 0xDE);
    AF(arg0, s16, 0xA) = (s16) ((rsin(AF(arg0, s16, 0xDE) * 2) / 32) - 0x490);
    func_sc03_012_8017DCB4((s32) arg0);
}

void func_sc03_012_8017DCB4(u8 *o) {
    s32 r;
    s32 inc;
    s32 h;
    s32 step;
    s32 x;
    s32 y;
    s32 m;
    s32 sc;
    s32 w;
    s16 n;
    u16 t;
    u8 *p;
    u8 *q;

    r = D_800B99DC;
    h = AF(o, s16, 0xDE);
    inc = D_800B99D8;
    if (h < 0x10) {
        h = 0x10;
    }
    if (h > 0xB0) {
        h = 0xB0;
    }
    step = h / 16;
    for (x = -h; x < h; x += step) {
        for (y = -0xE0; y < 0xE0; ) {
            w = y + 0x28;
            m = r & 0x1F;
            y = w + m;
            t = AF(o, u16, 0xE4) - 1;
            AF(o, u16, 0xE4) = t;
            if ((t << 16) == 0) {
                AF(o, u16, 0xE4) = m + 8;
                p = (u8 *) func_80132EF4(o, 0x21);
                if (p == 0) {
                    return;
                }
                if (m > 0x10) {
                    sc = 0x8000;
                    n = 7;
                    AF(p, s16, 0x2C) = n;
                } else {
                    sc = ((r & 3) + 5) << 12;
                    n = r / 4 + 3;
                    AF(p, s16, 0x2C) = n;
                }
                q = AF(p, u8 *, 0x20);
                AF(q, s16, 0x18) = AF(q, s16, 0x1A) = AF(q, s16, 0x1C) = sc;
                AF(p, s16, 6) = x;
                AF(p, s16, 0xE) = y;
            }
            r += inc;
            inc++;
        }
    }
}

void func_sc03_012_8017DE18(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
    func_sc03_012_8017DCB4((s32) arg0);
    func_800D1724((s32) &D_sc03_012_80181B58);
}

void func_sc03_012_8017DE90(u8 *arg0) {
    AF(arg0, u16, 6) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xDE);
    AF(arg0, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
}

void func_sc03_012_8017DEB0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), s16, 0xE0) != 0) {
        AF(arg0, s16, 0xE0) = 0x2A;
        AF(arg0, s16, 0xE2) = 0x18;
        AF(arg0, s16, 0xE4) = 0x26;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_012_8017DEF0(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a0;

    temp_v0 = AF(arg0, u16, 0xE4) - 1;
    AF(arg0, u16, 0xE4) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_sc03_012_8017D6B4();
    }
    temp_v0_2 = AF(arg0, u16, 0xE0) - 1;
    AF(arg0, u16, 0xE0) = temp_v0_2;
    if ((s16) temp_v0_2 < 4) {
        AF(arg0, u16, 0xE2) = 0x10U;
    }
    if ((s16) AF(arg0, u16, 0xE0) < 2) {
        AF(arg0, u16, 0xE2) = 8U;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xE2));
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x10) >= 0x401) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_012_8017DFBC(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0xE0) = 2;
}

void func_sc03_012_8017DFCC(u8 *arg0) {
    D_sc03_012_80181BE0[AF(arg0, u16, 2)]();
}

void func_sc03_012_8017E008(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_800D387C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x9C;
    func_80128EA8((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_800D3888);
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0xFFA40000;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_012_8017E090(s32 arg0, s32 arg1) {
    func_8012931C(arg0, arg1);
    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_801292C8(arg0);
    }
}

void func_sc03_012_8017E0D4(void) {
    func_8013CB84();
}

s32 func_sc03_012_8017E0F4(void) {
    return 0x23;
}
