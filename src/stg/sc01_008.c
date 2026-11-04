#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_008_801831CC[])();
extern void (*D_sc01_008_801831D4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_008_8017D02C(void);
extern void func_800167B8();
void func_sc01_008_8017D054(void);
extern s32 func_800167F0();
void func_sc01_008_8017D07C(void);
extern void func_800D1EBC();
extern void (*D_sc01_008_801831E8[])();
extern u8 D_sc01_008_801831F4;
extern void func_8016EE40();
extern u8 D_sc01_008_80183200;
extern u8 D_sc01_008_8018320C;
extern void func_sc01_008_8017D22C();
extern void (*D_sc01_008_80183220[])();
extern s16 D_sc01_008_801A3320;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_008_8019F01C[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s16 D_801274E8;
extern void func_sc01_008_8017D290();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_008_801A3328;
extern s32 D_sc01_008_801A3458;
extern s32 D_sc01_008_801A3460;
extern void func_800D24A0();
extern void func_sc01_008_8017D5DC();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern s32 func_8016F1AC();
extern void func_80178B18();
extern u8 D_sc01_008_8019F498;
extern void func_800D1724();
extern u8 D_sc01_008_8018317C;
extern u8 D_sc01_008_8019F204;
extern s32 D_sc01_008_801A3484;

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
extern s32 D_sc01_008_8019F2C4[];
extern s32 D_sc01_008_8019F2E4[];
extern s32 func_801789AC();
extern void func_80178D18();
extern void func_801746A4();
extern void func_sc01_008_8017D440();
extern s32 D_sc01_008_8019F278;
extern s32 D_sc01_008_8019F1A4[];
extern u8 D_sc01_008_8019E198;
extern u8 D_sc01_008_8019F034;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_80143994();
extern s32 func_80029504();
extern u8 D_sc01_008_8019F23C;
extern u8 D_sc01_008_8019F2A4;
extern void func_80178CBC();

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
extern W80115118 D_80115118;
extern R8017D4A4 *D_80115134;
extern u8 D_80115138[];
extern U8R D_80115140[];
extern S16R D_80115148[];
extern R8017D4A4 *D_sc01_008_8019EE8C[];
extern u8 *D_sc01_008_8019EEE0[];
extern u8 D_sc01_008_8019EED8[];
extern u8 D_sc01_008_801A3464[];
extern s16 D_sc01_008_801A3324;
extern u16 D_sc01_008_801A332C;
extern u16 D_sc01_008_801A3330;
extern s32 func_800291B4();
extern void func_sc01_008_8017D890();

void func_sc01_008_8017BE9C(u8 *obj) {
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

void func_sc01_008_8017CD7C(u8 *arg0) {
    D_sc01_008_801831CC[AF(arg0, u8, 0x15)]();
}

void func_sc01_008_8017CDB8(u8 *arg0) {
    D_sc01_008_801831D4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_008_8017CDF4(u8 *arg0) {
    func_sc01_008_8017D02C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_008_8017CE38(u8 *arg0) {
    func_sc01_008_8017D054();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_008_8017CE7C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc01_008_8017CEA0(u8 *arg0) {
    func_sc01_008_8017D07C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_008_8017CEE0(u8 *arg0) {
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

void func_sc01_008_8017CF5C(void) {
    func_800D1EBC();
}

void func_sc01_008_8017CF7C(u8 *arg0) {
    D_sc01_008_801831E8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_008_8017CFB8(u8 *arg0) {
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

void func_sc01_008_8017D02C(void) {
    func_8016EE40((s32) &D_sc01_008_801831F4, 0x01000000);
}

void func_sc01_008_8017D054(void) {
    func_8016EE40((s32) &D_sc01_008_80183200, 0x01000000);
}

void func_sc01_008_8017D07C(void) {
    func_8016EE40((s32) &D_sc01_008_8018320C, 0x01000000);
}

void func_sc01_008_8017D0A4(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_8012695C = 0x2BC;
    D_80126968 = 0xA8;
    D_8012696A = 0x8D8;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x91;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_008_8017D22C, 0);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -2;
    func_sc01_008_8017D22C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_008_8017D168(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x190;
    D_80126968 = 0xA8;
    D_8012696A = 0x8D8;
    D_80126978 = -0x91;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = -0x180;
    func_8012A018((s32) func_sc01_008_8017D22C, 0);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -2;
    func_sc01_008_8017D22C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_008_8017D22C(s32 arg0) {
    D_sc01_008_80183220[AF(arg0, u8, 4)]();
}

void func_sc01_008_8017D268(s32 arg0) {
    func_sc01_008_8017D290(arg0, (s32) &D_801274E8);
}

extern s8 D_800B9A15;
extern s32 D_801151D0;
extern s32 D_sc01_008_801A345C;
extern s32 D_801151C8[];
extern s32 func_8014168C();
extern void func_80139954();
extern void func_sc01_008_8017E050();
extern void func_80137B80();
extern s16 D_80115126;
extern u8 D_sc01_008_8019F018;
extern s32 func_sc01_008_8017DD70();
extern s32 func_sc01_008_8017E6F0();
extern s32 func_801376E8();
extern s32 func_801399F0();
extern s32 GetPadPressedDirWide();
extern s32 func_sc01_008_8017EC68();

typedef struct { s8 lo; u8 hi; } S8PE804;
extern S8PE804 D_80115158[];
extern u8 D_80115141;
extern u8 D_80115142;
extern u8 D_sc01_008_80180858[];
extern s32 D_8010F3C4[];
extern u8 *D_sc01_008_801A3454;

typedef struct { u32 *ot; u8 pad4[8]; u32 *otLast; u8 pad10[4]; } OtE804;
typedef struct { u16 v; } U16RE804;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } SprtE804;
extern u16 D_sc01_008_8019EBFA;
extern u16 D_sc01_008_8019EC0E;
extern OtE804 D_800AE7BC[];

extern s16 D_8011515A;
extern u16 D_8011514A;
extern u16 D_8011514C;
extern void func_80029124();
extern u8 D_sc01_008_8019F528[];
extern u8 D_sc01_008_8019F550[];
extern u8 D_sc01_008_8019F58C[];
extern u8 D_sc01_008_8019F61C[];
extern u8 D_sc01_008_8019F644[];
extern u8 D_sc01_008_8019F69C[];
extern u8 D_sc01_008_8019F70C[];
extern u8 D_sc01_008_8019F730[];
extern u8 D_sc01_008_8019F770[];
extern u8 D_sc01_008_8019F7BC[];
extern u8 D_sc01_008_8019F868[];

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc01_008_8017D290(u8 *p, s16 *q) {
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

s32 func_sc01_008_8017D428(void) {
    return 0x3D;
}

s16 func_sc01_008_8017D430(void) {
    return D_sc01_008_801A3320;
}

typedef struct { s16 a, b; } S16x2;
typedef struct { char *name; s32 x; } NameEnt;
extern u8 D_80115139;
extern u16 D_8011515C;
extern char *D_sc01_008_8019ED2C[];
extern s32 D_sc01_008_8019EE08;
extern char D_sc01_008_801A1F44[];
extern char D_sc01_008_801A3334[][0x24];
extern u16 D_sc01_008_8019ED0C[];
extern NameEnt D_8010F468[];
extern s32 D_sc01_008_8019ED18[];
extern u8 D_801117EC;
extern u8 D_80112B58;
extern u8 D_80112B90;
extern u8 D_80112BA8;
extern u8 D_sc01_008_8019EEFC[];
extern S16x2 D_sc01_008_8019EF24[];
extern s32 D_sc01_008_8019EF44[];
extern u8 *D_sc01_008_8019EF60[];
extern u8 D_sc01_008_8019F510;
extern u8 D_sc01_008_8019F5D4;
extern u8 D_sc01_008_8019F5F0;
extern u8 D_sc01_008_8019F660;
extern u8 D_sc01_008_8019F6EC;
extern u8 D_sc01_008_8019F7E4;
extern u8 D_sc01_008_8019F81C;
extern u8 D_sc01_008_8019F844;
extern s32 func_sc01_008_8017F0C4();
extern s32 func_80029178();
extern void func_80139A44();

extern u16 D_80115122;
extern u16 D_80115120;
extern s32 GetPadHeldDirWide();

extern u8 D_800B9A13;
extern s16 D_80115110;
extern void *D_8011DB24;
extern void func_sc01_008_8017D494();
void func_8013E5E8(void);
extern u8 D_sc01_008_8018085E;

void func_sc01_008_8017D440(s32 arg0, s32 arg1) {
    extern void func_sc01_008_8017D4E4(void);

    D_800B9A15 = 1;
    D_800B9A13 = 4;
    D_80115110 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    D_sc01_008_801A3328 = arg1;
    D_8011DB24 = (void *)func_sc01_008_8017D4E4;
}

void func_sc01_008_8017D494(s32 arg0) {
    D_800B9A15 = 1;
    D_80115112 = 7;
    D_800B9A13 = 1;
    D_80115110 = 0;
    D_80115126 = arg0;
    D_sc01_008_801A3328 = 0;
    D_8011DB24 = (void *)func_8013E5E8;
}

void func_sc01_008_8017D4E4(void) {
    func_80029444();
    func_801754A8();
    D_sc01_008_8019F01C[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_008_8017D554(void) {
    func_800D24A0(4);
    func_sc01_008_8017D5DC();
    if (D_sc01_008_801A3328 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_008_801A3328;
    }
    D_sc01_008_801A3460 = 0;
    D_sc01_008_801A3458 = 0;
    D_80115130 = 0;
    D_sc01_008_801A3328 = 0;
    D_80115112 += 1;
}

void func_sc01_008_8017D5DC(void) {
    s16 i;
    s16 j;
    s16 count;
    s16 found;
    u8 *p;

    D_80115118.f0 = 0;
    D_sc01_008_801A3320 = 0;
    D_80115134 = D_sc01_008_8019EE8C[D_80115118.fE];
    for (i = 0; i < 3; i++) {
        D_80115138[i] = D_80115134[i].a;
        D_80115118.f40[i] = D_80115134[i].b;
        if (D_sc01_008_801A3328 == 0) {
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
            D_sc01_008_801A3464[i] = 0;
        }
        for (i = 0; i < 7; i++) {
            found = 0;
            p = D_sc01_008_8019EEE0[i];
            j = 0;
            if (D_sc01_008_8019EED8[i] != 0) {
                do {
                    if (func_800291B4(*p++ + 0x62) & 0x40) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc01_008_8019EED8[i]);
            }
            if (found) {
                D_sc01_008_801A3464[count++] = i;
            }
        }
        D_80115118.f40[1] = count | 0x100;
        if (D_sc01_008_801A3328 != 0) {
            D_80115148[0].v = 1;
            D_80115148[1].v = D_sc01_008_801A332C;
            D_80115148[2].v = D_sc01_008_801A3330;
        }
        D_sc01_008_801A3324 = 0;
    }
    func_sc01_008_8017D890();
}

void func_sc01_008_8017D890(void) {
    char *e = D_sc01_008_801A1F44;
    char *b;
    s16 i;
    s16 n;
    u8 k;
    u8 c;
    u8 *names;
    char *dst;

    switch (D_80115139) {
    case 7:
        D_8011515C = AF(D_sc01_008_8019ED0C, u16, *(u8 *) &D_8011514A * 2);
        D_sc01_008_8019EE08 = AF(D_sc01_008_8019ED18, s32, *(u8 *) &D_8011514A * 4);
        if (D_sc01_008_801A3328 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    case 9:
        b = D_sc01_008_801A3334[0];
        for (i = 0; i < 7; i++) {
            strcpy((char *) (i * 0x24 + (s32) b), e);
        }
        k = D_sc01_008_801A3464[*(u8 *) &D_8011514A];
        n = D_sc01_008_8019EED8[k];
        names = D_sc01_008_8019EEE0[k];
        D_sc01_008_801A3454 = names;
        D_8011515C = n | 0x100;
        for (i = 0; i < n; i++) {
            c = names[i];
            e = D_sc01_008_8019ED2C[i];
            b = D_8010F468[c].name;
            if (func_800291B4(c + 0x62) & 0x40) {
                strcpy(e, b);
            }
        }
        if (D_sc01_008_801A3328 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    }
}

void func_sc01_008_8017DA80(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

void func_sc01_008_8017DA9C(void) {
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
    st = func_sc01_008_8017DD70();
    func_sc01_008_8017E050();
    r = func_8014168C(D_8011511A);
    c = D_80115138[(u16) D_8011511A];
    if (D_80115126 != 4) {
        if (D_sc01_008_801A3458 != 0) {
            s = D_sc01_008_801A3458;
        } else {
            s = func_sc01_008_8017E6F0(c, (s16) r);
        }
        if (s != 0) {
            q = &D_80115130;
            if (s != *q) {
                *q = s;
                func_80139954();
                D_sc01_008_801A345C = func_801376E8(s, &D_sc01_008_8019F018);
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

void func_sc01_008_8017DBEC(void) {
    u8 unused[8];
    u16 k;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_sc01_008_801A3458 != 0) {
        if (func_801399F0(D_sc01_008_801A345C) != 0) {
            D_sc01_008_801A3458 = 0;
        }
    } else if (GetPadPressedDirWide(0) & 0x50) {
        k = D_8011511A;
        if (D_80115138[k] == 8) {
            func_sc01_008_8017EC68(0xF, (s16) func_8014168C((s16) k));
        }
        if (D_sc01_008_801A3320 != 0) {
            func_80139954();
            D_800B9A15 = 0;
            func_8002D4C8(0x474, 0);
            D_80115112++;
        } else {
            D_80115112--;
        }
    }
    func_sc01_008_8017E050();
    func_80137B80();
}

void func_sc01_008_8017DD18(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

s32 func_sc01_008_8017DD70(void) {
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
        D_sc01_008_801A3458 = 0;
    }
    rep = GetPadHeldDirWide(0);
    r = func_8014168C(*(s16 *)D_80115118.p2);
    cur = *(u16 *)D_80115118.p2;
    kind = D_80115138[cur];
    if (btn & 0x40) {
        x = func_sc01_008_8017EC68(kind, (s16)r);
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
            func_sc01_008_8017D890();
        }
    }
    return 0;
}

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
extern u8 * func_sc01_008_8017E30C();
extern void func_80024054();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

extern OtE804 D_800AE7B8[];
extern s32 func_80137D08();
extern s32 func_8013AB54();
extern u8 D_sc01_008_8019E8B8;
extern u8 D_sc01_008_8019E8CC;
extern u8 D_sc01_008_8019F010;

void func_sc01_008_8017E050(void) {
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
            tbl = &D_sc01_008_8019E8CC;
        } else {
            tbl = &D_sc01_008_8019E8B8;
            if (D_80115126 == 1 && *(u16 *)&D_8011511A != 0
                && D_sc01_008_801A3458 != (s32)D_sc01_008_8019F70C
                && D_sc01_008_801A3458 != (s32)D_sc01_008_8019F730
                && D_sc01_008_801A3458 != (s32)D_sc01_008_8019F770
                && D_sc01_008_801A3458 != (s32)D_sc01_008_8019F7BC
                && (s16)func_sc01_008_8017F0C4() == 0) {
                tbl = &D_sc01_008_8019E8CC;
            }
        }
        p = (s32)func_800D27DC(2, p, tbl, 1, 0);
        p = func_8013AB54(p, D_800AE7BC[D_800B9A02].ot + 2, &D_sc01_008_8019F010, 0);
    }
    c = *(u16 *)&D_8011511A == 0 ? 1 : (D_80115126 == 2 || D_80115126 == 3) ? 3 : 2;
    n = c;
    for (i = 0; i < n; i++, r++) {
        if (*(s16 *)((u8 *)D_80115158 + (i << 1)) != 0) {
            p = (s32)func_sc01_008_8017E30C(p, r, i);
        }
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x2000000;
    addPrim(&D_800AE7BC[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
    p += 0x28;
    ((S32R *)&D_801151D0)->v = p;
}

u8 *func_sc01_008_8017E30C(u8 *p, u8 *t, s32 id0) {
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
    
    p = (u8 *)func_sc01_008_8017E93C((Sprt *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_sc01_008_8017E4D8(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
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

s32 func_sc01_008_8017E4D8(s32 *tbl, s16 kind, s16 id, s16 i, s32 *col) {
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
        if (!(func_800291B4(D_sc01_008_80180858[j]) & 0xFF)) {
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
        if (func_800291B4(D_sc01_008_801A3454[j] + 0x62) & 0x20) {
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
        r = tbl[D_sc01_008_801A3464[j]];
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

s32 func_sc01_008_8017E6F0(s32 kind, s32 id) {
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
        if ((s16) func_sc01_008_8017F0C4() != 0) {
            v = func_80029504();
            j = D_sc01_008_8019EEFC[(s16) id];
            t = (s32) D_sc01_008_8019EF24; x = D_sc01_008_8019EF24[j].a; if (v < x && (n = -(j * 4), (t = ((S16x2 *) (t - n))->b) == 0 || !(func_80029178(t) & 0xFF))) {

                j = -1;
            }
            if (j >= 0) {
                p = D_sc01_008_8019EF44[j];
                func_80139A44(p, 0);
                if (p != D_sc01_008_801A3460) {
                    D_sc01_008_801A3460 = p;
                    D_80115130 = 0;
                }
                r = &D_sc01_008_8019F7E4;
            } else {
                r = &D_sc01_008_8019F81C;
            }
        } else {
            c = func_800291B4(D_sc01_008_80180858[(s16) id]);
            if (c == 0) {
                r = &D_80112B58;
            } else if (c == 1) {
                r = &D_80112B90;
            } else {
                r = &D_sc01_008_8019F844;
                if ((s16) id != 0) {
                    r = &D_80112BA8;
                }
            }
        }
        break;
    case 1:
        r = &D_sc01_008_8019F510;
        break;
    case 2:
        r = &D_sc01_008_8019F6EC;
        break;
    case 4:
        r = &D_sc01_008_8019F5D4;
        break;
    case 3:
    case 7:
    case 8:
        r = &D_sc01_008_8019F660;
        break;
    case 9:
        r = &D_sc01_008_8019F5F0;
        break;
    case 10:
        c = D_sc01_008_801A3454[(s16) id];
        if (func_800291B4(c + 0x62) & 0x40) {
            r = D_sc01_008_8019EF60[c];
        }
        break;
    case 5:
        break;
    }
    return (s32) r;
}

SprtE804 *func_sc01_008_8017E93C(SprtE804 *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
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
                    p->y = D_sc01_008_8019EBFA - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc01_008_8019EC0E + 1;
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

s32 func_sc01_008_8017EC68(s32 arg0, s32 arg1) {
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
                p = D_sc01_008_8019F644;
                goto set;
            }
            D_8011511A++;
            func_8002D4C8(0x45D, 0);
            return 0;
        }
        if (v < 10) {
            p = D_sc01_008_8019F61C;
            goto set;
        }
        D_sc01_008_801A3320 = 1;
        return -1;
    case 5:
        u = (s16)arg1;
        if (u == 0) {
            D_sc01_008_801A3320 = 1;
        }
        if (u == 1) {
            if (func_800291B4(D_sc01_008_801A3324 + 0x62) & 0x20) {
                goto call;
            }
            D_sc01_008_801A3320 = 2;
        }
        return -1;
    case 6:
        t = (s16)arg1;
        if (t == 0) {
            p = D_sc01_008_8019F70C;
            goto set;
        }
        if (t == 3 || t == 5) {
            if ((s16)arg1 == 3) {
                p = D_sc01_008_8019F730;
                goto set;
            }
            if ((u8)func_800291B4(0x40) == 0) {
                goto call;
            }
            p = D_sc01_008_8019F770;
            goto set;
        }
        if ((u8)func_800291B4(D_sc01_008_80180858[t]) == 0) {
            goto call;
        }
        if (v >= 0x294 && v < 0x384 && (t == 12 || t == 17 || t == 26)) {
            p = D_sc01_008_8019F7BC;
            goto set;
        }
        if (v >= 0xA0 && v < 0xC8 && (u16)(arg1 - 10) < 4) {
            p = D_sc01_008_8019F868;
            goto set;
        }
        D_sc01_008_801A3320 = arg1 + 1;
        return -1;
    case 7:
        if ((s16)arg1 >= 3 && (u8)func_800291B4(0x62) == 0) {
            p = D_sc01_008_8019F69C;
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
        D_sc01_008_801A3320 = ((t + 1) << 8) | (arg1 + 1);
        return -1;
    case 10:
        t = D_sc01_008_801A3454[(s16)arg1];
        if (func_800291B4(t + 0x62) & 0x40) {
            D_sc01_008_801A3320 = t | 0x100;
            D_sc01_008_801A3324 = t;
            D_sc01_008_801A332C = D_8011514A;
            D_sc01_008_801A3330 = D_8011514C;
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
                p = D_sc01_008_8019F528;
                goto set;
            }
        }
        if (v == 0x3B6) {
            u = (s16)arg1;
            if (u < 5) {
                if (u == 3) {
                ret2:
                    D_sc01_008_801A3320 = arg1;
                    return -2;
                }
                p = D_sc01_008_8019F550;
                goto set;
            }
        }
        if (v >= 0x44C && v < 0x47E && (s16)arg1 == 5) {
            p = D_sc01_008_8019F58C;
        set:
            D_sc01_008_801A3458 = (s32)p;
        call:
            func_8002D4C8(0x45F, 0);
            return 0;
        }
        D_sc01_008_801A3320 = arg1;
        if ((s16)arg1 == 3) {
            return -2;
        }
        return -1;
    }
    return 0;
}

s32 func_sc01_008_8017F0C4(void) {
    s32 r;
    if (func_800291B4(D_sc01_008_8018085E) & 0xFF) {
        r = !(func_800291B4(D_sc01_008_80180858[(s16) func_8014168C(1)]) & 0xFF);
        return r;
    }
    r = 0;
    return r;
}

void func_sc01_008_8017F124(u8 *arg0) {
    s32 (*var_v0)();

    if (AF(arg0, s16, 0x70) == 0) {
        var_v0 = D_sc01_008_8019F2C4[AF(arg0, u16, 2)];
    } else {
        var_v0 = D_sc01_008_8019F2E4[AF(arg0, u16, 2)];
    }
    var_v0();
}

void func_sc01_008_8017F190(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18((s32) arg0, (s32) &D_sc01_008_8019F498);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_008_8017F1FC(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_008_8017F250(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_008_8018317C);
    }
}

void func_sc01_008_8017F28C(void) {
}

void func_sc01_008_8017F294(void) {
    func_sc01_008_8017D440(2, 0);
}

void func_sc01_008_8017F2B8(void) {
    func_sc01_008_8017D440(2, 2);
}

extern s32 D_sc01_008_8019F144[];

s32 func_sc01_008_8017F2DC(u8 *o) {
    s16 r;
    s16 i;

    r = func_sc01_008_8017D430();
    AF(o, s16, 0x10A) = r;
    if (r == 0) {
        return 0;
    }
    i = ((r >> 8) - 1) * 5 - 1;
    i += r & 7;
    func_80139A44(D_sc01_008_8019F144[i], 0);
    return 1;
}

void func_sc01_008_8017F358(u8 *arg0) {
    D_sc01_008_8019F278 = D_sc01_008_8019F1A4[AF(arg0, s16, 0x108)];
}

void func_sc01_008_8017F380(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_008_8019E198);
        SetScript((s32) arg0, (s32) &D_sc01_008_8019F034);
        func_80143994((s32) arg0, 0x3000);
        AF(arg0, s32, 0x1C) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        if (func_80029504() < 5U) {
            AF(arg0, s16, 0x70) = 1;
        }
    }
}

void func_sc01_008_8017F404(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18((s32) arg0, (s32) &D_sc01_008_8019F204);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}


extern u8 D_sc01_008_8019F234;
extern u8 D_sc01_008_8019F264;
extern u8 D_sc01_008_8019F284;
extern void func_800291A0();

void func_sc01_008_8017F470(u8 *arg0) {
    s16 a;
    s32 t;
    switch ((s16) func_801789AC()) {
    case 0:
        break;
    case 1:
        func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F234);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        break;
    case 2:
        if (AF(arg0, s16, 0x108) == 0) {
            a = (u8) func_800291B4(0xDF);
            t = (s16)(a + 1);
            AF(arg0, s16, 0x108) = t;
            a = t;
            if (t >= 13) {
                a = 0;
            }
            func_800291A0(0xDF, a & 0xFF);
        }
        func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F264);
        AF(arg0, s16, 2) = 4;
        break;
    case 3:
        func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F284);
        AF(arg0, s16, 2) = 5;
        break;
    }
}

void func_sc01_008_8017F560(u8 *arg0) {
    if (func_801789AC() != 0) {
        if (AF(arg0, s16, 0x10A) == 0) {
            func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F2A4);
            AF(arg0, s16, 2) = 2;
            return;
        }
        func_sc01_008_8017D440(2, 2);
        func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F23C);
    }
}

void func_sc01_008_8017F5D4(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178CBC(arg0, (s32) &D_sc01_008_8019F2A4);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_008_8017F61C(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc01_008_8017F66C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_008_8018317C);
    }
}

void func_sc01_008_8017F6A8(void) {
}

s32 func_sc01_008_8017F6B0(void) {
    return D_sc01_008_801A3484 != 1;
}

s32 func_sc01_008_8017F6C8(u8 *o) {
    s16 r;
    s16 i;

    r = func_sc01_008_8017D430();
    AF(o, s16, 0x10A) = r;
    if (r == 0) {
        return 0;
    }
    i = ((r >> 8) - 1) * 5 - 1;
    i += r & 7;
    func_80139A44(D_sc01_008_8019F144[i], 0);
    return 1;
}
