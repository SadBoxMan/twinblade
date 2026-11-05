#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_112_8017BE9C(void) {
}

void func_sc03_112_8017BEA4(void) {
}

void func_sc03_112_8017BEAC(void) {
}

void func_sc03_112_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_112_8018912C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_112_80189114;
extern void (*D_sc03_112_80189134[])();
extern u8 D_sc03_112_80189120;
extern void (*D_sc03_112_8018958C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_112_8017E01C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_112_80189594[])();
void func_sc03_112_8017E044(void);
extern void func_800D1EBC();
extern void (*D_sc03_112_801895A0[])();
extern u8 D_sc03_112_801895AC;
extern void func_8016EE40();
extern u8 D_sc03_112_801895B8;
extern void func_sc03_112_8017E124();
extern void (*D_sc03_112_801895CC[])();
extern void (*D_sc03_112_801896A4[])();
extern void (*D_sc03_112_80189708[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_112_80185A54;
extern u8 D_sc03_112_801896BC;
extern s32 * func_sc03_112_8017F4D8();
extern void func_80178CBC();
extern u8 D_sc03_112_801896F0;
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc03_112_801A8BF4[])();
extern void (*D_sc03_112_801AA244[])();

void func_sc03_112_8017BEBC(u8 *arg0) {
    D_sc03_112_8018912C[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_112_80189114, 0xFD);
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

void func_sc03_112_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_112_8017C150(u8 *arg0) {
    D_sc03_112_80189134[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_112_80189120, 0x18);
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

void func_sc03_112_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern u8 D_sc03_112_801A7AAC;
extern void func_8012C218();
extern void func_80016714();

extern s32 func_8012C044();
extern void (*D_sc03_112_801A2F10[])();
extern void func_sc03_112_80180FC0();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc03_112_801A4B68;
extern u8 D_sc03_112_801A7C94;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc03_112_801A7E44;
extern void func_sc03_112_80180C1C();
extern s16 D_80126CE0;
extern u8 D_sc03_112_801A6518;
extern u8 D_sc03_112_801A817C;
extern void (*D_sc03_112_801A8BA4[])();
extern void func_8012B260();
extern void func_sc03_112_801842B4();
extern void func_8001CD50();
extern u8 D_sc03_112_801ACEA0;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_112_80184194();
extern s32 func_8012C658();
extern void func_8002D4C8();
extern u8 D_sc03_112_801A8B64;
extern u8 D_sc03_112_801A8B6C;
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s32 func_8012BE54();
extern void func_sc03_112_80183EA0();
extern u8 D_sc03_112_801ACEE0;
extern void func_800233CC();
extern void func_801292C8();

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
extern u16 D_801269E8;
extern u16 D_sc03_112_801ACE50;
extern void func_8012A018();
extern void func_8012A094();
extern void (*D_sc03_112_8018967C[])();
extern void func_8012B2CC();
extern u8 D_sc03_112_8019AA74;
extern s32 D_sc03_112_801ACE58;
extern s32 D_sc03_112_801AD0C4;
extern u8 D_sc03_112_801AD0E0;
extern void func_8013C0F8();
extern void func_sc03_112_8017D174();
extern u8 D_sc03_112_801A2E04;
extern u8 D_sc03_112_801A2E38;
extern void func_80143970();
extern void func_sc03_112_801809A0();
extern s32 func_sc03_112_80180AE4();
extern u16 D_800B99DA;
extern void func_80130D48();
extern void (*D_sc03_112_801A83E8[])();
extern void func_sc03_112_80182944();
extern s32 func_sc03_112_8018290C();
extern void func_8012B23C();
extern void func_8012B178();
extern s16 D_80126B96;
extern u16 D_80126B9A;
extern void func_8012AD80();
extern s32 func_8012D624();
extern void func_8012B21C();
extern void func_8012E88C();
extern s32 func_80143994();
extern u8 D_sc03_112_801A82E8;
extern void func_sc03_112_80182708();
extern void func_8012B030();
extern void func_8012E8C4();
extern void func_sc03_112_80182A28();
extern void func_8002A04C();
extern void func_sc03_112_80182858();
extern s32 func_8012C098();

extern void func_800D0C48();
extern void func_800D1E28();


extern void func_80131E00();
extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();


extern s32 func_8012BD3C();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_112_8017C294(u8 *obj) {
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
extern s32 func_sc03_112_8017F998();
extern s32 func_sc03_112_8017F8DC();

extern void func_80128ED8();
extern s32 func_80132EF4();
extern void func_sc03_112_801855BC();

extern u8 D_sc03_112_801A8B40;
extern void func_8012B1B4();

extern u8 D_sc03_112_801A8B5C;
extern s32 func_8012BDBC();
extern s32 func_8012CC40();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern s32 func_sc03_112_80180A78();

extern s32 func_8012B608();
extern void func_80143B6C();
extern s32 func_8012CBCC();
extern u8 D_sc03_112_801A8340;
extern void func_8012DBD0();
extern s32 func_8012CC64();
extern s32 func_8012CC1C();
extern void func_80131C78();
extern s32 func_80133784();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

extern u8 D_sc03_112_801A827C;
extern u8 D_sc03_112_801A82B0;
extern u8 D_sc03_112_801A82F8;
extern u8 D_sc03_112_801A8348;
extern s32 func_8012C194();
extern void func_8001CD9C();
extern void func_8012E8A8();
extern void func_8012EFB8();

extern u16 D_80126CAC;
extern s16 D_sc03_112_80189674[];
extern void func_8002D59C();



typedef struct { u8 a, b; } B2;
typedef struct { u8 type; u8 kind; s16 a[2]; s16 b[2]; s16 x; s16 z; } E14;
extern s32 func_sc03_112_8017E654();
extern s32 func_sc03_112_8017E70C();
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
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void func_80013F3C();
extern s16 D_sc03_112_801A25F4[];
extern u8 D_80078E78;
extern u8 D_sc03_112_801A7D84;
extern void func_sc03_112_80180BE0();
extern u8 D_sc03_112_801A4B78;
extern void func_sc03_112_8018567C();
extern u8 D_sc03_112_801A825C;
extern u8 *func_80143BDC();
extern s32 func_8014CB1C();
typedef struct { s16 h; u8 a, b, c; u8 pad[11]; } Col16;
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void func_8012B200();
extern void func_8012B14C();
extern void func_8012E9C0();
extern u8 D_sc03_112_801A8410;
extern u8 D_sc03_112_801A8420;
extern u8 D_sc03_112_801A8430;
extern u8 D_sc03_112_801A8440;
extern u8 D_sc03_112_801A8450;
extern void func_801439C0();
extern u8 D_800AF630;
extern u8 D_sc03_112_801A8338;
extern s32 func_8012C51C();
extern u8 D_sc03_112_801A82BE;
extern s8 D_sc03_112_801A82F9;
extern s8 D_sc03_112_801A82FA;
extern void *D_sc03_112_801A8BFC[];
extern void *D_801151D4;
extern s32 func_8012BE98();
extern s32 func_8012B744();
extern void func_8012C0EC();
extern u8 D_sc03_112_801A8B4C;
extern u8 D_sc03_112_801A8B54;
extern void func_8012CAE4();
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_sc03_112_801AA1F8;
extern u8 D_sc03_112_801AA204;
extern s32 func_sc03_112_80185564();
extern void func_8012F14C();
extern void func_8012EC04();

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
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

extern u8 D_sc03_112_801A2F40;
extern s32 func_8012BD14();
extern void func_8012F568();

extern s16 D_80126B98;
extern u8 D_sc03_112_80189694;
extern void func_sc03_112_8017EBE4();
extern void func_sc03_112_8017EE48();
extern s32 func_sc03_112_8017EFAC();
extern s32 func_8012DEB8();

extern s32 func_8012C1B8();
extern void func_8001C810();
extern void func_8001C2C4();
extern void func_8001C1E4();
extern void func_8012AD50();
extern u8 D_sc03_112_801A2414;
extern u8 D_sc03_112_801A20C4;
extern u8 D_sc03_112_80189684;
extern s32 func_80148800();
extern u8 D_80126B58;
extern SV8 D_80126940;
extern void *D_80126B78;
extern s16 D_sc03_112_80189640[];
extern u8 D_sc03_112_801895D0;
extern s32 func_80012DBC();
extern s32 rsin();
extern s32 rcos();
extern s32 func_sc03_112_8017E4B4();
void func_sc03_112_8017E2E8(s32 arg0, s32 arg1, s32 arg2);
s32 func_sc03_112_8017E7C4(s16 *arg0, s16 *arg1, s16 *arg2);
extern s32 ratan2();

extern s32 D_80126B60;
extern s32 D_80126B64;
extern SV8 D_sc03_112_801AB984;
extern s16 D_sc03_112_8018968C[];
extern void func_8012F0BC();
extern void func_8012F1A4();
extern s32 func_80132784();

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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef void (*StepFn)(void);
extern u8 func_80172710;
extern void func_80178BF8();

extern u16 D_sc03_112_80189644[][8];
extern void func_8001C214();
extern u8 D_sc03_112_801A1D6C;
extern u8 D_sc03_112_801A25EC;
extern void func_sc03_112_8017E9A0();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern u16 D_sc03_112_8018913C[];

void func_sc03_112_8017D174(u8 *obj, u8 *hdr, s32 ph, s32 dy) {
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
            v[0].y += D_sc03_112_8018913C[(v[0].z + p) & 0x1FF] + D_sc03_112_8018913C[(v[0].x + half) & 0x1FF];
            v[1].y += D_sc03_112_8018913C[(v[1].z + p) & 0x1FF] + D_sc03_112_8018913C[(v[1].x + half) & 0x1FF];
            v[2].y += D_sc03_112_8018913C[(v[2].z + p) & 0x1FF] + D_sc03_112_8018913C[(v[2].x + half) & 0x1FF];
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
                v[3].y += D_sc03_112_8018913C[(v[3].z + p) & 0x1FF] + D_sc03_112_8018913C[(v[3].x + half) & 0x1FF];
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

void func_sc03_112_8017DDD8(u8 *arg0) {
    D_sc03_112_8018958C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_112_8017DE14(u8 *arg0) {
    func_sc03_112_8017E01C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_112_8017DE58(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_112_8017DE7C(u8 *arg0) {
    D_sc03_112_80189594[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_112_8017DEB8(u8 *arg0) {
    func_sc03_112_8017E044();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_112_8017DEF8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1D, 0, arg2);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_112_8017DF60(void) {
    func_800D1EBC();
}

void func_sc03_112_8017DF80(u8 *arg0) {
    D_sc03_112_801895A0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_112_8017DFBC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1D, 0, arg2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_112_8017E01C(void) {
    func_8016EE40((s32) &D_sc03_112_801895AC, 0x01000000);
}

void func_sc03_112_8017E044(void) {
    func_8016EE40((s32) &D_sc03_112_801895B8, 0x01000000);
}

void func_sc03_112_8017E06C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_112_8017E124, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_112_8017E124((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc03_112_801ACE50 = D_801269E8;
}

void func_sc03_112_8017E124(s32 arg0) {
    D_sc03_112_801895CC[AF(arg0, u8, 4)]();
}

void func_sc03_112_8017E160(u8 *o) {
    SV8 v;
    SV8 w;
    s16 r;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_112_80189640[AF(o, u8, 5)];
    }
    v = D_80126940;
    if (v.y > -0x100) {
        v.y = -0x100;
    }
    if (v.z < -0x3C0) {
        v.z = -0x3C0;
    }
    w.x = v.x - rsin(AF(D_80126B78, s16, 0x12)) / 128;
    w.z = v.z - rcos(AF(D_80126B78, s16, 0x12)) / 128;
    w.y = v.y;
    r = func_sc03_112_8017E4B4(&D_sc03_112_801895D0, &v, &w);
    r = func_80012DBC((s16)D_sc03_112_801ACE50, AF(o, s16, 0xA0) = r, 4, 1);
    D_sc03_112_801ACE50 = r;
    func_sc03_112_8017E2E8((s32)o, r, (s32)&v);
}

void func_sc03_112_8017E2E8(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;
    SV a;
    u16 o[4];
    SV r;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
    r.vx = AF(arg0, s16, 0x18);
    r.vy = AF(arg0, s16, 0x1A) + arg1;
    r.vz = AF(arg0, s16, 0x1C);
    func_sc03_112_8017F6F8(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

s32 func_sc03_112_8017E4B4(E14 *e, s16 *p, s16 *c) {
    s32 r;
    s16 t;

    for (;; e++) {
        t = e->type;
        switch (t) {
        case 0:
            r = func_sc03_112_8017E654(e->a, e->b, p);
            break;
        case 1:
            r = func_sc03_112_8017E70C(e->a, e->b, p);
            break;
        case 2:
            r = func_sc03_112_8017E7C4(e->a, e->b, p);
            break;
        case 0xFF:
            r = 0;
            break;
        }
        if (r == 0) {
            t = e->kind;
            switch (t) {
            case 0:
                return ratan2(c[0] - e->x, c[2] - e->z) & 0xFFF;
            case 1:
                return ratan2(e->x - c[0], e->z - c[2]) & 0xFFF;
            case 2:
                return 0x800;
            case 3:
                return 0x400;
            }
        }
    }
}

s32 func_sc03_112_8017E654(s16 *a, s16 *b, s16 *c) {
    s16 cx, cz, ax, ay, bx, by;
    s32 r;
    union { struct { s16 x, y; } s; s32 l; } p0, p1, p2;

    cx = c[0];
    ax = a[0];
    if (cx < ax) {
        r = 0;
    } else {
        bx = b[0];
        if (bx < cx) {
            r = 1;
        } else {
            cz = c[2];
            by = b[1];
            if (cz < by) {
                r = 0;
            } else {
                ay = a[1];
                if (ay < cz) {
                    r = 1;
                } else {
                    p0.s.x = ax;
                    p0.s.y = ay;
                    p1.s.x = bx;
                    p1.s.y = by;
                    p2.s.x = cx;
                    p2.s.y = cz;
                    r = NormalClip(p0.l, p1.l, p2.l) >= 0;
                }
            }
        }
    }
    return r;
}

s32 func_sc03_112_8017E70C(s16 *a, s16 *b, s16 *c) {
    s16 cx, cz, ax, ay, bx, by;
    s32 r;
    union { struct { s16 x, y; } s; s32 l; } p0, p1, p2;

    cx = c[0];
    bx = b[0];
    if (cx < bx) {
        r = 0;
    } else {
        ax = a[0];
        if (ax < cx) {
            r = 1;
        } else {
            cz = c[2];
            ay = a[1];
            if (cz > ay) {
                r = 0;
            } else {
                by = b[1];
                if (cz < by) {
                    r = 1;
                } else {
                    p0.s.x = ax;
                    p0.s.y = ay;
                    p1.s.x = bx;
                    p1.s.y = by;
                    p2.s.x = cx;
                    p2.s.y = cz;
                    r = NormalClip(p0.l, p1.l, p2.l) >= 0;
                }
            }
        }
    }
    return r;
}

s32 func_sc03_112_8017E7C4(s16 *arg0, s16 *arg1, s16 *arg2) {
    if (arg2[0] < arg0[0] || arg1[0] < arg2[0] || arg2[2] < arg0[1]) {
        return 1;
    }
    return arg1[1] < arg2[2];
}

void func_sc03_112_8017E81C(u8 *p) {
    s16 d;
    s16 t;
    s16 v;

    d = AF(p, u16, 6) - D_80126CAC;
    if (d < 0) {
        d = -d;
    }
    if (d > 0x800) {
        AF(AF(p, u8 *, 0x20), u32, 4) |= 0x80000000;
    } else {
        AF(AF(p, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
        AF(AF(p, u8 *, 0x20), u16, 0x14) += D_sc03_112_80189674[AF(p, s16, 0x70)];
    }
    t = d - 0x140;
    if (t < 0) {
        v = 0x7F;
    } else if (t >= 0x200) {
        v = 0;
    } else {
        v = 0x7F - (t >> 2);
    }
    if (v == 0) {
        if (AF(p, s16, 0x84) != 0) {
            func_8002D59C(4, 0x6DD, AF(p, u16, 0x70));
            AF(p, s16, 0x84) = 0;
        }
    } else {
        func_8002D59C(0x6DD, (v | 0x1000) & 0xFFFF, AF(p, u16, 0x70));
        AF(p, s16, 0x84) = 1;
    }
}

void func_sc03_112_8017E950(u8 *arg0) {
    D_sc03_112_8018967C[AF(arg0, u16, 2)]();
    func_8012B2CC((s32) arg0);
}

void func_sc03_112_8017E9A0(u8 *o) {
    s32 i;

    for (i = 0; i < 8; i++) {
        func_8012C658(0x19B, (s16) ((i << 9) + D_sc03_112_80189644[AF(o, s16, 0x70)][i]), o);
    }
}

void func_sc03_112_8017EA24(u8 *o) {
    s32 r;
    s16 v;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    v = AF(o, u16, 0x70) & 3;
    AF(o, s16, 0xFE) = v;
    switch (v) {
    case 0:
        func_8001C810(AF(o, s32, 0x20), &D_sc03_112_801A2414);
        AF(AF(o, u8 *, 0x20), u32, 4) |= 0x8040;
        func_8012C658(0x19B, 2, o);
        break;
    case 1:
        func_8001C810(AF(o, s32, 0x20), &D_sc03_112_801A20C4);
        AF(AF(o, u8 *, 0x20), u32, 4) |= 0x8040;
        func_8012C658(0x19B, 3, o);
        break;
    case 2:
    case 3:
        func_8001C2C4(AF(o, s32, 0x20));
        func_8001C1E4(AF(o, s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x20));
        AF(o, s16, 0xA) = 0x90;
        AF(o, s32, 0x58) = (s32)&D_sc03_112_80189684 | 0x40000000;
        AF(o, s16, 0x5C) = 0x4400;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xE) = 0;
        AF(o, u8, 0x75) = 4;
        break;
    }
    if (AF(o, s16, 0xFE) == 3) {
        AF(o, s32, 0x58) = (s32)&D_sc03_112_80189694 | 0x40000000;
    }
    AF(o, s16, 0x100) = AF(o, u16, 0x70) & 0xFF0;
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x8000;
    func_8012AD50(o);
}

void func_sc03_112_8017EBA8(u8 *arg0) {
    D_sc03_112_801896A4[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017EBE4(u8 *o) {
    u8 unused[16];
    SV8 v;
    V4 a;
    V4 r;
    V4 b;
    WMtx m;
    s32 flag;
    u8 *g;
    s32 i;

    m = *(WMtx *)(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
    g = &D_80126B58;
    if (AF(o, u16, 0xFE) < 2) {
        v = D_sc03_112_801AB984;
        RotMatrixZ(AF(o, s16, 0x100), &m);
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        gte_ldv0(&v);
        gte_rtv0tr();
        gte_stlvnl(&r);
        gte_stflg(&flag);
        AF(o, s16, 6) = r.x;
        AF(o, s16, 0xA) = r.y;
        AF(o, s16, 0xE) = r.z;
    } else {
        if (AF(o, u8, 0x74) != 0) {
            a.x = *(s32 *)&D_80126B5C;
            a.y = D_80126B60;
            a.z = D_80126B64;
            func_8012F0BC(AF(o, u8 *, 0x20) + 0x34, &a, &b);
            if (AF(o, s16, 0xA) >= -0xFF && AF(o, u8, 0x102) == 0) {
                AF(AF(o, u8 *, 0x64), s32, 0xE0) += b.x >> 2;
            }
        }
        func_80132784(o, AF(o, u8 *, 0x64), 0);
        if (AF(o, u8, 0x74) != 0) {
            i = AF(o, s16, 0xFE) == 3;
            b.y = (D_sc03_112_8018968C[i * 8] - 1) << 16;
            func_8012F1A4(AF(o, u8 *, 0x20) + 0x34, &b, &r);
            AF(g, s32, 4) = r.x;
            AF(g, s32, 8) = r.y;
            AF(g, s32, 0xC) = r.z;
        }
    }
}

void func_sc03_112_8017EE48(u8 *o) {
    s32 lim;
    s32 v;
    s16 de;

    if (AF(o, s16, 0xA) >= -0xFF) {
        if (D_sc03_112_80189674[AF(AF(o, u8 *, 0x64), s16, 0x70)] == 0) {
            return;
        }
        lim = 0x100;
        if (AF(o, s16, 0xFE) == 0) {
            lim = 0xA0;
        }
        AF(o, s32, 0xE0) = 0;
        if (D_sc03_112_80189674[AF(AF(o, u8 *, 0x64), s16, 0x70)] > 0) {
            if (AF(o, s16, 0xDE) > -lim) {
                AF(o, s16, 0xDE) -= 8;
            }
        } else {
            if (AF(o, s16, 0xDE) < lim) {
                AF(o, s16, 0xDE) += 8;
            }
        }
    } else {
        de = AF(o, s16, 0xDE);
        if (de < -2) {
            AF(o, s32, 0xE0) += 0x20000;
        } else if (de >= 3) {
            AF(o, s32, 0xE0) -= 0x20000;
        }
        v = AF(o, s32, 0xE0);
        if (v < 0) {
            AF(o, s32, 0xE0) = v + 0x8000;
            if (v + 0x8000 > 0) {
                AF(o, s32, 0xE0) = 0;
            }
        } else if (v > 0) {
            AF(o, s32, 0xE0) = v - 0x8000;
            if (v - 0x8000 < 0) {
                AF(o, s32, 0xE0) = 0;
            }
        }
        AF(o, s32, 0xDC) += AF(o, s32, 0xE0);
    }
    AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(o, s16, 0xDE);
}

s32 func_sc03_112_8017EFAC(u8 *o, u8 *p) {
    SV8 a, b;
    s16 mid;

    if (AF(o, u8, 0x74) != 0) {
        a.x = b.x = AF(p, s16, 4);
        a.y = b.y = AF(p, s16, 8) - 0x10;
        a.z = AF(p, s16, 0xC);
        b.z = AF(p, s16, 0xE);
        if (func_8012DEB8(o, &a, &b)) {
            return 1;
        }
        mid = (AF(p, s16, 4) + AF(p, s16, 6)) >> 1;
        a.x = b.x = mid;
        if (func_8012DEB8(o, &a, &b)) {
            return 1;
        }
        a.x = b.x = (AF(p, s16, 4) + mid) >> 1;
        if (func_8012DEB8(o, &a, &b)) {
            return 1;
        }
        a.x = b.x = (AF(p, s16, 6) + mid) >> 1;
        if (func_8012DEB8(o, &a, &b)) {
            return 1;
        }
        a.x = b.x = AF(p, s16, 6);
        if (func_8012DEB8(o, &a, &b)) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_112_8017F0F4(u8 *o) {
    s32 t;
    u8 *s;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C810(t, &D_sc03_112_801A1D6C);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x1800180;
    s = (u8 *) func_8012C1B8();
    if (s != 0) {
        func_8001C214(s, &D_sc03_112_801A25EC);
        AF(s, s16, 8) = AF(o, s16, 6);
        AF(s, s16, 0xA) = AF(o, s16, 0xA) + 0x80;
        AF(s, s16, 0xC) = AF(o, s16, 0xE) - 0xC0;
    }
    func_sc03_112_8017E9A0(o);
    func_8012AD50(o);
}

void func_sc03_112_8017F1CC(u8 *o) {
    s16 d;

    if (AF(o, u16, 0xFE) < 2) {
        d = AF(o, u16, 6) - D_80126CAC;
        if (d < 0) {
            d = -d;
        }
        if (d > 0x800) {
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            return;
        }
        func_sc03_112_8017EE48(o);
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_sc03_112_8017EBE4(o);
        return;
    }
    if (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 4) < 0) {
        AF(o, s16, 0x5C) = 0;
        return;
    }
    AF(o, u16, 0x5C) |= 0x4400;
    func_sc03_112_8017EBE4(o);
    if (AF(o, s16, 0xFE) == 3 && func_sc03_112_8017EFAC(o, &D_sc03_112_80189694)) {
        D_80126B96 = 0x6001;
        D_80126B98 = 0x10;
    }
    AF(o, u8, 0x102) = AF(o, u8, 0x74);
}

s32 func_sc03_112_8017F30C(void) {
    return 0x49;
}

void func_sc03_112_8017F314(void) {
    switch (D_sc03_112_801AD0C4) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc03_112_8019AA74);
        D_sc03_112_801ACE58 = 0;
        D_sc03_112_801AD0C4 += 1;
        return;
    case 1:
        func_sc03_112_8017D174((s32) &D_sc03_112_801AD0E0, (s32) &D_sc03_112_8019AA74, D_sc03_112_801ACE58, 0);
        D_sc03_112_801ACE58 += 0x14;
        return;
    }
}

void func_sc03_112_8017F3B8(u8 *arg0) {
    D_sc03_112_80189708[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017F3F4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_112_801896BC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_112_80185A54);
        func_801788B8(arg0, (s32) &func_sc03_112_8017F4D8);
    }
}

void func_sc03_112_8017F458(void) {
}

void func_sc03_112_8017F460(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc03_112_801896F0);
    AF(arg0, s16, 2) = 3;
}

void func_sc03_112_8017F498(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc03_112_8017F4D8(u8 *arg0) {
    s32 *r;

    if (func_8012BD14(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_112_8017F534(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc03_112_8017F598((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc03_112_8017F598(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc03_112_8017F998(a);
    s = func_sc03_112_8017F8DC(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
}

void func_sc03_112_8017F6F8(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc03_112_8017F998(r[0] & 0xFFF);
    cx = func_sc03_112_8017F8DC(r[0] & 0xFFF);
    sy = func_sc03_112_8017F998(r[1] & 0xFFF);
    cy = func_sc03_112_8017F8DC(r[1] & 0xFFF);
    sz = func_sc03_112_8017F998(r[2] & 0xFFF);
    cz = func_sc03_112_8017F8DC(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc03_112_8017F8DC(u32 a) {
    if (a < 0x400) {
        return D_sc03_112_801A25F4[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc03_112_801A25F4[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc03_112_801A25F4[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc03_112_801A25F4[0xFFF - a];
    }
}

s32 func_sc03_112_8017F998(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc03_112_801A25F4[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc03_112_801A25F4[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc03_112_801A25F4[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc03_112_801A25F4[a - 0xC00];
    }
}

void func_sc03_112_8017FA44(u8 *arg0) {
    void *temp_v0;

    D_sc03_112_801A2F10[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_112_80180FC0((s32) arg0);
        }
    }
}

void func_sc03_112_8017FAD0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_112_801A2E04) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_112_801A2E38;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_112_8017FB4C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_112_801A7AAC);
}

void func_sc03_112_8017FB7C(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_112_801A4B68);
            SetScript((s32) arg0, (s32) &D_sc03_112_801A7C94);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        temp_v0 = func_8012B8E4((s32) arg0, 0xA);
        temp_a1 = AF(arg0, s32, 0x20);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
        if ((func_8012BEE8((s32) arg0, temp_a1) != 0) || (temp_v0 == 0)) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

void func_sc03_112_8017FC4C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc03_112_801A7C94);
    AF(arg0, s32, 0x1C) = (rand() % 17) + 0x28;
    AF(arg0, s16, 0x52) = 0;
}

void func_sc03_112_8017FCC0(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_112_8017FCF4(u8 *arg0) {
    s32 unused[4];
    u8 *g = &D_80078E78;
    s32 r;
    s32 y;

    r = rand() % 1024;
    y = AF(AF(arg0, void *, 0x20), s16, 0x12);
    AF(arg0, s32, 0xE0) = (rand() & 1) ? y + r : y - r;
    func_8012B23C(arg0);
    SetScript((s32) arg0, (s32) &D_sc03_112_801A7D84);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s32, 0xE4) = 0;
    if (AF(g, u8, 0x36) != 0) {
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_112_8017FDB8(u8 *arg0) {
    if (func_8012BD3C(arg0, 0x400, 0x20000) == 1) {
        if (func_8012BCCC(arg0) <= 0x3000) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 8);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
    }
    func_8012B178(arg0, AF(arg0, s32, 0xE8));
    func_sc03_112_80180E84(arg0, 0);
    if (func_sc03_112_80180C88((s32) arg0) != 0 && func_8012BEE8(arg0) != 0) {
        func_sc03_112_80180BE0(arg0);
    }
}

void func_sc03_112_8017FE90(u8 *arg0) {
    if (func_8012BDBC(arg0, 0x400) == 1) {
        if (func_8012BCCC(arg0) < 0x3001) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 4);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc03_112_80180E84(arg0, 1);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc03_112_80180E84(arg0, 0);
    }
    func_sc03_112_80180C88((s32) arg0);
}

void func_sc03_112_8017FF70(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc03_112_801A7E44, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc03_112_80180C1C((s32) arg0);
}

void func_sc03_112_8017FFB8(s32 arg0) {
    s32 f;
    s32 m;

    AF(AF(arg0, s32, 0x20), s16, 0x12) += func_8012B8E4(arg0, 0xA);
    if (AF(arg0, s32, 0xDC) & 0x20) {
        if (AF(arg0, s32, 0x1C) >= 0xA && AF(arg0, s32, 0x1C) < 0x17) {
            func_sc03_112_80180A78(arg0);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == 0x16) {
            func_sc03_112_801809A0(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x10) {
            func_sc03_112_80180AE4(arg0);
        }
    }
    if (func_8012BEE8(arg0) != 0) {
        f = AF(arg0, s32, 0xDC);
        if (f & 1) {
            m = ~1;
        } else if (f & 0x10) {
            m = ~0x10;
        } else {
            goto other;
        }
        AF(arg0, s32, 0xDC) = f & m;
        AF(arg0, s16, 2) = 3;
        return;
other:
        if (func_8012BD3C(arg0, 0x400, 0x4000) == 0) {
            AF(arg0, s16, 2) = 5;
        } else {
            AF(arg0, s32, 0x1C) = 0x1E;
            func_sc03_112_80180C1C(arg0);
        }
    }
}

void func_sc03_112_801800E0(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_112_801A7C94);
    temp_v0 = AF(arg0, s32, 0xDC);
    temp_v1 = temp_v0 & ~8;
    AF(arg0, s32, 0xDC) = temp_v1;
    if (temp_v0 & 0x40) {
        AF(arg0, s32, 0xDC) = (s32) (temp_v1 & ~0x40);
        var_v0 = 0x1E;
    } else {
        temp_v0_2 = rand();
        var_v0_2 = temp_v0_2 / 16;
        var_v0 = (temp_v0_2 - (var_v0_2 * 0x10)) + 0xF;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    if (func_8012BD3C((s32) arg0, 0x400, 0x8000) == 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 8);
    }
}

void func_sc03_112_80180198(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s32, 0xDC) & 8) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x44);
        goto block_3;
    }
    temp_v0 = func_8012B8E4((s32) arg0, 8);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + temp_v0);
    if (temp_v0 != 0) {
block_3:
        if (func_8012BEE8((s32) arg0) != 0) {
            goto block_4;
        }
    } else {
block_4:
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_112_80180228(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_112_801809A0((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc03_112_8018026C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc03_112_80180AE4(arg0);
    }
}

void func_sc03_112_801802A4(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
}

void func_sc03_112_801802CC(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_112_801802FC(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_112_801809A0((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_112_80180AE4((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

void func_sc03_112_80180388(u8 *arg0) {
    s16 sp[3];
    u8 *temp_a0;

    temp_a0 = AF(arg0, u8 *, 0x20);
    if (AF(temp_a0, s32, 0x24) == (s32) &D_sc03_112_801A4B78) {
        func_8001C924(temp_a0, &D_sc03_112_801A4B68);
    }
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, s32, 0xDC) &= ~0x10;
    if (AF(arg0, u16, 0x5E) == 0x23) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D4C8(0xAA1, 0);
    } else if (AF(arg0, u16, 0x5E) == 0x24) {
        sp[0] = 0;
        sp[1] = 0x10;
        sp[2] = 0;
        func_sc03_112_8018567C(arg0, sp, 0);
    }
}

void func_sc03_112_80180440(u8 *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_v1_4 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1_4, u16, 0x18) >= 0x1800) {
            AF(temp_v1_4, u16, 0x1C) = 0x1800U;
            AF(temp_v1_4, u16, 0x1A) = 0x1800U;
            AF(temp_v1_4, u16, 0x18) = 0x1800U;
        }
    }
    if (AF(arg0, s32, 0x1C) == 0xE) {
        func_sc03_112_801809A0((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_112_80180AE4((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

void func_sc03_112_80180530(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) &= ~0x80;
    } else {
        AF(arg0, u16, 0x104) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) |= 0x80;
    }
}

void func_sc03_112_80180588(u8 *arg0) {
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

void func_sc03_112_8018062C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_112_8018063C(u8 *arg0, s32 arg1) {
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (AF(arg0, s32, 0xDC) & 0x80) {
            p1 = AF(arg0, u8 *, 0x20);
            AF(p1, s16, 0x18) = AF(p1, s16, 0x1C) = 0x1000;
            AF(arg0, s32, 0xDC) &= ~0x80;
        } else {
            p2 = AF(arg0, u8 *, 0x20);
            AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        }
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        func_80131E00((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc03_112_80180724(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_112_801A6518);
    SetScript((s32) arg0, (s32) &D_sc03_112_801A817C);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc03_112_80180780(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_112_80180FC0((s32) arg0);
    }
}

void func_sc03_112_80180808(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, s32, 0xDC) & 2) {
        AF(arg0, s32, 0x1C) = 0x2D;
        SetScript((s32) arg0, (s32) &D_sc03_112_801A825C);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
        AF(arg0, s16, 0x52) = 0;
    } else {
        AF(arg0, s32, 0x1C) = 0x37;
        func_8001C924((s32) AF(arg0, void *, 0x20), (s32) &D_sc03_112_801A6518);
        SetScript((s32) arg0, (s32) &D_sc03_112_801A817C);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
    }
    func_8002D4C8(func_8012BCCC((s32) arg0) <= 0x8FFF ? 0x51F : 0x520, 0);
}

void func_sc03_112_801808D8(u8 *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    if ((AF(arg0, s32, 0xDC) & 2) && (AF(arg0, s32, 0x1C) >= 0x15)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x1E);
    }
    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_112_80180FC0((s32) arg0);
    }
}

void func_sc03_112_801809A0(u8 *o) {
    SV4 b;
    s32 w;
    s32 *wp;
    s32 i;
    u8 *p;

    if (AF(o, s16, 0xAA) > 0) {
        return;
    }
    i = 0;
    wp = &w;
    for (; i < 20; i++) {
        func_8012B0B4(wp, rand() % 4096, 0x40);
        b.x = AF(o, u16, 6) + w;
        b.y = AF(o, u16, 0xA) - 0x60;
        b.z = AF(o, u16, 0xE) + (w >> 16);
        p = func_80143BDC(&b);
        if (p != 0) {
            AF(AF(p, u8 *, 0xCC), u8, 0x27) = 0x5B;
        }
    }
    func_8002D4C8(0x521, 0);
}

s32 func_sc03_112_80180A78(u8 *arg0) {
    if (AF(arg0, s32, 0xDC) & 1) {
        return 0;
    }
    if (func_8012D5E4(arg0, &D_sc03_112_801A2F40, &D_sc03_112_801A2F40 + 8, 0x13) == 1) {
        AF(arg0, s32, 0xDC) |= 1;
        return 1;
    }
    return 0;
}

s32 func_sc03_112_80180AE4(u8 *arg0) {
    SV8 d;
    SV8 pos;

    if (AF(arg0, u16, 0x5E) == 0x1E) {
        return 0;
    }
    if (AF(arg0, s32, 0xDC) & 0x10) {
        return 0;
    }
    if (func_8012BD14(arg0) < 0x2401) {
    pos.x = D_80126B5E;
    pos.y = D_80126B62;
    pos.z = D_80126B66;
    d.x = pos.x - AF(arg0, u16, 6);
    d.y = pos.y - AF(arg0, u16, 0xA);
    d.z = pos.z - AF(arg0, u16, 0xE);
    VectorNormalSS(&d, &d);
    pos.y -= 0x20;
    func_8012F568(1, 0x2001, 0, 0, &pos, &d);
    AF(arg0, s32, 0xDC) |= 0x10;
        return 1;
    }
    return 0;
}

void func_sc03_112_80180BE0(u8 *arg0) {
    if (rand() & 1) {
        AF(arg0, s16, 2) = 10;
    } else {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_112_80180C1C(u8 *arg0) {
    if (func_8014CB1C() != 0) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else if (rand() & 1) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else {
        AF(arg0, s32, 0xDC) &= ~0x20;
    }
}

s32 func_sc03_112_80180C88(s32 arg0) {
    SV8 a;
    SV8 b;
    s32 d;
    u8 *p;
    s32 i;
    s32 t;
    s32 *dp;

    t = func_8012CBA4();
    if ((t & 0xFF) == 2) {
        func_80131E00(arg0, 0x12);
        return 0;
    }
    if ((t & 0xFF) == 0x1A) {
        func_sc03_112_80180FC0(arg0);
        return 0;
    }
    if (0) {
miss:
        func_8012ADE4(arg0);
        return 1;
    }
    if (!(t & 0x2000)) {
        func_8012ADE4(arg0);
    }
    AF(arg0, s32, 0xDC) &= ~0x40;
    if (AF(arg0, s32, 0x14) > 0xFFFFF) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, s32, 0x58) != 0 && (u8 *)arg0 != p
            && func_8012BC60(arg0 + 4, p + 4) < 0x2400) {
            dp = &d;
            func_8012B0B4(dp, func_8012B6D4(arg0 + 4, p + 4), 0x61);
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            b.x += *(s32 *)&d;
            b.z += *(s32 *)&d >> 16;
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                goto miss;
            }
            AF(arg0, u16, 6) = b.x;
            AF(arg0, u16, 0xA) = b.y;
            AF(arg0, u16, 0xE) = b.z;
            break;
        }
    }
    return 1;
}

s32 func_sc03_112_80180E84(u8 *o, s32 s) {
    V3 out;
    V3 in;
    SV8 a;
    SV8 b;
    in.x = in.y = 0;
    in.z = -0x80000;
    ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &in, &out);
    a.x = AF(o, u16, 0x3A);
    a.y = AF(o, u16, 0x3E);
    a.z = AF(o, u16, 0x42);
    out.x += AF(o, s32, 0x44);
    out.y += AF(o, s32, 0x48);
    out.z += AF(o, s32, 0x4C);
    out.x += AF(o, s32, 4);
    out.y += AF(o, s32, 8);
    out.z += AF(o, s32, 0xC);
    b.x = AF(&out.x, u16, 2);
    b.y = AF(&out.y, u16, 2);
    b.z = AF(&out.z, u16, 2);
    func_8012CEB0(&a, &b, 0);
    if (AF(o, s16, 0xA) > b.y) {
        AF(o, s32, 0xE8) = -0x80000 - (s << 19);
        return 1;
    }
    AF(o, s32, 0xE8) = -0x20000 - (s << 17);
    return 0;
}

void func_sc03_112_80180FC0(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C(arg0);
        func_8002AC00(0x1A);
    }
    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_v1 = AF(arg0, void *, 0x68);
        if ((temp_v1 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) & 0x7FFF);
        }
    }
    func_8012C218(arg0);
}

void func_sc03_112_80181054(u8 *arg0) {
    D_sc03_112_801A83E8[AF(arg0, u16, 2)]();
    func_sc03_112_80182944((s32) arg0);
    if (!(AF(arg0, u16, 0x70) & 1) && (AF(arg0, u16, 0) != 0) && (func_8012C044((s32) arg0) == 1)) {
        func_sc03_112_8018290C((s32) arg0);
    }
}

void func_sc03_112_801810E4(s32 arg0) {
    s32 temp_v0;
    s32 q;
    u16 temp_v1_2;
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_112_801A827C) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x30);
        AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc03_112_801A82B0;
        AF(arg0, s32, 0xE8) = 0x40;
        temp_v0 = func_8012C194();
        if (temp_v0 != 0) {
            AF(arg0, s32, 0xD0) = temp_v0;
            func_8001CD9C(temp_v0, (s32) &D_sc03_112_801A82F8);
            AF(temp_v0, s16, 0x18) = 0x555;
            AF(temp_v0, s16, 0x1A) = 0x555;
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        }
        temp_v1_2 = AF(arg0, u16, 0x70);
        if (temp_v1_2 & 2) {
            q = arg0;
            AF(q, s16, 2) = 8;
            AF(q, u8, 0xC0) = 1;
            AF(q, s32 *, 0xBC) = &D_sc03_112_801A8348;
            AF(q, s32, 0xB4) = -0x249D;
            AF(q, s32, 0xC4) = (s32) (AF(q, s32, 0xC4) | 2);
            func_8012E8A8(q);
            return;
        }
        if (temp_v1_2 & 1) {
            AF(arg0, s16, 2) = 6;
            AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0x5FFF);
        } else {
            AF(arg0, u8, 0xC0) = 1;
            AF(arg0, s32 *, 0xBC) = &D_sc03_112_801A8348;
            AF(arg0, s32, 0xB4) = -0x249D;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        }
        AF(arg0, s32, 0xCC) = func_80143994(arg0, 0x1000);
    }
}

void func_sc03_112_80181240(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    func_8012B178(arg0, -0x28000);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
}

void func_sc03_112_8018128C(u8 *arg0) {
    s32 s;
    s32 v;
    s32 d;
    s32 e;
    s32 r;
    s32 y;
    u8 *p;
    s32 unused[4];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_112_80182858(arg0);
        return;
    }
    s = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s >> 1) + 0x800;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        d = 0x1000 - s;
        func_8012B178(arg0, (d >= 0) ? -0x8000 - d * 16 : -0x8000 - (s - 0x1000) * 16);
        r = func_8012CBA4(arg0);
        if ((r & 0xFF) == 0x1A) {
            goto kill;
        }
        if (!(r & 0x6000)) {
            goto idle;
        }
        if (--AF(arg0, s32, 0xE8) == 0) {
            AF(arg0, u16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x20;
            s = rand() % 1024;
            y = AF(AF(arg0, void *, 0x20), s16, 0x12);
            if (!(rand() & 1)) {
                v = y - s;
            } else {
                v = y + s;
            }
            goto store;
        }
        break;
    case 1:
        AF(AF(arg0, void *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0x14);
        e = 0x1000 - s;
        func_8012B178(arg0, -(((e < 0) ? s - 0x1000 : e) * 16) - 0x4000);
        r = func_8012CBA4(arg0);
        if ((r & 0xFF) == 0x1A) {
            goto kill;
        }
        if (!(r & 0x6000)) {
        idle:
            func_8012ADE4(arg0);
            p = AF(arg0, u8 *, 0x20);
            AF(arg0, u16, 0x34) = 2;
            v = AF(p, s16, 0x12);
            v += 0x800;
        store:
            AF(arg0, s32, 0xE0) = v;
        } else {
            if (func_8012BEE8(arg0) != 0) {
                AF(arg0, u16, 0x34) = 0;
                AF(arg0, s32, 0xE8) = 0x40;
            }
        }
        break;
    case 2:
        r = func_8012B608(AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
        if (r == 0) {
            AF(arg0, u16, 0x34) = 0;
        }
        AF(AF(arg0, void *, 0x20), s16, 0x12) += r;
        break;
    case 3:
        r = func_8012CBA4(arg0);
        if ((r & 0xFF) == 0x1A) {
        kill:
            func_sc03_112_80182858(arg0);
            return;
        }
        if (r & 0x2000) {
            func_8012B23C(arg0);
            func_8012B178(arg0, -0x28000);
            AF(arg0, u16, 0x34) = 0;
        } else {
            if (!(AF(arg0, s32, 0x1C) & 3)) {
                func_80143B6C(arg0, 1);
            }
            if (++AF(arg0, s32, 0x1C) >= 0x3C) {
                func_80131E00(arg0, 0xD);
            }
        }
        break;
    }
    if (func_8012BD3C(arg0, 0x400, 0x24000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    AF(arg0, s32, 0xE4)++;
}

void func_sc03_112_801815E4(u8 *p) {
    s32 d;
    s32 s;

    if (AF(p, s16, 0xA) >= 0x10) {
        func_sc03_112_80182858();
        return;
    }
    d = func_8012BCCC(p);
    if (func_8012BDBC(p, 0x400) == 0 || d > 0x24000) {
        AF(p, s16, 2) = 1;
        return;
    }
    if (d < 0x4001) {
        AF(p, s16, 2) = 4;
        return;
    }
    s = rsin((AF(p, s32, 0xE4) << 7) & 0x780);
    AF(AF(p, u8 *, 0x20), s16, 0x1A) = (s >> 1) + 0x800;
    AF(AF(p, u8 *, 0x20), u16, 0x12) += func_8012B8E4(p, 0xA);
    func_8012B178(p, -0x10000 - (((0x1000 - s) >= 0 ? (0x1000 - s) : -(0x1000 - s)) << 7));
    if (!(func_8012CBA4(p) & 0x6000)) {
        func_8012ADE4(p);
    }
    AF(p, s32, 0xE4)++;
}

void func_sc03_112_8018172C(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    ((s16 *)&p.x)[1] = D_80126B5E;
    ((s16 *)&p.y)[1] = D_80126B62 - 0x30;
    ((s16 *)&p.z)[1] = D_80126B66;
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, -0x100000);
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0xFE) = D_80126B62 - 0x60;
}

void func_sc03_112_801817E0(u8 *arg0) {
    s32 t;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_112_80182858(arg0);
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        t = func_8012CBF4(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x4000) goto stop;
        if (func_8012D624(arg0, 0x20, 5) == 1) {
            D_80126B96 = 0x11;
            D_80126B9A = AF(AF(arg0, void *, 0x20), u16, 0x12);
            AF(arg0, s32, 0x48) = 0x18000;
            AF(arg0, u16, 0x34)++;
            AF(AF(arg0, void *, 0x20), s16, 0x10) += 0x800;
            func_8012B2CC(arg0);
            func_8012B178(arg0, 0xFFF00000);
            break;
        }
        if (AF(arg0, s32, 0x14) < 0) {
            if (AF(arg0, s16, 0xA) < AF(arg0, s16, 0xFE)) {
                AF(arg0, s32, 0x48) = 0x18000;
                AF(arg0, u16, 0x34)++;
            }
        } else if (AF(arg0, s16, 0xA) > AF(arg0, s16, 0xFE)) {
            AF(arg0, s32, 0x48) = 0x18000;
            AF(arg0, u16, 0x34)++;
        }
        AF(arg0, s32, 0x1C)++;
        break;
    case 1:
        t = func_8012CBF4(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x2000) {
            AF(arg0, u16, 0x34)++;
            AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
            AF(arg0, s32, 0x1C) = 0;
            break;
        }
        if (t & 0x4000) goto stop;
        goto count;
    case 2:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        t = func_8012CBA4(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (!(t & 0x6000)) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34)++;
            break;
        }
        if (AF(arg0, s32, 0x1C) % 3 == 0) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) < 0x10) break;
        goto done;
    case 3:
        t = func_8012CBCC(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x4000) {
stop:
            func_8012B23C(arg0);
            AF(arg0, u16, 0x34) = 4;
            AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
            break;
        }
        if (t & 0x2000) {
            AF(arg0, s16, 2) = 1;
            func_80143B6C(arg0, 1);
            break;
        }
        goto count;
    case 4:
        if (AF(arg0, s32, 0x1C) % 3 == 0) {
            func_80143B6C(arg0, 1);
        }
        t = func_8012CBA4(arg0);
        if ((t & 0xFF) == 0x1A) {
kill:
            func_sc03_112_80182858(arg0);
            return;
        }
        if (t & 0x2000) {
done:
            AF(arg0, s16, 2) = 1;
            break;
        }
count:
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            func_80131E00(arg0, 0xD);
        }
        break;
    }
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc03_112_80181B7C(u8 *arg0) {
    AF(arg0, s32, 0x48) = 0x4000;
    AF(arg0, s16, 2) = 7;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rand() % 4096;
}

void func_sc03_112_80181BE0(u8 *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    temp_v1 = (temp_v0 >> 3) + 0xE00;
    AF(temp_s0, s16, 0x1C) = temp_v1;
    AF(temp_s0, s16, 0x18) = temp_v1;
    AF(temp_s0, s16, 0x1A) = (s16) ((temp_v0 >> 1) + 0x800);
    func_8012AD80((s32) arg0);
    if (func_8012D624((s32) arg0, 0x20, 5) == 1) {
        D_80126B96 = 0x11;
        D_80126B9A = AF(AF(arg0, void *, 0x20), u16, 0x12);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc03_112_8018290C((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
}

void func_sc03_112_80181CAC(u8 *arg0) {
    if (func_8012BE54() <= 0x40000) {
        AF(arg0, s16, 2) = 9;
        func_8012B21C((s32) arg0);
        func_8012E88C((s32) arg0);
        AF(arg0, s32, 0xCC) = func_80143994((s32) arg0, 0x1000);
    }
}

void func_sc03_112_80181D08(u8 *p) {
    SV4 in;
    s16 out[2];
    u8 *o;
    s32 s;
    s16 t;
    s16 v;

    o = AF(p, u8 *, 0x20);
    s = rsin((AF(p, s32, 0xE4) << 6) & 0x7C0);
    t = (s >> 3) + 0xE00;
    AF(o, s16, 0x1C) = t;
    AF(o, s16, 0x18) = t;
    AF(o, s16, 0x1A) = (s >> 1) + 0x800;
    if (func_8012CBF4(p) & 0x2000) {
        AF(p, s16, 2) = 1;
        func_80143B6C(p, 1);
        in.x = AF(p, u16, 6);
        in.y = AF(p, u16, 0xA);
        in.z = AF(p, u16, 0xE);
        func_8012EFB8(&in, out);
        if ((out[0] >= 0 ? out[0] < 0xB5 : -out[0] < 0xB5) && (out[1] >= 0 ? out[1] < 0x8D : -out[1] < 0x8D)) {
            v = ((out[0] << 6) / 180) + 0x40;
            if (v < 0) {
                v = 0;
            } else if (v >= 0x80) {
                v = 0x7F;
            }
            func_8002D4C8(0x832, (v | 0x2000) & 0xFFFF);
        }
    }
    AF(p, s32, 0xE4)++;
}

void func_sc03_112_80181E88(u8 *arg0) {
    u8 *p;
    func_sc03_112_80182708(arg0);
    switch (AF(arg0, u16, 0x5E)) {
    case 1:
        if (AF(arg0, s16, 0x60) != 0) {
            goto dflt;
        }
        AF(arg0, s16, 0x76) -= AF(arg0, s16, 0x60);
        if (AF(arg0, s16, 0x76) <= 0) {
            func_80131E00(arg0, 0xE);
        }
        func_8012E9C0(arg0);
        AF(arg0, s16, 0x34) = 3;
        return;
    case 8:
        p = &D_sc03_112_801A8420;
        break;
    case 5:
    case 29:
    case 32:
        p = &D_sc03_112_801A8430;
        break;
    case 50:
    default:
    dflt:
        p = &D_sc03_112_801A8410;
        break;
    }
    func_8012B14C(arg0, p);
    SetScript(arg0, &D_sc03_112_801A82E8);
    AF(arg0, s16, 0x34) = 0;
    func_sc03_112_80182944(arg0);
}

void func_sc03_112_80181F74(u8 *arg0) {
    s32 t;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_112_80182858(arg0);
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x100;
        t = func_8012CC64(arg0, &D_sc03_112_801A8340);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x2000) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            break;
        }
        if (t & 0x4000) {
            AF(arg0, u16, 0x34) = 4;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            func_8012B23C(arg0);
            break;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            AF(arg0, u16, 0x34) = 2;
        }
        break;
    case 1:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        t = func_8012CC1C(arg0, &D_sc03_112_801A8340);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (!(t & 0x6000)) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34)++;
            func_8012B23C(arg0);
            break;
        }
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            func_80131C78(arg0);
        }
        break;
    case 2:
        t = func_8012CC64(arg0, &D_sc03_112_801A8340);
        if (t & 0x2000) {
            func_80143B6C(arg0, 1);
            func_80131C78(arg0);
            break;
        }
        if (t & 0x4000) {
            AF(arg0, u16, 0x34) = 4;
            func_80143B6C(arg0, 1);
            func_8012B23C(arg0);
            break;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            func_80131E00(arg0, 0xD);
        }
        break;
    case 3:
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            func_80131C78(arg0);
        }
        break;
    case 4:
        t = func_8012CC1C(arg0, &D_sc03_112_801A8340);
        if ((t & 0xFF) == 0x1A) {
kill:
            func_sc03_112_80182858(arg0);
            return;
        }
        if (t & 0x2000) {
            func_80131C78(arg0);
            break;
        }
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            func_80131E00(arg0, 0xD);
        }
        break;
    }
    func_sc03_112_80182944(arg0);
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc03_112_80182284(s32 arg0) {
    func_sc03_112_80182708();
    func_sc03_112_80182944(arg0);
    SetScript(arg0, (s32) &D_sc03_112_801A82E8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_112_801822D0(s32 arg0) {
    func_sc03_112_80182708();
    func_sc03_112_80182944(arg0);
}

void func_sc03_112_80182300(u8 *arg0) {
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    func_sc03_112_80182708();
    if (AF(arg0, u16, 0x5E) == 9 || AF(arg0, u16, 0x5E) == 0x1C) {
        func_8012B14C(arg0, &D_sc03_112_801A8440);
    } else {
        func_8012B14C(arg0, &D_sc03_112_801A8450);
    }
    SetScript((s32) arg0, (s32) &D_sc03_112_801A82E8);
    func_sc03_112_80182944((s32) arg0);
}

void func_sc03_112_80182384(u8 *arg0) {
    s32 ret;
    s32 saved;
    u8 unused[8];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_112_80182858(arg0);
        return;
    }
    if (AF(arg0, s32, 0x10) != 0 || AF(arg0, s32, 0x18) != 0) {
        func_8012DBD0(arg0, 0x50, AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) > 0x28) {
            func_80131E00(arg0, 0xD);
            return;
        }
        ret = func_8012CC64(arg0, &D_sc03_112_801A8340);
        if (ret & 0x4000) {
            func_8012B23C(arg0);
            AF(arg0, u8, 0xC2) = 4;
            break;
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 0x1A) {
                func_sc03_112_80182858(arg0);
                return;
            }
            AF(arg0, u8, 0xC2) = 2;
            func_80143B6C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF30000;
            AF(arg0, s32, 0x1C) = 0;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) > 0x28) {
            func_80131E00(arg0, 0xD);
            return;
        }
        saved = AF(arg0, s32, 0x14);
        ret = func_8012CC64(arg0, &D_sc03_112_801A8340);
        if (ret & 0x4000) {
            func_8012B23C(arg0);
            AF(arg0, u8, 0xC2) = 4;
            break;
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 0x1A) {
                func_sc03_112_80182858(arg0);
                return;
            }
            func_80143B6C(arg0, 1);
            AF(arg0, s32, 0x14) = saved;
            AF(arg0, u8, 0xC2) = 3;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        if (AF(arg0, u8, 0xC3) & 1) {
            ret = func_8012CC1C(arg0, &D_sc03_112_801A8340);
            if (!(ret & 0x6000)) {
                func_80131E00(arg0, 0xD);
                return;
            }
        } else {
            ret = func_8012CC64(arg0, &D_sc03_112_801A8340);
            if (ret & 0x4000) {
                func_8012B23C(arg0);
                AF(arg0, u8, 0xC2) = 4;
                break;
            }
            if (ret & 0x2000) {
                if ((ret & 0xFF) == 0x1A) {
                    func_sc03_112_80182858(arg0);
                    return;
                }
                AF(arg0, u8, 0xC3) |= 1;
            }
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) > 0x10) {
            if (!(ret & 0x6000)) {
                func_80131E00(arg0, 0xD);
                return;
            }
            func_80131C78(arg0);
            break;
        }
        break;
    case 4:
        ret = func_8012CBA4(arg0);
        if (ret & 0x2000) {
            func_80131C78(arg0);
            break;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) > 0x3C) {
            func_80131E00(arg0, 0xD);
            return;
        }
        break;
    }
    func_sc03_112_80182944(arg0);
}

void func_sc03_112_80182708(u8 *o) {
    u8 *p;
    AF(o, u16, 0x5C) &= ~1;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    AF(o, s32, 0x1C) = 0;
    func_8012B2CC(o);
    func_8012B23C(o);
}

void func_sc03_112_8018276C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_112_80185A54);
    func_8012B030((s32) arg0);
}

void func_sc03_112_801827B8(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
}

void func_sc03_112_801827D0(s32 arg0) {
    func_8012E8C4();
    if (func_8012BEE8(arg0) != 0) {
        func_sc03_112_80182A28(arg0);
        func_8002A04C(arg0);
        func_sc03_112_80182858(arg0);
    }
}

void func_sc03_112_80182820(s32 arg0) {
    func_sc03_112_80182A28(arg0);
    func_8002A04C(arg0);
    func_sc03_112_80182858(arg0);
}

void func_sc03_112_80182858(u8 *arg0) {
    u16 fl = AF(arg0, u16, 0x70);

    if (fl & 2) {
        if (fl & 0x10) {
            AF(arg0, s16, 2) = 8;
            AF(arg0, u8, 0xC1) = 0;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
            func_8012E8A8();
            AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
            AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
            func_8012B2CC(arg0);
            if (AF(arg0, s32, 0xCC) != 0) {
                func_801439C0(AF(arg0, s32, 0xCC));
            }
            return;
        }
    }
    func_sc03_112_8018290C((s32) arg0);
}

s32 func_sc03_112_8018290C(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xD0), 0x38);
    return func_8012C098(arg0);
}

void func_sc03_112_80182944(u8 *arg0) {
    SV8 v;
    SV8 unused;
    u8 *w;
    u8 *e;
    u8 *p;
    s32 t;
    u32 m;

    w = (u8 *)&D_800AF630;
    p = AF(arg0, u8 *, 0xD0);
    if (p != NULL) {
        e = p;
        FaceHelper(arg0, &D_sc03_112_801A8338, &v);
        AF(e, SV8, 8) = v;
        m = 0x80000000;
        if (AF(AF(arg0, u8 *, 0x20), s32, 4) < 0) {
            AF(e, s32, 4) |= m;
        } else {
            AF(e, s32, 4) &= ~m;
        }
        t = (rsin((AF(w, u16, 0xA3AA) * 56) & 0x7F8) >> 4) + 0x455;
        AF(e, s16, 0x1A) = t;
        AF(e, s16, 0x18) = t;
    }
}

void func_sc03_112_80182A28(u8 *arg0) {
    typedef struct { s32 v; } W;
    SpawnDef d;
    W w;
    s32 i;

    d.kind = 0x33;
    d.flags = 0;
    d.unk8 = 0;
    d.unk10 = 0;
    d.unkE = 0;
    d.unkC = 0x7FFF;
    for (i = 0; i < 5; i++) {
        w = ((W (*)())func_8012B0B4)(rand() % 4096, rand() % 64);
        d.x = AF(arg0, u16, 6) + w.v;
        d.y = AF(arg0, u16, 0xA) - 0x60;
        d.z = AF(arg0, u16, 0xE) + (w.v >> 16);
        func_8012C51C(&d, arg0);
    }
}

void func_sc03_112_80182B20(u8 *arg0) {
    s32 s;
    s32 t;
    s32 a, b, c;
    s32 i;
    Col16 *q;

    s = rsin((D_800B99DA * 56) & 0x7F8);
    t = (s * 100) >> 12;
    a = t + 100;
    b = t - 126;
    c = ((s * 110) >> 12) + 100;
    q = (Col16 *)(&D_sc03_112_801A82BE - 4);
    i = 0;
    do {
        i++;
        q->a = a;
        q->b = b;
        q->c = c;
        q++;
    } while (i < 3);
    D_sc03_112_801A82F8 = a - 50;
    D_sc03_112_801A82F9 = b - 50;
    D_sc03_112_801A82FA = c - 50;
    AF(arg0, s32, 0x1C)++;
}

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MT20;
typedef struct { s16 x, y; s32 pad; } SXY8;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern u8 D_sc03_112_801A8AA0;
extern u8 D_sc03_112_801A9ED0;
extern u8 D_sc03_112_801A8B74;
extern u8 D_sc03_112_801ACE60[];
extern u8 D_sc03_112_801A8AD4;
extern u8 D_sc03_112_801A8AE0;
extern u8 D_sc03_112_801A8AE8;
extern u8 D_sc03_112_801A8AF8;
extern u16 D_sc03_112_801A8AFC;
extern u8 D_sc03_112_801A8B00;
extern u8 D_sc03_112_801A8B0C;
extern u8 D_sc03_112_801A8B14;
extern u8 D_sc03_112_801A8B38;
extern u16 D_sc03_112_801A8B3C;
extern u8 D_sc03_112_801A8B24;
extern u8 D_sc03_112_801A8B30;
extern u8 D_sc03_112_801ACEA1[];
extern u8 D_sc03_112_801ACEA2;
extern u8 D_sc03_112_801ACEA4;
extern void func_8001CA1C();

void func_sc03_112_80182BF8(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (func_8012C354(arg0, &D_sc03_112_801A8AA0) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_112_801A8B74;
        SetScript(arg0, &D_sc03_112_801A9ED0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc03_112_801A8B40);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_112_801ACE60[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_112_801A8AD4);
        SetScript(arg0, &D_sc03_112_801A8AE0);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_112_801A8AE8 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_112_801A8AF8;
        AF(arg0, u16, 0xE) += D_sc03_112_801A8AFC;
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
        func_8001CA1C(t, &D_sc03_112_801A8B00);
        SetScript(arg0, &D_sc03_112_801A8B0C);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_112_801A8B14 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_112_801A8B38;
        AF(arg0, u16, 0xE) += D_sc03_112_801A8B3C;
        return;
    case 7:
        if (func_8012C354(arg0, &D_sc03_112_801A8AA0) == 0) {
            return;
        }
        {
            u8 *q = D_sc03_112_801ACEA1;
            u8 *r = q - 1;
            D_sc03_112_801ACEA2 = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc03_112_801ACEA2 = 0;
            D_sc03_112_801ACEA4 = 0;
            func_800233CC(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_112_801A8B74;
        SetScript(arg0, &D_sc03_112_801A9ED0);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_112_801ACE60[AF(arg0, s16, 0xFC) * 8];
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
        func_8001CA1C(t, &D_sc03_112_801A8AD4);
        SetScript(arg0, &D_sc03_112_801A8AE0);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_112_801A8AE8 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_112_801A8AF8;
        AF(arg0, u16, 0xE) += D_sc03_112_801A8AFC;
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
        func_8001CA1C(t, &D_sc03_112_801A8B00);
        SetScript(arg0, &D_sc03_112_801A8B0C);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_112_801A8B14 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_112_801A8B38;
        AF(arg0, u16, 0xE) += D_sc03_112_801A8B3C;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_112_801A8B24);
        SetScript(arg0, &D_sc03_112_801A8B30);
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
        if (func_8012C354(arg0, &D_sc03_112_801A8AA0) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_112_801A8B74;
        SetScript(arg0, &D_sc03_112_801A9ED0);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_112_801ACE60[AF(arg0, s16, 0xFC) * 8];
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
        func_8001CA1C(t, &D_sc03_112_801A8AD4);
        SetScript(arg0, &D_sc03_112_801A8AE0);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_112_801A8AE8 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_112_801A8AF8;
        AF(arg0, u16, 0xE) += D_sc03_112_801A8AFC;
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
        func_8001CA1C(t, &D_sc03_112_801A8B00);
        SetScript(arg0, &D_sc03_112_801A8B0C);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_112_801A8B14 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_112_801A8B38;
        AF(arg0, u16, 0xE) += D_sc03_112_801A8B3C;
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

void func_sc03_112_801833A4(u8 *arg0) {
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

void func_sc03_112_801839AC(u8 *arg0) {
    SV4 a;
    SV4 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    func_8012B1B4(arg0, &D_sc03_112_801A8B40);
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
    if (func_8012CC40(arg0, &D_sc03_112_801A8B5C) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc03_112_80183AE0(u8 *arg0) {
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
    r = func_8012CC64(arg0, &D_sc03_112_801A8B5C);
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
            func_8012B1B4(arg0, &D_sc03_112_801A8B40);
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

void func_sc03_112_80183EA0(u8 *arg0) {
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

void func_sc03_112_801840E4(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_112_801A8BA4[AF(arg0, u16, 2)]();
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

void func_sc03_112_80184194(u8 *arg0) {
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

void func_sc03_112_80184278(u8 *arg0) {
    D_sc03_112_801A8BF4[AF(arg0, u16, 2)]();
}

void func_sc03_112_801842B4(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_112_801ACEA0);
    }
}

void func_sc03_112_80184318(u8 *arg0) {
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
    ((void (*)(u8 *)) D_sc03_112_801A8BFC[AF(arg0, u16, 2)])(arg0);
}

void func_sc03_112_801843AC(u8 *arg0) {
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
        func_8012B1B4(arg0, &D_sc03_112_801A8B40);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    func_8012B23C(arg0);
    func_8012B1B4(arg0, &D_sc03_112_801A8B40);
}

void func_sc03_112_801844D4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_112_80184504(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_112_80184530(void) {
}

void func_sc03_112_80184538(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_8012B1B4(arg0, &D_sc03_112_801A8B40);
    } else if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (func_8012CC40(arg0, &D_sc03_112_801A8B5C) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        func_8012C0EC(arg0);
    }
}

void func_sc03_112_80184624(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

void func_sc03_112_801846A4(u8 *arg0) {
    AF(arg0, s32, 8) += 0x100000;
    AF(arg0, s32, 4) -= rsin(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    AF(arg0, s32, 0xC) -= rcos(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 2) = 6;
        func_8012D5E4((s32) arg0, (s32) &D_sc03_112_801A8B4C, (s32) &D_sc03_112_801A8B54, 0xF);
        AF(arg0, s16, 0xFE) = 8;
    }
}

void func_sc03_112_80184758(u8 *arg0) {
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

void func_sc03_112_80184838(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_112_801848A0(u8 *arg0) {
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

void func_sc03_112_80184900(u8 *arg0) {
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
    func_sc03_112_80184194((s32) arg0);
}

void func_sc03_112_80184990(u8 *arg0) {
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
    func_sc03_112_80184194((s32) arg0);
}

void func_sc03_112_80184A04(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_112_80184194((s32) arg0);
}

void func_sc03_112_80184A54(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_112_801A8B64, (s32) &D_sc03_112_801A8B6C, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_112_801842B4(arg0);
}

void func_sc03_112_80184AD4(u8 *arg0) {
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

void func_sc03_112_80184B74(u8 *arg0) {
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
    func_sc03_112_801833A4(arg0);
}

void func_sc03_112_80184C44(u8 *arg0) {
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
    func_sc03_112_80183EA0((s32) arg0);
}

void func_sc03_112_80184CD8(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_112_80184D14(s32 arg0) {
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

void func_sc03_112_80184DFC(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_112_801ACEE0;
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

void func_sc03_112_80184EC0(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_112_801ACEE0;
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

void func_sc03_112_80184F74(u8 *arg0) {
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

void func_sc03_112_80184FB4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_112_80185008(u8 *arg0) {
    D_sc03_112_801AA244[AF(arg0, u16, 2)]();
}

void func_sc03_112_80185044(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc03_112_80185564() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc03_112_801AA1F8, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc03_112_801AA204);
    func_sc03_112_801855BC((s32) arg0);
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

void func_sc03_112_80185140(u8 *arg0) {
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
            func_sc03_112_801855BC(arg0);
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
    func_sc03_112_80185638(arg0);
}

void func_sc03_112_801853D0(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc03_112_801855BC(arg0);
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
    func_sc03_112_80185638(arg0);
}

s32 func_sc03_112_80185564(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_112_801855BC(u8 *o) {
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

void func_sc03_112_80185638(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc03_112_8018567C(s32 o, s16 *v, s32 arg2) {
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
