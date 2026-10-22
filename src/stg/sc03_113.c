#include "common.h"
#include "gte.h"
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
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017D174);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E728);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E79C);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E878);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017EA8C);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F15C);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F1FC);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F394);

void func_sc03_113_8017F4A0(u8 *arg0) {
    D_sc03_113_80187174[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F4DC);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F6CC);

void func_sc03_113_8017F8C8(u8 *arg0) {
    D_sc03_113_801871A8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F904);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017FAD4);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017FCB8);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80180504);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801806A0);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8018084C);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8018097C);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181C24);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181F18);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8018209C);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801822BC);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80182428);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801824DC);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801828F8);

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

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80182A98);

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
