#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_095_8017BE9C(void) {
}

void func_sc03_095_8017BEA4(void) {
}

void func_sc03_095_8017BEAC(void) {
}

void func_sc03_095_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_095_801849C0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_095_8017D04C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_095_8017D074(void);
extern void func_800D1EBC();
extern void (*D_sc03_095_801849D4[])();
extern u8 D_sc03_095_801849E0;
extern void func_8016EE40();
extern u8 D_sc03_095_801849E4;
extern void func_sc03_095_8017D1CC();
extern void (*D_sc03_095_801849E8[])();
extern void (*D_sc03_095_80191B78[])();
extern void (*D_sc03_095_80191B90[])();
extern void (*D_sc03_095_80192F4C[])();
extern void (*D_sc03_095_80193000[])();
extern void (*D_sc03_095_801992E4[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_095_801849F8[];
extern s32 func_8013B7F4();
extern s32 D_sc03_095_8019BD18;
extern s32 func_8012C658();
extern u8 D_sc03_095_80181260;
extern u8 D_sc03_095_80192A60;
extern u8 D_sc03_095_80192A80;
extern s32 func_8012C354();
extern u8 D_sc03_095_80192B44;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();

extern void func_8012AD44();
extern void func_80016224();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8012AD50();
extern s32 D_sc03_095_80191B84[];
extern u8 D_sc03_095_80194F64;
extern void (*D_sc03_095_80194FC4[])();
extern void func_sc03_095_801805C8();
extern s32 func_8012BEE8();
extern s32 func_8012BE54();
extern void func_sc03_095_80180654();
extern void func_sc03_095_8018070C();
extern void func_sc03_095_801806EC();
extern void func_8002A04C();
extern void func_8012E8A8();
extern void func_80016714();
extern void func_8012C098();
extern void func_8012B260();
extern u8 D_sc03_095_80194FF0;


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

extern void func_8012B23C();
extern void func_8001CA1C();
extern SV8 D_sc03_095_80192E1C[];
extern u8 D_sc03_095_80192B80;
extern u8 D_sc03_095_80192C40;
extern u8 D_sc03_095_80192CC8;
extern u8 D_sc03_095_80192D88;
extern u8 D_sc03_095_80192E6C;
extern u8 D_sc03_095_80192E90;
extern u8 D_sc03_095_80192E7C;
extern u8 D_sc03_095_80192E88;



extern u8 D_sc03_095_80184B44;
extern u8 D_sc03_095_80184C34;
s32 func_sc03_095_8017D528(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc03_095_80184C48;
extern u8 D_sc03_095_80184D88;
extern void func_8012B2CC();

typedef struct { s16 vx, vy, vz, pad; } SV;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc03_095_8017BEBC(u8 *obj) {
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

void func_sc03_095_8017CD9C(void) {
    D_801274C8 = &D_sc03_095_80184B44;
    D_801274CC = &D_sc03_095_80184C34;
    func_sc03_095_8017D528(0);
}

void func_sc03_095_8017CDDC(void) {
    D_801274C8 = &D_sc03_095_80184C48;
    D_801274CC = &D_sc03_095_80184D88;
    func_sc03_095_8017D528(1);
}

void func_sc03_095_8017CE1C(u8 *arg0) {
    D_sc03_095_801849C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_095_8017CE58(u8 *arg0) {
    func_sc03_095_8017D04C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_095_8017CE9C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_095_8017CEC0(u8 *arg0) {
    func_sc03_095_8017D074();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_095_8017CF00(u8 *arg0) {
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

void func_sc03_095_8017CF7C(void) {
    func_800D1EBC();
}

void func_sc03_095_8017CF9C(u8 *arg0) {
    D_sc03_095_801849D4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_095_8017CFD8(u8 *arg0) {
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

void func_sc03_095_8017D04C(void) {
    func_8016EE40((s32) &D_sc03_095_801849E0, 0x01000000);
}

void func_sc03_095_8017D074(void) {
    func_8016EE40((s32) &D_sc03_095_801849E4, 0x01000000);
}

void func_sc03_095_8017D09C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x578;
    D_80126968 = 0x31C;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_095_8017D1CC, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_095_8017D1CC((s32) &D_80126948);
}

void func_sc03_095_8017D134(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_095_8017D1CC, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_095_8017D1CC((s32) &D_80126948);
}

void func_sc03_095_8017D1CC(s32 arg0) {
    D_sc03_095_801849E8[AF(arg0, u8, 4)]();
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 D_801202A0;
extern VoidFn D_sc03_095_80192B78[];
extern s32 func_8012B6D4();
extern s32 func_80135888();

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_095_80199204;
extern s16 D_sc03_095_80199206;
extern s16 D_sc03_095_80199208;
extern Blk30 D_sc03_095_8019920C;
extern s16 D_sc03_095_8019923C;
extern s16 D_sc03_095_8019923E;
extern s16 D_sc03_095_80199240;
extern Blk30 D_sc03_095_80199244;
extern s16 D_sc03_095_80199274;
extern s16 D_sc03_095_80199276;
extern s16 D_sc03_095_80199278;
extern Blk30 D_sc03_095_8019927C;
extern s16 D_sc03_095_801992AC;
extern s16 D_sc03_095_801992AE;
extern s16 D_sc03_095_801992B0;
extern Blk30 D_sc03_095_801992B4;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

typedef struct { u8 b[0x34]; } R34;
extern s32 func_8012BD14();
extern s16 D_80126B96;
extern s32 func_8012DEB8();
extern s16 D_80126B62;
extern u16 D_sc03_095_80192AB4[];
extern u16 D_sc03_095_80192ADC[];
extern u16 D_sc03_095_80192B04[];
extern VoidFn D_sc03_095_80192B2C[];
extern void func_8002D59C();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_095_80194E80;
extern u8 D_sc03_095_80194EA8;
extern s32 D_sc03_095_80194EDC;
extern u8 D_sc03_095_80194F7C;
extern s32 func_sc03_095_80180688();
extern s32 func_8012E504();
extern s32 func_8014CB0C();
extern void func_sc03_095_80180550();
extern s32 func_8012CBF4();
extern void func_sc03_095_80180850();
extern void func_sc03_095_8018049C();
extern void func_801292C8();

extern u16 D_800B99DA;
extern void func_8012B0B4();
extern void func_8012B178();
extern s32 func_sc03_095_8018072C();
extern s32 func_sc03_095_801807D0();

extern void func_8012C218();
extern void func_80143B6C();

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D208);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D2A8);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D390);

s32 func_sc03_095_8017D528(s32 arg0) {
    return func_8013B7F4(D_sc03_095_801849F8[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D558);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D618);

void func_sc03_095_8017D704(u8 *arg0) {
    s32 temp_v0;

    func_8012CBA4();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 2) = 4;
    }
    func_8012DFD4((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D758);

void func_sc03_095_8017D7B0(u8 *arg0) {
    s32 temp_v0;

    func_8012CBA4();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 2) = 4;
    }
    func_8012DFD4((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D804);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D880);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D8A0);

void func_sc03_095_8017D93C(s32 arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017D960);

void func_sc03_095_8017DB10(s32 arg0) {
    AF(arg0, s16, 0xFC) = 1;
    func_8012AD44(arg0, 2);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DB38);

s32 func_sc03_095_8017DCD0(s32 arg0, s32 arg1) {
    D_sc03_095_8019BD18 = 1;
    return 1;
}

void func_sc03_095_8017DCE4(void) {
    D_sc03_095_8019BD18 = 0;
}

void func_sc03_095_8017DCF4(u8 *arg0) {
    D_sc03_095_80191B78[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017DD30(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFE);
    if (temp_v0 != 0) {
        func_80016224(temp_v0 & 0xFF, 4);
        AF(arg0, s16, 0x2A) = -2;
        temp_v0_2 = 0x80 - (AF(arg0, s16, 0xFE) * 3);
        AF(arg0, s16, 0x28) = temp_v0_2;
        AF(arg0, s16, 0x26) = temp_v0_2;
        AF(arg0, s16, 0x24) = temp_v0_2;
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DD98);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DDFC);

void func_sc03_095_8017DE64(u8 *arg0) {
    D_sc03_095_80191B90[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017DEA0);

void func_sc03_095_8017DF38(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_095_80191B84[AF(arg0, s16, 0x70)]);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8000);
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0);
}

void func_sc03_095_8017DFC8(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    if (AF(AF(arg0, void *, 0x64), s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
}

void func_sc03_095_8017E01C(u8 *arg0) {
    UV4 a;
    UV4 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;

    k = AF(arg0, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    a.y = y;
    b.y = y;
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_095_80192AB4[i];
        a.z = D_sc03_095_80192AB4[i + 1];
        b.x = D_sc03_095_80192AB4[i + 2];
        b.z = D_sc03_095_80192AB4[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_095_80192ADC[i];
        a.z = D_sc03_095_80192ADC[i + 1];
        b.x = D_sc03_095_80192ADC[i + 2];
        b.z = D_sc03_095_80192ADC[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_095_80192B04[i];
        a.z = D_sc03_095_80192B04[i + 1];
        b.x = D_sc03_095_80192B04[i + 2];
        b.z = D_sc03_095_80192B04[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_095_80192B2C[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_095_8017E2B4(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_095_80192B78[AF(arg0, u16, 2)]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            ang = func_8012B6D4(arg0 + 4, p + 4);
            if (AF(AF(arg0, u8 *, 0x64), s16, 0xFC) < 0) {
                ang -= 0x400;
            } else {
                ang += 0x400;
            }
            ang &= 0xFFF;
            a.x -= rsin(ang) >> 8;
            a.z -= rcos(ang) >> 8;
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            c = b;
            if (func_80135888(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &c) != 0) {
                AF(p, u16, 6) = a.x;
                AF(p, u16, 0xE) = a.z;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_095_8017E43C(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192CC8);
        SetScript(arg0, &D_sc03_095_80192D88);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_095_80192E6C;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_095_80192E90;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_095_80192B44;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192CC8);
        SetScript(arg0, &D_sc03_095_80192D88);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192E7C);
        SetScript(arg0, &D_sc03_095_80192E88);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc03_095_8017E8E8(u8 *arg0) {
    AF(AF(arg0, u8 *, 0x20), s32, 4) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4);
    AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0xEFFFFFFF;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x08000000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x60000000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4) - (rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC) - (rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) << 8);
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1A) / 2;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (s16) AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x1C) / 2;
}

void func_sc03_095_8017EA7C(u8 *arg0) {
    SV in;
    SV out;
    s32 flag;
    u8 *m;
    s32 n;

    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(AF(arg0, u8 *, 0x64), u16, 0x100) & 0x4000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) -= 0x200;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) -= 0x200;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x200) {
            func_80143B6C(arg0, 0);
            func_8012C218(arg0);
            return;
        }
    } else {
        if (--AF(arg0, s16, 0x100) < 9) {
            AF(arg0, s16, 0x100) = 0x18;
            if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 5) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
                AF(arg0, s16, 0x1A) = rand() % 56 - 0x2C;
            } else if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) == 6) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
                AF(arg0, s16, 0x1A) = rand() % 128 - 0x60;
            }
        }
        n = AF(arg0, s16, 0x100);
        if (n < 0x10) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = n * 0x300;
        } else {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (0x20 - n) * 0x300;
        }
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 4) = AF(AF(arg0, u8 *, 0x64), s32, 4);
    AF(arg0, s32, 8) = AF(AF(arg0, u8 *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC);
    in.vx = AF(arg0, s16, 0x12);
    in.vy = AF(arg0, s16, 0x16);
    in.vz = AF(arg0, s16, 0x1A);
    m = AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&in, &out, &flag);
    AF(arg0, s16, 6) = out.vx;
    AF(arg0, s16, 0xA) = out.vy;
    AF(arg0, s16, 0xE) = out.vz;
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017EE2C);

void func_sc03_095_8017EF18(u8 *arg0) {
    D_sc03_095_80192F4C[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017EF54(u8 *arg0) {
    D_sc03_095_80193000[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017EF90(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_095_8017EFA8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_095_80192A80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_095_80192A60;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_095_80181260);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_095_8017F04C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_095_8017F068(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_095_80192B44) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_095_80192A60;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_095_80181260, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_095_8017F0EC(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_095_8017F128(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_095_8017F158(s32 arg0) {
    void *temp_a0;

    if (func_8012CBCC(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            func_8012E688(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F1DC);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F2A0);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F380);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F3F0);

void func_sc03_095_8017F4CC(void) {
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F4D4);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F58C);

void func_sc03_095_8017F650(s32 arg0) {
    s32 temp_v0;

    func_8012CBA4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    func_8012DFD4(arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F6A4);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F720);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F804);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017F8D0);

void func_sc03_095_8017F9A8(u8 *arg0) {
    s32 temp_a2;

    D_sc03_095_80194FC4[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_095_801805C8((s32) arg0);
    }
    if (AF(arg0, u16, 0) != 0) {
        temp_a2 = AF(arg0, s32, 0xD4);
        if (temp_a2 != 0) {
            FaceHelper((s32) arg0, (s32) &D_sc03_095_80194F64, temp_a2 + 8);
        }
    }
}

void func_sc03_095_8017FA38(s32 arg0) {
    s32 temp_v0;
    u16 temp_v1;

    func_8012C354(arg0, (s32) &D_sc03_095_80194EA8);
    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_095_80194E80);
    AF(temp_v0, s32, 0x80) = (s32) (arg0 + 0xFC);
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, s32, 4) |= 0x50000000;
    AF(temp_v0, u16, 0x2C) |= 0x90;
    AF(arg0, s32, 0x20) = temp_v0;
    AF(arg0, s32, 0xD4) = func_sc03_095_80180688(arg0);
    AF(arg0, s16, 0xAE) = 0x2000;
    AF(arg0, s16, 0xFC) = 0x80;
    AF(arg0, s16, 0xFE) = 0x80;
    AF(arg0, s16, 0x100) = 0x80;
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_095_80194F7C;
        AF(arg0, s32, 0xB4) = -0x2003;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
    }
    temp_v1 = AF(arg0, u16, 0x70);
    if (temp_v1 & 0x4000) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x100) = 0;
    } else if (!(temp_v1 & 0x8000)) {
        AF(arg0, s16, 2) = 3;
    } else {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x100) = 0;
        func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
    }
    if (func_8012E504(arg0, 0x1A2) == 0) {
        AF(arg0, s32, 0xE4) = 1;
        AF(arg0, s32 *, 0xD0) = &D_sc03_095_80194EDC;
        AF(arg0, s32 *, 0xCC) = &D_sc03_095_80194EDC;
        AF(arg0, s32, 0xE0) = *AF(arg0, s32 *, 0xCC);
    }
}

void func_sc03_095_8017FBC4(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_8012BEE8(arg0, arg1, arg2) != 0) && (func_8012BE54(arg0) <= 0x40000)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8017FC14);

void func_sc03_095_8017FC90(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    AF(arg0, s16, 2) = 4;
    temp_v0 = rand((s32) arg0);
    var_v0 = temp_v0 / 64;
    AF(arg0, s32, 0xE8) = (s32) ((temp_v0 - (var_v0 << 6)) + 0x40);
}

void func_sc03_095_8017FCE4(u8 *arg0) {
    SV p;
    u8 unused[8];

    if (!(AF(arg0, u16, 0x70) & 1)) {
        AF(arg0, s16, 0x52) = (u32) rsin(AF(arg0, s32, 0x1C) << 5) >> 8;
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(AF(arg0, u8 *, 0x20), s16, 8);
            p.vy = AF(AF(arg0, u8 *, 0x20), s16, 0xA) + 0x40;
            p.vz = AF(AF(arg0, u8 *, 0x20), s16, 0xC);
            func_sc03_095_80180850(&p, 0x60);
        }
    } else {
        if (AF(arg0, u8, 0x1C) == 0) {
            AF(arg0, s32, 0xE8) = rand() % 64 + 0x40;
        }
        if (func_8014CB0C() == 0) {
            func_sc03_095_80180550(arg0, -0x28000);
            func_8012CBF4(arg0);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        }
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(arg0, s16, 6);
            p.vy = AF(arg0, s16, 0xA);
            p.vz = AF(arg0, s16, 0xE);
            p.vy += 0x38;
            func_sc03_095_80180850(&p, 0x80);
        }
    }
    func_sc03_095_8018049C(arg0);
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000 - (rsin((AF(arg0, s32, 0x1C) << 5) & 0x7E0) >> 1);
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_095_8017FEB8(u8 *arg0) {
    s32 w;
    s16 a;
    u8 c;

    AF(arg0, s16, 0x52) = (u32) rsin(D_800B99DA << 5) >> 8;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        a = rand() % 4096;
        func_8012B0B4(&w, a, rand() % AF(arg0, s16, 0xDC));
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88) + w;
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C) + (w >> 16);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
        func_8012B2CC(arg0);
        func_8012B178(arg0, -0x20000);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_095_8018072C(arg0);
        if (++AF(arg0, s32, 0x1C) >= 0x41) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34)++;
            func_sc03_095_801806EC(AF(arg0, s32, 0xD4));
        }
        break;
    case 2:
        if (func_sc03_095_8018072C(arg0) == 0 || func_8012BEE8(arg0) != 0 || func_sc03_095_801807D0(arg0, 0x400) != 0) {
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, u16, 0x34)++;
            func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
        }
        break;
    case 3:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_095_8018072C(arg0);
        if (--AF(arg0, s32, 0x1C) < 0) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = rand() % 96;
        }
        break;
    case 4:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
        }
        break;
    }
}

void func_sc03_095_8018014C(void) {
}

void func_sc03_095_80180154(u8 *arg0) {
    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 1);
    AF(arg0, s32, 0x48) = 0;
}

void func_sc03_095_80180188(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801801B4);

void func_sc03_095_801802A0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801802CC);

void func_sc03_095_80180328(u8 *arg0) {
    void *temp_v1;

    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 0);
    AF(arg0, s16, 2) = 4;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    func_sc03_095_801806EC(AF(arg0, s32, 0xD4));
}

void func_sc03_095_80180388(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if ((AF(arg0, s32, 0xE4) == 0) && !(AF(arg0, u16, 0x70) & 0x800)) {
        func_80016714(AF(arg0, s32, 0xD4), 0x38);
        func_8012C098(arg0);
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    if (!(AF(arg0, u16, 0x70) & 0x800)) {
        AF(arg0, s16, 2) = 6;
        func_8012E8A8(arg0);
        func_80016714(AF(arg0, s32, 0xD4), 0x38);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 0);
    func_8012B260(arg0);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8018049C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180550);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801805C8);

void func_sc03_095_80180654(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = (arg1 * 4) + &D_sc03_095_80194FF0;
        AF(arg0, u16, 0x28) = (u16) AF(temp_v0, u16, 0);
        AF(arg0, u16, 0x2A) = (u16) AF(temp_v0, u16, 2);
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180688);

void func_sc03_095_801806EC(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_095_8018070C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_8018072C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_801807D0);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180850);

void func_sc03_095_801808F4(u8 *arg0) {
    u8 *o;
    s16 v;
    s16 h;
    u32 c;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u16, 2) == 0) {
        h = rsin(AF(arg0, s32, 0x1C) << 6) * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            AF(arg0, u16, 2)++;
            AF(arg0, s32, 0x1C) = AF(arg0, s32, 0x1C) * 2 - 1;
        }
    } else {
        v = rsin(AF(arg0, s32, 0x1C) << 5);
        c = (u32) (AF(arg0, s32, 0x2C) * v) >> 12;
        h = v * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        AF(o, u8, 0x24) = c;
        AF(o, u8, 0x25) = c;
        AF(o, u8, 0x26) = c;
        if (--AF(arg0, s32, 0x1C) == 0) {
            func_801292C8(arg0);
        }
    }
}

void func_sc03_095_801809FC(u8 *arg0) {
    D_sc03_095_801992E4[AF(arg0, u16, 2)]();
}

void func_sc03_095_80180A38(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_095_80199204, D_sc03_095_80199206, D_sc03_095_80199208);
        p = &D_sc03_095_8019920C;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_095_8019923C, D_sc03_095_8019923E, D_sc03_095_80199240);
        p = &D_sc03_095_80199244;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_095_80199274, D_sc03_095_80199276, D_sc03_095_80199278);
        p = &D_sc03_095_8019927C;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_095_80199204, D_sc03_095_80199206, D_sc03_095_80199208);
        p = &D_sc03_095_8019920C;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_095_801992AC, D_sc03_095_801992AE, D_sc03_095_801992B0);
        p = &D_sc03_095_801992B4;
        func_8012AD44(arg0, 5);
        break;
    }
    D_800A5E88.a = p->a;
    D_800A5E88.b = p->b;
    D_800A5E88.c = p->c;
    func_80028620(0, &D_800A5E88.a);
    func_80028620(1, &D_800A5E88.b);
    func_80028620(2, &D_800A5E88.c);
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180C2C);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180CDC);

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180D8C);

void func_sc03_095_80180E3C(void) {
}

INCLUDE_ASM("asm/stg/sc03_095/nonmatchings/sc03_095", func_sc03_095_80180E44);
