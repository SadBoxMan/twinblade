#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_103_8017BE9C(void) {
}

void func_sc03_103_8017BEA4(void) {
}

void func_sc03_103_8017BEAC(void) {
}

void func_sc03_103_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_103_80187B34[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_103_80187B1C;
extern void (*D_sc03_103_80187B3C[])();
extern u8 D_sc03_103_80187B28;
extern void (*D_sc03_103_80188034[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_103_8017E110(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_103_8018803C[])();
void func_sc03_103_8017E138(void);
extern void func_800D1EBC();
extern void (*D_sc03_103_80188048[])();
extern u8 D_sc03_103_80188054;
extern void func_8016EE40();
extern u8 D_sc03_103_80188058;
extern void func_sc03_103_8017E290();
extern void (*D_sc03_103_8018805C[])();
extern void (*D_sc03_103_801880B8[])();
extern void (*D_sc03_103_801880C0[])();
extern void (*D_sc03_103_801A0444[])();
extern void (*D_sc03_103_801A04F8[])();
extern void (*D_sc03_103_801C1F98[])();
extern void (*D_sc03_103_801C20DC[])();

void func_sc03_103_8017BEBC(u8 *arg0) {
    D_sc03_103_80187B34[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_103_80187B1C, 0xFD);
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

void func_sc03_103_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_103_8017C150(u8 *arg0) {
    D_sc03_103_80187B3C[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_103_80187B28, 0x18);
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

void func_sc03_103_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
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

extern s32 D_sc03_103_801880AC[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_103_8018445C;
extern u8 D_sc03_103_8019FF58;
extern u8 D_sc03_103_8019FF78;
extern s32 func_8012C354();
extern u8 D_sc03_103_801A003C;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_103_801A4A44;
extern void func_8012B14C();
extern u8 D_sc03_103_801B0F40;
extern void func_8012C588();
extern u8 D_sc03_103_801A4A60;
extern u8 D_sc03_103_801B0D28;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_103_801A4CF8;
extern u8 D_sc03_103_801A4D00;
extern u8 D_sc03_103_801B17E8;
extern u8 D_sc03_103_801B1F68;
extern s32 func_8012DEB8();
extern u8 D_sc03_103_801B1B28;
extern u8 D_sc03_103_801B23D8;
extern void func_8012C218();
extern void func_8012AD50();
extern s8 D_sc03_103_801C4C64;
extern void func_sc03_103_80183760();

extern void (*D_sc03_103_801A23F4[])();
extern void func_sc03_103_80180FD4();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_103_801A48E4;
extern u8 D_sc03_103_801A2414;
extern s32 func_8012D5E4();
extern s32 func_sc03_103_80180FBC();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern u8 D_sc03_103_80197F1C;
extern void func_8013C0F8();
extern u8 D_sc03_103_801C4D68;
extern void func_sc03_103_8017D174();
extern u8 D_sc03_103_80199260;
extern s32 D_sc03_103_8018806C[];
extern void func_sc03_103_8017E8F4();
extern void func_800183E0();

extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_103_801A0314[];
extern u8 D_sc03_103_801A0078;
extern u8 D_sc03_103_801A0138;
extern u8 D_sc03_103_801A01C0;
extern u8 D_sc03_103_801A0280;
extern u8 D_sc03_103_801A0364;
extern u8 D_sc03_103_801A0388;
extern u8 D_sc03_103_801A0374;
extern u8 D_sc03_103_801A0380;
extern void func_8012B2CC();
extern void func_8012C098();


extern void (*D_sc03_103_801A4DCC[])();
extern s32 func_8012D624();
extern void func_8012B370();

extern u8 D_sc03_103_801881A4;
extern u8 D_sc03_103_80188258;
s32 func_sc03_103_8017E6D0(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc03_103_8018826C;
extern u8 D_sc03_103_801884C4;
extern s32 D_8012704C;
extern u8 D_sc03_103_801884D8;
extern u8 D_sc03_103_801884EC;
extern u8 D_sc03_103_801A4D90;
extern u8 D_sc03_103_801A4DA8;
extern u8 D_sc03_103_801A4DC0;
extern u8 D_sc03_103_801A4DD8;
extern u8 D_sc03_103_801A4E98;
extern u8 D_sc03_103_801A4F20;

typedef struct { s16 vx, vy, vz, pad; } SV;
extern void func_8012B77C();
extern s32 func_80143C74();
extern u8 *D_801151D4;
extern u8 D_sc03_103_801B06A0;
extern u8 D_sc03_103_801B08A8;
extern u8 D_sc03_103_801B1460;
extern s32 func_8012CEB0();
extern void func_80131E00();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_103_8017C294(u8 *obj) {
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

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 D_801202A0;
extern VoidFn D_sc03_103_801A0070[];
extern s32 func_8012B6D4();
extern s32 func_80135888();
extern void func_8002AC00();
extern void func_8012B030();
extern u8 D_sc03_103_801AAE14;
extern u8 D_sc03_103_801B2558;
extern void func_8001C214();
extern s32 func_8012B8E4();
extern s32 func_8012B1B4();
extern u8 D_sc03_103_801A4D18;
extern u8 D_sc03_103_801B1A20;
extern s32 func_80133784();
extern s32 func_8012BCCC();
extern s32 func_8012BDBC();
extern s32 D_80126B5C;
extern s16 D_80126B62;
extern s32 D_80126B64;

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s32 func_8012BD3C();
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern u8 D_sc03_103_801A4A50;
extern u8 D_sc03_103_801A4D24;
extern u8 D_sc03_103_801B2570;
extern s16 D_sc03_103_801C1FFC;
extern s16 D_sc03_103_801C1FFE;
extern s16 D_sc03_103_801C2000;
extern Blk30 D_sc03_103_801C2004;
extern s16 D_sc03_103_801C2034;
extern s16 D_sc03_103_801C2036;
extern s16 D_sc03_103_801C2038;
extern Blk30 D_sc03_103_801C203C;
extern s16 D_sc03_103_801C206C;
extern s16 D_sc03_103_801C206E;
extern s16 D_sc03_103_801C2070;
extern Blk30 D_sc03_103_801C2074;
extern s16 D_sc03_103_801C20A4;
extern s16 D_sc03_103_801C20A6;
extern s16 D_sc03_103_801C20A8;
extern Blk30 D_sc03_103_801C20AC;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_8012AD44();
extern void func_80028620();

typedef struct { u8 b[0x34]; } R34;
extern u16 D_sc03_103_8019FFAC[];
extern u16 D_sc03_103_8019FFD4[];
extern u16 D_sc03_103_8019FFFC[];
extern VoidFn D_sc03_103_801A0024[];
extern void func_8002D59C();
extern R34 D_sc03_103_801A4A80[];
extern u8 D_sc03_103_801A4BB8;
extern u8 D_sc03_103_801A4C58;
extern u8 D_sc03_103_801A4CA0;
extern u8 D_sc03_103_801B2258;
extern void func_80143970();

extern s32 func_8012BEE8();
extern void func_8012B178();
extern s32 func_sc03_103_80180F10();
extern s32 func_8012CBF4();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
extern void func_8012B200();
extern void func_8012B0B4();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_103_801B16E0;
extern u8 D_sc03_103_801B1D60;

extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern SV4 D_sc03_103_801C1FBC;
extern SV4 D_sc03_103_801C1FC4;
extern SV4 D_sc03_103_801C1FCC;
extern SV4 D_sc03_103_801C1FD4;
extern SV4 D_sc03_103_801C1FDC;
extern SV4 D_sc03_103_801C1FE4;
extern SV4 D_sc03_103_801C1FEC;
extern SV4 D_sc03_103_801C1FF4;
extern s32 func_8012A758();
extern void func_80015978();

extern void func_80143B6C();
extern u8 D_sc03_103_801B0DD0;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126B58;
extern u8 D_80126940;
extern u8 D_sc03_103_80188064[];
extern s32 func_80148800();
extern void func_sc03_103_8017E5A4();
extern u8 D_sc03_103_80188068[];
extern void func_sc03_103_8017E40C();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { u16 a, b, c, d; } U16x4;
extern u8 D_sc03_103_801A23C4;

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
typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern VoidFn D_sc03_103_801A0398[];
extern s16 D_80126CB6;
extern u8 D_sc03_103_801A0308;
extern s32 func_8012B864();
extern s32 func_8012B70C();
extern s16 D_sc03_103_801A040A[];
extern u8 D_sc03_103_801A03D0;
extern u16 D_sc03_103_801A0404[];
extern u16 D_sc03_103_801A0406[];
extern u16 D_sc03_103_801A0408[];
extern u8 D_sc03_103_801A0450;
extern u8 D_sc03_103_801A04B0;
extern u8 D_sc03_103_801A2388;
extern u8 D_sc03_103_801A23CC;
extern void func_80143994();
extern void func_8012E88C();
extern s32 func_8012E778();
extern s16 D_80126CBA;
extern VoidFn D_sc03_103_801A4D3C[];
extern VoidFn D_sc03_103_801A4F2C[];
extern u8 D_sc03_103_801B22F0;
extern u8 D_sc03_103_801A4A34;
extern void func_80153C74();
extern u8 D_sc03_103_801B1C58;
extern u8 D_sc03_103_801A4D08;
extern u8 D_sc03_103_801A4D10;
extern u8 D_sc03_103_801A4D30;
extern SV4 D_sc03_103_801C1FA8;
extern void func_sc03_103_801836A8();
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern void func_8012C51C();
extern u8 D_sc03_103_801C4C60[];
extern void func_800233CC();
extern void func_8001CD50();
extern s32 func_8012C194();
extern void func_sc03_103_80183AEC();
extern u8 D_sc03_103_801C4B20[];
extern s32 func_sc03_103_80183B74();
extern s32 func_8012EFB8();
extern V16 D_sc03_103_801C2024;
extern s32 D_800A5EB0;
extern V16 D_sc03_103_801C205C;
extern s32 D_800A5E90;



extern u16 D_sc03_103_80187B44[];

void func_sc03_103_8017D174(u8 *obj, u8 *hdr, s32 ph, s32 dy) {
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
            v[0].y += D_sc03_103_80187B44[(v[0].z + p) & 0x1FF] + D_sc03_103_80187B44[(v[0].x + half) & 0x1FF];
            v[1].y += D_sc03_103_80187B44[(v[1].z + p) & 0x1FF] + D_sc03_103_80187B44[(v[1].x + half) & 0x1FF];
            v[2].y += D_sc03_103_80187B44[(v[2].z + p) & 0x1FF] + D_sc03_103_80187B44[(v[2].x + half) & 0x1FF];
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
                v[3].y += D_sc03_103_80187B44[(v[3].z + p) & 0x1FF] + D_sc03_103_80187B44[(v[3].x + half) & 0x1FF];
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

void func_sc03_103_8017DDD8(void) {
    D_801274C8 = &D_sc03_103_801881A4;
    D_801274CC = &D_sc03_103_80188258;
    func_sc03_103_8017E6D0(0);
}

void func_sc03_103_8017DE18(void) {
    D_801274C8 = &D_sc03_103_8018826C;
    D_801274CC = &D_sc03_103_801884C4;
    func_sc03_103_8017E6D0(1);
}

void func_sc03_103_8017DE58(void) {
    D_801274C8 = &D_sc03_103_801884D8;
    D_801274CC = &D_sc03_103_801884EC;
    func_sc03_103_8017E6D0(2);
    D_8012704C = 1;
}

void func_sc03_103_8017DEA4(u8 *arg0) {
    D_sc03_103_80188034[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_103_8017DEE0(u8 *arg0) {
    func_sc03_103_8017E110();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_103_8017DF24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_103_8017DF48(u8 *arg0) {
    D_sc03_103_8018803C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_103_8017DF84(u8 *arg0) {
    func_sc03_103_8017E138();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_103_8017DFC4(u8 *arg0) {
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

void func_sc03_103_8017E040(void) {
    func_800D1EBC();
}

void func_sc03_103_8017E060(u8 *arg0) {
    D_sc03_103_80188048[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_103_8017E09C(u8 *arg0) {
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

void func_sc03_103_8017E110(void) {
    func_8016EE40((s32) &D_sc03_103_80188054, 0x01000000);
}

void func_sc03_103_8017E138(void) {
    func_8016EE40((s32) &D_sc03_103_80188058, 0x01000000);
}

void func_sc03_103_8017E160(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_103_8017E290, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_103_8017E290((s32) &D_80126948);
}

void func_sc03_103_8017E1F8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_103_8017E290, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_103_8017E290((s32) &D_80126948);
}

void func_sc03_103_8017E290(s32 arg0) {
    D_sc03_103_8018805C[AF(arg0, u8, 4)]();
}

void func_sc03_103_8017E2CC(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_103_80188064)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc03_103_8017E5A4((s32) arg0, (s32) &v);
}

void func_sc03_103_8017E36C(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_103_80188068)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc03_103_8017E40C((s32) arg0, (s32) &v);
}

void func_sc03_103_8017E40C(u8 *arg0, u8 *arg1) {
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

void func_sc03_103_8017E5A4(u8 *arg0, u8 *arg1) {
    u8 unused[0x30];

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
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x40) = -0x3CD;
    AF(arg0, s32, 0x44) = -0x182;
}

s32 func_sc03_103_8017E6D0(s32 arg0) {
    return func_8013B7F4(D_sc03_103_801880AC[arg0], 0);
}

void func_sc03_103_8017E700(u8 *arg0) {
    D_sc03_103_801880B8[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017E73C(u8 *arg0) {
    func_8013C0F8((s32) &D_sc03_103_80197F1C);
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_103_8017E780(u8 *arg0) {
    func_sc03_103_8017D174((s32) &D_sc03_103_801C4D68, (s32) &D_sc03_103_80197F1C, (s32) AF(arg0, s16, 0xDC), 0);
    AF(arg0, s16, 0xDC) = (s16) ((u16) AF(arg0, s16, 0xDC) + 0xA);
}

void func_sc03_103_8017E7D0(u8 *arg0) {
    D_sc03_103_801880C0[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017E80C(u8 *arg0) {
    AF(arg0, s16, 0xDC) = 1;
    AF(arg0, s16, 0xDE) = 0;
    AF(arg0, s16, 0xE0) = 1;
    AF(arg0, s16, 0xE2) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_103_8017E830(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xDC) = 2U;
        func_sc03_103_8017E8F4((s32) &D_sc03_103_80199260, AF(arg0, s16, 0xDE) * 6);
        AF(arg0, s16, 0xDE) = (s16) (((u16) AF(arg0, s16, 0xDE) + 1) & 7);
    }
    temp_v0_2 = AF(arg0, u16, 0xE0) - 1;
    AF(arg0, u16, 0xE0) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 0xE0) = 8U;
        func_800183E0(D_sc03_103_8018806C[AF(arg0, s16, 0xE2)]);
        AF(arg0, s16, 0xE2) = (s16) (((u16) AF(arg0, s16, 0xE2) + 1) & 0xF);
    }
}

void func_sc03_103_8017E8F4(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

s32 func_sc03_103_8017E954(void) {
    if (D_8012704C == 0) {
        return 0x48;
    }
    return 0x4B;
}

void func_sc03_103_8017E974(u8 *arg0) {
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
        a.x = D_sc03_103_8019FFAC[i];
        a.z = D_sc03_103_8019FFAC[i + 1];
        b.x = D_sc03_103_8019FFAC[i + 2];
        b.z = D_sc03_103_8019FFAC[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_103_8019FFD4[i];
        a.z = D_sc03_103_8019FFD4[i + 1];
        b.x = D_sc03_103_8019FFD4[i + 2];
        b.z = D_sc03_103_8019FFD4[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_103_8019FFFC[i];
        a.z = D_sc03_103_8019FFFC[i + 1];
        b.x = D_sc03_103_8019FFFC[i + 2];
        b.z = D_sc03_103_8019FFFC[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_103_801A0024[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_103_8017EC0C(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_103_801A0070[AF(arg0, u16, 2)]();
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

void func_sc03_103_8017ED94(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0078);
        SetScript(arg0, &D_sc03_103_801A0138);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A01C0);
        SetScript(arg0, &D_sc03_103_801A0280);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_103_801A0364;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A0388;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_103_801A003C;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0078);
        SetScript(arg0, &D_sc03_103_801A0138);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A01C0);
        SetScript(arg0, &D_sc03_103_801A0280);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0374);
        SetScript(arg0, &D_sc03_103_801A0380);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0078);
        SetScript(arg0, &D_sc03_103_801A0138);
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

void func_sc03_103_8017F240(u8 *arg0) {
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

void func_sc03_103_8017F3D4(u8 *arg0) {
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

void func_sc03_103_8017F784(u8 *arg0) {
    s32 temp_v0;

    D_sc03_103_801A0398[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(AF(arg0, void *, 0x20), s32, 4) >= 0)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, 0x1C, 0xA) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        if (AF(arg0, s16, 0x70) == 1) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                AF(arg0, s32, 0x1C) = 8;
                func_8012C658(0x12F, 3, (s32) arg0);
            }
        }
    }
}

void func_sc03_103_8017F870(u8 *arg0) {
    D_sc03_103_801A0444[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017F8AC(u8 *arg0) {
    D_sc03_103_801A04F8[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017F8E8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_103_8017F900(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_103_8019FF78) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_103_8019FF58;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_103_8018445C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_103_8017F9A4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_103_8017F9C0(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_103_801A003C) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_103_8019FF58;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_103_8018445C, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_103_8017FA44(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_103_8017FA80(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_103_8017FAB0(s32 arg0) {
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

void func_sc03_103_8017FB34(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc03_103_801A0308);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_103_8017FBF8(s32 arg0) {
    s32 t;

    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        AF(AF(arg0, s32, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_8012E688(arg0, 0x679, 0);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u16, 0x12) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_103_8017FCD8(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_103_8017FD48(u8 *arg0) {
    SV8 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc03_103_801A0308);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_103_8017FE24(void) {
}

void func_sc03_103_8017FE2C(u8 *arg0) {
    s32 t;

    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) -= 0x100;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= 0x100;
    if (AF(AF(arg0, u8 *, 0x20), s16, 0x1A) <= 0x80) {
        if (AF(arg0, s16, 0x70) == 1) {
            t = AF(arg0, s32, 0xCC);
            if (arg0 != NULL) {
                func_8012C218(t);
            }
        }
        func_8002A04C(arg0);
        func_8012C218(arg0);
    }
}

void func_sc03_103_8017FEE4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_103_801A03D0) != 0) {
        SetScript(arg0, (s32) &D_sc03_103_8018445C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc03_103_801A0404[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc03_103_801A0406[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc03_103_801A0408[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc03_103_801A040A[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_103_8017FFA8(s32 arg0) {
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

void func_sc03_103_8017FFFC(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc03_103_801A040A[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc03_103_80180078(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_103_801A0450);
    SetScript(arg0, &D_sc03_103_801A04B0);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x10;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x10;
    AF(arg0, s32, 0x94) = rand() & 7;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
    if ((u16)(AF(arg0, u16, 0x70) - 1) >= 0x6FFF) {
        AF(arg0, u16, 0x70) = rand() & 0x77FF;
        st = 2;
    } else {
        st = 1;
    }
    AF(arg0, s16, 2) = st;
}

void func_sc03_103_8018015C(u8 *arg0) {
    s32 v;
    u16 a;
    void *p;
    s16 s;

    v = AF(arg0, s32, 0x1C);
    if (v == 0) {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
        a = AF(arg0, u16, 0xFE) + 0x40;
        AF(arg0, u16, 0xFE) = a;
        if ((s16) a >= 0x800) {
            AF(arg0, u16, 0xFE) = 0;
            AF(arg0, s32, 0x1C) = rand() & 0x1F;
            AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
        }
        s = (AF(arg0, s16, 0x70) * rsin(AF(arg0, s16, 0xFE)) >> 12) + 0x800;
        p = AF(arg0, void *, 0x20);
        AF(p, s16, 0x1A) = s;
        AF(p, s16, 0x18) = s;
    } else {
        AF(arg0, s32, 0x1C) = v - 1;
    }
}

void func_sc03_103_80180228(u8 *o) {
    s32 n;
    s32 t;
    u8 *p;
    u8 *q;

    n = AF(o, s32, 0x1C);
    if (n == 0) {
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 0xFE) += 0x40;
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0x1C) = rand() & 0x1F;
            AF(o, s16, 0x70) = rand() & 0x77FF;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        }
        t = ((AF(o, s16, 0x70) * rsin(AF(o, s16, 0xFE))) >> 12) + 0x800;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x1A) = t;
        AF(q, s16, 0x18) = t;
    } else {
        AF(o, s32, 0x1C) = n - 1;
    }
}

void func_sc03_103_80180300(u8 *arg0) {
    s32 temp_v0;

    D_sc03_103_801A23F4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_103_80180FD4((s32) arg0);
        }
    }
}

void func_sc03_103_8018037C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_103_801A2388) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *) &D_sc03_103_801A23CC;
        AF(arg0, s32, 0xC4) |= 1;
        AF(arg0, s32, 0xE4) = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc03_103_801A48E4);
        func_80143994(arg0, 0x1000);
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc03_103_8018043C(u8 *arg0) {
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

void func_sc03_103_80180564(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc03_103_80180F10(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && func_8012BEE8(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc03_103_80180FBC(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc03_103_801806D4(u8 *arg0) {
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

void func_sc03_103_80180868(u8 *arg0) {
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

void func_sc03_103_80180ABC(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    func_8012B0B4(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc03_103_80180F10(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_103_80180BC8(u8 *arg0) {
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
        func_sc03_103_80180F10(&sp10, arg0, &D_sc03_103_801A23C4);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        func_8012B178(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        func_8012CBF4(arg0);
        if (func_sc03_103_80180EE4(arg0) != one && func_8012BEE8(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc03_103_80180D64(s32 arg0) {
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
        SetScript(arg0, (s32) &D_sc03_103_801A48E4);
    }
}

void func_sc03_103_80180E20(s32 arg0) {
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

void func_sc03_103_80180EAC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_103_801A48E4);
}

s32 func_sc03_103_80180EE4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_103_801A2414, (s32) (&D_sc03_103_801A2414 + 8), 5) != 0;
}

s32 func_sc03_103_80180F10(s32 *arg0, u8 *arg1, u16 *arg2) {
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

s32 func_sc03_103_80180FBC(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_103_80180FD4(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc03_103_80181040(u8 *arg0) {
    UV4 a;
    UV4 b;
    u16 s;
    u8 *o;
    s16 t;
    u16 v;

    func_8002AC00(0xD);
    if (AF(arg0, u16, 0) != 0) {
        b.x = a.x = AF(arg0, u16, 6);
        b.y = a.y = AF(arg0, u16, 0xA);
        b.z = a.z = AF(arg0, u16, 0xE);
        a.y -= 8;
        b.y += 8;
        if (!(func_8012CEB0(&a, &b, 0) & 0x1F) && !(AF(arg0, s16, 0x100) & 0x8000)) {
            s = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
            func_8001C214(AF(arg0, u8 *, 0x20), &D_sc03_103_801AAE14);
            SetScript(arg0, &D_sc03_103_801B2558);
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) = s;
            o = (u8 *)func_8012C658(0x12C, 1, arg0);
            if (o != 0) {
                if (AF(arg0, s16, 0xA) >= 0x10) {
                    func_8012C218(o);
                    return;
                }
                AF(AF(o, u8 *, 0x20), u16, 0x12) = s;
                func_8012B030(o);
                if (AF(arg0, s16, 0x70) == 5) {
                    v = AF(arg0, u16, 0x100);
                    AF(o, s16, 0x70) = 6;
                    AF(o, s16, 0xFE) = 1;
                    AF(o, u16, 0x100) = v;
                    do {
                        func_8012C658(0x12F, 5, o);
                        t = AF(o, s16, 0xFE) + 3;
                        AF(o, s16, 0xFE) = t;
                    } while (t < 0x10);
                    AF(o, s16, 0xFE) = 0;
                }
            }
        }
    }
}

void func_sc03_103_801811C4(u8 *arg0) {
    s16 t;

    if (func_8012C354(arg0, &D_sc03_103_801A4A80[AF(arg0, s16, 0x70)]) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    func_80143970(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc03_103_801B1460);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A4BB8;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc03_103_801B0D28);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A4C58;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc03_103_801B23D8);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A4CA0;
        break;
    case 4:
        SetScript(arg0, &D_sc03_103_801B1460);
        AF(arg0, s16, 2) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A4BB8;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc03_103_801B2258);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc03_103_801B1460);
            AF(arg0, s16, 2) = 1;
        }
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A4BB8;
        AF(arg0, s16, 0xFE) = 1;
        do {
            func_8012C658(0x12F, 5, arg0);
            t = AF(arg0, s16, 0xFE) + 1;
            AF(arg0, s16, 0xFE) = t;
        } while (t < 6);
        AF(arg0, s16, 0xFE) = 0;
        break;
    }
    func_8012B2CC(arg0);
}

void func_sc03_103_801813E8(u8 *arg0) {
    s32 vec[8];
    SV a;
    SV b;
    SV c;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 ax;
    s32 r;

    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript(arg0, &D_sc03_103_801B1460);
        AF(arg0, s16, 0xFE) = 0;
    }
    AF(arg0, s16, 0xFC)++;
    if (func_8012BE98(arg0, arg0 + 0x88) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    vec[0] = 0;
    vec[1] = 0;
    vec[2] = -(AF(arg0, s16, 0xFC) << 17) / 24;
    func_8012B1B4(arg0, vec);
    if (!(((s32 (*)())func_8012CBA4)(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    r = 0x30;
    a.vx = AF(arg0, s16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.vy = AF(arg0, s16, 0xA) - 0x20;
    a.vz = AF(arg0, s16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.vx = a.vx;
    b.vy = a.vy + 0x60;
    b.vz = a.vz;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    if (AF(arg0, s16, 0xFE) == 0 && func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        SetScript(arg0, &D_sc03_103_801B0DD0);
        AF(arg0, s16, 2) = 2;
        c.vx = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        c.vy = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        c.vz = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&c, &sxy, &p, &flag);
        if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16)(((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            x = ((s16 *)&sxy)[0];
            ax = x;
            if (x < 0) {
                ax = -x;
            }
            ax = (0xA0 - ax) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 16) {
                x = 15;
            }
            x <<= 8;
            func_8002D4C8(0xA9B, (u16)(ax | 0x3000 | x));
        }
    }
    if (AF(arg0, s16, 0xFC) == 0x18) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_103_8018179C(u8 *arg0) {
    s32 v[4];
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    AF(arg0, s16, 0xFC)++;
    v[0] = 0;
    v[1] = 0;
    v[2] = -(AF(arg0, s16, 0xFC) << 17) / 36;
    func_8012B1B4(arg0, v);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = func_8012BCCC(arg0);
    if (t < 0x1001 && func_8012BDBC(arg0, 0x200) == 1) {
        if (!(rand() & 3)) {
            SetScript(arg0, &D_sc03_103_801B1D60);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc03_103_801B16E0);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc03_103_801B1F68);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_103_801819DC(u8 *arg0) {
    u8 unused[0x10];
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    u8 *q;
    s32 x;
    s32 a;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    func_8012B1B4(arg0, &D_sc03_103_801A4D18);
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 7;
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            a = x;
            if (x < 0) {
                a = -x;
            }
            a = (0xA0 - a) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8;
            func_8002D4C8(0xA9B, (u16)(a | 0x3000 | x));
        }
    }
}

void func_sc03_103_80181C44(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    func_8012B1B4(arg0, &D_sc03_103_801A4D18);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = func_8012BCCC(arg0);
    if (t < 0x2401 && func_8012BDBC(arg0, 0x200) == 1) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, &D_sc03_103_801B1A20);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_103_80181DEC(u8 *arg0) {
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    s32 x;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xD) {
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            if (x < 0) {
                x = -x;
            }
            x = (0xA0 - x) * 0x7F / 160;
            func_8002D4C8(0x702, (u16)(x | 0x1000));
        }
    }
    if (func_8012BCCC(arg0) <= 0x24000) {
        if (++AF(arg0, s16, 0x102) >= 0x78) {
            if (!(AF(arg0, u16, 0x100) & 0x2000)) {
                SetScript(arg0, &D_sc03_103_801B2570);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc03_103_801A4A50 | 0x40000000 | 0x20000000;
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0x100) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62 - 0x80) {
        AF(arg0, s16, 0xA) = y - 8;
    }
    func_8012B1B4(arg0, &D_sc03_103_801A4D24);
    func_8012CBCC(arg0);
}

void func_sc03_103_80182038(u8 *arg0) {
    s32 v[4];
    s32 d;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 0x98) = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 4);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    v[0] = 0;
    v[1] = 0;
    d = AF(arg0, s32, 4) - D_80126B5C;
    v[2] = d;
    if (d > 0) {
        v[2] = -d;
    }
    d = AF(arg0, s32, 0xC) - D_80126B64;
    v[3] = d;
    if (d > 0) {
        v[3] = -d;
    }
    v[2] = (v[2] + v[3]) >> 4;
    func_8012B1B4(arg0, v);
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0xA) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62) {
        AF(arg0, s16, 0xA) = y - 8;
    } else if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x98) = 1;
    }
    func_8012CBCC(arg0);
}

void func_sc03_103_80182184(u8 *arg0) {
    u8 *p;
    s32 i;

    D_sc03_103_801A4D3C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0 && (AF(arg0, u16, 0x100) & 0x1000)) {
        for (p = &D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x15E) {
                if (AF(arg0, s16, 6) < AF(p, s16, 6) + 0xF0) {
                    AF(arg0, s16, 6) = AF(p, s16, 6) + 0xF0;
                }
                return;
            }
        }
    }
}

void func_sc03_103_8018223C(u8 *arg0) {
    s16 v[8];
    s32 r[2];
    s32 t;
    u8 *o;
    u8 *g;

    g = D_801151D4;
    AF(arg0, s32, 0x1C) -= 1;
    v[1] = AF(g, s32, 0x5C);
    v[3] = AF(g, s32, 0x60);
    v[5] = AF(g, s32, 0x64);
    func_8012B77C(r, arg0 + 4, v);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = (r[0] + 0x400) & 0xFFF;
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0x55;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) += 0x55;
    t = AF(arg0, s32, 0x1C);
    if (t == 0xF) {
        func_8002D4C8(0xCBA, 0);
        t = AF(arg0, s32, 0x1C);
    }
    if (t < 0x10) {
        if (t == 0) {
            func_8012C218(arg0);
            return;
        }
        o = (u8 *) func_80143C74(arg0, 0);
        if (o != 0) {
            AF(o, s16, 0x16) = -4;
            AF(o, s16, 0x12) = (rand() & 7) - 4;
            AF(o, s16, 0x1A) = (rand() & 7) - 4;
            AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
            AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
        }
    }
}

void func_sc03_103_80182390(u8 *arg0) {
    D_sc03_103_801A4DCC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0x14) == 1) {
            func_8012C218((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        func_8012B370(arg0);
    }
}

void func_sc03_103_8018243C(u8 *arg0) {
    D_sc03_103_801A4F2C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624(arg0, 0x10, 0x16) == 1) {
            s16 *q = &D_80126B96;
            *q |= 0x200;
            func_8012C218(arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc03_103_801824EC(u8 *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.vx = x;
    b.vx = x;
    y = AF(arg0, u16, 0xA);
    a.vy = y;
    b.vy = y;
    z = AF(arg0, u16, 0xE);
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (func_8012CEB0(&a, &b, 0) & 0x1F) {
        func_80131E00(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc03_103_801B22F0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A4BB8;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x58) = (s32)&D_sc03_103_801A4A50 | 0x40000000 | 0x20000000;
    AF(arg0, u16, 0x88) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x8A) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x8C) = AF(arg0, u16, 0xE);
}

void func_sc03_103_801825D4(u8 *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.vx = x;
    b.vx = x;
    y = AF(arg0, u16, 0xA);
    a.vy = y;
    b.vy = y;
    z = AF(arg0, u16, 0xE);
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (func_8012CEB0(&a, &b, 0) & 0x1F) {
        AF(arg0, u16, 0x100) |= 0x8000;
        func_80131E00(arg0, 6);
        return;
    }
    if (AF(arg0, u8 *, 0x90) == &D_sc03_103_801B08A8) {
        SetScript(arg0, &D_sc03_103_801B06A0);
        AF(arg0, s16, 2) = 0x14;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, u8 *, 0xCC) = &D_sc03_103_801B1460;
    } else {
        if (AF(arg0, s16, 0xFE) != 0) {
            SetScript(arg0, &D_sc03_103_801B1F68);
        } else {
            SetScript(arg0, &D_sc03_103_801B1460);
        }
        AF(arg0, s16, 2) = 1;
    }
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc03_103_801826F0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        if (AF(arg0, s16, 0x70) == 4) {
            temp_v0 = func_8012C658(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0x88) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, u16, 0x8C) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0x8A) - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) AF(arg0, u16, 0x8A);
                func_8012B2CC(temp_v0);
            }
        }
        if (func_80153BD8((s32) arg0) != 0) {
            func_80153BF0((s32) arg0);
        }
        if (AF(arg0, s32, 0x78) != 0) {
            func_8002A04C((s32) arg0);
        }
        func_8012C098((s32) arg0);
    }
}

void func_sc03_103_801827D0(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        func_8012B1B4(arg0, &D_sc03_103_801A4A34);
        if (!(func_8012CBA4(arg0) & 0x6000)) {
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            b = a;
            b.y += 8;
            if (func_80133784(1, &a, &b) != 0) {
                AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
                AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
                AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
            }
        }
    }
}

void func_sc03_103_801828A8(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_103_80182910(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_103_8018294C(u8 *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = AF(arg0, u16, 6);
    a.vx = x;
    b.vx = x;
    y = AF(arg0, u16, 0xA);
    a.vy = y;
    b.vy = y;
    z = AF(arg0, u16, 0xE);
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (func_8012CEB0(&a, &b, 0) & 0x19) {
        func_80131E00(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc03_103_801B23D8);
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc03_103_801829F0(u8 *arg0) {
    UV4 a;
    UV4 b;

    func_8012B1B4(arg0, &D_sc03_103_801A4A34);
    if (!(func_8012CBA4(arg0) & 0x6000)) {
        a.x = AF(arg0, u16, 0x3A);
        a.y = AF(arg0, u16, 0x3E);
        a.z = AF(arg0, u16, 0x42);
        b = a;
        b.y += 8;
        if (func_80133784(1, &a, &b) != 0) {
            AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
            AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
            AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        }
    }
}

void func_sc03_103_80182AB0(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_103_801A4A44);
}

void func_sc03_103_80182AE4(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_103_80182B40(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_103_80182B78(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0F40, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

void func_sc03_103_80182BD4(s32 arg0) {
    s32 temp_v1;

    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc03_103_801B0F40);
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && func_8012DEB8(arg0, (s32) &D_sc03_103_801A4CF8, (s32) &D_sc03_103_801A4D00) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_103_80182CAC(u8 *arg0) {
    s32 var_a0;

    if (AF(arg0, s32, 0x94) == 0x17) {
        if (AF(arg0, s16, 0x70) == 2) {
            var_a0 = 0x1A7;
        } else {
            func_8002D4C8(0xCB3, 0);
            var_a0 = 0x19F;
        }
        func_8012C588(var_a0, (s32) arg0);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0F40);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_103_80182D40(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc03_103_801B1C58);
        AF(arg0, s16, 0x34) = 7;
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    if (AF(arg0, s32, 0x94) == 0x17 && func_8012DEB8(arg0, (s32) &D_sc03_103_801A4CF8, (s32) &D_sc03_103_801A4D00) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_103_80182E0C(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        func_8012B1B4((s32) arg0, (s32) &D_sc03_103_801A4D30);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0D28);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && func_8012D5E4((s32) arg0, (s32) &D_sc03_103_801A4D08, (s32) &D_sc03_103_801A4D10, 0x14) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &D_80126B96;
            D_80126B98 = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc03_103_80182EE4(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0D28);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_103_801A4A60 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_103_80182F80(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_103_80182FD8(void) {
}

void func_sc03_103_80182FE0(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_103_801A4CF8, (s32) &D_sc03_103_801A4D00) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_103_801B17E8);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_103_801B1F68);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_103_80183080(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_103_801B1F68);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_103_801830D4(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_103_801A4CF8, (s32) &D_sc03_103_801A4D00) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_103_801B1B28);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_103_801B23D8);
    AF(arg0, s16, 2) = 6;
}

void func_sc03_103_80183168(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_103_801B1C58);
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 8;
    }
}

void func_sc03_103_801831B0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_103_801831D8(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

void func_sc03_103_80183224(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_103_801A4D90);
    SetScript((s32) arg0, (s32) &D_sc03_103_801A4DA8);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_103_801A4DC0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_103_80183310(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_8012CBCC(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        func_8002D4C8(0xCB4, 0);
    }
}

void func_sc03_103_80183394(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_103_801A4DD8);
    SetScript((s32) arg0, (s32) &D_sc03_103_801A4E98);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_103_801A4F20);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_103_801834A0(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_103_801834D8(u8 *arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x200);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x200);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) < 0x401) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_103_80183544(u8 *arg0) {
    D_sc03_103_801C1F98[AF(arg0, u16, 2)]();
}

void func_sc03_103_80183580(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_103_80183760();
        return;
    }
    var_v0 = &D_sc03_103_801C4C64;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

void func_sc03_103_801835F8(u8 *arg0) {
    s32 d;
    s32 r;
    u16 n;

    if (func_8012BEE8(arg0) != 0) {
        r = rand();
        n = AF(arg0, u16, 0xFC);
        d = ((s16)n / 2 - (r & (n - 1))) * 2;
        D_sc03_103_801C1FA8.x = AF(arg0, u16, 6) + d;
        D_sc03_103_801C1FA8.y = AF(arg0, u16, 0xA);
        D_sc03_103_801C1FA8.z = AF(arg0, u16, 0xE) + d;
        func_sc03_103_801836A8(arg0, &D_sc03_103_801C1FA8);
        AF(arg0, s32, 0x1C) = (rand() & 0x7F) + 0x40;
    }
}

void func_sc03_103_801836A8(u8 *arg0, u8 *arg1) {
    s32 i;

    i = 0;

    if (func_8012E778(arg0, ((D_800AF7BE >> 1) << 16) | (D_800AF7BC >> 1))) {
        for (; i < 5; i++) {
            if (D_sc03_103_801C4C60[i] == 0) {
                D_sc03_103_801C4C60[i] = 1;
                AF(arg1, s32, 0x10) = i | 0x80000000;
                AF(arg1, u16, 8) = AF(arg0, u16, 0x70);
                func_8012C51C(arg1, arg0);
                return;
            }
        }
    }
}

void func_sc03_103_80183760(u8 *arg0) {
    s32 o;
    u8 *p;

    p = (AF(arg0, s16, 0xDC) << 6) + D_sc03_103_801C4B20;
    AF(arg0, s16, 0xFC) = 0x7000;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x106) = 0;
    o = func_8012C194();
    AF(arg0, s32, 0x20) = o;
    if (o != 0) {
        func_8001CD50(o, p);
        AF(o, s16, 0x10) = 0x400;
        AF(o, s32, 4) |= 0x60000000;
        func_800233CC(p, 0x40);
        AF(p, s32, 0) = 0x808080;
        AF(p, s32, 4) = 0x808080;
        func_sc03_103_80183AEC(arg0);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_103_80183820(u8 *arg0) {
    void *a1;
    u16 t;
    s16 b;
    a1 = AF(arg0, void *, 0x20);
    if (a1 != NULL) {
        t = AF(a1, u16, 0x1A) - 0x100;
        AF(a1, u16, 0x1A) = t;
        AF(a1, u16, 0x18) = t;
        if (AF(a1, s16, 0x1A) < 0) {
            AF(a1, u16, 0x1A) = 0;
            AF(a1, u16, 0x18) = 0;
        }
    }
    if (AF(arg0, s16, 0xFE) >= 0x6000) {
        AF(arg0, s16, 0xFE) = 0x6000;
    } else {
        AF(arg0, u16, 0x106) += 0x400;
        AF(arg0, u16, 0xFE) += AF(arg0, u16, 0x106);
    }
    AF(arg0, u16, 0x104) -= 0x80;
    b = AF(arg0, u16, 0xFC) + AF(arg0, u16, 0x104);
    AF(arg0, s16, 0xFC) = b;
    if (b < 0) {
        D_sc03_103_801C4C60[AF(arg0, s16, 0xDC)] = 0;
        func_8012C218(arg0);
        return;
    }
    func_sc03_103_801838EC(arg0);
}

void func_sc03_103_801838EC(u8 *arg0) {
    QuadArg q;
    WMtx m;
    SV r;

    q.code = 0x50000000;
    *(s32 *) &q.c[0] = 0x80;
    *(s32 *) &q.c[1] = 0x80;
    *(s32 *) &q.c[2] = 0;
    *(s32 *) &q.c[3] = 0;
    q.p[0] = D_sc03_103_801C1FBC;
    q.p[1] = D_sc03_103_801C1FC4;
    q.p[2] = D_sc03_103_801C1FCC;
    q.p[3] = D_sc03_103_801C1FD4;
    func_80017DC4(arg0 + 0xFC, &m);
    RotMatrixY((s16) func_8012A758(), &m);
    func_80015978(arg0 + 4, &r);
    func_80017E68(&r, &m);
    func_80017758(&q, &m);
    q.code = 0x60000000;
    *(s32 *) &q.c[0] = 0x808080;
    *(s32 *) &q.c[1] = 0x808080;
    q.p[0] = D_sc03_103_801C1FDC;
    q.p[1] = D_sc03_103_801C1FE4;
    q.p[2] = D_sc03_103_801C1FEC;
    q.p[3] = D_sc03_103_801C1FF4;
    func_80017758(&q, &m);
}

void func_sc03_103_80183AEC(u8 *arg0) {
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8002D4C8(0x6D5, 0);
        break;
    case 1:
        func_8002D4C8(0x856, (func_sc03_103_80183B74() | 0x2000) & 0xFFFF);
        break;
    case 2:
        func_8002D4C8(0x857, (func_sc03_103_80183B74() | 0x2000) & 0xFFFF);
        break;
    }
}

s32 func_sc03_103_80183B74(u8 *arg0) {
    SV r;
    s32 v;

    func_80015978(arg0 + 4, &r);
    if (func_8012EFB8(&r, &r) & ~0x1000) {
        v = 1;
    } else {
        v = (r.vx << 6) / 160 + 0x40;
    }
    if (v <= 0) {
        v = 1;
    } else if (v >= 0x80) {
        v = 0x7F;
    }
    return v;
}

void func_sc03_103_80183BF8(u8 *arg0) {
    D_sc03_103_801C20DC[AF(arg0, u16, 2)]();
}

void func_sc03_103_80183C34(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_103_801C1FFC, D_sc03_103_801C1FFE, D_sc03_103_801C2000);
        p = &D_sc03_103_801C2004;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_103_801C2034, D_sc03_103_801C2036, D_sc03_103_801C2038);
        p = &D_sc03_103_801C203C;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_103_801C206C, D_sc03_103_801C206E, D_sc03_103_801C2070);
        p = &D_sc03_103_801C2074;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_103_801C1FFC, D_sc03_103_801C1FFE, D_sc03_103_801C2000);
        p = &D_sc03_103_801C2004;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_103_801C20A4, D_sc03_103_801C20A6, D_sc03_103_801C20A8);
        p = &D_sc03_103_801C20AC;
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

void func_sc03_103_80183E28(u8 *arg0) {
    D_800A5E88.c = D_sc03_103_801C2024;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_103_80183ED8(u8 *arg0) {
    D_800A5E88.c = D_sc03_103_801C205C;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_103_80183F88(u8 *arg0) {
    D_800A5E88.a = D_sc03_103_801C2074.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_103_80184038(void) {
}

void func_sc03_103_80184040(u8 *arg0) {
    D_800A5E88.a = D_sc03_103_801C20AC.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}
