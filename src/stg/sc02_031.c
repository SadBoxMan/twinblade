#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_031_8017BE9C(void) {
}

void func_sc02_031_8017BEA4(void) {
}

void func_sc02_031_8017BEAC(void) {
}

void func_sc02_031_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_031_80188668[])();
extern void (*D_sc02_031_80188780[])();
extern void (*D_sc02_031_801887D8[])();
extern void (*D_sc02_031_801887EC[])();
extern void (*D_sc02_031_80188800[])();
extern void (*D_sc02_031_80188C24[])();
extern void (*D_sc02_031_80188D6C[])();
extern s32 func_800167F0();
extern void (*D_sc02_031_80188D74[])();
extern void (*D_sc02_031_80188D80[])();
extern void func_800D1EBC();
extern void (*D_sc02_031_80188D8C[])();
extern void (*D_sc02_031_80188D98[])();
extern void func_sc02_031_8018133C();
extern void (*D_sc02_031_80188DD0[])();
extern void (*D_sc02_031_80188DE8[])();
extern void (*D_sc02_031_80188E00[])();
extern void (*D_sc02_031_80188E08[])();
extern void (*D_sc02_031_80188E50[])();
extern void (*D_sc02_031_80188FE0[])();
extern void (*D_sc02_031_80188FE8[])();
extern void (*D_sc02_031_80189048[])();
extern void (*D_sc02_031_80189420[])();
extern void (*D_sc02_031_80189438[])();
extern void (*D_sc02_031_8018949C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc02_031_80184F9C;
extern u8 D_sc02_031_80189450;
extern s32 * func_sc02_031_80184358();
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc02_031_801AB130[])();
extern void (*D_sc02_031_801AB158[])();

extern void func_800D22E4();
extern void func_80146C3C();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void func_sc02_031_8017C180();
extern void func_80146A6C();
extern void func_80147324();
extern void func_sc02_031_8017D2F4();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80147084();
extern void func_801472B4();
extern void func_sc02_031_8017D9EC();
extern void (*D_sc02_031_801888B8[])();
extern u8 D_sc02_031_80188808;
extern void func_80154274();
extern void func_80171990();
extern void func_801466F0();
extern u8 D_sc02_031_801888B0;
extern void func_8016EE40();
extern s32 D_80126D54;
extern s16 D_80126B0C;
extern void (*D_sc02_031_80188900[])();
extern void func_80162D28();
extern s16 D_sc02_031_801888F8;
extern s16 D_sc02_031_801888FA;
extern s16 D_sc02_031_801888FC;
extern u8 D_sc02_031_801B40E4;
extern s32 func_8014659C();
extern void func_8001C214();
extern void func_80149374();
extern void func_80146DE8();
extern void func_80146CA0();
extern u8 D_sc02_031_801888C8;
extern u8 D_sc02_031_80188910;
extern u8 D_sc02_031_801B473C;
extern void func_8016325C();
extern void func_80162FC0();
extern void func_8013C9C4();
extern void func_8001C810();
extern void func_801466B4();
extern void (*D_sc02_031_80188944[])();
extern void func_sc02_031_8017E358();
extern u8 D_800DF2E0;
extern u8 D_sc02_031_80188924;
extern void func_80162CCC();
extern void func_80146E90();
extern s32 func_80146E98();
extern u8 D_sc02_031_80188C14[];
extern void func_80029124();
extern void (*D_sc02_031_80188C50[])();

extern u8 D_sc02_031_80188C48;
extern void func_sc02_031_8017F5B4();


extern s32 func_80029178();
extern void func_800D0C48();
extern void func_8001BFD0();
extern void func_800D1E28();

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
extern void func_8012A018();
extern void func_8012A094();

extern void func_8012AD50();
extern u8 D_80126CB4;
extern s32 func_80013294();

extern void (*D_sc02_031_80188FB8[])();
extern void func_sc02_031_801832D0();
extern u8 D_sc02_031_80188ED8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_sc02_031_80182994();
extern void func_8012C51C();
extern u8 D_sc02_031_80188EEC;
extern u8 D_sc02_031_80188F98;
extern void func_80178BF8();
extern void func_801746DC();
extern void func_80178CBC();
extern void func_8013C98C();
extern s32 func_800D0CE0();

extern s32 func_80128ED8();
extern void func_801292C8();
extern u16 D_800B99DA;
extern u8 D_sc02_031_801ABA28;
extern u8 D_sc02_031_80189008[];
extern s32 func_800183E0();
extern s32 D_sc02_031_801B7930;
extern s32 D_sc02_031_801B794C;
extern s32 D_sc02_031_801B7988;
extern void (*D_sc02_031_801893D4[])();
extern s32 func_sc02_031_80183B90();
extern u8 D_sc02_031_801B4A44;
extern u8 D_sc02_031_80189354[];
extern u8 D_sc02_031_80189484;
extern u8 D_sc02_031_801AAE20;
extern s32 * func_sc02_031_80184A9C();
extern s32 D_sc02_031_801AAE88[];
extern s32 func_8012C658();
extern void func_8014ADA8();
extern s32 func_80174764();
extern u8 D_sc02_031_801AAE54;
extern u8 D_sc02_031_801AB5F8;
extern u8 D_sc02_031_801AB818;

extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern u8 D_sc02_031_80188E70;
extern u8 D_sc02_031_80188E78;
extern s32 func_8012BEE8();
extern void func_sc02_031_80182674();
extern void func_sc02_031_80182848();
extern void func_8012B21C();
extern s32 func_sc02_031_80182618();

extern void func_80175414();

extern u8 D_sc02_031_80188DA4;
extern u8 D_sc02_031_80188DB0;
extern u8 D_sc02_031_80188DC4;

void func_sc02_031_80181224(void);
extern void func_800167B8();
void func_sc02_031_8018124C(void);
void func_sc02_031_80181274(void);

extern u8 D_80078EAF;
extern u8 D_sc02_031_8018942C;
extern void func_8001CB6C();
extern u8 D_sc02_031_801893FC;
extern u8 D_sc02_031_80188E80;
extern s32 func_sc02_031_80182AB4();
s32 func_sc02_031_801829A8(s32 arg0);
void func_sc02_031_801829A0(s32 arg0);

extern s32 D_sc02_031_801AB054;
extern s32 D_sc02_031_801AB058;
extern s32 D_sc02_031_801AB06C;
extern s32 D_sc02_031_801AB080;
extern s32 D_sc02_031_801AB0EC;
extern s32 D_sc02_031_801AAFD0[];
extern s32 D_sc02_031_801AAF4C[];
extern s32 func_8014C088();
extern void func_8014B5C4();
extern s32 func_8014CB58();
extern void func_80172710();
extern s32 func_8012BD14();
extern s32 func_80016A3C();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
extern void func_80178B18();

extern u8 D_sc02_031_801B7840;
extern s32 func_sc02_031_80181EF0();
void func_sc02_031_80181DEC(s32 arg0, s32 arg1);
extern void func_800D20C0();
extern void func_800D23D0();
typedef struct { s32 x, y, z; } V3;

extern u8 D_sc02_031_80188FD0;
extern u8 D_sc02_031_801ABB28[];
extern u8 D_sc02_031_801B4944[];

extern u8 D_sc02_031_801AB608;
extern u8 D_sc02_031_801AB710;
extern s32 func_8012C194();
extern u8 D_sc02_031_80189054;
extern s32 func_sc02_031_80183AC8();
extern void func_80016714();
extern u8 D_sc02_031_80188FF0;
extern u8 D_sc02_031_80188FFC;
extern s32 func_sc02_031_801830EC();
extern u8 D_sc02_031_80188E40;
extern u8 D_sc02_031_80188E30;
extern u8 D_sc02_031_80188E20;
extern u8 D_sc02_031_80188E10;
extern s32 func_80029504();
extern s32 func_sc02_031_80181F5C();
extern u8 D_sc02_031_801889D8;
extern s32 func_8012CBCC();
extern void func_8012B2CC();
extern void func_8012B14C();

extern u8 D_80078E78;
extern u8 D_sc02_031_80188BF4;
extern s32 func_8012E778();
extern void func_801439C0();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc02_031_80184844();


typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern s16 D_800B9A08;
extern u8 D_sc02_031_80188730;
extern u8 D_sc02_031_801886CC[];
extern s32 func_80013328();
extern void func_801746A4();
extern void func_800233CC();
extern u8 D_sc02_031_801B7618;
extern u8 D_sc02_031_801B7619;
extern u8 D_sc02_031_801B761A;
extern u8 D_sc02_031_801B761C;
extern u8 D_sc02_031_801B761D;
extern u8 D_sc02_031_801B761E;
extern s32 D_sc02_031_801B781C;
extern s32 D_sc02_031_801B7820;
extern s32 D_sc02_031_801B7824;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc02_031_801AC390;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_800AF630;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern s32 D_sc02_031_801B79E8;
extern s16 D_sc02_031_801B79EC;
extern s16 D_sc02_031_801B79EE;
extern s16 D_sc02_031_801B79F0;
extern s32 D_sc02_031_801B79F4;
extern s32 D_sc02_031_801B7A00;
#define FOGAX(c, v, ctr)                    \
    d = (v) - (ctr);                        \
    if (d < 0) d = (ctr) - (v);             \
    if (r < d) c = 0;                       \
    else if (r2 < d) c = (c * (r - d)) >> 7;
#define FOG(c, vx, vy, vz)                  \
    c = 0;                                  \
    d = (vx) - cx;                          \
    if (d < 0) d = cx - (vx);               \
    if (d < r) {                            \
        if (d < r2) c = 0x80;               \
        else c = r - d;                     \
    }                                       \
    FOGAX(c, vz, cz)                        \
    FOGAX(c, vy, cy)                        \
    c += fog;                               \
    if (c > 0x80) c = 0x80;
#define INBOX(vx, vy, vz) (x0 < (vx) && (vx) < x1 && y0 < (vy) && (vy) < y1 && z0 < (vz) && (vz) < z1)
#define ADDPRIM(len)                                                      \
    {                                                                     \
    u32 *o;                                                               \
    o = OTSLOT;                                                    \
    *(u32 *)pkt = (*o & 0xFFFFFF) | ((len) << 24);                        \
    *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);                       \
    }
#define PCC(m, p) ((p) > (m))
#define OTSLOT (u32 *)(((z >> 2) << 2) + (u32)ot)
#define CWSTORE(k, c) cw = code | c | (c << 8) | 0x800000; AF(pkt, u32, k) = cw;
#define ARM1(x, n, a, b) x = a; n = b;
#define ARM2(x, n, a, b) n = a; x = b;
#define PKCMP pa > pb
/* one s16 temporary per pick: compared, then copied in the arm */
#define PICK3(mx, mn, o0, o1, o2)                                         \
    {                                                                     \
        s16 pa, pb, pc;                                                   \
        pa = AF(sxy, s16, o0); pb = AF(sxy, s16, o1);                     \
        if (PKCMP) { ARM1(mx, mn, pa, pb) } else { ARM2(mx, mn, pa, pb) }     \
        pc = AF(sxy, s16, o2);                                            \
        if (PCC(mx, pc)) mx = pc; else if (pc < mn) mn = pc;                  \
    }
#define PICK1(mx, mn, off)                                                \
    {                                                                     \
        s16 pd;                                                           \
        pd = AF(pkt, s16, off);                                           \
        if (pd < mn) mn = pd; else if (mx < pd) mx = pd;                  \
    }
#define VTX(p, vx, vy, vz)                                                \
    q0 = AF(p, u32, 0); q1 = AF(p, u32, 4);                               \
    vx = q0; vy = q0 >> 16; vz = q1;                                      \
    if (INBOX(vx, vy, vz)) in = 1;
#define MMC(a, b) ((a) > (b))

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc02_031_801887AC[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc02_031_8018865C;
extern u8 *func_800D21C4();
extern s32 D_sc02_031_801B7828;
extern s32 D_sc02_031_801B7834;
extern s32 D_sc02_031_801B783C;
extern void func_sc02_031_8017ED60();
extern void func_sc02_031_8017ECEC();
extern s32 func_8012BB3C();
extern s32 func_8012B8E4();
extern void func_8012AD80();
extern s32 func_8012CBF4();
extern void func_8012B200();
extern u8 D_sc02_031_80188950;
extern s32 func_8012CBA4();

extern u8 D_sc02_031_80189028;
extern u8 D_sc02_031_80189038;
extern void func_8014B598();
extern s32 func_8014CB2C();
extern s32 func_8016F1AC();
extern void func_80175454();
extern void func_800D0CA0();
extern void func_8016F0AC();
extern s32 func_8012E544();
extern void func_8002959C();

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
extern u8 D_sc02_031_80188698;
extern u8 D_sc02_031_801886D4;
extern u8 D_sc02_031_801AC368;
extern u8 D_sc02_031_801B75A8;
extern u8 D_sc02_031_801B75B4;
extern u8 D_sc02_031_801B75B5;
extern u8 D_sc02_031_801B75B6;
extern u8 D_sc02_031_801B75C4;
extern u8 D_sc02_031_801B75C5;
extern u8 D_sc02_031_801B75C6;
extern u8 D_sc02_031_801B75D5;
extern u8 D_sc02_031_801B75D6;
extern u8 D_sc02_031_801B75D8;
extern u8 D_sc02_031_801B75D9;
extern u8 D_sc02_031_801B75DA;
extern u8 D_sc02_031_801B75DC;
extern u8 D_sc02_031_801B75DD;
extern u8 D_sc02_031_801B75DE;
extern u8 D_sc02_031_801B75E4;
extern u8 D_sc02_031_801B7658;
extern s32 func_8012B864();
extern s32 D_sc02_031_80188BB8;
extern void func_8012ADE4();
extern void func_sc02_031_8017EE3C();
extern s32 func_8012BC60();
extern void func_80178B70();
extern s32 func_8012BDBC();

extern s32 func_80143970();
extern u8 D_sc02_031_80188AE8;
extern u8 D_sc02_031_80188B1C;
extern s32 D_sc02_031_801B782C;
extern s32 D_sc02_031_801B7830;

extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_8012F14C();
extern s32 func_80148800();
extern s16 D_sc02_031_80188DD4[];

extern u8 D_sc02_031_8018939C;
extern u8 D_sc02_031_801893AC;
extern u8 D_sc02_031_801893BC;
extern s16 D_sc02_031_801B7990;
extern s16 D_sc02_031_801B7992;
extern s16 D_sc02_031_801B7994;
extern s16 D_sc02_031_801B7998;
extern s16 D_sc02_031_801B799A;
extern s16 D_sc02_031_801B799C;
extern void *D_801151D4;

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 D_sc02_031_801B75AC;
extern s32 D_sc02_031_801B75B0;
extern s32 D_sc02_031_801B75B8;
extern s32 D_sc02_031_801B75BC;
extern s32 D_sc02_031_801B75C0;
extern s32 D_sc02_031_801B75C8;
extern s32 D_sc02_031_801B75CC;
extern s32 D_sc02_031_801B75D0;

extern u8 D_80126CAC;
extern s32 D_801274D8;
extern s32 D_801274DC;
extern s32 func_800132BC();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern u8 D_sc02_031_80188B50[];
extern XY D_sc02_031_80188B70[];
extern u8 D_sc02_031_80188A40;

void func_sc02_031_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc02_031_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc02_031_8018865C, 0x2A);
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

void func_sc02_031_8017C0E4(u8 *arg0) {
    D_sc02_031_80188668[AF(arg0, u16, 2)]();
}

void func_sc02_031_8017C120(u8 *arg0) {
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

void func_sc02_031_8017C180(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc02_031_801B75A8 = D_sc02_031_801B75B8 = D_sc02_031_801B75C8 = v.vx;
    D_sc02_031_801B75AC = D_sc02_031_801B75BC = D_sc02_031_801B75CC = v.vy;
    D_sc02_031_801B75B0 = D_sc02_031_801B75C0 = D_sc02_031_801B75D0 = v.vz;
}

void func_sc02_031_8017C2B0(u8 *arg0) {
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
        if (func_8012C354(arg0, &D_sc02_031_80188698) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc02_031_801AC368);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc02_031_801886D4);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc02_031_801B75A8;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc02_031_801B75D8;
        func_8001CD50(o, p);
        D_sc02_031_801B75DA = 0x80;
        p[0] = 0x80;
        D_sc02_031_801B75D9 = 0xE0;
        D_sc02_031_801B75DD = 0;
        D_sc02_031_801B75DC = 0;
        D_sc02_031_801B75DE = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc02_031_801AC390;
        b = (U12x9 *) &D_sc02_031_801B7658;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc02_031_801B75D6 = 0xFF;
        D_sc02_031_801B75E4 = 0xFF;
        D_sc02_031_801B75C6 = 0xFF;
        D_sc02_031_801B75C4 = 0xFF;
        D_sc02_031_801B75B6 = 0xFF;
        D_sc02_031_801B75B4 = 0xFF;
        D_sc02_031_801B75D5 = 0x80;
        D_sc02_031_801B75C5 = 0x80;
        D_sc02_031_801B75B5 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc02_031_801B7658;
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

void func_sc02_031_8017C63C(u8 *arg0) {
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
    func_sc02_031_8017C180(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc02_031_801886CC[(s16) i]) {
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
            func_80178B18(arg0, &D_sc02_031_80188730);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc02_031_8017C8B4(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc02_031_801B7618;
        func_8001CD50(o, p);
        D_sc02_031_801B7619 = 0xFF;
        D_sc02_031_801B761A = 0xFF;
        p[0] = 0xFF;
        D_sc02_031_801B761E = 8;
        D_sc02_031_801B761C = 8;
        D_sc02_031_801B761D = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc02_031_801B781C;
        q[0] = v.vx;
        D_sc02_031_801B7820 = v.vy;
        D_sc02_031_801B7824 = v.vz;
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

void func_sc02_031_8017C9FC(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc02_031_801AC390;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc02_031_8017C180(arg0, 0);
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

void func_sc02_031_8017CB7C(u8 *arg0) {
    D_sc02_031_80188780[AF(arg0, u16, 2)]();
}

void func_sc02_031_8017CBB8(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc02_031_8017CC04(u8 *arg0) {
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
        func_sc02_031_8017C180((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_031_8017CCF8(u8 *arg0) {
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

void func_sc02_031_8017CD78(u8 *arg0) {
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

void func_sc02_031_8017CE2C(u8 *arg0) {
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

void func_sc02_031_8017CE98(u8 *arg0, s32 arg1) {
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

void func_sc02_031_8017CF24(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_031_8017CF44(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_031_8017C180(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_031_8017CF98(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_031_8017CFD4(u8 *arg0) {
    D_sc02_031_801887D8[AF(arg0, u16, 2)]();
}

void func_sc02_031_8017D010(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_031_8017D060(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_031_8017D2F4((s32) arg0);
}

void func_sc02_031_8017D0BC(u8 *arg0) {
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
    func_sc02_031_8017D2F4((s32) arg0);
}

void func_sc02_031_8017D140(u8 *arg0) {
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
    func_sc02_031_8017D2F4((s32) arg0);
}

void func_sc02_031_8017D2A8(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_031_8017D2F4((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_031_8017D2F4(u8 *arg0) {
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
    t = D_sc02_031_801887AC;
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
    t = D_sc02_031_801887AC;
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
        t = D_sc02_031_801887AC;
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

void func_sc02_031_8017D600(u8 *arg0) {
    D_sc02_031_801887EC[AF(arg0, u16, 2)]();
}

void func_sc02_031_8017D63C(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_031_8017D67C(u8 *arg0) {
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
    func_sc02_031_8017D2F4((s32) arg0);
}

void func_sc02_031_8017D6EC(u8 *arg0) {
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
    func_sc02_031_8017D2F4((s32) arg0);
}

void func_sc02_031_8017D778(u8 *arg0) {
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
    func_sc02_031_8017D2F4((s32) arg0);
}

void func_sc02_031_8017D84C(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_031_8017D2F4((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_031_8017D8A0(u8 *arg0) {
    D_sc02_031_80188800[AF(arg0, u16, 2)]();
}

void func_sc02_031_8017D8DC(u8 *arg0) {
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

void func_sc02_031_8017D990(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_031_8017D9EC((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_031_8017D9EC(u8 *arg0) {
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

void func_sc02_031_8017DB5C(u8 *arg0) {
    D_sc02_031_801888B8[AF(arg0, u8, 0x216)]();
}

void func_sc02_031_8017DB98(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc02_031_80188808);
    func_80171990(arg0);
}

void func_sc02_031_8017DBD8(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x20000);
        func_801466F0(0x16, (s32) arg0, 0, -0x80, /* extra? */ -0x10, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        func_80147324(0x7BC);
        func_80171990((s32) arg0);
    }
}

void func_sc02_031_8017DC54(s32 arg0) {
    if (func_8014C088(arg0, 0x16) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & 0xFFFDFFFF);
        func_8014B5C4(arg0, func_8014CB58() & 0xFF, 0x80);
        func_80171990(arg0);
    }
}

void func_sc02_031_8017DCB4(void) {
}

void func_sc02_031_8017DCBC(void) {
    func_8016EE40((s32) &D_sc02_031_801888B0, 0x01000000);
}

s32 func_sc02_031_8017DCE4(void) {
    return D_80126D54 == (s32) &D_sc02_031_801888B0;
}

s16 func_sc02_031_8017DD00(void) {
    return D_80126B0C;
}

void func_sc02_031_8017DD10(u8 *arg0) {
    D_sc02_031_80188900[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0x20) != 0) {
        func_80162D28((s32) arg0);
    }
}

void func_sc02_031_8017DD70(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc02_031_801B40E4);
        AF(temp_v0, s16, 0x10) = 0x800;
        AF(arg0, s16, 0x60) = 0;
        func_80149374(temp_s2, (s32) (arg0 + 4));
        func_80146DE8((s32) arg0, 0, -0x400000, 0);
        D_sc02_031_801888FC = 0x80;
        D_sc02_031_801888FA = 0x80;
        D_sc02_031_801888F8 = 0x80;
        func_80146CA0((s32) arg0);
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        }
    }
}

void func_sc02_031_8017DE3C(u8 *arg0) {
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
        func_8013C9C4((s32) &D_sc02_031_80188910);
        AF(arg0, s16, 0x60) = (s16) AF(temp_s0, u16, 0x18);
        func_8001C810((s32) temp_s0, (s32) &D_sc02_031_801B473C);
        AF(temp_s0, s32 *, 0x80) = &D_sc02_031_801888C8;
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

void func_sc02_031_8017E008(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc02_031_801888FC + 8;
    D_sc02_031_801888FC = (u16) temp_v0;
    D_sc02_031_801888FA = temp_v0;
    D_sc02_031_801888F8 = temp_v0;
    if (temp_v0 >= 0x101) {
        func_80146CA0(arg0);
    }
}

void func_sc02_031_8017E064(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc02_031_801888FC - 8;
    D_sc02_031_801888FC = (u16) temp_v0;
    D_sc02_031_801888FA = temp_v0;
    D_sc02_031_801888F8 = temp_v0;
    if (temp_v0 < -0x80) {
        func_80162CCC(arg0);
    }
}

void func_sc02_031_8017E0C0(u8 *arg0) {
    func_sc02_031_8017E358();
    D_sc02_031_80188944[AF(arg0, u16, 2)](arg0);
    if (AF(arg0, s32, 0x20) != 0) {
        func_80162D28((s32) arg0);
    }
}

void func_sc02_031_8017E124(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, (s32) &D_800DF2E0);
        AF(temp_v0, s32 *, 0x80) = &D_sc02_031_801888C8;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0xB0);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s32, 0x50) * 8) + &D_sc02_031_80188924);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        func_80146CA0((s32) arg0);
        return;
    }
    func_80162CCC((s32) arg0);
}

void func_sc02_031_8017E1D4(u8 *arg0) {
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

void func_sc02_031_8017E298(u8 *arg0) {
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

void func_sc02_031_8017E358(u8 *arg0) {
    u8 *s = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);

    AF(arg0, s32, 4) = AF(s, s32, 4);
    AF(arg0, s32, 8) = AF(s, s32, 8);
    AF(arg0, s32, 0xC) = AF(s, s32, 0xC);
    AF(m, u16, 0x12) += AF(AF(arg0, u8 *, 0x58), u16, 6);
}

void func_sc02_031_8017E39C(u8 *arg0) {
    u8 *g;

    g = &D_80078E78;
    if ((func_80029178(D_sc02_031_80188C14[AF(arg0, s16, 0x70)]) & 0xFF) || (AF(arg0, s16, 0x70) == 4 && (u32) func_80029504() < 200)) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc02_031_80188AE8) != 0) {
            AF(arg0, u16, 0x5C) |= 0x10;
            SetScript(arg0, &D_sc02_031_80188950);
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            D_sc02_031_801B7828 = AF(arg0, s16, 0x88) << 16;
            D_sc02_031_801B782C = AF(arg0, s16, 0x8A) << 16;
            D_sc02_031_801B7830 = AF(arg0, s16, 0x8C) << 16;
            AF(arg0, s32, 0xCC) = func_80143970(arg0);
            AF(arg0, s16, 0xFC) = 0;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 2)++;
        }
    } else if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc02_031_80188B1C) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc02_031_8017E538(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc02_031_801889D8);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc02_031_801B7834 = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc02_031_801B783C = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc02_031_8017ED60(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc02_031_801B7834)[i] = (&D_sc02_031_801B7828)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012BB3C(arg0 + 4, &D_sc02_031_801B7834, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc02_031_8017ECEC(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc02_031_8017E73C(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = func_8012CBA4(a);
    if ((f & 0x6000) != 0x2000) {
        func_8012ADE4(a);
        func_sc02_031_8017EE3C(a);
        if (AF(a, s32, 0x1C) >= 9) {
            AF(a, s32, 0x1C) -= 8;
        }
    }
    if (f & 0x8000) {
        goto body;
    }
    if ((f & 0x6000) != 0x2000) {
body:
        if (AF(a, s16, 0x106) == 0) {
            AF(a, s16, 0x106) = 0x111;
        }
        if (AF(a, s32, 0x1C) >= 5) {
            AF(a, s32, 0x1C) -= 4;
        }
        AF(a, s16, 0x108)++;
    } else {
        AF(a, s16, 0x106) = 0;
    }
    if (--AF(a, s32, 0x1C) != 0) {
        if (!(AF(a, s32, 0x1C) & 3) && func_8012BC60(a + 4, &D_sc02_031_801B7834) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += func_8012BB3C(a + 4, &D_sc02_031_801B7834, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc02_031_8017ECEC(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc02_031_8017ECEC(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        }
        if (AF(a, s16, 0x104) != 0) {
            if (AF(a, u32, 0x94) < 11) {
                AF(a, u32, 0x94)++;
            }
            if (!(AF(a, s32, 0x1C) & 7)) {
                go = 1;
            }
        }
    } else {
        func_8012B200(a);
        SetScript(a, &D_sc02_031_80188950);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (func_8012BD14(a) < 0x24000) {
            AF(a, s16, 0x102) = 10 - AF(a, s16, 0x104);
        } else {
            AF(a, s16, 0x102) = 0;
        }
        if (AF(a, s16, 0x104) != 0) {
            AF(a, s16, 0x104) -= 4;
            if (AF(a, s16, 0x104) < 0) {
                AF(a, s16, 0x104) = 0;
            }
        }
        AF(a, s16, 2) = 1;
    }
    if (AF(a, s16, 0xFC) != 0) {
        if (func_8016F1AC() != 0) {
            p = &D_sc02_031_80188BB8;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            func_80178B70(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            func_8012B200(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc02_031_8017ECEC(a, -15, 0);
        func_sc02_031_8017ED60(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = func_8012BD14(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (func_8012BDBC(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (func_8012BDBC(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc02_031_8017ED60(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = func_8012B864(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc02_031_8017ECEC(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        func_80146A6C(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc02_031_8017EB30(u8 *arg0) {
    s32 f;

    func_80178970(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = func_8012CBA4(arg0);
        } else {
            f = func_8012CBF4(arg0);
        }
        if (f & 0x8000) {
            AF(arg0, s16, 0x108)++;
        }
        if (f & 0x2000) {
            AF(arg0, s16, 0xFE) = 1;
        } else {
            AF(arg0, s16, 0xFE) = 0;
        }
    } else {
        func_8012AD80(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        func_8002D4C8(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || func_8012E778(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        func_8012B200(arg0);
        SetScript(arg0, &D_sc02_031_80188950);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_801439C0(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc02_031_8017ECB0(u8 *arg0) {
    D_sc02_031_80188C24[AF(arg0, u16, 2)]();
}

void func_sc02_031_8017ECEC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    func_8012B0B4(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc02_031_8017ED60(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (func_8012B6D4(&D_80126B5C, &D_sc02_031_801B7828) >> 7) & 0x18;
    i = D_sc02_031_80188B50[a | ((func_8012B6D4(arg0 + 4, &D_sc02_031_801B7828) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc02_031_80188B70[i].x - 0x100;
    D_sc02_031_801B7834 = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc02_031_80188B70[i].y - 0x100;
    D_sc02_031_801B783C = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
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
extern s16 D_801152B0;
extern s16 D_801152B4;
extern s32 func_80133784();
extern s32 func_8012CEB0();

void func_sc02_031_8017EE3C(u8 *o) {
    SV8 a;
    SV8 b;
    WMtx m;
    s32 e;
    s32 v;
    s32 d;
    s16 r;

    a.x = AF(o, s16, 6) + AF(o, s16, 0x12);
    a.y = AF(o, s16, 0xA) + 8;
    a.z = AF(o, s16, 0xE) + AF(o, s16, 0x1A);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA) + 8;
    b.z = AF(o, s16, 0xE);
    if (func_80133784(1, &a, &b) & 0xC000) {
        e = ratan2(D_801152B0, D_801152B4) & 0xFFF;

        v = ratan2(AF(o, s32, 0x10), AF(o, s32, 0x18)) & 0xFFF;
        d = v - e;
        d <<= 16;
        if (d < 0) {
            v += 0x480;
            r = e - v;
        } else {
            v -= 0x480;
            r = e - v;
        }

        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        m = D_800AE620;
        RotMatrixY(r, &m);

        b.x = AF(o, s16, 0x12);
        b.y = AF(o, s16, 0x16);
        b.z = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.x = AF(o, s16, 6) + (b.x >> 1);
        b.y = AF(o, s16, 0xA) + (b.y >> 1);
        d = b.z >> 1;
        b.z = AF(o, s16, 0xE) + d;

        if (func_8012CEB0(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc02_031_8017F050(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    func_80178970(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) func_8012C658(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            func_8002D4C8(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            SetScript(arg0, (s32) &D_sc02_031_80188A40);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            func_8012B14C(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc02_031_8017F124(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    func_80178970(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (func_8012CBCC(arg0) & 0x2000)) {
        func_80146A6C(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc02_031_801889D8);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        func_8012B2CC(arg0);
        func_8012B14C(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc02_031_8017F1F4(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_80029124((s32) D_sc02_031_80188C14[AF(arg0, s16, 0x70)], 1);
        func_8012C218(arg0);
    }
}

void func_sc02_031_8017F24C(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &D_80078E78;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        func_80178B18((s32) arg0, (s32) &D_sc02_031_80188BF4);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (func_8012E778((s32) arg0, 0x9000B8) == 0)) {
        if (func_8012C658(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012C218((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc02_031_8017F344(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc02_031_8017F384(u8 *arg0) {
    D_sc02_031_80188C50[AF(arg0, u8, 0x216)]();
}

void func_sc02_031_8017F3C0(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc02_031_80188808);
    func_80171990(arg0);
}

void func_sc02_031_8017F400(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x20000);
        func_801466F0(0x16, (s32) arg0, 0, -0x80, /* extra? */ -0x10, /* extra? */ 1, /* extra? */ 0, /* extra? */ 0);
        func_80147324(0x7BC);
        func_80171990((s32) arg0);
    }
}

void func_sc02_031_8017F480(s32 arg0) {
    if (func_8014C088(arg0, 0x16) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & 0xFFFDFFFF);
        func_8014B5C4(arg0, func_8014CB58() & 0xFF, 0x80);
        func_80171990(arg0);
    }
}

void func_sc02_031_8017F4E0(void) {
}

void func_sc02_031_8017F4E8(void) {
    func_8016EE40((s32) &D_sc02_031_80188C48, 0x01000000);
}

s32 func_sc02_031_8017F510(void) {
    return D_80126D54 == (s32) &D_sc02_031_80188C48;
}

s16 func_sc02_031_8017F52C(void) {
    return D_80126B0C;
}

s32 func_sc02_031_8017F53C(s32 arg0) {
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

void func_sc02_031_8017F590(u8 *arg0) {
    func_sc02_031_8017F5B4((s32) arg0, AF(arg0, s32, 8), (s32) (arg0 + 0x10));
}

void func_sc02_031_8017F5B4(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 sxy[3];
    SV8 box[8];
    SV8 scr[8];
    s32 ls[8];
    s32 otz;
    s32 flag;
    s32 z;
    s32 sz0, sz1, sz2, sz3;
    s32 far;
    s32 i;
    u32 j;
    u32 *ot;
    s16 vz3, vy3;
    u32 count;
    u8 *base;
    s32 n;
    u32 *bb;
    s16 x0, x1, y0, y1, z0, z1;
    s16 cx, cy, cz;
    s32 col;
    s32 r, r2, fog;
    u8 *w;
    u8 *pkt;
    u32 *o;
    u32 *face;
    u32 wx, wy, wz;
#define bx0 tmn
#define bx1 tmx
#define by0 umn
#define by1 umx
    s16 bz0, bz1;
    s32 mx0, mn0, mx1, mn1, mx, mn;
    s32 v;
    u8 *p0, *p1, *p2, *p3;
    u32 hi;
    s32 type;
    s16 tmx, tmn, umx, umn;
    s32 zm;
    s32 in;
    u32 q0, q1;
    s16 vx0, vy0, vz0, vx1, vy1, vz1, vx2, vy2, vz2, vx3;
    s32 d;
    s32 c0, c1, c2, c3;
    u32 *tex;
    u32 code;
    u32 cw;
    s32 zb;

    w = &D_800AF630;
    if (AF(arg0, s32, 0) != 0) {
        return;
    }
    far = ReadGeomScreen() + AF(arg0, s32, 0x64);
    GsGetLs(arg2, ls);
    GsSetLsMatrix(ls);
    if (D_sc02_031_801B79E8 != 0) {
        cx = D_sc02_031_801B79EC;
        cy = D_sc02_031_801B79EE;
        cz = D_sc02_031_801B79F0;
        r = D_sc02_031_801B79F4;
        fog = D_sc02_031_801B7A00;
        r2 = r - 0x80;
        if (fog < 0x60) {
            {
                s32 t;
                t = (fog << 8) | 0x600000;
                col = fog | t;
            }
        } else {
            col = fog | (fog << 8) | (fog << 16);
        }
    } else {
        cx = cy = cz = 0x6000;
        r = 0x100;
        r2 = 0x80;
        fog = 0;
        col = 0;
    }
    pkt = g_PrimNext;
    x0 = cx - r;
    x1 = cx + r;
    y0 = cy - r;
    y1 = cy + r;
    z0 = cz - r;
    z1 = cz + r;
    ot = g_WorldOtTable[AF(w, u16, 0xA3D2)];
    n = AF(arg1, s32, 8);
    base = AF(arg1, u8 *, 0x10);
    bb = (u32 *)(arg1 + 0x14);
    for (i = 0; i < n; i++, bb += 5) {
        u32 *g;
        g = bb + 3;
        wx = bb[0];
        wy = g[-2];
        wz = g[-1];
        bx0 = wx;
        bx1 = wx >> 16;
        by0 = wy;
        by1 = wy >> 16;
        bz0 = wz;
        bz1 = wz >> 16;
        box[0].x = bx0; box[0].y = by0;
        box[1].x = bx1; box[1].y = by0;
        box[2].x = bx0; box[2].y = by0;
        box[3].x = bx1; box[3].y = by0;
        box[0].z = bz0; box[1].z = bz0; box[4].z = bz0; box[5].z = bz0;
        box[2].z = bz1; box[3].z = bz1; box[6].z = bz1; box[7].z = bz1;
        box[4].x = bx0; box[4].y = by1;
        box[5].x = bx1; box[5].y = by1;
        box[6].x = bx0; box[6].y = by1;
        box[7].x = bx1; box[7].y = by1;
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
        gte_stszotz(&otz);
        if (far < otz) continue;

        if (MMC(scr[0].x, scr[1].x)) { mx0 = scr[0].x; mn0 = scr[1].x; } else { mn0 = scr[0].x; mx0 = scr[1].x; }
        v = scr[2].x; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        v = scr[3].x; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        if (MMC(scr[4].x, scr[5].x)) { mx1 = scr[4].x; mn1 = scr[5].x; } else { mn1 = scr[4].x; mx1 = scr[5].x; }
        v = scr[6].x; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        v = scr[7].x; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        mn = mn0; if (mn1 < mn) mn = mn1;
        mx = mx0; if (mx < mx1) mx = mx1;
        if ((s16)mx < -0xA0 || (s16)mn > 0xA0) continue;

        if (MMC(scr[0].y, scr[1].y)) { mx0 = scr[0].y; mn0 = scr[1].y; } else { mn0 = scr[0].y; mx0 = scr[1].y; }
        v = scr[2].y; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        v = scr[3].y; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        if (MMC(scr[4].y, scr[5].y)) { mx1 = scr[4].y; mn1 = scr[5].y; } else { mn1 = scr[4].y; mx1 = scr[5].y; }
        v = scr[6].y; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        v = scr[7].y; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        mn = mn0; if (mn1 < mn) mn = mn1;
        mx = mx0; if (mx < mx1) mx = mx1;
        if ((s16)mx < -0x6E || (s16)mn > 0x6E) continue;

        face = (u32 *)g[1];
        count = g[0];
        for (j = 0; j < count; j++, face += 3) {
            hi = face[1];
            p0 = base + (hi & 0xFFFF);
            p1 = base + (hi >> 16);
            hi = face[2];
            p2 = base + (hi & 0xFFFF);
            hi = hi >> 16;
            gte_ldv3(p0, p1, p2);
            gte_rtpt();
            gte_stflg(&flag);
            if (flag & 0x7F85E000) continue;
            gte_nclip();
            type = hi & 7;
            p3 = base + (hi & 0xFFF8);
            gte_stopz(&z);
            if (z <= 0) continue;
            switch (type) {
            case 6:
            case 7: {
                gte_stsxy3c(sxy);
                gte_stsz3(&sz0, &sz1, &sz2);
                PICK3(tmx, tmn, 0, 4, 8)
                if (tmx < -0xA0 || tmn > 0xA0) break;
                PICK3(umx, umn, 2, 6, 10)
                if (umx < -0x6E || umn > 0x6E) break;
                if (sz0 > sz1) { zm = sz0; if (zm < sz2) zm = sz2; }
                else { zm = sz1; if (zm < sz2) zm = sz2; }
                z = zm;
                in = 0;
                VTX(p0, vx0, vy0, vz0)
                VTX(p1, vx1, vy1, vz1)
                VTX(p2, vx2, vy2, vz2)
                if (in) {
                    FOG(c0, vx0, vy0, vz0)
                    FOG(c1, vx1, vy1, vz1)
                    FOG(c2, vx2, vy2, vz2)
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0x2000000) | 0x34000000;
                    CWSTORE(0x04, c0)
                    CWSTORE(0x10, c1)
                    CWSTORE(0x1C, c2)
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    AF(pkt, u16, 0x24) = tex[3];
                    ADDPRIM(9)
                    pkt += 0x28;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0xFF000000) | col;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    AF(pkt, u16, 0x1C) = tex[3];
                    ADDPRIM(7)
                    pkt += 0x20;
                }
                break;
            }
            case 2:
            case 3: {
                gte_stsxy3c(sxy);
                gte_ldv0(p3);
                gte_rtps();
                PICK3(tmx, tmn, 0, 4, 8)
                PICK3(umx, umn, 2, 6, 10)
                gte_stflg(&flag);
                if (flag & 0x7F85E000) break;
                gte_stsz4(&sz0, &sz1, &sz2, &sz3);
                gte_stsxy(pkt + 0x20);
                PICK1(tmx, tmn, 0x20)
                if (tmx < -0xA0 || tmn > 0xA0) break;
                PICK1(umx, umn, 0x22)
                if (umx < -0x6E || umn > 0x6E) break;
                zb = sz2;
                if (zb < sz3) zb = sz3;
                zm = sz0;
                if (zm < sz1) zm = sz1;
                if (zm < zb) zm = zb;
                z = zm;
                in = 0;
                VTX(p0, vx0, vy0, vz0)
                VTX(p1, vx1, vy1, vz1)
                VTX(p2, vx2, vy2, vz2)
                VTX(p3, vx3, vy3, vz3)
                if (in) {
                    FOG(c0, vx0, vy0, vz0)
                    FOG(c1, vx1, vy1, vz1)
                    FOG(c2, vx2, vy2, vz2)
                    FOG(c3, vx3, vy3, vz3)
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    gte_stsxy(pkt + 0x2C);
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0x2000000) | 0x3C000000;
                    CWSTORE(0x04, c0)
                    CWSTORE(0x10, c1)
                    CWSTORE(0x1C, c2)
                    CWSTORE(0x28, c3)
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x24) = q0;
                    AF(pkt, u16, 0x30) = q0 >> 16;
                    ADDPRIM(12)
                    pkt += 0x34;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0xFF000000) | col;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x1C) = q0;
                    AF(pkt, u16, 0x24) = q0 >> 16;
                    ADDPRIM(9)
                    pkt += 0x28;
                }
                break;
            }
            }
        }
    }
    g_PrimNext = pkt;
}

void func_sc02_031_80180D50(void) {
    func_80029124(0x90, 1);
}

void func_sc02_031_80180D74(u8 *arg0) {
    D_sc02_031_80188D6C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_031_80180DB0(u8 *arg0) {
    func_sc02_031_80181224();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_031_80180DF4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_031_80180E18(u8 *arg0) {
    D_sc02_031_80188D74[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_031_80180E54(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2, arg3);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_8002D4C8(4, 0x537);
        func_8002D4C8(4, 0x538);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_031_80180EE0(u8 *arg0) {
    D_sc02_031_80188D80[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_031_80180F1C(u8 *arg0) {
    func_sc02_031_8018124C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_031_80180F5C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2, arg3);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_8002D4C8(4, 0x537);
        func_8002D4C8(4, 0x538);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_031_80180FF0(void) {
    func_800D1EBC();
}

void func_sc02_031_80181010(u8 *arg0) {
    D_sc02_031_80188D8C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_031_8018104C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        if (!(func_80029178(0x90) & 0xFF)) {
            func_800D0C48(1);
        }
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_8002D4C8(4, 0x537);
        func_8002D4C8(4, 0x538);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_031_801810F4(u8 *arg0) {
    D_sc02_031_80188D98[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_031_80181130(u8 *arg0) {
    func_sc02_031_80181274();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_031_80181170(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2, arg3);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_8002D4C8(4, 0x537);
        func_8002D4C8(4, 0x538);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_031_80181204(void) {
    func_800D1EBC();
}

void func_sc02_031_80181224(void) {
    func_8016EE40((s32) &D_sc02_031_80188DA4, 0x01000000);
}

void func_sc02_031_8018124C(void) {
    func_8016EE40((s32) &D_sc02_031_80188DB0, 0x01000000);
}

void func_sc02_031_80181274(void) {
    func_8016EE40((s32) &D_sc02_031_80188DC4, 0x01000000);
}

void func_sc02_031_8018129C(void) {
    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_031_8018133C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_031_8018133C((s32) &D_80126948);
}

void func_sc02_031_8018133C(s32 arg0) {
    D_sc02_031_80188DD0[AF(arg0, u8, 4)]();
}

extern s32 func_8012EFB8();
extern void func_8012931C();

extern u8 D_800D387C;
extern u8 D_800D3888;
extern s32 func_801290DC();
extern void func_80128EA8();

extern s32 func_80135888();
extern void *D_80126B78;
extern SV8 D_sc02_031_801AB148[];

extern u16 D_80126B5E;
extern u16 D_80126B66;
extern u16 D_80126B96[];
extern s16 D_80126B98;
extern u8 D_sc02_031_80188DD8;
extern u8 *func_80132EF4();
extern void func_80129374();
extern s32 func_sc02_031_801818A4();
extern SV8 D_sc02_031_80188E58;
extern SV8 D_sc02_031_80188E60;
extern u8 D_sc02_031_80188E68;
extern u8 D_sc02_031_80188F48;
s32 func_sc02_031_80181E88(XY *arg0);
extern void func_8012AD44();
extern s32 rand();

extern s16 D_80126940;
extern s16 D_80126942;
extern s16 D_80126944;
extern void func_sc02_031_801814E4(u8 *p, s16 *q);

void func_sc02_031_80181378(u8 *o) {
    SV8 v;
    s16 t;
    s16 x1;
    s16 x2;
    s16 z;

    if (D_80126944 < 0x800 && (u16)(D_80126940 + 0x2FF) < 0xFF) {
        t = D_80126940;
        AF(o, s16, 0x1A) = AF(o, s16, 0x22) = -0x200 - t * 4;
    }
    if (D_80126944 < 0x11A0) {
        x1 = D_80126940;
        if (x1 < -0x4C0) {
            v.x = -0x4C0;
        } else if (x1 > 0x2C0) {
            v.x = 0x2C0;
        } else {
            v.x = x1;
        }
        v.y = D_80126942;
        v.z = D_80126944;
    } else {
        x2 = D_80126940;
        if (x2 < -0x2C0) {
            v.x = -0x2C0;
        } else if (x2 > 0x2C0) {
            v.x = 0x2C0;
        } else {
            v.x = x2;
        }
        if (D_80126940 < -0x200) {
            z = D_80126944;
            if (z > 0x13D0) {
                v.z = 0x13D0;
            } else {
                v.z = z;
            }
        } else {
            v.z = D_80126944;
        }
        v.y = D_80126942;
    }
    func_sc02_031_801814E4(o, (s16 *)&v);
}

void func_sc02_031_801814E4(u8 *p, s16 *q) {
    WMtx m;
    SV4 v;
    SV4 o;
    u8 t;

    if (func_80148800(&D_80126B58) & 3) {
        t = (AF(p, u8, 5) + 1) & 1;
        AF(p, u8, 5) = t;
        AF(p, s32, 0x14) = D_sc02_031_80188DD4[t];
    }
    AF(p, s32, 8) = (s16) func_80012C6C(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) func_80012C6C(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = func_80012ABC(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = func_80012ABC(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = func_80012ABC(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = func_80012C6C(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = func_80012C6C(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = func_80012C6C(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + q[0];
    m.t[1] = AF(p, s16, 0x2A) + q[1];
    m.t[2] = AF(p, s16, 0x2C) + q[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc02_031_801816C0(u8 *o) {
    s32 cnt;
    s16 dx;
    s16 dz;
    u8 *c;

    cnt = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = cnt;
    if (cnt & 0x20) {
        return;
    }
    dx = D_80126B5E - AF(o, u16, 6);
    if (dx < 0) {
        dx = -dx;
    }
    if (dx >= 0x201) {
        return;
    }
    dz = D_80126B66 - AF(o, u16, 0xE);
    if (dz < 0) {
        dz = -dz;
    }
    if (dz >= 0x281) {
        return;
    }
    if ((cnt & 0x1F) == 0) {
        func_8002D4C8(0x5A8, (u16)((0x7F - (dx * dx + dz * dz) * 80 / 0xA4000) | 0x1000));
    }
    if (AF(o, s32, 0x1C) & 1) {
        c = func_80132EF4(o, 0x22);
        if (c != 0) {
            func_80129374(c, o);
            AF(AF(c, u8 *, 0x20), s16, 0x18) = 0x3000;
            AF(AF(c, u8 *, 0x20), s16, 0x1A) = 0x3000;
        }
    }
    if ((AF(o, s32, 0x1C) & 0x1F) >= 8) {
        if (func_sc02_031_801818A4(o, &D_sc02_031_80188DD8) != 0) {
            D_80126B98 = 0xC;
            D_80126B96[0] |= 0x4000;
        }
    }
}

void func_sc02_031_80181868(u8 *arg0) {
    D_sc02_031_80188DE8[AF(arg0, u16, 2)]();
}

extern s32 func_8012913C();
extern s32 D_sc02_031_80189370[];
extern u8 D_sc02_031_80188CCC;
extern void func_800D1724();
extern s32 D_80126B60;

extern void func_8013B598();
extern void func_8013C0F8();
extern void func_8013CB84();
extern void func_800D06E8();
extern u8 D_sc02_031_801A64C8;
extern u8 D_sc02_031_801B7AA0;
extern s32 D_sc02_031_801B7A84;
extern s32 D_sc02_031_801B7948;
extern s32 D_sc02_031_801B7950;


extern s32 func_8012DEB8();

s32 func_sc02_031_801818A4(u8 *o, u8 *p) {
    SV8 a;
    SV8 b;
    a.z = AF(p, u16, 0xC);
    b.z = AF(p, u16, 0xE);
    b.y = 0;
    a.y = 0;
    a.x = b.x = AF(p, u16, 4);
    if (func_8012DEB8(o, &a, &b) != 0) {
        return 1;
    }
    a.x = b.x = AF(p, u16, 6);
    if (func_8012DEB8(o, &a, &b) != 0) {
        return 1;
    }
    return 0;
}

extern u8 D_80078EBA;
extern u8 D_80078EB1;

extern u8 D_sc02_031_80188DF0;
s32 func_sc02_031_80181AE0(s32 arg0, s32 arg1);
extern void func_8001C2C4();

void func_sc02_031_80181938(u8 *o) {
    s32 n;
    s32 v[3];

    n = func_80029504();
    if ((n >= 0x82 && n < 0x3B6) || n >= 0x3E8 || (AF(o, s32, 0x20) = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
    } else {
        func_8001C2C4(AF(o, s32, 0x20));
        AF(o, s32, 0x1C) = AF(o, u8, 0x70);
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0x70) & 0xF00;
        func_8012B2CC(o);
        v[1] = 0;
        v[0] = 0;
        v[2] = 0x100000;
        func_8012B14C(o, v);
        func_8012AD50(o);
    }
}

void func_sc02_031_801819E8(u8 *arg0) {
    D_sc02_031_80188E00[AF(arg0, u16, 2)]();
}

void func_sc02_031_80181A24(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc02_031_80181A44(void) {
    s32 id;
    s32 r;

    if ((D_800B99DA & 3) == 0) {
        id = (u8)func_800291B4(0xCE) ? 0x537 : 0x538;
        r = (u16)func_sc02_031_80181AE0((s32)&D_sc02_031_80188DF0, 0x1500);
        if (r != 0xFFFF) {
            func_8002D4C8(id, (u16)((0x7F - r / 56) | 0x1000));
        }
    }
}

s32 func_sc02_031_80181AE0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0xFFFF;
    if (AF(var_s0, s16, 6) == 0) {
        do {
            temp_v0 = func_80013294((s32) &D_80126CB4, var_s0);
            temp_v1 = temp_v0 & 0xFFFF;
            if ((temp_v1 < (s16) arg1) && ((u32) temp_v1 < (u32) (var_s1 & 0xFFFF))) {
                var_s1 = temp_v0;
            }
            var_s0 += 8;
        } while (AF(var_s0, s16, 6) == 0);
    }
    return var_s1 & 0xFFFF;
}

void func_sc02_031_80181B78(u8 *arg0) {
    D_sc02_031_80188E08[AF(arg0, u16, 2)]();
}

void func_sc02_031_80181BB4(s32 arg0) {
    u8 *p;
    s32 i;

    if (func_sc02_031_80181EF0() != 0) {
        i = 0;
        p = &D_sc02_031_801B7840;
        do {
            func_sc02_031_80181DEC((s32) p, i);
            i += 1;
            p += 0x18;
        } while (i < 0xA);
        func_8002D4C8(0x83E, 0);
        func_8012AD50(arg0);
    }
}

void func_sc02_031_80181C2C(u8 *o) {
    u8 *p;
    s32 i;

    if (func_sc02_031_80181EF0() == 0) {
        func_8002D4C8(4, 0x83E);
        func_8012AD44(o, 0);
        return;
    }
    i = 0;
    for (; i < 0xA; i++) {
        p = &D_sc02_031_801B7840 + i * 0x18;
        if (AF(p, s32, 8) == 0) {
            if (AF(p, s32, 0x14) == 0) {
                if (AF(p, s32, 0x10) != 0) {
                    AF(p, u16, 0) += 0x10;
                    AF(p, u16, 2) += 0x20;
                    if (AF(p, s32, 0xC) == 0) {
                        AF(p, u16, 4) += 0x10;
                        AF(p, u16, 6) += 0x20;
                    } else {
                        AF(p, s32, 0xC) = AF(p, s32, 0xC) - 1;
                    }
                    AF(p, s32, 0x10) = AF(p, s32, 0x10) - 1;
                } else {
                    AF(p, u16, 4) += 0x10;
                    AF(p, u16, 6) += 0x20;
                    if (AF(p, s16, 2) < AF(p, s16, 6)) {
                        AF(p, s32, 0x14) = 2;
                        AF(p, XY, 4) = AF(p, XY, 0);
                        continue;
                    }
                }
            } else {
                AF(p, u16, 4) += rand() & 3;
                AF(p, u16, 6) -= rand() & 7;
                AF(p, s32, 0x14) = AF(p, s32, 0x14) - 1;
                if (AF(p, s32, 0x14) == 0) {
                    func_sc02_031_80181DEC((s32) p, i);
                    continue;
                }
            }
            func_sc02_031_80181E88((XY *) p);
        } else {
            AF(p, s32, 8) = AF(p, s32, 8) - 1;
        }
    }
}

void func_sc02_031_80181DEC(s32 arg0, s32 arg1) {
    s16 temp_s0_2;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_3;

    temp_s0 = rand(arg0, arg1);
    temp_s0_2 = (((temp_s0 & 0xF) << 5) + (rand() & 0x1F)) - 0x190;
    AF(arg0, s16, 4) = temp_s0_2;
    AF(arg0, s16, 0) = temp_s0_2;
    temp_v0 = ((rand() & 0xF) * 0x10) - 0x120;
    AF(arg0, s16, 6) = temp_v0;
    AF(arg0, s16, 2) = temp_v0;
    AF(arg0, s32, 0xC) = 3;
    AF(arg0, s32, 0x10) = 8;
    temp_s0_3 = rand();
    AF(arg0, s32, 8) = (s32) ((temp_s0_3 & 7) + (rand() & 7));
    AF(arg0, s32, 0x14) = 0;
}

s32 func_sc02_031_80181E88(XY *arg0) {
    L181E88 s;

    s.p = arg0[0];
    s.q = arg0[1];
    s.n = 1;
    s.col = 0x808080;
    s.z = 0;
    s.code = 0x50000000;
    return func_80016A3C(&s);
}

s32 func_sc02_031_80181EF0(void) {
    if (D_80078EBA == 4 && D_80078EB1 >= 7 && D_80078EB1 < 12) {
        return 1;
    }
    return 0;
}

void func_sc02_031_80181F20(u8 *arg0) {
    D_sc02_031_80188E50[AF(arg0, u16, 2)]();
}

s32 func_sc02_031_80181F5C(u8 *arg0, s32 *t) {
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

void func_sc02_031_80181FA4(u8 *arg0) {
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
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc02_031_80188E40;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc02_031_80181F5C(arg0, &D_sc02_031_80188E30);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc02_031_80181F5C(arg0, &D_sc02_031_80188E20);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc02_031_80181F5C(arg0, &D_sc02_031_80188E10);
    }
}

void func_sc02_031_80182070(void) {
}

void func_sc02_031_80182078(u8 *arg0) {
    D_sc02_031_80188FB8[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc02_031_801832D0(AF(arg0, s16, 0xA) - 0x380, (s32) AF(arg0, s16, 0xFE));
    }
}

void func_sc02_031_801820E0(u8 *arg0) {
    s32 temp_v0;

    if (func_80029178(0x9C) & 0xFF) {
        func_sc02_031_801832D0(-0x380, 0);
        goto block_3;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
block_3:
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    func_sc02_031_80182994((s32) arg0);
    func_8012C51C((s32) &D_sc02_031_80188ED8, (s32) arg0);
    AF(arg0, s16, 2) = 1;
}

void func_sc02_031_80182174(u8 *arg0) {
    if (AF(arg0, s16, 0xFC) != 0) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x1E;
        func_80178BF8();
        func_801746DC();
        func_80178CBC((s32) arg0, (s32) &D_sc02_031_80188F98);
        func_8013C98C();
        func_8013C9C4((s32) &D_sc02_031_80188EEC);
        func_8002D4C8(0xAC7, 0);
    }
}

void func_sc02_031_801821F4(u8 *arg0) {
    s32 pad[2];
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x3C;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 15) * 0xF)) {
            func_sc02_031_80182674((s32) arg0, (s32) &D_sc02_031_80188E70, 0xA, 0);
            func_8002D4C8(0x63C, 0);
        }
        if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 3) * 3)) {
            func_sc02_031_80182848((s32) arg0, (s32) &D_sc02_031_80188E78, 5, 1, /* extra? */ 1);
        }
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 3;
            AF(arg0, s32, 0x1C) = 0;
            func_8012B21C((s32) arg0);
            func_8002D4C8(0x63D, 0);
            func_8002D4C8(4, 0xAC7);
        }
    }
    func_sc02_031_80182618((s32) arg0);
}

void func_sc02_031_80182328(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;
    u8 unused[8];

    func_8012AD80(o);
    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    c.x = b.x + D_sc02_031_80188E60.x;
    c.y = b.y + D_sc02_031_80188E60.y;
    c.z = b.z + D_sc02_031_80188E60.z;
    func_sc02_031_80182674((s32) o, (s32) &c, 5, 0);
    if ((AF(o, s32, 0x1C) & 7) == 0) {
        func_sc02_031_80182848((s32) o, (s32) &D_sc02_031_80188E68, 5, 0, 0);
        func_sc02_031_80182848((s32) o, (s32) &D_sc02_031_80188E68, 5, 0, 1);
    }
    a.x += D_sc02_031_80188E58.x;
    a.y += D_sc02_031_80188E58.y;
    a.z += D_sc02_031_80188E58.z;
    b.x += D_sc02_031_80188E58.x;
    b.y += D_sc02_031_80188E58.y;
    b.z += D_sc02_031_80188E58.z;
    AF(o, s32, 0x1C)++;
    if (func_80133784(1, &a, &b) & 0x2000) {
        AF(o, s16, 2) = 4;
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 0x34) = 0;
        func_8013C98C();
        func_8013C9C4((s32) &D_sc02_031_80188F48);
        AF(o, s32, 0xE0) = 3;
        func_8002D4C8(0x63E, 0);
    }
    func_sc02_031_80182618((s32) o);
}

void func_sc02_031_801824E4(u8 *arg0) {
    u8 *var_s0;
    s32 var_s1;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s32, 0xE0) != 0) {
            var_s1 = 0;
            var_s0 = &D_sc02_031_80188E80;
            do {
                var_s1 += 1;
                func_sc02_031_80182AB4((s32) var_s0, 0x7FFF, rand() & 1);
                var_s0 += 8;
            } while (var_s1 < 0xB);
            AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) - 1);
        }
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        func_sc02_031_801829A8((s32) arg0);
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc02_031_801829A0((s32) arg0);
        }
        break;
    case 2:
        break;
    }
    func_sc02_031_80182618((s32) arg0);
}

void func_sc02_031_801825E0(s32 arg0) {
    if (func_800D0CE0() != 0) {
        func_8012C218(arg0);
    }
}

s32 func_sc02_031_80182618(s32 arg0) {
    if (func_80178970(arg0) == 1) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_80029124(0x9C, 1);
        func_80175414();
        return 1;
    }
    return 0;
}

void func_sc02_031_80182674(s32 a0, SV8 *p, s32 n, s32 flag) {
    SV8 v;
    s32 i;
    s32 r;
    s32 b;
    s32 r2;
    s32 b2;
    s32 t;
    u8 *q;

    v = *p;
    for (i = 0; i < n; i++) {
        r = rand() % 320;
        b = p->x;
        v.x = (rand() & 1) ? b + r : b - r;
        if (flag != 0) {
            r2 = rand() % 80;
            b2 = p->z;
            v.z = (rand() & 1) ? b2 + r2 : b2 - r2;
        }
        q = func_80132EF4(a0, 0x22);
        if (q != 0) {
            AF(q, s16, 6) = v.x;
            AF(q, s16, 0xA) = v.y;
            AF(q, s16, 0xE) = v.z;
            t = rand();
            AF(q, s16, 0x34) = ((t % 0x2000 + 0x3000) & ~0xF) | (rand() % 3);
        }
    }
}

void func_sc02_031_80182848(s32 arg0, SV *arg1, s32 n, s32 flag, s32 k) {
    SV v;
    s32 i;
    s32 r, b, c, d;

    v = *arg1;
    for (i = 0; i < n; i++) {
        b = rand() % 320;
        r = arg1->vx;
        if (rand() & 1) {
            v.vx = r + b;
        } else {
            v.vx = r - b;
        }
        if (flag != 0) {
            c = rand() % 64;
            d = arg1->vz;
            if (rand() & 1) {
                v.vz = d + c;
            } else {
                v.vz = d - c;
            }
        }
        func_sc02_031_8017BEBC(arg0, &v, (s16)k);
    }
}

void func_sc02_031_80182994(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc02_031_801829A0(s32 arg0) {
    AF(arg0, s16, 0xFE) = 0;
}

s32 func_sc02_031_801829A8(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFE) ^ 1;
    AF(arg0, u16, 0xFE) = temp_v0;
    return (s32) temp_v0;
}

void func_sc02_031_801829BC(u8 *arg0) {
    D_sc02_031_80188FE0[AF(arg0, u16, 2)]();
}

void func_sc02_031_801829F8(u8 *arg0) {
    s32 temp_v0;
    u16 x;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, u16, 0x5C) = 0xCC00;
    x = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, s32, 0x58) = (s32) &D_sc02_031_80188FD0 | 0x40000000 | 0x20000000;
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xFC) = x;
}

void func_sc02_031_80182A7C(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
    }
}

s32 func_sc02_031_80182AB4(s32 pos, s32 h0, s32 k0) {
    u8 *o;
    u8 *a;
    s16 h = h0;
    s32 k = k0;

    o = (u8 *)func_801290DC(0x34, pos);
    if (o == 0) {
        return 0;
    }
    a = AF(o, u8 *, 0x20);
    AF(a, u8 *, 0x20) = &D_800D387C;
    AF(a, u8, 0x27) = 0x9C;
    AF(a, s16, 0x1A) = h;
    AF(a, s16, 0x18) = h;
    /* MATCH-TRICK: volatile keeps the two ORs into word 4 as separate load/store pairs, as in the original */
    *(volatile s32 *)(a + 4) |= 0x50000000;
    AF(a, s32, 4) |= 0x80000000;
    func_80128EA8(a, o + 0x24, &D_800D3888);
    AF(o, s32, 0x1C) = k;
    return (s32)o;
}

void func_sc02_031_80182B64(u8 *arg0) {
    D_sc02_031_80188FE8[AF(arg0, u16, 2)]();
}

void func_sc02_031_80182BA0(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 <= 0) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_031_80182BE0(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) == 1) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_031_80182C24(u8 *arg0) {
    D_sc02_031_80189048[AF(arg0, u16, 2)]();
}

void func_sc02_031_80182C60(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_sc02_031_801830EC(arg0, (s32) &D_sc02_031_80188FF0, 0x300, 0x1C0, 0x80);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (temp_v0 == 0) {
        goto fail;
    }
    temp_v0_2 = func_sc02_031_801830EC(arg0, (s32) &D_sc02_031_80188FFC, 0x310, 0x1C0, 0x81);
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_80016714(AF(arg0, s32, 0xCC), 0x38);
fail:
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc02_031_80182CF4(u8 *arg0) {
    s32 temp_s1;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_a0;
    u16 t34;

    if (func_80029178(0x9C) & 0xFF) {
        AF(arg0, s16, 2) = 2;
        AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x80;
        AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x81;
        return;
    }
    if ((func_8012BD14((s32) arg0) < 0x401) || ((u32) (AF(arg0, u16, 0x34) - 1) < 2U)) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {
        case 0:
            if (!(func_80029178(0x8A) & 0xFF)) {
                func_801746DC();
                func_80178B18((s32) arg0, (s32) &D_sc02_031_80189028);
                AF(arg0, u16, 0x34) = 2U;
            } else {
                func_801746DC();
                func_80178B18((s32) arg0, (s32) &D_sc02_031_80189038);
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            }
            break;
        case 1:
            if (func_801789AC((s32) arg0) == 1) {
                func_80178D18((s32) arg0);
                AF(arg0, u16, 0x34) = 3U;
            }
            break;
        case 2:
            if (func_801789AC((s32) arg0) == 1) {
                func_80178D18((s32) arg0);
                AF(arg0, u16, 0x34) = 4U;
            }
            break;
        case 3:
            if (!(AF(arg0, u16, 0xFE) & 1) && (func_8014CB58() == 2)) {
                func_8014B598(2, (s32) &D_sc02_031_801888B0);
                temp_s1 = func_8014CB2C();
                if (func_8016F1AC() != 0) {
                    temp_v1_2 = AF(arg0, u16, 0xFE);
                    if (!(temp_v1_2 & 8)) {
                        AF(arg0, u16, 0xFE) = (u16) (temp_v1_2 | 8);
                        AF(arg0, s32, 0x1C) = 0;
                        func_80175454();
                        goto block_23;
                    }
                    goto block_24;
                }
block_23:
                if (AF(arg0, u16, 0xFE) & 8) {
block_24:
                    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
                }
                temp_a0 = AF(arg0, u16, 0xFE);
                if (!(temp_a0 & 4) && (AF(arg0, s32, 0x1C) == 0x5A)) {
                    AF(arg0, u16, 0xFE) = (u16) (temp_a0 | 4);
                    func_800D0CA0(0);
                }
                if ((temp_s1 & 0x8000007F) == 0x80000002) {
                    t34 = AF(arg0, u16, 0x34) + 1;
                    AF(arg0, s32, 0x1C) = 0x3C;
                    AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) | 1);
                    AF(arg0, u16, 0x34) = t34;
                }
            }
            break;
        }
        if (func_80029178(0x8A) & 0xFF) {
            if (func_8014CB58() == 2) {
                func_sc02_031_80183044((s32) arg0);
                func_sc02_031_80183098(arg0);
            } else {
                goto block_34;
            }
            goto block_35;
        }
    } else if (func_80029178(0x8A) & 0xFF) {
block_34:
        AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x80;
        func_sc02_031_80183098(arg0);
block_35:
        if ((AF(arg0, u16, 0xFE) & 1) && (func_8012BEE8((s32) arg0) != 0)) {
            func_8016F0AC();
            AF(func_8012E544(0x13B), s16, 0xFC) = 1;
            AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) & 0xFFFE);
            func_8002959C();
        }
    }
}

void func_sc02_031_80183020(void) {
    func_sc02_031_801832D0(-0x380, 0);
}

s32 func_sc02_031_80183044(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x83;
    return func_800183E0((s32) ((D_sc02_031_80189008[(D_800B99DA & 0x1F)] * 0x10) + &D_sc02_031_801ABA28));
}

void func_sc02_031_80183098(u8 *arg0) {
    AF(AF(arg0, u8 *, 0xD0), u8, 0x27) = 0x82;
    func_800183E0(D_sc02_031_801ABB28 + D_sc02_031_80189008[D_800B99DA & 0x1F] * 0x10);
}

s32 func_sc02_031_801830EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        return 0;
    }
    func_8001CB6C(temp_v0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
    AF(temp_v0, s16, 0x10) = 0xC00;
    AF(temp_v0, u8, 0x27) = (s8) arg4;
    AF(temp_v0, s16, 0x1A) = 0x2D00;
    AF(temp_v0, s16, 0x18) = 0x2D00;
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    return temp_v0;
}

void func_sc02_031_801831B4(void) {
    SV8 v;
    s32 *p;
    s32 s;
    s32 n;

    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8013B598(0, &v);
    s = D_sc02_031_801B7A84;
    switch (s) {
    case 0:
        func_8013C0F8(&D_sc02_031_801A64C8);
        p = &D_sc02_031_801B7930;
        func_sc02_031_8017F53C((s32)p);
        n = D_sc02_031_801B7A84;
        s = 1;
        D_sc02_031_801B7948 = 0;
        D_sc02_031_801B794C = 0;
        D_sc02_031_801B7950 = 0;
        *p = 0;
        D_sc02_031_801B7988 = s;
        D_sc02_031_801B7A84 = n + 1;
        break;
    case 1:
        if (D_sc02_031_801B7988 != 0) {
            func_sc02_031_8017F5B4(&D_sc02_031_801B7AA0, &D_sc02_031_801A64C8, &D_sc02_031_801B7930);
        }
        break;
    }
    func_8013CB84();
    func_800D06E8();
}

void func_sc02_031_801832D0(s32 arg0, s32 arg1) {
    D_sc02_031_801B794C = arg0 + 0x380;
    D_sc02_031_801B7930 = 0;
    D_sc02_031_801B7988 = arg1;
}

s32 func_sc02_031_801832F4(void) {
    if (D_80078EAF == 4) {
        return 0x3C;
    }
    return 0xA;
}

void func_sc02_031_80183314(u8 *arg0) {
    D_sc02_031_801893D4[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0x100) & 0x10) && (func_sc02_031_80183B90() == 1)) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) & 0xFFEF);
    }
}

void func_sc02_031_80183394(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_sc02_031_80183AC8(arg0, (s32) &D_sc02_031_80189054, 0x300, 0x100, 0xA1);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (temp_v0 == 0) {
        goto fail;
    }
    temp_v0_2 = func_sc02_031_80183AC8(arg0, (s32) &D_sc02_031_80189054, 0x310, 0x100, 0xA2);
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_80016714(AF(arg0, s32, 0xCC), 0x38);
fail:
        func_8012CAE4(arg0);
        return;
    }
    AF(AF(arg0, s32, 0xCC), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x68), u16, 0xC);
    AF(AF(arg0, s32, 0xD0), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x68), u16, 0xC);
    AF(arg0, s16, 2) = 1;
}

void func_sc02_031_80183458(u8 *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_a0;
    u16 t34;

    if ((func_8012BD14((s32) arg0) < 0x401) || ((u32) (AF(arg0, u16, 0x34) - 1) < 2U)) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {
        case 0:
            if (!(func_80029178(0x8D) & 0xFF)) {
                func_80178B18((s32) arg0, (s32) &D_sc02_031_8018939C);
                AF(arg0, u16, 0x34) = 2U;
            } else {
                func_80178B18((s32) arg0, (s32) &D_sc02_031_801893AC);
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            }
            break;
        case 1:
            if (func_801789AC((s32) arg0) == 1) {
                func_80178D18((s32) arg0);
                AF(arg0, u16, 0x34) = 3U;
            }
            break;
        case 2:
            if (func_801789AC((s32) arg0) == 1) {
                func_80178D18((s32) arg0);
                AF(arg0, u16, 0x34) = 4U;
            }
            break;
        case 3:
            if (func_8014CB58() == 5) {
                func_8014B598(5, (s32) &D_sc02_031_801888B0);
                if (func_8016F1AC() != 0) {
                    temp_v1_2 = AF(arg0, u16, 0x100);
                    if (!(temp_v1_2 & 4)) {
                        AF(arg0, u16, 0x100) = (u16) (temp_v1_2 | 4);
                        AF(arg0, s32, 0x1C) = 0;
                        func_80175454();
                        if (func_sc02_031_80181EF0() == 0) {
                            func_sc02_031_8017F4E8();
                        }
                        goto block_21;
                    }
                    goto block_22;
                }
block_21:
                if (AF(arg0, u16, 0x100) & 4) {
block_22:
                    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
                }
                temp_a0 = AF(arg0, u16, 0x100);
                if (!(temp_a0 & 2) && (AF(arg0, s32, 0x1C) == 0x5A)) {
                    AF(arg0, u16, 0x100) = (u16) (temp_a0 | 2);
                    func_800D0CA0(0);
                }
                if (!(AF(arg0, u16, 0x100) & 1) && ((func_8014CB2C() & 0x8000007F) == 0x80000005)) {
                    t34 = AF(arg0, u16, 0x34) + 1;
                    AF(arg0, s32, 0x1C) = 0x20;
                    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 1);
                    AF(arg0, u16, 0x34) = t34;
                }
            }
            break;
        }
        if (func_80029178(0x8D) & 0xFF) {
            if (func_8014CB58() == 5) {
                func_sc02_031_80183A20((s32) arg0);
                func_sc02_031_80183A74(arg0);
            } else {
                goto block_33;
            }
            goto block_34;
        }
    } else if (func_80029178(0x8D) & 0xFF) {
block_33:
        AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0xA1;
        func_sc02_031_80183A74(arg0);
block_34:
        if ((AF(arg0, u16, 0x100) & 1) && (func_8012BEE8((s32) arg0) != 0)) {
            func_8016F0AC();
            if (func_sc02_031_80181EF0() != 0) {
                D_sc02_031_801B7990 = (s16) AF(D_801151D4, s32, 0x48);
                D_sc02_031_801B7992 = (s16) AF(D_801151D4, s32, 0x4C);
                D_sc02_031_801B7994 = (s16) AF(D_801151D4, s32, 0x50);
                D_sc02_031_801B7998 = (s16) AF(D_801151D4, s32, 0x3C);
                D_sc02_031_801B799A = (s16) AF(D_801151D4, s32, 0x40);
                D_sc02_031_801B799C = (s16) AF(D_801151D4, s32, 0x44);
                AF(arg0, s16, 2) = 3;
                AF(arg0, u16, 0x34) = 0U;
                AF(arg0, s32, 0x1C) = 0x10;
                func_80178B18((s32) arg0, (s32) &D_sc02_031_801893BC);
                if (!(func_80029178(0x11D) & 0xFF)) {
                    func_8002959C();
                }
            } else {
                AF(arg0, u16, 0x34) = 3U;
                AF(arg0, u16, 0x100) = (u16) ((AF(arg0, u16, 0x100) & 0xFFF8) | 0x10);
                func_80175414();
            }
            AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0xA1;
            AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0xA2;
        }
    }
}

void func_sc02_031_80183808(void) {
}

void func_sc02_031_80183810(u8 *o) {
    u8 *q;
    SV8 a;
    SV8 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_8002D4C8(0xC2E, 0);
        }
        break;
    case 1:
        if (++AF(o, s32, 0x1C) >= 11) {
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
        } else {
            q = func_80132EF4(o, 0x6B);
            if (q != 0) {
                AF(q, s16, 0xA) -= AF(o, s32, 0x1C) << 6;
                AF(q, s16, 0x34) = D_sc02_031_80189370[AF(o, s32, 0x1C)];
                AF(q, s16, 0x36) = 10 - AF(o, s32, 0x1C);
            }
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        D_80126B60 += 0xFFD00000;
        a.x = D_80126B5E;
        a.y = ((s16 *)&D_80126B60)[1];
        a.z = D_80126B66;
        func_8012EFB8(&a, &r);
        if ((r.x < 0 ? -r.x : r.x) >= 0xC9 || (r.y < 0 ? -r.y : r.y) >= 0xA1) {
            func_800D1724(&D_sc02_031_80188CCC);
            AF(o, u16, 2) = 2;
        }
        break;
    }
    if (func_801789AC(o) == 1) {
        func_80178D18(o);
    }
}

s32 func_sc02_031_80183A20(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0xA3;
    return func_800183E0((s32) ((D_sc02_031_80189354[(D_800B99DA & 0x1F)] * 0x10) + &D_sc02_031_801B4A44));
}

void func_sc02_031_80183A74(u8 *arg0) {
    AF(AF(arg0, u8 *, 0xD0), u8, 0x27) = 0xA4;
    func_800183E0(D_sc02_031_801B4944 + D_sc02_031_80189354[D_800B99DA & 0x1F] * 0x10);
}

s32 func_sc02_031_80183AC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        return 0;
    }
    func_8001CB6C(temp_v0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
    AF(temp_v0, s16, 0x10) = 0xC00;
    AF(temp_v0, u8, 0x27) = (s8) arg4;
    AF(temp_v0, s16, 0x1A) = 0x2D00;
    AF(temp_v0, s16, 0x18) = 0x2D00;
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    return temp_v0;
}

s32 func_sc02_031_80183B90(void) {
    return func_800D0CE0() != 0;
}

static inline s32 rsgn_80183BB0(s32 t) {
    return (rand() & 1) ? t : -t;
}

void func_sc02_031_80183BB0(u8 *o) {
    u8 *q;
    UXY d;
    s32 v;

    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x200;
    if ((++AF(o, s32, 0x1C) & 7) == 0) {
        q = (u8 *)func_8012913C(0x6C);
        if (q != 0) {
            func_8012B0B4(&d, rand() % 0x1000, rand() % ((AF(AF(o, u8 *, 0x20), s16, 0x18) * 3) >> 9));
            v = d.w;
            AF(q, s16, 6) = AF(o, u16, 6) + v;
            AF(q, s16, 0xA) = AF(o, u16, 0xA);
            AF(q, s16, 0xE) = AF(o, u16, 0xE) + (v >> 16);
            AF(q, s32, 0x10) = rsgn_80183BB0((rand() % 4) << 16);
            AF(q, s32, 0x18) = rsgn_80183BB0((rand() % 4) << 16);
            AF(q, s32, 0x14) = 0xFFF40000 - ((rand() % 9) << 16);
            AF(q, u8 *, 0x2C) = o;
        }
    }
}

void func_sc02_031_80183D84(u8 *arg0) {
    D_sc02_031_80189420[AF(arg0, u16, 2)]();
}

void func_sc02_031_80183DC0(u8 *o) {
    SV8 a;
    SV8 r;
    V3 d;
    u8 *t = AF(o, u8 *, 0x2C);
    d.x = AF(o, s16, 6) - AF(t, s16, 6);
    d.y = 0;
    d.z = AF(o, s16, 0xE) - AF(t, s16, 0xE);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    if (AF(o, s16, 0x36) == 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x30);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += AF(o, u16, 0x32);
        AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x34);
        if (d.x + d.z > 0x9000) {
            AF(o, s32, 0x14) = 0x18000;
            AF(o, s32, 0x18) = 0;
            AF(o, s32, 0x10) = 0;
            AF(o, s16, 0x36)++;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x80;
        AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x80;
        if (d.x + d.z <= 0x4000) {
            s32 n = rand();
            AF(o, s16, 0x36) = 0;
            AF(o, s32, 0x14) = 0xFFF00000 - ((n % 9) << 16);
        }
    }
    func_8012931C(o);
    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    func_8012EFB8(&a, &r);
    if ((r.x < 0 ? -r.x : r.x) >= 0xB5 || (r.y < 0 ? -r.y : r.y) >= 0x8D || AF(o, s16, 0xA) >= 0x10) {
        func_801292C8(o);
    }
}

void func_sc02_031_80183FEC(u8 *arg0) {
    D_sc02_031_80189438[AF(arg0, u16, 2)]();
}

void func_sc02_031_80184028(u8 *arg0) {
    s32 temp_a0;

    func_8001CB6C(AF(arg0, s32, 0x20), (s32) &D_sc02_031_801893FC, 0x254, 0x1C0);
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x25;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0xC00;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = rand() % 0x1000;
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0x36);
}

void func_sc02_031_801840D0(u8 *arg0, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x100);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x18) = (u16) (AF(temp_v1_2, u16, 0x18) + 0x400);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x400);
    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(arg0, s16, 0x34);
    if (temp_v0_2 < (s16) AF(temp_a1, u16, 0x18)) {
        AF(temp_a1, u16, 0x1A) = (u16) temp_v0_2;
        AF(temp_a1, u16, 0x18) = (u16) temp_v0_2;
        AF(arg0, s32, 0x1C) = rand();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_031_8018418C(u8 *arg0) {
    s32 r;
    s32 p;
    s16 t;

    func_8001CB6C(AF(arg0, s32, 0x20), (s32) &D_sc02_031_8018942C, 0x234, 0x1C0);
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x26;
    AF(arg0, s16, 0x30) = (s16) (rand() & 0x1FF);
    AF(arg0, s16, 0x32) = (s16) (rand() & 0x1F);
    AF(arg0, s16, 0x34) = (s16) (rand() & 0x7F);
    r = rand();
    p = AF(arg0, s32, 0x20);
    t = (r % 0x1000) + 0x800;
    AF(p, s16, 0x1A) = t;
    AF(p, s16, 0x18) = t;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_031_80184238(u8 *arg0) {
    D_sc02_031_8018949C[AF(arg0, u16, 2)]();
}

void func_sc02_031_80184274(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_031_80189450) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc02_031_80184F9C);
        func_801788B8(arg0, (s32) &func_sc02_031_80184358);
    }
}

void func_sc02_031_801842D8(void) {
}

void func_sc02_031_801842E0(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc02_031_80189484);
    AF(arg0, s16, 2) = 3;
}

void func_sc02_031_80184318(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc02_031_80184358(u8 *arg0) {
    s32 *r;

    if (func_8012BD14(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc02_031_801843B4(u8 *arg0) {
    D_sc02_031_801AB130[AF(arg0, u16, 2)]();
}

void func_sc02_031_801843F0(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc02_031_801AAE20) != 0) {
        if (!(func_80029178(D_sc02_031_801AAE88[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc02_031_80184A9C);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_031_80184F9C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_031_801844C4(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc02_031_801844EC(void) {
}

void func_sc02_031_801844F4(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc02_031_801AB06C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_031_801AAFD0[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_031_801AB058 = 0;
            func_80029124(D_sc02_031_801AAFD0[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_031_801AB054 = 2;
        } else {
            D_sc02_031_801AB06C = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_031_801AAF4C[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_031_801AB054 = 0;
            D_sc02_031_801AB058 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc02_031_801AB080);
    } else {
        var_a1 = &D_sc02_031_801AB0EC;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc02_031_80184640(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc02_031_801AAE88[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_031_801AAE88[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc02_031_80184844() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_031_80184760(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc02_031_8018478C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_031_8018479C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_031_801847AC(u8 *arg0) {
    func_80029124(D_sc02_031_801AAE88[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_031_801847EC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_031_80184820(void) {
    return func_80174764() == 1;
}

s32 func_sc02_031_80184844(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc02_031_801AAE88[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc02_031_801848A8(u8 *arg0) {
    D_sc02_031_801AB158[AF(arg0, u16, 2)]();
}

void func_sc02_031_801848E4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_031_801AAE54) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_031_801AB818);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_031_801AB5F8);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_031_8018496C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_031_801AB608);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_031_801AB710);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc02_031_80184A2C(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_031_801AB818);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_031_801AB5F8);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc02_031_80184A9C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc02_031_801AB148[0], &a, &f);
    RotTransSV(&D_sc02_031_801AB148[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc02_031_80184B94(u8 *arg0) {
    s32 t;
    u16 id = AF(arg0, u16, 6);
    if ((u16)(id - 0x31) < 2) {
        return 1;
    }
    if (id == 0x33 || id == 0x27B) {
        return 1;
    }
    t = func_800132BC((s32) &D_80126CAC, arg0);
    if (D_801274D8 < t && t < D_801274DC) {
        return 1;
    }
    return 0;
}
