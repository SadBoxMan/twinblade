#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_006_8017BE9C(void) {
}

void func_sc07_006_8017BEA4(void) {
}

void func_sc07_006_8017BEAC(void) {
}

void func_sc07_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_006_8018DE48[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc07_006_8017CF54(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_006_8018DE50[])();
extern void func_800D1EBC();
extern u8 D_sc07_006_8018DE5C;
extern void func_8016EE40();
extern u8 D_sc07_006_8018DE60;
extern s32 func_sc07_006_8017D0F4();
extern void (*D_sc07_006_8018DF04[])();
extern void (*D_sc07_006_8018E274[])();
extern void (*D_sc07_006_8018EB2C[])();
extern void (*D_sc07_006_8018EB44[])();
extern void (*D_sc07_006_8018EB54[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc07_006_8018DE1C;
extern void func_800D1724();

extern void func_8012AD50();

extern void func_8002931C();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 func_8012A018();
extern s32 func_8012A094();
extern s32 func_sc07_006_8017D040();

extern u8 D_sc07_006_8018DF10;
extern s32 func_80143C74();
extern void func_80128EA8();
extern s32 func_8012CBCC();
extern void func_8012C218();

extern s32 D_sc07_006_801F61C0;
extern void (*D_sc07_006_8018E940[])();

extern u8 D_sc07_006_801F6140;
extern s8 D_sc07_006_801F6141;
extern s8 D_sc07_006_801F6142;
extern s8 D_sc07_006_801F6144;
extern s8 D_sc07_006_801F6145;
extern s8 D_sc07_006_801F6146;
extern s8 D_sc07_006_801F6180;
extern s8 D_sc07_006_801F6181;
extern s8 D_sc07_006_801F6182;
extern s8 D_sc07_006_801F6184;
extern s8 D_sc07_006_801F6185;
extern s8 D_sc07_006_801F6186;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc07_006_8017BEBC(u8 *obj) {
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

void func_sc07_006_8017CD9C(void) {
    func_8002931C(0x04740000);
}

void func_sc07_006_8017CDBC(u8 *arg0) {
    D_sc07_006_8018DE48[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_006_8017CDF8(u8 *arg0) {
    func_sc07_006_8017CF54();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_006_8017CE3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_006_8017CE60(u8 *arg0) {
    D_sc07_006_8018DE50[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_006_8017CE9C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_006_8017CEB8(u8 *arg0) {
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

void func_sc07_006_8017CF34(void) {
    func_800D1EBC();
}

void func_sc07_006_8017CF54(void) {
    func_8016EE40((s32) &D_sc07_006_8018DE5C, 0x01000000);
}

void func_sc07_006_8017CF7C(void) {
    func_8016EE40((s32) &D_sc07_006_8018DE60, 0x01000000);
}

void func_sc07_006_8017CFA4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_006_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_006_8017D0F4((s32) &D_80126948);
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
extern u8 D_sc07_006_8018DF0C[];
extern s32 func_80148800();
extern void func_sc07_006_8017D4E4();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D040);

s32 func_sc07_006_8017D0F4(s32 arg0) {
    D_sc07_006_8018DF04[AF(arg0, u8, 4)]();
}

void func_sc07_006_8017D130(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc07_006_8018DF0C)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc07_006_8017D4E4((s32) arg0, (s32) &v);
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D1D0);

void func_sc07_006_8017D4E4(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D67C);

void func_sc07_006_8017D868(u8 *arg0) {
    D_sc07_006_8018E274[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D8A4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017DA30);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017DC1C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017F3D4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017F5D4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017F9AC);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017FDF8);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801802EC);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801805D4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80180924);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80180CFC);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181148);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018163C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181924);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181C74);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181E64);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182000);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182158);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182268);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801823F8);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801826E0);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801828A4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182B8C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182D4C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182F3C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80183374);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80183814);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018881C);

void func_sc07_006_80189098(u8 *arg0) {
    s32 *var_v1;
    s32 var_a0;

    D_sc07_006_8018E940[AF(arg0, u16, 2)]();
    var_a0 = 0;
    var_v1 = &D_sc07_006_801F61C0;
    do {
        var_a0 += 1;
        *var_v1 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 4);
    } while (var_a0 < 0x10);
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801890FC);

void func_sc07_006_80189708(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, s32, 0x1C);
        if (temp_v0 != 0) {
            AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
            temp_v0_2 = func_80143C74((s32) arg0, 0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x14);
                AF(temp_v0_2, s32, 0x10) = (s32) (((rand() & 0xFF) - 0x80) << 0xA);
                AF(temp_v0_2, s32, 0x18) = (s32) (((rand() & 0xFF) - 0x80) << 0xA);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 3) + 4);
                func_80128EA8(AF(temp_v0_2, s32, 0x20), temp_v0_2 + 0xD0, (s32) &D_sc07_006_8018DF10);
            }
        }
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0xFC));
        if (func_8012CBCC((s32) arg0, (s32) temp_a1) & 0x2000) {
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x1E;
            return;
        }
        return;
    case 1:
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) ^ 0x80000000);
        temp_v0_3 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_3;
        if (temp_v0_3 == 0) {
            func_8012C218((s32) arg0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018984C);

void func_sc07_006_80189AC8(u8 *arg0) {
    D_sc07_006_8018EB2C[AF(arg0, u16, 2)]();
}

void func_sc07_006_80189B04(u8 *arg0) {
    D_sc07_006_8018EB44[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80189B40);

s32 func_sc07_006_80189C00(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 3U;
}

s32 func_sc07_006_80189C14(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 6U;
}

s32 func_sc07_006_80189C28(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 8U;
}

s32 func_sc07_006_80189C3C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xBU;
}

s32 func_sc07_006_80189C50(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xDU;
}

s32 func_sc07_006_80189C64(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xFU;
}

s32 func_sc07_006_80189C78(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x11U;
}

s32 func_sc07_006_80189C8C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x13U;
}

s32 func_sc07_006_80189CA0(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x14U;
}

s32 func_sc07_006_80189CB4(u8 *arg0) {
    return (u16) AF(arg0, u16, 2) >= 2U;
}

s32 func_sc07_006_80189CC8(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 4U;
}

s32 func_sc07_006_80189CDC(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 5U;
}

void func_sc07_006_80189CF0(void) {
    func_800D1724((s32) &D_sc07_006_8018DE1C);
}

void func_sc07_006_80189D18(void) {
    func_sc07_006_8017D040(0);
}

void func_sc07_006_80189D38(void) {
    func_sc07_006_8017D040(1);
}

void func_sc07_006_80189D58(void) {
    func_sc07_006_8017D040(2);
}

void func_sc07_006_80189D78(void) {
    func_sc07_006_8017D040(3);
}

void func_sc07_006_80189D98(void) {
    func_sc07_006_8017D040(4);
}

void func_sc07_006_80189DB8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    if (AF(arg0, s32, 0x1C) == 0x1E) {
        temp_v0 = func_80143C74((s32) arg0, 0);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) (AF(arg0, u16, 6) + (AF(arg0, u16, 0x12) * 4));
            AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + (AF(arg0, u16, 0x16) * 4));
            AF(temp_v0, s16, 0xE) = (s16) (AF(arg0, u16, 0xE) + (AF(arg0, u16, 0x1A) * 4));
        }
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if ((func_8012CBCC((s32) arg0) & 0x2000) || (AF(arg0, s32, 0x1C) == 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x88);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x88);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x10) = (u16) (AF(temp_v1_3, u16, 0x10) + 0x200);
    temp_v1_4 = AF(arg0, void *, 0x20);
    AF(temp_v1_4, u16, 0x12) = (u16) (AF(temp_v1_4, u16, 0x12) + 0x100);
    temp_v1_5 = AF(arg0, void *, 0x20);
    AF(temp_v1_5, u16, 0x14) = (u16) (AF(temp_v1_5, u16, 0x14) + 0x80);
}

void func_sc07_006_80189EF4(u8 *arg0, s32 arg1) {
    void *temp_v0;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if ((func_8012CBCC((s32) arg0, arg1) & 0x2000) || (AF(arg0, s32, 0x1C) == 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x14) = (u16) (AF(temp_v0, u16, 0x14) + AF(arg0, u16, 0xFC));
}

void func_sc07_006_80189F70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
        return;
    }
    AF(arg0, s32, 8) = (s32) (AF(AF(arg0, void *, 0x64), s32, 8) + AF(arg0, s32, 0x14));
    AF(arg0, s32, 0xC) = (s32) (AF(AF(arg0, void *, 0x64), s32, 0xC) + AF(arg0, s32, 0x18));
}

void func_sc07_006_80189FDC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    void *temp_s0;

    temp_v1 = AF(arg0, s32, 0x2C);
    temp_s0 = AF(arg0, void *, 0x20);
    switch (temp_v1) {                              /* irregular */
    case 0:
        AF(temp_s0, s16, 0x12) = 0x400;
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x60000000);
        D_sc07_006_801F6180 = 0;
        D_sc07_006_801F6184 = 0;
        D_sc07_006_801F6185 = 0;
        D_sc07_006_801F6186 = 0;
        D_sc07_006_801F6181 = 0;
        D_sc07_006_801F6182 = 0;
        AF(arg0, s32, 0x1C) = 0x3C;
        break;
    case 1:
        AF(temp_s0, s16, 0x12) = 0x400;
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
        D_sc07_006_801F6140 = 0xC0;
        D_sc07_006_801F6144 = 0;
        D_sc07_006_801F6145 = 0;
        D_sc07_006_801F6146 = 0;
        D_sc07_006_801F6141 = 0;
        D_sc07_006_801F6142 = 0;
        AF(arg0, s32, 0x1C) = 0x3C;
        break;
    case 2:
        AF(temp_s0, s16, 0x1E) = 0xC00;
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x60000000);
        AF(temp_s0, s16, 0x10) = rand();
        AF(temp_s0, s16, 0x12) = rand();
        break;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_006_8018A124(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018A150);

void func_sc07_006_8018A284(void) {
}

void func_sc07_006_8018A28C(u8 *arg0) {
    D_sc07_006_8018EB54[AF(arg0, u16, 2)]();
}

void func_sc07_006_8018A2C8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018A2F4);
