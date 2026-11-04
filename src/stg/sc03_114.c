#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_114_8017BE9C(void) {
}

void func_sc03_114_8017BEA4(void) {
}

void func_sc03_114_8017BEAC(void) {
}

void func_sc03_114_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_114_8018247C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_114_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_114_80182484[])();
void func_sc03_114_8017CF98(void);
extern u8 D_sc03_114_80182490;
extern void func_8016EE40();
extern u8 D_sc03_114_8018249C;
extern void func_sc03_114_8017D008();
extern void (*D_sc03_114_801824A0[])();
extern void (*D_sc03_114_80183228[])();
extern void (*D_sc03_114_80183254[])();
extern void (*D_sc03_114_80183264[])();

extern void func_8012931C();
extern void func_801292C8();
extern void func_sc03_114_8017E270();
extern void func_sc03_114_8017E2EC();
extern s32 func_sc03_114_8017E94C();
extern s32 func_801290DC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern u8 D_sc03_114_80183140;
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc03_114_80182450;
extern void func_800D1724();
extern u8 D_sc03_114_80182F88;
extern u8 D_sc03_114_80183050;
extern u8 D_sc03_114_801A5EFC;
extern u8 D_sc03_114_801A614C;
extern void func_800183E0();
extern void func_sc03_114_8017D740();
extern s32 D_sc03_114_8018325C[];
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012AD50();
extern void func_8012C098();

extern s32 func_80012ABC();

extern u8 D_sc03_114_80182BD0;
extern u8 D_sc03_114_80182908;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern s32 D_800AF648[];
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];
extern u8 *g_PrimNext;
extern s32 RotMatrixZ();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;

void func_sc03_114_8017BEBC(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02];
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

void func_sc03_114_8017CD9C(u8 *arg0) {
    D_sc03_114_8018247C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_114_8017CDD8(u8 *arg0) {
    func_sc03_114_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_114_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_114_8017CE40(u8 *arg0) {
    D_sc03_114_80182484[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_114_8017CE7C(u8 *arg0) {
    func_sc03_114_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_114_8017CEBC(u8 *arg0) {
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

s32 func_sc03_114_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(2);
        return 1;
    }
    return 0;
}

void func_sc03_114_8017CF70(void) {
    func_8016EE40((s32) &D_sc03_114_80182490, 0x01000000);
}

void func_sc03_114_8017CF98(void) {
    func_8016EE40((s32) &D_sc03_114_8018249C, 0x01000000);
}

void func_sc03_114_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_80126958 = 0x4B0;
    func_sc03_114_8017D008((s32) &D_80126948);
}

void func_sc03_114_8017D008(s32 arg0) {
    D_sc03_114_801824A0[AF(arg0, u8, 4)]();
}

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
extern u8 D_80126B58;
extern u8 D_80126940;
extern u8 D_sc03_114_801824A4[];
extern s32 func_80148800();

void func_sc03_114_8017D044(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_114_801824A4)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc03_114_8017D0E4((s32) arg0, (s32) &v);
}

void func_sc03_114_8017D0E4(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x40) = -0x38D;
    AF(arg0, s32, 0x44) = -0x44E;
    AF(arg0, s32, 0x4C) = -0x2ED;
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x50) = -0xD8;
}

extern s32 func_8012C51C();
extern void func_800233CC();
extern void func_8001CA88();
extern void func_8001C2C4();
extern void func_80143994();
extern u8 D_sc03_114_801A9678;
extern u8 D_sc03_114_801A9679;
extern u8 D_sc03_114_801A967A;
extern u8 D_sc03_114_801A967C;
extern u8 D_sc03_114_801A967D;
extern u8 D_sc03_114_801A967E;
extern u8 D_sc03_114_80196BD0;
extern u8 D_sc03_114_801824A8;
extern u8 D_sc03_114_8019A0D0;
extern u8 D_sc03_114_80182840;
extern u8 D_sc03_114_8019D894;
extern u8 D_sc03_114_801830B0;
extern u8 D_sc03_114_801A4CC0;
extern u8 D_sc03_114_80182F00;

void func_sc03_114_8017D110(u8 *arg0) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s32 next;
    u8 *script;
    u8 *anim;
    s32 rot;
    s32 r;

    if (AF(arg0, s16, 0x70) & 0x8000) {
        d.kind = 0x336;
        d.flags = 0;
        d.unkC = 0;
        d.unkE = 0;
        d.unk10 = 0;
        d.y = -0x202;
        if (AF(arg0, s32, 0xCC) == 0) {
            d.y = -0x260;
            d.unk8 = 0;
            d.x = 0;
            d.z = 0x318;
            AF(arg0, s32, 0xCC) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xD0) == 0) {
            d.unk8 = 1;
            d.x = 0x70;
            d.y = -0x202;
            d.z = 0x1E0;
            AF(arg0, s32, 0xD0) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xD4) == 0) {
            d.unk8 = 2;
            d.x = 0;
            d.y = -0x202;
            d.z = 0x140;
            AF(arg0, s32, 0xD4) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xD8) == 0) {
            d.unk8 = 3;
            d.x = 0x40;
            d.y = -0x202;
            d.z = -0x320;
            AF(arg0, s32, 0xD8) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xEC) == 0) {
            d.unk8 = 4;
            d.x = -9;
            d.y = -0x2A6;
            d.z = 0x304;
            AF(arg0, s32, 0xEC) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xF0) == 0) {
            d.unk8 = 5;
            d.x = 9;
            d.y = -0x2A6;
            d.z = 0x304;
            AF(arg0, s32, 0xF0) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xF4) == 0) {
            d.unk8 = 6;
            d.y = -0x2AC;
            d.x = 0;
            d.z = 0x2F0;
            AF(arg0, s32, 0xF4) = func_8012C51C(&d, arg0);
        }
        if (AF(arg0, s32, 0xCC) != 0 && AF(arg0, s32, 0xD0) != 0 && AF(arg0, s32, 0xD4) != 0 &&
            AF(arg0, s32, 0xD8) != 0 && AF(arg0, s32, 0xEC) != 0 && AF(arg0, s32, 0xF0) != 0 &&
            AF(arg0, s32, 0xF4) != 0) {
            u8 *p = &D_sc03_114_801A9678;
            *p = 0xF0;
            D_sc03_114_801A967A = 0xA0;
            D_sc03_114_801A9679 = 0xA0;
            D_sc03_114_801A967D = 0;
            D_sc03_114_801A967C = 0;
            D_sc03_114_801A967E = 0;
            func_800233CC(p, 0xB);
            AF(arg0, u16, 2)++;
        }
        return;
    }
    r = func_8012C1B8();
    AF(arg0, s32, 0x20) = r;
    if (r == 0) {
        return;
    }
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        anim = &D_sc03_114_80196BD0;
        script = &D_sc03_114_801824A8;
        rot = 0;
        next = 5;
        break;
    case 1:
        anim = &D_sc03_114_8019A0D0;
        script = &D_sc03_114_80182840;
        rot = 0xC0;
        next = 6;
        break;
    case 2:
        anim = &D_sc03_114_8019D894;
        script = &D_sc03_114_801830B0;
        rot = 0x800;
        next = 7;
        break;
    case 3:
        anim = &D_sc03_114_801A4CC0;
        script = &D_sc03_114_80182F00;
        rot = 0x800;
        next = 8;
        break;
    case 4:
    case 5:
        next = 9;
        func_8001CA88(AF(arg0, s32, 0x20), &D_sc03_114_801A9678);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
        AF(AF(arg0, s32, 0x20), u16, 0x2E) = 0xC010;
        break;
    case 6:
        next = 10;
        func_8001C2C4(AF(arg0, s32, 0x20));
        AF(AF(arg0, s32, 0x20), s16, 0x10) = -0xC0;
        break;
    }
    if (AF(arg0, s16, 0x70) < 4) {
        func_8001C214(AF(arg0, s32, 0x20), anim);
        SetScript(arg0, script);
        func_80143994(arg0, 0x3000);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = rot;
    }
    AF(arg0, s16, 2) = next;
}

typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;

extern s32 GetPadPressedDir();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B368();
extern void func_8017B490();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc03_114_801830F0;
extern u8 D_sc03_114_80183110;
extern u8 D_sc03_114_80183120;
extern u8 D_sc03_114_80182AB0;
extern u8 D_sc03_114_80182B60;
extern u8 D_sc03_114_8019A6CC;

void func_sc03_114_8017D518(u8 *o) {
    u8 *p;

    if ((GetPadPressedDir(0) & 0x840) && func_800CF8B4() != 0) {
        AF(o, s16, 2)++;
        return;
    }
    p = AF(o, u8 *, 0xCC);
    if ((u8)func_80029178(0x125) != 0) {
        func_80029124(0x125, 0);
        func_8017B368(AF(o, u8 *, 0xCC), &D_sc03_114_801830F0);
    }
    if ((u8)func_80029178(0x126) != 0) {
        func_80029124(0x126, 0);
        func_8017B368(AF(o, u8 *, 0xCC), &D_sc03_114_80183110);
    }
    if ((u8)func_80029178(0x127) != 0) {
        func_80029124(0x127, 0);
        func_8017B490(AF(o, u8 *, 0xCC), &D_sc03_114_80183120);
    }
    if ((u8)func_80029178(0x128) != 0) {
        func_80029124(0x128, 0);
        AF(AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x64), u8 *, 0xD8), u8 *, 0xF8) = &D_sc03_114_80182F88;
    }
    if ((u8)func_80029178(0x129) != 0) {
        func_80029124(0x129, 0);
        AF(AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x64), u8 *, 0xD4), u8 *, 0xF8) = &D_sc03_114_80182AB0;
    }
    if ((u8)func_80029178(0x12A) != 0) {
        func_80029124(0x12A, 0);
        AF(AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x64), u8 *, 0xD4), u8 *, 0xF8) = &D_sc03_114_80182B60;
    }
    if ((u8)func_80029178(0x12B) != 0) {
        func_80029124(0x12B, 0);
        func_800183E0(&D_sc03_114_8019A6CC);
    }
    if (func_801789AC(p) != 0) {
        func_80178D18(p);
        AF(o, s16, 2)++;
    }
}

void func_sc03_114_8017D704(u8 *arg0) {
    D_sc03_114_80183228[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017D740(s32 arg0) {
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 & 0x8000) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), temp_v0 & 0xFFF, 4);
    }
    temp_a1 = AF(arg0, s32, 0xF8);
    if ((temp_a1 != 0) && (AF(arg0, s32, 0x90) != temp_a1)) {
        SetScript(arg0, temp_a1);
        AF(arg0, s32, 0xF8) = 0;
    }
}

void func_sc03_114_8017D7C8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD4), s16, 0x10A) = -0x7020;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD4), s32, 0xF8) = &D_sc03_114_80182BD0;
}

void func_sc03_114_8017D7F8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD4), s32, 0xF8) = &D_sc03_114_80182908;
}

void func_sc03_114_8017D814(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    func_80029124(0x125, 0);
    func_80029124(0x126, 0);
    func_80029124(0x127, 0);
    func_80029124(0x128, 0);
    func_80029124(0x129, 0);
    func_80029124(0x12A, 0);
    func_80029124(0x12B, 0);
    func_80029124(0x12C, 0);
    func_80029124(0x130, 0);
    func_80178B18((s32) arg0, (s32) &D_sc03_114_80183140);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_114_8017D8DC(u8 *arg0) {
    func_800D1724((s32) &D_sc03_114_80182450);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_114_8017D920(void) {
}

extern u8 D_sc03_114_80182A60;
extern u8 D_sc03_114_80182C58;
extern u8 D_sc03_114_80182E58;
extern u8 D_sc03_114_801A1F84;
extern u8 D_sc03_114_801A1A64;
extern u8 D_sc03_114_801A1CF4;
extern s32 SetScript();
extern s32 rand();

extern void func_8001CD9C();
extern s32 func_8012C194();
extern u8 D_sc03_114_801A96B8;
s32 func_sc03_114_8017E014(s32 arg0, s32 arg1);
extern u16 D_800B99DA;
extern void func_sc03_114_8017E070();
extern void func_800139C8();
extern void func_8001382C();
extern SV8 D_sc03_114_8018326C;
extern SV8 D_sc03_114_80183274;
extern s32 D_sc03_114_80183280;
extern s32 D_sc03_114_80183284;
s32 func_sc03_114_8017E918(s32 arg0, s32 arg1, s32 arg2);

extern void func_80017738();
extern u8 D_sc03_114_80182640;
extern u8 D_sc03_114_80182778;

void func_sc03_114_8017D928(u8 *o) {
    u8 *s = AF(o, u8 *, 0x90);

    if (s == &D_sc03_114_801824A8) {
        if (AF(o, s32, 0x1C) != 0 && --AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0x98) = 1;
        }
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x98) = 0;
            AF(o, s32, 0x1C) = 0x14;
        }
        if ((u8) func_80029178(0x12C)) {
            SetScript(o, &D_sc03_114_80182640);
            AF(o, s32, 0x1C) = 0;
        }
    } else if (s == &D_sc03_114_80182640) {
        if ((u8) func_80029178(0x130)) {
            SetScript(o, &D_sc03_114_80182778);
        } else if (!(u8) func_80029178(0x12C)) {
            SetScript(o, &D_sc03_114_801824A8);
        }
    }
}

void func_sc03_114_8017DA28(void) {
}

void func_sc03_114_8017DA30(u8 *o) {
    s32 v;

    if (AF(o, s16, 0x98) == 0) {
        if (AF(o, s32, 0x90) == (s32)&D_sc03_114_80182908) {
            SetScript((s32)o, (s32)&D_sc03_114_80182A60);
            AF(o, s32, 0xF8) = 0;
        } else if (AF(o, s32, 0x90) == (s32)&D_sc03_114_80182BD0) {
            SetScript((s32)o, (s32)&D_sc03_114_80182C58);
            AF(o, s32, 0xF8) = 0;
            func_800183E0((s32)&D_sc03_114_801A1F84);
        } else if (AF(o, s32, 0x90) == (s32)&D_sc03_114_80182C58) {
            SetScript((s32)o, (s32)&D_sc03_114_80182E58);
            AF(o, s32, 0xF8) = 0;
        }
    }
    if ((AF(o, s32, 0x90) != (s32)&D_sc03_114_80182C58) && (AF(o, s32, 0x90) != (s32)&D_sc03_114_80182E58)) {
        if (AF(o, s32, 0x1C) == 0) {
            func_800183E0((s32)&D_sc03_114_801A1A64);
            v = (rand() & 0x1F) + 0xF;
        } else {
            if (AF(o, s32, 0x1C) == 2) {
                func_800183E0((s32)&D_sc03_114_801A1CF4);
            }
            v = AF(o, s32, 0x1C) - 1;
        }
        AF(o, s32, 0x1C) = v;
    }
    func_sc03_114_8017D740((s32)o);
}

void func_sc03_114_8017DB74(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    if ((AF(arg0, s32, 0x90) == &D_sc03_114_80182F88) && (AF(arg0, s16, 0x98) == 0)) {
        SetScript((s32) arg0, (s32) &D_sc03_114_80183050);
        AF(arg0, s32, 0xF8) = 0;
    }
    temp_v1 = AF(arg0, s32, 0x1C);
    if (temp_v1 == 0) {
        func_800183E0((s32) &D_sc03_114_801A5EFC);
        var_v0 = (rand() & 0x1F) + 0x14;
    } else {
        if (temp_v1 == 2) {
            func_800183E0((s32) &D_sc03_114_801A614C);
        }
        var_v0 = AF(arg0, s32, 0x1C) - 1;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    func_sc03_114_8017D740((s32) arg0);
}

void func_sc03_114_8017DC38(u8 *o) {
    s32 n;

    if ((u8) func_80029178(0x130)) {
        n = AF(o, s32, 0x1C);
        if (n < 0x15) {
            AF(o, s32, 0x1C) = n + 1;
            if (n % 3 == 0) {
                AF(o, s16, 6)++;
            }
        }
    }
}

void func_sc03_114_8017DCC0(u8 *o) {
    QuadArg q;

    q.p[0].x = q.p[2].x = -0x2A;
    q.p[1].x = q.p[3].x = 0x2A;
    q.p[0].y = q.p[1].y = -0x2C;
    q.p[2].y = q.p[3].y = 0x2C;
    q.c[1].r = q.c[1].g = q.c[1].b = q.c[0].r = q.c[0].g = q.c[0].b = 0xA0;
    q.p[0].z = q.p[1].z = q.p[2].z = q.p[3].z = 0;
    q.c[3].r = q.c[3].g = q.c[3].b = q.c[2].r = q.c[2].g = q.c[2].b = 0;
    q.code = 0x60000000;
    func_80017738(&q, AF(o, u8 *, 0x20) + 0x34);
}

void func_sc03_114_8017DD64(u8 *arg0) {
    D_sc03_114_80183254[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017DDA0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, D_sc03_114_8018325C[AF(arg0, s16, 0x70)]);
        func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x14) = (s32) AF(arg0, s32, 8);
        func_8012AD50((s32) arg0);
        return;
    }
    func_8012C098((s32) arg0);
}

void func_sc03_114_8017DE30(u8 *arg0) {
    s32 var_v1;
    u16 temp_a0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_a0 = AF(arg0, u16, 0xFC) + 0x22;
    AF(arg0, u16, 0xFC) = temp_a0;
    var_v1 = rsin((s32) (s16) temp_a0);
    if (var_v1 < 0) {
        var_v1 += 0xFF;
    }
    AF(arg0, s16, 0xA) = (s16) (AF(arg0, u16, 0x16) + (var_v1 >> 8));
    AF(temp_s1, u16, 0x12) = (u16) (AF(temp_s1, u16, 0x12) + 8);
}

void func_sc03_114_8017DEA8(u8 *arg0) {
    D_sc03_114_80183264[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017DEE4(u8 *o) {
    s32 p;
    u8 *d;
    p = func_8012C194();
    d = &D_sc03_114_801A96B8;
    AF(o, s32, 0x20) = p;
    if (p != 0) {
        func_8001CD9C(p, d);
        AF(p, s16, 0x1A) = 0x3000;
        AF(p, s32, 4) |= 0x50000000;
        func_800233CC(d, 0x80);
        func_sc03_114_8017E014((s32)o, (s32)d);
        AF(o, s16, 0x100) = 0;
        func_8012AD50((s32)o);
        return;
    }
    func_8012C098((s32)o);
}

void func_sc03_114_8017DF88(u8 *o) {
    s32 i;
    func_sc03_114_8017E014((s32)o, (s32)&D_sc03_114_801A96B8);
    if (D_800B99DA & 1) {
        for (i = 0; i < 4; i++) {
            func_sc03_114_8017E070(o, (s16)(AF(o, u16, 0x100) + (i << 10)));
        }
        AF(o, u16, 0x100) += 0xE3;
    }
}

s32 func_sc03_114_8017E014(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0_2 = AF(arg0, u16, 0xFC) + 0x2D;
    AF(arg0, u16, 0xFC) = temp_v0_2;
    temp_v0 = ((rsin((s32) (s16) temp_v0_2) / 64) + 0x80) << 8;
    AF(arg1, s32, 0) = temp_v0;
    AF(arg1, s32, 4) = 0;
    return temp_v0;
}

void func_sc03_114_8017E070(u8 *o, s32 n0) {
    s32 vel[4];
    SV8 v;
    s16 n = n0;
    s32 r1, r2, dy, r;
    func_800139C8(n, &D_sc03_114_8018326C, &v);
    v.x += AF(o, u16, 6);
    r1 = rand();
    r2 = rand();
    dy = (r1 & 0xF) - 0xC0;
    v.y += AF(o, u16, 0xA) - dy - (r2 & 0xF);
    v.z += AF(o, u16, 0xE);
    v.pad = 8;
    func_8001382C(n, &D_sc03_114_80183274, vel);
    vel[3] = D_sc03_114_80183280;
    r = func_sc03_114_8017E918((s32)&v, (s32)vel, D_sc03_114_80183284);
    if (r != 0) {
        AF(AF(r, u8 *, 0x20), s16, 0x18) = 0x200;
    }
}

void func_sc03_114_8017E170(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc03_114_8017E270();
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
    func_sc03_114_8017E2EC((s32) AF(arg0, void *, 0x20));
}

void func_sc03_114_8017E270(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    AF(p, s16, 2) = 0xB;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x18) == 0) AF(p, s16, 0x18) = 0x600;
    AF(p, s16, 0x14) = rand() & 0xFF0;
    AF(o, s16, 0x30) = 0x100;
    AF(o, s16, 2)++;
}

void func_sc03_114_8017E2EC(u8 *arg0) {
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
    ot = g_WorldOtTable[D_800B9A02];
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

void func_sc03_114_8017E78C(u16 *cnt, s16 *pos, s16 *rng, s32 sh, s32 arg4) {
    SV8 v;
    u8 *r;
    if (!(*cnt & (s16)((1 << sh) - 1))) {
        v.x = pos[0] + rand() % (rng[0] * 2) - rng[0];
        v.y = pos[1] + rand() % (rng[1] * 2) - rng[1];
        v.z = pos[2] + rand() % (rng[2] * 2) - rng[2];
        v.pad = rng[3];
        r = func_sc03_114_8017E94C(&v, 0, arg4);
        if (r != 0) {
            AF(AF(r, u8 *, 0x20), s16, 0x18) = pos[3];
        }
    }
    (*cnt)++;
}

s32 func_sc03_114_8017E918(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_114_8017E94C(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc03_114_8017E94C(s32 arg0, s32 arg1, s32 arg2) {
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
