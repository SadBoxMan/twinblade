#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_115_8017BE9C(void) {
}

void func_sc03_115_8017BEA4(void) {
}

void func_sc03_115_8017BEAC(void) {
}

void func_sc03_115_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_115_80183EE8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_115_8017D008(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_115_80183EF0[])();
void func_sc03_115_8017D030(void);
extern void func_800D1EBC();
extern void (*D_sc03_115_80183EFC[])();
extern u8 D_sc03_115_80183F08;
extern void func_8016EE40();
extern u8 D_sc03_115_80183F14;
extern void (*D_sc03_115_80183F28[])();
void func_sc03_115_8017D09C(u8 *arg0);
extern void func_sc03_115_8017D374();
extern void (*D_sc03_115_80183F44[])();
extern void (*D_sc03_115_80184110[])();
extern s32 func_800D0EC4();
extern s32 func_sc03_115_8017D058();
extern void func_sc03_115_8017D2BC();
extern void (*D_sc03_115_801925E4[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc03_115_8018F71C;
extern void func_8012C218();
extern void func_80016714();

extern s32 D_sc03_115_80194FE4;
extern s32 func_8012C044();
extern void (*D_sc03_115_8018AB80[])();
extern void func_sc03_115_8017EFB8();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc03_115_8018C7D8;
extern u8 D_sc03_115_8018F904;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc03_115_8018FAB4;
extern void func_sc03_115_8017EC14();
extern s16 D_80126CE0;
extern u8 D_sc03_115_8018E188;
extern u8 D_sc03_115_8018FDEC;
extern void (*D_sc03_115_8018FF58[])();
extern void func_sc03_115_8017FD20();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_115_80192448;
extern u8 D_sc03_115_8018FF78;
extern s32 func_8012D5E4();
extern s32 func_sc03_115_8017FD08();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern s32 func_8012C354();
extern u8 D_sc03_115_8018AA74;
extern u8 D_sc03_115_8018AAA8;
extern void func_80143970();
extern void func_sc03_115_8017E998();
extern s32 func_sc03_115_8017EADC();
extern u16 D_800B99DA;
extern void func_80130D48();
extern void func_8002AC00();

extern u8 D_800D5DC0;
extern s16 D_80126B38;
extern void func_80154274();
extern s16 D_80126B3C;
extern s32 func_80012B04();
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
extern void func_8012A018();
extern void func_8012A094();
extern void func_800D0F0C();
extern void func_800291A0();
extern s32 func_80178970();
extern void func_80178D18();

extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;


extern void func_80131E00();
extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();


extern s32 func_8012BD3C();

extern void *D_80126B78;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_115_8017BEBC(u8 *obj) {
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

void func_sc03_115_8017CD9C(u8 *arg0) {
    D_sc03_115_80183EE8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_115_8017CDD8(u8 *arg0) {
    func_sc03_115_8017D008();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_115_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_115_8017CE40(u8 *arg0) {
    D_sc03_115_80183EF0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_115_8017CE7C(u8 *arg0) {
    func_sc03_115_8017D030();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_115_8017CEBC(u8 *arg0) {
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

void func_sc03_115_8017CF38(void) {
    func_800D1EBC();
}

void func_sc03_115_8017CF58(u8 *arg0) {
    D_sc03_115_80183EFC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_115_8017CF94(u8 *arg0) {
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

void func_sc03_115_8017D008(void) {
    func_8016EE40((s32) &D_sc03_115_80183F08, 0x01000000);
}

void func_sc03_115_8017D030(void) {
    func_8016EE40((s32) &D_sc03_115_80183F14, 0x01000000);
}

s32 func_sc03_115_8017D058()
{
    D_80126B38 = 0;
    (*(u16 *)&D_80126B3C) = AF(D_80126B78, u16, 0x12);
    return SetActionHandler((s32) func_sc03_115_8017D09C);
}

void func_sc03_115_8017D09C(u8 *arg0) {
    D_sc03_115_80183F28[AF(arg0, u8, 0x214)]();
}

void func_sc03_115_8017D0D8(s32 arg0) {
    BeginScene();
    NextPhase(arg0);
}

void func_sc03_115_8017D108(s32 arg0) {
    NextPhase(arg0);
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
extern void func_80128ED8();
extern s32 func_80132EF4();
extern void func_sc03_115_80180340();

typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern void func_8012B178();
extern s32 func_8012B608();
extern s32 func_sc03_115_8017FC5C();
extern s32 func_8012CBF4();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
extern void func_8012B200();
extern void func_8012B77C();
extern void func_8012B2CC();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_sc03_115_8017EA70();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_115_8017D420();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { u16 a, b, c, d; } U16x4;
extern u8 D_sc03_115_8018FF28;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

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
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void func_8012B23C();
extern u8 D_80078E78;
extern u8 D_sc03_115_8018F9F4;
extern void func_sc03_115_8017EBD8();
extern s32 func_8012BDBC();
extern u8 D_sc03_115_8018C7E8;
extern void func_sc03_115_80180400();
extern u8 D_sc03_115_8018FECC;
extern u8 *func_80143BDC();
extern s32 func_8014CB1C();
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern u8 D_sc03_115_8018FEEC;
extern u8 D_sc03_115_8018FF30;
extern void func_80143994();
extern void func_8012E88C();
extern s32 func_8012E778();
extern s16 D_80126CBA;
extern void func_8012CAE4();
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_sc03_115_80192598;
extern u8 D_sc03_115_801925A4;
extern s32 func_sc03_115_801802E8();
extern s32 func_8012C194();
extern void func_8012EC04();

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
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern s32 func_8012C51C();

extern u8 D_sc03_115_8018ABB0;
extern void func_8012F568();

extern SV8 D_80126940;
extern s32 func_8012BE54();
extern void func_80178BF8();
extern void func_80172710();
extern void *D_801151D4;
extern u8 D_800D5DA8;
extern s32 func_80029504();
extern s32 func_800291B4();
extern void func_80178CBC();
extern u8 D_sc03_115_80183F98;
extern u8 D_sc03_115_801840B0;
extern u8 D_sc03_115_80184010;

void func_sc03_115_8017D128(s32 arg0) {
    SV8 p;

    p.x = AF(D_801151D4, s32, 0x3C);
    p.y = AF(D_801151D4, s32, 0x40);
    p.z = AF(D_801151D4, s32, 0x44);
    if ((s16)ActionHelper_1AB0(arg0, &p) == 0) {
        EndScene(arg0);
        func_80154274(arg0, (s32) &D_800D5DA8);
        NextPhase(arg0);
    }
}

void func_sc03_115_8017D1A4(s32 arg0) {
    if (D_80126B38 != 0) {
        func_80154274(arg0, (s32) &D_800D5DC0);
        NextPhase(arg0);
    }
}

void func_sc03_115_8017D1EC(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        BeginScene();
        NextPhase((s32) arg0);
    }
}

void func_sc03_115_8017D234(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) D_80126B3C, 4);
    if ((temp_v0 << 0x10) == 0) {
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc03_115_8017D2B4(void) {
}

void func_sc03_115_8017D2BC()
{
    D_80126B38 = 1;
}

void func_sc03_115_8017D2D0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_115_8017D374, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_115_8017D374((s32) &D_80126948);
}

void func_sc03_115_8017D374(s32 arg0) {
    D_sc03_115_80183F44[AF(arg0, u8, 4)]();
}

void func_sc03_115_8017D3B0(u8 *o) {
    SV8 v;

    v = D_80126940;
    if (v.x < -0x170) {
        v.x = -0x170;
    }
    v.z = -0x20;
    func_sc03_115_8017D420(o, &v);
}

void func_sc03_115_8017D420(u8 *arg0, u8 *arg1) {
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

void func_sc03_115_8017D5B8(u8 *arg0) {
    D_sc03_115_80184110[AF(arg0, u16, 2)]();
}

s32 func_sc03_115_8017D5F4(void) {
    return 2 - D_sc03_115_80194FE4;
}

s32 func_sc03_115_8017D608(void) {
    return func_800D0EC4() == 0;
}

void func_sc03_115_8017D628(u8 *arg0) {
    void *temp_a0;

    func_800D0F0C(func_800D0EC4(), AF(arg0, s16, 0x70) + 0x62);
    func_800291A0(0xDE, (s32) (u8) AF(arg0, s16, 0x70));
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x70) = 0;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
}

extern s32 func_800D0F4C();
extern B8 D_sc03_115_80183F70[];
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern u8 D_sc03_115_80183F48;
extern s32 func_801788B8();
s32 *func_sc03_115_8017D9C4(u8 *o);

void func_sc03_115_8017D684(u8 *o) {
    s32 v;
    s32 r;
    s32 i;

    v = func_800291B4(0xDE);
    r = func_800D0F4C((u8) (v + 0x62));
    func_800291A0(0xDE, AF(o, u8, 0x70));
    func_800D0F0C(r, AF(o, s16, 0x70) + 0x62);
    i = (u8) v;
    AF(o, s16, 0x70) = i;
    SetScript(o, &D_sc03_115_80183F70[i]);
}

void func_sc03_115_8017D710(s32 arg0) {
    func_sc03_115_8017D058(arg0);
}

void func_sc03_115_8017D730(s32 arg0) {
    func_sc03_115_8017D2BC(arg0);
}

void func_sc03_115_8017D750(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0x50) = (s16) (D_80126B5E - (AF(arg0, u16, 6) + 0x20));
    AF(arg0, s16, 0x52) = (s16) (D_80126B62 - (AF(arg0, u16, 0xA) + 0x30));
    AF(arg0, s16, 0x54) = (s16) (D_80126B66 - (AF(arg0, u16, 0xE) + 0x40));
    func_8002D4C8(0x6A6, 0, arg2);
}

void func_sc03_115_8017D7BC(u8 *arg0) {
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
}

void func_sc03_115_8017D7CC(u8 *o) {
    s32 v;
    u8 *t;

    v = func_8012C1B8();
    AF(o, s32, 0x20) = v;
    if (v == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CA1C(v, &D_sc03_115_80183F48);
    if ((u32) func_80029504() >= 0x294) {
        func_8012C218(o);
        return;
    }
    if ((u8) func_800291B4(0xDE) == AF(o, s16, 0x70)) {
        t = AF(o, u8 *, 0x20);
        AF(o, s16, 0x70) = 0;
        AF(t, s32, 4) |= 0x80000000;
        func_8012B2CC(o);
    }
    SetScript(o, &D_sc03_115_80183F70[AF(o, s16, 0x70)]);
    AF(o, u8, 0xC0) = 1;
    AF(o, s16, 2) = 1;
    if ((u32) func_80029504() >= 0x280) {
        func_801788B8(o, func_sc03_115_8017D9C4);
    }
}

void func_sc03_115_8017D8C0(void) {
}

void func_sc03_115_8017D8C8(u8 *o) {
    if ((u32) func_80029504() < 0x28A) {
        func_80178CBC(o, &D_sc03_115_80183F98);
    } else if ((u8) func_800291B4(0xDE) != 0) {
        func_80178CBC(o, &D_sc03_115_801840B0);
    } else {
        func_80178CBC(o, &D_sc03_115_80184010);
    }
    AF(o, s16, 2) = 3;
}

void func_sc03_115_8017D948(s32 arg0) {
    void *temp_a0;
    void *temp_v0;

    if (func_80178970() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        if (AF(arg0, s16, 0x70) == 0) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

s32 *func_sc03_115_8017D9C4(u8 *o) {
    s32 *r;

    if (AF(AF(o, u8 *, 0x64), s16, 0x70) == 0) {
        return NULL;
    }
    if (func_8012BE54(AF(o, u8 *, 0x64)) < 0x1001) {
        AF(AF(o, u8 *, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc03_115_8017DA34(void) {
    return 0x59;
}

void func_sc03_115_8017DA3C(u8 *arg0) {
    void *temp_v0;

    D_sc03_115_8018AB80[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_115_8017EFB8((s32) arg0);
        }
    }
}

void func_sc03_115_8017DAC8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_115_8018AA74) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_115_8018AAA8;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_115_8017DB44(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_115_8018F71C);
}

void func_sc03_115_8017DB74(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_115_8018C7D8);
            SetScript((s32) arg0, (s32) &D_sc03_115_8018F904);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        temp_v0 = func_8012B8E4((s32) arg0, 0xA);
        temp_a1 = AF(arg0, s32, 0x20);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
        if ((func_8012BEE8((s32) arg0, temp_a1) != 0) || (temp_v0 == 0)) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

void func_sc03_115_8017DC44(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc03_115_8018F904);
    AF(arg0, s32, 0x1C) = (rand() % 17) + 0x28;
    AF(arg0, s16, 0x52) = 0;
}

void func_sc03_115_8017DCB8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_115_8017DCEC(u8 *arg0) {
    s32 unused[4];
    u8 *g = &D_80078E78;
    s32 r;
    s32 y;

    r = rand() % 1024;
    y = AF(AF(arg0, void *, 0x20), s16, 0x12);
    AF(arg0, s32, 0xE0) = (rand() & 1) ? y + r : y - r;
    func_8012B23C(arg0);
    SetScript((s32) arg0, (s32) &D_sc03_115_8018F9F4);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s32, 0xE4) = 0;
    if (AF(g, u8, 0x36) != 0) {
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_115_8017DDB0(u8 *arg0) {
    if (func_8012BD3C(arg0, 0x400, 0x20000) == 1) {
        if (func_8012BCCC(arg0) <= 0x3000) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 8);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
    }
    func_8012B178(arg0, AF(arg0, s32, 0xE8));
    func_sc03_115_8017EE7C(arg0, 0);
    if (func_sc03_115_8017EC80((s32) arg0) != 0 && func_8012BEE8(arg0) != 0) {
        func_sc03_115_8017EBD8(arg0);
    }
}

void func_sc03_115_8017DE88(u8 *arg0) {
    if (func_8012BDBC(arg0, 0x400) == 1) {
        if (func_8012BCCC(arg0) < 0x3001) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 4);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc03_115_8017EE7C(arg0, 1);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc03_115_8017EE7C(arg0, 0);
    }
    func_sc03_115_8017EC80((s32) arg0);
}

void func_sc03_115_8017DF68(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc03_115_8018FAB4, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc03_115_8017EC14((s32) arg0);
}

void func_sc03_115_8017DFB0(s32 arg0) {
    s32 f;
    s32 m;

    AF(AF(arg0, s32, 0x20), s16, 0x12) += func_8012B8E4(arg0, 0xA);
    if (AF(arg0, s32, 0xDC) & 0x20) {
        if (AF(arg0, s32, 0x1C) >= 0xA && AF(arg0, s32, 0x1C) < 0x17) {
            func_sc03_115_8017EA70(arg0);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == 0x16) {
            func_sc03_115_8017E998(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x10) {
            func_sc03_115_8017EADC(arg0);
        }
    }
    if (func_8012BEE8(arg0) != 0) {
        f = AF(arg0, s32, 0xDC);
        if (f & 1) {
            m = ~1;
        } else if (f & 0x10) {
            m = ~0x10;
        } else {
            goto other;
        }
        AF(arg0, s32, 0xDC) = f & m;
        AF(arg0, s16, 2) = 3;
        return;
other:
        if (func_8012BD3C(arg0, 0x400, 0x4000) == 0) {
            AF(arg0, s16, 2) = 5;
        } else {
            AF(arg0, s32, 0x1C) = 0x1E;
            func_sc03_115_8017EC14(arg0);
        }
    }
}

void func_sc03_115_8017E0D8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_115_8018F904);
    temp_v0 = AF(arg0, s32, 0xDC);
    temp_v1 = temp_v0 & ~8;
    AF(arg0, s32, 0xDC) = temp_v1;
    if (temp_v0 & 0x40) {
        AF(arg0, s32, 0xDC) = (s32) (temp_v1 & ~0x40);
        var_v0 = 0x1E;
    } else {
        temp_v0_2 = rand();
        var_v0_2 = temp_v0_2 / 16;
        var_v0 = (temp_v0_2 - (var_v0_2 * 0x10)) + 0xF;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    if (func_8012BD3C((s32) arg0, 0x400, 0x8000) == 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 8);
    }
}

void func_sc03_115_8017E190(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s32, 0xDC) & 8) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x44);
        goto block_3;
    }
    temp_v0 = func_8012B8E4((s32) arg0, 8);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + temp_v0);
    if (temp_v0 != 0) {
block_3:
        if (func_8012BEE8((s32) arg0) != 0) {
            goto block_4;
        }
    } else {
block_4:
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_115_8017E220(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_115_8017E998((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc03_115_8017E264(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc03_115_8017EADC(arg0);
    }
}

void func_sc03_115_8017E29C(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
}

void func_sc03_115_8017E2C4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_115_8017E2F4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_115_8017E998((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_115_8017EADC((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

void func_sc03_115_8017E380(u8 *arg0) {
    s16 sp[3];
    u8 *temp_a0;

    temp_a0 = AF(arg0, u8 *, 0x20);
    if (AF(temp_a0, s32, 0x24) == (s32) &D_sc03_115_8018C7E8) {
        func_8001C924(temp_a0, &D_sc03_115_8018C7D8);
    }
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, s32, 0xDC) &= ~0x10;
    if (AF(arg0, u16, 0x5E) == 0x23) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D4C8(0xAA1, 0);
    } else if (AF(arg0, u16, 0x5E) == 0x24) {
        sp[0] = 0;
        sp[1] = 0x10;
        sp[2] = 0;
        func_sc03_115_80180400(arg0, sp, 0);
    }
}

void func_sc03_115_8017E438(u8 *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_v1_4 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1_4, u16, 0x18) >= 0x1800) {
            AF(temp_v1_4, u16, 0x1C) = 0x1800U;
            AF(temp_v1_4, u16, 0x1A) = 0x1800U;
            AF(temp_v1_4, u16, 0x18) = 0x1800U;
        }
    }
    if (AF(arg0, s32, 0x1C) == 0xE) {
        func_sc03_115_8017E998((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_115_8017EADC((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

void func_sc03_115_8017E528(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) &= ~0x80;
    } else {
        AF(arg0, u16, 0x104) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) |= 0x80;
    }
}

void func_sc03_115_8017E580(u8 *arg0) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8));
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_115_8017E624(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_115_8017E634(u8 *arg0, s32 arg1) {
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (AF(arg0, s32, 0xDC) & 0x80) {
            p1 = AF(arg0, u8 *, 0x20);
            AF(p1, s16, 0x18) = AF(p1, s16, 0x1C) = 0x1000;
            AF(arg0, s32, 0xDC) &= ~0x80;
        } else {
            p2 = AF(arg0, u8 *, 0x20);
            AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        }
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        func_80131E00((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc03_115_8017E71C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_115_8018E188);
    SetScript((s32) arg0, (s32) &D_sc03_115_8018FDEC);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc03_115_8017E778(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_115_8017EFB8((s32) arg0);
    }
}

void func_sc03_115_8017E800(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, s32, 0xDC) & 2) {
        AF(arg0, s32, 0x1C) = 0x2D;
        SetScript((s32) arg0, (s32) &D_sc03_115_8018FECC);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
        AF(arg0, s16, 0x52) = 0;
    } else {
        AF(arg0, s32, 0x1C) = 0x37;
        func_8001C924((s32) AF(arg0, void *, 0x20), (s32) &D_sc03_115_8018E188);
        SetScript((s32) arg0, (s32) &D_sc03_115_8018FDEC);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
    }
    func_8002D4C8(func_8012BCCC((s32) arg0) <= 0x8FFF ? 0x51F : 0x520, 0);
}

void func_sc03_115_8017E8D0(u8 *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    if ((AF(arg0, s32, 0xDC) & 2) && (AF(arg0, s32, 0x1C) >= 0x15)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x1E);
    }
    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_115_8017EFB8((s32) arg0);
    }
}

void func_sc03_115_8017E998(u8 *o) {
    SV4 b;
    s32 w;
    s32 *wp;
    s32 i;
    u8 *p;

    if (AF(o, s16, 0xAA) > 0) {
        return;
    }
    i = 0;
    wp = &w;
    for (; i < 20; i++) {
        func_8012B0B4(wp, rand() % 4096, 0x40);
        b.x = AF(o, u16, 6) + w;
        b.y = AF(o, u16, 0xA) - 0x60;
        b.z = AF(o, u16, 0xE) + (w >> 16);
        p = func_80143BDC(&b);
        if (p != 0) {
            AF(AF(p, u8 *, 0xCC), u8, 0x27) = 0x5B;
        }
    }
    func_8002D4C8(0x521, 0);
}

s32 func_sc03_115_8017EA70(u8 *arg0) {
    if (AF(arg0, s32, 0xDC) & 1) {
        return 0;
    }
    if (func_8012D5E4(arg0, &D_sc03_115_8018ABB0, &D_sc03_115_8018ABB0 + 8, 0x13) == 1) {
        AF(arg0, s32, 0xDC) |= 1;
        return 1;
    }
    return 0;
}

s32 func_sc03_115_8017EADC(u8 *arg0) {
    SV8 d;
    SV8 pos;

    if (AF(arg0, u16, 0x5E) == 0x1E) {
        return 0;
    }
    if (AF(arg0, s32, 0xDC) & 0x10) {
        return 0;
    }
    if (func_8012BD14(arg0) < 0x2401) {
    pos.x = D_80126B5E;
    pos.y = D_80126B62;
    pos.z = D_80126B66;
    d.x = pos.x - AF(arg0, u16, 6);
    d.y = pos.y - AF(arg0, u16, 0xA);
    d.z = pos.z - AF(arg0, u16, 0xE);
    VectorNormalSS(&d, &d);
    pos.y -= 0x20;
    func_8012F568(1, 0x2001, 0, 0, &pos, &d);
    AF(arg0, s32, 0xDC) |= 0x10;
        return 1;
    }
    return 0;
}

void func_sc03_115_8017EBD8(u8 *arg0) {
    if (rand() & 1) {
        AF(arg0, s16, 2) = 10;
    } else {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_115_8017EC14(u8 *arg0) {
    if (func_8014CB1C() != 0) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else if (rand() & 1) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else {
        AF(arg0, s32, 0xDC) &= ~0x20;
    }
}

s32 func_sc03_115_8017EC80(s32 arg0) {
    SV8 a;
    SV8 b;
    s32 d;
    u8 *p;
    s32 i;
    s32 t;
    s32 *dp;

    t = func_8012CBA4();
    if ((t & 0xFF) == 2) {
        func_80131E00(arg0, 0x12);
        return 0;
    }
    if ((t & 0xFF) == 0x1A) {
        func_sc03_115_8017EFB8(arg0);
        return 0;
    }
    if (0) {
miss:
        func_8012ADE4(arg0);
        return 1;
    }
    if (!(t & 0x2000)) {
        func_8012ADE4(arg0);
    }
    AF(arg0, s32, 0xDC) &= ~0x40;
    if (AF(arg0, s32, 0x14) > 0xFFFFF) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, s32, 0x58) != 0 && (u8 *)arg0 != p
            && func_8012BC60(arg0 + 4, p + 4) < 0x2400) {
            dp = &d;
            func_8012B0B4(dp, func_8012B6D4(arg0 + 4, p + 4), 0x61);
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            b.x += *(s32 *)&d;
            b.z += *(s32 *)&d >> 16;
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                goto miss;
            }
            AF(arg0, u16, 6) = b.x;
            AF(arg0, u16, 0xA) = b.y;
            AF(arg0, u16, 0xE) = b.z;
            break;
        }
    }
    return 1;
}

s32 func_sc03_115_8017EE7C(u8 *o, s32 s) {
    V3 out;
    V3 in;
    SV8 a;
    SV8 b;
    in.x = in.y = 0;
    in.z = -0x80000;
    ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &in, &out);
    a.x = AF(o, u16, 0x3A);
    a.y = AF(o, u16, 0x3E);
    a.z = AF(o, u16, 0x42);
    out.x += AF(o, s32, 0x44);
    out.y += AF(o, s32, 0x48);
    out.z += AF(o, s32, 0x4C);
    out.x += AF(o, s32, 4);
    out.y += AF(o, s32, 8);
    out.z += AF(o, s32, 0xC);
    b.x = AF(&out.x, u16, 2);
    b.y = AF(&out.y, u16, 2);
    b.z = AF(&out.z, u16, 2);
    func_8012CEB0(&a, &b, 0);
    if (AF(o, s16, 0xA) > b.y) {
        AF(o, s32, 0xE8) = -0x80000 - (s << 19);
        return 1;
    }
    AF(o, s32, 0xE8) = -0x20000 - (s << 17);
    return 0;
}

void func_sc03_115_8017EFB8(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C();
        func_8002AC00(0x1A);
    }
    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_v1 = AF(arg0, void *, 0x68);
        if ((temp_v1 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) & 0x7FFF);
        }
    }
    func_8012C218(arg0);
}

void func_sc03_115_8017F04C(u8 *arg0) {
    s32 temp_v0;

    D_sc03_115_8018FF58[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_115_8017FD20((s32) arg0);
        }
    }
}

void func_sc03_115_8017F0C8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_115_8018FEEC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *) &D_sc03_115_8018FF30;
        AF(arg0, s32, 0xC4) |= 1;
        AF(arg0, s32, 0xE4) = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc03_115_80192448);
        func_80143994(arg0, 0x1000);
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc03_115_8017F188(u8 *arg0) {
    s16 r;

    r = rand();
    AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC);
    func_8012B200(arg0);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, s32, 0x1C) = (s16)(r % 1800) + 0xE10;
    } else {
        AF(arg0, s32, 0x1C) = (s16)(r % 60) + 0x78;
    }
    AF(arg0, s16, 0xFE) = r % 32 + 10;
    AF(arg0, s16, 2) = 2;
}

void func_sc03_115_8017F2B0(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc03_115_8017FC5C(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && func_8012BEE8(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc03_115_8017FD08(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc03_115_8017F420(u8 *arg0) {
    s32 v;
    s32 w;
    s32 t;
    s32 d;
    s32 c;

    func_8012B200(arg0);
    AF(arg0, s32, 0x1C) = rand() % 128 + 0x80;
    AF(arg0, s16, 0xFE) = rand() % 32 + 10;
    func_8012B0B4(&v, rand() % 4096, rand() % AF(arg0, s32, 0xDC));
    w = v;
    AF(arg0, s16, 0x102) = AF(arg0, s16, 0x88) + w;
    AF(arg0, s16, 0x106) = AF(arg0, s16, 0x8C) + (w >> 16);
    if (AF(arg0, u16, 0x70) & 0x20) {
        d = rand() % 256;
        c = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0x104) = (rand() & 1) ? c + d : c - d;
    } else {
        AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC) - rand() % 256;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_115_8017F5B4(u8 *arg0) {
    HV16 p;
    u8 gap[8];
    s32 v;
    s32 w;
    s32 d;
    s32 c;

    p.x = AF(arg0, s16, 0x102);
    p.z = AF(arg0, s16, 0x106);
    p.y = AF(arg0, s16, 0x104);
    if (!(AF(arg0, u16, 0x70) & 0x20)) {
        p.y += D_80126B62;
    } else {
        p.y += AF(arg0, s16, 0x8A);
    }
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), w >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = rand() % 128 + 0x80;
        AF(arg0, s16, 0xFE) = rand() % 32 + 10;
        func_8012B0B4(&v, rand() % 4096, rand() % AF(arg0, s32, 0xDC));
        w = v;
        AF(arg0, s16, 0x102) = AF(arg0, s16, 0x88) + w;
        AF(arg0, s16, 0x106) = AF(arg0, s16, 0x8C) + (w >> 16);
        if (AF(arg0, u16, 0x70) & 0x20) {
            d = rand() % 256;
            c = AF(arg0, s16, 0xFC);
            AF(arg0, s16, 0x104) = (rand() & 1) ? c + d : c - d;
        } else {
            AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC) - rand() % 256;
        }
    }
}

void func_sc03_115_8017F808(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    func_8012B0B4(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc03_115_8017FC5C(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_115_8017F914(u8 *arg0) {
    s32 sp10;
    s32 one;
    s32 w;
    s16 h;
    u8 *q;

    one = 1;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_8012CBF4(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
            return;
        }
        h = AF(arg0, s16, 0x100);
        if (h < AF(arg0, s16, 0xA)) {
            AF(arg0, s16, 0xA) = h;
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
        }
        return;
    case 1:
        h = func_8012B8E4(arg0, 6);
        q = AF(arg0, u8 *, 0x20);
        AF(q, u16, 0x12) += h;
        if (func_8012BEE8(arg0, q) == 0) {
            return;
        }
        if (!(rand() & 1)) {
            AF(arg0, u16, 0x34)++;
            func_8012B200(arg0);
            AF(arg0, s32, 0x1C) = 0x20;
            func_8002D4C8(0x6FF, 0);
            return;
        }
        break;
    case 2:
        func_sc03_115_8017FC5C(&sp10, arg0, &D_sc03_115_8018FF28);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        func_8012B178(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        func_8012CBF4(arg0);
        if (func_sc03_115_8017FC30(arg0) != one && func_8012BEE8(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc03_115_8017FAB0(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if ((func_8012BEE8() != 0) && (func_8012E778(arg0, 0xA000C8) == 0)) {
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 0x76) = (u16) AF(AF(arg0, void *, 0x78), u16, 0);
        AF(temp_v1, s16, 0x1C) = 0x1000;
        AF(temp_v1, s16, 0x1A) = 0x1000;
        AF(temp_v1, s16, 0x18) = 0x1000;
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0x10);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc03_115_80192448);
    }
}

void func_sc03_115_8017FB6C(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 7;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x10) = 0;
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc03_115_8017FBF8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_115_80192448);
}

s32 func_sc03_115_8017FC30(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_115_8018FF78, (s32) (&D_sc03_115_8018FF78 + 8), 5) != 0;
}

s32 func_sc03_115_8017FC5C(s32 *arg0, u8 *arg1, u16 *arg2) {
    s16 v[8];
    s32 r[2];
    u16 *p;
    s16 *g;

    g = &D_80126CBA;
    if (*g == 0) {
        p = (u16 *) (g - 3);
        AF(arg1, s32, 0xE0) = 0;
    } else {
        p = (u16 *) (arg1 + 0x88);
        AF(arg1, s32, 0xE0) = 1;
    }
    v[1] = p[0] + arg2[0];
    v[3] = p[1] + arg2[1];
    AF(arg1, s16, 0x100) = v[3];
    v[5] = p[2] + arg2[2];
    func_8012B77C(r, arg1 + 4, v);
    *arg0 = r[0];
    return (s32) arg0;
}

s32 func_sc03_115_8017FD08(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_115_8017FD20(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc03_115_8017FD8C(u8 *arg0) {
    D_sc03_115_801925E4[AF(arg0, u16, 2)]();
}

void func_sc03_115_8017FDC8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc03_115_801802E8() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc03_115_80192598, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc03_115_801925A4);
    func_sc03_115_80180340((s32) arg0);
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

void func_sc03_115_8017FEC4(u8 *arg0) {
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
            func_sc03_115_80180340(arg0);
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
    func_sc03_115_801803BC(arg0);
}

void func_sc03_115_80180154(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc03_115_80180340(arg0);
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
    func_sc03_115_801803BC(arg0);
}

s32 func_sc03_115_801802E8(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_115_80180340(u8 *o) {
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

void func_sc03_115_801803BC(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc03_115_80180400(s32 o, s16 *v, s32 arg2) {
    SpawnDef d;

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
