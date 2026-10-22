#include "common.h"
#include "gte.h"
extern void (*D_sc05_008_80186658[])();
extern void (*D_sc05_008_80186664[])();
extern void (*D_sc05_008_80186670[])();
extern void (*D_sc05_008_8018667C[])();
extern void (*D_sc05_008_80186688[])();
extern void (*D_sc05_008_80186694[])();
extern void (*D_sc05_008_801866A0[])();
extern void (*D_sc05_008_801866AC[])();
extern void (*D_sc05_008_80186778[])();
extern void (*D_sc05_008_80186788[])();
extern void (*D_sc05_008_80186798[])();
extern void (*D_sc05_008_801867A8[])();
extern void (*D_sc05_008_801867B8[])();
extern void (*D_sc05_008_801867C8[])();
extern void (*D_sc05_008_801867D8[])();
extern void (*D_sc05_008_801867E4[])();
extern void (*D_sc05_008_801867F0[])();
extern void (*D_sc05_008_801867FC[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_008_8017BE9C(void) {
}

void func_sc05_008_8017BEA4(void) {
}

void func_sc05_008_8017BEAC(void) {
}

void func_sc05_008_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_008_801863F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_008_8017D014(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_008_801863F8[])();
extern void func_800D1EBC();
extern u8 D_sc05_008_80186434;
extern void func_8016EE40();
extern u8 D_sc05_008_80186438;
extern void func_sc05_008_8017D8C4();
extern void (*D_sc05_008_801864DC[])();
extern void (*D_sc05_008_80186524[])();
extern void func_8012AD50();
extern void (*D_sc05_008_8018653C[])();
extern void (*D_sc05_008_8018654C[])();
extern void (*D_sc05_008_801865A4[])();
extern void (*D_sc05_008_80186614[])();
extern void (*D_sc05_008_801866B8[])();
extern void (*D_sc05_008_80186838[])();

extern s32 D_sc05_008_801A12E4;

extern u8 D_sc05_008_80186428;
extern void (*D_sc05_008_8018644C[])();
extern s32 func_80019198();
extern void func_80019064();
extern void func_80171990();
extern void func_800291A0();
extern void func_8016F288();
extern u8 D_sc05_008_801863C4;
extern void func_800D1724();
extern void (*D_sc05_008_80186474[])();
extern void (*D_sc05_008_80186494[])();
extern u16 D_800B99DA;
extern s32 func_80015978();
extern s32 func_8012BEE8();
extern void func_sc05_008_8017EFE4();
extern s32 func_8012E544();
extern void func_8012C098();
extern u8 D_sc05_008_80186578;
extern u8 D_sc05_008_801865AC;
extern void func_8001CC3C();
extern s32 func_sc05_008_8017F20C();
extern s32 func_80015954();
extern u8 D_sc05_008_80199608;
extern s32 func_8012C1B8();
extern void func_sc05_008_8018227C();
extern u8 D_sc05_008_8019C678;
extern s32 func_sc05_008_80182240();
extern void func_sc05_008_8017FF80();
extern u8 D_sc05_008_801963AC;
extern s32 func_8012C588();
extern s32 func_sc05_008_80182334();
extern u8 D_sc05_008_80196E84;
extern u8 D_sc05_008_8019795C;
extern u8 D_sc05_008_80197DEC;
extern u8 D_sc05_008_8019827C;
extern u8 D_sc05_008_80199CD0;
extern s32 func_800291B4();
extern u8 D_sc05_008_80199E18;
extern u8 D_sc05_008_8019A030;
extern u8 D_sc05_008_8019A248;
extern u8 D_sc05_008_8019A390;
extern u8 D_sc05_008_8019A4D8;
extern u8 D_sc05_008_8019B3D0;
extern u8 D_sc05_008_8019BA68;
extern u8 D_sc05_008_8019C798;
extern u8 D_sc05_008_8019C8B8;
extern void func_80128ED8();
extern void func_801292C8();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_sc05_008_801823B8();
extern u16 D_80126980;

extern s32 func_sc05_008_80182478();

extern u8 D_80126B58;
extern s32 D_8012697C;
extern void func_8012AD80();
extern s32 func_801291C0();
extern s32 func_8001D074();
extern void func_8001CF00();
extern s32 func_8001CFDC();
extern void func_8001C2C4();

extern u8 D_80126C01;
extern s32 func_80148800();
extern s32 func_80148818();
extern s32 func_8014880C();
extern s32 func_80012DBC();

extern void *D_801151D4;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc05_008_8017BEBC(u8 *obj) {
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

void func_sc05_008_8017CD9C(u8 *arg0) {
    D_sc05_008_801863F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_008_8017CDD8(u8 *arg0) {
    func_sc05_008_8017D014();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_008_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_008_8017CE40(u8 *arg0) {
    D_sc05_008_801863F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_008_8017CE7C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_008_8017CE98(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(4, 0x70B);
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc05_008_8017CF20(void) {
    func_800D1EBC();
}

void func_sc05_008_8017CF40(void) {
    func_8016EE40((s32) &D_sc05_008_80186434, 0x01000000);
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
extern void func_sc05_008_8017DAB8();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern s32 func_80013328();


INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017CF68);

void func_sc05_008_8017D014(void) {
    func_8016EE40((s32) &D_sc05_008_80186438, 0x01000000);
}

void func_sc05_008_8017D03C(u8 *arg0) {
    D_sc05_008_8018644C[AF(arg0, u8, 0x216)]();
    if (func_80019198() == 0) {
        func_80019064((s32) &D_sc05_008_80186428);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D098);

void func_sc05_008_8017D1E0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171990((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D214);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D2AC);

void func_sc05_008_8017D378(s32 arg0) {
    func_800291A0(0xE1, 0);
    func_8016F288();
    D_sc05_008_801A12E4 = 0;
    func_80171990(arg0);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D3C0);

void func_sc05_008_8017D434(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc05_008_801863C4);
        func_80171990((s32) arg0);
    }
}

void func_sc05_008_8017D484(void) {
}

void func_sc05_008_8017D48C(u8 *arg0) {
    D_sc05_008_80186474[AF(arg0, u8, 0x216)]();
    if (func_80019198() == 0) {
        func_80019064((s32) &D_sc05_008_80186428);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D4E8);

void func_sc05_008_8017D60C(u8 *arg0) {
    D_sc05_008_80186494[AF(arg0, u8, 0x216)]();
    if (func_80019198() == 0) {
        func_80019064((s32) &D_sc05_008_80186428);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D668);

void func_sc05_008_8017D78C(void) {
    func_80171990((s32) &D_80126B58);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D7B4);

void func_sc05_008_8017D8C4(s32 arg0) {
    D_sc05_008_801864DC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D900);

void func_sc05_008_8017DAB8(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DC50);

void func_sc05_008_8017DE68(u8 *arg0) {
    D_sc05_008_80186524[AF(arg0, u16, 2)]();
}

void func_sc05_008_8017DEA4(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DEC4);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DF68);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E230);

void func_sc05_008_8017E318(u8 *arg0) {
    D_sc05_008_8018653C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E354);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E464);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E6A4);

void func_sc05_008_8017E840(void) {
    D_sc05_008_801A12E4 = 0;
}

void func_sc05_008_8017E850(s32 arg0, s32 arg1) {
    s32 o;
    s16 *p;
    s16 *q;
    u8 *g;
    s16 a;
    s16 b;
    s16 n1;
    s16 n2;

    g = &D_80126B58;
    o = AF(arg0, s32, 0x20);
    p = (s16 *)(D_8012697C + (D_80126980 + 8) * 6);
    q = p + 3;
    switch (D_80126C01) {
    case 0x41:
        arg1 = func_80148800(g);
        break;
    case 0x53:
    case 0x73:
        a = AF(arg0, u16, 0xE0);
        b = AF(arg0, u16, 0xE2);
        n1 = func_80148818(g) & 0xFF;
        AF(arg0, u16, 0xE0) = n1;
        n2 = func_8014880C(g);
        AF(arg0, u16, 0xE2) = n2 & 0xFF;
        n2 &= 0xFF;
        arg1 = 0;
        if (a == 0x80 && n1 != a) {
            arg1 = 0x1000;
            if (n1 >= 0x80) {
                arg1 = 0x4000;
            }
        }
        if (b == 0x80 && n2 != b) {
            if (n2 < 0x80) {
                arg1 |= 0x8000;
            } else {
                arg1 |= 0x2000;
            }
        }
        break;
    }
    if (arg1 & 0x8000) {
        D_sc05_008_801A12E4++;
    }
    if (arg1 & 0x2000) {
        D_sc05_008_801A12E4--;
    }
    if (D_sc05_008_801A12E4 < -2) {
        D_sc05_008_801A12E4 = -2;
    }
    if (D_sc05_008_801A12E4 > 2) {
        D_sc05_008_801A12E4 = 2;
    }
    AF(o, s16, 0x14) = func_80012DBC(AF(o, s16, 0x14), (s16)(D_sc05_008_801A12E4 * 455), 4, 1);
    AF(o, s16, 0x10) = ratan2(p[1] - q[1], q[2] - p[2]);
    AF(o, s16, 0x12) = ratan2(q[0] - p[0], q[2] - p[2]);
}

s32 func_sc05_008_8017EAB0(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 var_v0;

    var_v0 = D_800B99DA & 7;
    if (var_v0 == 0) {
        var_v0 = func_80015978(arg0 + 4, (s32) &sp10);
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017EAE4);

void func_sc05_008_8017EB7C(u8 *arg0) {
    D_sc05_008_8018654C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017EBB8);

void func_sc05_008_8017EEAC(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_8012BEE8() != 0) {
        func_8012AD50((s32) arg0);
    } else {
        AF(temp_s1, u16, 0x10) = (u16) (AF(temp_s1, u16, 0x10) + AF(arg0, u16, 0xFC));
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) + AF(arg0, u16, 0xFE));
        if (AF(arg0, s32, 0xDC) != 0) {
            AF(temp_s1, u16, 0x12) = (u16) (AF(temp_s1, u16, 0x12) + AF(arg0, u16, 0xFC));
        }
    }
    func_sc05_008_8017EFE4((s32) arg0);
}

void func_sc05_008_8017EF50(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0xFE));
    AF(arg0, s32, 0x4C) = (s32) (AF(arg0, s32, 0x4C) - 0x800);
    func_sc05_008_8017EFE4((s32) arg0);
    temp_v0 = func_8012E544(0x204);
    if ((temp_v0 != 0) && (AF(arg0, s16, 0xE) < (AF(temp_v0, s16, 0xE) - 0x80))) {
        func_8012C098((s32) arg0);
    }
}

void func_sc05_008_8017EFE4(s32 arg0) {
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;

    temp_s3 = arg0 + 0x88;
    temp_s2 = arg0 + 4;
    temp_s1 = D_8012697C + ((D_80126980 + 8) * 6);
    func_80015954(temp_s3, temp_s2);
    func_8012AD80(arg0);
    func_80015978(temp_s2, temp_s3);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + AF(temp_s1, u16, 0));
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(temp_s1, u16, 2));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + AF(temp_s1, u16, 4));
}

void func_sc05_008_8017F0A8(u8 *arg0) {
    D_sc05_008_801865A4[AF(arg0, u16, 2)]();
}

void func_sc05_008_8017F0E4(u8 *arg0) {
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s1, (s32) &D_sc05_008_80186578, 0x280, 0x1C0);
    AF(temp_s1, u8, 0x27) = 0x59;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x58000000);
    temp_v0 = (AF(arg0, s32, 0x2C) * 8) + &D_sc05_008_801865AC;
    AF(arg0, s32, 0x2C) = (s32) temp_v0;
    AF(temp_s1, u16, 0x12) = (u16) AF(temp_v0, u16, 6);
    func_sc05_008_8017F20C((s32) arg0);
    AF(arg0, s32, 0x30) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F17C);

s32 func_sc05_008_8017F20C(s32 arg0) {
    s32 sp10;

    FaceHelper(AF(arg0, s32, 0x1C), AF(arg0, s32, 0x2C), (s32) &sp10);
    return func_80015954((s32) &sp10, arg0 + 4);
}

void func_sc05_008_8017F24C(u8 *arg0) {
    D_sc05_008_80186614[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F288);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F438);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F554);

void func_sc05_008_8017F63C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017F65C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8017F6A4(u8 *arg0, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(D_801151D4, u16, 0x38)) {
        func_8002D4C8(0x894, 2);
    }
    func_sc05_008_801823B8((s32) arg0, 0, -2);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
        func_8002D4C8(0xA76, 0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F724);

void func_sc05_008_8017F80C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017F82C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8017F874(u8 *arg0, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(D_801151D4, u16, 0x38)) {
        func_8002D4C8(0x894, 3);
    }
    func_sc05_008_801823B8((s32) arg0, 0, -1);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
        func_8002D4C8(0xA76, 0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F8F4);

void func_sc05_008_8017F9DC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017F9FC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8017FA44(u8 *arg0, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(D_801151D4, u16, 0x38)) {
        func_8002D4C8(0x894, 4);
    }
    func_sc05_008_801823B8((s32) arg0, 0, 0);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
        func_8002D4C8(0xA76, 0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FAC4);

void func_sc05_008_8017FBAC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017FBCC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8017FC14(u8 *arg0, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(D_801151D4, u16, 0x38)) {
        func_8002D4C8(0x894, 5);
    }
    func_sc05_008_801823B8((s32) arg0, 0, 1);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
        func_8002D4C8(0xA76, 0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FC94);

void func_sc05_008_8017FD7C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017FD9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8017FDE4(u8 *arg0, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(D_801151D4, u16, 0x38)) {
        func_8002D4C8(0x894, 6);
    }
    func_sc05_008_801823B8((s32) arg0, 0, 2);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
        func_8002D4C8(0xA76, 0);
    }
}

void func_sc05_008_8017FE64(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186658[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_8017FF10(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017FF30(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_80182240((s32) arg0, (s32) &D_sc05_008_8019C678);
        func_sc05_008_8017FF80((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FF80);

void func_sc05_008_8018000C(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186664[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_801800B8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_801800D8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_801963AC);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8018012C(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_008_80180164(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186670[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80180210(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180230);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801802EC);

void func_sc05_008_801803B8(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_8018667C[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80180464(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180484(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80196E84);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_801804D8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_008_80180510(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186688[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_801805BC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801805DC);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180698);

void func_sc05_008_80180764(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186694[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80180810(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180830(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019795C);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80180884(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_008_801808BC(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801866A0[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80180968(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180988(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80197DEC);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_801809DC(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_008_80180A14(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801866AC[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80180AC0(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180AE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019827C);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80180B34(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_008_80180B6C(u8 *arg0) {
    D_sc05_008_801866B8[AF(arg0, u16, 2)]();
}

void func_sc05_008_80180BA8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180BD0);

void func_sc05_008_80180CDC(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186778[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80180D88(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180DA8(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_80199CD0);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80180E30(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x890, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180E84);

void func_sc05_008_80180F84(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186788[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181030(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181050(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_80199E18);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_801810D8(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x88F, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018112C);

void func_sc05_008_8018122C(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_80186798[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_801812D8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_801812F8(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A030);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181380(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x890, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801813D4);

void func_sc05_008_801814D4(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867A8[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181580(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_801815A0(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A248);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181628(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x88F, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018167C);

void func_sc05_008_8018177C(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867B8[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181828(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181848(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A390);
        AF(arg0, s16, 0x88) = (s16) (AF(arg0, u16, 6) + 0x20);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_801818D4(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x23) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x891, 0);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181928(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 6) - 0xA;
    AF(arg0, u16, 6) = temp_v0;
    if ((s16) temp_v0 < AF(arg0, s16, 0x88)) {
        temp_v0_2 = AF(arg0, s16, 0xFE);
        if (temp_v0_2 == 0) {
            AF(arg0, s16, 0xFE) = (s16) (temp_v0_2 + 1);
            func_8002D4C8(0x893, 0, arg2);
        }
        AF(arg0, u16, 6) = (u16) AF(arg0, s16, 0x88);
    }
    func_sc05_008_801823B8((s32) arg0, 1, -1);
    func_sc05_008_801823B8((s32) arg0, 1, -2);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

void func_sc05_008_801819D8(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867C8[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181A84(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181AA4(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A4D8);
        AF(arg0, s16, 0x88) = (s16) (AF(arg0, u16, 6) - 0x20);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181B30(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x23) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x891, 0);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181B84(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 6) + 0xA;
    AF(arg0, u16, 6) = temp_v0;
    if (AF(arg0, s16, 0x88) < (s16) temp_v0) {
        temp_v0_2 = AF(arg0, s16, 0xFE);
        if (temp_v0_2 == 0) {
            AF(arg0, s16, 0xFE) = (s16) (temp_v0_2 + 1);
            func_8002D4C8(0x893, 0, arg2);
        }
        AF(arg0, u16, 6) = (u16) AF(arg0, s16, 0x88);
        AF(arg0, u16, 6) = (u16) AF(arg0, s16, 0x88);
    }
    func_sc05_008_801823B8((s32) arg0, 1, 1);
    func_sc05_008_801823B8((s32) arg0, 1, 2);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

void func_sc05_008_80181C38(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867D8[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181CE4(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181D04(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019B3D0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80181D4C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == D_80126980) {
        func_8002D4C8(0x88E, 0, arg2);
    }
    func_sc05_008_801823B8((s32) arg0, 2, 0);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

void func_sc05_008_80181DBC(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867E4[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181E68(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181E88(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019BA68);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80181ED0(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == D_80126980) {
        func_8002D4C8(0x88E, 0, arg2);
    }
    func_sc05_008_801823B8((s32) arg0, 3, 0);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

void func_sc05_008_80181F40(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867F0[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_80181FEC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8018200C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019C798);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80182054(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = D_801151D4;
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
        return;
    }
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(temp_s1, u16, 0x38)) {
        func_8002D4C8(0x88E, 0);
    }
}

void func_sc05_008_801820C0(u8 *arg0) {
    u8 *p;
    void *temp_a0;
    void *temp_v0;

    p = (u8 *)&D_80126B58;
    D_sc05_008_801867FC[AF(arg0, u16, 2)]();
    if (AF(arg0, void *, 0x20) != NULL) {
        if (func_80013328((s32) (arg0 + 4), (s32) (p + 4)) >= 0xA01) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc05_008_8018216C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8018218C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019C8B8);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_801821D4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = D_801151D4;
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
        return;
    }
    if ((AF(arg0, s32, 0xDC) - 0xA) == AF(temp_s1, u16, 0x38)) {
        func_8002D4C8(0x88E, 0);
    }
}

s32 func_sc05_008_80182240(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc05_008_8018227C(arg0, arg1);
    temp_v0 = AF(temp_s0, s32, 4) | 0x40;
    AF(temp_s0, s32, 4) = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018227C);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182334);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801823B8);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182478);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182490);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182560);

void func_sc05_008_8018264C(void) {
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182654);

void func_sc05_008_80182694(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = func_801291C0();
    if (temp_v0 != 0) {
        if (arg1 >= 0) {
            if (arg1 < 2) {
                temp_v0_2 = func_8001D074(0x7E, 0x100);
                AF(temp_v0, s32, 0x20) = temp_v0_2;
                if (temp_v0_2 != 0) {
                    func_8001CF00(temp_v0_2);
                    goto block_8;
                }
                goto block_9;
            }
            if (arg1 < 4) {
                temp_v0_3 = func_8001CFDC(0x86, 0xC0);
                AF(temp_v0, s32, 0x20) = temp_v0_3;
                if (temp_v0_3 != 0) {
                    func_8001C2C4(temp_v0_3);
block_8:
                    AF(temp_v0, s32, 0x2C) = arg1;
                    AF(temp_v0, s16, 0) = 0x5A;
                    func_80015954(arg0, temp_v0 + 4);
                    return;
                }
            }
            goto block_9;
        }
block_9:
        func_801292C8(temp_v0);
    }
}

void func_sc05_008_80182758(u8 *arg0) {
    D_sc05_008_80186838[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182794);

void func_sc05_008_801828E0(u8 *arg0) {
    s32 temp_v0;

    func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_801292C8((s32) arg0);
    }
}

void func_sc05_008_8018292C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_801292C8((s32) arg0);
    }
}

s32 func_sc05_008_80182960(void) {
    return 0x43;
}
