#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_001_8017BE9C(void) {
}

void func_sc07_001_8017BEA4(void) {
}

void func_sc07_001_8017BEAC(void) {
}

void func_sc07_001_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc07_001_80184F68[])();
void func_sc07_001_8017DA7C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_001_80184F70[])();
extern void func_800D1EBC();
extern u8 D_sc07_001_80184F7C;
extern void func_8016EE40();
extern u8 D_sc07_001_80184F80;
extern void func_sc07_001_8017DC40();
extern void (*D_sc07_001_80184F84[])();
extern void (*D_sc07_001_80185380[])();
extern void (*D_sc07_001_80185388[])();
extern void (*D_sc07_001_801853E0[])();
extern void (*D_sc07_001_801853FC[])();
extern void (*D_sc07_001_80185470[])();
extern void (*D_sc07_001_80185690[])();
extern void (*D_sc07_001_8018569C[])();
extern void func_8012AD50();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void func_8002931C();
extern s32 func_8013373C();
extern u16 D_sc07_001_801AAD8C;


extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 D_sc07_001_801AABA0;
extern void func_8012A018();
extern void func_8012A094();
extern u16 D_800B9AB8;
extern s32 D_80126950;
extern s16 D_80126960;
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern u16 D_sc07_001_801AAD64;
extern u16 D_sc07_001_801AAD68;
extern void (*D_sc07_001_8018533C[])();
extern s32 func_sc07_001_8017ED50();
extern void func_8012E8A8();
extern s16 D_80126B62;
extern s32 func_8012E544();
extern s32 func_8012E88C();
extern s32 func_8012BEE8();
extern u8 D_80126B58;
extern u8 D_sc07_001_801851F4;
extern s32 func_80172658();
extern s32 func_8012BE54();
extern void func_80178B18();
extern s32 func_8012C588();
extern s32 func_sc07_001_8017EDC0();
extern u8 D_sc07_001_80185368;
extern s32 func_8012CC64();
extern void func_8012C218();
extern void func_8012AD80();
extern void func_sc07_001_8017FE38();
extern s32 func_sc07_001_80180570();
extern void func_8012E014();
extern u8 D_sc07_001_801853EC;
extern u8 D_sc07_001_8019E510;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc07_001_80184FD0;
extern u8 D_sc07_001_80185440;
extern u8 D_sc07_001_801A1BC0;
extern s32 D_sc07_001_801A1BDC;
extern u8 D_sc07_001_801AAD90;
extern s32 func_8012B2CC();
extern void func_80132288();
extern s16 D_80126944;
extern void func_sc07_001_8017DB70();
extern void func_8012A568();

extern void func_sc07_001_8017F4E4();
extern void func_sc07_001_8017F668();

extern u16 D_800B9ABA;
extern u16 D_80126BE0;
extern u16 D_80126BE2;
extern u16 D_80126BE4;

extern u8 D_800AE620;
extern s32 func_80135004();
typedef struct { s16 m[3][3]; s32 t[3]; } MX;

extern u8 D_800D3918;
extern u8 D_80126B5C;
extern s32 func_8012B0B4();
extern s32 func_8012B744();
extern s32 func_8012B8A4();
extern s32 func_8012B200();
extern s32 func_8012B178();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc07_001_8017BEBC(u8 *obj) {
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

s32 func_sc07_001_8017CD9C(s32 arg0) {
    s32 sp10[8];
    s32 temp_v0;

    GsInitCoordinate2(0, arg0);
    temp_v0 = GsGetLw(arg0, (s32) sp10);
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
    return temp_v0;
}

extern s32 func_80178970();
extern void func_80178D18();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern s32 func_sc07_001_80181434();
extern s32 func_sc07_001_80181378();


extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern SV8 D_sc07_001_80185034[];
extern void func_8012EC04();
extern s32 func_8012913C();
extern void func_8012C51C();
extern void RotTransSV();
extern u8 *D_sc07_001_801AAD60;
extern s32 func_sc07_001_80180754();
extern u16 D_800B99DA;
extern SV8 *D_sc07_001_80185678[];
extern s16 D_sc07_001_80185688[];
extern SV8 D_sc07_001_801AAD6E[];

extern void RotMatrixZYX();
extern void func_8012F14C();

extern s32 func_8012C354();
extern u8 D_sc07_001_80185000;
extern void func_8001D0E8();
extern u8 D_sc07_001_8019E150;
extern void func_8012C658();
extern SV8 D_sc07_001_801AAD6C[];
extern u8 D_sc07_001_801850BC[];
extern u8 D_sc07_001_80181C88;
extern void func_8013C9C4();
extern s32 func_sc07_001_8017F26C();
extern u8 D_sc07_001_8019E218;
extern void func_8012B23C();
extern SV8 D_sc07_001_80185094[];
extern SV8 D_sc07_001_80185098[];
extern s32 func_800132BC();
extern u8 D_sc07_001_80181CAC;
extern void func_sc07_001_8017E3E8();
extern s32 func_80016EF8();

extern u8 D_80126940;
extern s32 func_80148800();
extern s16 D_sc07_001_80184F8C[];
extern s16 D_sc07_001_80184F90[];
extern s32 ratan2();
extern s32 D_sc07_001_801AAE84;
extern s32 D_sc07_001_80184F94[];
extern s32 D_sc07_001_80184FA8[];
extern s32 D_sc07_001_80184FBC[];
extern void func_8013C0F8();
extern void func_sc07_001_8017CDF0();
extern u8 D_sc07_001_801AAEA0;
extern u8 D_sc07_001_801853A0;
extern u8 D_sc07_001_801853D4;
extern u8 D_sc07_001_801854F8;
extern u8 D_sc07_001_80185478[];
extern s32 D_sc07_001_801AAD9C;
extern void func_8013240C();
extern u8 D_sc07_001_801A3264;
extern u8 D_sc07_001_801A7E14;

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
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_80013F3C();
extern s16 D_sc07_001_801A353C[];

extern WMtx D_800AF648;


typedef struct { u8 b[8]; } B8;

void func_sc07_001_8017CDF0(u8 *obj, u8 *hdr, MtxDCM *m) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    SV8 v[4];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 type;
    u8 *d;
    u8 *d3;
    u8 *a;
    u8 *b;
    u32 *t;

    if (AF(obj, s32, 0) != 0) {
        return;
    }
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(m, &ls);
    GsSetLsMatrix(&ls);
    ot = g_WorldOtTable[(((u16 *)&D_800B9A02))[0]];
    pk = g_PrimNext;
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    c = (ChunkDCM *)(hdr + 0x14);
    for (i = 0; i < n; i++, c++) {
        xl = c->x;
        xh = c->x >> 16;
        yl = c->y;
        yh = c->y >> 16;
        x = c->z;
        y = x >> 16;
        box[0].x = xl; box[0].y = yl; box[0].z = x;
        box[1].x = xh; box[1].y = yl; box[1].z = x;
        box[2].x = xl; box[2].y = yl; box[2].z = y;
        box[3].x = xh; box[3].y = yl; box[3].z = y;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        box[4].x = xl; box[4].y = yh; box[4].z = x;
        box[5].x = xh; box[5].y = yh; box[5].z = x;
        box[6].x = xl; box[6].y = yh; box[6].z = y;
        box[7].x = xh; box[7].y = yh; box[7].z = y;
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
        if ((s16)h < -110 || (s16)l > 110) continue;

        poly = c->poly;
        nf = c->n;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = verts + (w & 0xFFFF);
            b = verts + (w >> 16);
            w = poly[2];
            v[0] = *(SV8 *)a;
            v[1] = *(SV8 *)b;
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            v[2] = *(SV8 *)d3;
            gte_ldv3c(v);
            gte_rtpt();
            gte_stflg(&g.flag);
            if (g.flag & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.z);
            if (g.z <= 0) continue;
            switch (type) {
            case 6:
            case 7:
            { u32 *otp; u32 tw; s16 p0, p1, p2, q0, q1, q2; s32 mz;
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
                if (yh < -110 || yl > 110) continue;
                if (g.sz0 > g.sz1) { mz = g.sz0; if (mz < g.sz2) mz = g.sz2; } else { mz = g.sz1; if (mz < g.sz2) mz = g.sz2; }
                t = (u32 *)poly[0];
                tw = t[0];
                g.z = mz;
                AF(pk, u32, 4) = tw;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((mz >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3c(tmp);
                v[3] = *(SV8 *)d;
                gte_ldv0(&v[3]);
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
                if (yh < -110 || yl > 110) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                zc = zb;
                if (zc < za) zc = za;
                g.z = zc;
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
                otp = (u32 *)(((zc >> 2) << 2) + (u32)ot);
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

void func_sc07_001_8017D8C4(void) {
    func_8002931C(0x04740000);
}

void func_sc07_001_8017D8E4(u8 *arg0) {
    D_sc07_001_80184F68[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_001_8017D920(u8 *arg0) {
    func_sc07_001_8017DA7C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_001_8017D964(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_001_8017D988(u8 *arg0) {
    D_sc07_001_80184F70[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_001_8017D9C4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_001_8017D9E0(u8 *arg0) {
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

void func_sc07_001_8017DA5C(void) {
    func_800D1EBC();
}

void func_sc07_001_8017DA7C(void) {
    func_8016EE40((s32) &D_sc07_001_80184F7C, 0x01000000);
}

void func_sc07_001_8017DAA4(void) {
    func_8016EE40((s32) &D_sc07_001_80184F80, 0x01000000);
}

void func_sc07_001_8017DACC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x800;
    D_sc07_001_801AABA0 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_001_8017DC40, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_001_8017DC40((s32) &D_80126948);
}

void func_sc07_001_8017DB70(void) {
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    D_sc07_001_801AABA0 = (s32) D_800B9AB8;
    func_8012A018((s32) func_sc07_001_8017DC40, 1);
    func_8012A094((s32) &D_80126948);
    D_80126960 = 0x71;
    D_80126950 = 0x190;
    D_80126968 = 0x155;
    D_80126954 = 0x12C;
    func_sc07_001_8017DC40((s32) &D_80126948);
}

void func_sc07_001_8017DC40(s32 arg0) {
    D_sc07_001_80184F84[AF(arg0, u8, 4)]();
}

void func_sc07_001_8017DC7C(u8 *o) {
    SV8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc07_001_80184F8C[t];
    }
    *(B8 *)&v = *(B8 *)&D_80126940;
    if (v.x > 0x840) v.x = 0x840;
    if (v.y < -0xF00) v.y = -0xF00;
    else if (v.y > -0x400) v.y = -0x400;
    if (v.z > -0x4C0) {
        if (v.y > -0x540) v.y = -0x540;
    }
    func_sc07_001_8017DF14(o, &v);
    v.y = ((v.y + 0xF00) * 120) / 0xB00;
    v.x = v.x >> 4;
    func_sc07_001_8017E278(o, &v);
}

void func_sc07_001_8017DDD4(u8 *o) {
    SV8 v;
    u8 t;
    s32 a;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc07_001_80184F90[t];
    }
    *(B8 *)&v = *(B8 *)&D_80126940;
    a = ratan2(v.x, v.z) & 0xFFF;
    if (v.y < -0xF00) v.y = -0xF00;
    else if (v.y > -0x540) v.y = -0x540;
    func_sc07_001_8017E0AC(o, &v, a);
    v.y = ((v.y + 0xF00) * 120) / 0xB00;
    a -= 0x800;
    v.x = (a * 320) / 4096;
    func_sc07_001_8017E278(o, &v);
}

void func_sc07_001_8017DF14(u8 *o, SV8 *b) {
    typedef struct { s16 m[3][3]; s32 t[3]; } MX;
    MX m;
    SV8 v;
    SV8 out;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 8);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 8);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 8);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 8);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 8);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b->x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b->y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b->z;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + b->x;
    m.t[1] = AF(o, s16, 0x2A) + b->y;
    m.t[2] = AF(o, s16, 0x2C) + b->z;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &out);
    AF(o, s32, 0x3C) = out.x;
    AF(o, s32, 0x40) = out.y;
    AF(o, s32, 0x44) = out.z;
}

void func_sc07_001_8017E0AC(u8 *o, SV8 *b, s32 d) {
    MX m;
    SV8 v;
    SV8 out;
    SV8 r;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 8);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 8);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 8);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 8);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 8);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b->x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b->y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b->z;
    r.x = AF(o, u16, 0x18);
    r.y = AF(o, u16, 0x1A) + d;
    r.z = AF(o, u16, 0x1C);
    func_sc07_001_80181194(&r, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &out);
    AF(o, s32, 0x3C) = (out.x >> 3) + AF(o, s16, 0x28) + b->x;
    AF(o, s32, 0x40) = (out.y >> 3) + AF(o, s16, 0x2A) + b->y;
    AF(o, s32, 0x44) = (out.z >> 3) + AF(o, s16, 0x2C) + b->z;
}

s32 func_sc07_001_8017E278(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_800B9AB8 = AF(arg1, u16, 0) + D_sc07_001_801AABA0;
    temp_v0 = AF(arg1, u16, 2);
    D_800B9ABA = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc07_001_8017E2A8(void) {
    return 0x86;
}

s32 func_sc07_001_8017E2B0(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

void func_sc07_001_8017E2D0(void) {
    s32 i;

    switch (D_sc07_001_801AAE84) {
    case 0:
        for (i = 0; i < 5; i++) {
            func_8013C0F8(D_sc07_001_80184F94[i]);
            func_sc07_001_8017CD9C(D_sc07_001_80184FA8[i]);
            D_sc07_001_80184FBC[i] = 0;
        }
        D_sc07_001_801AAE84++;
        break;
    case 1:
        for (i = 0; i < 5; i++) {
            if (D_sc07_001_80184FBC[i] != 0) {
                func_sc07_001_8017CDF0(&D_sc07_001_801AAEA0, D_sc07_001_80184F94[i], D_sc07_001_80184FA8[i]);
            }
        }
        break;
    }
}

void func_sc07_001_8017E3E8(s32 i, SV8 *v, s32 c) {
    AF(D_sc07_001_80184FA8[i], s32, 0x18) = v->x;
    AF(D_sc07_001_80184FA8[i], s32, 0x1C) = v->y;
    AF(D_sc07_001_80184FA8[i], s32, 0x20) = v->z;
    AF(D_sc07_001_80184FA8[i], s32, 0) = 0;
    D_sc07_001_80184FBC[i] = c;
}

void func_sc07_001_8017E448(u8 *arg0) {
    D_sc07_001_8018533C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc07_001_8017ED50((s32) arg0);
        if (AF(arg0, s32, 0xE0) & 0x10) {
            D_80126B5E = D_sc07_001_801AAD64;
            D_80126B66 = D_sc07_001_801AAD68;
        }
    }
}

void func_sc07_001_8017E4DC(u8 *o) {
    s32 i;

    if (func_8012C354(o, &D_sc07_001_80185000) == 0) {
        D_sc07_001_801AAD60 = 0;
        return;
    }
    func_8001D0E8(AF(o, u8 *, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s32, 0x58) = AF(AF(o, u8 *, 0x78), s32, 8) | 0x50000000;
    SetScript(o, &D_sc07_001_8019E150);
    func_8012E8A8(o);
    AF(o, s16, 2) = 1;
    AF(o, u8, 0x75) = 2;
    AF(o, s16, 0xAE) = -1;
    AF(o, s32, 0xCC) = func_8012C588(0x3A2, o);
    AF(o, s32, 0xD4) = func_8012C588(0x3BC, o);
    D_sc07_001_801AAD60 = o;
    D_sc07_001_801AAD8C = 0;
    for (i = 0; i < 0x24; i++) {
        func_8012C658(0x386, i, o);
    }
    for (i = 0; i < 4; i++) {
        D_sc07_001_801AAD6C[i].x = D_sc07_001_801AAD6C[i].y = D_sc07_001_801AAD6C[i].z = D_sc07_001_801AAD6C[i].pad = 0;
        func_8012C51C(&D_sc07_001_801850BC[i * 0x14], o);
    }
    func_8012C658(0x3C3, 4, o);
}

extern u16 D_sc07_001_801850B4;
extern u16 D_sc07_001_801850B8;
extern s32 func_8012E57C();
void func_sc07_001_8017E64C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 t;

    a.x = D_80126B5E;
    a.y = 0;
    a.z = D_80126B66;
    b.x = D_sc07_001_801850B4;
    b.y = 0;
    b.z = D_sc07_001_801850B8;
    if (func_800132BC(&a, &b) <= 0x9000) {
        t = func_8012E57C(0x3C3, 4);
        if (t != 0) {
            func_8012C218(t);
        }
        ((s32 (*)())func_sc07_001_8017E2B0)();
        AF(o, s16, 2) = 3;
    }
}

void func_sc07_001_8017E6EC(s32 arg0) {
    if (func_80178970() == 1) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        ((s32 (*)())func_sc07_001_8017E2B0)();
    }
}

void func_sc07_001_8017E734(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x80;
    AF(arg0, s16, 2) = 4;
    func_8012E8A8((s32) arg0);
}

void func_sc07_001_8017E760(u8 *arg0) {
    s32 temp_v0;

    if (D_80126B62 < -0xC23) {
        AF(arg0, s16, 2) = 9;
        temp_v0 = func_8012E544(0x3BC);
        if (temp_v0 != 0) {
            func_8012E88C(temp_v0);
        }
    } else if ((func_8012BEE8((s32) arg0) != 0) && (D_80126B62 < -0x624)) {
        AF(arg0, s16, 2) = 5;
    }
}

s32 func_sc07_001_8017E7E8(u8 *arg0) {
    s32 sp10;

    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012E88C((s32) arg0);
    func_8012B0B4((s32) &sp10, func_8012B744((s32) &D_80126B5C, (s32) &D_800D3918), 0x480);
    AF(arg0, s16, 6) = (s16) (D_80126B5E + sp10);
    AF(arg0, s16, 0xA) = (s16) ((*(u16 *)&D_80126B62) + 0x40);
    AF(arg0, s16, 0xE) = (s16) (D_80126B66 + (sp10 >> 0x10));
    AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8012B8A4((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B200((s32) arg0);
    func_8012B178((s32) arg0, -0x1A0000);
    AF(AF(AF(arg0, void *, 0xCC), void *, 0x20), s16, 0x18) = 0x2000;
    AF(AF(AF(arg0, void *, 0xCC), void *, 0x20), s16, 0x1A) = 0x2000;
}

void func_sc07_001_8017E8DC(u8 *o) {
    SV8 v;
    u8 *p;

    p = AF(o, u8 *, 0xCC);
    if (AF(o, u16, 0x34) == 0 && func_8012BEE8() != 0) {
        SetScript(o, &D_sc07_001_8019E150);
        AF(o, u16, 0x34)++;
    }
    AF(AF(p, u8 *, 0x20), u16, 0x18) += 0x200;
    AF(AF(p, u8 *, 0x20), u16, 0x1A) += 0x200;
    if (AF(AF(p, u8 *, 0x20), s16, 0x18) > 0x6000) {
        AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x6000;
    }
    v.y = 0;
    v.x = 0;
    v.z = -0x60;
    ApplyMatrixSV(AF(o, u8 *, 0x20) + 0x34, &v, &v);
    if (func_8012CC64(o, &v) != 0) {
        func_8013C9C4(&D_sc07_001_80181C88);
        func_sc07_001_8017EF30(o);
        AF(o, s16, 2) = 7;
        AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x6000;
        func_8002D4C8(0xB7A, 0);
    }
    if (!(AF(o, s32, 0xE0) & 0x10) && func_sc07_001_8017F26C(o) == 1) {
        AF(o, s32, 0xE0) |= 0x10;
        D_sc07_001_801AAD64 = D_80126B5E;
        D_sc07_001_801AAD68 = D_80126B66;
    }
}

void func_sc07_001_8017EA6C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc07_001_8017EA84(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            SetScript(o, &D_sc07_001_8019E218);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 8) {
            AF(o, u16, 0x34)++;
            AF(o, s32, 0x1C) = 0x40;
            func_8012B23C(o);
            func_8002D4C8(0xB7B, 0);
        }
        break;
    case 2:
        func_8012AD80(o);
        if ((D_800B99DA & 3) == 0) {
            func_sc07_001_8017EF30(o);
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 3;
        }
        break;
    }
    if (!(AF(o, s32, 0xE0) & 0x10) && func_sc07_001_8017F26C(o) == 1) {
        AF(o, s32, 0xE0) |= 0x10;
        D_sc07_001_801AAD64 = D_80126B5E;
        D_sc07_001_801AAD68 = D_80126B66;
    }
}

void func_sc07_001_8017EBE8(s32 arg0) {
    s32 temp_v0;

    if ((D_80126B62 == -0xE82) && (func_80172658((s32) &D_80126B58) != 0) && ((temp_v0 = func_8012E544(0x3BC), (temp_v0 == 0)) || (func_8012BE54(temp_v0) <= 0x10000))) {
        func_80178B18(arg0, (s32) &D_sc07_001_801851F4);
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0xD8) = func_8012C588(0x3A8, arg0);
        func_8012E8A8(arg0);
        AF(arg0, s32, 0x1C) = 0x1F;
        func_800D0C48(1);
    }
}

extern s32 func_8001AAA0();
extern s32 func_801789AC();
extern void func_800D1724();
extern u8 D_sc07_001_80184F3C;
void func_sc07_001_8017ECA0(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_8001AAA0(0x8E) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    }
    if (func_801789AC(o) == 1) {
        D_sc07_001_801AAD60 = 0;
        func_80178D18(o);
        func_8012C218(o);
        func_800D1724(&D_sc07_001_80184F3C);
    }
}

s32 func_sc07_001_8017ED50(s32 arg0) {
    func_sc07_001_8017EDC0(arg0, arg0 + 0xE4, 1, 0);
    func_sc07_001_8017EDC0(arg0, arg0 + 0xE8, 2, 1);
    func_sc07_001_8017EDC0(arg0, arg0 + 0xEC, 4, 2);
    return func_sc07_001_8017EDC0(arg0, arg0 + 0xF0, 8, 3);
}

s32 func_sc07_001_8017EDC0(u8 *o, s32 *t, s32 mask, s32 n) {
    SV8 a;
    SV8 b;
    SV8 *p;

    p = &D_sc07_001_801AAD6C[n];
    if (AF(o, s32, 0xE0) & mask) {
        *t += 0x1000;
        p->y += AF(t, u16, 2);
        if (p->y >= 0x400) {
            *t = 0;
            p->y = 0x400;
            func_sc07_001_8017E3E8(n, p, 0);
        } else {
            func_sc07_001_8017E3E8(n, p, 1);
        }
        if (p->pad == 0) {
            func_8002D4C8(0xC03, 0);
            p->pad = 1;
        }
    } else {
        a.x = D_80126B5E;
        a.y = 0;
        a.z = D_80126B66;
        b.x = D_sc07_001_80185094[n].x;
        b.y = 0;
        b.z = D_sc07_001_80185098[n].x;
        if (func_800132BC(&a, &b) <= 0x9000) {
            AF(o, s32, 0xE0) |= mask;
            func_8013C9C4(&D_sc07_001_80181CAC);
        }
        func_sc07_001_8017E3E8(n, p, 1);
    }
}

void func_sc07_001_8017EF30(u8 *o) {
    typedef struct { SV8 v; s16 a, b, c, d; s32 e; } Prm;
    MX m;
    SV8 w;
    Prm u;
    s32 flag;
    SV8 *p;
    u8 *e;
    s32 i;
    s32 j;
    s32 r;

    u.v.pad = 0x3A7;
    u.a = 0;
    u.b = 0;
    u.e = 0;
    u.d = 0;
    u.c = 0x7FFF;
    p = D_sc07_001_80185034;
    for (j = 0; j < 4; j++) {
        func_8012EC04(o, p->pad, &m);
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        for (i = 0; i < 3; i++, p++) {
            RotTransSV(p, &w, &flag);
            e = (u8 *)func_8012913C(0x22);
            if (e != 0) {
                AF(e, s16, 6) = w.x;
                AF(e, s16, 0xA) = w.y;
                AF(e, s16, 0xE) = w.z;
                r = rand();
                AF(e, u16, 0x34) = ((r % 0x2000 + 0x5000) & ~0xF) | (rand() % 3);
            }
            u.v.x = w.x;
            u.v.y = w.y;
            u.v.z = w.z;
            func_8012C51C(&u, o);
        }
    }
}

void func_sc07_001_8017F0EC(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xD8);
    if ((AF(temp_s0, u16, 0x34) == 0) && (func_8012CC64((s32) temp_s0, (s32) &D_sc07_001_80185368) & 0x2000)) {
        AF(temp_s0, s32, 0x18) = 0xFFFA0000;
        AF(temp_s0, u16, 0x34) = (u16) (AF(temp_s0, u16, 0x34) + 1);
        func_8002D4C8(4, 0xC04);
    }
}

s32 func_sc07_001_8017F15C(u8 *o) {
    u8 *p = AF(o, u8 *, 0xD8);

    func_8012AD80(p);
    switch (AF(p, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0xF8) != 0) {
            return 0;
        }
        AF(p, s32, 0x1C) = 0x70;
        AF(p, s32, 0x18) = 0;
        AF(p, s32, 0x14) = 0xFFFA0000;
        AF(p, u16, 0x34)++;
        func_8002D4C8(4, 0xC04);
        return 0;
    case 1:
        func_8002D4C8(0xC04, 0);
        AF(p, u16, 0x34)++;
    case 2:
        if (func_8012BEE8(p) != 0) {
            func_8002D4C8(4, 0xC04);
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 func_sc07_001_8017F258(u8 *arg0) {
    return AF(arg0, u16, 0x34) == 2;
}

extern void *D_80126B78;
extern s32 func_80135888();
extern void func_8012F568();
extern u8 D_801152A8;
extern SV8 D_sc07_001_80185370[];
s32 func_sc07_001_8017F26C(u8 *o) {
    SV8 a;
    SV8 b;

    func_8012F14C(D_80126B78 + 0x34, &D_sc07_001_80185370[0], &a);
    func_8012F14C(D_80126B78 + 0x34, &D_sc07_001_80185370[1], &b);
    func_8012B2CC(o);
    if (func_80135888(AF(o, s32, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
        func_8012F568(1, 0x4004, AF(AF(o, u8 *, 0x20), s16, 0x12) - 0x400, 0, &b, &D_801152A8);
        return 1;
    }
    return 0;
}

void func_sc07_001_8017F32C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x3BC);
    if (temp_v0 != 0) {
        SetScript(temp_v0, AF(arg0, s32, 0xF8));
    }
}

void func_sc07_001_8017F36C(void) {
    D_sc07_001_801AAD8C += 1;
}

s32 func_sc07_001_8017F38C(u8 *arg0) {
    return AF(arg0, s16, 0x10A) == D_sc07_001_801AAD8C;
}

void func_sc07_001_8017F3A8(u8 *arg0) {
    D_sc07_001_80185380[AF(arg0, u16, 2)]();
}

void func_sc07_001_8017F3E4(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, 0);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 1;
    AF(o, s16, 0xFE) = AF(AF(o, u8 *, 0x64), s16, 0x36);
    AF(o, s16, 2) += 1;
}

void func_sc07_001_8017F470(u8 *arg0) {
    s32 pad[2];
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x64);
    if (AF(temp_s1, s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_sc07_001_8017F4E4((s32) arg0);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(temp_s1, void *, 0x20), u16, 0x12);
    func_sc07_001_8017F668((s32) arg0);
}

void func_sc07_001_8017F4E4(s32 arg0) {
    SV8 a;
    SV8 b;
    SV8 d;
    MX m;
    s32 p;
    s32 i;
    s32 n;

    m = *(MX *)&D_800AE620;
    p = AF(arg0, s32, 0x64);
    RotMatrixY(AF(AF(p, s32, 0x20), s16, 0x12), &m);
    i = 0;
    d.z = 0;
    d.y = 0;
    d.x = 0;
    do {
        a.x = AF(p, u16, 6) + d.x;
        a.y = AF(p, u16, 0xA) + d.y;
        n = i + 1;
        a.z = AF(p, u16, 0xE) + d.z;
        d.y = 0;
        d.x = 0;
        d.z = -(n << 7);
        ApplyMatrixSV(&m, &d, &d);
        b.x = AF(p, u16, 6) + d.x;
        b.y = AF(p, u16, 0xA) + d.y;
        b.z = AF(p, u16, 0xE) + d.z;
        if (func_80135004(1, &a, &b) != 0) {
            AF(arg0, u16, 6) = b.x;
            AF(arg0, u16, 0xA) = b.y - 0x80;
            AF(arg0, u16, 0xE) = b.z;
            return;
        }
        i = n;
    } while (i < 10);
}

void func_sc07_001_8017F668(u8 *o) {
    typedef struct { SV8 p[4]; XY uv[4]; s32 col; s32 code; u8 n; } Arg;
    Arg g;
    s32 i;
    s32 j;

    g.col = 0x808080;
    g.code = 0x50000000;
    g.n = 0x8F;
    g.p[0].y = g.p[1].y = g.p[2].y = g.p[3].y = -0x40;
    g.p[0].z = g.p[1].z = g.p[2].z = g.p[3].z = 0;
    g.uv[0].y = g.uv[1].y = g.uv[2].y = g.uv[3].y = 0x100;
    for (i = 0; i < 8; i++) {
        g.p[0].x = g.p[1].x = g.p[2].x = g.p[3].x = -0x40;
        g.uv[0].x = g.uv[1].x = g.uv[2].x = g.uv[3].x = 0xB60;
        g.p[2].y += 0x10;
        g.p[3].y += 0x10;
        g.uv[2].y += 0xF;
        g.uv[3].y += 0xF;
        for (j = 0; j < 8; j++) {
            g.p[1].x += 0x10;
            g.p[3].x += 0x10;
            g.uv[1].x += 0xF;
            g.uv[3].x += 0xF;
            func_80016EF8(&g, AF(o, u8 *, 0x20) + 0x34);
            g.p[0].x = g.p[1].x;
            g.p[2].x = g.p[3].x;
            g.uv[0].x = g.uv[1].x;
            g.uv[2].x = g.uv[3].x;
        }
        g.p[0].y = g.p[2].y;
        g.p[1].y = g.p[3].y;
        g.uv[0].y = g.uv[2].y;
        g.uv[1].y = g.uv[3].y;
    }
}

void func_sc07_001_8017F7F8(u8 *arg0) {
    D_sc07_001_80185388[AF(arg0, u16, 2)]();
}

void func_sc07_001_8017F834(u8 *o) {
    u8 *m;
    s16 sgn;
    s32 r;
    s32 n;
    s32 t;
    u8 unused[8];
    SV8 *p;

    m = (u8 *)func_8012C1B8();
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0x20) = m;
    func_8001C214(m, 0);
    AF(m, u16, 0x2C) |= 0x10;
    /* sgn is read before it is set: the original uses the stale s1 here */
    AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = sgn % 0x180 + 0x400;
    r = rand();
    AF(o, s16, 0x70) = (r & 1) << 15;
    if ((((s16)r & 1) << 15) == 0) {
        if (r & 1) {
            sgn = 1;
        } else {
            sgn = -1;
        }
        AF(m, s16, 0x10) = sgn * ((s16)r % 128) - 0x200;
        t = sgn * (rand() % 0x300) + 0x800;
        AF(m, s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + t;
        AF(o, s32, 0x48) = 0xC000;
        func_8012B2CC(o);
        func_8012B178(o, -0x80000 - (((s16)r % 9) << 16));
        AF(o, s16, 0xFE) = rand() & 0xF0;
        AF(o, s16, 0x100) = rand() & 0x1F0;
        AF(o, s16, 0x102) = rand() & 0x30;
    } else {
        AF(m, s16, 0x10) = rand() % 0x1000;
        AF(m, s16, 0x12) = rand() % 0x1000;
        AF(o, s32, 0x48) = 0xC000;
    }
    AF(o, s32, 0x1C) = 0x3C;
    p = (SV8 *)(o + 0xDC);
    n = rand() % 12;
    p->x = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p->y = 0;
    n = rand() % 12;
    p->z = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p++;
    n = rand() % 12;
    p->x = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    p->y = 0;
    n = rand() % 12;
    p->z = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p++;
    n = rand() % 12;
    p->x = !(rand() & 1) ? -n - 0x18 : n - 0x18;
    p->y = 0;
    n = rand() % 12;
    p->z = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    p++;
    n = rand() % 12;
    p->x = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    p->y = 0;
    n = rand() % 12;
    p->z = !(rand() & 1) ? -n + 0x18 : n + 0x18;
    AF(o, s16, 0x104) = (rand() % 8) << 5;
    AF(o, s16, 0x106) = (rand() % 6) << 5;
    AF(o, u16, 2)++;
}

void func_sc07_001_8017FD88(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
        temp_a0_2 = AF(arg0, void *, 0x20);
        AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
        temp_a0_3 = AF(arg0, void *, 0x20);
        AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x102));
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_8012C218((s32) arg0);
        return;
    }
    func_8012AD80((s32) arg0);
    func_sc07_001_8017FE38((s32) arg0);
}

void func_sc07_001_8017FE38(u8 *o) {
    WMtx m;
    s32 flag;
    s32 flag2;
    s32 otz;
    u8 *p;
    u32 *ot;
    WMtx *wm;
    u8 *vp;
    u32 x;
    u16 y;
    u32 ty;
    u16 tp;
    s32 t;
    s32 z;

    vp = o + 0xDC;
    ot = g_WorldOtTable[D_800B9A02];
    p = g_PrimNext;
    g_PrimNext = p + 0x28;
    p[3] = 9;
    AF(p, s32, 4) = 0x808080;
    p[7] = 0x2C;
    wm = &D_800AF648;
    gte_SetRotMatrix(wm);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x34);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x36);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x38);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    gte_SetTransMatrix(wm);
    gte_ldlv0(AF(o, u8 *, 0x20) + 0x48);
    gte_rtv0tr();
    gte_stlvnl(&m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(vp, vp + 8, vp + 0x10);
    gte_rtpt();
    gte_stflg(&flag);
    gte_stsxy3(p + 8, p + 0x10, p + 0x18);
    gte_ldv0(vp + 0x18);
    gte_rtps();
    gte_stflg(&flag2);
    flag |= flag2;
    gte_stsxy(p + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if ((flag & ~0x1000) == 0) {
        x = AF(o, u16, 0x104) + 0x140;
        y = AF(o, u16, 0x106);
        AF(p, u16, 0xE) = 0x7800;
        ty = y & 0x100;
        tp = 0x80 | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
        t = tp;
        AF(p, u16, 0x16) = t;
        t = (t & 0xF) * 64;
        x -= t;
        x <<= 1;
        p[0xC] = x;
        t = y;
        if (tp & 0x10) {
            t -= 0x100;
        }
        p[0xD] = t;
        p[0x14] = p[0xC] + 0x1F;
        p[0x15] = p[0xD];
        p[0x1C] = p[0xC];
        p[0x1D] = p[0xD] + 0x1F;
        p[0x24] = p[0x14];
        p[0x25] = p[0x1D];
        z = otz + 1;
        if (z >= 0x1000) {
            z = 0x1000;
        }
        ((PTag *)p)->addr = ((PTag *)&ot[z])->addr;
        ((PTag *)&ot[z])->addr = (u32)p;
    }
}

void func_sc07_001_801801F4(u8 *arg0) {
    D_sc07_001_801853E0[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180230(u8 *o) {
    s32 w;
    s32 a;
    s32 y;

    if (func_8012C354(o, &D_sc07_001_801853A0) != 0) {
        AF(o, s32, 0x58) = AF(AF(o, u8 *, 0x78), s32, 8) | 0x40000000;
        AF(AF(o, u8 *, 0x20), s32, 0x20) = (s32) &D_sc07_001_801853D4;
        a = 0x800 - ((s16) (AF(o, s16, 0x70) % 12) + 1) * 0x155;
        func_8012B0B4(&w, (s16) a, 0x29C);
        AF(o, s16, 6) = w;
        AF(o, s16, 0xE) = w >> 16;
        y = AF(o, s16, 0x70);
        AF(o, s16, 0xA) = -0x552 - (y << 6);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = a + 0x800;
        AF(o, u8, 0x75) = 2;
        AF(o, s16, 2) = 1;
    }
}

void func_sc07_001_80180350(u8 *arg0) {
    if (func_sc07_001_80180570() == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x48) = 0x18000;
        return;
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, u8, 0x74) != 0) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            goto block_7;
        }
    } else {
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s32, 0x48) = 0x18000;
        }
block_7:
        if (AF(arg0, u8, 0x74) != 0) {
            func_8012E014((s32) arg0);
        }
    }
}

void func_sc07_001_80180404(u8 *o) {
    SV8 v;
    SV8 w;
    s32 flag;
    u8 *m;
    u8 *e;
    s32 i;
    s32 r;

    func_8012AD80(o);
    if ((D_800B99DA & 3) == 0) {
        v.x = -0x30;
        v.y = 0;
        v.z = 0x28;
        m = AF(o, u8 *, 0x20) + 0x34;
        gte_SetRotMatrix(m);
        gte_SetTransMatrix(m);
        for (i = 0; i < 5; i++) {
            e = (u8 *)func_8012913C(0x22);
            if (e != 0) {
                RotTransSV(&v, &w, &flag);
                AF(e, s16, 6) = w.x;
                AF(e, s16, 0xA) = w.y;
                AF(e, s16, 0xE) = w.z;
                r = rand();
                AF(e, u16, 0x34) = (((r & 1) << 12) + 0x2000) | (rand() & 1);
            }
            v.x += 0x20;
        }
    }
    if (AF(o, u8, 0x74) != 0) {
        func_8012E014(o);
    }
    if (AF(o, s16, 0xA) >= 0x10) {
        func_8012C218(o);
    }
}

s32 func_sc07_001_80180570(u8 *o) {
    u8 *p;
    SV8 a;
    SV8 b;

    if (D_sc07_001_801AAD60 == 0 || (AF(AF(D_sc07_001_801AAD60, u8 *, 0x20), s32, 4) & 0x80000000)) {
        return 0;
    }
    p = (u8 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    a.x = AF(p, u16, 4); a.y = AF(p, u16, 8); a.z = AF(p, u16, 0xC);
    b.x = AF(p, u16, 4); b.y = AF(p, u16, 8); b.z = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    a.x = AF(p, u16, 4); a.y = AF(p, u16, 0xA); a.z = AF(p, u16, 0xC);
    b.x = AF(p, u16, 4); b.y = AF(p, u16, 0xA); b.z = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    a.x = AF(p, u16, 6); a.y = AF(p, u16, 8); a.z = AF(p, u16, 0xC);
    b.x = AF(p, u16, 6); b.y = AF(p, u16, 8); b.z = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    a.x = AF(p, u16, 6); a.y = AF(p, u16, 0xA); a.z = AF(p, u16, 0xC);
    b.x = AF(p, u16, 6); b.y = AF(p, u16, 0xA); b.z = AF(p, u16, 0xE);
    if (func_sc07_001_80180754(o, D_sc07_001_801AAD60, &a, &b) == 1) return 1;
    return 0;
}

s32 func_sc07_001_80180754(u8 *o, u8 *t, SV8 *a, SV8 *b) {
    SV8 sa;
    SV8 sb;
    s32 flag;
    u8 *m;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(a, &sa, &flag);
    RotTransSV(b, &sb, &flag);
    return func_80135888(AF(t, s32, 0x20), AF(t, s32, 0x58), &sa, &sb) != 0;
}

void func_sc07_001_80180814(u8 *arg0) {
    D_sc07_001_801853FC[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180850(u8 *arg0) {
    D_sc07_001_80185470[AF(arg0, u16, 2)]();
}

void func_sc07_001_8018088C(u8 *o) {
    SV8 *p;
    u8 *e;
    s16 y;
    s16 lim;
    s32 n;

    n = AF(o, s16, 0x70);
    p = D_sc07_001_80185678[n];
    if (p == 0) return;
    if ((u16)(D_800B99DA % 5) != 0) return;
    if (AF(o, s32, 0x3C) == AF(o, s32, 8)) return;
    y = D_sc07_001_801AAD6E[n].x;
    lim = D_sc07_001_80185688[n];
    while (p->pad != -1) {
        if (lim > p->y + y) {
            e = (u8 *)func_8012913C(0x22);
            if (e != 0) {
                AF(e, s16, 6) = p->x;
                AF(e, s16, 0xA) = p->y + y;
                AF(e, s16, 0xE) = p->z;
                AF(e, u16, 0x34) = (rand() % 0xFFF + 0x6000) & 0xFFF0;
                AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC00C;
            }
        }
        p++;
    }
}

void func_sc07_001_80180A2C(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, 0);
    if (AF(o, s16, 0x70) == 4) {
        AF(o, s32, 0x58) = (s32) &D_sc07_001_801854F8 | 0x10000000 | 0x40000000;
        AF(o, s16, 0x5C) = 0x800;
        AF(o, s32, 4) = AF(o, s32, 8) = AF(o, s32, 0xC) = 0;
        AF(o, u16, 2) += 2;
        return;
    }
    AF(o, s32, 0x58) = (s32) (D_sc07_001_80185478 + AF(o, s16, 0x70) * 16) | 0x50000000;
    AF(o, s16, 0x5C) = 0xC00;
    AF(o, u8, 0x75) = 2;
    AF(o, s32, 0x1C) = rand();
    AF(o, u16, 2)++;
    switch (AF(o, s16, 0x70)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x14) += 0xA0;
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0xA0;
        break;
    }
}

void func_sc07_001_80180B54(u8 *arg0) {
    D_sc07_001_80185690[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180B90(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_001_8019E510);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc07_001_801853EC | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 0xA) = -0x1100;
    AF(arg0, s16, 0xE) = -0x240;
    AF(arg0, s32, 0x14) = 0x60000;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_001_80180C2C(u8 *arg0) {
    if ((D_sc07_001_801AAD8C & 0xFFFF) == 3) {
        AF(arg0, s16, 0x34) = 0;
        D_sc07_001_801AAD8C += 1;
    }
    if (AF(arg0, u8, 0x74) != 0) {
        func_8012E014((s32) arg0);
        D_80126BE0 = D_80126B5E;
        D_80126BE2 = D_80126B62;
        D_80126BE4 = D_80126B66;
    }
}

void func_sc07_001_80180CB0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_001_801A1BC0);
    AF(arg0, s16, 6) = -0x134;
    AF(arg0, s16, 0xA) = -0xE82;
    AF(arg0, s16, 0xE) = -0x1D9;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0xD00;
    func_8012B2CC((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc07_001_80184FD0);
    func_80132288((s32) &D_sc07_001_801AAD90, (s32) &D_sc07_001_80185440, D_sc07_001_801A1BDC);
    func_8012E8A8((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_001_80180D74(u8 *o) {
    s32 n;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_sc07_001_801AAD8C == 1) {
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc07_001_801A3264);
        }
        break;
    case 1:
        func_8013240C(&D_sc07_001_801AAD90);
        if (D_sc07_001_801AAD9C & 0x4000) {
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc07_001_801A7E14);
            AF(o, s32, 0x1C) = 0x10;
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            n = AF(o, u16, 0x34) + 1;
            D_sc07_001_801AAD8C = 2;
            AF(o, u16, 0x34) = n;
        }
        break;
    }
}

void func_sc07_001_80180E78(u8 *o) {
    s16 y;

    y = D_sc07_001_801AAD6E[AF(o, s16, 0x70)].x;
    if (y >= 0x400) {
        func_8012C218(o);
        return;
    }
    AF(o, s16, 0xA) = y + AF(o, u16, 0x8A);
    func_sc07_001_8018088C(o);
    if (AF(o, s32, 0x3C) != AF(o, s32, 8) && AF(o, u8, 0x74) != 0) {
        func_8012E014(o);
    }
}

void func_sc07_001_80180F18(void) {
}

void func_sc07_001_80180F20(u8 *arg0) {
    D_sc07_001_8018569C[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180F5C(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc07_001_80180F7C(s32 arg0) {
    if (D_80126944 >= -0x3FF) {
        func_8012A568((s32) &func_sc07_001_8017DB70);
        func_8012AD50(arg0);
    }
}

void func_sc07_001_80180FC8(void) {
}

void func_sc07_001_80180FD0(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc07_001_80181034((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc07_001_80181034(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc07_001_80181434(a);
    s = func_sc07_001_80181378(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
}

void func_sc07_001_80181194(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc07_001_80181434(r[0] & 0xFFF);
    cx = func_sc07_001_80181378(r[0] & 0xFFF);
    sy = func_sc07_001_80181434(r[1] & 0xFFF);
    cy = func_sc07_001_80181378(r[1] & 0xFFF);
    sz = func_sc07_001_80181434(r[2] & 0xFFF);
    cz = func_sc07_001_80181378(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc07_001_80181378(u32 a) {
    if (a < 0x400) {
        return D_sc07_001_801A353C[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc07_001_801A353C[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc07_001_801A353C[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc07_001_801A353C[0xFFF - a];
    }
}

s32 func_sc07_001_80181434(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc07_001_801A353C[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc07_001_801A353C[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc07_001_801A353C[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc07_001_801A353C[a - 0xC00];
    }
}
