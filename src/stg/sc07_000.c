#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_000_8017BE9C(void) {
}

void func_sc07_000_8017BEA4(void) {
}

void func_sc07_000_8017BEAC(void) {
}

void func_sc07_000_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc07_000_801860B8[])();
void func_sc07_000_8017DA78(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_000_801860C0[])();
extern u8 D_sc07_000_801860CC;
extern void func_8016EE40();
extern u8 D_sc07_000_801860D0;
extern void func_sc07_000_8017DB64();
extern void (*D_sc07_000_801860D4[])();
extern void (*D_sc07_000_80186528[])();
extern void (*D_sc07_000_80186548[])();
extern void (*D_sc07_000_80186560[])();
extern void (*D_sc07_000_8018658C[])();
extern void (*D_sc07_000_801865AC[])();
extern void (*D_sc07_000_801865C4[])();
extern void (*D_sc07_000_801867DC[])();
extern void (*D_sc07_000_80186840[])();
extern void (*D_sc07_000_80186858[])();
extern void (*D_sc07_000_80186860[])();

extern s32 func_8012BEE8();
extern void func_8012C218();
extern void func_8012AD80();

extern s32 func_8012AD44();
extern u8 D_sc07_000_801D0A84;
extern u16 D_sc07_000_801D0A7C;
extern u16 D_sc07_000_801D0A7E;
extern s16 D_sc07_000_801D0A80;
extern s16 D_sc07_000_801D0A82;
extern s32 func_sc07_000_80181A44();
extern void func_sc07_000_80181970();
extern void func_80015978();
extern s32 func_sc07_000_80181EB8();
extern s32 func_sc07_000_801821FC();
extern void func_sc07_000_801820E0();

extern s16 D_sc07_000_801D097C;

extern u8 D_sc07_000_8018608C;
extern void func_800D1724();

extern s32 func_sc07_000_8017DFFC();
extern void func_sc07_000_8018091C();
extern void func_8012AD50();
extern void func_sc07_000_80181FAC();

extern void func_8002931C();

extern void func_8002D4C8();
extern void func_8001BFD0();
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
extern s32 D_sc07_000_801D0598;
extern void func_8012C588();
extern u16 D_sc07_000_801D0B7C;
extern u8 D_sc07_000_801862AC;
extern void func_8013C9C4();
extern u16 D_sc07_000_801D0BB8;
extern void func_sc07_000_8017DF84();
extern s32 func_sc07_000_80180854();
extern s32 func_8012C658();
extern u8 D_sc07_000_801863A0;
extern void func_800D0C48();
extern void func_sc07_000_8017E7E8();
extern void func_80178B18();
extern s16 D_80126B66;
extern void func_8012B200();
extern s32 func_8012B8A4();
extern void func_8001AAA0();
extern s32 TestPadAll();
extern u8 D_sc07_000_801D05A0;
extern void func_800234E4();
extern u16 D_80126B58;
extern s16 D_80126B62;
extern void func_sc07_000_8017E658();
extern void func_sc07_000_8017E830();
extern s32 func_sc07_000_8017E20C();
extern u8 D_sc07_000_801BD0D4;
extern u8 D_sc07_000_80186558;
extern u8 D_sc07_000_801BCCAC;
extern s32 func_sc07_000_8017F888();
extern u8 D_sc07_000_801CC230;
extern void func_sc07_000_8017F958();
extern u8 D_sc07_000_801ADEA0;
extern s32 func_sc07_000_8018096C();
extern s32 func_80132EF4();
extern u8 D_sc07_000_80186550;
extern u8 D_sc07_000_801B9C88;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void func_80143970();
extern void func_sc07_000_8017F4F8();
extern s32 func_sc07_000_8017EE40();
extern void func_sc07_000_8017F3FC();
extern s32 func_sc07_000_8017EE8C();
s32 func_sc07_000_8017EEC0(s32 arg0);
extern void func_sc07_000_8017F098();
extern void func_sc07_000_8017F464();
extern u8 D_sc07_000_80186584;
extern u8 D_sc07_000_801C0DEC;
extern void func_80029124();
extern u8 D_sc07_000_801865B8;
extern u8 D_sc07_000_801865B9;
extern u8 D_sc07_000_801865BA;
extern u8 D_sc07_000_801D0678;
extern void func_sc07_000_8017FE9C();
extern void func_801292C8();
extern u8 D_sc07_000_801865C0;
extern u8 D_sc07_000_801865C1;
extern u8 D_sc07_000_801865C2;

extern void func_80142454();
extern u8 D_sc07_000_801BCE04;
extern u8 D_sc07_000_80182DD8;
extern u16 D_sc07_000_801867A0[];
extern s32 func_801290DC();



typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

void func_sc07_000_8017BEBC(u8 *obj) {
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

s32 func_sc07_000_8017CD9C(s32 arg0) {
    s32 sp10[8];
    s32 temp_v0;

    GsInitCoordinate2(0, arg0);
    temp_v0 = GsGetLw(arg0, (s32) sp10);
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
    return temp_v0;
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
extern PtSys D_sc07_000_801D0970;
extern void func_sc07_000_80182238();
extern s16 D_sc07_000_801D0976;
extern void func_sc07_000_8018234C();

extern WMtx D_800AE620;
extern OtRef D_800A651C[];
extern Ot14 D_800A6518[];
extern s32 func_80016638();
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern u8 D_sc07_000_801D0978;
extern u8 D_sc07_000_801D0979;
extern u8 D_sc07_000_801D097A;

extern u8 D_sc07_000_801865BC;
extern u8 D_sc07_000_801865BD;
extern u8 D_sc07_000_801865BE;
extern void func_80129350();

extern u8 D_800AF648;


typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc07_000_8017DC68();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern u8 D_sc07_000_801CCFA8;
extern u8 D_sc07_000_801CE7A4;
extern void func_8001CD9C();
extern void func_800233CC();

extern s32 D_sc07_000_801D0C5C;
extern s32 D_sc07_000_801861C8[];
extern s32 D_sc07_000_80186150[];
extern s32 D_sc07_000_801860D8[];
extern void func_8013C0F8();
extern u8 D_sc07_000_801A3560;
extern u8 D_sc07_000_801D0540;
extern u8 D_sc07_000_801D0C78;
extern void func_sc07_000_8017CDF0();
extern void func_sc07_000_8017E804();
extern SV8 D_sc07_000_801865D8[];
extern void func_8001CA88();
extern CV D_sc07_000_80186540[];
extern u8 D_sc07_000_801CE6E0;
extern void func_8001C1E4();
extern u8 D_sc07_000_801D0620;
extern u8 D_sc07_000_801D0624;
extern UV4 D_sc07_000_801D0630[];
extern XY D_sc07_000_801D0660[];
extern u8 D_sc07_000_801865A8;
extern void func_sc07_000_8017DF94();
extern void func_sc07_000_801805C0();
extern void func_sc07_000_80180200();
extern void func_sc07_000_801802E4();
extern void func_8012E014();

extern s32 func_80178970();
extern void func_80178D18();
extern u16 D_80126B5E;
extern s32 D_80126B78;
extern s32 D_80126B90;
extern s16 D_sc07_000_80186248;
extern s16 D_sc07_000_8018624A;
extern s16 D_sc07_000_8018624C;
extern s16 D_sc07_000_8018624E;
extern s32 func_80135888();
extern u8 D_801152A8;
extern void func_8012F568();
extern void func_8001C2C4();
extern u8 D_sc07_000_801866C8[];
extern s16 D_sc07_000_80186728[];
extern s32 D_sc07_000_801867E8[];
extern s32 D_sc07_000_80186820[];
extern u8 *D_sc07_000_80186830[];
extern u16 D_sc07_000_80186848[];
extern u16 D_sc07_000_80186850[];
extern void func_80142414();
extern void func_sc07_000_8017F59C();

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
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern CV4 D_sc07_000_801CE7A8;


void func_sc07_000_8017CDF0(u8 *obj, u8 *hdr, MtxDCM *m) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    SV8 v[4];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 type;
    u8 *d;
    u8 *d3;
    u8 *a;
    u8 *b;
    u32 *t;

    if (AF(obj, s32, 0) != 0) {
        return;
    }
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(m, &ls);
    GsSetLsMatrix(&ls);
    ot = g_WorldOtTable[D_800B9A02[0]];
    pk = g_PrimNext;
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    c = (ChunkDCM *)(hdr + 0x14);
    for (i = 0; i < n; i++, c++) {
        xl = c->x;
        xh = c->x >> 16;
        yl = c->y;
        yh = c->y >> 16;
        x = c->z;
        y = x >> 16;
        box[0].x = xl; box[0].y = yl; box[0].z = x;
        box[1].x = xh; box[1].y = yl; box[1].z = x;
        box[2].x = xl; box[2].y = yl; box[2].z = y;
        box[3].x = xh; box[3].y = yl; box[3].z = y;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        box[4].x = xl; box[4].y = yh; box[4].z = x;
        box[5].x = xh; box[5].y = yh; box[5].z = x;
        box[6].x = xl; box[6].y = yh; box[6].z = y;
        box[7].x = xh; box[7].y = yh; box[7].z = y;
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
            v[0] = *(SV8 *)a;
            v[1] = *(SV8 *)b;
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            v[2] = *(SV8 *)d3;
            gte_ldv3c(v);
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
            { u32 *otp; u32 tw; s16 p0, p1, p2, q0, q1, q2; s32 mz;
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
                if (g.sz0 > g.sz1) { mz = g.sz0; if (mz < g.sz2) mz = g.sz2; } else { mz = g.sz1; if (mz < g.sz2) mz = g.sz2; }
                t = (u32 *)poly[0];
                tw = t[0];
                g.z = mz;
                AF(pk, u32, 4) = tw;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((mz >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
                gte_stsxy3c(tmp);
                v[3] = *(SV8 *)d;
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
                zc = zb;
                if (zc < za) zc = za;
                g.z = zc;
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
                otp = (u32 *)(((zc >> 2) << 2) + (u32)ot);
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

void func_sc07_000_8017D8C4(void) {
    func_8002931C(0x04740000);
}

void func_sc07_000_8017D8E4(u8 *arg0) {
    D_sc07_000_801860B8[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_000_8017D920(u8 *arg0) {
    func_sc07_000_8017DA78();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_000_8017D964(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_000_8017D988(u8 *arg0) {
    D_sc07_000_801860C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_000_8017D9C4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_000_8017D9E0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_000_8017DA54(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc07_000_8017DA78(void) {
    func_8016EE40((s32) &D_sc07_000_801860CC, 0x01000000);
}

void func_sc07_000_8017DAA0(void) {
    func_8016EE40((s32) &D_sc07_000_801860D0, 0x01000000);
}

void func_sc07_000_8017DAC8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0xC00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_000_8017DB64, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_000_8017DB64((s32) &D_80126948);
}

void func_sc07_000_8017DB64(s32 arg0) {
    D_sc07_000_801860D4[AF(arg0, u8, 4)]();
}

extern SV8 D_80126940;
void func_sc07_000_8017DBA0(u8 *o) {
    SV8 v;

    v = D_80126940;
    if (v.y > -0x400) {
        v.y = -0x400;
    } else if (v.y < -0x800) {
        v.y = -0x800;
    }
    if (v.z > 0x2600) {
        if (v.y > -0x500) {
            v.y = -0x500;
        }
    } else if (v.z > 0x1A00) {
        if (v.y > -0x400) {
            v.y = -0x400;
        }
    }
    func_sc07_000_8017DC68(o, &v);
}

void func_sc07_000_8017DC68(u8 *arg0, u8 *arg1) {
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

void func_sc07_000_8017DE00(void) {
    s32 i;

    switch (D_sc07_000_801D0C5C) {
    case 0:
        for (i = 0; i < 30; i++) {
            func_8013C0F8(D_sc07_000_801860D8[i]);
            func_sc07_000_8017CD9C(D_sc07_000_80186150[i]);
            D_sc07_000_801861C8[i] = 1;
        }
        D_sc07_000_801D0598 = 1;
        func_8013C0F8(&D_sc07_000_801A3560);
        func_sc07_000_8017CD9C((s32) &D_sc07_000_801D0540);
        D_sc07_000_801D0C5C++;
        break;
    case 1:
        for (i = 0; i < 30; i++) {
            if (D_sc07_000_801861C8[i] != 0) {
                func_sc07_000_8017CDF0(&D_sc07_000_801D0C78, D_sc07_000_801860D8[i], D_sc07_000_80186150[i]);
            }
        }
        if (D_sc07_000_801D0598 != 0) {
            func_sc07_000_8017CDF0(&D_sc07_000_801D0C78, &D_sc07_000_801A3560, &D_sc07_000_801D0540);
        }
        break;
    }
}

void func_sc07_000_8017DF84(s32 arg0) {
    D_sc07_000_801D0598 = arg0;
}

void func_sc07_000_8017DF94(s32 i, SV8 *v, s32 c) {
    AF(D_sc07_000_80186150[i], s32, 0x18) = v->x;
    AF(D_sc07_000_80186150[i], s32, 0x1C) = v->y;
    AF(D_sc07_000_80186150[i], s32, 0x20) = v->z;
    AF(D_sc07_000_80186150[i], s32, 0) = 0;
    D_sc07_000_801861C8[i] = c;
}

s32 func_sc07_000_8017DFF4(void) {
    return 0x86;
}

s32 func_sc07_000_8017DFFC(s32 arg0) {
    return func_8012AD44(arg0, 2);
}

void func_sc07_000_8017E01C(s32 arg0) {
    func_8012C588(0x38D, arg0);
}

s32 func_sc07_000_8017E040(void) {
    return D_sc07_000_801D0B7C == 1;
}

void func_sc07_000_8017E058(void) {
    D_sc07_000_801D0B7C = 2;
}

s32 func_sc07_000_8017E06C(void) {
    return D_sc07_000_801D0B7C == 3;
}

void func_sc07_000_8017E084(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_8002D4C8(0xB70, 0);
}

s32 func_sc07_000_8017E0B0(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_8002D4C8(4, 0xB70);
        return 1;
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_8013C9C4((s32) &D_sc07_000_801862AC);
    }
    return 0;
}

void func_sc07_000_8017E118(s32 arg0) {
    func_sc07_000_8017DF84(0);
    D_sc07_000_801D0BB8 |= 1;
    func_sc07_000_80180854();
    AF(arg0, s32, 0xCC) = func_8012C658(0x3B3, 0, arg0);
    AF(arg0, s32, 0xD0) = func_8012C658(0x3B3, 1, arg0);
    func_8002D4C8(0xB74, 0);
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x34) = 3;
}

s32 func_sc07_000_8017E1A8(u8 *arg0) {
    return AF(arg0, s16, 0xE) >= 0x1C1;
}

s32 func_sc07_000_8017E1BC(s32 arg0) {
    D_sc07_000_801D0BB8 |= 2;
    func_8012C588(0x38E, arg0);
    return func_8012AD44(arg0, 3);
}

s32 func_sc07_000_8017E20C(s32 arg0) {
    func_800D0C48(1);
    func_sc07_000_8017E7E8(arg0);
    AF(arg0, s32, 0x1C) = 0x20;
    func_80178B18(arg0, (s32) &D_sc07_000_801863A0);
    AF(arg0, s16, 0x100) = 0;
    return func_8012AD44(arg0, 4);
}

void func_sc07_000_8017E268(u8 *o) {
    u16 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o)) {
            AF(o, u16, 0x34) = 1;
        }
        func_sc07_000_8017E3A4((s32)o);
        break;
    case 1:
        if (((s32 (*)())func_8001AAA0)(0x70)) {
            AF(o, u16, 0x34) = 2;
        }
        func_sc07_000_8017E3A4((s32)o);
        break;
    case 2:
        func_sc07_000_8017E3A4((s32)o);
        break;
    case 3:
        if (AF(o, s16, 0xE) < 0x2F00) {
            func_8012AD80(o);
        }
        break;
    case 4:
        func_8012AD80(o);
        if (AF(o, s16, 0xE) >= 0x2F10) {
            D_sc07_000_801D0B7C = 5;
            AF(o, s32, 0x1C) = 0x18;
            AF(o, u16, 0x34) = 5;
        }
        break;
    case 5:
        if (AF(o, s16, 0xE) < 0x2F40) {
            func_8012AD80(o);
        }
        if (func_8012BEE8(o)) {
            t = AF(o, u16, 0x34);
            D_sc07_000_801D0B7C = 6;
            AF(o, u16, 0x34) = t + 1;
        }
        break;
    case 6:
        break;
    }
    if (func_80178970(o)) {
        func_80178D18(o);
    }
}

void func_sc07_000_8017E3A4(s32 arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x100);
    if ((temp_v0 == 0) && (D_80126B66 >= 0x2E41)) {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 + 1);
        func_80142454(-0x80);
    }
}

s32 func_sc07_000_8017E3F0(u8 *arg0) {
    return AF(arg0, u16, 0x34) == 2;
}

s32 func_sc07_000_8017E404(void) {
    return D_80126B66 >= 0x2EC0;
}

void func_sc07_000_8017E41C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    func_8002D4C8(0xB70, 0);
}

s32 func_sc07_000_8017E448(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_8002D4C8(4, 0xB70);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_8013C9C4((s32) &D_sc07_000_801862AC);
    }
    return AF(arg0, s32, 0x1C) == 0;
}

void func_sc07_000_8017E4B0(u8 *arg0) {
    AF(arg0, s16, 6) = 0x1B0;
    AF(arg0, s16, 0xA) = -0x600;
    AF(arg0, s16, 0xE) = 0x2C70;
    func_8012B200((s32) arg0);
    AF(arg0, s32, 0x10) = 0xFFFE8000;
    AF(arg0, s32, 0x18) = 0x38000;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8012B8A4((s32) arg0);
    AF(arg0, s16, 0x34) = 3;
}

void func_sc07_000_8017E524(u8 *arg0) {
    AF(arg0, s16, 0x34) = 4;
    D_sc07_000_801D0B7C = 4;
    func_800D0C48(1);
}

s32 func_sc07_000_8017E554(void) {
    return D_sc07_000_801D0B7C == 6;
}

void func_sc07_000_8017E56C(void) {
    func_8001AAA0(0x97);
}

void func_sc07_000_8017E58C(void) {
    func_800D1724((s32) &D_sc07_000_8018608C);
}

s32 func_sc07_000_8017E5B4(void) {
    return 0;
}

s16 func_sc07_000_8017E5BC(void) {
    return TestPadAll(1, 0, 0x10);
}

void func_sc07_000_8017E5E8(void) {
    D_sc07_000_801D0B7C = 6;
}

void func_sc07_000_8017E5FC(u8 *arg0) {
    D_sc07_000_80186528[AF(arg0, u16, 2)]();
}

void func_sc07_000_8017E638(s32 arg0) {
    AF(arg0, s16, 0xFE) = 0;
    func_8012B200(arg0);
}

void func_sc07_000_8017E658(u8 *o) {
    s16 y;
    s16 d;
    s32 t;
    s16 lim;
    s16 x;
    s16 n;

    y = AF(o, s16, 0xE);
    if (y > 0x2400) {
        t = AF(o, s32, 0x18);
        if (t != 0) {
            t -= 0x2000;
            AF(o, s32, 0x18) = t;
            if (t < 0) {
                AF(o, s32, 0x18) = 0;
            }
        }
    } else {
        d = D_80126B66 - y;
        if (d < 0x100) {
            if (AF(o, s32, 0x18) > 0x20000) {
                AF(o, s32, 0x18) -= 0x4000;
            }
        } else if (d < 0x1F0) {
            func_sc07_000_8017E804(o, 0x70000, 0x4000);
        } else {
            func_sc07_000_8017E804(o, 0xA0000, 0x4000);
        }
    }
    lim = D_sc07_000_801865D8[AF(o, s16, 0xFE)].y - 0x50;
    x = AF(o, s16, 0xA);
    if (x < lim) {
        AF(o, s16, 0xA) = x + 1;
    } else if (x > lim) {
        AF(o, s16, 0xA) = x - 1;
    }
    func_8012AD80(o);
    n = AF(o, s16, 0xFE);
    if (D_sc07_000_801865D8[n].z < AF(o, s16, 0xE) + 0x180) {
        AF(o, s16, 0xFE) = n + 1;
    }
    func_sc07_000_8017E7A0(o);
}

s32 func_sc07_000_8017E7A0(s32 arg0) {
    s32 temp_v0;
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0x102) + 0x20;
    AF(arg0, u16, 0x102) = temp_a0;
    temp_v0 = rsin((s32) (s16) temp_a0) >> 8;
    AF(arg0, s16, 0x52) = (s16) temp_v0;
    return temp_v0;
}

void func_sc07_000_8017E7E8(s32 arg0) {
    AF(arg0, u16, 0xA) += AF(arg0, u16, 0x52);
    AF(arg0, u16, 0x52) = 0;
    AF(arg0, s16, 0x102) = 0;
}

void func_sc07_000_8017E804(u8 *o, s32 lim, s32 step) {
    s32 v;

    v = AF(o, s32, 0x18);
    if (v < lim) {
        AF(o, s32, 0x18) = v + step;
    } else if (lim < v) {
        AF(o, s32, 0x18) = v - step;
    }
}

void func_sc07_000_8017E830(u8 *o) {
    SV8 a;
    SV8 b;
    s16 px;
    s16 pz;

    px = D_80126B62;
    if (px > AF(o, s16, 0xA) + D_sc07_000_80186248 && px < AF(o, s16, 0xA) + D_sc07_000_8018624A) {
        pz = D_80126B66;
        if (pz > AF(o, s16, 0xE) + D_sc07_000_8018624C && pz < AF(o, s16, 0xE) + D_sc07_000_8018624E) {
            a.x = AF(o, u16, 6);
            a.y = px - 0x20;
            a.z = AF(o, u16, 0xE);
            b.x = D_80126B5E;
            b.y = px - 0x20;
            b.z = pz;
            if (func_80135888(D_80126B78, D_80126B90, &a, &b)) {
                func_8012F568(1, 4, func_8012B8A4(o), 0xC8, &b, &D_801152A8);
            }
        }
    }
}

void func_sc07_000_8017E960(u8 *o) {
    u8 *e;
    u8 *p;

    e = (u8 *) func_8012C1B8();
    AF(o, u8 *, 0x20) = e;
    if (e == 0) {
        func_8012CAE4(o);
        return;
    }
    p = (AF(o, s16, 0x70) << 6) + &D_sc07_000_801D05A0;
    func_8001CA88(e, p);
    func_800233CC(p, 0x100);
    *(CV *)p = D_sc07_000_80186540[AF(o, s16, 0x70)];
    *(CV *)(p + 4) = *(CV *)&D_sc07_000_801CE6E0;
    AF(AF(o, u8 *, 0x20), u16, 0x2E) = 0xC080;
    if (AF(o, s16, 0x70) == 0) {
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50800000;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1A00;
    } else {
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50800000;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1200;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1600;
    }
    func_8001C1E4(AF(o, u8 *, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x20));
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = -0xA8;
    AF(o, s16, 0xE) = 0;
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x1000100;
    func_8012AD50(o);
}

void func_sc07_000_8017EAD8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a0;
    s16 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;

    temp_a0 = AF(arg0, s16, 0x70);
    temp_s1 = (temp_a0 << 6) + &D_sc07_000_801D05A0;
    if (temp_a0 == 0) {
        temp_v0 = AF(arg0, u16, 0xFE) - 0x40;
        AF(arg0, u16, 0xFE) = temp_v0;
        func_800234E4((s32) temp_s1, 0x100, temp_v0 & 0xFFFF);
        AF(temp_s1, u8, 2) = (s8) ((rsin((s32) (s16) AF(arg0, u16, 0xFE)) >> 8) + 0x10);
        return;
    }
    temp_v0_2 = AF(arg0, u16, 0xFE) + 0x40;
    AF(arg0, u16, 0xFE) = (u16) temp_v0_2;
    AF(AF(arg0, void *, 0x20), s16, 0x18) = (s16) ((rsin((s32) temp_v0_2, arg1, arg2, arg3) >> 3) + 0x1000);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rsin((s16) AF(arg0, u16, 0xFE) + 0x400) >> 3) + 0x1600);
    func_800234E4((s32) temp_s1, 0x100, (s32) AF(arg0, u16, 0xFE));
    AF(temp_s1, u8, 1) = (s8) ((rsin((s16) AF(arg0, u16, 0xFE) + 0x400) >> 8) + 0x10);
}

void func_sc07_000_8017EBC4(u8 *arg0) {
    D_sc07_000_80186548[AF(arg0, u16, 2)]();
}

extern s32 func_8012C354();
extern u8 D_sc07_000_80186250;
extern void func_8001D0E8();
extern u8 D_sc07_000_801B0A20;
extern void func_sc07_000_80180440();
void func_sc07_000_8017EC00(u8 *o) {
    typedef struct { u8 pad[0x18]; s16 f18, f1A, f1C; u8 pad2[0xE]; u16 f2C; } T20;
    T20 *p;

    if (func_8012C354(o, &D_sc07_000_80186250) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, s16, 0xAE) = -1;
        func_8001D0E8(AF(o, s32, 0x20), 0x280, 0x1E0);
        SetScript(o, (s32)&D_sc07_000_801B0A20);
        AF(o, T20 *, 0x20)->f2C |= 0x10;
        D_sc07_000_801D0BB8 = 0;
        p = AF(o, T20 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x1C00;
        func_sc07_000_80180440(o);
        func_sc07_000_8017DFFC((s32)o);
    }
}

void func_sc07_000_8017ECAC(void) {
}

extern u8 D_sc07_000_801862C0;
void func_sc07_000_8017ECB4(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, u16, 0x34) = 1;
        break;
    case 1:
        func_80178B18(o, &D_sc07_000_801862C0);
        AF(o, u16, 0x34) = 2;
        break;
    case 2:
        break;
    case 3:
        if (func_8012BEE8(o)) {
            func_sc07_000_8017E638((s32)o);
            AF(o, u16, 0x34) = 4;
        }
        break;
    case 4:
        func_sc07_000_8017E658(o);
        break;
    }
    if (AF(o, u16, 0x34) >= 2 && func_80178970(o)) {
        func_80178D18(o);
        func_sc07_000_8017E1BC((s32)o);
    }
}

void func_sc07_000_8017ED8C(s32 arg0) {
    s16 temp_v1;

    func_sc07_000_8017E658(arg0);
    temp_v1 = AF(arg0, s16, 0xE);
    if (D_80126B66 < (temp_v1 + 0x40)) {
        D_80126B66 = temp_v1 + 0x40;
    }
    func_sc07_000_8017E830(arg0);
    if ((D_80126B66 >= 0x2D80) && (D_80126B62 < -0x5E1) && ((u32) (D_80126B58 - 2) >= 2U)) {
        func_sc07_000_8017E20C(arg0);
    }
}

void func_sc07_000_8017EE38(void) {
}

s32 func_sc07_000_8017EE40(s32 arg0) {
    SetScript(arg0, (s32) &D_sc07_000_801BD0D4);
    func_8012B200(arg0);
    AF(arg0, s32, 0x18) = 0xC0000;
    return func_8012AD44(arg0, 1);
}

s32 func_sc07_000_8017EE8C(s32 arg0) {
    func_8012B200(arg0);
    return func_8012AD44(arg0, 2);
}

s32 func_sc07_000_8017EEC0(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc07_000_8017EEE0(u8 *o) {
    typedef struct { u8 pad[0x34]; u16 s34; } ObjS;
    u8 *p;
    s16 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        t = AF(AF(o, u8 *, 0x20), s16, 0x12);
        if (t != 0x800) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) = t + 0x100;
            p = AF(o, u8 *, 0x20);
            if (AF(p, s16, 0x12) > 0x800) {
                AF(p, s16, 0x12) = 0x800;
            }
            if (AF(AF(o, u8 *, 0x20), s16, 0x12) == 0x800) {
                SetScript(o, &D_sc07_000_801BD0D4);
                AF(o, s32, 0x18) = 0xC0000;
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 1:
        func_8012AD80(o);
        if (AF(o, s16, 0xE) > 0x4E0) {
            D_sc07_000_801D0B7C = 3;
            ((ObjS *)o)->s34++;
        }
        break;
    case 2:
        func_8012AD80(o);
        if (AF(o, s16, 0xE) > 0x540) {
            func_sc07_000_8017F044(o);
        }
        break;
    }
    if (AF(o, s32, 0x18) != 0) {
        if ((++AF(o, s32, 0x1C) & 7) == 0) {
            func_sc07_000_8017F3FC(o);
        }
    }
}

s32 func_sc07_000_8017F044(s32 arg0) {
    SetScript(arg0, (s32) &D_sc07_000_801BCCAC);
    func_8012B200(arg0);
    func_sc07_000_8017F888(arg0, (s32) &D_sc07_000_80186558);
    return func_8012AD44(arg0, 4);
}

void func_sc07_000_8017F098(o)
    u8 *o;
{
    func_sc07_000_8017F4F8(0);
    func_8012AD44(o, 5);
}

void func_sc07_000_8017F0D0(s32 arg0) {
    s32 temp_v0;

    SetScript(arg0, (s32) &D_sc07_000_801BCE04);
    AF(arg0, s32, 0x10) = 0x80000;
    AF(arg0, s32, 0x14) = 0xFFEA0000;
    AF(arg0, s32, 0x18) = 0x180000;
    AF(arg0, s32, 0x1C) = 0xC;
    temp_v0 = func_80132EF4(arg0, 0x76);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x50);
    }
    func_8012AD44(arg0, 6);
    func_8002D4C8(0xC1B, 0);
}

void func_sc07_000_8017F15C(u8 *o) {
    u8 *p;
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x12) -= 0x20;
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x10) += 0x18;
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            p = AF(o, u8 *, 0x20);
            AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x2400;
            AF(o, s16, 0xFE) = 0x120;
            AF(o, s32, 0x1C) = 0x40;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x10) += 0x80;
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x14) -= 0x10;
        func_8012AD80(o);
        if (func_8012BEE8(o) == 0) {
            {
                u8 *q = AF(o, u8 *, 0x20);
                s16 t = AF(q, s16, 0x18);
                if (t > 0x200) {
                    AF(q, s16, 0x18) = t - AF(o, s16, 0xFE);
                }
            }
            {
                u8 *q = AF(o, u8 *, 0x20);
                AF(q, s16, 0x1A) = AF(q, s16, 0x1C) = AF(q, s16, 0x18);
            }
            if (AF(o, s16, 0xFE) > 0x40) {
                AF(o, s16, 0xFE) -= 8;
            }
        } else {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        if (D_sc07_000_801D0B7C == 7) {
            func_sc07_000_8017F888(o, &D_sc07_000_80186558);
            {
                u8 *q = AF(o, u8 *, 0x20);
                AF(q, s16, 0x10) = AF(q, s16, 0x12) = AF(q, s16, 0x14) = 0;
            }
            p = AF(o, u8 *, 0x20);
            AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x1000;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (D_sc07_000_801D0B7C == 6) {
            SetScript(o, &D_sc07_000_801BCE04);
            AF(o, s32, 0x10) = 0x80000;
            AF(o, s32, 0x14) = 0xFFEA0000;
            AF(o, s32, 0x18) = 0x180000;
            AF(o, s32, 0x1C) = 0xC;
            r = func_80132EF4(o, 0x76);
            if (r != 0) {
                AF(r, s16, 0xA) -= 0x50;
            }
            func_8012AD44(o, 6);
            func_8002D4C8(0xC1B, 0);
        }
        break;
    }
}

void func_sc07_000_8017F3C0(u8 *arg0) {
    D_sc07_000_80186560[AF(arg0, u16, 2)]();
}

void func_sc07_000_8017F3FC(u8 *o) {
    s32 r;

    r = func_80132EF4(o, 0x22);
    if (r != 0) {
        AF(r, s32, 0x34) = 0x2000;
        AF(r, s32, 0x10) = -(AF(o, s32, 0x10) >> 2);
        AF(r, s32, 0x14) = -0x4000;
        AF(r, s32, 0x18) = -(AF(o, s32, 0x18) >> 2);
    }
}

void func_sc07_000_8017F464(s32 arg0) {
    s16 temp_v1;

    temp_v1 = AF(arg0, s16, 0x100);
    switch (temp_v1) {                              /* irregular */
    case 0x3C:
        func_sc07_000_8017F4F8(1);
        break;
    case 0x3F:
        func_sc07_000_8017F4F8(0);
        break;
    case 0x60:
        AF(arg0, s16, 0x100) = 0;
        break;
    }
    AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + 1);
}

extern void MoveImage(void *rect, s32 x, s32 y);
extern u16 D_sc07_000_8018657C[];
extern u16 D_sc07_000_8018657E[];
void func_sc07_000_8017F4F8(s32 i) {
    typedef struct { s16 x, y, w, h; } RECT;
    RECT r;

    r.x = D_sc07_000_8018657C[i * 2];
    r.y = D_sc07_000_8018657E[i * 2];
    r.w = 8;
    r.h = 0x20;
    MoveImage(&r, 0x2F4, 0x1A0);
}

s32 func_sc07_000_8017F554(s32 arg0) {
    func_sc07_000_8017F958(0);
    SetScript(arg0, (s32) &D_sc07_000_801CC230);
    return func_8012AD44(arg0, 2);
}

void func_sc07_000_8017F59C(u8 *o) {
    s32 r;
    s32 y;
    s32 w;

    AF(o, s32, 0x10) = (AF(AF(o, u8 *, 0x64), s32, 4) - AF(o, s32, 4)) >> 4;
    y = AF(o, s32, 8) + 0x1400000;
    AF(o, s32, 0x14) = (AF(AF(o, u8 *, 0x64), s32, 8) - y) >> 4;
    AF(o, s32, 0x18) = (AF(AF(o, u8 *, 0x64), s32, 0xC) - AF(o, s32, 0xC) + 0x200000) >> 4;
    AF(o, s32, 0x1C) = 0x10;
    r = func_80132EF4(o, 0x77);
    if (r != 0) {
        AF(r, s32, 4) += AF(o, s32, 0x10) * 4;
        w = AF(r, s32, 8) - 0x300000;
        AF(r, s32, 8) = w + AF(o, s32, 0x14) * 4;
        AF(r, s32, 0xC) += AF(o, s32, 0x18) * 4;
    }
    SetScript(o, &D_sc07_000_801CCFA8);
    func_8012AD44(o, 3);
    func_8002D4C8(0xC1A, 0);
}

void func_sc07_000_8017F69C(u8 *o) {
    s32 r;
    s32 y;
    s32 w;
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            func_8012B200(o);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (D_sc07_000_801D0B7C == 7) {
            func_sc07_000_8017F888(o, &D_sc07_000_80186584);
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        if (D_sc07_000_801D0B7C == 6) {
            AF(o, s32, 0x10) = (AF(AF(o, u8 *, 0x64), s32, 4) - AF(o, s32, 4)) >> 4;
            y = AF(o, s32, 8) + 0x1400000;
            AF(o, s32, 0x14) = (AF(AF(o, u8 *, 0x64), s32, 8) - y) >> 4;
            AF(o, s32, 0x18) = (AF(AF(o, u8 *, 0x64), s32, 0xC) - AF(o, s32, 0xC) + 0x200000) >> 4;
            AF(o, s32, 0x1C) = 0x10;
            r = func_80132EF4(o, 0x77);
            if (r != 0) {
                AF(r, s32, 4) += AF(o, s32, 0x10) * 4;
                w = AF(r, s32, 8) - 0x300000;
                AF(r, s32, 8) = w + AF(o, s32, 0x14) * 4;
                AF(r, s32, 0xC) += AF(o, s32, 0x18) * 4;
            }
            SetScript(o, &D_sc07_000_801CCFA8);
            func_8012AD44(o, 3);
            func_8002D4C8(0xC1A, 0);
        }
        break;
    }
}

void func_sc07_000_8017F84C(u8 *arg0) {
    D_sc07_000_8018658C[AF(arg0, u16, 2)]();
}

s32 func_sc07_000_8017F888(s32 arg0, s32 arg1) {
    u16 temp_v0;

    AF(arg0, u16, 6) = (u16) AF(arg1, u16, 0);
    AF(arg0, u16, 0xA) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 0xE) = (u16) AF(arg1, u16, 4);
    temp_v0 = AF(arg1, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_sc07_000_8017F8B8(u8 *o) {
    switch (AF(o, s16, 0xFE)) {
    case 0x34:
        func_sc07_000_8017F958(0);
        break;
    case 0x2E:
    case 0x32:
        func_sc07_000_8017F958(1);
        break;
    case 0x30:
        func_sc07_000_8017F958(2);
        break;
    case 0x58:
        AF(o, s16, 0xFE) = 0;
        break;
    }
    AF(o, u16, 0xFE)++;
}

extern u16 D_sc07_000_8018659C[];
extern u16 D_sc07_000_8018659E[];
void func_sc07_000_8017F958(s32 i) {
    typedef struct { s16 x, y, w, h; } RECT;
    RECT r;

    r.x = D_sc07_000_8018659C[i * 2];
    r.y = D_sc07_000_8018659E[i * 2];
    r.w = 0xC;
    r.h = 0x28;
    MoveImage(&r, 0x2C0, 0x100);
}

void func_sc07_000_8017F9B4(u8 *o) {
    u8 *e;
    s32 i;

    e = &D_sc07_000_801D0620;
    func_8001CD9C(AF(o, u8 *, 0x20), e);
    func_800233CC(e, 0x40);
    for (i = 0; i < 6; i++) {
        D_sc07_000_801D0660[i].x = (s16) D_sc07_000_801D0630[i].x >> 3;
        D_sc07_000_801D0660[i].y = (s16) D_sc07_000_801D0630[i].y >> 3;
    }
    *(CV *)&D_sc07_000_801D0620 = *(CV *)&D_sc07_000_801865A8;
    *(CV *)&D_sc07_000_801D0624 = *(CV *)&D_sc07_000_801CE7A4;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x800;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x800;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
    AF(o, s32, 0x1C) = 4;
    AF(o, s16, 0x2C) = 0;
    AF(o, s16, 0x2E) = 0;
    AF(o, u16, 2)++;
}

void func_sc07_000_8017FAFC(u8 *arg0) {
    D_sc07_000_801865AC[AF(arg0, u16, 2)]();
}

extern void func_80016450();
void func_sc07_000_8017FB38(u8 *o) {
    if (AF(o, s16, 0x2E) == 0) {
        if (AF(o, s16, 0x2C) < 0x60) {
            AF(o, s16, 0x2C) += 0x20;
            if (AF(o, s16, 0x2C) >= 0x60) {
                AF(o, u16, 0x2E)++;
            }
        }
    } else {
        if (AF(o, s16, 0x2C) != 0) {
            AF(o, s16, 0x2C) -= 0x10;
            if (AF(o, s16, 0x2C) < 0) {
                AF(o, s16, 0x2C) = 0;
            }
        }
    }
    if (AF(o, s16, 0x2C) != 0) {
        func_80016450(AF(o, s16, 0x2C) & 0xFF, 1);
    }
}

void func_sc07_000_8017FBE8(u8 *o) {
    s16 n = AF(o, s16, 0x2C);
    u8 *e = (n << 6) + &D_sc07_000_801D0678;
    switch (n) {
    case 0:
        func_8001CD9C(AF(o, u8 *, 0x20), e);
        func_800233CC(e, 0x80);
        *(CV *)e = *(CV *)&D_sc07_000_801CE7A4;
        *(CV *)(e + 4) = *(CV *)&D_sc07_000_801CE7A4;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000000;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        AF(o, s16, 0x2E) = 1;
        AF(o, s32, 0x1C) = 2;
        AF(o, s16, 2) = 1;
        break;
    case 1:
        func_8001CD9C(AF(o, u8 *, 0x20), e);
        func_800233CC(e, 0x40);
        *(CV *)e = *(CV *)&D_sc07_000_801CE7A4;
        *(CV *)(e + 4) = *(CV *)&D_sc07_000_801CE7A4;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        AF(o, s16, 2) = 3;
        break;
    case 2:
        func_8001CD9C(AF(o, u8 *, 0x20), e);
        func_800233CC(e, 0x80);
        *(CV *)e = *(CV *)&D_sc07_000_801CE7A4;
        *(CV *)(e + 4) = *(CV *)&D_sc07_000_801865C0;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        AF(o, s16, 2) = 4;
        break;
    }
}

void func_sc07_000_8017FE20(u8 *arg0) {
    D_sc07_000_801865C4[AF(arg0, u16, 2)]();
}

void func_sc07_000_8017FE5C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_80132EF4(arg0, 0x77);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2C) = 1;
        AF(temp_v0, s32, 0x34) = arg0;
    }
}

void func_sc07_000_8017FE9C(u8 *o) {
    SV8 v;
    s32 p;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    p = func_801290DC(0x77, &v);
    if (p != 0) {
        AF(p, s16, 0x2C) = 2;
    }
}

void func_sc07_000_8017FEEC(u8 *o) {
    s32 p;
    s32 t;
    s32 n;

    p = func_8012C1B8();
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(p);
    n = AF(o, s16, 0x70) * 8;
    AF(o, u16, 0xFE) = *(u16 *)((u8 *)D_sc07_000_801865D8 + n) & 0xFF00;
    n = AF(o, s16, 0x70) * 8;
    t = *(u16 *)((u8 *)D_sc07_000_801865D8 + n);
    AF(o, u16, 0x5C) = 0x8C00;
    AF(o, u16, 6) = 0;
    t &= 7;
    AF(o, u16, 0x102) = t;
    AF(o, s32, 0x58) = (s32)(D_sc07_000_801866C8 + t * 16) | 0x40000000;
    n = AF(o, s16, 0x70) * 8;
    AF(o, u16, 0xA) = *(u16 *)((u8 *)D_sc07_000_801865D8 + n + 2);
    n = AF(o, s16, 0x70) * 8;
    AF(o, u16, 0xE) = *(u16 *)((u8 *)D_sc07_000_801865D8 + n + 4);
    n = AF(o, s16, 0x70) * 8;
    AF(AF(o, u8 *, 0x20), u16, 0x10) = *(u16 *)((u8 *)D_sc07_000_801865D8 + n + 6) & 0xFF0;
    AF(o, u16, 0x104) = 0;
    AF(o, s32, 0x1C) = D_sc07_000_80186728[AF(o, s16, 0x70)];
    func_8012AD50(o);
}

void func_sc07_000_8018000C(s32 arg0) {
    func_8012AD44(arg0, 2);
    func_8013C9C4((s32) &D_sc07_000_80182DD8);
    AF(arg0, u16, 0x106) = D_sc07_000_801867A0[AF(arg0, s16, 0x70)];
    func_8002D4C8(0xB75, 0);
}

void func_sc07_000_8018006C(u8 *o) {
    SV8 v;
    s16 t;
    s32 n;
    u16 x;
    s16 u;

    if (AF(o, s16, 0xE) - 0x80 < AF(AF(o, u8 *, 0x64), s16, 0xE)) {
        func_sc07_000_8017DF94(AF(o, s16, 0x70), &v, 0);
        func_sc07_000_801805C0(o, AF(o, s16, 0x102));
        func_8012C218(o);
        return;
    }
    t = AF(o, s16, 0x100);
    n = AF(o, s16, 0x70);
    x = AF(o, u16, 0xA);
    if (t >= 0x400) {
        if ((s16) x < -0x1FF) {
            AF(o, u16, 0xA) = x + 8;
        } else {
            func_sc07_000_8017DF94(n, &v, 0);
            func_8012C218(o);
            return;
        }
    } else {
        AF(o, s16, 0x100) = t + 0x10;
        AF(o, u16, 0xA) += rsin((s16) (t + 0x10)) >> 9;
    }
    u = AF(o, s16, 0x106);
    if (u != 0) {
        u--;
        AF(o, s16, 0x106) = u;
        if ((u & 3) == 0) {
            func_sc07_000_80180200(o);
        }
    }
    func_sc07_000_801802E4(o);
    v.z = 0;
    v.x = 0;
    v.y = AF(o, u16, 0xA) - D_sc07_000_801865D8[AF(o, s16, 0x70)].y;
    func_sc07_000_8017DF94(AF(o, s16, 0x70), &v, 1);
    if (AF(o, u8, 0x74) != 0) {
        func_8012E014(o);
    }
}

void func_sc07_000_801801C4(u8 *arg0) {
    D_sc07_000_801867DC[AF(arg0, u16, 2)]();
}

extern u16 D_sc07_000_80186764[];
extern void func_sc07_000_801803F0(s32 arg0, s32 arg1);
void func_sc07_000_80180200(u8 *o) {
    SV8 v;
    s32 i;
    s32 y;

    y = AF(o, u16, 0xA) + D_sc07_000_80186764[AF(o, s16, 0x70)];
    for (i = 0; i < 3; i++, y += 0x20) {
        v.x = AF(o, u16, 6) - 0x80 - (rand() & 0x1F);
        v.y = y;
        if (AF(o, s16, 0x102) == 1) {
            v.z = AF(o, u16, 0xE) + 0x80;
        } else {
            v.z = AF(o, u16, 0xE) + 0xC0;
        }
        func_sc07_000_801803F0((s32)o, (s32)&v);
        v.x = AF(o, u16, 6) + 0x80 + (rand() & 0x1F);
        func_sc07_000_801803F0((s32)o, (s32)&v);
    }
}

void func_sc07_000_801802E4(u8 *o) {
    SV8 v;
    s32 r;

    r = rand() & 0x1F;
    v.x = AF(o, u16, 6) - 0x100 - r;
    v.y = D_80126B62 + 0xB0;
    if (v.y < AF(o, s16, 0xA)) {
        v.y = AF(o, s16, 0xA);
    }
    if (AF(o, s16, 0x102) == 1) {
        v.z = AF(o, u16, 0xE) + rand() % 192 - 0x60;
    } else {
        v.z = AF(o, u16, 0xE) + rand() % 320 - 0xA0;
    }
    func_sc07_000_801803F0((s32)o, (s32)&v);
}

void func_sc07_000_801803F0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_801290DC(0x22, arg1);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x34) = 0x4000;
        AF(temp_v0, s32, 0x14) = (s32) -(((rand() & 0x3FF0) | 0x8000) * 0x10);
    }
}

void func_sc07_000_80180440(u8 *o) {
    s32 i;

    for (i = 0; i < 0x1E; i++) {
        func_8012C658(0x3A5, i, o);
    }
}

extern void func_8012B23C();
extern s32 *D_sc07_000_80186800[];
extern s32 *D_sc07_000_80186810[];
void func_sc07_000_80180490(u8 *o) {
    s32 p;
    s32 *b;

    p = func_8012C1B8();
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u16, 0xFE) = (AF(o, u16, 0x70) >> 8) & 7;
    AF(o, u16, 0x70) &= 0xF;
    b = D_sc07_000_80186810[AF(o, s16, 0xFE)];
    b[AF(o, u16, 0x70) * 2] = D_sc07_000_80186800[AF(o, s16, 0xFE)][AF(o, u16, 0x70)];
    b[AF(o, s16, 0x70) * 2 + 1] = 0;
    func_8001C214(AF(o, s32, 0x20), &b[AF(o, s16, 0x70) * 2]);
    AF(o, u16, 0x106) = rand() & 0xF0;
    AF(o, u16, 0x108) = rand() & 0xF0;
    func_8012B23C(o);
    AF(o, s32, 0x1C) = 0x20;
    func_8012AD50(o);
}

void func_sc07_000_80180584(u8 *arg0) {
    D_sc07_000_80186840[AF(arg0, u16, 2)]();
}

void func_sc07_000_801805C0(u8 *o, s32 n) {
    s32 k;
    u8 *q;
    s32 i;
    u8 *p;

    k = D_sc07_000_801867E8[n];
    q = D_sc07_000_80186830[k];
    for (i = 0; i < D_sc07_000_80186820[k]; i++) {
        p = (u8 *)func_8012C658(0x3C4, (k << 8) + i, o);
        if (p != 0) {
            func_sc07_000_8018091C(p, q + i * 0xC);
            AF(p, u16, 0xA) += AF(o, u16, 0xA) - D_sc07_000_80186848[k];
            AF(p, u16, 0xE) += AF(o, u16, 0xE) - D_sc07_000_80186850[k];
            func_sc07_000_80180704(p);
            func_sc07_000_80180790(p);
        }
    }
    func_8002D4C8(0xC02, 0);
}

s32 func_sc07_000_80180704(s32 arg0, s32 arg1) {
    s32 temp_v0;

    AF(arg0, s32, 0x10) = (s32) ((AF(arg0, s16, 6) - AF(AF(arg0, void *, 0x64), s16, 6)) << 0xB);
    AF(arg0, s32, 0x14) = (s32) (((AF(arg0, s16, 0xA) - AF(AF(arg0, void *, 0x64), s16, 0xA)) << 0xA) + 0xFFE00000);
    temp_v0 = rand(arg0, arg1) & 0xFF;
    AF(arg0, s32, 0x18) = (s32) ((((AF(arg0, s16, 0xE) - AF(AF(arg0, void *, 0x64), s16, 0xE)) + temp_v0) - 0x80) << 0xC);
    return temp_v0;
}

void func_sc07_000_80180790(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_80132EF4(arg0, 0x22);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x34) = 0x7002;
        AF(AF(temp_v0, void *, 0x20), u16, 0x2C) = 0xC020;
        AF(temp_v0, s32, 0x10) = (s32) (((s32) AF(arg0, s32, 0x10) >> 2) * 3);
        AF(temp_v0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 2);
        AF(temp_v0, s32, 0x18) = (s32) (((s32) AF(arg0, s32, 0x18) >> 2) * 3);
    }
}

void func_sc07_000_80180818(u8 *arg0) {
    D_sc07_000_80186858[AF(arg0, u16, 2)]();
}

s32 func_sc07_000_80180854(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s2;

    var_s1 = 0;
    var_s2 = 0;
    do {
        temp_v0_2 = func_8012C658(0x3A3, var_s1, 0);
        if (temp_v0_2 != 0) {
            func_sc07_000_8018091C(temp_v0_2, (s32) (var_s2 + &D_sc07_000_801ADEA0));
            func_sc07_000_8018096C(temp_v0_2);
            temp_v0_3 = func_80132EF4(temp_v0_2, 0x22);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, s32, 0x34) = 0x7002;
                AF(temp_v0_3, s32, 0x10) = (s32) ((s32) AF(temp_v0_2, s32, 0x10) >> 2);
                AF(temp_v0_3, s32, 0x14) = (s32) ((s32) AF(temp_v0_2, s32, 0x14) >> 2);
                AF(temp_v0_3, s32, 0x18) = (s32) ((s32) AF(temp_v0_2, s32, 0x18) >> 2);
            }
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0xE;
        var_s2 += 0xC;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc07_000_8018091C(s32 arg0, s32 arg1) {
    AF(arg0, u16, 6) = (u16) AF(arg1, u16, 0);
    AF(arg0, u16, 0xA) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 0xE) = (u16) AF(arg1, u16, 4);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg1, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg1, u16, 8);
    AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(arg1, u16, 0xA);
}

s32 func_sc07_000_8018096C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    AF(arg0, s32, 0x10) = (s32) (AF(arg0, s16, 6) << 0xD);
    temp_v0 = (AF(arg0, s16, 0xE) - 0x180) * 0x6000;
    AF(arg0, s32, 0x14) = (s32) ((AF(arg0, s16, 0xA) + 0x400) << 0xD);
    AF(arg0, s32, 0x18) = temp_v0;
    return temp_v0;
}

void func_sc07_000_801809A4(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_000_801B9C88);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    func_sc07_000_8017F888((s32) arg0, (s32) &D_sc07_000_80186550);
    func_80143970((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc07_000_801BCCAC);
    func_sc07_000_8017F4F8(0);
    func_sc07_000_8017EE40((s32) arg0);
}

void func_sc07_000_80180A3C(s32 arg0) {
    s32 temp_v0;

    func_8012AD80(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (!(temp_v0 & 7)) {
        func_sc07_000_8017F3FC(arg0);
    }
    if (AF(arg0, s16, 0xE) >= 0x361) {
        func_sc07_000_8017EE8C(arg0);
    }
}

void func_sc07_000_80180AA4(u8 *arg0) {
    s16 temp_v0;
    void *temp_a1;
    void *temp_v1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, s16, 0x12);
    if (temp_v0 != 0) {
        AF(temp_a1, s16, 0x12) = (s16) (temp_v0 - 0x100);
        temp_v1 = AF(arg0, void *, 0x20);
        if (AF(temp_v1, s16, 0x12) < 0) {
            AF(temp_v1, s16, 0x12) = 0;
        }
        if (AF(AF(arg0, void *, 0x20), s16, 0x12) == 0) {
            D_sc07_000_801D0B7C = 1;
        }
    } else if (D_sc07_000_801D0B7C == 2) {
        func_sc07_000_8017EEC0((s32) arg0);
    }
}

void func_sc07_000_80180B3C(s32 arg0) {
    if (D_sc07_000_801D0B7C == 4) {
        func_sc07_000_8017F098();
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8012B8A4(arg0);
    func_sc07_000_8017F464(arg0);
}

void func_sc07_000_80180B90(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(AF(o, u8 *, 0x20), s16, 0x12) != 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x100;
            if (AF(AF(o, u8 *, 0x20), s16, 0x12) < 0) {
                AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
            }
            if (AF(AF(o, u8 *, 0x20), s16, 0x12) != 0) {
                break;
            }
        }
        AF(o, u16, 0x34)++;
        break;
    case 1:
        func_80142414(o, -0xA0);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        break;
    }
    if (D_sc07_000_801D0B7C == 6) {
        func_sc07_000_8017F0D0((s32)o);
    }
}

void func_sc07_000_80180C68(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_000_801C0DEC);
    SetScript((s32) arg0, (s32) &D_sc07_000_801CC230);
    func_sc07_000_8017F888((s32) arg0, (s32) &D_sc07_000_80186584);
    func_80029124(0x135, 0);
    func_8012AD50((s32) arg0);
}

extern u8 func_80029178();
extern u8 D_sc07_000_801CC8D8;
void func_sc07_000_80180CEC(u8 *o) {
    AF(AF(o, void *, 0x20), s16, 0x12) = func_8012B8A4((s32) o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_80029178(0x135)) {
            SetScript((s32) o, (s32) &D_sc07_000_801CC8D8);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0) {
            AF(o, s16, 0x98) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        break;
    }
    if (D_sc07_000_801D0B7C == 4) {
        func_sc07_000_8017F554((s32) o);
    }
    func_sc07_000_8017F8B8((s32) o);
}

void func_sc07_000_80180DB4(u8 *o) {
    u8 *p;
    u8 *q;
    s16 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        q = AF(o, u8 *, 0x20);
        v = AF(q, s16, 0x12);
        if (v != 0) {
            AF(q, s16, 0x12) = v - 0x100;
            p = AF(o, u8 *, 0x20);
            if (AF(p, s16, 0x12) < 0) {
                AF(p, s16, 0x12) = 0;
            }
            if (AF(AF(o, u8 *, 0x20), s16, 0x12) != 0) {
                break;
            }
        }
        AF(o, u16, 0x34)++;
        break;
    case 1:
        func_80142414(o, -0x80);
        AF(o, s32, 0x1C) = 0x10;
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (func_8012BEE8(o)) {
            func_sc07_000_8017FE5C((s32)o);
            AF(o, u16, 0x34)++;
        }
        break;
    }
    if (D_sc07_000_801D0B7C == 5) {
        func_sc07_000_8017F59C(o);
    }
}

extern void func_sc07_000_8017FB38();
void func_sc07_000_80180ED0(u8 *o) {
    XY *p;
    s32 i;

    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        p = (XY *)D_sc07_000_801D0630;
        for (i = 0; i < 12; i += 2) {
            p[i].x += D_sc07_000_801D0660[i >> 1].x;
            p[i].y += D_sc07_000_801D0660[i >> 1].y;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x18) += 0x200;
        AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x200;
    } else {
        AF(o, s32, 0x1C) = 4;
        AF(o, u16, 2)++;
    }
    func_sc07_000_8017FB38(o);
}

void func_sc07_000_80180FA8(u8 *o) {
    u8 *e;
    u8 *s;

    if (--AF(o, s32, 0x1C) == 0) {
        func_801292C8();
    }
    e = &D_sc07_000_801D0620;
    s = &D_sc07_000_801865A8;
    e[0] -= s[0] >> 2;
    e[1] -= s[1] >> 2;
    e[2] -= s[2] >> 2;
    AF(AF(o, u8 *, 0x20), u16, 0x18) += 0x200;
    AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x200;
    func_sc07_000_8017FB38(o);
}

void func_sc07_000_8018107C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_v1_2;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a2, s16, 0x18);
    temp_a0 = (AF(arg0, s16, 0x2C) << 6) + &D_sc07_000_801D0678;
    if (temp_v1 < 0xC00) {
        AF(temp_a2, s16, 0x18) = (s16) (temp_v1 + 0x180);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x200);
        AF(temp_a0, u8, 0) = (u8) (AF(temp_a0, u8, 0) + ((u8) D_sc07_000_801865B8 >> 3));
        AF(temp_a0, u8, 1) = (u8) (AF(temp_a0, u8, 1) + ((u8) D_sc07_000_801865B9 >> 3));
        AF(temp_a0, u8, 2) = (u8) (AF(temp_a0, u8, 2) + ((u8) D_sc07_000_801865BA >> 3));
    } else {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v0 = AF(arg0, s16, 0x2E);
    if (temp_v0 != 0) {
        temp_v0_2 = AF(arg0, s32, 0x1C);
        if (temp_v0_2 != 0) {
            AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 - 1);
            return;
        }
        AF(arg0, s16, 0x2E) = (s16) (temp_v0 - 1);
        func_sc07_000_8017FE9C((s32) arg0);
    }
}

void func_sc07_000_80181174(u8 *arg0) {
    s16 temp_a0;
    void *temp_a2;
    void *temp_a3;
    void *temp_v1;

    temp_a3 = AF(arg0, void *, 0x20);
    temp_a0 = AF(temp_a3, s16, 0x18);
    temp_a2 = (AF(arg0, s16, 0x2C) << 6) + &D_sc07_000_801D0678;
    if (temp_a0 != 0) {
        AF(temp_a3, s16, 0x18) = (s16) (temp_a0 - 0x180);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) - 0x200);
        AF(temp_a2, u8, 0) = (u8) (AF(temp_a2, u8, 0) - ((u8) D_sc07_000_801865B8 >> 3));
        AF(temp_a2, u8, 1) = (u8) (AF(temp_a2, u8, 1) - ((u8) D_sc07_000_801865B9 >> 3));
        AF(temp_a2, u8, 2) = (u8) (AF(temp_a2, u8, 2) - ((u8) D_sc07_000_801865BA >> 3));
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc07_000_80181228(u8 *arg0) {
    s32 p34;
    s16 temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_v1_2;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a1, s16, 0x18);
    temp_a0 = (AF(arg0, s16, 0x2C) << 6) + &D_sc07_000_801D0678;
    if (temp_v1 < 0x1000) {
        AF(temp_a1, s16, 0x18) = (s16) (temp_v1 + 0x200);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x300);
        AF(temp_a0, u8, 0) = (u8) (AF(temp_a0, u8, 0) + ((u8) D_sc07_000_801865BC >> 3));
        AF(temp_a0, u8, 1) = (u8) (AF(temp_a0, u8, 1) + ((u8) D_sc07_000_801865BD >> 3));
        AF(temp_a0, u8, 2) = (u8) (AF(temp_a0, u8, 2) + ((u8) D_sc07_000_801865BE >> 3));
    }
    p34 = AF(arg0, s32, 0x34);
    if (p34 != 0) {
        func_80129350((s32) arg0, p34);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x20);
    }
}

void func_sc07_000_80181304(u8 *arg0) {
    s16 temp_v1;
    void *temp_a0;
    void *temp_a2;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a2, s16, 0x18);
    temp_a0 = (AF(arg0, s16, 0x2C) << 6) + &D_sc07_000_801D0678;
    if (temp_v1 < 0x1400) {
        AF(temp_a2, s16, 0x18) = (s16) (temp_v1 + 0x280);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x3C0);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1E) = (u16) (AF(temp_v1_3, u16, 0x1E) + 0x100);
        AF(temp_a0, u8, 4) = (u8) (AF(temp_a0, u8, 4) - ((u8) D_sc07_000_801865C0 >> 3));
        AF(temp_a0, u8, 5) = (u8) (AF(temp_a0, u8, 5) - ((u8) D_sc07_000_801865C1 >> 3));
        AF(temp_a0, u8, 6) = (u8) (AF(temp_a0, u8, 6) - ((u8) D_sc07_000_801865C2 >> 3));
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc07_000_801813D4(u8 *o) {
    switch (AF(o, s16, 0xFE)) {
    case 0:
        if (AF(o, s16, 0x104) != 0) {
            if (func_8012BEE8(o) != 0) {
                func_sc07_000_8018000C((s32)o);
            }
        } else if (AF(o, u8, 0x74) != 0 || (s16)(D_80126B66 - AF(o, u16, 0xE)) > 0xC0) {
            AF(o, u16, 0x104) = 1;
        }
        break;
    case 0x100:
        if (D_sc07_000_801D0BB8 & 2) {
            if (func_8012BEE8(o) != 0) {
                func_sc07_000_8018000C((s32)o);
            }
        }
        break;
    }
    if (AF(o, u8, 0x74) != 0) {
        func_8012E014(o);
    }
}

void func_sc07_000_801814B0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        func_8012C218(arg0);
        return;
    }
    func_8012AD80(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x14) = (u16) (AF(temp_a0_2, u16, 0x14) + AF(arg0, u16, 0x108));
}

extern s32 D_sc07_000_801ADE64[];
extern s32 D_sc07_000_801D0900[][2];
void func_sc07_000_80181528(u8 *o) {
    s32 r;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4((s32) o);
        return;
    }
    D_sc07_000_801D0900[AF(o, s16, 0x70)][0] = D_sc07_000_801ADE64[AF(o, s16, 0x70)];
    D_sc07_000_801D0900[AF(o, s16, 0x70)][1] = 0;
    func_8001C214(AF(o, s32, 0x20), (s32) D_sc07_000_801D0900[AF(o, s16, 0x70)]);
    AF(o, s16, 0x106) = rand() & 0xF0;
    AF(o, s16, 0x108) = rand() & 0xF0;
    func_8012B23C((s32) o);
    AF(o, s32, 0x1C) = 0x20;
    func_8012AD50((s32) o);
}

void func_sc07_000_801815F8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        func_8012C218(arg0);
        return;
    }
    func_8012AD80(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x14) = (u16) (AF(temp_a0_2, u16, 0x14) + AF(arg0, u16, 0x108));
}

void func_sc07_000_80181670(u8 *arg0) {
    D_sc07_000_80186860[AF(arg0, u16, 2)]();
}

void func_sc07_000_801816AC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

extern u8 *D_801151D4;
extern s16 D_800B9AB8;
extern u16 D_800B9ABA;
extern s32 func_8012A758();
void func_sc07_000_801816D8(void) {
    u8 *p;
    XY v;

    p = D_801151D4;
    v.y = (AF(p, s32, 0x4C) + 0x800) * 120 / 1024;
    if (v.y < 0) {
        v.y = 0;
    }
    v.x = (s16) func_8012A758() * 320 / 4096;
    v.x -= AF(p, s32, 0x50) >> 4;
    D_800B9AB8 = v.x;
    D_800B9ABA = v.y;
}

void func_sc07_000_80181790(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc07_000_801D0A84;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc07_000_801817B4(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc07_000_80181854(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc07_000_80181970(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc07_000_80181854(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc07_000_801D0A7C = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc07_000_801D0A80 = (s16) arg1;
    D_sc07_000_801D0A82 = (s16) arg2;
    D_sc07_000_801D0A7E = temp_v0;
    return (s32) temp_v0;
}

void func_sc07_000_80181884(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc07_000_801D0A7C = sp10[0];
    D_sc07_000_801D0A7E = sp10[1];
}

void func_sc07_000_801818FC(s32 arg0) {
    s16 *p = &D_sc07_000_801D0A82;
    *p += arg0;
}

void func_sc07_000_80181918(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc07_000_80181A44();
    if (temp_v0 >= 0) {
        func_sc07_000_80181970(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc07_000_80181970(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc07_000_801D0A84 + arg0 * 14);
    e->a = arg1[0];
    e->c0 = *(struct C8E8 *)arg2;
    e->c0.cd = 0;
    e->c1 = *(struct C8E8 *)arg3;
    e->c1.cd = 0;
    e->y = arg1[1] + (rand() & 0x3F) - 0x20;
    e->z = (arg1[2] * ((rand() & 0x7F0) + 0xC00)) >> 12;
    if (arg1[3] != 0) {
        e->c0.cd = 1;
        e->c1.cd = e->z;
        e->z = 0;
    }
}

s32 func_sc07_000_80181A44(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc07_000_801D0A84)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc07_000_80181A80(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc07_000_801D0A84, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc07_000_80181ACC(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc07_000_801D0A84, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc07_000_80181BA8(i);
            switch (AF(p, u8, 9)) {
            case 1:
                v = AF(p, s16, 4);
                if (v < AF(p, u8, 13)) {
                    AF(p, s16, 4) = v + 8;
                } else {
                    AF(p, u8, 9) = 0;
                }
                break;
            case 2:
                w = AF(p, s16, 4);
                if (w == 0 || (w -= 0x10, AF(p, s16, 4) = w, w <= 0)) {
                    AF(p, u16, 0) = 0;
                }
                break;
            }
        }
    }
}

void func_sc07_000_80181BA8(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = D_800AE620;
    p = g_PrimNext;
    g_PrimNext = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc07_000_801D0A84 + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc07_000_801D0A7C;
    cy = D_sc07_000_801D0A7E;
    RotMatrixZ(D_sc07_000_801D0A82, &m);
    s.x = s.y = s.z = D_sc07_000_801D0A80;
    ScaleMatrix(&m, &s);
    v.x = AF(r, u16, 0);
    v.y = v.z = 0;
    AF(p, u16, 8) = cx;
    AF(p, u16, 0xA) = cy;
    RotMatrixZ(AF(r, s16, 2) - (AF(r, s16, 4) >> 1), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cy + o.y;
    RotMatrixZ(AF(r, s16, 4), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x18) = cx + o.x;
    AF(p, u16, 0x1A) = cy + o.y;
    ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

s32 func_sc07_000_80181E6C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc07_000_801D097C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc07_000_80181E90(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc07_000_80181EB8((s32) &sp10);
}

s32 func_sc07_000_80181EB8(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc07_000_801CE7A8;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc07_000_80181F40((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc07_000_80181F40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc07_000_80181FAC(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc07_000_801820E0(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc07_000_80181FAC(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc07_000_801D0970.a = p[0];
        D_sc07_000_801D0970.b = p[1];
    } else {
        D_sc07_000_801D0970.a = 0;
        D_sc07_000_801D0970.b = 0;
    }
    D_sc07_000_801D0978 = c[0];
    D_sc07_000_801D0979 = c[1];
    D_sc07_000_801D097A = c[2];
    AF(&D_sc07_000_801D0970, s32, 4) = g << 16;
}

void func_sc07_000_8018201C(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc07_000_801D0970.a = sp10[0];
    D_sc07_000_801D0970.b = sp10[1];
}

void func_sc07_000_80182094(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc07_000_801821FC();
    if (temp_v0 >= 0) {
        func_sc07_000_801820E0(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc07_000_801820E0(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc07_000_801D0970.pts[i];
    s = spd;
    s += rand() % (s >> 2) - (s >> 3);
    m = s;
    p->ang = ang + (rand() & 0x3F) - 0x20;
    vx = (rcos(p->ang) * m) >> 12;
    vz = (rsin(p->ang) * m) >> 12;
    p->x = vx << 16;
    p->z = vz << 16;
    p->active = (rand() & 0xF) + 0x10;
    p->y = m << 6;
    gg = D_sc07_000_801D0970.g;
    p->dy = gg << 6;
}

s32 func_sc07_000_801821FC(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc07_000_801D097C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc07_000_80182238(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc07_000_801D0976;
    p = (Pt16 *)&D_sc07_000_801D097C;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc07_000_8018234C(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc07_000_8018234C(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    Pt16 *r;
    u16 cx;
    u16 cz;

    p = g_PrimNext;
    m = D_800AE620;
    g_PrimNext = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc07_000_801D0978;
    AF(p, u8, 5) = D_sc07_000_801D0979;
    AF(p, u8, 6) = D_sc07_000_801D097A;
    r = (Pt16 *)&D_sc07_000_801D097C + i;
    cx = AF(r, u16, 0xA) + D_sc07_000_801D0970.a;
    cz = AF(r, u16, 0xE) + D_sc07_000_801D0970.b;
    RotMatrixZ(r->ang, &m);
    s.x = r->y;
    s.y = r->y;
    s.z = r->y;
    ScaleMatrix(&m, &s);
    v.x = r->active;
    v.y = v.z = 0;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 8) = cx + (o.x >> 1) * 3;
    AF(p, u16, 0xA) = cz + (o.y >> 1) * 3;
    AF(p, u16, 0xC) = cx - (o.x >> 1);
    AF(p, u16, 0xE) = cz - (o.y >> 1);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cz + o.y;
    if (r->active & 1) {
        RotMatrixZ(0x400, &m);
    } else {
        RotMatrixZ(-0x400, &m);
    }
    v.x = 2;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) += o.x;
    AF(p, u16, 0x12) += o.y;
    ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}
