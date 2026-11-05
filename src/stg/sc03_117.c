#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_117_8017BE9C(void) {
}

void func_sc03_117_8017BEA4(void) {
}

void func_sc03_117_8017BEAC(void) {
}

void func_sc03_117_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc03_117_80188358[])();
extern u8 D_sc03_117_801882A8;
extern void func_80154274();
extern void func_80171990();
extern void func_80147324();
extern void func_801466F0();
extern s32 func_8014C088();
extern void func_8014B5C4();
extern s32 func_8014CB58();
extern u8 D_sc03_117_80188350;
extern void func_8016EE40();
extern s32 D_80126D54;
extern s16 D_80126B0C;
extern void (*D_sc03_117_801883A0[])();
extern void func_80162D28();
extern s16 D_sc03_117_80188398;
extern s16 D_sc03_117_8018839A;
extern s16 D_sc03_117_8018839C;
extern u8 D_sc03_117_801CA794;
extern s32 func_8014659C();
extern void func_8001C214();
extern void func_80149374();
extern void func_80146DE8();
extern void func_80146CA0();
extern u8 D_sc03_117_80188368;
extern u8 D_sc03_117_801883B0;
extern u8 D_sc03_117_801CADEC;
extern void func_8016325C();
extern void func_80162FC0();
extern void func_8013C9C4();
extern void func_8001C810();
extern void func_801466B4();
extern void func_80162CCC();
extern void (*D_sc03_117_801883E4[])();
extern void func_sc03_117_8017D598();
extern u8 D_800DF2E0;
extern u8 D_sc03_117_801883C4;
extern void func_80146E90();
extern s32 func_80146E98();
extern void (*D_sc03_117_801883FC[])();
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc03_117_8018841C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_117_80188404;
extern void (*D_sc03_117_80188424[])();
extern u8 D_sc03_117_80188410;
extern void (*D_sc03_117_8018847C[])();
void func_sc03_117_8017DFC0(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_117_80188484[])();
void func_sc03_117_8017E0A0(void);
void func_sc03_117_8017E0C8(void);
extern void func_800D1EBC();
extern void (*D_sc03_117_80188498[])();
extern void (*D_sc03_117_801884A4[])();
void func_sc03_117_8017E0F0(void);
extern u8 D_sc03_117_801884B0;
extern void (*D_sc03_117_801884C4[])();
extern u8 D_sc03_117_801884BC;
extern u8 D_sc03_117_801884CC;
extern u8 D_sc03_117_801884E0;
extern void func_sc03_117_8017E1DC();
extern void (*D_sc03_117_801884EC[])();
extern void (*D_sc03_117_80188788[])();
extern void (*D_sc03_117_80188794[])();
extern void (*D_sc03_117_8018879C[])();
extern void (*D_sc03_117_801887D4[])();
extern void (*D_sc03_117_801887DC[])();
extern void (*D_sc03_117_801887E8[])();
extern void (*D_sc03_117_80188808[])();
extern void (*D_sc03_117_80188810[])();
extern void (*D_sc03_117_80188818[])();
extern void (*D_sc03_117_80188B40[])();
extern void (*D_sc03_117_80188B5C[])();
extern void (*D_sc03_117_801C3740[])();
extern void (*D_sc03_117_801CB124[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_117_80184BE8;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc03_117_801CAE14;
extern s32 * func_sc03_117_80184778();
extern s32 D_sc03_117_801CAE7C[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_117_801CB048;
extern s32 D_sc03_117_801CB04C;
extern s32 D_sc03_117_801CB060;
extern s32 D_sc03_117_801CB074;
extern s32 D_sc03_117_801CB0E0;
extern s32 D_sc03_117_801CAFC4[];
extern s32 D_sc03_117_801CAF40[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_117_80184520();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_117_801CB14C[])();
extern u8 D_sc03_117_801CAE48;
extern u8 D_sc03_117_801CB5EC;
extern u8 D_sc03_117_801CB80C;
extern void func_8002D4C8();
extern u8 D_sc03_117_801CB5FC;
extern u8 D_sc03_117_801CB704;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();

extern void func_8012BF4C();
extern void func_8012AD50();
extern void (*D_sc03_117_801C0F9C[])();
extern void func_sc03_117_801819C4();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_117_801C348C;
extern u8 D_sc03_117_801C0FBC;
extern s32 func_8012D5E4();
extern s32 func_sc03_117_801819AC();
extern u8 D_80078EC1;
extern s32 func_8012BD14();
extern void (*D_sc03_117_801C36F0[])();
extern void func_8012B260();
extern void func_sc03_117_8018333C();
extern void func_8001CD50();
extern u8 D_sc03_117_801CE698;
extern s32 func_8012913C();
extern void func_8012E688();
extern s32 func_8012BCCC();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_117_8018321C();
extern u8 D_sc03_117_801C36B0;
extern u8 D_sc03_117_801C36B8;
extern s32 func_8012CBF4();
extern s32 func_8012BE54();
extern void func_sc03_117_80182F28();
extern u8 D_sc03_117_801CE6D8;
extern void func_800233CC();
extern void func_801292C8();

extern void func_80128ED8();

extern void func_80171A80();
extern s32 func_80172658();
extern s32 func_80171A88();
extern void func_80171928();
extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern u16 D_80126962;
extern s16 D_80126968;
extern u16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();
extern u8 D_sc03_117_8018868C;
extern void func_sc03_117_8017EBCC();
extern void func_80178B18();
extern void (*D_sc03_117_801886FC[])();
extern void func_sc03_117_8017EE78();
extern void func_800D0CE0();
extern void func_8012B200();
extern s32 D_sc03_117_8018875C[];
extern s32 func_8012C1B8();
extern void func_80132784();
extern s32 func_sc03_117_8017EF54();
extern void func_8012AD80();
extern u8 D_sc03_117_801CE458;
extern s32 func_sc03_117_801809C8();
extern u8 D_sc03_117_801C4F44;
extern u8 D_sc03_117_80188B20[];
extern s32 func_800183E0();
extern u8 D_sc03_117_80188B4C;
extern s32 func_8013373C();

extern s32 D_sc03_117_801CE8BC;

extern u8 D_sc03_117_8018870C;
extern u16 D_sc03_117_80188756[];
extern s16 D_sc03_117_80188744[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_117_8017BEBC(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02[0]];
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

void func_sc03_117_8017CD9C(u8 *arg0) {
    D_sc03_117_80188358[AF(arg0, u8, 0x216)]();
}

void func_sc03_117_8017CDD8(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc03_117_801882A8);
    func_80171990(arg0);
}

void func_sc03_117_8017CE18(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x20000);
        func_801466F0(0x16, (s32) arg0, 0, -0x80, /* extra? */ -0x10, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        func_80147324(0x7BC);
        func_80171990((s32) arg0);
    }
}

void func_sc03_117_8017CE94(s32 arg0) {
    if (func_8014C088(arg0, 0x16) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & 0xFFFDFFFF);
        func_8014B5C4(arg0, func_8014CB58() & 0xFF, 0x80);
        func_80171990(arg0);
    }
}

void func_sc03_117_8017CEF4(void) {
}

void func_sc03_117_8017CEFC(void) {
    func_8016EE40((s32) &D_sc03_117_80188350, 0x01000000);
}

s32 func_sc03_117_8017CF24(void) {
    return D_80126D54 == (s32) &D_sc03_117_80188350;
}

s16 func_sc03_117_8017CF40(void) {
    return D_80126B0C;
}

void func_sc03_117_8017CF50(u8 *arg0) {
    D_sc03_117_801883A0[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0x20) != 0) {
        func_80162D28((s32) arg0);
    }
}

void func_sc03_117_8017CFB0(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc03_117_801CA794);
        AF(temp_v0, s16, 0x10) = 0x800;
        AF(arg0, s16, 0x60) = 0;
        func_80149374(temp_s2, (s32) (arg0 + 4));
        func_80146DE8((s32) arg0, 0, -0x400000, 0);
        D_sc03_117_8018839C = 0x80;
        D_sc03_117_8018839A = 0x80;
        D_sc03_117_80188398 = 0x80;
        func_80146CA0((s32) arg0);
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        }
    }
}

void func_sc03_117_8017D07C(u8 *arg0) {
    s16 temp_v0;
    s32 var_a0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_s0 = AF(arg0, void *, 0x20);
    func_8016325C((s32) arg0, 0, 0x20000, 0);
    func_80162FC0((s32) arg0);
    if ((AF(arg0, s16, 0x60) == 0) && (AF(arg0, s32, 0x28) > 0)) {
        AF(temp_s0, s16, 0x10) = 0;
        AF(arg0, s16, 0x60) = (s16) ((u16) AF(arg0, s16, 0x60) + 1);
    }
    temp_v0 = AF(temp_s2, s16, 0xA);
    if (temp_v0 < AF(arg0, s16, 0xA)) {
        AF(arg0, s16, 0xA) = temp_v0;
        func_8013C9C4((s32) &D_sc03_117_801883B0);
        AF(arg0, s16, 0x60) = (s16) AF(temp_s0, u16, 0x18);
        func_8001C810((s32) temp_s0, (s32) &D_sc03_117_801CADEC);
        AF(temp_s0, s32 *, 0x80) = &D_sc03_117_80188368;
        AF(temp_s0, u16, 0x2C) = (u16) (AF(temp_s0, u16, 0x2C) | 0xA0);
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
        temp_v0_2 = (u16) AF(arg0, s16, 0x60);
        AF(temp_s0, u16, 0x1C) = temp_v0_2;
        AF(temp_s0, u16, 0x1A) = temp_v0_2;
        AF(temp_s0, u16, 0x18) = temp_v0_2;
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_s0, u16, 0x2C) = (u16) (AF(temp_s0, u16, 0x2C) | 0x10);
            func_801466B4(0x1B, (s32) arg0, 0, 0, /* extra? */ 1);
            func_801466B4(0x1B, (s32) arg0, 1, 0, /* extra? */ 1);
            func_801466B4(0x1B, (s32) arg0, 2, 0, /* extra? */ 1);
            func_801466B4(0x1B, (s32) arg0, 3, 0, /* extra? */ 1);
            var_a0 = 0x81D;
        } else {
            var_a0 = 0xC5E;
        }
        func_80147324(var_a0);
        func_80146CA0((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0x60) != 0) {
        temp_v0_3 = AF(temp_s0, u16, 0x1C) + 0x100;
        AF(temp_s0, u16, 0x1C) = temp_v0_3;
        AF(temp_s0, u16, 0x1A) = temp_v0_3;
        AF(temp_s0, u16, 0x18) = temp_v0_3;
    }
}

void func_sc03_117_8017D248(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc03_117_8018839C + 8;
    D_sc03_117_8018839C = (u16) temp_v0;
    D_sc03_117_8018839A = temp_v0;
    D_sc03_117_80188398 = temp_v0;
    if (temp_v0 >= 0x101) {
        func_80146CA0(arg0);
    }
}

void func_sc03_117_8017D2A4(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc03_117_8018839C - 8;
    D_sc03_117_8018839C = (u16) temp_v0;
    D_sc03_117_8018839A = temp_v0;
    D_sc03_117_80188398 = temp_v0;
    if (temp_v0 < -0x80) {
        func_80162CCC(arg0);
    }
}

void func_sc03_117_8017D300(u8 *arg0) {
    func_sc03_117_8017D598();
    D_sc03_117_801883E4[AF(arg0, u16, 2)](arg0);
    if (AF(arg0, s32, 0x20) != 0) {
        func_80162D28((s32) arg0);
    }
}

void func_sc03_117_8017D364(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, (s32) &D_800DF2E0);
        AF(temp_v0, s32 *, 0x80) = &D_sc03_117_80188368;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0xB0);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s32, 0x50) * 8) + &D_sc03_117_801883C4);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        func_80146CA0((s32) arg0);
        return;
    }
    func_80162CCC((s32) arg0);
}

void func_sc03_117_8017D414(u8 *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, u16, 0x1C) + 0x800;
    AF(temp_a1, u16, 0x1C) = temp_v0;
    AF(temp_a1, u16, 0x18) = temp_v0;
    temp_v1 = AF(AF(arg0, void *, 0x58), s16, 0);
    if (temp_v1 < (s16) temp_v0) {
        AF(temp_a1, u16, 0x1C) = (u16) temp_v1;
        AF(temp_a1, u16, 0x18) = (u16) temp_v1;
        D_80126B0C = 1;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x800;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    temp_v1_2 = AF(AF(arg0, void *, 0x58), s16, 2);
    if (temp_v1_2 < (s16) temp_v0_2) {
        AF(temp_a1, u16, 0x1A) = (u16) temp_v1_2;
        func_80146E90((s32) arg0, (s32) AF(AF(arg0, void *, 0x58), s16, 4));
        func_80146CA0((s32) arg0);
    }
}

void func_sc03_117_8017D4D8(u8 *arg0) {
    s16 temp_v0;
    u16 *temp_s2;
    u16 temp_v0_2;
    void *temp_s0;

    temp_s2 = AF(arg0, u16 *, 0x4C);
    temp_s0 = AF(arg0, void *, 0x20);
    if (func_80146E98() != 0) {
        temp_v0 = AF(temp_s0, u16, 0x1C) + 0x400;
        AF(temp_s0, u16, 0x1C) = (u16) temp_v0;
        AF(temp_s0, s16, 0x18) = temp_v0;
        if (temp_v0 >= 0x7001) {
            AF(temp_s0, u16, 0x1C) = 0x7000U;
            AF(temp_s0, s16, 0x18) = 0x7000;
        }
        temp_v0_2 = AF(temp_s0, u16, 0x1A) + 0x100;
        AF(temp_s0, u16, 0x1A) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x7001) {
            AF(temp_s0, u16, 0x1A) = 0x7000U;
        }
    }
    if (*temp_s2 != 0x16) {
        func_80162CCC((s32) arg0);
    }
}

void func_sc03_117_8017D598(u8 *arg0) {
    u8 *s = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);

    AF(arg0, s32, 4) = AF(s, s32, 4);
    AF(arg0, s32, 8) = AF(s, s32, 8);
    AF(arg0, s32, 0xC) = AF(s, s32, 0xC);
    AF(m, u16, 0x12) += AF(AF(arg0, u8 *, 0x58), u16, 6);
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
extern u8 D_sc03_117_801883F0;
extern u8 *func_800D21C4();

typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 func_8012BEE8();
extern void func_8012B178();
extern s32 func_8012B608();
extern s32 func_sc03_117_80181900();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
extern void func_8012B0B4();
extern s16 D_80126B62;
extern void func_8012B2CC();

extern s32 func_8012CEB0();
extern u8 D_sc03_117_801C368C;
extern void func_8012B23C();
extern void func_8012B1B4();

extern s32 func_8012B8E4();
extern u8 D_sc03_117_801C36A8;
extern s32 func_8012BDBC();
extern s32 func_8012CC40();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_8012CC64();
extern s32 func_80133784();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_117_8017E300();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

typedef struct { u16 a, b, c, d; } U16x4;
extern u8 D_sc03_117_801C0F6C;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { s32 n; XY p; SV8 a; SV8 b; } Lerp;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
typedef struct { SV8 p; SV8 q; s32 n; } Spawn;
extern u8 *AllocPrim();
extern void func_80017E8C();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void func_sc03_117_8018012C();
extern void func_80015978();
extern s32 func_8012EF34();
extern void func_80017D98();
extern void func_8001739C();
extern SV8 D_sc03_117_801887F0;
extern SV8 D_sc03_117_801887F8;
extern SV8 D_sc03_117_80188800;
extern s16 D_sc03_117_801887F4;
extern s16 D_sc03_117_801887FC;
extern s16 D_sc03_117_80188804;

typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern u8 D_sc03_117_801C0F30;
extern u8 D_sc03_117_801C0F74;
extern void func_80143994();
extern void func_8012E88C();
extern s32 func_8012E778();
extern s16 D_80126CBA;
extern void *D_sc03_117_801C3748[];
extern void *D_801151D4;
extern s32 func_8012BD3C();
extern s32 func_8012BE98();
extern s32 func_8012B744();
extern void func_8012C0EC();
extern u8 D_sc03_117_801C3698;
extern u8 D_sc03_117_801C36A0;
extern u16 D_801202A0;

void func_sc03_117_8017D5DC(s32 arg0, SV *arg1, s32 arg2) {
    SV v;
    s16 i;
    s16 k;

    v.vx = arg1->vx;
    v.vy = arg1->vy - 20;
    v.vz = arg1->vz;
    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, &v, &v);
    for (i = 0; i < 2; i++) {
        k = 1;
        if ((s16)arg2 == 0) {
            k = i;
        }
        func_80146A6C(0x25, arg0, v.vx, v.vy, v.vz, k, 0);
    }
}

void func_sc03_117_8017D6A8(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc03_117_801883F0, 0x2A);
    if (o == 0) {
        func_80146C3C(arg0);
        return;
    }
    AF(arg0, u8 *, 0x20) = o;
    AF(o, s16, 0x2A) = 0x1F0;
    pm = (WMtx *)(AF(q, u8 *, 0x20) + 0x34);
    r = rand();
    if (AF(arg0, s32, 0x2C) == 0) {
        k = 0x1000;
        v.x = (r & 0xFF) + 0x240;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x18) = 0x1000;
    } else {
        k = 0x200;
        v.x = (r & 0xFF) * 4 + 0xD00;
        AF(o, s16, 0x28) = 0x244;
        AF(o, s16, 0x18) = 0x1800;
    }
    v.y = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    v.z = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(pm, &m);
    v.x = 0;
    v.y = 0;
    v.z = k;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s32, 0x10) = v.x << 8;
    AF(arg0, s32, 0x14) = v.y << 8;
    AF(arg0, s32, 0x18) = v.z << 8;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 2)++;
}

void func_sc03_117_8017D804(u8 *arg0) {
    D_sc03_117_801883FC[AF(arg0, u16, 2)]();
}

void func_sc03_117_8017D840(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc03_117_8017D8A0(u8 *arg0) {
    D_sc03_117_8018841C[AF(arg0, u16, 2)]();
}

void func_sc03_117_8017D8DC(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_117_80188404, 0xFD);
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

void func_sc03_117_8017DAA0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_117_8017DB34(u8 *arg0) {
    D_sc03_117_80188424[AF(arg0, u16, 2)]();
}

void func_sc03_117_8017DB70(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_117_80188410, 0x18);
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

void func_sc03_117_8017DC14(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_117_8017DC78(u8 *arg0) {
    D_sc03_117_8018847C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_117_8017DCB4(u8 *arg0) {
    func_sc03_117_8017DFC0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_117_8017DCF8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_117_8017DD1C(u8 *arg0) {
    D_sc03_117_80188484[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_117_8017DD58(u8 *arg0) {
    func_sc03_117_8017E0A0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_117_8017DD9C(u8 *arg0) {
    func_sc03_117_8017E0C8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_117_8017DDDC(u8 *arg0) {
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

void func_sc03_117_8017DE58(void) {
    func_800D1EBC();
}

void func_sc03_117_8017DE78(u8 *arg0) {
    D_sc03_117_80188498[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_117_8017DEB4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        if (!(func_80029178(0xB8) & 0xFF)) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_117_8017DF44(u8 *arg0) {
    D_sc03_117_801884A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_117_8017DF80(u8 *arg0) {
    func_sc03_117_8017E0F0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_117_8017DFC0(void) {
    func_8016EE40((s32) &D_sc03_117_801884B0, 0x01000000);
}

void func_sc03_117_8017DFE8(u8 *arg0) {
    D_sc03_117_801884C4[AF(arg0, u8, 0x216)]();
}

void func_sc03_117_8017E024(s32 arg0) {
    func_80171A80(arg0, 0x5A);
    func_80171990(arg0);
}

void func_sc03_117_8017E058(s32 arg0) {
    if ((func_80172658() != 0) || (func_80171A88(arg0) != 0)) {
        func_80171928(arg0);
    }
}

void func_sc03_117_8017E0A0(void) {
    func_8016EE40((s32) &D_sc03_117_801884BC, 0x01000000);
}

void func_sc03_117_8017E0C8(void) {
    func_8016EE40((s32) &D_sc03_117_801884CC, 0x01000000);
}

void func_sc03_117_8017E0F0(void) {
    func_8016EE40((s32) &D_sc03_117_801884E0, 0x01000000);
}

void func_sc03_117_8017E118(void) {
    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = 0xE3;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_117_8017E1DC, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_117_8017E1DC((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_80126962 = D_8012696A;
    func_sc03_117_8017E1DC((s32) &D_80126948);
}

void func_sc03_117_8017E1DC(s32 arg0) {
    D_sc03_117_801884EC[AF(arg0, u8, 4)]();
}

typedef struct { SV8 v[4]; CV4 c[4]; s32 code; } Q34;
typedef struct { u8 b[0x34]; } T34;
typedef struct { s16 m[3][3]; s32 t[3]; } MTX;
typedef struct { s32 vx, vy, vz, pad; } VEC;
typedef struct { SV8 v[4]; CV c; s32 code; } Quad28;
typedef struct { u8 pad[0x20]; u8 *m; } ObjM;
extern s32 func_8012DEB8();
extern u16 D_sc03_117_801887A8;
extern u16 D_sc03_117_801887AA;
extern u16 D_sc03_117_801887AC;
extern u16 D_sc03_117_801887AE;
extern u16 D_sc03_117_801887B0;
extern u16 D_sc03_117_801887B2;

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
extern void *D_80126B78;
extern void func_80172710();
extern SV8 D_sc03_117_801CB13C[];

extern s32 func_8012C194();
extern B4 D_sc03_117_801CE398;
extern B4 D_sc03_117_801CE39C;
extern B4 D_sc03_117_801CCEF8;
extern B4 D_sc03_117_801CCEFC;
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void func_80128EA8();
extern void func_sc03_117_8017F344();
extern void func_sc03_117_8017F298();
extern u8 D_sc03_117_801BEB68;
extern u8 D_sc03_117_801BD738;
extern u8 D_sc03_117_801CE3D8;
extern u8 D_sc03_117_801CE3F8;

extern s32 func_801290DC();
extern s32 rand();
extern u16 D_80126B66;
extern s32 func_80132EF4();
extern void func_80129374();
extern u16 D_80126B96[];
extern s16 D_80126B98;
extern s32 func_sc03_117_8017F78C();
extern SV8 D_sc03_117_801CE2D8[];
extern SV8 D_sc03_117_801885FC[];
extern SV8 D_sc03_117_8018862C[];
extern void func_sc03_117_80181A30();

extern u8 D_sc03_117_8018865C;
extern u8 D_sc03_117_8018866C;
extern s32 func_80178970();
extern void func_8014B598();
extern void func_sc03_117_80180A70();
extern void func_sc03_117_8017EA1C();
extern s32 func_8014CB2C();
extern void func_8016F0AC();
s32 func_sc03_117_8017E6A0(s32 arg0);
extern void func_sc03_117_8017F410();
s32 func_sc03_117_8017F474(s32 arg0);
extern void func_8012C588();
extern s32 func_sc03_117_8017F4C4();
extern void func_80016714();
extern void func_sc03_117_8017F2D8();
extern u8 D_sc03_117_8018503C;
extern u8 D_sc03_117_80185018;
extern u8 D_sc03_117_801884F4;
extern s32 SetScript();
extern void func_sc03_117_8017EB34();
extern void func_sc03_117_8017ECC4();
extern void func_8002959C();
s32 func_sc03_117_80180C78(s32 arg0, s32 arg1);
s32 func_sc03_117_8017E99C(s32 arg0);

typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;

extern void func_8012C098();

extern u16 D_800B99DA;

extern u8 D_sc03_117_801B8F08;
extern u8 D_sc03_117_801BAA88;
extern B4 D_sc03_117_801CCF00;

extern s32 func_sc03_117_80180AB4();
extern u8 D_sc03_117_80188820;
extern u8 D_sc03_117_801C0F18;
s32 func_sc03_117_8017F5A4(u8 *o);
extern u8 D_sc03_117_801887B4;
extern u32 func_80029504();
extern void func_8001C2C4();
extern void func_8012B14C();
extern u8 D_sc03_117_801887A4;
extern void func_8012931C();
extern s32 D_sc03_117_801887E4;
extern void func_8012E5CC();
extern B4 D_sc03_117_801CE418;
extern B4 D_sc03_117_801CE41C;
extern B4 D_sc03_117_801CCF04;
extern void func_8001CD9C();
extern void func_8001CB6C();
extern u8 D_80126940;
extern s32 func_80148800();
extern u8 D_sc03_117_801884F0;

void func_sc03_117_8017E218(u8 *arg0) {
    B8 v;
    u8 t;
    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_117_801884F0)[t];
    }
    v = *(B8 *)&D_80126940;
    if (AF(&v, s16, 4) < 0x100) AF(&v, s16, 4) = 0x100;
    if (AF(&v, s16, 4) > 0x1340) {
        AF(arg0, s16, 0x20) = 0x155;
        AF(arg0, s16, 0x22) = 0x600;
    } else {
        AF(arg0, s16, 0x20) = 0xE3;
        AF(arg0, s16, 0x22) = 0x400;
    }
    func_sc03_117_8017E300(arg0, &v);
}

void func_sc03_117_8017E300(u8 *arg0, u8 *arg1) {
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

void func_sc03_117_8017E498(u8 *o) {
    u16 *p = (u16 *) &D_80126B58;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BE54(o) < 0x1900) {
            if ((u16)(*p - 2) >= 2) {
                if (!(func_80029178(0x8C) & 0xFF)) {
                    func_80178B18(o, (s32) &D_sc03_117_8018865C);
                    AF(o, u16, 0x34)++;
                } else {
                    func_80178B18(o, (s32) &D_sc03_117_8018866C);
                    AF(o, u16, 0x34)++;
                }
            }
        }
        break;
    case 1:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, u16, 0x34) = 3;
            if (!(func_80029178(0x8C) & 0xFF)) {
                AF(o, u16, 0x34) = 2;
            }
        }
        break;
    case 2:
        break;
    case 3:
        if (func_8012BE54(o) < 0x1900) {
            if ((u16)(*p - 2) >= 2) {
                if (func_8014CB58() == 4) {
                    func_8014B598(4, (s32) &D_sc03_117_80188350);
                    if (func_sc03_117_8017CF24() != 0) {
                        AF(o, s16, 0x84) = 0x5A;
                        AF(o, u16, 0x34)++;
                    }
                }
            }
        }
        break;
    case 4:
        if (AF(o, s16, 0x84) != 0) {
            if (--AF(o, s16, 0x84) == 0) {
                func_800D0C48(0);
            }
        }
        if (((s32 (*)()) func_sc03_117_8017CF40)() != 0) {
            if (AF(o, s32, 0xCC) != 0) {
                func_sc03_117_80180A70(AF(o, s32, 0xCC));
                AF(o, s32, 0xCC) = 0;
                func_sc03_117_8017EA1C(o);
            }
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        if (func_8014CB2C() < 0) {
            func_8016F0AC();
            func_sc03_117_8017E6A0((s32) o);
        }
        break;
    }
}

s32 func_sc03_117_8017E6A0(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_117_8017EBCC();
    func_80178B18(arg0, (s32) &D_sc03_117_8018868C);
    return func_8012AD44(arg0, 2);
}

void func_sc03_117_8017E6EC(u8 *o) {
    s32 i;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((AF(o, s32, 0x1C) & 7) == 0) {
            func_8013C9C4(&D_sc03_117_8018503C);
        }
        if (func_8012BEE8(o) != 0) {
            AF(AF(o, u8 *, 0x20), s32, 0x24) = 0;
            for (i = 0; i < 11; i++) {
                func_8012C658(0x1E0, i, o);
            }
            SetScript(o, &D_sc03_117_801884F4);
            func_8002D4C8(0x866, 0);
            AF(o, u16, 0x34)++;
        }
        func_sc03_117_8017EB34(o);
        break;
    case 1:
        if (AF(o, u16, 0x72) & 0x4000) {
            func_8002D4C8(0x866, 0);
        }
        if (AF(o, s32, 0x94) == 0x10) {
            if (++AF(o, s16, 0x106) == 2) {
                AF(o, s16, 0x98) = 0;
                AF(o, u16, 0x34)++;
                func_8002D4C8(0x865, 0);
            }
        }
        if ((AF(o, s32, 0x1C) & 7) == 0) {
            func_8013C9C4(&D_sc03_117_8018503C);
        }
        AF(o, s32, 0x1C)++;
        func_sc03_117_8017EB34(o);
        break;
    case 2:
        func_sc03_117_8017ECC4(o, 0);
        func_sc03_117_8017EB34(o);
        if (AF(o, s16, 0xFE) == 6) {
            AF(o, s32, 0x1C) = 0x10;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        func_sc03_117_8017ECC4(o, 0);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x5C) = 0;
            AF(o, s16, 0x108) = 1;
            AF(o, s16, 0x10A) = 1;
            func_8012C588(0x23A, o);
            AF(o, s16, 0xE2) = 0;
            func_8002D4C8(0x868, 0);
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        func_sc03_117_8017ECC4(o, 1);
        if ((AF(o, s32, 0x1C) & 0xF) == 0) {
            func_8013C9C4(&D_sc03_117_80185018);
        }
        AF(o, s32, 0x1C)++;
        if (AF(o, s16, 0xE2) != 0) {
            func_80029124(0xBB, 1);
            func_8002959C();
            func_8002D4C8(4, 0x868);
            ((s32 (*)()) func_sc03_117_80180C78)();
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        break;
    }
    if (func_80178970(o) != 0) {
        func_80178D18(o);
        func_sc03_117_8017E99C((s32) o);
    }
}

s32 func_sc03_117_8017E99C(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc03_117_8017E9BC(u8 *arg0) {
    D_sc03_117_801886FC[AF(arg0, u16, 2)]();
    if (AF(arg0, s16, 0x10A) != 0) {
        func_sc03_117_8017EE78((s32) arg0);
    }
}

void func_sc03_117_8017EA1C(u8 *o) {
    u8 *p;
    p = (u8 *)func_8012C194();
    AF(o, u8 *, 0xD0) = p;
    if (p != 0) {
        func_8001CD50(p, &D_sc03_117_801CE398);
        func_800233CC(&D_sc03_117_801CE398, 0xE0);
        D_sc03_117_801CE398 = D_sc03_117_801CCEF8;
        D_sc03_117_801CE39C = D_sc03_117_801CCEFC;
        AF(p, s16, 0x18) = 0x1000;
        AF(p, s16, 0x1A) = 0x1000;
        AF(p, s16, 0x10) = 0xC00;
        AF(p, u16, 0x2C) = 0xC040;
        AF(p, u32, 4) |= 0x50000000;
        AF(p, s16, 8) = AF(o, s16, 6);
        AF(p, s16, 0xA) = AF(o, s16, 0xA) - 0x30;
        AF(p, s16, 0xC) = AF(o, s16, 0xE);
        AF(o, s16, 0xE0) = 0;
    }
    if ((u8)func_80029178(0xBB)) {
        D_sc03_117_801CE398.b[0] = 0xFF;
    }
}

void func_sc03_117_8017EB34(u8 *o) {
    s16 d;
    s16 v;
    if (AF(o, u8 *, 0xD0) != 0) {
        d = AF(o, s32, 0x94);
        if (d > 0x10) {
            d = 0x20 - AF(o, s32, 0x94);
            if (d < 0) d = 0;
        }
        v = ++AF(o, u16, 0xE0) + d * 3 + 0x40;
        if (v > 0xFF) v = 0xFF;
        D_sc03_117_801CE398.b[0] = v;
    }
}

void func_sc03_117_8017EBCC(u8 *o) {
    u8 *e;
    s32 i;
    e = (u8 *)D_sc03_117_801CE2D8;
    for (i = 0; i < 6; i++, e += 0x20) {
        AF(e, s16, 0) = D_sc03_117_801885FC[i].x + AF(o, s16, 6);
        AF(e, s16, 2) = D_sc03_117_801885FC[i].y + AF(o, s16, 0xA);
        AF(e, s16, 4) = D_sc03_117_801885FC[i].z + AF(o, s16, 0xE);
        AF(e, SV8, 8) = D_sc03_117_8018862C[i];
        AF(e, B4, 0x10) = D_sc03_117_801CCF00;
        AF(e, B4, 0x14) = D_sc03_117_801CCEFC;
        AF(e, s16, 0x18) = 0;
        AF(e, s16, 0x1A) = 0;
        AF(e, s16, 6) = 0;
        AF(e, s32, 0x1C) = 0x50000000;
    }
    AF(o, s16, 0xFE) = 0;
    AF(o, s16, 0x100) = 0;
}

void func_sc03_117_8017ECC4(u8 *o, s32 mode0) {
    u16 mode = mode0;
    s16 n;
    s32 i;
    u8 *e;
    e = (u8 *)D_sc03_117_801CE2D8;
    n = AF(o, s16, 0xFE);
    if (n < 6) {
        if (AF(o, s16, 0x100) != 0) {
            AF(o, s16, 0x100) = AF(o, s16, 0x100) - 1;
        } else {
            D_sc03_117_801CE2D8[n * 4].pad = 0x200;
            AF(o, s16, 0x100) = 2;
            AF(o, s16, 0xFE) = AF(o, s16, 0xFE) + 1;
        }
    }
    for (i = 0; i < 6; i++, e += 0x20) {
        if (AF(e, s16, 6) != 0) {
            if (mode == 0) {
                if (AF(e, u16, 0x18) < 0x20) {
                    AF(e, u16, 0x18) += 8;
                    AF(e, u16, 0x1A) += 0x20;
                }
            } else if (AF(e, u16, 0x18) != 0) {
                AF(e, u16, 0x18) -= 8;
                AF(e, u16, 0x1A) -= 0x20;
            }
        }
        AF(e, s16, 0) = D_sc03_117_801885FC[i].x + AF(o, s16, 6);
        AF(e, s16, 2) = D_sc03_117_801885FC[i].y + AF(o, s16, 0xA);
        AF(e, s16, 4) = D_sc03_117_801885FC[i].z + AF(o, s16, 0xE);
        AF(e, SV8, 8) = D_sc03_117_8018862C[i];
        func_sc03_117_80181A30(e);
    }
}

void func_sc03_117_8017EE78(s32 arg0) {
    s16 temp_v0;

    MoveImage((s32) ((AF(arg0, s16, 0x102) * 8) + &D_sc03_117_8018870C), 0x358, 0x1C0);
    D_sc03_117_80188756[0] = D_sc03_117_80188744[AF(arg0, s16, 0x102)];
    MoveImage((s32) (D_sc03_117_80188756 - 0x1), 0x170, 0x100);
    temp_v0 = (u16) AF(arg0, s16, 0x102) + 1;
    AF(arg0, s16, 0x102) = temp_v0;
    if (temp_v0 >= 7) {
        AF(arg0, s16, 0x102) = 0;
    }
}

s32 func_sc03_117_8017EF14(s32 arg0, s32 arg1) {
    return func_80029178(0xBB, arg1) & 0xFF;
}

void func_sc03_117_8017EF34(void) {
    func_800D0CE0();
}

s32 func_sc03_117_8017EF54(s32 arg0) {
    func_8012B200(arg0);
    AF(arg0, s32, 0x10) = (s32) ((AF(arg0, s16, 6) - AF(AF(arg0, void *, 0x64), s16, 6)) << 0xD);
    AF(arg0, s32, 0x18) = (s32) ((AF(arg0, s16, 0xE) - AF(AF(arg0, void *, 0x64), s16, 0xE)) << 0xD);
    AF(arg0, s32, 0x14) = (s32) -(((rand() & 7) + 0x18) << 0x10);
    AF(arg0, s16, 0x106) = (s16) (rand() & 0xF0);
    AF(arg0, s16, 0x108) = (s16) (rand() & 0xF0);
    return func_8012AD44(arg0, 2);
}

void func_sc03_117_8017EFF0(u8 *arg0) {
    D_sc03_117_80188788[AF(arg0, u16, 2)]();
}

void func_sc03_117_8017F02C(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s16, 0x52) -= 0x80;
        if (AF(o, s16, 0x52) < 0) {
            AF(o, s16, 0x52) = 0;
        }
        p = AF(o, u8 *, 0xCC);
        AF(p, s16, 0xA) = AF(o, s16, 0xA) + AF(o, s16, 0x52);
        if (AF(o, s16, 0x52) == 0) {
            AF(o, u16, 0x34)++;
        }
        func_sc03_117_8017F410(o);
        break;
    case 1:
        if (func_sc03_117_8017F474((s32) o) != 0) {
            AF(o, s32, 0x1C) = 0x70;
            AF(o, u16, 0x34)++;
            func_8012C588(0x2B0, o);
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            p = AF(o, u8 *, 0xCC);
            if (p != 0 && AF(p, s16, 0x18) != 0) {
                AF(p, s16, 0x18) -= 0x100;
                AF(p, s16, 0x1C) -= 0x100;
            }
            if (AF(AF(o, u8 *, 0x20), s16, 0x18) != 0) {
                AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x100;
                AF(AF(o, u8 *, 0x20), s16, 0x1C) -= 0x100;
            }
            if (AF(AF(o, u8 *, 0x20), s16, 0x18) < 0x800) {
                if (func_sc03_117_8017F4C4(o) != 0) {
                    if (AF(AF(o, u8 *, 0x20), s16, 0x18) == 0) {
                        AF(p, s32, 4) |= 0x80000000;
                        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
                        AF(AF(o, u8 *, 0x64), s16, 0xE2) = 1;
                        func_80016714(p, 0x84);
                        func_8012C218(o);
                        return;
                    }
                }
            }
        }
        break;
    }
    func_sc03_117_8017F2D8(&D_sc03_117_801CE3D8, 0x160, 0x153);
    func_sc03_117_8017F2D8(&D_sc03_117_801CE3F8, 0x160, 0x155);
}

void func_sc03_117_8017F25C(u8 *arg0) {
    D_sc03_117_80188794[AF(arg0, u16, 2)]();
}

void func_sc03_117_8017F298(s32 p, s32 x, s32 y) {
    SV8 r;
    r.x = x;
    r.y = y;
    r.z = 0x10;
    r.pad = 1;
    StoreImage(&r, p);
}

void func_sc03_117_8017F2D8(u32 *o, s32 x, s32 y) {
    RECT r;
    s32 i;
    u32 t;

    t = o[7];
    for (i = 7; i > 0; i--) {
        o[i] = o[i - 1];
    }
    o[i] = t;
    r.x = x;
    r.y = y;
    r.w = 16;
    r.h = 1;
    LoadImage(&r, o);
}

void func_sc03_117_8017F344(u8 *o) {
    u8 *p;
    p = (u8 *)func_8012C194();
    AF(o, u8 *, 0xD0) = p;
    if (p != 0) {
        func_8001CD9C(p, &D_sc03_117_801CE418);
        func_800233CC(&D_sc03_117_801CE418, 0xE0);
        D_sc03_117_801CE418 = D_sc03_117_801CCF04;
        D_sc03_117_801CE41C = D_sc03_117_801CCEFC;
        AF(p, s16, 0x18) = 0x1000;
        AF(p, s16, 0x2C) = 0x40;
        AF(p, u32, 4) |= 0x50000000;
        func_sc03_117_8017F410(o);
    }
}

void func_sc03_117_8017F410(u8 *o) {
    u8 *p;
    s32 d;

    p = AF(o, u8 *, 0xD0);
    if (p != 0) {
        AF(p, s16, 8) = AF(o, s16, 6);
        d = (AF(o, s16, 0x52) >> 1) - 0x1C0;
        AF(p, s16, 0xA) = AF(o, s16, 0xA) + d;
        AF(p, s16, 0xC) = AF(o, s16, 0xE);
        AF(p, s16, 0x1A) = (0x380 - AF(o, s16, 0x52)) * 8 + 0x1000;
    }
}

s32 func_sc03_117_8017F474(s32 arg0) {
    s16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0xD0);
    if ((temp_a1 == NULL) || (temp_v0 = AF(temp_a1, s16, 0x18), ((temp_v0 < 0x4000) == 0))) {
        return 1;
    }
    AF(temp_a1, s16, 0x18) = (s16) (temp_v0 + 0x400);
    AF(temp_a1, u16, 0x1A) = (u16) (AF(temp_a1, u16, 0x1A) + 0x180);
    return 0;
}


s32 func_sc03_117_8017F4C4(u8 *o) {
    u8 *p;
    s16 t;
    u8 c;
    s16 s;

    p = AF(o, u8 *, 0xD0);
    if (p == 0) return 1;
    c = D_sc03_117_801CE418.b[0];
    if (c != 0) {
        t = c - 0x10;
        c = t;
        if (t < 0) c = 0;
        D_sc03_117_801CE418.b[0] = c;
    }
    s = AF(p, s16, 0x18);
    if (s > 0) {
        AF(p, s16, 0x18) = s - 0x400;
        AF(p, u16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) > 0) return 0;
        AF(p, s16, 0x18) = 0;
    }
    func_80016714(p, 0x38);
    AF(o, u8 *, 0xD0) = 0;
    return 1;
}

void func_sc03_117_8017F568(u8 *arg0) {
    D_sc03_117_8018879C[AF(arg0, u16, 2)]();
}

s32 func_sc03_117_8017F5A4(u8 *o) {
    s32 t;
    s16 d;
    s16 v;
    u8 *p;
    t = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = t;
    d = D_80126B66 - AF(o, u16, 0xE);
    if (d < 0) d = -d;
    if (d > 0x180) return d;
    if (t & 1) {
        p = (u8 *)func_80132EF4(o, 0x22);
        if (p != 0) {
            func_80129374(p, o);
            AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x4000;
        }
    }
    if (AF(o, s16, 0x70) == 0) {
        AF(o, s16, 0x104) = AF(o, s16, 0x102);
        AF(o, s16, 0x102) = 0;
        if (d < 0x180) {
            if ((AF(o, s32, 0x1C) & 3) == 0) {
                v = (0x2FF - d * 2) / 6;
                if (v < 0) v = 0;
                if (AF(o, s16, 0x106) != 0) v = v >> 1;
                func_8002D4C8(0x756, (v | 0x1000) & 0xFFFF);
                AF(o, s16, 0x102) = 1;
            }
        } else if (AF(o, s16, 0x104) != 0) {
            func_8002D4C8(4, 0x756);
        }
    }
    if (func_sc03_117_8017F78C(o) != 0) {
        D_80126B98 = 0xC;
        D_80126B96[0] |= 0x4000;
    }
    return d;
}

void func_sc03_117_8017F750(u8 *arg0) {
    D_sc03_117_801887D4[AF(arg0, u16, 2)]();
}

s32 func_sc03_117_8017F78C(u8 *o) {
    SV8 a, b;
    a.z = D_sc03_117_801887B0;
    b.z = D_sc03_117_801887B2;
    a.y = b.y = D_sc03_117_801887AC;
    a.x = b.x = (s16)D_sc03_117_801887A8 >> 1;
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.x = b.x = (s16)D_sc03_117_801887AA >> 1;
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.y = b.y = D_sc03_117_801887AE;
    if (func_8012DEB8(o, &a, &b)) return 1;
    a.x = b.x = (s16)D_sc03_117_801887A8 >> 1;
    if (func_8012DEB8(o, &a, &b)) return 1;
    return 0;
}

void func_sc03_117_8017F894(u8 *o) {
    s32 p;
    p = func_8012C1B8();
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    if ((u8)func_80029178(0xBB)) {
        func_8001C214(AF(o, s32, 0x20), &D_sc03_117_801B8F08);
        func_sc03_117_8017E99C((s32) o);
        func_sc03_117_8017EA1C(o);
        AF(o, s16, 0x10A) = 1;
        func_8012C588(0x2B0, o);
        return;
    }
    func_8001C810(AF(o, s32, 0x20), &D_sc03_117_801BAA88);
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x8000;
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x1000100;
    p = ((s32 (*)())func_8012C588)(0x1D7, o);
    if (p != 0) {
        AF(o, s32, 0xCC) = p;
    }
    func_8012AD50(o);
}

void func_sc03_117_8017F97C(void) {
}

void func_sc03_117_8017F984(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_117_8018875C[AF(arg0, s16, 0x70)]);
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0x01000100;
    func_8012AD50(arg0);
}

void func_sc03_117_8017FA00(u8 *arg0) {
    if (AF(arg0, s16, 0x70) != 0) {
        AF(arg0, s16, 0xE) = 0;
        AF(arg0, s16, 0xA) = 0;
        AF(arg0, s16, 6) = 0;
        func_80132784((s32) arg0, AF(arg0, s32, 0x64), (s32) (u16) AF(arg0, s16, 0x70));
        AF(arg0, s16, 6) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
        AF(arg0, s16, 0xA) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
        AF(arg0, s16, 0xE) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
        if (AF(AF(arg0, s32, 0x64), s16, 0x108) != 0) {
            func_sc03_117_8017EF54((s32) arg0);
        }
    }
}

void func_sc03_117_8017FA90(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    func_8012AD80();
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x14) = (u16) (AF(temp_a0_2, u16, 0x14) + AF(arg0, u16, 0x108));
    if (AF(arg0, s16, 0xA) < -0x800) {
        func_8012C218((s32) arg0);
    }
}

void func_sc03_117_8017FB04(u8 *o) {
    u8 *p;
    s32 k;
    p = (u8 *)func_8012C1B8();
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc03_117_801BEB68);
    k = 0x1800180;
    AF(p, u16, 0x2C) |= 0x10;
    AF(o, s16, 0xA) -= 0x10;
    AF(p, s32, 0x28) = k;
    AF(o, u8 *, 0x20) = p;
    AF(o, s16, 0x52) = 0x380;
    p = (u8 *)func_8012C1B8();
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc03_117_801BD738);
    AF(p, u16, 0x2C) |= 0x10;
    AF(p, s32, 0x28) = k;
    AF(p, s16, 8) = AF(o, s16, 6);
    AF(p, s16, 0xA) = AF(o, s16, 0xA) + AF(o, s16, 0x52);
    AF(p, s16, 0xC) = AF(o, s16, 0xE);
    AF(p, s16, 0x12) = 0x100;
    AF(o, u8 *, 0xCC) = p;
    func_sc03_117_8017F344(o);
    func_sc03_117_8017F298(&D_sc03_117_801CE3D8, 0x160, 0x153);
    func_sc03_117_8017F298(&D_sc03_117_801CE3F8, 0x160, 0x154);
    func_8012AD50(o);
}

void func_sc03_117_8017FC30(u8 *o) {
    s32 p;
    p = func_8012C1B8();
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C810(p, &D_sc03_117_801C0F18);
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0x2000300;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(o, s16, 0xA) = -0x680;
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xE) = 0x15C0;
    func_8012AD50(o);
}

void func_sc03_117_8017FCD4(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 2);
}

void func_sc03_117_8017FCF0(u8 *o) {
    s32 p;
    V3 v;
    if (func_80029504() >= 1000 || func_80029504() < 900 || (p = func_8012C1B8(), AF(o, s32, 0x20) = p, p == 0)) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(p);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
    func_8012B2CC(o);
    v.y = 0;
    v.x = 0;
    v.z = 0xC0000;
    func_8012B14C(o, &v);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, s32, 0x58) = (s32) &D_sc03_117_801887A4 | 0x40000000;
    func_8012AD50(o);
}

void func_sc03_117_8017FDB4(u8 *o) {
    s16 d;
    d = func_sc03_117_8017F5A4(o);
    if (AF(o, s16, 0x70) != 0) return;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (d < 0x60) {
            func_80178B18(o, (s32) &D_sc03_117_801887B4);
            AF(o, s16, 0x106) = 1;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, s16, 0x106) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    }
}

void func_sc03_117_8017FE68(u8 *arg0) {
    D_sc03_117_801887DC[AF(arg0, u16, 2)]();
}

void func_sc03_117_8017FEA4(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

void func_sc03_117_8017FED8(u8 *o) {
    SV8 v;
    u8 *p;
    s16 r;
    if (func_8012BEE8(o) == 0) return;
    func_80015978(o + 4, &v);
    if (AF(o, s32, 0xDC) != 0) {
        r = rand() % 352;
        if (r & 1) r = -r;
        v.x += r;
        r = rand() % 256;
        if (r & 1) r = -r;
        v.z += r;
    }
    p = (u8 *)func_801290DC(0x52, &v);
    if (p != 0) {
        func_8012BF4C(o, (rand() & 0x3F) + 0x20);
        AF(p, s16, 0xA) -= 0x200;
        AF(p, s16, 0x2E) = AF(o, s16, 0xFC);
    }
}

void func_sc03_117_80180010(u8 *arg0) {
    D_sc03_117_801887E8[AF(arg0, u16, 2)]();
}

void func_sc03_117_8018004C(u8 *arg0) {
    AF(arg0, s32, 0x14) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_117_80180064(u8 *o) {
    SV8 v;
    s16 s;
    s32 p;
    func_sc03_117_8018012C(o);
    AF(o, s32, 0x10) += 0;
    AF(o, s32, 0x14) += 0xC000;
    AF(o, s32, 0x18) += 0;
    func_8012931C(o);
    s = AF(o, s16, 0x2E);
    if (s < AF(o, s16, 0xA)) {
        AF(o, s16, 0xA) = s;
        func_80015978(o + 4, &v);
        p = func_801290DC(0x53, &v);
        if (p != 0) {
            AF(p, s32, 0x2C) = D_sc03_117_801887E4++ & 7;
        }
        func_8012E5CC(&v, 0x834, 0);
        func_801292C8(o);
    }
}

void func_sc03_117_8018012C(u8 *o) {
    TriArg t;
    SV8 a;
    SV8 b;
    SV8 s[4];
    WMtx m;
    s32 z;
    s32 flag;
    TriArg *p;
    u16 y;

    p = &t;
    func_80015978(o + 4, &a);
    if (func_8012EF34(&a, &b) & ~0x1000) {
        return;
    }
    gte_stszotz(&z);
    D_sc03_117_801887F4 = b.z;
    D_sc03_117_801887FC = b.z;
    D_sc03_117_80188804 = b.z;
    func_80017D98(&m);
    m.t[0] = m.t[1] = m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(&D_sc03_117_801887F0, &D_sc03_117_801887F8, &D_sc03_117_80188800);
    gte_rtpt();
    gte_stsxy3(&s[0], &s[1], &s[2]);
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
    t.p[0].x = s[0].x + b.x;
    t.p[0].y = s[0].y + b.y;
    t.p[1].x = s[1].x + b.x;
    t.p[1].y = s[1].y + b.y;
    t.p[2].x = s[2].x + b.x;
    t.p[2].y = s[2].y + b.y;
    t.p[0].z = z;
    func_8001739C(p);
    y = s[1].y;
    t.p[1].y = b.y - y;
    func_8001739C(p);
    y = s[2].x;
    t.p[2].x = b.x - y;
    func_8001739C(p);
    t.p[1].y = s[1].y + b.y;
    func_8001739C(p);
}

void func_sc03_117_80180358(u8 *arg0) {
    D_sc03_117_80188808[AF(arg0, u16, 2)]();
}

void func_sc03_117_80180394(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_117_801CE458;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x20);
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 2) = 0;
    AF(temp_s0, u8, 1) = 0;
    AF(temp_s0, u8, 0) = 0;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_117_80180454(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s8 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_v1 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_117_801CE458;
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_a2, s16, 0x1A) = temp_v0;
        AF(temp_a2, s16, 0x18) = temp_v0;
        temp_v0_2 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_v1, u8, 5) = temp_v0_2;
        AF(temp_v1, u8, 4) = temp_v0_2;
        AF(temp_v1, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc03_117_801804DC(u8 *arg0) {
    D_sc03_117_80188810[AF(arg0, u16, 2)]();
}

void func_sc03_117_80180518(s32 arg0, s32 arg1) {
    if (func_80029178(0xBB, arg1) & 0xFF) {
        func_8012AD50(arg0);
    }
}

void func_sc03_117_80180558(u8 *o) {
    SV8 v;
    s32 i;

    if ((D_800B99DA & 3) == 0) {
        v.y = AF(o, s16, 0xA);
        for (i = 0; i < 2; i++) {
            v.x = AF(o, s16, 6) + ((rand() & 0x3F) - 0x20);
            v.z = AF(o, s16, 0xE) + ((rand() & 0x3F) - 0x20);
            func_801290DC(0x66, &v);
        }
    }
}

void func_sc03_117_801805EC(u8 *arg0) {
    D_sc03_117_80188818[AF(arg0, u16, 2)]();
}

void func_sc03_117_80180628(u8 *o) {
    u8 unused[16];
    u8 *p;
    s32 a, b, c;
    p = AF(o, u8 *, 0x20);
    AF(p, u8 *, 0x20) = &D_800D387C;
    AF(p, u8, 0x27) = 0x9C;
    AF(p, s32, 4) |= 0x60000000;
    func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_800D3888);
    AF(o, s32, 0x14) = 0xFFFC0000;
    AF(o, s32, 0x1C) = 0x3C;
    AF(o, s32, 0x10) = AF(o, s32, 4);
    AF(o, s32, 0x18) = AF(o, s32, 0xC);
    a = rand();
    b = rand();
    c = rand();
    AF(p, s16, 0x10) = (a & 3) * 1024 + (b & 3) * 250 + (c & 3) * 68;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = (rand() & 3) * 2048 + 0x1000;
    AF(o, s16, 0x2E) = (rand() & 3) + 1;
    AF(o, u16, 2)++;
}

void func_sc03_117_80180748(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v0_3;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x2C) = (u16) (AF(arg0, u16, 0x2C) + AF(arg0, u16, 0x2E));
    temp_v0 = AF(temp_s1, u16, 0x10) + 0x71;
    AF(temp_s1, u16, 0x10) = (u16) temp_v0;
    var_v1 = (s16) AF(arg0, u16, 0x2C) * rsin((s32) temp_v0, arg1, arg2, arg3);
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    AF(arg0, s16, 6) = (s16) (AF(arg0, u16, 0x12) + (var_v1 >> 0xC));
    var_v1_2 = (s16) AF(arg0, u16, 0x2C) * rcos((s32) (s16) AF(temp_s1, u16, 0x10));
    if (var_v1_2 < 0) {
        var_v1_2 += 0xFFF;
    }
    AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x1A) + (var_v1_2 >> 0xC));
    temp_v0_2 = AF(arg0, s32, 0x14) + 0xFFFF4000;
    AF(arg0, s32, 0x14) = temp_v0_2;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0_2);
    temp_v0_3 = AF(temp_s1, u16, 0x1A) + 0xCC;
    AF(temp_s1, u16, 0x1A) = temp_v0_3;
    AF(temp_s1, u16, 0x18) = temp_v0_3;
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_80128ED8((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24));
    }
    temp_v0_4 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_4;
    if (temp_v0_4 == -1) {
        func_801292C8((s32) arg0);
    }
}

void func_sc03_117_80180874(u8 *arg0) {
    D_sc03_117_80188B40[AF(arg0, u16, 2)]();
}

void func_sc03_117_801808B0(u8 *o) {
    s32 p;
    p = func_sc03_117_80180AB4(o, &D_sc03_117_80188820, 0x300, 0x180, 0x84);
    AF(o, s32, 0xCC) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    p = func_sc03_117_80180AB4(o, &D_sc03_117_80188820, 0x310, 0x180, 0x85);
    AF(o, s32, 0xD0) = p;
    if (p == 0) {
        func_80016714(AF(o, s32, 0xCC), 0x38);
        func_8012CAE4(o);
        return;
    }
    AF(o, s16, 2) = 1;
}

void func_sc03_117_8018094C(s32 arg0, s32 arg1) {
    if (func_80029178(0x8C, arg1) & 0xFF) {
        if (func_8012BD14(arg0) < 0x1FA5) {
            func_sc03_117_801809C8(arg0);
            return;
        }
        AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x84;
        AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x85;
    }
}

void func_sc03_117_801809C0(void) {
}

s32 func_sc03_117_801809C8(s32 arg0) {
    s32 temp_v0;
    u16 temp_s2;

    temp_s2 = AF(arg0, u16, 0xFC);
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x86;
    AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x87;
    func_800183E0((s32) ((D_sc03_117_80188B20[(s16) temp_s2] * 0x10) + &D_sc03_117_801C4F44));
    temp_v0 = func_800183E0((s32) ((D_sc03_117_80188B20[(s16) temp_s2] * 0x10) + (&D_sc03_117_801C4F44 + 0x100)));
    AF(arg0, u16, 0xFC) = (u16) ((temp_s2 + 1) & 0x1F);
    return temp_v0;
}

void func_sc03_117_80180A70(u8 *o) {
    func_80016714(AF(o, s32, 0xCC), 0x38);
    func_80016714(AF(o, s32, 0xD0), 0x38);
    func_8012C098(o);
}

s32 func_sc03_117_80180AB4(u8 *o, s32 m, s32 x, s32 y, s32 c) {
    u8 *p;
    p = (u8 *)func_8012C194();
    if (p == 0) return 0;
    func_8001CB6C(p, m, (s16) x, (s16) y);
    AF(p, s16, 0x10) = 0xC00;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x2D00;
    AF(p, u8, 0x27) = c;
    AF(p, u16, 0x2C) = 0xC008;
    AF(p, s16, 8) = AF(o, s16, 6);
    AF(p, s16, 0xA) = AF(o, s16, 0xA) - 0x24;
    AF(p, s16, 0xC) = AF(o, s16, 0xE);
    return (s32) p;
}

void func_sc03_117_80180B88(u8 *arg0) {
    D_sc03_117_80188B5C[AF(arg0, u16, 2)]();
}

void func_sc03_117_80180BC4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    func_8012AD50(arg0);
}

void func_sc03_117_80180C18(u8 *arg0, s32 arg1) {
    if (func_80029178(0xBB, arg1) & 0xFF) {
        AF(arg0, s32 *, 0x58) = &D_sc03_117_80188B4C;
        AF(arg0, s16, 0x5C) = 0x80;
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_117_80180C68(void) {
}

s32 func_sc03_117_80180C70(void) {
    return 0x49;
}

s32 func_sc03_117_80180C78(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

void func_sc03_117_80180C98(s32 arg0, s32 arg1) {
    if (D_sc03_117_801CE8BC == 0) {
        if (func_80029178(0xBB, arg1) & 0xFF) {
            func_8013373C(0);
        }
        D_sc03_117_801CE8BC += 1;
    }
}

void func_sc03_117_80180CF0(u8 *arg0) {
    s32 temp_v0;

    D_sc03_117_801C0F9C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_117_801819C4((s32) arg0);
        }
    }
}

void func_sc03_117_80180D6C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_117_801C0F30) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = (s32 *) &D_sc03_117_801C0F74;
        AF(arg0, s32, 0xC4) |= 1;
        AF(arg0, s32, 0xE4) = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc03_117_801C348C);
        func_80143994(arg0, 0x1000);
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
    }
}

void func_sc03_117_80180E2C(u8 *arg0) {
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

void func_sc03_117_80180F54(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc03_117_80181900(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    func_8012B178(arg0, AF(arg0, s32, 0xE4));
    func_8012CBF4(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && func_8012BEE8(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc03_117_801819AC(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc03_117_801810C4(u8 *arg0) {
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

void func_sc03_117_80181258(u8 *arg0) {
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

void func_sc03_117_801814AC(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    func_8012B0B4(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc03_117_80181900(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    func_8012B200(arg0);
    func_8012B2CC(arg0);
    func_8012B178(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_117_801815B8(u8 *arg0) {
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
        func_sc03_117_80181900(&sp10, arg0, &D_sc03_117_801C0F6C);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        func_8012B178(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        func_8012CBF4(arg0);
        if (func_sc03_117_801818D4(arg0) != one && func_8012BEE8(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc03_117_80181754(s32 arg0) {
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
        SetScript(arg0, (s32) &D_sc03_117_801C348C);
    }
}

void func_sc03_117_80181810(s32 arg0) {
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

void func_sc03_117_8018189C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_117_801C348C);
}

s32 func_sc03_117_801818D4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_117_801C0FBC, (s32) (&D_sc03_117_801C0FBC + 8), 5) != 0;
}

s32 func_sc03_117_80181900(s32 *arg0, u8 *arg1, u16 *arg2) {
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

s32 func_sc03_117_801819AC(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_117_801819C4(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc03_117_80181A30(u8 *o) {
    SV8 v[4];
    SMtx m;
    s32 pp;
    s32 flag;
    u32 *ot;
    u8 *p;
    u8 *t;
    s32 z;
    u16 w;

    ot = g_WorldOtTable[D_800B9A02[0]];
    w = AF(o, u16, 6);
    if (w == 0) return;
    v[0].x = 0;
    v[0].y = -(AF(o, u16, 0x18) >> 1);
    v[0].z = 0;
    v[1].x = 0;
    v[1].y = AF(o, u16, 0x18) >> 1;
    v[1].z = 0;
    v[2].x = w;
    v[2].y = -(AF(o, u16, 0x1A) >> 1);
    v[2].z = 0;
    v[3].x = w;
    v[3].y = AF(o, u16, 0x1A) >> 1;
    v[3].z = 0;
    RotMatrixZYX(o + 8, &m);
    m.t[0] = AF(o, s16, 0);
    m.t[1] = AF(o, s16, 2);
    m.t[2] = AF(o, s16, 4);
    p = AllocPrim(0x24);
    AF(p, s32, 4) = AF(o, s32, 0x10);
    AF(p, s32, 0xC) = AF(o, s32, 0x10);
    AF(p, s32, 0x14) = AF(o, s32, 0x14);
    AF(p, s32, 0x1C) = AF(o, s32, 0x14);
    p[3] = 8;
    p[7] = 0x38;
    func_80017E8C(&m);
    z = RotTransPers4(&v[0], &v[1], &v[2], &v[3], p + 8, p + 0x10, p + 0x18, p + 0x20, &pp, &flag);
    if (flag & ~0x1000) return;
    z++;
    if ((u32)z >= 0x1000) return;
    ((PTAG *)p)->addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p;
    if (AF(o, u32, 0x1C) & 0x40000000) {
        p[7] |= 2;
        t = AllocPrim(8);
        t[3] = 1;
        AF(t, u32, 4) = 0xE1000200 | ((AF(o, u32, 0x1C) >> 23) & 0x60);
        ((PTAG *)t)->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MT20;
typedef struct { s16 x, y; s32 pad; } SXY8;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern u8 D_sc03_117_801C35EC;
extern u8 D_sc03_117_801C4A1C;
extern u8 D_sc03_117_801C36C0;
extern u8 D_sc03_117_801CE658[];
extern u8 D_sc03_117_801C3620;
extern u8 D_sc03_117_801C362C;
extern u8 D_sc03_117_801C3634;
extern u8 D_sc03_117_801C3644;
extern u16 D_sc03_117_801C3648;
extern u8 D_sc03_117_801C364C;
extern u8 D_sc03_117_801C3658;
extern u8 D_sc03_117_801C3660;
extern u8 D_sc03_117_801C3684;
extern u16 D_sc03_117_801C3688;
extern u8 D_sc03_117_801C3670;
extern u8 D_sc03_117_801C367C;
extern u8 D_sc03_117_801CE699[];
extern u8 D_sc03_117_801CE69A;
extern u8 D_sc03_117_801CE69C;
extern void func_8001CA1C();

void func_sc03_117_80181C80(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (func_8012C354(arg0, &D_sc03_117_801C35EC) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_117_801C36C0;
        SetScript(arg0, &D_sc03_117_801C4A1C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc03_117_801C368C);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_117_801CE658[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_117_801C3620);
        SetScript(arg0, &D_sc03_117_801C362C);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_117_801C3634 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_117_801C3644;
        AF(arg0, u16, 0xE) += D_sc03_117_801C3648;
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
        func_8001CA1C(t, &D_sc03_117_801C364C);
        SetScript(arg0, &D_sc03_117_801C3658);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_117_801C3660 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_117_801C3684;
        AF(arg0, u16, 0xE) += D_sc03_117_801C3688;
        return;
    case 7:
        if (func_8012C354(arg0, &D_sc03_117_801C35EC) == 0) {
            return;
        }
        {
            u8 *q = D_sc03_117_801CE699;
            u8 *r = q - 1;
            D_sc03_117_801CE69A = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc03_117_801CE69A = 0;
            D_sc03_117_801CE69C = 0;
            func_800233CC(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_117_801C36C0;
        SetScript(arg0, &D_sc03_117_801C4A1C);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_117_801CE658[AF(arg0, s16, 0xFC) * 8];
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
        func_8001CA1C(t, &D_sc03_117_801C3620);
        SetScript(arg0, &D_sc03_117_801C362C);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_117_801C3634 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_117_801C3644;
        AF(arg0, u16, 0xE) += D_sc03_117_801C3648;
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
        func_8001CA1C(t, &D_sc03_117_801C364C);
        SetScript(arg0, &D_sc03_117_801C3658);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_117_801C3660 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_117_801C3684;
        AF(arg0, u16, 0xE) += D_sc03_117_801C3688;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_117_801C3670);
        SetScript(arg0, &D_sc03_117_801C367C);
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
        if (func_8012C354(arg0, &D_sc03_117_801C35EC) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_117_801C36C0;
        SetScript(arg0, &D_sc03_117_801C4A1C);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_117_801CE658[AF(arg0, s16, 0xFC) * 8];
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
        func_8001CA1C(t, &D_sc03_117_801C3620);
        SetScript(arg0, &D_sc03_117_801C362C);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_117_801C3634 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_117_801C3644;
        AF(arg0, u16, 0xE) += D_sc03_117_801C3648;
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
        func_8001CA1C(t, &D_sc03_117_801C364C);
        SetScript(arg0, &D_sc03_117_801C3658);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_117_801C3660 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_117_801C3684;
        AF(arg0, u16, 0xE) += D_sc03_117_801C3688;
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

void func_sc03_117_8018242C(u8 *arg0) {
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

void func_sc03_117_80182A34(u8 *arg0) {
    SV4 a;
    SV4 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    func_8012B1B4(arg0, &D_sc03_117_801C368C);
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
    if (func_8012CC40(arg0, &D_sc03_117_801C36A8) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc03_117_80182B68(u8 *arg0) {
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
    r = func_8012CC64(arg0, &D_sc03_117_801C36A8);
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
            func_8012B1B4(arg0, &D_sc03_117_801C368C);
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

void func_sc03_117_80182F28(u8 *arg0) {
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

void func_sc03_117_8018316C(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_117_801C36F0[AF(arg0, u16, 2)]();
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

void func_sc03_117_8018321C(u8 *arg0) {
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

void func_sc03_117_80183300(u8 *arg0) {
    D_sc03_117_801C3740[AF(arg0, u16, 2)]();
}

void func_sc03_117_8018333C(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_117_801CE698);
    }
}

void func_sc03_117_801833A0(u8 *arg0) {
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
    ((void (*)(u8 *)) D_sc03_117_801C3748[AF(arg0, u16, 2)])(arg0);
}

void func_sc03_117_80183434(u8 *arg0) {
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
        func_8012B1B4(arg0, &D_sc03_117_801C368C);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    func_8012B23C(arg0);
    func_8012B1B4(arg0, &D_sc03_117_801C368C);
}

void func_sc03_117_8018355C(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_117_8018358C(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_117_801835B8(void) {
}

void func_sc03_117_801835C0(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_8012B1B4(arg0, &D_sc03_117_801C368C);
    } else if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (func_8012CC40(arg0, &D_sc03_117_801C36A8) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        func_8012C0EC(arg0);
    }
}

void func_sc03_117_801836AC(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

void func_sc03_117_8018372C(u8 *arg0) {
    AF(arg0, s32, 8) += 0x100000;
    AF(arg0, s32, 4) -= rsin(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    AF(arg0, s32, 0xC) -= rcos(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 2) = 6;
        func_8012D5E4((s32) arg0, (s32) &D_sc03_117_801C3698, (s32) &D_sc03_117_801C36A0, 0xF);
        AF(arg0, s16, 0xFE) = 8;
    }
}

void func_sc03_117_801837E0(u8 *arg0) {
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

void func_sc03_117_801838C0(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_117_80183928(u8 *arg0) {
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

void func_sc03_117_80183988(u8 *arg0) {
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
    func_sc03_117_8018321C((s32) arg0);
}

void func_sc03_117_80183A18(u8 *arg0) {
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
    func_sc03_117_8018321C((s32) arg0);
}

void func_sc03_117_80183A8C(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_117_8018321C((s32) arg0);
}

void func_sc03_117_80183ADC(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_117_801C36B0, (s32) &D_sc03_117_801C36B8, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_117_8018333C(arg0);
}

void func_sc03_117_80183B5C(u8 *arg0) {
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

void func_sc03_117_80183BFC(u8 *arg0) {
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
    func_sc03_117_8018242C(arg0);
}

void func_sc03_117_80183CCC(u8 *arg0) {
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
    func_sc03_117_80182F28((s32) arg0);
}

void func_sc03_117_80183D60(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_117_80183D9C(s32 arg0) {
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

void func_sc03_117_80183E84(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_117_801CE6D8;
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

void func_sc03_117_80183F48(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_117_801CE6D8;
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

void func_sc03_117_80183FFC(u8 *arg0) {
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

void func_sc03_117_8018403C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_117_80184090(u8 *arg0) {
    D_sc03_117_801CB124[AF(arg0, u16, 2)]();
}

void func_sc03_117_801840CC(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc03_117_801CAE14) != 0) {
        if (!(func_80029178(D_sc03_117_801CAE7C[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc03_117_80184778);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_117_80184BE8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_117_801841A0(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_117_801841C8(void) {
}

void func_sc03_117_801841D0(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc03_117_801CB060 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_117_801CAFC4[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_117_801CB04C = 0;
            func_80029124(D_sc03_117_801CAFC4[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_117_801CB048 = 2;
        } else {
            D_sc03_117_801CB060 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_117_801CAF40[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_117_801CB048 = 0;
            D_sc03_117_801CB04C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc03_117_801CB074);
    } else {
        var_a1 = &D_sc03_117_801CB0E0;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc03_117_8018431C(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc03_117_801CAE7C[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_117_801CAE7C[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc03_117_80184520() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_117_8018443C(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc03_117_80184468(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_117_80184478(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_117_80184488(u8 *arg0) {
    func_80029124(D_sc03_117_801CAE7C[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_117_801844C8(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_117_801844FC(void) {
    return func_80174764() == 1;
}

s32 func_sc03_117_80184520(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc03_117_801CAE7C[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_117_80184584(u8 *arg0) {
    D_sc03_117_801CB14C[AF(arg0, u16, 2)]();
}

void func_sc03_117_801845C0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_117_801CAE48) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_117_801CB80C);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_117_801CB5EC);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_117_80184648(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_117_801CB5FC);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_117_801CB704);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_117_80184708(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_117_801CB80C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_117_801CB5EC);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc03_117_80184778(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc03_117_801CB13C[0], &a, &f);
    RotTransSV(&D_sc03_117_801CB13C[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
