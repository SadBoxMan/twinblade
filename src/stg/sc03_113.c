#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_113_8017BE9C(void) {
}

void func_sc03_113_8017BEA4(void) {
}

void func_sc03_113_8017BEAC(void) {
}

void func_sc03_113_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_113_801867DC[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_113_801867C4;
extern void (*D_sc03_113_801867E4[])();
extern u8 D_sc03_113_801867D0;
extern void (*D_sc03_113_80186EC0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 func_80178970();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc03_113_80186EB0[];
extern void func_80029124();
extern s32 func_8012C658();
extern void func_80178B18();
extern u8 D_80078E78;
extern u8 D_sc03_113_80186E90;
extern s32 func_8012E778();
extern void func_801439C0();
extern void (*D_sc03_113_80186F5C[])();
void func_sc03_113_8017F02C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_113_80186F64[])();
void func_sc03_113_8017F054(void);
extern void func_800D1EBC();
extern void (*D_sc03_113_80186F70[])();
extern u8 D_sc03_113_80186F7C;
extern void func_8016EE40();
extern u8 D_sc03_113_80186F88;
extern void func_sc03_113_8017F120();
extern void (*D_sc03_113_80186F9C[])();
extern void (*D_sc03_113_80187174[])();
extern void (*D_sc03_113_801871A8[])();
extern void (*D_sc03_113_8019F340[])();

void func_sc03_113_8017BEBC(u8 *arg0) {
    D_sc03_113_801867DC[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_113_801867C4, 0xFD);
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

void func_sc03_113_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_113_8017C150(u8 *arg0) {
    D_sc03_113_801867E4[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_113_801867D0, 0x18);
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

void func_sc03_113_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern u8 D_sc03_113_80186C74;
extern s32 func_8012CBCC();
extern void func_8012B2CC();
extern void func_8012B14C();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc03_113_8019CB9C[])();
extern void func_sc03_113_80180910();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_113_8019F08C;
extern u8 D_sc03_113_8019CBBC;
extern s32 func_8012D5E4();
extern s32 func_sc03_113_801808F8();
extern u8 D_80078EC1;
extern s32 func_8012BD14();
extern void (*D_sc03_113_8019F2F0[])();
extern void func_8012B260();
extern void func_sc03_113_80182038();
extern void func_8001CD50();
extern u8 D_sc03_113_801A5A40;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern s32 func_8012BCCC();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_113_80181F18();
extern u8 D_sc03_113_8019F2B0;
extern u8 D_sc03_113_8019F2B8;
extern s32 func_8012CBF4();
extern s32 func_8012BE54();
extern void func_sc03_113_80181C24();
extern u8 D_sc03_113_801A5A80;
extern void func_800233CC();
extern void func_801292C8();

extern u8 D_sc03_113_801994F4;
extern s32 D_sc03_113_801A59F8;
extern s32 D_sc03_113_801A5C64;
extern u8 D_sc03_113_801A5C80;
extern void func_8013C0F8();
extern void func_sc03_113_8017D174();

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
extern u8 D_sc03_113_80187198;
extern u8 D_sc03_113_8019CB18;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern s32 func_80029178();
extern void func_8012AD44();
extern void func_8012AD50();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_113_8017C294(u8 *obj) {
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
extern s32 func_8012C354();
extern s32 func_80143970();
extern u8 D_sc03_113_80186BEC;
extern u8 D_sc03_113_80186D84;
extern u8 D_sc03_113_80186DB8;
extern s32 D_sc03_113_801A59E0;
extern s32 D_sc03_113_801A59E4;
extern s32 D_sc03_113_801A59E8;
extern u32 func_80029504();
extern s32 D_sc03_113_801A59EC;
extern s32 D_sc03_113_801A59F4;
extern void func_sc03_113_8017E79C();
extern void func_sc03_113_8017E728();
extern s32 func_8012BB3C();
extern s32 func_8012B8E4();
extern void func_8012AD80();
extern void func_8012B200();
extern s32 func_8012CBA4();

typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 func_8012BEE8();
extern void func_8012B178();
extern s32 func_8012B608();
extern s32 func_sc03_113_8018084C();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
extern void func_8012B0B4();
extern s16 D_80126B62;

extern s32 func_8012CEB0();
extern u8 D_sc03_113_8019F28C;
extern void func_8012B23C();
extern void func_8012B1B4();

extern u8 D_sc03_113_8019F2A8;
extern s32 func_8012BDBC();
extern s32 func_8012CC40();

typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern s32 func_8012B864();
extern s32 D_sc03_113_80186E54;
extern void func_8012ADE4();
extern void func_sc03_113_8017E878();
extern s32 func_8012BC60();
extern s32 func_8016F1AC();
extern void func_80178B70();
extern s32 func_8012CC64();
extern s32 func_80133784();

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126B58;
extern u8 D_80126940;
extern u8 D_sc03_113_80186FA0[];
extern s32 func_80148800();
extern void func_sc03_113_8017F1FC();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

typedef struct { u16 a, b, c, d; } U16x4;
extern u8 D_sc03_113_8019CB6C;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 func_8012B6D4();
extern u8 D_sc03_113_80186DEC[];
extern XY D_sc03_113_80186E0C[];
extern u8 D_sc03_113_80186CDC;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern u8 D_sc03_113_8019CB30;
extern u8 D_sc03_113_8019CB74;
extern void func_80143994();
extern void func_8012E88C();
extern s16 D_80126CBA;
extern void *D_sc03_113_8019F348[];
extern void *D_801151D4;
extern s32 func_8012BD3C();
extern s32 func_8012BE98();
extern s32 func_8012B744();
extern void func_8012C0EC();
extern u8 D_sc03_113_8019F298;
extern u8 D_sc03_113_8019F2A0;
extern u16 D_801202A0;

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
extern WMtx D_800AE620;
extern s16 D_801152B0;
extern s16 D_801152B4;
extern s16 D_sc03_113_80187164[];
extern s16 D_sc03_113_8018715C[];
extern u16 D_sc03_113_8018716C[];
extern s32 func_8012C588();
extern void func_sc03_113_8017F4DC();
extern s16 D_sc03_113_80187154[];
extern s16 D_sc03_113_80187190[];

typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

extern s16 D_sc03_113_80187180[];
extern s16 D_sc03_113_80187184[];
extern s16 D_sc03_113_80187188[];
extern s16 D_sc03_113_8018718C[];

extern s32 func_8012C194();
extern u8 D_sc03_113_80186FA4;
extern void func_8001CB6C();
void func_sc03_113_8017F6CC(u8 *o);
extern void func_8012E014();

typedef struct { s16 v; } S16R;
extern u16 D_sc03_113_801867EC[];

void func_sc03_113_8017D174(u8 *obj, u8 *hdr, s32 ph, s32 dy) {
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
            v[0].y += D_sc03_113_801867EC[(v[0].z + p) & 0x1FF] + D_sc03_113_801867EC[(v[0].x + half) & 0x1FF];
            v[1].y += D_sc03_113_801867EC[(v[1].z + p) & 0x1FF] + D_sc03_113_801867EC[(v[1].x + half) & 0x1FF];
            v[2].y += D_sc03_113_801867EC[(v[2].z + p) & 0x1FF] + D_sc03_113_801867EC[(v[2].x + half) & 0x1FF];
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
                v[3].y += D_sc03_113_801867EC[(v[3].z + p) & 0x1FF] + D_sc03_113_801867EC[(v[3].x + half) & 0x1FF];
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

void func_sc03_113_8017DDD8(u8 *arg0) {
    u8 *g;

    g = &D_80078E78;
    if ((func_80029178(D_sc03_113_80186EB0[AF(arg0, s16, 0x70)]) & 0xFF) || (AF(arg0, s16, 0x70) == 4 && func_80029504() < 200)) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc03_113_80186D84) != 0) {
            AF(arg0, u16, 0x5C) |= 0x10;
            SetScript(arg0, &D_sc03_113_80186BEC);
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            D_sc03_113_801A59E0 = AF(arg0, s16, 0x88) << 16;
            D_sc03_113_801A59E4 = AF(arg0, s16, 0x8A) << 16;
            D_sc03_113_801A59E8 = AF(arg0, s16, 0x8C) << 16;
            AF(arg0, s32, 0xCC) = func_80143970(arg0);
            AF(arg0, s16, 0xFC) = 0;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 2)++;
        }
    } else if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc03_113_80186DB8) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_113_8017DF74(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc03_113_80186C74);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc03_113_801A59EC = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc03_113_801A59F4 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc03_113_8017E79C(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc03_113_801A59EC)[i] = (&D_sc03_113_801A59E0)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012BB3C(arg0 + 4, &D_sc03_113_801A59EC, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc03_113_8017E728(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc03_113_8017E178(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = func_8012CBA4(a);
    if ((f & 0x6000) != 0x2000) {
        func_8012ADE4(a);
        func_sc03_113_8017E878(a);
        if (AF(a, s32, 0x1C) >= 9) {
            AF(a, s32, 0x1C) -= 8;
        }
    }
    if (f & 0x8000) {
        goto body;
    }
    if ((f & 0x6000) != 0x2000) {
body:
        if (AF(a, s16, 0x106) == 0) {
            AF(a, s16, 0x106) = 0x111;
        }
        if (AF(a, s32, 0x1C) >= 5) {
            AF(a, s32, 0x1C) -= 4;
        }
        AF(a, s16, 0x108)++;
    } else {
        AF(a, s16, 0x106) = 0;
    }
    if (--AF(a, s32, 0x1C) != 0) {
        if (!(AF(a, s32, 0x1C) & 3) && func_8012BC60(a + 4, &D_sc03_113_801A59EC) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += func_8012BB3C(a + 4, &D_sc03_113_801A59EC, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc03_113_8017E728(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc03_113_8017E728(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        }
        if (AF(a, s16, 0x104) != 0) {
            if (AF(a, u32, 0x94) < 11) {
                AF(a, u32, 0x94)++;
            }
            if (!(AF(a, s32, 0x1C) & 7)) {
                go = 1;
            }
        }
    } else {
        func_8012B200(a);
        SetScript(a, &D_sc03_113_80186BEC);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (func_8012BD14(a) < 0x24000) {
            AF(a, s16, 0x102) = 10 - AF(a, s16, 0x104);
        } else {
            AF(a, s16, 0x102) = 0;
        }
        if (AF(a, s16, 0x104) != 0) {
            AF(a, s16, 0x104) -= 4;
            if (AF(a, s16, 0x104) < 0) {
                AF(a, s16, 0x104) = 0;
            }
        }
        AF(a, s16, 2) = 1;
    }
    if (AF(a, s16, 0xFC) != 0) {
        if (func_8016F1AC() != 0) {
            p = &D_sc03_113_80186E54;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            func_80178B70(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            func_8012B200(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc03_113_8017E728(a, -15, 0);
        func_sc03_113_8017E79C(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = func_8012BD14(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (func_8012BDBC(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (func_8012BDBC(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc03_113_8017E79C(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = func_8012B864(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc03_113_8017E728(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        func_80146A6C(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc03_113_8017E56C(u8 *arg0) {
    s32 f;

    func_80178970(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = func_8012CBA4(arg0);
        } else {
            f = func_8012CBF4(arg0);
        }
        if (f & 0x8000) {
            AF(arg0, s16, 0x108)++;
        }
        if (f & 0x2000) {
            AF(arg0, s16, 0xFE) = 1;
        } else {
            AF(arg0, s16, 0xFE) = 0;
        }
    } else {
        func_8012AD80(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        func_8002D4C8(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || func_8012E778(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        func_8012B200(arg0);
        SetScript(arg0, &D_sc03_113_80186BEC);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_801439C0(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_113_8017E6EC(u8 *arg0) {
    D_sc03_113_80186EC0[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017E728(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    func_8012B0B4(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_113_8017E79C(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (func_8012B6D4(&D_80126B5C, &D_sc03_113_801A59E0) >> 7) & 0x18;
    i = D_sc03_113_80186DEC[a | ((func_8012B6D4(arg0 + 4, &D_sc03_113_801A59E0) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_113_80186E0C[i].x - 0x100;
    D_sc03_113_801A59EC = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_113_80186E0C[i].y - 0x100;
    D_sc03_113_801A59F4 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

void func_sc03_113_8017E878(u8 *o) {
    SV8 a;
    SV8 b;
    WMtx m;
    s32 e;
    s32 v;
    s32 d;
    s16 r;

    a.x = AF(o, s16, 6) + AF(o, s16, 0x12);
    a.y = AF(o, s16, 0xA) + 8;
    a.z = AF(o, s16, 0xE) + AF(o, s16, 0x1A);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA) + 8;
    b.z = AF(o, s16, 0xE);
    if (func_80133784(1, &a, &b) & 0xC000) {
        e = ratan2(D_801152B0, D_801152B4) & 0xFFF;

        v = ratan2(AF(o, s32, 0x10), AF(o, s32, 0x18)) & 0xFFF;
        d = v - e;
        d <<= 16;
        if (d < 0) {
            v += 0x480;
            r = e - v;
        } else {
            v -= 0x480;
            r = e - v;
        }

        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        m = D_800AE620;
        RotMatrixY(r, &m);

        b.x = AF(o, s16, 0x12);
        b.y = AF(o, s16, 0x16);
        b.z = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.x = AF(o, s16, 6) + (b.x >> 1);
        b.y = AF(o, s16, 0xA) + (b.y >> 1);
        d = b.z >> 1;
        b.z = AF(o, s16, 0xE) + d;

        if (func_8012CEB0(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc03_113_8017EA8C(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    func_80178970(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) func_8012C658(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            func_8002D4C8(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            SetScript(arg0, (s32) &D_sc03_113_80186CDC);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            func_8012B14C(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc03_113_8017EB60(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    func_80178970(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (func_8012CBCC(arg0) & 0x2000)) {
        func_80146A6C(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc03_113_80186C74);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        func_8012B2CC(arg0);
        func_8012B14C(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_113_8017EC30(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_80029124((s32) D_sc03_113_80186EB0[AF(arg0, s16, 0x70)], 1);
        func_8012C218(arg0);
    }
}

void func_sc03_113_8017EC88(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &D_80078E78;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        func_80178B18((s32) arg0, (s32) &D_sc03_113_80186E90);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (func_8012E778((s32) arg0, 0x9000B8) == 0)) {
        if (func_8012C658(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012C218((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc03_113_8017ED80(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_113_8017EDC0(u8 *arg0) {
    D_sc03_113_80186F5C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_113_8017EDFC(u8 *arg0) {
    func_sc03_113_8017F02C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_113_8017EE40(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_113_8017EE64(u8 *arg0) {
    D_sc03_113_80186F64[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_113_8017EEA0(u8 *arg0) {
    func_sc03_113_8017F054();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_113_8017EEE0(u8 *arg0) {
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

void func_sc03_113_8017EF5C(void) {
    func_800D1EBC();
}

void func_sc03_113_8017EF7C(u8 *arg0) {
    D_sc03_113_80186F70[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_113_8017EFB8(u8 *arg0) {
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

void func_sc03_113_8017F02C(void) {
    func_8016EE40((s32) &D_sc03_113_80186F7C, 0x01000000);
}

void func_sc03_113_8017F054(void) {
    func_8016EE40((s32) &D_sc03_113_80186F88, 0x01000000);
}

void func_sc03_113_8017F07C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_113_8017F120, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_113_8017F120((s32) &D_80126948);
}

void func_sc03_113_8017F120(s32 arg0) {
    D_sc03_113_80186F9C[AF(arg0, u8, 4)]();
}

void func_sc03_113_8017F15C(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_113_80186FA0)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc03_113_8017F1FC((s32) arg0, (s32) &v);
}

void func_sc03_113_8017F1FC(u8 *arg0, u8 *arg1) {
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

void func_sc03_113_8017F394(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s16 d = D_sc03_113_80187164[AF(o, s16, 0x70)];
    AF(p, s16, 0x30) += d;
    if (d < 0) {
        if (AF(p, s16, 0x30) <= D_sc03_113_8018715C[AF(o, s16, 0x70)] - 0x30) {
            AF(p, s16, 0x30) = D_sc03_113_8018715C[AF(o, s16, 0x70)];
        }
    } else {
        if (AF(p, s16, 0x30) >= D_sc03_113_8018715C[AF(o, s16, 0x70)] + 0x30) {
            AF(p, s16, 0x30) = D_sc03_113_8018715C[AF(o, s16, 0x70)];
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = D_sc03_113_8018716C[AF(o, s16, 0x70)];
        func_8012C588(0x1A4, o);
    }
    if (AF(o, s16, 0x70) == 0) {
        func_sc03_113_8017F4DC(o);
    }
}

void func_sc03_113_8017F4A0(u8 *arg0) {
    D_sc03_113_80187174[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017F4DC(u8 *o) {
    u8 *p;
    u8 *q;
    u8 *f;
    s32 i;
    s16 best;
    s16 d;
    s16 e;
    s16 y;
    s32 k;
    s32 sum;
    s16 py;
    s16 t;
    s32 id;
    s16 *ta;
    s16 *tb;

    p = (u8 *)&D_801202A0;
    f = 0;
    q = &D_80126B58;
    best = 0x7FFF;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1A3) {
            t = AF(p, s16, 6) - AF(q, s16, 6);
            if (t < 0) {
                t = -t;
            }
            if (best > t) {
                best = t;
                f = p;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
    if (AF(o, s16, 0xFE) != 0) {
        id = 0xBAA;
        ta = D_sc03_113_80187188;
        tb = D_sc03_113_8018718C;
    } else {
        id = 0x704;
        ta = D_sc03_113_80187180;
        tb = D_sc03_113_80187184;
    }
    if (f != 0) {
        k = AF(f, s16, 0x70);
        d = ta[k >> 1] - AF(q, s16, 6);
        if (d < 0) {
            d = -d;
        }
        d -= 0x80;
        e = 0;
        if (d < 0) {
            d = 0;
        }
        y = tb[k >> 1];
        py = AF(q, s16, 0xA);
        if (y > py) {
            e = y - py;
        } else {
            y += D_sc03_113_80187154[k];
            if (y < py) {
                e = py - y;
            }
        }
        sum = d + e;
        if (sum < 0x200) {
            func_8002D4C8(id, (u16)((0x7F - (sum >> 2)) | 0x1000));
            AF(o, s16, 0x84) = 1;
            return;
        }
    }
    if (AF(o, s16, 0x84) != 0) {
        func_8002D4C8(4, id);
        AF(o, s16, 0x84) = 0;
    }
}

void func_sc03_113_8017F6CC(u8 *o) {
    s16 n;
    u8 *q;
    if (AF(o, s16, 0xFE) != 0 && (func_80029178(0xBA) & 0xFF) == 0) {
        for (n = D_sc03_113_80187190[AF(o, s16, 0x70)]; n < D_sc03_113_80187154[AF(o, s16, 0x70)]; n += 0x100) {
            q = (u8 *)func_8012C588(0x1A4, o);
            if (q != 0) {
                if (D_sc03_113_80187164[AF(o, s16, 0x70)] < 0) {
                    AF(q, u16, 0xA) -= n;
                } else {
                    AF(q, u16, 0xA) += n;
                }
            }
        }
        return;
    }
    for (n = 0; n < D_sc03_113_80187154[AF(o, s16, 0x70)]; n += 0x180) {
        q = (u8 *)func_8012C588(0x1A4, o);
        if (q != 0) {
            if (D_sc03_113_80187164[AF(o, s16, 0x70)] < 0) {
                AF(q, u16, 0xA) -= n;
            } else {
                AF(q, u16, 0xA) += n;
            }
        }
    }
    AF(o, s32, 0x1C) = D_sc03_113_8018716C[AF(o, s16, 0x70)];
}

void func_sc03_113_8017F8C8(u8 *arg0) {
    D_sc03_113_801871A8[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017F904(u8 *o) {
    u8 *p;
    AF(o, u16, 0xFE) = AF(o, u16, 0x70) & 0x8000;
    AF(o, u16, 0x70) = AF(o, u16, 0x70) & 3;
    p = (u8 *)func_8012C194(o);
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0x20) = p;
    func_8001CB6C(p, &D_sc03_113_80186FA4, 0x300, 0x100);
    AF(p, u8, 0x27) = 0x64;
    AF(p, u16, 0x30) = D_sc03_113_8018715C[AF(o, s16, 0x70)];
    AF(p, s16, 0x32) = -0x20;
    AF(p, u16, 0x2C) = 0x8004;
    func_sc03_113_8017F6CC(o);
    if (AF(o, s16, 0xFE) != 0 && (func_80029178(0xBA) & 0xFF) == 0) {
        func_8012AD44(o, 2);
        return;
    }
    func_8012AD50(o);
}

void func_sc03_113_8017F9F4(void) {
}

void func_sc03_113_8017F9FC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_113_8019CB18);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_113_80187198 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4400;
    AF(arg0, u8, 0x75) = 8;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - 0x18);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8040);
    if ((AF(AF(arg0, void *, 0x64), s16, 0xFE) != 0) && !(func_80029178(0xBA) & 0xFF)) {
        func_8012AD44(arg0, 2);
        return;
    }
    func_8012AD50(arg0);
}

void func_sc03_113_8017FAD4(u8 *o) {
    u8 *p;
    s16 d;
    u16 a;
    s16 t;
    t = D_sc03_113_80187164[AF(AF(o, u8 *, 0x64), s16, 0x70)];
    a = AF(o, u16, 0xA) + t;
    AF(o, u16, 0xA) = a;
    p = AF(o, u8 *, 0x64);
    d = a - AF(p, u16, 0xA);
    if (d < 0) d = -d;
    if (d >= D_sc03_113_80187154[AF(p, s16, 0x70)]) {
        func_8012C218();
        return;
    }
    if (AF(o, u8, 0x74) != 0) func_8012E014();
}

void func_sc03_113_8017FB88(void) {
}

s32 func_sc03_113_8017FB90(void) {
    return 0x49;
}

void func_sc03_113_8017FB98(void) {
    switch (D_sc03_113_801A5C64) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc03_113_801994F4);
        D_sc03_113_801A59F8 = 0;
        D_sc03_113_801A5C64 += 1;
        return;
    case 1:
        func_sc03_113_8017D174((s32) &D_sc03_113_801A5C80, (s32) &D_sc03_113_801994F4, D_sc03_113_801A59F8, 0);
        D_sc03_113_801A59F8 += 0x14;
        return;
    }
}

void func_sc03_113_8017FC3C(u8 *arg0) {
    s32 temp_v0;

    D_sc03_113_8019CB9C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_113_80180910((s32) arg0);
        }
    }
}

void func_sc03_113_8017FCB8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_113_8019CB30) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *) &D_sc03_113_8019CB74;
        AF(arg0, s32, 0xC4) |= 1;
        AF(arg0, s32, 0xE4) = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc03_113_8019F08C);
        func_80143994(arg0, 0x1000);
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc03_113_8017FD78(u8 *arg0) {
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

void func_sc03_113_8017FEA0(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc03_113_8018084C(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && func_8012BEE8(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc03_113_801808F8(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc03_113_80180010(u8 *arg0) {
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

void func_sc03_113_801801A4(u8 *arg0) {
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

void func_sc03_113_801803F8(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    func_8012B0B4(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc03_113_8018084C(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_113_80180504(u8 *arg0) {
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
        func_sc03_113_8018084C(&sp10, arg0, &D_sc03_113_8019CB6C);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        func_8012B178(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        func_8012CBF4(arg0);
        if (func_sc03_113_80180820(arg0) != one && func_8012BEE8(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc03_113_801806A0(s32 arg0) {
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
        SetScript(arg0, (s32) &D_sc03_113_8019F08C);
    }
}

void func_sc03_113_8018075C(s32 arg0) {
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

void func_sc03_113_801807E8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_113_8019F08C);
}

s32 func_sc03_113_80180820(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_113_8019CBBC, (s32) (&D_sc03_113_8019CBBC + 8), 5) != 0;
}

s32 func_sc03_113_8018084C(s32 *arg0, u8 *arg1, u16 *arg2) {
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

s32 func_sc03_113_801808F8(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_113_80180910(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MT20;
typedef struct { s16 x, y; s32 pad; } SXY8;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern u8 D_sc03_113_8019F1EC;
extern u8 D_sc03_113_801A061C;
extern u8 D_sc03_113_8019F2C0;
extern u8 D_sc03_113_801A5A00[];
extern u8 D_sc03_113_8019F220;
extern u8 D_sc03_113_8019F22C;
extern u8 D_sc03_113_8019F234;
extern u8 D_sc03_113_8019F244;
extern u16 D_sc03_113_8019F248;
extern u8 D_sc03_113_8019F24C;
extern u8 D_sc03_113_8019F258;
extern u8 D_sc03_113_8019F260;
extern u8 D_sc03_113_8019F284;
extern u16 D_sc03_113_8019F288;
extern u8 D_sc03_113_8019F270;
extern u8 D_sc03_113_8019F27C;
extern u8 D_sc03_113_801A5A41[];
extern u8 D_sc03_113_801A5A42;
extern u8 D_sc03_113_801A5A44;
extern void func_8001CA1C();

void func_sc03_113_8018097C(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (func_8012C354(arg0, &D_sc03_113_8019F1EC) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_113_8019F2C0;
        SetScript(arg0, &D_sc03_113_801A061C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc03_113_8019F28C);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_113_801A5A00[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_113_8019F220);
        SetScript(arg0, &D_sc03_113_8019F22C);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_113_8019F234 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_113_8019F244;
        AF(arg0, u16, 0xE) += D_sc03_113_8019F248;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = func_8012C658(0x1EA, 2, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_113_8019F24C);
        SetScript(arg0, &D_sc03_113_8019F258);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_113_8019F260 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_113_8019F284;
        AF(arg0, u16, 0xE) += D_sc03_113_8019F288;
        return;
    case 7:
        if (func_8012C354(arg0, &D_sc03_113_8019F1EC) == 0) {
            return;
        }
        {
            u8 *q = D_sc03_113_801A5A41;
            u8 *r = q - 1;
            D_sc03_113_801A5A42 = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc03_113_801A5A42 = 0;
            D_sc03_113_801A5A44 = 0;
            func_800233CC(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_113_8019F2C0;
        SetScript(arg0, &D_sc03_113_801A061C);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_113_801A5A00[AF(arg0, s16, 0xFC) * 8];
        AF(arg0, s16, 0xFC) = 0;
        q = func_8012C658(0x1EA, 8, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 8:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_113_8019F220);
        SetScript(arg0, &D_sc03_113_8019F22C);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_113_8019F234 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_113_8019F244;
        AF(arg0, u16, 0xE) += D_sc03_113_8019F248;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = func_8012C658(0x1EA, 9, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_113_8019F24C);
        SetScript(arg0, &D_sc03_113_8019F258);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_113_8019F260 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_113_8019F284;
        AF(arg0, u16, 0xE) += D_sc03_113_8019F288;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_113_8019F270);
        SetScript(arg0, &D_sc03_113_8019F27C);
        AF(arg0, s16, 2) = 0xC;
        AF(AF(arg0, s32, 0x20), u16, 0x10) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x10);
        AF(AF(arg0, s32, 0x20), u16, 0x12) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x12);
        AF(arg0, s32, 0x14) = rsin(AF(AF(arg0, s32, 0x20), s16, 0x10)) << 9;
        AF(arg0, s32, 0x10) = -((rsin(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x18) = -((rcos(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 2 / 3;
        AF(arg0, s32, 0x14) = AF(arg0, s32, 0x14) * 2 / 3;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 2 / 3;
        AF(arg0, s32, 0x1C) = 0x12C;
        return;
    case 15:
        if (func_8012C354(arg0, &D_sc03_113_8019F1EC) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_113_8019F2C0;
        SetScript(arg0, &D_sc03_113_801A061C);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_113_801A5A00[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 0x11, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0xFC) = 0xA;
        return;
    case 16:
    case 24:
        AF(arg0, s16, 2) = 0xE;
        AF(arg0, s32, 0x1C) = 6;
        return;
    case 17:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_113_8019F220);
        SetScript(arg0, &D_sc03_113_8019F22C);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_113_8019F234 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_113_8019F244;
        AF(arg0, u16, 0xE) += D_sc03_113_8019F248;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = func_8012C658(0x1EA, 0x12, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
        fail:
            func_8012CAE4(arg0);
            return;
        }
        func_8001CA1C(t, &D_sc03_113_8019F24C);
        SetScript(arg0, &D_sc03_113_8019F258);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_113_8019F260 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_113_8019F284;
        AF(arg0, u16, 0xE) += D_sc03_113_8019F288;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 25:
        AF(arg0, s16, 2) = 0x13;
        return;
    }
}

void func_sc03_113_80181128(u8 *arg0) {
    SV8 out;
    SV8 sv;
    SV8 b;
    s32 t;
    u8 *p;
    u8 *m;
    s32 d;

    if (AF(AF(arg0, u8 *, 0x64), s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(arg0, s16, 0x70) == 1 || AF(arg0, s16, 0x70) == 8) {
        p = AF(arg0, u8 *, 0xCC);
        {
            s32 a = (AF(arg0, u16, 0xFC) + 0x40) & 0xFFF;
            AF(arg0, u16, 0xFC) = a;
            AF(p, s16, 0) = AF(p, s16, 2) = AF(p, s16, 4) = (rsin(a) >> 6) + 0xBF;
        }
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18);
    if (AF(AF(arg0, u8 *, 0x64), s16, 0x70) < 8) {
        AF(arg0, u16, 0x108) = (AF(arg0, u16, 0x108) + 0x40) & 0xFFF;
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12) &= 0xFFF;
        t = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12) - AF(AF(arg0, u8 *, 0x20), s16, 0x12);
        if (t > 0x800) {
            t -= 0x1000;
        }
        if (t < -0x800) {
            t += 0x1000;
        }
        if (t > 0x200) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) += t - 0x200;
        } else if (t < -0x200) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) += t + 0x200;
        } else {
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t / 16;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += rsin(AF(arg0, s16, 0x108)) >> 6;
        m = AF(arg0, u8 *, 0x20);
        RotMatrixZYX(m + 0x10, m + 0x34);
        gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
        gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
        p = AF(arg0, u8 *, 0xD0);
        sv.x = 0;
        sv.y = 0;
        sv.z = (AF(p, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
        RotTransSV(&sv, &out, &t);
        AF(arg0, u16, 6) = out.x;
        AF(arg0, u16, 0xA) = out.y;
        AF(arg0, u16, 0xE) = out.z;
        {
            s32 pad[1];
        }
        out.y -= 0x40;
        b.x = AF(arg0, u16, 6);
        b.y = AF(arg0, u16, 0xA) + 0x10;
        b.z = AF(arg0, u16, 0xE);
        t = func_8012CEB0(&out, &b, 1);
        if (t & 0x1000) {
            return;
        }
        if (t != 0) {
            s32 y = b.y - 0x10;
            d = AF(arg0, s16, 0xA) - y;
            if (d < 5) {
                return;
            }
            if (d > 0x40) {
                d = 0x40;
            }
            AF(AF(arg0, u8 *, 0x20), u16, 0x10) += d << 4;
            m = AF(arg0, u8 *, 0x20);
            RotMatrixZYX(m + 0x10, m + 0x34);
            gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
            gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
            p = AF(arg0, u8 *, 0xD0);
            sv.x = 0;
            sv.y = 0;
            sv.z = (AF(p, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
            RotTransSV(&sv, &out, &t);
            AF(arg0, u16, 6) = out.x;
            AF(arg0, u16, 0xA) = out.y;
            AF(arg0, u16, 0xE) = out.z;
        } else {
            AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x80;
            AF(AF(arg0, u8 *, 0x20), u16, 0x10) &= 0xFFF;
            if (AF(AF(arg0, u8 *, 0x20), u16, 0x10) > 0x800 && AF(AF(arg0, u8 *, 0x20), u16, 0x10) < 0xC00) {
                AF(AF(arg0, u8 *, 0x20), u16, 0x10) = 0xC00;
            }
        }
    } else {
        {
            s32 a = (AF(arg0, u16, 0x102) + AF(arg0, u16, 0x106)) & 0xFFF;
            AF(arg0, u16, 0x102) = a;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = rcos(a) >> 6;
        }
        {
            s32 a = (AF(arg0, u16, 0x104) + AF(arg0, u16, 0x100)) & 0xFFF;
            AF(arg0, u16, 0x104) = a;
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rcos(a) >> 6;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) += 0xC00;
        m = AF(arg0, u8 *, 0x20);
        RotMatrixZYX(m + 0x10, m + 0x34);
        gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
        gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
        p = AF(arg0, u8 *, 0xD0);
        sv.x = 0;
        sv.y = 0;
        sv.z = (AF(p, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
        RotTransSV(&sv, &out, &t);
        AF(arg0, u16, 6) = out.x;
        AF(arg0, u16, 0xA) = out.y;
        AF(arg0, u16, 0xE) = out.z;
    }
}

void func_sc03_113_80181730(u8 *arg0) {
    SV4 a;
    SV4 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    func_8012B1B4(arg0, &D_sc03_113_8019F28C);
    a.x = b.x = AF(arg0, s16, 6);
    y = AF(arg0, s16, 0xA);
    a.y = b.y = y;
    a.z = b.z = AF(arg0, s16, 0xE);
    b.y = y + 0x40;
    s = func_8012CEB0(&a, &b, 1);
    if (s & 0x6000) {
        if (!(s & 0x1000)) {
            s = func_8012BCCC(arg0);
            if (s < 0x4001 && func_8012BDBC(arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 4;
                AF(arg0, s16, 0xFC) = 0;
                AF(arg0, s16, 0x100) = AF(arg0, s16, 0xA);
            }
        }
    }
    if (s > 0x40000) {
        AF(arg0, s16, 2) = 1;
    }
    if (func_8012CC40(arg0, &D_sc03_113_8019F2A8) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc03_113_80181864(u8 *arg0) {
    s32 i;
    u8 *p;
    u8 *next;
    s32 r;
    s16 ang;
    SV8 a;
    SV8 b;

    i = 0;
    if (--AF(arg0, s16, 0xFC) == 0) {
        p = arg0;
        do {
            p = AF(p, u8 *, 0x6C);
            i++;
        } while (p != 0);
        if (i < 7) {
            if (arg0 == 0) {
                return;
            }
            p = arg0;
            for (;;) {
                next = AF(p, u8 *, 0x6C);
                func_8012C218(p);
                p = next;
                if (p == 0) {
                    return;
                }
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += 0x40;
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) &= 0xFFF;
    r = func_8012CC64(arg0, &D_sc03_113_8019F2A8);
    if (r & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
        return;
    }
    i = 0;
    if (r & 0xC000) {
        AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        a.x = AF(arg0, u16, 6) - 0x20;
        a.y = AF(arg0, u16, 0xA) + 0x10;
        a.z = AF(arg0, u16, 0xE) + 0x20;
        b.x = a.x + 0x40;
        b.y = a.y;
        b.z = a.z;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s16, 0x12) = -(rand() & 3) - 4;
            i = 1;
        } else {
            b.x = a.x + 0x40;
            b.y = a.y;
            b.z = a.z;
            if (func_80133784(1, &b, &a) != 0) {
                AF(arg0, s16, 0x12) = (rand() & 3) + 4;
                i = 2;
            }
        }
        a.x = AF(arg0, u16, 6);
        a.y = AF(arg0, u16, 0xA) + 0x10;
        a.z = AF(arg0, u16, 0xE);
        b.x = a.x;
        b.y = a.y;
        b.z = a.z + 0x40;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s16, 0x1A) = -(rand() & 3) - 4;
            i += 4;
        } else {
            b.x = a.x;
            b.y = a.y;
            b.z = a.z + 0x40;
            if (func_80133784(1, &b, &a) != 0) {
                AF(arg0, s16, 0x1A) = (rand() & 3) + 4;
                i += 8;
            }
        }
        switch (i) {
        case 1:
            ang = 0x800;
            break;
        case 2:
            ang = 0;
            break;
        case 4:
            ang = 0x400;
            break;
        case 5:
            ang = 0x600;
            break;
        case 6:
            ang = 0x200;
            break;
        case 8:
            ang = 0xC00;
            break;
        case 9:
            ang = 0xA00;
            break;
        case 10:
            ang = 0xE00;
            break;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ang;
    } else if (r & 0x2000) {
        func_8012E688(arg0, 0x833, 0);
        if ((rand() & 0xF) == 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s16, 0x70) = 0;
            AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
            AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
            AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
            func_8012B23C(arg0);
            func_8012B1B4(arg0, &D_sc03_113_8019F28C);
            for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
                AF(p, s16, 2) = 2;
                AF(p, s16, 0x70) -= 0x10;
                AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
            }
            AF(arg0, s16, 0xFC) = 0;
        } else {
            AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        }
    }
    if (AF(arg0, s16, 0xA) > 0x64) {
        func_8012C218(arg0);
    }
}

void func_sc03_113_80181C24(u8 *arg0) {
    SV out;
    SV in;
    s32 pad[2];
        s32 flag[2];
    u8 *m;
    s16 v;
    s32 a;

    if (AF(AF(arg0, u8 *, 0x64), s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218(arg0);
        return;
    }
    if (AF(arg0, s16, 0x70) == 0x11) {
        m = AF(arg0, u8 *, 0xCC);
        AF(arg0, u16, 0xFC) = (AF(arg0, u16, 0xFC) + 0x40) & 0xFFF;
        a = AF(arg0, u16, 0xFC);
        v = (rsin(a) >> 6) + 0xBF;
        AF(m, s16, 0) = AF(m, s16, 2) = AF(m, s16, 4) = v;
    }
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), TB, 4).top) {
        AF(AF(arg0, u8 *, 0x20), TB, 4).top = 1;
    } else {
        AF(AF(arg0, u8 *, 0x20), TB, 4).top = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x14);
    AF(arg0, u16, 0x102) = (AF(arg0, u16, 0x102) + AF(arg0, u16, 0x106)) & 0xFFF;
    a = AF(arg0, u16, 0x102);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = rcos(a) >> 3;
    AF(arg0, u16, 0x104) = (AF(arg0, u16, 0x104) + AF(arg0, u16, 0x100)) & 0xFFF;
    a = AF(arg0, u16, 0x104);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rcos(a) >> 3;
    RotMatrixZYX(AF(arg0, u8 *, 0x20) + 0x10, AF(arg0, u8 *, 0x20) + 0x34);
    gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
    m = AF(arg0, u8 *, 0xD0);
    in.vx = 0;
    in.vy = 0;
    in.vz = (AF(m, s16, 4) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
    RotTransSV(&in, &out, flag);
    AF(arg0, s16, 6) = out.vx;
    AF(arg0, s16, 0xA) = out.vy;
    AF(arg0, s16, 0xE) = out.vz;
}

void func_sc03_113_80181E68(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_113_8019F2F0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        if ((temp_v1 == 0) || (temp_v1 == 7)) {
            temp_a1 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1 + 0x10, temp_a1 + 0x34);
        }
        if (AF(arg0, s16, 0x70) == 0xF) {
            temp_a1_2 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1_2 + 0x10, temp_a1_2 + 0x34);
        }
        func_8012B260((s32) arg0);
    }
}

void func_sc03_113_80181F18(u8 *arg0) {
    UV4 a;
    UV4 b;
    u8 *o;

    AF(arg0, u16, 0x10A)++;
    if ((AF(arg0, u16, 0x10A) & 7) == 0) {
        o = (u8 *)func_8012913C(0x7B);
        if (o != 0) {
            AF(o, s32, 0x2C) = (AF(arg0, u16, 0x10A) & 0x18) >> 3;
            a.x = AF(arg0, u16, 6);
            a.y = AF(arg0, u16, 0xA);
            a.z = AF(arg0, u16, 0xE);
            b.x = a.x;
            b.y = a.y + 0x80;
            b.z = a.z;
            func_80133784(1, &a, &b);
            if (AF(&b, u8, 6) != 0) {
                AF(o, u16, 6) = AF(arg0, u16, 6);
                AF(o, u16, 0xA) = b.y;
                AF(o, u16, 0xE) = AF(arg0, u16, 0xE);
            } else {
                func_801292C8(o);
            }
        }
    }
}

void func_sc03_113_80181FFC(u8 *arg0) {
    D_sc03_113_8019F340[AF(arg0, u16, 2)]();
}

void func_sc03_113_80182038(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_113_801A5A40);
    }
}

void func_sc03_113_8018209C(u8 *arg0) {
    s16 sp10[6];
    s32 sp20;
    s32 t;

    sp10[1] = AF(D_801151D4, s32, 0x5C);
    sp10[3] = AF(D_801151D4, s32, 0x60);
    sp10[5] = AF(D_801151D4, s32, 0x64);
    func_8012B77C(&sp20, arg0 + 4, sp10);
    t = sp20;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = t;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = t >> 0x10;
    ((void (*)(u8 *)) D_sc03_113_8019F348[AF(arg0, u16, 2)])(arg0);
}

void func_sc03_113_80182130(u8 *arg0) {
    SV4 a;
    SV4 b;
    u8 *p;

    AF(arg0, u16, 0x5C) = 0xA810;
    AF(arg0, s16, 2) = AF(arg0, s16, 0x34);
    a.x = b.x = AF(arg0, s16, 6);
    b.y = AF(arg0, s16, 0xA);
    a.y = b.y - 0x18;
    a.z = b.z = AF(arg0, s16, 0xE);
    func_8012CEB0(&a, &b, 1);
    AF(arg0, s16, 0xA) = b.y - 0x10;
    if (AF(arg0, s16, 0x70) == 0xF) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0x70) = 0;
        AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
        AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
        AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc03_113_8019F28C);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    func_8012B23C(arg0);
    func_8012B1B4(arg0, &D_sc03_113_8019F28C);
}

void func_sc03_113_80182258(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_113_80182288(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_113_801822B4(void) {
}

void func_sc03_113_801822BC(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_8012B1B4(arg0, &D_sc03_113_8019F28C);
    } else if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (func_8012CC40(arg0, &D_sc03_113_8019F2A8) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        func_8012C0EC(arg0);
    }
}

void func_sc03_113_801823A8(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

void func_sc03_113_80182428(u8 *arg0) {
    AF(arg0, s32, 8) += 0x100000;
    AF(arg0, s32, 4) -= rsin(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    AF(arg0, s32, 0xC) -= rcos(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 2) = 6;
        func_8012D5E4((s32) arg0, (s32) &D_sc03_113_8019F298, (s32) &D_sc03_113_8019F2A0, 0xF);
        AF(arg0, s16, 0xFE) = 8;
    }
}

void func_sc03_113_801824DC(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFF80000);
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + (rsin((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7));
    AF(arg0, s32, 0xC) += rcos((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7;
    if (--AF(arg0, s16, 0xFE) == 0) {
        if (func_8012BCCC((s32) arg0) < 0x4001) {
            if (func_8012BDBC((s32) arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 5;
                AF(arg0, u16, 0xFE) = 4U;
                func_8012E688((s32) arg0, 0x98F, 0);
                return;
            }
            goto block_5;
        }
block_5:
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_113_801825BC(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_113_80182624(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012BCCC((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc03_113_80182684(u8 *arg0) {
    s32 sp10;
    u16 temp_v0;

    func_8012B77C((s32) &sp10, arg0 + 4, (s32) &D_80126B5C);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (sp10 >> 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) sp10;
    temp_v0 = AF(arg0, u16, 0xA) - 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) >= 0x81) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0xFC) = 0xC;
    }
    func_sc03_113_80181F18((s32) arg0);
}

void func_sc03_113_80182714(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s16, 2) = 0xB;
    }
    if ((s16) AF(arg0, u16, 0xFC) == 6) {
        func_8012C658(0x1EA, 0xE, (s32) arg0);
        func_8002D4C8(0xC5D, 0);
    }
    func_sc03_113_80181F18((s32) arg0);
}

void func_sc03_113_80182788(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_113_80181F18((s32) arg0);
}

void func_sc03_113_801827D8(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_113_8019F2B0, (s32) &D_sc03_113_8019F2B8, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_113_80182038(arg0);
}

void func_sc03_113_80182858(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (func_8012BE54() <= 0x23FFFF) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = func_8012C658(0x1EA, 0xF, (s32) arg0);
            AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x1F) + 0x2D);
            if ((AF(arg0, s16, 0x70) == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

void func_sc03_113_801828F8(u8 *arg0) {
    s16 temp_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v0;

    AF(arg0, s16, 2) = 2;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 7) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 1) << 9);
        }
    }
    temp_a1 = AF(arg0, s16, 0x70);
    if (temp_a1 >= 8) {
        if (temp_a1 < 0xE) {
            temp_v0_3 = func_8012C658(0x1EA, temp_a1, (s32) arg0);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            }
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc03_113_80181128(arg0);
}

void func_sc03_113_801829C8(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    AF(arg0, s16, 2) = 0x11;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = temp_v0_2;
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 0x11) << 9);
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc03_113_80181C24((s32) arg0);
}

void func_sc03_113_80182A5C(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_113_80182A98(s32 arg0) {
    u8 *p;
    s32 n;
    s32 i;
    s32 t;

    p = (u8 *)&D_801202A0;
    n = 0;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1EA) {
            t = AF(p, s16, 0x70);
            if (t == 0 || t == 7 || t == 0xF) {
                n++;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
    if (n < 2) {
        p = (u8 *)func_8012C658(0x1EA, 0, arg0);
        if (p != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
            AF(p, s16, 6) += (rand() & 0x7F) - 0x40;
            AF(p, s16, 0xE) += (rand() & 0x7F) - 0x40;
        }
    }
}

void func_sc03_113_80182B80(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_113_801A5A80;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_113_80182C44(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_113_801A5A80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc03_113_80182CF8(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x58000000);
    AF(arg0, s32, 0x2C) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_113_80182D38(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}
