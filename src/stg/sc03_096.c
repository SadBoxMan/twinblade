#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_096_8017BE9C(void) {
}

void func_sc03_096_8017BEA4(void) {
}

void func_sc03_096_8017BEAC(void) {
}

void func_sc03_096_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_096_801844F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_096_8017D00C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_096_8017D034(void);
extern void func_800D1EBC();
extern void (*D_sc03_096_80184504[])();
extern u8 D_sc03_096_80184510;
extern void func_8016EE40();
extern u8 D_sc03_096_80184514;
extern void func_sc03_096_8017D0F4();
extern void (*D_sc03_096_80184518[])();
extern void (*D_sc03_096_80190940[])();
extern void (*D_sc03_096_801909F4[])();
extern void (*D_sc03_096_80192A4C[])();
extern void (*D_sc03_096_80192A64[])();
extern void (*D_sc03_096_80197D98[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_096_80184520[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_096_80180DE0;
extern u8 D_sc03_096_80190454;
extern u8 D_sc03_096_80190474;
extern s32 func_8012C354();
extern u8 D_sc03_096_80190538;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern s32 D_sc03_096_8019A7D0;

extern void func_8012AD44();
extern void func_80016224();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8012AD50();
extern s32 D_sc03_096_80192A58[];
extern u8 D_sc03_096_80193A18;
extern void (*D_sc03_096_80193A78[])();
extern s32 func_sc03_096_80180148();
extern s32 func_8012BEE8();
extern s32 func_8012BE54();
extern void func_sc03_096_801801D4();
extern void func_sc03_096_8018028C();
extern void func_sc03_096_8018026C();
extern void func_8002A04C();
extern void func_8012E8A8();
extern void func_80016714();
extern void func_8012C098();
extern void func_8012B260();
extern u8 D_sc03_096_80193AA4;


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

extern void func_8012B23C();
extern void func_8001CA1C();
extern SV8 D_sc03_096_80190810[];
extern u8 D_sc03_096_80190574;
extern u8 D_sc03_096_80190634;
extern u8 D_sc03_096_801906BC;
extern u8 D_sc03_096_8019077C;
extern u8 D_sc03_096_80190860;
extern u8 D_sc03_096_80190884;
extern u8 D_sc03_096_80190870;
extern u8 D_sc03_096_8019087C;



extern u8 D_sc03_096_80184600;
extern u8 D_sc03_096_801847CC;
s32 func_sc03_096_8017D3D0(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern void func_8012B2CC();

typedef struct { s16 vx, vy, vz, pad; } SV;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_096_8017BEBC(u8 *obj) {
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

void func_sc03_096_8017CD9C(void) {
    D_801274C8 = &D_sc03_096_80184600;
    D_801274CC = &D_sc03_096_801847CC;
    func_sc03_096_8017D3D0(0);
}

void func_sc03_096_8017CDDC(u8 *arg0) {
    D_sc03_096_801844F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_096_8017CE18(u8 *arg0) {
    func_sc03_096_8017D00C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_096_8017CE5C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_096_8017CE80(u8 *arg0) {
    func_sc03_096_8017D034();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_096_8017CEC0(u8 *arg0) {
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

void func_sc03_096_8017CF3C(void) {
    func_800D1EBC();
}

void func_sc03_096_8017CF5C(u8 *arg0) {
    D_sc03_096_80184504[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_096_8017CF98(u8 *arg0) {
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

void func_sc03_096_8017D00C(void) {
    func_8016EE40((s32) &D_sc03_096_80184510, 0x01000000);
}

void func_sc03_096_8017D034(void) {
    func_8016EE40((s32) &D_sc03_096_80184514, 0x01000000);
}

void func_sc03_096_8017D05C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_096_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_096_8017D0F4((s32) &D_80126948);
}

void func_sc03_096_8017D0F4(s32 arg0) {
    D_sc03_096_80184518[AF(arg0, u8, 4)]();
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 D_801202A0;
extern VoidFn D_sc03_096_8019056C[];
extern s32 func_8012B6D4();
extern s32 func_80135888();

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_096_80197CB8;
extern s16 D_sc03_096_80197CBA;
extern s16 D_sc03_096_80197CBC;
extern Blk30 D_sc03_096_80197CC0;
extern s16 D_sc03_096_80197CF0;
extern s16 D_sc03_096_80197CF2;
extern s16 D_sc03_096_80197CF4;
extern Blk30 D_sc03_096_80197CF8;
extern s16 D_sc03_096_80197D28;
extern s16 D_sc03_096_80197D2A;
extern s16 D_sc03_096_80197D2C;
extern Blk30 D_sc03_096_80197D30;
extern s16 D_sc03_096_80197D60;
extern s16 D_sc03_096_80197D62;
extern s16 D_sc03_096_80197D64;
extern Blk30 D_sc03_096_80197D68;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

typedef struct { u8 b[0x34]; } R34;
extern s32 func_8012BD14();
extern s16 D_80126B96;
extern s32 func_8012DEB8();
extern s16 D_80126B62;
extern u16 D_sc03_096_801904A8[];
extern u16 D_sc03_096_801904D0[];
extern u16 D_sc03_096_801904F8[];
extern VoidFn D_sc03_096_80190520[];
extern void func_8002D59C();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_096_80193934;
extern u8 D_sc03_096_8019395C;
extern s32 D_sc03_096_80193990;
extern u8 D_sc03_096_80193A30;
extern s32 func_sc03_096_80180208();
extern s32 func_8012E504();
extern s32 func_8014CB0C();
extern void func_sc03_096_801800D0();
extern s32 func_8012CBF4();
extern s32 func_sc03_096_801803D0();
extern s32 func_sc03_096_8018001C();
extern void func_801292C8();

extern u16 D_800B99DA;
extern void func_8012B0B4();
extern void func_8012B178();
extern s32 func_sc03_096_801802AC();
extern s32 func_sc03_096_80180350();

extern void func_8012C218();
extern void func_80143B6C();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_096_8017D238();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern u8 D_80126B5C;
extern void *D_80126B78;

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern u8 D_80126B58;
extern s16 D_80126B66;
extern s16 D_sc03_096_80192A40[];
extern s16 D_sc03_096_80192A44;
extern s16 D_sc03_096_80192A46;
extern void func_sc03_096_8017F2A4();
extern s16 D_80126B5E;
extern s16 D_sc03_096_80192A48;
extern void func_sc03_096_8017F308();

typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 D_8012704C;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 func_8012D624();
extern VoidFn D_sc03_096_80190894[];
extern s32 func_8012B1B4();
extern s32 func_8012BCCC();
extern s32 func_8012B608();
extern s16 D_80126CB6;
extern u8 D_sc03_096_80190804;
extern s32 func_8012B864();
extern void func_80143970();
extern s32 func_8012B70C();
extern void func_8012C588();
extern s16 D_sc03_096_80190906[];
extern u8 D_sc03_096_801908CC;
extern u16 D_sc03_096_80190900[];
extern u16 D_sc03_096_80190902[];
extern u16 D_sc03_096_80190904[];
extern u8 D_sc03_096_8019094C;
extern u8 D_sc03_096_801909AC;
extern void func_sc03_096_8017EDAC();
extern s16 D_80126CE0;
extern s32 D_sc03_096_8019A7D8;
extern s32 D_sc03_096_8019A7DC;
extern u8 D_sc03_096_80193940;
extern s32 func_8012C194();
extern void func_8001CB6C();
extern V16 D_sc03_096_80197CE0;
extern s32 D_800A5EB0;
extern V16 D_sc03_096_80197D18;
extern s32 D_800A5E90;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_sc03_096_80192A04;
extern u8 D_sc03_096_80192A18;
extern s32 D_sc03_096_80192A34[];
extern SV8 D_sc03_096_80193A94[];
extern u8 D_801152A8;
extern void func_8012F568();
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
typedef struct { u16 x, y, z; } Pos3;
typedef struct { u8 r, g, b, cd; s32 pad[3]; } C16;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern void func_800183E0();
extern u8 D_sc03_096_80193AAC;
extern s32 func_801290DC();

extern u8 D_80126940;
extern s32 func_80148800();
extern s16 D_sc03_096_8018451C[];

void func_sc03_096_8017D130(u8 *arg0) {
    SV8 v;
    u8 t;
    s16 lim;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_096_8018451C[t];
    }
    v = *(SV8 *)&D_80126940;
    lim = -0xE40;
    if (v.x < lim) {
        v.x = lim;
    }
    lim = -0xAC0;
    if (v.x > lim) {
        v.x = lim;
    }
    lim = -0x960;
    if (v.y < lim) {
        v.y = lim;
    }
    lim = -0x202;
    if (v.y > lim) {
        v.y = lim;
    }
    v.z = 0x480;
    func_sc03_096_8017D238(arg0, (u8 *) &v);
}

void func_sc03_096_8017D238(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_096_8017D3D0(s32 arg0) {
    return func_8013B7F4(D_sc03_096_80184520[arg0], 0);
}

s32 func_sc03_096_8017D400(void) { if (D_8012704C == 0) return 0x38; return 0x44; }

void func_sc03_096_8017D420(u8 *arg0) {
    UV4 a;
    UV4 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;

    k = AF(arg0, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    a.y = y;
    b.y = y;
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_096_801904A8[i];
        a.z = D_sc03_096_801904A8[i + 1];
        b.x = D_sc03_096_801904A8[i + 2];
        b.z = D_sc03_096_801904A8[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_096_801904D0[i];
        a.z = D_sc03_096_801904D0[i + 1];
        b.x = D_sc03_096_801904D0[i + 2];
        b.z = D_sc03_096_801904D0[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_096_801904F8[i];
        a.z = D_sc03_096_801904F8[i + 1];
        b.x = D_sc03_096_801904F8[i + 2];
        b.z = D_sc03_096_801904F8[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_096_80190520[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_096_8017D6B8(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_096_8019056C[AF(arg0, u16, 2)]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            ang = func_8012B6D4(arg0 + 4, p + 4);
            if (AF(AF(arg0, u8 *, 0x64), s16, 0xFC) < 0) {
                ang -= 0x400;
            } else {
                ang += 0x400;
            }
            ang &= 0xFFF;
            a.x -= rsin(ang) >> 8;
            a.z -= rcos(ang) >> 8;
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            c = b;
            if (func_80135888(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &c) != 0) {
                AF(p, u16, 6) = a.x;
                AF(p, u16, 0xE) = a.z;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_096_8017D840(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190574);
        SetScript(arg0, &D_sc03_096_80190634);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_801906BC);
        SetScript(arg0, &D_sc03_096_8019077C);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_096_80190860;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_096_80190884;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_096_80190538;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190574);
        SetScript(arg0, &D_sc03_096_80190634);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_801906BC);
        SetScript(arg0, &D_sc03_096_8019077C);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190870);
        SetScript(arg0, &D_sc03_096_8019087C);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_096_80190574);
        SetScript(arg0, &D_sc03_096_80190634);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc03_096_8017DCEC(u8 *arg0) {
    AF(AF(arg0, u8 *, 0x20), s32, 4) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4);
    AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0xEFFFFFFF;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x08000000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x60000000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4) - (rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC) - (rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1A) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1C) / 2;
}

void func_sc03_096_8017DE80(u8 *arg0) {
    SV in;
    SV out;
    s32 flag;
    u8 *m;
    s32 n;

    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(AF(arg0, u8 *, 0x64), u16, 0x100) & 0x4000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) -= 0x200;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) -= 0x200;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x200) {
            func_80143B6C(arg0, 0);
            func_8012C218(arg0);
            return;
        }
    } else {
        if (--AF(arg0, s16, 0x100) < 9) {
            AF(arg0, s16, 0x100) = 0x18;
            if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 5) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
                AF(arg0, s16, 0x1A) = rand() % 56 - 0x2C;
            } else if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 6) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
                AF(arg0, s16, 0x1A) = rand() % 128 - 0x60;
            }
        }
        n = AF(arg0, s16, 0x100);
        if (n < 0x10) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = n * 0x300;
        } else {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (0x20 - n) * 0x300;
        }
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC);
    in.vx = AF(arg0, s16, 0x12);
    in.vy = AF(arg0, s16, 0x16);
    in.vz = AF(arg0, s16, 0x1A);
    m = AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&in, &out, &flag);
    AF(arg0, s16, 6) = out.vx;
    AF(arg0, s16, 0xA) = out.vy;
    AF(arg0, s16, 0xE) = out.vz;
}

void func_sc03_096_8017E230(u8 *arg0) {
    s32 temp_v0;

    D_sc03_096_80190894[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(AF(arg0, void *, 0x20), s32, 4) >= 0)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, 0x1C, 0xA) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        if (AF(arg0, s16, 0x70) == 1) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                AF(arg0, s32, 0x1C) = 8;
                func_8012C658(0x12F, 3, (s32) arg0);
            }
        }
    }
}

void func_sc03_096_8017E31C(u8 *arg0) {
    D_sc03_096_80190940[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017E358(u8 *arg0) {
    D_sc03_096_801909F4[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017E394(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_096_8017E3AC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_096_80190474) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_096_80190454;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_096_80180DE0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_096_8017E450(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_096_8017E46C(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_096_80190538) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_096_80190454;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_096_80180DE0, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_096_8017E4F0(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_096_8017E52C(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_096_8017E55C(s32 arg0) {
    void *temp_a0;

    if (func_8012CBCC(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            func_8012E688(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc03_096_8017E5E0(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc03_096_80190804);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_096_8017E6A4(s32 arg0) {
    s32 t;

    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        AF(AF(arg0, s32, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_8012E688(arg0, 0x679, 0);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u16, 0x12) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_096_80190810[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_096_8017E784(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_096_8017E7F4(u8 *arg0) {
    SV8 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc03_096_80190804);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_096_8017E8D0(void) {
}

void func_sc03_096_8017E8D8(u8 *arg0) {
    s32 t;

    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) -= 0x100;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= 0x100;
    if (AF(AF(arg0, u8 *, 0x20), s16, 0x1A) <= 0x80) {
        if (AF(arg0, s16, 0x70) == 1) {
            t = AF(arg0, s32, 0xCC);
            if (arg0 != NULL) {
                func_8012C218(t);
            }
        }
        func_8002A04C(arg0);
        func_8012C218(arg0);
    }
}

void func_sc03_096_8017E990(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_096_801908CC) != 0) {
        SetScript(arg0, (s32) &D_sc03_096_80180DE0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc03_096_80190900[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc03_096_80190902[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc03_096_80190904[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc03_096_80190906[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_096_8017EA54(s32 arg0) {
    s32 temp_v0;

    func_8012CBA4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    func_8012DFD4(arg0);
}

void func_sc03_096_8017EAA8(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc03_096_80190906[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc03_096_8017EB24(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_096_8019094C);
    SetScript(arg0, &D_sc03_096_801909AC);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x10;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x10;
    AF(arg0, s32, 0x94) = rand() & 7;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
    if ((u16)(AF(arg0, u16, 0x70) - 1) >= 0x6FFF) {
        AF(arg0, u16, 0x70) = rand() & 0x77FF;
        st = 2;
    } else {
        st = 1;
    }
    AF(arg0, s16, 2) = st;
}

void func_sc03_096_8017EC08(u8 *arg0) {
    s32 v;
    u16 a;
    void *p;
    s16 s;

    v = AF(arg0, s32, 0x1C);
    if (v == 0) {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
        a = AF(arg0, u16, 0xFE) + 0x40;
        AF(arg0, u16, 0xFE) = a;
        if ((s16) a >= 0x800) {
            AF(arg0, u16, 0xFE) = 0;
            AF(arg0, s32, 0x1C) = rand() & 0x1F;
            AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
        }
        s = (AF(arg0, s16, 0x70) * rsin(AF(arg0, s16, 0xFE)) >> 12) + 0x800;
        p = AF(arg0, void *, 0x20);
        AF(p, s16, 0x1A) = s;
        AF(p, s16, 0x18) = s;
    } else {
        AF(arg0, s32, 0x1C) = v - 1;
    }
}

void func_sc03_096_8017ECD4(u8 *o) {
    s32 n;
    s32 t;
    u8 *p;
    u8 *q;

    n = AF(o, s32, 0x1C);
    if (n == 0) {
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 0xFE) += 0x40;
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0x1C) = rand() & 0x1F;
            AF(o, s16, 0x70) = rand() & 0x77FF;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        }
        t = ((AF(o, s16, 0x70) * rsin(AF(o, s16, 0xFE))) >> 12) + 0x800;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x1A) = t;
        AF(q, s16, 0x18) = t;
    } else {
        AF(o, s32, 0x1C) = n - 1;
    }
}

void func_sc03_096_8017EDAC(u8 *o, u8 *arg1, s32 n) {
    typedef struct { s16 x, y, z; } P6;
    P6 *p;
    u8 *r;
    s32 i;

    p = (P6 *)arg1;
    for (i = 0; p[i].x != 0; i++) {
        r = (u8 *)func_8012C658(0x167, (s16)n, o);
        if (r != 0) {
            AF(r, s16, 6) = p[i].x;
            AF(r, s16, 0xA) = p[i].y;
            AF(r, s16, 0xE) = p[i].z;
        }
    }
}

void func_sc03_096_8017EE48(s32 arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD44(arg0, 1);
}

void func_sc03_096_8017EE6C(u8 *p) {
    s16 k;
    s16 z;
    s32 good;
    s16 t;
    s16 *c;

    c = (s16 *) &D_80126B58;
    k = AF(p, s16, 0x70);
    good = 0;
    switch (k) {
    case 0:
    case 1:
        z = AF(p, s16, 0xE);
        if (D_80126B66 < z && z + D_sc03_096_80192A40[k] < D_80126B66) {
            good = 1;
        }
        break;
    case 2:
        z = AF(p, s16, 0xE);
        if (D_80126B66 > z && D_80126B66 < z + D_sc03_096_80192A44) {
            good = 1;
        }
        break;
    case 3:
        z = AF(p, s16, 0xA);
        if (D_80126B62 > z && D_80126B62 < z + D_sc03_096_80192A46) {
            good = 1;
            break;
        }
        z = AF(p, s16, 6);
        if (c[3] < z && z + D_sc03_096_80192A40[AF(p, s16, 0x70) + 1] < c[3]) {
            good = 1;
        }
        break;
    }
    if (good != 0 && D_sc03_096_8019A7D0 == 0) {
        func_sc03_096_8017F2A4(0x12F);
        func_sc03_096_8017F01C(p);
    } else {
        t = AF(p, s16, 0xFE);
        if (t != 0) {
            AF(p, s16, 0xFE) = t - 0x10;
            if (AF(p, s16, 0xFE) < 0) {
                AF(p, s16, 0xFE) = 0;
            }
        }
    }
    func_sc03_096_8017F23C(p);
}

void func_sc03_096_8017F01C(s32 arg0) {
    AF(arg0, s16, 0xFC) = 1;
    func_8012AD44(arg0, 2);
}

void func_sc03_096_8017F044(u8 *p) {
    s16 k;
    s16 z;
    s32 bad;
    s16 t;

    k = AF(p, s16, 0x70);
    bad = 0;
    switch (k) {
    case 0:
    case 1:
        z = AF(p, s16, 0xE);
        if (D_80126B66 < z && z + D_sc03_096_80192A40[k] < D_80126B66) {
            break;
        }
        bad = 1;
        break;
    case 2:
        z = AF(p, s16, 0xE);
        if (D_80126B66 > z && D_80126B66 < z + D_sc03_096_80192A44) {
            break;
        }
        bad = 1;
        break;
    case 3:
        z = AF(p, s16, 0xA);
        if (D_80126B62 > z && D_80126B62 < z + D_sc03_096_80192A46) {
            break;
        }
        z = AF(p, s16, 6);
        if (D_80126B5E < z && z + D_sc03_096_80192A48 < D_80126B5E) {
            break;
        }
        bad = 1;
        break;
    }
    if (bad != 0 || D_sc03_096_8019A7D0 != 0) {
        func_sc03_096_8017F308(0x12F);
        AF(p, s16, 0xFC) = 0;
        func_8012AD44(p, 1);
    } else {
        t = AF(p, s16, 0xFE);
        if (t < 0x70) {
            AF(p, s16, 0xFE) = t + 0x10;
        }
    }
    func_sc03_096_8017F23C(p);
}

s32 func_sc03_096_8017F1DC(s32 arg0, s32 arg1) {
    D_sc03_096_8019A7D0 = 1;
    return 1;
}

void func_sc03_096_8017F1F0(void) {
    D_sc03_096_8019A7D0 = 0;
}

void func_sc03_096_8017F200(u8 *arg0) {
    D_sc03_096_80192A4C[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017F23C(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFE);
    if (temp_v0 != 0) {
        func_80016224(temp_v0 & 0xFF, 4);
        AF(arg0, s16, 0x2A) = -2;
        temp_v0_2 = 0x80 - (AF(arg0, s16, 0xFE) * 3);
        AF(arg0, s16, 0x28) = temp_v0_2;
        AF(arg0, s16, 0x26) = temp_v0_2;
        AF(arg0, s16, 0x24) = temp_v0_2;
    }
}

void func_sc03_096_8017F2A4(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &D_801202A0; p < (u8 *) &D_801202A0 + 0x6480; p += 0x10C) {
        if (AF(p, u16, 0) == (u16) arg0) {
            AF(AF(p, u8 *, 0x20), u32, 4) |= 0x80000000;
        }
    }
}

void func_sc03_096_8017F308(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &D_801202A0; p < (u8 *) &D_801202A0 + 0x6480; p += 0x10C) {
        if (*(u16 *) p == (u16) arg0) {
            AF(AF(p, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        }
    }
}

void func_sc03_096_8017F370(u8 *arg0) {
    D_sc03_096_80192A64[AF(arg0, u16, 2)]();
}

void func_sc03_096_8017F3AC(u8 *arg0) {
    s16 n;
    u16 t;
    u8 *p;

    n = AF(arg0, s16, 0x70);
    if (n < 3) {
        func_sc03_096_8017EDAC(arg0, D_sc03_096_80192A34[n], 0);
    } else {
        func_sc03_096_8017EDAC(arg0, &D_sc03_096_80192A04, 1);
        func_sc03_096_8017EDAC(arg0, &D_sc03_096_80192A18, 2);
    }
    t = AF(arg0, u16, 0x72);
    p = arg0;
    AF(p, s16, 0xFE) = 0;
    D_sc03_096_8019A7D0 = 0;
    AF(p, u16, 0x72) = t | 0x1000;
    func_sc03_096_8017EE48((s32) p);
}

void func_sc03_096_8017F444(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_096_80192A58[AF(arg0, s16, 0x70)]);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8000);
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0);
}

void func_sc03_096_8017F4D4(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    if (AF(AF(arg0, void *, 0x64), s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
}

void func_sc03_096_8017F528(u8 *arg0) {
    s32 temp_a2;

    D_sc03_096_80193A78[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_096_80180148((s32) arg0);
    }
    if (AF(arg0, u16, 0) != 0) {
        temp_a2 = AF(arg0, s32, 0xD4);
        if (temp_a2 != 0) {
            FaceHelper((s32) arg0, (s32) &D_sc03_096_80193A18, temp_a2 + 8);
        }
    }
}

void func_sc03_096_8017F5B8(s32 arg0) {
    s32 temp_v0;
    u16 temp_v1;

    func_8012C354(arg0, (s32) &D_sc03_096_8019395C);
    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_096_80193934);
    AF(temp_v0, s32, 0x80) = (s32) (arg0 + 0xFC);
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, s32, 4) |= 0x50000000;
    AF(temp_v0, u16, 0x2C) |= 0x90;
    AF(arg0, s32, 0x20) = temp_v0;
    AF(arg0, s32, 0xD4) = func_sc03_096_80180208(arg0);
    AF(arg0, s16, 0xAE) = 0x2000;
    AF(arg0, s16, 0xFC) = 0x80;
    AF(arg0, s16, 0xFE) = 0x80;
    AF(arg0, s16, 0x100) = 0x80;
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_096_80193A30;
        AF(arg0, s32, 0xB4) = -0x2003;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
    }
    temp_v1 = AF(arg0, u16, 0x70);
    if (temp_v1 & 0x4000) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x100) = 0;
    } else if (!(temp_v1 & 0x8000)) {
        AF(arg0, s16, 2) = 3;
    } else {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x100) = 0;
        func_sc03_096_8018028C(AF(arg0, s32, 0xD4));
    }
    if (func_8012E504(arg0, 0x1A2) == 0) {
        AF(arg0, s32, 0xE4) = 1;
        AF(arg0, s32 *, 0xD0) = &D_sc03_096_80193990;
        AF(arg0, s32 *, 0xCC) = &D_sc03_096_80193990;
        AF(arg0, s32, 0xE0) = *AF(arg0, s32 *, 0xCC);
    }
}

void func_sc03_096_8017F744(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_8012BEE8(arg0, arg1, arg2) != 0) && (func_8012BE54(arg0) <= 0x40000)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}


void func_sc03_096_8017F794(u8 *o) {
    s16 v;
    v = ((u32)rsin(AF(o, s32, 0x1C) << 4) >> 5) & 0xFF;
    AF(o, s16, 0xFC) = AF(o, s16, 0xFE) = AF(o, s16, 0x100) = v;
    if (++AF(o, s32, 0x1C) > 0x40) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x5C) = AF(AF(o, u8 *, 0x78), u16, 2);
        AF(o, s32, 0x1C) = rand();
        func_sc03_096_8018026C(AF(o, s32, 0xD4));
    }
}

void func_sc03_096_8017F810(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    AF(arg0, s16, 2) = 4;
    temp_v0 = rand((s32) arg0);
    var_v0 = temp_v0 / 64;
    AF(arg0, s32, 0xE8) = (s32) ((temp_v0 - (var_v0 << 6)) + 0x40);
}

void func_sc03_096_8017F864(u8 *arg0) {
    SV p;
    u8 unused[8];

    if (!(AF(arg0, u16, 0x70) & 1)) {
        AF(arg0, s16, 0x52) = (u32) rsin(AF(arg0, s32, 0x1C) << 5) >> 8;
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(AF(arg0, u8 *, 0x20), s16, 8);
            p.vy = AF(AF(arg0, u8 *, 0x20), s16, 0xA) + 0x40;
            p.vz = AF(AF(arg0, u8 *, 0x20), s16, 0xC);
            func_sc03_096_801803D0(&p, 0x60);
        }
    } else {
        if (AF(arg0, u8, 0x1C) == 0) {
            AF(arg0, s32, 0xE8) = rand() % 64 + 0x40;
        }
        if (func_8014CB0C() == 0) {
            func_sc03_096_801800D0(arg0, -0x28000);
            func_8012CBF4(arg0);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        }
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(arg0, s16, 6);
            p.vy = AF(arg0, s16, 0xA);
            p.vz = AF(arg0, s16, 0xE);
            p.vy += 0x38;
            func_sc03_096_801803D0(&p, 0x80);
        }
    }
    func_sc03_096_8018001C(arg0);
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000 - (rsin((AF(arg0, s32, 0x1C) << 5) & 0x7E0) >> 1);
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_096_8017FA38(u8 *arg0) {
    s32 w;
    s16 a;
    u8 c;

    AF(arg0, s16, 0x52) = (u32) rsin(D_800B99DA << 5) >> 8;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        a = rand() % 4096;
        func_8012B0B4(&w, a, rand() % AF(arg0, s16, 0xDC));
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88) + w;
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C) + (w >> 16);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
        func_8012B2CC(arg0);
        func_8012B178(arg0, -0x20000);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_096_801802AC(arg0);
        if (++AF(arg0, s32, 0x1C) >= 0x41) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34)++;
            func_sc03_096_8018026C(AF(arg0, s32, 0xD4));
        }
        break;
    case 2:
        if (func_sc03_096_801802AC(arg0) == 0 || func_8012BEE8(arg0) != 0 || func_sc03_096_80180350(arg0, 0x400) != 0) {
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, u16, 0x34)++;
            func_sc03_096_8018028C(AF(arg0, s32, 0xD4));
        }
        break;
    case 3:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_096_801802AC(arg0);
        if (--AF(arg0, s32, 0x1C) < 0) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = rand() % 96;
        }
        break;
    case 4:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
        }
        break;
    }
}

void func_sc03_096_8017FCCC(void) {
}

void func_sc03_096_8017FCD4(u8 *arg0) {
    func_sc03_096_801801D4(AF(arg0, s32, 0xD4), 1);
    AF(arg0, s32, 0x48) = 0;
}

void func_sc03_096_8017FD08(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_096_8018028C(AF(arg0, s32, 0xD4));
}

void func_sc03_096_8017FD34(u8 *arg0) {
    typedef struct { u8 pad[0x18]; s16 x18; u8 pad2[0x12]; u16 x2C; } Sub;
    typedef struct { u8 pad[0x20]; Sub *x20; } Obj;
    s32 x;
    s32 d;
    s32 k;
    s32 t;
    s32 v;

    AF(arg0, s16, 0x5C) = 0;
    x = D_80126CE0;
    if (x == 0) {
        D_sc03_096_8019A7D8 = 0x2000;
        D_sc03_096_8019A7DC = 0x2000;
    }
    x = ((0x90 - x) << 13) / 144;
    k = 0x2000;
    d = D_sc03_096_8019A7D8 - x;
    if (d > 0) {
        D_sc03_096_8019A7D8 -= d >> 2;
    } else if (d < 0) {
        D_sc03_096_8019A7D8 += -d / 4;
    }
    t = D_sc03_096_8019A7DC;
    D_sc03_096_8019A7DC = k;
    v = D_sc03_096_8019A7D8 - t + k;
    D_sc03_096_8019A7D8 = v;
    ((Obj *)arg0)->x20->x2C |= 0x10;
    ((Obj *)arg0)->x20->x18 = v >= 0 ? v : -v;
}

void func_sc03_096_8017FE20(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_096_8018028C(AF(arg0, s32, 0xD4));
}

void func_sc03_096_8017FE4C(u8 *arg0) {
    u8 temp_v0;

    temp_v0 = (u32) rsin(AF(arg0, s32, 0x1C) << 4) >> 5;
    AF(arg0, s16, 0x100) = temp_v0;
    AF(arg0, s16, 0xFE) = temp_v0;
    AF(arg0, s16, 0xFC) = temp_v0;
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc03_096_8017FF08((s32) arg0);
    }
}

void func_sc03_096_8017FEA8(u8 *arg0) {
    void *temp_v1;

    func_sc03_096_801801D4(AF(arg0, s32, 0xD4), 0);
    AF(arg0, s16, 2) = 4;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    func_sc03_096_8018026C(AF(arg0, s32, 0xD4));
}

void func_sc03_096_8017FF08(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if ((AF(arg0, s32, 0xE4) == 0) && !(AF(arg0, u16, 0x70) & 0x800)) {
        func_80016714(AF(arg0, s32, 0xD4), 0x38);
        func_8012C098(arg0);
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    if (!(AF(arg0, u16, 0x70) & 0x800)) {
        AF(arg0, s16, 2) = 6;
        func_8012E8A8(arg0);
        func_80016714(AF(arg0, s32, 0xD4), 0x38);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
    func_sc03_096_801801D4(AF(arg0, s32, 0xD4), 0);
    func_8012B260(arg0);
}

s32 func_sc03_096_8018001C(u8 *arg0) {
    SV8 a;
    SV8 b;

    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc03_096_80193A94[0], &a);
    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc03_096_80193A94[1], &b);
    if (func_80135888(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) != 0) {
        func_8012F568(1, 1, AF(AF(arg0, u8 *, 0x20), s16, 0x12), 9, &b, &D_801152A8);
        return 1;
    }
    return 0;
}

void func_sc03_096_801800D0(u8 *arg0, s32 arg1) {
    SMtx m;
    V4 v;

    AF(arg0, s16, 0x106) += func_8012B608(AF(arg0, s16, 0x106), func_8012B864(arg0), AF(arg0, s32, 0xE8));
    v.y = 0;
    v.x = 0;
    v.z = arg1;
    RotMatrixZYX(arg0 + 0x104, &m);
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
}

s32 func_sc03_096_80180148(u8 *arg0) {
    s32 *p;
    s32 t;

    if (AF(arg0, s32, 0xE0) == 0) {
        return 1;
    }
    AF(arg0, s32, 0xE0)--;
    if (AF(arg0, s32, 0xE0) > 0) {
        return 0;
    }
    p = AF(arg0, s32 *, 0xD0);
    p += 2;
    t = *p;
    if (!(t & 0x40000000)) {
        if (t < 0) {
            AF(arg0, s32, 0xE0) = 0;
            return 1;
        }
    } else {
        p = AF(arg0, s32 *, 0xCC);
    }
    AF(arg0, s32, 0xE0) = p[0];
    AF(arg0, s32 *, 0xD0) = p;
    func_800183E0(p[1]);
    return 0;
}

void func_sc03_096_801801D4(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = (arg1 * 4) + &D_sc03_096_80193AA4;
        AF(arg0, u16, 0x28) = (u16) AF(temp_v0, u16, 0);
        AF(arg0, u16, 0x2A) = (u16) AF(temp_v0, u16, 2);
    }
}

s32 func_sc03_096_80180208(void) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        return 0;
    }
    func_8001CB6C(temp_v0, (s32) &D_sc03_096_80193940, 0x298, 0x1B0);
    AF(temp_v0, u8, 0x27) = 0x68;
    AF(temp_v0, s16, 0x1A) = 0x1800;
    AF(temp_v0, s16, 0x18) = 0x1800;
    return temp_v0;
}

void func_sc03_096_8018026C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_096_8018028C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

s32 func_sc03_096_801802AC(u8 *arg0) {
    SV p;
    s32 r;
    u16 m;

    r = func_8012CBF4(arg0);
    if (D_800B99DA % 24 == 0) {
        p.vx = AF(arg0, u16, 6);
        p.vy = AF(arg0, u16, 0xA);
        p.vz = AF(arg0, u16, 0xE);
        p.vy += 0x38;
        func_sc03_096_801803D0(&p, AF(arg0, s16, 0xDE));
    }
    return r == 0;
}

s32 func_sc03_096_80180350(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (func_8012B6D4((s32) &D_80126B5C, arg0 + 4) - AF(D_80126B78, s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg1;
    }
    return (0x1000 - temp_a0) < (s16) arg1;
}

s32 func_sc03_096_801803D0(s32 arg0, s32 arg1) {
    u8 *o;
    u8 *t;

    o = (u8 *)func_801290DC(0x44, arg0);
    if (o == 0) {
        return 0;
    }
    t = AF(o, u8 *, 0x20);
    AF(t, s32 *, 0x20) = (s32 *)&D_sc03_096_80193AAC;
    AF(t, s16, 0x28) = 0x290;
    AF(t, s16, 0x2A) = 0x1A0;
    AF(t, u8, 0x27) = 0x70;
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = 1;
    AF(t, s32, 4) |= 0x50000000;
    AF(o, s32, 0x1C) = 1;
    AF(o, s32, 0x2C) = arg1;
    AF(t, u8, 0x24) = AF(t, u8, 0x25) = AF(t, u8, 0x26) = arg1;
    return (s32)o;
}

void func_sc03_096_80180474(u8 *arg0) {
    u8 *o;
    s16 v;
    s16 h;
    u32 c;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u16, 2) == 0) {
        h = rsin(AF(arg0, s32, 0x1C) << 6) * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            AF(arg0, u16, 2)++;
            AF(arg0, s32, 0x1C) = AF(arg0, s32, 0x1C) * 2 - 1;
        }
    } else {
        v = rsin(AF(arg0, s32, 0x1C) << 5);
        c = (u32) (AF(arg0, s32, 0x2C) * v) >> 12;
        h = v * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        AF(o, u8, 0x24) = c;
        AF(o, u8, 0x25) = c;
        AF(o, u8, 0x26) = c;
        if (--AF(arg0, s32, 0x1C) == 0) {
            func_801292C8(arg0);
        }
    }
}

void func_sc03_096_8018057C(u8 *arg0) {
    D_sc03_096_80197D98[AF(arg0, u16, 2)]();
}

void func_sc03_096_801805B8(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_096_80197CB8, D_sc03_096_80197CBA, D_sc03_096_80197CBC);
        p = &D_sc03_096_80197CC0;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_096_80197CF0, D_sc03_096_80197CF2, D_sc03_096_80197CF4);
        p = &D_sc03_096_80197CF8;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_096_80197D28, D_sc03_096_80197D2A, D_sc03_096_80197D2C);
        p = &D_sc03_096_80197D30;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_096_80197CB8, D_sc03_096_80197CBA, D_sc03_096_80197CBC);
        p = &D_sc03_096_80197CC0;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_096_80197D60, D_sc03_096_80197D62, D_sc03_096_80197D64);
        p = &D_sc03_096_80197D68;
        func_8012AD44(arg0, 5);
        break;
    }
    D_800A5E88.a = p->a;
    D_800A5E88.b = p->b;
    D_800A5E88.c = p->c;
    func_80028620(0, &D_800A5E88.a);
    func_80028620(1, &D_800A5E88.b);
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_096_801807AC(u8 *arg0) {
    D_800A5E88.c = D_sc03_096_80197CE0;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_096_8018085C(u8 *arg0) {
    D_800A5E88.c = D_sc03_096_80197D18;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_096_8018090C(u8 *arg0) {
    D_800A5E88.a = D_sc03_096_80197D30.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_096_801809BC(void) {
}

void func_sc03_096_801809C4(u8 *arg0) {
    D_800A5E88.a = D_sc03_096_80197D68.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}
