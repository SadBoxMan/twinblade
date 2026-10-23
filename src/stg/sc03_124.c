#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_124_8018E630[])();
extern void (*D_sc03_124_8018E638[])();
extern void (*D_sc03_124_8018E640[])();
extern u8 D_sc03_124_8018E59C;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern u8 D_sc03_124_8018AEDC;
extern u8 D_sc03_124_8018E618;
extern u8 D_sc03_124_8018E620;
extern void func_8012B260();
extern void (*D_sc03_124_8018E660[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_124_8018E648;
extern void (*D_sc03_124_8018E668[])();
extern u8 D_sc03_124_8018E654;
extern void func_8016EDEC();
void func_sc03_124_8017D990(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_sc03_124_8017DA18(u8 *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void (*D_sc03_124_8018E670[])();
extern void (*D_sc03_124_8018E678[])();
extern void (*D_sc03_124_8018E684[])();
extern void (*D_sc03_124_8018E690[])();
extern s32 D_80127050;
extern void (*D_sc03_124_8018E944[])();
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern void (*D_sc03_124_8018E94C[])();
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
extern void func_sc03_124_8017DB4C();
extern void func_8012A094();
extern void (*D_sc03_124_8018E954[])();
extern void func_sc03_124_8017DBC4();
extern void func_sc03_124_8017DD04();
extern void (*D_sc03_124_8018F01C[])();
extern u8 D_sc03_124_8018F038;
extern void func_sc03_124_801843E0();
s32 func_sc03_124_8017E880(s32 arg0);
extern void (*D_sc03_124_8018F1C8[])();
extern u8 D_sc03_124_8018F190;
extern void func_80178CBC();
extern s32 func_sc03_124_801842D4();
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc03_124_8018F1DC;
s32 func_sc03_124_8017ECFC(s32 arg0);
extern void (*D_sc03_124_8018F330[])();
extern u8 D_sc03_124_8018F210;
extern void (*D_sc03_124_8018F46C[])();
extern void (*D_sc03_124_8018FBE4[])();
extern void func_sc03_124_8017F768();
extern void func_8012E8E0();
extern void func_8012E88C();
extern void func_sc03_124_801843B8();
extern u8 D_sc03_124_8018FBF4;
extern u8 D_sc03_124_801D3BC4;
extern void func_sc03_124_8017FFC8();
extern u8 D_sc03_124_8018FBEC;
s32 func_sc03_124_80180020(s32 arg0);
extern void (*D_sc03_124_8018FC14[])();
extern void (*D_sc03_124_8018FDFC[])();
extern void (*D_sc03_124_8018FE1C[])();
extern void (*D_sc03_124_8018FEA4[])();
extern u8 D_sc03_124_8018FE4C;
extern void (*D_sc03_124_8018FF38[])();
extern void (*D_sc03_124_8019003C[])();
extern void (*D_sc03_124_80190088[])();
extern void func_sc03_124_8018107C();
extern s32 func_8012B2CC();
s32 func_sc03_124_80181840(s32 arg0);
extern void (*D_sc03_124_801901D0[])();
extern u8 func_80172710;
extern void func_80178BF8();
extern s32 func_sc03_124_801817AC();
extern void func_8002D4C8();
extern s32 func_8012E57C();
extern void func_80029124();
extern void func_800D0F4C();
extern s32 D_sc03_124_801E2460;
extern s32 func_8012BEE8();
extern void func_sc03_124_80181CF8();
extern void (*D_sc03_124_801901EC[])();
extern s32 func_sc03_124_80181D40();
extern void func_sc03_124_80181E7C();
extern void (*D_sc03_124_80190200[])();
extern u8 D_80078EBA;
extern void func_sc03_124_80181FFC();
extern void (*D_sc03_124_80190214[])();
extern s32 func_sc03_124_80182044();
extern void func_sc03_124_80182164();
extern void (*D_sc03_124_80190228[])();
extern void (*D_sc03_124_80190234[])();
extern s32 D_sc03_124_801E1A30[];
extern u8 D_sc03_124_801E1A48[];
extern void (*D_sc03_124_8019067C[])();
extern void (*D_sc03_124_801906A8[])();
extern void (*D_sc03_124_801906B0[])();
extern void (*D_sc03_124_801906C0[])();
extern void (*D_sc03_124_801906D0[])();
extern void (*D_sc03_124_801906E0[])();
extern void func_8001C214();
extern void func_8012C588();
extern void func_sc03_124_8018236C();
extern u8 D_sc03_124_80190684;
extern void func_8012C218();
extern void func_8012AD80();
extern void func_80128ED8();
extern void func_80016714();
extern void func_8012B414();
extern u8 D_sc03_124_801906B8;
extern u8 D_sc03_124_80194714;
extern void func_8001D0E8();
extern u16 D_800B99DA;
extern s32 func_80029504();
extern u8 D_sc03_124_801906C8;
extern u8 D_sc03_124_801943AC;
extern u8 D_sc03_124_801906D8;
extern u8 D_sc03_124_801948AC;
extern void (*D_sc03_124_80190700[])();
extern u8 D_sc03_124_801906F0;
extern void (*D_sc03_124_80190738[])();
extern u8 D_sc03_124_801E1BD0;
extern void func_sc03_124_80183C34();
extern void func_8013CB84();
extern void func_sc03_124_80183E38();
extern void func_800D06E8();
s32 func_sc03_124_80183FAC(s32 arg0);
extern s32 func_sc03_124_80184088();
extern void func_sc03_124_801841EC();
extern u8 D_80078EB1;
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern void (*D_sc03_124_801BBE68[])();
extern u8 D_sc03_124_801BBE70;
extern void func_8012E8A8();
extern void func_80029514();
extern s32 func_sc03_124_801846CC();
extern s32 func_8016F1AC();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern s32 func_8014B12C();
extern void func_8012B178();
extern s32 func_8012B030();
extern s32 func_8012BE98();
extern void (*D_sc03_124_801BBE88[])();
extern s32 D_sc03_124_801E245C;
extern u8 D_sc03_124_801E2548;
extern u8 D_sc03_124_801BBE80;
extern u8 D_sc03_124_801C5480;
extern void func_sc03_124_8018502C();
extern void func_sc03_124_80184FC4();
extern void (*D_sc03_124_801BC160[])();
extern void func_sc03_124_801850A0();
extern void func_sc03_124_80185100();
extern void func_8001C97C();
extern s16 D_sc03_124_801BBED0[];
extern u8 D_sc03_124_801BBE94[];
extern u8 D_sc03_124_801BBE90[];
extern S12 D_sc03_124_801BBEB8;
extern u8 D_sc03_124_801BBEA8;
extern u8 D_sc03_124_801BBEC4;
extern void * func_sc03_124_80185394();
extern s32 func_sc03_124_80185614();
extern s32 func_sc03_124_80184894();
extern void func_8012E688();
extern void func_sc03_124_8018567C();
extern void func_sc03_124_801856E0();
extern void (*D_sc03_124_801BC184[])();
extern u8 D_sc03_124_801BC174;
extern s32 func_sc03_124_801859D0();
s32 func_sc03_124_80185984(s32 arg0);
extern s16 D_sc03_124_801E1C88;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc03_124_801BCBF8[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s32 D_sc03_124_801E2358;
extern void func_800D24A0();
extern void func_sc03_124_80185C98();
extern s16 D_80115126;
extern s32 D_sc03_124_801BCA2C[];
extern void (*D_sc03_124_801D52BC[])();
extern void (*D_sc03_124_801D52D0[])();
extern u8 D_sc03_124_801D52C4;
extern void func_8001CB00();
extern void func_801292C8();
extern void (*D_sc03_124_801DE38C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_124_801DE278;
extern u8 func_sc03_124_80189CF0;
extern s32 D_sc03_124_801DE368[];

void func_sc03_124_8017BE9C(u8 *arg0) {
    D_sc03_124_8018E630[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017BED8(u8 *arg0) {
    D_sc03_124_8018E638[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017BF14(u8 *arg0) {
    D_sc03_124_8018E640[AF(arg0, u16, 2)]();
}

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 D_sc03_124_801E1A18;

extern void func_8001BFD0();
extern s32 func_800291B4();
extern s32 func_80029524();
extern void func_800D0C48();
extern u8 D_sc03_124_8018E894;
extern void func_800D1724();
extern u8 D_sc03_124_8018FC3C;
extern void func_sc03_124_8018095C();
extern u8 D_sc03_124_8018FE14;
extern s32 func_sc03_124_80183EE4();
extern u8 D_sc03_124_801BBCF0;
extern void func_8012B14C();
extern u8 D_sc03_124_801DE488;
extern s32 func_sc03_124_80189D4C();
extern u16 D_sc03_124_801DE494;
extern u16 D_sc03_124_801DE496;
extern u16 D_sc03_124_801DE498;
extern void func_800291C8();
extern void func_80131E00();

extern u8 D_sc03_124_801B94EC;
extern u8 D_sc03_124_801BEA50;
extern s32 func_sc03_124_801845FC();
extern s32 func_800D0F8C();
extern s32 func_800D0EC4();
extern void func_800D0F0C();
extern s32 func_8012E544();
extern u8 D_sc03_124_801B95A4;
extern u8 D_sc03_124_801D4814;
extern u8 D_sc03_124_8018F1E4;
extern u8 D_sc03_124_801D414C;
extern s32 func_sc03_124_801842F8();
extern s32 func_sc03_124_8017EBEC();
extern u8 D_sc03_124_8018F1EC;
extern void func_sc03_124_8017F1A0();
extern u8 D_sc03_124_8018F37C;
extern void func_80178B18();
extern u8 D_sc03_124_8018F350;
extern u8 D_sc03_124_8018F358;
extern u8 D_sc03_124_801BF488;
extern u8 D_sc03_124_8018F784;
extern u8 D_sc03_124_8018F478;
extern u8 D_sc03_124_8018F498;
extern s32 D_sc03_124_801E1A1C;
extern void (*D_sc03_124_8018FB8C[])();
extern s32 D_sc03_124_8018FBE0;
extern u8 D_sc03_124_801BB9B0;
extern s32 func_80174774();
extern s32 func_sc03_124_8017F3BC();
extern u8 D_sc03_124_8018F4B8;
extern void func_8017B368();
extern void func_sc03_124_801851D8();
void func_sc03_124_80185238(s16 arg0);
extern u8 D_sc03_124_8018F7C8;
extern void func_sc03_124_8017F40C();
extern u8 D_sc03_124_8018FA9C;
extern u8 D_sc03_124_801B9550;
extern u8 D_sc03_124_8018FC10;
extern u8 D_sc03_124_8018FC11;
extern u8 D_sc03_124_8018FC12;
extern u8 D_sc03_124_8018FC13;
extern s32 func_sc03_124_8017FF64();
extern u8 D_sc03_124_8018FBFC;
extern u8 D_sc03_124_8018FC54;
extern u8 D_sc03_124_8018FCB4;
extern u8 D_sc03_124_8018FD84;
extern s32 func_80029178();
extern u8 D_sc03_124_8018FE2C;
extern u8 D_sc03_124_8018FE24;
extern u8 D_sc03_124_801BA0BC;
extern void func_sc03_124_80180CC8();
extern u8 D_sc03_124_80190008;
extern u8 D_sc03_124_80190018;
extern u8 D_sc03_124_801D71F0;
extern u8 D_sc03_124_801DE0E8;

extern u8 D_sc03_124_8018E960;
void func_sc03_124_80183F80(u8 *arg0);
void func_sc03_124_80185754(s32 arg0, s32 arg1);

extern u8 D_sc03_124_801B94F8;
extern s32 func_sc03_124_80185308();
void func_sc03_124_8017E048(s32 arg0);
extern u8 D_sc03_124_8018E958;
extern void func_sc03_124_8017EC50();
extern u8 D_sc03_124_801B95B0;
extern u8 D_sc03_124_801B9560;
extern void func_sc03_124_8018004C();

extern u8 D_sc03_124_801DE4EC;


extern void func_sc03_124_80189818();

extern u8 D_sc03_124_8019037C;
extern void func_sc03_124_80182420();
extern s32 *D_sc03_124_801E1BC8;
extern u8 D_sc03_124_801903B4;
extern u8 D_sc03_124_801903EC;
extern u8 D_sc03_124_80190414;
extern u8 D_sc03_124_8019044C;
extern u8 D_sc03_124_801904C4;
extern u8 D_sc03_124_8019051C;
extern u8 D_sc03_124_8019056C;
extern u8 D_sc03_124_801905CC;
extern u8 D_sc03_124_80190614;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

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
extern u8 D_80078E78;
extern u8 D_800AF630;
extern void func_8012AD44();
extern void func_sc03_124_80183CF0();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 D_sc03_124_801E2440;
extern s32 D_sc03_124_801E2444;
extern void func_80131C78();
extern s32 func_8012CBCC();
extern void func_80143B6C();

extern u8 D_80078EB0;
extern s32 D_sc03_124_801E1BCC;
extern void func_sc03_124_80182488();
extern void func_sc03_124_80182E30();
extern u8 D_sc03_124_801BBF20;
extern void *D_sc03_124_801E256C;

extern s32 func_80133784();
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
typedef struct { s16 x, y, z, pad; } FeSv;
extern u16 D_sc03_124_801E19F8;
extern void *D_801151D4;
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void func_8012F2E8();
extern s32 func_8012CB64();
extern s32 func_8016F1C4();
extern u16 D_801202A0;

extern s32 func_sc03_124_80185648();

typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
extern u8 D_sc03_124_801E17F8;
extern s32 func_8012C750();
extern u8 *func_8012913C();
extern u8 D_80126B58;
extern s16 D_sc03_124_8018AECC[];
extern s32 func_801487F4();
extern s32 func_80148800();
extern s32 func_80012A60();
extern s16 D_80126940[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 func_80012B04();
extern s32 func_80012ABC();
extern s32 func_80012C6C();
extern void func_8012F14C();
extern u8 D_sc03_124_80190110;
extern u8 D_sc03_124_80190128;
extern void func_80017714();
extern s32 func_8012BD14();
extern s16 D_sc03_124_801BC18C;

void func_sc03_124_8017BF50(u8 *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = AF(o, u16 *, 0xDC);
    if (p != 0) {
        t = &D_sc03_124_801E17F8;
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

void func_sc03_124_8017C094(void) {
    FeSv v;
    u8 *p;

    p = D_801151D4;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc03_124_801E19F8 = v.y;
}

void func_sc03_124_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_sc03_124_8018E59C, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_sc03_124_8018E59C, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_124_8017C1AC(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc03_124_801E19F8;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc03_124_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_124_8018E618);
    SetScript(arg0, (s32) &D_sc03_124_8018AEDC);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc03_124_8018E620;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern s32 func_8012B200();

extern s16 D_800B9A08;

extern s32 *func_sc03_124_80181A1C();

extern u8 D_sc03_124_801BA8E4;
extern u8 D_sc03_124_801BA7F4;
extern u8 D_sc03_124_80190090[][8];
extern u8 D_sc03_124_801900A0[][16];

typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
extern void func_8014B2A8();
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
extern s16 D_sc03_124_801E2360;
extern s16 D_sc03_124_801E2364;
extern s16 D_sc03_124_801E2368;
extern s16 D_sc03_124_801E23E8;
extern s32 D_sc03_124_801E235C;
extern s16 D_sc03_124_801BCB5C[];
extern u8 D_sc03_124_801E7408;
extern u8 D_sc03_124_801BCB58;
extern void func_sc03_124_801E4BA4();
extern void func_sc03_124_801895C8();
extern void func_sc03_124_80187EA0();

extern u8 D_80115148[];
extern s32 func_80139A68();
extern u8 D_801117EC;
extern E12s D_8010EDEE[];
extern E12b D_8010EDF2[];
extern s16 D_800A6586[];
extern u8 *D_sc03_124_801E234C;
extern u8 *D_sc03_124_801E2354;
extern s32 D_sc03_124_801BCB1C[];
extern s32 D_sc03_124_801BCB38[];
extern u8 D_sc03_124_8018BC64[];
extern s32 D_sc03_124_8018BD24[];
extern s32 D_sc03_124_801DE844[];
extern u8 D_sc03_124_801E2410[];
extern s32 *D_sc03_124_801E23CC[];
extern u8 D_sc03_124_801E3784;
extern u8 D_sc03_124_801E7540;
extern u8 D_sc03_124_801E75B0;
extern u8 D_sc03_124_801E7584;
extern u8 D_sc03_124_801E756C;
extern u8 D_sc03_124_801E3F58;
extern OtRef D_800AE7BC[];
extern u8 D_80115138[];
extern u8 D_80115140[];
extern S8P D_80115158[];
extern u16 D_sc03_124_801BC522;
extern u16 D_sc03_124_801BC536;

extern u8 *D_sc03_124_801BC118[];
extern u8 D_sc03_124_801BC0E8;
extern u8 D_sc03_124_801BC100;

extern s32 func_80014ED4();
extern s32 func_80015018();
extern s32 func_sc03_124_80188C68();
extern void func_sc03_124_8018654C();
extern u16 D_80115122;
extern u16 D_80115120;
extern u8 D_8011514E;
extern u8 D_80115143;

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_80143970();
extern void func_8012B23C();
extern s32 func_800291DC();
extern u8 D_sc03_124_801DE454;
extern u8 D_sc03_124_801DE49C;

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017C2B0);

void func_sc03_124_8017C338(u8 *arg0) {
    D_sc03_124_8018E660[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017C374(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_124_8018E648, 0xFD);
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

void func_sc03_124_8017C538(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_124_8017C5CC(u8 *arg0) {
    D_sc03_124_8018E668[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017C608(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_124_8018E654, 0x18);
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

void func_sc03_124_8017C6AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_124_8017C710(u8 *obj) {
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

s32 func_sc03_124_8017D5F0(u8 *arg0) {
    func_8016EDEC((s32) func_sc03_124_8017D990, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_124_8017D640(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_124_8017D664(u8 *arg0) {
    func_8016EDEC((s32) func_sc03_124_8017DA18, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017D6D4);

void func_sc03_124_8017D784(void) {
    func_800D1EBC();
}

s32 func_sc03_124_8017D7A4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc03_124_8017D7F8(u8 *arg0) {
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

void func_sc03_124_8017D88C(u8 *arg0) {
    D_sc03_124_8018E670[AF(arg0, u8, 0x15)]();
}

void func_sc03_124_8017D8C8(u8 *arg0) {
    D_sc03_124_8018E678[AF(arg0, u8, 0x15)]();
}

void func_sc03_124_8017D904(u8 *arg0) {
    D_sc03_124_8018E684[AF(arg0, u8, 0x15)]();
}

void func_sc03_124_8017D940(u8 *arg0) {
    D_sc03_124_8018E690[AF(arg0, u8, 0x15)]();
}

void func_sc03_124_8017D97C(void) {
    D_80127050 = 1;
}

void func_sc03_124_8017D990(u8 *arg0) {
    D_sc03_124_8018E944[AF(arg0, u8, 0x214)]();
}

void func_sc03_124_8017D9CC(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc03_124_8017D9E0(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc03_124_8017DA18(u8 *arg0) {
    D_sc03_124_8018E94C[AF(arg0, u8, 0x214)]();
}

void func_sc03_124_8017DA54(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc03_124_8017DA68(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc03_124_8017DA88(void) {
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
    func_8012A018((s32) func_sc03_124_8017DB4C, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_sc03_124_8017DB4C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc03_124_8017DB4C((s32) &D_80126948);
}

void func_sc03_124_8017DB4C(s32 arg0) {
    D_sc03_124_8018E954[AF(arg0, u8, 4)]();
}

void func_sc03_124_8017DB88(s32 arg0) {
    s32 pad[2];
    func_sc03_124_8017DBC4(arg0, arg0 + 0xA0);
    func_sc03_124_8017DD04(arg0);
}

void func_sc03_124_8017DBBC(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

void func_sc03_124_8017DBC4(u8 *o, u8 *a1) {
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
        if ((s16)func_80012A60(AF(o, s16, 0x1A), D_sc03_124_8018AECC[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_sc03_124_8018AECC[*a1];
}

void func_sc03_124_8017DD04(u8 *o) {
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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017DEF8);

s32 func_sc03_124_8017DFE4(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc03_124_801BEA50);
    func_sc03_124_801843B8(arg0);
    return func_sc03_124_801845FC(arg0, (s32) &D_sc03_124_801B94EC, 0, 0x60);
}

void func_sc03_124_8017E048(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc03_124_8018E960);
    func_8012E88C(arg0);
    func_sc03_124_80183F80(arg0);
    func_sc03_124_801843B8(arg0);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E098);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E228);

void func_sc03_124_8017E380(u8 *arg0) {
    D_sc03_124_8018F01C[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017E3BC(s32 arg0) {
    s32 temp_v0;

    if (func_800D0F8C(arg0 & 0xFF) == 0) {
        temp_v0 = func_800D0EC4();
        if (temp_v0 != 0) {
            func_800D0F0C(temp_v0, arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E408);

void func_sc03_124_8017E4E4(void) {
    func_80029514(0xD2);
    func_80029124(0x114, 1);
}

void func_sc03_124_8017E510(void) {
    AF(func_8012E544(0x17B), s16, 0xFC) = 2;
}

void func_sc03_124_8017E534(void) {
    AF(func_8012E544(0x17B), s16, 0xFC) = 1;
}

void func_sc03_124_8017E558(void) {
    AF(func_8012E544(0x17B), s16, 0xFC) = 4;
}

void func_sc03_124_8017E57C(void) {
    AF(func_8012E544(0x17B), s16, 0xFC) = 3;
}

void func_sc03_124_8017E5A0(void) {
    AF(func_8012E544(0x17B), s16, 0xFC) = 5;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E5C4);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E62C);

void func_sc03_124_8017E694(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((func_sc03_124_80185308(5) != 0) && (func_sc03_124_801846CC((s32) arg0) != 0)) {
            func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B94F8, 0, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            func_sc03_124_8017E048((s32) arg0);
        }
        break;
    }
}

void func_sc03_124_8017E738(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B94EC, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        if ((func_sc03_124_80185308(5) != 0) && (func_sc03_124_801846CC((s32) arg0) != 0)) {
            AF(arg0, s16, 2) = 1;
            func_sc03_124_801843E0((s32) arg0, (s32) &D_sc03_124_8018E958);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E7E0);

s32 func_sc03_124_8017E880(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018F038);
}

void func_sc03_124_8017E8AC(u8 *arg0) {
    D_sc03_124_8018F1C8[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017E8E8(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc03_124_8018F190);
}

void func_sc03_124_8017E914(void) {
    func_80029514(0xDC);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017E934);

void func_sc03_124_8017EA10(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc03_124_801842D4(0xB, 0x17) == 0) {
        func_sc03_124_8017E880((s32) arg0);
    }
}

void func_sc03_124_8017EA5C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc03_124_801842D4(0xB, 0x17) != 0) {
        AF(arg0, s16, 2) = 1;
        func_sc03_124_801843E0((s32) arg0, (s32) &D_sc03_124_8018F038);
    }
}

void func_sc03_124_8017EAB4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018F038);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017EB04);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017EB84);

s32 func_sc03_124_8017EBEC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc03_124_801D4814);
    func_sc03_124_801843B8(arg0);
    return func_sc03_124_801845FC(arg0, (s32) &D_sc03_124_801B95A4, 0, 0x60);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017EC50);

s32 func_sc03_124_8017ECA0(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc03_124_8018F1E4);
    func_8012E88C(arg0);
    temp_v0 = SetScript(arg0, (s32) &D_sc03_124_801D414C);
    AF(arg0, s16, 0x84) = 3;
    return temp_v0;
}

s32 func_sc03_124_8017ECFC(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018F1DC);
}

void func_sc03_124_8017ED28(u8 *arg0) {
    D_sc03_124_8018F330[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017ED64(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc03_124_8018F210);
}

void func_sc03_124_8017ED90(s32 arg0) {
    if (!(D_800B99DA & 3) && (func_sc03_124_801842F8(0x11, 0x23, 0x17, 0) != 0)) {
        func_sc03_124_8017EBEC(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017EDE8);

void func_sc03_124_8017EED4(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B95A4, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        func_sc03_124_8017EC50((s32) arg0);
        if ((func_sc03_124_80185308(8) != 0) && (func_sc03_124_801846CC((s32) arg0) != 0)) {
            AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
            AF(arg0, s16, 2) = 1;
            func_sc03_124_801843E0((s32) arg0, (s32) &D_sc03_124_8018F1DC);
        }
        break;
    }
}

void func_sc03_124_8017EF90(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = temp_v0;
    if ((s16) temp_v0 >= 0x10) {
        func_8012E688((s32) arg0, 0x6B5, 0);
        AF(arg0, u16, 0x84) = 0U;
    }
    if (!(D_800B99DA & 3) && (func_sc03_124_801842F8(0x11, 0x23, 0x17, 0) == 0)) {
        AF(arg0, s16, 2) = 6;
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc03_124_801D4814);
        func_sc03_124_801843B8((s32) arg0);
        AF(arg0, s16, 0x34) = 0;
        func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B95B0, 1, 0x60);
    }
}

void func_sc03_124_8017F054(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_80029514(0x136);
        func_sc03_124_8017ECFC(arg0);
    }
}

void func_sc03_124_8017F09C(void) {
}

void func_sc03_124_8017F0A4(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_80029504(arg0) - 0x12C) >= 0xAU) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_sc03_124_80183EE4(arg0, (s32) &D_sc03_124_8018F1EC) != 0) {
        if (func_sc03_124_801842F8(0x12, 0, 0x17, 0) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_sc03_124_8018F1E4);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc03_124_801D414C);
            AF(arg0, s16, 0x84) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018F1DC);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        temp_v0 = func_801788B8(arg0, (s32) &func_sc03_124_8017F1A0);
        AF(arg0, s32, 0xD4) = temp_v0;
        func_8012E8E0(temp_v0, (s32) &D_sc03_124_8018F1DC);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017F1A0);

void func_sc03_124_8017F20C(u8 *arg0) {
    D_sc03_124_8018F46C[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017F248(void) {
    func_80029514(0x186);
}

void func_sc03_124_8017F268(u8 *arg0) {
    if (D_80126B9C & 0x08000000) {
        AF(arg0, s16, 2) = 2;
        func_80178B18((s32) arg0, (s32) &D_sc03_124_8018F37C);
    }
}

void func_sc03_124_8017F2A8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_8012C218(arg0);
    }
}

void func_sc03_124_8017F2E8(s32 arg0) {
    if ((u32) (func_80029504(arg0) - 0x181) >= 5U) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_sc03_124_80183EE4(arg0, (s32) &D_sc03_124_8018F358) != 0) {
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s16, 2) = 1;
        func_8012E8E0(arg0, (s32) &D_sc03_124_8018F350);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc03_124_801BF488);
    }
}

void func_sc03_124_8017F380(u8 *arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_8018F784 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    func_80029514(0x19A);
}

s32 func_sc03_124_8017F3BC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc03_124_8018F498);
    func_8012E88C(arg0);
    return SetScript(arg0, (s32) &D_sc03_124_8018F478);
}

void func_sc03_124_8017F40C(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018F498);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017F438);

void func_sc03_124_8017F5CC(u8 *arg0) {
    s32 temp_v0;

    if (D_sc03_124_801E1A1C != 0) {
        temp_v0 = D_sc03_124_801E1A1C - 1;
        D_sc03_124_801E1A1C = temp_v0;
        if (temp_v0 <= 0) {
            func_8002D4C8(0xD, 0x6C0);
        }
    }
    D_sc03_124_8018FB8C[AF(arg0, u16, 2)](arg0);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017F63C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017F768);

void func_sc03_124_8017F840(void) {
}

void func_sc03_124_8017F848(u8 *arg0) {
    D_sc03_124_8018FBE4[AF(arg0, u16, 2)]();
}

void func_sc03_124_8017F884(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_124_801BB9B0);
    AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) D_sc03_124_8018FBE0;
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0x1C) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_124_8017F90C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_8012BEE8((s32) arg0, arg1, arg2) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (func_80174774() != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_8012E8A8((s32) arg0);
            return;
        }
        break;
    case 2:
        if (func_8012BEE8((s32) arg0, arg1, arg2) != 0) {
            func_8012C218((s32) arg0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017F9D8);

void func_sc03_124_8017FA34(void) {
    func_80029514(0x190);
}

void func_sc03_124_8017FA54(void) {
    func_8002D4C8(0x6C0, 0);
    D_sc03_124_801E1A1C = 0x96;
}

s32 func_sc03_124_8017FA84(s32 arg0, s32 arg1) {
    D_sc03_124_801E1A18 = 1;
    return 1;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017FA98);

void func_sc03_124_8017FB04(s32 arg0) {
    if (!(D_800B99DA & 3) && (func_80029504(arg0) >= 0x182)) {
        func_sc03_124_8017F3BC(arg0);
    }
}

void func_sc03_124_8017FB54(s32 arg0) {
    func_sc03_124_8017F768(arg0);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017FB74);

void func_sc03_124_8017FC58(s32 arg0) {
    if (D_sc03_124_801E1A18 == 1) {
        func_8017B368(arg0, (s32) &D_sc03_124_8018F4B8);
    }
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_8012E8E0(arg0, (s32) &D_sc03_124_8018F498);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc03_124_8018F478);
    }
}

void func_sc03_124_8017FCE4(void) {
    func_sc03_124_801851D8(7);
}

void func_sc03_124_8017FD04(void) {
    func_sc03_124_80185238(7);
}

void func_sc03_124_8017FD24(void) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, 7);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xE8) = 1;
    }
}

s32 func_sc03_124_8017FD58(void) {
    return D_sc03_124_801E2460 != 1;
}

void func_sc03_124_8017FD70(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (D_80126B9C & 0x08000000) {
            AF(arg0, u16, 0x34) = 1U;
            func_80178B18((s32) arg0, (s32) &D_sc03_124_8018F7C8);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_80029514(0x1AE);
            func_sc03_124_8017F40C((s32) arg0);
        }
        break;
    }
}

void func_sc03_124_8017FE10(void) {
}

void func_sc03_124_8017FE18(s32 arg0) {
    func_8012C588(0x3D7, arg0);
}

void func_sc03_124_8017FE3C(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x224);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

void func_sc03_124_8017FE78(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x224);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

void func_sc03_124_8017FEB4(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (D_80126B9C & 0x08000000) {
            AF(arg0, u16, 0x34) = 1U;
            func_80178B18((s32) arg0, (s32) &D_sc03_124_8018FA9C);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_80029514(0x1E0);
            AF(arg0, s16, 2) = 6;
            func_sc03_124_801843E0((s32) arg0, (s32) &D_sc03_124_8018F498);
        }
        break;
    }
}

s32 func_sc03_124_8017FF64(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc03_124_801BEA50);
    func_sc03_124_801843B8(arg0);
    return func_sc03_124_801845FC(arg0, (s32) &D_sc03_124_801B9550, 0, 0x60);
}

void func_sc03_124_8017FFC8(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc03_124_8018FBF4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc03_124_801D3BC4);
    func_sc03_124_801843B8(arg0);
}

s32 func_sc03_124_80180020(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018FBEC);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018004C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018009C);

void func_sc03_124_801801B0(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc03_124_801BEA50);
    AF(arg0, s32, 0x1C) = 0xF;
}

void func_sc03_124_801801F4(u8 *arg0) {
    D_sc03_124_8018FC14[AF(arg0, u16, 2)]();
}

void func_sc03_124_80180230(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
}

void func_sc03_124_8018023C(s32 arg0) {
    if (!(D_800B99DA & 3) && (func_sc03_124_801842F8((s32) D_sc03_124_8018FC10, (s32) D_sc03_124_8018FC11, (s32) D_sc03_124_8018FC12, (s32) D_sc03_124_8018FC13) != 0)) {
        func_sc03_124_8017FF64(arg0);
    }
}

void func_sc03_124_801802A8(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B9560, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            func_sc03_124_8017FFC8((s32) arg0);
        }
        break;
    }
}

void func_sc03_124_80180334(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B9550, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        if (func_sc03_124_801846CC((s32) arg0, arg1, arg2) != 0) {
            AF(arg0, s16, 2) = 1;
            func_sc03_124_801843E0((s32) arg0, (s32) &D_sc03_124_8018FBEC);
        }
        break;
    }
}

void func_sc03_124_801803CC(u8 *arg0) {
    if (AF(arg0, s16, 0xFC) != 0) {
        func_sc03_124_8018004C();
    }
    if (!(D_800B99DA & 3) && (func_sc03_124_801842F8(9, 4, 0x12, 0) == 0)) {
        AF(arg0, s16, 2) = 6;
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc03_124_801BEA50);
        func_sc03_124_801843B8((s32) arg0);
        AF(arg0, s16, 0x34) = 0;
        func_sc03_124_801845FC((s32) arg0, (s32) &D_sc03_124_801B9560, 0, 0x60);
    }
}

void func_sc03_124_80180478(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_sc03_124_80180020(arg0);
    }
}

void func_sc03_124_801804B8(void) {
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801804C0);

void func_sc03_124_801805AC(s32 arg0) {
    if ((u32) (func_80029504(arg0) - 0xC8) >= 0xAU) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_sc03_124_80183EE4(arg0, (s32) &D_sc03_124_8018FBFC) != 0) {
        if (func_sc03_124_801842F8(9, 4, 0x12, 0) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_sc03_124_8018FBF4);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc03_124_801D3BC4);
            func_sc03_124_801843B8(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018FBEC);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    }
}

void func_sc03_124_80180684(void) {
}

void func_sc03_124_8018068C(u8 *arg0) {
    D_sc03_124_8018FDFC[AF(arg0, u16, 2)]();
}

s32 func_sc03_124_801806C8(void) {
    return D_sc03_124_801E2460 == 1;
}

void func_sc03_124_801806E0(void) {
    func_8012C588(0x1CD, 0);
}

void func_sc03_124_80180704(void) {
    func_800D1724((s32) &D_sc03_124_8018E894);
}

void func_sc03_124_8018072C(void) {
}

void func_sc03_124_80180734(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    if (func_80029178(0x106) & 0xFF) {
        func_80178CBC((s32) arg0, (s32) &D_sc03_124_8018FD84);
        return;
    }
    if (func_800D0F8C(0x58) == 0) {
        func_80178CBC((s32) arg0, (s32) &D_sc03_124_8018FC54);
        return;
    }
    func_80178CBC((s32) arg0, (s32) &D_sc03_124_8018FCB4);
    func_80029124(0x106, 1);
    func_800D0F4C(0x58);
}

void func_sc03_124_801807D8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018FC3C);
    }
}

void func_sc03_124_80180828(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178B18((s32) arg0, (s32) &D_sc03_124_8018FCB4);
    func_80029124(0x106, 1);
    func_800D0F4C(0x58);
}

void func_sc03_124_80180868(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018FC3C);
    }
}

void func_sc03_124_801808B8(s32 arg0, s32 arg1) {
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
    func_sc03_124_801843E0(arg0, (s32) &D_sc03_124_8018FC3C);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc03_124_8018095C);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018095C);

void func_sc03_124_80180A24(u8 *arg0) {
    D_sc03_124_8018FE1C[AF(arg0, u16, 2)]();
}

void func_sc03_124_80180A60(s32 arg0, s32 arg1, s32 arg2) {
    func_8012E8E0(arg0, (s32) &D_sc03_124_8018FE14, arg2);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80180A88);

void func_sc03_124_80180B40(u8 *arg0) {
    D_sc03_124_8018FEA4[AF(arg0, u16, 2)]();
}

void func_sc03_124_80180B7C(void) {
}

void func_sc03_124_80180B84(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    func_80178CBC((s32) arg0, (s32) &D_sc03_124_8018FE4C);
}

void func_sc03_124_80180BB0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_8018FE2C | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc03_124_80180C0C(s32 arg0) {
    s32 temp_v0;

    if (((u32) (func_80029504(arg0) - 0xC8) >= 0x190U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_124_801BA0BC);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    func_8012E8E0(arg0, (s32) &D_sc03_124_8018FE24);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_8018FE2C | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc03_124_80180CC8);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80180CC8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80180D48);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80180E40);

void func_sc03_124_80181040(u8 *arg0) {
    D_sc03_124_8018FF38[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018107C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801810E4);

void func_sc03_124_801812D0(u8 *arg0) {
    D_sc03_124_8019003C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018130C);

void func_sc03_124_801814A4(u8 *arg0) {
    D_sc03_124_80190088[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801814E0);

void func_sc03_124_8018156C(s32 arg0) {
    func_sc03_124_8018107C(arg0);
}

void func_sc03_124_8018158C(s32 arg0) {
    s32 temp_v0;

    if (((u32) (func_80029504(arg0) - 0xC8) >= 0x190U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_124_801D71F0);
    SetScript(arg0, (s32) &D_sc03_124_801DE0E8);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    func_8012E8E0(arg0, (s32) &D_sc03_124_80190018);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_80190008 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x810;
    AF(arg0, s16, 2) = 1;
}

void func_sc03_124_80181644(s32 arg0, s32 arg1) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    func_8012AD80(arg0, arg1);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0xFE));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x100));
    if (func_8012BEE8(arg0, (s32) temp_a1) != 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801816C8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801817AC);

s32 func_sc03_124_80181810(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    return func_8012B2CC(arg0);
}

s32 func_sc03_124_80181840(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    return func_8012B2CC(arg0);
}

void func_sc03_124_80181870(u8 *o) {
    u8 *r;
    s32 s1;
    r = func_8012C1B8();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, AF(o, s16, 0x70) == 0 ? &D_sc03_124_801BA7F4 : &D_sc03_124_801BA8E4);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_sc03_124_801900A0[AF(o, s16, 0x70)] | 0x40000000;
    func_8012E8E0(o, D_sc03_124_80190090[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = func_80029504();
    if ((u8)func_80029178(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            func_801788B8(o, func_sc03_124_80181A1C);
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

void func_sc03_124_801819E0(u8 *arg0) {
    D_sc03_124_801901D0[AF(arg0, u16, 2)]();
}

s32 *func_sc03_124_80181A1C(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc03_124_801817AC() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc03_124_80181A98(u8 *arg0) {
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

s32 func_sc03_124_80181B08(void) {
    return D_sc03_124_801E2460 == 2;
}

void func_sc03_124_80181B20(void) {
    func_8002D4C8(0x7E0, 0);
}

void func_sc03_124_80181B44(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            func_80178CBC(o, &D_sc03_124_80190110);
            AF(o, s16, 0x34) = 2;
        } else {
            func_80178CBC(o, &D_sc03_124_80190128);
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
            func_sc03_124_80181810(o);
        }
        break;
    }
}

void func_sc03_124_80181C78(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc03_124_80181840((s32) arg0);
        }
    }
}

void func_sc03_124_80181CE0(void) {
}

void func_sc03_124_80181CE8(void) {
}

s32 func_sc03_124_80181CF0(void) {
    return 0x27;
}

void func_sc03_124_80181CF8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc03_124_80181D04(u8 *arg0) {
    D_sc03_124_801901EC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80181D40);

void func_sc03_124_80181DA8(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc03_124_80181D40((s32) arg0, arg1) == 1) {
        func_sc03_124_80181CF8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80181DF4);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80181E34);

void func_sc03_124_80181E7C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc03_124_80181E88(u8 *arg0) {
    D_sc03_124_80190200[AF(arg0, u16, 2)]();
}

void func_sc03_124_80181EC4(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc03_124_801842D4(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_sc03_124_80181E7C((s32) arg0);
    }
}

void func_sc03_124_80181F2C(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc03_124_801842D4(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_124_80181F90(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_sc03_124_801842D4(7, 0x13) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_sc03_124_80181FFC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc03_124_80182008(u8 *arg0) {
    D_sc03_124_80190214[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182044);

void func_sc03_124_80182098(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc03_124_80182044((s32) arg0, arg1) == 0) {
        func_sc03_124_80181FFC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801820DC);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018211C);

void func_sc03_124_80182164(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc03_124_80182170(u8 *arg0) {
    D_sc03_124_80190228[AF(arg0, u16, 2)]();
}

void func_sc03_124_801821AC(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc03_124_801842D4(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_sc03_124_80182164((s32) arg0);
    }
}

void func_sc03_124_80182214(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc03_124_801842D4(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_124_80182278(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_sc03_124_801842D4(0xB, 0x10) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_sc03_124_801822E4(u8 *arg0) {
    D_sc03_124_80190234[AF(arg0, u16, 2)]();
}

void func_sc03_124_80182320(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc03_124_80182330(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xA);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018236C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182420);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182488);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801824DC);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182598);

void func_sc03_124_80182980(s32 arg0, s32 arg1) {
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = (u16) AF(arg0, u16, 6) >> 0xC;
    temp_a2 = D_sc03_124_801E1A30[temp_v1];
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) & 0x7FFFFFFF);
    (*(s32 *)((u8 *)D_sc03_124_801E1A48 + ((temp_v1 << 6)) * 1)) = arg1;
    AF(temp_a2, u16, 8) = (u16) AF(arg0, u16, 0);
    AF(temp_a2, u16, 0xA) = (u16) AF(arg0, u16, 2);
    AF(temp_a2, u16, 0xC) = (u16) AF(arg0, u16, 4);
    AF(temp_a2, s16, 0x12) = (s16) ((AF(arg0, u16, 6) & 0xF) << 0xA);
}

void func_sc03_124_801829F8(u8 *arg0) {
    D_sc03_124_8019067C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182A34);

void func_sc03_124_80182B50(u8 *arg0) {
    D_sc03_124_801906A8[AF(arg0, u16, 2)]();
}

void func_sc03_124_80182B8C(u8 *arg0) {
    D_sc03_124_801906B0[AF(arg0, u16, 2)]();
}

void func_sc03_124_80182BC8(u8 *arg0) {
    D_sc03_124_801906C0[AF(arg0, u16, 2)]();
}

void func_sc03_124_80182C04(u8 *arg0) {
    D_sc03_124_801906D0[AF(arg0, u16, 2)]();
}

void func_sc03_124_80182C40(void) {
}

void func_sc03_124_80182C48(u8 *a) {
    s32 v;
    u8 *m;

    switch (AF(a, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(a) != 0) {
            AF(a, s32, 0x1C) = 0x40;
            AF(a, u16, 0x34)++;
            do {
                v = rand() & 0x3FFF;
                v += 0x7800;
                if (!(rand() & 1)) {
                    v = -v;
                }
            } while (0);
            AF(a, s32, 0xE0) = v;
            AF(a, s32, 0xE4) = 0;
        }
        break;
    case 1:
        m = AF(a, u8 *, 0x20);
        AF(a, s32, 0xE4) += AF(a, s32, 0xE0);
        AF(a, s32, 0xDC) += AF(a, s32, 0xE4);
        AF(m, u16, 0x12) = AF(a, u16, 0xDE);
        if (func_8012BEE8(a) != 0) {
            AF(a, u16, 0x34)++;
            AF(a, s32, 0x1C) = (rand() & 0x3F) + 0x40;
        }
        break;
    case 2:
        AF(a, s32, 0xDC) += AF(a, s32, 0xE4);
        AF(AF(a, u8 *, 0x20), u16, 0x12) = AF(a, u16, 0xDE);
        if (func_8012BEE8(a) != 0) {
            AF(a, s32, 0x1C) = 0x40;
            AF(a, u16, 0x34)++;
            AF(a, s32, 0xE0) = -AF(a, s32, 0xE0);
        }
        break;
    case 3:
        AF(a, s32, 0xE4) += AF(a, s32, 0xE0);
        AF(a, s32, 0xDC) += AF(a, s32, 0xE4);
        AF(AF(a, u8 *, 0x20), u16, 0x12) = AF(a, u16, 0xDE);
        if (func_8012BEE8(a) != 0) {
            AF(a, u16, 0x34) = 0;
            AF(a, s32, 0x1C) = (rand() & 0xFF) + 0x40;
        }
        break;
    }
}

void func_sc03_124_80182DF4(u8 *arg0) {
    D_sc03_124_801906E0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182E30);

void func_sc03_124_80182F8C(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_8019037C;
    func_sc03_124_80182420(0x474, 0x4B0);
}

void func_sc03_124_80182FC0(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_801903B4;
    func_sc03_124_80182420(0x474, 0x4EC);
}

void func_sc03_124_80182FF4(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_801903EC;
    func_sc03_124_80182420(0x474, 0x4B0);
}

void func_sc03_124_80183028(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_80190414;
    func_sc03_124_80182420(0x474, 0x4B0);
}

void func_sc03_124_8018305C(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_8019044C;
    func_sc03_124_80182420(0x474, 0x528);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183090);

void func_sc03_124_80183104(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_801904C4;
    func_sc03_124_80182420(0x474, 0x1A4);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183138);

void func_sc03_124_80183184(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_8019051C;
    func_sc03_124_80182420(0x12C, 0x1A4);
}

void func_sc03_124_801831B8(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_8019056C;
    func_sc03_124_80182420(0x474, 0x4B0);
}

void func_sc03_124_801831EC(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_801905CC;
    func_sc03_124_80182420(0x474, 0x4B0);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183220);

void func_sc03_124_8018326C(void) {
    D_sc03_124_801E1BC8 = &D_sc03_124_80190614;
    func_sc03_124_80182420(0x564, 0x1A4);
}

s32 func_sc03_124_801832A0(void) {
    return -1;
}

void func_sc03_124_801832A8(void) {
    s32 i;

    D_sc03_124_801E1BCC = (D_80078EB1 * 0x3C) + D_80078EB0;
    for (i = 0; i < 6; i++) {
        AF(((void **)&D_sc03_124_801E1A30)[i], s32, 4) |= 0x80000000;
    }
    for (i = 2; i < 0x12; i++) {
        func_sc03_124_80182488(i);
    }
    func_sc03_124_80182E30();
    if (D_sc03_124_801E245C != 0) {
        D_sc03_124_801E245C -= 1;
    }
}

void func_sc03_124_80183364(s32 arg0, s32 arg1) {
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
    func_sc03_124_8018236C();
}

void func_sc03_124_80183410(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc03_124_80190684, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183454);

void func_sc03_124_80183570(u8 *arg0, s32 arg1, s32 arg2) {
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

void func_sc03_124_8018360C(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 8);
    func_8012B414();
}

void func_sc03_124_80183640(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_124_80194714);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc03_124_801906B8);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_124_801836B8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) ((u32) rsin(D_800B99DA * 0x30, arg1, arg2, arg3) >> 5);
}

void func_sc03_124_80183700(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (func_80029504(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_124_801943AC);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc03_124_801906C8);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_124_801837A4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_124_801948AC);
    func_8012E8E0(arg0, (s32) &D_sc03_124_801906D8);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_sc03_124_8018381C(u8 *arg0) {
    D_sc03_124_80190700[AF(arg0, u16, 2)]();
}

void func_sc03_124_80183858(s32 arg0, s32 arg1) {
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
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_801906F0 | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc03_124_801838D4(void) {
}

void func_sc03_124_801838DC(u8 *arg0) {
    D_sc03_124_80190738[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183918);

void func_sc03_124_801839A8(s32 arg0) {
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
            if (((Fx24 *) &D_sc03_124_801E1BD0)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            func_8012AD44(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc03_124_801E1BD0)[i];
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
                    func_sc03_124_80183BE4((s32) p);
                }
            }
            func_sc03_124_80183CF0(p);
        }
    }
}

void func_sc03_124_80183BE4(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc03_124_801E1BD0;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc03_124_80183C34((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183C34);

void func_sc03_124_80183CF0(u8 *o) {
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

void func_sc03_124_80183E08(void) {
    func_8013CB84();
    func_sc03_124_80183E38();
    func_800D06E8();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183E38);

void func_sc03_124_80183EC4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc03_124_80183ED4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc03_124_80183EE4(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc03_124_801BBCF0;
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

void func_sc03_124_80183F80(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_sc03_124_80183FAC(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_sc03_124_80183FD8(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

s32 func_sc03_124_80184004(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184088);

void func_sc03_124_801841B8(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc03_124_80184088();
    func_sc03_124_801841EC((s32) arg0);
}

void func_sc03_124_801841EC(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

s16 func_sc03_124_8018422C(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc03_124_80184254(u8 *arg0) {
    D_sc03_124_801BBE68[AF(arg0, u16, 2)]();
}

void func_sc03_124_80184290(void) {
}

void func_sc03_124_80184298(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) D_80078EB1 >= arg1 && (s32) D_80078EB1 < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc03_124_801842D4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801842F8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184350);

void func_sc03_124_801843B8(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_801BBE70 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc03_124_801843D8(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_124_801843E0(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

s32 func_sc03_124_80184428(void) {
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

s32 func_sc03_124_80184484(void) {
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

s32 func_sc03_124_801844F8(void) {
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

s32 func_sc03_124_8018456C(void) {
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

void func_sc03_124_801845C8(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

s32 func_sc03_124_801845FC(u8 *o, s16 *t, s32 mode, s32 b) {
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

s32 func_sc03_124_801846CC(u8 *a) {
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

s32 func_sc03_124_80184894(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (func_8014B12C() != 0) {
        return 2;
    }
    return 1;
}

void func_sc03_124_801848DC(u8 *arg0) {
    D_sc03_124_801BBE88[AF(arg0, u16, 2)]();
}

void func_sc03_124_80184918(void) {
}

void func_sc03_124_80184920(void) {
}

void func_sc03_124_80184928(void) {
}

void func_sc03_124_80184930(void) {
}

void func_sc03_124_80184938(void) {
}

void func_sc03_124_80184940(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_sc03_124_801E2548, 0x14, arg2, arg3);
    D_sc03_124_801E245C = 0;
    func_8012CAE4(arg0);
}

void func_sc03_124_80184984(void) {
}

void func_sc03_124_8018498C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_124_801C5480);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_sc03_124_801BBE80);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_124_80184A14(u8 *a) {
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
                func_sc03_124_801850A0(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc03_124_8018502C(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc03_124_80185100(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc03_124_80184FC4(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc03_124_8018502C(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc03_124_80184FC4(a);
        }
        break;
    }
    D_sc03_124_801BC160[AF(a, u16, 2)](a);
}

void func_sc03_124_80184BEC(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_sc03_124_801BBED0[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc03_124_801BBE90 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_sc03_124_801BBE90 + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_sc03_124_801BBE94 + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_sc03_124_801BBEA8 | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_sc03_124_801BBEC4;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc03_124_801BBEB8;
    AF(a, s16, 0x10A) = 6;
    func_sc03_124_80184FC4(a);
    AF(a, void *, 0xDC) = func_sc03_124_80185394;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184D8C);

void func_sc03_124_80184E08(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc03_124_80184894() == 2) {
        func_sc03_124_8018502C(arg0);
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
        func_sc03_124_8018502C(arg0);
    }
    func_sc03_124_80185614(arg0);
}

void func_sc03_124_80184ED4(s32 arg0) {
    func_sc03_124_80185614(arg0);
}

void func_sc03_124_80184EF4(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc03_124_80184894() == 2) {
        func_sc03_124_80184FC4(arg0);
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
            func_sc03_124_80184FC4(arg0);
            return;
        }
        func_sc03_124_80185614(arg0);
    }
}

void func_sc03_124_80184FC4(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_124_801BBE94 + ((D_sc03_124_801BBED0[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc03_124_80185614(arg0);
}

void func_sc03_124_8018502C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_124_801BBE90 + ((D_sc03_124_801BBED0[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc03_124_80185614(arg0);
}

void func_sc03_124_801850A0(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_124_801BBE90 + ((D_sc03_124_801BBED0[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc03_124_80185100(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_124_801BBE90 + ((D_sc03_124_801BBED0[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc03_124_80185614(arg0);
}

void func_sc03_124_80185180(s32 arg0, s32 arg1) {
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

void func_sc03_124_801851D8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc03_124_80185754(arg0, 0x3C);
    }
}

void func_sc03_124_80185238(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc03_124_80185280(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc03_124_80185754(arg0, 0x3C);
    }
}

void func_sc03_124_801852D0(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185308);

void *func_sc03_124_80185394(u8 *o) {
    if (D_800B9A08 == 0x3069) return 0;
    if (AF(o, u16, 2) != 2) return 0;
    if (AF(o, u16, 0x34) != 0) return 0;
    if (AF(o, s16, 0x10A) != 0) return 0;
    if (!func_sc03_124_80185438(o)) return 0;
    if (func_sc03_124_801859D0(o)) return 0;
    AF(o, s16, 0x34) = 1;
    func_80178BF8();
    return &func_80172710;
}

s32 func_sc03_124_80185438(s32 arg0) {
    s32 o[2];
    FeSv v;

    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

void func_sc03_124_80185498(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &D_80078E78;
    v = func_80029504();
    s0 = D_sc03_124_801BC118[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_sc03_124_801BC0E8;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_sc03_124_801BC0E8;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)func_80029178(0xFA) != 0) s0 = &D_sc03_124_801BC100;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_sc03_124_801BC0E8;
        if ((u32)(v - 100) < 500) s0 = &D_sc03_124_801BC100;
        if (func_sc03_124_8018456C() == 1) s0 = &D_sc03_124_801BC100;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_sc03_124_801BC0E8;
        if (func_sc03_124_80184428() == 3) s0 = &D_sc03_124_801BC100;
        if (func_sc03_124_8018456C() == 1) s0 = &D_sc03_124_801BC100;
        break;
    }
    func_80178CBC(o, s0);
}

s32 func_sc03_124_80185614(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc03_124_80185648(arg0);
}

s32 func_sc03_124_80185648(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_sc03_124_8018567C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc03_124_801856E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc03_124_80185754(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc03_124_801857AC(u8 *arg0) {
    D_sc03_124_801BC184[AF(arg0, u16, 2)]();
}

void func_sc03_124_801857E8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_124_801BC174 | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_124_80185864(u8 *o) {
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

s32 func_sc03_124_80185984(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc03_124_801859D0((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_sc03_124_801859D0(u8 *o) {
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
        if (func_sc03_124_80185ADC(p) == 0) continue;
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

s32 func_sc03_124_80185ADC(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_sc03_124_801BC18C; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

void func_sc03_124_80185B38(s32 arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc03_124_801BBF20, (s32) sp10);
    AF(D_sc03_124_801E256C, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

s16 func_sc03_124_80185B78(void) {
    return D_sc03_124_801E1C88;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185B88);

void func_sc03_124_80185BD4(void) {
    func_80029444();
    func_801754A8();
    D_sc03_124_801BCBF8[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc03_124_80185C44(void) {
    func_800D24A0(3);
    D_8011511A = 0;
    func_sc03_124_80185C98();
    D_80115130 = 0;
    D_sc03_124_801E2358 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185C98);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018654C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80186ED8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80187010);

void func_sc03_124_80187814(void) {
    u8 unused[8];
    s32 r;
    s32 n;
    s32 t;
    s16 c;
    u8 *m;

    D_801151D0 = D_801151C8[D_800B9A02];
    m = &D_80126B58;
    if (D_sc03_124_801E2360 != 0) {
        D_sc03_124_801E2360--;
        r = func_8014168C(D_8011511A);
        if ((s16)r != 3) {
            n = 8;
            t = 0x3E7;
        } else {
            n = 3;
            t = 0x18;
        }
        c = D_sc03_124_801E2360;
        if (c >= 0x3F) {
            if (D_sc03_124_801E2364 != 0xFF) {
                D_sc03_124_801E2364 += 0x10;
                if (D_sc03_124_801E2364 >= 0x100) {
                    D_sc03_124_801E2364 = 0xFF;
                }
            } else {
                D_sc03_124_801E2368 += 0x10;
                if (D_sc03_124_801E2368 >= 0x100) {
                    D_sc03_124_801E2368 = 0xFF;
                }
            }
        } else if (c < 0x20) {
            if (D_sc03_124_801E2368 != 0) {
                D_sc03_124_801E2368 -= 0x10;
                if (D_sc03_124_801E2368 < 0) {
                    D_sc03_124_801E2368 = 0;
                }
            } else {
                D_sc03_124_801E2364 -= 0x10;
                if (D_sc03_124_801E2364 < 0) {
                    D_sc03_124_801E2364 = 0;
                }
            }
        } else if (c == 0x30) {
            func_8014BB24(m, D_sc03_124_801BCB5C[(s16)r], 1);
            func_8014B944(m, 0x1000000, 1);
            if ((s16)r == 2) {
                func_8014B2A8();
            }
            func_sc03_124_801E4BA4(n);
            func_8014BD24(m, t);
        }
        func_sc03_124_801895C8();
        if (D_sc03_124_801E2360 == 0 && func_801621CC(n) != 0) {
            func_801622C4();
            func_80139954();
            D_800B9A15 = 0;
            D_80115112 = 4;
            return;
        }
    } else if (D_sc03_124_801E2358 == 0) {
        D_80115130 = D_sc03_124_801E2358 = (s32)&D_sc03_124_801E7408;
        func_80139954();
        D_sc03_124_801E235C = func_801376E8(D_sc03_124_801E2358, &D_sc03_124_801BCB58);
        if (D_sc03_124_801E23E8 != 0) {
            func_8001AAA0(0x16);
        }
    } else if (func_801399F0(D_sc03_124_801E235C) != 0) {
        D_sc03_124_801E2358 = 0;
        func_8002D4C8(0x46F, 0);
        D_8011511A = 0;
        D_80115112 = 2;
    }
    func_sc03_124_80187EA0();
    func_80137B80();
}

s32 func_sc03_124_80187B50(void) {
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
    pad = func_80014ED4(0);
    if ((u16)pad != 0) {
        D_sc03_124_801E2358 = 0;
    }
    rep = func_80015018(0);
    q = &D_8011511A;
    r = func_8014168C(*q);
    idx = (u16)*q;
    kind = D_80115138[idx];
    if (pad & 0x40) {
        d = func_sc03_124_80188C68(kind, (s16)r);
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
            func_sc03_124_8018654C();
        }
    }
    return 0;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80187EA0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801880E0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801882AC);

s32 func_sc03_124_80188544(s16 kind, s16 i) {
    s32 ret;
    u8 v;
    s32 n;
    s32 *p;

    ret = (s32)&D_801117EC;
    switch (kind) {
    case 10:
        if (D_80115126 != 5) {
            v = D_sc03_124_801E234C[i];
            ret = D_sc03_124_8018BD24[v];
        } else {
            ret = D_sc03_124_801BCB1C[i];
        }
        break;
    case 7:
        v = func_800291B4(D_sc03_124_8018BC64[i]) ;
        if (v == 0) {
            break;
        }
        if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
            ret = func_sc03_124_80189504((i & 3) + 6);
            func_80139A68(D_8010EDEE[v].v, 0);
        } else {
            ret = func_sc03_124_80189504(5);
        }
        break;
    case 8:
        if (D_80115148[0] != 0) {
            v = func_800291B4(D_sc03_124_8018BC64[i]) ;
            if (v == 0) {
                break;
            }
            if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
                ret = func_sc03_124_80189504((i & 3) + 6);
                func_80139A68(D_8010EDEE[v].v, 0);
            } else {
                ret = func_sc03_124_80189504(5);
            }
        } else {
            v = func_800291B4(D_sc03_124_8018BC64[i]) ;
            if (v != 0) {
                ret = D_sc03_124_8018BD24[v];
            }
        }
        break;
    case 13:
        v = D_sc03_124_801E2354[i];
        if (func_800291B4(v + 0x62) & 0x80) {
            ret = D_sc03_124_801DE844[v];
        }
        break;
    case 14:
        v = D_sc03_124_801E2410[i];
        if (v == 0xFF) {
            break;
        }
        v++;
        if ((func_800291B4(v + 0x62) & 0xF0) == 0xC0) {
            ret = func_sc03_124_80189504((i & 1) | 6);
            func_80139A68((s16)(D_800A6586[v] * 9 / 10), 0);
        } else if ((func_800291B4(v + 0x62) & 0xF0) == 0xE0) {
            ret = (s32)&D_sc03_124_801E3784;
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                ret = (s32)&D_sc03_124_801E7540;
                if (D_sc03_124_801E23CC[i] == 0) {
                    ret = D_sc03_124_801BCB38[i];
                }
            } else {
                p = D_sc03_124_801E23CC[i];
                if (p != 0) {
                    ret = (s32)&D_sc03_124_801E75B0;
                    if (p[1] != 0) {
                        ret = (s32)&D_sc03_124_801E7584;
                    }
                } else {
                    ret = (s32)&D_sc03_124_801E756C;
                }
            }
        } else if (D_sc03_124_801E23CC[i] != 0) {
            ret = (s32)&D_sc03_124_801E3F58;
        }
        break;
    default:
        ret = func_sc03_124_80189504(0);
        break;
    }
    return ret;
}

Sprt *func_sc03_124_8018893C(Sprt *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
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
                    p->y = D_sc03_124_801BC522 - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc03_124_801BC536 + 1;
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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80188C68);

s32 func_sc03_124_80189504(s32 arg0) {
    return D_sc03_124_801BCA2C[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_sc03_124_8018953C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc03_124_801BCA2C[((D_80115126 * 0xA) + (s16) arg0)];
    D_sc03_124_801E2358 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018957C);

void func_sc03_124_801895C8(void) {
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
    ((PolyG4 *)p)->r0 = ((PolyG4 *)p)->r1 = ((PolyG4 *)p)->g0 = ((PolyG4 *)p)->g1 = ((PolyG4 *)p)->b0 = ((PolyG4 *)p)->b1 = D_sc03_124_801E2364;
    ((PolyG4 *)p)->r2 = ((PolyG4 *)p)->r3 = ((PolyG4 *)p)->g2 = ((PolyG4 *)p)->g3 = ((PolyG4 *)p)->b2 = ((PolyG4 *)p)->b3 = D_sc03_124_801E2368;
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

void func_sc03_124_801897DC(u8 *arg0) {
    D_sc03_124_801D52BC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189818);

void func_sc03_124_801898DC(u8 *arg0) {
    D_sc03_124_801D52D0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189918);

void func_sc03_124_80189A00(s32 arg0, s32 arg1, s32 arg2) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFE);
        func_sc03_124_80189818(arg0, 0x110);
    }
}

void func_sc03_124_80189A40(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_sc03_124_801D52C4, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_124_80189AC8(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189B10);

void func_sc03_124_80189BBC(u8 *arg0) {
    D_sc03_124_801DE38C[AF(arg0, u16, 2)]();
}

void func_sc03_124_80189BF8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_124_801DE278) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_124_8018AEDC);
        func_801788B8(arg0, (s32) &func_sc03_124_80189CF0);
    }
}

void func_sc03_124_80189C5C(void) {
}

void func_sc03_124_80189C64(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc03_124_801DE368[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_sc03_124_80189CB0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189CF0);

s32 func_sc03_124_80189D4C(p, d, e)
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

void func_sc03_124_80189F00(u8 *arg0) {
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
        D_sc03_124_801E2440 = v;
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
        D_sc03_124_801E2444 = AF(arg0, s32, 0x14);
        v = func_8012CBCC(arg0);
        D_sc03_124_801E2440 = v;
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
            v = -D_sc03_124_801E2444;
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
        D_sc03_124_801E2440 = v;
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
    func_sc03_124_80189D4C(arg0, -0x28, 1);
    if (--AF(arg0, s16, 0x108) == 0) {
        func_800291C8(0xA, AF(arg0, s16, 0xFE));
    }
}

void func_sc03_124_8018A250(u8 *o) {
    u8 *w = &D_800AF630;
    s32 v;
    u16 t;

    if (func_8012C354(o, &D_sc03_124_801DE454) != 0) {
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
        AF(o, u8 *, 0xBC) = &D_sc03_124_801DE49C;
        AF(o, u8, 0xC1) = 0;
        AF(o, s32, 0xC4) = 1;
        func_8012B23C(o);
        func_80143970(o);
        func_8012B030(o);
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xAE) = -1;
        AF(o, u8, 0x75) = 8;
        D_sc03_124_801DE494 = AF(o, u16, 6);
        D_sc03_124_801DE496 = AF(o, u16, 0xA);
        D_sc03_124_801DE498 = AF(o, u16, 0xE);
        if (AF(w, s16, 0xA3D8) == 0x1052) {
            func_sc03_124_8018A470(o);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A3C8);

void func_sc03_124_8018A470(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc03_124_801DE4EC);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A4B8);

void func_sc03_124_8018A594(u8 *arg0) {
    AF(arg0, u16, 0x5C) = 0x8E10;
    if (AF(arg0, s16, 0x76) < 0x320) {
        AF(arg0, s16, 0x76) = 0x384;
    }
}

void func_sc03_124_8018A5B8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 4;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_8012B14C((s32) arg0, (s32) &D_sc03_124_801DE488);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x108) = 0x28;
    func_sc03_124_80189D4C((s32) arg0, -0x28, 1);
}

void func_sc03_124_8018A61C(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s16, 0xFC) = 0;
    func_800291C8(0xA, (s32) (s16) (AF(arg0, u16, 0xFE) | 0x100));
    D_sc03_124_801DE494 = AF(arg0, u16, 6);
    D_sc03_124_801DE496 = AF(arg0, u16, 0xA);
    D_sc03_124_801DE498 = AF(arg0, u16, 0xE);
}

void func_sc03_124_8018A698(s32 arg0) {
    func_80131E00(arg0, 3);
}

void func_sc03_124_8018A6B8(void) {
}

void func_sc03_124_8018A6C0(u8 *arg0) {
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
        AF(arg0, u16, 6) = (u16) D_sc03_124_801DE494;
        AF(arg0, u16, 0xA) = (u16) D_sc03_124_801DE496;
        AF(arg0, u16, 0xE) = (u16) D_sc03_124_801DE498;
        func_8012B030((s32) arg0);
        AF(arg0, u16, 0x5C) = 0x8E10;
        if (AF(arg0, s16, 0x76) < 0x320) {
            AF(arg0, s16, 0x76) = 0x384;
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A788);
