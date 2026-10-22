#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_017_80190C58[])();
extern void (*D_sc05_017_80190C60[])();
extern void (*D_sc05_017_80190C68[])();
extern u8 D_sc05_017_80190BC4;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern u8 D_sc05_017_8018D504;
extern u8 D_sc05_017_80190C40;
extern u8 D_sc05_017_80190C48;
extern void func_8012B260();
extern void (*D_sc05_017_80190C88[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_017_80190C70;
extern void (*D_sc05_017_80190C90[])();
extern u8 D_sc05_017_80190C7C;
extern void (*D_sc05_017_80190CA8[])();
extern u8 D_sc05_017_80190C98;
extern void func_8001C214();
extern void (*D_sc05_017_80190CE0[])();
extern u8 D_sc05_017_801ECDB0;
extern void func_sc05_017_8017DA08();
extern void func_8013CB84();
extern void func_sc05_017_8017DC0C();
extern void func_800D06E8();
extern void func_8016EDEC();
void func_sc05_017_8017E050(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_sc05_017_8017E0D8(u8 *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void (*D_sc05_017_80190D28[])();
extern void (*D_sc05_017_80190D30[])();
extern void (*D_sc05_017_80190D3C[])();
extern void (*D_sc05_017_80190D48[])();
extern s32 D_80127050;
extern void (*D_sc05_017_80190FFC[])();
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern void (*D_sc05_017_80191004[])();
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
extern void func_sc05_017_8017E20C();
extern void func_8012A094();
extern void (*D_sc05_017_8019100C[])();
extern void func_sc05_017_8017E284();
extern void func_sc05_017_8017E3C4();
extern void (*D_sc05_017_80191158[])();
extern s32 func_sc05_017_8017E7EC();
extern u8 D_sc05_017_801B9DB4;
extern u8 D_sc05_017_80191160;
extern void func_8012E8E0();
extern void func_8012E88C();
extern void func_sc05_017_80184990();
extern s32 func_sc05_017_80184BD4();
extern u8 D_sc05_017_801B6354;
s32 func_sc05_017_8017E8CC(s32 arg0);
extern void (*D_sc05_017_801912B8[])();
extern s32 func_sc05_017_80184B44();
extern s32 D_sc05_017_80191184[];
extern s32 func_80029178();
extern void func_80029124();
extern s32 func_sc05_017_80184CA4();
extern void func_sc05_017_80185C54();
extern s32 func_sc05_017_801858E0();
extern void func_sc05_017_8017E85C();
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc05_017_801912E8;
extern void func_sc05_017_801849B8();
s32 func_sc05_017_8017F398(s32 arg0);
extern void (*D_sc05_017_80191350[])();
extern u8 D_sc05_017_80191318;
extern void func_80178CBC();
extern s32 D_sc05_017_80191304[];
extern s32 func_sc05_017_8017F6C8();
extern u8 D_sc05_017_80191364;
extern u8 D_sc05_017_801B9A64;
extern u8 D_sc05_017_801B63B0;
extern u8 D_sc05_017_8019136C;
extern u8 D_sc05_017_801B9B0C;
extern void func_sc05_017_8017F73C();
extern s32 func_sc05_017_8017F794();
extern u8 D_sc05_017_801B63BC;
s32 func_sc05_017_8017F81C(s32 arg0);
extern void (*D_sc05_017_801913FC[])();
extern u8 D_sc05_017_8019139C;
extern s32 D_sc05_017_80191388[];
extern u8 D_sc05_017_801913D4;
extern u16 D_sc05_017_801ECE68;
extern u16 D_sc05_017_801ECE6A;
extern s32 func_sc05_017_80180124();
extern u8 D_sc05_017_801B9964;
extern u8 D_sc05_017_801B63D4;
extern u8 D_sc05_017_8019142C;
s32 func_sc05_017_80180188(s32 arg0);
extern void func_sc05_017_8018026C();
extern void (*D_sc05_017_80191504[])();
extern u8 D_sc05_017_80191434;
extern u8 D_sc05_017_80191494;
extern u8 D_sc05_017_801B9A0C;
extern s32 D_sc05_017_80191450[];
s32 func_sc05_017_801800BC(s32 arg0);
extern s32 func_sc05_017_801848AC();
extern u8 D_sc05_017_801B63C8;
extern void func_sc05_017_801801B4();
extern u8 D_sc05_017_80191530;
extern u8 D_sc05_017_801B6468;
extern s32 func_sc05_017_80180A20();
extern u8 D_sc05_017_80191538;
extern void func_sc05_017_80180A94();
extern s32 func_sc05_017_80180BA8();
extern u8 D_sc05_017_801B6474;
s32 func_sc05_017_80180C30(s32 arg0);
extern void (*D_sc05_017_8019187C[])();
extern u8 D_sc05_017_80191568;
extern s32 D_sc05_017_80191554[];
extern u8 D_sc05_017_80191840;
extern u16 D_sc05_017_801ECE78;
extern u16 D_sc05_017_801ECE7A;
extern s32 func_sc05_017_801814F0();
extern u8 D_sc05_017_801918AC;
extern u8 D_sc05_017_801B649C;
extern u8 D_sc05_017_801918B4;
extern u8 D_sc05_017_801C0CFC;
extern void func_sc05_017_80181564();
extern s32 func_sc05_017_801815BC();
extern u8 D_sc05_017_801B64A8;
extern void (*D_sc05_017_80191990[])();
extern u8 D_sc05_017_80191910;
extern u8 D_sc05_017_801919AC;
s32 func_sc05_017_80181B04(s32 arg0);
extern void (*D_sc05_017_80191AA4[])();
extern u8 D_sc05_017_80191A54;
extern s32 D_sc05_017_801919E4[];
extern s32 func_sc05_017_80181E90();
extern u8 D_sc05_017_801B9C0C;
extern u8 D_sc05_017_80191AB8;
extern u8 D_sc05_017_801B6564;
extern s32 func_sc05_017_80181F00();
extern u8 D_sc05_017_801B6578;
s32 func_sc05_017_80181F60(s32 arg0);
extern void (*D_sc05_017_80191C18[])();
extern u8 D_sc05_017_80191B18;
extern s32 D_sc05_017_80191ADC[];
extern u8 D_sc05_017_80191C44;
s32 func_sc05_017_80182874(s32 arg0);
extern void func_sc05_017_801828A0();
extern void func_sc05_017_80182A28();
extern void (*D_sc05_017_80191E84[])();
extern s32 D_sc05_017_80191C68[];
extern u8 D_sc05_017_80191CF4;
extern u8 D_sc05_017_80191D4C;
extern u8 D_sc05_017_80191D6C;
extern u8 D_sc05_017_80191E04;
extern void (*D_sc05_017_80191F98[])();
extern u8 D_sc05_017_80191F38;
extern u8 D_sc05_017_80191F70;
extern u8 D_sc05_017_80191EC0;
extern u8 D_sc05_017_80191FD0;
s32 func_sc05_017_80183980(s32 arg0);
extern void (*D_sc05_017_80192140[])();
extern u8 D_sc05_017_801920BC;
extern u8 D_sc05_017_80192110;
extern u8 D_sc05_017_80192160;
s32 func_sc05_017_801841B8(s32 arg0);
extern void (*D_sc05_017_801921D8[])();
extern u8 D_sc05_017_801921A0;
s32 func_sc05_017_80184584(s32 arg0);
extern s32 func_sc05_017_80184660();
extern void func_sc05_017_801847C4();
extern u8 D_80078EB1;
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern void (*D_sc05_017_801B86DC[])();
extern u8 D_sc05_017_801B86E4;
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
extern void (*D_sc05_017_801B86FC[])();
extern void func_80016714();
extern s32 D_sc05_017_801ED7FC;
extern u8 D_sc05_017_801ED8E8;
extern void func_8001D0E8();
extern u8 D_sc05_017_801B86F4;
extern u8 D_sc05_017_801C0394;
extern void func_sc05_017_80185604();
extern void func_sc05_017_8018559C();
extern void (*D_sc05_017_801B89D4[])();
extern void func_sc05_017_80185678();
extern void func_sc05_017_801856D8();
extern void func_8001C97C();
extern s16 D_sc05_017_801B8744[];
extern u8 D_sc05_017_801B8708[];
extern u8 D_sc05_017_801B8704[];
extern S12 D_sc05_017_801B872C;
extern u8 D_sc05_017_801B871C;
extern u8 D_sc05_017_801B8738;
extern void func_sc05_017_8018596C();
extern void func_sc05_017_80185BEC();
extern s32 func_sc05_017_80184E6C();
extern void func_8012E688();
extern s32 func_8012BEE8();
extern s32 func_8012E57C();
extern void func_sc05_017_80185CB8();
extern void (*D_sc05_017_801B89F8[])();
extern u8 D_sc05_017_801B89E8;
extern s32 func_sc05_017_80185FA8();
s32 func_sc05_017_80185F5C(s32 arg0);
extern s16 D_sc05_017_801ECE90;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc05_017_801B946C[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s32 D_sc05_017_801ED560;
extern void func_800D24A0();
extern void func_sc05_017_80186270();
extern s16 D_80115126;
extern s32 D_sc05_017_801B92A0[];
extern s32 D_sc05_017_801ED648[];
extern u8 D_sc05_017_801ED660[];
extern void (*D_sc05_017_801E67B0[])();
extern void (*D_sc05_017_801E67DC[])();
extern void (*D_sc05_017_801E67E4[])();
extern void (*D_sc05_017_801E67F4[])();
extern void (*D_sc05_017_801E6804[])();
extern void (*D_sc05_017_801E6814[])();
extern void func_8012C588();
extern void func_sc05_017_80189DB4();
extern u8 D_sc05_017_801E67B8;
extern void func_8012C218();
extern void func_80128ED8();
extern void func_8012B414();
extern u8 D_sc05_017_801E67EC;
extern u8 D_sc05_017_801B61B4;
extern u16 D_800B99DA;
extern u8 D_sc05_017_801E67FC;
extern u8 D_sc05_017_801B5E4C;
extern u8 D_sc05_017_801E680C;
extern u8 D_sc05_017_801B634C;
extern void func_sc05_017_8018B264();
extern void (*D_sc05_017_801E682C[])();
extern s32 func_sc05_017_8018B2AC();
extern void func_sc05_017_8018B3E8();
extern void (*D_sc05_017_801E6840[])();
extern u8 D_80078EBA;
extern void func_sc05_017_8018B568();
extern void (*D_sc05_017_801E6854[])();
extern s32 func_sc05_017_8018B5B0();
extern void func_sc05_017_8018B6D0();
extern void (*D_sc05_017_801E6868[])();
extern void (*D_sc05_017_801E6874[])();
extern s8 D_sc05_017_801ED8F6;
extern s32 func_sc05_017_8018B850();
extern void (*D_sc05_017_801E687C[])();
extern u8 D_sc05_017_801E6884;
s32 func_sc05_017_8018BAE0(s32 arg0);
extern void (*D_sc05_017_801E6950[])();
extern s32 func_8014CB1C();
extern void func_8014B2A8();
extern void func_8002D4C8();
extern u8 D_sc05_017_801E6908;
extern u8 D_sc05_017_801E6968;
s32 func_sc05_017_8018BF4C(s32 arg0);
extern void (*D_sc05_017_801E6A3C[])();
extern u8 D_sc05_017_801E69CC;
extern s32 func_800D0EC4();
extern s32 func_sc05_017_80184A00();
extern s32 func_8012B2CC();
s32 func_sc05_017_8018C390(s32 arg0);
extern void (*D_sc05_017_801E9920[])();
extern u8 func_80172710;
extern void func_80178BF8();
extern s32 func_sc05_017_8018C2FC();
extern void func_800D0F4C();
extern s32 D_sc05_017_801ED800;
extern void (*D_sc05_017_801E9A58[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_017_801E9944;
extern u8 func_sc05_017_8018C974;
extern s32 D_sc05_017_801E9A34[];
extern void (*D_sc05_017_801E9B20[])();
extern void (*D_sc05_017_801E9B34[])();
extern u8 D_sc05_017_801E9B28;
extern void func_8001CB00();
extern void func_801292C8();

void func_sc05_017_8017BE9C(u8 *arg0) {
    D_sc05_017_80190C58[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017BED8(u8 *arg0) {
    D_sc05_017_80190C60[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017BF14(u8 *arg0) {
    D_sc05_017_80190C68[AF(arg0, u16, 2)]();
}

extern s32 func_sc05_017_801841B8();

extern void func_8001BFD0();
extern s32 func_800291B4();
extern void func_800D0C48();
extern u8 D_sc05_017_80191010;
extern u8 D_sc05_017_801B990C;
extern u8 D_sc05_017_801DC4EC;
extern u8 D_sc05_017_80191228;
extern u8 D_sc05_017_801B6714;
extern u8 D_sc05_017_801911C0;
extern u8 D_sc05_017_801B6364;
extern u8 D_sc05_017_801B6708;
extern void func_sc05_017_8017EAE0();
extern s32 func_sc05_017_801848D0();
extern s32 func_8012E544();
extern s32 D_sc05_017_801CE1C0;
extern s32 D_sc05_017_801D5210;
extern u8 D_sc05_017_801E6CDC;
extern u8 D_sc05_017_801918BC;
extern s32 D_sc05_017_801D2C58;
extern s32 D_sc05_017_801D5AFC;
extern s32 D_sc05_017_801ECE80;
extern void func_sc05_017_80181A4C();
extern s32 func_sc05_017_801844BC();
extern void func_8002AC00();
extern void func_800291A0();
extern u8 D_sc05_017_80191B90;
extern u8 D_sc05_017_801B6790;
extern u8 D_sc05_017_80191AC8;
extern u8 D_sc05_017_801E4758;
extern void func_sc05_017_80182318();
void func_sc05_017_801849B0(u8 *arg0);
extern u8 D_sc05_017_801B6778;
extern void func_sc05_017_80182034();
extern u8 D_sc05_017_801B6800;
extern s32 func_sc05_017_801832C4();
extern u8 D_sc05_017_801B680C;
extern void func_sc05_017_80183328();
extern s32 func_801789AC();
extern u8 D_sc05_017_80191EC8;
extern void func_8014AD7C();
extern u8 D_sc05_017_801B8564;

extern s32 D_sc05_017_801ECE70;

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_sc05_017_801839AC();
extern s32 func_sc05_017_80184AD0();
extern s32 D_sc05_017_801E68A0[];
extern s32 D_sc05_017_801E68B4[];

extern void func_sc05_017_801857B0();
void func_sc05_017_80185D2C(s32 arg0, s32 arg1);

extern u8 D_sc05_017_801B640C;
extern u8 D_sc05_017_801B645C;
s32 func_sc05_017_80180240(s32 arg0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017BF50);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017C094);

void func_sc05_017_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_sc05_017_80190BC4, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_sc05_017_80190BC4, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017C1AC);

void func_sc05_017_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_017_80190C40);
    SetScript(arg0, (s32) &D_sc05_017_8018D504);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc05_017_80190C48;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017C2B0);

void func_sc05_017_8017C338(u8 *arg0) {
    D_sc05_017_80190C88[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017C374(u8 *a) {
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
    o = func_800D222C(a, &D_sc05_017_80190C70, 0xFD);
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

void func_sc05_017_8017C538(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_017_8017C5CC(u8 *arg0) {
    D_sc05_017_80190C90[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017C608(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc05_017_80190C7C, 0x18);
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

void func_sc05_017_8017C6AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017C710);

void func_sc05_017_8017D5F0(u8 *arg0) {
    D_sc05_017_80190CA8[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017D62C(s32 arg0, s32 arg1) {
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
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_017_80190C98 | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc05_017_8017D6A8(void) {
}

void func_sc05_017_8017D6B0(u8 *arg0) {
    D_sc05_017_80190CE0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017D6EC);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017D77C);

void func_sc05_017_8017D9B8(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc05_017_801ECDB0;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc05_017_8017DA08((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017DA08);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017DAC4);

void func_sc05_017_8017DBDC(void) {
    func_8013CB84();
    func_sc05_017_8017DC0C();
    func_800D06E8();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017DC0C);

s32 func_sc05_017_8017DC98(u8 *arg0) {
    func_8016EDEC((s32) func_sc05_017_8017E050, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_017_8017DCE8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_017_8017DD0C(u8 *arg0) {
    func_8016EDEC((s32) func_sc05_017_8017E0D8, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017DD7C);

void func_sc05_017_8017DE2C(void) {
    func_800D1EBC();
}

s32 func_sc05_017_8017DE4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc05_017_8017DEA0(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = func_80029504(arg0, arg1);
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        func_800D1E28();
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        if (!(func_800291B4(0xCE) & 0xFF) && ((u32) (temp_s1 - 0x384) >= 0x6EU) && ((u32) (temp_s1 - 0x460) >= 0x32U)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc05_017_8017DF4C(u8 *arg0) {
    D_sc05_017_80190D28[AF(arg0, u8, 0x15)]();
}

void func_sc05_017_8017DF88(u8 *arg0) {
    D_sc05_017_80190D30[AF(arg0, u8, 0x15)]();
}

void func_sc05_017_8017DFC4(u8 *arg0) {
    D_sc05_017_80190D3C[AF(arg0, u8, 0x15)]();
}

void func_sc05_017_8017E000(u8 *arg0) {
    D_sc05_017_80190D48[AF(arg0, u8, 0x15)]();
}

void func_sc05_017_8017E03C(void) {
    D_80127050 = 1;
}

void func_sc05_017_8017E050(u8 *arg0) {
    D_sc05_017_80190FFC[AF(arg0, u8, 0x214)]();
}

void func_sc05_017_8017E08C(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc05_017_8017E0A0(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc05_017_8017E0D8(u8 *arg0) {
    D_sc05_017_80191004[AF(arg0, u8, 0x214)]();
}

void func_sc05_017_8017E114(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc05_017_8017E128(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc05_017_8017E148(void) {
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
    func_8012A018((s32) func_sc05_017_8017E20C, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_sc05_017_8017E20C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc05_017_8017E20C((s32) &D_80126948);
}

void func_sc05_017_8017E20C(s32 arg0) {
    D_sc05_017_8019100C[AF(arg0, u8, 4)]();
}

void func_sc05_017_8017E248(s32 arg0) {
    s32 pad[2];
    func_sc05_017_8017E284(arg0, arg0 + 0xA0);
    func_sc05_017_8017E3C4(arg0);
}

void func_sc05_017_8017E27C(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017E284);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017E3C4);

void func_sc05_017_8017E5B8(u8 *arg0) {
    D_sc05_017_80191158[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017E5F4(void) {
    func_80029514(0x3A2);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017E614);

void func_sc05_017_8017E6D8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (((u32) (func_80029504(arg0, arg1) - 0x384) >= 0x1EU) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc05_017_801DC4EC);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc05_017_801B990C);
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191010);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017E778);

s32 func_sc05_017_8017E7EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191160);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6354, 0, 0x60);
}

void func_sc05_017_8017E85C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6364, 0, 0x40);
    func_sc05_017_80185CB8(arg0, 0xC, 1);
}

s32 func_sc05_017_8017E8CC(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6354, 1, 0x60);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017E92C);

s32 func_sc05_017_8017EA6C(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191228);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6714, 1, 0x60);
}

void func_sc05_017_8017EAE0(s32 arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191228);
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    func_sc05_017_801849B0(arg0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017EB30);

void func_sc05_017_8017ED1C(u8 *arg0) {
    D_sc05_017_801912B8[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017ED58(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_801911C0);
    AF(arg0, s16, 0x34) = 0;
}

void func_sc05_017_8017ED94(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191184[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_8017EDD4(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x110, arg1) & 0xFF)) {
        func_80029124(0x110, 1);
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017EE10);

void func_sc05_017_8017EEC8(s32 arg0) {
    s32 var_v0;

    if (func_sc05_017_80184B44(arg0) == 1) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(9, 0x11) != 0;
    }
    if (var_v0 != 0) {
        func_sc05_017_8017E7EC(arg0);
    }
}

void func_sc05_017_8017EF20(s32 arg0) {
    func_sc05_017_80185C54(arg0, 0xC, 1);
    if ((func_sc05_017_801858E0(0xC) != 0) && (func_sc05_017_80184CA4(arg0) != 0)) {
        func_sc05_017_8017E85C(arg0);
    }
}

void func_sc05_017_8017EF78(s32 arg0) {
    s32 var_v0;

    if (func_sc05_017_80184CA4(arg0) != 0) {
        if (func_sc05_017_80184B44() == 1) {
            var_v0 = 0;
        } else {
            var_v0 = func_sc05_017_801848AC(9, 0x11) != 0;
        }
        if (var_v0 == 0) {
            func_sc05_017_8017E8CC(arg0);
            return;
        }
        func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6364, 0, 0x40);
    }
}

void func_sc05_017_8017EFFC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    }
}

void func_sc05_017_8017F04C(s32 arg0) {
    func_sc05_017_80185C54(arg0, 0xC, 1);
    if ((func_sc05_017_801858E0(0xC) != 0) && (func_sc05_017_80184CA4(arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191160);
        func_sc05_017_80185CB8(arg0, 0xC, 1);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017F0C0);

void func_sc05_017_8017F174(void) {
    func_80029124(0x110, 1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017F198);

void func_sc05_017_8017F274(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6708, 1, 0x60);
            return;
        }
        return;
    case 1:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_8017EAE0((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_8017F308(u8 *arg0) {
    if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) != 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0;
        func_8012E8E0((s32) arg0, (s32) &D_sc05_017_80191160);
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc05_017_801B9DB4);
        func_sc05_017_80184990((s32) arg0);
        func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6708, 0, 0x60);
    }
}

s32 func_sc05_017_8017F398(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801912E8);
}

void func_sc05_017_8017F3C4(u8 *arg0) {
    D_sc05_017_80191350[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017F400(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191318);
}

void func_sc05_017_8017F42C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191304[func_sc05_017_80184B44(arg0)];
}

void func_sc05_017_8017F46C(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8012E544(0x363);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 != 0) {
        func_sc05_017_8017F398(arg0);
    }
}

void func_sc05_017_8017F4C8(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    temp_v0 = func_8012E544(0x363);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801912E8);
    }
}

void func_sc05_017_8017F53C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801912E8);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017F58C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017F650);

s32 func_sc05_017_8017F6C8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191364);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63B0, 0, 0x60);
}

void func_sc05_017_8017F73C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc05_017_8019136C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
    func_sc05_017_80184990(arg0);
}

s32 func_sc05_017_8017F794(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_sc05_017_8019136C);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63BC, 1, 0x40);
}

s32 func_sc05_017_8017F81C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191364);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017F848);

void func_sc05_017_8017F98C(u8 *arg0) {
    D_sc05_017_801913FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017F9C8);

void func_sc05_017_8017FA2C(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_8019139C);
}

void func_sc05_017_8017FA58(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191388[func_sc05_017_80184B44(arg0)];
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017FA98);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017FB10);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017FC00);

void func_sc05_017_8017FCA0(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc05_017_801858E0(6, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63BC, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_8017F73C((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017FD34);

void func_sc05_017_8017FDB8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc05_017_8019136C);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
        func_sc05_017_80184990(arg0);
    }
}

void func_sc05_017_8017FE28(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63B0, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else if ((func_sc05_017_801858E0(6, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        func_sc05_017_8017F81C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8017FEBC);

void func_sc05_017_8017FF6C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191364);
    }
}

void func_sc05_017_8017FFBC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_801913D4);
}

void func_sc05_017_8017FFE8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_sc05_017_801ECE68;
        AF(arg0, u16, 0x34) = (u16) D_sc05_017_801ECE6A;
        SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    }
}

s32 func_sc05_017_80180048(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63C8, 0, 0x80);
    D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
    return D_sc05_017_801D5210;
}

s32 func_sc05_017_801800BC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191434);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
    func_sc05_017_80184990(arg0);
    D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
    return D_sc05_017_801D5210;
}

s32 func_sc05_017_80180124(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63D4, 1, 0x80);
}

s32 func_sc05_017_80180188(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_8019142C);
}

void func_sc05_017_801801B4(s32 arg0) {
    if (func_sc05_017_80184B44(arg0) == 1) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_8019142C);
        return;
    }
    AF(arg0, s16, 2) = 8;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    D_sc05_017_801CE1C0 = D_sc05_017_801ECE70;
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc05_017_80180240(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_8019142C);
}

void func_sc05_017_8018026C(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801802B8);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801803D8);

void func_sc05_017_801804F0(u8 *arg0) {
    D_sc05_017_80191504[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018052C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_sc05_017_80191434, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_017_801B9A0C);
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191494);
}

void func_sc05_017_8018058C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191450[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_801805CC(s32 arg0) {
    return func_sc05_017_80184B44(arg0) != 1;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801805F0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80180664);

void func_sc05_017_801806BC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63D4, 0, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if (func_sc05_017_80184CA4((s32) arg0) != 0) {
        func_sc05_017_801800BC((s32) arg0);
    }
}

void func_sc05_017_80180748(s32 arg0) {
    if (func_sc05_017_801848AC(9, 0xF) == 0) {
        func_sc05_017_80180124(arg0);
    }
}

void func_sc05_017_80180788(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc05_017_80191434);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
        func_sc05_017_80184990(arg0);
        D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
    }
}

void func_sc05_017_80180808(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63C8, 1, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        func_sc05_017_80180188((s32) arg0);
    }
}

void func_sc05_017_80180894(s32 arg0) {
    if (func_sc05_017_801848AC(0xF, 0x11) == 0) {
        func_sc05_017_801801B4(arg0);
    }
}

void func_sc05_017_801808D4(s32 arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_sc05_017_801858E0(3) != 0) {
            AF(arg0, u16, 0x34) = 1;
            func_sc05_017_80184BD4(arg0, &D_sc05_017_801B63C8, 0, 0x80);
        }
        break;
    case 1:
        func_sc05_017_801858E0(3);
        if (func_sc05_017_80184CA4(arg0) != 0) {
            AF(arg0, u16, 0x34) = 2;
            func_sc05_017_80184BD4(arg0, &D_sc05_017_801B640C, 0, 0x80);
        }
        break;
    case 2:
        if (func_sc05_017_80184CA4(arg0) != 0) {
            AF(arg0, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc05_017_801858E0(0xD) != 0) {
            AF(arg0, u16, 0x34) = 4;
            func_sc05_017_80184BD4(arg0, &D_sc05_017_801B645C, 0, 0x80);
        }
        break;
    case 4:
        func_sc05_017_801858E0(0xD);
        if (func_sc05_017_80184CA4(arg0) != 0) {
            func_sc05_017_80180240(arg0);
        }
        break;
    }
}

void func_sc05_017_801809E0(s32 arg0) {
    if (func_sc05_017_801848AC(0x11, 0x12) == 0) {
        func_sc05_017_8018026C(arg0);
    }
}

s32 func_sc05_017_80180A20(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191530);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6468, 0, 0x40);
}

void func_sc05_017_80180A94(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191538);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
    func_sc05_017_80184990(arg0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80180AEC);

s32 func_sc05_017_80180BA8(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191538);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6474, 1, 0x40);
}

s32 func_sc05_017_80180C30(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191530);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80180C5C);

void func_sc05_017_80180DA4(u8 *arg0) {
    D_sc05_017_8019187C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80180DE0);

void func_sc05_017_80180ED0(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191568);
}

void func_sc05_017_80180EFC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191554[func_sc05_017_80184B44(arg0)];
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80180F3C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80180FB4);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801810A4);

void func_sc05_017_80181144(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6474, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80180A94((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801811D8);

void func_sc05_017_80181268(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc05_017_80191538);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
        func_sc05_017_80184990(arg0);
    }
}

void func_sc05_017_801812D8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6468, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        func_sc05_017_80180C30((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181364);

void func_sc05_017_80181414(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191530);
    }
}

void func_sc05_017_80181464(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191840);
}

void func_sc05_017_80181490(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_sc05_017_801ECE78;
        AF(arg0, u16, 0x34) = (u16) D_sc05_017_801ECE7A;
        SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    }
}

s32 func_sc05_017_801814F0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc05_017_801918AC);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B649C, 0, 0x60);
}

void func_sc05_017_80181564(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc05_017_801918B4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
    func_sc05_017_80184990(arg0);
}

s32 func_sc05_017_801815BC(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E8E0(arg0, (s32) &D_sc05_017_801918B4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B64A8, 1, 0x60);
}

void func_sc05_017_80181630(u8 *arg0) {
    D_sc05_017_80191990[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018166C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_sc05_017_801918B4, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_017_801B9A0C);
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191910);
}

void func_sc05_017_801816CC(u8 *arg0) {
    AF(arg0, s32 *, 0xE4) = &D_sc05_017_801E6CDC;
}

s32 func_sc05_017_801816DC(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x113, arg1) & 0xFF)) {
        func_80029124(0x113, 1);
        return 1;
    }
    return 0;
}

void func_sc05_017_80181718(s32 arg0) {
    if (func_sc05_017_801848AC(7, 0xE) != 0) {
        func_sc05_017_801814F0(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181758);

void func_sc05_017_801817F0(s32 arg0) {
    if (func_sc05_017_801848AC(7, 0xE) == 0) {
        func_sc05_017_801815BC(arg0);
    }
}

void func_sc05_017_80181830(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_sc05_017_801918B4);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
        func_sc05_017_80184990(arg0);
    }
}

void func_sc05_017_801818A0(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B649C, 1, 0x60);
        }
    } else if ((func_sc05_017_801858E0(2, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801918AC);
    }
}

void func_sc05_017_8018193C(s32 arg0) {
    if (func_sc05_017_80184B44(arg0) != 0) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_801918BC) != 0) {
        func_8001C97C((s32) &D_sc05_017_801D5AFC);
        D_sc05_017_801ECE80 = D_sc05_017_801D2C58;
        D_sc05_017_801D2C58 = D_sc05_017_801D5AFC;
        if (func_sc05_017_801848AC(7, 0xE) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_sc05_017_801918B4);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
            func_sc05_017_80184990(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801918AC);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc05_017_80181A4C);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181A4C);

s32 func_sc05_017_80181B04(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801919AC);
}

void func_sc05_017_80181B30(u8 *arg0) {
    D_sc05_017_80191AA4[AF(arg0, u16, 2)]();
}

void func_sc05_017_80181B6C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191A54);
}

void func_sc05_017_80181B98(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_801919E4[func_sc05_017_80184B44(arg0)];
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181BD8);

void func_sc05_017_80181C1C(void) {
    func_8002AC00(0x28);
    func_800291A0(0x8A, (func_800291B4(0x8A) & 0xFF) | 0x40);
    func_80029124(0x124, 1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181C60);

void func_sc05_017_80181CA4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(7, 0x14) != 0) {
        func_sc05_017_80181B04((s32) arg0);
    }
}

void func_sc05_017_80181CF0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

void func_sc05_017_80181D00(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801919AC);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181D50);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80181E0C);

s32 func_sc05_017_80181E90(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191AB8);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6564, 0, 0x60);
}

s32 func_sc05_017_80181F00(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6578, 0, 0x40);
}

s32 func_sc05_017_80181F60(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6564, 1, 0x60);
}

s32 func_sc05_017_80181FC0(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191B90);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6790, 1, 0x60);
}

void func_sc05_017_80182034(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191B90);
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    func_sc05_017_801849B0(arg0);
}

void func_sc05_017_80182084(s32 arg0) {
    s32 temp_s1;

    func_sc05_017_80184B44(arg0);
    temp_s1 = func_80029504();
    if (func_sc05_017_80184B44() == 1) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_80191AC8) != 0) {
        if (func_sc05_017_80184B44() == 3) {
            if (temp_s1 < 0x492) {
                if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) != 0) {
                    AF(arg0, s16, 2) = 8;
                    AF(arg0, s16, 0x34) = 0;
                    func_8012E8E0(arg0, (s32) &D_sc05_017_80191B90);
                    func_8012E88C(arg0);
                    SetScript(arg0, (s32) &D_sc05_017_801E4758);
                    func_sc05_017_80184990(arg0);
                } else {
                    AF(arg0, s16, 2) = 0xA;
                    AF(arg0, s16, 0x34) = 0;
                    func_8012E8E0(arg0, (s32) &D_sc05_017_80191B90);
                    func_8012E8A8(arg0);
                    AF(arg0, s16, 0x98) = 0;
                    func_sc05_017_801849B0(arg0);
                }
            } else {
                goto block_9;
            }
        } else {
block_9:
            if (func_sc05_017_801848AC(9, 0x11) != 0) {
                AF(arg0, s16, 2) = 3;
                func_8012E88C(arg0);
                SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
                func_sc05_017_80184990(arg0);
                func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6578, 0, 0x40);
            } else {
                AF(arg0, s16, 2) = 1;
                func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191AB8);
            }
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc05_017_80182318);
    }
}

void func_sc05_017_80182234(u8 *arg0) {
    D_sc05_017_80191C18[AF(arg0, u16, 2)]();
}

void func_sc05_017_80182270(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191B18);
}

void func_sc05_017_8018229C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191ADC[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_801822DC(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x115, arg1) & 0xFF)) {
        func_80029124(0x115, 1);
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80182318);

void func_sc05_017_801823D0(s32 arg0) {
    if (func_sc05_017_801848AC(9, 0x11) != 0) {
        func_sc05_017_80181E90(arg0);
    }
}

void func_sc05_017_80182410(s32 arg0) {
    if (func_sc05_017_80184CA4() != 0) {
        func_sc05_017_80181F00(arg0);
    }
}

void func_sc05_017_80182448(s32 arg0) {
    if (func_sc05_017_80184CA4(arg0) != 0) {
        if (func_sc05_017_801848AC(9, 0x11) == 0) {
            func_sc05_017_80181F60(arg0);
            return;
        }
        func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6578, 0, 0x40);
    }
}

void func_sc05_017_801824AC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    }
}

void func_sc05_017_801824FC(s32 arg0) {
    if (func_sc05_017_80184CA4(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191AB8);
    }
}

void func_sc05_017_80182540(void) {
    func_80029124(0x115, 1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80182564);

void func_sc05_017_8018268C(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6790, 0, 0x60);
            return;
        }
        return;
    case 1:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 8;
            AF(arg0, u16, 0x34) = 0U;
            func_8012E8E0((s32) arg0, (s32) &D_sc05_017_80191B90);
            func_8012E88C((s32) arg0);
            SetScript((s32) arg0, (s32) &D_sc05_017_801E4758);
            func_sc05_017_80184990((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_80182750(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6778, 1, 0x60);
            return;
        }
        return;
    case 1:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80182034((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_801827E4(u8 *arg0) {
    if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) != 0) {
        AF(arg0, s16, 2) = 7;
        AF(arg0, s16, 0x34) = 0;
        func_8012E8E0((s32) arg0, (s32) &D_sc05_017_80191AB8);
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc05_017_801B9C0C);
        func_sc05_017_80184990((s32) arg0);
        func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6778, 0, 0x60);
    }
}

s32 func_sc05_017_80182874(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
}

void func_sc05_017_801828A0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801828EC);

void func_sc05_017_80182A28(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80182A74);

void func_sc05_017_80182BB0(u8 *arg0) {
    D_sc05_017_80191E84[AF(arg0, u16, 2)]();
}

void func_sc05_017_80182BEC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191C68[func_sc05_017_80184B44(arg0)];
}

void func_sc05_017_80182C2C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191C68[func_sc05_017_80184B44(arg0)];
}

void func_sc05_017_80182C6C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191C68[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_80182CAC(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x116, arg1) & 0xFF)) {
        func_80029124(0x116, 1);
        return 1;
    }
    return 0;
}

s32 func_sc05_017_80182CE8(s32 arg0) {
    return func_sc05_017_80184B44(arg0) == 1;
}

void func_sc05_017_80182D0C(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191CF4);
}

void func_sc05_017_80182D3C(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191D4C);
}

void func_sc05_017_80182D6C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191D6C);
}

void func_sc05_017_80182D9C(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191E04);
}

void func_sc05_017_80182DCC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(7, 0x10) == 0) {
        func_sc05_017_80182A28((s32) arg0);
    }
}

void func_sc05_017_80182E18(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
    }
}

void func_sc05_017_80182E68(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(0x10, 0x14) == 0) {
        func_sc05_017_80182874((s32) arg0);
    }
}

void func_sc05_017_80182EB4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xC;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
    }
}

void func_sc05_017_80182F04(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(6, 0x14) != 0) {
        func_sc05_017_801828A0((s32) arg0);
    }
}

void func_sc05_017_80182F50(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(6, 7) == 0) {
        AF(arg0, s16, 2) = 6;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80191C44);
    }
}

void func_sc05_017_80182FA8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
        AF(arg0, s16, 0x34) = 2;
    }
}

void func_sc05_017_80183004(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 9;
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
        AF(arg0, s16, 0x34) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018305C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80183100);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801831C8);

s32 func_sc05_017_801832C4(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6800, 0, 0x60);
}

void func_sc05_017_80183328(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191EC8);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B990C);
    func_sc05_017_80184990(arg0);
}

void func_sc05_017_80183380(u8 *arg0) {
    D_sc05_017_80191F98[AF(arg0, u16, 2)]();
}

void func_sc05_017_801833BC(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191F38);
}

void func_sc05_017_801833E8(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191F70);
}

void func_sc05_017_80183414(u8 *arg0) {
    AF(arg0, s16, 2) = 0xD;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191F70);
}

void func_sc05_017_80183440(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80191F70);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018346C);

void func_sc05_017_801834A4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848D0(0xB, 0, 0x17, 0) != 0) {
        func_sc05_017_801832C4((s32) arg0);
    }
}

void func_sc05_017_801834F8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848D0(0xE, 0xF, 0x17, 0) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80191EC0);
    }
}

void func_sc05_017_80183558(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((func_sc05_017_801858E0(0x10, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B680C, 0, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80183328((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_801835FC(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6800, 1, 0x60);
            AF(arg0, u16, 0x34) = 1U;
            return;
        }
        return;
    case 1:
        if ((func_sc05_017_801858E0(0x10, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            AF(arg0, s16, 2) = 2;
            func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80191EC0);
        }
        break;
    }
}

void func_sc05_017_801836A4(u8 *arg0) {
    if (func_sc05_017_801848D0(0xB, 0, 0xE, 0xF) == 0) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc05_017_801B9964);
        func_sc05_017_80184990((s32) arg0);
        func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B680C, 1, 0x60);
    }
}

void func_sc05_017_80183724(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191EC0);
    }
}

void func_sc05_017_80183774(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0x34) = 1;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
    }
}

void func_sc05_017_801837D4(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
    }
}

void func_sc05_017_80183830(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_8012E8E0(arg0, (s32) &D_sc05_017_80191EC8);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B990C);
        func_sc05_017_80184990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801838A0);

s32 func_sc05_017_80183980(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191FD0);
}

void func_sc05_017_801839AC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc05_017_80191FD0);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80183A08);

void func_sc05_017_80183CC0(u8 *arg0) {
    D_sc05_017_80192140[AF(arg0, u16, 2)]();
}

void func_sc05_017_80183CFC(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_801920BC);
}

void func_sc05_017_80183D28(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_80192110);
}

void func_sc05_017_80183D54(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        D_sc05_017_801ED7FC = 0x1E;
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
    }
}

s32 func_sc05_017_80183DB8(void) {
    func_80029124(0x12D, 1);
    return D_sc05_017_801ED800 == 1;
}

void func_sc05_017_80183DEC(void) {
    func_8014AD7C(0x3C);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80183E0C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80183E44);

s32 func_sc05_017_80183ED4(s32 arg0) {
    return func_sc05_017_80184B44(arg0) == 1;
}

void func_sc05_017_80183EF8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(8, 0x14) != 0) {
        func_sc05_017_80183980((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80183F44);

void func_sc05_017_80184004(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191FD0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184054);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801840DC);

s32 func_sc05_017_801841B8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80192160);
}

void func_sc05_017_801841E4(u8 *arg0) {
    D_sc05_017_801921D8[AF(arg0, u16, 2)]();
}

void func_sc05_017_80184220(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_801921A0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018424C);

void func_sc05_017_80184284(s32 arg0) {
    if (func_sc05_017_801848AC(8, 0x14) != 0) {
        func_sc05_017_801841B8(arg0);
    }
}

void func_sc05_017_801842C4(u8 *arg0) {
    if (func_sc05_017_801848AC(8, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80192160);
    }
}

void func_sc05_017_80184310(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80192160);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184360);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801843E0);

void func_sc05_017_8018449C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc05_017_801844AC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc05_017_801844BC(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc05_017_801B8564;
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

void func_sc05_017_80184558(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_sc05_017_80184584(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_sc05_017_801845B0(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801845DC);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184660);

void func_sc05_017_80184790(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc05_017_80184660();
    func_sc05_017_801847C4((s32) arg0);
}

void func_sc05_017_801847C4(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184804);

void func_sc05_017_8018482C(u8 *arg0) {
    D_sc05_017_801B86DC[AF(arg0, u16, 2)]();
}

void func_sc05_017_80184868(void) {
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184870);

s32 func_sc05_017_801848AC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801848D0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184928);

void func_sc05_017_80184990(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_017_801B86E4 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc05_017_801849B0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc05_017_801849B8(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184A00);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184A5C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184AD0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184B44);

void func_sc05_017_80184BA0(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184BD4);

s32 func_sc05_017_80184CA4(u8 *a) {
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

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80184E6C);

void func_sc05_017_80184EB4(u8 *arg0) {
    D_sc05_017_801B86FC[AF(arg0, u16, 2)]();
}

void func_sc05_017_80184EF0(void) {
}

void func_sc05_017_80184EF8(void) {
}

void func_sc05_017_80184F00(void) {
}

void func_sc05_017_80184F08(void) {
}

void func_sc05_017_80184F10(void) {
}

void func_sc05_017_80184F18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_sc05_017_801ED8E8, 0x14, arg2, arg3);
    D_sc05_017_801ED7FC = 0;
    func_8012CAE4(arg0);
}

void func_sc05_017_80184F5C(void) {
}

void func_sc05_017_80184F64(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc05_017_801C0394);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_sc05_017_801B86F4);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_017_80184FEC(u8 *a) {
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
                func_sc05_017_80185678(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc05_017_80185604(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc05_017_801856D8(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc05_017_8018559C(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc05_017_80185604(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc05_017_8018559C(a);
        }
        break;
    }
    D_sc05_017_801B89D4[AF(a, u16, 2)](a);
}

void func_sc05_017_801851C4(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_sc05_017_801B8744[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc05_017_801B8704 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_sc05_017_801B8704 + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_sc05_017_801B8708 + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_sc05_017_801B871C | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_sc05_017_801B8738;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc05_017_801B872C;
    AF(a, s16, 0x10A) = 6;
    func_sc05_017_8018559C(a);
    AF(a, void *, 0xDC) = func_sc05_017_8018596C;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185364);

void func_sc05_017_801853E0(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc05_017_80184E6C() == 2) {
        func_sc05_017_80185604(arg0);
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
        func_sc05_017_80185604(arg0);
    }
    func_sc05_017_80185BEC(arg0);
}

void func_sc05_017_801854AC(s32 arg0) {
    func_sc05_017_80185BEC(arg0);
}

void func_sc05_017_801854CC(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc05_017_80184E6C() == 2) {
        func_sc05_017_8018559C(arg0);
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
            func_sc05_017_8018559C(arg0);
            return;
        }
        func_sc05_017_80185BEC(arg0);
    }
}

void func_sc05_017_8018559C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_017_801B8708 + ((D_sc05_017_801B8744[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc05_017_80185BEC(arg0);
}

void func_sc05_017_80185604(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_017_801B8704 + ((D_sc05_017_801B8744[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc05_017_80185BEC(arg0);
}

void func_sc05_017_80185678(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_017_801B8704 + ((D_sc05_017_801B8744[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc05_017_801856D8(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_017_801B8704 + ((D_sc05_017_801B8744[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc05_017_80185BEC(arg0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185758);

void func_sc05_017_801857B0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc05_017_80185D2C(arg0, 0x3C);
    }
}

void func_sc05_017_80185810(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185858);

void func_sc05_017_801858A8(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801858E0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018596C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185A10);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185A70);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185BEC);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185C20);

void func_sc05_017_80185C54(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc05_017_80185CB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc05_017_80185D2C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc05_017_80185D84(u8 *arg0) {
    D_sc05_017_801B89F8[AF(arg0, u16, 2)]();
}

void func_sc05_017_80185DC0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_017_801B89E8 | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185E3C);

s32 func_sc05_017_80185F5C(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc05_017_80185FA8((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80185FA8);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801860B4);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80186110);

s16 func_sc05_017_80186150(void) {
    return D_sc05_017_801ECE90;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80186160);

void func_sc05_017_801861AC(void) {
    func_80029444();
    func_801754A8();
    D_sc05_017_801B946C[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc05_017_8018621C(void) {
    func_800D24A0(3);
    D_8011511A = 0;
    func_sc05_017_80186270();
    D_80115130 = 0;
    D_sc05_017_801ED560 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80186270);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80186B24);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801874B0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801875E8);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80187DEC);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80188128);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80188478);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_801886B8);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80188884);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80188B1C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80188F14);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189240);

s32 func_sc05_017_80189ADC(s32 arg0) {
    return D_sc05_017_801B92A0[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_sc05_017_80189B14(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc05_017_801B92A0[((D_80115126 * 0xA) + (s16) arg0)];
    D_sc05_017_801ED560 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189B54);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189BA0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189DB4);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189E68);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189ED0);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189F24);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_80189FE0);

void func_sc05_017_8018A3C8(s32 arg0, s32 arg1) {
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = (u16) AF(arg0, u16, 6) >> 0xC;
    temp_a2 = D_sc05_017_801ED648[temp_v1];
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) & 0x7FFFFFFF);
    (*(s32 *)((u8 *)D_sc05_017_801ED660 + ((temp_v1 << 6)) * 1)) = arg1;
    AF(temp_a2, u16, 8) = (u16) AF(arg0, u16, 0);
    AF(temp_a2, u16, 0xA) = (u16) AF(arg0, u16, 2);
    AF(temp_a2, u16, 0xC) = (u16) AF(arg0, u16, 4);
    AF(temp_a2, s16, 0x12) = (s16) ((AF(arg0, u16, 6) & 0xF) << 0xA);
}

void func_sc05_017_8018A440(u8 *arg0) {
    D_sc05_017_801E67B0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018A47C);

void func_sc05_017_8018A598(u8 *arg0) {
    D_sc05_017_801E67DC[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018A5D4(u8 *arg0) {
    D_sc05_017_801E67E4[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018A610(u8 *arg0) {
    D_sc05_017_801E67F4[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018A64C(u8 *arg0) {
    D_sc05_017_801E6804[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018A688(void) {
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018A690);

void func_sc05_017_8018A83C(u8 *arg0) {
    D_sc05_017_801E6814[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018A878);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018A9D4);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AA08);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AA3C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AA70);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AAA4);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AAD8);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AB4C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AB80);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018ABCC);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AC00);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AC34);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AC68);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018ACB4);

s32 func_sc05_017_8018ACE8(void) {
    return -1;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018ACF0);

void func_sc05_017_8018ADAC(s32 arg0, s32 arg1) {
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
    func_sc05_017_80189DB4();
}

void func_sc05_017_8018AE58(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc05_017_801E67B8, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018AE9C);

void func_sc05_017_8018AFB8(u8 *arg0, s32 arg1, s32 arg2) {
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

void func_sc05_017_8018B054(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 8);
    func_8012B414();
}

void func_sc05_017_8018B088(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc05_017_801B61B4);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc05_017_801E67EC);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_017_8018B100(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) ((u32) rsin(D_800B99DA * 0x30, arg1, arg2, arg3) >> 5);
}

void func_sc05_017_8018B148(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (func_80029504(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_017_801B5E4C);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_sc05_017_801E67FC);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_017_8018B1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc05_017_801B634C);
    func_8012E8E0(arg0, (s32) &D_sc05_017_801E680C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_sc05_017_8018B264(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B270(u8 *arg0) {
    D_sc05_017_801E682C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B2AC);

void func_sc05_017_8018B314(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc05_017_8018B2AC((s32) arg0, arg1) == 1) {
        func_sc05_017_8018B264((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B360);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B3A0);

void func_sc05_017_8018B3E8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B3F4(u8 *arg0) {
    D_sc05_017_801E6840[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018B430(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_sc05_017_8018B3E8((s32) arg0);
    }
}

void func_sc05_017_8018B498(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_017_8018B4FC(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_sc05_017_801848AC(7, 0x13) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_sc05_017_8018B568(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B574(u8 *arg0) {
    D_sc05_017_801E6854[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B5B0);

void func_sc05_017_8018B604(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_sc05_017_8018B5B0((s32) arg0, arg1) == 0) {
        func_sc05_017_8018B568((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B648);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B688);

void func_sc05_017_8018B6D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B6DC(u8 *arg0) {
    D_sc05_017_801E6868[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018B718(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_sc05_017_8018B6D0((s32) arg0);
    }
}

void func_sc05_017_8018B780(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_017_8018B7E4(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_sc05_017_801848AC(0xB, 0x10) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018B850);

void func_sc05_017_8018B93C(u8 *arg0) {
    D_sc05_017_801E6874[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018B978(u8 *arg0) {
    if (func_sc05_017_8018B850() != 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
        D_sc05_017_801ED8F6 = 1;
        return;
    }
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    D_sc05_017_801ED8F6 = 0;
}

void func_sc05_017_8018B9DC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xE);
    if (func_sc05_017_8018B850() != 0) {
        AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 1;
        D_sc05_017_801ED8F6 = 1;
        return;
    }
    AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 2;
    D_sc05_017_801ED8F6 = 0;
}

void func_sc05_017_8018BA58(u8 *arg0) {
    D_sc05_017_801E687C[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018BA94(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc05_017_8018BAA4(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xA);
}

s32 func_sc05_017_8018BAE0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
}

s32 func_sc05_017_8018BB0C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
}

void func_sc05_017_8018BB38(u8 *arg0) {
    D_sc05_017_801E6950[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018BB74(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) < 0xC8) {
        AF(arg0, s32, 0xE4) = D_sc05_017_801E68A0[func_sc05_017_80184A00()];
        return;
    }
    AF(arg0, s32, 0xE4) = D_sc05_017_801E68B4[func_sc05_017_80184AD0()];
}

s32 func_sc05_017_8018BBE8(void) {
    return func_8014CB1C() != 0;
}

void func_sc05_017_8018BC08(void) {
    func_8014B2A8();
    func_8002D4C8(0x464, 0);
}

void func_sc05_017_8018BC34(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_801E6908);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018BC64);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018BCCC);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018BD38);

void func_sc05_017_8018BDB0(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, s16, 2) = 3;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801E6884);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018BE14);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018BEE0);

s32 func_sc05_017_8018BF4C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6968);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018BF78);

void func_sc05_017_8018C068(u8 *arg0) {
    D_sc05_017_801E6A3C[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018C0A4(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_017_801E69CC);
}

s32 func_sc05_017_8018C0D0(void) {
    return func_800D0EC4() == 0;
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018C0F0);

void func_sc05_017_8018C194(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_sc05_017_80184A00();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_sc05_017_80184B44();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
            goto block_7;
        }
block_6:
        if (func_sc05_017_801848AC(0xA, 0x10) == 0) {
block_7:
            func_sc05_017_8018BF4C(arg0);
        }
    }
}

void func_sc05_017_8018C218(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_sc05_017_80184A00();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_sc05_017_80184B44();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
        } else {
block_6:
            if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
                goto block_7;
            }
        }
    } else {
block_7:
        AF(arg0, s16, 2) = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6968);
    }
}

void func_sc05_017_8018C2AC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6968);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018C2FC);

s32 func_sc05_017_8018C360(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    return func_8012B2CC(arg0);
}

s32 func_sc05_017_8018C390(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    return func_8012B2CC(arg0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018C3C0);

void func_sc05_017_8018C530(u8 *arg0) {
    D_sc05_017_801E9920[AF(arg0, u16, 2)]();
}

s32 *func_sc05_017_8018C56C(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc05_017_8018C2FC() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc05_017_8018C5E8(u8 *arg0) {
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

s32 func_sc05_017_8018C658(void) {
    return D_sc05_017_801ED800 == 2;
}

void func_sc05_017_8018C670(void) {
    func_8002D4C8(0x7E0, 0);
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018C694);

void func_sc05_017_8018C7C8(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc05_017_8018C390((s32) arg0);
        }
    }
}

void func_sc05_017_8018C830(void) {
}

void func_sc05_017_8018C838(void) {
}

void func_sc05_017_8018C840(u8 *arg0) {
    D_sc05_017_801E9A58[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018C87C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_017_801E9944) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_017_8018D504);
        func_801788B8(arg0, (s32) &func_sc05_017_8018C974);
    }
}

void func_sc05_017_8018C8E0(void) {
}

void func_sc05_017_8018C8E8(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc05_017_801E9A34[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_sc05_017_8018C934(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018C974);

void func_sc05_017_8018C9D0(u8 *arg0) {
    D_sc05_017_801E9B20[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018CA0C);

void func_sc05_017_8018CAD0(u8 *arg0) {
    D_sc05_017_801E9B34[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018CB0C);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018CBF4);

void func_sc05_017_8018CC34(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_sc05_017_801E9B28, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_017_8018CCBC(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018CD04);

INCLUDE_ASM("asm/stg/sc05_017/nonmatchings/sc05_017", func_sc05_017_8018CDB0);
