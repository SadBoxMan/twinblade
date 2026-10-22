#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_014_8017BE9C(void) {
}

void func_sc06_014_8017BEA4(void) {
}

void func_sc06_014_8017BEAC(void) {
}

void func_sc06_014_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_014_80183934[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_014_8018391C;
extern void (*D_sc06_014_8018393C[])();
extern u8 D_sc06_014_80183928;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_014_8017D478(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_014_80183A8C[])();
void func_sc06_014_8017F9FC(void);
void func_sc06_014_8017D4A0(void);
extern void func_800D1EBC();
extern void (*D_sc06_014_80183AA0[])();
extern u8 D_sc06_014_80183AAC;
extern void func_8016EE40();
extern u8 D_sc06_014_80183AB0;
extern void func_sc06_014_8017D5F8();
extern void (*D_sc06_014_80183AB8[])();
extern void func_sc06_014_8017D95C();
extern void (*D_sc06_014_80183BAC[])();
extern void (*D_sc06_014_80199EB4[])();
extern void (*D_sc06_014_80199F30[])();
extern void (*D_sc06_014_80199F6C[])();
extern u8 D_sc06_014_8019C444;
extern void (*D_sc06_014_8019C45C[])();
extern u8 D_sc06_014_8019C464;
extern void (*D_sc06_014_8019C470[])();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_014_80183B08[];
extern s32 func_8013B7F4();

extern void (*D_sc06_014_80183DB4[])();
extern void func_sc06_014_8017E9C0();
extern u8 D_sc06_014_8019E93C;
extern s32 func_sc06_014_8017E9A8();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern s32 func_8012C354();
extern u8 D_sc06_014_8018025C;
extern u8 D_sc06_014_80199E80;
extern u8 D_sc06_014_80199F38;
extern void func_sc06_014_8017ED54();

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
extern u8 D_sc06_014_80183D48;
extern u8 D_sc06_014_80183D8C;
extern void func_80143994();
extern u8 D_sc06_014_80183DCC;
extern s32 func_8012D5E4();
extern void func_8012DFD4();
extern s32 func_sc06_014_8017FE50();
extern void func_80171928();
extern void func_80171990();

extern u16 D_801202A0;
extern u8 D_sc06_014_80183B20;
extern void func_8001D0E8();
extern void func_8012B23C();


extern u8 D_sc06_014_80183EB8;
extern u8 D_sc06_014_80183F94;
extern void func_8002931C();
s32 func_sc06_014_8017D90C(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc06_014_80183FA8;
extern u8 D_sc06_014_80184070;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc06_014_8017BEBC(u8 *obj) {
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

void func_sc06_014_8017CD9C(u8 *arg0) {
    D_sc06_014_80183934[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017CDD8(u8 *a) {
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
    o = func_800D222C(a, &D_sc06_014_8018391C, 0xFD);
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

void func_sc06_014_8017CF9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc06_014_8017D030(u8 *arg0) {
    D_sc06_014_8018393C[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017D06C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc06_014_80183928, 0x18);
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

void func_sc06_014_8017D110(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc06_014_8017D174(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_014_80183EB8;
    D_801274CC = &D_sc06_014_80183F94;
    func_sc06_014_8017D90C(0);
}

void func_sc06_014_8017D1BC(void) {
    func_8002931C(0x01A40000);
    D_801274C8 = &D_sc06_014_80183FA8;
    D_801274CC = &D_sc06_014_80184070;
    func_sc06_014_8017D90C(1);
}

s32 func_sc06_014_8017D204(u8 *arg0) {
    func_sc06_014_8017D478();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_014_8017D248(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_014_8017D26C(u8 *arg0) {
    D_sc06_014_80183A8C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_014_8017D2A8(u8 *arg0) {
    func_sc06_014_8017F9FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_014_8017D2EC(u8 *arg0) {
    func_sc06_014_8017D4A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_014_8017D32C(u8 *arg0) {
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

void func_sc06_014_8017D3A8(void) {
    func_800D1EBC();
}

void func_sc06_014_8017D3C8(u8 *arg0) {
    D_sc06_014_80183AA0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_014_8017D404(u8 *arg0) {
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

void func_sc06_014_8017D478(void) {
    func_8016EE40((s32) &D_sc06_014_80183AAC, 0x01000000);
}

void func_sc06_014_8017D4A0(void) {
    func_8016EE40((s32) &D_sc06_014_80183AB0, 0x01000000);
}

void func_sc06_014_8017D4C8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_014_8017D5F8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_014_8017D5F8((s32) &D_80126948);
}

void func_sc06_014_8017D560(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_014_8017D5F8, 1);
    func_8012A094((s32) &D_80126948);
    func_sc06_014_8017D5F8((s32) &D_80126948);
}

void func_sc06_014_8017D5F8(s32 arg0) {
    D_sc06_014_80183AB8[AF(arg0, u8, 4)]();
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
extern u8 D_80126B58;
extern u8 D_80126940;
extern u8 D_sc06_014_80183AC0[];
extern s32 func_80148800();
extern void func_sc06_014_8017D774();
extern u8 D_sc06_014_80183AC4[];
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

void func_sc06_014_8017D634(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_014_80183AC0)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_014_8017D774((s32) arg0, (s32) &v);
}

void func_sc06_014_8017D6D4(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_014_80183AC4)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc06_014_8017D774((s32) arg0, (s32) &v);
}

void func_sc06_014_8017D774(u8 *arg0, u8 *arg1) {
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

s32 func_sc06_014_8017D90C(s32 arg0) {
    return func_8013B7F4(D_sc06_014_80183B08[arg0], 0);
}

void func_sc06_014_8017D93C(s32 arg0) {
    func_sc06_014_8017D95C(arg0);
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D95C);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D9E8);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DB68);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DC40);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DDE0);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DF08);

void func_sc06_014_8017DFF8(u8 *arg0) {
    D_sc06_014_80183BAC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E034);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E164);

void func_sc06_014_8017E220(u8 *arg0) {
    s32 temp_v0;

    D_sc06_014_80183DB4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc06_014_8017E9C0((s32) arg0);
        }
    }
}

void func_sc06_014_8017E29C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_014_80183D48) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc06_014_80183D8C;
        AF(arg0, s16, 0xFE) = 8;
        AF(arg0, s32, 0xE4) = 0xFFEC0000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SetScript(arg0, (s32) &D_sc06_014_8019E93C);
        func_80143994(arg0, 0x1000);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E32C);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E3B8);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E4B4);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E5C0);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E778);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E80C);

void func_sc06_014_8017E874(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc06_014_8019E93C);
}

s32 func_sc06_014_8017E8AC(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc06_014_80183DCC, (s32) (&D_sc06_014_80183DCC + 8), 0xA) != 0;
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E8D8);

s32 func_sc06_014_8017E9A8(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc06_014_8017E9C0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc06_014_8017EA2C(s32 arg0) {
    s32 var_a0;
    u16 *var_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_014_80183B20) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_014_8018025C);
        AF(arg0, s16, 2) = 4;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s16, 0xAE) = -1;
        func_8012B23C(arg0);
        var_v1 = &D_801202A0;
        var_a0 = 0;
        AF(arg0, u8, 0x75) = 8;
        do {
            if (*var_v1 == 0x2D0) {
                AF(arg0, u16 *, 0xCC) = var_v1;
            }
            var_a0 += 1;
            var_v1 = (u16 *)((u8 *)var_v1 + 0x10C);
        } while (var_a0 < 0x60);
    }
}

void func_sc06_014_8017EADC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) - 4;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((s16) temp_v0 < -0x5FF) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s32, 0x1C) = 0xF;
    }
    func_8012DFD4((s32) arg0);
}

void func_sc06_014_8017EB34(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
    } else {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
    func_8012DFD4((s32) arg0);
}

void func_sc06_014_8017EB78(u8 *arg0) {
    if (AF(AF(arg0, void *, 0xCC), s16, 0xFC) >= 2) {
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017EBA0);

void func_sc06_014_8017EC68(void) {
}

void func_sc06_014_8017EC70(void) {
}

void func_sc06_014_8017EC78(u8 *arg0) {
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x100);
    temp_a1 = AF(arg0, void *, 0x20);
    if ((s16) AF(temp_a1, u16, 0x1A) < 0x81) {
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 0x5C) = 0x8000;
    }
}

void func_sc06_014_8017ECEC(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x100);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) >= 0x2000) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 0x5C) = 0x8000;
    }
}

s32 func_sc06_014_8017ED4C(void) {
    return 0x6E;
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017ED54);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017F178);

void func_sc06_014_8017F4EC(u8 *arg0) {
    D_sc06_014_80199EB4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017F528);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017F670);

void func_sc06_014_8017F820(u8 *arg0) {
    D_sc06_014_80199F30[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017F85C(u8 *arg0) {
    D_sc06_014_80199F6C[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017F898(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_014_80199E80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_014_8018025C);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xE00;
        AF(arg0, s16, 0xFC) = 0x300;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_014_8017F940(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_014_80199F38) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_014_8018025C);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_014_8017F9C4(u8 *arg0) {
    func_sc06_014_8017ED54();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_014_8017F9FC(void) {
    func_8016EE40((s32) &D_sc06_014_8019C444, 0x01000000);
}

void func_sc06_014_8017FA24(u8 *arg0) {
    D_sc06_014_8019C45C[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FA60);

void func_sc06_014_8017FAA8(s32 arg0) {
    if (func_sc06_014_8017FE50() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_014_8017FAE8(void) {
    func_8016EE40((s32) &D_sc06_014_8019C464, 0x01000000);
}

void func_sc06_014_8017FB10(u8 *arg0) {
    D_sc06_014_8019C470[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FB4C);

void func_sc06_014_8017FC54(s32 arg0) {
    if (func_sc06_014_8017FE50() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FC94);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FD74);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FE50);
