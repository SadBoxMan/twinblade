#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_027_8017BE9C(void) {
}

void func_sc06_027_8017BEA4(void) {
}

void func_sc06_027_8017BEAC(void) {
}

void func_sc06_027_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_027_80181A10[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_027_8017CFA8(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_027_80181A18[])();
void func_sc06_027_8017D008(void);
extern u8 D_sc06_027_80181A24;
extern void func_8016EE40();
extern u8 D_sc06_027_80181A28;
extern void func_sc06_027_8017D0C8();
extern void (*D_sc06_027_80181A30[])();
extern void (*D_sc06_027_80181A78[])();
extern void (*D_sc06_027_80181A80[])();
extern void (*D_sc06_027_80181A88[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void func_8002931C();

extern void func_8012C588();
extern void func_80171928();
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
extern u8 D_sc06_027_80181AB0;
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc06_027_80199B1C;
extern s32 D_sc06_027_8019D2B8;
extern void func_sc06_027_8017D3A0();

extern s8 D_80078EC0;
extern u8 D_80126B58;
extern s32 func_800D1EBC();
extern void func_80165A20();
extern void func_800CF804();
extern u8 D_sc06_027_801954A4;
extern u8 D_sc06_027_80199A94;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc06_027_801989E8;
extern u8 D_sc06_027_8019A074;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_027_8017BEBC(u8 *obj) {
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

void func_sc06_027_8017CD9C(void) {
    func_8002931C(0x04740000);
}

void func_sc06_027_8017CDBC(u8 *arg0) {
    D_sc06_027_80181A10[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_027_8017CDF8(u8 *arg0) {
    func_sc06_027_8017CFA8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_027_8017CE3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_027_8017CE60(u8 *arg0) {
    D_sc06_027_80181A18[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_027_8017CE9C(u8 *arg0) {
    func_sc06_027_8017D008();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_027_8017CEDC(u8 *arg0) {
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

s32 func_sc06_027_8017CF58(void) {
    if (func_800D1EBC() != 0) {
        func_80165A20((s32) &D_80126B58);
        D_80078EC0 = 6;
        func_800CF804();
        return 1;
    }
    return 0;
}

void func_sc06_027_8017CFA8(void) {
    func_8016EE40((s32) &D_sc06_027_80181A24, 0x01000000);
}

void func_sc06_027_8017CFD0(s32 arg0) {
    func_8012C588(0x3BA, 0);
    func_80171928(arg0);
}

void func_sc06_027_8017D008(void) {
    func_8016EE40((s32) &D_sc06_027_80181A28, 0x01000000);
}

void func_sc06_027_8017D030(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_027_8017D0C8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_027_8017D0C8((s32) &D_80126948);
}

void func_sc06_027_8017D0C8(s32 arg0) {
    D_sc06_027_80181A30[AF(arg0, u8, 4)]();
}

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
extern s32 func_sc06_027_8017DEDC();
extern s32 func_sc06_027_8017DE20();

extern s32 func_80012C6C();
extern s32 func_80012ABC();

extern s32 func_8012C354();
extern u8 D_sc06_027_80181A44;

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
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_80013F3C();
extern s16 D_sc06_027_8019A0DC[];

extern OtRef D_800A651C[];
extern u8 *AllocPrim();

extern SV8 D_80126940;
extern s32 ratan2();
extern void func_sc06_027_8017D1C0(u8 *o, SV8 *a, SV8 *b, s32 d);
void func_sc06_027_8017D104(u8 *o) {
    SV8 unused; /* MATCH-TRICK: unused 8-byte local fills the frame's 0x10-0x17 slot */
    SV8 a;
    SV8 b;
    s32 ang;

    a = D_80126940;
    b = D_80126940;
    ang = ratan2(a.x, a.z) & 0xFFF;
    if (a.y > -0x500) {
        a.y = -0x500;
    }
    func_sc06_027_8017D1C0(o, &a, &b, ang);
}

void func_sc06_027_8017D1C0(u8 *o, SV8 *a, SV8 *b, s32 d) {
    typedef struct { s16 m[3][3]; s32 t[3]; } MX;
    MX m;
    SV8 v;
    SV8 out;
    SV8 r;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b->x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b->y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b->z;
    r.x = AF(o, u16, 0x18);
    r.y = AF(o, u16, 0x1A) + d;
    r.z = AF(o, u16, 0x1C);
    func_sc06_027_8017DC3C(&r, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &out);
    AF(o, s32, 0x3C) = (out.x >> 3) + AF(o, s16, 0x28) + a->x;
    AF(o, s32, 0x40) = (out.y >> 3) + AF(o, s16, 0x2A) + a->y;
    AF(o, s32, 0x44) = (out.z >> 3) + AF(o, s16, 0x2C) + a->z;
}

s32 func_sc06_027_8017D398(void) {
    return 0x81;
}

void func_sc06_027_8017D3A0(u8 *o) {
    u32 *ot;
    u8 *p;

    ot = D_800A651C[D_800B9A02].ot;
    p = AllocPrim(0x30);
    if (p != 0) {
        SetDrawMode(p, 0, 0, (u16) GetTPage(0, 1, 0, 0), 0);
        AF(p, u8, 0x10) = AF(o, s32, 0x1C);
        AF(p, u8, 0x18) = AF(o, s32, 0x1C);
        AF(p, u8, 0x20) = AF(o, s32, 0x1C);
        AF(p, u8, 0x28) = AF(o, s32, 0x1C);
        AF(p, u8, 0x11) = AF(o, s32, 0x1C);
        AF(p, u8, 0x19) = AF(o, s32, 0x1C);
        AF(p, u8, 0x21) = AF(o, s32, 0x1C);
        AF(p, u8, 0x29) = AF(o, s32, 0x1C);
        AF(p, u8, 0x12) = AF(o, s32, 0x1C);
        AF(p, u8, 0x1A) = AF(o, s32, 0x1C);
        AF(p, u8, 0x22) = AF(o, s32, 0x1C);
        AF(p, u8, 0x2A) = AF(o, s32, 0x1C);
        AF(p, u8, 0xF) = 8;
        AF(p, u8, 0x13) = 0x3A;
        AF(p, s16, 0x14) = -0xA0;
        AF(p, s16, 0x1C) = 0xA0;
        AF(p, s16, 0x24) = -0xA0;
        AF(p, s16, 0x2C) = 0xA0;
        AF(p, s16, 0x16) = -0x78;
        AF(p, s16, 0x1E) = -0x78;
        AF(p, s16, 0x26) = 0x78;
        AF(p, s16, 0x2E) = 0x78;
        AddPrim(ot, p + 0xC);
        AddPrim(ot, p);
    }
}

void func_sc06_027_8017D508(u8 *arg0) {
    D_sc06_027_80181A78[AF(arg0, u16, 2)]();
}

void func_sc06_027_8017D544(u8 *arg0) {
    D_sc06_027_80181A80[AF(arg0, u16, 2)]();
}

void func_sc06_027_8017D580(u8 *arg0) {
    D_sc06_027_80181A88[AF(arg0, u16, 2)]();
}

void func_sc06_027_8017D5BC(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 2);
    switch (temp_v1) {                              /* irregular */
    case 0:
        AF(arg0, s32, 0x1C) = 5;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        /* fallthrough */
    case 1:
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            AF(arg0, s32, 0x1C) = 0x7F;
            func_80178B18((s32) arg0, (s32) &D_sc06_027_80181AB0);
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
        /* fallthrough */
    case 2:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_8012C218((s32) arg0);
        }
        return;
    }
}

extern void func_8014708C();
extern void func_801472C8();
void func_sc06_027_8017D688(u8 *o) {
    u8 *s = &D_80126B58;

    switch (AF(o, u16, 2)) {
    case 0:
        AF(o, s32, 0x1C) = 0x7F;
        AF(o, s16, 2) = 1;
        EndScene(s);
        func_8014708C(s);
        func_801472C8(s);
        break;
    case 1:
        func_sc06_027_8017D3A0(o);
        break;
    }
}

void func_sc06_027_8017D708(u8 *o) {
    u8 *c;

    if (func_8012C354(o, &D_sc06_027_80181A44) != 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x800;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x800;
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, s16, 0xAE) = -1;
        AF(o, s16, 2) = 1;
        AF(o, u8, 0x75) = 0;
        c = ((u8 *(*)())func_8012C588)(0x392, o);
        if (c != 0) {
            AF(c, s16, 0xA) -= 0x40;
            AF(c, s16, 6) += 0x10;
            AF(c, s16, 0xE) -= 0x10;
            AF(AF(c, u8 *, 0x20), s16, 0x12) = 0xC00;
            AF(o, u8 *, 0xCC) = c;
        }
        c = ((u8 *(*)())func_8012C588)(0x393, o);
        if (c != 0) {
            AF(c, s16, 0xA) -= 0x40;
            AF(c, s16, 6) -= 0x10;
            AF(c, s16, 0xE) += 0x10;
            AF(AF(c, u8 *, 0x20), s16, 0x12) = 0xC00;
            AF(o, u8 *, 0xD0) = c;
        }
    }
}

void func_sc06_027_8017D824(u8 *o) {
    u8 *c;

    AF(o, s16, 0xA) -= 2;
    c = AF(o, u8 *, 0xCC);
    if (c != 0) {
        AF(c, s16, 0xA) = AF(o, s16, 0xA) - 0x40;
    }
    c = AF(o, u8 *, 0xD0);
    if (c != 0) {
        AF(c, s16, 0xA) = AF(o, s16, 0xA) - 0x40;
    }
    if (AF(o, s16, 0xA) < -0xD00) {
        func_8012C218(AF(o, u8 *, 0xCC));
        func_8012C218(AF(o, u8 *, 0xD0));
        func_8012C218(o);
    }
}

void func_sc06_027_8017D8B8(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_027_801954A4);
    SetScript((s32) arg0, (s32) &D_sc06_027_80199A94);
    AF(arg0, s16, 2) = 1;
    D_sc06_027_8019D2B8 = 0;
}

void func_sc06_027_8017D92C(s32 arg0) {
    if (D_sc06_027_8019D2B8 == 1) {
        D_sc06_027_8019D2B8 = 0;
        SetScript(arg0, (s32) &D_sc06_027_80199B1C);
    }
}

void func_sc06_027_8017D96C(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_027_801989E8);
    SetScript((s32) arg0, (s32) &D_sc06_027_8019A074);
    AF(arg0, s16, 2) = 1;
}

void func_sc06_027_8017D9D8(void) {
}

extern u8 D_801202A0;
extern s16 D_sc06_027_80181AA2;
void func_sc06_027_8017D9E0(void) {
    u8 *p;
    s32 i;

    D_sc06_027_8019D2B8 = 1;
    p = &D_801202A0;
    for (i = 0; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0x392) {
            s16 *d = &D_sc06_027_80181AA2;
            *d = AF(p, u16, 0xA) - 0x100;
        }
        p += 0x10C;
    }
}

s32 func_sc06_027_8017DA3C(s32 arg0) {
    s32 temp_v0;

    func_sc06_027_8017D3A0(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 3;
    AF(arg0, s32, 0x1C) = temp_v0;
    return temp_v0 < 1;
}

void func_sc06_027_8017DA78(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc06_027_8017DADC((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc06_027_8017DADC(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc06_027_8017DEDC(a);
    s = func_sc06_027_8017DE20(a);
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

void func_sc06_027_8017DC3C(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc06_027_8017DEDC(r[0] & 0xFFF);
    cx = func_sc06_027_8017DE20(r[0] & 0xFFF);
    sy = func_sc06_027_8017DEDC(r[1] & 0xFFF);
    cy = func_sc06_027_8017DE20(r[1] & 0xFFF);
    sz = func_sc06_027_8017DEDC(r[2] & 0xFFF);
    cz = func_sc06_027_8017DE20(r[2] & 0xFFF);
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

s32 func_sc06_027_8017DE20(u32 a) {
    if (a < 0x400) {
        return D_sc06_027_8019A0DC[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc06_027_8019A0DC[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc06_027_8019A0DC[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc06_027_8019A0DC[0xFFF - a];
    }
}

s32 func_sc06_027_8017DEDC(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc06_027_8019A0DC[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc06_027_8019A0DC[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc06_027_8019A0DC[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc06_027_8019A0DC[a - 0xC00];
    }
}
