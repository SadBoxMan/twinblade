#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_010_8017BE9C(void) {
}

void func_sc04_010_8017BEA4(void) {
}

void func_sc04_010_8017BEAC(void) {
}

void func_sc04_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_010_80181BD8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_010_8017D03C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_010_80181BE0[])();
void func_sc04_010_8017D08C(void);
extern void func_800D1EBC();
extern u8 D_sc04_010_80181C68;
extern void func_8016EE40();
extern u8 D_sc04_010_80181C78;
extern void func_sc04_010_8017D1D4();
extern void (*D_sc04_010_80181C8C[])();
extern void (*D_sc04_010_80181C94[])();
extern void (*D_sc04_010_80181D60[])();
void func_sc04_010_8017D6C4(s32 arg0);
extern void (*D_sc04_010_80181D6C[])();
extern void func_sc04_010_8017D6CC();
extern void (*D_sc04_010_80181D74[])();
extern void (*D_sc04_010_80181DB0[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_010_80181C90[];
extern s32 func_8013B7F4();

extern s32 func_80178970();
extern void func_80178D18();
extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_010_80181DA4;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();

extern void func_8013CB84();

extern s32 func_8013373C();

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
extern s32 D_80126950;
extern u8 D_sc04_010_8018B798;
extern void func_80174E9C();
extern void func_80175014();
extern void func_80129FF4();
extern u8 D_sc04_010_80181D00;
extern void func_80029124();
extern void func_80016714();
extern void func_80178B18();
extern void func_8012AD44();
extern s32 func_8012C588();
extern u8 D_sc04_010_8018CBA8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc04_010_8018C568;

extern u8 D_sc04_010_80181C84;

extern u8 D_sc04_010_80181C9C;
extern u8 D_sc04_010_80181CBC;
extern s32 func_80029504();
extern s32 func_8012C354();
extern s32 func_sc04_010_8017D5DC();

extern s32 D_8011F9C4;
extern u8 D_sc04_010_80181E98;
extern u8 D_sc04_010_80181EFC;
extern void func_800291F0();
s32 func_sc04_010_8017D478(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_80126B58;
extern s32 func_8012BEE8();
extern s32 func_8017267C();
extern void func_sc04_010_8017DDEC();
extern void *D_80126B78;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc04_010_8017BEBC(u8 *obj) {
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

void func_sc04_010_8017CD9C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xD8, 1);
    func_800291F0(4, 0xD8);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_010_80181E98;
    D_801274CC = &D_sc04_010_80181EFC;
    func_sc04_010_8017D478(0);
}

void func_sc04_010_8017CE0C(u8 *arg0) {
    D_sc04_010_80181BD8[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_010_8017CE48(u8 *arg0) {
    func_sc04_010_8017D03C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_010_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_010_8017CEB0(u8 *arg0) {
    D_sc04_010_80181BE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_010_8017CEEC(u8 *arg0) {
    func_sc04_010_8017D08C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_010_8017CF2C(u8 *arg0) {
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

void func_sc04_010_8017CFA8(void) {
    func_800D1EBC();
}

s32 func_sc04_010_8017CFC8(u8 *arg0) {
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

void func_sc04_010_8017D03C(void) {
    func_8016EE40((s32) &D_sc04_010_80181C68, 0x01000000);
}

void func_sc04_010_8017D064(void) {
    func_8016EE40((s32) &D_sc04_010_80181C78, 0x01000000);
}

void func_sc04_010_8017D08C(void) {
    func_8016EE40((s32) &D_sc04_010_80181C84, 0x01000000);
    func_8002D4C8(0x1D, 0);
}

void func_sc04_010_8017D0C0(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x352;
    D_80126968 = 0x18E;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0xE4;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_010_8017D1D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_010_8017D1D4((s32) &D_80126948);
}

void func_sc04_010_8017D15C(void) {
    D_80126950 = 0x1A5;
    func_80174E9C((s32) &D_sc04_010_8018B798);
}

void func_sc04_010_8017D190(void) {
    D_80126950 = 0x1A5;
    func_80175014((s32) &D_80126948, (s32) &D_sc04_010_8018B798, 0);
    func_80129FF4();
}

void func_sc04_010_8017D1D4(s32 arg0) {
    D_sc04_010_80181C8C[AF(arg0, u8, 4)]();
}

extern void func_8012C218();

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
extern s32 func_8012E544();
extern u16 D_801202A0;
extern u8 D_sc04_010_80181D7C;
extern s32 func_801290DC();
extern void func_80149350();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();


typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void func_801292C8();
extern void func_800139C8();

extern u8 D_80126940;
extern void func_sc04_010_8017D2D4();

void func_sc04_010_8017D210(u8 *o) {
    SV8 a;
    SV8 b;

    a = *(SV8 *)&D_80126940;
    b = *(SV8 *)&D_80126940;
    a.x = 0x1D0;
    a.y = -0x802;
    a.z = 0x1180;
    if (b.x > 0x1D0) {
        b.x = 0x1D0;
    }
    if (b.z < 0x10E0) {
        b.z = 0x10E0;
    } else if (b.z > 0x1220) {
        b.z = 0x1220;
    }
    func_sc04_010_8017D2D4(o, &a, &b);
}

void func_sc04_010_8017D2D4(u8 *arg0, u8 *arg1, u8 *arg2) {
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
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
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

s32 func_sc04_010_8017D478(s32 arg0) {
    return func_8013B7F4(D_sc04_010_80181C90[arg0], 0);
}

s32 func_sc04_010_8017D4A8(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

void func_sc04_010_8017D4C8(void) {
    func_8013CB84();
}

void func_sc04_010_8017D4E8(u8 *arg0) {
    D_sc04_010_80181C94[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017D524(u8 *arg0) {
    D_sc04_010_80181D60[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017D560(u8 *arg0) {
    s32 temp_a0;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_80029124(0xBC, 1);
    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_80178B18((s32) arg0, (s32) &D_sc04_010_80181D00);
    func_8012AD44((s32) arg0, 2);
    func_8002D4C8(0xAAF, 0);
}

typedef struct { u8 b[4]; } B4;
extern s32 func_8001D074();
extern void func_800233CC();
extern void func_8001CD9C();
extern u8 D_sc04_010_8018F598[];
extern u8 D_sc04_010_8018F59C;
extern u8 D_sc04_010_8018E24C;
extern u8 D_sc04_010_8018E250;

s32 func_sc04_010_8017D5DC(u8 *arg0) {
    u8 *o;
    u8 *p;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o == 0) {
        return 0;
    }
    p = D_sc04_010_8018F598;
    func_800233CC(p, 0x28);
    *(B4 *)p = *(B4 *)&D_sc04_010_8018E24C;
    *(B4 *)&D_sc04_010_8018F59C = *(B4 *)&D_sc04_010_8018E250;
    func_8001CD9C(o, p);
    AF(o, u16, 0x2C) = 0xC008;
    AF(o, s32, 4) |= 0x50000000;
    AF(o, u16, 8) = AF(arg0, u16, 6);
    AF(o, u16, 0xA) = AF(arg0, u16, 0xA);
    AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
}

void func_sc04_010_8017D6C4(s32 arg0) {
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc04_010_8017D6CC(u8 *o) {
    if (AF(o, s16, 0xFE) != 0) {
        D_sc04_010_8018F598[2] += 0x10;
        D_sc04_010_8018F598[1] += 0xC;
        D_sc04_010_8018F598[0] += 4;
        if (D_sc04_010_8018F598[2] >= 0xF0) {
            AF(o, s16, 0xFE) = 0;
        }
    } else {
        D_sc04_010_8018F598[2] -= 0x10;
        D_sc04_010_8018F598[1] -= 0xC;
        D_sc04_010_8018F598[0] -= 4;
        if (D_sc04_010_8018F598[2] < 0x61) {
            AF(o, s16, 0xFE)++;
        }
    }
}

void func_sc04_010_8017D7A0(s32 arg0) {
    func_8012C588(0x2D6, arg0);
}

void func_sc04_010_8017D7C4(u8 *arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xD0);
    if (temp_a0 != 0) {
        func_8012C218(temp_a0);
    }
    ((s32 (*)())func_sc04_010_8017D4A8)();
    func_8002D4C8(0xA49, 0);
}

void func_sc04_010_8017D808(u8 *arg0) {
    D_sc04_010_80181D6C[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017D844(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_010_8018CBA8);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 0xA) = -0x880;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x1330;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x70000000);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0;
    func_8002D4C8(0x90F, 0);
    func_8012AD50((s32) arg0);
}

void func_sc04_010_8017D904(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x18) += 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x333;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) += 0x400;
        if (AF(AF(o, u8 *, 0x20), s16, 0x18) >= 0x1400) {
            AF(o, s32, 0x1C) = 0x60;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_8012BEE8(o) != 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x400;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x333;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) -= 0x400;
            if (AF(AF(o, u8 *, 0x20), s16, 0x18) <= 0) {
                func_8012C218(o);
                return;
            }
        }
        break;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x10;
}

void func_sc04_010_8017DA58(s32 arg0) {
    AF(arg0, s32, 0xD0) = func_8012C588(0x288, arg0);
    if (func_80029504() >= 0x384U) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_8012C354(arg0, (s32) &D_sc04_010_80181CBC) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x400;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc04_010_80181C9C;
        AF(arg0, s16, 0xAE) = -4;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, u8, 0x75) = 0x14;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(arg0, s32, 0xCC) = func_sc04_010_8017D5DC(arg0);
        func_sc04_010_8017D6C4(arg0);
        func_8012AD50(arg0);
    }
}

void func_sc04_010_8017DB20(s32 arg0) {
    func_sc04_010_8017D6CC(arg0);
}

void func_sc04_010_8017DB40(u8 *arg0, s32 arg1) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0, arg1) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    }
}

void func_sc04_010_8017DB9C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_010_8018C568);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x40);
    AF(arg0, s16, 0xA) = -0x7E0;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x129C;
    func_8012AD50((s32) arg0);
}

void func_sc04_010_8017DC1C(void) {
}

s32 func_sc04_010_8017DC24(void) {
    return 0x5C;
}

void func_sc04_010_8017DC2C(u8 *arg0) {
    D_sc04_010_80181D74[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017DC68(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_010_8017DC9C(s32 arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8(arg0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_010_8017DDEC(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_010_8017DDEC(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_010_8017DDEC(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_010_8017DDEC(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_010_8017DDEC(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_010_8017DDEC(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_010_8017DDEC(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_010_80181D7C;
    switch (t) {
    case 0:
        func_80149350((s32) &D_80126B58, (s32) p, (s32) &sp10);
        func_801290DC(0x56, (s32) &sp10);
        break;
    case 1:
        v = func_8012E544(0x245);
        if (v != 0) {
            FaceHelper(v, (s32) p, (s32) &sp10);
            func_801290DC(0x56, (s32) &sp10);
        }
        break;
    default:
        q = (u8 *)&D_801202A0;
        for (i = 0; i < 0x60; i++, q += 0x10C) {
            if (*(u16 *)q == AF(p, s16, 6)) {
                FaceHelper((s32) q, (s32) p, (s32) &sp10);
                func_801290DC(0x56, (s32) &sp10);
            }
        }
        break;
    }
}

void func_sc04_010_8017DED8(u8 *arg0) {
    D_sc04_010_80181DB0[AF(arg0, u16, 2)]();
}

void func_sc04_010_8017DF14(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_010_80181DA4, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    func_80146E90((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_010_8017DFF8(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_010_8017E064(u8 *o) {
    u8 *p;
    SV8 v;
    u16 a;

    p = AF(o, u8 *, 0x20);
    a = AF(o, u16, 0x2C) + 0x40;
    AF(o, u16, 0x2C) = a;
    v.z = rsin((s16)a) / 256;
    v.x = v.y = 0;
    func_800139C8(AF(p, s16, 0x12), &v, &v);
    AF(o, s16, 6) = AF(o, s16, 0x12) + v.x;
    AF(o, s16, 0xE) = AF(o, s16, 0x1A) + v.z;
    AF(o, s16, 0xA) -= AF(o, s16, 0x30);
    AF(o, s16, 0x2E) += 0x10;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1A) + AF(o, s16, 0x2E);
    AF(p, u8, 0x24) = AF(p, u8, 0x25) = AF(p, u8, 0x26) = AF(p, u8, 0x26) - 4;
    if (func_80146E98(o) != 0) {
        func_801292C8(o);
    }
}
