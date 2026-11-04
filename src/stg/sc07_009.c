#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_009_8017BE9C(void) {
}

void func_sc07_009_8017BEA4(void) {
}

void func_sc07_009_8017BEAC(void) {
}

void func_sc07_009_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_009_80181804[])();
extern void (*D_sc07_009_8018180C[])();
extern void (*D_sc07_009_80181818[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc07_009_80181858[])();
extern u8 D_sc07_009_80181824;
extern void func_8016EE40();
extern u8 D_sc07_009_80181864;
extern void func_sc07_009_8017D338();
extern void (*D_sc07_009_80181878[])();
extern void func_8012AD50();
extern void (*D_sc07_009_801819E4[])();
extern void (*D_sc07_009_80181A78[])();

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

void func_sc07_009_8017D150(void);
extern s32 func_800167F0();


extern void func_80171990();
extern u8 D_80126B58;

extern void func_800167B8();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();


extern u8 D_sc07_009_801817D8;
extern void (*D_sc07_009_8018199C[])();
extern s32 func_80029178();
extern s32 func_8002AE60();
extern s32 TestPadAll();
extern s32 func_800CF8B4();
extern void func_800D1724();
extern u8 D_sc07_009_8018187C;
extern void func_sc07_009_8017D980();
extern s32 func_sc07_009_8017D994();
extern void func_8012BF4C();

extern s32 func_sc07_009_8017DA7C();
extern s32 func_8012BEE8();
extern s32 func_sc07_009_8017DA0C();
extern u8 D_sc07_009_801818C4;
extern u8 D_sc07_009_8018190C;

extern u8 D_sc07_009_80181954;
void func_sc07_009_8017D178(void);
extern s32 func_800178C8();
extern void (*D_sc07_009_801819EC[])();
extern u8 D_sc07_009_801819F4;
extern s32 func_8012C194();
extern void func_8001CB6C();
extern void func_80016940();
extern s32 func_80016978();
extern void func_8012C098();

extern s8 D_80078EC6;
extern void func_80029514();
extern void func_80029124();
extern void func_8002AEE4();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc07_009_8017BEBC(u8 *obj) {
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

void func_sc07_009_8017CD9C(u8 *arg0) {
    D_sc07_009_80181804[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_009_8017CDD8(u8 *arg0) {
    func_sc07_009_8017D150();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_009_8017CE14(void) {
    return 1;
}

void func_sc07_009_8017CE1C(u8 *arg0) {
    D_sc07_009_8018180C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_009_8017CE58(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_009_8017CE74(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_009_8017CEC8(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc07_009_8017CEEC(u8 *arg0) {
    D_sc07_009_80181818[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_009_8017CF28(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_009_8017CF44(u8 *arg0) {
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

s32 func_sc07_009_8017CFC0(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_80029514(0x6A4);
        func_80029124(0x11D, 1);
        func_80029124(0x123, 1);
        D_80078EC6 = 1;
        func_8002AEE4();
        return 1;
    }
    return 0;
}

void func_sc07_009_8017D024(u8 *arg0) {
    D_sc07_009_80181858[AF(arg0, u8, 0x216)]();
}

extern s16 D_sc07_009_80181A00;

extern s16 D_801274EA[];
extern s16 D_801274F2;
extern s16 D_800B9ABA[];
extern void func_80171A80();
extern void func_sc07_009_8017D0D4();
void func_sc07_009_8017D060(s32 arg0) {
    D_801274EA[0] -= 0x280;
    D_801274F2 -= 0x500;
    func_80171A80(arg0, 0xA0);
    func_80171990(arg0);
    func_sc07_009_8017D0D4(arg0);
    D_800B9ABA[0] = 0;
}

void func_sc07_009_8017D0CC(void) {
}

extern s32 func_80171A88();
extern void func_80171928();
void func_sc07_009_8017D0D4(s32 arg0) {
    if (func_80171A88(arg0) != 0) {
        func_80171928(arg0);
    } else {
        D_801274EA[0] += 4;
        D_801274F2 += 8;
        D_800B9ABA[0] += 2;
    }
}

void func_sc07_009_8017D150(void) {
    func_8016EE40((s32) &D_sc07_009_80181824, 0x01000000);
}

void func_sc07_009_8017D178(void) {
    func_80171990((s32) &D_80126B58);
}

void func_sc07_009_8017D1A0(void) {
    func_8016EE40((s32) &D_sc07_009_80181864, 0x01000000);
}

void func_sc07_009_8017D1C8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_009_8017D338, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_009_8017D338((s32) &D_80126948);
}

extern s32 D_80126950;
extern s16 D_801274E8;
extern s16 D_801274EC;
extern s16 D_801274F0;
extern s16 D_801274F4;
extern s16 D_sc07_009_8019EE74;
extern s16 D_sc07_009_8019EE76;
extern s16 D_sc07_009_8019EE78;
extern s16 D_sc07_009_8019EE7A;
extern s16 D_sc07_009_8019EE7C;
extern s16 D_sc07_009_8019EE7E;
void func_sc07_009_8017D260(void) {
    D_80126950 = 0x16F;
    D_801274E8 = D_sc07_009_8019EE74;
    D_801274EA[0] = D_sc07_009_8019EE76;
    D_801274EC = D_sc07_009_8019EE78;
    D_801274F0 = D_sc07_009_8019EE7A;
    D_801274F2 = D_sc07_009_8019EE7C;
    D_801274F4 = D_sc07_009_8019EE7E;
    func_8012A018((s32) func_sc07_009_8017D338, 0);
    func_sc07_009_8017D338((s32) &D_80126948);
}

extern s32 func_80174E9C();
void func_sc07_009_8017D304(void) {
    D_80126950 = 0x16F;
    func_80174E9C((s32) &D_sc07_009_8019EE74);
}

void func_sc07_009_8017D338(s32 arg0) {
    D_sc07_009_80181878[AF(arg0, u8, 4)]();
}

extern s32 func_sc07_009_8017D39C(s32 arg0, s32 arg1, s32 arg2);
void func_sc07_009_8017D374(s32 arg0) {
    func_sc07_009_8017D39C(arg0, (s32) &D_801274E8, (s32) &D_801274E8 + 8);
}

s32 func_sc07_009_8017D39C(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;

    AF(arg0, s32, 0x48) = (s32) AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = (s32) AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = (s32) AF(arg2, s16, 4);
    AF(arg0, s32, 0x3C) = (s32) AF(arg1, s16, 0);
    AF(arg0, s32, 0x40) = (s32) AF(arg1, s16, 2);
    temp_v0 = AF(arg1, s16, 4);
    AF(arg0, s32, 0x44) = (s32) temp_v0;
    return (s32) temp_v0;
}

s32 func_sc07_009_8017D3E4(void) {
    return 0x91;
}

void func_sc07_009_8017D3EC(u8 *arg0) {
    if ((func_80029178(0x123) & 0xFF) && ((func_8002AE60() << 0x10) == 0) && (((TestPadAll(0, 0, 0x800) << 0x10) != 0) || ((TestPadAll(0, 0, 0x40) << 0x10) != 0)) && (func_800CF8B4() != 0)) {
        func_800D1724((s32) &D_sc07_009_801817D8);
    }
    D_sc07_009_8018199C[AF(arg0, u16, 2)](arg0);
}

void func_sc07_009_8017D4AC(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc07_009_8017D4CC(s32 arg0) {
    func_sc07_009_8017D980((s32) &D_sc07_009_8018187C);
    func_8012AD50(arg0);
}

void func_sc07_009_8017D508(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_8018187C) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D554(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_8018187C);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D5A0(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_8018187C) != 0) {
        func_8012BF4C(arg0, 8);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D5EC(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_009_8017D980((s32) &D_sc07_009_801818C4);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D634(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_801818C4) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D680(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_801818C4);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D6CC(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_801818C4) != 0) {
        func_8012BF4C(arg0, 8);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D718(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_009_8017D980((s32) &D_sc07_009_8018190C);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D760(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_8018190C) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D7AC(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_8018190C);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D7F8(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_8018190C) != 0) {
        func_8012BF4C(arg0, 8);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D844(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_009_8017D980((s32) &D_sc07_009_80181954);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D88C(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_80181954) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D8D8(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_80181954);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D924(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_80181954) != 0) {
        func_8012BF4C(arg0, 8);
        func_sc07_009_8017D178();
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D978(void) {
}

void func_sc07_009_8017D980(s32 arg0) {
    AF(arg0, s32, 0x30) = 0;
    AF(arg0, s32, 0x34) = 0;
    AF(arg0, s32, 0x38) = 0;
    AF(arg0, s32, 0x3C) = 0;
}

s32 func_sc07_009_8017D994(s32 arg0) {
    s32 v;
    v = AF(arg0, u8, 0x30);
    v += 2;
    if (v >= 0x80) {
        v = 0x80;
    }
    v = v | ((v << 16) | (v << 8));
    AF(arg0, s32, 0x30) = v;
    AF(arg0, s32, 0x34) = v;
    AF(arg0, s32, 0x38) = v;
    AF(arg0, s32, 0x3C) = v;
    func_sc07_009_8017DA7C(arg0);
    return AF(arg0, u8, 0x30) == 0x80;
}

s32 func_sc07_009_8017DA0C(s32 arg0) {
    s32 v;
    v = AF(arg0, u8, 0x30);
    v -= 2;
    if (v < 0) {
        v = 0;
    }
    v = v | ((v << 16) | (v << 8));
    AF(arg0, s32, 0x30) = v;
    AF(arg0, s32, 0x34) = v;
    AF(arg0, s32, 0x38) = v;
    AF(arg0, s32, 0x3C) = v;
    func_sc07_009_8017DA7C(arg0);
    return AF(arg0, u8, 0x30) == 0;
}

s32 func_sc07_009_8017DA7C(s32 arg0) {
    AF(arg0, s16, 4) = 4;
    AF(arg0, s32, 0x40) = 0x60000000;
    func_800178C8(arg0);
    AF(arg0, s16, 4) = 3;
    AF(arg0, s32, 0x40) = 0x50000000;
    return func_800178C8(arg0);
}

void func_sc07_009_8017DACC(u8 *arg0) {
    D_sc07_009_801819E4[AF(arg0, u16, 2)]();
}

void func_sc07_009_8017DB08(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

extern s16 D_800B9AB8;
extern s32 func_8012A758();
void func_sc07_009_8017DB34(void) {
    D_800B9AB8 = ((s16) func_8012A758() * 0x140) / 4096;
}

void func_sc07_009_8017DB80(u8 *arg0) {
    if (AF(arg0, s16, 0x70) == 0) {
        D_sc07_009_801819EC[AF(arg0, u16, 2)]();
    }
}

void func_sc07_009_8017DBCC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CB6C(temp_v0, (s32) &D_sc07_009_801819F4, 0x1E8, 0x190);
        AF(temp_v0, u8, 0x27) = 0x3C;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(arg0, s16, 0xFC) = 0;
        func_8012AD50((s32) arg0);
    }
}

void func_sc07_009_8017DC40(u8 *arg0) {
    s16 *var_a0;

    var_a0 = (AF(arg0, s16, 0xFC) * 8) + (u8 *)&D_sc07_009_80181A00;
    if (*var_a0 == 0) {
        var_a0 = &D_sc07_009_80181A00;
        AF(arg0, s16, 0xFC) = 0;
    }
    MoveImage((s32) var_a0, 0x1E8, 0x190);
    AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) + 1);
}

void func_sc07_009_8017DCA8(u8 *arg0) {
    D_sc07_009_80181A78[AF(arg0, u16, 2)]();
}

void func_sc07_009_8017DCE4(s32 arg0) {
    func_80016940(0);
    func_8012AD50(arg0);
}

void func_sc07_009_8017DD18(s32 arg0) {
    if (func_80016978(0) & 0xFFFF) {
        func_8012C098(arg0);
    }
}
