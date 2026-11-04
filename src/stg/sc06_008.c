#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_008_8017BE9C(void) {
}

void func_sc06_008_8017BEA4(void) {
}

void func_sc06_008_8017BEAC(void) {
}

void func_sc06_008_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_008_8018939C[])();
extern void (*D_sc06_008_80189218[])();
extern void (*D_sc06_008_8019EF48[])();
extern void (*D_sc06_008_8019EFC0[])();
extern void (*D_sc06_008_8019EEC0[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_008_80189200;
extern void (*D_sc06_008_80189220[])();
extern u8 D_sc06_008_8018920C;
extern void (*D_sc06_008_8018929C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern V3 D_80126B5C;
void func_sc06_008_8017D400(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_008_801892A4[])();
void func_sc06_008_8017D428(void);
extern void func_800D1EBC();
extern void (*D_sc06_008_801892B0[])();
extern u8 D_sc06_008_801892BC;
extern void func_8016EE40();
extern u8 D_sc06_008_801892C0;
extern void func_sc06_008_8017D4E8();
extern void (*D_sc06_008_801892CC[])();
extern void (*D_sc06_008_80189560[])();
extern void func_sc06_008_8017DFEC();
extern void (*D_sc06_008_801895AC[])();
extern void (*D_sc06_008_80189604[])();
extern void (*D_sc06_008_80189620[])();
extern void (*D_sc06_008_8019C968[])();
extern void (*D_sc06_008_8019C988[])();
extern void (*D_sc06_008_8019E73C[])();
extern void (*D_sc06_008_801A6970[])();
extern void (*D_sc06_008_801A69A8[])();
extern void (*D_sc06_008_801A6BB0[])();
extern u8 D_sc06_008_801A6B60;
extern void func_80178CBC();
extern void (*D_sc06_008_801A75D0[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern s32 D_sc06_008_80185B40[];
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc06_008_801A72C0;
extern s32 * func_sc06_008_801856D0();
extern s32 D_sc06_008_801A7328[];
extern s32 func_8012C658();
extern void func_80029124();
extern s32 D_sc06_008_801A74F4;
extern s32 D_sc06_008_801A74F8;
extern s32 D_sc06_008_801A750C;
extern s32 D_sc06_008_801A7520;
extern s32 D_sc06_008_801A758C;
extern s32 D_sc06_008_801A7470[];
extern s32 D_sc06_008_801A73EC[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc06_008_80185478();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc06_008_801A75F8[])();
extern u8 D_sc06_008_801A72F4;
extern u8 D_sc06_008_801A7070;
extern u8 D_sc06_008_801A7290;
extern s32 func_8002D4C8();
extern u8 D_sc06_008_801A7080;
extern u8 D_sc06_008_801A7188;

void func_sc06_008_8017BEBC(u8 *arg0) {
    D_sc06_008_80189218[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc06_008_80189200, 0xFD);
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

void func_sc06_008_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc06_008_8017C150(u8 *arg0) {
    D_sc06_008_80189220[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc06_008_8018920C, 0x18);
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

void func_sc06_008_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_8012C098();
extern void func_80016714();
extern void func_sc06_008_8017EF54();
extern void (*D_sc06_008_8019C93C[])();
extern s32 func_8012C044();
extern void func_8002A04C();
extern void func_sc06_008_8017ED80();
extern void func_80131E00();
extern s32 func_80143C74();
extern s32 func_8012BEE8();
extern void func_801319E0();
extern s32 func_8012CBF4();
extern void func_80131C78();
extern void func_8012B370();
extern void func_8012AD80();
extern u8 D_800D3918;
extern u8 D_sc06_008_8019C954;
extern u8 D_sc06_008_8019C960;
extern void func_8012B14C();
extern s32 func_8012D5E4();
extern s32 D_sc06_008_801AA178;
extern s32 func_8012C588();
extern u8 D_sc06_008_801A636C;
extern u8 D_sc06_008_801A646C;
extern u8 D_sc06_008_801A656C;
extern void func_8001C214();
extern void func_8012B23C();
extern u8 D_sc06_008_8019EEF4;
extern u8 D_sc06_008_8019EF28;
extern u8 D_sc06_008_801A3E2C;
extern void func_8012B030();
extern u8 D_sc06_008_8019EF6C;
extern u8 D_sc06_008_8019EFA0;
extern u8 D_sc06_008_801A4B98;
extern u8 D_sc06_008_801A693C;
extern void (*D_sc06_008_801A6964[])();
extern void StartRumbleScript();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern s32 func_sc06_008_80183DB8();
extern s32 func_80147324();
extern s32 func_80146CA0();
extern void func_80147364();
extern void func_8014BC44();
extern s32 func_80151664();
extern s8 D_sc06_008_801AA193;
extern void func_80146E90();
extern void func_801495C4();
extern s32 func_80146E98();
extern void func_sc06_008_801843B8();
extern u8 D_sc06_008_801A69DC;
extern void (*D_sc06_008_801A6A04[])();

extern u8 D_sc06_008_801A6AB0;
extern s32 * func_sc06_008_80184E94();
extern s32 D_sc06_008_801AA6DC;
extern void func_800296F8();

extern void func_8002931C();

extern u8 D_sc06_008_801AA180[];

extern void func_8012AD50();

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
extern u8 D_sc06_008_801892D0;
extern u8 D_sc06_008_801892F0;
extern u8 D_sc06_008_801893B4;
extern u8 D_sc06_008_801895B8;
extern void func_8001CC3C();
extern void func_80015978();
extern void func_8012EF70();
extern void func_80015954();
extern void func_801292C8();
extern void func_sc06_008_8017E6F0();
extern s32 func_sc06_008_8018494C();
extern s32 func_8012F568();

extern void (*D_sc06_008_801893E8[])();
extern s32 func_sc06_008_8017E37C();

extern u8 D_sc06_008_8019A568;
extern u8 D_sc06_008_8019A61C;
extern s32 D_sc06_008_801A9FF0;
extern s32 D_sc06_008_801A9FF4;
extern s32 D_sc06_008_801A9FF8;
extern s32 D_sc06_008_801A9FFC;
extern s32 D_sc06_008_801AA7AC;
extern void func_sc06_008_8017E140();
extern s32 func_801290DC();


extern void func_8012B2CC();
extern u8 D_sc06_008_8019E628;
extern s32 func_8012C1B8();
extern u8 D_sc06_008_801A6944;
extern s32 func_801511E0();
extern s32 func_80154274();
extern s32 func_80149020();
s32 func_sc06_008_80183FCC();
extern s32 func_80172630();

#define OR(a, b) ((a) | (b))
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern void SetRotMatrix(WMtx *m);
extern void SetTransMatrix(WMtx *m);
extern s32 func_8012913C();
extern void *D_801151D4;
extern u8 D_sc06_008_801A61D4;
extern u8 D_sc06_008_801A625C;
extern u8 D_sc06_008_801A62E4;
extern s32 D_sc06_008_8019ED14[];

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc06_008_801AA000[4];
extern CV D_sc06_008_801AA020;
extern CV D_sc06_008_801AA024;
extern u8 D_sc06_008_801AA028;
extern u8 D_sc06_008_801AA029;
extern u8 D_sc06_008_801AA02A;
extern u8 D_sc06_008_801AA02C;
extern u8 D_sc06_008_801AA02D;
extern u8 D_sc06_008_801AA02E;
extern s32 D_sc06_008_801AA030;
extern void func_80013F3C();
extern void func_80017714();
extern SV8 D_sc06_008_801AA694[4];
extern CV D_sc06_008_801AA6B4;
extern CV D_sc06_008_801AA6B8;
extern u8 D_sc06_008_801AA6BC;
extern u8 D_sc06_008_801AA6BD;
extern u8 D_sc06_008_801AA6BE;
extern u8 D_sc06_008_801AA6C0;
extern u8 D_sc06_008_801AA6C1;
extern u8 D_sc06_008_801AA6C2;
extern s32 D_sc06_008_801AA6C4;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_008_8017C294(u8 *obj) {
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

void func_sc06_008_8017D174(void) {
    func_8002931C(0x01A40000);
}

void func_sc06_008_8017D194(u8 *arg0) {
    D_sc06_008_8018929C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_008_8017D1D0(u8 *arg0) {
    func_sc06_008_8017D400();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_008_8017D214(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_008_8017D238(u8 *arg0) {
    D_sc06_008_801892A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_008_8017D274(u8 *arg0) {
    func_sc06_008_8017D428();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_008_8017D2B4(u8 *arg0) {
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

void func_sc06_008_8017D330(void) {
    func_800D1EBC();
}

void func_sc06_008_8017D350(u8 *arg0) {
    D_sc06_008_801892B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_008_8017D38C(u8 *arg0) {
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

void func_sc06_008_8017D400(void) {
    func_8016EE40((s32) &D_sc06_008_801892BC, 0x01000000);
}

void func_sc06_008_8017D428(void) {
    func_8016EE40((s32) &D_sc06_008_801892C0, 0x01000000);
}

void func_sc06_008_8017D450(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x384;
    D_80126968 = 0x3C7;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_008_8017D4E8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_008_8017D4E8((s32) &D_80126948);
}

void func_sc06_008_8017D4E8(s32 arg0) {
    D_sc06_008_801892CC[AF(arg0, u8, 4)]();
}

extern u8 D_sc06_008_801A69E4;


typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
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
extern void func_sc06_008_8017D5A4();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern u8 D_sc06_008_801AA194;
extern s32 func_sc06_008_80184278();

extern u8 D_sc06_008_8019EEB0;
extern u8 D_sc06_008_801A666C;
extern u8 D_sc06_008_801A675C;
extern u8 D_sc06_008_801A684C;
extern s32 func_8012B1B4();
extern s32 func_8012CBCC();
extern s32 func_sc06_008_80180A98();
extern s32 func_8012B8E4();

extern s32 func_80133784();
extern u8 D_sc06_008_8019C808;
extern u8 D_sc06_008_8019C83C;
extern u8 D_sc06_008_8019E258;
extern u8 D_sc06_008_8019E530;
extern u8 D_sc06_008_8019E548;
extern void func_80143970();
extern void func_8012B200();
extern s32 D_80126B60;
extern s32 func_sc06_008_8017EC48();
extern u8 D_sc06_008_8019E6E8;

extern u8 D_sc06_008_8019C970;
extern u8 D_sc06_008_8019EE30;
extern void func_8016AA50();
extern void func_8016B428();
extern void func_8002A520();
extern void func_8002A790();
extern u8 D_sc06_008_8019ED54;
extern u8 D_sc06_008_8019ED74;
extern u8 D_sc06_008_8019ED94;
extern u8 D_sc06_008_8019ED9C;
extern u8 D_sc06_008_8019EE50;
extern u8 D_sc06_008_8019EE90;
extern u8 D_sc06_008_801A30BC;

extern u8 D_sc06_008_8019C904;
extern u8 D_sc06_008_8019C90C;
extern u8 D_sc06_008_8019C914;
extern u8 D_801152A8;
extern u8 D_sc06_008_8019E704;
extern WMtx *D_sc06_008_8019E738;
extern WMtx D_sc06_008_801AA158[];
extern void SetScript();
extern s32 rand();
extern void RotMatrixZ();
extern void MulMatrix0();
extern void RotMatrixYXZ();
extern void func_80017DC4();
extern void func_80017E68();
extern s32 func_80134510();
extern s8 D_sc06_008_8019E6F0[];
extern void func_80017758();
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern s32 func_8012BE54();
extern u16 D_80126B96;
extern s16 D_801270C0;
extern u8 D_sc06_008_8019EDA4;
extern u8 D_sc06_008_8019EDB0;
extern void func_80128EA8();
extern void func_8012931C();
extern void func_80128ED8();
extern s32 func_8012D664();




extern s16 D_80126B62;
extern s32 func_8012DEB8();
extern s32 func_8012BD14();
extern void func_8002D59C();
extern u16 D_sc06_008_80189324[];
extern u16 D_sc06_008_8018934C[];
extern u16 D_sc06_008_80189374[];

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void func_80159B3C();
extern void func_80165718();
extern void func_800233CC();
extern s32 func_801465C0();
extern void func_8001CD9C();
extern SV8 D_sc06_008_801A69BC[];
extern CV *D_sc06_008_801A69A0[];

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_80172710();
extern void func_80178BF8();
extern void *D_80126B78;
extern SV8 D_sc06_008_801A6BCC[];
extern s32 func_80135888();
extern s32 func_8012BDBC();

extern u16 D_sc06_008_80189550[];
extern u16 D_sc06_008_80189540[];
extern u8 D_sc06_008_801893F0;
extern void func_8001CA1C();
extern u8 D_sc06_008_801894B0;
extern u8 D_sc06_008_80189450;
extern u8 D_sc06_008_801894F8;
extern s16 *D_sc06_008_80189570[];
extern s32 D_sc06_008_801895B4;
extern s32 func_80021174();

extern s32 func_8012B6D4();
extern s16 D_80126B5E;
extern s16 D_80126B66;
extern SV8 D_sc06_008_80189628[];
extern CV D_sc06_008_8018960C[];

typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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
extern SV8 D_sc06_008_801A75E8[];


extern SV8 D_80126940;
void func_sc06_008_8017D524(u8 *o) {
    SV8 v;
    v = D_80126940;
    if (v.z < 0x80) {
        v.z = 0x80;
    }
    if (v.z > 0x2140) {
        v.z = 0x2140;
    }
    func_sc06_008_8017D5A4(o, &v);
}

void func_sc06_008_8017D5A4(u8 *arg0, u8 *arg1) {
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

void func_sc06_008_8017D73C(u8 *o) {
    typedef struct { u16 x, y, z, pad; } UV4;
    UV4 a;
    UV4 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;
    s32 n;

    k = AF(o, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    n = 0x14;
    if (AF(o, s16, 0x70) >= 2) {
        n = 0x10;
    }
    a.y = y;
    b.y = y;
    for (i = 0; i < n; i += 4) {
        a.x = D_sc06_008_80189324[i];
        a.z = D_sc06_008_80189324[i + 1];
        b.x = D_sc06_008_80189324[i + 2];
        b.z = D_sc06_008_80189324[i + 3];
        if (func_8012DEB8(o, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < n; i += 4) {
        a.x = D_sc06_008_8018934C[i];
        a.z = D_sc06_008_8018934C[i + 1];
        b.x = D_sc06_008_8018934C[i + 2];
        b.z = D_sc06_008_8018934C[i + 3];
        if (func_8012DEB8(o, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < n; i += 4) {
        a.x = D_sc06_008_80189374[i];
        a.z = D_sc06_008_80189374[i + 1];
        b.x = D_sc06_008_80189374[i + 2];
        b.z = D_sc06_008_80189374[i + 3];
        if (func_8012DEB8(o, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc06_008_8018939C[AF(o, u16, 2)](o);
    t = func_8012BD14(o);
    if (t > 0x3FFFF) {
        AF(o, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(o, u16, 0x36));
    } else if (--AF(o, s16, 0xFE) == 0) {
        AF(o, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(o, u16, 0x36));
    }
}

void func_sc06_008_8017DA00(u8 *arg0) {
    s32 pad[4];
    D_sc06_008_801893E8[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017DA3C(u8 *o) {
    u8 unused[0x10];
    s32 i;
    u8 *p;
    s32 r;
    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        AF(o, s16, 2) = 1;
        AF(o, s32, 0xDC) = 0x21100;
        for (i = 0; i < 7; i++) {
            p = (u8 *)func_8012C658(0x305, 3, o);
            if (p != 0) {
                AF(p, u16, 6) = D_sc06_008_80189540[i];
                AF(p, u16, 0xE) = D_sc06_008_80189550[i];
            }
        }
        break;
    case 1:
        AF(o, s16, 2) = 3;
        func_8001CA1C(AF(o, s32, 0x20), &D_sc06_008_801893F0);
        SetScript(o, &D_sc06_008_801894B0);
        break;
    case 2:
        AF(o, s16, 2) = 3;
        func_8001CA1C(AF(o, s32, 0x20), &D_sc06_008_80189450);
        SetScript(o, &D_sc06_008_801894F8);
        break;
    case 3:
        AF(o, s16, 2) = 2;
        break;
    }
}

void func_sc06_008_8017DBB0(u8 *o) {
    SV8 a;
    SV8 b;
    s32 t;
    s32 dx;
    s32 dz;
    t = func_8012B6D4(o + 4, &D_80126B5C);
    a.x = AF(o, u16, 6) - ((rsin(t) * 16) >> 12);
    a.y = -0x200;
    b.z = a.z = AF(o, u16, 0xE) - ((rcos(t) * 16) >> 12);
    b.x = a.x;
    b.y = 0;
    func_80133784(1, &a, &b);
    if (((u8 *)&b)[6] == 0x1B) {
        AF(o, s16, 6) = a.x;
        AF(o, s16, 0xE) = a.z;
    }
    dx = AF(o, s16, 6) - D_80126B5E;
    dz = AF(o, s16, 0xE) - D_80126B66;
    t = dx * dx + dz * dz;
    if (t < AF(AF(o, u8 *, 0x64), s32, 0xDC)) {
        AF(AF(o, u8 *, 0x64), s32, 0xDC) = t;
    }
}

void func_sc06_008_8017DCD0(u8 *arg0) {
    D_sc06_008_80189560[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017DD0C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc06_008_8017DD24(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_801892F0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_801892D0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_008_80185B40);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        if (AF(arg0, s16, 0x70) >= 2) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xD55;
            AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xD55;
        }
        func_8012C658(0x25C, 0x555, arg0);
        func_8012C658(0x25C, 0xAAA, arg0);
        func_8012C658(0x25C, 0x1000, arg0);
    }
}

void func_sc06_008_8017DE04(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc06_008_8017DE20(s32 arg0) {
    void *temp_a2;
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_801893B4) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_801892D0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_008_80185B40);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        if (AF(AF(arg0, void *, 0x64), s16, 0x70) >= 2) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xD55;
            AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xD55;
        }
    }
}

void func_sc06_008_8017DEEC(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc06_008_8017DF28(u8 *o) {
    s32 x = AF(o, s32, 0xDC);
    if (x > 0x1E3FF) {
        func_8002D4C8(4, 0x8B4);
    } else {
        func_8002D4C8(0x8B4, ((((0x1E400 - x) * 0x7F) / 0x1E400) | 0x1000) & 0xFFFF);
    }
    AF(o, s32, 0xDC) = 0x21100;
}

void func_sc06_008_8017DFBC(void) {
}

s32 func_sc06_008_8017DFC4(void) {
    return 0x6F;
}

void func_sc06_008_8017DFCC(s32 arg0) {
    func_sc06_008_8017DFEC(arg0);
}

void func_sc06_008_8017DFEC(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    switch (D_sc06_008_801AA7AC) {                  /* irregular */
    case 0:
        D_sc06_008_801A9FF0 = 1;
        D_sc06_008_801A9FF4 = 0;
        D_sc06_008_801A9FF8 = 1;
        D_sc06_008_801A9FFC = 0;
        D_sc06_008_801AA7AC = 1;
        return;
    case 1:
        temp_v0 = D_sc06_008_801A9FF0 - 1;
        D_sc06_008_801A9FF0 = temp_v0;
        if (temp_v0 == 0) {
            D_sc06_008_801A9FF0 = D_sc06_008_801AA7AC;
            func_sc06_008_8017E140((s32) &D_sc06_008_8019A568, D_sc06_008_801A9FF4 * 6);
            temp_v0_2 = D_sc06_008_801A9FF4 + 1;
            D_sc06_008_801A9FF4 = temp_v0_2;
            if (temp_v0_2 >= 0xF) {
                D_sc06_008_801A9FF4 = 0;
            }
        }
        temp_v0_3 = D_sc06_008_801A9FF8 - 1;
        D_sc06_008_801A9FF8 = temp_v0_3;
        if (temp_v0_3 == 0) {
            D_sc06_008_801A9FF8 = 2;
            func_sc06_008_8017E140((s32) &D_sc06_008_8019A61C, D_sc06_008_801A9FFC * 6);
            temp_v0_4 = D_sc06_008_801A9FFC + 1;
            D_sc06_008_801A9FFC = temp_v0_4;
            if (temp_v0_4 >= 0x10) {
                D_sc06_008_801A9FFC = 0;
            }
        }
        return;
    }
}

void func_sc06_008_8017E140(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

void func_sc06_008_8017E1A0(u8 *arg0) {
    D_sc06_008_801895AC[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017E1DC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc06_008_8017E204(u8 *arg0) {
    s32 pad[2];
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    temp_v0 = AF(arg0, s16, 0xDC);
    if (temp_v0 == 0) {
        if (func_sc06_008_8017E37C((s32) arg0, (s32) AF(arg0, s16, 0xFC), 0) != 0) {
            AF(arg0, s16, 0xFC) = 0;
            temp_s0 = rand();
            AF(arg0, s16, 0xDC) = (s16) ((((temp_s0 & 0xF) + (rand() & 0xF)) * 2) + 0x20);
        } else {
            AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) + 1);
        }
    } else {
        AF(arg0, s16, 0xDC) = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = AF(arg0, s16, 0xDE);
    if (temp_v0_2 == 0) {
        if (func_sc06_008_8017E37C((s32) arg0, (s32) AF(arg0, s16, 0xFE), 0x80) != 0) {
            AF(arg0, s16, 0xFE) = 0;
            temp_s0_2 = rand();
            AF(arg0, s16, 0xDE) = (s16) ((((temp_s0_2 & 0xF) + (rand() & 0xF)) * 2) + 0x20);
        } else {
            AF(arg0, s16, 0xFE) = (s16) ((u16) AF(arg0, s16, 0xFE) + 1);
        }
    } else {
        AF(arg0, s16, 0xDE) = (s16) (temp_v0_2 - 1);
    }
    temp_v0_3 = AF(arg0, s16, 0xE0);
    if (temp_v0_3 == 0) {
        if (func_sc06_008_8017E37C((s32) arg0, (s32) AF(arg0, s16, 0x100), 0x100) != 0) {
            AF(arg0, s16, 0x100) = 0;
            temp_s0_3 = rand();
            AF(arg0, s16, 0xE0) = (s16) ((((temp_s0_3 & 0xF) + (rand() & 0xF)) * 2) + 0x20);
            return;
        }
        AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + 1);
        return;
    }
    AF(arg0, s16, 0xE0) = (s16) (temp_v0_3 - 1);
}

s32 func_sc06_008_8017E37C(u8 *o, s32 n0, s32 dy) {
    typedef struct { SV8 a; SV8 b; } P2;
    s16 n = n0;
    P2 s;
    V3 w;
    s16 *p;
    u8 *q;
    p = D_sc06_008_80189570[AF(o, s16, 0x70)];
    p += n * 3;
    w.x = s.a.x = p[0];
    w.y = s.a.y = p[1] + dy;
    w.z = s.a.z = p[2];
    s.b.x = p[3];
    if (s.b.x == 0x7FFF) {
        return 1;
    }
    if (func_80021174(D_sc06_008_801895B4, &w) != 1) {
        return 0;
    }
    s.b.z = p[5];
    s.a.pad = ratan2(s.b.x - s.a.x, s.b.z - s.a.z);
    q = (u8 *)func_801290DC(0x68, &s);
    if (q != 0) {
        AF(q, s16, 0x2C) = s.a.pad;
    }
    if ((rand() & 7) == 0) {
        func_sc06_008_8017EBAC((s32)&s);
    }
    return 0;
}

void func_sc06_008_8017E4BC(u8 *arg0) {
    D_sc06_008_80189604[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017E4F8(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) &D_sc06_008_801895B8, 0x2C0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x46;
    AF(temp_s0, s16, 0x1A) = 0x1333;
    AF(temp_s0, s16, 0x18) = 0x1333;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x08000000);
    AF(temp_s0, u16, 0x14) = (u16) AF(arg0, u16, 0x2C);
    AF(arg0, s32, 0x30) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern s16 D_sc06_008_801895C4[];
extern u16 D_sc06_008_801895C6[];
void func_sc06_008_8017E580(u8 *o) {
    s16 v = D_sc06_008_801895C4[AF(o, s32, 0x30) * 4];
    u8 *p = AF(o, u8 *, 0x20);
    if (v != 0) {
        AF(p, s16, 0x28) = v;
        AF(p, u16, 0x2A) = D_sc06_008_801895C6[AF(o, s32, 0x30)++ * 4];
    } else {
        func_801292C8();
    }
}

void func_sc06_008_8017E5F0(u8 *arg0) {
    D_sc06_008_80189620[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017E62C(u8 *arg0) {
    s32 sp10;
    s32 temp_s1;

    temp_s1 = arg0 + 4;
    func_80015978(temp_s1, (s32) &sp10);
    func_8012EF70((s32) &sp10, (s32) &sp10);
    func_80015954((s32) &sp10, temp_s1);
    AF(arg0, s32, 0x1C) = 3;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_008_8017E694(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == 0) {
        func_801292C8((s32) arg0);
        return;
    }
    func_sc06_008_8017E6F0((s32) arg0);
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
}

void func_sc06_008_8017E6F0(u8 *o) {
    SV8 pos;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    func_80015978(o + 4, &pos);
    for (i = 0; i < 4; i++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (j = 0; j < 4; j++) {
            d = D_sc06_008_80189628[j];
            AF(o, s16, 0x12) = j + i;
            func_sc06_008_8017E830(o, &pos, &a, &b, &c, &d, (s16 *)(o + 0x10), &D_sc06_008_8018960C[j]);
        }
    }
}

void func_sc06_008_8017E830(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6, CV *arg7) {
    SMtx m;
    SV8 *p2;
    SV8 *p3;
    SV8 *d;

    func_80013F3C(&m);
    RotMatrixZ(*arg6, &m);
    m.t[0] = arg1->x;
    m.t[1] = arg1->y;
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    d = D_sc06_008_801AA000;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc06_008_801AA030 = 0x50000000;
        D_sc06_008_801AA028 = 0;
        D_sc06_008_801AA029 = 0;
        D_sc06_008_801AA02A = 0;
        D_sc06_008_801AA02C = 0;
        D_sc06_008_801AA02D = 0;
        D_sc06_008_801AA02E = 0;
    }
    D_sc06_008_801AA020 = arg7[0];
    D_sc06_008_801AA024 = arg7[1];
    arg5->x += arg2->x;
    arg5->y += arg2->y;
    {
        s32 r = ((u16 *)arg5)[3] & rand();
        if (*(u16 *)(arg0 + 0x12) & 1) {
            arg5->x += r;
        } else {
            arg5->x -= r;
        }
    }
    arg5->y += (rand() & 0x1F) - 0x10;
    gte_ldv0(arg2);
    gte_rtv0tr();
    gte_stsv(d);
    gte_ldv0(arg5);
    gte_rtv0tr();
    gte_stsv(&d[1]);
    gte_ldv0(arg3);
    gte_rtv0tr();
    p2 = &d[2];
    gte_stsv(p2);
    *arg3 = *arg5;
    arg3->x -= ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg3);
    gte_rtv0tr();
    p3 = &d[3];
    gte_stsv(p3);
    d->z = arg1->z;
    func_80017714(d);
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p2);
    *arg4 = *arg5;
    arg4->x += ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p3);
    d->z = arg1->z;
    func_80017714(d);
    *arg2 = *arg5;
}

void func_sc06_008_8017EBAC(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = func_801290DC(0x69, arg0);
    if (temp_v0 != 0) {
        temp_s0 = rand();
        temp_s1 = rand();
        AF(temp_v0, s16, 0x10) = (s16) (((temp_s0 & 3) << 0xA) + ((temp_s1 & 3) * 0xFA) + ((rand() & 3) * 0x44));
    }
}

s32 func_sc06_008_8017EC48(u8 *o, s32 d0) {
    s16 d = d0;
    SV8 a;
    SV8 b;
    s32 s;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    s = rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF);
    b.y = a.y;
    b.x = a.x - ((s * d) >> 12);
    b.z = a.z - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    if (!(func_80133784(1, &a, &b) & 0x8000)) return 0;
    AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    return 1;
}

void func_sc06_008_8017ED80(o)
    u8 *o;
{
    u8 *c;
    if (AF(o, u16, 0) == 0) return;
    c = AF(o, u8 *, 0xCC);
    AF(c, s16, 8) = AF(o, s16, 6);
    AF(c, s16, 0xA) = AF(o, s16, 0xA);
    AF(c, s16, 0xC) = AF(o, s16, 0xE);
    AF(c, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(c, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(c, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(c, s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x18);
    AF(c, s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    AF(c, s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(c, s32, 4) |= 0x80000000;
    } else {
        AF(c, s32, 4) &= 0x7FFFFFFF;
    }
    c = AF(o, u8 *, 0xD0);
    AF(c, s16, 8) = AF(o, s16, 6);
    AF(c, s16, 0xA) = AF(o, s16, 0xA);
    AF(c, s16, 0xC) = AF(o, s16, 0xE);
    AF(c, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(c, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(c, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(c, s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x18);
    AF(c, s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    AF(c, s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(c, s32, 4) |= 0x80000000;
    } else {
        AF(c, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_008_8017EF54(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    if (AF(o, u16, 0) == 0) return;
    v = AF(o, s16, 0x84);
    if (v == 0) {
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x849, (a | (x | 0x3000)) & 0xFFFF);
        }
        AF(o, s16, 0x84) = 10;
    } else {
        AF(o, s16, 0x84) = v - 1;
    }
    AF(o, s16, 0xFC) += 0x280;
    AF(o, s16, 0xFE) -= 0x280;
    func_sc06_008_8017ED80(o);
}

void func_sc06_008_8017F100(u8 *o) {
    SV8 v;
    u8 *pl = D_801151D4;
    u8 *c;
    if (AF(o, u16, 0) == 0) return;
    switch (AF(o, s32, 0x1C) & 3) {
    case 0:
        c = (u8 *)func_8012C588(0x281, o);
        if (c != 0) {
            AF(c, s32, 0x1C) = 2;
            AF(c, s16, 0x12) = (rand() & 0x1F) - 0x10;
            AF(c, s16, 0x16) = -((rand() & 0xF) + 0x10);
            AF(c, s16, 0x1A) = (rand() & 0x1F) - 0x10;
        }
        break;
    case 1:
        break;
    case 2:
    case 3:
        c = (u8 *)func_8012913C(0x23);
        if (c != 0) {
            AF(c, s16, 6) = AF(o, s16, 6) + (rand() & 0x3F) - 0x20;
            AF(c, s16, 0xA) = AF(o, s16, 0xA) + (rand() & 0x3F) - 0x30;
            AF(c, s16, 0xE) = AF(o, s16, 0xE) + (rand() & 0x3F) - 0x20;
            AF(c, s32, 0x10) = AF(c, s32, 0x14) = AF(c, s32, 0x18) = 0;
            AF(c, s16, 0x34) = (rand() & 0x17FF) + 0x800;
            v.x = AF(pl, s32, 0x5C) - AF(c, s16, 6);
            v.y = AF(pl, s32, 0x60) - AF(c, s16, 0xA);
            v.z = AF(pl, s32, 0x64) - AF(c, s16, 0xE);
            VectorNormalSS(&v, &v);
            AF(c, s16, 6) += v.x >> 6;
            AF(c, s16, 0xA) += v.y >> 6;
            AF(c, s16, 0xE) += v.z >> 6;
        }
        break;
    }
    func_sc06_008_8017ED80(o);
}

void func_sc06_008_8017F2E8(u8 *o) {
    V3 v;
    s32 d;
    s32 r;
    s16 h;
    s16 y;

    h = AF(o, s16, 0x8A);
    y = AF(o, s16, 0xA);
    if (y >= h - 8) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (h + 8 >= y && AF(o, s32, 0x48) <= 0) {
        AF(o, s32, 0x48) = 0x8000;
        AF(o, s32, 0x14) >>= 1;
    }
    if (AF(o, s32, 0xDC) < -0x40000) {
        AF(o, s32, 0xDC) = -0x40000;
    }
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0xDC);
    func_8012B1B4(o, &v);
    func_8012CBCC(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = func_8012BE98(o, o + 0x88)) > 0x3FFFF || func_sc06_008_8017EC48(o, 0x51) != 0) {
            r = func_8012B744(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            func_8012B1B4(o, &v);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        AF(o, s32, 0xDC) *= 2;
        if ((d = func_8012BE98(o, o + 0x88)) > 0x3FFFF || func_sc06_008_8017EC48(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = func_8012B744(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(o, s32, 0xDC) >>= 1;
        func_sc06_008_8017EC48(o, 0x51);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = func_8012BE98(o, o + 0x88);
        AF(o, s32, 0xDC) *= 2;
        if (func_sc06_008_8017EC48(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        } else if (d > 0x40000) {
            r = func_8012B744(o + 4, o + 0x88);
            r = func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 1);
            if (r < -0xFF || r > 0xFF) {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0x102) = (rand() & 7) + 8;
            }
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
    if (AF(o, s16, 0x100) != 0) {
        AF(o, s16, 0x100)--;
    } else if ((d = func_8012BE54(o)) <= 0x24000) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x100) = 0x3C;
    }
}

void func_sc06_008_8017F624(u8 *o) {
    SV8 tmp;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    s32 t;
    t = AF(o, s32, 0x1C);
    if (t == 0) {
        v = AF(o, s16, 0x100) - 1;
        AF(o, s16, 0x100) = v;
        if (v == 0) {
            AF(o, u16, 2) = 1;
            AF(o, s16, 0x100) = 0x3C;
            AF(o, s16, 0x8A) = AF(o, s16, 0xA) - 0x140;
            return;
        }
        if (v == 1) {
            AF(o, s32, 0x1C) = 0x3C;
        } else {
            AF(o, s32, 0x1C) = 3;
        }
        func_sc06_008_80180548(o, &D_sc06_008_8019C904);
        q = func_8012C588(0x260, o);
        if (q) {
            func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc06_008_8019C90C, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            func_8012B370(q);
            func_8012C658(0x261, 0, q);
        }
        q = func_8012C588(0x260, o);
        if (q) {
            func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc06_008_8019C914, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            func_8012B370(q);
            func_8012C658(0x261, 1, q);
        }
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x84A, (a | (x | 0x3000)) & 0xFFFF);
        }
    } else {
        AF(o, s32, 0x1C) = t - 1;
    }
}

extern u8 D_sc06_008_8019C91C;

void func_sc06_008_8017F8CC(u8 *o) {
    s16 *t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        t = (s16 *)&D_sc06_008_8019C91C + (AF(o, s16, 0x70) - 1) * 4;
        if (*t++ < *(s16 *)((u8 *)&D_80126B5C.x + 2) && *(s16 *)((u8 *)&D_80126B5C.x + 2) < *t++ && *t < *(s16 *)((u8 *)&D_80126B5C.z + 2) && *(s16 *)((u8 *)&D_80126B5C.z + 2) < t[1]) {
            AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
            AF(o, s16, 6) = AF(o, s16, 0x88) = D_80126B5C.x >> 16;
            AF(o, s16, 0x8A) = *(s16 *)((u8 *)&D_80126B60 + 2) - 0x80;
            AF(o, s16, 0xE) = AF(o, s16, 0x8C) = D_80126B5C.z >> 16;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if ((AF(o, s16, 0xA) += 8) >= AF(o, s16, 0x8A)) {
            AF(o, s16, 2) = 1;
            AF(o, s16, 0x34) = 0;
        }
        break;
    }
}

void func_sc06_008_8017F9FC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    D_sc06_008_8019C93C[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_sc06_008_8017EF54((s32) arg0), (func_8012C044((s32) arg0) != 0))) {
        if (AF(arg0, s16, 0x70) == 0) {
            temp_a0 = AF(arg0, s32, 0xCC);
            if (temp_a0 != 0) {
                func_80016714(temp_a0, 0x84);
            }
            temp_a0_2 = AF(arg0, s32, 0xD0);
            if (temp_a0_2 != 0) {
                func_80016714(temp_a0_2, 0x84);
            }
            func_8012C098((s32) arg0);
            return;
        }
        if ((u16) AF(arg0, u16, 2) < 4U) {
            AF(arg0, u16, 2) = 4U;
        }
    }
}

void func_sc06_008_8017FAD4(u8 *arg0) {
    D_sc06_008_8019C968[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017FB10(u8 *o) {
    SV8 a;
    SV8 b;
    if (AF(o, u16, 0x34) == 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC();
        func_8012B23C(o);
        func_8012B14C(o, (u8 *)&D_sc06_008_8019C970 + AF(o, s16, 0x70) * 12);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(o, &a, &b);
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
        AF(o, s32, 0x1C) = 0x5A;
        AF(o, s16, 0x34) = 1;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0xFC);
    AF(o, s32, 0xDC) = AF(o, s32, 0x14);
    if (func_8012CBCC(o) & 0x6000) {
        AF(o, s32, 0x14) = -AF(o, s32, 0xDC);
        if (--AF(o, s16, 0xAC) == 0) func_8012C218(o);
    }
    if (--AF(o, s32, 0x1C) == 0) func_8012C218(o);
}

void func_sc06_008_8017FC84(u8 *arg0) {
    D_sc06_008_8019C988[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017FCC0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (AF(arg0, s16, 0x70) != 0) {
        AF(arg0, s16, 2) = 4;
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u8, 0xC1) = 0;
        return;
    }
    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x84);
    }
    temp_a0_2 = AF(arg0, s32, 0xD0);
    if (temp_a0_2 != 0) {
        func_80016714(temp_a0_2, 0x84);
    }
    func_8002A04C((s32) arg0);
    func_8012C218((s32) arg0);
}

void func_sc06_008_8017FD48(s32 arg0) {
    func_8002D4C8(0xB32, 0);
    func_sc06_008_8017ED80(arg0);
}

void func_sc06_008_8017FD80(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xE00;
    func_sc06_008_8017EF54((s32) arg0);
}

void func_sc06_008_8017FDA8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
    func_sc06_008_8017EF54((s32) arg0);
}

void func_sc06_008_8017FDDC(u8 *arg0) {
    if (AF(arg0, s16, 0x76) < 0) {
        func_80131E00((s32) arg0, 6);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x100) = 0x3C;
    AF(arg0, s16, 0x34) = 0;
    func_sc06_008_8017EF54((s32) arg0);
}

void func_sc06_008_8017FE28(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = func_80143C74((s32) arg0, 0, arg2);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) ((AF(arg0, u16, 6) + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s16, 0xA) = (s16) ((AF(arg0, u16, 0xA) + (rand() & 0x3F)) - 0x30);
            AF(temp_v0, s16, 0xE) = (s16) ((AF(arg0, u16, 0xE) + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s32, 0x10) = (s32) -AF(arg0, s32, 0x10);
            AF(temp_v0, s32, 0x14) = (s32) -AF(arg0, s32, 0x14);
            AF(temp_v0, s32, 0x18) = (s32) -AF(arg0, s32, 0x18);
            AF(AF(temp_v0, void *, 0x20), s16, 0x18) = 0x800;
            AF(AF(temp_v0, void *, 0x20), s16, 0x1A) = 0x800;
        }
        func_sc06_008_8017EF54((s32) arg0);
    }
}

void func_sc06_008_8017FF14(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 1);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    func_sc06_008_8017ED80((s32) arg0, arg1);
}

void func_sc06_008_8017FF48(u8 *arg0, s32 arg1) {
    AF(arg0, u8, 0xC1) = 0xC;
    AF(arg0, s32, 0x1C) = 0x3C;
    func_sc06_008_8017ED80((s32) arg0, arg1);
}

void func_sc06_008_8017FF74(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_801319E0();
        return;
    }
    if (func_8012BEE8((s32) arg0, arg1, arg2) != 0) {
        func_80131E00((s32) arg0, 6);
        return;
    }
    if (func_8012CBF4((s32) arg0) & 0x2000) {
        func_80131C78((s32) arg0);
    }
    func_sc06_008_8017ED80((s32) arg0);
}

void func_sc06_008_80180000(u8 *o) {
    u8 *c;
    s32 t;
    if (!func_8012C354(o, &D_sc06_008_8019C808)) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x1001;
    func_80143970(o);
    SetScript(o, &D_sc06_008_8019E548);
    AF(o, s16, 2)++;
    func_8012B200(o);
    AF(o, u8 *, 0xBC) = &D_sc06_008_8019C83C;
    c = (u8 *)func_8012C1B8();
    if (c == 0) goto fail;
    AF(o, u8 *, 0xCC) = c;
    func_8001C214(c, &D_sc06_008_8019E258);
    t = D_sc06_008_80185B40[0];
    AF(c, s32, 0x20) = t;
    AF(c, u16, 0x2C) |= 0x10;
    c = (u8 *)func_8012C1B8();
    if (c == 0) {
        func_80016714(AF(o, u8 *, 0xCC), 0x84);
fail:
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0xD0) = c;
    func_8001C214(c, &D_sc06_008_8019E530);
    t = D_sc06_008_80185B40[0];
    AF(c, u16, 0x2C) |= 0x10;
    AF(c, s32, 0x20) = t;
    AF(o, s16, 0x100) = 0x3C;
    AF(o, s32, 0xDC) = 0xFFFC0000;
}

void func_sc06_008_80180128(u8 *o) {
    s32 v[3];
    s32 g = D_80126B60;
    s32 x = AF(o, s32, 8);
    if (x >= g - 0x200000) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (x <= g - 0x180000) {
        if (AF(o, s32, 0x48) <= 0) {
            AF(o, s32, 0x48) = 0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    }
    AF(o, s32, 0xDC) >>= 1;
    v[0] = 0;
    v[1] = 0;
    v[2] = AF(o, s32, 0xDC);
    func_8012B1B4(o, v);
    func_8012CBCC(o);
    func_sc06_008_8017EC48(o, 0x51);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B8E4(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x100) = 5;
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_008_8018025C(u8 *arg0) {
    void *temp_a1;
    void *temp_v1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 6) = 0x7FFF;
    AF(arg0, s16, 0xA) = -0x1000;
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x12C;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = 0x1000;
    AF(temp_v1, s16, 0x1A) = 0x1000;
    AF(temp_v1, s16, 0x18) = 0x1000;
    AF(arg0, s16, 0x76) = 0x1E0;
    AF(arg0, u16, 0x5C) = 0x8810;
}

void func_sc06_008_801802BC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_008_8019E628);
    SetScript((s32) arg0, (s32) &D_sc06_008_80185B40);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x40;
    AF(AF(arg0, s32, 0x20), u16, 0x10) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x10);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    AF(AF(arg0, s32, 0x20), u16, 0x14) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x14);
}

void func_sc06_008_8018037C(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s16, 6) == AF(arg0, s16, 0xDE)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0xE2))) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    AF(arg0, s32, 0xDC) = (s32) AF(arg0, s32, 4);
    AF(arg0, s32, 0xE0) = (s32) AF(arg0, s32, 0xC);
    func_8012B14C((s32) arg0, (s32) &D_sc06_008_8019C954);
    func_8012AD80((s32) arg0);
    if ((func_8012D5E4((s32) arg0, (s32) &D_sc06_008_8019C960, (s32) &D_800D3918, 0x30) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218((s32) arg0);
        return;
    }
    func_8012B370((s32) arg0);
}

void func_sc06_008_80180450(u8 *o) {
    s32 p;
    p = func_8012C1B8(o);
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc06_008_8019E6E8);
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0xC) += rcos(AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12)) << 8;
    AF(o, s32, 4) += rsin(AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12)) << 8;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1800;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1800;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
    AF(o, s16, 0xAC) = 2;
    AF(o, s16, 0xFC) = rand() & 0xFF;
}

s32 func_sc06_008_80180548(s32 arg0, s32 arg1, s32 arg2) {
    D_sc06_008_801AA178 = arg1;
    return func_8012C588(0x85, arg0);
}

void func_sc06_008_80180578(u8 *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    u8 *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (func_8012C354(o, &D_sc06_008_8019E704) == 0) {
        func_8012C218(o);
    }
    SetScript(o, &D_sc06_008_80185B40);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x70) = 0x80;
    AF(p, s32, 4) |= 0x50000040;
    AF(p, u16, 0x2C) |= 1;
    m = AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34;
    func_8012F14C(m, D_sc06_008_801AA178, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    func_80017DC4(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, p + 0x34);
    func_80017E68(&b, p + 0x34);
    q = D_sc06_008_8019E738++;
    AF(o, WMtx *, 0xCC) = q;
    if (D_sc06_008_8019E738 > D_sc06_008_801AA158) {
        D_sc06_008_8019E738 = D_sc06_008_801AA158 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    func_80017E68(&a, q);
    y = b.y;
    if (func_80134510(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc06_008_8019E738++;
        AF(o, WMtx *, 0xD0) = q;
        if (D_sc06_008_8019E738 > D_sc06_008_801AA158) {
            D_sc06_008_8019E738 = D_sc06_008_801AA158 - 9;
        }
        func_800D23D0(&D_801152A8);
        RotMatrixYXZ(&D_801152A8, q);
        func_80017E68(&b, q);
    }
    AF(o, s16, 2)++;
}

void func_sc06_008_801807BC(u8 *o) {
    QuadArg q;
    u8 *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s32, 0x1C)++ < 2) {
        t = D_sc06_008_8019E6F0;
        i = 0;
        m = AF(o, u8 *, 0xCC);
        v = AF(o, u16, 0x70);
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; i < 4; i++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        mm = AF(o, u8 *, 0xD0);
        if (mm != 0) {
            m = mm;
            t = D_sc06_008_8019E6F0;
            j = 0;
            v = AF(o, u16, 0x70);
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; j < 4; j++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        }
        AF(o, s16, 0x70) >>= 1;
        AF(p, u16, 0x2C) |= 1;
    } else {
        func_8012C218(o);
    }
}

void func_sc06_008_80180A5C(u8 *arg0) {
    D_sc06_008_8019E73C[AF(arg0, u16, 2)]();
}

s32 func_sc06_008_80180A98(u8 *o, s32 r0) {
    s16 r = r0;
    SV8 a;
    SV8 b;

    if (AF(o, s32, 0xDC) != 0) {
        return 0;
    }
    a.x = AF(o, s16, 0x6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.y = a.y;
    b.z = a.z - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    if (func_80133784(1, &a, &b) & 0x8000) {
        AF(o, s16, 0x6) = b.x + (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
        AF(o, s16, 0xE) = b.z + (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
        return 1;
    }
    a.x = AF(o, s16, 0x6) - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    a.y = AF(o, s16, 0xA) - 0x10;
    b.z = a.z = AF(o, s16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.x = a.x;
    b.y = a.y + 0x20;
    if (!(func_80133784(1, &a, &b) & 0x6000)) {
        AF(o, s32, 0x4) = AF(o, s32, 0x38);
        AF(o, s32, 0x8) = AF(o, s32, 0x3C);
        AF(o, s32, 0xC) = AF(o, s32, 0x40);
        return 1;
    }
    return 0;
}

void func_sc06_008_80180CA8(u8 *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = D_801151D4;
    if (AF(arg0, s16, 0xFC) == 0) {
        temp_v0 = func_8012C658(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = func_8012C658(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = func_8012C658(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        func_8002AC00(0x22);
        var_s1 = 0;
        temp_v0 = AF(arg0, s32, 0xCC);
        AF(temp_v0, s16, 2) = 2;
        AF(temp_v0, s16, 0xFC) = 1;
        temp_v0 = AF(arg0, s32, 0xD0);
        AF(temp_v0, s16, 2) = 2;
        AF(temp_v0, s16, 0xFC) = 1;
        do {
            temp_v0 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, s32, 0x1C) = 2;
                AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x30);
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
        pos.y = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
        pos.z = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        func_8002A04C((s32) arg0);
        func_8012C218((s32) arg0);
        return;
    }
    temp_v0 = func_8012913C(0x23);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 6)) - 0x40);
        AF(temp_v0, u16, 0xA) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 0xA)) - 0xE0);
        AF(temp_v0, u16, 0xE) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 0xE)) - 0x40);
        AF(temp_v0, s16, 0x34) = 0x1800;
        AF(temp_v0, s32, 0x18) = 0;
        AF(temp_v0, s32, 0x14) = 0;
        AF(temp_v0, s32, 0x10) = 0;
        v.x = AF(temp_s1, s32, 0x5C) - AF(temp_v0, u16, 6);
        v.y = AF(temp_s1, s32, 0x60) - AF(temp_v0, u16, 0xA);
        v.z = AF(temp_s1, s32, 0x64) - AF(temp_v0, u16, 0xE);
        VectorNormalSS(&v, &v);
        AF(temp_v0, u16, 6) = (u16) (AF(temp_v0, u16, 6) + (v.x >> 6));
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + (v.y >> 6));
        AF(temp_v0, u16, 0xE) = (u16) (AF(temp_v0, u16, 0xE) + (v.z >> 6)); AF(temp_v0, s16, 0x34) = 0x3000;
        func_8002D4C8(0xAF8, 0);
    }
    AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) - 1);
}

void func_sc06_008_801810AC(u8 *o) {
    s32 st;
    s32 d;
    st = AF(o, u8, 0x5E);
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, s16, 0xE2) != 0) return;
    AF(o, s16, 0xE2) = 0xA;
    AF(o, u16, 0x5C) |= 0x4000;
    func_8002D4C8(0x9B7, 0);
    if (AF(o, s16, 0x60) != 0) {
        if (st == 0x1D) {
            AF(o, s16, 0x82) = 0;
            AF(o, s16, 0x7C) = AF(o, s16, 6);
            AF(o, s16, 0x7E) = AF(o, s16, 0xA);
            AF(o, s16, 0x80) = AF(o, s16, 0xE);
        }
        if (AF(o, u8 *, 0x78) != 0) {
            d = (AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30)) >> 12;
            if (d <= 0) d = 1;
        }
        AF(o, s16, 0x76) -= d;
        func_8016AA50(o, d);
        if (AF(o, u16, 0x82) & 1) {
            func_8016B428(o);
            StartRumbleScript(&D_sc06_008_8019EE30);
        }
    }
    if (st != 0x1D) {
        if (AF(o, u8, 0xC8)) func_8002A520(o);
        if (AF(o, u8, 0xC9)) func_8002A790(o);
    }
    if (AF(o, s16, 0x76) <= 0) {
        AF(o, s16, 0x5C) = 0;
        func_80131E00(o, 6);
    }
}

void func_sc06_008_80181220(u8 *o) {
    s32 c;
    if (!func_8012C354(o, &D_sc06_008_8019EE50)) return;
    if (AF(o, s16, 0x70) != 0) {
        LoadImage(&D_sc06_008_8019ED94, &D_sc06_008_8019ED54);
        LoadImage(&D_sc06_008_8019ED9C, &D_sc06_008_8019ED74);
        func_8001C214(AF(o, u8 *, 0x20), &D_sc06_008_801A30BC);
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x2022;
    func_80143970(o);
    func_8012B030(o);
    AF(o, s16, 0xAE) = 0x2100;
    SetScript(o, &D_sc06_008_801A636C);
    AF(o, s16, 2)++;
    func_8012B23C(o);
    AF(o, s32, 0xC4) |= 2;
    c = func_8012C658(0x26F, AF(o, s16, 0x70), o);
    if (c == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, s32, 0xCC) = c;
    c = func_8012C658(0x270, AF(o, s16, 0x70), o);
    if (c == 0) {
        func_8012C218(AF(o, u8 *, 0xCC));
        func_8012CAE4(o);
        return;
    }
    AF(o, s32, 0xD0) = c;
    AF(o, u8 *, 0xBC) = &D_sc06_008_8019EE90;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x2400;
    AF(o, s16, 2) = 8;
    SetScript(o, &D_sc06_008_801A61D4);
    SetScript(AF(o, u8 *, 0xCC), &D_sc06_008_801A625C);
    SetScript(AF(o, u8 *, 0xD0), &D_sc06_008_801A62E4);
}

void func_sc06_008_801813D0(u8 *o) {
    s32 d;
    s32 r;

    func_8012B1B4(o, &D_sc06_008_8019EEB0);
    func_8012CBCC(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = func_sc06_008_80180A98(o, 0x48)) != 0 || (d = func_8012BE98(o, o + 0x88)) > 0x3FFFF) {
            r = func_8012B744(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            func_8012B1B4(o, &D_sc06_008_8019EEB0);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        if ((d = func_sc06_008_80180A98(o, 0x48)) != 0 || (d = func_8012BE98(o, o + 0x88)) > 0x3FFFF) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = func_8012B744(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_sc06_008_80180A98(o, 0x48);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = func_8012BE98(o, o + 0x88);
        if (func_sc06_008_80180A98(o, 0x48) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        } else if (d > 0x40000) {
            r = func_8012B744(o + 4, o + 0x88);
            r = func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 1);
            if (r < -0xFF || r > 0xFF) {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0x102) = (rand() & 7) + 8;
            }
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
    if (AF(o, s16, 0x100) != 0) {
        AF(o, s16, 0x100)--;
    } else if ((d = func_8012BE54(o)) <= 0x24000) {
        AF(o, s16, 2) = 5;
        AF(o, s16, 0x100) = 0x3C;
    }
}

void func_sc06_008_8018165C(u8 *arg0) {
    u8 unused[8];
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 e;
    s32 ang;
    s16 c;
    s32 r;
    s32 q;

    if (AF(arg0, s16, 0x98) == 0) {
        e = func_8012913C(0x7F);
        if (e != 0) {
            ang = AF(AF(arg0, void *, 0x20), s16, 0x12) + (rsin(AF(arg0, s16, 0x104)) >> 3);
            AF(e, s16, 6) = AF(arg0, u16, 6) - (rsin(ang) * 0x6C) / 4096;
            AF(e, s16, 0xA) = AF(arg0, u16, 0xA) - 0x34;
            AF(e, s16, 0xE) = AF(arg0, u16, 0xE) - (rcos(ang) * 0x6C) / 4096; AF(e, s32, 0x14) = 0x40000;
            AF(e, s32, 0x10) = -(rsin(ang) * 0xC0);
            AF(e, s32, 0x18) = -(rcos(ang) * 0xC0);
        }
        c = AF(arg0, s16, 0x104) + 0x100;
        AF(arg0, s16, 0x104) = c;
        ang = (c / 256) % 16;
        if (c == 0x100) {
            pos.x = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
            pos.y = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
            pos.z = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
                s32 x = ((s16 *)&sxy)[0];
                s32 a;
                if (x >= 0) { a = x; } else { a = -x; }
                a = ((0xF0 - a) * 0x7F) / 240;
                x = (x + 0xF0) / 30;
                if (x == 0x10) {
                    x = 0xF;
                }
                x <<= 8;
                func_8002D4C8(0x95F, (a | (x | 0x3000)) & 0xFFFF);
            }        } else if (ang == 0) {
            pos.x = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
            pos.y = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
            pos.z = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
                s32 x = ((s16 *)&sxy)[0];
                s32 a;
                if (x >= 0) { a = x; } else { a = -x; }
                a = ((0xF0 - a) * 0x7F) / 240;
                x = (x + 0xF0) / 30;
                if (x == 0x10) {
                    x = 0xF;
                }
                x <<= 8;
                func_8002D4C8(0x960, (a | (x | 0x3000)) & 0xFFFF);
            }        }
        AF(AF(arg0, void *, 0x20), s32, 0x20) = D_sc06_008_8019ED14[ang];
        if (--AF(arg0, s16, 0x100) == 0) {
            q = AF(arg0, s32, 0xCC); AF(arg0, s16, 0x98) = 1; if (q != 0) { AF(q, s16, 0x98) = 1; } q = AF(arg0, s32, 0xD0); if (q != 0) { AF(q, s16, 0x98) = 1; }
        }
    } else if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 7;
        AF(arg0, u16, 0x100) = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A61D4);
        q = AF(arg0, s32, 0xCC);
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_008_801A625C);
        }
        q = AF(arg0, s32, 0xD0);
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_008_801A62E4);
        }
    }
}

void func_sc06_008_80181B20(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a, b;
    u8 *c;
    if (AF(AF(o, u8 *, 0x20), s16, 0x14) < 0x301) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += b;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
        c = AF(o, u8 *, 0xD0);
        AF(c, s16, 2) = 3;
        AF(c, s32, 0x1C) = 0x1E;
        AF(c, s16, 0x98) = 0;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    func_8012B370(o);
}

void func_sc06_008_80181CF0(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a, b, h;
    u8 *c;
    h = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (h >= 0xD00 || h == 0) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) -= b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) &= 0xFFF;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
        c = AF(o, u8 *, 0xCC);
        AF(c, s16, 2) = 3;
        AF(c, s32, 0x1C) = 0x1E;
        AF(c, s16, 0x98) = 0;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    func_8012B370(o);
}

void func_sc06_008_80181EE0(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    D_sc06_008_8019EEC0[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) return;
    if (AF(o, s16, 0x70) == 0 && func_8012C044(o)) {
        if (AF(o, u8 *, 0xCC)) func_8012C218(AF(o, u8 *, 0xCC));
        if (AF(o, u8 *, 0xD0)) func_8012C218(AF(o, u8 *, 0xD0));
        func_8012C098(o);
        return;
    }
    v = AF(o, s16, 0xE2);
    if (v != 0) {
        v--;
        AF(o, s16, 0xE2) = v;
        if (v == 0) {
            AF(o, u16, 0x5C) &= 0xBFFF;
        }
    }
    if (AF(o, s16, 0x76) < 5 && (rand() & 3) == 0) {
        q = (u8 *)func_80143C74(o, 0);
        if (q) {
            AF(q, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
            AF(q, s32, 0x14) = 0xFFF00000;
            AF(q, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
            AF(q, s16, 6) += (rand() & 0x3F) - 0x20;
            AF(q, s16, 0xA) -= 0xC0;
            AF(q, s16, 0xE) += (rand() & 0x3F) - 0x20;
        }
    }
    if (AF(o, u16, 2) != 1 && AF(o, u16, 2) != 5) {
        AF(o, s16, 0x84) = 0xE;
        return;
    }
    v = AF(o, s16, 0x84);
    if (v != 0) {
        AF(o, s16, 0x84) = v - 1;
        return;
    }
    AF(o, s16, 0x84) = 0xE;
    pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
    pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF648);
    RotTransPers(&pos, &sxy, &p, &flag);
    if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
        s32 x = ((s16 *)&sxy)[0];
        s32 a;
        if (x >= 0) { a = x; } else { a = -x; }
        a = ((0xF0 - a) * 0x7F) / 240;
        x = (x + 0xF0) / 30;
        if (x == 0x10) {
            x = 0xF;
        }
        x <<= 8; func_8002D4C8(0x8BF, (a | (x | 0x3000)) & 0xFFFF);
    }
}

void func_sc06_008_801821F8(u8 *o) {
    s32 st;
    s32 n;

    st = AF(o, u8, 0x5E);
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) &= ~1;
    if (AF(o, s16, 0xFC) == 0) {
        AF(o, s32, 0x4) = AF(AF(o, u8 *, 0x64), s32, 0x4);
        AF(o, s32, 0x8) = AF(AF(o, u8 *, 0x64), s32, 0x8);
        AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x14);
    }
    if (AF(o, s16, 0x102) == 0) {
        AF(o, s16, 0x102) = 10;
        AF(o, u16, 0x5C) |= 0x4000;
        func_8002D4C8(0x9B7, 0);
        if (AF(o, s16, 0x60) != 0) {
            if (st == 0x1D) {
                AF(o, s16, 0x82) = 0;
                AF(o, s16, 0x7C) = AF(o, s16, 0x6);
                AF(o, s16, 0x7E) = AF(o, s16, 0xA);
                AF(o, s16, 0x80) = AF(o, s16, 0xE);
            }
            if (AF(o, u8 *, 0x78) != 0) {
                n = AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30) >> 12;
                if (n <= 0) {
                    n = 1;
                }
            }
            AF(o, s16, 0x76) -= n;
            func_8016AA50(o, n);
            if (AF(o, u16, 0x82) & 1) {
                func_8016B428(o);
                StartRumbleScript(&D_sc06_008_8019EE30);
            }
        }
        if (st != 0x1D) {
            if (AF(o, u8, 0xC8) != 0) {
                func_8002A520(o);
            }
            if (AF(o, u8, 0xC9) != 0) {
                func_8002A790(o);
            }
        }
        if (AF(o, s16, 0x76) <= 0) {
            AF(o, s16, 0x5C) = 0;
            func_80131E00(o, 6);
        }
    }
}

void func_sc06_008_801823F0(u8 *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = D_801151D4;
    if (AF(arg0, s16, 0xFC) >= 0x1F) {
        temp_v0 = func_8012C658(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = func_8012C658(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = func_8012C658(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        func_8002AC00(0x22);
        temp_v0 = AF(arg0, s32, 0x64);
        AF(temp_v0, s16, 2) = 2;
        var_s1 = 0;
        temp_v0 = AF(AF(arg0, s32, 0x64), s32, 0xD0);
        AF(temp_v0, s16, 2) = 4;
        AF(AF(arg0, void *, 0x64), s32, 0xCC) = 0;
        do {
            temp_v0 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, s32, 0x1C) = 2;
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
        pos.y = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
        pos.z = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        func_8002A04C((s32) arg0);
        func_8012C218((s32) arg0);
        return;
    }
    temp_v0 = func_8012913C(0x23);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 6)) - 0x40);
        AF(temp_v0, u16, 0xA) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 0xA)) - 0x80);
        AF(temp_v0, u16, 0xE) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 0xE)) - 0x40);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) + (rcos((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 0xA));
        temp_v0_6 = rsin((s32) AF(AF(arg0, void *, 0x20), s16, 0x12));
        AF(temp_v0, s16, 0x34) = 0x1800;
        AF(temp_v0, s32, 0x18) = 0;
        AF(temp_v0, s32, 0x14) = 0;
        AF(temp_v0, s32, 0x10) = 0;
        AF(temp_v0, s32, 0xC) = (s32) (AF(temp_v0, s32, 0xC) - (temp_v0_6 << 0xA));
        v.x = AF(temp_s1, s32, 0x5C) - AF(temp_v0, u16, 6);
        v.y = AF(temp_s1, s32, 0x60) - AF(temp_v0, u16, 0xA);
        v.z = AF(temp_s1, s32, 0x64) - AF(temp_v0, u16, 0xE);
        VectorNormalSS(&v, &v);
        AF(temp_v0, u16, 6) = (u16) (AF(temp_v0, u16, 6) + (v.x >> 6));
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + (v.y >> 6));
        AF(temp_v0, u16, 0xE) = (u16) (AF(temp_v0, u16, 0xE) + (v.z >> 6)); AF(temp_v0, s16, 0x34) = 0x3000;
        func_8002D4C8(0xAF8, 0);
    }
    AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) + 1);
}

void func_sc06_008_80182838(u8 *o) {
    u8 *p;

    if (AF(o, s16, 0x102) != 0) {
        if (--AF(o, s16, 0x102) == 0) {
            AF(o, u16, 0x5C) &= ~0x4000;
        }
    }
    D_sc06_008_8019EF48[AF(o, u16, 0x2)](o);
    if (AF(o, u16, 0x0) != 0) {
        if (AF(o, s16, 0xFC) == 0) {
            AF(o, s32, 0x4) = AF(AF(o, u8 *, 0x64), s32, 0x4);
            AF(o, s32, 0x8) = AF(AF(o, u8 *, 0x64), s32, 0x8);
            AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
            AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x10);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
            AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x14);
        }
        if (AF(o, s16, 0x76) < 5 && (rand() & 3) == 0) {
            p = (u8 *)func_80143C74(o, 0);
            if (p != 0) {
                AF(p, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x14) = 0xFFF00000;
                AF(p, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x4) += rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 10;
                AF(p, s32, 0xC) -= rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 10;
                AF(p, s16, 0x6) += (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) -= 0x40;
                AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            }
        }
    }
}

void func_sc06_008_80182A48(u8 *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = D_801151D4;
    if (AF(arg0, s16, 0xFC) >= 0x1F) {
        temp_v0 = func_8012C658(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = func_8012C658(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = func_8012C658(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        func_8002AC00(0x22);
        temp_v0 = AF(arg0, s32, 0x64);
        AF(temp_v0, s16, 2) = 4;
        var_s1 = 0;
        temp_v0 = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(temp_v0, s16, 2) = 4;
        do {
            temp_v0 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, s32, 0x1C) = 2;
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
        pos.y = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
        pos.z = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; func_8002D4C8(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        AF(AF(arg0, void *, 0x64), s32, 0xD0) = 0;
        func_8002A04C((s32) arg0);
        func_8012C218((s32) arg0);
        return;
    }
    temp_v0 = func_8012913C(0x23);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 6)) - 0x40);
        AF(temp_v0, u16, 0xA) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 0xA)) - 0x80);
        AF(temp_v0, u16, 0xE) = (u16) (((rand() & 0x7F) + AF(arg0, u16, 0xE)) - 0x40);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) - (rcos((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 0xA));
        temp_v0_6 = rsin((s32) AF(AF(arg0, void *, 0x20), s16, 0x12));
        AF(temp_v0, s16, 0x34) = 0x1800;
        AF(temp_v0, s32, 0x18) = 0;
        AF(temp_v0, s32, 0x14) = 0;
        AF(temp_v0, s32, 0x10) = 0;
        AF(temp_v0, s32, 0xC) = (s32) (AF(temp_v0, s32, 0xC) + (temp_v0_6 << 0xA));
        v.x = AF(temp_s1, s32, 0x5C) - AF(temp_v0, u16, 6);
        v.y = AF(temp_s1, s32, 0x60) - AF(temp_v0, u16, 0xA);
        v.z = AF(temp_s1, s32, 0x64) - AF(temp_v0, u16, 0xE);
        VectorNormalSS(&v, &v);
        AF(temp_v0, u16, 6) = (u16) (AF(temp_v0, u16, 6) + (v.x >> 6));
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + (v.y >> 6));
        AF(temp_v0, u16, 0xE) = (u16) (AF(temp_v0, u16, 0xE) + (v.z >> 6)); AF(temp_v0, s16, 0x34) = 0x3000;
        func_8002D4C8(0xAF8, 0);
    }
    AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) + 1);
}

void func_sc06_008_80182E8C(u8 *o) {
    u8 *p;

    if (AF(o, s16, 0x102) != 0) {
        if (--AF(o, s16, 0x102) == 0) {
            AF(o, u16, 0x5C) &= 0xBFFF;
        }
    }
    D_sc06_008_8019EFC0[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) != 0) {
        if (AF(o, s16, 0xFC) == 0) {
            AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
            AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8);
            AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
            AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x10);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
            AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x14);
        }
        if (AF(o, s16, 0x76) < 5 && (rand() & 3) == 0) {
            p = (u8 *)func_80143C74(o, 0);
            if (p != 0) {
                AF(p, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x14) = 0xFFF00000;
                AF(p, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 4) -= rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 10;
                AF(p, s32, 0xC) += rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 10;
                AF(p, s16, 6) += (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) -= 0x40;
                AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            }
        }
    }
}

void func_sc06_008_8018309C(u8 *o) {
    SV8 v;
    u8 *p;
    u16 *q;

    if (AF(o, u16, 2) == 0) {
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_008_8019EDA4;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x59;
        func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_008_8019EDB0);
        AF(o, s16, 0x28) = rand() % 15;
        AF(o, s32, 0x1C) = 0x10;
        AF(o, s32, 0x2C) = 0x200;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1200;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1200;
        AF(o, u16, 2)++;
    } else if (D_801270C0 == 1) {
        func_8012931C(o);
        func_80128ED8(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C)--;
        if ((rand() & 7) == 0) {
            p = (u8 *)func_8012913C(0x22);
            if (p != 0) {
                AF(p, s16, 6) = AF(o, s16, 6);
                AF(p, s16, 0xA) = AF(o, s16, 0xA);
                AF(p, s16, 0xE) = AF(o, s16, 0xE);
                AF(p, s32, 0x10) = AF(o, s32, 0x10) >> 3;
                AF(p, s32, 0x14) = AF(o, s32, 0x14) >> 3;
                AF(p, s32, 0x18) = AF(o, s32, 0x18) >> 3;
                AF(p, s16, 0x34) = AF(AF(o, u8 *, 0x20), s16, 0x18) + 1;
                AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
            }
        }
        if (AF(o, s32, 0x1C) == 0) {
            func_801292C8(o);
        } else {
            AF(o, s32, 0x14) = 0xFFFF0000;
            AF(o, s32, 0x2C) += 0x80;
            AF(AF(o, u8 *, 0x20), s16, 0x18) += AF(o, s32, 0x2C);
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += AF(o, s32, 0x2C);
            AF(o, s16, 0xA) -= 0x20;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            if (func_8012D664(&v, 0x10, 0xB4) == 1) {
                q = &D_80126B96;
                *q |= 0x4200;
            }
            AF(o, s16, 0xA) += 0x20;
        }
    }
}

void func_sc06_008_80183320(u8 *arg0) {
    u8 *p;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xFC) = 0x1E;
    p = AF(arg0, u8 *, 0xCC);
    AF(p, s16, 0x5C) = 0;
    p = AF(arg0, u8 *, 0xD0);
    AF(p, s16, 0x5C) = 0;
}

void func_sc06_008_80183340(u8 *o) {
    u8 unused[0x10];
    func_8012B1B4(o, &D_sc06_008_8019EEB0);
    func_8012CBCC(o);
    func_sc06_008_80180A98(o, 0x48);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B8E4(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 6;
        AF(o, s16, 0x100) = 0x2D;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x104) = 0;
        SetScript(o, &D_sc06_008_801A666C);
        if (AF(o, u8 *, 0xCC)) SetScript(AF(o, u8 *, 0xCC), &D_sc06_008_801A675C);
        if (AF(o, u8 *, 0xD0)) SetScript(AF(o, u8 *, 0xD0), &D_sc06_008_801A684C);
    }
}

void func_sc06_008_80183440(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x100) = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A636C);
        temp_a0 = AF(arg0, s32, 0xCC);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_008_801A646C);
        }
        temp_a0_2 = AF(arg0, s32, 0xD0);
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_008_801A656C);
        }
    } else {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
    }
}

void func_sc06_008_801834E0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        func_8012B370((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc06_008_801835A0(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A636C);
        temp_a0 = AF(arg0, s32, 0xCC);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_008_801A646C);
        }
        temp_a0_2 = AF(arg0, s32, 0xD0);
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_008_801A656C);
        }
    } else {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
    }
}

void func_sc06_008_80183638(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD0), s16, 0x5C) = 0;
}

void func_sc06_008_80183658(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_8019EEF4) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc06_008_801A3E2C);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        func_8012B030(arg0);
        AF(arg0, s16, 0xAE) = 0x2100;
        SetScript(arg0, (s32) &D_sc06_008_801A646C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_8019EF28;
        temp_v1 = AF(arg0, s32, 0x20);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_008_80183748(void) {
}

void func_sc06_008_80183750(u8 *o) {
    s16 a, b;
    if (AF(AF(o, u8 *, 0x20), s16, 0x14) < 0x401) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += b;
        AF(o, s16, 0xA) -= 4;
        AF(o, s32, 4) += rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 6;
        AF(o, s32, 0xC) -= rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 6;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
    }
    func_8012B370(o);
}

void func_sc06_008_80183824(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        func_8012B370((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc06_008_801838E4(s32 arg0, s32 arg1) {
    func_8012B370(arg0, arg1);
}

void func_sc06_008_80183904(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xCC), s16, 0x5C) = 0;
}

void func_sc06_008_80183924(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_8019EF6C) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc06_008_801A4B98);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        func_8012B030(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_8019EFA0;
        AF(arg0, s16, 0xAE) = 0x2100;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_008_801A656C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_008_80183A18(void) {
}

void func_sc06_008_80183A20(u8 *o) {
    s16 a, b, h;
    h = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (h >= 0xC00 || h == 0) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) -= b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) &= 0xFFF;
        AF(o, s16, 0xA) -= 8;
        AF(o, s32, 4) -= rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7;
        AF(o, s32, 0xC) += rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
    }
    func_8012B370(o);
}

void func_sc06_008_80183B14(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        func_8012B370((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc06_008_80183BD4(s32 arg0, s32 arg1) {
    func_8012B370(arg0, arg1);
}

void func_sc06_008_80183BF4(u8 *o) {
    s32 r;
    s32 v;
    u8 *q;
    if (AF(o, u16, 2) == 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u16, 2)++;
        func_8012B23C(o);
        AF(o, s32, 0x1C) = 1;
        return;
    }
    AF(o, s32, 0xDC) = AF(o, s32, 0x14);
    r = func_8012CBCC(o);
    if (r && (r & 0x6000)) {
        v = AF(o, s32, 0x1C) - 1;
        AF(o, s32, 0x1C) = v;
        if (v == 0) goto kill;
        AF(o, s32, 0x14) = -AF(o, s32, 0xDC) >> 2;
    }
    if (++AF(o, u16, 0xFC) & 1) {
        q = func_8012913C(0x23);
        if (q) {
            AF(q, s16, 6) = AF(o, s16, 6);
            AF(q, s16, 0xA) = AF(o, s16, 0xA);
            AF(q, s16, 0xE) = AF(o, s16, 0xE);
            AF(q, s32, 0x10) = AF(q, s32, 0x14) = AF(q, s32, 0x18) = 0;
            AF(q, s16, 0x34) = 0x3000;
        }
    }
    if (AF(o, s16, 0xA) < 0x20) return;
kill:
    func_8012C218(o);
}

void func_sc06_008_80183D10(u8 *arg0) {
    StartRumbleScript((s32) &D_sc06_008_801A693C);
    D_sc06_008_801A6964[AF(arg0, u16, 2)](arg0);
}

void func_sc06_008_80183D68(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc06_008_80183DB8(arg0);
    func_80147324(0x92F);
    func_80146CA0(arg0);
}

s32 func_sc06_008_80183DB8(s32 arg0) {
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc06_008_801A6944);
    func_80149020(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    func_sc06_008_80183FCC();
    func_80172630(arg0);
    return func_80146CA0(arg0);
}

void func_sc06_008_80183E24(u8 *o) {
    SV8 v;
    s32 i;
    s32 k;
    s32 r0;
    s32 r1;
    s32 r2;
    u8 t;

    func_80015978(o + 4, &v);
    v.y -= 0x40;
    for (i = 0; i < 3; i++) {
        k = func_sc06_008_80183FF0();
        if (k >= 0) {
            func_80146A6C(0x51, o, v.x, v.y, v.z, k, 0);
            r0 = rand();
            r1 = rand();
            r2 = rand();
            func_80146A6C(0x52, o, 0, -0x20, 0x10, (s16)((r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (r2 & 3) * 0x44), 0);
        }
    }
    t = AF(o, u8, 0xDE);
    AF(o, u8, 0xDE) = t + 0xFF;
    if (t == 0) {
        func_sc06_008_80183F78(o);
        func_80159B3C(o);
        func_80165718(o);
    } else {
        func_80172630(o);
    }
}

s32 func_sc06_008_80183F78(s32 arg0) {
    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc06_008_80183FCC(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc06_008_801AA193;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc06_008_80183FF0(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc06_008_801AA180; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc06_008_80184034(u8 *arg0) {
    D_sc06_008_801A6970[AF(arg0, u16, 2)]();
}

void func_sc06_008_80184070(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc06_008_801AA194;
    e = (u8 *)func_801465C0();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        func_800233CC(p, 0x10);
        func_sc06_008_80184264(p);
        AF(e, s32, 4) |= 0x50000000;
        if (AF(o, s32, 0x2C) != 0) {
            AF(e, s16, 0x18) = AF(e, s16, 0x1A) = (rand() & 3) * 0x800 + 0x1000;
            AF(o, s16, 0x12) = (rand() & 0xF) + 3;
            if (rand() & 1) {
                AF(o, s16, 0x12) = -AF(o, s16, 0x12);
            }
            AF(o, s16, 0x1A) = (rand() & 0xF) + 3;
            if (rand() & 1) {
                AF(o, s16, 0x1A) = -AF(o, s16, 0x1A);
            }
        } else {
            AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x4000;
        }
        AF(o, u16, 2)++;
    } else {
        func_sc06_008_80184234(o);
    }
}

void func_sc06_008_801841BC(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc06_008_801AA194;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc06_008_80184278((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc06_008_80184234((s32) arg0);
}

void func_sc06_008_80184234(s32 arg0) {
    D_sc06_008_801AA180[AF(arg0, s32, 0x2C)] = 0;
    func_80146C3C(arg0);
}

void func_sc06_008_80184264(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc06_008_80184278(u8 *o, u8 *p) {
    s32 v;

    if (AF(o, s32, 0x30) == 0) {
        v = p[1];
        v -= 0x20;
    } else {
        v = p[2];
        v -= 0x20;
    }
    if (v > 0) {
        if (AF(o, s32, 0x30) == 0) {
            v = 0xFF0000 | (v << 8) | v;
        } else {
            v = (v << 16) | 0xFFFF;
        }
        AF(p, s32, 0) = v;
        return 0;
    }
    return 1;
}

void func_sc06_008_801842E0(u8 *arg0) {
    D_sc06_008_801A69A8[AF(arg0, u16, 2)]();
}

void func_sc06_008_8018431C(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    func_80146E90((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_008_80184368(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_sc06_008_801843B8(arg0);
}

void func_sc06_008_801843B0(void) {
}

void func_sc06_008_801843B8(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc06_008_801A69A0[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    func_80015978(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc06_008_801A69BC[i];
            AF(o, s16, 0x12) = i + j;
            func_sc06_008_8018451C(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

void func_sc06_008_8018451C(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6, CV *arg7) {
    SMtx m;
    SV8 *p2;
    SV8 *p3;
    SV8 *d;

    func_80013F3C(&m);
    RotMatrixZ(*arg6, &m);
    m.t[0] = arg1->x;
    m.t[1] = arg1->y;
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    d = D_sc06_008_801AA694;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc06_008_801AA6C4 = 0x50000000;
        D_sc06_008_801AA6BC = 0;
        D_sc06_008_801AA6BD = 0;
        D_sc06_008_801AA6BE = 0;
        D_sc06_008_801AA6C0 = 0;
        D_sc06_008_801AA6C1 = 0;
        D_sc06_008_801AA6C2 = 0;
    }
    D_sc06_008_801AA6B4 = arg7[0];
    D_sc06_008_801AA6B8 = arg7[1];
    arg5->x += arg2->x;
    arg5->y += arg2->y;
    {
        s32 r = ((u16 *)arg5)[3] & rand();
        if (*(u16 *)(arg0 + 0x12) & 1) {
            arg5->x += r;
        } else {
            arg5->x -= r;
        }
    }
    arg5->y += (rand() & 0x1F) - 0x10;
    gte_ldv0(arg2);
    gte_rtv0tr();
    gte_stsv(d);
    gte_ldv0(arg5);
    gte_rtv0tr();
    gte_stsv(&d[1]);
    gte_ldv0(arg3);
    gte_rtv0tr();
    p2 = &d[2];
    gte_stsv(p2);
    *arg3 = *arg5;
    arg3->x -= ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg3);
    gte_rtv0tr();
    p3 = &d[3];
    gte_stsv(p3);
    d->z = arg1->z;
    func_80017714(d);
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p2);
    *arg4 = *arg5;
    arg4->x += ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p3);
    d->z = arg1->z;
    func_80017714(d);
    *arg2 = *arg5;
}

void func_sc06_008_80184898(u8 *arg0) {
    StartRumbleScript((s32) &D_sc06_008_801A69DC);
    D_sc06_008_801A6A04[AF(arg0, u16, 2)](arg0);
}

void func_sc06_008_801848F0(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc06_008_8018494C(arg0);
    func_80147324(0x92F);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x10);
    func_80146CA0(arg0);
}

s32 func_sc06_008_8018494C(s32 arg0) {
    func_80147324(0x451);
    func_80154274(arg0, (s32) &D_sc06_008_801A69E4);
    func_80149020(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    ((s32 (*)())func_sc06_008_80183FCC)();
    return func_80146CA0(arg0);
}

void func_sc06_008_801849A8(u8 *o) {
    SV8 pos;
    s32 i;
    s32 k;
    s32 a;
    s32 b;
    u8 t;
    func_80015978(o + 4, &pos);
    pos.y -= 0x40;
    for (i = 0; i < 3; i++) {
        k = func_sc06_008_80183FF0();
        if (k >= 0) {
            func_80146A6C(0x51, o, pos.x, pos.y, pos.z, k, 0);
            a = rand();
            b = rand();
            func_80146A6C(0x52, o, 0, -0x20, 0x10, (s16)((a & 3) * 0x400 + (b & 3) * 250 + (rand() & 3) * 0x44), 0);
        }
    }
    t = AF(o, u8, 0xDE);
    AF(o, u8, 0xDE) = t + 0xFF;
    if (t == 0) {
        func_sc06_008_80184AEC((s32)o);
        func_80159B3C(o);
        func_80165718(o);
    }
}

s32 func_sc06_008_80184AEC(s32 arg0) {
    s32 sp18;

    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_80151664(arg0);
    func_80015978(arg0 + 4, (s32) &sp18);
    return func_8012F568(1, 0xC003, (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x10, /* extra? */ &sp18, /* extra? */ &sp18);
}

void func_sc06_008_80184B5C(u8 *arg0) {
    D_sc06_008_801A6BB0[AF(arg0, u16, 2)]();
}

void func_sc06_008_80184B98(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc06_008_801A6AB0)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc06_008_80184E94);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7070);
    }
}

void func_sc06_008_80184C70(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_008_80184C98(void) {
}

void func_sc06_008_80184CA0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc06_008_801A6B60);
}

void func_sc06_008_80184CCC(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_008_80184D0C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0x100) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7080);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7188);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc06_008_80184DCC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc06_008_801A7070);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc06_008_80184E38(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc06_008_80184E48(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc06_008_80184E58(void) {
    return D_sc06_008_801AA6DC == 1;
}

void func_sc06_008_80184E70(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

s32 *func_sc06_008_80184E94(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;
    u8 *q;

    q = AF(o, u8 *, 0x64);
    m = AF(D_80126B78, WMtx, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc06_008_801A6BCC[0], &a, &flag);
    RotTransSV(&D_sc06_008_801A6BCC[1], &b, &flag);
    if (func_80135888(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && func_8012BDBC(q, 0x300) != 0) {
        AF(q, s16, 2) = 3;
        func_80178BF8();
        return (s32 *)&func_80172710;
    }
    return 0;
}

void func_sc06_008_80184FE8(u8 *arg0) {
    D_sc06_008_801A75D0[AF(arg0, u16, 2)]();
}

void func_sc06_008_80185024(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_008_801A72C0) != 0) {
        if (!(func_80029178(D_sc06_008_801A7328[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc06_008_801856D0);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc06_008_80185B40);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc06_008_801850F8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_008_80185120(void) {
}

void func_sc06_008_80185128(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc06_008_801A750C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc06_008_801A7470[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc06_008_801A74F8 = 0;
            func_80029124(D_sc06_008_801A7470[AF(temp_s0, u16, 0xC)], 1);
            D_sc06_008_801A74F4 = 2;
        } else {
            D_sc06_008_801A750C = AF(temp_s0, s32, 0);
            var_v0 = D_sc06_008_801A73EC[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc06_008_801A74F4 = 0;
            D_sc06_008_801A74F8 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc06_008_801A7520);
    } else {
        var_a1 = &D_sc06_008_801A758C;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc06_008_80185274(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc06_008_801A7328[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc06_008_801A7328[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc06_008_80185478() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_008_80185394(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc06_008_801853C0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc06_008_801853D0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc06_008_801853E0(u8 *arg0) {
    func_80029124(D_sc06_008_801A7328[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc06_008_80185420(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc06_008_80185454(void) {
    return func_80174764() == 1;
}

s32 func_sc06_008_80185478(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc06_008_801A7328[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc06_008_801854DC(u8 *arg0) {
    D_sc06_008_801A75F8[AF(arg0, u16, 2)]();
}

void func_sc06_008_80185518(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_008_801A72F4) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc06_008_801A7290);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc06_008_801A7070);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc06_008_801855A0(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7080);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7188);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc06_008_80185660(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc06_008_801A7290);
        } else {
            SetScript((s32) arg0, (s32) &D_sc06_008_801A7070);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc06_008_801856D0(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc06_008_801A75E8[0], &a, &f);
    RotTransSV(&D_sc06_008_801A75E8[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
