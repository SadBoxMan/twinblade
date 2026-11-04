#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_003_8017BE9C(void) {
}

void func_sc05_003_8017BEA4(void) {
}

void func_sc05_003_8017BEAC(void) {
}

void func_sc05_003_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_003_80186364[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_003_8018634C;
extern void (*D_sc05_003_8018636C[])();
extern u8 D_sc05_003_80186358;
extern void (*D_sc05_003_801863C4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_003_8017E008(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_003_8017E030(void);
extern void func_800D1EBC();
extern void (*D_sc05_003_801863D8[])();
extern u8 D_sc05_003_801863E4;
extern void func_8016EE40();
extern u8 D_sc05_003_801863F0;
extern void func_sc05_003_8017E0F4();
extern void (*D_sc05_003_80186404[])();
extern void (*D_sc05_003_801A4770[])();
extern void (*D_sc05_003_801A47C4[])();
extern void (*D_sc05_003_801A9F5C[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012C218();
extern void func_80016714();

extern s32 func_8012C044();
extern void (*D_sc05_003_8019EAD4[])();
extern void func_sc05_003_8017F4FC();
extern s32 func_8012BD14();
extern u16 D_sc05_003_8019EA10;
extern s32 func_80143970();
extern s32 func_8012BEE8();
extern u16 D_sc05_003_8019EA12;
extern u8 D_sc05_003_801A410C;
extern s32 func_8012BCCC();
extern u8 D_sc05_003_801A411C;
extern u8 D_80078EAE;
extern void func_8012B23C();
extern u8 D_sc05_003_801A41E4;
extern s32 func_sc05_003_8017F12C();
extern s16 D_80126CE0;
extern void func_80130D48();
extern void (*D_sc05_003_801A47A8[])();
extern s32 func_sc05_003_80181720();

extern u8 D_sc05_003_8019B394;
extern s32 D_sc05_003_801AC958;
extern s32 D_sc05_003_801ACA44;
extern u8 D_sc05_003_801ACA60;
extern void func_8013C0F8();
extern void func_sc05_003_8017CD9C();

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
extern u8 D_sc05_003_8019EA44;
extern s32 func_8012C354();
extern u8 D_sc05_003_801A96A8;
extern u8 D_80126CB4;
extern s32 func_8012BE98();
extern u8 D_800D3918;
extern u8 D_801152A8;
extern u8 D_801152B0;
extern u8 D_sc05_003_801A45C4;
extern s32 func_sc05_003_80180B04();
extern s32 func_sc05_003_80180E34();
extern s32 func_sc05_003_801808E8();
extern s32 func_sc05_003_80180CE8();
extern s32 func_8012B178();
extern u8 D_sc05_003_801A4534;
extern u8 D_sc05_003_801A9620;
extern void func_8012B2CC();
extern s32 func_8012AD80();
extern u8 D_sc05_003_801A4524;
extern u8 D_sc05_003_801A45DC;
extern u8 D_sc05_003_801A96F0;
extern s32 D_sc05_003_801A45B4[];
extern void func_8012C588();
extern s32 func_8012CBCC();
extern void func_80131E00();
extern s32 func_sc05_003_801807F8();
extern void func_sc05_003_8018079C();
extern u8 D_sc05_003_801A9888;
extern void func_8002AC00();
extern void func_8002A04C();
extern s32 func_8012C098();
extern s32 func_80012C6C();
extern s32 func_sc05_003_80180D70();
extern u16 D_800B99DA;
extern s32 D_sc05_003_801A46B4[];
extern s32 D_sc05_003_801A46EC[];
extern s32 D_sc05_003_801A4724[];
extern void func_800183E0();
extern u8 D_sc05_003_801A4764;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001CA1C();
extern void func_sc05_003_801814D8();
extern u8 D_sc05_003_801A97C8;
extern u8 D_sc05_003_801A9850;
extern void func_801292C8();
extern s32 func_sc05_003_80181AAC();



typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc05_003_8017BEBC(u8 *obj) {
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
extern void func_80128ED8();
extern s32 func_80132EF4();
extern void func_sc05_003_801823F4();

extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern void func_sc05_003_8017F338();
extern s32 func_8012AF0C();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc05_003_8017E1E8();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern void func_8012931C();
extern s32 func_8012CEB0();

extern s32 func_8012B608();
extern void func_sc05_003_80180E58();
extern s32 func_8012B8E4();
extern s32 func_sc05_003_80180C44();
extern void func_8012B21C();
extern s32 func_8012B744();
extern s32 func_80013478();
extern s32 ratan2();
extern s32 SquareRoot0();
extern void func_8012E8C4();
extern s32 func_80133784();

extern u8 D_80126B58;
extern s16 D_80126B5E;
extern s32 func_8017267C();
extern s32 func_800CF8B4();
extern s32 func_8014CB8C();
extern u8 *func_80143C74();

extern s32 func_8012B864();
extern u8 D_sc05_003_801A9740;
extern s32 D_sc05_003_801A45AC[];
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s16 D_801270C0;
extern s16 D_80126B96;
extern u8 D_sc05_003_801A4784;
extern s32 func_sc05_003_80181CDC();
extern s16 D_80126B62;
extern s16 D_80126B66;
extern s32 func_8012F568();
extern u8 D_sc05_003_801A47B8;
extern s32 func_8012EFB8();

extern u8 D_sc05_003_801A4544;
extern u8 D_sc05_003_801A461C;
extern void func_8001C97C();
extern void func_8012B030();
extern void func_80143994();
extern void func_8012E9C0();
extern s32 func_80131A34();

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
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
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_sc05_003_801A43A4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_sc05_003_8017F62C();
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_sc05_003_801A9F10;
extern u8 D_sc05_003_801A9F1C;
extern s32 func_sc05_003_8018239C();
extern s32 func_8012C194();
extern void func_8012EC04();
extern s32 func_8012C51C();
void func_sc05_003_801824B4(s32 o, s16 *v, s16 arg2);

extern void func_801439C0();
extern void VectorNormalSS();
extern u8 D_80078E78;
extern u8 D_800AE620;
extern void RotMatrixY();
extern void ApplyMatrixLV();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;

extern s32 func_80148800();
extern s16 D_sc05_003_80186408[];
extern u8 D_80126940;
extern s32 func_8012BDBC();
extern void *D_80126B78;
extern u8 D_sc05_003_801A46A4;
extern s32 func_80135888();
extern u8 D_80126B5C;
extern s32 func_80013328();
extern void func_8012B14C();

extern s32 func_80134510();
extern s16 D_801152AA;
extern s16 D_801152AC;
extern void func_8012B0B4();
extern SV8 D_sc05_003_801A4794;
extern u8 D_sc05_003_801A479C;
extern s32 func_8012BE54();



extern s32 func_8012E778();
s32 func_sc05_003_8017F010(s32 arg0);
s32 func_sc05_003_8017F1AC(u8 *o);

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern u16 D_sc05_003_80185F4C[];

void func_sc05_003_8017CD9C(u8 *obj, u8 *hdr, s32 ph, s32 dy) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    SV8 v[4];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 yo;
    s32 i;
    u8 *pk;
    u32 *ot;
    s32 n;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y, z;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl, zh, zl;
    s32 type;
    s32 half;
    s32 p;
    u8 *d;
    u8 *a, *b, *d3;
    u32 *t;

    if (AF(obj, s32, 0) != 0) return;
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    c = (ChunkDCM *)(hdr + 0x14);
    p = ph;
    yo = dy;
    half = p / 2;
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        x = c->x;
        y = c->y;
        z = c->z;
        xl = x; xh = x >> 16;
        yl = y + yo; yh = (y >> 16) + yo;
        zl = z; zh = z >> 16;
        box[0].x = xl; box[0].y = yl; box[0].z = zl;
        box[1].x = xh; box[1].y = yl; box[1].z = zl;
        box[2].x = xl; box[2].y = yl; box[2].z = zh;
        box[3].x = xh; box[3].y = yl; box[3].z = zh;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        box[4].x = xl; box[4].y = yh; box[4].z = zl;
        box[5].x = xh; box[5].y = yh; box[5].z = zl;
        box[6].x = xl; box[6].y = yh; box[6].z = zh;
        box[7].x = xh; box[7].y = yh; box[7].z = zh;
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
        if ((s16)h < -110 || (s16)l > 110) continue;

        poly = c->poly;
        nf = c->n;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = verts + (w & 0xFFFF);
            b = verts + (w >> 16);
            w = poly[2];
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            v[0] = *(SV8 *)a;
            v[1] = *(SV8 *)b;
            v[2] = *(SV8 *)d3;
            v[0].y += D_sc05_003_80185F4C[(v[0].z + p) & 0x1FF] + D_sc05_003_80185F4C[(v[0].x + half) & 0x1FF];
            v[1].y += D_sc05_003_80185F4C[(v[1].z + p) & 0x1FF] + D_sc05_003_80185F4C[(v[1].x + half) & 0x1FF];
            v[2].y += D_sc05_003_80185F4C[(v[2].z + p) & 0x1FF] + D_sc05_003_80185F4C[(v[2].x + half) & 0x1FF];
            gte_ldv3c(&v[0]);
            gte_rtpt();
            gte_stflg(&g.flag);
            if (g.flag & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.z);
            if (g.z <= 0) continue;
            switch (type) {
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
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
                if (yh < -110 || yl > 110) continue;
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type == 7) g.z = m + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0] | 0x2000000;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                v[3] = *(SV8 *)d;
                v[3].y += D_sc05_003_80185F4C[(v[3].z + p) & 0x1FF] + D_sc05_003_80185F4C[(v[3].x + half) & 0x1FF];
                gte_ldv0(&v[3]);
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
                if (yh < -110 || yl > 110) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type == 3) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0] | 0x2000000;
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

void func_sc05_003_8017DA00(u8 *arg0) {
    D_sc05_003_80186364[AF(arg0, u16, 2)]();
}

void func_sc05_003_8017DA3C(u8 *a) {
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
    o = func_800D222C(a, &D_sc05_003_8018634C, 0xFD);
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

void func_sc05_003_8017DC00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_003_8017DC94(u8 *arg0) {
    D_sc05_003_8018636C[AF(arg0, u16, 2)]();
}

void func_sc05_003_8017DCD0(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc05_003_80186358, 0x18);
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

void func_sc05_003_8017DD74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_003_8017DDD8(u8 *arg0) {
    D_sc05_003_801863C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_003_8017DE14(u8 *arg0) {
    func_sc05_003_8017E008();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_003_8017DE58(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_003_8017DE7C(u8 *arg0) {
    func_sc05_003_8017E030();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_003_8017DEBC(u8 *arg0) {
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

void func_sc05_003_8017DF38(void) {
    func_800D1EBC();
}

void func_sc05_003_8017DF58(u8 *arg0) {
    D_sc05_003_801863D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_003_8017DF94(u8 *arg0) {
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

void func_sc05_003_8017E008(void) {
    func_8016EE40((s32) &D_sc05_003_801863E4, 0x01000000);
}

void func_sc05_003_8017E030(void) {
    func_8016EE40((s32) &D_sc05_003_801863F0, 0x01000000);
}

void func_sc05_003_8017E058(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_003_8017E0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_003_8017E0F4((s32) &D_80126948);
}

void func_sc05_003_8017E0F4(s32 arg0) {
    D_sc05_003_80186404[AF(arg0, u8, 4)]();
}

void func_sc05_003_8017E130(u8 *o) {
    SV8 v;
    u8 b;

    if (func_80148800(&D_80126B58) & 3) {
        b = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = b;
        AF(o, s32, 0x14) = D_sc05_003_80186408[b];
    }
    v = *(SV8 *)&D_80126940;
    if (v.y > -0x100) {
        v.y = -0x100;
    }
    func_sc05_003_8017E1E8(o, &v);
}

void func_sc05_003_8017E1E8(u8 *arg0, u8 *arg1) {
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

void func_sc05_003_8017E380(u8 *o) {
    s32 d;
    s32 r;
    s16 y;
    u8 *c;

    r = -1;
    if (func_8017267C(&D_80126B58) != 0 || func_800CF8B4() == 0 || func_8014CB8C() != 0) {
        goto off;
    }
    if (D_80126B5E >= -0xE8E) {
        if (D_80126B5E >= -0xCEC) {
            if (D_80126B5E >= -0x87) {
                if (D_80126B5E >= 0xF7) {
off:
                    if (AF(o, s16, 0x84) != 0) {
                        func_8002D4C8(4, 0xAFA);
                        AF(o, s16, 0x84) = 0;
                    }
                } else {
                    r = (0xF6 - D_80126B5E) * 10 / 382;
                    D_80126B5E = D_80126B5E - r;
                }
            } else {
                D_80126B5E = D_80126B5E - 10;
                r = 10;
            }
        } else {
            r = (D_80126B5E + 0xE8F) * 10 / 418;
            D_80126B5E = D_80126B5E - r;
        }
    }
    if (r >= 0) {
        r = r * 127 / 10;
        func_8002D4C8(0xAFA, (u16)(r | 0x1000));
        AF(o, s16, 0x84) = 1;
    }
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    AF(o, s32, 0x1C) = 3;
    c = func_80143C74(o, 0);
    if (c == 0) {
        return;
    }
    AF(c, s16, 0xE) = rand() % 192 - 0x60;
    AF(c, s16, 6) = D_80126B5E + rand() % 768 - 0x180;
    if ((u16)(AF(c, s16, 6) + 0xE8F) >= 0xF86) {
        AF(o, s32, 0x1C) = 0;
        func_80016714(AF(c, s32, 0xCC), 0x38);
        func_8012C218(c);
        return;
    }
    AF(c, s32, 0x48) = -((rand() & 0x1FF) << 7);
    y = AF(c, s16, 6);
    if (y >= -0xCEC) {
        if (y >= -0x87) {
            d = (0xF6 - y) * 20 / 382;
            AF(c, s16, 0x12) = -d;
        } else {
            AF(c, s16, 0x12) -= 0x14;
        }
    } else {
        d = (y + 0xE8F) * 20 / 418;
        AF(c, s16, 0x12) = -d;
        AF(c, s16, 0x16) = d - 0x14;
    }
}

s32 func_sc05_003_8017E67C(void) {
    return 0x5F;
}

void func_sc05_003_8017E684(void) {
    switch (D_sc05_003_801ACA44) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc05_003_8019B394);
        D_sc05_003_801AC958 = 0;
        D_sc05_003_801ACA44 += 1;
        return;
    case 1:
        func_sc05_003_8017CD9C((s32) &D_sc05_003_801ACA60, (s32) &D_sc05_003_8019B394, D_sc05_003_801AC958, 0);
        D_sc05_003_801AC958 += 0x14;
        return;
    }
}

void func_sc05_003_8017E728(u8 *arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    D_sc05_003_8019EAD4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (!(AF(arg0, u16, 0x70) & 0x800)) {
            temp_v0_2 = func_8012C044((s32) arg0);
            if (temp_v0_2 == 1) {
                AF(arg0, s32, 0xE4) = temp_v0_2;
                func_sc05_003_8017F4FC((s32) arg0);
            }
        }
    }
}

void func_sc05_003_8017E7D0(s32 arg0) {
    void *temp_a0;

    if (func_8012C354(arg0, (s32) &D_sc05_003_8019EA10) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_003_8019EA44;
        AF(arg0, s32, 0xB4) = 0xFFFBDFDD;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SetScript(arg0, (s32) &D_sc05_003_801A410C);
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
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

void func_sc05_003_8017E89C(s32 arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (func_8012BD14(arg0, arg1) > 0x18FFF) {
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
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
        AF(arg0, u16, 0x76) = (u16) D_sc05_003_8019EA10;
    }
}

void func_sc05_003_8017E940(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc05_003_8019EA12;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc05_003_8017E9C8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc05_003_801A410C, arg2);
}

void func_sc05_003_8017E9F4(s32 arg0, s32 arg1) {
    if (func_8012BCCC(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_003_8017EA34(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 6;
    SetScript((s32) arg0, (s32) &D_sc05_003_801A411C, arg2);
    AF(arg0, s32, 0x1C) = 0x17;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc05_003_8017EA78(u8 *arg0, s32 arg1) {
    if (D_80078EAE != 0) {
        if ((AF(arg0, u16, 0x34) == 0) && (AF(arg0, s32, 0x94) == 0xA)) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (func_8012BEE8((s32) arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_003_8017EAF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 2) = 8;
    func_8012B23C((s32) arg0, arg1, arg2, arg3);
    func_sc05_003_8017F12C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_003_801A41E4);
    AF(arg0, s32, 0x1C) = 0x2D;
    AF(arg0, s32, 0xE0) = 0;
}

void func_sc05_003_8017EB44(u8 *o) {
    u8 *p;
    s32 r;

    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x12) -= 0x71;
    func_sc05_003_8017F1AC(o);
    if (AF(o, u16, 0x72) & 0x4000) {
        if (func_8012E778(o, 0x8C00B4) == 1) {
            func_8002D4C8(0x662, 0);
        }
    }
    r = func_sc05_003_8017F010((s32) o);
    if (r != -1 && func_8012BEE8(o) != 0) {
        if (r != 0) {
            func_sc05_003_8017F12C((s32) o);
        }
        AF(o, s32, 0x1C) = 0x23;
    }
}

void func_sc05_003_8017EC00(u8 *o) {
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    if (AF(o, s16, 0xAA) == 0) {
        AF(o, s16, 0x100) = AF(AF(o, u8 *, 0x20), s16, 0x18);
        AF(o, s16, 0x106) = 0;
    } else {
        AF(o, s16, 0x104) = AF(AF(o, u8 *, 0x20), s16, 0x18);
        AF(o, s16, 0x106) = 1;
    }
}

void func_sc05_003_8017EC68(u8 *arg0) {
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

void func_sc05_003_8017ED0C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc05_003_8017ED1C(u8 *o) {
    s32 b;
    u8 *p;
    u8 *q;
    if (func_8012BEE8() != 0) {
        if (AF(o, s16, 0x106) != 0) {
            p = AF(o, u8 *, 0x20);
            AF(p, s16, 0x18) = AF(p, s16, 0x1C) = 0x1000;
            AF(o, s16, 0x106) = 0;
        } else {
            p = AF(o, u8 *, 0x20);
            AF(p, u16, 0x18) = AF(p, u16, 0x1C) = AF(o, u16, 0x100);
        }
        q = o;
        AF(q, u16, 0x60) = 0;
        AF(q, u16, 0x5C) |= 1;
        AF(q, u16, 0x62) = AF(AF(q, u8 *, 0x20), u16, 0x12) + 0x800;
        AF(q, u16, 0x5E) = 1;
        func_80131E00(q, 1);
    } else {
        q = AF(o, u8 *, 0x20);
        b = AF(q, s16, 0x18);
        AF(q, s16, 0x18) = AF(q, s16, 0x1C) = b + (AF(o, s16, 0x100) - b) / 4;
    }
}

void func_sc05_003_8017EDF4(u8 *arg0) {
    s32 t;
    s32 var_a0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x37;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    SetScript((s32) arg0, (s32) &D_sc05_003_801A43A4);
    AF(arg0, s16, 0x34) = 0;
    t = func_8012BCCC((s32) arg0);
    var_a0 = 0x52B;
    if (t <= 0x8FFF) {
        var_a0 = 0x52A;
    }
    func_8002D4C8(var_a0, 0);
}

void func_sc05_003_8017EE60(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_80130D48((s32) arg0);
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(AF(arg0, void *, 0x20), s32, 4) = 0x80000000;
        func_sc05_003_8017F4FC((s32) arg0);
    }
}

void func_sc05_003_8017EEE4(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x102) = 1;
}

void func_sc05_003_8017EF04(void) {
}

void func_sc05_003_8017EF0C(u8 *o) {
    SV8 v;
    if (AF(o, u16, 0x5E) == 0x23) {
        AF(o, s16, 0xFE) = 1;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        func_8002D4C8(0xAA1, 0);
    } else if (AF(o, u16, 0x5E) == 0x24) {
        v.z = 0;
        v.x = 0;
        v.y = -8;
        func_sc05_003_801824B4((s32)o, &v.x, 0xB);
    }
}

void func_sc05_003_8017EF88(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

s32 func_sc05_003_8017F010(s32 arg0) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    u8 *var_s0;
    u16 temp_v1;

    var_s3 = 1;
    temp_v0 = func_8012CBA4(arg0);
    if (temp_v0 != 0) {
        if ((temp_v0 & 0xFF) == 2) {
            func_80131E00(arg0, 0x12);
            return -1;
        }
        if (temp_v0 & 0x8000) {
            if (temp_v0 & 0x2000) {
                goto block_8;
            }
            goto block_7;
        }
        if (temp_v0 & 0x4000) {
            goto block_7;
        }
        goto block_9;
    }
block_7:
    func_8012ADE4(arg0);
block_8:
    func_sc05_003_8017F338(arg0, 2);
    var_s3 = 0;
block_9:
    var_s0 = (u8 *)&D_801202A0;
    var_s2 = 0;
loop_10:
    temp_v1 = *(u16 *)var_s0;
    if ((temp_v1 != 0) && (AF(arg0, u16, 0) == temp_v1) && (arg0 != var_s0) && (func_8012AF0C(arg0, (s32) var_s0) != 0)) {
        if (var_s3 == 0) {
            goto block_17;
        }
        func_sc05_003_8017F338(arg0, 2);
        return var_s3;
    }
    var_s2 += 1;
    var_s0 += 0x10C;
    if (var_s2 >= 0x60) {
block_17:
        return var_s3;
    }
    goto loop_10;
}

s32 func_sc05_003_8017F12C(s32 arg0) {
    if (AF(arg0, s16, 0xAA) > 0) {
        func_sc05_003_8017F338(arg0, 4);
        return 0;
    }
    if ((func_8012BCCC(arg0) > 0x24000) || (func_sc05_003_8017F62C(arg0) == 0)) {
        func_sc05_003_8017F338(arg0, 3);
        return 0;
    }
    func_sc05_003_8017F338(arg0, 0);
    return 1;
}

s32 func_sc05_003_8017F1AC(u8 *o) {
    SV8 a;
    SV8 p;
    SV8 n;
    u8 *q;

    a.x = D_80126B5E;
    a.y = D_80126B62;
    a.z = D_80126B66;
    p.x = AF(o, s16, 6);
    p.y = AF(o, s16, 0xA);
    p.z = AF(o, s16, 0xE);
    a.y -= 0x2A;
    q = (u8 *)((AF(o, s32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    if (AF(q, s16, 4) + p.x > a.x
        || AF(q, s16, 6) + p.x < a.x
        || AF(q, s16, 0xC) + p.z > a.z
        || AF(q, s16, 0xE) + p.z < a.z
        || AF(q, s16, 8) + p.y > a.y
        || AF(q, s16, 0xA) + p.y < a.y) {
        return 0;
    }
    n.x = a.x - p.x;
    n.y = a.y - p.y;
    n.z = a.z - p.z;
    VectorNormalSS(&n, &n);
    func_8012F568(1, 1, AF(o, s16, 0xDC), 0xD, &a, &n);
    return 1;
}

void func_sc05_003_8017F338(u8 *o, s32 mode) {
    typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
    V3 v;
    WMtx m;
    u8 *g = &D_80078E78;
    s32 t;

    v.x = v.y = 0;
    if (D_80078EAE != 0) {
        v.z = -0x60000;
    } else {
        v.z = -0x80000;
    }
    switch (mode) {
    case 0:
        if (AF(g, u8, 0x36) != 0 && (rand() & 1)) {
            break;
        }
    case 1:
        AF(o, s16, 0xDC) = func_8012B864(o);
        break;
    case 2: {
        s32 d;
        t = rand() % 512;
        d = AF(o, s16, 0xDC);
        AF(o, s16, 0xDC) = !(rand() & 1) ? d + (0x800 - t) : d + (0x800 + t);
        break;
    }
    case 3:
        {
            s32 r;
            do {
                r = rand() % 4096;
            } while (AF(o, s16, 0xDC) == (s16)r);
        }
        break;
    case 4:
        AF(o, s16, 0xDC) = (func_8012B864(o) + 0x800) & 0xFFF;
        break;
    }
    m = *(WMtx *)&D_800AE620;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

void func_sc05_003_8017F4FC(u8 *o) {
    u8 *p;

    AF(o, s16, 0x76) = 0;
    if (AF(o, s32, 0xE4) == 0) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 2) = 1;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0x5C) = 0;
        {
            u8 *q = AF(o, u8 *, 0x20);
            AF(q, s16, 0x14) = 0;
            AF(q, s16, 0x12) = 0;
            AF(q, s16, 0x10) = 0;
        }
        {
            u8 *q = AF(o, u8 *, 0x20);
            AF(q, s16, 0x1C) = 0x1000;
            AF(q, s16, 0x1A) = 0x1000;
            AF(q, s16, 0x18) = 0x1000;
        }
        AF(o, s16, 0xDE) = 0;
        AF(o, s16, 0xAA) = 0;
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        SetScript(o, &D_sc05_003_801A410C);
        func_8012B2CC(o);
        func_8002A04C(o);
        if (AF(o, s32, 0xCC) != 0) {
            func_801439C0(AF(o, s32, 0xCC));
        }
    } else {
        if (!(AF(o, s16, 0x70) & 0x8000)) {
            p = AF(o, u8 *, 0x68);
            if (p != 0 && (AF(o, s16, 0x72) & 0x8000)) {
                AF(p, u16, 0xA) &= 0x7FFF;
            }
        }
        func_8012C218(o);
    }
}

s32 func_sc05_003_8017F62C(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

extern void (*D_sc05_003_801A466C[])();
extern void func_8012C0EC();

void func_sc05_003_8017F68C(u8 *o) {
    D_sc05_003_801A466C[AF(o, u16, 2)]();
    if (AF(o, u16, 0) != 0) {
        if (AF(o, u8 *, 0x90) == &D_sc05_003_801A9620) {
            if (AF(o, s32, 0x94) == 10) {
                func_sc05_003_80181CDC(o, 0x7F9);
            } else if (AF(o, s32, 0x94) == 15) {
                func_sc05_003_80181CDC(o, 0x7F8);
            }
        }
        func_sc05_003_80180834(o);
        func_8012C0EC(o);
    }
}

void func_sc05_003_8017F738(u8 *o) {
    s16 f;
    if (func_8012C354(o, &D_sc05_003_801A4544 + (AF(o, u16, 0x70) & 0xF) * 0x34) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc05_003_801A461C;
        AF(o, s32, 0xB4) = 0xFFFF5FFF;
        AF(o, s32, 0xC4) |= 3;
        func_8001C97C(D_sc05_003_801A45B4[AF(o, u16, 0x70) & 0xF]);
        if (AF(o, u16, 0x70) & 1) {
            AF(o, s16, 0xAE) = -0x81;
            AF(o, u8, 0x75) = 2;
            f = AF(o, s16, 0x70);
            if (f & 0x8000) {
                AF(o, s16, 2) = 6;
                AF(o, s16, 0x76) = 1;
                return;
            } else if (f & 0x4000) {
                AF(o, s16, 2) = 8;
                AF(o, s16, 0x76) = 1;
                return;
            } else if (f & 0x2000) {
                AF(o, s16, 2) = 0xA;
                AF(o, s16, 0x76) = 1;
            } else {
                AF(o, s16, 2) = 3;
                func_8012B030(o);
            }
        } else {
            AF(o, s16, 0xAE) = 0xC;
            AF(o, s16, 2) = 1;
        }
        func_80143994(o, 0x4000);
    }
}

void func_sc05_003_8017F880(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A96A8);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_003_8017F8B8(u8 *arg0) {
    if (!(AF(arg0, u16, 0x70) & 1) && (func_8012BE98((s32) arg0, (s32) &D_80126CB4) <= 0x240000)) {
        AF(arg0, s16, 2) = 0xC;
    }
}

void func_sc05_003_8017F914(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = rand(arg0);
    var_v0 = temp_v0 / 4096;
    AF(arg0, s32, 0xE0) = (s32) (temp_v0 - (var_v0 << 0xC));
    AF(arg0, s16, 2) = 4;
    var_v0_2 = rand();
    temp_v1 = var_v0_2;
    if (temp_v1 < 0) {
        var_v0_2 = temp_v1 + 0x1F;
    }
    AF(arg0, s32, 0x1C) = (s32) ((temp_v1 - ((var_v0_2 >> 5) << 5)) + 0x40);
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) & ~1);
    func_8012B23C(arg0);
    SetScript(arg0, (s32) &D_sc05_003_801A9620);
}

void func_sc05_003_8017F9B4(u8 *o) {
    s32 t;
    s32 r;
    s32 base;

    t = func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE0), 10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
    func_8012B178(o, -0x80000);
    if ((func_8012CBA4(o) & 0xFF00) != 0x2000) {
        func_8012ADE4(o);
        if (++AF(o, s32, 0xE8) >= 0x80) {
            func_sc05_003_80180E58(o);
        } else {
            AF(o, s32, 0xE4) |= 1;
        }
    } else {
        AF(o, s32, 0xE8) = 0;
        AF(o, s32, 0xE4) &= ~1;
    }
    if (AF(o, s32, 0xE4) & 2) {
        AF(o, s16, 2) = 5;
        AF(AF(o, u8 *, 0x20), s32, 0x24) = D_sc05_003_801A45B4[AF(o, u16, 0x70) & 0xF];
        AF(o, s32, 0xE4) &= ~2;
    } else if (!(AF(o, s32, 0xE4) & 1)) {
        if (!(D_800B99DA & 0x3F)) {
            AF(o, s32, 0xE0) += func_8012B8E4(o, 8);
        }
        if (func_8012BEE8(o) == 1) {
            r = rand() % 1024;
            base = AF(o, s32, 0xE0);
            AF(o, s32, 0xE0) = (rand() & 1) ? base + r : base - r;
            AF(o, s32, 0x1C) = rand() % 32 + 0x40;
        }
    } else {
        AF(o, s32, 0xE0) += 0x21;
    }
}

void func_sc05_003_8017FB9C(u8 *o) {
    s32 t;

    if (func_8012BDBC(o, 0x400) == 0) {
        AF(o, s16, 2) = 4;
        AF(AF(o, u8 *, 0x20), s32, 0x24) = D_sc05_003_801A45AC[AF(o, u16, 0x70) & 0xF];
    }
    t = func_8012B8E4(o, 8);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
    func_8012B178(o, -0x80000);
    if (func_8012CBA4(o) != 0x2000) {
        func_8012ADE4(o);
    }
}

void func_sc05_003_8017FC3C(u8 *o) {
    SV8 p;

    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xFC);
    SetScript(o, (s32) &D_sc05_003_801A9620);
    p.x = AF(o, s16, 6);
    p.y = AF(o, s16, 0xA);
    p.z = AF(o, s16, 0xE);
    if (func_80134510(&p) != 0) {
        AF(o, s16, 6) = p.x;
        AF(o, s16, 0xA) = p.y;
        AF(o, s16, 0xE) = p.z;
        AF(o, s16, 0xE8) = *(s16 *)&D_801152A8;
        AF(o, s16, 0xEA) = D_801152AA;
        AF(o, s16, 0xEC) = D_801152AC;
        func_sc05_003_80180D70(o, o + 0xE8);
        AF(o, s16, 2) = 7;
    }
}

void func_sc05_003_8017FD08(s32 arg0) {
    s32 sp10;
    s32 *var_a1;
    s32 var_v1;

    var_v1 = func_sc05_003_80180B04(arg0, (s32) &D_800D3918, 1);
    if (!(var_v1 & 0xE000)) {
        func_sc05_003_80180E34(arg0, (s32) &D_sc05_003_801A45C4, (s32) &sp10);
        var_v1 = func_sc05_003_801808E8(arg0, (s32) &sp10, 1, 1);
        if (!(var_v1 & 0xE000)) {
            func_8012C218(arg0);
            return;
        }
    }
    var_a1 = &D_801152A8;
    if (var_v1 & 0xC000) {
        var_a1 = &D_801152B0;
    }
    func_sc05_003_80180CE8(arg0, (s32) var_a1, 4);
    func_8012B178(arg0, -0x80000);
}

void func_sc05_003_8017FDC0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A9620);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg0, u16, 0xDC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_003_801A4534 | 0x40000000 | 0x20000000);
    func_8012B2CC(arg0);
    func_8012B178(arg0, -0x80000);
    AF(arg0, s16, 2) = 9;
}

void func_sc05_003_8017FE44(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 temp_v0;
    s32 temp_v1;

    func_8012AD80(arg0, arg1);
    func_sc05_003_80180E34(arg0, (s32) &D_sc05_003_801A45C4, (s32) &sp10);
    temp_v0 = func_sc05_003_801808E8(arg0, (s32) &sp10, 1, 1);
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v1 == 0x1A) || (temp_v1 == 0x1C) || (temp_v0 == 0)) {
        func_8012C218(arg0);
    }
}

void func_sc05_003_8017FEC0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A9620);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg0, u16, 0xDC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_003_801A4524 | 0x40000000 | 0x20000000);
    AF(arg0, void *, 0xCC) = (void *) (((AF(arg0, u16, 0x70) & 0xF0) * 2) + &D_sc05_003_801A45DC);
    func_8012B2CC(arg0);
    func_8012B178(arg0, -0x80000);
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc05_003_8017FF60(u8 *o) {
    SV8 v;
    s32 t;
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        func_8012AD80(o);
        func_sc05_003_80180E34(o, &D_sc05_003_801A45C4, &v);
        func_sc05_003_801808E8(o, &v, 1, 1);
        func_sc05_003_80180E34(o, &D_sc05_003_801A45C4 + 0x10, &v);
        if (func_sc05_003_80180C44(o, &v, 1) & 0x2000) {
            func_8012B21C(o);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(AF(o, u8 *, 0xCC), s16, 6) != -1) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) = func_80012C6C(AF(AF(o, u8 *, 0x20), s16, 0x10), 0, 8);
            t = func_8012B744(o + 4, AF(o, u8 *, 0xCC));
            t = func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), t, 8);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
        }
        func_8012B178(o, -0x80000);
        r = func_8012CBA4(o);
        if (AF(AF(o, u8 *, 0xCC), s16, 6) != -1) {
            if (func_80013478(o + 4, AF(o, u8 *, 0xCC)) < 0x100) {
                AF(o, u8 *, 0xCC) += 8;
            }
        } else if (r & 0x8000) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), s16, 0x10) = func_80012C6C(AF(AF(o, u8 *, 0x20), s16, 0x10), -0x400, 8);
        func_8012B178(o, -0x80000);
        func_8012CBCC(o);
        if (++AF(o, s32, 0x1C) > 0x20) {
            AF(o, s32, 0x48) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        func_8012AD80(o);
        func_sc05_003_80180E34(o, &D_sc05_003_801A45C4, &v);
        if (!(func_sc05_003_801808E8(o, &v, 1, 1) & 0xE000)) {
            func_8012C218(o);
        }
        break;
    }
}

void func_sc05_003_801801C0(u8 *arg0) {
    AF(arg0, s16, 2) = 0xD;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_8012C588(0x24F, (s32) arg0);
    AF(AF(arg0, void *, 0x20), s32, 0x24) = D_sc05_003_801A45B4[(AF(arg0, u16, 0x70) & 0xF)];
    SetScript((s32) arg0, (s32) &D_sc05_003_801A96F0);
}

void func_sc05_003_80180230(u8 *o) {
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), func_8012B864(o) + 0x800, 10);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc05_003_801A9740);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(o, u16, 0x72) & 0x4000) {
            if (++AF(o, s32, 0x1C) >= 4) {
                SetScript(o, &D_sc05_003_801A97C8);
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc05_003_801A96A8);
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 1;
            AF(AF(o, u8 *, 0x20), s32, 0x24) = D_sc05_003_801A45AC[AF(o, u16, 0x70) & 0xF];
        }
        break;
    }
}

void func_sc05_003_801803B8(u8 *o) {
    s16 d;
    u16 f;
    u8 *p;

    func_8012E9C0(o);
    d = (AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30)) >> 12;
    if (d <= 0) {
        d = 1;
    }
    AF(o, s16, 0x76) -= d;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, s16, 0x76) <= 0) {
        AF(o, u16, 0x5C) = 0;
    }
    f = AF(o, u16, 0x70);
    if (f & 1) {
        if (f & 0xE000) {
            goto skip;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    }
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    func_8012B2CC(o);
skip:
    func_8012B23C(o);
    if (AF(o, s16, 0x76) <= 0) {
        func_80131E00(o, 0xC);
    } else if (func_80131A34(o, 4) != 0) {
        AF(o, u8, 0xC2) = 0;
    } else {
        AF(o, u8, 0xC2) = 1;
        AF(o, s16, 0x98) = 0;
        AF(o, s32, 0x1C) = 0x10;
    }
}

void func_sc05_003_801804CC(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    temp_v1 = func_8012CBCC(arg0) & 0xFF;
    if (temp_v1 == 2) {
        func_80131E00(arg0, 0x12);
        return;
    }
    if (temp_v1 == 0x1A) {
        func_sc05_003_801807F8(arg0);
        return;
    }
    if (AF(arg0, u8, 0xC2) != 0) {
        var_v0 = func_8012BEE8(arg0);
    } else {
        var_v0 = AF(arg0, u16, 0x72) & 0x4000;
    }
    if (var_v0 != 0) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        func_sc05_003_8018079C(arg0);
    }
}

void func_sc05_003_80180584(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x5E) = 0;
}

void func_sc05_003_80180598(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A9888);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    func_8002D4C8(0x84D, 0);
}

void func_sc05_003_801805E4(u8 *o) {
    SV8 v;
    u8 *m;
    s16 *d;
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, s32, 0x1C) = 0x80;
            AF(o, u16, 0x34)++;
            m = (u8 *)func_80132EF4(o, 0x50);
            if (m != 0) {
                d = 0;
                func_sc05_003_80180E34(o, &D_sc05_003_801A45C4, &v);
                r = func_sc05_003_80180C44(o, &v, 1);
                if (r & 0xC000) {
                    d = (s16 *)&D_801152B0;
                } else if (r & 0x2000) {
                    d = (s16 *)&D_801152A8;
                }
                if (d != 0) {
                    AF(AF(m, u8 *, 0x20), s16, 0x10) = ratan2(d[2], d[1]) + 0x400;
                    AF(AF(m, u8 *, 0x20), s16, 0x12) = ratan2(d[0], -SquareRoot0(d[2] * d[2] + d[1] * d[1]));
                } else {
                    AF(AF(m, u8 *, 0x20), s16, 0x10) = 0x400;
                }
            }
        }
        break;
    case 1:
        if (func_8012BEE8(o) != 0) {
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        func_8012E8C4(o);
        if (func_8012BEE8(o) != 0) {
            func_80130D48(o);
            func_sc05_003_801807F8(o);
        }
        break;
    }
}

void func_sc05_003_8018079C(u8 *o) {
    u8 *p = AF(o, u8 *, 0x78);
    u16 f = AF(o, u16, 0x70);

    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x5E) = 0;
    AF(o, s16, 0x5C) = AF(p, s16, 2);
    if (f & 1) {
        if (f & 0x8000) {
            AF(o, s16, 2) = 6;
        } else if (f & 0x4000) {
            AF(o, s16, 2) = 8;
        } else if (f & 0x2000) {
            AF(o, s16, 2) = 0xA;
        } else {
            AF(o, s16, 2) = 3;
        }
    } else {
        AF(o, s16, 2) = 1;
    }
}

s32 func_sc05_003_801807F8(s32 arg0) {
    func_8002AC00(0x19);
    func_8002A04C(arg0);
    return func_8012C098(arg0);
}

s32 func_sc05_003_80180834(u8 *o) {
    SV8 a;
    SV8 b;

    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc05_003_801A46A4, &a);
    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc05_003_801A46A4 + 8, &b);
    if (func_80135888(AF(o, u8 *, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
        func_8012F568(1, 1, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x20, &b, &D_801152A8);
        return 1;
    }
    return 0;
}

s32 func_sc05_003_801808E8(u8 *o, s16 *d, s32 n0, s32 mode) {
    SV8 a;
    SV8 b;
    s16 n;
    s32 r;

    if (mode == 0) {
        a.x = AF(o, s16, 0x3A);
        a.y = AF(o, s16, 0x3E);
        a.z = AF(o, s16, 0x42);
        func_8012AD80();
    } else {
        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
    }
    n = n0;
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    b.x += d[0];
    b.y += d[1];
    b.z += d[2];
    r = func_80133784(n, &a, &b);
    if (!(r & 0xE000)) {
        a.x = b.x;
        a.y = b.y + 8;
        a.z = b.z;
        r = func_80133784(n, &b, &a);
        if (!(r & 0xE000)) {
            b.x = a.x + d[0];
            b.y = a.y + d[1];
            b.z = a.z + d[2];
            r = func_80133784(n, &a, &b);
            if (!(r & 0xE000)) {
                b.x = a.x - d[0];
                b.y = a.y - d[1];
                b.z = a.z - d[2];
                r = func_80133784(n, &a, &b);
            }
            r |= *(u8 *)&b.pad;
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        } else {
            r |= *(u8 *)&a.pad;
            AF(o, s16, 6) = a.x;
            AF(o, s16, 0xA) = a.y;
            AF(o, s16, 0xE) = a.z;
        }
    } else {
        r |= *(u8 *)&b.pad;
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
    }
    return r;
}

s32 func_sc05_003_80180B04(u8 *o, s16 *d, s32 n0) {
    SV8 a;
    SV8 b;
    s16 n;
    s32 r;

    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    a.x += d[0];
    a.y += d[1];
    a.z += d[2];
    func_8012AD80(o);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    b.x += d[0];
    b.y += d[1];
    b.z += d[2];
    n = n0;
    r = func_80133784(n, &a, &b);
    b.x -= d[0];
    b.y -= d[1];
    b.z -= d[2];
    r |= *(u8 *)&b.pad;
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xA) = b.y;
    AF(o, s16, 0xE) = b.z;
    return r;
}

s32 func_sc05_003_80180C44(u8 *o, s16 *d, s32 n0) {
    SV8 a;
    SV8 b;
    s16 n;
    s32 r;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    b.x += d[0];
    b.y += d[1];
    b.z += d[2];
    n = n0;
    r = func_80133784(n, &a, &b);
    r |= *(u8 *)&b.pad;
    return r;
}

s32 func_sc05_003_80180CE8(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0xE8) = func_80012C6C((s32) AF(arg0, s16, 0xE8), (s32) AF(arg1, s16, 0), (s32) (s16) arg2);
    AF(arg0, s16, 0xEA) = func_80012C6C((s32) AF(arg0, s16, 0xEA), (s32) AF(arg1, s16, 2), (s32) (s16) arg2);
    AF(arg0, s16, 0xEC) = func_80012C6C((s32) AF(arg0, s16, 0xEC), (s32) AF(arg1, s16, 4), (s32) (s16) arg2);
    return func_sc05_003_80180D70(arg0, arg0 + 0xE8);
}

extern void func_80013F3C();
extern void RotMatrixZ();
extern void RotMatrixX();
extern void func_8012B260();

s32 func_sc05_003_80180D70(u8 *o, s16 *v) {
    SV8 r;
    u8 *m;

    m = AF(o, u8 *, 0x20) + 0x34;
    r.x = ratan2(v[2], v[1]);
    r.z = ratan2(v[0], -SquareRoot0(v[2] * v[2] + v[1] * v[1]));
    func_80013F3C(m);
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), m);
    RotMatrixZ(r.z, m);
    RotMatrixX(r.x, m);
    func_8012B260(o);
}

s32 func_sc05_003_80180E34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ApplyMatrixSV(AF(arg0, s32, 0x20) + 0x34);
}

void func_sc05_003_80180E58(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r[2];
    s32 ang;
    s32 i;

    a.y = AF(o, s16, 0xA);
    ang = AF(AF(o, u8 *, 0x20), s16, 0x12);
    for (i = 0; i < 0x20; i++, ang += 0x80) {
        func_8012B0B4(r, ang, 0x10);
        a.x = b.x = AF(o, s16, 6) + r[0];
        a.z = b.z = AF(o, s16, 0xE) + (r[0] >> 16);
        b.y = AF(o, s16, 0xA) + 8;
        if (func_80133784(1, &a, &b) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
            AF(o, s32, 0xE0) = ang;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = ang;
            break;
        }
    }
    AF(o, s32, 0xE8) = 0;
}

void func_sc05_003_80180F44(void) {
    func_800183E0(D_sc05_003_801A46B4[((D_800B99DA % 14) & 0xFFFF)]);
    func_800183E0(D_sc05_003_801A46EC[((D_800B99DA % 14) & 0xFFFF)]);
    func_800183E0(D_sc05_003_801A4724[(D_800B99DA & 0xF)]);
}

void func_sc05_003_80181020(u8 *arg0) {
    D_sc05_003_801A4770[AF(arg0, u16, 2)]();
}

void func_sc05_003_8018105C(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CA1C(temp_v0, (s32) &D_sc05_003_801A4764);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x18) = (u16) ((s32) (AF(temp_v1_2, u16, 0x18) << 0x10) >> 0x11);
    temp_v1_3 = AF(arg0, s32, 0x20);
    AF(temp_v1_3, u16, 0x1A) = (u16) ((s32) (AF(temp_v1_3, u16, 0x1A) << 0x10) >> 0x11);
    AF(arg0, u16, 0xFE) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
    func_sc05_003_801814D8(arg0, 2);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_003_8018111C(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x64);
    temp_a1 = AF(arg0, void *, 0x20);
    if ((AF(arg0, s16, 0xFE) != AF(temp_a2, s16, 0x36)) || (AF(temp_a2, s32, 0x90) == &D_sc05_003_801A9850)) {
        AF(arg0, s32, 0x48) = 0xC000;
        AF(arg0, s16, 2) = 3;
        return;
    }
    AF(temp_a1, u16, 0x18) = (u16) (AF(temp_a1, u16, 0x18) + 0x40);
    temp_v1 = AF(temp_a1, u16, 0x1A) + 0x40;
    AF(temp_a1, u16, 0x1A) = temp_v1;
    if (((s16) AF(temp_a1, u16, 0x18) >= 0x1801) || ((s16) temp_v1 >= 0x1801)) {
        AF(temp_a1, u16, 0x1A) = 0x1800U;
        AF(temp_a1, u16, 0x18) = 0x1800U;
    }
    temp_a1_2 = AF(arg0, void *, 0x64);
    if ((AF(temp_a1_2, s32, 0x90) == &D_sc05_003_801A97C8) && (AF(temp_a1_2, s32, 0x94) == 9)) {
        AF(arg0, s16, 2) = 2;
    }
    func_sc05_003_801814D8((s32) arg0, 2);
}

void func_sc05_003_801811EC(u8 *o) {
    V3 t;

    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + 0x800;
    func_8012B2CC(o);
    t.x = 0;
    t.y = 0xFFF00000;
    t.z = -((func_80013328(&D_80126B5C, o + 4) << 16) / 34);
    func_8012B14C(o, &t);
    AF(o, s32, 0x48) = 0x18000;
    func_8012CBF4(o);
    func_sc05_003_80181CDC(o, 0x7FA);
    AF(o, s16, 2) = 3;
}

void func_sc05_003_801812AC(u8 *o) {
    u8 unused[8];
    s16 *d;
    u8 *m;
    s32 i;
    s32 r;

    d = 0;
    if (AF(o, s16, 0xA) >= 0x10) {
        func_8012C218(o);
        return;
    }
    if (D_801270C0 == 2) {
        return;
    }
    r = func_8012CBF4(o);
    if (r & 0xC000) {
        d = (s16 *)&D_801152B0;
    } else if (r & 0x2000) {
        d = (s16 *)&D_801152A8;
    }
    if (d != 0) {
        for (i = 0; i < 6; i++) {
            func_80132EF4(o, 0x51);
        }
        m = (u8 *)func_80132EF4(o, 0x50);
        if (m != 0) {
            AF(AF(m, u8 *, 0x20), s16, 0x10) = ratan2(d[2], d[1]) + 0x400;
            AF(AF(m, u8 *, 0x20), s16, 0x12) = ratan2(d[0], -SquareRoot0(d[2] * d[2] + d[1] * d[1]));
            AF(AF(m, u8 *, 0x20), s16, 0x14) = 0;
        }
        func_sc05_003_80181CDC(o, 0x7FB);
        func_8012C218(o);
    } else if (func_8012D5E4(o, &D_sc05_003_801A4784, &D_sc05_003_801A4784 + 8, 0x18) == 1) {
        D_80126B96 = 0x4014;
    }
}

void func_sc05_003_80181438(u8 *o) {
    s32 i;
    u8 *m;

    if (AF(o, s16, 0xA) >= 0x10) {
        func_8012C218(o);
        return;
    }
    if (!(func_8012CBF4(o) & 0x6000)) {
        return;
    }
    m = (u8 *)func_80132EF4(o, 0x50);
    if (m != 0) {
        AF(AF(m, u8 *, 0x20), s16, 0x10) = 0x400;
    }
    for (i = 0; i < 3; i++) {
        func_80132EF4(o, 0x51);
    }
    func_sc05_003_80181CDC(o, 0x7FB);
    func_8012C218(o);
}

void func_sc05_003_801814D8(u8 *o, s32 a) {
    SMtx m;
    SV8 c;

    func_8012EC04(AF(o, u8 *, 0x64), a, &m);
    func_8012F14C(&m, &D_sc05_003_801A4794, &c);
    AF(o, s16, 6) = c.x;
    AF(o, s16, 0xA) = c.y;
    AF(o, s16, 0xE) = c.z;
}

void func_sc05_003_80181540(u8 *arg0) {
    D_sc05_003_801A47A8[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc05_003_80181720((s32) arg0);
    }
}

void func_sc05_003_801815A0(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);

    AF(p, u8, 0x26) = 0x80;
    AF(p, u8, 0x25) = 0x80;
    AF(p, u8, 0x24) = 0x80;
    AF(p, s16, 0x0) = 2;
    AF(p, s16, 0x2) = 2;
    AF(p, s16, 0x28) = 0x2F0;
    AF(p, s16, 0x2A) = 0x100;
    AF(p, u16, 0x2C) = 0;
    AF(p, u8 *, 0x20) = &D_sc05_003_801A479C;
    AF(p, u16, 0x2C) = 0xC006;
    AF(p, u8, 0x27) = 0x51;
    AF(p, s16, 0x8) = 0;
    AF(p, s16, 0xA) = 0;
    AF(p, s16, 0xC) = 0;
    AF(p, s16, 0x2E) = 0;
    AF(p, s16, 0x30) = 0;
    AF(p, s16, 0x32) = 0;
    AF(p, s32, 0x34) = 0;
    AF(p, s32, 0x4) = 0xC000040;
    AF(p, s16, 0x1A) = 0xC00;
    AF(p, s16, 0x18) = 0xC00;
    AF(o, s16, 2)++;
}

void func_sc05_003_80181638(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x20);
    AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x80) {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_003_80181690(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x40) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_003_801816C4(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
    temp_v0 = AF(temp_v1, u16, 0x1A) - 0x100;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    if (((s16) AF(temp_v1, u16, 0x18) <= 0) || ((temp_v0 << 0x10) <= 0)) {
        func_801292C8((s32) arg0);
    }
}

s32 func_sc05_003_80181720(u8 *o) {
    V3 d;
    SV8 p;
    SV8 n;
    s32 r;
    
    if (D_801270C0 == 2) {
        return 0;
    }
    r = AF(AF(o, u8 *, 0x20), s16, 0x18);
    r = (r & ~0x7F) >> 7;
    p.x = AF(o, s16, 6);
    p.y = AF(o, s16, 0xA);
    p.z = AF(o, s16, 0xE);
    d.x = D_80126B5E - p.x;
    d.y = 0;
    d.z = D_80126B66 - p.z;
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    if (d.x + d.z >= r * r) {
        return 0;
    }
    if ((D_80126B62 - AF(o, s16, 0xA) < 0 ? AF(o, s16, 0xA) - D_80126B62 : D_80126B62 - AF(o, s16, 0xA)) < 10) {
        VectorNormal(&d, &d);
        n.x = d.x;
        n.y = d.y;
        n.z = d.z;
        func_8012F568(1, 0x4014, 0, 0x18, &p, &n);
        return 1;
    }
    return 0;
}

void func_sc05_003_8018187C(u8 *arg0) {
    D_sc05_003_801A47C4[AF(arg0, u16, 2)]();
}

void func_sc05_003_801818B8(u8 *o) {
    SV8 a;
    s32 m[8];
    V3 v;
    u8 *w;
    s32 t;

    w = AF(o, u8 *, 0x20);
    AF(w, u8 *, 0x20) = &D_sc05_003_801A47B8;
    AF(w, u8, 0x27) = 0x52;
    AF(w, s16, 0x28) = 0x2D0;
    AF(w, s16, 0x2A) = 0x100;
    AF(w, s16, 0x18) = AF(w, s16, 0x1A) = rand() % 4096 + 0x800;
    t = rand() % 128;
    if (!(rand() & 1)) {
        a.x = -t - 0x300;
    } else {
        a.x = t - 0x300;
    }
    a.y = rand() % 4096;
    a.z = 0;
    v.x = v.y = 0;
    v.z = -0x60000 - ((rand() % 4) << 16);
    RotMatrixZYX(&a, m);
    ApplyMatrixLV(m, &v, o + 0x10);
    AF(o, s32, 0x1C) = 0x2D;
    AF(o, u16, 2)++;
}

void func_sc05_003_80181A08(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_801292C8((s32) arg0);
        return;
    }
    if (func_sc05_003_80181AAC((s32) arg0, (s32) &D_800D3918, 0x11) & 0x6000) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 < 0x23) {
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
    }
}

s32 func_sc05_003_80181AAC(s32 arg0, SV *d, s32 arg2) {
    SV a;
    SV b;
    s32 r;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    a.vx += d->vx;
    a.vy += d->vy;
    a.vz += d->vz;
    func_8012931C(arg0);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA);
    b.vz = AF(arg0, s16, 0xE);
    b.vx += d->vx;
    b.vy += d->vy;
    b.vz += d->vz;
    r = func_8012CEB0(&a, &b, arg2);
    b.vx -= d->vx;
    b.vy -= d->vy;
    b.vz -= d->vz;
    AF(arg0, s16, 6) = b.vx;
    AF(arg0, s16, 0xA) = b.vy;
    AF(arg0, s16, 0xE) = b.vz;
    if (r & 0x6000) {
        AF(arg0, s32, 0x14) = 0;
    }
    return r;
}

void func_sc05_003_80181C00(u8 *o) {
    typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
    SpawnDef d;

    if (AF(o, s32, 0x1C)++ % AF(o, s16, 0xFC) == 0) {
        if (func_8012BE54(o) <= 0x240000) {
            d.x = AF(o, s16, 6);
            d.y = AF(o, s16, 0xA);
            d.z = AF(o, s16, 0xE);
            d.kind = 0x1FB;
            d.unk8 = AF(o, s16, 0x70);
            d.flags = 0;
            d.unkE = AF(AF(o, u8 *, 0x68), s16, 0xC);
            d.unk10 = AF(o, s32, 0xDC);
            d.unkC = 0x7FFF;
            func_8012C51C(&d, o);
        }
    }
}

s32 func_sc05_003_80181CDC(u8 *o, s32 id0) {
    SV8 v;
    SV8 r;
    s32 vol = 0x7F;
    s32 id = id0;
    s16 pan = 7;
    s32 t;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    func_8012EFB8(&v, &r);
    if ((r.x < 0 ? -r.x : r.x) > 200) {
        return 0;
    }
    if (r.y >= 0 ? r.y > 160 : -r.y > 160) {
        return 0;
    }
    t = func_8012BD14(o);
    vol -= (t - 0x1000) * 127 / 0xFF000;
    pan += r.x / 25;
    if (pan < 0) {
        pan = 0;
    } else if (pan >= 16) {
        pan = 15;
    }
    func_8002D4C8((u16)id, (u16)(vol | (pan << 8 | 0x3000)));
    return 1;
}

void func_sc05_003_80181E40(u8 *arg0) {
    D_sc05_003_801A9F5C[AF(arg0, u16, 2)]();
}

void func_sc05_003_80181E7C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc05_003_8018239C() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc05_003_801A9F10, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc05_003_801A9F1C);
    func_sc05_003_801823F4((s32) arg0);
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

void func_sc05_003_80181F78(u8 *arg0) {
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
            func_sc05_003_801823F4(arg0);
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
    func_sc05_003_80182470(arg0);
}

void func_sc05_003_80182208(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc05_003_801823F4(arg0);
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
    func_sc05_003_80182470(arg0);
}

s32 func_sc05_003_8018239C(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc05_003_801823F4(u8 *o) {
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

void func_sc05_003_80182470(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc05_003_801824B4(s32 o, s16 *v, s16 arg2) {
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
