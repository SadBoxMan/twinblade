#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_019_80190C94[])();
extern void (*D_sc04_019_80190C9C[])();
extern void (*D_sc04_019_80190CA4[])();
extern u8 D_sc04_019_80190C00;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern u8 D_sc04_019_8018D540;
extern u8 D_sc04_019_80190C7C;
extern u8 D_sc04_019_80190C84;
extern void func_8012B260();
extern void (*D_sc04_019_80190CC4[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc04_019_80190CAC;
extern void (*D_sc04_019_80190CCC[])();
extern u8 D_sc04_019_80190CB8;
extern void (*D_sc04_019_80190CE4[])();
extern u8 D_sc04_019_80190CD4;
extern void func_8001C214();
extern void (*D_sc04_019_80190D1C[])();
extern u8 D_sc04_019_801E6F58;
extern void func_sc04_019_8017DA08();
extern void func_8013CB84();
extern void func_sc04_019_8017DC0C();
extern void func_800D06E8();
extern void func_8016EDEC();
void func_sc04_019_8017E038(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_sc04_019_8017E0C0(u8 *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void (*D_sc04_019_80190D64[])();
extern void (*D_sc04_019_80190D6C[])();
extern void (*D_sc04_019_80190D78[])();
extern void (*D_sc04_019_80190D84[])();
extern s32 D_80127050;
extern void (*D_sc04_019_80191060[])();
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern void (*D_sc04_019_80191068[])();
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
extern void func_sc04_019_8017E1F4();
extern void func_8012A094();
extern void (*D_sc04_019_80191070[])();
extern void func_sc04_019_8017E26C();
extern void func_sc04_019_8017E3AC();
extern u8 D_sc04_019_80191074;
extern void func_sc04_019_80184CB8();
s32 func_sc04_019_8017E5A0(s32 arg0);
extern void (*D_sc04_019_801912A8[])();
extern void (*D_sc04_019_801912C8[])();
extern u8 D_sc04_019_801910A0;
extern void func_80178CBC();
extern u8 D_sc04_019_80191288;
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc04_019_801912D8;
s32 func_sc04_019_8017F02C(s32 arg0);
extern void (*D_sc04_019_8019155C[])();
extern u8 D_sc04_019_80191304;
extern void (*D_sc04_019_801916E4[])();
extern u8 D_sc04_019_80191570;
extern void (*D_sc04_019_80191814[])();
extern void (*D_sc04_019_801918E4[])();
extern u8 D_sc04_019_80191874;
extern s32 func_sc04_019_8018034C();
extern u8 D_sc04_019_801B9DF8;
extern u8 D_sc04_019_801918F4;
extern void func_8012E8E0();
extern void func_8012E88C();
extern void func_sc04_019_80184C90();
extern s32 func_sc04_019_80184ED4();
extern u8 D_sc04_019_801B65B8;
s32 func_sc04_019_8018042C(s32 arg0);
extern void (*D_sc04_019_801919C4[])();
extern s32 func_sc04_019_80184DD0();
extern s32 D_sc04_019_80191918[];
extern s32 func_80029178();
extern void func_80029124();
extern s32 func_sc04_019_80184FA4();
extern void func_sc04_019_80185F54();
extern s32 func_sc04_019_80185BE0();
extern s32 func_sc04_019_801803BC();
extern s32 func_sc04_019_80180888();
extern u8 D_sc04_019_801919E0;
extern u8 D_sc04_019_801B9AA8;
extern u8 D_sc04_019_801B6614;
extern u8 D_sc04_019_801919E8;
extern u8 D_sc04_019_801B9B50;
extern void func_sc04_019_801808FC();
extern s32 func_sc04_019_80180954();
extern u8 D_sc04_019_801B6620;
s32 func_sc04_019_801809DC(s32 arg0);
extern void (*D_sc04_019_80191A80[])();
extern u8 D_sc04_019_80191A20;
extern u8 D_sc04_019_80191A58;
extern u16 D_sc04_019_801E7010;
extern u16 D_sc04_019_801E7012;
extern u8 D_sc04_019_80191AB0;
s32 func_sc04_019_801812D0(s32 arg0);
extern void (*D_sc04_019_80191B20[])();
extern u8 D_sc04_019_80191AE8;
extern s32 D_sc04_019_80191ACC[];
extern s32 func_sc04_019_801816A8();
extern u8 D_sc04_019_801B99A8;
extern u8 D_sc04_019_801B6638;
extern u8 D_sc04_019_80191B34;
s32 func_sc04_019_8018170C(s32 arg0);
extern void func_sc04_019_801817B8();
extern void (*D_sc04_019_80191BDC[])();
extern u8 D_sc04_019_80191B3C;
extern u8 D_sc04_019_80191B74;
extern u8 D_sc04_019_801B9A50;
extern s32 D_sc04_019_80191B58[];
extern s32 func_sc04_019_80184BAC();
extern s32 func_sc04_019_801815DC();
s32 func_sc04_019_80181648(s32 arg0);
extern u8 D_sc04_019_801B662C;
extern void func_sc04_019_80181738();
extern u8 D_sc04_019_80191C08;
extern u8 D_sc04_019_801B66CC;
extern s32 func_sc04_019_80181F70();
extern u8 D_sc04_019_80191C10;
extern void func_sc04_019_80181FE4();
extern s32 func_sc04_019_80182120();
extern u8 D_sc04_019_801B66D8;
s32 func_sc04_019_801821A8(s32 arg0);
extern void (*D_sc04_019_80191EE4[])();
extern u8 D_sc04_019_80191C48;
extern u8 D_sc04_019_80191EB0;
extern u16 D_sc04_019_801E7020;
extern u16 D_sc04_019_801E7022;
extern s32 func_sc04_019_80182B58();
extern u8 D_sc04_019_80191F14;
extern u8 D_sc04_019_801B6700;
extern u8 D_sc04_019_80191F1C;
extern u8 D_sc04_019_801C0D40;
extern void func_sc04_019_80182BCC();
extern s32 func_sc04_019_80182C24();
extern u8 D_sc04_019_801B670C;
extern void (*D_sc04_019_80192014[])();
extern u8 D_sc04_019_80191F94;
extern s32 D_sc04_019_80191F38[];
extern s32 func_sc04_019_801847BC();
extern s32 func_801788B8();
extern u8 D_sc04_019_80191F24;
extern u8 func_sc04_019_801830F4;
s32 func_sc04_019_80182CD4(void);
extern void func_sc04_019_80182D0C();
extern u8 D_sc04_019_80192030;
s32 func_sc04_019_801831AC(s32 arg0);
extern u8 D_sc04_019_801B6730;
extern s32 func_sc04_019_801831D8();
extern u8 D_sc04_019_801B673C;
extern s32 func_sc04_019_80183248();
extern s32 func_sc04_019_801832A8();
s32 func_sc04_019_8018330C(s32 arg0);
extern void (*D_sc04_019_8019211C[])();
extern u8 D_sc04_019_80192070;
extern u8 D_sc04_019_801920C4;
extern s32 D_sc04_019_80192054[];
extern s32 D_sc04_019_801920A8[];
extern u8 func_80172710;
extern s32 func_8012BD14();
extern void func_80178BF8();
extern s32 func_sc04_019_80183938();
extern u8 D_sc04_019_801B9C50;
extern u8 D_sc04_019_80192150;
extern u8 D_sc04_019_801B67C8;
extern s32 func_sc04_019_801839A8();
extern u8 D_sc04_019_801B67DC;
s32 func_sc04_019_80183A08(s32 arg0);
extern void (*D_sc04_019_80192230[])();
extern u8 D_sc04_019_801921B8;
extern s32 D_sc04_019_80192174[];
extern u8 D_sc04_019_8019224C;
s32 func_sc04_019_80183DF4(s32 arg0);
extern void func_sc04_019_80183E20();
extern void func_sc04_019_80183FA8();
extern void (*D_sc04_019_80192414[])();
extern s32 D_sc04_019_80192270[];
extern u8 D_sc04_019_801922E4;
extern u8 D_sc04_019_8019232C;
extern u8 D_sc04_019_80192334;
extern u8 D_sc04_019_801923A4;
s32 func_sc04_019_80184884(s32 arg0);
extern s32 func_sc04_019_80184960();
extern void func_sc04_019_80184AC4();
extern u8 D_80078EB1;
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern void (*D_sc04_019_801B8720[])();
extern u8 D_sc04_019_801B8728;
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
extern void (*D_sc04_019_801B8740[])();
extern void func_80016714();
extern s32 D_sc04_019_801E799C;
extern u8 D_sc04_019_801E7A88;
extern void func_8001D0E8();
extern u8 D_sc04_019_801B8738;
extern u8 D_sc04_019_801C03D8;
extern void func_sc04_019_80185904();
extern void func_sc04_019_8018589C();
extern void (*D_sc04_019_801B8A18[])();
extern void func_sc04_019_80185978();
extern void func_sc04_019_801859D8();
extern void func_8001C97C();
extern s16 D_sc04_019_801B8788[];
extern u8 D_sc04_019_801B874C[];
extern u8 D_sc04_019_801B8748[];
extern S12 D_sc04_019_801B8770;
extern u8 D_sc04_019_801B8760;
extern u8 D_sc04_019_801B877C;
extern void func_sc04_019_80185C6C();
extern s32 func_sc04_019_80185EEC();
extern s32 func_sc04_019_8018516C();
extern void func_8012E688();
extern s32 func_8012BEE8();
extern s32 func_8012E57C();
extern void func_sc04_019_80185FB8();
extern void (*D_sc04_019_801B8A3C[])();
extern u8 D_sc04_019_801B8A2C;
extern s32 func_sc04_019_801862A8();
s32 func_sc04_019_8018625C(s32 arg0);
extern s16 D_sc04_019_801E7030;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc04_019_801B94B0[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s32 D_sc04_019_801E7700;
extern void func_800D24A0();
extern void func_sc04_019_80186570();
extern s16 D_80115126;
extern s32 D_sc04_019_801B92E4[];
extern s32 D_sc04_019_801E77E8[];
extern u8 D_sc04_019_801E7800[];
extern void (*D_sc04_019_801E04F0[])();
extern void (*D_sc04_019_801E051C[])();
extern void (*D_sc04_019_801E0524[])();
extern void (*D_sc04_019_801E0534[])();
extern void (*D_sc04_019_801E0544[])();
extern void (*D_sc04_019_801E0554[])();
extern void func_8012C588();
extern void func_sc04_019_8018A0B4();
extern u8 D_sc04_019_801E04F8;
extern void func_8012C218();
extern void func_80128ED8();
extern void func_8012B414();
extern u8 D_sc04_019_801E052C;
extern u8 D_sc04_019_801B6418;
extern u16 D_800B99DA;
extern u8 D_sc04_019_801E053C;
extern u8 D_sc04_019_801B60B0;
extern u8 D_sc04_019_801E054C;
extern u8 D_sc04_019_801B65B0;
extern void func_sc04_019_8018B564();
extern void (*D_sc04_019_801E056C[])();
extern s32 func_sc04_019_8018B5AC();
extern void func_sc04_019_8018B6E8();
extern void (*D_sc04_019_801E0580[])();
extern u8 D_80078EBA;
extern void func_sc04_019_8018B868();
extern void (*D_sc04_019_801E0594[])();
extern s32 func_sc04_019_8018B8B0();
extern void func_sc04_019_8018B9D0();
extern void (*D_sc04_019_801E05A8[])();
extern void (*D_sc04_019_801E05B4[])();
extern s8 D_sc04_019_801E7A96;
extern s32 func_sc04_019_8018BB50();
extern void (*D_sc04_019_801E05BC[])();
extern u8 D_sc04_019_801E05C4;
s32 func_sc04_019_8018BDE0(s32 arg0);
extern void (*D_sc04_019_801E0690[])();
extern s32 func_8014CB1C();
extern void func_8014B2A8();
extern void func_8002D4C8();
extern u8 D_sc04_019_801E0648;
extern u8 D_sc04_019_801E06A8;
s32 func_sc04_019_8018C24C(s32 arg0);
extern void (*D_sc04_019_801E077C[])();
extern u8 D_sc04_019_801E070C;
extern s32 func_800D0EC4();
extern s32 func_sc04_019_80184D00();
extern s32 func_sc04_019_80184E44();
extern void (*D_sc04_019_801E3AF4[])();
extern s32 func_8012C354();
extern u8 D_sc04_019_801E39E0;
extern u8 func_sc04_019_8018C730;
extern s32 D_sc04_019_801E3AD0[];
extern void (*D_sc04_019_801E3BA4[])();
extern s32 func_8012B2CC();
s32 func_sc04_019_8018C93C(s32 arg0);
extern void (*D_sc04_019_801E3CEC[])();
extern s32 func_sc04_019_8018C8A8();
extern void func_800D0F4C();
extern s32 D_sc04_019_801E79A0;

void func_sc04_019_8017BE9C(u8 *arg0) {
    D_sc04_019_80190C94[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017BED8(u8 *arg0) {
    D_sc04_019_80190C9C[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017BF14(u8 *arg0) {
    D_sc04_019_80190CA4[AF(arg0, u16, 2)]();
}

extern s32 D_sc04_019_801D2200;
extern u8 D_sc04_019_801D7598;
extern s32 D_sc04_019_801E7018;
s32 func_sc04_019_80181960(void);
extern void func_sc04_019_80181998();
extern s32 D_sc04_019_801D6C98;
extern u8 D_sc04_019_801D7E84;
extern s32 D_sc04_019_801E7028;

extern void func_sc04_019_801819B0();

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;

extern void func_8001BFD0();
extern s32 func_800291B4();
extern s32 func_80029524();
extern void func_800D0C48();
extern void func_sc04_019_8017E5CC();
extern s32 func_8012E544();
extern s32 func_sc04_019_80184BD0();
s32 func_sc04_019_8017E79C(s32 arg0);
extern void func_sc04_019_8017E7CC();
extern u8 D_sc04_019_801C7A90;
extern void func_8012B200();
extern void func_8014BB0C();
extern void func_8014BDC8();
extern u8 D_sc04_019_801E396C;
extern s32 func_sc04_019_8017F500();
extern u8 D_sc04_019_80191578;
extern u8 D_sc04_019_801B9950;
extern s32 func_sc04_019_8017F564();
extern u8 D_sc04_019_801E3978;
extern s32 func_801789AC();
extern u8 D_sc04_019_8019171C;
extern u8 D_sc04_019_80190F88;
extern void func_800D1724();
extern u8 D_sc04_019_8019181C;
extern void func_sc04_019_80180284();
extern u8 D_sc04_019_8019195C;
extern u8 D_sc04_019_801B65C8;
extern u8 D_sc04_019_80191904;
extern void func_sc04_019_80180814();
extern u8 D_sc04_019_801E22B4;
extern u8 D_sc04_019_801E2344;
extern s32 D_sc04_019_80191A04[];
extern u8 D_sc04_019_801E2428;
extern u8 D_sc04_019_801E24BC;
extern s32 D_sc04_019_80191C2C[];
extern u8 D_sc04_019_80192160;
extern void func_sc04_019_80183D80();
extern u8 D_sc04_019_801B85A8;
extern s32 D_sc04_019_801E05E0[];
extern s32 D_sc04_019_801E05F4[];
extern u8 D_sc04_019_801E3B9C;


extern void func_sc04_019_80185AB0();
void func_sc04_019_8018602C(s32 arg0, s32 arg1);

extern u8 D_sc04_019_801B6670;
extern u8 D_sc04_019_801B66C0;
s32 func_sc04_019_8018178C(s32 arg0);

extern u8 D_sc04_019_801E01F0;
extern void func_sc04_019_8018A168();
extern s32 *D_sc04_019_801E7980;
extern u8 D_sc04_019_801E0228;
extern u8 D_sc04_019_801E0260;
extern u8 D_sc04_019_801E0288;
extern u8 D_sc04_019_801E02C0;
extern u8 D_sc04_019_801E0338;
extern u8 D_sc04_019_801E0390;
extern u8 D_sc04_019_801E03E0;
extern u8 D_sc04_019_801E0440;
extern u8 D_sc04_019_801E0488;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

extern u8 D_sc04_019_801B87D8;
extern void *D_sc04_019_801E7AAC;
extern u8 D_80078EB0;
extern s32 D_sc04_019_801E7984;
extern void func_sc04_019_8018A1D0();
extern void func_sc04_019_8018AB78();

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
extern void func_sc04_019_8017DAC4();



extern s32 func_sc04_019_80185F20();


extern s32 func_8016F1C4();
extern u16 D_801202A0;

typedef struct { s16 x, y, z, pad; } FeSv;
extern u16 D_sc04_019_801E6F50;
extern void *D_801151D4;
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void func_8012F2E8();
extern s32 func_8012CB64();

extern s32 func_sc04_019_801848DC();

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017BF50);

void func_sc04_019_8017C094(void) {
    FeSv v;
    u8 *p;

    p = D_801151D4;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc04_019_801E6F50 = v.y;
}

void func_sc04_019_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_sc04_019_80190C00, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_sc04_019_80190C00, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_019_8017C1AC(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc04_019_801E6F50;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc04_019_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_019_80190C7C);
    SetScript(arg0, (s32) &D_sc04_019_8018D540);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc04_019_80190C84;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017C2B0);

void func_sc04_019_8017C338(u8 *arg0) {
    D_sc04_019_80190CC4[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017C374(u8 *a) {
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
    o = func_800D222C(a, &D_sc04_019_80190CAC, 0xFD);
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

void func_sc04_019_8017C538(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc04_019_8017C5CC(u8 *arg0) {
    D_sc04_019_80190CCC[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017C608(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc04_019_80190CB8, 0x18);
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

void func_sc04_019_8017C6AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc04_019_8017C710(u8 *obj) {
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
    D_800A5E60 = pk;
}

void func_sc04_019_8017D5F0(u8 *arg0) {
    D_sc04_019_80190CE4[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017D62C(s32 arg0, s32 arg1) {
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
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_019_80190CD4 | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc04_019_8017D6A8(void) {
}

void func_sc04_019_8017D6B0(u8 *arg0) {
    D_sc04_019_80190D1C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017D6EC);

void func_sc04_019_8017D77C(s32 arg0) {
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
            if (((Fx24 *) &D_sc04_019_801E6F58)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            func_8012AD44(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc04_019_801E6F58)[i];
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
                    func_sc04_019_8017D9B8((s32) p);
                }
            }
            func_sc04_019_8017DAC4(p);
        }
    }
}

void func_sc04_019_8017D9B8(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc04_019_801E6F58;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc04_019_8017DA08((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017DA08);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017DAC4);

void func_sc04_019_8017DBDC(void) {
    func_8013CB84();
    func_sc04_019_8017DC0C();
    func_800D06E8();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017DC0C);

s32 func_sc04_019_8017DC98(u8 *arg0) {
    func_8016EDEC((s32) func_sc04_019_8017E038, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_019_8017DCE8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_019_8017DD0C(u8 *arg0) {
    func_8016EDEC((s32) func_sc04_019_8017E0C0, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017DD7C);

void func_sc04_019_8017DE2C(void) {
    func_800D1EBC();
}

s32 func_sc04_019_8017DE4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc04_019_8017DEA0(u8 *arg0) {
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

void func_sc04_019_8017DF34(u8 *arg0) {
    D_sc04_019_80190D64[AF(arg0, u8, 0x15)]();
}

void func_sc04_019_8017DF70(u8 *arg0) {
    D_sc04_019_80190D6C[AF(arg0, u8, 0x15)]();
}

void func_sc04_019_8017DFAC(u8 *arg0) {
    D_sc04_019_80190D78[AF(arg0, u8, 0x15)]();
}

void func_sc04_019_8017DFE8(u8 *arg0) {
    D_sc04_019_80190D84[AF(arg0, u8, 0x15)]();
}

void func_sc04_019_8017E024(void) {
    D_80127050 = 1;
}

void func_sc04_019_8017E038(u8 *arg0) {
    D_sc04_019_80191060[AF(arg0, u8, 0x214)]();
}

void func_sc04_019_8017E074(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc04_019_8017E088(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc04_019_8017E0C0(u8 *arg0) {
    D_sc04_019_80191068[AF(arg0, u8, 0x214)]();
}

void func_sc04_019_8017E0FC(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc04_019_8017E110(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc04_019_8017E130(void) {
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
    func_8012A018((s32) func_sc04_019_8017E1F4, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_sc04_019_8017E1F4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc04_019_8017E1F4((s32) &D_80126948);
}

void func_sc04_019_8017E1F4(s32 arg0) {
    D_sc04_019_80191070[AF(arg0, u8, 4)]();
}

void func_sc04_019_8017E230(s32 arg0) {
    s32 pad[2];
    func_sc04_019_8017E26C(arg0, arg0 + 0xA0);
    func_sc04_019_8017E3AC(arg0);
}

void func_sc04_019_8017E264(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017E26C);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017E3AC);

s32 func_sc04_019_8017E5A0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191074);
}

void func_sc04_019_8017E5CC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191074);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017E628);

void func_sc04_019_8017E760(u8 *arg0) {
    D_sc04_019_801912A8[AF(arg0, u16, 2)]();
}

s32 func_sc04_019_8017E79C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc04_019_801B9B50);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017E7CC);

void func_sc04_019_8017E810(u8 *arg0) {
    D_sc04_019_801912C8[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017E84C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801910A0);
}

void func_sc04_019_8017E878(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191288);
}

void func_sc04_019_8017E8A4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017E8FC);

void func_sc04_019_8017E950(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x22B);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x34) = 1;
    }
    if (func_80029504() < 0x2BC) {
        func_80029514(0x2BC);
    }
}

void func_sc04_019_8017E99C(void) {
    func_8012C588(0x22B, 0);
}

void func_sc04_019_8017E9C0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(8, 0x14) != 0) {
        func_sc04_019_8017E5A0((s32) arg0);
    }
}

void func_sc04_019_8017EA0C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(8, 0x14) == 0) {
        AF(arg0, u16, 2) = 1U;
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_80191074);
    }
    if ((func_sc04_019_80184BD0(0xA, 0, 0xA, 0x1E) != 0) || (func_sc04_019_80184BD0(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_sc04_019_8017E5CC((s32) arg0);
    }
}

void func_sc04_019_8017EAAC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191074);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017EAFC);

void func_sc04_019_8017EBA0(s32 arg0, s32 arg1) {
    func_8012AD80(arg0, arg1);
    if (func_8012BEE8(arg0) != 0) {
        func_sc04_019_8017E79C(arg0);
    }
}

void func_sc04_019_8017EBE0(u8 *arg0) {
    if (AF(arg0, u16, 0x34) == 1) {
        func_sc04_019_8017E7CC();
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017EC10);

void func_sc04_019_8017ECF4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc04_019_801C7A90);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_019_80191074);
    func_8012B2CC((s32) arg0);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_019_801B9AA8);
    func_8012B200((s32) arg0);
    func_8012B178((s32) arg0, -0x40000);
    AF(arg0, s32, 0x1C) = 0x20;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017EDA4);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017EE6C);

s32 func_sc04_019_8017F02C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801912D8);
}

void func_sc04_019_8017F058(u8 *arg0) {
    D_sc04_019_8019155C[AF(arg0, u16, 2)]();
}

void func_sc04_019_8017F094(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191304);
}

s32 func_sc04_019_8017F0C0(void) {
    return D_sc04_019_801E79A0 == 1;
}

void func_sc04_019_8017F0D8(void) {
    func_80029124(0x10C, 1);
    func_80029124(0x10D, 0);
}

void func_sc04_019_8017F108(void) {
    func_80029124(0x10C, 0);
    func_80029124(0x10D, 1);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F138);

void func_sc04_019_8017F174(void) {
    func_8014BB0C();
    func_8014BDC8();
    func_8002D4C8(0x45C, 0);
}

void func_sc04_019_8017F1A8(void) {
    func_80029514(0x280);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F1C8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F224);

void func_sc04_019_8017F28C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801912D8);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F2DC);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F35C);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F418);

s32 func_sc04_019_8017F500(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801E396C, 0, 0x60);
}

s32 func_sc04_019_8017F564(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191578);
    func_8012E88C(arg0);
    func_sc04_019_80184C90(arg0);
    return SetScript(arg0, (s32) &D_sc04_019_801B9950);
}

void func_sc04_019_8017F5BC(u8 *arg0) {
    D_sc04_019_801916E4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F5F8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F6D8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F7B8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F898);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017F978);

void func_sc04_019_8017FA34(void) {
    func_80029124(0x107, 1);
}

void func_sc04_019_8017FA58(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BD0(0xB, 0, 0x17, 0) != 0) {
        func_sc04_019_8017F500((s32) arg0);
    }
}

void func_sc04_019_8017FAAC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BD0(0xE, 0xF, 0x17, 0) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_80191570);
    }
}

void func_sc04_019_8017FB0C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((func_sc04_019_80185BE0(0x10, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801E3978, 0, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_8017F564((s32) arg0);
        }
        break;
    }
}

void func_sc04_019_8017FBB0(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801E396C, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        if ((func_sc04_019_80185BE0(0x10, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
            AF(arg0, s16, 2) = 2;
            func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_80191570);
        }
        break;
    }
}

void func_sc04_019_8017FC58(u8 *arg0) {
    if (func_sc04_019_80184BD0(0xB, 0, 0xE, 0xF) == 0) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc04_019_801B99A8);
        func_sc04_019_80184C90((s32) arg0);
        func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801E3978, 1, 0x60);
    }
}

void func_sc04_019_8017FCD8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191570);
    }
}

void func_sc04_019_8017FD28(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0x34) = 1;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    }
}

void func_sc04_019_8017FD88(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    }
}

void func_sc04_019_8017FDE4(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_8012E8E0(arg0, (s32) &D_sc04_019_80191578);
        func_8012E88C(arg0);
        func_sc04_019_80184C90(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801B9950);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017FE54);

void func_sc04_019_8017FF34(u8 *arg0) {
    D_sc04_019_80191814[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8017FF70);

void func_sc04_019_8018001C(s32 arg0, s32 arg1) {
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
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc04_019_801C7A90);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    func_8012E8E0(arg0, (s32) &D_sc04_019_8019171C);
    func_8012B2CC(arg0);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9B50);
}

void func_sc04_019_801800E0(u8 *arg0) {
    D_sc04_019_801918E4[AF(arg0, u16, 2)]();
}

s32 func_sc04_019_8018011C(void) {
    return D_sc04_019_801E79A0 == 1;
}

void func_sc04_019_80180134(void) {
    func_800D1724((s32) &D_sc04_019_80190F88);
}

void func_sc04_019_8018015C(void) {
}

void func_sc04_019_80180164(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191874);
}

void func_sc04_019_80180190(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_8019181C);
    }
}

void func_sc04_019_801801E0(s32 arg0, s32 arg1) {
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
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_8019181C);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_019_80180284);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180284);

s32 func_sc04_019_8018034C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_019_801918F4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9DF8);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B65B8, 0, 0x60);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801803BC);

s32 func_sc04_019_8018042C(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9DF8);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B65B8, 1, 0x60);
}

void func_sc04_019_8018048C(u8 *arg0) {
    D_sc04_019_801919C4[AF(arg0, u16, 2)]();
}

void func_sc04_019_801804C8(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_8019195C);
    AF(arg0, s16, 0x34) = 0;
}

void func_sc04_019_80180504(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80191918[func_sc04_019_80184DD0(arg0)];
}

s32 func_sc04_019_80180544(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x110, arg1) & 0xFF)) {
        func_80029124(0x110, 1);
        return 1;
    }
    return 0;
}

void func_sc04_019_80180580(s32 arg0) {
    if (func_sc04_019_80184BAC(9, 0x11) != 0) {
        func_sc04_019_8018034C(arg0);
    }
}

void func_sc04_019_801805C0(s32 arg0) {
    func_sc04_019_80185F54(arg0, 0xC, 1);
    if ((func_sc04_019_80185BE0(0xC) != 0) && (func_sc04_019_80184FA4(arg0) != 0)) {
        func_sc04_019_801803BC(arg0);
    }
}

void func_sc04_019_80180618(s32 arg0) {
    if (func_sc04_019_80184FA4(arg0) != 0) {
        if (func_sc04_019_80184BAC(9, 0x11) == 0) {
            func_sc04_019_8018042C(arg0);
            return;
        }
        func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B65C8, 0, 0x40);
    }
}

void func_sc04_019_8018067C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_sc04_019_801B9DF8);
    }
}

void func_sc04_019_801806CC(s32 arg0) {
    func_sc04_019_80185F54(arg0, 0xC, 1);
    if ((func_sc04_019_80185BE0(0xC) != 0) && (func_sc04_019_80184FA4(arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801918F4);
        func_sc04_019_80185FB8(arg0, 0xC, 1);
    }
}

void func_sc04_019_80180740(s32 arg0) {
    if (func_sc04_019_801847BC(arg0, (s32) &D_sc04_019_80191904) != 0) {
        if (func_sc04_019_80184BAC(9, 0x11) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc04_019_801B9DF8);
            func_sc04_019_80184C90(arg0);
            func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B65C8, 0, 0x40);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801918F4);
        }
        func_sc04_019_80185FB8(arg0, 0xC, 1);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_019_80180814);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180814);

s32 func_sc04_019_80180888(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_019_801919E0);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B6614, 0, 0x60);
}

void func_sc04_019_801808FC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_019_801919E8);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9B50);
    func_sc04_019_80184C90(arg0);
}

s32 func_sc04_019_80180954(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_sc04_019_801919E8);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B6620, 1, 0x40);
}

s32 func_sc04_019_801809DC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801919E0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180A08);

void func_sc04_019_80180B6C(u8 *arg0) {
    D_sc04_019_80191A80[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180BA8);

void func_sc04_019_80180C0C(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191A20);
}

void func_sc04_019_80180C38(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = func_sc04_019_80184DD0();
    temp_v1 = func_80029504();
    if (temp_s1 == 2) {
        if (temp_v1 < 0x276) {
            AF(arg0, s32 *, 0xE4) = &D_sc04_019_801E2344;
            return;
        }
        AF(arg0, s32 *, 0xE4) = &D_sc04_019_801E22B4;
        return;
    }
    AF(arg0, s32 *, 0xE4) = (s32 *) D_sc04_019_80191A04[temp_s1];
}

s32 *func_sc04_019_80180CC0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_sc04_019_801848DC() == 0) {
        return NULL;
    }
    if (func_sc04_019_8018625C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180D38);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180E28);

void func_sc04_019_80180EE8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_019_80185BE0(6, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B6620, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_801808FC((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80180F7C);

void func_sc04_019_80181020(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_019_801919E8);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801B9B50);
        func_sc04_019_80184C90(arg0);
    }
}

void func_sc04_019_80181090(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B6614, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else if ((func_sc04_019_80185BE0(6, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
        func_sc04_019_801809DC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80181124);

void func_sc04_019_801811F4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801919E0);
    }
}

void func_sc04_019_80181244(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191A58);
}

void func_sc04_019_80181270(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_sc04_019_801E7010;
        AF(arg0, u16, 0x34) = (u16) D_sc04_019_801E7012;
        SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    }
}

s32 func_sc04_019_801812D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191AB0);
}

void func_sc04_019_801812FC(u8 *arg0) {
    D_sc04_019_80191B20[AF(arg0, u16, 2)]();
}

void func_sc04_019_80181338(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191AE8);
}

void func_sc04_019_80181364(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80191ACC[func_sc04_019_80184DD0(arg0)];
}

void func_sc04_019_801813A4(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8012E544(0x2A0);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 != 0) {
        func_sc04_019_801812D0(arg0);
    }
}

void func_sc04_019_80181400(u8 *arg0) {
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
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_80191AB0);
    }
}

void func_sc04_019_80181474(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191AB0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801814C4);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80181564);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801815DC);

s32 func_sc04_019_80181648(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191B3C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801C0D40);
    func_sc04_019_80184C90(arg0);
    func_sc04_019_80181998();
}

s32 func_sc04_019_801816A8(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B6638, 1, 0x80);
}

s32 func_sc04_019_8018170C(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191B34);
}

void func_sc04_019_80181738(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    func_sc04_019_801819B0();
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc04_019_8018178C(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191B34);
}

void func_sc04_019_801817B8(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80181804);

void func_sc04_019_80181924(u8 *arg0) {
    D_sc04_019_80191BDC[AF(arg0, u16, 2)]();
}

s32 func_sc04_019_80181960(void) {
    func_8001C97C((s32) &D_sc04_019_801D7598);
    D_sc04_019_801E7018 = D_sc04_019_801D2200;
    return D_sc04_019_801D2200;
}

void func_sc04_019_80181998(void) {
    D_sc04_019_801D2200 = *(s32 *)&D_sc04_019_801D7598;
}

void func_sc04_019_801819B0(void) {
    D_sc04_019_801D2200 = *(s32 *)&D_sc04_019_801E7018;
}

void func_sc04_019_801819C8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_019_80191B3C, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_019_801B9A50);
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191B74);
}

void func_sc04_019_80181A28(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80191B58[func_sc04_019_80184DD0(arg0)];
}

void func_sc04_019_80181A68(s32 arg0) {
    if (func_sc04_019_80184BAC(9, 0x12) != 0) {
        func_sc04_019_801815DC(arg0);
    }
}

void func_sc04_019_80181AA8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_019_80185BE0(3, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B6638, 0, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if (func_sc04_019_80184FA4((s32) arg0) != 0) {
        func_sc04_019_80181648((s32) arg0);
    }
}

void func_sc04_019_80181B34(s32 arg0) {
    if (func_sc04_019_80184BAC(9, 0xF) == 0) {
        func_sc04_019_801816A8(arg0);
    }
}

void func_sc04_019_80181B74(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_019_80191B3C);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801C0D40);
        func_sc04_019_80184C90(arg0);
        func_sc04_019_80181998();
    }
}

void func_sc04_019_80181BEC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B662C, 1, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_sc04_019_80185BE0(3, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
        func_sc04_019_8018170C((s32) arg0);
    }
}

void func_sc04_019_80181C78(s32 arg0) {
    if (func_sc04_019_80184BAC(0xF, 0x11) == 0) {
        func_sc04_019_80181738(arg0);
    }
}

void func_sc04_019_80181CB8(s32 arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_sc04_019_80185BE0(3) != 0) {
            AF(arg0, u16, 0x34) = 1;
            func_sc04_019_80184ED4(arg0, &D_sc04_019_801B662C, 0, 0x80);
        }
        break;
    case 1:
        func_sc04_019_80185BE0(3);
        if (func_sc04_019_80184FA4(arg0) != 0) {
            AF(arg0, u16, 0x34) = 2;
            func_sc04_019_80184ED4(arg0, &D_sc04_019_801B6670, 0, 0x80);
        }
        break;
    case 2:
        if (func_sc04_019_80184FA4(arg0) != 0) {
            AF(arg0, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc04_019_80185BE0(0xD) != 0) {
            AF(arg0, u16, 0x34) = 4;
            func_sc04_019_80184ED4(arg0, &D_sc04_019_801B66C0, 0, 0x80);
        }
        break;
    case 4:
        func_sc04_019_80185BE0(0xD);
        if (func_sc04_019_80184FA4(arg0) != 0) {
            func_sc04_019_8018178C(arg0);
        }
        break;
    }
}

void func_sc04_019_80181DC4(s32 arg0) {
    if (func_sc04_019_80184BAC(0x11, 0x12) == 0) {
        func_sc04_019_801817B8(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80181E04);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80181EFC);

s32 func_sc04_019_80181F70(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191C08);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B66CC, 0, 0x40);
}

void func_sc04_019_80181FE4(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191C10);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9B50);
    func_sc04_019_80184C90(arg0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018203C);

s32 func_sc04_019_80182120(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191C10);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B66D8, 1, 0x40);
}

s32 func_sc04_019_801821A8(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191C08);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801821D4);

void func_sc04_019_8018233C(u8 *arg0) {
    D_sc04_019_80191EE4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80182378);

void func_sc04_019_80182490(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191C48);
}

void func_sc04_019_801824BC(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = func_sc04_019_80184DD0();
    temp_v1 = func_80029504();
    if (temp_s1 == 2) {
        if (temp_v1 < 0x276) {
            AF(arg0, s32 *, 0xE4) = &D_sc04_019_801E24BC;
            return;
        }
        AF(arg0, s32 *, 0xE4) = &D_sc04_019_801E2428;
        return;
    }
    AF(arg0, s32 *, 0xE4) = (s32 *) D_sc04_019_80191C2C[temp_s1];
}

s32 *func_sc04_019_80182544(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_sc04_019_801848DC() == 0) {
        return NULL;
    }
    if (func_sc04_019_8018625C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801825BC);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801826AC);

void func_sc04_019_8018276C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc04_019_80185BE0(3, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B66D8, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_80181FE4((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80182800);

void func_sc04_019_801828B0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_019_80191C10);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801B9B50);
        func_sc04_019_80184C90(arg0);
    }
}

void func_sc04_019_80182920(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B66CC, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_sc04_019_80185BE0(3, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
        func_sc04_019_801821A8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801829AC);

void func_sc04_019_80182A7C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191C08);
    }
}

void func_sc04_019_80182ACC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191EB0);
}

void func_sc04_019_80182AF8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_sc04_019_801E7020;
        AF(arg0, u16, 0x34) = (u16) D_sc04_019_801E7022;
        SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    }
}

s32 func_sc04_019_80182B58(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191F14);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B6700, 0, 0x60);
}

void func_sc04_019_80182BCC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191F1C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801C0D40);
    func_sc04_019_80184C90(arg0);
}

s32 func_sc04_019_80182C24(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80191F1C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B670C, 1, 0x60);
}

void func_sc04_019_80182C98(u8 *arg0) {
    D_sc04_019_80192014[AF(arg0, u16, 2)]();
}

s32 func_sc04_019_80182CD4(void) {
    func_8001C97C((s32) &D_sc04_019_801D7E84);
    D_sc04_019_801E7028 = D_sc04_019_801D6C98;
    return D_sc04_019_801D6C98;
}

void func_sc04_019_80182D0C(void) {
    D_sc04_019_801D6C98 = *(s32 *)&D_sc04_019_801D7E84;
}

void func_sc04_019_80182D24(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_019_80191F1C, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_019_801B9A50);
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80191F94);
}

void func_sc04_019_80182D84(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80191F38[func_sc04_019_80184DD0(arg0)];
}

s32 func_sc04_019_80182DC4(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x113, arg1) & 0xFF)) {
        func_80029124(0x113, 1);
        return 1;
    }
    return 0;
}

void func_sc04_019_80182E00(s32 arg0) {
    if (func_sc04_019_80184BAC(7, 0xE) != 0) {
        func_sc04_019_80182B58(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80182E40);

void func_sc04_019_80182ED8(s32 arg0) {
    if (func_sc04_019_80184BAC(7, 0xE) == 0) {
        func_sc04_019_80182C24(arg0);
    }
}

void func_sc04_019_80182F18(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc04_019_80191F1C);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801C0D40);
        func_sc04_019_80184C90(arg0);
    }
}

void func_sc04_019_80182F88(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc04_019_80184FA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            func_sc04_019_80184ED4((s32) arg0, (s32) &D_sc04_019_801B6700, 1, 0x60);
        }
    } else if ((func_sc04_019_80185BE0(2, arg1, arg2) != 0) && (func_sc04_019_80184FA4((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_80191F14);
    }
}

void func_sc04_019_80183024(s32 arg0) {
    if (func_sc04_019_801847BC(arg0, (s32) &D_sc04_019_80191F24) != 0) {
        func_sc04_019_80182CD4();
        func_sc04_019_80182D0C();
        if (func_sc04_019_80184BAC(7, 0xE) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_sc04_019_80191F1C);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc04_019_801C0D40);
            func_sc04_019_80184C90(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80191F14);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_019_801830F4);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801830F4);

s32 func_sc04_019_801831AC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80192030);
}

s32 func_sc04_019_801831D8(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80192030);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B6730, 0, 0x40);
}

s32 func_sc04_019_80183248(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B673C, 0, 0x40);
}

s32 func_sc04_019_801832A8(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B6730, 1, 0x40);
}

s32 func_sc04_019_8018330C(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80192030);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80183338);

void func_sc04_019_80183438(u8 *arg0) {
    D_sc04_019_8019211C[AF(arg0, u16, 2)]();
}

void func_sc04_019_80183474(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80192070);
}

void func_sc04_019_801834A0(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80192070);
}

void func_sc04_019_801834CC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801920C4);
}

void func_sc04_019_801834F8(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80192054[func_sc04_019_80184DD0(arg0)];
}

void func_sc04_019_80183538(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_801920A8[func_sc04_019_80184DD0(arg0)];
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80183578);

s32 *func_sc04_019_80183604(u8 *arg0) {
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

void func_sc04_019_80183674(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(7, 0x14) != 0) {
        func_sc04_019_801831AC((s32) arg0);
    }
}

void func_sc04_019_801836C0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(7, 0xA) == 0) {
        func_sc04_019_801831D8((s32) arg0);
    }
}

void func_sc04_019_8018370C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80192030);
    }
}

void func_sc04_019_8018375C(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_sc04_019_80185BE0(2, arg1, arg2) != 0) && (func_sc04_019_80184FA4(arg0) != 0)) {
        func_sc04_019_80183248(arg0);
    }
}

void func_sc04_019_801837A8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184FA4((s32) arg0) != 0) {
        func_sc04_019_801832A8((s32) arg0);
    }
}

void func_sc04_019_801837EC(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_sc04_019_80185BE0(2, arg1, arg2) != 0) && (func_sc04_019_80184FA4(arg0) != 0)) {
        func_sc04_019_8018330C(arg0);
    }
}

void func_sc04_019_80183838(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(0xC, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_80192030);
    }
}

void func_sc04_019_80183890(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80192030);
    }
}

void func_sc04_019_801838E0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc04_019_801B9AA8);
    }
}

s32 func_sc04_019_80183938(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc04_019_80192150);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9C50);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B67C8, 0, 0x60);
}

s32 func_sc04_019_801839A8(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9C50);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B67DC, 0, 0x40);
}

s32 func_sc04_019_80183A08(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B9C50);
    func_sc04_019_80184C90(arg0);
    return func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B67C8, 1, 0x60);
}

void func_sc04_019_80183A68(u8 *arg0) {
    D_sc04_019_80192230[AF(arg0, u16, 2)]();
}

void func_sc04_019_80183AA4(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801921B8);
}

void func_sc04_019_80183AD0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80192174[func_sc04_019_80184DD0(arg0)];
}

s32 func_sc04_019_80183B10(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x115, arg1) & 0xFF)) {
        func_80029124(0x115, 1);
        return 1;
    }
    return 0;
}

void func_sc04_019_80183B4C(s32 arg0) {
    if (func_sc04_019_80184BAC(9, 0x11) != 0) {
        func_sc04_019_80183938(arg0);
    }
}

void func_sc04_019_80183B8C(s32 arg0) {
    if (func_sc04_019_80184FA4() != 0) {
        func_sc04_019_801839A8(arg0);
    }
}

void func_sc04_019_80183BC4(s32 arg0) {
    if (func_sc04_019_80184FA4(arg0) != 0) {
        if (func_sc04_019_80184BAC(9, 0x11) == 0) {
            func_sc04_019_80183A08(arg0);
            return;
        }
        func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B67DC, 0, 0x40);
    }
}

void func_sc04_019_80183C28(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_sc04_019_801B9C50);
    }
}

void func_sc04_019_80183C78(s32 arg0) {
    if (func_sc04_019_80184FA4(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80192150);
    }
}

void func_sc04_019_80183CBC(s32 arg0) {
    if (func_sc04_019_801847BC(arg0, (s32) &D_sc04_019_80192160) != 0) {
        if (func_sc04_019_80184BAC(9, 0x11) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc04_019_801B9C50);
            func_sc04_019_80184C90(arg0);
            func_sc04_019_80184ED4(arg0, (s32) &D_sc04_019_801B67DC, 0, 0x40);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_80192150);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_019_80183D80);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80183D80);

s32 func_sc04_019_80183DF4(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_8019224C);
}

void func_sc04_019_80183E20(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80183E6C);

void func_sc04_019_80183FA8(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_019_801B99A8);
    func_sc04_019_80184C90(arg0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80183FF4);

void func_sc04_019_80184130(u8 *arg0) {
    D_sc04_019_80192414[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018416C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80192270[func_sc04_019_80184DD0(arg0)];
}

void func_sc04_019_801841AC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80192270[func_sc04_019_80184DD0(arg0)];
}

void func_sc04_019_801841EC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc04_019_80192270[func_sc04_019_80184DD0(arg0)];
}

s32 func_sc04_019_8018422C(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x116, arg1) & 0xFF)) {
        func_80029124(0x116, 1);
        return 1;
    }
    return 0;
}

void func_sc04_019_80184268(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801922E4);
}

void func_sc04_019_80184298(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_8019232C);
}

void func_sc04_019_801842C8(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_80192334);
}

void func_sc04_019_801842F8(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801923A4);
}

void func_sc04_019_80184328(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(7, 0x10) == 0) {
        func_sc04_019_80183FA8((s32) arg0);
    }
}

void func_sc04_019_80184374(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_8019224C);
    }
}

void func_sc04_019_801843C4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(0x10, 0x14) == 0) {
        func_sc04_019_80183DF4((s32) arg0);
    }
}

void func_sc04_019_80184410(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xC;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_8019224C);
    }
}

void func_sc04_019_80184460(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(6, 0x14) != 0) {
        func_sc04_019_80183E20((s32) arg0);
    }
}

void func_sc04_019_801844AC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_019_80184BAC(6, 7) == 0) {
        AF(arg0, s16, 2) = 6;
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_8019224C);
    }
}

void func_sc04_019_80184504(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc04_019_801B99A8);
        AF(arg0, s16, 0x34) = 2;
    }
}

void func_sc04_019_80184560(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 9;
        SetScript(arg0, (s32) &D_sc04_019_801B99A8);
        AF(arg0, s16, 0x34) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801845B8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018465C);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80184738);

void func_sc04_019_8018479C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc04_019_801847AC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc04_019_801847BC(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc04_019_801B85A8;
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

void func_sc04_019_80184858(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_sc04_019_80184884(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_sc04_019_801848B0(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

s32 func_sc04_019_801848DC(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80184960);

void func_sc04_019_80184A90(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc04_019_80184960();
    func_sc04_019_80184AC4((s32) arg0);
}

void func_sc04_019_80184AC4(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

s16 func_sc04_019_80184B04(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc04_019_80184B2C(u8 *arg0) {
    D_sc04_019_801B8720[AF(arg0, u16, 2)]();
}

void func_sc04_019_80184B68(void) {
}

void func_sc04_019_80184B70(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) D_80078EB1 >= arg1 && (s32) D_80078EB1 < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc04_019_80184BAC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80184BD0);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80184C28);

void func_sc04_019_80184C90(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_019_801B8728 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc04_019_80184CB0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc04_019_80184CB8(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

s32 func_sc04_019_80184D00(void) {
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

s32 func_sc04_019_80184D5C(void) {
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

s32 func_sc04_019_80184DD0(void) {
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

s32 func_sc04_019_80184E44(void) {
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

void func_sc04_019_80184EA0(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80184ED4);

s32 func_sc04_019_80184FA4(u8 *a) {
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

s32 func_sc04_019_8018516C(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (func_8014B12C() != 0) {
        return 2;
    }
    return 1;
}

void func_sc04_019_801851B4(u8 *arg0) {
    D_sc04_019_801B8740[AF(arg0, u16, 2)]();
}

void func_sc04_019_801851F0(void) {
}

void func_sc04_019_801851F8(void) {
}

void func_sc04_019_80185200(void) {
}

void func_sc04_019_80185208(void) {
}

void func_sc04_019_80185210(void) {
}

void func_sc04_019_80185218(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_sc04_019_801E7A88, 0x14, arg2, arg3);
    D_sc04_019_801E799C = 0;
    func_8012CAE4(arg0);
}

void func_sc04_019_8018525C(void) {
}

void func_sc04_019_80185264(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_019_801C03D8);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_sc04_019_801B8738);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_019_801852EC(u8 *a) {
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
                func_sc04_019_80185978(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc04_019_80185904(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc04_019_801859D8(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc04_019_8018589C(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc04_019_80185904(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc04_019_8018589C(a);
        }
        break;
    }
    D_sc04_019_801B8A18[AF(a, u16, 2)](a);
}

void func_sc04_019_801854C4(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_sc04_019_801B8788[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc04_019_801B8748 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_sc04_019_801B8748 + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_sc04_019_801B874C + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_sc04_019_801B8760 | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_sc04_019_801B877C;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc04_019_801B8770;
    AF(a, s16, 0x10A) = 6;
    func_sc04_019_8018589C(a);
    AF(a, void *, 0xDC) = func_sc04_019_80185C6C;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80185664);

void func_sc04_019_801856E0(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc04_019_8018516C() == 2) {
        func_sc04_019_80185904(arg0);
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
        func_sc04_019_80185904(arg0);
    }
    func_sc04_019_80185EEC(arg0);
}

void func_sc04_019_801857AC(s32 arg0) {
    func_sc04_019_80185EEC(arg0);
}

void func_sc04_019_801857CC(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc04_019_8018516C() == 2) {
        func_sc04_019_8018589C(arg0);
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
            func_sc04_019_8018589C(arg0);
            return;
        }
        func_sc04_019_80185EEC(arg0);
    }
}

void func_sc04_019_8018589C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_019_801B874C + ((D_sc04_019_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_019_80185EEC(arg0);
}

void func_sc04_019_80185904(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_019_801B8748 + ((D_sc04_019_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_019_80185EEC(arg0);
}

void func_sc04_019_80185978(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_019_801B8748 + ((D_sc04_019_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc04_019_801859D8(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_019_801B8748 + ((D_sc04_019_801B8788[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_019_80185EEC(arg0);
}

void func_sc04_019_80185A58(s32 arg0, s32 arg1) {
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

void func_sc04_019_80185AB0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc04_019_8018602C(arg0, 0x3C);
    }
}

void func_sc04_019_80185B10(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc04_019_80185B58(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc04_019_8018602C(arg0, 0x3C);
    }
}

void func_sc04_019_80185BA8(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80185BE0);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80185C6C);

s32 func_sc04_019_80185D10(s32 arg0) {
    s32 o[2];
    FeSv v;

    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80185D70);

s32 func_sc04_019_80185EEC(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc04_019_80185F20(arg0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80185F20);

void func_sc04_019_80185F54(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc04_019_80185FB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc04_019_8018602C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc04_019_80186084(u8 *arg0) {
    D_sc04_019_801B8A3C[AF(arg0, u16, 2)]();
}

void func_sc04_019_801860C0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_019_801B8A2C | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018613C);

s32 func_sc04_019_8018625C(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc04_019_801862A8((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801862A8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801863B4);

void func_sc04_019_80186410(s32 arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc04_019_801B87D8, (s32) sp10);
    AF(D_sc04_019_801E7AAC, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

s16 func_sc04_019_80186450(void) {
    return D_sc04_019_801E7030;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80186460);

void func_sc04_019_801864AC(void) {
    func_80029444();
    func_801754A8();
    D_sc04_019_801B94B0[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc04_019_8018651C(void) {
    func_800D24A0(3);
    D_8011511A = 0;
    func_sc04_019_80186570();
    D_80115130 = 0;
    D_sc04_019_801E7700 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80186570);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80186E24);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801877B0);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801878E8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801880EC);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80188428);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80188778);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_801889B8);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80188B84);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80188E1C);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80189214);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80189540);

s32 func_sc04_019_80189DDC(s32 arg0) {
    return D_sc04_019_801B92E4[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_sc04_019_80189E14(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc04_019_801B92E4[((D_80115126 * 0xA) + (s16) arg0)];
    D_sc04_019_801E7700 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80189E54);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_80189EA0);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A0B4);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A168);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A1D0);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A224);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A2E0);

void func_sc04_019_8018A6C8(s32 arg0, s32 arg1) {
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = (u16) AF(arg0, u16, 6) >> 0xC;
    temp_a2 = D_sc04_019_801E77E8[temp_v1];
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) & 0x7FFFFFFF);
    (*(s32 *)((u8 *)D_sc04_019_801E7800 + ((temp_v1 << 6)) * 1)) = arg1;
    AF(temp_a2, u16, 8) = (u16) AF(arg0, u16, 0);
    AF(temp_a2, u16, 0xA) = (u16) AF(arg0, u16, 2);
    AF(temp_a2, u16, 0xC) = (u16) AF(arg0, u16, 4);
    AF(temp_a2, s16, 0x12) = (s16) ((AF(arg0, u16, 6) & 0xF) << 0xA);
}

void func_sc04_019_8018A740(u8 *arg0) {
    D_sc04_019_801E04F0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A77C);

void func_sc04_019_8018A898(u8 *arg0) {
    D_sc04_019_801E051C[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018A8D4(u8 *arg0) {
    D_sc04_019_801E0524[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018A910(u8 *arg0) {
    D_sc04_019_801E0534[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018A94C(u8 *arg0) {
    D_sc04_019_801E0544[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018A988(void) {
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018A990);

void func_sc04_019_8018AB3C(u8 *arg0) {
    D_sc04_019_801E0554[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018AB78);

void func_sc04_019_8018ACD4(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E01F0;
    func_sc04_019_8018A168(0x474, 0x4B0);
}

void func_sc04_019_8018AD08(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0228;
    func_sc04_019_8018A168(0x474, 0x4EC);
}

void func_sc04_019_8018AD3C(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0260;
    func_sc04_019_8018A168(0x474, 0x4B0);
}

void func_sc04_019_8018AD70(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0288;
    func_sc04_019_8018A168(0x474, 0x4B0);
}

void func_sc04_019_8018ADA4(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E02C0;
    func_sc04_019_8018A168(0x474, 0x528);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018ADD8);

void func_sc04_019_8018AE4C(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0338;
    func_sc04_019_8018A168(0x474, 0x1A4);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018AE80);

void func_sc04_019_8018AECC(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0390;
    func_sc04_019_8018A168(0x12C, 0x1A4);
}

void func_sc04_019_8018AF00(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E03E0;
    func_sc04_019_8018A168(0x474, 0x4B0);
}

void func_sc04_019_8018AF34(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0440;
    func_sc04_019_8018A168(0x474, 0x4B0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018AF68);

void func_sc04_019_8018AFB4(void) {
    D_sc04_019_801E7980 = &D_sc04_019_801E0488;
    func_sc04_019_8018A168(0x564, 0x1A4);
}

s32 func_sc04_019_8018AFE8(void) {
    return -1;
}

void func_sc04_019_8018AFF0(void) {
    s32 i;

    D_sc04_019_801E7984 = (D_80078EB1 * 0x3C) + D_80078EB0;
    for (i = 0; i < 6; i++) {
        AF(((void **)&D_sc04_019_801E77E8)[i], s32, 4) |= 0x80000000;
    }
    for (i = 2; i < 0x12; i++) {
        func_sc04_019_8018A1D0(i);
    }
    func_sc04_019_8018AB78();
    if (D_sc04_019_801E799C != 0) {
        D_sc04_019_801E799C -= 1;
    }
}

void func_sc04_019_8018B0AC(s32 arg0, s32 arg1) {
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
    func_sc04_019_8018A0B4();
}

void func_sc04_019_8018B158(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_019_801E04F8, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B19C);

void func_sc04_019_8018B2B8(u8 *arg0, s32 arg1, s32 arg2) {
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

void func_sc04_019_8018B354(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 8);
    func_8012B414();
}

void func_sc04_019_8018B388(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_019_801B6418);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc04_019_801E052C);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_019_8018B400(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) ((u32) rsin(D_800B99DA * 0x30, arg1, arg2, arg3) >> 5);
}

void func_sc04_019_8018B448(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (func_80029504(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_019_801B60B0);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc04_019_801E053C);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_019_8018B4EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_019_801B65B0);
    func_8012E8E0(arg0, (s32) &D_sc04_019_801E054C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_sc04_019_8018B564(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_019_8018B570(u8 *arg0) {
    D_sc04_019_801E056C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B5AC);

void func_sc04_019_8018B614(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc04_019_8018B5AC((s32) arg0, arg1) == 1) {
        func_sc04_019_8018B564((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B660);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B6A0);

void func_sc04_019_8018B6E8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_019_8018B6F4(u8 *arg0) {
    D_sc04_019_801E0580[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018B730(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_019_80184BAC(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_sc04_019_8018B6E8((s32) arg0);
    }
}

void func_sc04_019_8018B798(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_019_80184BAC(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_019_8018B7FC(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_sc04_019_80184BAC(7, 0x13) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_sc04_019_8018B868(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_019_8018B874(u8 *arg0) {
    D_sc04_019_801E0594[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B8B0);

void func_sc04_019_8018B904(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc04_019_8018B8B0((s32) arg0, arg1) == 0) {
        func_sc04_019_8018B868((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B948);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018B988);

void func_sc04_019_8018B9D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc04_019_8018B9DC(u8 *arg0) {
    D_sc04_019_801E05A8[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018BA18(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_019_80184BAC(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_sc04_019_8018B9D0((s32) arg0);
    }
}

void func_sc04_019_8018BA80(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc04_019_80184BAC(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_019_8018BAE4(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_sc04_019_80184BAC(0xB, 0x10) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018BB50);

void func_sc04_019_8018BC3C(u8 *arg0) {
    D_sc04_019_801E05B4[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018BC78(u8 *arg0) {
    if (func_sc04_019_8018BB50() != 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
        D_sc04_019_801E7A96 = 1;
        return;
    }
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    D_sc04_019_801E7A96 = 0;
}

void func_sc04_019_8018BCDC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xE);
    if (func_sc04_019_8018BB50() != 0) {
        AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 1;
        D_sc04_019_801E7A96 = 1;
        return;
    }
    AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 2;
    D_sc04_019_801E7A96 = 0;
}

void func_sc04_019_8018BD58(u8 *arg0) {
    D_sc04_019_801E05BC[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018BD94(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc04_019_8018BDA4(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xA);
}

s32 func_sc04_019_8018BDE0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801E05C4);
}

s32 func_sc04_019_8018BE0C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801E05C4);
}

void func_sc04_019_8018BE38(u8 *arg0) {
    D_sc04_019_801E0690[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018BE74(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) < 0xC8) {
        AF(arg0, s32, 0xE4) = D_sc04_019_801E05E0[func_sc04_019_80184D00()];
        return;
    }
    AF(arg0, s32, 0xE4) = D_sc04_019_801E05F4[func_sc04_019_80184DD0()];
}

s32 func_sc04_019_8018BEE8(void) {
    return func_8014CB1C() != 0;
}

void func_sc04_019_8018BF08(void) {
    func_8014B2A8();
    func_8002D4C8(0x464, 0);
}

void func_sc04_019_8018BF34(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801E0648);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018BF64);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018BFCC);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C038);

void func_sc04_019_8018C0B0(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, s16, 2) = 3;
        func_sc04_019_80184CB8((s32) arg0, (s32) &D_sc04_019_801E05C4);
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C114);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C1E0);

s32 func_sc04_019_8018C24C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801E06A8);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C278);

void func_sc04_019_8018C368(u8 *arg0) {
    D_sc04_019_801E077C[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018C3A4(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_019_801E070C);
}

s32 func_sc04_019_8018C3D0(void) {
    return func_800D0EC4() == 0;
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C3F0);

void func_sc04_019_8018C494(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_sc04_019_80184D00();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_sc04_019_80184E44();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
            goto block_7;
        }
block_6:
        if (func_sc04_019_80184BAC(0xA, 0x10) == 0) {
block_7:
            func_sc04_019_8018C24C(arg0);
        }
    }
}

void func_sc04_019_8018C518(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_sc04_019_80184D00();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_sc04_019_80184E44();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
        } else {
block_6:
            if (func_sc04_019_80184BAC(0xA, 0x10) != 0) {
                goto block_7;
            }
        }
    } else {
block_7:
        AF(arg0, s16, 2) = 1;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801E06A8);
    }
}

void func_sc04_019_8018C5AC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc04_019_80184CB8(arg0, (s32) &D_sc04_019_801E06A8);
    }
}

void func_sc04_019_8018C5FC(u8 *arg0) {
    D_sc04_019_801E3AF4[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018C638(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_019_801E39E0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc04_019_8018D540);
        func_801788B8(arg0, (s32) &func_sc04_019_8018C730);
    }
}

void func_sc04_019_8018C69C(void) {
}

void func_sc04_019_8018C6A4(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc04_019_801E3AD0[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_sc04_019_8018C6F0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C730);

void func_sc04_019_8018C78C(u8 *arg0) {
    D_sc04_019_801E3BA4[AF(arg0, u16, 2)]();
}

void func_sc04_019_8018C7C8(s32 arg0, s32 arg1, s32 arg2) {
    func_8012E8E0(arg0, (s32) &D_sc04_019_801E3B9C, arg2);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C7F0);

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C8A8);

s32 func_sc04_019_8018C90C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    return func_8012B2CC(arg0);
}

s32 func_sc04_019_8018C93C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    return func_8012B2CC(arg0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018C96C);

void func_sc04_019_8018CADC(u8 *arg0) {
    D_sc04_019_801E3CEC[AF(arg0, u16, 2)]();
}

s32 *func_sc04_019_8018CB18(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc04_019_8018C8A8() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc04_019_8018CB94(u8 *arg0) {
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

s32 func_sc04_019_8018CC04(void) {
    return D_sc04_019_801E79A0 == 2;
}

void func_sc04_019_8018CC1C(void) {
    func_8002D4C8(0x7E0, 0);
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018CC40);

void func_sc04_019_8018CD74(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc04_019_8018C93C((s32) arg0);
        }
    }
}

void func_sc04_019_8018CDDC(void) {
}

void func_sc04_019_8018CDE4(void) {
}

INCLUDE_ASM("asm/stg/sc04_019/nonmatchings/sc04_019", func_sc04_019_8018CDEC);
