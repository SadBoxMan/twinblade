#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_003_8017BE9C(void) {
}

void func_sc04_003_8017BEA4(void) {
}

void func_sc04_003_8017BEAC(void) {
}

void func_sc04_003_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_003_80185C18[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_003_8017D0AC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc04_003_8017D0D4(void);
extern void func_800D1EBC();
extern void (*D_sc04_003_80185C2C[])();
extern u8 D_sc04_003_80185C38;
extern void func_8016EE40();
extern u8 D_sc04_003_80185C3C;
extern void func_sc04_003_8017D22C();
extern void (*D_sc04_003_80185C48[])();
extern void (*D_sc04_003_80185CBC[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_003_801824B8;
extern u8 D_sc04_003_80185C70;
extern s32 * func_sc04_003_8017D698();
extern void func_80178CBC();
extern u8 D_sc04_003_80185CA4;
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc04_003_80185CCC[])();
extern void (*D_sc04_003_80185D08[])();
extern void (*D_sc04_003_80190D18[])();
extern void (*D_sc04_003_80190E54[])();
extern void (*D_sc04_003_80198270[])();
extern void (*D_sc04_003_80198284[])();
extern void (*D_sc04_003_80198864[])();
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc04_003_80198554;
extern s32 * func_sc04_003_80182048();
extern s32 D_sc04_003_801985BC[];
extern s32 func_8012C658();
extern void func_80029124();
extern s32 D_sc04_003_80198788;
extern s32 D_sc04_003_8019878C;
extern s32 D_sc04_003_801987A0;
extern s32 D_sc04_003_801987B4;
extern s32 D_sc04_003_80198820;
extern s32 D_sc04_003_80198704[];
extern s32 D_sc04_003_80198680[];
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc04_003_80181DF0();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc04_003_8019888C[])();
extern u8 D_sc04_003_80198588;
extern u8 D_sc04_003_80198D2C;
extern u8 D_sc04_003_80198F4C;
extern void func_8002D4C8();
extern u8 D_sc04_003_80198D3C;
extern u8 D_sc04_003_80198E44;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_003_80185C58[];
extern s32 func_8013B7F4();
extern s32 func_8012AD44();
extern s32 func_80146A6C();
extern void func_8012B14C();
extern s32 func_8012BEE8();
extern s32 func_8012CBF4();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc04_003_8019825C;
extern u8 D_sc04_003_80198268;
extern s32 func_80132EF4();
extern s32 func_8012C1B8();
extern void func_8001C214();
extern u8 D_sc04_003_8019852C;

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
extern u8 D_sc04_003_80185CFC;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();
extern u8 D_sc04_003_80190C84;
extern u16 D_sc04_003_80190C88;
extern void func_sc04_003_8017E4F4();
extern s32 func_sc04_003_8017E108();
extern s32 func_sc04_003_8017DDDC();
extern void (*D_sc04_003_80190E00[])();
extern s32 func_sc04_003_8017FC18();
extern void func_sc04_003_801801EC();
extern void func_801319E0();
extern void func_8012ADE4();
extern void func_80131E00();
extern void func_80131C78();
extern s32 func_8012B6D4();
extern void func_sc04_003_801800D4();
extern s32 func_sc04_003_8017F6F4();
extern s32 func_sc04_003_8017F81C();
extern u8 D_sc04_003_80190E5C;
extern void (*D_sc04_003_80190E6C[])();
extern void func_8012E014();
extern void func_sc04_003_80180FB8();

extern s32 func_8012B23C();
extern void func_8012B21C();

extern u8 D_sc04_003_801976F4;
extern s32 D_sc04_003_8019776C;
extern void func_8012A8B0();
extern s32 D_sc04_003_80197764;
extern u8 D_sc04_003_801978CC;
extern u8 D_sc04_003_80197DE4;
extern u8 D_sc04_003_8019760C;
extern u8 D_sc04_003_80197974;
extern u8 D_sc04_003_80197B6C;
extern void func_80131B14();
extern void func_8012B2CC();
extern void func_8012B178();
extern void func_80130088();
extern s32 func_sc04_003_8017FB48();
extern s32 func_sc04_003_8017F510();
extern s32 func_sc04_003_8017FA94();
extern s32 func_sc04_003_8017FD38();
extern s32 func_sc04_003_8017F218();
extern void func_sc04_003_80180B78();

extern u8 D_sc04_003_801977EC;
s32 func_sc04_003_8017F470(s32 arg0);

extern void func_sc04_003_8017F1AC();

extern u8 D_sc04_003_8019814C;
extern void func_8001C810();
s32 func_sc04_003_80180B44(s32 arg0);
s32 func_sc04_003_80180B10(s32 arg0);
extern s32 func_80143994();

extern s32 D_sc04_003_80190CE4[];
extern s32 D_sc04_003_80190C90[];
extern s32 D_sc04_003_80190CCC[];
extern s32 func_80178B18();

extern s32 D_8011F9C4;
extern u8 D_sc04_003_80185E50;
extern u8 D_sc04_003_80185EF0;
extern void func_800291F0();
s32 func_sc04_003_8017D540(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc04_003_80185F04;
extern u8 D_sc04_003_80185FE0;
extern s32 func_8017267C();
extern void func_sc04_003_8017D8BC();
extern void *D_80126B78;
extern s32 func_8012CBA4();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

void func_sc04_003_8017BEBC(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02[0]];
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

void func_sc04_003_8017CD9C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xCA, 1);
    func_800291F0(4, 0xCA);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_003_80185E50;
    D_801274CC = &D_sc04_003_80185EF0;
    func_sc04_003_8017D540(0);
}

void func_sc04_003_8017CE0C(void) {
    D_8011F9C4 = 1;
    func_80029124(0xCB, 1);
    func_800291F0(4, 0xCB);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_003_80185F04;
    D_801274CC = &D_sc04_003_80185FE0;
    func_sc04_003_8017D540(1);
}

void func_sc04_003_8017CE7C(u8 *arg0) {
    D_sc04_003_80185C18[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_003_8017CEB8(u8 *arg0) {
    func_sc04_003_8017D0AC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_003_8017CEFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_003_8017CF20(u8 *arg0) {
    func_sc04_003_8017D0D4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_003_8017CF60(u8 *arg0) {
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

void func_sc04_003_8017CFDC(void) {
    func_800D1EBC();
}

void func_sc04_003_8017CFFC(u8 *arg0) {
    D_sc04_003_80185C2C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_003_8017D038(u8 *arg0) {
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

void func_sc04_003_8017D0AC(void) {
    func_8016EE40((s32) &D_sc04_003_80185C38, 0x01000000);
}

void func_sc04_003_8017D0D4(void) {
    func_8016EE40((s32) &D_sc04_003_80185C3C, 0x01000000);
}

void func_sc04_003_8017D0FC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_003_8017D22C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_003_8017D22C((s32) &D_80126948);
}

void func_sc04_003_8017D194(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_003_8017D22C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc04_003_8017D22C((s32) &D_80126948);
}

void func_sc04_003_8017D22C(s32 arg0) {
    D_sc04_003_80185C48[AF(arg0, u8, 4)]();
}

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_8012C588();
extern u8 D_sc04_003_801983FC;
extern u8 D_sc04_003_801981D4;
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern void func_8012AD80();
extern u8 D_sc04_003_80198278;


typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126940;
extern u8 D_sc04_003_80185C50[];
extern s32 func_80148800();
extern void func_sc04_003_8017D3A8();
extern u8 D_sc04_003_80185C54[];
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc04_003_8017D268(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_003_80185C50)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc04_003_8017D3A8((s32) arg0, (s32) &v);
}

void func_sc04_003_8017D308(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_003_80185C54)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc04_003_8017D3A8((s32) arg0, (s32) &v);
}

void func_sc04_003_8017D3A8(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_003_8017D540(s32 arg0) {
    return func_8013B7F4(D_sc04_003_80185C58[arg0], 0);
}

s32 func_sc04_003_8017D570(void) {
    return 0x55;
}

void func_sc04_003_8017D578(u8 *arg0) {
    D_sc04_003_80185CBC[AF(arg0, u16, 2)]();
}

void func_sc04_003_8017D5B4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_003_80185C70) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc04_003_801824B8);
        func_801788B8(arg0, (s32) &func_sc04_003_8017D698);
    }
}

void func_sc04_003_8017D618(void) {
}

void func_sc04_003_8017D620(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc04_003_80185CA4);
    AF(arg0, s16, 2) = 3;
}

void func_sc04_003_8017D658(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

extern s32 func_8012E544();
extern u16 D_801202A0;
extern u8 D_sc04_003_80185CD4;
extern s32 func_801290DC();
extern void func_80149350();

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
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern void func_sc04_003_8017E910();

extern void func_8001E094();
extern void func_8001E378();

extern s32 func_8012C194();
extern void func_8001CF00();
extern u8 D_sc04_003_8019B9E0;
extern u16 D_sc04_003_80190C8A;
extern u16 D_sc04_003_80190C7C;
extern u16 D_sc04_003_80190C7E;
extern void func_sc04_003_8017E07C();
extern void func_sc04_003_8017E2E8();
extern void func_80016714();
extern void func_8001C2C4();
extern void func_800233CC();
extern u8 D_sc04_003_80190C78;
extern void func_sc04_003_8017EE38();

extern OtRef D_800A651C[];
typedef union { s32 w; XY s; } UXY;
extern s32 D_sc04_003_80190D28[];
extern void func_8012B0B4();
extern void func_8012E32C();
extern void func_8012E28C();
extern u8 *AllocPrim();

typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern WMtx D_800AE620;
extern void func_80020F34();
extern s32 func_8012BE98();
extern s32 func_8012C51C();
extern s16 D_sc04_003_80190E2C;
extern s16 D_sc04_003_80190E2E;
extern s16 D_sc04_003_80190E30;
extern s32 D_sc04_003_8019321C;
extern s32 D_sc04_003_8019322C;
extern s32 D_sc04_003_8019BA60[];
extern s32 D_sc04_003_8019BA70;
extern s32 D_sc04_003_8019BA7C;
extern void func_80143970();
extern u8 D_sc04_003_80190D54;
extern s32 D_sc04_003_8019BA20[];
extern u8 D_sc04_003_80190D88;
extern s32 func_8012B030();
extern u8 D_801152A8;
extern s32 func_8012B8A4();
extern s32 func_8012F568();
extern s16 D_80126B62;
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern SV8 D_sc04_003_80190E7C;
extern V3 D_sc04_003_80190E84;

extern void func_8002D59C();
extern u8 D_sc04_003_80197FD4;
extern u8 D_sc04_003_80197ABC;
extern void func_sc04_003_8017FF18();

extern s32 func_80153CBC();
extern s32 func_8016F1AC();
extern s32 func_801659A8();
extern s32 func_801659CC();
extern s32 func_sc04_003_8017E278();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;


typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
extern s32 func_80132E6C();
extern s32 func_8012B864();
extern s32 D_sc04_003_8019BA50;
extern s32 D_sc04_003_8019BA40[];
extern s32 func_8012DEB8();
extern s16 D_80126B98;
extern SV8 D_sc04_003_80190E34[];
extern u8 D_sc04_003_80190E4C;
extern void func_801437D8();
s32 func_sc04_003_80180E34(s32 arg0, s32 arg1, u16 arg2);
extern s32 func_sc04_003_80180CC0();
extern s32 func_sc04_003_80180D50();
void func_sc04_003_80181114(s32 arg0, s32 arg1);
extern void func_801439C0();
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_sc04_003_80197EEC;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern void func_80178BF8();
extern s32 func_8012BDBC();
extern s32 func_80135888();
extern void func_80172710();
extern SV8 D_sc04_003_8019887C[];

extern s32 func_8012BD14();

s32 *func_sc04_003_8017D698(u8 *o) {
    s32 *r;

    if (func_8012BD14(AF(o, s32, 0x64)) < 0x1001 && func_8016F1AC() == 0) {
        AF(AF(o, u8 *, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc04_003_8017D6FC(u8 *arg0) {
    D_sc04_003_80185CCC[AF(arg0, u16, 2)]();
}

void func_sc04_003_8017D738(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_003_8017D76C(s32 arg0, s32 arg1) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_003_8017D8BC(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_003_8017D8BC(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_003_8017D8BC(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_003_8017D8BC(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_003_8017D8BC(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_003_8017D8BC(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_003_8017D8BC(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_003_80185CD4;
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

void func_sc04_003_8017D9A8(u8 *arg0) {
    D_sc04_003_80185D08[AF(arg0, u16, 2)]();
}

void func_sc04_003_8017D9E4(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_003_80185CFC, 0x270, 0x100);
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

void func_sc04_003_8017DAC8(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void func_801292C8();
extern void func_800139C8();

void func_sc04_003_8017DB34(u8 *o) {
    u8 *p;
    SV8 v;
    u16 a;

    p = AF(o, u8 *, 0x20);
    a = AF(o, u16, 0x2C) + 0x40;
    AF(o, u16, 0x2C) = a;
    v.z = rsin((s16)a) / 256;
    v.x = v.y = 0;
    func_800139C8(AF(p, s16, 0x12), &v, &v);
    AF(o, s16, 6) = AF(o, s16, 0x12) + v.x;
    AF(o, s16, 0xE) = AF(o, s16, 0x1A) + v.z;
    AF(o, s16, 0xA) -= AF(o, s16, 0x30);
    AF(o, s16, 0x2E) += 0x10;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1A) + AF(o, s16, 0x2E);
    AF(p, u8, 0x24) = AF(p, u8, 0x25) = AF(p, u8, 0x26) = AF(p, u8, 0x26) - 4;
    if (func_80146E98(o) != 0) {
        func_801292C8(o);
    }
}

void func_sc04_003_8017DC20(u8 *o) {
    u8 *p;
    u8 *w;
    s16 idx;

    p = (u8 *)func_8012C194(o);
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CF00(p);
    AF(o, u8 *, 0xCC) = p;
    AF(p, u8 *, 0x20) = &D_sc04_003_8019B9E0;
    AF(p, s16, 0x28) = 0x300;
    AF(p, s16, 0x2A) = 0x110;
    AF(p, u8, 0x27) = 0x78;
    AF(p, s16, 0x10) = 0x400;
    AF(p, u16, 8) = AF(o, u16, 6);
    AF(p, u16, 0xA) = AF(o, u16, 0xA);
    AF(p, u16, 0xC) = AF(o, u16, 0xE);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0;
    AF(p, u16, 0x2C) = 0xC004;
    if (AF(o, s16, 0x70) & 0x8000) {
        D_sc04_003_80190C88 = 0x10;
        D_sc04_003_80190C8A = 0x20;
        AF(p, s16, 0x14) = 0x400;
    } else {
        idx = AF(AF(o, u8 *, 0xDC), u16, 0xA) - 9;
        AF(o, s16, 0x108) = idx;
        if ((u8)func_80029178(D_sc04_003_80190C90[idx]) != 0) {
            func_sc04_003_8017E07C(o, 0);
            func_sc04_003_8017E2E8();
            func_8012CAE4(o);
            return;
        }
        w = (u8 *)func_8012C1B8();
        AF(o, u8 *, 0x20) = w;
        if (w == 0) {
            func_8012CAE4(o);
            func_80016714(p, 0x38);
            return;
        }
        func_8001C2C4(w);
        D_sc04_003_80190C7C = 0x20;
        D_sc04_003_80190C7E = 0x20;
        AF(p, s32, 4) |= 0x40000000;
        func_8012C658(0x1F9, AF(o, s16, 0x70) | 0x8000, o);
        func_800233CC(&D_sc04_003_8019B9E0, 0x80);
    }
    func_8012AD50(o);
}

s32 func_sc04_003_8017DDDC(s32 arg0) {
    AF(arg0, s16, 0x10A) = 0;
    func_8012AD44(arg0, 2);
    func_80029124(D_sc04_003_80190C90[AF(arg0, s16, 0x108)], 1);
    D_sc04_003_80190CE4[0] = D_sc04_003_80190CCC[AF(arg0, s16, 0x108)];
    return func_80178B18(arg0, (s32) (D_sc04_003_80190CE4 - 0x3));
}

void func_sc04_003_8017DE58(u8 *o) {
    u8 *d = &D_sc04_003_80190C78;
    u8 *p = AF(o, u8 *, 0xCC);

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x10A) != 0) {
            AF(o, u16, 0x34)++;
            AF(o, s32, 0x1C) = 0x30;
            func_8002D4C8(0x7F5, 0);
        }
        break;
    case 1:
        if (AF(p, s16, 0x18) < 0x800) {
            AF(p, s16, 0x18) += 0x80;
            AF(p, s16, 0x1A) += 0x80;
        } else {
            func_sc04_003_8017EE38(o);
            if (func_8012BEE8(o) != 0) {
                AF(o, u16, 0x34)++;
                func_sc04_003_8017E07C(o, 0);
            } else if (AF(o, s32, 0x1C) == 0x20) {
                func_8002D4C8(0x7F6, 0);
            }
        }
        break;
    case 2:
        if (AF(p, s16, 0x18) <= 0) {
            func_sc04_003_8017E00C(o);
            return;
        }
        AF(p, s16, 0x18) -= 0x80;
        AF(p, s16, 0x1A) -= 0x80;
        break;
    }
    AF(p, u16, 0x14) += 4;
    if (--AF(d, s16, 4) < 0x11) {
        AF(d, s16, 4) = 0x30;
    }
    func_sc04_003_8017E4F4(p, d);
    func_8012B2CC(o);
    func_80178970(o);
}

s32 func_sc04_003_8017E00C(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

s32 func_sc04_003_8017E02C(u8 *arg0) {
    return AF(arg0, u16, 2) == 3;
}

void func_sc04_003_8017E040(u8 *arg0) {
    D_sc04_003_80190D18[AF(arg0, u16, 2)]();
}

void func_sc04_003_8017E07C(u8 *o, s32 arg1) {
    SpawnDef d;

    if (o != 0 && AF(o, u16, 0) != 0) {
        d.x = AF(o, u16, 6);
        d.y = AF(o, u16, 0xA);
        d.z = AF(o, u16, 0xE);
    } else {
        d.x = d.y = d.z = 0;
    }
    d.kind = 0x8E;
    d.unk8 = d.flags = d.unkE = 0;
    d.unk10 = AF(o, s32, 0xDC);
    d.unkC = arg1;
    func_8012C51C(&d, o);
}

s32 func_sc04_003_8017E108(u8 *o) {
    s32 s;
    switch (AF(o, s16, 0x108)) {
    case 0:
        if ((u16) func_sc04_003_8017E278() != 0) {
            return 0;
        }
        if (func_8016F1AC() == 0) {
            return 1;
        }
        break;
    case 1:
        s = func_80153CBC();
        if (AF(o, s16, 0x106) != 0) {
            break;
        }
        if ((u16) func_sc04_003_8017E278() == 0 && s == 0) {
            if (func_8016F1AC() == 0) {
                return 1;
            }
        }
        if (s != 0) {
            AF(o, u16, 0x106)++;
            func_8002D4C8(0xB6B, 0);
        }
        return 0;
    case 2:
        if (AF(o, s16, 0x106) != 0) {
            if (AF(o, s32, 0x1C) == 0) {
                break;
            }
            if (--AF(o, s32, 0x1C) == 0) {
                break;
            }
            if (func_801659A8() <= 0) {
                return 0;
            }
            AF(o, s32, 0x1C)++;
            if (func_8016F1AC() == 0) {
                return 1;
            }
            break;
        }
        if (func_801659CC() != 0) {
            AF(o, s32, 0x1C) = 0x80;
            AF(o, u16, 0x106)++;
        }
        break;
    }
    return 0;
}

s32 func_sc04_003_8017E278(void) {
    u8 *p;
    s32 i;
    u16 n;

    n = 0;
    p = (u8 *) &D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        switch (AF(p, u16, 0)) {
        case 0x1FC:
        case 0x1DC:
        case 0x210:
        case 0x219:
            n++;
            break;
        }
    }
    return n;
}

void func_sc04_003_8017E2E8(void) {
    u8 *p;
    s32 i;

    p = (u8 *) &D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        switch (AF(p, u16, 0)) {
        case 0x1FC:
        case 0x1DC:
        case 0x210:
        case 0x219:
            func_8012C218(p);
            break;
        }
    }
}

void func_sc04_003_8017E39C(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    u16 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_a0 = AF(arg0, void *, 0x64);
        if (AF(temp_a0, u16, 2) == 3) {
            func_8012C218((s32) arg0, arg1);
            return;
        }
        temp_a0_2 = AF(temp_a0, void *, 0xCC);
        temp_v0 = AF(temp_a0_2, s16, 0x18);
        if (temp_v0 != 0) {
            temp_s0 = AF(arg0, void *, 0xCC);
            AF(temp_s0, s16, 0x18) = temp_v0;
            AF(temp_s0, u16, 0x1A) = (u16) AF(temp_a0_2, u16, 0x1A);
            func_sc04_003_8017E4F4((s32) temp_s0, (s32) &D_sc04_003_80190C84);
            AF(temp_s0, u16, 0x14) = (u16) (AF(temp_s0, u16, 0x14) - 4);
            temp_v0_2 = D_sc04_003_80190C88 + 1;
            D_sc04_003_80190C88 = temp_v0_2;
            if ((s16) temp_v0_2 >= 0x30) {
                D_sc04_003_80190C88 = 0x10;
            }
        }
    } else if (func_sc04_003_8017E108((s32) arg0) != 0) {
        func_sc04_003_8017DDDC((s32) arg0);
    }
}

void func_sc04_003_8017E498(u8 *arg0, s32 arg1) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0, arg1) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    }
}

void func_sc04_003_8017E4F4(u8 *arg0, s32 arg1) {
    SV pos;
    SV v[3];
    struct { s32 scr[13]; s32 zs[6]; } s;
    s32 flag;
    s32 z;
    s32 flag2;
    u32 *ot;
    Pts80182FD4 *p;
    s32 i;
    s32 d;
    u16 t;

    ot = g_WorldOtTable[D_800B9A02[0]];
    p = AF(arg0, Pts80182FD4 *, 0x20);
    if (p == 0) {
        return;
    }
    if (AF(arg0, s32, 0x34) != 0) {
        func_8001E094();
    } else {
        func_8001E378(arg0);
    }
    pos.vx = AF(arg0, s16, 0x2E);
    pos.vy = AF(arg0, s16, 0x30);
    pos.vz = AF(arg0, s16, 0x32);
    gte_ldv0(&pos);
    gte_rtps();
    gte_stsxy(&s.scr[0]);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (flag & ~0x1000) {
        return;
    }
    d = z + 1;
    t = AF(arg0, u16, 0x2C);
    if (t & 0xC000) {
        if ((t & 0xC000) == 0xC000) {
            d -= t & 0xFFF;
            if (d < 0) {
                d = 0;
            }
        } else {
            d += t & 0xFFF;
        }
    }
    if (d >= 0x1000) {
        return;
    }
    if (AF(arg0, s16, 0x1E) & 0x8000) {
        for (i = 0; i < 12; i += 6) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            v[1].vx = pos.vx + p->pt[i + 2].x;
            v[1].vy = pos.vy + p->pt[i + 2].y;
            v[1].vz = pos.vz;
            v[2].vx = pos.vx + p->pt[i + 4].x;
            v[2].vy = pos.vy + p->pt[i + 4].y;
            v[2].vz = pos.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.scr[i + 1], &s.scr[i + 3], &s.scr[i + 5]);
        }
        for (i = 1; i < 12; i += 2) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            gte_ldv0(&v[0]);
            gte_rtps();
            gte_stsxy(&s.scr[i + 1]);
            gte_stflg(&flag2);
            gte_stszotz(&z);
            *(s.zs + (i >> 1)) = z + 1;
        }
        func_sc04_003_8017E910(arg0, arg1, s.scr, ot);
    } else {
        for (i = 0; i < 12; i += 3) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            v[1].vx = pos.vx + p->pt[i + 1].x;
            v[1].vy = pos.vy + p->pt[i + 1].y;
            v[1].vz = pos.vz;
            v[2].vx = pos.vx + p->pt[i + 2].x;
            v[2].vy = pos.vy + p->pt[i + 2].y;
            v[2].vz = pos.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.scr[i + 1], &s.scr[i + 2], &s.scr[i + 3]);
        }
        func_sc04_003_8017E910(arg0, arg1, s.scr, &ot[d]);
    }
}

void func_sc04_003_8017E910(u8 *o, u8 *s, u8 *v, u32 *ot) {
    PFT4 *p;
    PMODE *m;
    FANUV *uv;
    u32 fl;
    s32 tp, sh, i;
    u16 x, y;
    s32 code, abr, tpage, clut, c, tb;
    u32 ty;
    u16 u;
    u8 u0, v0;
    u16 vv;
    s32 t;
    u16 u1, v1;
    u16 sflag;

    p = (PFT4 *)g_PrimNext;
    sflag = *(u16 *)(o + 0x1E) & 0x8000;
    fl = *(u32 *)(o + 4);
    tp = (fl >> 24) & 3;
    sh = 2 - tp;
    x = *(u16 *)(o + 0x28) + (*(s16 *)(s + 4) >> sh);
    y = *(u16 *)(o + 0x2A) + *(u16 *)(s + 6);
    uv = *(FANUV **)(o + 0x20);
    g_PrimNext = (u8 *)p + 0xF0;
    if (fl & 0x40000000) {
        code = 0x2E;
        abr = (fl >> 28) & 3;
    } else {
        code = 0x2C;
        abr = 1;
    }
    tb = (tp << 7) | (abr << 5);
    ty = y & 0x100;
    tpage = tb | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    c = (o[0x27] + 0x100) << 6;
    if (o[0x27] < 0xE0) {
        clut = c | 0x16;
    } else {
        clut = c | 0x10;
    }
    u = ((x - ((tpage & 0xF) << 6)) << sh) + (*(u16 *)(s + 4) & ((1 << sh) - 1));
    u1 = u + s[2] - 1;
    if (u1 > 0xFF) u1 = 0xFF;
    t = y;
    if (tpage & 0x10) {
        vv = t - 0x100;
    } else {
        vv = t;
    }
    v1 = vv + s[3] - 1;
    if (v1 > 0xFF) v1 = 0xFF;
    i = 1;
    u0 = u;
    v0 = vv;
    for (; i < 13; i += 2, p++) {
        ((u8 *)p)[3] = 9;
        p->code = code;
        p->tpage = tpage;
        p->u2 = u;
        p->v2 = vv;
        p->u0 = (uv->t[i - 1].x >> 3) + u0;
        p->v0 = (uv->t[i - 1].y >> 3) + v0;
        p->u1 = (uv->t[i].x >> 3) + u0;
        p->v1 = (uv->t[i].y >> 3) + v0;
        p->u3 = (uv->t[i + 1].x >> 3) + u0;
        p->v3 = (uv->t[i + 1].y >> 3) + v0;
        p->clut = clut;
        p->r0 = o[0x24];
        p->g0 = o[0x25];
        p->b0 = o[0x26];
        p->x0 = *(s16 *)(v + i * 4);
        p->y0 = *(s16 *)(v + i * 4 + 2);
        p->x1 = *(s16 *)(v + i * 4 + 4);
        p->y1 = *(s16 *)(v + i * 4 + 6);
        p->x2 = *(s16 *)(v + 0);
        p->y2 = *(s16 *)(v + 2);
        p->x3 = *(s16 *)(v + i * 4 + 8);
        p->y3 = *(s16 *)(v + i * 4 + 10);
        if (sflag) {
            addPrim(&ot[*(s32 *)(v + (i >> 1) * 4 + 0x34)], p);
        } else {
            addPrim(ot, p);
        }
    }
    p[-1].x3 = *(s16 *)(v + 4);
    p[-1].y3 = *(s16 *)(v + 6);
    p[-1].u3 = u + (uv->t[0].x >> 3);
    p[-1].v3 = (uv->t[0].y >> 3) + vv;
    if (fl & 0x40000000) {
        m = (PMODE *)p;
        if (sflag) {
            g_PrimNext += 0x30;
            for (i = 0; i < 6; i++, m++) {
                ((u8 *)m)[3] = 1;
                m->code = (abr << 5) | 0xE100000A;
                addPrim(&ot[((s32 *)(v + i * 4))[13]], m);
            }
        } else {
            m->code = (abr << 5) | 0xE100000A;
            g_PrimNext += 8;
            ((u8 *)m)[3] = 1;
            addPrim(ot, m);
        }
    }
}

void func_sc04_003_8017EE30(void) {
}

void func_sc04_003_8017EE38(u8 *arg0) {
    SV8 v;

    v.x = AF(arg0, s16, 6);
    v.y = AF(arg0, s16, 0xA);
    v.z = AF(arg0, s16, 0xE);
    func_sc04_003_8017EE80((u8 *)&v, AF(arg0, s32, 0x1C));
}

void func_sc04_003_8017EE80(u8 *o, s32 n) {
    SV8 v[4];
    SV8 w;
    s32 pp;
    s32 flag;
    UXY x;
    s32 r;
    s32 h;
    s32 a;
    s32 b;
    s32 i;
    s32 z;
    u8 *p;

    if ((u32)(n - 1) >= 0x1D) {
        return;
    }
    i = 0;
    func_8012E32C();
    r = rsin((n << 11) / 30);
    h = (r << 8) >> 12;
    a = n << 4;
    for (; i < 6; i++, a = b) {
        func_8012B0B4(&w, a, 0x20);
        x = *(UXY *)&w;
        b = a + 0x2AA;
        v[0].x = AF(o, u16, 0) + x.s.x;
        v[0].y = AF(o, u16, 2);
        v[0].z = AF(o, u16, 4) + x.s.y;
        v[2].x = AF(o, u16, 0) + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[2].y = AF(o, u16, 2) - h;
        v[2].z = AF(o, u16, 4) + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        func_8012B0B4(&w, b, 0x20);
        x = *(UXY *)&w;
        v[1].x = AF(o, u16, 0) + x.s.x;
        v[1].y = AF(o, u16, 2);
        v[1].z = AF(o, u16, 4) + x.s.y;
        v[3].x = AF(o, u16, 0) + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[3].y = AF(o, u16, 2) - h;
        v[3].z = AF(o, u16, 4) + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        p = AllocPrim(0x24);
        AF(p, s32, 4) = D_sc04_003_80190D28[i];
        AF(p, s32, 0xC) = D_sc04_003_80190D28[i + 1];
        p[7] = 0x3A;
        AF(p, s32, 0x1C) = 0;
        AF(p, s32, 0x14) = 0;
        AF(p, u32, 0) = 0x08000000;
        z = RotTransPers(&v[0], p + 8, &pp, &flag);
        RotTransPers(&v[1], p + 0x10, &pp, &flag);
        RotTransPers(&v[2], p + 0x18, &pp, &flag);
        RotTransPers(&v[3], p + 0x20, &pp, &flag);
        AddPrim(D_800A651C[D_800B9A02[0]].ot + z, p);
        func_8012E28C(z, 1);
    }
}

s32 func_sc04_003_8017F150(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_003_801976F4);
    AF(arg0, s32, 0x94) = 0xF;
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_003_8019776C;
    func_8012B23C(arg0);
    return func_8012AD44(arg0, 2);
}

void func_sc04_003_8017F1AC(s32 arg0) {
    if (AF(arg0, u16, 0x86) & 1) {
        func_sc04_003_8017F470(arg0);
        return;
    }
    func_8012A8B0(arg0, (s32) &D_sc04_003_801977EC);
    AF(arg0, s32, 0x1C) = 0x60;
    func_8012AD44(arg0, 3);
}

s32 func_sc04_003_8017F218(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_003_80197764;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) arg1;
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0x98) = 0;
    return func_8012AD44(arg0, 4);
}

void func_sc04_003_8017F274(u8 *o) {
    SV8 v;
    s32 sp18;
    s32 r;

    r = 0;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_8012A8B0(o, &D_sc04_003_80197FD4);
            func_8012B2CC(o);
            func_8012B178(o, -0x80000);
            AF(o, s32, 0x14) = -0xC0000;
        }
        func_sc04_003_801800D4(o, 0);
        break;
    case 1:
        r = func_8012CBF4(o);
        if (AF(o, s16, 0xA) > 0) {
            func_8012C218(o);
            return;
        }
        if (func_sc04_003_8017FC18(o) != 0) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            AF(o, s32, 0x18) = 0;
        }
        if (r & 0x2000) {
            func_8012B23C(o);
            func_8012B2CC(o);
            func_8012B178(o, -0xE0000);
            func_8012A8B0(o, &D_sc04_003_80197ABC);
            AF(o, s32, 0x1C) = 0x30;
            AF(o, u16, 0x34)++;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            func_8002D59C(0x7E5, 0, AF(o, u16, 0x36));
        }
        func_sc04_003_801800D4(o, 0);
        break;
    case 2:
        if (func_sc04_003_8017FA94(o, -0xE0000, &sp18) == 1) {
            func_8012ADE4(o);
            r = 1;
        } else if (func_8012BEE8(o) != 0) {
            r = 1;
        }
        func_sc04_003_801800D4(o, 2);
        if (r != 0) {
            func_sc04_003_8017F4D4(o);
            func_8002D59C(4, 0x7E5, AF(o, u16, 0x36));
        }
        break;
    }
}

s32 func_sc04_003_8017F470(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_003_801978CC);
    AF(arg0, s16, 0x102) = 8;
    AF(arg0, s16, 0x104) = 3;
    AF(arg0, s16, 0x106) = (s16) ((rand() & 0x20) - 0x10);
    AF(arg0, s32, 0x1C) = 0x60;
    return func_8012AD44(arg0, 5);
}

s32 func_sc04_003_8017F4D4(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_003_80197DE4);
    return func_8012AD44(arg0, 7);
}

s32 func_sc04_003_8017F510(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = (s16) (AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x200);
    if (AF(arg0, u16, 2) != 1) {
        func_8012A8B0(arg0, (s32) &D_sc04_003_8019760C);
    }
    return func_8012AD44(arg0, 8);
}

void func_sc04_003_8017F574(u8 *o) {
    s32 sp10;
    u8 *p;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xFE) == AF(p, s16, 0x12)) {
        if (func_sc04_003_8017FB48(o, &sp10) == 1) {
            if ((AF(o, u16, 0x86) & 1) || (rand() & 1)) {
                if (AF(o, u16, 0x86) & 1) {
                    func_sc04_003_8017F470((s32)o);
                } else {
                    func_8012A8B0(o, &D_sc04_003_801977EC);
                    AF(o, s32, 0x1C) = 0x60;
                    func_8012AD44(o, 3);
                }
            } else {
                func_8012A8B0(o, &D_sc04_003_801976F4);
                AF(o, s32, 0x94) = 0xF;
                AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_003_8019776C;
                func_8012B23C(o);
                func_8012AD44(o, 2);
            }
        } else {
            AF(o, u16, 0xFE) += 0x200;
        }
        AF(o, u16, 0x100)++;
    } else {
        func_sc04_003_8017FF18(AF(o, s16, 0xFE), p + 0x12, 0x20);
    }
}

s32 func_sc04_003_8017F6B0(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_003_8019760C);
    AF(arg0, s32, 0x1C) = 0x40;
    return func_8012AD44(arg0, 9);
}

s32 func_sc04_003_8017F6F4(u8 *o) {
    SV8 v;
    SV8 s;
    WMtx m;
    s32 flag;
    u8 *r;

    r = (u8 *)func_8012C588(0x239, o);
    if (r != 0) {
        m = D_800AE620;
        s.x = s.y = s.z = 0x1800;
        RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
        func_80020F34(&m, &s);
        SetRotMatrix(&m);
        SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
        v.x = 0;
        v.y = -0x200;
        v.z = -0x48;
        RotTransSV(&v, &v, &flag);
        AF(r, u16, 6) = v.x;
        AF(r, u16, 0xA) = v.y;
        AF(r, u16, 0xE) = v.z;
        AF(o, u8 *, 0xCC) = r;
    }
    return (s32)r;
}

s32 func_sc04_003_8017F81C(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_003_80197974);
    return func_8012AD44(arg0, 0xA);
}

void func_sc04_003_8017F858(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    D_sc04_003_80190E00[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) == 0x1FC) && (AF(arg0, s16, 0xAA) == 0)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 0x1800;
        AF(temp_v1_2, s16, 0x1A) = 0x1800;
        AF(temp_v1_2, s16, 0x18) = 0x1800;
    }
}

void func_sc04_003_8017F8EC(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u8, 0xC2) == 2) {
        AF(arg0, s16, 0x52) = -0x18;
    }
    temp_v0 = func_sc04_003_8017FC18((s32) arg0);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 4) = (s32) AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = (s32) AF(arg0, s32, 0x40);
        func_sc04_003_801801EC((s32) arg0, temp_v0);
    }
}

void func_sc04_003_8017F954(u8 *arg0) {
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B178((s32) arg0, 0x80000);
    func_8012A8B0((s32) arg0, (s32) &D_sc04_003_80197B6C);
    if (AF(arg0, s16, 0x76) <= 0) {
        func_80130088((s32) arg0);
        func_8002AC00(0x13);
    }
}

void func_sc04_003_8017F9D4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012CBF4(arg0);
    if ((temp_v0 & 0xFF) == 0x1A) {
        func_801319E0(arg0);
        return;
    }
    temp_v0_2 = func_sc04_003_8017FC18(arg0);
    if (temp_v0_2 != 0) {
        func_sc04_003_801801EC(arg0, temp_v0_2);
        goto block_5;
    }
    if (temp_v0 != 0x2000) {
block_5:
        func_8012ADE4(arg0);
    }
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0x76) <= 0) {
            func_80131E00(arg0, 6);
            return;
        }
        func_80131C78(arg0);
    }
}

s32 func_sc04_003_8017FA94(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;

    func_8012B2CC(arg0, arg1);
    func_8012B178(arg0, arg1);
    temp_s0 = func_8012CBA4(arg0);
    temp_v0 = func_sc04_003_8017FC18(arg0);
    AF(arg2, s32, 0) = temp_v0;
    if ((temp_v0 != 0) || (temp_s0 != 0x2000)) {
        func_8012ADE4(arg0);
        AF(arg0, s32, 0x1C) = 8;
        func_8012A8B0(arg0, (s32) &D_sc04_003_8019760C);
        func_8012B23C(arg0);
        func_8012AD44(arg0, 1);
        return 1;
    }
    return 0;
}

s32 func_sc04_003_8017FB48(u8 *o, s32 *res) {
    s32 sv[3];
    s32 r;
    u8 *p;

    sv[0] = AF(o, s32, 0x10);
    sv[1] = AF(o, s32, 0x14);
    sv[2] = AF(o, s32, 0x18);
    func_8012B2CC(o);
    func_8012B178(o, -0xF0000);
    r = func_8012CBA4(o);
    AF(o, s32, 0x10) = sv[0];
    AF(o, s32, 0x14) = sv[1];
    AF(o, s32, 0x18) = sv[2];
    *res = func_sc04_003_8017FC18(o);
    func_8012ADE4(o);
    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x2C) &= 0xFFFE;
    if (*res == 0) {
        return r == 0x2000;
    }
    return 0;
}

s32 func_sc04_003_8017FC18(u8 *o) {
    u8 *p;
    s32 i;
    s16 d;
    s32 e;
    SV8 v;

    p = (u8 *) &D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (p == o) {
            continue;
        }
        switch (AF(p, u16, 0)) {
        case 0x1FC:
            v.x = AF(p, u16, 6);
            v.y = 0;
            v.z = AF(p, u16, 0xE);
            if (func_8012BE98(o, &v) < 0x900) {
                return (s32) p;
            }
            break;
        case 0x239:
            d = AF(AF(p, u8 *, 0x20), s16, 0x18) * 9 >> 9;
            e = AF(p, s16, 6) - AF(o, s16, 6);
            if (e < 0) e = -e;
            if (d < e) break;
            e = AF(p, s16, 0xE) - AF(o, s16, 0xE);
            if (e < 0) e = -e;
            if (d >= e) {
                return (s32) p;
            }
            break;
        }
    }
    return 0;
}

s32 func_sc04_003_8017FD38(void *arg0) {
    s16 a;
    s16 d;

    if (func_80132E6C(arg0) > 0x23FFF) {
        return 0;
    }
    a = func_8012B864(arg0);
    d = a - (AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF);
    if (d < 0) {
        d = -d;
    }
    if (d < 0x180) {
        if (a == 0) {
            a++;
        }
        return a;
    }
    return 0;
}

void func_sc04_003_8017FDD4(u8 *o) {
    s32 i;

    if (!(AF(o, u16, 0x86) & 1) && AF(o, s16, 0x76) < 0xB5 && func_8012C588(0x22D, o) != 0) {
        AF(o, u16, 0x86) |= 1;
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_003_8019BA40, s32, i) = AF(&D_sc04_003_8019321C, s32, i);
        }
        D_sc04_003_8019BA40[0] = 0x1000000;
        D_sc04_003_8019BA50 = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_003_8019BA40;
        func_8002D4C8(0x83B, 0);
    }
}

void func_sc04_003_8017FE90(u8 *o) {
    AF(o, u16, 0x5C) = 0x8A10;
    AF(o, s16, 0x52) = 0;
    if (AF(o, s32, 0xC4) & 4) {
        func_8012A8B0(o, &D_sc04_003_80197EEC);
        func_8012AD44(o, 6);
    } else {
        AF(o, s32, 0x1C) = 8;
        func_8012A8B0(o, &D_sc04_003_8019760C);
        func_8012B23C(o);
        func_8012AD44(o, 1);
    }
}

void func_sc04_003_8017FF18(s32 a, u16 *p, s32 n) {
    s32 v;
    s16 d;
    s16 m;

    v = (a - *p) & 0xFFF;
    d = v >= 0x800 ? v | 0xF000 : v;
    if (d < 0) {
        m = -d;
    } else {
        m = d;
    }
    if (m > (u16)n) {
        if (d < 0) {
            *p -= n;
        } else {
            *p += n;
        }
    } else {
        *p = a;
    }
}

void func_sc04_003_8017FF9C(u8 *o) {
    SpawnDef d;
    V3 a;
    V3 b;
    u8 *r;

    a.x = D_sc04_003_80190E2C << 8;
    a.y = D_sc04_003_80190E2E << 8;
    a.z = D_sc04_003_80190E30 << 8;
    ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &a, &b);
    b.x += AF(o, s16, 6) << 8;
    b.y += AF(o, s16, 0xA) << 8;
    b.z += AF(o, s16, 0xE) << 8;
    d.x = b.x / 256;
    d.y = b.y / 256;
    d.z = b.z / 256;
    d.kind = 0x20;
    d.unk8 = 2;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    r = (u8 *)func_8012C51C(&d, o);
    if (r != 0) {
        AF(AF(r, u8 *, 0x20), u16, 0x12) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        func_8012B2CC(r);
        func_8002D4C8(0x83A, 0);
    }
}

void func_sc04_003_801800D4(void *arg0, s32 arg1) {
    SV8 v;

    if (!(AF(arg0, u16, 0x86) & 1)) {
        v.x = D_sc04_003_80190E34[arg1].x;
        v.y = D_sc04_003_80190E34[arg1].y;
        v.z = D_sc04_003_80190E34[arg1].z - 20;
        if (func_8012DEB8(arg0, &D_sc04_003_80190E34[arg1], &v)) {
            D_80126B98 = 20;
        }
    }
}

void func_sc04_003_80180160(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x853, 0, arg2);
    func_8002AC00(0x13);
}

void func_sc04_003_8018018C(u8 *o) {
    SV8 v;

    if (AF(o, u16, 0) == 0x1FC) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA) - 0x20;
        v.z = AF(o, s16, 0xE);
        v.pad = 0x1800;
        func_801437D8(o + 0x102, &v, &D_sc04_003_80190E4C, 0);
    }
}

void func_sc04_003_801801EC(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0xA;
        AF(arg1, s16, 0x62) = func_8012B6D4(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_003_8018025C(u8 *o) {
    s32 r;
    s32 i;
    s32 k;

    if ((AF(o, s32, 0x20) = func_8012C1B8(o)) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), &D_sc04_003_8019321C);
    k = 0x1000000;
    for (i = 0x18; i >= 0; i -= 4) {
        *(s32 *)((u8 *)D_sc04_003_8019BA60 + i) = k;
    }
    D_sc04_003_8019BA7C = 0;
    D_sc04_003_8019BA60[0] = D_sc04_003_8019321C;
    D_sc04_003_8019BA70 = D_sc04_003_8019322C;
    AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_003_8019BA60;
    AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_003_80197764;
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    func_8012B23C(o);
    func_8012B2CC(o);
    func_8012B178(o, 0x80000);
    AF(o, s32, 0x14) = 0xFFE40000;
    AF(o, u16, 0xFE) = AF(o, u16, 0xA) + 0x30;
    AF(o, u16, 2)++;
    r = func_80132EF4(o, 0x23);
    if (r != 0) {
        AF(r, u16, 0x34) = 0x2001;
        AF(r, u16, 0xA) -= 0x38;
    }
}

void func_sc04_003_80180394(u8 *arg0) {
    D_sc04_003_80190E54[AF(arg0, u16, 2)]();
}

void func_sc04_003_801803D0(u8 *o) {
    s32 i;

    if (func_8012C354(o, &D_sc04_003_80190D54) != 0) {
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_003_8019BA20, s32, i) = AF(&D_sc04_003_8019321C, s32, i);
        }
        D_sc04_003_8019BA20[5] = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_003_8019BA20;
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x801;
        AF(o, u8 *, 0xBC) = &D_sc04_003_80190D88;
        func_80143970(o);
        func_8012B030(o);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        if (AF(o, s16, 0x70) != 0) {
            func_sc04_003_8017F6B0(o);
        } else if (rand() & 1) {
            func_sc04_003_8017F150(o);
        } else {
            func_sc04_003_8017F1AC(o);
        }
    }
}

void func_sc04_003_801804EC(s32 arg0, s32 arg1) {
    s32 sp10;

    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc04_003_8017FB48(arg0, (s32) &sp10);
        func_sc04_003_8017F510(arg0);
    }
    func_sc04_003_801800D4(arg0, 0);
}

void func_sc04_003_80180538(u8 *arg0, s32 arg1) {
    s32 sp10;
    s16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((AF(arg0, s32, 0x94) == 0xE) && !(AF(arg0, u16, 0x72) & 0x400)) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        } else {
            temp_v0 = func_sc04_003_8017FD38((s32) arg0);
            if ((temp_v0 != 0) && (func_sc04_003_8017FB48((s32) arg0, (s32) &sp10) != 0)) {
                func_sc04_003_8017F218((s32) arg0, (s32) temp_v0);
            }
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc04_003_8017F1AC((s32) arg0);
        }
        break;
    }
    func_sc04_003_801800D4((s32) arg0, 0);
}

void func_sc04_003_8018061C(s32 arg0) {
    s32 sp10;
    s16 temp_v0;

    if (func_sc04_003_8017FA94(arg0, -0x50000, (s32) &sp10) == 1) {
        func_8012ADE4(arg0);
        goto block_3;
    }
    if (func_8012BEE8(arg0) != 0) {
block_3:
        AF(arg0, s32, 0x1C) = 8;
        func_8012A8B0(arg0, (s32) &D_sc04_003_8019760C);
        func_8012B23C(arg0);
        func_8012AD44(arg0, 1);
    } else if (!(AF(arg0, u16, 0x86) & 1)) {
        temp_v0 = func_sc04_003_8017FD38(arg0);
        if (temp_v0 != 0) {
            func_sc04_003_8017F218(arg0, (s32) temp_v0);
        }
    }
    func_sc04_003_801800D4(arg0, 1);
}

void func_sc04_003_801806E8(u8 *o) {
    SV8 sp10;
    u8 *p;

    if (func_sc04_003_8017FA94(o, -0x50000, &sp10) == 1) {
        func_8012ADE4(o);
        AF(o, s32, 0x1C) = 8;
        func_8012A8B0(o, &D_sc04_003_8019760C);
        func_8012B23C(o);
        func_8012AD44(o, 1);
        return;
    }
    if (AF(o, s16, 0x102) != 0) {
        AF(o, s16, 0x102) = AF(o, s16, 0x102) - 1;
    } else {
        if (AF(o, s16, 0xAA) == 0) {
            func_sc04_003_8017FF9C(o);
        }
        if (--AF(o, s16, 0x104) != 0) {
            AF(o, s16, 0x102) = 4;
        } else {
            AF(o, s16, 0x104) = 3;
            AF(o, s16, 0x102) = 0x20;
        }
    }
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x12) += AF(o, s16, 0x106);
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = 0x80;
        AF(o, s16, 0x106) = (rand() & 0x20) - 0x10;
    }
}

void func_sc04_003_801807F4(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s32, 0x1C) = 8;
        func_8012A8B0((s32) arg0, (s32) &D_sc04_003_8019760C);
        func_8012B23C((s32) arg0);
        func_8012AD44((s32) arg0, 1);
    }
}

void func_sc04_003_8018084C(u8 *arg0) {
    s32 sp10;

    if (AF(arg0, s16, 0x98) == 0) {
        if (!(AF(arg0, u16, 0x86) & 1) && (func_sc04_003_8017FB48((s32) arg0, (s32) &sp10) != 0)) {
            func_8012A8B0((s32) arg0, (s32) &D_sc04_003_801976F4);
            AF(arg0, s32, 0x94) = 0xF;
            AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_003_8019776C;
            func_8012B23C((s32) arg0);
            func_8012AD44((s32) arg0, 2);
        } else {
            AF(arg0, s32, 0x1C) = 8;
            func_8012A8B0((s32) arg0, (s32) &D_sc04_003_8019760C);
            func_8012B23C((s32) arg0);
            func_8012AD44((s32) arg0, 1);
        }
    }
}

void func_sc04_003_8018090C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    if (AF(arg0, s16, 0xAA) == 0) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if (func_8012BEE8((s32) arg0, arg1, arg2) != 0) {
                if (func_sc04_003_8017F6F4((s32) arg0) != 0) {
                    AF(arg0, s32, 0x1C) = 0x30;
                    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                } else {
                    AF(arg0, s32, 0x1C) = 0x10;
                }
            }
            break;
        case 1:
            if (func_8012BEE8((s32) arg0, arg1, arg2) != 0) {
                func_sc04_003_8017F81C((s32) arg0);
            }
            break;
        }
        func_sc04_003_801800D4((s32) arg0, 0);
    }
}

void func_sc04_003_801809C4(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s32, 0x94) == 0x18) {
            func_sc04_003_80180B78(AF(arg0, s32, 0xCC));
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        if (AF(arg0, s16, 0x98) == 0) {
            func_8012A8B0((s32) arg0, (s32) &D_sc04_003_8019760C);
            AF(arg0, s32, 0x1C) = 0x40;
            func_8012AD44((s32) arg0, 9);
        }
        break;
    }
    func_sc04_003_801800D4((s32) arg0, 0);
}

void func_sc04_003_80180A78(s32 arg0) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    func_8012AD80(arg0);
    temp_v1 = AF(arg0, s16, 0xA);
    if ((temp_v1 > AF(arg0, s16, 0xFE)) || (temp_v1 > 0)) {
        func_8012C218(arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (!(temp_v0 & 3)) {
        temp_v0_2 = func_80132EF4(arg0, 0x22);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, s16, 0x34) = 0x1000;
            AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x28);
        }
    }
}

s32 func_sc04_003_80180B10(s32 arg0) {
    func_8012B23C(arg0);
    return func_8012AD44(arg0, 1);
}

s32 func_sc04_003_80180B44(s32 arg0) {
    func_8012B21C();
    return func_8012AD44(arg0, 2);
}

void func_sc04_003_80180B78(u8 *o) {
    WMtx m;
    V4 v;

    m = D_800AE620;
    v.x = v.y = 0;
    v.z = -0xE0000;
    RotMatrixY(AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
    func_8002D4C8(0xB3F, 0);
    func_8012AD44(o, 3);
}

void func_sc04_003_80180C40(u8 *arg0) {
    D_sc04_003_80190E6C[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, u8, 0x74) != 0)) {
        func_8012E014((s32) arg0);
        func_sc04_003_80180FB8((s32) arg0, (s32) &D_sc04_003_80190E5C);
    }
}

s32 func_sc04_003_80180CC0(s32 arg0) {
    u8 *p = &D_80126B58;
    s16 lim;
    s16 y;
    s32 t;

    if (AF(arg0, u8, 0x74) != 0) {
        return 0;
    }
    lim = D_80126B62 - 0x20;
    if (func_sc04_003_80180E34(arg0, (s32) (p + 4), 0x48) != 0) {
        y = AF(arg0, s16, 0xA);
        if (y >= lim && lim >= y - 0x48) {
            return 1;
        }
    }
    return 0;
}

s32 func_sc04_003_80180D50(u8 *o) {
    u8 *p;
    s32 i;
    u16 h;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (p == o) {
            continue;
        }
        switch (AF(p, u16, 0)) {
        case 0x1FC:
            h = (AF(AF(o, u8 *, 0x20), s16, 0x18) * 9) >> 9;
            if (func_sc04_003_80180E34(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        case 0x239:
            h = (AF(AF(o, u8 *, 0x20), s16, 0x18) + AF(AF(p, u8 *, 0x20), s16, 0x18)) >> 6;
            if (func_sc04_003_80180E34(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        }
    }
    return 0;
}

s32 func_sc04_003_80180E34(s32 arg0, s32 arg1, u16 arg2) {
    s32 d;

    d = AF(arg1, s16, 2) - AF(arg0, s16, 6);
    if (d < 0) {
        d = -d;
    }
    if (arg2 < d) {
        return 0;
    }
    d = AF(arg1, s16, 0xA) - AF(arg0, s16, 0xE);
    if (d < 0) {
        d = -d;
    }
    return arg2 >= d;
}

void func_sc04_003_80180E8C(u8 *o) {
    SV8 v;
    SV8 r;
    WMtx m;
    s32 h;

    m = D_800AE620;
    h = AF(AF(o, u8 *, 0x20), s16, 0x18) * 9 >> 9;
    r.x = r.y = 0;
    r.z = -h;
    RotMatrixY((s16)func_8012B8A4(o), &m);
    ApplyMatrixSV(&m, &r, &v);
    v.x += AF(o, s16, 6);
    v.y += AF(o, s16, 0xA) - h;
    v.z += AF(o, s16, 0xE);
    func_8012F568(1, 0x4002, 0, 0x14, &v, &D_801152A8);
}

void func_sc04_003_80180FB8(u8 *o, u8 *p) {
    s16 d;
    s16 ax;
    s16 az;
    s16 oy;
    s16 py;
    s16 ph;

    if (*(u16 *)&D_80126B58 != 0x1A) {
        d = D_80126B5E - AF(o, u16, 6);
        ax = d;
        if (d < 0) ax = -d;
        d = D_80126B66 - AF(o, u16, 0xE);
        az = d;
        if (d < 0) az = -d;
        oy = AF(o, s16, 0xA);
        py = AF(p, s16, 8);
        if (D_80126B62 < oy + py) return;
        ph = AF(p, s16, 0xA);
        if (oy + ph < D_80126B62) return;
        if (ax >= 0x49) return;
        if (az >= 0x49) return;
        if (D_80126B62 < oy + ((py + ph) >> 1)) {
            D_80126B62 = oy + py - 1;
        } else if (ax < az) {
            if ((s16)D_80126B66 > (s16)AF(o, u16, 0xE)) {
                D_80126B66 = AF(o, u16, 0xE) + 0x49;
            } else {
                D_80126B66 = AF(o, u16, 0xE) - 0x49;
            }
        } else {
            D_80126B5E = ((s16)D_80126B5E > (s16)AF(o, u16, 6)) ? AF(o, u16, 6) + 0x49 : AF(o, u16, 6) - 0x49;
        }
    }
}

void func_sc04_003_80181114(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0x14;
        AF(arg1, s16, 0x62) = func_8012B6D4(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_003_80181184(u8 *o) {
    WMtx m;
    SV8 v;
    s32 flag;
    u8 *e;
    s16 i;

    m.t[0] = AF(o, s16, 6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    SetTransMatrix(&m);
    for (i = 0; i < 0x1000; i += 0x200) {
        e = (u8 *)func_80132EF4(o, 0x22);
        if (e != 0) {
            m = D_800AE620;
            RotMatrixY(i, &m);
            SetRotMatrix(&m);
            RotTransSV(&D_sc04_003_80190E7C, &v, &flag);
            AF(e, s16, 6) = v.x;
            AF(e, s16, 0xA) = v.y;
            AF(e, s16, 0xE) = v.z;
            ApplyRotMatrixLV(&D_sc04_003_80190E84, o + 0x10);
            AF(e, s32, 0x34) = 0x4000;
        }
    }
}

void func_sc04_003_801812C4(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_003_8019814C);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0x8040);
    AF(arg0, u16, 0x5C) = 0xCC00;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_003_80190E5C | 0x20000000);
    if (AF(arg0, s16, 0x70) != 0) {
        func_sc04_003_80180B44((s32) arg0);
        return;
    }
    func_sc04_003_80180B10((s32) arg0);
    AF(arg0, s32, 0xD0) = func_80143994((s32) arg0, 0x3000);
}

void func_sc04_003_80181398(u8 *arg0) {
    s32 flags;
    s32 y;
    u8 *w;
    u8 *m;
    s16 v;

    flags = func_8012CBF4(arg0);
    y = AF(arg0, s16, 0xA);
    w = AF(arg0, u8 *, 0xD0);
    if (y > 0x80) {
        if (w != NULL) {
            func_801439C0(w);
        }
        func_8012C218(arg0);
        return;
    }
    m = AF(w, u8 *, 0xCC);
    v = (y << 4) + 0x5800;
    AF(m, s16, 0x18) = v;
    AF(m, s16, 0x1A) = v;
    if (flags & 0x2000) {
        func_sc04_003_80181184(arg0);
        func_sc04_003_80180B44((s32) arg0);
        func_8002D4C8(0xBCB, 0);
    }
    if (func_sc04_003_80180CC0((s32) arg0) != 0) {
        func_sc04_003_80180E8C(arg0);
    }
}

void func_sc04_003_8018144C(void) {
}

void func_sc04_003_80181454(u8 *arg0) {
    s32 flags;
    s32 p;

    flags = func_8012CBF4(arg0);
    if (AF(arg0, s16, 0xA) > 0x80) {
        if (AF(arg0, u8 *, 0xD0) != NULL) {
            func_801439C0(AF(arg0, u8 *, 0xD0));
        }
        func_8012C218(arg0);
        return;
    }
    if (flags & 0x2000) {
        if (!(flags & 0xC000)) {
            if (func_sc04_003_80180CC0((s32) arg0) != 0) {
                func_sc04_003_80180E8C(arg0);
                return;
            }
            p = func_sc04_003_80180D50((s32) arg0);
            if (p != 0 && AF(p, u16, 0) == 0x1FC) {
                func_sc04_003_80181114((s32) arg0, p);
            }
        }
    }
}

void func_sc04_003_80181518(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc04_003_801983FC);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc04_003_801981D4);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 100;
    p.x = D_80126B5C;
    p.y = D_80126B60;
    p.z = D_80126B64;
    ((s16 *)&p.y)[1] -= 0x20;
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    switch (AF(arg0, u16, 0x70) & 0xF) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        break;
    case 2:
        break;
    }
    if (AF(arg0, u16, 0x70) & 0x1000) {
        AF(arg0, s32, 0x1C) <<= 1;
    }
    func_8012B2CC(arg0);
    func_8012C588(0xBC, arg0);
}

void func_sc04_003_80181690(u8 *arg0) {
    D_sc04_003_80198270[AF(arg0, u16, 2)]();
}

void func_sc04_003_801816CC(u8 *arg0) {
    D_sc04_003_80198284[AF(arg0, u16, 2)]();
}

void func_sc04_003_80181708(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc04_003_8019825C);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc04_003_80198268, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc04_003_801817E8(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc04_003_80198278);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(arg0, &a, &b);
        AF(arg0, s16, 6) = b.x;
        AF(arg0, s16, 0xA) = b.y;
        AF(arg0, s16, 0xE) = b.z;
        AF(arg0, s32, 0x1C) = 0x5A;
        AF(arg0, s16, 0x34) = 1;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 5;
    func_8012AD80(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

void func_sc04_003_80181904(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_003_8019852C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc04_003_80181960(u8 *arg0) {
    D_sc04_003_80198864[AF(arg0, u16, 2)]();
}

void func_sc04_003_8018199C(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_003_80198554) != 0) {
        if (!(func_80029178(D_sc04_003_801985BC[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc04_003_80182048);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_003_801824B8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_003_80181A70(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_003_80181A98(void) {
}

void func_sc04_003_80181AA0(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc04_003_801987A0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_003_80198704[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_003_8019878C = 0;
            func_80029124(D_sc04_003_80198704[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_003_80198788 = 2;
        } else {
            D_sc04_003_801987A0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_003_80198680[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_003_80198788 = 0;
            D_sc04_003_8019878C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc04_003_801987B4);
    } else {
        var_a1 = &D_sc04_003_80198820;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc04_003_80181BEC(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc04_003_801985BC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_003_801985BC[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc04_003_80181DF0() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_003_80181D0C(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc04_003_80181D38(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_003_80181D48(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_003_80181D58(u8 *arg0) {
    func_80029124(D_sc04_003_801985BC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_003_80181D98(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_003_80181DCC(void) {
    return func_80174764() == 1;
}

s32 func_sc04_003_80181DF0(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc04_003_801985BC[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc04_003_80181E54(u8 *arg0) {
    D_sc04_003_8019888C[AF(arg0, u16, 2)]();
}

void func_sc04_003_80181E90(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_003_80198588) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_003_80198F4C);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_003_80198D2C);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_003_80181F18(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_003_80198D3C);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_003_80198E44);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_003_80181FD8(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_003_80198F4C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_003_80198D2C);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc04_003_80182048(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc04_003_8019887C[0], &a, &f);
    RotTransSV(&D_sc04_003_8019887C[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
