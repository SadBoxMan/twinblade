#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_001_8017BE9C(void) {
}

void func_sc01_001_8017BEA4(void) {
}

void func_sc01_001_8017BEAC(void) {
}

void func_sc01_001_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_001_80187294[])();
extern s32 func_800167F0();
extern void (*D_sc01_001_8018729C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_001_8017CFA0(void);
extern u8 D_sc01_001_801872A8;
extern void func_8016EE40();
extern u8 D_sc01_001_801872B4;
extern void func_sc01_001_8017D060();
extern void (*D_sc01_001_801872B8[])();
extern void (*D_sc01_001_80188DE0[])();
extern void (*D_sc01_001_80188DF0[])();
extern void (*D_sc01_001_80188E00[])();
extern void (*D_sc01_001_80188E10[])();
extern void (*D_sc01_001_80188E58[])();

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

extern u8 D_sc01_001_80187338;
extern u8 D_sc01_001_80187758;

extern void func_800167B8();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_80019028();
void func_sc01_001_8017CF78(void);
extern s32 D_sc01_001_801EDA20;
extern s32 func_8013767C();
extern s32 D_sc01_001_801ED9D4;
extern s32 D_sc01_001_801ED9DC;
extern s32 func_80174E9C();
extern s32 func_80174ED4();
extern void (*D_sc01_001_80188DD0[])();
extern void func_sc01_001_8017D2DC();
extern void func_sc01_001_80182C58();
extern s32 D_sc01_001_801EDA10;
extern s32 func_sc01_001_80182B00();
extern s32 D_sc01_001_801EDA14;
extern u8 D_sc01_001_80188050;
extern s32 D_sc01_001_801EDA0C;
extern u8 D_sc01_001_801884A8;
extern s32 D_sc01_001_801EDA1C;
extern s32 D_sc01_001_801EDA18;
extern u8 D_sc01_001_801888F8;
extern s32 D_sc01_001_801ED9F0;
extern void (*D_sc01_001_80188E20[])();
extern void func_sc01_001_801832BC();
extern s32 D_sc01_001_801EDA08;
extern s32 D_sc01_001_801ED9E4;
extern s32 D_sc01_001_801EDA00;
extern void func_80143B6C();
extern u8 D_sc01_001_80188C0C;
extern u8 D_sc01_001_80188BF4;
extern s32 D_sc01_001_801F3040;
extern s32 func_sc01_001_80183128();

extern void func_800CFBCC();
extern u8 D_sc01_001_80183B84;
extern u8 D_sc01_001_80199934;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012B200();


extern s32 D_sc01_001_801F3038;
extern s32 D_sc01_001_801F303C;

extern s32 D_800DE2F8[];

extern u8 D_sc01_001_801EDA44[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc01_001_8017BEBC(u8 *obj) {
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

void func_sc01_001_8017CD9C(u8 *arg0) {
    D_sc01_001_80187294[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_001_8017CDD8(u8 *arg0) {
    func_80019028();
    func_sc01_001_8017CF78();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_001_8017CE24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_001_8017CE48(u8 *arg0) {
    D_sc01_001_8018729C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_001_8017CE84(u8 *arg0) {
    func_sc01_001_8017CFA0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_001_8017CEC4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc01_001_8017CF40(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(0);
        return 1;
    }
    return 0;
}

void func_sc01_001_8017CF78(void) {
    func_8016EE40((s32) &D_sc01_001_801872A8, 0x01000000);
}

void func_sc01_001_8017CFA0(void) {
    func_8016EE40((s32) &D_sc01_001_801872B4, 0x01000000);
}

void func_sc01_001_8017CFC8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_001_8017D060, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_001_8017D060((s32) &D_80126948);
}

void func_sc01_001_8017D060(s32 arg0) {
    D_sc01_001_801872B8[AF(arg0, u8, 4)]();
}

extern u8 D_sc01_001_80188630;
extern u8 D_sc01_001_80188720;
extern u8 D_sc01_001_801E4A54;
extern u8 D_sc01_001_801E4A68;
extern u8 D_sc01_001_801E4F1C;
extern u8 D_sc01_001_801E4F44;
extern u8 D_sc01_001_801E4FC0;
extern u8 D_sc01_001_801E4FD4;
extern u8 D_sc01_001_801E4FE8;
extern u8 D_sc01_001_801E4FFC;
extern u8 D_sc01_001_801E5010;
extern u8 D_sc01_001_801E5024;
extern u8 D_sc01_001_801E5038;
extern u8 D_sc01_001_801E5804;
extern u8 D_sc01_001_801E6208;
extern u8 D_sc01_001_801E652C;
extern u8 D_sc01_001_801E6540;
extern u8 D_sc01_001_801E6554;
extern u8 D_sc01_001_801E6568;
extern u8 D_sc01_001_801E657C;
extern u8 D_sc01_001_801E6590;
extern u8 D_sc01_001_801E65A4;
extern u8 D_sc01_001_801E6A30;

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D09C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D13C);

s32 func_sc01_001_8017D2D4(void) {
    return 0x8F;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D2DC);

s32 func_sc01_001_8017EBA4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8013767C();
    D_sc01_001_801EDA20 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017EBCC);

s32 func_sc01_001_8017EC18(void) {
    return D_sc01_001_801EDA20 != 0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017EC28);

s32 func_sc01_001_8017F1C8(s32 arg0) {
    D_sc01_001_801ED9DC = 0;
    D_sc01_001_801ED9D4 = arg0;
    return func_80174E9C(arg0);
}

s32 func_sc01_001_8017F1F8(void) {
    s32 var_v0;

    var_v0 = D_sc01_001_801ED9D4;
    if (var_v0 != 0) {
        var_v0 = func_80174ED4() << 0x10;
        if (var_v0 != 0) {
            D_sc01_001_801ED9D4 = 0;
        }
    }
    return var_v0;
}

void func_sc01_001_8017F238(u8 *arg0) {
    func_sc01_001_8017D2DC();
    D_sc01_001_80188DD0[AF(arg0, u16, 2)](arg0);
    func_sc01_001_80182C58();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F28C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F328);

void func_sc01_001_8017F7F4(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA10 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_8017F830(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA10 != 0)) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8017F878(u8 *arg0) {
    D_sc01_001_80188DE0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F8B4);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F950);

void func_sc01_001_8017FD70(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA14 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_8017FDAC(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA14 != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_80188050);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8017FE08(u8 *arg0) {
    D_sc01_001_80188DF0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017FE44);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017FEE0);

void func_sc01_001_801803A4(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA0C != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_801803E0(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA0C != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_801884A8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8018043C(u8 *arg0) {
    D_sc01_001_80188E00[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180478);

void func_sc01_001_80180514(u8 *arg0) {
    switch (D_sc01_001_801EDA1C) {
    case 0x0:
        break;
    case 0x1:
        AF(arg0, u16, 2)++;
        break;
    case 0x2:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188720);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4A54);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188630);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4F44);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3737:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FC0);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FD4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x38B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FE8);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x3939:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4FFC);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4040:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5010);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x4141:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5024);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5050:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5038);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5151:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E5804);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5252:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6208);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E652C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x53B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6540);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5454:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6554);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5555:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6568);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5656:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E657C);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57A:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6590);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x57B:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E65A4);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x5858:
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E6A30);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x6:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188630);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4A68);
        AF(arg0, u16, 2) = 3;
        break;
    case 0x7:
        SetScript((s32) arg0, (s32) &D_sc01_001_80188630);
        func_sc01_001_80182B60((s32) arg0, (s32) &D_sc01_001_801E4F1C);
        AF(arg0, u16, 2) = 3;
        break;
    }
    if (D_sc01_001_801EDA1C != 0) {
        D_sc01_001_801EDA1C = 0;
    }
}

void func_sc01_001_80180854(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA1C != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_80180890(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA1C != 0)) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_801808D8(u8 *arg0) {
    D_sc01_001_80188E10[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180914);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801809B0);

void func_sc01_001_80180E54(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA18 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_80180E90(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA18 != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_801888F8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_80180EEC(u8 *arg0) {
    D_sc01_001_80188E20[AF(arg0, u16, 2)]();
    if (((u16) AF(arg0, u16, 2) >= 2U) && (D_sc01_001_801ED9F0 == 1)) {
        func_sc01_001_801832BC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180F64);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181000);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801810A4);

void func_sc01_001_8018150C(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_8018153C(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_80181584(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_001_80187338);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_001_801815D8(u8 *arg0) {
    if (D_sc01_001_801EDA08 != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_801815F8(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_001_80187758);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_001_8018164C(s32 arg0) {
    func_sc01_001_80182B00(arg0);
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript(arg0, (s32) &D_sc01_001_80187758);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801816A4);

void func_sc01_001_80181784(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = D_sc01_001_801EDA00 - 1;
    D_sc01_001_801EDA00 = temp_v0;
    if (temp_v0 == 0) {
        D_sc01_001_801ED9E4 = 1;
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_801817BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xDE) - 1;
    AF(arg0, u16, 0xDE) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_80143B6C((s32) arg0, 1);
        AF(arg0, u16, 0xDE) = 0xAU;
    }
    if ((func_sc01_001_80182B00((s32) arg0) != 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_80181834(void) {
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8018183C);

s32 func_sc01_001_80181A28(void) {
    s32 var_v0;

    var_v0 = 0x4FB0;
    do {
        (*(s32 *)&D_sc01_001_801EDA44[var_v0]) = 0;
        var_v0 -= 0x50;
    } while (var_v0 >= 0);
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181A4C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181E04);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182238);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182284);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801824EC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8018275C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182974);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182A14);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182A48);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182B00);

void func_sc01_001_80182B60(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xCC) = arg1;
}

s32 func_sc01_001_80182B68(s32 arg0) {
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188C0C), 0x280, 0x188);
}

s32 func_sc01_001_80182B9C(s32 arg0) {
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188BF4), 0x200, 0x100);
}

s32 func_sc01_001_80182BD0(s32 arg0) {
    D_sc01_001_801F3040 = 1;
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188C0C), 0x280, 0x188);
}

void func_sc01_001_80182C10(s32 arg0) {
    MoveImage((s32) &D_sc01_001_80188C0C, 0x280, 0x188);
    D_sc01_001_801F3040 = 0;
    D_sc01_001_801F3038 = 0x3C;
    D_sc01_001_801F303C = 0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182C58);

void func_sc01_001_80182D04(s32 arg0) {
    s32 *p;

    switch (arg0) {
    case 0:
        p = D_800DE2F8;
        *p |= 0x01000000;
        D_800DE2F8[1] |= 0x01000000;
        D_800DE2F8[2] |= 0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] |= 0x01000000;
        break;
    case 1:
        D_800DE2F8[0] &= ~0x01000000;
        D_800DE2F8[1] &= ~0x01000000;
        D_800DE2F8[2] &= ~0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] &= ~0x01000000;
        break;
    case 2:
        D_800DE2F8[0] &= ~0x01000000;
        D_800DE2F8[1] |= 0x01000000;
        D_800DE2F8[2] &= ~0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] &= ~0x01000000;
        break;
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182EB0);

void func_sc01_001_80182F58(u8 *arg0) {
    D_sc01_001_80188E58[AF(arg0, u16, 2)]();
}

void func_sc01_001_80182F94(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_001_80199934);
    func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
    SetScript((s32) arg0, (s32) &D_sc01_001_80183B84);
    func_8012B200((s32) arg0);
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183034);

void func_sc01_001_801830A8(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if (func_sc01_001_80183128(arg0, 1, 0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x100);
}

void func_sc01_001_80183120(void) {
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183128);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801831EC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801832BC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801833A0);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801835C8);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183748);
