#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_030_8017BE9C(void) {
}

void func_sc06_030_8017BEA4(void) {
}

void func_sc06_030_8017BEAC(void) {
}

void func_sc06_030_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_030_80185898[])();
extern void (*D_sc06_030_801858F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_030_8017DA6C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_030_801858F8[])();
void func_sc06_030_8017DA94(void);
extern void func_800D1EBC();
extern void (*D_sc06_030_80185904[])();
extern u8 D_sc06_030_80185910;
extern void func_8016EE40();
extern u8 D_sc06_030_80185914;
extern void func_sc06_030_8017DB58();
extern void (*D_sc06_030_80185920[])();
extern void (*D_sc06_030_80185E2C[])();
extern u8 D_sc06_030_801B4C6C;
extern void (*D_sc06_030_801B4C84[])();
extern u8 D_sc06_030_801B4C8C;
extern void (*D_sc06_030_801B4C98[])();
extern void (*D_sc06_030_801B4D2C[])();
extern void (*D_sc06_030_801B4DA8[])();
extern void (*D_sc06_030_801B4DE4[])();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc06_030_8017BF34();
extern s32 func_8012C218();
extern s32 func_8012BEE8();
extern void func_sc06_030_80180228();
extern s32 func_sc06_030_80180C5C();

void func_sc06_030_8017BEBC(s32 arg0, s32 arg1) {
    func_sc06_030_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc06_030_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc06_030_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc06_030_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc06_030_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

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
extern s32 func_8012C354();
extern u8 D_sc06_030_80182184;
extern u8 D_sc06_030_801B4CF8;
extern u8 D_sc06_030_801B4DB0;
extern void func_sc06_030_80181164();


extern s16 D_80126B9A;
extern void (*D_sc06_030_80185E24[])();
extern s32 func_8012D624();
extern s32 func_8012B8A4();
extern s32 func_8001AAA0();
extern s32 func_80016714();
extern void func_8002A04C();
extern u8 D_sc06_030_80185DA0;
extern u8 D_sc06_030_80185DB8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001CA1C();
extern u8 D_sc06_030_8018F280;
extern void func_8001C214();
extern void func_80143970();
extern s32 func_8012CBCC();
extern u8 D_sc06_030_8018F000;
extern s32 func_sc06_030_801810D0();
extern void func_80171928();
extern void func_80171990();

extern void func_8002931C();
extern void func_80029514();
extern void func_8002AED0();
extern u8 D_sc06_030_80185C2C;
extern u8 D_sc06_030_8019FFA4;
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
void func_sc06_030_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

extern u8 D_sc06_030_80185D14;
extern u8 D_sc06_030_80185D48;
extern u8 D_sc06_030_8018E4E4;
extern u8 D_sc06_030_8019EC8C;
extern void func_8012B2CC();

extern u8 D_sc06_030_80185928;
extern u8 D_sc06_030_80185AB0;
extern s16 D_sc06_030_80185DC8[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

extern u16 D_801202A0;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc06_030_8017DC70();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern u8 D_sc06_030_80185868[];
extern s32 func_8012C750();

s32 func_sc06_030_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc06_030_80185868)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc06_030_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc06_030_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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


void func_sc06_030_8017C068(void) {
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

void func_sc06_030_8017C114(u8 *arg0) {
    D_sc06_030_80185898[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C150);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C43C);

void func_sc06_030_8017C8D0(u8 *obj) {
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

void func_sc06_030_8017D7B0(u8 *arg0) {
    D_sc06_030_801858F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D7EC(u8 *arg0) {
    func_sc06_030_8017DA6C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_030_8017D830(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_030_8017D854(u8 *arg0) {
    D_sc06_030_801858F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D890(u8 *arg0) {
    func_sc06_030_8017DA94();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_030_8017D8D0(u8 *arg0) {
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

void func_sc06_030_8017D94C(void) {
    func_800D1EBC();
}

void func_sc06_030_8017D96C(u8 *arg0) {
    D_sc06_030_80185904[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D9A8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc06_030_8017DA24(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_8002931C(0x03390000);
        func_80029514(0x514);
        func_8002AED0();
        return 1;
    }
    return 0;
}

void func_sc06_030_8017DA6C(void) {
    func_8016EE40((s32) &D_sc06_030_80185910, 0x01000000);
}

void func_sc06_030_8017DA94(void) {
    func_8016EE40((s32) &D_sc06_030_80185914, 0x01000000);
}

void func_sc06_030_8017DABC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_030_8017DB58, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_030_8017DB58((s32) &D_80126948);
}

void func_sc06_030_8017DB58(s32 arg0) {
    D_sc06_030_80185920[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DB94);

void func_sc06_030_8017DC70(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DE08);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DF70);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017E120);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017EEF0);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F0A0);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F268);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F65C);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F98C);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FBA4);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FCF4);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FDDC);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FE9C);

void func_sc06_030_80180058(u8 *arg0) {
    D_sc06_030_80185E24[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_8012D624((s32) arg0, 0x1E, 0x64) != 0)) {
        D_80126B9A = func_8012B8A4((s32) arg0);
    }
}

void func_sc06_030_801800D4(u8 *arg0) {
    D_sc06_030_80185E2C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180110);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8018017C);

void func_sc06_030_801801E8(s32 arg0) {
    func_sc06_030_80180228();
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180228);

s32 func_sc06_030_80180438(void) {
    return func_8001AAA0(0x7C) != 0;
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180458);

void func_sc06_030_8018047C(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

s32 func_sc06_030_8018049C(void) {
    return func_sc06_030_80180C5C() != 0;
}

void func_sc06_030_801804BC(u8 *arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x84);
    }
    func_8002A04C((s32) arg0);
    func_8012C218((s32) arg0);
}

void func_sc06_030_80180508(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_030_80185D14) != 0) {
        temp_v0 = func_8012C1B8();
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, s32, 0xCC) = temp_v0;
        func_8001C214(temp_v0, (s32) &D_sc06_030_8018E4E4);
        AF(temp_v0, s32, 0x20) = (s32) (*(s32 *)&D_sc06_030_80182184);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xC4) = 3;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc06_030_8019EC8C);
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s32 *, 0xBC) = &D_sc06_030_80185D48;
        func_80143970(arg0);
        AF(arg0, s32, 0x48) = 0xFFFE8000;
        func_8012B2CC(arg0);
        AF(arg0, s32, 0x1C) = 0xF;
    }
}

void func_sc06_030_801805F8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a0;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((AF(arg0, s32, 0x1C) = temp_v0 = AF(arg0, s32, 0x1C) - 1) == 0) {
            func_80178B18((s32) arg0, (s32) &D_sc06_030_80185C2C, arg2);
            AF(arg0, u16, 0x34) = 1U;
            SetScript((s32) arg0, (s32) &D_sc06_030_8019FFA4);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            AF(arg0, s16, 2) = 2;
            temp_a0 = arg0 + 0x76;
            func_sc06_030_8017BF08((s32) temp_a0, (s32) temp_a0, 6, 0xD2);
            return;
        }
        if (AF(arg0, s32, 0x94) == 0x22) {
            func_8002D4C8(0xC7C, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_801806D4);

void func_sc06_030_801807B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc06_030_80185DA0);
    SetScript((s32) arg0, (s32) &D_sc06_030_80185DB8);
    AF(arg0, s16, 2) = 1;
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8018081C);

void func_sc06_030_801808F0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x1C) = temp_v0 = AF(arg0, s32, 0x1C) - 1) == 0) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 0x98) = 1;
        func_8002D4C8(0x940, 0, arg2);
    }
}

void func_sc06_030_80180940(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = temp_v0 - 1;
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 <= 0) {
        AF(arg0, s16, 2) = 4;
        func_8002D4C8(0x941, 0);
        return;
    }
    LoadImage((s32) &D_sc06_030_80185AB0, (s32) (D_sc06_030_80185DC8[((temp_v0 - 1) % 10)] + &D_sc06_030_80185928));
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_801809DC);

void func_sc06_030_80180ABC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_030_8018F280);
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s16, 2) = 1;
    func_80143970((s32) arg0);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x400;
    AF(arg0, s32, 0x1C) = 0x78;
}

void func_sc06_030_80180B50(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x300);
    if (func_8012CBCC((s32) arg0) != 0) {
        func_8012C218((s32) arg0);
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
    }
}

void func_sc06_030_80180BBC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_030_8018F000);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u8, 0xC0) = 1;
    func_80143970((s32) arg0);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
    AF(arg0, s32, 0x1C) = 0x78;
}

s32 func_sc06_030_80180C44(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x6F;
    if (arg0 < 0x514) {
        var_v0 = 0x8A;
    }
    return var_v0;
}

s32 func_sc06_030_80180C5C(void) {
    return func_8001AAA0(0x6F);
}

void func_sc06_030_80180C7C(void) {
    func_8016EE40((s32) &D_sc06_030_801B4C6C, 0x01000000);
}

void func_sc06_030_80180CA4(u8 *arg0) {
    D_sc06_030_801B4C84[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180CE0);

void func_sc06_030_80180D28(s32 arg0) {
    if (func_sc06_030_801810D0() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_030_80180D68(void) {
    func_8016EE40((s32) &D_sc06_030_801B4C8C, 0x01000000);
}

void func_sc06_030_80180D90(u8 *arg0) {
    D_sc06_030_801B4C98[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180DCC);

void func_sc06_030_80180ED4(s32 arg0) {
    if (func_sc06_030_801810D0() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180F14);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180FF4);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_801810D0);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181164);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181588);

void func_sc06_030_801818FC(u8 *arg0) {
    D_sc06_030_801B4D2C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181938);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181A80);

void func_sc06_030_80181C30(u8 *arg0) {
    D_sc06_030_801B4DA8[AF(arg0, u16, 2)]();
}

void func_sc06_030_80181C6C(u8 *arg0) {
    D_sc06_030_801B4DE4[AF(arg0, u16, 2)]();
}

void func_sc06_030_80181CA8(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_030_801B4CF8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_030_80182184);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xE00;
        AF(arg0, s16, 0xFC) = 0x300;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_030_80181D50(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_030_801B4DB0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_030_80182184);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_030_80181DD4(u8 *arg0) {
    func_sc06_030_80181164();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}
