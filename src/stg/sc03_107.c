#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_107_8017BE9C(void) {
}

void func_sc03_107_8017BEA4(void) {
}

void func_sc03_107_8017BEAC(void) {
}

void func_sc03_107_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_107_80185FA0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_107_8017CD88(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_107_80185FA8[])();
void func_sc03_107_8017CDB0(void);
extern void func_800D1EBC();
extern void (*D_sc03_107_80185FB4[])();
extern void (*D_sc03_107_80185FC0[])();
extern u8 D_sc03_107_80185FCC;
extern void func_8016EE40();
extern u8 D_sc03_107_80185FD8;
extern void func_sc03_107_8017CF0C();
extern void (*D_sc03_107_80185FEC[])();
extern void (*D_sc03_107_801860C0[])();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc03_107_801860B0;
extern u8 D_sc03_107_801860A0;
extern u8 D_sc03_107_80186090;
extern u8 D_sc03_107_80186080;
extern s32 func_80029504();
extern s32 func_sc03_107_8017D57C();
extern void (*D_sc03_107_8018614C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_107_801827D4;
extern u8 D_sc03_107_801860E8;
extern s32 func_sc03_107_8017D878();
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc03_107_8019754C[])();
extern void (*D_sc03_107_80198FEC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc03_107_80196C28;
extern void func_8012C218();
extern void func_80016714();

extern s32 func_80029178();
extern u8 D_sc03_107_801860C8;
extern void func_8001C2C4();
extern s32 func_8012C044();
extern void (*D_sc03_107_8019208C[])();
extern void func_sc03_107_8017EEA8();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc03_107_80193CE4;
extern u8 D_sc03_107_80196E10;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc03_107_80196FC0;
extern void func_sc03_107_8017EB04();
extern s16 D_80126CE0;
extern u8 D_sc03_107_80195694;
extern u8 D_sc03_107_801972F8;
extern void (*D_sc03_107_801974FC[])();
extern void func_8012B260();
extern void func_sc03_107_801805F8();
extern void func_8001CD50();
extern u8 D_sc03_107_8019BA88;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_107_801804D8();
extern s32 func_8012C658();
extern u8 D_sc03_107_801974BC;
extern u8 D_sc03_107_801974C4;
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s32 func_8012BE54();
extern void func_sc03_107_801801E4();
extern u8 D_sc03_107_8019BAC8;
extern void func_800233CC();
extern void func_801292C8();
extern void func_8012B14C();
extern u8 D_sc03_107_80198BA4;
extern s32 func_sc03_107_8018134C();
extern u16 D_sc03_107_80198BB0;
extern u16 D_sc03_107_80198BB2;
extern u16 D_sc03_107_80198BB4;
extern void func_800291C8();
extern void func_80131E00();

extern u8 D_sc03_107_80191F80;
extern u8 D_sc03_107_80191FB4;
extern void func_80143970();
extern void func_sc03_107_8017E888();
extern s32 func_sc03_107_8017E9CC();
extern u16 D_800B99DA;
extern void func_80130D48();

extern void func_8002A04C();
extern u8 D_sc03_107_80198C08;
extern void func_8012E8E0();

extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();

extern void func_8012B030();

extern s32 func_8012BD3C();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern void func_80128ED8();
extern s32 func_80132EF4();
extern void func_sc03_107_8018233C();

extern u8 D_sc03_107_80197498;
extern void func_8012B23C();
extern void func_8012B1B4();

extern u8 D_sc03_107_801974B4;
extern s32 func_8012BDBC();
extern s32 func_8012CC40();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_sc03_107_8017E960();

extern u8 D_80126940;
extern SV8 D_801274E8[2];
extern u8 D_sc03_107_80185FF0;
extern s32 func_sc03_107_8017D418();
extern void func_sc03_107_8017D474();
extern void func_sc03_107_8017D4C8();
extern s32 func_80012DBC();
extern s32 func_80012ABC();
extern s32 func_80012F74();
extern void func_sc03_107_8017D280();
extern s32 func_8012CC64();
extern s32 func_80133784();
extern s32 D_sc03_107_8019BBC8;
extern s32 D_sc03_107_8019BBCC;
extern void func_80131C78();
extern s32 func_8012CBCC();
extern void func_80143B6C();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern s32 func_80012C6C();
extern void func_8012F14C();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

extern void ApplyMatrixLV();

extern u8 D_800AF630;
extern s16 D_800B9A08;
extern s32 func_800291DC();
extern void func_80029514();
extern u8 D_sc03_107_80198B70;
extern u8 D_sc03_107_80198BB8;

extern void *D_sc03_107_80197554[];
extern void *D_801151D4;
extern u8 D_sc03_107_801974A4;
extern u8 D_sc03_107_801974AC;
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern void func_8012C0EC();
extern u8 D_80078E78;
extern u8 D_sc03_107_80196F00;
extern u8 D_sc03_107_801920BC;
extern s32 func_8014CB1C();
extern void func_8012B178();
extern void func_sc03_107_8017EAC8();
extern u8 *func_80143BDC();
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern s32 func_8012BD14();
extern void VectorNormalSS();
extern void func_8012F568();
extern u8 D_sc03_107_80198B50;
extern u8 D_sc03_107_80198B60;
extern void *D_sc03_107_80198BF8[];

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
extern u8 D_sc03_107_80193CF4;
extern void func_sc03_107_801823FC();
extern u8 D_sc03_107_801973D8;
extern void func_8001CC3C();
extern void func_80128EA8();
extern u8 D_sc03_107_80198FA0;
extern u8 D_sc03_107_80198FAC;
extern s32 func_sc03_107_801822E4();
extern s32 func_8012C194();
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
extern s32 func_8012C51C();


extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_80126960;
extern s16 D_80126962;
extern u16 D_801269E8;
extern u16 D_801269EA;
extern void func_8012A018();
extern void func_8012A094();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MT20;
typedef struct { s16 x, y; s32 pad; } SXY8;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
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

extern s32 func_8012E544();
extern s32 func_80013328();


extern void func_80178CBC();
extern u8 D_sc03_107_80186134;
extern u8 D_sc03_107_8018611C;

extern void func_80178BF8();
extern void func_80172710();

extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern void ReadRotMatrix();
extern void PushMatrix();
extern void PopMatrix();
extern void TransposeMatrix();
extern void ApplyMatrixSV();
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

static inline void rdpush(MtxDCM *p) {
    ReadRotMatrix(p);
    PushMatrix();
}

static inline void trans(MtxDCM *p, MtxDCM *q) {
    TransposeMatrix(p, q);
}

void func_sc03_107_8017BEBC(u8 *obj) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    SV8 zero;
    SV8 out;
    MtxDCM m;
    MtxDCM mt;
    SV8 dv;
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
    s16 zl, zh;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yl, yh;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;
    s32 v;
    u32 col;
    s32 zz;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    rdpush(&m);
    dv.x = zero.x - m.t[0];
    dv.y = zero.y - m.t[1];
    dv.z = zero.z - m.t[2];
    trans(&m, &mt);
    ApplyMatrixSV(&mt, &dv, &out);
    PopMatrix();
    out.y -= 0x180;
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    c = AF(obj, ChunkDCM *, 0xC);
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        x = c->x;
        y = c->y;
        xl = x;
        xh = x >> 16;
        zl = c->z;
        yl = y;
        yh = y >> 16;
        zh = c->z >> 16;
        box[0].x = xl; box[0].y = yl;
        box[1].x = xh; box[1].y = yl;
        box[2].x = xl; box[2].y = yl;
        box[3].x = xh; box[3].y = yl;
        box[4].x = xl; box[4].y = yh;
        box[5].x = xh; box[5].y = yh;
        box[6].x = xl; box[6].y = yh;
        box[7].x = xh; box[7].y = yh;
        box[0].z = zl;
        box[1].z = zl;
        box[4].z = zl;
        box[5].z = zl;
        box[2].z = zh;
        box[3].z = zh;
        box[6].z = zh;
        box[7].z = zh;
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
        if ((s16)h < -110 || (s16)l > 110) continue;

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
                if (q0 > q1) { yh = q0; yl = q1; } else { do { yl = q0; } while (0); yh = q1; } /* MATCH-TRICK: extra loop depth on one yl ref wins the a2/a3 priority tie */
                q2 = AF(pk, s16, 0x1A);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -110 || yl > 110) continue;
                gte_avsz3();
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type != 6) g.z = m + 0x200;
                zz = g.z;
                t = (u32 *)poly[0];
                v = 0x80 - (zz - 400) / 24;
                if (v < 0) v = 0;
                col = v | (v << 8) | (v << 16);
                AF(pk, u32, 4) = (t[0] & 0xFF000000) | col;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x20;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
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
                if (yh < -110 || yl > 110) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type != 2) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                zz = g.z;
                t = (u32 *)poly[0];
                v = 0x80 - (zz - 400) / 24;
                if (v < 0) v = 0;
                col = v | (v << 8) | (v << 16);
                AF(pk, u32, 4) = (t[0] & 0xFF000000) | col;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
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

void func_sc03_107_8017CA50(u8 *arg0) {
    D_sc03_107_80185FA0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CA8C(u8 *arg0) {
    func_sc03_107_8017CD88();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_107_8017CAD0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_107_8017CAF4(u8 *arg0) {
    D_sc03_107_80185FA8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CB30(u8 *arg0) {
    func_sc03_107_8017CDB0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_107_8017CB70(u8 *arg0) {
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

void func_sc03_107_8017CBEC(void) {
    func_800D1EBC();
}

void func_sc03_107_8017CC0C(u8 *arg0) {
    D_sc03_107_80185FB4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CC48(u8 *arg0) {
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

void func_sc03_107_8017CCBC(u8 *arg0) {
    D_sc03_107_80185FC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CCF8(u8 *arg0, s32 arg1, s32 arg2) {
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

void func_sc03_107_8017CD88(void) {
    func_8016EE40((s32) &D_sc03_107_80185FCC, 0x01000000);
}

void func_sc03_107_8017CDB0(void) {
    func_8016EE40((s32) &D_sc03_107_80185FD8, 0x01000000);
}

void func_sc03_107_8017CDD8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x258;
    D_80126968 = 0x71;
    D_8012696A = 0xC00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x32;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_107_8017CF0C, 0);
    D_801274E8[0] = *(SV8 *)&D_80126940;
    func_8012A094((s32) &D_80126948);
    func_sc03_107_8017CF0C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_801274E8[0] = D_801274E8[1];
    D_80126960 = D_80126968 = D_801269E8;
    D_80126962 = D_8012696A = D_801269EA;
}

void func_sc03_107_8017CF0C(s32 arg0) {
    D_sc03_107_80185FEC[AF(arg0, u8, 4)]();
}

void func_sc03_107_8017CF48(s32 arg0) {
    SV8 v;
    s16 hit;

    v = *(SV8 *)&D_80126940;
    if (v.z > 0x100) {
        if (v.x < -0x740) {
            v.x = -0x740;
        }
        if (v.x > 0xA40) {
            v.x = 0xA40;
        }
    } else {
        if (v.x < -0x640) {
            v.x = -0x640;
        }
        if (v.x > 0x580) {
            v.x = 0x580;
        }
    }
    hit = 0;
    if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0)) {
        func_sc03_107_8017D4C8(arg0, &v, &D_sc03_107_80185FF0);
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x10)) {
        func_sc03_107_8017D51C(arg0, (s32) &v, (s32) (&D_sc03_107_80185FF0 + 0x10));
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x20)) {
        func_sc03_107_8017D474(arg0, &v, &D_sc03_107_80185FF0 + 0x20);
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x30)) {
        func_sc03_107_8017D51C(arg0, (s32) &v, (s32) (&D_sc03_107_80185FF0 + 0x30));
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x40)) {
        func_sc03_107_8017D4C8(arg0, &v, &D_sc03_107_80185FF0 + 0x40);
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x50)) {
        func_sc03_107_8017D4C8(arg0, &v, &D_sc03_107_80185FF0 + 0x50);
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x60)) {
        func_sc03_107_8017D474(arg0, &v, &D_sc03_107_80185FF0 + 0x60);
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x70)) {
        func_sc03_107_8017D51C(arg0, (s32) &v, (s32) (&D_sc03_107_80185FF0 + 0x70));
        hit = 1;
    } else if (func_sc03_107_8017D418(&v, &D_sc03_107_80185FF0 + 0x80)) {
        func_sc03_107_8017D4C8(arg0, &v, &D_sc03_107_80185FF0 + 0x80);
        hit = 1;
    }
    if (hit) {
        AF(arg0, s16, 0x18) = AF(arg0, s16, 0x20) = func_80012DBC(AF(arg0, s16, 0x18), AF(arg0, s16, 0xA0), 0xA, 1);
        AF(arg0, s16, 0x1A) = AF(arg0, s16, 0x22) = func_80012DBC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0xA2), 0xA, 1);
    } else {
        AF(arg0, s16, 0x18) = AF(arg0, s16, 0x20) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0xA0), 0xA);
        AF(arg0, s16, 0x1A) = AF(arg0, s16, 0x22) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0xA2), 0xA);
    }
    D_801274E8[1] = v;
    D_801274E8[0].x = func_80012F74(D_801274E8[0].x, v.x, 4, 1);
    D_801274E8[0].y = func_80012F74(D_801274E8[0].y, v.y, 4, 1);
    D_801274E8[0].z = func_80012F74(D_801274E8[0].z, v.z, 4, 1);
    func_sc03_107_8017D280(arg0, &D_801274E8[0]);
}

void func_sc03_107_8017D280(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_107_8017D418(SV8 *a, SV8 *b) {
    if (a->x < b->x || b->y < a->x || a->z < b->z) {
        return 0;
    }
    return a->z <= b->pad;
}

void func_sc03_107_8017D474(u8 *o, SV8 *v, u8 *b) {
    s32 unused;

    AF(o, u16, 0xA0) = AF(b, u16, 8);
    AF(o, u16, 0xA2) = AF(b, u16, 0xA);
    AF(o, s32, 0x14) = AF(b, s32, 0xC);
    v->x = AF(b, s16, 0) + (AF(b, s16, 2) - AF(b, s16, 0)) / 2;
}

void func_sc03_107_8017D4C8(u8 *o, u8 *v, u8 *p) {
    AF(o, u16, 0xA0) = AF(p, u16, 8);
    AF(o, u16, 0xA2) = AF(p, u16, 0xA);
    AF(o, s32, 0x14) = AF(p, s32, 0xC);
    AF(v, s16, 4) = AF(p, s16, 4) + (AF(p, s16, 6) - AF(p, s16, 4)) / 2;
}

s32 func_sc03_107_8017D51C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    AF(arg0, u16, 0xA0) = (u16) AF(arg2, u16, 8);
    AF(arg0, u16, 0xA2) = (u16) AF(arg2, u16, 0xA);
    temp_v0 = AF(arg2, s32, 0xC);
    AF(arg0, s32, 0x14) = temp_v0;
    return temp_v0;
}

void func_sc03_107_8017D540(u8 *arg0) {
    D_sc03_107_801860C0[AF(arg0, u16, 2)]();
}

s32 func_sc03_107_8017D57C(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

void func_sc03_107_8017D5C4(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_80029504();
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc03_107_801860B0;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc03_107_8017D57C(arg0, &D_sc03_107_801860A0);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc03_107_8017D57C(arg0, &D_sc03_107_80186090);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc03_107_8017D57C(arg0, &D_sc03_107_80186080);
    }
}

void func_sc03_107_8017D690(void) {
}

void func_sc03_107_8017D698(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C2C4(temp_v0);
        AF(arg0, s16, 0x5C) = 0x40;
        AF(arg0, u8, 0x75) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s16, 0x70) * 0x10) + &D_sc03_107_801860C8);
    }
}

s32 func_sc03_107_8017D728(void) {
    return 0x49;
}

void func_sc03_107_8017D730(u8 *arg0) {
    D_sc03_107_8018614C[AF(arg0, u16, 2)]();
}

void func_sc03_107_8017D76C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_107_801860E8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_107_801827D4);
        func_801788B8(arg0, (s32) &func_sc03_107_8017D878);
    }
}

void func_sc03_107_8017D7D0(void) {
}

void func_sc03_107_8017D7D8(u8 *o) {
    if (AF(o, s16, 0x70) != 0) {
        func_80178CBC(o, &D_sc03_107_80186134);
    } else {
        func_80178CBC(o, &D_sc03_107_8018611C);
    }
    AF(o, s16, 2) = 3;
}

void func_sc03_107_8017D838(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_107_8017D878(u8 *o) {
    u8 *p;
    s32 i;

    if (func_8012BD14(AF(o, s32, 0x64)) > 0x1000) {
        return 0;
    }
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x224 && func_8012BC60(o + 4, p + 4) < 0x1000) {
            return 0;
        }
    }
    AF(AF(o, u8 *, 0x64), s16, 2) = 2;
    func_80178BF8();
    return (s32)func_80172710;
}

void func_sc03_107_8017D92C(u8 *arg0) {
    void *temp_v0;

    D_sc03_107_8019208C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_107_8017EEA8((s32) arg0);
        }
    }
}

void func_sc03_107_8017D9B8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_107_80191F80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_107_80191FB4;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_107_8017DA34(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_107_80196C28);
}

void func_sc03_107_8017DA64(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_107_80193CE4);
            SetScript((s32) arg0, (s32) &D_sc03_107_80196E10);
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

void func_sc03_107_8017DB34(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc03_107_80196E10);
    AF(arg0, s32, 0x1C) = (rand() % 17) + 0x28;
    AF(arg0, s16, 0x52) = 0;
}

void func_sc03_107_8017DBA8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_107_8017DBDC(u8 *arg0) {
    s32 unused[4];
    u8 *g = &D_80078E78;
    s32 r;
    s32 y;

    r = rand() % 1024;
    y = AF(AF(arg0, void *, 0x20), s16, 0x12);
    AF(arg0, s32, 0xE0) = (rand() & 1) ? y + r : y - r;
    func_8012B23C(arg0);
    SetScript((s32) arg0, (s32) &D_sc03_107_80196F00);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s32, 0xE4) = 0;
    if (AF(g, u8, 0x36) != 0) {
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_107_8017DCA0(u8 *arg0) {
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
    func_sc03_107_8017ED6C(arg0, 0);
    if (func_sc03_107_8017EB70((s32) arg0) != 0 && func_8012BEE8(arg0) != 0) {
        func_sc03_107_8017EAC8(arg0);
    }
}

void func_sc03_107_8017DD78(u8 *arg0) {
    if (func_8012BDBC(arg0, 0x400) == 1) {
        if (func_8012BCCC(arg0) < 0x3001) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B8E4(arg0, 4);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc03_107_8017ED6C(arg0, 1);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
        func_8012B178(arg0, AF(arg0, s32, 0xE8));
        func_sc03_107_8017ED6C(arg0, 0);
    }
    func_sc03_107_8017EB70((s32) arg0);
}

void func_sc03_107_8017DE58(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc03_107_80196FC0, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc03_107_8017EB04((s32) arg0);
}

void func_sc03_107_8017DEA0(s32 arg0) {
    s32 f;
    s32 m;

    AF(AF(arg0, s32, 0x20), s16, 0x12) += func_8012B8E4(arg0, 0xA);
    if (AF(arg0, s32, 0xDC) & 0x20) {
        if (AF(arg0, s32, 0x1C) >= 0xA && AF(arg0, s32, 0x1C) < 0x17) {
            func_sc03_107_8017E960(arg0);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == 0x16) {
            func_sc03_107_8017E888(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x10) {
            func_sc03_107_8017E9CC(arg0);
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
            func_sc03_107_8017EB04(arg0);
        }
    }
}

void func_sc03_107_8017DFC8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_107_80196E10);
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

void func_sc03_107_8017E080(u8 *arg0) {
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

void func_sc03_107_8017E110(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_107_8017E888((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc03_107_8017E154(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc03_107_8017E9CC(arg0);
    }
}

void func_sc03_107_8017E18C(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
}

void func_sc03_107_8017E1B4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_107_8017E1E4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_107_8017E888((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_107_8017E9CC((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

void func_sc03_107_8017E270(u8 *arg0) {
    s16 sp[3];
    u8 *temp_a0;

    temp_a0 = AF(arg0, u8 *, 0x20);
    if (AF(temp_a0, s32, 0x24) == (s32) &D_sc03_107_80193CF4) {
        func_8001C924(temp_a0, &D_sc03_107_80193CE4);
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
        func_sc03_107_801823FC(arg0, sp, 0);
    }
}

void func_sc03_107_8017E328(u8 *arg0) {
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
        func_sc03_107_8017E888((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_107_8017E9CC((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

void func_sc03_107_8017E418(u8 *arg0) {
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

void func_sc03_107_8017E470(u8 *arg0) {
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

void func_sc03_107_8017E514(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_107_8017E524(u8 *arg0, s32 arg1) {
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

void func_sc03_107_8017E60C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_107_80195694);
    SetScript((s32) arg0, (s32) &D_sc03_107_801972F8);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc03_107_8017E668(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_107_8017EEA8((s32) arg0);
    }
}

void func_sc03_107_8017E6F0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, s32, 0xDC) & 2) {
        AF(arg0, s32, 0x1C) = 0x2D;
        SetScript((s32) arg0, (s32) &D_sc03_107_801973D8);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
        AF(arg0, s16, 0x52) = 0;
    } else {
        AF(arg0, s32, 0x1C) = 0x37;
        func_8001C924((s32) AF(arg0, void *, 0x20), (s32) &D_sc03_107_80195694);
        SetScript((s32) arg0, (s32) &D_sc03_107_801972F8);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
    }
    func_8002D4C8(func_8012BCCC((s32) arg0) <= 0x8FFF ? 0x51F : 0x520, 0);
}

void func_sc03_107_8017E7C0(u8 *arg0, s32 arg1) {
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
        func_sc03_107_8017EEA8((s32) arg0);
    }
}

void func_sc03_107_8017E888(u8 *o) {
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

s32 func_sc03_107_8017E960(u8 *arg0) {
    if (AF(arg0, s32, 0xDC) & 1) {
        return 0;
    }
    if (func_8012D5E4(arg0, &D_sc03_107_801920BC, &D_sc03_107_801920BC + 8, 0x13) == 1) {
        AF(arg0, s32, 0xDC) |= 1;
        return 1;
    }
    return 0;
}

s32 func_sc03_107_8017E9CC(u8 *arg0) {
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

void func_sc03_107_8017EAC8(u8 *arg0) {
    if (rand() & 1) {
        AF(arg0, s16, 2) = 10;
    } else {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_107_8017EB04(u8 *arg0) {
    if (func_8014CB1C() != 0) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else if (rand() & 1) {
        AF(arg0, s32, 0xDC) |= 0x20;
    } else {
        AF(arg0, s32, 0xDC) &= ~0x20;
    }
}

s32 func_sc03_107_8017EB70(s32 arg0) {
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
        func_sc03_107_8017EEA8(arg0);
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

s32 func_sc03_107_8017ED6C(u8 *o, s32 s) {
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

void func_sc03_107_8017EEA8(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C();
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

extern u8 D_sc03_107_801973F8;
extern u8 D_sc03_107_80198828;
extern u8 D_sc03_107_801974CC;
extern u8 D_sc03_107_8019BA48[];
extern u8 D_sc03_107_8019742C;
extern u8 D_sc03_107_80197438;
extern u8 D_sc03_107_80197440;
extern u8 D_sc03_107_80197450;
extern u16 D_sc03_107_80197454;
extern u8 D_sc03_107_80197458;
extern u8 D_sc03_107_80197464;
extern u8 D_sc03_107_8019746C;
extern u8 D_sc03_107_80197490;
extern u16 D_sc03_107_80197494;
extern u8 D_sc03_107_8019747C;
extern u8 D_sc03_107_80197488;
extern u8 D_sc03_107_8019BA89[];
extern u8 D_sc03_107_8019BA8A;
extern u8 D_sc03_107_8019BA8C;
extern void func_8001CA1C();

void func_sc03_107_8017EF3C(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (func_8012C354(arg0, &D_sc03_107_801973F8) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_107_801974CC;
        SetScript(arg0, &D_sc03_107_80198828);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        func_8012B23C(arg0);
        func_8012B1B4(arg0, &D_sc03_107_80197498);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_107_8019BA48[AF(arg0, s16, 0xFC) * 8];
        q = func_8012C658(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_107_8019742C);
        SetScript(arg0, &D_sc03_107_80197438);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_80197440 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_107_80197450;
        AF(arg0, u16, 0xE) += D_sc03_107_80197454;
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
        func_8001CA1C(t, &D_sc03_107_80197458);
        SetScript(arg0, &D_sc03_107_80197464);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_8019746C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_107_80197490;
        AF(arg0, u16, 0xE) += D_sc03_107_80197494;
        return;
    case 7:
        if (func_8012C354(arg0, &D_sc03_107_801973F8) == 0) {
            return;
        }
        {
            u8 *q = D_sc03_107_8019BA89;
            u8 *r = q - 1;
            D_sc03_107_8019BA8A = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc03_107_8019BA8A = 0;
            D_sc03_107_8019BA8C = 0;
            func_800233CC(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_107_801974CC;
        SetScript(arg0, &D_sc03_107_80198828);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_107_8019BA48[AF(arg0, s16, 0xFC) * 8];
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
        func_8001CA1C(t, &D_sc03_107_8019742C);
        SetScript(arg0, &D_sc03_107_80197438);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_80197440 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_107_80197450;
        AF(arg0, u16, 0xE) += D_sc03_107_80197454;
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
        func_8001CA1C(t, &D_sc03_107_80197458);
        SetScript(arg0, &D_sc03_107_80197464);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_8019746C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_107_80197490;
        AF(arg0, u16, 0xE) += D_sc03_107_80197494;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = func_8012C1B8()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_107_8019747C);
        SetScript(arg0, &D_sc03_107_80197488);
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
        if (func_8012C354(arg0, &D_sc03_107_801973F8) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_107_801974CC;
        SetScript(arg0, &D_sc03_107_80198828);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_107_8019BA48[AF(arg0, s16, 0xFC) * 8];
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
        func_8001CA1C(t, &D_sc03_107_8019742C);
        SetScript(arg0, &D_sc03_107_80197438);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_80197440 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_107_80197450;
        AF(arg0, u16, 0xE) += D_sc03_107_80197454;
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
        func_8001CA1C(t, &D_sc03_107_80197458);
        SetScript(arg0, &D_sc03_107_80197464);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_8019746C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_107_80197490;
        AF(arg0, u16, 0xE) += D_sc03_107_80197494;
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

void func_sc03_107_8017F6E8(u8 *arg0) {
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

void func_sc03_107_8017FCF0(u8 *arg0) {
    SV4 a;
    SV4 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    func_8012B1B4(arg0, &D_sc03_107_80197498);
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
    if (func_8012CC40(arg0, &D_sc03_107_801974B4) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc03_107_8017FE24(u8 *arg0) {
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
    r = func_8012CC64(arg0, &D_sc03_107_801974B4);
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
            func_8012B1B4(arg0, &D_sc03_107_80197498);
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

void func_sc03_107_801801E4(u8 *arg0) {
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

void func_sc03_107_80180428(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_107_801974FC[AF(arg0, u16, 2)]();
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

void func_sc03_107_801804D8(u8 *arg0) {
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

void func_sc03_107_801805BC(u8 *arg0) {
    D_sc03_107_8019754C[AF(arg0, u16, 2)]();
}

void func_sc03_107_801805F8(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_107_8019BA88);
    }
}

void func_sc03_107_8018065C(u8 *arg0) {
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
    ((void (*)(u8 *)) D_sc03_107_80197554[AF(arg0, u16, 2)])(arg0);
}

void func_sc03_107_801806F0(u8 *arg0) {
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
        func_8012B1B4(arg0, &D_sc03_107_80197498);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    func_8012B23C(arg0);
    func_8012B1B4(arg0, &D_sc03_107_80197498);
}

void func_sc03_107_80180818(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_107_80180848(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_107_80180874(void) {
}

void func_sc03_107_8018087C(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (func_8012BE98(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B744(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_8012B1B4(arg0, &D_sc03_107_80197498);
    } else if (func_8012BD3C(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (func_8012CC40(arg0, &D_sc03_107_801974B4) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        func_8012C0EC(arg0);
    }
}

void func_sc03_107_80180968(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

void func_sc03_107_801809E8(u8 *arg0) {
    AF(arg0, s32, 8) += 0x100000;
    AF(arg0, s32, 4) -= rsin(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    AF(arg0, s32, 0xC) -= rcos(AF(AF(arg0, void *, 0x20), s16, 0x12)) << 8;
    if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 2) = 6;
        func_8012D5E4((s32) arg0, (s32) &D_sc03_107_801974A4, (s32) &D_sc03_107_801974AC, 0xF);
        AF(arg0, s16, 0xFE) = 8;
    }
}

void func_sc03_107_80180A9C(u8 *arg0) {
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

void func_sc03_107_80180B7C(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_107_80180BE4(u8 *arg0) {
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

void func_sc03_107_80180C44(u8 *arg0) {
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
    func_sc03_107_801804D8((s32) arg0);
}

void func_sc03_107_80180CD4(u8 *arg0) {
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
    func_sc03_107_801804D8((s32) arg0);
}

void func_sc03_107_80180D48(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_107_801804D8((s32) arg0);
}

void func_sc03_107_80180D98(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_107_801974BC, (s32) &D_sc03_107_801974C4, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_107_801805F8(arg0);
}

void func_sc03_107_80180E18(u8 *arg0) {
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

void func_sc03_107_80180EB8(u8 *arg0) {
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
    func_sc03_107_8017F6E8(arg0);
}

void func_sc03_107_80180F88(u8 *arg0) {
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
    func_sc03_107_801801E4((s32) arg0);
}

void func_sc03_107_8018101C(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_107_80181058(s32 arg0) {
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

void func_sc03_107_80181140(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_107_8019BAC8;
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

void func_sc03_107_80181204(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_107_8019BAC8;
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

void func_sc03_107_801812B8(u8 *arg0) {
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

void func_sc03_107_801812F8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

s32 func_sc03_107_8018134C(p, d, e)
    u8 *p;
    s16 d;
    s16 e;
{
    UV4 a;
    UV4 b;
    UV4 *bp;
    s32 r;

    a.x = AF(p, u16, 6);
    a.y = AF(p, u16, 0xA);
    a.z = AF(p, u16, 0xE);
    b.x = a.x - ((rsin(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    b.y = a.y;
    bp = &b;
    b.z = a.z - ((rcos(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    r = func_80133784(1, &a, bp);
    if ((r & 0x8000) && e != 0) {
        a.x = b.x + ((rsin(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
        a.y = b.y;
        a.z = b.z + ((rcos(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
        r = func_80133784(1, bp, &a);
        AF(p, u16, 6) = a.x;
        AF(p, u16, 0xA) = a.y;
        AF(p, u16, 0xE) = a.z;
        if (!(AF(p, u16, 0x84) & 2)) {
            AF(p, u16, 0x84) |= 2;
        }
    } else {
        AF(p, u16, 0x84) &= ~2;
    }
    return r;
}

void func_sc03_107_80181500(u8 *arg0) {
    s32 v;
    s32 pad[4];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_80131C78(arg0);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 1;
    }
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        v = func_8012CBCC(arg0);
        D_sc03_107_8019BBC8 = v;
        if (v & 0x6000) {
            if (v & 0x1000) {
                AF(arg0, s16, 2) = 2;
                AF(arg0, u8, 0xC1) = 0;
                AF(arg0, s16, 0x5E) = 0;
                AF(arg0, s32, 0x1C) = 0x30;
                func_8002D4C8(0x531, 0);
                func_800291C8(0xA, AF(arg0, s16, 0xFE));
                return;
            }
            func_80143B6C(arg0, 1);
            func_8002D4C8(0x754, 0);
            AF(arg0, u8, 0xC2) = 1;
            AF(arg0, s32, 0x14) = -0xD0000;
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) >> 2;
            AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) >> 2;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x78) {
            func_80131C78(arg0);
            AF(arg0, s16, 2) = 2;
            AF(arg0, s32, 0x1C) = 1;
        }
        break;
    case 1:
        D_sc03_107_8019BBCC = AF(arg0, s32, 0x14);
        v = func_8012CBCC(arg0);
        D_sc03_107_8019BBC8 = v;
        if (v & 0x6000) {
            if (v & 0x1000) {
                AF(arg0, s16, 2) = 2;
                AF(arg0, u8, 0xC1) = 0;
                AF(arg0, s16, 0x5E) = 0;
                AF(arg0, s32, 0x1C) = 0x30;
                func_8002D4C8(0x531, 0);
                func_800291C8(0xA, AF(arg0, s16, 0xFE));
                return;
            }
            func_8002D4C8(0x754, 0);
            func_80143B6C(arg0, 1);
            v = -D_sc03_107_8019BBCC;
            AF(arg0, u8, 0xC2) = 2;
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0x14) = v;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x28) {
            func_80131C78(arg0);
            AF(arg0, s16, 2) = 2;
            AF(arg0, s32, 0x1C) = 1;
        }
        break;
    case 2:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        v = func_8012CBCC(arg0);
        D_sc03_107_8019BBC8 = v;
        if (v & 0x6000) {
            AF(arg0, s32, 0x14) = 0;
            if (v & 0x1000) {
                AF(arg0, s16, 2) = 2;
                AF(arg0, u8, 0xC1) = 0;
                AF(arg0, s16, 0x5E) = 0;
                AF(arg0, s32, 0x1C) = 0x30;
                func_8002D4C8(0x531, 0);
                func_800291C8(0xA, AF(arg0, s16, 0xFE));
                return;
            }
            if (!(AF(arg0, u16, 0x84) & 1)) {
                AF(arg0, u16, 0x84) |= 1;
                func_8002D4C8(0x754, 0);
            }
            if ((AF(arg0, s32, 0x1C) & 3) == 3) {
                func_80143B6C(arg0, 1);
            }
            if (++AF(arg0, s32, 0x1C) >= 0x11) {
                func_80131C78(arg0);
                func_8012B030(arg0);
                AF(arg0, s16, 2) = 1;
                AF(arg0, u16, 0x84) &= 0xFFFE;
            }
        }
        break;
    }
    func_sc03_107_8018134C(arg0, -0x28, 1);
    if (--AF(arg0, s16, 0x108) == 0) {
        func_800291C8(0xA, AF(arg0, s16, 0xFE));
    }
}

void func_sc03_107_80181850(u8 *o) {
    u8 *w = &D_800AF630;
    s32 v;
    u16 t;

    if (func_8012C354(o, &D_sc03_107_80198B70) != 0) {
        if ((u32)func_80029504() >= 0x1D7) {
            func_8012C218(o);
            return;
        }
        v = func_800291DC(10);
        if (!(v & 0x100)) {
            if ((s16)v != D_800B9A08) {
                func_8012C218(o);
                return;
            }
        }
        if (AF(w, s16, 0xA3D8) == 0x1052) {
            func_80029514(0x1D6);
        }
        t = AF(w, u16, 0xA3D8);
        AF(o, u16, 0xFE) = t;
        func_800291C8(10, (s16)t);
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x489;
        AF(o, u8 *, 0xBC) = &D_sc03_107_80198BB8;
        AF(o, u8, 0xC1) = 0;
        AF(o, s32, 0xC4) = 1;
        func_8012B23C(o);
        func_80143970(o);
        func_8012B030(o);
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xAE) = -1;
        AF(o, u8, 0x75) = 8;
        D_sc03_107_80198BB0 = AF(o, u16, 6);
        D_sc03_107_80198BB2 = AF(o, u16, 0xA);
        D_sc03_107_80198BB4 = AF(o, u16, 0xE);
        if (AF(w, s16, 0xA3D8) == 0x1052) {
            func_sc03_107_80181A70(o);
        }
    }
}

void func_sc03_107_801819C8(u8 *arg0) {
    u8 *t;

    if (AF(arg0, s16, 0xFC) != 0) {
        t = AF(arg0, u8 *, 0x20);
        AF(arg0, s16, 0xFC)--;
        AF(t, s32, 4) ^= 0x80000000;
    }
    if ((s16)D_80126B62 < AF(arg0, s16, 0xA) - 0x30) {
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_80198B60 | 0x40000000);
    } else {
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_107_80198B50 | 0x40000000);
    }
    ((void (*)(u8 *))D_sc03_107_80198BF8[AF(arg0, u16, 2)])(arg0);
}

void func_sc03_107_80181A70(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc03_107_80198C08);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

void func_sc03_107_80181AB8(u8 *o) {
    u8 *p;
    s32 d;

    p = (u8 *)func_8012E544(0x17E);
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (p != 0 && func_80013328(p + 4, o + 4) >= 0x60) {
            func_8012B0B4(&d, func_8012B6D4(o + 4, p + 4), 0x60);
            AF(o, u16, 6) = AF(p, u16, 6) + d;
            AF(o, u16, 0xE) = AF(p, u16, 0xE) + (d >> 16);
        }
        break;
    case 2:
        func_8012C218(o);
        break;
    }
}

void func_sc03_107_80181B94(u8 *arg0) {
    AF(arg0, u16, 0x5C) = 0x8E10;
    if (AF(arg0, s16, 0x76) < 0x320) {
        AF(arg0, s16, 0x76) = 0x384;
    }
}

void func_sc03_107_80181BB8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 4;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_8012B14C((s32) arg0, (s32) &D_sc03_107_80198BA4);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x108) = 0x28;
    func_sc03_107_8018134C((s32) arg0, -0x28, 1);
}

void func_sc03_107_80181C1C(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s16, 0xFC) = 0;
    func_800291C8(0xA, (s32) (s16) (AF(arg0, u16, 0xFE) | 0x100));
    D_sc03_107_80198BB0 = AF(arg0, u16, 6);
    D_sc03_107_80198BB2 = AF(arg0, u16, 0xA);
    D_sc03_107_80198BB4 = AF(arg0, u16, 0xE);
}

void func_sc03_107_80181C98(s32 arg0) {
    func_80131E00(arg0, 3);
}

void func_sc03_107_80181CB8(void) {
}

void func_sc03_107_80181CC0(u8 *arg0) {
    s32 temp_v1_2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x30);
    temp_v1_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 2);
    AF(arg0, s32, 0x1C) = temp_v1_2;
    if (temp_v1_2 == 0) {
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0U;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 2;
        AF(arg0, s16, 0xFC) = 0x3C;
        AF(arg0, u16, 6) = (u16) D_sc03_107_80198BB0;
        AF(arg0, u16, 0xA) = (u16) D_sc03_107_80198BB2;
        AF(arg0, u16, 0xE) = (u16) D_sc03_107_80198BB4;
        func_8012B030((s32) arg0);
        AF(arg0, u16, 0x5C) = 0x8E10;
        if (AF(arg0, s16, 0x76) < 0x320) {
            AF(arg0, s16, 0x76) = 0x384;
        }
    }
}

void func_sc03_107_80181D88(u8 *arg0) {
    D_sc03_107_80198FEC[AF(arg0, u16, 2)]();
}

void func_sc03_107_80181DC4(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc03_107_801822E4() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc03_107_80198FA0, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc03_107_80198FAC);
    func_sc03_107_8018233C((s32) arg0);
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

void func_sc03_107_80181EC0(u8 *arg0) {
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
            func_sc03_107_8018233C(arg0);
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
    func_sc03_107_801823B8(arg0);
}

void func_sc03_107_80182150(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc03_107_8018233C(arg0);
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
    func_sc03_107_801823B8(arg0);
}

s32 func_sc03_107_801822E4(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_107_8018233C(u8 *o) {
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

void func_sc03_107_801823B8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc03_107_801823FC(s32 o, s16 *v, s32 arg2) {
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
