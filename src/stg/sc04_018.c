#include "common.h"
#include "gte.h"
#include "psyq.h"
extern s32 *func_sc04_018_8018CB18();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_018_80190C94[])();
extern void (*D_sc04_018_80190C9C[])();
extern void (*D_sc04_018_80190CA4[])();
extern u8 D_sc04_018_80190C00;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern u8 D_sc04_018_8018D540;
extern u8 D_sc04_018_80190C7C;
extern u8 D_sc04_018_80190C84;
extern void func_8012B260();
extern void (*D_sc04_018_80190CC4[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc04_018_80190CAC;
extern void (*D_sc04_018_80190CCC[])();
extern u8 D_sc04_018_80190CB8;
extern void (*D_sc04_018_80190CE4[])();
extern u8 D_sc04_018_80190CD4;
extern void func_8001C214();
extern void (*D_sc04_018_80190D1C[])();
extern u8 D_sc04_018_801E6F58;
extern void func_sc04_018_8017DA08();
extern void func_8013CB84();
extern void func_sc04_018_8017DC0C();
extern void func_800D06E8();
extern void func_8016EDEC();
void func_sc04_018_8017E038(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_sc04_018_8017E0C0(u8 *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void (*D_sc04_018_80190D64[])();
extern void (*D_sc04_018_80190D6C[])();
extern void (*D_sc04_018_80190D78[])();
extern void (*D_sc04_018_80190D84[])();
extern s32 D_80127050;
extern void (*D_sc04_018_80191060[])();
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern void (*D_sc04_018_80191068[])();
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
extern u8 D_801269E8;
extern void func_8012A018();
extern void func_sc04_018_8017E1F4();
extern void func_8012A094();
extern void (*D_sc04_018_80191070[])();
extern void func_sc04_018_8017E26C();
extern void func_sc04_018_8017E3AC();
extern u8 D_sc04_018_80191074;
extern void func_sc04_018_80184CB8();
s32 func_sc04_018_8017E5A0(s32 arg0);
extern void (*D_sc04_018_801912A8[])();
extern void (*D_sc04_018_801912C8[])();
extern u8 D_sc04_018_801910A0;
extern s32 func_80178CBC();
extern u8 D_sc04_018_80191288;
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc04_018_801912D8;
s32 func_sc04_018_8017F02C(s32 arg0);
extern void (*D_sc04_018_8019155C[])();
extern u8 D_sc04_018_80191304;
extern void (*D_sc04_018_801916E4[])();
extern u8 D_sc04_018_80191570;
extern void (*D_sc04_018_80191814[])();
extern void (*D_sc04_018_801918E4[])();
extern u8 D_sc04_018_80191874;
extern s32 func_sc04_018_8018034C();
extern u8 D_sc04_018_801B9DF8;
extern u8 D_sc04_018_801918F4;
extern s32 func_8012E8E0();
extern s32 func_8012E88C();
extern void func_sc04_018_80184C90();
extern s32 func_sc04_018_80184ED4();
extern u8 D_sc04_018_801B65B8;
s32 func_sc04_018_8018042C(s32 arg0);
extern void (*D_sc04_018_801919C4[])();
extern s32 func_sc04_018_80184DD0();
extern s32 D_sc04_018_80191918[];
extern s32 func_80029178();
extern void func_80029124();
extern s32 func_sc04_018_80184FA4();
extern void func_sc04_018_80185F54();
extern s32 func_sc04_018_80185BE0();
extern void func_sc04_018_801803BC();
extern s32 func_sc04_018_80180888();
extern u8 D_sc04_018_801919E0;
extern u8 D_sc04_018_801B9AA8;
extern u8 D_sc04_018_801B6614;
extern u8 D_sc04_018_801919E8;
extern u8 D_sc04_018_801B9B50;
extern void func_sc04_018_801808FC();
extern s32 func_sc04_018_80180954();
extern u8 D_sc04_018_801B6620;
s32 func_sc04_018_801809DC(s32 arg0);
extern void (*D_sc04_018_80191A80[])();
extern u8 D_sc04_018_80191A20;
extern u8 D_sc04_018_80191A58;
extern u16 D_sc04_018_801E7010;
extern u16 D_sc04_018_801E7012;
extern u8 D_sc04_018_80191AB0;
s32 func_sc04_018_801812D0(s32 arg0);
extern void (*D_sc04_018_80191B20[])();
extern u8 D_sc04_018_80191AE8;
extern s32 D_sc04_018_80191ACC[];
extern s32 func_sc04_018_801816A8();
extern u8 D_sc04_018_801B99A8;
extern u8 D_sc04_018_801B6638;
extern u8 D_sc04_018_80191B34;
s32 func_sc04_018_8018170C(s32 arg0);
extern void func_sc04_018_801817B8();
extern void (*D_sc04_018_80191BDC[])();
extern u8 D_sc04_018_80191B3C;
extern u8 D_sc04_018_80191B74;
extern u8 D_sc04_018_801B9A50;
extern s32 D_sc04_018_80191B58[];
extern s32 func_sc04_018_80184BAC();
extern void func_sc04_018_801815DC();
s32 func_sc04_018_80181648(s32 arg0);
extern u8 D_sc04_018_801B662C;
extern void func_sc04_018_80181738();
extern u8 D_sc04_018_80191C08;
extern u8 D_sc04_018_801B66CC;
extern s32 func_sc04_018_80181F70();
extern u8 D_sc04_018_80191C10;
extern void func_sc04_018_80181FE4();
extern s32 func_sc04_018_80182120();
extern u8 D_sc04_018_801B66D8;
s32 func_sc04_018_801821A8(s32 arg0);
extern void (*D_sc04_018_80191EE4[])();
extern u8 D_sc04_018_80191C48;
extern u8 D_sc04_018_80191EB0;
extern u16 D_sc04_018_801E7020;
extern u16 D_sc04_018_801E7022;
extern s32 func_sc04_018_80182B58();
extern u8 D_sc04_018_80191F14;
extern u8 D_sc04_018_801B6700;
extern u8 D_sc04_018_80191F1C;
extern u8 D_sc04_018_801C0D40;
extern void func_sc04_018_80182BCC();
extern s32 func_sc04_018_80182C24();
extern u8 D_sc04_018_801B670C;
extern void (*D_sc04_018_80192014[])();
extern u8 D_sc04_018_80191F94;
extern s32 D_sc04_018_80191F38[];
extern s32 func_sc04_018_801847BC();
extern s32 func_801788B8();
extern u8 D_sc04_018_80191F24;
extern s32 * func_sc04_018_801830F4();
s32 func_sc04_018_80182CD4(void);
extern void func_sc04_018_80182D0C();
extern u8 D_sc04_018_80192030;
s32 func_sc04_018_801831AC(s32 arg0);
extern u8 D_sc04_018_801B6730;
extern s32 func_sc04_018_801831D8();
extern u8 D_sc04_018_801B673C;
extern s32 func_sc04_018_80183248();
extern s32 func_sc04_018_801832A8();
s32 func_sc04_018_8018330C(s32 arg0);
extern void (*D_sc04_018_8019211C[])();
extern u8 D_sc04_018_80192070;
extern u8 D_sc04_018_801920C4;
extern s32 D_sc04_018_80192054[];
extern s32 D_sc04_018_801920A8[];
extern u8 func_80172710;
extern s32 func_8012BD14();
extern void func_80178BF8();
extern s32 func_sc04_018_80183938();
extern u8 D_sc04_018_801B9C50;
extern u8 D_sc04_018_80192150;
extern u8 D_sc04_018_801B67C8;
extern s32 func_sc04_018_801839A8();
extern u8 D_sc04_018_801B67DC;
s32 func_sc04_018_80183A08(s32 arg0);
extern void (*D_sc04_018_80192230[])();
extern u8 D_sc04_018_801921B8;
extern s32 D_sc04_018_80192174[];
extern u8 D_sc04_018_8019224C;
s32 func_sc04_018_80183DF4(s32 arg0);
extern void func_sc04_018_80183E20();
extern void func_sc04_018_80183FA8();
extern void (*D_sc04_018_80192414[])();
extern s32 D_sc04_018_80192270[];
extern u8 D_sc04_018_801922E4;
extern u8 D_sc04_018_8019232C;
extern u8 D_sc04_018_80192334;
extern u8 D_sc04_018_801923A4;
s32 func_sc04_018_80184884(s32 arg0);
extern s32 func_sc04_018_80184960();
extern void func_sc04_018_80184AC4();
extern u8 D_80078EB1;
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern void (*D_sc04_018_801B8720[])();
extern u8 D_sc04_018_801B8728;
extern void func_8012E8A8();
extern s32 func_80029504();
extern void func_80029514();
extern void func_8012AD80();
extern s32 func_8016F1AC();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern s32 func_8014B12C();
extern void func_8012B178();
extern s32 func_8012B030();
extern s32 func_8012BE98();
extern void (*D_sc04_018_801B8740[])();
extern void func_80016714();
extern s32 D_sc04_018_801E799C;
extern u8 D_sc04_018_801E7A88;
extern void func_8001D0E8();
extern u8 D_sc04_018_801B8738;
extern u8 D_sc04_018_801C03D8;
extern void func_sc04_018_80185904();
extern void func_sc04_018_8018589C();
extern void (*D_sc04_018_801B8A18[])();
extern void func_sc04_018_80185978();
extern void func_sc04_018_801859D8();
extern void func_8001C97C();
extern s16 D_sc04_018_801B8788[];
extern u8 D_sc04_018_801B874C[];
extern u8 D_sc04_018_801B8748[];
extern S12 D_sc04_018_801B8770;
extern u8 D_sc04_018_801B8760;
extern u8 D_sc04_018_801B877C;
extern void * func_sc04_018_80185C6C();
extern s32 func_sc04_018_80185EEC();
extern s32 func_sc04_018_8018516C();
extern void func_8012E688();
extern s32 func_8012BEE8();
extern s32 func_8012E57C();
extern void func_sc04_018_80185FB8();
extern void (*D_sc04_018_801B8A3C[])();
extern u8 D_sc04_018_801B8A2C;
extern s32 func_sc04_018_801862A8();
s32 func_sc04_018_8018625C(s32 arg0);
extern s16 D_sc04_018_801E7030;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc04_018_801B94B0[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s32 D_sc04_018_801E7700;
extern void func_800D24A0();
extern void func_sc04_018_80186570();
extern s16 D_80115126;
extern s32 D_sc04_018_801B92E4[];
extern s32 D_sc04_018_801E77E8[];
extern u8 D_sc04_018_801E7800[];
extern void (*D_sc04_018_801E04F0[])();
extern void (*D_sc04_018_801E051C[])();
extern void (*D_sc04_018_801E0524[])();
extern void (*D_sc04_018_801E0534[])();
extern void (*D_sc04_018_801E0544[])();
extern void (*D_sc04_018_801E0554[])();
extern void func_8012C588();
extern void func_sc04_018_8018A0B4();
extern u8 D_sc04_018_801E04F8;
extern void func_8012C218();
extern void func_80128ED8();
extern void func_8012B414();
extern u8 D_sc04_018_801E052C;
extern u8 D_sc04_018_801B6418;
extern u16 D_800B99DA;
extern u8 D_sc04_018_801E053C;
extern u8 D_sc04_018_801B60B0;
extern u8 D_sc04_018_801E054C;
extern u8 D_sc04_018_801B65B0;
extern void func_sc04_018_8018B564();
extern void (*D_sc04_018_801E056C[])();
extern s32 func_sc04_018_8018B5AC();
extern void func_sc04_018_8018B6E8();
extern void (*D_sc04_018_801E0580[])();
extern u8 D_80078EBA;
extern void func_sc04_018_8018B868();
extern void (*D_sc04_018_801E0594[])();
extern s32 func_sc04_018_8018B8B0();
extern void func_sc04_018_8018B9D0();
extern void (*D_sc04_018_801E05A8[])();
extern void (*D_sc04_018_801E05B4[])();
extern s8 D_sc04_018_801E7A96;
extern s32 func_sc04_018_8018BB50();
extern void (*D_sc04_018_801E05BC[])();
extern u8 D_sc04_018_801E05C4;
s32 func_sc04_018_8018BDE0(s32 arg0);
extern void (*D_sc04_018_801E0690[])();
extern s32 func_8014CB1C();
extern void func_8014B2A8();
extern void func_8002D4C8();
extern u8 D_sc04_018_801E0648;
extern u8 D_sc04_018_801E06A8;
s32 func_sc04_018_8018C24C(s32 arg0);
extern void (*D_sc04_018_801E077C[])();
extern u8 D_sc04_018_801E070C;
extern s32 func_800D0EC4();
extern s32 func_sc04_018_80184D00();
extern s32 func_sc04_018_80184E44();
extern void (*D_sc04_018_801E3AF4[])();
extern s32 func_8012C354();
extern u8 D_sc04_018_801E39E0;
extern s32 * func_sc04_018_8018C730();
extern s32 D_sc04_018_801E3AD0[];
extern void (*D_sc04_018_801E3BA4[])();
extern s32 func_8012B2CC();
s32 func_sc04_018_8018C93C(s32 arg0);
extern void (*D_sc04_018_801E3CEC[])();
extern s32 func_sc04_018_8018C8A8();
extern void func_800D0F4C();
extern s32 D_sc04_018_801E79A0;

void func_sc04_018_8017BE9C(u8 *arg0) {
    D_sc04_018_80190C94[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017BED8(u8 *arg0) {
    D_sc04_018_80190C9C[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017BF14(u8 *arg0) {
    D_sc04_018_80190CA4[AF(arg0, u16, 2)]();
}

extern s32 D_sc04_018_801D2200;
extern u8 D_sc04_018_801D7598;
extern s32 D_sc04_018_801E7018;
s32 func_sc04_018_80181960(void);
extern void func_sc04_018_80181998();
extern s32 D_sc04_018_801D6C98;
extern u8 D_sc04_018_801D7E84;
extern s32 D_sc04_018_801E7028;

extern void func_sc04_018_801819B0();

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;

extern void func_8001BFD0();
extern s32 func_800291B4();
extern s32 func_80029524();
extern void func_800D0C48();
extern s32 func_8012E544();
extern s32 func_sc04_018_80184BD0();
extern void func_sc04_018_8017E5CC();
s32 func_sc04_018_8017E79C(s32 arg0);
extern void func_sc04_018_8017E7CC();
extern u8 D_sc04_018_801C7A90;
extern s32 func_8012B200();
extern void func_8014BB0C();
extern void func_8014BDC8();
extern u8 D_sc04_018_801E396C;
extern u8 D_sc04_018_80191578;
extern u8 D_sc04_018_801B9950;
extern s32 func_sc04_018_8017F500();
extern u8 D_sc04_018_801E3978;
extern s32 func_sc04_018_8017F564();
extern s32 func_801789AC();
extern u8 D_sc04_018_8019171C;
extern u8 D_sc04_018_80190F88;
extern void func_800D1724();
extern u8 D_sc04_018_8019181C;
extern u8 * func_sc04_018_80180284();
extern u8 D_sc04_018_8019195C;
extern u8 D_sc04_018_801B65C8;
extern u8 D_sc04_018_80191904;
extern s32 * func_sc04_018_80180814();
extern u8 D_sc04_018_801E22B4;
extern u8 D_sc04_018_801E2344;
extern s32 D_sc04_018_80191A04[];
extern u8 D_sc04_018_801E2428;
extern u8 D_sc04_018_801E24BC;
extern s32 D_sc04_018_80191C2C[];
extern u8 D_sc04_018_80192160;
extern s32 * func_sc04_018_80183D80();
extern u8 D_sc04_018_801B85A8;
extern s32 D_sc04_018_801E05E0[];
extern s32 D_sc04_018_801E05F4[];

extern u8 D_sc04_018_801E3B9C;


extern void func_sc04_018_80185AB0();
void func_sc04_018_8018602C(s32 arg0, s32 arg1);

extern u8 D_sc04_018_801B6670;
extern u8 D_sc04_018_801B66C0;
s32 func_sc04_018_8018178C(s32 arg0);

extern u8 D_sc04_018_801E01F0;
extern s32 func_sc04_018_8018A168();
extern s32 *D_sc04_018_801E7980;
extern u8 D_sc04_018_801E0228;
extern u8 D_sc04_018_801E0260;
extern u8 D_sc04_018_801E0288;
extern u8 D_sc04_018_801E02C0;
extern u8 D_sc04_018_801E0338;
extern u8 D_sc04_018_801E0390;
extern u8 D_sc04_018_801E03E0;
extern u8 D_sc04_018_801E0440;
extern u8 D_sc04_018_801E0488;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

extern u8 D_sc04_018_801B87D8;
extern void *D_sc04_018_801E7AAC;

extern u8 D_80078EB0;
extern s32 D_sc04_018_801E7984;
extern void func_sc04_018_8018A1D0();
extern void func_sc04_018_8018AB78();

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
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
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
extern u8 D_80078E78;
extern u8 D_800AF630;
extern void func_8012AD44();
extern void func_sc04_018_8017DAC4();



extern s32 func_sc04_018_80185F20();


extern s32 func_8016F1C4();
extern u16 D_801202A0;

typedef struct { s16 x, y, z, pad; } FeSv;
extern u16 D_sc04_018_801E6F50;
extern void *D_801151D4;
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void func_8012F2E8();
extern s32 func_8012CB64();

extern s32 func_sc04_018_801848DC();



extern s16 D_sc04_018_801B8A44;

extern s16 D_800B9A08;

typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
extern u8 D_sc04_018_801E6D50;
extern s32 func_8012C750();
extern u8 *func_8012913C();
extern void func_80017714();
extern u8 D_80126B58;
extern s16 D_sc04_018_8018D530[];
extern s32 func_801487F4();
extern s32 func_80148800();
extern s32 func_80012A60();
extern s32 func_800D0F8C();
extern u8 D_sc04_018_801E3C2C;
extern u8 D_sc04_018_801E3C44;

void func_sc04_018_8017BF50(u8 *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = AF(o, u16 *, 0xDC);
    if (p != 0) {
        t = &D_sc04_018_801E6D50;
        s.w = 0x158;
        s.a = s.b = 0;
        s.d = 0;
        s.e = 0;
        for (i = 0; i < 16; i++) {
            v = *p;
            if (v == 0x8000) break;
            if (AF(o, s16, 0x70) != 0) {
                p++;
                s.x = v;
                s.y = *p++;
                s.z = *p++;
                if (func_8012C750(&s) == 0) break;
            } else {
                r = func_8012913C(0x11);
                if (r == 0) break;
                AF(t, s32, 0x14) = *(s16 *)p; p++;
                AF(t, s32, 0x18) = *(s16 *)p; p++;
                AF(t, s32, 0x1C) = *(s16 *)p; p++;
                AF(r, u8 *, 0x30) = t;
                t += 0x20;
            }
        }
    }
    AF(o, s16, 0x2)++;
}

void func_sc04_018_8017C094(void) {
    FeSv v;
    u8 *p;

    p = D_801151D4;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc04_018_801E6F50 = v.y;
}

void func_sc04_018_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_sc04_018_80190C00, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_sc04_018_80190C00, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_018_8017C1AC(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc04_018_801E6F50;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc04_018_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_018_80190C7C);
    SetScript(arg0, (s32) &D_sc04_018_8018D540);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc04_018_80190C84;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern s16 D_80126940[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 func_80012B04();
extern s32 func_80012ABC();
extern s32 func_80012C6C();
extern void func_8012F14C();

extern u8 D_sc04_018_801DE130;
extern u8 D_sc04_018_801DE040;
extern u8 D_sc04_018_801E3BAC[][8];
extern u8 D_sc04_018_801E3BBC[][16];

extern u8 *D_sc04_018_801B89D0[];
extern u8 D_sc04_018_801B89A0;
extern u8 D_sc04_018_801B89B8;

extern s32 D_801151C8[];
extern s32 D_801151D0;
extern s8 D_800B9A15;
extern s32 func_8014168C();
extern void func_8014BB24();
extern void func_8014B944();
extern void func_8014BD24();
extern s32 func_801621CC();
extern void func_801622C4();
extern void func_80139954();
extern s32 func_801376E8();
extern void func_8001AAA0();
extern s32 func_801399F0();
extern void func_80137B80();
extern s16 D_sc04_018_801E7708;
extern s16 D_sc04_018_801E770C;
extern s16 D_sc04_018_801E7710;
extern s16 D_sc04_018_801E7790;
extern s32 D_sc04_018_801E7704;
extern s16 D_sc04_018_801B9414[];
extern u8 D_sc04_018_801EC970;
extern u8 D_sc04_018_801B9410;
extern void func_sc04_018_801EA0E4();
extern void func_sc04_018_80189EA0();
extern void func_sc04_018_80188778();

extern u8 D_80115148[];
extern s32 func_80139A68();
extern u8 D_801117EC;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
extern E12s D_8010EDEE[];
extern E12b D_8010EDF2[];
extern s16 D_800A6586[];
extern u8 *D_sc04_018_801E76F4;
extern u8 *D_sc04_018_801E76FC;
extern s32 D_sc04_018_801B93D4[];
extern s32 D_sc04_018_801B93F0[];
extern u8 D_sc04_018_8018E2C8[];
extern s32 D_sc04_018_8018E388[];
extern s32 D_sc04_018_801E3D58[];
extern u8 D_sc04_018_801E77B8[];
extern s32 *D_sc04_018_801E7774[];
extern u8 D_sc04_018_801E8CEC;
extern u8 D_sc04_018_801ECAA8;
extern u8 D_sc04_018_801ECB18;
extern u8 D_sc04_018_801ECAEC;
extern u8 D_sc04_018_801ECAD4;
extern u8 D_sc04_018_801E9174;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
extern OtRef D_800AE7BC[];
typedef struct { u16 v; } U16R;
extern u8 D_80115138[];
extern u8 D_80115140[];
extern S8P D_80115158[];
extern u16 D_sc04_018_801B8DDA;
extern u16 D_sc04_018_801B8DEE;

extern s32 GetPadPressedDirWide();
extern s32 GetPadHeldDirWide();
extern s32 func_sc04_018_80189540();
extern void func_sc04_018_80186E24();
extern u16 D_80115122;
extern u16 D_80115120;
extern u8 D_8011514E;
extern u8 D_80115143;

typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;


extern u8 D_sc04_018_8019133C;
extern u8 D_sc04_018_80191364;
extern u8 D_sc04_018_8019138C;
extern u8 D_sc04_018_801913B4;
extern u8 D_sc04_018_80191484;
extern u8 D_sc04_018_80191494;
extern u8 D_sc04_018_8019151C;
extern u8 D_sc04_018_8019152C;
extern u8 D_sc04_018_8019153C;
extern u8 D_sc04_018_8019154C;


extern s32 D_80115134;
extern Ot14 D_800AE7B8[];
extern u8 D_sc04_018_801B8AA0;
extern u8 D_sc04_018_801B8AB4;
extern u8 D_sc04_018_801B9188;
extern u8 D_sc04_018_801B9408;
extern s16 D_sc04_018_801E7794;
extern u8 *func_80137D08();
extern u8 *func_800D27DC();
extern u8 *func_8013AB54();
extern u8 * func_sc04_018_801889B8();
extern void SetDrawMode();
extern u8 D_sc04_018_801E77B0[];
extern s32 D_sc04_018_801B8F08;
typedef struct { s32 v; u8 pad[8]; } E12w;
extern E12w D_8010EDE8[];
typedef struct { s32 v; s32 pad; } E8w;
extern E8w D_8010F468[];

extern u8 D_sc04_018_801B6810;
extern u8 D_sc04_018_801B681C;


extern u8 D_sc04_018_801B68D4;
extern u8 D_sc04_018_801B68E0;

extern void func_8012C658();
extern u8 D_sc04_018_801E0500[][4];
extern WMtx D_800AF648;
extern SV8 D_sc04_018_801E055C;
extern s32 func_80013450();
extern s32 func_8012C194();
extern void func_80128EA8();
extern void func_8012B0B4();
extern u8 D_800D387C;
extern u8 D_800D3888;

extern s32 D_sc04_018_801E79D8[];
extern E12s D_8010EDEC[];
extern E12b D_8010EDF1[];
extern s32 D_sc04_018_801E3D60[];
extern s32 D_sc04_018_801E3D74[];
extern s32 D_sc04_018_801E3EA4[];
extern void func_800D0FE0();
extern void func_800D0F0C();

extern s32 func_sc04_018_8018203C();
extern u8 D_sc04_018_801912E0;
extern s32 * func_sc04_018_8017F35C();
extern u8 D_sc04_018_8019225C;
extern s32 * func_sc04_018_8018465C();
extern u8 D_sc04_018_801E05CC;
extern u8 D_80078EAE;

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
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
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern u8 D_sc04_018_80190CEC;
typedef struct { s32 w[4]; } W16;
extern u16 D_sc04_018_80190D24[];
extern u8 D_sc04_018_80190D44;
extern u32 D_sc04_018_801E6FE8;
extern u16 D_sc04_018_801E6FEC[];
extern void func_800183E0();
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef void (*StepFn)(void);
extern u8 D_800B9A13;
extern s16 D_80115110;
void func_sc04_018_801864AC(void); extern StepFn D_8011DB24;
extern s32 D_80078E8C;
extern s32 func_8001D074();
extern void func_800233CC();
extern void func_8001CD50();
extern s32 (*D_sc04_018_801E0498[])();
extern void func_sc04_018_8018A224();
extern u8 D_sc04_018_801E04E0[];
extern void func_sc04_018_8018A2E0();
extern u8 D_sc04_018_801E02F8;
extern u8 D_sc04_018_801E0370;
extern u8 D_sc04_018_801E0470;
extern u8 D_sc04_018_801DE748;

extern s32 * func_sc04_018_80181EFC();

extern OtRef D_800A651C[];
extern u8 *AllocPrim();
extern SV8 D_sc04_018_801E00B0[][4];
extern SV8 D_sc04_018_801E0130[][4];
extern SV8 D_sc04_018_801E01D0[];
extern void func_8012E32C();
extern void func_8012E28C();

extern s16 D_sc04_018_801B86BC[];
extern s16 D_sc04_018_801B86F0[];
extern s32 D_sc04_018_801B85BC[][8];
extern s32 D_sc04_018_801E7998[];

extern void func_80024054();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

extern s32 func_800133E4();


extern void func_8012AD50();
extern void func_sc04_018_80185D70(u8 *o);

void func_sc04_018_8017C2B0(u8 *o) {
    u8 unused[8];
    u8 *m;
    s16 y;

    m = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xA) - (s16) D_80126B62 < 0x40) {
        AF(o, s16, 0x5C) = 0x800;
    } else {
        AF(o, s16, 0x5C) = 0x40;
    }
    y = D_sc04_018_801E6F50;
    if (AF(m, s16, 0x12) != y) {
        AF(m, s16, 0x12) = y;
        RotMatrixZYX(AF(o, u8 *, 0x20) + 0x10, AF(o, u8 *, 0x20) + 0x34);
        AF(m, u16, 0x2C) |= 0x11;
    }
}

void func_sc04_018_8017C338(u8 *arg0) {
    D_sc04_018_80190CC4[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017C374(u8 *a) {
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
    o = func_800D222C(a, &D_sc04_018_80190CAC, 0xFD);
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

void func_sc04_018_8017C538(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc04_018_8017C5CC(u8 *arg0) {
    D_sc04_018_80190CCC[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017C608(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc04_018_80190CB8, 0x18);
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

void func_sc04_018_8017C6AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc04_018_8017C710(u8 *obj) {
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
                if (type != 4) g.z = m + 0x20;
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
                if (type == 7) g.z = m + 0x20;
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
                if (type == 3) g.z = zb + 0x20;
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

void func_sc04_018_8017D5F0(u8 *arg0) {
    D_sc04_018_80190CE4[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017D62C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x5C) = 0x20;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_018_80190CD4 | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc04_018_8017D6A8(void) {
}

void func_sc04_018_8017D6B0(u8 *arg0) {
    D_sc04_018_80190D1C[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017D6EC(u8 *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (D_80078EB1 == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_sc04_018_801E6F58)[i];
            AF(p, s16, 0x16) = i;
            func_sc04_018_8017DA08((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        func_8012AD50((s32) o);
    }
}

void func_sc04_018_8017D77C(s32 arg0) {
    Fx24 *p;
    s32 i;
    s32 j;
    s32 n;
    s32 c;
    s16 a;
    u8 *w = (u8 *) &D_800AF630;
    u8 *g = &D_80078E78;

    if (D_80078EB1 >= 9) {
        n = 0;
        for (j = 0; j < 4; j++) {
            if (((Fx24 *) &D_sc04_018_801E6F58)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            func_8012AD44(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc04_018_801E6F58)[i];
        if (p->done == 0) {
            a = p->ang;
            if (a > 0x400 && p->t18 != 0) {
                p->t18--;
            } else {
                p->ang = a + 0xB;
            }
            if (p->ang > 0x800) {
                p->ang = 0;
            }
            c = (rsin(p->ang) / 64) & 0xFF;
            c |= (c << 16) | (c << 8);
            p->c4 = c;
            c = (rsin(p->ang) / 256) & 0xFF;
            c |= (c << 16) | (c << 8);
            p->c8 = c;
            if (!(AF(w, u16, 0xA3AA) & 1)) {
                if (++p->e >= 0x40) {
                    p->e = 0;
                }
            }
            if (p->ang == 0) {
                p->done = 1;
            } else if (p->ang >= 0x556 && p->f20 == 0) {
                p->f20 = 1;
                if (g[0x39] < 9) {
                    func_sc04_018_8017D9B8((s32) p);
                }
            }
            func_sc04_018_8017DAC4(p);
        }
    }
}

void func_sc04_018_8017D9B8(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc04_018_801E6F58;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc04_018_8017DA08((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

void func_sc04_018_8017DA08(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc04_018_80190CEC;
    AF(arg0, s32, 4) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s16, 0xC) = 0;
    AF(arg0, s16, 0xE) = 0;
    AF(arg0, s16, 0x10) = 0;
    r = rand();
    AF(arg0, s16, 0x12) = AF(arg0, s16, 0x16) * 80 + (s16)((r & 7) * 5 - 160) + (rand() & 0xF);
    AF(arg0, s16, 0x14) = -((rand() & 0xF) * 2);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s32, 0x18) = (AF(arg0, u16, 0x16) & 2) * 30;
}

void func_sc04_018_8017DAC4(u8 *o) {
    Q q;
    Q *pq;
    XY *s;
    u16 dx, dy;
    s32 i;
    pq = &q;
    s = AF(o, XY *, 0);
    dx = AF(o, u16, 0x12);
    dy = AF(o, u16, 0x14);
    pq->v[0].z = 3;
    q.a = q.b = AF(o, s32, 4);
    q.c = AF(o, s32, 8);
    q.d = 0;
    q.e = 0x50000000;
    for (i = 0; i < 3; i++) {
        pq->v[0].x = s[0].x + dx;
        pq->v[0].y = s[0].y + dy;
        pq->v[1].x = s[1].x + dx;
        pq->v[1].y = s[1].y + dy;
        pq->v[2].x = s[2].x + dx;
        pq->v[2].y = s[2].y + dy;
        pq->v[3].x = s[3].x + dx;
        pq->v[3].y = s[3].y + dy;
        s += 4;
        func_80017714(pq);
    }
}

void func_sc04_018_8017DBDC(void) {
    func_8013CB84();
    func_sc04_018_8017DC0C();
    func_800D06E8();
}

void func_sc04_018_8017DC0C(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc04_018_801E6FEC[i] = D_sc04_018_80190D24[((D_sc04_018_801E6FE8 >> 8) + i) & 0xF] | 0x8000;
    }
    func_800183E0(&D_sc04_018_80190D44);
    D_sc04_018_801E6FE8 += 0x100;
}

s32 func_sc04_018_8017DC98(u8 *arg0) {
    func_8016EDEC((s32) func_sc04_018_8017E038, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_018_8017DCE8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_018_8017DD0C(u8 *arg0) {
    func_8016EDEC((s32) func_sc04_018_8017E0C0, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}


extern s16 D_800B9A0A;
extern s32 func_800D1D94();
extern s32 func_8012CEB0();

s32 func_sc04_018_8017DD7C(u8 *o) {
    s32 t;
    s16 s;

    t = AF(o, s32, 0x28) - 1;
    AF(o, s32, 0x28) = t;
    if (t == -1) {
        func_800D1E28();
        s = D_800B9A0A;
        if (s != 0x1000 || (s16)func_800D1D94() != s) {
            func_8002D4C8(0x1C, 0);
            func_8001BFD0();
            func_8002D4C8(0x1D, 0);
            func_800D0C48(1);
        }
        AF(o, u8, 0x15)++;
    }
    return 0;
}

void func_sc04_018_8017DE2C(void) {
    func_800D1EBC();
}

s32 func_sc04_018_8017DE4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc04_018_8017DEA0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        if (!(func_800291B4(0xCE) & 0xFF) && (func_80029524() == 0)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc04_018_8017DF34(u8 *arg0) {
    D_sc04_018_80190D64[AF(arg0, u8, 0x15)]();
}

void func_sc04_018_8017DF70(u8 *arg0) {
    D_sc04_018_80190D6C[AF(arg0, u8, 0x15)]();
}

void func_sc04_018_8017DFAC(u8 *arg0) {
    D_sc04_018_80190D78[AF(arg0, u8, 0x15)]();
}

void func_sc04_018_8017DFE8(u8 *arg0) {
    D_sc04_018_80190D84[AF(arg0, u8, 0x15)]();
}

void func_sc04_018_8017E024(void) {
    D_80127050 = 1;
}

void func_sc04_018_8017E038(u8 *arg0) {
    D_sc04_018_80191060[AF(arg0, u8, 0x214)]();
}

void func_sc04_018_8017E074(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc04_018_8017E088(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc04_018_8017E0C0(u8 *arg0) {
    D_sc04_018_80191068[AF(arg0, u8, 0x214)]();
}

void func_sc04_018_8017E0FC(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc04_018_8017E110(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc04_018_8017E130(void) {
    u8 temp_s1;

    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x4B0;
    temp_s1 = D_801269E8;
    D_80126968 = 0x238;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_018_8017E1F4, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_sc04_018_8017E1F4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc04_018_8017E1F4((s32) &D_80126948);
}

void func_sc04_018_8017E1F4(s32 arg0) {
    D_sc04_018_80191070[AF(arg0, u8, 4)]();
}

void func_sc04_018_8017E230(s32 arg0) {
    s32 pad[2];
    func_sc04_018_8017E26C(arg0, arg0 + 0xA0);
    func_sc04_018_8017E3AC(arg0);
}

void func_sc04_018_8017E264(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

void func_sc04_018_8017E26C(u8 *o, u8 *a1) {
    s32 d;
    s32 s0;
    s32 s3;
    s32 b;
    s32 v;
    d = *a1;
    b = func_801487F4(&D_80126B58);
    v = func_80148800(&D_80126B58);
    AF(o, s16, 0x9C) = 0x5B;
    s0 = 0;
    if (v & 3) {
        s0 = 0x555;
        s3 = v;
        AF(o, s16, 0xA2) = 8;
    } else if (AF(o, s16, 0xA2) == 0) {
        if (b & 3) {
            s0 = 0x555;
            s3 = b;
            AF(o, s16, 0x9C) = 0x2D;
        }
    } else {
        AF(o, s16, 0xA2) = AF(o, s16, 0xA2) - 1;
    }
    if (s0 != 0) {
        if (s3 & 1) {
            d = (d - 1) & 7;
        } else if (s3 & 2) {
            d = (d + 1) & 7;
        }
        if ((s16)func_80012A60(AF(o, s16, 0x1A), D_sc04_018_8018D530[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_sc04_018_8018D530[*a1];
}

void func_sc04_018_8017E3AC(u8 *o) {
    WMtx m;
    SV8 v;
    SV8 r;
    s16 lim;
    s16 d;
    lim = AF(o, s16, 0x9C);
    d = func_80012B04(AF(o, s16, 0x1A), AF(o, s16, 0x22), 0x14);
    if (d > lim) d = lim;
    else if (d < -lim) d = -lim;
    AF(o, s16, 0x1A) = (AF(o, s16, 0x1A) + d) & 0xFFF;
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + D_80126940[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126942;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + D_80126940[0];
    m.t[1] = AF(o, s16, 0x2A) + D_80126942;
    m.t[2] = AF(o, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

s32 func_sc04_018_8017E5A0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191074);
}

void func_sc04_018_8017E5CC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191074);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
}

void func_sc04_018_8017E628(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc04_018_80185BE0(5) != 0) {
            func_sc04_018_80184ED4(o, &D_sc04_018_801B68D4, 0, 0x70);
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        func_sc04_018_80185BE0(5);
        if (func_sc04_018_80184FA4(o) != 0) {
            func_sc04_018_80184ED4(o, &D_sc04_018_801B68E0, 1, 0x70);
            AF(o, s16, 0x34) = 2;
            AF(AF(o, u8 *, 0xCC), s16, 0x108) = 0;
            AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        }
        break;
    case 2:
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc04_018_80185BE0(5) != 0) {
            AF(o, s16, 0x34) = 4;
            func_sc04_018_80184ED4(o, &D_sc04_018_801B68D4, 1, 0x70);
        }
        break;
    case 4:
        func_sc04_018_80185BE0(5);
        if (func_sc04_018_80184FA4(o) != 0) {
            func_sc04_018_8017E5A0((s32) o);
        }
        break;
    }
}

void func_sc04_018_8017E760(u8 *arg0) {
    D_sc04_018_801912A8[AF(arg0, u16, 2)]();
}

s32 func_sc04_018_8017E79C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc04_018_801B9B50);
}

extern u8 D_sc04_018_80191B44;
extern u8 D_sc04_018_80192040;
s32 *func_sc04_018_80183578(u8 *arg0);
s32 *func_sc04_018_80183604(u8 *arg0);

extern u8 D_sc04_018_801916C4;
extern u8 D_sc04_018_80191624;
extern u8 D_sc04_018_80191580;

extern u8 D_sc04_018_80191110;
extern u8 D_sc04_018_80191270;
extern u8 D_sc04_018_8019107C;
extern s32 *func_sc04_018_8017EDA4();
extern u8 D_sc04_018_80191694;
extern u8 D_sc04_018_801915EC;
extern s32 D_sc04_018_801915D4[];
extern u8 D_sc04_018_80191744;
extern void func_80178B18();
extern u8 D_sc04_018_80191AB8;
extern s32 *func_sc04_018_80181564();
extern u8 D_sc04_018_80191CD8;
extern u8 D_sc04_018_80191D30;
extern u8 D_sc04_018_80191D88;
extern u8 D_sc04_018_80191E60;
extern u8 D_sc04_018_80191E88;

void func_sc04_018_8017E7CC(arg0)
    u8 *arg0;
{
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    SetScript((s32) arg0, (s32) &D_sc04_018_801B9AA8);
    AF(arg0, s32, 0x1C) = 0x10;
}

void func_sc04_018_8017E810(u8 *arg0) {
    D_sc04_018_801912C8[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017E84C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801910A0);
}

void func_sc04_018_8017E878(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191288);
}

void func_sc04_018_8017E8A4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    }
}

void func_sc04_018_8017E8FC(void) {
    if (func_80029504() < 0x2BC) {
        AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_80191110;
    } else {
        AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_80191270;
    }
}

void func_sc04_018_8017E950(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x22B);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x34) = 1;
    }
    if (func_80029504() < 0x2BC) {
        func_80029514(0x2BC);
    }
}

void func_sc04_018_8017E99C(void) {
    func_8012C588(0x22B, 0);
}

void func_sc04_018_8017E9C0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(8, 0x14) != 0) {
        func_sc04_018_8017E5A0((s32) arg0);
    }
}

void func_sc04_018_8017EA0C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(8, 0x14) == 0) {
        AF(arg0, u16, 2) = 1U;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_80191074);
    }
    if ((func_sc04_018_80184BD0(0xA, 0, 0xA, 0x1E) != 0) || (func_sc04_018_80184BD0(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_sc04_018_8017E5CC((s32) arg0);
    }
}

void func_sc04_018_8017EAAC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191074);
    }
}

void func_sc04_018_8017EAFC(u8 *o) {
    if (func_80029504(o) < 0x2A8) {
        func_8012CAE4(o);
        return;
    }
    if (func_sc04_018_801847BC(o, &D_sc04_018_8019107C) != 0) {
        if (func_sc04_018_80184BAC(8, 0x14) != 0) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 1;
        }
        func_sc04_018_80184CB8(o, &D_sc04_018_80191074);
        AF(AF(o, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = func_801788B8(o, func_sc04_018_8017EDA4);
    }
}

void func_sc04_018_8017EBA0(s32 arg0, s32 arg1) {
    func_8012AD80(arg0, arg1);
    if (func_8012BEE8(arg0) != 0) {
        func_sc04_018_8017E79C(arg0);
    }
}

void func_sc04_018_8017EBE0(u8 *arg0) {
    if (AF(arg0, u16, 0x34) == 1) {
        func_sc04_018_8017E7CC();
    }
}

void func_sc04_018_8017EC10(u8 *o) {
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        v = func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x800, 8);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += v;
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34)++;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x800;
            func_8012B2CC(o);
            func_8012B200(o);
            func_8012B178(o, -0x40000);
            AF(o, s32, 0x1C) = 0x20;
        }
        break;
    case 1:
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34)++;
            func_8012E8A8(o);
        }
        break;
    }
}

void func_sc04_018_8017ECF4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc04_018_801C7A90);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_018_80191074);
    func_8012B2CC((s32) arg0);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_018_801B9AA8);
    func_8012B200((s32) arg0);
    func_8012B178((s32) arg0, -0x40000);
    AF(arg0, s32, 0x1C) = 0x20;
}

s32 *func_sc04_018_8017EDA4(u8 *o) {
    u8 *p;
    u16 s;

    p = AF(o, u8 *, 0x64);
    s = AF(p, u16, 2);
    switch (s) {
    case 2:
        if (func_sc04_018_801848DC(o) == 0) {
            return NULL;
        }
        if (func_sc04_018_8018625C(AF(o, s32, 0x64)) != 0) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2) = 3;
        break;
    case 5:
        if (AF(p, u16, 0x34) != 2) {
            return NULL;
        }
        if (func_8012BD14(p) >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2) = 6;
        break;
    default:
        return NULL;
    }
    func_80178BF8();
    return (s32 *) &func_80172710;
}

void func_sc04_018_8017EE6C(void) {
    s32 r;

    r = func_80029504();
    if (r < 0x276) {
        if (func_80029178(0x10C) & 0xFF) {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_80191364;
        } else if (func_80029178(0x10D) & 0xFF) {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_80191484;
        } else {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_8019133C;
        }
    } else if (r < 0x280) {
        if (func_80029178(0x10C) & 0xFF) {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_8019138C;
        } else if (func_80029178(0x10D) & 0xFF) {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_80191494;
        } else {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_801913B4;
        }
    } else if (r < 0x294) {
        if (func_800D0F8C(0x63) || func_800D0F8C(0x64) || func_800D0F8C(0x65) || func_800D0F8C(0x66)) {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_8019152C;
        } else {
            AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_8019151C;
        }
    } else if (r < 0x2E4) {
        AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_8019153C;
    } else {
        AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_018_8019154C;
    }
}

s32 func_sc04_018_8017F02C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801912D8);
}

void func_sc04_018_8017F058(u8 *arg0) {
    D_sc04_018_8019155C[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017F094(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191304);
}

s32 func_sc04_018_8017F0C0(void) {
    return D_sc04_018_801E79A0 == 1;
}

void func_sc04_018_8017F0D8(void) {
    func_80029124(0x10C, 1);
    func_80029124(0x10D, 0);
}

void func_sc04_018_8017F108(void) {
    func_80029124(0x10C, 0);
    func_80029124(0x10D, 1);
}

void func_sc04_018_8017F138(void) {
    if (D_sc04_018_801E79A0 == 1) {
        AF(D_sc04_018_801E7AAC, void *, 4) = (u8 *) D_sc04_018_801E7AAC + 8;
    } else {
        AF(D_sc04_018_801E7AAC, void *, 4) = (u8 *) D_sc04_018_801E7AAC + 0x18;
    }
}

void func_sc04_018_8017F174(void) {
    func_8014BB0C();
    func_8014BDC8();
    func_8002D4C8(0x45C, 0);
}

void func_sc04_018_8017F1A8(void) {
    func_80029514(0x280);
}

void func_sc04_018_8017F1C8(u8 *arg0) {
    s32 ok;

    ok = func_80029504() >= 0x2A8;
    if (ok == 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
    if (func_sc04_018_80184BAC(8, 0x14) != 0) {
        func_sc04_018_8017F02C((s32) arg0);
    }
}

void func_sc04_018_8017F224(u8 *arg0) {
    s32 ok;

    ok = func_80029504() >= 0x2A8;
    if (ok == 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
    if (func_sc04_018_80184BAC(8, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_801912D8);
    }
}

void func_sc04_018_8017F28C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801912D8);
    }
}

void func_sc04_018_8017F2DC(s32 arg0) {
    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_801912E0) != 0) {
        if (func_sc04_018_80184BAC(8, 0x14) != 0) {
            AF(arg0, s16, 2) = 2;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801912D8);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_018_8017F35C);
    }
}

s32 *func_sc04_018_8017F35C(u8 *o) {
    s32 p;
    s32 ok;

    if (AF(AF(o, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    p = func_8012E544(0x22A);
    if (p == 0) {
        ok = 1;
    } else {
        ok = 1;
        if (AF(p, u16, 2) == 5) {
            ok = AF(p, u16, 0x34) == 2;
        }
    }
    if (!ok) {
        return NULL;
    }
    if (func_sc04_018_801848DC(o) == 0) {
        return NULL;
    }
    if (func_sc04_018_8018625C((s32) AF(o, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(o, void *, 0x64), u16, 2) = 3;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_sc04_018_8017F418(u8 *o) {
    u8 *p = AF(o, u8 *, 0x64);

    switch (AF(p, u16, 2)) {
    case 2:
        if (func_sc04_018_801848DC(o) != 0) {
            AF(AF(o, u8 *, 0x64), u16, 2)++;
            func_80178BF8();
            return (s32 *) &func_80172710;
        }
        return NULL;
    case 5:
        if (AF(p, u16, 0x34) != 1) {
            return NULL;
        }
        if (func_8012BD14(p) >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        func_80178BF8();
        return (s32 *) &func_80172710;
    case 8:
        if (func_8012BD14(p) >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        func_80178BF8();
        return (s32 *) &func_80172710;
    case 11:
        if (AF(p, u16, 0x34) != 0) {
            return NULL;
        }
        if (func_8012BD14(p) >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        func_80178BF8();
        return (s32 *) &func_80172710;
    }
    return NULL;
}

s32 func_sc04_018_8017F500(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801E396C, 0, 0x60);
}

s32 func_sc04_018_8017F564(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191578);
    func_8012E88C(arg0);
    func_sc04_018_80184C90(arg0);
    return SetScript(arg0, (s32) &D_sc04_018_801B9950);
}

void func_sc04_018_8017F5BC(u8 *arg0) {
    D_sc04_018_801916E4[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017F5F8(u8 *o) {
    s32 r;
    s32 v;

    AF(o, s16, 2) = 4;
    r = func_80029504();
    if (r < 0x280) {
        v = 0;
    } else if (r < 0x2B2) {
        if (!(func_80029178(0x107) & 0xFF)) {
            v = 1;
        } else if (func_800D0F8C(0x63)) {
            v = 3;
        } else if (func_800D0F8C(0x64)) {
            v = 3;
        } else if (func_800D0F8C(0x65)) {
            v = 3;
        } else if (func_800D0F8C(0x66)) {
            v = 3;
        } else {
            v = 2;
        }
    } else if (r < 0x2E4) {
        v = 4;
    } else {
        v = 5;
    }
    if (v == 1) {
        func_80178CBC((s32) o, (s32) &D_sc04_018_80191694);
    } else {
        func_80178CBC((s32) o, (s32) &D_sc04_018_801915EC);
    }
}

void func_sc04_018_8017F6D8(u8 *o) {
    s32 r;
    s32 v;

    AF(o, s16, 2) = 7;
    r = func_80029504();
    if (r < 0x280) {
        v = 0;
    } else if (r < 0x2B2) {
        if (!(func_80029178(0x107) & 0xFF)) {
            v = 1;
        } else if (func_800D0F8C(0x63)) {
            v = 3;
        } else if (func_800D0F8C(0x64)) {
            v = 3;
        } else if (func_800D0F8C(0x65)) {
            v = 3;
        } else if (func_800D0F8C(0x66)) {
            v = 3;
        } else {
            v = 2;
        }
    } else if (r < 0x2E4) {
        v = 4;
    } else {
        v = 5;
    }
    if (v == 1) {
        func_80178CBC((s32) o, (s32) &D_sc04_018_801916C4);
    } else {
        func_80178CBC((s32) o, (s32) &D_sc04_018_80191624);
    }
}

void func_sc04_018_8017F7B8(u8 *o) {
    s32 r;
    s32 v;

    AF(o, s16, 2) = 0xD;
    r = func_80029504();
    if (r < 0x280) {
        v = 0;
    } else if (r < 0x2B2) {
        if (!(func_80029178(0x107) & 0xFF)) {
            v = 1;
        } else if (func_800D0F8C(0x63)) {
            v = 3;
        } else if (func_800D0F8C(0x64)) {
            v = 3;
        } else if (func_800D0F8C(0x65)) {
            v = 3;
        } else if (func_800D0F8C(0x66)) {
            v = 3;
        } else {
            v = 2;
        }
    } else if (r < 0x2E4) {
        v = 4;
    } else {
        v = 5;
    }
    if (v == 1) {
        func_80178CBC((s32) o, (s32) &D_sc04_018_801916C4);
    } else {
        func_80178CBC((s32) o, (s32) &D_sc04_018_80191624);
    }
}

void func_sc04_018_8017F898(u8 *o) {
    s32 r;
    s32 v;

    AF(o, s16, 2) = 10;
    r = func_80029504();
    if (r < 0x280) {
        v = 0;
    } else if (r < 0x2B2) {
        if (!(func_80029178(0x107) & 0xFF)) {
            v = 1;
        } else if (func_800D0F8C(0x63)) {
            v = 3;
        } else if (func_800D0F8C(0x64)) {
            v = 3;
        } else if (func_800D0F8C(0x65)) {
            v = 3;
        } else if (func_800D0F8C(0x66)) {
            v = 3;
        } else {
            v = 2;
        }
    } else if (r < 0x2E4) {
        v = 4;
    } else {
        v = 5;
    }
    if (v == 1) {
        func_80178CBC(o, &D_sc04_018_801916C4);
    } else {
        func_80178CBC(o, &D_sc04_018_80191624);
    }
}

void func_sc04_018_8017F978(void) {
    s32 k;
    s32 r;

    r = func_80029504();
    if (r < 0x280) {
        k = 0;
    } else if (r < 0x2B2) {
        if (!(func_80029178(0x107) & 0xFF)) {
            k = 1;
        } else if (func_800D0F8C(0x63)) {
            k = 3;
        } else if (func_800D0F8C(0x64)) {
            k = 3;
        } else if (func_800D0F8C(0x65)) {
            k = 3;
        } else if (func_800D0F8C(0x66)) {
            k = 3;
        } else {
            k = 2;
        }
    } else if (r < 0x2E4) {
        k = 4;
    } else {
        k = 5;
    }
    AF(D_sc04_018_801E7AAC, s32, 4) = D_sc04_018_801915D4[k];
}

void func_sc04_018_8017FA34(void) {
    func_80029124(0x107, 1);
}

void func_sc04_018_8017FA58(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BD0(0xB, 0, 0x17, 0) != 0) {
        func_sc04_018_8017F500((s32) arg0);
    }
}

void func_sc04_018_8017FAAC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BD0(0xE, 0xF, 0x17, 0) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_80191570);
    }
}

void func_sc04_018_8017FB0C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((func_sc04_018_80185BE0(0x10, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801E3978, 0, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_8017F564((s32) arg0);
        }
        break;
    }
}

void func_sc04_018_8017FBB0(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801E396C, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        if ((func_sc04_018_80185BE0(0x10, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
            AF(arg0, s16, 2) = 2;
            func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_80191570);
        }
        break;
    }
}

void func_sc04_018_8017FC58(u8 *arg0) {
    if (func_sc04_018_80184BD0(0xB, 0, 0xE, 0xF) == 0) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc04_018_801B99A8);
        func_sc04_018_80184C90((s32) arg0);
        func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801E3978, 1, 0x60);
    }
}

void func_sc04_018_8017FCD8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191570);
    }
}

void func_sc04_018_8017FD28(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0x34) = 1;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    }
}

void func_sc04_018_8017FD88(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    }
}

void func_sc04_018_8017FDE4(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_8012E8E0(arg0, (s32) &D_sc04_018_80191578);
        func_8012E88C(arg0);
        func_sc04_018_80184C90(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801B9950);
    }
}

void func_sc04_018_8017FE54(s32 arg0) {
    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_80191580) != 0) {
        if (func_sc04_018_80184BD0(0xB, 0, 0xE, 0xF) != 0) {
            AF(arg0, s16, 2) = 8;
            func_8012E8E0(arg0, (s32) &D_sc04_018_80191578);
            func_8012E88C(arg0);
            func_sc04_018_80184C90(arg0);
            SetScript(arg0, (s32) &D_sc04_018_801B9950);
        } else {
            if (func_sc04_018_80184BD0(0xE, 0xF, 0x17, 0) != 0) {
                AF(arg0, s16, 2) = 2;
            } else {
                AF(arg0, s16, 2) = 1;
            }
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191570);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_018_8017F418);
    }
}

void func_sc04_018_8017FF34(u8 *arg0) {
    D_sc04_018_80191814[AF(arg0, u16, 2)]();
}

void func_sc04_018_8017FF70(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_80126B9C & 0x08000000) {
            AF(o, u16, 0x34) = 1;
            func_80178B18(o, &D_sc04_018_80191744);
        }
        break;
    case 1:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            func_80029514(0x2B2);
            AF(o, u16, 0x34) = 2;
            func_sc04_018_80184CB8(o, &D_sc04_018_8019171C);
        }
        break;
    case 2:
        break;
    }
}

void func_sc04_018_8018001C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if ((u32) (func_80029504(arg0, arg1) - 0x2A8) >= 0xAU) {
        func_8012CAE4(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc04_018_801C7A90);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    func_8012E8E0(arg0, (s32) &D_sc04_018_8019171C);
    func_8012B2CC(arg0);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9B50);
}

void func_sc04_018_801800E0(u8 *arg0) {
    D_sc04_018_801918E4[AF(arg0, u16, 2)]();
}

s32 func_sc04_018_8018011C(void) {
    return D_sc04_018_801E79A0 == 1;
}

void func_sc04_018_80180134(void) {
    func_800D1724((s32) &D_sc04_018_80190F88);
}

void func_sc04_018_8018015C(void) {
}

void func_sc04_018_80180164(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191874);
}

void func_sc04_018_80180190(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_8019181C);
    }
}

void func_sc04_018_801801E0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if ((u32) (func_80029504(arg0, arg1) - 0xC8) >= 0x1AEU) {
        func_8012CAE4(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), 0);
    AF(arg0, s16, 2) = 1;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_8019181C);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_018_80180284);
}

u8 *func_sc04_018_80180284(u8 *arg0) {
    u8 *p;
    s32 ok;

    if (AF(AF(arg0, u8 *, 0x64), u16, 2) != 1) {
        return 0;
    }
    p = &D_80126B58;
    if (!(D_80126B9C & 0x08000000) || func_800133E4(&D_sc04_018_8019181C, p + 4) >= 0x6401
        || (s16)D_80126B5E >= 0x281) {
        ok = 0;
    } else {
        ok = (s16)D_80126B66 >= -0x380;
    }
    if (ok) {
        AF(AF(arg0, u8 *, 0x64), s16, 2) = 2;
        func_80178BF8();
        return &func_80172710;
    }
    return 0;
}

s32 func_sc04_018_8018034C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_018_801918F4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9DF8);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B65B8, 0, 0x60);
}

void func_sc04_018_801803BC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9DF8);
    func_sc04_018_80184C90(arg0);
    func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B65C8, 0, 0x40);
    func_sc04_018_80185FB8(arg0, 0xC, 1);
}

s32 func_sc04_018_8018042C(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9DF8);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B65B8, 1, 0x60);
}

void func_sc04_018_8018048C(u8 *arg0) {
    D_sc04_018_801919C4[AF(arg0, u16, 2)]();
}

void func_sc04_018_801804C8(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_8019195C);
    AF(arg0, s16, 0x34) = 0;
}

void func_sc04_018_80180504(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80191918[func_sc04_018_80184DD0(arg0)];
}

s32 func_sc04_018_80180544(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x110, arg1) & 0xFF)) {
        func_80029124(0x110, 1);
        return 1;
    }
    return 0;
}

void func_sc04_018_80180580(s32 arg0) {
    if (func_sc04_018_80184BAC(9, 0x11) != 0) {
        func_sc04_018_8018034C(arg0);
    }
}

void func_sc04_018_801805C0(s32 arg0) {
    func_sc04_018_80185F54(arg0, 0xC, 1);
    if ((func_sc04_018_80185BE0(0xC) != 0) && (func_sc04_018_80184FA4(arg0) != 0)) {
        func_sc04_018_801803BC(arg0);
    }
}

void func_sc04_018_80180618(s32 arg0) {
    if (func_sc04_018_80184FA4(arg0) != 0) {
        if (func_sc04_018_80184BAC(9, 0x11) == 0) {
            func_sc04_018_8018042C(arg0);
            return;
        }
        func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B65C8, 0, 0x40);
    }
}

void func_sc04_018_8018067C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_sc04_018_801B9DF8);
    }
}

void func_sc04_018_801806CC(s32 arg0) {
    func_sc04_018_80185F54(arg0, 0xC, 1);
    if ((func_sc04_018_80185BE0(0xC) != 0) && (func_sc04_018_80184FA4(arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801918F4);
        func_sc04_018_80185FB8(arg0, 0xC, 1);
    }
}

void func_sc04_018_80180740(s32 arg0) {
    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_80191904) != 0) {
        if (func_sc04_018_80184BAC(9, 0x11) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc04_018_801B9DF8);
            func_sc04_018_80184C90(arg0);
            func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B65C8, 0, 0x40);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801918F4);
        }
        func_sc04_018_80185FB8(arg0, 0xC, 1);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_018_80180814);
    }
}

s32 *func_sc04_018_80180814(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_sc04_018_80180888(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_018_801919E0);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B6614, 0, 0x60);
}

void func_sc04_018_801808FC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_018_801919E8);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9B50);
    func_sc04_018_80184C90(arg0);
}

s32 func_sc04_018_80180954(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_sc04_018_801919E8);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B6620, 1, 0x40);
}

s32 func_sc04_018_801809DC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801919E0);
}

extern u8 D_sc04_018_801919F0;
extern s32 *func_sc04_018_80180CC0();
extern s32 * func_sc04_018_80180D38();

void func_sc04_018_80180A08(u8 *o) {
    s32 k, r, st, n;

    if (func_sc04_018_801847BC(o, &D_sc04_018_801919F0) != 0) {
        func_sc04_018_80184CB8(o, &D_sc04_018_801919E0);
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = func_801788B8(o, func_sc04_018_80180CC0);
        AF(o, s32, 0xD8) = func_801788B8(o, func_sc04_018_80180D38);
        k = func_sc04_018_80184DD0();
        r = func_80029504();
        if (k == 2 && r < 0x276) {
            n = 10;
        } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
            st = 0;
            goto sw;
        } else {
            n = 0x10;
        }
        if (func_sc04_018_80184BAC(n, 0x16) != 0) {
            st = 1;
        } else {
            st = 2;
        }
    sw:
        switch (st) {
        case 0:
            AF(o, s16, 2) = 3;
            func_8012E8E0(o, &D_sc04_018_801919E8);
            func_8012E88C(o);
            SetScript(o, &D_sc04_018_801B9B50);
            func_sc04_018_80184C90(o);
            break;
        case 1:
            AF(o, s16, 2) = 5;
            func_sc04_018_80184CB8(o, &D_sc04_018_801919E0);
            break;
        case 2:
            AF(o, s16, 2) = 1;
            func_sc04_018_80184CB8(o, &D_sc04_018_801919E0);
            break;
        }
    }
}

void func_sc04_018_80180B6C(u8 *arg0) {
    D_sc04_018_80191A80[AF(arg0, u16, 2)]();
}

void func_sc04_018_80180BA8(u8 *arg0) {
    AF(arg0, s16, 2) = 9;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_018_801919E8);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_018_801B9B50);
    func_80178CBC((s32) arg0, func_sc04_018_8018203C((s32) arg0));
}

void func_sc04_018_80180C0C(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191A20);
}

void func_sc04_018_80180C38(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = func_sc04_018_80184DD0();
    temp_v1 = func_80029504();
    if (temp_s1 == 2) {
        if (temp_v1 < 0x276) {
            AF(arg0, s32 *, 0xE4) = &D_sc04_018_801E2344;
            return;
        }
        AF(arg0, s32 *, 0xE4) = &D_sc04_018_801E22B4;
        return;
    }
    AF(arg0, s32 *, 0xE4) = (s32 *) D_sc04_018_80191A04[temp_s1];
}

s32 *func_sc04_018_80180CC0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_sc04_018_801848DC() == 0) {
        return NULL;
    }
    if (func_sc04_018_8018625C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_sc04_018_80180D38(u8 *o) {
    u8 *p;
    u16 s;

    if (func_8012BD14(AF(o, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    p = AF(o, u8 *, 0x64);
    s = AF(p, u16, 2);
    switch (s) {
    case 3:
        AF(p, u16, 2) = 8;
        break;
    case 2:
        if (AF(p, u16, 0x34) == 1) {
            D_sc04_018_801E7010 = s;
            D_sc04_018_801E7012 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    case 4:
        if (AF(p, u16, 0x34) == 0) {
            D_sc04_018_801E7010 = s;
            D_sc04_018_801E7012 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    default:
        return NULL;
    }
    func_80178BF8();
    return (s32 *)&func_80172710;
}

void func_sc04_018_80180E28(u8 *o) {
    s32 k, r, st, n;

    AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
    k = func_sc04_018_80184DD0();
    r = func_80029504();
    if (k == 2 && r < 0x276) {
        n = 10;
    } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
        st = 0;
        goto sw;
    } else {
        n = 0x10;
    }
    if (func_sc04_018_80184BAC(n, 0x16) != 0) {
        st = 1;
    } else {
        st = 2;
    }
sw:
    switch (st) {
    case 0:
        func_sc04_018_80180888((s32) o);
        break;
    case 1:
        func_sc04_018_801809DC((s32) o);
        break;
    case 2:
        break;
    }
}

void func_sc04_018_80180EE8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_018_80185BE0(6, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B6620, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_801808FC((s32) arg0);
        }
    }
}

void func_sc04_018_80180F7C(u8 *o) {
    s32 k, r, st, n;

    k = func_sc04_018_80184DD0();
    r = func_80029504();
    if (k == 2 && r < 0x276) {
        n = 10;
    } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
        st = 0;
        goto sw;
    } else {
        n = 0x10;
    }
    if (func_sc04_018_80184BAC(n, 0x16) != 0) {
        st = 1;
    } else {
        st = 2;
    }
sw:
    switch (st) {
    case 0:
        break;
    case 1:
        func_sc04_018_80180954((s32) o);
        break;
    case 2:
        func_sc04_018_80180954((s32) o);
        break;
    }
}

void func_sc04_018_80181020(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_018_801919E8);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801B9B50);
        func_sc04_018_80184C90(arg0);
    }
}

void func_sc04_018_80181090(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B6614, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else if ((func_sc04_018_80185BE0(6, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
        func_sc04_018_801809DC((s32) arg0);
    }
}

void func_sc04_018_80181124(u8 *o) {
    s32 s;
    s32 r;
    s32 v;

    AF(AF(o, void *, 0xCC), s32, 0xB0) = 2;
    s = func_sc04_018_80184DD0();
    r = func_80029504();
    if (s == 2 && r < 0x276) {
        v = func_sc04_018_80184BAC(0xA, 0x16) != 0 ? 1 : 2;
    } else if (func_sc04_018_80184BAC(0xA, 0x10) != 0) {
        v = 0;
    } else {
        v = func_sc04_018_80184BAC(0x10, 0x16) != 0 ? 1 : 2;
    }
    switch (v) {
    case 0:
    case 2:
        AF(o, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) o, (s32) &D_sc04_018_801919E0);
        break;
    case 1:
        break;
    }
}

void func_sc04_018_801811F4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801919E0);
    }
}

void func_sc04_018_80181244(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191A58);
}

void func_sc04_018_80181270(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_sc04_018_801E7010;
        AF(arg0, u16, 0x34) = (u16) D_sc04_018_801E7012;
        SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    }
}

s32 func_sc04_018_801812D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191AB0);
}

void func_sc04_018_801812FC(u8 *arg0) {
    D_sc04_018_80191B20[AF(arg0, u16, 2)]();
}

void func_sc04_018_80181338(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191AE8);
}

void func_sc04_018_80181364(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80191ACC[func_sc04_018_80184DD0(arg0)];
}

void func_sc04_018_801813A4(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8012E544(0x2A0);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 != 0) {
        func_sc04_018_801812D0(arg0);
    }
}

void func_sc04_018_80181400(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    temp_v0 = func_8012E544(0x2A0);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_80191AB0);
    }
}

void func_sc04_018_80181474(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191AB0);
    }
}

void func_sc04_018_801814C4(u8 *o) {
    s32 p;
    s32 v;

    if (func_sc04_018_801847BC(o, &D_sc04_018_80191AB8) != 0) {
        p = func_8012E544(0x2A0);
        if (p == 0) {
            v = 0;
        } else {
            v = AF(p, u16, 2) == 3;
        }
        if (v != 0) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 1;
        }
        func_sc04_018_80184CB8(o, &D_sc04_018_80191AB0);
        AF(AF(o, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = func_801788B8(o, func_sc04_018_80181564);
    }
}

s32 *func_sc04_018_80181564(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_sc04_018_801848DC() == 0) {
        return NULL;
    }
    if (func_sc04_018_8018625C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 3;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

void func_sc04_018_801815DC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B662C, 0, 0x80);
    func_sc04_018_80181998();
}

s32 func_sc04_018_80181648(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191B3C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801C0D40);
    func_sc04_018_80184C90(arg0);
    func_sc04_018_80181998();
}

s32 func_sc04_018_801816A8(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B6638, 1, 0x80);
}

s32 func_sc04_018_8018170C(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191B34);
}

void func_sc04_018_80181738(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    func_sc04_018_801819B0();
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc04_018_8018178C(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191B34);
}

void func_sc04_018_801817B8(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
}

void func_sc04_018_80181804(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc04_018_80185BE0(0xD) != 0) {
            AF(o, u16, 0x34) = 1;
            func_sc04_018_80184ED4(o, &D_sc04_018_801B66C0, 1, 0x80);
        }
        break;
    case 1:
        func_sc04_018_80185BE0(0xD);
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, u16, 0x34) = 2;
            func_sc04_018_80184ED4(o, &D_sc04_018_801B6670, 1, 0x80);
        }
        break;
    case 2:
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, u16, 0x34) = 3;
            AF(o, s32, 0x1C) = 0x20;
        }
        break;
    case 3:
        if (func_sc04_018_80185BE0(3) != 0) {
            AF(o, u16, 0x34) = 4;
            func_sc04_018_80184ED4(o, &D_sc04_018_801B662C, 1, 0x80);
        }
        break;
    case 4:
        func_sc04_018_80185BE0(3);
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, s16, 2) = 1;
            func_sc04_018_80184CB8(o, &D_sc04_018_80191B34);
        }
        break;
    }
}

void func_sc04_018_80181924(u8 *arg0) {
    D_sc04_018_80191BDC[AF(arg0, u16, 2)]();
}

s32 func_sc04_018_80181960(void) {
    func_8001C97C((s32) &D_sc04_018_801D7598);
    D_sc04_018_801E7018 = D_sc04_018_801D2200;
    return D_sc04_018_801D2200;
}

void func_sc04_018_80181998(void) {
    D_sc04_018_801D2200 = *(s32 *)&D_sc04_018_801D7598;
}

void func_sc04_018_801819B0(void) {
    D_sc04_018_801D2200 = *(s32 *)&D_sc04_018_801E7018;
}

void func_sc04_018_801819C8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_018_80191B3C, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_018_801B9A50);
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191B74);
}

void func_sc04_018_80181A28(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80191B58[func_sc04_018_80184DD0(arg0)];
}

void func_sc04_018_80181A68(s32 arg0) {
    if (func_sc04_018_80184BAC(9, 0x12) != 0) {
        func_sc04_018_801815DC(arg0);
    }
}

void func_sc04_018_80181AA8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_018_80185BE0(3, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B6638, 0, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if (func_sc04_018_80184FA4((s32) arg0) != 0) {
        func_sc04_018_80181648((s32) arg0);
    }
}

void func_sc04_018_80181B34(s32 arg0) {
    if (func_sc04_018_80184BAC(9, 0xF) == 0) {
        func_sc04_018_801816A8(arg0);
    }
}

void func_sc04_018_80181B74(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_018_80191B3C);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801C0D40);
        func_sc04_018_80184C90(arg0);
        func_sc04_018_80181998();
    }
}

void func_sc04_018_80181BEC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B662C, 1, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_sc04_018_80185BE0(3, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
        func_sc04_018_8018170C((s32) arg0);
    }
}

void func_sc04_018_80181C78(s32 arg0) {
    if (func_sc04_018_80184BAC(0xF, 0x11) == 0) {
        func_sc04_018_80181738(arg0);
    }
}

void func_sc04_018_80181CB8(s32 arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_sc04_018_80185BE0(3) != 0) {
            AF(arg0, u16, 0x34) = 1;
            func_sc04_018_80184ED4(arg0, &D_sc04_018_801B662C, 0, 0x80);
        }
        break;
    case 1:
        func_sc04_018_80185BE0(3);
        if (func_sc04_018_80184FA4(arg0) != 0) {
            AF(arg0, u16, 0x34) = 2;
            func_sc04_018_80184ED4(arg0, &D_sc04_018_801B6670, 0, 0x80);
        }
        break;
    case 2:
        if (func_sc04_018_80184FA4(arg0) != 0) {
            AF(arg0, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc04_018_80185BE0(0xD) != 0) {
            AF(arg0, u16, 0x34) = 4;
            func_sc04_018_80184ED4(arg0, &D_sc04_018_801B66C0, 0, 0x80);
        }
        break;
    case 4:
        func_sc04_018_80185BE0(0xD);
        if (func_sc04_018_80184FA4(arg0) != 0) {
            func_sc04_018_8018178C(arg0);
        }
        break;
    }
}

void func_sc04_018_80181DC4(s32 arg0) {
    if (func_sc04_018_80184BAC(0x11, 0x12) == 0) {
        func_sc04_018_801817B8(arg0);
    }
}

void func_sc04_018_80181E04(u8 *o) {
    if (func_sc04_018_801847BC(o, &D_sc04_018_80191B44) != 0) {
        func_sc04_018_80181960();
        if (func_sc04_018_80184BAC(9, 0xF) != 0) {
            AF(o, s16, 2) = 3;
            func_8012E8E0(o, &D_sc04_018_80191B3C);
            func_8012E88C(o);
            SetScript(o, &D_sc04_018_801C0D40);
            func_sc04_018_80184C90(o);
            func_sc04_018_80181998();
        } else if (func_sc04_018_80184BAC(0xF, 0x11) != 0) {
            AF(o, s16, 2) = 7;
            func_sc04_018_80184CB8(o, &D_sc04_018_80191B34);
        } else if (func_sc04_018_80184BAC(0x11, 0x12) != 0) {
            AF(o, s16, 2) = 9;
            func_sc04_018_80184CB8(o, &D_sc04_018_80191B34);
        } else {
            AF(o, s16, 2) = 1;
            func_sc04_018_80184CB8(o, &D_sc04_018_80191B34);
        }
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = func_801788B8(o, func_sc04_018_80181EFC);
    }
}

s32 *func_sc04_018_80181EFC(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_sc04_018_80181F70(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191C08);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B66CC, 0, 0x40);
}

void func_sc04_018_80181FE4(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191C10);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9B50);
    func_sc04_018_80184C90(arg0);
}

s32 func_sc04_018_8018203C(u8 *o) {
    u8 *p;
    s32 f;

    if (AF(o, u16, 0) == 0x2A0) {
        p = (u8 *) func_8012E544(0x2A3);
        if (p == 0) {
            f = 0;
        } else {
            f = AF(p, u16, 2) == 3;
        }
    } else {
        p = (u8 *) func_8012E544(0x2A0);
        if (p == 0) {
            f = 0;
        } else {
            f = AF(p, u16, 2) == 3;
        }
    }
    if (!f) {
        if (AF(o, u16, 0) == 0x2A0) {
            return (s32) &D_sc04_018_80191E60;
        }
        return (s32) &D_sc04_018_80191E88;
    } else {
        s32 r = func_80029504();
        if (r < 0x2A8) {
            return (s32) &D_sc04_018_80191CD8;
        } else if (r < 0x2DA) {
            return (s32) &D_sc04_018_80191D30;
        }
        return (s32) &D_sc04_018_80191D88;
    }
}

s32 func_sc04_018_80182120(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191C10);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B66D8, 1, 0x40);
}

s32 func_sc04_018_801821A8(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191C08);
}

extern u8 D_sc04_018_80191C18;
extern s32 *func_sc04_018_80182544();
extern s32 * func_sc04_018_801825BC();

void func_sc04_018_801821D4(u8 *o) {
    s32 k, r, st, n, t;

    if (func_sc04_018_801847BC(o, &D_sc04_018_80191C18) != 0) {
        k = func_sc04_018_80184DD0();
        r = func_80029504();
        if (k == 2 && r < 0x276) {
            n = 10;
        } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
            st = 0;
            goto sw;
        } else {
            n = 0x10;
        }
        if (func_sc04_018_80184BAC(n, 0x15) != 0) {
            st = 1;
        } else {
            st = 2;
        }
    sw:
        switch (st) {
        case 0:
            AF(o, s16, 2) = 3;
            func_8012E8E0(o, &D_sc04_018_80191C10);
            func_8012E88C(o);
            SetScript(o, &D_sc04_018_801B9B50);
            func_sc04_018_80184C90(o);
            break;
        case 1:
            AF(o, s16, 2) = 5;
            func_sc04_018_80184CB8(o, &D_sc04_018_80191C08);
            break;
        case 2:
            AF(o, s16, 2) = 1;
            func_sc04_018_80184CB8(o, &D_sc04_018_80191C08);
            break;
        }
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        t = func_801788B8(o, func_sc04_018_80182544);
        AF(o, s32, 0xD4) = t;
        func_8012E8E0(t, &D_sc04_018_80191C08);
        AF(o, s32, 0xD8) = func_801788B8(o, func_sc04_018_801825BC);
    }
}

void func_sc04_018_8018233C(u8 *arg0) {
    D_sc04_018_80191EE4[AF(arg0, u16, 2)]();
}

extern u8 D_sc04_018_80191CD8;
extern u8 D_sc04_018_80191D30;
extern u8 D_sc04_018_80191D88;
extern u8 D_sc04_018_80191E60;
extern u8 D_sc04_018_80191E88;

void func_sc04_018_80182378(u8 *o) {
    u8 *p;
    void *a;
    s32 f;

    AF(o, s16, 2) = 9;
    func_8012E8E0(o, &D_sc04_018_80191C10);
    func_8012E88C(o);
    SetScript(o, &D_sc04_018_801B9B50);
    if (AF(o, u16, 0) == 0x2A0) {
        p = (u8 *) func_8012E544(0x2A3);
        if (p == 0) {
            f = 0;
        } else {
            f = AF(p, u16, 2) == 3;
        }
    } else {
        p = (u8 *) func_8012E544(0x2A0);
        if (p == 0) {
            f = 0;
        } else {
            f = AF(p, u16, 2) == 3;
        }
    }
    if (!f) {
        if (AF(o, u16, 0) == 0x2A0) {
            a = &D_sc04_018_80191E60;
        } else {
            a = &D_sc04_018_80191E88;
        }
    } else {
        s32 r = func_80029504();
        if (r < 0x2A8) {
            a = &D_sc04_018_80191CD8;
        } else if (r < 0x2DA) {
            a = &D_sc04_018_80191D30;
        } else {
            a = &D_sc04_018_80191D88;
        }
    }
    func_80178CBC(o, a);
}

void func_sc04_018_80182490(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191C48);
}

void func_sc04_018_801824BC(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = func_sc04_018_80184DD0();
    temp_v1 = func_80029504();
    if (temp_s1 == 2) {
        if (temp_v1 < 0x276) {
            AF(arg0, s32 *, 0xE4) = &D_sc04_018_801E24BC;
            return;
        }
        AF(arg0, s32 *, 0xE4) = &D_sc04_018_801E2428;
        return;
    }
    AF(arg0, s32 *, 0xE4) = (s32 *) D_sc04_018_80191C2C[temp_s1];
}

s32 *func_sc04_018_80182544(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_sc04_018_801848DC() == 0) {
        return NULL;
    }
    if (func_sc04_018_8018625C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_sc04_018_801825BC(u8 *o) {
    u8 *p;
    u16 s;

    if (func_8012BD14(AF(o, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    p = AF(o, u8 *, 0x64);
    s = AF(p, u16, 2);
    switch (s) {
    case 3:
        AF(p, u16, 2) = 8;
        break;
    case 2:
        if (AF(p, u16, 0x34) == 1) {
            D_sc04_018_801E7020 = s;
            D_sc04_018_801E7022 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    case 4:
        if (AF(p, u16, 0x34) == 0) {
            D_sc04_018_801E7020 = s;
            D_sc04_018_801E7022 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    default:
        return NULL;
    }
    func_80178BF8();
    return (s32 *)&func_80172710;
}

void func_sc04_018_801826AC(u8 *o) {
    s32 k, r, st, n;

    AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
    k = func_sc04_018_80184DD0();
    r = func_80029504();
    if (k == 2 && r < 0x276) {
        n = 10;
    } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
        st = 0;
        goto sw;
    } else {
        n = 0x10;
    }
    if (func_sc04_018_80184BAC(n, 0x15) != 0) {
        st = 1;
    } else {
        st = 2;
    }
sw:
    switch (st) {
    case 0:
        func_sc04_018_80181F70((s32) o);
        break;
    case 1:
        func_sc04_018_801821A8((s32) o);
        break;
    case 2:
        break;
    }
}

void func_sc04_018_8018276C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_018_80185BE0(3, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B66D8, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_80181FE4((s32) arg0);
        }
    }
}

void func_sc04_018_80182800(u8 *o) {
    s32 k, r, st, n;

    AF(AF(o, void *, 0xCC), s32, 0xB0) = 2;
    k = func_sc04_018_80184DD0();
    r = func_80029504();
    if (k == 2 && r < 0x276) {
        n = 10;
    } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
        st = 0;
        goto sw;
    } else {
        n = 0x10;
    }
    if (func_sc04_018_80184BAC(n, 0x15) != 0) {
        st = 1;
    } else {
        st = 2;
    }
sw:
    switch (st) {
    case 0:
        break;
    case 1:
        func_sc04_018_80182120(o);
        break;
    case 2:
        func_sc04_018_80182120(o);
        break;
    }
}

void func_sc04_018_801828B0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_018_80191C10);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801B9B50);
        func_sc04_018_80184C90(arg0);
    }
}

void func_sc04_018_80182920(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B66CC, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_sc04_018_80185BE0(3, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
        func_sc04_018_801821A8((s32) arg0);
    }
}

void func_sc04_018_801829AC(u8 *o) {
    s32 k, r, st, n;

    AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
    k = func_sc04_018_80184DD0();
    r = func_80029504();
    if (k == 2 && r < 0x276) {
        n = 10;
    } else if (func_sc04_018_80184BAC(10, 0x10) != 0) {
        st = 0;
        goto sw;
    } else {
        n = 0x10;
    }
    if (func_sc04_018_80184BAC(n, 0x15) != 0) {
        st = 1;
    } else {
        st = 2;
    }
sw:
    switch (st) {
    case 1:
        break;
    case 0:
    case 2:
        AF(o, s16, 2) = 1;
        func_sc04_018_80184CB8(o, &D_sc04_018_80191C08);
        break;
    }
}

void func_sc04_018_80182A7C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191C08);
    }
}

void func_sc04_018_80182ACC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191EB0);
}

void func_sc04_018_80182AF8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_sc04_018_801E7020;
        AF(arg0, u16, 0x34) = (u16) D_sc04_018_801E7022;
        SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    }
}

s32 func_sc04_018_80182B58(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191F14);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B6700, 0, 0x60);
}

void func_sc04_018_80182BCC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191F1C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801C0D40);
    func_sc04_018_80184C90(arg0);
}

s32 func_sc04_018_80182C24(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80191F1C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B670C, 1, 0x60);
}

void func_sc04_018_80182C98(u8 *arg0) {
    D_sc04_018_80192014[AF(arg0, u16, 2)]();
}

s32 func_sc04_018_80182CD4(void) {
    func_8001C97C((s32) &D_sc04_018_801D7E84);
    D_sc04_018_801E7028 = D_sc04_018_801D6C98;
    return D_sc04_018_801D6C98;
}

void func_sc04_018_80182D0C(void) {
    D_sc04_018_801D6C98 = *(s32 *)&D_sc04_018_801D7E84;
}

void func_sc04_018_80182D24(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_018_80191F1C, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_018_801B9A50);
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80191F94);
}

void func_sc04_018_80182D84(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80191F38[func_sc04_018_80184DD0(arg0)];
}

s32 func_sc04_018_80182DC4(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x113, arg1) & 0xFF)) {
        func_80029124(0x113, 1);
        return 1;
    }
    return 0;
}

void func_sc04_018_80182E00(s32 arg0) {
    if (func_sc04_018_80184BAC(7, 0xE) != 0) {
        func_sc04_018_80182B58(arg0);
    }
}

void func_sc04_018_80182E40(u8 *arg0) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_018_80185BE0(2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
            AF(arg0, u16, 0x34) = 1U;
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B670C, 0, 0x60);
            AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        }
    } else if (func_sc04_018_80184FA4((s32) arg0) != 0) {
        func_sc04_018_80182BCC((s32) arg0);
    }
}

void func_sc04_018_80182ED8(s32 arg0) {
    if (func_sc04_018_80184BAC(7, 0xE) == 0) {
        func_sc04_018_80182C24(arg0);
    }
}

void func_sc04_018_80182F18(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_018_80191F1C);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801C0D40);
        func_sc04_018_80184C90(arg0);
    }
}

void func_sc04_018_80182F88(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_018_80184FA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            func_sc04_018_80184ED4((s32) arg0, (s32) &D_sc04_018_801B6700, 1, 0x60);
        }
    } else if ((func_sc04_018_80185BE0(2, arg1, arg2) != 0) && (func_sc04_018_80184FA4((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_80191F14);
    }
}

void func_sc04_018_80183024(s32 arg0) {
    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_80191F24) != 0) {
        func_sc04_018_80182CD4();
        func_sc04_018_80182D0C();
        if (func_sc04_018_80184BAC(7, 0xE) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_sc04_018_80191F1C);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc04_018_801C0D40);
            func_sc04_018_80184C90(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80191F14);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_018_801830F4);
    }
}

s32 *func_sc04_018_801830F4(u8 *o) {
    s32 d;
    s32 p;

    if (AF(AF(o, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    d = func_8012BD14(AF(o, void *, 0x64));
    if (d >= 0x4001) {
        return NULL;
    }
    p = func_8012E544(0x227);
    if (p != 0 && AF(p, u16, 2) == 8 && func_8012BD14(p) < d) {
        return NULL;
    }
    AF(AF(o, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_sc04_018_801831AC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80192030);
}

s32 func_sc04_018_801831D8(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80192030);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B6730, 0, 0x40);
}

s32 func_sc04_018_80183248(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B673C, 0, 0x40);
}

s32 func_sc04_018_801832A8(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B6730, 1, 0x40);
}

s32 func_sc04_018_8018330C(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80192030);
}

void func_sc04_018_80183338(u8 *o) {
    if (func_sc04_018_801847BC(o, &D_sc04_018_80192040) != 0) {
        if (func_sc04_018_80184BAC(7, 10) != 0) {
            AF(o, s16, 2) = 2;
            func_sc04_018_80184CB8(o, &D_sc04_018_80192030);
        } else if (func_sc04_018_80184BAC(10, 12) != 0) {
            AF(o, s16, 2) = 6;
            func_8012E88C(o);
            SetScript(o, &D_sc04_018_801B9AA8);
            func_sc04_018_80184C90(o);
            func_sc04_018_80184ED4(o, &D_sc04_018_801B673C, 0, 0x40);
        } else if (func_sc04_018_80184BAC(12, 0x14) != 0) {
            AF(o, s16, 2) = 8;
            func_sc04_018_80184CB8(o, &D_sc04_018_80192030);
        } else {
            AF(o, s16, 2) = 1;
            func_sc04_018_80184CB8(o, &D_sc04_018_80192030);
        }
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = func_801788B8(o, func_sc04_018_80183578);
        AF(o, s32, 0xD8) = func_801788B8(o, func_sc04_018_80183604);
    }
}

void func_sc04_018_80183438(u8 *arg0) {
    D_sc04_018_8019211C[AF(arg0, u16, 2)]();
}

void func_sc04_018_80183474(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80192070);
}

void func_sc04_018_801834A0(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80192070);
}

void func_sc04_018_801834CC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801920C4);
}

void func_sc04_018_801834F8(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80192054[func_sc04_018_80184DD0(arg0)];
}

void func_sc04_018_80183538(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_801920A8[func_sc04_018_80184DD0(arg0)];
}

s32 *func_sc04_018_80183578(u8 *arg0) {
    u16 v;

    v = AF(AF(arg0, void *, 0x64), u16, 2);
    if (v != 2 && v != 8) {
        return NULL;
    }
    if (func_sc04_018_801848DC(arg0) == 0) {
        return NULL;
    }
    if (func_sc04_018_8018625C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_sc04_018_80183604(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x64);
    if (AF(temp_a0, u16, 2) == 6) {
        if (func_8012BD14((s32) temp_a0) < 0x2401) {
            AF(AF(arg0, void *, 0x64), u16, 2) = 0xBU;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc04_018_80183674(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(7, 0x14) != 0) {
        func_sc04_018_801831AC((s32) arg0);
    }
}

void func_sc04_018_801836C0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(7, 0xA) == 0) {
        func_sc04_018_801831D8((s32) arg0);
    }
}

void func_sc04_018_8018370C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80192030);
    }
}

void func_sc04_018_8018375C(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_sc04_018_80185BE0(2, arg1, arg2) != 0) && (func_sc04_018_80184FA4(arg0) != 0)) {
        func_sc04_018_80183248(arg0);
    }
}

void func_sc04_018_801837A8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184FA4((s32) arg0) != 0) {
        func_sc04_018_801832A8((s32) arg0);
    }
}

void func_sc04_018_801837EC(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_sc04_018_80185BE0(2, arg1, arg2) != 0) && (func_sc04_018_80184FA4(arg0) != 0)) {
        func_sc04_018_8018330C(arg0);
    }
}

void func_sc04_018_80183838(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(0xC, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_80192030);
    }
}

void func_sc04_018_80183890(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80192030);
    }
}

void func_sc04_018_801838E0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_018_801B9AA8);
    }
}

s32 func_sc04_018_80183938(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_018_80192150);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9C50);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B67C8, 0, 0x60);
}

s32 func_sc04_018_801839A8(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9C50);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B67DC, 0, 0x40);
}

s32 func_sc04_018_80183A08(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B9C50);
    func_sc04_018_80184C90(arg0);
    return func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B67C8, 1, 0x60);
}

void func_sc04_018_80183A68(u8 *arg0) {
    D_sc04_018_80192230[AF(arg0, u16, 2)]();
}

void func_sc04_018_80183AA4(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801921B8);
}

void func_sc04_018_80183AD0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80192174[func_sc04_018_80184DD0(arg0)];
}

s32 func_sc04_018_80183B10(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x115, arg1) & 0xFF)) {
        func_80029124(0x115, 1);
        return 1;
    }
    return 0;
}

void func_sc04_018_80183B4C(s32 arg0) {
    if (func_sc04_018_80184BAC(9, 0x11) != 0) {
        func_sc04_018_80183938(arg0);
    }
}

void func_sc04_018_80183B8C(s32 arg0) {
    if (func_sc04_018_80184FA4() != 0) {
        func_sc04_018_801839A8(arg0);
    }
}

void func_sc04_018_80183BC4(s32 arg0) {
    if (func_sc04_018_80184FA4(arg0) != 0) {
        if (func_sc04_018_80184BAC(9, 0x11) == 0) {
            func_sc04_018_80183A08(arg0);
            return;
        }
        func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B67DC, 0, 0x40);
    }
}

void func_sc04_018_80183C28(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_sc04_018_801B9C50);
    }
}

void func_sc04_018_80183C78(s32 arg0) {
    if (func_sc04_018_80184FA4(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80192150);
    }
}

void func_sc04_018_80183CBC(s32 arg0) {
    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_80192160) != 0) {
        if (func_sc04_018_80184BAC(9, 0x11) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc04_018_801B9C50);
            func_sc04_018_80184C90(arg0);
            func_sc04_018_80184ED4(arg0, (s32) &D_sc04_018_801B67DC, 0, 0x40);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_80192150);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_018_80183D80);
    }
}

s32 *func_sc04_018_80183D80(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_sc04_018_80183DF4(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_8019224C);
}

void func_sc04_018_80183E20(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
}

void func_sc04_018_80183E6C(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc04_018_80185BE0(4) != 0) {
            func_sc04_018_80184ED4(o, &D_sc04_018_801B6810, 0, 0x40);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 1:
        func_sc04_018_80185BE0(4);
        if (func_sc04_018_80184FA4(o) != 0) {
            func_sc04_018_80184ED4(o, &D_sc04_018_801B681C, 0, 0x40);
            AF(o, u16, 0x34) = 2;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc04_018_80185BE0(4) != 0) {
            AF(o, u16, 0x34) = 4;
            func_sc04_018_80184ED4(o, &D_sc04_018_801B6810, 1, 0x40);
        }
        break;
    case 4:
        func_sc04_018_80185BE0(4);
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, s16, 2) = 5;
            func_sc04_018_80184CB8(o, &D_sc04_018_8019224C);
        }
        break;
    }
}

void func_sc04_018_80183FA8(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_018_801B99A8);
    func_sc04_018_80184C90(arg0);
}

void func_sc04_018_80183FF4(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc04_018_80185BE0(4) != 0) {
            func_sc04_018_80184ED4(o, &D_sc04_018_801B6810, 0, 0x40);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 1:
        func_sc04_018_80185BE0(4);
        if (func_sc04_018_80184FA4(o) != 0) {
            func_sc04_018_80184ED4(o, &D_sc04_018_801B681C, 1, 0x40);
            AF(o, u16, 0x34) = 2;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc04_018_80185BE0(4) != 0) {
            AF(o, u16, 0x34) = 4;
            func_sc04_018_80184ED4(o, &D_sc04_018_801B6810, 1, 0x40);
        }
        break;
    case 4:
        func_sc04_018_80185BE0(4);
        if (func_sc04_018_80184FA4(o) != 0) {
            AF(o, s16, 2) = 0xC;
            func_sc04_018_80184CB8(o, &D_sc04_018_8019224C);
        }
        break;
    }
}

void func_sc04_018_80184130(u8 *arg0) {
    D_sc04_018_80192414[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018416C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80192270[func_sc04_018_80184DD0(arg0)];
}

void func_sc04_018_801841AC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80192270[func_sc04_018_80184DD0(arg0)];
}

void func_sc04_018_801841EC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_018_80192270[func_sc04_018_80184DD0(arg0)];
}

s32 func_sc04_018_8018422C(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x116, arg1) & 0xFF)) {
        func_80029124(0x116, 1);
        return 1;
    }
    return 0;
}

void func_sc04_018_80184268(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801922E4);
}

void func_sc04_018_80184298(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_8019232C);
}

void func_sc04_018_801842C8(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_80192334);
}

void func_sc04_018_801842F8(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801923A4);
}

void func_sc04_018_80184328(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(7, 0x10) == 0) {
        func_sc04_018_80183FA8((s32) arg0);
    }
}

void func_sc04_018_80184374(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_8019224C);
    }
}

void func_sc04_018_801843C4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(0x10, 0x14) == 0) {
        func_sc04_018_80183DF4((s32) arg0);
    }
}

void func_sc04_018_80184410(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xC;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_8019224C);
    }
}

void func_sc04_018_80184460(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(6, 0x14) != 0) {
        func_sc04_018_80183E20((s32) arg0);
    }
}

void func_sc04_018_801844AC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(6, 7) == 0) {
        AF(arg0, s16, 2) = 6;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_8019224C);
    }
}

void func_sc04_018_80184504(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc04_018_801B99A8);
        AF(arg0, s16, 0x34) = 2;
    }
}

void func_sc04_018_80184560(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 9;
        SetScript(arg0, (s32) &D_sc04_018_801B99A8);
        AF(arg0, s16, 0x34) = 2;
    }
}

void func_sc04_018_801845B8(s32 arg0) {
    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_8019225C) != 0) {
        if (func_sc04_018_80184BAC(6, 7) != 0) {
            AF(arg0, s16, 2) = 5;
        } else if (func_sc04_018_80184BAC(7, 0x10) != 0) {
            AF(arg0, s16, 2) = 6;
        } else if (func_sc04_018_80184BAC(0x10, 0x14) != 0) {
            AF(arg0, s16, 2) = 0xC;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_8019224C);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        func_801788B8(arg0, (s32) &func_sc04_018_8018465C);
    }
}

s32 *func_sc04_018_8018465C(u8 *arg0) {
    switch (AF(AF(arg0, void *, 0x64), u16, 2)) {
    case 6:
    case 12:
        if (func_sc04_018_801848DC(arg0) == 0) {
            func_sc04_018_8018625C(AF(arg0, s32, 0x64));
            return NULL;
        }
        break;
    case 2:
    case 9:
        if (AF(AF(arg0, void *, 0x64), u16, 0x34) != 2) {
            return NULL;
        }
        if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
            return NULL;
        }
        break;
    default:
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_sc04_018_80184738(void) {
    s32 r;

    r = func_80029504();
    if ((u32)(r - 900) < 110) {
        return 0x65;
    }
    if ((u32)(r - 100) < 30) {
        return 0x28;
    }
    if (D_80078EAE == 1) {
        return 0xF;
    }
    return 0x10;
}

void func_sc04_018_8018479C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc04_018_801847AC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc04_018_801847BC(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc04_018_801B85A8;
    }
    AF(arg0, s32, 0xD0) = var_s0;
    if (AF(var_s0, s32, 0) != 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return 0;
        }
        func_8001C214(temp_v0, AF(var_s0, s32, 0));
        goto block_6;
    }
block_6:
    temp_a1 = AF(var_s0, s16, 0x12);
    if (temp_a1 != -1) {
        AF(arg0, s32, 0xCC) = func_8012E57C(0x61, (s32) temp_a1);
    }
    return 1;
}

void func_sc04_018_80184858(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_sc04_018_80184884(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_sc04_018_801848B0(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

s32 func_sc04_018_801848DC(u8 *arg0) {
    s32 o[2];
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x64);
    if (AF(AF(p, void *, 0xCC), u16, 2) != 2) {
        return 0;
    }
    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8((s32) AF(p, void *, 0xCC), (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0xC0, 0x40, -0x60, 0);
}

s32 func_sc04_018_80184960(o)
    u8 *o;
{
    u8 *g;
    s32 k;
    s32 n, q, r, i;
    s32 h, dd;
    g = &D_80078E78;
    k = D_sc04_018_801B86BC[AF(AF(o, u8 *, 0xD0), s16, 0x10)];
    if (k == -1) {
        D_sc04_018_801E7998[0] = 0;
        return 0;
    }
    n = func_sc04_018_80184B04();
    h = D_80078EB1;
    q = n / 24;
    r = n % 24;
    dd = D_80078EAC;
    if (n == 0) {
        i = D_sc04_018_801B86F0[h] - 1;
    } else if (dd - q >= 5) {
        i = 7;
    } else if (dd == q && h - r >= 2) {
        i = 6;
    } else {
        i = AF(g, u8, 0x39);
        i = D_sc04_018_801B86F0[i] - 1;
    }
    D_sc04_018_801E7998[0] = 1;
    return D_sc04_018_801B85BC[i][k];
}

void func_sc04_018_80184A90(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc04_018_80184960();
    func_sc04_018_80184AC4((s32) arg0);
}

void func_sc04_018_80184AC4(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

s16 func_sc04_018_80184B04(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc04_018_80184B2C(u8 *arg0) {
    D_sc04_018_801B8720[AF(arg0, u16, 2)]();
}

void func_sc04_018_80184B68(void) {
}

void func_sc04_018_80184B70(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) D_80078EB1 >= arg1 && (s32) D_80078EB1 < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc04_018_80184BAC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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
typedef struct {
    s16 f0; u8 p2[0xC]; s16 fE; u8 p10[0x20];
    S16R f30[8];
    union { s16 h[8]; S16R r[8]; } f40;
} W80115118;
extern u8 D_sc04_018_801E9968;
extern s16 D_sc04_018_801E778C;
extern u8 *D_sc04_018_801E3D40[];
extern u8 D_sc04_018_801E3D38[];
extern W80115118 D_80115118;
extern s32 D_sc04_018_801B9268[];
extern void func_8002AC00();
extern s32 func_80029FE4();
extern s16 D_sc04_018_801B9450[];
extern s32 *func_sc04_018_801EADC4();
extern u8 D_sc04_018_801E7714[];
extern u8 D_sc04_018_801E92B4;
extern u8 D_sc04_018_801E92E0;
extern u8 D_sc04_018_801E96A4;
extern u16 D_800B99D8[];
extern s32 D_sc04_018_801B9428[];
extern s32 D_sc04_018_801B943C[];
extern s32 D_sc04_018_801B9458[];
extern s16 D_80078E92;
extern u8 D_sc04_018_801B9282;
extern u8 D_sc04_018_801B9284;
extern u8 D_sc04_018_801B928E;
extern u8 D_sc04_018_801B9290;
extern u8 D_sc04_018_801B929A;
extern u8 D_sc04_018_801B929C;
extern u8 D_sc04_018_801B92A6;
extern u8 D_sc04_018_801B92A8;
extern s32 func_801783D0();
extern u8 D_8011514A;
extern u8 D_8011514C;
extern s16 D_8011515A[];
extern s16 D_8011515C;
extern s16 D_8011515E;
extern u8 D_sc04_018_801E58D0[];
extern u8 D_sc04_018_801E58F0[];
extern u8 D_sc04_018_801E5910[];
extern u8 D_sc04_018_801E56F0[];
extern u8 D_sc04_018_801E5934[];
extern u8 D_sc04_018_801E7034[][0x24];
extern u8 D_sc04_018_801E704F[][0x24];
extern u8 D_sc04_018_801E70B4[];
extern u8 D_sc04_018_801E7274[][0x24];
extern u8 D_sc04_018_801E728A[][0x24];
extern u8 D_sc04_018_801E728F[][0x24];
extern u8 D_sc04_018_801E74B4[][0x24];
extern u8 D_sc04_018_801E74B8[][0x24];
extern u8 D_sc04_018_801E74C0[][0x24];
extern u8 D_sc04_018_801B92CC[];
extern u8 *D_sc04_018_801B92AC[];
extern u8 D_sc04_018_801B92D4[];
extern u8 D_sc04_018_801B92DC[];
extern u8 *D_sc04_018_801B8F0C;
extern u8 *D_sc04_018_801B8F10[];
extern u8 *D_sc04_018_801B8F14[];
extern u8 *D_sc04_018_801B8F44;
extern u8 *D_sc04_018_801B8E84[];
extern s32 D_800A654C;
extern s16 D_sc04_018_801E7798;
extern s16 D_sc04_018_801E779C;
extern s16 D_sc04_018_801E77A0;
extern s16 D_sc04_018_801E77A4;
extern s16 D_sc04_018_801E77A8;
extern s16 D_sc04_018_801E77AC;
extern s32 *D_sc04_018_801E7778;
extern u8 D_sc04_018_801E930C;
extern u8 D_sc04_018_801EC928;
extern s32 D_sc04_018_801B946C[];
extern u8 D_sc04_018_801B94A4[];
extern void func_8017ADE8();
extern s32 GetPadPressedDir();
extern s32 func_sc04_018_80189E54(s32 arg0);

s32 func_sc04_018_80184BD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 unused[0x20]; /* MATCH-TRICK: frame pad, the original reserves 0x20 bytes it never uses */
    s32 h0, m0, h1, m1;
    s32 lo;
    s32 hi;

    h0 = a0 & 0xFF;
    m0 = a1 & 0xFF;
    lo = (h0 << 8) | m0;
    h1 = a2 & 0xFF;
    m1 = a3 & 0xFF;
    hi = (h1 << 8) | m1;
    if ((s16)lo <= *(s16 *)&D_80078EB0) {
        if (*(s16 *)&D_80078EB0 < (s16)hi) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_018_80184C28(u8 *o, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;

    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    b.x = 0;
    b.y = 0;
    b.z = -n;
    FaceHelper(o, &b, &c);
    func_8012CEB0(&a, &c, 0);
}

void func_sc04_018_80184C90(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_018_801B8728 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc04_018_80184CB0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc04_018_80184CB8(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

s32 func_sc04_018_80184D00(void) {
    s32 r;

    r = func_80029504();
    if (r < 0x14) {
        return 0;
    }
    if (r < 0x46) {
        return 1;
    }
    if (r < 0x64) {
        return 2;
    }
    if (r < 0x82) {
        return 3;
    }
    return 4;
}

s32 func_sc04_018_80184D5C(void) {
    s32 r;

    r = func_80029504();
    if (r < 0xC8) {
        return 5;
    }
    if (r < 0x12C) {
        return 0;
    }
    if (r < 0x258) {
        return 1;
    }
    if (r < 0x2BC) {
        return 2;
    }
    if (r < 0x2E4) {
        return 3;
    }
    if (r < 0x384) {
        return 4;
    }
    return 6;
}

s32 func_sc04_018_80184DD0(void) {
    s32 r;

    r = func_80029504();
    if (r < 0xC8) {
        return 5;
    }
    if (r < 0x12C) {
        return 0;
    }
    if (r < 0x258) {
        return 1;
    }
    if (r < 0x2B2) {
        return 2;
    }
    if (r < 0x2E4) {
        return 3;
    }
    if (r < 0x384) {
        return 4;
    }
    return 6;
}

s32 func_sc04_018_80184E44(void) {
    s32 r;

    r = func_80029504();
    if (r < 0x3B6) {
        return 0;
    }
    if (r < 0x3E8) {
        return 1;
    }
    if (r < 0x44C) {
        return 2;
    }
    if (r < 0x4B0) {
        return 3;
    }
    return 4;
}

void func_sc04_018_80184EA0(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

s32 func_sc04_018_80184ED4(u8 *o, s16 *t, s32 mode, s32 b) {
    SV8 v;
    s32 n;
    s16 *q;
    AF(o, u8, 0x108) = mode;
    AF(o, s16 *, 0xE8) = t;
    AF(o, u8, 0x109) = b;
    n = t[0];
    if ((mode & 0xFF) == 0) {
        AF(o, s16, 0x106) = 2;
        AF(o, s16, 6) = t[2];
        AF(o, s16, 0xE) = t[3];
        v.x = t[4];
        v.z = t[5];
    } else {
        q = (s16 *)(n * 4 + (s32)t);
        AF(o, s16, 0x106) = n - 1;
        AF(o, s16, 6) = q[0];
        AF(o, s16, 0xE) = q[1];
        v.x = q[-2];
        v.z = q[-1];
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B744(o + 4, &v);
    return func_8012B200(o);
}

s32 func_sc04_018_80184FA4(u8 *a) {
    SV8 t;
    s32 s;

    if (func_8016F1AC(a) != 0) {
        return 0;
    }
    if (AF(a, u8, 0x108) == 0) {
        if (*AF(a, s16 *, 0xE8) < AF(a, s16, 0x106)) {
            return 1;
        }
    } else if (AF(a, s16, 0x106) <= 0) {
        return 1;
    }
    t.x = AF(a, u16 *, 0xE8)[AF(a, s16, 0x106) * 2];
    t.z = AF(a, u16 *, 0xE8)[AF(a, s16, 0x106) * 2 + 1];
    s = AF(a, u8, 0x109);
    s <<= 12;
    if (func_8014B12C() != 0) {
        AF(AF(a, u8 *, 0x20), s16, 0x12) = func_8012B744(a + 4, &t);
        s *= 8;
    } else {
        AF(AF(a, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(a, u8 *, 0x20), s16, 0x12), func_8012B744(a + 4, &t), 4);
    }
    func_8012B178(a, -s);
    func_8012AD80(a);
    AF(a, u16, 0xA) -= 0x10;
    func_8012B030(a);
    if (func_8014B12C() != 0) {
        if (func_8012BE98(a, &t) <= 0x1000) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    } else {
        if (func_8012BE98(a, &t) <= 0x100) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    }
    return 0;
}

s32 func_sc04_018_8018516C(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (func_8014B12C() != 0) {
        return 2;
    }
    return 1;
}

void func_sc04_018_801851B4(u8 *arg0) {
    D_sc04_018_801B8740[AF(arg0, u16, 2)]();
}

void func_sc04_018_801851F0(void) {
}

void func_sc04_018_801851F8(void) {
}

void func_sc04_018_80185200(void) {
}

void func_sc04_018_80185208(void) {
}

void func_sc04_018_80185210(void) {
}

void func_sc04_018_80185218(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_sc04_018_801E7A88, 0x14, arg2, arg3);
    D_sc04_018_801E799C = 0;
    func_8012CAE4(arg0);
}

void func_sc04_018_8018525C(void) {
}

void func_sc04_018_80185264(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_018_801C03D8);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_sc04_018_801B8738);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_018_801852EC(u8 *a) {
    s16 v;
    s16 w;
    u32 k;

    v = AF(a, s16, 0x10A);
    if (v > 0) {
        AF(a, s16, 0x10A) = v - 1;
    }
    w = AF(a, s16, 0x108);
    if (w != 0) {
        AF(a, u32, 0xB0) = w;
        AF(a, s16, 0x108) = 0;
    }
    k = AF(a, u32, 0xB0);
    switch (k) {
    case 1:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc04_018_80185978(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc04_018_80185904(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc04_018_801859D8(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc04_018_8018589C(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc04_018_80185904(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc04_018_8018589C(a);
        }
        break;
    }
    D_sc04_018_801B8A18[AF(a, u16, 2)](a);
}

void func_sc04_018_801854C4(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_sc04_018_801B8788[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc04_018_801B8748 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_sc04_018_801B8748 + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_sc04_018_801B874C + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_sc04_018_801B8760 | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_sc04_018_801B877C;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc04_018_801B8770;
    AF(a, s16, 0x10A) = 6;
    func_sc04_018_8018589C(a);
    AF(a, void *, 0xDC) = func_sc04_018_80185C6C;
}

void func_sc04_018_80185664(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        func_sc04_018_80185D70(o);
        AF(o, u16, 0x34) = 2;
        break;
    case 2:
        if (func_80178970((s32) o) != 0) {
            func_80178D18((s32) o);
            AF(o, u16, 0x34) = 0;
        }
        break;
    }
}

void func_sc04_018_801856E0(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc04_018_8018516C() == 2) {
        func_sc04_018_80185904(arg0);
    }
    temp_v0 = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = temp_v0;
    if ((s16) temp_v0 == 8) {
        func_8012E688(arg0, 0x514, 0);
    }
    temp_v0_2 = AF(arg0, u16, 0x100) + AF(arg0, u16, 0x102);
    AF(arg0, u16, 0x100) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x50) {
        AF(arg0, u16, 0x100) = 0x50U;
    }
    temp_v0_3 = AF(arg0, u16, 0xFE) + AF(arg0, u16, 0x100);
    AF(arg0, u16, 0xFE) = temp_v0_3;
    if ((s16) temp_v0_3 >= 0x600) {
        func_sc04_018_80185904(arg0);
    }
    func_sc04_018_80185EEC(arg0);
}

void func_sc04_018_801857AC(s32 arg0) {
    func_sc04_018_80185EEC(arg0);
}

void func_sc04_018_801857CC(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc04_018_8018516C() == 2) {
        func_sc04_018_8018589C(arg0);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            goto block_5;
        }
    } else {
block_5:
        temp_v0 = AF(arg0, u16, 0x100) + AF(arg0, u16, 0x102);
        AF(arg0, u16, 0x100) = temp_v0;
        if ((s16) temp_v0 >= 0x50) {
            AF(arg0, u16, 0x100) = 0x50U;
        }
        temp_v0_2 = AF(arg0, u16, 0xFE) - AF(arg0, u16, 0x100);
        AF(arg0, u16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) <= 0) {
            func_8012E688(arg0, 0x515, 0);
            func_sc04_018_8018589C(arg0);
            return;
        }
        func_sc04_018_80185EEC(arg0);
    }
}

void func_sc04_018_8018589C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_018_801B874C + ((D_sc04_018_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_018_80185EEC(arg0);
}

void func_sc04_018_80185904(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_018_801B8748 + ((D_sc04_018_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_018_80185EEC(arg0);
}

void func_sc04_018_80185978(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_018_801B8748 + ((D_sc04_018_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc04_018_801859D8(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_018_801B8748 + ((D_sc04_018_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_018_80185EEC(arg0);
}

void func_sc04_018_80185A58(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *end;

    p = (u8 *)&D_801202A0;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (*(u16 *)p == 0x61 && AF(p, s16, 0x70) == arg0) {
            AF(p, s32, 0xB0) = arg1;
            return;
        }
    }
}

void func_sc04_018_80185AB0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc04_018_8018602C(arg0, 0x3C);
    }
}

void func_sc04_018_80185B10(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc04_018_80185B58(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc04_018_8018602C(arg0, 0x3C);
    }
}

void func_sc04_018_80185BA8(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

s32 func_sc04_018_80185BE0(s32 arg0) {
    s32 t;

    t = func_8012E57C(0x61, (s16) arg0);
    if (t == 0) {
        return 1;
    }
    switch (AF(t, u16, 2)) {
    case 1:
    case 2:
        AF(t, s16, 0x108) = 1;
        return 0;
    case 3:
        AF(t, s16, 0x108) = 1;
        return 0;
    case 4:
        AF(t, s16, 0x108) = 1;
        return 1;
    }
}

void *func_sc04_018_80185C6C(u8 *o) {
    if (D_800B9A08 == 0x3069) return 0;
    if (AF(o, u16, 2) != 2) return 0;
    if (AF(o, u16, 0x34) != 0) return 0;
    if (AF(o, s16, 0x10A) != 0) return 0;
    if (!func_sc04_018_80185D10(o)) return 0;
    if (func_sc04_018_801862A8(o)) return 0;
    AF(o, s16, 0x34) = 1;
    func_80178BF8();
    return &func_80172710;
}

s32 func_sc04_018_80185D10(s32 arg0) {
    s32 o[2];
    FeSv v;

    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

void func_sc04_018_80185D70(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &D_80078E78;
    v = func_80029504();
    s0 = D_sc04_018_801B89D0[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_sc04_018_801B89A0;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_sc04_018_801B89A0;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)func_80029178(0xFA) != 0) s0 = &D_sc04_018_801B89B8;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_sc04_018_801B89A0;
        if ((u32)(v - 100) < 500) s0 = &D_sc04_018_801B89B8;
        if (func_sc04_018_80184E44() == 1) s0 = &D_sc04_018_801B89B8;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_sc04_018_801B89A0;
        if (func_sc04_018_80184D00() == 3) s0 = &D_sc04_018_801B89B8;
        if (func_sc04_018_80184E44() == 1) s0 = &D_sc04_018_801B89B8;
        break;
    }
    func_80178CBC(o, s0);
}

s32 func_sc04_018_80185EEC(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc04_018_80185F20(arg0);
}

s32 func_sc04_018_80185F20(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_sc04_018_80185F54(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc04_018_80185FB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc04_018_8018602C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc04_018_80186084(u8 *arg0) {
    D_sc04_018_801B8A3C[AF(arg0, u16, 2)]();
}

void func_sc04_018_801860C0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_018_801B8A2C | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_018_8018613C(u8 *o) {
    u8 *p;
    u8 *best;
    s32 min;
    s32 d;
    u8 *end;
    p = &D_801202A0;
    min = 0x7FFF;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0x61) {
            d = func_8012BD14(p);
            if (d < min) {
                min = d;
                best = p;
            }
        }
    }
    if (min == 0x7FFF) {
        AF(o, s16, 0x5C) = 0;
        return;
    }
    p = best;
    AF(o, s32, 4) = AF(p, s32, 4);
    AF(o, s32, 8) = AF(p, s32, 8);
    AF(o, s32, 0xC) = AF(p, s32, 0xC);
    AF(AF(o, u8 *, 0x20), SV8, 0x10) = AF(AF(p, u8 *, 0x20), SV8, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) -= AF(p, u16, 0xFE);
    AF(o, s16, 0x5C) = 0x800;
}

s32 func_sc04_018_8018625C(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc04_018_801862A8((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_sc04_018_801862A8(u8 *o) {
    SV8 xy;
    SV8 v;
    u8 *p;
    u8 *q;
    u8 *end;
    p = &D_801202A0;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0) continue;
        if (AF(p, u16, 0) == 0x61) continue;
        if (func_sc04_018_801863B4(p) == 0) continue;
        q = AF(p, u8 *, 0x20);
        if (q == 0) continue;
        if (AF(q, s32, 0x24) == 0) continue;
        if (AF(q, s32, 4) < 0) continue;
        v.x = AF(p, s16, 6);
        v.y = AF(p, s16, 0xA);
        v.z = AF(p, s16, 0xE);
        func_8012F2E8(o, &v, &xy);
        if (func_8012CB64(&xy, -0xA0, 0x80, -0xC0, 0x80)) return 1;
    }
    return 0;
}

s32 func_sc04_018_801863B4(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_sc04_018_801B8A44; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

void func_sc04_018_80186410(s32 arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc04_018_801B87D8, (s32) sp10);
    AF(D_sc04_018_801E7AAC, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

s16 func_sc04_018_80186450(void) {
    return D_sc04_018_801E7030;
}

void func_sc04_018_80186460(s32 arg0) {
    D_800B9A15 = 1;
    D_800B9A13 = 4;
    D_80115110 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    D_8011DB24 = func_sc04_018_801864AC;
}

void func_sc04_018_801864AC(void) {
    func_80029444();
    func_801754A8();
    D_sc04_018_801B94B0[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc04_018_8018651C(void) {
    func_800D24A0(3);
    D_8011511A = 0;
    func_sc04_018_80186570();
    D_80115130 = 0;
    D_sc04_018_801E7700 = 0;
    D_80115112 += 1;
}

void func_sc04_018_80186570(void) {
    s16 i;
    s16 j;
    s16 lim;
    s16 m;
    s16 n;
    s32 v;
    s16 found;
    u8 *p;
    s32 *rec;
    s32 t;
    s32 x;

    D_sc04_018_801E7030 = 0;
    D_80115118.f0 = 0;
    D_sc04_018_801E7794 = 0;
    v = func_80029504();
    D_80115134 = D_sc04_018_801B9268[D_80115126];
    if (D_80115126 != 3) {
        lim = 3;
    } else {
        lim = 4;
    }
    for (i = 0; i < 8; i++) {
        if (i < lim) {
            D_80115138[i] = *(u16 *)(D_80115134 + i * 32);
            D_80115118.f40.h[i] = *(u16 *)(D_80115134 + i * 32 + 2);
        } else {
            D_80115118.f40.r[i].v = 0;
            D_80115138[i] = 0;
        }
        D_80115118.f30[i].v = 0;
        D_80115140[i] = 0;
    }
    if (D_80115126 == 3) {
        if (func_80029178(0x11D) & 0xFF) {
            func_8002AC00(0x23);
            if ((func_80029178(0x1D) & 0xFF) && (func_80029178(0x1E) & 0xFF) && (func_80029178(0x1F) & 0xFF)
                && (func_80029178(0x20) & 0xFF) && (func_80029178(0x21) & 0xFF)
                && ((func_80029178(0x1B) & 0xFF) || (func_80029178(0x1C) & 0xFF))) {
                func_8002AC00(0x29);
            }
            if (func_80029FE4() >= 0x1B) {
                func_8002AC00(0x2A);
            }
            i = 0;
            j = 0;
            for (; i < 0x2A; i++) {
                if (func_800291B4(i + 0x63) & 0x40) {
                    j++;
                }
            }
            if (j >= 0x2A) {
                func_8002AC00(0x2B);
            }
        }
        n = 0;
        for (i = 0; i < 7; i++) {
            D_sc04_018_801E77B0[i] = 0;
        }
        for (j = 0; j < 4; j++) {
            if (v < D_sc04_018_801B9450[j]) {
                break;
            }
        }
        m = j + 2;
        if (func_80029178(0x11D) & 0xFF) {
            m = 6;
        }
        for (i = 0; i < m; i++) {
            found = 0;
            p = D_sc04_018_801E3D40[i];
            j = 0;
            if (D_sc04_018_801E3D38[i] != 0) {
                do {
                    if (func_800291B4(*p++ + 0x62) & 0x80) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc04_018_801E3D38[i]);
            }
            if (found) {
                D_sc04_018_801E77B0[n++] = i;
            }
        }
        found = 0;
        p = D_sc04_018_801E3D40[6];
        j = 0;
        if (D_sc04_018_801E3D38[6] != 0) {
            do {
                if (func_800291B4(*p++ + 0x62) & 0x80) {
                    found = 1;
                    break;
                }
                j++;
            } while (j < D_sc04_018_801E3D38[6]);
        }
        if (found) {
            D_sc04_018_801E77B0[n++] = 6;
        }
        D_80115118.f40.h[1] = n | 0x100;
    }
    for (i = 0; i < 6; i++) {
        D_sc04_018_801E7774[i] = 0;
    }
    if (D_80115126 == 4) {
        rec = func_sc04_018_801EADC4();
        if (rec != 0) {
            i = 0;
            do {
                t = rec[2];
                if ((u32)(t - 10) < 2) {
                    D_sc04_018_801E7774[t - 6] = rec;
                } else {
                    D_sc04_018_801E7774[i++] = rec;
                }
                rec += 4;
            } while (rec[-4] != 0);
        }
    }
    if (D_80115126 == 5) {
        rec = (s32 *)D_sc04_018_801E7714;
        for (i = 0; i < 6; i++) {
            switch (i) {
            case 0:
                rec[2] = 9;
                if (v < 600) {
                    rec[1] = (s32)&D_sc04_018_801E92B4;
                } else {
                    rec[1] = (s32)&D_sc04_018_801E92E0;
                }
                D_sc04_018_801E7774[0] = rec;
                break;
            case 1:
                rec[2] = 0xB;
                if ((func_80029178(0x11A) & 0xFF) && D_80078E8C >= 0x32U) {
                    rec[1] = (s32)&D_sc04_018_801E9968;
                } else {
                    func_80029124(0x11A, 0);
                    rec[1] = (s32)&D_sc04_018_801E96A4;
                }
                D_sc04_018_801E7774[1] = rec;
                break;
            case 2:
                rec[2] = 3;
                rec[1] = D_sc04_018_801B9428[D_800B99D8[0] % 5];
                D_sc04_018_801E7774[2] = rec;
                break;
            case 3:
                rec[2] = 0x19;
                for (j = 0; j < 4; j++) {
                    if (v < D_sc04_018_801B9450[j]) {
                        break;
                    }
                }
                x = D_sc04_018_801B9458[j];
                if (x != 0) {
                    rec[1] = x;
                    D_sc04_018_801E7774[3] = rec;
                }
                break;
            case 4:
                if (v < 0x3B6) {
                    rec[2] = 0xC;
                    /* MATCH-TRICK: struct view of D_800B99DA keeps the rec[2] store before this load */
                    rec[1] = D_sc04_018_801B943C[((U16R *)&D_800B99DA)->v % 5];
                    D_sc04_018_801E7774[4] = rec;
                }
                break;
            }
            rec += 4;
        }
    }
    D_sc04_018_801E778C = 0;
    if (D_80115126 == 0) {
        if (D_80078EBA == 4) {
            D_sc04_018_801E778C = 0x14;
        }
        if (v < 600) {
            D_sc04_018_801B9282 = D_sc04_018_801B928E = D_sc04_018_801B929A = D_sc04_018_801B92A6 = 6;
            D_sc04_018_801B9284 = D_sc04_018_801B9290 = D_sc04_018_801B929C = D_sc04_018_801B92A8 = 8;
        } else {
            D_sc04_018_801B9282 = D_sc04_018_801B928E = D_sc04_018_801B929A = D_sc04_018_801B92A6 = 7;
            D_sc04_018_801B9284 = D_sc04_018_801B9290 = D_sc04_018_801B929C = D_sc04_018_801B92A8 = 0x6D;
        }
    }
    if (D_80115126 == 1 && D_80078E92 >= 0x438) {
        D_sc04_018_801E778C = 3;
    }
    func_sc04_018_80186E24();
}

void func_sc04_018_80186E24(void) {
    u8 *a = D_sc04_018_801E58D0;
    u8 *bb = D_sc04_018_801E58F0;
    s16 i;
    s16 j;
    s16 m;
    s16 n;
    s16 f;
    s16 price;
    s16 disc;
    s32 r;
    s32 k;
    u8 id;
    u8 w;
    u8 *p;
    u8 *s;
    u8 *d;
    u8 *list;
    s32 *e;

    if (D_80115126 == 4) {
        p = D_sc04_018_801E5910;
    } else if (D_80115126 == 5) {
        p = D_sc04_018_801E5934;
    } else {
        p = D_sc04_018_801E56F0;
    }
    for (i = 0; i < 16; i++) {
        strcpy(D_sc04_018_801E7034[i], a);
        strcpy(D_sc04_018_801E7274[i], bb);
        strcpy(D_sc04_018_801E74B4[i], p);
    }
    switch (D_80115126) {
    case 0:
        if (func_80029178(0xFB) & 0xFF) {
            i = 1;
        } else {
            i = (u32)func_80029504() >= 600;
        }
        if (func_80029178(0x9B) & 0xFF) {
            i |= 2;
        }
        if ((u8)func_800291B4(0x5B) >= 3) {
            i |= 4;
        }
        n = D_sc04_018_801B92CC[i];
        D_8011515A[0] = n | 0x100;
        list = D_sc04_018_801B92AC[i];
        D_sc04_018_801E76F4 = list;
        break;
    case 1:
        n = 7;
        if ((u32)func_80029504() < 600) {
            n = 5;
        }
        list = D_sc04_018_801B92D4;
        D_8011515A[0] = n | 0x100;
        D_sc04_018_801E76F4 = list;
        break;
    case 5:
        list = D_sc04_018_801B92DC;
        D_sc04_018_801E76F4 = list;
        n = 7;
        break;
    default:
        n = 0;
        break;
    }
    for (i = 0; i < n; i++) {
        k = list[i];
        s = (u8 *)D_8010EDE8[k].v;
        d = D_sc04_018_801E7034[i];
        while (*s != 0) {
            *d++ = *s++;
            *d++ = *s++;
        }
        disc = D_sc04_018_801E778C;
        if (disc != 0) {
            if (D_80115126 == 0) {
                price = D_8010EDEC[k].v * (100 - disc) / 100;
            } else {
                price = D_8010EDEC[k].v - disc;
            }
        } else {
            price = D_8010EDEC[k].v;
        }
        r = func_801783D0(price, 0);
        m = -0x1000;
        for (j = 3; j >= 0; j--) {
            if ((u16)r & m) {
                break;
            }
            m >>= 4;
        }
        d = D_sc04_018_801E704F[i];
        for (m = 0; m < j + 1; m++, r = (u16)r >> 4) {
            *d-- = (r & 0xF) + 0x4F;
            *d-- = 0x82;
        }
        d[0] = 0x46;
        d[-1] = 0x81;
    }
    w = D_sc04_018_801E77B0[D_8011514A];
    list = D_sc04_018_801E3D40[w];
    n = D_sc04_018_801E3D38[w];
    D_sc04_018_801E76FC = list;
    D_8011515E = n | 0x100;
    if (D_80115126 == 0 && func_800D0F8C(0xA) != 0) {
        strcpy(D_sc04_018_801E70B4, D_sc04_018_801B8F0C);
    }
    if (D_80115126 == 3) {
        for (i = 0; i < n; i++) {
            k = list[i];
            s = (u8 *)D_8010F468[k].v;
            d = D_sc04_018_801E7274[i];
            while (*s != 0) {
                *d++ = *s++;
                *d++ = *s++;
            }
            id = k;
            j = (u8)func_800291B4(id + 0x62);
            if (j & 0x80) {
                if (!(j & 0x40)) {
                    r = func_801783D0(D_800A6586[id], 0);
                    m = -0x1000;
                    for (j = 3; j >= 0; j--) {
                        if ((u16)r & m) {
                            break;
                        }
                        m >>= 4;
                    }
                    d = D_sc04_018_801E728F[i];
                    for (m = 0; m < j + 1; m++, r = (u16)r >> 4) {
                        *d-- = (r & 0xF) + 0x4F;
                        *d-- = 0x82;
                    }
                    d[0] = 0x46;
                    d[-1] = 0x81;
                } else {
                    strcpy(D_sc04_018_801E728A[i], D_sc04_018_801B8F0C + 2);
                }
            } else {
                strcpy(D_sc04_018_801E7274[i], D_sc04_018_801B8F10[0]);
            }
        }
        if ((u16)D_8011511A != 1 && (u16)D_8011511A != 2) {
            for (i = 0, j = 0; i < 64; i++) {
                if (func_800291B4(i + 0x63) & 0x40) {
                    D_sc04_018_801E77B8[j++] = i;
                }
            }
            D_8011515C = j | 0x100;
            if (D_8011514C >= j) {
                if (j != 0) {
                    D_8011514C = j - 1;
                } else {
                    D_8011514C = 0;
                }
            }
        }
    }
    if (D_80115126 == 4) {
        for (i = 0; i < 6; i++) {
            s = D_sc04_018_801B8F14[i];
            d = D_sc04_018_801E74B8[i];
            d[0] = s[0];
            d[1] = s[1];
            d = D_sc04_018_801E74B8[i] + 4;
            e = D_sc04_018_801E7774[i];
            if (e != 0) {
                s = D_sc04_018_801B8E84[e[2]];
                while (*s != 0) {
                    *d++ = *s++;
                    *d++ = *s++;
                }
            } else {
                strcpy(D_sc04_018_801E74B8[i] + 0x16, D_sc04_018_801B8F14[i + 6]);
            }
        }
    }
    if (D_80115126 == 5) {
        for (i = 0; i < 6; i++) {
            d = D_sc04_018_801E74B4[i];
            if (i == 0) {
                s = D_sc04_018_801B8F44;
            } else {
                s = D_sc04_018_801B8F10[i];
                d += 8;
            }
            while (*s != 0) {
                *d++ = *s++;
                *d++ = *s++;
            }
            if (D_sc04_018_801E7774[i] != 0) {
                strcpy(D_sc04_018_801E74C0[i], D_sc04_018_801B8E84[D_sc04_018_801E7774[i][2]]);
            }
        }
    }
}

extern s32 func_sc04_018_80188428(void);
extern s32 func_sc04_018_80188E1C(s16, s16);

static inline s32 get_p_801877B0(s32 k, s32 a) {
    if (D_sc04_018_801E7700 != 0) {
        return D_sc04_018_801E7700;
    }
    return func_sc04_018_80188E1C(k, a);
}

void func_sc04_018_801877B0(void) {
    u8 unused[8];
    s16 r;
    s32 p;
    s32 a;
    u8 k;
    s32 *q;
    u16 *w;

    D_801151D0 = D_801151C8[D_800B9A02];
    r = func_sc04_018_80188428();
    func_sc04_018_80188778();
    a = func_8014168C(D_8011511A);
    k = D_80115138[(u16)D_8011511A];
    p = get_p_801877B0(k, a);
    if (p != 0) {
        q = &D_80115130;
        if (p != *q) {
            *q = p;
            func_80139954();
            D_sc04_018_801E7704 = func_801376E8(p, &D_sc04_018_801B9410);
        }
    }
    func_80137B80();
    if (r < 0) {
        func_80139954();
        D_800B9A15 = 0;
        if (D_sc04_018_801E7030 == 0) {
            func_8002D4C8(0x474, 0);
        }
        w = &D_80115112;
        *w += 2;
    }
}

void func_sc04_018_801878E8(void) {
    u8 unused[8];
    s16 v;
    s16 a;
    s16 b;
    u8 s;
    u16 *w;
    s32 n;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_80115126 == 4) {
        if (func_801399F0(D_sc04_018_801E7704) == 0) {
            goto end;
        }
        if (D_80115148[0] == 0) {
            if (D_sc04_018_801E7700 == (s32)&D_sc04_018_801EC928) {
                D_sc04_018_801E7708 = 0x60;
                D_sc04_018_801E7710 = 0;
                D_sc04_018_801E770C = 0;
                D_sc04_018_801E7700 = 0;
                if (D_800A654C == 0x16) {
                    D_sc04_018_801E7790 = 1;
                    func_8001AAA0(0x35);
                } else {
                    D_sc04_018_801E7790 = 0;
                }
                n = 6;
            } else {
                n = D_80115112 - 1;
            }
        } else {
            D_sc04_018_801E7700 = 0;
            func_8017ADE8(0x12);
            func_8002D4C8(0x46F, 0);
            D_8011511A = 0;
            n = D_80115112 - 1;
        }
        D_80115112 = n;
        goto block;
    } else if (D_80115126 == 5) {
        if (D_sc04_018_801E7700 != 0) {
            D_sc04_018_801E77AC = func_801399F0(D_sc04_018_801E7704);
            if (D_sc04_018_801E77AC != 0) {
                D_sc04_018_801E7700 = 0;
            }
            goto end;
        }
        if (!(GetPadPressedDir(0) & 0x50) && D_sc04_018_801E77AC <= 0) {
            goto end;
        }
        switch (D_sc04_018_801E7794) {
        case 0:
            D_sc04_018_801E7794 = -1;
            break;
        case 1:
            if (D_sc04_018_801E77AC < 0) {
                D_sc04_018_801E7700 = (s32)&D_sc04_018_801E930C;
            } else if (D_sc04_018_801E77AC == 1) {
                D_sc04_018_801E7030 = 1;
                func_80139954();
                w = &D_80115112;
                n = *w;
                D_800B9A15 = 0;
                *w = n + 1;
            } else {
                D_sc04_018_801E7794 = -2;
            }
            break;
        case 2:
            D_sc04_018_801E77A8 = 0;
            D_sc04_018_801E7798 = 0;
        case 5:
        case 6:
            D_sc04_018_801E7794 = (D_sc04_018_801E7794 + 1) | 0x100;
            break;
        case 3:
            if (D_sc04_018_801E77AC == 1) {
                D_sc04_018_801E7794++;
                if (D_sc04_018_801E77A8 == 0) {
                    if ((s16)func_sc04_018_80189E54(-10) != 0) {
                        func_8002D4C8(0x472, 0);
                        D_sc04_018_801E7794 = 0x10C;
                        break;
                    }
                    func_8002D4C8(0x5EE, 0);
                    D_sc04_018_801E7798 = 0;
                    D_sc04_018_801E77A8 = 0;
                    v = rand() % 9 + 3;
                    D_sc04_018_801E779C = v;
                    func_80139A68(v, 0);
                } else {
                    func_80139A68(D_sc04_018_801E779C, 0);
                    D_sc04_018_801E7794 = 0x106;
                    break;
                }
            }
            D_sc04_018_801E7794 = (D_sc04_018_801E7794 + 1) | 0x100;
            break;
        case 4:
        case 12:
        case 13:
            if (D_sc04_018_801E7798 != 0) {
                func_sc04_018_80189E54(D_sc04_018_801E7798);
                func_8002D4C8(0x5EE, 0);
            }
            D_sc04_018_801E7794 = -1;
            break;
        case 7:
            D_sc04_018_801E77A4 = D_sc04_018_801E77AC - 1;
            v = rand() % 13 + 1;
            D_sc04_018_801E77A0 = v;
            func_80139A68(v, 0);
            D_sc04_018_801E7794 = (D_sc04_018_801E7794 + 1) | 0x100;
            break;
        case 8:
        case 9:
            a = D_sc04_018_801E779C;
            b = D_sc04_018_801E77A0;
            if (a == b) {
                v = rand() % 13 + 1;
                D_sc04_018_801E77A0 = v;
                func_80139A68(v, 0);
                D_sc04_018_801E7794 = 0x109;
                break;
            }
            if ((D_sc04_018_801E77A4 == 0 && a < b) || (D_sc04_018_801E77A4 != 0 && b < a)) {
                if (D_sc04_018_801E7798 == 0) {
                    D_sc04_018_801E7798 = 10;
                }
                D_sc04_018_801E7798 <<= 1;
                func_80139A68(D_sc04_018_801E7798, 0);
                func_8002D4C8(0x5EE, 0);
                if (D_sc04_018_801E7798 >= 0x2800) {
                    func_80029124(0x11A, 1);
                    D_sc04_018_801E7794 = 0x10D;
                    D_sc04_018_801E7778[1] = (s32)&D_sc04_018_801E9968;
                } else {
                    D_sc04_018_801E77A8++;
                    s = D_sc04_018_801B94A4[D_sc04_018_801E77A8];
                    D_sc04_018_801E779C = rand() % (9 - s * 2) + (s + 3);
                    func_80139A68(D_sc04_018_801E7798, 0);
                    D_sc04_018_801E7794 = 0x10A;
                }
            } else {
                D_sc04_018_801E7798 = 0;
                D_sc04_018_801E77A8 = 0;
                D_sc04_018_801E7794 = 0x10B;
                func_8002D4C8(0xC62, 0);
            }
            break;
        case 10:
        case 11:
            D_sc04_018_801E7794 = 0x103;
            break;
        }
        if (D_sc04_018_801E7794 < 0) {
            func_8017ADE8(10);
            if (D_sc04_018_801E7794 == -1) {
                func_8002D4C8(0x46F, 0);
            }
            w = &D_80115112;
            n = *w;
            D_sc04_018_801E7794 = 0;
            *w = n - 1;
        }
        if (D_sc04_018_801E7794 >= 0x100) {
            D_sc04_018_801E7794 &= 0xFF;
            D_sc04_018_801E7700 = D_sc04_018_801B946C[D_sc04_018_801E7794];
        }
    block:
        if (D_sc04_018_801E7700 != 0) {
            D_80115130 = D_sc04_018_801E7700;
            func_80139954();
            D_sc04_018_801E7704 = func_801376E8(D_sc04_018_801E7700, &D_sc04_018_801B9410);
        }
    } else {
        if (D_sc04_018_801E7700 != 0) {
            if (func_801399F0(D_sc04_018_801E7704) != 0) {
                D_sc04_018_801E7700 = 0;
            }
        } else if (GetPadPressedDir(0) & 0x50) {
            if (D_80115138[(u16)D_8011511A] == 8) {
                func_sc04_018_80189540(0xF, (s16)func_8014168C(D_8011511A));
            }
            if (D_sc04_018_801E7030 != 0) {
                func_80139954();
                D_800B9A15 = 0;
                func_8002D4C8(0x474, 0);
                n = D_80115112 + 1;
            } else {
                func_8002D4C8(0x46F, 0);
                n = D_80115112 - 1;
            }
            D_80115112 = n;
        }
    }
end:
    func_sc04_018_80188778();
    func_80137B80();
}

void func_sc04_018_801880EC(void) {
    u8 unused[8];
    s32 r;
    s32 n;
    s32 t;
    s16 c;
    u8 *m;

    D_801151D0 = D_801151C8[D_800B9A02];
    m = &D_80126B58;
    if (D_sc04_018_801E7708 != 0) {
        D_sc04_018_801E7708--;
        r = func_8014168C(D_8011511A);
        if ((s16)r != 3) {
            n = 8;
            t = 0x3E7;
        } else {
            n = 3;
            t = 0x18;
        }
        c = D_sc04_018_801E7708;
        if (c >= 0x3F) {
            if (D_sc04_018_801E770C != 0xFF) {
                D_sc04_018_801E770C += 0x10;
                if (D_sc04_018_801E770C >= 0x100) {
                    D_sc04_018_801E770C = 0xFF;
                }
            } else {
                D_sc04_018_801E7710 += 0x10;
                if (D_sc04_018_801E7710 >= 0x100) {
                    D_sc04_018_801E7710 = 0xFF;
                }
            }
        } else if (c < 0x20) {
            if (D_sc04_018_801E7710 != 0) {
                D_sc04_018_801E7710 -= 0x10;
                if (D_sc04_018_801E7710 < 0) {
                    D_sc04_018_801E7710 = 0;
                }
            } else {
                D_sc04_018_801E770C -= 0x10;
                if (D_sc04_018_801E770C < 0) {
                    D_sc04_018_801E770C = 0;
                }
            }
        } else if (c == 0x30) {
            func_8014BB24(m, D_sc04_018_801B9414[(s16)r], 1);
            func_8014B944(m, 0x1000000, 1);
            if ((s16)r == 2) {
                func_8014B2A8();
            }
            func_sc04_018_801EA0E4(n);
            func_8014BD24(m, t);
        }
        func_sc04_018_80189EA0();
        if (D_sc04_018_801E7708 == 0 && func_801621CC(n) != 0) {
            func_801622C4();
            func_80139954();
            D_800B9A15 = 0;
            D_80115112 = 4;
            return;
        }
    } else if (D_sc04_018_801E7700 == 0) {
        D_80115130 = D_sc04_018_801E7700 = (s32)&D_sc04_018_801EC970;
        func_80139954();
        D_sc04_018_801E7704 = func_801376E8(D_sc04_018_801E7700, &D_sc04_018_801B9410);
        if (D_sc04_018_801E7790 != 0) {
            func_8001AAA0(0x16);
        }
    } else if (func_801399F0(D_sc04_018_801E7704) != 0) {
        D_sc04_018_801E7700 = 0;
        func_8002D4C8(0x46F, 0);
        D_8011511A = 0;
        D_80115112 = 2;
    }
    func_sc04_018_80188778();
    func_80137B80();
}

s32 func_sc04_018_80188428(void) {
    s32 pad;
    s32 rep;
    s16 *q;
    s32 r;
    s32 idx;
    s16 kind;
    s16 moved;
    u8 *a;
    u8 *b;
    u8 c;
    u8 e;
    s16 d;
    s32 m;

    moved = 0;
    pad = GetPadPressedDirWide(0);
    if ((u16)pad != 0) {
        D_sc04_018_801E7700 = 0;
    }
    rep = GetPadHeldDirWide(0);
    q = &D_8011511A;
    r = func_8014168C(*q);
    idx = (u16)*q;
    kind = D_80115138[idx];
    if (pad & 0x40) {
        d = func_sc04_018_80189540(kind, (s16)r);
        if (d != 0) {
            return d;
        }
        return 0;
    }
    if (pad & 0x10) {
        
        if (kind < 7) {
            return -1;
        }
        func_8002D4C8(0x473, 0);
        if (kind != 13) {
            *q = 0;
        } else {
            *q = 1;
        }
        return 0;
    }
    a = (u8 *)&D_8011511A + 0x2E + idx * 2;
    b = (u8 *)&D_8011511A + 0x3E + idx * 2;
    if ((u16)rep != 0) {
        if ((u16)rep == D_80115120) {
            if (--D_80115122 == 0) {
                pad = rep & 0xF000;
                D_80115122 = 3;
            }
        } else {
            D_80115120 = rep;
            D_80115122 = 8;
        }
    } else {
        D_80115120 = 0;
        D_80115122 = 12;
    }
    if (pad & 0x1000) {
        a[0]--;
        moved = 1;
        if (a[0] >= 0x80) {
            if (kind < 10) {
                a[0] = b[0] - 1;
            } else {
                a[0] = 0;
                moved = 0;
            }
        }
    }
    if (pad & 0x4000) {
        c = a[0];
        a[0] = c + 1;
        moved = 1;
        if (a[0] >= b[0]) {
            if (kind < 10) {
                a[0] = 0;
            } else {
                a[0] = c;
                moved = 0;
            }
        }
    }
    if (kind == 7 || kind == 8) {
        if (pad & 0x8000) {
            a[1]--;
            moved = 1;
            if (a[1] >= 0x80) {
                a[1] = b[1] - 1;
            }
        }
        if (pad & 0x2000) {
            a[1]++;
            moved = 1;
            if (a[1] >= b[1]) {
                a[1] = 0;
            }
        }
    } else {
        e = a[0];
        m = (u16)D_8011511A;
        d = (s8)e - (s8)D_80115140[m];
        if (d >= 6) {
            D_80115140[m] = e - 5;
        } else if (d < 0) {
            D_80115140[m] = e;
        }
    }
    if (moved) {
        func_8002D4C8(0x45A, 0);
        if (kind == 12) {
            D_8011514E = 0;
            D_80115143 = 0;
            func_sc04_018_80186E24();
        }
    }
    return 0;
}

void func_sc04_018_80188778(void) {
    typedef struct { s32 w; } W1;
    u8 *q;
    u8 *p;
    s16 i;
    s16 n;
    s16 m;

    q = (u8 *)D_80115134;
    p = func_80137D08(D_801151D0, &D_800AE7B8[D_800B9A02], 2);
    if (D_sc04_018_801E7794 == 3 || D_sc04_018_801E7794 == 7) {
        p = func_800D27DC(2, p, &D_sc04_018_801B8AB4, 1, 0);
    } else {
        p = func_800D27DC(2, p, &D_sc04_018_801B8AA0, 1, 0);
    }
    p = func_8013AB54(p, D_800AE7BC[D_800B9A02].ot + 2, &D_sc04_018_801B9408, 0);
    if (D_80115126 == 3) {
        if ((u16)D_8011511A == 3) {
            p = func_sc04_018_801889B8(p, &D_sc04_018_801B9188, 3);
            n = 3;
        } else {
            n = 4;
        }
    } else {
        n = 3;
    }
    i = 0;
    if (n != 0) {
        m = n;
    top:
        if (((s16 *)D_80115158)[i] == 0) goto skip;
        p = func_sc04_018_801889B8(p, q, i);
        do {
        skip:
            i++;
            q += 0x20;
        } while (0);
        if (i < m) goto top;
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x02000000;
    ((PTag *)p)->addr = ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr;
    ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
    p += 0x28;
    ((W1 *)&D_801151D0)->w = (s32)p;
}

u8 *func_sc04_018_801889B8(u8 *p, u8 *t, s32 id0) {
    s16 id = id0;
    u8 buf[0x48];
    u32 col;
    s32 a;
    s16 f;
    s32 c;
    u8 d;
    s16 *xy;
    s16 i;
    s32 r;

    a = (u8)-((u16)D_8011511A != id);
    
    func_80024054(AF(t, s32, 0x14), buf);
    f = a;
    p = func_800D2650(p, buf, AF(t, s16, 0x10), AF(t, s16, 0x12), 1, (u8)a ? 0x585858 : 0x808080);
    
    p = (u8 *)func_sc04_018_80189214((Sprt *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_sc04_018_80188B84(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
        if (r == 0) break;
        if (r < 0) {
            func_80024054(r, buf);
            if (c) col -= 0x282828;
            p = func_800D2650(p, buf, xy[0], xy[1], 1, col);
        }
    }
    d = f;
    p = func_800D27DC(d != 0, p, AF(t, u8 *, 4), AF(t, s16, 0xC), 0);
    return func_800D29F8(d, p, AF(t, u8 *, 8), AF(t, s16, 0xE), 0);
}

s32 func_sc04_018_80188B84(s32 *tbl, s16 kind, s16 id, s16 idx, u32 *col) {
    s32 ret;
    s16 cnt;
    s16 j;
    s32 v;
    s32 a;
    u8 k;
    s32 ok;
    s32 t;

    *col = 0x808080;
    cnt = D_80115158[id].hi * (u8)D_80115158[id].lo;
    ret = 0;
    switch (kind) {
    case 10:
    case 11:
    case 13:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            ret = tbl[j];
        }
        break;
    case 12:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            ret = tbl[D_sc04_018_801E77B0[j]];
        }
        break;
    case 7:
    case 8:
        if (idx < 12) {
            k = func_800291B4(D_sc04_018_8018E2C8[idx]);
            if (k == 0) {
                return 1;
            }
            ret = D_8010EDE8[k].v;
        }
        break;
    case 14:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            v = D_sc04_018_801E77B8[j];
            a = v + 0x63;
            if (v < 0 || !(func_800291B4(a) & 0x40)) {
                ret = D_sc04_018_801B8F08;
            } else {
                ret = D_8010F468[v + 1].v;
                if (func_800291B4(a) & 0x20) {
                    *col = 0x804040;
                }
            }
        }
        break;
    default:
        t = idx;
        if (kind == 5) {
            ok = t < 4;
        } else {
            ok = t < 3;
        }
        if (ok) {
            ret = tbl[idx];
        }
        break;
    }
    return ret;
}

s32 func_sc04_018_80188E1C(s16 kind, s16 i) {
    s32 ret;
    u8 v;
    s32 n;
    s32 *p;

    ret = (s32)&D_801117EC;
    switch (kind) {
    case 10:
        if (D_80115126 != 5) {
            v = D_sc04_018_801E76F4[i];
            ret = D_sc04_018_8018E388[v];
        } else {
            ret = D_sc04_018_801B93D4[i];
        }
        break;
    case 7:
        v = func_800291B4(D_sc04_018_8018E2C8[i]) ;
        if (v == 0) {
            break;
        }
        if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
            ret = func_sc04_018_80189DDC((i & 3) + 6);
            func_80139A68(D_8010EDEE[v].v, 0);
        } else {
            ret = func_sc04_018_80189DDC(5);
        }
        break;
    case 8:
        if (D_80115148[0] != 0) {
            v = func_800291B4(D_sc04_018_8018E2C8[i]) ;
            if (v == 0) {
                break;
            }
            if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
                ret = func_sc04_018_80189DDC((i & 3) + 6);
                func_80139A68(D_8010EDEE[v].v, 0);
            } else {
                ret = func_sc04_018_80189DDC(5);
            }
        } else {
            v = func_800291B4(D_sc04_018_8018E2C8[i]) ;
            if (v != 0) {
                ret = D_sc04_018_8018E388[v];
            }
        }
        break;
    case 13:
        v = D_sc04_018_801E76FC[i];
        if (func_800291B4(v + 0x62) & 0x80) {
            ret = D_sc04_018_801E3D58[v];
        }
        break;
    case 14:
        v = D_sc04_018_801E77B8[i];
        if (v == 0xFF) {
            break;
        }
        v++;
        if ((func_800291B4(v + 0x62) & 0xF0) == 0xC0) {
            ret = func_sc04_018_80189DDC((i & 1) | 6);
            func_80139A68((s16)(D_800A6586[v] * 9 / 10), 0);
        } else if ((func_800291B4(v + 0x62) & 0xF0) == 0xE0) {
            ret = (s32)&D_sc04_018_801E8CEC;
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                ret = (s32)&D_sc04_018_801ECAA8;
                if (D_sc04_018_801E7774[i] == 0) {
                    ret = D_sc04_018_801B93F0[i];
                }
            } else {
                p = D_sc04_018_801E7774[i];
                if (p != 0) {
                    ret = (s32)&D_sc04_018_801ECB18;
                    if (p[1] != 0) {
                        ret = (s32)&D_sc04_018_801ECAEC;
                    }
                } else {
                    ret = (s32)&D_sc04_018_801ECAD4;
                }
            }
        } else if (D_sc04_018_801E7774[i] != 0) {
            ret = (s32)&D_sc04_018_801E9174;
        }
        break;
    default:
        ret = func_sc04_018_80189DDC(0);
        break;
    }
    return ret;
}

Sprt *func_sc04_018_80189214(Sprt *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
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
    if (kind < 10) {
        k = func_8014168C(id) * 2;
    } else {
        k = (D_80115148[id * 2] - D_80115140[id]) * 2;
    }
    uv = (u16 *)(k * 2 + (s32)tbl);
    p->x = uv[0] - 8;
    p->y = uv[1];
    p->h = 8;
    p->w = 8;
    ((PTag *)p)->addr = ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr;
    ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
    p++;
    if (kind >= 10) {
        cur = D_8011511A;
        if (cur == id && (D_80115116 & 8)) {
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    if (D_80115140[cur] == 0) {
                        continue;
                    }
                    p->v = 0x30;
                    p->y = D_sc04_018_801B8DDA - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc04_018_801B8DEE + 1;
                }
                p->tag = 0x04000000;
                p->u = 0x78;
                p->code = 0x64808080;
                p->clut = 0x4056;
                p->x = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 12;
                p->w = 8;
                p->h = 8;
                ((PTag *)p)->addr = ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr;
                ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
                p++;
            }
        }
    }
    return p;
}

extern s32 func_sc04_018_80189E14(s32 arg0);
extern void func_800291A0();
extern void func_800D128C();
extern u8 D_sc04_018_801E96C8;
extern s32 D_sc04_018_801E3E1C[];
extern u8 D_sc04_018_801E9664;
extern void func_80139A44();
extern s8 D_sc04_018_801B9420[];

s32 func_sc04_018_80189540(s32 a, s32 b) {
    u16 x;
    s16 kind;
    s16 id;
    s32 st;
    s32 i;
    s32 n;
    s32 k;
    s32 m;
    s32 c;
    s32 g;
    s32 e;
    s32 t;
    s16 tt;
    s16 j;
    s16 d;
    s16 v;
    s16 r;
    s32 *q;
    s32 *h;
    u16 *w;

    switch ((s16)a) {
    case 1:
    case 2:
    case 4:
    case 6:
        if ((s16)b == 2) {
            return -1;
        }
        func_8002D4C8(0x46F, 0);
        D_8011511A = b + 1;
        break;
    case 3:
        if ((s16)b == 2) {
            return -1;
        }
        D_8011511A = 2;
        func_8002D4C8(0x46F, 0);
        break;
    case 5:
        c = (s16)b;
        if (c == 1) {
            D_sc04_018_801E7030 = 1;
            func_8002D4C8(0x474, 0);
            return -1;
        }
        if (c == 3) {
            return -1;
        }
        func_8002D4C8(0x46F, 0);
        if (c != 0) {
            D_8011511A = b;
        } else {
            D_8011511A = 2;
        }
        break;
    case 12:
        D_8011511A = 3;
        *(s16 *)&D_8011514E = 0;
        func_8002D4C8(0x46F, 0);
        break;
    case 13:
        i = D_sc04_018_801E76FC[(s16)b];
        n = i + 0x62;
        st = (u8)func_800291B4(n);
        if ((st & 0xF0) != 0x80) {
            func_8002D4C8(0x472, 0);
            break;
        }
        if ((s16)func_sc04_018_80189E54(-D_800A6586[i]) != 0) {
            func_sc04_018_80189E14(3);
            func_8002D4C8(0x472, 0);
            break;
        }
        func_800291A0(n, st | 0x40);
        func_sc04_018_80186E24();
        d = (s8)D_80115140[12] - (s8)D_80115140[2];
        if (d >= 6) {
            D_80115140[2] = D_80115140[12] - 5;
        } else if (d < 0) {
            D_80115140[2] = D_80115140[12];
        }
        func_sc04_018_80189E14(1);
        func_8002D4C8(0x5EE, 0);
        break;
    case 14:
        k = (s16)b;
        i = (s16)(D_sc04_018_801E77B8[k] + 1);
        n = i + 0x62;
        x = (u8)func_800291B4(n);
        if ((x & 0xF0) != 0xC0) {
            func_8002D4C8(0x472, 0);
            break;
        }
        func_sc04_018_80189E54(D_800A6586[i] * 9 / 10);
        func_800291A0(n, x & 0xBF);
        func_sc04_018_80186E24();
        D_sc04_018_801E77B8[k] = 0xFF;
        func_sc04_018_80189E14(4);
        func_8002D4C8(0x5EE, 0);
        break;
    case 10:
        i = D_sc04_018_801E76F4[(s16)b];
        j = i;
        if (j < 0x6F) {
            if (j == 10 && func_800D0F8C(10) != 0) {
                func_8002D4C8(0x472, 0);
                break;
            }
            r = func_800D0EC4();
            if (r == 0) {
                func_sc04_018_80189E14(2);
                func_8002D4C8(0x45F, 0);
                break;
            }
            tt = D_sc04_018_801E778C;
            if (tt != 0) {
                if (D_80115126 == 0) {
                    v = D_8010EDEC[i].v * (100 - tt) / 100;
                } else {
                    v = D_8010EDEC[i].v - tt;
                }
            } else {
                v = D_8010EDEC[i].v;
            }
            if ((s16)func_sc04_018_80189E54(-v) != 0) {
                func_sc04_018_80189E14(3);
                func_8002D4C8(0x472, 3);
                break;
            }
            func_8002D4C8(0x5EE, 0);
            x = i;
            func_800D0F0C(r, x);
            if (x == 10) {
                func_sc04_018_80186E24();
            }
        } else {
            if ((s16)func_sc04_018_80189E54(-D_8010EDEC[j].v) != 0) {
                func_sc04_018_80189E14(3);
                func_8002D4C8(0x472, 0);
                break;
            }
            func_800D128C(i, 0);
        }
        func_sc04_018_80189E14(1);
        break;
    case 7:
    use_item:
        g = (s16)b + 0x2F;
        x = (u8)func_800291B4(g);
        if (x == 0) {
            func_8002D4C8(0x472, 0);
            break;
        }
        t = D_8010EDEE[x].v;
        if (t == 0 || D_80115126 != D_8010EDF2[x].v) {
            func_sc04_018_80189E14(5);
            func_8002D4C8(0x472, 0);
            break;
        }
        func_sc04_018_80189E54(t);
        func_800D0FE0(g);
        if (x == 10) {
            func_sc04_018_80186E24();
        }
        func_sc04_018_80189E14(4);
        func_8002D4C8(0x5EE, 0);
        break;
    case 8:
        if (D_80115148[0] != 0) {
            goto use_item; /* backward into case 7, as the original branches (LuciDin's ruling, 27 Oct: accepted) */
        }
        m = (u8)func_800291B4((s16)b + 0x2F);
        if (m == 0) {
            func_8002D4C8(0x472, 0);
            break;
        }
        x = D_8010EDEC[m].v;
        if ((s16)x >= 0) {
            D_sc04_018_801E7700 = (s32)&D_sc04_018_801E96C8;
            func_8002D4C8(0x472, 0);
            break;
        }
        if (x & 0x4000) {
            t = D_sc04_018_801E3CEC[m];
        } else {
            t = D_sc04_018_801E3E1C[(D_8010EDF1[m].v - 0x14) >> 1];
        }
        D_sc04_018_801E7700 = (s32)&D_sc04_018_801E9664;
        func_80139A44(t, 0);
        w = &D_80115112;
        *w += 1;
        break;
    case 15:
        n = (s16)b + 0x2F;
        e = (u8)func_800291B4(n);
        x = D_8010EDEC[e].v;
        kind = D_8010EDF1[e].v;
        if (x & 0x4000) {
            id = kind;
            func_80029124(id, 1);
            func_800D0FE0(n);
            D_sc04_018_801E7030 = kind - 0x1C;
            if (id == 0x1F) {
                func_80029514(100);
                func_80029124(0xEB, 1);
                func_80029124(0x91, 1);
                func_800291A0(0xCE, 1);
            }
        } else {
            func_800D0F0C(n, kind);
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                m = (s16)b;
                if (D_sc04_018_801E7774[m] != 0) {
                    func_8002D4C8(0x472, 0);
                    break;
                }
                if ((s16)func_sc04_018_80189E54(D_sc04_018_801B9420[m]) != 0) {
                    func_sc04_018_80189E14(3);
                    func_8002D4C8(0x472, 0);
                    break;
                }
                D_sc04_018_801E7700 = (s32)&D_sc04_018_801EC928;
                D_80115112++;
                func_80139A68((s16)(b + 1), 0);
                func_8002D4C8(0x5EE, 0);
                break;
            }
            h = D_sc04_018_801E7774[(s16)b];
            if (h == 0 || h[1] == 0) {
                func_8002D4C8(0x472, 0);
                break;
            }
            D_sc04_018_801E7700 = h[1];
            if (h[3] != 0) {
                ((void (*)())h[3])();
            }
            func_8017ADE8(D_sc04_018_801E7774[(s16)b][2]);
            func_8002D4C8(0x45D, 0);
            D_80115112++;
            break;
        }
        q = D_sc04_018_801E7774[(s16)b];
        if (q != 0) {
            D_sc04_018_801E7700 = q[1];
            func_8017ADE8(D_sc04_018_801E7774[(s16)b][2]);
            D_sc04_018_801E7794 = 0;
            if (D_sc04_018_801E7700 == (s32)&D_sc04_018_801E92E0) {
                D_sc04_018_801E7794 = 1;
            }
            if (D_sc04_018_801E7700 == (s32)&D_sc04_018_801E96A4) {
                D_sc04_018_801E7794 = 2;
            }
            func_8002D4C8(0x45D, 0);
            D_80115112++;
            break;
        }
        func_8002D4C8(0x472, 0);
        break;
    }
    return 0;
}

s32 func_sc04_018_80189DDC(s32 arg0) {
    return D_sc04_018_801B92E4[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_sc04_018_80189E14(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc04_018_801B92E4[((D_80115126 * 0xA) + (s16) arg0)];
    D_sc04_018_801E7700 = temp_v0;
    return temp_v0;
}

s32 func_sc04_018_80189E54(s32 arg0) {
    s32 v;
    s32 ret;

    v = D_80078E8C + arg0;
    if (v > 99999) {
        v = 99999;
    }
    if (v >= 0) {
        D_80078E8C = v;
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}

void func_sc04_018_80189EA0(void) {
    u8 *p;
    u8 *q;

    p = (u8 *)((S32R *)&D_801151D0)->v;
    ((PTag *)p)->len = 1;
    AF(p, u32, 4) = 0xE1000015;
    ((PTag *)p)->addr = ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)p;
    p += 8;
    ((PolyG4 *)p)->tag = 0x08000000;
    ((PolyG4 *)p)->code = 0x3A;
    ((PolyG4 *)p)->x0 = ((PolyG4 *)p)->x2 = -0xA0;
    ((PolyG4 *)p)->x1 = ((PolyG4 *)p)->x3 = 0xA0;
    ((PolyG4 *)p)->r0 = ((PolyG4 *)p)->r1 = ((PolyG4 *)p)->g0 = ((PolyG4 *)p)->g1 = ((PolyG4 *)p)->b0 = ((PolyG4 *)p)->b1 = D_sc04_018_801E770C;
    ((PolyG4 *)p)->r2 = ((PolyG4 *)p)->r3 = ((PolyG4 *)p)->g2 = ((PolyG4 *)p)->g3 = ((PolyG4 *)p)->b2 = ((PolyG4 *)p)->b3 = D_sc04_018_801E7710;
    ((PolyG4 *)p)->y0 = ((PolyG4 *)p)->y1 = -0x78;
    ((PolyG4 *)p)->y2 = ((PolyG4 *)p)->y3 = 0x78;
    ((PTag *)p)->addr = ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)p;
    p = q = p + 0x24;
    ((PTag *)q)->len = 1;
    AF(q, u32, 4) = 0xE1000240;
    ((PTag *)q)->addr = ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)q;
    p += 8;
    ((S32R *)&D_801151D0)->v = (s32)p;
}

void func_sc04_018_8018A0B4(void) {
    s32 i;

    for (i = 0; i < 6; i++) {
        D_sc04_018_801E77E8[i] = func_8001D074(0x3E, 0x7D);
        AF(D_sc04_018_801E7800 + i * 0x40, s32, 4) = 0;
        func_800233CC(D_sc04_018_801E7800 + i * 0x40, 0x30);
        func_8001CD50(D_sc04_018_801E77E8[i], D_sc04_018_801E7800 + i * 0x40);
        AF(D_sc04_018_801E77E8[i], s32, 4) |= 0xD0000040;
    }
}

s32 func_sc04_018_8018A168(s32 arg0, s32 arg1) {
    s32 v1 = D_sc04_018_801E7984;

    if (arg1 < arg0) {
        if (v1 < arg1) {
            v1 += 0x5A0;
        }
        arg1 += 0x5A0;
    }
    if (arg0 >= v1 || v1 >= arg1) {
        return -1;
    }
    arg0 = v1 - arg0;
    if (arg0 < 0x10) {
        return arg0 * 2;
    }
    arg0 = arg1 - v1;
    if (arg0 < 0x10) {
        return arg0 * 2;
    }
    return 0x1F;
}

void func_sc04_018_8018A1D0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc04_018_801E0498[arg0]();
    if (temp_v0 != -1) {
        func_sc04_018_8018A224(D_sc04_018_801E7980, temp_v0);
    }
}

void func_sc04_018_8018A224(SV *arg0, s32 arg1) {
    CV4 c;
    s32 m;
    s32 t;
    s32 b;

    b = D_sc04_018_801E04E0[D_800B99DA & 0xF];
    if (b == 0) {
        m = 0x60;
    } else {
        m = 0x50;
    }
    arg1++;
    t = (m * arg1) / 32;
    b = t / 2;
    c.r = t;
    c.g = t;
    c.b = b;
    c.cd = 0;
    while (arg0->pad != -1) {
        func_sc04_018_8018A2E0(arg0, *(s32 *)&c);
        arg0++;
    }
}

void func_sc04_018_8018A2E0(u8 *o, s32 col) {
    u8 unused[0x20];
    SV8 v[4];
    SV8 w[4];
    s32 sxy[8];
    SV8 idx;
    s32 p;
    s32 otz;
    s32 flag;
    u8 n;
    s32 k;
    s32 i;
    s32 j;
    u8 *prim;
    SV8 *t;
    SV8 *u;

    func_8012E32C();
    k = AF(o, u16, 6) & 0xFF;
    if ((AF(o, u16, 6) & 0xF00) == 0x200) {
        func_sc04_018_8018A6C8(o, col);
        return;
    }
    n = k;
    t = D_sc04_018_801E00B0[k];
    for (j = 0; j < 4; j++, t++) {
        v[j].x = AF(o, s16, 0) + t->x;
        v[j].y = AF(o, s16, 2) + t->y;
        v[j].z = AF(o, s16, 4) + t->z;
    }
    if (RotNclip4(&v[0], &v[1], &v[2], &v[3], &sxy[0], &sxy[1], &sxy[2], &sxy[3], &p, &otz, &flag) <= 0) {
        return;
    }
    otz -= 0x10;
    if (otz < 0) {
        return;
    }
    if (otz >= 0x1000) {
        return;
    }
    u = D_sc04_018_801E0130[n];
    for (j = 0; j < 4; j++, u++) {
        w[j].x = AF(o, s16, 0) + u->x;
        w[j].y = AF(o, s16, 2) + u->y;
        w[j].z = AF(o, s16, 4) + u->z;
    }
    RotTransPers4(&w[0], &w[1], &w[2], &w[3], &sxy[4], &sxy[5], &sxy[6], &sxy[7], &p, &flag);
    prim = AllocPrim(0xA8);
    for (i = 0; i < 4; i++) {
        idx.x = D_sc04_018_801E01D0[i].x;
        idx.y = D_sc04_018_801E01D0[i].y;
        idx.z = D_sc04_018_801E01D0[i].z;
        idx.pad = D_sc04_018_801E01D0[i].pad;
        AF(prim, s32, 4) = idx.x < 4 ? col : 0;
        AF(prim, s32, 0xC) = idx.y < 4 ? col : 0;
        AF(prim, s32, 0x14) = idx.z < 4 ? col : 0;
        AF(prim, s32, 0x1C) = idx.pad < 4 ? col : 0;
        AF(prim, u8, 7) = 0x3A;
        AF(prim, s32, 0) = 0x08000000;
        AF(prim, s32, 8) = sxy[idx.x];
        AF(prim, s32, 0x10) = sxy[idx.y];
        AF(prim, s32, 0x18) = sxy[idx.z];
        AF(prim, s32, 0x20) = sxy[idx.pad];
        AddPrim(D_800A651C[D_800B9A02].ot + otz, prim);
        prim += 0x24;
    }
    AF(prim, s32, 4) = col;
    AF(prim, u8, 7) = 0x2A;
    AF(prim, s32, 0) = 0x05000000;
    AF(prim, s32, 8) = sxy[0];
    AF(prim, s32, 0xC) = sxy[1];
    AF(prim, s32, 0x10) = sxy[2];
    AF(prim, s32, 0x14) = sxy[3];
    AddPrim(D_800A651C[D_800B9A02].ot + otz, prim);
    func_8012E28C(otz, 1);
}

void func_sc04_018_8018A6C8(s32 arg0, s32 arg1) {
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = (u16) AF(arg0, u16, 6) >> 0xC;
    temp_a2 = D_sc04_018_801E77E8[temp_v1];
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) & 0x7FFFFFFF);
    (*(s32 *)((u8 *)D_sc04_018_801E7800 + ((temp_v1 << 6)) * 1)) = arg1;
    AF(temp_a2, u16, 8) = (u16) AF(arg0, u16, 0);
    AF(temp_a2, u16, 0xA) = (u16) AF(arg0, u16, 2);
    AF(temp_a2, u16, 0xC) = (u16) AF(arg0, u16, 4);
    AF(temp_a2, s16, 0x12) = (s16) ((AF(arg0, u16, 6) & 0xF) << 0xA);
}

void func_sc04_018_8018A740(u8 *arg0) {
    D_sc04_018_801E04F0[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018A77C(u8 *o) {
    s32 i;

    if (func_sc04_018_80184BAC(7, 0x13) == 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        if (D_sc04_018_801E0500[AF(o, s16, 0x100)][i] == AF(o, s32, 0x1C)) {
            func_8012C658(0x140, AF(o, u8, 0xFC) | ((AF(o, s16, 0xFE) << 8) & 0xFF00), o);
            break;
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = 0x50;
        AF(o, u16, 0xFE) = (AF(o, u16, 0xFE) + (rand() & 0xF) - 7) & 0xFF;
        AF(o, u16, 0xFC) = (AF(o, u16, 0xFC) + (rand() & 0xF) - 7) & 0xFF;
        AF(o, s16, 0x100) = rand() % 7;
    }
}

void func_sc04_018_8018A898(u8 *arg0) {
    D_sc04_018_801E051C[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018A8D4(u8 *arg0) {
    D_sc04_018_801E0524[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018A910(u8 *arg0) {
    D_sc04_018_801E0534[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018A94C(u8 *arg0) {
    D_sc04_018_801E0544[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018A988(void) {
}

void func_sc04_018_8018A990(u8 *o) {
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, s32, 0x1C) = 0x40;
            AF(o, u16, 0x34)++;
            v = rand() & 0x3FFF;
            v += 0x7800;
            AF(o, s32, 0xE0) = (rand() & 1) ? v : -v;
            AF(o, s32, 0xE4) = 0;
        }
        break;
    case 1:
        AF(o, s32, 0xDC) += AF(o, s32, 0xE4) += AF(o, s32, 0xE0);
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xDE);
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            AF(o, s32, 0x1C) = (rand() & 0x3F) + 0x40;
        }
        break;
    case 2:
        AF(o, s32, 0xDC) += AF(o, s32, 0xE4);
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xDE);
        if (func_8012BEE8(o) != 0) {
            AF(o, s32, 0x1C) = 0x40;
            AF(o, u16, 0x34)++;
            AF(o, s32, 0xE0) = -AF(o, s32, 0xE0);
        }
        break;
    case 3:
        AF(o, s32, 0xDC) += AF(o, s32, 0xE4) += AF(o, s32, 0xE0);
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xDE);
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0xFF) + 0x40;
        }
        break;
    }
}

void func_sc04_018_8018AB3C(u8 *arg0) {
    D_sc04_018_801E0554[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018AB78(void) {
    u8 *b = &D_80126B58;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 d;
    s32 a;
    s32 y;

    if (D_800B99DA & 1) {
        return;
    }
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    if (RotTransPers(&D_sc04_018_801E055C, &sxy, &p, &flag) <= 0 || flag < 0) {
        func_8002D4C8(4, 0x7E6);
        return;
    }
    ((s16 *)&sxy)[0] += 0xA0;
    if (((s16 *)&sxy)[0] < 0) {
        ((s16 *)&sxy)[0] = 0;
    } else if (((s16 *)&sxy)[0] > 0x140) {
        ((s16 *)&sxy)[0] = 0x140;
    }
    x = ((s16 *)&sxy)[0] * 15 / 320;
    d = func_80013450(b + 4, &D_sc04_018_801E055C);
    if (d >= 0x240) {
        d = 0x23F;
    }
    a = ((0x23F - d) * 0x7F / 0x240) & 0x7F;
    y = ((x << 8) & 0xF00) | 0x3000;
    func_8002D4C8(0x7E6, y | a);
}

void func_sc04_018_8018ACD4(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E01F0;
    func_sc04_018_8018A168(0x474, 0x4B0);
}

void func_sc04_018_8018AD08(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0228;
    func_sc04_018_8018A168(0x474, 0x4EC);
}

void func_sc04_018_8018AD3C(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0260;
    func_sc04_018_8018A168(0x474, 0x4B0);
}

void func_sc04_018_8018AD70(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0288;
    func_sc04_018_8018A168(0x474, 0x4B0);
}

void func_sc04_018_8018ADA4(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E02C0;
    func_sc04_018_8018A168(0x474, 0x528);
}

s32 func_sc04_018_8018ADD8(void) {
    s32 ret;

    D_sc04_018_801E7980 = &D_sc04_018_801E02F8;
    ret = func_sc04_018_8018A168(0x168, 0x1A4);
    if (ret == -1) {
        ret = func_sc04_018_8018A168(0x474, 0x4EC);
    }
    if ((u32) (func_80029504() - 0xC8) < 0xDCU) {
        return -1;
    }
    return ret;
}

void func_sc04_018_8018AE4C(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0338;
    func_sc04_018_8018A168(0x474, 0x1A4);
}

s32 func_sc04_018_8018AE80(s32 arg0) {
    D_sc04_018_801E7980 = (s32 *) &D_sc04_018_801E0370;
    if ((u32) (func_80029504(arg0) - 0x64) < 0x1F4U) {
        return -1;
    }
    return ((s32 (*)()) func_sc04_018_8018A168)(0x96, 0xF0);
}

void func_sc04_018_8018AECC(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0390;
    func_sc04_018_8018A168(0x12C, 0x1A4);
}

void func_sc04_018_8018AF00(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E03E0;
    func_sc04_018_8018A168(0x474, 0x4B0);
}

void func_sc04_018_8018AF34(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0440;
    func_sc04_018_8018A168(0x474, 0x4B0);
}

s32 func_sc04_018_8018AF68(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0470;
    if ((u32) (func_80029504() - 0x64) < 0x1F4U) {
        return -1;
    }
    return ((s32 (*)())func_sc04_018_8018A168)(0x474, 0x78);
}

void func_sc04_018_8018AFB4(void) {
    D_sc04_018_801E7980 = &D_sc04_018_801E0488;
    func_sc04_018_8018A168(0x564, 0x1A4);
}

s32 func_sc04_018_8018AFE8(void) {
    return -1;
}

void func_sc04_018_8018AFF0(void) {
    s32 i;

    D_sc04_018_801E7984 = (D_80078EB1 * 0x3C) + D_80078EB0;
    for (i = 0; i < 6; i++) {
        AF(((void **)&D_sc04_018_801E77E8)[i], s32, 4) |= 0x80000000;
    }
    for (i = 2; i < 0x12; i++) {
        func_sc04_018_8018A1D0(i);
    }
    func_sc04_018_8018AB78();
    if (D_sc04_018_801E799C != 0) {
        D_sc04_018_801E799C -= 1;
    }
}

void func_sc04_018_8018B0AC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    func_8012C588(0x13F, 0);
    func_8012C588(0x66, 0);
    func_8012C588(0x65, 0);
    func_8012C588(0x14C, 0);
    func_8012C588(0x335, 0);
    func_8012C588(0x3D9, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_sc04_018_8018A0B4();
}

void func_sc04_018_8018B158(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_018_801E04F8, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

void func_sc04_018_8018B19C(u8 *o) {
    s32 v;
    u8 *w;
    u8 *p;
    s32 t;

    w = (u8 *)func_8012C194();
    if (w == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0xCC) = w;
    func_8001CC3C(w, 0, 0, 0);
    AF(w, u8 *, 0x20) = &D_800D387C;
    AF(w, u8, 0x27) = 0x9C;
    AF(w, s16, 0x18) = AF(w, s16, 0x1A) = 0x3000;
    AF(w, s32, 4) |= 0x50000000;
    func_80128EA8(w, o + 0xD0, &D_800D3888);
    p = AF(o, u8 *, 0xCC);
    AF(p, s16, 8) = AF(o, s16, 6);
    AF(p, s16, 0xA) = AF(o, s16, 0xA);
    AF(p, s16, 0xC) = AF(o, s16, 0xE);
    t = AF(o, s16, 0x70);
    AF(o, s32, 0x1C) = 0x5A;
    AF(o, s16, 2) = 1;
    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x14) = 0xFFF80000;
    AF(o, s32, 0x18) = 0;
    func_8012B0B4(&v, (t & 0xFF00) >> 4, (t & 0xFF) << 6);
    AF(o, s32, 0x44) = (s16)v;
    AF(o, s32, 0x48) = 0;
    AF(o, s32, 0x4C) = v >> 16;
    {
        u8 unused[8];
    }
}

void func_sc04_018_8018B2B8(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;
    void *temp_v1;

    temp_s1 = AF(arg0, void *, 0xCC);
    func_8012AD80((s32) arg0, arg1, arg2);
    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80128ED8((s32) temp_s1, (s32) (arg0 + 0xD0));
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_80016714((s32) temp_s1, 0x38);
        func_8012C218((s32) arg0);
    }
}

void func_sc04_018_8018B354(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 8);
    func_8012B414();
}

void func_sc04_018_8018B388(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_018_801B6418);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc04_018_801E052C);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_018_8018B400(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) ((u32) rsin(D_800B99DA * 0x30, arg1, arg2, arg3) >> 5);
}

void func_sc04_018_8018B448(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (func_80029504(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_018_801B60B0);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc04_018_801E053C);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_018_8018B4EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_018_801B65B0);
    func_8012E8E0(arg0, (s32) &D_sc04_018_801E054C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_sc04_018_8018B564(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_018_8018B570(u8 *arg0) {
    D_sc04_018_801E056C[AF(arg0, u16, 2)]();
}

s32 func_sc04_018_8018B5AC()
{
    if (func_sc04_018_80184D00() == 3) {
        return 1;
    }
    if (func_sc04_018_80184E44() == 1 || D_80078EBA == 2) {
        return 1;
    }
    return func_sc04_018_80184BAC(0xC, 0x14) == 0;
}

void func_sc04_018_8018B614(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc04_018_8018B5AC((s32) arg0, arg1) == 1) {
        func_sc04_018_8018B564((s32) arg0);
    }
}

void func_sc04_018_8018B660(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_8018B5AC() == 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_018_8018B6A0(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xD);
    v = func_sc04_018_8018B5AC();
    if (v != 0) {
        v = 2;
    } else {
        v = 1;
    }
    AF(arg0, s16, 2) = v;
}

void func_sc04_018_8018B6E8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_018_8018B6F4(u8 *arg0) {
    D_sc04_018_801E0580[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018B730(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_018_80184BAC(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_sc04_018_8018B6E8((s32) arg0);
    }
}

void func_sc04_018_8018B798(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_018_80184BAC(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_018_8018B7FC(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_sc04_018_80184BAC(7, 0x13) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_sc04_018_8018B868(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_018_8018B874(u8 *arg0) {
    D_sc04_018_801E0594[AF(arg0, u16, 2)]();
}

s32 func_sc04_018_8018B8B0()
{
    if ((u32)(func_80029504() - 0x12C) < 0x12CU && (u8)func_80029178(0xFA)) {
        return 0;
    }
    return func_sc04_018_80184BAC(0xA, 0x14) != 0;
}

void func_sc04_018_8018B904(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc04_018_8018B8B0((s32) arg0, arg1) == 0) {
        func_sc04_018_8018B868((s32) arg0);
    }
}

void func_sc04_018_8018B948(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_8018B8B0() != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_018_8018B988(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xC);
    v = func_sc04_018_8018B8B0();
    if (v != 0) {
        v = 1;
    } else {
        v = 2;
    }
    AF(arg0, s16, 2) = v;
}

void func_sc04_018_8018B9D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_018_8018B9DC(u8 *arg0) {
    D_sc04_018_801E05A8[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018BA18(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_018_80184BAC(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_sc04_018_8018B9D0((s32) arg0);
    }
}

void func_sc04_018_8018BA80(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_018_80184BAC(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_018_8018BAE4(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_sc04_018_80184BAC(0xB, 0x10) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

s32 func_sc04_018_8018BB50(void) {
    s32 t;

    if (D_80078EBA == 6) {
        if (func_sc04_018_80184BAC(0, 0xC) == 0) {
            return 0;
        }
    } else if (D_80078EBA == 0) {
        if (func_sc04_018_80184BAC(0, 0xC) != 0) {
            return 0;
        }
    }
    t = func_80029504();
    if (t < 0xC8) {
        switch (func_sc04_018_80184D00()) {
        case 0:
        case 1:
        case 2:
            return func_sc04_018_80184BAC(2, 0x12) == 0;
        case 3:
        case 4:
            return 0;
        }
    } else if (t < 0x258) {
        return 0;
    } else if (t < 0x384) {
        return func_sc04_018_80184BAC(2, 0x12) == 0;
    } else {
        if (func_sc04_018_80184BAC(2, 0x12) != 0) {
            return 0;
        }
        return func_sc04_018_80184E44() != 1;
    }
}

void func_sc04_018_8018BC3C(u8 *arg0) {
    D_sc04_018_801E05B4[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018BC78(u8 *arg0) {
    if (func_sc04_018_8018BB50() != 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
        D_sc04_018_801E7A96 = 1;
        return;
    }
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    D_sc04_018_801E7A96 = 0;
}

void func_sc04_018_8018BCDC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xE);
    if (func_sc04_018_8018BB50() != 0) {
        AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 1;
        D_sc04_018_801E7A96 = 1;
        return;
    }
    AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 2;
    D_sc04_018_801E7A96 = 0;
}

void func_sc04_018_8018BD58(u8 *arg0) {
    D_sc04_018_801E05BC[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018BD94(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc04_018_8018BDA4(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xA);
}

s32 func_sc04_018_8018BDE0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E05C4);
}

s32 func_sc04_018_8018BE0C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E05C4);
}

void func_sc04_018_8018BE38(u8 *arg0) {
    D_sc04_018_801E0690[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018BE74(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) < 0xC8) {
        AF(arg0, s32, 0xE4) = D_sc04_018_801E05E0[func_sc04_018_80184D00()];
        return;
    }
    AF(arg0, s32, 0xE4) = D_sc04_018_801E05F4[func_sc04_018_80184DD0()];
}

s32 func_sc04_018_8018BEE8(void) {
    return func_8014CB1C() != 0;
}

void func_sc04_018_8018BF08(void) {
    func_8014B2A8();
    func_8002D4C8(0x464, 0);
}

void func_sc04_018_8018BF34(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801E0648);
}

void func_sc04_018_8018BF64(u8 *arg0) {
    s32 v;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(6, 0x12) != 0) {
        v = 1;
    } else {
        v = (func_sc04_018_80184BAC(0x12, 0x15) != 0) * 2;
    }
    if (v != 0) {
        func_sc04_018_8018BDE0((s32) arg0);
    }
}

void func_sc04_018_8018BFCC(u8 *arg0) {
    s32 v;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc04_018_80184BAC(6, 0x12) != 0) {
        v = 1;
    } else {
        v = (func_sc04_018_80184BAC(0x12, 0x15) != 0) * 2;
    }
    if (v != 1) {
        func_sc04_018_8018BE0C((s32) arg0);
    }
}

void func_sc04_018_8018C038(u8 *arg0) {
    s32 var_v1;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_018_80184BAC(6, 0x12) != 0) {
        var_v1 = 1;
    } else if (func_sc04_018_80184BAC(0x12, 0x15) != 0) {
        var_v1 = 2;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 2) {
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_801E05C4);
    }
}

void func_sc04_018_8018C0B0(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, s16, 2) = 3;
        func_sc04_018_80184CB8((s32) arg0, (s32) &D_sc04_018_801E05C4);
    }
}

void func_sc04_018_8018C114(u8 *arg0) {
    extern s32 *func_sc04_018_8018C1E0();
    s32 v;

    if (func_sc04_018_801847BC(arg0, (s32) &D_sc04_018_801E05CC) != 0) {
        if (func_sc04_018_80184BAC(6, 0x12) != 0) {
            v = 1;
        } else {
            v = (func_sc04_018_80184BAC(0x12, 0x15) != 0) * 2;
        }
        switch (v) {
        case 0:
            AF(arg0, s16, 2) = 1;
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E05C4);
            break;
        case 1:
            AF(arg0, s16, 2) = 2;
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E05C4);
            break;
        case 2:
            AF(arg0, s16, 2) = 3;
            func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E05C4);
            break;
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) func_sc04_018_8018C1E0);
    }
}

s32 *func_sc04_018_8018C1E0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) == 3) {
    } else {
        return NULL;
    }
    if (func_sc04_018_801848DC(arg0) == 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 4;
    func_80178BF8();
    return &func_80172710;
}

s32 func_sc04_018_8018C24C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E06A8);
}

void func_sc04_018_8018C278(u8 *arg0) {
    extern s32 *func_sc04_018_8018C3F0();
    s32 t;
    s32 r;

    t = func_8012C1B8();
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), 0);
    r = func_80029504();
    if (r < 0xC8) {
        if (func_sc04_018_80184D00() == 3) {
            AF(arg0, s16, 2) = 2;
        } else if (func_sc04_018_80184BAC(0xA, 0x10) != 0) {
            AF(arg0, s16, 2) = 1;
        } else {
            AF(arg0, s16, 2) = 2;
        }
    } else if (r < 0x258) {
        func_8012CAE4(arg0);
        return;
    } else if (r < 0x384) {
        if (r < 0x276) {
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
    } else {
        AF(arg0, s16, 2) = 1;
    }
    func_sc04_018_80184CB8(arg0, &D_sc04_018_801E06A8);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, func_sc04_018_8018C3F0);
}

void func_sc04_018_8018C368(u8 *arg0) {
    D_sc04_018_801E077C[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018C3A4(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_018_801E070C);
}

s32 func_sc04_018_8018C3D0(void) {
    return func_800D0EC4() == 0;
}

s32 *func_sc04_018_8018C3F0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x6401) {
        return NULL;
    }
    if ((s16) D_80126B5E >= 0x281) {
        return NULL;
    }
    if ((s16) D_80126B66 < -0x380) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

void func_sc04_018_8018C494(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_sc04_018_80184D00();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_sc04_018_80184E44();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
            goto block_7;
        }
block_6:
        if (func_sc04_018_80184BAC(0xA, 0x10) == 0) {
block_7:
            func_sc04_018_8018C24C(arg0);
        }
    }
}

void func_sc04_018_8018C518(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_sc04_018_80184D00();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_sc04_018_80184E44();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
        } else {
block_6:
            if (func_sc04_018_80184BAC(0xA, 0x10) != 0) {
                goto block_7;
            }
        }
    } else {
block_7:
        AF(arg0, s16, 2) = 1;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E06A8);
    }
}

void func_sc04_018_8018C5AC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_018_80184CB8(arg0, (s32) &D_sc04_018_801E06A8);
    }
}

void func_sc04_018_8018C5FC(u8 *arg0) {
    D_sc04_018_801E3AF4[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018C638(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_018_801E39E0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc04_018_8018D540);
        func_801788B8(arg0, (s32) &func_sc04_018_8018C730);
    }
}

void func_sc04_018_8018C69C(void) {
}

void func_sc04_018_8018C6A4(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc04_018_801E3AD0[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_sc04_018_8018C6F0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc04_018_8018C730(u8 *arg0) {
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

void func_sc04_018_8018C78C(u8 *arg0) {
    D_sc04_018_801E3BA4[AF(arg0, u16, 2)]();
}

void func_sc04_018_8018C7C8(s32 arg0, s32 arg1, s32 arg2) {
    func_8012E8E0(arg0, (s32) &D_sc04_018_801E3B9C, arg2);
}

void func_sc04_018_8018C7F0(u8 *arg0) {
    s32 v;
    s32 r;

    v = func_80029504(arg0);
    if (v < 0xC8) goto fail;
    if (v < 0x258) {
        if (!(u8)func_80029178(0x106)) goto fail;
    } else if (v >= 0x276) {
        goto fail;
    }
    r = func_8012C1B8();
    AF(arg0, s32, 0x20) = r;
    if (r == 0) {
fail:
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(r, &D_sc04_018_801DE748);
    func_8012E8E0(arg0, &D_sc04_018_801E3B9C);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s16, 2) = 1;
}

s32 func_sc04_018_8018C8A8(void) {
    s32 r;

    if ((s16)D_80126B5E < 0x400) {
        r = 0;
    } else if ((s16)D_80126B5E >= 0x501) {
        r = 0;
    } else if ((s16)D_80126B66 < 0x580) {
        r = 0;
    } else if ((s16)D_80126B66 >= 0x601) {
        r = 0;
    } else {
        r = (s16)D_80126B62 >= -0x200;
    }
    return r;
}

s32 func_sc04_018_8018C90C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    return func_8012B2CC(arg0);
}

s32 func_sc04_018_8018C93C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    return func_8012B2CC(arg0);
}

void func_sc04_018_8018C96C(u8 *o) {
    u8 *r;
    s32 s1;
    r = func_8012C1B8();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, AF(o, s16, 0x70) == 0 ? &D_sc04_018_801DE040 : &D_sc04_018_801DE130);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_sc04_018_801E3BBC[AF(o, s16, 0x70)] | 0x40000000;
    func_8012E8E0(o, D_sc04_018_801E3BAC[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = func_80029504();
    if ((u8)func_80029178(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            func_801788B8(o, func_sc04_018_8018CB18);
        } else {
            AF(o, s16, 0x2) = 3;
            AF(o, s16, 0x34) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
            AF(o, s32, 0x1C) = 0x30;
        }
    } else {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 2;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = -0x600;
            func_8012B2CC(o);
        } else {
            AF(o, s16, 0x2) = 4;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
            func_8012B2CC(o);
        }
    }
}

void func_sc04_018_8018CADC(u8 *arg0) {
    D_sc04_018_801E3CEC[AF(arg0, u16, 2)]();
}

s32 *func_sc04_018_8018CB18(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc04_018_8018C8A8() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc04_018_8018CB94(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    func_8002D4C8(0x7A0, 0);
    func_80029124(0xF6, 1);
    func_800D0F4C(0x59);
    temp_v0 = func_8012E57C(0x1F2, 1);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

s32 func_sc04_018_8018CC04(void) {
    return D_sc04_018_801E79A0 == 2;
}

void func_sc04_018_8018CC1C(void) {
    func_8002D4C8(0x7E0, 0);
}

void func_sc04_018_8018CC40(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            func_80178CBC(o, &D_sc04_018_801E3C2C);
            AF(o, s16, 0x34) = 2;
        } else {
            func_80178CBC(o, &D_sc04_018_801E3C44);
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 2:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
        }
        break;
    case 3:
        func_80178970(o);
        AF(o, s32, 0x1C) = 0;
        break;
    case 4:
        func_80178970(o);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x12) -= 0x20;
        AF(o, s32, 0x1C)++;
        if (AF(o, s32, 0x1C) >= 0x30) {
            AF(o, s16, 0x34) = 5;
        }
        break;
    case 5:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            func_sc04_018_8018C90C(o);
        }
        break;
    }
}

void func_sc04_018_8018CD74(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc04_018_8018C93C((s32) arg0);
        }
    }
}

void func_sc04_018_8018CDDC(void) {
}

void func_sc04_018_8018CDE4(void) {
}

void func_sc04_018_8018CDEC(void) {
    s16 i;
    s32 id;
    u8 k;
    s16 v;
    s32 t;
    u16 b;

    AF(D_sc04_018_801E79D8, s16, 0) = 0;
    for (i = 0; i < 12; i++) {
        id = i + 0x2F;
        t = func_800291B4(id);
        k = t;
        if (k != 0) {
            v = D_8010EDEC[k].v;
            if (v < 0) {
                t = D_8010EDF1[k].v;
                b = (u8)t;
                if (v & 0x4000) {
                    AF(D_sc04_018_801E79D8, s32, 8) = D_sc04_018_801E3D60[k];
                    AF(D_sc04_018_801E79D8, s32, 0xC) = D_sc04_018_801E3D74[k];
                    func_80029124(b, 1);
                    func_800D0FE0(id);
                    AF(D_sc04_018_801E79D8, s16, 0) = 2;
                    return;
                } else {
                    AF(D_sc04_018_801E79D8, s32, 4) = D_sc04_018_801E3EA4[(t - 0x14) >> 1];
                    func_800D0F0C(id, b);
                    AF(D_sc04_018_801E79D8, s16, 0) = 1;
                    return;
                }
            }
        }
    }
}
