#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_074_80182138[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_074_8017D3FC(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_074_80182140[])();
extern void func_800D1EBC();
extern void (*D_sc01_074_8018214C[])();
extern void (*D_sc01_074_80182158[])();
void func_sc01_074_8017D6D4(void);
extern void (*D_sc01_074_80182160[])();
void func_sc01_074_8017D964(void);
extern u8 D_sc01_074_80182194;
extern void func_8016EE40();
extern u8 D_sc01_074_801821A0;
extern u8 D_sc01_074_801821B4;
extern void (*D_sc01_074_801821E8[])();
extern u8 D_sc01_074_801821D0;
extern void (*D_sc01_074_80182210[])();
extern u8 D_sc01_074_80182208;
extern void func_sc01_074_8017DD1C();
extern void (*D_sc01_074_8018222C[])();
extern void (*D_sc01_074_8018223C[])();
extern void (*D_sc01_074_80182254[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void (*D_sc01_074_801821BC[])();
extern void func_sc01_074_8017D2F8();
extern void func_8014708C();
extern void func_801472C8();
extern void func_sc01_074_8017D98C();
extern void func_80171990();
extern void func_sc01_074_8017DB04();
extern void func_8012AD50();

extern void func_80171928();
extern u8 D_sc01_074_80182050;
extern void func_800D1724();

extern u8 D_sc01_074_80182168;
extern void func_80154274();
extern void func_80146DE8();
extern void func_80147324();
extern u8 D_sc01_074_8018202C;
extern void func_80147AD4();
extern void func_801473EC();
extern void func_sc01_074_8017D364();
extern u8 D_sc01_074_80182200[];
extern s32 func_sc01_074_8017D918();
extern u8 D_sc01_074_801821D8;
extern s32 func_8012E544();
extern s32 func_80015954();
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
extern u8 D_sc01_074_80195D14;
extern s32 func_8012C1B8();
extern void func_8001C214();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc01_074_8017BE9C(u8 *obj) {
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

void func_sc01_074_8017CD7C(u8 *arg0) {
    D_sc01_074_80182138[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CDB8(u8 *arg0) {
    func_sc01_074_8017D3FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_074_8017CDFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_074_8017CE20(u8 *arg0) {
    D_sc01_074_80182140[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CE5C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_074_8017CE78(u8 *arg0) {
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

void func_sc01_074_8017CEF4(void) {
    func_800D1EBC();
}

void func_sc01_074_8017CF14(u8 *arg0) {
    D_sc01_074_8018214C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CF50(u8 *arg0) {
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
extern void func_sc01_074_8017DE88();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 D_sc01_074_80182244;
extern s32 D_sc01_074_80182248;
extern s32 D_sc01_074_8018224C;
extern s32 D_sc01_074_80182250;
extern void func_80016ED4();
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;

extern s16 D_sc01_074_801821DA;
extern s16 D_sc01_074_801821DC;
extern s16 D_sc01_074_801821E0;
extern s16 D_sc01_074_801821E2;
extern s16 D_sc01_074_801821E4;
extern s32 func_8012EF70();
void func_sc01_074_8017E3E0(SV4 *a, SV4 *b, SV4 *c, SV4 *d);

extern void func_800139C8();
extern void func_80013E94();
extern u16 D_800B99DA;
extern void func_80146A6C();
extern u8 D_sc01_074_801821C8;

extern u8 D_80078EAE;
extern s32 func_80029504();
extern u8 D_sc01_074_801820A8;
extern u8 D_sc01_074_801820CC;
extern u8 D_sc01_074_801820F0;
extern u8 D_sc01_074_80182114;
extern SV8 D_80126940;
extern SV8 D_801274E8;

u8 *func_sc01_074_8017CFC4(void) {
    s32 v = func_80029504();
    if (v >= 0x384) {
        return &D_sc01_074_80182114;
    }
    if (v >= 0x258) {
        return &D_sc01_074_801820F0;
    }
    if (v >= 0xC8) {
        return &D_sc01_074_801820CC;
    }
    return &D_sc01_074_801820A8;
}

void func_sc01_074_8017D034(u8 *arg0) {
    D_sc01_074_80182158[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017D070(u8 *arg0) {
    func_sc01_074_8017D6D4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_074_8017D0B4(u8 *arg0) {
    D_sc01_074_80182160[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017D0F0(u8 *arg0) {
    func_sc01_074_8017D964();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_074_8017D134(void) {
    func_8016EE40((s32) &D_sc01_074_80182194, 0x01000000);
}

void func_sc01_074_8017D15C(void) {
    func_8016EE40((s32) &D_sc01_074_801821A0, 0x01000000);
}

void func_sc01_074_8017D184(u8 *arg0) {
    D_sc01_074_801821BC[AF(arg0, u8, 0x216)]();
    func_sc01_074_8017D2F8((s32) arg0, (s32) AF(arg0, s16, 0x20C));
}

void func_sc01_074_8017D1D8(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc01_074_80182168);
    func_80146DE8(arg0, 0, 0x20000, 0);
    AF(arg0, s32, 0x200) = 0x40;
    AF(arg0, s16, 0x20C) = 1;
    func_80147324(0xBCA);
    func_80171990(arg0);
}

void func_sc01_074_8017D244(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, -0x8000);
    func_801473EC(arg0);
    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_074_8018202C);
        func_80171990(arg0);
    }
    func_sc01_074_8017D364(arg0);
}

void func_sc01_074_8017D2B4(s32 arg0) {
    func_80147AD4(arg0, 0, 0, -0x8000);
    func_801473EC(arg0);
    func_sc01_074_8017D364(arg0);
}

void func_sc01_074_8017D2F8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x195);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 4) = (s32) AF(arg0, s32, 4);
        AF(temp_v0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFC00000);
        AF(temp_v0, s32, 0xC) = (s32) AF(arg0, s32, 0xC);
        AF(temp_v0, s16, 0xFC) = (s16) arg1;
    }
}

void func_sc01_074_8017D364(u8 *o) {
    SV8 v;
    u32 c;
    func_800139C8(AF(AF(o, u8 *, 0x20), s16, 0x12), &D_sc01_074_801821C8, &v);
    func_80013E94(&v, &c);
    c |= 0x80000000;
    if (!(D_800B99DA & 3)) {
        func_80146A6C(6, o, AF(o, s16, 6), (s16)(AF(o, u16, 0xA) - 0x40), AF(o, s16, 0xE), c, 0);
    }
}

void func_sc01_074_8017D3FC(void) {
    func_8016EE40((s32) &D_sc01_074_801821B4, 0x01000000);
}

void func_sc01_074_8017D424(u8 *arg0) {
    D_sc01_074_801821E8[AF(arg0, u8, 0x216)]();
}

void func_sc01_074_8017D460(s32 arg0) {
    EndScene(arg0);
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, s32, 0x200) = 0x316;
    AF(arg0, s32, 0x204) = 0;
    AF(arg0, s16, 0x20C) = 1;
    func_sc01_074_8017D98C(arg0, 1, AF(arg0, s32, 0x200), 0);
    AF(arg0, s16, 0x20E) = 0x1E;
    func_80171990(arg0);
}

void func_sc01_074_8017D4D0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) - 1;
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_8002D4C8(0xBE8, 0);
        AF(arg0, u16, 0x20E) = 0U;
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D528(u8 *arg0) {
    u16 temp_v0;
    u8 temp_s1;

    temp_v0 = AF(arg0, u16, 0x20E);
    AF(arg0, u16, 0x20E) = (u16) (temp_v0 + 1);
    temp_s1 = D_sc01_074_80182200[(s16) temp_v0];
    if (temp_s1 == 0) {
        func_8002D4C8(0xBE7, 0);
        func_80171990((s32) arg0);
    }
    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), (s32) temp_s1);
}

void func_sc01_074_8017D5A8(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x204) + 0x4000;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 > 0xA0000) {
        AF(arg0, s32, 0x204) = 0xA0000;
    }
    temp_v0_2 = AF(arg0, s32, 0x200) - AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0_2;
    if (temp_v0_2 < 0x259) {
        func_80171990((s32) arg0, arg1);
    }
    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
}

extern u8 D_sc01_074_80182074;
extern u8 D_sc01_074_80182008;
extern u8 D_sc01_074_80182224;
extern SV8 D_sc01_074_80182234;
extern SV4 D_sc01_074_8019A8B0;
extern SV4 D_sc01_074_8019A8B8;
extern void func_80015978();
void func_sc01_074_8017E158(SV4 *a, SV4 *b);

void func_sc01_074_8017D634(u8 *o) {
    s32 v = func_80029504();

    AF(o, s32, 0x200) -= 10;
    if (AF(o, s32, 0x200) < 0x6F) {
        if (v == 0x488) {
            func_800D1724(&D_sc01_074_80182074);
        } else {
            func_800D1724(&D_sc01_074_80182008);
        }
        func_80171990(o);
    }
    func_sc01_074_8017D98C(o, AF(o, s16, 0x20C), AF(o, s32, 0x200), 0);
    func_sc01_074_8017DB04(o, 0);
}

void func_sc01_074_8017D6CC(void) {
}

void func_sc01_074_8017D6D4(void) {
    func_8016EE40((s32) &D_sc01_074_801821D0, 0x01000000);
}

void func_sc01_074_8017D6FC(u8 *arg0) {
    D_sc01_074_80182210[AF(arg0, u8, 0x216)]();
}

void func_sc01_074_8017D738(s32 arg0) {
    EndScene();
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, s32, 0x200) = 0x190;
    AF(arg0, s16, 0x20C) = 1;
    func_sc01_074_8017D98C(arg0, 1, AF(arg0, s32, 0x200), 0);
    func_80147324(0xC26);
    func_80171990(arg0);
}

void func_sc01_074_8017D7A4(u8 *arg0) {
    s32 temp_v0;

    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
    temp_v0 = AF(arg0, s32, 0x200) + 0xA;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x258) {
        AF(arg0, s32, 0x204) = 0xA0000;
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D80C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
    temp_v1 = AF(arg0, s32, 0x204) - 0x4000;
    AF(arg0, s32, 0x204) = temp_v1;
    if (temp_v1 <= 0xFFFF) {
        AF(arg0, s32, 0x204) = 0x10000;
    }
    temp_v0 = AF(arg0, s32, 0x200) + AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x316) {
        AF(arg0, s32, 0x200) = 0x1E;
        func_sc01_074_8017D918((s32) arg0);
        func_80147324(0xC25);
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D8A8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D8DC(s32 arg0) {
    func_800D1724((s32) &D_sc01_074_80182050);
    func_80171928(arg0);
}

s32 func_sc01_074_8017D918(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8012E544(0x19C);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 0;
    }
    var_v0 = func_8012E544(0x29A);
    if (var_v0 != 0) {
        var_v0 = func_80015954((s32) &D_sc01_074_801821D8, var_v0 + 4);
    }
    return var_v0;
}

void func_sc01_074_8017D964(void) {
    func_8016EE40((s32) &D_sc01_074_80182208, 0x01000000);
}

void func_sc01_074_8017D98C(u8 *o, s32 a1, s32 t, s32 dy) {
    SV8 sv;
    s32 p;

    sv.x = D_sc01_074_801821E0 + (AF(&D_sc01_074_801821D8, s16, 0) - D_sc01_074_801821E0) * t / 800;
    sv.y = D_sc01_074_801821E2 + (D_sc01_074_801821DA - D_sc01_074_801821E2) * t / 800;
    sv.z = D_sc01_074_801821E4 + (D_sc01_074_801821DC - D_sc01_074_801821E4) * t / 800;
    sv.y += dy;
    func_80015954(&sv, o + 4);
    p = func_8012E544(0x195);
    if (p != 0) {
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
        AF(p, s16, 0xFC) = a1;
    }
    p = func_8012E544(0x285);
    if (p != 0) {
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
    }
}

void func_sc01_074_8017DB04(u8 *o, s32 a1) {
    SV8 v;
    u32 c;
    func_800139C8((s16)(AF(AF(o, u8 *, 0x20), u16, 0x12) + a1), &D_sc01_074_80182224, &v);
    func_80013E94(&v, &c);
    c |= 0x80000000;
    if (!(D_800B99DA & 3)) {
        func_80146A6C(6, o, AF(o, s16, 6), AF(o, s16, 0xA), AF(o, s16, 0xE), c, 0);
    }
}

void func_sc01_074_8017DBA0(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x7D0;
    D_80126968 = 0x18E;
    D_8012696A = 0xDE0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x19;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_074_8017DD1C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_074_8017DD1C((s32) &D_80126948);
}

extern s32 D_801269E4;

void func_sc01_074_8017DC3C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_80126968 = 0;
    D_8012696A = -0xE3;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_074_8017DD1C, 1);
    func_8012A094((s32) &D_80126948);
    D_801269E4 = 0x5A;
    func_sc01_074_8017DD1C((s32) &D_80126948);
    D_801274E8 = D_80126940;
    D_801269E4 = 0x5A;
}

void func_sc01_074_8017DD1C(s32 arg0) {
    D_sc01_074_8018222C[AF(arg0, u8, 4)]();
}

void func_sc01_074_8017DD58(u8 *o) {
    s16 t;

    D_80126940 = D_sc01_074_80182234;
    t = AF(o, u16, 0x20) - 5;
    AF(o, s16, 0x20) = t;
    AF(o, s16, 0x18) = t;
    if (t < 0) {
        AF(o, s16, 0x20) = 0;
        AF(o, s16, 0x18) = 0;
    }
    t = AF(o, u16, 0x22) + 6;
    AF(o, s16, 0x22) = t;
    AF(o, s16, 0x1A) = t;
    if (t > 0xFE0) {
        AF(o, s16, 0x22) = 0xFE0;
        AF(o, s16, 0x1A) = 0xFE0;
    }
    func_sc01_074_8017DE88(o, &D_80126940);
}

void func_sc01_074_8017DE0C(u8 *o) {
    if (AF(o, s32, 0x9C) != 0) {
        D_801274E8 = D_80126940;
        AF(o, s32, 0x9C)--;
    }
    func_sc01_074_8017DE88(o, &D_801274E8);
}

void func_sc01_074_8017DE88(u8 *arg0, u8 *arg1) {
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

void func_sc01_074_8017E020(u8 *arg0) {
    D_sc01_074_8018223C[AF(arg0, u16, 2)]();
}

void func_sc01_074_8017E05C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

void func_sc01_074_8017E07C(u8 *o) {
    SV4 a = D_sc01_074_8019A8B0;
    SV4 b = D_sc01_074_8019A8B8;
    SV4 c;

    if (AF(o, s16, 0xFC) == 0) {
        func_sc01_074_8017E158(&a, &b);
        return;
    }
    func_80015978(o + 4, &c);
    if (a.z > c.z) {
        func_sc01_074_8017E158(&a, &b);
    } else {
        func_sc01_074_8017E158(&a, &c);
        func_sc01_074_8017E158(&c, &b);
    }
}

void func_sc01_074_8017E158(SV4 *a, SV4 *b) {
    SV4 cur;
    SV4 nxt;
    SV4 pa;
    SV4 pb;
    SV4 sa;
    SV4 sb;
    SV4 sc;
    SV4 sd;
    s32 more;

    more = 1;
    nxt = *a;
    do {
        cur = nxt;
        nxt.z += 0x40;
        nxt.y = a->y + (b->y - a->y) * (nxt.z - a->z) / (b->z - a->z);
        if (nxt.z >= b->z) {
            nxt.z = b->z;
            more = 0;
        }
        pa = cur;
        pa.y -= 4;
        pb = nxt;
        pb.y -= 4;
        if ((func_8012EF70(&pa, &sa) & ~0x1000) == 0 && (func_8012EF70(&pb, &sb) & ~0x1000) == 0) {
            pa = cur;
            pa.y += 4;
            pb = nxt;
            pb.y += 4;
            if ((func_8012EF70(&pa, &sc) & ~0x1000) == 0 && (func_8012EF70(&pb, &sd) & ~0x1000) == 0) {
                func_sc01_074_8017E3E0(&sa, &sb, &sc, &sd);
            }
        }
    } while (more);
}

void func_sc01_074_8017E3E0(SV4 *a, SV4 *b, SV4 *c, SV4 *d) {
    Q74 q;

    q.p[0] = *a;
    q.p[1] = *b;
    q.p[2] = *c;
    q.p[3] = *d;
    q.col = 0x808080;
    q.code = 0;
    q.flag = 0x50;
    q.c[0] = D_sc01_074_80182244;
    q.c[1] = D_sc01_074_80182248;
    q.c[2] = D_sc01_074_8018224C;
    q.c[3] = D_sc01_074_80182250;
    func_80016ED4(&q);
}

void func_sc01_074_8017E4C8(u8 *arg0) {
    D_sc01_074_80182254[AF(arg0, u16, 2)]();
}

void func_sc01_074_8017E504(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_074_80195D14);
        func_8012AD50((s32) arg0);
    }
}

void func_sc01_074_8017E54C(void) {
}

s32 func_sc01_074_8017E554(s32 a) {
    if (a == 10) {
        return 0x32;
    }
    if (a == 0x488) {
        return 0x89;
    }
    if ((u32)(a - 0x384) < 0x6E) {
        return 0x65;
    }
    if (D_80078EAE == 1) {
        return 0xF;
    }
    return 0x10;
}
