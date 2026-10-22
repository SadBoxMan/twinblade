#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_006_80185E08[])();
void func_sc01_006_8017BEC4(u8 *arg0);
extern void (*D_sc01_006_80185E18[])();
void func_sc01_006_8017C078(u8 *arg0);
extern void (*D_sc01_006_80185E20[])();
void func_sc01_006_8017C150(u8 *arg0);
extern void (*D_sc01_006_80185E2C[])();
void func_sc01_006_8017C268(u8 *arg0);
extern void (*D_sc01_006_80185EAC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_006_8017D5D4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_006_80185EB4[])();
void func_sc01_006_8017D5FC(void);
extern void func_800D1EBC();
extern void (*D_sc01_006_80185EC0[])();
extern void (*D_sc01_006_80185ECC[])();
extern u8 D_sc01_006_80185ED8;
extern void func_8016EE40();
extern u8 D_sc01_006_80185EE4;
extern void func_sc01_006_8017D7A4();
extern void (*D_sc01_006_80185EF8[])();
extern s16 D_sc01_006_801CD870;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_006_801BBA40[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern void (*D_sc01_006_801BC7A4[])();
extern void (*D_sc01_006_801BC7B4[])();
extern void (*D_sc01_006_801C3A5C[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc01_006_8017BE9C();
extern s32 func_sc01_006_8017C050();
extern s32 func_sc01_006_8017C128();
extern s32 func_sc01_006_8017C240();

s32 func_sc01_006_8017BE9C()
{
    return SetActionHandler((s32) func_sc01_006_8017BEC4);
}

void func_sc01_006_8017BEC4(u8 *arg0) {
    D_sc01_006_80185E08[AF(arg0, u8, 0x214)]();
}

extern void func_80154150();
extern void func_sc01_006_8017BF70();
extern void func_80147324();
extern void func_80154274();
extern u8 D_sc01_006_80185D9C;
extern s32 func_sc01_006_8017C1E8();

void func_sc01_006_8017BF00(s32 arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    func_80154150(arg0, 0x26);
    StartFace(arg0, 0x1E);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xFE9;
    AF(arg0, s32, 0x208) = 0;
    NextPhase(arg0);
    func_sc01_006_8017BF70(arg0);
}

void func_sc01_006_8017BF70(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x208) = (s32) (AF(arg0, s32, 0x208) + 0x1C000);
    AF(temp_a0, u16, 0x10) = (u16) ((AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0x20A)) & 0xFFF);
    temp_v1 = AF(arg0, void *, 0x20);
    if ((s16) AF(temp_v1, u16, 0x10) < 0xC00) {
        AF(temp_v1, u16, 0x10) = 0xC00U;
        AF(arg0, s16, 0xB8) = 1;
        NextPhase(arg0, arg0);
    }
}

void func_sc01_006_8017BFEC(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        func_80154150((s32) arg0, 0x27);
        StartFace((s32) arg0, 0x1F);
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
}

void func_sc01_006_8017C048(void) {
}

s32 func_sc01_006_8017C050()
{
    return SetActionHandler((s32) func_sc01_006_8017C078);
}

void func_sc01_006_8017C078(u8 *arg0) {
    D_sc01_006_80185E18[AF(arg0, u8, 0x214)]();
}

void func_sc01_006_8017C0B4(s32 arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    func_80154150(arg0, 0x27);
    StartFace(arg0, 0x1F);
    NextPhase(arg0);
    ClearActionHandler(arg0);
}

void func_sc01_006_8017C120(void) {
}

s32 func_sc01_006_8017C128()
{
    return SetActionHandler((s32) func_sc01_006_8017C150);
}

void func_sc01_006_8017C150(u8 *arg0) {
    D_sc01_006_80185E20[AF(arg0, u8, 0x214)]();
}

void func_sc01_006_8017C18C(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc01_006_80185D9C);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    func_80147324(0xA05);
    NextPhase(arg0);
    func_sc01_006_8017C1E8(arg0);
}

s32 func_sc01_006_8017C1E8(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene();
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc01_006_8017C238(void) {
}

s32 func_sc01_006_8017C240()
{
    return SetActionHandler((s32) func_sc01_006_8017C268);
}

void func_sc01_006_8017C268(u8 *arg0) {
    D_sc01_006_80185E2C[AF(arg0, u8, 0x214)]();
}

extern u8 D_80126B58;
extern s32 func_80029504();
extern void func_8014BD98();
extern void func_8014BB0C();
extern void func_8014BE78();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void func_8012A018();
extern void func_8012A094();
extern void func_sc01_006_8017D808();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_006_801CD878;
extern s32 D_sc01_006_801CD9A8;
extern s32 D_sc01_006_801CD9B0;
extern void func_800D24A0();
extern void func_sc01_006_8017DC48();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern u8 D_sc01_006_801BBE98;
extern void func_sc01_006_8017FD50();
extern s32 func_8016F1AC();
extern void func_80029514();
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc01_006_80185E5C;
extern void func_800D1724();
extern u8 D_sc01_006_801BC348;
extern s32 func_801789AC();
extern void func_80178D18();
extern void func_801746A4();
extern u8 D_sc01_006_80185E38;
extern void func_sc01_006_8017DAAC();
s16 func_sc01_006_8017DA9C(void);
extern u8 D_sc01_006_801BBC4C;
extern void func_sc01_006_8017FBCC();
extern s32 D_sc01_006_801CDED4;
extern u8 D_sc01_006_801BC4A0;
extern u8 D_sc01_006_801C6B18;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_80143994();
extern u8 D_sc01_006_801BC6C8;
extern u8 D_sc01_006_801BC508;
extern s32 func_sc01_006_80180BDC();
extern s32 D_sc01_006_801BC78C[];
extern u8 D_sc01_006_801BC578;
extern u8 D_sc01_006_801C97C0;
extern u8 D_sc01_006_801BC718;
extern u8 D_sc01_006_801BC5E0;
extern s32 D_sc01_006_801BC798[];
extern u8 D_sc01_006_801BC764;
extern u8 D_sc01_006_801BC5F8;
extern u8 D_sc01_006_801BC680;
extern u8 D_sc01_006_801BC778;
extern void func_80139914();
extern void func_8012C218();
extern s16 D_80126B30;
extern u8 D_sc01_006_801CA6EC;
extern void func_8017303C();

extern void func_sc01_006_80181B00();
extern void func_sc01_006_801820F8();

void func_sc01_006_8017C338();
extern void *D_80126B78;

void func_sc01_006_8017C2A4(s32 arg0) {
    EndScene();
    func_80154150(arg0, 0x24);
    StartFace(arg0, 0x1D);
    NextPhase(arg0);
    func_sc01_006_8017C338(arg0);
}

void func_sc01_006_8017C2F4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154150((s32) arg0, 0x25);
        NextPhase((s32) arg0);
    }
}

void func_sc01_006_8017C338(void) {
}

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u32 D_800A6610[2][0x1000];
typedef struct { u16 a; u16 b; u8 pad[28]; } R8017D4A4;
typedef struct {
    s16 f0; u8 p2[0xC]; s16 fE; u8 p10[0xC];
    u8 p1C[0x24]; s16 f40[3];
} W80115118;
typedef struct { s16 v; } S16R;
typedef struct { u8 v; } U8R;
extern W80115118 D_80115118;
extern R8017D4A4 *D_80115134;
extern u8 D_80115138[];
extern U8R D_80115140[];
extern S16R D_80115148[];
extern R8017D4A4 *D_sc01_006_801BB8B0[];
extern u8 *D_sc01_006_801BB904[];
extern u8 D_sc01_006_801BB8FC[];
extern u8 D_sc01_006_801CD9B4[];
extern s16 D_sc01_006_801CD874;
extern u16 D_sc01_006_801CD87C;
extern u16 D_sc01_006_801CD880;
extern s32 func_800291B4();
extern void func_sc01_006_8017DEFC();

void func_sc01_006_8017C340(u8 *obj) {
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

void func_sc01_006_8017D220(s32 arg0) {
    if (func_80029504(arg0) < 0xA) {
        func_8014BD98((s32) &D_80126B58, 0x64);
        func_8014BB0C();
        func_8014BE78();
    }
}

void func_sc01_006_8017D26C(u8 *arg0) {
    D_sc01_006_80185EAC[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D2A8(u8 *arg0) {
    func_sc01_006_8017D5D4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_006_8017D2EC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_006_8017D310(u8 *arg0) {
    D_sc01_006_80185EB4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D34C(u8 *arg0) {
    func_sc01_006_8017D5FC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_006_8017D38C(u8 *arg0) {
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

void func_sc01_006_8017D408(void) {
    func_800D1EBC();
}

void func_sc01_006_8017D428(u8 *arg0) {
    D_sc01_006_80185EC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D464(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_006_8017D480(u8 *arg0) {
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

void func_sc01_006_8017D4FC(void) {
    func_800D1EBC();
}

void func_sc01_006_8017D51C(u8 *arg0) {
    D_sc01_006_80185ECC[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D558(u8 *arg0) {
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

s32 func_sc01_006_8017D5CC(void) {
    return 1;
}

void func_sc01_006_8017D5D4(void) {
    func_8016EE40((s32) &D_sc01_006_80185ED8, 0x01000000);
}

void func_sc01_006_8017D5FC(void) {
    func_8016EE40((s32) &D_sc01_006_80185EE4, 0x01000000);
}

void func_sc01_006_8017D624(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x2BC;
    D_80126968 = 0;
    D_8012696A = 0x850;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x82;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_006_8017D7A4, 0);
    D_801274E8 = 0xD;
    D_801274EA = -0x82;
    D_801274EC = 0x8A;
    func_sc01_006_8017D7A4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_006_8017D6E4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x190;
    D_8012696A = 0x850;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x82;
    D_8012697A = -0x180;
    func_8012A018((s32) func_sc01_006_8017D7A4, 0);
    D_801274E8 = 0xD;
    D_801274EA = -0x82;
    D_801274EC = 0x8A;
    func_sc01_006_8017D7A4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_006_8017D7A4(s32 arg0) {
    D_sc01_006_80185EF8[AF(arg0, u8, 4)]();
}

void func_sc01_006_8017D7E0(s32 arg0) {
    func_sc01_006_8017D808(arg0, (s32) &D_801274E8);
}

extern s8 D_800B9A15;
extern s32 D_801151D0;
extern s32 D_sc01_006_801CD9AC;
extern s32 D_801151C8[];
extern s32 func_8014168C();
extern void func_80139954();
extern void func_sc01_006_8017E6BC();
extern void func_80137B80();
extern s16 D_80115126;
extern u8 D_sc01_006_801BBA3C;
extern s32 func_sc01_006_8017E3DC();
extern s32 func_sc01_006_8017ED5C();
extern s32 func_801376E8();
extern s32 func_801399F0();
extern s32 func_80014ED4();
extern void func_sc01_006_8017F2D4();

typedef struct { s8 lo; u8 hi; } S8PE804;
extern S8PE804 D_80115158[];
extern u8 D_80115141;
extern u8 D_80115142;
extern u8 D_sc01_006_80183478[];
extern s32 D_8010F3C4[];
extern u8 *D_sc01_006_801CD9A4;

typedef struct { u32 *ot; u8 pad4[8]; u32 *otLast; u8 pad10[4]; } OtE804;
typedef struct { u16 v; } U16RE804;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } SprtE804;
extern u16 D_sc01_006_801BB61E;
extern u16 D_sc01_006_801BB632;
extern OtE804 D_800AE7BC[];
extern u8 D_800B9ABF;
extern u8 D_800B9AC0;
extern u8 D_800B9AC1;
extern u8 D_800B9B10;
extern u8 D_800B9B11;
extern u8 D_800B9B12;
extern u8 D_800B9B13;
extern u8 D_800B9B14;
extern u8 D_800B9B15;
extern u8 D_sc01_006_801B91B4;
extern u8 D_sc01_006_801B9C74;
extern u8 D_sc01_006_801C3708;
extern u8 D_sc01_006_801C39E0;
extern u8 D_sc01_006_801C3A30;
extern u8 D_sc01_006_801CD9C0;
extern u8 D_sc01_006_801CDA10;
extern u16 D_sc01_006_801C3930[];
extern s32 D_sc01_006_801C3728[];
extern s32 D_sc01_006_801C339C[];
extern u8 D_sc01_006_801C3A04[];
extern void func_sc01_006_8018203C();
extern s32 func_8001D074();
extern void func_8001CBDC();
extern void func_8001C810();
extern void func_8001C1E4();
extern void func_800183E0();
extern s16 D_sc01_006_801C3880[];
extern s16 D_sc01_006_801C38D8[];
extern s32 func_800149E0();
extern s32 func_80014B10();
extern void func_8012B260();

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017D808);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017D9A0);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017D9F4);

s32 func_sc01_006_8017DA84(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x57;
    if (arg0 >= 5) {
        var_v0 = 0x3D;
    }
    return var_v0;
}

s16 func_sc01_006_8017DA9C(void) {
    return D_sc01_006_801CD870;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DAAC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DB00);

void func_sc01_006_8017DB50(void) {
    func_80029444();
    func_801754A8();
    D_sc01_006_801BBA40[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_006_8017DBC0(void) {
    func_800D24A0(4);
    func_sc01_006_8017DC48();
    if (D_sc01_006_801CD878 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_006_801CD878;
    }
    D_sc01_006_801CD9B0 = 0;
    D_sc01_006_801CD9A8 = 0;
    D_80115130 = 0;
    D_sc01_006_801CD878 = 0;
    D_80115112 += 1;
}

void func_sc01_006_8017DC48(void) {
    s16 i;
    s16 j;
    s16 count;
    s16 found;
    u8 *p;

    D_80115118.f0 = 0;
    D_sc01_006_801CD870 = 0;
    D_80115134 = D_sc01_006_801BB8B0[D_80115118.fE];
    for (i = 0; i < 3; i++) {
        D_80115138[i] = D_80115134[i].a;
        D_80115118.f40[i] = D_80115134[i].b;
        if (D_sc01_006_801CD878 == 0) {
            D_80115148[i].v = 0;
            if (D_80115118.fE == 0) {
                D_80115140[i].v = 0;
            }
        }
    }
    if (D_80115118.fE == 0 && func_80029504() >= 0x3B6U) {
        D_80115118.f40[0] = 0x106;
    }
    count = 0;
    if (D_80115118.fE == 3) {
        for (i = 0; i < 7; i++) {
            D_sc01_006_801CD9B4[i] = 0;
        }
        for (i = 0; i < 7; i++) {
            found = 0;
            p = D_sc01_006_801BB904[i];
            j = 0;
            if (D_sc01_006_801BB8FC[i] != 0) {
                do {
                    if (func_800291B4(*p++ + 0x62) & 0x40) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc01_006_801BB8FC[i]);
            }
            if (found) {
                D_sc01_006_801CD9B4[count++] = i;
            }
        }
        D_80115118.f40[1] = count | 0x100;
        if (D_sc01_006_801CD878 != 0) {
            D_80115148[0].v = 1;
            D_80115148[1].v = D_sc01_006_801CD87C;
            D_80115148[2].v = D_sc01_006_801CD880;
        }
        D_sc01_006_801CD874 = 0;
    }
    func_sc01_006_8017DEFC();
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DEFC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E0EC);

void func_sc01_006_8017E108(void) {
    u8 unused[8];
    s32 st;
    s32 r;
    u8 c;
    s32 s;
    s32 t;
    s32 *q;
    u16 *h;
    s16 x;

    D_801151D0 = D_801151C8[D_800B9A02];
    st = func_sc01_006_8017E3DC();
    func_sc01_006_8017E6BC();
    r = func_8014168C(D_8011511A);
    c = D_80115138[(u16) D_8011511A];
    if (D_80115126 != 4) {
        if (D_sc01_006_801CD9A8 != 0) {
            s = D_sc01_006_801CD9A8;
        } else {
            s = func_sc01_006_8017ED5C(c, (s16) r);
        }
        if (s != 0) {
            q = &D_80115130;
            if (s != *q) {
                *q = s;
                func_80139954();
                D_sc01_006_801CD9AC = func_801376E8(s, &D_sc01_006_801BBA3C);
            }
        }
        func_80137B80();
    }
    x = st;
    if (x < 0) {
        func_80139954();
        D_800B9A15 = 0;
        if (x == -1) {
            func_8002D4C8(0x474, 0);
        }
        h = &D_80115112;
        *h += 2;
    }
}

void func_sc01_006_8017E258(void) {
    u8 unused[8];
    u16 k;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_sc01_006_801CD9A8 != 0) {
        if (func_801399F0(D_sc01_006_801CD9AC) != 0) {
            D_sc01_006_801CD9A8 = 0;
        }
    } else if (func_80014ED4(0) & 0x50) {
        k = D_8011511A;
        if (D_80115138[k] == 8) {
            func_sc01_006_8017F2D4(0xF, (s16) func_8014168C((s16) k));
        }
        if (D_sc01_006_801CD870 != 0) {
            func_80139954();
            D_800B9A15 = 0;
            func_8002D4C8(0x474, 0);
            D_80115112++;
        } else {
            D_80115112--;
        }
    }
    func_sc01_006_8017E6BC();
    func_80137B80();
}

void func_sc01_006_8017E384(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E3DC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E6BC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E978);

s32 func_sc01_006_8017EB44(s32 *tbl, s16 kind, s16 id, s16 i, s32 *col) {
    s32 r;
    s16 n;
    s16 j;
    s32 k;

    *col = 0x808080;
    n = D_80115158[id].hi * *(u8 *) &D_80115158[id].lo;
    r = 0;
    switch (kind) {
    case 6:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (!(func_800291B4(D_sc01_006_80183478[j]) & 0xFF)) {
            *col = 0x804040;
        }
        k = j + 1;
        r = D_8010F3C4[k];
        break;
    case 10:
        j = i + D_80115142;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (func_800291B4(D_sc01_006_801CD9A4[j] + 0x62) & 0x20) {
            *col = 0x804040;
        }
        r = tbl[j];
        break;
    case 9:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            break;
        }
        r = tbl[D_sc01_006_801CD9B4[j]];
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    default:
        if (i >= n) {
            break;
        }
        r = tbl[i];
        break;
    }
    return r;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017ED5C);

SprtE804 *func_sc01_006_8017EFA8(SprtE804 *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
    s32 kind;
    s16 k;
    u16 *uv;
    u16 cur;
    s16 i;

    kind = D_80115138[id];
    p->tag = 0x04000000;
    p->u = 0x30;
    p->v = 0x48;
    p->clut = 0x4056;
    p->code = col | 0x64000000;
    if (kind < 6) {
        k = func_8014168C(id) * 2;
    } else {
        k = (*(u8 *)&D_80115148[id] - D_80115140[id].v) * 2;
    }
    uv = (u16 *)(k * 2 + (s32)tbl);
    p->x = uv[0] - 8;
    p->y = uv[1];
    p->h = 8;
    p->w = 8;
    addPrim(&D_800AE7BC[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
    p++;
    if (kind >= 6) {
        cur = D_8011511A;
        if (cur == id && (D_80115116 & 8)) {
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    if (D_80115140[cur].v == 0) {
                        continue;
                    }
                    p->v = 0x30;
                    p->y = D_sc01_006_801BB61E - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc01_006_801BB632 + 1;
                }
                p->tag = 0x04000000;
                p->u = 0x78;
                p->code = 0x64808080;
                p->clut = 0x4056;
                p->x = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 13;
                p->w = 8;
                p->h = 8;
                addPrim(&D_800AE7BC[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
                p++;
            }
        }
    }
    return p;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F2D4);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F730);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F790);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F9F8);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017FBCC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017FD50);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017FF74);

void func_sc01_006_80180010(s32 arg0) {
    s32 temp_v0;

    func_sc01_006_8017FD50(arg0);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80029514(0xA);
        func_80029124(0x125, 0);
        func_80029124(0x126, 0);
        func_80029124(0x127, 0);
        func_80029124(0x128, 0);
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s16, 0xDC) = 0;
        func_80178B18(arg0, (s32) &D_sc01_006_801BBE98);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801800C0);

void func_sc01_006_801803AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_80029514(2);
        func_800D1724((s32) &D_sc01_006_80185E5C);
    }
}

void func_sc01_006_801803F0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0x8E) {
        AF(D_80126B78, s16, 0x10) = 0;
    }
}

void func_sc01_006_8018041C(s32 arg0) {
    s32 temp_v0;

    func_sc01_006_8017FD50(arg0);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18(arg0, (s32) &D_sc01_006_801BC348);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_8018048C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u16 temp_v0_5;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0x10A) = temp_v0_2;
        if (temp_v0_2 < 0x40) {
            temp_v0_3 = AF(arg0, s16, 0x106);
            if (temp_v0_3 != 0) {
                temp_v0_4 = temp_v0_3 - 8;
                AF(arg0, s16, 0x106) = temp_v0_4;
                if ((s16) (temp_v0_4) < 0) {
                    AF(arg0, s16, 0x106) = 0;
                }
            } else {
                temp_v0_5 = AF(arg0, u16, 0x108) - 8;
                AF(arg0, u16, 0x108) = temp_v0_5;
                if ((s16) (temp_v0_5) < 0) {
                    AF(arg0, u16, 0x108) = 0U;
                }
            }
        }
        func_sc01_006_8017FD50((s32) arg0);
    }
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180564(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_006_80185E38);
    }
}

void func_sc01_006_801805A0(void) {
}

void func_sc01_006_801805A8(void) {
    func_sc01_006_8017DAAC(3, 0);
}

void func_sc01_006_801805CC(void) {
    func_sc01_006_8017DAAC(3, 2);
}

void func_sc01_006_801805F0(void) {
    func_sc01_006_8017DAAC(4, 0);
}

s32 func_sc01_006_80180614(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0x10A) != 0) {
        temp_v0 = AF(arg0, u16, 0x106) - 0x10;
        AF(arg0, u16, 0x106) = temp_v0;
        AF(arg0, u16, 0x108) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x106) = 0U;
            AF(arg0, u16, 0x108) = 0U;
        }
        AF(arg0, s16, 0x10A) = (s16) ((u16) AF(arg0, s16, 0x10A) - 3);
        return 0;
    }
    AF(AF(arg0, void *, 0xD4), s16, 0xFC) = 1;
    return 1;
}

s16 func_sc01_006_80180674(u8 *arg0) {
    s16 temp_s0;

    temp_s0 = AF(arg0, s16, 0x104);
    if (temp_s0 != 0) {
        AF(arg0, s16, 0x104) = 0;
        func_8002D4C8(0x45F, 0);
    }
    return temp_s0;
}

s32 func_sc01_006_801806B8(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0x10A) != 0) {
        temp_v0 = AF(arg0, u16, 0x106) - 0x10;
        AF(arg0, u16, 0x106) = temp_v0;
        AF(arg0, u16, 0x108) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x106) = 0U;
            AF(arg0, u16, 0x108) = 0U;
        }
        AF(arg0, s16, 0x10A) = (s16) ((u16) AF(arg0, s16, 0x10A) - 3);
        return 0;
    }
    AF(arg0, s16, 0x100) = 0;
    return 1;
}

s32 func_sc01_006_80180710(void) {
    return (func_sc01_006_8017DA9C() << 0x10) == 0;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180734);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8018078C);

void func_sc01_006_801807D8(void) {
    AF(D_80126B78, s16, 0x10) = 0;
}

void func_sc01_006_801807E8(u8 *arg0) {
    AF(arg0, s16, 0x10A) = 0x60;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc01_006_80180800(void) {
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180808);

void func_sc01_006_80180908(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18((s32) arg0, (s32) &D_sc01_006_801BBC4C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180974(u8 *arg0) {
    if (AF(arg0, s16, 0x100) == 0) {
        func_sc01_006_8017FBCC();
    } else {
        func_sc01_006_8017FD50((s32) arg0);
    }
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_801809F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_006_80185E38);
    }
}

void func_sc01_006_80180A30(void) {
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180A38);

s32 func_sc01_006_80180AD0(void) {
    return D_sc01_006_801CDED4 != 1;
}

void func_sc01_006_80180AE8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xD0);
    AF(temp_v1, u16, 2) = (u16) (AF(temp_v1, u16, 2) + 1);
}

void func_sc01_006_80180B04(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0xFC) = 1;
}

void func_sc01_006_80180B14(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0xFC) = 2;
}

void func_sc01_006_80180B24(u8 *arg0) {
    AF(AF(arg0, void *, 0xD0), s16, 0xFC) = 1;
}

void func_sc01_006_80180B34(u8 *arg0) {
    AF(AF(arg0, void *, 0xD0), s16, 0xFC) = 2;
}

void func_sc01_006_80180B44(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

void func_sc01_006_80180B64(u8 *arg0) {
    D_sc01_006_801BC7A4[AF(arg0, u16, 2)]();
}

void func_sc01_006_80180BA0(u8 *arg0) {
    D_sc01_006_801BC7B4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180BDC);

void func_sc01_006_80180C98(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_006_801C6B18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC4A0);
        func_80143994((s32) arg0, 0x3000);
        AF(arg0, s32, 0x1C) = 1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180D10(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC6C8;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_80180D48(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC508);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180D9C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC78C[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_80180E24(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_006_801C97C0);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC578);
        func_80143994((s32) arg0, 0x3000);
        AF(arg0, s32, 0x1C) = 1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180E9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC718;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_80180ED4(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC5E0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180F28(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC798[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_80180FB0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_006_801BC578);
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC764;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_80180FFC(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC5F8);
        AF(arg0, s32, 0x1C) = 0x28;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80181054(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC680);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_801810AC(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC5E0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80181100(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC798[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_80181188(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_006_801BC578);
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC778;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_801811D4(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC5E0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80181228(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC798[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_801812B0(u8 *arg0) {
    s16 r[4];
    s32 obj;
    s32 obj2;
    u8 *p;
    u16 *q;
    u8 t;
    u8 idx;

    if (AF(arg0, s32, 0x20) == 0) {
        AF(arg0, s32, 0x20) = func_8012C1B8();
        if (AF(arg0, s32, 0x20) == 0) {
            return;
        }
        func_8001C214(AF(arg0, s32, 0x20), D_sc01_006_801C339C[--AF(arg0, s16, 0x70)]);
        AF(arg0, s16, 0x10A) = func_800291B4(AF(arg0, s16, 0x70) + 0x63) & 0x20;
        AF(AF(arg0, void *, 0x20), void *, 0x24) = &D_sc01_006_801CD9C0;
        func_sc01_006_8018203C(arg0, AF(arg0, s16, 0x10A) != 0);
        SetScript(arg0, &D_sc01_006_801CDA10);
        func_sc01_006_801820F8(arg0);
        AF(AF(arg0, void *, 0x20), u16, 0x2C) |= 0x10;
    }
    if (AF(arg0, s32, 0xD8) == 0) {
        obj = func_8001D074(0x7E, 0x100);
        AF(arg0, s32, 0xD8) = obj;
        if (obj == 0) {
            return;
        }
        func_8001CBDC(obj, &D_sc01_006_801C39E0, 0x3E0, 0x100);
        AF(obj, u8, 0x27) = 0x8C;
        AF(obj, s16, 8) = -1;
        AF(obj, s16, 0xA) = 0x59;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        if (AF(arg0, s32, 0xD0) == 0) {
            AF(arg0, s32, 0xD0) = func_8012C1B8();
            if (AF(arg0, s32, 0xD0) == 0) {
                return;
            }
            obj2 = AF(arg0, s32, 0xD0);
            func_8001C810(obj2, &D_sc01_006_801B91B4);
            func_8001C1E4(obj2, AF(arg0, s32, 0x20));
            AF(obj2, u16, 0x2C) |= 0x10;
            AF(obj2, s16, 0xA) = 0;
            AF(obj2, s16, 0xC) = -8;
            AF(obj2, s32, 4) |= 0x70000000;
        }
        if (AF(arg0, s32, 0xD4) == 0) {
            obj = func_8012C1B8();
            AF(arg0, s32, 0xD4) = obj;
            if (obj == 0) {
                return;
            }
            func_8001C810(obj, &D_sc01_006_801B9C74);
            func_8001C1E4(obj, AF(arg0, s32, 0x20));
            AF(obj, u16, 0x2C) |= 0x10;
            AF(obj, s32, 4) |= 0x8040;
            AF(obj2, s16, 0xA) = 0;
            AF(obj, s16, 0xC) = -4;
        }
        AF(arg0, s16, 0x102) = 0;
        AF(AF(arg0, void *, 0xD8), s32, 4) |= 0x80000000;
    } else {
        s32 m = AF(arg0, s32, 0x20);
        AF(arg0, u16, 0x102) = D_sc01_006_801C3930[AF(arg0, s16, 0x70)];
        AF(m, s16, 0x18) = 0x1800;
        AF(m, s16, 0x1C) = 0x1800;
        AF(m, s16, 0x1A) = 0x1800;
    }
    idx = D_sc01_006_801C3A04[AF(arg0, s16, 0x70)];
    AF(arg0, u16, 0x100) = idx;
    p = &D_sc01_006_801C3A30 + idx * 6;
    t = *p++;
    D_800B9ABF = t;
    D_800B9B10 = t;
    t = *p++;
    D_800B9AC0 = t;
    D_800B9B11 = t;
    t = *p++;
    D_800B9AC1 = t;
    D_800B9B12 = t;
    D_800B9B13 = *p++;
    D_800B9B14 = *p++;
    D_800B9B15 = *p++;
    q = (u16 *)&D_sc01_006_801C3708 + (AF(arg0, u16, 0x100) & 6) * 2;
    r[0] = *q++;
    r[1] = *q++;
    r[2] = 0x50;
    r[3] = 0xC8;
    MoveImage(r, 0x380, 0x100);
    r[0] = *q++;
    r[1] = *q++;
    r[2] = 0x100;
    r[3] = 1;
    MoveImage(r, 0x100, 0x1E0);
    func_800183E0(D_sc01_006_801C3728[AF(arg0, s16, 0x70)]);
    AF(arg0, u16, 2)++;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8018165C);

void func_sc01_006_80181784(s32 arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    void *temp_v1;

    func_sc01_006_80181B00(arg0);
    func_sc01_006_801820F8(arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    temp_a0 = AF(temp_v1, s16, 0x10);
    if (temp_a0 != 0) {
        if (temp_a0 < 0) {
            temp_v0 = temp_a0 + 0x80;
            AF(temp_v1, s16, 0x10) = temp_v0;
            if ((temp_v0 << 0x10) > 0) {
                goto block_5;
            }
        } else {
            temp_v0_2 = temp_a0 - 0x80;
            AF(temp_v1, s16, 0x10) = temp_v0_2;
            if ((s16) (temp_v0_2) < 0) {
block_5:
                AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
            }
        }
    }
    temp_a0_2 = AF(AF(arg0, void *, 0x20), s16, 0x12);
    if (temp_a0_2 != 0) {
        if (temp_a0_2 < 0) {
            temp_v0_3 = temp_a0_2 + 0x80;
            AF(AF(arg0, void *, 0x20), s16, 0x12) = temp_v0_3;
            if ((temp_v0_3 << 0x10) > 0) {
                goto block_12;
            }
        } else {
            temp_v0_4 = temp_a0_2 - 0x80;
            AF(AF(arg0, void *, 0x20), s16, 0x12) = temp_v0_4;
            if ((s16) (temp_v0_4) < 0) {
block_12:
                AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
            }
        }
    }
    if ((s32) AF(AF(arg0, void *, 0x20), s32, 0x10) == 0) {
        AF(arg0, s32, 0x1C) = 0x50;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80181894);

void func_sc01_006_80181B00(s32 arg0) {
    MtxDCM m;
    SV8 v;
    s32 trig;
    s32 held;
    s32 snd;

    if (AF(arg0, s16, 0xFC) != 0 && AF(arg0, u16, 2) == 1) {
        trig = func_800149E0(0);
        held = func_80014B10(0);
    } else {
        trig = 0;
        held = 0;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        if (held & 0x1000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) += 0x40) > 0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
            }
        }
        if (held & 0x4000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) -= 0x40) < -0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = -0x300;
            }
        }
        if (held & 0x8000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x12) -= 0x40) < -0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x300;
            }
        }
        if (held & 0x2000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x12) += 0x40) > 0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x300;
            }
        }
    } else {
        if (AF(arg0, s16, 0x106) != 0) {
            if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
                func_sc01_006_8018203C(arg0, 1);
                SetScript(arg0, (s32) &D_sc01_006_801CDA10);
                func_sc01_006_801820F8(arg0);
                AF(arg0, s16, 0x106) = 0;
            }
        }
        if (held & 0x1000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) += 0x40) > 0x380) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x380;
            }
        }
        if (held & 0x4000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) -= 0x40) < -0x380) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = -0x380;
            }
        }
        if (held & 0x8000) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) -= 0x40;
        }
        if (held & 0x2000) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) += 0x40;
        }
        if (held & 0xC) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x18) += 0x80) > 0x1800) {
                AF(AF(arg0, void *, 0x20), s16, 0x18) = 0x1800;
            }
        }
        if (held & 3) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x18) -= 0x80) < 0x1000) {
                AF(AF(arg0, void *, 0x20), s16, 0x18) = 0x1000;
            }
        }
        if ((trig & 0x80) && AF(arg0, s16, 0x106) == 0) {
            func_sc01_006_8018203C(arg0, 2);
            SetScript(arg0, (s32) &D_sc01_006_801CDA10);
            func_sc01_006_801820F8(arg0);
            AF(arg0, s16, 0x106) = 1;
            {
                s16 id = D_sc01_006_801C3880[AF(arg0, s16, 0x70)];
                if (id != 0) {
                    func_8002D4C8((u16) id, 0);
                }
            }
        }
        if ((trig & 0x40) && AF(arg0, s16, 0x106) == 0) {
            func_sc01_006_8018203C(arg0, 3);
            SetScript(arg0, (s32) &D_sc01_006_801CDA10);
            func_sc01_006_801820F8(arg0);
            AF(arg0, s16, 0x106) = 1;
            {
                s16 id = D_sc01_006_801C38D8[AF(arg0, s16, 0x70)];
                if (id != 0) {
                    func_8002D4C8((u16) id, 0);
                }
            }
        }
        if (trig & 0x100) {
            AF(AF(arg0, void *, 0xD8), s32, 4) ^= 0x80000000;
        }
    }
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = AF(AF(arg0, void *, 0x20), s16, 0x1C) = AF(AF(arg0, void *, 0x20), s16, 0x18);
    RotMatrixYXZ(AF(arg0, u8 *, 0x20) + 0x10, &m);
    TransposeMatrix(&m, AF(arg0, u8 *, 0x20) + 0x34);
    v.x = 0;
    v.y = (AF(arg0, s16, 0x102) * AF(AF(arg0, void *, 0x20), s16, 0x18)) >> 12;
    v.z = 0;
    ApplyMatrixSV(AF(arg0, u8 *, 0x20) + 0x34, &v, &v);
    AF(arg0, s16, 6) = -v.x;
    snd = AF(arg0, u16, 0xFA) - 0x400;
    AF(arg0, s16, 0xA) = snd - v.y;
    AF(arg0, s16, 0xE) = -v.z;
    func_8012B260(arg0);
}

void func_sc01_006_80182000(u8 *arg0) {
    D_sc01_006_801C3A5C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8018203C);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801820F8);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80182240);

void func_sc01_006_801822B0(u8 *arg0) {
    s16 *temp_a0;
    s16 *temp_v0;
    s16 *temp_v1;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16 *, 0xD0);
    temp_v1 = AF(arg0, s16 *, 0xD4);
    temp_a0 = AF(arg0, s16 *, 0xD8);
    if (temp_v0 != NULL) {
        *temp_v0 = 0;
    }
    if (temp_v1 != NULL) {
        *temp_v1 = 0;
    }
    if (temp_a0 != NULL) {
        *temp_a0 = 0;
    }
    temp_a0_2 = AF(arg0, s32, 0xB0);
    if (temp_a0_2 != 0) {
        func_80139914(temp_a0_2);
    }
    func_8012C218((s32) arg0);
}

s32 func_sc01_006_80182324(s32 arg0, s32 arg1) {
    func_8017303C((s32) &D_sc01_006_801CA6EC);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &D_80126B58);
}
