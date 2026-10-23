#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_001_8017BE9C(void) {
}

void func_sc01_001_8017BEA4(void) {
}

void func_sc01_001_8017BEAC(void) {
}

void func_sc01_001_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_001_80187294[])();
extern s32 func_800167F0();
extern void (*D_sc01_001_8018729C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_001_8017CFA0(void);
extern u8 D_sc01_001_801872A8;
extern void func_8016EE40();
extern u8 D_sc01_001_801872B4;
extern void func_sc01_001_8017D060();
extern void (*D_sc01_001_801872B8[])();
extern void (*D_sc01_001_80188DE0[])();
extern void (*D_sc01_001_80188DF0[])();
extern void (*D_sc01_001_80188E00[])();
extern void (*D_sc01_001_80188E10[])();
extern void (*D_sc01_001_80188E58[])();

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

extern u8 D_sc01_001_80187338;
extern u8 D_sc01_001_80187758;

extern void func_800167B8();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_80019028();
void func_sc01_001_8017CF78(void);
extern s32 D_sc01_001_801EDA20;
extern s32 func_8013767C();
extern s32 D_sc01_001_801ED9D4;
extern s32 D_sc01_001_801ED9DC;
extern s32 func_80174E9C();
extern s32 func_80174ED4();
extern void (*D_sc01_001_80188DD0[])();
extern void func_sc01_001_8017D2DC();
extern void func_sc01_001_80182C58();
extern s32 D_sc01_001_801EDA10;
extern s32 func_sc01_001_80182B00();
extern s32 D_sc01_001_801EDA14;
extern u8 D_sc01_001_80188050;
extern s32 D_sc01_001_801EDA0C;
extern u8 D_sc01_001_801884A8;
extern s32 D_sc01_001_801EDA1C;
extern s32 D_sc01_001_801EDA18;
extern u8 D_sc01_001_801888F8;
extern s32 D_sc01_001_801ED9F0;
extern void (*D_sc01_001_80188E20[])();
extern void func_sc01_001_801832BC();
extern s32 D_sc01_001_801EDA08;
extern s32 D_sc01_001_801ED9E4;
extern s32 D_sc01_001_801EDA00;
extern void func_80143B6C();
extern u8 D_sc01_001_80188C0C;
extern u8 D_sc01_001_80188BF4;
extern s32 D_sc01_001_801F3040;
extern s32 func_sc01_001_80183128();

extern void func_800CFBCC();
extern u8 D_sc01_001_80183B84;
extern u8 D_sc01_001_80199934;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012B200();


extern s32 D_sc01_001_801F3038;
extern s32 D_sc01_001_801F303C;

extern s32 D_800DE2F8[];

typedef union { s32 l; struct { s16 lo, hi; } w; } LW50;
typedef struct { LW50 x, y, z; } LV3;
typedef struct { s32 active; s32 timer; LV3 pos; V3 tgt; V3 dir; LV3 old; V3 vel; V3 half; } Spark50;
extern Spark50 D_sc01_001_801EDA44[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc01_001_8017BEBC(u8 *obj) {
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

void func_sc01_001_8017CD9C(u8 *arg0) {
    D_sc01_001_80187294[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_001_8017CDD8(u8 *arg0) {
    func_80019028();
    func_sc01_001_8017CF78();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_001_8017CE24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_001_8017CE48(u8 *arg0) {
    D_sc01_001_8018729C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_001_8017CE84(u8 *arg0) {
    func_sc01_001_8017CFA0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_001_8017CEC4(u8 *arg0) {
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

s32 func_sc01_001_8017CF40(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(0);
        return 1;
    }
    return 0;
}

void func_sc01_001_8017CF78(void) {
    func_8016EE40((s32) &D_sc01_001_801872A8, 0x01000000);
}

void func_sc01_001_8017CFA0(void) {
    func_8016EE40((s32) &D_sc01_001_801872B4, 0x01000000);
}

void func_sc01_001_8017CFC8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_001_8017D060, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_001_8017D060((s32) &D_80126948);
}

void func_sc01_001_8017D060(s32 arg0) {
    D_sc01_001_801872B8[AF(arg0, u8, 4)]();
}

extern u8 D_sc01_001_80188630;
extern u8 D_sc01_001_80188720;
extern u8 D_sc01_001_801E4A54;
extern u8 D_sc01_001_801E4A68;
extern u8 D_sc01_001_801E4F1C;
extern u8 D_sc01_001_801E4F44;
extern u8 D_sc01_001_801E4FC0;
extern u8 D_sc01_001_801E4FD4;
extern u8 D_sc01_001_801E4FE8;
extern u8 D_sc01_001_801E4FFC;
extern u8 D_sc01_001_801E5010;
extern u8 D_sc01_001_801E5024;
extern u8 D_sc01_001_801E5038;
extern u8 D_sc01_001_801E5804;
extern u8 D_sc01_001_801E6208;
extern u8 D_sc01_001_801E652C;
extern u8 D_sc01_001_801E6540;
extern u8 D_sc01_001_801E6554;
extern u8 D_sc01_001_801E6568;
extern u8 D_sc01_001_801E657C;
extern u8 D_sc01_001_801E6590;
extern u8 D_sc01_001_801E65A4;
extern u8 D_sc01_001_801E6A30;

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
extern u8 D_sc01_001_801872BC[];
extern s32 func_80148800();
extern void func_sc01_001_8017D13C();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
extern u8 D_sc01_001_801F3168[];

void func_sc01_001_8017D09C(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc01_001_801872BC)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc01_001_8017D13C((s32) arg0, (s32) &v);
}

void func_sc01_001_8017D13C(u8 *arg0, u8 *arg1) {
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

s32 func_sc01_001_8017D2D4(void) {
    return 0x8F;
}

extern u8 D_sc01_001_80187898;
extern u8 D_sc01_001_80187940;
extern u8 D_sc01_001_801879B8;
extern u8 D_sc01_001_80187A60;
extern u8 D_sc01_001_80187AD0;
extern u8 D_sc01_001_80187B18;
extern u8 D_sc01_001_80187BC0;
extern u8 D_sc01_001_80187C48;
extern u8 D_sc01_001_80187D90;
extern u8 D_sc01_001_80187E60;
extern u8 D_sc01_001_801D78C4;
extern u8 D_sc01_001_801D8B88;
extern u8 D_sc01_001_801D8EAC;
extern u8 D_sc01_001_801D9360;
extern u8 D_sc01_001_801D9CD8;
extern u8 D_sc01_001_801D9DD4;
extern u8 D_sc01_001_801DAB54;
extern u8 D_sc01_001_801DB140;
extern u8 D_sc01_001_801DB504;
extern u8 D_sc01_001_801DB518;
extern u8 D_sc01_001_801DB554;
extern u8 D_sc01_001_801DB5E0;
extern u8 D_sc01_001_801DB68C;
extern u8 D_sc01_001_801DB960;
extern u8 D_sc01_001_801DBAAC;
extern u8 D_sc01_001_801DBAC0;
extern u8 D_sc01_001_801DBAD4;
extern u8 D_sc01_001_801DBB40;
extern u8 D_sc01_001_80187F90;
extern u8 D_sc01_001_80187FE8;
extern u8 D_sc01_001_80188148;
extern u8 D_sc01_001_801881D0;
extern u8 D_sc01_001_80188298;
extern u8 D_sc01_001_801DBEAC;
extern u8 D_sc01_001_801DD170;
extern u8 D_sc01_001_801DD624;
extern u8 D_sc01_001_801DD64C;
extern u8 D_sc01_001_801DD6C8;
extern u8 D_sc01_001_801DDCB4;
extern u8 D_sc01_001_801DDCC8;
extern u8 D_sc01_001_801DDCDC;
extern u8 D_sc01_001_801DDCF0;
extern u8 D_sc01_001_801DE224;
extern u8 D_sc01_001_801DEA28;
extern u8 D_sc01_001_801DF1F4;
extern u8 D_sc01_001_801DFBF8;
extern u8 D_sc01_001_801DFF1C;
extern u8 D_sc01_001_801E00B8;
extern u8 D_sc01_001_801E00CC;
extern u8 D_sc01_001_801E00E0;
extern u8 D_sc01_001_801E00F4;
extern u8 D_sc01_001_801E03C8;
extern u8 D_sc01_001_801E03DC;
extern u8 D_sc01_001_801E0868;
extern u8 D_sc01_001_80188500;
extern u8 D_sc01_001_80188568;
extern u8 D_sc01_001_801E6A44;
extern u8 D_sc01_001_801E7D08;
extern u8 D_sc01_001_801E81BC;
extern u8 D_sc01_001_801E81E4;
extern u8 D_sc01_001_801E8260;
extern u8 D_sc01_001_801E8BC4;
extern u8 D_sc01_001_801E8BD8;
extern u8 D_sc01_001_801E8F9C;
extern u8 D_sc01_001_801E8FB0;
extern u8 D_sc01_001_801E8FC4;
extern u8 D_sc01_001_801E94F8;
extern u8 D_sc01_001_801E9CFC;
extern u8 D_sc01_001_801E9D10;
extern u8 D_sc01_001_801EA42C;
extern u8 D_sc01_001_801EA440;
extern u8 D_sc01_001_801EA454;
extern u8 D_sc01_001_801EA468;
extern u8 D_sc01_001_801EA47C;
extern u8 D_sc01_001_801EA490;
extern u8 D_sc01_001_801EA4A4;
extern u8 D_sc01_001_801EA4B8;
extern u8 D_sc01_001_801EA4CC;
extern u8 D_sc01_001_801EA7F8;
extern u8 D_sc01_001_801EA80C;
extern u8 D_sc01_001_801887E8;
extern u8 D_sc01_001_801889C8;
extern u8 D_sc01_001_801E087C;
extern u8 D_sc01_001_801E0890;
extern u8 D_sc01_001_801E08A4;
extern u8 D_sc01_001_801E08CC;
extern u8 D_sc01_001_801E0948;
extern u8 D_sc01_001_801E12AC;
extern u8 D_sc01_001_801E1898;
extern u8 D_sc01_001_801E18AC;
extern u8 D_sc01_001_801E18C0;
extern u8 D_sc01_001_801E18D4;
extern u8 D_sc01_001_801E18E8;
extern u8 D_sc01_001_801E18FC;
extern u8 D_sc01_001_801E3048;
extern u8 D_sc01_001_801E3814;
extern u8 D_sc01_001_801E4218;
extern u8 D_sc01_001_801E453C;
extern u8 D_sc01_001_801E4550;
extern u8 D_sc01_001_801E4564;
extern u8 D_sc01_001_801E4578;
extern u8 D_sc01_001_801E458C;
extern u8 D_sc01_001_801E45A0;
extern u8 D_sc01_001_801E45B4;
extern u8 D_sc01_001_801E4A40;
extern u8 D_sc01_001_801872D8;
extern u8 D_sc01_001_80187360;
extern u8 D_sc01_001_80187478;
extern u8 D_sc01_001_80187488;
extern u8 D_sc01_001_80187590;
extern u8 D_sc01_001_801875F8;
extern u8 D_sc01_001_80187680;
extern u8 D_sc01_001_801877F0;
extern u8 D_sc01_001_801D3174;
extern u8 D_sc01_001_801D319C;
extern u8 D_sc01_001_801D3924;
extern u8 D_sc01_001_801D443C;
extern u8 D_sc01_001_801D4450;
extern u8 D_sc01_001_801D4464;
extern u8 D_sc01_001_801D4AD0;
extern u8 D_sc01_001_801D621C;
extern u8 D_sc01_001_801D6230;
extern u8 D_sc01_001_801D7400;
extern u8 D_sc01_001_801D743C;
extern u8 D_sc01_001_801D74E0;
extern u8 D_sc01_001_801D7584;
extern u8 D_sc01_001_801D7598;
extern s32 D_sc01_001_801ED9F8;
extern s32 D_sc01_001_801ED9FC;
extern void func_8012C218();

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D2DC);

s32 func_sc01_001_8017EBA4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8013767C();
    D_sc01_001_801EDA20 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017EBCC);

s32 func_sc01_001_8017EC18(void) {
    return D_sc01_001_801EDA20 != 0;
}

void func_sc01_001_8017EC28(s32 arg0) {
    switch (arg0) {
    case 0:
        break;
    case 2:
        D_sc01_001_801EDA10 = arg0;
        break;
    case 5:
        D_sc01_001_801EDA10 = arg0;
        break;
    case 0x54B:
        D_sc01_001_801EDA08 = arg0;
        break;
    case 1:
        D_sc01_001_801EDA10 = arg0;
        D_sc01_001_801EDA0C = arg0;
    case 0x2424:
    case 0x5151B:
        D_sc01_001_801EDA14 = arg0;
        break;
    case 3:
        D_sc01_001_801EDA10 = arg0;
        D_sc01_001_801EDA14 = 4;
        D_sc01_001_801EDA18 = 2;
        D_sc01_001_801EDA1C = 2;
        goto l_1b8;
    case 4:
        D_sc01_001_801EDA10 = arg0;
        D_sc01_001_801EDA14 = 5;
        D_sc01_001_801EDA1C = 3;
        D_sc01_001_801EDA18 = 3;
        goto l_1b8;
    case 0xB:
        D_sc01_001_801EDA10 = 0xA;
        break;
    case 0x3031:
        D_sc01_001_801EDA10 = 8;
        goto l_1b0;
    case 0x30B:
        D_sc01_001_801EDA18 = arg0;
        D_sc01_001_801EDA0C = arg0;
    case 9:
    case 0x37B:
    case 0x3131:
    l_010:
        D_sc01_001_801EDA10 = arg0;
        break;
    case 0x35C:
        D_sc01_001_801EDA08 = 0x35C;
        break;
    case 0x38A:
    case 0x3737:
    case 0x5858:
        D_sc01_001_801EDA10 = arg0;
    case 0x5151:
    l_03c:
        D_sc01_001_801EDA14 = arg0;
        D_sc01_001_801EDA1C = arg0;
        goto l_1b0;
    case 0x4141:
        D_sc01_001_801EDA08 = arg0;
        goto l_03c;
    case 0x4242:
        D_sc01_001_801EDA08 = arg0;
        D_sc01_001_801EDA10 = arg0;
        goto l_1b8;
    case 0xD:
        D_sc01_001_801EDA10 = 0xC;
        break;
    case 0x4747:
        D_sc01_001_801EDA18 = arg0;
    case 0x35D:
    case 0x35B:
    case 0x3636:
    case 0x4848:
    case 0x4949:
    l_098:
        D_sc01_001_801EDA08 = arg0;
        break;
    case 0x5151C:
        D_sc01_001_801EDA08 = 0x51C;
        break;
    case 0x53C:
        D_sc01_001_801EDA08 = 0x5252;
        break;
    case 0x55B:
        D_sc01_001_801EDA10 = 0x5555;
        break;
    case 0x38B:
    case 0x57B:
    case 0x3939:
    case 0x5656:
    l_0dc:
        D_sc01_001_801EDA10 = arg0;
    case 0x53B:
    case 0x4040:
    case 0x5555:
    case 0x5050:
    case 0x5252:
    case 0x5454:
    l_0e4:
        D_sc01_001_801EDA14 = arg0;
        D_sc01_001_801EDA1C = arg0;
        D_sc01_001_801EDA18 = arg0;
        D_sc01_001_801EDA0C = arg0;
        goto l_098;
    case 0x5959:
        D_sc01_001_801EDA10 = arg0;
        goto l_098;
    case 0x6060:
        (&D_sc01_001_801EDA0C)[1] = arg0;
        goto l_1b8;
    case 0xF:
        D_sc01_001_801EDA18 = 6;
        D_sc01_001_801EDA1C = 6;
        break;
    case 0x10:
        D_sc01_001_801EDA08 = 1;
        break;
    case 0x11:
        D_sc01_001_801EDA08 = 2;
        D_sc01_001_801EDA10 = 0x3333;
        break;
    case 0x12:
        D_sc01_001_801EDA10 = 0xE;
        D_sc01_001_801EDA14 = 8;
        D_sc01_001_801EDA18 = 7;
        D_sc01_001_801EDA1C = 7;
        D_sc01_001_801EDA0C = 7;
        break;
    case 0x100:
    l_1b0:
        D_sc01_001_801EDA18 = arg0;
    l_1b8:
        D_sc01_001_801EDA0C = arg0;
        break;
    case 6:
        goto l_010;
    case 7:
        goto l_010;
    case 0x53A:
        goto l_0e4;
    case 0x57A:
        goto l_0dc;
    }
}

s32 func_sc01_001_8017F1C8(s32 arg0) {
    D_sc01_001_801ED9DC = 0;
    D_sc01_001_801ED9D4 = arg0;
    return func_80174E9C(arg0);
}

s32 func_sc01_001_8017F1F8(void) {
    s32 var_v0;

    var_v0 = D_sc01_001_801ED9D4;
    if (var_v0 != 0) {
        var_v0 = func_80174ED4() << 0x10;
        if (var_v0 != 0) {
            D_sc01_001_801ED9D4 = 0;
        }
    }
    return var_v0;
}

void func_sc01_001_8017F238(u8 *arg0) {
    func_sc01_001_8017D2DC();
    D_sc01_001_80188DD0[AF(arg0, u16, 2)](arg0);
    func_sc01_001_80182C58();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F28C);

void func_sc01_001_8017F328(u8 *arg0) {
    switch (D_sc01_001_801EDA10) {
    case 0x0:
        break;
    case 0x1:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D78C4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x2:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187940);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D8B88);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D8EAC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4:
        SetScript((s32) arg0, (s32) &D_sc01_001_801879B8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D9CD8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5:
        AF(arg0, u16, 2)++;
        break;
    case 0x6:
        AF(arg0, u16, 2)++;
        break;
    case 0x7:
        AF(arg0, u16, 2)++;
        break;
    case 0x8:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187B18);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D9DD4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x9:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187A60);
        AF(arg0, u16, 2)++;
        break;
    case 0xA:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187AD0);
        AF(arg0, u16, 2)++;
        break;
    case 0x3333:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        AF(arg0, u16, 2)++;
        break;
    case 0x30B:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3131:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187E60);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3737:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DAB54);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x37B:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187B18);
        AF(arg0, u16, 2)++;
        break;
    case 0x38A:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187D90);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB140);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB504);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3939:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB518);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4242:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB554);
        AF(arg0, u16, 2) = 3;
        break;
    case 0xC:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        AF(arg0, u16, 2)++;
        break;
    case 0x5555:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB5E0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5656:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB68C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DB960);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DBAAC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5858:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DBAC0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5959:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187BC0);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DBAD4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x6060:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187C48);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DBB40);
        AF(arg0, u16, 2) = 3;
        break;
    case 0xE:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187898);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D9360);
        AF(arg0, u16, 2) = 3;
        break;
    }
    if (D_sc01_001_801EDA10 != 0) {
        D_sc01_001_801EDA10 = 0;
    }
}

void func_sc01_001_8017F7F4(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA10 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_8017F830(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA10 != 0)) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8017F878(u8 *arg0) {
    D_sc01_001_80188DE0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F8B4);

void func_sc01_001_8017F950(u8 *arg0) {
    switch (D_sc01_001_801EDA14) {
    case 0x0:
        break;
    case 0x1:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187FE8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DBEAC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x2:
        AF(arg0, u16, 2)++;
        break;
    case 0x3:
        AF(arg0, u16, 2)++;
        break;
    case 0x4:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187FE8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DD170);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187F90);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DD64C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x2424:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188298);
        AF(arg0, u16, 2)++;
        break;
    case 0x3737:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DD6C8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DDCB4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DDCC8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3939:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DDCDC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4040:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DDCF0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4141:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DE224);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5050:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DEA28);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5151:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DF1F4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5151B:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188148);
        AF(arg0, u16, 2)++;
        break;
    case 0x5151C:
        SetScript((s32) arg0, (s32) &D_sc01_001_801881D0);
        AF(arg0, u16, 2)++;
        break;
    case 0x5252:
        SetScript((s32) arg0, (s32) &D_sc01_001_801881D0);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DFBF8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DFF1C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E00B8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5454:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E00CC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5555:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E00E0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5656:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E00F4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E03C8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E03DC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5858:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E0868);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x8:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187FE8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801DD624);
        AF(arg0, u16, 2) = 3;
        break;
    }
    if (D_sc01_001_801EDA14 != 0) {
        D_sc01_001_801EDA14 = 0;
    }
}

void func_sc01_001_8017FD70(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA14 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_8017FDAC(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA14 != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_80188050);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8017FE08(u8 *arg0) {
    D_sc01_001_80188DF0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017FE44);

void func_sc01_001_8017FEE0(u8 *arg0) {
    switch (D_sc01_001_801EDA0C) {
    case 0x0:
        break;
    case 0x1:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188500);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6A44);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188500);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E7D08);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4:
        SetScript((s32) arg0, (s32) &D_sc01_001_801884A8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E81E4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3031:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E8260);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x30B:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188568);
        AF(arg0, u16, 2)++;
        break;
    case 0x3737:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E8BC4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E8BD8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E8F9C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3939:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E8FB0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4040:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E8FC4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4141:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E94F8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4242:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E9CFC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5050:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E9D10);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5151:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA42C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5252:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA440);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA454);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA468);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5454:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA47C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5555:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA490);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5656:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA4A4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA4B8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA4CC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5858:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA7F8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x6060:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801EA80C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x7:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188500);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E81BC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x100:
        SetScript((s32) arg0, (s32) &D_sc01_001_801884A8);
        AF(arg0, u16, 2)++;
        break;
    case 0x2:
        AF(arg0, u16, 2)++;
        break;
    }
    if (D_sc01_001_801EDA0C != 0) {
        D_sc01_001_801EDA0C = 0;
    }
}

void func_sc01_001_801803A4(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA0C != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_801803E0(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA0C != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_801884A8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8018043C(u8 *arg0) {
    D_sc01_001_80188E00[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180478);

void func_sc01_001_80180514(u8 *arg0) {
    switch (D_sc01_001_801EDA1C) {
    case 0x0:
        break;
    case 0x1:
        AF(arg0, u16, 2)++;
        break;
    case 0x2:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188720);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4A54);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188630);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4F44);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3737:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FC0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FD4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FE8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3939:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FFC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4040:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5010);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4141:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5024);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5050:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5038);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5151:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5804);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5252:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6208);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E652C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6540);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5454:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6554);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5555:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6568);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5656:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E657C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6590);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E65A4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5858:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6A30);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x6:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188630);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4A68);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x7:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188630);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4F1C);
        AF(arg0, u16, 2) = 3;
        break;
    }
    if (D_sc01_001_801EDA1C != 0) {
        D_sc01_001_801EDA1C = 0;
    }
}

void func_sc01_001_80180854(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA1C != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_80180890(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA1C != 0)) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_801808D8(u8 *arg0) {
    D_sc01_001_80188E10[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180914);

void func_sc01_001_801809B0(u8 *arg0) {
    switch (D_sc01_001_801EDA18) {
    case 0x0:
        break;
    case 0x2:
        SetScript((s32) arg0, (s32) &D_sc01_001_801888F8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E087C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3:
        SetScript((s32) arg0, (s32) &D_sc01_001_801887E8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E08CC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3031:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E0948);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x30B:
        SetScript((s32) arg0, (s32) &D_sc01_001_801889C8);
        AF(arg0, u16, 2)++;
        break;
    case 0x3737:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E12AC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E1898);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E18AC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3939:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E18C0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4040:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E18D4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4141:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E18E8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4747:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E18FC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5050:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E3048);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5151:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E3814);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5252:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4218);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E453C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4550);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5454:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4564);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5555:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4578);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5656:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E458C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E45A0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E45B4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5858:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4A40);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x6:
        SetScript((s32) arg0, (s32) &D_sc01_001_801887E8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E0890);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x7:
        SetScript((s32) arg0, (s32) &D_sc01_001_801887E8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E08A4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x100:
        SetScript((s32) arg0, (s32) &D_sc01_001_801888F8);
        AF(arg0, u16, 2)++;
        break;
    case 0x1:
        AF(arg0, u16, 2)++;
        break;
    }
    if (D_sc01_001_801EDA18 != 0) {
        D_sc01_001_801EDA18 = 0;
    }
}

void func_sc01_001_80180E54(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA18 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_80180E90(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA18 != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_801888F8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_80180EEC(u8 *arg0) {
    D_sc01_001_80188E20[AF(arg0, u16, 2)]();
    if (((u16) AF(arg0, u16, 2) >= 2U) && (D_sc01_001_801ED9F0 == 1)) {
        func_sc01_001_801832BC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180F64);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181000);

void func_sc01_001_801810A4(u8 *arg0) {
    switch (D_sc01_001_801EDA08) {
    case 0x0:
        break;
    case 0x1:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187590);
        AF(arg0, u16, 2) = 5;
        break;
    case 0x2:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187360);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D319C);
        D_sc01_001_801ED9F8 = 0xA;
        D_sc01_001_801ED9FC = 0x28;
        AF(arg0, u16, 2) = 9;
        break;
    case 0x4:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187478);
        AF(arg0, u16, 2)++;
        break;
    case 0x3636:
        SetScript((s32) arg0, (s32) &D_sc01_001_801872D8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D3924);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x38B:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187680);
        AF(arg0, u16, 2) = 7;
        break;
    case 0x4040:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D443C);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x4141:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D4450);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x4242:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187680);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D4464);
        AF(arg0, u16, 2) = 0xC;
        break;
    case 0x4747:
        SetScript((s32) arg0, (s32) &D_sc01_001_801872D8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D4AD0);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x4848:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187680);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D621C);
        func_sc01_001_80182B00(arg0);
        AF(arg0, u16, 2) = 7;
        break;
    case 0x5050:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D6230);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x51C:
        SetScript((s32) arg0, (s32) &D_sc01_001_801877F0);
        AF(arg0, u16, 2)++;
        break;
    case 0x5252:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187478);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D7400);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x53A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D3174);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x53B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D3174);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x53C:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D7400);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x5454:
        SetScript((s32) arg0, (s32) &D_sc01_001_80187488);
        AF(arg0, u16, 2)++;
        break;
    case 0x3939:
        SetScript((s32) arg0, (s32) &D_sc01_001_801872D8);
        AF(arg0, u16, 2)++;
        break;
    case 0x4949:
        SetScript((s32) arg0, (s32) &D_sc01_001_801872D8);
        AF(arg0, u16, 2)++;
        break;
    case 0x54B:
        SetScript((s32) arg0, (s32) &D_sc01_001_801872D8);
        AF(arg0, u16, 2)++;
        break;
    case 0x5555:
        SetScript((s32) arg0, (s32) &D_sc01_001_801872D8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D743C);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x5656:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D74E0);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D7584);
        AF(arg0, u16, 2) = 4;
        break;
    case 0x57B:
        SetScript((s32) arg0, (s32) &D_sc01_001_801875F8);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801D7598);
        AF(arg0, s16, 0xDE) = 4;
        AF(arg0, u16, 2) = 0xB;
        break;
    case 0x5959:
        func_8012C218(arg0);
        break;
    }
    if (D_sc01_001_801EDA08 != 0) {
        D_sc01_001_801EDA08 = 0;
    }
}

void func_sc01_001_8018150C(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_8018153C(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_80181584(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_001_80187338);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_001_801815D8(u8 *arg0) {
    if (D_sc01_001_801EDA08 != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_801815F8(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_001_80187758);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_001_8018164C(s32 arg0) {
    func_sc01_001_80182B00(arg0);
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript(arg0, (s32) &D_sc01_001_80187758);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801816A4);

void func_sc01_001_80181784(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = D_sc01_001_801EDA00 - 1;
    D_sc01_001_801EDA00 = temp_v0;
    if (temp_v0 == 0) {
        D_sc01_001_801ED9E4 = 1;
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_801817BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xDE) - 1;
    AF(arg0, u16, 0xDE) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_80143B6C((s32) arg0, 1);
        AF(arg0, u16, 0xDE) = 0xAU;
    }
    if ((func_sc01_001_80182B00((s32) arg0) != 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_80181834(void) {
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8018183C);

s32 func_sc01_001_80181A28(void) {
    s32 var_v0;

    var_v0 = 0x4FB0;
    do {
        AF(D_sc01_001_801EDA44, s32, var_v0) = 0;
        var_v0 -= 0x50;
    } while (var_v0 >= 0);
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181A4C);

void func_sc01_001_80181E04(void) {
    MtxDCM ls;
    SV8 v0;
    SV8 v1;
    s32 flag;
    s32 sz1, sz2, sz3;
    u8 *pk;
    u32 *ot;
    s32 i;
    s32 z;

    GsGetLs(D_sc01_001_801F3168, &ls);
    GsSetLsMatrix(&ls);
    pk = D_800A5E60;
    ot = D_800A6610[D_800B9A02];
    for (i = 0; i < 256; i++) {
        if (D_sc01_001_801EDA44[i].active == 0) continue;
        v0.x = D_sc01_001_801EDA44[i].pos.x.w.hi;
        v0.y = D_sc01_001_801EDA44[i].pos.y.w.hi;
        v0.z = D_sc01_001_801EDA44[i].pos.z.w.hi;
        v1.x = D_sc01_001_801EDA44[i].old.x.w.hi;
        v1.y = D_sc01_001_801EDA44[i].old.y.w.hi;
        v1.z = D_sc01_001_801EDA44[i].old.z.w.hi;
        D_sc01_001_801EDA44[i].pos.x.l += D_sc01_001_801EDA44[i].vel.x;
        D_sc01_001_801EDA44[i].pos.y.l += D_sc01_001_801EDA44[i].vel.y;
        D_sc01_001_801EDA44[i].pos.z.l += D_sc01_001_801EDA44[i].vel.z;
        if (D_sc01_001_801EDA44[i].timer == 0) {
            D_sc01_001_801EDA44[i].old.x.l += D_sc01_001_801EDA44[i].vel.x;
            D_sc01_001_801EDA44[i].old.y.l += D_sc01_001_801EDA44[i].vel.y;
            D_sc01_001_801EDA44[i].old.z.l += D_sc01_001_801EDA44[i].vel.z;
        } else {
            D_sc01_001_801EDA44[i].timer--;
        }
        D_sc01_001_801EDA44[i].vel.x += D_sc01_001_801EDA44[i].half.x;
        D_sc01_001_801EDA44[i].vel.y += D_sc01_001_801EDA44[i].half.y;
        D_sc01_001_801EDA44[i].vel.z += D_sc01_001_801EDA44[i].half.z;
        if (D_sc01_001_801EDA44[i].vel.x > 0) {
            if (D_sc01_001_801EDA44[i].pos.x.l > D_sc01_001_801EDA44[i].tgt.x) {
                D_sc01_001_801EDA44[i].active = 0;
            }
        } else {
            if (D_sc01_001_801EDA44[i].pos.x.l < D_sc01_001_801EDA44[i].tgt.x) {
                D_sc01_001_801EDA44[i].active = 0;
            }
        }
        if (D_sc01_001_801EDA44[i].active == 0) continue;
        gte_ldv3(&v0, &v1, &v1);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & 0x7F85E000) continue;
        gte_stsxy01(pk + 0xC, pk + 0x14);
        gte_stsz3(&sz1, &sz2, &sz3);
        z = (sz1 + sz2) / 8;
        setlen(pk, 5);
        AF(pk, u32, 4) = 0xE1000020;
        AF(pk, u8, 0xB) = 0x52;
        AF(pk, u8, 8) = 0;
        AF(pk, u8, 9) = 0xE0;
        AF(pk, u8, 0xA) = 0x88;
        AF(pk, u8, 0x10) = 0x40;
        AF(pk, u8, 0x11) = 0x60;
        AF(pk, u8, 0x12) = 0x10;
        addPrim(&ot[z], pk);
        pk += 0x18;
    }
    D_800A5E60 = pk;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182238);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182284);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801824EC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8018275C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182974);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182A14);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182A48);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182B00);

void func_sc01_001_80182B60(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xCC) = arg1;
}

s32 func_sc01_001_80182B68(s32 arg0) {
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188C0C), 0x280, 0x188);
}

s32 func_sc01_001_80182B9C(s32 arg0) {
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188BF4), 0x200, 0x100);
}

s32 func_sc01_001_80182BD0(s32 arg0) {
    D_sc01_001_801F3040 = 1;
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188C0C), 0x280, 0x188);
}

void func_sc01_001_80182C10(s32 arg0) {
    MoveImage((s32) &D_sc01_001_80188C0C, 0x280, 0x188);
    D_sc01_001_801F3040 = 0;
    D_sc01_001_801F3038 = 0x3C;
    D_sc01_001_801F303C = 0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182C58);

void func_sc01_001_80182D04(s32 arg0) {
    s32 *p;

    switch (arg0) {
    case 0:
        p = D_800DE2F8;
        *p |= 0x01000000;
        D_800DE2F8[1] |= 0x01000000;
        D_800DE2F8[2] |= 0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] |= 0x01000000;
        break;
    case 1:
        D_800DE2F8[0] &= ~0x01000000;
        D_800DE2F8[1] &= ~0x01000000;
        D_800DE2F8[2] &= ~0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] &= ~0x01000000;
        break;
    case 2:
        D_800DE2F8[0] &= ~0x01000000;
        D_800DE2F8[1] |= 0x01000000;
        D_800DE2F8[2] &= ~0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] &= ~0x01000000;
        break;
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182EB0);

void func_sc01_001_80182F58(u8 *arg0) {
    D_sc01_001_80188E58[AF(arg0, u16, 2)]();
}

void func_sc01_001_80182F94(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_001_80199934);
    func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
    SetScript((s32) arg0, (s32) &D_sc01_001_80183B84);
    func_8012B200((s32) arg0);
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183034);

void func_sc01_001_801830A8(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if (func_sc01_001_80183128(arg0, 1, 0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x100);
}

void func_sc01_001_80183120(void) {
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183128);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801831EC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801832BC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801833A0);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801835C8);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183748);
