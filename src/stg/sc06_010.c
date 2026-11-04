#include "common.h"
#include "gte.h"
#include "psyq.h"
extern void (*D_sc06_010_801A72B4[])();
extern void (*D_sc06_010_801A723C[])();
extern void (*D_sc06_010_801A71B4[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_010_8017BE9C(void) {
}

void func_sc06_010_8017BEA4(void) {
}

void func_sc06_010_8017BEAC(void) {
}

void func_sc06_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc06_010_8018A410[])();
extern void (*D_sc06_010_8018A448[])();
extern void (*D_sc06_010_8018A54C[])();
void func_sc06_010_8017E424(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_010_8018A554[])();
void func_sc06_010_8017E44C(void);
extern void func_800D1EBC();
extern u8 D_sc06_010_8018A560;
extern void func_8016EE40();
extern u8 D_sc06_010_8018A564;
extern void func_sc06_010_8017E510();
extern void (*D_sc06_010_8018A570[])();
extern void func_sc06_010_80180A88();
extern void (*D_sc06_010_801A4C5C[])();
extern void (*D_sc06_010_801A4C7C[])();
extern void (*D_sc06_010_801A6A30[])();
extern void (*D_sc06_010_801AEF60[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern s32 D_sc06_010_80186D1C[];
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc06_010_801AEC50;
extern s32 * func_sc06_010_801868AC();
extern s32 D_sc06_010_801AECB8[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc06_010_801AEE84;
extern s32 D_sc06_010_801AEE88;
extern s32 D_sc06_010_801AEE9C;
extern s32 D_sc06_010_801AEEB0;
extern s32 D_sc06_010_801AEF1C;
extern s32 D_sc06_010_801AEE00[];
extern s32 D_sc06_010_801AED7C[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc06_010_80186654();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc06_010_801AEF88[])();
extern u8 D_sc06_010_801AEC84;
extern u8 D_sc06_010_801AF428;
extern u8 D_sc06_010_801AF648;
extern s32 func_8002D4C8();
extern u8 D_sc06_010_801AF438;
extern u8 D_sc06_010_801AF540;

extern u8 D_sc06_010_8018A3DC;
extern void (*D_sc06_010_8018A404[])();
extern void StartRumbleScript();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern s32 func_sc06_010_8017D748();
extern s32 func_80147324();
extern s32 func_80146CA0();
extern void func_80147364();
extern void func_8014BC44();
extern s32 func_80151664();
extern s8 D_sc06_010_801B203B;
extern u8 D_sc06_010_801B2028[];
extern s32 func_80146C3C();
extern void func_80146E90();
extern void func_801495C4();
extern s32 func_80146E98();
extern void func_sc06_010_8017DD68();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_8012C098();
extern void func_80016714();
extern void func_sc06_010_80181408();
extern void (*D_sc06_010_801A4C30[])();
extern s32 func_8012C044();
extern void func_8002A04C();
extern void func_sc06_010_80181234();
extern void func_80131E00();
extern s32 func_80143C74();
extern s32 func_8012BEE8();
extern void func_801319E0();
extern s32 func_8012CBF4();
extern void func_80131C78();
extern void func_8012B370();
extern void func_8012AD80();
extern u8 D_800D3918;
extern u8 D_sc06_010_801A4C48;
extern u8 D_sc06_010_801A4C54;
extern void func_8012B14C();
extern s32 func_8012D5E4();
extern s32 D_sc06_010_801B2B08;
extern s32 func_8012C588();
extern u8 D_sc06_010_801AE660;
extern u8 D_sc06_010_801AE760;
extern u8 D_sc06_010_801AE860;
extern void func_8001C214();
extern void func_8012B23C();
extern u8 D_sc06_010_801A71E8;
extern u8 D_sc06_010_801A721C;
extern u8 D_sc06_010_801AC120;
extern void func_8012B030();
extern u8 D_sc06_010_801A7260;
extern u8 D_sc06_010_801A7294;
extern u8 D_sc06_010_801ACE8C;

extern void func_8002931C();
extern void (*D_sc06_010_8018B10C[])();
extern void func_sc06_010_8017F278();


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
extern s32 func_8012ADE4();

extern u8 D_sc06_010_8018AFD8;
extern u8 D_sc06_010_8018B00C;
extern u8 D_sc06_010_801A654C;
extern u8 D_sc06_010_801A6824;
extern u8 D_sc06_010_801A683C;
extern void func_80143970();
extern void func_8012B200();
extern s32 func_8012C1B8();


extern s16 D_800B9A08;
extern u8 D_sc06_010_8018A3E4;
extern s32 func_801511E0();
extern s32 func_80154274();
extern s32 func_80149020();
s32 func_sc06_010_8017D97C();
extern u8 D_sc06_010_801A691C;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc06_010_801B253C[4];
extern CV D_sc06_010_801B255C;
extern CV D_sc06_010_801B2560;
extern u8 D_sc06_010_801B2564;
extern u8 D_sc06_010_801B2565;
extern u8 D_sc06_010_801B2566;
extern u8 D_sc06_010_801B2568;
extern u8 D_sc06_010_801B2569;
extern u8 D_sc06_010_801B256A;
extern s32 D_sc06_010_801B256C;
extern void func_80013F3C();
extern void func_80017714();
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 func_8012913C();
extern void *D_801151D4;
extern u8 D_sc06_010_801AE4C8;
extern u8 D_sc06_010_801AE550;
extern u8 D_sc06_010_801AE5D8;
extern s32 D_sc06_010_801A7008[];


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
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
extern void func_sc06_010_8017E5CC();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern u8 D_sc06_010_801B203C;
extern s32 func_sc06_010_8017DC28();

extern s32 func_80133784();
extern s32 func_sc06_010_801810FC();
extern s32 func_8012B1B4();
extern s32 func_8012CBCC();
extern s32 func_8012B8E4();
extern s32 D_80126B60;
extern u8 D_sc06_010_801A69DC;
extern u8 D_sc06_010_801A71A4;
extern u8 D_sc06_010_801AE960;
extern u8 D_sc06_010_801AEA50;
extern u8 D_sc06_010_801AEB40;
extern s32 func_sc06_010_80182F4C();

extern u8 D_sc06_010_801A4AFC;
extern u8 D_sc06_010_801A4B30;

extern void func_8012B2CC();
extern u8 D_sc06_010_801A4C64;
extern u8 D_sc06_010_801A7124;
extern void func_8016AA50();
extern void func_8016B428();
extern void func_8002A520();
extern void func_8002A790();
extern u8 D_sc06_010_801A7048;
extern u8 D_sc06_010_801A7068;
extern u8 D_sc06_010_801A7088;
extern u8 D_sc06_010_801A7090;
extern u8 D_sc06_010_801A7144;
extern u8 D_sc06_010_801A7184;
extern u8 D_sc06_010_801AB3B0;


extern u8 D_sc06_010_801A4BF8;
extern u8 D_sc06_010_801A4C00;
extern u8 D_sc06_010_801A4C08;
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_801152A8;
extern u8 D_sc06_010_801A69F8;
extern WMtx *D_sc06_010_801A6A2C;
extern WMtx D_sc06_010_801B2AE8[];
extern void func_80017DC4();
extern void func_80017E68();
extern s32 func_80134510();
extern s8 D_sc06_010_801A69E4[];
extern void func_80017758();
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern s32 func_8012BE54();
extern void func_801292C8();
extern u16 D_80126B96;
extern s16 D_801270C0;
extern u8 D_sc06_010_801A7098;
extern u8 D_sc06_010_801A70A4;
extern void func_80128EA8();
extern void func_8012931C();
extern void func_80128ED8();
extern s32 func_8012D664();




extern void func_sc06_010_8017F10C();


typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void func_800233CC();
extern s32 func_801465C0();
extern void func_8001CD9C();
extern void func_80015978();
extern SV8 D_sc06_010_8018A45C[];
extern CV *D_sc06_010_8018A440[];

extern void func_80146A6C();
extern void func_80159B3C();
extern void func_80165718();

extern s16 D_80126B66;
extern u8 D_sc06_010_8018B0D4;
extern u8 D_sc06_010_8018B0DC;
extern u8 D_sc06_010_8018B0E4;


typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;


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
extern void func_80178BF8();
extern s32 func_8012BDBC();
extern s32 func_80135888();
extern void *D_80126B78;
extern void func_80172710();
extern SV8 D_sc06_010_801AEF78[];


extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_010_8017BEBC(u8 *obj) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    B8 v[3];
    B8 v4;
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
    u32 x, y, z;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl, zh, zl;
    s32 type;
    u8 *d;
    u8 *a, *b, *d3;
    u32 *t;
    s32 v0;
    u32 col;
    s32 zz;

    if (AF(obj, s32, 0) != 0) return;
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
        x = c->x;
        y = c->y;
        z = c->z;
        xl = x; xh = x >> 16;
        yl = y; yh = y >> 16;
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
            v[0] = *(B8 *)a;
            v[1] = *(B8 *)b;
            v[2] = *(B8 *)d3;
            gte_ldv3c(v);
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
                zz = g.z;
                t = (u32 *)poly[0];
                v0 = 0x80 - (zz - 400) / 24;
                if (v0 < 0) v0 = 0;
                col = v0 | (v0 << 8) | (v0 << 16);
                AF(pk, u32, 4) = (t[0] & 0xFF000000) | col;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                { u32 msk = 0xFFFFFF;
                *(u32 *)pk = (*otp & msk) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & msk); }
                pk += 0x20;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                v4 = *(B8 *)d;
                gte_ldv0(&v4);
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
                zz = g.z;
                t = (u32 *)poly[0];
                v0 = 0x80 - (zz - 400) / 24;
                if (v0 < 0) v0 = 0;
                col = v0 | (v0 << 8) | (v0 << 16);
                AF(pk, u32, 4) = (t[0] & 0xFF000000) | col;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                { u32 msk = 0xFFFFFF;
                *(u32 *)pk = (*otp & msk) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & msk); }
                pk += 0x28;
                break;
            }
            }
        }
    }
    g_PrimNext = pk;
}

s32 func_sc06_010_8017CA80(s32 arg0) {
    s32 sp10[8];
    s32 temp_v0;

    GsInitCoordinate2(0, arg0);
    temp_v0 = GsGetLw(arg0, (s32) sp10);
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
    return temp_v0;
}

void func_sc06_010_8017CAD4(u8 *obj, u8 *hdr, void *coord) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    B8 v[3];
    B8 v4;
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 abr; /* PORT NOTE: read before set, as the original */
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
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
    u8 *d;
    u8 *a, *b, *d3;
    u32 *t;
    s32 v0;
    u32 col;
    s32 zz;

    if (AF(obj, s32, 0) != 0) return;
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(coord, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    c = (ChunkDCM *)(hdr + 0x14);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        x = c->x;
        y = c->y;
        z = c->z;
        xl = x; xh = x >> 16;
        yl = y; yh = y >> 16;
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
            v[0] = *(B8 *)a;
            v[1] = *(B8 *)b;
            v[2] = *(B8 *)d3;
            gte_ldv3c(v);
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
                if (type == 7) g.z = m + 0x40;
                zz = g.z;
                t = (u32 *)poly[0];
                v0 = 0x80 - (zz - 400) / 24;
                if (v0 < 0) v0 = 0;
                col = v0 | (v0 << 8) | (v0 << 16);
                AF(pk, u32, 4) = (t[0] & 0xFF000000) | col;
                AF(pk, u32, 0xC) = t[1] + (abr << 22);
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                { u32 msk = 0xFFFFFF;
                *(u32 *)pk = (*otp & msk) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & msk); }
                pk += 0x20;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                v4 = *(B8 *)d;
                gte_ldv0(&v4);
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
                if (type == 3) g.z = zb + 0x40;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                zz = g.z;
                t = (u32 *)poly[0];
                v0 = 0x80 - (zz - 400) / 24;
                if (v0 < 0) v0 = 0;
                col = v0 | (v0 << 8) | (v0 << 16);
                AF(pk, u32, 4) = (t[0] & 0xFF000000) | col;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                { u32 msk = 0xFFFFFF;
                *(u32 *)pk = (*otp & msk) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & msk); }
                pk += 0x28;
                break;
            }
            }
        }
    }
    g_PrimNext = pk;
}

void func_sc06_010_8017D6A0(u8 *arg0) {
    StartRumbleScript((s32) &D_sc06_010_8018A3DC);
    D_sc06_010_8018A404[AF(arg0, u16, 2)](arg0);
}

void func_sc06_010_8017D6F8(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc06_010_8017D748(arg0);
    func_80147324(0x92F);
    func_80146CA0(arg0);
}

s32 func_sc06_010_8017D748(s32 arg0) {
    if (D_800B9A08 == 0x3083) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 8);
    }
    func_80147324(0x451);
    func_801511E0(arg0);
    func_80154274(arg0, (s32) &D_sc06_010_8018A3E4);
    func_80149020(arg0);
    AF(arg0, u8, 0xDE) = 0xA;
    AF(arg0, u8, 0xDF) = 0;
    func_sc06_010_8017D97C();
    return func_80146CA0(arg0);
}

void func_sc06_010_8017D7CC(u8 *o) {
    SV8 v;
    s32 k;
    s32 r0;
    s32 r1;
    s32 r2;
    u8 t;

    func_80015978(o + 4, &v);
    v.y -= 0x40;
    while (k < 3) {
        k = func_sc06_010_8017D9A0();
        if (k >= 0) {
            func_80146A6C(0x51, o, v.x, v.y, v.z, k, 1);
            r0 = rand();
            r1 = rand();
            r2 = rand();
            func_80146A6C(0x52, o, 0, -0x20, 0x10, (s16)((r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (r2 & 3) * 0x44), 1);
        }
    }
    t = AF(o, u8, 0xDE);
    AF(o, u8, 0xDE) = t + 0xFF;
    if (t == 0) {
        func_sc06_010_8017D928(o);
        func_80159B3C(o);
        func_80165718(o);
    }
}

s32 func_sc06_010_8017D928(s32 arg0) {
    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc06_010_8017D97C(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc06_010_801B203B;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc06_010_8017D9A0(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc06_010_801B2028; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc06_010_8017D9E4(u8 *arg0) {
    D_sc06_010_8018A410[AF(arg0, u16, 2)]();
}

void func_sc06_010_8017DA20(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc06_010_801B203C;
    e = (u8 *)func_801465C0();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        func_800233CC(p, 0x10);
        func_sc06_010_8017DC14(p);
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
        func_sc06_010_8017DBE4(o);
    }
}

void func_sc06_010_8017DB6C(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc06_010_801B203C;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc06_010_8017DC28((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc06_010_8017DBE4((s32) arg0);
}

s32 func_sc06_010_8017DBE4(s32 arg0) {
    D_sc06_010_801B2028[AF(arg0, s32, 0x2C)] = 0;
    return func_80146C3C(arg0);
}

void func_sc06_010_8017DC14(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc06_010_8017DC28(u8 *o, u8 *p) {
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

void func_sc06_010_8017DC90(u8 *arg0) {
    D_sc06_010_8018A448[AF(arg0, u16, 2)]();
}

void func_sc06_010_8017DCCC(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    func_80146E90((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_010_8017DD18(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_sc06_010_8017DD68(arg0);
}

void func_sc06_010_8017DD60(void) {
}

void func_sc06_010_8017DD68(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc06_010_8018A440[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    func_80015978(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc06_010_8018A45C[i];
            AF(o, s16, 0x12) = i + j;
            func_sc06_010_8017DECC(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

void func_sc06_010_8017DECC(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
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
    d = D_sc06_010_801B253C;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc06_010_801B256C = 0x50000000;
        D_sc06_010_801B2564 = 0;
        D_sc06_010_801B2565 = 0;
        D_sc06_010_801B2566 = 0;
        D_sc06_010_801B2568 = 0;
        D_sc06_010_801B2569 = 0;
        D_sc06_010_801B256A = 0;
    }
    D_sc06_010_801B255C = arg7[0];
    D_sc06_010_801B2560 = arg7[1];
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

void func_sc06_010_8017E248(void) {
    func_8002931C(0x01A40000);
}

void func_sc06_010_8017E268(u8 *arg0) {
    D_sc06_010_8018A54C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_010_8017E2A4(u8 *arg0) {
    func_sc06_010_8017E424();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_010_8017E2E8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_010_8017E30C(u8 *arg0) {
    D_sc06_010_8018A554[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_010_8017E348(u8 *arg0) {
    func_sc06_010_8017E44C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_010_8017E388(u8 *arg0) {
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

void func_sc06_010_8017E404(void) {
    func_800D1EBC();
}

void func_sc06_010_8017E424(void) {
    func_8016EE40((s32) &D_sc06_010_8018A560, 0x01000000);
}

void func_sc06_010_8017E44C(void) {
    func_8016EE40((s32) &D_sc06_010_8018A564, 0x01000000);
}

void func_sc06_010_8017E474(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_80126968 = 0x71;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_010_8017E510, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_010_8017E510((s32) &D_80126948);
}

void func_sc06_010_8017E510(s32 arg0) {
    D_sc06_010_8018A570[AF(arg0, u8, 4)]();
}

extern SV8 D_80126940;
void func_sc06_010_8017E54C(u8 *o) {
    SV8 v;

    v = D_80126940;
    v.x = 0;
    if (v.y >= -0x2CF) {
        v.y = -0x2D0;
    }
    if (v.z < 0x340) {
        v.z = 0x340;
    }
    func_sc06_010_8017E5CC(o, &v);
}

void func_sc06_010_8017E5CC(u8 *arg0, u8 *arg1) {
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

typedef struct { u16 id; u16 b; u16 kind; u16 flag; } E8;
extern V3 D_80126B5C;
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s32 D_80126B64;
extern u8 D_801202A0[];
extern E8 D_sc06_010_8018A59C[];
extern void func_8012F568();
extern void func_8012F0BC();
extern void func_8012F1A4();
extern s32 ratan2();

static inline void xf(u8 *m, V3 *d, V3 *e) {
    V3 f;
    func_8012F0BC(AF(m, u8 *, 0x20) + 0x34, d, &f);
    func_8012B2CC(m);
    func_8012F1A4(AF(m, u8 *, 0x20) + 0x34, &f, e);
}

void func_sc06_010_8017E764(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;
    V3 d;
    V3 e;
    s16 r;
    s32 ang;
    s32 z;
    s32 i;
    s32 j;
    s32 k;
    s32 row;
    s32 s;
    s32 tmp;
    s32 flag;
    u8 *m;
    u8 *p;
    SV8 *q;
    u16 *w;

    i = D_80126B66;
    z = i - 0x44E;
    if ((u32)z >= 0x32C5) {
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84) = 0;
            func_8002D4C8(4, 0x931);
        }
    } else {
        AF(o, s16, 0x84) = 1;
        if (i < 0x5CE) {
            func_8002D4C8(0x931, ((z * 0x7F) / 0x180 | 0x1000) & 0xFFFF);
        } else if (i >= 0x3593) {
            func_8002D4C8(0x931, (((i - 0x3592) * 0x7F) / 0x180 | 0x1000) & 0xFFFF);
        } else {
            func_8002D4C8(0x931, 0x107F);
        }
    }
    if (AF(o, u16, 2) == 0) {
        w = &D_sc06_010_8018A59C[0].flag;
        for (i = 0; i < 320; i++) {
            *w = 100;
            w += 4;
        }
        AF(o, s32, 0xCC) = func_8012C658(0x238, 10, o);
        AF(o, u16, 2)++;
        AF(o, u16, 0xE) += 0x5F0;
    }
    p = D_801202A0;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = *(s16 *)((u8 *)&D_80126B5C.z + 2) + 8;
    tmp = (ratan2(D_80126B62 - AF(o, s16, 0xA), D_80126B5E - AF(o, s16, 6)) - 0x400) & 0xFFF;
    r = tmp;
    b.x = a.x - (rsin(tmp) >> 3);
    b.y = a.y + (rcos(tmp) >> 3);
    b.z = a.z;
    ang = tmp;
    m = AF(o, u8 *, 0xCC);
    AF(m, s16, 0x5C) = 0;
    for (i = 0, q = (SV8 *)&D_801152A8; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0x238 && (s = AF(p, u16, 0x34)) == 1) {
            if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0) {
                flag = 0;
                AF(m, s16, 0x5C) = 0x4C08;
                if (AF(m, u8, 0x74) != 0) {
                    AF(o, s32, 0xDC) = s;
                    if (AF(p, s16, 0x70) == 0) {
                        c.x = D_80126B5E;
                        c.y = D_80126B62;
                        c.z = D_80126B66;
                        q->x = -q->x;
                        q->y = -q->y;
                        q->z = -q->z;
                        func_8012F568(1, 0x4018, 0, 0x20, &c, q);
                    }
                    row = D_80126B66 - AF(o, s16, 0xE) + 0x98;
                    row = row / 304;
                    switch (D_sc06_010_8018A59C[row * 8].kind) {
                    case 0:
                        AF(AF(m, u8 *, 0x20), s16, 0x14) = r;
                        break;
                    case 1:
                        AF(AF(m, u8 *, 0x20), s16, 0x14) += 0x10;
                        AF(AF(m, u8 *, 0x20), s16, 0x14) &= 0xFFF;
                        flag = 1;
                        break;
                    case 2:
                        AF(AF(m, u8 *, 0x20), s16, 0x14) -= 0x10;
                        AF(AF(m, u8 *, 0x20), s16, 0x14) &= 0xFFF;
                        flag = 1;
                        break;
                    }
                } else {
                    AF(AF(m, u8 *, 0x20), s16, 0x14) = r;
                }
                AF(m, s32, 4) = AF(o, s32, 4) - rsin(AF(AF(m, u8 *, 0x20), s16, 0x14)) * 0x1A40;
                AF(m, s32, 8) = AF(o, s32, 8) + rcos(AF(AF(m, u8 *, 0x20), s16, 0x14)) * 0x1A40;
                AF(m, s32, 0xC) = D_80126B5C.z;
                if (flag != 0) {
                    d.x = D_80126B5C.x;
                    d.y = D_80126B5C.y;
                    d.z = D_80126B5C.z;
                    xf(m, &d, &e);
                    D_80126B5C.x = e.x;
                    D_80126B60 = e.y;
                    AF(AF(m, u8 *, 0x20), s16, 0x14) = r;
                    AF(m, s32, 4) = AF(o, s32, 4) - rsin(AF(AF(m, u8 *, 0x20), s16, 0x14)) * 0x1A40;
                    AF(m, s32, 8) = AF(o, s32, 8) + rcos(AF(AF(m, u8 *, 0x20), s16, 0x14)) * 0x1A40;
                    func_8012B2CC(m);
                }
                if (AF(o, s32, 0xDC) != 0) {
                    i = D_80126B5E - AF(o, s16, 6);
                    row = D_80126B62 - AF(o, s16, 0xA);
                    if (i * i + row * row > 0x14D10) {
                        D_80126B5C.x = AF(o, s32, 4) - rsin(ang) * 0x1240;
                        D_80126B60 = AF(o, s32, 8) + rcos(ang) * 0x1240;
                    }
                }
            }
        }
        p += 0x10C;
    }
    if (AF(m, u16, 0x5C) == 0) {
        AF(o, s32, 0xDC) = 0;
    }
    AF(o, u16, 0xFC) = (AF(o, u16, 0xFC) + 0x10) & 0xFFF;
    i = D_80126B66 - AF(o, s16, 0xE);
    row = i / 304;
    row -= 2;
    w = (u16 *)&D_sc06_010_8018A59C[row * 8];
    for (j = 0; j < 7; j++, row++) {
        if ((u32)row < 40) {
            for (k = 0; k < 8; k++) {
                w += 3;
                if (*w == 100) {
                    w -= 3;
                    p = (u8 *)func_8012C658(0x238, *w, o);
                    if (p == 0) {
                        return;
                    }
                    AF(p, u16 *, 0xCC) = w;
                    w += 3;
                }
                *w = row;
                w++;
            }
        } else {
            w += 32;
        }
    }
}

void func_sc06_010_8017EE3C(u8 *o) {
    u16 *p;
    u8 unused[0x10];
    p = AF(o, u16 *, 0xCC);
    p += 3;
    if (*p == 200) {
        *p = 100;
        func_8012C218();
        return;
    }
    if (AF(o, u16, 0x34) == 0) {
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        p -= 3;
        if (*p != 1) {
            AF(o, s16, 0x34) += 1;
        } else {
            AF(o, s16, 0x34) += 2;
        }
        p += 3;
    }
    p--;
    switch (*p) {
    case 0:
        p--;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = *p;
        break;
    case 1:
        p--;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(AF(o, u8 *, 0x64), u16, 0xFC) + *p;
        AF(AF(o, u8 *, 0x20), u16, 0x14) &= 0xFFF;
        break;
    case 2:
        p--;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = *p + 0x1000 - AF(AF(o, u8 *, 0x64), u16, 0xFC);
        AF(AF(o, u8 *, 0x20), u16, 0x14) &= 0xFFF;
        break;
    }
    p += 2;
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4) - rsin(AF(AF(o, u8 *, 0x20), s16, 0x14)) * 0x1200;
    AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8) + rcos(AF(AF(o, u8 *, 0x20), s16, 0x14)) * 0x1200;
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC) + ((*p * 19) << 20);
    *p = 200;
}

extern void (*D_sc06_010_8018AFBC[])();
void func_sc06_010_8017F024(u8 *o) {
    D_sc06_010_8018AFBC[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) != 0) {
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_8012B2CC(o);
    }
}

extern u8 D_801202A0[];
s32 func_sc06_010_8017F098(s32 a) {
    u8 *p;
    s32 i;

    p = D_801202A0;
    for (i = 0; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0x237) {
            if (!(a & 1)) {
                return AF(p, s16, 0xFC);
            }
            return (0x1000 - AF(p, u16, 0xFC)) & 0xFFF;
        }
        p += 0x10C;
    }
    return -1;
}

void func_sc06_010_8017F10C(u8 *o, s32 id0) {
    s32 id = id0;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
    pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    RotTransPers(&pos, &sxy, &p, &flag);
    if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
        s32 x = ((s16 *)&sxy)[0];
        s32 t = AF(o, s16, 0xE) - 0x680;
        s32 a = D_80126B66 - t;
        if ((u32)a < 0x901) {
            a = (a * 0x7F) / 0x900;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8;
            func_8002D4C8((u16)id, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
}

void func_sc06_010_8017F278(u8 *o) {
    u8 *q;
    if (AF(o, u16, 0) == 0) return;
    if (AF(o, s16, 0x84) == 0) {
        func_sc06_010_8017F10C(o, 0x849);
        AF(o, s16, 0x84) = 10;
    } else {
        AF(o, s16, 0x84)--;
    }
    AF(o, s16, 0xFC) += 0x280;
    AF(o, s16, 0xFE) -= 0x280;
    if (AF(o, u16, 0) == 0) return;
    q = AF(o, u8 *, 0xCC);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
    q = AF(o, u8 *, 0xD0);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_010_8017F438(u8 *o) {
    u8 *q;
    s16 a;
    s32 b;
    a = AF(o, s16, 6);
    b = AF(o, s16, 0xA) + 0x482;
    if (a * a + b * b > 0x1323F) {
        func_8012ADE4(o);
        AF(o, s32, 0x14) = 0;
    }
    func_8002D4C8(0xB32, 0);
    if (AF(o, u16, 0) == 0) return;
    q = AF(o, u8 *, 0xCC);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
    q = AF(o, u8 *, 0xD0);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_010_8017F600(u8 *o) {
    SV8 v;
    u8 *pl = D_801151D4;
    u8 *c;
    u8 *q;
    s16 a;
    s32 b;
    if (AF(o, u16, 0) == 0) return;
    a = AF(o, s16, 6);
    b = AF(o, s16, 0xA) + 0x482;
    if (a * a + b * b > 0x1323F) {
        func_8012ADE4();
        AF(o, s32, 0x14) = 0;
    }
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
    if (AF(o, u16, 0) == 0) return;
    q = AF(o, u8 *, 0xCC);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
    q = AF(o, u8 *, 0xD0);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_010_8017F978(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    s32 temp_v0_3;

    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = func_80143C74((s32) arg0, 0);
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
        temp_v0_2 = (s16) AF(arg0, u16, 6);
        temp_v0_3 = (s16) AF(arg0, u16, 0xA) + 0x482;
        if (((temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3)) > 0x1323F) {
            func_8012ADE4((s32) arg0);
            AF(arg0, s32, 0x14) = 0;
        }
        func_sc06_010_8017F278((s32) arg0);
    }
}

void func_sc06_010_8017FAAC(u8 *o) {
    u8 *q;
    s16 a;
    s32 b;
    AF(o, s32, 0x10) >>= 1;
    AF(o, s32, 0x18) >>= 1;
    a = AF(o, s16, 6);
    b = AF(o, s16, 0xA) + 0x482;
    if (a * a + b * b > 0x1323F) {
        func_8012ADE4(o);
        AF(o, s32, 0x14) = 0;
    }
    if (AF(o, u16, 0) == 0) return;
    q = AF(o, u8 *, 0xCC);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
    q = AF(o, u8 *, 0xD0);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_010_8017FC80(u8 *o) {
    u8 *q;
    s16 a;
    s32 b;
    a = AF(o, s16, 6);
    b = AF(o, s16, 0xA) + 0x482;
    if (a * a + b * b > 0x1323F) {
        func_8012ADE4();
        AF(o, s32, 0x14) = 0;
    }
    if (AF(o, u16, 0) == 0) return;
    q = AF(o, u8 *, 0xCC);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
    q = AF(o, u8 *, 0xD0);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_010_8017FE3C(u8 *o) {
    V3 v;
    s32 d;
    s32 r;
    s16 h;
    s16 y;
    s16 a;
    s32 b;

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
    a = AF(o, s16, 6);
    b = AF(o, s16, 0xA) + 0x482;
    if (a * a + b * b > 0x1323F) {
        func_8012ADE4(o);
        AF(o, s32, 0x14) = 0;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = func_8012BE98(o, o + 0x88)) > 0x3FFFF) {
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
        if ((d = func_8012BE98(o, o + 0x88)) > 0x3FFFF) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = func_8012B744(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(o, s32, 0xDC) >>= 1;
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = func_8012BE98(o, o + 0x88);
        AF(o, s32, 0xDC) *= 2;
        if (d > 0x40000) {
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

void func_sc06_010_80180170(u8 *o) {
    V3 v;
    s32 r;
    s32 px = D_80126B60;
    if (AF(o, s32, 8) >= px - 0x200000) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (AF(o, s32, 8) <= px - 0x180000) {
        if (AF(o, s32, 0x48) <= 0) {
            AF(o, s32, 0x48) = 0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    }
    AF(o, s32, 0xDC) >>= 1;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0xDC);
    func_8012B1B4(o, &v);
    func_8012CBCC(o);
    if (AF(o, s16, 6) * AF(o, s16, 6) + (AF(o, s16, 0xA) + 0x482) * (AF(o, s16, 0xA) + 0x482) > 0x1323F) {
        func_8012ADE4(o);
        AF(o, s32, 0x14) = 0;
    }
    r = func_8012B8E4(o, 0x10);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += r;
    AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x100) = 5;
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_010_801802E0(u8 *o) {
    SV8 v;
    u8 *p;
    s16 n;
    if (AF(o, s32, 0x1C) == 0) {
        n = AF(o, u16, 0x100) - 1;
        AF(o, s16, 0x100) = n;
        if (n == 0) {
            AF(o, s16, 2) = 1;
            AF(o, s16, 0x100) = 0x3C;
            return;
        }
        AF(o, s32, 0x1C) = (n == 1) ? 0x3C : 3;
        func_sc06_010_801829FC(o, &D_sc06_010_8018B0D4);
        p = (u8 *)func_8012C588(0x260, o);
        if (p != 0) {
            func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc06_010_8018B0DC, &v);
            AF(p, s16, 6) = v.x;
            AF(p, s16, 0xA) = v.y;
            AF(p, s16, 0xE) = v.z;
            func_8012B370(p);
            func_8012C658(0x261, 0, p);
        }
        p = (u8 *)func_8012C588(0x260, o);
        if (p != 0) {
            func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc06_010_8018B0E4, &v);
            AF(p, s16, 6) = v.x;
            AF(p, s16, 0xA) = v.y;
            AF(p, s16, 0xE) = v.z;
            func_8012B370(p);
            func_8012C658(0x261, 1, p);
        }
        func_sc06_010_8017F10C(o, 0x84A);
    } else {
        AF(o, s32, 0x1C)--;
    }
}

void func_sc06_010_80180450(u8 *arg0) {
    D_sc06_010_8018B10C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc06_010_8017F278((s32) arg0);
    }
}

extern void func_8001C2C4();
extern u8 D_sc06_010_8018AFAC;
extern u8 D_sc06_010_8018AF9C;
extern u8 *D_sc06_010_8018A574[];
void func_sc06_010_801804B0(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    if (AF(o, s16, 0x70) == 10) {
        func_8001C2C4(t);
        AF(o, s32, 0x58) = ((s32)&D_sc06_010_8018AFAC | 0x40000000) | 0x20000000;
        AF(o, u16, 2) += 2;
    } else {
        func_8001C214(t, D_sc06_010_8018A574[AF(o, s16, 0x70)]);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000100;
        AF(o, s32, 0x58) = ((s32)&D_sc06_010_8018AF9C | 0x40000000) | 0x20000000;
        AF(o, u16, 2) += 1;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, u8, 0x75) = 8;
}

void func_sc06_010_80180598(void) {
}

void func_sc06_010_801805A0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u8, 0xC1) = 0;
    func_8002A04C((s32) arg0);
}

void func_sc06_010_801805D0(u8 *o) {
    u8 *q;
    if (AF(o, u16, 0) == 0) return;
    q = AF(o, u8 *, 0xCC);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
    q = AF(o, u8 *, 0xD0);
    AF(q, s16, 8) = AF(o, s16, 6);
    AF(q, s16, 0xA) = AF(o, s16, 0xA);
    AF(q, s16, 0xC) = AF(o, s16, 0xE);
    AF(q, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(q, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(q, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(q, s32, 4) |= 0x80000000;
    } else {
        AF(q, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_010_8018072C(u8 *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s16, 6);
    temp_v0_2 = AF(arg0, s16, 0xA) + 0x482;
    if (((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) > 0x1323F) {
        func_8012ADE4((s32) arg0);
        AF(arg0, s32, 0x14) = 0;
    }
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xE00;
    func_sc06_010_8017F278((s32) arg0);
}

void func_sc06_010_801807AC(u8 *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = AF(arg0, s16, 6);
    temp_v0_2 = AF(arg0, s16, 0xA) + 0x482;
    if (((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) > 0x1323F) {
        func_8012ADE4((s32) arg0);
        AF(arg0, s32, 0x14) = 0;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
    func_sc06_010_8017F278((s32) arg0);
}

void func_sc06_010_80180834(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x100) = 0x3C;
    AF(arg0, s16, 0x34) = 0;
    func_sc06_010_8017F278((s32) arg0);
}

void func_sc06_010_80180864(s32 arg0) {
    s32 t;
    s32 *g;

    if (func_8012C354(arg0, &D_sc06_010_8018AFD8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        func_80143970(arg0);
        SetScript(arg0, &D_sc06_010_801A683C);
        AF(arg0, u16, 2) += 1;
        func_8012B200(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc06_010_8018B00C;
        t = func_8012C1B8();
        if (t == 0) goto fail;
        AF(arg0, s32, 0xCC) = t;
        func_8001C214(t, &D_sc06_010_801A654C);
        g = (s32 *)&D_sc06_010_80186D1C;
        AF(t, s32, 0x20) = *g;
        AF(t, u16, 0x2C) |= 0x10;
        t = func_8012C1B8();
        if (t == 0) {
            func_80016714(AF(arg0, s32, 0xCC), 0x84);
fail:
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, s32, 0xD0) = t;
        func_8001C214(t, &D_sc06_010_801A6824);
        AF(t, s32, 0x20) = *g;
        AF(t, u16, 0x2C) |= 0x10;
        AF(arg0, s16, 0x100) = 0x3C;
        AF(arg0, s32, 0xDC) = 0xFFFC0000;
    }
}

void func_sc06_010_8018098C(u8 *arg0) {
    void *temp_a1;
    void *temp_v1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 6) = 0x7FFF;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = 0x1000;
    AF(temp_v1, s16, 0x1A) = 0x1000;
    AF(temp_v1, s16, 0x18) = 0x1000;
    AF(arg0, s16, 0x76) = 0x1E0;
    AF(arg0, u16, 0x5C) = 0x8810;
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x1E;
}

void func_sc06_010_801809E4(u8 *o) {
    s16 a;
    s16 b;

    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C) -= 1;
        return;
    }
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = -0x500;
    a = D_80126B66;
    b = AF(o, s16, 0x8C);
    if (a >= b) {
        AF(o, s16, 0xE) = b - 0x200;
    } else {
        AF(o, s16, 0xE) = a - 0x200;
    }
    AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    AF(o, s16, 2) = 1;
}

void func_sc06_010_80180A68(s32 arg0) {
    func_sc06_010_80180A88(arg0);
}

typedef struct { s32 flg; s16 m[3][3]; s16 pad; s32 t[3]; u8 work[0x2C]; SV8 rot; } Crd58;
extern Crd58 D_sc06_010_801B2578;
extern Crd58 D_sc06_010_801B25D0;
extern Crd58 D_sc06_010_801B2628;
extern Crd58 D_sc06_010_801B2680;
extern Crd58 D_sc06_010_801B26D8;
extern Crd58 D_sc06_010_801B2730;
extern Crd58 D_sc06_010_801B2788;
extern Crd58 D_sc06_010_801B27E0;
extern Crd58 D_sc06_010_801B2838;
extern Crd58 D_sc06_010_801B2890;
extern Crd58 D_sc06_010_801B28E8;
extern Crd58 D_sc06_010_801B2940;
extern s32 D_sc06_010_801B2BF4;
extern u8 D_sc06_010_801B2C10;
extern u8 D_sc06_010_801968BC;
extern u8 D_sc06_010_80197BE0;
extern u8 D_sc06_010_80199164;
extern u8 D_sc06_010_8019A9D8;
extern u8 D_sc06_010_8019C68C;
extern u8 D_sc06_010_8019F570;
extern u8 D_sc06_010_801A0044;
extern u8 D_sc06_010_801A0A18;
extern u8 D_sc06_010_801A13EC;
extern u8 D_sc06_010_801A1FC0;
extern u8 D_sc06_010_801A2C24;
extern u8 D_sc06_010_801A3B38;
extern void func_8013C0F8();
extern void func_sc06_010_8017CAD4();

void func_sc06_010_80180A88(void) {
    switch (D_sc06_010_801B2BF4) {
    case 0:
        func_8013C0F8(&D_sc06_010_801968BC);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2578);
        D_sc06_010_801B2578.t[1] = -0x480;
        D_sc06_010_801B2578.t[2] = 0x5F0;
        D_sc06_010_801B2578.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_80197BE0);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B25D0);
        D_sc06_010_801B25D0.t[1] = -0x480;
        D_sc06_010_801B25D0.t[2] = 0x5F0;
        D_sc06_010_801B25D0.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_80199164);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2628);
        D_sc06_010_801B2628.t[1] = -0x480;
        D_sc06_010_801B2628.t[2] = 0x5F0;
        D_sc06_010_801B2628.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_8019A9D8);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2680);
        D_sc06_010_801B2680.t[1] = -0x480;
        D_sc06_010_801B2680.t[2] = 0x5F0;
        D_sc06_010_801B2680.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_8019C68C);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B26D8);
        D_sc06_010_801B26D8.t[1] = -0x480;
        D_sc06_010_801B26D8.t[2] = 0x5F0;
        D_sc06_010_801B26D8.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_8019F570);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2730);
        D_sc06_010_801B2730.t[1] = -0x480;
        D_sc06_010_801B2730.t[2] = 0x5F0;
        D_sc06_010_801B2730.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_801A0044);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2788);
        D_sc06_010_801B2788.t[1] = -0x480;
        D_sc06_010_801B2788.t[2] = 0x5F0;
        D_sc06_010_801B2788.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_801A0A18);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B27E0);
        D_sc06_010_801B27E0.t[1] = -0x480;
        D_sc06_010_801B27E0.t[2] = 0x5F0;
        D_sc06_010_801B27E0.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_801A13EC);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2838);
        D_sc06_010_801B2838.t[1] = -0x480;
        D_sc06_010_801B2838.t[2] = 0x5F0;
        D_sc06_010_801B2838.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_801A1FC0);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2890);
        D_sc06_010_801B2890.t[1] = -0x480;
        D_sc06_010_801B2890.t[2] = 0x5F0;
        D_sc06_010_801B2890.rot.z += 0x700;
        func_8013C0F8(&D_sc06_010_801A2C24);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B28E8);
        D_sc06_010_801B28E8.t[1] = -0x480;
        D_sc06_010_801B28E8.t[2] = 0x5F0;
        D_sc06_010_801B28E8.rot.z += 0xB00;
        func_8013C0F8(&D_sc06_010_801A3B38);
        func_sc06_010_8017CA80((s32)&D_sc06_010_801B2940);
        D_sc06_010_801B2940.t[1] = -0x480;
        D_sc06_010_801B2940.t[2] = 0x5F0;
        D_sc06_010_801B2940.rot.z += 0x700;
        D_sc06_010_801B2BF4++;
        break;
    case 1:
        D_sc06_010_801B2578.rot.z = func_sc06_010_8017F098(0) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2578.rot, &D_sc06_010_801B2578.m);
        D_sc06_010_801B2578.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801968BC, &D_sc06_010_801B2578);
        D_sc06_010_801B25D0.rot.z = func_sc06_010_8017F098(1) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B25D0.rot, &D_sc06_010_801B25D0.m);
        D_sc06_010_801B25D0.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_80197BE0, &D_sc06_010_801B25D0);
        D_sc06_010_801B2628.rot.z = func_sc06_010_8017F098(2) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2628.rot, &D_sc06_010_801B2628.m);
        D_sc06_010_801B2628.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_80199164, &D_sc06_010_801B2628);
        D_sc06_010_801B2680.rot.z = func_sc06_010_8017F098(3) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2680.rot, &D_sc06_010_801B2680.m);
        D_sc06_010_801B2680.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_8019A9D8, &D_sc06_010_801B2680);
        D_sc06_010_801B26D8.rot.z = func_sc06_010_8017F098(4) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B26D8.rot, &D_sc06_010_801B26D8.m);
        D_sc06_010_801B26D8.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_8019C68C, &D_sc06_010_801B26D8);
        D_sc06_010_801B2730.rot.z = func_sc06_010_8017F098(5) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2730.rot, &D_sc06_010_801B2730.m);
        D_sc06_010_801B2730.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_8019F570, &D_sc06_010_801B2730);
        D_sc06_010_801B2788.rot.z = func_sc06_010_8017F098(6) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2788.rot, &D_sc06_010_801B2788.m);
        D_sc06_010_801B2788.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801A0044, &D_sc06_010_801B2788);
        D_sc06_010_801B27E0.rot.z = func_sc06_010_8017F098(7) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B27E0.rot, &D_sc06_010_801B27E0.m);
        D_sc06_010_801B27E0.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801A0A18, &D_sc06_010_801B27E0);
        D_sc06_010_801B2838.rot.z = func_sc06_010_8017F098(8) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2838.rot, &D_sc06_010_801B2838.m);
        D_sc06_010_801B2838.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801A13EC, &D_sc06_010_801B2838);
        D_sc06_010_801B2890.rot.z = func_sc06_010_8017F098(9) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2890.rot, &D_sc06_010_801B2890.m);
        D_sc06_010_801B2890.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801A1FC0, &D_sc06_010_801B2890);
        D_sc06_010_801B28E8.rot.z = func_sc06_010_8017F098(10) + 0xB00;
        RotMatrixZYX(&D_sc06_010_801B28E8.rot, &D_sc06_010_801B28E8.m);
        D_sc06_010_801B28E8.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801A2C24, &D_sc06_010_801B28E8);
        D_sc06_010_801B2940.rot.z = func_sc06_010_8017F098(11) + 0x700;
        RotMatrixZYX(&D_sc06_010_801B2940.rot, &D_sc06_010_801B2940.m);
        D_sc06_010_801B2940.flg = 0;
        func_sc06_010_8017CAD4(&D_sc06_010_801B2C10, &D_sc06_010_801A3B38, &D_sc06_010_801B2940);
        break;
    }
}

s32 func_sc06_010_801810F4(void) {
    return 0x6F;
}

s32 func_sc06_010_801810FC(u8 *o, s32 d0) {
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

void func_sc06_010_80181234(o)
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

void func_sc06_010_80181408(u8 *o) {
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
    func_sc06_010_80181234(o);
}

void func_sc06_010_801815B4(u8 *o) {
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
    func_sc06_010_80181234(o);
}

void func_sc06_010_8018179C(u8 *o) {
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
        if ((d = func_8012BE98(o, o + 0x88)) > 0x3FFFF || func_sc06_010_801810FC(o, 0x51) != 0) {
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
        if ((d = func_8012BE98(o, o + 0x88)) > 0x3FFFF || func_sc06_010_801810FC(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = func_8012B744(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(o, s32, 0xDC) >>= 1;
        func_sc06_010_801810FC(o, 0x51);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = func_8012BE98(o, o + 0x88);
        AF(o, s32, 0xDC) *= 2;
        if (func_sc06_010_801810FC(o, 0x51) != 0) {
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

void func_sc06_010_80181AD8(u8 *o) {
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
        func_sc06_010_801829FC(o, &D_sc06_010_801A4BF8);
        q = func_8012C588(0x260, o);
        if (q) {
            func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc06_010_801A4C00, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            func_8012B370(q);
            func_8012C658(0x261, 0, q);
        }
        q = func_8012C588(0x260, o);
        if (q) {
            func_8012F14C(AF(o, u8 *, 0x20) + 0x34, &D_sc06_010_801A4C08, &tmp);
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

extern V3 D_80126B5C;
extern u8 D_sc06_010_801A4C10;

void func_sc06_010_80181D80(u8 *o) {
    s16 *t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        t = (s16 *)&D_sc06_010_801A4C10 + (AF(o, s16, 0x70) - 1) * 4;
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

void func_sc06_010_80181EB0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    D_sc06_010_801A4C30[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_sc06_010_80181408((s32) arg0), (func_8012C044((s32) arg0) != 0))) {
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

void func_sc06_010_80181F88(u8 *arg0) {
    D_sc06_010_801A4C5C[AF(arg0, u16, 2)]();
}

void func_sc06_010_80181FC4(u8 *o) {
    SV8 a;
    SV8 b;
    if (AF(o, u16, 0x34) == 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC();
        func_8012B23C(o);
        func_8012B14C(o, (u8 *)&D_sc06_010_801A4C64 + AF(o, s16, 0x70) * 12);
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

void func_sc06_010_80182138(u8 *arg0) {
    D_sc06_010_801A4C7C[AF(arg0, u16, 2)]();
}

void func_sc06_010_80182174(u8 *arg0) {
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

void func_sc06_010_801821FC(s32 arg0) {
    func_8002D4C8(0xB32, 0);
    func_sc06_010_80181234(arg0);
}

void func_sc06_010_80182234(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xE00;
    func_sc06_010_80181408((s32) arg0);
}

void func_sc06_010_8018225C(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
    func_sc06_010_80181408((s32) arg0);
}

void func_sc06_010_80182290(u8 *arg0) {
    if (AF(arg0, s16, 0x76) < 0) {
        func_80131E00((s32) arg0, 6);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x100) = 0x3C;
    AF(arg0, s16, 0x34) = 0;
    func_sc06_010_80181408((s32) arg0);
}

void func_sc06_010_801822DC(u8 *arg0, s32 arg1, s32 arg2) {
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
        func_sc06_010_80181408((s32) arg0);
    }
}

void func_sc06_010_801823C8(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 1);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    func_sc06_010_80181234((s32) arg0, arg1);
}

void func_sc06_010_801823FC(u8 *arg0, s32 arg1) {
    AF(arg0, u8, 0xC1) = 0xC;
    AF(arg0, s32, 0x1C) = 0x3C;
    func_sc06_010_80181234((s32) arg0, arg1);
}

void func_sc06_010_80182428(u8 *arg0, s32 arg1, s32 arg2) {
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
    func_sc06_010_80181234((s32) arg0);
}

void func_sc06_010_801824B4(u8 *o) {
    u8 *c;
    s32 t;
    if (!func_8012C354(o, &D_sc06_010_801A4AFC)) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x1001;
    func_80143970(o);
    SetScript(o, &D_sc06_010_801A683C);
    AF(o, s16, 2)++;
    func_8012B200(o);
    AF(o, u8 *, 0xBC) = &D_sc06_010_801A4B30;
    c = (u8 *)func_8012C1B8();
    if (c == 0) goto fail;
    AF(o, u8 *, 0xCC) = c;
    func_8001C214(c, &D_sc06_010_801A654C);
    t = D_sc06_010_80186D1C[0];
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
    func_8001C214(c, &D_sc06_010_801A6824);
    t = D_sc06_010_80186D1C[0];
    AF(c, u16, 0x2C) |= 0x10;
    AF(c, s32, 0x20) = t;
    AF(o, s16, 0x100) = 0x3C;
    AF(o, s32, 0xDC) = 0xFFFC0000;
}

void func_sc06_010_801825DC(u8 *o) {
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
    func_sc06_010_801810FC(o, 0x51);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B8E4(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x100) = 5;
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_010_80182710(u8 *arg0) {
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

void func_sc06_010_80182770(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_010_801A691C);
    SetScript((s32) arg0, (s32) &D_sc06_010_80186D1C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x40;
    AF(AF(arg0, s32, 0x20), u16, 0x10) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x10);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    AF(AF(arg0, s32, 0x20), u16, 0x14) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x14);
}

void func_sc06_010_80182830(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s16, 6) == AF(arg0, s16, 0xDE)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0xE2))) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    AF(arg0, s32, 0xDC) = (s32) AF(arg0, s32, 4);
    AF(arg0, s32, 0xE0) = (s32) AF(arg0, s32, 0xC);
    func_8012B14C((s32) arg0, (s32) &D_sc06_010_801A4C48);
    func_8012AD80((s32) arg0);
    if ((func_8012D5E4((s32) arg0, (s32) &D_sc06_010_801A4C54, (s32) &D_800D3918, 0x30) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218((s32) arg0);
        return;
    }
    func_8012B370((s32) arg0);
}

void func_sc06_010_80182904(u8 *o) {
    s32 p;
    p = func_8012C1B8(o);
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc06_010_801A69DC);
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

s32 func_sc06_010_801829FC(s32 arg0, s32 arg1, s32 arg2) {
    D_sc06_010_801B2B08 = arg1;
    return func_8012C588(0x85, arg0);
}

void func_sc06_010_80182A2C(u8 *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    u8 *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (func_8012C354(o, &D_sc06_010_801A69F8) == 0) {
        func_8012C218(o);
    }
    SetScript(o, &D_sc06_010_80186D1C);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x70) = 0x80;
    AF(p, s32, 4) |= 0x50000040;
    AF(p, u16, 0x2C) |= 1;
    m = AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34;
    func_8012F14C(m, D_sc06_010_801B2B08, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    func_80017DC4(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, p + 0x34);
    func_80017E68(&b, p + 0x34);
    q = D_sc06_010_801A6A2C++;
    AF(o, WMtx *, 0xCC) = q;
    if (D_sc06_010_801A6A2C > D_sc06_010_801B2AE8) {
        D_sc06_010_801A6A2C = D_sc06_010_801B2AE8 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    func_80017E68(&a, q);
    y = b.y;
    if (func_80134510(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc06_010_801A6A2C++;
        AF(o, WMtx *, 0xD0) = q;
        if (D_sc06_010_801A6A2C > D_sc06_010_801B2AE8) {
            D_sc06_010_801A6A2C = D_sc06_010_801B2AE8 - 9;
        }
        func_800D23D0(&D_801152A8);
        RotMatrixYXZ(&D_801152A8, q);
        func_80017E68(&b, q);
    }
    AF(o, s16, 2)++;
}

void func_sc06_010_80182C70(u8 *o) {
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
        t = D_sc06_010_801A69E4;
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
            t = D_sc06_010_801A69E4;
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

void func_sc06_010_80182F10(u8 *arg0) {
    D_sc06_010_801A6A30[AF(arg0, u16, 2)]();
}

s32 func_sc06_010_80182F4C(u8 *o, s32 r0) {
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

void func_sc06_010_8018315C(u8 *arg0) {
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

void func_sc06_010_80183560(u8 *o) {
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
            StartRumbleScript(&D_sc06_010_801A7124);
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

void func_sc06_010_801836D4(u8 *o) {
    s32 c;
    if (!func_8012C354(o, &D_sc06_010_801A7144)) return;
    if (AF(o, s16, 0x70) != 0) {
        LoadImage(&D_sc06_010_801A7088, &D_sc06_010_801A7048);
        LoadImage(&D_sc06_010_801A7090, &D_sc06_010_801A7068);
        func_8001C214(AF(o, u8 *, 0x20), &D_sc06_010_801AB3B0);
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x2022;
    func_80143970(o);
    func_8012B030(o);
    AF(o, s16, 0xAE) = 0x2100;
    SetScript(o, &D_sc06_010_801AE660);
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
    AF(o, u8 *, 0xBC) = &D_sc06_010_801A7184;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x2400;
    AF(o, s16, 2) = 8;
    SetScript(o, &D_sc06_010_801AE4C8);
    SetScript(AF(o, u8 *, 0xCC), &D_sc06_010_801AE550);
    SetScript(AF(o, u8 *, 0xD0), &D_sc06_010_801AE5D8);
}

void func_sc06_010_80183884(u8 *o) {
    s32 d;
    s32 r;

    func_8012B1B4(o, &D_sc06_010_801A71A4);
    func_8012CBCC(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = func_sc06_010_80182F4C(o, 0x48)) != 0 || (d = func_8012BE98(o, o + 0x88)) > 0x3FFFF) {
            r = func_8012B744(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            func_8012B1B4(o, &D_sc06_010_801A71A4);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        if ((d = func_sc06_010_80182F4C(o, 0x48)) != 0 || (d = func_8012BE98(o, o + 0x88)) > 0x3FFFF) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = func_8012B744(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_sc06_010_80182F4C(o, 0x48);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = func_8012BE98(o, o + 0x88);
        if (func_sc06_010_80182F4C(o, 0x48) != 0) {
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

void func_sc06_010_80183B10(u8 *arg0) {
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
        AF(AF(arg0, void *, 0x20), s32, 0x20) = D_sc06_010_801A7008[ang];
        if (--AF(arg0, s16, 0x100) == 0) {
            q = AF(arg0, s32, 0xCC); AF(arg0, s16, 0x98) = 1; if (q != 0) { AF(q, s16, 0x98) = 1; } q = AF(arg0, s32, 0xD0); if (q != 0) { AF(q, s16, 0x98) = 1; }
        }
    } else if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 7;
        AF(arg0, u16, 0x100) = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_010_801AE4C8);
        q = AF(arg0, s32, 0xCC);
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_010_801AE550);
        }
        q = AF(arg0, s32, 0xD0);
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_010_801AE5D8);
        }
    }
}

void func_sc06_010_80183FD4(u8 *o) {
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

void func_sc06_010_801841A4(u8 *o) {
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

void func_sc06_010_80184394(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    D_sc06_010_801A71B4[AF(o, u16, 2)]();
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

void func_sc06_010_801846AC(u8 *o) {
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
                StartRumbleScript(&D_sc06_010_801A7124);
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

void func_sc06_010_801848A4(u8 *arg0) {
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

void func_sc06_010_80184CEC(u8 *o) {
    u8 *p;

    if (AF(o, s16, 0x102) != 0) {
        if (--AF(o, s16, 0x102) == 0) {
            AF(o, u16, 0x5C) &= ~0x4000;
        }
    }
    D_sc06_010_801A723C[AF(o, u16, 0x2)](o);
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

void func_sc06_010_80184EFC(u8 *arg0) {
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

void func_sc06_010_80185340(u8 *o) {
    u8 *p;

    if (AF(o, s16, 0x102) != 0) {
        if (--AF(o, s16, 0x102) == 0) {
            AF(o, u16, 0x5C) &= 0xBFFF;
        }
    }
    D_sc06_010_801A72B4[AF(o, u16, 2)](o);
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

void func_sc06_010_80185550(u8 *o) {
    SV8 v;
    u8 *p;
    u16 *q;

    if (AF(o, u16, 2) == 0) {
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_010_801A7098;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x59;
        func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_010_801A70A4);
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

void func_sc06_010_801857D4(u8 *arg0) {
    u8 *p;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xFC) = 0x1E;
    p = AF(arg0, u8 *, 0xCC);
    AF(p, s16, 0x5C) = 0;
    p = AF(arg0, u8 *, 0xD0);
    AF(p, s16, 0x5C) = 0;
}

void func_sc06_010_801857F4(u8 *o) {
    u8 unused[0x10];
    func_8012B1B4(o, &D_sc06_010_801A71A4);
    func_8012CBCC(o);
    func_sc06_010_80182F4C(o, 0x48);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B8E4(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 6;
        AF(o, s16, 0x100) = 0x2D;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x104) = 0;
        SetScript(o, &D_sc06_010_801AE960);
        if (AF(o, u8 *, 0xCC)) SetScript(AF(o, u8 *, 0xCC), &D_sc06_010_801AEA50);
        if (AF(o, u8 *, 0xD0)) SetScript(AF(o, u8 *, 0xD0), &D_sc06_010_801AEB40);
    }
}

void func_sc06_010_801858F4(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x100) = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_010_801AE660);
        temp_a0 = AF(arg0, s32, 0xCC);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_010_801AE760);
        }
        temp_a0_2 = AF(arg0, s32, 0xD0);
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_010_801AE860);
        }
    } else {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
    }
}

void func_sc06_010_80185994(u8 *arg0, s32 arg1) {
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

void func_sc06_010_80185A54(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc06_010_801AE660);
        temp_a0 = AF(arg0, s32, 0xCC);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_010_801AE760);
        }
        temp_a0_2 = AF(arg0, s32, 0xD0);
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_010_801AE860);
        }
    } else {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
    }
}

void func_sc06_010_80185AEC(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD0), s16, 0x5C) = 0;
}

void func_sc06_010_80185B0C(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_010_801A71E8) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc06_010_801AC120);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        func_8012B030(arg0);
        AF(arg0, s16, 0xAE) = 0x2100;
        SetScript(arg0, (s32) &D_sc06_010_801AE760);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_010_801A721C;
        temp_v1 = AF(arg0, s32, 0x20);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_010_80185BFC(void) {
}

void func_sc06_010_80185C04(u8 *o) {
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

void func_sc06_010_80185CD8(u8 *arg0, s32 arg1) {
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

void func_sc06_010_80185D98(s32 arg0, s32 arg1) {
    func_8012B370(arg0, arg1);
}

void func_sc06_010_80185DB8(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xCC), s16, 0x5C) = 0;
}

void func_sc06_010_80185DD8(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_010_801A7260) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc06_010_801ACE8C);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        func_8012B030(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_010_801A7294;
        AF(arg0, s16, 0xAE) = 0x2100;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_010_801AE860);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_010_80185ECC(void) {
}

void func_sc06_010_80185ED4(u8 *o) {
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

void func_sc06_010_80185FC8(u8 *arg0, s32 arg1) {
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

void func_sc06_010_80186088(s32 arg0, s32 arg1) {
    func_8012B370(arg0, arg1);
}

void func_sc06_010_801860A8(u8 *o) {
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

void func_sc06_010_801861C4(u8 *arg0) {
    D_sc06_010_801AEF60[AF(arg0, u16, 2)]();
}

void func_sc06_010_80186200(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_010_801AEC50) != 0) {
        if (!(func_80029178(D_sc06_010_801AECB8[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc06_010_801868AC);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc06_010_80186D1C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc06_010_801862D4(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_010_801862FC(void) {
}

void func_sc06_010_80186304(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc06_010_801AEE9C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc06_010_801AEE00[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc06_010_801AEE88 = 0;
            func_80029124(D_sc06_010_801AEE00[AF(temp_s0, u16, 0xC)], 1);
            D_sc06_010_801AEE84 = 2;
        } else {
            D_sc06_010_801AEE9C = AF(temp_s0, s32, 0);
            var_v0 = D_sc06_010_801AED7C[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc06_010_801AEE84 = 0;
            D_sc06_010_801AEE88 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc06_010_801AEEB0);
    } else {
        var_a1 = &D_sc06_010_801AEF1C;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc06_010_80186450(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc06_010_801AECB8[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc06_010_801AECB8[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc06_010_80186654() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_010_80186570(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc06_010_8018659C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc06_010_801865AC(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc06_010_801865BC(u8 *arg0) {
    func_80029124(D_sc06_010_801AECB8[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc06_010_801865FC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc06_010_80186630(void) {
    return func_80174764() == 1;
}

s32 func_sc06_010_80186654(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc06_010_801AECB8[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc06_010_801866B8(u8 *arg0) {
    D_sc06_010_801AEF88[AF(arg0, u16, 2)]();
}

void func_sc06_010_801866F4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_010_801AEC84) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc06_010_801AF648);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc06_010_801AF428);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc06_010_8018677C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_010_801AF438);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_010_801AF540);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc06_010_8018683C(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc06_010_801AF648);
        } else {
            SetScript((s32) arg0, (s32) &D_sc06_010_801AF428);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc06_010_801868AC(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc06_010_801AEF78[0], &a, &f);
    RotTransSV(&D_sc06_010_801AEF78[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
