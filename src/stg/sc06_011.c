#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_011_8017BE9C(void) {
}

void func_sc06_011_8017BEA4(void) {
}

void func_sc06_011_8017BEAC(void) {
}

void func_sc06_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_011_801840BC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_011_8017D24C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_011_801840C4[])();
void func_sc06_011_8017F278(void);
extern void (*D_sc06_011_801840CC[])();
void func_sc06_011_8017D274(void);
extern void func_800D1EBC();
extern void (*D_sc06_011_801840D8[])();
extern u8 D_sc06_011_801840E4;
extern void func_8016EE40();
extern u8 D_sc06_011_801840E8;
extern void func_sc06_011_8017D594();
extern void (*D_sc06_011_801840F0[])();
extern void (*D_sc06_011_80184170[])();
extern void (*D_sc06_011_801841C0[])();
extern void (*D_sc06_011_8018420C[])();
extern void (*D_sc06_011_80184258[])();
extern void (*D_sc06_011_80184288[])();
extern void (*D_sc06_011_8019E1EC[])();
extern void (*D_sc06_011_8019E268[])();
extern void (*D_sc06_011_8019E2A4[])();
extern u8 D_sc06_011_801A077C;
extern void (*D_sc06_011_801A0794[])();
extern u8 D_sc06_011_801A079C;
extern void (*D_sc06_011_801A07A8[])();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_011_80184118[];
extern s32 func_8013B7F4();
extern u8 D_sc06_011_801A89A0;
extern u8 D_sc06_011_801A8B90;
extern u8 D_sc06_011_801A8C18;
extern s32 func_8012CBF4();
extern s32 func_sc06_011_8017F8F8();
extern s32 func_8012BEE8();
extern void func_8012AD80();
extern s32 func_80143B6C();

extern void func_8002AC00();
extern void func_8012C098();
extern void func_8002A04C();
extern s32 func_8012BCCC();
extern s32 D_sc06_011_801A0858;
extern void func_8012E88C();
extern s32 func_sc06_011_8017FE34();

extern s32 func_8012C354();
extern u8 D_sc06_011_8018077C;
extern u8 D_sc06_011_8019E1B8;
extern u8 D_sc06_011_8019E270;
extern void func_sc06_011_8017E5D0();

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
extern u8 D_sc06_011_8018413C;
extern void func_8001D0E8();
extern u8 D_sc06_011_8018418C;
extern u8 D_sc06_011_801841D8;
extern s32 func_8012C588();
extern u8 D_sc06_011_80184224;
extern s32 func_8014CB2C();
extern s32 func_sc06_011_8017F6CC();
extern void func_80171928();
extern void func_80171990();
extern u8 D_sc06_011_801A085C;
extern void func_8012B2CC();
extern void func_8012B200();
extern s32 func_8012B178();
extern void func_80131E00();


extern u8 D_sc06_011_801A8CE8;

extern u8 D_sc06_011_801A8F00;
extern s32 func_8012B23C();

extern u8 D_sc06_011_8018436C;
extern u8 D_sc06_011_801844AC;
extern void func_8002931C();
s32 func_sc06_011_8017DA88(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc06_011_801844C0;
extern u8 D_sc06_011_801845C4;
extern u8 D_sc06_011_801845D8;
extern u8 D_sc06_011_80184650;
extern u8 D_sc06_011_80184664;
extern u8 D_sc06_011_801846B4;
extern s32 D_sc06_011_801ABBF4;
extern u8 D_sc06_011_801846C8;
extern u8 D_sc06_011_8018472C;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_011_8017BEBC(u8 *obj) {
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

void func_sc06_011_8017CD9C(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_011_8018436C;
    D_801274CC = &D_sc06_011_801844AC;
    func_sc06_011_8017DA88(0);
}

void func_sc06_011_8017CDE4(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_011_801844C0;
    D_801274CC = &D_sc06_011_801845C4;
    func_sc06_011_8017DA88(1);
}

void func_sc06_011_8017CE2C(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_011_801845D8;
    D_801274CC = &D_sc06_011_80184650;
    func_sc06_011_8017DA88(2);
}

void func_sc06_011_8017CE74(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_011_80184664;
    D_sc06_011_801ABBF4 = 0;
    D_801274CC = &D_sc06_011_801846B4;
    func_sc06_011_8017DA88(3);
}

void func_sc06_011_8017CEC4(void) {
    func_8002931C(0x01A40000);
    D_sc06_011_801ABBF4 = 1;
    D_801274C8 = &D_sc06_011_80184664;
    D_801274CC = &D_sc06_011_801846B4;
    func_sc06_011_8017DA88(3);
}

void func_sc06_011_8017CF18(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_011_801846C8;
    D_801274CC = &D_sc06_011_8018472C;
    func_sc06_011_8017DA88(4);
}

void func_sc06_011_8017CF60(u8 *arg0) {
    D_sc06_011_801840BC[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017CF9C(u8 *arg0) {
    func_sc06_011_8017D24C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_011_8017CFE0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_011_8017D004(u8 *arg0) {
    D_sc06_011_801840C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017D040(u8 *arg0) {
    func_sc06_011_8017F278();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc06_011_8017D084(u8 *arg0) {
    D_sc06_011_801840CC[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017D0C0(u8 *arg0) {
    func_sc06_011_8017D274();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_011_8017D100(u8 *arg0) {
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

void func_sc06_011_8017D17C(void) {
    func_800D1EBC();
}

void func_sc06_011_8017D19C(u8 *arg0) {
    D_sc06_011_801840D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017D1D8(u8 *arg0) {
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

void func_sc06_011_8017D24C(void) {
    func_8016EE40((s32) &D_sc06_011_801840E4, 0x01000000);
}

void func_sc06_011_8017D274(void) {
    func_8016EE40((s32) &D_sc06_011_801840E8, 0x01000000);
}

void func_sc06_011_8017D29C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D334(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 1);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D3CC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 2);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D464(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 3);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D4FC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 4);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D594(s32 arg0) {
    D_sc06_011_801840F0[AF(arg0, u8, 4)]();
}

extern s32 func_8012E778();
extern void func_8012DFD4();

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
extern u8 D_sc06_011_80184104[];
extern s32 func_80148800();
extern void func_sc06_011_8017D8F0();
extern u8 D_sc06_011_80184108[];
extern u8 D_sc06_011_8018410C[];
extern u8 D_sc06_011_80184110[];
extern u8 D_sc06_011_80184114[];
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc06_011_8017D5D0(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_011_80184104)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_011_8017D8F0((s32) arg0, (s32) &v);
}

void func_sc06_011_8017D670(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_011_80184108)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_011_8017D8F0((s32) arg0, (s32) &v);
}

void func_sc06_011_8017D710(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_011_8018410C)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_011_8017D8F0((s32) arg0, (s32) &v);
}

void func_sc06_011_8017D7B0(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_011_80184110)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_011_8017D8F0((s32) arg0, (s32) &v);
}

void func_sc06_011_8017D850(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_011_80184114)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_011_8017D8F0((s32) arg0, (s32) &v);
}

void func_sc06_011_8017D8F0(u8 *arg0, u8 *arg1) {
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

s32 func_sc06_011_8017DA88(s32 arg0) {
    return func_8013B7F4(D_sc06_011_80184118[arg0], 0);
}

void func_sc06_011_8017DAB8(u8 *arg0) {
    D_sc06_011_80184170[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017DAF4(u8 *arg0) {
    D_sc06_011_801841C0[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017DB30(u8 *arg0) {
    s16 temp_v0_3;
    s32 temp_v0_2;
    u16 temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;

    temp_s1 = AF(arg0, u16, 0x34);
    switch (temp_s1) {                              /* irregular */
    case 0:
        if ((AF(arg0, u8, 0x74) != 0) && ((func_8014CB2C() & 0x7FFFFFFF) == 2)) {
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x20);
        }
        break;
    case 1:
        temp_v0 = AF(arg0, void *, 0x6C);
        AF(temp_v0, u16, 6) = (u16) (AF(temp_v0, u16, 6) + 0x10);
        temp_a0 = AF(arg0, void *, 0x6C);
        if ((s16) AF(temp_a0, u16, 6) >= -0x300) {
            AF(temp_a0, s16, 6) = -0x300;
            if (AF(arg0, s16, 0x84) != 0) {
                if (func_8012E778((s32) AF(arg0, void *, 0x6C), 0xAA0300) == temp_s1) {
                    func_8002D4C8(0x977, 0);
                }
                func_8002D4C8(4, 0x976);
                AF(arg0, s16, 0x84) = 0;
            }
            AF(arg0, u16, 0x34) = 2U;
            AF(arg0, s32, 0x1C) = 0x96;
        } else if ((AF(arg0, s16, 0x84) == 0) && (func_8012E778((s32) temp_a0, 0xAA0300) == temp_s1)) {
            func_8002D4C8(0x976, 0);
            AF(arg0, s16, 0x84) = 1;
        }
        break;
    case 2:
        temp_v0_2 = AF(arg0, s32, 0x1C);
        if (temp_v0_2 != 0) {
            AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 - 1);
        } else {
            AF(arg0, u16, 0x34) = 0U;
            AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x20);
            func_8012DFD4((s32) arg0);
        }
        break;
    }
    if ((AF(arg0, u16, 0x34) == 0) && (temp_a0_2 = AF(arg0, void *, 0x6C), temp_v0_3 = (s16) AF(temp_a0_2, u16, 6), ((temp_v0_3 < -0x47F) == 0))) {
        AF(temp_a0_2, u16, 6) = (u16) (temp_v0_3 - 0x10);
        temp_a0_3 = AF(arg0, void *, 0x6C);
        if ((s16) AF(temp_a0_3, u16, 6) < -0x47F) {
            AF(temp_a0_3, s16, 6) = -0x480;
            if (AF(arg0, s16, 0x84) != 0) {
                if (func_8012E778((s32) AF(arg0, void *, 0x6C), 0xAA0300) == 1) {
                    func_8002D4C8(0x977, 0);
                }
                func_8002D4C8(4, 0x976);
                AF(arg0, s16, 0x84) = 0;
            }
        } else if ((AF(arg0, s16, 0x84) == 0) && (func_8012E778((s32) temp_a0_3, 0xAA0300) == 1)) {
            func_8002D4C8(0x976, 0);
            AF(arg0, s16, 0x84) = 1;
        }
    }
}

void func_sc06_011_8017DD9C(u8 *arg0) {
    D_sc06_011_8018420C[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017DDD8(u8 *arg0) {
    D_sc06_011_80184258[AF(arg0, u16, 2)]();
}

extern u8 D_801202A0;
extern s32 func_80013328();
extern void func_800D1724();
typedef struct { u8 b[0x10C]; } O10C;
extern void func_80015954();

extern void func_8001C214();
extern u8 D_sc06_011_8019E204;
extern s32 D_sc06_011_8019E238[];
extern u8 *D_80126CC8;
extern u8 D_sc06_011_801A0774;
extern u8 D_sc06_011_8019FDD4;
extern void func_sc06_011_8017F5F0();
extern s32 func_80012A60();
extern u8 *D_sc06_011_801ABBD8;

extern WMtx D_800AF648;
extern OtRef D_800A651C[];
extern s32 D_80126950;
extern u8 *AllocPrim();
extern void RotTransSV();
extern SV8 D_sc06_011_8019E164;
extern u32 D_sc06_011_8019E16C[];
extern u8 D_sc06_011_8019E178[];
extern u8 D_sc06_011_8019E188[];
extern u8 D_sc06_011_8019E198[];
extern s32 func_800CF8B4();
extern s32 func_8014CB8C();
extern s32 func_801726C4();
extern s32 func_80143C74();


void func_sc06_011_8017DE14(u8 *o) {
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

extern s32 D_80126B64;
extern void func_8012C218();

void func_sc06_011_8017DF7C(u8 *o) {
    switch (AF(o, u16, 2)) {
    case 0:
        AF(o, s32, 0x1C) = 0xF;
        AF(o, u16, 2)++;
        if (AF(o, s16, 0x70) == 1) {
            AF(o, s16, 2) = 5;
        }
        break;
    case 1:
        if (--AF(o, s32, 0x1C) == 0) {
            if (D_80126B64 - AF(o, s32, 0xC) >= 0) {
                AF(o, s16, 2) = 3;
                AF(o, s32, 0x1C) = 0x7F;
            } else {
                AF(o, s16, 2) = 2;
                AF(o, s32, 0x1C) = 0x7F;
            }
        }
        break;
    case 2:
        if (D_80126B64 - AF(o, s32, 0xC) > 0) {
            AF(o, s16, 2) = 4;
            func_8002D4C8(0xC46, 0);
        }
        break;
    case 3:
        if (D_80126B64 - AF(o, s32, 0xC) < 0) {
            AF(o, s16, 2) = 4;
            func_8002D4C8(0xC46, 0);
        }
        break;
    case 4:
        func_sc06_011_8017DE14(o);
        if ((AF(o, s32, 0x1C) -= 8) <= 0) {
            func_8012C218(o);
        }
        break;
    case 5:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 2) = 6;
            AF(o, s32, 0x1C) = 0x7F;
        }
        break;
    case 6:
        if (D_80126B64 - AF(o, s32, 0xC) > 0) {
            AF(o, s16, 2) = 3;
        }
        break;
    }
}

void func_sc06_011_8017E0FC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_011_8018413C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E174(void) {
}

void func_sc06_011_8017E17C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 0x10;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((s16) temp_v0 >= -0x1C0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
        func_8002D4C8(4, 0xA66, arg2);
        func_8002D4C8(0xA67, 0);
    }
}

void func_sc06_011_8017E1DC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_011_8018418C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E254(void) {
}

void func_sc06_011_8017E25C(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_011_801841D8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        temp_v0 = func_8012C588(0x2BE, arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        AF(temp_v0, s16, 6) = -0x480;
        AF(AF(arg0, s32, 0x6C), s16, 0xA) = -0x2E0;
        AF(AF(arg0, s32, 0x6C), s16, 0xE) = 0x440;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E2F4(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_011_80184224) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 0xFC) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        temp_v0 = func_8012C588(0x2BD, arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        AF(temp_v0, s16, 6) = -0x240;
        AF(AF(arg0, s32, 0x6C), s16, 0xA) = -0x440;
        AF(AF(arg0, s32, 0x6C), s16, 0xE) = 0xA80;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E394(u8 *arg0) {
    if (((func_8014CB2C() & 0x7FFFFFFF) == 2) && (AF(arg0, u8, 0x74) != 0)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x8A) = (s16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

extern s32 func_8012B744();
extern u8 D_sc06_011_801A8AE8;
extern s32 func_8012B8E4();
extern s32 func_8012D5E4();
extern u8 D_sc06_011_801A0848;
extern s32 func_8012BD3C();
extern u8 D_sc06_011_801A88F8;
extern u8 D_sc06_011_801A8DB0;
extern void func_80142414();
extern s32 D_sc06_011_801A07B8;
extern s32 func_8012CBA4();
extern void func_8012ADE4();


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
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

extern s32 func_80133784();
s32 func_sc06_011_8017F8AC(s32 arg0);
extern s32 D_sc06_011_801A07B4;
extern s32 func_8012B608();
s32 func_sc06_011_8017FA00(s32 arg0);
extern void Square0();
void func_sc06_011_8017FA30(s32 arg0);
extern u8 D_sc06_011_801A07CC;
extern u8 D_sc06_011_801A0800;
extern void func_80143970();
extern void func_8012B030();
extern void func_8012E8A8();

void func_sc06_011_8017E3F8(u8 *o) {
    s16 v = AF(o, s16, 0xFE) + 0x80;
    AF(o, s16, 0xFE) = v;
    AF(o, s16, 0xA) = AF(o, s16, 0x8A) - ((rcos(v) * 80) >> 12);
    if (AF(o, s16, 0xFE) >= 0x400) {
        if (--AF(o, s16, 0xFC) == 0) {
            AF(AF(o, u8 *, 0x6C), s16, 2)++;
            func_8002D4C8(0xA66, 0);
            AF(o, s16, 2) = 3;
        } else {
            AF(o, s16, 2) = 1;
        }
    }
}

void func_sc06_011_8017E4A8(void) {
}

void func_sc06_011_8017E4B0(u8 *arg0) {
    D_sc06_011_80184288[AF(arg0, u16, 2)]();
}

s32 func_sc06_011_8017E4EC(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc06_011_80184278;
extern s32 D_sc06_011_80184268[];
void func_sc06_011_8017E534(u8 *o) {
    s32 v = func_8012C1B8();
    s32 g;
    AF(o, s32, 0x20) = v;
    if (v == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(v, 0);
    AF(o, u8 *, 0x58) = &D_sc06_011_80184278;
    AF(o, s16, 0x5C) = 0x80;
    g = D_sc06_011_801ABBF4;
    AF(o, s16, 2)++;
    if (g == 0) {
        AF(o, s32, 0xDC) = func_sc06_011_8017E4EC(o, D_sc06_011_80184268);
    }
}

void func_sc06_011_8017E5C0(void) {
}

s32 func_sc06_011_8017E5C8(void) {
    return 0x6E;
}

void func_sc06_011_8017E5D0(o)
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
    RotTransSV(&D_sc06_011_8019E164, &v, &flag);
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
                AF(q, u32, 4) = D_sc06_011_8019E16C[D_sc06_011_8019E198[i]];
                AF(q, u32, 0xC) = D_sc06_011_8019E16C[D_sc06_011_8019E198[i + 1]];
                AF(q, u32, 0x14) = D_sc06_011_8019E16C[D_sc06_011_8019E198[i + 2]];
                AF(q, u32, 0x1C) = D_sc06_011_8019E16C[D_sc06_011_8019E198[i + 3]];
                AF(q, u8, 3) = 8;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = x[D_sc06_011_8019E178[i]];
                AF(q, s16, 0x10) = x[D_sc06_011_8019E178[i + 1]];
                AF(q, s16, 0x18) = x[D_sc06_011_8019E178[i + 2]];
                AF(q, s16, 0x20) = x[D_sc06_011_8019E178[i + 3]];
                AF(q, s16, 0xA) = y[D_sc06_011_8019E188[i]];
                AF(q, s16, 0x12) = y[D_sc06_011_8019E188[i + 1]];
                AF(q, s16, 0x1A) = y[D_sc06_011_8019E188[i + 2]];
                AF(q, s16, 0x22) = y[D_sc06_011_8019E188[i + 3]];
                AddPrim(ot, q);
                j++;
                q += 0x24;
            }
            AddPrim(ot, prim);
        }
    }
}

void func_sc06_011_8017E9F4(u8 *o) {
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

void func_sc06_011_8017ED68(u8 *arg0) {
    D_sc06_011_8019E1EC[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017EDA4(u8 *o) {
    u16 v;
    if (func_8012C354(o, &D_sc06_011_8019E204) != 0) {
        v = AF(o, u16, 0x70);
        if (v & 0x10) {
            v &= ~0x10;
            AF(o, u16, 0x70) = v;
            func_8001C214(AF(o, u8 *, 0x20), D_sc06_011_8019E238[(s16)v]);
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
        } else {
            func_8001C214(AF(o, u8 *, 0x20), D_sc06_011_8019E238[(s16)v]);
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
        SetScript(o, &D_sc06_011_8018077C);
        AF(o, u16, 2)++;
        func_8012B23C(o);
        AF(o, s16, 0xAE) = -1;
    }
}

void func_sc06_011_8017EEEC(u8 *o) {
    s32 i;
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 4:
        p = &D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                func_8001C214(AF(o, u8 *, 0x20), &D_sc06_011_801A0774);
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
            func_sc06_011_8017F364();
        }
        break;
    case 1:
        break;
    case 2:
        p = &D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                func_8001C214(AF(o, u8 *, 0x20), &D_sc06_011_8019FDD4);
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

void func_sc06_011_8017F09C(u8 *arg0) {
    D_sc06_011_8019E268[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017F0D8(u8 *arg0) {
    D_sc06_011_8019E2A4[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017F114(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_011_8019E1B8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
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

void func_sc06_011_8017F1BC(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_011_8019E270) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_011_8017F240(u8 *arg0) {
    func_sc06_011_8017E5D0();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_011_8017F278(void) {
    func_8016EE40((s32) &D_sc06_011_801A077C, 0x01000000);
}

void func_sc06_011_8017F2A0(u8 *arg0) {
    D_sc06_011_801A0794[AF(arg0, u8, 0x216)]();
}

void func_sc06_011_8017F2DC(u8 *o) {
    func_sc06_011_8017F5F0(o);
    if (AF(o, s16, 0x210) < 0) {
        AF(o, s16, 0x210) = -0x30;
    } else {
        AF(o, s16, 0x210) = 0x30;
    }
    func_80171990(o);
}

void func_sc06_011_8017F324(s32 arg0) {
    if (func_sc06_011_8017F6CC() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_011_8017F364(void) {
    func_8016EE40((s32) &D_sc06_011_801A079C, 0x01000000);
}

void func_sc06_011_8017F38C(u8 *arg0) {
    D_sc06_011_801A07A8[AF(arg0, u8, 0x216)]();
}

void func_sc06_011_8017F3C8(u8 *o) {
    u8 *m;
    s16 a;
    s32 c;
    s32 d;
    m = AF(o, u8 *, 0x20);
    func_sc06_011_8017F5F0(o);
    if (D_sc06_011_801ABBD8 != 0) {
        a = (AF(m, u16, 0x12) + 0x800) & 0xFFF;
        if (AF(AF(D_sc06_011_801ABBD8, u8 *, 0x20), u16, 0x12) & 0x400) {
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

void func_sc06_011_8017F4D0(s32 arg0) {
    if (func_sc06_011_8017F6CC() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

void func_sc06_011_8017F510(u8 *o) {
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

extern void func_80015978();
extern void func_8012F2E8();
void func_sc06_011_8017F5F0(u8 *o) {
    typedef struct { u8 b[0x10C]; } O10C;
    SV8 v;
    s32 i;
    s32 best;
    u8 *p;
    s16 d;
    best = 0x7FFFFFFF;
    D_sc06_011_801ABBD8 = 0;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((O10C *)&D_801202A0)[i];
        if (AF(p, u16, 0) == 0x26E) {
            d = func_80013328(o + 4, p + 4);
            if (d < best) {
                best = d;
                D_sc06_011_801ABBD8 = p;
            }
        }
    }
    AF(o, s16, 0x208) = 0;
    func_80015978(o + 4, &v);
    func_8012F2E8(D_sc06_011_801ABBD8, &v, o + 0x20C);
    AF(o, u8 *, 0x204) = D_sc06_011_801ABBD8;
    func_8002D4C8(0x8B0, 0);
}

s32 func_sc06_011_8017F6CC(u8 *o) {
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

void func_sc06_011_8017F760(s32 arg0) {
    u8 temp_v1;

    if (AF(arg0, s16, 0x100) == 0) {
        func_8002A04C(arg0);
    }
    temp_v1 = AF(arg0, u8, 0xC1);
    if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
        func_8002AC00(7);
    }
    func_8012C098(arg0);
}

static inline s32 chk_floor_8017F7D4(u8 *o) {
    SV8 a;
    SV8 b;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b = a;
    b.y += 8;
    if (func_80133784(1, &a, &b) & 0x6000) {
        return 1;
    }
    func_8012B23C(o);
    return 0;
}

void func_sc06_011_8017F7D4(u8 *o) {
    if (chk_floor_8017F7D4(o) == 0) {
        AF(o, s16, 2) = 8;
        AF(o, s16, 0x98) = 0;
    } else if (AF(o, s32, 0xC4) & 4) {
        func_sc06_011_8017F8AC((s32)o);
    } else {
        func_sc06_011_8017F8F8(o);
    }
}

s32 func_sc06_011_8017F8AC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc06_011_801A8F00);
    return func_8012B23C(arg0);
}

s32 func_sc06_011_8017F8F8(u8 *o) {
    V3 v;
    u8 *p;
    s32 r;
    s32 d;
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x24;
    p = o + 0x88;
    v.x = AF(o, s16, 6) - AF(p, s16, 0);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(p, s16, 4);
    Square0(&v, &v);
    if (v.x + v.z > 0x8FFFF) {
        AF(o, s16, 0xFC) = func_8012B744(o + 4, p);
    } else {
        r = rand() & 0x3FF;
        d = r - 0x200;
        if (d < 0) {
            d = r - 0x500;
        } else {
            d = r + 0x100;
        }
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + d) & 0xFFF;
    }
    func_8012B23C(o);
    return SetScript(o, &D_sc06_011_801A8AE8);
}

s32 func_sc06_011_8017FA00(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc06_011_801A89A0);
}

void func_sc06_011_8017FA30(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    if (AF(arg0, u16, 0x86) & 2) {
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s32, 0x1C) = 0x28;
        SetScript(arg0, (s32) &D_sc06_011_801A8B90);
        AF(arg0, s16, 0xFE) = 0;
        return;
    }
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc06_011_801A8C18);
    AF(arg0, s32, 0x1C) = 0x19;
    AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
}

void func_sc06_011_8017FAB4(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
        if (AF(o, s32, 0x1C) == 0xF) {
            func_80142414(o, -0x78);
            func_8002D4C8(0x6A9, 0);
        }
        if (func_8012BEE8(o)) {
            AF(o, s16, 2) = 3;
            if (AF(o, u16, 0x86) & 2) {
                AF(o, s16, 0x34) = 1;
                AF(o, s32, 0x1C) = 0x28;
                SetScript(o, &D_sc06_011_801A8B90);
                AF(o, s16, 0xFE) = 0;
                return;
            }
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc06_011_801A8C18);
            AF(o, s32, 0x1C) = 0x19;
            AF(o, u16, 0x86) |= 2;
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) >= 0x16) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
        }
        func_8012B178(o, D_sc06_011_801A07B8);
        if (func_8012CBA4(o) != 0x2000) {
            func_8012ADE4(o);
        }
        if (--AF(o, s16, 0xFE) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFE) = 8;
        }
        if (func_8012BEE8(o)) {
            func_sc06_011_8017F8F8(o);
        }
        if (func_8012BD3C(o, 0x200, 0x1000)) {
            func_sc06_011_8017FC7C(o);
        }
        break;
    }
}

void func_sc06_011_8017FC7C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc06_011_801A8CE8);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc06_011_8017FCC0(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) == 7) {
            func_8012D5E4(o, &D_sc06_011_801A0848, &D_sc06_011_801A0848 + 8, 0xB);
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0xA) {
            func_8012D5E4(o, &D_sc06_011_801A0848, &D_sc06_011_801A0848 + 8, 0xB);
        }
        break;
    }
    if (func_8012BEE8(o)) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (func_8012BD3C(o, 0x400, 0x4000)) {
                AF(o, s16, 0x34) = 1;
                SetScript(o, &D_sc06_011_801A88F8);
                AF(o, s32, 0x1C) = 0xA;
            } else {
                AF(o, s16, 2) = 2;
                AF(o, s16, 0x34) = 0;
                SetScript(o, &D_sc06_011_801A89A0);
            }
            break;
        case 1:
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0x18;
            SetScript(o, &D_sc06_011_801A8DB0);
            break;
        case 2:
            AF(o, s16, 2) = 2;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc06_011_801A89A0);
            break;
        }
    }
}

s32 func_sc06_011_8017FE34(s32 arg0) {
    s32 *var_s1;
    s32 temp_v0;

    var_s1 = &D_sc06_011_801A085C;
    if (!(AF(arg0, u16, 0x70) & 0x2000)) {
        var_s1 = &D_sc06_011_801A085C + 0xC;
    }
    AF(arg0, s16, 2) = 7;
    SetScript(arg0, AF(var_s1, s32, 0));
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, AF(var_s1, s32, 4));
    temp_v0 = AF(var_s1, s32, 8);
    AF(arg0, s32, 0x1C) = temp_v0;
    return temp_v0;
}

extern void (*D_sc06_011_801A0874[])();
extern s32 func_8012C044();

void func_sc06_011_8017FEB4(u8 *o) {
    u8 t;

    D_sc06_011_801A0874[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) != 0 && func_8012C044(o) != 0) {
        AF(o, s16, 0x100) = 1;
        t = AF(o, u8, 0xC1);
        if (t == 5 || t == 0xD || t == 0xB || t == 0xE) {
            func_8002AC00(7);
        }
        func_8012C098(o);
    }
}

void func_sc06_011_8017FF58(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x6AA, 0, arg2);
}

void func_sc06_011_8017FF7C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u8, 0x5E) == 0xC) {
        func_8002D4C8(0x9DA, 0, arg2);
    }
}

void func_sc06_011_8017FFAC(s32 arg0) {
    func_8012CBF4(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc06_011_8017F8F8(arg0);
    }
}

void func_sc06_011_8017FFF0(u8 *o) {
    if (AF(o, s32, 0x1C) >= 4) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    func_8012B178(o, D_sc06_011_801A07B4);
    if (func_8012CBA4(o) != 0x2000) {
        func_8012ADE4(o);
    }
    if (func_8012BEE8(o) != 0) {
        func_sc06_011_8017FA00((s32) o);
    }
}

void func_sc06_011_80180098(u8 *o) {
    V3 v;

    if (AF(o, u16, 0x34) == 0 && (AF(o, u16, 0x72) & 0x4000)) {
        v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
        v.y = 0;
        v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
        Square0(&v, &v);
        if (v.x + v.z < 0x90000 && func_8012BCCC(o) <= 0x10000) {
            func_sc06_011_8017FA30((s32) o);
        } else {
            func_sc06_011_8017F8F8(o);
        }
    }
}

void func_sc06_011_8018015C(s32 arg0, s32 arg1) {
    if (func_8012BCCC(arg0, arg1) < D_sc06_011_801A0858) {
        func_8012E88C(arg0);
        func_sc06_011_8017FE34(arg0);
    }
}

void func_sc06_011_801801AC(s32 arg0) {
    u16 temp_v0;

    func_8012AD80(arg0);
    if (AF(arg0, u16, 0x70) & 0x2000) {
        temp_v0 = AF(arg0, u16, 0xFE) - 1;
        AF(arg0, u16, 0xFE) = temp_v0;
        if ((temp_v0 << 0x10) <= 0) {
            func_80143B6C(arg0, 0);
            AF(arg0, u16, 0xFE) = 8U;
        }
    }
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        AF(arg0, s16, 2) = 3;
        if (AF(arg0, u16, 0x86) & 2) {
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x28;
            SetScript(arg0, (s32) &D_sc06_011_801A8B90);
            AF(arg0, u16, 0xFE) = 0U;
            return;
        }
        AF(arg0, s16, 0x34) = 0;
        SetScript(arg0, (s32) &D_sc06_011_801A8C18);
        AF(arg0, s32, 0x1C) = 0x19;
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
    }
}

void func_sc06_011_80180298(u8 *arg0) {
    s32 temp_v0;
    u8 temp_v1;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        if (AF(arg0, s16, 0x100) == 0) {
            func_8002A04C();
        }
        temp_v1 = AF(arg0, u8, 0xC1);
        if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
            func_8002AC00(7);
        }
        func_8012C098((s32) arg0);
        return;
    }
    temp_v0 = func_8012CBF4((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            func_80131E00((s32) arg0, 0x12);
            return;
        }
        func_sc06_011_8017F8F8((s32) arg0);
    }
}

void func_sc06_011_80180360(u8 *o) {
    if (func_8012C354(o, &D_sc06_011_801A07CC) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0xC1) = 0;
        AF(o, u8 *, 0xBC) = &D_sc06_011_801A0800;
        func_80143970(o);
        func_8012B030(o);
        if (AF(o, u16, 0x70) & 0x6000) {
            AF(o, s16, 2) = 6;
            SetScript(o, &D_sc06_011_801A89A0);
            func_8012E8A8(o);
        } else {
            func_sc06_011_8017F8F8(o);
        }
    }
}
