#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_009_801863B4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_009_8017CFAC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc01_009_8017CFD4(void);
extern void func_800D1EBC();
extern void (*D_sc01_009_801863C8[])();
extern u8 D_sc01_009_801863D4;
extern void func_8016EE40();
extern u8 D_sc01_009_801863E0;
extern void func_sc01_009_8017D0BC();
extern void (*D_sc01_009_801863F4[])();
extern s16 D_sc01_009_801F3180;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_009_801E9070[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern void (*D_sc01_009_801E9A18[])();
extern void (*D_sc01_009_801EEDBC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc01_009_801F3304;


extern s16 D_801274E8;
extern void func_sc01_009_8017D120();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_009_801F3188;
extern s32 D_sc01_009_801F32B8;
extern s32 D_sc01_009_801F32C0;
extern void func_800D24A0();
extern void func_sc01_009_8017D47C();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern u8 D_sc01_009_801E9088;
extern s32 func_sc01_009_8017F2A0();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void func_8012A018();
extern void func_8012A094();
extern void func_sc01_009_8017D2E0();
extern void func_80029514();
extern void func_800291A0();
extern s32 func_800291B4();
extern s32 D_sc01_009_801E97C4;
extern void func_8001AAA0();
extern void func_8001B710();
extern u8 D_sc01_009_801E90E0;
extern u8 D_sc01_009_801E9260;
extern u8 D_sc01_009_801E9968;
extern s32 func_801789AC();
extern void func_80178CBC();
extern void func_80178D18();
extern void func_801746A4();
extern u8 D_sc01_009_801E99D8;
extern u8 D_sc01_009_801E9178;
extern void func_sc01_009_80181724();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8014B2A8();
extern void func_8014BB24();
extern void func_80029124();
extern s16 D_sc01_009_801F32D0;
extern void func_8012B200();
extern s32 func_8012C658();
extern void func_80146A6C();
extern u8 D_sc01_009_801EDA20;
extern s32 D_sc01_009_801F32E8;
extern u8 D_sc01_009_801ED890;
extern u8 D_sc01_009_801EDA68;
extern void func_8017B368();
extern void func_sc01_009_8018144C();
extern u8 D_sc01_009_801EB424;
extern u8 D_sc01_009_801EB314;
extern s32 func_80012ABC();
extern u8 D_sc01_009_801EB4AC;
extern u8 D_sc01_009_801EB534;
extern u8 D_sc01_009_801EB39C;
extern u8 D_sc01_009_801EE8EC;
extern s32 D_sc01_009_801ED72C[];
extern u8 D_sc01_009_801ED404;
extern void func_8012C218();


extern u8 D_sc01_009_80183A40[];

extern void func_801439C0();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { u16 a; u16 b; u8 pad[28]; } R8017D4A4;
typedef struct {
    s16 f0; u8 p2[0xC]; s16 fE; u8 p10[0xC];
    u8 p1C[0x24]; s16 f40[3];
} W80115118;
typedef struct { s16 v; } S16R;
typedef struct { u8 v; } U8R;
extern s32 func_80029504();
extern W80115118 D_80115118;
extern R8017D4A4 *D_80115134;
extern u8 D_80115138[];
extern U8R D_80115140[];
extern S16R D_80115148[];
extern R8017D4A4 *D_sc01_009_801E8EE0[];
extern u8 *D_sc01_009_801E8F34[];
extern u8 D_sc01_009_801E8F2C[];
extern u8 D_sc01_009_801F32C4[];
extern s16 D_sc01_009_801F3184;
extern u16 D_sc01_009_801F318C;
extern u16 D_sc01_009_801F3190;
extern void func_sc01_009_8017D730();

void func_sc01_009_8017BE9C(u8 *obj) {
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

void func_sc01_009_8017CD7C(u8 *arg0) {
    D_sc01_009_801863B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_009_8017CDB8(u8 *arg0) {
    func_sc01_009_8017CFAC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_009_8017CDFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc01_009_8017CE20(u8 *arg0) {
    func_sc01_009_8017CFD4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_009_8017CE60(u8 *arg0) {
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

void func_sc01_009_8017CEDC(void) {
    func_800D1EBC();
}

void func_sc01_009_8017CEFC(u8 *arg0) {
    D_sc01_009_801863C8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_009_8017CF38(u8 *arg0) {
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

void func_sc01_009_8017CFAC(void) {
    func_8016EE40((s32) &D_sc01_009_801863D4, 0x01000000);
}

void func_sc01_009_8017CFD4(void) {
    func_8016EE40((s32) &D_sc01_009_801863E0, 0x01000000);
}

void func_sc01_009_8017CFFC(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_8012695C = 0x2BC;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x91;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_009_8017D0BC, 0);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -0xB9;
    func_sc01_009_8017D0BC((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_009_8017D0BC(s32 arg0) {
    D_sc01_009_801863F4[AF(arg0, u8, 4)]();
}

void func_sc01_009_8017D0F8(s32 arg0) {
    func_sc01_009_8017D120(arg0, (s32) &D_801274E8);
}

extern s8 D_800B9A15;
extern s32 D_801151D0;
extern s32 D_sc01_009_801F32BC;
extern s32 D_801151C8[];
extern s32 func_8014168C();
extern void func_80139954();
extern void func_sc01_009_8017DEF0();
extern void func_80137B80();
extern s16 D_80115126;
extern u8 D_sc01_009_801E906C;
extern s32 func_sc01_009_8017DC10();
extern s32 func_sc01_009_8017E590();
extern s32 func_801376E8();
extern s32 func_801399F0();
extern s32 GetPadPressedDirWide();
extern s32 func_sc01_009_8017EB08();

typedef struct { s8 lo; u8 hi; } S8PE804;
extern S8PE804 D_80115158[];
extern u8 D_80115141;
extern u8 D_80115142;
extern s32 D_8010F3C4[];
extern u8 *D_sc01_009_801F32B4;

typedef struct { u32 *ot; u8 pad4[8]; u32 *otLast; u8 pad10[4]; } OtE804;
typedef struct { u16 v; } U16RE804;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } SprtE804;
extern u16 D_sc01_009_801E8C4E;
extern u16 D_sc01_009_801E8C62;
extern OtE804 D_800AE7BC[];

extern s16 D_8011515A;
extern u16 D_8011514A;
extern u16 D_8011514C;
extern u8 D_sc01_009_801EEE4C[];
extern u8 D_sc01_009_801EEE74[];
extern u8 D_sc01_009_801EEEB0[];
extern u8 D_sc01_009_801EEF40[];
extern u8 D_sc01_009_801EEF68[];
extern u8 D_sc01_009_801EEFC0[];
extern u8 D_sc01_009_801EF030[];
extern u8 D_sc01_009_801EF054[];
extern u8 D_sc01_009_801EF094[];
extern u8 D_sc01_009_801EF0E0[];
extern u8 D_sc01_009_801EF18C[];

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
extern s32 func_80012C6C();
extern void func_8012F14C();

void func_sc01_009_8017D120(u8 *p, s16 *q) {
    WMtx m;
    SV4 v;
    SV4 o;

    AF(p, s32, 8) = (s16) func_80012C6C(AF(p, s16, 8), AF(p, s16, 0xC), 0xA);
    AF(p, s32, 0x10) = (s16) func_80012C6C(AF(p, s16, 0x10), AF(p, s16, 0x14), 0xA);
    AF(p, s16, 0x18) = func_80012ABC(AF(p, s16, 0x18), AF(p, s16, 0x20), 0xA);
    AF(p, s16, 0x1A) = func_80012ABC(AF(p, s16, 0x1A), AF(p, s16, 0x22), 0xA);
    AF(p, s16, 0x1C) = func_80012ABC(AF(p, s16, 0x1C), AF(p, s16, 0x24), 0xA);
    AF(p, s16, 0x28) = func_80012C6C(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0xA);
    AF(p, s16, 0x2A) = func_80012C6C(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0xA);
    AF(p, s16, 0x2C) = func_80012C6C(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0xA);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + q[0];
    m.t[1] = AF(p, s16, 0x2A) + q[1];
    m.t[2] = AF(p, s16, 0x2C) + q[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

typedef struct { s32 a; s32 b; } P8F20;
typedef struct {
    u8 p0[2]; u16 step;
    u8 p4[0x18];
    s32 f1C; s32 obj;
    u8 p24[0x40];
    u8 *parent;
    u8 p68[8];
    s16 f70;
    u8 p72[0x5A];
    s32 fCC;
    u8 pD0[8];
    s32 fD8;
    u8 pDC[0x20];
    s16 fFC;
    u8 pFE[0xA];
    s16 f108; s16 f10A;
} ActF20;
extern u8 D_sc01_009_80182CA4;
extern u8 D_sc01_009_8018670C;
extern u8 D_sc01_009_801ECCDC;
extern u8 D_sc01_009_801ED25C;
extern u8 D_sc01_009_801ED34C;
extern s32 D_sc01_009_801EDA4C;
extern s32 D_sc01_009_801EDA6C;
extern u8 D_sc01_009_801EDAA8;
extern u16 D_sc01_009_801EE740[];
extern u8 D_sc01_009_801EE880;
extern u8 D_sc01_009_801EE8D8;
extern s16 D_sc01_009_801F32D4;
extern s32 D_sc01_009_801F32DC;
extern s32 D_sc01_009_801F32E0;
extern s32 D_sc01_009_801F32E4;
extern s32 D_sc01_009_801ED4E4[];
extern s32 D_sc01_009_801EED54[];
extern s32 D_sc01_009_801ED7F0[];
extern u8 D_sc01_009_801ED4B4[];
extern P8F20 D_sc01_009_801ED5F0[];
extern P8F20 D_sc01_009_801ED5EC[];
extern s32 D_sc01_009_801ED8D8[];
extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001C214();
extern s32 func_80143994();
extern void func_8001C1E4();
extern void func_8001C2C4();
extern s32 func_sc01_009_8018057C();

typedef struct { s16 a, b; } S16x2;
typedef struct { char *name; s32 x; } NameEnt;
extern u8 D_80115139;
extern u16 D_8011515C;
extern char *D_sc01_009_801E8D80[];
extern s32 D_sc01_009_801E8E5C;
extern char D_sc01_009_801F1D08[];
extern char D_sc01_009_801F3194[][0x24];
extern u16 D_sc01_009_801E8D60[];
extern NameEnt D_8010F468[];
extern s32 D_sc01_009_801E8D6C[];
extern u8 D_801117EC;
extern u8 D_80112B58;
extern u8 D_80112B90;
extern u8 D_80112BA8;
extern u8 D_sc01_009_801E8F50[];
extern S16x2 D_sc01_009_801E8F78[];
extern s32 D_sc01_009_801E8F98[];
extern u8 *D_sc01_009_801E8FB4[];
extern u8 D_sc01_009_801EEE34;
extern u8 D_sc01_009_801EEEF8;
extern u8 D_sc01_009_801EEF14;
extern u8 D_sc01_009_801EEF84;
extern u8 D_sc01_009_801EF010;
extern u8 D_sc01_009_801EF108;
extern u8 D_sc01_009_801EF140;
extern u8 D_sc01_009_801EF168;
extern s32 func_sc01_009_8017EF64();
extern s32 func_80029178();
extern void func_80139A44();

extern u16 D_80115122;
extern u16 D_80115120;
extern s32 GetPadHeldDirWide();

extern u8 D_800B9A13;
extern s16 D_80115110;
extern void *D_8011DB24;
extern void func_sc01_009_8017D334();
void func_8013E5E8(void);
extern u8 D_sc01_009_80183A46;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
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
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { s32 w[4]; } W16;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef void (*StepFn)(void);
extern u8 *func_800D27DC();
extern u8 * func_sc01_009_8017E1AC();
extern void func_80024054();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

extern s16 D_sc01_009_801F32D8;
extern s32 func_8012C51C();
extern u8 D_sc01_009_801ED1D4;
extern s32 SetScript();
extern void func_800183E0();
extern s32 rand();
extern u8 D_sc01_009_801EFF04;
extern u8 D_sc01_009_801F0154;
extern u8 D_sc01_009_801ECC74;
extern u8 D_sc01_009_801EE8A0;
extern void func_8012AD80();

extern OtE804 D_800AE7B8[];
extern s32 func_80137D08();
extern s32 func_8013AB54();
extern u8 D_sc01_009_801E890C;
extern u8 D_sc01_009_801E8920;
extern u8 D_sc01_009_801E9064;



s16 func_sc01_009_8017D2D0(void);

s32 func_sc01_009_8017D2B8(s32 a) {
    if (a == 0x2DA) {
        return 0x9F;
    }
    return 0x3D;
}

s16 func_sc01_009_8017D2D0(void) {
    return D_sc01_009_801F3180;
}

void func_sc01_009_8017D2E0(s32 arg0, s32 arg1) {
    extern void func_sc01_009_8017D384(void);

    D_800B9A15 = 1;
    D_800B9A13 = 4;
    D_80115110 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    D_sc01_009_801F3188 = arg1;
    D_8011DB24 = (void *)func_sc01_009_8017D384;
}

void func_sc01_009_8017D334(s32 arg0) {
    D_800B9A15 = 1;
    D_80115112 = 7;
    D_800B9A13 = 1;
    D_80115110 = 0;
    D_80115126 = arg0;
    D_sc01_009_801F3188 = 0;
    D_8011DB24 = (void *)func_8013E5E8;
}

void func_sc01_009_8017D384(void) {
    func_80029444();
    func_801754A8();
    D_sc01_009_801E9070[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_009_8017D3F4(void) {
    func_800D24A0(4);
    func_sc01_009_8017D47C();
    if (D_sc01_009_801F3188 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_009_801F3188;
    }
    D_sc01_009_801F32C0 = 0;
    D_sc01_009_801F32B8 = 0;
    D_80115130 = 0;
    D_sc01_009_801F3188 = 0;
    D_80115112 += 1;
}

void func_sc01_009_8017D47C(void) {
    s16 i;
    s16 j;
    s16 count;
    s16 found;
    u8 *p;

    D_80115118.f0 = 0;
    D_sc01_009_801F3180 = 0;
    D_80115134 = D_sc01_009_801E8EE0[D_80115118.fE];
    for (i = 0; i < 3; i++) {
        D_80115138[i] = D_80115134[i].a;
        D_80115118.f40[i] = D_80115134[i].b;
        if (D_sc01_009_801F3188 == 0) {
            D_80115148[i].v = 0;
            if (D_80115118.fE == 0) {
                D_80115140[i].v = 0;
            }
        }
    }
    if (D_80115118.fE == 0 && func_80029504() >= 0x3B6U) {
        D_80115118.f40[0] = 0x106;
    }
    count = 0;
    if (D_80115118.fE == 3) {
        for (i = 0; i < 7; i++) {
            D_sc01_009_801F32C4[i] = 0;
        }
        for (i = 0; i < 7; i++) {
            found = 0;
            p = D_sc01_009_801E8F34[i];
            j = 0;
            if (D_sc01_009_801E8F2C[i] != 0) {
                do {
                    if (func_800291B4(*p++ + 0x62) & 0x40) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc01_009_801E8F2C[i]);
            }
            if (found) {
                D_sc01_009_801F32C4[count++] = i;
            }
        }
        D_80115118.f40[1] = count | 0x100;
        if (D_sc01_009_801F3188 != 0) {
            D_80115148[0].v = 1;
            D_80115148[1].v = D_sc01_009_801F318C;
            D_80115148[2].v = D_sc01_009_801F3190;
        }
        D_sc01_009_801F3184 = 0;
    }
    func_sc01_009_8017D730();
}

void func_sc01_009_8017D730(void) {
    char *e = D_sc01_009_801F1D08;
    char *b;
    s16 i;
    s16 n;
    u8 k;
    u8 c;
    u8 *names;
    char *dst;

    switch (D_80115139) {
    case 7:
        D_8011515C = AF(D_sc01_009_801E8D60, u16, *(u8 *) &D_8011514A * 2);
        D_sc01_009_801E8E5C = AF(D_sc01_009_801E8D6C, s32, *(u8 *) &D_8011514A * 4);
        if (D_sc01_009_801F3188 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    case 9:
        b = D_sc01_009_801F3194[0];
        for (i = 0; i < 7; i++) {
            strcpy((char *) (i * 0x24 + (s32) b), e);
        }
        k = D_sc01_009_801F32C4[*(u8 *) &D_8011514A];
        n = D_sc01_009_801E8F2C[k];
        names = D_sc01_009_801E8F34[k];
        D_sc01_009_801F32B4 = names;
        D_8011515C = n | 0x100;
        for (i = 0; i < n; i++) {
            c = names[i];
            e = D_sc01_009_801E8D80[i];
            b = D_8010F468[c].name;
            if (func_800291B4(c + 0x62) & 0x40) {
                strcpy(e, b);
            }
        }
        if (D_sc01_009_801F3188 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    }
}

void func_sc01_009_8017D920(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

void func_sc01_009_8017D93C(void) {
    u8 unused[8];
    s32 st;
    s32 r;
    u8 c;
    s32 s;
    s32 t;
    s32 *q;
    u16 *h;
    s16 x;

    D_801151D0 = D_801151C8[D_800B9A02];
    st = func_sc01_009_8017DC10();
    func_sc01_009_8017DEF0();
    r = func_8014168C(D_8011511A);
    c = D_80115138[(u16) D_8011511A];
    if (D_80115126 != 4) {
        if (D_sc01_009_801F32B8 != 0) {
            s = D_sc01_009_801F32B8;
        } else {
            s = func_sc01_009_8017E590(c, (s16) r);
        }
        if (s != 0) {
            q = &D_80115130;
            if (s != *q) {
                *q = s;
                func_80139954();
                D_sc01_009_801F32BC = func_801376E8(s, &D_sc01_009_801E906C);
            }
        }
        func_80137B80();
    }
    x = st;
    if (x < 0) {
        func_80139954();
        D_800B9A15 = 0;
        if (x == -1) {
            func_8002D4C8(0x474, 0);
        }
        h = &D_80115112;
        *h += 2;
    }
}

void func_sc01_009_8017DA8C(void) {
    u8 unused[8];
    u16 k;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_sc01_009_801F32B8 != 0) {
        if (func_801399F0(D_sc01_009_801F32BC) != 0) {
            D_sc01_009_801F32B8 = 0;
        }
    } else if (GetPadPressedDirWide(0) & 0x50) {
        k = D_8011511A;
        if (D_80115138[k] == 8) {
            func_sc01_009_8017EB08(0xF, (s16) func_8014168C((s16) k));
        }
        if (D_sc01_009_801F3180 != 0) {
            func_80139954();
            D_800B9A15 = 0;
            func_8002D4C8(0x474, 0);
            D_80115112++;
        } else {
            D_80115112--;
        }
    }
    func_sc01_009_8017DEF0();
    func_80137B80();
}

void func_sc01_009_8017DBB8(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

s32 func_sc01_009_8017DC10(void) {
    s32 btn;
    s32 rep;
    s32 r;
    s16 kind;
    u16 cur;
    u8 *a;
    u8 *b;
    u8 v;
    u8 old;
    s16 d;
    s16 x;
    s16 ret;

    ret = 0;
    btn = GetPadPressedDirWide(0);
    if (btn & 0xFFFF) {
        D_sc01_009_801F32B8 = 0;
    }
    rep = GetPadHeldDirWide(0);
    r = func_8014168C(*(s16 *)D_80115118.p2);
    cur = *(u16 *)D_80115118.p2;
    kind = D_80115138[cur];
    if (btn & 0x40) {
        x = func_sc01_009_8017EB08(kind, (s16)r);
        return x != 0 ? x : ret;
    }
    if (btn & 0x10) {
        if (kind < 6) {
            if (kind != 1) {
                return -1;
            }
        } else {
            func_8002D4C8(0x473, 0);
            (*(u16 *)D_80115118.p2)--;
        }
        return 0;
    }
    a = &D_80115118.p1C[0x14 + cur * 2];
    b = (u8 *)&D_80115118.f40[cur];
    if ((u16)rep != 0) {
        if ((u16)rep == D_80115120) {
            if (--D_80115122 == 0) {
                btn = rep & 0xF000;
                D_80115122 = 3;
            }
        } else {
            D_80115120 = rep;
            D_80115122 = 8;
        }
    } else {
        D_80115120 = 0;
        D_80115122 = 12;
    }
    if (btn & 0x1000) {
        (*a)--;
        ret = 1;
        if (*a >= 0x80) {
            if (kind < 6) {
                *a = *b - 1;
            } else {
                *a = 0;
                ret = 0;
            }
        }
    }
    if (btn & 0x4000) {
        old = *a;
        *a = old + 1;
        ret = 1;
        if (*a >= *b) {
            if (kind < 6) {
                *a = 0;
            } else {
                *a = old;
                ret = 0;
            }
        }
    }
    v = *a;
    cur = D_8011511A;
    d = (s8)v - (s8)D_80115140[cur].v;
    if (d >= 6) {
        D_80115140[cur].v = v - 5;
    } else if (d < 0) {
        D_80115140[cur].v = v;
    }
    if (ret) {
        func_8002D4C8(0x45A, 0);
        if ((u16)D_8011511A == 1) {
            if (kind == 9) {
                D_80115142 = 0;
            }
            func_sc01_009_8017D730();
        }
    }
    return 0;
}

void func_sc01_009_8017DEF0(void) {
    s32 p;
    R8017D4A4 *r;
    u8 *tbl;
    u16 n;
    s32 c;
    s16 i;

    p = D_801151D0;
    r = D_80115134;
    if (D_80115126 != 4) {
        p = func_80137D08(p, &D_800AE7B8[D_800B9A02], 2);
        if (D_80115126 == 0 || D_80115126 == 3) {
            tbl = &D_sc01_009_801E8920;
        } else {
            tbl = &D_sc01_009_801E890C;
            if (D_80115126 == 1 && *(u16 *)&D_8011511A != 0
                && D_sc01_009_801F32B8 != (s32)D_sc01_009_801EF030
                && D_sc01_009_801F32B8 != (s32)D_sc01_009_801EF054
                && D_sc01_009_801F32B8 != (s32)D_sc01_009_801EF094
                && D_sc01_009_801F32B8 != (s32)D_sc01_009_801EF0E0
                && (s16)func_sc01_009_8017EF64() == 0) {
                tbl = &D_sc01_009_801E8920;
            }
        }
        p = (s32)func_800D27DC(2, p, tbl, 1, 0);
        p = func_8013AB54(p, D_800AE7BC[D_800B9A02].ot + 2, &D_sc01_009_801E9064, 0);
    }
    c = *(u16 *)&D_8011511A == 0 ? 1 : (D_80115126 == 2 || D_80115126 == 3) ? 3 : 2;
    n = c;
    for (i = 0; i < n; i++, r++) {
        if (*(s16 *)((u8 *)D_80115158 + (i << 1)) != 0) {
            p = (s32)func_sc01_009_8017E1AC(p, r, i);
        }
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x2000000;
    addPrim(&D_800AE7BC[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
    p += 0x28;
    ((S32R *)&D_801151D0)->v = p;
}

u8 *func_sc01_009_8017E1AC(u8 *p, u8 *t, s32 id0) {
    s16 id = id0;
    u8 buf[0x48];
    u32 col;
    s32 a;
    s16 f;
    s32 c;
    u8 d;
    s16 *xy;
    s16 i;
    s32 r;

    a = (u8)-((u16)D_8011511A != id);
    
    func_80024054(AF(t, s32, 0x14), buf);
    f = a;
    p = func_800D2650(p, buf, AF(t, s16, 0x10), AF(t, s16, 0x12), 1, (u8)a ? 0x585858 : 0x808080);
    
    p = (u8 *)func_sc01_009_8017E7DC((Sprt *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_sc01_009_8017E378(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
        if (r == 0) break;
        if (r < 0) {
            func_80024054(r, buf);
            if (c) col -= 0x282828;
            p = func_800D2650(p, buf, xy[0], xy[1], 1, col);
        }
    }
    d = f;
    p = func_800D27DC(d != 0, p, AF(t, u8 *, 4), AF(t, s16, 0xC), 0);
    return func_800D29F8(d, p, AF(t, u8 *, 8), AF(t, s16, 0xE), 0);
}

s32 func_sc01_009_8017E378(s32 *tbl, s16 kind, s16 id, s16 i, s32 *col) {
    s32 r;
    s16 n;
    s16 j;
    s32 k;

    *col = 0x808080;
    n = D_80115158[id].hi * *(u8 *) &D_80115158[id].lo;
    r = 0;
    switch (kind) {
    case 6:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (!(func_800291B4(D_sc01_009_80183A40[j]) & 0xFF)) {
            *col = 0x804040;
        }
        k = j + 1;
        r = D_8010F3C4[k];
        break;
    case 10:
        j = i + D_80115142;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (func_800291B4(D_sc01_009_801F32B4[j] + 0x62) & 0x20) {
            *col = 0x804040;
        }
        r = tbl[j];
        break;
    case 9:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            break;
        }
        r = tbl[D_sc01_009_801F32C4[j]];
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    default:
        if (i >= n) {
            break;
        }
        r = tbl[i];
        break;
    }
    return r;
}

s32 func_sc01_009_8017E590(s32 kind, s32 id) {
    u8 unused[8];
    u8 *r;
    s16 j;
    s32 v;
    s32 t;
    s32 n;
    s32 x;
    s32 p;
    u8 c;

    r = &D_801117EC;
    switch ((s16) kind) {
    case 6:
        if ((s16) func_sc01_009_8017EF64() != 0) {
            v = func_80029504();
            j = D_sc01_009_801E8F50[(s16) id];
            t = (s32) D_sc01_009_801E8F78; x = D_sc01_009_801E8F78[j].a; if (v < x && (n = -(j * 4), (t = ((S16x2 *) (t - n))->b) == 0 || !(func_80029178(t) & 0xFF))) {

                j = -1;
            }
            if (j >= 0) {
                p = D_sc01_009_801E8F98[j];
                func_80139A44(p, 0);
                if (p != D_sc01_009_801F32C0) {
                    D_sc01_009_801F32C0 = p;
                    D_80115130 = 0;
                }
                r = &D_sc01_009_801EF108;
            } else {
                r = &D_sc01_009_801EF140;
            }
        } else {
            c = func_800291B4(D_sc01_009_80183A40[(s16) id]);
            if (c == 0) {
                r = &D_80112B58;
            } else if (c == 1) {
                r = &D_80112B90;
            } else {
                r = &D_sc01_009_801EF168;
                if ((s16) id != 0) {
                    r = &D_80112BA8;
                }
            }
        }
        break;
    case 1:
        r = &D_sc01_009_801EEE34;
        break;
    case 2:
        r = &D_sc01_009_801EF010;
        break;
    case 4:
        r = &D_sc01_009_801EEEF8;
        break;
    case 3:
    case 7:
    case 8:
        r = &D_sc01_009_801EEF84;
        break;
    case 9:
        r = &D_sc01_009_801EEF14;
        break;
    case 10:
        c = D_sc01_009_801F32B4[(s16) id];
        if (func_800291B4(c + 0x62) & 0x40) {
            r = D_sc01_009_801E8FB4[c];
        }
        break;
    case 5:
        break;
    }
    return (s32) r;
}

SprtE804 *func_sc01_009_8017E7DC(SprtE804 *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
    s32 kind;
    s16 k;
    u16 *uv;
    u16 cur;
    s16 i;

    kind = D_80115138[id];
    p->tag = 0x04000000;
    p->u = 0x30;
    p->v = 0x48;
    p->clut = 0x4056;
    p->code = col | 0x64000000;
    if (kind < 6) {
        k = func_8014168C(id) * 2;
    } else {
        k = (*(u8 *)&D_80115148[id] - D_80115140[id].v) * 2;
    }
    uv = (u16 *)(k * 2 + (s32)tbl);
    p->x = uv[0] - 8;
    p->y = uv[1];
    p->h = 8;
    p->w = 8;
    addPrim(&D_800AE7BC[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
    p++;
    if (kind >= 6) {
        cur = D_8011511A;
        if (cur == id && (D_80115116 & 8)) {
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    if (D_80115140[cur].v == 0) {
                        continue;
                    }
                    p->v = 0x30;
                    p->y = D_sc01_009_801E8C4E - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc01_009_801E8C62 + 1;
                }
                p->tag = 0x04000000;
                p->u = 0x78;
                p->code = 0x64808080;
                p->clut = 0x4056;
                p->x = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 13;
                p->w = 8;
                p->h = 8;
                addPrim(&D_800AE7BC[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
                p++;
            }
        }
    }
    return p;
}

s32 func_sc01_009_8017EB08(s32 arg0, s32 arg1) {
    s32 v;
    s32 t;
    s32 u;
    u8 *p;
    s16 *q;
    s16 *q2;

    v = func_80029504();
    switch ((s16)arg0) {
    case 2:
    case 3:
        if ((s16)arg1 != 0) {
            return -1;
        }
        q2 = &D_8011511A;
        (*q2)++;
        func_8002D4C8(0x45D, 0);
        return 0;
    case 4:
        u = (s16)arg1;
        if (u == 2) {
            return -1;
        }
        if (u != 0) {
            if (v < 10 || D_8011515A == 0x100) {
                p = D_sc01_009_801EEF68;
                goto set;
            }
            D_8011511A++;
            func_8002D4C8(0x45D, 0);
            return 0;
        }
        if (v < 10) {
            p = D_sc01_009_801EEF40;
            goto set;
        }
        D_sc01_009_801F3180 = 1;
        return -1;
    case 5:
        u = (s16)arg1;
        if (u == 0) {
            D_sc01_009_801F3180 = 1;
        }
        if (u == 1) {
            if (func_800291B4(D_sc01_009_801F3184 + 0x62) & 0x20) {
                goto call;
            }
            D_sc01_009_801F3180 = 2;
        }
        return -1;
    case 6:
        t = (s16)arg1;
        if (t == 0) {
            p = D_sc01_009_801EF030;
            goto set;
        }
        if (t == 3 || t == 5) {
            if ((s16)arg1 == 3) {
                p = D_sc01_009_801EF054;
                goto set;
            }
            if ((u8)func_800291B4(0x40) == 0) {
                goto call;
            }
            p = D_sc01_009_801EF094;
            goto set;
        }
        if ((u8)func_800291B4(D_sc01_009_80183A40[t]) == 0) {
            goto call;
        }
        if (v >= 0x294 && v < 0x384 && (t == 12 || t == 17 || t == 26)) {
            p = D_sc01_009_801EF0E0;
            goto set;
        }
        if (v >= 0xA0 && v < 0xC8 && (u16)(arg1 - 10) < 4) {
            p = D_sc01_009_801EF18C;
            goto set;
        }
        D_sc01_009_801F3180 = arg1 + 1;
        return -1;
    case 7:
        if ((s16)arg1 >= 3 && (u8)func_800291B4(0x62) == 0) {
            p = D_sc01_009_801EEFC0;
            goto set;
        }
    case 9:
        func_8002D4C8(0x45D, 0);
        q = &D_8011511A;
        (*q)++;
        break;
    case 8:
        t = func_8014168C(1);
        if ((s16)t == 0) {
            func_80029124(0xE8, 1);
        }
        D_sc01_009_801F3180 = ((t + 1) << 8) | (arg1 + 1);
        return -1;
    case 10:
        t = D_sc01_009_801F32B4[(s16)arg1];
        if (func_800291B4(t + 0x62) & 0x40) {
            D_sc01_009_801F3180 = t | 0x100;
            D_sc01_009_801F3184 = t;
            D_sc01_009_801F318C = D_8011514A;
            D_sc01_009_801F3190 = D_8011514C;
            return -1;
        }
        goto call;
    case 1:
        if (v == 0x294) {
            u = (s16)arg1;
            if (u < 4) {
                if (u == 3) {
                    goto ret2;
                }
                p = D_sc01_009_801EEE4C;
                goto set;
            }
        }
        if (v == 0x3B6) {
            u = (s16)arg1;
            if (u < 5) {
                if (u == 3) {
                ret2:
                    D_sc01_009_801F3180 = arg1;
                    return -2;
                }
                p = D_sc01_009_801EEE74;
                goto set;
            }
        }
        if (v >= 0x44C && v < 0x47E && (s16)arg1 == 5) {
            p = D_sc01_009_801EEEB0;
        set:
            D_sc01_009_801F32B8 = (s32)p;
        call:
            func_8002D4C8(0x45F, 0);
            return 0;
        }
        D_sc01_009_801F3180 = arg1;
        if ((s16)arg1 == 3) {
            return -2;
        }
        return -1;
    }
    return 0;
}

s32 func_sc01_009_8017EF64(void) {
    s32 r;
    if (func_800291B4(D_sc01_009_80183A46) & 0xFF) {
        r = !(func_800291B4(D_sc01_009_80183A40[(s16) func_8014168C(1)]) & 0xFF);
        return r;
    }
    r = 0;
    return r;
}

extern void func_800D1724();
extern u8 D_sc01_009_80186364;
extern u8 D_sc01_009_80186388;
s32 func_sc01_009_801816FC(s32 arg0);
extern u8 D_sc01_009_801ECE4C;

extern void func_80171B10();
extern s32 ratan2();
extern u8 D_sc01_009_80189124;
extern u8 D_sc01_009_8018916C;
extern u8 D_sc01_009_801891D4;
extern u8 D_sc01_009_80189228;
extern u8 D_sc01_009_8018927C;
extern u8 D_sc01_009_801892C4;
extern u8 D_sc01_009_801AAEDC;
extern s32 func_sc01_009_8017EFC4();
extern void func_80172310();

extern s32 func_8016F1AC();
extern void func_80178B18();
extern u8 D_sc01_009_801E91A8;
extern u8 D_sc01_009_801E9528;
extern u8 D_sc01_009_801E91F0;
extern u8 D_sc01_009_801E9220;
extern u8 D_sc01_009_801E9240;
extern u16 D_sc01_009_801ED59C[];
extern s32 func_80128CFC();
extern s32 D_sc01_009_801EED88[];
extern void func_8012B2CC();
extern void func_8012B1B4();
extern void func_80139A68();
extern u8 D_sc01_009_801866D0;
extern u8 D_sc01_009_80186630;
extern u8 D_sc01_009_8018667C;
extern u8 *D_sc01_009_801E9234;
extern s32 D_sc01_009_801ED738[];

extern u8 D_8010F5C8;
extern u8 D_sc01_009_801887A0;
extern u8 D_sc01_009_801887EC;
extern u8 D_sc01_009_801888E0;
extern u8 D_sc01_009_80188954;
extern u8 D_sc01_009_801889E4;
extern u8 D_sc01_009_80188A58;
extern u8 D_sc01_009_80188DE8;
extern u8 D_sc01_009_80188EA0;
extern u8 D_sc01_009_80188F6C;
extern u8 D_sc01_009_80189058;
extern u8 D_sc01_009_801894DC;
extern u8 D_sc01_009_801895E0;
extern u8 D_sc01_009_801896E0;
extern u8 D_sc01_009_80189804;
extern u8 D_sc01_009_801898C4;
extern u8 D_sc01_009_8018993C;
extern u8 D_sc01_009_80189994;
extern u8 D_sc01_009_801899C0;
extern u8 D_sc01_009_80189A0C;
extern u8 D_sc01_009_80189AC0;
extern u8 D_sc01_009_80189B14;
extern u8 D_sc01_009_80189B88;
extern u8 D_sc01_009_80189BC0;
extern u8 D_sc01_009_80189D64;
extern u8 D_sc01_009_80189DCC;
extern u8 D_sc01_009_80189E28;
extern u8 D_sc01_009_80189E74;
extern u8 D_sc01_009_80189ED4;
extern u8 D_sc01_009_80189F28;
extern u8 D_sc01_009_8018A060;
extern u8 D_sc01_009_8018A120;
extern u8 D_sc01_009_8018A174;
extern u8 D_sc01_009_8018A1AC;
extern u8 D_sc01_009_8018A1F0;
extern u8 D_sc01_009_8018A254;
extern u8 D_sc01_009_8018A2C0;
extern u8 D_sc01_009_8018A32C;
extern u8 D_sc01_009_8018A418;
extern u8 D_sc01_009_8018A480;
extern u8 D_sc01_009_8018A4D4;
extern u8 D_sc01_009_8018A538;
extern u8 D_sc01_009_8018A680;
extern u8 D_sc01_009_8018A6F4;
extern u8 D_sc01_009_8018A734;
extern u8 D_sc01_009_8018A7BC;
extern u8 D_sc01_009_8018A870;
extern u8 D_sc01_009_8018A994;
extern u8 D_sc01_009_8018A9E0;
extern u8 D_sc01_009_8018AAFC;
extern u8 D_sc01_009_8018ABEC;
extern u8 D_sc01_009_8018AC78;
extern u8 D_sc01_009_8018AD8C;
extern u8 D_sc01_009_8018AF74;
extern u8 D_sc01_009_8018B040;
extern u8 D_sc01_009_8018B0E4;
extern u8 D_sc01_009_8018B154;
extern u8 D_sc01_009_8018B190;
extern u8 D_sc01_009_8018B214;
extern u8 D_sc01_009_8018B288;
extern u8 D_sc01_009_8018B320;
extern u8 D_sc01_009_8018B3F8;
extern u8 D_sc01_009_8018B4AC;
extern u8 D_sc01_009_8018B634;
extern u8 D_sc01_009_8018B834;
extern u8 D_sc01_009_8018BA3C;
extern u8 D_sc01_009_8018BA84;
extern u8 D_sc01_009_8018BB38;
extern u8 D_sc01_009_8018BBB0;
extern u8 D_sc01_009_8018BCA4;
extern u8 D_sc01_009_8018BD78;
extern u8 D_sc01_009_8018BE14;
extern u8 D_sc01_009_8018BE7C;
extern u8 D_sc01_009_8018BF44;
extern u8 D_sc01_009_8018C028;
extern u8 D_sc01_009_8018C0EC;
extern u8 D_sc01_009_8018C268;
extern u8 D_sc01_009_8018C360;
extern u8 D_sc01_009_8018C434;
extern u8 D_sc01_009_8018C4B8;
extern u8 D_sc01_009_8018C55C;
extern u8 D_sc01_009_8018C620;
extern u8 D_sc01_009_8018C78C;
extern u8 D_sc01_009_8018C958;
extern u8 D_sc01_009_8018CA0C;
extern u8 D_sc01_009_8018CAF8;
extern u8 D_sc01_009_8018CC20;
extern u8 D_sc01_009_8018CE74;
extern u8 D_sc01_009_8018CF84;
extern u8 D_sc01_009_8018D1E8;
extern u8 D_sc01_009_8018D26C;
extern u8 D_sc01_009_801EDB10;
extern u8 D_sc01_009_801EDEB0;
extern u8 D_sc01_009_801EDEE0;
extern u8 D_sc01_009_801EDFE0;
extern u8 D_sc01_009_801EDFF8;
extern u8 D_sc01_009_801EE0A0;
extern u8 D_sc01_009_801EE0C0;
extern u8 D_sc01_009_801EE0E0;
extern u8 D_sc01_009_801EE118;
extern u8 D_sc01_009_801EE180;
extern u8 D_sc01_009_801EE1A8;
extern u8 D_sc01_009_801EE1D0;
extern u8 D_sc01_009_801EE1F0;
extern u8 D_sc01_009_801EE280;
extern u8 D_sc01_009_801EE418;
extern u8 D_sc01_009_801EE4F8;
extern u8 D_sc01_009_801EE528;
extern u8 D_sc01_009_801EE580;
extern u8 D_sc01_009_801EE6B8;
extern s32 D_sc01_009_801EE730[];
extern s32 func_8002953C();
extern s32 func_800D0F8C();
extern void func_800D0FE0();
u8 *func_sc01_009_80181380(void);
void func_sc01_009_80181600(void);
void func_sc01_009_80181688(void);

extern u8 *D_sc01_009_801E91D4;
extern u8 D_sc01_009_801E92E0;
extern u8 D_sc01_009_801E93C8;
extern u8 D_sc01_009_801E93F8;
extern u8 D_sc01_009_801E94D0;
extern u8 D_sc01_009_801E94E0;
extern u8 D_sc01_009_801E9510;
extern u8 D_sc01_009_801E9830;
extern u8 D_sc01_009_801E9878;
extern u8 D_sc01_009_801E9898;
extern u8 D_sc01_009_801E9910;
extern u8 D_sc01_009_801E9928;

s32 func_sc01_009_8017EFC4(u8 *o) {
    s16 v;
    s16 c;
    s16 r;

    v = func_80029504();
    c = (u8)func_800291B4(0x3B);
    if (v >= 0x87 && v < 0xC8) {
        if (c < 4) {
            func_80029514(0x8C);
            func_800291A0(0x3B, 4);
            D_sc01_009_801E91D4 = &D_sc01_009_801E92E0;
            return 1;
        }
        if (c == 4) {
            D_sc01_009_801E91D4 = &D_sc01_009_801E93C8;
            return 1;
        }
    }
    if (v >= 0x280 && v < 0x294) {
        if (c < 6) {
            func_800291A0(0x3B, 6);
            D_sc01_009_801E91D4 = &D_sc01_009_801E93F8;
            return 1;
        }
        if (c == 6) {
            D_sc01_009_801E91D4 = &D_sc01_009_801E94D0;
            return 1;
        }
        if (c == 7) {
            r = func_800D0F8C(0x64);
            if (r != 0) {
                func_800D0FE0(r);
                func_800291A0(0x3B, 8);
                func_80029514(0x294);
                D_sc01_009_801E91D4 = &D_sc01_009_801E94E0;
                return 1;
            }
            if ((s16)func_800D0F8C(0x63) != 0 || (s16)func_800D0F8C(0x65) != 0 || (s16)func_800D0F8C(0x66) != 0) {
                D_sc01_009_801E91D4 = &D_sc01_009_801E9510;
                return 1;
            }
        }
    }
    if (v >= 0x2DA && v < 0x2EE && c < 9) {
        AF(o, s16, 0x10A) = 0x28;
        func_80029514(0x2E4);
        func_800291A0(0x3B, 9);
        AF(o, s16, 0xFA) = 0xA40;
        return 1;
    }
    if (v >= 0x3A2 && v < 0x3AC) {
        if (c < 0xA) {
            func_800291A0(0x3B, 0xA);
            D_sc01_009_801E91D4 = &D_sc01_009_801E9830;
            return 1;
        }
        func_800291A0(0x3B, 0xB);
        D_sc01_009_801E91D4 = &D_sc01_009_801E9878;
        return 1;
    }
    if (v >= 0x3AC && v < 0x3B6) {
        if (c < 0xA) {
            D_sc01_009_801E91D4 = &D_sc01_009_801E9898;
        } else {
            D_sc01_009_801E91D4 = &D_sc01_009_801E9910;
        }
        func_80029514(0x3B6);
        func_800291A0(0xCE, 1);
        func_800291A0(0x3B, 0xC);
        return 1;
    }
    if (v < 0x3F2) {
        return 0;
    }
    if (c >= 0xD) {
        return 0;
    }
    func_800291A0(0x3B, 0xD);
    D_sc01_009_801E91D4 = &D_sc01_009_801E9928;
    return 1;
}

s32 func_sc01_009_8017F2A0(o)
    u8 *o;
{
    s16 *p;
    s32 t;

    p = AF(o, s16 *, 0xCC);
    if (p == 0) {
        return 0;
    }
    if (AF(o, s32, 0x1C) == 0) {
        t = *p++;
        if (t == 0) {
            func_8012B200(o);
            AF(o, s16 *, 0xCC) = 0;
            return 0;
        }
        AF(o, s32, 0x1C) = t;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = *p++;
        AF(o, s16, 0xE6) = *p++;
        func_8012B2CC(o);
        AF(o, s16 *, 0xCC) = p;
    }
    AF(o, s32, 0x1C) -= 1;
    func_8012B1B4(o, o + 0xDC);
    func_8012AD80(o);
    return 1;
}

void func_sc01_009_8017F360(u8 *arg0) {
    D_sc01_009_801E9A18[AF(arg0, u16, 2)]();
}

void func_sc01_009_8017F39C(u8 *o) {
    SpawnDef d;

    d.kind = 0x1AB;
    d.unk8 = AF(o, u16, 0x10A);
    d.flags = 0;
    d.unkC = -0x400;
    d.unkE = 0;
    d.unk10 = 0;
    if (AF(o, s16, 0x10A) < 0x28) {
        d.x = -0x1C0;
        d.y = -0xB2;
        d.z = 0x188;
        AF(o, s16, 0x108) = 1;
    } else {
        d.x = -0x18;
        d.y = -0x82;
        d.z = -0x200;
    }
    AF(o, s32, 0xD4) = func_8012C51C(&d, o);
}

void func_sc01_009_8017F440(void) {
    func_sc01_009_8017D2E0(1, 0);
}

void func_sc01_009_8017F464(void) {
    func_sc01_009_8017D2E0(1, 1);
}

s32 func_sc01_009_8017F488(u8 *o) {
    s16 v;

    v = func_sc01_009_8017D2D0();
    if (v == 0) {
        return 0;
    }
    AF(o, s16, 0x10A) = v - 1;
    return 1;
}

s32 func_sc01_009_8017F4D0(u8 *o) {
    AF(o, s16, 0x104) = 4;
    if ((func_800291B4(0x45) & 0xFF) == 0) {
        AF(o, s16, 0x104)--;
        return 1;
    }
    return 0;
}

s32 func_sc01_009_8017F520(u8 *o) {
    if ((func_800291B4(0x46) & 0xFF) == 0) {
        AF(o, s16, 0x104)--;
        return 1;
    }
    return 0;
}

s32 func_sc01_009_8017F568(u8 *o) {
    if ((func_800291B4(0x47) & 0xFF) == 0) {
        AF(o, s16, 0x104)--;
        return 1;
    }
    return 0;
}

s32 func_sc01_009_8017F5B0(u8 *o) {
    if ((func_800291B4(0x48) & 0xFF) == 0) {
        AF(o, s16, 0x104)--;
        return 1;
    }
    return 0;
}

s32 func_sc01_009_8017F5F8(u8 *arg0) {
    return AF(arg0, s16, 0x104) == 4;
}

s16 func_sc01_009_8017F60C(u8 *arg0) {
    return AF(arg0, s16, 0x104);
}

void func_sc01_009_8017F618(u8 *arg0, s32 arg1) {
    func_80029514(0x96, arg1);
    func_800291A0(0x3B, 5);
    AF(arg0, s16, 2) = 5;
}

void func_sc01_009_8017F658(void) {
    func_800291A0(0x3B, 7);
}

void func_sc01_009_8017F67C(u8 *arg0) {
    func_800291A0(0x3B, 8);
    AF(arg0, s16, 2) = 5;
}

void func_sc01_009_8017F6B4(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
}

s32 func_sc01_009_8017F6C0(u8 *o) {
    AF(o, s16, 0x104) = 2;
    if ((func_800291B4(0x4C) & 0xFF) == 0) {
        AF(o, s16, 0x104)--;
        return 1;
    }
    return 0;
}

s32 func_sc01_009_8017F710(u8 *o) {
    if ((func_800291B4(0x55) & 0xFF) == 0) {
        AF(o, s16, 0x104)--;
        return 1;
    }
    return 0;
}

s32 func_sc01_009_8017F758(u8 *arg0) {
    return AF(arg0, s16, 0x104) == 2;
}

s32 func_sc01_009_8017F76C(void) {
    return (func_800291B4(0x41) & 0xFF) == 0;
}

s32 func_sc01_009_8017F790(void) {
    return (func_800291B4(0x4C) & 0xFF) != 0;
}

s32 func_sc01_009_8017F7B4(void) {
    return (func_800291B4(0x55) & 0xFF) != 0;
}

s32 func_sc01_009_8017F7D8(void) {
    return D_sc01_009_801F3304 != 1;
}

void func_sc01_009_8017F7F0(void) {
    s16 i;
    s16 n;

    n = 0;
    for (i = 5; i < 0x28; i++) {
        if ((u8) func_800291B4(D_sc01_009_80183A40[i])) {
            n++;
        }
    }
    if (n != 0) {
        if (n == 0x23) {
            D_sc01_009_801E9234 = &D_sc01_009_801866D0;
        } else {
            func_80139A68(n, 0);
            D_sc01_009_801E9234 = &D_sc01_009_80186630;
        }
    } else {
        D_sc01_009_801E9234 = &D_sc01_009_8018667C;
    }
}

void func_sc01_009_8017F8B4(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0x1D00;
}

void func_sc01_009_8017F8C0(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0x1A40;
}

void func_sc01_009_8017F8CC(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0x2000;
}

void func_sc01_009_8017F8D8(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0xA40;
}

void func_sc01_009_8017F8E4(u8 *arg0) {
    AF(arg0, s16, 0xFA) = -1;
    AF(arg0, s32, 0x1C) = 0;
    D_sc01_009_801E97C4 = 0;
}

s32 func_sc01_009_8017F900(u8 *o) {
    SV8 v;

    if (AF(o, s32, 0x1C) < 0x82) {
        v.x = AF(AF(o, u8 *, 0xD4), u16, 6);
        v.y = 0;
        v.z = AF(AF(o, u8 *, 0xD4), u16, 0xE);
        func_80171B10(&D_80126B58, &v);
        if (AF(o, s32, 0x1C)++ >= 0x56) {
            v.x -= AF(o, s16, 6);
            v.z -= AF(o, s16, 0xE);
            D_sc01_009_801E97C4 = -ratan2(v.x, v.z);
        }
        return 1;
    }
    return 0;
}

void func_sc01_009_8017F9CC(void) {
    func_8001AAA0(0x3D);
    func_8001B710();
}

void func_sc01_009_8017F9F4(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

void func_sc01_009_8017FA14(u8 *o) {
    SV8 v;
    s32 t;
    s32 s;
    s32 f;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t != 0) {
        func_8001C214(t, &D_sc01_009_801AAEDC);
        SetScript(o, &D_sc01_009_801E9088);
        func_80143994(o, 0x3000);
        s = func_80029504();
        f = (u8)func_800291B4(0x3B);
        if ((u16)(s - 0x2DA) < 0x14 && f < 9) {
            AF(o, s16, 0x102) = 1;
            func_sc01_009_8017EFC4(o);
            v.y = -0x82;
            v.z = -0x1F8;
            v.x = 0;
            v.pad = 0x800;
            func_80172310(&v);
            AF(o, s32, 0x1C) = 0xF;
        } else {
            AF(o, s32, 0x1C) = 2;
        }
        AF(o, u16, 2)++;
    }
}

void func_sc01_009_8017FAFC(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
        return;
    }
    if (func_8016F1AC() == 0 || AF(arg0, s16, 0x102) != 0) {
        if (AF(arg0, s16, 0x102) == 0) {
            func_80178B18((s32) arg0, (s32) &D_sc01_009_801E91A8);
        } else {
            func_80178B18((s32) arg0, (s32) &D_sc01_009_801E9528);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_8017FB98(u8 *arg0) {
    switch ((s16) func_801789AC()) {
    case 0:
        break;
    case 1:
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801E91F0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        break;
    case 2:
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801E9220);
        AF(arg0, s16, 2) = 4;
        break;
    case 3:
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801E9240);
        AF(arg0, s16, 2) = 5;
        break;
    }
}

void func_sc01_009_8017FC44(s32 arg0) {
    s16 var_v0;

    if (func_801789AC(arg0) != 0) {
        if (AF(arg0, s16, 0x108) == 0) {
            func_80178CBC(arg0, (s32) &D_sc01_009_801E9260);
            var_v0 = 2;
        } else {
            AF(arg0, s32 *, 0xCC) = &D_sc01_009_801E9968;
            SetScript(arg0, (s32) &D_sc01_009_801E90E0);
            var_v0 = 6;
            AF(arg0, s32, 0x1C) = 0;
        }
        AF(arg0, s16, 2) = var_v0;
    }
}

void func_sc01_009_8017FCC0(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178CBC(arg0, (s32) &D_sc01_009_801E9260);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_009_8017FD08(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc01_009_8017FD58(s32 arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_009_801E9088);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_8017FDAC(u8 *arg0) {
    if (AF(arg0, s16, 0x106) != 0) {
        AF(arg0, s16, 0x106) = 0;
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s32, 0x1C) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_009_801E90E0);
        AF(arg0, s32 *, 0xCC) = &D_sc01_009_801E99D8;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_8017FE10(u8 *arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xE) = 0x100;
        AF(arg0, s16, 0x108) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_009_801E9088);
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801E9178);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc01_009_8017FE78(u8 *o) {
    if (--AF(o, s32, 0x1C) == -1) {
        if (func_80029504() == 0x294) {
            func_800D1724(&D_sc01_009_80186388);
        } else {
            func_800D1724(&D_sc01_009_80186364);
        }
    }
}

void func_sc01_009_8017FED0(void) {
}

extern u16 D_801202A0;

s32 func_sc01_009_8017FED8(u8 *o) {
    s16 i;
    u8 *p;
    s16 n;

    if (--AF(o, s16, 0x102) == -1) {
        i = 0;
        p = (u8 *)&D_801202A0;
        for (; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x1AB && AF(p, s16, 0x70) == 0x2B) {
                n = D_sc01_009_801F32D8;
                if (AF(p, s16, 0xFC) == n - 1) {
                    do { /* MATCH-TRICK: weights p+0x102 above n in global alloc */
                        if (AF(p, s32, 0xCC) != 0) {
                            AF(o, s16, 0x102) = 0;
                            return 0;
                        }
                    } while (0);
                    D_sc01_009_801F32D8 = n - 1;
                    AF(p, s16, 0x102) = 1;
                    if (D_sc01_009_801F32D8 & 1) {
                        AF(o, s16, 0x102) = 9;
                    } else {
                        AF(o, s16, 0x102) = 4;
                    }
                    break;
                }
            }
        }
    }
    return D_sc01_009_801F32D8 < 2;
}

void func_sc01_009_8017FFD0(ActF20 *arg0) {
    RECT rect;
    u8 unused[8];
    s32 obj;
    s16 st;
    u8 idx;
    u16 *p;

    if (D_sc01_009_801ED4E4[D_sc01_009_801ED4B4[arg0->f70]] == 0) {
        func_8012CAE4();
        return;
    }
    obj = func_8012C1B8();
    arg0->obj = obj;
    if (obj == 0) {
        return;
    }
    if (arg0->f70 >= 0x28) {
        func_8001C214(obj, D_sc01_009_801ED4E4[arg0->f70]);
        st = arg0->f70;
        if (st == 0x28) {
            SetScript((s32) arg0, (s32) &D_sc01_009_801ECCDC);
            arg0->fCC = (s32) &D_sc01_009_801EE880;
            arg0->fD8 = func_80143994((s32) arg0, 0x3000);
            arg0->step = 7;
            return;
        }
        if (st == 0x29) {
            D_sc01_009_801F32D4 = 0;
            SetScript((s32) arg0, (s32) &D_sc01_009_801EB39C);
            arg0->fCC = (s32) &D_sc01_009_801EE8D8;
            arg0->fD8 = func_80143994((s32) arg0, 0x3000);
            arg0->step = 0xA;
            return;
        }
        if (st == 0x2A) {
            func_8001C1E4(arg0->obj, AF(arg0->parent, s32, 0x20));
            SetScript((s32) arg0, (s32) &D_sc01_009_80182CA4);
            AF(arg0->obj, s32, 4) = 0x80000000;
            arg0->step = 0x16;
            return;
        }
        if (st == 0x2B) {
            SetScript((s32) arg0, (s32) &D_sc01_009_801ED25C);
            arg0->fCC = D_sc01_009_801EED54[arg0->fFC];
            arg0->fD8 = func_80143994((s32) arg0, 0x2000);
            arg0->step = 0x19;
            return;
        }
        if (st == 0x2C) {
            SetScript((s32) arg0, (s32) &D_sc01_009_80182CA4);
            arg0->f1C = 0x5A;
            arg0->fD8 = func_80143994((s32) arg0, 0x1800);
            arg0->step = 0x1C;
            return;
        }
        if (st == 0x2D) {
            SetScript((s32) arg0, (s32) &D_sc01_009_801ED34C);
            arg0->f1C = 0x58;
            arg0->step = 0x1D;
            return;
        }
    }
    D_sc01_009_801F32D0 = 0;
    idx = D_sc01_009_801ED4B4[arg0->f70];
    arg0->f10A = idx;
    D_sc01_009_801F32DC = D_sc01_009_801ED5F0[idx].a;
    D_sc01_009_801F32E0 = D_sc01_009_801ED5EC[arg0->f10A].a;
    arg0->f108 = (func_800291B4(D_sc01_009_80183A40[arg0->f70]) & 0xFF) - 1;
    func_8001C2C4(arg0->obj);
    if (arg0->f108 == 0) {
        D_sc01_009_801ED8D8[0] = (s32) &D_sc01_009_8018670C;
        func_sc01_009_80181724(arg0->f70, 2);
        arg0->f108 = 1;
        st = arg0->f70;
        if (st == 9 || st == 0x1B || st == 0x21) {
            D_sc01_009_801F32D0 = 1;
        }
    }
    D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EDAA8;
    D_sc01_009_801F32E4 = D_sc01_009_801ED7F0[arg0->f10A];
    if (D_sc01_009_801F32E4 == 0) {
        D_sc01_009_801F32E4 = func_sc01_009_8018057C(arg0);
    }
    D_sc01_009_801EDA4C = D_sc01_009_801F32E0;
    D_sc01_009_801EDA6C = D_sc01_009_801F32DC;
    *(s32 *) (D_sc01_009_801F32E8 + 4) = D_sc01_009_801F32E4;
    p = &D_sc01_009_801EE740[arg0->f10A * 4];
    rect.x = *p++;
    rect.y = *p++;
    rect.w = 8;
    rect.h = 0x28;
    MoveImage(&rect, 0x1C0, 0x1B8);
    rect.x = *p++;
    rect.y = *p++;
    rect.w = 0x10;
    rect.h = 1;
    MoveImage(&rect, 0x160, 0x1D0);
    arg0->step++;
}

void func_sc01_009_801803E4(u8 *o) {
    s16 v;
    s16 t;
    u8 *m;

    t = AF(o, s16, 0xF8);
    if (t == 0) {
        func_800183E0(&D_sc01_009_801EFF04);
        AF(o, s16, 0xF8) = (rand() & 0x1F) + 0x23;
    } else {
        if (t == 2) {
            func_800183E0(&D_sc01_009_801F0154);
        }
        AF(o, s16, 0xF8) = AF(o, u16, 0xF8) - 1;
    }
    m = AF(o, u8 *, 0x64);
    v = AF(m, s16, 0xFA);
    if (v != 0) {
        AF(m, s16, 0xFA) = 0;
        if (v >= 0) {
            if (v & 0xFFF) {
                AF(o, s16, 0xFA) = v & 0xFFF;
            }
            if (v & 0x1000) {
                SetScript((s32) o, (s32) &D_sc01_009_801ECC74);
            }
            if (v & 0x2000) {
                SetScript((s32) o, (s32) &D_sc01_009_801ECCDC);
            }
        } else {
            SetScript((s32) o, (s32) &D_sc01_009_801ECCDC);
            func_800183E0(&D_sc01_009_801EFF04);
            AF(o, u8 *, 0xCC) = &D_sc01_009_801EE8A0;
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 2) = (u16) (AF(o, u16, 2) + 1);
            return;
        }
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFA), 4);
}

void func_sc01_009_80180540(u8 *arg0) {
    D_sc01_009_801EEDBC[AF(arg0, u16, 2)]();
}

s32 func_sc01_009_8018057C(u8 *o) {
    s32 t;
    s32 st;
    s32 p;
    s16 n;
    s16 k;
    s16 i;
    s16 v;
    SpawnDef d;

    t = func_80029504();
    st = AF(o, s16, 0x70);
    switch (st) {
    case 1:
        if (func_8002953C() < 0x23U) {
            return (s32) &D_sc01_009_801887A0;
        }
        return (s32) &D_sc01_009_801887EC;
    case 2:
        if (AF(o, s16, 0x108) != 3) {
            if ((s16) func_sc01_009_801816FC(0x17) == 0) {
                return (s32) &D_sc01_009_801888E0;
            }
            p = func_800D0F8C(0xB);
            if (p == 0) {
                p = func_800D0F8C(0xC);
                if (p == 0) {
                    return (s32) &D_sc01_009_80188954;
                }
            }
            func_sc01_009_80181724(AF(o, s16, 0x70), 4);
            func_800D0FE0(p);
            func_80029124(0x83, 1);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EDB10;
            return (s32) &D_sc01_009_801889E4;
        }
        D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EDEB0;
        return (s32) &D_sc01_009_80188A58;
    case 4:
        k = (s16) func_sc01_009_801816FC(0xA) != 0;
        if ((s16) func_sc01_009_801816FC(0x1C) != 0) {
            k++;
        }
        if ((s16) func_sc01_009_801816FC(0x22) != 0) {
            k++;
        }
        return D_sc01_009_801EE730[k];
    case 8:
        if (AF(o, s16, 0x108) != 2) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            func_80029124(0x82, 1);
            D_sc01_009_801ED8D8[0] = (s32) &D_sc01_009_80188EA0;
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EDEE0;
            return (s32) &D_sc01_009_80188DE8;
        }
        return (s32) &D_sc01_009_80188F6C;
    case 6:
        func_80139A44(func_sc01_009_80181380(), 0);
        return (s32) &D_sc01_009_80189058;
    case 14:
        for (i = 0x40, n = 0; i < 0x4D; i++) {
            if (func_80029178(i) & 0xFF) {
                n++;
            }
        }
        if (n == 0) {
            return (s32) &D_sc01_009_801894DC;
        }
        D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EDFE0;
        d.kind = 0x1AB;
        d.unk8 = 0x2B;
        d.x = -0x1C0;
        d.y = -0xB2;
        D_sc01_009_801F32D8 = n;
        d.unkC = 0;
        d.flags = 0;
        d.unkE = 0;
        d.unk10 = 0;
        d.z = 0x188;
        func_8012C51C(&d, o);
        if (n != 0xD) {
            func_80139A68(n, 0);
            return (s32) &D_sc01_009_801895E0;
        }
        return (s32) &D_sc01_009_801896E0;
    case 10:
        if (t < 0xC8) {
            if (t < 0x96) {
                if ((s16) func_sc01_009_801816FC(0xE) == 0) {
                    return (s32) &D_sc01_009_80189804;
                }
                return (s32) &D_sc01_009_801898C4;
            }
            if (!(func_80029178(0x99) & 0xFF)) {
                return (s32) &D_sc01_009_8018993C;
            }
            return (s32) &D_sc01_009_80189994;
        }
        return (s32) &D_sc01_009_801899C0;
    case 13:
        if (t < 0xC8) {
            if (t < 0x96) {
                if ((s16) func_sc01_009_801816FC(0xB) == 0) {
                    return (s32) &D_sc01_009_80189A0C;
                }
                return (s32) &D_sc01_009_80189AC0;
            }
            if (!(func_80029178(0x99) & 0xFF)) {
                return (s32) &D_sc01_009_80189B14;
            }
            return (s32) &D_sc01_009_80189B88;
        }
        if (AF(o, s16, 0x108) < 2) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            func_80029124(0x85, 1);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EDFF8;
            return (s32) &D_sc01_009_80189BC0;
        }
        return (s32) &D_sc01_009_80189D64;
    case 11:
        if (t < 0xC8) {
            if (t < 0x96) {
                return (s32) &D_sc01_009_80189DCC;
            }
            if (!(func_80029178(0x99) & 0xFF)) {
                return (s32) &D_sc01_009_80189E28;
            }
            return (s32) &D_sc01_009_80189E74;
        }
        if (t < 0x2E4) {
            return (s32) &D_sc01_009_80189ED4;
        }
        if (t < 0x2F8) {
            if (t < 0x2EE) {
                func_sc01_009_80181724(AF(o, s16, 0x70), 3);
                func_sc01_009_80181688();
            }
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE0A0;
            return (s32) &D_sc01_009_80189F28;
        }
        return (s32) &D_sc01_009_8018A060;
    case 23:
        if (t < 0x2E4) {
            return (s32) &D_sc01_009_8018B3F8;
        }
        if (t < 0x2F8) {
            if (t < 0x2EE) {
                func_sc01_009_80181724(AF(o, s16, 0x70), 3);
                func_sc01_009_80181688();
            }
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE0C0;
            return (s32) &D_sc01_009_8018B4AC;
        }
        return (s32) &D_sc01_009_8018B634;
    case 30:
        if (t < 0x2E4) {
            return (s32) &D_sc01_009_8018C028;
        }
        if (t < 0x2F8) {
            if (t < 0x2EE) {
                func_sc01_009_80181724(AF(o, s16, 0x70), 3);
                func_sc01_009_80181688();
            }
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE0E0;
            return (s32) &D_sc01_009_8018C0EC;
        }
        return (s32) &D_sc01_009_8018C268;
    case 12:
        if (t < 0xC8) {
            if (t < 0x96) {
                return (s32) &D_sc01_009_8018A120;
            }
            if (!(func_80029178(0x99) & 0xFF)) {
                return (s32) &D_sc01_009_8018A174;
            }
            return (s32) &D_sc01_009_8018A1AC;
        }
        if (t < 0x280) {
            return (s32) &D_sc01_009_8018A1F0;
        }
        if (t < 0x294) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            func_sc01_009_80181600();
            return (s32) &D_sc01_009_8018A254;
        }
        return (s32) &D_sc01_009_8018A2C0;
    case 17:
        if (t < 0x280) {
            return (s32) &D_sc01_009_8018A680;
        }
        if (t < 0x294) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            func_sc01_009_80181600();
            return (s32) &D_sc01_009_8018A6F4;
        }
        return (s32) &D_sc01_009_8018A734;
    case 26:
        if (t < 0x280) {
            return (s32) &D_sc01_009_8018BA84;
        }
        if (t < 0x294) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            func_sc01_009_80181600();
            return (s32) &D_sc01_009_8018BB38;
        }
        return (s32) &D_sc01_009_8018BBB0;
    case 15:
        switch (AF(o, s16, 0x108)) {
        case 1:
            if ((s16) func_sc01_009_801816FC(0x16) == 0) {
                return (s32) &D_sc01_009_8018A32C;
            }
            func_sc01_009_80181724(AF(o, s16, 0x70), 0x25);
            func_sc01_009_80181724(0x15, 0x25);
            return (s32) &D_sc01_009_8018A418;
        case 2:
            if ((s16) func_sc01_009_801816FC(0x1E) == 0) {
                return (s32) &D_sc01_009_8018A4D4;
            }
            func_sc01_009_80181724(AF(o, s16, 0x70), 4);
            func_sc01_009_80181724(0x15, 4);
            func_80029124(0x9B, 1);
        case 3:
            return (s32) &D_sc01_009_8018A538;
        }
        return (s32) &D_sc01_009_8018A480;
    case 21:
        switch (AF(o, s16, 0x108)) {
        case 1:
            if ((s16) func_sc01_009_801816FC(0x10) == 0) {
                return (s32) &D_sc01_009_8018B040;
            }
            func_sc01_009_80181724(AF(o, s16, 0x70), 0x25);
            func_sc01_009_80181724(0xF, 0x25);
            return (s32) &D_sc01_009_8018B0E4;
        case 2:
            if ((s16) func_sc01_009_801816FC(0x1E) == 0) {
                return (s32) &D_sc01_009_8018B190;
            }
            func_sc01_009_80181724(AF(o, s16, 0x70), 4);
            func_sc01_009_80181724(0xF, 4);
            func_80029124(0x9B, 1);
        case 3:
            return (s32) &D_sc01_009_8018B214;
        }
        return (s32) &D_sc01_009_8018B154;
    case 29:
        if (!(func_80029178(0x9B) & 0xFF)) {
            return (s32) &D_sc01_009_8018BE7C;
        }
        return (s32) &D_sc01_009_8018BF44;
    case 18:
        switch (AF(o, s16, 0x108)) {
        case 1:
            p = func_800D0F8C(0x28);
            if (p == 0) {
                return (s32) &D_sc01_009_8018A7BC;
            }
            func_800D0FE0(p);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE118;
            return (s32) &D_sc01_009_8018A870;
        case 2:
            func_sc01_009_80181724(AF(o, s16, 0x70), 5);
            func_80029124(0x1B, 1);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE180;
            return (s32) &D_sc01_009_8018A9E0;
        case 3:
            func_sc01_009_80181724(AF(o, s16, 0x70), 5);
            func_80029124(0x1C, 1);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE1A8;
            return (s32) &D_sc01_009_8018AAFC;
        case 4:
            return (s32) &D_sc01_009_8018ABEC;
        }
        return (s32) &D_sc01_009_8018A994;
    case 28:
        if ((s16) func_sc01_009_801816FC(0x13) >= 3) {
            return (s32) &D_sc01_009_8018BE14;
        }
        if (func_800D0F8C(0x28) != 0) {
            return (s32) &D_sc01_009_8018BD78;
        }
        return (s32) &D_sc01_009_8018BCA4;
    case 19:
        D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE1D0;
        return (s32) &D_sc01_009_8018AC78;
    case 20:
        if (AF(o, s16, 0x108) < 2) {
            func_80029124(0x86, 1);
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE1F0;
            return (s32) &D_sc01_009_8018AD8C;
        }
        return (s32) &D_sc01_009_8018AF74;
    case 35:
        if (AF(o, s16, 0x108) < 2) {
            if (!(func_80029178(0x85) & 0xFF)) {
                return (s32) &D_sc01_009_8018CA0C;
            }
            func_80029124(0x87, 1);
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE418;
            return (s32) &D_sc01_009_8018C78C;
        }
        return (s32) &D_sc01_009_8018C958;
    case 22:
        if (!(func_80029178(0x83) & 0xFF)) {
            return (s32) &D_sc01_009_8018B288;
        }
        D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE4F8;
        return (s32) &D_sc01_009_8018B320;
    case 31:
        if (AF(o, s16, 0x108) < 2) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            return (s32) &D_sc01_009_8018C360;
        }
        return (s32) &D_sc01_009_8018C434;
    case 36:
        D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE528;
        return (s32) &D_sc01_009_8018CAF8;
    case 39:
        if (AF(o, s16, 0x108) < 2) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            return (s32) &D_sc01_009_8018D1E8;
        }
        return (s32) &D_sc01_009_8018D26C;
    case 25:
        if (AF(o, s16, 0x108) < 2) {
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE280;
            return (s32) &D_sc01_009_8018B834;
        }
        return (s32) &D_sc01_009_8018BA3C;
    case 38:
        D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE6B8;
        return (s32) &D_sc01_009_8018CF84;
    case 32:
        if (AF(o, s16, 0x108) < 2) {
            v = func_sc01_009_801816FC(0x10);
            if (v < 3 || v >= 0x10) {
                return (s32) &D_sc01_009_8018C4B8;
            }
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            return (s32) &D_sc01_009_8018C55C;
        }
        return (s32) &D_sc01_009_8018C620;
    case 37:
        if (AF(o, s16, 0x108) < 2) {
            func_80029124(0x89, 1);
            func_sc01_009_80181724(AF(o, s16, 0x70), 3);
            D_sc01_009_801F32E8 = (s32) &D_sc01_009_801EE580;
            return (s32) &D_sc01_009_8018CC20;
        }
        return (s32) &D_sc01_009_8018CE74;
    }
    return (s32) &D_8010F5C8;
}

u8 *func_sc01_009_80181380(void) {
    if ((u8)func_80029178(0x16) == 0) {
        return &D_sc01_009_80189124;
    }
    if ((u8)func_80029178(0x17) == 0) {
        return &D_sc01_009_8018916C;
    }
    if ((u8)func_80029178(0x18) == 0) {
        return &D_sc01_009_801891D4;
    }
    if ((u8)func_80029178(0x19) == 0) {
        return &D_sc01_009_80189228;
    }
    if ((u8)func_80029178(0x1A) == 0) {
        return &D_sc01_009_8018927C;
    }
    return &D_sc01_009_801892C4;
}

void func_sc01_009_8018144C(u8 *o) {
    s32 t;

    func_8012AD80(o);
    if (AF(o, s16, 0x104) == 1) {
        t = AF(o, s32, 0x1C);
        if (t < 4) {
            AF(o, s32, 0x10) = 0x40000;
        } else if (t == 4) {
            AF(o, s32, 0x10) = 0;
        } else if (t == 0x14) {
            AF(o, s32, 0x10) = 0x30000;
            AF(o, s32, 0x14) = 0xFFE80000;
            AF(o, s32, 0x48) = 0x16000;
        } else if (t == 0x1A) {
            func_8012B200((s32) o);
            AF(o, s32, 0x10) = 0x30000;
            AF(o, s32, 0x14) = 0xFFFE0000;
        } else if (t == 0x24) {
            AF(o, s32, 0x10) = 0x140000;
            AF(o, s32, 0x14) = 0xF0000;
        } else if (t >= 0x25) {
            if (AF(o, s16, 0xA) >= -0xB1) {
                AF(o, s16, 0xA) = -0xB2;
                if (AF(o, s32, 0x14) != 0) {
                    func_8002D4C8(0xBAE, 0);
                }
                AF(o, s32, 0x14) = 0;
                AF(o, s32, 0x48) = 0;
                AF(o, s32, 0x44) = 0xFFFE3000;
            }
            if (AF(o, s16, 6) >= 0x71) {
                AF(o, s16, 6) = 0x70;
                func_8012B200((s32) o);
                AF(o, s16, 0x104) = 0;
            }
        }
    } else {
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x14) = 0xFFF60000;
            AF(o, s32, 0x18) = 0xFFF90000;
            AF(o, s32, 0x48) = 0x18000;
        } else if (AF(o, s32, 0x1C) >= 0xB) {
            if (AF(o, s16, 0xE) < 0x101) {
                AF(o, s16, 0xA) = -0xB2;
                AF(o, s16, 0xE) = 0x100;
                func_8012B200((s32) o);
                AF(o, s16, 0x104) = 0;
            }
        }
    }
    AF(o, s32, 0x1C)++;
}

void func_sc01_009_80181600(void) {
    if ((s16) func_sc01_009_801816FC(0xD) >= 3 && (s16) func_sc01_009_801816FC(0x12) >= 3 &&
        (s16) func_sc01_009_801816FC(0x1B) >= 3 && func_80029504() < 0x28AU) {
        func_80029514(0x28A);
    }
}

void func_sc01_009_80181688(void) {
    if ((s16)func_sc01_009_801816FC(0xC) >= 3 && (s16)func_sc01_009_801816FC(0x18) >= 3 &&
        (s16)func_sc01_009_801816FC(0x1F) >= 3) {
        func_80029514(0x2EE);
    }
}

s32 func_sc01_009_801816FC(s32 arg0) {
    return func_800291B4((s16) arg0 + 0x3A) & 0xFF;
}

void func_sc01_009_80181724(s32 arg0, s32 arg1) {
    func_800291A0((s32) D_sc01_009_80183A40[(s16) arg0], arg1 & 0xFF);
}

void func_sc01_009_80181758(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x106) = 1;
}

void func_sc01_009_80181768(u8 *arg0) {
    AF(arg0, s16, 0x106) = 1;
}

void func_sc01_009_80181774(u8 *arg0) {
    AF(arg0, s16, 0x106) = 2;
}

void func_sc01_009_80181780(u8 *arg0) {
    AF(arg0, s16, 0x106) = 3;
}

void func_sc01_009_8018178C(u8 *arg0) {
    AF(arg0, s16, 0x106) = 0;
}

void func_sc01_009_80181794(u8 *arg0) {
    func_sc01_009_80181724((s32) AF(arg0, s16, 0x70), 0x2D);
}

void func_sc01_009_801817B8(u8 *arg0) {
    func_sc01_009_80181724((s32) AF(arg0, s16, 0x70), 0x3D);
}

s32 func_sc01_009_801817DC(void) {
    return D_sc01_009_801F3304 == 1;
}

void func_sc01_009_801817F4(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0x45C, 0);
}

void func_sc01_009_80181840(void) {
    func_8014B2A8();
    func_8014BB24((s32) &D_80126B58, 0x3E7, 1);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0x45C, 0);
}

void func_sc01_009_80181894(s32 arg0, s32 arg1, s32 arg2) {
    func_8014BD24((s32) &D_80126B58, 0xA, arg2);
    func_8002D4C8(0x45C, 0);
}

void func_sc01_009_801818C8(void) {
    func_80029124(0x81, 1);
}

void func_sc01_009_801818EC(s32 arg0) {
    if (D_sc01_009_801F32D0 != 0) {
        func_8001B710(arg0);
    }
}

void func_sc01_009_80181918(void) {
    func_8001AAA0(0x3D);
    func_8001B710();
}

void func_sc01_009_80181940(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

void func_sc01_009_80181960(u8 *arg0) {
    AF(arg0, s16, 0x104) = 1;
    AF(arg0, s32, 0x1C) = 0;
    func_8012B200((s32) arg0);
}

void func_sc01_009_80181988(u8 *arg0) {
    AF(arg0, s16, 0x104) = 2;
    AF(arg0, s32, 0x1C) = 0;
    func_8012B200((s32) arg0);
}

void func_sc01_009_801819B0(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;

    d.kind = 0x1AB;
    d.unk8 = 0x29;
    d.x = -0x1C0;
    d.y = -0xB2;
    d.unkC = 0;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    d.z = 0x188;
    AF(o, s32, 0xD4) = func_8012C51C(&d, o);
}

void func_sc01_009_80181A1C(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;

    d.kind = 0x1AB;
    d.unk8 = 0x2A;
    d.unkC = 0;
    d.flags = 0;
    d.unk10 = 0;
    d.z = 0;
    d.y = 0;
    d.x = 0;
    d.unkE = D_sc01_009_801F32D4++;
    func_8012C51C(&d, o);
}

void func_sc01_009_80181A80(s32 arg0) {
    func_8012C658(0x1AB, 0x2D, arg0);
}

void func_sc01_009_80181AA8(u8 *arg0) {
    func_80146A6C(6, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) (s16) (AF(arg0, u16, 0xE) + 0x30), /* extra? */ 0x800FFC00, /* extra? */ 0);
}

void func_sc01_009_80181B04(u8 *o) {
    u16 t;
    s32 s;

    t = D_sc01_009_801ED59C[AF(o, s16, 0x10A)];
    if (t == 0 || func_80128CFC(t) != 0) {
        func_8001C214(AF(o, s32, 0x20), D_sc01_009_801ED4E4[AF(o, s16, 0x10A)]);
        s = D_sc01_009_801F32DC;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = -0x400;
        SetScript((s32) o, s);
        AF(o, s32, 0x1C) = 1;
        AF(o, s32, 0xD8) = func_80143994(o, 0x3000);
        AF(o, u16, 2) = (u16) (AF(o, u16, 2) + 1);
    }
}

void func_sc01_009_80181BBC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801EDA20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181C14(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178CBC(arg0, D_sc01_009_801F32E8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181C64(u8 *arg0) {
    s16 temp_a1;

    temp_a1 = AF(arg0, s16, 0x106);
    if (temp_a1 != 0) {
        func_8017B368((s32) arg0, (s32) (((temp_a1 - 1) * 0x10) + &D_sc01_009_801ED890));
    }
    if (AF(arg0, s16, 0x104) != 0) {
        func_sc01_009_8018144C((s32) arg0);
    }
    if (func_801789AC((s32) arg0) != 0) {
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801EDA68);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181CF8(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181D38(u8 *arg0) {
    if (AF(arg0, s32, 0xD8) != 0) {
        func_801439C0(AF(arg0, s32, 0xD8));
    }
    func_8012C218((s32) arg0);
}

void func_sc01_009_80181D7C(u8 *arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181DC0(u8 *arg0) {
    s16 temp_v1;

    if ((func_sc01_009_8017F2A0() << 0x10) != 0) {
        temp_v1 = AF(arg0, s16, 0xE);
        if (temp_v1 >= 0xBF) {
            AF(arg0, s16, 0xA) = -0xB2;
            return;
        }
        if (temp_v1 >= 0xAF) {
            AF(arg0, s16, 0xA) = -0xA2;
            return;
        }
        if (temp_v1 >= 0x9F) {
            AF(arg0, s16, 0xA) = -0x92;
        }
    } else {
        if (AF(arg0, s32, 0xD8) != 0) {
            func_801439C0(AF(arg0, s32, 0xD8));
        }
        func_8012C218((s32) arg0);
    }
}

void func_sc01_009_80181E58(s32 arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_009_801EB424);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181EB0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB314);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181F0C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0xC00, 4);
        return;
    }
    AF(arg0, s32, 0x1C) = 0x5A;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_009_80181F78(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB314);
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181FD4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB4AC);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80182030(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;

    if (--AF(o, s32, 0x1C) != -1) {
        if (AF(o, s32, 0x90) == (s32)&D_sc01_009_801EB534 && AF(o, s32, 0x94) == 0xE) {
            func_8002D4C8(0xBB0, 0);
        }
    } else {
        SetScript((s32)o, (s32)&D_sc01_009_801EB534);
        d.kind = 0x1AB;
        d.unk8 = 0x2A;
        d.unkC = 0;
        d.flags = 0;
        d.unk10 = 0;
        d.z = 0;
        d.y = 0;
        d.x = 0;
        d.unkE = D_sc01_009_801F32D4++;
        func_8012C51C(&d, o);
        AF(o, s32, 0x1C) = 0x14;
        AF(o, u16, 2)++;
    }
}

void func_sc01_009_8018210C(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;

    if (--AF(o, s32, 0x1C) != -1) {
        if (AF(o, s32, 0x90) == (s32)&D_sc01_009_801EB534 && AF(o, s32, 0x94) == 0xE) {
            func_8002D4C8(0xBB0, 0);
        }
    } else {
        SetScript((s32)o, (s32)&D_sc01_009_801EB534);
        d.kind = 0x1AB;
        d.unk8 = 0x2A;
        d.unkC = 0;
        d.flags = 0;
        d.unk10 = 0;
        d.z = 0;
        d.y = 0;
        d.x = 0;
        d.unkE = D_sc01_009_801F32D4++;
        func_8012C51C(&d, o);
        AF(o, s32, 0x1C) = 0x14;
        AF(o, u16, 2)++;
    }
}

void func_sc01_009_801821E8(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;

    if (--AF(o, s32, 0x1C) != -1) {
        if (AF(o, s32, 0x90) == (s32)&D_sc01_009_801EB534 && AF(o, s32, 0x94) == 0xE) {
            func_8002D4C8(0xBB0, 0);
        }
    } else {
        SetScript((s32)o, (s32)&D_sc01_009_801EB534);
        d.kind = 0x1AB;
        d.unk8 = 0x2A;
        d.unkC = 0;
        d.flags = 0;
        d.unk10 = 0;
        d.z = 0;
        d.y = 0;
        d.x = 0;
        d.unkE = D_sc01_009_801F32D4++;
        func_8012C51C(&d, o);
        AF(o, s32, 0x1C) = 0x14;
        AF(o, u16, 2)++;
    }
    if (AF(o, u16, 2) == 0x12) {
        AF(o, s32, 0x1C) = 0x32;
    }
}

void func_sc01_009_801822D8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        if ((AF(arg0, s32, 0x90) == &D_sc01_009_801EB534) && (AF(arg0, s32, 0x94) == 0xE)) {
            func_8002D4C8(0xBB0, 0);
        }
    } else {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB314);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80182368(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0, 4);
        return;
    }
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_009_801823D0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), s16, 0xE) >= 0x140) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB39C);
        AF(arg0, s32 *, 0xCC) = &D_sc01_009_801EE8EC;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80182438(u8 *arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        if (AF(arg0, s32, 0xD8) != 0) {
            func_801439C0(AF(arg0, s32, 0xD8));
        }
        func_8012C218((s32) arg0);
    }
}

void func_sc01_009_8018248C(u8 *arg0) {
    void *temp_a0;

    SetScript((s32) arg0, D_sc01_009_801ED72C[AF(arg0, s16, 0xFC)]);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s32, 0x1C) = 0x30;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_009_801824FC(u8 *o) {
    if (AF(o, s16, 0xFC) != 0) {
        AF(o, s32, 0x1C) = 0x13;
        AF(o, u16, 2)++;
    } else if (--AF(o, s32, 0x1C) == -1) {
        SetScript((s32) o, (s32) &D_sc01_009_801ECE4C);
        AF(o, u16, 2)++;
    }
}

void func_sc01_009_80182570(u8 *o) {
    s16 fc;
    u8 *p;
    u16 st;

    fc = AF(o, s16, 0xFC);
    if (fc < 3) {
        if (AF(o, s16, 0x98) == 0) {
            func_8012C218(o);
        }
    } else if (AF(o, s32, 0x1C) == 0) {
        p = AF(o, u8 *, 0x64);
        st = AF(p, u16, 2);
        if (st != 0x12 || AF(p, s16, 0x98) != 0) {
            if (st >= 0x13) {
                func_8012C218(o);
            } else {
                SetScript((s32) o, D_sc01_009_801ED738[fc]);
                AF(o, s32, 0x1C) = 0x14;
            }
        }
    } else {
        AF(o, s32, 0x1C)--;
    }
}

void func_sc01_009_80182634(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    u8 *r;
    s16 n;

    if ((func_sc01_009_8017F2A0() << 0x10) != 0) {
        if (AF(o, s16, 0xFC) == 0 && AF(o, s16, 0x100) < D_sc01_009_801F32D8 - 1) {
            if (AF(o, s16, 0xFE)++ >= 8) {
                AF(o, s16, 0xFE) = 0;
                n = AF(o, s16, 0x100) + 1;
                AF(o, s16, 0x100) = n;
                d.kind = 0x1AB;
                d.unk8 = 0x2B;
                d.x = -0x1C0;
                d.y = -0xB2;
                d.unkC = 0;
                d.flags = 0;
                d.unkE = n;
                d.unk10 = 0;
                d.z = 0x188;
                r = (u8 *) func_8012C51C(&d, o);
                if (r != 0) {
                    AF(r, s32, 0x64) = AF(o, s32, 0x64);
                }
            }
        }
    } else {
        SetScript((s32) o, (s32) &D_sc01_009_801ED1D4);
        AF(o, u16, 2) = (u16) (AF(o, u16, 2) + 1);
    }
}

void func_sc01_009_80182740(u8 *o) {
    if (AF(o, s16, 0xFC) == 0) {
        if (AF(AF(o, u8 *, 0x64), s16, 0xE) < 0x140) {
            return;
        }
    } else if (AF(o, s16, 0x102) == 0) {
        return;
    }
    if ((rand() & 7) == 0) {
        func_8012C658(0x1AB, 0x2C, o);
    }
    SetScript((s32) o, (s32) &D_sc01_009_801ED25C);
    AF(o, s32, 0xCC) = D_sc01_009_801EED88[AF(o, s16, 0xFC)];
    AF(o, u16, 2) = (u16) (AF(o, u16, 2) + 1);
}

void func_sc01_009_801827FC(u8 *arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        if (AF(arg0, s32, 0xD8) != 0) {
            func_801439C0(AF(arg0, s32, 0xD8));
        }
        func_8012C218((s32) arg0);
    }
}

void func_sc01_009_80182850(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_v1 = temp_v0 - 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v0 < 0x14) {
        if (temp_v1 != 0) {
            temp_v0_2 = AF(arg0, void *, 0x20);
            AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) ^ 0x80000000);
            return;
        }
        if (AF(arg0, s32, 0xD8) != 0) {
            func_801439C0(AF(arg0, s32, 0xD8));
        }
        func_8012C218((s32) arg0);
    }
}

void func_sc01_009_801828D0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0x98) != 0) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == -1) {
            SetScript((s32) arg0, (s32) &D_sc01_009_801ED404);
        }
    } else {
        func_8012C218((s32) arg0);
    }
}
