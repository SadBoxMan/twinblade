#include "common.h"
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
extern void func_sc03_124_80185394();
extern void func_sc03_124_80185614();
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
extern void func_sc03_124_80189D4C();
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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017BF50);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017C094);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017C1AC);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017C710);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017DBC4);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8017DD04);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80181870);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80181B44);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182C48);

void func_sc03_124_80182DF4(u8 *arg0) {
    D_sc03_124_801906E0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182E30);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182F8C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182FC0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80182FF4);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183028);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018305C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183090);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183104);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183138);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183184);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801831B8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801831EC);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183220);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018326C);

s32 func_sc03_124_801832A0(void) {
    return -1;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801832A8);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801839A8);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80183CF0);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184004);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184088);

void func_sc03_124_801841B8(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc03_124_80184088();
    func_sc03_124_801841EC((s32) arg0);
}

void func_sc03_124_801841EC(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018422C);

void func_sc03_124_80184254(u8 *arg0) {
    D_sc03_124_801BBE68[AF(arg0, u16, 2)]();
}

void func_sc03_124_80184290(void) {
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184298);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184428);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184484);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801844F8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018456C);

void func_sc03_124_801845C8(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801845FC);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80184894);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185180);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185280);

void func_sc03_124_801852D0(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185308);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185394);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185438);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185498);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185614);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185648);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185864);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801859D0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185ADC);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80185B38);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80187814);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80187B50);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80187EA0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801880E0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801882AC);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80188544);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018893C);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_801895C8);

void func_sc03_124_801897DC(u8 *arg0) {
    D_sc03_124_801D52BC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189818);

void func_sc03_124_801898DC(u8 *arg0) {
    D_sc03_124_801D52D0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189918);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189A00);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189D4C);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_80189F00);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A250);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A3C8);

void func_sc03_124_8018A470(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc03_124_801DE4EC);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A4B8);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A594);

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

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A6C0);

INCLUDE_ASM("asm/stg/sc03_124/nonmatchings/sc03_124", func_sc03_124_8018A788);
