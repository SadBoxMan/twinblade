#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_015_8017BE9C(void) {
}

void func_sc06_015_8017BEA4(void) {
}

void func_sc06_015_8017BEAC(void) {
}

void func_sc06_015_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_015_8018248C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_015_80182474;
extern void (*D_sc06_015_80182494[])();
extern u8 D_sc06_015_80182480;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_015_8017D46C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_015_80182544[])();
void func_sc06_015_8017E554(void);
extern void (*D_sc06_015_8018254C[])();
void func_sc06_015_8017D494(void);
extern void func_800D1EBC();
extern void (*D_sc06_015_80182558[])();
extern u8 D_sc06_015_80182564;
extern void func_8016EE40();
extern u8 D_sc06_015_80182568;
extern void func_sc06_015_8017D554();
extern void (*D_sc06_015_80182570[])();
extern void func_sc06_015_8017D818();
extern void (*D_sc06_015_8018F8A4[])();
extern void (*D_sc06_015_8018F920[])();
extern void (*D_sc06_015_8018F95C[])();
extern u8 D_sc06_015_80191E34;
extern void (*D_sc06_015_80191E4C[])();
extern u8 D_sc06_015_80191E54;
extern void (*D_sc06_015_80191E60[])();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_015_801825B8[];
extern s32 func_8013B7F4();

extern s32 func_8012C354();
extern u8 D_sc06_015_8017EDB4;
extern u8 D_sc06_015_8018F870;
extern u8 D_sc06_015_8018F928;
extern void func_sc06_015_8017D8AC();

extern s32 func_sc06_015_8017E9A8();
extern void func_80171928();
extern void func_80171990();

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

extern u8 D_sc06_015_80182698;
extern u8 D_sc06_015_8018274C;
extern void func_8002931C();
s32 func_sc06_015_8017D7C8(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_015_8017BEBC(u8 *obj) {
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

void func_sc06_015_8017CD9C(u8 *arg0) {
    D_sc06_015_8018248C[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017CDD8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    func_80146A6C(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.x = AF(a, s16, 6);
    p.y = AF(a, s16, 0xA);
    p.z = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.x;
    AF(a, s16, 0xE) = p.z;
    r.y = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = func_80146A6C(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc06_015_80182474, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.x;
        AF(o, s16, 0x12) = r.y;
        AF(a, u16, 2)++;
    } else {
        func_80146C3C(a);
    }
}

void func_sc06_015_8017CF9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc06_015_8017D030(u8 *arg0) {
    D_sc06_015_80182494[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017D06C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc06_015_80182480, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc06_015_8017D110(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

void func_sc06_015_8017D174(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_015_80182698;
    D_801274CC = &D_sc06_015_8018274C;
    func_sc06_015_8017D7C8(0);
}

s32 func_sc06_015_8017D1BC(u8 *arg0) {
    func_sc06_015_8017D46C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_015_8017D200(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_015_8017D224(u8 *arg0) {
    D_sc06_015_80182544[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_015_8017D260(u8 *arg0) {
    func_sc06_015_8017E554();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc06_015_8017D2A4(u8 *arg0) {
    D_sc06_015_8018254C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_015_8017D2E0(u8 *arg0) {
    func_sc06_015_8017D494();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_015_8017D320(u8 *arg0) {
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

void func_sc06_015_8017D39C(void) {
    func_800D1EBC();
}

void func_sc06_015_8017D3BC(u8 *arg0) {
    D_sc06_015_80182558[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_015_8017D3F8(u8 *arg0) {
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

void func_sc06_015_8017D46C(void) {
    func_8016EE40((s32) &D_sc06_015_80182564, 0x01000000);
}

void func_sc06_015_8017D494(void) {
    func_8016EE40((s32) &D_sc06_015_80182568, 0x01000000);
}

void func_sc06_015_8017D4BC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_015_8017D554, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_015_8017D554((s32) &D_80126948);
}

void func_sc06_015_8017D554(s32 arg0) {
    D_sc06_015_80182570[AF(arg0, u8, 4)]();
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
extern u8 D_sc06_015_80182574[];
extern s32 func_80148800();
extern void func_sc06_015_8017D630();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc06_015_8017D590(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_015_80182574)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_015_8017D630((s32) arg0, (s32) &v);
}

void func_sc06_015_8017D630(u8 *arg0, u8 *arg1) {
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

s32 func_sc06_015_8017D7C8(s32 arg0) {
    return func_8013B7F4(D_sc06_015_801825B8[arg0], 0);
}

void func_sc06_015_8017D7F8(s32 arg0) {
    func_sc06_015_8017D818(arg0);
}

typedef struct { u8 b[0x10C]; } O10C;
extern u8 D_801202A0;
extern s32 func_80013328();
extern void func_800D1724();
extern void func_80015954();

extern s32 func_8012B23C();
extern void func_8001C214();
extern u8 D_sc06_015_8018F8BC;
extern s32 D_sc06_015_8018F8F0[];
extern u8 *D_80126CC8;
extern u8 D_sc06_015_80191E2C;
extern u8 D_sc06_015_8019148C;
extern void func_sc06_015_8017E8CC();
extern s32 func_80012A60();
extern u8 *D_sc06_015_80194888;

extern s32 func_800CF8B4();
extern s32 func_8014CB8C();
extern s32 func_801726C4();
extern s32 func_80143C74();

typedef union { s32 w; XY s; } UXY;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 w[4]; } W16;
extern u16 D_sc06_015_80182578[];
extern u8 D_sc06_015_80182598;
extern u32 D_sc06_015_80194860;
extern u16 D_sc06_015_80194864[];
extern void func_800183E0();

void func_sc06_015_8017D818(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc06_015_80194864[i] = D_sc06_015_80182578[((D_sc06_015_80194860 >> 8) + i) & 0xF] | 0x8000;
    }
    func_800183E0(&D_sc06_015_80182598);
    D_sc06_015_80194860 += 0x100;
}

s32 func_sc06_015_8017D8A4(void) {
    return 0x6E;
}

extern WMtx D_800AF648;
extern OtRef D_800A651C[];
extern s32 D_80126950;
extern u8 *AllocPrim();
extern void RotTransSV();
extern SV8 D_sc06_015_8018F81C;
extern u32 D_sc06_015_8018F824[];
extern u8 D_sc06_015_8018F830[];
extern u8 D_sc06_015_8018F840[];
extern u8 D_sc06_015_8018F850[];

void func_sc06_015_8017D8AC(o)
    u8 *o;
{
    u8 *pp[4];
    SV8 v;
    s16 x[8];
    s16 y[8];
    s32 flag;
    s32 sxy;
    s32 p;
    u8 *m;
    s32 z;
    s32 r;
    s32 h;
    u32 *ot;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;
    s16 sx;
    s16 sy;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc06_015_8018F81C, &v, &flag);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    z = RotTransPers(&v, &sxy, &p, &flag);
    if (z > 0 && flag >= 0) {
        sx = AF(&sxy, s16, 0);
        sy = AF(&sxy, s16, 2);
        r = (D_80126950 + 500) * 48 / (z * 4);
        ot = D_800A651C[D_800B9A02].ot + z;
        h = r * 179 >> 8;
        x[0] = sx - r;
        x[1] = sx - h;
        x[2] = sx;
        x[3] = sx + h;
        x[4] = sx + r;
        y[0] = sy - r;
        y[1] = sy - h;
        y[2] = sy;
        y[3] = sy + h;
        y[4] = sy + r;
        prim = AllocPrim(0x9C);
        if (prim != 0) {
            SetDrawMode(prim, 0, 0, (u16) GetTPage(0, 1, 0, 0), 0);
            q = pp[0] = prim + 0xC;
            pp[1] = prim + 0x30;
            pp[2] = prim + 0x54;
            pp[3] = prim + 0x78;
            for (j = 0; j < 4;) {
                i = j * 4;
                AF(q, u32, 4) = D_sc06_015_8018F824[D_sc06_015_8018F850[i]];
                AF(q, u32, 0xC) = D_sc06_015_8018F824[D_sc06_015_8018F850[i + 1]];
                AF(q, u32, 0x14) = D_sc06_015_8018F824[D_sc06_015_8018F850[i + 2]];
                AF(q, u32, 0x1C) = D_sc06_015_8018F824[D_sc06_015_8018F850[i + 3]];
                AF(q, u8, 3) = 8;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = x[D_sc06_015_8018F830[i]];
                AF(q, s16, 0x10) = x[D_sc06_015_8018F830[i + 1]];
                AF(q, s16, 0x18) = x[D_sc06_015_8018F830[i + 2]];
                AF(q, s16, 0x20) = x[D_sc06_015_8018F830[i + 3]];
                AF(q, s16, 0xA) = y[D_sc06_015_8018F840[i]];
                AF(q, s16, 0x12) = y[D_sc06_015_8018F840[i + 1]];
                AF(q, s16, 0x1A) = y[D_sc06_015_8018F840[i + 2]];
                AF(q, s16, 0x22) = y[D_sc06_015_8018F840[i + 3]];
                AddPrim(ot, q);
                j++;
                q += 0x24;
            }
            AddPrim(ot, prim);
        }
    }
}

void func_sc06_015_8017DCD0(u8 *o) {
    s32 dz;
    s32 s;
    u8 *p;

    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0xFC);
    if (AF(&D_80126B58, s16, 0xA) < -0x4E0) {
        dz = AF(&D_80126B58, s16, 0xE) - AF(o, s16, 0xE);
        if (dz < 0x140) {
            AF(o, s16, 0xFC) -= 0x10;
            if (AF(o, s16, 0xFC) < 0) {
                AF(o, s16, 0xFC) = 0;
            }
        } else {
            AF(o, s16, 0xFC) += 0x10;
            if (AF(o, s16, 0xFC) > 0x300) {
                AF(o, s16, 0xFC) = 0x300;
            }
            if (dz < 0x900 && func_800CF8B4() != 0 && func_8014CB8C() == 0) {
                s = AF(o, s16, 0xFC) * 13 / 0x300;
                s = s * (0x900 - dz) / 0x900;
                if (func_801726C4(&D_80126B58) != 0) {
                    s *= 2;
                }
                AF(&D_80126B58, s16, 0xE) += s;
                func_8002D4C8(0x978, (s * 127 / 13 | 0x1000) & 0xFFFF);
                AF(o, s16, 0xFE) = 1;
            }
        }
    } else {
        AF(o, s16, 0xFC) += 0x10;
        if (AF(o, s16, 0xFC) > 0x300) {
            AF(o, s16, 0xFC) = 0x300;
        }
    }
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
    } else if (AF(o, s16, 0xFC) > 0x40) {
        AF(o, s32, 0x1C) = 3;
        p = (u8 *) func_80143C74(o, 0);
        if (p != 0) {
            AF(p, s16, 6) = rand() % 0x120 - 0xE0;
            AF(p, s16, 0xA) = -(rand() & 0x3F) - 0x502;
            dz = rand() % 0x560 + 0x140;
            AF(p, s16, 0xE) += dz;
            s = AF(o, s16, 0xFC) * 13 / 0x300;
            s = s * (0x800 - dz) / 0x800;
            AF(p, s16, 0x1A) = s * 2;
            AF(p, s32, 0x48) = -((rand() & 0x1FF) << 7);
        }
    }
    if (AF(o, s16, 0xFE) == 2) {
        AF(o, s16, 0xFE) = 0;
        func_8002D4C8(4, 0x978);
    }
    if (AF(o, s16, 0xFE) == 1) {
        AF(o, s16, 0xFE) = 2;
    }
}

void func_sc06_015_8017E044(u8 *arg0) {
    D_sc06_015_8018F8A4[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017E080(u8 *o) {
    u16 v;
    if (func_8012C354(o, &D_sc06_015_8018F8BC) != 0) {
        v = AF(o, u16, 0x70);
        if (v & 0x10) {
            v &= ~0x10;
            AF(o, u16, 0x70) = v;
            func_8001C214(AF(o, u8 *, 0x20), D_sc06_015_8018F8F0[(s16)v]);
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
        } else {
            func_8001C214(AF(o, u8 *, 0x20), D_sc06_015_8018F8F0[(s16)v]);
        }
        if (AF(o, s16, 0x70) == 8 || AF(o, s16, 0x70) == 10) {
            AF(o, s16, 0x34) = 3;
            AF(o, u16, 0x5C) = 0x8800;
        }
        if (AF(o, s16, 0x70) == 9) {
            AF(o, s16, 0x34) = 2;
            AF(o, u16, 0x5C) = 0x8800;
        }
        if (AF(o, s16, 0x70) == 11) {
            AF(o, s16, 0x34) = 4;
        }
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0x75) = 8;
        SetScript(o, &D_sc06_015_8017EDB4);
        AF(o, u16, 2)++;
        func_8012B23C(o);
        AF(o, s16, 0xAE) = -1;
    }
}

void func_sc06_015_8017E1C8(u8 *o) {
    s32 i;
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 4:
        p = &D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                func_8001C214(AF(o, u8 *, 0x20), &D_sc06_015_80191E2C);
                AF(o, u16, 0x5C) = 0x8800;
                AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
                AF(o, s16, 0x34) = 3;
            }
        }
    case 0:
        if (D_80126CC8 == o) {
            AF(o, s16, 0x34) = 1;
            AF(o, s16, 0x5C) = 0;
            AF(o, s16, 6) = AF(o, s16, 0x88);
            AF(o, s16, 0xA) = AF(o, s16, 0x8A);
            AF(o, s16, 0xE) = AF(o, s16, 0x8C);
            func_sc06_015_8017E640();
        }
        break;
    case 1:
        break;
    case 2:
        p = &D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                func_8001C214(AF(o, u8 *, 0x20), &D_sc06_015_8019148C);
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
                AF(o, u16, 0x5C) = 0x9000;
                AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
                AF(o, s16, 0x34) = 0;
            }
        }
        break;
    case 3:
        break;
    }
}

void func_sc06_015_8017E378(u8 *arg0) {
    D_sc06_015_8018F920[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017E3B4(u8 *arg0) {
    D_sc06_015_8018F95C[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017E3F0(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_015_8018F870) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_015_8017EDB4);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xE00;
        AF(arg0, s16, 0xFC) = 0x300;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_015_8017E498(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_015_8018F928) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_015_8017EDB4);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_015_8017E51C(u8 *arg0) {
    func_sc06_015_8017D8AC();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_015_8017E554(void) {
    func_8016EE40((s32) &D_sc06_015_80191E34, 0x01000000);
}

void func_sc06_015_8017E57C(u8 *arg0) {
    D_sc06_015_80191E4C[AF(arg0, u8, 0x216)]();
}


void func_sc06_015_8017E5B8(u8 *o) {
    func_sc06_015_8017E8CC(o);
    if (AF(o, s16, 0x210) < 0) {
        AF(o, s16, 0x210) = -0x30;
    } else {
        AF(o, s16, 0x210) = 0x30;
    }
    func_80171990(o);
}

void func_sc06_015_8017E600(s32 arg0) {
    if (func_sc06_015_8017E9A8() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_015_8017E640(void) {
    func_8016EE40((s32) &D_sc06_015_80191E54, 0x01000000);
}

void func_sc06_015_8017E668(u8 *arg0) {
    D_sc06_015_80191E60[AF(arg0, u8, 0x216)]();
}

void func_sc06_015_8017E6A4(u8 *o) {
    u8 *m;
    s16 a;
    s32 c;
    s32 d;
    m = AF(o, u8 *, 0x20);
    func_sc06_015_8017E8CC(o);
    if (D_sc06_015_80194888 != 0) {
        a = (AF(m, u16, 0x12) + 0x800) & 0xFFF;
        if (AF(AF(D_sc06_015_80194888, u8 *, 0x20), u16, 0x12) & 0x400) {
            c = func_80012A60(a, 0x400);
            d = func_80012A60(a, 0xC00);
            if ((s16)c <= (s16)d) {
                AF(m, s16, 0x12) = 0x400;
            } else {
                AF(m, s16, 0x12) = 0xC00;
            }
        } else {
            c = func_80012A60(a, 0);
            d = func_80012A60(a, 0x800);
            if ((s16)c <= (s16)d) {
                AF(m, s16, 0x12) = 0;
            } else {
                AF(m, s16, 0x12) = 0x800;
            }
        }
    }
    func_80171990(o);
}

void func_sc06_015_8017E7AC(s32 arg0) {
    if (func_sc06_015_8017E9A8() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

void func_sc06_015_8017E7EC(u8 *o) {
    u8 *found;
    s32 best;
    s32 i;
    u8 *p;
    s16 d;
    found = 0;
    best = 0x7FFFFFFF;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((O10C *)&D_801202A0)[i];
        if (AF(p, u16, 0) != 0 && (AF(p, u16, 0x5C) & 0x80)) {
            d = func_80013328(o + 4, p + 4);
            if (d < best) {
                best = d;
                found = p;
            }
        }
    }
    if (found != 0) func_800D1724(AF(found, s32, 0xDC));
    func_80171928(o);
}

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_80015978();
extern void func_8012F2E8();

void func_sc06_015_8017E8CC(u8 *o) {
    typedef struct { u8 b[0x10C]; } O10C;
    SV8 v;
    s32 i;
    s32 best;
    u8 *p;
    s16 d;
    best = 0x7FFFFFFF;
    D_sc06_015_80194888 = 0;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((O10C *)&D_801202A0)[i];
        if (AF(p, u16, 0) == 0x26E) {
            d = func_80013328(o + 4, p + 4);
            if (d < best) {
                best = d;
                D_sc06_015_80194888 = p;
            }
        }
    }
    AF(o, s16, 0x208) = 0;
    func_80015978(o + 4, &v);
    func_8012F2E8(D_sc06_015_80194888, &v, o + 0x20C);
    AF(o, u8 *, 0x204) = D_sc06_015_80194888;
    func_8002D4C8(0x8B0, 0);
}

s32 func_sc06_015_8017E9A8(u8 *o) {
    SV8 v;
    u8 *q;
    u8 *t;
    s16 a;
    q = AF(o, u8 *, 0x204);
    t = AF(q, u8 *, 0x20);
    if (q != 0) {
        AF(t, s16, 0x12) += 0x80;
        func_8012F14C(t + 0x34, o + 0x20C, &v);
        func_80015954(&v, o + 4);
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x80;
    a = AF(o, s16, 0x208) + 0x80;
    AF(o, s16, 0x208) = a;
    return a == 0x800;
}
