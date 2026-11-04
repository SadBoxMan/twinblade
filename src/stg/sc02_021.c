#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_021_8017BE9C(void) {
}

void func_sc02_021_8017BEA4(void) {
}

void func_sc02_021_8017BEAC(void) {
}

void func_sc02_021_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_021_801834CC[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_021_801834B4;
extern void (*D_sc02_021_801834D4[])();
extern u8 D_sc02_021_801834C0;
extern void (*D_sc02_021_8018352C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc02_021_8017D418(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_021_80183534[])();
void func_sc02_021_8017D440(void);
extern void func_800D1EBC();
extern void (*D_sc02_021_80183540[])();
extern u8 D_sc02_021_8018354C;
extern void func_8016EE40();
extern u8 D_sc02_021_80183558;
extern void func_sc02_021_8017D500();
extern void (*D_sc02_021_8018356C[])();
extern void (*D_sc02_021_80183594[])();
extern void (*D_sc02_021_8018359C[])();
extern void (*D_sc02_021_8018389C[])();
extern void (*D_sc02_021_8018393C[])();
extern void (*D_sc02_021_80183944[])();
extern void func_8012AD50();
extern void (*D_sc02_021_80183950[])();
extern void (*D_sc02_021_80183970[])();

void func_sc02_021_8017BEBC(u8 *arg0) {
    D_sc02_021_801834CC[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc02_021_801834B4, 0xFD);
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

void func_sc02_021_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_021_8017C150(u8 *arg0) {
    D_sc02_021_801834D4[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_021_801834C0, 0x18);
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

void func_sc02_021_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern s32 D_sc02_021_80193744;

extern u8 D_sc02_021_80193530;
extern void func_8001CD50();
extern void func_800233CC();
extern void func_801292C8();

extern void func_800D0F4C();
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc02_021_801835A4;
extern u8 D_sc02_021_8018DC00;
extern void func_8012E8E0();

extern s32 D_sc02_021_80183938[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc02_021_8017F2FC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_800D0C74();
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
extern s32 D_sc02_021_80193818;
extern u8 D_sc02_021_80183884;
extern void func_80178CBC();
extern u16 D_80078EAC;
extern u8 D_80078EB0;
extern u8 D_80078EB1;
extern void func_800291F0();
extern void func_80029514();
extern void func_80162714();
extern void * func_sc02_021_8017F1B4();
extern void func_80029124();
extern void func_801788B8();
extern s32 D_sc02_021_80193528;
extern u8 D_sc02_021_801902A0;
extern s32 func_80029504();
extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001C214();


extern u16 D_800B99D8;
extern s32 func_8012913C();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc02_021_8017C294(u8 *obj) {
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

void func_sc02_021_8017D174(u8 *arg0) {
    D_sc02_021_8018352C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_021_8017D1B0(u8 *arg0) {
    func_sc02_021_8017D418();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_021_8017D1F4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_021_8017D218(u8 *arg0) {
    D_sc02_021_80183534[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_021_8017D254(u8 *arg0) {
    func_sc02_021_8017D440();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_021_8017D294(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        func_8002D4C8(4, 0x574);
        func_8002D4C8(0x20, 0);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_021_8017D328(void) {
    func_800D1EBC();
}

void func_sc02_021_8017D348(u8 *arg0) {
    D_sc02_021_80183540[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_021_8017D384(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C74(1);
        func_800D1E28();
        func_8002D4C8(4, 0x574);
        func_8002D4C8(0x20, 0);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_021_8017D418(void) {
    func_8016EE40((s32) &D_sc02_021_8018354C, 0x01000000);
}

void func_sc02_021_8017D440(void) {
    func_8016EE40((s32) &D_sc02_021_80183558, 0x01000000);
}

void func_sc02_021_8017D468(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x384;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_021_8017D500, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_021_8017D500((s32) &D_80126948);
}

void func_sc02_021_8017D500(s32 arg0) {
    D_sc02_021_8018356C[AF(arg0, u8, 4)]();
}

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
extern u8 D_80126B58;
extern s32 func_80148800();
extern s16 D_sc02_021_80183570[];

typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern u16 D_800B99DA;
extern u8 D_sc02_021_801838BC;
extern u8 D_sc02_021_801838D8;
extern u8 D_sc02_021_801838F4;
extern u8 D_sc02_021_80183910;
extern s32 func_8012EFB8();
extern void func_80015954();

extern s32 func_8012BEE8();
extern s32 func_801290DC();
extern void func_8012BF4C();

typedef struct { SV4 p[3]; CV4 c[3]; s32 code; } TriArg;
extern s32 func_8012EF34();
extern void func_80017D98();
extern s32 func_8001739C();
extern SV8 D_sc02_021_80183958;
extern SV8 D_sc02_021_80183960;
extern SV8 D_sc02_021_80183968;
extern s16 D_sc02_021_8018395C;
extern s16 D_sc02_021_80183964;
extern s16 D_sc02_021_8018396C;

extern CV4 D_sc02_021_80191968;
extern CV4 D_sc02_021_8019196C;
extern u8 * func_sc02_021_8017E908();
extern s32 func_sc02_021_8017E608();
extern s32 func_8012DEB8();

extern void func_8001C2C4();
extern s32 D_sc02_021_80192CE0[];
extern s32 D_sc02_021_80192CE4;
extern s32 D_sc02_021_80192CE8;
extern s32 D_sc02_021_80192CEC;
extern s16 D_sc02_021_80192CF0;
extern s16 D_sc02_021_80192CF2;
extern s16 D_sc02_021_80192CF4;
extern s16 D_sc02_021_80192CF6;
extern s32 D_sc02_021_80192CFC;
extern s32 D_sc02_021_80192D00;
extern s32 D_sc02_021_80192D04[];
extern s32 D_sc02_021_80192D08;
extern s32 D_sc02_021_80192D0C;
extern s32 D_sc02_021_80192D10;
extern s16 D_sc02_021_80192D14;
extern s16 D_sc02_021_80192D16;
extern s16 D_sc02_021_80192D18;
extern s16 D_sc02_021_80192D1A;
extern s32 D_sc02_021_80192D1C;
extern s32 D_sc02_021_80192D20;
extern s32 D_sc02_021_80192D24;
extern u8 D_sc02_021_80192D28[];
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern s32 D_80126B9C;
extern s32 func_8012BD14();
extern void func_sc02_021_8017ECFC();
extern s32 func_80029178();
extern void func_8012C218();
extern u8 D_sc02_021_80183574;
extern u8 D_sc02_021_80183584;
extern u16 D_80126B96[];
extern s16 D_80126B98;
extern s32 func_sc02_021_8017DC10();
extern s32 func_sc02_021_8017E4DC();
extern s32 func_sc02_021_8017E734(s32 arg0);
extern void func_sc02_021_8017E824(s32 arg0);

extern u16 D_80126940;
extern s16 D_80126942;
extern s16 D_80126944;
void func_sc02_021_8017D5C8(u8 *p, s16 *q);
void func_sc02_021_8017F6A8(u8 *o);
extern void func_8012931C();
extern s32 D_sc02_021_8018394C;

void func_sc02_021_8017D53C(u8 *o) {
    SV8 v;
    s16 y;
    s16 z;

    v.x = D_80126940;
    y = D_80126942;
    if (y < -0x570) {
        v.y = -0x570;
    } else if (y > -0x3C0) {
        v.y = -0x3C0;
    } else {
        v.y = y;
    }
    z = D_80126944;
    if (z < -0x60) {
        v.z = -0x60;
    } else {
        v.z = z;
    }
    func_sc02_021_8017D5C8(o, &v.x);
}

void func_sc02_021_8017D5C8(u8 *p, s16 *q) {
    WMtx m;
    SV4 v;
    SV4 o;
    u8 t;

    if (func_80148800(&D_80126B58) & 3) {
        t = (AF(p, u8, 5) + 1) & 1;
        AF(p, u8, 5) = t;
        AF(p, s32, 0x14) = D_sc02_021_80183570[t];
    }
    AF(p, s32, 8) = (s16) func_80012C6C(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) func_80012C6C(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = func_80012ABC(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = func_80012ABC(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = func_80012ABC(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = func_80012C6C(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = func_80012C6C(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = func_80012C6C(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + q[0];
    m.t[1] = AF(p, s16, 0x2A) + q[1];
    m.t[2] = AF(p, s16, 0x2C) + q[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc02_021_8017D7A4(void) {
    if (D_sc02_021_80193818 == 0) {
        func_8002D4C8(0x1F, 0);
        D_sc02_021_80193818 = 1;
    }
}

void func_sc02_021_8017D7E0(u8 *arg0) {
    D_sc02_021_80183594[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017D81C(u8 *o) {
    s32 v;
    u8 *p;
    s32 i;

    v = func_8012C1B8();
    AF(o, s32, 0x20) = v;
    if (v == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(v);
    D_sc02_021_80192CE0[0] = -0x680;
    D_sc02_021_80192CE4 = -0xE80;
    D_sc02_021_80192CE8 = -0x350;
    D_sc02_021_80192CEC = -0x680;
    D_sc02_021_80192CF0 = 0x68;
    D_sc02_021_80192CF2 = 0xB;
    D_sc02_021_80192CF4 = 0x36A;
    D_sc02_021_80192CF6 = 0x36A;
    D_sc02_021_80192CFC = 0;
    D_sc02_021_80192D00 = 1;
    D_sc02_021_80192D04[0] = -0x680;
    D_sc02_021_80192D08 = -0xE80;
    D_sc02_021_80192D0C = -0x350;
    D_sc02_021_80192D10 = -0x680;
    D_sc02_021_80192D14 = 0x1F4;
    D_sc02_021_80192D16 = 0x291;
    D_sc02_021_80192D18 = 0x23D;
    D_sc02_021_80192D1A = 0x23D;
    D_sc02_021_80192D20 = 0;
    D_sc02_021_80192D1C = 0;
    D_sc02_021_80192D24 = 0;
    p = D_sc02_021_80192D28;
    for (i = 0; i < 32; i++) {
        p[3] = 0;
        func_800233CC(p, 0x40);
        p += 0x40;
    }
    AF(o, u16, 2)++;
}

void func_sc02_021_8017D980(u8 *o) {
    if (func_sc02_021_8017DC10(D_sc02_021_80192CE0) != 0 && D_sc02_021_80192CE8 + 0x200 < D_sc02_021_80192CE4) {
        D_sc02_021_80192CE0[0] = -0x680;
        D_sc02_021_80192CE4 = -0xF01;
    } else {
        D_sc02_021_80192CE0[0] += 0x20;
        D_sc02_021_80192CE4 += 0x20;
    }
    AF(AF(o, u8 *, 0x20), s32, 0x48) = 0xB;
    AF(AF(o, u8 *, 0x20), s32, 0x4C) = -0x680;
    AF(AF(o, u8 *, 0x20), s32, 0x50) = 0x36A;
    if (func_sc02_021_8017E4DC(o, &D_sc02_021_80183574, D_sc02_021_80192CE0) != 0) {
        D_80126B98 = 0x14;
        D_80126B96[0] |= 0x400;
    }
    if (D_sc02_021_80192CFC != 0) {
        func_sc02_021_8017E734((s32)D_sc02_021_80192CE0);
        func_sc02_021_8017E824((s32)D_sc02_021_80192CE0);
    }
    if (func_sc02_021_8017DC10(D_sc02_021_80192D04) != 0 && D_sc02_021_80192D0C + 0x200 < D_sc02_021_80192D08) {
        D_sc02_021_80192D04[0] = -0x708;
        D_sc02_021_80192D08 = -0xF89;
    } else {
        D_sc02_021_80192D04[0] += 0x20;
        D_sc02_021_80192D08 += 0x20;
    }
    AF(AF(o, u8 *, 0x20), s32, 0x48) = 0x1F4;
    AF(AF(o, u8 *, 0x20), s32, 0x4C) = -0x680;
    AF(AF(o, u8 *, 0x20), s32, 0x50) = 0x23D;
    if (func_sc02_021_8017E4DC(o, &D_sc02_021_80183584, D_sc02_021_80192D04) != 0) {
        D_80126B98 = 0x14;
        D_80126B96[0] |= 0x400;
    }
    if (D_sc02_021_80192D20 != 0) {
        func_sc02_021_8017E734((s32)D_sc02_021_80192D04);
        func_sc02_021_8017E824((s32)D_sc02_021_80192D04);
    }
    if (D_sc02_021_80192CFC == 1 || D_sc02_021_80192D20 == 1) {
        func_8002D4C8(0x574, 0);
    }
    if (D_sc02_021_80192CFC == 0 && D_sc02_021_80192D20 == 0) {
        func_8002D4C8(4, 0x574);
    }
}

extern s32 func_80029204();
extern void func_80162760();
extern void func_80178BF8();
extern u8 func_80172710;

extern s32 func_800D0F8C();
extern void func_80178B18();
extern u8 D_sc02_021_801836A4;
extern u8 D_sc02_021_801836EC;
extern u8 D_sc02_021_8018385C;
extern u8 D_sc02_021_8018371C;

typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void func_sc02_021_8017E410();
extern u8 D_800AF648;

s32 func_sc02_021_8017DC10(u8 *obj) {
    SV8 v[4];
    s32 buf[6];
    s32 z;
    u32 *ot;
    u8 *p;
    s32 y;
    s32 k;
    s32 t;
    s32 n;
    s32 maxx, minx, maxy, miny, x0, x1;
    s32 clip;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    ot = g_WorldOtTable[D_800B9A02];
    p = g_PrimNext;
    if (AF(obj, s32, 4) > AF(obj, s32, 8)) {
        AF(obj, s32, 0x1C) = 0;
        return 1;
    }
    if (AF(obj, s32, 8) < AF(obj, s32, 0)) {
        y = AF(obj, s32, 8) + (AF(obj, s32, 0) - AF(obj, s32, 8)) % 128;
        if (AF(obj, s32, 0) + 0x80 < AF(obj, s32, 8)) k = 0;
        else if (AF(obj, s32, 8) < AF(obj, s32, 4) - 0x80) k = 1;
        else {
            n = y + 0x80;
            if ((AF(obj, s32, 0) - n) / 128 == 0) k = 2;
            else k = 3;
        }
        v[0].x = v[2].x = AF(obj, s16, 0x10);
        v[1].x = v[3].x = AF(obj, s16, 0x12);
        v[0].z = v[2].z = AF(obj, s16, 0x14);
        v[1].z = v[3].z = AF(obj, s16, 0x16);
        y -= 0x80;
        v[0].y = v[1].y = y;
        v[2].y = v[3].y = AF(obj, s16, 8);
        func_sc02_021_8017E410(k, buf);
        t = (AF(obj, s32, 8) - y) * buf[5];
        do { gte_ldv3c(v); } while (0); /* MATCH-TRICK: loop note keeps sched1 from moving the address above mflo */
        gte_rtpt();
        gte_stsxy3(p + 8, p + 0x10, p + 0x18);
        gte_ldv0(&v[3]);
        gte_rtps();
        gte_stsxy(p + 0x20);

        x0 = AF(p, s16, 8); x1 = AF(p, s16, 0x10);
        if (x1 < x0) { maxx = x0; minx = x1; } else { minx = x0; maxx = x1; }
        x0 = AF(p, s16, 0x18);
        if (maxx < x0) maxx = x0; else if (x0 < minx) minx = x0;
        x0 = AF(p, s16, 0x20);
        if (maxx < x0) maxx = x0; else if (x0 < minx) minx = x0;
        x0 = AF(p, s16, 0xA); x1 = AF(p, s16, 0x12);
        if (x1 < x0) { maxy = x0; miny = x1; } else { miny = x0; maxy = x1; }
        x0 = AF(p, s16, 0x1A);
        if (maxy < x0) maxy = x0; else if (x0 < miny) miny = x0;
        x0 = AF(p, s16, 0x22);
        if (maxy < x0) maxy = x0; else if (x0 < miny) miny = x0;
        clip = 0;
        if (maxx < -0xA0 || minx > 0xA0) clip = 1;
        if (maxy < -0x78 || miny > 0x78) clip = 1;
        gte_stszotz(&z);
        if (z > 0 && !clip) {

            AF(p, u32, 4) = 0x808080;
            if (t < 0) {
                AF(p, u8, 3) = 9;
                AF(p, u8, 7) = 0x2E;
            } else if (t > 0) {
                AF(p, u8, 3) = 9;
                AF(p, u8, 7) = 0x2E;
            } else {
                AF(p, u8, 3) = 9;
                AF(p, u8, 7) = 0x2E;
            }
            AF(p, u32, 0xC) = buf[1] | (buf[3] << 8) | buf[2];
            AF(p, u32, 0x14) = buf[0] | (buf[3] << 8) | (buf[2] + buf[4]);
            AF(p, u32, 0x1C) = ((buf[3] + buf[5]) << 8) | buf[2];
            AF(p, u32, 0x24) = ((buf[3] + buf[5]) << 8) | (buf[2] + buf[4]);
            k = z;
            if (AF(obj, s32, 0x20) != 0) k -= 0x40;
            if (k < 0) k = 0;

            ((PTag *)p)->addr = ((PTag *)&ot[k])->addr;
            ((PTag *)&ot[k])->addr = (u32)p;
            p += 0x28;
        }
        if (AF(obj, s32, 0x1C) == 0) AF(obj, s32, 0x1C) = 1;
        else if (AF(obj, s32, 0x1C) == 1) AF(obj, s32, 0x1C) = 2;
    } else {
        y = AF(obj, s32, 0);
    }
    for (;; y -= 0x80) {
        if (AF(obj, s32, 0) - 0x80 < y) k = 0;
        else if (y < AF(obj, s32, 4) + 0x80) k = 1;
        else {
            n = y + 0x80;
            if (((AF(obj, s32, 0) - n) / 128 & 1) == 0) k = 2;
            else k = 3;
        }
        func_sc02_021_8017E410(k, buf);
        if (y < AF(obj, s32, 0xC)) break;
        if (y < AF(obj, s32, 4)) break;
        v[0].x = v[2].x = AF(obj, s16, 0x10);
        v[1].x = v[3].x = AF(obj, s16, 0x12);
        v[0].z = v[2].z = AF(obj, s16, 0x14);
        v[1].z = v[3].z = AF(obj, s16, 0x16);
        v[0].y = v[1].y = y - 0x80;
        v[2].y = v[3].y = y;
        gte_ldv3c(v);
        gte_rtpt();
        gte_stsxy3(p + 8, p + 0x10, p + 0x18);
        gte_ldv0(&v[3]);
        gte_rtps();
        gte_stsxy(p + 0x20);

        x0 = AF(p, s16, 8); x1 = AF(p, s16, 0x10);
        if (x1 < x0) { maxx = x0; minx = x1; } else { minx = x0; maxx = x1; }
        x0 = AF(p, s16, 0x18);
        if (maxx < x0) maxx = x0; else if (x0 < minx) minx = x0;
        x0 = AF(p, s16, 0x20);
        if (maxx < x0) maxx = x0; else if (x0 < minx) minx = x0;
        x0 = AF(p, s16, 0xA); x1 = AF(p, s16, 0x12);
        if (x1 < x0) { maxy = x0; miny = x1; } else { miny = x0; maxy = x1; }
        x0 = AF(p, s16, 0x1A);
        if (maxy < x0) maxy = x0; else if (x0 < miny) miny = x0;
        x0 = AF(p, s16, 0x22);
        if (maxy < x0) maxy = x0; else if (x0 < miny) miny = x0;
        clip = 0;
        if (maxx < -0xA0 || minx > 0xA0) clip = 1;
        if (maxy < -0x78 || miny > 0x78) clip = 1;
        gte_stszotz(&z);
        if (z > 0 && !clip) {

            AF(p, u32, 4) = 0x808080;
            AF(p, u8, 3) = 9;
            AF(p, u8, 7) = 0x2E;
            AF(p, u32, 0xC) = buf[1] | (buf[3] << 8) | buf[2];
            AF(p, u32, 0x14) = buf[0] | (buf[3] << 8) | (buf[2] + buf[4]);
            AF(p, u32, 0x1C) = ((buf[3] + buf[5]) << 8) | buf[2];
            AF(p, u32, 0x24) = ((buf[3] + buf[5]) << 8) | (buf[2] + buf[4]);
            k = z;
            if (AF(obj, s32, 0x20) != 0) k -= 0x40;

            ((PTag *)p)->addr = ((PTag *)&ot[k])->addr;
            ((PTag *)&ot[k])->addr = (u32)p;
            p += 0x28;
        }
    }
    g_PrimNext = p;
    return 0;
}

void func_sc02_021_8017E410(s32 n, s32 *p) {
    switch (n) {
    case 0:
        p[0] = 0x850000;
        p[1] = 0x79C00000;
        p[2] = 0x40;
        p[3] = 0xE0;
        break;
    case 1:
        p[0] = 0x850000;
        p[1] = 0x79C00000;
        p[2] = 0x20;
        p[3] = 0xE0;
        break;
    case 2:
        p[0] = 0x880000;
        p[1] = 0x79C00000;
        p[2] = 0x60;
        p[3] = 0xA0;
        break;
    case 3:
        p[0] = 0x880000;
        p[1] = 0x79C00000;
        p[2] = 0x60;
        p[3] = 0x80;
        break;
    default:
        return;
    }
    p[4] = 0x1F;
    p[5] = 0x1F;
}

s32 func_sc02_021_8017E4DC(u8 *o, u8 *p, u8 *q) {
    s16 d;
    s32 x, y, a, b, c;
    d = AF(q, u16, 0x10) - AF(q, u16, 0x12);
    if (d < 0) d = -d;
    AF(p, s16, 6) = d;
    a = AF(q, s32, 4);
    b = AF(q, s32, 8);
    if (b < a) {
        y = x = b;
    } else {
        x = AF(q, s32, 0);
        c = AF(q, s32, 0xC);
        if (x < c) {
            y = x = c;
        } else {
            if (AF(q, s32, 0x1C) != 0) x = b;
            y = a;
            if (a < c) y = c;
        }
    }
    AF(p, s16, 8) = y - AF(AF(o, u8 *, 0x20), s32, 0x4C);
    AF(p, s16, 0xA) = x - AF(AF(o, u8 *, 0x20), s32, 0x4C);
    if (func_sc02_021_8017E608(o, p, AF(p, s16, 0xC))) return 1;
    if (AF(p, s16, 0xC) != 0) {
        if (func_sc02_021_8017E608(o, p, AF(p, s16, 0xC) >> 1)) return 1;
        if (func_sc02_021_8017E608(o, p, AF(p, s16, 0xE))) return 1;
    }
    return 0;
}

s32 func_sc02_021_8017E608(u8 *o, u8 *p, s32 h) {
    SV8 a, b;
    s16 x = AF(p, s16, 4);
    b.z = h;
    a.z = h;
    a.x = b.x = x;
    a.y = AF(p, s16, 8);
    b.y = AF(p, s16, 0xA);
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.x = b.x = (AF(p, s16, 4) + AF(p, s16, 6)) >> 2;
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.x = b.x = (AF(p, s16, 4) + AF(p, s16, 6)) >> 1;
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.x = b.x = ((AF(p, s16, 4) + AF(p, s16, 6)) >> 2) * 3;
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.x = b.x = AF(p, s16, 6);
    if (func_8012DEB8(o, &a, &b)) return 1;
    return 0;
}

s32 func_sc02_021_8017E734(s32 arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_s3;
    s32 temp_lo;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;

    var_v0 = D_800B99D8 & 3;
    if (var_v0 == 0) {
        var_s3 = ((D_800B99D8 & 4) == 0) << 9;
        var_s2 = 0;
        do {
            temp_v0 = func_8012913C(0x22);
            if (temp_v0 != 0) {
                temp_v1 = AF(arg0, s16, 0x10);
                AF(temp_v0, s16, 6) = (s16) (temp_v1 + ((s32) ((AF(arg0, s16, 0x12) - temp_v1) * var_s3) >> 0xC));
                AF(temp_v0, s16, 0xA) = (s16) AF(arg0, s32, 8);
                temp_v1_2 = AF(arg0, s16, 0x14);
                temp_lo = (AF(arg0, s16, 0x16) - temp_v1_2) * var_s3;
                AF(temp_v0, s16, 0xE) = (s16) (temp_v1_2 + (temp_lo >> 0xC));
                AF(temp_v0, s16, 0x34) = (s16) ((rand() & 0x7F0) + 0x2C00);
                AF(AF(temp_v0, void *, 0x20), u16, 0x2C) = 0xC010;
            }
            var_s2 += 1;
            var_v0 = var_s2 < 4;
            var_s3 += 0x400;
        } while (var_v0 != 0);
    }
    return var_v0;
}

void func_sc02_021_8017E824(s32 arg0) {
    s16 temp_v1;
    s16 var_a0;
    s32 temp_v0;

    if (!(D_800B99D8 & 3)) {
        temp_v0 = func_8012913C(0x37);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) ((s32) (AF(arg0, s16, 0x10) + AF(arg0, s16, 0x12)) >> 1);
            AF(temp_v0, s16, 0xA) = (s16) AF(arg0, s32, 8);
            AF(temp_v0, s16, 0xE) = (s16) ((s32) (AF(arg0, s16, 0x14) + AF(arg0, s16, 0x16)) >> 1);
            temp_v1 = (u16) AF(arg0, s16, 0x10) - (u16) AF(arg0, s16, 0x12);
            var_a0 = temp_v1;
            if ((s16) (temp_v1) < 0) {
                var_a0 = -temp_v1;
            }
            AF(temp_v0, s16, 0x2C) = var_a0;
        }
    }
}

void func_sc02_021_8017E8CC(u8 *arg0) {
    D_sc02_021_8018359C[AF(arg0, u16, 2)]();
}

u8 *func_sc02_021_8017E908(u8 *o) {
    u8 *p = D_sc02_021_80192D28;
    s32 i;
    for (i = 0; i < 0x20; i++, p += 0x40) {
        if (p[3] == 0) {
            return p;
        }
    }
    return 0;
}

void func_sc02_021_8017E940(u8 *o) {
    u8 *s;
    s = func_sc02_021_8017E908(o);
    if (s != 0) {
        func_8001CD50(AF(o, u8 *, 0x20), s);
        AF(s, CV4, 0) = D_sc02_021_80191968;
        AF(s, CV4, 4) = D_sc02_021_8019196C;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = (AF(o, s16, 0x2C) << 12) / 96;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = (AF(AF(o, u8 *, 0x20), s16, 0x18) >> 2) * 3;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), s16, 0x1E) = 0xC00;
        AF(o, u16, 2)++;
    } else {
        func_801292C8(o);
    }
}

void func_sc02_021_8017EA5C(u8 *arg0) {
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x280);
    temp_a0 = AF(arg0, void *, 0x20);
    temp_a1 = AF(temp_v1, void *, 0x20);
    AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x280);
    temp_v1_2 = AF(temp_a1, u8, 1);
    if (temp_v1_2 >= 8U) {
        AF(temp_a1, u8, 1) = (u8) (temp_v1_2 - 8);
    }
    temp_v1_3 = AF(temp_a1, u8, 2);
    if (temp_v1_3 >= 8U) {
        AF(temp_a1, u8, 2) = (u8) (temp_v1_3 - 8);
    }
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x18) >= 0x3801) {
        AF(temp_a1, u8, 3) = 0;
        func_801292C8((s32) arg0, (s32) temp_a1);
    }
}

void func_sc02_021_8017EB00(u8 *o) {
    s32 r;
    s32 n;
    s32 c;
    u8 *p;

    p = &D_80126B58;
    r = func_80029504();
    n = 0;
    if (r >= 0xF0) {
        n = 1;
        if (r >= 0xFA) {
            n = 2;
            if (r >= 0x104) {
                if (r < 0x10E) {
                    n = 3;
                } else {
                    n = 5;
                    if (r < 0x118) {
                        n = 4;
                    }
                }
            }
        }
    }
    switch (n) {
    case 0:
        break;
    case 1:
    case 2:
        if (D_80126B5E > -0x20) {
            D_80126B5E = -0x20;
        }
        if (D_80126B66 < 0x2D7) {
            D_80126B66 = 0x2D7;
        }
        if (!(D_80126B9C & 0x8000000)) {
            c = 0;
        } else {
            c = D_80126B62 < -0x53F;
        }
        if (c && AF(p, s16, 6) >= -0x9F) {
            func_sc02_021_8017ECFC(o);
        }
        break;
    case 3:
    case 4:
        if (func_8012BD14(o) < 0x24000) {
            if (D_80126B5E < -0xA0) {
                D_80126B5E = -0xA0;
            }
            if (D_80126B66 < 0x2D7) {
                D_80126B66 = 0x2D7;
            }
        }
        if (!(D_80126B9C & 0x8000000)) {
            c = 0;
        } else {
            c = D_80126B62 < -0x53F;
        }
        if (c && AF(p, s16, 6) < -0x20) {
            func_sc02_021_8017ECFC(o);
        }
        break;
    case 5:
        if ((u8)func_80029178(0xFA) == 0) {
            func_8012C218(o);
        }
        break;
    }
}

void func_sc02_021_8017ECFC(u8 *o) {
    s32 n;
    s32 k;

    AF(o, s16, 2) = 2;
    n = func_80029504();
    if (n < 0xF0) {
        k = 0;
    } else if (n < 0xFA) {
        k = 1;
    } else if (n < 0x104) {
        k = 2;
    } else if (n < 0x10E) {
        k = 3;
    } else if (n < 0x118) {
        k = 4;
    } else {
        k = 5;
    }
    switch (k) {
    case 0:
        break;
    case 1:
        func_80178B18(o, &D_sc02_021_801836A4);
        break;
    case 2:
        func_80178B18(o, &D_sc02_021_801836EC);
        break;
    case 3:
    case 4:
        if (func_800D0F8C(0x57) != 0) {
            func_80178B18(o, &D_sc02_021_8018385C);
        } else {
            func_80178B18(o, &D_sc02_021_8018371C);
        }
        break;
    case 5:
        break;
    }
}

void func_sc02_021_8017EDE8(u8 *arg0) {
    D_sc02_021_8018389C[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017EE24(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_80178CBC((s32) arg0, (s32) &D_sc02_021_80183884);
}

s32 func_sc02_021_8017EE50(void) {
    return D_sc02_021_80193744 == 1;
}

void func_sc02_021_8017EE68(void) {
    func_800291F0(0, (D_80078EAC * 0x5A0) + (D_80078EB1 * 0x3C) + D_80078EB0);
    func_80029514(0x104);
    func_80162714();
}

void func_sc02_021_8017EED8(s32 arg0, s32 arg1) {
    func_80029514(0xFA, arg1);
}

void func_sc02_021_8017EEF8(s32 arg0, s32 arg1) {
    func_80029514(0x118, arg1);
    func_80029124(0xF9, 1);
    func_80029124(0xFA, 0);
    func_80029124(0x109, 1);
}

void func_sc02_021_8017EF3C(s32 arg0, s32 arg1) {
    func_80029514(0x118, arg1);
    func_80029124(0xF9, 0);
    func_80029124(0xFA, 1);
    func_801788B8(arg0, (s32) &func_sc02_021_8017F1B4);
}

void func_sc02_021_8017EF90(s32 arg0, s32 arg1) {
    func_800D0F4C(0x57, arg1);
}

s32 func_sc02_021_8017EFB0(void) {
    s32 n = func_80029204(0);
    s32 t;
    if (n == 0) {
        return 1;
    }
    func_80162760();
    t = D_sc02_021_80193528;
    if (t < n) {
        t += 0x80520;
    }
    return t - n < 0x2D0;
}

void func_sc02_021_8017F014(void) {
    D_sc02_021_80193528 = (D_80078EAC * 0x5A0) + (D_80078EB1 * 0x3C) + D_80078EB0;
}

void func_sc02_021_8017F064(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012E8E0(arg0, (s32) &D_sc02_021_801835A4);
        SetScript(arg0, (s32) &D_sc02_021_8018DC00);
    }
}

void func_sc02_021_8017F0C4(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = func_80029504();
    var_v1 = 0;
    if (temp_v0 >= 0xF0) {
        var_v1 = 1;
        if (temp_v0 >= 0xFA) {
            var_v1 = 2;
            if (temp_v0 >= 0x104) {
                if (temp_v0 < 0x10E) {
                    var_v1 = 3;
                } else {
                    var_v1 = 5;
                    if (temp_v0 < 0x118) {
                        var_v1 = 4;
                    }
                }
            }
        }
    }
    if ((var_v1 == 0) || (var_v1 == 5)) {
        func_8012CAE4((s32) arg0);
        return;
    }
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc02_021_801902A0);
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc02_021_801835A4);
    SetScript((s32) arg0, (s32) &D_sc02_021_8018DC00);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

void *func_sc02_021_8017F1B4(u8 *o) {
    u8 *p = AF(o, u8 *, 0x64);
    if (AF(p, u16, 2) != 1) {
        return 0;
    }
    if (func_8012BD14(p) < 0x4001) {
        AF(AF(o, u8 *, 0x64), u16, 2) = 3;
        func_80178BF8();
        return &func_80172710;
    }
    return 0;
}

s32 func_sc02_021_8017F220(void) {
    return 0x19;
}

void func_sc02_021_8017F228(u8 *arg0) {
    D_sc02_021_8018393C[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017F264(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc02_021_80183938[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc02_021_8017F2FC((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc02_021_8017F2FC(u8 *arg0) {
    s32 sp10[2];
    CV4 c;
    u8 *o;
    s32 k;

    o = AF(arg0, u8 *, 0x20);
    if (func_8012EFB8(arg0 + 0xFC, sp10) & ~0x1000) {
        AF(o, TB, 4).top = 1;
    } else {
        AF(o, TB, 4).top = 0;
    }
    func_80015954(sp10, arg0 + 4);
    k = (D_800B99DA & 1) * 4;
    c.r = k + 0x40; c.g = k + 0x40;
    c.b = k + 0x60;
    *(CV4 *) &D_sc02_021_801838BC = c;
    *(CV4 *) &D_sc02_021_801838D8 = c;
    *(CV4 *) &D_sc02_021_801838F4 = c;
    *(CV4 *) &D_sc02_021_80183910 = c;
}

void func_sc02_021_8017F40C(u8 *arg0) {
    D_sc02_021_80183944[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017F448(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc02_021_8017F468(u8 *o) {
    SV8 v;
    s16 r;
    s16 d;
    u8 *p;

    if (func_8012BEE8(o) != 0) {
        func_80015978(o + 4, &v);
        if (AF(o, s32, 0xDC) != 0) {
            r = rand() % 352;
            d = r;
            if (r & 1) {
                d = -r;
            }
            v.x += d;
            r = rand() % 256;
            d = r;
            if (r & 1) {
                d = -r;
            }
            v.z += d;
        }
        p = (u8 *)func_801290DC(0x27, &v);
        if (p != 0) {
            func_8012BF4C(o, (rand() & 0x7F) + 0x60);
            AF(p, s16, 0x2E) = AF(o, u16, 0xFC);
        }
    }
}

void func_sc02_021_8017F590(u8 *arg0) {
    D_sc02_021_80183950[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017F5CC(u8 *arg0) {
    AF(arg0, s32, 0x14) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_021_8017F5E4(u8 *o) {
    SV8 v;
    u8 *p;

    func_sc02_021_8017F6A8(o);
    /* a velocity add with zero x / z (the original reloads and stores 0x10 and 0x18) */
    AF(o, s32, 0x10) += 0;
    AF(o, s32, 0x14) += 0xC000;
    AF(o, s32, 0x18) += 0;
    func_8012931C(o);
    if (AF(o, s16, 0x2E) < AF(o, s16, 0xA)) {
        AF(o, s16, 0xA) = AF(o, s16, 0x2E);
        func_80015978(o + 4, &v);
        p = (u8 *)func_801290DC(0x28, &v);
        if (p != 0) {
            AF(p, s32, 0x2C) = D_sc02_021_8018394C++ & 7;
        }
        func_8002D4C8(0x572, 0);
        func_801292C8(o);
    }
}

void func_sc02_021_8017F6A8(u8 *o) {
    TriArg t;
    SV8 pos;
    SV8 scr;
    SV8 s0, s1, s2;
    u8 unused[8];
    WMtx m;
    s32 otz;
    s32 flag;

    func_80015978(o + 4, &pos);
    if (func_8012EF34(&pos, &scr) & ~0x1000) {
        return;
    }
    gte_stszotz(&otz);
    D_sc02_021_8018396C = D_sc02_021_80183964 = D_sc02_021_8018395C = scr.z;
    func_80017D98(&m);
    m.t[0] = m.t[1] = m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(&D_sc02_021_80183958, &D_sc02_021_80183960, &D_sc02_021_80183968);
    gte_rtpt();
    gte_stsxy3(&s0, &s1, &s2);
    gte_stflg(&flag);
    if (flag < 0) {
        return;
    }
    t.c[0].r = t.c[0].g = t.c[0].b = 0xC0;
    t.c[1].r = t.c[1].g = 0x20;
    t.c[1].b = 0x40;
    t.c[2].r = t.c[2].g = 0x20;
    t.c[2].b = 0x40;
    t.code = 0x50000000;
    t.p[0].x = s0.x + scr.x;
    t.p[0].y = s0.y + scr.y;
    t.p[1].x = s1.x + scr.x;
    t.p[1].y = s1.y + scr.y;
    t.p[2].x = s2.x + scr.x;
    t.p[2].y = s2.y + scr.y;
    t.p[0].z = otz;
    func_8001739C(&t);
    t.p[1].y = -s1.y + scr.y;
    func_8001739C(&t);
    t.p[2].x = -s2.x + scr.x;
    func_8001739C(&t);
    t.p[1].y = s1.y + scr.y;
    func_8001739C(&t);
}

void func_sc02_021_8017F8C8(u8 *arg0) {
    D_sc02_021_80183970[AF(arg0, u16, 2)]();
}

void func_sc02_021_8017F904(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc02_021_80193530;
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

void func_sc02_021_8017F9C8(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc02_021_80193530;
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
