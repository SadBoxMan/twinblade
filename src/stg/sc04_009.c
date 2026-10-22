#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_009_8017BE9C(void) {
}

void func_sc04_009_8017BEA4(void) {
}

void func_sc04_009_8017BEAC(void) {
}

void func_sc04_009_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_009_80182550[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_009_8017D078(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_009_80182558[])();
void func_sc04_009_8017D0A0(void);
extern void func_800D1EBC();
extern void (*D_sc04_009_80182564[])();
extern u8 D_sc04_009_80182570;
extern void func_8016EE40();
extern u8 D_sc04_009_80182574;
extern void func_sc04_009_8017D170();
extern void (*D_sc04_009_80182580[])();
extern void (*D_sc04_009_8018260C[])();
extern void (*D_sc04_009_8018278C[])();
extern void (*D_sc04_009_80182794[])();
extern void (*D_sc04_009_801827D0[])();
extern void (*D_sc04_009_80194ED0[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_009_8017EE1C;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc04_009_80194BC0;
extern void func_sc04_009_8017E520();
extern s32 D_sc04_009_80194C28[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc04_009_80194DF4;
extern s32 D_sc04_009_80194DF8;
extern s32 D_sc04_009_80194E0C;
extern s32 D_sc04_009_80194E20;
extern s32 D_sc04_009_80194E8C;
extern s32 D_sc04_009_80194D70[];
extern s32 D_sc04_009_80194CEC[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc04_009_8017E2C8();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc04_009_80194EF8[])();
extern u8 D_sc04_009_80194BF4;
extern u8 D_sc04_009_801954E4;
extern u8 D_sc04_009_80195704;
extern void func_8002D4C8();
extern u8 D_sc04_009_801954F4;
extern u8 D_sc04_009_801955FC;
extern void (*D_sc04_009_80195024[])();
extern u8 D_sc04_009_80194FD4;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_009_80182588[];
extern s32 func_8013B7F4();
extern u8 D_sc04_009_80194F24;
extern void func_sc04_009_8017E950();
extern s32 D_sc04_009_80198114;
extern void func_800296F8();

extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_009_801827C4;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();

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
extern void func_sc04_009_8017D5E4();
extern u8 D_sc04_009_8018259C;
extern void func_80178B18();
extern s32 func_80178970();

extern void func_sc04_009_8017D638();

extern u8 D_sc04_009_801825FC;
extern u8 D_sc04_009_80194B98;
extern s32 func_8012C1B8();
extern s32 func_8001C214();

extern s32 D_8011F9C4;
extern u8 D_sc04_009_80182994;
extern u8 D_sc04_009_80182A20;
extern void func_800291F0();
s32 func_sc04_009_8017D420(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern s32 func_8012BEE8();
extern s32 func_8017267C();
extern void func_sc04_009_8017DAD4();
extern void *D_80126B78;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc04_009_8017BEBC(u8 *obj) {
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

void func_sc04_009_8017CD9C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xD7, 1);
    func_800291F0(4, 0xD7);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_009_80182994;
    D_801274CC = &D_sc04_009_80182A20;
    func_sc04_009_8017D420(0);
}

void func_sc04_009_8017CE0C(u8 *arg0) {
    D_sc04_009_80182550[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017CE48(u8 *arg0) {
    func_sc04_009_8017D078();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_009_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_009_8017CEB0(u8 *arg0) {
    D_sc04_009_80182558[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017CEEC(u8 *arg0) {
    func_sc04_009_8017D0A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_009_8017CF2C(u8 *arg0) {
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

void func_sc04_009_8017CFA8(void) {
    func_800D1EBC();
}

void func_sc04_009_8017CFC8(u8 *arg0) {
    D_sc04_009_80182564[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017D004(u8 *arg0) {
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

void func_sc04_009_8017D078(void) {
    func_8016EE40((s32) &D_sc04_009_80182570, 0x01000000);
}

void func_sc04_009_8017D0A0(void) {
    func_8016EE40((s32) &D_sc04_009_80182574, 0x01000000);
}

void func_sc04_009_8017D0C8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = 0x1C7;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_009_8017D170, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_009_8017D170((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc04_009_8017D170((s32) &D_80126948);
}

void func_sc04_009_8017D170(s32 arg0) {
    D_sc04_009_80182580[AF(arg0, u8, 4)]();
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
extern void func_sc04_009_8017D288();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 func_8012E544();
extern u16 D_801202A0;
extern u8 D_sc04_009_8018279C;
extern s32 func_801290DC();
extern void func_80149350();

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D1AC);

void func_sc04_009_8017D288(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_009_8017D420(s32 arg0) {
    return func_8013B7F4(D_sc04_009_80182588[arg0], 0);
}

void func_sc04_009_8017D450(u8 *arg0) {
    D_sc04_009_8018260C[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D48C(u8 *arg0) {
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, u16, 0x102) = (u16) AF(arg0, u16, 0xE);
    AF(arg0, u16, 0x106) = (u16) AF(arg0, u16, 0xA);
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D4AC);

void func_sc04_009_8017D57C(u8 *arg0) {
    D_sc04_009_8018278C[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D5B8(s32 arg0) {
    func_sc04_009_8017D5E4(arg0);
    func_8002D4C8(0xC5F, 0);
}

void func_sc04_009_8017D5E4(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    func_sc04_009_8017D638();
    temp_v1 = AF(arg0, void *, 0x64);
    AF(temp_v1, u16, 0xFE) = (u16) (AF(temp_v1, u16, 0xFE) - 1);
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D638);

void func_sc04_009_8017D6A8(u8 *arg0) {
    s32 temp_a3;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (func_8001C214(temp_v0, (u32) &D_sc04_009_80194B98), temp_a3 = AF(arg0, u32, 0x20), AF(temp_a3, u32, 4) = (u32) (AF(temp_a3, u32, 4) | 0x01000000), AF(arg0, u16, 0x5C) = 0xC800, AF(arg0, u32 *, 0x58) = &D_sc04_009_801825FC, AF(arg0, s8, 0x75) = 0, func_8012C658(0x286, 0, (u32) arg0), func_8012C658(0x286, 1, (u32) arg0), AF(arg0, u16, 0xFE) = 2, ((func_80029178(0xDD) & 0xFF) != 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8012AD50((s32) arg0);
}

void func_sc04_009_8017D768(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s16, 0xFE) == 0) {
            func_80029124(0xDD, 1);
            func_80178B18((s32) arg0, (s32) &D_sc04_009_8018259C);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_8012C218((s32) arg0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D808);

void func_sc04_009_8017D904(void) {
}

s32 func_sc04_009_8017D90C(void) {
    return 0x55;
}

void func_sc04_009_8017D914(u8 *arg0) {
    D_sc04_009_80182794[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D950(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_009_8017D984(u8 *arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8() != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_009_8017DAD4((s32) arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_009_8017DAD4((s32) arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_009_8017DAD4((s32) arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C((s32) arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_009_8017DAD4(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_009_8018279C;
    switch (t) {
    case 0:
        func_80149350((s32) &D_80126B58, (s32) p, (s32) &sp10);
        func_801290DC(0x56, (s32) &sp10);
        break;
    case 1:
        v = func_8012E544(0x245);
        if (v != 0) {
            FaceHelper(v, (s32) p, (s32) &sp10);
            func_801290DC(0x56, (s32) &sp10);
        }
        break;
    default:
        q = (u8 *)&D_801202A0;
        for (i = 0; i < 0x60; i++, q += 0x10C) {
            if (*(u16 *)q == AF(p, s16, 6)) {
                FaceHelper((s32) q, (s32) p, (s32) &sp10);
                func_801290DC(0x56, (s32) &sp10);
            }
        }
        break;
    }
}

void func_sc04_009_8017DBC0(u8 *arg0) {
    D_sc04_009_801827D0[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017DBFC(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_009_801827C4, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    func_80146E90((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_009_8017DCE0(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017DD4C);

void func_sc04_009_8017DE38(u8 *arg0) {
    D_sc04_009_80194ED0[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017DE74(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_009_80194BC0) != 0) {
        if (!(func_80029178(D_sc04_009_80194C28[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc04_009_8017E520);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_009_8017EE1C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_009_8017DF48(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_009_8017DF70(void) {
}

void func_sc04_009_8017DF78(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc04_009_80194E0C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_009_80194D70[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_009_80194DF8 = 0;
            func_80029124(D_sc04_009_80194D70[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_009_80194DF4 = 2;
        } else {
            D_sc04_009_80194E0C = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_009_80194CEC[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_009_80194DF4 = 0;
            D_sc04_009_80194DF8 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc04_009_80194E20);
    } else {
        var_a1 = &D_sc04_009_80194E8C;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc04_009_8017E0C4(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc04_009_80194C28[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_009_80194C28[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc04_009_8017E2C8() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_009_8017E1E4(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc04_009_8017E210(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_009_8017E220(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_009_8017E230(u8 *arg0) {
    func_80029124(D_sc04_009_80194C28[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_009_8017E270(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_009_8017E2A4(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E2C8);

void func_sc04_009_8017E32C(u8 *arg0) {
    D_sc04_009_80194EF8[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017E368(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_009_80194BF4) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_009_80195704);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_009_8017E3F0(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_009_801954F4);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_009_801955FC);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_009_8017E4B0(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_009_80195704);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E520);

void func_sc04_009_8017E618(u8 *arg0) {
    D_sc04_009_80195024[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017E654(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc04_009_80194F24)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc04_009_8017E950);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc04_009_801954E4);
    }
}

void func_sc04_009_8017E72C(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_009_8017E754(void) {
}

void func_sc04_009_8017E75C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_009_80194FD4);
}

void func_sc04_009_8017E788(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E7C8);

void func_sc04_009_8017E888(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc04_009_8017E8F4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_009_8017E904(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc04_009_8017E914(void) {
    return D_sc04_009_80198114 == 1;
}

void func_sc04_009_8017E92C(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E950);
