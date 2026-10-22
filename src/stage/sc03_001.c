#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

extern void func_8013CB84();
extern void func_8017E408();
extern void func_800D06E8();
extern s32 func_800167F0();
extern void func_800D1EBC();
extern s32 D_80127050;
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern s32 func_800D0EC4();
extern s32 func_80180AC4();
extern s32 func_80180B5C();
extern s32 func_8014CB1C();
extern void func_8014B2A8();
extern void func_8002D4C8();
extern s32 func_80181948();
extern s32 func_801818E0();
extern s32 func_8018766C();
extern s32 func_80181D04();
extern s32 D_801D6014;
extern s32 D_801EEAF8;
extern s32 func_801824DC();
extern s32 func_801825A8();
extern void func_80182638();
extern void func_801826B8();
extern s32 func_80183948();
extern s32 func_80183A14();
extern s32 func_80187A64();
extern s32 func_80184840();
extern s32 func_80128C98();
extern void func_801EF734();
extern void func_801EF904();
extern void func_801EF46C();
extern void func_801EF58C();
extern void func_801EF624();
extern s32 func_80186288();
extern s32 func_80029504();
extern s32 func_80186890();
extern s32 D_801EF2E0;
extern void func_80029514();
extern void func_801889AC();

extern u8 D_801913D4;
extern void func_80187778();
extern u8 D_80191438;
extern void func_80178CBC();
extern void func_8012B414();
extern u8 D_801C3B38;
extern void func_80188A78();
extern s32 func_80180D34();
extern u8 D_801919AC;
extern u8 D_80191B3C;
extern u8 D_80191BC0;
extern u8 D_80191C28;
extern u8 D_80191CA4;
extern u8 D_80191CDC;
extern u8 D_80191D14;
extern u8 D_80191D6C;
extern u8 D_801DD064;
extern void func_8001C97C();
extern u8 D_80191E38;
extern u8 D_80191E70;
extern u8 D_801922C8;
extern s32 D_801DAAAC;
extern u8 D_801DD950;
extern s32 D_801EEB08;
extern u8 D_80192434;
extern u8 D_8019246C;
extern u8 D_801924B8;
extern s32 func_8012E57C();
extern u8 D_801925AC;
extern u8 D_80192640;
extern u8 D_801926F8;
extern u8 D_80192740;
extern u8 D_80192748;
extern u8 D_801927B8;
extern u8 D_80192864;
extern u8 D_801C37E8;
extern u8 D_80192888;
extern u8 D_80192970;
extern u8 D_8019299C;
extern u8 D_801929E8;
extern u8 D_80192A18;
extern u8 D_80192AC8;
extern s32 func_8012B2CC();
extern s32 func_80187420();
extern void func_80187584();
extern u8 D_80078EB1;
extern s16 D_801EEB10;
extern s32 func_80178970();
extern void func_80178D18();

extern void (*D_80190F94[])();
extern void (*D_80190F9C[])();
extern u8 D_80190EF8;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern void (*D_80190FBC[])();
extern void (*D_80190FC4[])();
extern u8 D_80190FDC;
extern u8 D_801BE2F0;
extern s32 func_8012C354();
extern s32 func_80029178();
extern void func_8012C218();
extern void func_80143970();
extern void func_8012B23C();
extern s32 func_8012CBCC();
extern void (*D_8019106C[])();
extern u8 D_8019105C;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void (*D_801910A4[])();
extern void func_800D1E28();
extern void func_8001BFD0();
extern s32 func_800291B4();
extern void func_800D0C48();
extern void (*D_801910EC[])();
extern void (*D_801910F4[])();
extern void (*D_80191100[])();
extern void (*D_8019110C[])();
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
extern void func_8017E9E0();
extern void func_8012A094();
extern void (*D_801914A8[])();
extern void (*D_801918FC[])();
extern void (*D_80191928[])();
extern void (*D_80191930[])();
extern void (*D_80191940[])();
extern void (*D_80191950[])();
extern void (*D_80191960[])();
extern void func_8012C588();
extern void func_8017F13C();
extern void func_8012AD80();
extern void func_80128ED8();
extern s32 func_8012BEE8();
extern void func_80016714();
extern u8 D_80191938;
extern u8 D_801BECE0;
extern void func_8001D0E8();
extern void func_8012E8E0();
extern u8 D_80191948;
extern u8 D_801BE978;
extern void func_8001C810();
extern u8 D_80191958;
extern u8 D_801BEE78;
extern void (*D_80191978[])();
extern s32 func_80180634();
extern void func_801805EC();
extern void (*D_8019198C[])();
extern u8 D_80078EBA;
extern void func_80180770();
extern void (*D_801919A0[])();
extern s32 func_80180938();
extern void func_801808F0();
extern void (*D_80191B0C[])();
extern u8 D_801B92FC;
extern void func_8012E88C();
extern void func_80187750();
extern s32 func_80187994();
extern u8 D_80191A0C;
extern u8 D_80191A74;
extern s32 func_801877C0();
extern u8 D_801B92EC;
extern void func_80188A14();
extern s32 func_801886A0();
extern s32 func_80180BCC();
s32 func_80180B1C(s32 arg0);
extern u8 D_801919BC;
extern u8 func_80181078;
extern s32 func_8018727C();
extern s32 func_801788B8();
extern void (*D_80191B30[])();
extern void func_801810EC();
extern void (*D_80191C08[])();
extern void (*D_80191C20[])();
extern s8 D_801EF3D6;
extern s32 func_801816D8();
extern void (*D_80191C90[])();
extern u8 D_80191C58;
extern u8 D_801E4340;
extern u8 D_801F1370;
extern u8 D_801B9348;
extern void (*D_80191D3C[])();
s32 func_80181D8C(s32 arg0);
extern s32 func_80181C38();
extern u8 D_80191CAC;
extern u8 D_801C3890;
extern u16 D_801EEAF0;
extern u16 D_801EEAF2;
extern u8 D_80191D74;
extern u8 D_801CAA80;
extern s32 func_80182898();
extern void (*D_80191E0C[])();
extern u8 D_801B9400;
extern u8 D_80191E40;
extern u8 D_801B940C;
extern void (*D_801922F0[])();
s32 func_801831F0(s32 arg0);
extern s32 func_80182E70();
extern s32 func_80183168();
extern u16 D_801EEB00;
extern u16 D_801EEB02;
extern void (*D_80192418[])();
extern u8 D_80192328;
extern u8 D_80192320;
extern u8 D_80192330;
extern u8 func_80183EE4;
s32 func_80183AC4(void);
extern void func_80183AFC();
extern u8 D_801B9464;
extern u8 D_801B9470;
extern void (*D_80192510[])();
extern u8 func_80172710;
extern s32 func_8012BD14();
extern void func_80178BF8();
s32 func_80183F58(s32 arg0);
extern s32 func_80183F84();
extern s32 func_80183FF4();
extern s32 func_80184054();
s32 func_801840B8(s32 arg0);
extern void (*D_80192544[])();
extern u8 D_8019254C;
extern u8 D_801B94FC;
extern u8 D_801C3990;
extern void (*D_80192624[])();
extern void (*D_80192828[])();
extern void func_80184F18();
s32 func_80184D64(s32 arg0);
extern void func_80184D90();
extern u8 D_801C36E8;
extern void (*D_801928D8[])();
extern void (*D_80192968[])();
extern s32 func_8016F1AC();
extern s32 func_80187690();
extern void func_80185950();
extern u8 D_801E6640;
s32 func_80185C9C(s32 arg0);
extern void (*D_801929D4[])();
extern void (*D_80192A50[])();
s32 func_801865E0(s32 arg0);
extern void (*D_80192AE8[])();
extern void (*D_80192B10[])();
extern void func_801EF558();
extern u8 D_80192A64;
extern u8 D_801C3C90;
extern u8 D_801C3CE8;
extern u8 D_801CDAD8;
extern void (*D_801C063C[])();
extern s32 func_80186D18();
extern void func_80029124();
extern void func_800D0F4C();
s32 func_80186DAC(s32 arg0);
extern void (*D_801C0B00[])();
extern void (*D_801C0B20[])();
extern u8 D_801C0B18;
extern u8 D_801CA118;
extern s32 func_80187C2C();
extern void func_801883C4();
extern void func_8012E688();
extern void func_8018835C();
extern void (*D_801C0E1C[])();
extern u8 D_801C0E0C;
extern s32 func_80188D68();
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_801C1890[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s32 D_801EF1E0;
extern void func_800D24A0();
extern void func_80189030();
extern s16 D_80115126;
extern s32 D_801C16C4[];
extern void (*D_801EB364[])();
extern void (*D_801EB378[])();
extern u8 D_801EB36C;
extern void func_8001CB00();
extern void func_801292C8();
extern void (*D_801EB48C[])();
extern s32 D_801EB468[];

extern u8 D_8018D838;
extern u8 D_80190F74;
extern u8 D_80190F7C;
extern void func_8012B260();
extern s32 D_801919D0[];
s32 func_80180CD4(s32 arg0);
extern s32 D_80191C44[];
extern s32 D_80191CC8[];
extern u8 D_801B9354;
extern void func_80181CAC();
extern s32 D_80191D90[];
extern u8 D_801B936C;
s32 func_80182548(s32 arg0);
extern u8 D_801B9360;
s32 func_8018260C(s32 arg0);
extern s32 D_80191E5C[];
extern void func_80182EE4();
extern s32 D_80192344[];
extern u8 D_801B9434;
extern s32 D_80192458[];
extern s32 D_801924A4[];
extern s32 D_80192664[];
extern s32 D_80192678[];
extern s32 D_8019268C[];
extern s32 D_80192A04[];
extern u8 D_801EB390;
extern u8 func_8018D088;

extern u8 D_801B9440;
extern u8 D_801B9510;

extern void (*D_801913C0[])();
extern void (*D_801913C8[])();
extern void (*D_801913D0[])();
extern u8 D_801C0B08;

extern void func_8016EDEC();
void func_8017E824(u8 *arg0);
extern void func_800167B8();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_8017E8AC(u8 *arg0);

extern u8 D_80190FB0;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern void func_8017EA58();
extern void func_8017EB98();



extern s32 func_80187904();
s32 func_8017ED8C(s32 arg0);
extern u8 D_80193E78;
extern s32 D_80192570[];
extern void func_800291A0();

extern void func_8012E8A8();

extern s32 D_801EE950[];
extern u8 D_801EE968[];
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern s16 D_801C0B68[];
extern u8 D_801C0B2C[];
extern u8 D_801C0B28[];

extern u8 D_801EE888;
extern void func_8017E204();

extern u16 D_800B99DA;

extern u8 D_80191904;
extern u8 D_80191DA4;
extern u8 D_801C3790;
extern u8 D_80192398;
extern u8 D_8019286C;
s32 func_80187344(s32 arg0);
extern void func_8014CB68();
extern s32 D_801EF2DC;
extern u8 D_801EF3C8;



extern u8 D_80191020;
extern u8 D_801BE398;
typedef struct { s16 x, y, z, pad; } SV8;
extern SV8 D_80191018;
extern s16 D_8019101C;
extern u8 D_80191010;
extern void func_8012B1B4();
extern s32 func_8012E544();
extern s32 func_8017D5F0();
extern s32 func_8012B608();
extern s32 func_8012B744();

typedef struct { s16 v[6]; } S12;
extern S12 D_801C0B50;
extern u8 D_801C0B40;
extern u8 D_801C0B5C;
extern void func_8018872C();

extern void (*D_801C0DF8[])();
extern void func_80188438();
extern void func_80188498();

s32 func_801858A0(s32 arg0);
s32 func_801858CC(s32 arg0);
s32 func_801858F8(s32 arg0);
s32 func_80185924(s32 arg0);
s32 func_80185874(s32 arg0);
extern u8 D_801B9608;
extern u8 D_801B9614;

extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_80190FA4;

extern s32 func_8014B12C();
extern void func_8012B178();
extern s32 func_8012B030();
extern s32 func_8012BE98();

extern s32 func_8018739C();
s32 func_80188D1C(s32 arg0);

extern u8 D_801B93A4;
extern u8 D_801B93F4;
s32 func_8018268C(s32 arg0);

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern u8 *D_800A5E60;
extern u16 D_800B9A02;
extern u32 D_800A6610[2][0x1000];

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017BEA4);

void func_8017BED8(u8 *arg0) {
    D_80190F94[AF(arg0, u16, 2)]();
}

void func_8017BF14(u8 *arg0) {
    D_80190F9C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017BF50);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017C094);

void func_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_80190EF8, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_80190EF8, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017C1AC);

void func_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_80190F74);
    SetScript(arg0, (s32) &D_8018D838);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_80190F7C;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017C2B0);

void func_8017C338(u8 *arg0) {
    D_80190FBC[AF(arg0, u16, 2)]();
}

void func_8017C374(u8 *a) {
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
    o = func_800D222C(a, &D_80190FA4, 0xFD);
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

void func_8017C538(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_8017C5CC(u8 *arg0) {
    D_80190FC4[AF(arg0, u16, 2)]();
}

void func_8017C608(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_80190FB0, 0x18);
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

void func_8017C6AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void DrawChunkedMesh(u8 *obj) {
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

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017D5F0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017D734);

void func_8017D8A8(u8 *a) {
    s32 f;
    s32 e;
    s32 dx;
    s32 dz;
    s32 n;

    func_8012B1B4(a, &D_80191020);
    f = func_8012CBCC(a);
    if (f & 0x6000) {
        AF(a, s16, 0x16) = -4;
    }
    e = func_8012E544(0xAD);
    if (e != 0 && func_8017D5F0(a, e) != 0) {
        f |= 0x8000;
    }
    if (f & 0x8000) {
        n = (AF(a, u16, 0x104) + 1) & 0x3F;
        AF(a, u16, 0x104) = n;
        if (n < 0x1F) {
            AF(AF(a, u8 *, 0x20), u16, 0x12) += 0x200;
        } else {
            AF(AF(a, u8 *, 0x20), u16, 0x12) -= 0x200;
        }
    } else {
        AF(a, u16, 0x104) = 0;
    }
    AF(AF(a, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(a, u8 *, 0x20), s16, 0x12), func_8012B744(a + 4, &D_80191018), 4);
    dx = AF(a, s16, 6) - D_80191018.x;
    dz = AF(a, s16, 0xE) - D_8019101C;
    if (dx * dx + dz * dz < 0x400) {
        AF(a, s16, 2) = 3;
        SetScript(a, &D_801BE398);
        AF(AF(a, u8 *, 0x20), u16, 0x12) = func_8012B744(a + 4, &D_80191010);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017DA48);

void func_8017DB6C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_80190FDC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0xC4) = 1;
        if ((func_80029504() < 0x14U) || (func_80029504() >= 0x46U) || ((func_80029178(0xE5) & 0xFF) && (func_80029504() != 0x3C))) {
            func_8012C218(arg0);
            return;
        }
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        SetScript(arg0, (s32) &D_801BE2F0);
        AF(arg0, s32, 0x1C) = 1;
    }
}

void func_8017DC48(void) {
}

void func_8017DC50(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012CBCC(arg0);
    if (temp_v0 & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
        AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
        AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    }
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017DCE4);

void func_8017DDEC(u8 *arg0) {
    D_8019106C[AF(arg0, u16, 2)]();
}

void func_8017DE28(s32 arg0, s32 arg1) {
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
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_8019105C | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_8017DEA4(void) {
}

void func_8017DEAC(u8 *arg0) {
    D_801910A4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017DEE8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017DF78);

void func_8017E1B4(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_801EE888;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_8017E204((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017E204);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017E2C0);

void func_8017E3D8(void) {
    func_8013CB84();
    func_8017E408();
    func_800D06E8();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017E408);

s32 func_8017E494(u8 *arg0) {
    func_8016EDEC((s32) func_8017E824, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_8017E4E4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_8017E508(u8 *arg0) {
    func_8016EDEC((s32) func_8017E8AC, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017E578);

void func_8017E628(void) {
    func_800D1EBC();
}

s32 func_8017E648(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_8017E69C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        if (!(func_800291B4(0xCE) & 0xFF)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_8017E720(u8 *arg0) {
    D_801910EC[AF(arg0, u8, 0x15)]();
}

void func_8017E75C(u8 *arg0) {
    D_801910F4[AF(arg0, u8, 0x15)]();
}

void func_8017E798(u8 *arg0) {
    D_80191100[AF(arg0, u8, 0x15)]();
}

void func_8017E7D4(u8 *arg0) {
    D_8019110C[AF(arg0, u8, 0x15)]();
}

void func_8017E810(void) {
    D_80127050 = 1;
}

void func_8017E824(u8 *arg0) {
    D_801913C0[AF(arg0, u8, 0x214)]();
}

void func_8017E860(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_8017E874(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_8017E8AC(u8 *arg0) {
    D_801913C8[AF(arg0, u8, 0x214)]();
}

void func_8017E8E8(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_8017E8FC(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_8017E91C(void) {
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
    func_8012A018((s32) func_8017E9E0, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_8017E9E0((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_8017E9E0((s32) &D_80126948);
}

void func_8017E9E0(s32 arg0) {
    D_801913D0[AF(arg0, u8, 4)]();
}

void func_8017EA1C(s32 arg0) {
    s32 pad[2];
    func_8017EA58(arg0, arg0 + 0xA0);
    func_8017EB98(arg0);
}

void func_8017EA50(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017EA58);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017EB98);

s32 func_8017ED8C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_801913D4);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017EDB8);

void func_8017EEA8(u8 *arg0) {
    D_801914A8[AF(arg0, u16, 2)]();
}

void func_8017EEE4(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_80191438);
}

s32 func_8017EF10(void) {
    return func_800D0EC4() == 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017EF30);

void func_8017EFD4(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_801877C0();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_80187904();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
            goto block_7;
        }
block_6:
        if (func_8018766C(0xA, 0x10) == 0) {
block_7:
            func_8017ED8C(arg0);
        }
    }
}

void func_8017F058(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_801877C0();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_80187904();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
        } else {
block_6:
            if (func_8018766C(0xA, 0x10) != 0) {
                goto block_7;
            }
        }
    } else {
block_7:
        AF(arg0, s16, 2) = 1;
        func_80187778(arg0, (s32) &D_801913D4);
    }
}

void func_8017F0EC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_801913D4);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017F13C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017F1F0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017F258);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017F2AC);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017F368);

void func_8017F750(s32 arg0, s32 arg1) {
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = (u16) AF(arg0, u16, 6) >> 0xC;
    temp_a2 = D_801EE950[temp_v1];
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) & 0x7FFFFFFF);
    (*(s32 *)((u8 *)D_801EE968 + ((temp_v1 << 6)) * 1)) = arg1;
    AF(temp_a2, u16, 8) = (u16) AF(arg0, u16, 0);
    AF(temp_a2, u16, 0xA) = (u16) AF(arg0, u16, 2);
    AF(temp_a2, u16, 0xC) = (u16) AF(arg0, u16, 4);
    AF(temp_a2, s16, 0x12) = (s16) ((AF(arg0, u16, 6) & 0xF) << 0xA);
}

void func_8017F7C8(u8 *arg0) {
    D_801918FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017F804);

void func_8017F920(u8 *arg0) {
    D_80191928[AF(arg0, u16, 2)]();
}

void func_8017F95C(u8 *arg0) {
    D_80191930[AF(arg0, u16, 2)]();
}

void func_8017F998(u8 *arg0) {
    D_80191940[AF(arg0, u16, 2)]();
}

void func_8017F9D4(u8 *arg0) {
    D_80191950[AF(arg0, u16, 2)]();
}

void func_8017FA10(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FA18);

void func_8017FBC4(u8 *arg0) {
    D_80191960[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FC00);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FD5C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FD90);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FDC4);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FDF8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FE2C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FE60);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FED4);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FF08);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FF54);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FF88);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FFBC);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8017FFF0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018003C);

s32 func_80180070(void) {
    return -1;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180078);

void func_80180134(s32 arg0, s32 arg1) {
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
    func_8017F13C();
}

void func_801801E0(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_80191904, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180224);

void func_80180340(u8 *arg0, s32 arg1, s32 arg2) {
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

void func_801803DC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 8);
    func_8012B414();
}

void func_80180410(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801BECE0);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_80191938);
    AF(arg0, s16, 2) = 1;
}

void func_80180488(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) ((u32) rsin(D_800B99DA * 0x30, arg1, arg2, arg3) >> 5);
}

void func_801804D0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (func_80029504(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_801BE978);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_80191948);
    AF(arg0, s16, 2) = 1;
}

void func_80180574(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801BEE78);
    func_8012E8E0(arg0, (s32) &D_80191958);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_801805EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_801805F8(u8 *arg0) {
    D_80191978[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180634);

void func_8018069C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_80180634((s32) arg0, arg1) == 1) {
        func_801805EC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801806E8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180728);

void func_80180770(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_8018077C(u8 *arg0) {
    D_8019198C[AF(arg0, u16, 2)]();
}

void func_801807B8(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_80180770((s32) arg0);
    }
}

void func_80180820(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_80180884(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_8018766C(7, 0x13) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_801808F0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_801808FC(u8 *arg0) {
    D_801919A0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180938);

void func_8018098C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_80180938((s32) arg0, arg1) == 0) {
        func_801808F0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801809D0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180A10);

void func_80180A58(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x34) = 0;
    SetScript((s32) arg0, (s32) &D_801C3B38);
}

void func_80180A88(u8 *arg0) {
    D_80191B0C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180AC4);

s32 func_80180B1C(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_80188A78(arg0, 0xC, 1);
    return func_80180D34(arg0);
}

s32 func_80180B5C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_801919AC);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3B38);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B92EC, 0, 0x60);
}

s32 func_80180BCC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3B38);
    func_80187750(arg0);
    func_80188A78(arg0, 0xC, 1);
    return func_80187994(arg0, (s32) &D_801B92FC, 0, 0x40);
}

s32 func_80180C3C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    return SetScript(arg0, (s32) &D_801C3B38);
}

void func_80180C68(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    if (func_801877C0((s32) arg0) != 1) {
        func_80178CBC((s32) arg0, (s32) &D_80191A0C);
        AF(arg0, s16, 0x34) = 0;
        return;
    }
    func_80178CBC((s32) arg0, (s32) &D_80191A74);
    AF(arg0, s16, 0x34) = 1;
}

s32 func_80180CD4(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3B38);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B92EC, 1, 0x60);
}

s32 func_80180D34(s32 arg0) {
    func_80187778(arg0, (s32) &D_801919AC);
}

void func_80180D5C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_801919D0[func_801877C0(arg0)];
}

s32 func_80180D9C(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x110, arg1) & 0xFF)) {
        func_80029124(0x110, 1);
        return 1;
    }
    return 0;
}

void func_80180DD8(s32 arg0) {
    if (func_80180AC4() != 0) {
        func_80180B5C(arg0);
    }
}

void func_80180E10(s32 arg0) {
    func_80188A14(arg0, 0xC, 1);
    if ((func_801886A0(0xC) != 0) && (func_80187A64(arg0) != 0)) {
        func_80180BCC(arg0);
    }
}

void func_80180E68(s32 arg0) {
    if (func_80187A64(arg0) != 0) {
        if (func_80180AC4() == 0) {
            func_80180CD4(arg0);
            return;
        }
        func_80187994(arg0, (s32) &D_801B92FC, 0, 0x40);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80180ECC);

void func_80180FA0(s32 arg0) {
    func_80188A14(arg0, 0xC, 1);
    if ((func_801886A0(0xC) != 0) && (func_80187A64(arg0) != 0)) {
        func_80180B1C(arg0);
    }
}

void func_80180FF8(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_801919BC) != 0) {
        if (func_80180AC4() != 0) {
            func_80180BCC(arg0);
        } else {
            func_80180B1C(arg0);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80181078);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181078);

void func_801810EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_801810F8(u8 *arg0) {
    D_80191B30[AF(arg0, u16, 2)]();
}

void func_80181134(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_801810EC((s32) arg0);
    }
}

void func_8018119C(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_80181200(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_8018766C(0xB, 0x10) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

s32 func_8018126C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80191B3C);
}

s32 func_80181298(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_80187778(arg0, (s32) &D_80191B3C);
}

void func_801812C4(u8 *arg0) {
    D_80191C08[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181300);

s32 func_80181374(void) {
    return func_8014CB1C() != 0;
}

void func_80181394(void) {
    func_8014B2A8();
    func_8002D4C8(0x464, 0);
}

void func_801813C0(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_80191BC0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801813F0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181458);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801814C4);

void func_8018153C(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, s16, 2) = 3;
        func_80187778((s32) arg0, (s32) &D_80191B3C);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801815A0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018166C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801816D8);

void func_801817C4(u8 *arg0) {
    D_80191C20[AF(arg0, u16, 2)]();
}

void func_80181800(u8 *arg0) {
    if (func_801816D8() != 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
        D_801EF3D6 = 1;
        return;
    }
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    D_801EF3D6 = 0;
}

void func_80181864(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xE);
    if (func_801816D8() != 0) {
        AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 1;
        D_801EF3D6 = 1;
        return;
    }
    AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 2;
    D_801EF3D6 = 0;
}

s32 func_801818E0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80191C28);
}

void func_8018190C(u8 *arg0) {
    D_80191C90[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181948);

void func_80181988(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x3C;
}

void func_801819A0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191C44[func_801877C0(arg0)];
}

void func_801819E0(s32 arg0) {
    if (func_80181948() != 0) {
        func_801818E0(arg0);
    }
}

void func_80181A18(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_80181948() == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80191C28);
    }
}

void func_80181A68(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_80128C98(4) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_8001C97C((s32) &D_801F1370);
            AF(AF(arg0, void *, 0x20), s32 *, 0x24) = &D_801F1370;
            func_80178CBC((s32) arg0, (s32) &D_80191C58);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            AF(AF(arg0, void *, 0x20), s32 *, 0x24) = &D_801E4340;
            AF(arg0, s16, 2) = 2;
            func_80187778((s32) arg0, (s32) &D_80191C28);
        }
        break;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181B40);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181BC0);

s32 func_80181C38(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_80191CA4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9348, 0, 0x60);
}

void func_80181CAC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80191CAC);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3890);
    func_80187750(arg0);
}

s32 func_80181D04(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_80191CAC);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9354, 1, 0x40);
}

s32 func_80181D8C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_80187778(arg0, (s32) &D_80191CA4);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181DB8);

void func_80181ED4(u8 *arg0) {
    D_80191D3C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181F10);

void func_80181F74(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_80191CDC);
}

void func_80181FA0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191CC8[func_801877C0(arg0)];
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80181FE0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182058);

void func_80182148(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_801877C0((s32) arg0) == 3) {
        if (func_8018766C(0xA, 0x16) != 0) {
            func_80181D8C((s32) arg0);
        }
    } else if (func_8018766C(0xA, 0x10) != 0) {
        func_80181C38((s32) arg0);
    }
}

void func_801821C0(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(6, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            func_80187994((s32) arg0, (s32) &D_801B9354, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_80187A64((s32) arg0) != 0) {
            func_80181CAC((s32) arg0);
        }
    }
}

void func_80182254(s32 arg0) {
    if (func_8018766C(0xA, 0x10) == 0) {
        func_80181D04(arg0);
    }
}

void func_80182294(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80191CAC);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801C3890);
        func_80187750(arg0);
    }
}

void func_80182304(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            func_80187994((s32) arg0, (s32) &D_801B9348, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else if ((func_801886A0(6, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        func_80181D8C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182398);

void func_80182400(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_80187778(arg0, (s32) &D_80191CA4);
    }
}

void func_80182450(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_80191D14);
}

void func_8018247C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_801EEAF0;
        AF(arg0, u16, 0x34) = (u16) D_801EEAF2;
        SetScript(arg0, (s32) &D_801C37E8);
    }
}

s32 func_801824DC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    func_80187994(arg0, (s32) &D_801B9360, 0, 0x80);
    return func_80182898();
}

s32 func_80182548(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80191D74);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801CAA80);
    func_80187750(arg0);
    return func_80182898();
}

s32 func_801825A8(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B936C, 1, 0x80);
}

s32 func_8018260C(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_80187778(arg0, (s32) &D_80191D6C);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182638);

s32 func_8018268C(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    func_80187778(arg0, (s32) &D_80191D6C);
}

void func_801826B8(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182704);

void func_80182824(u8 *arg0) {
    D_80191E0C[AF(arg0, u16, 2)]();
}

s32 func_80182860(void) {
    func_8001C97C((s32) &D_801DD064);
    D_801EEAF8 = D_801D6014;
    return D_801D6014;
}

s32 func_80182898(arg0)
    s32 arg0;
{
    D_801D6014 = (*(s32 *)&D_801DD064);
    return (*(s32 *)&D_801DD064);
}

s32 func_801828B0(s32 arg0) {
    D_801D6014 = D_801EEAF8;
    return D_801EEAF8;
}

void func_801828C8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_80191D74, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_801C3790);
    func_80178CBC((s32) arg0, (s32) &D_80191DA4);
}

void func_80182928(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191D90[func_801877C0(arg0)];
}

void func_80182968(s32 arg0) {
    if (func_8018766C(9, 0x12) != 0) {
        func_801824DC(arg0);
    }
}

void func_801829A8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            func_80187994((s32) arg0, (s32) &D_801B936C, 0, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if (func_80187A64((s32) arg0) != 0) {
        func_80182548((s32) arg0);
    }
}

void func_80182A34(s32 arg0) {
    if (func_8018766C(9, 0xF) == 0) {
        func_801825A8(arg0);
    }
}

void func_80182A74(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80191D74);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801CAA80);
        func_80187750(arg0);
        func_80182898();
    }
}

void func_80182AEC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            func_80187994((s32) arg0, (s32) &D_801B9360, 1, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        func_8018260C((s32) arg0);
    }
}

void func_80182B78(s32 arg0) {
    if (func_8018766C(0xF, 0x11) == 0) {
        func_80182638(arg0);
    }
}

void func_80182BB8(s32 arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_801886A0(3) != 0) {
            AF(arg0, u16, 0x34) = 1;
            func_80187994(arg0, &D_801B9360, 0, 0x80);
        }
        break;
    case 1:
        func_801886A0(3);
        if (func_80187A64(arg0) != 0) {
            AF(arg0, u16, 0x34) = 2;
            func_80187994(arg0, &D_801B93A4, 0, 0x80);
        }
        break;
    case 2:
        if (func_80187A64(arg0) != 0) {
            AF(arg0, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_801886A0(0xD) != 0) {
            AF(arg0, u16, 0x34) = 4;
            func_80187994(arg0, &D_801B93F4, 0, 0x80);
        }
        break;
    case 4:
        func_801886A0(0xD);
        if (func_80187A64(arg0) != 0) {
            func_8018268C(arg0);
        }
        break;
    }
}

void func_80182CC4(s32 arg0) {
    if (func_8018766C(0x11, 0x12) == 0) {
        func_801826B8(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182D04);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182DFC);

s32 func_80182E70(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_80191E38);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9400, 0, 0x40);
}

void func_80182EE4(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80191E40);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3890);
    func_80187750(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80182F3C);

s32 func_80183168(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_80191E40);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B940C, 1, 0x40);
}

s32 func_801831F0(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_80187778(arg0, (s32) &D_80191E38);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018321C);

void func_8018333C(u8 *arg0) {
    D_801922F0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80183378);

void func_801833DC(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_80191E70);
}

void func_80183408(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191E5C[func_801877C0(arg0)];
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80183448);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801834C0);

void func_801835B0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_801877C0((s32) arg0) == 3) {
        if (func_8018766C(0xA, 0x15) != 0) {
            func_801831F0((s32) arg0);
        }
    } else if (func_8018766C(0xA, 0x10) != 0) {
        func_80182E70((s32) arg0);
    }
}

void func_80183628(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            func_80187994((s32) arg0, (s32) &D_801B940C, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_80187A64((s32) arg0) != 0) {
            func_80182EE4((s32) arg0);
        }
    }
}

void func_801836BC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xA, 0x10) == 0) {
        func_80183168((s32) arg0);
    }
}

void func_80183708(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80191E40);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801C3890);
        func_80187750(arg0);
    }
}

void func_80183778(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            func_80187994((s32) arg0, (s32) &D_801B9400, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        func_801831F0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80183804);

void func_8018386C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_80187778(arg0, (s32) &D_80191E38);
    }
}

void func_801838BC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_801922C8);
}

void func_801838E8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_801EEB00;
        AF(arg0, u16, 0x34) = (u16) D_801EEB02;
        SetScript(arg0, (s32) &D_801C37E8);
    }
}

s32 func_80183948(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_80192320);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9434, 0, 0x60);
}

void func_801839BC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80192328);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801CAA80);
    func_80187750(arg0);
}

s32 func_80183A14(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E8E0(arg0, (s32) &D_80192328);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9440, 1, 0x60);
}

void func_80183A88(u8 *arg0) {
    D_80192418[AF(arg0, u16, 2)]();
}

s32 func_80183AC4(void) {
    func_8001C97C((s32) &D_801DD950);
    D_801EEB08 = D_801DAAAC;
    return D_801DAAAC;
}

void func_80183AFC(void) {
    D_801DAAAC = *(s32 *)&D_801DD950;
}

void func_80183B14(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_80192328, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_801C3790);
    func_80178CBC((s32) arg0, (s32) &D_80192398);
}

void func_80183B74(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192344[func_801877C0(arg0)];
}

s32 func_80183BB4(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x113, arg1) & 0xFF)) {
        func_80029124(0x113, 1);
        return 1;
    }
    return 0;
}

void func_80183BF0(s32 arg0) {
    if (func_8018766C(7, 0xE) != 0) {
        func_80183948(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80183C30);

void func_80183CC8(s32 arg0) {
    if (func_8018766C(7, 0xE) == 0) {
        func_80183A14(arg0);
    }
}

void func_80183D08(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80192328);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801CAA80);
        func_80187750(arg0);
    }
}

void func_80183D78(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            func_80187994((s32) arg0, (s32) &D_801B9434, 1, 0x60);
        }
    } else if ((func_801886A0(2, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80192320);
    }
}

void func_80183E14(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_80192330) != 0) {
        func_80183AC4();
        func_80183AFC();
        if (func_8018766C(7, 0xE) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_80192328);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_801CAA80);
            func_80187750(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_80187778(arg0, (s32) &D_80192320);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80183EE4);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80183EE4);

s32 func_80183F58(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80192434);
}

s32 func_80183F84(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0(arg0, (s32) &D_80192434);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9464, 0, 0x40);
}

s32 func_80183FF4(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9470, 0, 0x40);
}

s32 func_80184054(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9464, 1, 0x40);
}

s32 func_801840B8(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_80187778(arg0, (s32) &D_80192434);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801840E4);

void func_80184210(u8 *arg0) {
    D_80192510[AF(arg0, u16, 2)]();
}

void func_8018424C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_8019246C);
}

void func_80184278(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_80178CBC((s32) arg0, (s32) &D_8019246C);
}

void func_801842A4(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    func_80178CBC((s32) arg0, (s32) &D_801924B8);
}

void func_801842D0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192458[func_801877C0(arg0)];
}

void func_80184310(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_801924A4[func_801877C0(arg0)];
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184350);

s32 *func_801843DC(u8 *arg0) {
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

void func_8018444C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(7, 0x14) != 0) {
        func_80183F58((s32) arg0);
    }
}

void func_80184498(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_801877C0((s32) arg0) == 3) {
        if (func_8018766C(7, 0x14) == 0) {
            AF(arg0, s16, 2) = 1;
            func_80187778((s32) arg0, (s32) &D_80192434);
        }
    } else if (func_8018766C(7, 0xA) == 0) {
        func_80183F84((s32) arg0);
    }
}

void func_8018451C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_80192434);
    }
}

void func_8018456C(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_801886A0(2, arg1, arg2) != 0) && (func_80187A64(arg0) != 0)) {
        func_80183FF4(arg0);
    }
}

void func_801845B8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_80187A64((s32) arg0) != 0) {
        func_80184054((s32) arg0);
    }
}

void func_801845FC(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_801886A0(2, arg1, arg2) != 0) && (func_80187A64(arg0) != 0)) {
        func_801840B8(arg0);
    }
}

void func_80184648(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xC, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80192434);
    }
}

void func_801846A0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_80187778(arg0, (s32) &D_80192434);
    }
}

void func_801846F0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801C37E8);
    }
}

void func_80184748(u8 *arg0) {
    D_80192544[AF(arg0, u16, 2)]();
}

void func_80184784(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_80184794(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xA);
}

s32 func_801847D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_8019254C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3990);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B94FC, 0, 0x60);
}

s32 func_80184840(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3990);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9510, 0, 0x40);
}

s32 func_801848A0(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3990);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B94FC, 1, 0x60);
}

void func_80184900(u8 *arg0) {
    D_80192624[AF(arg0, u16, 2)]();
}

void func_8018493C(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_801925AC);
}

void func_80184968(s32 arg0) {
    AF(arg0, s32 *, 0xE4) = (s32 *) D_80192570[func_801877C0(arg0)];
    if ((func_800291B4(0xDA) & 0xFF) && (func_801877C0() == 1)) {
        AF(arg0, s32 *, 0xE4) = &D_80193E78;
    }
    func_800291A0(0xDA, 1);
}

s32 func_801849E0(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x115, arg1) & 0xFF)) {
        func_80029124(0x115, 1);
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184A1C);

void func_80184A8C(s32 arg0) {
    if (func_80187A64(arg0) != 0) {
        func_80184840(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184AC4);

void func_80184B60(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_801C3990);
    }
}

void func_80184BB0(s32 arg0) {
    if (func_80187A64(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778(arg0, (s32) &D_8019254C);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184BF4);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184CF0);

s32 func_80184D64(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_80187778(arg0, (s32) &D_80192640);
}

void func_80184D90(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184DDC);

void func_80184F18(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80184F64);

void func_801850A0(u8 *arg0) {
    D_80192828[AF(arg0, u16, 2)]();
}

void func_801850DC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192664[func_801877C0(arg0)];
}

void func_8018511C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192678[func_801877C0(arg0)];
}

void func_8018515C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_8019268C[func_801877C0(arg0)];
}

s32 func_8018519C(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x116, arg1) & 0xFF)) {
        func_80029124(0x116, 1);
        return 1;
    }
    return 0;
}

void func_801851D8(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_801926F8);
}

void func_80185208(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_80192740);
}

void func_80185238(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_80192748);
}

void func_80185268(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_801927B8);
}

void func_80185298(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(7, 0x10) == 0) {
        func_80184F18((s32) arg0);
    }
}

void func_801852E4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_80187778(arg0, (s32) &D_80192640);
    }
}

void func_80185334(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0x10, 0x14) == 0) {
        func_80184D64((s32) arg0);
    }
}

void func_80185380(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xC;
        func_80187778(arg0, (s32) &D_80192640);
    }
}

void func_801853D0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(6, 0x14) != 0) {
        func_80184D90((s32) arg0);
    }
}

void func_8018541C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(6, 7) == 0) {
        AF(arg0, s16, 2) = 6;
        func_80187778((s32) arg0, (s32) &D_80192640);
    }
}

void func_80185474(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_801C36E8);
        AF(arg0, s16, 0x34) = 2;
    }
}

void func_801854D0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 9;
        SetScript(arg0, (s32) &D_801C36E8);
        AF(arg0, s16, 0x34) = 2;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80185528);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801855CC);

s32 func_801856A8(u8 *a) {
    switch (AF(AF(a, u8 *, 0x64), u16, 2)) {
    case 2:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 3;
        goto found;
    case 7:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 8;
        goto found;
    case 12:
        AF(AF(a, u8 *, 0x64), s16, 2) = 0xD;
        goto found;
    case 18:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 0x13;
        goto found;
    case 23:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 0x18;
        goto found;
    case 27:
        if (AF(AF(a, u8 *, 0x64), u16, 0x34) != 2) {
            return 0;
        }
        if (func_8012BD14(AF(a, u8 *, 0x64)) > 0x4000) {
            break;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 0x1C;
        goto found;
    }
    return 0;
found:
    func_80178BF8();
    return (s32)&func_80172710;
}

s32 func_80185874(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_801858A0(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_801858CC(s32 arg0) {
    AF(arg0, s16, 2) = 0x12;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_801858F8(s32 arg0) {
    AF(arg0, s16, 2) = 0x17;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_80185924(s32 arg0) {
    AF(arg0, s16, 2) = 0x1F;
    func_80187778(arg0, (s32) &D_80192864);
}

void func_80185950(s32 arg0) {
    AF(arg0, s16, 2) = 0x1B;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_80192864);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
}

void func_801859AC(u8 *a) {
    switch (AF(a, u16, 0x34)) {
    case 0:
        if (func_801886A0(5) != 0) {
            func_80187994(a, &D_801B9608, 0, 0x70);
            AF(a, s16, 0x34) = 1;
        }
        break;
    case 1:
        func_801886A0(5);
        if (func_80187A64(a) != 0) {
            func_80187994(a, &D_801B9614, 1, 0x70);
            AF(a, s16, 0x34) = 2;
            AF(AF(a, u8 *, 0xCC), s16, 0x108) = 0;
            AF(AF(a, u8 *, 0xCC), s32, 0xB0) = 2;
        }
        break;
    case 2:
        if (func_80187A64(a) != 0) {
            AF(a, s16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_801886A0(5) != 0) {
            AF(a, s16, 0x34) = 4;
            func_80187994(a, &D_801B9608, 1, 0x70);
        }
        break;
    case 4:
        func_801886A0(5);
        if (func_80187A64(a) != 0) {
            switch (AF(a, u8, 0x105)) {
            case 7:
                func_801858A0((s32)a);
                break;
            case 18:
                func_801858CC((s32)a);
                break;
            case 23:
                func_801858F8((s32)a);
                break;
            case 31:
                func_80185924((s32)a);
                break;
            case 2:
            default:
                func_80185874((s32)a);
                break;
            }
        }
        break;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80185B54);

void func_80185C60(u8 *arg0) {
    D_801928D8[AF(arg0, u16, 2)]();
}

s32 func_80185C9C(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 1;
    temp_v0 = SetScript(arg0, (s32) &D_801C37E8);
    AF(arg0, s16, 0x34) = 0;
    return temp_v0;
}

void func_80185CD8(u8 *arg0) {
    D_80192968[AF(arg0, u16, 2)]();
}

void func_80185D14(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF734(arg0);
    }
}

void func_80185D50(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF904(arg0);
    }
}

void func_80185D8C(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF46C(arg0);
    }
}

void func_80185DC8(s32 arg0) {
    if (func_8016F1AC(arg0) == 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
    if ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950(arg0);
    }
}

void func_80185E44(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if ((func_80029178(0xDF, arg1) & 0xFF) && ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0))) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950((s32) arg0);
    }
}

void func_80185EC8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950((s32) arg0);
    }
}

void func_80185F3C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0((s32) arg0, (s32) &D_8019286C, arg2);
    func_8012E88C((s32) arg0);
    func_80187344((s32) arg0);
    func_8014CB68();
    func_8012C588(0x157, (s32) arg0);
}

void func_80185F9C(void) {
}

void func_80185FA4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

void func_80185FB4(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF58C(arg0);
    }
}

void func_80185FF0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950((s32) arg0);
    }
}

void func_80186064(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF624(arg0);
    }
}

void func_801860A0(u8 *arg0) {
    AF(arg0, s16, 2) = 0x1D;
    func_80178CBC((s32) arg0, (s32) &D_80192888);
}

void func_801860CC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0x1B;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, (s32) &D_801C36E8);
    }
}

void func_80186124(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801E6640);
    func_80185C9C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018617C);

s32 func_80186288(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80192970);
}

void func_801862B4(u8 *arg0) {
    D_801929D4[AF(arg0, u16, 2)]();
}

void func_801862F0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_8019299C);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018631C);

void func_8018640C(s32 arg0) {
    if (func_8018766C(8, 0x14) != 0) {
        func_80186288(arg0);
    }
}

void func_8018644C(u8 *arg0) {
    if (func_8018766C(8, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80192970);
    }
}

void func_80186498(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_80192970);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801864E8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186568);

s32 func_801865E0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_801929E8);
}

void func_8018660C(u8 *arg0) {
    D_80192A50[AF(arg0, u16, 2)]();
}

void func_80186648(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_80192A18);
}

void func_80186674(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192A04[func_801877C0(arg0)];
}

void func_801866B4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xB, 0x17) == 0) {
        func_801865E0((s32) arg0);
    }
}

void func_80186700(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xB, 0x17) != 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_801929E8);
    }
}

void func_80186758(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_801929E8);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801867A8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186828);

s32 func_80186890(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_80192A64);
    func_80187750(arg0);
    return SetScript(arg0, (s32) &D_801C3C90);
}

void func_801868E0(u8 *arg0) {
    D_80192AE8[AF(arg0, u16, 2)]();
}

void func_8018691C(u8 *arg0) {
    D_80192B10[AF(arg0, u16, 2)]();
}

void func_80186958(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    func_80178CBC((s32) arg0, (s32) &D_80192AC8);
}

void func_80186984(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    if (func_80128C98(2) != 0) {
        func_801EF558((s32) arg0);
    }
}

void func_801869C8(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) >= 0x1EU) {
        func_80186890(arg0);
    }
}

void func_80186A04(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012E8E0(arg0, (s32) &D_80192A64);
        func_80187750(arg0);
        SetScript(arg0, (s32) &D_801C3C90);
    }
}

void func_80186A6C(void) {
}

void func_80186A74(void) {
}

void func_80186A7C(void) {
}

void func_80186A84(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186A8C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186B54);

void func_80186BEC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801CDAD8);
    SetScript(arg0, (s32) &D_801C3CE8);
    AF(arg0, s16, 2) = 1;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186C54);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186CD0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186D18);

s32 func_80186D7C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    return func_8012B2CC(arg0);
}

s32 func_80186DAC(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    return func_8012B2CC(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80186DDC);

void func_80186F4C(u8 *arg0) {
    D_801C063C[AF(arg0, u16, 2)]();
}

s32 *func_80186F88(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_80186D18() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_80187004(u8 *arg0) {
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

s32 func_80187074(void) {
    return D_801EF2E0 == 2;
}

void func_8018708C(void) {
    func_8002D4C8(0x7E0, 0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801870B0);

void func_801871E4(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_80186DAC((s32) arg0);
        }
    }
}

void func_8018724C(void) {
}

void func_80187254(void) {
}

void func_8018725C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_8018726C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018727C);

void func_80187318(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_80187344(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_80187370(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018739C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187420);

void func_80187550(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_80187420();
    func_80187584((s32) arg0);
}

void func_80187584(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801875C4);

void func_801875EC(u8 *arg0) {
    D_801C0B00[AF(arg0, u16, 2)]();
}

void func_80187628(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187630);

s32 func_8018766C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187690);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801876E8);

void func_80187750(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_801C0B08 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_80187770(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_80187778(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801877C0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018781C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187890);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187904);

void func_80187960(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187994);

s32 func_80187A64(u8 *a) {
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

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80187C2C);

void func_80187C74(u8 *arg0) {
    D_801C0B20[AF(arg0, u16, 2)]();
}

void func_80187CB0(void) {
}

void func_80187CB8(void) {
}

void func_80187CC0(void) {
}

void func_80187CC8(void) {
}

void func_80187CD0(void) {
}

void func_80187CD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_801EF3C8, 0x14, arg2, arg3);
    D_801EF2DC = 0;
    func_8012CAE4(arg0);
}

void func_80187D1C(void) {
}

void func_80187D24(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801CA118);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_801C0B18);
    AF(arg0, s16, 2) = 1;
}

void func_80187DAC(u8 *a) {
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
                func_80188438(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_801883C4(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_80188498(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_8018835C(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_801883C4(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_8018835C(a);
        }
        break;
    }
    D_801C0DF8[AF(a, u16, 2)](a);
}

void func_80187F84(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_801C0B68[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_801C0B28 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_801C0B28 + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_801C0B2C + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_801C0B40 | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_801C0B5C;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_801C0B50;
    AF(a, s16, 0x10A) = 6;
    func_8018835C(a);
    AF(a, void *, 0xDC) = func_8018872C;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188124);

void func_801881A0(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_80187C2C() == 2) {
        func_801883C4(arg0);
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
        func_801883C4(arg0);
    }
    func_801889AC(arg0);
}

void func_8018826C(s32 arg0) {
    func_801889AC(arg0);
}

void func_8018828C(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_80187C2C() == 2) {
        func_8018835C(arg0);
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
            func_8018835C(arg0);
            return;
        }
        func_801889AC(arg0);
    }
}

void func_8018835C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B2C + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_801889AC(arg0);
}

void func_801883C4(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B28 + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_801889AC(arg0);
}

void func_80188438(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B28 + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_80188498(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B28 + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_801889AC(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188518);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188570);

void func_801885D0(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188618);

void func_80188668(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801886A0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018872C);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801887D0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188830);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801889AC);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801889E0);

void func_80188A14(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_80188A78(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_80188AEC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_80188B44(u8 *arg0) {
    D_801C0E1C[AF(arg0, u16, 2)]();
}

void func_80188B80(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_801C0E0C | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188BFC);

s32 func_80188D1C(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_80188D68((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188D68);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188E74);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188ED0);

s16 func_80188F10(void) {
    return D_801EEB10;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80188F20);

void func_80188F6C(void) {
    func_80029444();
    func_801754A8();
    D_801C1890[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_80188FDC(void) {
    func_800D24A0(3);
    D_8011511A = 0;
    func_80189030();
    D_80115130 = 0;
    D_801EF1E0 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_80189030);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_801898E4);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018A270);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018A3A8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018ABAC);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018AEE8);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018B238);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018B478);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018B644);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018B8DC);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018BCD4);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018C000);

s32 func_8018C89C(s32 arg0) {
    return D_801C16C4[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_8018C8D4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_801C16C4[((D_80115126 * 0xA) + (s16) arg0)];
    D_801EF1E0 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018C914);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018C960);

void func_8018CB74(u8 *arg0) {
    D_801EB364[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018CBB0);

void func_8018CC74(u8 *arg0) {
    D_801EB378[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018CCB0);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018CD98);

void func_8018CDD8(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_801EB36C, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_8018CE60(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018CEA8);

void func_8018CF54(u8 *arg0) {
    D_801EB48C[AF(arg0, u16, 2)]();
}

void func_8018CF90(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_801EB390) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_8018D838);
        func_801788B8(arg0, (s32) &func_8018D088);
    }
}

void func_8018CFF4(void) {
}

void func_8018CFFC(u8 *arg0) {
    func_80178CBC((s32) arg0, D_801EB468[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_8018D048(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018D088);

INCLUDE_ASM("asm/stage/nonmatchings/sc03_001", func_8018D0E4);
