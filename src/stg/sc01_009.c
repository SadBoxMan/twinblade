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
extern u8 *D_800A5E60;
extern u32 D_800A6610[2][0x1000];
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
extern s32 func_80014ED4();
extern void func_sc01_009_8017EB08();

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D120);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D2B8);

s16 func_sc01_009_8017D2D0(void) {
    return D_sc01_009_801F3180;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D2E0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D334);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D730);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D920);

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
    } else if (func_80014ED4(0) & 0x50) {
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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017DC10);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017DEF0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017E1AC);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017E590);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017EB08);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017EF64);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017EFC4);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F2A0);

void func_sc01_009_8017F360(u8 *arg0) {
    D_sc01_009_801E9A18[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F39C);

void func_sc01_009_8017F440(void) {
    func_sc01_009_8017D2E0(1, 0);
}

void func_sc01_009_8017F464(void) {
    func_sc01_009_8017D2E0(1, 1);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F488);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F4D0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F520);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F568);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F5B0);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F6C0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F710);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F7F0);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F900);

void func_sc01_009_8017F9CC(void) {
    func_8001AAA0(0x3D);
    func_8001B710();
}

void func_sc01_009_8017F9F4(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FA14);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FAFC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FB98);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FE78);

void func_sc01_009_8017FED0(void) {
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FED8);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FFD0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801803E4);

void func_sc01_009_80180540(u8 *arg0) {
    D_sc01_009_801EEDBC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8018057C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181380);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8018144C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181600);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181688);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801819B0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181A1C);

void func_sc01_009_80181A80(s32 arg0) {
    func_8012C658(0x1AB, 0x2D, arg0);
}

void func_sc01_009_80181AA8(u8 *arg0) {
    func_80146A6C(6, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) (s16) (AF(arg0, u16, 0xE) + 0x30), /* extra? */ 0x800FFC00, /* extra? */ 0);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181B04);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182030);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8018210C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801821E8);

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

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801824FC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182570);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182634);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182740);

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
