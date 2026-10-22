#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_121_8017BE9C(void) {
}

void func_sc03_121_8017BEA4(void) {
}

void func_sc03_121_8017BEAC(void) {
}

void func_sc03_121_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_121_80185C2C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_121_8017D374(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_121_80185C34[])();
extern void func_800D1EBC();
extern u8 D_sc03_121_80185C40;
extern void func_8016EE40();
extern u8 D_sc03_121_80185C44;
extern void func_sc03_121_8017D460();
extern void (*D_sc03_121_80185C58[])();
extern void (*D_sc03_121_80185E7C[])();
extern void (*D_sc03_121_80185ED0[])();
extern void (*D_sc03_121_8019BC80[])();
extern void (*D_sc03_121_8019BCB4[])();
extern void (*D_sc03_121_8019BD84[])();
extern void (*D_sc03_121_801ABCB8[])();

extern u8 D_sc03_121_80185B70;
extern void (*D_sc03_121_80185B98[])();
extern void func_80019064();
extern u8 D_sc03_121_80185BA4;
extern void (*D_sc03_121_80185BCC[])();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 D_sc03_121_801AEE38;
extern s32 func_8012C588();

extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_80146CA0();
extern void func_sc03_121_8017CE3C();
extern void func_sc03_121_8017D104();
extern void func_80131E00();

extern s32 func_sc03_121_8017D024();
extern void func_8014BC44();
extern s32 func_80151664();
extern void func_8012C218();
extern void func_8012AD80();

extern u8 D_sc03_121_801AB6F4;
extern u8 D_sc03_121_801AAFFC;

extern s32 func_80146E98();
extern void func_80159B3C();
extern void func_8012DB84();
extern u8 D_80078EC0;
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
extern u8 D_sc03_121_8018E84C;
extern void (*D_sc03_121_80185DCC[])();
extern void func_8012B23C();
extern s16 D_80126B96;
extern void (*D_sc03_121_80185E3C[])();
extern s32 func_8012D624();
extern u8 D_sc03_121_801824B0;
extern u8 D_sc03_121_80185E48;
extern s32 func_8012C354();
extern s32 func_8012CBCC();
extern void func_80131C78();
extern u8 D_sc03_121_80185CB4;
extern u8 D_sc03_121_8018DF04;
extern void func_80131B14();
extern void func_8012B14C();
extern u8 D_sc03_121_80185CDC;
extern u8 D_sc03_121_80185D10;
extern u8 D_sc03_121_8018D8AC;
extern s32 D_sc03_121_801AECD4;
extern void func_80143970();
extern u8 D_sc03_121_8018E8EC;
extern u8 D_sc03_121_8018E3F4;
extern s32 func_80143C74();
extern u8 D_sc03_121_80185BDC;
extern void func_80029514();
extern void func_800D1724();
extern void func_8002AC00();
extern s32 D_801151FC;
extern s32 D_80127078;
extern u8 D_sc03_121_8019B8F4;
extern u8 D_sc03_121_801A007C;
extern s32 D_sc03_121_801AECEC;
extern s32 D_sc03_121_801AECF0;
extern s32 func_8012C658();
extern u8 D_sc03_121_8019B9B0;
extern void func_80178B18();
extern void func_sc03_121_801813E8();

extern u8 D_sc03_121_80185C5C;
extern void func_sc03_121_8017D4C4();

extern u8 D_sc03_121_80185B78;
extern void func_80147324();
extern void func_801511E0();
extern void func_80154274();
extern void func_80149020();
extern void func_8017261C();
extern u8 D_sc03_121_80185BAC;
extern void func_801472C8();
extern void func_80146E90();

extern u8 D_sc03_121_801828E0;
extern void func_8013C9C4();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

void func_sc03_121_8017BEBC(u8 *obj) {
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

void func_sc03_121_8017CD9C(u8 *arg0) {
    func_80019064((s32) &D_sc03_121_80185B70);
    D_sc03_121_80185B98[AF(arg0, u16, 2)](arg0);
}

void func_sc03_121_8017CDF4(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc03_121_8017CE3C(arg0);
    func_80146CA0(arg0);
}

void func_sc03_121_8017CE3C(s32 arg0) {
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc03_121_80185B78);
    func_80149020(arg0);
    AF(arg0, u8, 0xDE) = 0xF0;
    AF(arg0, u8, 0xDF) = 0;
    func_8017261C(arg0);
    func_80146CA0(arg0);
}

extern s32 func_8012CEB0();
extern s32 func_8012CC64();
extern void func_80143B6C();
extern void func_8012DBD0();
extern s32 func_8012CBF4();
extern s32 D_sc03_121_801AECD0;
extern u8 D_80078E78;
extern u8 D_80126B58;
extern u8 D_sc03_121_8019BBD0;
extern s32 func_801726AC();
extern void func_800291A0();
extern s32 func_80178970();
extern void func_80178D18();
extern u8 *D_sc03_121_801AECD8[];
extern u8 D_sc03_121_8019BBF8;
extern void func_8001AAA0();

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017CEA4);

s32 func_sc03_121_8017D024(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc03_121_8017D064(u8 *arg0) {
    func_80019064((s32) &D_sc03_121_80185BA4);
    D_sc03_121_80185BCC[AF(arg0, u16, 2)](arg0);
}

void func_sc03_121_8017D0BC(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc03_121_8017D104(arg0);
    func_80146CA0(arg0);
}

void func_sc03_121_8017D104(s32 arg0) {
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc03_121_80185BAC);
    func_80149020(arg0);
    func_801472C8(arg0);
    func_80146E90(arg0, 0x5A);
    func_80146CA0(arg0);
}

void func_sc03_121_8017D16C(s32 arg0) {
    if (func_80146E98() != 0) {
        func_80159B3C(arg0);
        func_8012DB84();
        func_80146CA0(arg0);
    }
}

void func_sc03_121_8017D1B4(void) {
}

void func_sc03_121_8017D1BC(void) {
    D_80078EC0 &= 0x7F;
}

void func_sc03_121_8017D1DC(u8 *arg0) {
    D_sc03_121_80185C2C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_121_8017D218(u8 *arg0) {
    func_sc03_121_8017D374();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_121_8017D25C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_121_8017D280(u8 *arg0) {
    D_sc03_121_80185C34[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_121_8017D2BC(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_121_8017D2D8(u8 *arg0) {
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

void func_sc03_121_8017D354(void) {
    func_800D1EBC();
}

void func_sc03_121_8017D374(void) {
    func_8016EE40((s32) &D_sc03_121_80185C40, 0x01000000);
}

void func_sc03_121_8017D39C(void) {
    func_8016EE40((s32) &D_sc03_121_80185C44, 0x01000000);
}

void func_sc03_121_8017D3C4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x1C7;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_121_8017D460, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_121_8017D460((s32) &D_80126948);
}

void func_sc03_121_8017D460(s32 arg0) {
    D_sc03_121_80185C58[AF(arg0, u8, 4)]();
}

void func_sc03_121_8017D49C(s32 arg0) {
    s32 pad[2];
    func_sc03_121_8017D4C4(arg0, (s32) &D_sc03_121_80185C5C);
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017D4C4);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017D65C);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017D788);

void func_sc03_121_8017D8D4(u8 *arg0) {
    SV8 ofs;
    SV8 p;
    SV8 q;
    SV8 r;

    if (AF(arg0, s32, 8) > 0) {
        AF(arg0, s16, 6) = -0x103;
        AF(arg0, s16, 0xA) = -0x182;
        AF(arg0, s16, 0xE) = 0xE8;
        AF(arg0, s16, 2) = 6;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x10A) = 0;
        func_8012B23C(arg0);
    }
    ofs.x = 0;
    ofs.y = 0x30;
    ofs.z = 0;
    func_8012DBD0(arg0, 0xA, AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        AF(arg0, u8, 0xC2) = 1;
        p.x = AF(arg0, s16, 0x3A);
        p.y = AF(arg0, s16, 0x3E);
        p.z = AF(arg0, s16, 0x42);
        q = p;
        q.x += ofs.x;
        q.y += ofs.y;
        q.z += ofs.z;
        func_8012CEB0(&p, &q, 1);
        q.x -= ofs.x;
        q.y -= ofs.y;
        q.z -= ofs.z;
        AF(arg0, s16, 0x3A) = q.x;
        AF(arg0, s16, 0x3E) = q.y;
        AF(arg0, s16, 0x42) = q.z;
        AF(arg0, s16, 6) = q.x;
        AF(arg0, s16, 0xA) = q.y;
        AF(arg0, s16, 0xE) = q.z;
    case 1:
        D_sc03_121_801AECD0 = func_8012CC64(arg0, &ofs);
        if (D_sc03_121_801AECD0 & 0x2000) {
            AF(arg0, u8, 0xC2) = 2;
            func_80143B6C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF30000;
        }
        if (D_sc03_121_801AECD0 & 0x8000) {
            AF(arg0, u8, 0xC2) = 3;
            SetScript(arg0, &D_sc03_121_8018D8AC);
        }
        break;
    case 2:
        D_sc03_121_801AECD0 = func_8012CC64(arg0, &ofs);
        if (D_sc03_121_801AECD0 & 0x2000) {
            func_80143B6C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF60000;
            AF(arg0, u8, 0xC2) = 3;
        }
        if (D_sc03_121_801AECD0 & 0x8000) {
            AF(arg0, u8, 0xC2) = 3;
            SetScript(arg0, &D_sc03_121_8018D8AC);
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        D_sc03_121_801AECD0 = func_8012CBF4(arg0);
        if (D_sc03_121_801AECD0 & 0x2000) {
            AF(arg0, u8, 0xC2) = 4;
            AF(arg0, s32, 0x14) = 0;
            AF(arg0, s32, 0x1C) = 0;
            func_80143B6C(arg0, 1);
        }
        break;
    case 4:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        func_8012CBF4(arg0);
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            func_80143B6C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) >= 0x11) {
            func_80131C78(arg0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017DC24);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017DDB4);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017DF2C);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017E1D0);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017E710);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017E880);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017EFFC);

void func_sc03_121_8017F174(u8 *arg0) {
    if (AF(arg0, s16, 0x10A) == 5) {
        AF(arg0, u16, 2) = 8U;
        AF(arg0, s16, 0x10A) = 0;
        SetScript((s32) arg0, (s32) &D_sc03_121_8018E84C);
        func_8012B23C((s32) arg0);
    }
    D_sc03_121_80185DCC[AF(arg0, u16, 2)](arg0);
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, s16, 0xA) > 0)) {
        AF(arg0, s16, 6) = -0x103;
        AF(arg0, s16, 0xA) = -0x182;
        AF(arg0, s16, 0xE) = 0xE8;
        AF(arg0, u16, 2) = 6U;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x10A) = 0;
        func_8012B23C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017F234);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017F374);

void func_sc03_121_8017F4C8(u8 *arg0) {
    D_sc03_121_80185E3C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0xA) == 1) {
            D_80126B96 = 0xE;
            func_8012C218((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc03_121_8017F578(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_121_80185E48) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc03_121_801824B0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = (s16) ((rand() & 0x3FF) + 0x400);
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rand() & 0x3FF) + 0x400);
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = (s16) ((rand() & 0x3FF) + 0x400);
        func_8012B23C(arg0);
        AF(arg0, s16, 0xFC) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x100) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x12) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x16) = (s16) -(rand() & 0x1F);
        AF(arg0, s16, 0x1A) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x50);
    }
}

void func_sc03_121_8017F69C(u8 *arg0) {
    D_sc03_121_80185E7C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017F6D8);

void func_sc03_121_8017F840(u8 *arg0) {
    D_sc03_121_80185ED0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017F87C);

void func_sc03_121_8017F91C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u16, 0x5C) = 0xAA00;
    AF(arg0, s16, 6) = -0x103;
    AF(arg0, s16, 0xA) = -0x182;
    AF(arg0, s16, 0xE) = 0xE8;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x10A) = 0;
    func_8012B23C((s32) arg0);
}

void func_sc03_121_8017F978(s32 arg0) {
    func_80131E00(arg0, 0x11);
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017F998);

void func_sc03_121_8017FA64(s32 arg0) {
    func_80131E00(arg0, 1);
}

void func_sc03_121_8017FA84(s32 arg0) {
    func_8012CBCC(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_80131C78(arg0);
    }
}

void func_sc03_121_8017FAC8(s32 arg0) {
    func_80131B14(arg0);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    SetScript(arg0, (s32) &D_sc03_121_8018DF04);
    func_8012B14C(arg0, (s32) &D_sc03_121_80185CB4);
    func_8002D4C8(0x714, 0);
}

void func_sc03_121_8017FB28(s32 arg0) {
    D_sc03_121_801AECD4 = 0;
    if (func_8012C354(arg0, (s32) &D_sc03_121_80185CDC) != 0) {
        AF(arg0, s16, 0x76) = 0x3E8;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 0x40003;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        func_80143970(arg0);
        SetScript(arg0, (s32) &D_sc03_121_8018D8AC);
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s32, 0x1C) = (s32) (rand() & 7);
        func_8012B23C(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc03_121_80185D10;
        AF(arg0, s16, 0xFC) = (s16) (rand() & 0x3FFF);
    }
}

void func_sc03_121_8017FBD8(u8 *arg0) {
    if (AF(arg0, s32, 0x94) == 0x12) {
        func_8012C588(0x203, (s32) arg0);
        func_8002D4C8(0x7BF, 0);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_121_8018D8AC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x10A) = 0;
    }
}

void func_sc03_121_8017FC50(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_121_8018E8EC);
        AF(arg0, s16, 2) = 9;
        AF(arg0, s32, 0x1C) = 0;
        func_8002D4C8(0x776, 0);
    }
    func_8012CBCC((s32) arg0);
}

void func_sc03_121_8017FCB8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_121_8018E3F4);
    AF(arg0, s32, 0x94) = 0x2C;
}

void func_sc03_121_8017FD14(s32 arg0) {
    s32 temp_v1;

    if (func_8012CBCC(arg0) != 0) {
        func_8002D4C8(0x709, 0);
        temp_v1 = D_sc03_121_801AECD4 + 1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        D_sc03_121_801AECD4 = temp_v1;
        if (temp_v1 == 3) {
            func_8013C9C4((s32) &D_sc03_121_801828E0);
        }
    }
}

void func_sc03_121_8017FD88(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_121_8018D8AC);
    }
}

void func_sc03_121_8017FDC4(u8 *arg0) {
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_v0;

    temp_v1 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v1 < 0x10) {
        if (temp_v1 == 0) {
            func_8012C218((s32) arg0);
        } else {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
        }
    }
    temp_v0_2 = func_80143C74((s32) arg0, 0);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s16, 0x16) = -8;
        AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 7) - 4);
        AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 7) - 4);
    }
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017FE6C);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_8017FF8C);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80180038);

void func_sc03_121_801800A8(void) {
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_801800B0);

void func_sc03_121_801801DC(s32 arg0) {
    SetScript(arg0, (s32) &D_sc03_121_801AB6F4);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_121_80180214(s32 arg0) {
    SetScript(arg0, (s32) &D_sc03_121_801AAFFC);
    AF(arg0, s16, 2) = 2;
}

s32 func_sc03_121_8018024C(void) {
    return 0x40;
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80180254);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80180568);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80180850);

void func_sc03_121_80180B1C(u8 *arg0) {
    s32 i;
    s32 j;
    s32 k;
    s16 n;
    s16 m;
    s32 t;
    u8 *p;
    u16 v;
    u8 *g = &D_80078E78;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (!(rand() & 0x7F)) {
            i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
            if (AF(p, u16, 2) == 1) {
                AF(p, s16, 0x10A) = 4;
            }
        }
        if (AF(arg0, s32, 0x1C) != 0) {
            AF(arg0, s32, 0x1C)--;
        } else {
            n = 0;
            for (j = 0; j < 5; j++) {
                p = D_sc03_121_801AECD8[j];
                if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                    n++;
                }
            }
            if (n < 2) {
                i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
                v = AF(p, u16, 2);
                if (v == 1) {
                    AF(p, s16, 0x10A) = 1;
                    t = 0x168 - AF(g, s16, 0x1A);
                    AF(arg0, s32, 0x1C) = t;
                    if (t <= 0) {
                        AF(arg0, s32, 0x1C) = v;
                    }
                }
            }
        }
        if (AF(g, s16, 0x1A) >= 0x168) {
            if (func_801726AC(&D_80126B58) == 0) {
                AF(arg0, u16, 0x34)++;
                for (i = 0; i < 5; i++) {
                    AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 2;
                }
            }
        }
        break;
    case 1:
        m = 0;
        for (k = 0; k < 5; k++) {
            p = D_sc03_121_801AECD8[k];
            if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                m++;
            }
        }
        if (m == 0) {
            AF(arg0, u16, 0x34)++;
            func_80178B18(arg0, &D_sc03_121_8019BBD0);
        } else if (AF(g, s16, 0x1A) >= 0x186) {
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
            func_800291A0(0xDD, 4);
            AF(D_sc03_121_801AECF0, s16, 2) = 5;
        }
        break;
    case 2:
        if (func_80178970(arg0) != 0) {
            func_80178D18(arg0);
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
            func_800291A0(0xDD, 4);
            AF(D_sc03_121_801AECF0, s16, 2) = 5;
        }
        break;
    }
    if (D_801151FC != 0) {
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 3;
        }
    }
}

void func_sc03_121_80180E64(u8 *arg0) {
    u8 *g = &D_80078E78;
    u8 *p;
    s16 count;
    s32 i;
    s32 j;
    s16 found;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (!(rand() & 0x3F)) {
            i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
            if (AF(p, u16, 2) == 1) {
                AF(p, s16, 0x10A) = 4;
            }
        }
        if (AF(arg0, s32, 0x1C) != 0) {
            AF(arg0, s32, 0x1C)--;
        } else {
            count = 0;
            for (j = 0; j < 5; j++) {
                p = D_sc03_121_801AECD8[j];
                if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                    count++;
                }
            }
            if (count < 3) {
                i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
                if (AF(p, u16, 2) == 1) {
                    AF(p, s16, 0x10A) = 1;
                    t = 0x1A4 - AF(g, s16, 0x1A);
                    AF(arg0, s32, 0x1C) = t;
                    if (t <= 0) {
                        AF(arg0, s32, 0x1C) = 1;
                    }
                }
            }
        }
        if (AF(g, s16, 0x1A) >= 0x1A3) {
            func_800D0C48(1);
        }
        if (AF(g, s16, 0x1A) >= 0x1A4 && func_801726AC(&D_80126B58) == 0) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        found = 0;
        for (i = 0; i < 5; i++) {
            if (AF(D_sc03_121_801AECD8[i], u16, 2) == 5) {
                found = 1;
            }
        }
        if (D_801151FC == 0 && found != 1) {
            func_80178B18(arg0, &D_sc03_121_8019BBF8);
            for (i = 0; i < 5; i++) {
                AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 5;
                AF(D_sc03_121_801AECD8[i], s16, 0x5C) = 0;
                AF(D_sc03_121_801AECD8[i], u8, 0xC1) = 0;
            }
            AF(arg0, u16, 0x34)++;
            AF(D_sc03_121_801AECF0, s16, 2) = 6;
            AF(arg0, s16, 0x100) = 1;
            func_8001AAA0(0x42);
        }
        break;
    case 2:
        D_801151FC = 0;
        if (func_80178970(arg0) != 0) {
            func_80178D18(arg0);
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
        }
        break;
    }
    if (D_801151FC != 0) {
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 3;
        }
    }
}

void func_sc03_121_801811DC(u8 *arg0) {
    D_sc03_121_8019BC80[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80181218);

void func_sc03_121_801813AC(u8 *arg0) {
    D_sc03_121_8019BCB4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_801813E8);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_801816C0);

void func_sc03_121_80181868(u8 *arg0) {
    D_sc03_121_8019BD84[AF(arg0, u16, 2)]();
}

void func_sc03_121_801818A4(void) {
    func_80029514(0x1A4);
    func_800D1724((s32) &D_sc03_121_80185BDC);
    func_8002AC00(0xE);
    func_8002AC00(0x11);
}

void func_sc03_121_801818E4(void) {
    func_8002D4C8(0x79E, 0);
}

void func_sc03_121_80181908(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_121_8019B8F4) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        func_80143970(arg0);
        SetScript(arg0, (s32) &D_sc03_121_801A007C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        D_sc03_121_801AECEC = func_8012C658(0x1F7, 0, arg0);
        D_sc03_121_801AECF0 = func_8012C658(0x1F7, 1, arg0);
        D_80127078 = 0;
        D_801151FC = 0;
    }
}

void func_sc03_121_801819B8(u8 *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) + 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    AF(arg0, s16, 0xE) = (s16) (((s32) ((s16) temp_v0 * -0x47) >> 5) + 0x176);
    AF(arg0, u16, 0xA) = (u16) (((s32) -((s16) AF(arg0, u16, 0xFC) * 0x6D) >> 5) - 0x9E);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - (rsin((s16) AF(arg0, u16, 0xFC) << 6, arg1) >> 5));
    if ((s16) AF(arg0, u16, 0xFC) == 0x20) {
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    if ((s16) AF(arg0, u16, 0xFC) == 0xF) {
        func_80178B18((s32) arg0, (s32) &D_sc03_121_8019B9B0);
    }
}

void func_sc03_121_80181A98(void) {
}

void func_sc03_121_80181AA0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        func_8012AD80((s32) arg0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x100);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) - 0x100);
        return;
    }
    func_8012C218((s32) arg0, arg1);
}

void func_sc03_121_80181B34(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_a1;

    temp_a1 = AF(arg0, u16, 0x34);
    temp_v1 = temp_a1 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(AF(arg0, void *, 0x64), s16, 0x100) != 0) {
            AF(arg0, u16, 0x34) = (u16) (temp_a1 + 1);
            AF(arg0, s16, 0x98) = 1;
            return;
        }
        return;
    case 1:
        temp_v0 = AF(arg0, s32, 0x1C) + 2;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 >= 0x7F) {
            AF(arg0, s32, 0x1C) = 0x7F;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        /* fallthrough */
    case 2:
        func_sc03_121_801813E8();
        break;
    }
}

s32 func_sc03_121_80181BE8(s32 arg0, s32 arg1, s32 arg2) {
    D_sc03_121_801AEE38 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80181C18);

INCLUDE_ASM("asm/stg/sc03_121/nonmatchings/sc03_121", func_sc03_121_80181E5C);

void func_sc03_121_801820FC(u8 *arg0) {
    D_sc03_121_801ABCB8[AF(arg0, u16, 2)]();
}
