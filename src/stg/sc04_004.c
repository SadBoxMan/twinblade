#include "common.h"
#include "gte.h"
#include "psyq.h"
extern void (*D_sc04_004_801A8C6C[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_004_8017BE9C(void) {
}

void func_sc04_004_8017BEA4(void) {
}

void func_sc04_004_8017BEAC(void) {
}

void func_sc04_004_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_004_801881BC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc04_004_8017CD9C();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void func_80146A6C();
extern void (*D_sc04_004_80188214[])();
extern void func_80147324();
extern void func_sc04_004_8017DF10();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc04_004_80188228[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc04_004_8018823C[])();
extern void func_800D22E4();
extern void func_sc04_004_8017E608();
extern void (*D_sc04_004_8018830C[])();
void func_sc04_004_8017EA88(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc04_004_8017EAB0(void);
extern void func_800D1EBC();
extern void (*D_sc04_004_80188320[])();
extern u8 D_sc04_004_8018832C;
extern void func_8016EE40();
extern u8 D_sc04_004_80188330;
extern void func_sc04_004_8017EC08();
extern void (*D_sc04_004_8018833C[])();
extern void (*D_sc04_004_801883B0[])();
extern void (*D_sc04_004_801883E8[])();
extern void func_sc04_004_8017FA1C();
extern s32 func_sc04_004_8017F9F4();
extern u8 D_sc04_004_80188390;
extern void (*D_sc04_004_801886F8[])();
extern void (*D_sc04_004_80188734[])();
extern void (*D_sc04_004_80192E8C[])();
extern void (*D_sc04_004_8019A170[])();
extern void (*D_sc04_004_8019A184[])();
extern void (*D_sc04_004_801A8C90[])();
extern void (*D_sc04_004_801B0DF4[])();

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern u8 D_sc04_004_80188354;
extern void (*D_sc04_004_80188378[])();
extern void StartRumbleScript();

extern s32 D_sc04_004_8018834C[];
extern s32 func_8013B7F4();
extern void func_8012B14C();
extern s32 func_8012BEE8();
extern s32 func_8012CBF4();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc04_004_8019A15C;
extern u8 D_sc04_004_8019A168;
extern s32 func_80132EF4();
extern void func_8012CAE4();
extern u8 D_sc04_004_8019A42C;
extern u8 D_sc04_004_801B0750;
extern u8 D_sc04_004_801B0BD8;
extern s32 func_8012BCCC();
extern u8 D_sc04_004_801B0B30;
extern void func_sc04_004_8018352C();
extern u8 D_sc04_004_801B08F0;
extern void func_80142414();
extern void func_sc04_004_8018342C();
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
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_sc04_004_8017EFF4();
extern void func_80146CA0();
extern void func_80149020();
extern s32 func_sc04_004_8017F0E0();
extern void func_80159B3C();
extern void func_80165718();
extern void func_80172630();
extern u8 D_80062C04;
extern void func_8014BC44();
extern s32 func_80151664();
extern void func_sc04_004_8017FB78();
extern s32 func_80146E98();
extern void func_8012BF4C();
extern void func_8012AD50();
extern u8 D_sc04_004_80188728;
extern void func_800159E4();
extern void func_8001CC3C();
extern void func_80146E90();
extern u8 D_sc04_004_8019972C;
extern s32 D_sc04_004_801997A4;
extern void func_8012A8B0();
extern s32 func_8012B23C();
extern s32 func_8012AD44();
extern s32 D_sc04_004_8019979C;
extern u8 D_sc04_004_80199904;
extern u8 D_sc04_004_80199E1C;
extern u8 D_sc04_004_80199644;
extern u8 D_sc04_004_801999AC;
extern void (*D_sc04_004_80192E38[])();
extern s32 func_sc04_004_80180C74();
extern void func_sc04_004_80181248();
extern u8 D_sc04_004_80199BA4;
extern void func_80131B14();
extern void func_8012B2CC();
extern void func_8012B178();
extern void func_80130088();
extern void func_801319E0();
extern void func_8012ADE4();
extern void func_80131E00();
extern void func_80131C78();
extern s32 func_sc04_004_80180BA4();
extern s32 func_sc04_004_8018056C();
extern void func_sc04_004_80181130();
extern s32 func_sc04_004_80180750();
extern s32 func_sc04_004_80180878();
extern void func_8012B21C();
extern u8 D_sc04_004_80192E94;
extern void (*D_sc04_004_80192EA4[])();
extern void func_8012E014();
extern void func_sc04_004_80182014();
extern void (*D_sc04_004_8019DC44[])();
extern void func_80165988();
extern void func_8002A04C();
extern u8 D_sc04_004_8019DB0C;
extern u8 D_sc04_004_8019DB40;
extern u8 D_sc04_004_8019DBA8;
extern u8 D_sc04_004_801A82F8;
extern s32 func_8012C354();
extern void func_80143970();
extern u8 D_sc04_004_801A8380;
extern s16 D_80126B96;
extern u8 D_sc04_004_8019DAFC;
extern u8 D_sc04_004_8019DC18;
extern u8 D_sc04_004_8019DC34;
extern u8 D_sc04_004_8019DC3C;
extern void func_8012B1B4();
extern u8 D_sc04_004_8019DAEC;
extern u8 D_sc04_004_8019DC24;
extern u8 D_sc04_004_8019DC2C;
extern u8 D_sc04_004_801A8428;
extern s32 func_8012CBCC();
extern void (*D_sc04_004_801A8CA4[])();
extern u8 D_sc04_004_801A8CB0;
extern void func_sc04_004_80183B64();
extern u8 D_sc04_004_801A8B80;
extern u8 D_sc04_004_801A8BB4;
extern s32 func_8012C658();
extern s32 func_8012E504();



extern s32 func_8012B6D4();

extern s32 func_sc04_004_80180AF0();
extern s32 func_sc04_004_80180D94();
s32 func_sc04_004_80180274(s32 arg0, s32 arg1);
extern void func_sc04_004_80181BD4();

extern u8 D_sc04_004_8018835C;
extern void func_801511E0();
extern void func_80154274();
extern u8 D_sc04_004_80199824;
s32 func_sc04_004_801804CC(s32 arg0);

extern s32 func_sc04_004_80180274();
extern void func_sc04_004_80180208();

extern u8 D_sc04_004_801B3BDC;
extern void func_8001C810();
extern s32 func_sc04_004_80181BA0();
extern s32 func_sc04_004_80181B6C();
extern s32 func_80143994();
extern u8 D_sc04_004_801A8898;
extern u8 D_sc04_004_801A8A58;

extern s32 D_8011F9C4;
extern u8 D_sc04_004_801888A8;
extern u8 D_sc04_004_80188970;
extern void func_80029124();
extern void func_800291F0();
s32 func_sc04_004_8017EF1C(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc04_004_80188984;
extern u8 D_sc04_004_80188A38;
extern s32 func_8017267C();
extern void func_sc04_004_8017FE48();
extern void *D_80126B78;
extern s32 func_8012CBA4();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern u8 D_sc04_004_801883A8;
extern s32 D_sc04_004_801883C0[];
extern void func_sc04_004_8017F5E0();
extern void func_800183E0();
extern void func_sc04_004_8017FBEC();
extern s32 func_sc04_004_8017FBFC();
extern void func_8014ABF0();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc04_004_8018816C;
extern u8 D_sc04_004_80188108[];
extern s32 func_80013328();
extern void func_801746A4();
extern s32 func_8012BD14();
extern void func_800233CC();
extern u8 D_sc04_004_801B3850;
extern u8 D_sc04_004_801B3851;
extern u8 D_sc04_004_801B3852;
extern u8 D_sc04_004_801B3854;
extern u8 D_sc04_004_801B3855;
extern u8 D_sc04_004_801B3856;
extern s32 D_sc04_004_801B3A54;
extern s32 D_sc04_004_801B3A58;
extern s32 D_sc04_004_801B3A5C;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc04_004_8019A9DC;

void func_sc04_004_8017BEBC(u8 *obj) {
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

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc04_004_801881E8[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();
extern s32 func_8012C588();
extern u8 D_sc04_004_8019A2FC;
extern u8 D_sc04_004_8019A0D4;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern void func_8012AD80();
extern u8 D_sc04_004_8019A178;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern void func_80128ED8();
extern void func_sc04_004_80184554();


typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126940;
extern u8 D_sc04_004_80188344[];
extern s32 func_80148800();
extern void func_sc04_004_8017ED84();
extern u8 D_sc04_004_80188348[];
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 func_8012E544();
extern u8 D_sc04_004_80188700;
extern s32 func_801290DC();
extern void func_80149350();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern u8 D_sc04_004_801880D4;
extern u8 D_sc04_004_80188110;
extern u8 D_sc04_004_8019A9B4;
extern u8 D_sc04_004_801B37E0;
extern u8 D_sc04_004_801B37EC;
extern u8 D_sc04_004_801B37ED;
extern u8 D_sc04_004_801B37EE;
extern u8 D_sc04_004_801B37FC;
extern u8 D_sc04_004_801B37FD;
extern u8 D_sc04_004_801B37FE;
extern u8 D_sc04_004_801B380D;
extern u8 D_sc04_004_801B380E;
extern u8 D_sc04_004_801B3810;
extern u8 D_sc04_004_801B3811;
extern u8 D_sc04_004_801B3812;
extern u8 D_sc04_004_801B3814;
extern u8 D_sc04_004_801B3815;
extern u8 D_sc04_004_801B3816;
extern u8 D_sc04_004_801B381C;
extern u8 D_sc04_004_801B3890;

extern s32 func_80133784();

typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 func_801465C0();
extern void func_8001CF00();
extern void func_80015978();
extern void func_80015954();
extern u16 D_sc04_004_80188434[];
extern V4 D_sc04_004_80188424;
extern SV8 D_sc04_004_801883F4[];

extern void func_8012EC04();
extern s32 func_8012C51C();
extern void func_8012EFB8();
extern u8 D_sc04_004_801A8C54;
extern SV8 D_sc04_004_801A8C64;

extern void func_80017DF8();
extern void func_80017168();
extern void func_80020F34();
extern s32 func_8012BE98();
extern s16 D_sc04_004_80192E64;
extern s16 D_sc04_004_80192E66;
extern s16 D_sc04_004_80192E68;
extern s32 D_sc04_004_80195254;
extern s32 D_sc04_004_80195264;
extern s32 D_sc04_004_801B3AA0[];
extern s32 D_sc04_004_801B3AB0;
extern s32 D_sc04_004_801B3ABC;
extern u8 D_sc04_004_80192D8C;
extern s32 D_sc04_004_801B3A60[];
extern u8 D_sc04_004_80192DC0;
extern s32 func_8012B030();
extern u8 D_801152A8;
extern s32 func_8012B8A4();
extern s32 func_8012F568();
extern SV8 D_sc04_004_80192EB4;
extern V3 D_sc04_004_80192EBC;
extern u8 D_sc04_004_801A8C88;
extern u8 D_sc04_004_801B0D28;

extern s32 func_8012C098();
extern s32 func_8012C044();
extern void func_8012E8A8();
extern u16 D_sc04_004_801A8C14[];
extern u16 D_sc04_004_801B3AC0[];
extern u8 D_sc04_004_801A8C34;

extern void func_8002D59C();
extern u8 D_sc04_004_8019A00C;
extern u8 D_sc04_004_80199AF4;

extern void func_sc04_004_80180F74();

extern s32 func_8012B864();
extern u8 D_sc04_004_801A84D0;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 D_sc04_004_801B37E4;
extern s32 D_sc04_004_801B37E8;
extern s32 D_sc04_004_801B37F0;
extern s32 D_sc04_004_801B37F4;
extern s32 D_sc04_004_801B37F8;
extern s32 D_sc04_004_801B3800;
extern s32 D_sc04_004_801B3804;
extern s32 D_sc04_004_801B3808;

void func_sc04_004_8017CD9C(u8 *arg0, s32 arg1_0) {
    SV v;
    WMtx m;
    s16 arg1 = arg1_0;
    s16 s;
    s32 k;
    s32 x;
    s32 t;
    u8 *t0;
    u8 *a3;

    t0 = AF(arg0, u8 *, 0xCC);
    a3 = AF(arg0, u8 *, 0x20);
    if (arg1 != 0) {
        k = 0x40000000;
        s = 0x1000;
    } else {
        k = 0x50000000;
        s = 0x1333;
    }
    x = AF(a3, s32, 4) & 0xCFFFFFFF;
    t = k | 0x40000000;
    AF(a3, s32, 4) = x | t;
    if (AF(AF(arg0, u8 *, 0xCC), u16, 0) != 0) {
        AF(t0, s16, 0x1A) = s;
        AF(t0, s16, 0x18) = s;
    }
    v.vx = AF(arg0, u16, 0xFC) += 0x80;
    v.vy = AF(arg0, u16, 0xFE) += 0x100;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x100;
    ApplyMatrixSV(&m, &v, &v);
    *(s32 *)&D_sc04_004_801B37E0 = D_sc04_004_801B37F0 = D_sc04_004_801B3800 = v.vx;
    D_sc04_004_801B37E4 = D_sc04_004_801B37F4 = D_sc04_004_801B3804 = v.vy;
    D_sc04_004_801B37E8 = D_sc04_004_801B37F8 = D_sc04_004_801B3808 = v.vz;
}

void func_sc04_004_8017CECC(u8 *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (func_800291B4(*AF(arg0, u8 *, 0xDC) + 0x3A) & 0xFF) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(arg0, s32, 0x20) == 0) {
        if (func_8012C354(arg0, &D_sc04_004_801880D4) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc04_004_8019A9B4);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc04_004_80188110);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc04_004_801B37E0;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc04_004_801B3810;
        func_8001CD50(o, p);
        D_sc04_004_801B3812 = 0x80;
        p[0] = 0x80;
        D_sc04_004_801B3811 = 0xE0;
        D_sc04_004_801B3815 = 0;
        D_sc04_004_801B3814 = 0;
        D_sc04_004_801B3816 = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc04_004_8019A9DC;
        b = (U12x9 *) &D_sc04_004_801B3890;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc04_004_801B380E = 0xFF;
        D_sc04_004_801B381C = 0xFF;
        D_sc04_004_801B37FE = 0xFF;
        D_sc04_004_801B37FC = 0xFF;
        D_sc04_004_801B37EE = 0xFF;
        D_sc04_004_801B37EC = 0xFF;
        D_sc04_004_801B380D = 0x80;
        D_sc04_004_801B37FD = 0x80;
        D_sc04_004_801B37ED = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc04_004_801B3890;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc04_004_8017D258(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &D_801202A0, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = func_80013328(arg0 + 4, &D_80126B5C);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc04_004_8017CD9C(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc04_004_80188108[(s16) i]) {
                func_801746A4();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (func_8012BD14(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            func_80178B18(arg0, &D_sc04_004_8018816C);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc04_004_8017D4D0(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc04_004_801B3850;
        func_8001CD50(o, p);
        D_sc04_004_801B3851 = 0xFF;
        D_sc04_004_801B3852 = 0xFF;
        p[0] = 0xFF;
        D_sc04_004_801B3856 = 8;
        D_sc04_004_801B3854 = 8;
        D_sc04_004_801B3855 = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc04_004_801B3A54;
        q[0] = v.vx;
        D_sc04_004_801B3A58 = v.vy;
        D_sc04_004_801B3A5C = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc04_004_8017D618(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc04_004_8019A9DC;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc04_004_8017CD9C(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc04_004_8017D798(u8 *arg0) {
    D_sc04_004_801881BC[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017D7D4(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc04_004_8017D820(u8 *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xDC);
    temp_s2 = AF(arg0, s16 *, 0xCC);
    temp_s1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_v1, u8, 1) != 0) && (AF(arg0, s16, 0x108) == 0)) {
        AF(arg0, s16, 0x108) = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc04_004_8017CD9C((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}


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
extern u16 D_80126B5E;
extern u16 D_80126B66;


typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_sc04_004_80188384;
extern s32 func_800D21C4();
extern void func_sc04_004_8017F5C4();
extern void func_80149374();
extern s32 func_80132E6C();
extern s32 D_sc04_004_801B3A90;
extern s32 D_sc04_004_801B3A80[];
extern s32 func_8012DEB8();
extern s16 D_80126B98;
extern SV8 D_sc04_004_80192E6C[];
extern u8 D_sc04_004_80192E84;
extern void func_801437D8();
s32 func_sc04_004_80181E90(s32 arg0, s32 arg1, u16 arg2);
extern s32 func_sc04_004_80181D1C();
extern s32 func_sc04_004_80181DAC();
void func_sc04_004_80182170(s32 arg0, s32 arg1);
extern void func_801439C0();
extern void func_sc04_004_80184614();
extern void func_8012B200();
extern s32 func_8012B8E4();
extern u8 D_sc04_004_801AA6D0;
extern void func_80128EA8();
extern u8 D_sc04_004_801B0DA8;
extern u8 D_sc04_004_801B0DB4;
extern s32 func_sc04_004_801844FC();
extern s32 func_8012C194();

void func_sc04_004_8017D914(u8 *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = AF(arg0, u8 *, 0xDC);
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (AF(arg0, s16, 0x108) == 0) {
            AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
        }
        t = AF(arg0, s16, 0x108);
        v = t;
    }
    if (v != 0) {
        AF(arg0, u16, 2)++;
    }
}

void func_sc04_004_8017D994(u8 *arg0) {
    SV8 sp10;
    SV8 sp18;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x58) = 0;
        sp10.x = AF(arg0, u16, 6);
        sp10.y = AF(arg0, u16, 0xA);
        sp10.z = AF(arg0, u16, 0xE);
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (sp18.y + 0x800);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_004_8017DA48(u8 *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = AF(arg0, u8 *, 0xD0);
    d = AF(arg0, u8 *, 0xDC);
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        func_80178B18((s32) arg0, AF(d, s32, 0xC));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_004_8017DAB4(u8 *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0xDC);
    if (func_80178970((s32) arg0, arg1) != 0) {
        func_80178D18((s32) arg0);
        func_800291A0(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            func_8002AC00(0x25);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_004_8017DB40(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc04_004_8017DB60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc04_004_8017CD9C(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_004_8017DBB4(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc04_004_8017DBF0(u8 *arg0) {
    D_sc04_004_80188214[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017DC2C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_004_8017DC7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017DCD8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017DD5C(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017DEC4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_004_8017DF10((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc04_004_8017DF10(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    func_80017DC4(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    func_80017E68(&r, &m);
    t = D_sc04_004_801881E8;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        func_80017758(&q, &m);
    }
    t = D_sc04_004_801881E8;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        func_80017758(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc04_004_801881E8;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            func_80017758(&q, &m);
        }
    }
}

void func_sc04_004_8017E21C(u8 *arg0) {
    D_sc04_004_80188228[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017E258(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_004_8017E298(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017E308(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017E394(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017E468(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_004_8017DF10((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc04_004_8017E4BC(u8 *arg0) {
    D_sc04_004_8018823C[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017E4F8(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc04_004_8017E5AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc04_004_8017E608((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc04_004_8017E608(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = D_800AE620;
    l.code = 0x50000000;
    func_80016A5C(&l, &m);
}

void func_sc04_004_8017E778(void) {
    D_8011F9C4 = 1;
    func_80029124(0xCC, 1);
    func_800291F0(4, 0xCC);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_004_801888A8;
    D_801274CC = &D_sc04_004_80188970;
    func_sc04_004_8017EF1C(0);
}

void func_sc04_004_8017E7E8(void) {
    D_8011F9C4 = 1;
    func_80029124(0xCD, 1);
    func_800291F0(4, 0xCD);
    func_8002D4C8(6, 0);
    D_801274C8 = &D_sc04_004_80188984;
    D_801274CC = &D_sc04_004_80188A38;
    func_sc04_004_8017EF1C(1);
}

void func_sc04_004_8017E858(u8 *arg0) {
    D_sc04_004_8018830C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_004_8017E894(u8 *arg0) {
    func_sc04_004_8017EA88();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_004_8017E8D8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_004_8017E8FC(u8 *arg0) {
    func_sc04_004_8017EAB0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_004_8017E93C(u8 *arg0) {
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

void func_sc04_004_8017E9B8(void) {
    func_800D1EBC();
}

void func_sc04_004_8017E9D8(u8 *arg0) {
    D_sc04_004_80188320[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_004_8017EA14(u8 *arg0) {
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

void func_sc04_004_8017EA88(void) {
    func_8016EE40((s32) &D_sc04_004_8018832C, 0x01000000);
}

void func_sc04_004_8017EAB0(void) {
    func_8016EE40((s32) &D_sc04_004_80188330, 0x01000000);
}

void func_sc04_004_8017EAD8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_004_8017EC08, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_004_8017EC08((s32) &D_80126948);
}

void func_sc04_004_8017EB70(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_004_8017EC08, 1);
    func_8012A094((s32) &D_80126948);
    func_sc04_004_8017EC08((s32) &D_80126948);
}

void func_sc04_004_8017EC08(s32 arg0) {
    D_sc04_004_8018833C[AF(arg0, u8, 4)]();
}

void func_sc04_004_8017EC44(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_004_80188344)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc04_004_8017ED84((s32) arg0, (s32) &v);
}

void func_sc04_004_8017ECE4(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_004_80188348)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc04_004_8017ED84((s32) arg0, (s32) &v);
}

void func_sc04_004_8017ED84(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_004_8017EF1C(s32 arg0) {
    return func_8013B7F4(D_sc04_004_8018834C[arg0], 0);
}

s32 func_sc04_004_8017EF4C(void) {
    return 0x55;
}

void func_sc04_004_8017EF54(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_004_80188354);
    D_sc04_004_80188378[AF(arg0, u16, 2)](arg0);
}

void func_sc04_004_8017EFAC(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc04_004_8017EFF4(arg0);
    func_80146CA0(arg0);
}

void func_sc04_004_8017EFF4(s32 arg0) {
    func_80149020();
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc04_004_8018835C);
    AF(arg0, u8, 0xDE) = 0x5A;
    func_80147324(0x7EB);
    func_80146A6C(0x3F, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
    func_80172630(arg0);
    func_80146CA0(arg0);
}

void func_sc04_004_8017F07C(u8 *arg0) {
    u8 temp_v1;

    func_80149020();
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_sc04_004_8017F0E0((s32) arg0);
        func_80159B3C((s32) arg0);
        func_80165718((s32) arg0);
        return;
    }
    func_80172630((s32) arg0);
}

s32 func_sc04_004_8017F0E0(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc04_004_8017F130(u8 *arg0) {
    D_sc04_004_801883B0[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017F16C(s32 arg0) {
    V4 v;
    WMtx m;
    u8 *o;

    o = (u8 *)func_800D21C4(arg0, &D_sc04_004_80188384, 0x2B);
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        AF(o, s16, 0x28) = 0x224;
        AF(o, s16, 0x2A) = 0x1A8;
        AF(o, s16, 0x1A) = 0x3000;
        AF(o, s16, 0x18) = 0x3000;
        AF(o, s16, 0x14) = -0x400;
        AF(o, u16, 0x2C) = 0xC080;
        AF(o, s32, 4) |= 0x48000000;
        func_sc04_004_8017F5C4(arg0);
        func_sc04_004_8017F5E0(arg0);
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x30) = 0;
        func_80146E90(arg0, 0x5A);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_sc04_004_8017F228(u8 *arg0) {
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_s6;

    temp_s6 = AF(arg0, void *, 0x20);
    func_sc04_004_8017F5E0((s32) arg0);
    temp_v0 = AF(arg0, s32, 0x30);
    if (temp_v0 == 0) {
        var_a0 = D_sc04_004_801883C0[AF(arg0, s32, 0x2C)];
        if (var_a0 == 0) {
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x2C) = 0;
            var_a0 = D_sc04_004_801883C0[0];
        }
        func_800183E0(var_a0);
        AF(arg0, s32, 0x2C) = (s32) (AF(arg0, s32, 0x2C) + 1);
    } else {
        AF(arg0, s32, 0x30) = temp_v0_2 = temp_v0 - 1; if ((temp_v0_2 == 0) && (AF(arg0, s32, 0x1C) != 0)) {
            func_80147324(0x7EC);
        }
    }
    temp_s5 = AF(arg0, s32, 0x1C);
    if (temp_s5 == 1) {
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ 0);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ temp_s5);
        func_80146A6C(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ temp_s5);
        func_sc04_004_8017FBEC((s32) &D_sc04_004_801883A8);
        func_80147324(0x7F4);
        AF(temp_s6, s32, 4) = (s32) (AF(temp_s6, s32, 4) | 0x80000000);
    }
    if ((func_80146E98((s32) arg0) != 0) && (func_sc04_004_8017FBFC((s32) &D_sc04_004_801883A8) != 0)) {
        func_8014ABF0(0x40);
        func_80146C3C((s32) arg0);
    }
}

void func_sc04_004_8017F5C4(s32 *arg0) {
    arg0[4] = arg0[1];
    arg0[5] = arg0[2];
    arg0[6] = arg0[3];
}

void func_sc04_004_8017F5E0(s32 arg0) {
    s32 t = AF(arg0, s32, 0x34);
    AF(arg0, s32, 4) = AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) = AF(arg0, s32, 0x18);
    func_80149374(t, arg0 + 4);
}

void func_sc04_004_8017F620(u8 *arg0) {
    D_sc04_004_801883E8[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017F65C(u8 *o) {
    SV8 a;
    SV8 r;
    WMtx m;
    V4 v;
    u8 *p;
    u8 *w;
    s16 *q;
    s32 i;

    p = AF(o, u8 *, 0x34);
    w = (u8 *)func_801465C0();
    AF(o, u8 *, 0x20) = w;
    if (w != 0) {
        func_8001CF00(w);
        AF(w, s32, 4) |= 0x80000000;
        func_80015978(p + 4, &a);
        func_80015954(&a, o + 4);
        AF(w, u16, 0x18) = AF(w, u16, 0x1A) = AF(w, u16, 0x1C) = D_sc04_004_80188434[AF(o, s32, 0x30)];
        v = D_sc04_004_80188424;
        r = D_sc04_004_801883F4[AF(o, s32, 0x2C)];
        if (AF(o, s32, 0x30) != 0) {
            r.x += (rand() & 0x3F) * 16 - 0x200;
            r.y += (rand() & 0x3F) * 16 - 0x200;
            r.z += (rand() & 0x3F) * 16 - 0x200;
            v.x = ((rand() & 0x1F) - 0x10) << 16;
            v.y = ((rand() & 0x1F) - 0x10) << 16;
            v.z = ((rand() & 0x1F) - 0x10) << 16;
        }
        RotMatrixZYX(&r, &m);
        ApplyMatrixLV(&m, &v, &v);
        AF(o, s32, 0x10) = v.x;
        AF(o, s32, 0x14) = v.y;
        AF(o, s32, 0x18) = v.z;
        AF(o, s32, 0x4C) = ((rand() & 0x1F) - 0x10) * 11;
        AF(o, s32, 0x50) = ((rand() & 0x1F) - 0x10) * 11;
        AF(o, s32, 0x54) = ((rand() & 0x1F) - 0x10) * 11;
        q = (s16 *)(o + 0x38);
        for (i = 0; i < 3; i++) {
            *q++ = (rand() & 0x7F) - 0x40;
            *q++ = (rand() & 0x7F) - 0x40;
            *q++ = (rand() & 0x7F) - 0x40;
        }
        func_80146E90(o, 2);
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc04_004_8017F930(s32 arg0) {
    func_sc04_004_8017F9F4(arg0);
    func_sc04_004_8017FB78(arg0);
    if (func_80146E98(arg0) != 0) {
        AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 2);
        AF(arg0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 2);
        AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 2);
        func_80146E90(arg0, 0x40);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_004_8017F9AC(s32 arg0) {
    func_sc04_004_8017F9F4(arg0);
    func_sc04_004_8017FB78(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
    }
}

s32 func_sc04_004_8017F9F4(s32 arg0) {
    func_sc04_004_8017FA1C(arg0, (s32) &D_sc04_004_80188390);
}

void func_sc04_004_8017FA1C(u8 *o, u8 *p) {
    WMtx m;
    SV8 v;
    u8 *q;

    q = AF(o, u8 *, 0x20);
    AF(p, s32, 0x1C) = 0x50000000;
    func_80017DC4(q + 0x18, &m);
    func_80017DF8(q + 0x10, &m);
    func_80015978(o + 4, &v);
    func_80017E68(&v, &m);
    func_80017168(p, &m);
    m.t[0] += AF(o, s16, 0x38);
    m.t[1] += AF(o, s16, 0x3A);
    m.t[2] += AF(o, s16, 0x3C);
    func_80017168(p, &m);
    func_80017E68(&v, &m);
    m.t[0] += AF(o, s16, 0x3E);
    m.t[1] += AF(o, s16, 0x40);
    m.t[2] += AF(o, s16, 0x42);
    func_80017168(p, &m);
    func_80017E68(&v, &m);
    m.t[0] += AF(o, s16, 0x44);
    m.t[1] += AF(o, s16, 0x46);
    m.t[2] += AF(o, s16, 0x48);
    func_80017168(p, &m);
}

void func_sc04_004_8017FB78(u8 *arg0) {
    u8 *p;
    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x10) += AF(arg0, s32, 0x4C);
    AF(p, s16, 0x12) += AF(arg0, s32, 0x50);
    AF(p, s16, 0x14) += AF(arg0, s32, 0x54);
}

void func_sc04_004_8017FBEC(u8 *arg0) {
    AF(arg0, s32, 0) = 0x80404080;
}

s32 func_sc04_004_8017FBFC(u8 *p) {
    s32 t;
    s16 v;

    t = p[3] - 2;
    p[3] = t;
    if (t & 0xFF) {
    if (D_800B99DA & 1) {
        v = (u8)t;
    } else {
        v = (u8)t + 0x40;
    }
    if (v > 0x100) {
        v = 0xFF;
    }
    p[2] = v;
    if (v < p[0]) {
        p[0] = v;
    }
    if (v < p[1]) {
        p[1] = v;
    }
    return 0;
    }
    return 1;
}

void func_sc04_004_8017FC88(u8 *arg0) {
    D_sc04_004_801886F8[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017FCC4(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc04_004_8017FCF8(s32 arg0, s32 arg1) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(D_80126B78, s32, 4) >= 0) && (func_8017267C((s32) &D_80126B58) == 0)) {
            case 1:
                func_sc04_004_8017FE48(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_004_8017FE48(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_004_8017FE48(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_004_8017FE48(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_004_8017FE48(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_004_8017FE48(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        func_8012BF4C(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_004_8017FE48(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_004_80188700;
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

void func_sc04_004_8017FF34(u8 *arg0) {
    D_sc04_004_80188734[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017FF70(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_004_80188728, 0x270, 0x100);
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

void func_sc04_004_80180054(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}


extern u8 D_sc04_004_80199F24;

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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void func_801292C8();
extern void func_800139C8();

void func_sc04_004_801800C0(u8 *o) {
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

s32 func_sc04_004_801801AC(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_004_8019972C);
    AF(arg0, s32, 0x94) = 0xF;
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_004_801997A4;
    func_8012B23C(arg0);
    return func_8012AD44(arg0, 2);
}

void func_sc04_004_80180208(s32 arg0) {
    if (AF(arg0, u16, 0x86) & 1) {
        func_sc04_004_801804CC(arg0);
        return;
    }
    func_8012A8B0(arg0, (s32) &D_sc04_004_80199824);
    AF(arg0, s32, 0x1C) = 0x60;
    func_8012AD44(arg0, 3);
}

s32 func_sc04_004_80180274(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_004_8019979C;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) arg1;
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0x98) = 0;
    return func_8012AD44(arg0, 4);
}

void func_sc04_004_801802D0(u8 *o) {
    SV8 v;
    s32 sp18;
    s32 r;

    r = 0;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_8012A8B0(o, &D_sc04_004_8019A00C);
            func_8012B2CC(o);
            func_8012B178(o, -0x80000);
            AF(o, s32, 0x14) = -0xC0000;
        }
        func_sc04_004_80181130(o, 0);
        break;
    case 1:
        r = func_8012CBF4(o);
        if (AF(o, s16, 0xA) > 0) {
            func_8012C218(o);
            return;
        }
        if (func_sc04_004_80180C74(o) != 0) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            AF(o, s32, 0x18) = 0;
        }
        if (r & 0x2000) {
            func_8012B23C(o);
            func_8012B2CC(o);
            func_8012B178(o, -0xE0000);
            func_8012A8B0(o, &D_sc04_004_80199AF4);
            AF(o, s32, 0x1C) = 0x30;
            AF(o, u16, 0x34)++;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            func_8002D59C(0x7E5, 0, AF(o, u16, 0x36));
        }
        func_sc04_004_80181130(o, 0);
        break;
    case 2:
        if (func_sc04_004_80180AF0(o, -0xE0000, &sp18) == 1) {
            func_8012ADE4(o);
            r = 1;
        } else if (func_8012BEE8(o) != 0) {
            r = 1;
        }
        func_sc04_004_80181130(o, 2);
        if (r != 0) {
            func_sc04_004_80180530(o);
            func_8002D59C(4, 0x7E5, AF(o, u16, 0x36));
        }
        break;
    }
}

s32 func_sc04_004_801804CC(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_004_80199904);
    AF(arg0, s16, 0x102) = 8;
    AF(arg0, s16, 0x104) = 3;
    AF(arg0, s16, 0x106) = (s16) ((rand() & 0x20) - 0x10);
    AF(arg0, s32, 0x1C) = 0x60;
    return func_8012AD44(arg0, 5);
}

s32 func_sc04_004_80180530(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_004_80199E1C);
    return func_8012AD44(arg0, 7);
}

s32 func_sc04_004_8018056C(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = (s16) (AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x200);
    if (AF(arg0, u16, 2) != 1) {
        func_8012A8B0(arg0, (s32) &D_sc04_004_80199644);
    }
    return func_8012AD44(arg0, 8);
}

void func_sc04_004_801805D0(u8 *o) {
    s32 sp10;
    u8 *p;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xFE) == AF(p, s16, 0x12)) {
        if (func_sc04_004_80180BA4(o, &sp10) == 1) {
            if ((AF(o, u16, 0x86) & 1) || (rand() & 1)) {
                if (AF(o, u16, 0x86) & 1) {
                    func_sc04_004_801804CC((s32)o);
                } else {
                    func_8012A8B0(o, &D_sc04_004_80199824);
                    AF(o, s32, 0x1C) = 0x60;
                    func_8012AD44(o, 3);
                }
            } else {
                func_8012A8B0(o, &D_sc04_004_8019972C);
                AF(o, s32, 0x94) = 0xF;
                AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_004_801997A4;
                func_8012B23C(o);
                func_8012AD44(o, 2);
            }
        } else {
            AF(o, u16, 0xFE) += 0x200;
        }
        AF(o, u16, 0x100)++;
    } else {
        func_sc04_004_80180F74(AF(o, s16, 0xFE), p + 0x12, 0x20);
    }
}

s32 func_sc04_004_8018070C(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_004_80199644);
    AF(arg0, s32, 0x1C) = 0x40;
    return func_8012AD44(arg0, 9);
}

s32 func_sc04_004_80180750(u8 *o) {
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

s32 func_sc04_004_80180878(s32 arg0) {
    func_8012A8B0(arg0, (s32) &D_sc04_004_801999AC);
    return func_8012AD44(arg0, 0xA);
}

void func_sc04_004_801808B4(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    D_sc04_004_80192E38[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) == 0x1FC) && (AF(arg0, s16, 0xAA) == 0)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 0x1800;
        AF(temp_v1_2, s16, 0x1A) = 0x1800;
        AF(temp_v1_2, s16, 0x18) = 0x1800;
    }
}

void func_sc04_004_80180948(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u8, 0xC2) == 2) {
        AF(arg0, s16, 0x52) = -0x18;
    }
    temp_v0 = func_sc04_004_80180C74((s32) arg0);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 4) = (s32) AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = (s32) AF(arg0, s32, 0x40);
        func_sc04_004_80181248((s32) arg0, temp_v0);
    }
}

void func_sc04_004_801809B0(u8 *arg0) {
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B178((s32) arg0, 0x80000);
    func_8012A8B0((s32) arg0, (s32) &D_sc04_004_80199BA4);
    if (AF(arg0, s16, 0x76) <= 0) {
        func_80130088((s32) arg0);
        func_8002AC00(0x13);
    }
}

void func_sc04_004_80180A30(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012CBF4(arg0);
    if ((temp_v0 & 0xFF) == 0x1A) {
        func_801319E0(arg0);
        return;
    }
    temp_v0_2 = func_sc04_004_80180C74(arg0);
    if (temp_v0_2 != 0) {
        func_sc04_004_80181248(arg0, temp_v0_2);
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

s32 func_sc04_004_80180AF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;

    func_8012B2CC(arg0, arg1);
    func_8012B178(arg0, arg1);
    temp_s0 = func_8012CBA4(arg0);
    temp_v0 = func_sc04_004_80180C74(arg0);
    AF(arg2, s32, 0) = temp_v0;
    if ((temp_v0 != 0) || (temp_s0 != 0x2000)) {
        func_8012ADE4(arg0);
        AF(arg0, s32, 0x1C) = 8;
        func_8012A8B0(arg0, (s32) &D_sc04_004_80199644);
        func_8012B23C(arg0);
        func_8012AD44(arg0, 1);
        return 1;
    }
    return 0;
}

s32 func_sc04_004_80180BA4(u8 *o, s32 *res) {
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
    *res = func_sc04_004_80180C74(o);
    func_8012ADE4(o);
    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x2C) &= 0xFFFE;
    if (*res == 0) {
        return r == 0x2000;
    }
    return 0;
}

s32 func_sc04_004_80180C74(u8 *o) {
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

s32 func_sc04_004_80180D94(void *arg0) {
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

void func_sc04_004_80180E30(u8 *o) {
    s32 i;

    if (!(AF(o, u16, 0x86) & 1) && AF(o, s16, 0x76) < 0xB5 && func_8012C588(0x22D, o) != 0) {
        AF(o, u16, 0x86) |= 1;
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_004_801B3A80, s32, i) = AF(&D_sc04_004_80195254, s32, i);
        }
        D_sc04_004_801B3A80[0] = 0x1000000;
        D_sc04_004_801B3A90 = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_004_801B3A80;
        func_8002D4C8(0x83B, 0);
    }
}

void func_sc04_004_80180EEC(u8 *o) {
    AF(o, u16, 0x5C) = 0x8A10;
    AF(o, s16, 0x52) = 0;
    if (AF(o, s32, 0xC4) & 4) {
        func_8012A8B0(o, &D_sc04_004_80199F24);
        func_8012AD44(o, 6);
    } else {
        AF(o, s32, 0x1C) = 8;
        func_8012A8B0(o, &D_sc04_004_80199644);
        func_8012B23C(o);
        func_8012AD44(o, 1);
    }
}

void func_sc04_004_80180F74(s32 a, u16 *p, s32 n) {
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

void func_sc04_004_80180FF8(u8 *o) {
    SpawnDef d;
    V3 a;
    V3 b;
    u8 *r;

    a.x = D_sc04_004_80192E64 << 8;
    a.y = D_sc04_004_80192E66 << 8;
    a.z = D_sc04_004_80192E68 << 8;
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

void func_sc04_004_80181130(void *arg0, s32 arg1) {
    SV8 v;

    if (!(AF(arg0, u16, 0x86) & 1)) {
        v.x = D_sc04_004_80192E6C[arg1].x;
        v.y = D_sc04_004_80192E6C[arg1].y;
        v.z = D_sc04_004_80192E6C[arg1].z - 20;
        if (func_8012DEB8(arg0, &D_sc04_004_80192E6C[arg1], &v)) {
            D_80126B98 = 20;
        }
    }
}

void func_sc04_004_801811BC(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x853, 0, arg2);
    func_8002AC00(0x13);
}

void func_sc04_004_801811E8(u8 *o) {
    SV8 v;

    if (AF(o, u16, 0) == 0x1FC) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA) - 0x20;
        v.z = AF(o, s16, 0xE);
        v.pad = 0x1800;
        func_801437D8(o + 0x102, &v, &D_sc04_004_80192E84, 0);
    }
}

void func_sc04_004_80181248(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0xA;
        AF(arg1, s16, 0x62) = func_8012B6D4(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_004_801812B8(u8 *o) {
    s32 r;
    s32 i;
    s32 k;

    if ((AF(o, s32, 0x20) = func_8012C1B8(o)) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), &D_sc04_004_80195254);
    k = 0x1000000;
    for (i = 0x18; i >= 0; i -= 4) {
        *(s32 *)((u8 *)D_sc04_004_801B3AA0 + i) = k;
    }
    D_sc04_004_801B3ABC = 0;
    D_sc04_004_801B3AA0[0] = D_sc04_004_80195254;
    D_sc04_004_801B3AB0 = D_sc04_004_80195264;
    AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_004_801B3AA0;
    AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_004_8019979C;
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

void func_sc04_004_801813F0(u8 *arg0) {
    D_sc04_004_80192E8C[AF(arg0, u16, 2)]();
}

void func_sc04_004_8018142C(u8 *o) {
    s32 i;

    if (func_8012C354(o, &D_sc04_004_80192D8C) != 0) {
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_004_801B3A60, s32, i) = AF(&D_sc04_004_80195254, s32, i);
        }
        D_sc04_004_801B3A60[5] = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_004_801B3A60;
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x801;
        AF(o, u8 *, 0xBC) = &D_sc04_004_80192DC0;
        func_80143970(o);
        func_8012B030(o);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        if (AF(o, s16, 0x70) != 0) {
            func_sc04_004_8018070C(o);
        } else if (rand() & 1) {
            func_sc04_004_801801AC(o);
        } else {
            func_sc04_004_80180208(o);
        }
    }
}

void func_sc04_004_80181548(s32 arg0, s32 arg1) {
    s32 sp10;

    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc04_004_80180BA4(arg0, (s32) &sp10);
        func_sc04_004_8018056C(arg0);
    }
    func_sc04_004_80181130(arg0, 0);
}

void func_sc04_004_80181594(u8 *arg0, s32 arg1) {
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
            temp_v0 = func_sc04_004_80180D94((s32) arg0);
            if ((temp_v0 != 0) && (func_sc04_004_80180BA4((s32) arg0, (s32) &sp10) != 0)) {
                func_sc04_004_80180274((s32) arg0, (s32) temp_v0);
            }
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc04_004_80180208((s32) arg0);
        }
        break;
    }
    func_sc04_004_80181130((s32) arg0, 0);
}

void func_sc04_004_80181678(s32 arg0) {
    s32 sp10;
    s16 temp_v0;

    if (func_sc04_004_80180AF0(arg0, -0x50000, (s32) &sp10) == 1) {
        func_8012ADE4(arg0);
        goto block_3;
    }
    if (func_8012BEE8(arg0) != 0) {
block_3:
        AF(arg0, s32, 0x1C) = 8;
        func_8012A8B0(arg0, (s32) &D_sc04_004_80199644);
        func_8012B23C(arg0);
        func_8012AD44(arg0, 1);
    } else if (!(AF(arg0, u16, 0x86) & 1)) {
        temp_v0 = func_sc04_004_80180D94(arg0);
        if (temp_v0 != 0) {
            func_sc04_004_80180274(arg0, (s32) temp_v0);
        }
    }
    func_sc04_004_80181130(arg0, 1);
}

void func_sc04_004_80181744(u8 *o) {
    SV8 sp10;
    u8 *p;

    if (func_sc04_004_80180AF0(o, -0x50000, &sp10) == 1) {
        func_8012ADE4(o);
        AF(o, s32, 0x1C) = 8;
        func_8012A8B0(o, &D_sc04_004_80199644);
        func_8012B23C(o);
        func_8012AD44(o, 1);
        return;
    }
    if (AF(o, s16, 0x102) != 0) {
        AF(o, s16, 0x102) = AF(o, s16, 0x102) - 1;
    } else {
        if (AF(o, s16, 0xAA) == 0) {
            func_sc04_004_80180FF8(o);
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

void func_sc04_004_80181850(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s32, 0x1C) = 8;
        func_8012A8B0((s32) arg0, (s32) &D_sc04_004_80199644);
        func_8012B23C((s32) arg0);
        func_8012AD44((s32) arg0, 1);
    }
}

void func_sc04_004_801818A8(u8 *arg0) {
    s32 sp10;

    if (AF(arg0, s16, 0x98) == 0) {
        if (!(AF(arg0, u16, 0x86) & 1) && (func_sc04_004_80180BA4((s32) arg0, (s32) &sp10) != 0)) {
            func_8012A8B0((s32) arg0, (s32) &D_sc04_004_8019972C);
            AF(arg0, s32, 0x94) = 0xF;
            AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_004_801997A4;
            func_8012B23C((s32) arg0);
            func_8012AD44((s32) arg0, 2);
        } else {
            AF(arg0, s32, 0x1C) = 8;
            func_8012A8B0((s32) arg0, (s32) &D_sc04_004_80199644);
            func_8012B23C((s32) arg0);
            func_8012AD44((s32) arg0, 1);
        }
    }
}

void func_sc04_004_80181968(u8 *arg0, s32 arg1) {
    u16 temp_v1;

    if (AF(arg0, s16, 0xAA) == 0) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if (func_8012BEE8((s32) arg0, arg1) != 0) {
                if (func_sc04_004_80180750((s32) arg0) != 0) {
                    AF(arg0, s32, 0x1C) = 0x30;
                    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                } else {
                    AF(arg0, s32, 0x1C) = 0x10;
                }
            }
            break;
        case 1:
            if (func_8012BEE8((s32) arg0, arg1) != 0) {
                func_sc04_004_80180878((s32) arg0);
            }
            break;
        }
        func_sc04_004_80181130((s32) arg0, 0);
    }
}

void func_sc04_004_80181A20(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s32, 0x94) == 0x18) {
            func_sc04_004_80181BD4(AF(arg0, s32, 0xCC));
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        if (AF(arg0, s16, 0x98) == 0) {
            func_8012A8B0((s32) arg0, (s32) &D_sc04_004_80199644);
            AF(arg0, s32, 0x1C) = 0x40;
            func_8012AD44((s32) arg0, 9);
        }
        break;
    }
    func_sc04_004_80181130((s32) arg0, 0);
}

void func_sc04_004_80181AD4(s32 arg0) {
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

s32 func_sc04_004_80181B6C(s32 arg0) {
    func_8012B23C(arg0);
    return func_8012AD44(arg0, 1);
}

s32 func_sc04_004_80181BA0(s32 arg0) {
    func_8012B21C();
    return func_8012AD44(arg0, 2);
}

void func_sc04_004_80181BD4(u8 *o) {
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

void func_sc04_004_80181C9C(u8 *arg0) {
    D_sc04_004_80192EA4[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, u8, 0x74) != 0)) {
        func_8012E014((s32) arg0);
        func_sc04_004_80182014((s32) arg0, (s32) &D_sc04_004_80192E94);
    }
}

s32 func_sc04_004_80181D1C(s32 arg0) {
    u8 *p = &D_80126B58;
    s16 lim;
    s16 y;
    s32 t;

    if (AF(arg0, u8, 0x74) != 0) {
        return 0;
    }
    lim = D_80126B62 - 0x20;
    if (func_sc04_004_80181E90(arg0, (s32) (p + 4), 0x48) != 0) {
        y = AF(arg0, s16, 0xA);
        if (y >= lim && lim >= y - 0x48) {
            return 1;
        }
    }
    return 0;
}

s32 func_sc04_004_80181DAC(u8 *o) {
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
            if (func_sc04_004_80181E90(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        case 0x239:
            h = (AF(AF(o, u8 *, 0x20), s16, 0x18) + AF(AF(p, u8 *, 0x20), s16, 0x18)) >> 6;
            if (func_sc04_004_80181E90(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        }
    }
    return 0;
}

s32 func_sc04_004_80181E90(s32 arg0, s32 arg1, u16 arg2) {
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

void func_sc04_004_80181EE8(u8 *o) {
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

void func_sc04_004_80182014(u8 *o, u8 *p) {
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

void func_sc04_004_80182170(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0x14;
        AF(arg1, s16, 0x62) = func_8012B6D4(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_004_801821E0(u8 *o) {
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
            RotTransSV(&D_sc04_004_80192EB4, &v, &flag);
            AF(e, s16, 6) = v.x;
            AF(e, s16, 0xA) = v.y;
            AF(e, s16, 0xE) = v.z;
            ApplyRotMatrixLV(&D_sc04_004_80192EBC, o + 0x10);
            AF(e, s32, 0x34) = 0x4000;
        }
    }
}

void func_sc04_004_80182320(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_004_801B3BDC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0x8040);
    AF(arg0, u16, 0x5C) = 0xCC00;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_004_80192E94 | 0x20000000);
    if (AF(arg0, s16, 0x70) != 0) {
        func_sc04_004_80181BA0((s32) arg0);
        return;
    }
    func_sc04_004_80181B6C((s32) arg0);
    AF(arg0, s32, 0xD0) = func_80143994((s32) arg0, 0x3000);
}

void func_sc04_004_801823F4(u8 *arg0) {
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
        func_sc04_004_801821E0(arg0);
        func_sc04_004_80181BA0((s32) arg0);
        func_8002D4C8(0xBCB, 0);
    }
    if (func_sc04_004_80181D1C((s32) arg0) != 0) {
        func_sc04_004_80181EE8(arg0);
    }
}

void func_sc04_004_801824A8(void) {
}

void func_sc04_004_801824B0(u8 *arg0) {
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
            if (func_sc04_004_80181D1C((s32) arg0) != 0) {
                func_sc04_004_80181EE8(arg0);
                return;
            }
            p = func_sc04_004_80181DAC((s32) arg0);
            if (p != 0 && AF(p, u16, 0) == 0x1FC) {
                func_sc04_004_80182170((s32) arg0, p);
            }
        }
    }
}

void func_sc04_004_80182574(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc04_004_8019A2FC);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc04_004_8019A0D4);
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

void func_sc04_004_801826EC(u8 *arg0) {
    D_sc04_004_8019A170[AF(arg0, u16, 2)]();
}

void func_sc04_004_80182728(u8 *arg0) {
    D_sc04_004_8019A184[AF(arg0, u16, 2)]();
}

void func_sc04_004_80182764(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc04_004_8019A15C);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc04_004_8019A168, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc04_004_80182844(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc04_004_8019A178);
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

void func_sc04_004_80182960(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_004_8019A42C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc04_004_801829BC(u8 *o, s32 n0) {
    s16 n = n0;
    SV8 a;
    SV8 b;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    b.y = a.y;
    b.z = a.z - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    if (func_80133784(1, &a, &b) & 0x8000) {
        AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        return 1;
    }
    a.x = AF(o, s16, 6) - ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    a.y = AF(o, s16, 0xA) - 0x10;
    b.z = a.z = AF(o, s16, 0xE) - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    b.x = a.x;
    b.y = a.y + 0x20;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        return 1;
    }
    return 0;
}

void func_sc04_004_80182B9C(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = -(rsin(AF(o, s16, 0xFC)) << 6);
    AF(o, s16, 0xFC) = (AF(o, u16, 0xFC) + 0xCC) & 0x7FF;
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_004_801A8380);
        AF(o, s16, 0xFC) = 0;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B864(o);
    func_8012B1B4(o, &v);
    func_8012CBA4(o);
    AF(o, s16, 0x52) = -(rsin(AF(o, s16, 0xFC)) >> 7);
    func_sc04_004_801829BC(o, 0x30);
    if (func_8012BCCC(o) <= 0x9000) {
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc04_004_801A84D0);
        AF(o, s16, 0x52) = 0;
    }
    if (AF(o, s16, 0xFE) != 0) {
        AF(o, s16, 2) = 5;
        SetScript(o, &D_sc04_004_801A8428);
        AF(o, s16, 0xFC) = 0;
    }
}

void func_sc04_004_80182CAC(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = rsin(AF(o, s16, 0xFC)) * 96;
    AF(o, s16, 0xFC) = (AF(o, u16, 0xFC) + 0xCC) & 0x7FF;
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_004_801A8428);
        AF(o, s16, 0xFC) = 0;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B864(o);
    func_8012B1B4(o, &v);
    func_8012CBA4(o);
    AF(o, s16, 0x52) = -(rsin(AF(o, s16, 0xFC)) >> 7);
    if (func_8012BCCC(o) > 0x8FFF) {
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc04_004_801A82F8);
        AF(o, s16, 0xFC) = 0;
        AF(o, s16, 0x52) = 0;
    }
    if (func_sc04_004_801829BC(o, -0x30) != 0) {
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc04_004_801A82F8);
        AF(o, s16, 0xFC) = 0xF;
        AF(o, s16, 0x52) = 0;
    }
}

void func_sc04_004_80182DC4(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0x10A) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~1);
        }
    }
    D_sc04_004_8019DC44[AF(arg0, u16, 2)]();
}

void func_sc04_004_80182E34(u8 *arg0) {
    if (AF(arg0, s32, 0x90) == &D_sc04_004_801A8898) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8A58);
    } else {
        AF(arg0, s16, 0x98) = 0;
    }
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xFC) = 0xF;
}

void func_sc04_004_80182E9C(u8 *arg0) {
    AF(arg0, s16, 0x52) = 0;
    if ((AF(arg0, u8, 0x5E) == 0x1D) && (AF(arg0, s16, 0x10A) == 0)) {
        AF(arg0, s16, 0x10A) = 0x3C;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
    }
}

void func_sc04_004_80182ED4(u8 *arg0) {
    UV4 a;
    UV4 b;
    s16 t;
    s16 r;
    u16 x, y, z;

    if (AF(arg0, u8, 0xC2) < 3) {
        t = AF(arg0, s16, 0x84);
        if (t == 0) {
            x = AF(arg0, u16, 6);
            a.x = x;
            y = AF(arg0, u16, 0xA);
            a.y = y - 0x10;
            z = AF(arg0, u16, 0xE);
            b.x = x;
            b.y = y + 0x10;
            a.z = z;
            b.z = z;
            if (func_80133784(1, &a, &b) & 0x6000) {
                func_8002D4C8(0x83C, 0);
                r = 0x1E;
                goto store;
            }
        } else {
            r = t - 1;
store:
            AF(arg0, s16, 0x84) = r;
        }
    }
}

void func_sc04_004_80182F7C(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0xA9E, 0, arg2);
    func_8002AC00(0x14);
}

void func_sc04_004_80182FA8(u8 *arg0) {
    func_80165988();
    if (AF(arg0, s32, 0x78) != 0) {
        func_8002A04C((s32) arg0);
    }
    func_8012C218((s32) arg0);
}

void func_sc04_004_80182FF0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_004_8019DB0C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        func_80143970(arg0);
        SetScript(arg0, (s32) &D_sc04_004_801A82F8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        if (AF(arg0, s16, 0x70) == 3) {
            AF(arg0, s32 *, 0xBC) = &D_sc04_004_8019DBA8;
            return;
        }
        AF(arg0, s32 *, 0xBC) = &D_sc04_004_8019DB40;
    }
}

void func_sc04_004_8018308C(u8 *arg0) {
    s16 temp_v0;

    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801A82F8);
    }
    if (AF(arg0, s16, 0xFE) != 0) {
        AF(arg0, s16, 0xFE) = 0;
        return;
    }
    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012BCCC((s32) arg0) <= 0x40000) {
        AF(arg0, s16, 2) = 2;
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8380);
    }
}

void func_sc04_004_80183130(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8380);
        AF(arg0, s16, 0xFC) = 0;
    }
    if (AF(arg0, s32, 0x94) == 0xF) {
        func_8012B1B4((s32) arg0, (s32) &D_sc04_004_8019DC18);
        AF(arg0, s32, 0x14) = 0xFFF60000;
        AF(arg0, s16, 2) = 4;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_004_8019DAFC | 0x40000000 | 0x20000000);
        if (func_8012D5E4((s32) arg0, (s32) &D_sc04_004_8019DC34, (s32) &D_sc04_004_8019DC3C, 0x20) == 1) {
            D_80126B96 = 4;
        }
        func_8002D4C8(0xA9D, 0);
    }
}

void func_sc04_004_801831FC(u8 *arg0) {
    if ((AF(arg0, s32, 0x94) < 0x3D) && (func_8012D5E4((s32) arg0, (s32) &D_sc04_004_8019DC24, (s32) &D_sc04_004_8019DC2C, 0x20) == 1)) {
        D_80126B96 = 4;
    }
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 5;
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8428);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_004_8019DAEC | 0x40000000 | 0x20000000);
    }
}

void func_sc04_004_801832A8(u8 *arg0) {
    AF(arg0, s16, 0x76) = 0;
    if (AF(arg0, s16, 0x100) == 0) {
        func_8002A04C((s32) arg0);
    }
    if (AF(arg0, s16, 0xFE) == 0) {
        func_8012C098((s32) arg0);
        return;
    }
    AF(arg0, s16, 2) = 6;
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u8, 0xC1) = 0;
}

void func_sc04_004_80183318(u8 *arg0) {
    if ((AF(arg0, u8, 0xC3) & 1) && (AF(arg0, s32, 0x90) != &D_sc04_004_801B0750)) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801B0750);
    }
}

void func_sc04_004_80183360(u8 *o) {
    SV8 a;
    SV8 b;
    s32 t;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    func_8012EFB8(&a, &b);
    t = b.x;
    if (t < 0) t = -t;
    if (t < 0xB5) {
        t = b.y;
        if (t < 0) t = -t;
        if (t < 0xA1) {
            func_8002D4C8(0x98A, 0);
        }
    }
}

void func_sc04_004_801833EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    SetScript(arg0, (s32) &D_sc04_004_801B0BD8);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc04_004_8018342C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    SetScript(arg0, (s32) &D_sc04_004_801B0750);
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, s32, 0x1C) = 0x2D;
}

s32 func_sc04_004_8018347C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = func_8012BCCC(arg0);
    if (arg1 >= temp_v0) {
        func_sc04_004_8018352C(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc04_004_801B0B30);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc04_004_8018352C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript(arg0, (s32) &D_sc04_004_801B08F0);
    AF(arg0, s32, 0x1C) = 0x1E;
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 0xFC) = 1;
        func_80142414(arg0, -0x96);
    }
}

s32 func_sc04_004_80183588(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc04_004_8018359C(u8 *o) {
    SV8 c;
    SpawnDef d;
    WMtx m;
    SV8 a;
    SV8 b;
    s32 t;

    if (AF(o, s32, 0x1C) == 9) {
        func_8012D5E4(o, &D_sc04_004_801A8C54, &D_sc04_004_801A8C54 + 8, 0x10);
        if (AF(o, s16, 0x70) & 0x8000) {
            func_8012EC04(o, 0, &m);
            func_8012F14C(&m, &D_sc04_004_801A8C64, &c);
            d.kind = 0x23E;
            d.flags = 0;
            d.unkC = 0x7FFF;
            d.x = c.x;
            d.y = c.y;
            d.z = c.z;
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12);
            func_8012C51C(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
            func_8012C51C(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) - 0x100;
            func_8012C51C(&d, o);
        }
        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        func_8012EFB8(&a, &b);
        t = b.x;
        if (t < 0) t = -t;
        if (t < 0xB5) {
            t = b.y;
            if (t < 0) t = -t;
            if (t < 0xA1) {
                func_8002D4C8(0x98B, 0);
            }
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc04_004_801B0750);
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s32, 0x1C) = 0x2D;
    }
}

void func_sc04_004_80183750(u8 *arg0) {
    s16 v[3];

    if (AF(arg0, u16, 0x5E) == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc04_004_80184614((s32) arg0, (s32) v, 0xD);
    }
}

void func_sc04_004_80183798(u8 *o) {
    u16 *s;
    u16 *d;
    s32 i;
    s32 n;

    D_sc04_004_801A8C6C[AF(o, u16, 2)]();
    if (func_8012C044(o) != 0) {
        AF(o, s16, 0x100) = 1;
        AF(o, s16, 0x76) = 0;
        if (AF(o, s16, 0x100) == 0) {
            func_8002A04C(o);
        }
        if (AF(o, s16, 0xFE) == 0) {
            func_8012C098(o);
        } else {
            AF(o, u16, 2) = 6;
            func_8012E8A8(o);
            AF(o, s16, 0x5C) = 0;
            AF(o, u8, 0xC1) = 0;
        }
    }
    if (AF(o, s16, 0xFE) != 0) {
        s = D_sc04_004_801A8C14;
        n = D_800B99DA & 0xF;
        d = &D_sc04_004_801B3AC0[n];
        for (i = 0; i < 15 - n; i++) {
            *d++ = *s++;
        }
        d = D_sc04_004_801B3AC0;
        for (i = 0; i < n; i++) {
            *d++ = *s++;
        }
        func_800183E0(&D_sc04_004_801A8C34);
    }
}

void func_sc04_004_801838E4(u8 *arg0) {
    D_sc04_004_801A8C90[AF(arg0, u16, 2)]();
}

void func_sc04_004_80183920(u8 *arg0) {
    D_sc04_004_801A8CA4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(AF(arg0, void *, 0xCC), u16, 8) = (u16) AF(arg0, u16, 6);
        AF(AF(arg0, void *, 0xCC), u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(AF(arg0, void *, 0xCC), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    }
}

extern void func_8001CB6C();
extern u8 D_sc04_004_801A8C98;

void func_sc04_004_801839A8(u8 *o) {
    u8 *p;

    if ((AF(o, s32, 0x20) = func_8012C1B8(o)) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), 0);
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1800;
    p = (u8 *)func_8012C194();
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0xCC) = p;
    func_8001CB6C(p, &D_sc04_004_801A8C98, 0x2E0, 0x100);
    AF(p, u8, 0x27) = 0x37;
    AF(p, s16, 0x10) = 0x400;
    AF(p, s32, 4) |= 0x50000000;
    AF(p, s16, 0x14) = AF(o, s16, 0xFC);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x1800;
    AF(o, s16, 2) = 1;
    func_80143994(o, 0x1000);
}

void func_sc04_004_80183A80(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, -0x100000);
}

void func_sc04_004_80183AD8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x80);
    if (func_8012CBF4((s32) arg0) == 0) {
        if (func_8012D5E4((s32) arg0, (s32) &D_sc04_004_801A8CB0, (s32) (&D_sc04_004_801A8CB0 + 8), 0x10) == 0) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                goto block_4;
            }
        } else {
block_4:
            D_80126B96 = 0x13;
            goto block_5;
        }
    } else {
block_5:
        func_sc04_004_80183B64((s32) arg0);
    }
}

void func_sc04_004_80183B64(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

void func_sc04_004_80183B9C(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        if (func_8012BCCC(arg0) <= 0x90000) {
            func_sc04_004_801833EC((s32) arg0);
        }
    } else {
        if (func_8012BCCC(arg0) <= 0x24000) {
            func_sc04_004_801833EC((s32) arg0);
        }
    }
}

void func_sc04_004_80183C08(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc04_004_8018342C(arg0);
    }
}

void func_sc04_004_80183C40(s32 arg0) {
    if (func_8012BEE8(arg0) == 1) {
        if (AF(arg0, s16, 0x70) & 0x8000) {
            func_sc04_004_8018347C(arg0, 0x40000, 0xC4000);
        } else {
            func_sc04_004_8018347C(arg0, 0x9000, 0x24000);
        }
    }
}

void func_sc04_004_80183CA4(s32 arg0) {
    s32 v;
    void *p;

    v = func_8012B8E4(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (func_8012BEE8(arg0) != 0) {
        func_sc04_004_80183588(arg0);
    }
}

void func_sc04_004_80183CFC(void) {
}

void func_sc04_004_80183D04(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_004_801A8B80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc04_004_801A8BB4;
        AF(arg0, s32, 0xC4) = 1;
        AF(arg0, s16, 0xAE) = 8;
        temp_v0 = func_8012C658(0x23F, (s32) AF(arg0, s16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        if (func_8012E504(arg0, 0x23D) == 0) {
            AF(arg0, s16, 0xFE) = 1;
        }
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc04_004_801B0B30);
    }
}

void func_sc04_004_80183DBC(u8 *arg0) {
    s32 temp_v0;
    u16 t;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_004_801AA6D0);
    t = AF(AF(arg0, void *, 0x64), u16, 0x36);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xFE) = 0x7FFF;
    AF(arg0, u16, 0xFC) = t;
}

void func_sc04_004_80183E2C(u8 *o) {
    SV8 v;
    u8 *p;

    p = AF(o, u8 *, 0x64);
    if (AF(o, s16, 0xFE) == 0x7FFF) {
        AF(o, s16, 0xFE) = AF(AF(o, u8 *, 0x20), s16, 0x12);
    }
    if (AF(o, s16, 0xFC) != AF(p, s16, 0x36)) {
        func_8012C218(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), SV8, 0x10) = AF(AF(p, u8 *, 0x20), SV8, 0x10);
    if (AF(p, u8 *, 0x90) != &D_sc04_004_801B0D28) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xFE);
        AF(o, s32, 4) = AF(p, s32, 4);
        AF(o, s32, 8) = AF(p, s32, 8);
        AF(o, s32, 0xC) = AF(p, s32, 0xC);
    } else {
        FaceHelper(p, &D_sc04_004_801A8C88, &v);
        AF(o, s16, 6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
    }
    AF(AF(o, u8 *, 0x20), SV8, 0x18) = AF(AF(p, u8 *, 0x20), SV8, 0x18);
    AF(AF(o, u8 *, 0x20), s16, 0x2C) = AF(AF(p, u8 *, 0x20), s16, 0x2C);
    AF(AF(o, u8 *, 0x20), s32, 4) = AF(AF(p, u8 *, 0x20), s32, 4);
}

void func_sc04_004_80183FA0(u8 *arg0) {
    D_sc04_004_801B0DF4[AF(arg0, u16, 2)]();
}

void func_sc04_004_80183FDC(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc04_004_801844FC() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc04_004_801B0DA8, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc04_004_801B0DB4);
    func_sc04_004_80184554((s32) arg0);
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, u16, 0x2C) = 0xC010;
    x = AF(arg0, u16, 2);
    x++;
    temp_a2 = AF(AF(arg0, void *, 0x64), u16, 0x36);
    AF(arg0, s32, 0x1C) = 0x180;
    AF(arg0, u16, 2) = x;
    AF(arg0, u16, 0x10A) = temp_a2;
    func_8002D4C8(0xAA0, 0, temp_a2);
}

void func_sc04_004_801840D8(u8 *arg0) {
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
            func_sc04_004_80184554(arg0);
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
    func_sc04_004_801845D0(arg0);
}

void func_sc04_004_80184368(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc04_004_80184554(arg0);
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
    func_sc04_004_801845D0(arg0);
}

s32 func_sc04_004_801844FC(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_004_80184554(u8 *o) {
    SMtx m;
    SV8 c;
    u8 *p;

    p = AF(o, u8 *, 0x64);
    if (AF(p, s16, 0x36) == AF(o, s16, 0x10A)) {
        func_8012EC04(p, AF(o, s16, 0xFC), &m);
        func_8012F14C(&m, o + 0x88, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
}

void func_sc04_004_801845D0(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc04_004_80184614(s32 o, s16 *v, s32 arg2_0) {
    SpawnDef d;
    s16 arg2 = arg2_0;

    d.x = v[0];
    d.y = v[1];
    d.z = v[2];
    d.kind = 0x35C;
    d.flags = 0;
    d.unk8 = 0;
    d.unkE = arg2;
    d.unk10 = 0;
    d.unkC = 0x7FFF;
    func_8012C51C(&d, o);
}
