#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_009_8017BE9C(void) {
}

void func_sc05_009_8017BEA4(void) {
}

void func_sc05_009_8017BEAC(void) {
}

void func_sc05_009_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_009_80182524[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_009_8017CFA0(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_009_8018252C[])();
void func_sc05_009_8017CFC8(void);
extern void func_800D1EBC();
extern u8 D_sc05_009_80182538;
extern void func_8016EE40();
extern u8 D_sc05_009_8018253C;
extern void func_sc05_009_8017D1D4();
extern void (*D_sc05_009_80182544[])();
extern void (*D_sc05_009_80182580[])();
extern void (*D_sc05_009_801825DC[])();
extern void (*D_sc05_009_80191A7C[])();
void func_sc05_009_8017DD50(u8 *arg0);
extern void (*D_sc05_009_80193894[])();
extern void (*D_sc05_009_8019389C[])();
extern void (*D_sc05_009_801939C4[])();
extern u8 D_sc05_009_80193974;
extern void func_80178CBC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc05_009_8017DD28();
extern s32 func_8012C658();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern void func_8012CAE4();
extern u8 D_sc05_009_80193E84;
extern u8 D_sc05_009_801938C4;
extern s32 * func_sc05_009_8017E894();
extern void func_80178D18();
extern s32 func_801789AC();
extern s32 D_sc05_009_80196AEC;
extern void func_800296F8();

extern void func_sc05_009_8017CFF0();
extern s32 D_sc05_009_80196A90;
extern u8 D_sc05_009_80191A54;
extern void func_80154274();
extern void func_801477E8();
extern void func_80146DE8();
extern void func_80147814();
extern void func_80147460();
extern void func_80147B18();
extern void func_801473EC();
extern void func_80147AD4();
extern void func_8014C010();
extern void func_8001AAA0();
extern void func_80154150();
extern u8 D_80126B58;

extern void func_sc05_009_8017CFF0();
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
extern u8 D_sc05_009_80182594;
extern s32 func_8016F1AC();
extern void func_80178B18();
extern void func_8012AD50();
extern s32 func_80178970();
extern void func_80146E90();
extern s32 func_8012BEE8();
extern void func_8012C098();
extern void func_80147324();

extern u8 D_sc05_009_80193874;
extern s32 func_8012C1B8();
extern void func_8001C214();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc05_009_8017BEBC(u8 *obj) {
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

void func_sc05_009_8017CD9C(void) {
    func_sc05_009_8017CFF0(1);
}

void func_sc05_009_8017CDBC(void) {
    func_8001AAA0(0x6B);
    func_sc05_009_8017CFF0(0);
}

void func_sc05_009_8017CDE4(u8 *arg0) {
    D_sc05_009_80182524[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_009_8017CE20(u8 *arg0) {
    func_sc05_009_8017CFA0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_009_8017CE64(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_009_8017CE88(u8 *arg0) {
    D_sc05_009_8018252C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_009_8017CEC4(u8 *arg0) {
    func_sc05_009_8017CFC8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_009_8017CF04(u8 *arg0) {
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

void func_sc05_009_8017CF80(void) {
    func_800D1EBC();
}

void func_sc05_009_8017CFA0(void) {
    func_8016EE40((s32) &D_sc05_009_80182538, 0x01000000);
}

void func_sc05_009_8017CFC8(void) {
    func_8016EE40((s32) &D_sc05_009_8018253C, 0x01000000);
}

void func_sc05_009_8017CFF0(s32 arg0) {
    D_sc05_009_80196A90 = arg0;
}

s32 func_sc05_009_8017D000(s32 arg0) {
    return D_sc05_009_80196A90;
}

void func_sc05_009_8017D010(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D0AC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x244;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 1);
    func_8012A094((s32) &D_80126948);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D148(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 2);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D1D4(s32 arg0) {
    D_sc05_009_80182544[AF(arg0, u8, 4)]();
}

extern u8 D_sc05_009_80191A30;

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
extern u8 D_80126940;
extern u8 D_sc05_009_80182550[];
extern s32 func_80148800();
extern void func_sc05_009_8017D340();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc05_009_8017D210(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_009_80182550)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc05_009_8017D340((s32) arg0, (s32) &v);
}

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
extern void func_sc05_009_8017D4D8();

void func_sc05_009_8017D2B0(s32 arg0) {
    B8 v;

    v = *(B8 *)&D_80126940;
    func_sc05_009_8017D340(arg0, (s32) &v);
}

void func_sc05_009_8017D2F8(s32 arg0) {
    B8 v;

    v = *(B8 *)&D_80126940;
    func_sc05_009_8017D4D8(arg0, (s32) &v);
}

void func_sc05_009_8017D340(u8 *arg0, u8 *arg1) {
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

extern u8 D_sc05_009_80182554;
extern s32 D_sc05_009_80193820;
extern s32 D_sc05_009_80193824;
extern s32 D_sc05_009_80193828;
extern s32 D_sc05_009_8019382C;
extern s32 D_sc05_009_80193830;
extern s32 D_sc05_009_80193834;
extern U12 D_sc05_009_80193838[];
extern s32 D_sc05_009_80196A98[];
extern s32 D_sc05_009_80196A9C;
extern s32 D_sc05_009_80196AA0;
extern s32 D_sc05_009_80196AA4;
extern s32 D_sc05_009_80196AA8;
extern s32 D_sc05_009_80196AAC;
extern s32 func_8014BFD4();
extern void func_8001C2C4();
extern void func_8012AD44();

void func_sc05_009_8017D4D8(u8 *arg0, u8 *arg1) {
    FeMtx m;
    FeSv v;
    FeSv o;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 0x10);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 0x10);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 0x10);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 0x10);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 0x10);
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

void func_sc05_009_8017D670(u8 *arg0) {
    D_sc05_009_80182580[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017D6AC(u8 *o) {
    s32 n;
    u8 *p;
    s32 *q;

    n = func_8014BFD4() & 0xFF;
    if (((s32 (*)()) func_sc05_009_8017D000)() == 0) {
        return;
    }
    p = (u8 *) func_8012C1B8();
    AF(o, u8 *, 0x20) = p;
    if (p == 0) {
        return;
    }
    if (AF(o, s16, 0xFC) != 0) {
        func_8001C2C4(p);
        AF(o, void *, 0x58) = &D_sc05_009_80182554;
        AF(o, u8, 0x75) = 5;
        AF(o, u16, 0x5C) |= 0x400;
        func_8012AD44(o, 4);
        return;
    }
    q = D_sc05_009_80196A98;
    *q = D_sc05_009_80193820;
    D_sc05_009_80196A9C = D_sc05_009_80193824;
    D_sc05_009_80196AA0 = D_sc05_009_80193828;
    D_sc05_009_80196AA4 = D_sc05_009_8019382C;
    D_sc05_009_80196AA8 = D_sc05_009_80193830;
    D_sc05_009_80196AAC = D_sc05_009_80193834;
    func_8001C214(p, q);
    AF(p, void *, 0x20) = D_sc05_009_80193838;
    if (n < 4) {
        *q |= 0x1000000;
    }
    if (n < 3) {
        D_sc05_009_80196A9C |= 0x1000000;
    }
    if (n < 2) {
        D_sc05_009_80196AA0 |= 0x1000000;
    }
    func_8012AD50(o);
}

void func_sc05_009_8017D840(s32 arg0) {
    if (func_8016F1AC() == 0) {
        func_80178B18(arg0, (s32) &D_sc05_009_80182594);
        func_8012AD50(arg0);
    }
}

void func_sc05_009_8017D888(s32 arg0) {
    if (func_80178970() != 0) {
        func_80178D18(arg0);
        func_80146E90(arg0, 1);
        func_8012AD50(arg0);
    }
}

void func_sc05_009_8017D8D4(s32 arg0) {
    if (func_8012BEE8() != 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_009_8017D90C(void) {
}

void func_sc05_009_8017D914(u8 *arg0) {
    func_80147324(0x9D2);
    AF(arg0, s32, 0xDC) = 0x200000;
    AF(arg0, u16, 0xFC) = (u16) AF(arg0, u16, 6);
}

extern s32 *D_sc05_009_801825E4[];

extern void func_8012C218();
extern s32 func_8012BE54();
extern s32 func_8014CB8C();
extern u8 D_80062BD0;
extern void StartRumbleScript();
extern s32 func_8012C588();
extern u16 D_sc05_009_8019387C[];
extern s16 D_80126B62;
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern void func_sc05_009_8017E2BC();
extern s32 func_80132EF4();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void func_80172710();
extern void func_80178BF8();
extern void *D_80126B78;
extern SV8 D_sc05_009_801939E0[];
extern s32 func_80135888();
extern s32 func_8012BDBC();

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern u8 D_sc05_009_80193E94;
extern u8 D_sc05_009_80193F9C;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_80126CAC;
extern s32 D_801274D8;
extern s32 D_801274DC;
extern s32 func_800132BC();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern WMtx D_800AE620;

extern s32 GetRumbleScript();
extern u8 D_sc05_009_80182578;
extern void func_80172310();
extern void func_sc05_009_8017DF34();
s32 func_sc05_009_8017D950(u8 *o) {
    SV8 v;

    if (GetRumbleScript() == 0) {
        StartRumbleScript(&D_sc05_009_80182578);
    }
    AF(o, s16, 6) = AF(o, u16, 0xFC);
    v.x = AF(o, s16, 0xFC) += AF(o, u16, 0xDE);
    v.y = D_80126B62;
    v.z = AF(o, s16, 0xE);
    v.pad = 0xC00;
    func_80172310(&v);
    if (AF(o, s16, 6) >= 0x121) {
        func_sc05_009_8017DF34();
        return 1;
    }
    return 0;
}

extern u8 D_sc05_009_80182564;
extern void func_8013C9C4();
extern void func_80147364();
s32 func_sc05_009_8017D9F0(u8 *o) {
    u8 unused[8]; /* MATCH-TRICK: pads the frame to 0x20 */

    AF(o, s16, 6) = AF(o, u16, 0xFC);
    AF(o, s16, 0xFC) += AF(o, u16, 0xDE);
    if (AF(o, s16, 6) >= 0x1A1) {
        func_8012C658(0x251, 0, o);
        func_8012C658(0x251, 1, o);
        func_8012C658(0x251, 2, o);
        func_8012C658(0x251, 3, o);
        func_8012C658(0x251, 4, o);
        func_8013C9C4(&D_sc05_009_80182564);
        func_80147324(0x807);
        func_80147364(4, 0x9D2);
        return 1;
    }
    return 0;
}

void func_sc05_009_8017DAB8(u8 *arg0) {
    D_sc05_009_801825DC[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017DAF4(u8 *o) {
    s32 *t;
    u8 *m;

    t = D_sc05_009_801825E4[AF(o, s16, 0x70)];
    m = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = m;
    if (m != 0) {
        t[0] = D_sc05_009_80196A98[AF(o, s16, 0x70)];
        t[1] = 0;
        func_8001C214(m, t);
        AF(m, SV8, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), SV8, 0x10);
        AF(o, s16, 6) += D_sc05_009_80193838[AF(o, s16, 0x70)].v[0];
        AF(o, s16, 0xA) += D_sc05_009_80193838[AF(o, s16, 0x70)].v[1];
        AF(o, s16, 0xE) += D_sc05_009_80193838[AF(o, s16, 0x70)].v[2];
        AF(o, s16, 0xFC) = (rand() & 0x1F) * 16 + 0xE3;
        AF(o, s16, 0xFE) = (rand() & 0x1F) * 16 + 0xE3;
        AF(o, s32, 0x10) = AF(AF(o, u8 *, 0x64), s32, 0xDC);
        AF(o, s32, 0x14) = -0x40000 - (rand() & 0x3F) * 0x800;
        AF(o, s32, 0x18) = 0;
        AF(o, s32, 0x44) = (rand() & 0x3F) * 0x80 + 0x1000;
        AF(o, s32, 0x48) = (rand() & 0x3F) * 0x80 + 0x1000;
        AF(o, s32, 0x4C) = 0;
        func_8012AD50(o);
    }
}

extern void func_8012AD80();
void func_sc05_009_8017DCB0(u8 *o) {
    u8 *m = AF(o, u8 *, 0x20);

    AF(m, s16, 0x10) += AF(o, u16, 0xFC);
    AF(m, s16, 0x14) += AF(o, u16, 0xFE);
    func_8012AD80(o);
    if (AF(o, s16, 6) > 0x1000) {
        func_8012C098(o);
    }
}

s32 func_sc05_009_8017DD20(void) {
    return 0x6A;
}

s32 func_sc05_009_8017DD28()
{
    return SetActionHandler((s32) func_sc05_009_8017DD50);
}

void func_sc05_009_8017DD50(u8 *arg0) {
    D_sc05_009_80191A7C[AF(arg0, u8, 0x214)]();
}

void func_sc05_009_8017DD8C(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc05_009_80191A30);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    NextPhase(arg0);
    func_sc05_009_8017DDE0(arg0);
}

void func_sc05_009_8017DDE0(void) {
}

void func_sc05_009_8017DDE8(s32 arg0) {
    func_80154274(arg0, (s32) &D_sc05_009_80191A54);
    func_801477E8(arg0, -0x20000);
    func_80146DE8(arg0, 0, 0, -0x400000);
    NextPhase(arg0);
}

void func_sc05_009_8017DE40(s32 arg0) {
    func_80147814(arg0, 0x10000);
    func_80147460(arg0);
    func_80147B18(arg0, 0, 0, 0x10000);
    func_801473EC(arg0);
    if (AF(arg0, s16, 0xA) >= -0x2C1) {
        AF(arg0, s16, 0xA) = -0x2C2;
        NextPhase(arg0);
    }
}

void func_sc05_009_8017DEB0(s32 arg0) {
    func_80147AD4(arg0, 0, 0, 0x20000);
    func_801473EC(arg0);
    func_8014C010(arg0, 2);
    if (AF(arg0, s32, 0x2C) > 0) {
        func_8001AAA0(0x6B);
        func_80154150(arg0, 1);
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_sc05_009_8017DF2C(void) {
}

void func_sc05_009_8017DF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    NextPhase((s32) &D_80126B58, arg1, arg2, arg3);
}

void func_sc05_009_8017DF5C(u8 *o) {
    u8 *d = &D_80126B58;
    s16 r = 0;
    u8 *p;
    s16 t;
    s32 k;
    if (AF(o, u8, 0x74) != 0) {
        if (func_8012BE54() < 0x4000 && func_8014CB8C() != 0) {
            AF(o, s16, 0xFE)++;
            StartRumbleScript(&D_80062BD0);
            func_8012C588(0x27D, o);
            r = 1;
            if (AF(o, s16, 0xFE) >= 9) {
                AF(o, s16, 0xA)++;
                AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x10;
                p = AF(o, u8 *, 0x20);
                AF(p, s16, 0x1C) = AF(p, s16, 0x18);
            }
        }
        k = D_sc05_009_8019387C[AF(o, s16, 0x100) * 8] - 1;
        AF(d, s16, 0xA) = AF(o, s16, 0xA) + k;
    }
    if (r == 0) {
        AF(o, s16, 0xFE) = 0;
    }
    t = AF(o, s16, 0xFC);
    if (t != 0 && (AF(o, u16, 0xFE) & 0xF) == 1) {
        func_8002D4C8((u16) t, 0);
    }
    if (AF(o, s16, 0x102) + 0xA0 < AF(o, s16, 0xA)) {
        func_8012C218(o);
    }
}

void func_sc05_009_8017E0B8(u8 *arg0) {
    D_sc05_009_80193894[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E0F4(u8 *o) {
    s16 n;
    s32 *tbl;
    u8 *e;
    u8 *p;
    u8 *q;
    s16 v;

    tbl = AF(AF(o, u8 *, 0x64), s32 *, 0xDC);
    n = (rand() & 1) + 1;
    e = (u8 *) func_8012C1B8();
    AF(o, u8 *, 0x20) = e;
    if (e == 0 || tbl == 0 || tbl[n] == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(e, tbl[n]);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    v = (rand() & 0x3F0) + 0xA00;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = v;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = rand() & 0xFF0;
    AF(o, s16, 6) = AF(o, s16, 0xFE) = D_80126B5E;
    AF(o, s16, 0xA) = D_80126B62;
    AF(o, s16, 0xE) = AF(o, s16, 0x100) = D_80126B66;
    AF(o, s16, 0xE2) = (rand() & 0x1C) + 0x18;
    AF(o, s32, 0x14) = 0xFFE80000;
    AF(o, s32, 0x48) = 0x8000;
    AF(o, s32, 0x18) = 0x50000;
    AF(o, s16, 0x106) = rand() & 0xF0;
    AF(o, s16, 0x108) = rand() & 0xF0;
    func_sc05_009_8017E2BC(o);
    if (n != 1) {
        q = (u8 *) func_80132EF4(o, 0x22);
        if (q != 0) {
            AF(q, s16, 0x34) = 0x3001;
            AF(q, s32, 0x14) = 0xFFFC0000;
        }
    }
    func_8012AD50(o);
}

void func_sc05_009_8017E280(u8 *arg0) {
    D_sc05_009_8019389C[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E2BC(u8 *o) {
    WMtx m;
    SV8 v;
    s32 flag;

    m = D_800AE620;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    m.t[0] = AF(o, s16, 0xFE);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0x100);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s16, 0xE2);
    RotTransSV(&v, &v, &flag);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xE) = v.z;
}

void func_sc05_009_8017E3AC(u8 *arg0) {
    s32 *temp_s1;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    temp_s1 = AF(arg0, s32 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (temp_s1 == NULL) || (temp_a1 = *temp_s1, (temp_a1 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, temp_a1);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, s32, 0x20), u16, 0x18) = (u16) AF(arg0, u16, 0x70);
    AF(AF(arg0, s32, 0x20), u16, 0x1C) = (u16) AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, u16, 0x102) = (u16) AF(arg0, u16, 0xA);
    if ((s16) AF(arg0, u16, 0x70) >= 0x1001) {
        AF(arg0, s16, 0x100) = 1;
    }
    AF(arg0, u16, 0x5C) = 0x8400;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s16, 0x100) * 0x10) + &D_sc05_009_80193874);
    func_8012AD50((s32) arg0);
}

void func_sc05_009_8017E4A4(u8 *arg0) {
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x14) += AF(arg0, s32, 0x48);
    if (AF(arg0, s32, 0x14) > -0x20000) {
        func_8012C218(arg0);
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0x30;
    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0x106);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x108);
    AF(arg0, s32, 0xE0) += AF(arg0, s32, 0x18);
    func_sc05_009_8017E2BC(arg0);
}

void func_sc05_009_8017E55C(u8 *arg0) {
    D_sc05_009_801939C4[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E598(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc05_009_801938C4)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc05_009_8017E894);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc05_009_80193E84);
    }
}

void func_sc05_009_8017E670(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_009_8017E698(void) {
}

void func_sc05_009_8017E6A0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_009_80193974);
}

void func_sc05_009_8017E6CC(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc05_009_8017E70C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0x100) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_009_80193E94);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_009_80193F9C);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc05_009_8017E7CC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc05_009_80193E84);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc05_009_8017E838(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_009_8017E848(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc05_009_8017E858(void) {
    return D_sc05_009_80196AEC == 1;
}

void func_sc05_009_8017E870(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

s32 *func_sc05_009_8017E894(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;
    u8 *q;

    q = AF(o, u8 *, 0x64);
    m = AF(D_80126B78, WMtx, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc05_009_801939E0[0], &a, &flag);
    RotTransSV(&D_sc05_009_801939E0[1], &b, &flag);
    if (func_80135888(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && func_8012BDBC(q, 0x300) != 0) {
        AF(q, s16, 2) = 3;
        func_80178BF8();
        return (s32 *)&func_80172710;
    }
    return 0;
}

s32 func_sc05_009_8017E9E8(u8 *arg0) {
    s32 t;
    u16 id = AF(arg0, u16, 6);
    if ((u16)(id - 0x31) < 2) {
        return 1;
    }
    if (id == 0x33 || id == 0x27B) {
        return 1;
    }
    t = func_800132BC((s32) &D_80126CAC, arg0);
    if (D_801274D8 < t && t < D_801274DC) {
        return 1;
    }
    return 0;
}
