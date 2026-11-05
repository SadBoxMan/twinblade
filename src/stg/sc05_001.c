#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_001_8017BE9C(void) {
}

void func_sc05_001_8017BEA4(void) {
}

void func_sc05_001_8017BEAC(void) {
}

void func_sc05_001_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc05_001_80189480[])();
extern void func_80147324();
extern void func_sc05_001_8017D0F8();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc05_001_80189494[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc05_001_801894A8[])();
extern void func_800D22E4();
extern void func_sc05_001_8017D7F0();
extern void (*D_sc05_001_801895C0[])();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc05_001_8017D960();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void (*D_sc05_001_8018963C[])();
void func_sc05_001_8017E9A8(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_001_8017E9D0(void);
extern void func_800D1EBC();
extern void (*D_sc05_001_80189650[])();
extern u8 D_sc05_001_8018965C;
extern void func_8016EE40();
extern u8 D_sc05_001_80189668;
extern void func_sc05_001_8017EAB0();
extern void (*D_sc05_001_8018967C[])();
extern void (*D_sc05_001_80189740[])();
extern void (*D_sc05_001_80189848[])();
extern void (*D_sc05_001_8018989C[])();
extern void (*D_sc05_001_80189AD4[])();
extern void (*D_sc05_001_80189AE0[])();
extern void (*D_sc05_001_80189AF8[])();
extern void (*D_sc05_001_80189B18[])();
extern void (*D_sc05_001_801A8434[])();
extern void (*D_sc05_001_801A849C[])();
extern void (*D_sc05_001_801A8E54[])();
extern void (*D_sc05_001_801AEAF8[])();
extern void (*D_sc05_001_801B267C[])();
extern void (*D_sc05_001_801B29B8[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_001_80185D94;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc05_001_801B26A8;
extern s32 * func_sc05_001_80185924();
extern s32 D_sc05_001_801B2710[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc05_001_801B28DC;
extern s32 D_sc05_001_801B28E0;
extern s32 D_sc05_001_801B28F4;
extern s32 D_sc05_001_801B2908;
extern s32 D_sc05_001_801B2974;
extern s32 D_sc05_001_801B2858[];
extern s32 D_sc05_001_801B27D4[];
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc05_001_801856CC();
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc05_001_801B29E0[])();
extern u8 D_sc05_001_801B26DC;
extern u8 D_sc05_001_801B2E80;
extern u8 D_sc05_001_801B30A0;
extern u8 D_sc05_001_801B2E90;
extern u8 D_sc05_001_801B2F98;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc05_001_801ADB14;
extern void func_80016714();

extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_80146CA0();
extern void func_sc05_001_80180B70();
extern s32 func_8012C044();
extern void (*D_sc05_001_801A8F78[])();
extern void func_sc05_001_80182CE8();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc05_001_801AABD0;
extern u8 D_sc05_001_801ADCFC;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc05_001_801ADEAC;
extern void func_sc05_001_80182944();
extern s16 D_80126CE0;
extern u8 D_sc05_001_801AC580;
extern u8 D_sc05_001_801AE1E4;

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
extern u16 D_sc05_001_801B5E28;
extern void func_8012A018();
extern void func_8012A094();
extern void func_sc05_001_8017FB98();
extern void func_8012931C();
extern void func_801292C8();
extern u8 D_sc05_001_80189B10;
extern void func_8016F2A8();
extern void func_8016F2EC();
extern s32 func_8012AD44();
extern s32 D_sc05_001_80189ACC[];
extern s32 D_sc05_001_80189710;
extern s32 D_sc05_001_80189738[];
extern void func_8001C2C4();
extern void func_8012AD50();
extern void func_sc05_001_8017FA18();
extern s32 D_80126CD4;
extern s32 func_sc05_001_8018029C();
extern u16 D_80126B62;
extern s32 func_sc05_001_80180304();
extern u8 D_800D46E4;
extern u8 D_800D5880;
extern void func_80149020();
extern s32 func_sc05_001_80180D38();
extern void func_80159B3C();
extern void func_801542DC();
extern void func_80165718();
extern void func_8014BC44();
extern s32 func_80151664();
extern u8 D_sc05_001_801A8440;
extern u8 D_sc05_001_801A844C;
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();
extern s32 func_sc05_001_80180F50();
extern s32 func_80128ED8();
extern void func_80149374();
extern s32 func_800D1FC8();
extern s32 D_sc05_001_801A8E48[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc05_001_80181574();
extern u8 D_sc05_001_801A8E6C;
extern u8 D_sc05_001_801A8EA0;
extern void func_80143970();
extern void func_sc05_001_801826C8();
extern s32 func_sc05_001_8018280C();
extern u16 D_800B99DA;
extern void func_80130D48();
extern void (*D_sc05_001_801AE450[])();
extern void func_sc05_001_8018466C();
extern s32 func_sc05_001_80184634();
extern void func_8012B23C();
extern s32 func_8012B178();
extern s16 D_80126B96;
extern u16 D_80126B9A;
extern void func_8012AD80();
extern s32 func_8012D624();
extern s32 func_8012BE54();
extern void func_8012B21C();
extern void func_8012E88C();
extern s32 func_80143994();
extern u8 D_sc05_001_801AE350;
extern void func_sc05_001_80184430();
extern void func_8012B030();
extern void func_8012E8C4();
extern void func_sc05_001_80184750();
extern void func_8002A04C();
extern void func_sc05_001_80184580();
extern s32 func_8012C098();

extern void func_sc05_001_8017F6C4();
extern void func_sc05_001_8017F964();


extern u8 D_sc05_001_80189B00;
extern u8 D_sc05_001_801A6494;
extern s32 func_8012C588();
extern s32 func_80132EF4();
s32 func_sc05_001_80180364(s32 arg0);


extern void func_8012B0B4();

extern u8 D_sc05_001_801897BC[];
extern void func_sc05_001_8017F88C();

extern void func_80131E00();
extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();

extern u8 D_sc05_001_80189AE8;
extern u8 D_sc05_001_801A536C;

extern s32 func_8012BD3C();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s32 D_80126B5C;
extern s16 D_800B9A08;
extern u8 D_sc05_001_80189570;
extern u8 D_sc05_001_8018950C[];
extern s32 func_80013328();
extern void func_801746A4();
extern s32 func_8012BD14();
extern void func_800233CC();
extern u8 D_sc05_001_801B5C18;
extern u8 D_sc05_001_801B5C19;
extern u8 D_sc05_001_801B5C1A;
extern u8 D_sc05_001_801B5C1C;
extern u8 D_sc05_001_801B5C1D;
extern u8 D_sc05_001_801B5C1E;
extern s32 D_sc05_001_801B5E1C;
extern s32 D_sc05_001_801B5E20;
extern s32 D_sc05_001_801B5E24;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc05_001_801AF450;

void func_sc05_001_8017BEBC(u8 *obj) {
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

void func_sc05_001_8017CD9C(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc05_001_8017CDD8(u8 *arg0) {
    D_sc05_001_80189480[AF(arg0, u16, 2)]();
}

void func_sc05_001_8017CE14(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_001_8017CE64(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_001_8017D0F8((s32) arg0);
}

void func_sc05_001_8017CEC0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_001_8017D0F8((s32) arg0);
}

void func_sc05_001_8017CF44(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_001_8017D0F8((s32) arg0);
}

void func_sc05_001_8017D0AC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc05_001_8017D0F8((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc05_001_80189454[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern s32 func_sc05_001_801813FC();
extern s32 func_sc05_001_80181340();
extern void func_sc05_001_8018511C();

void func_sc05_001_8017D0F8(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    func_80017DC4(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    func_80017E68(&r, &m);
    t = D_sc05_001_80189454;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        func_80017758(&q, &m);
    }
    t = D_sc05_001_80189454;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        func_80017758(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc05_001_80189454;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            func_80017758(&q, &m);
        }
    }
}

void func_sc05_001_8017D404(u8 *arg0) {
    D_sc05_001_80189494[AF(arg0, u16, 2)]();
}

void func_sc05_001_8017D440(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_001_8017D480(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_001_8017D0F8((s32) arg0);
}

void func_sc05_001_8017D4F0(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_001_8017D0F8((s32) arg0);
}

void func_sc05_001_8017D57C(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_001_8017D0F8((s32) arg0);
}

void func_sc05_001_8017D650(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc05_001_8017D0F8((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc05_001_8017D6A4(u8 *arg0) {
    D_sc05_001_801894A8[AF(arg0, u16, 2)]();
}

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern u8 D_sc05_001_801894D8;
extern u8 D_sc05_001_80189514;
extern u8 D_sc05_001_801AF428;
extern u8 D_sc05_001_801B5BA8;
extern u8 D_sc05_001_801B5BB4;
extern u8 D_sc05_001_801B5BB5;
extern u8 D_sc05_001_801B5BB6;
extern u8 D_sc05_001_801B5BC4;
extern u8 D_sc05_001_801B5BC5;
extern u8 D_sc05_001_801B5BC6;
extern u8 D_sc05_001_801B5BD5;
extern u8 D_sc05_001_801B5BD6;
extern u8 D_sc05_001_801B5BD8;
extern u8 D_sc05_001_801B5BD9;
extern u8 D_sc05_001_801B5BDA;
extern u8 D_sc05_001_801B5BDC;
extern u8 D_sc05_001_801B5BDD;
extern u8 D_sc05_001_801B5BDE;
extern u8 D_sc05_001_801B5BE4;
extern u8 D_sc05_001_801B5C58;
extern void func_8001C810();
typedef struct { u8 r, g, b, cd; } CV;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern s32 func_sc05_001_801827A0();
extern s32 func_8012B608();
extern void func_80143B6C();
extern void func_8012B2CC();
extern s32 func_8012CBF4();
extern s32 func_8012CBCC();
extern u8 D_sc05_001_801AE3A8;
extern void func_8012DBD0();
extern s32 func_8012CC64();
extern s32 func_8012CC1C();
extern void func_80131C78();

extern u8 D_sc05_001_801AE2E4;
extern u8 D_sc05_001_801AE318;
extern u8 D_sc05_001_801AE360;
extern u8 D_sc05_001_801AE3B0;
extern void func_8001CD9C();
extern void func_8012E8A8();
extern s32 func_8012BDBC();
extern void func_8012EFB8();

extern u8 D_sc05_001_80189A78;
extern u8 *D_sc05_001_801899C0[];
extern u8 *D_sc05_001_80189A70[];
extern void func_8001CB6C();
extern u8 D_sc05_001_801A583C;
extern u8 D_sc05_001_801A5ED4;
extern CV4 D_sc05_001_801A8CB4;
extern CV4 D_sc05_001_801A8CD0;
extern CV4 D_sc05_001_801A8CEC;
extern CV4 D_sc05_001_801A8D08;
extern CV4 D_sc05_001_801A8D40;
extern CV4 D_sc05_001_801A8D5C;
extern CV4 D_sc05_001_801A8D78;
extern CV4 D_sc05_001_801A8D94;
extern CV4 D_sc05_001_801A8DCC;
extern CV4 D_sc05_001_801A8DE8;
extern CV4 D_sc05_001_801A8E04;
extern CV4 D_sc05_001_801A8E20;
extern s32 func_8012EF70();
extern void func_80015954();

extern u8 D_sc05_001_801AEEB0;
extern SV8 D_sc05_001_801897B8[];
extern SV8 D_sc05_001_80189748[];
extern u8 D_sc05_001_80189838;
extern void func_sc05_001_8017F5A4();

typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { u8 a, b; } B2;
typedef struct { u8 type; u8 kind; s16 a[2]; s16 b[2]; s16 x; s16 z; } E14;

extern u8 D_80062BF4;
extern void StartRumbleScript();
extern s32 func_801511E0();
extern s32 func_80012A60();
extern u8 D_800D58AC;
extern s32 func_80154274();
extern void func_80146994();

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
extern s32 D_sc05_001_801B5BAC;
extern s32 D_sc05_001_801B5BB0;
extern s32 D_sc05_001_801B5BB8;
extern s32 D_sc05_001_801B5BBC;
extern s32 D_sc05_001_801B5BC0;
extern s32 D_sc05_001_801B5BC8;
extern s32 D_sc05_001_801B5BCC;
extern s32 D_sc05_001_801B5BD0;

extern u8 D_80126940;
extern u8 D_sc05_001_80189680;
extern s16 D_sc05_001_8018970C[];
extern s32 func_80148800();
extern s32 func_sc05_001_8017EE08();
extern s32 func_80012DBC();
extern void *D_80126B78;
extern s32 func_sc05_001_8017EF88();
extern s32 func_sc05_001_8017F040();
extern s32 func_sc05_001_8017F0F8();
extern u16 D_80126B5E;
extern s32 func_8014CB2C();
extern u8 D_sc05_001_80189728;
extern u8 D_sc05_001_801861E8;
extern void func_8013C9C4();
extern void func_8012B77C();
extern u8 D_sc05_001_80189828;
extern void func_8012B14C();
extern s32 D_sc05_001_801A82B4[];
extern s32 D_sc05_001_801B5E30[];
extern s32 D_sc05_001_801B5E34[];
extern void func_80132784();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void func_80013F3C();
extern s16 D_sc05_001_801A84A4[];
extern u8 D_80078E78;
extern u8 D_sc05_001_801ADDEC;
extern void func_sc05_001_80182908();
extern u8 D_sc05_001_801AABE0;
extern void func_sc05_001_801851DC();
extern u8 D_sc05_001_801AE2C4;
extern u8 *func_80143BDC();
extern s32 func_8014CB1C();
typedef struct { s16 h; u8 a, b, c; u8 pad[11]; } Col16;
extern u16 D_80126B66;
extern void func_8012B200();
extern void func_8012E9C0();
extern u8 D_sc05_001_801AE478;
extern u8 D_sc05_001_801AE488;
extern u8 D_sc05_001_801AE498;
extern u8 D_sc05_001_801AE4A8;
extern u8 D_sc05_001_801AE4B8;
extern void func_801439C0();
extern u8 D_800AF630;
extern u8 D_sc05_001_801AE3A0;
extern s32 func_8012C51C();
extern u8 D_sc05_001_801AE326;
extern s8 D_sc05_001_801AE361;
extern s8 D_sc05_001_801AE362;
extern u8 D_sc05_001_801B2630;
extern u8 D_sc05_001_801B263C;
extern s32 func_sc05_001_801850C4();
extern void func_8012F14C();
extern void func_8012EC04();

void func_sc05_001_8017D6E0(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc05_001_8017D794(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc05_001_8017D7F0((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc05_001_8017D7F0(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = D_800AE620;
    l.code = 0x50000000;
    func_80016A5C(&l, &m);
}

void func_sc05_001_8017D960(u8 *arg0, s32 arg1_0) {
    SV v;
    WMtx m;
    s16 arg1 = arg1_0;
    s16 s;
    s32 k;
    s32 x;
    s32 t;
    u8 *t0;
    u8 *a3;

    t0 = AF(arg0, u8 *, 0xCC);
    a3 = AF(arg0, u8 *, 0x20);
    if (arg1 != 0) {
        k = 0x40000000;
        s = 0x1000;
    } else {
        k = 0x50000000;
        s = 0x1333;
    }
    x = AF(a3, s32, 4) & 0xCFFFFFFF;
    t = k | 0x40000000;
    AF(a3, s32, 4) = x | t;
    if (AF(AF(arg0, u8 *, 0xCC), u16, 0) != 0) {
        AF(t0, s16, 0x1A) = s;
        AF(t0, s16, 0x18) = s;
    }
    v.vx = AF(arg0, u16, 0xFC) += 0x80;
    v.vy = AF(arg0, u16, 0xFE) += 0x100;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x100;
    ApplyMatrixSV(&m, &v, &v);
    *(s32 *)&D_sc05_001_801B5BA8 = D_sc05_001_801B5BB8 = D_sc05_001_801B5BC8 = v.vx;
    D_sc05_001_801B5BAC = D_sc05_001_801B5BBC = D_sc05_001_801B5BCC = v.vy;
    D_sc05_001_801B5BB0 = D_sc05_001_801B5BC0 = D_sc05_001_801B5BD0 = v.vz;
}

void func_sc05_001_8017DA90(u8 *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (func_800291B4(*AF(arg0, u8 *, 0xDC) + 0x3A) & 0xFF) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(arg0, s32, 0x20) == 0) {
        if (func_8012C354(arg0, &D_sc05_001_801894D8) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc05_001_801AF428);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc05_001_80189514);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc05_001_801B5BA8;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc05_001_801B5BD8;
        func_8001CD50(o, p);
        D_sc05_001_801B5BDA = 0x80;
        p[0] = 0x80;
        D_sc05_001_801B5BD9 = 0xE0;
        D_sc05_001_801B5BDD = 0;
        D_sc05_001_801B5BDC = 0;
        D_sc05_001_801B5BDE = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc05_001_801AF450;
        b = (U12x9 *) &D_sc05_001_801B5C58;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc05_001_801B5BD6 = 0xFF;
        D_sc05_001_801B5BE4 = 0xFF;
        D_sc05_001_801B5BC6 = 0xFF;
        D_sc05_001_801B5BC4 = 0xFF;
        D_sc05_001_801B5BB6 = 0xFF;
        D_sc05_001_801B5BB4 = 0xFF;
        D_sc05_001_801B5BD5 = 0x80;
        D_sc05_001_801B5BC5 = 0x80;
        D_sc05_001_801B5BB5 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc05_001_801B5C58;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc05_001_8017DE1C(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &D_801202A0, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = func_80013328(arg0 + 4, &D_80126B5C);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc05_001_8017D960(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc05_001_8018950C[(s16) i]) {
                func_801746A4();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (func_8012BD14(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            func_80178B18(arg0, &D_sc05_001_80189570);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc05_001_8017E094(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc05_001_801B5C18;
        func_8001CD50(o, p);
        D_sc05_001_801B5C19 = 0xFF;
        D_sc05_001_801B5C1A = 0xFF;
        p[0] = 0xFF;
        D_sc05_001_801B5C1E = 8;
        D_sc05_001_801B5C1C = 8;
        D_sc05_001_801B5C1D = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc05_001_801B5E1C;
        q[0] = v.vx;
        D_sc05_001_801B5E20 = v.vy;
        D_sc05_001_801B5E24 = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc05_001_8017E1DC(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc05_001_801AF450;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc05_001_8017D960(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc05_001_8017E35C(u8 *arg0) {
    D_sc05_001_801895C0[AF(arg0, u16, 2)]();
}

void func_sc05_001_8017E398(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc05_001_8017E3E4(u8 *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xDC);
    temp_s2 = AF(arg0, s16 *, 0xCC);
    temp_s1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_v1, u8, 1) != 0) && (AF(arg0, s16, 0x108) == 0)) {
        AF(arg0, s16, 0x108) = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc05_001_8017D960((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_001_8017E4D8(u8 *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = AF(arg0, u8 *, 0xDC);
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (AF(arg0, s16, 0x108) == 0) {
            AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
        }
        t = AF(arg0, s16, 0x108);
        v = t;
    }
    if (v != 0) {
        AF(arg0, u16, 2)++;
    }
}

void func_sc05_001_8017E558(u8 *arg0) {
    SV8 sp10;
    SV8 sp18;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x58) = 0;
        sp10.x = AF(arg0, u16, 6);
        sp10.y = AF(arg0, u16, 0xA);
        sp10.z = AF(arg0, u16, 0xE);
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (sp18.y + 0x800);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_001_8017E60C(u8 *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = AF(arg0, u8 *, 0xD0);
    d = AF(arg0, u8 *, 0xDC);
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        func_80178B18((s32) arg0, AF(d, s32, 0xC));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_001_8017E678(u8 *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0xDC);
    if (func_80178970((s32) arg0, arg1) != 0) {
        func_80178D18((s32) arg0);
        func_800291A0(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            func_8002AC00(0x25);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_001_8017E704(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc05_001_8017E724(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc05_001_8017D960(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_001_8017E778(u8 *arg0) {
    D_sc05_001_8018963C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_001_8017E7B4(u8 *arg0) {
    func_sc05_001_8017E9A8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_001_8017E7F8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_001_8017E81C(u8 *arg0) {
    func_sc05_001_8017E9D0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_001_8017E85C(u8 *arg0) {
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

void func_sc05_001_8017E8D8(void) {
    func_800D1EBC();
}

void func_sc05_001_8017E8F8(u8 *arg0) {
    D_sc05_001_80189650[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_001_8017E934(u8 *arg0) {
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

void func_sc05_001_8017E9A8(void) {
    func_8016EE40((s32) &D_sc05_001_8018965C, 0x01000000);
}

void func_sc05_001_8017E9D0(void) {
    func_8016EE40((s32) &D_sc05_001_80189668, 0x01000000);
}

void func_sc05_001_8017E9F8(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x155;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_001_8017EAB0, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_001_8017EAB0((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc05_001_801B5E28 = D_801269E8;
}

void func_sc05_001_8017EAB0(s32 arg0) {
    D_sc05_001_8018967C[AF(arg0, u8, 4)]();
}

void func_sc05_001_8017EAEC(u8 *o) {
    typedef struct { u8 pad[0xA0]; s16 sA0; } ObjS;
    SV8 a;
    SV8 b;
    s32 r;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc05_001_8018970C[AF(o, u8, 5)];
    }
    a = *(SV8 *)&D_80126940;
    b.x = a.x - rsin(AF(D_80126B78, s16, 0x12)) / 128;
    b.z = a.z - rcos(AF(D_80126B78, s16, 0x12)) / 128;
    b.y = a.y;
    r = func_sc05_001_8017EE08(&D_sc05_001_80189680, &a, &b);
    ((ObjS *)o)->sA0 = r;
    D_sc05_001_801B5E28 = func_80012DBC((s16)D_sc05_001_801B5E28, (s16)r, 4, 1);
    func_sc05_001_8017EC3C((s32)o, (s16)D_sc05_001_801B5E28, (s32)&a);
}

void func_sc05_001_8017EC3C(s32 arg0, s32 arg1, s32 arg2) {
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
    func_sc05_001_8018115C(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

s32 func_sc05_001_8017EE08(E14 *p, s32 a, SV8 *b) {
    s32 r;

    for (;; p++) {
        switch (p->type) {
        case 0:
            r = func_sc05_001_8017EF88(p->a, p->b, a);
            break;
        case 1:
            r = func_sc05_001_8017F040(p->a, p->b, a);
            break;
        case 2:
            r = func_sc05_001_8017F0F8(p->a, p->b, a);
            break;
        case 0xFF:
            return 0x800;
        }
        if (r == 0) {
            switch (p->kind) {
            case 0:
                return ratan2(b->x - p->x, b->z - p->z) & 0xFFF;
            case 1:
                return ratan2(p->x - b->x, p->z - b->z) & 0xFFF;
            case 2:
                return 0x800;
            case 3:
                return 0x400;
            case 4:
                return 0xC00;
            }
        }
    }
}

s32 func_sc05_001_8017EF88(s16 *a, s16 *b, s16 *c) {
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

s32 func_sc05_001_8017F040(s16 *a, s16 *b, s16 *c) {
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

s32 func_sc05_001_8017F0F8(s16 *arg0, s16 *arg1, s16 *arg2) {
    if (arg2[0] < arg0[0] || arg1[0] < arg2[0] || arg2[2] < arg0[1]) {
        return 1;
    }
    return arg1[1] < arg2[2];
}


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
extern s32 func_8012D5E4();
extern u8 D_sc05_001_801A8FA8;
extern void func_8012F568();
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
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern void func_80178BF8();
extern s32 func_80135888();
extern void func_80172710();
extern SV8 D_sc05_001_801B29D0[];

extern s16 D_80126CAC;
extern s16 D_80126CB0;

s32 func_sc05_001_8017F150(u8 *o) {
    V3 d;

    d.x = D_80126CAC - AF(o, s16, 0);
    d.y = 0;
    d.z = D_80126CB0 - AF(o, s16, 4);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return (u32)(d.x + d.y + d.z - 0x90001) <= 0x18FFE;
}

s32 func_sc05_001_8017F1E4(u8 *o) {
    V3 d;

    d.x = D_80126CAC - AF(o, s16, 6);
    d.y = 0;
    d.z = D_80126CB0 - AF(o, s16, 0xE);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return d.x + d.y + d.z > 0x143FFF;
}

void func_sc05_001_8017F268(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((u16)(D_80126B5E - AF(o, u16, 6) + 0x17F) < 0xFF) {
            if ((func_8014CB2C() & 0x7FFFFFFF) == 2) {
                func_80178B18(o, &D_sc05_001_80189728);
                AF(o, s16, 0xFE) = 1;
                AF(o, s32, 0x1C) = 0x30;
                AF(o, u16, 0x34)++;
                func_8002D4C8(0xB10, 0);
            }
        }
        break;
    case 1:
        func_80178970(o);
        if ((AF(o, s32, 0x1C) & 0xF) == 0) {
            func_8013C9C4(&D_sc05_001_801861E8);
        }
        if (func_8012BEE8(o)) {
            func_80178D18(o);
            func_80029124(D_sc05_001_80189738[AF(o, s16, 0x70)], 1);
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        break;
    }
}

void func_sc05_001_8017F3A8(u8 *arg0) {
    D_sc05_001_80189740[AF(arg0, u16, 2)]();
}

void func_sc05_001_8017F3E4(u8 *o) {
    s32 a;
    SV8 *t;

    a = func_8012C1B8();
    AF(o, s32, 0x20) = a;
    if (a == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(a, &D_sc05_001_801AEEB0);
    if (func_80029178(D_sc05_001_80189738[AF(AF(o, u8 *, 0x64), s16, 0x70)]) & 0xFF) {
        t = &D_sc05_001_801897B8[AF(o, s16, 0x70)];
        AF(o, s16, 6) += t->x;
        AF(o, s16, 0xA) += t->y;
        AF(o, s16, 0xE) += t->z;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = D_sc05_001_80189748[AF(o, s16, 0x70)].pad;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = rand() & 0xFF0;
        func_sc05_001_8017F710(o);
    } else {
        t = &D_sc05_001_80189748[AF(o, s16, 0x70)];
        AF(o, s16, 6) += t->x;
        AF(o, s16, 0xA) += t->y;
        AF(o, s16, 0xE) += t->z;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = t->pad;
        func_sc05_001_8017F5A4(o);
        func_8012AD50(o);
    }
    if (AF(AF(o, u8 *, 0x20), u16, 0x18) & 1) {
        AF(o, u8 *, 0x58) = &D_sc05_001_80189838;
        AF(o, u16, 0x5C) = 0xC400;
        AF(o, u8, 0x75) = 0;
    }
}

void func_sc05_001_8017F5A4(u8 *o) {
    V3 v;
    s32 r;
    SV8 *t;

    t = &D_sc05_001_801897B8[AF(o, s16, 0x70)];
    v.x = (AF(AF(o, u8 *, 0x64), s16, 6) + t->x) << 16;
    v.y = (AF(AF(o, u8 *, 0x64), s16, 0xA) + t->y) << 16;
    v.z = (AF(AF(o, u8 *, 0x64), s16, 0xE) + t->z) << 16;
    func_8012B77C(&r, o + 4, &v);
    AF(AF(o, u8 *, 0x20), s32, 0x10) = r;
    func_8012B2CC(o);
    func_8012B14C(o, &D_sc05_001_80189828);
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, s16, 0x70) * 0x300;
    if (AF(AF(o, u8 *, 0x20), s16, 0x18) != 0) {
        AF(o, s16, 0x100) = 0x40000 / AF(AF(o, u8 *, 0x20), s16, 0x18);
    }
}

void func_sc05_001_8017F6C4(o)
    u8 *o;
{
    func_8012AD44(o, 2);
    AF(o, s32, 0x1C) = *(s16 *)(D_sc05_001_801897BC + AF(o, s16, 0x70) * 8 + 2);
}

void func_sc05_001_8017F710(s32 arg0) {
    func_8012AD44(arg0, 2);
    AF(arg0, s16, 0x34) = 3;
}

void func_sc05_001_8017F744(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_a0;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 1:
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
        func_8012AD80((s32) arg0, arg1);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x100));
        if ((AF(AF(arg0, void *, 0x64), s16, 0xE) + (*(s16 *)((u8 *)D_sc05_001_801897BC + (AF(arg0, s16, 0x70) * 8)))) >= AF(arg0, s16, 0xE)) {
            AF(arg0, s32, 0x1C) = 0x18;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            if (AF(arg0, s16, 0x70) == 0) {
                func_8002D4C8(0xB0F, 0);
                return;
            }
        } else {
            if (!(AF(arg0, s32, 0x1C) & 7)) {
                func_sc05_001_8017F88C((s32) arg0);
                return;
            }
            return;
        }
        break;
    case 2:
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            func_sc05_001_8017F88C((s32) arg0);
        }
        /* fallthrough */
    case 0:
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    }
}

void func_sc05_001_8017F88C(u8 *o) {
    u8 *c = (u8 *)func_80132EF4(o, 0x22);
    if (c != 0) {
        AF(c, s16, 0xA) += AF(AF(o, u8 *, 0x20), s16, 0x1A) / 64;
        AF(c, s16, 0xE) -= AF(AF(o, u8 *, 0x20), s16, 0x1C) / 64;
        AF(c, s16, 0x34) = 0x5001;
        AF(c, s16, 0x16) = -6;
    }
}

void func_sc05_001_8017F928(u8 *arg0) {
    D_sc05_001_80189848[AF(arg0, u16, 2)]();
}

void func_sc05_001_8017F964(u8 *o) {
    u8 *c = (u8 *)func_80132EF4(o, 0x49);
    if (c != 0) {
        AF(c, s16, 6) += AF(o, s16, 0x104) + (rand() & 0xF) - 8;
        AF(c, s16, 0xA) += AF(o, s16, 0x106) + (rand() & 0xF) - 8;
        AF(c, s16, 0xE) -= AF(AF(o, u8 *, 0x20), s16, 0x1C) / 64;
        AF(c, s32, 0x2C) = 0x40000;
    }
}

extern SV8 D_sc05_001_80189854[];
void func_sc05_001_8017FA18(o)
    u8 *o;
{
    SV8 *t = &D_sc05_001_80189854[AF(o, s16, 0x70)];
    if (t->x | t->y | t->z) {
        func_8012B23C(o);
        AF(o, s16, 0x12) = t->x;
        AF(o, s16, 0x16) = t->y;
        AF(o, s16, 0x1A) = t->z;
        AF(o, s16, 0x100) = 1;
        AF(o, s16, 0x102) = 0x60 - (rand() & 3) * 16;
    }
    func_8012AD44(o, 2);
}

void func_sc05_001_8017FAC8(u8 *arg0) {
    D_sc05_001_8018989C[AF(arg0, u16, 2)]();
}

void func_sc05_001_8017FB04(u8 *arg0) {
    if (AF(arg0, u16, 2) == 0) {
        func_sc05_001_8017FB98();
        AF(arg0, u16, 0x34) = (u16) AF(arg0, u16, 0xA);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_8012931C((s32) arg0);
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x4000);
    if (((s16) AF(arg0, u16, 0x34) + 0xC0) < (s16) AF(arg0, u16, 0xA)) {
        func_801292C8((s32) arg0);
    }
}

void func_sc05_001_8017FB98(u8 *o) {
    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x14) = AF(o, s32, 0x2C);
    AF(o, s32, 0x18) = 0xFFFE0000;
}

void func_sc05_001_8017FBB0(u8 *o) {
    u8 *p;
    u8 *e;
    s32 i;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    AF(o, u16, 0x36) = AF(o, u16, 0xA);
    switch ((s16)AF(o, u16, 0x34) >> 1) {
    case 0:
        e = D_sc05_001_801899C0[AF(o, u16, 0x34) & 1];
        func_8001CB6C(AF(o, s32, 0x20), e, 0x300, 0x100);
        if (func_80029178(D_sc05_001_80189ACC[AF(o, u16, 0x34) & 1]) & 0xFF) {
            AF(o, u16, 2)++;
            n = 9;
        } else {
            n = 3;
        }
        for (i = 0; i < 9; i++) {
            if (i < n) {
                AF(e, s16, 0) = 0;
            } else {
                AF(e, s16, 0) = 0xFF;
            }
            AF(e, u8, 3) = 0x20;
            AF(e, s16, 6) = 0;
            AF(e, s16, 0xA) = -((i + 1) * 32);
            e += 0xC;
        }
        break;
    case 1:
        e = D_sc05_001_80189A70[AF(o, u16, 0x34) & 1];
        func_8001CB6C(AF(o, s32, 0x20), e, 0x300, 0x100);
        if (func_80029178(D_sc05_001_80189ACC[AF(o, u16, 0x34) & 1]) & 0xFF) {
            AF(o, s16, 0xA) = AF(p, s16, 0xA) - 200;
            AF(o, u16, 2)++;
            n = 0;
        } else {
            n = 5;
        }
        for (i = 0; i < 6; i++) {
            if (i < n) {
                AF(e, s16, 0) = 0;
            } else {
                AF(e, s16, 0) = 0xFF;
            }
            AF(e, u8, 3) = 0x20;
            AF(e, s16, 6) = 0;
            AF(e, s16, 0xA) = -((i + 1) * 32);
            e += 0xC;
        }
        break;
    case 2:
        func_8001CB6C(AF(o, s32, 0x20), &D_sc05_001_80189A78, 0x300, 0x100);
        AF(AF(o, u8 *, 0x20), s16, 0x14) = 0x220;
        break;
    }
    AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x65;
    AF(o, u16, 2)++;
}

void func_sc05_001_8017FE0C(u8 *o) {
    u8 *p;
    s16 d;
    u8 *e;
    s32 n = 0;
    p = AF(o, u8 *, 0x2C);
    switch ((s16)AF(o, u16, 0x34) >> 1) {
    case 0: {
        u16 t; s32 k; u8 b; s32 m;
        AF(o, s16, 6) = AF(p, s16, 6);
        AF(o, s16, 0xA) = AF(p, s16, 0xA) - 0x70;
        AF(o, s16, 0xE) = AF(p, s16, 0xE);
        d = AF(p, s16, 0xA) - AF(o, s16, 0x36);
        k = d / 32;
        if (k < 5) {
            m = k + 4;
            m <<= 5;
            t = AF(o, u16, 0x34);
            t &= 1;
            e = D_sc05_001_801899C0[t];
            b = d - k * 32;
            e += k * 0xC + 0x24;
            AF(e, u8, 3) = 0x20;
            AF(e, s16, 0) = 0;
            AF(e, s16, 6) = 0;
            AF(e, s16, 0xA) = -m;
            e += 0xC;
            AF(e, u8, 3) = b;
            AF(e, s16, 0) = 0xFF;
            AF(e, s16, 6) = 0x20 - b;
            AF(e, s16, 0xA) = -(AF(e, u8, 3) + m);
        }
        break;
    }
    case 1: {
        s32 k; s32 j; s32 dd;
        AF(o, s16, 6) = AF(p, s16, 6);
        AF(o, s16, 0xA) = AF(p, s16, 0xA) - 200;
        AF(o, s16, 0xE) = AF(p, s16, 0xE);
        d = AF(o, s16, 0x36) - AF(p, s16, 0xA);
        dd = d;
        k = dd / 32;
        j = 5 - k;
        if (dd != 0) {
            n = j;
            if (n >= 0) {
                e = D_sc05_001_80189A70[AF(o, u16, 0x34) & 1];
                e += n * 0xC;
                do {
                AF(e, s16, 0) = 0xFF;
                AF(e, u8, 3) = (k + 1) * 32 - d;
                AF(e, s16, 6) = 0x20 - AF(e, u8, 3);
                AF(e, s16, 0xA) = -(AF(e, u8, 3) + n * 32);
                } while (0); /* MATCH-TRICK: loop-weighted refs of k, d, n for global-alloc */
            }
        }
        break;
    }
    case 2:
        break;
    }
}

void func_sc05_001_8017FFF8(u8 *arg0) {
    D_sc05_001_80189AD4[AF(arg0, u16, 2)]();
}

void func_sc05_001_80180034(u8 *o) {
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;

    a = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = a;
    if (a == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(a, &D_sc05_001_801A583C);
    if (!(AF(o, u16, 0x70) & 2)) {
        b = (u8 *)func_8012C1B8();
        if (b != 0) {
            func_8001C214(b, &D_sc05_001_801A5ED4);
            AF(o, u8 *, 0xCC) = b;
            AF(b, s16, 8) = AF(o, s16, 6);
            AF(b, s16, 0xA) = AF(o, s16, 0xA);
            AF(b, s16, 0xC) = AF(o, s16, 0xE);
        }
        c = (u8 *)func_80132EF4(o, 0x45);
        if (c != 0) {
            AF(c, s16, 0x34) = 4;
            AF(c, s16, 6) -= 0x10;
            AF(c, s16, 0xA) -= 0x30;
            AF(c, s16, 0xE) -= 0xE0;
        }
        d = (u8 *)func_8012C658(0x1B3, (s16)(AF(o, u16, 0x70) | 2), o);
        if (d != 0) {
            AF(d, s16, 6) -= 0xA0;
            AF(d, s16, 0xA) += 0x80;
            AF(o, u8 *, 0x6C) = d;
            b = (u8 *)func_8012C1B8();
            if (b != 0) {
                func_8001C214(b, &D_sc05_001_801A5ED4);
                AF(d, u8 *, 0xCC) = b;
                AF(b, s16, 8) = AF(d, s16, 6);
                AF(b, s16, 0xA) = AF(d, s16, 0xA);
                AF(b, s16, 0xC) = AF(d, s16, 0xE);
            }
        }
        d = (u8 *)func_8012C658(0x1B5, AF(o, s16, 0x70), o);
        if (d != 0) {
            AF(d, s16, 6) -= 0xC0;
            AF(d, s16, 0xA) += 0x150;
            AF(d, s16, 0xE) -= 0xE0;
            c = (u8 *)func_80132EF4(d, 0x45);
            if (c != 0) {
                AF(c, u8 *, 0x2C) = d;
                AF(c, s16, 0x34) = AF(o, s16, 0x70);
            }
        }
    }
    func_8012AD50(o);
}

void func_sc05_001_80180224(u8 *arg0) {
    D_sc05_001_80189AE0[AF(arg0, u16, 2)]();
}

void func_sc05_001_80180260(u8 *arg0) {
    D_sc05_001_80189AF8[AF(arg0, u16, 2)]();
}

s32 func_sc05_001_8018029C(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc05_001_80189B10);
    func_8016F2A8();
    func_8016F2EC();
    AF(arg0, s16, 0xFE) = 0x14;
    AF(arg0, s32, 0x1C) = 4;
    func_8002D4C8(0x8FE, 0);
    return func_8012AD44(arg0, 2);
}

s32 func_sc05_001_80180304(s32 arg0) {
    func_80178D18(arg0);
    func_8002D4C8(0x8F9, 0);
    func_80029124(D_sc05_001_80189ACC[AF(arg0, s16, 0x70)], 1);
    return func_8012AD44(arg0, 3);
}

s32 func_sc05_001_80180364(s32 arg0) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = AF(arg0, void *, 0x6C);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0xA0);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) - 0xA0);
    }
    temp_v1_2 = AF(AF(arg0, void *, 0x64), void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) - 0x780);
    temp_v0 = AF(AF(arg0, void *, 0x64), void *, 0x6C);
    if (temp_v0 != NULL) {
        temp_v1_3 = AF(temp_v0, void *, 0x20);
        AF(temp_v1_3, u16, 0x14) = (u16) (AF(temp_v1_3, u16, 0x14) - 0x780);
    }
    return func_8012AD44(arg0, 3);
}

void func_sc05_001_801803F8(u8 *arg0) {
    D_sc05_001_80189B18[AF(arg0, u16, 2)]();
}

void func_sc05_001_80180434(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    func_8012AD50(arg0);
    if (func_80029178(D_sc05_001_80189738[AF(arg0, s16, 0x70)]) & 0xFF) {
        AF(arg0, s16, 0x34) = 2;
    } else {
        var_s0 = 0;
        AF(AF(arg0, s32, 0x20), s32, 0x20) = (s32) D_sc05_001_80189710;
        do {
            func_8012C658(0x1D3, var_s0, arg0);
            var_s0 += 1;
        } while (var_s0 < 9);
    }
    var_s0_2 = 0;
    AF(AF(arg0, s32, 0x20), s32, 0x20) = 0;
    do {
        func_8012C658(0x1D0, var_s0_2, arg0);
        var_s0_2 += 1;
    } while (var_s0_2 < 0xE);
}

void func_sc05_001_80180520(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(AF(arg0, void *, 0x64), s16, 0xFE) != 0) {
        func_sc05_001_8017F6C4();
        return;
    }
    if (AF(arg0, s16, 0x102) != 0) {
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc05_001_8017F964((s32) arg0);
            AF(arg0, s32, 0x1C) = (s32) ((rand() & 7) + 1);
            AF(arg0, s16, 0x102) = (s16) ((u16) AF(arg0, s16, 0x102) - 1);
        }
    } else if (!(rand() & 0xFF)) {
        AF(arg0, s16, 0x102) = (s16) ((rand() & 3) + 2);
        AF(arg0, s16, 0x104) = (s16) ((rand() & 0x3F) - 0x20);
        AF(arg0, s16, 0x106) = (s16) ((rand() & 0x3F) - 0x20);
    }
}

void func_sc05_001_80180600(u8 *o) {
    u8 *a;
    s32 n;

    a = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = a;
    if (a == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(a, s32, 0x28) = 0x1200120;
    n = AF(o, s16, 0x70) * 8;
    *(s32 *)((u8 *)D_sc05_001_801B5E30 + n) = D_sc05_001_801A82B4[AF(o, s16, 0x70)];
    n = AF(o, s16, 0x70) * 8;
    *(s32 *)((u8 *)D_sc05_001_801B5E34 + n) = 0;
    n = AF(o, s16, 0x70) * 8;
    func_8001C214(AF(o, u8 *, 0x20), (u8 *)D_sc05_001_801B5E30 + n);
    AF(o, s16, 6) = AF(o, s16, 0xA) = AF(o, s16, 0xE) = 0;
    func_80132784(o, AF(o, u8 *, 0x64), AF(o, u16, 0x70));
    AF(o, s16, 6) = AF(AF(o, u8 *, 0x20), s32, 0x48);
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x20), s32, 0x50);
    func_8012AD50(o);
    AF(o, s32, 0x24) = AF(o, s32, 4);
    AF(o, s32, 0x28) = AF(o, s32, 8);
    AF(o, s32, 0x2C) = AF(o, s32, 0xC);
}

void func_sc05_001_80180710(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), s16, 0xFE) != 0) {
        func_sc05_001_8017FA18();
    }
}

void func_sc05_001_80180748(u8 *o) {
    SV8 *t = &D_sc05_001_80189854[AF(o, s16, 0x70)];
    if (AF(o, u16, 0x34) == 0 && AF(o, s16, 0x100) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, s16, 0x102);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += t->pad;
        func_8012AD80(o);
        if (AF(o, s16, 0xA) >= -0xFF) {
            func_8012C218(o);
        }
    }
}

void func_sc05_001_801807E8(void) {
}

void func_sc05_001_801807F0(void) {
}

void func_sc05_001_801807F8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc05_001_801A536C);
    AF(arg0, u16, 0x5C) = 0xC800;
    AF(arg0, s32 *, 0x58) = &D_sc05_001_80189AE8;
    AF(arg0, u8, 0x75) = 8;
    func_8012AD50(arg0);
}

void func_sc05_001_8018086C(void) {
}

void func_sc05_001_80180874(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc05_001_801A6494);
    AF(arg0, s16, 0x5C) = 0x40;
    AF(arg0, s32 *, 0x58) = &D_sc05_001_80189B00;
    temp_v0_2 = func_8012C588(0x1B4, arg0);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, u16, 6) = (u16) (AF(temp_v0_2, u16, 6) + 0x20);
        AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) + 0x180);
        AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) - 0xC0);
        AF(arg0, s32, 0x6C) = temp_v0_2;
        temp_v0_3 = func_80132EF4(temp_v0_2, 0x45);
        if (temp_v0_3 != 0) {
            AF(temp_v0_3, s32, 0x2C) = temp_v0_2;
            AF(temp_v0_3, s16, 0x34) = (s16) (AF(arg0, u16, 0x70) | 2);
        }
    }
    if (func_80029178(D_sc05_001_80189ACC[(s16) AF(arg0, u16, 0x70)]) & 0xFF) {
        func_sc05_001_80180364(arg0);
        return;
    }
    func_8012AD50(arg0);
}

void func_sc05_001_8018098C(s32 arg0) {
    if (D_80126CD4 == arg0) {
        func_sc05_001_8018029C(D_80126CD4);
    }
}

void func_sc05_001_801809B8(s32 arg0, s32 arg1) {
    u16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s32, 0x1C) = 2;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 8);
        D_80126B62 += 8;
        temp_v1 = AF(arg0, void *, 0x6C);
        if (temp_v1 != NULL) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) - 8);
        }
        temp_v1_2 = AF(AF(arg0, void *, 0x64), void *, 0x20);
        AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) - 0x60);
        temp_v0 = AF(AF(arg0, void *, 0x64), void *, 0x6C);
        if (temp_v0 != NULL) {
            temp_v1_3 = AF(temp_v0, void *, 0x20);
            AF(temp_v1_3, u16, 0x14) = (u16) (AF(temp_v1_3, u16, 0x14) - 0x60);
        }
        temp_v0_2 = AF(arg0, u16, 0xFE) - 1;
        AF(arg0, u16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            func_sc05_001_80180304(arg0);
        }
    }
}

void func_sc05_001_80180AA4(void) {
}

s32 func_sc05_001_80180AAC(void) {
    return 0x5F;
}

void func_sc05_001_80180AB4(s32 arg0) {
    func_80029124(0x137, 1);
    func_8012CAE4(arg0);
}

void func_sc05_001_80180AEC(u8 *arg0) {
    D_sc05_001_801A8434[AF(arg0, u16, 2)]();
}

void func_sc05_001_80180B28(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc05_001_80180B70(arg0);
    func_80146CA0(arg0);
}

void func_sc05_001_80180B70(u8 *o) {
    StartRumbleScript(&D_80062BF4);
    func_80149020(o);
    func_80147324(0x451);
    func_801511E0(o);
    if ((s16) func_80012A60(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xF4)) > 0x400) {
        func_80154274(o, &D_800D5880);
    } else {
        func_80154274(o, &D_800D58AC);
    }
    StartFace(o, 0x16);
    func_80149020(o);
    func_80146994(0x42, o, 0, 0);
    func_80146A6C(0x42, o, 0x20, 0, 0, 1, 0);
    func_80146A6C(0x42, o, 0, 0, 0x20, 1, 0);
    func_80146A6C(0x42, o, -0x20, 0, 0, 1, 0);
    func_80146A6C(0x42, o, 0, 0, -0x20, 1, 0);
    func_80146CA0(o);
}

void func_sc05_001_80180CC4(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc05_001_80180D38(arg0);
        func_80159B3C(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            func_801542DC(arg0, (s32) &D_800D46E4, 0xE);
        }
        func_80165718(arg0);
    }
}

s32 func_sc05_001_80180D38(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_001_80180D78(u8 *arg0) {
    D_sc05_001_801A849C[AF(arg0, u16, 2)]();
}

void func_sc05_001_80180DB4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_801465C0();
    if (temp_v0 == 0) {
        func_80146C3C(arg0);
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc05_001_801A8440, 0x270, 0x100);
    AF(temp_v0, u8, 0x27) = 0x9B;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    if (AF(arg0, s32, 0x2C) == 0) {
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x18) = 0x3000;
    }
    AF(temp_v0, u8, 0x25) = 0xC0;
    AF(temp_v0, u8, 0x26) = 0x40;
    AF(temp_v0, u8, 0x24) = 0x40;
    func_80128EA8(temp_v0, arg0 + 0x24, (s32) &D_sc05_001_801A844C);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    func_sc05_001_80180F50(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_001_80180E8C(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    u16 var_v0;
    u8 temp_v0_2;

    temp_s1 = AF(arg0, s32, 0x20);
    if (func_80128ED8(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x14) - 0x8000;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) + 0x500);
    if (AF(arg0, s32, 0x2C) == 0) {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x300;
    } else {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x600;
    }
    AF(temp_s1, u16, 0x1A) = var_v0;
    temp_v0_2 = AF(temp_s1, u8, 0x26) - 4;
    AF(temp_s1, u8, 0x26) = temp_v0_2;
    AF(temp_s1, u8, 0x24) = temp_v0_2;
    AF(temp_s1, u8, 0x25) = (u8) (AF(temp_s1, u8, 0x25) - 8);
}

s32 func_sc05_001_80180F50(s32 arg0) {
    s32 var_v0;

    func_80149374(AF(arg0, s32, 0x34), arg0 + 4);
    var_v0 = AF(arg0, s32, 0x2C);
    if (var_v0 == 0) {
        var_v0 = func_800D1FC8(arg0, 5);
    }
    return var_v0;
}

void func_sc05_001_80180F98(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc05_001_80180FFC((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc05_001_80180FFC(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc05_001_801813FC(a);
    s = func_sc05_001_80181340(a);
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

void func_sc05_001_8018115C(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc05_001_801813FC(r[0] & 0xFFF);
    cx = func_sc05_001_80181340(r[0] & 0xFFF);
    sy = func_sc05_001_801813FC(r[1] & 0xFFF);
    cy = func_sc05_001_80181340(r[1] & 0xFFF);
    sz = func_sc05_001_801813FC(r[2] & 0xFFF);
    cz = func_sc05_001_80181340(r[2] & 0xFFF);
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

s32 func_sc05_001_80181340(u32 a) {
    if (a < 0x400) {
        return D_sc05_001_801A84A4[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc05_001_801A84A4[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc05_001_801A84A4[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc05_001_801A84A4[0xFFF - a];
    }
}

s32 func_sc05_001_801813FC(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc05_001_801A84A4[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc05_001_801A84A4[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc05_001_801A84A4[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc05_001_801A84A4[a - 0xC00];
    }
}

void func_sc05_001_801814A8(u8 *arg0) {
    D_sc05_001_801A8E54[AF(arg0, u16, 2)]();
}

void func_sc05_001_801814E4(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc05_001_801A8E48[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc05_001_80181574((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_001_80181574(u8 *o) {
    u8 *m;
    SV8 v;
    CV4 c;
    u8 t;

    m = AF(o, u8 *, 0x20);
    if (func_8012EF70(o + 0xFC, &v) & ~0x1000) {
        AF(m, u32, 4) |= 0x80000000;
    } else {
        AF(m, u32, 4) &= 0x7FFFFFFF;
    }
    AF(m, s16, 0x2C) = v.z;
    func_80015954(&v, o + 4);
    t = (D_800B99DA & 1) * 4;
    c.r = t + 0x40;
    c.g = t + 0x80;
    c.b = c.r;
    D_sc05_001_801A8CB4 = c;
    D_sc05_001_801A8CD0 = c;
    D_sc05_001_801A8CEC = c;
    D_sc05_001_801A8D08 = c;
    D_sc05_001_801A8D40 = c;
    D_sc05_001_801A8D5C = c;
    D_sc05_001_801A8D78 = c;
    D_sc05_001_801A8D94 = c;
    D_sc05_001_801A8DCC = c;
    D_sc05_001_801A8DE8 = c;
    D_sc05_001_801A8E04 = c;
    D_sc05_001_801A8E20 = c;
}

void func_sc05_001_8018176C(u8 *arg0) {
    void *temp_v0;

    D_sc05_001_801A8F78[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc05_001_80182CE8((s32) arg0);
        }
    }
}

void func_sc05_001_801817F8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_001_801A8E6C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_001_801A8EA0;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc05_001_80181874(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc05_001_801ADB14);
}

void func_sc05_001_801818A4(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc05_001_801AABD0);
            SetScript((s32) arg0, (s32) &D_sc05_001_801ADCFC);
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

void func_sc05_001_80181974(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc05_001_801ADCFC);
    AF(arg0, s32, 0x1C) = (rand() % 17) + 0x28;
    AF(arg0, s16, 0x52) = 0;
}

void func_sc05_001_801819E8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_001_80181A1C(u8 *arg0) {
    s32 unused[4];
    u8 *g = &D_80078E78;
    s32 r;
    s32 y;

    r = rand() % 1024;
    y = AF(AF(arg0, void *, 0x20), s16, 0x12);
    AF(arg0, s32, 0xE0) = (rand() & 1) ? y + r : y - r;
    func_8012B23C(arg0);
    SetScript((s32) arg0, (s32) &D_sc05_001_801ADDEC);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s32, 0xE4) = 0;
    if (AF(g, u8, 0x36) != 0) {
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_001_80181AE0(u8 *arg0) {
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
    func_sc05_001_80182BAC(arg0, 0);
    if (func_sc05_001_801829B0((s32) arg0) != 0 && func_8012BEE8(arg0) != 0) {
        func_sc05_001_80182908(arg0);
    }
}

void func_sc05_001_80181BB8(u8 *arg0) {
    if (func_8012BDBC(arg0, 0x400) == 1) {
        if (func_8012BCCC(arg0) < 0x3001) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 4);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc05_001_80182BAC(arg0, 1);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc05_001_80182BAC(arg0, 0);
    }
    func_sc05_001_801829B0((s32) arg0);
}

void func_sc05_001_80181C98(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc05_001_801ADEAC, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc05_001_80182944((s32) arg0);
}

void func_sc05_001_80181CE0(s32 arg0) {
    s32 f;
    s32 m;

    AF(AF(arg0, s32, 0x20), s16, 0x12) += func_8012B8E4(arg0, 0xA);
    if (AF(arg0, s32, 0xDC) & 0x20) {
        if (AF(arg0, s32, 0x1C) >= 0xA && AF(arg0, s32, 0x1C) < 0x17) {
            func_sc05_001_801827A0(arg0);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == 0x16) {
            func_sc05_001_801826C8(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x10) {
            func_sc05_001_8018280C(arg0);
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
            func_sc05_001_80182944(arg0);
        }
    }
}

void func_sc05_001_80181E08(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc05_001_801ADCFC);
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

void func_sc05_001_80181EC0(u8 *arg0) {
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

void func_sc05_001_80181F50(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc05_001_801826C8((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc05_001_80181F94(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc05_001_8018280C(arg0);
    }
}

void func_sc05_001_80181FCC(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
}

void func_sc05_001_80181FF4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc05_001_80182024(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc05_001_801826C8((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc05_001_8018280C((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

void func_sc05_001_801820B0(u8 *arg0) {
    s16 sp[3];
    u8 *temp_a0;

    temp_a0 = AF(arg0, u8 *, 0x20);
    if (AF(temp_a0, s32, 0x24) == (s32) &D_sc05_001_801AABE0) {
        func_8001C924(temp_a0, &D_sc05_001_801AABD0);
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
        func_sc05_001_801851DC(arg0, sp, 0);
    }
}

void func_sc05_001_80182168(u8 *arg0) {
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
        func_sc05_001_801826C8((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc05_001_8018280C((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

void func_sc05_001_80182258(u8 *arg0) {
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

void func_sc05_001_801822B0(u8 *arg0) {
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

void func_sc05_001_80182354(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc05_001_80182364(u8 *arg0, s32 arg1) {
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

void func_sc05_001_8018244C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc05_001_801AC580);
    SetScript((s32) arg0, (s32) &D_sc05_001_801AE1E4);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc05_001_801824A8(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc05_001_80182CE8((s32) arg0);
    }
}

void func_sc05_001_80182530(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, s32, 0xDC) & 2) {
        AF(arg0, s32, 0x1C) = 0x2D;
        SetScript((s32) arg0, (s32) &D_sc05_001_801AE2C4);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
        AF(arg0, s16, 0x52) = 0;
    } else {
        AF(arg0, s32, 0x1C) = 0x37;
        func_8001C924((s32) AF(arg0, void *, 0x20), (s32) &D_sc05_001_801AC580);
        SetScript((s32) arg0, (s32) &D_sc05_001_801AE1E4);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
    }
    func_8002D4C8(func_8012BCCC((s32) arg0) <= 0x8FFF ? 0x51F : 0x520, 0);
}

void func_sc05_001_80182600(u8 *arg0, s32 arg1) {
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
        func_sc05_001_80182CE8((s32) arg0);
    }
}

void func_sc05_001_801826C8(u8 *o) {
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

s32 func_sc05_001_801827A0(u8 *arg0) {
    if (AF(arg0, s32, 0xDC) & 1) {
        return 0;
    }
    if (func_8012D5E4(arg0, &D_sc05_001_801A8FA8, &D_sc05_001_801A8FA8 + 8, 0x13) == 1) {
        AF(arg0, s32, 0xDC) |= 1;
        return 1;
    }
    return 0;
}

s32 func_sc05_001_8018280C(u8 *arg0) {
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

void func_sc05_001_80182908(u8 *arg0) {
    if (rand() & 1) {
        AF(arg0, s16, 2) = 10;
    } else {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc05_001_80182944(u8 *arg0) {
    if (func_8014CB1C() != 0) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else if (rand() & 1) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else {
        AF(arg0, s32, 0xDC) &= ~0x20;
    }
}

s32 func_sc05_001_801829B0(s32 arg0) {
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
        func_sc05_001_80182CE8(arg0);
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

s32 func_sc05_001_80182BAC(u8 *o, s32 s) {
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

void func_sc05_001_80182CE8(s32 arg0) {
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

void func_sc05_001_80182D7C(u8 *arg0) {
    D_sc05_001_801AE450[AF(arg0, u16, 2)]();
    func_sc05_001_8018466C((s32) arg0);
    if (!(AF(arg0, u16, 0x70) & 1) && (AF(arg0, u16, 0) != 0) && (func_8012C044((s32) arg0) == 1)) {
        func_sc05_001_80184634((s32) arg0);
    }
}

void func_sc05_001_80182E0C(s32 arg0) {
    s32 temp_v0;
    s32 q;
    u16 temp_v1_2;
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc05_001_801AE2E4) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x30);
        AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc05_001_801AE318;
        AF(arg0, s32, 0xE8) = 0x40;
        temp_v0 = func_8012C194();
        if (temp_v0 != 0) {
            AF(arg0, s32, 0xD0) = temp_v0;
            func_8001CD9C(temp_v0, (s32) &D_sc05_001_801AE360);
            AF(temp_v0, s16, 0x18) = 0x555;
            AF(temp_v0, s16, 0x1A) = 0x555;
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        }
        temp_v1_2 = AF(arg0, u16, 0x70);
        if (temp_v1_2 & 2) {
            q = arg0;
            AF(q, s16, 2) = 8;
            AF(q, u8, 0xC0) = 1;
            AF(q, s32 *, 0xBC) = &D_sc05_001_801AE3B0;
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
            AF(arg0, s32 *, 0xBC) = &D_sc05_001_801AE3B0;
            AF(arg0, s32, 0xB4) = -0x249D;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        }
        AF(arg0, s32, 0xCC) = func_80143994(arg0, 0x1000);
    }
}

void func_sc05_001_80182F68(s32 arg0, s32 arg1) {
    func_8012B23C(arg0, arg1);
    func_8012B178(arg0, -0x28000);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
}

void func_sc05_001_80182FB4(u8 *arg0) {
    s32 s;
    s32 v;
    s32 d;
    s32 e;
    s32 r;
    s32 y;
    u8 *p;
    s32 unused[4];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc05_001_80184580(arg0);
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
            func_sc05_001_80184580(arg0);
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

void func_sc05_001_8018330C(u8 *p) {
    s32 d;
    s32 s;

    if (AF(p, s16, 0xA) >= 0x10) {
        func_sc05_001_80184580();
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

void func_sc05_001_80183454(u8 *arg0) {
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

void func_sc05_001_80183508(u8 *arg0) {
    s32 t;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc05_001_80184580(arg0);
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
            func_sc05_001_80184580(arg0);
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

void func_sc05_001_801838A4(u8 *arg0) {
    AF(arg0, s32, 0x48) = 0x4000;
    AF(arg0, s16, 2) = 7;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rand() % 4096;
}

void func_sc05_001_80183908(u8 *arg0) {
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
        func_sc05_001_80184634((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
}

void func_sc05_001_801839D4(u8 *arg0) {
    if (func_8012BE54() <= 0x40000) {
        AF(arg0, s16, 2) = 9;
        func_8012B21C((s32) arg0);
        func_8012E88C((s32) arg0);
        AF(arg0, s32, 0xCC) = func_80143994((s32) arg0, 0x1000);
    }
}

void func_sc05_001_80183A30(u8 *p) {
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

void func_sc05_001_80183BB0(u8 *arg0) {
    u8 *p;
    func_sc05_001_80184430(arg0);
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
        p = &D_sc05_001_801AE488;
        break;
    case 5:
    case 29:
    case 32:
        p = &D_sc05_001_801AE498;
        break;
    case 50:
    default:
    dflt:
        p = &D_sc05_001_801AE478;
        break;
    }
    func_8012B14C(arg0, p);
    SetScript(arg0, &D_sc05_001_801AE350);
    AF(arg0, s16, 0x34) = 0;
    func_sc05_001_8018466C(arg0);
}

void func_sc05_001_80183C9C(u8 *arg0) {
    s32 t;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc05_001_80184580(arg0);
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x100;
        t = func_8012CC64(arg0, &D_sc05_001_801AE3A8);
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
        t = func_8012CC1C(arg0, &D_sc05_001_801AE3A8);
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
        t = func_8012CC64(arg0, &D_sc05_001_801AE3A8);
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
        t = func_8012CC1C(arg0, &D_sc05_001_801AE3A8);
        if ((t & 0xFF) == 0x1A) {
kill:
            func_sc05_001_80184580(arg0);
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
    func_sc05_001_8018466C(arg0);
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc05_001_80183FAC(s32 arg0) {
    func_sc05_001_80184430();
    func_sc05_001_8018466C(arg0);
    SetScript(arg0, (s32) &D_sc05_001_801AE350);
    func_8002D4C8(0xA74, 0);
}

void func_sc05_001_80183FF8(s32 arg0) {
    func_sc05_001_80184430();
    func_sc05_001_8018466C(arg0);
}

void func_sc05_001_80184028(u8 *arg0) {
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    func_sc05_001_80184430();
    if (AF(arg0, u16, 0x5E) == 9 || AF(arg0, u16, 0x5E) == 0x1C) {
        func_8012B14C(arg0, &D_sc05_001_801AE4A8);
    } else {
        func_8012B14C(arg0, &D_sc05_001_801AE4B8);
    }
    SetScript((s32) arg0, (s32) &D_sc05_001_801AE350);
    func_sc05_001_8018466C((s32) arg0);
}

void func_sc05_001_801840AC(u8 *arg0) {
    s32 ret;
    s32 saved;
    u8 unused[8];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc05_001_80184580(arg0);
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
        ret = func_8012CC64(arg0, &D_sc05_001_801AE3A8);
        if (ret & 0x4000) {
            func_8012B23C(arg0);
            AF(arg0, u8, 0xC2) = 4;
            break;
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 0x1A) {
                func_sc05_001_80184580(arg0);
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
        ret = func_8012CC64(arg0, &D_sc05_001_801AE3A8);
        if (ret & 0x4000) {
            func_8012B23C(arg0);
            AF(arg0, u8, 0xC2) = 4;
            break;
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 0x1A) {
                func_sc05_001_80184580(arg0);
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
            ret = func_8012CC1C(arg0, &D_sc05_001_801AE3A8);
            if (!(ret & 0x6000)) {
                func_80131E00(arg0, 0xD);
                return;
            }
        } else {
            ret = func_8012CC64(arg0, &D_sc05_001_801AE3A8);
            if (ret & 0x4000) {
                func_8012B23C(arg0);
                AF(arg0, u8, 0xC2) = 4;
                break;
            }
            if (ret & 0x2000) {
                if ((ret & 0xFF) == 0x1A) {
                    func_sc05_001_80184580(arg0);
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
    func_sc05_001_8018466C(arg0);
}

void func_sc05_001_80184430(u8 *o) {
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

void func_sc05_001_80184494(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc05_001_80185D94);
    func_8012B030((s32) arg0);
}

void func_sc05_001_801844E0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
}

void func_sc05_001_801844F8(s32 arg0) {
    func_8012E8C4();
    if (func_8012BEE8(arg0) != 0) {
        func_sc05_001_80184750(arg0);
        func_8002A04C(arg0);
        func_sc05_001_80184580(arg0);
    }
}

void func_sc05_001_80184548(s32 arg0) {
    func_sc05_001_80184750(arg0);
    func_8002A04C(arg0);
    func_sc05_001_80184580(arg0);
}

void func_sc05_001_80184580(u8 *arg0) {
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
    func_sc05_001_80184634((s32) arg0);
}

s32 func_sc05_001_80184634(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xD0), 0x38);
    return func_8012C098(arg0);
}

void func_sc05_001_8018466C(u8 *arg0) {
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
        FaceHelper(arg0, &D_sc05_001_801AE3A0, &v);
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

void func_sc05_001_80184750(u8 *arg0) {
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

void func_sc05_001_80184848(u8 *arg0) {
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
    q = (Col16 *)(&D_sc05_001_801AE326 - 4);
    i = 0;
    do {
        i++;
        q->a = a;
        q->b = b;
        q->c = c;
        q++;
    } while (i < 3);
    D_sc05_001_801AE360 = a - 50;
    D_sc05_001_801AE361 = b - 50;
    D_sc05_001_801AE362 = c - 50;
    AF(arg0, s32, 0x1C)++;
}

void func_sc05_001_80184920(u8 *arg0) {
    D_sc05_001_801AEAF8[AF(arg0, u16, 2)]();
}

void func_sc05_001_8018495C(u8 *o) {
    AF(o, s32, 0x1C) = rand();
    AF(o, u16, 2)++;
    AF(o, u16, 0xFE) = AF(o, u16, 0xFC) + rand() % 16 + 0x10;
}

void func_sc05_001_801849C4(u8 *o) {
    if (func_8012BE54(o) <= 0x100000) {
        if (AF(o, s32, 0x1C) % AF(o, s16, 0xFC) == 0) {
            func_sc05_001_80184AF8((s32)o);
            func_8012C658(0x183, 1, o);
            AF(o, s16, 0xFE) = AF(o, u16, 0xFC) + rand() % 16 + 0x10;
        }
        if (AF(o, s32, 0x1C) % AF(o, s16, 0xFE) == 0) {
            func_sc05_001_80184AF8((s32)o);
            func_8012C658(0x183, 1, o);
        }
    }
    AF(o, s32, 0x1C)++;
}

void func_sc05_001_80184AF8(s32 arg0) {
    s32 sp10;
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = rand();
    var_a1 = temp_v0;
    if (temp_v0 < 0) {
        var_a1 = temp_v0 + 0xFFF;
    }
    func_8012B0B4((s32) &sp10, temp_v0 - ((var_a1 >> 0xC) << 0xC), 0x30);
    AF(arg0, s16, 6) = (s16) (AF(arg0, u16, 0x88) + sp10);
    AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x8C) + (sp10 >> 0x10));
}

void func_sc05_001_80184B68(u8 *arg0) {
    D_sc05_001_801B267C[AF(arg0, u16, 2)]();
}

void func_sc05_001_80184BA4(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc05_001_801850C4() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc05_001_801B2630, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc05_001_801B263C);
    func_sc05_001_8018511C((s32) arg0);
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

void func_sc05_001_80184CA0(u8 *arg0) {
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
            func_sc05_001_8018511C(arg0);
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
    func_sc05_001_80185198(arg0);
}

void func_sc05_001_80184F30(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc05_001_8018511C(arg0);
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
    func_sc05_001_80185198(arg0);
}

s32 func_sc05_001_801850C4(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc05_001_8018511C(u8 *o) {
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

void func_sc05_001_80185198(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc05_001_801851DC(s32 o, s16 *v, s32 arg2_0) {
    SpawnDef d;
    s16 arg2 = arg2_0;

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

void func_sc05_001_8018523C(u8 *arg0) {
    D_sc05_001_801B29B8[AF(arg0, u16, 2)]();
}

void func_sc05_001_80185278(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc05_001_801B26A8) != 0) {
        if (!(func_80029178(D_sc05_001_801B2710[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc05_001_80185924);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc05_001_80185D94);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_001_8018534C(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_001_80185374(void) {
}

void func_sc05_001_8018537C(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc05_001_801B28F4 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc05_001_801B2858[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc05_001_801B28E0 = 0;
            func_80029124(D_sc05_001_801B2858[AF(temp_s0, u16, 0xC)], 1);
            D_sc05_001_801B28DC = 2;
        } else {
            D_sc05_001_801B28F4 = AF(temp_s0, s32, 0);
            var_v0 = D_sc05_001_801B27D4[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc05_001_801B28DC = 0;
            D_sc05_001_801B28E0 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc05_001_801B2908);
    } else {
        var_a1 = &D_sc05_001_801B2974;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc05_001_801854C8(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc05_001_801B2710[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc05_001_801B2710[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc05_001_801856CC() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc05_001_801855E8(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc05_001_80185614(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_001_80185624(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc05_001_80185634(u8 *arg0) {
    func_80029124(D_sc05_001_801B2710[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc05_001_80185674(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc05_001_801856A8(void) {
    return func_80174764() == 1;
}

s32 func_sc05_001_801856CC(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc05_001_801B2710[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc05_001_80185730(u8 *arg0) {
    D_sc05_001_801B29E0[AF(arg0, u16, 2)]();
}

void func_sc05_001_8018576C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_001_801B26DC) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc05_001_801B30A0);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc05_001_801B2E80);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_001_801857F4(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_001_801B2E90);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_001_801B2F98);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc05_001_801858B4(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc05_001_801B30A0);
        } else {
            SetScript((s32) arg0, (s32) &D_sc05_001_801B2E80);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc05_001_80185924(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc05_001_801B29D0[0], &a, &f);
    RotTransSV(&D_sc05_001_801B29D0[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
