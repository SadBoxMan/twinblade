#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_006_8017BE9C(void) {
}

void func_sc04_006_8017BEA4(void) {
}

void func_sc04_006_8017BEAC(void) {
}

void func_sc04_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_006_801836B0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_006_8017D0AC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc04_006_8017D0D4(void);
extern void func_800D1EBC();
extern void (*D_sc04_006_801836C4[])();
extern u8 D_sc04_006_801836D0;
extern void func_8016EE40();
extern u8 D_sc04_006_801836D4;
extern void func_sc04_006_8017D22C();
extern void (*D_sc04_006_801836E0[])();
extern void (*D_sc04_006_80183708[])();
extern void (*D_sc04_006_80183744[])();
extern void (*D_sc04_006_80195020[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_006_8017FF00;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc04_006_80194D10;
extern void func_sc04_006_8017E75C();
extern s32 D_sc04_006_80194D78[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc04_006_80194F44;
extern s32 D_sc04_006_80194F48;
extern s32 D_sc04_006_80194F5C;
extern s32 D_sc04_006_80194F70;
extern s32 D_sc04_006_80194FDC;
extern s32 D_sc04_006_80194EC0[];
extern s32 D_sc04_006_80194E3C[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc04_006_8017E504();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc04_006_80195048[])();
extern u8 D_sc04_006_80194D44;
extern u8 D_sc04_006_801954E8;
extern u8 D_sc04_006_80195708;
extern void func_8002D4C8();
extern u8 D_sc04_006_801954F8;
extern u8 D_sc04_006_80195600;
extern void (*D_sc04_006_801957C4[])();
extern void (*D_sc04_006_8019B250[])();

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_006_801836F0[];
extern s32 func_8013B7F4();
extern void func_80016714();

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
extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_006_80183738;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();
extern s32 func_8012BEE8();
extern u16 D_sc04_006_8019572A;
extern u8 D_sc04_006_8019ADFC;
extern s32 func_8012BCCC();


extern u8 D_sc04_006_8019AE0C;
extern void func_8012B23C();
extern u8 D_sc04_006_8019AED4;
extern void func_sc04_006_8017EF74();
extern void func_80130D48();
extern void func_sc04_006_8017F354();

extern u8 D_sc04_006_801836F8;
extern s32 func_8012C1B8();
extern void func_8001C2C4();
extern u8 D_sc04_006_80195728;
extern u8 D_sc04_006_8019575C;
extern s32 func_80143970();
extern s32 func_8012BD14();


extern s32 D_8011F9C4;
extern u8 D_sc04_006_8018390C;
extern u8 D_sc04_006_801839C0;
extern void func_800291F0();
s32 func_sc04_006_8017D584(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc04_006_801839D4;
extern u8 D_sc04_006_80183A38;
extern s32 func_8017267C();
extern void func_sc04_006_8017D800();
extern void *D_80126B78;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc04_006_8017BEBC(u8 *obj) {
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

void func_sc04_006_8017CD9C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xD0, 1);
    func_800291F0(4, 0xD0);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_006_8018390C;
    D_801274CC = &D_sc04_006_801839C0;
    func_sc04_006_8017D584(0);
}

void func_sc04_006_8017CE0C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xD1, 1);
    func_800291F0(4, 0xD1);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_006_801839D4;
    D_801274CC = &D_sc04_006_80183A38;
    func_sc04_006_8017D584(1);
}

void func_sc04_006_8017CE7C(u8 *arg0) {
    D_sc04_006_801836B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_006_8017CEB8(u8 *arg0) {
    func_sc04_006_8017D0AC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_006_8017CEFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_006_8017CF20(u8 *arg0) {
    func_sc04_006_8017D0D4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_006_8017CF60(u8 *arg0) {
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

void func_sc04_006_8017CFDC(void) {
    func_800D1EBC();
}

void func_sc04_006_8017CFFC(u8 *arg0) {
    D_sc04_006_801836C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_006_8017D038(u8 *arg0) {
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

void func_sc04_006_8017D0AC(void) {
    func_8016EE40((s32) &D_sc04_006_801836D0, 0x01000000);
}

void func_sc04_006_8017D0D4(void) {
    func_8016EE40((s32) &D_sc04_006_801836D4, 0x01000000);
}

void func_sc04_006_8017D0FC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_006_8017D22C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_006_8017D22C((s32) &D_80126948);
}

void func_sc04_006_8017D194(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_006_8017D22C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc04_006_8017D22C((s32) &D_80126948);
}

void func_sc04_006_8017D22C(s32 arg0) {
    D_sc04_006_801836E0[AF(arg0, u8, 4)]();
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
extern s32 func_sc04_006_8017DFC8();
extern s32 func_sc04_006_8017DF0C();
extern void func_80128ED8();
extern s32 func_80132EF4();
extern void func_sc04_006_8017FA68();
extern u16 D_800B99DA;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126940;
extern u8 D_sc04_006_801836EC[];
extern s32 func_80148800();
extern void func_sc04_006_8017D3E4();

extern s32 func_8012E544();
extern u16 D_801202A0;
extern u8 D_sc04_006_80183710;
extern s32 func_801290DC();
extern void func_80149350();

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D268);

void func_sc04_006_8017D344(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_006_801836EC)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc04_006_8017D3E4((s32) arg0, (s32) &v);
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D3E4);

s32 func_sc04_006_8017D584(s32 arg0) {
    return func_8013B7F4(D_sc04_006_801836F0[arg0], 0);
}

void func_sc04_006_8017D5B4(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C2C4(temp_v0);
        AF(arg0, s16, 0x5C) = 0x40;
        AF(arg0, s32 *, 0x58) = &D_sc04_006_801836F8;
        AF(arg0, u8, 0x75) = 2;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

s32 func_sc04_006_8017D638(void) {
    return 0x55;
}

void func_sc04_006_8017D640(u8 *arg0) {
    D_sc04_006_80183708[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017D67C(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_006_8017D6B0(s32 arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8(arg0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_006_8017D800(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_006_8017D800(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_006_8017D800(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_006_8017D800(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_006_8017D800(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_006_8017D800(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_006_8017D800(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_006_80183710;
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

void func_sc04_006_8017D8EC(u8 *arg0) {
    D_sc04_006_80183744[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017D928(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_006_80183738, 0x270, 0x100);
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

void func_sc04_006_8017DA0C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DA78);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DB64);

void func_sc04_006_8017DBC8(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc04_006_8017DFC8(a);
    s = func_sc04_006_8017DF0C(a);
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

void func_sc04_006_8017DD28(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc04_006_8017DFC8(r[0] & 0xFFF);
    cx = func_sc04_006_8017DF0C(r[0] & 0xFFF);
    sy = func_sc04_006_8017DFC8(r[1] & 0xFFF);
    cy = func_sc04_006_8017DF0C(r[1] & 0xFFF);
    sz = func_sc04_006_8017DFC8(r[2] & 0xFFF);
    cz = func_sc04_006_8017DF0C(r[2] & 0xFFF);
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

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DF0C);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DFC8);

void func_sc04_006_8017E074(u8 *arg0) {
    D_sc04_006_80195020[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017E0B0(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_006_80194D10) != 0) {
        if (!(func_80029178(D_sc04_006_80194D78[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc04_006_8017E75C);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_006_8017FF00);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_006_8017E184(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_006_8017E1AC(void) {
}

void func_sc04_006_8017E1B4(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc04_006_80194F5C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_006_80194EC0[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_006_80194F48 = 0;
            func_80029124(D_sc04_006_80194EC0[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_006_80194F44 = 2;
        } else {
            D_sc04_006_80194F5C = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_006_80194E3C[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_006_80194F44 = 0;
            D_sc04_006_80194F48 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc04_006_80194F70);
    } else {
        var_a1 = &D_sc04_006_80194FDC;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc04_006_8017E300(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc04_006_80194D78[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_006_80194D78[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc04_006_8017E504() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_006_8017E420(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc04_006_8017E44C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_006_8017E45C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_006_8017E46C(u8 *arg0) {
    func_80029124(D_sc04_006_80194D78[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_006_8017E4AC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_006_8017E4E0(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017E504);

void func_sc04_006_8017E568(u8 *arg0) {
    D_sc04_006_80195048[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017E5A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_006_80194D44) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_006_80195708);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_006_801954E8);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_006_8017E62C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_006_801954F8);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_006_80195600);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_006_8017E6EC(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_006_80195708);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_006_801954E8);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017E75C);

void func_sc04_006_8017E854(u8 *arg0) {
    D_sc04_006_801957C4[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017E890(s32 arg0) {
    void *temp_a0;

    if (func_8012C354(arg0, (s32) &D_sc04_006_80195728) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc04_006_8019575C;
        AF(arg0, s32, 0xB4) = -0x2021;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SetScript(arg0, (s32) &D_sc04_006_8019ADFC);
        if (AF(arg0, u16, 0x70) & 1) {
            temp_a0 = AF(arg0, void *, 0x20);
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x5C) = 0;
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
            return;
        }
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
    }
}

void func_sc04_006_8017E948(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (func_8012BD14() > 0x18FFF) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 1;
        AF(temp_v1_3, s16, 0x1A) = 1;
        AF(temp_v1_3, s16, 0x18) = 1;
        AF(arg0, s32, 0xCC) = func_80143970((s32) arg0);
        AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    }
}

void func_sc04_006_8017E9EC(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc04_006_8019572A;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc04_006_8017EA74(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc04_006_8019ADFC, arg2);
}

void func_sc04_006_8017EAA0(s32 arg0, s32 arg1) {
    if (func_8012BCCC(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc04_006_8017EAE0(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    SetScript((s32) arg0, (s32) &D_sc04_006_8019AE0C);
    AF(arg0, s32, 0x1C) = 0x17;
}

void func_sc04_006_8017EB20(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc04_006_8017EB54(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012B23C((s32) arg0);
    func_sc04_006_8017EF74((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_006_8019AED4);
    AF(arg0, s32, 0x1C) = 0x23;
    AF(arg0, s32, 0xE0) = 0;
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EBA8);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EC64);

void func_sc04_006_8017ED40(u8 *arg0) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        if (!(rand() & 3)) {
            func_80130D48((s32) arg0);
        }
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(AF(arg0, void *, 0x20), s32, 4) = 0x80000000;
        func_sc04_006_8017F354((s32) arg0);
    }
}

void func_sc04_006_8017EDD8(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc04_006_8017EDEC(void) {
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EDF4);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EE34);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EF74);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EFF4);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F180);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F354);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F43C);

void func_sc04_006_8017F4B4(u8 *arg0) {
    D_sc04_006_8019B250[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F4F0);

void func_sc04_006_8017F5EC(u8 *arg0) {
    u8 *q;
    u8 *o;
    u8 *p;
    s32 t;

    q = AF(arg0, u8 *, 0x64);
    if (AF(arg0, s16, 0x10A) == AF(q, s16, 0x36) && AF(q, s16, 0x76) > 0) {
        if (AF(arg0, s32, 0x1C) % 48 == 0 && AF(q, u8, 0xC1) == 0) {
            AF(q, s16, 0x60) = 0xA;
            AF(q, u16, 0x5C) |= 1;
            AF(q, s16, 0x62) = AF(AF(q, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(q, s16, 0x5E) = 1;
            AF(q, s16, 0x7C) = AF(arg0, s16, 6);
            AF(q, s16, 0x7E) = AF(arg0, s16, 0xA);
            AF(q, s16, 0x80) = AF(arg0, s16, 0xE);
        }
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            o = func_80132EF4(arg0, 0x22);
            if (o != 0) {
                AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xA) -= 0x20;
                AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 3) << 16);
                t = rand();
                AF(o, s16, 0x34) = ((t % 6144 + 0x1000) & ~0xF) | (rand() & 1);
                AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
            }
        }
        p = AF(arg0, u8 *, 0xCC);
        if (p != 0) {
            func_80128ED8(p, arg0 + 0xDC);
            func_sc04_006_8017FA68(arg0);
            AF(p, s16, 8) = AF(arg0, s16, 6);
            AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
            AF(p, s16, 0x18) += 0x15;
            AF(p, s16, 0x1A) += 0x15;
        }
        if (AF(q, u16, 0x5E) == 0x23) {
            AF(arg0, s16, 2)++;
        }
        if (func_8012BEE8(arg0) == 0) {
            return;
        }
    }
    func_sc04_006_8017FAE4(arg0);
}

void func_sc04_006_8017F87C(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc04_006_8017FA68(arg0);
        AF(p, s16, 8) = AF(arg0, s16, 6);
        AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
        AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
        AF(p, s16, 0x18) -= 0x200;
        AF(p, s16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) >= 0) {
            if (D_800B99DA % 5 == 0) {
                o = func_80132EF4(arg0, 0x22);
                if (o != 0) {
                    AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xA) -= 0x20;
                    AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 4) << 16);
                    AF(o, s16, 0x34) = rand() % 6144 + 0x2000;
                    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                }
            }
            return;
        }
    }
    func_sc04_006_8017FAE4(arg0);
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017FA10);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017FA68);

void func_sc04_006_8017FAE4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017FB28);
