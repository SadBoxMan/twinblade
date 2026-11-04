#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_100_8017BE9C(void) {
}

void func_sc03_100_8017BEA4(void) {
}

void func_sc03_100_8017BEAC(void) {
}

void func_sc03_100_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_100_801883E8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc03_100_8017BEBC();
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
extern void func_80146A6C();
extern void (*D_sc03_100_80188440[])();
extern void func_80147324();
extern void func_sc03_100_8017D030();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_100_80188454[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_100_80188468[])();
extern void func_800D22E4();
extern void func_sc03_100_8017D728();
extern void (*D_sc03_100_80188510[])();
void func_sc03_100_8017EA28(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_100_8017EA50(void);
extern void func_800D1EBC();
extern void (*D_sc03_100_80188524[])();
extern u8 D_sc03_100_80188530;
extern void func_8016EE40();
extern u8 D_sc03_100_80188534;
extern void func_sc03_100_8017EBA8();
extern void (*D_sc03_100_80188538[])();
extern void func_sc03_100_8017EF78();
extern void (*D_sc03_100_801A04A4[])();
extern void (*D_sc03_100_801A0558[])();
extern void (*D_sc03_100_801A244C[])();
extern void (*D_sc03_100_801C1A2C[])();
extern void (*D_sc03_100_801C4FAC[])();
extern void (*D_sc03_100_801C52F4[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_100_80184C18;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc03_100_801C4FE4;
extern s32 * func_sc03_100_801847A8();
extern s32 D_sc03_100_801C504C[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_100_801C5218;
extern s32 D_sc03_100_801C521C;
extern s32 D_sc03_100_801C5230;
extern s32 D_sc03_100_801C5244;
extern s32 D_sc03_100_801C52B0;
extern s32 D_sc03_100_801C5194[];
extern s32 D_sc03_100_801C5110[];
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_100_80184550();
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_100_801C531C[])();
extern u8 D_sc03_100_801C5018;
extern u8 D_sc03_100_801C57BC;
extern u8 D_sc03_100_801C59DC;
extern u8 D_sc03_100_801C57CC;
extern u8 D_sc03_100_801C58D4;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_100_80188588[];
extern s32 func_8013B7F4();
extern u8 D_sc03_100_8019FFB8;
extern u8 D_sc03_100_8019FFD8;
extern u8 D_sc03_100_801A009C;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern s32 func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_100_801A44D8;
extern void func_8012B14C();
extern u8 D_sc03_100_801B09D4;
extern void func_8012C588();
extern u8 D_sc03_100_801A44F4;
extern u8 D_sc03_100_801B07BC;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_100_801A478C;
extern u8 D_sc03_100_801A4794;
extern u8 D_sc03_100_801B127C;
extern u8 D_sc03_100_801B19FC;
extern s32 func_8012DEB8();
extern u8 D_sc03_100_801B15BC;
extern u8 D_sc03_100_801B1E6C;
extern void func_8012AD50();
extern s8 D_sc03_100_801C87F4;
extern void func_sc03_100_8018373C();

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
extern void func_8012B2CC();
extern void func_8002A04C();
extern void func_8012C098();

extern void (*D_sc03_100_801A25E8[])();
extern u8 D_sc03_100_801A23E8;
extern void func_8001D0E8();

extern u8 D_sc03_100_8019FB58;
extern s32 D_sc03_100_801C86A0;
extern s32 D_sc03_100_801C86A4;
extern s32 D_sc03_100_801C86A8;
extern s32 D_sc03_100_801C86AC;
extern s32 D_sc03_100_801C88DC;
extern s32 D_sc03_100_80188548[];
extern void func_sc03_100_8017F0B4();
extern void func_800183E0();

extern void func_8001CA1C();
extern SV8 D_sc03_100_801A0374[];
extern u8 D_sc03_100_801A00D8;
extern u8 D_sc03_100_801A0198;
extern u8 D_sc03_100_801A0220;
extern u8 D_sc03_100_801A02E0;
extern u8 D_sc03_100_801A03C4;
extern u8 D_sc03_100_801A03E8;
extern u8 D_sc03_100_801A03D4;
extern u8 D_sc03_100_801A03E0;


extern void (*D_sc03_100_801A4860[])();
extern s32 func_8012D624();
extern void func_8012B370();

extern u8 D_sc03_100_80188804;
extern u8 D_sc03_100_80188980;
s32 func_sc03_100_8017EF28(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;
extern u8 D_sc03_100_80188994;
extern u8 D_sc03_100_80188B88;
extern void *D_80126B78;
extern u8 D_sc03_100_801A4824;
extern u8 D_sc03_100_801A483C;
extern u8 D_sc03_100_801A4854;
extern u8 D_sc03_100_801A486C;
extern u8 D_sc03_100_801A492C;
extern u8 D_sc03_100_801A49B4;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc03_100_80188398;
extern u8 D_sc03_100_80188334[];
extern s32 func_80013328();
extern void func_801746A4();
extern s32 func_8012BD14();
extern void func_800233CC();
extern u8 D_sc03_100_801C8490;
extern u8 D_sc03_100_801C8491;
extern u8 D_sc03_100_801C8492;
extern u8 D_sc03_100_801C8494;
extern u8 D_sc03_100_801C8495;
extern u8 D_sc03_100_801C8496;
extern s32 D_sc03_100_801C8694;
extern s32 D_sc03_100_801C8698;
extern s32 D_sc03_100_801C869C;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc03_100_801C2008;

extern void func_8012B77C();
extern s32 func_80143C74();
extern u8 *D_801151D4;
extern u8 D_sc03_100_801B0134;
extern u8 D_sc03_100_801B033C;
extern u8 D_sc03_100_801B0EF4;
extern s32 func_8012CEB0();
extern void func_80131E00();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern VoidFn D_sc03_100_801A00D0[];
extern s32 func_8012B6D4();
extern s32 func_80135888();
extern void func_8012B030();
extern u8 D_sc03_100_801AA8A8;
extern u8 D_sc03_100_801B1FEC;
extern s32 func_8012B8E4();
extern s32 func_8012B1B4();
extern u8 D_sc03_100_801A47AC;
extern u8 D_sc03_100_801B14B4;
extern s32 func_80133784();
extern s32 func_8012BCCC();
extern s32 func_8012BDBC();
extern s32 D_80126B64;

typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_100_80188414[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s32 func_8012BD3C();
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 func_8012BE98();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern u8 D_sc03_100_801A44E4;
extern u8 D_sc03_100_801A47B8;
extern u8 D_sc03_100_801B2004;
extern s16 D_sc03_100_801C4ECC;
extern s16 D_sc03_100_801C4ECE;
extern s16 D_sc03_100_801C4ED0;
extern Blk30 D_sc03_100_801C4ED4;
extern s16 D_sc03_100_801C4F04;
extern s16 D_sc03_100_801C4F06;
extern s16 D_sc03_100_801C4F08;
extern Blk30 D_sc03_100_801C4F0C;
extern s16 D_sc03_100_801C4F3C;
extern s16 D_sc03_100_801C4F3E;
extern s16 D_sc03_100_801C4F40;
extern Blk30 D_sc03_100_801C4F44;
extern s16 D_sc03_100_801C4F74;
extern s16 D_sc03_100_801C4F76;
extern s16 D_sc03_100_801C4F78;
extern Blk30 D_sc03_100_801C4F7C;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_8012AD44();
extern void func_80028620();

typedef struct { u8 b[0x34]; } R34;
extern u16 D_sc03_100_801A000C[];
extern u16 D_sc03_100_801A0034[];
extern u16 D_sc03_100_801A005C[];
extern VoidFn D_sc03_100_801A0084[];
extern void func_8002D59C();
extern R34 D_sc03_100_801A4514[];
extern u8 D_sc03_100_801A464C;
extern u8 D_sc03_100_801A46EC;
extern u8 D_sc03_100_801A4734;
extern u8 D_sc03_100_801B1CEC;
extern void func_80143970();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_100_801B1174;
extern u8 D_sc03_100_801B17F4;

extern SV4 D_sc03_100_801C1A50;
extern SV4 D_sc03_100_801C1A58;
extern SV4 D_sc03_100_801C1A60;
extern SV4 D_sc03_100_801C1A68;
extern SV4 D_sc03_100_801C1A70;
extern SV4 D_sc03_100_801C1A78;
extern SV4 D_sc03_100_801C1A80;
extern SV4 D_sc03_100_801C1A88;
extern s32 func_8012A758();
extern void func_80015978();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
extern u8 D_sc03_100_801A2494;
extern U16x4 D_sc03_100_801A2598[];
extern s32 func_8012C438();

typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern u8 D_sc03_100_80188300;
extern u8 D_sc03_100_8018833C;
extern u8 D_sc03_100_801C1FE0;
extern u8 D_sc03_100_801C8420;
extern u8 D_sc03_100_801C842C;
extern u8 D_sc03_100_801C842D;
extern u8 D_sc03_100_801C842E;
extern u8 D_sc03_100_801C843C;
extern u8 D_sc03_100_801C843D;
extern u8 D_sc03_100_801C843E;
extern u8 D_sc03_100_801C844D;
extern u8 D_sc03_100_801C844E;
extern u8 D_sc03_100_801C8450;
extern u8 D_sc03_100_801C8451;
extern u8 D_sc03_100_801C8452;
extern u8 D_sc03_100_801C8454;
extern u8 D_sc03_100_801C8455;
extern u8 D_sc03_100_801C8456;
extern u8 D_sc03_100_801C845C;
extern u8 D_sc03_100_801C84D0;
extern void func_8001C810();
extern void func_80143B6C();
extern u8 D_sc03_100_801B0864;

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126940;
extern u8 D_sc03_100_80188540[];
extern s32 func_80148800();
extern void func_sc03_100_8017ED90();
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 D_sc03_100_801C8424;
extern s32 D_sc03_100_801C8428;
extern s32 D_sc03_100_801C8430;
extern s32 D_sc03_100_801C8434;
extern s32 D_sc03_100_801C8438;
extern s32 D_sc03_100_801C8440;
extern s32 D_sc03_100_801C8444;
extern s32 D_sc03_100_801C8448;

void func_sc03_100_8017BEBC(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc03_100_801C8420 = D_sc03_100_801C8430 = D_sc03_100_801C8440 = v.vx;
    D_sc03_100_801C8424 = D_sc03_100_801C8434 = D_sc03_100_801C8444 = v.vy;
    D_sc03_100_801C8428 = D_sc03_100_801C8438 = D_sc03_100_801C8448 = v.vz;
}

void func_sc03_100_8017BFEC(u8 *arg0) {
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
        if (func_8012C354(arg0, &D_sc03_100_80188300) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc03_100_801C1FE0);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc03_100_8018833C);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc03_100_801C8420;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc03_100_801C8450;
        func_8001CD50(o, p);
        D_sc03_100_801C8452 = 0x80;
        p[0] = 0x80;
        D_sc03_100_801C8451 = 0xE0;
        D_sc03_100_801C8455 = 0;
        D_sc03_100_801C8454 = 0;
        D_sc03_100_801C8456 = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc03_100_801C2008;
        b = (U12x9 *) &D_sc03_100_801C84D0;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc03_100_801C844E = 0xFF;
        D_sc03_100_801C845C = 0xFF;
        D_sc03_100_801C843E = 0xFF;
        D_sc03_100_801C843C = 0xFF;
        D_sc03_100_801C842E = 0xFF;
        D_sc03_100_801C842C = 0xFF;
        D_sc03_100_801C844D = 0x80;
        D_sc03_100_801C843D = 0x80;
        D_sc03_100_801C842D = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc03_100_801C84D0;
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

void func_sc03_100_8017C378(u8 *arg0) {
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
    func_sc03_100_8017BEBC(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc03_100_80188334[(s16) i]) {
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
            func_80178B18(arg0, &D_sc03_100_80188398);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc03_100_8017C5F0(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc03_100_801C8490;
        func_8001CD50(o, p);
        D_sc03_100_801C8491 = 0xFF;
        D_sc03_100_801C8492 = 0xFF;
        p[0] = 0xFF;
        D_sc03_100_801C8496 = 8;
        D_sc03_100_801C8494 = 8;
        D_sc03_100_801C8495 = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc03_100_801C8694;
        q[0] = v.vx;
        D_sc03_100_801C8698 = v.vy;
        D_sc03_100_801C869C = v.vz;
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

void func_sc03_100_8017C738(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc03_100_801C2008;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc03_100_8017BEBC(arg0, 0);
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

void func_sc03_100_8017C8B8(u8 *arg0) {
    D_sc03_100_801883E8[AF(arg0, u16, 2)]();
}

void func_sc03_100_8017C8F4(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc03_100_8017C940(u8 *arg0) {
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
        func_sc03_100_8017BEBC((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 D_8012704C;
extern VoidFn D_sc03_100_801A03F8[];
extern s16 D_80126CB6;
extern u8 D_sc03_100_801A0368;
extern s32 func_8012B864();
extern s32 func_8012B70C();
extern s16 D_sc03_100_801A046A[];
extern u8 D_sc03_100_801A0430;
extern u16 D_sc03_100_801A0464[];
extern u16 D_sc03_100_801A0466[];
extern u16 D_sc03_100_801A0468[];
extern u8 D_sc03_100_801A04B0;
extern u8 D_sc03_100_801A0510;
extern s32 func_8012D5E4();
extern u8 D_sc03_100_801A241C;
extern void func_8012B414();
extern VoidFn D_sc03_100_801A47D0[];
extern VoidFn D_sc03_100_801A49C0[];
extern u8 D_sc03_100_801B1D84;
extern u8 D_sc03_100_801A44C8;
extern void func_80153C74();
extern u8 D_sc03_100_801B16EC;
extern u8 D_sc03_100_801A479C;
extern u8 D_sc03_100_801A47A4;
extern u8 D_sc03_100_801A47C4;
extern s32 func_8012BEE8();
extern SV4 D_sc03_100_801C1A3C;
extern void func_sc03_100_80183684();
extern s32 func_8012E778();
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern void func_8012C51C();
extern u8 D_sc03_100_801C87F0[];
extern s32 func_8012C194();
extern void func_sc03_100_80183AC8();
extern u8 D_sc03_100_801C86B0[];
extern s32 func_sc03_100_80183B50();
extern s32 func_8012EFB8();
extern V16 D_sc03_100_801C4EF4;
extern s32 D_800A5EB0;
extern V16 D_sc03_100_801C4F2C;
extern s32 D_800A5E90;

void func_sc03_100_8017CA34(u8 *arg0) {
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

void func_sc03_100_8017CAB4(u8 *arg0) {
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

void func_sc03_100_8017CB68(u8 *arg0) {
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

void func_sc03_100_8017CBD4(u8 *arg0, s32 arg1) {
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

void func_sc03_100_8017CC60(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc03_100_8017CC80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_100_8017BEBC(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_100_8017CCD4(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_100_8017CD10(u8 *arg0) {
    D_sc03_100_80188440[AF(arg0, u16, 2)]();
}

void func_sc03_100_8017CD4C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_100_8017CD9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_100_8017D030((s32) arg0);
}

void func_sc03_100_8017CDF8(u8 *arg0) {
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
    func_sc03_100_8017D030((s32) arg0);
}

void func_sc03_100_8017CE7C(u8 *arg0) {
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
    func_sc03_100_8017D030((s32) arg0);
}

void func_sc03_100_8017CFE4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_100_8017D030((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc03_100_8017D030(u8 *arg0) {
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
    t = D_sc03_100_80188414;
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
    t = D_sc03_100_80188414;
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
        t = D_sc03_100_80188414;
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

void func_sc03_100_8017D33C(u8 *arg0) {
    D_sc03_100_80188454[AF(arg0, u16, 2)]();
}

void func_sc03_100_8017D378(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_100_8017D3B8(u8 *arg0) {
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
    func_sc03_100_8017D030((s32) arg0);
}

void func_sc03_100_8017D428(u8 *arg0) {
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
    func_sc03_100_8017D030((s32) arg0);
}

void func_sc03_100_8017D4B4(u8 *arg0) {
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
    func_sc03_100_8017D030((s32) arg0);
}

void func_sc03_100_8017D588(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_100_8017D030((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_100_8017D5DC(u8 *arg0) {
    D_sc03_100_80188468[AF(arg0, u16, 2)]();
}

void func_sc03_100_8017D618(u8 *arg0) {
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

void func_sc03_100_8017D6CC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_100_8017D728((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc03_100_8017D728(u8 *arg0) {
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

void func_sc03_100_8017D898(u8 *obj) {
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

void func_sc03_100_8017E778(void) {
    D_801274C8 = &D_sc03_100_80188804;
    D_801274CC = &D_sc03_100_80188980;
    func_sc03_100_8017EF28(0);
}

void func_sc03_100_8017E7B8(void) {
    D_801274C8 = &D_sc03_100_80188994;
    D_801274CC = &D_sc03_100_80188B88;
    func_sc03_100_8017EF28(1);
}

void func_sc03_100_8017E7F8(u8 *arg0) {
    D_sc03_100_80188510[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_100_8017E834(u8 *arg0) {
    func_sc03_100_8017EA28();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_100_8017E878(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_100_8017E89C(u8 *arg0) {
    func_sc03_100_8017EA50();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_100_8017E8DC(u8 *arg0) {
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

void func_sc03_100_8017E958(void) {
    func_800D1EBC();
}

void func_sc03_100_8017E978(u8 *arg0) {
    D_sc03_100_80188524[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_100_8017E9B4(u8 *arg0) {
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

void func_sc03_100_8017EA28(void) {
    func_8016EE40((s32) &D_sc03_100_80188530, 0x01000000);
}

void func_sc03_100_8017EA50(void) {
    func_8016EE40((s32) &D_sc03_100_80188534, 0x01000000);
}

void func_sc03_100_8017EA78(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_100_8017EBA8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_100_8017EBA8((s32) &D_80126948);
}

void func_sc03_100_8017EB10(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_100_8017EBA8, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_100_8017EBA8((s32) &D_80126948);
}

void func_sc03_100_8017EBA8(s32 arg0) {
    D_sc03_100_80188538[AF(arg0, u8, 4)]();
}

void func_sc03_100_8017EBE4(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_100_80188540)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc03_100_8017ED90((s32) arg0, (s32) &v);
}

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
extern SV8 D_sc03_100_801C530C[];

extern u8 D_sc03_100_80188544[];

void func_sc03_100_8017EC84(u8 *arg0) {
    SV8 v;
    u8 t;
    s16 r;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_100_80188544)[t];
    }
    v = *(SV8 *)&D_80126940;
    if (v.z < 0x1B00 && v.x > 0xF00 && v.x < 0x1080) {
        r = 0x600;
    } else if (v.z >= 0x20A0 && (v.z >= 0x2180 || !(v.x > 0xF00 && v.x < 0x1080))) {
        r = 0x600;
    } else {
        r = 0x800;
    }
    AF(arg0, s16, 0x22) = r;
    func_sc03_100_8017ED90(arg0, (u8 *) &v);
}

void func_sc03_100_8017ED90(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_100_8017EF28(s32 arg0) {
    return func_8013B7F4(D_sc03_100_80188588[arg0], 0);
}

void func_sc03_100_8017EF58(s32 arg0) {
    func_sc03_100_8017EF78(arg0);
}

void func_sc03_100_8017EF78(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_sc03_100_801C88DC) {                  /* irregular */
    case 0:
        D_sc03_100_801C86A0 = 1;
        D_sc03_100_801C86A4 = 0;
        D_sc03_100_801C86A8 = 1;
        D_sc03_100_801C86AC = 1;
        D_sc03_100_801C88DC = 1;
        return;
    case 1:
        temp_v0 = D_sc03_100_801C86A0 - 1;
        D_sc03_100_801C86A0 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_100_801C86A0 = 2;
            func_sc03_100_8017F0B4((s32) &D_sc03_100_8019FB58, D_sc03_100_801C86A4 * 6);
            D_sc03_100_801C86A4 = (D_sc03_100_801C86A4 + 1) & 7;
        }
        temp_v0_2 = D_sc03_100_801C86A8 - 1;
        D_sc03_100_801C86A8 = temp_v0_2;
        if (temp_v0_2 == 0) {
            D_sc03_100_801C86A8 = 8;
            func_800183E0(D_sc03_100_80188548[D_sc03_100_801C86AC]);
            D_sc03_100_801C86AC = (D_sc03_100_801C86AC + 1) & 0xF;
        }
        return;
    }
}

void func_sc03_100_8017F0B4(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

s32 func_sc03_100_8017F114(void) {
    if (D_8012704C == 0) {
        return 0x34;
    }
    return 0x46;
}

void func_sc03_100_8017F134(u8 *arg0) {
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
        a.x = D_sc03_100_801A000C[i];
        a.z = D_sc03_100_801A000C[i + 1];
        b.x = D_sc03_100_801A000C[i + 2];
        b.z = D_sc03_100_801A000C[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_100_801A0034[i];
        a.z = D_sc03_100_801A0034[i + 1];
        b.x = D_sc03_100_801A0034[i + 2];
        b.z = D_sc03_100_801A0034[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_100_801A005C[i];
        a.z = D_sc03_100_801A005C[i + 1];
        b.x = D_sc03_100_801A005C[i + 2];
        b.z = D_sc03_100_801A005C[i + 3];
        if (func_8012DEB8(arg0, &a, &b) == 1) {
            D_80126B96 = 0x4004;
        }
    }
    D_sc03_100_801A0084[AF(arg0, u16, 2)](arg0);
    t = func_8012BD14(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D59C(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        func_8002D59C(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_100_8017F3CC(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &D_801202A0;
    i = 0;
    D_sc03_100_801A00D0[AF(arg0, u16, 2)]();
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

void func_sc03_100_8017F554(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_100_801A0374[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_100_801A0374[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_100_801A0374[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_100_801A00D8);
        SetScript(arg0, &D_sc03_100_801A0198);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_100_801A0220);
        SetScript(arg0, &D_sc03_100_801A02E0);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_100_801A03C4;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A03E8;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_100_801A009C;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_100_801A00D8);
        SetScript(arg0, &D_sc03_100_801A0198);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_100_801A0220);
        SetScript(arg0, &D_sc03_100_801A02E0);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_100_801A03D4);
        SetScript(arg0, &D_sc03_100_801A03E0);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_100_801A00D8);
        SetScript(arg0, &D_sc03_100_801A0198);
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

void func_sc03_100_8017FA00(u8 *arg0) {
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

void func_sc03_100_8017FB94(u8 *arg0) {
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

void func_sc03_100_8017FF44(u8 *arg0) {
    s32 temp_v0;

    D_sc03_100_801A03F8[AF(arg0, u16, 2)]();
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

void func_sc03_100_80180030(u8 *arg0) {
    D_sc03_100_801A04A4[AF(arg0, u16, 2)]();
}

void func_sc03_100_8018006C(u8 *arg0) {
    D_sc03_100_801A0558[AF(arg0, u16, 2)]();
}

void func_sc03_100_801800A8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_100_801800C0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_100_8019FFD8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_100_8019FFB8;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_100_80184C18);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_100_80180164(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_100_80180180(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_100_801A009C) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_100_8019FFB8;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_100_80184C18, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

void func_sc03_100_80180204(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    func_8012B2CC((s32) arg0, (s32) temp_a1);
}

void func_sc03_100_80180240(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_100_80180270(s32 arg0) {
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

void func_sc03_100_801802F4(u8 *arg0) {
    if (func_8012BCCC(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B864(arg0), 0x10);
    func_8012B1B4(arg0, &D_sc03_100_801A0368);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_100_801803B8(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc03_100_801A0374[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_100_801A0374[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_100_801A0374[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_100_80180498(u8 *arg0) {
    if (func_8012BD14(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(arg0);
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_100_80180508(u8 *arg0) {
    SV8 a;

    if (func_8012BCCC(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x12), func_8012B70C(&a, arg0 + 0x88), 4);
    func_8012B1B4(arg0, &D_sc03_100_801A0368);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (func_8012CBCC(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        func_8012E688(arg0, 0xBA2, 0);
    }
}

void func_sc03_100_801805E4(void) {
}

void func_sc03_100_801805EC(u8 *arg0) {
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

void func_sc03_100_801806A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_100_801A0430) != 0) {
        SetScript(arg0, (s32) &D_sc03_100_80184C18);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, u16, 0x12) = D_sc03_100_801A0464[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x16) = D_sc03_100_801A0466[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x1A) = D_sc03_100_801A0468[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, s32, 0x1C) = D_sc03_100_801A046A[AF(arg0, s16, 0xFC) * 4];
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_100_80180768(s32 arg0) {
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

void func_sc03_100_801807BC(s32 arg0) {
    s32 t;

    if (--AF(arg0, s32, 0x1C) == 0) {
        t = D_sc03_100_801A046A[AF(arg0, s16, 0xFC) * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = t;
    }
    func_8012DFD4(arg0);
}

void func_sc03_100_80180838(s32 arg0) {
    s32 o;
    s16 st;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_100_801A04B0);
    SetScript(arg0, &D_sc03_100_801A0510);
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

void func_sc03_100_8018091C(u8 *arg0) {
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

void func_sc03_100_801809E8(u8 *o) {
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

void func_sc03_100_80180AC0(u8 *arg0) {
    D_sc03_100_801A244C[AF(arg0, u16, 2)]();
}

void func_sc03_100_80180AFC(u8 *arg0) {
    if (func_8012C438(arg0, &D_sc03_100_801A2494 + (AF(arg0, u16, 0x70) & 0xF) * 0x34) != 0) {
        SetScript(arg0, &D_sc03_100_80184C18);
        AF(arg0, u8, 0x75) = 0;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x8040;
        AF(arg0, u16, 0xFE) = D_sc03_100_801A2598[AF(arg0, s16, 0xFC)].a;
        AF(arg0, u16, 0x100) = D_sc03_100_801A2598[AF(arg0, s16, 0xFC)].b;
        AF(arg0, u16, 0x102) = D_sc03_100_801A2598[AF(arg0, s16, 0xFC)].c;
        AF(arg0, u16, 0x104) = D_sc03_100_801A2598[AF(arg0, s16, 0xFC)].d;
        func_8001D0E8(AF(arg0, u8 *, 0x20), 0x104, 0xDC);
        switch (AF(arg0, u16, 0x70) & 0xF0) {
        case 0:
            AF(arg0, s16, 2) = 1;
            break;
        case 0x10:
            AF(arg0, s16, 2) = 2;
            break;
        case 0x20:
            AF(arg0, s16, 2) = 3;
            break;
        }
        func_8012C588(0x1C4, arg0);
    }
}

void func_sc03_100_80180C50(u8 *arg0) {
    D_sc03_100_801A25E8[AF(arg0, u16, 2)]();
    func_8012DFD4((s32) arg0);
}

void func_sc03_100_80180CA0(s32 arg0) {
    u16 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_100_801A23E8) != 0) {
        SetScript(arg0, (s32) &D_sc03_100_80184C18);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 8;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x104, 0xDC);
        temp_v1 = AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFC) = 0x60U;
        AF(arg0, u16, 0xFE) = temp_v1;
    }
}

void func_sc03_100_80180D18(u8 *arg0) {
    s32 t;
    s32 i;
    u8 *a;
    u8 *b;

    t = AF(arg0, u16, 0xFE) + AF(arg0, u16, 0xFC);
    AF(arg0, u16, 0xFE) = t & 0xFFF;
    if ((t & 0x7FF) < 0x61) {
        func_8002D4C8(0x6A5, 0);
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rcos(AF(arg0, s16, 0xFE)) >> 3;
    if (AF(arg0, s16, 0x70) != 0) {
        func_8012B414(arg0);
    }
    for (i = 0; i < 5; i++) {
        if (func_8012D5E4(arg0, &D_sc03_100_801A241C + i * 8, &D_sc03_100_801A241C + i * 8 + 8, 0x30) == 1) {
            D_80126B96 = 0x4004;
        }
    }
}

void func_sc03_100_80180E18(u8 *arg0) {
    s16 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
    temp_a0_3 = AF(arg0, void *, 0x20);
    AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x102));
    temp_v0 = (s16) AF(arg0, u16, 0x100);
    if ((temp_v0 != 0) && (AF(arg0, u8, 0x74) != 0)) {
        AF(D_80126B78, u16, 0x12) = (u16) (AF(D_80126B78, u16, 0x12) + temp_v0);
    }
}

void func_sc03_100_80180EAC(u8 *arg0) {
    if (AF(arg0, s16, 0x108) != 0) {
        AF(arg0, s16, 0x108)--;
        return;
    }
    AF(arg0, s16, 0x106) += AF(arg0, s16, 0xFE);
    AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C) + ((rsin(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A) + ((rcos(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    if ((AF(arg0, s16, 0x106) & 0x7FF) == 0) {
        AF(arg0, s16, 0x108) = 0xF;
    }
}

void func_sc03_100_80180F64(u8 *arg0) {
    if (AF(arg0, s16, 0x108) != 0) {
        AF(arg0, s16, 0x108)--;
        return;
    }
    AF(arg0, s16, 0x106) += AF(arg0, s16, 0xFE);
    AF(arg0, s16, 0x6) = AF(arg0, s16, 0x88) + ((rsin(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A) + ((rcos(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    if ((AF(arg0, s16, 0x106) & 0x7FF) == 0) {
        AF(arg0, s16, 0x108) = 0xF;
    }
}

void func_sc03_100_8018101C(u8 *arg0) {
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
            func_8001C214(AF(arg0, u8 *, 0x20), &D_sc03_100_801AA8A8);
            SetScript(arg0, &D_sc03_100_801B1FEC);
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

void func_sc03_100_801811A0(u8 *arg0) {
    s16 t;

    if (func_8012C354(arg0, &D_sc03_100_801A4514[AF(arg0, s16, 0x70)]) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    func_80143970(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc03_100_801B0EF4);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A464C;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc03_100_801B07BC);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A46EC;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc03_100_801B1E6C);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A4734;
        break;
    case 4:
        SetScript(arg0, &D_sc03_100_801B0EF4);
        AF(arg0, s16, 2) = 0xD;
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A464C;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc03_100_801B1CEC);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc03_100_801B0EF4);
            AF(arg0, s16, 2) = 1;
        }
        func_8012B23C(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A464C;
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

void func_sc03_100_801813C4(u8 *arg0) {
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
        SetScript(arg0, &D_sc03_100_801B0EF4);
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
        SetScript(arg0, &D_sc03_100_801B0864);
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

void func_sc03_100_80181778(u8 *arg0) {
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
            SetScript(arg0, &D_sc03_100_801B17F4);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc03_100_801B1174);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc03_100_801B19FC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_100_801819B8(u8 *arg0) {
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
    func_8012B1B4(arg0, &D_sc03_100_801A47AC);
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

void func_sc03_100_80181C20(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    func_8012B1B4(arg0, &D_sc03_100_801A47AC);
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
        SetScript(arg0, &D_sc03_100_801B14B4);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_100_80181DC8(u8 *arg0) {
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
                SetScript(arg0, &D_sc03_100_801B2004);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc03_100_801A44E4 | 0x40000000 | 0x20000000;
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
    func_8012B1B4(arg0, &D_sc03_100_801A47B8);
    func_8012CBCC(arg0);
}

void func_sc03_100_80182014(u8 *arg0) {
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

void func_sc03_100_80182160(u8 *arg0) {
    u8 *p;
    s32 i;

    D_sc03_100_801A47D0[AF(arg0, u16, 2)]();
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

void func_sc03_100_80182218(u8 *arg0) {
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

void func_sc03_100_8018236C(u8 *arg0) {
    D_sc03_100_801A4860[AF(arg0, u16, 2)]();
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

void func_sc03_100_80182418(u8 *arg0) {
    D_sc03_100_801A49C0[AF(arg0, u16, 2)]();
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

void func_sc03_100_801824C8(u8 *arg0) {
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
    SetScript(arg0, &D_sc03_100_801B1D84);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, u8 *, 0xBC) = &D_sc03_100_801A464C;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x58) = (s32)&D_sc03_100_801A44E4 | 0x40000000 | 0x20000000;
    AF(arg0, u16, 0x88) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x8A) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x8C) = AF(arg0, u16, 0xE);
}

void func_sc03_100_801825B0(u8 *arg0) {
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
    if (AF(arg0, u8 *, 0x90) == &D_sc03_100_801B033C) {
        SetScript(arg0, &D_sc03_100_801B0134);
        AF(arg0, s16, 2) = 0x14;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, u8 *, 0xCC) = &D_sc03_100_801B0EF4;
    } else {
        if (AF(arg0, s16, 0xFE) != 0) {
            SetScript(arg0, &D_sc03_100_801B19FC);
        } else {
            SetScript(arg0, &D_sc03_100_801B0EF4);
        }
        AF(arg0, s16, 2) = 1;
    }
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc03_100_801826CC(u8 *arg0) {
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

void func_sc03_100_801827AC(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        func_8012B1B4(arg0, &D_sc03_100_801A44C8);
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

void func_sc03_100_80182884(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_100_801828EC(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_100_80182928(u8 *arg0) {
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
    SetScript(arg0, &D_sc03_100_801B1E6C);
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc03_100_801829CC(u8 *arg0) {
    UV4 a;
    UV4 b;

    func_8012B1B4(arg0, &D_sc03_100_801A44C8);
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

void func_sc03_100_80182A8C(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_100_801A44D8);
}

void func_sc03_100_80182AC0(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_100_80182B1C(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_100_80182B54(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_100_801B09D4, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

void func_sc03_100_80182BB0(s32 arg0) {
    s32 temp_v1;

    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc03_100_801B09D4);
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && func_8012DEB8(arg0, (s32) &D_sc03_100_801A478C, (s32) &D_sc03_100_801A4794) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_100_80182C88(u8 *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_100_801B09D4);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_100_80182D1C(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        func_80153BF0(arg0);
        SetScript(arg0, (s32) &D_sc03_100_801B16EC);
        AF(arg0, s16, 0x34) = 7;
        AF(arg0, s16, 2) = 0x13;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
    if (AF(arg0, s32, 0x94) == 0x17 && func_8012DEB8(arg0, (s32) &D_sc03_100_801A478C, (s32) &D_sc03_100_801A4794) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_100_80182DE8(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        func_8012B1B4((s32) arg0, (s32) &D_sc03_100_801A47C4);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc03_100_801B07BC);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && func_8012D5E4((s32) arg0, (s32) &D_sc03_100_801A479C, (s32) &D_sc03_100_801A47A4, 0x14) == 1) {
        func_8002D4C8(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &D_80126B96;
            D_80126B98 = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc03_100_80182EC0(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_100_801B07BC);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_100_801A44F4 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_100_80182F5C(u8 *arg0) {
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

void func_sc03_100_80182FB4(void) {
}

void func_sc03_100_80182FBC(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_100_801A478C, (s32) &D_sc03_100_801A4794) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_100_801B127C);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_100_801B19FC);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_100_8018305C(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_100_801B19FC);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_100_801830B0(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_100_801A478C, (s32) &D_sc03_100_801A4794) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_100_801B15BC);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_100_801B1E6C);
    AF(arg0, s16, 2) = 6;
}

void func_sc03_100_80183144(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_100_801B16EC);
        AF(arg0, s16, 2) = 6;
    } else {
        AF(arg0, s16, 2) = 8;
    }
}

void func_sc03_100_8018318C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_100_801831B4(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

void func_sc03_100_80183200(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_100_801A4824);
    SetScript((s32) arg0, (s32) &D_sc03_100_801A483C);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_100_801A4854);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_100_801832EC(s32 arg0) {
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

void func_sc03_100_80183370(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_100_801A486C);
    SetScript((s32) arg0, (s32) &D_sc03_100_801A492C);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    func_8012B23C((s32) arg0);
    func_8012B2CC((s32) arg0);
    func_8012B14C((s32) arg0, (s32) &D_sc03_100_801A49B4);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_100_8018347C(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_100_801834B4(u8 *arg0, s32 arg1) {
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

void func_sc03_100_80183520(u8 *arg0) {
    D_sc03_100_801C1A2C[AF(arg0, u16, 2)]();
}

void func_sc03_100_8018355C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_100_8018373C();
        return;
    }
    var_v0 = &D_sc03_100_801C87F4;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

void func_sc03_100_801835D4(u8 *arg0) {
    s32 d;
    s32 r;
    u16 n;

    if (func_8012BEE8(arg0) != 0) {
        r = rand();
        n = AF(arg0, u16, 0xFC);
        d = ((s16)n / 2 - (r & (n - 1))) * 2;
        D_sc03_100_801C1A3C.x = AF(arg0, u16, 6) + d;
        D_sc03_100_801C1A3C.y = AF(arg0, u16, 0xA);
        D_sc03_100_801C1A3C.z = AF(arg0, u16, 0xE) + d;
        func_sc03_100_80183684(arg0, &D_sc03_100_801C1A3C);
        AF(arg0, s32, 0x1C) = (rand() & 0x7F) + 0x40;
    }
}

void func_sc03_100_80183684(u8 *arg0, u8 *arg1) {
    s32 i;

    i = 0;

    if (func_8012E778(arg0, ((D_800AF7BE >> 1) << 16) | (D_800AF7BC >> 1))) {
        for (; i < 5; i++) {
            if (D_sc03_100_801C87F0[i] == 0) {
                D_sc03_100_801C87F0[i] = 1;
                AF(arg1, s32, 0x10) = i | 0x80000000;
                AF(arg1, u16, 8) = AF(arg0, u16, 0x70);
                func_8012C51C(arg1, arg0);
                return;
            }
        }
    }
}

void func_sc03_100_8018373C(u8 *arg0) {
    s32 o;
    u8 *p;

    p = (AF(arg0, s16, 0xDC) << 6) + D_sc03_100_801C86B0;
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
        func_sc03_100_80183AC8(arg0);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_100_801837FC(u8 *arg0) {
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
        D_sc03_100_801C87F0[AF(arg0, s16, 0xDC)] = 0;
        func_8012C218(arg0);
        return;
    }
    func_sc03_100_801838C8(arg0);
}

void func_sc03_100_801838C8(u8 *arg0) {
    QuadArg q;
    WMtx m;
    SV r;

    q.code = 0x50000000;
    *(s32 *) &q.c[0] = 0x80;
    *(s32 *) &q.c[1] = 0x80;
    *(s32 *) &q.c[2] = 0;
    *(s32 *) &q.c[3] = 0;
    q.p[0] = D_sc03_100_801C1A50;
    q.p[1] = D_sc03_100_801C1A58;
    q.p[2] = D_sc03_100_801C1A60;
    q.p[3] = D_sc03_100_801C1A68;
    func_80017DC4(arg0 + 0xFC, &m);
    RotMatrixY((s16) func_8012A758(), &m);
    func_80015978(arg0 + 4, &r);
    func_80017E68(&r, &m);
    func_80017758(&q, &m);
    q.code = 0x60000000;
    *(s32 *) &q.c[0] = 0x808080;
    *(s32 *) &q.c[1] = 0x808080;
    q.p[0] = D_sc03_100_801C1A70;
    q.p[1] = D_sc03_100_801C1A78;
    q.p[2] = D_sc03_100_801C1A80;
    q.p[3] = D_sc03_100_801C1A88;
    func_80017758(&q, &m);
}

void func_sc03_100_80183AC8(u8 *arg0) {
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8002D4C8(0x6D5, 0);
        break;
    case 1:
        func_8002D4C8(0x856, (func_sc03_100_80183B50() | 0x2000) & 0xFFFF);
        break;
    case 2:
        func_8002D4C8(0x857, (func_sc03_100_80183B50() | 0x2000) & 0xFFFF);
        break;
    }
}

s32 func_sc03_100_80183B50(u8 *arg0) {
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

void func_sc03_100_80183BD4(u8 *arg0) {
    D_sc03_100_801C4FAC[AF(arg0, u16, 2)]();
}

void func_sc03_100_80183C10(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_100_801C4ECC, D_sc03_100_801C4ECE, D_sc03_100_801C4ED0);
        p = &D_sc03_100_801C4ED4;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_100_801C4F04, D_sc03_100_801C4F06, D_sc03_100_801C4F08);
        p = &D_sc03_100_801C4F0C;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_100_801C4F3C, D_sc03_100_801C4F3E, D_sc03_100_801C4F40);
        p = &D_sc03_100_801C4F44;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_100_801C4ECC, D_sc03_100_801C4ECE, D_sc03_100_801C4ED0);
        p = &D_sc03_100_801C4ED4;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_100_801C4F74, D_sc03_100_801C4F76, D_sc03_100_801C4F78);
        p = &D_sc03_100_801C4F7C;
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

void func_sc03_100_80183E04(u8 *arg0) {
    D_800A5E88.c = D_sc03_100_801C4EF4;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_100_80183EB4(u8 *arg0) {
    D_800A5E88.c = D_sc03_100_801C4F2C;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_100_80183F64(u8 *arg0) {
    D_800A5E88.a = D_sc03_100_801C4F44.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_100_80184014(void) {
}

void func_sc03_100_8018401C(u8 *arg0) {
    D_800A5E88.a = D_sc03_100_801C4F7C.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_100_801840C0(u8 *arg0) {
    D_sc03_100_801C52F4[AF(arg0, u16, 2)]();
}

void func_sc03_100_801840FC(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc03_100_801C4FE4) != 0) {
        if (!(func_80029178(D_sc03_100_801C504C[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc03_100_801847A8);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_100_80184C18);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_100_801841D0(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_100_801841F8(void) {
}

void func_sc03_100_80184200(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc03_100_801C5230 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_100_801C5194[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_100_801C521C = 0;
            func_80029124(D_sc03_100_801C5194[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_100_801C5218 = 2;
        } else {
            D_sc03_100_801C5230 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_100_801C5110[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_100_801C5218 = 0;
            D_sc03_100_801C521C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc03_100_801C5244);
    } else {
        var_a1 = &D_sc03_100_801C52B0;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc03_100_8018434C(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc03_100_801C504C[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_100_801C504C[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc03_100_80184550() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_100_8018446C(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc03_100_80184498(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_100_801844A8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_100_801844B8(u8 *arg0) {
    func_80029124(D_sc03_100_801C504C[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_100_801844F8(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_100_8018452C(void) {
    return func_80174764() == 1;
}

s32 func_sc03_100_80184550(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc03_100_801C504C[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_100_801845B4(u8 *arg0) {
    D_sc03_100_801C531C[AF(arg0, u16, 2)]();
}

void func_sc03_100_801845F0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_100_801C5018) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_100_801C59DC);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_100_801C57BC);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_100_80184678(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_100_801C57CC);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_100_801C58D4);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_100_80184738(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_100_801C59DC);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_100_801C57BC);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc03_100_801847A8(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc03_100_801C530C[0], &a, &f);
    RotTransSV(&D_sc03_100_801C530C[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}
