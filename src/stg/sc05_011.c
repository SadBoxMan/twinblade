#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_011_8017BE9C(void) {
}

void func_sc05_011_8017BEA4(void) {
}

void func_sc05_011_8017BEAC(void) {
}

void func_sc05_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_011_80181754[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_011_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_011_8018175C[])();
void func_sc05_011_8017CF98(void);
extern u8 D_sc05_011_80181768;
extern void func_8016EE40();
extern u8 D_sc05_011_80181774;
extern void func_sc05_011_8017D010();
extern void (*D_sc05_011_80181778[])();
extern void (*D_sc05_011_801823B0[])();
extern void func_sc05_011_8017D818();

extern u8 D_sc05_011_80181808;
extern u8 D_sc05_011_801818A0;
extern u8 D_sc05_011_801819B0;
extern u8 D_sc05_011_80181A40;
extern u8 D_sc05_011_80181B20;
extern u8 D_sc05_011_80181B48;

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern s32 D_8012695C;
extern s32 D_sc05_011_8019D068;
extern s32 D_sc05_011_8019D154;
extern void func_sc05_011_8017D174();
extern u8 D_sc05_011_80182230;
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc05_011_80181878;
extern u8 D_sc05_011_80181CA0;
extern u8 D_sc05_011_801821D0;
extern u8 D_sc05_011_801821E0;
extern s32 GetPadPressedDir();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B490();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc05_011_80181728;
extern void func_80029514();
extern void func_8002AC00();
extern void func_800D1724();

extern u8 D_sc05_011_80181D80;
extern u8 D_sc05_011_80181EF0;
extern u8 D_sc05_011_80181FB8;


extern s32 func_80012ABC();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc05_011_8017BEBC(u8 *obj) {
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

void func_sc05_011_8017CD9C(u8 *arg0) {
    D_sc05_011_80181754[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_011_8017CDD8(u8 *arg0) {
    func_sc05_011_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_011_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_011_8017CE40(u8 *arg0) {
    D_sc05_011_8018175C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_011_8017CE7C(u8 *arg0) {
    func_sc05_011_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_011_8017CEBC(u8 *arg0) {
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

s32 func_sc05_011_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(4);
        return 1;
    }
    return 0;
}

void func_sc05_011_8017CF70(void) {
    func_8016EE40((s32) &D_sc05_011_80181768, 0x01000000);
}

void func_sc05_011_8017CF98(void) {
    func_8016EE40((s32) &D_sc05_011_80181774, 0x01000000);
}

void func_sc05_011_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126958 = 0x4B0;
    func_sc05_011_8017D010((s32) &D_80126948);
}

void func_sc05_011_8017D010(s32 arg0) {
    D_sc05_011_80181778[AF(arg0, u8, 4)]();
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
extern u8 D_sc05_011_8018177C[];
extern s32 func_80148800();

void func_sc05_011_8017D04C(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_011_8018177C)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc05_011_8017D0EC((s32) arg0, (s32) &v);
}

void func_sc05_011_8017D0EC(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x40) = -0x341;
    AF(arg0, s32, 0x44) = -0x612;
    AF(arg0, s32, 0x4C) = -0x26B;
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x50) = -0x171;
}

void func_sc05_011_8017D118(void) {
    switch (D_sc05_011_8019D154) {                  /* irregular */
    case 0:
        D_sc05_011_8019D068 = 0;
        D_sc05_011_8019D154 = 1;
        return;
    case 1:
        func_sc05_011_8017D174();
        return;
    }
}

extern s32 func_8012C1B8();
extern void func_8001C2C4();
extern s32 func_8012C51C();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_80143994();
extern u8 D_sc05_011_8018C384;
extern u8 D_sc05_011_80181780;
extern u8 D_sc05_011_8018F8B4;
extern u8 D_sc05_011_80194F6C;
extern u8 D_sc05_011_80181DE8;
extern u8 D_sc05_011_80181E40;
extern u8 D_sc05_011_801820B0;
extern u8 D_sc05_011_80182138;
extern u8 D_sc05_011_80181D48;
extern void func_800183E0();
extern u8 D_sc05_011_8019A07C;
extern u8 D_sc05_011_8019A61C;
extern u8 D_sc05_011_8019A34C;

extern u8 D_sc05_011_80181928;
extern u8 D_sc05_011_80181970;
extern u8 D_sc05_011_801819F0;
extern u8 D_sc05_011_80181C18;
extern u8 D_sc05_011_801920E0;
extern u8 D_sc05_011_801922F0;
extern u8 D_sc05_011_80192500;

extern s32 MoveImage();
void func_sc05_011_8017D174(void) {
    SV8 r1;
    SV8 r2;
    s32 n = *(u8 *)&D_sc05_011_8019D068;

    if (n == 0) {
        r1.x = 0x300;
        r1.y = 0x180;
        r1.z = 0x100;
        r1.pad = 0x80;
        MoveImage(&r1, 0x300, 0x100);
    } else {
        r1.x = n + 0x300;
        r1.y = 0x180;
        r1.z = 0x100 - n;
        r1.pad = 0x80;
        MoveImage(&r1, 0x300, 0x100);
        r2.x = 0x300;
        r2.y = 0x180;
        r2.z = n;
        r2.pad = 0x80;
        MoveImage(&r2, 0x400 - n, 0x100);
    }
    D_sc05_011_8019D068--;
}

void func_sc05_011_8017D25C(u8 *o) {
    struct { s16 a, b, c, d, e, f, g, h; s32 i; } s;
    s32 v;
    u8 *scr;
    u8 *scp;
    s32 n;
    s32 m;

    if (AF(o, s16, 0x70) & 0x8000) {
        v = func_8012C1B8();
        AF(o, s32, 0x20) = v;
        if (v == 0) {
            return;
        }
        func_8001C2C4(v);
        s.d = 0x385;
        s.f = 0;
        s.g = 0;
        s.h = 0;
        s.i = 0;
        s.b = -0x202;
        if (AF(o, s32, 0xCC) == 0) {
            s.e = 0;
            s.a = 0;
            s.c = -0x140;
            AF(o, s32, 0xCC) = func_8012C51C(&s, o);
        }
        if (AF(o, s32, 0xD0) == 0) {
            s.e = 1;
            s.a = 0x40;
            s.c = -0x60;
            AF(o, s32, 0xD0) = func_8012C51C(&s, o);
        }
        if (AF(o, s32, 0xD4) == 0) {
            s.e = 2;
            s.a = -0x40;
            s.c = -0x60;
            AF(o, s32, 0xD4) = func_8012C51C(&s, o);
        }
        if (AF(o, s32, 0xCC) != 0 && AF(o, s32, 0xD0) != 0 && AF(o, s32, 0xD4) != 0) {
            AF(o, s16, 2)++;
        }
        return;
    }
    v = func_8012C1B8();
    AF(o, s32, 0x20) = v;
    if (v == 0) {
        return;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        scr = &D_sc05_011_8018C384;
        scp = &D_sc05_011_80181780;
        n = 0;
        m = 5;
        break;
    case 1:
        scr = &D_sc05_011_8018F8B4;
        scp = &D_sc05_011_80181878;
        n = 0;
        m = 6;
        break;
    case 2:
        scr = &D_sc05_011_80194F6C;
        scp = &D_sc05_011_80181CA0;
        n = 0;
        m = 7;
        break;
    }
    func_8001C214(AF(o, s32, 0x20), scr);
    func_8001D0E8(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    SetScript(o, scp);
    func_80143994(o, 0x3000);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = n;
    AF(o, s16, 2) = m;
}

void func_sc05_011_8017D4A4(u8 *o) {
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181928 && AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc05_011_80181970);
    }
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181B48 && AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc05_011_80181C18);
    }
    if (func_80029178(0x127) & 0xFF) {
        func_80029124(0x127, 0);
        SetScript(o, &D_sc05_011_80181928);
    }
    if (func_80029178(0x129) & 0xFF) {
        func_80029124(0x129, 0);
        SetScript(o, &D_sc05_011_801819F0);
    }
    switch (AF(o, s16, 0x108)--) {
    case 0:
        AF(o, s16, 0x108) = (rand() & 0x3F) + 0x28;
        break;
    case 1:
        func_800183E0(&D_sc05_011_801920E0);
        break;
    case 5:
        func_800183E0(&D_sc05_011_80192500);
        break;
    case 3:
    case 7:
        func_800183E0(&D_sc05_011_801922F0);
        break;
    }
}

void func_sc05_011_8017D610(u8 *o) {
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181DE8 && AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc05_011_80181E40);
    }
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80181FB8 && AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc05_011_801820B0);
    }
    if (AF(o, u8 *, 0x90) == &D_sc05_011_80182138 && AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc05_011_801820B0);
    }
    if (func_80029178(0x128) & 0xFF) {
        func_80029124(0x128, 0);
        SetScript(o, &D_sc05_011_80181DE8);
    }
    if (func_80029178(0x12A) & 0xFF) {
        func_80029124(0x12A, 0);
        SetScript(o, &D_sc05_011_80181D48);
    }
    if (func_80029178(0x12C) & 0xFF) {
        func_80029124(0x12C, 0);
        SetScript(o, &D_sc05_011_80182138);
    }
    switch (AF(o, s16, 0x108)--) {
    case 0:
        AF(o, s16, 0x108) = (rand() & 0x3F) + 0x3C;
        break;
    case 1:
        func_800183E0(&D_sc05_011_8019A07C);
        break;
    case 5:
        func_800183E0(&D_sc05_011_8019A61C);
        break;
    case 3:
    case 7:
        func_800183E0(&D_sc05_011_8019A34C);
        break;
    }
}

void func_sc05_011_8017D7DC(u8 *arg0) {
    D_sc05_011_801823B0[AF(arg0, u16, 2)]();
}

void func_sc05_011_8017D818(s32 arg0) {
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

void func_sc05_011_8017D8A0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7800;
}

void func_sc05_011_8017D8B0(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc05_011_80181808);
}

void func_sc05_011_8017D8DC(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_801818A0);
}

void func_sc05_011_8017D908(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_801819B0);
}

void func_sc05_011_8017D934(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181A40);
}

void func_sc05_011_8017D960(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181B20);
}

void func_sc05_011_8017D98C(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181B48);
}

void func_sc05_011_8017D9B8(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181D80, arg2);
}

void func_sc05_011_8017D9E4(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181CA0, arg2);
}

void func_sc05_011_8017DA10(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181EF0, arg2);
}

void func_sc05_011_8017DA3C(u8 *arg0, s32 arg1, s32 arg2) {
    SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181FB8, arg2);
}

void func_sc05_011_8017DA68(u8 *arg0) {
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
    func_80029124(0x130, 0);
    func_80029124(0x131, 0);
    func_80029124(0x133, 0);
    func_80178B18((s32) arg0, (s32) &D_sc05_011_80182230);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_011_8017DB54(s32 arg0) {
    if (!(GetPadPressedDir(0) & 0x840) || (func_800CF8B4() == 0)) {
        if (func_80029178(0x125) & 0xFF) {
            func_8017B490(arg0, (s32) &D_sc05_011_801821D0);
        }
        if (func_80029178(0x126) & 0xFF) {
            func_8017B490(arg0, (s32) &D_sc05_011_801821E0);
        }
        if (func_80029178(0x12B) & 0xFF) {
            func_80029124(0x12B, 0);
            SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc05_011_80181878);
            SetScript(AF(arg0, s32, 0xD4), (s32) &D_sc05_011_80181CA0);
        }
        if (func_801789AC(arg0) != 0) {
            func_80178D18(arg0);
            goto block_10;
        }
    } else {
block_10:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_011_8017DC50(u8 *arg0) {
    func_80029514(0x398);
    func_8002AC00(0x1D);
    func_800D1724((s32) &D_sc05_011_80181728);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_011_8017DCA4(void) {
}

void func_sc05_011_8017DCAC(s32 arg0) {
    func_sc05_011_8017D818(arg0);
}
