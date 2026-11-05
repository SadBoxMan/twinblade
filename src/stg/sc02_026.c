#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_026_8017BE9C(void) {
}

void func_sc02_026_8017BEA4(void) {
}

void func_sc02_026_8017BEAC(void) {
}

void func_sc02_026_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_026_80189B14[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc02_026_80189BBC[])();
void func_sc02_026_8017D34C(void);
extern void func_800167B8();
extern void (*D_sc02_026_80189BC4[])();
void func_sc02_026_8017D374(void);
extern void func_800D1EBC();
extern void (*D_sc02_026_80189BD0[])();
extern u8 D_sc02_026_80189BDC;
extern void func_8016EE40();
extern u8 D_sc02_026_80189BE0;
extern void func_sc02_026_8017D4CC();
extern void (*D_sc02_026_80189BE4[])();
extern void (*D_sc02_026_801A4308[])();
extern void (*D_sc02_026_801A5124[])();
extern void (*D_sc02_026_801A5440[])();
extern void (*D_sc02_026_801AA28C[])();
extern void (*D_sc02_026_801AA340[])();
extern void (*D_sc02_026_801AC300[])();
extern void (*D_sc02_026_801AC394[])();
extern void (*D_sc02_026_801CCCB0[])();
extern void (*D_sc02_026_801CCFF8[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc02_026_80186448;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc02_026_801CCCE8;
extern s32 * func_sc02_026_80185FD8();
extern s32 D_sc02_026_801CCD50[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc02_026_801CCF1C;
extern s32 D_sc02_026_801CCF20;
extern s32 D_sc02_026_801CCF34;
extern s32 D_sc02_026_801CCF48;
extern s32 D_sc02_026_801CCFB4;
extern s32 D_sc02_026_801CCE98[];
extern s32 D_sc02_026_801CCE14[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc02_026_80185D80();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc02_026_801CD020[])();
extern u8 D_sc02_026_801CCD1C;
extern u8 D_sc02_026_801CD4C0;
extern u8 D_sc02_026_801CD6E0;
extern void func_8002D4C8();
extern u8 D_sc02_026_801CD4D0;
extern u8 D_sc02_026_801CD5D8;

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
extern s32 D_sc02_026_80189BF4[];
extern s32 func_8013B7F4();
extern void (*D_sc02_026_801A42AC[])();
extern void func_sc02_026_8017DD84();
extern s32 D_sc02_026_801A4264;
extern void (*D_sc02_026_801A50D8[])();
extern u8 D_sc02_026_801A9B40;
extern s32 func_8012BD3C();
extern s32 func_8012E778();
extern s32 func_8012BEE8();
extern void func_8012B2CC();
extern s32 func_8012BD14();
extern u8 D_sc02_026_801A4FE0;
extern void func_80143CD4();
extern void func_800CB0E8();
extern void func_80130D48();
extern void func_sc02_026_8017EC78();
extern void func_8002A04C();
extern void func_8012C098();
extern u8 D_sc02_026_801A5170;
extern u8 D_sc02_026_801A52F8;
extern u8 D_sc02_026_801A9DA0;
extern u8 D_sc02_026_801A9DC0;
extern u8 D_sc02_026_801A9E84;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc02_026_801AF67C;
extern void func_8012B14C();
extern u8 D_sc02_026_801BBB78;
extern void func_8012C588();
extern u8 D_sc02_026_801AF698;
extern u8 D_sc02_026_801BB960;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc02_026_801AF930;
extern u8 D_sc02_026_801AF938;
extern u8 D_sc02_026_801BC420;
extern u8 D_sc02_026_801BCBA0;
extern s32 func_8012DEB8();
extern u8 D_sc02_026_801BC760;
extern u8 D_sc02_026_801BD010;

extern s32 func_800167F0();
extern void (*D_sc02_026_801AC2B0[])();
extern void func_8012C0EC();
extern void func_8012B030();
extern u8 D_800D3918;
extern s32 func_sc02_026_80182B90();
extern void func_801292C8();
extern void func_sc02_026_80182DBC();

extern u8 D_801202A0;


extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc02_026_801AA15C[];
extern u8 D_sc02_026_801A9EC0;
extern u8 D_sc02_026_801A9F80;
extern u8 D_sc02_026_801AA008;
extern u8 D_sc02_026_801AA0C8;
extern u8 D_sc02_026_801AA1AC;
extern u8 D_sc02_026_801AA1D0;
extern u8 D_sc02_026_801AA1BC;
extern u8 D_sc02_026_801AA1C8;


extern void func_8012931C();

extern s32 func_sc02_026_801825A4();
extern void func_8012B178();
extern void (*D_sc02_026_801AFA04[])();
extern s32 func_8012D624();
extern void func_8012B370();

extern u8 D_sc02_026_80189DB0;
extern u8 D_sc02_026_80189F04;
s32 func_sc02_026_8017D918(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc02_026_80189FA4;
extern u8 D_sc02_026_8018A01C;
extern u8 D_sc02_026_801AF9C8;
extern u8 D_sc02_026_801AF9E0;
extern u8 D_sc02_026_801AF9F8;
extern u8 D_sc02_026_801AFA10;
extern u8 D_sc02_026_801AFAD0;
extern u8 D_sc02_026_801AFB58;

extern u8 D_sc02_026_801AC1D0;
extern u8 D_sc02_026_801AC270;
extern s32 func_sc02_026_80182550();
extern void func_8012E8A8();

extern s32 rsin();
extern s32 rcos();
extern void func_8012B77C();
extern s32 func_80143C74();
extern u8 *D_801151D4;
typedef struct { s16 vx, vy, vz, pad; } SV;
extern u8 D_sc02_026_801BB2D8;
extern u8 D_sc02_026_801BB4E0;
extern u8 D_sc02_026_801BC098;
extern s32 func_8012CEB0();
extern void func_80131E00();
extern void SetScript();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern VoidFn D_sc02_026_801A9EB8[];
extern s32 func_8012B6D4();
extern s32 func_80135888();

extern s32 D_80126B5C;
extern s16 D_80126B62;
extern s32 D_80126B64;
extern s32 func_8012B8E4();
extern s32 func_8012B1B4();
extern u8 D_sc02_026_801B5A4C;
extern u8 D_sc02_026_801BD190;
extern void func_8001C214();

extern u8 D_sc02_026_801AF950;
extern u8 D_sc02_026_801BC658;
extern s32 func_80133784();
extern s32 func_8012BCCC();
extern s32 func_8012BDBC();

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern u8 D_sc02_026_801AF688;
extern u8 D_sc02_026_801AF95C;
extern u8 D_sc02_026_801BD1A8;
extern void SetRotMatrix();
extern void SetTransMatrix();
extern s32 RotTransPers();
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc02_026_801CCBD0;
extern s16 D_sc02_026_801CCBD2;
extern s16 D_sc02_026_801CCBD4;
extern Blk30 D_sc02_026_801CCBD8;
extern s16 D_sc02_026_801CCC08;
extern s16 D_sc02_026_801CCC0A;
extern s16 D_sc02_026_801CCC0C;
extern Blk30 D_sc02_026_801CCC10;
extern s16 D_sc02_026_801CCC40;
extern s16 D_sc02_026_801CCC42;
extern s16 D_sc02_026_801CCC44;
extern Blk30 D_sc02_026_801CCC48;
extern s16 D_sc02_026_801CCC78;
extern s16 D_sc02_026_801CCC7A;
extern s16 D_sc02_026_801CCC7C;
extern Blk30 D_sc02_026_801CCC80;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_8012AD44();
extern void func_80028620();

extern u16 D_sc02_026_801A9DF4[];
extern u16 D_sc02_026_801A9E1C[];
extern u16 D_sc02_026_801A9E44[];
extern VoidFn D_sc02_026_801A9E6C[];
extern void func_8002D59C();
typedef struct { u8 b[0x34]; } R34;
extern R34 D_sc02_026_801AF6B8[];
extern u8 D_sc02_026_801AF7F0;
extern u8 D_sc02_026_801AF890;
extern u8 D_sc02_026_801AF8D8;
extern u8 D_sc02_026_801BCE90;
extern void func_80143970();
extern s32 rand();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc02_026_80189B08;
extern u8 *func_800D21C4();

extern u8 D_sc02_026_801BC318;
extern u8 D_sc02_026_801BC998;


extern s32 func_sc02_026_80182CE4();
extern s32 func_800132BC();
extern s32 func_8012BE54();
extern void func_8012E88C();
extern void func_8012B21C();
extern void func_80143B6C();
extern void func_80131C78();
extern s32 func_8012CBF4();
extern void func_sc02_026_8018226C();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern void func_8012ADE4();



extern void RotTransSV();
extern s32 D_sc02_026_801AC2CC[];
extern s32 func_sc02_026_80182318();

extern u8 D_sc02_026_801BBA08;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc02_026_8017D780();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

extern void func_8012AD50();
extern u16 D_sc02_026_801A429C[];
extern u8 D_sc02_026_801A428C;
extern u8 D_sc02_026_801A427C;

typedef struct { s32 a; s32 b; } P8;
extern void func_80132784();
extern void ApplyMatrixLV();
extern u8 *func_80132EF4();
extern P8 D_sc02_026_801D0120[];
extern V16 D_sc02_026_801A42B8[];

extern u8 D_sc02_026_801A4F78;
extern u8 D_sc02_026_801A5068;
extern void func_sc02_026_8017F6B0();
extern s32 func_sc02_026_8017F400();
extern u8 D_sc02_026_801A9C08;

extern u8 D_sc02_026_801A50F4;
extern u8 D_sc02_026_801A5104;
extern u8 * func_sc02_026_8017F76C();

extern void func_8012E9C0();
extern void func_8002A520();
extern void func_8002A790();
extern void VectorNormalSS();
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern u8 D_sc02_026_801A9D90;
extern void func_sc02_026_8017F538();
extern s32 func_8012CC1C();
extern void func_sc02_026_8017F47C();
extern s32 func_sc02_026_8017F390();
extern void func_sc02_026_8017F5DC();
extern SV8 D_sc02_026_801A5458;

typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
extern u8 D_sc02_026_801AC2E4;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern Rec801AC2F0 D_sc02_026_801AC2F0[];
extern s32 func_801290DC();
extern WMtx D_800AE620;
extern void RotMatrixZYX();
extern u8 D_sc02_026_801A5488;

extern s16 D_sc02_026_801AA252[];
extern s32 D_800A5E90;
extern V16 D_sc02_026_801CCBF8;
extern s32 D_800A5EB0;
extern V16 D_sc02_026_801CCC30;
extern s16 D_80126CB6;
extern u8 D_sc02_026_801AA150;
extern s32 func_8012B864();
extern u8 D_sc02_026_801AA218;
extern u16 D_sc02_026_801AA24C[];
extern u16 D_sc02_026_801AA24E[];
extern u16 D_sc02_026_801AA250[];
extern s32 func_8012B70C();
extern u8 D_sc02_026_801AA298;
extern u8 D_sc02_026_801AA2F8;
extern VoidFn D_sc02_026_801AA1E0[];
extern u8 D_sc02_026_801BC890;
extern VoidFn D_sc02_026_801AFB64[];
extern VoidFn D_sc02_026_801AF974[];
extern u8 D_sc02_026_801AF66C;
extern void func_80153C74();
extern u8 D_sc02_026_801AF940;
extern u8 D_sc02_026_801AF948;
extern u8 D_sc02_026_801AF968;
extern s32 func_8012D5E4();
extern u8 D_sc02_026_801BCF28;
extern s32 D_sc02_026_801AC31C;
extern void func_800183E0();
extern s32 func_8012C51C();
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern void *D_80126B78;
extern u8 D_801152A8;
extern void func_8012F568();
extern SV8 D_sc02_026_801AC2D4[];
extern void RotMatrixY();
extern void func_8001C924();
extern void func_sc02_026_8017F440();
extern u16 D_80126B9A;
extern u8 D_sc02_026_801A513C;
extern void func_sc02_026_8017ED0C();
extern u8 D_sc02_026_801A8938;
extern SpawnDef D_sc02_026_801A5460[];

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
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_80146A6C();

void func_sc02_026_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc02_026_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc02_026_80189B08, 0x2A);
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

void func_sc02_026_8017C0E4(u8 *arg0) {
    D_sc02_026_80189B14[AF(arg0, u16, 2)]();
}

void func_sc02_026_8017C120(u8 *arg0) {
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

void func_sc02_026_8017C180(u8 *obj) {
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

void func_sc02_026_8017D060(void) {
    D_801274C8 = &D_sc02_026_80189DB0;
    D_801274CC = &D_sc02_026_80189F04;
    func_sc02_026_8017D918(0);
}

void func_sc02_026_8017D0A0(void) {
    D_801274C8 = &D_sc02_026_80189FA4;
    D_801274CC = &D_sc02_026_8018A01C;
    func_sc02_026_8017D918(1);
}

void func_sc02_026_8017D0E0(u8 *arg0) {
    D_sc02_026_80189BBC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_026_8017D11C(u8 *arg0) {
    func_sc02_026_8017D34C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_026_8017D160(void) {
    return (func_800167F0(3) & 0xFFFF) != 0;
}

void func_sc02_026_8017D184(u8 *arg0) {
    D_sc02_026_80189BC4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_026_8017D1C0(u8 *arg0) {
    func_sc02_026_8017D374();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_026_8017D200(u8 *arg0) {
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

void func_sc02_026_8017D27C(void) {
    func_800D1EBC();
}

void func_sc02_026_8017D29C(u8 *arg0) {
    D_sc02_026_80189BD0[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_026_8017D2D8(u8 *arg0) {
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

void func_sc02_026_8017D34C(void) {
    func_8016EE40((s32) &D_sc02_026_80189BDC, 0x01000000);
}

void func_sc02_026_8017D374(void) {
    func_8016EE40((s32) &D_sc02_026_80189BE0, 0x01000000);
}

void func_sc02_026_8017D39C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_026_8017D4CC, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_026_8017D4CC((s32) &D_80126948);
}

void func_sc02_026_8017D434(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_026_8017D4CC, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_026_8017D4CC((s32) &D_80126948);
}

void func_sc02_026_8017D4CC(s32 arg0) {
    D_sc02_026_80189BE4[AF(arg0, u8, 4)]();
}

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
extern void func_80172710();
extern SV8 D_sc02_026_801CD010[];

extern u8 D_80126940;
extern u8 D_sc02_026_80189BEC[];
extern s32 func_80148800();

void func_sc02_026_8017D508(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc02_026_80189BEC)[t];
    }
    v = *(B8 *)&D_80126940;
    if (AF(&v, s16, 0) > 0x2C0 && AF(&v, s16, 0) < 0x580 && AF(&v, s16, 2) >= -0x35F
        && AF(&v, s16, 4) > 0x580 && AF(&v, s16, 4) < 0xD00) {
        AF(arg0, s16, 0x20) = 0x71;
        AF(arg0, s16, 0x22) = 0x600;
        AF(arg0, s16, 0x24) = 0;
        AF(arg0, s16, 0x2E) = 0;
        AF(arg0, s16, 0x30) = -0x50;
        AF(arg0, s16, 0x32) = 0;
    } else if (AF(&v, s16, 0) > -0x600 && AF(&v, s16, 0) < 0 && AF(&v, s16, 4) > 0x680 && AF(&v, s16, 4) < 0xA7D) {
        AF(arg0, s16, 0x20) = 0x2AA;
        AF(arg0, s16, 0x22) = 0x800;
        AF(arg0, s16, 0x24) = 0;
        AF(arg0, s16, 0x2E) = 0;
        AF(arg0, s16, 0x30) = 0;
        AF(arg0, s16, 0x32) = 0;
    } else if (AF(&v, s16, 4) < 0x380) {
        AF(arg0, s16, 0x20) = 0x71;
        AF(arg0, s16, 0x22) = 0x600;
        AF(arg0, s16, 0x24) = 0;
        AF(arg0, s16, 0x2E) = 0;
        AF(arg0, s16, 0x30) = -0x50;
        AF(arg0, s16, 0x32) = 0;
    } else {
        AF(arg0, s16, 0x20) = 0x2AA;
        AF(arg0, s16, 0x22) = 0x600;
        AF(arg0, s16, 0x24) = 0;
        AF(arg0, s16, 0x2E) = 0;
        AF(arg0, s16, 0x30) = 0;
        AF(arg0, s16, 0x32) = 0;
    }
    if (AF(&v, s16, 0) < -0x400) {
        AF(&v, s16, 0) = -0x400;
    }
    if (AF(&v, s16, 2) > -0x102) {
        AF(&v, s16, 2) = -0x102;
    }
    func_sc02_026_8017D780(arg0, &v);
}

extern s32 D_8012704C;



extern s16 D_80126CAC;
extern s16 D_80126CB0;
extern u8 D_sc02_026_80189BF0[];

void func_sc02_026_8017D6D0(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc02_026_80189BF0)[t];
    }
    v = *(B8 *)&D_80126940;
    AF(&v, s16, 0) = 0x400;
    AF(&v, s16, 4) = 0xE20;
    func_sc02_026_8017D780(arg0, &v);
}

void func_sc02_026_8017D780(u8 *arg0, u8 *arg1) {
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

s32 func_sc02_026_8017D918(s32 arg0) {
    return func_8013B7F4(D_sc02_026_80189BF4[arg0], 0);
}

s32 func_sc02_026_8017D948(SV8 *o) {
    V3 d;

    d.x = D_80126CAC - o->x;
    d.y = 0;
    d.z = D_80126CB0 - o->z;
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return d.x + d.y + d.z > 0x10000 && d.x + d.y + d.z < 0x19000;
}

s32 func_sc02_026_8017D9D8(u8 *o) {
    V3 d;

    d.x = D_80126CAC - AF(o, s16, 6);
    d.y = 0;
    d.z = D_80126CB0 - AF(o, s16, 0xE);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return d.x + d.y + d.z > 0x8FFFF;
}

s32 func_sc02_026_8017DA5C(void) {
    switch (D_8012704C) {
    case 0:
        return 0x39;
    case 1:
        return 0x3B;
    case 2:
        return 0x45;
    }
}

void func_sc02_026_8017DAB8(u8 *p) {
    s32 r;
    u8 *o;

    r = func_8012C1B8();
    AF(p, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(p);
        return;
    }
    if (func_80029178(D_sc02_026_801A429C[AF(p, s16, 0x70)]) & 0xFF) {
        o = AF(p, u8 *, 0xDC);
        if (o != 0 && AF(o, s32, 4) != 0) {
            func_8001C214(AF(p, s32, 0x20), AF(o, s32, 4));
            if (AF(o, s32, 0xC) != 0) {
                AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
            }
        }
        func_8012AD50(p);
    } else {
        o = AF(p, u8 *, 0xDC);
        if (o != 0 && AF(o, s32, 0) != 0) {
            func_8001C214(AF(p, s32, 0x20), AF(o, s32, 0));
            if (AF(o, s32, 0xC) != 0) {
                AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
            }
        }
        AF(p, u8, 0xC0) = 1;
        AF(p, u8 *, 0xBC) = &D_sc02_026_801A428C;
        AF(p, s32, 0x58) = (s32) &D_sc02_026_801A427C | 0x40000000;
        AF(p, u16, 0x5C) = 0x8800;
        AF(p, s32, 0xB4) = 0;
        AF(p, u8, 0xC1) = 0;
        AF(p, s16, 0xAE) = 0x7FFF;
        AF(p, u8, 0x75) = 0;
        AF(p, s32, 0xC4) |= 2;
    }
    func_8012AD50(p);
}

void func_sc02_026_8017DC3C(u8 *arg0) {
    D_sc02_026_801A42AC[AF(arg0, u16, 2)]();
    func_sc02_026_8017DD84((s32) arg0);
}

void func_sc02_026_8017DC8C(u8 *arg0) {
    void *p;
    s32 t;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_80029124(D_sc02_026_801A429C[AF(arg0, s16, 0x70)], 1);
    p = AF(arg0, void *, 0xDC);
    if (p != NULL) {
        t = AF(p, s32, 4);
        if (t != 0) {
            func_8001C924(AF(arg0, s32, 0x20), t);
        }
    }
    func_sc02_026_8017DD0C((s32) arg0);
}

s32 func_sc02_026_8017DD0C(s32 arg0) {
    s32 temp_s2;
    s32 var_s0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_s2 = AF(temp_v1, s32, 0x20);
    var_s0 = 0;
    AF(temp_v1, s32, 0x20) = (s32) D_sc02_026_801A4264;
    do {
        func_8012C658(0x150, var_s0, arg0);
        var_s0 += 1;
    } while (var_s0 < 5);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 0x20) = temp_s2;
    return (s32) temp_v0;
}

void func_sc02_026_8017DD84(u8 *arg0) {
    u8 *p;
    VoidFn fn;

    p = AF(arg0, u8 *, 0xDC);
    if (p != NULL) {
        fn = AF(p, VoidFn, 0xC);
        if (fn != NULL) {
            fn(arg0, arg0 + 0x24);
        }
    }
}

void func_sc02_026_8017DDC4(u8 *p) {
    s32 r;
    u8 *o;
    u8 *q;

    r = func_8012C1B8();
    AF(p, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(p);
        return;
    }
    o = AF(AF(p, u8 *, 0x64), u8 *, 0xDC);
    if (o != 0 && AF(o, s32 *, 8) != 0) {
        D_sc02_026_801D0120[AF(p, s16, 0x70)].a = AF(o, s32 *, 8)[AF(p, s16, 0x70)];
    }
    D_sc02_026_801D0120[AF(p, s16, 0x70)].b = 0;
    func_8001C214(AF(p, s32, 0x20), &D_sc02_026_801D0120[AF(p, s16, 0x70)]);
    if (AF(o, s32, 0xC) != 0) {
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
    }
    AF(p, s16, 6) = AF(p, s16, 0xA) = AF(p, s16, 0xE) = 0;
    func_80132784(p, AF(p, u8 *, 0x64), AF(p, u16, 0x70));
    AF(p, s16, 6) = AF(AF(p, u8 *, 0x20), s32, 0x48);
    AF(p, s16, 0xA) = AF(AF(p, u8 *, 0x20), s32, 0x4C);
    AF(p, s16, 0xE) = AF(AF(p, u8 *, 0x20), s32, 0x50);
    AF(AF(p, u8 *, 0x20), B8, 0x10) = AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), B8, 0x10);
    func_8012B23C(p);
    ApplyMatrixLV(AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34, &D_sc02_026_801A42B8[AF(p, s16, 0x70)], p + 0x10);
    AF(p, s16, 0xFC) = rand() & 0xF0;
    AF(p, s16, 0xFE) = rand() & 0x1F0;
    AF(p, s16, 0x100) = rand() & 0x30;
    q = func_80132EF4(p, 0x22);
    if (q != 0) {
        AF(q, s16, 0x34) = 0x4001;
        AF(q, s32, 0x10) = AF(p, s32, 0x10) >> 2;
        AF(q, s32, 0x14) = AF(p, s32, 0x14) >> 2;
        AF(q, s32, 0x18) = AF(p, s32, 0x18) >> 2;
    }
    AF(p, s32, 0x1C) = 0x20;
    func_8012AD50(p);
}

void func_sc02_026_8017DFE0(u8 *arg0) {
    D_sc02_026_801A4308[AF(arg0, u16, 2)]();
}

void func_sc02_026_8017E01C(void) {
}

void func_sc02_026_8017E024(void) {
}

void func_sc02_026_8017E02C(u8 *arg0) {
    s32 r;

    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0xFC);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += AF(arg0, u16, 0xFE);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x100);
    r = func_8012CBF4(arg0);
    if (AF(arg0, s16, 0xA) > 0x100) {
        func_8012C218(arg0);
    }
    if (AF(arg0, u16, 0x34) != 0) {
        if (r & 0x6000) {
            func_8012C218(arg0);
        }
    } else if (r & 0x6000) {
        AF(arg0, s32, 0x14) = -0x80000;
        AF(arg0, s16, 0xFC) >>= 1;
        AF(arg0, s16, 0xFE) >>= 1;
        AF(arg0, u16, 0x34)++;
        AF(arg0, s16, 0x100) >>= 1;
    }
}

void func_sc02_026_8017E130(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    D_sc02_026_801A50D8[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, u16, 0x70) & 1)) {
        if (AF(arg0, s16, 0xAA) != 0) {
            AF(arg0, s16, 0x102) = 1;
        }
        if ((AF(arg0, s16, 0x102) != 0) && (AF(arg0, s16, 0xAA) == 0)) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(arg0, s16, 0x102) = 0;
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(temp_v1_2, s16, 0x1C) = 0x1666;
            AF(temp_v1_2, s16, 0x1A) = 0x1666;
            AF(temp_v1_2, s16, 0x18) = 0x1666;
        }
    }
}

void func_sc02_026_8017E1FC(u8 *arg0) {
    u8 *q;

    if (func_8012C354(arg0, &D_sc02_026_801A4F78 + (AF(arg0, u16, 0x70) & 1) * 0x34) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_026_801A5068;
        AF(arg0, s32, 0xB4) = -0x20EF;
        AF(arg0, s32, 0xC4) |= 3;
        if (AF(arg0, s32, 0xDC) == 0) {
            AF(arg0, s32, 0xDC) = 0x40000;
        }
        if (AF(arg0, s16, 0xFE) == 0) {
            AF(arg0, s16, 0xFE) = 0x3C;
        }
        if (AF(arg0, u16, 0x70) & 1) {
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            q = AF(arg0, u8 *, 0x20);
            AF(q, s16, 0x1C) = 0x1666;
            AF(q, s16, 0x1A) = 0x1666;
            AF(q, s16, 0x18) = 0x1666;
            AF(arg0, s16, 0x100) = 0x1666;
        } else {
            AF(arg0, s16, 0x100) = 0x1000;
        }
        func_8012C588(0x153, arg0);
        func_sc02_026_8017F6B0(arg0, 1);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_026_8017E304(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    SetScript((s32) arg0, (s32) &D_sc02_026_801A9B40, arg2);
}

void func_sc02_026_8017E330(u8 *arg0) {
    if (func_8012BD3C((s32) arg0, 0x400, AF(arg0, s32, 0xDC)) != 0) {
        AF(arg0, s16, 2) = 3;
    }
    if ((AF(arg0, u16, 0x72) & 0x4000) && (func_8012E778((s32) arg0, 0x8C00B4) == 1)) {
        func_8002D4C8(0x64A, 0);
    }
}

void func_sc02_026_8017E3A0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
}

void func_sc02_026_8017E3AC(u8 *arg0) {
    s32 sp10[2];
    s32 sp18[2];
    u8 *p;
    s16 hi;
    s16 lo;
    s32 i;
    u16 y;

    if (!(AF(arg0, s32, 0xE0) & 1)) {
        if (func_8012BD3C((s32) arg0, 0x400, AF(arg0, s32, 0xDC)) == 0) {
            AF(arg0, s16, 2) = 1;
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_026_801A9C08);
            if (func_8012E778((s32) arg0, 0x8C00B4) == 1) {
                func_8002D4C8(0x64A, 0);
            }
        }
    }
    if (AF(arg0, s32, 0x94) == 0x19) {
        FaceHelper(arg0, &D_sc02_026_801A50F4, sp10);
        FaceHelper(arg0, &D_sc02_026_801A50F4 + 8, sp18);
        y = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
        hi = y + 0x400;
        lo = y - 0x400;
        for (i = 0; i < 6; i++) {
            func_sc02_026_8017F76C(sp10, hi, 0xFFF80000 - ((rand() % 4) << 0x10), 0);
            func_sc02_026_8017F76C(sp18, lo, 0xFFF80000 - ((rand() % 4) << 0x10), 0);
        }
        for (i = 0; i < 4; i++) {
            FaceHelper(arg0, (u8 *) &D_sc02_026_801A5104 + i * 8, sp10);
            func_sc02_026_8017F76C(sp10, 0, ((rand() % 4) << 0x10) + 0x80000, 1);
        }
    }
}

void func_sc02_026_8017E590(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if ((func_8012BEE8(arg0, arg1, arg2) != 0) && (func_8012BD14(arg0) > 0x18FFF)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 1;
        AF(temp_v1_3, s16, 0x1A) = 1;
        AF(temp_v1_3, s16, 0x18) = 1;
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s16, 0x14) = 0;
        AF(temp_v0, s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x68), u16, 0xC);
        func_8012B2CC(arg0);
    }
}

void func_sc02_026_8017E654(u8 *o) {
    u8 *m = AF(o, u8 *, 0x20);
    s16 s;
    s16 lim;
    s = rcos((AF(o, s32, 0x1C) << 9) >> 4) * 2;
    AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = s;
    lim = AF(o, s16, 0x100);
    if (s >= lim) {
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = lim;
        AF(o, s16, 2) = 1;
        AF(o, u16, 0x5C) = AF(AF(o, u8 *, 0x78), u16, 2);
        AF(o, u16, 0x76) = AF(AF(o, u8 *, 0x78), u16, 0);
        AF(o, s32, 0xE0) &= ~1;
        if (!(AF(o, u16, 0x70) & 1)) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= ~0x10;
        }
    }
    AF(o, s32, 0x1C)--;
}

void func_sc02_026_8017E72C(u8 *o) {
    SV8 v;
    s32 n;

    func_8012E9C0(o);
    if (AF(o, u16, 0x5E) != 0x1D) {
        if (AF(o, u8, 0xC8) != 0) {
            func_8002A520(o);
        }
        if (AF(o, u8, 0xC9) != 0) {
            func_8002A790(o);
        }
    }
    n = AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30) >> 12;
    if (n <= 0) {
        n = 1;
    }
    AF(o, u16, 0x76) -= n;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, s16, 0x76) <= 0) {
        AF(o, u16, 0x5C) = 0;
        func_80131E00(o, 0xE);
    } else {
        if (n > 0x10) {
            n = 0x10;
        }
        v.x = AF(o, u16, 0x6) - D_80126B5E;
        v.y = AF(o, u16, 0xA) - D_80126B62;
        v.z = AF(o, u16, 0xE) - D_80126B66;
        VectorNormalSS(&v, o + 0x102);
        n += 8;
        AF(o, s16, 0x102) = n * AF(o, s16, 0x102) >> 12;
        AF(o, s16, 0x104) = n * AF(o, s16, 0x104) >> 12;
        AF(o, s16, 0x106) = n * AF(o, s16, 0x106) >> 12;
        AF(o, s32, 0x1C) = 0x10;
    }
    AF(o, u16, 0x6) = AF(o, u16, 0x88);
    AF(o, u16, 0xA) = AF(o, u16, 0x8A);
    AF(o, u16, 0xE) = AF(o, u16, 0x8C);
    SetScript(o, &D_sc02_026_801A9D90);
}

void func_sc02_026_8017E8D4(u8 *arg0) {
    s32 v;
    v = -(rsin((AF(arg0, s32, 0x1C) << 10) & 0xC00) >> 12);
    AF(arg0, u16, 6) += AF(arg0, u16, 0x102) * v;
    AF(arg0, u16, 0xA) += AF(arg0, u16, 0x104) * v;
    AF(arg0, u16, 0xE) += AF(arg0, u16, 0x106) * v;
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        func_sc02_026_8017ED0C(arg0);
    }
}

void func_sc02_026_8017E980(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x78;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_80143CD4();
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8((s32) arg0);
    AF(arg0, s32 *, 0xCC) = &D_sc02_026_801A4FE0;
}

void func_sc02_026_8017E9E8(u8 *arg0) {
    u16 *p;
    u8 *q;

    p = AF(arg0, u16 *, 0xCC);
    q = AF(arg0, u8 *, 0x20);
    AF(q, u16, 0x10) = p[0];
    AF(q, u16, 0x14) = p[2];
    p += 4;
    if (((s16 *)p)[3] == 0x7FFF) {
        AF(arg0, u8 *, 0xCC) = &D_sc02_026_801A4FE0;
    } else {
        AF(arg0, u16 *, 0xCC) = p;
    }
    if (func_8012BEE8(arg0) != 0) {
        u8 *r = AF(arg0, u8 *, 0x20);
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(r, u16, 0x14) = 0;
        AF(r, u16, 0x10) = 0;
        func_sc02_026_8017ED0C(arg0);
    }
}

void func_sc02_026_8017EA78(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

extern s16 D_80126CE0;
extern s32 D_sc02_026_801D0148;
extern s32 D_sc02_026_801D014C;
typedef struct { u8 pad0[0x18]; s16 s18; s16 s1A; s16 s1C; u8 pad1[0xE]; u16 f2C; } EA88O;
typedef struct { u8 pad0[0x20]; EA88O *o; u8 pad1[0x38]; s16 f5C; u8 pad2[0x12]; u16 f70; } EA88P;

/* squash and stretch (the stage copy of func_8012E364): the 0x5C clear is a plain (non-struct) store so the
   D_80126CE0 load stays after it (2.7.2 lets a struct store pass a scalar global load); abs() is one insn */
void func_sc02_026_8017EA88(EA88P *p) {
    s32 t;
    s32 d;
    s32 old;
    s32 v;
    s32 k;
    s32 m;
    EA88O *o;
    EA88O *o1;
    AF(p, s16, 0x5C) = 0;
    m = (p->f70 & 1) * 0x666;
    t = D_80126CE0;
    if (t == 0) {
        D_sc02_026_801D014C = D_sc02_026_801D0148 = (s16) m + 0x1000;
    }
    k = (s16) m + 0x1000;
    t = k * (0x90 - t) / 144;
    d = D_sc02_026_801D0148 - t;
    if (d > 0) {
        D_sc02_026_801D0148 -= d >> 2;
    } else if (d < 0) {
        D_sc02_026_801D0148 += -d / 4;
    }
    old = D_sc02_026_801D014C;
    o1 = p->o;
    v = D_sc02_026_801D0148 - old + k;
    D_sc02_026_801D014C = k;
    D_sc02_026_801D0148 = v;
    o1->f2C |= 0x10;
    o = p->o;
    o->s18 = o->s1C = abs(v);
    p->o->s1A = m + 0x1000;
}

void func_sc02_026_8017EBB8(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0x10000;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    if (!(AF(arg0, u16, 0x70) & 1)) {
        var_s0 = 0x6400;
    }
    func_8002D4C8((func_8012BD14() < var_s0) ? 0x64B : 0x652, 0);
}

void func_sc02_026_8017EC18(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    if (func_8012BEE8((s32) arg0, 0x80000000, arg2) != 0) {
        func_8002AC00(0xF);
        func_80130D48((s32) arg0);
        func_sc02_026_8017EC78((s32) arg0);
    }
}

void func_sc02_026_8017EC78(s32 arg0) {
    void *temp_a0;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0xC000) {
        func_8012C098(arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 2) = 5;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s32, 0x1C) = 0x78;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
    AF(arg0, s16, 0xAA) = 0;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
}

void func_sc02_026_8017ED0C(u8 *arg0) {
    u8 *q;

    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
    AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
        q = AF(arg0, u8 *, 0x20);
        AF(q, s16, 0x1C) = 0x1666;
        AF(q, s16, 0x1A) = 0x1666;
        AF(q, s16, 0x18) = 0x1666;
        AF(arg0, s16, 0x100) = 0x1666;
    }
}

void func_sc02_026_8017ED80(u8 *arg0) {
    D_sc02_026_801A5124[AF(arg0, u16, 2)]();
}

void func_sc02_026_8017EDBC(u8 *arg0) {
    s32 r;

    r = func_8012C1B8();
    AF(arg0, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(r, &D_sc02_026_801A8938);
    AF(arg0, u16, 0xFC) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(AF(arg0, u8 *, 0x20), SV8, 0x18) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), SV8, 0x18);
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x2C);
    AF(arg0, s16, 2) = 1;
}

void func_sc02_026_8017EE74(u8 *arg0, s32 arg1) {
    if (AF(AF(arg0, void *, 0x64), s16, 0x36) != AF(arg0, s16, 0xFC)) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc02_026_8017EEB0(u8 *arg0) {
    D_sc02_026_801A5440[AF(arg0, u16, 2)]();
}

void func_sc02_026_8017EEEC(u8 *arg0) {
    if (func_8012C354(arg0, &D_sc02_026_801A513C) != 0) {
        AF(arg0, u16, 0xFC) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
        if (!(AF(arg0, u16, 0x70) & 1)) {
            func_8012E8A8(arg0);
        }
        AF(arg0, u16, 0x104) = AF(AF(arg0, u8 *, 0x64), u16, 0xFC);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_026_8017EF64(u8 *p) {
    u8 *o;

    if (func_sc02_026_8017F400(p) == 1) {
        return;
    }
    o = AF(p, u8 *, 0x64);
    if (AF(o, u16, 2) == 4 && AF(o, u8 *, 0x90) == &D_sc02_026_801A9C08 && AF(o, s32, 0x94) == 0 &&
        AF(o, u8, 0xC1) == 0 && !(AF(o, u16, 0x5C) & 1)) {
        AF(p, s16, 2) = 4;
    }
    AF(AF(p, u8 *, 0x20), u16, 0x12) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    AF(AF(p, u8 *, 0x20), B8, 0x18) = AF(AF(o, u8 *, 0x20), B8, 0x18);
    AF(AF(p, u8 *, 0x20), u16, 0x2C) = AF(AF(o, u8 *, 0x20), u16, 0x2C);
    AF(p, u16, 0x5C) = (AF(o, u16, 0x5C) & 0xF7FF) | 0x4000;
    if (AF(p, u16, 0x70) & 1) {
        AF(AF(p, u8 *, 0x20), s32, 4) = AF(AF(o, u8 *, 0x20), s32, 4);
    }
}

void func_sc02_026_8017F080(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s32 *, 0xCC) = &D_sc02_026_801A5170;
}

void func_sc02_026_8017F098(u8 *o) {
    SV8 v;
    u8 *s;

    s = AF(o, u8 *, 0xCC);
    func_8012F14C(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34, s, &v);
    AF(o, s16, 0x6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    s += 8;
    if (AF(s, s16, 0x6) == 0x7FFF) {
        AF(o, s16, 2) = 1;
        AF(o, u16, 0x70) |= 1;
    } else {
        AF(o, u8 *, 0xCC) = s;
    }
}

void func_sc02_026_8017F12C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x64);
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32 *, 0xCC) = &D_sc02_026_801A52F8;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    if (AF(arg0, s16, 0xFC) == AF(temp_a1, s16, 0x36)) {
        AF(temp_a1, s32, 0xE0) = (s32) (AF(temp_a1, s32, 0xE0) | 1);
    }
}

void func_sc02_026_8017F17C(u8 *o) {
    SV8 v;
    
    u8 *p;
    u8 *s;
    s32 r;
    s32 x;

    if (func_sc02_026_8017F400(o) == 1) {
        return;
    }
    p = AF(o, u8 *, 0x64);
    if (AF(o, u16, 0x34) == 0) {
        if (++AF(o, s32, 0x1C) == 0x1D) {
            AF(o, s16, 0x100) = 1;
        }
        s = AF(o, u8 *, 0xCC);
        AF(AF(o, u8 *, 0x20), u16, 0x10) = AF(s, u16, 0x6);
        func_8012F14C(AF(p, u8 *, 0x20) + 0x34, s, &v);
        AF(o, s16, 0x6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
        s += 8;
        if (AF(s, s16, 0x6) == 0x7FFF) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s32, 0x48) = 0x18000;
            AF(o, s16, 0x102) = 0;
            AF(o, u16, 0x34)++;
            AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
            func_sc02_026_8017F538(o, 0xFFF00000);
        } else {
            AF(o, u8 *, 0xCC) = s;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x80;
        if (AF(o, s16, 0x102) < 0x20) {
            AF(o, s16, 0x102)++;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C) + 0x100;
        }
        v = D_sc02_026_801A5458;
        v.y = v.y * AF(AF(o, u8 *, 0x20), s16, 0x1A) >> 12;
        r = func_8012CC1C(o, &v);
        if (r & 0x2000) x = r & 0x8000; else x = func_8012BEE8(o);
        if (x) {
            AF(p, s32, 0xE0) &= ~1;
            func_sc02_026_8017F47C(o);
            return;
        }
    }
    func_sc02_026_8017F390(o);
    if (AF(o, s16, 0x100) != 0) {
        func_sc02_026_8017F5DC(o);
    }
}

s32 func_sc02_026_8017F390(u8 *arg0) {
    if (func_8012D624(arg0, (AF(AF(arg0, void *, 0x20), s16, 0x18) * 3) >> 9, 0x21) == 1) {
        u16 t = AF(AF(arg0, void *, 0x20), u16, 0x12);
        D_80126B96 = 0x4002;
        D_80126B9A = t;
        return 1;
    }
    return 0;
}

s32 func_sc02_026_8017F400(s32 arg0) {
    if (AF(AF(arg0, s32, 0x64), s16, 0x36) == AF(arg0, s16, 0xFC)) {
        return 0;
    }
    func_sc02_026_8017F440(arg0);
    return 1;
}

void func_sc02_026_8017F440(s32 arg0) {
    func_8002D59C(4, 0x64E, AF(arg0, u16, 0x104));
    func_8012C218(arg0);
}

void func_sc02_026_8017F47C(u8 *o) {
    u8 *p;
    u8 *q;

    p = AF(o, u8 *, 0x64);
    func_8002D59C(4, 0x64E, AF(o, u16, 0x104));
    AF(o, s32, 4) = AF(p, s32, 4);
    AF(o, s32, 8) = AF(p, s32, 8) - 0x260000;
    AF(o, s32, 0xC) = AF(p, s32, 0xC);
    AF(o, s16, 0x70) = 1;
    q = AF(o, u8 *, 0x20);
    if (AF(p, u16, 0x70) & 1) {
        AF(q, s16, 0x14) = 0;
        AF(q, s16, 0x12) = 0;
        AF(q, s16, 0x10) = 0;
        AF(q, s16, 0x1C) = 1;
        AF(q, s16, 0x1A) = 1;
        AF(q, s16, 0x18) = 1;
    } else {
        AF(q, s16, 0x14) = 0;
        AF(q, s16, 0x12) = 0;
        AF(q, s16, 0x10) = 0;
        AF(q, u16, 0x2C) &= 0xFFEF;
    }
    AF(o, s16, 2) = 1;
}

void func_sc02_026_8017F538(u8 *arg0, s32 spd) {
    WMtx m;
    V3 v;

    m = D_800AE620;
    v.x = v.y = 0;
    v.z = spd;
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
}

void func_sc02_026_8017F5DC(u8 *o) {
    s32 v;
    s32 t;
    s32 k;

    v = 0x2F;
    t = func_8012BD14(o);
    if (t <= 0x40000) {
        k = (AF(AF(o, u8 *, 0x20), s16, 0x1A) * 3) >> 9;
        k *= k;
        v = 0x7F - t / ((0x40000 - k) / 80);
    }
    v = (u16)(v | 0x5000);
    func_8002D59C(0x64E, v, AF(o, u16, 0x104));
}

void func_sc02_026_8017F6B0(u8 *arg0, s32 arg1) {
    SpawnDef d;

    d = D_sc02_026_801A5460[arg1];
    d.x += AF(arg0, s16, 6);
    d.y += AF(arg0, s16, 0xA);
    d.z += AF(arg0, s16, 0xE);
    func_8012C51C(&d, arg0);
}

u8 *func_sc02_026_8017F76C(SV8 *pos, s32 ang0, s32 spd, s32 mode) {
    s32 ang = ang0;
    SV8 rot;
    WMtx m;
    V3 v;
    u8 *w;
    u8 *t;
    s32 n;
    s32 x;
    s32 r;
    s32 d;
    s32 s;

    w = (u8 *)func_801290DC(0x3B, pos);
    if (w == 0) {
        return 0;
    }
    t = AF(w, u8 *, 0x20);
    AF(t, u8 *, 0x20) = &D_sc02_026_801A5488;
    AF(t, u8, 0x27) = 0x56;
    AF(t, s16, 0x28) = 0x2A0;
    AF(t, s16, 0x2A) = 0x1A0;
    n = rand() % 200;
    if (!(rand() & 1)) {
        x = -n + 0x400;
    } else {
        x = n + 0x400;
    }
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = x;
    if (mode == 0) {
        r = rand();
        d = -1;
        if (r & 1) {
            d = 1;
        }
        s = (s16)r;
        rot.x = d * (s % 128) - 0x300;
        rot.y = ang + d * (s % 768);
        rot.z = 0;
        v.x = v.y = 0;
        v.z = spd;
        m = D_800AE620;
        RotMatrixZYX(&rot, &m);
        ApplyMatrixLV(&m, &v, w + 0x10);
        AF(w, s32, 0x1C) = 0x2D;
    } else {
        AF(w, s32, 0x2C) = pos->x;
        AF(w, s32, 0x30) = pos->y;
        AF(w, s32, 0x34) = pos->z;
        AF(w, s16, 0x28) = rand() % 2 + 6;
        AF(w, s32, 0x14) = spd;
        AF(w, s32, 0x1C) = 0xA;
        AF(w, u16, 0x2)++;
    }
    return w;
}

void func_sc02_026_8017F9D4(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;

    if (AF(arg0, u16, 2) == 0) {
        func_8012931C((s32) arg0, arg1);
        if (AF(arg0, s32, 0x1C) < 0x23) {
            AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
        }
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 != 0) {
            return;
        }
        goto block_8;
    } else {
        func_8012931C((s32) arg0, arg1);
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            temp_v0_3 = AF(arg0, u16, 0x28) - 1;
            AF(arg0, u16, 0x28) = temp_v0_3;
            if ((temp_v0_3 << 0x10) != 0) {
                AF(arg0, s32, 0x1C) = 0xA;
                AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0xFFFF0000);
                AF(arg0, s16, 6) = (s16) AF(arg0, s32, 0x2C);
                AF(arg0, s16, 0xA) = (s16) AF(arg0, s32, 0x30);
                AF(arg0, s16, 0xE) = (s16) AF(arg0, s32, 0x34);
                return;
            }
block_8:
            func_801292C8((s32) arg0);
        }
    }
    return;
}

void func_sc02_026_8017FAC0(u8 *arg0) {
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
        a.x = D_sc02_026_801A9DF4[i];
        a.z = D_sc02_026_801A9DF4[i + 1];
        b.x = D_sc02_026_801A9DF4[i + 2];
        b.z = D_sc02_026_801A9DF4[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_026_801A9E1C[i];
        a.z = D_sc02_026_801A9E1C[i + 1];
        b.x = D_sc02_026_801A9E1C[i + 2];
        b.z = D_sc02_026_801A9E1C[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_026_801A9E44[i];
        a.z = D_sc02_026_801A9E44[i + 1];
        b.x = D_sc02_026_801A9E44[i + 2];
        b.z = D_sc02_026_801A9E44[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc02_026_801A9E6C[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc02_026_8017FD58(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc02_026_801A9EB8[AF(arg0, u16, 2)]();
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

void func_sc02_026_8017FEE0(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc02_026_801AA15C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc02_026_801AA15C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc02_026_801AA15C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_026_801A9EC0);
        SetScript(arg0, &D_sc02_026_801A9F80);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_026_801AA008);
        SetScript(arg0, &D_sc02_026_801AA0C8);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc02_026_801AA1AC;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AA1D0;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc02_026_801A9E84;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_026_801A9EC0);
        SetScript(arg0, &D_sc02_026_801A9F80);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_026_801AA008);
        SetScript(arg0, &D_sc02_026_801AA0C8);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_026_801AA1BC);
        SetScript(arg0, &D_sc02_026_801AA1C8);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_026_801A9EC0);
        SetScript(arg0, &D_sc02_026_801A9F80);
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

void func_sc02_026_8018038C(u8 *arg0) {
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

void func_sc02_026_80180520(u8 *arg0) {
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

void func_sc02_026_801808D0(u8 *arg0) {
    s32 temp_v0;

    D_sc02_026_801AA1E0[AF(arg0, u16, 2)]();
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

void func_sc02_026_801809BC(u8 *arg0) {
    D_sc02_026_801AA28C[AF(arg0, u16, 2)]();
}

void func_sc02_026_801809F8(u8 *arg0) {
    D_sc02_026_801AA340[AF(arg0, u16, 2)]();
}

void func_sc02_026_80180A34(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc02_026_80180A4C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_026_801A9DC0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_026_801A9DA0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc02_026_80186448);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc02_026_80180AF0(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc02_026_80180B0C(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc02_026_801A9E84) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_026_801A9DA0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc02_026_80186448, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc02_026_80180B90(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc02_026_80180BCC(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc02_026_80180BFC(s32 arg0) {
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

void func_sc02_026_80180C80(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc02_026_801AA150);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc02_026_80180D44(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc02_026_801AA15C[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc02_026_801AA15C[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc02_026_801AA15C[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc02_026_80180E24(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc02_026_80180E94(u8 *arg0) {
    SV8 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc02_026_801AA150);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc02_026_80180F70(void) {
}

void func_sc02_026_80180F78(u8 *arg0) {
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

void func_sc02_026_80181030(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_026_801AA218) != 0) {
        SetScript(arg0, (s32) &D_sc02_026_80186448);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc02_026_801AA24C[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc02_026_801AA24E[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc02_026_801AA250[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc02_026_801AA252[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc02_026_801810F4(s32 arg0) {
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

void func_sc02_026_80181148(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc02_026_801AA252[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc02_026_801811C4(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc02_026_801AA298);
    SetScript(arg0, &D_sc02_026_801AA2F8);
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

void func_sc02_026_801812A8(u8 *arg0) {
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

void func_sc02_026_80181374(u8 *o) {
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

void func_sc02_026_8018144C(u8 *arg0) {
    void *temp_v0;

    D_sc02_026_801AC2B0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (!(AF(arg0, u16, 0x70) & 0x20)) {
            func_8012C0EC((s32) arg0);
        }
    }
}

void func_sc02_026_801814D8(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (!(AF(arg0, u16, 0x70) & 0xF) && (func_sc02_026_80182550() == 0)) {
        func_8012CAE4((s32) arg0);
        return;
    }
    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc02_026_801AC1D0)) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_026_801AC270;
        AF(arg0, s32, 0xB4) = -2;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        temp_v0 = rand();
        var_v0 = temp_v0 / 16;
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 0xFE) = (s16) ((temp_v0 - (var_v0 * 0x10)) + 8);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_v0_2 = (s16) AF(arg0, u16, 0x70);
        if (!(temp_v0_2 & 0x8000)) {
            if (temp_v0_2 & 0x800) {
                AF(arg0, s16, 2) = 5;
                func_8012E8A8((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0x5C) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 1;
        AF(temp_v1_2, s16, 0x1A) = 1;
        AF(temp_v1_2, s16, 0x18) = 1;
        func_8012B2CC((s32) arg0);
    }
}

void func_sc02_026_80181644(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s32, 0xE8) = 0x40;
}

void func_sc02_026_80181688(u8 *arg0) {
    s32 sn;
    register u8 *w;
    s32 r;
    s32 m;
    s32 y;
    s32 t;
    s32 unused[4];

    w = &D_800AF630;
    sn = rsin(AF(arg0, s32, 0xE4));
    
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (sn >> 2) + 0x1000;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x1000 - (sn >> 1);
        AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (sn >> 1) + 0x1000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (sn >> 3) + 0x700;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x700 - (sn >> 2);
        AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (sn >> 2) + 0x700;
    }
    if (AF(w, u16, 0xA3AA) % AF(arg0, s16, 0xFE) == 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 0x20);
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        t = sn * 16;
        func_8012B178(arg0, (sn >= 0 ? -t : t) - 0x4000);
        r = ((s32 (*)())func_8012CBA4)(arg0);
        if (r & 0x8000) {
            goto state2;
        }
        if (!(r & 0x2000)) {
            goto fail;
        }
        if (--AF(arg0, s32, 0xE8) != 0) {
            break;
        }
        if (rand() & 1) {
            AF(arg0, u16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x20;
            m = rand() % 1024;
            y = AF(AF(arg0, u8 *, 0x20), s16, 0x12);
            AF(arg0, s32, 0xE0) = (rand() & 1) ? y + m : y - m;
        } else {
            AF(arg0, s32, 0xE8) = 0x40;
        }
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0x14);
        func_8012B178(arg0, (sn >= 0 ? -(sn * 16) : sn * 16) - 0x4000);
        if (!(((s32 (*)())func_8012CBA4)(arg0) & 0x2000)) {
        fail:
            func_8012ADE4(arg0);
        state2:
            AF(arg0, u16, 0x34) = 2;
            AF(arg0, s32, 0xE0) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(arg0, s32, 0x1C) = rand() % 10 + 20;
            break;
        }
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, s32, 0xE8) = 0x40;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0x14);
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
            func_8012B030(arg0);
        }
        break;
    }
    func_sc02_026_801823E8(arg0);
    func_sc02_026_80182318(arg0, D_sc02_026_801AC2CC[AF(arg0, u16, 0x70) & 0xF]);
    AF(arg0, s32, 0xE4) = (AF(arg0, s32, 0xE4) + 0x40) & 0x7FF;
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc02_026_80181A20(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 4;
    func_8012B030((s32) arg0);
}

void func_sc02_026_80181A4C(u8 *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin(AF(arg0, s32, 0x1C) << 6);
    AF(temp_s0, s16, 0x1C) = temp_v0;
    AF(temp_s0, s16, 0x1A) = temp_v0;
    AF(temp_s0, s16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 >= 0x11) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    }
}

void func_sc02_026_80181AC4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1, arg2) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 6;
        AF(arg0, s16, 0x34) = 0;
        AF(temp_v1, s16, 0x1C) = 0x400;
        AF(temp_v1, s16, 0x18) = 0x400;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x3000;
    }
}

void func_sc02_026_80181B18(u8 *arg0) {
    u16 st;
    s32 v;
    s16 h;

    switch (st = AF(arg0, u16, 0x34)) {
    case 0:
        if (func_8012BE54(arg0) <= 0x10000) {
            AF(arg0, u16, 0x34)++;
            func_8012E88C(arg0);
            func_8012B21C(arg0);
        }
        break;
    case 1:
        if (!(func_8012CBCC(arg0) & 0x2000)) {
            break;
        }
        AF(arg0, s32, 0x1C) = st;
        AF(arg0, u16, 0x34)++;
        func_8002D4C8(0x703, 0);
    case 2:
        {
        u8 *p;
        p = AF(arg0, u8 *, 0x20);
        v = rsin(AF(arg0, s32, 0x1C) << 7);
        h = ((v * 0x1C00) >> 12) + 0x400;
        AF(p, s16, 0x1C) = h;
        AF(p, s16, 0x18) = h;
        AF(p, s16, 0x1A) = 0x3000 - ((v * 0x2800) >> 12);
        if (++AF(arg0, s32, 0x1C) >= 9) {
            AF(arg0, s32, 0x1C) = 1;
            AF(arg0, u16, 0x34)++;
        }
        }
        break;
    case 3:
        {
        u8 *p;
        s16 h;
        p = AF(arg0, u8 *, 0x20);
        v = rsin(AF(arg0, s32, 0x1C) << 7);
        h = 0x2000 - ((v * 0x1000) >> 12);
        AF(p, s16, 0x1C) = h;
        AF(p, s16, 0x18) = h;
        AF(p, s16, 0x1A) = ((v * 0x800) >> 12) + 0x800;
        if (++AF(arg0, s32, 0x1C) >= 9) {
            AF(arg0, s16, 2) = 1;
        }
        }
        break;
    }
}

void func_sc02_026_80181CC8(u8 *arg0) {
    s32 temp_s2;
    s32 var_s1;
    temp_s2 = ((AF(arg0, u16, 0x70) & 0xF) | ~0x7FFF) << 0x10;
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        func_sc02_026_801825A4((s32) (arg0 + 0x7C), (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0xFFFC0000 - ((rand() % 4) << 0x10), temp_s2 >> 0x10);
    }
    AF(arg0, s32, 0xEC) = 0x40000;
    func_8012B23C((s32) arg0);
    func_8012B178((s32) arg0, AF(arg0, s32, 0xEC));
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_026_80181D94(u8 *arg0) {
    s32 d;
    s32 r;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        d = rcos((AF(arg0, s32, 0x1C) - 1) << 6);
        d -= rcos(AF(arg0, s32, 0x1C) << 6);
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) += d;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= d >> 3;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1C) += d;
        r = func_8012CBA4(arg0);
        if (r & 0x1000) {
            func_80131E00(arg0, 0x12);
        } else if (!(r & 0x2000)) {
            func_8012B23C(arg0);
            AF(arg0, u16, 0x34) = 2;
            AF(arg0, s32, 0x1C) = 0x3C;
        } else {
            if (AF(arg0, s32, 0x1C) % 3 == 0) {
                func_80143B6C(arg0, 1);
            }
            if (func_8012BEE8(arg0) != 0) {
                AF(arg0, u16, 0x34) = 1;
            }
        }
        break;
    case 1:
        d = rcos((AF(arg0, s32, 0x1C) + 1) << 6);
        d -= rcos(AF(arg0, s32, 0x1C) << 6);
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) += d;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= d >> 3;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1C) += d;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            func_80131C78(arg0);
        }
        break;
    case 2:
        r = func_8012CBF4(arg0);
        if (r & 0xFF) {
            func_sc02_026_8018226C(arg0);
        } else if (r & 0x2000) {
            func_80131C78(arg0);
        } else if (func_8012BEE8(arg0) != 0) {
            func_80131E00(arg0, 0xD);
        }
        break;
    }
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc02_026_80181FF8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc02_026_8018200C(u8 *arg0) {
    SV p;
    u8 *x;
    u8 *y;
    s16 a;
    s16 b;
    s8 k;
    s32 i;
    u8 *r0;
    u8 *r1;

    p.vx = AF(arg0, s16, 6);
    p.vy = AF(arg0, s16, 0xA);
    p.vz = AF(arg0, s16, 0xE);
    x = NULL;
    y = NULL;
    a = AF(AF(arg0, u8 *, 0x20), u16, 0x12) + 0x400;
    b = AF(AF(arg0, u8 *, 0x20), u16, 0x12) - 0x400;
    k = AF(arg0, u16, 0x70) & 0xF;
    if (!(AF(arg0, u16, 0x70) & 1)) {
        for (i = 0; i < 4; i++) {
            func_sc02_026_801825A4(&p, a, -0x60000 - ((rand() % 4) << 16), k);
            func_sc02_026_801825A4(&p, b, -0x60000 - ((rand() % 4) << 16), k);
        }
    } else {
        for (i = 0; i < 4; i++) {
            r0 = (u8 *) func_sc02_026_801825A4(&p, a, -0x60000 - ((rand() % 4) << 16), k);
            r1 = (u8 *) func_sc02_026_801825A4(&p, b, -0x60000 - ((rand() % 4) << 16), k);
            if (r0 != NULL) {
                if (x != NULL) {
                    AF(r0, u8 *, 0x2C) = x;
                    AF(x, s32, 0x30)++;
                } else {
                    x = r0;
                    AF(r0, s32, 0x2C) = -1;
                    AF(x, u8 *, 0x24) = arg0;
                }
            }
            if (r1 != NULL) {
                if (y != NULL) {
                    AF(r1, u8 *, 0x2C) = y;
                    AF(y, s32, 0x30)++;
                } else {
                    y = r1;
                    AF(r1, s32, 0x2C) = -1;
                    AF(y, u8 *, 0x24) = arg0;
                }
            }
        }
    }
    func_8012E8A8(arg0);
    func_8002D4C8(0xA65, 0);
}

void func_sc02_026_8018226C(u8 *arg0) {
    u16 v = AF(arg0, u16, 0x70);

    if (v & 0x800) {
        if (v & 0x10) {
            AF(arg0, s16, 2) = 5;
            AF(arg0, u8, 0xC1) = 0;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, s32, 0x1C) = 0x5A;
            AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
            AF(arg0, u16, 0x76) = AF(AF(arg0, u8 *, 0x78), u16, 0);
            AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
            AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
            AF(arg0, s16, 0xAA) = 0;
            func_8012B2CC(arg0);
            return;
        }
    }
    func_8012C098(arg0);
}

s32 func_sc02_026_80182318(u8 *arg0, s32 arg1) {
    SV8 a;
    SV8 b;

    func_8012F14C(D_80126B78 + 0x34, &D_sc02_026_801AC2D4[0], &a);
    func_8012F14C(D_80126B78 + 0x34, &D_sc02_026_801AC2D4[1], &b);
    if (func_80135888(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) == 0) {
        return 0;
    }
    func_8012F568(1, (AF(arg0, u16, 0x70) & 0xF) ? 0x2001 : 1, AF(AF(arg0, u8 *, 0x20), s16, 0x12), arg1, &b, &D_801152A8);
    return 1;
}

void func_sc02_026_801823E8(u8 *arg0) {
    SV a;
    SV b;
    s32 w;
    s32 *wp;
    u8 *p;
    s32 i;

    for (p = &D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x17F && arg0 != p) {
            if (func_8012BC60(arg0 + 4, p + 4) < 0x1000) {
                wp = &w;
                func_8012B0B4(wp, func_8012B6D4(arg0 + 4, p + 4), 0x41);
                b.vx = AF(p, s16, 6);
                b.vy = AF(p, s16, 0xA);
                b.vz = AF(p, s16, 0xE);
                b.vx += w;
                b.vz += w >> 16;
                a.vx = AF(arg0, s16, 0x3A);
                a.vy = AF(arg0, s16, 0x3E);
                a.vz = AF(arg0, s16, 0x42);
                if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                    func_8012ADE4(arg0);
                    return;
                }
                AF(arg0, s16, 6) = b.vx;
                AF(arg0, s16, 0xA) = b.vy;
                AF(arg0, s16, 0xE) = b.vz;
                return;
            }
        }
    }
}

s32 func_sc02_026_80182550(void) {
    s32 *var_v1;
    s32 var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &D_801202A0;
    do {
        if ((AF(var_v1, u16, 0) == 0x17F) && !(AF(var_v1, u16, 0x70) & 0xF)) {
            var_a1 += 1;
        }
        var_a0 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 0x10C);
    } while (var_a0 < 0x60);
    return var_a1 < 0xB;
}

s32 func_sc02_026_801825A4(s32 pos, s32 ang0, s32 dist, s32 k) {
    SV r;
    wMtx m;
    V4 v;
    s32 o;
    u8 *a;
    Rec801AC2F0 *e;
    s16 t;
    s16 h;
    s32 s;
    s32 u;
    s32 w;
    s32 x;
    s32 an = ang0;

    o = func_801290DC(0x41, pos);
    if (o == 0) {
        return 0;
    }
    t = rand();
    
    a = AF(o, u8 *, 0x20);
    AF(a, s32 *, 0x20) = &D_sc02_026_801AC2E4;
    e = &D_sc02_026_801AC2F0[k & 0xF];
    AF(a, u8, 0x27) = e->c;
    AF(a, u16, 0x28) = e->a;
    AF(a, u16, 0x2A) = e->b;
    if (k & 0x8000) {
        h = t % 512 + 0x400;
        AF(a, s16, 0x1A) = h;
        AF(a, s16, 0x18) = h;
        AF(o, s32, 0x34) = h;
    } else {
        { s16 g = t % 3072 + 0x400; AF(a, s16, 0x1A) = g; AF(a, s16, 0x18) = g; AF(o, s32, 0x34) = g; }
    }
    s = -1;
    if (t & 1) {
        s = 1;
    }
    x = t; u = s * (x % 128); w = s * (x % 768);
    r.vz = 0; v.y = 0; v.x = 0; v.z = dist;
    r.vx = u - 0x300; r.vy = an + w;
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
    AF(o, s32, 0x1C) = 0x2D;
    return o;
}

void func_sc02_026_801827A8(u8 *arg0) {
    D_sc02_026_801AC300[AF(arg0, u16, 2)]();
}

void func_sc02_026_801827E4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = func_sc02_026_80182B90(arg0, (s32) &D_800D3918, 0x11);
    if (!(temp_v0 & 0xFF)) {
        if (temp_v0 & 0x2000) {
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, s16, 2) = 4;
                return;
            }
            goto block_11;
        }
        if (AF(arg0, s32, 0x1C) < 0x23) {
            AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x62;
            }
        }
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            goto block_8;
        }
    } else {
block_8:
        temp_v1 = AF(arg0, void *, 0x2C);
        if ((temp_v1 != NULL) && (temp_v1 != (void *)-1)) {
            AF(temp_v1, s32, 0x30) = (s32) (AF(temp_v1, s32, 0x30) - 1);
        }
block_11:
        func_801292C8(arg0);
    }
}

void func_sc02_026_801828C8(s32 arg0) {
    func_sc02_026_80182DBC(arg0);
    if (AF(arg0, s32, 0x30) == 0) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0;
        return;
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc02_026_8018291C(s32 arg0) {
    SV a;
    SV b;
    u8 unused[0x10];
    u8 *t;

    if (func_sc02_026_80182CE4(arg0, -0x18000) == 0) {
        func_801292C8(arg0);
        return;
    }
    t = AF(arg0, u8 *, 0x2C);
    AF(arg0, s32, 0x14) = 0x18000;
    if (AF(arg0, s32, 0x1C) >= 0x150) {
        AF(t, s32, 0x30)--;
        func_801292C8(arg0);
        return;
    }
    func_sc02_026_80182DBC(arg0);
    func_sc02_026_80182B90(arg0, &D_800D3918, 0);
    a.vx = AF(arg0, s16, 6);
    a.vy = 0;
    a.vz = AF(arg0, s16, 0xE);
    b.vx = AF(t, s16, 6);
    b.vy = 0;
    b.vz = AF(t, s16, 0xE);
    if (func_800132BC(&a, &b) < 0x41) {
        AF(t, s32, 0x30)--;
        AF(arg0, s16, 2) = 5;
    }
    AF(arg0, s32, 0x1C)++;
}

void func_sc02_026_80182A28(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_026_80182A5C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        if (AF(arg0, s32, 0x2C) == -1) {
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

void func_sc02_026_80182A9C(s32 arg0) {
    func_sc02_026_80182DBC(arg0);
    if (*AF(arg0, u16 *, 0x2C) == 0) {
        func_801292C8(arg0);
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc02_026_80182AF4(u8 *arg0) {
    SpawnDef d;

    func_sc02_026_80182DBC(arg0);
    if (++AF(arg0, s32, 0x1C) >= 0x1F) {
        d.x = AF(arg0, s16, 6);
        d.y = AF(arg0, s16, 0xA);
        d.z = AF(arg0, s16, 0xE);
        d.kind = 0x17F;
        *(u16 *)&d.unk8 = 0x8000;
        d.flags = 0;
        d.unk10 = 0;
        d.unkE = 0;
        d.unkC = 0x7FFF;
        func_8012C51C(&d, AF(arg0, s32, 0x24));
        func_801292C8(arg0);
    }
}

s32 func_sc02_026_80182B90(s32 arg0, SV *d, s32 arg2) {
    SV a;
    SV b;
    s32 r;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    a.vx += d->vx;
    a.vy += d->vy;
    a.vz += d->vz;
    func_8012931C(arg0);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA);
    b.vz = AF(arg0, s16, 0xE);
    b.vx += d->vx;
    b.vy += d->vy;
    b.vz += d->vz;
    r = func_8012CEB0(&a, &b, arg2);
    b.vx -= d->vx;
    b.vy -= d->vy;
    b.vz -= d->vz;
    AF(arg0, s16, 6) = b.vx;
    AF(arg0, s16, 0xA) = b.vy;
    AF(arg0, s16, 0xE) = b.vz;
    if (r & 0x6000) {
        AF(arg0, s32, 0x14) = 0;
    }
    return r;
}

s32 func_sc02_026_80182CE4(u8 *arg0, s32 arg1) {
    u8 unused[0x10];
    WMtx m;
    V4 v;
    u8 *p;

    p = AF(arg0, u8 *, 0x2C);
    if (AF(p, u16, 0) == 0) {
        return 0;
    }
    m = D_800AE620;
    RotMatrixY(func_8012B6D4(arg0 + 4, p + 4), &m);
    v.y = 0;
    v.x = 0;
    v.z = arg1;
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
    return 1;
}

void func_sc02_026_80182DBC(u8 *arg0) {
    s32 v;
    s32 a;
    u8 *p;
    s16 h;

    v = rsin((AF(arg0, s32, 0x1C) << 7) & 0x780);
    a = AF(arg0, s32, 0x34);
    p = AF(arg0, u8 *, 0x20);
    h = a - (((a >> 2) * v) >> 12);
    AF(p, s16, 0x1A) = h;
    AF(p, s16, 0x18) = h;
}

void func_sc02_026_80182E1C(u8 *arg0) {
    D_sc02_026_801AC394[AF(arg0, u16, 2)]();
}

void func_sc02_026_80182E58(u8 *arg0) {
    AF(arg0, s32 *, 0xD0) = &D_sc02_026_801AC31C;
    AF(arg0, s32 *, 0xCC) = &D_sc02_026_801AC31C;
    AF(arg0, s32, 0xE0) = *AF(arg0, s32 *, 0xCC);
    AF(arg0, s16, 2)++;
}

void func_sc02_026_80182E80(u8 *arg0) {
    s32 *p;
    s32 f;
    s32 t;

    if (AF(arg0, s32, 0xE0) != 0) {
        if (--AF(arg0, s32, 0xE0) <= 0) {
            p = AF(arg0, s32 *, 0xD0);
            p += 2;
            f = *p;
            if (!(f & 0x40000000)) {
                if (f < 0) {
                    AF(arg0, s32, 0xE0) = 0;
                    return;
                }
            } else {
                p = AF(arg0, s32 *, 0xCC);
            }
            t = *p;
            AF(arg0, s32 *, 0xD0) = p;
            AF(arg0, s32, 0xE0) = t;
            func_800183E0(p[1]);
        }
    }
}

void func_sc02_026_80182F00(u8 *arg0) {
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
            func_8001C214(AF(arg0, u8 *, 0x20), &D_sc02_026_801B5A4C);
            SetScript(arg0, &D_sc02_026_801BD190);
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

void func_sc02_026_80183084(u8 *arg0) {
    s16 t;

    if (func_8012C354(arg0, &D_sc02_026_801AF6B8[AF(arg0, s16, 0x70)]) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    func_80143970(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc02_026_801BC098);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AF7F0;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc02_026_801BB960);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AF890;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc02_026_801BD010);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AF8D8;
        break;
    case 4:
        SetScript(arg0, &D_sc02_026_801BC098);
        AF(arg0, s16, 2) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AF7F0;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc02_026_801BCE90);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc02_026_801BC098);
            AF(arg0, s16, 2) = 1;
        }
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AF7F0;
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

void func_sc02_026_801832A8(u8 *arg0) {
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
        SetScript(arg0, &D_sc02_026_801BC098);
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
        SetScript(arg0, &D_sc02_026_801BBA08);
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

void func_sc02_026_8018365C(u8 *arg0) {
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
            SetScript(arg0, &D_sc02_026_801BC998);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc02_026_801BC318);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc02_026_801BCBA0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc02_026_8018389C(u8 *arg0) {
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
    func_8012B1B4(arg0, &D_sc02_026_801AF950);
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

void func_sc02_026_80183B04(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    func_8012B1B4(arg0, &D_sc02_026_801AF950);
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
        SetScript(arg0, &D_sc02_026_801BC658);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc02_026_80183CAC(u8 *arg0) {
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
                SetScript(arg0, &D_sc02_026_801BD1A8);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc02_026_801AF688 | 0x40000000 | 0x20000000;
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
    func_8012B1B4(arg0, &D_sc02_026_801AF95C);
    func_8012CBCC(arg0);
}

void func_sc02_026_80183EF8(u8 *arg0) {
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

void func_sc02_026_80184044(u8 *arg0) {
    u8 *p;
    s32 i;

    D_sc02_026_801AF974[AF(arg0, u16, 2)]();
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

void func_sc02_026_801840FC(u8 *arg0) {
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

void func_sc02_026_80184250(u8 *arg0) {
    D_sc02_026_801AFA04[AF(arg0, u16, 2)]();
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

void func_sc02_026_801842FC(u8 *arg0) {
    D_sc02_026_801AFB64[AF(arg0, u16, 2)]();
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

void func_sc02_026_801843AC(u8 *arg0) {
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
    SetScript(arg0, &D_sc02_026_801BCF28);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, u8 *, 0xBC) = &D_sc02_026_801AF7F0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x58) = (s32)&D_sc02_026_801AF688 | 0x40000000 | 0x20000000;
    AF(arg0, u16, 0x88) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x8A) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x8C) = AF(arg0, u16, 0xE);
}

void func_sc02_026_80184494(u8 *arg0) {
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
    if (AF(arg0, u8 *, 0x90) == &D_sc02_026_801BB4E0) {
        SetScript(arg0, &D_sc02_026_801BB2D8);
        AF(arg0, s16, 2) = 0x14;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, u8 *, 0xCC) = &D_sc02_026_801BC098;
    } else {
        if (AF(arg0, s16, 0xFE) != 0) {
            SetScript(arg0, &D_sc02_026_801BCBA0);
        } else {
            SetScript(arg0, &D_sc02_026_801BC098);
        }
        AF(arg0, s16, 2) = 1;
    }
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc02_026_801845B0(u8 *arg0) {
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

void func_sc02_026_80184690(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        func_8012B1B4(arg0, &D_sc02_026_801AF66C);
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

void func_sc02_026_80184768(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc02_026_801847D0(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc02_026_8018480C(u8 *arg0) {
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
    SetScript(arg0, &D_sc02_026_801BD010);
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc02_026_801848B0(u8 *arg0) {
    UV4 a;
    UV4 b;

    func_8012B1B4(arg0, &D_sc02_026_801AF66C);
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

void func_sc02_026_80184970(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc02_026_801AF67C);
}

void func_sc02_026_801849A4(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc02_026_80184A00(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc02_026_80184A38(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_026_801BBB78, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

void func_sc02_026_80184A94(s32 arg0) {
    s32 temp_v1;

    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc02_026_801BBB78);
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && func_8012DEB8(arg0, (s32) &D_sc02_026_801AF930, (s32) &D_sc02_026_801AF938) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc02_026_80184B6C(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc02_026_801BBB78);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc02_026_80184C00(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc02_026_801BC890);
        AF(arg0, s16, 0x34) = 7;
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    if (AF(arg0, s32, 0x94) == 0x17 && func_8012DEB8(arg0, (s32) &D_sc02_026_801AF930, (s32) &D_sc02_026_801AF938) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc02_026_80184CCC(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        func_8012B1B4((s32) arg0, (s32) &D_sc02_026_801AF968);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc02_026_801BB960);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && func_8012D5E4((s32) arg0, (s32) &D_sc02_026_801AF940, (s32) &D_sc02_026_801AF948, 0x14) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &D_80126B96;
            D_80126B98 = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc02_026_80184DA4(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc02_026_801BB960);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc02_026_801AF698 | 0x40000000 | 0x20000000);
    }
}

void func_sc02_026_80184E40(u8 *arg0) {
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

void func_sc02_026_80184E98(void) {
}

void func_sc02_026_80184EA0(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc02_026_801AF930, (s32) &D_sc02_026_801AF938) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc02_026_801BC420);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_026_801BCBA0);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc02_026_80184F40(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_026_801BCBA0);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc02_026_80184F94(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc02_026_801AF930, (s32) &D_sc02_026_801AF938) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc02_026_801BC760);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_026_801BD010);
    AF(arg0, s16, 2) = 6;
}

void func_sc02_026_80185028(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_026_801BC890);
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 8;
    }
}

void func_sc02_026_80185070(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc02_026_80185098(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

void func_sc02_026_801850E4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_026_801AF9C8);
    SetScript((s32) arg0, (s32) &D_sc02_026_801AF9E0);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc02_026_801AF9F8);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc02_026_801851D0(s32 arg0) {
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

void func_sc02_026_80185254(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_026_801AFA10);
    SetScript((s32) arg0, (s32) &D_sc02_026_801AFAD0);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc02_026_801AFB58);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc02_026_80185360(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_026_80185398(u8 *arg0, s32 arg1) {
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

void func_sc02_026_80185404(u8 *arg0) {
    D_sc02_026_801CCCB0[AF(arg0, u16, 2)]();
}

void func_sc02_026_80185440(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc02_026_801CCBD0, D_sc02_026_801CCBD2, D_sc02_026_801CCBD4);
        p = &D_sc02_026_801CCBD8;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc02_026_801CCC08, D_sc02_026_801CCC0A, D_sc02_026_801CCC0C);
        p = &D_sc02_026_801CCC10;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc02_026_801CCC40, D_sc02_026_801CCC42, D_sc02_026_801CCC44);
        p = &D_sc02_026_801CCC48;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc02_026_801CCBD0, D_sc02_026_801CCBD2, D_sc02_026_801CCBD4);
        p = &D_sc02_026_801CCBD8;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc02_026_801CCC78, D_sc02_026_801CCC7A, D_sc02_026_801CCC7C);
        p = &D_sc02_026_801CCC80;
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

void func_sc02_026_80185634(u8 *arg0) {
    D_800A5E88.c = D_sc02_026_801CCBF8;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc02_026_801856E4(u8 *arg0) {
    D_800A5E88.c = D_sc02_026_801CCC30;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc02_026_80185794(u8 *arg0) {
    D_800A5E88.a = D_sc02_026_801CCC48.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc02_026_80185844(void) {
}

void func_sc02_026_8018584C(u8 *arg0) {
    D_800A5E88.a = D_sc02_026_801CCC80.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc02_026_801858F0(u8 *arg0) {
    D_sc02_026_801CCFF8[AF(arg0, u16, 2)]();
}

void func_sc02_026_8018592C(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc02_026_801CCCE8) != 0) {
        if (!(func_80029178(D_sc02_026_801CCD50[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc02_026_80185FD8);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_026_80186448);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_026_80185A00(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc02_026_80185A28(void) {
}

void func_sc02_026_80185A30(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc02_026_801CCF34 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_026_801CCE98[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_026_801CCF20 = 0;
            func_80029124(D_sc02_026_801CCE98[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_026_801CCF1C = 2;
        } else {
            D_sc02_026_801CCF34 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_026_801CCE14[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_026_801CCF1C = 0;
            D_sc02_026_801CCF20 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc02_026_801CCF48);
    } else {
        var_a1 = &D_sc02_026_801CCFB4;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc02_026_80185B7C(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc02_026_801CCD50[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_026_801CCD50[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc02_026_80185D80() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_026_80185C9C(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc02_026_80185CC8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_026_80185CD8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_026_80185CE8(u8 *arg0) {
    func_80029124(D_sc02_026_801CCD50[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_026_80185D28(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_026_80185D5C(void) {
    return func_80174764() == 1;
}

s32 func_sc02_026_80185D80(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc02_026_801CCD50[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc02_026_80185DE4(u8 *arg0) {
    D_sc02_026_801CD020[AF(arg0, u16, 2)]();
}

void func_sc02_026_80185E20(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_026_801CCD1C) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_026_801CD6E0);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_026_801CD4C0);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_026_80185EA8(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_026_801CD4D0);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_026_801CD5D8);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc02_026_80185F68(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_026_801CD6E0);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_026_801CD4C0);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc02_026_80185FD8(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc02_026_801CD010[0], &a, &f);
    RotTransSV(&D_sc02_026_801CD010[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
