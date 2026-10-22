#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_005_80194320[])();
extern void func_sc02_005_8017E97C();
extern void (*D_sc02_005_80194328[])();
extern void func_sc02_005_8017EDF8();
extern s32 func_sc02_005_8017EA74();
extern u8 D_sc02_005_801E4C50;
extern void (*D_sc02_005_8019439C[])();
extern void func_8016EDEC();
void func_sc02_005_8017F428(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_005_801943A4[])();
extern void (*D_sc02_005_80194454[])();
void func_sc02_005_8017F1DC(u8 *arg0);
extern void (*D_sc02_005_80194464[])();
void func_sc02_005_8017F358(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_005_80194470[])();
extern void (*D_sc02_005_801944E8[])();
void func_sc02_005_80180380(u8 *arg0);
extern void (*D_sc02_005_8019452C[])();
void func_sc02_005_801804D4(u8 *arg0);
extern void (*D_sc02_005_80194544[])();
void func_sc02_005_80180AA4(u8 *arg0);
extern void (*D_sc02_005_8019455C[])();
void func_sc02_005_80180C64(u8 *arg0);
extern void (*D_sc02_005_8019458C[])();
void func_sc02_005_801812DC(u8 *arg0);
extern void (*D_sc02_005_80196320[])();
extern void (*D_sc02_005_801963E8[])();
extern void (*D_sc02_005_80196470[])();
extern s32 func_sc02_005_80185D84();
extern void func_sc02_005_80181F70();
extern void (*D_sc02_005_801964BC[])();
extern void (*D_sc02_005_801964FC[])();
extern void (*D_sc02_005_801965B0[])();
extern void (*D_sc02_005_801965C0[])();
extern void (*D_sc02_005_801965D4[])();
extern void (*D_sc02_005_8019660C[])();
extern void (*D_sc02_005_801966A0[])();
extern void (*D_sc02_005_801966B8[])();
extern void (*D_sc02_005_80196760[])();
extern void (*D_sc02_005_801967C4[])();
extern void (*D_sc02_005_801967CC[])();
extern void (*D_sc02_005_80196814[])();
extern void (*D_sc02_005_80196868[])();
extern void (*D_sc02_005_801968F4[])();
extern void (*D_sc02_005_80196B80[])();
extern void (*D_sc02_005_80196B8C[])();
extern void (*D_sc02_005_80196B98[])();
extern void (*D_sc02_005_80196BA0[])();
extern void (*D_sc02_005_80196BB0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_8012C218();
extern void (*D_sc02_005_80196C9C[])();
extern void (*D_sc02_005_80196CB0[])();
extern void (*D_sc02_005_80196CC0[])();
extern void (*D_sc02_005_80196CD4[])();
extern void (*D_sc02_005_80196CDC[])();
extern void (*D_sc02_005_80196CE8[])();
extern void (*D_sc02_005_80196CF4[])();
extern void (*D_sc02_005_80196CFC[])();
extern void (*D_sc02_005_80196EA4[])();
extern s32 func_sc02_005_80190384();
extern void (*D_sc02_005_80196F00[])();

extern void func_sc02_005_80181FA8();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern s32 func_801399F0();
extern void func_80139914();
extern void func_80165770();
extern void func_80175414();
extern s32 func_8012BEE8();
extern void func_sc02_005_80182098();
extern s32 func_sc02_005_80183174();
extern s32 func_8012AD44();
extern s32 func_sc02_005_80188A5C();
extern s32 func_80128ED8();
extern void func_801292C8();

extern void func_sc02_005_8017BF14();
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
extern void func_8012931C();

void func_sc02_005_8017BE9C(s32 arg0, s32 arg1) {
    func_sc02_005_8017BF14(arg0, arg1, 0xC, 0);
}

void func_sc02_005_8017BEC0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc02_005_8017BF14(arg0, arg1, (s32) arg2, 0);
}

void func_sc02_005_8017BEE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_005_8017BF14(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern s32 func_sc02_005_8018C394();
extern u8 D_sc02_005_801E491C;
extern void func_sc02_005_8018C2B0();
extern void func_800233CC();
extern u8 D_sc02_005_8019AA5C;
extern u8 D_sc02_005_801D91D4;
extern s32 func_8013C414();
extern u8 D_sc02_005_801DA5FC;
extern u8 D_sc02_005_801DB658;
extern u8 D_sc02_005_801DC180;
extern u8 D_sc02_005_801DCD04;
extern u8 D_sc02_005_801DD2D4;
extern u8 D_sc02_005_801DDD30;
extern u8 D_sc02_005_801DE674;
extern u8 D_sc02_005_801DF3B4;
extern s32 func_8013C360();
extern void func_80146C3C();
extern s32 func_sc02_005_801903DC();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();
extern void func_sc02_005_801904B8();
extern void func_80146CA0();
extern void func_8014BC44();
extern s32 func_80151664();

extern u8 D_80126FA8;
extern void func_8012A048();
extern u8 D_80126E60;
extern s32 D_80126E6C;
extern s32 D_80126E74;
extern s16 D_80126E80;
extern s16 D_80126E82;
extern s16 D_80126E84;
extern s16 D_80126E8E;
extern s16 D_80126E90;
extern s16 D_80126E92;
extern s16 D_80126F00;
extern s32 func_8012A100();
extern void func_8012A0E0();
extern u8 D_801274E8;
extern void func_sc02_005_8017EFB4();
extern void func_80171B44();
extern u8 D_800D5A34;
extern s32 func_80171B4C();
extern s32 func_800CF854();
extern void func_80154274();
extern s32 func_8013767C();
extern s32 D_801270C8;
extern s32 func_sc02_005_8017F6A4();
extern s32 D_80126CF0;
extern u8 D_80126D6C;
extern u8 D_sc02_005_8019718C;
extern u8 D_sc02_005_801943B0;
extern u8 D_sc02_005_8019727C;
extern void func_sc02_005_8017E26C();
extern s32 func_sc02_005_8017FA3C();
extern u8 D_sc02_005_801972DC;
extern void func_sc02_005_8017E190();
extern s32 func_80012B04();
extern u8 D_sc02_005_80197540;
extern u8 D_800D5C6C;
extern u8 D_sc02_005_80197570;
extern u8 D_sc02_005_801975AC;
extern s32 func_8001A9D8();
extern s32 func_8001AAA0();
extern s32 func_sc02_005_8017E4F8();
extern void func_sc02_005_8017DE5C();
extern s16 D_800B9AAC;
extern void func_8014C6AC();
extern s32 func_8016EE94();
extern void func_8014C6C0();
extern s32 D_80126958;
extern s16 D_80126960;
extern s16 D_80126962;
extern s16 D_sc02_005_80194556;
extern s32 func_8014C168();
extern void func_sc02_005_8017E798();
extern s16 D_80126970;
extern void func_sc02_005_8017E898();
extern void func_sc02_005_80181270();
extern void func_sc02_005_801812B4();
extern u8 D_sc02_005_80197628;
extern void func_sc02_005_8017E8E4();
extern u8 D_800D5C00;
extern u8 D_800D6004;
extern u8 D_sc02_005_80194370;
extern s32 func_sc02_005_801816CC();
extern void func_800D1724();
extern void func_8012B23C();
extern void func_sc02_005_8017DF50();
extern s32 func_sc02_005_801838A8();
extern s32 func_sc02_005_80186F14();
extern u8 D_sc02_005_80191060;
extern void func_8012CBA4();
extern void func_8013C9C4();
extern s32 func_sc02_005_8018655C();
extern void func_sc02_005_80186178();
extern s32 func_sc02_005_80186304();
extern void func_8012B200();
extern s32 func_sc02_005_801862E0();
extern void func_sc02_005_80189FC4();
extern u8 D_sc02_005_80196288;
extern void func_8012C588();
extern s32 func_sc02_005_80189FA4();
extern void func_80019064();
extern s32 func_8002AB64();
extern void (*D_sc02_005_801962C0[])();
extern void func_sc02_005_80186600();
extern void func_sc02_005_80183218();
extern void func_sc02_005_80186DE8();
extern void func_sc02_005_8018B058();
extern void func_sc02_005_8018AF58();
extern u8 D_sc02_005_80196414;
extern u16 D_sc02_005_801E43BC;
extern void func_sc02_005_80186B08();
extern void func_sc02_005_80186424();
extern u16 D_800B99D8;
extern u16 D_sc02_005_801E4BBC;
extern void (*D_sc02_005_801964A8[])();
extern void func_80132F40();
extern void func_sc02_005_80186F60();
extern void func_sc02_005_801865D0();
extern void func_sc02_005_80189E34();
extern void func_sc02_005_8018A0E4();
extern void func_sc02_005_80185DD0();
extern u8 D_sc02_005_80196208;
extern void func_sc02_005_80181900();
extern void func_sc02_005_80181F04();
extern void func_sc02_005_8017DF00();
extern void func_sc02_005_8017DF28();
extern void func_sc02_005_80181FE8();
extern s32 func_8012CBCC();
extern void func_sc02_005_801820E4();
extern void func_sc02_005_801821C8();
extern void func_sc02_005_80182284();
extern void func_sc02_005_8018415C();
extern void (*D_sc02_005_80196250[])();
extern s32 func_sc02_005_80184CA4();
extern void func_sc02_005_801856E4();
extern s32 func_8012CBF4();
extern s32 func_sc02_005_80182E04();
extern void func_sc02_005_80182EB0();
extern void (*D_sc02_005_80196274[])();
extern void func_8012AD80();
extern void func_sc02_005_80182FAC();
extern u8 D_sc02_005_8019103C;
extern s32 func_sc02_005_8018300C();
extern void func_sc02_005_801830F4();
extern s32 func_sc02_005_80183060();
extern s16 D_sc02_005_801E4398;
extern s32 func_sc02_005_80183074();
extern u8 D_80062BC0;
extern s32 D_sc02_005_801E43A4;
extern void func_sc02_005_80183160();
extern void (*D_sc02_005_801962A0[])();
extern u8 D_sc02_005_80196184;
extern u8 D_sc02_005_801961E0;
extern s32 D_sc02_005_801E448C;
extern s32 D_sc02_005_801E4490;
extern s32 func_8012C354();
extern u8 D_sc02_005_801E44E0;
extern void func_8013240C();
extern void func_80132784();
extern s32 func_sc02_005_80184D24();
extern s32 D_sc02_005_801E43A0;
extern void func_sc02_005_80185060();
extern void func_sc02_005_80185214();
extern void func_sc02_005_801870BC();
extern void func_sc02_005_80189F84();
extern s32 func_sc02_005_801853CC();
extern s32 func_sc02_005_801822B4();
extern s32 func_80143994();
extern void func_sc02_005_80188F38();
extern s32 func_80132EF4();
extern s32 func_8012913C();
extern s32 func_sc02_005_8018A30C();
extern void func_80129350();
extern s32 D_sc02_005_801E4A58[];
extern void func_sc02_005_8018A4C4();
extern u8 D_sc02_005_801964D4;
extern void func_8001C924();
extern s32 func_8012C658();
extern s8 D_sc02_005_801E44F7;
extern void func_sc02_005_8018AC10();
extern void func_sc02_005_80189504();
extern u8 D_sc02_005_801965C8;
extern void func_8001CC3C();
extern void func_sc02_005_801895E0();
extern u8 D_sc02_005_801921F8;
extern void func_8001CB6C();
extern u8 D_sc02_005_801967D4;
extern void func_80128D60();
extern void func_80128DB4();
extern u8 D_sc02_005_8019681C;
extern u8 D_sc02_005_80196828;
extern void func_80128EA8();
extern u8 D_sc02_005_80196B30;
extern u8 D_sc02_005_80196AE8;
extern s32 func_sc02_005_80189F44();
extern s32 func_sc02_005_8018BFBC();
extern s32 func_sc02_005_8018BFDC();
extern u8 D_sc02_005_801E4958;
extern u8 D_sc02_005_801F1988;
extern u8 D_sc02_005_801F2138;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern void func_sc02_005_8018C3C4();
extern void func_sc02_005_8017C048();
extern s32 func_sc02_005_8018C3EC();
extern void func_80016450();
extern void func_sc02_005_8018EA04();
s32 func_sc02_005_8018F414(void);
extern void func_sc02_005_80180A7C();
s32 func_sc02_005_8018F704(void);
extern u8 D_sc02_005_80196C14;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern u8 D_sc02_005_801D9044;
extern s32 func_8012D714();
extern void func_8001C97C();
extern void func_801439C0();
extern u8 D_800D387C;
extern s32 D_sc02_005_801E4C40;

extern s32 D_sc02_005_8019640C[];
extern u8 D_sc02_005_80196448;
extern s32 D_sc02_005_801BB8F4;
extern void func_8001C214();
extern void func_sc02_005_80184480();
extern u8 D_sc02_005_80190C0C;
extern s32 D_sc02_005_801964C4[];
extern u8 D_sc02_005_801964DC;
extern s32 D_sc02_005_801BB8F8;
extern u8 D_sc02_005_801966A8;
extern u8 D_sc02_005_801966B0;

extern void func_80029514();
extern void func_8002AED0();
extern void func_800CFBCC();
extern u8 D_sc02_005_801963D0;
extern s32 D_sc02_005_801D6D94;
extern void func_sc02_005_80185A04();
extern void func_sc02_005_801858C4();
extern void func_80132288();
extern void func_sc02_005_80186F58();
extern u8 D_sc02_005_80196DAC;
extern u8 D_sc02_005_80196DD4;
extern void func_80017254();
extern void func_800176F0();

extern s32 D_80126950;
extern void func_sc02_005_8018622C();
extern void func_sc02_005_80186F9C();

extern u8 D_sc02_005_80197300;
void func_sc02_005_80190408(void);
extern void func_sc02_005_8018A1D8();
extern s32 func_8012CE2C();
extern void func_sc02_005_80182998();
s32 func_sc02_005_80182918(s32 arg0);
extern s32 func_sc02_005_8018687C();
extern s32 func_sc02_005_8018675C();


void func_sc02_005_801862F0(s32 arg0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017BF14);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017BF9C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017BFF0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017C048);

void func_sc02_005_8017C0F4(u8 *arg0) {
    D_sc02_005_80194320[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017C130);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017C41C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017C8B0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017CC88);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017CD2C);

s32 func_sc02_005_8017CF24(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017CF90);

void func_sc02_005_8017DE5C(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_8012695C = 0x28A;
    D_80126968 = 0x238;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = -0x80;
    D_80126978 = 0;
    D_8012697A = -0x80;
    func_8012A018((s32) func_sc02_005_8017E97C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017DF00(void) {
    func_8012A018((s32) func_sc02_005_8017E97C, 2);
}

void func_sc02_005_8017DF28(void) {
    func_8012A018((s32) func_sc02_005_8017E97C, 3);
}

void func_sc02_005_8017DF50(void) {
    func_8012A018((s32) func_sc02_005_8017E97C, 8);
}

void func_sc02_005_8017DF78(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x28A;
    D_80126968 = 0x238;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = -0x80;
    D_80126978 = 0;
    D_8012697A = -0x80;
    func_8012A018((s32) func_sc02_005_8017E97C, 8);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E014(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x1A4;
    D_80126968 = 0x71;
    D_8012696A = -0xE3;
    D_80126976 = -0x40;
    D_8012696C = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E0B4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E190);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E26C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E348);

void func_sc02_005_8017E424(void) {
    func_8012A048((s32) &D_80126FA8, (s32) func_sc02_005_8017E97C, 6);
}

void func_sc02_005_8017E454(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_80126954 = 0x224;
    D_8012695C = 0x3A0;
    D_80126968 = 0x75;
    D_8012696A = 0x800;
    (*(s16 *)&D_8012696C) = 0;
    D_80126976 = 0;
    D_80126978 = -0x35;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1, arg2, arg3);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
    func_8012A0E0();
}

s32 func_sc02_005_8017E4F8(arg0)
    s32 arg0;
{
    D_80126E6C = 0x12C;
    D_80126E74 = 0x21C;
    D_80126E80 = -0x71;
    D_80126E82 = 0xA00;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = -0xA0;
    D_80126E92 = 0;
    func_8012A048((s32) &D_80126E60, (s32) func_sc02_005_8017E97C, 7);
    D_80126F00 = -5;
    func_8012A094((s32) &D_80126E60);
    func_sc02_005_8017E97C((s32) &D_80126E60);
    return func_8012A100(1);
}

void func_sc02_005_8017E5AC(s32 arg0) {
    func_8012A0E0(arg0);
}

void func_sc02_005_8017E5CC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E664(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x11C;
    D_8012696A = 0x71C;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E6FC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = -0x271;
    D_8012696A = 0xC00;
    D_8012696C = 0;
    D_80126976 = 0x20;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E798);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E898);

void func_sc02_005_8017E8E4(void) {
    D_80126954 = 0x118;
    D_8012695C = 0x258;
    D_80126968 = 0x31C;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 5);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E97C(s32 arg0) {
    D_sc02_005_80194328[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017E9B8);

s32 func_sc02_005_8017EA74(s32 arg0) {
    func_sc02_005_8017EDF8(arg0, (s32) &D_sc02_005_801E4C50);
}

void func_sc02_005_8017EA9C(s32 arg0) {
    func_sc02_005_8017EFB4();
    func_sc02_005_8017EDF8(arg0, (s32) &D_801274E8);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017EAD4);

void func_sc02_005_8017EB30(void) {
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017EB38);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017EB8C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017ECAC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017ED28);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017EDF8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017EFB4);

void func_sc02_005_8017F010(u8 *arg0) {
    D_sc02_005_8019439C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_005_8017F04C(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_005_8017F428, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_005_8017F09C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_005_8017F0C0(u8 *arg0) {
    D_sc02_005_801943A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_005_8017F0FC(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0x14;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_005_8017F118(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc02_005_8017F194(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_80029514(2);
        func_8002AED0();
        func_800CFBCC(1);
        return 1;
    }
    return 0;
}

void func_sc02_005_8017F1DC(u8 *arg0) {
    D_sc02_005_80194454[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_8017F218(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_80171B44();
}

void func_sc02_005_8017F244(s32 arg0) {
    if (func_80171B4C(arg0, 0x1E) != 0) {
        if (func_800CF854() != 0) {
            AF(arg0, u8, 0x214) = 3U;
            return;
        }
        func_80154274(arg0, (s32) &D_800D5A34);
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F2C4(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F320(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc02_005_8017F358(u8 *arg0) {
    D_sc02_005_80194464[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_8017F394(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
}

void func_sc02_005_8017F3C4(s32 arg0) {
    if (func_80171B4C(arg0, 2) != 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F408(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_005_8017F428(u8 *arg0) {
    D_sc02_005_80194470[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017F464);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017F530);

void func_sc02_005_8017F5B0(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x204) = 0x20;
        D_80126968 = 0xE3;
        D_8012696A = -0x71C;
        D_80126976 = -0x20;
        D_80126978 = -0x60;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F63C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        D_801270C8 = 3;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F674(void) {
    if (D_801270C8 == 6) {
        func_sc02_005_8017F6A4();
    }
}

s32 func_sc02_005_8017F6A4(void) {
    s32 temp_v0;

    temp_v0 = func_8013767C((s32) &D_sc02_005_8019718C);
    D_80126CF0 = temp_v0;
    D_80126D6C += 1;
    return temp_v0;
}

void func_sc02_005_8017F6E8(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        D_801270C8 = 7;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017F748);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017F7CC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017F898);

void func_sc02_005_8017F924(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_80154274((s32) arg0, (s32) &D_sc02_005_801943B0);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_8019727C);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F998(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017E26C();
        func_8002D4C8(0x510, 0x103F);
        D_801270C8 = 0xB;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FA0C(void) {
    if (D_801270C8 == 0xC) {
        func_sc02_005_8017FA3C();
    }
}

s32 func_sc02_005_8017FA3C(void) {
    s32 temp_v0;

    func_sc02_005_8017E190();
    func_8002D4C8(0x510, 0x107F);
    temp_v0 = func_8013767C((s32) &D_sc02_005_801972DC);
    D_80126CF0 = temp_v0;
    D_80126D6C += 1;
    return temp_v0;
}

void func_sc02_005_8017FA94(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_80175414();
        func_8012A100(0);
        func_8002D4C8(0x510, 0x102F);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197300);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017FB14);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017FB80);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017FC64);

void func_sc02_005_8017FCFC(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x800, 4);
    if (((temp_v0 << 0x10) == 0) && (func_801399F0(AF(arg0, s32, 0x198)) != 0)) {
        BeginScene((s32) arg0);
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017E26C();
        D_801270C8 = 0xE;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc02_005_8017FDB4(u8 *arg0, s32 arg1) {
    if (D_801270C8 == 0x11) {
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197540, arg1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017FE08);

void func_sc02_005_8017FEA0(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        D_801270C8 = 0x12;
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197570);
        func_80154274((s32) arg0, (s32) &D_800D5C6C);
        EndScene((s32) arg0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FF2C(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        BeginScene((s32) arg0);
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FF8C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x40;
        D_8012695C = 0x190;
        D_80126968 = -0x155;
        D_80126978 = 0x20;
        D_801270C8 = 0x13;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8017FFF0);

void func_sc02_005_80180060(s32 arg0) {
    if (D_801270C8 == 0x15) {
        func_80154274(arg0, (s32) &D_800D5A34);
        EndScene(arg0);
        D_80126968 = -0x71;
        AF(arg0, s32, 0x204) = 0x12;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801800CC(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s32, 0x204) != 0) {
        if (func_8001A9D8() == 0) {
            temp_v0 = AF(arg0, s32, 0x204) - 1;
            AF(arg0, s32, 0x204) = temp_v0;
            if (temp_v0 == 0xE) {
                AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_801975AC);
                func_8002D4C8(0x50E, 0);
            }
        }
    } else if (func_8001AAA0(0x14) != 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8018016C(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        BeginScene((s32) arg0);
        func_sc02_005_801903DC(0);
        func_sc02_005_8017E4F8();
        AF(arg0, s32, 0x204) = 0xA0;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801801DC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_005_80190408();
        func_8012A100(0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180234);

void func_sc02_005_801802CC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017DE5C();
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180328(s32 arg0) {
    func_80175414(arg0);
    D_801270C8 = 0x16;
    D_800B9AAC = 0x7FFF;
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc02_005_80180380(u8 *arg0) {
    D_sc02_005_801944E8[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801803BC);

void func_sc02_005_80180454(s32 arg0) {
    D_801270C8 = 0x16;
    D_800B9AAC = 0x7FFF;
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

s32 func_sc02_005_801804AC(s32 arg0, s32 arg1) {
    return func_8016EE94((s32) func_sc02_005_801804D4, 0x01000000);
}

void func_sc02_005_801804D4(u8 *arg0) {
    D_sc02_005_8019452C[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180510);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180574);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180610);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018074C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801808B0);

void func_sc02_005_80180A3C(s32 arg0) {
    func_80175414(arg0);
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc02_005_80180A7C(void) {
    func_8016EDEC((s32) func_sc02_005_80180AA4, 0x01000000);
}

void func_sc02_005_80180AA4(u8 *arg0) {
    D_sc02_005_80194544[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_80180AE0(s32 arg0) {
    func_8014C6C0(arg0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180B18);

void func_sc02_005_80180B90(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x400, 4);
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc02_005_80180C04(s32 arg0) {
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc02_005_80180C3C(s32 arg0) {
    func_8016EDEC((s32) func_sc02_005_80180C64, 0x01000000);
}

void func_sc02_005_80180C64(u8 *arg0) {
    D_sc02_005_8019455C[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180CA0);

void func_sc02_005_80180D18(s32 arg0) {
    if ((AF(func_8014C168(arg0, 0x3D), s16, 0xA) - D_sc02_005_80194556) > 0) {
        D_801270C8 = 0x1F;
        D_80126958 = 0x708;
        D_8012695C = 0x708;
        D_80126960 = 0x31C;
        D_80126968 = 0x31C;
        D_80126962 = 0x400;
        D_8012696A = 0x400;
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180DB8(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_800D0C48(2, arg1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180E08);

void func_sc02_005_80180F5C(u8 *arg0) {
    if (func_8001AAA0(0x15) != 0) {
        func_8002D4C8(0x10A, 0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80180FA8);

void func_sc02_005_80181028(u8 *arg0) {
    func_sc02_005_8017E798();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_005_80181060(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017E898();
        AF(arg0, s32, 0x204) = 0x30;
        func_sc02_005_80181270((s32) arg0);
        D_80126970 = 0;
        D_80126976 = 0;
        D_80126958 = 0x190;
        D_8012695C = 0x190;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801810F0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        D_800B9AAC = 0x7FFF;
        AF(arg0, s16, 0xAC) = 0x80;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8018112C(s32 arg0) {
    if (func_8014C168(arg0, 0x42) != 0) {
        func_sc02_005_80181270(arg0);
    }
    if (D_801270C8 == 0x20) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018118C);

void func_sc02_005_80181238(s32 arg0) {
    if (D_801270C8 == 0x22) {
        func_8016F0E4(arg0);
        func_sc02_005_801812B4();
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181270);

void func_sc02_005_801812B4(void) {
    func_8016EDEC((s32) func_sc02_005_801812DC, 0x01000000);
}

void func_sc02_005_801812DC(u8 *arg0) {
    D_sc02_005_8019458C[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_80181318(u8 *arg0) {
    AF(arg0, s32, 0x204) = 0x20;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_005_80181330(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x10B, 0);
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80181388(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_005_8017E8E4();
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197628);
        AF(arg0, s32, 0x200) = 0xDC;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801813F0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018141C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801814B4);

void func_sc02_005_80181570(s32 arg0) {
    void *temp_v1;

    func_sc02_005_801816CC(arg0, 0xC000);
    temp_v1 = AF(arg0, void *, 0x20);
    if (AF(temp_v1, s16, 0x10) < 0xC00) {
        AF(temp_v1, s16, 0x10) = 0xC00;
        func_80154274(arg0, (s32) &D_800D5C00);
        StartFaceScript(arg0, (s32) &D_800D6004);
        func_800D1724((s32) &D_sc02_005_80194370);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801815FC);

void func_sc02_005_8018166C(s32 arg0) {
    BeginScene(arg0);
    func_8016F0E4(arg0);
}

void func_sc02_005_8018169C(u8 *arg0, s32 arg1) {
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x12) = (u16) ((AF(temp_a2, u16, 0x12) + AF(arg0, u16, 0x206)) & 0xFFF);
    AF(arg0, s32, 0x204) = (s32) (AF(arg0, s32, 0x204) - arg1);
}

s32 func_sc02_005_801816CC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x10) = (u16) ((AF(temp_a2, u16, 0x10) - AF(arg0, u16, 0x20A)) & 0xFFF);
    temp_v0 = AF(arg0, s32, 0x208) + arg1;
    AF(arg0, s32, 0x208) = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801816FC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181900);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181984);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181BE8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181D30);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181F04);

void func_sc02_005_80181F68(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_005_80181F70(s32 arg0) {
    func_sc02_005_80186304(arg0, 0x10, 0);
    AF(arg0, s16, 0x34) = 1;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181FA8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80181FE8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018203C);

void func_sc02_005_80182098(s32 arg0) {
    func_sc02_005_8018622C();
    if (AF(arg0, s16, 0xE0) >= 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x400;
    }
    AF(arg0, s16, 0x34) = 5;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801820E4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801821C8);

void func_sc02_005_80182284(s32 arg0) {
    func_sc02_005_801862F0(arg0);
    AF(arg0, s16, 0x34) = 8;
}

s32 func_sc02_005_801822B4(s32 arg0) {
    func_8012B23C(arg0);
    func_sc02_005_8017DF50();
    return func_sc02_005_801838A8(arg0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801822EC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801824D0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182740);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801827A8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182810);

s32 func_sc02_005_801828D8(s32 arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 1);
    func_8012AD44(arg0, 2);
    return func_sc02_005_80186F14(arg0);
}

s32 func_sc02_005_80182918(s32 arg0) {
    s32 temp_v1;

    func_8012CBA4(arg0);
    temp_v1 = AF(arg0, s32, 0x94);
    if (((temp_v1 == 1) || (temp_v1 == 0xD)) && (AF(arg0, s16, 0x98) == 1)) {
        func_8013C9C4((s32) &D_sc02_005_80191060);
        func_8002D4C8(0x4F1, 0);
        func_8002D4C8(0x50B, 0);
    }
    return func_sc02_005_8018655C(arg0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182998);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182A8C);

s32 func_sc02_005_80182D80(s32 arg0) {
    func_sc02_005_80186178(arg0);
    func_8012B23C(arg0);
    func_8012AD44(arg0, 0xC);
    return func_sc02_005_80186304(arg0, 0, 2);
}

void func_sc02_005_80182DCC(s32 arg0) {
    func_sc02_005_8018622C();
    AF(arg0, s32, 0x14) = 0x100000;
    AF(arg0, s16, 0x34) = 1;
}

s32 func_sc02_005_80182E04(s32 arg0) {
    func_8012B23C(arg0);
    func_8013C9C4((s32) &D_sc02_005_8019103C);
    func_sc02_005_80186304(arg0, 0, 2);
    AF(arg0, s16, 0x34) = 2;
    D_801270C8 = 0x15;
    func_sc02_005_8018A1D8(arg0);
    return func_8002D4C8(0x4FB, 0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182E78);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182EB0);

s32 func_sc02_005_80182F78(s32 arg0, s32 arg1) {
    func_8012B23C(arg0, arg1);
    AF(arg0, s32, 0x10) = 0xFFE80000;
    AF(arg0, s16, 0x34) = 0;
    return -0x180000;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80182FAC);

s32 func_sc02_005_8018300C(s32 arg0) {
    func_8012B200(arg0);
    func_sc02_005_801862E0(arg0);
    AF(arg0, s16, 0x34) = 2;
    AF(arg0, s32, 0x1C) = 0x10;
    func_sc02_005_80189FC4(arg0);
    return func_8002D4C8(0x503, 0);
}

s32 func_sc02_005_80183060(s32 arg0) {
    AF(arg0, s16, 0x34) = 3;
    AF(arg0, s32, 0x1C) = 0x20;
    return 0x20;
}

s32 func_sc02_005_80183074(s32 arg0) {
    D_801270C8 = 0x20;
    AF(arg0, s16, 0x34) = 5;
    AF(arg0, s32, 0x1C) = 0x70;
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x4000);
    func_8012C588(0x75, arg0);
    func_sc02_005_80189FA4(arg0);
    func_80019064((s32) &D_sc02_005_80196288);
    return func_8002D4C8(0x50D, 0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801830F4);

void func_sc02_005_80183160(s32 arg0) {
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0x34) = 6;
}

s32 func_sc02_005_80183174(s32 arg0) {
    D_801270C8 = 0x22;
    AF(arg0, s16, 0x34) = 7;
    return func_8002AB64();
}

void func_sc02_005_801831A4(s32 arg0) {
    func_sc02_005_80186600();
    func_sc02_005_80183218(arg0);
    D_sc02_005_801962C0[AF(arg0, u16, 2)](arg0);
    func_sc02_005_80186DE8(arg0);
}

void func_sc02_005_80183200(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183218);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801834C8);

void func_sc02_005_80183524(s32 arg0, s32 arg1) {
    func_8012BEE8(arg0, arg1);
    if (AF(arg0, s32, 0x1C) == 1) {
        func_sc02_005_80186304(arg0, 0xB, 2);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_8002D4C8(0x4ED, 0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183584);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183610);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801838A8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183B0C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183C7C);

void func_sc02_005_80183D18(u8 *arg0) {
    D_sc02_005_80196320[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183D54);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183D90);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80183FCC);

void func_sc02_005_801840E8(s32 arg0) {
    if (AF(AF(arg0, void *, 0x64), s32, 0xE8) & 2) {
        if (AF(arg0, s16, 0xE) == 0x18) {
            AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) | 1);
            func_8002D4C8(0x50A, 0);
        }
    } else {
        AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) | 1);
    }
}

void func_sc02_005_8018415C(s32 arg0) {
    if (AF(arg0, s16, 0xE) == 0) {
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) | 2);
    }
}

s32 func_sc02_005_80184184(s32 arg0) {
    s16 *temp_v1;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s32, 0x1C) = 0x18;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    temp_v1 = AF(arg0, s16 *, 0xCC);
    AF(arg0, s16, 2) = 4;
    if (temp_v1 != NULL) {
        *temp_v1 = 0;
    }
    return func_8002D4C8(0x509, 0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801841E0);

void func_sc02_005_8018431C(u8 *arg0) {
    D_sc02_005_801963E8[AF(arg0, u16, 2)]();
}

void func_sc02_005_80184358(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    if (AF(AF(arg0, void *, 0x64), s32, 0xE8) & 2) {
        AF(arg0, u8, 0xC1) = 1;
        AF(arg0, s32, 0x1C) = 8;
        func_sc02_005_80185A04((s32) arg0, (s32) AF(arg0, void *, 0x64), (s32) AF(arg0, s16, 0x60));
        func_sc02_005_801858C4();
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0xAE) = -1;
    func_8012AD44((s32) arg0, 3, arg2);
    func_80132288((s32) &D_sc02_005_801E44E0, (s32) &D_sc02_005_801963D0, D_sc02_005_801D6D94);
    func_sc02_005_801858C4();
    func_8002D4C8(0x4F2, 0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184404);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184480);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801844D4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018454C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801846CC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184828);

s32 func_sc02_005_801849E4(s32 arg0) {
    func_8012AD44(arg0, 4);
    func_sc02_005_8018B058(arg0);
    func_8012B200(arg0);
    func_sc02_005_8018AF58(arg0);
    return func_8002D4C8(0x4EE, 0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184A34);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184A8C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184C20);

s32 func_sc02_005_80184CA4(s32 arg0) {
    AF(arg0, s16, 6) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
    AF(arg0, s16, 0xA) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
    AF(arg0, s16, 0xE) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x10) = 0x40000;
    AF(arg0, s32, 0x14) = 0xFFF80000;
    AF(arg0, s32, 0x18) = 0xFFFC0000;
    AF(arg0, s32 *, 0x78) = &D_sc02_005_80196414;
    return func_8012AD44(arg0, 6);
}

s32 func_sc02_005_80184D24(s32 arg0) {
    return func_8012AD44(arg0, 7);
}

void func_sc02_005_80184D44(u8 *arg0) {
    D_sc02_005_80196470[AF(arg0, u16, 2)]();
}

void func_sc02_005_80184D80(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184D98);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184E30);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80184EC0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185060);

s32 func_sc02_005_801851E0(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xDC) = 1;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0xAE) = -1;
    return func_8012AD44(arg0, 2);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185214);

s32 func_sc02_005_801853CC(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return func_8012AD44(arg0, 4);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801853EC);

void func_sc02_005_8018548C(s32 arg0, s32 arg1) {
    u8 temp_v1;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        func_sc02_005_80186B08(arg0);
    }
    func_sc02_005_80186424(arg0);
    temp_v1 = AF(arg0, u8, 0x74);
    if ((temp_v1 != 0) && (AF(arg0, u16, 0xFE) & 1)) {
        D_sc02_005_801E43BC |= temp_v1;
    }
}

void func_sc02_005_8018550C(u8 *arg0) {
    s32 temp_s1;
    u8 temp_v1;

    D_sc02_005_801964A8[AF(arg0, u16, 2)]();
    temp_s1 = AF(AF(arg0, void *, 0xCC), s32, 0xE8);
    if (!(temp_s1 & 0x8000)) {
        func_sc02_005_80186424((s32) arg0);
        temp_v1 = AF(arg0, u8, 0x74);
        if ((temp_v1 != 0) && (AF(arg0, u16, 0xFE) & 1)) {
            D_sc02_005_801E43BC |= temp_v1;
        }
        if ((AF(arg0, s16, 0x70) == 0x11) && (AF(arg0, u16, 0x5C) & 0x400)) {
            func_80132F40((s32) arg0);
        }
        if ((AF(arg0, u16, 0xFE) & 2) && (temp_s1 & 0x20)) {
            func_sc02_005_80186F60((s32) arg0);
        } else if (AF(arg0, u16, 0xFE) & 1) {
            if (temp_s1 & 0x100) {
                func_sc02_005_801865D0((s32) arg0);
            }
        }
        if (temp_s1 & 0x10000) {
            if (!(D_800B99D8 & 3) && ((rand() & 0x1F) == ((u16) AF(arg0, s16, 0x70) & 0x1F))) {
                func_sc02_005_80189E34((s32) arg0, (s32) D_sc02_005_801E4BBC);
            }
        } else if ((temp_s1 & 0x4000) && (((D_800B99D8 % 60) & 0xFFFF) == (AF(arg0, s16, 0x70) * 2))) {
            func_sc02_005_8018A0E4((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801856E4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185764);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185858);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801858C4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018592C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185A04);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185A88);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185B38);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185D6C);

s32 func_sc02_005_80185D84(arg0)
    s32 arg0;
{
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xCC);
    func_sc02_005_80185DD0(0, AF(temp_s0, void *, 0x20) + 0x12, 0x100);
    return AF(AF(temp_s0, void *, 0x20), s16, 0x12) == 0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185DD0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185E54);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80185E80);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801860F4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186144);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186178);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018622C);

s32 func_sc02_005_801862E0(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v0, s16, 0x98) = 0;
    return (s32) temp_v0;
}

void func_sc02_005_801862F0(s32 arg0) {
    AF(arg0, s16, 0x98) = 1;
    AF(AF(arg0, void *, 0xCC), s16, 0x98) = 1;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186304);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186424);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018655C);

void func_sc02_005_801865D0(s32 arg0) {
    if (func_8012D714(arg0, 5) != 0) {
        D_80126B96 = 0x4005;
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186600);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018675C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018687C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018692C);

s32 func_sc02_005_801869E0(s32 arg0) {
    void *temp_v0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc02_005_80196208;
    temp_v0 = AF(AF(arg0, void *, 0xCC), void *, 0x20);
    AF(temp_v0, s32 *, 0x80) = &D_sc02_005_80196208;
    return (s32) temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186A04);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186ADC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186B08);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186BB8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186C0C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186C70);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186CA8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186D00);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186D74);

void func_sc02_005_80186DE8(s32 arg0) {
    s16 temp_a0;
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, s32, 0xE8);
        temp_a0 = temp_v0 - 1;
        AF(arg0, s16, 0xFC) = temp_a0;
        if (temp_a1 & 0x40) {
            if ((temp_a0 << 0x10) == 0) {
                AF(arg0, s32, 0xE8) = (s32) (temp_a1 & ~0x40);
                AF(arg0, s16, 0xFC) = 8;
            }
        } else {
            if ((temp_a1 & 0x200) || ((D_sc02_005_801E43A0 & 0x1540) == 0x1540)) {
                AF(arg0, s16, 0xFC) = 0;
                return;
            }
            if ((temp_a0 << 0x10) == 0) {
                AF(arg0, s32, 0xE8) = (s32) (temp_a1 | 0x40);
                AF(arg0, s16, 0xFC) = 0xC;
                if (!(D_sc02_005_801E43A0 & 0x40)) {
                    func_sc02_005_80186F9C(arg0, 5);
                }
                if (!(D_sc02_005_801E43A0 & 0x100)) {
                    func_sc02_005_80186F9C(arg0, 0xA);
                }
                if (!(D_sc02_005_801E43A0 & 0x400)) {
                    func_sc02_005_80186F9C(arg0, 0xF);
                }
                if (!(D_sc02_005_801E43A0 & 0x1000)) {
                    func_sc02_005_80186F9C(arg0, 0x14);
                }
                func_8002D4C8(0x4F0, 0);
            }
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186F14);

void func_sc02_005_80186F58(s32 arg0) {
    AF(arg0, s16, 0xFC) = 0;
}

void func_sc02_005_80186F60(s32 arg0) {
    if (func_8012D714(arg0, 1) != 0) {
        D_80126B96 = 0x4002;
        D_80126B98 = 0xA;
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80186F9C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187070);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801870BC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801871E4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187280);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187348);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801873FC);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187508);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187560);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187664);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801876B0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187768);

void func_sc02_005_801877FC(s32 arg0) {
    s16 temp_v0;
    s32 temp_v1;

    if (func_8012CE2C() == 0) {
        func_8012CBCC(arg0);
    }
    if (AF(arg0, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998(arg0);
        return;
    }
    func_sc02_005_8018655C(arg0);
    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 > 0) {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
    }
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_005_801838A8(arg0);
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if (((temp_v1 == 4) || (temp_v1 == 0xC)) && (AF(arg0, s16, 0x98) == 1)) {
        func_8002D4C8(0x4F7, 0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801878C0);

void func_sc02_005_8018791C(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;

    if (AF(arg0, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998((s32) arg0, arg1, arg2);
        return;
    }
    func_sc02_005_80182918((s32) arg0);
    if (!(AF(arg0, s32, 0xE8) & 0x1000)) {
        temp_v0 = AF(arg0, s16, 0x100);
        if (temp_v0 > 0) {
            AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
        }
    }
    if ((func_sc02_005_8018687C((s32) arg0) != 0) || (func_sc02_005_8018675C((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x1000);
        func_sc02_005_801838A8((s32) arg0);
    }
}

void func_sc02_005_801879DC(u8 *arg0) {
    AF(arg0, s16, 0xE0) = -1;
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 1);
    func_sc02_005_80181900();
}

void func_sc02_005_80187A0C(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_sc02_005_80181900();
}

void func_sc02_005_80187A38(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 1);
    func_sc02_005_80186F58((s32) arg0);
    func_sc02_005_80186304((s32) arg0, 0xE, 2);
    func_8012AD44((s32) arg0, 4);
}

void func_sc02_005_80187A8C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_8012AD44((s32) arg0, 5, arg2);
    func_sc02_005_80186F58((s32) arg0);
}

void func_sc02_005_80187AD0(u8 *arg0) {
    func_sc02_005_80181F04();
    AF(arg0, s16, 0xDC) = 2;
    AF(arg0, s16, 0xE0) = -1;
    func_sc02_005_8017DF00();
}

void func_sc02_005_80187B0C(u8 *arg0) {
    func_sc02_005_80181F04();
    AF(arg0, s16, 0xDC) = 3;
    AF(arg0, s16, 0xE0) = -1;
    func_sc02_005_8017DF00();
}

void func_sc02_005_80187B48(u8 *arg0) {
    func_sc02_005_80181F04();
    AF(arg0, s16, 0xDC) = 1;
    func_sc02_005_8017DF28();
}

void func_sc02_005_80187B7C(s32 arg0) {
    if (func_sc02_005_80185D84() != 0) {
        func_sc02_005_80181F70(arg0);
    }
}

void func_sc02_005_80187BB4(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_sc02_005_80181FA8();
    }
}

void func_sc02_005_80187BE4(u8 *arg0) {
    if (AF(arg0, s32, 0x94) == 0xB) {
        func_sc02_005_80181FE8();
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187C14);

void func_sc02_005_80187C9C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_80182098(arg0);
    }
}

void func_sc02_005_80187CD4(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        func_sc02_005_801820E4(arg0);
    }
}

void func_sc02_005_80187D0C(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x20);
    if (AF(arg0, s32, 0x94) == 6) {
        func_sc02_005_801821C8();
    }
}

void func_sc02_005_80187D4C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_80182284(arg0);
        func_sc02_005_8018415C(AF(arg0, s32, 0xD4));
    }
}

void func_sc02_005_80187D90(u8 *arg0) {
    D_sc02_005_80196250[AF(arg0, u16, 0x34)]();
}

void func_sc02_005_80187DCC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = AF(arg0, s32, 0xE8);
    if (temp_v1 & 0x60000) {
        func_sc02_005_80182998((s32) arg0, arg1, arg2);
        return;
    }
    if (!(temp_v1 & 0x200)) {
        func_sc02_005_801838A8((s32) arg0);
    }
}

void func_sc02_005_80187E18(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (D_sc02_005_801E4BBC == 2) {
            if ((AF(arg0, s32, 0x94) == 0xC) && (AF(arg0, s16, 0x98) == 1)) {
                func_sc02_005_80184CA4(AF(arg0, s32, 0xD0));
                AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x200);
            }
        } else if ((AF(arg0, s32, 0x94) == 0xA) && (AF(arg0, s16, 0x98) == 1)) {
            func_8002D4C8(0xA2F, 0);
        }
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x10000);
        }
    } else if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_sc02_005_801856E4();
        AF(arg0, s32, 0x1C) = 0x180;
    }
}

void func_sc02_005_80187F1C(s32 arg0) {
    if (func_8012CBF4(arg0) & 0x2000) {
        func_sc02_005_80182E04(arg0);
    }
}

void func_sc02_005_80187F58(s32 arg0) {
    if (D_801270C8 == 0x16) {
        func_sc02_005_80182EB0(arg0);
    }
}

void func_sc02_005_80187F88(void) {
}

void func_sc02_005_80187F90(s32 arg0) {
    if (func_8012CBF4(arg0) & 0x2000) {
        func_sc02_005_80182EB0(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80187FCC);

void func_sc02_005_8018802C(u8 *arg0) {
    D_sc02_005_80196274[AF(arg0, u16, 0x34)]();
}

void func_sc02_005_80188068(s32 arg0, s32 arg1) {
    func_8012AD80(arg0, arg1);
    if (D_801270C8 == 0x1F) {
        func_sc02_005_80182FAC(arg0);
    }
}

void func_sc02_005_801880AC(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x4000);
    func_8012AD80((s32) arg0, arg1);
    if (AF(arg0, s16, 0xA) >= 0) {
        AF(arg0, s16, 0xA) = 0;
        func_8013C9C4((s32) &D_sc02_005_8019103C);
        func_sc02_005_8018300C((s32) arg0);
    }
}

void func_sc02_005_8018810C(s32 arg0) {
    func_sc02_005_801830F4(arg0, 1);
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_005_80183060(arg0);
    }
}

void func_sc02_005_80188150(s32 arg0, s32 arg1) {
    func_8012BEE8(arg0, arg1);
    if (AF(arg0, s32, 0x1C) == 1) {
        AF(arg0, s16, 0x76) = 0x1E;
        D_sc02_005_801E4398 = 0x1E;
    }
}

void func_sc02_005_80188194(s32 arg0) {
    func_sc02_005_801830F4(arg0, 0);
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_8002D4C8(0x504, 0);
    }
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_005_80183074(arg0);
    }
}

void func_sc02_005_801881F4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == 0x68) {
        AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x8000);
        func_sc02_005_80186178((s32) arg0);
        if (D_sc02_005_801E43A4 != 0) {
            func_8012C218(D_sc02_005_801E43A4);
        }
    }
    func_sc02_005_801830F4((s32) arg0, 0);
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc02_005_80183160((s32) arg0);
        return;
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80019064((s32) &D_80062BC0);
    }
}

void func_sc02_005_801882A8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_80183174(arg0);
    }
}

void func_sc02_005_801882E0(void) {
}

void func_sc02_005_801882E8(u8 *arg0) {
    D_sc02_005_801962A0[AF(arg0, u16, 0x34)]();
}

void func_sc02_005_80188324(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc02_005_80196184) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        func_8012AD44(arg0, 1);
        func_8012B200(arg0);
        AF(AF(arg0, void *, 0x20), s32, 0x28) = 0xE000E0;
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x80);
        AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc02_005_801961E0;
        AF(arg0, u8, 0x75) = 8;
        D_sc02_005_801E4490 = 0x01000000;
        D_sc02_005_801E448C = 0x01000000;
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801883C4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80188404);

void func_sc02_005_801884C8(u8 *arg0, s32 arg1, s32 arg2) {
    func_8013240C((s32) &D_sc02_005_801E44E0, arg1, arg2);
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018850C);

void func_sc02_005_801885BC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    D_sc02_005_8019640C[0] = D_sc02_005_801BB8F4;
    func_8001C214(AF(arg0, s32, 0x20), D_sc02_005_8019640C);
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0xE000E0;
    func_sc02_005_80184480(arg0);
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = 4;
    AF(arg0, s32 *, 0xBC) = &D_sc02_005_80196448;
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, u8, 0x75) = 8;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
    func_80132784(arg0, AF(AF(arg0, void *, 0x64), s32, 0xCC), 6);
}

void func_sc02_005_80188690(u8 *arg0) {
    func_80132784((s32) arg0, AF(AF(arg0, void *, 0x64), s32, 0xCC), 6);
}

void func_sc02_005_801886BC(void) {
}

void func_sc02_005_801886C4(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        func_sc02_005_8018AF58(arg0);
        func_8002D4C8(0x4EE, 0);
        func_8013C9C4((s32) &D_sc02_005_80191060);
        func_sc02_005_80184D24(arg0);
    }
}

void func_sc02_005_80188720(u8 *arg0) {
    if (D_801270C8 == 0x1F) {
        AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x200);
    }
}

void func_sc02_005_8018874C(u8 *arg0) {
    s16 temp_v1;

    temp_v1 = AF(arg0, s16, 0x70);
    if ((temp_v1 < 0xD) && (((s32) D_sc02_005_801E43A0 >> (temp_v1 + 1)) & 1)) {
        func_sc02_005_80185060((s32) arg0, 0);
    }
    if (AF(AF(arg0, void *, 0xCC), s32, 0xE8) & 0x8000) {
        func_sc02_005_80185214((s32) arg0);
    }
}

void func_sc02_005_801887CC(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
        func_sc02_005_801870BC();
    }
    if (AF(AF(arg0, void *, 0xCC), s32, 0xE8) & 0x8000) {
        func_sc02_005_80185214((s32) arg0);
    }
}

void func_sc02_005_80188830(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s16, 0x70) < 0xC) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x300);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x100);
        temp_v0 = AF(arg0, u16, 0x100) + 1;
        AF(arg0, u16, 0x100) = temp_v0;
        if (!(temp_v0 & 3)) {
            func_sc02_005_80189F84();
        }
        func_8012AD80((s32) arg0);
        if (AF(arg0, s16, 0xA) >= AF(arg0, s16, 0x102)) {
            func_8012B200((s32) arg0);
            func_sc02_005_801853CC((s32) arg0);
        }
    }
}

void func_sc02_005_801888EC(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x70);
    if ((temp_v0 < 0xC) && ((D_800B99D8 & 0xF) == (temp_v0 & 0xF))) {
        func_sc02_005_8018A0E4((s32) arg0);
    }
}

void func_sc02_005_8018893C(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_sc02_005_80181900();
}

void func_sc02_005_80188968(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_8012B23C((s32) arg0, arg1);
        if ((AF(arg0, s16, 0xE0) < 0) && (AF(arg0, s16, 0xDC) != 0)) {
            AF(arg0, s16, 0x34) = 0;
            return;
        }
        func_sc02_005_801822B4((s32) arg0);
    }
}

void func_sc02_005_801889D4(u8 *arg0) {
    D_sc02_005_801964BC[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_80188A10(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80143994(arg0, 0x7FFF);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0xCC);
        AF(temp_v0, s16, 0) = 0x69;
        if (temp_v1 != NULL) {
            AF(temp_v1, u8, 0x26) = 0xC8;
            AF(temp_v1, u8, 0x25) = 0xC8;
            AF(temp_v1, u8, 0x24) = 0xC8;
        }
    }
    return temp_v0;
}

s32 func_sc02_005_80188A5C(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80188A7C);

void func_sc02_005_80188BB4(u8 *arg0) {
    D_sc02_005_801964FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80188BF0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80188D1C);

void func_sc02_005_80188F08(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_sc02_005_80188F38();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80188F38);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80188FF0);

void func_sc02_005_80189204(u8 *arg0) {
    D_sc02_005_801965B0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189240);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189268);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801892CC);

void func_sc02_005_801894C8(u8 *arg0) {
    D_sc02_005_801965C0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189504);

void func_sc02_005_801895A4(u8 *arg0) {
    D_sc02_005_801965D4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801895E0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018968C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801898F4);

void func_sc02_005_80189AF4(u8 *arg0) {
    D_sc02_005_8019660C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189B30);

void func_sc02_005_80189C90(u8 *arg0) {
    D_sc02_005_801966A0[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189CCC(u8 *arg0) {
    D_sc02_005_801966B8[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189D08(u8 *arg0) {
    D_sc02_005_80196760[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189D44(u8 *arg0) {
    D_sc02_005_801967C4[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189D80(u8 *arg0) {
    D_sc02_005_801967CC[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189DBC(u8 *arg0) {
    D_sc02_005_80196814[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189DF8(u8 *arg0) {
    D_sc02_005_80196868[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189E34);

s32 func_sc02_005_80189F44(s32 arg0) {
    return func_80132EF4(arg0, 0x16);
}

s32 func_sc02_005_80189F64(void) {
    return func_8012913C(0x15);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189F84);

s32 func_sc02_005_80189FA4(s32 arg0) {
    return func_80132EF4(arg0, 0x13);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80189FC4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A0E4);

s32 func_sc02_005_8018A174(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_v0_2 = func_sc02_005_8018A30C(arg0, var_s0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, s16, 0x34) = 0x4000;
        }
        var_s0 += 1;
        temp_v0 = var_s0 < 4;
    } while (temp_v0 != 0);
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A1D8);

s32 func_sc02_005_8018A30C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 var_v0;
    u16 var_v0_2;

    temp_v0 = func_8012913C(0xC);
    if (temp_v0 != 0) {
        func_80129350(temp_v0, arg0);
        if (arg1 & 1) {
            var_v0 = AF(temp_v0, u16, 6) + 0x68;
        } else {
            var_v0 = AF(temp_v0, u16, 6) - 0x68;
        }
        AF(temp_v0, u16, 6) = var_v0;
        if (arg1 & 2) {
            var_v0_2 = AF(temp_v0, u16, 0xE) + 0x68;
        } else {
            var_v0_2 = AF(temp_v0, u16, 0xE) - 0x68;
        }
        AF(temp_v0, u16, 0xE) = var_v0_2;
    }
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A3B4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A47C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A4C4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A658);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A6A0);

void func_sc02_005_8018A7D0(void) {
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A7D8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018A968);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018AA88);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018AAAC);

s32 func_sc02_005_8018AB84(void) {
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_sc02_005_801E4A58;
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            *var_s0 = 0;
            func_8012C218(temp_a0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0xC;
        var_s0 = (s32 *)((u8 *)var_s0 + 4);
    } while (temp_v0 != 0);
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018ABE0);

void func_sc02_005_8018AC10(s32 arg0) {
    D_sc02_005_801E4A58[AF(arg0, s16, 0x100)] = 0;
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018AC48);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018ACB4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018AD20);

void func_sc02_005_8018AD8C(s32 arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = D_sc02_005_801E4A58[arg0];
    if (temp_s0 != NULL) {
        AF(temp_s0, s16, 0xFE) = (s16) arg1;
        AF(temp_s0, s32, 0xC) = 0;
        AF(temp_s0, s32, 8) = 0;
        AF(temp_s0, s32, 4) = 0;
        AF(temp_s0, s16, 0xFC) = 1;
        func_8012AD44((s32) temp_s0, 2);
        func_sc02_005_8018A4C4((s32) temp_s0);
    }
}

void func_sc02_005_8018ADF0(s32 arg0) {
    void *temp_s0;

    temp_s0 = D_sc02_005_801E4A58[arg0];
    if (temp_s0 != NULL) {
        func_80132784((s32) temp_s0, AF(temp_s0, s32, 0x64), (s32) AF(temp_s0, u16, 0xFE));
        AF(temp_s0, s16, 6) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x48);
        AF(temp_s0, s16, 0xA) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x4C);
        AF(temp_s0, s16, 0xE) = (s16) (AF(AF(temp_s0, void *, 0x20), s32, 0x50) - 0x10);
        AF(AF(temp_s0, void *, 0x20), s16, 0x10) = 0x100;
        AF(AF(temp_s0, void *, 0x20), s16, 0x12) = 0x200;
        AF(AF(temp_s0, void *, 0x20), s16, 0x14) = 0;
        func_8012B200((s32) temp_s0);
        AF(temp_s0, s32, 0x18) = 0xFFE00000;
        AF(temp_s0, s32, 0x14) = 0x200000;
        AF(temp_s0, s32, 0x10) = 0xFFF00000;
        func_8012AD44((s32) temp_s0, 3);
    }
}

void func_sc02_005_8018AEB4(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_sc02_005_801E4A58[arg0];
    if (temp_s0 != NULL) {
        AF(temp_s0, s16, 0xFC) = 1;
        func_8001C924(AF(temp_s0, s32, 0x20), (s32) &D_sc02_005_801964D4);
        func_8012AD44((s32) temp_s0, 4);
        func_8012C658(0x60, arg1, (s32) temp_s0);
        if (arg1 != 0) {
            temp_v0 = func_80132EF4((s32) temp_s0, 0xC);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + 0x60);
            }
        }
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018AF58);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B058);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B16C);

s32 func_sc02_005_8018B2DC(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 7;
    var_v0 = &D_sc02_005_801E44F7;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B300);

void func_sc02_005_8018B344(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u8, 0x26) = 0xC8;
        AF(temp_v1, u8, 0x25) = 0xC8;
        AF(temp_v1, u8, 0x24) = 0xC8;
    }
}

void func_sc02_005_8018B368(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    D_sc02_005_801964C4[0] = D_sc02_005_801BB8F8;
    func_8001C214(AF(arg0, s32, 0x20), D_sc02_005_801964C4);
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0xB000D0;
    SetScript(arg0, (s32) &D_sc02_005_80190C0C);
    AF(arg0, s32 *, 0x58) = &D_sc02_005_801964DC;
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 0xFC) = 0;
    func_sc02_005_80188A5C(arg0);
}

void func_sc02_005_8018B408(void) {
}

void func_sc02_005_8018B410(u8 *arg0) {
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), (s32) AF(arg0, u16, 0xFE));
}

void func_sc02_005_8018B438(void) {
}

void func_sc02_005_8018B440(s32 arg0, s32 arg1) {
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_8018AC10(arg0);
        return;
    }
    func_8012AD80(arg0);
    AF(AF(arg0, void *, 0x20), s32, 0x48) = (s32) AF(arg0, s16, 6);
    AF(AF(arg0, void *, 0x20), s32, 0x4C) = (s32) AF(arg0, s16, 0xA);
    AF(AF(arg0, void *, 0x20), s32, 0x50) = (s32) AF(arg0, s16, 0xE);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 1);
}

void func_sc02_005_8018B4D0(u8 *arg0, s32 arg1) {
    void *temp_a0;
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) & 1) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
    } else {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B554);

void func_sc02_005_8018B5E0(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    if (temp_v1 == 0) {
        if (AF(arg0, s16, 0xFC) == 0) {
            func_sc02_005_80189504();
            return;
        }
        AF(arg0, u16, 0x34) = (u16) (temp_v1 + 1);
        return;
    }
    func_8012C218((s32) arg0);
}

void func_sc02_005_8018B638(u8 *arg0) {
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s1, (s32) &D_sc02_005_801965C8, 0x2BC, 0x1B0);
    AF(temp_s1, u8, 0x27) = 0x59;
    func_sc02_005_801895E0((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018B6A0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x2C), s16, 0xFC) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    func_sc02_005_801895E0((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B6E8);

void func_sc02_005_8018B7A4(u8 *arg0) {
    void *temp_v1;

    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        temp_v1 = AF(arg0, void *, 0x2C);
        if (temp_v1 != NULL) {
            AF(temp_v1, s16, 0xFC) = 1;
        }
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B7F8);

void func_sc02_005_8018B8CC(u8 *arg0) {
    func_8001CB6C(AF(arg0, s32, 0x20), (s32) &D_sc02_005_801921F8, 0x250, 0x1A0);
    AF(AF(arg0, s32, 0x20), s32, 4) = 0x60000000;
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x14;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018B93C(s32 arg0) {
    if (D_801270C8 == 0x13) {
        func_801292C8(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018B96C);

void func_sc02_005_8018BA38(s32 arg0) {
    s32 pad[4];
    s32 *var_a1;
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    var_a1 = &D_sc02_005_801966A8;
    if (AF(arg0, u16, 0x70) & 1) {
        var_a1 = &D_sc02_005_801966B0;
    }
    func_8001C214(temp_v0, (s32) var_a1);
    SetScript(arg0, (s32) &D_sc02_005_80190C0C);
    AF(arg0, s16, 0xFC) = (s16) (rand() & 0x3F0);
    AF(arg0, s16, 0xFE) = (s16) (rand() & 0x3F0);
    AF(arg0, s32, 0x1C) = 0x60;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018BAE4(u8 *arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x12) = (u16) (AF(temp_a0, u16, 0x12) + AF(arg0, u16, 0xFC));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x10) = (u16) (AF(temp_a1, u16, 0x10) + AF(arg0, u16, 0xFE));
    func_8012AD80((s32) arg0, (s32) temp_a1);
    if (AF(arg0, s16, 0xA) >= -0x7FF) {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018BB58(s32 arg0, s32 arg1) {
    func_8012931C(arg0, arg1);
    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_801292C8(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018BB9C);

void func_sc02_005_8018BC48(u8 *arg0) {
    func_8012931C();
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    AF(AF(arg0, s32, 0x20), u8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
}

void func_sc02_005_8018BCA4(u8 *arg0) {
    func_80128D60(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc02_005_801967D4);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018BCEC(u8 *arg0) {
    func_80128DB4(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24));
}

void func_sc02_005_8018BD14(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_sc02_005_8019681C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x65;
    func_80128EA8((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc02_005_80196828);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018BD90(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018BDD0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018BE88);

s32 func_sc02_005_8018BF88(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) | 2);
    return func_8012AD44(arg0, 3);
}

s32 func_sc02_005_8018BFBC(s32 arg0) {
    return func_8012AD44(arg0, 4);
}

s32 func_sc02_005_8018BFDC(s32 arg0) {
    AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) | 1);
    return func_8012AD44(arg0, 5);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C008);

void func_sc02_005_8018C08C(u8 *arg0) {
    D_sc02_005_801968F4[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_8018C0C8(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    SetScript(arg0, (s32) &D_sc02_005_80196B30);
    return func_8012AD44(arg0, 2);
}

void func_sc02_005_8018C108(u8 *arg0) {
    D_sc02_005_80196B80[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018C144(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, u16, 0x5E) == 0xC) {
        SetScript((s32) arg0, (s32) &D_sc02_005_80196AE8);
        AF(arg0, u8, 0xC1) = 1;
        if (AF(arg0, u16, 0x70) & 8) {
            func_sc02_005_80189F44((s32) arg0);
        }
        func_8002D4C8(0x4FE, 0);
        return;
    }
    AF(arg0, u16, 0x5E) = 0U;
    AF(arg0, u8, 0xC1) = 0;
}

void func_sc02_005_8018C1C0(u8 *arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x98) == 0) {
        temp_v1 = AF(arg0, void *, 0x64);
        AF(temp_v1, u16, 0x100) = (u16) (AF(temp_v1, u16, 0x100) - 1);
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C204);

void func_sc02_005_8018C274(u8 *arg0) {
    D_sc02_005_80196B8C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C2B0);

void func_sc02_005_8018C358(u8 *arg0) {
    D_sc02_005_80196B98[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_8018C394(s32 arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1C) = 0;
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    return func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C3C4);

s32 func_sc02_005_8018C3EC(s32 arg0) {
    D_801270C8 = 0x21;
    return func_8012AD44(arg0, 3);
}

void func_sc02_005_8018C418(u8 *arg0) {
    D_sc02_005_80196BA0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C454);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C598);

void func_sc02_005_8018C66C(u8 *arg0) {
    D_sc02_005_80196BB0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C6A8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C758);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018C84C);

void func_sc02_005_8018C928(u8 *arg0, s32 arg1) {
    AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) | 4);
    AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) - 0x40);
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_sc02_005_8018BFBC((s32) arg0);
    }
}

void func_sc02_005_8018C978(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, s16, 0xFC);
        if (temp_v0 >= 0x51) {
            AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 2);
        } else {
            AF(arg0, s32, 0x1C) = 0xA0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc02_005_8018BFDC((s32) arg0);
        }
        break;
    }
    AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) - 0x40);
}

void func_sc02_005_8018CA1C(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_005_8018CA3C(u8 *arg0) {
    if (AF(arg0, s16, 0x100) == 0) {
        D_801270C8 = 0xD;
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018CA74);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018CB70);

void func_sc02_005_8018CBF8(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018CC28);

void func_sc02_005_8018CCF8(u8 *arg0) {
    AF(arg0, u16, 0x2C) = (u16) (AF(arg0, u16, 0x2C) + 0x20);
    func_sc02_005_8018C2B0((s32) &D_sc02_005_801E4958, -4);
    func_sc02_005_8018C2B0((s32) (&D_sc02_005_801E4958 + 4), -4);
    func_800233CC((s32) &D_sc02_005_801E4958, (s32) AF(arg0, u16, 0x2C));
    if ((s16) AF(arg0, u16, 0x2C) >= 0x380) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018CD80(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x2C) - 0x20;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    func_sc02_005_8018C2B0((s32) &D_sc02_005_801E4958, -4);
    func_sc02_005_8018C2B0((s32) (&D_sc02_005_801E4958 + 4), -4);
    func_800233CC((s32) &D_sc02_005_801E4958, (s32) AF(arg0, u16, 0x2C));
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018CE04);

void func_sc02_005_8018CEE0(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc02_005_8018C2B0((s32) &D_sc02_005_801E491C, -4);
        func_800233CC((s32) (&D_sc02_005_801E491C - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc02_005_8018CF58(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc02_005_801F1988);
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0xCC) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012CAE4(arg0);
        AF(AF(arg0, s32, 0x20), s16, 0) = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc02_005_801F2138);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u8, 0xC0) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    temp_v1_3 = AF(arg0, s32, 0xCC);
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = AF(arg0, s32, 0xCC);
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x10);
    func_sc02_005_8018C394(arg0);
}

void func_sc02_005_8018D04C(u8 *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_3;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a2, u16, 0x18);
    temp_a1 = AF(arg0, void *, 0xCC);
    if (temp_v1 < 0x5000U) {
        AF(temp_a2, u16, 0x18) = (u16) (temp_v1 + 0x100);
        temp_v0 = AF(arg0, void *, 0x20);
        temp_v1_2 = AF(temp_v0, u16, 0x18);
        AF(temp_v0, u16, 0x1C) = temp_v1_2;
        AF(temp_v0, u16, 0x1A) = temp_v1_2;
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x12) = (u16) (AF(temp_v1_3, u16, 0x12) + 0x100);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) - 0x100);
        AF(temp_a1, s16, 8) = (s16) (AF(arg0, u16, 6) + AF(arg0, u16, 0x50));
        AF(temp_a1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52));
        AF(temp_a1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54));
        AF(temp_a1, u16, 0x18) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        AF(temp_a1, u16, 0x1A) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1A);
        AF(temp_a1, u16, 0x1C) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1C);
        return;
    }
    func_sc02_005_8018C3C4();
}

void func_sc02_005_8018D144(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    u8 temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u8, 0xFC) + 0x10;
        AF(arg0, u8, 0xFC) = temp_v0;
        if ((u32) (temp_v0 & 0xFF) >= 0xF1U) {
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0x80000000);
            temp_v1_3 = AF(arg0, void *, 0xCC);
            AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x80000000);
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc02_005_8017C048();
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc02_005_8018C3EC((s32) arg0);
        }
        break;
    }
    func_80016450((s32) AF(arg0, u8, 0xFC), 1);
}

void func_sc02_005_8018D21C(u8 *arg0) {
    u32 temp_v1;
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0xFC) - 3;
    temp_v1 = temp_v0 & 0xFF;
    AF(arg0, u8, 0xFC) = temp_v0;
    if (temp_v1 >= 9U) {
        func_80016450((s32) temp_v1, 1);
        return;
    }
    func_8012C218((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D270);

void func_sc02_005_8018D318(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 *temp_v0_3;
    u16 *temp_v1_2;
    u16 temp_v0_4;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFC) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            temp_a0 = AF(arg0, void *, 0x20);
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        }
    } else {
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            temp_v0_3 = AF(arg0, s32 *, 0xCC);
            if (temp_v0_3 != NULL) {
                *temp_v0_3 = 0;
            }
            func_8012C218((s32) arg0);
            return;
        }
        temp_v1 = AF(arg0, void *, 0x64);
        if (AF(temp_v1, s32, 0x20) == 0) {
            AF(arg0, u16, 6) = (u16) AF(temp_v1, u16, 6);
            AF(arg0, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
            AF(arg0, u16, 0xE) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
        }
        temp_v1_2 = AF(AF(arg0, void *, 0x20), u16 *, 0x20);
        temp_v0_4 = *temp_v1_2 - 2;
        *temp_v1_2 = temp_v0_4;
        if ((s16) temp_v0_4 < -0x20) {
            *temp_v1_2 = 0;
        }
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x10) = (u16) (AF(temp_v1_3, u16, 0x10) + 0x40);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D43C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D488);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D4D8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D574);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D608);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D6B0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D73C);

void func_sc02_005_8018D7DC(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D7F0);

void func_sc02_005_8018D8A8(u8 *arg0) {
    if (D_801270C8 == 0x15) {
        func_sc02_005_8018EA04(2);
        func_8002D4C8(5, 0);
        AF(arg0, s32, 0x1C) = 0xE;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018D904(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018D918(u8 *arg0) {
    if (D_801270C8 >= 0x16) {
        func_sc02_005_8018F414();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018D964(s32 arg0) {
    func_8012C588(0x68, arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018D9A4);

void func_sc02_005_8018DA40(u8 *arg0) {
    if (D_801270C8 == 0x1B) {
        func_sc02_005_80180A7C();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018DA8C(u8 *arg0) {
    if (D_801270C8 == 0x21) {
        func_sc02_005_8018F704();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018DAD8(void) {
}

void func_sc02_005_8018DAE0(u8 *arg0) {
    D_sc02_005_80196C9C[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018DB1C(u8 *arg0) {
    AF(arg0, s32 *, 0x58) = &D_sc02_005_80196C14;
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018DB40);

void func_sc02_005_8018DCD8(u8 *arg0) {
    s16 temp_v0;
    s16 var_s2;
    void *temp_s3;

    temp_s3 = AF(arg0, void *, 0x20);
    if (func_8012D714((s32) arg0, 2) != 0) {
        D_80126B96 = 0x4001;
        D_80126B98 = 5;
    }
    func_8012AD80((s32) arg0);
    if (AF(arg0, s16, 0xA) >= -0x802) {
        var_s2 = 0;
        AF(arg0, s16, 0xA) = -0x802;
        *AF(arg0, s16 *, 0xD0) = 0;
        do {
            func_8012C658(0x63, (s32) var_s2, (s32) arg0);
            func_8012C658(0x64, (s32) var_s2, (s32) arg0);
            temp_v0 = var_s2 + 1;
            var_s2 = temp_v0;
        } while (temp_v0 < 8);
        func_8001C97C((s32) &D_sc02_005_801D9044);
        AF(temp_s3, s32 *, 0x24) = &D_sc02_005_801D9044;
        AF(arg0, s32, 0x1C) = 0x10;
        func_8002D4C8(0x4FF, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1C000);
}

void func_sc02_005_8018DDFC(u8 *arg0) {
    s16 *temp_v0_2;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        temp_v0_2 = AF(arg0, s16 *, 0xD0);
        if (temp_v0_2 != NULL) {
            *temp_v0_2 = 0;
        }
        func_801439C0(AF(arg0, s32, 0xCC));
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018DE5C(u8 *arg0) {
    s16 *temp_v0;

    if (D_801270C8 >= 0x16) {
        temp_v0 = AF(arg0, s16 *, 0xD0);
        if (temp_v0 != NULL) {
            *temp_v0 = 0;
        }
        func_801439C0(AF(arg0, s32, 0xCC));
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018DEB8);

void func_sc02_005_8018DF88(u8 *arg0) {
    D_sc02_005_80196CB0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018DFC4);

void func_sc02_005_8018E22C(void) {
}

void func_sc02_005_8018E234(u8 *arg0) {
    s32 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        if (temp_v0 < 0x10) {
            AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        }
    } else {
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018E288);

void func_sc02_005_8018E400(u8 *arg0) {
    D_sc02_005_80196CC0[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018E43C(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018E450);

void func_sc02_005_8018E6D4(void) {
}

void func_sc02_005_8018E6DC(u8 *arg0) {
    s32 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        if (temp_v0 < 0x10) {
            AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        }
    } else {
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018E730);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018E7E4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018EA04);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018EB60);

void func_sc02_005_8018ECB8(u8 *arg0) {
    D_sc02_005_80196CD4[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018ECF4(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) &D_800D387C, 0x270, 0x120);
    AF(temp_s0, u8, 0x27) = 0x9C;
    AF(temp_s0, s16, 0x1A) = 0x7000;
    AF(temp_s0, s16, 0x18) = 0x7000;
    AF(temp_s0, u8, 0x26) = 0x90;
    AF(temp_s0, u8, 0x25) = 0x90;
    AF(temp_s0, u8, 0x24) = 0x90;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    AF(arg0, s16, 0x2C) = 0x46;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018ED84(u8 *arg0) {
    s32 pad[4];
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_801292C8((s32) arg0);
        return;
    }
    func_8012931C();
    temp_v0_2 = AF(temp_s0, u8, 0x26) - 2;
    AF(temp_s0, u8, 0x26) = temp_v0_2;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    AF(temp_s0, u8, 0x24) = temp_v0_2;
}

void func_sc02_005_8018EDF8(u8 *arg0) {
    D_sc02_005_80196CDC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018EE34);

void func_sc02_005_8018EF20(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_8012AD80((s32) arg0, arg1);
    AF(temp_s0, u16, 0x14) = (u16) (AF(temp_s0, u16, 0x14) + AF(arg0, u16, 0xDC));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018EF90(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_005_8018EFB0(u8 *arg0) {
    D_sc02_005_80196CE8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018EFEC);

void func_sc02_005_8018F164(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_8012AD80((s32) arg0, arg1);
    AF(temp_s0, u16, 0x10) = (u16) (AF(temp_s0, u16, 0x10) + AF(arg0, u16, 0xDC));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018F1D4(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_005_8018F1F4(u8 *arg0) {
    D_sc02_005_80196CF4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018F230);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018F2C4);

s32 func_sc02_005_8018F414(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801D91D4);
}

s32 func_sc02_005_8018F444(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DA5FC);
}

s32 func_sc02_005_8018F474(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DB658);
}

s32 func_sc02_005_8018F4A4(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DC180);
}

s32 func_sc02_005_8018F4D4(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DCD04);
}

s32 func_sc02_005_8018F504(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DD2D4);
}

s32 func_sc02_005_8018F534(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DDD30);
}

s32 func_sc02_005_8018F564(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DE674);
}

s32 func_sc02_005_8018F594(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DF3B4);
}

s32 func_sc02_005_8018F5C4(void) {
    return func_8013C360((s32) &D_sc02_005_801D91D4);
}

s32 func_sc02_005_8018F5EC(void) {
    return func_8013C360((s32) &D_sc02_005_801DA5FC);
}

s32 func_sc02_005_8018F614(void) {
    return func_8013C360((s32) &D_sc02_005_801DB658);
}

s32 func_sc02_005_8018F63C(void) {
    return func_8013C360((s32) &D_sc02_005_801DC180);
}

s32 func_sc02_005_8018F664(void) {
    return func_8013C360((s32) &D_sc02_005_801DCD04);
}

s32 func_sc02_005_8018F68C(void) {
    return func_8013C360((s32) &D_sc02_005_801DD2D4);
}

s32 func_sc02_005_8018F6B4(void) {
    return func_8013C360((s32) &D_sc02_005_801DDD30);
}

s32 func_sc02_005_8018F6DC(void) {
    return func_8013C360((s32) &D_sc02_005_801DE674);
}

s32 func_sc02_005_8018F704(void) {
    return func_8013C360((s32) &D_sc02_005_801DF3B4);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018F72C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018F894);

void func_sc02_005_8018F91C(u8 *arg0) {
    if (D_801270C8 == 8) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0x1C) = 0x12;
    }
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018F944);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FA34);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FAE0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FB8C);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FC38);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FCE4);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FE18);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FEA0);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_8018FFC4);

void func_sc02_005_80190068(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
}

void func_sc02_005_80190074(u8 *arg0) {
    D_sc02_005_80196CFC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801900B0);

s32 func_sc02_005_801900E0(s32 arg0, s32 arg1) {
    D_sc02_005_801E4C40 = 0x500;
    return 0x500;
}

s32 func_sc02_005_801900F4(void) {
    D_sc02_005_801E4C40 = 0xED4;
    return 0xED4;
}

void func_sc02_005_80190108(u8 *arg0) {
    D_sc02_005_80196EA4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80190144);

void func_sc02_005_80190344(s32 arg0) {
    func_sc02_005_80190384(arg0);
}

void func_sc02_005_80190364(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc02_005_80190384(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc02_005_80196DAC);
    var_s1 = 0;
    var_s0 = &D_sc02_005_80196DD4;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc02_005_801903DC(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc02_005_80190408(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc02_005_8019044C(u8 *arg0) {
    D_sc02_005_80196F00[AF(arg0, u16, 2)]();
}

void func_sc02_005_80190488(s32 arg0) {
    func_sc02_005_801904B8();
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_801904B8);

INCLUDE_ASM("asm/stg/sc02_005/nonmatchings/sc02_005", func_sc02_005_80190538);

s32 func_sc02_005_8019084C(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}
