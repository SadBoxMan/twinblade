/*
 * Stage engine, 0x801458E0-0x8017BEA4 (-O2): from the -O0 file engine_80144B9C.c to the end of the engine, until
 * more of its file boundaries are found (docs/stage_engine.md, "Source files").
 */
#include "common.h"
#include "psyq.h"
#include "work.h"
#include "game.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

#define PARTS(a) (*(s32 *)(*(u8 **)((a) + 0x20) + 0x24))
extern s32 func_80029178(s32 n);
extern void func_800183E0(s32 w);
void func_80146074(void);
extern u32 D_800DE2A4[];
extern void func_8001D130(s32 a, s32 b);
extern void func_8001D150(s32 a, s32 b);
extern s32 func_8014BEF8(u8 *a);
extern s32 (*D_8018F378[])(u8 *a);
extern u8 D_8018F338[];
extern void MoveImage(void *rect, s32 x, s32 y);
/* the ability Musashi holds (docs/abilities.md): EC1 ability, EC2 the HUD's, EC3 out-of-body saved, EC4 used once,
   EC8 frames left; EB8 BP. The per-ability tables are stage data (SC03_001's addresses). */
extern u8 D_80078EC1;
extern u8 D_80078EC2;
extern u8 D_80078EC3;
extern u8 D_80078EC4;
extern s32 D_80078EC8;
extern u16 D_80078EB8;
extern u8 D_801901EC[];
extern s32 D_8019020C[];
extern u8 D_80190288[];
extern u8 D_801902A8[];
extern u8 D_801902C8[];
extern void (*D_801902E8[])(u8 *obj);
extern s32 D_8012672C;
extern s32 D_8012811C;
extern s32 D_80126B08;
extern s32 D_80078E94;
extern s32 D_80078E9C;
extern s32 D_80078EA0;
extern s32 D_80078EA4;
extern s32 D_80078EA8;
extern u8 D_80078EBB;
extern s32 D_80078ECC;
extern s32 D_80078ED0;
extern s32 D_80078ED4;
extern s32 D_80078ED8;
extern s32 D_80078EDC;
extern u8 D_80078EE0;
extern void func_800CAF6C(u8 *obj);
extern void func_80165AC8(u8 *obj);
u32 func_80165658(u8 *obj, u32 ability);
void func_801657D8(void);
void func_80165874(void);
void func_80165A20(u8 *obj);
void func_80165A50(u8 *obj);
void func_80165A78(u8 *obj);
s32 func_80146A6C(s32 kind, StageActor *owner, s16 x, s16 y, s16 z, s32 d, s32 e);
void func_80166244(StageActor *a);
void func_8016AA50(StageActor *a, s32 n);
void func_8016B428(StageActor *a);
void func_801754A8(void);
void func_8014AA28(void);

void func_801458E0(void) {
}

extern s32 D_801150F8;
extern s32 D_801270BC;
extern s8 D_80126D6C;
extern s32 D_80127088;
extern s32 func_80154B7C();
extern void func_80154BC8();
extern s32 D_80127090;
extern s32 D_80127094;
extern s32 D_80127098;
extern void func_8001D074();
extern s32 func_8001CFDC();
extern void func_801466F0();

extern u16 D_80126BB8;
extern u16 D_80126BBA;
extern u16 D_80126BBC;

extern s32 D_8012707C;
extern s32 func_80147364();

extern void func_801479BC();

extern void func_80147A30();

extern s32 func_80147AD4();

extern void func_80147C30();

extern void func_80147F78();

extern s32 func_8012F14C();
extern void func_8012F038();
extern s32 func_8015AD08();
extern s32 func_8015ACC4();
extern s32 func_8015F7A0();
extern s32 func_801653B8();
extern s32 func_80160B00();
extern s32 func_801577C8();
extern s32 func_80157D20();
extern s32 func_8015D4B4();
extern s32 func_8015EDD4();

extern s32 func_8015E184();

extern u8 D_80078EC0;
extern s32 func_8014AB7C();

extern void func_8014AC10();
extern void func_8014ADA8();
extern s32 func_8014B154();

extern s32 func_8014B33C();

extern s32 D_80078E98;

extern s8 D_80126D1C;
extern s32 D_80126D74;

extern u16 D_80078EB2;
extern u16 D_80078EB4;
extern void func_8014BC80();
extern u16 D_80078EB6;

extern void func_80029124();

extern void func_800291A0();

extern s32 func_800291B4();

extern u8 D_8018F14C;
extern s32 func_8014C1C8();

extern s32 func_80013328();

extern s32 func_8014C43C();

extern u8 D_8018F154;
extern s32 func_8014C5FC();

extern s8 D_80126D17;

extern s8 D_80126D1E;
extern s32 D_80126B50;

extern s32 D_80126B9C;
extern s32 D_80126CDC;

extern s16 D_80126CC4;

extern s32 func_80134510();

extern void func_80151184();
extern void func_80150EC4();

extern u16 D_800B99DA;
extern s32 func_80146994();
extern s16 D_800B9A08;
extern void func_8012DB84();

extern void func_80151204();
extern void func_8014ACE8();

extern void func_80151944();
extern s32 func_8014E934();
extern void func_8014CC28();
extern s32 func_8014F3E8();
extern void func_80152714();
extern s32 func_80149020();
extern void func_80152C80();
extern s32 func_80159B3C();
void func_80165718(u8 *obj);
extern s32 D_801151FC;
extern s32 D_80127518;
extern s16 D_8011F748;
extern s32 D_80115210;

extern s32 func_80151664();
extern s32 func_801542A4();

extern s32 func_80154418();

extern s32 func_8015430C();

extern s32 func_8015444C();

extern void func_80154F9C();

extern void func_80147078();
extern void func_801555F4();

extern s32 func_80161104();
extern s32 func_80155F80();

extern void func_80155FF8();
extern u8 D_8018F570;

extern s32 func_80156A14();
extern s32 func_801575E4();
extern void func_8015773C();
extern s32 D_801ED510;
extern void func_801578C0();
extern void func_80157808();
extern s32 func_8014ED28();
extern s32 func_8014D3E0();
extern s32 func_8014FA04();
extern void func_80161D20();
extern s32 func_8014C010();
extern void func_80157E38();
extern void func_80158038();
extern void func_801582C0();
extern void func_80158AE4();
extern void func_80146CA0();

extern void func_800167B8();
extern s32 func_800167F0();
extern void func_80159A20();
extern void func_80159BE4();

extern void func_80159B70();

extern void func_8015A2D8();

extern void func_8015A264();

extern void func_8015ADB0();

extern void func_8015BE94();

extern void func_8015BE38();

extern void func_8015AE2C();

extern void func_8015B950();

extern s32 func_8015C0C4();
extern void func_8015BFF4();

extern void func_8015C788();
extern void func_8015C714();

extern void func_8015CCD0();
extern void func_8015CC74();

extern void func_8015D01C();
extern void func_8015CFC0();
extern void func_8015D57C();

extern s32 func_8015E0D4();

extern void func_8015DB6C();

extern void func_8015DAF8();

extern void func_8015DD74();

extern void func_8015DECC();
extern void func_8015DE58();

extern void func_8015E22C();
extern u8 D_8018FE80;
extern s32 func_8013C9C4();
extern void func_8015E95C();
extern void func_8015E8E8();
extern void func_8015E9B8();

extern u8 D_80078EBF;
extern s32 func_80149048();
extern void func_8015EE7C();
extern void func_8015F080();
extern void func_8015F00C();
extern void func_8015F380();
extern void func_8015F324();

extern void func_8015F848();

extern void func_8015FBE0();

extern void func_8015FAAC();

extern void func_801601AC();

extern void func_80160138();

extern void func_80160410();
extern void func_8016039C();

extern void func_801608C0();
extern void func_80160BB4();
extern void func_80160F00();
extern void func_80160EA4();
extern s32 func_80161208();
extern void func_80161E08();
extern s32 func_80162438();

extern SVECTOR D_8011F750;
extern s32 func_80016714();
extern u8 D_8011F9D0;
extern void func_8016325C();

extern s32 D_80115100;

extern s32 func_80162CCC();

extern s32 func_80146E98();
extern void func_801651B8();

extern void func_8014BD60();

extern u8 D_8011D030;

extern void func_80146C3C();

extern s32 func_80128ED8();

extern void func_8016B448();
extern s32 func_8016BA48();

extern void func_8016BA68();

extern s32 func_8016CBC0();

extern u8 D_80115218;
extern s32 D_80126D70;
extern void func_8016EDEC();
extern void func_8016EE40();
extern void func_8016EFC8();
extern s32 func_801726D0();

extern s32 D_80126D50;

extern s8 D_80126D1A;

extern s8 D_800B9A17;
extern void func_80175414();
extern void func_8016F4C4();
extern void func_8014708C();
extern s32 func_801472C8();
extern s32 func_80171928();
extern void func_80147084();
extern s32 func_801472B4();

extern s32 func_8016F288();
extern void func_80148634();
extern s32 func_8016F264();
extern s32 func_8016F350();
extern s32 func_8016F330();
extern void func_80171990();
extern void func_8016F804();
extern void func_801719A4();
extern s32 func_8016F8AC();
extern void func_8016F95C();
extern void func_8016FD08();
extern s32 func_80172658();
extern void func_8016FE2C();
extern void func_8016FFA8();
extern s32 func_801701C8();
extern s32 func_801702B8();
extern void func_80170374();
extern void func_8017044C();
extern s32 func_8017051C();
extern void func_801705C0();
extern s32 func_80170670();
extern s32 func_80170718();
extern void func_80170B48();
extern s32 func_80170C44();
extern void func_8017197C();
extern void func_80170CF0();
extern s32 func_80170DE0();
extern s32 func_80170EAC();
extern s32 func_80170F74();
extern s32 func_80171028();
extern s32 func_801710DC();
extern s32 func_8017118C();

extern s32 func_80171238();
extern s32 D_8011F738;
extern s32 func_801718AC();
extern void func_8013E588();
extern void func_80175454();
extern s32 func_8014C568();
extern s32 func_80172664();

extern void func_80172760();

extern s32 func_80172844();

extern s32 func_80172958();
extern s16 D_80126B30;
extern s16 D_80126B32;
extern s16 D_80126B34;
extern void func_801729F0();

extern void func_80172B44();
extern s32 func_80172D14();
extern void func_80172E20();
extern u8 D_800D5A34;
extern s32 func_8017303C();
extern u8 D_800D59EC;
extern u8 D_800D599C;
extern u8 D_800D5934;
extern s32 D_80127508;
extern void func_80173078();

extern void func_8017319C();
extern void func_801732C4();

extern s32 func_8016F2C8();

extern void func_80173374();

extern s32 func_8016F30C();

extern s32 func_801735B8();
extern s32 func_80173770();
extern s32 func_801723C4();
extern void func_801737E8();
extern void func_8017385C();
extern void func_8017390C();
extern s32 func_80173980();

extern void func_80173BC0();
extern s32 func_80174188();
extern s32 func_801741A8();
extern void func_8014BCEC();
extern void func_801742A4();
extern s32 func_80174318();
extern void func_80142454();
extern void func_80174384();
extern s32 func_801743F0();

extern void func_80174474();

extern s32 func_801744E0();

extern void func_80174554();

extern void func_801745AC();

extern void func_80174604();

extern s32 func_800CF8CC();
extern void func_8016F0AC();
extern s16 D_8011F9C8;
extern s16 D_80126938;
extern void func_801747CC();
extern void func_80174888();
extern void func_801749C8();
extern void func_80174CB0();
extern s32 D_8012697C;
extern s16 D_80126980;
extern void func_80174F28();
extern void func_8012A018();
extern void func_80175184();
extern s16 D_800B9A02;
extern s32 func_801757E0();
extern void func_80175DA8();
extern void func_80175AB8();
extern s32 func_80176144();
extern void func_80176734();
extern void func_80176218();
extern s32 func_80176D00();
extern void func_80178BF8();
extern s32 func_80178CBC();
extern s16 D_801EF464;
extern s32 func_80174714();
extern s32 func_80179B74();
extern s32 D_801EE5F4;
extern s32 D_801EE61C;
extern s32 func_8017AD0C();
extern s32 func_80174764();

extern void func_80147514();
extern void func_80147628();
extern void func_80013F3C();
extern void func_800126C4();
extern void func_80012558();
extern void func_800123F0();
extern void func_80147948();
extern void func_801485B8();
extern s32 func_80154358();
extern s32 func_80148AFC();
extern void func_8012EF70();
extern s32 func_8012EFB8();
extern s32 func_8014CA70();
extern s32 func_8014CAE4();
extern s32 func_80150170();
extern s32 func_8014FE60();
extern void func_8014BD24();
extern s32 func_801619D0();
s32 func_8014BF6C(void);
extern s32 D_800AE6B0;
extern u16 D_800AE6DC;
extern s32 func_80150480();
extern void func_8014C8F0();
extern void func_80151780();
extern void (*D_8018F22C[])();
s32 func_80172630(s32 arg0);
extern void func_80151FB4();
extern void (*D_8018F250[])();
extern s32 func_801536DC();
extern void (*D_8018F264[])();
extern void (*D_8018F280[])();
extern void (*D_8018F298[])();
extern void (*D_8018F2AC[])();
extern void (*D_8018F2C8[])();
extern void (*D_8018F2DC[])();
extern void (*D_8018F2F0[])();
extern s16 D_8011DB0C;
extern u8 D_8018F304;
extern void (*D_8018F32C[])();
extern void StartRumbleScript();
s32 func_801563EC(s32 arg0);
extern void func_801599A4();
extern s32 func_80157F64();
extern s32 func_80156600();
s32 func_80148800(s32 arg0);
s32 func_80149CB4(s32 arg0, s32 arg1);
extern void (*D_8018F86C[])();
extern s32 D_801ED518;
extern s32 D_801ED524;
extern s32 D_801ED528;
void func_80147098(s32 arg0);
void func_801470AC(s32 arg0);
void func_80146C98(s32 arg0, s32 arg1);
extern void func_80158880();
extern u8 D_80110C3C;
extern s32 func_801399F0();
extern void func_80139914();
extern s32 func_8013767C();
extern u8 D_800AE6BD;
extern s32 D_801ED520;
extern void func_80145BF8();
extern void (*D_8018FAF8[])();
extern u8 D_800D48DC;
extern u8 D_8018FB3C;
extern void func_80154150();
extern void func_80146DB8();
extern void func_80161CD0();
extern void func_8015C030();
extern void (*D_8018FBA8[])();
extern s32 func_80149FB0();
extern void func_801473EC();
extern s32 func_8014D738();
extern s32 func_80161240();
extern void func_80161C24();
extern s32 func_8014E6A0();
s32 func_801725F4(s32 arg0);
extern s8 D_8018FDEC[];
extern s32 func_80161B18();
extern s32 func_80161B84();
extern void func_80149374();
extern void func_8015DCB8();
extern void func_8015E018();
extern void func_8015E40C();
extern void func_8015E5B0();
extern u8 D_80062BE8;
s32 func_8014AB5C(s32 arg0);
extern void func_80147324();
extern s32 func_801612B8();
extern void func_8016007C();
s32 func_8014BFF4(s32 arg0, s32 arg1);
extern s32 D_8018FF04[];
extern s32 func_80028DE0();
u32 func_80165700(u8 *obj, u32 ability);
s32 func_801487F4(s32 arg0);
extern void func_80160A74();
extern u8 D_80110EC0;
extern void func_800D0F4C();
extern void func_8014BB24();
extern s16 D_801270C0;
extern void func_80129248();
s32 func_8015FA78(s32 arg0);
extern s32 func_800291DC();
extern s32 func_800291C8();
extern s32 func_800D0D7C();
extern void (*D_8019006C[])();
extern void func_800D0C48();
extern void (*D_801900B4[])();
extern s32 func_80157158();
extern void (*D_801900BC[])();
extern void (*D_80190110[])();
extern void func_80162D28();
extern void func_80164ACC();
extern void (*D_8019011C[])();
extern s32 func_80164E40();
extern void (*D_8019012C[])();
s32 func_80165124(s32 arg0);
extern void func_801653F4();
extern void func_80165580();
extern void func_80165BB4();
s32 func_80165C58(s32 arg0);
extern u8 D_801EC898;
extern void func_8001534C();
extern void func_800153CC();
extern void (*D_801903EC[])();
extern void (*D_801903F4[])();
extern void (*D_801904BC[])();
extern void (*D_801904CC[])();
extern void (*D_801904DC[])();
extern void (*D_801904E8[])();
extern void (*D_80190500[])();
extern void func_80168BDC();
extern void func_801687CC();
extern void (*D_80190508[])();
extern void (*D_80190510[])();
extern void (*D_80190518[])();
extern void (*D_80190520[])();
extern void (*D_80190528[])();
extern void (*D_80190530[])();
extern void (*D_801905E4[])();
extern void (*D_80190624[])();
extern void (*D_80190630[])();
extern void (*D_80190678[])();
extern void (*D_801906F4[])();
extern s32 func_8016B964();
extern void (*D_80190744[])();
extern void (*D_80190774[])();
extern void (*D_8019077C[])();
extern void (*D_80190798[])();
extern void (*D_80190844[])();
extern void (*D_80190898[])();
extern void func_8016E778();
extern s16 D_801908CC[];
extern void func_8016EC0C();
extern u8 D_801908BC[];
extern void func_800D1724();
extern void (*D_80190960[])();
extern void func_8016F764();
extern void (*D_80190968[])();
extern void (*D_80190970[])();
extern void (*D_80190978[])();
extern void (*D_80190980[])();
extern void (*D_80190988[])();
extern void func_8016FB10();
extern void (*D_80190994[])();
extern void (*D_801909A0[])();
extern void (*D_801909AC[])();
extern u16 D_8011F73E;
extern void func_801477E8();
extern void (*D_801909BC[])();
extern void (*D_801909CC[])();
extern s32 func_80170068();
extern void (*D_801909D4[])();
extern void (*D_801909DC[])();
extern void (*D_801909E4[])();
extern void (*D_801909EC[])();
extern void (*D_801909F4[])();
extern void (*D_801909FC[])();
extern void (*D_80190A04[])();
extern void (*D_80190A0C[])();
extern void (*D_80190A14[])();
extern void (*D_80190A1C[])();
extern void (*D_80190A24[])();
extern void (*D_80190A2C[])();
extern void (*D_80190A34[])();
extern void (*D_80190A3C[])();
extern void (*D_80190A44[])();
extern void (*D_80190A4C[])();
extern void (*D_80190A54[])();
extern void (*D_80190A5C[])();
extern void (*D_80190A64[])();
extern void (*D_80190A6C[])();
extern void (*D_80190A74[])();
extern void (*D_80190A7C[])();
extern s32 func_80171FFC();
extern s32 func_8017250C();
extern void func_80146D90();
extern void (*D_80190A8C[])();
extern void (*D_80190A98[])();
s32 func_80149350(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_80172A8C();
extern s32 func_80172BC8();
extern s32 func_80012B04();
extern void (*D_80190AC0[])();
extern u8 D_800D47F4;
extern u8 D_800D46E4;
extern u8 D_800D5C6C;
extern s32 func_801730FC();
extern u8 D_80190A84;
void func_8017331C(s32 arg0);
extern void (*D_80190AF0[])();
extern s16 D_80126B40;
extern void (*D_80190B04[])();
extern void (*D_80190B2C[])();
extern s16 D_80126B3C;
extern u8 D_80126948;
extern void func_80174BBC();
extern void func_80174BF4();
extern void func_8012A0E0();
extern s32 func_80175014();
extern void func_80175218();
extern void (*D_80190D04[])();
extern void func_801758FC();
extern void func_80175820();
extern void func_801759D8();
s32 func_801757A0();
extern void (*D_80190D10[])();
extern u8 D_801ECAE0;
extern s16 D_801EE610;
extern s16 D_801EE614;
extern void func_800D0CA0();
extern s32 func_8001AAA0();
extern s32 func_800D0CE0();
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern s16 D_801EE5DC;
extern u16 D_801EE65C;
extern u16 D_801EE65E;
extern u16 D_801EE660;
extern s16 D_801EF3F0;
extern void func_8012A418();
extern s32 D_80114F24;
extern s32 D_80114F28;
extern s32 D_80114F2C;
extern s32 D_80114F30;
extern s32 D_80114F34;
extern s32 D_80114F38;
extern s16 D_801EE66C;
extern s16 D_801EE66E;
extern s16 D_801EE670;
extern s16 D_801EE674;
extern s16 D_801EE676;
extern s16 D_801EE678;
extern void (*D_80190EEC[])();

extern s32 func_8014C4AC();
s32 func_80156370();
extern s32 func_8016130C();
extern s32 D_801152BC;
extern s32 func_80161374();
extern void func_8017B0E4();
extern void func_8012A4BC();

extern void func_800D22E4();
extern void func_8016E460();
extern s32 D_8011F73C;
extern s32 D_8011F740;
extern s32 func_8014A1B0();
extern u8 D_80126B36;
s32 func_80171D1C(s32 arg0, s32 arg1, s32 arg2);
extern s32 D_801EE1C8;
extern void func_80178D40();

extern u8 D_80078E50;
extern s32 D_800AE6AC;
extern s16 D_800B9A0A;
extern void func_800D185C();
extern u8 D_80126BA4;
extern void (*D_8018EFFC[])();
void func_80146DE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern u32 D_80078E8C;
extern s8 D_80126D1D;
extern s32 func_8014D04C();
extern s32 func_8014CCB4();
s32 func_8014BC44(s32 arg0, s32 arg1);
void func_80153C18(s32 arg0);
extern void func_80154190();
extern void (*D_8018F37C[])();
extern void (*D_8018F7F0[])();
extern void (*D_8018F8A8[])();
extern void (*D_8018FD00[])();
extern u8 D_800D4A9C;
extern u8 D_800D4B48;
s32 func_801542DC(s32 arg0, s32 arg1, s32 arg2);
extern void (*D_8018FD28[])();
extern void (*D_8018FDE0[])();
extern s8 D_8018FE28[];
extern void (*D_8018FE60[])();
extern void (*D_8018FE9C[])();
extern void (*D_8018FEA4[])();
extern void (*D_8018FEE4[])();
extern void (*D_8018FF80[])();
extern void (*D_8018FF98[])();
extern void (*D_8018FFA4[])();
extern void (*D_8018FFB4[])();
extern void func_80162F60();
s32 func_80162F80(s32 arg0, s32 arg1);
s32 func_80162FA0(s32 arg0, s32 arg1);
extern void func_80146D30();
extern u8 D_80126CF8;
void func_801659DC(u8 *obj);
extern u8 D_80078EC5;
extern void (*D_80190170[])();
extern void func_80165B28();
extern void (*D_801905EC[])();
extern s32 func_8014C050();
extern void func_8016B984();
extern void (*D_801907A0[])();
extern s32 func_8016CF04();
extern void (*D_80190808[])();
extern void func_8016DBD8();
extern void (*D_8019083C[])();
void func_8017196C(s32 arg0, s32 arg1);
s32 func_801511A8(s32 arg0);
extern void func_8016F0E4();
void func_80165770(u8 *obj);
extern s16 D_80126B38;
extern s16 D_80126B3A;
extern s32 func_800D0EC4();
extern void (*D_80190B94[])();
extern void func_80175268();
extern s8 D_8011F7A8;
extern s8 D_8012694C;
extern s16 D_801EE64C;
extern s16 D_801EE64E;
extern s16 D_801EE650;
extern s16 D_801EE654;
extern s16 D_801EE656;
extern s16 D_801EE658;

void func_801458E8(void) {
    D_800AE6B0 = D_800AE6AC | 0x01000000;
    func_800D185C((s32) &D_80078E50);
    D_800B9A0A = 0x3000;
}

extern s32 func_8014F6F4();
extern void func_801519C8();
extern void func_80151DB0();
extern void func_801520DC();
extern void func_801523F4();
extern void func_801528B0();
extern void func_80152BF0();
extern void func_80152DA8();
extern void func_801530E4();
extern void func_801533A4();
extern void func_80153D7C();
extern s32 func_80166994();
extern void func_80169228();
extern void func_80169584();
extern void func_80172358();
extern void func_8012A568();
extern void func_80129FF4();
s32 func_80174ED4(void);
extern void func_801716AC();


extern s32 D_8011F730;
extern void func_80161124();
extern s32 func_801746DC();
extern void func_80146C3C();
extern s32 func_80166690();
extern void func_80168828();
extern u8 D_8019055C;
extern u8 D_8019059C;
extern void func_800D1FC8();
extern s32 func_800D21C4();
extern void func_80128EA8();
extern u8 D_801EDA84;
extern u8 D_801EDA88;
extern void func_8016BF50();
extern void func_8016BFA8();
extern void func_8016E3CC();
extern void (*D_80190AA4[])();
extern void (*D_80190AB4[])();
extern void (*D_80190AD8[])();
extern void (*D_80190AE4[])();
s32 func_8016F2A8(void);
s32 func_8016F2EC(void);
extern void (*D_80190B10[])();
extern void (*D_80190B1C[])();
extern void (*D_80190B4C[])();
extern void (*D_80190B58[])();
extern void (*D_80190B64[])();
s32 func_80174630(void);
extern void (*D_80190B70[])();
extern void (*D_80190B78[])();
extern void (*D_80190B8C[])();

extern u8 D_80126C98;
extern s16 D_80126C9E;

extern u8 D_80126DB0;
extern u16 D_80126DB6;
extern s32 func_80015954();

extern void func_80172DAC();
extern s32 func_8014C168();
extern void (*D_80190ACC[])();
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8017496C();
extern void (*D_80190B80[])();


extern s32 func_80171C64();
extern s32 func_800D0F8C();
extern u16 D_8011F73A;
extern void func_8002D4C8();
extern void func_800D0FE0();


extern s32 func_80171B4C();

extern u8 D_80062BF4;
void func_80152790(s32 arg0);
extern u8 D_80062C14;
extern u8 D_8018EEBC;

extern void (*D_8018FF90[])();
extern void (*D_8018FEF0[])();
extern void (*D_8018FEAC[])();
extern void (*D_8018FE94[])();
extern void (*D_8018FE40[])();
extern void (*D_8018FE20[])();
extern void (*D_8018FD7C[])();
extern void (*D_8018FD44[])();
extern void (*D_8018FD34[])();
extern void (*D_8018FD1C[])();
extern void (*D_8018FCF8[])();
extern void (*D_8018FCF0[])();
extern void (*D_8018F818[])();
extern void (*D_80190B84[])();

extern void (*D_80190364[])();

extern void func_80172710();
extern void func_8016EE94();

extern u8 D_8011520C;
extern u8 D_8018F7E0[];
extern u8 D_80190004[];
extern u8 D_801ED634[];

extern u8 D_8018FFF4[];
extern s32 func_800CF8B4();

extern s32 D_801151E0;
extern u8 D_8011DAD8;
extern u8 D_801202A0;
s32 func_8014C278(s32 arg0, s32 arg1, s32 arg2);
extern void func_801506A4();
extern void func_80178840();

extern s16 D_8011DB18;
extern void func_80153C74();
extern u8 D_800D4DD4;
extern s32 func_80154274();

extern void func_80147928();
s32 func_8014799C(s32 arg0, s32 arg1);
s32 func_80147A10(s32 arg0, s32 arg1);
s32 func_8014B310();
extern void func_80015978();
void func_8014C8C8(s32 arg0, s32 arg1);
extern void func_80146E90();
extern void func_80165140();


extern u8 D_8018FFE4[];

extern s32 D_801ED530;
extern s32 D_801ED588;
extern void func_80162968();

extern s32 D_8012750C;
extern s32 func_80173A60();

extern void func_8016B234();

extern void (*D_801900B0[])();

extern s32 func_8014B5B8();

extern s32 func_801497A8();
s32 func_80149864(s32 arg0);
extern s32 func_8016F44C();
void func_8016F470(s32 arg0);


extern s32 D_80126BA0;
extern u16 D_80126BE0;
extern u16 D_80126BE2;
extern u16 D_80126BE4;
extern u16 D_80126C90;
extern u16 D_80126C92;
extern u16 D_80126C94;
extern void *D_80126B78;
extern void func_8014C6F4();
void UpdateWeaponParts(u8 *a);
void func_801470C0(s32 arg0);
extern s32 func_80147478();
extern void func_80147118();
extern void func_8014BDE8();
extern s32 func_801508F8();      /* s32 with no return value: v0 stays live at its exit (r164) */
void func_8014B5B0(s32 arg0);
extern s32 func_80161D88();

extern u8 D_800636C8;
extern u8 D_800DE5A0;
s32 func_8014659C(void);
extern void func_8001C214();

extern u8 D_80078E78;
extern s32 func_8016F1C4();
extern void func_8014B944();
extern void func_801670E4();

typedef struct { u8 r, g, b, cd; } SCol;
typedef struct { SVECTOR v[4]; SCol c[4]; s32 code; } SPrim;
extern void func_80017DC4();
extern void MulMatrix2();
extern void func_80017758();
extern s32 func_80012C6C();
extern s32 func_80012ABC();

extern u8 D_800B9A64;
extern s32 GetPadTypeAlt();
extern s32 GetPadHeld();
extern s32 GetPadPressed();
extern s32 GetPadByte();
extern void GetDemoPad();
#define SW1(x) ((((x) & 0x2000) * 4) | ((s32)((x) & 0x8000) >> 2) | ((x) & 0x5FFF))

extern void (**D_80126D40)();
extern void func_80162CC4();

extern u8 D_80110D0C;
extern void func_80029504();
extern s32 func_80029A94();
void func_801458E0(void);
extern void func_800298BC();
extern void func_801458E8();
extern void func_8002992C();
extern void func_80145A2C();
extern void func_800CF804();
extern void func_800CF818();


extern s32 func_80135A4C();
extern s32 func_80012A60();
extern s32 func_80013294();

void func_8014BEC0(s32 arg0);
extern void func_80029274();
extern void func_80029044();
extern void func_8002906C();
extern void func_80029094();
extern void func_8002941C();
extern void func_8002AB64();
extern void func_80029514();
extern void func_800D1F90();
extern s32 D_80128150;
extern u8 D_800D3A44;
extern u8 D_800D39FC;
extern u8 D_800D3A20;

extern s32 func_80029AF4();

extern u16 D_801EE1D0[];
extern s16 D_801EE5D4;

typedef struct { SVECTOR v[4]; u16 uv[4][2]; u8 r, g, b, pad; s32 code; u8 tp; } SPrimT;
extern u8 D_80190670[];
extern void func_80016ED4();

extern s16 D_80078EA6;


extern s32 func_801789AC();
extern s16 D_801EE5D8;
extern s32 D_80190E48[];
typedef void (*VmHook)(s32 obj);
extern VmHook D_801EE624[10];
extern s32 *D_801151D4;

extern s16 D_801EE5D0;
extern s32 D_801EE5E0;
extern s16 D_801EE5E4;
extern s16 D_801EE5E8;
extern s16 D_801EE5EC;
extern s16 D_801EE5F0;
extern s32 D_801EE5F8;
extern s32 D_801EF2E0;
extern u8 D_801EF3A8[];
extern s16 D_801EE664;
extern s16 D_801EE666;
extern s16 D_801EE668;
void func_8017BE60(u8 *arg0);
/* the driver func_801789AC calls these before their definitions */
void func_8017BC38(s32 obj);
void func_8017A4AC(void);
void func_8017AE2C(s32 obj);
extern s32 D_801EE1CC;       /* VM wait frames */
extern s32 D_801EE60C;       /* VM wait callback */

typedef struct { SVECTOR off; s16 a, b, c; } VmOrbit;
extern SVECTOR D_801EE5FC;
extern SVECTOR D_801EE604;

typedef struct { SVECTOR a, b; } VmCamPair;
typedef struct { s8 m; } VmCamMode;
extern VmCamPair D_80190E4C[];
extern void FaceHelper(s32 obj, SVECTOR *in, SVECTOR *out);
extern void func_80129CF8();
extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;

typedef struct {
    s16 kind;
    s16 n;
    s16 heading;
    s16 speed;
    s16 fwd;
    s16 walkTurn;
    SVECTOR pt;
} VmMove;
extern SVECTOR D_801EF3B4;
extern s32 func_8012B744();
extern s32 func_8012B608();
extern s32 func_8012BE98();

extern void func_80172310();
extern void func_80172780();
extern void func_80172894();
extern void func_80172C50();
extern void func_801733FC();
extern void func_80173460();
extern void func_801734BC();
extern void func_801736B0();
typedef void (*VmCmdFn)(void);
typedef void (*VmCmdFn3)(s32 a, s32 b, s32 c);

typedef s32 (*VmWait)(s32 obj);

typedef struct { s16 x, y, z, pad; } SV8;
extern SV8 D_80126AF0[];
extern SV8 D_80126AF2[];
extern SV8 D_80126AF4[];
extern SV8 D_80128120[];
extern SV8 D_80128138[];
extern u8 D_80126730[];
extern void func_80013E94();
extern s32 func_801469C8();

extern s32 func_8015094C();

extern s16 D_80126D20;
extern s32 D_80126D54;
extern s32 D_80126D5C;
extern s32 D_80126D60;
extern s16 D_80126D64;
extern s16 D_80126D66;
extern s16 D_80126D68;
extern s16 D_80126D6A;
extern s8 D_80126D6D;
extern s8 D_80126D6E;
extern s32 D_80127058;
extern s32 D_8012705C;
extern s32 D_80127060;
extern s32 D_80127064;
extern s32 D_80127068;
extern s32 D_8012706C;
extern s32 D_80127070;
extern s32 D_80127074;

extern u8 D_800D4C14;
typedef struct { s32 a; s32 b; } SPair2;
extern SPair2 D_8018FD88[];
typedef struct { s32 p[2]; s32 f; } S3;
extern S3 D_8018FDC8;
extern s32 D_8018FD8C[];
extern void func_8015D380();

typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0, w, h; u32 pad; } STile;
extern u8 D_8011F7AB;
extern u8 D_8011F7F0;
extern u8 D_8011F837;

extern u8 D_8018F948;
extern u8 D_8018F96C;
extern u8 D_8018F990;
extern u8 D_8018F9B4;
extern u8 D_8018F9D8;
extern u8 D_8018F9FC;
extern u8 D_8018FA20;
extern u8 D_8018FA44;
extern void func_80145B24();

void func_80145934(void) {
    s32 r;

    r = ((s32 (*)())func_80029504)(); /* MATCH-TRICK: callee declared void in the file */
    if (r >= 0x6A4) {
        func_800D185C(&D_8018FA44);
    } else if (r >= 0x5DC) {
        func_800D185C(&D_8018F9B4);
    } else if (r >= 0x578) {
        func_800D185C(&D_8018F990);
    } else if (r >= 0x514) {
        func_800D185C(&D_8018F96C);
    } else if (r >= 0x384) {
        func_800D185C(&D_8018FA44);
    } else if (r >= 0x258) {
        func_800D185C(&D_8018FA20);
    } else if (r >= 0xC8) {
        func_800D185C(&D_8018F9FC);
    } else if (r >= 0xA) {
        func_800D185C(&D_8018F9D8);
    } else {
        func_800D185C(&D_8018F948);
    }
    func_80145B24();
}

extern u8 D_8018FA68;
extern u8 D_8018FA8C;
extern u8 D_8018FAB0;
extern u8 D_8018FAD4;

void func_80145A2C(void) {
    s32 r;

    r = ((s32 (*)())func_80029504)(); /* MATCH-TRICK: callee declared void in the file */
    if (r >= 0x6A4) {
        func_800D185C(&D_8018FAD4);
    } else if (r >= 0x5DC) {
        func_800D185C(&D_8018F9B4);
    } else if (r >= 0x578) {
        func_800D185C(&D_8018F990);
    } else if (r >= 0x514) {
        func_800D185C(&D_8018F96C);
    } else if (r >= 0x384) {
        func_800D185C(&D_8018FAD4);
    } else if (r >= 0x258) {
        func_800D185C(&D_8018FAB0);
    } else if (r >= 0xC8) {
        func_800D185C(&D_8018FA8C);
    } else if (r >= 0xA) {
        func_800D185C(&D_8018FA68);
    } else {
        func_800D185C(&D_8018F948);
    }
    func_80145B24();
}

extern s32 func_80162120();

void func_80145B24(void) {
    u8 *w = (u8 *)&D_800AF630;
    s32 r;

    r = ((s32 (*)())func_80029504)(); /* MATCH-TRICK: callee declared void in the file */
    if (func_800291DC(8) & 0x8000) {
        func_800291C8(8, 0);
        func_80162120();
    }
    if (r >= 0x6A4) {
        func_80029124(0x1A, 0);
        func_80029124(0x8E, 0);
        func_80029124(0x143, 0);
        if (D_80078EC0 & 0x7F) {
            D_80078EC0 = 1;
        }
        func_80165A50((u8 *)&D_80126B58);
        func_80029514(0x4B0);
    }
    AF(w, s16, 0xA3DA) = 0x3000;
}

extern s32 func_80028FBC();
extern s32 func_80029000();
extern s32 func_80028D9C();

void func_80145BF8(void) {
    func_8002D4C8(0x21, func_80028FBC() & 0xFFFF);
    func_8002D4C8(0x22, func_80029000() & 0xFFFF);
    if (func_80028D9C() == 0) {
        func_8002D4C8(0xC, 0);
    } else {
        func_8002D4C8(0xB, 0);
    }
}

void func_80145C54(void) {
    s32 x;
    u32 t;
    s32 y;

    x = func_800291B4(0x4A) & 0xFF;
    t = x + 1;
    if (x >= 0x20) {
        x = (s16)t; /* MATCH-TRICK: a narrowing copy (t <= 0x100, so inert) keeps cse from moving the test and the shift onto x */
        if (!(t & 0xF)) {
            x = t >> 4;
        }
        y = x & 0xFF;
        func_800291A0(0x4A, y);
        func_800291A0(0x50, y);
    }
    x = func_800291B4(0x4D) & 0xFF;
    t = x + 1;
    if (x >= 0x20) {
        x = (s16)t; /* MATCH-TRICK: a narrowing copy (t <= 0x100, so inert) keeps cse from moving the test and the shift onto x */
        if (!(t & 0xF)) {
            x = t >> 4;
        }
        func_800291A0(0x4D, x & 0xFF);
    }
}

extern u8 D_800AFAE8;
extern u8 D_801152C8;
extern s32 D_8011DB10;
extern s32 D_8011F9C4;
extern s16 D_80126BC0;
extern s16 D_80126BC2;
extern s16 D_80126BC4;
extern s16 D_80126BC8;
extern s16 D_80126BCA;
extern s16 D_80126BCC;
extern s16 D_80126C4E;
extern s16 D_80126D10;
extern s16 D_80126D12;
extern void *D_800AF7C8;
extern void *D_80126B90;
extern void func_8001C320();
extern void ShowAllParts();
extern void func_80149210();
extern void func_8014BE9C();
extern void func_8016533C();
extern s32 func_801627C0();
extern s32 func_80162AF4();
extern s32 func_80165C78();
extern s32 func_801468C8();
extern void func_80145EE8();
extern void func_8014C968();
extern void func_8014C6D0();
extern void func_80165938();
extern void func_80153C8C();
extern void func_800290BC();

void func_80145CEC(void) {
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original's frame has 8 unused bytes */

    func_80016714(&D_80126B58, 0x254);
    D_80126B78 = &D_800AFAE8;
    D_800AF7C8 = &D_801152C8;
    func_8001C320(&D_800AFAE8, D_800DE2A4);
    AF(D_80126B58.model, s32, 0x28) = 0x7FFF7FFF;
    D_80126B90 = &D_8018EEBC;
    AF(D_80126B58.model, s16, 0x18) = 0x1000;
    D_80126BC8 = 0x1000;
    D_80126BC0 = 0x1000;
    D_80126BB8 = 0x1000;
    AF(D_80126B58.model, s16, 0x1A) = 0x1000;
    D_80126BCA = 0x1000;
    D_80126BC2 = 0x1000;
    D_80126BBA = 0x1000;
    AF(D_80126B58.model, s16, 0x1C) = 0x1000;
    D_80126BCC = 0x1000;
    D_80126BC4 = 0x1000;
    D_80126BBC = 0x1000;
    D_80126D12 = 0x1000;
    D_80126D10 = 0x1000;
    D_80126C4E = 0x1000;
    ShowAllParts(&D_80126B58);
    func_80147084(&D_80126B58);
    func_80147098((s32)&D_80126B58);
    func_801470AC((s32)&D_80126B58);
    AF(D_80126B58.model, u16, 0x2C) |= 0x50;
    func_80149210(&D_80126B58, 8);
    func_8014BE9C();
    func_8016533C();
    func_801627C0();
    func_80162AF4();
    func_80165C78();
    func_801468C8(&D_80126B58, 1);
    if (D_800B9A08 != 0x30A2 && D_800B9A08 != 0x30A5) {
        func_80145EE8(0);
    }
    func_8014C968();
    func_8014C6D0();
    D_8011F9C4 = 0;
    func_80165938();
    func_80153C8C();
    D_8012707C = 0;
    D_8011DB10 = 0;
    if ((u32)((s32 (*)())func_80029504)() >= 10) { /* callee declared void in the file: called through a cast */
        func_800290BC();
    }
}

extern u8 D_8018EECC;
extern u8 D_8018EEFC;
extern u8 D_8018EF4C;
extern u8 D_8018EF7C;
extern u8 D_8018EFAC;
extern void func_80146014();

void func_80145EE8(s32 arg0) {
    switch (arg0) {
    case 0:
        if (func_80029178(0x1F) & 0xFF) {
            func_80146014(&D_8018EECC);
        }
        if (func_80029178(0x21) & 0xFF) {
            func_80146014(&D_8018EEFC);
        }
        if (func_80029178(0x1E) & 0xFF) {
            func_80146014(&D_8018EF4C);
        }
        if (func_80029178(0x1D) & 0xFF) {
            func_80146014(&D_8018EF7C);
        }
        if (func_80029178(0x20) & 0xFF) {
            func_80146014(&D_8018EFAC);
        }
        break;
    case 1:
        func_80146014(&D_8018EECC);
        func_80146014(&D_8018EEFC);
        func_80146014(&D_8018EF4C);
        func_80146014(&D_8018EF7C);
        func_80146014(&D_8018EFAC);
        break;
    }
}

void func_80146014(u8 *arg0) {
    while (AF(arg0, s32, 0xC) != 0) {
        MoveImage(arg0, AF(arg0, s32, 8), AF(arg0, s32, 0xC));
        arg0 += 0x10;
    }
}

void func_80146074(void) {
}

extern s32 D_801ED4D0;
extern s32 func_80146128();
extern void func_80146360();
extern s32 func_801463A0();

void func_8014607C(void) {
    SetSpadStack();
    D_801ED4D0 = func_80146128();
    ResetSpadStack();
    if (D_801ED4D0 != 0) {
        SetSpadStack();
        func_80146360();
        ResetSpadStack();
        SetSpadStack();
        func_801463A0();
        ResetSpadStack();
    }
}

extern SVECTOR D_801150F0;
extern u16 D_801152B8;
extern u16 D_8012693A;
extern void func_80150A70();
extern s32 func_80029104();
extern void func_8014ADE0();
extern void func_8014B350();
extern void func_80029344();
extern void func_80161A90();
extern void func_8014B504();
extern void func_8014C99C();
extern void func_8014B190();
extern s32 func_8014A59C();
extern void func_8016F14C();
extern void func_801654A8();
extern void func_80146FC4();
extern void func_8014A638();
extern u8 RunStateHandler4E();
extern void func_8014B7A4();
extern s32 func_80161D58();
extern void func_80149BEC();
extern void func_8014B5D0();
extern void func_80148648();
extern void func_80149228();
extern s32 func_80154BE4();
extern void func_80165694();
extern void func_8014A680();
extern void func_8014A6A8();
extern void func_8014A71C();
extern void func_80172588();
extern void func_801473DC();

s32 func_80146128(void) {
    u8 *p = (u8 *)&D_80126B58;
    u8 *m = D_80126B78;

    func_80146FC4(p);
    D_801150F0 = *(SVECTOR *)&D_80126BE0;
    func_80150A70(p);
    func_80147098((s32)p);
    func_8014A638(p);
    D_8011F730 = 0;
    D_801152B8 = 0;
    D_8012693A = 0;
    if (D_80078EC1 == 0x10 && D_80078EC8 != 0) {
        AF(m, s16, 2) = 6;
        D_80126B9C |= 0x800;
    } else {
        AF(m, s16, 2) = 1;
        AF(p, s32, 0x44) &= ~0x800;
    }
    if (AF(p, s32, 0x1B0) != 0) {
        AF(p, s32, 0x1B0)--;
    }
    /* MATCH-TRICK: RunStateHandler4E returns u8 in the file; the original tests v0 without andi */
    if (((s32 (*)())RunStateHandler4E)(p) == 0 && !(AF(p, s32, 0x44) & 0x04000000)) {
        if (func_80029104() & 0xFF) {
            func_8014ADE0(p);
            func_8014B350(p);
            func_8014B7A4(p);
            func_80161D58(p);
        }
        func_80029344();
        func_80161A90(p);
        func_8014B504(p);
        func_80149BEC(p);
        func_8014B5D0(p);
        func_8014C99C(p);
        func_8014B190(p);
        func_80148648(p, 0);
        func_80149228(p);
        func_8014A59C(p);
        func_8016F14C(p);
        func_80154418(p);
        func_80154BE4(p);
        func_80165694(p);
        func_801654A8(p);
        func_8014A680(p);
        func_8014A6A8(p);
        func_8014A71C(p);
        func_80172588(p);
        func_801473DC(p);
        func_80015978(p + 4, p + 0x98);
        return 1;
    }
    func_80015978(p + 4, p + 0x98);
    return 0;
}

void func_80146360(void) {
    D_8018EFFC[D_80126BA4](&D_80126B58);
}

s32 func_801463A0(void) {
    Player *p = &D_80126B58;
    void *m = D_80126B78;
    s16 v;

    func_8014C6F4(p);
    UpdateWeaponParts((u8 *)p);
    func_801470C0((s32)p);
    func_80147478(p);
    func_80147118(p);
    if (m != NULL) {
        v = D_80126B5E + D_80126C90;
        AF(m, s16, 8) = v;
        AF(m, s32, 0x48) = v;
        v = D_80126B62 + D_80126C92;
        AF(m, s16, 0xA) = v;
        AF(m, s32, 0x4C) = v;
        v = D_80126B66 + D_80126C94;
        AF(m, s16, 0xC) = v;
        AF(m, u16, 0x2C) |= 0x11;
        AF(m, s32, 0x50) = v;
    }
    func_8014BDE8(p);
    AF(&D_80126B58, SVECTOR, 0x90) = AF(&D_80126B58, SVECTOR, 0x88);
    D_80126BE0 = D_80126B5E;
    D_80126BE2 = D_80126B62;
    D_80126BE4 = D_80126B66;
    D_80126BA0 = D_80126B9C;
    D_80126B9C &= 0x3FFFFFFF;
    func_801508F8(p);
    D_80126C9E = 0;
    func_8014B5B0((s32)p);
    return func_80161D88(p);
}

void func_80146534(void) {
    D_80127098 = 0;
    D_80127094 = 0;
    D_80127090 = 0;
}

void func_80146554(void) {
    func_8001D074(4, 6);
}

void func_80146578(void) {
    func_8001D074(6, 0x16);
}

s32 func_8014659C(void) {
    return func_8001CFDC(6, 0x16);
}

void func_801465C0(void) {
    func_8001D074(0x16, 0x3E);
}

void func_801465E4(void) {
    func_8001CFDC(0x16, 0x26);
}

s32 func_80146608(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4_0, s32 arg5, s32 arg6, u32 arg7, s32 arg8) {
    u16 arg4 = arg4_0;
    u8 *p;
    u32 n;

    n = 0;
    for (p = &D_8011F9D0; p < &D_8011F9D0 + 0x820; p += 0x68) {
        if (AF(p, u16, 0) == (arg0 & 0xFFFF)) {
            n++;
        }
    }
    if (n >= arg7) {
        return 0;
    }
    func_801466F0(arg0 & 0xFFFF, arg1, (s16)arg2, (s16)arg3, (s16)arg4, arg5, arg6, arg8);
}

void func_801466B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_801466F0(arg0 & 0xFFFF, arg1, 0, 0, /* extra? */ 0, /* extra? */ arg2, /* extra? */ arg3, /* extra? */ arg4);
}

extern s32 func_80146750();
extern s32 func_8014680C();

void func_801466F0(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    s32 arg0; s32 arg1; s32 arg2; s32 arg3; u16 arg4; s32 arg5; s32 arg6; s32 arg7;
{
    struct { s16 a, c, d; u16 e; s32 b, f, g, h; } s;

    s.a = arg0;
    s.b = arg1;
    s.c = arg2;
    s.d = arg3;
    s.e = arg4;
    s.f = arg5;
    s.g = arg6;
    if (arg7 != 0) {
        func_80146750(&s);
    } else {
        func_8014680C(&s);
    }
}

s32 func_80146750(s32 arg0) {
    s32 i;
    s32 off;
    u8 *p;

    for (i = 8, p = &D_8011F9D0 + 0x340; i < 20; p += 0x68, i++) {
        off = i * 0x68;
        if (AF(&D_8011F9D0 + off, u16, 0) == 0) {
            AF(&D_8011F9D0 + off, s32, 0x4C) = AF(arg0, s32, 8);
            AF(&D_8011F9D0 + off, u16, 0) = AF(arg0, u16, 0);
            AF(&D_8011F9D0 + off, u16, 6) = AF(arg0, u16, 2);
            AF(&D_8011F9D0 + off, u16, 0xA) = AF(arg0, u16, 4);
            AF(&D_8011F9D0 + off, u16, 0xE) = AF(arg0, u16, 6);
            AF(&D_8011F9D0 + off, s32, 0x50) = AF(arg0, s32, 0xC);
            AF(&D_8011F9D0 + off, s32, 0x54) = AF(arg0, s32, 0x10);
            return (s32)p;
        }
    }
    return 0;
}

s32 func_8014680C(s32 arg0) {
    s32 i;
    s32 off;
    u8 *p;
    u8 *s;

    for (i = 0, p = &D_8011F9D0, s = (u8 *)arg0; i < 8; p += 0x68, i++) {
        off = i * 0x68;
        if (AF(&D_8011F9D0 + off, u16, 0) == 0) {
            AF(&D_8011F9D0 + off, s32, 0x4C) = AF(s, s32, 8);
            AF(&D_8011F9D0 + off, u16, 0) = AF(s, u16, 0);
            AF(&D_8011F9D0 + off, u16, 6) = AF(s, u16, 2);
            AF(&D_8011F9D0 + off, u16, 0xA) = AF(s, u16, 4);
            AF(&D_8011F9D0 + off, u16, 0xE) = AF(s, u16, 6);
            AF(&D_8011F9D0 + off, s32, 0x50) = AF(s, s32, 0xC);
            AF(&D_8011F9D0 + off, s32, 0x54) = AF(s, s32, 0x10);
            return (s32)p;
        }
    }
    return 0;
}

extern u8 D_8011F754;

s32 func_801468C8(s32 arg0, s32 arg1) {
    s32 i;
    s32 off;

    for (i = 0; i < 2; i++) {
        off = i * 0x2C;
        if (AF(&D_8011F750, u8, off) == 0) {
            AF(&D_8011F754, s32, off) = arg0;
            AF(&D_8011F750, u8, off) = arg1;
            return (s32)((u8 *)&D_8011F750 + off);
        }
    }
    return 0;
}

s32 func_80146924(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4) {
    u16 *temp_t2;
    u16 *var_v1;
    u32 var_t0;

    var_t0 = 0;
    var_v1 = &D_8011D030;
    temp_t2 = &D_8011D030 + 0xA50;
    if ((u32) &D_8011D030 < (u32) temp_t2) {
        do {
            if (*var_v1 == (arg0 & 0xFFFF)) {
                var_t0 += 1;
            }
            var_v1 = (u16 *)((u8 *)var_v1 + 0x58);
        } while ((u32) var_v1 < (u32) temp_t2);
    }
    if (var_t0 < arg4) {
        return func_80146994(arg0 & 0xFFFF, arg1, arg2, arg3);
    }
    return 0;
}

s32 func_80146994(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80146A6C(arg0 & 0xFFFF, arg1, 0, 0, 0, arg2, arg3);
}

s32 func_801469C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7) {
    u16 *temp_t2;
    u16 *var_v1;
    u32 var_t0;
    u16 z = arg4;

    var_t0 = 0;
    var_v1 = &D_8011D030;
    temp_t2 = &D_8011D030 + 0xA50;
    if ((u32) &D_8011D030 < (u32) temp_t2) {
        do {
            if (*var_v1 == (arg0 & 0xFFFF)) {
                var_t0 += 1;
            }
            var_v1 = (u16 *)((u8 *)var_v1 + 0x58);
        } while ((u32) var_v1 < (u32) temp_t2);
    }
    if (var_t0 < arg7) {
        return func_80146A6C(arg0 & 0xFFFF, arg1, arg2, arg3, z, arg5, arg6);
    }
    return 0;
}

extern s32 func_80146AFC();

s32 func_80146A6C(s32 kind, StageActor *owner, s16 x, s16 y, s16 z, s32 d, s32 e) {
    struct {
        s16 kind;
        s16 x;
        s16 y;
        s16 z;
        StageActor *owner;
        s32 d;
        s32 e;
    } p;

    p.kind = kind;
    p.owner = owner;
    p.x = x;
    p.y = y;
    p.z = z;
    p.d = d;
    p.e = e;
    return func_80146AFC(&p);
}

extern s32 func_80146B9C();

s32 func_80146AB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    struct {
        s16 a;
        s16 b;
        s16 c;
        s16 d;
        s32 e;
        s32 f;
        s32 g;
    } p;
    s16 x = arg4;

    p.a = arg0;
    p.e = arg1;
    p.b = arg2;
    p.c = arg3;
    p.d = x;
    p.f = arg5;
    p.g = arg6;
    return func_80146B9C(&p);
}

s32 func_80146AFC(u8 *arg0) {
    u8 *p;

    for (p = &D_8011D030; p < &D_8011D030 + 0xA50; p += 0x58) {
        if (AF(p, u16, 0) == 0) {
            AF(p, s32, 0x34) = AF(arg0, s32, 8);
            AF(p, u16, 0) = AF(arg0, u16, 0);
            AF(p, u16, 6) = AF(arg0, u16, 2);
            AF(p, u16, 0xA) = AF(arg0, u16, 4);
            AF(p, u16, 0xE) = AF(arg0, u16, 6);
            AF(p, s32, 0x2C) = AF(arg0, s32, 0xC);
            AF(p, s32, 0x30) = AF(arg0, s32, 0x10);
            return (s32) p;
        }
    }
    return 0;
}

s32 func_80146B9C(u8 *arg0) {
    u8 *p;

    for (p = &D_8011D030 + 0x9F8; p >= &D_8011D030; p -= 0x58) {
        if (AF(p, u16, 0) == 0) {
            AF(p, s32, 0x34) = AF(arg0, s32, 8);
            AF(p, u16, 0) = AF(arg0, u16, 0);
            AF(p, u16, 6) = AF(arg0, u16, 2);
            AF(p, u16, 0xA) = AF(arg0, u16, 4);
            AF(p, u16, 0xE) = AF(arg0, u16, 6);
            AF(p, s32, 0x2C) = AF(arg0, s32, 0xC);
            AF(p, s32, 0x30) = AF(arg0, s32, 0x10);
            return (s32) p;
        }
    }
    return 0;
}

void func_80146C3C(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    s32 var_a1;
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0x20);
    if (temp_a0 != NULL) {
        var_a1 = 0x38;
        if (*temp_a0 == 1) {
            var_a1 = 0x84;
        }
        func_80016714((s32) temp_a0, var_a1, arg2, arg3);
    }
    func_80016714(arg0, 0x58);
}

void func_80146C98(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = (s16) arg1;
}

void func_80146CA0(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_80146CB4(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
}

void func_80146CC8(u8 *arg0) {
    s32 *p = &D_80127090;

    AF(arg0, s32, 0x10) += *p;
    AF(arg0, s32, 0x14) += D_80127094;
    AF(arg0, s32, 0x18) += D_80127098;
    *p = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void func_80146D30(u8 *arg0) {
    s32 *p = &D_80127090;

    AF(arg0, s32, 0x10) = *p;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    *p = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void func_80146D80(s32 arg0) {
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s32, 0x10) = 0;
}

void func_80146D90(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    func_80146DE8(arg0, 0, 0, 0);
}

void func_80146DB8(s32 arg0, s32 arg1) {
    func_80146DE8(arg0, AF(arg1, s32, 0), AF(arg1, s32, 4), AF(arg1, s32, 8));
}

void func_80146DE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s32, 0x24) = arg1;
    AF(arg0, s32, 0x28) = arg2;
    AF(arg0, s32, 0x2C) = arg3;
}

void func_80146DF8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    if (var_a1 < 0) {
        temp_v1 = -arg4;
        if (var_a1 < temp_v1) {
            var_a1 = temp_v1;
        }
    } else if (arg4 < var_a1) {
        var_a1 = arg4;
    }
    if (var_a2 < 0) {
        temp_v1_2 = -arg4;
        if (var_a2 < temp_v1_2) {
            var_a2 = temp_v1_2;
        }
    } else if (arg4 < var_a2) {
        var_a2 = arg4;
    }
    if (var_a3 < 0) {
        temp_v1_3 = -arg4;
        if (var_a3 < temp_v1_3) {
            var_a3 = temp_v1_3;
        }
    } else if (arg4 < var_a3) {
        var_a3 = arg4;
    }
    AF(arg0, s32, 0x24) = var_a1;
    AF(arg0, s32, 0x28) = var_a2;
    AF(arg0, s32, 0x2C) = var_a3;
}

void func_80146E90(arg0, arg1) s32 arg0; s32 arg1; {
    AF(arg0, s32, 0x1C) = arg1;
}

s32 func_80146E98(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = --temp_v0;
        return temp_v0 == 0;
    }
    return 1;
}

extern void func_80146F58();

void func_80146EC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR v;

    func_80015954(arg2, arg1);
    func_80149374(arg0, arg1);
    func_80146F58(arg3, &v);
    AF(arg1, u16, 2) += v.vx;
    AF(arg1, u16, 6) += v.vy;
    AF(arg1, u16, 0xA) += v.vz;
}

extern s16 func_8012A68C();
extern s16 func_8012A758();
extern MATRIX *RotMatrix(SVECTOR *r, MATRIX *m);
extern SVECTOR *ApplyMatrixSV(MATRIX *m, SVECTOR *v0, SVECTOR *v1);

void func_80146F58(SVECTOR *arg0, SVECTOR *arg1) {
    SVECTOR r;
    MATRIX m;

    r.vx = func_8012A68C();
    r.vy = func_8012A758();
    r.vz = 0;
    RotMatrix(&r, &m);
    ApplyMatrixSV(&m, arg0, arg1);
}

void func_80146FC4(s32 arg0) {
    if (AF(arg0, s16, 0xA) >= 0x401) {
        func_80015954((s32) &D_80126DB0, arg0 + 4);
        AF(arg0, SVECTOR, 0x88) = AF(&D_80126DB0, SVECTOR, 0x0);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) D_80126DB6;
    }
}

void func_8014704C(u8 *arg0) {
    AF(arg0, u8, 0x4C) = 0;
}

void func_80147054(u8 *arg0) {
    AF(arg0, u8, 0x4C) = 1;
}

void BeginScene(s32 arg0) {
    AF(arg0, u8, 0x4D) = 1;
}

void EndScene(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AF(arg0, u8, 0x4D) = 2;
}

void func_80147078(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0) = (s16) arg1;
    AF(arg0, s16, 2) = 0;
}

void func_80147084(s32 arg0) {
    AF(arg0, u8, 0x221) = 0;
}

void func_8014708C(arg0)
    u8 *arg0;
{
    AF(arg0, u8, 0x221) = 1;
}

void func_80147098(s32 arg0) {
    AF(arg0, u8, 0x220) = 0;
}

void func_801470A0(s32 arg0) {
    AF(arg0, u8, 0x220) = 1;
}

void func_801470AC(s32 arg0) {
    AF(arg0, u8, 0x222) = 0;
}

void func_801470B4(s32 arg0) {
    AF(arg0, u8, 0x222) = 1;
}

void func_801470C0(s32 arg0) {
    void *a;

    a = AF(arg0, void *, 0x20);
    if (a != NULL) {
        if ((AF(arg0, u8, 0x222) | (AF(arg0, u8, 0x221) | AF(arg0, u8, 0x220))) != 0) {
            AF(a, s32, 4) |= 0x80000000;
        } else {
            AF(a, s32, 4) &= 0x7FFFFFFF;
        }
    }
}

void func_80147118(s32 arg0) {
    s32 v[3];

    v[0] = AF(arg0, s16, 0x60) * AF(arg0, s16, 0x68) / 4096;
    v[0] = v[0] * AF(arg0, s16, 0x70) / 4096;
    v[1] = AF(arg0, s16, 0x62) * AF(arg0, s16, 0x6A) / 4096;
    v[1] = v[1] * AF(arg0, s16, 0x72) / 4096;
    v[2] = AF(arg0, s16, 0x64) * AF(arg0, s16, 0x6C) / 4096;
    v[2] = v[2] * AF(arg0, s16, 0x74) / 4096;
    if (v[0] > 0xFFFF) {
        v[0] = 0xFFFF;
    }
    if (v[1] > 0xFFFF) {
        v[1] = 0xFFFF;
    }
    if (v[2] > 0xFFFF) {
        v[2] = 0xFFFF;
    }
    AF(AF(arg0, void *, 0x20), s16, 0x18) = v[0];
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = v[1];
    AF(AF(arg0, void *, 0x20), s16, 0x1C) = v[2];
}

void func_80147264(u8 *arg0) {
    D_80126BB8 = AF(arg0, u16, 0);
    D_80126BBA = AF(arg0, u16, 2);
    D_80126BBC = AF(arg0, u16, 4);
}

void func_80147290(void) {
    D_80126BB8 = 0x1000;
    D_80126BBA = 0x1000;
    D_80126BBC = 0x1000;
}

s32 func_801472B4(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x7E) & 0xFFFD;
    AF(arg0, u16, 0x7E) = temp_v0;
    return (s32) temp_v0;
}

s32 func_801472C8(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x7E) | 2;
    AF(arg0, u16, 0x7E) = temp_v0;
    return (s32) temp_v0;
}

void func_801472DC(void) {
    D_8012707C = 0x451;
}

void func_801472F0(s32 arg0) {
    D_8012707C = arg0;
}

s32 func_80147300(arg0, arg1)
s32 arg0;
s32 arg1;
{
    return func_80147364(arg0 & 0xFFFF, 0);
}

void func_80147324(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 == D_8012707C) {
        D_8012707C = 0;
        return;
    }
    func_80147364(temp_a0, 0);
}

void func_8012E5CC(SVECTOR *v, u16 a, u16 b);

s32 func_80147364(s32 arg0, s32 arg1) {
    SVECTOR v;
    Player *p = &D_80126B58;

    if (D_800B9A08 == 0x308D) {
        func_80015978(p->pos, &v);
        func_8012E5CC(&v, arg0, arg1);
    } else {
        func_8002D4C8(arg0 & 0xFFFF, arg1 & 0xFFFF);
    }
}

void func_801473DC(s32 arg0) {
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s32, 0x10) = 0;
}

void func_801473EC(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    if ((AF(arg0, s32, 0x10) != 0) || (AF(arg0, s32, 0x14) != 0) || (AF(arg0, s32, 0x18) != 0)) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x80000000);
    }
}

s32 func_80147460(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + AF(arg0, s32, 0x34);
    AF(arg0, s32, 8) = temp_v0;
    return temp_v0;
}

s32 func_80147478(arg0, arg1, arg2)
s32 arg0;
s32 arg1;
s32 arg2;
{
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x44) & 0x40000000;
    if (var_v0 == 0) {
        func_80147514();
        func_80147628(arg0);
        var_v0 = AF(arg0, s32, 0x44) | 0x40000000;
        AF(arg0, s32, 0x44) = var_v0;
    }
    return var_v0;
}

void func_801474D8(s32 arg0) {
    AF(arg0, s16, 0x136) = 0;
    AF(arg0, s16, 0x134) = 0;
    AF(arg0, s16, 0x132) = 0;
    AF(arg0, s16, 0x130) = 0;
}

void func_801474EC(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AF(arg0, s16, 0x11C) = 0;
    AF(arg0, s16, 0x11A) = 0;
    AF(arg0, s16, 0x118) = 0;
    AF(arg0, s16, 0x124) = 0;
    AF(arg0, s16, 0x122) = 0;
    AF(arg0, s16, 0x120) = 0;
    AF(arg0, s16, 0x12C) = 0;
    AF(arg0, s16, 0x12A) = 0;
    AF(arg0, s16, 0x128) = 0;
}

extern void func_800129CC();

void func_80147514(s32 arg0) {
    SVECTOR v;
    SVECTOR unused; /* MATCH-TRICK: unused local, the original frame is 8 bytes bigger */

    v = AF(arg0, SVECTOR, 0x120);
    if ((v.vx | v.vy | v.vz) == 0) {
        v.vy = -0xFFF;
    }
    if (AF(arg0, s16, 0x12E) != 0) {
        v.vx += AF(arg0, s16, 0x128);
        v.vy += AF(arg0, s16, 0x12A);
        v.vz += AF(arg0, s16, 0x12C);
    }
    AF(arg0, s16, 0x118) = func_80012C6C(AF(arg0, s16, 0x118), v.vx, 8);
    AF(arg0, s16, 0x11A) = func_80012C6C(AF(arg0, s16, 0x11A), v.vy, 8);
    AF(arg0, s16, 0x11C) = func_80012C6C(AF(arg0, s16, 0x11C), v.vz, 8);
    v.vx = AF(arg0, s16, 0x118);
    v.vy = AF(arg0, s16, 0x11A);
    v.vz = AF(arg0, s16, 0x11C);
    func_800129CC(&v, arg0 + 0x100);
}

void func_80147628(u8 *arg0) {
    u8 *p;
    u8 *m;
    s32 v;

    p = AF(arg0, u8 *, 0x20);
    m = p + 0x34;
    func_80013F3C(m);
    func_80012558(m, AF(arg0, s16, 0x102));
    func_800126C4(m, AF(arg0, s16, 0x100));
    func_800123F0(m, AF(arg0, s16, 0x104));
    if (AF(arg0, u16, 0x136) & 2) {
        v = AF(arg0, s16, 0x132);
    } else {
        v = AF(p, s16, 0x12);
    }
    func_80012558(m, v);
    if (AF(arg0, u16, 0x136) & 1) {
        v = AF(arg0, s16, 0x130);
    } else {
        v = AF(p, s16, 0x10);
    }
    func_800126C4(p + 0x34, v);
    if (AF(arg0, u16, 0x136) & 4) {
        v = AF(arg0, s16, 0x134);
    } else {
        v = AF(p, s16, 0x14);
    }
    func_800123F0(p + 0x34, v);
}

void func_80147718(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_s0 = temp_s1 + 0x34;
    func_80013F3C(temp_s0, arg1);
    func_800126C4(temp_s0, (s32) AF(temp_s1, s16, 0x10));
    func_80012558(temp_s0, (s32) AF(temp_s1, s16, 0x12));
    func_800123F0(temp_s0, (s32) AF(temp_s1, s16, 0x14));
    AF(temp_s1, u16, 0x2C) = (u16) (AF(temp_s1, u16, 0x2C) | 1);
}

void func_80147788(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) ((AF(temp_v1, u16, 0x10) + arg1) & 0xFFF);
}

void func_801477A8(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + arg1) & 0xFFF);
}

void func_801477C8(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) ((AF(temp_v1, u16, 0x14) + arg1) & 0xFFF);
}

void func_801477E8(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x34) = arg1;
    if (arg1 < -0x1F0000) {
        AF(arg0, s32, 0x34) = -0x1F0000;
        return;
    }
    if (arg1 > 0x1F0000) {
        AF(arg0, s32, 0x34) = 0x1F0000;
    }
}

void func_80147814(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x34) + arg1;
    AF(arg0, s32, 0x34) = temp_v0;
    if (arg1 < 0) {
        if (temp_v0 < -0x1F0000) {
            AF(arg0, s32, 0x34) = -0x1F0000;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x34) > 0x1F0000)) {
        AF(arg0, s32, 0x34) = 0x1F0000;
    }
}

void func_80147860(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80147928();
    func_8014799C(arg0, arg2);
    func_80147A10(arg0, arg3);
}

void func_801478B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80147948(arg0, arg1, 0x7FFFFFFF);
    func_801479BC(arg0, arg2, 0x7FFFFFFF);
    func_80147A30(arg0, arg3, 0x7FFFFFFF);
}

void func_80147928(arg0, arg1)
s32 arg0;
s32 arg1;
{
    func_80147948(arg0, arg1, 0x1F0000);
}

void func_80147948(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x24) + arg1;
    AF(arg0, s32, 0x24) = temp_v0;
    if (arg1 < 0) {
        temp_v1 = -arg2;
        if (temp_v1 >= temp_v0) {
            AF(arg0, s32, 0x24) = temp_v1;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x24) >= arg2)) {
        AF(arg0, s32, 0x24) = arg2;
    }
}

s32 func_8014799C(s32 arg0, s32 arg1) {
    func_801479BC(arg0, arg1, 0x1F0000);
}

void func_801479BC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x28) + arg1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (arg1 < 0) {
        temp_v1 = -arg2;
        if (temp_v1 >= temp_v0) {
            AF(arg0, s32, 0x28) = temp_v1;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x28) >= arg2)) {
        AF(arg0, s32, 0x28) = arg2;
    }
}

s32 func_80147A10(s32 arg0, s32 arg1) {
    func_80147A30(arg0, arg1, 0x1F0000);
}

void func_80147A30(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x2C) + arg1;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (arg1 < 0) {
        temp_v1 = -arg2;
        if (temp_v1 >= temp_v0) {
            AF(arg0, s32, 0x2C) = temp_v1;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x2C) >= arg2)) {
        AF(arg0, s32, 0x2C) = arg2;
    }
}

s32 func_80147A84(arg0, arg1)
s32 arg0;
s32 arg1;
{
    return func_80147AD4(arg0, 0, 0, 0);
}

void func_80147AAC(s32 arg0) {
    func_80147C30(arg0, 0, 0, 0);
}

extern void func_80147CC8();
extern s32 func_80147B5C();

s32 func_80147AD4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18[4];

    func_80147CC8(arg0, arg1, arg2, arg3, sp18);
    return func_80147B5C(arg0, sp18);
}

extern void func_80147D38();

void func_80147B18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18[4];

    func_80147D38(arg0, arg1, arg2, arg3, sp18);
    func_80147B5C(arg0, sp18);
}

s32 func_80147B5C(u8 *arg0, s32 *arg1) {
    if (AF(arg0, s32, 0x44) & 0x400000) {
        D_80127090 = AF(arg0, s32, 0x24);
    } else {
        D_80127090 = arg1[0];
    }
    if (AF(arg0, s32, 0x44) & 0x800000) {
        D_80127094 = AF(arg0, s32, 0x28);
    } else {
        D_80127094 = arg1[1];
    }
    if (AF(arg0, s32, 0x44) & 0x1000000) {
        D_80127098 = AF(arg0, s32, 0x2C);
    } else {
        D_80127098 = arg1[2];
    }
    AF(arg0, s32, 0x10) = D_80127090;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    D_80127090 = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void func_80147C30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18[4];
    s32 *p = &D_80127090;

    func_80147CC8(arg0, arg1, arg2, arg3, sp18);
    p[0] = sp18[0];
    p[1] = sp18[1];
    p[2] = sp18[2];
    AF(arg0, s32, 0x10) = D_80127090;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    D_80127090 = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

extern void func_80147DC0();

void func_80147CC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80147928(arg0, arg1);
    func_8014799C(arg0, arg2);
    func_80147A10(arg0, arg3);
    func_80147DC0(arg0, arg4);
}

void func_80147D38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80147948(arg0, arg1, 0x7FFFFFFF);
    func_801479BC(arg0, arg2, 0x7FFFFFFF);
    func_80147A30(arg0, arg3, 0x7FFFFFFF);
    func_80147DC0(arg0, arg4);
}

extern void ApplyMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);

void func_80147DC0(u8 *arg0, VECTOR *arg1) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the matrix */
    MATRIX m;
    MATRIX *mp;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0x20);
    mp = &m;
    func_80013F3C(mp);
    func_800126C4(mp, AF(temp_s0, s16, 0x10));
    func_80012558(mp, AF(temp_s0, s16, 0x12));
    func_800123F0(mp, AF(temp_s0, s16, 0x14));
    ApplyMatrixLV(mp, (VECTOR *)(arg0 + 0x24), arg1);
}

extern MATRIX *RotMatrixX(s32 r, MATRIX *m);
extern MATRIX *RotMatrixY(s32 r, MATRIX *m);
extern MATRIX *RotMatrixZ(s32 r, MATRIX *m);

void func_80147E44(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    VECTOR v;
    MATRIX m;
    u8 *temp_s2;
    s32 *p = &D_80127090;

    temp_s2 = AF(arg0, u8 *, 0x20);
    func_80147928();
    func_8014799C((s32) arg0, arg2);
    func_80147A10((s32) arg0, arg3);
    func_80013F3C(&m);
    RotMatrixY(AF(temp_s2, s16, 0x12), &m);
    RotMatrixX(AF(temp_s2, s16, 0x10), &m);
    RotMatrixZ(AF(temp_s2, s16, 0x14), &m);
    ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
    p[0] = v.vx;
    p[1] = v.vy;
    p[2] = v.vz;
    AF(arg0, s32, 0x10) = D_80127090;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    D_80127090 = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void func_80147F50(s32 arg0) {
    func_80147F78(arg0, 0, 0, 0);
}

void func_80147F78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 unused[0x40]; /* MATCH-TRICK: frame pad, the original's frame has 64 unused bytes */

    func_80147928();
    func_8014799C(arg0, arg2);
    func_80147A10(arg0, arg3);
    D_80127090 = AF(arg0, s32, 0x24);
    D_80127094 = AF(arg0, s32, 0x28);
    D_80127098 = AF(arg0, s32, 0x2C);
    AF(arg0, s32, 0x10) = ((VECTOR *)&D_80127090)->vx;
    AF(arg0, s32, 0x14) = ((VECTOR *)&D_80127090)->vy;
    AF(arg0, s32, 0x18) = ((VECTOR *)&D_80127090)->vz;
    D_80127090 = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

s32 func_80148038(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;

    var_a1 = arg1;
    temp_v1 = AF(arg0, s32, 0x34);
    if (temp_v1 < 0) {
        if ((var_a1 < 0) && (temp_v1 <= -0x1F0000)) {
            var_a1 = 0;
        }
    } else if ((var_a1 > 0) && (temp_v1 > 0x1EFFFF)) {
        var_a1 = 0;
    }
    temp_v0 = AF(arg0, s32, 0x34) + var_a1;
    AF(arg0, s32, 0x34) = temp_v0;
    return temp_v0;
}

void func_80148094(u8 *arg0, u8 *arg1, u8 *arg2) {
    VECTOR v;
    MATRIX m;
    u8 *temp_s4;
    s16 a;
    s32 b;
    s32 t;
    s32 r;
    s32 t2;

    temp_s4 = AF(arg0, u8 *, 0x20);
    if (AF(arg1, s16, 0) != 0 || AF(arg1, s16, 4) != 0) {
        a = ratan2(-AF(arg1, s16, 4), -AF(arg1, s16, 0)) + 0x400;
        func_80013F3C(&m);
        func_80012558(&m, AF(temp_s4, s16, 0x12));
        ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
        b = (s16)func_80012A60(a, (s16)(ratan2(v.vz, v.vx) + 0x400));
        t = AF(arg0, s32, 0x24);
        v.vx = t;
        if (t < 0) {
            v.vx = -t;
        }
        t2 = AF(arg0, s32, 0x2C);
        v.vz = t2;
        if (t2 < 0) {
            v.vz = -t2;
        }
        r = csqrt(AF(arg1, s16, 0) * AF(arg1, s16, 0) + AF(arg1, s16, 4) * AF(arg1, s16, 4)) / 64;
        r = ratan2(AF(arg1, s16, 2), r);
        if (b < 0x200) {
            if (v.vx == v.vz) {
                v.vx = AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) * -r / 1024;
            } else if (v.vz < v.vx) {
                v.vx = AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C);
            } else {
                v.vx = AF(arg0, s32, 0x24);
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) * -r / 1024;
            }
        } else if (b > 0x200) {
            if (v.vx == v.vz) {
                v.vx = AF(arg0, s32, 0x24) + AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) + AF(arg0, s32, 0x2C) * -r / 1024;
            } else if (v.vz < v.vx) {
                v.vx = AF(arg0, s32, 0x24) + AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C);
            } else {
                v.vx = AF(arg0, s32, 0x24);
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) + AF(arg0, s32, 0x2C) * -r / 1024;
            }
        } else {
            v.vx = AF(arg0, s32, 0x24);
            v.vy = 0;
            v.vz = AF(arg0, s32, 0x2C);
        }
        AF(arg2, s32, 0) = v.vx;
        AF(arg2, s32, 4) = v.vy;
        AF(arg2, s32, 8) = v.vz;
    } else {
        AF(arg2, s32, 0) = AF(arg0, s32, 0x24);
        AF(arg2, s32, 4) = AF(arg0, s32, 0x28);
        AF(arg2, s32, 8) = AF(arg0, s32, 0x2C);
    }
}

extern s32 func_80133784();

void func_801483E8(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;

    func_80015978(arg0 + 4, &a);
    b.vx = a.vx;
    b.vy = a.vy + 8;
    b.vz = a.vz;
    if (func_80133784(1, &a, &b) == 0x2000 && AF(arg0, s16, 6) == b.vx && AF(arg0, s16, 0xA) == b.vy &&
        AF(arg0, s16, 0xE) == b.vz && ((u8 *)&b)[6] == 0) {
        func_80015978(arg0 + 4, arg0 + 0xA0);
    }
}

void func_801484B0(s32 arg0, s32 arg1) {
    func_801485B8(AF(D_80126B78, s32, 0x20) - 0x10, arg0, arg1);
}

s32 func_801484E8(arg0, arg1, arg2)
s32 arg0;
s32 arg1;
s32 arg2;
{
    func_801485B8(func_80154358((s32) &D_80126B58) - 0x10, arg0, arg1);
}

void func_80148534(s32 arg0, s32 arg1) {
    func_801485B8(AF(D_80126B78, s32, 0x20) - 8, arg0, arg1);
}

s32 func_8014856C(arg0, arg1, arg2)
s32 arg0;
s32 arg1;
s32 arg2;
{
    func_801485B8(func_80154358((s32) &D_80126B58) - 8, arg0, arg1);
}

void func_801485B8(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg1, s16, 0) = (s16) (s8) AF(arg0, u8, 0);
    AF(arg1, s16, 2) = (s16) (s8) AF(arg0, u8, 1);
    AF(arg1, s16, 4) = (s16) (s8) AF(arg0, u8, 2);
    AF(arg2, s16, 0) = (s16) (s8) AF(arg0, u8, 3);
    AF(arg2, s16, 2) = (s16) (s8) AF(arg0, u8, 4);
    AF(arg2, s16, 4) = (s16) (s8) AF(arg0, u8, 5);
}

void func_80148634(s32 arg0) {
    AF(arg0, s16, 0xAA) = 0;
    AF(arg0, s16, 0xAC) = 0;
    AF(arg0, u16, 0xAE) = 0x8080;
}

void func_80148648(s32 arg0, s32 arg1) {
    s32 k;
    s32 a;
    s32 b;
    u16 c;
    s32 t;

    if (D_800B9A64 == 0) {
        k = arg1 & 0xFF;
        AF(arg0, u8, 0xA9) = GetPadTypeAlt(k);
        AF(arg0, u16, 0xAA) = GetPadHeld(k);
        AF(arg0, u16, 0xAC) = GetPadPressed(k);
        k = (GetPadByte(k, 4) & 0xFF) | ((GetPadByte(k, 5) & 0xFF) << 8);
        AF(arg0, u16, 0xAE) = k;
    } else {
        AF(arg0, u8, 0xA9) = 0x41;
        GetDemoPad(arg0 + 0xAA, arg0 + 0xAC);
    }
    if (AF(arg0, u8, 0x1C5) != 0) {
        AF(arg0, u16, 0xAA) = 0;
        AF(arg0, u16, 0xAC) = 0;
        AF(arg0, u16, 0xAE) = 0x8080;
    }
    if (func_800CF8B4() == 0) {
        if (AF(arg0, u16, 0) != 0x1E && AF(arg0, u16, 0) != 0x1A) {
            AF(arg0, u16, 0xAA) = 0;
            AF(arg0, u16, 0xAC) = 0;
            AF(arg0, u16, 0xAE) = 0x8080;
        }
    }
    t = AF(arg0, u8, 0xA9);
    if ((t == 0x53 || (t >= 0x54 && t == 0x73)) && (AF(arg0, u16, 0xAA) & 0xF000)) {
        AF(arg0, u8, 0xA9) = 0x41;
    }
    if (AF(arg0, s32, 0x1B0) != 0) {
        a = AF(arg0, u16, 0xAA);
        c = AF(arg0, u16, 0xAE);
        b = AF(arg0, u16, 0xAC);
        AF(arg0, u16, 0xAA) = SW1(a);
        AF(arg0, u16, 0xAC) = SW1(b);
        if ((c & 0xFF) != 0x80) {
            c = (~(c & 0xFF) & 0xFF) | (c & 0xFF00);
        }
        AF(arg0, u16, 0xAE) = c;
    }
}

s32 func_801487F4(s32 arg0) {
    return (s32) AF(arg0, u16, 0xAA);
}

s32 func_80148800(s32 arg0) {
    return (s32) AF(arg0, u16, 0xAC);
}

u8 func_8014880C(u8 *arg0) {
    return AF(arg0, u8, 0xAE);
}

u32 func_80148818(u8 *arg0) {
    return (u16) AF(arg0, u16, 0xAE) >> 8;
}

extern s32 SquareRoot0();

u8 func_80148824(u8 *arg0) {
    s16 x;
    s16 y;
    x = (AF(arg0, u16, 0xAE) >> 8) - 0x80;
    y = (u8)AF(arg0, u16, 0xAE) - 0x80;
    if (x == 0) {
        if (y < 0) {
            return -y;
        }
        return y;
    }
    if (y == 0) {
        if (x < 0) {
            return -x;
        }
        return x;
    }
    return SquareRoot0(x * x + y * y);
}

s32 func_801488A8(u8 *arg0) {
    u16 temp_a0;
    s32 lo;

    switch (arg0[0xA9]) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0xF000;
    case 0x53:
    case 0x73:
        temp_a0 = AF(arg0, u16, 0xAE);
        lo = temp_a0 & 0xFF;
        if (lo != 0x80 || (temp_a0 >> 8) != lo) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

s32 func_8014891C(s32 arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x1000;
    case 0x53:
    case 0x73:
        return (AF(arg0, u16, 0xAE) >> 8) < 0x40;
    }
    return 0;
}

s32 func_80148980(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x4000;
    case 0x53:
    case 0x73:
        return (AF(arg0, u16, 0xAE) >> 8) >= 0xC1;
    }
    return 0;
}

s32 func_801489E8(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x8000;
    case 0x53:
    case 0x73:
        return AF(arg0, u8, 0xAE) < 0x40;
    }
    return 0;
}

s32 func_80148A48(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x2000;
    case 0x53:
    case 0x73:
        return AF(arg0, u8, 0xAE) >= 0xC1;
    }
    return 0;
}

s32 func_80148AAC(s32 arg0) {
    u16 var_v0;
    void *temp_v1;

    var_v0 = func_80148AFC(arg0) & 0xFF;
    if (var_v0 != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        var_v0 = (AF(temp_v1, u16, 0x12) + 0xFA) & 0xFF8;
        AF(temp_v1, u16, 0x12) = var_v0;
    }
    return (s32) var_v0;
}

extern void (*D_8018F004[])();

s32 func_80148AFC(u8 *arg0) {
    u8 *s;
    s16 a;

    s = AF(arg0, u8 *, 0x20);
    a = (ratan2(AF(D_801151D4, s32, 0x44) - AF(D_801151D4, s32, 0x50), AF(D_801151D4, s32, 0x48) - AF(D_801151D4, s32, 0x3C)) - 0x400) & 0xFFF;
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return (u8)((s32 (*)())D_8018F004[AF(arg0, u16, 0xAA) >> 12])(arg0, a);
    case 0x53:
    case 0x73:
        if ((AF(arg0, u16, 0xAE) & 0xFF) == 0x80 && (AF(arg0, u16, 0xAE) >> 8) == (AF(arg0, u16, 0xAE) & 0xFF)) {
            return 0;
        }
        AF(s, s16, 0x12) = (a + ratan2((AF(arg0, u16, 0xAE) & 0xFF) - 0x80, 0x80 - (AF(arg0, u16, 0xAE) >> 8))) & 0xFFF;
        return 1;
    }
}

s32 func_80148C18(void) {
    return 0;
}

s32 func_80148C20(u8 *arg0, s16 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = arg1;
    return 1;
}

s32 func_80148C34(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x400) & 0xFFF);
    return 1;
}

s32 func_80148C4C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x200) & 0xFFF);
    return 1;
}

s32 func_80148C64(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x800) & 0xFFF);
    return 1;
}

s32 func_80148C7C(void) {
    return 0;
}

s32 func_80148C84(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x600) & 0xFFF);
    return 1;
}

s32 func_80148C9C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x400) & 0xFFF);
    return 1;
}

s32 func_80148CB4(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x400) & 0xFFF);
    return 1;
}

s32 func_80148CCC(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x200) & 0xFFF);
    return 1;
}

s32 func_80148CE4(void) {
    return 0;
}

s32 func_80148CEC(void) {
    return 0;
}

s32 func_80148CF4(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x600) & 0xFFF);
    return 1;
}

s32 func_80148D0C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x400) & 0xFFF);
    return 1;
}

s32 func_80148D24(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x800) & 0xFFF);
    return 1;
}

s32 func_80148D3C(void) {
    return 0;
}

extern u8 D_80126C01;
extern u16 D_80126C02;
extern u16 D_80126C06;
extern void (*D_8018F044[])();

s16 func_80148D44(void) {
    s16 a;

    a = (ratan2(AF(D_801151D4, s32, 0x44) - AF(D_801151D4, s32, 0x50), AF(D_801151D4, s32, 0x48) - AF(D_801151D4, s32, 0x3C)) - 0x400) & 0xFFF;
    switch (D_80126C01) {
    case 0x41:
        return ((s32 (*)())D_8018F044[D_80126C02 >> 12])(a);
    case 0x53:
    case 0x73:
        if ((D_80126C06 & 0xFF) == 0x80 && (D_80126C06 >> 8) == 0x80) {
            return -1;
        }
        return (a + ratan2((D_80126C06 & 0xFF) - 0x80, 0x80 - (D_80126C06 >> 8))) & 0xFFF;
    }
}

extern void (*D_8018F084[])();

s32 func_80148E54(u8 *arg0) {
    s16 a;

    a = (ratan2(AF(D_801151D4, s32, 0x44) - AF(D_801151D4, s32, 0x50), AF(D_801151D4, s32, 0x48) - AF(D_801151D4, s32, 0x3C)) - 0x400) & 0xFFF;
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return (s16)((s32 (*)())D_8018F084[AF(arg0, u16, 0xAA) >> 12])(a);
    case 0x53:
    case 0x73:
        if ((AF(arg0, u16, 0xAE) & 0xFF) == 0x80 && (AF(arg0, u16, 0xAE) >> 8) == (AF(arg0, u16, 0xAE) & 0xFF)) {
            return -1;
        }
        return (a + ratan2((AF(arg0, u16, 0xAE) & 0xFF) - 0x80, 0x80 - (AF(arg0, u16, 0xAE) >> 8))) & 0xFFF;
    }
}

s32 func_80148F60(void) {
    return -1;
}

s16 func_80148F68(s16 arg0) {
    return arg0;
}

s32 func_80148F74(s32 arg0) {
    return (arg0 + 0x400) & 0xFFF;
}

s32 func_80148F80(s32 arg0) {
    return (arg0 + 0x200) & 0xFFF;
}

s32 func_80148F8C(s32 arg0) {
    return (arg0 + 0x800) & 0xFFF;
}

s32 func_80148F98(void) {
    return -1;
}

s32 func_80148FA0(s32 arg0) {
    return (arg0 + 0x600) & 0xFFF;
}

s32 func_80148FAC(s32 arg0) {
    return (arg0 + 0x400) & 0xFFF;
}

s32 func_80148FB8(s32 arg0) {
    return (arg0 - 0x400) & 0xFFF;
}

s32 func_80148FC4(s32 arg0) {
    return (arg0 - 0x200) & 0xFFF;
}

s32 func_80148FD0(void) {
    return -1;
}

s32 func_80148FD8(void) {
    return -1;
}

s32 func_80148FE0(s32 arg0) {
    return (arg0 - 0x600) & 0xFFF;
}

s32 func_80148FEC(s32 arg0) {
    return (arg0 - 0x400) & 0xFFF;
}

s32 func_80148FF8(s32 arg0) {
    return (arg0 - 0x800) & 0xFFF;
}

s32 func_80149004(void) {
    return -1;
}

s32 func_8014900C(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) | 0x8000;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_80149020(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) & 0x7FFF;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_80149034(arg0, arg1)
s32 arg0;
s32 arg1;
{
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) | 0x4000;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_80149048(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) & 0xBFFF;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

void func_8014905C(u8 *arg0) {
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x10C) = 0;
    AF(arg0, s16, 0x10A) = 0;
    AF(arg0, s16, 0x108) = 0;
}

extern void func_801490E0();
extern void func_801490E8();
extern void func_801490F0();

void func_80149078(s32 arg0, s32 arg1x, s32 arg2x, s32 arg3x) {
    s16 arg1 = arg1x;
    s16 arg2 = arg2x;
    s16 arg3 = arg3x;
    func_801490E0(arg0, arg1);
    func_801490E8(arg0, arg2);
    func_801490F0(arg0, arg3);
}

void func_801490E0(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x108) = arg1;
}

void func_801490E8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x10A) = arg1;
}

void func_801490F0(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x10C) = arg1;
}

void func_801490F8(u8 *arg0, s16 arg1) {
    AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + func_80012B04((s32) AF(arg0, s16, 0x100), (s32) AF(arg0, s16, 0x108), (s32) arg1));
    AF(arg0, s16, 0x102) = (s16) ((u16) AF(arg0, s16, 0x102) + func_80012B04((s32) AF(arg0, s16, 0x102), (s32) AF(arg0, s16, 0x10A), (s32) arg1));
    AF(arg0, s16, 0x104) = (s16) ((u16) AF(arg0, s16, 0x104) + func_80012B04((s32) AF(arg0, s16, 0x104), (s32) AF(arg0, s16, 0x10C), (s32) arg1));
}

extern s32 func_801491C4();

s32 func_80149184(s32 arg0) {
    return (AF(AF(arg0, void *, 0x20), u16, 0x12) - func_801491C4(arg0)) & 0xFFF;
}

s32 func_801491C4()
{
    return (s16)ratan2(AF(D_801151D4, s32, 0x3C) - AF(D_801151D4, s32, 0x48), AF(D_801151D4, s32, 0x44) - AF(D_801151D4, s32, 0x50));
}

void func_80149204(u8 *arg0) {
    AF(arg0, s32, 0x1E4) = 0;
    AF(arg0, s32, 0x1DC) = 0;
}

void func_80149210(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x1E4) = arg1 | (arg1 << 16);
    AF(arg0, s16, 0x1E4) = arg1;
    AF(arg0, s16, 0x1E6) = arg1;
}

void func_80149228(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_a1;

    if (AF(arg0, s16, 0x1E4) == 0) {
        AF(arg0, s32, 0x1DC) = 0;
        AF(arg0, s32, 0x1E0) = 0;
        AF(arg0, s16, 0x1E4) = (s16) AF(arg0, u16, 0x1E6);
    }
    temp_a1 = AF(arg0, u16, 0xAC);
    if (temp_a1 != 0) {
        temp_v0 = AF(arg0, s32, 0x1E0);
        AF(arg0, s32, 0x1E0) = (s32) temp_a1;
        AF(arg0, s16, 0x1E4) = (s16) AF(arg0, u16, 0x1E6);
        AF(arg0, s32, 0x1DC) = (s32) (temp_a1 & temp_v0);
    }
    AF(arg0, s16, 0x1E4) = (s16) ((u16) AF(arg0, s16, 0x1E4) - 1);
}

s32 func_80149284(u8 *arg0, s32 arg1) {
    return AF(arg0, s32, 0x1DC) & arg1;
}

void func_80149290(s32 arg0, s32 arg1, s32 arg2) {
    s32 v[3];

    v[0] = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
    v[1] = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    v[2] = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    AF(AF(arg0, u8 *, 0x20), s32, 0x48) = AF(arg0, s16, 6);
    AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = AF(arg0, s16, 0xA);
    AF(AF(arg0, u8 *, 0x20), s32, 0x50) = AF(arg0, s16, 0xE);
    func_80149350(arg0, arg1, arg2);
    AF(AF(arg0, u8 *, 0x20), s32, 0x48) = v[0];
    AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = v[1];
    AF(AF(arg0, u8 *, 0x20), s32, 0x50) = v[2];
}

s32 func_80149350(s32 arg0, s32 arg1, s32 arg2) {
    return func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

static inline s32 h_80149350(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    return func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

void func_80149374(u8 *arg0, s32 arg1) {
    SVECTOR sp10;
    SVECTOR sp18;

    func_80015978(arg1, &sp10);
    h_80149350(arg0, &sp10, &sp18);
    func_80015954(&sp18, arg1);
}

void func_801493D0(u8 *arg0, s32 arg1, s32 arg2) {
    SVECTOR sp10;
    SVECTOR sp18;

    func_80015978(arg1, &sp10);
    h_80149350(arg0, &sp10, &sp18);
    func_80015954(&sp18, arg2);
}

void func_8014942C(u8 *arg0, s32 arg1, s32 arg2) {
    func_8012F038(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

void func_80149450(u8 *arg0, u8 *arg1) {
    SVECTOR sp10;
    SVECTOR sp18;

    sp18.vx = AF(arg1, s16, 2);
    sp18.vy = AF(arg1, s16, 6);
    sp18.vz = AF(arg1, s16, 0xA);
    func_8012F038(AF(arg0, s32, 0x20) + 0x34, &sp18, &sp10);
    AF(arg1, s16, 2) = sp10.vx;
    AF(arg1, s16, 6) = sp10.vy;
    AF(arg1, s16, 0xA) = sp10.vz;
}

void func_801494CC(u8 *arg0, u8 *arg1, u8 *arg2) {
    u16 out[4];
    u16 in[4];

    in[0] = AF(arg1, u16, 2);
    in[1] = AF(arg1, u16, 6);
    in[2] = AF(arg1, u16, 0xA);
    func_8012F038(AF(arg0, s32, 0x20) + 0x34, in, out);
    AF(arg2, u16, 2) = out[0];
    AF(arg2, u16, 6) = out[1];
    AF(arg2, u16, 0xA) = out[2];
}

void func_80149544(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;

    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10, arg3);
    func_8012EF70((s32) &sp10, arg2);
}

void func_80149584(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;

    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10, arg3);
    func_8012EFB8((s32) &sp10, arg2);
}

static inline void h_801495C4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10);
    func_8012EF70((s32) &sp10, arg2);
}

void func_801495C4(u8 *arg0, u8 *arg1) {
    u16 in[4];
    u16 out[4];

    in[0] = AF(arg1, u16, 2);
    in[1] = AF(arg1, u16, 6);
    in[2] = AF(arg1, u16, 0xA);
    h_801495C4(arg0, (s32) in, (s32) out);
    AF(arg1, u16, 2) = out[0];
    AF(arg1, u16, 6) = out[1];
    AF(arg1, u16, 0xA) = out[2];
}

static inline void h_8014964C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10);
    func_8012EFB8((s32) &sp10, arg2);
}

void func_8014964C(u8 *arg0, u8 *arg1) {
    u16 in[4];
    u16 out[4];

    in[0] = AF(arg1, u16, 2);
    in[1] = AF(arg1, u16, 6);
    in[2] = AF(arg1, u16, 0xA);
    h_8014964C(arg0, (s32) in, (s32) out);
    AF(arg1, u16, 2) = out[0];
    AF(arg1, u16, 6) = out[1];
    AF(arg1, u16, 0xA) = out[2];
}

s32 func_801496D4(s32 arg0) {
    s32 r;

    if (AF(arg0, s32, 0x178) == 0) {
        r = AF(arg0, u16, 0xAC) & 0x40;
        if (r != 0) {
            r = 1;
        }
    } else {
        r = 0;
    }
    return r;
}

s32 func_80149704(s32 arg0) {
    return func_8015AD08();
}

s32 func_80149724(s32 arg0) {
    return func_8015ACC4();
}

s32 func_80149744(s32 arg0) {
    if (!(AF(arg0, s32, 0x44) & 4) && D_80078EBF >= 0x80 && (AF(arg0, u16, 0xAC) & 0x80)) {
        return 1;
    }
    return 0;
}

s32 func_80149788(s32 arg0) {
    return func_8015F7A0();
}

extern s32 func_8014CB7C();
extern s32 func_8014C088();

s32 func_801497A8(arg0)
    u8 *arg0;
{
    u8 *c = &D_80078E78;

    if (AF(arg0, u16, 0) == 0x1A) {
        return 0;
    }
    if (func_8014CB7C()) {
        return 0;
    }
    if (D_80078EC1 == 0xF && func_8014C088(arg0, 0xA)) {
        return 0;
    }
    if (AF(arg0, s32, 0x44) & 0x404) {
        goto out;
    }
    if (func_80165658(arg0, c[0x49]) & 0x80) {
        goto out;
    }
    if (AF(arg0, u16, 0xAC) & 0x20) {
        return 1;
    }
out:
    return 0;
}

s32 func_80149864(s32 arg0) {
    return func_801653B8();
}

s32 func_8016F1AC(s32 arg0);

s32 func_80149884(s32 arg0) {
    s32 r;
    if (D_800B9A08 == 0x308F) {
        r = 0;
    } else {
        r = func_8016F1AC(arg0) == 0;
    }
    return r;
}

s32 func_801498C0(s32 arg0) {
    return func_80160B00();
}

extern s32 func_80149AA8();
extern s32 func_80149B54();
extern s32 func_8015DAC4();
extern void func_8015554C();

s32 func_801498E0(s32 arg0) {
    struct { s16 a, b, c, d; s32 e, f, g; } sp10;

    if (func_80149AA8(arg0) != 0 || func_80149B54(arg0) != 0) {
        sp10.a = 8;
        sp10.e = arg0;
        sp10.b = 0;
        sp10.c = -0x1E;
        sp10.d = 0;
        sp10.f = 0;
        sp10.g = 0;
        func_80146750(&sp10);
        return 1;
    }
    return 0;
}

extern void func_800CCF28();

s32 func_80149954(s32 arg0) {
    SVECTOR v;
    struct { s16 a, b, c, d; s32 e, f, g; } sp18;

    if (AF(arg0, s32, 0x44) & 0x404) {
        return 0;
    }
    if (!(AF(arg0, u16, 0xAA) & 0x90)) {
        if (D_800B9A08 == 0x308D) {
            func_80015978(D_80126B58.pos, &v);
            func_8012E5CC(&v, 4, 0x8E0);
        } else {
            func_8002D4C8(4, 0x8E0);
        }
        return 0;
    }
    if (AF(arg0, u16, 0xAC) & 0x90) {
        if (D_8012707C == 0x8E0) {
            D_8012707C = 0;
        } else {
            func_80147364(0x8E0, 0);
        }
    }
    func_800CCF28(arg0);
    sp18.a = 0x12;
    sp18.e = arg0;
    sp18.b = 0;
    sp18.c = -0x1E;
    sp18.d = 0;
    sp18.f = 0;
    sp18.g = 0;
    func_80146750(&sp18);
    return 1;
}

s32 func_80149A64(s32 arg0) {
    if (func_80149AA8(arg0) != 0 || func_80149B54(arg0) != 0) {
        return 1;
    }
    return 0;
}

s32 func_80149AA8(s32 arg0) {
    if (!(AF(arg0, s32, 0x44) & 0x404)) {
        {
            s32 bt = AF(arg0, u16, 0xAC) & 0x80;

            return bt != 0;
        }
    }
    return 0;
}

void func_80149AD4(s32 arg0) {
    u8 unused[0x18]; /* MATCH-TRICK: frame pad, the original's frame holds 0x18 unused bytes */

    if (AF(arg0, s32, 0x178) != 0) {
        func_8015DAC4(arg0);
        return;
    }
    AF(arg0, u8, 0x1AA) = 1;
    func_8015554C();
}

void func_80149B14(s32 arg0) {
    u8 unused[0x18]; /* MATCH-TRICK: frame pad, the original's frame holds 0x18 unused bytes */

    if (AF(arg0, s32, 0x178) != 0) {
        func_8015DAC4(arg0);
        return;
    }
    func_8015554C();
}

s32 func_80149B54(u8 *arg0) {
    s32 var_v0;
    s32 bt;

    if (AF(arg0, s32, 0x44) & 0x400) {
        var_v0 = 0;
    } else if (func_8014BEF8(arg0) == 0) {
        var_v0 = 0;
    } else {
        bt = AF(arg0, u16, 0xAC) & 0x10;
        var_v0 = bt != 0;
    }
    return var_v0;
}

s32 func_8015DE24();
extern void func_80157510();

void func_80149BAC(s32 arg0) {
    if (AF(arg0, s32, 0x178) != 0) {
        func_8015DE24();
        return;
    }
    AF(arg0, u8, 0x1AA) = 1;
    func_80157510();
}

void func_80149BEC(s32 arg0) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x223);
    if (temp_v0 != 0) {
        AF(arg0, u8, 0x223) = (u8) (temp_v0 - 1);
    }
}

s32 func_80149C08(u8 *arg0) {
    s32 var_v0;
    s32 bt;

    if (AF(arg0, u8, 0x223) != 0) {
        var_v0 = 0;
    } else if (AF(arg0, s16, 0x1C8) != 0) {
        var_v0 = 0;
    } else if (AF(arg0, s32, 0x44) & 0x404) {
        var_v0 = 0;
    } else if (func_8014BEF8(arg0) == 0) {
        var_v0 = 0;
    } else if (!(func_80029178(0x89) & 0xFF)) {
        var_v0 = 0;
    } else {
        bt = AF(arg0, u16, 0xAC) & 0x10;
        var_v0 = bt != 0;
    }
    return var_v0;
}

void func_80149C94(s32 arg0) {
    func_801577C8(arg0);
}

s32 func_80149CB4(s32 arg0, s32 arg1) {
    return func_80157D20();
}

s32 func_80149CD4(s32 arg0) {
    s32 bt;

    if ((AF(arg0, s32, 0x44) & 0x404) || AF(arg0, s16, 0x1C8) != 0) {
        return 0;
    }
    bt = AF(arg0, u16, 0xAA) & 8;
    return bt != 0;
}

s32 func_80149D10(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (!(AF(arg0, s32, 0x44) & 0x400)) {
        var_v0 = 0;
        if (D_80078EBF == 0x80) {
            var_v0 = 0;
            if (D_80078EC0 & 0x7F) {
                if (AF(arg0, u16, 0xAC) & 0x10) {
                    var_v0 = 1;
                    if (func_8014B5B8() & 0xFF) {
                        return 2;
                    }
                    /* Duplicate return node #7. Try simplifying control flow for better match */
                    return var_v0;
                }
                var_v0 = 0;
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return var_v0;
            }
        }
    }
    return var_v0;
}

extern s32 func_80149E94();
extern s32 func_80149DD8();

s32 func_80149D9C(s32 arg0) {
    if (func_80149E94() == 0) {
        return func_80149DD8(arg0) != 0;
    }
    return 1;
}

extern s32 func_80149F2C();

s32 func_80149DD8(s32 arg0) {
    u8 *a;

    if (AF(arg0, s32, 0x178) != 0) {
        return 0;
    }
    if (AF(arg0, s32, 0x44) & 0x404) {
        return 0;
    }
    if (!(AF(arg0, u16, 0xAC) & 0x80)) {
        return 0;
    }
    AF(arg0, s32, 0x190) = 0;
    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (func_80149F2C(arg0, a) != 0) {
            return 1;
        }
    }
    return 0;
}

s32 func_8016F1AC(s32 arg0);

s32 func_80149E94(s32 arg0) {
    u8 *a;

    if (func_8016F1AC(arg0) == 0 && AF(arg0, u8, 0x1C5) != 0) {
        AF(arg0, u8, 0x1C5) = 0;
        for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
            if (func_80149F2C(arg0, a) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

extern s32 func_80144A04();

s32 func_80149F2C(s32 arg0, u16 *arg1) {
    s32 temp_v0;

    if (*arg1 == 0x83 || *arg1 == 0x61) {
        temp_v0 = func_80144A04(arg1);
        if (temp_v0 != 0) {
            func_801599A4(arg0);
            func_80159B3C(arg0);
            func_8016EDEC(temp_v0, 0x01000000);
            return 1;
        }
    }
    return 0;
}

void func_80149FA8()
{
}

extern s32 D_8018F0C4;

s32 func_80149FB0(arg0)
s32 arg0;
{
    s32 *p = &D_8018F0C4;
    u8 *c = &D_80078E78;
    s32 v;

    while ((v = *p++) != 0) {
        if (D_800B9A08 == v) {
            return 0;
        }
    }
    if (AF(arg0, s32, 0x44) & 0x400) {
        return 0;
    }
    if (AF(arg0, s16, 0x1C8) != 0) {
        return 0;
    }
    if (AF(arg0, u16, 0xAC) & 0x100) {
        c[0x48] ^= 0x80;
        return 1;
    }
    return 0;
}

extern s32 func_80135260();

s32 func_8014A048(s32 arg0) {
    SVECTOR q;
    SVECTOR r;
    SVECTOR v;
    u32 i;
    s32 off;
    u8 *o;

    if (AF(arg0, s32, 0x44) & 0x400) {
        return 0;
    }
    if ((AF(arg0, u16, 0xAC) & 0x80) || ((AF(arg0, u16, 0xAC) & 0x10) && func_8014BEF8(arg0) != 0)) {
        q.vx = AF(arg0, u16, 6);
        q.vy = AF(arg0, u16, 0xA);
        q.vz = AF(arg0, u16, 0xE);
        v.vx = 0;
        v.vy = -0x10;
        v.vz = -0x20;
        func_8012F14C(AF(arg0, s32, 0x20) + 0x34, &v, &r);
        i = 0;
        off = 0;
    loop:
        o = &D_801202A0 + off;
        if (AF(o, u16, 0) == 0 || AF(o, s32, 0x58) == 0 || AF(o, s16, 0xAA) != 0 || AF(arg0, u8 *, 0x184) == o
            || !(AF(o, u16, 0x5C) & 0x200) || func_80135260(AF(o, s32, 0x20), AF(o, s32, 0x58), &q, &r) == 0) {
            i++;
            off += 0x10C;
            if (i < 0x60) {
                goto loop;
            }
            return 0;
        }
        AF(arg0, u8 *, 0x178) = o;
        func_8014A1B0(arg0, o);
        return 1;
    }
    return 0;
}

s32 func_8014A1B0(u8 *arg0, s32 arg1) {
    SVECTOR v;

    func_80015978(arg0 + 4, &v);
    v.pad = 0;
    /* MATCH-TRICK: the original calls func_80156370 with a0 only (a1 passed through) */
    return func_8014C4AC(arg1, 0xA, ((s32 (*)())func_80156370)(0xA) & 0xFFFF, &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
}

s32 func_8014A218(s32 arg0) {
    return func_8015D4B4();
}

extern s32 func_8014C2B0();

s32 func_8014A238(s32 arg0) {
    u32 i;
    u8 *o;

    for (i = 0; i < 0x60; i++) {
        o = &D_801202A0 + i * 0x10C;
        if (AF(o, u16, 0) != 0 && AF(o, s16, 0xAA) != 0 && func_8014C278(arg0, (s32) o, 0x30) != 0
            && func_8014C2B0(arg0, o, 0x200) != 0) {
            return (s32) o;
        }
    }
    return 0;
}

s32 func_8014A2E4(s32 arg0) {
    u32 i;
    u8 *o;

    for (i = 0; i < 0x60; i++) {
        o = &D_801202A0 + i * 0x10C;
        if (AF(o, u16, 0) != 0 && (AF(o, u16, 0x5C) & 0x8000) && AF(o, s16, 0xAA) != 0
            && func_8014C278(arg0, (s32) o, 0x30) != 0) {
            return (s32) o;
        }
    }
    return 0;
}

s32 func_8014A380(u8 *arg0, s32 arg1) {
    SVECTOR v;

    func_80015978(arg0 + 4, &v);
    v.pad = 0;
    return func_8014C4AC(arg1, 0x1F, 0, &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
}

extern s16 D_801152B0;
extern s16 D_801152B4;

s32 func_8014A3E0(u8 *arg0) {
    VECTOR v;

    v.vx = AF(arg0, s16, 0x12) * D_801152B0;
    v.vz = AF(arg0, s16, 0x1A) * D_801152B4;
    if (v.vx < 0 || v.vz < 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        return 0;
    }
    return 1;
}

s32 func_8014A454(u8 *arg0) {
    if ((AF(arg0, u16, 0x3C) & 0x4000) && (s16)func_80012A60(AF(arg0, s16, 0x42), (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + 0x800) & 0xFFF) < 0x2AA) return 1;
    return 0;
}

s32 func_8014A4B4(s32 arg0) {
    if (func_80029178(0x1E) & 0xFF) {
        {
            s32 bt = AF(arg0, u16, 0xAC) & 0x40;

            return bt != 0;
        }
    }
    return 0;
}

s32 func_8014A4FC(s32 arg0) {
    return func_8015EDD4();
}

s32 func_8014A51C(arg0)
    s32 arg0;
{
    s32 bt;

    if (!(func_80029178(0x1E) & 0xFF) || (AF(arg0, s32, 0x44) & 0x400) || AF(arg0, u8, 0xA8) >= 0x19 || AF(arg0, u8, 0x223)) {
        return 0;
    }
    bt = AF(arg0, u16, 0xAC) & 0x40;
    return bt != 0;
}

s32 func_8014A59C(s32 arg0) {
    s32 n;
    u8 t;

    if (AF(arg0, s32, 0x44) & 1) {
        if (AF(arg0, u16, 0xAA) & 8) {
            if (func_80029178(0x20) & 0xFF) {
                n = 6;
            } else {
                n = 3;
            }
            t = D_80078EBF + n;
            D_80078EBF = t;
            if (t > 0x80) {
                D_80078EBF = 0x80;
            }
        }
    } else {
        D_80078EBF = 0;
    }
}

void func_8014A638(s32 arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x44) & 0x10) {
        temp_v0 = AF(arg0, u16, 0x188) - 4;
        AF(arg0, u16, 0x188) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x188) = 0U;
        }
    }
}

s32 func_8014A674(s32 arg0) {
    return AF(arg0, u8, 0x1BC) == 0;
}

void func_8014A680(s32 arg0) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x1BC);
    if (temp_v0 != 0) {
        AF(arg0, u8, 0x1BC) = (u8) (temp_v0 - 1);
    }
}

s32 func_8014A69C(s32 arg0) {
    return AF(arg0, u8, 0x1BD) == 0;
}

void func_8014A6A8(s32 arg0) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x1BD);
    if (temp_v0 != 0) {
        AF(arg0, u8, 0x1BD) = (u8) (temp_v0 - 1);
    }
}

s32 func_8014A6C4(s32 arg0) {
    if (!(func_80029178(0x1F) & 0xFF) || (AF(arg0, s32, 0x44) & 4)) {
        return 0;
    }
    return AF(arg0, u8, 0x1BE) == 0;
}

void func_8014A71C(s32 arg0) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x1BE);
    if (temp_v0 != 0) {
        AF(arg0, u8, 0x1BE) = (u8) (temp_v0 - 1);
    }
}

s32 func_8014A738(u8 *arg0) {
    SVECTOR d;
    u32 i;
    u8 *a;

    if (func_80029178(0x83) & 0xFF) {
        for (i = 0; i < 0x60; i++) {
            a = &D_801202A0 + i * 0x10C;
            if (AF(a, u8, 0xC1) == 7) {
                d.vx = AF(arg0, u16, 6) - AF(a, u16, 6);
                d.vz = AF(arg0, u16, 0xE) - AF(a, u16, 0xE);
                if ((d.vx < 0 ? -d.vx : d.vx) < 0x40 && (d.vz < 0 ? -d.vz : d.vz) < 0x40) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 func_8014A830(s32 arg0) {
    return func_8015E184();
}

s32 func_8014A850(u8 *a) {
    SVECTOR d;
    SVECTOR v;
    SVECTOR *vp;
    u32 i;
    s32 off;
    u8 *o;

    i = 0;
    vp = &v;
    off = 0;
    do {
        o = &D_801202A0 + off;
        if (AF(o, u16, 0) != 0 && AF(o, s32, 0x58) != 0 && (AF(o, u16, 0x5C) & 0x8000) && AF(o, u8, 0xC1) == 7) {
            d.vx = AF(a, u16, 6) - AF(o, u16, 6);
            d.vy = AF(a, u16, 0xA) - (AF(o, u16, 0xA) + 0x40);
            d.vz = AF(a, u16, 0xE) - AF(o, u16, 0xE);
            if (d.vx >= 0) {
                if (d.vx < 0x40) goto ok1;
                goto next;
            }
            if (-d.vx >= 0x40) goto next;
        ok1:
            if (d.vz >= 0) {
                if (d.vz < 0x40) goto ok2;
                goto next;
            }
            if (-d.vz >= 0x40) goto next;
        ok2:
            if (d.vy >= 0) {
                if (d.vy < 0x40) goto ok3;
                goto next;
            }
            if (-d.vy >= 0x40) goto next;
        ok3:
            AF(a, u8 *, 0x18C) = o;
            func_80015978(a + 4, vp);
            v.pad = 0;
            func_8014C4AC(o, 0x1B, func_80029AF4(), vp, AF(AF(a, u8 *, 0x20), s16, 0x12));
            return 1;
        }
    next:
        i++;
        off += 0x10C;
    } while (i < 0x60);
    return 0;
}

s32 func_8014AA04(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_80078EC0 & 0x80;
    D_80078EC0 = arg0 | temp_v0;
    return temp_v0;
}

void func_8014AA28(void) {
    s32 st;
    u8 *p;

    p = (u8 *)&D_80126B58;
    st = D_80078EC1;
    if ((u32)(AF(p, u16, 0) - 0x19) >= 2 && (u32)(AF(p, u16, 0) - 0x1D) >= 2) {
        func_801599A4(p);
        func_80159B3C(p);
        if (st == 0xC || st == 0x18 || st == 0xA) {
            func_80165A20(p);
        }
    }
    AF(p, s16, 0x1C8) = 0;
    AF(p, s16, 0x1CA) = 0;
    AF(p, s16, 0x1CC) = 0;
    AF(p, s16, 0x1CE) = 0;
    AF(p, s16, 0x1D0) = 0;
    AF(p, s32, 0x1D4) = 0;
    AF(p, s32, 0x1D8) = 0;
    func_8014AB7C(5);
    func_8014AB7C(6);
    func_8014AB7C(7);
    func_8014AB7C(8);
    func_8014AB7C(9);
    func_8014AC10(0x26);
    func_8014AC10(0x27);
    func_8014AC10(0x39);
    func_8014AC10(0x3A);
    func_8014AB7C(0x10);
    func_8014AB7C(0x11);
    func_8014AB7C(0x12);
    func_8014AB7C(0x13);
    func_8014AB7C(0x14);
    func_8014AC10(0x3B);
    func_8014AC10(0x3C);
    AF(p, u8, 0x223) = 0x10;
}

s32 func_8014AB5C(s32 arg0) {
    return func_8014AB7C(arg0);
}

s32 func_8014AB7C(s32 arg0) {
    u16 *p;

    for (p = (u16 *) &D_8011F9D0; p < (u16 *)((u8 *) &D_8011F9D0 + 0x820); p = (u16 *)((u8 *)p + 0x68)) {
        if (*p == arg0) {
            func_80162CCC(p);
        }
    }
}

void func_8014ABF0(s32 arg0) {
    func_8014AC10(arg0);
}

void func_8014AC10(s32 arg0) {
    u8 *p;
    u16 *o;

    for (p = &D_8011D030; p < &D_8011D030 + 0xA50; p += 0x58) {
        if (AF(p, u16, 0) == arg0) {
            o = AF(p, u16 *, 0x20);
            if (o != NULL) {
                func_80016714(o, *o == 1 ? 0x84 : 0x38);
            }
            func_80016714(p, 0x58);
        }
    }
}

void func_8014ACC0(u8 *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x1C8) - arg1;
    AF(arg0, u16, 0x1C8) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(arg0, u16, 0x1C8) = 0U;
    }
}

extern s32 func_8014AD30();

void func_8014ACE8(s32 arg0, s32 arg1, s32 arg2) {
    SVECTOR v;

    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA) - 0x20;
    v.vz = AF(arg0, u16, 0xE);
    func_8014AD30(arg0, &v, arg1, arg2);
}

s32 func_8014AD30(s32 arg0, SVECTOR *arg1, s32 arg2, s32 arg3) {
    struct {
        s16 kind;
        s16 x;
        s16 y;
        s16 z;
        s32 owner;
        s32 d;
        s32 e;
    } p;
    s16 x = arg1->vx;
    s16 y = arg1->vy;
    s16 z = arg1->vz;

    p.owner = arg0;
    p.kind = 0x1D;
    p.d = arg2;
    p.e = arg3;
    p.x = x;
    p.y = y;
    p.z = z;
    return func_80146AFC(&p);
}

void func_8014AD7C(s32 arg0) {
    func_8014ADA8((s32) &D_80126B58, arg0);
}

void func_8014ADA8(s32 arg0, s32 arg1) {
    u32 temp_v0;

    temp_v0 = D_80078E8C + arg1;
    D_80078E8C = temp_v0;
    if (temp_v0 > 0x1869FU) {
        D_80078E8C = 0x1869F;
    }
}

extern s32 D_80078E90;
extern void func_8014B084();

void func_8014ADE0(s32 arg0) {
    u8 *c = &D_80078E78;
    s32 old;
    s32 n;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (AF(arg0, u16, 0) == 0x1A || AF(arg0, u16, 0) == 0x1E) {
        return;
    }
    if (AF(arg0, s32, 0x44) & 0x10) {
        return;
    }
    old = D_80078E90;
    if (func_8014B154(arg0)) {
        D_80078E90 += 0xAAA8;
    } else {
        D_80078E90 += 0x1555;
    }
    if (AF(c, s16, 0x1A) - (old >> 16) > 0 && AF(c, u8, 0x49) == 3) {
        func_8014BD24(arg0, 1);
    }
    if ((s16)((s16)AF(c, u16, 0x1A) / 60) - (s16)((s16)(old >> 16) / 60) > 0) {
        if (func_8014B154(arg0)) {
            if (func_80029178(0x1B) & 0xFF) {
                n = 10;
            } else {
                n = 4;
            }
        } else {
            n = 4;
        }
        if (AF(c, u16, 0x40) != 0) {
            func_8014BB24(arg0, n, 0);
        } else if (AF(c, u16, 0x3C) != 0) {
            if (AF(c, u16, 0x3C) >= 5) {
                func_8014BC80(arg0, 4);
            } else {
                AF(c, u16, 0x3C) = 1;
            }
        }
        if (func_8014B154(arg0)) {
            if (func_80029178(0x1B) & 0xFF) {
                func_8014BD24(arg0, 8);
            } else {
                func_8014BD60(arg0, 1);
            }
        } else {
            func_8014BD60(arg0, 4);
        }
    }
    if (AF(c, s16, 0x1A) >= 0x5A0) {
        AF(c, s32, 0x18) = 0;
        func_8014B084();
    }
}

extern void func_8014B034();

void func_8014B00C(s32 arg0) {
    func_8014B034(arg0 * 60);
}

extern s16 D_80078E92;

void func_8014B034(s32 arg0) {
    D_80078E92 += arg0;
    if (D_80078E92 >= 0x5A0) {
        D_80078E92 -= 0x5A0;
        func_8014B084();
    }
}

extern u16 D_80078EAC;
extern u8 D_80078EBA;
extern void func_800D10EC();
extern void func_8002AC98();

void func_8014B084(void) {
    D_80078EAC++;
    D_80078EBA++;
    if (D_80078EAC >= 0x16E) {
        D_80078EAC = 1;
    }
    D_80078EBA %= 7;
    func_800D10EC();
    func_8002AC98();
    func_80145C54();
}

s32 func_8014B12C(void) {
    return func_8014B154((s32) &D_80126B58);
}

s32 func_8014B154(s32 arg0) {
    return AF(arg0, s32, 0x44) & 0x80;
}

extern void func_8014B2F8();
extern void func_8014B4C4();

void func_8014B160(s32 arg0) {
    func_8014B2F8(arg0);
    func_8014B4C4(arg0);
}

extern s16 D_80078E96;

void func_8014B190(s32 arg0) {
    u8 *c = &D_80078E78;

    AF(arg0, s16, 0x68) = 0x1000;
    AF(arg0, s16, 0x6A) = 0x1000;
    AF(arg0, s16, 0x6C) = 0x1000;
    AF(arg0, s32, 0x44) &= ~0x200;
    AF(arg0, s32, 0x44) &= ~0x400;
    if (func_8016F1C4() != 0) {
        return;
    }
    if (AF(arg0, u16, 0) == 0x1E || AF(arg0, u16, 0) == 0x1A) {
        return;
    }
    if ((D_80078E96 & 0x8000) || D_80078EB8 < 0xB || D_80078EA6 < 0x10 || D_80078EC1 == 1) {
        AF(arg0, s32, 0x44) |= 0x200;
    }
    if (AF(c, s16, 0x22) & 0x8000) {
        AF(arg0, s16, 0x68) = 0x555;
        AF(arg0, s16, 0x6A) = 0x555;
        AF(arg0, s16, 0x6C) = 0x555;
        AF(arg0, s32, 0x44) |= 0x400;
    }
}

extern void func_8014B2F8();

void func_8014B2A8(void) {
    func_8014B2F8(&D_80126B58);
}

void func_8014B2D0(s32 arg0, s32 arg1) {
    func_8014B310((s32) &D_80126B58, arg1);
}

void func_8014B2F8(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
s32 arg2;
s32 arg3;
{
    D_80078E94 = 0;
    D_80078ECC = 0;
}

s32 func_8014B310(arg0, arg1)
s32 arg0;
s32 arg1;
{
    func_8014B33C();
    D_80078ECC = 0x80000000;
    return 0x80000000;
}

s32 func_8014B33C(void) {
    D_80078E94 = 0x80000000;
    return 0x80000000;
}

void func_8014B350(s32 arg0) {
    u8 *c = &D_80078E78;
    SVECTOR v;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (AF(arg0, u16, 0) == 0x1E || AF(arg0, u16, 0) == 0x1A) {
        return;
    }
    if (((s16 *)&D_80078E94)[1] & 0x8000) {
        if (AF(arg0, s32, 0x44) & 0x80) {
            D_80078E94 += 0xAAA8;
        } else {
            D_80078E94 += 0x1555;
        }
        if ((AF(c, s16, 0x1E) & 0x7FFF) >= 0x3D) {
            AF(c, s32, 0x1C) = 0x80000000;
            func_8014BC80(arg0, 8);
            v.vx = AF(arg0, u16, 6);
            v.vy = AF(arg0, u16, 0xA) - 0x20;
            v.vz = AF(arg0, u16, 0xE);
            func_8014AD30(arg0, &v, 6, 0);
            StartRumbleScript((s32) &D_80062BF4);
        }
    }
    if (AF(c, s16, 0x56) & 0x8000) {
        if (AF(arg0, s32, 0x44) & 0x80) {
            AF(c, s32, 0x54) += 0xAAA8;
        } else {
            AF(c, s32, 0x54) += 0x1555;
        }
        if ((AF(c, s16, 0x56) & 0x7FFF) >= 0x3D) {
            AF(c, s32, 0x54) = 0x80000000;
        }
    }
}

void func_8014B4C4(s32 arg0) {
    D_80078E98 = 0;
}

void func_8014B4D4(s32 arg0) {
    AF(arg0, s16, 0x1C8) = 0;
    D_80078E98 = 0x80000000;
    func_80166244(arg0);
}

extern s16 D_80078E9A;
s32 func_8016F1AC(s32 arg0);

void func_8014B504(s32 arg0) {
    s32 temp_v1;
    u16 temp_a0;

    if (func_8016F1AC(arg0) == 0) {
        temp_a0 = AF(arg0, s32, 0);
        if ((temp_a0 != 0x1E) && (temp_a0 != 0x1A) && (D_80078E9A & 0x8000)) {
            temp_v1 = D_80078E98 + 0x1555;
            D_80078E98 = temp_v1;
            if ((temp_v1 & 0x7FFF0000) > 0x257F6A) {
                D_80078E98 = 0;
            }
        }
    }
}

void func_8014B598(s8 arg0, s32 arg1) {
    D_80126D1C = arg0;
    D_80126D74 = arg1;
}

void func_8014B5B0(s32 arg0) {
    AF(arg0, u8, 0x1C4) = 0;
}

s32 func_8014B5B8(s32 arg0) {
    return AF(arg0, u8, 0x1C4);
}

void func_8014B5C4(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, u8, 0x1C7) = (s8) (arg1 | arg2);
}

void func_8014B5D0(s32 arg0) {
    AF(arg0, u8, 0x1C7) = 0;
}

void func_8014B5D8(u8 *a) {
    u8 *c = &D_80078E78;
    s32 f;
    s32 n;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (AF(a, u16, 0) == 0x1E || AF(a, u16, 0) == 0x1A) {
        return;
    }
    f = AF(a, s32, 0x44);
    if (f & 0x10) {
        return;
    }
    if (f & 0x80) {
        if (func_80029178(0x1B) & 0xFF) {
            n = 0x2D8;
        } else {
            n = 0x5B0;
        }
    } else {
        n = 0x16C;
    }
    if (AF(c, u8, 0x49) == 0x12) {
        n *= 2;
    }
    AF(c, s32, 0x24) -= n;
    if (AF(c, s32, 0x24) < 0) {
        AF(c, s32, 0x24) = 0;
        if (AF(a, s32, 0x44) & 0x80) {
            AF(c, s32, 0x28) += 0xAAA8;
        } else {
            AF(c, s32, 0x28) += 0x1555;
        }
        if (AF(c, s16, 0x2A) >= 0x3C) {
            AF(c, s32, 0x28) = 0;
            func_8014BC80(a, 4);
        }
    } else {
        AF(c, s32, 0x28) = 0;
        AF(c, u8, 0x43) = 0;
    }
}

void func_8014B6F0(s32 arg0, s32 arg1) {
    D_80078E9C += arg1;
    if (((s16 *)&D_80078E9C)[1] >= 0xA1) {
        D_80078E9C = 0xA00000;
    }
    D_80078ED0 += arg1;
    if (((s16 *)&D_80078ED0)[1] >= 0xA1) {
        D_80078ED0 = 0xA00000;
    }
}

void func_8014B768(s32 arg0, s32 arg1) {
    D_80078E9C -= arg1;
    if (((s16 *)&D_80078E9C)[1] < 0) {
        D_80078E9C = 0;
    }
}

void func_8014B7A4(u8 *a) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *c = &D_80078E78;
    s32 f;
    s32 k;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (AF(a, u16, 0) == 0x1E || AF(a, u16, 0) == 0x1A) {
        return;
    }
    f = AF(a, s32, 0x44);
    if (f & 0x10) {
        return;
    }
    if (f & 0x80) {
        if (func_80029178(0x1B) & 0xFF) {
            func_8014B944(a, 0x2D80, 0);
        } else {
            func_8014B944(a, 0x16C0, 0);
        }
    } else if (D_800B9A08 != 0x3024 && D_800B9A08 != 0x3042 && D_800B9A08 != 0x3067 && D_800B9A08 != 0x3075) {
        if (func_80029178(0x21) & 0xFF) {
            D_80078EA4 -= 0xF2;
        } else {
            D_80078EA4 -= 0x16C;
        }
    }
    if (AF(c, s32, 0x2C) < 0) {
        AF(c, s32, 0x2C) = 0;
        if (AF(a, s32, 0x44) & 0x80) {
            AF(c, s32, 0x30) += 0xAAA8;
        } else {
            AF(c, s32, 0x30) += 0x1555;
        }
        if (AF(c, s16, 0x32) >= 0x3C) {
            AF(c, s32, 0x30) = 0;
            if (AF(w, s16, 0xA3D8) != 0x3051) {
                AF(a, s32, 0x44) |= 0x100;
            }
        }
    }
}

void func_8014B944(s32 a, s32 n, s32 force) {
    u8 *c = &D_80078E78;

    if (force != 0) {
        D_80078EA4 += n;
        if (((s16 *)&D_80078EA4)[1] > 0xA0) {
            D_80078EA4 = 0xA00000;
        }
    } else if (func_80029178(0x1B) & 0xFF) {
        D_80078EA4 += n;
        if (((s16 *)&D_80078EA4)[1] > 0xA0) {
            D_80078EA4 = 0xA00000;
        }
    } else if (D_80078EA6 < 0x80) {
        D_80078EA4 += n;
        if (((s16 *)&D_80078EA4)[1] > 0x80) {
            D_80078EA4 = 0x800000;
        }
    }
    if (force != 0) {
        AF(c, s32, 0x60) += n;
        if (AF(c, s16, 0x62) > 0xA0) {
            AF(c, s32, 0x60) = 0xA00000;
        }
    } else if (func_80029178(0x1B) & 0xFF) {
        AF(c, s32, 0x60) += n;
        if (AF(c, s16, 0x62) > 0xA0) {
            AF(c, s32, 0x60) = 0xA00000;
        }
    } else if (AF(c, s16, 0x62) < 0x80) {
        AF(c, s32, 0x60) += n;
        if (AF(c, s16, 0x62) > 0x80) {
            AF(c, s32, 0x60) = 0x800000;
        }
    }
}

s32 func_8014BB0C(arg0)
s32 arg0;
{
    D_80078EB4 = D_80078EB2;
    return (s32) D_80078EB2;
}

void func_8014BB24(s32 a, s32 n, s32 force) {
    u8 *c = &D_80078E78;

    if (force != 0) {
        D_80078EB4 += n;
    } else if (func_80029178(0x1B) & 0xFF) {
        if (D_80078EB4 < 999) {
            D_80078EB4 += n;
            if (D_80078EB4 > 999) {
                D_80078EB4 = 999;
            }
        }
    } else if (D_80078EB4 < 500) {
        D_80078EB4 += n;
        if (D_80078EB4 > 500) {
            D_80078EB4 = 500;
        }
    }
    if (AF(c, u16, 0x3A) < AF(c, u16, 0x3C)) {
        AF(c, u16, 0x3C) = AF(c, u16, 0x3A);
    }
}

void func_8014BC0C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = D_80078EB2 + arg1;
    D_80078EB2 = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x1F5U) {
        D_80078EB2 = 0x1F4;
    }
}

s32 func_8014BC44(s32 arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (AF(arg0, s32, 0x44) & 0x02000000) {
        var_a1 = (s32) D_80078EB2;
    }
    func_8014BC80(arg0, var_a1);
}

void func_8014BC80(s32 arg0, s32 arg1) {
    if ((s32) D_80078EB4 < arg1) {
        D_80078EB4 = 0;
        D_800B9A17 = 0;
        return;
    }
    D_80078EB4 -= arg1;
}

void func_8014BCC0(s32 arg0, s32 arg1) {
    if (arg1 < (s32) D_80078EB4) {
        D_80078EB4 -= arg1;
    } else {
        D_80078EB4 = 1;
    }
}

void func_8014BCEC(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = D_80078EB6 + arg1;
    D_80078EB6 = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x663U) {
        D_80078EB6 = 0x662;
    }
}

void func_8014BD24(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    u16 temp_v0;

    temp_v0 = D_80078EB8 + arg1;
    D_80078EB8 = temp_v0;
    if ((u16) D_80078EB6 < (u32) (temp_v0 & 0xFFFF)) {
        D_80078EB8 = D_80078EB6;
    }
}

void func_8014BD60(s32 arg0, s32 arg1) {
    if ((s32) D_80078EB8 < arg1) {
        D_80078EB8 = 0;
        return;
    }
    D_80078EB8 -= arg1;
}

void func_8014BD98(s32 arg0, u16 arg1) {
    D_80078EB8 = arg1;
    if ((u16) D_80078EB6 < (u32) (arg1 & 0xFFFF)) {
        D_80078EB8 = D_80078EB6;
    }
}

s32 func_8014BDC8(void) {
    D_80078EB8 = D_80078EB6;
    return (s32) D_80078EB6;
}

void func_8014BDE0(void) {
}

extern s32 func_8017267C();
extern void func_80029ED4();

void func_8014BDE8(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    if (func_8016F1AC(arg0) == 0 && func_8017267C(arg0) == 0) {
        a = AF(arg0, SVECTOR, 0x98);
        func_80015978(arg0 + 4, &b);
        b.vy = 0;
        a.vy = 0;
        func_80029ED4((s16)func_80013294(&a, &b));
    }
}

void func_8014BE78(void) {
    func_80029124(0x12F, 1);
}

void func_8014BE9C(void) {
    func_80029124(0x12F, 0);
}

void func_8014BEC0(s32 arg0) {
    D_80078EC0 |= 1;
    func_80029124(0x80, 1);
}

s32 func_8014BEF8(u8 *arg0) {
    return func_80029178(0x80) & 0xFF;
}

void func_8014BF18(s32 arg0) {
    s32 var_a1;

    var_a1 = arg0;
    if (var_a1 < 0) {
        var_a1 = 0;
    }
    func_800291A0(0xCF, var_a1 & 0xFF);
}

void func_8014BF48(arg0)
s32 arg0;
{
    func_800291A0(0xCF, 0);
}

s32 func_8014BF6C(void) {
    return func_800291B4(0xCF) & 0xFF;
}

void func_8014BF8C(s32 arg0) {
    func_800291A0(0xD0, arg0 & 0xFF);
}

void func_8014BFB0(void) {
    func_800291A0(0xD0, 0);
}

s32 func_8014BFD4(s32 arg0, s32 arg1) {
    return func_800291B4(0xD0, arg1) & 0xFF;
}

s32 func_8014BFF4(s32 arg0, s32 arg1) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x4E);
    if (temp_v0 == 0) {
        AF(arg0, u8, 0x4E) = (u8) arg1;
    }
    return (s32) temp_v0;
}

s32 func_8014C010(s32 arg0, s32 arg1) {
    struct {
        s16 a, b, c, d;
        s32 e, f, g;
    } m;

    m.e = arg0;
    m.a = 2;
    m.b = 0;
    m.c = 0;
    m.d = 0;
    m.f = arg1;
    m.g = 0;
    return func_80146AFC(&m);
}

s32 func_8014C050(s32 arg0, s32 arg1) {
    u16 *p;
    u32 i;

    i = 0;
    for (p = (u16 *) &D_8011D030; i < 0x1E; i++) {
        if (*p == arg1) {
            return (s32) p;
        }
        p = (u16 *)((u8 *)p + 0x58);
    }
    return 0;
}

s32 func_8014C088(s32 arg0, s32 arg1) {
    u16 *p;

    for (p = (u16 *) &D_8011F9D0; p < (u16 *)((u8 *) &D_8011F9D0 + 0xC30); p = (u16 *)((u8 *)p + 0x68)) {
        if (*p == arg1) {
            return (s32) p;
        }
    }
    return 0;
}

s32 func_8014C0C8(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u32 i;
    s16 v = arg2;

    for (i = 0; i < 0x60; i++) {
        p = &D_801202A0 + i * 0x10C;
        if (AF(p, u16, 0) == arg1 && AF(p, s16, 0xFC) == v) {
            return (s32) p;
        }
    }
    return 0;
}

s32 func_8014C118(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u32 i;
    s16 v = arg2;

    for (i = 0; i < 0x60; i++) {
        p = &D_801202A0 + i * 0x10C;
        if (AF(p, u16, 0) == arg1 && AF(p, s16, 0x70) == v) {
            return (s32) p;
        }
    }
    return 0;
}

s32 func_8014C168(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    u16 *p;
    u32 i;

    i = 0;
    for (p = (u16 *) &D_801202A0; i < 0x60; i++) {
        if (*p == arg1) {
            return (s32) p;
        }
        p = (u16 *)((u8 *)p + 0x10C);
    }
    return 0;
}

s32 func_8014C1A0(s32 arg0, s32 arg1) {
    return func_8014C1C8(arg0, arg1, (s32) &D_8018F14C);
}

extern s32 func_80133784();

s32 func_8014C1C8(s32 arg0, s32 arg1, s32 arg2) {
    SVECTOR a;
    SVECTOR b;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    b.vx = AF(arg1, s16, 6) + AF(arg2, s16, 0);
    b.vy = AF(arg1, s16, 0xA) + AF(arg2, s16, 2);
    b.vz = AF(arg1, s16, 0xE) + AF(arg2, s16, 4);
    if (func_80133784(1, &a, &b) != 0) {
        AF(arg1, s16, 6) = b.vx;
        AF(arg1, s16, 0xA) = b.vy;
        AF(arg1, s16, 0xE) = b.vz;
    }
}

s32 func_8014C278(s32 arg0, s32 arg1, s32 arg2) {
    return func_80013328(arg0 + 4, arg1 + 4) < (arg2 & 0xFFFF);
}

extern s32 func_8014C59C();

s32 func_8014C2B0(s32 arg0, s32 arg1, s32 arg2) {
    return (s16)func_80012A60((s16)func_8014C59C(arg0, arg1), AF(AF(arg0, s32, 0x20), s16, 0x12)) < (arg2 & 0xFFFF);
}

s32 func_8014C308(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg1, u16, 0) == 0 || AF(arg1, s32, 0x58) == 0) {
        return 0;
    }
    if (AF(arg1, u16, 0x5E) != arg2) {
        if ((AF(arg1, s32, 0x5C) & 0xC100) != 0x8000) {
            return 0;
        }
        if (!(AF(arg1, s16, 0xAE) & (u16)arg3)) {
            if (arg2 != 9 && arg2 != 0x11 && arg2 != 0x29 && arg2 != 0xA && AF(arg0, s32, 0x178) == arg1) {
                return 0;
            }
            return 1;
        }
    }
    return 0;
}

s32 func_8014C3A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_8014C43C(arg0, arg1, arg2, arg3, /* extra? */ (s32) AF(AF(arg0, void *, 0x20), s16, 0x12));
}

s32 func_8014C3D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_8014C43C(arg0, arg1, arg2, arg3, (s16)func_8014C59C(arg0, arg1));
}

s32 func_8014C43C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return func_8014C4AC(arg1, arg2, func_80156370(arg2 & 0xFFFF, arg1) & 0xFFFF, arg3, /* extra? */ (s32) (s16) arg4);
}

extern u16 D_801152B8;
extern u16 D_8012693A;
extern s32 D_80126CD0;

s32 func_8014C4AC(arg0, arg1, arg2, arg3, arg4)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
    u16 arg4;
{
    if (arg0 != 0) {
        if (AF(arg0, u16, 0) != 0) {
            if ((arg1 == 9) || (arg1 == 0x11) || (arg1 == 0x29) || (arg1 == 0xA) || (D_80126CD0 != arg0)) {
                AF(arg0, s16, 0x5E) = (s16) arg1;
                AF(arg0, u16, 0x62) = arg4;
                AF(arg0, s16, 0x60) = (s16) arg2;
                AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 1);
                AF(arg0, SVECTOR, 0x7c) = AF(arg3, SVECTOR, 0x0);
                AF(arg0, u8, 0xC9) = (s8) D_8012693A;
                AF(arg0, u8, 0xC8) = (s8) D_801152B8;
                return arg0;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_8014C568(s32 arg0, s32 arg1) {
    s16 temp_a2;

    temp_a2 = AF(arg0, s16, 6);
    return ratan2(temp_a2 - AF(arg1, s16, 0), AF(arg0, s16, 0xE) - AF(arg1, s16, 4), (s32) temp_a2) & 0xFFF;
}

s32 func_8014C59C(s32 arg0, s32 arg1) {
    s16 temp_a2;

    temp_a2 = AF(arg0, s16, 6);
    return ratan2(temp_a2 - AF(arg1, s16, 6), AF(arg0, s16, 0xE) - AF(arg1, s16, 0xE), (s32) temp_a2) & 0xFFF;
}

s16 func_8014C5D0(s32 arg0, s32 arg1) {
    return func_8014C5FC(arg0, arg1, (s32) &D_8018F154);
}

extern s32 SquareRoot0();
extern s32 ratan2();

s32 func_8014C5FC(s32 arg0, s32 arg1, s32 arg2) {
    s16 dz;
    s16 dx;

    dz = (AF(arg1, u16, 0xE) + AF(arg2, u16, 4)) - AF(arg0, u16, 0xE);
    dx = (AF(arg1, u16, 6) + AF(arg2, u16, 0)) - AF(arg0, u16, 6);
    return ratan2((AF(arg1, s16, 0xA) + AF(arg2, s16, 2)) - AF(arg0, s16, 0xA), (s16)SquareRoot0(dz * dz + dx * dx)) & 0xFFF;
}

void func_8014C6AC(void) {
    D_80126D17 = 1;
}

void func_8014C6C0(void) {
    D_80126D17 = 0;
}

void func_8014C6D0(void) {
    D_80126D1E = 0;
}

void func_8014C6E0(void) {
    D_80126D1E = 1;
}

static inline s32 h_8014C088(s32 arg0, s32 arg1) {
    u16 *p;
    for (p = (u16 *) &D_8011F9D0; p < (u16 *)((u8 *) &D_8011F9D0 + 0xC30); p = (u16 *)((u8 *)p + 0x68)) {
        if (*p == arg1) {
            return (s32) p;
        }
    }
    return 0;
}

void func_8014C6F4(u8 *arg0) {
    u8 *c = &D_80078E78;
    s32 p;

    if (AF(arg0, s32, 0x44) & 2) {
        AF(arg0, u8, 0x1C3) = 1;
    }
    if ((AF(arg0, s32, 0x44) ^ AF(arg0, s32, 0x48)) & AF(arg0, s32, 0x44) & 0x200) {
        AF(arg0, u8, 0x1C3) = 0;
    }
    AF(arg0, SVECTOR, 0x164) = AF(AF(arg0, u8 *, 0x20), SVECTOR, 0x10);
    if (((s32 (*)())func_8016F1AC)() != 0 || ((AF(arg0, s32, 0x44) & 0x200) && AF(arg0, u8, 0x1C3) == 0)) {
        AF(arg0, s16, 0x162) = 1;
    } else {
        if (c[0x49] == 0x17 && (p = h_8014C088(0, 0x22)) != 0) {
            func_80015978(p + 4, arg0 + 0x15C);
        } else if (AF(arg0, u16, 0) != 0x19) {
            func_80015978(arg0 + 4, arg0 + 0x15C);
        }
        AF(arg0, s16, 0x162) = 0;
    }
    if (AF(arg0, s16, 0x15A) == 0) {
        AF(arg0, u16, 0x154) = AF(arg0, u16, 6);
        AF(arg0, u16, 0x156) = AF(arg0, u16, 0xA);
        AF(arg0, u16, 0x158) = AF(arg0, u16, 0xE);
    }
    AF(arg0, s16, 0x15A) = 0;
}

void func_8014C860(u8 *arg0, u8 *arg1) {
    AF(arg0, SVECTOR, 0x154) = AF(arg1, SVECTOR, 0x0);
    AF(arg0, s16, 0x15A) = 1;
}

void func_8014C88C(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10;

    func_80015978(arg0 + 4, (s32) &sp10, arg2);
    func_8014C8C8(arg0, (s32) &sp10);
}

void func_8014C8C8(s32 arg0, s32 arg1) {
    AF(arg0, SVECTOR, 0x15c) = AF(arg1, SVECTOR, 0x0);
    AF(arg0, s16, 0x162) = 0;
}

void func_8014C8F0(arg0)
    u8 *arg0;
{
    AF(arg0, SVECTOR, 0x15C) = AF(arg0, SVECTOR, 0x90);
}

extern u8 D_801151F0[];

s32 func_8014C918(s32 arg0, s32 arg1) {
    u8 i;

    if (arg1 == 0x18) {
        return 8;
    }
    for (i = 0; i < 8; i++) {
        if (D_801151F0[i] == arg1) {
            return i;
        }
    }
    return 0;
}

void func_8014C968(void) {
    D_80126B50 = 0;
}

s32 func_8014C978(void) {
    D_80126B50 = 1;
    return 1;
}

s32 func_8014C98C(void) {
    return D_80126B50;
}

void func_8014C99C(s32 arg0) {
    if (func_80029178(0x119) & 0xFF) {
        /* MATCH-TRICK: the original calls func_8016F1AC with no argument (a0 not set) */
        if (((s32 (*)())func_8016F1AC)()) {
            func_80139914(AF(arg0, s32, 0x198));
            AF(arg0, s32, 0x198) = 0;
            func_80029124(0x119, 0);
        }
    }
}

s16 func_8014CA00(u8 *obj) {
    return *(s16 *)(*(u8 **)(obj + 0x78) + 0x2C);
}

s32 func_8014CA14(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = func_8014CA70() & 0xFFFF;
    var_v0 = 1;
    if (temp_a0 != 0) {
        if (temp_a0 == D_8012707C) {
            D_8012707C = 0;
            return 0;
        }
        func_80147364(temp_a0, 0);
        var_v0 = 0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_8014CA70(u8 *arg0, s32 arg1) {
    return ((u16 *)(AF(arg0, u8 *, 0x78) + 0x14))[arg1];
}

s32 func_8014CA88(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = func_8014CAE4() & 0xFFFF;
    var_v0 = 1;
    if (temp_a0 != 0) {
        if (temp_a0 == D_8012707C) {
            D_8012707C = 0;
            return 0;
        }
        func_80147364(temp_a0, 0);
        var_v0 = 0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_8014CAE4(u8 *arg0, s32 arg1) {
    return ((u16 *)(AF(arg0, u8 *, 0x78) + 0x1C))[arg1];
}

s32 func_8014CAFC(void) {
    return D_80126B9C & 0x400;
}

s32 func_8014CB0C(void) {
    return D_80126B9C & 0x80;
}

s32 func_8014CB1C(void) {
    return D_80078E94;
}

extern u8 D_80126D1F;

s32 func_8014CB2C(void) {
    s32 v = D_80126D1F;
    if (v & 0x80) {
        v = (v & 0x7F) | 0x80000000;
    }
    return v;
}

s32 func_8014CB58(void) {
    return D_80078EC0 & 0x7F;
}

void func_8014CB68(s32 arg0) {
    D_80126D1D = 1;
}

s32 func_8014CB7C(void) {
    return D_80126B9C & 0x800;
}

s32 func_8014CB8C(void) {
    return D_80126B9C & 0x1000;
}

void func_8014CB9C(u8 *arg0) {
    AF(&D_80126C98, SVECTOR, 0x0) = AF(arg0, SVECTOR, 0x0);
    D_80126C9E = 1;
}

void func_8014CBD8(void) {
    D_80126CDC = 0;
}

void func_8014CBE8(void) {
    D_80126CC4 = 0;
}

void func_8014CBF8(arg0, arg1)
s32 arg0;
s32 arg1;
{
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x174);
    if ((temp_v1 != NULL) && (AF(temp_v1, u16, 0) != 0)) {
        AF(arg0, void *, 0x174) = NULL;
        AF(temp_v1, u8, 0x74) = 0;
    }
}

void func_8014CC28(s32 arg0) {
    if (AF(arg0, s32, 0x44) < 0) {
        if (AF(arg0, s16, 0xA) != AF(arg0, s16, 0x8A)) {
            func_8014D3E0(arg0);
            return;
        }
        if ((AF(arg0, s16, 6) != AF(arg0, s16, 0x88)) || (AF(arg0, s16, 0xE) != AF(arg0, s16, 0x8C))) {
            func_8014D04C();
            return;
        }
        goto block_6;
    }
block_6:
    func_8014CCB4();
}

extern s32 D_801ED4D8;
extern s32 func_8014CD0C();

s32 func_8014CCB4(void) {
    SetSpadStackNested();
    D_801ED4D8 = func_8014CD0C();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014CF04();
extern s32 func_8014CD80();

s32 func_8014CD0C(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 y, z;
    s32 r;

    a.vx = b.vx = AF(arg0, s16, 6);
    y = AF(arg0, u16, 0xA);
    a.vy = y - 3;
    z = AF(arg0, u16, 0xE);
    b.vy = y + 5;
    a.vz = b.vz = z;
    if (AF(arg0, void *, 0x174) == NULL) {
        r = func_8014CF04(arg0, &a, &b);
    } else {
        r = func_8014CD80(arg0, &a, &b);
    }
    return r;
}

s32 func_8014CD80(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;
    s32 r;

    a = AF(o, u8 *, 0x174);
    if (AF(a, u16, 0) == 0 || !(AF(a, u16, 0x5C) & 0x400) || AF(a, s32, 0x58) == 0
        || AF(a, s16, 0xA) < AF(o, s16, 0xA)) {
        if (AF(a, u16, 0) != 0) {
            AF(a, u8, 0x74) = 0;
        }
        AF(o, u8 *, 0x174) = NULL;
        return 0;
    }
    p1[0] = AF(o, u16, 0x98);
    p1[1] = AF(o, u16, 0x9A) - 3;
    p1[2] = AF(o, u16, 0x9C);
    if (AF(a, u16, 0x5C) & 8) {
        p2[1] = p1[1] + 0xC;
        r = func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2);
        if (r != 0) {
            AF(o, u16, 6) = AF(o, u16, 0x78) = p2[0];
            AF(o, u16, 0xA) = AF(o, u16, 0x7A) = p2[1];
            AF(o, u16, 0xE) = AF(o, u16, 0x7C) = p2[2];
        }
    } else {
        r = func_80135888(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2);
    }
    if (r != 0) {
        AF(o, s16, 0x16E) = (u8)func_8014C918(o, AF(a, u8, 0x75));
        return 1;
    }
    AF(a, u8, 0x74) = 0;
    AF(o, u8 *, 0x174) = NULL;
    return 0;
}

s32 func_8014CF04(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0
            && a != AF(o, u8 *, 0x178) && a != AF(o, u8 *, 0x174) && AF(a, s16, 0xA) >= AF(o, s16, 0xA)
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            AF(o, u8 *, 0x174) = a;
            AF(a, u8, 0x74) = 1;
            AF(o, u16, 6) = p2[0];
            AF(o, u16, 0xA) = p2[1];
            AF(o, u16, 0xE) = p2[2];
            AF(o, s16, 0x16E) = (u8)func_8014C918(o, AF(a, u8, 0x75));
            return 1;
        }
    }
    return 0;
}

extern s32 func_8014D0A4();

s32 func_8014D04C(void) {
    SetSpadStackNested();
    D_801ED4D8 = func_8014D0A4();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014D2A0();
extern s32 func_8014D12C();

s32 func_8014D0A4(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, u16, 0x88);
    a.vy = AF(arg0, u16, 0x8A);
    a.vz = AF(arg0, u16, 0x8C);
    b.vx = AF(arg0, u16, 6);
    b.vy = AF(arg0, u16, 0xA);
    b.vz = AF(arg0, u16, 0xE);
    if (AF(arg0, void *, 0x174) == NULL) {
        r = func_8014D2A0(arg0, &a, &b);
    } else {
        r = func_8014D12C(arg0, &a, &b);
    }
    return r;
}

s32 func_8014D12C(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    p1[1] -= 3;
    p2[1] += 8;
    a = AF(o, u8 *, 0x174);
    if (AF(a, u16, 0) == 0 || !(AF(a, u16, 0x5C) & 0x400) || AF(a, s32, 0x58) == 0
        || AF(a, s16, 0xA) < AF(o, s16, 0xA)) {
        if (AF(a, u16, 0) != 0) {
            AF(a, u8, 0x74) = 0;
        }
        AF(o, u8 *, 0x174) = NULL;
        return 0;
    }
    p1[0] = AF(o, u16, 0x98);
    p1[1] = AF(o, u16, 0x9A) - 3;
    p1[2] = AF(o, u16, 0x9C);
    if (AF(a, u16, 0x5C) & 8) {
        p2[1] = p1[1] + 0x18;
    }
    if (func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
        AF(o, u16, 6) = p2[0];
        AF(o, u16, 0xA) = p2[1];
        AF(o, u16, 0xE) = p2[2];
        AF(o, u16, 0x16E) = (u8)func_8014C918(o, AF(a, u8, 0x75));
        return 1;
    }
    AF(a, u8, 0x74) = 0;
    AF(o, u8 *, 0x174) = NULL;
    return 0;
}

s32 func_8014D2A0(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0
            && a != AF(o, u8 *, 0x178) && a != AF(o, u8 *, 0x170)
            && AF(a, s16, 0xA) >= AF(o, s16, 0xA)
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            AF(o, u16, 6) = p2[0];
            AF(o, u16, 0xA) = p2[1];
            AF(o, u16, 0xE) = p2[2];
            AF(o, u16, 0x16E) = (u8)func_8014C918(o, AF(a, u8, 0x75));
            return 1;
        }
    }
    return 0;
}

extern s32 func_8014D438();

s32 func_8014D3E0()
{
    SetSpadStackNested();
    D_801ED4D8 = func_8014D438();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014D610();
extern s32 func_8014D4C0();

s32 func_8014D438(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A);
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA);
    b.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, void *, 0x174) == NULL) {
        r = func_8014D610(arg0, &a, &b);
    } else {
        r = func_8014D4C0(arg0, &a, &b);
    }
    return r;
}

s32 func_8014D4C0(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    p1[1] -= 3;
    p2[1] += 8;
    a = AF(o, u8 *, 0x174);
    if (AF(a, u16, 0) == 0 || !(AF(a, u16, 0x5C) & 0x400) || AF(a, s32, 0x58) == 0
        || AF(a, s16, 0xA) < AF(o, s16, 0xA)) {
        if (AF(a, u16, 0) != 0) {
            AF(a, u8, 0x74) = 0;
        }
        AF(o, u8 *, 0x174) = NULL;
        return 0;
    }
    p1[0] = AF(o, u16, 0x98);
    p1[1] = AF(o, u16, 0x9A) - 3;
    p1[2] = AF(o, u16, 0x9C);
    if (func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
        AF(o, u16, 6) = p2[0];
        AF(o, u16, 0xA) = p2[1];
        AF(o, u16, 0xE) = p2[2];
        AF(o, u16, 0x16E) = (u8)func_8014C918(o, AF(a, u8, 0x75));
        return 1;
    }
    AF(a, u8, 0x74) = 0;
    AF(o, u8 *, 0x174) = NULL;
    return 0;
}

s32 func_8014D610(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    u8 *a;
    s32 f;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400)) {
            f = AF(a, s32, 0x58);
            if (f != 0 && AF(a, s16, 0xA) >= AF(arg0, s16, 0xA)
                && func_80135A4C(AF(a, s32, 0x20), f, arg1, arg2) != 0) {
                AF(arg0, u8 *, 0x174) = a;
                AF(a, u8, 0x74) = 1;
                AF(arg0, s16, 6) = arg2->vx;
                AF(arg0, s16, 0xA) = arg2->vy;
                AF(arg0, s16, 0xE) = arg2->vz;
                AF(arg0, s16, 0x16E) = func_8014C918(arg0, AF(a, u8, 0x75)) & 0xFF;
                return 1;
            }
        }
    }
    return 0;
}

extern s32 func_8014D790();

s32 func_8014D738()
{
    SetSpadStackNested();
    D_801ED4D8 = func_8014D790();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014DD8C();
extern s32 func_8014D820();

s32 func_8014D790(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, void *, 0x170) == NULL) {
        r = func_8014DD8C(arg0, &a, &b);
    } else {
        r = func_8014D820(arg0, &a, &b);
    }
    return r;
}

extern SVECTOR D_801152A8;
extern u8 D_8018F15C;
extern void func_800139C8();
extern s32 func_80135888();
extern s32 func_8014DCE0();

s32 func_8014D820(u8 *o, u16 *p1, u16 *p2) {
    SVECTOR c[3];
    SVECTOR q;
    SVECTOR b;
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame has 16 unused bytes at sp+0x38 */
    VECTOR v;
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    s32 k;
    s32 ang;
    u8 *a;
    u8 *e;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        b.vx = dx;
        b.vy = p2[1] - p1[1];
        b.vz = p2[2] - p1[2];
        a = AF(o, u8 *, 0x170);
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x1000) && AF(a, s32, 0x58) != 0
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            ex = AF(a, u16, 6) - AF(o, u16, 6);
            ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
            r = (s16)ratan2(dz, dx);
            if ((s16)func_80012A60(r, (s16)ratan2(ez, ex)) < 0x400) {
                v.vx = v.vy = v.vz = 0;
                q.vx = AF(a, s16, 6);
                q.vy = AF(a, s16, 0xA);
                q.vz = AF(a, s16, 0xE);
                b.vx = q.vx + b.vx;
                b.vy = q.vy + b.vy + 8;
                b.vz = q.vz + b.vz;
                if (D_800B9A08 != 0x3008) {
                    for (e = &D_801202A0; e < &D_801202A0 + 0x6480; e += 0x10C) {
                        if (e != a && AF(e, u16, 0) != 0 && AF(e, u16, 0x5C) != 0 && AF(e, s32, 0x58) != 0) {
                            func_80135888(AF(e, s32, 0x20), AF(e, s32, 0x58), &q, &b);
                        }
                    }
                } else {
                    ang = ratan2(q.vx - b.vx, q.vz - b.vz) & 0xFFF;
                    func_800139C8(ang, &D_8018F15C, &c[0]);
                    func_800139C8((s16)(ang - 0x155), &D_8018F15C, &c[1]);
                    func_800139C8((s16)(ang + 0x155), &D_8018F15C, &c[2]);
                    c[0].vx += q.vx;
                    c[0].vy = q.vy;
                    c[0].vz += q.vz;
                    c[1].vx += q.vx;
                    c[1].vy = q.vy;
                    c[1].vz += q.vz;
                    c[2].vx += q.vx;
                    c[2].vy = q.vy;
                    c[2].vz += q.vz;
                    for (e = &D_801202A0; e < &D_801202A0 + 0x6480; e += 0x10C) {
                        if (e != a && AF(e, u16, 0) != 0 && AF(e, u16, 0x5C) != 0 && AF(e, s32, 0x58) != 0
                            && func_8014DCE0(e, &q, c) != 0) {
                            b = q;
                        }
                    }
                }
                k = func_80133784(0, &q, &b);
                if (k == 0 || (k == 0x2000 && ((u16)D_801152A8.vx | (u16)D_801152A8.vz) == 0)) {
                    AF(a, u16, 6) = b.vx - v.vx;
                    AF(a, u16, 0xA) = b.vy;
                    AF(a, u16, 0xE) = b.vz - v.vz;
                    b.vx -= q.vx;
                    b.vy -= q.vy;
                    b.vz -= q.vz;
                    AF(o, u16, 6) = p1[0] + b.vx;
                    AF(o, u16, 0xA) = p1[1] + (u16)(b.vy + 0x10);
                    AF(o, u16, 0xE) = p1[2] + b.vz;
                } else {
                    AF(o, u16, 6) = p1[0];
                    AF(o, s16, 0xA) = p1[1] + 0x10;
                    AF(o, u16, 0xE) = p1[2];
                }
                return 1;
            }
        }
    }
    AF(o, u8 *, 0x170) = NULL;
    return 0;
}

extern s32 func_80135888();

s32 func_8014DCE0(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    VECTOR v;
    s32 i;
    SVECTOR *p;
    v = *(VECTOR *)(AF(arg0, s32, 0x58) & 0x0FFFFFFF);
    for (i = 0, p = arg2; i < 3; i++, p++) {
        if (func_80135888(AF(arg0, s32, 0x20), &v, arg1, p) != 0) {
            return 1;
        }
    }
    return 0;
}

s32 func_8014DD8C(u8 *o, u16 *p1, u16 *p2) {
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    u8 *a;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && (AF(a, u16, 0x5C) & 0x1000)
                && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
                ex = AF(a, u16, 6) - AF(o, u16, 6);
                ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
                r = (s16)ratan2(dz, dx);
                if ((s16)func_80012A60(r, (s16)ratan2(ez, ex)) < 0x400) {
                    AF(o, u8 *, 0x170) = a;
                    AF(o, u16, 6) = p2[0];
                    AF(o, s16, 0xA) = p2[1] + 0x10;
                    AF(o, u16, 0xE) = p2[2];
                    return 1;
                }
            }
        }
    }
    return 0;
}

extern s32 func_8014DF94();

s32 func_8014DF3C(void) {
    SetSpadStackNested();
    D_801ED4D8 = func_8014DF94();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014E284();
extern s32 func_8014E048();

s32 func_8014DF94(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    b.vx -= a.vx;
    b.vz -= a.vz;
    b.vx = a.vx - b.vx;
    b.vz = a.vz - b.vz;
    if (AF(arg0, void *, 0x170) != NULL) {
        return func_8014E048(arg0, &a, &b);
    } else {
        return func_8014E284(arg0, &a, &b);
    }
}

s32 func_8014E048(u8 *o, u16 *p1, u16 *p2) {
    SVECTOR from;
    SVECTOR d;
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    u8 *a;
    s32 h;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        d.vx = dx;
        d.vy = p2[1] - p1[1];
        d.vz = p2[2] - p1[2];
        d.vx = -d.vx;
        d.vz = -d.vz;
        a = AF(o, u8 *, 0x170);
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x1000) && AF(a, s32, 0x58) != 0
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            ex = AF(a, u16, 6) - AF(o, u16, 6);
            ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
            r = (s16)ratan2(dz, dx);
            if ((s16)func_80012A60(r, (s16)ratan2(ez, ex)) < 0x400) {
                from.vx = AF(a, s16, 6);
                from.vy = AF(a, s16, 0xA);
                from.vz = AF(a, s16, 0xE);
                d.vx = from.vx + d.vx;
                d.vy = from.vy + d.vy;
                d.vz = from.vz + d.vz;
                h = func_80133784(0, &from, &d);
                if (h == 0 || ((h & 0x2000) && ((u16)D_801152A8.vx | (u16)D_801152A8.vz) == 0)) {
                    AF(a, s16, 6) = d.vx;
                    AF(a, s16, 0xA) = d.vy;
                    AF(a, s16, 0xE) = d.vz;
                } else {
                    AF(o, u16, 6) = p1[0];
                    AF(o, s16, 0xA) = p1[1] + 0x10;
                    AF(o, u16, 0xE) = p1[2];
                }
                return 1;
            }
        }
    }
    AF(o, void *, 0x170) = NULL;
    return 0;
}

s32 func_8014E284(u8 *o, u16 *p1, u16 *p2) {
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    u8 *a;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && (AF(a, u16, 0x5C) & 0x1000)
                && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
                ex = AF(a, u16, 6) - AF(o, u16, 6);
                ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
                r = (s16)ratan2(dz, dx);
                if ((s16)func_80012A60(r, (s16)ratan2(ez, ex)) < 0x400) {
                    AF(o, u8 *, 0x170) = a;
                    AF(o, u16, 6) = p2[0];
                    AF(o, s16, 0xA) = p2[1] + 0x10;
                    AF(o, u16, 0xE) = p2[2];
                    return 1;
                }
            }
        }
    }
    return 0;
}

extern s32 func_8014E48C();

s32 func_8014E434()
{
    SetSpadStackNested();
    D_801ED4D8 = func_8014E48C();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014E5B4();
extern s32 func_8014E514();

s32 func_8014E48C(u8 *o) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(o, u16, 0x88);
    a.vy = AF(o, u16, 0x8A);
    a.vz = AF(o, u16, 0x8C);
    b.vx = AF(o, u16, 6);
    b.vy = AF(o, u16, 0xA);
    b.vz = AF(o, u16, 0xE);
    if (AF(o, s32, 0x17C) == 0) {
        r = func_8014E5B4(o, &a, &b);
    } else {
        r = func_8014E514(o, &a, &b);
    }
    return r;
}

s32 func_8014E514(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x17C);
    if ((AF(temp_s0, u16, 0) == 0) || !(AF(temp_s0, u16, 0x5C) & 0x40) || (temp_a1 = AF(temp_s0, s32, 0x58), (temp_a1 == 0)) || (func_80135888(AF(temp_s0, s32, 0x20), temp_a1, arg1, arg2) == 0)) {
        AF(arg0, void *, 0x17C) = NULL;
        return 0;
    }
    AF(arg0, u16, 6) = (u16) AF(temp_s0, u16, 6);
    AF(arg0, u16, 0xE) = (u16) AF(temp_s0, u16, 0xE);
    return 1;
}

s32 func_8014E5B4(s32 arg0, s32 arg1, s32 arg2) {
    u8 *a;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x40) && AF(a, s32, 0x58) != 0
            && func_80135888(AF(a, s32, 0x20), AF(a, s32, 0x58), arg1, arg2) != 0) {
            AF(arg0, u8 *, 0x17C) = a;
            AF(arg0, u16, 6) = AF(a, u16, 6);
            AF(arg0, u16, 0xE) = AF(a, u16, 0xE);
            return 1;
        }
    }
    return 0;
}

extern s32 func_8014E6F8();

s32 func_8014E6A0()
{
    SetSpadStackNested();
    D_801ED4D8 = func_8014E6F8();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014E83C();
extern s32 func_8014E790();

s32 func_8014E6F8(u8 *arg0) {
    s16 p1[3];
    s16 p2[3];

    p1[0] = AF(arg0, s16, 0x88);
    p1[1] = AF(arg0, s16, 0x8A);
    p1[2] = AF(arg0, s16, 0x8C);
    p2[0] = AF(arg0, s16, 6);
    p2[1] = AF(arg0, s16, 0xA);
    p2[2] = AF(arg0, s16, 0xE);
    if (AF(arg0, s32, 0x180) != 0) {
        return func_8014E790(arg0, p1, p2);
    }
    p1[1] -= 0x54;
    p2[1] -= 0x54;
    return func_8014E83C(arg0, p1, p2);
}

s32 func_8014E790(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x180);
    if ((AF(temp_s0, u16, 0) == 0) || !(AF(temp_s0, u16, 0x5C) & 0x20) || (temp_a1 = AF(temp_s0, s32, 0x58), (temp_a1 == 0)) || (func_80135888(AF(temp_s0, s32, 0x20), temp_a1, arg1, arg2) == 0)) {
        AF(arg0, void *, 0x180) = NULL;
        return 0;
    }
    AF(arg0, u16, 6) = (u16) AF(temp_s0, u16, 6);
    AF(arg0, u16, 0xA) = (u16) AF(temp_s0, u16, 0xA);
    AF(arg0, u16, 0xE) = (u16) AF(temp_s0, u16, 0xE);
    return 1;
}

s32 func_8014E83C(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *a;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x20) && AF(a, s32, 0x58) != 0
            && func_80135888(AF(a, s32, 0x20), AF(a, s32, 0x58), arg1, arg2) != 0) {
            AF(arg0, u8 *, 0x180) = a;
            AF(arg0, u16, 6) = AF(a, u16, 6);
            AF(arg0, u16, 0xA) = AF(a, u16, 0xA);
            AF(arg0, u16, 0xE) = AF(a, u16, 0xE);
            return 1;
        }
    }
    return 0;
}

extern s32 func_8014E98C();

s32 func_8014E934() {
    SetSpadStackNested();
    D_801ED4D8 = func_8014E98C();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014EA4C();

s32 func_8014E98C(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 i;
    s32 ret;

    ret = 0;
    i = 2;
    if (!(AF(arg0, s32, 0x44) & 0x80000) && !(AF(arg0, s32, 0x1F8) & 0x4000000)) {
        do {
            a.vx = AF(arg0, s16, 0x88);
            a.vy = AF(arg0, s16, 0x8A) - 0x10;
            a.vz = AF(arg0, s16, 0x8C);
            b.vx = AF(arg0, s16, 6);
            b.vy = AF(arg0, s16, 0xA) - 0x10;
            b.vz = AF(arg0, s16, 0xE);
            i--;
            ret |= func_8014EA4C(arg0, &a, &b, i);
        } while (i != 0);
    }
    return ret;
}

extern s32 D_801150D8;
extern s16 D_801152AA;
extern s16 D_80126720;
extern s16 D_80126724;

s32 func_8014EA4C(u8 *o, SVECTOR *p1, SVECTOR *p2) {
    VECTOR w; /* MATCH-TRICK: unused local, frame pad (0x10 bytes below the dead copy v at sp+0x20) */
    SVECTOR v;
    u8 *a;
    s32 dx;
    s32 dz;
    s32 r;
    s32 t;

    r = 0;
    v = *p2; /* never read: the original keeps this dead copy too */
    dx = 8;
    dz = 8;
    switch ((D_800B99DA & 0x60) >> 5) {
    case 0:
    case 1:
        dx = 7;
        break;
    case 2:
        dz = 7;
        break;
    }
    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
            && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
            D_801150D8 = 0;
            if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                if (D_801150D8 & 1) {
                    if (!(AF(a, u16, 0x5C) & 0x10)) {
                        if (D_80126720 - p1->vx >= 0) {
                            AF(o, s16, 6) = p2->vx - dx;
                        } else {
                            AF(o, s16, 6) = p2->vx + dx;
                        }
                        if (D_80126724 - p1->vz >= 0) {
                            AF(o, s16, 0xE) = p2->vz - dz;
                        } else {
                            AF(o, s16, 0xE) = p2->vz + dz;
                        }
                    }
                    r |= 2;
                } else {
                    AF(o, s16, 6) = p2->vx;
                    AF(o, s16, 0xA) = p2->vy + 0x10;
                    AF(o, s16, 0xE) = p2->vz;
                    r |= 1;
                    if (AF(a, s32, 0x58) < 0) {
                        t = D_801152AA;
                        if (t < 0) {
                            t = -t;
                        }
                        if ((s16)t > 0x800) {
                            if (D_80126720 - p2->vx >= 0) {
                                AF(o, s16, 6) = p2->vx - dx;
                            } else {
                                AF(o, s16, 6) = p2->vx + dx;
                            }
                            if (D_80126724 - p2->vz >= 0) {
                                AF(o, s16, 0xE) = p2->vz - dz;
                            } else {
                                AF(o, s16, 0xE) = p2->vz + dz;
                            }
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern s32 func_8014ED80();

s32 func_8014ED28() {
    SetSpadStackNested();
    D_801ED4D8 = func_8014ED80();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014EE14();

s32 func_8014ED80(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    if (AF(arg0, s32, 0x44) & 0x80000) {
        return 0;
    }
    if (AF(arg0, s32, 0x1F8) & 0x4000000) {
        return 0;
    }
    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    return func_8014EE14(arg0, &a, &b);
}

s32 func_8014EE14(u8 *o, SVECTOR *p1, SVECTOR *p2) {
    u8 *a;
    s32 dx;
    s32 dz;
    s32 r;
    s32 t;

    r = 0;
    dx = 8;
    dz = 8;
    switch ((D_800B99DA & 0x60) >> 5) {
    case 0:
    case 1:
        dx = 7;
        break;
    case 2:
        dz = 7;
        break;
    }
    if (AF(o, s32, 0x44) & 0x100000) {
        for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
                && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
                D_801150D8 = 0;
                if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                    if (D_801150D8 & 1) {
                        if (D_80126720 - p2->vx >= 0) {
                            AF(o, s16, 6) = p2->vx - dx;
                        } else {
                            AF(o, s16, 6) = p2->vx + dx;
                        }
                        if (D_80126724 - p2->vz >= 0) {
                            AF(o, s16, 0xE) = p2->vz - dz;
                        } else {
                            AF(o, s16, 0xE) = p2->vz + dz;
                        }
                        r = 1;
                    } else {
                        AF(o, s16, 6) = p2->vx;
                        AF(o, s16, 0xA) = p2->vy + 0x10;
                        AF(o, s16, 0xE) = p2->vz;
                        r = 1;
                    }
                }
            }
        }
    } else {
        for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
                && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
                D_801150D8 = 0;
                if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                    if (D_801150D8 & 1) {
                        if (D_80126720 - p2->vx >= 0) {
                            AF(o, s16, 6) = p2->vx - dx;
                        } else {
                            AF(o, s16, 6) = p2->vx + dx;
                        }
                        if (D_80126724 - p2->vz >= 0) {
                            AF(o, s16, 0xE) = p2->vz - dz;
                        } else {
                            AF(o, s16, 0xE) = p2->vz + dz;
                        }
                    } else {
                        AF(o, s16, 6) = p2->vx;
                        AF(o, s16, 0xA) = p2->vy + 0x10;
                        AF(o, s16, 0xE) = p2->vz;
                        r = 1;
                        if (AF(a, s32, 0x58) < 0) {
                            t = D_801152AA;
                            if (t < 0) {
                                t = -t;
                            }
                            if ((s16)t > 0x800) {
                                if (D_80126720 - p2->vx >= 0) {
                                    AF(o, s16, 6) = p2->vx - dx;
                                } else {
                                    AF(o, s16, 6) = p2->vx + dx;
                                }
                                if (D_80126724 - p2->vz >= 0) {
                                    AF(o, s16, 0xE) = p2->vz - dz;
                                } else {
                                    AF(o, s16, 0xE) = p2->vz + dz;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern s32 func_8014F24C();

s32 func_8014F1F4(void) {
    SetSpadStackNested();
    D_801ED4D8 = func_8014F24C();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014F2E0();

s32 func_8014F24C(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    if (AF(arg0, s32, 0x44) & 0x80000) {
        return 0;
    }
    if (AF(arg0, s32, 0x1F8) & 0x4000000) {
        return 0;
    }
    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    return func_8014F2E0(arg0, &a, &b);
}

extern s32 D_801150D8;

s32 func_8014F2E0(u8 *o, s32 p1, s32 p2) {
    s32 r;
    u8 *a;

    r = 0;
    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
            && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
            D_801150D8 = 0;
            if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                r = 1;
            }
        }
    }
    return r;
}

s32 func_8014F3E8(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (!(AF(arg0, s32, 0x44) & 0x40000)) {
        if ((AF(arg0, s16, 6) == AF(arg0, s16, 0x88)) && (AF(arg0, s16, 0xA) == AF(arg0, s16, 0x8A)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0x8C))) {
            return func_8014F468();
        }
        var_v0 = func_8014F6F4();
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

extern s32 D_801ED4DC;
extern s32 func_8014F4C0();

s32 func_8014F468(void) {
    SetSpadStackNested();
    D_801ED4DC = func_8014F4C0();
    ResetSpadStack();
    return D_801ED4DC;
}

extern s32 func_8014F74C();
extern SVECTOR D_800D3918;

s32 func_8014F4C0(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    if (AF(arg0, s16, 0x146) != 0) {
        return func_8014F74C(arg0);
    }
    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A);
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) + 8;
    b.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, s16, 0x146) != 0) {
        b.vx += AF(arg0, s16, 0x140);
        b.vy += AF(arg0, s16, 0x142);
        b.vz += AF(arg0, s16, 0x144);
    }
    r = func_80133784(0, &a, &b);
    if (r != 0) {
        if (((u8 *)&b)[6] != 0) {
            AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
        }
        AF(arg0, s16, 0x16E) = (u16)b.pad >> 13;
        if (r == 0x2000) {
            AF(arg0, SVECTOR, 0x120) = D_801152A8;
        } else if (r == 0x4000) {
            AF(arg0, SVECTOR, 0x120) = *(SVECTOR *)&D_801152B0;
        }
        if (AF(arg0, u16, 0x16C) == 0x1D) {
            if (!(func_80029178(0x21) & 0xFF)) {
                r &= ~0x2000;
                r |= 0x4000;
                *(SVECTOR *)&D_801152B0 = D_801152A8;
                D_801152BC = 1;
            }
        }
        return r;
    }
    AF(arg0, SVECTOR, 0x120) = D_800D3918;
    if (((u8 *)&b)[6] != 0) {
        AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
    }
    return 0;
}

extern s32 D_801ED4DC;
extern s32 func_8014F74C();

s32 func_8014F6F4(void) {
    SetSpadStackNested();
    D_801ED4DC = func_8014F74C();
    ResetSpadStack();
    return D_801ED4DC;
}

s32 func_8014F74C(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    s32 r;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A);
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = c.vx = AF(arg0, s16, 6);
    b.vy = c.vy = AF(arg0, s16, 0xA);
    b.vz = c.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, s16, 0x146) != 0) {
        b.vx += AF(arg0, s16, 0x140);
        b.vy += AF(arg0, s16, 0x142);
        b.vz += AF(arg0, s16, 0x144);
    }
    r = func_80133784(0, &a, &b);
    if (r != 0) {
        AF(arg0, s16, 6) = b.vx;
        AF(arg0, s16, 0xA) = b.vy;
        AF(arg0, s16, 0xE) = b.vz;
        if (((u8 *)&b)[6] != 0) {
            AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
        }
        AF(arg0, s16, 0x16E) = (u16)b.pad >> 13;
        if (r == 0x2000) {
            AF(arg0, SVECTOR, 0x120) = D_801152A8;
        } else if (r == 0x4000) {
            AF(arg0, SVECTOR, 0x120) = *(SVECTOR *)&D_801152B0;
        }
        if (AF(arg0, u16, 0x16C) == 0x1D) {
            if (!(func_80029178(0x21) & 0xFF)) {
                r &= ~0x2000;
                r |= 0x4000;
                *(SVECTOR *)&D_801152B0 = D_801152A8;
                D_801152BC = 1;
            }
        }
        return r;
    }
    AF(arg0, SVECTOR, 0x120) = D_800D3918;
    if (((u8 *)&b)[6] != 0) {
        AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
    }
    if (a.vx != c.vx || a.vy != c.vy || a.vz != c.vz) {
        if (a.vx == b.vx && a.vy == b.vy && a.vz == b.vz) {
            return 0x8000;
        }
    }
    return 0;
}

extern s32 func_8014FA70();

s32 func_8014FA04(s32 arg0) {
    if (AF(arg0, s32, 0x44) & 0x40000) {
        return 0;
    }
    SetSpadStackNested();
    D_801ED4DC = func_8014FA70();
    ResetSpadStack();
    return D_801ED4DC;
}

s32 func_8014FA70(s32 arg0) {
    SVECTOR from;
    SVECTOR to;
    s32 r;

    from.vx = AF(arg0, s16, 0x88);
    from.vy = AF(arg0, s16, 0x8A);
    from.vz = AF(arg0, s16, 0x8C);
    to.vx = AF(arg0, s16, 0x6);
    to.vy = AF(arg0, s16, 0xA);
    to.vz = AF(arg0, s16, 0xE);
    r = func_80133784(1, &from, &to);
    if (r != 0) {
        AF(arg0, s16, 0x6) = to.vx;
        AF(arg0, s16, 0xA) = to.vy;
        AF(arg0, s16, 0xE) = to.vz;
        if (((u8 *)&to)[6] != 0) {
            AF(arg0, u16, 0x16C) = ((u8 *)&to)[6];
        }
        AF(arg0, u16, 0x16E) = (u16)to.pad >> 13;
        if (AF(arg0, u16, 0x16C) == 0x1D) {
            if (!(func_80029178(0x21) & 0xFF)) {
                r &= ~0x2000;
                r |= 0x4000;
                *(SVECTOR *)&D_801152B0 = D_801152A8;
                D_801152BC = 1;
            }
        }
        return r;
    }
    if (((u8 *)&to)[6] != 0) {
        AF(arg0, u16, 0x16C) = ((u8 *)&to)[6];
    }
    return 0;
}

extern s32 func_8014FC18();

s32 func_8014FBC0(void) {
    SetSpadStackNested();
    D_801ED4DC = func_8014FC18();
    ResetSpadStack();
    return D_801ED4DC;
}

extern s32 func_80133784();

s32 func_8014FC18(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) + 0x10;
    b.vz = AF(arg0, s16, 0xE);
    r = func_80133784(1, &a, &b);
    if (r) {
        AF(arg0, s16, 6) = b.vx;
        AF(arg0, s16, 0xA) = b.vy;
        AF(arg0, s16, 0xE) = b.vz;
        if (((u8 *)&b)[6]) {
            AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
        }
        AF(arg0, s16, 0x16E) = (u16)b.pad >> 13;
        return r;
    }
    if (((u8 *)&b)[6]) {
        AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
    }
    return 0;
}

extern s32 func_8014FD54();

s32 func_8014FCFC(void) {
    SetSpadStackNested();
    D_801ED4D8 = func_8014FD54();
    ResetSpadStack();
    return D_801ED4D8;
}

s32 func_8014FD54(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = 0;
    a.vy = 0;
    a.vz = 7;
    func_80149290(arg0, &a, &a);
    b.vx = 0;
    b.vy = 0;
    b.vz = -0x18;
    func_80149290(arg0, &b, &b);
    r = func_80133784(1, &a, &b);
    if (r != 0) {
        if ((r & 0x8000) && ((u8 *)&b)[6] == 0x15) {
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 func_8014FDF4(s32 arg0) {
    if ((AF(arg0, s16, 6) != AF(arg0, s16, 0x88)) || (AF(arg0, s16, 0xA) != AF(arg0, s16, 0x8A)) || (AF(arg0, s16, 0xE) != AF(arg0, s16, 0x8C))) {
        return func_80150170();
    }
    return func_8014FE60();
}

extern SVECTOR D_801152A8;
extern s32 func_8014FFDC();
extern s32 func_80150150();

s32 func_8014FE60(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR n;
    s32 r1;
    s32 r2;

    a.vx = b.vx = AF(arg0, s16, 6);
    a.vy = b.vy = AF(arg0, s16, 0xA) - 0x10;
    a.vz = b.vz = AF(arg0, s16, 0xE);
    r1 = func_8014FFDC(arg0, &a, &n);
    r2 = func_80150150(arg0, &b);
    if (r2 == 0) {
        b.vy = 0x7FFF;
    }
    if (r1 | r2) {
        if (a.vy < b.vy) {
            AF(arg0, s16, 0x78) = a.vx;
            AF(arg0, s16, 0x7A) = a.vy;
            AF(arg0, s16, 0x7C) = a.vz;
            AF(arg0, SVECTOR, 0x80) = n;
        } else {
            AF(arg0, s16, 0x78) = b.vx;
            AF(arg0, s16, 0x7A) = b.vy;
            AF(arg0, s16, 0x7C) = b.vz;
            AF(arg0, SVECTOR, 0x80) = D_801152A8;
        }
        AF(arg0, u16, 0x7E) &= ~1;
        return 1;
    }
    AF(arg0, s16, 0x78) = a.vx;
    AF(arg0, s16, 0x7A) = 0x7FFF;
    AF(arg0, s16, 0x7C) = a.vz;
    AF(arg0, u16, 0x7E) |= 1;
    return 0;
}

extern s32 func_80135D20();

s32 func_8014FFDC(s32 arg0, SVECTOR *arg1, SVECTOR *arg2) {
    SVECTOR v;
    SVECTOR t;
    u8 *a;
    s32 r = 0;

    v = *arg1;
    arg1->vy = 0x7FFF;
    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0) {
            t = v;
            if (func_80135D20(AF(a, s32, 0x20), AF(a, s32, 0x58), &t) != 0) {
                r = 1;
                if (t.vy < arg1->vy) {
                    *arg1 = t;
                    *arg2 = *(SVECTOR *)&D_801152A8;
                }
            }
        }
    }
    return r;
}

s32 func_80150150(s32 arg0, s32 arg1) {
    return func_80134510(arg1) != 0;
}

extern s32 func_801502EC();
extern s32 func_80150460();

s32 func_80150170(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR n;
    s32 r1;
    s32 r2;

    a.vx = b.vx = AF(arg0, s16, 6);
    a.vy = b.vy = AF(arg0, s16, 0xA) - 0x10;
    a.vz = b.vz = AF(arg0, s16, 0xE);
    r1 = func_801502EC(arg0, &a, &n);
    r2 = func_80150460(arg0, &b);
    if (r2 == 0) {
        b.vy = 0x7FFF;
    }
    if (r1 | r2) {
        if (a.vy < b.vy) {
            AF(arg0, s16, 0x78) = a.vx;
            AF(arg0, s16, 0x7A) = a.vy;
            AF(arg0, s16, 0x7C) = a.vz;
            AF(arg0, SVECTOR, 0x80) = n;
        } else {
            AF(arg0, s16, 0x78) = b.vx;
            AF(arg0, s16, 0x7A) = b.vy;
            AF(arg0, s16, 0x7C) = b.vz;
            AF(arg0, SVECTOR, 0x80) = D_801152A8;
        }
        AF(arg0, u16, 0x7E) &= ~1;
        return 1;
    }
    AF(arg0, s16, 0x78) = a.vx;
    AF(arg0, s16, 0x7A) = 0x7FFF;
    AF(arg0, s16, 0x7C) = a.vz;
    AF(arg0, u16, 0x7E) |= 1;
    return 0;
}

extern s32 func_80135D20();

s32 func_801502EC(s32 arg0, SVECTOR *pos, SVECTOR *norm) {
    SVECTOR p;
    SVECTOR t;
    u8 *a;
    s32 hit;

    hit = 0;
    p = *pos;
    pos->vy = 0x7FFF;
    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0) {
            t = p;
            if (func_80135D20(AF(a, s32, 0x20), AF(a, s32, 0x58), &t) != 0) {
                hit = 1;
                if (t.vy < pos->vy) {
                    *pos = t;
                    *norm = D_801152A8;
                }
            }
        }
    }
    return hit;
}

s32 func_80150460(s32 arg0, s32 arg1) {
    return func_80134510(arg1) != 0;
}

extern s32 func_801504D8();

s32 func_80150480(void) {
    SetSpadStackNested();
    D_801ED4D8 = func_801504D8();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_80150528();

s32 func_801504D8(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 y;

    a.vx = b.vx = AF(arg0, u16, 6);
    y = AF(arg0, u16, 0xA);
    a.vy = y - 3;
    a.vz = b.vz = AF(arg0, u16, 0xE);
    b.vy = y + 1;
    return func_80150528(arg0, &a, &b);
}

s32 func_80150528(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x80) && AF(a, s32, 0x58) != 0
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            AF(o, u8 *, 0x1A4) = a;
            return 1;
        }
    }
    return 0;
}

s32 func_801505FC(s32 arg0) {
    u8 *a;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x100) && func_8014C278(arg0, (s32)a, 0x30) != 0) {
            func_801506A4(arg0, a);
            return 1;
        }
    }
    return 0;
}

extern u16 D_8018F16C[];
extern u16 D_8018F174[];
extern u16 D_8018F17C[];
extern void func_8015086C();
extern void func_80150820();

void func_801506A4(s32 arg0, s32 arg1) {
    s32 kind;

    kind = AF(arg1, u16, 0);
    AF(arg1, u16, 0x5C) |= 1;
    switch (kind) {
    case 0x31:
        func_80147324(0x452);
        func_8014ADA8(arg0, D_8018F16C[AF(arg1, s16, 0x70)]);
        func_8014ACE8(arg0, 3, D_8018F16C[AF(arg1, s16, 0x70)]);
        break;
    case 0x32:
        if (D_80078EB4 != 0) {
            func_80147324(0x452);
            func_8014BB24(arg0, D_8018F174[AF(arg1, s16, 0x70)], 1);
            func_8014ACE8(arg0, 2, D_8018F174[AF(arg1, s16, 0x70)]);
        }
        break;
    case 0x33:
        func_80147324(0x452);
        func_80150820(arg0, D_8018F17C[AF(arg1, s16, 0x70)]);
        break;
    case 0xC5:
    case 0x27B:
        func_80147324(0x452);
        func_8015086C(arg0);
        break;
    }
}

void func_80150820(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_8014BD24(arg0, arg1);
        func_8014ACE8(arg0, 4, arg1);
    }
}

void func_8015086C(s32 arg0) {
    func_80146994(0x48, arg0, 0, 0);
    func_8014B2F8(arg0);
    func_80147324(0xA1B);
}

s32 func_801508B4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8014A2E4(arg0);
    if (temp_v0 != 0) {
        func_8014A380(arg0, temp_v0);
        return 1;
    }
    return 0;
}

s32 func_801508F8(s32 arg0) {
    if ((AF(arg0, u8, 0x1BF) != 0) && (AF(arg0, u16, 0) != 0x1A)) {
        do {
        } while (func_8015094C(arg0) != 0);
    }
}

extern u8 D_801EC5FC;
extern s32 D_8018F184;
extern s32 func_80021174();
s32 func_8015094C(u8 *arg0) {
    VECTOR v;
    MATRIX m; /* MATCH-TRICK: unused local, the original frame has 0x20 unused bytes between v and c */
    VECTOR c;
    VECTOR w; /* MATCH-TRICK: unused local, the original frame has 0x10 unused bytes above c */
    u8 *p;
    s32 d;
    s32 a;

    c = *(VECTOR *)&D_801EC5FC;
    p = &D_80126948;
    v.vx = AF(arg0, s16, 6);
    v.vy = D_80126994;
    v.vz = AF(arg0, s16, 0xE);
    if (func_80021174(D_8018F184, &v) == 0) {
        d = D_80126990 - AF(arg0, s16, 6);
        a = d;
        if (d < 0) a = -d;
        if (a >= 5) {
            if (d >= 0) AF(arg0, s16, 6) += 4;
            else AF(arg0, s16, 6) -= 4;
        }
        d = AF(p, s32, 0x50) - AF(arg0, s16, 0xE);
        a = d;
        if (d < 0) a = -d;
        if (a >= 5) {
            if (d >= 0) AF(arg0, s16, 0xE) += 4;
            else AF(arg0, s16, 0xE) -= 4;
        }
        return 1;
    }
    return 0;
}

void func_80150A70(s32 arg0) {
    if (AF(arg0, s16, 6) != AF(arg0, s16, 0x88) || AF(arg0, s16, 0xA) != AF(arg0, s16, 0x8A) || AF(arg0, s16, 0xE) != AF(arg0, s16, 0x8C)) {
        if (!(AF(arg0, s32, 0x44) & 0x40000)) {
            SetSpadStackNested();
            D_801ED4DC = func_8014FA70(arg0);
            ResetSpadStack();
        }
        func_80015978(arg0 + 4, arg0 + 0x88);
    }
}

extern void (*D_8018F188[])();

void func_80150B28(u8 *arg0) {
    u16 v;
    s32 i;

    if (!(D_800AE6B0 & 0x80FFFFFF)) {
        v = AF(arg0, u16, 0x16C);
        if (v != 0 && v < 0x26) {
            i = v - 1;
            D_8018F188[i](arg0);
        }
    }
    AF(arg0, u16, 0x16C) = 0;
}

void func_80150B9C(void) {
}

void func_80150BA4(s32 arg0) {
    func_80151184(arg0, 1, 0x10);
}

void func_80150BC8(s32 arg0, s32 arg1) {
    if (func_801619D0(arg0, arg1) != 0) {
        if (D_800B99DA & 7) {
            func_80146994(0x34, arg0, 0, 0);
        }
    } else if (!(func_8014BF6C() & 0xFF)) {
        func_80151184(arg0, 0xC003, 0x10);
    }
}

void func_80150C48(u8 *arg0) {
    if (func_80150480() != 0) {
        D_800AE6B0 = AF(AF(arg0, void *, 0x1A4), s32, 0xDC);
        D_800AE6DC = AF(AF(arg0, void *, 0x1A4), u16, 0xFC);
    }
}

void func_80150CA0(s32 arg0) {
    func_80151184(arg0, 0xE001, 0x10);
}

void func_80150CC4(s32 arg0) {
    func_80150EC4(arg0, 0);
}

void func_80150CE4(s32 arg0) {
    func_80150EC4(arg0, 1);
}

void func_80150D04(s32 arg0) {
    func_80150EC4(arg0, 2);
}

void func_80150D24(s32 arg0) {
    func_80150EC4(arg0, 3);
}

void func_80150D44(s32 arg0) {
    func_80150EC4(arg0, 4);
}

void func_80150D64(s32 arg0) {
    func_80150EC4(arg0, 5);
}

void func_80150D84(s32 arg0) {
    func_80150EC4(arg0, 6);
}

void func_80150DA4(s32 arg0) {
    func_80150EC4(arg0, 7);
}

void func_80150DC4(s32 arg0) {
    func_80150EC4(arg0, 8);
}

void func_80150DE4(s32 arg0) {
    func_80150EC4(arg0, 9);
}

void func_80150E04(s32 arg0) {
    func_80150EC4(arg0, 0xA);
}

void func_80150E24(s32 arg0) {
    func_80150EC4(arg0, 0xB);
}

void func_80150E44(s32 arg0) {
    func_80150EC4(arg0, 0xC);
}

void func_80150E64(s32 arg0) {
    func_80150EC4(arg0, 0xD);
}

void func_80150E84(s32 arg0) {
    func_80150EC4(arg0, 0xE);
}

void func_80150EA4(s32 arg0) {
    func_80150EC4(arg0, 0xF);
}

extern u8 D_800AE6BE;
extern u8 D_800AE6C0;
extern s32 *D_800AE6C4;
extern u16 D_800AE6C8;
extern u16 D_800AE6CA;
extern u16 D_800AE6CC;
extern u16 D_800AE6CE;
extern u8 D_801201F8;

void func_80150EC4(u8 *arg0, s32 arg1) {
    struct blk { s32 w[41]; };
    s32 *p;
    D_800AE6C0 = 1;
    D_800AE6C8 = AF(arg0, u16, 6);
    D_800AE6CA = AF(arg0, u16, 0xA);
    D_800AE6CC = AF(arg0, u16, 0xE);
    D_800AE6CE = AF(AF(arg0, void *, 0x20), u16, 0x12);
    p = &D_800AE6C4[arg1 + 1];
    D_800AE6B0 = *p;
    D_800AE6BE = arg1 + 1;
    *(struct blk *)&D_801201F8 = *(struct blk *)&D_80126948;
}

void func_80150F78(void) {
}

void func_80150F80(s32 arg0) {
    if (D_80078EC1 != 0xC) {
        func_80151184(arg0, 0xC007, 0x20);
    }
}

void func_80150FB4(s32 arg0) {
    func_80151184(arg0, 8, 0);
}

void func_80150FD8(s32 arg0) {
    if (D_800B99DA & 7) {
        func_80146994(0x34, arg0, 0, 0);
    }
}

void func_80151014(s32 arg0) {
    func_80151184(arg0, 0xC00B, 0x20);
}

void func_80151038(s32 arg0) {
    s32 var_a2;

    var_a2 = 0x18;
    if (D_800B9A08 == 0x30A0) {
        var_a2 = 0x30;
    }
    func_80151184(arg0, 0xC00C, var_a2);
}

void func_80151070(s32 arg0) {
    func_80151184(arg0, 0xE003, 0x10);
}

void func_80151094(s32 arg0) {
    func_80151184(arg0, 0xC00D, 0x18);
}

void func_801510B8(void) {
}

void func_801510C0(void) {
}

void func_801510C8(s32 arg0) {
    func_80151184(arg0, 0x4018, 0x20);
}

void func_801510EC(s32 arg0) {
    func_80151184(arg0, 0xE016, 0x10);
}

void func_80151110(void) {
    func_8012DB84();
}

void func_80151130(void) {
}

void func_80151138(s32 arg0) {
    func_80151184(arg0, 0xC01F, 0x10);
}

void func_8015115C(u8 *arg0, s16 arg1) {
    AF(arg0, s16, 0x16C) = arg1;
}

void func_80151164(s32 arg0, s32 arg1) {
    func_80151184(arg0, arg1, 0xA);
}

void func_80151184(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0x3E) = arg1;
    AF(arg0, s16, 0x40) = arg2;
    AF(arg0, u16, 0x42) = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
    AF(arg0, u16, 0x3C) |= 1;
}

s32 func_801511A8(s32 arg0) {
    u16 temp_v0;

    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    temp_v0 = AF(arg0, u16, 0x3C) & 0xFFFE;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

void func_801511C4(u8 *arg0) {
    AF(arg0, u16, 0xF0) = (u16) AF(arg0, u16, 0x3E);
    AF(arg0, u16, 0xF2) = (u16) AF(arg0, u16, 0x40);
    AF(arg0, u16, 0xF4) = (u16) AF(arg0, u16, 0x42);
}

void func_801511E0(u8 *arg0) {
    func_80151204((s32) arg0, (s32) AF(arg0, s16, 0xF2));
}

void func_80151204(s32 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg1 != 0x3E8)) {
        func_8014ACE8(arg0, 1, arg1 & 0x7FFF);
    }
}

void func_80151238(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xF2);
    if (temp_v0 != 0) {
        func_8014ACE8((s32) arg0, 5, temp_v0 & 0x7FFF);
    }
}

extern s32 D_80126AE4;
extern s32 D_80127078;
extern s32 func_80151880();
extern void func_800CCF68();
extern s32 func_801518D8();
extern void func_800CCF58();
extern s32 func_80029D3C();
extern s32 D_800AE6A8;
extern s32 func_80160368();
extern s32 func_80161A00();
extern s32 func_80161A30();
extern s32 func_80161A60();
extern s32 func_801607B8();
extern s32 func_80153C9C();
extern void func_8015173C();
extern s32 func_801725CC();

void func_8015126C(s32 arg0) {
    u8 *c;
    s32 *d;
    s32 t;
    u16 f;
    u16 e;
    u16 g;
    s32 w;

    c = &D_80078E78;
    t = D_80127078;
    D_80127078 = 0;
    D_801151FC = 0;
    D_80126AE4 = t;
    d = &D_800AE6A8;
    if (AF(arg0, u8, 0xA8) != 0) {
        e = AF(arg0, u16, 0x3C);
        if (!(e & 1) || !(AF(arg0, u16, 0x3E) & 0x8000)) {
            AF(arg0, u16, 0x3C) = e & 0xFFFE;
            AF(arg0, s16, 0x3E) = 0;
            AF(arg0, s16, 0x40) = 0;
            AF(arg0, s16, 0x42) = 0;
        }
        if (--AF(arg0, u8, 0xA8) & 1) {
            func_801470A0(arg0);
        }
    }
    f = AF(arg0, u16, 0x3C);
    if (f & 1) {
        if (!(AF(arg0, s32, 0x3C) & 0x80008000) || (d[2] & 0x80FFFFFF)) {
            AF(arg0, u16, 0x3C) = f & 0xFFFE;
            AF(arg0, s16, 0x3E) = 0;
            AF(arg0, s16, 0x40) = 0;
            AF(arg0, s16, 0x42) = 0;
        } else {
            g = AF(arg0, u16, 0x3E);
            AF(arg0, u16, 0x3C) = f & 0xFFFE;
            AF(arg0, u16, 0x3E) = g & 0x7FFF;
            if (!(g & 0x4000) && (AF(arg0, s32, 0x44) & 1) && func_8014A454((u8 *)arg0)) {
                func_80160368(arg0);
                AF(arg0, s16, 0x3E) = 0;
                AF(arg0, s16, 0x40) = 0;
                AF(arg0, s16, 0x42) = 0;
                AF(arg0, u16, 0x3C) &= 0xFFFE;
                return;
            }
            if (func_801619D0(arg0) && func_80151880(arg0)) {
                AF(arg0, s16, 0x40) = 0;
                AF(arg0, s16, 0xF2) = 0;
                func_800CCF68(arg0);
            }
            if (func_80161A00(arg0) && func_801518D8(arg0)) {
                func_800CCF58(arg0);
            }
            if (func_80161A30(arg0)) {
                AF(arg0, s16, 0x1C8) = 0;
            }
            if (func_80161A60(arg0)) {
                AF(arg0, s16, 0x1C8) = 0;
            }
            if (AF(arg0, u16, 0) - 0x19 >= 2U && ((w = AF(arg0, s32, 0x1F8)) == 0 || (w & 0x2000000))) {
                AF(arg0, u16, 0xF0) = AF(arg0, u16, 0x3E);
                AF(arg0, u16, 0xF2) = AF(arg0, u16, 0x40);
                AF(arg0, u16, 0xF4) = AF(arg0, u16, 0x42);
                func_801599A4(arg0);
                func_801607B8(arg0);
                func_80147084(arg0);
                AF(arg0, u8, 0xA8) = 0;
                AF(arg0, u8, 0xDD) = AF(arg0, u16, 0x3E);
                if (AF(arg0, u8, 0xDD) != 0x11 && AF(arg0, s16, 0xF2) != 1000) {
                    AF(arg0, s16, 0xF2) = func_80029D3C(AF(arg0, s16, 0xF2));
                    if (c[0x49] == 5) {
                        AF(arg0, s16, 0xF2) = AF(arg0, s16, 0xF2) / 2;
                    } else if (func_8014CB7C()) {
                        AF(arg0, s16, 0xF2) = AF(arg0, s16, 0xF2) / 2;
                    }
                }
                func_80153C9C();
                func_8015173C(arg0);
                func_801725CC(arg0);
                if (AF(arg0, u16, 0x3E) & 0x2000) {
                    ((s32 (*)())func_8014B310)(arg0); /* MATCH-TRICK: K&R call cast, the original passes only a0 to the two-argument func_8014B310 */
                }
                if (AF(arg0, u16, 0x3E) & 0x1000) {
                    func_8014B4D4(arg0);
                }
                if (AF(arg0, u16, 0x3E) & 0x800) {
                    func_8014B944(arg0, 0x50000, 1);
                }
                if (AF(arg0, u16, 0x3E) & 0x400) {
                    func_80146D80(arg0);
                    func_801477E8(arg0, 0);
                }
                if (func_80151880(arg0) == 2) {
                    func_80147324(0x676);
                }
                if (c[0x49] == 0x14) {
                    func_8014BD24(arg0, 0xA);
                    func_8014ACE8(arg0, 4, 0xA);
                }
                D_80127518 = D_80126AE4;
                D_801151FC = D_80127518;
                return;
            }
            AF(arg0, s16, 0x3E) = 0;
            AF(arg0, s16, 0x40) = 0;
            AF(arg0, s16, 0x42) = 0;
            AF(arg0, u16, 0x3C) &= 0xFFFE;
        }
    }
    D_801151FC = D_80127518;
}

extern s32 StartFace();
extern void UpdateFlag10Part21();

s32 func_80151664(arg0)
    s32 arg0;
{
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0U;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_801516F0(u8 *arg0) {
    func_8014C8F0();
    AF(arg0, u8, 0xDE) = (s8) AF(arg0, u16, 0);
    func_80147078((s32) arg0, 0x19);
    AF(arg0, s16, 2) = 1;
    func_80151780((s32) arg0);
}

void func_8015173C(s32 arg0) {
    func_8014C8F0();
    AF(arg0, u8, 0xDE) = (s8) AF(arg0, u16, 0);
    func_80147078(arg0, 0x19);
    func_80151780(arg0);
}

extern s16 D_8011DB1A;
extern s32 func_801725CC();
extern s32 func_80029D3C();
extern void func_80151878();
extern void func_80153B58();

void func_80151780(s32 arg0) {
    void (**tbl)(s32);
    u8 idx;

    idx = AF(arg0, u8, 0xDD);
    tbl = *(void (***)(s32))(arg0 + 0x1F0);
    if (idx != 0 && idx < 0x21) {
        if (tbl[idx - 1] != 0) {
            func_801725CC(arg0);
            if (D_8011DB1A != 1000) {
                D_8011DB1A = func_80029D3C(D_8011DB1A);
            }
            tbl[AF(arg0, u8, 0xDD) - 1](arg0);
            D_801151FC = D_80127518;
        } else {
            func_80151878(arg0);
        }
    } else {
        tbl[2](arg0);
    }
    if (AF(arg0, u16, 0xF0) & 0x200) {
        func_80153B58(arg0);
    }
}

void func_80151878(void) {
}

s32 func_80151880(s32 arg0) {
    u16 v = AF(arg0, u16, 0x3E);
    s32 t = v & 0xFF;
    s32 r;

    if (t == 27) {
        r = 1;
    } else if (t == 28) {
        r = 1;
    } else if (t == 15) {
        r = 1;
    } else if (t == 16) {
        r = 1;
    } else if (t == 11) {
        r = 2;
    } else if (t == 31) {
        r = 1;
    } else {
        r = (v >> 8) & 2;
    }
    return r;
}

s32 func_801518D8(s32 arg0) {
    u8 t = AF(arg0, u8, 0x3E);
    s32 r;

    if (t == 0x1B) {
        r = 1;
    } else if (t == 0x1C) {
        r = 1;
    } else if (t == 0xF) {
        r = 1;
    } else if (t == 0x10) {
        r = 1;
    } else if (t == 3) {
        r = 1;
    } else if (t == 0x13) {
        r = 1;
    } else {
        r = t == 0x17;
    }
    return r;
}

void func_80151924(void) {
    func_80151944();
}

extern void (*D_8018F21C[])();

void func_80151944(u8 *arg0) {
    D_8018F21C[AF(arg0, u16, 2)](arg0);
}

void func_80151980(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801519C8(arg0);
    func_80146CA0(arg0);
}

extern u8 D_800D5880;
extern u8 D_800D58AC;

void func_801519C8(s32 arg0) {
    s16 t;
    u8 c;

    StartRumbleScript(&D_80062BF4);
    c = AF(arg0, u8, 0xDD);
    if (c != 1 && c == 0x11) {
        t = AF(arg0, s16, 0xF2);
        if (t != 0) {
            func_8014ACE8(arg0, 5, t & 0x7FFF);
        }
    } else {
        func_80151204(arg0, AF(arg0, s16, 0xF2));
    }
    if ((s16)func_80012A60(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        func_80154274(arg0, &D_800D5880);
    } else {
        func_80154274(arg0, &D_800D58AC);
    }
    StartFace(arg0, 0x16);
    func_80149020(arg0);
    func_80147324(0x451);
    c = AF(arg0, u8, 0xDE);
    if ((u8)(c - 2) < 2 || c == 0xB) {
        func_80146CA0(arg0);
    }
    func_80146CA0(arg0);
}

extern u8 D_800D5880;
void func_80151C54(s32 arg0);
s32 func_8015BDD0(s32 arg0);

s32 func_80151AE4(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80151C54(arg0);
        func_80159B3C(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            func_801542DC(arg0, (s32) &D_800D46E4, 0xE);
        }
        goto block_6;
    }
    func_8014E934(arg0);
    if ((func_8014F3E8(arg0) == 0) && (((s32 (*)())func_8014CC28)(arg0) == 0)) {
        func_80151C54(arg0);
        func_8015BDD0(arg0);
block_6:
        func_80165718(arg0);
    }
}

extern s32 func_801535F4();
extern s32 func_8015BF48();

void func_80151B98(s32 arg0) {
    s32 r;

    func_80149020();
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80151C54(arg0);
        func_80159B3C(arg0);
        goto block_9;
    }
    switch (func_801535F4(arg0)) {
    case 0:
        return;
    case 1:
        func_80151C54(arg0);
        func_80159B3C(arg0);
        func_8014C010(arg0, 1);
        break;
    case 2:
        func_80151C54(arg0);
        func_8015BF48(arg0);
        func_8014C010(arg0, 1);
        break;
    default:
        return;
    }
block_9:
    func_80165718(arg0);
}

void func_80151C54(s32 arg0) {
    u8 temp_v1;

    temp_v1 = AF(arg0, u8, 0xDD);
    if ((temp_v1 != 1) && (temp_v1 == 0x11)) {
        func_8014BD60(arg0, (s32) AF(arg0, s16, 0xF2));
    } else {
        func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    }
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0U;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80151D24(u8 *arg0) {
    D_8018F22C[AF(arg0, u16, 2)]();
}

void func_80151D60(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_80151DB0(arg0);
    AF(arg0, u8, 0xDE) = 0x20;
    func_80146CA0(arg0);
}

void func_80151DB0(s32 arg0) {
    StartRumbleScript(&D_80062C14);
    func_80151204(arg0, AF(arg0, s16, 0xF2));
    if ((s16) func_80012A60(AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        func_80154274(arg0, &D_800D5880);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    } else {
        func_80154274(arg0, &D_800D58AC);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x400;
    }
    AF(arg0, s16, 0x64) = 0xCC;
    func_80149020(arg0);
    func_80147324(0x436);
    func_80146CA0(arg0);
    func_80172630(arg0);
}

void func_80151E78(s32 arg0, s32 arg1) {
    u8 temp_v1;

    func_80149020(arg0, arg1);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 0xDE) = 0x10U;
        func_80146CA0(arg0);
    }
    func_80172630(arg0);
}

void func_80151ECC(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    AF(arg0, u16, 0x64) = (u16) (AF(arg0, u16, 0x64) + (AF(arg0, u8, 0xDE) << 6));
    AF(arg0, u8, 0xDE) = (u8) (AF(arg0, u8, 0xDE) + 5);
    if ((s16) AF(arg0, u16, 0x64) >= 0x1556) {
        AF(arg0, u8, 0xDE) = 0x10U;
        func_80146CA0(arg0);
    }
    func_80172630(arg0);
}

void func_80151F38(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    AF(arg0, u16, 0x64) = (u16) (AF(arg0, u16, 0x64) - (AF(arg0, u8, 0xDE) << 6));
    AF(arg0, u8, 0xDE) = (u8) (AF(arg0, u8, 0xDE) + 8);
    if ((s16) AF(arg0, u16, 0x64) < 0x1000) {
        func_80151FB4(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
        return;
    }
    func_80172630(arg0);
}

void func_80151FB4(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80152058(u8 *arg0) {
    D_8018F250[AF(arg0, u16, 2)]();
}

void func_80152094(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801520DC(arg0);
    func_80146CA0(arg0);
}

extern u8 D_80062C04;
extern u8 D_8018F240;
extern void func_8014CBF8();
extern void func_801474EC();

void func_801520DC(s32 arg0) {
    StartRumbleScript(&D_80062C04);
    func_80151204(arg0, AF(arg0, s16, 0xF2));
    func_80149020(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0xDE) = 0x10;
    func_80146DB8(arg0, &D_8018F240);
    func_801477E8(arg0, 0x40000);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    func_80146A6C(0x10, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    func_80147324(0x441);
    func_80146CA0(arg0);
}

extern void func_8015369C();
extern s32 func_80147A84();
extern s32 func_80147460();

void func_80152194(s32 arg0, s32 arg1) {
    u8 temp_v1;

    func_80149020(arg0, arg1);
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x4000);
    func_80147460(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_801470B4(arg0);
        func_8015369C(arg0);
        func_80146CA0(arg0);
    }
}

void func_8015220C(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

extern s32 func_80153800();
extern void func_801522CC();

void func_80152254(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    func_80149020(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        func_80146D90(arg0);
        func_801522CC(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
    }
}

void func_801522CC(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80152370(u8 *arg0) {
    D_8018F264[AF(arg0, u16, 2)]();
}

void func_801523AC(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801523F4(arg0);
    func_80146CA0(arg0);
}

extern void func_8001382C();
extern u8 D_8018F270;
/* MATCH-TRICK: the four calls of s32-defined callees go through ((void (*)())f) casts (the original saw void
   prototypes, so v0 stays single-set and sched1 boosts func_80012A60's call; accepted 30 Oct) */
void func_801523F4(s32 arg0) {
    VECTOR pad; /* MATCH-TRICK: unused local, the original's frame keeps 16 bytes below v */
    VECTOR v;
    u8 *p = &D_8018F270;

    func_80146E90(arg0, 0);
    StartRumbleScript(&D_80062C04);
    func_80151204(arg0, AF(arg0, s16, 0xF2));
    if ((s16)func_80012A60(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        ((void (*)())func_80154274)(arg0, &D_800D5880);
    } else {
        ((void (*)())func_80154274)(arg0, &D_800D58AC);
    }
    ((void (*)())StartFace)(arg0, 0x16);
    ((void (*)())func_80149020)(arg0);
    func_8001382C((AF(arg0, u16, 0xF4) - AF(AF(arg0, u8 *, 0x20), u16, 0x12)) & 0xFFF, p, &v);
    func_80146DB8(arg0, &v);
    func_801477E8(arg0, AF(p, s32, 0xC));
    func_80147324(0x451);
    func_80146CA0(arg0);
}

extern void func_801525F4();

void func_80152500(s32 arg0, s32 arg1) {
    s32 temp;

    func_80149020(arg0, arg1);
    temp = AF(arg0, s32, 0x1C);
    if (temp == 0) {
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            func_801525F4(arg0);
            func_80159B3C(arg0);
            func_80165718(arg0);
            return;
        }
    } else {
        AF(arg0, s32, 0x1C) = temp - 1;
    }
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x8000);
    func_80147460(arg0);
    switch (func_801535F4(arg0)) {
    case 0:
        break;
    case 1:
        func_801525F4(arg0);
        func_80159B3C(arg0);
        func_8014C010(arg0, 1);
        func_80165718(arg0);
        break;
    case 2:
        func_801525F4(arg0);
        func_8015BF48(arg0);
        func_8014C010(arg0, 1);
        func_80165718(arg0);
        break;
    }
}

void func_801525F4(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80152698(u8 *arg0) {
    D_8018F280[AF(arg0, u16, 2)]();
}

void func_801526D4(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_80152714(arg0);
}

void func_80152714(s32 arg0) {
    s32 pad[8];
    StartRumbleScript((s32) &D_80062BF4);
    func_80151204(arg0, (s32) AF(arg0, s16, 0xF2));
    if (D_80078EC1 != 2) {
        AF(arg0, s32, 0x1AC) = 0x3C0000;
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x100);
    }
    func_80152790(arg0);
    func_80159B3C(arg0);
    func_80165718(arg0);
}

void func_80152790(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_8015282C(u8 *arg0) {
    D_8018F298[AF(arg0, u16, 2)]();
}

void func_80152868(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801528B0(arg0);
    func_80146CA0(arg0);
}

extern void func_8014CBF8();
extern void func_801474EC();
extern u8 D_80062C04;
extern u8 D_8018F288;

void func_801528B0(s32 arg0) {
    StartRumbleScript(&D_80062C04);
    func_80151204(arg0, AF(arg0, s16, 0xF2));
    func_80149020(arg0);
    func_80154274(arg0, &D_800D5880);
    func_80147324(0x451);
    AF(arg0, u8, 0xDE) = 0x10;
    func_80146DB8(arg0, &D_8018F288);
    func_801477E8(arg0, 0xFFF00000);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    func_80146CA0(arg0);
}

extern s32 func_80147A84();
extern s32 func_80147460();
extern void func_8015369C();

void func_8015294C(s32 arg0) {
    u8 temp_v1;

    func_80149020(arg0);
    if (D_800B99DA & 1) {
        func_801470B4(arg0);
    } else {
        func_801470AC(arg0);
    }
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x18000);
    func_80147460(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = temp_v1 + 0xFF;
    if (temp_v1 == 0) {
        AF(arg0, u8, 0xDE) = 0x10;
        func_801472C8(arg0);
        func_801470B4(arg0);
        func_8015369C(arg0);
        func_80146CA0(arg0);
    }
}

void func_80152A08(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

extern void func_80152AC8();

void func_80152A50(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    func_80149020(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        func_80146D90(arg0);
        func_80152AC8(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
    }
}

void func_80152AC8(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80152B6C(u8 *arg0) {
    D_8018F2AC[AF(arg0, u16, 2)]();
}

void func_80152BA8(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_80152BF0(arg0);
    func_80146CA0(arg0);
}

void func_80152BF0(s32 arg0) {
    StartRumbleScript((s32) &D_80062C14);
    func_80151204(arg0, (s32) AF(arg0, s16, 0xF2));
    func_80149020(arg0);
    func_80146CA0(arg0);
}

void func_80152C40(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    func_80152C80(arg0);
    func_80159B3C(arg0);
    func_80165718(arg0);
}

void func_80152C80(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80152D24(u8 *arg0) {
    D_8018F2C8[AF(arg0, u16, 2)]();
}

void func_80152D60(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_80152DA8(arg0);
    func_80146CA0(arg0);
}

extern u8 D_8018F2B8;
extern void func_8014CBF8();
extern void func_801474EC();

void func_80152DA8(s32 arg0) {
    StartRumbleScript(&D_80062C14);
    func_80151204(arg0, AF(arg0, s16, 0xF2));
    func_80149020(arg0);
    func_80154274(arg0, &D_800D5880);
    func_80147324(0x451);
    AF(arg0, u8, 0xDE) = 0x10;
    AF(arg0, u8, 0xDF) = 8;
    func_80146DB8(arg0, &D_8018F2B8);
    func_801477E8(arg0, 0xFFE40000);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    func_80146CA0(arg0);
}

void func_80152E4C(s32 arg0, s32 arg1) {
    u8 temp_v0;
    u8 temp_v1;

    func_80149020(arg0, arg1);
    func_80153B58(arg0);
    func_80147A84(arg0);
    func_801473EC(arg0);
    temp_v0 = AF(arg0, u8, 0xDF);
    if (temp_v0 == 0) {
        func_80148038(arg0, 0x18000);
    } else {
        AF(arg0, u8, 0xDF) = (u8) (temp_v0 - 1);
    }
    func_80147460(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 0xDE) = 0x10;
        func_801472C8(arg0);
        func_801470B4(arg0);
        func_8015369C(arg0);
        func_80146CA0(arg0);
    }
}

void func_80152EFC(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

extern s32 func_80153800();
extern void func_80152FBC();

void func_80152F44(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    func_80149020(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        func_80146D90(arg0);
        func_80152FBC(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
    }
}

void func_80152FBC(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80153060(u8 *arg0) {
    D_8018F2DC[AF(arg0, u16, 2)]();
}

void func_8015309C(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801530E4(arg0);
    func_80146CA0(arg0);
}

extern u8 D_80062C04;
extern void func_8014CBF8();
extern void func_801474EC();
extern void ClearDisplayFlag10();

void func_801530E4(s32 arg0) {
    StartRumbleScript(&D_80062C04);
    func_80149020(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0xDE) = 0x40;
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    ClearDisplayFlag10(arg0);
    func_80146CA0(arg0);
}

extern void func_8015369C();

void func_80153150(s32 arg0, s32 arg1) {
    s16 temp;

    func_80149020(arg0, arg1);
    temp = AF(arg0, u16, 0x64) - 0x100;
    AF(arg0, s16, 0x60) = AF(arg0, s16, 0x62) = AF(arg0, s16, 0x64) = temp;
    if (temp <= 0) {
        AF(arg0, u8, 0xDE) = 0x10;
        func_801470B4(arg0);
        func_8015369C(arg0);
        func_80146CA0(arg0);
    }
}

void func_801531BC(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

extern void func_8015327C();

void func_80153204(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    func_80149020(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        func_80146D90(arg0);
        func_8015327C(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
    }
}

void func_8015327C(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

void func_80153320(u8 *arg0) {
    D_8018F2F0[AF(arg0, u16, 2)]();
}

void func_8015335C(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801533A4(arg0);
    func_80146CA0(arg0);
}

void func_801533A4(s32 arg0) {
    StartRumbleScript(&D_80062C04);
    func_80149020(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0xDE) = 0x40;
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    ClearDisplayFlag10(arg0);
    func_80146CA0(arg0);
}

extern s32 func_80147460();

void func_80153410(s32 arg0) {
    u8 temp;

    func_80149020(arg0);
    func_80148038(arg0, 0x18000);
    func_80147460(arg0);
    if (AF(arg0, s16, 0xA) < 0x201) {
        temp = AF(arg0, u8, 0xDE)--;
        if (temp != 0) {
            return;
        }
    }
    func_801470B4(arg0);
    func_8015369C(arg0);
    func_80146CA0(arg0);
}

void func_80153490(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

extern void func_80153550();

void func_801534D8(s32 arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes */

    func_80149020(arg0);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        func_80146D90(arg0);
        func_80153550(arg0);
        func_80159B3C(arg0);
        func_80165718(arg0);
    }
}

void func_80153550(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    func_801472B4(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    func_801477E8(arg0, 0);
    func_80153C18(arg0);
}

s32 func_801535F4(s32 arg0) {
    s32 temp_v0;
    s32 b;
    s32 var_s1;

    var_s1 = 0;
    if (((s32 (*)())func_8014ED28)(arg0) != 0) {
        func_80146D90(arg0);
    }
    if ((AF(arg0, s32, 0x34) > 0) && (((s32 (*)())func_8014CC28)(arg0) != 0)) {
        var_s1 = 1;
    }
    temp_v0 = func_8014FA04(arg0);
    b = temp_v0;
    if (temp_v0 & 0x4000) {
        return 2;
    }
    if (temp_v0 & 0x2000) {
        return 1;
    }
    if (b & 0x8000) {
        return 4;
    }
    return var_s1;
}

extern void (*D_8011DB28)();

void func_8015369C(s32 arg0) {
    if (D_8011DB28 != 0) {
        D_8011DB28(arg0 + 0xA0);
    }
    AF(arg0, u8, 0xDE) = 0x5A;
}

s32 func_801536DC(s32 arg0) {
    SVECTOR v;

    if (D_8011DB28 != 0) {
        D_8011DB28(arg0 + 0xA0);
    }
    AF(arg0, s16, 6) = func_80012C6C(AF(arg0, s16, 6), AF(arg0, s16, 0xA0), 8);
    AF(arg0, s16, 0xA) = func_80012C6C(AF(arg0, s16, 0xA), AF(arg0, s16, 0xA2), 8);
    ((s16 *)arg0)[7] = func_80012C6C(AF(arg0, s16, 0xE), AF(arg0, s16, 0xA4), 8);
    if (D_8011DB28 != 0) {
        func_80015978(arg0 + 4, &v);
        if (func_80013294(&v, arg0 + 0xA0) < 0x40 || AF(arg0, u8, 0xDE) == 0) {
            func_80015954(arg0 + 0xA0, arg0 + 4);
            return 0;
        }
        AF(arg0, u8, 0xDE)--;
    }
    if (AF(arg0, s16, 6) == AF(arg0, s16, 0xA0) && AF(arg0, s16, 0xA) == AF(arg0, s16, 0xA2) && AF(arg0, s16, 0xE) == AF(arg0, s16, 0xA4)) return 0;
    return 1;
}

extern void func_800139C8();
extern s32 func_80153978();

s32 func_80153800(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 i;
    u16 n;
    u32 t;

    if (D_8011DB28 != 0) {
        func_80015978(arg0 + 4, arg0 + 0x88);
        AF(arg0, SVECTOR, 0x90) = AF(arg0, SVECTOR, 0x88);
        return 0;
    }
    t = AF(arg0, u8, 0xDE);
    if (t >= 0x21) {
        func_80015954((s32) &D_80126DB0, arg0 + 4);
        AF(arg0, SVECTOR, 0x88) = AF(&D_80126DB0, SVECTOR, 0x0);
        AF(arg0, SVECTOR, 0x90) = AF(arg0, SVECTOR, 0x88);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) D_80126DB6;
        return 0;
    }
    n = t * 4;
    b.vy = AF(arg0, u16, 0xA2) - n;
    for (i = 0; i < 0x80; i++) {
        a.vx = 0;
        a.vy = 0;
        a.vz = n;
        func_800139C8((s16) (i << 5), &a, &a);
        b.vx = AF(arg0, u16, 0xA0) + a.vx;
        b.vz = AF(arg0, u16, 0xA4) + a.vz;
        if (func_80153978(arg0, &b) == 0) {
            return 0;
        }
    }
    AF(arg0, u8, 0xDE)++;
    return 1;
}

extern s32 func_80133784();
extern s32 func_801539F8();

s32 func_80153978(s32 arg0, s32 arg1) {
    SVECTOR v;

    v.vx = AF(arg1, u16, 0);
    v.vy = AF(arg1, u16, 2) + 0x1F;
    v.vz = AF(arg1, u16, 4);
    if (func_80133784(0, arg1, &v) == 0x2000 && ((u8 *)&v)[6] == 0 && func_801539F8(arg0, &v) == 0) {
        return 0;
    }
    return 1;
}

s32 func_801539F8(s32 arg0, SVECTOR *arg1) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    s32 r;
    s32 r2;

    a = AF(arg0, SVECTOR, 0xA0);
    b = *arg1;
    a.vy -= 4;
    r = func_80133784(0, &a, &b);
    if (r != 0x2000) {
        return 1;
    }
    a = b;
    b.vy += 8;
    r2 = func_80133784(0, &a, &b);
    if (r2 != r) {
        return 1;
    }
    if (func_80133784(2, &b, &c) != r2) {
        return 1;
    }
    AF(arg0, s16, 0x88) = b.vx;
    AF(arg0, s16, 0x8A) = b.vy;
    AF(arg0, s16, 0x8C) = b.vz;
    AF(arg0, SVECTOR, 0x90) = AF(arg0, SVECTOR, 0x88);
    return 0;
}

extern void func_8016DA04();

void func_80153B58(s32 arg0) {
    if (!(D_800B99DA & 3)) {
        func_8016DA04(arg0);
    }
    if (!(D_800B99DA & 1)) {
        func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0x08880000, 0x18009000);
    }
}

s32 func_80153BD8(s32 arg0) {
    return arg0 == D_801151FC;
}

s32 func_80153BF0(s32 arg0) {
    if (arg0 == D_801151FC) {
        D_80127518 = 0;
        return 1;
    }
    return 0;
}

void func_80153C18(s32 arg0) {
    D_80127518 = 0;
    D_801151FC = 0;
}

void func_80153C30(void) {
    D_8011F748 = 1;
}

void func_80153C44(s32 arg0, s32 arg1, s16 arg2) {
    func_80153C74();
    D_8011DB18 = arg2;
}

extern s16 D_8011DB1A;

void func_80153C74(s32 arg0, s32 arg1) {
    D_8011DB0C = arg0;
    D_8011DB1A = arg1;
}

void func_80153C8C(void) {
    D_80115210 = 0;
}

s32 func_80153C9C(void) {
    s32 temp_v0;

    temp_v0 = D_80115210 + 1;
    D_80115210 = temp_v0;
    return temp_v0;
}

s32 func_80153CBC(void) {
    return D_80115210;
}

void func_80153CCC(u8 *arg0) {
    StartRumbleScript((s32) &D_8018F304);
    D_8018F32C[AF(arg0, u16, 2)](arg0);
    D_8011DB0C = 0;
    D_8011F748 = 0;
}

void func_80153D34(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_80153D7C(arg0);
    func_80146CA0(arg0);
}

extern u8 D_8018F30C;

void func_80153D7C(s32 arg0) {
    func_80147324(0x451);
    func_80154274(arg0, &D_8018F30C);
    func_80149020(arg0);
    AF(arg0, u16, 0x244) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x246) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x248) = AF(arg0, u16, 0xE);
    if (D_800B9A08 == 0x3075) {
        AF(arg0, u8, 0xDE) = 0x14;
    } else {
        AF(arg0, u8, 0xDE) = 0xA;
    }
    AF(arg0, u8, 0xDF) = 0;
    func_80146CA0(arg0);
}

extern s32 func_8015410C();

void func_80153E00(s32 arg0) {
    u8 *w = &D_80078E78;
    u16 flags; /* PORT NOTE: read before set, as the original (other 0xA9 values) */

    func_80149020(arg0);
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        flags = func_80148800(arg0) & 0xF000;
        break;
    case 0x53:
    case 0x73:
        flags = (func_8014891C(arg0) != 0) << 12;
        if (func_80148980(arg0) != 0) {
            flags |= 0x4000;
        }
        if (func_801489E8(arg0) != 0) {
            flags |= 0x8000;
        }
        if (func_80148A48(arg0) != 0) {
            flags |= 0x2000;
        }
        break;
    }
    flags >>= 12;
    if (flags != 0 && !(flags & AF(arg0, u8, 0xDF))) {
        if (--AF(arg0, u8, 0xDE) == 0) {
            func_80153C18(arg0);
        }
    }
    AF(arg0, u8, 0xDF) = flags;
    if (D_80127518 == 0) {
        if (D_800B9A08 != 0x3075) {
            AF(arg0, u16, 0x88) = AF(arg0, u16, 0x244);
            AF(arg0, u16, 0x8A) = AF(arg0, u16, 0x246);
            AF(arg0, u16, 0x8C) = AF(arg0, u16, 0x248);
        }
        func_8015410C(arg0);
        func_80159B3C(arg0);
        func_80165718((u8 *)arg0);
        return;
    }
    switch ((u16)D_8011DB0C) {
    case 0:
        break;
    case 3:
        func_8014B310(arg0);
    case 1:
        func_8014BC44(arg0, D_8011DB1A);
        func_8014ACE8(arg0, 1, D_8011DB1A);
        D_8011DB0C = 0;
        D_8011F748 = 0;
        break;
    case 2:
        func_8014BC44(arg0, D_8011DB1A);
        func_8014ACE8(arg0, 1, D_8011DB1A);
        func_8014B310(arg0);
        func_80146994(0x42, arg0, 0, 0);
        func_80146A6C(0x42, (StageActor *)arg0, 0x20, 0, 0, 1, 0);
        func_80146A6C(0x42, (StageActor *)arg0, 0, 0, 0x20, 1, 0);
        func_80146A6C(0x42, (StageActor *)arg0, -0x20, 0, 0, 1, 0);
        func_80146A6C(0x42, (StageActor *)arg0, 0, 0, -0x20, 1, 0);
        D_8011DB0C = 0;
        D_8011F748 = 0;
        break;
    }
    if (*(u16 *)&D_8011F748 != 0) {
        func_8015410C(arg0);
        func_80159B3C(arg0);
        func_8014BC44(arg0, AF(w, u16, 0x3C));
        D_8011DB0C = 0;
        D_8011F748 = 0;
    }
}

s32 func_8015410C(s32 arg0) {
    D_80127518 = 0;
    return func_80151664();
}

void func_80154134(s32 arg0) {
    AF(arg0, s32, 0xB4) = 0;
    AF(arg0, s16, 0xBA) = 0;
    AF(arg0, s16, 0xB8) = 0;
    AF(arg0, u8, 0xBD) = 0;
    AF(arg0, u8, 0xBC) = 0;
    AF(arg0, u8, 0xDC) = 0;
}

void func_80154150(s32 arg0, s32 arg1) {
    if (AF(arg0, s32, 0xB4) != AF(arg0, s32 *, 0xB0)[arg1]) {
        func_80154190(arg0, arg1);
    }
}

void func_80154190(s32 arg0, s32 arg1) {
    s32 t = AF(arg0, s32 *, 0xB0)[arg1];

    AF(arg0, s16, 0xBA) = 1;
    AF(arg0, s16, 0xB8) = 1;
    AF(arg0, u8, 0xBC) = 0;
    AF(arg0, u8, 0xBD) = 0;
    AF(arg0, u8, 0xDC) = 0;
    AF(arg0, s32, 0xB4) = t;
    func_80154418(arg0);
}

extern s32 func_80154218();

void func_801541D8(s32 arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0xB4) != AF(arg0, s32 *, 0xB0)[arg1]) {
        func_80154218(arg0, arg1, arg2);
    }
}

extern s32 func_801549F8();

s32 func_80154218(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xB4) = AF(arg0, s32 *, 0xB0)[arg1];
    AF(arg0, s16, 0xBA) = 1;
    AF(arg0, s16, 0xB8) = 1;
    AF(arg0, u8, 0xBC) = arg2;
    AF(arg0, u8, 0xBD) = arg2;
    AF(arg0, u8, 0xDC) = func_801549F8(arg0);
    return func_80154418(arg0);
}

s32 func_80154274(arg0, arg1) s32 arg0; s32 arg1; {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xB4);
    if (var_v0 != arg1) {
        var_v0 = func_801542A4(arg0, arg1);
    }
    return var_v0;
}

s32 func_801542A4(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xB4) = arg1;
    AF(arg0, s16, 0xBA) = 1;
    AF(arg0, s16, 0xB8) = 1;
    AF(arg0, u8, 0xBC) = 0;
    AF(arg0, u8, 0xBD) = 0;
    AF(arg0, u8, 0xDC) = 0;
    return func_80154418(arg0);
}

s32 func_801542DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xB4);
    if (var_v0 != arg1) {
        var_v0 = func_8015430C();
    }
    return var_v0;
}

s32 func_8015430C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xB4) = arg1;
    AF(arg0, s16, 0xBA) = 1;
    AF(arg0, s16, 0xB8) = 1;
    AF(arg0, u8, 0xBC) = arg2;
    AF(arg0, u8, 0xBD) = arg2;
    AF(arg0, u8, 0xDC) = func_801549F8(arg0);
    return func_80154418(arg0);
}

s32 func_80154358(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    u16 temp_s1;
    u16 temp_s3;
    u8 temp_s5;
    u8 temp_s6;
    u8 temp_s7;
    void *temp_v1;

    temp_s5 = AF(arg0, u8, 0xBC);
    temp_s6 = AF(arg0, u8, 0xBD);
    temp_s7 = AF(arg0, u8, 0xDC);
    sp10 = 0;
    sp14 = 0;
    sp18 = 1;
    temp_s2 = AF(arg0, s32, 0xB4);
    temp_s3 = AF(arg0, u16, 0xB8);
    temp_s1 = AF(arg0, u16, 0xBA);
    temp_s4 = AF(AF(arg0, void *, 0x20), s32, 0x20);
    func_8015444C(arg0, (s32) &sp10, (s32) &sp14, (s32) &sp18);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0xB4) = temp_s2;
    AF(arg0, u16, 0xB8) = temp_s3;
    AF(arg0, u16, 0xBA) = temp_s1;
    AF(arg0, u8, 0xBC) = temp_s5;
    AF(arg0, u8, 0xBD) = temp_s6;
    AF(arg0, u8, 0xDC) = temp_s7;
    temp_v0 = AF(temp_v1, s32, 0x20);
    AF(temp_v1, s32, 0x20) = temp_s4;
    return temp_v0;
}

s32 func_80154418(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;

    sp10 = 0;
    sp14 = 0;
    sp18 = 0;
    return func_8015444C(arg0, (s32) &sp10, (s32) &sp14, (s32) &sp18);
}

extern s32 StartFaceScript();
extern void SetDisplayFlag20();
extern void ClearDisplayFlag20();
extern void StoreImage();
extern u8 D_80126738;
extern u8 D_80126838;
extern u8 D_80126748;
extern u8 D_80126848;

s32 func_8015444C(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *p;
    u8 t;
    s32 op;
    s32 v;
    s32 w;

    p = AF(arg0, u8 *, 0x20);
    if (p == 0) {
        return;
    }
    t = AF(arg0, u8, 0xB8);
    if (t == 0) {
        return;
    }
    if (*arg1 == 0) {
        AF(arg0, u16, 0xB8) = t;
        (*arg1)++;
    }
    if ((u8)--AF(arg0, u16, 0xB8) == 0) {
        op = AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC)];
        switch (op) {
        case 0:
            AF(arg0, u16, 0xB8) = 0;
            *arg2 |= 0x8000;
            AF(arg0, u16, 0xBA) = 0;
            AF(arg0, u8, 0xBC) = 0;
            AF(arg0, u8, 0xBD) = 0;
            break;
        case 1:
            AF(arg0, u16, 0xB8) = 1;
            *arg2 |= 0x8000;
            AF(arg0, u8, 0xBC) = 0;
            AF(arg0, u8, 0xBD) = 0;
            AF(arg0, u8, 0xDC) = 0;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 2:
            AF(arg0, u16, 0xB8) = 0;
            AF(arg0, u8, 0xBC)++;
            *arg2 |= 0x8000;
            break;
        case 3:
            v = AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1];
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 2;
            AF(arg0, u16, 0xBA) = v;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 4:
        case 11:
        case 12:
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 2;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 5:
            v = AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1];
            w = AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 2];
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xDC) = 0;
            AF(arg0, u8, 0xBC) = w;
            AF(arg0, s32, 0xB4) = v;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 6:
            AF(arg0, u8, 0xBC) = AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1];
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xDC) = func_801549F8(arg0);
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 7:
            AF(arg0, u16, 0xB8) = 1;
            *arg2 |= 0x4000;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 8:
            AF(arg0, u16, 0xB8) = 1;
            *arg2 |= 0x2000;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 9:
            AF(arg0, u16, 0xB8) = 1;
            *arg2 |= 0x1000;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 10:
            AF(arg0, u16, 0xB8) = 1;
            *arg2 |= 0x800;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 13:
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 1;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 14:
            if (*arg3 == 0) {
                StartFaceScript(arg0, AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1]);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 2;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 15:
            if (*arg3 == 0) {
                StartFace(arg0, AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1]);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 2;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 16:
            if (*arg3 == 0) {
                UpdateFlag10Part21(arg0);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 17:
            if (*arg3 == 0) {
                ClearDisplayFlag10(arg0);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 18:
            if (*arg3 == 0) {
                SetDisplayFlag20(arg0);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 19:
            if (*arg3 == 0) {
                ClearDisplayFlag20(arg0);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 20:
            if (*arg3 == 0) {
                AF(arg0, u8, 0x1A8) ^= 1;
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 21:
            if (*arg3 == 0) {
                StoreImage(AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1], &D_80126738);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 2;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 22:
            if (*arg3 == 0) {
                StoreImage(AF(arg0, s32 *, 0xB4)[AF(arg0, u8, 0xBC) + 1], &D_80126838);
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC) += 2;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 23:
            if (*arg3 == 0) {
                AF(p, u8 *, 0x20) = &D_80126748;
            }
            AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            AF(arg0, u8, 0xDC)++;
            break;
        case 24:
            if (*arg3 == 0) {
                AF(p, u8 *, 0x20) = &D_80126848;
            }
            AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            AF(arg0, u8, 0xDC)++;
            break;
        case 25:
            if (*arg3 == 0) {
                AF(arg0, s32, 0x44) &= ~0x20000;
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        case 26:
            if (*arg3 == 0) {
                AF(arg0, s32, 0x44) |= 0x20000;
            }
            AF(arg0, u16, 0xB8) = 1;
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            func_8015444C(arg0, arg1, arg2, arg3);
            break;
        default:
            AF(p, s32, 0x20) = op + 0x10;
            AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
            AF(arg0, u8, 0xBC)++;
            AF(arg0, u8, 0xBD)++;
            AF(arg0, u8, 0xDC)++;
            break;
        }
    }
    AF(arg0, u16, 0xB8) |= *arg2;
}

s32 func_801549F8(s32 arg0) {
    s32 count;
    s32 i;
    u8 n;

    count = 0;
    n = AF(arg0, u8, 0xBC);
    i = 0;
    if (n != 0) {
        do {
            switch (AF(arg0, u32 *, 0xB4)[i]) {
            case 0: case 2: case 7: case 8: case 9: case 10: case 13:
                i += 1;
                break;
            case 16: case 17: case 18: case 19: case 20: case 25: case 26:
                i += 1;
                break;
            case 3: case 4: case 5: case 6: case 11: case 12: case 14: case 15: case 21: case 22:
                i += 2;
                break;
            case 1: case 23: case 24:
                i += 1;
                count += 1;
                break;
            default:
                i += 1;
                count += 1;
                break;
            }
        } while (i != n);
    }
    return count & 0xFF;
}

extern s32 func_80154AB4();

s32 StartFace(s32 arg0, s32 arg1) {
    if (AF(arg0, s32, 0xD0) != AF(arg0, s32 *, 0xCC)[arg1]) {
        return func_80154AB4(arg0, arg1);
    }
}

s32 func_80154AB4(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0xD0) = AF(arg0, s32 *, 0xCC)[arg1];
    AF(arg0, u16, 0xD6) = 1;
    AF(arg0, u16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = 0;
    AF(arg0, u8, 0xD9) = 0;
}

extern void func_80154B20();

void StartFaceAt(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0xD0) != AF(arg0, s32 *, 0xCC)[arg1]) {
        func_80154B20(arg0, arg1, arg2);
    }
}

void func_80154B20(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xD0) = AF(arg0, s32 *, 0xCC)[arg1];
    AF(arg0, u16, 0xD6) = 1;
    AF(arg0, u16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = arg2;
    AF(arg0, u8, 0xD9) = arg2;
}

s32 StartFaceScript(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xD0);
    if (var_v0 != arg1) {
        var_v0 = func_80154B7C();
    }
    return var_v0;
}

s32 func_80154B7C(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0xD0) = arg1;
    AF(arg0, s16, 0xD6) = 1;
    AF(arg0, s16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = 0;
    AF(arg0, u8, 0xD9) = 0;
}

void StartFaceScriptAt(u8 *arg0, s32 arg1) {
    if (AF(arg0, s32, 0xD0) != arg1) {
        func_80154BC8();
    }
}

void func_80154BC8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xD0) = arg1;
    AF(arg0, s16, 0xD6) = 1;
    AF(arg0, s16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = arg2;
    AF(arg0, u8, 0xD9) = arg2;
}

s32 func_80154BE4(s32 arg0) {
    s32 sp10;
    s32 sp14;

    sp10 = 0;
    sp14 = 0;
    FaceScriptStep(arg0, (s32) &sp10, (s32) &sp14);
    return ((s32 (*)())func_80154F9C)(arg0);
}

void FaceScriptStep(u8 *arg0, s32 *arg1, s32 *arg2) {
    u8 t;
    u16 v;
    s32 a;

    t = AF(arg0, u8, 0xD4);
    if (t != 0) {
        if (*arg1 == 0) {
            AF(arg0, u16, 0xD4) = t;
            (*arg1)++;
        }
        v = AF(arg0, u16, 0xD4) - 1;
        AF(arg0, u16, 0xD4) = v;
        if (!(v & 0xFF)) {
            switch (AF(arg0, u32 *, 0xD0)[AF(arg0, u8, 0xD8)]) {
            case 0:
                AF(arg0, u16, 0xD4) = 0;
                *arg2 |= 0x8000;
                AF(arg0, u16, 0xD6) = 0;
                AF(arg0, u8, 0xD8) = 0;
                AF(arg0, u8, 0xD9) = 0;
                break;
            case 1:
                AF(arg0, u16, 0xD4) = 1;
                *arg2 |= 0x8000;
                AF(arg0, u8, 0xD8) = 0;
                AF(arg0, u8, 0xD9) = 0;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 2:
                AF(arg0, u16, 0xD4) = 0;
                AF(arg0, u8, 0xD8)++;
                goto set;
            case 3:
                a = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 1];
                AF(arg0, u16, 0xD4) = 1;
                AF(arg0, u8, 0xD8) += 2;
                AF(arg0, u16, 0xD6) = a;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 5:
                a = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 1];
                AF(arg0, u8, 0xD8) = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 2];
                AF(arg0, u16, 0xD4) = 1;
                AF(arg0, s32, 0xD0) = a;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 6:
                AF(arg0, u8, 0xD8) = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 1];
                AF(arg0, u16, 0xD4) = 1;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 7:
                AF(arg0, u16, 0xD4) = AF(arg0, u16, 0xD6);
                *arg2 |= 0x4000;
                AF(arg0, u8, 0xD8)++;
                AF(arg0, u8, 0xD9)++;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 8:
                AF(arg0, u16, 0xD4) = AF(arg0, u16, 0xD6);
                *arg2 |= 0x2000;
                AF(arg0, u8, 0xD8)++;
                AF(arg0, u8, 0xD9)++;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            default:
                FaceSet(arg0, AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8)]);
                AF(arg0, u16, 0xD4) = AF(arg0, u16, 0xD6);
                AF(arg0, u8, 0xD8)++;
                break;
            }
        } else if (v == 1 && AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8)] == 0) {
        set:
            *arg2 |= 0x8000;
        }
        AF(arg0, u16, 0xD4) = *arg2 | AF(arg0, u16, 0xD4);
    }
}

extern s16 D_80078E9E;
extern u8 D_800D8D10;
extern void FaceLoad();

void FaceSet(u8 *arg0, s32 arg1) {
    s32 w;

    AF(arg0, s32, 0xC8) = arg1;
    if (D_80078E96 & 0x8000) {
        AF(arg0, s32, 0xC8) = arg1 | 0x1000000;
        w = (s32) &D_800D8D10;
    } else if ((D_80078E9E < 0x10 || D_80078EA6 < 0x10) && !(AF(arg0, s32, 0x44) & 0xC0)) {
        AF(arg0, s32, 0xC8) = arg1 | 0x1000000;
        w = 0x40000002;
    } else {
        AF(arg0, s32, 0xC8) &= 0xC0FFFFFF;
        w = arg1;
    }
    FaceLoad(w);
}

extern s16 D_80078E96;
extern s16 D_80078E9E;
extern u8 D_800D8D10;
extern void FaceLoad();

static inline s32 h_80154F9C(void) {
    return ((s32 (*)())func_8016F1AC)();
}

/* placement: void, as the original (reorg fills the early-return beqz delay slot with lui v0, so v0 is dead at
 * exit; an s32 definition keeps v0 live and leaves a nop). The file's `extern s32 func_80154F9C();` (line 195)
 * becomes `extern void func_80154F9C();` and func_80154BE4 returns `((s32 (*)())func_80154F9C)(arg0)`
 * (cast at the caller for a void callee; its code is unchanged, checked). */
void func_80154F9C(u8 *arg0) {
    u8 *c = &D_80078E78;
    s32 w;

    if (AF(arg0, s32, 0xC8) & 0x1000000) {
        if ((D_80078E96 & 0x8000) || D_80078E9E < 0x10 || D_80078EA6 < 0x10) {
            if (h_80154F9C() == 0) {
                return;
            }
        }
        w = AF(arg0, s32, 0xC8) & 0xC0FFFFFF;
        AF(arg0, s32, 0xC8) = w;
        FaceLoad(w);
    } else {
        if ((D_80078E96 & 0x8000) && h_80154F9C() == 0) {
            AF(arg0, s32, 0xC8) |= 0x1000000;
            FaceLoad(&D_800D8D10);
        } else if ((AF(c, s16, 0x26) < 0x10 || AF(c, s16, 0x2E) < 0x10) && !(AF(arg0, s32, 0x44) & 0xC0) && h_80154F9C() == 0) {
            AF(arg0, s32, 0xC8) |= 0x1000000;
            FaceLoad(0x40000002);
        }
    }
}

void FaceLoad(s32 w) {
    if (w & 0x40000000) {
        MoveImage(D_8018F338 + (w & 0xFF) * 8, 0x200, 0x100);
        return;
    }
    func_800183E0(w);
}

void UpdateWeaponParts(u8 *a) {
    s32 f;
    func_8001D150(PARTS(a), 25);
    func_8001D150(PARTS(a), 24);
    func_8001D150(PARTS(a), 22);
    func_8001D150(PARTS(a), 21);
    f = *(s32 *)(a + 0x44);
    if (f & 0x400) {
        return;
    }
    if (!(f & 0x20000)) {
        if (f & 0x20000000) {
            func_8001D130(PARTS(a), 25);
            func_8001D150(PARTS(a), 24);
        } else if (func_8014BEF8(a) != 0) {
            func_8001D150(PARTS(a), 25);
            func_8001D130(PARTS(a), 24);
        } else {
            func_8001D150(PARTS(a), 25);
            func_8001D150(PARTS(a), 24);
        }
    }
    if (*(s32 *)(a + 0x44) & 0x10000000) {
        func_8001D130(PARTS(a), 22);
        func_8001D150(PARTS(a), 21);
    } else {
        func_8001D150(PARTS(a), 22);
        func_8001D130(PARTS(a), 21);
        if (*(s32 *)(a + 0x44) & 4) {
            func_8001D150(PARTS(a), 21);
        }
    }
}

void ShowAllParts(u8 *obj) {
    u32 *p = D_800DE2A4;
    while (*p != 0) {
        *p &= 0x80FFFFFF;
        p++;
    }
    *(s32 *)(obj + 0x44) |= 0x30000000;
}

void HideAllParts(u8 *obj) {
    u32 *p = D_800DE2A4;
    while (*p != 0) {
        *p |= 0x01000000;
        p++;
    }
    *(s32 *)(obj + 0x44) &= ~0x30000000;
}

void SetDisplayFlag20(StageActor *a) {
    a->display |= 0x20000000;
}

void ClearDisplayFlag20(StageActor *a) {
    a->display &= ~0x20000000;
}

void UpdateFlag10Part21(u8 *a) {
    if ((*(s32 *)(a + 0x44) & 4) || (func_80029178(0x12F) & 0xFF)) {
        *(s32 *)(a + 0x44) &= ~0x10000000;
    } else {
        *(s32 *)(a + 0x44) |= 0x10000000;
    }
    func_8001D150(PARTS(a), 21);
}

void ClearDisplayFlag10(StageActor *a) {
    a->display &= ~0x10000000;
}

u8 RunStateHandler4E(u8 *a) {
    if (a[0x4E]) {
        if (!D_8018F378[(s16)(a[0x4E] - 1)](a)) {
            a[0x4E] = 0;
        }
    }
    return a[0x4E];
}

extern s32 func_800D02D0();

s32 func_801554B8(u8 *arg0) {
    if (AF(arg0, u8, 0x1A0) != AF(arg0, u8, 0x196)) {
        if (func_800D02D0(AF(arg0, u8, 0x1A0)) != 0) {
            AF(arg0, u8, 0x196) = AF(arg0, u8, 0x1A0);
            func_801659DC(arg0);
            return 0;
        }
        return 1;
    }
    return 0;
}

void func_80155518(s32 arg0) {
    func_80147078(arg0, 5);
    func_801555F4(arg0);
}

extern void func_80155580();

void func_8015554C(s32 arg0) {
    func_80147078(arg0, 5);
    func_80155580(arg0);
}

void func_80155580(s32 arg0, s32 arg1) {
    D_8018F37C[AF(arg0, u16, 2)]();
}

void func_801555BC(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_801555F4(arg0);
    }
}

extern u8 D_800D4C94;
extern u8 D_800D4CE4;
extern u8 D_800D4D38;
extern u8 D_800D4D88;
extern u8 D_800D4E10;
extern u8 D_800D4E6C;
extern s32 func_80156648();
extern s32 func_80147300();

void func_801555F4(s32 arg0) {
    s32 var; /* PORT NOTE: read before set (case 6 / default), as the original */

    StartFace(arg0, 0x15);
    if (AF(arg0, s32, 0x44) & 0x200) {
        AF(arg0, u8, 0x1AA) = 5;
    } else if (AF(arg0, s32, 0x2C) == 0xFFF50000 && (func_80029178(0x82) & 0xFF)) {
        AF(arg0, u8, 0x1AA) = 7;
    }
    switch (AF(arg0, u8, 0x1AA)) {
    case 0:
    case 1:
        if (AF(arg0, u8, 0x1AB) ^= 1) {
            AF(arg0, u8, 0x1AA) = 0;
        } else {
            AF(arg0, u8, 0x1AA) = 1;
        }
        func_80154274(arg0, &D_800D4C94);
        func_80147324(0x400);
        func_80147300(0x5F3);
        var = 0;
        D_8011F730 |= 3;
        func_80146CA0(arg0);
        break;
    case 2:
        func_80154274(arg0, &D_800D4CE4);
        func_80147324(0x446);
        func_80147300(0x5F3);
        var = 1;
        func_80146CA0(arg0);
        break;
    case 3:
        func_80154274(arg0, &D_800D4D38);
        func_80147324(0x400);
        func_80147300(0x5F3);
        var = 2;
        func_80146CA0(arg0);
        break;
    case 4:
        func_80154274(arg0, &D_800D4D88);
        func_80147300(0x5F6);
        var = 3;
        func_80146CA0(arg0);
        func_80146CA0(arg0);
        break;
    case 5:
        func_80154274(arg0, &D_800D4E10);
        var = 4;
        AF(arg0, u16, 2) = 7;
        break;
    case 6:
        break;
    case 7:
        func_80147324(0x7F);
        func_80147300(0x5F4);
        func_80154274(arg0, &D_800D4E6C);
        var = 6;
        AF(arg0, u16, 2) = 8;
        break;
    }
    func_80146E90(arg0, 0);
    func_80156648(arg0);
    if (var >= 0) {
        func_80146994(4, arg0, var, 0);
    }
    ClearDisplayFlag20(arg0);
}

extern s32 func_80155A44();
extern s32 func_8015A230();
extern void func_8001382C();

void func_80155800(u8 *arg0, s32 arg1) {
    s32 sp10[6];
    u8 temp_v1;
    u8 temp_v0;
    u32 var_v1;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    func_80155A44((s32) arg0);
    if ((func_80148800((s32) arg0) & 0x80) && ((temp_v1 = AF(arg0, u8, 0x1A9)) >= 4)) {
        if (AF(arg0, u8, 0x1C0) != 0) {
            func_80148AFC((s32) arg0);
            func_80155F80((s32) arg0);
            func_80154134((s32) arg0);
            temp_v0 = AF(arg0, u8, 0x1AA);
            var_v1 = temp_v0 + 1;
            if (temp_v0 == 0) {
                var_v1 = 2;
            } else if (var_v1 >= 5) {
                var_v1 = 1;
            }
            AF(arg0, u8, 0x1AA) = var_v1;
            func_80149B14((s32) arg0);
            return;
        }
        if ((AF(arg0, u8, 0x1AA) < 2) || ((AF(arg0, u8, 0x1A8) == 0) && (temp_v1 != 0))) {
            func_80148AFC((s32) arg0);
            func_80155F80((s32) arg0);
            func_80154134((s32) arg0);
            func_80149AD4((s32) arg0);
            D_8011F730 |= 3;
            return;
        }
    }
    if ((AF(arg0, u8, 0x1A8) == 0) && (AF(arg0, u8, 0x1A9) != 0)) {
        if (func_801496D4((s32) arg0) != 0) {
            func_801599A4((s32) arg0);
            func_80149704((s32) arg0);
            return;
        }
        if (!(func_801487F4((s32) arg0) & 8) && (func_801488A8((s32) arg0) != 0)) {
            func_801599A4((s32) arg0);
            func_8015A230((s32) arg0);
            return;
        }
    }
    if (func_80146E98((s32) arg0) == 0) {
        func_8001382C((s16) -AF(AF(arg0, u8 *, 0x20), u16, 0x12), arg0 + 0x234, sp10);
        func_80146DB8((s32) arg0, (s32) sp10);
        func_80147A84((s32) arg0);
        func_801473EC((s32) arg0);
    }
    if (func_80161208((s32) arg0) == 0) {
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

s32 func_80155A44(s32 arg0) {
    switch (AF(arg0, u8, 0x1AA)) {
    case 0:
    case 1:
        if ((func_80029178(0x85) & 0xFF) && (func_8014BEF8((u8 *) arg0) != 0) && (AF(arg0, u8, 0x1C0) != 0) && (func_80148800(arg0) & 0x10)) {
            func_80149CB4(arg0, 2);
            return 1;
        }
        break;
    case 2:
        if ((func_80029178(0x86) & 0xFF) && (func_80148800(arg0) & 0x10)) {
            func_80149CB4(arg0, 3);
            return 1;
        }
        break;
    }
}

extern u8 D_800D4DA8;

void func_80155B20(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if ((func_80161208((s32) arg0) == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        func_80146D80((s32) arg0);
        func_801477E8((s32) arg0, -0x100000);
        func_80154274((s32) arg0, (s32) &D_800D4DA8);
        func_80146CA0((s32) arg0);
    }
}

extern u8 D_800D4DB4;

void func_80155B9C(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    func_80148038((s32) arg0, 0x30000);
    func_80147460((s32) arg0);
    if (AF(arg0, s32, 0x34) >= 0) {
        func_80154274((s32) arg0, (s32) &D_800D4DB4);
        func_80146CA0((s32) arg0);
        func_80147324(0x447);
    }
}

void func_80155C0C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 pad[16];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154274((s32) arg0, (s32) &D_800D4DD4, arg2);
        func_80146CA0((s32) arg0);
    }
}

extern u8 D_800D4DF4;

void func_80155C64(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    func_80148038(arg0, 0x30000);
    func_80147460(arg0);
    if (func_8014ED28(arg0) != 0) {
        func_80146D90(arg0);
    }
    if ((AF(arg0, s32, 0x34) > 0) && (((s32 (*)())func_8014CC28)(arg0) != 0)) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        func_8014C010(arg0, 1);
        return;
    }
    temp_v0 = func_8014FA04(arg0);
    if (temp_v0 & 0x4000) {
        func_801599A4(arg0);
        func_8014C010(arg0, 1);
        func_8015BF48(arg0);
    } else if (temp_v0 & 0x2000) {
        func_80154274(arg0, &D_800D4DF4);
        func_80146CA0(arg0);
        func_8014C010(arg0, 1);
    } else {
        func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
    }
}

extern s32 func_8015E880();

void func_80155D70(u8 *arg0) {
    u8 unused[0x40]; /* MATCH-TRICK: frame pad, the original's frame has 0x40 unused bytes */
    s32 temp_s1;

    AF(arg0, s32, 0x44) |= 2;
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        if (func_801487F4(arg0) & 0x80) {
            func_801599A4(arg0);
            func_8015E880(arg0);
            return;
        }
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    temp_s1 = ((s32 (*)()) func_8014CC28)(arg0); /* the file defines func_8014CC28 void; the original uses its value (26 Oct ruling: cast at the caller) */
    if ((func_8014F3E8(arg0) == 0) && (temp_s1 == 0)) {
        func_801599A4(arg0);
        func_8015BDD0(arg0);
    }
}

void func_80155E30(u8 *arg0, s32 arg1) {
    s32 pad[4];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    if (func_80161208((s32) arg0) == 0) {
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

void func_80155EA4(u8 *arg0) {
    s32 pad[4];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    func_80147AD4((s32) arg0, 0, 0, 0x8000);
    func_801473EC((s32) arg0);
    if (!(D_800B99DA & 3)) {
        func_8014C010((s32) arg0, 2);
    }
    func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    if ((AF(arg0, s32, 0x2C) >= 0) || (AF(arg0, u8, 0x1C0) != 0)) {
        func_801599A4((s32) arg0);
        func_80159B3C((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

void func_80155F58(void) {
}

void func_80155F60(s32 arg0) {
    func_80155F80(arg0);
}

s32 func_80155F80(s32 arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    return StartFace(arg0, 0x11);
}

void func_80155FB0(s32 arg0, s32 arg1) {
    func_80155FF8(arg0, arg1 | 0x10000);
}

void func_80155FD4(s32 arg0, s32 arg1) {
    func_80155FF8(arg0, arg1 | 0x20000);
}

extern void func_80156044();

void func_80155FF8(s32 arg0, s32 arg1) {
    SetSpadStackNested();
    func_80156044(arg0, arg1);
    ResetSpadStack();
}

extern u8 D_8018F534;
extern u8 D_8018F548;
extern u8 D_8018F3CC;
extern s32 func_8015616C();
extern void func_80156670();
extern s32 func_801567BC();
extern void func_80156848();
extern void func_80156A88();
extern s32 func_801565C0();

void func_80156044(s32 arg0, s32 arg1) {
    u8 *e;
    s32 v;

    if (arg1 & 0x10000) {
        e = &D_8018F534 + (arg1 & 0xFFFF) * 20;
    } else if (arg1 & 0x20000) {
        e = &D_8018F548 + (arg1 & 0xFFFF) * 20;
    } else {
        e = &D_8018F3CC + (arg1 & 0xFFFF) * 20;
    }
    v = func_8015616C(arg0, AF(e, u16, 0)) & 0xFFFF;
    if (AF(arg0, u8, 0x1A8) != 0) {
        func_80156670(arg0, AF(e, s32, 0), v, AF(e, s32, 4), AF(e, u8, 0xA), AF(e, u16, 0x12));
        if (AF(e, u8, 0x10) != 0) {
            func_801567BC(arg0);
        }
        func_80156848(arg0, e, v);
        func_80156A88(arg0, e);
        if (func_801565C0(arg0) != 0) {
            AF(arg0, u8, 0x1C0) = 1;
        }
    }
}

extern s32 func_80029B4C();
extern s32 func_80029BC8();
extern s32 func_80029C44();
extern s32 func_8015640C();

s32 func_8015616C(s32 arg0, s32 arg1) {
    u8 *p;
    u16 flags;
    u16 range;
    u16 a;
    u16 b;
    u16 s5;
    u16 s6;
    s32 base;
    s32 v;
    s32 n;

    p = (u8 *) func_801563EC(arg1 & 0xFFFF);
    flags = AF(p, u16, 0);
    range = AF(p, u16, 2);
    a = AF(p, u16, 4);
    b = AF(p, u16, 6);
    s5 = AF(p, u16, 8);
    s6 = AF(p, u16, 0xA);
    base = flags & 0xFFF;
    if (flags & 0x4000) {
        v = func_80029B4C(base, (s16) range) + func_80029BC8((s16) a, (s16) b);
    } else if (flags & 0x2000) {
        v = func_80029C44(base, (s16) range);
    } else {
        v = base + rand() % (range + 1);
    }
    D_8012693A = s5;
    if (func_80029178(0x81) & 0xFF) {
        D_8012693A *= 2;
    }
    n = 0;
    if (s6 != 0) {
        if (func_80029178(0x1A) & 0xFF) {
            n = 5;
        } else if (func_80029178(0x19) & 0xFF) {
            n = 4;
        } else if (func_80029178(0x18) & 0xFF) {
            n = 3;
        } else if (func_80029178(0x17) & 0xFF) {
            n = 2;
        } else if (func_80029178(0x16) & 0xFF) {
            n = 1;
        }
    }
    D_801152B8 = s6 + n;
    if (flags & 0x8000) {
        v = func_8015640C(arg0, v & 0xFFFF);
    }
    return v & 0xFFFF;
}

s32 func_80156370(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s32 temp_s1;
    u16 temp_s0;
    void *temp_v0;

    temp_v0 = func_801563EC(arg0 & 0xFFFF);
    temp_s0 = AF(temp_v0, u16, 2);
    temp_s1 = AF(temp_v0, u16, 0) & 0xFFF;
    return (temp_s1 + (rand() % (s32) (temp_s0 + 1))) & 0xFFFF;
}

s32 func_801563EC(s32 arg0) {
    return (s32) (((arg0 & 0xFFFF) * 0xC) + &D_8018F570);
}

extern s32 func_801564B0();

s32 func_8015640C(s32 arg0, s32 arg1) {
    if (func_801564B0() & 0xFFFF) {
        if (func_80029178(0x1C) & 0xFF) {
            return (((arg1 & 0xFFFF) * 175 / 100) & 0xFFFF) | 0x8000;
        } else {
            return (((arg1 & 0xFFFF) * 150 / 100) & 0xFFFF) | 0x8000;
        }
    }
    return arg1 & 0xFFFF;
}

extern s32 func_8002A1B4();
extern s32 func_8002A400();
extern s32 func_8002A670();
extern s32 func_8002A8E0();

s32 func_801564B0(u8 *arg0) {
    u8 *c = &D_80078E78;
    u16 r;

    if (AF(arg0, s32, 0x44) & 0x200) {
        if (rand() & 1) {
            return 0x8000;
        }
    }
    if (func_8002A1B4() || func_8002A400() || func_8002A670() || func_8002A8E0()) {
        if (!(rand() & 3)) {
            return 0x8000;
        }
    }
    if (rand() & 3) {
        return 0;
    }
    r = rand() % 160;
    if (r <= 80 || r >= AF(c, s16, 0x2E)) {
        return 0;
    }
    return 0x8000;
}

s32 func_801565C0(s32 arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_a1;
    u32 var_a0;

    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &D_801151E0;
    do {
        if (*var_v1 & 1) {
            var_a1 |= 1;
        }
        var_a0 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 4);
    } while (var_a0 < 3U);
    return var_a1;
}

s32 func_80156600()
{
    u32 i;

    for (i = 0; i < 3; i++) {
        if ((&D_801151E0)[i] & 1) {
            return (s32) &D_80126AF0[i];
        }
    }
    return 0;
}

s32 func_80156648(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AF(arg0, u8, 0x1A8) = 0;
    AF(arg0, u8, 0x1A9) = 0;
    AF(arg0, u8, 0x1C0) = 0;
    return func_80156A14();
}

extern u8 D_801150E0;
extern SV8 D_80126AF6[];
extern u8 D_801270A8;
extern void func_80156B74();

void func_80156670(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u16 a5 = arg5;
    u32 i;

    func_80156B74(arg0, arg3, arg0 + 0x1A9);
    for (i = 0; i < 3; i++) {
        (&D_801151E0)[i] = 0;
        if (D_80126AF6[i].x == 0) {
            (&D_801151E0)[i] = func_80157158(arg0, (u16)arg1, (u16)arg2, &D_801270A8, &D_80126AF0[i], &D_80128120[i], &D_80128138[i], &D_801150E0 + i * 4, &D_8011DAD8 + i * 8, arg4, a5, &D_8011520C + i, &D_80126730[i]);
        }
    }
}

s32 func_801567BC(s32 arg0) {
    s32 *var_s1;
    s32 *var_s0;
    s32 temp_v0;
    u32 var_s2;

    var_s2 = 0;
    var_s1 = &D_8011DAD8;
    var_s0 = &D_801151E0;
    do {
        if (*var_s0 & 1) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8014C568(arg0, (s32) var_s1);
        }
        var_s1 = (s32 *)((u8 *)var_s1 + 8);
        var_s2 += 1;
        temp_v0 = var_s2 < 3U;
        var_s0 = (s32 *)((u8 *)var_s0 + 4);
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_80156A1C(s32 arg0, s32 arg1);  /* defined after func_80156848, which calls it */

void func_80156848(StageActor *a, u8 *b) {
    s32 d;
    u32 i;
    s32 *f;

    for (i = 0; i < 3; i++) {
        { s32 *p = &D_801151E0; f = &p[i]; }
        if (*f & 1) {
            func_80013E94(&D_80128120[i], &d);
            func_80146A6C(AF(b, u8, 8), a, D_80126AF0[i].x, D_80126AF2[i].x, D_80126AF4[i].x, d, AF(b, u8, 9));
        } else if (*f & 6) {
            func_80156A1C((s32)a, i);
            func_80013E94(&D_80128138[i], &d);
            if ((*f & 6) == 4) {
                d |= 0x80000000;
            }
            func_80146A6C(6, a, D_80126AF0[i].x, D_80126AF2[i].x, D_80126AF4[i].x, d, 0);
            if (D_80126730[i] == 0x24) {
                func_801469C8(0x53, a, D_80126AF0[i].x, D_80126AF2[i].x, D_80126AF4[i].x, d, 0, 0x14);
            }
        }
    }
}

s32 func_80156A14(s32 arg0) {
    AF(arg0, u8, 0xDA) = 0;
}

void func_80156A1C(s32 arg0, s32 arg1) {
    if (AF(arg0, u8, 0xDA) == 0) {
        func_80147324((s32) (*(u16 *)((u8 *)D_8018F7E0 + ((*(&D_8011520C + arg1) * 2)) * 1)), arg1);
        AF(arg0, u8, 0xDA) = (u8) (AF(arg0, u8, 0xDA) + 1);
    }
}

void func_80156A88(s32 arg0, u8 *arg1) {
    u32 i;
    s32 f = AF(arg1, s32, 0xC);
    s32 v = f & 0xF0FFFFFF;

    if (f != 0x80000000) {
        for (i = 0; i < 3; i++) {
            if ((&D_801151E0)[i] & 1) {
                if (f & 0x01000000) {
                    func_80147324(v & 0xFFFF);
                } else if (f & 0x02000000) {
                    func_8014CA88(((s32 *)&D_801150E0)[i], v);
                } else {
                    func_8014CA14(((s32 *)&D_801150E0)[i], v);
                }
            }
        }
    }
}

extern s32 func_801484E8();
extern s32 func_8014856C();
extern void func_80156ECC();

void func_80156B74(s32 arg0, s32 arg1, u8 *arg2) {
    SV8 a;
    SV8 b;
    s32 p;
    u8 *t;

    p = AF(arg0, s32, 0x20);
    ((s16 *)&D_801270A8)[0] = 0;
    ((s16 *)&D_801270A8)[1] = -0x1E;
    ((s16 *)&D_801270A8)[2] = 0;
    if (arg1 == 0) {
        if (AF(p, s32, 0x20) != 0) {
            func_801484B0((s32)&a, (s32)&b);
            D_80126AF0[0].x = a.x;
            D_80126AF0[0].y = a.y;
            D_80126AF0[0].z = a.z;
            func_801484E8((s32)&a, (s32)&b);
            D_80126AF0[1].x = a.x;
            D_80126AF0[1].y = a.y;
            D_80126AF0[1].z = a.z;
        } else {
            D_80126AF0[0].x = 0;
            D_80126AF0[0].y = 0;
            D_80126AF0[0].z = 0;
            D_80126AF0[1].x = 0;
            D_80126AF0[1].y = 0;
            D_80126AF0[1].z = 0;
        }
    } else if (arg1 == 1) {
        if (AF(p, s32, 0x20) != 0) {
            func_80148534((s32)&a, (s32)&b);
            D_80126AF0[0].x = a.x;
            D_80126AF0[0].y = a.y;
            D_80126AF0[0].z = a.z;
            func_8014856C((s32)&a, (s32)&b);
            D_80126AF0[1].x = a.y;
            D_80126AF0[1].y = a.y;
            D_80126AF0[1].z = a.z;
        } else {
            D_80126AF0[0].x = 0;
            D_80126AF0[0].y = 0;
            D_80126AF0[0].z = 0;
            D_80126AF0[1].x = 0;
            D_80126AF0[1].y = 0;
            D_80126AF0[1].z = 0;
        }
    } else if (arg1 == 2) {
        D_80126AF0[0].x = 0;
        D_80126AF0[0].y = -0x1E;
        D_80126AF0[0].z = -0x52;
        func_800139C8((s16)(AF(arg0, u16, 0x24A) - AF(AF(arg0, s32, 0x20), u16, 0x12)), &D_80126AF0[0], &D_80126AF0[0]);
        D_80126AF0[1].x = 0;
        D_80126AF0[1].y = -0x1E;
        D_80126AF0[1].z = -0x52;
    } else {
        t = (u8 *)(arg1 & 0x80FFFFFF);
        D_80126AF0[0].x = (s8)t[*arg2 * 3 + 0];
        D_80126AF0[0].y = (s8)t[*arg2 * 3 + 1];
        D_80126AF0[0].z = (s8)t[*arg2 * 3 + 2];
        D_80126AF0[1].x = (s8)t[*arg2 * 3 + 3];
        D_80126AF0[1].y = (s8)t[*arg2 * 3 + 4];
        D_80126AF0[1].z = (s8)t[*arg2 * 3 + 5];
    }
    if (!(arg1 & 0x0F000000)) {
        *arg2 = *arg2 + 1;
    }
    func_80156ECC(arg0, &D_801270A8, &D_80126AF0[0], &D_80126AF0[1], &D_80126AF0[2]);
}

extern void func_80156FA8();

void func_80156ECC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 t;

    func_80156FA8(arg2, arg3, arg4);
    func_80147478(arg0);
    func_80149350(arg0, arg1, arg1);
    t = AF(arg2, s16, 6);
    if (t == 0) {
        func_80149350(arg0, arg2, arg2);
        AF(arg2, s16, 6) = t;
    }
    t = AF(arg3, s16, 6);
    if (t == 0) {
        func_80149350(arg0, arg3, arg3);
        AF(arg3, s16, 6) = t;
    }
    t = AF(arg4, s16, 6);
    if (t == 0) {
        func_80149350(arg0, arg4, arg4);
        AF(arg4, s16, 6) = t;
    }
}

void func_80156FA8(s16 *a, s16 *b, s16 *c) {
    SVECTOR d;

    d.vx = (b[0] - a[0]) / 3;
    d.vy = (b[1] - a[1]) / 3;
    d.vz = (b[2] - a[2]) / 3;
    a[3] = 0;
    if (func_80013294(a) > 0x40) {
        if (d.vx != 0 || d.vy != 0 || d.vz != 0) {
            c[0] = b[0] - d.vx;
            c[1] = b[1] - d.vy;
            c[2] = b[2] - d.vz;
            c[3] = 0;
        } else {
            c[3] = 1;
        }
        if (d.vx != 0 || d.vy != 0 || d.vz != 0) {
            b[0] = a[0] + d.vx;
            b[1] = a[1] + d.vy;
            b[2] = a[2] + d.vz;
            b[3] = 0;
        } else {
            b[3] = 1;
        }
    } else {
        c[3] = 1;
        b[3] = 1;
    }
}

extern s32 func_801571C4();

s32 func_80157158(s32 arg0, s32 a1, s32 a2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 a10, s32 arg11, s32 arg12) {
    u16 arg1 = a1;
    u16 arg2 = a2;
    u16 arg10 = a10;
    return func_801571C4(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

extern s32 func_80135004();

s32 func_801571C4(u8 *arg0, s32 a1, s32 a2, s32 arg3, SVECTOR *arg4, SVECTOR *arg5, SVECTOR *arg6, u8 **arg7, SVECTOR *arg8, s32 arg9, s32 a10, u8 *arg11, u8 *arg12) {
    u16 arg1 = a1;
    u16 arg2 = a2;
    u16 arg10 = a10;
    s32 ret;
    u32 i;
    u8 *p;
    SVECTOR v;

    ret = 0;
    if (func_80135004(1, arg3, arg4) != 0) {
        *arg11 = (u16)arg4->pad >> 13;
        *arg12 = arg4->pad;
        ret = 2;
        *arg6 = D_801152A8;
    }
    for (i = 0; i < 0x60; i++) {
        p = &D_801202A0 + i * 0x10C;
        if (AF(p, u16, 0) == 0 || AF(p, s32, 0x58) == 0 || (AF(p, s32, 0x5C) & 0x8100) != 0x8000
            || AF(p, u16, 0x5E) == 0xA) {
            continue;
        }
        if (!(arg9 & 0x80) && AF(p, u16, 0x5E) == arg1) {
            continue;
        }
        if (arg1 == 0xD && !(AF(p, u16, 0x5C) & 0x2000)) {
            continue;
        }
        if (func_80135260(AF(p, s32, 0x20), AF(p, s32, 0x58), arg3, arg4) == 0) {
            continue;
        }
        if ((AF(p, u16, 0x5C) & 0x4000) || (AF(p, s16, 0xAE) & arg10)) {
            *arg11 = func_8014C918(arg0, AF(p, u8, 0x75));
            *arg12 = 0;
            *arg6 = D_801152A8;
            ret |= 4;
            *arg7 = p;
        } else {
            v = *arg4;
            if (arg2 & 0x8000) {
                v.pad = 1;
            } else {
                v.pad = 0;
            }
            func_8014C4AC(p, arg1, arg2 & 0x7FFF, &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
            *arg5 = D_801152A8;
            *arg7 = p;
            *arg8 = *(SVECTOR *)&D_80126720;
            ret |= 1;
            if (arg9 & 0x7F) {
                break;
            }
        }
    }
    return ret;
}

void func_801574DC(s32 arg0) {
    func_80147078(arg0, 6);
    func_801575E4(arg0);
}

extern void func_80157544();

void func_80157510(s32 arg0) {
    func_80147078(arg0, 6);
    func_80157544(arg0);
}

void func_80157544(s32 arg0, s32 arg1) {
    D_8018F7F0[AF(arg0, u16, 2)]();
}

s32 func_80157580(s32 arg0) {
    s32 temp_s1;

    temp_s1 = ((s32 (*)())func_8014CC28)(arg0);
    if ((func_8014F3E8(arg0) == 0) && (temp_s1 == 0)) {
        func_8015BDD0(arg0);
        return;
    }
    func_801575E4(arg0);
}

extern u8 D_800D4F14;

s32 func_801575E4(s32 arg0) {
    StartFace(arg0, 0x15);
    AF(arg0, u8, 0x1AB) ^= 1;
    if (AF(arg0, u8, 0x1AB) != 0) {
        AF(arg0, u8, 0x1AA) = 0xA;
    } else {
        AF(arg0, u8, 0x1AA) = 0xB;
    }
    func_80154274(arg0, &D_800D4F14);
    func_80147324(0x455);
    func_80146E90(arg0, 0);
    func_80156648(arg0);
    func_80146994(5, arg0, 0, 0);
    func_8014B768(arg0, 0x333);
    func_80147300(0x5F3);
    D_8011F730 |= 4;
    func_80146CA0(arg0);
}

void func_801576A8(u8 *arg0, s32 arg1) {
    s32 pad[4];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    if (func_80161208((s32) arg0) == 0) {
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

void func_8015771C(u8 *arg0) {
    AF(arg0, u8, 0x1AA) = 0;
    func_8015773C();
}

void func_8015773C(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

void func_80157788(s32 arg0) {
    D_801ED510 = 0x12C;
    func_80147078(arg0, 7);
    func_801578C0(arg0);
}

s32 func_801577C8(s32 arg0) {
    D_801ED510 = 0x12C;
    func_80147078(arg0, 7);
    func_80157808(arg0);
}

void func_80157808(s32 arg0, s32 arg1) {
    s32 temp_v0;

    D_8018F818[AF(arg0, u16, 2)]();
    temp_v0 = D_801ED510 - 1;
    D_801ED510 = temp_v0;
    if (temp_v0 == -1) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
    }
}

void func_80157880(s32 arg0, s32 arg1) {
    func_8014ED28(arg0, arg1);
    func_8014D3E0(arg0);
    func_8014FA04(arg0);
    func_801578C0(arg0);
}

extern u8 D_800D5128;
extern u8 D_8018F7F8;
extern s32 func_801725A4();

void func_801578C0(s32 arg0, s32 arg1) {
    func_80156648(arg0, arg1);
    AF(arg0, u8, 0x1AA) = 9;
    func_80154274(arg0, &D_800D5128);
    StartFace(arg0, 0x15);
    func_80147324(0xC20);
    func_80146DB8(arg0, &D_8018F7F8);
    func_80146994(4, arg0, 7, 0);
    func_80146994(5, arg0, 9, 0);
    func_80146CA0(arg0);
    func_801725A4(arg0);
}

extern u8 D_800D5178;
extern u8 D_8018F808;
extern s32 func_80161450();
extern s32 func_80157A8C();
extern s32 func_801725A4();

void func_8015795C(s32 arg0) {
    s32 temp_v0;
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original reserves 16 unused bytes (frame 0x30) */

    AF(arg0, s32, 0x44) |= 2;
    func_80147A10(arg0, 0x400);
    if (AF(arg0, s32, 0x2C) >= 0) {
        AF(arg0, s32, 0x2C) = 0;
    }
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x1A000);
    func_80147460(arg0);
    if (func_8014ED28(arg0) != 0) {
        func_80146D90(arg0);
    }
    temp_v0 = func_80161450(arg0);
    if (temp_v0 & 5) {
        func_80157A8C(arg0);
        func_80146E90(arg0, 8);
        func_80146CA0(arg0);
    }
    if (temp_v0 == 0) {
        func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
        if (AF(arg0, u8, 0x1C0) != 0) {
            StartFace(arg0, 0x17);
            func_80154274(arg0, &D_800D5178);
            func_80146DB8(arg0, &D_8018F808);
            func_801477E8(arg0, -0xC0000);
            AF(arg0, s16, 2) = 4;
        }
        func_801725A4(arg0);
    }
}

s32 func_80157A8C(s32 arg0) {
    func_80161D20(arg0, (s32) AF(arg0, u16, 0x16E));
    return func_8014C010(arg0, 1);
}

extern u8 D_800D51AC;
extern void func_8016706C();
s32 func_801725A4(s32 arg0);

void func_80157AC8(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    func_80147AD4((s32) arg0, 0, 0, 0x10000);
    func_801473EC((s32) arg0);
    if (func_80161208((s32) arg0) == 0) {
        if (AF(arg0, s32, 0x2C) > 0) {
            func_8016706C(4);
            func_8016706C(5);
            func_80154274((s32) arg0, (s32) &D_800D51AC);
            func_80146CA0((s32) arg0);
            return;
        }
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
        func_801725A4((s32) arg0);
    }
}

void func_80157B74(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

extern s32 func_8016158C();
extern s32 func_8015BE04();

void func_80157BC8(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, 0x10000);
    func_801473EC(arg0);
    func_80148038(arg0, 0x1A000);
    func_80147460(arg0);
    if (((s32 (*)())func_8014ED28)(arg0) != 0) {
        func_80146D90(arg0);
    }
    temp_v0 = func_8016158C(arg0);
    if (temp_v0 & 5) {
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        func_8014C010(arg0, 1);
        func_8016706C(4);
        func_8016706C(5);
        func_801599A4(arg0);
        func_80159B3C(arg0);
    }
    if (temp_v0 == 0) {
        if (AF(arg0, s32, 0x34) > 0) {
            func_801599A4(arg0);
            func_80146D90(arg0);
            func_8015BE04(arg0);
            return;
        }
        func_801725A4(arg0);
    }
}

void func_80157CCC(u8 *arg0) {
    AF(arg0, u8, 0x223) = 0x10;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

extern u16 D_8018F848[];
extern s32 func_80157D74();

s32 func_80157D20(s32 arg0, s32 arg1) {
    func_80156648(arg0, arg1);
    func_80147078(arg0, D_8018F848[arg1]);
    return func_80157D74(arg0);
}

extern s32 func_80157DC4();
extern s32 func_80157FC4();

s32 func_80157D74(s32 arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, s32, 0);
    switch (temp_v1) {                              /* irregular */
    case 36:
        return func_80157DC4();
    case 37:
        return func_80157FC4();
    default:
        return 0x25;
    }
}

extern void (*D_8018F858[])();

s32 func_80157DC4(s32 arg0) {
    D_8018F858[AF(arg0, u16, 2)](arg0);
}

void func_80157E00(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80157E38(arg0);
    }
}

extern u8 D_800D4F14;

void func_80157E38(s32 arg0) {
    AF(arg0, u8, 0x1AA) = 0xD;
    func_80154274(arg0, (s32) &D_800D4F14);
    StartFace(arg0, 0x15);
    func_80146994(5, arg0, 0, 0);
    func_80147324(0x455);
    AF(arg0, s16, 0x244) = 0;
    func_80146CA0(arg0);
}

void func_80157EA4(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    if (func_80157F64((s32) arg0) == 0) {
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
        temp_v0 = func_80156600((s32) arg0);
        if ((temp_v0 != 0) && (AF(arg0, s16, 0x244) == 0)) {
            AF(arg0, s16, 0x244) = 1;
            func_80146A6C(0x54, (s32) arg0, (s32) AF(temp_v0, s16, 0), (s32) AF(temp_v0, s16, 2), /* extra? */ (s32) AF(temp_v0, s16, 4), /* extra? */ 0, /* extra? */ 0);
        }
    }
}

s32 func_80157F64(s32 arg0) {
    if (func_80029178(0x87) & 0xFF) {
        if (func_80148800(arg0) & 0x80) {
            func_80149CB4(arg0, 5);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

extern void (*D_8018F860[])();

s32 func_80157FC4(s32 arg0) {
    D_8018F860[AF(arg0, u16, 2)](arg0);
}

void func_80158000(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80158038(arg0);
    }
}

extern u8 D_800D51E0;
extern u8 D_8018F82C;

void func_80158038(s32 arg0) {
    AF(arg0, u8, 0x1AA) = 0xE;
    func_80154274(arg0, (s32) &D_800D51E0);
    StartFace(arg0, 0x15);
    func_80146DB8(arg0, (s32) &D_8018F82C);
    AF(arg0, s32, 0x234) = 0;
    func_80146994(5, arg0, 0xC, 0);
    func_80147324(0x455);
    func_80146CA0(arg0);
}

extern u8 D_800D524C;
extern s32 func_80161418();

void func_801580B4(u8 *arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad */

    AF(arg0, s32, 0x44) |= 2;
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        func_801477E8(arg0, -0xC0000);
        AF(arg0, s32, 0x234)++;
    }
    if (AF(arg0, s32, 0x234) != 0) {
        func_80148038(arg0, 0x10000);
        func_80147460(arg0);
    }
    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    if (func_80161418(arg0) == 0) {
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            func_80156648(arg0);
            AF(arg0, u8, 0x1AA) = 0xF;
            func_80154274(arg0, &D_800D524C);
            func_80147324(0x455);
            func_80146CA0(arg0);
            return;
        }
        func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
    }
}

extern s32 func_80161418();

void func_801581AC(u8 *arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original reserves 0x10 unused bytes (frame 0x28) */
    AF(arg0, s32, 0x44) |= 2;
    func_80148038(arg0, 0x10000);
    func_80147460(arg0);
    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    if (func_80161418(arg0) == 0) {
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            func_801599A4(arg0);
            func_80159B3C(arg0);
        } else {
            func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
        }
    }
}

void func_8015824C(u8 *arg0) {
    D_8018F86C[AF(arg0, u16, 2)]();
}

void func_80158288(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_801582C0(arg0);
    }
}

extern u8 D_800D52A8;
extern void func_801585A4();

void func_801582C0(s32 arg0) {
    AF(arg0, u8, 0x1AA) = 0x10;
    AF(arg0, s32, 0x44) |= 2;
    func_80154274(arg0, &D_800D52A8);
    StartFace(arg0, 0x15);
    func_801585A4(arg0);
    func_8016706C(5);
    func_80146994(4, arg0, 8, 0);
    func_80147324(0x446);
    func_80146CA0(arg0);
}

extern u8 D_800D52E8;
extern s32 func_801585AC();

void func_80158344(u8 *arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (func_80161208((s32) arg0) == 0) {
        if (func_801585AC((s32) arg0) != 0) {
            func_80156648((s32) arg0);
            AF(arg0, u8, 0x1AA) = 0x11U;
            func_80154274((s32) arg0, (s32) &D_800D52E8);
            AF(arg0, s32, 0x234) = 0;
            func_80147324(0x455);
            func_80146994(4, (s32) arg0, 9, 0);
            func_80146994(5, (s32) arg0, 0xD, 0);
            func_80146E90((s32) arg0, 0x12C);
            func_80146CA0((s32) arg0);
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            func_801599A4((s32) arg0);
            func_80159B3C((s32) arg0);
            return;
        }
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

extern u8 D_800D533C;
extern u8 D_8018F83C;
extern s32 func_801615C4();

void func_80158434(u8 *arg0) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with only s0/ra saved */
    s32 v;
    s32 t;

    AF(arg0, s32, 0x44) |= 2;
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x234)++;
        func_8014CBF8();
        func_801474EC(arg0);
        func_801477E8(arg0, -0x60000);
        func_80146DB8(arg0, &D_8018F83C);
    }
    if (AF(arg0, s32, 0x234) != 0) {
        func_80148038(arg0, 0x10000);
        func_80147460(arg0);
        func_80147AD4(arg0, 0, 0, 0);
        func_801473EC(arg0);
    }
    v = func_801615C4(arg0, 0);
    if (v != 0) {
        if (v == 1) goto block;
        t = v & 0x2000;
    } else {
        t = func_80146E98(arg0);
    }
    if (t != 0) {
block:
        func_80154274(arg0, &D_800D533C);
        func_80146CA0(arg0);
        return;
    }
    func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
}

void func_80158548(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

void func_801585A4(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0x244) = 0;
}

s32 func_801585AC(s32 arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x244) | func_80148800(arg0);
    AF(arg0, u16, 0x244) = temp_v1;
    {
        s32 bt = temp_v1 & 0x10;

        return bt != 0;
    }
}

void func_801585EC(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

extern s32 func_80159464();
extern s32 func_8014BB0C();
extern void func_80158814();

void func_80158638(u8 *arg0) {
    s32 t;
    u16 k;

    if (D_800B9A64 == 0 && !(AF(arg0, s32, 0x44) & 0x10)) {
        k = AF(arg0, u16, 0);
        if (k != 0x1A && k != 0x1E) {
            t = AF(arg0, s32, 0x1F8);
            if ((t == 0 || (t & 0x08000000)) && D_80078EB4 == 0) {
                if (((s16)func_80159464(arg0) <= 0 || (s16)func_80159464(arg0) >= 6) && func_8014C98C() == 0 && func_800D0F8C(0xA) != 0) {
                    func_801599A4(arg0);
                    func_8016F0E4(arg0);
                    func_80159B3C(arg0);
                    func_80165718(arg0);
                    func_800D0F4C(0xA);
                    func_8014BB0C();
                    func_8014BDC8();
                    func_8014B2A8();
                    AF(arg0, s32, 0x198) = func_8013767C(&D_80110EC0);
                    D_800B9A17 = 1;
                    return;
                }
                func_801599A4(arg0);
                func_8016F0E4(arg0);
                func_80158814(arg0);
            }
        }
    }
}

void func_80158794(void) {
}

void func_8015879C(u8 *arg0) {
    D_801ED518 = 0;
    D_801ED524 = 1;
    D_801ED528 = 0;
    AF(arg0, u8, 0xA8) = 0;
    func_80147084((s32) arg0);
    func_80147098((s32) arg0);
    func_801470AC((s32) arg0);
    func_80147078((s32) arg0, 0x1A);
    func_80146C98((s32) arg0, 1);
    func_80158880((s32) arg0);
}

void func_80158814(s32 arg0) {
    D_801ED518 = 0;
    D_801ED524 = 1;
    D_801ED528 = 0;
    AF(arg0, u8, 0xA8) = 0;
    func_80147084(arg0);
    func_80147098(arg0);
    func_801470AC(arg0);
    func_80147078(arg0, 0x1A);
    func_80158880(arg0);
}

void func_80158880(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    D_8018F8A8[AF(arg0, u8, 0x4F)](arg0);
}

extern void (*D_8018F8AC[])();
extern s32 D_801ED51C;
extern s32 func_8001BD80();

void func_801588CC(u8 *arg0) {
    D_8018F8AC[AF(arg0, u16, 2)](arg0);
    switch (D_801ED518) {
    case 0:
        break;
    case 1:
        func_800D0CA0(2);
        D_801ED520 = 0;
        D_801ED51C = 0x46;
        D_801ED518++;
        break;
    case 2:
        if (D_801ED51C == 0) {
            if (func_8001BD80() == 0) {
                D_801ED518++;
            }
        } else {
            D_801ED51C--;
        }
        break;
    case 3:
        if (func_8001AAA0(0x83) != 0) {
            D_801ED518++;
        }
        break;
    case 4:
        D_801ED524 = 0;
        if ((s16)func_80159464(arg0) != 0) {
            D_801ED51C = 0xD2;
        } else {
            D_801ED51C = 1;
        }
        break;
    case 5:
        D_801ED51C--;
        if (D_801ED51C == -1 || D_801ED528 != 0) {
            D_801ED51C = 0;
            D_801ED518++;
        }
        break;
    case 6:
        func_800D0CA0(1);
        D_801ED51C = 0x28;
        D_801ED518++;
        break;
    case 7:
        if (D_801ED51C == 0) {
            if (func_8001BD80() == 0) {
                D_801ED518++;
            }
        } else {
            D_801ED51C--;
        }
        break;
    case 8:
        D_801ED520 = 1;
        break;
    }
}

void func_80158AB4(s32 arg0) {
    func_80158AE4();
    func_80146CA0(arg0);
}

extern void func_80165840();
extern void func_801658DC();
extern void func_8014BF48();

void func_80158AE4(u8 *arg0) {
    D_800AE6B0 = D_800AE6AC | 0x1000000;
    func_8016F264(arg0);
    func_80165840(arg0);
    func_801658DC(arg0);
    func_80165A20(arg0);
    func_80165A78(arg0);
    func_8014BF48();
    func_8014CBF8(arg0);
    func_8014B160(arg0);
    func_80149020(arg0);
    AF(arg0, s16, 0x12E) = 0;
    AF(arg0, s16, 0x74) = 0x1000;
    AF(arg0, s16, 0x72) = 0x1000;
    AF(arg0, s16, 0x70) = 0x1000;
    AF(arg0, s16, 0x6C) = 0x1000;
    AF(arg0, s16, 0x6A) = 0x1000;
    AF(arg0, s16, 0x68) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x1BA) = 0x1000;
    AF(arg0, s16, 0x1B8) = 0x1000;
    AF(arg0, s16, 0xF6) = 0x1000;
    D_80078EC8 = 0;
    AF(arg0, s16, 0x1C8) = 0;
    func_80146CA0(arg0);
}

extern u8 D_800D58D8;

void func_80158BB0(s32 arg0) {
    if (D_801ED518 == 0) {
        D_801ED518 = 1;
    }
    func_80147324(0x456);
    func_80154274(arg0, &D_800D58D8);
    StartFace(arg0, 0x16);
    AF(arg0, s32, 0x234) = 0xE30000;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
    func_801474EC(arg0);
    func_801474D8(arg0);
    func_801472C8(arg0);
    func_80146CA0(arg0);
}

extern s32 func_80159404();

void func_80158C40(s32 arg0) {
    s32 step = 0x3C000;
    s32 i;

    i = 1;
    if (func_801487F4(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        func_80159404(arg0, step);
        if (AF(arg0, s32, 0x234) < 0) {
            func_80146E90(arg0, 4);
            func_80146CA0(arg0);
            i = 0;
        }
    }
}

void func_80158CD8(s32 arg0) {
    s32 i;

    i = 1;
    if (func_801487F4(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        if (func_80146E98(arg0)) {
            func_80147324(0x453);
            AF(arg0, s32, 0x238) = 0x5B0000;
            func_80146CA0(arg0);
            i = 0;
        }
    }
}

extern s32 func_80159434();

void func_80158D60(s32 arg0) {
    s32 step = 0x4C000;
    s32 i;

    i = 1;
    if (func_801487F4(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        func_80159434(arg0, step);
        if (AF(AF(arg0, s32, 0x20), s16, 0x10) < 0xC00) {
            func_80147324(0x454);
            AF(AF(arg0, s32, 0x20), s16, 0x10) = 0xC00;
            AF(arg0, s32, 0x238) = 0xFFEA0000;
            func_80146CA0(arg0);
            i = 0;
        }
    }
}

extern u8 D_800D5904;
extern s32 func_80159434();

void func_80158E24(s32 arg0) {
    s32 i;
    s32 spd;

    spd = 0x4C000;
    i = 1;
    if (func_801487F4(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        func_80159434(arg0, spd);
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x10) < 0xC00) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0xC00;
            func_80154274(arg0, &D_800D5904);
            StartFace(arg0, 0x20);
            func_8002D4C8(0x2A, 0);
            func_8002D4C8(0x1C, 0);
            func_80146CA0(arg0);
            i = 0;
        }
    }
}

extern s32 D_8018F87C[];

void func_80158F00(u8 *arg0) {
    u8 *p;
    s32 t;

    p = AF(arg0, u8 *, 0x20);
    t = D_801ED524;
    AF(p, u16, 0x12) = (AF(p, u16, 0x12) + 0x16) & 0xFFF;
    if (t == 0) {
        AF(arg0, s32, 0x198) = func_8013767C(D_8018F87C[rand() % 11]);
        func_80146CA0(arg0);
    }
}

extern s32 func_80159464();
void func_801594E8(s32 a, s32 n);

void func_80158FA4(u8 *arg0) {
    s16 temp_v0_2;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) ((AF(temp_v0, u16, 0x12) + 0x16) & 0xFFF);
    if (func_80148800((s32) arg0) & 0xF0) {
        D_801ED528 = 1;
    }
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        temp_v0_2 = func_80159464((s32) arg0);
        if (temp_v0_2 != 0) {
            func_801594E8((s32) arg0, (s32) temp_v0_2);
            func_80146C98((s32) arg0, 0xC);
            return;
        }
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_80110C3C);
        func_80146CA0((s32) arg0);
    }
}

extern u8 D_80110C94;
extern u8 D_80110CD4;

void func_80159070(u8 *arg0) {
    s16 r;
    u8 *p;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (AF(temp_v0, u16, 0x12) + 0x16) & 0xFFF;
    r = func_801399F0(AF(arg0, s32, 0x198));
    AF(arg0, s16, 0x244) = r;
    if (r != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        switch (AF(arg0, s16, 0x244)) {
        case 1:
        default:
            p = &D_80110C94;
            break;
        case 2:
            p = &D_80110CD4;
            break;
        }
        AF(arg0, s32, 0x198) = func_8013767C(p);
        func_80146CA0(arg0);
    }
}

void func_80159120(u8 *a) {
    s32 r;
    s32 t;

    func_80029504();
    AF(AF(a, u8 *, 0x20), u16, 0x12) = (AF(AF(a, u8 *, 0x20), u16, 0x12) + 0x16) & 0xFFF;
    r = func_801399F0(AF(a, s32, 0x198));
    if (r != 0) {
        func_80139914(AF(a, s32, 0x198));
        AF(a, s32, 0x198) = 0;
        switch (r) {
        case 1:
        default:
            switch (AF(a, s16, 0x244)) {
            case 1:
            default:
                if (func_80029A94(1) != 0) {
                    func_80175454();
                    func_801458E0();
                    t = D_80078E8C;
                    func_800298BC(&D_80078E50);
                    func_801458E8();
                    D_80078E8C = t / 2;
                    goto tail;
                } else {
                    AF(a, s32, 0x198) = func_8013767C(&D_80110D0C);
                    func_80146C98((s32)a, 0xB);
                }
                break;
            case 2:
                if (func_80029A94(0) == 0) {
                    AF(a, s32, 0x198) = func_8013767C(&D_80110D0C);
                    func_80146C98((s32)a, 0xB);
                } else {
                    func_80175454();
                    func_8002992C(0);
                    func_80145A2C();
                tail:
                    func_80146C98((s32)a, 0xC);
                    func_800CF804();
                    func_800CF818();
                }
                break;
            }
            break;
        case 2:
            AF(a, s32, 0x198) = func_8013767C(&D_80110C3C);
            func_80146C98((s32)a, 9);
            break;
        }
    }
}

void func_801592CC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + 0x16) & 0xFFF);
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_80110C3C);
        func_80146C98((s32) arg0, 9);
    }
}

void func_8015934C(s32 arg0) {
    void *temp_v1;

    if (D_801ED518 == 4) {
        D_801ED518 = 5;
    }
    if (D_801ED520 != 0) {
        func_80145BF8();
        func_80146CA0(arg0);
        D_800AE6BD += 1;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + 0x16) & 0xFFF);
}

void func_801593E4(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + 0x16) & 0xFFF);
}

s32 func_80159404(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x12) = (u16) ((AF(temp_a2, u16, 0x12) + AF(arg0, u16, 0x236)) & 0xFFF);
    temp_v0 = AF(arg0, s32, 0x234) - arg1;
    AF(arg0, s32, 0x234) = temp_v0;
    return temp_v0;
}

s32 func_80159434(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x10) = (u16) ((AF(temp_a2, u16, 0x10) - AF(arg0, u16, 0x23A)) & 0xFFF);
    temp_v0 = AF(arg0, s32, 0x238) + arg1;
    AF(arg0, s32, 0x238) = temp_v0;
    return temp_v0;
}

extern s16 D_8018F8E4[];

s32 func_80159464(void) {
    s16 *p = D_8018F8E4;

    for (; *p != 0; p += 2) {
        if (D_800B9A08 == (s16)(u16)*p) {
            return p[1];
        }
    }
    if (func_80029A94(1) == 0 && func_80029A94(0) == 0) {
        return -1;
    }
    return 0;
}

void func_801594E8(s32 a, s32 n) {
    u8 *c;
    u8 f[3];
    u8 g[2];
    s32 t;

    func_80175454();
    c = &D_80078E78;
    switch (n) {
    case -1:
        f[0] = func_80029178(0xB);
        f[1] = func_80029178(0xC);
        f[2] = func_80029178(0xD);
        g[0] = func_800291B4(0x2C);
        g[1] = func_800291B4(0x2D);
        t = AF(c, s32, 4);
        func_80029274();
        func_80029044();
        func_8002906C();
        func_80029094();
        func_8002941C();
        func_80029124(0xB, f[0]);
        func_80029124(0xC, f[1]);
        func_80029124(0xD, f[2]);
        func_800291A0(0x2C, g[0]);
        func_800291A0(0x2D, g[1]);
        AF(c, s32, 4) = t;
        func_8014BEC0(a);
        func_8002AB64();
        func_80029514(2);
        func_800D185C(&D_800D3A44);
        func_800CF804();
        break;
    case 1:
        AF(c, s16, 0x40) = AF(c, s16, 0x3C) = 0x96;
        AF(c, s32, 0x14) = D_80128150;
        break;
    case 2:
    case 3:
    case 4:
        func_800D1F90();
        break;
    case 5:
        func_800D1F90();
        func_800D185C(&D_800D39FC);
        func_80029514(0x636);
        break;
    case 6:
        func_800D1F90();
        func_800D185C(&D_800D3A20);
        func_80029514(0x636);
        break;
    }
}

void func_80159698(u8 *arg0) {
    D_8018FAF8[AF(arg0, u8, 0x15)]();
}

s32 func_801596D4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0x10;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s16 D_800B9AAC;
extern s16 D_800B9B00;
extern u8 D_8018F918;
extern void func_8013C938();
extern void func_8013CB20();
extern void func_8013C98C();
extern void func_8002850C();
extern void func_80028620();
extern s32 func_80174B6C();

s32 func_801596F0(u8 *arg0) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    u8 *q;

    if (--AF(arg0, s32, 0x28) == -1) {
        func_80174B6C();
        D_800B9AAC = 0x7FFF;
        D_800B9B00 = 0x7FFF;
        for (p = w + 0x65A8; p < w + 0x9DA8; p += 0x38) {
            AF(p, u32, 4) |= 0x80000000;
        }
        for (q = w + 0x2A8; q < w + 0x65A8; q += 0x84) {
            if (q < &D_800AFAE8 || q >= &D_800AFAE8 + 0x84) {
                AF(q, u32, 4) |= 0x80000000;
            }
        }
        D_801270C0 = 3;
        func_80129248(0);
        func_8013C938();
        func_8013CB20();
        func_8013C98C();
        func_8002850C(0x800, 0x800, 0x800);
        func_80028620(0, &D_8018F918);
        func_80028620(1, &D_8018F918 + 0x10);
        func_80028620(2, &D_8018F918 + 0x20);
        AF(arg0, s32, 0x28) = 0xFF;
        AF(arg0, u8, 0x15)++;
    }
    return 0;
}

s32 func_80159874(void) {
    return 0;
}

s32 func_8015987C(u8 *arg0, s32 arg1) {
    func_800167B8(4, arg1);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_801598BC(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

extern void func_80159968();

void func_801598E0(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        AF(arg0, u16, 0xAA) &= 0xAFFF;
        AF(arg0, u16, 0xAC) &= 0xAFFF;
        break;
    case 0x53:
    case 0x73:
        AF(arg0, u16, 0xAE) = AF(arg0, u8, 0xAE) | 0x8000;
        break;
    }
    func_80159968(arg0);
}

extern void (*D_8018FB9C[])();

void func_80159968(u8 *arg0) {
    D_8018FB9C[AF(arg0, u8, 0x4D)]();
}

void func_801599A4(arg0)
    u8 *arg0;
{
    D_8018FBA8[AF(arg0, u16, 0)]();
}

void func_801599E0(u8 *arg0) {
    func_80159A20();
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
}

void func_80159A18(void) {
}

extern void func_8015126C();
extern void (*D_8018FC4C[])();

void func_80159A20(u8 *arg0) {
    func_80150B28(arg0);
    func_80158638(arg0);
    func_8015126C(arg0);
    func_8014900C(arg0);
    D_8018FC4C[AF(arg0, u16, 0) & 0x7FFF](arg0);
    AF(arg0, s32, 0x44) |= 0x08000000;
    switch (AF(arg0, u16, 0)) {
    case 2:
    case 3:
    case 11:
    case 12:
        AF(arg0, s32, 0x44) &= ~0x08000000;
        break;
    case 25:
        switch (AF(arg0, u8, 0xDD)) {
        case 1:
            if (AF(arg0, u16, 2) == 3) {
                AF(arg0, s32, 0x44) &= ~0x08000000;
            }
            break;
        case 4:
            AF(arg0, s32, 0x44) &= ~0x08000000;
            break;
        }
        break;
    }
}

void func_80159B08(s32 arg0) {
    func_80147078(arg0, 0);
    func_80159BE4(arg0);
}

s32 func_80159B3C(s32 arg0) {
    func_80147078(arg0, 0);
    func_80159B70(arg0);
}

void func_80159B70(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    D_8018FCF0[AF(arg0, u16, 2)]();
}

void func_80159BAC(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80159BE4(arg0);
    }
}

extern u8 D_8018FB0C;
extern s32 func_80172590();

void func_80159BE4(s32 arg0) {
    func_80146DB8(arg0, &D_8018FB0C);
    if (AF(arg0, s32, 0x44) & 0x200) {
        func_80154150(arg0, 5);
        StartFace(arg0, 0x1C);
    } else {
        func_80154150(arg0, 4);
        StartFace(arg0, 0x11);
    }
    AF(arg0, s32, 0x234) = 0;
    AF(arg0, s32, 0x238) = 0;
    UpdateFlag10Part21(arg0);
    ClearDisplayFlag20(arg0);
    func_80172590(arg0);
    func_80146CA0(arg0);
}

extern s32 func_80161BE0();
extern s32 func_801619A4();
extern s32 func_800CCCC0();
extern u8 D_800D5F44;
extern u8 D_800D5F34;
extern u8 D_800D5F14;
extern u8 D_800D5F04;
extern u8 D_800D49F4;

void func_80159C84(s32 arg0) {
    u8 *s;

    if (func_80149D9C(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149FA8(arg0);
        return;
    }
    func_80149FB0(arg0);
    if (func_80161B18(arg0) != 0) {
        return;
    }
    if (func_80161B84(arg0) != 0) {
        return;
    }
    if (func_80161BE0(arg0) != 0) {
        return;
    }
    if (func_801496D4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149704(arg0);
        return;
    }
    switch (func_801619A4(arg0)) {
    case 0:
    case 1:
    case 2:
    case 6:
        if (func_80149AA8(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149AD4(arg0);
            return;
        }
        if (func_80149B54(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            if (func_8014A738(arg0) != 0) {
                func_8014A830(arg0);
            } else {
                func_80149BAC(arg0);
            }
            return;
        }
        break;
    case 3:
        func_801498E0(arg0);
        break;
    case 4:
        func_80149954(arg0);
        break;
    case 5:
        if (func_80149A64(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (func_80149CD4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015E880(arg0);
        return;
    }
    if (func_801488A8(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015A230(arg0);
        return;
    }
    if (!(AF(arg0, s32, 0x44) & 0x200) && AF(arg0, u16, 0xD4) == 0x8000) {
        if (AF(arg0, s32, 0x234) >= 3) {
            s = &D_800D5F44;
            if (AF(arg0, s32, 0xD0) == (s32)s) {
                StartFaceScript(arg0, &D_800D5F34);
            } else if ((rand() & 0xF) == 0) {
                StartFaceScript(arg0, s);
            }
        } else {
            s = &D_800D5F14;
            if (AF(arg0, s32, 0xD0) == (s32)s) {
                StartFaceScript(arg0, &D_800D5F04);
            } else if ((rand() & 0xF) == 0) {
                StartFaceScript(arg0, s);
            }
        }
    }
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        if (!(AF(arg0, s32, 0x44) & 0x200)) {
            /* MATCH-TRICK: the original calls func_8016F1AC with no argument (a0 not set) */
            if (((s32 (*)())func_8016F1AC)() != 0) {
                AF(arg0, s32, 0x234) = 0;
                AF(arg0, s32, 0x238) = 0;
            }
            switch (AF(arg0, s32, 0x234)) {
            case 0:
                if (AF(arg0, s32, 0x238)++ >= 4) {
                    AF(arg0, s32, 0x238) = 0;
                    AF(arg0, s32, 0x234)++;
                    func_80154150(arg0, 1);
                } else {
                    func_80146DB8(arg0, &D_8018FB0C);
                    func_80154190(arg0, 0);
                }
                break;
            case 1:
                AF(arg0, s32, 0x238) = 0;
                AF(arg0, s32, 0x234)++;
                func_80154150(arg0, 0);
                break;
            case 2:
                if (AF(arg0, s32, 0x238)++ >= 2) {
                    if (AF(arg0, s32, 0x44) & 4) {
                        AF(arg0, s32, 0x234) = 0;
                        AF(arg0, s32, 0x238) = 0;
                        func_80154150(arg0, 0);
                    } else {
                        AF(arg0, s32, 0x238) = 0;
                        AF(arg0, s32, 0x234)++;
                        func_80154150(arg0, 2);
                    }
                } else {
                    func_80154190(arg0, 0);
                }
                break;
            case 3:
                func_80147324(0x445);
                AF(arg0, s32, 0x234)++;
                ClearDisplayFlag10(arg0);
                func_80154150(arg0, 3);
                StartFace(arg0, 0x13);
                break;
            case 4:
                break;
            }
        } else {
            func_80146DB8(arg0, &D_8018FB0C);
            func_80154150(arg0, 5);
            StartFace(arg0, 0x1C);
        }
    }
    if (AF(arg0, s32, 0xB4) == (s32)&D_800D49F4) {
        func_80147A84(arg0);
        func_801473EC(arg0);
        if (!(D_800B99DA & 3)) {
            func_8014C010(arg0, 1);
        }
    }
    if (func_80161208(arg0) == 0) {
        func_801483E8(arg0);
        func_80172590(arg0);
    }
}

void func_8015A1C8(s32 arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

void func_8015A1FC(s32 arg0) {
    func_80147078(arg0, 1);
    func_8015A2D8(arg0);
}

s32 func_8015A230(s32 arg0) {
    func_80147078(arg0, 1);
    func_8015A264(arg0);
}

void func_8015A264(arg0, arg1)
s32 arg0;
s32 arg1;
{
    D_8018FCF8[AF(arg0, u16, 2)]();
}

void func_8015A2A0(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015A2D8(arg0);
    }
}

extern u8 D_8018FB1C;
extern s32 func_80172608();

void func_8015A2D8(s32 arg0) {
    func_80146DB8(arg0, &D_8018FB1C);
    if (AF(arg0, s32, 0x44) & 0x200) {
        func_80154150(arg0, 0xA);
        StartFace(arg0, 0x1C);
        AF(arg0, s32, 0x2C) = 0xFFFC0000;
    } else {
        switch (AF(arg0, u8, 0xA9)) {
        case 0x41:
            func_80154150(arg0, 7);
            StartFace(arg0, 0x21);
            break;
        case 0x53:
        case 0x73:
            func_80154150(arg0, 6);
            StartFace(arg0, 0x21);
            break;
        }
    }
    AF(arg0, s32, 0x23C) = 0;
    func_8014C010(arg0, 2);
    ClearDisplayFlag20(arg0);
    func_80172608(arg0);
    func_80146CA0(arg0);
}

extern u8 D_800D5428;
extern u8 D_8018FB2C;
extern s32 func_80161BE0();
extern s32 func_801619A4();
extern s32 func_800CCCC0();
extern s32 func_8015ABD4();
extern s32 func_8015AC48();
extern s32 func_8015AB7C();
extern s32 func_8015C6E0();
extern s32 func_80161278();

void func_8015A3C8(s32 arg0) {
    u8 *c = &D_80078E78;
    s32 lim;
    s32 acc;
    s32 cap;
    s32 save;

    if (D_800B9A08 == 0x302A) {
        lim = -0xC0000;
        acc = -0x4000;
        cap = 0;
    } else {
        lim = -0xB0000;
        acc = -0x1000;
        cap = 0;
    }
    if (func_80149D9C(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149FA8(arg0);
        return;
    }
    func_80149FB0(arg0);
    if (func_80161B84(arg0) != 0) {
        return;
    }
    if (func_80161B18(arg0) != 0) {
        return;
    }
    if ((AF(arg0, s32, 0xB4) == (s32)&D_800D5428) && (func_8014A048(arg0) != 0)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8014A218(arg0);
        return;
    }
    if (func_80161BE0(arg0) != 0) {
        return;
    }
    switch (func_801619A4(arg0)) {
    case 0:
    case 1:
    case 2:
    case 6:
        if (func_80149AA8(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149AD4(arg0);
            return;
        }
        if (func_80149B54(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149BAC(arg0);
            return;
        }
        break;
    case 3:
        func_801498E0(arg0);
        break;
    case 4:
        func_80149954(arg0);
        break;
    case 5:
        if (func_80149A64(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (func_80149CD4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015E880(arg0);
        return;
    }
    if (func_801496D4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149704(arg0);
        return;
    }
    if (func_801488A8(arg0) == 0) {
        save = AF(arg0, s32, 0x2C);
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8014C010(arg0, 1);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        if (func_8015ABD4(arg0, save, lim) != 0) {
            func_8015AC48(arg0);
        }
        return;
    }
    func_80148AFC(arg0);
    if (AF(arg0, s32, 0x44) & 0x200) {
        if (AF(arg0, s32, 0x23C) == 0) {
            func_80154150(arg0, 0xA);
            StartFace(arg0, 0x1C);
        }
        func_80146DB8(arg0, &D_8018FB2C);
        func_80147AD4(arg0, 0, 0, 0);
    } else {
        switch (AF(arg0, u8, 0xA9)) {
        case 0x41:
            func_80147AD4(arg0, 0, 0, acc);
            if (AF(arg0, s32, 0x23C) == 0) {
                if (func_801487F4(arg0) & 4) {
                    if (AF(arg0, s32, 0x2C) < -0x40000) {
                        AF(arg0, s32, 0x2C) = -0x40000;
                    }
                } else if (func_8016F1C4() == 0) {
                    if ((AF(c, s16, 0x26) < 0x20) || (AF(c, s16, 0x2E) < 0x20)) {
                        if (AF(arg0, s32, 0x2C) < -0x40000) {
                            AF(arg0, s32, 0x2C) = -0x40000;
                        }
                    } else if ((AF(c, s16, 0x26) < 0x40) || (AF(c, s16, 0x2E) < 0x30)) {
                        if (AF(arg0, s32, 0x2C) < -0x80000) {
                            AF(arg0, s32, 0x2C) = -0x80000;
                        }
                    }
                }
                if (AF(arg0, s32, 0x2C) < lim) {
                    AF(arg0, s32, 0x2C) = lim;
                }
                if (AF(arg0, s32, 0x2C) >= cap) {
                    AF(arg0, s32, 0x2C) = cap;
                }
                if (AF(arg0, s32, 0x2C) < -0x94000) {
                    func_80154150(arg0, 8);
                } else if (AF(arg0, s32, 0x2C) < -0x70000) {
                    func_801541D8(arg0, 7, (u16)func_8015AB7C(arg0));
                } else {
                    func_80154150(arg0, 6);
                }
            }
            break;
        case 0x53:
        case 0x73:
            AF(arg0, s32, 0x2C) = (lim * func_80148824(arg0)) / 127;
            if (func_8016F1C4() == 0) {
                if ((AF(c, s16, 0x26) < 0x40) || (AF(c, s16, 0x2E) < 0x30)) {
                    if (AF(arg0, s32, 0x2C) < -0x80000) {
                        AF(arg0, s32, 0x2C) = -0x80000;
                    }
                }
                if ((AF(c, s16, 0x26) < 0x20) || (AF(c, s16, 0x2E) < 0x20)) {
                    if (AF(arg0, s32, 0x2C) < -0x40000) {
                        AF(arg0, s32, 0x2C) = -0x40000;
                    }
                }
            }
            if (AF(arg0, s32, 0x2C) < lim) {
                AF(arg0, s32, 0x2C) = lim;
            }
            if (AF(arg0, s32, 0x2C) >= cap) {
                AF(arg0, s32, 0x2C) = cap;
            }
            func_80147A84(arg0);
            if (AF(arg0, s32, 0x23C) == 0) {
                if (AF(arg0, s32, 0x2C) < -0x94000) {
                    func_80154150(arg0, 8);
                } else if (AF(arg0, s32, 0x2C) < -0x70000) {
                    func_801541D8(arg0, 7, (u16)func_8015AB7C(arg0));
                } else {
                    func_80154150(arg0, 6);
                }
            }
            break;
        }
    }
    func_801473EC(arg0);
    if ((AF(arg0, s32, 0x2C) <= lim) && !(D_800B99DA & 7)) {
        func_8014C010(arg0, 2);
    }
    if (func_8014D738(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015C6E0(arg0);
        return;
    }
    if (func_8014E934(arg0) != 0) {
        ClearDisplayFlag10(arg0);
        func_80154150(arg0, 0x12);
        StartFace(arg0, 0x17);
        AF(arg0, s32, 0x23C) = 1;
    } else {
        if (AF(arg0, s32, 0x23C) != 0) {
            UpdateFlag10Part21(arg0);
            func_80154150(arg0, 6);
            StartFace(arg0, 0x21);
        }
        AF(arg0, s32, 0x23C) = 0;
    }
    if (func_80161278(arg0) == 0) {
        if (AF(arg0, u16, 0xB8) & 0x2000) {
            func_80161C24(arg0, AF(arg0, u16, 0x16E));
        }
        func_80172608(arg0);
        func_801483E8(arg0);
    }
}

s32 func_8015AB7C(s32 arg0) {
    u8 temp_v1;
    u8 var_v0;

    if (AF(arg0, s32, 0xB4) == &D_800D48DC) {
        temp_v1 = AF(arg0, u8, 0xDC);
        var_v0 = 0x10;
        if (temp_v1 >= 6U) {
            if (temp_v1 < 0xBU) {
                return 0x12;
            }
            var_v0 = 9;
            if (temp_v1 < 0x10U) {
                return 7;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return (s32) var_v0;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    var_v0 = AF(arg0, u8, 0xBC);
    return (s32) var_v0;
}

extern s32 D_8011F9C4;

s32 func_8015ABD4(s32 arg0, s32 arg1, s32 arg2) {
    if (func_8016F1AC(arg0) == 0) {
        if (arg2 >= arg1) {
            return 1;
        }
        if (D_8011F9C4 != 0) {
            if (!(func_80029178(0x21) & 0xFF)) {
                return 1;
            }
        }
    }
    return 0;
}

s32 func_8015AC48(s32 arg0) {
    func_80154150(arg0, 9);
    func_80146DB8(arg0, (s32) &D_8018FB3C);
    func_80161CD0(arg0, (s32) AF(arg0, u16, 0x16E));
}

void func_8015AC90(s32 arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

s32 func_8015ACC4(s32 arg0) {
    func_80147078(arg0, 2);
    func_8014ED28(arg0);
    func_8014FA04(arg0);
    func_8015ADB0(arg0);
}

extern void func_8015AD3C();

s32 func_8015AD08(s32 arg0) {
    func_80147078(arg0, 2);
    func_8015AD3C(arg0);
}

void func_8015AD3C(s32 arg0, s32 arg1) {
    D_8018FD00[AF(arg0, u16, 2)]();
}

void func_8015AD78(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015ADB0(arg0);
    }
}

void func_8015ADB0(s32 arg0) {
    if ((u8) AF(arg0, u8, 0xA8) >= 0x19U) {
        AF(arg0, u8, 0xA8) = 0x18U;
    }
    func_80161124(arg0);
    func_801477E8(arg0, -0x120000);
    func_8014C010(arg0, 2);
    D_8011F730 |= 1;
    func_80146CA0(arg0);
}

extern s32 func_801619A4();
extern s32 func_8015B6F4();
extern s32 func_8015B7B4();
extern void func_8015B8F8();
extern s32 func_800CCCC0();
extern s32 func_8015B858();
extern u8 D_800D4BE0;
extern u8 D_800D4E94;
extern u8 D_800D4ED4;
extern u8 D_800D4F8C;
extern s16 D_801152A0;
extern s32 func_80172644();
extern s32 func_800CCB78();
extern s32 func_80161488();
extern s32 func_8015CC40();
extern s32 func_8015CF8C();

void func_8015AE2C(arg0)
    s32 arg0;
{
    s32 var_s1;
    s32 limit;
    s32 flag;
    s32 temp;

    var_s1 = 0;
    if ((func_80161A60(arg0) != 0) && (func_801487F4(arg0) & 0x40) && (AF(arg0, s32, 0x34) >= 0)) {
        var_s1 = 1;
        if (AF(arg0, s32, 0x5C) == 0) {
            AF(arg0, s32, 0x50) = AF(arg0, s32, 0x54) = AF(arg0, s32, 0x58) = 0;
        }
        AF(arg0, s32, 0x5C) = var_s1;
    } else {
        AF(arg0, s32, 0x5C) = 0;
    }
    func_80149FB0(arg0);
    if (AF(arg0, s32, 0x1B0) == 0) {
        switch (func_801619A4(arg0)) {
        case 0:
        case 1:
        case 2:
        case 6:
            if ((AF(arg0, s32, 0xB4) == (s32)&D_800D4BE0) && (func_80149C08(arg0) != 0)) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                func_801577C8(arg0);
                return;
            }
            if ((AF(arg0, s32, 0xB4) != (s32)&D_800D4E94) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4ED4) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4F8C)) {
                if (func_8015B6F4(arg0) == 0) {
                    func_8015B7B4(arg0);
                }
            } else if (AF(arg0, u16, 0xB8) == 0x8000) {
                StartFace(arg0, 0x22);
                func_8015B8F8(arg0);
                AF(arg0, s32, 0x44) &= ~2;
                if (var_s1 != 0) {
                    func_80146994(0x3B, arg0, 0, 0);
                }
            }
            break;
        case 3:
            func_801498E0(arg0);
            break;
        case 4:
            func_80149954(arg0);
            break;
        case 5:
            if (func_80149A64(arg0) != 0) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                func_800CCCC0(arg0);
                return;
            }
            break;
        }
    }
    if (AF(arg0, s32, 0x44) & 2) {
        func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
    } else {
        if ((AF(arg0, s32, 0x240) == 0) && (func_8015B858(arg0) != 0)) {
            AF(arg0, s32, 0x240)++;
        }
        if ((AF(arg0, s32, 0xB4) == (s32)&D_800D4BE0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
            func_8015B8F8(arg0);
        } else if ((AF(arg0, s32, 0xB4) == (s32)&D_800D4A9C) || (AF(arg0, s32, 0xB4) == (s32)&D_800D4B48)) {
            if ((AF(arg0, u16, 0xB8) & 0x8000) && (AF(arg0, s32, 0x34) >= 0)) {
                AF(arg0, u16, 0xB8)++;
            }
        }
    }
    if (AF(arg0, u8, 0x1C6) != 0) {
        if (func_801487F4(arg0) & 0x40) {
            func_80148038(arg0, -0x1A000);
        } else {
            func_80148038(arg0, 0x1A000);
        }
        limit = 0x40000;
        if ((AF(arg0, s32, 0xB4) != (s32)&D_800D4E94) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4ED4) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4F8C)) {
            limit = 0xC0000;
        }
        if (AF(arg0, s32, 0x34) < -limit) {
            AF(arg0, s32, 0x34) = -limit;
        } else if (limit < AF(arg0, s32, 0x34)) {
            AF(arg0, s32, 0x34) = limit;
        }
        func_80147460(arg0);
    } else if (AF(arg0, s32, 0x34) < 0) {
        if (func_801487F4(arg0) & 0x40) {
            func_80147814(arg0, -0x10000);
        }
        func_80147814(arg0, 0x10000);
    }
    if (func_800CF8B4() != 0) {
        temp = func_801491C4(arg0);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (D_801152A0 + temp) & 0xFFF;
    }
    if (var_s1 == 0) {
        if (func_80148AFC(arg0) & 0xFF) {
            D_801152A0 = func_80149184(arg0);
            func_80146E90(arg0, 4);
            if (AF(arg0, s32, 0x2C) > -0x80000) {
                AF(arg0, s32, 0x2C) = -0x80000;
                func_80147A30(arg0, -0x10000, 0xBA000);
            } else {
                func_80147A30(arg0, -0x1000, 0xBA000);
            }
        } else if (func_80146E98(arg0) != 0) {
            func_80146D90(arg0);
        }
        func_80147A84(arg0);
        func_801473EC(arg0);
        if (AF(arg0, u8, 0x1C6) == 0) {
            func_80148038(arg0, 0x1A000);
            func_80147460(arg0);
        }
    } else {
        func_80172644(arg0);
        if (func_80148AFC(arg0) & 0xFF) {
            D_801152A0 = func_80149184(arg0);
            func_80146D90(arg0);
            func_80147AD4(arg0, 0, 0, -0xC000);
            AF(arg0, s32, 0x50) += AF(arg0, s32, 0x10);
            AF(arg0, s32, 0x54) += AF(arg0, s32, 0x14);
            AF(arg0, s32, 0x58) += AF(arg0, s32, 0x18);
            if (AF(arg0, s32, 0x50) > 0xBA000) {
                AF(arg0, s32, 0x50) = 0xBA000;
            } else if (AF(arg0, s32, 0x50) < -0xBA000) {
                AF(arg0, s32, 0x50) = -0xBA000;
            }
            if (AF(arg0, s32, 0x54) > 0xBA000) {
                AF(arg0, s32, 0x54) = 0xBA000;
            } else if (AF(arg0, s32, 0x54) < -0xBA000) {
                AF(arg0, s32, 0x54) = -0xBA000;
            }
            if (AF(arg0, s32, 0x58) > 0xBA000) {
                AF(arg0, s32, 0x58) = 0xBA000;
            } else if (AF(arg0, s32, 0x58) < -0xBA000) {
                AF(arg0, s32, 0x58) = -0xBA000;
            }
            AF(arg0, s32, 0x10) = AF(arg0, s32, 0x50);
            AF(arg0, s32, 0x14) = AF(arg0, s32, 0x54);
            AF(arg0, s32, 0x18) = AF(arg0, s32, 0x58);
            func_801473EC(arg0);
        } else {
            flag = 0;
            if (AF(arg0, s32, 0x50) != 0) {
                flag = 1;
                if (AF(arg0, s32, 0x50) >= 0) {
                    AF(arg0, s32, 0x50) -= 0x8000;
                    if (AF(arg0, s32, 0x50) < 0) {
                        AF(arg0, s32, 0x50) = 0;
                    }
                } else {
                    AF(arg0, s32, 0x50) += 0x8000;
                    if (AF(arg0, s32, 0x50) >= 0) {
                        AF(arg0, s32, 0x50) = 0;
                    }
                }
            }
            if (AF(arg0, s32, 0x54) != 0) {
                flag = 1;
                if (AF(arg0, s32, 0x54) >= 0) {
                    AF(arg0, s32, 0x54) -= 0x8000;
                    if (AF(arg0, s32, 0x54) < 0) {
                        AF(arg0, s32, 0x54) = 0;
                    }
                } else {
                    AF(arg0, s32, 0x54) += 0x8000;
                    if (AF(arg0, s32, 0x54) >= 0) {
                        AF(arg0, s32, 0x54) = 0;
                    }
                }
            }
            if (AF(arg0, s32, 0x58) != 0) {
                flag = 1;
                if (AF(arg0, s32, 0x58) >= 0) {
                    AF(arg0, s32, 0x58) -= 0x8000;
                    if (AF(arg0, s32, 0x58) < 0) {
                        AF(arg0, s32, 0x58) = 0;
                    }
                } else {
                    AF(arg0, s32, 0x58) += 0x8000;
                    if (AF(arg0, s32, 0x58) >= 0) {
                        AF(arg0, s32, 0x58) = 0;
                    }
                }
            }
            if (flag != 0) {
                AF(arg0, s32, 0x10) = AF(arg0, s32, 0x50);
                AF(arg0, s32, 0x14) = AF(arg0, s32, 0x54);
                AF(arg0, s32, 0x18) = AF(arg0, s32, 0x58);
                func_801473EC(arg0);
            }
            if (!(AF(arg0, s32, 0x44) & 2)) {
                func_801541D8(arg0, 0xF, 0x12);
            }
        }
        temp = func_8014C050(arg0, 0x3B);
        if (temp != 0) {
            func_800CCB78(temp);
        }
        if (!(AF(arg0, u16, 0x1C8) & 0x1F)) {
            func_80146994(0x3C, arg0, 0, 0);
        }
    }
    if (AF(arg0, s32, 0x1B0) != 0) {
        if (AF(arg0, s32, 0x1B0) == 1) {
            StartFace(arg0, 0x22);
            func_80154150(arg0, 0xF);
        } else {
            func_80154274(arg0, AF(arg0, s32, 0x1B4));
        }
    }
    var_s1 = func_80161488(arg0);
    if (var_s1 & 5) {
        AF(arg0, s32, 0x44) &= ~2;
        if (AF(arg0, s32, 0xB4) == (s32)&D_800D4A9C) {
            func_80154150(arg0, 0xE);
        } else {
            func_80154150(arg0, 0x10);
        }
        func_80146CA0(arg0);
    }
    if (var_s1 == 0) {
        if ((func_8014A674(arg0) != 0) && (func_8014E434(arg0) != 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_8015CC40(arg0);
            return;
        }
        if ((func_8014A69C(arg0) != 0) && (func_8014E6A0(arg0) != 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_8015CF8C(arg0);
            return;
        }
        func_801725A4(arg0);
    }
}

extern s32 func_80156648();
extern s32 func_80147300();

s32 func_8015B6F4(s32 arg0) {
    if (func_80149AA8(arg0) == 0) {
        return 0;
    }
    func_80156648(arg0);
    AF(arg0, u8, 0x1AA) = 6;
    AF(arg0, s32, 0x44) |= 2;
    AF(arg0, s32, 0x23C) = AF(arg0, s32, 0xB4);
    AF(arg0, u8, 0x244) = AF(arg0, u8, 0xBC);
    if (AF(arg0, s32, 0xB4) == (s32)&D_800D4A9C) {
        func_80154150(arg0, 0xB);
    } else {
        func_80154150(arg0, 0xC);
    }
    StartFace(arg0, 0x22);
    AF(arg0, u8, 0xDA) = 0;
    func_80146994(4, arg0, 5, 0);
    func_80147324(0x400);
    func_80147300(0x5F3);
    return 1;
}

extern u8 D_800D4F8C;

s32 func_8015B7B4(s32 arg0) {
    if (func_80149B54(arg0) != 0) {
        func_80156648(arg0);
        AF(arg0, u8, 0x1AA) = 0xC;
        AF(arg0, s32, 0x44) |= 2;
        AF(arg0, s32, 0x23C) = AF(arg0, s32, 0xB4);
        AF(arg0, u8, 0x244) = AF(arg0, u8, 0xBC);
        func_80154274(arg0, &D_800D4F8C);
        StartFace(arg0, 0x22);
        AF(arg0, u8, 0xDA) = 0;
        func_80146994(5, arg0, 5, 0);
        func_80147324(0x455);
        func_80147300(0x5F3);
        return 1;
    }
    return 0;
}

extern u8 D_800D4BE0;
extern s32 func_8014A51C();

s32 func_8015B858(s32 arg0) {
    if ((AF(arg0, u8, 0x1C6) == 0) && (AF(arg0, s32, 0x240) == 0)) {
        if (func_8014A51C() != 0) {
            AF(arg0, s32, 0x23C) = (s32) AF(arg0, s32, 0xB4);
            AF(arg0, u8, 0x244) = (u8) AF(arg0, u8, 0xBC);
            func_801477E8(arg0, -0xE0000);
            func_80154274(arg0, (s32) &D_800D4BE0);
            D_8011F730 |= 2;
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_8015B8F8(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = AF(arg0, s32, 0x23C);
    if ((temp_a1 == &D_800D4A9C) || (temp_a1 == &D_800D4B48)) {
        func_801542DC(arg0, temp_a1, (s32) AF(arg0, u8, 0x244));
        return;
    }
    func_80154150(arg0, 0xF);
}

void func_8015B950(arg0)
    s32 arg0;
{
    s32 lim = -0xB0000;
    s32 vy;
    s32 r;
    s32 c;
    SV8 a;
    SV8 b;

    if (func_80161B18(arg0) != 0) {
        return;
    }
    switch (func_801619A4(arg0)) {
    case 0:
    case 1:
    case 2:
    case 6:
        if (func_80149AA8(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149AD4(arg0);
            return;
        }
        if (func_80149B54(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149BAC(arg0);
            return;
        }
        break;
    case 3:
        func_801498E0(arg0);
        break;
    case 4:
        func_80149954(arg0);
        break;
    case 5:
        if (func_80149A64(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (func_80149CD4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015E880(arg0);
        return;
    }
    if (func_80149744(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149788(arg0);
        return;
    }
    if (func_801496D4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149704(arg0);
        if ((u8)func_80148AFC(arg0) == 0) {
            func_80146D90(arg0);
        }
        if (AF(arg0, s32, 0x24) | AF(arg0, s32, 0x2C)) {
            func_80154150(arg0, 0xF);
        } else {
            func_801541D8(arg0, 0xD, 6);
        }
        AF(arg0, s32, 0x238) = 1;
        return;
    }
    if (func_801488A8(arg0) != 0) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b.x = AF(arg0, s32, 0x24) >> 16;
        b.y = 0;
        b.z = AF(arg0, s32, 0x2C) >> 16;
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 1);
        func_8015A264(arg0);
        r = -(func_80013294(&a, &b) << 16);
        if (r < AF(arg0, s32, 0x2C)) {
            AF(arg0, s32, 0x2C) = r;
        }
        return;
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    vy = AF(arg0, s32, 0x2C);
    /* MATCH-TRICK: the original calls func_8016F1AC with no argument (a0 not set) */
    if (((s32 (*)())func_8016F1AC)() == 0) {
        if (vy <= lim) {
            c = 1;
        } else if (D_8011F9C4 != 0 && (u8)func_80029178(0x21) == 0) {
            c = 1;
        } else {
            c = 0;
        }
    } else {
        c = 0;
    }
    if (c) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        func_80154150(arg0, 9);
        func_80146DB8(arg0, &D_8018FB3C);
        func_80161CD0(arg0, AF(arg0, u16, 0x16E));
        return;
    }
    if (func_80161208(arg0) == 0) {
        func_801725A4(arg0);
    }
}

void func_8015BD8C(s32 arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
}

s32 func_8015BDD0(s32 arg0) {
    func_80147078(arg0, 3);
    func_8015BE94(arg0);
}

s32 func_8015BE04(s32 arg0) {
    func_80147078(arg0, 3);
    func_8015BE38(arg0);
}

void func_8015BE38(s32 arg0, s32 arg1) {
    D_8018FD1C[AF(arg0, u16, 2)]();
}

void func_8015BE74(s32 arg0, s32 arg1) {
    func_8015BE94(arg0, arg1);
}

void func_8015BE94(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    func_80161124(arg0);
    func_80146CA0(arg0);
}

void func_8015BEC4(void) {
    func_8015AE2C();
}

void func_8015BEE4(void) {
    func_8015B950();
}

void func_8015BF04(s32 arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
}

s32 func_8015BF48(arg0, arg1)
s32 arg0;
s32 arg1;
{
    func_80147078(arg0, 4);
    return func_8015C0C4(arg0);
}

void func_8015BF7C(s32 arg0) {
    func_80147078(arg0, 4);
    func_8015BFF4(arg0);
}

void func_8015BFB0(s32 arg0, s32 arg1) {
    func_80147078(arg0, 4);
    func_8015C030(arg0, arg1);
}

void func_8015BFF4(s32 arg0, s32 arg1) {
    D_8018FD28[AF(arg0, u16, 2)]();
}

void func_8015C030(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x234) = AF(arg1, s16, 0) << 7;
    AF(arg0, s32, 0x238) = 0x80000;
    AF(arg0, s32, 0x23C) = AF(arg1, s16, 4) << 7;
    func_80154150(arg0, 0x11);
    ClearDisplayFlag20(arg0);
    func_80146CA0(arg0);
}

void func_8015C08C(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015C0C4(arg0);
    }
}

s32 func_8015C0C4(s32 arg0) {
    AF(arg0, s32, 0x234) = D_801152B0 << 6;
    AF(arg0, s32, 0x238) = 0x80000;
    AF(arg0, s32, 0x23C) = D_801152B4 << 6;
    func_80154150(arg0, 0x11);
    ClearDisplayFlag20(arg0);
    func_80146CA0(arg0);
}

extern s32 func_8015C6E0();

void func_8015C128(s32 arg0) {
    VECTOR sp10;
    VECTOR sp20;
    s32 temp_s0;
    s32 temp_v0;

    func_80149FB0();
    if (func_80148AFC(arg0) & 0xFF) {
        sp10.vx = 0;
        sp10.vy = 0;
        sp10.vz = -0x4000;
        func_8001382C(AF(AF(arg0, u8 *, 0x20), s16, 0x12), &sp10, &sp20);
        AF(arg0, s32, 0x234) += sp20.vx;
        AF(arg0, s32, 0x238) += sp20.vy;
        AF(arg0, s32, 0x23C) += sp20.vz;
    }
    func_8001382C((s16)-AF(AF(arg0, u8 *, 0x20), s16, 0x12), arg0 + 0x234, &sp20);
    func_80146DB8(arg0, &sp20);
    func_80147A84(arg0);
    func_801473EC(arg0);
    if (!(D_800B99DA & 3)) {
        func_8014C010(arg0, 1);
        func_80147324(0x65F);
    }
    if (((s32 (*)())func_8014D738)(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015C6E0(arg0);
        return;
    }
    temp_s0 = ((s32 (*)())func_8014CC28)(arg0);
    temp_v0 = func_8014F3E8(arg0);
    if (temp_v0 != 0) {
        if ((temp_v0 & 0xFF00) != 0x4000) {
            func_80146E90(arg0, 6);
            func_80146CA0(arg0);
            return;
        }
        if ((temp_v0 & 0x4000) && (func_80146E98(arg0) != 0)) {
            func_80147078(arg0, 4);
            func_8015C0C4(arg0);
        }
    } else if (temp_s0 == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 3);
        func_8015BE94(arg0);
    }
}

extern s32 func_801619A4();
extern s32 func_800CCCC0();

void func_8015C32C(s32 arg0) {
    VECTOR sp10;
    VECTOR sp20;
    s32 temp_s0;
    s32 temp_v0;

    func_80149FB0();
    if (func_801496D4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149704(arg0);
        return;
    }
    switch (func_801619A4(arg0)) {
    case 0:
    case 1:
    case 6:
        if (func_80149AA8(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149AD4(arg0);
            return;
        }
        if (func_80149B54(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149BAC(arg0);
            return;
        }
        break;
    case 3:
        func_801498E0(arg0);
        break;
    case 4:
        func_80149954(arg0);
        break;
    case 5:
        if (func_80149A64(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (func_80148AFC(arg0) & 0xFF) {
        sp10.vx = 0;
        sp10.vy = 0;
        sp10.vz = -0x4000;
        func_8001382C(AF(AF(arg0, u8 *, 0x20), s16, 0x12), &sp10, &sp20);
        AF(arg0, s32, 0x234) += sp20.vx;
        AF(arg0, s32, 0x238) += sp20.vy;
        AF(arg0, s32, 0x23C) += sp20.vz;
    }
    func_8001382C((s16)-AF(AF(arg0, u8 *, 0x20), s16, 0x12), arg0 + 0x234, &sp20);
    func_80146DB8(arg0, &sp20);
    func_80147A84(arg0);
    func_801473EC(arg0);
    if (!(D_800B99DA & 3)) {
        func_8014C010(arg0, 1);
        func_80147324(0x65F);
    }
    if (((s32 (*)())func_8014D738)(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8015C6E0(arg0);
        return;
    }
    temp_s0 = ((s32 (*)())func_8014CC28)(arg0);
    temp_v0 = func_8014F3E8(arg0);
    if (temp_v0 != 0) {
        if (!(temp_v0 & 0x4000)) {
            if (func_80146E98(arg0) != 0) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                func_80147078(arg0, 0);
                func_80159BE4(arg0);
            }
        } else {
            func_80147078(arg0, 4);
            func_8015C0C4(arg0);
        }
    } else if (temp_s0 == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 3);
        func_8015BE94(arg0);
    }
}

void func_8015C6A4(void) {
}

void func_8015C6AC(s32 arg0) {
    func_80147078(arg0, 9);
    func_8015C788(arg0);
}

s32 func_8015C6E0(s32 arg0) {
    func_80147078(arg0, 9);
    func_8015C714(arg0);
}

void func_8015C714(arg0, arg1)
s32 arg0;
s32 arg1;
{
    D_8018FD34[AF(arg0, u16, 2)]();
}

void func_8015C750(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015C788(arg0);
    }
}

void func_8015C788(s32 arg0) {
    func_80154150(arg0, 0x12);
    StartFace(arg0, 0x17);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    func_80146E90(arg0, 0xA);
    func_80146CA0(arg0);
}

extern u8 D_8018FB4C;
extern s32 func_801496D4();
extern s32 func_801488A8();

void func_8015C7E4(s32 arg0) {
    if ((func_80161B18(arg0) == 0) && (func_80161B84(arg0) == 0)) {
        if (func_801496D4(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149704(arg0);
            return;
        }
        if (!(func_801487F4(arg0) & 0x80) && (func_801488A8(arg0) == 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0);
            func_80159B70(arg0);
            return;
        }
        if (func_80161240(arg0) == 0) {
            if (func_80146E98(arg0) != 0) {
                func_80148AAC(arg0);
                func_80146DB8(arg0, (s32) &D_8018FB4C);
                func_80146E90(arg0, 0x14);
                func_80146CA0(arg0);
            }
            if (AF(arg0, u16, 0xB8) & 0x2000) {
                func_80161C24(arg0, (s32) AF(arg0, u16, 0x16E));
                func_8014C010(arg0, 2);
            }
        }
    }
}

void func_8015C944(s32 arg0) {
    func_80149FB0(arg0);
    func_80147AD4(arg0, 0, 0, 0);
    func_801473EC(arg0);
    func_8014D738(arg0);
    if (AF(arg0, s32, 0x170) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    if (func_80161240(arg0) == 0) {
        if (func_80146E98(arg0) != 0) {
            func_80146CA0(arg0);
        }
        if (AF(arg0, u16, 0xB8) & 0x2000) {
            func_80161C24(arg0, (s32) AF(arg0, u16, 0x16E));
        }
    }
}

void func_8015CA28(s32 arg0) {
    func_80149FB0(arg0);
    if ((func_80161B18(arg0) == 0) && (func_80161B84(arg0) == 0)) {
        if (func_801496D4(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149704(arg0);
            return;
        }
        if (!(func_801487F4(arg0) & 0x80) && (func_801488A8(arg0) == 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0);
            func_80159B70(arg0);
        } else {
            if (func_80148AAC(arg0) & 0xFF) {
                func_80147AD4(arg0, 0, 0, 0);
                func_801473EC(arg0);
            }
            if (((s32 (*)())func_8014D738)(arg0) != 0) {
                func_80146DB8(arg0, &D_8018FB4C);
                func_80146E90(arg0, 0x14);
                func_80146C98(arg0, 2);
            }
            if (AF(arg0, s32, 0x170) == 0) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                func_80147078(arg0, 0);
                func_80159B70(arg0);
            } else {
                func_80161240(arg0);
            }
        }
    }
}

void func_8015CB94(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x170) = 0;
    UpdateFlag10Part21(arg0);
    StartFace((s32) arg0, 0x11);
}

void func_8015CBCC(void) {
}

void func_8015CBD4(void) {
}

void func_8015CBDC(void) {
}

void func_8015CBE4(void) {
}

void func_8015CBEC(void) {
}

void func_8015CBF4(void) {
}

void func_8015CBFC(void) {
}

void func_8015CC04(void) {
}

void func_8015CC0C(s32 arg0) {
    func_80147078(arg0, 0xB);
    func_8015CCD0(arg0);
}

s32 func_8015CC40(s32 arg0) {
    func_80147078(arg0, 0xB);
    func_8015CC74(arg0);
}

void func_8015CC74(s32 arg0, s32 arg1) {
    D_8018FD44[AF(arg0, u16, 2)]();
}

void func_8015CCB0(s32 arg0, s32 arg1) {
    func_8015CCD0(arg0, arg1);
}

extern s32 func_801725E0();

void func_8015CCD0(s32 arg0) {
    func_80154150(arg0, 0x14);
    AF(arg0, s16, 0xB8) = 0;
    func_801725E0(arg0);
    AF(arg0, s32, 0x234) = 0xF;
    func_80147324(0x6A7);
    func_80146CA0(arg0);
}

extern u8 D_8018FB5C;
extern u8 D_8018FD4C;
extern u8 D_8018FD5C;
extern s32 func_8014E434();

void func_8015CD20(s32 arg0) {
    func_80149FB0(arg0);
    if (func_801496D4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        AF(arg0, u8, 0x1BC) = 0xA;
        func_80149724(arg0);
        if (func_80148AFC(arg0) & 0xFF) {
            func_80146DB8(arg0, (s32) &D_8018FB5C);
        } else {
            func_80146D90(arg0);
        }
        return;
    }
    if (AF(arg0, s32, 0x234) == 0) {
        if (func_80148980(arg0) != 0) {
            func_80146DB8(arg0, (s32) &D_8018FD4C);
            func_80147A84(arg0);
            func_801473EC(arg0);
            func_80154150(arg0, 0x15);
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) - 0xAA) & 0xFFF;
        } else {
            if (func_8014891C(arg0) != 0) {
                func_80146DB8(arg0, (s32) &D_8018FD5C);
                func_80147A84(arg0);
                func_801473EC(arg0);
                func_80154150(arg0, 0x14);
                AF(arg0, s16, 0xB8) = 1;
            }
            if (func_801489E8(arg0) != 0) {
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + 0x71) & 0xFFF;
            } else if (func_80148A48(arg0) != 0) {
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) - 0x71) & 0xFFF;
            }
        }
    } else {
        AF(arg0, s32, 0x234)--;
    }
    func_8014FA04(arg0);
    if (func_8014E434(arg0) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
    } else {
        func_801725E0(arg0);
    }
}

void func_8015CF24(s32 arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

void func_8015CF58(s32 arg0) {
    func_80147078(arg0, 0xC);
    func_8015D01C(arg0);
}

s32 func_8015CF8C(s32 arg0) {
    func_80147078(arg0, 0xC);
    func_8015CFC0(arg0);
}

void func_8015CFC0(s32 arg0, s32 arg1) {
    D_8018FD7C[AF(arg0, u16, 2)]();
}

void func_8015CFFC(s32 arg0, s32 arg1) {
    func_8015D01C(arg0, arg1);
}

extern u8 D_800D550C;
extern u8 D_8018FD6C;

void func_8015D01C(s32 arg0) {
    s16 cur;
    u16 a;
    s16 b;

    func_80154274(arg0, &D_800D550C);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
    cur = AF(AF(arg0, u8 *, 0x20), s16, 0x12);
    a = AF(AF(AF(arg0, u8 *, 0x180), u8 *, 0x20), u16, 0x12);
    b = (a + 0x800) & 0xFFF;
    if ((s16)func_80012A60(cur, (s16)a) < (s16)func_80012A60(cur, b)) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = b;
    }
    AF(arg0, s32, 0x38) = (s32)&D_8018FD6C | 0x40000000;
    func_801725F4(arg0);
    func_80146CA0(arg0);
}

void func_8015D104(s32 arg0) {
    func_80149FB0(arg0);
    func_8014FA04(arg0);
    if (func_8014E6A0(arg0) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    func_801725F4(arg0);
    AF(arg0, s32, 0x234) = 0xFF1D0000;
    AF(AF(arg0, void *, 0x20), u16, 0x10) = 0x600U;
    AF(arg0, u16, 0x244) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
    func_80146CA0(arg0);
}

void func_8015D1B8(u8 *a) {
    s16 r;
    s16 d;
    s16 old;
    s16 v;
    s16 k;
    u8 unused[8];

    func_80149FB0(a);
    r = AF(AF(a, u8 *, 0x20), u16, 0x10) + AF(a, u16, 0x236);
    AF(AF(a, u8 *, 0x20), u16, 0x10) = r & 0xFFF;
    old = AF(a, s16, 0x244);
    d = AF(AF(a, u8 *, 0x20), s16, 0x10);
    if (d - old >= 0) {
        v = d - old;
    } else {
        v = old - d;
    }
    if (v > 0x800) {
        func_80147324(0x5E9);
    }
    AF(a, s16, 0x244) = AF(AF(a, u8 *, 0x20), s16, 0x10);
    if (func_80148800((s32)a) & 0x40) {
        D_8018FBA8[AF(a, u16, 0)](a);
        func_80149724((s32)a);
        func_80154274(a, &D_800D4C14);
        func_80146E90(a, 0x10);
        k = (r & 0xFFF) / 512;
        D_8018FDC8.f = D_8018FD88[k].a;
        func_80146DB8(a, &D_8018FDC8);
        func_801477E8(a, D_8018FD8C[k * 2]);
        func_80147324(0x5EA);
    } else {
        func_8014FA04(a);
        if (func_8014E6A0(a) == 0) {
            D_8018FBA8[AF(a, u16, 0)](a);
            func_80147078(a, 0);
            func_80159B70(a);
        } else {
            func_8015D380(a);
            func_801725F4((s32)a);
        }
    }
}

extern SVECTOR D_8018FDD8;

void func_8015D380(s32 arg0) {
    SVECTOR v;
    MATRIX m;

    func_80013F3C(&m);
    func_80012558(&m, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
    func_800126C4(&m, AF(AF(arg0, u8 *, 0x20), s16, 0x10));
    ApplyMatrixSV(&m, &D_8018FDD8, &v);
    AF(arg0, SVECTOR, 0x138) = v;
}

void func_8015D414(u8 *arg0, s32 arg1) {
    AF(arg0, u8, 0x1BD) = 8;
    AF(arg0, s32 *, 0x38) = &D_8018EEBC;
    AF(arg0, s16, 0x138) = 0;
    AF(arg0, s16, 0x13A) = 0;
    AF(arg0, s16, 0x13C) = 0;
    AF(arg0, s16, 0x13E) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x48);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    UpdateFlag10Part21(arg0);
    StartFace((s32) arg0, 0x11);
}

void func_8015D480(s32 arg0) {
    func_80147078(arg0, 0xD);
    func_8015D57C(arg0);
}

extern void func_8015D4E8();

s32 func_8015D4B4(s32 arg0) {
    func_80147078(arg0, 0xD);
    func_8015D4E8(arg0);
}

void func_8015D4E8(s32 arg0, s32 arg1) {
    D_8018FDE0[AF(arg0, u16, 2)]();
}

void func_8015D524(s32 arg0) {
    StartFace(arg0, 0x11);
}

void func_8015D544(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015D57C(arg0);
    }
}

void func_8015D57C(s32 arg0, s32 arg1) {
    void *temp_a0;

    func_80154150(arg0, 0x19);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    func_80146CA0(arg0);
    temp_a0 = AF(arg0, void *, 0x178);
    AF(arg0, s32, 0x234) = 0;
    if ((temp_a0 != NULL) && (AF(temp_a0, u16, 0) == 0x1F8)) {
        AF(temp_a0, s16, 0xFC) = 1;
        func_801746DC();
    }
}

void func_8015D5E8(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a2;

    if ((func_80161B18(arg0) == 0) && (func_80161B84(arg0) == 0)) {
        if (AF(arg0, u16, 0xB8) & 0x4000) {
            StartFace(arg0, 0x17);
        }
        if (func_80161208(arg0) == 0) {
            if (AF(arg0, u16, 0xB8) == 0x8000) {
                AF(arg0, s32, 0x234) = (s32) (AF(arg0, s32, 0x234) - 3);
                func_80154150(arg0, 0x1A);
                func_80146CA0(arg0);
                return;
            }
            temp_a2 = AF(arg0, void *, 0x178);
            if (temp_a2 != NULL) {
                temp_v1 = AF(arg0, s32, 0x234);
                AF(arg0, s32, 0x234) = (s32) (temp_v1 + 1);
                AF(temp_a2, s16, 6) = (s16) (D_8018FDEC[temp_v1] + AF(AF(temp_a2, void *, 0x78), u16, 0xC));
                temp_v1_2 = AF(arg0, s32, 0x234);
                AF(arg0, s32, 0x234) = (s32) (temp_v1_2 + 1);
                AF(temp_a2, s16, 0xA) = (s16) (D_8018FDEC[temp_v1_2] + AF(AF(temp_a2, void *, 0x78), u16, 0xE));
                temp_v1_3 = AF(arg0, s32, 0x234);
                AF(arg0, s32, 0x234) = (s32) (temp_v1_3 + 1);
                AF(temp_a2, s16, 0xE) = (s16) (D_8018FDEC[temp_v1_3] + AF(AF(temp_a2, void *, 0x78), u16, 0x10));
                func_80149374(arg0, temp_a2 + 4);
            }
        }
    }
}

extern u8 D_8018FB6C;
extern u8 D_8018FB7C;
extern s8 D_8018FDED[];
extern s8 D_8018FDEE[];
extern void func_800CAF14();
extern s32 func_80165624();
extern s32 func_8015DA5C();
extern void func_8015F948();
void func_8015D738(s32 arg0) {
    u8 *c = &D_80078E78;
    u8 *temp_s1;
    s32 f;
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x30 with 16 unused bytes */

    func_80148AFC(arg0);
    if ((func_80161B18(arg0) == 0) && (func_80161B84(arg0) == 0)) {
        temp_s1 = AF(arg0, u8 *, 0x178);
        if ((temp_s1 != NULL) && (AF(temp_s1, u16, 0) == 0x360)) {
            goto block_8;
        }
        f = 0; /* MATCH-TRICK: dead store keeps thread_jumps off the second NULL test */
        if ((temp_s1 == NULL) || (AF(temp_s1, u16, 0) == 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0);
            func_80159B70(arg0);
            return;
        }
        f = func_80148800(arg0);
        if (f & 0x80) {
block_8:
            StartFace(arg0, 0x11);
            func_8015DAC4(arg0);
            return;
        }
        if ((func_80148800(arg0) & 0x10) && (func_8014BEF8((u8 *)arg0) != 0)) {
            StartFace(arg0, 0x11);
            func_8015DE24(arg0);
            return;
        }
        if ((func_80148800(arg0) & 0x20) && (c[0x49] == 0xA)) {
            if (func_80165624(arg0) != 0) {
                func_8015DA5C(arg0);
                func_8015F948(arg0);
                return;
            }
            StartFace(arg0, 0x11);
            func_800CAF14(arg0);
            return;
        }
        if ((func_801488A8(arg0) != 0) && (AF(AF(arg0, u8 *, 0x178), u16, 0) != 0x82)) {
            func_80154150(arg0, 0x1B);
            func_80146DB8(arg0, &D_8018FB6C);
        } else {
            func_80154150(arg0, 0x1A);
            func_80146DB8(arg0, &D_8018FB7C);
        }
        func_80147A84(arg0);
        func_801473EC(arg0);
        temp_s1 = AF(arg0, u8 *, 0x178);
        AF(temp_s1, s16, 6) = D_8018FDEC[AF(arg0, s32, 0x234)] + AF(AF(temp_s1, u8 *, 0x78), u16, 0xC);
        AF(temp_s1, s16, 0xA) = D_8018FDED[AF(arg0, s32, 0x234)] + AF(AF(temp_s1, u8 *, 0x78), u16, 0xE);
        AF(temp_s1, s16, 0xE) = D_8018FDEE[AF(arg0, s32, 0x234)] + AF(AF(temp_s1, u8 *, 0x78), u16, 0x10);
        func_80149374(arg0, temp_s1 + 4);
        AF(AF(temp_s1, u8 *, 0x20), s16, 0x12) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + 0x800) & 0xFFF;
        if (func_8014D738(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 9);
            func_8015C714(arg0);
            return;
        }
        if (func_80161208(arg0) == 0) {
            func_801483E8(arg0);
        }
    }
}

s32 func_8015DA5C(s32 arg0) {
    StartFace(arg0, 0x11);
    return func_8015E0D4(arg0);
}

void func_8015DA90(s32 arg0) {
    func_80147078(arg0, 0xE);
    func_8015DB6C(arg0);
}

s32 func_8015DAC4(s32 arg0, s32 arg1) {
    func_80147078(arg0, 0xE);
    func_8015DAF8(arg0);
}

void func_8015DAF8(s32 arg0, s32 arg1) {
    D_8018FE20[AF(arg0, u16, 2)]();
}

void func_8015DB34(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015DB6C(arg0);
    }
}

void func_8015DB6C(s32 arg0) {
    func_80154150(arg0, 0x1C);
    StartFace(arg0, 0x19);
    AF(arg0, s32, 0x234) = 0;
    func_8015DCB8(arg0);
    func_80147300(0x5F5);
    ClearDisplayFlag20(arg0);
    func_8014BD60(arg0, 4);
    func_80146CA0(arg0);
}

void func_8015DBD4(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        func_8015DD74((s32) arg0, arg1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078((s32) arg0, 0);
        func_80159B70((s32) arg0);
        return;
    }
    if (AF(arg0, s32, 0x178) != 0) {
        func_8015DCB8((s32) arg0);
    }
    func_80161208((s32) arg0);
}

void func_8015DC84(s32 arg0) {
    StartFace(arg0, 0x11);
    func_8015DD74(arg0);
}

void func_8015DCB8(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a1;

    temp_v1 = AF(arg0, s32, 0x234);
    temp_a1 = AF(arg0, void *, 0x178);
    AF(arg0, s32, 0x234) = (s32) (temp_v1 + 1);
    AF(temp_a1, s16, 6) = (s16) (D_8018FE28[temp_v1] + AF(AF(temp_a1, void *, 0x78), u16, 0xC));
    temp_v1_2 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_2 + 1);
    AF(temp_a1, s16, 0xA) = (s16) (D_8018FE28[temp_v1_2] + AF(AF(temp_a1, void *, 0x78), u16, 0xE));
    temp_v1_3 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_3 + 1);
    AF(temp_a1, s16, 0xE) = (s16) (D_8018FE28[temp_v1_3] + AF(AF(temp_a1, void *, 0x78), u16, 0x10));
    func_80149374(arg0, (s32) (temp_a1 + 4));
}

extern s32 func_80029AAC();

void func_8015DD74(s32 arg0) {
    SVECTOR v;
    s32 o;

    o = AF(arg0, s32, 0x178);
    if (o != 0) {
        func_8014C1A0(arg0, o);
        func_80015978(o + 4, &v);
        v.pad = 0;
        func_8014C4AC(o, 9, func_80029AAC(), &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
        AF(arg0, s32, 0x178) = 0;
    }
}

void func_8015DDF0(s32 arg0) {
    func_80147078(arg0, 0xF);
    func_8015DECC(arg0);
}

s32 func_8015DE24(s32 arg0, s32 arg1) {
    func_80147078(arg0, 0xF);
    func_8015DE58(arg0);
}

void func_8015DE58(s32 arg0, s32 arg1) {
    D_8018FE40[AF(arg0, u16, 2)]();
}

void func_8015DE94(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015DECC(arg0);
    }
}

extern s32 func_80147300();

void func_8015DECC(s32 arg0) {
    func_80154150(arg0, 0x1C);
    StartFace(arg0, 0x19);
    AF(arg0, s32, 0x234) = 0;
    func_8015E018(arg0);
    func_80147300(0x5F5);
    ClearDisplayFlag20(arg0);
    func_8014BD60(arg0, 4);
    func_80146CA0(arg0);
}

void func_8015DF34(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        func_8015E0D4((s32) arg0, arg1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078((s32) arg0, 0);
        func_80159B70((s32) arg0);
        return;
    }
    if (AF(arg0, s32, 0x178) != 0) {
        func_8015E018((s32) arg0);
    }
    func_80161208((s32) arg0);
}

void func_8015DFE4(s32 arg0) {
    StartFace(arg0, 0x11);
    func_8015E0D4(arg0);
}

void func_8015E018(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a1;

    temp_v1 = AF(arg0, s32, 0x234);
    temp_a1 = AF(arg0, void *, 0x178);
    AF(arg0, s32, 0x234) = (s32) (temp_v1 + 1);
    AF(temp_a1, s16, 6) = (s16) (D_8018FE28[temp_v1] + AF(AF(temp_a1, void *, 0x78), u16, 0xC));
    temp_v1_2 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_2 + 1);
    AF(temp_a1, s16, 0xA) = (s16) (D_8018FE28[temp_v1_2] + AF(AF(temp_a1, void *, 0x78), u16, 0xE));
    temp_v1_3 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_3 + 1);
    AF(temp_a1, s16, 0xE) = (s16) (D_8018FE28[temp_v1_3] + AF(AF(temp_a1, void *, 0x78), u16, 0x10));
    func_80149374(arg0, (s32) (temp_a1 + 4));
}

extern s32 func_80029AAC();

s32 func_8015E0D4(s32 arg0) {
    SVECTOR v;
    s32 o;

    o = AF(arg0, s32, 0x178);
    if (o != 0) {
        func_8014C1A0(arg0, o);
        func_80015978(o + 4, &v);
        v.pad = 0;
        func_8014C4AC(o, 0x11, func_80029AAC(), &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
        AF(arg0, s32, 0x178) = 0;
    }
}

void func_8015E150(s32 arg0) {
    func_80147078(arg0, 0x10);
    func_8015E22C(arg0);
}

extern void func_8015E1B8();

s32 func_8015E184(s32 arg0) {
    func_80147078(arg0, 0x10);
    func_8015E1B8(arg0);
}

void func_8015E1B8(s32 arg0, s32 arg1) {
    D_8018FE60[AF(arg0, u16, 2)]();
}

void func_8015E1F4(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015E22C(arg0);
    }
}

extern u8 D_800D4FF4;

void func_8015E22C(s32 arg0) {
    func_80154274(arg0, &D_800D4FF4);
    AF(arg0, s32, 0x234) = 0;
    func_80146994(5, arg0, 0xA, 0);
    AF(arg0, s32, 0x44) |= 2;
    func_80146CA0(arg0);
}

extern u8 D_800D5060;
extern u8 D_800D5098;
s32 func_8015E588(s32 arg0);
extern void func_8015E4B0();

void func_8015E288(s32 arg0) {
    if (func_80161208(arg0) == 0) {
        if (func_8014A850(arg0) != 0) {
            func_80154274(arg0, (s32) &D_800D5098);
            func_8015E40C(arg0);
            func_8015E588(arg0);
            func_8015E4B0(arg0);
            func_80146994(5, arg0, 0xB, 0);
            func_80146CA0(arg0);
            return;
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            func_80154274(arg0, (s32) &D_800D5060);
            func_80146C98(arg0, 3);
        }
    }
}

void func_8015E344(s32 arg0) {
    func_8015E40C(arg0);
    if ((func_80161B18(arg0) == 0) && (func_80161B84(arg0) == 0) && (func_80161208(arg0) == 0)) {
        if (AF(arg0, u16, 0xB8) & 0x4000) {
            func_8015E5B0(arg0);
            AF(arg0, s32, 0x234) = 1;
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0);
            func_80159BE4(arg0);
        }
    }
}

void func_8015E40C(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    u8 *t;

    t = AF(arg0, u8 *, 0x18C);
    if (t != NULL && AF(t, u16, 0) != 0) {
        func_80148534((s32) &a, (s32) &b);
        AF(t, s16, 6) = b.vx + AF(AF(t, u8 *, 0x78), u16, 0xC);
        AF(t, s16, 0xA) = b.vy + AF(AF(t, u8 *, 0x78), u16, 0xE);
        AF(t, s16, 0xE) = b.vz + AF(AF(t, u8 *, 0x78), u16, 0x10);
        func_80149374(arg0, (s32) (t + 4));
    }
}

extern SVECTOR D_8018FE70;
extern u8 D_8018FE78;

void func_8015E4B0(s32 arg0) {
    SVECTOR v;
    s32 d;
    u8 *p;

    p = AF(arg0, u8 *, 0x18C);
    if (p != NULL && AF(p, u16, 0) != 0) {
        v.vx = D_8018FE70.vx + AF(AF(p, u8 *, 0x78), u16, 0xC);
        v.vy = D_8018FE70.vy + AF(AF(p, u8 *, 0x78), s16, 0xE) * 2;
        v.vz = D_8018FE70.vz + AF(AF(p, u8 *, 0x78), u16, 0x10);
        func_80149350(arg0, (s32)&v, (s32)&v);
        func_80013E94(&D_8018FE78, &d);
        func_80146A6C(0x1F, (StageActor *)arg0, v.vx, v.vy, v.vz, d, 0);
    }
}

s32 func_8015E588(s32 arg0) {
    return func_8013C9C4((s32) &D_8018FE80);
}

void func_8015E5B0(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    u8 *p;

    p = AF(arg0, u8 *, 0x18C);
    if (p != NULL) {
        a.vx = AF(arg0, u16, 6);
        a.vy = AF(arg0, u16, 0xA) - 0x14;
        a.vz = AF(arg0, u16, 0xE);
        b.vx = AF(p, u16, 6);
        b.vy = AF(p, u16, 0xA);
        b.vz = AF(p, u16, 0xE);
        if (func_80133784(0, &a, &b) != 0) {
            AF(p, u16, 6) = b.vx;
            AF(p, u16, 0xA) = b.vy;
            AF(p, u16, 0xE) = b.vz;
        }
        func_80015978(p + 4, &a);
        a.pad = 0;
        func_8014C4AC(p, 0x1C, 0, &a, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
        AF(arg0, u8 *, 0x18C) = NULL;
    }
}

void func_8015E698(s32 arg0) {
    if ((func_80161208(arg0) == 0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159BE4(arg0);
    }
}

void func_8015E714(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 p;

    if (AF(arg0, s32, 0x234) == 0) {
        p = AF(arg0, s32, 0x18C);
        if (p != 0) {
            a.vx = AF(arg0, s16, 6);
            a.vy = AF(arg0, s16, 0xA) - 0x14;
            a.vz = AF(arg0, s16, 0xE);
            b.vx = AF(p, s16, 6);
            b.vy = AF(p, s16, 0xA);
            b.vz = AF(p, s16, 0xE);
            if (func_80133784(0, &a, &b) != 0) {
                AF(p, s16, 6) = b.vx;
                AF(p, s16, 0xA) = b.vy;
                AF(p, s16, 0xE) = b.vz;
            }
            func_80015978(p + 4, &a);
            a.pad = 0;
            func_8014C4AC(p, 0x1C, 0, &a, AF(AF(arg0, s32, 0x20), s16, 0x12));
            AF(arg0, s32, 0x18C) = 0;
        }
    }
    UpdateFlag10Part21(arg0);
    ClearDisplayFlag10(arg0);
    AF(arg0, s32, 0x44) &= ~2;
    StartFace(arg0, 0x11);
    AF(arg0, s32, 0x44) &= ~2;
}

void func_8015E84C(s32 arg0) {
    func_80147078(arg0, 0x11);
    func_8015E95C(arg0);
}

s32 func_8015E880(s32 arg0) {
    func_80147078(arg0, 0x11);
    func_8015E8E8(arg0);
}

void func_8015E8B4(s32 arg0) {
    func_80147078(arg0, 0x11);
    func_8015E9B8(arg0);
}

void func_8015E8E8(s32 arg0, s32 arg1) {
    D_8018FE94[AF(arg0, u16, 2)]();
}

void func_8015E924(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015E95C(arg0);
    }
}

void func_8015E95C(s32 arg0, s32 arg1) {
    if (!(D_80078EC0 & 0x80)) {
        func_80146A6C(0x14, arg0, 0, 0, 0, 0, 0);
    }
    func_8015E9B8(arg0);
}

extern s16 D_801152A0;
extern void func_80160818();
extern s32 func_80149034();

void func_8015E9B8(s32 arg0) {
    if (D_80078EC0 & 0x80) {
        func_80160818(arg0);
        return;
    }
    func_80154150(arg0, 0x1D);
    AF(arg0, s32, 0x44) |= 1;
    func_80149034(arg0);
    ClearDisplayFlag20(arg0);
    D_801152A0 = func_80149184(arg0);
    func_80146CA0(arg0);
}

extern void func_80175150();

void func_8015EA3C(s32 arg0) {
    s32 sp10[4];
    s32 sp20[4];
    s32 temp;
    s32 d;

    if (!(func_801487F4(arg0) & 8)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    switch (func_80149D10(arg0)) {
    case 0:
        break;
    case 1:
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80175150(arg0);
        return;
    case 2:
        func_8016EE40(AF(arg0, s32, 0x21C), 0x01000000);
        return;
    }
    if (func_80149744(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149788(arg0);
        return;
    }
    if (func_80161B84(arg0) != 0) {
        return;
    }
    if (func_8014A4B4(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_8014A4FC(arg0);
        return;
    }
    if (func_80149AA8(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149AD4(arg0);
        return;
    }
    if (func_80149B54(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149BAC(arg0);
        return;
    }
    if (func_800CF8B4() != 0) {
        /* PORT NOTE: the original passes arg0 to func_801491C4, which the file defines (void) */
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) = ((u16)D_801152A0 + ((s32 (*)())func_801491C4)(arg0)) & 0xFFF;
    }
    temp = func_80148E54(arg0);
    if ((s16)temp >= 0) {
        d = (s16)(temp - AF(AF(arg0, u8 *, 0x20), u16, 0x12));
        sp10[0] = 0;
        sp10[1] = 0;
        sp10[2] = 0xFFFC0000;
        func_8001382C(d, sp10, sp20);
        func_80146DB8(arg0, sp20);
        func_80147A84(arg0);
        func_801473EC(arg0);
        func_80154150(arg0, 0x1E);
    } else {
        func_80154150(arg0, 0x1D);
    }
    if (((s32 (*)())func_8014D738)(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 9);
        func_8015C714(arg0);
        return;
    }
    if (func_80161208(arg0) == 0) {
        func_801483E8(arg0);
    }
}

void func_8015ED6C(u8 *arg0, s32 arg1) {
    D_80078EBF = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~1);
    func_80149048((s32) arg0, arg1);
}

void func_8015EDA0(s32 arg0) {
    func_80147078(arg0, 0x12);
    func_8015EE7C(arg0);
}

extern void func_8015EE08();

s32 func_8015EDD4(s32 arg0) {
    func_80147078(arg0, 0x12);
    func_8015EE08(arg0);
}

void func_8015EE08(s32 arg0, s32 arg1) {
    D_8018FE9C[AF(arg0, u16, 2)]();
}

void func_8015EE44(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015EE7C(arg0);
    }
}

extern u8 D_800D4C48;
extern u8 D_8018FB8C;

void func_8015EE7C(s32 arg0, s32 arg1) {
    func_8014CBF8(arg0, arg1);
    func_801474EC(arg0);
    func_80154274(arg0, &D_800D4C48);
    func_80146DB8(arg0, &D_8018FB8C);
    func_801477E8(arg0, -0xC0000);
    func_80146CA0(arg0);
}

void func_8015EEE0(s32 arg0) {
    func_80148038(arg0, 0x10000);
    func_80147460(arg0);
    func_80147AD4(arg0, 0, 0, 0x1000);
    func_801473EC(arg0);
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    if (func_80161418(arg0) == 0) {
        func_801725A4(arg0);
    }
}

void func_8015EF9C(void) {
}

void func_8015EFA4(s32 arg0) {
    func_80147078(arg0, 0x13);
    func_8015F080(arg0);
}

void func_8015EFD8(s32 arg0) {
    func_80147078(arg0, 0x13);
    func_8015F00C(arg0);
}

void func_8015F00C(arg0, arg1)
s32 arg0;
s32 arg1;
{
    D_8018FEA4[AF(arg0, u16, 2)]();
}

void func_8015F048(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015F080(arg0);
    }
}

void func_8015F080(s32 arg0) {
    func_80154150(arg0, 0x17);
    StartFace(arg0, 0x15);
    func_80146994(5, arg0, 7, 0);
    AF(arg0, s32, 0x238) = -1;
    AF(arg0, s32, 0x234) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~1);
    func_80149048(arg0);
    func_80156648(arg0);
    AF(arg0, u8, 0x1AA) = 8;
    func_80149020(arg0);
    AF(arg0, s16, 0xF6) = 0x19EB;
    func_80146CA0(arg0);
}

void func_8015F118(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078((s32) arg0, 0);
        func_80159B70((s32) arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        func_8014AB5C(0x19);
        func_8014AB5C(0x1D);
        func_801466F0(0x19, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
        func_801466F0(0x19, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0, /* extra? */ 1);
        func_801466F0(0x1D, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
        StartRumbleScript((s32) &D_80062BE8);
        func_80147324(0x9DA);
    }
    if (func_80161208((s32) arg0) == 0) {
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

void func_8015F260(s32 arg0) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
    AF(arg0, s32, 0x44) &= ~2;
    AF(arg0, s32, 0x44) &= ~1;
    func_80149048(arg0);
    AF(arg0, s16, 0xF6) = 0x1000;
}

void func_8015F2BC(s32 arg0) {
    func_80147078(arg0, 0x14);
    func_8015F380(arg0);
}

s32 func_8015F2F0(s32 arg0) {
    func_80147078(arg0, 0x14);
    func_8015F324(arg0);
}

void func_8015F324(s32 arg0, s32 arg1) {
    D_8018FEAC[AF(arg0, u16, 2)]();
}

void func_8015F360(s32 arg0, s32 arg1) {
    func_8015F380(arg0, arg1);
}

extern s32 func_801725B8();

void func_8015F380(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    func_80154150(arg0, 0x18);
    AF(arg0, u8, 0x244) = 0;
    AF(arg0, u8, 0x245) = 0;
    func_80146E90(arg0, 0);
    func_80148534((s32) &a, (s32) &b);
    func_80146A6C(0x25, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA) - 0x14, AF(arg0, s16, 0xE), 0, 0);
    func_80146A6C(0x25, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA) - 0x14, AF(arg0, s16, 0xE), 1, 0);
    func_80147324(0x56D);
    func_801725B8(arg0);
    func_80146CA0(arg0);
}

extern u8 D_80062BD0;
extern u8 D_8018FEB4;
extern u8 D_8018FEC4;
extern u8 D_8018FED4;

void func_8015F448(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 var_a0;
    u16 temp_v1;
    u16 temp_a1;

    if (((AF(arg0, s32, 0x44) & 0x100) && (func_80149884((s32) arg0) != 0)) || (func_801496D4((s32) arg0) != 0)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        AF(arg0, u8, 0x1BE) = 0xA;
        func_80149724((s32) arg0);
        func_801477E8(arg0, 0);
        return;
    }
    if (AF(arg0, u8, 0x245) == 0) {
        if (AF(arg0, u8, 0x244) == 0) {
            if (func_80148800((s32) arg0) & 0x10) {
                AF(arg0, u8, 0x244) = 1;
                AF(arg0, u8, 0x245) = 1;
            }
        } else if (func_80148800((s32) arg0) & 0x80) {
            AF(arg0, u8, 0x244) = 0;
            AF(arg0, u8, 0x245) = 1;
        }
    }
    temp_v1 = AF(arg0, u16, 0xB8);
    if (temp_v1 & 0x3000) {
        if (temp_v1 & 0x2000) {
            func_801484B0((s32) &a, (s32) &b);
            var_a0 = 0x56D;
        } else {
            func_80148534((s32) &a, (s32) &b);
            var_a0 = 0x56E;
        }
        func_80147324(var_a0);
        StartRumbleScript(&D_80062BD0);
        func_80146A6C(0x25, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA) - 0x14, AF(arg0, s16, 0xE), 0, 0);
        func_80146A6C(0x25, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA) - 0x14, AF(arg0, s16, 0xE), 1, 0);
    }
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        if (AF(arg0, u8, 0x245) != 0) {
            AF(arg0, u8, 0x245) = 0;
            AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
            if (func_80148980(arg0) != 0) {
                func_80146DB8(arg0, &D_8018FEB4);
            } else {
                func_80146DB8(arg0, &D_8018FEC4);
            }
        }
    } else {
        AF(arg0, s16, 0x246) = AF(arg0, s16, 6);
        AF(arg0, s16, 0x248) = AF(arg0, s16, 0xA);
        AF(arg0, s16, 0x24A) = AF(arg0, s16, 0xE);
        func_80147A84(arg0);
        func_801473EC(arg0);
        if (((s32 (*)())func_8014F1F4)(arg0) != 0) {
            AF(arg0, s16, 6) = AF(arg0, s16, 0x246);
            AF(arg0, s16, 0xA) = AF(arg0, s16, 0x248);
            AF(arg0, s16, 0xE) = AF(arg0, s16, 0x24A);
        }
    }
    if (((s32 (*)())func_8014FCFC)(arg0) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        AF(arg0, u8, 0x1BE) = 0xA;
        func_80149724((s32) arg0);
        func_801477E8(arg0, -0x180000);
        func_80146DB8(arg0, &D_8018FED4);
        func_80146E90(arg0, 0x10);
        return;
    }
    func_8014ED28(arg0);
    func_8014FA04(arg0);
    func_801725B8(arg0);
}

void func_8015F738(s32 arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
}

void func_8015F76C(s32 arg0) {
    func_80147078(arg0, 0x15);
    func_8015F848(arg0);
}

extern void func_8015F7D4();

s32 func_8015F7A0(s32 arg0) {
    func_80147078(arg0, 0x15);
    func_8015F7D4(arg0);
}

void func_8015F7D4(s32 arg0, s32 arg1) {
    D_8018FEE4[AF(arg0, u16, 2)]();
}

void func_8015F810(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015F848(arg0);
    }
}

void func_8015F848(s32 arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    func_80154150(arg0, 0x1F);
    D_8011F730 |= 5;
    func_80146CA0(arg0);
}

void func_8015F89C(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    if (!(temp_v1 & 0x4000)) {
        if (temp_v1 & 0x8000) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078((s32) arg0, 0);
            func_80159B70((s32) arg0);
            return;
        }
        goto block_4;
    }
    func_801466F0(1, (s32) arg0, 0, -0x1E, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
block_4:
    func_80161208((s32) arg0);
}

void func_8015F948(s32 arg0) {
    func_80147078(arg0, 0x15);
    if (func_80161104(arg0) != 0) {
        func_80154150(arg0, 0x22);
        StartFace(arg0, 0x1A);
        func_80146C98(arg0, 2);
    }
}

void func_8015F9A4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)]();
        func_80147078((s32) arg0, 0);
        func_80159B70((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

void func_8015FA24(s32 arg0) {
    StartFace(arg0, 0x11);
}

void func_8015FA44(s32 arg0) {
    func_80147078(arg0, 0x16);
    func_8015FBE0(arg0);
}

s32 func_8015FA78(s32 arg0) {
    func_80147078(arg0, 0x16);
    func_8015FAAC(arg0);
}

void func_8015FAAC(s32 arg0, s32 arg1) {
    D_8018FEF0[AF(arg0, u16, 2)]();
}

void func_8015FAE8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_801612B8(arg0, 0);
    if ((temp_v0 == 0) || (temp_v0 == 0x8000)) {
        func_8016007C(arg0);
        AF(arg0, s32, 0x184) = (s32) (AF(arg0, s32, 0x184) | 0x80000000);
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 3);
        func_8015BE94(arg0);
        return;
    }
    if (temp_v0 & 0x4000) {
        func_8016007C(arg0);
        AF(arg0, s32, 0x184) = (s32) (AF(arg0, s32, 0x184) | 0x80000000);
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 4);
        func_8015C0C4(arg0);
        return;
    }
    func_8015FBE0(arg0);
}

void func_8015FBE0(s32 arg0) {
    if (AF(arg0, s32, 0x184) < 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    D_80078EC1 = 0;
    func_80154150(arg0, 0x20);
    StartFace(arg0, 0x18);
    func_80146A6C(0x16, arg0, 0, 0, 0, 0, 0);
    func_80147324(0x44F);
    ClearDisplayFlag20(arg0);
    UpdateFlag10Part21(arg0);
    D_801270C0 = 2;
    D_800B9A17 = 0;
    func_80146CA0(arg0);
}

void func_8015FCC8(s32 arg0) {
    if (D_800AE6B0 & 0x80FFFFFF) {
        func_8016007C(arg0);
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    AF(arg0, u8, 0x197) = 0;
    AF(arg0, u8, 0xBE) = 0;
    AF(arg0, u8, 0xBF) = 0;
    AF(arg0, u8, 0x1A0) = (s8) AF(arg0, s32, 0x184);
    func_8014BFF4(arg0, 1);
    func_80146CA0(arg0);
}

void func_8015FD74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80147324(0x18, arg1, arg2, arg3);
    AF(arg0, s32, 0x198) = func_8013767C(D_8018FF04[AF(arg0, u8, 0x1A0)]);
    func_80146CA0((s32) arg0);
}

void func_8015FDCC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80147324(0x19);
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        if ((func_80028DE0() == 0) && (func_80165700((s32) arg0, (s32) AF(arg0, u8, 0x1A0)) & 0xFF)) {
            func_801466F0(0x24, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            func_80147324(0x989);
        }
        func_80146CA0((s32) arg0);
    }
}

void func_8015FE70(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, u16, 0xB8) & 0x8000) {
        temp_v0 = AF(arg0, u16, 0xBA);
        if (temp_v0 == 0) {
            D_8018FBA8[AF(arg0, u16, 0)]();
            func_80147078((s32) arg0, 0);
            func_80159B70((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xB8) = temp_v0;
        goto block_4;
    }
block_4:
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        StartFace((s32) arg0, 0x11);
    }
    func_80161208((s32) arg0);
}

extern u32 func_801656E8();
extern void func_80165670();
extern void func_80165840();
extern void func_801658DC();
extern void func_8016004C();

void func_8015FF20(s32 arg0) {
    s32 temp_a2;
    u8 temp_v0;

    if (D_800AE6B0 & 0x80FFFFFF) {
        func_8016007C(arg0);
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    temp_a2 = AF(arg0, s32, 0x184);
    if (temp_a2 < 0) {
        func_80150820(arg0, func_801656E8(arg0, temp_a2 & 0xFF) & 0xFF);
    } else {
        if (AF(arg0, u8, 0x1A0) != AF(arg0, u8, 0x196)) {
            AF(arg0, u8, 0x1A0) = temp_a2;
            AF(arg0, u8, 0x197) = 0;
            AF(arg0, u8, 0xBE) = 0;
            AF(arg0, u8, 0xBF) = 0;
            func_8014BFF4(arg0, 1);
        }
        temp_v0 = AF(arg0, u8, 0x1A0);
        D_80078EC1 = temp_v0;
        D_80078EC2 = temp_v0;
        func_80165670(arg0, temp_v0);
        func_80165840(arg0);
        func_801658DC(arg0);
        StartFace(arg0, 0x11);
        D_801270C0 = 1;
    }
    func_8016004C(arg0);
}

void func_8016004C(s32 arg0) {
    AF(arg0, s32, 0x184) = 0;
    AF(arg0, s16, 0x18A) = 0;
    AF(arg0, s16, 0x188) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~0x10);
    D_800B9A17 = 1;
}

void func_8016007C(s32 arg0) {
    AF(arg0, s32, 0x184) = 0;
    AF(arg0, s16, 0x18A) = 0;
    AF(arg0, s16, 0x188) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~0x10);
    D_800B9A17 = 1;
    StartFace(arg0, 0x11);
    D_801270C0 = 1;
}

void func_801600D0(s32 arg0) {
    func_80147078(arg0, 0x18);
    func_801601AC(arg0);
}

void func_80160104(s32 arg0) {
    func_80147078(arg0, 0x18);
    func_80160138(arg0);
}

void func_80160138(s32 arg0, s32 arg1) {
    D_8018FF80[AF(arg0, u16, 2)]();
}

void func_80160174(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_801601AC(arg0);
    }
}

void func_801601AC(s32 arg0, s32 arg1) {
    func_80154150(arg0, 0x21);
    func_80146C98(arg0, 1);
}

void func_801601E4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154150((s32) arg0, 0x22);
        StartFace((s32) arg0, 0x1A);
        func_80146CA0((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

void func_80160244(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154150((s32) arg0, 0x23);
        StartFace((s32) arg0, 0x1B);
        func_80146CA0((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

void func_801602A4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)]();
        StartFace((s32) arg0, 0x11);
        func_80147078((s32) arg0, 0);
        func_80159B70((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

void func_8016032C(void) {
}

void func_80160334(s32 arg0) {
    func_80147078(arg0, 0x1B);
    func_80160410(arg0);
}

s32 func_80160368(s32 arg0) {
    func_80147078(arg0, 0x1B);
    func_8016039C(arg0);
}

void func_8016039C(s32 arg0, s32 arg1) {
    D_8018FF90[AF(arg0, u16, 2)]();
}

void func_801603D8(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80160410(arg0);
    }
}

extern u8 D_80062BD0;
extern s16 D_801152A0;

void func_80160410(s32 arg0) {
    VECTOR v;
    s32 out[12];
    s32 d;
    s16 angle;
    s32 x, y, z, t;

    StartRumbleScript(&D_80062BD0);
    func_80149020(arg0);
    angle = AF(arg0, u16, 0x42) - AF(AF(arg0, u8 *, 0x20), u16, 0x12);
    func_80013E94(arg0 + 0xE8, &d);
    x = AF(arg0, s16, 0xE0);
    t = d;
    y = AF(arg0, s16, 0xE2);
    z = AF(arg0, s16, 0xE4);
    d = t | 0x80000000;
    func_80146A6C(6, (StageActor *)arg0, x, y, z, d, 0);
    func_80147324(0x43D);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0xFFFA0000;
    func_8001382C(angle, &v, out);
    func_80146DB8(arg0, out);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0x8000;
    func_8001382C(angle, &v, arg0 + 0x234);
    func_80146E90(arg0, 8);
    ClearDisplayFlag20((StageActor *)arg0);
    D_801152A0 = func_80149184(arg0);
    func_80146CA0(arg0);
}

void func_80160534(s32 arg0) {
    func_80149020(arg0);
    func_80149034(arg0);
    if ((D_80078EC0 & 0x7F) && (func_80148800(arg0) & 0x90)) {
        if (D_80078EBF == 0x80) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0x13);
            func_8015F00C(arg0);
            return;
        }
        if (func_80149B54(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80149BAC(arg0);
            return;
        }
    }
    if (func_80149AA8(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80149AD4(arg0);
        return;
    }
    if (func_80146E98(arg0) != 0) {
        if (func_801487F4(arg0) & 8) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0x11);
            func_8015E9B8(arg0);
            return;
        }
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    if (func_800CF8B4() != 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (D_801152A0 + func_801491C4(arg0)) & 0xFFF;
    }
    func_80147AD4(arg0, AF(arg0, s32, 0x234), AF(arg0, s32, 0x238), AF(arg0, s32, 0x23C));
    func_801473EC(arg0);
    if (func_8014D738(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 9);
        func_8015C714(arg0);
        return;
    }
    func_80161208(arg0);
}

s32 func_801607B8(s32 arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~1);
    return func_80149048(arg0);
}

void func_801607E4(s32 arg0) {
    func_80147078(arg0, 0x1C);
    func_801608C0(arg0);
}

extern void func_8016084C();

void func_80160818(s32 arg0) {
    func_80147078(arg0, 0x1C);
    func_8016084C(arg0);
}

void func_8016084C(s32 arg0, s32 arg1) {
    D_8018FF98[AF(arg0, u16, 2)]();
}

void func_80160888(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_801608C0(arg0);
    }
}

void func_801608C0(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x41);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    func_80154150(arg0, 0x24);
    StartFace(arg0, 0x1D);
    func_80146CA0(arg0);
}

void func_80160920(s32 arg0) {
    if (!(func_801487F4(arg0) & 8)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80160A74(arg0);
        return;
    }
    if ((func_80161208(arg0) == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        func_80154150(arg0, 0x25);
        func_80146CA0(arg0);
    }
}

void func_801609B8(s32 arg0) {
    if (!(func_801487F4(arg0) & 8)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80160A74(arg0);
        return;
    }
    func_80161208(arg0);
}

void func_80160A28(s32 arg0) {
    UpdateFlag10Part21(arg0);
    AF(arg0, s32, 0x44) &= ~0x40;
    AF(arg0, s32, 0x44) &= ~1;
    StartFace(arg0, 0x11);
}

void func_80160A74(s32 arg0) {
    if (D_80078EBF == 0x80) {
        func_80160B00();
        return;
    }
    func_80147078(arg0, 0);
    func_80159B70(arg0);
}

void func_80160ACC(s32 arg0) {
    func_80147078(arg0, 0x1D);
    func_80160BB4(arg0);
}

extern void func_80160B34();

s32 func_80160B00(s32 arg0) {
    func_80147078(arg0, 0x1D);
    func_80160B34(arg0);
}

void func_80160B34(s32 arg0, s32 arg1) {
    D_8018FFA4[AF(arg0, u16, 2)]();
}

void func_80160B70(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80160BB4(arg0);
        return;
    }
    AF(arg0, s32, 0x1AC) = 0;
}

void func_80160BB4(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x80);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    func_80154150(arg0, 0x26);
    StartFace(arg0, 0x1E);
    AF(arg0, s32, 0x234) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xFE9;
    AF(arg0, s32, 0x238) = 0;
    func_80146CA0(arg0);
}

void func_80160C28(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_80161208(arg0) == 0) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s32, 0x238) = (s32) (AF(arg0, s32, 0x238) + 0x1C000);
        AF(temp_a0, u16, 0x10) = (u16) ((AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0x23A)) & 0xFFF);
        temp_v1 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1, u16, 0x10) < 0xC00) {
            AF(temp_v1, u16, 0x10) = 0xC00U;
            AF(arg0, s16, 0xB8) = 1;
            func_80146CA0(arg0);
        }
    }
}

void func_80160CB4(s32 arg0) {
    if ((func_80161208(arg0) == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        func_80154150(arg0, 0x27);
        StartFace(arg0, 0x1F);
        func_80146CA0(arg0);
    }
}

void func_80160D10(s32 arg0) {
    s32 temp;

    if (AF(arg0, s32, 0x44) & 0x10) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159B70(arg0);
        return;
    }
    if (AF(arg0, s32, 0x1AC) == 0) {
        if (func_80148800(arg0) & 0xF0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0);
            func_80159B70(arg0);
            return;
        }
    } else {
        AF(arg0, s32, 0x1AC) -= 0xAAA8;
        if (AF(arg0, s32, 0x1AC) < 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_80147078(arg0, 0);
            func_80159B70(arg0);
            return;
        }
    }
    func_80161208(arg0);
}

void func_80160DEC(u8 *arg0) {
    AF(arg0, s32, 0x1AC) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    UpdateFlag10Part21(arg0);
    AF(arg0, s32, 0x44) &= ~0x180;
    StartFace(arg0, 0x11);
}

void func_80160E3C(s32 arg0) {
    func_80147078(arg0, 0x1E);
    func_80160F00(arg0);
}

void func_80160E70(s32 arg0) {
    func_80147078(arg0, 0x1E);
    func_80160EA4(arg0);
}

void func_80160EA4(s32 arg0, s32 arg1) {
    D_8018FFB4[AF(arg0, u16, 2)]();
}

void func_80160EE0(s32 arg0, s32 arg1) {
    func_80160F00(arg0, arg1);
}

void func_80160F00(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    func_80154150(arg0, 4);
    StartFace(arg0, 0x11);
    D_801270C0 = 2;
    func_80129248(0);
    D_800B9A17 = 0;
    func_80146E90(arg0, 0x10);
    func_80146CA0(arg0);
}

void func_80160F70(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_800D0F4C(0xA);
        func_8014BB24(arg0, 0x96, 0);
        func_8014BD24(arg0, 0x96);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_80110EC0);
        func_80146CA0(arg0);
    }
}

void func_80160FE0(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        func_80146CA0(arg0);
    }
}

void func_80161034(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    D_8018FBA8[AF(arg0, u16, 0)](arg0);
    func_80147078(arg0, 0);
    func_80159B70(arg0);
}

void func_80161094(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
    }
    D_801270C0 = 1;
    func_80129248(1);
    D_800B9A17 = 1;
}

void func_801610FC(void) {
}

s32 func_80161104(s32 arg0, s32 arg1) {
    return func_80161208(arg0) == 0;
}

extern void func_801483E8();
extern s16 D_801152A0;
extern s32 func_80161A60();

void func_80161124(s32 arg0) {
    AF(arg0, s16, 0x24A) = 0;
    func_801483E8(arg0);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    if (AF(arg0, s32, 0x2C) < -0xBA000) {
        AF(arg0, s32, 0x2C) = -0xBA000;
    }
    if (AF(arg0, s32, 0x24) | AF(arg0, s32, 0x2C)) {
        func_80154150(arg0, 0xF);
    } else {
        func_80154150(arg0, 0xD);
    }
    StartFace(arg0, 0x22);
    AF(arg0, s32, 0x5C) = 0;
    AF(arg0, s32, 0x240) = 0;
    func_80146E90(arg0, 4);
    D_801152A0 = func_80149184(arg0);
    ClearDisplayFlag20(arg0);
    func_801725A4(arg0);
    if (func_80161A60(arg0) != 0) {
        func_80147324(0x8E1);
    }
}

s32 func_80161208(s32 arg0) {
    return func_8016130C(arg0, func_801612B8(arg0, 0));
}

s32 func_80161240(s32 arg0) {
    return func_8016130C(arg0, func_801612B8(arg0, 1));
}

s32 func_80161278(s32 arg0) {
    D_801152BC = 0;
    return func_80161374(arg0, func_801612B8(arg0, 1));
}

s32 func_801612B8(s32 arg0, s32 arg1) {
    s32 ret;

    if (!(arg1 & 1)) {
        func_8014E934(arg0);
    }
    ret = ((s32 (*)())func_8014CC28)(arg0);
    ret |= func_8014F3E8(arg0);
    return ret;
}

extern s32 func_8015BF48();

s32 func_8016130C(s32 arg0, s32 arg1) {
    if ((arg1 == 0) || (arg1 == 0x8000)) {
        func_801599A4(arg0, arg1);
        func_8015BDD0(arg0);
        return 1;
    }
    if (arg1 & 0x4000) {
        func_801599A4(arg0, arg1);
        func_8015BF48(arg0);
        return 1;
    }
    return 0;
}

s32 func_80161374(s32 arg0, s32 arg1) {
    if ((arg1 == 0) || (arg1 == 0x8000)) {
        func_801599A4(arg0);
        func_8015BDD0(arg0);
        return 1;
    }
    if (arg1 & 0x4000) {
        if ((D_801152BC != 0) || (AF(arg0, s16, 0xA) >= AF(arg0, s16, 0x8A))) {
            func_801599A4(arg0);
            func_8015BF48(arg0);
            return 1;
        }
        func_80015954(arg0 + 0x88, arg0 + 4);
    }
    return 0;
}

extern s32 func_8016163C();
extern s32 func_801615C4();

s32 func_80161418(s32 arg0) {
    return func_8016163C(arg0, func_801615C4(arg0, 0));
}

extern s32 func_80161774();

s32 func_80161450(s32 arg0) {
    return func_80161774(arg0, func_801615C4(arg0, 0));
}

extern s32 func_8016197C();

s32 func_80161488(s32 arg0) {
    s32 temp_v0;
    s32 ret;

    temp_v0 = func_801615C4(arg0, 0);
    if (AF(arg0, u8, 0x1C6) == 0) {
        ret = func_80161774(arg0, temp_v0);
    } else {
        ret = func_8016197C(arg0, temp_v0) & ~7;
    }
    return ret;
}

extern s32 func_80161888();

s32 func_801614E4(s32 arg0) {
    func_80161888(arg0, func_801615C4(arg0, 0));
}

extern s32 func_8016191C();

s32 func_8016151C(s32 arg0) {
    func_8016191C(arg0, func_801615C4(arg0, 0));
}

s32 func_80161554(s32 arg0) {
    func_8016163C(arg0, func_801615C4(arg0, 1));
}

s32 func_8016158C(s32 arg0) {
    return func_80161774(arg0, func_801615C4(arg0, 1));
}

s32 func_801615C4(s32 arg0, s32 arg1) {
    s32 var_s1;

    var_s1 = 0;
    if (!(arg1 & 1) && (((s32 (*)())func_8014ED28)(arg0) != 0)) {
        func_80146D90(arg0);
    }
    if (AF(arg0, s32, 0x34) > 0) {
        var_s1 |= ((s32 (*)())func_8014CC28)(arg0);
    }
    return var_s1 | ((s32 (*)())func_8014FA04)(arg0);
}

s32 func_8016163C(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 1;
    }
    if (arg1 & 0x4000) {
        func_801599A4(arg0);
        func_8015BF48(arg0);
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 2;
    }
    if (arg1 & 0x2000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 4;
    }
    if (arg1 & 0x8000) {
        if (AF(arg0, u16, 0x16C) != 0x15) {
            return 0;
        }
        if (func_8014A6C4(arg0) != 0) {
            func_801599A4(arg0);
            func_8015F2F0(arg0);
            AF(AF(arg0, void *, 0x20), s16, 0x12) = ratan2(D_801152B0, D_801152B4);
            return 8;
        }
    }
    return 0;
}

s32 func_80161774(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 1;
    }
    if (arg1 & 0x4000) {
        func_801599A4(arg0);
        func_8015BF48(arg0);
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 2;
    }
    if (arg1 & 0x2000) {
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 4;
    }
    if ((arg1 & 0x8000) && AF(arg0, u16, 0x16C) == 0x15 && func_8014A6C4(arg0) != 0) {
        func_801599A4(arg0);
        func_8015F2F0(arg0);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ratan2(D_801152B0, D_801152B4);
        return 8;
    }
    return 0;
}

s32 func_80161888(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 1;
    }
    if (arg1 & 0x4000) {
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 2;
    }
    if (arg1 & 0x2000) {
        func_8014C010(arg0, 1);
        func_80161D20(arg0, AF(arg0, u16, 0x16E));
        return 4;
    }
    return 0;
}

s32 func_8016191C(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_8014C010(arg0, 1);
        return 1;
    } else if (arg1 & 0x4000) {
        func_8014C010(arg0, 1);
        return 2;
    } else if (arg1 & 0x2000) {
        func_8014C010(arg0, 1);
        return 4;
    }
    return 0;
}

s32 func_8016197C(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        return 1;
    } else if (arg1 & 0x4000) {
        return 2;
    } else if (arg1 & 0x2000) {
        return 4;
    }
    return 0;
}

s32 func_801619A4(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) == 0) {
        return 0;
    }
    return D_80078EC0 & 0x7F;
}

s32 func_801619D0(arg0, arg1)
s32 arg0;
s32 arg1;
{
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 3;
    }
    return 0;
}

s32 func_80161A00(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 4;
    }
    return 0;
}

s32 func_80161A30(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 5;
    }
    return 0;
}

s32 func_80161A60(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 6;
    }
    return 0;
}

static inline s32 h_80161A90(u8 *arg0) {
    if (AF(arg0, s16, 0x1C8) == 0) {
        return 0;
    }
    return (D_80078EC0 & 0x7F) == 6;
}

void func_80161A90(u8 *arg0) {
    u8 *w = &D_80078E78;

    if (h_80161A90(arg0)) {
        AF(arg0, s16, 0x1C8)--;
    }
    if ((w[0x48] & 0x7F) == 6 && AF(arg0, s16, 0x1C8) == 0) {
        func_8014AC10(0x3B);
    }
}

s32 func_80161B18(s32 arg0) {
    if ((D_800AE6B0 & 0x80FFFFFF) || !(AF(arg0, s32, 0x44) & 0x10)) {
        return 0;
    }
    func_801599A4(arg0);
    func_8015FA78(arg0);
    return 1;
}

s32 func_80161B84(s32 arg0) {
    if ((AF(arg0, s32, 0x44) & 0x100) && func_80149884(arg0)) {
        func_801599A4(arg0);
        func_801498C0(arg0);
        return 1;
    }
    return 0;
}

s32 func_80161BE0(s32 arg0) {
    if (func_801497A8() != 0) {
        func_801599A4(arg0);
        func_80149864(arg0);
        return 1;
    }
    return 0;
}

extern u16 D_8018FFC4[];
extern u16 D_8018FFC6[];

void func_80161C24(s32 arg0, s32 arg1) {
    if ((u32) arg1 < 8) {
        if (AF(arg0, u8, 0xDA) != 0) {
            func_80147324(D_8018FFC4[arg1 * 2]);
            AF(arg0, u8, 0xDA) = 0;
        } else {
            func_80147324(D_8018FFC6[arg1 * 2]);
            AF(arg0, u8, 0xDA) = 1;
        }
    }
}

void func_80161C98(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg1 < 8U) {
        func_80147324((s32) (*(u16 *)((u8 *)D_8018FFE4 + ((arg1 * 2)) * 1)), (s32) arg1, arg2, arg3);
    }
}

void func_80161CD0(s32 arg0, s32 arg1) {
    if (((u32) arg1 < 8U) && (func_800CF8B4() != 0)) {
        func_80147324((s32) (*(u16 *)((u8 *)D_8018FFF4 + ((arg1 * 2)) * 1)));
    }
}

void func_80161D20(s32 arg0, s32 arg1) {
    if ((u32) arg1 < 8U) {
        func_80147324((s32) (*(u16 *)((u8 *)D_80190004 + ((arg1 * 2)) * 1)), arg1);
    }
}

s32 func_80161D58(s32 arg0) {
    func_80161E08();
    return func_80162438(arg0);
}

extern s32 D_800AE6A8;
extern u8 D_80190048;
extern s32 func_800D1734();

s32 func_80161D88(void) {
    s32 var_v0;

    var_v0 = D_800AE6B0 & 0x80FFFFFF;
    if (var_v0 == 0) {
        var_v0 = D_800AE6A8 & 0x80FFFFFF;
        if (var_v0 == 0) {
            var_v0 = func_80029178(0x141) & 0xFF;
            if (var_v0 != 0) {
                func_80029124(0x141, 0);
                func_80029124(0x95, 1);
                var_v0 = func_800D1734((s32) &D_80190048);
            }
        }
    }
    return var_v0;
}

extern s16 D_80078EB0;
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u16 D_800B5BD8;
extern s16 D_800B5BE0;
extern s16 D_800B5BE2;
extern u8 D_800B5BFF;
extern s16 D_800B5C04;
extern u16 D_800B5C10;
extern s16 D_800B5C18;
extern s16 D_800B5C1A;
extern u8 D_800B5C37;
extern s16 D_800B5C3C;
extern u16 D_800B5C48;
extern s16 D_800B5C50;
extern s16 D_800B5C52;
extern s16 D_800B5C74;
extern s32 D_801ED534;
extern s32 D_801ED538;
extern u8 D_80190014;
extern u8 D_80190034;
extern u8 D_801ED53C;
extern u8 D_801ED564;
extern u8 D_801ED57C;
extern void func_80024054();
extern void func_8001CE28();
extern void func_800242D0();
extern void func_8001CE68();
extern s32 func_801620C4();
extern s32 func_801622C4();

void func_80161E08(u16 *arg0) {
    u8 *w = (u8 *)&D_800AF630;
    s32 r;
    u8 *q;

    if (*arg0 == 0x1A) {
        return;
    }
    if (D_800B9A08 == 0x3012 || D_800B9A08 == 0x3054 || D_800B9A08 == 0x3079 || D_800B9A08 == 0x3096) {
        return;
    }
    r = func_800291DC(8);
    if (r & 0x8000) {
        if (D_800B5BD8 == 0) {
            u8 *p = w + 0x65A8;

            D_801ED530 = (s32)p;
            q = p;
            func_80024054(&D_80190014, &D_801ED53C);
            func_8001CE28(q, &D_801ED53C);
            D_800B5C04 = 1;
            D_800B5BFF = 1;
            D_800B5BE0 = -D_800AF7BC / 2 + 0xD0;
            D_800B5BE2 = -D_800AF7BE / 2 + 0x28;
        }
        if (D_800B5C10 == 0) {
            u8 *p = w + 0x65E0;

            D_801ED534 = (s32)p;
            q = p;
            func_80024054(&D_80190034, &D_801ED564);
            func_8001CE28(q, &D_801ED564);
            D_800B5C3C = 1;
            D_800B5C37 = 1;
            D_800B5C18 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C1A = -D_800AF7BE / 2 + 0x30;
        }
        if (D_800B5C48 == 0) {
            u8 *p = w + 0x6618;

            D_801ED538 = (s32)p;
            q = p;
            func_800242D0((s16)func_801620C4(), &D_801ED57C, 0x84);
            func_8001CE68(q, &D_801ED57C);
            D_800B5C74 = 1;
            D_800B5C50 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C52 = -D_800AF7BE / 2 + 0x10;
        }
        func_800242D0((s16)func_801620C4(), &D_801ED57C, 0x84);
        if ((r & 0x7FFF) == D_80078EB0) {
            func_801622C4();
        }
    }
}

extern s32 func_800D0E30();

s32 func_801620C4(void) {
    s16 sp10;
    s32 r;

    sp10 = func_800291DC(8) & 0x7FFF;
    sp10 = func_800D0E30(&sp10);
    r = ((u8 *) &sp10)[1] * 100 + ((u8 *) &sp10)[0];
    return (s16) r;
}

s32 func_80162120(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = func_800291DC(8, arg1) << 0x10;
    if (var_v0 == 0) {
        var_v0 = func_800291C8(8, (s32) (s16) (func_800D0D7C(0, 1) | ~0x7FFF));
    }
    return var_v0;
}

void func_8016216C(void) {
    s32 *p;
    s32 i;

    func_800291C8(8, 0);
    i = 0;
    p = &D_801ED530;
    do {
        func_80016714(*p, 0x38);
        p++;
        i++;
    } while (i < 3);
}

s32 func_801621CC(s32 n) {
    u8 *c = &D_80078E78;
    u32 v;
    s32 i;
    s8 k;

    v = func_800291DC(8);
    if (v & 0x8000) {
        v &= 0x7FFF;
        if ((v >> 8) == c[0x39] && c[0x38] >= (v & 0xFF)) {
            return (s32)&D_80190048;
        }
        k = c[0x39] - 1;
        for (i = 0; i < n; i++, k--) {
            if (k < 0) {
                k = 0x17;
            }
            if (((v >> 8) & 0xFF) == k) {
                if (i != n - 1 || c[0x38] < (v & 0xFF)) {
                    return (s32)&D_80190048;
                }
            }
        }
    }
    return 0;
}

s32 func_801622C4(void) {
    s32 *p;
    s32 i;

    func_80029124(0x141, 1);
    func_800291C8(8, 0);
    i = 0;
    p = &D_801ED530;
    do {
        func_80016714(*p, 0x38);
        p++;
        i++;
    } while (i < 3);
}

void func_80162330(u8 *arg0) {
    D_8019006C[AF(arg0, u8, 0x15)]();
}

s32 func_8016236C(u8 *arg0, s32 arg1) {
    EndScene((s32) &D_80126B58, arg1);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_801623B8(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D0C48(1, arg1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_80162414(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

extern s16 D_80078EB0;
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u16 D_800B5BD8;
extern s16 D_800B5BE0;
extern s16 D_800B5BE2;
extern u8 D_800B5BFF;
extern s16 D_800B5C04;
extern u16 D_800B5C10;
extern s16 D_800B5C18;
extern s16 D_800B5C1A;
extern u8 D_800B5C37;
extern s16 D_800B5C3C;
extern u16 D_800B5C48;
extern s16 D_800B5C50;
extern s16 D_800B5C52;
extern s16 D_800B5C74;
extern u8 D_80190078;
extern u8 D_80190090;
extern u8 D_801ED594;
extern u8 D_801ED5BC;
extern u8 D_801ED5D8;
extern s32 D_801ED58C;
extern s32 D_801ED590;
extern void func_80024054();
extern void func_8001CE28();
extern void func_800242D0();
extern s32 func_801626B8();
extern void func_8001CE68();
extern s32 func_80162760();

s32 func_80162438(void) {
    u8 *w = (u8 *)&D_800AF630;
    s32 r;
    u8 *q;

    r = func_800291DC(0x12);
    if (r & 0x8000) {
        if (D_800B5BD8 == 0) {
            u8 *p = w + 0x65A8;

            D_801ED588 = (s32)p;
            q = p;
            func_80024054(&D_80190078, &D_801ED594);
            func_8001CE28(q, &D_801ED594);
            D_800B5C04 = 1;
            D_800B5BFF = 1;
            D_800B5BE0 = -D_800AF7BC / 2 + 0xD0;
            D_800B5BE2 = -D_800AF7BE / 2 + 0x28;
        }
        if (D_800B5C10 == 0) {
            u8 *p = w + 0x65E0;

            D_801ED58C = (s32)p;
            q = p;
            func_80024054(&D_80190090, &D_801ED5BC);
            func_8001CE28(q, &D_801ED5BC);
            D_800B5C3C = 1;
            D_800B5C37 = 1;
            D_800B5C18 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C1A = -D_800AF7BE / 2 + 0x30;
        }
        if (D_800B5C48 == 0) {
            u8 *p = w + 0x6618;

            D_801ED590 = (s32)p;
            q = p;
            func_800242D0((s16)func_801626B8(), &D_801ED5D8, 0x84);
            func_8001CE68(q, &D_801ED5D8);
            D_800B5C74 = 1;
            D_800B5C50 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C52 = -D_800AF7BE / 2 + 0x10;
        }
        func_800242D0((s16)func_801626B8(), &D_801ED5D8, 0x84);
        if ((r & 0x7FFF) == D_80078EB0) {
            func_80162760();
        }
    }
}

extern s32 func_800D0E30();

s32 func_801626B8(void) {
    u16 sp10;
    s32 lo;

    sp10 = func_800291DC(0x12) & 0x7FFF;
    sp10 = func_800D0E30(&sp10);
    lo = ((u8 *) &sp10)[0];
    return (s16) (((u8 *) &sp10)[1] * 100 + lo);
}

void func_80162714(s32 arg0, s32 arg1) {
    if ((func_800291DC(0x12, arg1) << 0x10) == 0) {
        func_800291C8(0x12, (s32) (s16) (func_800D0D7C(0xC, 0) | ~0x7FFF));
    }
}

s32 func_80162760(void) {
    s32 *p;
    s32 i;

    func_800291C8(0x12, 0);
    i = 0;
    p = &D_801ED588;
    do {
        func_80016714(*p, 0x38);
        p++;
        i++;
    } while (i < 3);
}

s32 func_801627C0(void) {
    return func_80016714((s32) &D_8011F750, 0x58);
}

void func_801627E8(void) {
    if (*(u8 *)&D_8011F750.vx != 0) {
        {
            s32 i = *(u8 *)&D_8011F750.vx - 1;

            D_801900B0[i](&D_8011F750.vx);
        }
    }
}

void func_80162834(u8 *arg0) {
    D_801900B4[AF(arg0, u8, 1)]();
}

extern u8 D_800B5CB8;
extern s32 D_800B5CBC;
extern s8 D_800B5CDF;
extern u8 D_801900A4;
extern void func_8001CB6C();
void func_80162ACC(s32 arg0);
extern void *D_800B5CEC;

void func_80162870(u8 *arg0) {
    AF(arg0, s32 *, 8) = &D_800B5CB8;
    func_8001CB6C((s32) &D_800B5CB8, (s32) &D_801900A4, 0x250, 0x1A0);
    D_800B5CEC = arg0 + 0xC;
    D_800B5CDF = 0x14;
    D_800B5CBC |= 0x60000000;
    func_80162968((s32) arg0);
    func_80162ACC((s32) arg0);
}

void func_801628F4(u8 *arg0) {
    void *a1;
    void *a2;

    a2 = AF(arg0, void *, 4);
    a1 = AF(arg0, void *, 8);
    if (AF(a2, s16, 0x7E) != 0) {
        AF(a1, s32, 4) |= 0x80000000;
    } else {
        AF(a1, s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 0x20) = (s32) AF(a2, s16, 0x78);
    AF(arg0, s32, 0x24) = (s32) AF(a2, s16, 0x7A);
    AF(arg0, s32, 0x28) = (s32) AF(a2, s16, 0x7C);
    func_80162968((s32) arg0);
}

void func_80162968(s32 arg0) {
    u8 *s1;
    u8 *s3;
    s32 s0;
    s16 t;

    s1 = AF(arg0, u8 *, 4);
    s3 = AF(arg0, u8 *, 8);
    s0 = arg0 + 0xC;
    AF(s3, s16, 0x10) = ratan2(AF(s1, s16, 0x84), AF(s1, s16, 0x82));
    AF(s3, s16, 0x14) = ratan2(AF(s1, s16, 0x80), -(s16)SquareRoot0(AF(s1, s16, 0x84) * AF(s1, s16, 0x84) + AF(s1, s16, 0x82) * AF(s1, s16, 0x82)));
    func_80013F3C(s0);
    func_800126C4(s0, AF(s3, s16, 0x10));
    func_800123F0(s0, AF(s3, s16, 0x14));
    func_80012558(s0, AF(AF(s1, u8 *, 0x20), s16, 0x12));
    func_800126C4(s0, 0x400);
    t = ((0x300 - (s16)(AF(arg0, s32, 0x24) - AF(s1, u16, 0xA))) << 13) / 768;
    if (AF(s1, s32, 0x44) & 0x400) {
        t = t / 3;
    }
    AF(s3, s16, 0x1C) = t;
    AF(s3, s16, 0x1A) = t;
    AF(s3, s16, 0x18) = t;
}

void func_80162AC0(u8 *arg0, s8 arg1) {
    AF(arg0, u8, 0) = arg1;
    AF(arg0, u8, 1) = 0;
}

void func_80162ACC(s32 arg0) {
    AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
}

void func_80162AE0(u8 *arg0) {
    AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) - 1);
}

s32 func_80162AF4(void) {
    return func_80016714((s32) &D_8011F9D0, 0x820);
}

void func_80162B1C(void) {
    void (**tbl)() = D_80126D40;
    s32 i;
    s32 off;
    u8 *o;
    u8 *m;
    u8 *q;
    u16 k;
    void (*f)();
    s16 v;

    for (i = 0, off = 0; i < 20; i++, off += 0x68) {
        o = &D_8011F9D0 + off;
        AF(o, u16, 0x44) = AF(o, u16, 6);
        AF(o, u16, 0x46) = AF(o, u16, 0xA);
        AF(o, u16, 0x48) = AF(o, u16, 0xE);
        k = AF(o, u16, 0);
        if (k != 0) {
            f = tbl[k - 1];
            if (f != NULL) {
                f(o, k);
            } else {
                func_80162CC4(o);
            }
            m = AF(o, u8 *, 0x20);
            if (m != NULL) {
                if (AF(m, u16, 0) == 1) {
                    AF(m, s32, 0x48) = AF(m, s16, 8) = AF(o, s16, 6);
                    AF(m, s32, 0x4C) = AF(m, s16, 0xA) = AF(o, s16, 0xA);
                    v = AF(o, s16, 0xE);
                    AF(m, s16, 0xC) = v;
                    AF(m, u16, 0x2C) |= 1;
                    AF(m, s32, 0x50) = v;
                } else if ((q = AF(m, u8 *, 0x34)) != NULL) {
                    AF(q, s32, 0x14) = AF(m, s16, 8) = AF(o, s16, 6);
                    AF(AF(m, u8 *, 0x34), s32, 0x18) = AF(m, s16, 0xA) = AF(o, s16, 0xA);
                    AF(AF(m, u8 *, 0x34), s32, 0x1C) = AF(m, s16, 0xC) = AF(o, s16, 0xE);
                } else {
                    AF(m, s16, 8) = AF(o, s16, 6);
                    AF(m, s16, 0xA) = AF(o, s16, 0xA);
                    AF(m, s16, 0xC) = AF(o, s16, 0xE);
                }
            }
        }
    }
}

void func_80162CC4() {
}

s32 func_80162CCC(s32 arg0) {
    s32 var_a1;
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0x20);
    if (temp_a0 != NULL) {
        var_a1 = 0x38;
        if (*temp_a0 == 1) {
            var_a1 = 0x84;
        }
        func_80016714((s32) temp_a0, var_a1);
    }
    return func_80016714(arg0, 0x68);
}

void func_80162D28(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    func_80013F3C(temp_s1);
    func_800126C4(temp_s1, (s32) AF(temp_s0, s16, 0x10));
    func_80012558(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    func_800123F0(temp_s1, (s32) AF(temp_s0, s16, 0x14));
}

void func_80162D88(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    func_80013F3C(temp_s1);
    func_80012558(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    func_800126C4(temp_s1, (s32) AF(temp_s0, s16, 0x10));
    func_800123F0(temp_s1, (s32) AF(temp_s0, s16, 0x14));
}

void func_80162DE8(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    func_80013F3C(temp_s1);
    func_800123F0(temp_s1, (s32) AF(temp_s0, s16, 0x14));
    func_800126C4(temp_s1, (s32) AF(temp_s0, s16, 0x10));
    func_80012558(temp_s1, (s32) AF(temp_s0, s16, 0x12));
}

void func_80162E48(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    func_80013F3C(temp_s1);
    func_800123F0(temp_s1, (s32) AF(temp_s0, s16, 0x14));
    func_80012558(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    func_800126C4(temp_s1, (s32) AF(temp_s0, s16, 0x10));
}

void func_80162EA8(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    func_80013F3C(temp_s1);
    func_80012558(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    func_800123F0(temp_s1, (s32) AF(temp_s0, s16, 0x14));
    func_800126C4(temp_s1, (s32) AF(temp_s0, s16, 0x10));
}

void func_80162F08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80162F60();
    func_80162F80(arg0, arg2);
    func_80162FA0(arg0, arg3);
}

void func_80162F60(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    func_80147948(arg0, arg1, 0x7F0000);
}

s32 func_80162F80(s32 arg0, s32 arg1) {
    func_801479BC(arg0, arg1, 0x7F0000);
}

s32 func_80162FA0(s32 arg0, s32 arg1) {
    func_80147A30(arg0, arg1, 0x7F0000);
}

s32 func_80162FC0(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
    temp_v0 = AF(arg0, s32, 8) + AF(arg0, s32, 0x14);
    AF(arg0, s32, 8) = temp_v0;
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    return temp_v0;
}

void func_80162FF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the vector */
    VECTOR v;
    MATRIX m;
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    func_80162F60();
    func_80162F80(arg0, arg2);
    func_80162FA0(arg0, arg3);
    func_80013F3C(&m);
    func_800126C4(&m, AF(temp_s1, s16, 0x10));
    func_80012558(&m, AF(temp_s1, s16, 0x12));
    func_800123F0(&m, AF(temp_s1, s16, 0x14));
    ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
    D_80127090 = v.vx;
    D_80127094 = v.vy;
    D_80127098 = v.vz;
    func_80146D30(arg0);
}

void func_801630C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the vector */
    VECTOR v;
    MATRIX m;
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    func_80162F60();
    func_80162F80(arg0, arg2);
    func_80162FA0(arg0, arg3);
    func_80013F3C(&m);
    func_80012558(&m, AF(temp_s1, s16, 0x12));
    func_800126C4(&m, AF(temp_s1, s16, 0x10));
    func_800123F0(&m, AF(temp_s1, s16, 0x14));
    ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
    D_80127090 = v.vx;
    D_80127094 = v.vy;
    D_80127098 = v.vz;
    func_80146D30(arg0);
}

void func_80163194(s32 arg0, s32 arg1, s32 arg2, s32 arg3, MATRIX *arg4) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the vector */
    VECTOR v;

    func_80162F60(arg0, arg1);
    func_80162F80(arg0, arg2);
    func_80162FA0(arg0, arg3);
    ApplyMatrixLV(arg4, (VECTOR *)(arg0 + 0x24), &v);
    D_80127090 = v.vx;
    D_80127094 = v.vy;
    D_80127098 = v.vz;
    func_80146D30(arg0);
}

void func_80163234(s32 arg0) {
    func_8016325C(arg0, 0, 0, 0);
}

void func_8016325C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80162F60();
    func_80162F80(arg0, arg2);
    func_80162FA0(arg0, arg3);
    D_80127090 = AF(arg0, s32, 0x24);
    D_80127094 = AF(arg0, s32, 0x28);
    D_80127098 = AF(arg0, s32, 0x2C);
    func_80146D30(arg0);
}

s32 func_801632E0(s32 arg0) {
    return D_80115100;
}

extern s32 D_80115200[];

s32 func_801632F0()
{
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] != 0) {
            return D_80115200[i];
        }
    }
    return 0;
}

extern SVECTOR D_80126B18[];

void func_80163328(void) {
    u32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] & 1) {
            AF(((u8 **)&D_80115100)[i], SVECTOR, 0x7C) = D_80126B18[i];
            AF(((u8 **)&D_80115100)[i], s16, 0x82) = 0;
        }
    }
}

extern s32 D_80115200[];

s32 func_801633A8(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] != 0 && !(AF(((s32 *)&D_80115100)[i], u16, 0x5C) & 0x400)) {
            return D_80115200[i];
        }
    }
    return 0;
}

extern SVECTOR D_801EC888;
extern void func_8016345C();

void func_80163408(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR v = D_801EC888;

    func_8016345C(arg0, (u16)arg1, arg2, (u16)arg3, &v);
}

extern void func_80163534();

void func_8016345C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 a1 = arg1;
    u16 a3 = arg3;

    /* MATCH-TRICK: the original calls func_80156370 with a0 only (a1 passed through) */
    func_80163534(arg0, a1, (u16)((s32 (*)())func_80156370)(a1), arg2, a3, arg4);
}

void func_801634D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 a4 = arg4;
    SVECTOR v = D_801EC888;

    func_80163534(arg0, (u16)arg1, (u16)arg2, arg3, a4, &v);
}

extern u8 D_80114EB0;
extern u8 D_80114EC8;
extern s32 D_80115204;
extern s32 D_80115208;
extern u8 D_80115298;
extern u8 D_8011DAF0;
extern u8 D_80126734;
extern s16 D_80126B1A;
extern s16 D_80126B1C;
extern s16 D_801270B0[];
extern s16 D_801270B2;
extern s16 D_801270B4;
extern s32 func_80163664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s32 arg11, s32 arg12);

void func_80163534(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    u16 a1 = arg1;
    u16 a2 = arg2;
    u16 a4 = arg4;

    D_80115200[0] = 0;
    D_80115204 = 0;
    D_80115208 = 0;
    D_801270B0[0] = AF(arg0, u16, 0x44) + AF(arg5, u16, 0);
    D_801270B2 = AF(arg0, u16, 0x46) + AF(arg5, u16, 2);
    D_801270B4 = AF(arg0, u16, 0x48) + AF(arg5, u16, 4);
    D_80126B18[0].vx = AF(arg0, u16, 6) + AF(arg5, u16, 0);
    D_80126B1A = AF(arg0, u16, 0xA) + AF(arg5, u16, 2);
    D_80126B1C = AF(arg0, u16, 0xE) + AF(arg5, u16, 4);
    D_80115200[0] = func_80163664(arg0, a1, a2, (s32)D_801270B0, (s32)D_80126B18, (s32)&D_80114EB0, (s32)&D_80114EC8, (s32)&D_80115100, (s32)&D_8011DAF0, arg3, a4, (s32)&D_80115298, (s32)&D_80126734);
}

s32 func_80163664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s32 arg11, s32 arg12) {
    return func_80157158(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3, /* extra? */ arg4, /* extra? */ arg5, /* extra? */ arg6, /* extra? */ arg7, /* extra? */ arg8, /* extra? */ arg9, /* extra? */ (s32) arg10, /* extra? */ arg11, /* extra? */ arg12);
}

void func_801636D0(s32 arg0, s32 arg1) {
    u32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] & 1) {
            func_8014AD30(arg0, &D_80126B18[i], 0, (u16)(arg1 & 0x7FFF));
        }
    }
}

s32 func_80163764(s32 arg0) {
    s32 *var_s0;
    s32 temp_s3;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = &D_801202A0;
    temp_s3 = AF(arg0, s32, 0x4C);
loop_1:
    if ((AF(var_s0, u16, 0) != 0) && (AF(var_s0, u16, 0x5C) & 0x100) && (func_8014C278(arg0, (s32) var_s0, 0x40) != 0)) {
        func_801506A4(temp_s3, (s32) var_s0);
        return 1;
    }
    var_s1 += 1;
    var_s0 = (s32 *)((u8 *)var_s0 + 0x10C);
    if (var_s1 >= 0x60U) {
        return 0;
    }
    goto loop_1;
}

s32 func_8016380C(u8 *arg0, SVECTOR *arg1) {
    SVECTOR v;
    s32 r;

    v = AF(arg0, SVECTOR, 0x44);
    func_80015978(arg0 + 4, arg1);
    r = func_80133784(1, &v, arg1);
    if (r != 0) {
        func_80015954(arg1, arg0 + 4);
        return r;
    }
    return 0;
}

extern s16 D_801152AA;
extern s32 func_80135004();

s32 func_801638A0(u8 *arg0, SVECTOR *arg1) {
    SVECTOR v;

    v = AF(arg0, SVECTOR, 0x44);
    func_80015978(arg0 + 4, arg1);
    if (func_80135004(1, &v, arg1) != 0) {
        func_80015954(arg1, arg0 + 4);
        if (D_801152AA >= -0x578) {
            return 0x8000;
        }
        if (D_801152AA >= -0xBCB) {
            return 0x4000;
        }
        return 0x2000;
    }
    return 0;
}

s32 func_80163950(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    u8 *p;

    func_80015978(arg0 + 4, &a);
    func_80015978(arg0 + 4, &b);
    a.vy -= 0x20;
    b.vy += 8;
    for (p = &D_801202A0; p < &D_801202A0 + 0x6480; p += 0x10C) {
        if (AF(p, u16, 0) != 0 && (AF(p, u16, 0x5C) & 0x400) && AF(p, s32, 0x58) != 0) {
            if (func_80135A4C(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0) {
                func_80015954(&b, arg0 + 4);
                return 1;
            }
        }
    }
    return 0;
}

void func_80163A58(u8 *arg0) {
    D_801900BC[AF(arg0, u16, 2)]();
}

void func_80163A94(u8 *a) {
    u8 *p = AF(a, u8 *, 0x4C);
    s32 m;

    AF(p, s32, 0x44) |= 4;
    AF(a, s32, 0x20) = m = func_8014659C();
    if (m != 0) {
        func_8001C214(m, &D_800DE5A0);
        AF(m, u8 *, 0x20) = &D_800636C8;
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = 0x1800;
        AF(m, u16, 0x2C) |= 0x10;
        func_80149374(p, a + 4);
        AF(AF(a, u8 *, 0x20), MATRIX, 0x34) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        AF(m, u16, 0x10) = AF(AF(p, u8 *, 0x20), u16, 0x10);
        AF(m, u16, 0x12) = AF(AF(p, u8 *, 0x20), u16, 0x12);
        AF(m, u16, 0x14) = AF(AF(p, u8 *, 0x20), u16, 0x14);
        AF(a, u16, 0x60) = AF(p, u16, 0x100);
        AF(a, u16, 0x62) = AF(p, u16, 0x102);
        AF(a, u16, 0x64) = AF(p, u16, 0x104);
        func_80147324(0x448);
        func_80146E90(a, 0x10);
        func_80146A6C(0xD, (StageActor *)a, 0, 0, 0, 0, 0);
        func_80146DE8((s32)a, 0, 0, -0x200000);
        func_80146CA0(a);
    }
}

extern void func_80164530();
void func_80163C2C(u8 *arg0) {
    MATRIX unused, m; /* MATCH-TRICK: frame pad, the original's frame has 0x20 unused bytes below m */
    SVECTOR rot; /* MATCH-TRICK: frame pad, 8 unused bytes above m */
    u8 *p = AF(arg0, u8 *, 0x4C);
    u8 *o = AF(arg0, u8 *, 0x20);
    s32 r;
    u8 *t;

    func_80164530(arg0);
    AF(o, s16, 0x14) = (AF(AF(arg0, u8 *, 0x20), u16, 0x14) + 0x71) & 0xFFF;
    func_80013F3C(&m);
    func_800126C4(&m, AF(arg0, s16, 0x60));
    func_800123F0(&m, AF(arg0, s16, 0x64));
    func_80012558(&m, AF(arg0, s16, 0x62));
    func_80012558(&m, AF(o, s16, 0x12));
    func_800126C4(&m, AF(o, s16, 0x10));
    func_800123F0(&m, AF(o, s16, 0x14));
    func_80163194((s32)arg0, 0, 0, 0x18000, &m);
    func_80162FC0((s32)arg0);
    AF(o, MATRIX, 0x34) = m;
    if (AF(arg0, s32, 0x2C) >= 0) {
        func_80146DE8((s32)arg0, 0, 0, 0xC0000);
        func_80146E90(arg0, 0x20);
        func_80147364(4, 0x448);
        func_80146CA0(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_801634D8((s32)arg0, 0xD, func_80156370(0xD) & 0xFFFF, 1, 0);
    r = func_801632F0(arg0);
    if (r & 1) {
        t = (u8 *)func_801632E0((s32)arg0);
        AF(p, u8 *, 0x184) = t;
        AF(p, s32, 0x44) |= 0x20;
        AF(p, u16, 0x194) = AF(t, u16, 0x36);
        AF(p, s16, 0x18A) = 0;
        AF(p, s16, 0x188) = 0;
        func_80146DE8((s32)arg0, 0, 0, 0xC0000);
        if (D_8011DB10 == 0) {
            func_80015978(arg0 + 4, arg0 + 0x58);
        } else {
            ((void (*)())D_8011DB10)(arg0 + 0x58);
            func_80015954(arg0 + 0x58, arg0 + 4);
        }
        AF(arg0, s16, 0x66) = 0;
        func_80147364(4, 0x448);
        func_80146AB4(0x30, (s32)arg0, 0, 0, 0, 0, AF(p, s32, 0x184));
        func_80146CA0(arg0);
    } else if (r & 6) {
        func_80146DE8((s32)arg0, 0, 0, 0xC0000);
        func_80146E90(arg0, 0x20);
        func_80147364(4, 0x448);
        func_80146CA0(arg0);
        func_80146CA0(arg0);
    }
    func_80163764((s32)arg0);
}

extern SVECTOR D_801EC890;
extern s32 func_80012F74();
extern u32 func_801656D0();

void func_80163EC8(u8 *arg0) {
    SVECTOR v = D_801EC890;
    SVECTOR out;
    SVECTOR pos;
    u8 *p = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);
    u8 *o;
    u8 *q;
    s16 t;
    u8 d;

    func_80162D88((s32)arg0);
    q = AF(p, u8 *, 0x184);
    if (q == NULL) {
        AF(p, u16, 0x18A) = 0;
        AF(p, s16, 0x188) = 0;
        AF(p, s32, 0x44) &= ~0x20;
        func_80146CA0(arg0);
        func_80146CA0(arg0);
        return;
    }
    if (AF(q, s16, 0x36) != AF(p, u16, 0x194)) {
        AF(p, u8 *, 0x184) = NULL;
        AF(p, u16, 0x18A) = 0;
        AF(p, s16, 0x188) = 0;
        AF(p, s32, 0x44) &= ~0x20;
        func_80146CA0(arg0);
        func_80146CA0(arg0);
        return;
    }
    AF(p, u16, 0x18A)++;
    if (!(D_800B99DA & 3)) {
        t = AF(p, s16, 0x188);
        d = AF(arg0, u8, 0x67);
        if (t >= d) {
            AF(p, s16, 0x188) = t - d;
        } else {
            AF(p, s16, 0x188) = 0;
        }
        if (AF(p, s16, 0x188) < 0) {
            AF(p, s16, 0x188) = 0;
        }
    }
    AF(arg0, u16, 0x66) += 0x40;
    if (func_80148800((s32)p) & 0x80) {
        AF(arg0, u16, 0x66) = 0;
        AF(p, s16, 0x188) += (u8)func_801656D0(p, (u8)func_8014CA00(AF(p, u8 *, 0x184)));
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = 0x4000;
        AF(m, s32, 0x48) = AF(arg0, s16, 0x58);
        AF(m, s32, 0x4C) = AF(arg0, s16, 0x5A);
        AF(m, s32, 0x50) = AF(arg0, s16, 0x5C);
        func_80149350((s32)arg0, (s32)&v, (s32)&out);
        AF(arg0, s16, 6) = out.vx;
        AF(arg0, s16, 0xA) = out.vy;
        AF(arg0, s16, 0xE) = out.vz;
    }
    if (AF(p, s16, 0x188) > 0x80) {
        AF(p, s16, 0x188) = 0x80;
    }
    if (AF(p, s16, 0x188) >= 0x80) {
        o = AF(p, u8 *, 0x184);
        if (o != NULL) {
            func_80015978(o + 4, &pos);
            pos.pad = 0;
            func_8014C4AC(o, 0xE, func_80156370(0xE) & 0xFFFF, &pos, AF(m, s16, 0x12));
            func_80146994(0x33, arg0, 0, o);
        }
        goto tail;
    }
    if (AF(p, s16, 0x18A) >= 0x80 || AF(p, u16, 0) == 0x19) {
        o = AF(p, u8 *, 0x184);
        if (o != NULL) {
            func_80015978(o + 4, &pos);
            pos.pad = 0;
            func_8014C4AC(o, 0x21, func_80156370(0x21) & 0xFFFF, &pos, AF(m, s16, 0x12));
            if (AF(o, s32, 0xB4) & 0x40000) {
                func_8014AD30(arg0, &pos, 0, AF(o, s16, 0x60));
            }
        }
tail:
        /* MATCH-TRICK: K&R call cast, the original uses func_8014CA00's v0 without the s16 sign extension */
        AF(p, u32, 0x184) = ((s32 (*)())func_8014CA00)(o);
        if (AF(p, u32, 0x184) >= 0x1F) {
            AF(p, u32, 0x184) = 0;
        }
        func_80146E90(arg0, 0x20);
        AF(p, s32, 0x44) &= ~0x20;
        func_80147324(0x449);
        func_80146CA0(arg0);
        func_80146CA0(arg0);
    }
    AF(m, s16, 0x18) = AF(m, s16, 0x1A) = func_80012F74(AF(m, s16, 0x1A), 0x1800, 3, 1);
    AF(arg0, s16, 6) = func_80012F74(AF(arg0, s16, 6), AF(arg0, s16, 0x58), 8, 1);
    AF(arg0, s16, 0xA) = func_80012F74(AF(arg0, s16, 0xA), AF(arg0, s16, 0x5A), 8, 1);
    AF(arg0, s16, 0xE) = func_80012F74(AF(arg0, s16, 0xE), AF(arg0, s16, 0x5C), 8, 1);
}

void func_80164270(s32 arg0) {
    func_80162D88(arg0);
    func_80146E90(arg0, 0x20);
    func_80146CA0(arg0);
}

extern void func_80164418();

void func_801642AC(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    func_80164418();
    if ((func_80013328(temp_s0 + 4, (s32) (arg0 + 4)) < 0x28) || (func_80146E98((s32) arg0) != 0)) {
        func_80146E90((s32) arg0, 8);
        func_80147324(0x44A);
        func_80146CA0((s32) arg0);
    }
    func_80163764((s32) arg0);
}

void func_8016432C(u8 *arg0) {
    s32 temp_a0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0x4C);
    func_80164418();
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s0, s16, 0x18A) = 0;
        if ((AF(temp_s0, s32, 0x184) != 0) && (temp_a0 = AF(temp_s0, s32, 0x44), ((temp_a0 & 0x400) == 0)) && !(AF(temp_s0, s32, 0x1F8) & 0x80FFFFFF)) {
            AF(temp_s0, s32, 0x44) = (s32) (temp_a0 | 0x10);
            if (AF(temp_s0, s16, 0x188) < 0x80) {
                AF(temp_s0, s32, 0x184) = (s32) (AF(temp_s0, s32, 0x184) | 0x80000000);
            }
            AF(temp_s0, s16, 0x188) = 0;
        } else {
            AF(temp_s0, s32, 0x184) = 0;
            AF(temp_s0, s16, 0x188) = 0;
        }
        AF(temp_s0, s32, 0x44) = (s32) (AF(temp_s0, s32, 0x44) & ~4);
        UpdateFlag10Part21(temp_s0);
        func_80147364(4, 0x449);
        func_80147324(0x44B);
        func_80162CCC((s32) arg0);
    }
}

void func_80164410(void) {
}

void func_80164418(s32 arg0) {
    u8 *temp_a1;
    u8 *temp_s1;
    SVECTOR v;
    SVECTOR r;

    temp_a1 = AF(arg0, u8 *, 0x4C);
    temp_s1 = AF(arg0, u8 *, 0x20);
    v.vx = AF(temp_a1, u16, 6) - AF(arg0, u16, 6);
    v.vy = AF(temp_a1, u16, 0xA) - (AF(arg0, u16, 0xA) + 0x1E);
    v.vz = AF(temp_a1, u16, 0xE) - AF(arg0, u16, 0xE);
    r.vy = ratan2(v.vx, v.vz);
    if (v.vz < 0) {
        v.vz = -v.vz;
    }
    if (v.vz == 0) {
        r.vx = 0;
    } else {
        r.vx = ratan2(-v.vy, v.vz);
    }
    AF(temp_s1, u16, 0x14) = (AF(temp_s1, u16, 0x14) + 0x71) & 0xFFF;
    AF(temp_s1, s16, 0x10) = func_80012ABC(AF(temp_s1, s16, 0x10), r.vx, 2);
    AF(temp_s1, s16, 0x12) = func_80012ABC(AF(temp_s1, s16, 0x12), r.vy, 2);
    func_801630C4(arg0, 0, 0, 0x8000);
    func_80162FC0(arg0);
    func_80162D88(arg0);
}

extern s32 func_80012DBC();

void func_80164530(u8 *arg0) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    u8 *a;
    u8 *best;
    s32 t;
    u8 *b;
    s32 bestAng;
    s32 d;
    s32 bestD;
    s16 dz;
    s16 dx;

    p = AF(arg0, u8 *, 0x20);
    bestD = 0x1000;
    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0x5C) & 0x2000) {
            t = func_8014C59C(arg0, a);
            d = func_80012A60((s16)t, AF(p, s16, 0x12));
            if ((s16)d < 0x200 && (s16)d < (s16)bestD) {
                bestAng = t;
                bestD = d;
                best = a;
            }
        }
    }
    if ((s16)bestD != 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = func_80012DBC(AF(p, s16, 0x12), (s16)bestAng, 10, 1);
        if (AF(w, s16, 0xA3D8) == 0x30A0) {
            b = (u8 *)(AF(best, u32, 0x58) & 0x0FFFFFFF);
            if (b != 0) {
                dz = (AF(best, u16, 0xE) + (AF(b, s16, 0xC) + AF(b, s16, 0xE)) / 2) - AF(arg0, u16, 0xE);
                dx = (AF(best, u16, 6) + (AF(b, s16, 4) + AF(b, s16, 6)) / 2) - AF(arg0, u16, 6);
                t = ratan2((AF(best, s16, 0xA) + (AF(b, s16, 8) + AF(b, s16, 0xA)) / 2) - AF(arg0, s16, 0xA), (s16)SquareRoot0(dz * dz + dx * dx)) & 0xFFF;
                AF(AF(arg0, u8 *, 0x20), s16, 0x10) = t;
            }
        }
    }
}

void func_80164744(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    D_80190110[AF(arg0, u16, 2)]();
    if (temp_s0 != 0) {
        func_80162D28((s32) arg0);
    }
}

extern u8 D_800DF2E0;
extern u8 D_801900D8;
extern s16 D_80190108;
extern s16 D_8019010A;
extern s16 D_8019010C;
extern void func_8001C810();
extern void func_80164A74();
extern void func_80164930();

void func_801647A4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, &D_800DF2E0);
        AF(temp_v0, u8 *, 0x80) = &D_801900D8;
        AF(temp_v0, s32, 4) |= 0x50000000;
        AF(temp_v0, u16, 0x2C) |= 0xB0;
        D_8019010C = 0x80;
        D_8019010A = 0x80;
        D_80190108 = 0x80;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, s16, 0x62) = 0x200;
        func_80164A74(arg0);
        func_80146CA0(arg0);
    } else {
        func_80164930(arg0);
    }
}

void func_80164864(u8 *arg0) {
    s32 var_s2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v1 = AF(arg0, u16, 0x60) + AF(arg0, u16, 0x62);
    AF(arg0, u16, 0x60) = temp_v1;
    AF(temp_s0, u16, 0x1A) = (u16) (AF(temp_s0, u16, 0x1A) + temp_v1);
    var_s2 = 0x2000;
    if (AF(arg0, s32, 0x50) == 0) {
        var_s2 = 0x4000;
        temp_v0 = AF(temp_s0, u16, 0x1C) + 0x100;
        AF(temp_s0, u16, 0x1C) = temp_v0;
        AF(temp_s0, u16, 0x18) = temp_v0;
        AF(temp_s0, u16, 0x12) = (u16) (AF(temp_s0, u16, 0x12) + 0x71);
        func_80164ACC((s32) arg0);
    } else {
        temp_v0_2 = AF(temp_s0, u16, 0x1C) + 0x200;
        AF(temp_s0, u16, 0x1C) = temp_v0_2;
        AF(temp_s0, u16, 0x18) = temp_v0_2;
        AF(temp_s0, u16, 0x12) = (u16) (AF(temp_s0, u16, 0x12) - 0x71);
    }
    if (var_s2 < (s16) AF(temp_s0, u16, 0x1A)) {
        func_80146CA0((s32) arg0);
    }
}

void func_80164930(u8 *arg0) {
    u8 *p;
    s32 i;
    u8 *o;
    u16 t;
    u16 u;
    s16 v;
    s32 k;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x50) == 0) {
        AF(o, u16, 0x18) = AF(o, u16, 0x1C) = AF(o, u16, 0x1C) + 0x100;
        AF(o, u16, 0x12) += 0x71;
        v = D_8019010C - 8;
        D_8019010C = v;
        D_8019010A = v;
        D_80190108 = v;
        i = 0;
        if (v < -0x80) {
            k = 0x19;
            p = &D_8011F9D0;
            do {
                if (AF(p, u16, 0) == k && AF(p, s32, 0x50) != 0) {
                    func_80162CCC(p);
                }
                i++;
                p += 0x68;
            } while (i < 20);
            func_80162CCC(arg0);
        } else {
            func_80164ACC(arg0);
        }
    } else {
        AF(o, u16, 0x18) = AF(o, u16, 0x1C) = AF(o, u16, 0x1C) + 0x40;
        u = AF(o, u16, 0x1A) - 0x200;
        AF(o, u16, 0x1A) = u;
        if ((s16)u < 0) {
            AF(o, u16, 0x1A) = 0;
        }
        AF(o, u16, 0x12) -= 0x71;
    }
}

void func_80164A74(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 o;

    o = AF(arg0, s32, 0x4C);
    func_80148534(&a, &b);
    func_80015954(&a, arg0 + 4);
    func_80149374(o, arg0 + 4);
}

void func_80164ACC(s32 arg0) {
    u8 *a;
    SVECTOR v;

    for (a = &D_801202A0; a < &D_801202A0 + 0x6480; a += 0x10C) {
        if (func_8014C308(arg0, a, 0xB, 2) != 0 && func_8014C278(arg0, (s32) a, 0x50) != 0) {
            func_80015978(a + 4, &v);
            v.pad = 0;
            func_8014C3A4(arg0, a, 0xB, &v);
            AF(a, s16, 0x60) /= 2;
        }
    }
}

void func_80164BA0(u8 *arg0) {
    D_8019011C[AF(arg0, u16, 2)]();
}

extern u8 D_801ED5E8;
extern u8 D_801ED5E9;
extern u8 D_801ED5EA;
extern u8 D_801ED5EB;
extern u8 D_801ED5EC;
extern u8 D_801ED5ED;
extern u8 D_801ED5EE;
extern u8 D_801ED5EF;
extern void func_8001CD50();
extern void func_800233CC();
extern void func_80164DD0();
extern s32 func_80164DB0();

void func_80164BDC(u8 *arg0) {
    s32 o;
    u8 *p;

    o = ((s32 (*)())func_80146578)();
    p = &D_801ED5E8;
    AF(arg0, s32, 0x20) = o;
    if (o != 0) {
        func_8001CD50(o, p);
        func_800233CC(p, 0x60);
        AF(o, s32, 4) |= 0x50000000;
        D_801ED5E9 = 0xF0;
        *p = 0xF0;
        D_801ED5EA = 0xC0;
        D_801ED5EE = 0;
        D_801ED5ED = 0;
        D_801ED5EC = 0;
        D_801ED5EF = 0;
        D_801ED5EB = 0;
        AF(o, s16, 0x1E) = 0xCCC;
        AF(o, s16, 0x10) = 0x400;
        AF(arg0, s16, 0x60) = 0x700;
        AF(arg0, s16, 0x62) = -0x60;
        func_80164DD0(arg0);
        func_80146CA0(arg0);
    } else {
        func_80164DB0(arg0);
    }
}

void func_80164CD4(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_80164E40();
    temp_v1 = AF(arg0, u16, 0x60) + AF(arg0, u16, 0x62);
    AF(arg0, u16, 0x60) = temp_v1;
    temp_v0 = AF(temp_s0, u16, 0x1A) + temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) AF(arg0, u16, 0x60) < 0) {
        func_80146CA0((s32) arg0);
    }
}

void func_80164D4C(u8 *arg0) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    if (((s32 (*)())func_80164E40)(arg0) != 0) {
        func_80146CA0(arg0);
    } else {
        AF(temp_s1, u16, 0x18) = AF(temp_s1, u16, 0x1A) = AF(temp_s1, u16, 0x1A) + 0x100;
    }
}

s32 func_80164DB0(s32 arg0) {
    return func_80162CCC(arg0);
}

void func_80164DD0(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 s2;

    s2 = AF(arg0, s32, 0x4C);
    func_80148534((s32) &a, (s32) &b);
    func_80015954(&a, arg0 + 4);
    func_80149374(s2, arg0 + 4);
    AF(arg0, u16, 0xA) -= 0x40;
}

s32 func_80164E40(void) {
    u8 *p = &D_801ED5E8;

    if (*p != 0) {
        *p -= 0x10;
    }
    if (D_801ED5E9 != 0) {
        D_801ED5E9 -= 0x10;
    }
    if (D_801ED5EA != 0) {
        D_801ED5EA -= 0x10;
    }
    return *(s32 *) p == 0;
}

void func_80164EA4(u8 *arg0) {
    D_8019012C[AF(arg0, u16, 2)]();
}

void func_80164EE0(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0x70;
    do {
        (*(s32 *)((u8 *)D_801ED634 + (var_v0) * 1)) = 0;
        var_v0 -= 0x10;
    } while (var_v0 >= 0);
    AF(arg0, s16, 0x2E) = 0x4000;
    AF(arg0, s16, 0x2C) = 0x4000;
    AF(arg0, s16, 0x60) = 0;
    AF(arg0, s16, 0x62) = 0;
    func_80165124((s32) arg0);
    AF(arg0, s16, 0x66) = 0;
    func_80146CA0((s32) arg0);
}

void func_80164F44(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    s32 var_v1;
    u16 temp_v1;
    u16 var_v0;

    AF(arg0, u16, 0x62) = (u16) (AF(arg0, u16, 0x62) + 4);
    temp_v1 = AF(arg0, u16, 0x60) + 0x40;
    AF(arg0, u16, 0x60) = temp_v1;
    temp_v0 = AF(arg0, u16, 0x2E) - temp_v1;
    AF(arg0, u16, 0x2E) = (u16) temp_v0;
    AF(arg0, s16, 0x2C) = temp_v0;
    if (temp_v0 < 0x1000) {
        AF(arg0, u16, 0x2E) = 0x1000U;
        AF(arg0, s16, 0x2C) = 0x1000;
        AF(arg0, u16, 0x60) = 0x80U;
        func_80146E90((s32) arg0, 0xE, arg2, arg3);
        func_80146CA0((s32) arg0);
    }
    func_80165124((s32) arg0);
    var_v1 = 2;
    if (AF(arg0, s16, 0x2C) < 0x2800) {
        var_v0 = AF(arg0, u16, 0x66) + 1;
    } else {
        var_v1 = 3;
        var_v0 = AF(arg0, u16, 0x66) + 1;
    }
    AF(arg0, u16, 0x66) = var_v0;
    if ((s16) var_v0 == var_v1) {
        func_80165140((s32) arg0);
        AF(arg0, u16, 0x66) = 0U;
    }
    func_801651B8((s32) arg0);
}

void func_80165024(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
    }
    func_801651B8(arg0);
}

void func_80165064(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x62) + 0x10;
    AF(arg0, u16, 0x62) = temp_v0;
    if ((s16) temp_v0 >= 0x100) {
        AF(arg0, u16, 0x62) = 0xFFU;
        func_80146CA0((s32) arg0, arg1, arg2, arg3);
    }
    func_80165124((s32) arg0);
    func_801651B8((s32) arg0);
}

void func_801650C4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x62) - 0x10;
    AF(arg0, u16, 0x62) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        func_80162CCC((s32) arg0);
        return;
    }
    func_80165124((s32) arg0);
    func_801651B8((s32) arg0);
}

s32 func_80165124(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x62);
    AF(arg0, u8, 0x50) = (s8) temp_v0;
    AF(arg0, u8, 0x51) = (s8) AF(arg0, u16, 0x62);
    AF(arg0, u8, 0x52) = (s8) AF(arg0, u16, 0x62);
    return (s32) temp_v0;
}

extern u8 D_801ED628;

void func_80165140(s32 arg0) {
    s32 (*p)[4];
    s32 i;

    p = (s32 (*)[4])&D_801ED628;
    for (i = 0; i < 8; i++) {
        if (p[i][3] == 0) {
            p[i][3] = 8;
            AF(p[i], SVECTOR, 0) = AF(arg0, SVECTOR, 0x2C);
            AF(p[i], SCol, 8) = AF(arg0, SCol, 0x50);
            return;
        }
    }
}

extern void func_80165240();

void func_801651B8(s32 arg0) {
    s32 (*p)[4];
    s32 i;

    func_80165240(arg0, arg0 + 0x2C, arg0 + 0x50);
    p = (s32 (*)[4])&D_801ED628;
    for (i = 0; i < 8; i++) {
        if (p[i][3] != 0) {
            func_80165240(arg0, p[i], &p[i][2]);
            p[i][3]--;
        }
    }
}

extern SVECTOR D_80190140[];
extern s32 D_80190160[];

void func_80165240(s32 arg0, SVECTOR *rot, SCol *col) {
    SPrimT s;
    MATRIX m;
    SPrimT *p;

    p = &s;
    func_80017DC4(rot, &m);
    ApplyMatrixSV(&m, &D_80190140[0], &p->v[0]);
    ApplyMatrixSV(&m, &D_80190140[1], &s.v[1]);
    ApplyMatrixSV(&m, &D_80190140[2], &s.v[2]);
    ApplyMatrixSV(&m, &D_80190140[3], &s.v[3]);
    s.v[0].vz = 3;
    s.tp = 0x2C;
    *(s32 *)s.uv[0] = D_80190160[2];
    *(s32 *)s.uv[1] = D_80190160[0];
    *(s32 *)s.uv[2] = D_80190160[3];
    *(s32 *)s.uv[3] = D_80190160[1];
    *(SCol *)&s.r = *col;
    s.code = 0x50000000;
    func_80016ED4(p);
}

void func_8016533C(void) {
    D_80126CF8 = D_80078EC1;
    func_801659DC((s32) &D_80126B58);
}

void func_80165374(s32 arg0) {
    func_801653F4();
    func_80147078(arg0, 0x17);
    AF(arg0, u8, 0x197) = 1;
    func_80165580(arg0);
}

s32 func_801653B8(s32 arg0) {
    func_801653F4();
    func_80147078(arg0, 0x17);
    func_80165580(arg0);
}

extern s32 func_80165624();

void func_801653F4(void) {
    s32 m = D_800B9A08;

    D_80078EC5 = 0;
    D_80078EC1 &= 0x7F;
    if (func_80165624() != 0 || (D_80078EC1 == 0x1A && m != 0x305C && m != 0x305D && m != 0x305E && m != 0x305F &&
        m != 0x3060 && m != 0x3061 && m != 0x3062 && m != 0x3063 && m != 0x3064 && m != 0x3065 && m != 0x3066)) {
        D_80078EC5 = 0x80;
    }
}

extern s32 func_800CAE0C();

void func_801654A8(u8 *arg0) {
    u8 *c = &D_80078E78;

    if (AF(arg0, u16, 0) != 0x16 && AF(arg0, u16, 0) != 0x1A && !(AF(arg0, s32, 0x1F8) & 0x80FFFFFF) &&
        (func_80165658(arg0, D_80078EC1) & 0x80)) {
        D_80190170[D_80078EC1 & 0x7F](arg0);
    }
    if (AF(arg0, u16, 0) != 0x16 && AF(arg0, u16, 0) != 0x1A && c[0x49] == 0x19) {
        func_800CAE0C(arg0);
    }
}

void func_80165580(s32 arg0, s32 arg1) {
    if (D_80078EC5 & 0x80) {
        func_80165B28();
        return;
    }
    D_80190170[(D_80078EC1 & 0x7F)]();
}

void func_801655E4(s32 arg0) {
    func_8014BD60(arg0, func_80165658(arg0, D_80078EC1 & 0x7F) & 0x7F);
}

s32 func_80165624(u8 *obj) {
    return D_80078EB8 < (func_80165658(obj, D_80078EC1 & 0x7F) & 0x7F);
}

u32 func_80165658(u8 *obj, u32 ability) {
    return D_801901EC[ability & 0x7F];
}

void func_80165670(u8 *obj, u32 ability) {
    D_80078EC8 = D_8019020C[ability & 0x7F];
}

void func_80165694(u8 *obj) {
    if ((*(u32 *)(obj + 0x1F8) & 0x80FFFFFF) == 0 && D_80078EC8 != 0) {
        D_80078EC8--;
    }
}

u32 func_801656D0(u8 *obj, u32 ability) {
    return D_80190288[ability & 0x7F];
}

u32 func_801656E8(u8 *obj, u32 ability) {
    return D_801902A8[ability & 0x7F];
}

u32 func_80165700(u8 *obj, u32 ability) {
    return D_801902C8[ability & 0x7F];
}

void func_80165718(u8 *obj) {
    switch (D_80078EC1) {
    case 3:
    case 12:
    case 24:
        func_80165A20(obj);
        break;
    }
}

void func_80165770(u8 *obj) {
    if (D_80078EC1 == 12) {
        func_800CAF6C(obj);
    }
}

void func_801657A0(void) {
    if (D_80078EC3 == 0) {
        D_80078EC3 = 1;
        func_801657D8();
    }
}

void func_801657D8(void) {
    D_80078ECC = D_80078E94;
    D_80078ED0 = D_80078E9C;
    D_80078ED4 = D_80078EA0;
    D_80078ED8 = D_80078EA4;
    D_80078EDC = D_80078EA8;
    D_80078EE0 = D_80078EBB;
}

void func_80165840(void) {
    if (D_80078EC3 != 0) {
        D_80078EC3 = 0;
        func_80165874();
    }
}

void func_80165874(void) {
    D_80078E94 = D_80078ECC;
    D_80078E9C = D_80078ED0;
    D_80078EA0 = D_80078ED4;
    D_80078EA4 = D_80078ED8;
    D_80078EA8 = D_80078EDC;
    D_80078EBB = D_80078EE0;
}

void func_801658DC(void) {
    D_80078EC4 = 0;
}

void func_801658EC(void) {
    D_80078EC4 = 1;
}

u8 func_80165900(void) {
    return D_80078EC4;
}

u8 func_80165910(void) {
    u8 used;
    s32 cur = D_80078EC4;
    used = cur;
    if (cur == 0) {
        D_80078EC4 = 1;
    }
    return used;
}

void func_80165938(void) {
    D_8012672C = 0;
    D_8012811C = 0;
    D_80126B08 = 0;
}

void func_80165958(void) {
    D_8012672C++;
}

s32 func_80165978(void) {
    return D_8012672C;
}

void func_80165988(void) {
    D_8012811C++;
}

s32 func_801659A8(void) {
    return D_8012811C;
}

void func_801659B8(void) {
    D_80126B08 = 1;
}

s32 func_801659CC(void) {
    return D_80126B08;
}

void func_801659DC(u8 *obj) {
    D_801902E8[obj[0x1A0]](obj);
}

void func_80165A18(void) {
}

void func_80165A20(u8 *obj) {
    func_80165A78(obj);
    func_80165A50(obj);
}

void func_80165A50(u8 *obj) {
    D_80078EC1 = 0;
    D_80078EC2 = 0;
    D_80078EC3 = 0;
    D_80078EC4 = 0;
}

void func_80165A78(u8 *obj) {
    func_80165AC8(obj);
    obj[0x197] = 0;
    *(s32 *)(obj + 0x44) &= ~8;
    *(u16 *)(*(u8 **)(obj + 0x20) + 0x2C) &= 0xFFDF;
}

void func_80165AC8(u8 *arg0) {
    D_80190364[(D_80078EC1 & 0x7F)]();
}

void func_80165B08(void) {
}

void func_80165B10(void) {
}

void func_80165B18(void) {
}

void func_80165B20(void) {
}

extern void (*D_801903E0[])();

void func_80165B28(u8 *arg0) {
    AF(arg0, s32, 0x44) |= 8;
    D_801903E0[AF(arg0, u8, 0x197)]();
}

void func_80165B6C(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80165BB4(arg0);
        AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
    }
}

void func_80165BB4(s32 arg0) {
    func_80154150(arg0, 0x22);
    StartFace(arg0, 0x1A);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_80165BFC(s32 arg0) {
    if ((func_80161208(arg0) == 0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        func_80165C58(arg0);
        func_801599A4(arg0);
        func_80159B3C(arg0);
    }
}

s32 func_80165C58(s32 arg0) {
    return StartFace(arg0, 0x11);
}

s32 func_80165C78(void) {
    return func_80016714((s32) &D_8011D030, 0xA50);
}

extern s32 D_80126728;

void func_80165CA0(void) {
    s32 i;
    u8 *p;
    u8 *q;
    u8 *a;

    i = 0;
    p = &D_8011D030;
    for (; i < 30; i++) {
        if (AF(p, u16, 0) != 0) {
            ((void (**)())D_80126728)[AF(p, u16, 0)](p);
        }
        p += 0x58;
    }
    for (i = 0; i < 30; i++) {
        q = &D_8011D030 + i * 0x58;
        a = AF(q, u8 *, 0x20);
        if (a != 0) {
            if (AF(a, u16, 0) == 1) {
                AF(a, s32, 0x48) = AF(a, s16, 8) = AF(q, s16, 6);
                AF(a, s32, 0x4C) = AF(a, s16, 0xA) = AF(q, s16, 0xA);
                AF(a, s32, 0x50) = AF(a, s16, 0xC) = AF(q, s16, 0xE);
                AF(a, u16, 0x2C) |= 1;
            } else if (AF(a, u8 *, 0x34) != 0) {
                AF(AF(a, u8 *, 0x34), s32, 0x14) = AF(a, s16, 8) = AF(q, s16, 6);
                AF(AF(a, u8 *, 0x34), s32, 0x18) = AF(a, s16, 0xA) = AF(q, s16, 0xA);
                AF(AF(a, u8 *, 0x34), s32, 0x1C) = AF(a, s16, 0xC) = AF(q, s16, 0xE);
            } else {
                AF(a, s16, 8) = AF(q, s16, 6);
                AF(a, s16, 0xA) = AF(q, s16, 0xA);
                AF(a, s16, 0xC) = AF(q, s16, 0xE);
            }
        }
    }
}

void func_80165E2C(u16 *arg0) {
    func_8001534C(0, (s32) &D_801EC898, 0x80, 0x80, /* extra? */ 0, /* extra? */ 0);
    func_800153CC(1, (s32) *arg0, 0xA8, 0x80, /* extra? */ 0x40, /* extra? */ 0);
}

extern void func_80165FA4();
extern void func_80167DBC();
extern void func_80167AE0();

void func_80165E90(void) {
    Player *p = &D_80126B58;
    SVECTOR a;
    SVECTOR b;

    if ((D_80126B9C & 0x10000400) == 0x10000000 && AF(D_80126B78, s32, 4) >= 0 && AF(D_80126B78, s32, 0x20) != 0) {
        func_801484B0((s32) &a, (s32) &b);
        func_80165FA4((s32) p, (s32) &a, (s32) &b);
        func_80167DBC((s32) p, (s32) &a, (s32) &b);
    }
    if ((AF(p, s32, 0x44) & 0x20020400) == 0x20000000 && AF(p->model, s32, 4) >= 0 && AF(p->model, s32, 0x20) != 0) {
        func_80148534((s32) &a, (s32) &b);
        func_80165FA4((s32) p, (s32) &a, (s32) &b);
        func_80167AE0((s32) p, (s32) &a, (s32) &b);
    }
}

extern void func_80020F34();

void func_80165FA4(s32 arg0, SVECTOR *arg1, SVECTOR *arg2) {
    MATRIX m;

    func_80013F3C(&m);
    func_80020F34(&m, AF(arg0, s32, 0x20) + 0x18);
    ApplyMatrixSV(&m, arg1, arg1);
    ApplyMatrixSV(&m, arg2, arg2);
}

void func_80166018(u8 *arg0) {
    D_801903EC[AF(arg0, u16, 2)]();
}

extern u8 D_800D387C;
extern u8 D_800D3888;
extern void func_801661CC();
extern s32 rsin();
extern s32 rcos();

void func_80166054(u8 *arg0) {
    u8 *s0;
    s16 ang;
    s16 sh;
    s32 x, z;
    s32 s, c;
    s32 p;
    u32 t;

    s0 = AF(arg0, u8 *, 0x34);
    func_80149374(s0, arg0 + 4);
    if (AF(arg0, s32, 0x2C) != 0) {
        sh = 8;
        if (AF(arg0, s32, 0x2C) != 3) {
            ang = AF(AF(s0, u8 *, 0x20), u16, 0x12);
        } else {
            t = AF(arg0, u32, 0x30);
            ang = t & 0xFFF;
            sh = (t >> 12) & 0xF;
        }
        s = rsin(ang) << sh;
        x = -s;
        c = rcos(ang) << sh;
        z = -c;
        if (AF(arg0, s32, 0x2C) == 2) {
            x = s;
            z = c;
        }
        AF(arg0, s32, 0x10) = x;
        AF(arg0, s32, 0x18) = z;
    }
    AF(arg0, s32, 0x14) = 0xFFFF0000;
    func_800D1FC8(arg0, 6);
    p = func_800D21C4(arg0, &D_800D387C, 0x9C);
    if (p != 0) {
        AF(arg0, s32, 0x20) = p;
        AF(p, s32, 4) |= 0x50000040;
        if (AF(arg0, s32, 0x2C) != 3) {
            AF(p, u16, 0x18) = 0x2000;
        } else {
            AF(p, u16, 0x18) = AF(arg0, u16, 0x32);
        }
        AF(p, u16, 0x1A) = AF(p, u16, 0x18);
        func_80128EA8(p, arg0 + 0x24, &D_800D3888);
        func_801661CC(arg0);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_801661CC(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_800D22E4(arg0);
    temp_v0 = AF(arg0, s32, 0x10);
    temp_a0 = AF(arg0, s32, 0x18);
    AF(arg0, s32, 0x10) = (s32) ((temp_v0 >> 1) + (temp_v0 >> 2));
    AF(arg0, s32, 0x18) = (s32) ((temp_a0 >> 1) + (temp_a0 >> 2));
}

void func_80166244(StageActor *arg0) {
    func_80146A6C(3, arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), (s32) AF(arg0, s16, 0xE), 0x08F8FFF8, -0x1FFF5000);
}

void func_8016629C(u8 *arg0) {
    func_80146A6C(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x0F88FFF2, /* extra? */ 0xE000C000);
}

void func_801662F4(u8 *arg0) {
    func_80146A6C(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x08FEFFF4, /* extra? */ 0xE000C000);
}

void func_8016634C(u8 *arg0) {
    func_80146A6C(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x0EEEFFF8, /* extra? */ 0x6800B000);
}

void func_801663A4(u8 *arg0) {
    func_80146A6C(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x0CCCFFF8, /* extra? */ 0xE000C000);
}

void func_801663FC(u8 *arg0) {
    D_801903F4[AF(arg0, u16, 2)]();
}

extern void func_801665B4();

void func_80166438(u8 *arg0) {
    u8 *o;
    s32 a2;

    a2 = 0x9B;
    if (!(AF(arg0, s32, 0x30) & 0x10000000)) {
        a2 = 0x9C;
    }
    o = (u8 *)func_800D21C4(arg0, &D_800D387C, a2);
    if (o != 0) {
        AF(arg0, u8 *, 0x20) = o;
        AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(arg0, s32, 0x30) & 0x7FFF;
        if (AF(arg0, s32, 0x30) & 0x8000) {
            func_800D1FC8(arg0, 6);
        }
        if (AF(arg0, s32, 0x30) < 0) {
            AF(o, s32, 4) |= 0x50000000;
        } else if (AF(arg0, s32, 0x30) & 0x08000000) {
            AF(o, s32, 4) = 0x60000000;
        }
        if (!(AF(arg0, s32, 0x30) & 0x40000000)) {
            AF(o, s32, 4) |= 0x40;
        } else {
            AF(o, s32, 4) &= ~0x40;
        }
        if (AF(arg0, s32, 0x30) & 0x20000000) {
            AF(o, u8, 0x24) = (AF(arg0, u32, 0x2C) >> 20) & 0xF0;
            AF(o, u8, 0x25) = (AF(arg0, u32, 0x2C) >> 16) & 0xF0;
            AF(o, u8, 0x26) = (AF(arg0, u32, 0x2C) >> 12) & 0xF0;
        }
        func_80128EA8(o, arg0 + 0x24, &D_800D3888);
        AF(arg0, s16, 0x16) = AF(arg0, s32, 0x2C);
        AF(arg0, s16, 2)++;
        func_801665B4(arg0);
    } else {
        func_80146C3C(arg0);
    }
}

void func_801665B4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_800D22E4(arg0);
    temp_v0 = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x14) = (s32) (temp_v0 - (temp_v0 >> 3));
}

void func_80166618(u8 *arg0) {
    D_801904BC[AF(arg0, u16, 2)]();
}

void func_80166654(u8 *arg0) {
    D_801904CC[AF(arg0, u16, 2)]();
}

extern MATRIX D_800AE620;
extern u8 D_801ED6A8;

s32 func_80166690(s32 arg0, s32 arg1) {
    SPrim s;
    MATRIX m;
    s16 id;
    u8 *p;
    u8 *e;
    s16 j;
    s16 c;
    s16 d;
    s16 n;
    s16 cnt;

    m = D_800AE620;
    s.code = 0x50000000;
    id = arg0;
    p = &D_801ED6A8 + id * 0xC4;
    cnt = 0;
    if (p[0] == 0) {
        return 0;
    }
    e = p + 4;
    j = p[1];
    c = p[3];
    d = c >> 1;
    n = p[2];
    while (--n != -1) {
        u8 *q = e + j * 12;
        s.v[0].vx = AF(q, u16, 0);
        s.v[0].vy = AF(q, u16, 2);
        s.v[0].vz = AF(q, u16, 4);
        s.v[1].vx = AF(q, u16, 6);
        s.v[1].vy = AF(q, u16, 8);
        s.v[1].vz = AF(q, u16, 0xA);
        cnt++;
        if (id < 2) {
            if ((s16)arg1 == 0) {
                s.c[0].b = s.c[1].b = c;
                s.c[0].r = s.c[1].r = s.c[0].g = s.c[1].g = d;
            } else {
                s.c[0].b = s.c[1].b = d = (c >> 1) + (c >> 3);
                s.c[0].r = s.c[1].r = s.c[0].g = s.c[1].g = c;
            }
        } else {
            s.c[0].r = s.c[1].r = c;
            s.c[0].g = s.c[1].g = s.c[0].b = s.c[1].b = d;
        }
        j--;
        if (j < 0) {
            j = 15;
        }
        q = e + j * 12;
        s.v[2].vx = AF(q, u16, 0);
        s.v[2].vy = AF(q, u16, 2);
        s.v[2].vz = AF(q, u16, 4);
        s.v[3].vx = AF(q, u16, 6);
        s.v[3].vy = AF(q, u16, 8);
        s.v[3].vz = AF(q, u16, 0xA);
        c -= 0x10;
        d -= 0x10;
        if (d < 0) {
            d = 0;
        }
        if (id < 2) {
            if ((s16)arg1 == 0) {
                s.c[2].b = s.c[3].b = c;
                s.c[2].r = s.c[3].r = s.c[2].g = s.c[3].g = d;
            } else {
                s.c[2].b = s.c[3].b = d;
                s.c[2].r = s.c[3].r = s.c[2].g = s.c[3].g = c;
            }
        } else {
            s.c[2].r = s.c[3].r = c;
            s.c[2].g = s.c[3].g = s.c[2].b = s.c[3].b = d;
        }
        func_80017758(&s, &m);
    }
    return cnt;
}

extern void RotTransSV();
extern s32 VectorNormalSS();

s32 func_80166994(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    SVECTOR d;
    s32 flag;
    u8 *p;
    s32 obj;
    u8 t;
    s16 id;
    s16 mode;
    s16 div;

    mode = arg1;
    id = arg2;
    div = arg3;
    p = &D_801ED6A8 + id * 0xC4;
    obj = AF(arg0, s32, 0x34);
    switch (mode) {
    case 0:
        p[0] = 1;
        p[2] = 0;
        p[1] = 0;
        p[3] = 0xF4;
        break;
    case 1:
        c.vx = AF(p + ((p[1] * 3) << 2), u16, 4);
        c.vy = AF(p + ((p[1] * 3) << 2), u16, 6);
        c.vz = AF(p + ((p[1] * 3) << 2), u16, 8);
        d.vx = AF(p + ((p[1] * 3) << 2), u16, 0xA);
        d.vy = AF(p + ((p[1] * 3) << 2), u16, 0xC);
        d.vz = AF(p + ((p[1] * 3) << 2), u16, 0xE);
        if (++p[1] >= 16) {
            p[1] = 0;
        }
        if (p[2] < 15) {
            p[2]++;
        }
        break;
    case 2:
        t = p[3] - 0x10;
        p[3] = t;
        if (t < 0x10) {
            p[0] = 0;
            return 1;
        }
        if (p[2] >= 2) {
            if ((t >> 4) < p[2]) {
                p[2]--;
            }
        }
        return 0;
    }
    if (id < 2) {
        func_801484B0((s32)&a, (s32)&b);
    } else {
        func_80148534((s32)&a, (s32)&b);
    }
    func_80165FA4(obj, (s32)&a, (s32)&b);
    func_80149350(obj, (s32)&a, (s32)&a);
    RotTransSV(&b, &b, &flag);
    if (mode != 0) {
        c.vx = (a.vx + c.vx) >> 1;
        c.vy = (a.vy + c.vy) >> 1;
        c.vz = (a.vz + c.vz) >> 1;
        d.vx = (b.vx + d.vx) >> 1;
        d.vy = (b.vy + d.vy) >> 1;
        d.vz = (b.vz + d.vz) >> 1;
        c.vx -= d.vx;
        c.vy -= d.vy;
        c.vz -= d.vz;
        VectorNormalSS(&c, &c);
        c.vx = d.vx + c.vx / div;
        c.vy = d.vy + c.vy / div;
        c.vz = d.vz + c.vz / div;
        AF(p + ((p[1] * 3) << 2), u16, 4) = c.vx;
        AF(p + ((p[1] * 3) << 2), u16, 6) = c.vy;
        AF(p + ((p[1] * 3) << 2), u16, 8) = c.vz;
        AF(p + ((p[1] * 3) << 2), u16, 0xA) = d.vx;
        AF(p + ((p[1] * 3) << 2), u16, 0xC) = d.vy;
        AF(p + ((p[1] * 3) << 2), u16, 0xE) = d.vz;
        if (++p[1] >= 16) {
            p[1] = 0;
        }
        if (p[2] < 15) {
            p[2]++;
        }
    }
    AF(p + ((p[1] * 3) << 2), u16, 4) = a.vx;
    AF(p + ((p[1] * 3) << 2), u16, 6) = a.vy;
    AF(p + ((p[1] * 3) << 2), u16, 8) = a.vz;
    AF(p + ((p[1] * 3) << 2), u16, 0xA) = b.vx;
    AF(p + ((p[1] * 3) << 2), u16, 0xC) = b.vy;
    AF(p + ((p[1] * 3) << 2), u16, 0xE) = b.vz;
    return 0;
}

extern u8 D_801ED6A8;

void func_80166F58(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 x = (s16)arg1;
    s32 y = (s16)arg2;
    s16 a = x;
    s16 b = y;
    s16 i;
    u8 *p;
    s32 same;

    for (i = 0, p = &D_8011D030; i < 30; i++, p += 0x58) {
        if (p != arg0) {
            u16 t = AF(p, u16, 0);
            if (t == a || t == b) {
                same = x == y;
                if (!same || AF(p, s32, 0x2C) == AF(arg0, s32, 0x2C)) {
                    func_80146C3C(p);
                }
            }
        }
    }
    func_80016714(&D_801ED6A8 + (s16)arg3 * 0xC4, 0xC4);
}

void func_8016706C(s32 arg0) {
    s16 i;
    u8 *p;
    s16 id = arg0;

    for (i = 0, p = &D_8011D030; i < 0x1E; i++, p += 0x58) {
        if (AF(p, u16, 0) == id) {
            func_80146C3C(p);
        }
    }
}

extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern s16 D_80126CE0;
extern u8 D_801903FC[];
extern u8 D_80190410[];
extern u8 D_80190424[];
extern void func_800D20C0();
extern void func_80017E68();
extern void func_800D23D0();

void func_801670E4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR pos;
    SVECTOR rot;
    VECTOR w;
    SPrim s;
    MATRIX m;
    MATRIX m2;
    u8 *p;
    s16 i;
    s32 obj;

    obj = AF(arg0, s32, 0x34);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[1].b = 0x70;
    s.c[1].r = s.c[1].g = AF(arg0, u8, 0x12);
    pos.vx = arg1;
    pos.vy = arg2;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    pos.vz = arg3;
    func_80149350(obj, (s32)&pos, (s32)&pos);
    AF(arg0, s32, 0x4C) = (s16)(AF(arg0, u16, 6) = pos.vx);
    AF(arg0, s32, 0x50) = (s16)(AF(arg0, u16, 0xA) = pos.vy);
    AF(arg0, s32, 0x54) = (s16)(AF(arg0, u16, 0xE) = pos.vz);
    func_800D20C0(&pos, &rot, 7);
    func_80017E68(&pos, &m);
    func_800D23D0(&rot);
    RotMatrixYXZ(&rot, &m);
    for (p = D_80190410, i = 0; i < 4; i++) {
        s.v[0].vx = (s8)*p++;
        s.v[0].vy = (s8)*p++;
        s.v[2].vx = (s8)*p++;
        s.v[2].vy = (s8)*p++;
        s.v[3].vx = (s8)*p++;
        s.v[3].vy = (s8)*p++;
        p -= 2;
        func_80017758(&s, &m);
    }
    w.vx = D_801269A4 - pos.vx;
    w.vy = D_801269A8 - pos.vy;
    w.vz = D_801269AC - pos.vz;
    s.c[1].g = 0xA0;
    s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.c[1].r = s.c[1].b = 0x10;
    for (p = D_801903FC, i = 0; i < 4; i++) {
        s.v[0].vx = (s8)*p++;
        s.v[0].vz = (s8)*p++;
        s.v[2].vx = (s8)*p++;
        s.v[2].vz = (s8)*p++;
        s.v[3].vx = (s8)*p++;
        s.v[3].vz = (s8)*p++;
        p -= 2;
        func_80017758(&s, arg0 + 0x38);
    }
    if (AF(arg0, s32, 0x30) > 0) {
        s32 k = rot.vx >> 6;
        pos.vx += k;
        pos.vy += k;
        pos.vz += k;
        func_80017E68(&pos, &m);
        pos.vx = pos.vy = pos.vz = ((u32)AF(arg0, s32, 0x30) >> 1) + (D_80126CE0 << 5);
        func_80017DC4(&pos, &m2);
        MulMatrix2(&m2, &m);
        s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
        s.c[1].g = AF(arg0, u8, 0x12) + 0x60;
        s.c[1].r = s.c[1].b = 0x20;
        s.c[0].g = s.c[2].g = s.c[3].g = s.c[0].r = s.c[0].b = s.c[2].r = s.c[2].b = s.c[3].r = s.c[3].b = 0;
        for (p = D_80190424, i = 0; i < 8; i++) {
            s.v[0].vx = (s8)*p++;
            s.v[0].vy = (s8)*p++;
            s.v[2].vx = (s8)*p++;
            s.v[2].vy = (s8)*p++;
            s.v[3].vx = (s8)*p++;
            s.v[3].vy = (s8)*p++;
            p -= 2;
            func_80017758(&s, &m);
        }
    }
}

void func_80167540(u8 *a) {
    u8 *p = AF(a, u8 *, 0x34);
    s32 o;

    if (AF(p, u16, 0) == 1) {
        if (AF(a, s16, 0x12) > AF(a, s16, 0x10)) {
            if (AF(a, s32, 0x1C) > 0) {
                AF(a, s16, 0x10) = rand() & 0x30;
                AF(a, s32, 0x1C) = -0x30;
            }
        } else if (AF(a, s32, 0x1C) < 0) {
            AF(a, s16, 0x10) = (rand() & 0x30) + 0x40;
            AF(a, s32, 0x1C) = 0x30;
        }
        AF(a, s16, 0x12) += AF(a, s32, 0x1C);
        AF(a, MATRIX, 0x38) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        func_801670E4(a, 0, 0, 0);
        o = func_80146A6C(0xE, (StageActor *)a, AF(p, s16, 6), AF(p, s16, 0xA), AF(p, s16, 0xE), 0, 0);
        if (o != 0) {
            AF(o, MATRIX, 0x38) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        }
        if (AF(AF(AF(a, u8 *, 0x34), u8 *, 0x4C), s32, 0x44) & 0x20) {
            AF(a, s32, 0x30) = 0x600;
            AF(a, u16, 2)++;
        }
    } else {
        func_80146C3C(a);
    }
}

void func_80167714(u8 *a) {
    u8 *p = AF(a, u8 *, 0x34);

    if (AF(p, u16, 0) == 1) {
        if (AF(a, s16, 0x12) > AF(a, s16, 0x10)) {
            if (AF(a, s32, 0x1C) > 0) {
                AF(a, s16, 0x10) = rand() & 0x30;
                AF(a, s32, 0x1C) = -0x20;
            }
        } else if (AF(a, s32, 0x1C) < 0) {
            AF(a, s16, 0x10) = (rand() & 0x30) + 0x40;
            AF(a, s32, 0x1C) = 0x20;
        }
        AF(a, s16, 0x12) += AF(a, s32, 0x1C);
        if (AF(a, s32, 0x2C) & 8) {
            AF(a, s32, 0x30) += 0x80;
        } else {
            AF(a, s32, 0x30) -= 0x40;
        }
        if (!(AF(a, s32, 0x2C)++ & 0xF)) {
            func_80147324(0x44E);
        }
        AF(a, MATRIX, 0x38) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        func_801670E4(a, 0, 0, 0);
        if (!(AF(AF(AF(a, u8 *, 0x34), u8 *, 0x4C), s32, 0x44) & 0x20)) {
            AF(a, u16, 2)--;
        }
    } else {
        func_80146C3C(a);
    }
}

void func_801678B4(u8 *arg0) {
    D_801904DC[AF(arg0, u16, 2)]();
}

void func_801678F0(u8 *a) {
    u8 *p = AF(a, u8 *, 0x34);
    SVECTOR r;
    s32 o;

    if (AF(p, s32, 0x44) & 0x10) {
        if (AF(a, s16, 0x12) > AF(a, s16, 0x10)) {
            if (AF(a, s32, 0x1C) > 0) {
                AF(a, s16, 0x10) = rand() & 0x30;
                AF(a, s32, 0x1C) = -0x30;
            }
        } else if (AF(a, s32, 0x1C) < 0) {
            AF(a, s16, 0x10) = (rand() & 0x30) + 0x40;
            AF(a, s32, 0x1C) = 0x30;
        }
        AF(a, s16, 0x12) += AF(a, s32, 0x1C);
        if (AF(a, s32, 0x30) != 0) {
            AF(a, s32, 0x30) -= 0xC0;
        }
        r.vx = 0x400;
        r.vy = 0;
        r.vz = D_800B99DA << 8;
        RotMatrixYXZ(&r, (MATRIX *)(a + 0x38));
        MulMatrix2(AF(p, u8 *, 0x20) + 0x34, a + 0x38);
        func_801670E4(a, -6, -0x44, -0x18);
        o = func_80146A6C(0xE, (StageActor *)a, AF(a, s16, 6), AF(a, s16, 0xA), AF(a, s16, 0xE), 0, 0);
        if (o != 0) {
            AF(o, MATRIX, 0x38) = AF(a, MATRIX, 0x38);
        }
    } else {
        func_80146C3C(a);
    }
}

void func_80167A9C(u8 *arg0) {
    D_801904E8[AF(arg0, u16, 2)]();
}

void func_80167AD8(void) {
}

extern s8 D_801905F4[];
extern s8 D_80190608[];
extern void func_80168070();

void func_80167AE0(u8 *arg0, s16 *p, s16 *q) {
    MATRIX m;
    SPrim s;
    s8 *tp;
    s16 i;

    func_80168070(arg0, p, q, &m);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    if (D_800B99DA & 1) {
        s.c[1].r = 0xA0;
    } else if (D_800B99DA & 2) {
        s.c[1].r = 0xC0;
    } else {
        s.c[1].r = 0x80;
    }
    tp = D_801905F4;
    i = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    s.c[1].g = s.c[1].b = s.c[1].r >> 2;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vy = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vy = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vy = *tp--;
        func_80017758(&s, &m);
        i++;
    } while (i < 4);
    tp = D_80190608;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.v[1].vz = -0x20;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vz = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp--;
        func_80017758(&s, &m);
        if (i == 1) {
            s.v[1].vz = 0x20;
            tp += 2;
        }
        i++;
    } while (i < 4);
    tp += 2;
    i = 0;
    s.v[0].vx = 0;
    s.v[0].vz = -0x20;
    s.c[0].r = s.c[1].r;
    s.c[0].g = s.c[0].b = s.c[1].g;
    do {
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp++;
        func_80017758(&s, &m);
        i++;
    } while (i < 2);
}

extern s8 D_80190448[];
extern s8 D_8019045C[];

void func_80167DBC(u8 *arg0, s16 *p, s16 *q) {
    MATRIX m;
    SPrim s;
    s8 *tp;
    s16 i;

    func_80168070(arg0, p, q, &m);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    if (D_800B99DA & 1) {
        s.c[1].b = 0x58;
    } else {
        s.c[1].b = 0x48;
    }
    s.c[1].r = s.c[1].g = s.c[1].b >> 2;
    if (func_80029178(0x81) & 0xFF) {
        s.c[1].g *= 4;
        s.c[1].b /= 2;
    }
    tp = D_80190448;
    i = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vy = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vy = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vy = *tp--;
        func_80017758(&s, &m);
        i++;
    } while (i < 4);
    tp = D_8019045C;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.v[1].vz = -0x12;
    s.c[1].b *= 2;
    s.c[1].r = s.c[1].g = s.c[1].g * 2;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vz = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp--;
        if (i == 2) {
            s.c[3].b = s.c[1].b;
            s.c[3].r = s.c[3].g = s.c[1].r;
        } else if (i == 3) {
            s.c[3].r = s.c[3].g = s.c[3].b = 0;
            s.c[0].b = s.c[1].b;
            s.c[0].r = s.c[0].g = s.c[1].r;
        }
        func_80017758(&s, &m);
        i++;
    } while (i < 4);
}

extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern void func_800D20C0();
extern void func_80017E68();
extern void func_800D23D0();

void func_80168070(u8 *arg0, s16 *p, s16 *q, MATRIX *m) {
    SVECTOR c;
    SVECTOR d;
    VECTOR w;

    c.vx = (p[0] + q[0]) >> 1;
    c.vy = (p[1] + q[1]) >> 1;
    c.vz = (p[2] + q[2]) >> 1;
    func_80149350((s32)arg0, (s32)&c, (s32)&c);
    func_800D20C0(&c, &d, 8);
    func_80017E68(&c, m);
    d.vx = q[0] - p[0];
    d.vy = q[1] - p[1];
    d.vz = q[2] - p[2];
    ApplyMatrixSV((MATRIX *)(AF(arg0, u8 *, 0x20) + 0x34), &d, &d);
    func_800D23D0(&d);
    RotMatrixYXZ(&d, m);
    w.vx = D_801269A4 - c.vx;
    w.vy = D_801269A8 - c.vy;
    w.vz = D_801269AC - c.vz;
    ApplyTransposeMatrixLV(m, &w, &w);
    d.vz = -ratan2(w.vx, w.vy);
    RotMatrixYXZ(&d, m);
}

extern u8 D_801904A0[];
extern u8 D_80190470[];
extern u8 D_80190471[];
extern void func_80166F58();

void func_801681FC(u8 *arg0) {
    s16 t;
    s32 a3;

    AF(arg0, s16, 0x28) = func_80029178(0x81) & 0xFF;
    AF(arg0, s32, 0x30) = D_801904A0[AF(arg0, s32, 0x2C)];
    t = AF(arg0, s32, 0x2C) * 2;
    AF(arg0, s16, 0x2A) = D_80190470[t];
    AF(arg0, s32, 0x1C) = D_80190471[t];
    a3 = AF(arg0, s32, 0x2C) & 1;
    AF(arg0, s32, 0x2C) = a3;
    func_80166F58(arg0, 4, 4, a3);
    AF(arg0, u16, 2)++;
}

void func_8016829C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;

    if (!(AF(AF(arg0, void *, 0x34), s32, 0x44) & 2)) {
        func_80146C3C((s32) arg0, arg1, arg2, arg3);
        return;
    }
    temp_v0 = AF(arg0, u16, 0x2A) - 1;
    AF(arg0, u16, 0x2A) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_80166994((s32) arg0, 0, (s32) AF(arg0, s16, 0x2C), 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_80168328(u8 *arg0) {
    if (!(AF(AF(arg0, u8 *, 0x34), s32, 0x44) & 2) || --AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, u16, 2)++;
        func_80166994(arg0, 2, AF(arg0, s16, 0x2C), 0);
    } else {
        func_80166994(arg0, 1, AF(arg0, s16, 0x2C), AF(arg0, s16, 0x30));
    }
    if ((s16)func_80166690(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x28)) == 0) {
        func_80146C3C(arg0);
    }
}

void func_801683D8(u8 *arg0) {
    func_80166994((s32) arg0, 2, (s32) AF(arg0, s16, 0x2C), 0);
    if ((func_80166690((s32) AF(arg0, s16, 0x2C), (s32) AF(arg0, s16, 0x28)) << 0x10) == 0) {
        func_80146C3C((s32) arg0);
    }
}

extern u8 D_801904AC[];
extern u8 D_80190484[];
extern u8 D_80190485[];
extern void func_80166F58();

void func_80168430(u8 *arg0) {
    s16 temp_v0;

    AF(arg0, s32, 0x30) = D_801904AC[AF(arg0, s32, 0x2C)];
    temp_v0 = AF(arg0, s32, 0x2C) * 2;
    AF(arg0, u16, 0x2A) = D_80190484[temp_v0];
    AF(arg0, s32, 0x1C) = D_80190485[temp_v0];
    func_80166F58(arg0, 5, 0x3B, 2);
    AF(arg0, u16, 2)++;
}

void func_801684B4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;

    if (!(AF(AF(arg0, void *, 0x34), s32, 0x44) & 2)) {
        func_80146C3C((s32) arg0, arg1, arg2, arg3);
        return;
    }
    temp_v0 = AF(arg0, u16, 0x2A) - 1;
    AF(arg0, u16, 0x2A) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_80166994((s32) arg0, 0, 2, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_80168540(u8 *arg0) {
    if (!(AF(AF(arg0, void *, 0x34), s32, 0x44) & 2) || --AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, u16, 2)++;
        func_80166994(arg0, 2, 2, 0);
    } else {
        func_80166994(arg0, 1, 2, AF(arg0, s16, 0x30));
    }
    if ((func_80166690(2, 1) << 0x10) == 0) {
        func_80146C3C(arg0);
    }
}

void func_801685EC(s32 arg0) {
    func_80166994(arg0, 2, 2, 0);
    if ((func_80166690(2, 1) << 0x10) == 0) {
        func_80146C3C(arg0);
    }
}

void func_80168640(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s16, 0x10) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_80168664(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x34);

    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x10) = 0x80;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s32, 0x30) = 0x1800;
    AF(arg0, MATRIX, 0x38) = D_800AE620;
    RotMatrixX(0x400, (MATRIX *)(arg0 + 0x38));
    MulMatrix2(AF(p, u8 *, 0x20) + 0x34, arg0 + 0x38);
    func_801670E4(arg0, -6, -0x44, -0x18);
    AF(arg0, u16, 2)++;
}

void func_80168744(u8 *arg0) {
    D_80190500[AF(arg0, u16, 2)]();
}

void func_80168780(s32 arg0) {
    func_80168BDC(arg0, 8, 0, 2);
    func_801687CC(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_801687CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg0, s32, 0x1C) < 3) {
        func_80168828();
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
        return;
    }
    func_80146C3C(arg0, arg1, arg2, arg3);
}

extern s32 func_800173BC();
extern s16 D_801904F0[];

void func_80168828(u8 *a) {
    struct { SVECTOR v[3]; SCol c[3]; s32 code; } s;
    MATRIX m1;
    MATRIX m2;
    SVECTOR r;
    s16 *t;
    s16 i;
    s32 k;

    s.v[1].vy = s.v[2].vy = s.v[0].vx = s.v[0].vy = 0;
    s.v[0].vz = 2;
    s.v[1].vz = 0x24;
    s.v[2].vz = 0x28;
    s.v[1].vx = -3;
    s.v[2].vx = 3;
    s.c[0].r = 0x40;
    s.c[0].b = 0x10;
    s.c[1].r = s.c[2].r = 0xFF;
    s.c[1].g = s.c[2].g = 0xC0;
    s.c[1].b = s.c[2].b = s.c[0].g = s.c[0].r;
    s.code = 0x50000000;
    r.vx = AF(a, s16, 6);
    r.vy = AF(a, s16, 0xA);
    r.vz = AF(a, s16, 0xE);
    func_80017E68(&r, &m1);
    k = (AF(a, s32, 0x1C) << 11) + 0x1000;
    r.vx = r.vy = r.vz = k;
    func_80017DC4(&r, &m1);
    r.vx = AF(a, s16, 0x12);
    r.vy = AF(a, s16, 0x16);
    r.vz = AF(a, s16, 0x1A);
    RotMatrixYXZ(&r, &m2);
    MulMatrix2(&m1, &m2);
    r.vy = 0;
    t = D_801904F0;
    i = 0;
    do {
        r.vx = *t++;
        r.vz = *t++;
        RotMatrixZYX(&r, &m1);
        MulMatrix2(&m2, &m1);
        func_800173BC(&s, &m1);
        i++;
    } while (i < 4);
}

void func_801689D8(u8 *arg0) {
    D_80190508[AF(arg0, u16, 2)]();
}

void func_80168A14(s32 arg0) {
    func_80168BDC(arg0, 8, 1, 2);
    func_80146A6C(3, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ -5, /* extra? */ 0xC0009C00);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_80168A88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80146C3C(arg0, arg1, arg2, arg3);
}

void func_80168AA8(u8 *arg0) {
    D_80190510[AF(arg0, u16, 2)]();
}

void func_80168AE4(s32 arg0) {
    func_80168BDC(arg0, 9, 3, 2);
    func_80168BDC(arg0, 9, 2, 1);
    func_80146A6C(3, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ -5, /* extra? */ 0xC0009C00);
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_80168B70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_80168BDC((s32) arg0, 9, 3, 1);
        return;
    }
    func_80168BDC((s32) arg0, 9, 2, 1);
    func_80146C3C((s32) arg0);
}

extern void func_800D2318();

void func_80168BDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    MATRIX m;
    SVECTOR v;
    s16 i;
    s32 o;

    func_800D2318();
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vx = 0;
    if (AF(arg0, s32, 0x2C) < 0) {
        v.vz = -8;
        v.vy = -4;
    } else {
        v.vz = 2;
        v.vy = -2;
    }
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s16, 6) += v.vx;
    AF(arg0, s16, 0xA) += v.vy;
    AF(arg0, s16, 0xE) += v.vz;
    for (i = 0; i < (s16)arg3; i++) {
        o = func_80146A6C(arg1 & 0xFFFF, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), (s16)arg2, 0);
        if (o != 0) {
            AF(o, s16, 0x12) = AF(arg0, s16, 0x12);
            AF(o, s16, 0x16) = AF(arg0, s16, 0x16);
            AF(o, s16, 0x1A) = AF(arg0, s16, 0x1A);
        }
    }
}

void func_80168D58(u8 *arg0) {
    D_80190518[AF(arg0, u16, 2)]();
}

void func_80168D94(u8 *arg0) {
    SVECTOR v;
    MATRIX m2;
    MATRIX m;

    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    RotMatrixYXZ(&v, &m);
    if (AF(arg0, s32, 0x2C) == 0) {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xC00;
    } else {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8 + 0xE00;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    }
    v.vz = 0;
    RotMatrixYXZ(&v, &m2);
    MulMatrix2(&m, &m2);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0x24;
    ApplyMatrixSV(&m2, &v, &v);
    AF(arg0, s16, 0x12) = v.vx;
    AF(arg0, s16, 0x16) = v.vy;
    AF(arg0, s16, 0x1A) = v.vz;
    AF(arg0, u16, 0x10) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x14) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x18) = AF(arg0, u16, 0xE);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2)++;
}

extern void func_80168F40();

void func_80168EC4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) < 5) {
        func_80168F40();
        AF(arg0, u16, 0x10) = AF(arg0, u16, 6);
        AF(arg0, u16, 0x14) = AF(arg0, u16, 0xA);
        AF(arg0, u16, 0x18) = AF(arg0, u16, 0xE);
        func_800D22E4(arg0);
        AF(arg0, s32, 0x1C)++;
    } else {
        func_80146C3C(arg0);
    }
}

extern void func_80016A5C();

void func_80168F40(u8 *arg0) {
    struct { SVECTOR p0, p1; SCol c0, c1; s32 code; } l;
    MATRIX m;
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original frame is 8 bytes bigger than its locals */

    l.p0.vx = AF(arg0, u16, 0x10);
    l.p0.vy = AF(arg0, u16, 0x14);
    l.p0.vz = AF(arg0, u16, 0x18);
    l.p1.vx = AF(arg0, u16, 6);
    l.p1.vy = AF(arg0, u16, 0xA);
    l.p1.vz = AF(arg0, u16, 0xE);
    l.c0.r = 8;
    l.c1.r = 0xC0;
    l.c0.g = l.c0.b = 0;
    l.c1.g = l.c1.b = 0x80;
    m = D_800AE620;
    l.code = 0x50000000;
    func_80016A5C(&l, &m);
}

void func_8016901C(u8 *arg0) {
    D_80190520[AF(arg0, u16, 2)]();
}

void func_80169058(u8 *arg0) {
    SVECTOR v;
    SVECTOR d;
    MATRIX m2;
    MATRIX m;

    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA);
    v.vz = AF(arg0, u16, 0xE);
    func_800D20C0(&v, &d, 1);
    func_800D23D0(&d);
    RotMatrixYXZ(&d, (MATRIX *)(arg0 + 0x38));
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    RotMatrixYXZ(&v, &m);
    if (!(AF(arg0, s32, 0x2C) & 2)) {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xC00;
    } else {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8 + 0xE40;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    }
    v.vz = 0;
    RotMatrixYXZ(&v, &m2);
    MulMatrix2(&m, &m2);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0xA;
    ApplyMatrixSV(&m2, &v, &v);
    AF(arg0, s16, 0x12) = v.vx;
    AF(arg0, s16, 0x16) = v.vy;
    AF(arg0, s16, 0x1A) = v.vz;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2)++;
}

void func_801691B8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg0, s32, 0x1C) < 0xA) {
        func_80169228();
        func_800D22E4((s32) arg0);
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
        return;
    }
    func_80146C3C((s32) arg0, arg1, arg2, arg3);
}

void func_80169228(u8 *a) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    s32 c;
    s32 k;

    s.v[0].vx = s.v[1].vx = -5;
    s.v[2].vx = s.v[3].vx = 5;
    s.v[0].vy = s.v[2].vy = -5;
    s.v[1].vy = s.v[3].vy = 5;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    if (!(AF(a, s32, 0x2C) & 2)) {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[0].r = s.c[1].r = s.c[2].r = s.c[3].r = s.c[0].g = s.c[0].b = s.c[1].g = s.c[1].b = s.c[2].g = s.c[2].b = s.c[3].g = s.c[3].b = c;
    } else {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[0].r = s.c[1].r = s.c[2].b = s.c[3].b = 0x20;
        s.c[0].g = s.c[1].g = s.c[2].g = s.c[3].g = c;
        s.c[2].g = s.c[3].g = 0x20;
    }
    s.code = 0x50000000;
    k = (AF(a, s32, 0x2C) & 1) ? 0x4CC : 0x800;
    r.vx = r.vy = r.vz = k + (AF(a, s32, 0x1C) << 7);
    mp = &m;
    func_80017DC4(&r, mp);
    MulMatrix2(a + 0x38, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    func_80017758(&s, mp);
    s.v[0].vx = -7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = 7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[1].vy = 7;
    s.v[2].vy = -7;
    func_80017758(&s, mp);
}

void func_801693CC(u8 *arg0) {
    D_80190528[AF(arg0, u16, 2)]();
}

void func_80169408(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    MATRIX m;
    MATRIX m2; /* MATCH-TRICK: unused frame pad, the original frame is 0x20 bigger than its locals */
    u32 x;

    if (AF(arg0, s32, 0x2C) == 0) {
        x = rand();
        v.vx = (x & 0x7F) << 5;
        v.vy = (x & 0x7F00) >> 3;
        v.vz = 0;
        RotMatrixYXZ(&v, &m);
        MulMatrix2(arg0 + 0x38, &m);
        v.vx = 0;
        v.vy = 0;
        v.vz = 2;
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, u16, 0x12) = v.vx;
        AF(arg0, u16, 0x16) = v.vy;
        AF(arg0, u16, 0x1A) = v.vz;
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA);
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 1);
        func_800D23D0(&r);
        RotMatrixYXZ(&r, (MATRIX *)(arg0 + 0x38));
    }
    func_80169584((s32) arg0);
    AF(arg0, u16, 2)++;
}

void func_8016951C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_80169584((s32) arg0);
        func_800D22E4((s32) arg0);
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x8000);
        return;
    }
    func_80146C3C((s32) arg0, arg1, arg2, arg3);
}

void func_80169584(u8 *a) {
    SPrim s;
    MATRIX m; /* MATCH-TRICK: unused locals (left over from func_80169228) pad the frame to 0x78 */
    SVECTOR r;
    MATRIX *mp;
    u8 c;

    s.v[0].vx = 7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[1].vy = 2;
    s.v[2].vy = -2;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[0].g = s.c[3].g = s.c[3].r = s.c[3].b = s.c[0].r = s.c[0].b = 0;
    if (AF(a, s32, 0x2C) == 0) {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[1].g = s.c[2].g = c;
        s.c[1].b = s.c[2].b = c >> 2;
        s.c[1].r = s.c[2].r = c >> 2;
    } else {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[1].g = s.c[2].g = c;
        s.c[1].b = s.c[2].b = c;
        s.c[1].r = s.c[2].r = c >> 2;
    }
    s.code = 0x50000000;
    mp = (MATRIX *)(a + 0x38);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    func_80017758(&s, mp);
    s.v[0].vy = 7;
    s.v[1].vy = s.v[2].vy = 0;
    s.v[3].vy = -7;
    s.v[0].vx = s.v[3].vx = 0;
    s.v[1].vx = 2;
    s.v[2].vx = -2;
    func_80017758(&s, mp);
}

void func_801696D8(u8 *a, s32 arg1) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    u8 c;
    u8 h;

    s.v[0].vx = 8;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -8;
    s.v[1].vy = 2;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -2;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    c = AF(a, u8, 0x30);
    h = c >> 1;
    s.c[1].b = s.c[2].b = c;
    s.c[1].r = s.c[2].r = s.c[1].g = s.c[2].g = s.c[0].b = s.c[3].b = h;
    s.c[0].r = s.c[3].r = s.c[0].g = s.c[3].g = h >> 2;
    s.code = 0x50000000;
    /* PORT NOTE: r.vz read before set, as the original */
    r.vx = r.vy = AF(a, u16, 0x2C);
    mp = &m;
    func_80017DC4(&r, mp);
    MulMatrix2(arg1, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    func_80017758(&s, mp);
    s.v[0].vx = 2;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -2;
    s.v[1].vy = 8;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -8;
    func_80017758(&s, mp);
}

void func_80169830(u8 *arg0) {
    D_80190530[AF(arg0, u16, 2)]();
}

void func_8016986C(u8 *arg0) {
    SVECTOR sv;
    SVECTOR q;
    MATRIX m2;
    MATRIX m1;
    u32 r;

    sv.vx = AF(arg0, u16, 6);
    sv.vy = AF(arg0, u16, 0xA);
    sv.vz = AF(arg0, u16, 0xE);
    func_800D20C0(&sv, &q, 1);
    func_800D23D0(&q);
    RotMatrixYXZ(&q, (MATRIX *)(arg0 + 0x38));
    sv.vx = AF(arg0, u16, 0x12);
    sv.vy = AF(arg0, u16, 0x16);
    sv.vz = AF(arg0, u16, 0x1A);
    RotMatrixYXZ(&sv, &m1);
    r = rand();
    sv.vx = (r & 0x1FC) + 0x180;
    if (AF(arg0, s32, 0x2C) & 2) {
        sv.vy = ((r & 0x7F00) >> 6) + 0x200;
    } else {
        sv.vy = ((r & 0x7F00) >> 6) + 0xC00;
    }
    sv.vz = 0;
    RotMatrixYXZ(&sv, &m2);
    MulMatrix2(&m1, &m2);
    if (AF(arg0, s32, 0x2C) & 1) {
        AF(arg0, s32, 0x2C) = 0xA00;
    } else {
        AF(arg0, s32, 0x2C) = 0xE00;
    }
    sv.vx = 0;
    sv.vy = 0;
    sv.vz = 0xA;
    ApplyMatrixSV(&m2, &sv, &sv);
    AF(arg0, s16, 0x12) = sv.vx;
    AF(arg0, s16, 0x16) = sv.vy;
    AF(arg0, s16, 0x1A) = sv.vz;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2)++;
}

extern void func_80169A4C();

void func_801699D0(u8 *arg0) {
    s32 t = AF(arg0, s32, 0x1C);

    if (t < 0xF) {
        AF(arg0, s32, 0x30) = 0xC0 - t * 8;
        func_80169A4C(arg0, arg0 + 0x38);
        func_800D22E4(arg0);
        AF(arg0, s32, 0x14) += 0x10000;
        AF(arg0, s32, 0x1C)++;
    } else {
        func_80146C3C(arg0);
    }
}

void func_80169A4C(u8 *a, s32 arg1) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    u8 c;
    u8 h;

    s.v[0].vx = s.v[1].vx = -5;
    s.v[2].vx = s.v[3].vx = 5;
    s.v[0].vy = s.v[2].vy = -5;
    s.v[1].vy = s.v[3].vy = 5;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    c = AF(a, u8, 0x30);
    h = c >> 2;
    s.c[0].b = s.c[1].b = s.c[2].b = s.c[3].b = c;
    s.c[0].g = s.c[1].g = s.c[2].g = s.c[3].g = h;
    s.c[0].r = s.c[1].r = s.c[2].r = s.c[3].r = h;
    s.code = 0x50000000;
    /* PORT NOTE: r.vz read before set, as the original */
    r.vx = r.vy = AF(a, u16, 0x2C);
    mp = &m;
    func_80017DC4(&r, mp);
    MulMatrix2(arg1, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    func_80017758(&s, mp);
    s.v[0].vx = -7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = 7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[1].vy = 7;
    s.v[2].vy = -7;
    func_80017758(&s, mp);
}

void func_80169B80(u8 *arg0) {
    D_801905E4[AF(arg0, u16, 2)]();
}

extern u8 D_801905A8;
extern u8 D_801905D8;
extern MATRIX D_801EF2F8;
extern s16 D_80190538[];
extern s32 func_800D222C();

void func_80169BBC(u8 *arg0) {
    SVECTOR r;
    SVECTOR v;
    VECTOR w;
    MATRIX m;
    s32 o;
    s32 p;

    func_800D2318();
    r.vx = AF(arg0, u16, 0x12);
    r.vy = AF(arg0, u16, 0x16);
    r.vz = 0;
    RotMatrixYXZ(&r, &m);
    v.vy = -2;
    v.vx = 0;
    v.vz = -20;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s16, 6) += v.vx;
    AF(arg0, s16, 0xA) += v.vy;
    AF(arg0, s16, 0xE) += v.vz;
    p = func_80146A6C(9, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    if (p != 0) {
        AF(p, s16, 0x12) = r.vx;
        AF(p, s16, 0x16) = r.vy;
        AF(p, s16, 0x1A) = r.vz;
    }
    func_80146A6C(0xC, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    o = func_800D222C(arg0, &D_801905D8, 0x17);
    if (o != 0) {
        AF(arg0, s32, 0x20) = o;
        r.vx += D_80190538[AF(arg0, s32, 0x30)];
        r.vy -= 0x400;
        RotMatrixYXZ(&r, &m);
        w.vx = D_801269A4 - AF(arg0, s16, 6);
        w.vy = D_801269A8 - AF(arg0, s16, 0xA);
        w.vz = D_801269AC - AF(arg0, s16, 0xE);
        ApplyTransposeMatrixLV(&m, &w, &w);
        r.vz = -ratan2(w.vx, w.vy);
        v.vx = 0x400;
        v.vy = -0x400;
        v.vz = 0;
        RotMatrixYXZ(&v, &m);
        AF(o, MATRIX *, 0x34) = &D_801EF2F8;
        RotMatrixYXZ(&r, &D_801EF2F8);
        MulMatrix(&D_801EF2F8, &m);
        AF(o, s16, 0x18) = 0x5000;
        AF(o, s16, 0x1A) = 0x2000;
        AF(o, s32, 4) |= 0xC000140;
        func_80128EA8(o, arg0 + 0x24, &D_801905A8);
        AF(arg0, s16, 2)++;
    } else {
        func_80146C3C(arg0);
    }
}

void func_80169E44(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 3) {
        temp_v0_2 = func_80146A6C(9, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), (s32) AF(arg0, s16, 0xE), AF(arg0, s32, 0x1C) & 1, 0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0x12) = (u16) AF(arg0, u16, 0x12);
            AF(temp_v0_2, u16, 0x16) = (u16) AF(arg0, u16, 0x16);
            AF(temp_v0_2, u16, 0x1A) = (u16) AF(arg0, u16, 0x1A);
        }
    }
}

void func_80169F00(u8 *arg0) {
    D_801905EC[AF(arg0, u16, 2)]();
}

void func_80169F3C(s32 arg0) {
    s32 temp_v0;

    func_800D1FC8(arg0, 6);
    temp_v0 = func_800D21C4(arg0, (s32) &D_8019059C, 0x16);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(temp_v0, u8, 0x26) = 0x60;
        AF(temp_v0, u8, 0x25) = 0x60;
        AF(temp_v0, u8, 0x24) = 0x60;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        func_80128EA8(temp_v0, arg0 + 0x24, (s32) &D_8019055C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_80169FE0(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
    }
}

void func_8016A020(u8 *arg0) {
    D_80190624[AF(arg0, u16, 2)]();
}

void func_8016A05C(u8 *arg0) {
    u16 var_v0;

    if (D_80078EC0 & 0x7F) {
        var_v0 = AF(arg0, u16, 2) + 1;
    } else {
        var_v0 = 2;
    }
    AF(arg0, u16, 2) = var_v0;
}

extern void func_8016A290();

void func_8016A08C(u8 *arg0) {
    s32 sp20[2];
    s32 sp28[2];
    s16 i;
    s32 t;

    if (D_80078EBF != 0) {
        func_80148534((s32) sp20, (s32) sp28);
        t = D_80078EBF - 0x18;
        AF(arg0, s32, 0x30) = t;
        if (t >= 0) {
            func_8016A290(arg0, sp20, sp28);
            AF(arg0, s32, 0x1C)++;
            if (AF(arg0, s32, 0x1C) == 4) {
                func_80147324(0x44C);
            }
            if (D_80078EBF < 0x80) {
                for (i = 0; i < 2; i++) {
                }
                func_80146A6C(0x17, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
                return;
            }
            if (AF(arg0, s16, 0x2A) == 0) {
                AF(arg0, s16, 0x2A) = 1;
                AF(arg0, s32, 0x1C) = 0x100;
            }
            if (!(AF(arg0, s32, 0x1C) & 0x1F)) {
                func_80147324(0x44D);
            }
        }
    } else {
        func_80147364(4, 0x44C);
        func_80146C3C(arg0);
    }
}

void func_8016A1CC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (D_80078EBF != 0) {
        temp_v0 = D_80078EBF - 0x18;
        AF(arg0, s32, 0x30) = temp_v0;
        if (temp_v0 >= 0) {
            temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0_2;
            if (temp_v0_2 == 4) {
                func_80147324(0x44C, arg1, arg2, arg3);
            }
            if (D_80078EBF >= 0x80U) {
                if (AF(arg0, s16, 0x2A) == 0) {
                    AF(arg0, s16, 0x2A) = 1;
                    AF(arg0, s32, 0x1C) = 0x100;
                }
                if (!(AF(arg0, s32, 0x1C) & 0x1F)) {
                    func_80147324(0x44D);
                }
            }
        }
    } else {
        func_80147364(4, 0x44C);
        func_80146C3C((s32) arg0);
    }
}

extern s8 D_801905F4[];
extern s8 D_80190608[];

void func_8016A290(u8 *arg0, s16 *p, s16 *q) {
    SVECTOR c;
    SVECTOR d;
    VECTOR w;
    MATRIX m;
    MATRIX m2; /* MATCH-TRICK: unused frame pad, the original frame is 0x20 bigger than its locals */
    SPrim s;
    s32 t;
    s8 *tp;
    s16 i;

    t = AF(arg0, s32, 0x34);
    c.vx = (p[0] + q[0]) >> 1;
    c.vy = (p[1] + q[1]) >> 1;
    c.vz = (p[2] + q[2]) >> 1;
    func_80149350(t, (s32)&c, (s32)&c);
    AF(arg0, s16, 6) = c.vx;
    AF(arg0, s16, 0xA) = c.vy;
    AF(arg0, s16, 0xE) = c.vz;
    func_800D20C0(&c, &d, 8);
    func_80017E68(&c, &m);
    d.vx = q[0] - p[0];
    d.vy = q[1] - p[1];
    d.vz = q[2] - p[2];
    ApplyMatrixSV((MATRIX *)(AF(t, u8 *, 0x20) + 0x34), &d, &d);
    func_800D23D0(&d);
    RotMatrixYXZ(&d, &m);
    w.vx = D_801269A4 - c.vx;
    w.vy = D_801269A8 - c.vy;
    w.vz = D_801269AC - c.vz;
    ApplyTransposeMatrixLV(&m, &w, &w);
    d.vz = -ratan2(w.vx, w.vy);
    RotMatrixYXZ(&d, &m);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    if (D_800B99DA & 1) {
        s.c[1].r = AF(arg0, s32, 0x30) + 0x20;
    } else if (D_800B99DA & 2) {
        s.c[1].r = AF(arg0, s32, 0x30) + 0x40;
    } else {
        s.c[1].r = AF(arg0, s32, 0x30);
    }
    tp = D_801905F4;
    i = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    s.c[1].g = s.c[1].b = s.c[1].r >> 3;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vy = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vy = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vy = *tp--;
        func_80017758(&s, &m);
        i++;
    } while (i < 4);
    tp = D_80190608;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.v[1].vz = -0x20;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vz = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp--;
        func_80017758(&s, &m);
        if (i == 1) {
            s.v[1].vz = 0x20;
            tp += 2;
        }
        i++;
    } while (i < 4);
    tp += 2;
    i = 0;
    s.v[0].vx = 0;
    s.v[0].vz = -0x20;
    s.c[0].r = s.c[1].r;
    s.c[0].g = s.c[0].b = s.c[1].g;
    do {
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp++;
        func_80017758(&s, &m);
        i++;
    } while (i < 2);
}

void func_8016A700(u8 *arg0) {
    D_80190630[AF(arg0, u16, 2)]();
}

extern MATRIX D_800AE620;

void func_8016A73C(u8 *arg0) {
    MATRIX m;
    SVECTOR v;
    s32 r;
    s16 t;

    r = rand();
    v.vy = ((r & 0x7F) << 4) + 0x400;
    v.vx = ((u32)(r & 0x7F00) >> 5) - 0x300;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(AF(AF(AF(arg0, u8 *, 0x34), u8 *, 0x34), u8 *, 0x20) + 0x34, &m);
    v.vx = 0;
    v.vy = 0;
    v.vz = -0x50;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, MATRIX, 0x38) = D_800AE620;
    t = AF(arg0, s16, 6) + v.vx;
    AF(arg0, s16, 6) = t;
    AF(arg0, s32, 0x4C) = t;
    t = AF(arg0, s16, 0xA) + v.vy;
    AF(arg0, s16, 0xA) = t;
    AF(arg0, s32, 0x50) = t;
    t = AF(arg0, s16, 0xE) + v.vz;
    AF(arg0, s16, 0xE) = t;
    AF(arg0, s16, 2)++;
    AF(arg0, s32, 0x54) = t;
}

extern void func_8016A8FC();

void func_8016A890(u8 *arg0) {
    u16 *p = AF(arg0, u16 *, 0x34);
    if (AF(arg0, s32, 0x1C) < 4 && *p == 0x14) {
        func_8016A8FC();
        AF(arg0, s32, 0x1C)++;
        return;
    }
    func_80146C3C(arg0);
}

extern MATRIX D_800AE620;
extern void func_80016A5C();

void func_8016A8FC(u8 *arg0) {
    struct { SVECTOR p0, p1; SCol c0, c1; s32 code; } l;
    u8 *p = AF(arg0, u8 *, 0x34);

    l.p0.vx = AF(arg0, s32, 0x4C);
    l.p0.vy = AF(arg0, s32, 0x50);
    l.p0.vz = AF(arg0, s32, 0x54);
    l.p1.vx = AF(p, u16, 6);
    l.p1.vy = AF(p, u16, 0xA);
    l.p1.vz = AF(p, u16, 0xE);
    l.p0.vx = (AF(arg0, s16, 6) + AF(arg0, s32, 0x4C)) >> 1;
    l.p0.vy = (AF(arg0, s16, 0xA) + AF(arg0, s32, 0x50)) >> 1;
    l.p0.vz = (AF(arg0, s16, 0xE) + AF(arg0, s32, 0x54)) >> 1;
    AF(arg0, s16, 6) = AF(arg0, s32, 0x4C);
    AF(arg0, s32, 0x4C) = l.p1.vx = (AF(arg0, s16, 6) + AF(p, s16, 6)) >> 1;
    AF(arg0, s16, 0xA) = AF(arg0, s32, 0x50);
    AF(arg0, s32, 0x50) = l.p1.vy = (AF(arg0, s16, 0xA) + AF(p, s16, 0xA)) >> 1;
    AF(arg0, s16, 0xE) = AF(arg0, s32, 0x54);
    AF(arg0, s32, 0x54) = l.p1.vz = (AF(arg0, s16, 0xE) + AF(p, s16, 0xE)) >> 1;
    l.c0.g = 0x10;
    l.c1.g = 0x80;
    l.c1.r = l.c1.b = 0x20;
    l.c0.r = l.c0.b = 0;
    l.code = 0x50000000;
    func_80016A5C(&l, &D_800AE620);
}

void func_8016AA50(StageActor *a, s32 n) {
    s16 i;
    u8 *p;

    if (n >= 0) {
        func_80146A6C(0x1D, a, a->hitPos[0], a->hitPos[1], a->hitPos[2], 0, n);
        return;
    }
    for (i = 0, p = &D_8011D030; i < 0x1E; i++, p += 0x58) {
        u16 t = AF(p, u16, 0);
        if (t == 0 || t == 3 || t == 9) {
            func_80146C3C(p);
            func_80146A6C(0x1D, a, D_80126B5E, D_80126B62 - 0x20, D_80126B66, 7, 0);
            return;
        }
    }
}

void func_8016AB30(u8 *arg0) {
    D_80190678[AF(arg0, u16, 2)]();
}

extern u8 D_80190638;
extern u8 D_80190648;
extern u8 D_801ED8F8;
extern u8 D_801ED920;
extern s32 func_801783D0();

void func_8016AB6C(u8 *arg0) {
    SVECTOR pos;
    SVECTOR rot;
    s32 v;
    s16 m;
    s16 i;
    s16 n;
    u8 *o;
    u32 r;

    v = func_801783D0(AF(arg0, s32, 0x30), 0);
    i = 3;
    AF(arg0, s32, 0x30) = v;
    for (m = -0x1000; i >= 0; i--, m >>= 4) {
        if (v & m) {
            break;
        }
    }
    switch (AF(arg0, s32, 0x2C)) {
    case 0:
        AF(arg0, s16, 0x26) = 1;
        AF(arg0, s16, 0x24) = 0x60;
        AF(arg0, s16, 0xA) -= 0x20;
        break;
    case 1:
    case 5:
        AF(arg0, s32, 0x14) = 0xFFF60000;
        r = rand();
        i++;
        AF(arg0, s32, 0x10) = ((r & 0xF) - 8) << 15;
        AF(arg0, s32, 0x18) = (((r >> 4) & 0xF) - 8) << 15;
        AF(arg0, s16, 0x26) = 4;
        AF(arg0, s16, 0x24) = 0x80;
        AF(arg0, s32, 0x30) |= 0xA << (i * 4);
        break;
    case 2:
    case 4:
        AF(arg0, s16, 0x26) = 4;
        AF(arg0, s16, 0x24) = 0x80;
        AF(arg0, s16, 0xA) -= 0x18;
        break;
    case 3:
        i++;
        AF(arg0, s16, 0x26) = 4;
        AF(arg0, s16, 0x24) = 0x80;
        AF(arg0, s16, 0xA) -= 0x18;
        AF(arg0, s32, 0x30) = (AF(arg0, s32, 0x30) | (0xF << (i * 4))) << 4;
        i++;
        break;
    case 6:
    case 7:
        o = (u8 *)((s32 (*)())func_801465C0)();
        if (o == 0) {
            func_80146C3C(arg0);
            return;
        }
        pos.vx = AF(arg0, s16, 6);
        pos.vy = AF(arg0, s16, 0xA) - 0x18;
        pos.vz = AF(arg0, s16, 0xE);
        func_800D20C0(&pos, &rot, 6);
        AF(arg0, s16, 6) = pos.vx;
        AF(arg0, s16, 0xA) = pos.vy;
        AF(arg0, s16, 0xE) = pos.vz;
        if (AF(arg0, s32, 0x2C) == 6) {
            n = ((s32 (*)())func_80024054)(&D_80190638, &D_801ED8F8) + 3;
            func_8001CE28(o, &D_801ED8F8);
        } else {
            n = ((s32 (*)())func_80024054)(&D_80190648, &D_801ED920) + 9;
            func_8001CE28(o, &D_801ED920);
        }
        AF(o, s16, 0xE) = n;
        AF(o, s32, 4) |= 0x4000000;
        if (AF(arg0, s32, 0x2C) == 6) {
            AF(o, u8, 0x27) = 0xB5;
            i = 0x70;
        } else {
            AF(o, u8, 0x27) = 0xAE;
            i = 0xB0;
        }
        AF(o, s16, 0x2E) = -8;
        AF(o, s16, 0x30) = 0;
        AF(o, u8, 0x24) = AF(o, u8, 0x25) = AF(o, u8, 0x26) = i;
        i = n >> 2;
        AF(arg0, s32, 0x20) = (s32)o;
        break;
    }
    AF(arg0, s16, 0x2A) = 4 - i * 4;
    AF(arg0, s16, 0x28) = i;
    AF(arg0, s32, 0x1C) = 0xB;
    AF(arg0, s16, 2)++;
}

void func_8016AE5C(u8 *arg0) {
    s32 temp_v1_2;
    s32 temp_a0;
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u32, 0x2C) < 6U) {
        func_8016B234(arg0);
    }
    switch (AF(arg0, u32, 0x2C)) {
    case 0:
        AF(arg0, u16, 0xA) -= AF(arg0, s32, 0x1C);
        temp_v1_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v1_2;
        if (temp_v1_2 != 0) {
            if ((temp_v1_2 & 3) == 1) {
                AF(arg0, u16, 0x26)++;
            }
            break;
        }
        AF(arg0, s16, 0x24) = 0xFF;
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2)++;
        break;
    case 1:
    case 5:
        func_800D22E4(arg0);
        AF(arg0, s32, 0x14) += 0x18000;
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
        AF(arg0, u16, 0xA) -= AF(arg0, s32, 0x1C);
        if (--AF(arg0, s32, 0x1C) == 0) {
            if (AF(arg0, u32, 0x2C) < 6U) {
                AF(arg0, s16, 0x24) = 0xC0;
                AF(arg0, s32, 0x1C) = 8;
            } else {
                AF(temp_s1, u8, 0x26) = 0xC0;
                AF(temp_s1, u8, 0x25) = 0xC0;
                AF(temp_s1, u8, 0x24) = 0xC0;
                AF(arg0, s32, 0x1C) = 0xC;
            }
            AF(arg0, u16, 2)++;
        }
        break;
    }
}

void func_8016AFB0(u8 *arg0) {
    s32 temp_v0_2;
    s32 temp_v1_2;
    u8 var_v1;
    u32 temp_v1;
    u8 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if ((u32) AF(arg0, u32, 0x2C) < 6U) {
        func_8016B234();
    }
    temp_v1 = AF(arg0, u32, 0x2C);
    switch (temp_v1) {                              /* irregular */
    case 7:
        var_v1 = 0xB4;
        if (AF(arg0, s32, 0x1C) & 1) {
            var_v1 = 0xAE;
        }
        AF(temp_s1, u8, 0x27) = var_v1;
        /* fallthrough */
    case 6:
        temp_v0 = AF(temp_s1, u8, 0x26) - 8;
        AF(temp_s1, u8, 0x26) = temp_v0;
        AF(temp_s1, u8, 0x25) = temp_v0;
        AF(temp_s1, u8, 0x24) = temp_v0;
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            AF(temp_s1, u8, 0x26) = 0x70U;
            AF(temp_s1, u8, 0x25) = 0x70U;
            AF(temp_s1, u8, 0x24) = 0x70U;
            AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
            AF(arg0, s32, 0x1C) = 7;
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
            return;
        }
        return;
    case 5:
    case 1:
        func_800D22E4((s32) arg0);
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x18000);
        /* fallthrough */
    default:
        temp_v1_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, u16, 0x24) = (u16) (AF(arg0, u16, 0x24) - 8);
        AF(arg0, s32, 0x1C) = temp_v1_2;
        if (temp_v1_2 == 0) {
            AF(arg0, u16, 0x24) = 0x70U;
            AF(arg0, s32, 0x1C) = 7;
            AF(arg0, u16, 0x26) = (u16) (AF(arg0, u16, 0x26) + 1);
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
        break;
    }
}

void func_8016B114(u8 *arg0) {
    u8 *temp_s1;
    s32 t;
    u8 c;

    temp_s1 = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u32, 0x2C) < 6U) {
        func_8016B234(arg0);
    }
    switch (AF(arg0, u32, 0x2C)) {
    case 6:
    case 7:
        c = AF(temp_s1, u8, 0x26) - 0x10;
        AF(temp_s1, u8, 0x26) = c;
        AF(temp_s1, u8, 0x25) = c;
        AF(temp_s1, u8, 0x24) = c;
        AF(arg0, u16, 0xA) -= 2;
        break;
    case 1:
    case 5:
        func_800D22E4(arg0);
        AF(arg0, s32, 0x14) += 0x18000;
        AF(arg0, u16, 0x26)++;
        AF(arg0, u16, 0x24) -= 0x10;
        break;
    default:
        AF(arg0, u16, 0xA) -= 2;
        AF(arg0, u16, 0x26)++;
        AF(arg0, u16, 0x24) -= 0x10;
        break;
    }
    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        func_80146C3C(arg0);
    }
}

void func_8016B234(u8 *a) {
    SVECTOR p;
    SPrimT s;
    s32 sxy;
    s32 z;
    s32 flag;
    s16 x;
    s32 k;
    s32 w;
    s16 i;
    s32 u;

    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
    p.vx = AF(a, s16, 6);
    p.vy = AF(a, s16, 0xA);
    p.vz = AF(a, s16, 0xE);
    RotTransPers(&p, &sxy, &z, &flag);
    if (flag & ~0x1000) {
        return;
    }
    s.v[0].vz = 0x10;
    k = ((u16 *)&sxy)[1];
    s.v[0].vx = s.v[2].vx = AF(a, u16, 0x2A) + sxy;
    s.v[1].vx = s.v[3].vx = s.v[0].vx + 8;
s.v[0].vy = s.v[1].vy = k - AF(a, u16, 0x26); w = AF(a, u16, 0x26); s.v[2].vy = s.v[3].vy = k + w; s.uv[0][1] = s.uv[1][1] = 0x1D0; s.uv[2][1] = s.uv[3][1] = 0x1D8;
    s.r = s.g = s.b = AF(a, u8, 0x24);
    s.tp = D_80190670[AF(a, s32, 0x2C)];
    if (AF(a, s16, 0x26) < 5) {
        s.code = 0;
    } else {
        s.code = 0x50000000;
    }
    k = AF(a, u16, 0x30);
    for (i = 0; i < AF(a, s16, 0x28) + 1; i++) {
        u = ((k + 1) & 0xF) * 8;
        s.uv[0][0] = s.uv[2][0] = u + 0x620;
        s.uv[1][0] = s.uv[3][0] = u + 0x628;
        func_80016ED4(&s);
        k = (s16)k >> 4;
        x = s.v[0].vx;
        s.v[2].vx = s.v[0].vx = x - 8;
        s.v[1].vx = s.v[3].vx = x;
    }
}

void func_8016B3F4(s32 arg0) {
    func_8016B448(arg0, 1);
    func_8016BA48(arg0);
}

void func_8016B428(StageActor *arg0) {
    func_8016B448(arg0, 0);
}

void func_8016B448(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x1E);
    if (temp_v0 != 0) {
        func_8016B984(temp_v0);
    }
    func_80146A6C(0x1E, arg0, (s32) AF(arg0, s16, 0x7C), (s32) AF(arg0, s16, 0x7E), (s32) AF(arg0, s16, 0x80), arg1, 0);
}

void func_8016B4BC(u8 *arg0) {
    D_801906F4[AF(arg0, u16, 2)]();
}

extern u8 D_801ED948;
extern s32 func_8016B9F8();
extern s32 func_8016B834();
extern s32 func_8016B91C();

void func_8016B4F8(s32 arg0) {
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original reserves 8 unused stack bytes */

    func_80015978(arg0 + 4, &D_801ED948);
    if (func_8016B9F8(arg0) != 0 ||
        (AF(arg0, s32, 0x18) = 0, AF(arg0, s32, 0x14) = 0, AF(arg0, s32, 0x10) = 0,
         (AF(arg0, s32, 0x10) = func_8016B834(arg0, 0)) == 0) ||
        (AF(arg0, s32, 0x14) = func_8016B834(arg0, 1)) == 0 ||
        (AF(arg0, s32, 0x18) = func_8016B834(arg0, 2)) == 0) {
        func_8016B984(arg0);
        return;
    }
    func_8016B91C(arg0);
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, s32, 0x1C) = 0x2D0;
    } else {
        AF(arg0, s32, 0x1C) = 0xF0;
    }
    AF(arg0, u16, 2)++;
}

extern s16 D_801906E8[];
extern s32 func_8016B9F8();
extern void func_8016B6BC();
extern s32 func_8016B91C();

void func_8016B5C0(u8 *arg0) {
    u8 *p;
    s32 n;
    s32 i;
    s32 c;

    p = AF(arg0, u8 *, 0x18);
    if (func_8016B9F8(arg0) != 0) {
        goto end;
    }
    AF(p, u16, 0x18) = AF(p, u16, 0x1A) += 0x200;
    if (AF(arg0, s32, 0x2C) == 0) {
        n = AF(arg0, s32, 0x1C);
    } else {
        n = AF(arg0, s32, 0x1C) / 3;
    }
    c = AF(arg0, s32, 0x1C) - 0x20;
    AF(arg0, s32, 0x1C) = c;
    if (c < 0) {
end:
        func_8016B984(arg0);
        return;
    }
    for (i = 0; i < 6; i++) {
        func_8016B6BC(arg0, n, D_801906E8[i], (s16)i);
    }
    func_8016B91C(arg0);
}

extern SVECTOR *D_801906D0[];
extern void func_80013CFC();
extern void func_8001739C();

void func_8016B6BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[0x28];
    SVECTOR v;
    SVECTOR *s;
    u8 *p;
    s16 a;
    s32 c;

    p = buf;
    s = D_801906D0[(s16)arg3];
    AF(p, s32, 0x24) = 0x50000000;
    c = 0x20;
    if ((u32)arg1 < 0x20) {
        c = arg1;
    }
    if (AF(arg0, s32, 0x2C) == 0) {
        arg1 |= (c << 16) | (c << 8);
    } else {
        arg1 = (arg1 << 8) | (c << 16) | c;
    }
    a = arg2;
    AF(p, s32, 0x18) = arg1;
    AF(p, s32, 0x1C) = 0;
    AF(p, s32, 0x20) = 0;
    func_80013CFC(a, s++, p);
    func_80013CFC(a, s++, p + 8);
    func_80013CFC(a, s, p + 0x10);
    func_80015978(arg0 + 4, &v);
    AF(p, s16, 0x0) += v.vx;
    AF(p, s16, 0x2) += v.vy;
    AF(p, s16, 0x8) += v.vx;
    AF(p, s16, 0xA) += v.vy;
    AF(p, s16, 0x10) += v.vx;
    AF(p, s16, 0x12) += v.vy;
    AF(p, s16, 0x4) = 3;
    func_8001739C(p);
}

extern u8 D_801ED950[];
extern SPair2 *D_8019072C[];
extern u16 D_80190734[];
extern u16 D_8019073C[];
extern void func_8001CD9C();
extern void func_800233CC();

s32 func_8016B834(u8 *arg0, s32 arg1) {
    SPair2 *tbl;
    u8 *dst;
    s32 o;

    dst = D_801ED950 + arg1 * 0x40;
    tbl = D_8019072C[AF(arg0, s32, 0x2C)];
    o = ((s32 (*)())func_801465C0)(arg0);
    if (o != 0) {
        func_8001CD9C(o, dst);
        func_800233CC(dst, D_80190734[arg1]);
        AF(dst, s32, 0) = tbl[arg1].a;
        AF(dst, s32, 4) = tbl[arg1].b;
        AF(o, s32, 4) |= 0x50040000;
        AF(o, u16, 0x1E) = D_8019073C[arg1];
    }
    return o;
}

s32 func_8016B91C(s32 arg0) {
    func_8016B964(arg0, AF(arg0, s32, 0x10));
    func_8016B964(arg0, AF(arg0, s32, 0x14));
    return func_8016B964(arg0, AF(arg0, s32, 0x18));
}

s32 func_8016B964(s32 arg0, s32 arg1) {
    AF(arg1, u16, 8) = AF(arg0, u16, 6);
    AF(arg1, u16, 0xA) = AF(arg0, u16, 0xA);
    AF(arg1, u16, 0xC) = 3;
}

void func_8016B984(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    temp_a0 = AF(arg0, s32, 0x10);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    temp_a0_2 = AF(arg0, s32, 0x14);
    if (temp_a0_2 != 0) {
        func_80016714(temp_a0_2, 0x38);
    }
    temp_a0_3 = AF(arg0, s32, 0x18);
    if (temp_a0_3 != 0) {
        func_80016714(temp_a0_3, 0x38);
    }
    func_80146C3C(arg0);
}

extern u8 D_801ED948;

s32 func_8016B9F8(s32 arg0) {
    s32 sp10;
    s32 temp_s0;

    temp_s0 = func_8012EFB8((s32) &D_801ED948, (s32) &sp10);
    func_80015954((s32) &sp10, arg0 + 4);
    return (temp_s0 & ~0x1000) != 0;
}

s32 func_8016BA48(s32 arg0, s32 arg1) {
    func_8016BA68(arg0, 0);
}

void func_8016BA68(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x56);
    if (temp_v0 != 0) {
        func_80146C3C(temp_v0);
    }
    func_80146A6C(0x56, arg0, (s32) AF(arg0, s16, 0x7C), (s32) AF(arg0, s16, 0x7E), (s32) AF(arg0, s16, 0x80), arg1, 0);
}

void func_8016BADC(s32 arg0, s32 arg1, s32 arg2) {
    func_80146A6C(0x22, arg0, 0, (s32) (s16) arg1, 0, 0, arg2);
    func_80146A6C(0x22, arg0, 0, (s32) (s16) arg1, 0, 1, arg2);
    func_80146A6C(0x22, arg0, 0, (s32) (s16) arg1, 0, 2, arg2);
    func_80146A6C(0x24, arg0, 0, (s32) (s16) arg1, 0, 0, 0);
}

void func_8016BBA4(u8 *arg0) {
    D_80190744[AF(arg0, u16, 2)]();
}

extern u8 D_801EDA85;
extern u8 D_801EDA86;
extern u8 D_801EDA89;
extern u8 D_801EDA8A;
extern s32 func_8016BF34();
extern void func_8001CF00();

void func_8016BBE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = ((s32 (*)())func_801465C0)();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8016BF34(arg0);
        func_8016BF50(arg0);
        func_8001CF00(temp_v0);
        AF(temp_v0, s16, 0x10) = 0;
        AF(temp_v0, s16, 0x12) = AF(arg0, s32, 0x2C) * 0x555;
        AF(temp_v0, s16, 0x14) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s16, 0x10) = 0;
        AF(arg0, s16, 0x14) = 0;
        D_801EDA84 = 0x20;
        D_801EDA85 = 0x20;
        D_801EDA86 = 0;
        D_801EDA88 = 0xC0;
        D_801EDA89 = 0xC0;
        D_801EDA8A = 0;
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_8016BCC0(u8 *arg0) {
    u16 temp_a2;
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_8016BF50((s32) arg0);
    temp_a2 = AF(arg0, u16, 0x10) + 0x60;
    AF(arg0, u16, 0x10) = temp_a2;
    temp_v0 = AF(temp_s0, u16, 0x1A) + temp_a2;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    AF(temp_s0, u16, 0x12) = (u16) ((AF(temp_s0, u16, 0x12) + 0x71) & 0xFFF);
    func_8016BFA8((s32) arg0, (s32) &D_801EDA84, (s32) &D_801EDA88, temp_s0 + 0x18);
    if ((s16) AF(temp_s0, u16, 0x1A) >= 0x1001) {
        AF(temp_s0, u16, 0x18) = 0x1000U;
        AF(temp_s0, u16, 0x1A) = 0x1000U;
        func_80146E90((s32) arg0, AF(arg0, s32, 0x30));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_8016BD78(u8 *arg0) {
    u16 temp_v0;
    s32 temp_s0;
    u8 *a;
    u8 *b;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8016BF50((s32) arg0);
    a = &D_801EDA84;
    if (*a != 0) {
        *a -= 4;
    }
    if (D_801EDA85 != 0) {
        D_801EDA85 -= 4;
    }
    if (D_801EDA86 != 0) {
        D_801EDA86 -= 4;
    }
    b = &D_801EDA88;
    if (*b != 0) {
        *b -= 4;
    }
    if (D_801EDA89 != 0) {
        D_801EDA89 -= 4;
    }
    if (D_801EDA8A != 0) {
        D_801EDA8A -= 4;
    }
    temp_v0 = AF(temp_s0, u16, 0x18) - 0x80;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 < 0) {
        AF(temp_s0, u16, 0x18) = 0;
        AF(arg0, u16, 2)++;
    }
    AF(temp_s0, u16, 0x12) = (AF(temp_s0, u16, 0x12) + 0x22) & 0xFFF;
    func_8016BFA8((s32) arg0, (s32) a, (s32) b, temp_s0 + 0x18);
}

void func_8016BEA0(u8 *arg0) {
    u16 temp_a1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_8016BF50((s32) arg0);
    temp_a1 = AF(arg0, u16, 0x10) - 0x18;
    AF(arg0, u16, 0x10) = temp_a1;
    AF(temp_s0, u16, 0x1A) = (u16) (AF(temp_s0, u16, 0x1A) + temp_a1);
    AF(temp_s0, u16, 0x12) = (u16) ((AF(temp_s0, u16, 0x12) + 0x22) & 0xFFF);
    func_8016BFA8((s32) arg0, (s32) &D_801EDA84, (s32) &D_801EDA88, temp_s0 + 0x18);
    if ((s16) AF(temp_s0, u16, 0x1A) < 0) {
        func_80146C3C((s32) arg0);
    }
}

s32 func_8016BF34(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 6);
    AF(arg0, u16, 0x12) = temp_v0;
    AF(arg0, u16, 0x16) = (u16) AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x1A) = (u16) AF(arg0, u16, 0xE);
    return (s32) temp_v0;
}

void func_8016BF50(s32 arg0) {
    SVECTOR v;
    s32 p = AF(arg0, s32, 0x34);
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    func_80149350(p, (s32) &v, (s32) &v);
    func_80015954((s32) &v, arg0 + 4);
}

extern u8 D_801EDA10;
extern void func_8016BFD0();

void func_8016BFA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_8016BFD0(arg0, arg1, arg2, arg3, &D_801EDA10);
}

extern void func_80017714();
extern SVECTOR D_80190754;
extern SVECTOR D_8019075C;
extern SVECTOR D_80190764;
extern SVECTOR D_8019076C;

void func_8016BFD0(s32 arg0, SCol *c0, SCol *c1, s16 *scale, SPrim *p) {
    MATRIX m;
    u8 unused[0x20]; /* MATCH-TRICK: frame pad */
    SVECTOR v;
    SVECTOR s;
    s32 obj = AF(arg0, s32, 0x20);

    p->code = 0x50000000;
    p->c[0] = *c0;
    p->c[1] = *c0;
    p->c[2] = *c1;
    p->c[3] = *c1;
    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA);
    v.vz = AF(arg0, u16, 0xE);
    func_8012EFB8(&v, &v);
    func_80013F3C(&m);
    func_800123F0(&m, AF(obj, s16, 0x12));
    s.vx = scale[0];
    s.vy = scale[1];
    s.vz = scale[2];
    func_80020F34(&m, &s);
    m.t[0] = v.vx;
    m.t[1] = v.vy;
    m.t[2] = v.vz;
    func_8012F14C(&m, &D_80190754, &p->v[0]);
    func_8012F14C(&m, &D_8019075C, &p->v[1]);
    func_8012F14C(&m, &D_80190764, &p->v[2]);
    func_8012F14C(&m, &D_8019076C, &p->v[3]);
    p->v[0].vz = 0;
    p->v[1].vz = 0;
    p->v[2].vz = 0;
    p->v[3].vz = 0;
    func_80017714(p);
}

void func_8016C14C(u8 *arg0) {
    D_80190774[AF(arg0, u16, 2)]();
}

extern u8 D_801EDA44;
extern u8 D_801EDA8C;
extern s16 D_801EDA8E;
extern s16 D_801EDA90;
extern u8 D_801EDA94;
extern s16 D_801EDA96;
extern s16 D_801EDA98;
extern s32 func_8016C374();

void func_8016C188(u8 *arg0) {
    SVECTOR v;
    s32 temp_v0;
    s32 p;

    temp_v0 = ((s32 (*)())func_801465C0)();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        AF(arg0, u16, 0x12) = AF(arg0, u16, 6);
        AF(arg0, u16, 0x16) = AF(arg0, u16, 0xA);
        AF(arg0, u16, 0x1A) = AF(arg0, u16, 0xE);
        p = AF(arg0, s32, 0x34);
        v.vx = AF(arg0, u16, 0x12);
        v.vy = AF(arg0, u16, 0x16);
        v.vz = AF(arg0, u16, 0x1A);
        func_80149350(p, (s32) &v, (s32) &v);
        func_80015954((s32) &v, arg0 + 4);
        func_8001CD9C(temp_v0, &D_801EDA44);
        AF(temp_v0, s16, 0x1E) = 0xCCC;
        AF(temp_v0, s32, 4) |= 0x50000000;
        func_800233CC(&D_801EDA44, 0x80);
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s16, 0x10) = 0;
        *(s16 *) &D_801EDA8C = 0x20;
        D_801EDA8E = 0x20;
        D_801EDA90 = 0;
        *(s16 *) &D_801EDA94 = 0xC0;
        D_801EDA96 = 0xC0;
        D_801EDA98 = 0;
        func_8016C374(arg0, &D_801EDA8C, &D_801EDA94, &D_801EDA44);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

extern u8 D_801EDA44;
extern u8 D_801EDA8C;
extern u8 D_801EDA94;
extern s32 func_8016C374();

void func_8016C2C4(u8 *arg0) {
    s16 sp10[3];
    u8 *temp_s0;
    s32 a;
    u16 temp_v0;
    u16 temp_v1;

    temp_s0 = AF(arg0, u8 *, 0x20);
    a = AF(arg0, s32, 0x34);
    sp10[0] = AF(arg0, u16, 0x12);
    sp10[1] = AF(arg0, u16, 0x16);
    sp10[2] = AF(arg0, u16, 0x1A);
    func_80149350(a, (s32) sp10, (s32) sp10);
    func_80015954(sp10, arg0 + 4);
    temp_v1 = AF(arg0, u16, 0x10) + 0x10;
    AF(arg0, u16, 0x10) = temp_v1;
    temp_v0 = AF(temp_s0, u16, 0x1A) + temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if (func_8016C374(arg0, &D_801EDA8C, &D_801EDA94, &D_801EDA44) == 0) {
        func_80146C3C(arg0);
    }
}

s32 func_8016C374(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;

    temp_v0 = AF(arg1, u16, 0) - 0xA;
    AF(arg1, u16, 0) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(arg1, u16, 0) = 0U;
    }
    temp_v0_2 = AF(arg1, u16, 2) - 0xA;
    AF(arg1, u16, 2) = temp_v0_2;
    if ((s16) (temp_v0_2) < 0) {
        AF(arg1, u16, 2) = 0U;
    }
    temp_v0_3 = AF(arg1, u16, 4) - 0xA;
    AF(arg1, u16, 4) = temp_v0_3;
    if ((s16) (temp_v0_3) < 0) {
        AF(arg1, u16, 4) = 0U;
    }
    temp_v0_4 = AF(arg2, u16, 0) - 0xA;
    AF(arg2, u16, 0) = temp_v0_4;
    if ((s16) (temp_v0_4) < 0) {
        AF(arg2, u16, 0) = 0U;
    }
    temp_v0_5 = AF(arg2, u16, 2) - 0xA;
    AF(arg2, u16, 2) = temp_v0_5;
    if ((s16) (temp_v0_5) < 0) {
        AF(arg2, u16, 2) = 0U;
    }
    temp_v0_6 = AF(arg2, u16, 4) - 0xA;
    AF(arg2, u16, 4) = temp_v0_6;
    if ((s16) (temp_v0_6) < 0) {
        AF(arg2, u16, 4) = 0U;
    }
    AF(arg3, u8, 0) = (s8) AF(arg1, u16, 0);
    AF(arg3, u8, 1) = (s8) AF(arg1, u16, 2);
    AF(arg3, u8, 2) = (s8) AF(arg1, u16, 4);
    AF(arg3, u8, 4) = (s8) AF(arg2, u16, 0);
    AF(arg3, u8, 5) = (s8) AF(arg2, u16, 2);
    AF(arg3, u8, 6) = (s8) AF(arg2, u16, 4);
    return (s32) (s16) (AF(arg2, u16, 4) | (AF(arg2, u16, 0) | AF(arg2, u16, 2)));
}

extern u8 D_801EDAA0;
extern u8 D_801EDAA2;
extern u8 D_801EDAA4;
extern u8 D_801EDAA5;
extern u8 D_801EDAA6;
extern u8 D_801EDB60[][0xC4];
extern s32 VectorNormalSS();

void func_8016C49C(u8 *arg0) {
    u16 v[4];
    MATRIX m;
    u8 *s3;
    u8 *s4;
    u8 *p;
    s16 i;
    s32 q;
    s32 r;

    s3 = AF(arg0, u8 *, 0x30);
    s4 = AF(arg0, u8 *, 0x34);
    AF(arg0, u16, 0x28) = AF(s3, u16, 0x36);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        for (i = 0, p = &D_8011D030; i < 30; i++) {
            if (p != arg0 && AF(p, u16, 0) == 0x30) {
                func_80146C3C(p);
            }
            p += 0x58;
        }
        /* D_801EDAA0/1 written through the neighbouring symbol D_801EDAA2 (one object split by splat) */
        (&D_801EDAA2)[-1] = 0xFF;
        (&D_801EDAA2)[-2] = D_801EDAA2 = 0x10;
        D_801EDAA4 = D_801EDAA5 = D_801EDAA6 = 0;
        func_800233CC(&D_801EDAA2 - 2, 10);
        v[0] = AF(s3, u16, 6) - AF(s4, u16, 6);
        v[1] = AF(s3, s16, 0xA) - (AF(s4, s16, 0xA) + 0x28);
        v[2] = AF(s3, u16, 0xE) - AF(s4, u16, 0xE);
        VectorNormalSS(v, v);
        AF(arg0, u16, 6) = AF(s3, u16, 6) + ((s16)v[0] >> 9);
        AF(arg0, u16, 0xA) = AF(s3, u16, 0xA) + (((s16)v[1] >> 9) - 0x28);
        AF(arg0, u16, 0xE) = AF(s3, u16, 0xE) + ((s16)v[2] >> 9);
        func_800D23D0(v);
        v[0] = 0;
        RotMatrixYXZ(v, arg0 + 0x38);
        func_80016714(D_801EDB60, 0x620);
        func_80146A6C(0x32, (StageActor *)arg0, 0, 0, 0, 0, AF(arg0, s32, 0x30));
        AF(arg0, u16, 2) = 5;
    } else {
        q = ((s32 (*)())func_801465C0)();
        if (q != 0) {
            func_8001CD9C(q, &D_801EDAA0);
            AF(q, s32, 4) |= 0x50000000;
            r = rand();
            v[0] = (r & 0x7F) * 8 - 0x80;
            v[1] = ((u32)(r & 0x7F00) >> 4) - 0x400;
            v[2] = 0;
            RotMatrixYXZ(v, &m);
            MulMatrix2(arg0 + 0x38, &m);
            v[1] = 0;
            v[0] = 0;
            v[2] = 0xB;
            ApplyMatrixSV(&m, (SVECTOR *)v, (SVECTOR *)v);
            AF(arg0, u16, 0x12) = v[0];
            AF(arg0, u16, 0x16) = v[1];
            AF(arg0, u16, 0x1A) = v[2];
            AF(arg0, s32, 0x20) = q;
            AF(arg0, s32, 0x1C) = 8;
            func_8016CF04(arg0, 0);
            AF(arg0, s32, 0x2C) = 0;
            AF(arg0, u16, 2)++;
        }
    }
}

extern s32 VectorNormalSS();

void func_8016C74C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sh = arg2;
    s32 lim;

    AF(arg0, s32, 0x10) += AF(arg1, s16, 0) << sh;
    AF(arg0, s32, 0x14) += AF(arg1, s16, 2) << sh;
    AF(arg0, s32, 0x18) += AF(arg1, s16, 4) << sh;
    AF(arg1, s16, 0) = AF(arg0, u16, 0x12);
    AF(arg1, s16, 2) = AF(arg0, u16, 0x16);
    AF(arg1, s16, 4) = AF(arg0, u16, 0x1A);
    lim = *(s32 *)&arg4; /* MATCH-TRICK: read the stack parameter through its address so its load lands before the call, as in the original */
    if (lim < VectorNormalSS(arg1, arg1)) {
        AF(arg0, s32, 0x10) = AF(arg1, s16, 0) << (s16)arg3;
        AF(arg0, s32, 0x14) = AF(arg1, s16, 2) << (s16)arg3;
        AF(arg0, s32, 0x18) = AF(arg1, s16, 4) << (s16)arg3;
    }
}

void func_8016C83C(u8 *arg0) {
    SVECTOR d;
    u8 unused[32]; /* MATCH-TRICK: frame pad, the original frame is 0x40 with only d stored */
    u8 *t;
    s32 lim;

    t = AF(arg0, u8 *, 0x34);
    if (--AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, s16, 2) = 4;
        func_8016CF04(arg0, 2);
        return;
    }
    d.vx = AF(t, u16, 6) - AF(arg0, u16, 6);
    d.vy = AF(t, u16, 0xA) - AF(arg0, u16, 0xA);
    d.vz = AF(t, u16, 0xE) - AF(arg0, u16, 0xE);
    if (VectorNormalSS(&d, &d) < 0x790) {
        AF(arg0, s16, 2) = 4;
        func_8016CF04(arg0, 2);
        return;
    }
    AF(arg0, s32, 0x10) += d.vx << 6;
    AF(arg0, s32, 0x14) += d.vy << 6;
    AF(arg0, s32, 0x18) += d.vz << 6;
    d.vx = AF(arg0, u16, 0x12);
    d.vy = AF(arg0, u16, 0x16);
    d.vz = AF(arg0, u16, 0x1A);
    lim = 0x1000;
    if (lim < VectorNormalSS(&d, &d)) {
        AF(arg0, s32, 0x10) = d.vx << 10;
        AF(arg0, s32, 0x14) = d.vy << 10;
        AF(arg0, s32, 0x18) = d.vz << 10;
    }
    func_800D22E4(arg0);
    func_8016CF04(arg0, 1);
}

extern s16 D_80126CE0;
extern u8 D_801EDB60[][0xC4];

void func_8016C998(u8 *arg0) {
    u16 *p;
    s16 i;
    u8 *o;

    p = AF(arg0, u16 *, 0x34);
    if (*p != 1) {
        AF(arg0, s16, 2) = 6;
    }
    func_8016CBC0();
    if (AF(arg0, s16, 0x28) == AF(AF(arg0, u8 *, 0x30), s16, 0x36) && (D_80126B9C & 0x20)) {
        if (AF(arg0, s32, 0x1C) == 0 || AF(arg0, s16, 0x12) < D_80126CE0) {
            AF(arg0, s16, 0x12) = D_80126CE0;
            for (i = 0; i < 8; i++) {
                if (D_801EDB60[i][0] == 0) {
                    break;
                }
            }
            if (i < 8) {
                o = (u8 *)func_80146A6C(0x30, (StageActor *)p, 0, 0, 0, 0x8000, AF(arg0, s32, 0x30));
                if (o != 0) {
                    D_801EDB60[i][0] = 1;
                    AF(o, MATRIX, 0x38) = AF(arg0, MATRIX, 0x38);
                    AF(o, s16, 0x2A) = i;
                    AF(o, s16, 6) = AF(arg0, s16, 6);
                    AF(o, s16, 0xA) = AF(arg0, s16, 0xA);
                    AF(o, s16, 0xE) = AF(arg0, s16, 0xE);
                    AF(arg0, s32, 0x1C) = 0x10;
                }
            }
        } else {
            AF(arg0, s32, 0x1C)--;
        }
    }
}

void func_8016CB84(u8 *arg0) {
    D_8019077C[AF(arg0, u16, 2)]();
}

s32 func_8016CBC0(void) {
    SPrim a;
    SPrim b;
    MATRIX m;
    s16 i;
    s16 cnt;
    u8 *p;
    u8 *e;
    u8 *q;
    s16 j;
    s16 n;
    u8 c;

    m = D_800AE620;
    cnt = 0;
    a.code = b.code = 0x50000000;
    a.c[0].r = a.c[0].g = a.c[0].b = a.c[2].r = a.c[2].g = a.c[2].b =
        b.c[1].r = b.c[1].g = b.c[1].b = b.c[3].r = b.c[3].g = b.c[3].b = 0;
    for (i = 0; i < 8; i++) {
        p = D_801EDB60[i];
        if (p[0] != 0) {
            cnt++;
            e = p + 4;
            j = p[1];
            n = p[2];
            c = p[3];
            while (--n != -1) {
                q = e + j * 12;
                a.v[0].vx = AF(q, u16, 0);
                b.v[1].vx = AF(q, u16, 6);
                a.v[1].vx = b.v[0].vx = (a.v[0].vx + b.v[1].vx) >> 1;
                a.v[0].vy = AF(q, u16, 2);
                b.v[1].vy = AF(q, u16, 8);
                a.v[1].vy = b.v[0].vy = (a.v[0].vy + b.v[1].vy) >> 1;
                a.v[0].vz = AF(q, u16, 4);
                b.v[1].vz = AF(q, u16, 0xA);
                a.v[1].vz = b.v[0].vz = (a.v[0].vz + b.v[1].vz) >> 1;
                a.c[1].g = b.c[0].g = c;
                a.c[1].r = b.c[0].r = a.c[1].b = b.c[0].b = c >> 3;
                j--;
                if (j < 0) {
                    j = 15;
                }
                q = e + j * 12;
                c -= 15;
                a.v[2].vx = AF(q, u16, 0);
                b.v[3].vx = AF(q, u16, 6);
                a.v[3].vx = b.v[2].vx = (a.v[2].vx + b.v[3].vx) >> 1;
                a.v[2].vy = AF(q, u16, 2);
                b.v[3].vy = AF(q, u16, 8);
                a.v[3].vy = b.v[2].vy = (a.v[2].vy + b.v[3].vy) >> 1;
                a.v[2].vz = AF(q, u16, 4);
                b.v[3].vz = AF(q, u16, 0xA);
                a.v[3].vz = b.v[2].vz = (a.v[2].vz + b.v[3].vz) >> 1;
                a.c[3].g = b.c[2].g = c;
                a.c[3].r = b.c[2].r = a.c[3].b = b.c[2].b = c >> 3;
                func_80017758(&a, &m);
                func_80017758(&b, &m);
            }
        }
    }
    return cnt;
}

static inline u8 *func_8016CF04_pt(u8 *p) {
    return p + p[1] * 12;
}

s32 func_8016CF04(u8 *arg0, s32 arg1) {
    SVECTOR v;
    SVECTOR r;
    MATRIX m;
    u8 *p;

    p = D_801EDB60[AF(arg0, s16, 0x2A)];
    switch ((s16)arg1) {
    case 0:
        p[2] = 0;
        p[1] = 0;
        p[3] = 0xF0;
        break;
    case 1:
        if (++p[1] >= 0x10) {
            p[1] = 0;
        }
        if (p[2] < 0xF) {
            p[2]++;
        }
        break;
    case 2:
        if (--p[2] == 0) {
            p[0] = 0;
            return 1;
        }
        p[3] -= 0xF;
        return 0;
    }
    v.vx = AF(arg0, s32, 0x10) >> 12;
    v.vy = AF(arg0, s32, 0x14) >> 12;
    v.vz = AF(arg0, s32, 0x18) >> 12;
    func_800D23D0(&v);
    RotMatrixYXZ(&v, &m);
    v.vx = 9;
    v.vy = 0;
    v.vz = 0;
    ApplyMatrixSV(&m, &v, &r);
    AF(func_8016CF04_pt(p), s16, 4) = AF(arg0, u16, 6) + r.vx;
    AF(func_8016CF04_pt(p), s16, 6) = AF(arg0, u16, 0xA) + r.vy;
    AF(func_8016CF04_pt(p), s16, 8) = AF(arg0, u16, 0xE) + r.vz;
    v.vx = -v.vx;
    v.vy = -v.vy;
    ApplyMatrixSV(&m, &v, &r);
    AF(func_8016CF04_pt(p), s16, 0xA) = AF(arg0, u16, 6) + r.vx;
    AF(func_8016CF04_pt(p), s16, 0xC) = AF(arg0, u16, 0xA) + r.vy;
    AF(func_8016CF04_pt(p), s16, 0xE) = AF(arg0, u16, 0xE) + r.vz;
    return 0;
}

void func_8016D19C(u8 *arg0) {
    D_80190798[AF(arg0, u16, 2)]();
}

extern u8 D_801EDAE1;
extern u8 D_801EDAE2;
extern u8 D_801EDAE4;
extern u8 D_801EDAE5;
extern u8 D_801EDAE6;
extern u8 D_801EDB21;
extern u8 D_801EDB22;
extern u8 D_801EDB24;
extern u8 D_801EDB25;
extern u8 D_801EDB26;

void func_8016D1D8(u8 *arg0) {
    SVECTOR v;
    MATRIX m;
    u8 *q;
    u8 *p;
    u8 *t;
    u8 *t2;
    u8 *q2;
    u8 *p2;
    s32 o;
    s32 o2;
    s32 r;
    s16 s;

    t = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s32, 0x2C) == 0) {
        q = &D_801EDAE1;
        p = q - 1;
        *q = 0xE0;
        D_801EDAE2 = 0xE0;
        *p = 0xE0;
        D_801EDAE6 = 0;
        D_801EDAE5 = 0;
        D_801EDAE4 = 0;
        o = ((s32 (*)())func_801465C0)();
        if (o != 0) {
            AF(arg0, s32, 0x20) = o;
            func_800233CC(p, 0x28);
            func_8001CD9C(o, p);
            AF(o, s16, 0x1A) = 0x1400;
            AF(o, s32, 4) |= 0x50000000;
            t2 = AF(arg0, u8 *, 0x30);
            AF(arg0, u16, 0x28) = AF(t2, u16, 0x36);
            AF(arg0, u16, 0x12) = AF(t2, u16, 6);
            AF(arg0, u16, 0x16) = AF(t2, u16, 0xA) - 0x28;
            AF(arg0, u16, 0x1A) = AF(t2, u16, 0xE);
            AF(arg0, u16, 2)++;
        }
        AF(arg0, s32, 0x1C) = 8;
        func_80147324(0x647);
        return;
    }
    q2 = &D_801EDB21;
    p2 = q2 - 1;
    *q2 = 0xE0;
    D_801EDB22 = 0x20;
    *p2 = 0x20;
    D_801EDB25 = 0;
    D_801EDB26 = 0;
    D_801EDB24 = 0;
    o2 = ((s32 (*)())func_801465C0)();
    if (o2 != 0) {
        AF(arg0, s32, 0x20) = o2;
        func_800233CC(p2, 0x18);
        func_8001CD9C(o2, p2);
        AF(o2, s32, 4) |= 0x50000000;
        AF(arg0, u16, 6) = AF(t, u16, 6);
        AF(arg0, u16, 0xA) = AF(t, u16, 0xA);
        AF(arg0, u16, 0xE) = AF(t, u16, 0xE);
        r = rand();
        v.vx = ((r & 0x7F) << 3) - 0x80;
        v.vy = (u32)(r & 0x7F00) >> 3;
        v.vz = 0;
        RotMatrixYXZ(&v, &m);
        v.vy = 0;
        v.vx = 0;
        v.vz = 0x240;
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, s32, 0x10) = v.vx << 12;
        AF(arg0, s32, 0x14) = v.vy << 12;
        AF(arg0, s32, 0x18) = v.vz << 12;
        s = (r & 0x3F0) + 0x200;
        AF(o2, s16, 0x1A) = s;
        AF(o2, s16, 0x18) = s;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = 2;
    }
}

void func_8016D428(u8 *arg0) {
    D_801907A0[AF(arg0, u16, 2)]();
}

void func_8016D464(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    u16 *temp_s1;

    temp_s1 = AF(arg0, u16 *, 0x34);
    func_800D22E4((s32) arg0, arg1, arg2, arg3);
    func_8016CF04((s32) arg0, 1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (*temp_s1 != 1)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern void func_8016C83C();

void func_8016D4DC(u8 *arg0) {
    SVECTOR d;
    u8 unused[32]; /* MATCH-TRICK: frame pad, the original frame is 0x48 with only d stored */
    u8 *t;
    s32 n;
    s32 k;

    t = AF(arg0, u8 *, 0x34);
    if (AF(t, u16, 0) != 1) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, Player *, 0x34) = &D_80126B58;
        AF(arg0, s32, 0x1C) = 0x40;
        func_8016C83C(arg0);
    } else {
        d.vx = AF(t, u16, 6) - AF(arg0, u16, 6);
        d.vy = AF(t, u16, 0xA) - AF(arg0, u16, 0xA);
        d.vz = AF(t, u16, 0xE) - AF(arg0, u16, 0xE);
        n = VectorNormalSS(&d, &d);
        if (n < 0x510) {
            func_8016CF04(arg0, 2);
            AF(arg0, s16, 2) = 4;
        } else {
            if (n < 0x1900) {
                k = 6;
            } else if (n < 0x6400) {
                k = 5;
            } else {
                k = 4;
            }
            func_8016C74C(arg0, &d, k, 9, 0x400);
            func_800D22E4(arg0);
            func_8016CF04(arg0, 1);
        }
    }
}

s32 func_8016D5EC(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x18) = (u16) (AF(temp_a1, u16, 0x18) - 0x60);
    AF(temp_a1, u16, 0x1A) = (u16) (AF(temp_a1, u16, 0x1A) - 0x60);
    if ((func_8016CF04((s32) arg0, 2) << 0x10) != 0) {
        func_80146C3C((s32) arg0);
    }
}

void func_8016D64C(s32 arg0) {
    if ((func_8016CBC0() << 0x10) == 0) {
        func_80146C3C(arg0);
    }
}

extern u8 D_801EDAE1;
extern u8 D_801EDAE2;
extern u8 D_801EDAE4;
extern u8 D_801EDAE5;
extern u8 D_801EDAE6;

void func_8016D688(u8 *arg0) {
    u8 *p;
    u8 *q;
    u8 *t;
    s32 o;

    q = &D_801EDAE1;
    p = q - 1;
    *q = 0xE0;
    D_801EDAE2 = 0xE0;
    *p = 0xE0;
    D_801EDAE6 = 0;
    D_801EDAE5 = 0;
    D_801EDAE4 = 0;
    o = ((s32 (*)())func_801465C0)();
    if (o != 0) {
        AF(arg0, s32, 0x20) = o;
        func_800233CC(p, 0x28);
        func_8001CD9C(o, p);
        AF(o, s16, 0x1A) = 0x1400;
        AF(o, s32, 4) |= 0x50000000;
        t = AF(arg0, u8 *, 0x30);
        AF(arg0, u16, 0x28) = AF(t, u16, 0x36);
        AF(arg0, u16, 0x12) = AF(t, u16, 6);
        AF(arg0, u16, 0x16) = AF(t, u16, 0xA) - 0x28;
        AF(arg0, u16, 0x1A) = AF(t, u16, 0xE);
        AF(arg0, u16, 2)++;
    }
}

extern void func_800D20C0();

void func_8016D778(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    u8 *o;

    if (AF(arg0, s16, 0x28) != AF(AF(arg0, u8 *, 0x30), s16, 0x36) || !(D_80126B9C & 0x20)) {
        func_80146C3C(arg0);
        return;
    }
    o = AF(arg0, u8 *, 0x20);
    AF(o, u16, 0x18) ^= 0x400;
    AF(o, u16, 0x1A) ^= 0x200;
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
}

void func_8016D848(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    s16 i;
    s16 d;
    s32 t;
    u8 *o;

    t = --AF(arg0, s32, 0x1C);
    if (t == 0) {
        func_80146C3C(arg0);
        return;
    }
    d = -0xC00;
    if (t >= 4) {
        d = 0x800;
        for (i = 0; i < 5; i++) {
            func_80146A6C(0x33, (StageActor *)arg0, 0, 0, 0, 0x8000, 0);
        }
    }
    o = AF(arg0, u8 *, 0x20);
    if (d == 0) {
        AF(o, u16, 0x18) ^= 0x400;
        AF(o, u16, 0x1A) ^= 0x200;
    } else {
        AF(o, u16, 0x18) += d;
        AF(o, u16, 0x1A) += d;
    }
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
}

void func_8016D984(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_80146C3C((s32) arg0, arg1, arg2, arg3);
        return;
    }
    func_800D22E4((s32) arg0, arg1, arg2, arg3);
    temp_v0_2 = AF(arg0, s32, 0x10);
    temp_v1 = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x10) = (s32) (temp_v0_2 - (temp_v0_2 >> 4));
    temp_v0_3 = AF(arg0, s32, 0x18);
    AF(arg0, s32, 0x14) = (s32) (temp_v1 - (temp_v1 >> 4));
    AF(arg0, s32, 0x18) = (s32) (temp_v0_3 - (temp_v0_3 >> 4));
}

void func_8016DA04(s32 arg0) {
    func_80146994(0x31, arg0, 0, 0);
}

void func_8016DA30(u8 *arg0) {
    func_8016DBD8();
    D_80190808[AF(arg0, u16, 2)](arg0);
}

extern u8 D_801907AC;
extern u8 D_801907B8;
extern void func_8001CC3C();

void func_8016DA7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = ((s32 (*)())func_801465C0)();
    if (temp_v0 == 0) {
        func_80146C3C(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CC3C(temp_v0, &D_801907AC, 0x250, 0x100);
    AF(temp_v0, u8, 0x27) = 0x90;
    AF(temp_v0, s16, 0x18) = 0x3000;
    AF(temp_v0, s16, 0x1A) = 0x4000;
    AF(temp_v0, s32, 4) |= 0x50000000;
    func_80128EA8(temp_v0, arg0 + 0x24, &D_801907B8);
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0xFFF40000;
    AF(arg0, u16, 2)++;
}

void func_8016DB34(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    if (func_80128ED8(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
        return;
    }
    AF(temp_s1, u8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
    temp_a0 = AF(arg0, s32, 0x10) + 0xFFFA0000;
    AF(arg0, s32, 0x10) = temp_a0;
    temp_v0 = AF(arg0, s32, 0x14) + temp_a0;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) - 0x500);
    AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) - 0x300);
}

void func_8016DBD8(u8 *arg0) {
    AF(arg0, s32, 4) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 0xC) = 0;
    func_80149374(AF(arg0, s32, 0x34), arg0 + 4);
    func_800D1FC8(arg0, 5);
}

extern u8 D_80190810;
extern u8 D_8019081C;
extern s16 D_801EE180;
extern s16 D_801EE184;

void func_8016DC20(u8 *arg0) {
    s16 i;
    u8 *p;
    s32 obj;
    s32 q;
    s32 r;
    u16 sp20[4];
    u16 sp28[4];

    i = 0;
    p = &D_8011D030;
    obj = AF(arg0, s32, 0x34);
    do {
        if (p != arg0 && AF(p, u16, 0) == 0x34) {
            goto kill;
        }
        i++;
        p += 0x58;
    } while (i < 30);
    func_80149374(obj, arg0 + 4);
    if (func_801619D0(obj) != 0) {
        i = 0;
        p = &D_8011D030;
        do {
            if (AF(p, u16, 0) == 0x11) {
                goto check;
            }
            i++;
            p += 0x58;
        } while (i < 30);
        func_80146A6C(0x11, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, u16, 0xA) - 8, AF(arg0, s16, 0xE), 0, 0);
        i = 0;
        sp20[0] = AF(arg0, u16, 6);
        sp20[1] = AF(arg0, u16, 0xA);
        sp20[2] = AF(arg0, u16, 0xE);
        func_800D20C0(sp20, sp28, 0);
        sp28[1] = 0;
        func_800D23D0(sp28);
        do {
            r = func_80146A6C(0x12, (StageActor *)arg0, AF(obj, s16, 6), AF(obj, s16, 0xA), AF(obj, s16, 0xE), i, 0);
            if (r != 0) {
                AF(r, u16, 0x12) = sp28[0];
                AF(r, u16, 0x16) = sp28[1];
                AF(r, s16, 0x1A) = 0;
            }
            i += 2;
        } while (i < 3);
        goto kill;
    }
check:
    if (D_801EE180 != AF(obj, s16, 6) || D_801EE184 != AF(obj, s16, 0xE)) {
        q = func_800D21C4(arg0, &D_80190810, 0x18);
        if (q != 0) {
            D_801EE180 = AF(obj, u16, 6);
            D_801EE184 = AF(obj, u16, 0xE);
            func_800D1FC8(arg0, 7);
            AF(arg0, s32, 0x20) = q;
            AF(q, s16, 0x1A) = 0x3000;
            AF(q, s16, 0x18) = 0x3000;
            AF(q, u8, 0x26) = 0xFF;
            AF(q, s32, 4) |= 0x50000000;
            func_80128EA8(q, arg0 + 0x24, &D_8019081C);
            func_80128ED8(q, arg0 + 0x24);
            AF(arg0, u16, 2)++;
            return;
        }
    }
kill:
    func_80146C3C(arg0);
}

void func_8016DEA4(u8 *arg0) {
    D_8019083C[AF(arg0, u16, 2)]();
}

void func_8016DEE0(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
    }
}

void func_8016DF20(u8 *arg0) {
    D_80190844[AF(arg0, u16, 2)]();
}

extern u8 D_801EE188;
extern u8 D_801EE189;
extern u8 D_801EE18A;
extern u8 D_801EE18C;
extern u8 D_801EE18D;
extern u8 D_801EE18E;
extern void func_8001CD50();

void func_8016DF5C(u8 *arg0) {
    SVECTOR v;
    u8 unused[32]; /* MATCH-TRICK: frame pad */
    MATRIX m;
    u8 *src;
    u8 *p;
    u8 *b;
    u16 i;
    s32 o;
    s32 r;

    src = AF(arg0, u8 *, 0x34);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        for (i = 0, p = &D_8011D030; i < 30; i++, p += 0x58) {
            if (p != arg0 && (AF(p, u16, 0) == 0x41 || AF(p, u16, 0) == 0x48)) {
                func_80146C3C(p);
            }
        }
        o = ((s32 (*)())func_801465C0)();
        if (o != 0) {
            b = &D_801EE188;
            D_801EE18A = 0xC0;
            *b = 0xC0;
            D_801EE189 = 0;
            D_801EE18C = D_801EE18D = D_801EE18E = 0;
            func_800233CC(b, 0x40);
            func_8001CD50(o, b);
            AF(o, u8 *, 0x34) = arg0 + 0x38;
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
            AF(o, s32, 4) |= 0x50000000;
            func_8016E3CC(arg0);
            AF(arg0, s32, 0x20) = o;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 2)++;
        }
    } else {
        v.vx = 0;
        v.vy = 0;
        v.vz = 0x20;
        m = D_800AE620;
        r = rand();
        RotMatrixY((r & 0x7F00) >> 3, &m);
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, s16, 6) = D_80126B5E + v.vx;
        AF(arg0, s16, 0xA) = D_80126B62 - (r & 0x3F);
        AF(arg0, s16, 0xE) = D_80126B66 + v.vz;
        AF(arg0, MATRIX, 0x38) = AF(src, MATRIX, 0x38);
        AF(arg0, s32, 0x2C) = 0x1000;
        AF(arg0, s32, 0x30) = 0xFF;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = 4;
    }
}

void func_8016E1CC(u8 *arg0) {
    u8 *m = AF(arg0, u8 *, 0x20);

    func_8016E3CC(arg0);
    if (--AF(arg0, s32, 0x1C) != 0) {
        func_80146A6C(0x48, (StageActor *) arg0, 0, 0, 0, 0x8000, 0);
        AF(m, u16, 0x18) += 0x100;
        AF(m, u16, 0x1A) += 0x140;
        return;
    }
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, u16, 2)++;
}

void func_8016E26C(u8 *arg0) {
    func_8016E3CC(arg0);
    if (--AF(arg0, s32, 0x1C) != 0) {
        func_80146A6C(0x48, (StageActor *) arg0, 0, 0, 0, 0x8000, 0);
        return;
    }
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2)++;
}

void func_8016E2E8(u8 *arg0) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    func_8016E3CC();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) - 0x100);
        AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) - 0x120);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_8016E358(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        func_800D22E4((s32) arg0, arg1, arg2, arg3);
        AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) - 3);
        AF(arg0, s32, 0x30) = (s32) (AF(arg0, s32, 0x30) - 0xE);
        func_8016E460((s32) arg0, (s32) (arg0 + 0x38));
        return;
    }
    func_80146C3C((s32) arg0, arg1, arg2, arg3);
}

extern void func_800D20C0();
extern void func_800D23D0();

void func_8016E3CC(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    u8 *o;

    o = AF(arg0, u8 *, 0x34);
    v.vx = AF(o, u16, 6);
    v.vy = AF(o, u16, 0xA) - 0x28;
    v.vz = AF(o, u16, 0xE);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
    func_800D23D0(&r);
    RotMatrixYXZ(&r, (MATRIX *)(arg0 + 0x38));
}

void func_8016E460(u8 *a, u8 *b) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    u8 c2;
    u8 c;

    s.v[0].vx = 7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -7;
    s.v[1].vy = 3;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -3;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    c = AF(a, u8, 0x30);
    s.code = 0x50000000;
    c2 = c >> 2;
    s.c[1].r = s.c[2].r = s.c[1].b = s.c[2].b = c;
    s.c[1].g = s.c[2].g = c2;
    s.c[0].g = s.c[3].g = s.c[0].b = s.c[3].b = s.c[0].r = s.c[3].r = c2 >> 2;
    r.vx = r.vy = AF(a, u16, 0x2C);
    mp = &m;
    func_80017DC4(&r, mp);
    MulMatrix2(b, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    func_80017758(&s, mp);
    s.v[0].vx = 3;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -3;
    s.v[1].vy = 7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -7;
    func_80017758(&s, mp);
}

void func_8016E5B8(u8 *arg0) {
    D_80190898[AF(arg0, u16, 2)]();
}

void func_8016E5F4(u8 *arg0) {
    SVECTOR v;

    func_80015978(arg0 + 4, &v);
    if (func_8012EFB8(&v, &v) & ~0x1000) {
        func_80146C3C(arg0);
        return;
    }
    func_80015954(&v, arg0 + 4);
    AF(arg0, s16, 0x10) = 0x100;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s16, 0x14) = 0;
    AF(arg0, s16, 0x16) = 0x80;
    AF(arg0, u16, 2) = AF(arg0, u16, 2) + 1;
}

void func_8016E688(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x10) + 0x200;
    temp_v0 = AF(arg0, u16, 0x12) + temp_v1;
    AF(arg0, u16, 0x12) = temp_v0;
    AF(arg0, u16, 0x10) = temp_v1;
    if ((s16) temp_v0 >= 0x3000) {
        AF(arg0, s32, 0x1C) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_8016E778();
}

void func_8016E6E4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_8016E778();
}

void func_8016E728(u8 *arg0) {
    AF(arg0, u16, 0x12) += 0x400;
    AF(arg0, s16, 0x16) -= 8;
    if (AF(arg0, s16, 0x16) <= 0) {
        func_80146C3C(arg0);
    } else {
        func_8016E778();
    }
}

extern void func_8016E7C8();

void func_8016E778(u8 *arg0) {
    SVECTOR sp10;
    s32 sp18;
    s16 temp;

    sp10.vx = sp10.vy = sp10.vz = AF(arg0, u16, 0x12);
    temp = AF(arg0, s16, 0x16);
    sp18 = temp | ((temp << 16) | (temp << 8));
    func_8016E7C8(arg0, &sp10, &sp18);
}

extern SVECTOR D_80190858[];
extern s32 D_80190878;
extern s32 D_80190880;
extern s32 D_80190888;
extern s32 D_80190890;

void func_8016E7C8(u8 *arg0, SVECTOR *rot, s32 *col) {
    SPrimT s;
    MATRIX m;
    long flag;
    SPrimT *p;

    p = &s;
    func_80017DC4(rot, &m);
    m.t[0] = AF(arg0, s16, 6);
    m.t[1] = AF(arg0, s16, 0xA);
    m.t[2] = AF(arg0, s16, 0xE);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&D_80190858[0], &p->v[0], &flag);
    RotTransSV(&D_80190858[1], &s.v[1], &flag);
    RotTransSV(&D_80190858[2], &s.v[2], &flag);
    RotTransSV(&D_80190858[3], &s.v[3], &flag);
    s.v[0].vz = 3;
    s.code = 0x50000000;
    *(s32 *)s.uv[0] = D_80190878;
    *(s32 *)s.uv[1] = D_80190880;
    *(s32 *)s.uv[2] = D_80190888;
    *(s32 *)s.uv[3] = D_80190890;
    *(s32 *)&s.r = *col;
    s.tp = 0x27;
    func_80016ED4(p);
}

s32 func_8016E8F0(void) {
    return func_80016714((s32) &D_80115218, 0x80);
}

void func_8016E918(s32 arg0, s32 arg1) {
    s16 a = arg0;
    s16 b = arg1;
    u8 *p;

    if (b < 10) {
        p = &D_80115218 + a * 32;
        p[0] = a + 1;
        p[3] = b;
        p[1] = 0;
    }
}

extern void (*D_801908D8[])();

void func_8016E95C(void) {
    u8 *p;

    for (p = &D_80115218; p < &D_80115218 + 0x80; p += 0x20) {
        if (p[0] != 0) {
            D_801908D8[p[1]](p);
        }
    }
}

extern s32 D_801908A8[];
extern u8 D_801908C0[];
extern u16 D_801908C4[];
extern s32 func_800D2CA8();
extern s32 func_800D2D10();

void func_8016E9EC(u8 *arg0) {
    s32 i;
    s32 base;
    s32 k;
    u8 off;
    u8 j;

    i = arg0[0] - 1;
    off = D_801908C0[i];
    base = D_801908A8[i];
    j = i;
    k = (s16)i; /* MATCH-TRICK: the redundant (s16) leaves this copy for combine (cse would fold a plain k = i), so i dies before the first call and sched1 keeps the u8 copy j in that call's delay slot */
    func_800D2D10(func_800D2CA8(arg0[3], 0x1C), 1, off + base, 0);
    func_80024054(base, arg0 + 8);
    arg0[3] = j;
    AF(arg0, s16, 4) = -0xD7;
    AF(arg0, u16, 6) = D_801908C4[k];
    arg0[2] = 0;
    arg0[1]++;
    func_8016EC0C(arg0, 0x80);
}

void func_8016EAC0(u8 *arg0) {
    u8 temp_v0;

    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + D_801908CC[AF(arg0, u8, 2)]);
    func_8016EC0C((s32) arg0, 0x80);
    temp_v0 = AF(arg0, u8, 2) + 1;
    AF(arg0, u8, 2) = temp_v0;
    if ((u32) (temp_v0 & 0xFF) >= 6U) {
        AF(arg0, u8, 2) = 0x20U;
        AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
    }
}

void func_8016EB3C(u8 *arg0) {
    u8 temp_v1;

    func_8016EC0C((s32) arg0, (s32) D_801908BC[(AF(arg0, u8, 2) & 3)]);
    temp_v1 = AF(arg0, u8, 2);
    AF(arg0, u8, 2) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 2) = 5U;
        AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
    }
}

void func_8016EBA8(u8 *arg0) {
    u8 temp_v1;

    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) - D_801908CC[AF(arg0, u8, 2)]);
    func_8016EC0C((s32) arg0, 0x80);
    temp_v1 = AF(arg0, u8, 2);
    AF(arg0, u8, 2) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 0) = 0;
    }
}

extern u8 D_801908B8[];
extern void func_80017B98();

void func_8016EC0C(u8 *arg0, s32 arg1) {
    struct { s16 x, y; s32 m; s16 w, h, u, v; u8 r, g, b; s32 z; u8 t; } s;
    u16 x;
    u16 y;
    u16 *p;

    s.r = s.g = s.b = arg1;
    s.t = D_801908B8[AF(arg0, u8, 3)];
    s.u = 0x640;
    s.v = 0x1C8;
    s.z = 0;
    s.w = 0x28;
    s.h = 8;
    x = AF(arg0, u16, 4);
    s.x = x + 0x10;
    y = AF(arg0, u16, 6);
    s.m = 0x10;
    s.y = y;
    func_80017B98(&s);
    s.w = 8;
    y += 0xA;
    p = (u16 *)(arg0 + 8);
    while (*p != 0xFFFF) {
        switch (*p) {
        case 0x1850:
        case 0x1858:
            s.x = x + 4;
            s.y = y - 7;
            break;
        case 0x3872:
            x += 2;
            p++;
            continue;
        default:
            s.x = x;
            x += 8;
            s.y = y;
            break;
        }
        s.u = *(u8 *)p + 0x500;
        s.v = (*p++ >> 8) + 0x100;
        func_80017B98(&s);
    }
}

void func_8016ED6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80146C3C(arg0, arg1, arg2, arg3);
}

void func_8016ED8C(s32 arg0, s32 arg1, s32 arg2) {
    func_8016EDEC(arg0, arg1);
    D_80126D70 = arg2;
}

void func_8016EDBC(s32 arg0, s32 arg1, s32 arg2) {
    func_8016EE40(arg0, arg1);
    D_80126D70 = arg2;
}

void func_8016EDEC(s32 arg0, s32 arg1) {
    func_8016EE94(arg0, arg1);
    if ((u16)(AF(&D_80126B58, u16, 0) - 0x19) >= 2) {
        func_801599A4(&D_80126B58);
        func_80159B3C(&D_80126B58);
    }
}

extern s32 func_8016EF78();

void func_8016EE40(s32 arg0, s32 arg1) {
    func_8016EF78();
    if ((u16)(AF(&D_80126B58, u16, 0) - 0x19) >= 2) {
        func_801599A4(&D_80126B58);
        func_80159B3C(&D_80126B58);
    }
}

void func_8016EE94(s32 arg0, s32 arg1) {
    s32 t;
    t = arg0 | 0x04000000;
    D_80126D50 = t | arg1;
    D_80126D54 = 0;
    D_80126D6C = 0;
    D_80126D6D = 0;
    D_80126D6E = 0;
    D_80126D5C = 0;
    D_80126D60 = 0;
    D_80126D64 = 0;
    D_80126D66 = 0;
    D_80126D68 = 0;
    D_80126D6A = 0;
    D_80126D1A = 0;
    D_80127058 = 0;
    D_8012705C = 0;
    D_80127060 = 0;
    D_80127064 = 0;
    D_80127068 = 0;
    D_8012706C = 0;
    D_80127070 = 0;
    D_80127074 = 0;
    func_801726D0(&D_80126B58);
    D_800B9A17 = 0;
    D_80126D20 = 0;
}

s32 func_8016EF78(void) {
    func_8016EFC8();
    return func_801726D0((s32) &D_80126B58);
}

void func_8016EFA8(void) {
    func_8016EFC8();
}

void func_8016EFC8(s32 arg0, s32 arg1) {
    s32 v = AF(arg0, s32, 0) | 0x4000000;
    D_80126D6C = 1;
    D_80126D54 = arg0;
    D_80126D6D = 0;
    D_80126D6E = 0;
    D_80126D5C = 0;
    D_80126D60 = 0;
    D_80126D64 = 0;
    D_80126D66 = 0;
    D_80126D68 = 0;
    D_80126D6A = 0;
    D_80126D1A = 0;
    D_80127058 = 0;
    D_8012705C = 0;
    D_80127060 = 0;
    D_80127064 = 0;
    D_80127068 = 0;
    D_8012706C = 0;
    D_80127070 = 0;
    D_80127074 = 0;
    D_800B9A17 = 0;
    D_80126D20 = 0;
    D_80126D50 = v | arg1;
}

void func_8016F094(u8 *arg0) {
    AF(arg0, s32, 0x1F8) = (s32) (AF(arg0, s32, 0x1F8) & 0xFBFFFFFF);
}

void func_8016F0AC(void) {
    func_8016F0E4((s32) &D_80126B58);
    func_80165770((s32) &D_80126B58);
}

void func_8016F0E4(s32 arg0) {
    AF(arg0, s32, 0x1F8) = 0;
    AF(arg0, s32, 0x1FC) = 0;
    func_8017196C(arg0, 0);
    BeginScene(arg0);
    func_801511A8(arg0);
    if (D_80078EB4 != 0) {
        D_800B9A17 = 1;
    }
    func_80148634(arg0);
}

void func_8016F14C(u8 *arg0) {
    s32 v = AF(arg0, s32, 0x1F8);
    void (*f)() = (void (*)())(v & 0x80FFFFFF);

    if (v != 0) {
        if (v & 0x01000000) {
            func_80148634(arg0);
        }
        f(arg0);
    }
}

s32 func_8016F1AC(s32 arg0) {
    return D_80126D50 & 0x80FFFFFF;
}

extern s32 D_801908E8[];

s32 func_8016F1C4(void) {
    Player *pl = &D_80126B58;
    s32 *p = D_801908E8;
    s32 v;

    for (v = *p++; v != 0; v = *p++) {
        if (D_800B9A08 == v) {
            return 1;
        }
    }
    if ((AF(pl, s32, 0x1F8) & 0x80FFFFFF) && (AF(pl, s32, 0x1F8) & 0x10000000)) {
        return 0;
    }
    return AF(pl, s32, 0x1F8) & 0x80FFFFFF;
}

void func_8016F250(void) {
    D_80126D1A = 1;
}

s32 func_8016F264(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 & 0xFEFFFFFF;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F288(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 | 0x01000000;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F2A8(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 | 0x02000000;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F2C8(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 & 0xFDFFFFFF;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F2EC(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 | 0x08000000;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F30C(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 & 0xF7FFFFFF;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F330(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 | 0x10000000;
    D_80126D50 = temp_v0;
    return temp_v0;
}

s32 func_8016F350(void) {
    s32 temp_v0;

    temp_v0 = D_80126D50 & 0xEFFFFFFF;
    D_80126D50 = temp_v0;
    return temp_v0;
}

void func_8016F374(void) {
    D_800B9A17 = 1;
}

void func_8016F388(void) {
    D_800B9A17 = 0;
}

void func_8016F398(void) {
    func_80029124(0x125, 0);
    func_80029124(0x126, 0);
    func_80029124(0x127, 0);
    func_80029124(0x128, 0);
    func_80029124(0x129, 0);
    func_80029124(0x12A, 0);
    func_80029124(0x12B, 0);
    func_80029124(0x12C, 0);
}

s32 func_8016F410(s32 arg0) {
    if (func_8016F44C() != 0) {
        func_8016F470(arg0);
        return 1;
    }
    return 0;
}

s32 func_8016F44C(s32 arg0) {
    return (func_80029178(arg0 + 0x125) & 0xFF) != 0;
}

void func_8016F470(s32 arg0) {
    func_80029124(arg0 + 0x125, 0);
}

void func_8016F494(s32 arg0) {
    func_80175414();
    func_8016F4C4(arg0);
}

void func_8016F4C4(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_8016F4F4(void) {
}

void func_8016F4FC(s32 arg0) {
    func_801719A4(arg0, 1);
    func_800D1724(D_8011F738);
    func_80171928(arg0);
}

void func_8016F540(s32 arg0) {
    func_8014708C();
    func_801472C8(arg0);
    func_80171928(arg0);
}

void func_8016F578(s32 arg0) {
    func_80147084(arg0);
    func_801472B4(arg0);
    func_80171928(arg0);
}

void func_8016F5B0(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    func_80171928(arg0);
}

void func_8016F5E0(s32 arg0) {
    BeginScene(arg0);
    func_80171928(arg0);
}

void func_8016F610(s32 arg0) {
    func_8016F288();
    func_80148634(arg0);
    func_80171928(arg0);
}

void func_8016F648(s32 arg0) {
    func_8016F264();
    func_80148634(arg0);
    func_80171928(arg0);
}

void func_8016F680(s32 arg0) {
    func_8016F350();
    func_80171928(arg0);
}

void func_8016F6B0(s32 arg0) {
    func_8016F330();
    func_80171928(arg0);
}

void func_8016F6E0(u8 *arg0) {
    D_80190960[AF(arg0, u8, 0x216)]();
}

void func_8016F71C(s32 arg0) {
    func_801719A4(arg0, 1);
    AF(arg0, s32, 0x200) = (s32) D_8011F738;
    func_80171990(arg0);
    func_8016F764(arg0);
}

void func_8016F764(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171928(arg0);
    }
}

void func_8016F798(u8 *arg0) {
    D_80190968[AF(arg0, u8, 0x216)]();
}

void func_8016F7D4(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_8016F804(arg0);
}

void func_8016F804(s32 arg0) {
    if (AF(arg0, u8, 0x1C2) != 0) {
        AF(arg0, u8, 0x1C2) = 0U;
        func_80171928(arg0);
    }
}

void func_8016F834(u8 *arg0) {
    D_80190970[AF(arg0, u8, 0x216)]();
}

void func_8016F870(s32 arg0) {
    func_801719A4(arg0, 2);
    func_80171990(arg0);
    func_8016F8AC(arg0);
}

s32 func_8016F8AC(s32 arg0) {
    func_80172358(arg0, (s32) &D_8011F738);
    return func_80171928(arg0);
}

void func_8016F8E4(u8 *arg0) {
    D_80190978[AF(arg0, u8, 0x216)]();
}

void func_8016F920(s32 arg0) {
    func_801719A4(arg0, 2);
    func_80171990(arg0);
    func_8016F95C(arg0);
}

extern s32 StepToward();

void func_8016F95C(s32 arg0) {
    s32 var_v0;
    u16 *p = &D_8011F73E;

    if (*p == 0) {
        var_v0 = StepToward(arg0, (s32) ((u8 *) p - 6));
    } else {
        var_v0 = func_80171D1C(arg0, (s32) ((u8 *) p - 6), *p & 0xFF);
    }
    if (var_v0 != 0) {
        func_80171928(arg0);
    }
}

void func_8016F9C4(u8 *arg0) {
    D_80190980[AF(arg0, u8, 0x216)]();
}

extern void func_80171B44();
extern s32 func_8016FA44();

void func_8016FA00(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171B44(arg0);
    func_80171990(arg0);
    func_8016FA44(arg0);
}

s32 func_8016FA44(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80171C64(arg0, (s32) (*(u8 *)&D_8011F738));
    if (var_v0 != 0) {
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_8016FA84(u8 *arg0) {
    D_80190988[AF(arg0, u8, 0x216)]();
}

void func_8016FAC0(u8 *arg0) {
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, u16, 0x132) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
    func_801719A4((s32) arg0, 2);
    func_80171990((s32) arg0);
    func_8016FB10((s32) arg0);
}

void func_8016FB10(s32 arg0) {
    if (StepToward(arg0, (s32) &D_8011F738) != 0) {
        func_80171990(arg0);
    }
}

void func_8016FB50(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x136) = 0;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x132);
    func_80171928((s32) arg0, arg1);
}

void func_8016FB7C(u8 *arg0) {
    D_80190994[AF(arg0, u8, 0x216)]();
}

extern void func_8016FC24();

void func_8016FBB8(u8 *arg0) {
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, u16, 0x132) = AF(AF(arg0, void *, 0x20), u16, 0x12);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF;
    func_801719A4((s32) arg0, 1);
    func_80171B44((s32) arg0);
    func_80171990((s32) arg0);
    func_8016FC24((s32) arg0);
}

void func_8016FC24(s32 arg0) {
    if (func_80171B4C(arg0, (s32) (*(u8 *)&D_8011F738)) != 0) {
        func_80171990(arg0);
    }
}

void func_8016FC64(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x136) = 0;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x132);
    func_80171928((s32) arg0, arg1);
}

void func_8016FC90(u8 *arg0) {
    D_801909A0[AF(arg0, u8, 0x216)]();
}

void func_8016FCCC(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_8016FD08(arg0);
}

void func_8016FD08(s32 arg0) {
    s32 *p;

    if (func_80172658() != 0) {
        func_80146D90(arg0);
        AF(arg0, u16, 0xAC) |= 0x40;
        AF(arg0, u16, 0xAA) |= 0x40;
        p = &D_8011F738;
        if (--*p == 0) {
            func_80171990(arg0);
        }
    }
}

void func_8016FD7C(s32 arg0) {
    if (func_80172658() != 0) {
        func_80171928(arg0);
    }
}

void func_8016FDB4(u8 *arg0) {
    D_801909AC[AF(arg0, u8, 0x216)]();
}

void func_8016FDF0(s32 arg0) {
    func_801719A4(arg0, 2);
    func_80171990(arg0);
    func_8016FE2C(arg0);
}

void func_8016FE2C(u8 *arg0) {
    if (func_80172658(arg0) != 0) {
        AF(arg0, u16, 0xAC) |= 0x40;
        AF(arg0, u16, 0xAA) |= 0x40;
        func_80171990(arg0);
    }
}

void func_8016FE78(u8 *arg0) {
    AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    if (D_8011F73E != 0) {
        func_801477E8((s32) arg0, D_8011F73E << 0x10);
    }
    func_80171990((s32) arg0);
}

void func_8016FED0(s32 arg0) {
    if (func_80172664(arg0) != 0) {
        AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    }
    if (StepToward(arg0, (s32) &D_8011F738) != 0) {
        func_80171928(arg0);
    }
}

void func_8016FF30(u8 *arg0) {
    D_801909BC[AF(arg0, u8, 0x216)]();
}

void func_8016FF6C(s32 arg0) {
    func_801719A4(arg0, 2);
    func_80171990(arg0);
    func_8016FFA8(arg0);
}

void func_8016FFA8(s32 arg0) {
    AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x40);
    AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    func_80171990(arg0);
}

void func_8016FFDC(u8 *arg0) {
    D_801909CC[AF(arg0, u8, 0x216)]();
}

void func_80170018(s32 arg0) {
    func_801719A4(arg0, 1);
    AF(arg0, s32, 0x198) = func_8013767C(D_8011F738);
    func_80171990(arg0);
    func_80170068(arg0);
}

s32 func_80170068(s32 arg0) {
    s32 var_v0;

    var_v0 = func_801399F0(AF(arg0, s32, 0x198));
    if (var_v0 != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_801700B8(s32 arg0) {
    func_801719A4(arg0, 1);
    AF(arg0, s32, 0x198) = func_8013767C(D_8011F738);
    func_80171928(arg0);
}

void func_80170100(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        func_80171928((s32) arg0);
    }
}

void func_80170150(u8 *arg0) {
    D_801909D4[AF(arg0, u8, 0x216)]();
}

void func_8017018C(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_801701C8(arg0);
}

s32 func_801701C8(s32 arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0_2 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) (*(s16 *)&D_8011F738), 4);
    if ((temp_v0_2 << 0x10) == 0) {
        func_80171928(arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = ((u16) AF(temp_v1, s16, 0x12) + temp_v0_2) & 0xFFF;
    AF(temp_v1, s16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_80170240(u8 *arg0) {
    D_801909DC[AF(arg0, u8, 0x216)]();
}

void func_8017027C(s32 arg0) {
    func_801719A4(arg0, 2);
    func_80171990(arg0);
    func_801702B8(arg0);
}

s32 func_801702B8(s32 arg0) {
    s32 var_v0;

    var_v0 = ActionHelper_1AB0(arg0, (s32) &D_8011F738) << 0x10;
    if (var_v0 == 0) {
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_801702FC(u8 *arg0) {
    D_801909E4[AF(arg0, u8, 0x216)]();
}

void func_80170338(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_80170374(arg0);
}

void func_80170374(s32 arg0) {
    s16 sp[3];
    u8 *temp_v0;

    temp_v0 = (u8 *) func_8014C168(arg0, D_8011F738);
    sp[0] = AF(temp_v0, s16, 6);
    sp[1] = AF(temp_v0, s16, 0xA);
    sp[2] = AF(temp_v0, s16, 0xE);
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        func_80171928(arg0);
    }
}

void func_801703E0(u8 *arg0) {
    D_801909EC[AF(arg0, u8, 0x216)]();
}

void func_8017041C(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_8017044C(arg0);
}

void func_8017044C(s32 arg0) {
    s16 sp[3];

    sp[0] = D_801151D4[15];
    sp[1] = D_801151D4[16];
    sp[2] = D_801151D4[17];
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        func_80171928(arg0);
    }
}

void func_801704B0(u8 *arg0) {
    D_801909F4[AF(arg0, u8, 0x216)]();
}

void func_801704EC(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_8017051C(arg0);
}

s32 func_8017051C(s32 arg0) {
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) D_800AE6DC;
    return func_80171928(arg0);
}

void func_80170548(u8 *arg0) {
    D_801909FC[AF(arg0, u8, 0x216)]();
}

void func_80170584(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_801705C0(arg0);
}

void func_801705C0(s32 arg0) {
    ((void (*)())D_8011F738)();
    func_80171928(arg0);
}

void func_801705F8(u8 *arg0) {
    D_80190A04[AF(arg0, u8, 0x216)]();
}

void func_80170634(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_80170670(arg0);
}

s32 func_80170670(s32 arg0) {
    func_8012A568(D_8011F738);
    return func_80171928(arg0);
}

void func_801706AC(u8 *arg0) {
    D_80190A0C[AF(arg0, u8, 0x216)]();
}

void func_801706E8(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_80170718(arg0);
}

s32 func_80170718(s32 arg0) {
    func_80129FF4();
    return func_80171928(arg0);
}

void func_80170748(u8 *arg0) {
    D_80190A14[AF(arg0, u8, 0x216)]();
}

extern s32 func_801707D4();

void func_80170784(s32 arg0) {
    func_801719A4(arg0, 1);
    ((void (*)())D_8011F738)();
    func_80171990(arg0);
    func_801707D4(arg0);
}

s32 func_801707D4(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80174ED4() << 0x10;
    if (var_v0 != 0) {
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_80170810(u8 *arg0) {
    D_80190A1C[AF(arg0, u8, 0x216)]();
}

extern u8 D_800D5DA8;
extern void EndScene();
extern s32 func_801708B0();

void func_8017084C(s32 arg0) {
    func_801719A4(arg0, 1);
    EndScene(arg0);
    func_80154274(arg0, (s32) &D_800D5DA8);
    func_8016BADC(arg0, -0x40, 0x40);
    func_80171990(arg0);
    func_801708B0(arg0);
}

s32 func_801708B0(s32 arg0) {
    u16 sp10[3];
    s32 sp18;
    void *temp_v0;

    func_801484B0((s32) sp10, (s32) &sp18);
    func_80149350(arg0, (s32) sp10, (s32) sp10);
    temp_v0 = func_8014C168(arg0, D_8011F738);
    AF(temp_v0, u16, 6) = sp10[0];
    AF(temp_v0, u16, 0xA) = sp10[1];
    AF(temp_v0, u16, 0xE) = sp10[2];
    return func_80171928(arg0);
}

s32 func_80171904(s32 arg0);
void func_80170AD8(u8 *arg0);

void func_80170928(void) {
    D_8011F738 = &D_800D5A34;
    func_80171904((s32) func_80170AD8);
    func_80170B48((s32) &D_80126B58);
}

void func_80170970(void) {
    D_8011F738 = &D_800D59EC;
    func_80171904((s32) func_80170AD8);
    func_80170B48((s32) &D_80126B58);
}

void func_801709B8(void) {
    D_8011F738 = &D_800D599C;
    func_80171904((s32) func_80170AD8);
    func_80170B48((s32) &D_80126B58);
}

void func_80170A00(void) {
    D_8011F738 = &D_800D5934;
    func_80171904((s32) func_80170AD8);
    func_80170B48((s32) &D_80126B58);
}

extern u8 D_800D5DA8;

void func_80170A48(void) {
    D_8011F738 = &D_800D5DA8;
    func_80171904((s32) func_80170AD8);
    func_80170B48((s32) &D_80126B58);
}

extern u8 D_800D5DC0;

void func_80170A90(void) {
    D_8011F738 = &D_800D5DC0;
    func_80171904((s32) func_80170AD8);
    func_80170B48((s32) &D_80126B58);
}

void func_80170AD8(u8 *arg0) {
    D_80190A24[AF(arg0, u8, 0x216)]();
}

void func_80170B14(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80170B48(arg0);
}

extern s32 func_80170B90();

void func_80170B48(s32 arg0) {
    EndScene(arg0);
    func_80154274(arg0, D_8011F738);
    func_80171990(arg0);
    func_80170B90(arg0);
}

s32 func_80170B90(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene(arg0);
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_80170BD8(u8 *arg0) {
    D_80190A2C[AF(arg0, u8, 0x216)]();
}

void func_80170C14(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_80170C44(arg0);
}

s32 func_80170C44(s32 arg0) {
    BeginScene(arg0);
    return func_80171928(arg0);
}

void func_80170C74(u8 *arg0) {
    D_80190A34[AF(arg0, u8, 0x215)]();
}

void func_80170CB0(s32 arg0) {
    func_801719A4(arg0, 3);
    AF(arg0, u8, 0x217) = 0;
    func_8017197C(arg0);
    func_80170CF0(arg0);
}

void func_80170CF0(s32 arg0) {
    ((void (*)())D_8011F738)(arg0);
    switch (AF(arg0, u8, 0x217)) {
    case 0:
        break;
    case 1:
        func_801718AC(D_8011F73C);
        break;
    case 2:
        func_801718AC(D_8011F740);
        break;
    }
}

void func_80170D68(u8 *arg0) {
    D_80190A3C[AF(arg0, u8, 0x216)]();
}

void func_80170DA4(s32 arg0) {
    func_801719A4(arg0, 3);
    func_80171990(arg0);
    func_80170DE0(arg0);
}

s32 func_80170DE0(s32 arg0) {
    s32 var_a0;

    if (func_80029178(D_8011F738) & 0xFF) {
        var_a0 = D_8011F740;
    } else {
        var_a0 = D_8011F73C;
    }
    return func_801718AC(var_a0);
}

void func_80170E34(u8 *arg0) {
    D_80190A44[AF(arg0, u8, 0x216)]();
}

void func_80170E70(s32 arg0) {
    func_801719A4(arg0, 3);
    func_80171990(arg0);
    func_80170EAC(arg0);
}

s32 func_80170EAC(s32 arg0) {
    s32 var_a0;

    if (func_800D0F8C((s32) (*(u8 *)&D_8011F738)) != 0) {
        var_a0 = D_8011F73C;
    } else {
        var_a0 = D_8011F740;
    }
    return func_801718AC(var_a0);
}

void func_80170EFC(u8 *arg0) {
    D_80190A4C[AF(arg0, u8, 0x216)]();
}

void func_80170F38(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_80170F74(arg0);
}

s32 func_80170F74(s32 arg0) {
    func_80029124(D_8011F738, 1);
    return func_80171928(arg0);
}

void func_80170FB0(u8 *arg0) {
    D_80190A54[AF(arg0, u8, 0x216)]();
}

void func_80170FEC(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_80171028(arg0);
}

s32 func_80171028(s32 arg0) {
    func_80029124(D_8011F738, 0);
    return func_80171928(arg0);
}

void func_80171064(u8 *arg0) {
    D_80190A5C[AF(arg0, u8, 0x216)]();
}

void func_801710A0(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_801710DC(arg0);
}

s32 func_801710DC(s32 arg0) {
    func_8002D4C8((s32) (*(u16 *)&D_8011F738), (s32) D_8011F73A);
    return func_80171928(arg0);
}

void func_80171120(u8 *arg0) {
    D_80190A64[AF(arg0, u8, 0x216)]();
}

void func_8017115C(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_8017118C(arg0);
}

s32 func_8017118C(s32 arg0) {
    func_80142454(-0x80);
    return func_80171928(arg0);
}

void func_801711C0(u8 *arg0) {
    D_80190A6C[AF(arg0, u8, 0x216)]();
}

void func_801711FC(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80171990(arg0);
    func_80171238(arg0);
}

s32 func_80171238(s32 arg0) {
    return func_801718AC(D_8011F738);
}

void func_80171260(u8 *arg0) {
    D_80190A74[AF(arg0, u8, 0x216)]();
}

extern u8 D_800A5E88;
extern u8 D_800A5E98;
extern u8 D_800A5EA8;
extern void func_80171384();

void func_8017129C(s32 arg0) {
    s32 p;

    func_801719A4(arg0, 1);
    p = D_8011F738;
    ((VECTOR *)p)[0] = *(VECTOR *)&D_800A5E88;
    ((VECTOR *)p)[1] = *(VECTOR *)&D_800A5E98;
    ((VECTOR *)p)[2] = *(VECTOR *)&D_800A5EA8;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x20;
    AF(AF(arg0, s32, 0x20), s32, 0x80) = p;
    func_80171990(arg0);
    func_80171384(arg0);
}

extern s32 func_80012F74();

void func_80171384(s32 arg0) {
    u8 temp_a1;
    u8 temp_v0;
    void *temp_s0;

    temp_s0 = D_8011F738;
    AF(temp_s0, u8, 0xC) = func_80012F74((s32) AF(temp_s0, u8, 0xC), 0, 0xA, 1);
    AF(temp_s0, u8, 0xD) = func_80012F74((s32) AF(temp_s0, u8, 0xD), 0, 0xA, 1);
    AF(temp_s0, u8, 0xE) = func_80012F74((s32) AF(temp_s0, u8, 0xE), 0, 0xA, 1);
    AF(temp_s0, u8, 0x1C) = func_80012F74((s32) AF(temp_s0, u8, 0x1C), 0, 0xA, 1);
    AF(temp_s0, u8, 0x1D) = func_80012F74((s32) AF(temp_s0, u8, 0x1D), 0, 0xA, 1);
    AF(temp_s0, u8, 0x1E) = func_80012F74((s32) AF(temp_s0, u8, 0x1E), 0, 0xA, 1);
    AF(temp_s0, u8, 0x2C) = func_80012F74((s32) AF(temp_s0, u8, 0x2C), 0, 0xA, 1);
    AF(temp_s0, u8, 0x2D) = func_80012F74((s32) AF(temp_s0, u8, 0x2D), 0, 0xA, 1);
    temp_v0 = func_80012F74((s32) AF(temp_s0, u8, 0x2E), 0, 0xA, 1);
    AF(temp_s0, u8, 0x2E) = temp_v0;
    temp_a1 = AF(temp_s0, u8, 0x2D);
    if ((AF(temp_s0, u8, 0xC) + AF(temp_s0, u8, 0xD) + AF(temp_s0, u8, 0xE) + AF(temp_s0, u8, 0x1C) + AF(temp_s0, u8, 0x1D) + AF(temp_s0, u8, 0x1E) + AF(temp_s0, u8, 0x2C) + temp_a1 + (temp_v0 & 0xFF)) == 0) {
        func_80171928(arg0, (s32) temp_a1);
    }
}

void func_801714E4(u8 *arg0) {
    D_80190A7C[AF(arg0, u8, 0x216)]();
}

extern u8 D_800A5E88;
extern u8 D_800A5E98;
extern u8 D_800A5EA8;
extern s32 func_8017162C();

void func_80171520(s32 arg0) {
    s32 p;

    func_801719A4(arg0, 1);
    p = D_8011F738;
    AF(p, VECTOR, 0) = *(VECTOR *)&D_800A5E88;
    AF(p, VECTOR, 0x10) = *(VECTOR *)&D_800A5E98;
    AF(p, VECTOR, 0x20) = *(VECTOR *)&D_800A5EA8;
    AF(p, u8, 0xE) = 0;
    AF(p, u8, 0xD) = 0;
    AF(p, u8, 0xC) = 0;
    AF(p, u8, 0x1E) = 0;
    AF(p, u8, 0x1D) = 0;
    AF(p, u8, 0x1C) = 0;
    AF(p, u8, 0x2E) = 0;
    AF(p, u8, 0x2D) = 0;
    AF(p, u8, 0x2C) = 0;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x20;
    AF(AF(arg0, s32, 0x20), s32, 0x80) = p;
    func_80171990(arg0);
    func_8017162C(arg0);
}

s32 func_8017162C(s32 arg0) {
    s32 sp10;
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = D_8011F738;
    sp10 = 0;
    func_801716AC(0, temp_s0, (s32) &sp10);
    func_801716AC(1, temp_s0, (s32) &sp10);
    func_801716AC(2, temp_s0, (s32) &sp10);
    var_v0 = sp10;
    if (var_v0 == 0) {
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern s32 func_80012FC8();

void func_801716AC(s32 arg0, s32 arg1, s32 *arg2) {
    s32 off;
    u8 *p;
    s32 r;

    off = arg0 * 16;
    p = (u8 *)(off + arg1);
    r = (s16)func_80012FC8(AF(p, u8, 0xC), (&D_800A5E94)[off], 0xA, 1);
    *arg2 += r;
    AF(p, u8, 0xC) += r;
    r = (s16)func_80012FC8(AF(p, u8, 0xD), (&D_800A5E95)[off], 0xA, 1);
    *arg2 += r;
    AF(p, u8, 0xD) += r;
    r = (s16)func_80012FC8(AF(p, u8, 0xE), (&D_800A5E96)[off], 0xA, 1);
    *arg2 += r;
    AF(p, u8, 0xE) += r;
}

void func_801717A0(s32 arg0) {
    s32 temp_v0;

    func_801719A4(arg0, 1);
    temp_v0 = func_800D0F8C((s32) (*(u8 *)&D_8011F738));
    if (temp_v0 != 0) {
        func_800D0FE0(temp_v0);
    }
    func_80171928(arg0);
}

void func_801717F4(s32 arg0) {
    func_8013E588();
    func_80171928(arg0);
}

void func_80171824(s32 arg0) {
    func_80175414();
    func_80171928(arg0);
}

void func_80171854(s32 arg0) {
    func_80175454();
    func_80171928(arg0);
}

void func_80171884(s32 arg0, s32 arg1) {
    func_80171928((s32) &D_80126B58, arg1);
}

s32 func_801718AC(s32 *arg0) {
    D_80126D54 = (s32) arg0;
    D_80126D6C = 0;
    D_80126D50 = *arg0 | (D_80126D50 & 0x7F000000);
    NextPhase(&D_80126B58);
}

s32 func_80171904(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_80126D50 & 0x7F000000;
    D_80126D50 = arg0 | temp_v0;
    return temp_v0;
}

s32 func_80171928(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x1F8) = (s32) (AF(arg0, s32 *, 0x1FC)[AF(arg0, u8, 0x214)] | (AF(arg0, s32, 0x1F8) & 0x7F000000));
    NextPhase(arg0);
}

void func_8017196C(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x214) = (s8) arg1;
    AF(arg0, u8, 0x215) = 0;
    AF(arg0, u8, 0x216) = 0;
}

void func_8017197C(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x216) = 0;
    AF(arg0, u8, 0x215) = (u8) (AF(arg0, u8, 0x215) + 1);
}

void func_80171990(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) + 1);
}

void func_801719A4(s32 arg0, s32 arg1) {
    u32 i;

    for (i = 0; i < arg1; i++) {
        *(s32 *)((u8 *)&D_8011F738 + (i << 2)) = AF(arg0, s32 *, 0x1FC)[AF(arg0, u8, 0x214) + i];
    }
    AF(arg0, u8, 0x214) += i;
}

void func_80171A04(u8 *arg0) {
    AF(arg0, u8, 0x217) = 1;
}

void func_80171A10(u8 *arg0) {
    AF(arg0, u8, 0x217) = 2;
}

void NextPhase(s32 arg0) {
    AF(arg0, u8, 0x215) = 0;
    AF(arg0, u8, 0x216) = 0;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void SetPhase(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x214) = (s8) arg1;
    AF(arg0, u8, 0x215) = 0;
    AF(arg0, u8, 0x216) = 0;
}

void BumpSub1(u8 *arg0) {
    AF(arg0, u8, 0x216) = 0;
    AF(arg0, u8, 0x215) = (u8) (AF(arg0, u8, 0x215) + 1);
}

void BumpSub2(u8 *arg0) {
    AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) + 1);
}

void func_80171A6C(u8 *arg0) {
    AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) - 1);
}

void func_80171A80(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x200) = arg1;
}

s32 func_80171A88(u8 *arg0) {
    s32 t = AF(arg0, s32, 0x200);

    if (t != 0) {
        AF(arg0, s32, 0x200) = --t;
        return t == 0;
    }
    return 1;
}

s32 ActionHelper_1AB0(s32 arg0, s32 arg1) {
    s32 temp;

    temp = func_80012B04(AF(AF(arg0, void *, 0x20), s16, 0x12), (s16) func_8014C568(arg0, arg1), 4);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (AF(AF(arg0, void *, 0x20), u16, 0x12) + temp) & 0xFFF;
    return (s16) temp;
}

void func_80171B10(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8014C568(arg0, arg1);
}

void func_80171B44(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x20C) = 0;
}

s32 func_80171B4C(u8 *arg0, s32 arg1) {
    s32 *d = D_801151D4;
    s32 a;
    u8 n = arg1;

    AF(arg0, u8, 0xA9) = 0x41;
    a = (ratan2(AF(d, s32, 0x68) - AF(d, s32, 0x5C), AF(d, s32, 0x70) - AF(d, s32, 0x64)) + 0x800) & 0xFFF;
    switch (((AF(AF(arg0, void *, 0x20), s16, 0x12) - a + 0x100) & 0xE00) / 512) {
    case 0: AF(arg0, u16, 0xAA) = 0x1000; break;
    case 1: AF(arg0, u16, 0xAA) = 0x3000; break;
    case 2: AF(arg0, u16, 0xAA) = 0x2000; break;
    case 3: AF(arg0, u16, 0xAA) = 0x6000; break;
    case 4: AF(arg0, u16, 0xAA) = 0x4000; break;
    case 5: AF(arg0, u16, 0xAA) = 0xC000; break;
    case 6: AF(arg0, u16, 0xAA) = 0x8000; break;
    case 7: AF(arg0, u16, 0xAA) = 0x9000; break;
    }
    if (AF(arg0, u8, 0x20C)++ == n) {
        func_80146D90(arg0);
        return 1;
    }
    return 0;
}

extern void func_80171EC8();

s32 func_80171C64(s32 arg0, s32 arg1) {
    u8 temp_v0;

    func_80171EC8(arg0, arg1);
    temp_v0 = AF(arg0, u8, 0x20C)++;
    if (temp_v0 == (u8) arg1) {
        func_80146D90(arg0);
        return 1;
    }
    return 0;
}

extern s32 func_80171D78();

s32 StepToward(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = func_80171D78(arg0, arg1);
    if (func_8017250C(arg0, arg1) != 0) {
        func_80146D90(arg0);
    }
    return temp_s0;
}

s32 func_80171D1C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = func_80171FFC(arg0, arg1, arg2 & 0xFF);
    if (func_8017250C(arg0, arg1) != 0) {
        func_80146D90(arg0);
    }
    return temp_s0;
}

extern s32 func_8017248C();

s32 func_80171D78(s32 arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = func_8017248C(arg0, arg1);
    if (temp_s2 != 0) {
        func_80146D90(arg0);
        return temp_s2;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    func_80171EC8(arg0);
    return 0;
}

s32 func_80171E08(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 a;

    temp_s2 = func_8017248C(arg0, arg1);
    if (temp_s2 != 0) {
        func_80146D90(arg0);
        return temp_s2;
    }
    a = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    if (arg2 != 0) {
        a = (s16)func_80012DBC(AF(AF(arg0, u8 *, 0x20), s16, 0x12), a, (s16)arg2, 1);
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
    func_80171EC8(arg0);
    return 0;
}

void func_80171EC8(u8 *arg0) {
    s32 *p;
    s32 a;
    s32 hi;
    s32 lo;

    p = D_801151D4;
    AF(arg0, u8, 0xA9) = 0x73;
    a = (ratan2(AF(p, s32, 0x68) - AF(p, s32, 0x5C), AF(p, s32, 0x70) - AF(p, s32, 0x64)) + 0x800) & 0xFFF;
    a = (AF(AF(arg0, u8 *, 0x20), s16, 0x12) - a) & 0xFF8;
    if (a == 0x400 || a == 0xC00) {
        hi = 0x80;
    } else {
        hi = -(rcos(a) << 7) / 4096 + 0x80;
    }
    if (hi < 0) {
        hi = 0;
    }
    if (hi > 0xFF) {
        hi = 0xFF;
    }
    if (a == 0 || a == 0x800) {
        lo = 0x80;
    } else {
        lo = rsin(a) / 32 + 0x80;
    }
    if (lo < 0) {
        lo = 0;
    }
    if (lo > 0xFF) {
        lo = 0xFF;
    }
    AF(arg0, u16, 0xAE) = (lo & 0xFF) | (hi << 8);
}

extern s32 func_8017248C();
extern void func_80172170();

s32 func_80171FFC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8017248C(arg0, arg1);
    if (temp_v0 != 0) {
        func_80146D90(arg0);
        return temp_v0;
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    func_80172170(arg0, arg2 & 0xFF);
    return 0;
}

s32 func_8017209C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;
    u8 a2 = arg2;

    temp_v0 = func_8017248C(arg0, arg1);
    if (temp_v0 != 0) {
        func_80146D90(arg0);
        return temp_v0;
    }
    var_v1 = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    if (arg3 != 0) {
        var_v1 = (s16)func_80012DBC(AF(AF(arg0, void *, 0x20), s16, 0x12), var_v1, (s16)arg3, 1);
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = var_v1;
    func_80172170(arg0, a2);
    return 0;
}

void func_80172170(s32 arg0, s32 arg1) {
    s32 a, c, s;
    u8 b = arg1;
    s32 *p = D_801151D4;

    AF(arg0, u8, 0xA9) = 0x73;
    a = (ratan2(p[0x1A] - p[0x17], p[0x1C] - p[0x19]) + 0x800) & 0xFFF;
    a = (AF(AF(arg0, void *, 0x20), s16, 0x12) - a) & 0xFF8;
    if (a == 0x400 || a == 0xC00) {
        c = 0x80;
    } else {
        s32 h = b; /* MATCH-TRICK: an int-typed copy of the u8 b gives the original sra (b >> 1 is shortened to srl) */
        c = (-(h >> 1) * rcos(a)) / 4096 + 0x80;
    }
    if (c < 0) {
        c = 0;
    }
    if (c >= 0x100) {
        c = 0xFF;
    }
    if (a == 0 || a == 0x800) {
        s = 0x80;
    } else {
        s32 h = b; /* MATCH-TRICK: an int-typed copy of the u8 b gives the original sra (b >> 1 is shortened to srl) */
        s = ((h >> 1) * rsin(a)) / 4096 + 0x80;
    }
    if (s < 0) {
        s = 0;
    }
    if (s >= 0x100) {
        s = 0xFF;
    }
    AF(arg0, s16, 0xAE) = (u8)s | (c << 8);
}

void func_801722CC(s32 arg0) {
    if (func_80172664(arg0) == 0) {
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
    }
}

void func_80172304(u8 *arg0) {
    AF(arg0, s16, 0xAA) = 0x40;
}

void func_80172310(s32 arg0) {
    func_80172358(&D_80126B58, arg0);
    AF(D_80126B78, u16, 0x12) = AF(arg0, u16, 6);
}

void func_80172358(s32 arg0, s32 arg1) {
    AF(arg0, u16, 6) = AF(arg1, u16, 0);
    AF(arg0, u16, 0xA) = AF(arg1, u16, 2);
    AF(arg0, u16, 0xE) = AF(arg1, u16, 4);
    AF(arg0, SVECTOR, 0x90) = AF(arg1, SVECTOR, 0);
    AF(arg0, SVECTOR, 0x88) = AF(arg0, SVECTOR, 0x90);
}

s32 func_801723C4(s32 arg0, s32 arg1) {
    func_801599A4(arg0, arg1);
    func_80147078(arg0, 0xD);
    AF(arg0, s32, 0x178) = arg1;
    return func_8014A1B0(arg0, arg1);
}

void func_80172414(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x2000) {
        func_80161C24(arg0, AF(arg0, u16, 0x16E));
    }
    if (AF(arg0, s32, 0x2C) < -0x70000 && !(D_800B99DA & 7)) {
        func_8014C010(arg0, 2);
    }
}

extern s32 func_801724EC();

s32 func_8017248C(s32 arg0, s32 arg1) {
    if (func_801724EC(arg0, arg1) != 0) {
        AF(arg0, u16, 6) = AF(arg1, u16, 0);
        AF(arg0, u16, 0xA) = AF(arg1, u16, 2);
        AF(arg0, u16, 0xE) = AF(arg1, u16, 4);
        return 1;
    }
    return 0;
}

extern s32 func_80013450();

s32 func_801724EC(s32 arg0, s32 arg1) {
    return func_80013450(arg0 + 4, arg1) < 0x10;
}

extern s32 func_80172560();

s32 func_8017250C(s32 arg0, s32 arg1) {
    if (func_80172560(arg0, arg1) != 0) {
        AF(arg0, u16, 6) = AF(arg1, u16, 0);
        AF(arg0, u16, 0xE) = AF(arg1, u16, 4);
        return 1;
    }
    return 0;
}

extern s32 func_80013450();

s32 func_80172560(s32 arg0, s32 arg1) {
    AF(arg1, u16, 2) = AF(arg0, u16, 0xA);
    return func_80013450(arg0 + 4, arg1) < 0x10;
}

void func_80172588(s32 arg0) {
    AF(arg0, s32, 0x1F4) = 0;
}

s32 func_80172590(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 1;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_801725A4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 2;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_801725B8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 4;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_801725CC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 8;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_801725E0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x10;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_801725F4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x20;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_80172608(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x40;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

void func_8017261C(u8 *arg0) {
    AF(arg0, s32, 0x1F4) = (s32) (AF(arg0, s32, 0x1F4) | 0x80);
}

s32 func_80172630(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x100;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_80172644(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x200;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 func_80172658(arg0)
    s32 arg0;
{
    return AF(arg0, s32, 0x1F4) & 1;
}

s32 func_80172664(s32 arg0) {
    return AF(arg0, s32, 0x1F4) & 2;
}

s32 func_80172670(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 4;
}

s32 func_8017267C(s32 arg0) {
    return AF(arg0, s32, 0x1F4) & 8;
}

s32 func_80172688(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x10;
}

s32 func_80172694(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x20;
}

s32 func_801726A0(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x40;
}

s32 func_801726AC(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x80;
}

s32 func_801726B8(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x100;
}

s32 func_801726C4(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x200;
}

extern s16 D_80126B0C;
extern s32 ClearActionHandler();

s32 func_801726D0(s32 arg0) {
    D_80127088 = (s32) func_80172760;
    D_801270BC = 0;
    D_80126B0C = 0;
    return ClearActionHandler(arg0);
}

void func_80172710(void) {
    ((void (*)())D_80127088)();
}

s32 func_80172738(void) {
    return SetActionHandler((s32) &func_80172760);
}

void func_80172760(s32 arg0, s32 arg1) {
    ClearActionHandler(arg0, arg1);
}

extern void func_801727D0();

void func_80172780(u8 *arg0) {
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg0;
    SetActionHandler((s32) &func_801727D0);
}

void func_801727D0(u8 *arg0) {
    D_80190A8C[AF(arg0, u8, 0x214)]();
}

void func_8017280C(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172844(arg0);
}

s32 func_80172844(s32 arg0) {
    s32 var_v0;

    var_v0 = StepToward(arg0, (s32) &D_80126B30);
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_8017288C(void) {
}

extern void func_801728E4();

void func_80172894(u8 *arg0) {
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg0;
    SetActionHandler((s32) &func_801728E4);
}

void func_801728E4(u8 *arg0) {
    D_80190A98[AF(arg0, u8, 0x214)]();
}

void func_80172920(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172958(arg0);
}

s32 func_80172958(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80171D1C(arg0, (s32) &D_80126B30, (s32) D_80126B36);
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_801729A8(void) {
}

s32 func_801729B0(s32 arg0) {
    D_80126B34 = (s16) arg0;
    D_80126B30 = 0;
    D_80126B32 = 0;
    return SetActionHandler((s32) &func_801729F0);
}

void func_801729F0(u8 *arg0) {
    D_80190AA4[AF(arg0, u8, 0x214)]();
}

void func_80172A2C(s32 arg0) {
    BeginScene(arg0);
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, u16, 0x132) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
    func_80149350(arg0, (s32) &D_80126B30, (s32) &D_80126B30);
    NextPhase(arg0);
    func_80172A8C(arg0);
}

s32 func_80172A8C(s32 arg0) {
    s32 var_v0;

    var_v0 = StepToward(arg0, (s32) &D_80126B30);
    if (var_v0 != 0) {
        var_v0 = ((s32 (*)())NextPhase)(arg0);
    }
    return var_v0;
}

void func_80172ACC(u8 *arg0) {
    AF(arg0, s16, 0x136) = 0;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x132);
    NextPhase((s32) arg0);
    ClearActionHandler((s32) arg0);
}

void func_80172B0C(void) {
}

s32 func_80172B14(s32 arg0) {
    D_80126B32 = (s16) arg0;
    return SetActionHandler((s32) &func_80172B44);
}

void func_80172B44(u8 *arg0) {
    D_80190AB4[AF(arg0, u8, 0x214)]();
}

void func_80172B80(s32 arg0) {
    if (D_801150F8 == 0) {
        BeginScene(arg0);
    }
    NextPhase(arg0);
    func_80172BC8(arg0);
}

s32 func_80172BC8(s32 arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0_2 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) D_80126B32, 4);
    if ((temp_v0_2 << 0x10) == 0) {
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = ((u16) AF(temp_v1, s16, 0x12) + temp_v0_2) & 0xFFF;
    AF(temp_v1, s16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_80172C48(void) {
}

extern void func_80172CA0();

void func_80172C50(u8 *arg0) {
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg0;
    SetActionHandler((s32) &func_80172CA0);
}

void func_80172CA0(u8 *arg0) {
    D_80190AC0[AF(arg0, u8, 0x214)]();
}

void func_80172CDC(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172D14(arg0);
}

s32 func_80172D14(s32 arg0) {
    s32 var_v0;

    var_v0 = ActionHelper_1AB0(arg0, (s32) &D_80126B30) << 0x10;
    if (var_v0 == 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_80172D60(void) {
}

s32 func_80172D68(s32 arg0) {
    D_80127508 = func_8014C168((s32) &D_80126B58, arg0);
    return SetActionHandler((s32) &func_80172DAC);
}

void func_80172DAC(u8 *arg0) {
    D_80190ACC[AF(arg0, u8, 0x214)]();
}

void func_80172DE8(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172E20(arg0);
}

void func_80172E20(s32 arg0) {
    s16 sp[3];

    sp[0] = AF(D_80127508, s16, 6);
    sp[1] = AF(D_80127508, s16, 0xA);
    sp[2] = AF(D_80127508, s16, 0xE);
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_80172E8C(void) {
}

s32 func_80172E94(void) {
    func_8017303C((s32) &D_800D5A34);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &D_80126B58);
}

s32 func_80172ED4(void) {
    return func_8017303C((s32) &D_800D59EC);
}

s32 func_80172EFC(void) {
    return func_8017303C((s32) &D_800D599C);
}

s32 func_80172F24(void) {
    return func_8017303C((s32) &D_800D5934);
}

s32 func_80172F4C(void) {
    func_8017303C((s32) &D_800D47F4);
    StartFace((s32) &D_80126B58, 0x13);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &D_80126B58);
}

s32 func_80172F9C(void) {
    func_8017303C((s32) &D_800D46E4);
    StartFace((s32) &D_80126B58, 0x11);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &D_80126B58);
}

s32 func_80172FEC(void) {
    func_8017303C((s32) &D_800D5C6C);
    StartFace((s32) &D_80126B58, 0x11);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &D_80126B58);
}

s32 func_8017303C(s32 arg0) {
    D_80127508 = arg0;
    D_80126B30 = 1;
    return SetActionHandler((s32) &func_80173078);
}

void func_80173078(u8 *arg0) {
    D_80190AD8[AF(arg0, u8, 0x214)]();
}

void func_801730B4(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    func_801542A4(arg0, D_80127508);
    NextPhase(arg0);
    func_801730FC(arg0);
}

s32 func_801730FC(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        NextPhase(arg0);
        if (D_80126B30 != 0) {
            BeginScene(arg0);
            func_80154150(arg0, 0);
        }
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_8017316C(void) {
}

s32 func_80173174(void) {
    return SetActionHandler((s32) &func_8017319C);
}

void func_8017319C(u8 *arg0) {
    D_80190AE4[AF(arg0, u8, 0x214)]();
}

extern u8 D_800D5AA0;
s32 func_80173220(s32 arg0);

void func_801731D8(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    func_80154274(arg0, (s32) &D_800D5AA0);
    NextPhase(arg0);
    func_80173220(arg0);
}

s32 func_80173220(s32 arg0) {
    s32 var_v0;

    if (AF(arg0, u16, 0xB8) & 0x4000) {
        func_80147324(0x516);
        StartRumbleScript((s32) &D_80190A84);
    }
    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_80173294(void) {
}

s32 func_8017329C(void) {
    return SetActionHandler((s32) &func_801732C4);
}

void func_801732C4(s32 arg0) {
    func_8016F2A8();
    ClearActionHandler(arg0);
}

void func_801732F4(s32 arg0, s32 arg1) {
    SetActionHandler((s32) func_8017331C, arg1);
}

void func_8017331C(s32 arg0) {
    func_8016F2C8();
    ClearActionHandler(arg0);
}

s32 func_8017334C(void) {
    return SetActionHandler((s32) &func_80173374);
}

void func_80173374(s32 arg0) {
    func_8016F2EC();
    ClearActionHandler(arg0);
}

s32 func_801733A4(void) {
    return SetActionHandler((s32) &func_8017331C);
}

void func_801733CC(s32 arg0) {
    func_8016F30C();
    ClearActionHandler(arg0);
}

extern s16 D_80126B3E;

void func_801733FC(s32 arg0, s16 *arg1) {
    func_801734BC(arg0);
    *(SV8 *)&D_80126B38 = *(SV8 *)arg1;
    D_80126B3E = 1;
    D_80126B40 = 1;
}

void func_80173460(s32 arg0, s16 *arg1) {
    func_801734BC(arg0);
    *(SV8 *)&D_80126B38 = *(SV8 *)arg1;
    D_80126B3E = 1;
}

extern s16 D_80126B3E;
extern void func_80173544();

void func_801734BC(s32 arg0) {
    switch (arg0) {
    case 0:
        D_80126B32 = -4;
        break;
    case 1:
        D_80126B32 = -8;
        break;
    case 2:
        D_80126B32 = -0x12;
        break;
    case 3:
        D_80126B32 = -0x18;
        break;
    case 4:
        D_80126B32 = -0x1C;
        break;
    }
    D_80126B3E = 0;
    D_80126B40 = 0;
    SetActionHandler((s32) &func_80173544);
}

void func_80173544(u8 *arg0) {
    D_80190AF0[AF(arg0, u8, 0x214)]();
}

void func_80173580(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_801735B8(arg0);
}

s32 func_801735B8(s32 arg0) {
    AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x40);
    AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    NextPhase(arg0);
}

void func_801735EC(u8 *arg0) {
    if (D_80126B40 != 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x40000);
    }
    func_801477E8((s32) arg0, D_80126B32 << 0x10);
    NextPhase((s32) arg0);
}

void func_80173648(s32 arg0) {
    s16 *p = &D_80126B3E;

    if (*p != 0) {
        StepToward(arg0, p - 3);
    }
    if (func_80172664(arg0) == 0) {
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_801736A8(void) {
}

extern void func_801736FC();

void func_801736B0(s32 arg0, s32 arg1) {
    D_80127508 = func_8014C118((s32) &D_80126B58, arg0, (s16) arg1);
    SetActionHandler((s32) func_801736FC);
}

void func_801736FC(u8 *arg0) {
    D_80190B04[AF(arg0, u8, 0x214)]();
}

void func_80173738(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80173770(arg0);
}

s32 func_80173770(s32 arg0) {
    func_801723C4(arg0, D_80127508);
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_801737B0(void) {
}

s32 func_801737B8(s32 arg0) {
    D_80126B30 = (s16) arg0;
    return SetActionHandler((s32) &func_801737E8);
}

void func_801737E8(u8 *arg0) {
    D_80190B10[AF(arg0, u8, 0x214)]();
}

void func_80173824(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_8017385C(arg0);
}

void func_8017385C(s32 arg0) {
    switch (D_80126B30) {
    case 0:
    default:
        AF(arg0, u16, 0xAC) |= 0x80;
        AF(arg0, u16, 0xAA) |= 0x80;
        break;
    case 1:
        AF(arg0, u16, 0xAC) |= 0x10;
        AF(arg0, u16, 0xAA) |= 0x10;
        break;
    }
    NextPhase(arg0);
    ClearActionHandler(arg0);
}

void func_801738D4(void) {
}

s32 func_801738DC(s32 arg0) {
    D_80126B30 = (s16) arg0;
    return SetActionHandler((s32) &func_8017390C);
}

void func_8017390C(u8 *arg0) {
    D_80190B1C[AF(arg0, u8, 0x214)]();
}

void func_80173948(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80173980(arg0);
}

s32 func_80173980(s32 arg0) {
    if (D_80126B30 == 0) {
        AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x80);
        AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x80);
    } else {
        AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x10);
    }
    NextPhase(arg0);
}

void func_801739D8(u8 *arg0) {
    if (!(AF(arg0, s32, 0x44) & 2)) {
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
}

void func_80173A20(void) {
}

s32 func_80173A28(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_v0;

    temp_v0 = func_80173A60(arg0, arg1, arg2, arg3, arg4);
    D_8012750C = arg5;
    return temp_v0;
}

extern void func_80173B4C();

s32 func_80173A60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Player *p = &D_80126B58;

    if (arg2 != 0) {
        D_80127508 = func_8014C118((s32) p, arg2, (s16) arg3);
    } else {
        D_80127508 = 0;
    }
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg4;
    D_80126B38 = arg0;
    D_80126B3A = arg1;
    D_80126B3C = AF(p->model, s16, 0x12);
    SetActionHandler((s32) &func_80173B4C);
    D_8011F9C8 = 0;
    D_80126938 = 0;
    D_8012750C = 0;
}

void func_80173B4C(u8 *arg0) {
    D_80190B2C[AF(arg0, u8, 0x214)]();
}

void func_80173B88(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80173BC0(arg0);
}

void func_80173BC0(s32 arg0) {
    if ((D_80126B3A != 0) && (D_80126B3A < 0x6F) && (func_800D0EC4() == 0)) {
        if (D_80126B38 & 0x8000) {
            func_8013E588();
            goto block_6;
        }
        ClearActionHandler(arg0);
        D_8011F9C8 = 2;
        SetPhase(arg0, 7);
        return;
    }
block_6:
    NextPhase(arg0);
}

extern s32 StepToward();

void func_80173C64(s32 arg0) {
    if ((*(s16 *) &D_80126B36 == 0) || (StepToward(arg0, (s32) (&D_80126B36 - 6)) != 0)) {
        NextPhase(arg0);
    }
}

extern u8 D_800D5DB8;
extern void EndScene();

void func_80173CB4(s32 arg0) {
    s16 sp[3];

    sp[0] = D_801151D4[15];
    sp[1] = D_801151D4[16];
    sp[2] = D_801151D4[17];
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        EndScene(arg0);
        switch (*(u8 *)&D_80126B38) {
        case 0:
            func_80154274(arg0, &D_800D5DA8);
            AF(arg0, s32, 0x200) = 0x20;
            func_80147324(0x843);
            break;
        case 1:
            func_80154274(arg0, &D_800D5DA8);
            func_8016BADC(arg0, -0x40, 0x40);
            AF(arg0, s32, 0x200) = 0x80;
            func_80147324(0x6A6);
            break;
        case 2:
            func_80154274(arg0, &D_800D5DA8);
            func_8016BADC(arg0, -0x40, 0x40);
            AF(arg0, s32, 0x200) = 0x80;
            func_80147324(0x6A6);
            break;
        case 3:
            func_80154274(arg0, &D_800D5DB8);
            ClearDisplayFlag20(arg0);
            func_8016BADC(arg0, -0x40, 0x40);
            AF(arg0, s32, 0x200) = 0x80;
            func_80147324(0x6A6);
            break;
        }
        if (D_8012750C != 0) {
            AF(arg0, s32, 0x198) = func_8013767C(D_8012750C);
        } else {
            AF(arg0, s32, 0x198) = 0;
        }
        NextPhase(arg0);
    }
}

void func_80173E1C(s32 arg0) {
    s32 sp10[2];
    s32 sp18[2];
    s32 *q = &D_80127508;

    if (*q != 0) {
        func_801484B0((s32) sp10, (s32) sp18);
        func_80149350(arg0, (s32) sp10, (s32) sp10);
        func_80015954((s32) sp10, *q + 4);
    }
    if (AF(arg0, s32, 0x198) != 0) {
        if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
            func_80139914(AF(arg0, s32, 0x198));
            AF(arg0, s32, 0x198) = 0;
            func_80154274(arg0, &D_800D5DC0);
            NextPhase(arg0);
        }
    } else if (--AF(arg0, s32, 0x200) == -1) {
        func_80154274(arg0, &D_800D5DC0);
        NextPhase(arg0);
    }
}

extern void func_800D128C();
extern s32 func_80174158();
extern void func_8002A088();
extern void func_8002A2D4();
extern void func_8002A544();
extern void func_8002A7B4();
extern void func_800D0F0C();

void func_80173EF8(s32 arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        D_80126938 = 1;
        BeginScene(arg0);
        switch (D_80126B3A) {
        case 0:
            break;
        case 0x70:
            func_800D128C(D_80126B3A & 0xFF, 0);
            break;
        case 0x78:
            func_80029124(0x8A, 1);
            func_80029514(0xC8);
            func_80174158(arg0);
            func_8002A088(0x64);
            func_8002A2D4(0x20);
            func_8002A544(0x20);
            func_8002A7B4(0x18);
            break;
        case 0x79:
            func_80029124(0x8B, 1);
            func_80029514(0x258);
            func_80174158(arg0);
            func_8002A088(0xA0);
            func_8002A2D4(0x28);
            func_8002A544(0x40);
            func_8002A7B4(0x30);
            break;
        case 0x7A:
            func_80029124(0x8C, 1);
            func_80029514(0x384);
            func_80174158(arg0);
            func_8002A088(0xF0);
            func_8002A2D4(0x30);
            func_8002A544(0x60);
            func_8002A7B4(0x48);
            break;
        case 0x7B:
            func_80029124(0x8D, 1);
            func_80029514(0x4B0);
            func_80174158(arg0);
            func_8002A088(0x140);
            func_8002A2D4(0x40);
            func_8002A544(0x80);
            func_8002A7B4(0x60);
            break;
        case 0x7C:
            if (!(func_80029178(0x11D) & 0xFF)) {
                func_80174188(arg0);
            }
            func_8002A088(0x190);
            func_8002A2D4(0x50);
            func_8002A544(0xA0);
            func_8002A7B4(0x80);
            func_801741A8(arg0);
            func_80029124(0x8E, 1);
            break;
        default:
            func_800D0F0C(func_800D0EC4(), D_80126B3A);
            break;
        }
        func_80145EE8(0);
        NextPhase(arg0);
    }
}

s32 func_80174158(s32 arg0) {
    func_80174188(arg0);
    return func_801741A8(arg0);
}

s32 func_80174188(s32 arg0) {
    func_8014BCEC(arg0, 0x19);
}

extern s32 func_8014BB0C();

s32 func_801741A8(s32 arg0) {
    func_8014BDC8();
    func_8014BB0C();
    func_8014B2A8();
    D_80078ED8 = 0xA00000;
    D_80078EA4 = 0xA00000;
}

void func_801741EC(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) D_80126B3C, 4);
    if ((temp_v0 << 0x10) == 0) {
        D_8011F9C8 = 1;
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_80174274(void) {
}

s32 func_8017427C(void) {
    return SetActionHandler((s32) &func_801742A4);
}

void func_801742A4(u8 *arg0) {
    D_80190B4C[AF(arg0, u8, 0x214)]();
}

void func_801742E0(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80174318(arg0);
}

s32 func_80174318(s32 arg0) {
    func_80142454(-0x80);
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_80174354(void) {
}

s32 func_8017435C(void) {
    return SetActionHandler((s32) &func_80174384);
}

void func_80174384(u8 *arg0) {
    D_80190B58[AF(arg0, u8, 0x214)]();
}

void func_801743C0(s32 arg0) {
    NextPhase(arg0);
    func_801743F0(arg0);
}

s32 func_801743F0(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80172658();
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_80174430(void) {
}

s32 func_80174438(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SetActionHandler((s32) &func_80174474);
    D_80127508 = arg0;
    return temp_v0;
}

void func_80174474(u8 *arg0) {
    D_80190B64[AF(arg0, u8, 0x214)]();
}

void func_801744B0(s32 arg0) {
    NextPhase(arg0);
    func_801744E0(arg0);
}

s32 func_801744E0(s32 arg0) {
    func_800D1724(D_80127508);
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_80174524(void) {
}

s32 func_8017452C(void) {
    return SetActionHandler((s32) &func_80174554);
}

void func_80174554(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    ClearActionHandler(arg0);
}

s32 func_80174584(void) {
    return SetActionHandler((s32) &func_801745AC);
}

void func_801745AC(s32 arg0) {
    BeginScene(arg0);
    ClearActionHandler(arg0);
}

s32 func_801745DC(void) {
    return SetActionHandler((s32) &func_80174604);
}

void func_80174604(void) {
    D_801150F8 = 1;
    func_80174630();
}

s32 func_80174630(void) {
    s32 temp_v0;

    temp_v0 = D_801270BC | 1;
    D_801270BC = temp_v0;
    return temp_v0;
}

s32 ClearActionHandler(s32 arg0, s32 arg1) {
    s32 temp_v0;

    D_801150F8 = 0;
    temp_v0 = D_801270BC | 1;
    D_801270BC = temp_v0;
    return temp_v0;
}

void func_80174674(void) {
    D_801270BC = 0;
}

void SetActionHandler(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    D_80126D6C = 0;
    D_80127088 = arg0;
    D_801270BC = 0;
}

s32 func_801746A4(void) {
    func_8016EDEC((s32) &func_80172710, 0x01000000);
    SetActionHandler((s32) func_80172760);
}

s32 func_801746DC(void) {
    func_8016EE94((s32) &func_80172710, 0x01000000);
    SetActionHandler((s32) func_80172760);
}

s32 func_80174714(void) {
    s32 var_v0;

    var_v0 = func_800CF8CC();
    if (var_v0 == 0) {
        BeginScene((s32) &D_80126B58);
        var_v0 = ((s32 (*)())func_8016F0AC)();
    }
    return var_v0;
}

s32 EngineReady(void) {
    return D_801270BC;
}

s32 func_80174764(void) {
    return (s32) D_8011F9C8;
}

s16 func_80174774(void) {
    return D_80126938;
}

void func_80174784(void) {
    func_8016EDEC((s32) &func_801747CC, 0x01000000);
}

void func_801747AC(void) {
    func_8016F0AC();
}

void func_801747CC(u8 *arg0) {
    D_80190B70[AF(arg0, u8, 0x214)]();
}

void func_80174808(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_8017481C(void) {
}

void func_80174824(void) {
    func_8016EDEC((s32) &func_80174888, 0x01000000);
}

void func_8017484C(void) {
    func_8016F0AC();
    D_80126B9C &= 0xFBFFFFFF;
}

void func_80174888(u8 *arg0) {
    D_80190B78[AF(arg0, u8, 0x214)]();
}

void func_801748C4(u8 *arg0) {
    AF(arg0, s32, 0x44) |= 0x04000000;
    AF(arg0, u8, 0x214)++;
}

void func_801748E4(void) {
}

void func_801748EC(void) {
    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = 0x1C7;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) &func_8017496C, 0);
}

void func_8017496C(u8 *arg0) {
    D_80190B80[AF(arg0, u8, 4)]();
}

void func_801749A8(void) {
    func_801749C8();
}

void func_801749C8(u8 *o) {
    MATRIX m;
    SVECTOR v;
    SVECTOR r;
    s16 x;
    s16 z;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    z = D_80126B66;
    x = D_80126B5E;
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + (s16)D_80126B62;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + z;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + x;
    m.t[1] = AF(o, s16, 0x2A) + (s16)D_80126B62;
    m.t[2] = AF(o, s16, 0x2C) + z;
    v.vx = 0;
    v.vy = 0;
    v.vz = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &r);
    AF(o, s32, 0x3C) = r.vx;
    AF(o, s32, 0x40) = r.vy;
    AF(o, s32, 0x44) = r.vz;
}

s32 func_80174B6C(void) {
    func_80174BBC((s32) &D_80126948);
    func_8012A018((s32) func_80174BF4, 0);
    func_8012A0E0();
    func_80174BF4((s32) &D_80126948);
}

void func_80174BBC(s32 arg0) {
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x12C;
    AF(arg0, s16, 0x20) = 0x155;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x30) = -0x28;
    AF(arg0, s16, 0x32) = 0;
    AF(arg0, s32, 0x54) = 0;
}

void func_80174BF4(s32 arg0) {
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x12C;
    AF(arg0, s16, 0x20) = 0x155;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x30) = -0x28;
    AF(arg0, s16, 0x32) = 0;
    AF(arg0, s32, 0x54) = 0;
    D_80190B84[AF(arg0, u8, 4)]();
}

void func_80174C60(s32 arg0) {
    func_80174CB0(arg0, 0);
}

void func_80174C80(u8 *arg0) {
    u16 temp_a1;

    temp_a1 = (AF(arg0, u16, 0xA0) - 0x16) & 0xFFF;
    AF(arg0, u16, 0xA0) = temp_a1;
    func_80174CB0((s32) arg0, (s32) temp_a1);
}

extern s16 D_80126940[];
extern s16 D_80126942;
extern s16 D_80126944;

void func_80174CB0(u8 *o, s32 arg1) {
    MATRIX m;
    SV8 v;
    SV8 r;

    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + D_80126940[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126942;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    func_80013F3C(&m);
    func_800123F0(&m, AF(o, s16, 0x1C));
    func_80012558(&m, (AF(o, s16, 0x1A) + (s16)arg1) & 0xFFF);
    func_800126C4(&m, AF(o, s16, 0x18));
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

void func_80174E9C(s32 arg0) {
    D_8012697C = arg0;
    D_80126980 = 0;
    func_8012A018((s32) &func_80174F28, 0);
}

s32 func_80174ED4(void) {
    return (s32) (s16) (D_80126980 & 0x8000);
}

void func_80174EF0(s32 arg0, s16 arg1) {
    D_8012697C = arg0;
    D_80126980 = arg1;
    func_8012A018((s32) &func_80174F28, 1);
}

void func_80174F28(u8 *arg0) {
    D_80190B8C[AF(arg0, u8, 4)]();
}

void func_80174F64(u8 *arg0) {
    u16 var_v0;

    if (func_80175014((s32) arg0, AF(arg0, s32, 0x34), AF(arg0, u16, 0x38) & 0x7FFF) != 0) {
        var_v0 = AF(arg0, u16, 0x38) | 0x8000;
    } else {
        var_v0 = AF(arg0, u16, 0x38) + 1;
    }
    AF(arg0, u16, 0x38) = var_v0;
}

void func_80174FBC(u8 *arg0) {
    s32 temp_a2;
    u16 temp_v0;
    u16 var_v0;

    temp_v0 = AF(arg0, u16, 0x38);
    temp_a2 = temp_v0 & 0x7FFF;
    if (temp_a2 != 0) {
        func_80175014((s32) arg0, AF(arg0, s32, 0x34), temp_a2);
        var_v0 = AF(arg0, u16, 0x38) - 1;
    } else {
        var_v0 = temp_v0 | 0x8000;
    }
    AF(arg0, u16, 0x38) = var_v0;
}

s32 func_80175014(s32 arg0, s32 arg1, s32 arg2) {
    s16 i = arg2;
    u8 *p = (u8 *)arg1 + i * 0xE;

    if (AF(p, s16, 0xC) == 0x7FFF) {
        return 1;
    }
    AF(arg0, s32, 0x3C) = AF(p, s16, 0);
    AF(arg0, s32, 0x40) = AF(p, s16, 2);
    AF(arg0, s32, 0x44) = AF(p, s16, 4);
    AF(arg0, s32, 0x48) = AF(p, s16, 6);
    AF(arg0, s32, 0x4C) = AF(p, s16, 8);
    AF(arg0, s32, 0x50) = AF(p, s16, 0xA);
    AF(arg0, s32, 0x54) = AF(p, s16, 0xC) << 5;
    return 0;
}

s32 func_8017509C(u8 *arg0, s32 arg1x, u8 *arg2, u8 *arg3) {
    s16 arg1 = arg1x;

    arg0 += arg1 * 0xE;
    if (AF(arg0, s16, 0xC) == 0x7FFF) {
        return 1;
    }
    AF(arg2, u16, 0) = AF(arg0, u16, 0);
    AF(arg2, u16, 2) = AF(arg0, u16, 2);
    AF(arg2, u16, 4) = AF(arg0, u16, 4);
    AF(arg3, u16, 0) = AF(arg0, u16, 6);
    AF(arg3, u16, 2) = AF(arg0, u16, 8);
    AF(arg3, u16, 4) = AF(arg0, u16, 0xA);
    return 0;
}

void func_80175114(s32 arg0) {
    func_80147078(arg0, 8);
    AF(arg0, s16, 2) = 1;
    func_80175184(arg0);
}

void func_80175150(s32 arg0) {
    func_80147078(arg0, 8);
    func_80175184(arg0);
}

void func_80175184(s32 arg0, s32 arg1) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 2);
    if (temp_v1 < 2U) {
        D_80190B94[temp_v1]();
        return;
    }
    func_80175268();
}

void func_801751D8(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80175218(arg0);
        func_80146CA0(arg0);
    }
}

extern void (*D_80190B9C[])();

void func_80175218(s32 arg0) {
    s32 i = D_80078EC0 - 1;

    D_80190B9C[i](arg0);
    func_80146CA0(arg0);
}

extern void (*D_80190BB4[])();

void func_80175268(u8 *arg0) {
    s32 i;
    AF(arg0, s32, 0x44) |= 2;
    i = D_80078EC0 - 1;
    D_80190BB4[i]();
}

void func_801752BC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xF6) = 0x1000;
    ClearDisplayFlag20(arg0);
    StartFace((s32) arg0, 0x11);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
}

extern s8 D_8011F7A9;
extern s8 D_8011F7AE;
extern u16 D_8011F7B4;
extern u16 D_8011F7B6;
extern s16 D_8011F7B8;
extern s16 D_8011F7BA;
extern u16 D_8011F7BC;
extern u16 D_8011F7BE;

void func_80175308(void) {
    struct B98 { s32 w[0x26]; };
    u8 *p = (u8 *)&D_8011F7A8;
    s16 *q;

    *p = 1;
    D_8011F7A9 = 2;
    D_8011F7AE = 0x37;
    D_8011F7B8 = -0x37;
    *(s16 *)&D_8011F7B4 = -0x37;
    D_8011F7BE = 0x37;
    D_8011F7BA = 0x37;
    D_8011F7B6 = 0x37;
    D_8011F7BC = 0x37;
    *(struct B98 *)(p + 0x48) = *(struct B98 *)&D_80078E78;
    func_80016714(p + 0xE0, 0x98);
    q = &D_800B9A02;
    func_801757A0(*q);
    DrawSync(0);
    func_801757A0((s16)(*q ^ 1));
}

extern s8 D_8011F7A9;
extern s8 D_8011F7AD;
extern s8 D_8011F7AE;

void func_80175414(void) {
    if (*(u8 *)&D_8011F7A8 == 1) {
        *(u8 *)&D_8011F7A8 = 0;
        D_8011F7AD = 0xA;
        D_8011F7A9 = 0;
        D_8011F7AE = 0x37;
    }
}

void func_80175454(void) {
    u8 *p = (u8 *)&D_8011F7A8;
    if (*p == 0) {
        *p = 1;
        D_8011F7A9 = 0;
        D_8011F7AD = 0xA;
        D_8011F7AE = 0;
    }
}

void func_80175494(void) {
    D_8011F7A8 = 2;
}

extern u8 D_800B9A13;
extern void (*D_80190CF8[])();

void func_801754A8(void) {
    u8 *p;
    s32 r;
    s8 f;

    p = (u8 *)&D_8011F7A8;
    r = ((s32 (*)())func_80029504)(); /* MATCH-TRICK: callee declared void in the file */
    f = 0;
    if ((D_800B9A13 == 0 && !(D_80126B9C & 0x80)) || (u32)(r - 0xA) >= 0x4B0U) {
        f = 1;
    }
    p[9] = f;
    D_80190CF8[*p](p, f);
}

void func_8017553C(u8 *arg0) {
    D_80190D04[AF(arg0, u8, 1)]();
    func_801758FC();
    func_80175820();
    func_801759D8();
}

void func_80175590(u8 *arg0, s32 arg1) {
    u8 n; u8 s;
    n = AF(arg0, u8, 5);
    s = AF(arg0, u8, 6) - n;
    AF(arg0, u8, 6) = s;
    AF(arg0, u8, 5) = n + 0xFF;
    AF(arg0, s16, 0xC) = AF(arg0, s16, 0x10) = -s;
    AF(arg0, s16, 0x14) = AF(arg0, s16, 0xE) = AF(arg0, s16, 0x12) = AF(arg0, s16, 0x16) = AF(arg0, u8, 6);
    func_801757A0((s32) D_800B9A02, arg1);
    if (AF(arg0, u8, 5) == 0) {
        AF(arg0, u8, 8) = 0;
        AF(arg0, u8, 1)++;
    }
}

void func_80175624(u8 *arg0, s32 arg1) {
    func_801757A0((s32) D_800B9A02, arg1);
    AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
}

void func_80175668(void) {
    func_801757E0((s32) D_800B9A02);
}

void func_80175690(u8 *arg0) {
    D_80190D10[AF(arg0, u8, 1)]();
    func_801758FC();
    func_80175820();
    func_801759D8();
}

void func_801756E4(u8 *arg0) {
    s16 *p;
    u8 n; u8 s;
    n = AF(arg0, u8, 5);
    s = AF(arg0, u8, 6) + n;
    AF(arg0, u8, 6) = s;
    AF(arg0, u8, 5) = n + 0xFF;
    AF(arg0, s16, 0xC) = AF(arg0, s16, 0x10) = -s;
    AF(arg0, s16, 0x14) = AF(arg0, s16, 0xE) = AF(arg0, s16, 0x12) = AF(arg0, s16, 0x16) = AF(arg0, u8, 6);
    p = &D_800B9A02;
    func_80175DA8(*p);
    func_80175AB8(*p);
    func_80176144(*p);
    if (AF(arg0, u8, 5) == 0) {
        AF(arg0, u8, 8) = 0;
        AF(arg0, u8, 1)++;
    }
}

void func_80175798(void) {
}

s32 func_801757A0(arg0, arg1)
s32 arg0;
s32 arg1;
{
    func_80175DA8((s32) (s16) arg0);
    func_80175AB8((s32) (s16) arg0);
    return func_80176144((s32) (s16) arg0);
}

s32 func_801757E0(s32 arg0) {
    func_80176734((s32) (s16) arg0);
    func_80176218((s32) (s16) arg0);
    return func_80176D00((s32) (s16) arg0);
}

extern s32 D_8011F7C8[];
extern s32 D_8011F7C0[];
extern u8 D_800AE7BC[];
extern S3 D_800AF634[];

void func_80175820(void) {
    u8 unused[16]; /* MATCH-TRICK: frame pad (the original's leaf frame is 0x10 with nothing stored) */
    s32 *prim;
    s32 tag;
    s32 *ot;
    u8 *q;
    s32 t;
    s32 u;

    /* D_800B9A02 is read as ((u16 *)&D_800B9A08)[-3]: a field of the one object at 0x800B9A00 (splat split it);
       the in-struct read is what makes the stores below force its reloads */
    prim = *(s32 **)(D_800AE7BC + ((u16 *)&D_800B9A08)[-3] * 20);
    tag = prim[2];
    prim[2] = (tag & 0xFF000000) | (D_8011F7C8[((u16 *)&D_800B9A08)[-3]] & 0xFFFFFF);
    ot = (s32 *)D_8011F7C0[((u16 *)&D_800B9A08)[-3]];
    *ot = (*ot & 0xFF000000) | (tag & 0xFFFFFF);
    t = D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0];
    q = (u8 *)&D_8011F7A8 + ((u16 *)&D_800B9A08)[-3] * 4;
    u = AF(q, s32, 0x18) - 0x14;
    D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0] = t + ((AF(q, s32, 0x20) - u) >> 2);
}

extern s32 D_8011F7D8[];
extern s32 D_8011F7D0[];

void func_801758FC(void) {
    u8 unused[16]; /* MATCH-TRICK: frame pad (the original's leaf frame is 0x10 with nothing stored) */
    s32 *prim;
    s32 tag;
    s32 *ot;
    u8 *q;
    s32 t;
    s32 u;

    prim = *(s32 **)(D_800AE7BC + ((u16 *)&D_800B9A08)[-3] * 20);
    tag = prim[3];
    prim[3] = (tag & 0xFF000000) | (D_8011F7D8[((u16 *)&D_800B9A08)[-3]] & 0xFFFFFF);
    ot = (s32 *)D_8011F7D0[((u16 *)&D_800B9A08)[-3]];
    *ot = (*ot & 0xFF000000) | (tag & 0xFFFFFF);
    t = D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0];
    q = (u8 *)&D_8011F7A8 + ((u16 *)&D_800B9A08)[-3] * 4;
    u = AF(q, s32, 0x28) - 0x14;
    D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0] = t + ((AF(q, s32, 0x30) - u) >> 2);
}

extern u8 D_8011F7B1;

void func_801759D8(void) {
    u8 *base = (u8 *)&D_8011F7A8;
    s32 *prim;
    s32 tag;
    s32 *ot;
    u8 *q;
    s32 t;
    s32 u;

    if (D_8011F7B1 == 0) {
        prim = *(s32 **)(D_800AE7BC + ((u16 *)&D_800B9A08)[-3] * 20);
        tag = prim[1];
        prim[1] = (tag & 0xFF000000) | (AF(base + ((u16 *)&D_800B9A08)[-3] * 4, s32, 0x40) & 0xFFFFFF);
        ot = AF(base + ((u16 *)&D_800B9A08)[-3] * 4, s32 *, 0x38);
        *ot = (*ot & 0xFF000000) | (tag & 0xFFFFFF);
        t = D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0];
        q = base + ((u16 *)&D_800B9A08)[-3] * 4;
        u = AF(q, s32, 0x38) - 0x14;
        D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0] = t + ((AF(q, s32, 0x40) - u) >> 2);
    }
}

extern s32 D_8011F804;
extern u16 D_8011F80A;
extern u16 D_8011F824;
extern u8 D_8011F832;
extern u8 D_8011F83A;
extern s32 D_80190C2C[];
extern void SetDrawMode(void *p, s32 dfe, s32 dtd, s32 tpage, RECT *tw);
extern s32 func_801770E0();
extern s32 func_80176D94();
extern s32 func_80177EA4();
extern s32 func_80177B5C();
extern s32 func_80177940();
extern s32 func_80178298();

/* r216 x56f: both clamp arms set d = 4 (a shared tail; cross-jumping merges it after reload), so the if/else
   survives cse and the -0x34/-0x32(s2) loads stay register-relative; s is the one temp for every call result. */
void func_80175AB8(s32 arg0) {
    s16 i = arg0;
    u8 buf[24];
    u8 *b;
    u8 *q;
    u8 *p;
    s16 t;
    s32 m;
    s32 s;
    u8 c;
    s32 n;
    s32 d;
    s32 j;
    b = (u8 *)&D_8011F7A8 + 0x48;
    j = i * 12;
    p = (u8 *)AF(D_800AF634, s32, j + 4) + AF(D_800AF634, s32, j) * 4;
    q = (u8 *)&D_8011F7A8 + i * 4;
    AF(q, u8 *, 0x18) = p;
    p = (u8 *)func_80176D94(p, (s16)(D_8011F7B4 - 0x71), (s16)(D_8011F7B6 + 0x51));
    p = (u8 *)func_801770E0(p, (s16)(D_8011F7B4 - 0x71), (s16)(D_8011F7B6 + 0x65));
    s = func_801783D0(D_8011F804, 0);
    p = (u8 *)func_80177EA4(p, s, (s16)(D_8011F7BC + 0x39), (s16)(D_8011F7BE + 0x51));
    n = 999;
    if (D_8011F824 < 1000) {
        n = D_8011F824;
        d = 4;
    } else {
        d = 4;
    }
    s = func_801783D0(n, d);
    p = (u8 *)func_80177B5C(p, (s16)s, D_8011F832, (s16)(AF(b, u16, -0x34) + 0x39), (s16)(AF(b, u16, -0x32) + 0x65));
    t = (s16)D_8011F80A / 15;
    m = (t & 3) * 15;
    s = func_801783D0(t >> 2, 8) + func_801783D0(m, 0);
    p = (u8 *)func_80177940(p, (s16)s, (s16)(AF(b, u16, -0x34) + 0x76), (s16)(AF(b, u16, -0x32) + 0x65));
    c = D_8011F83A & 0x7F;
    D_8011F83A = c;
    func_80024054(*(s32 *)((u8 *)D_80190C2C + c * 4), buf);
    p = (u8 *)func_80178298(p, buf, (s16)(AF(b, u16, -0x34) + 0x39), (s16)(AF(b, u16, -0x32) + 0x5B));
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(s32 *)p = ((s32)(p - 0x14) & 0xFFFFFF) | 0x02000000;
    AF(q, u8 *, 0x20) = p;
    p += 0x14;
    AF(D_800AF634, s32, j) += (p - AF(q, u8 *, 0x18)) >> 2;
}

extern u8 D_80190BCC;
extern u16 D_80190C1C[];
extern u16 D_80190C28;
extern u8 D_80190CA8[];
extern u8 D_80190CBC[];
extern s32 D_80190CD4[];
extern u8 D_800D43D4;
extern u8 D_800D4414;
extern u8 D_800D45D4;
extern STile *func_8017742C();

void func_80175DA8(s32 arg0) {
    s16 i = arg0;
    u8 *b = &D_8011F7F0;
    u8 *q = b - 0x48;
    u8 *s = &D_80190BCC;
    STile *p;
    u8 *r;
    u8 *r2;
    u8 *r3;
    u16 *c;
    s16 j;
    u16 w;
    u16 k;
    s16 x;
    s32 n;

    j = 0;
    p = (STile *)(D_800AF634[i].p[1] + D_800AF634[i].p[0] * 4);
    AF(q + i * 4, STile *, 0x28) = p;
    do {
        p->tag = ((u32)(p - 1) & 0xFFFFFF) | 0x04000000;
        AF(p, s32, 4) = *(s32 *)s;
        s += 4;
        if (j < 2) {
            p->x0 = *(u16 *)s + AF(q, u16, 0xC);
            s += 2;
            p->y0 = *(u16 *)s + AF(q, u16, 0xE);
            s += 2;
        } else if (j == 2) {
            p->x0 = *(u16 *)s + AF(q, u16, 0x10);
            s += 2;
            p->y0 = *(u16 *)s + AF(q, u16, 0x12);
            s += 2;
        } else {
            p->x0 = *(u16 *)s + AF(q, u16, 0x14);
            s += 2;
            p->y0 = *(u16 *)s + AF(q, u16, 0x16);
            s += 2;
        }
        AF(p, s32, 0xC) = *(s32 *)s;
        s += 4;
        p->pad = *(s32 *)s;
        s += 4;
        p++;
        j++;
    } while (j < 5);
    AF(q, u8, 7) = D_800B9A13;
    p = func_8017742C(p, (s16)(AF(q, u16, 0x10) - 0x98), (s16)(AF(q, u16, 0x12) + 9));
    SetDrawMode(p, 0, 0, 0x16, 0);
    p->tag = ((u32)(p - 1) & 0xFFFFFF) | 0x02000000;
    AF(q + i * 4, STile *, 0x30) = p;
    p++;
    D_800AF634[i].p[0] += ((s32)p - AF(q + i * 4, s32, 0x28)) >> 2;
    p = AF(q + i * 4, STile *, 0x28);
    if (AF(b, u8, 0x48) != 0) {
        AF(p, u8, 0xD) = 0;
    } else {
        AF(p, u8, 0xD) = 0xA0;
    }
    r = AF(q + i * 4, u8 *, 0x28);
    AF(r, s16, 0x22) = 0x6CD6;
    if (AF(b, u8, 0x48) & 0x80) {
        AF(r, u16, 0x20) = D_80190C28;
        func_800183E0((s32)&D_800D45D4);
    } else {
        c = D_80190C1C;
        n = AF(b, u8, 0x48);
        if (n != 0) {
            n--;
            c += n;
        }
        AF(r, u16, 0x20) = *c;
        func_800183E0(D_80190CD4[AF(b, u8, 0x48)]);
    }
    r2 = AF(q + i * 4, u8 *, 0x28);
    x = AF(b, u16, 0x2E);
    if (x != 0) {
        r2[0x49] = D_80190CBC[x >> 4];
    } else {
        r2[0x49] = 0xA0;
    }
    r3 = AF(q + i * 4, u8 *, 0x28);
    w = AF(b, u16, 0x40);
    if (w < 100) {
        k = w / 5;
        r3[0x5D] = D_80190CA8[k];
    } else {
        r3[0x5D] = 0;
    }
    if (AF(b, s16, 0x1E) & 0x8000) {
        func_800183E0((s32)&D_800D4414);
    } else {
        func_800183E0((s32)&D_800D43D4);
    }
}

extern u16 D_8011F7BC;
extern u16 D_8011F7BE;
extern s32 func_80178004();

s32 func_80176144(s32 arg0) {
    s16 i = arg0;
    u8 *q;
    s32 a;

    a = D_800AF634[i].p[1] + D_800AF634[i].p[0] * 4;
    q = (u8 *)&D_8011F7A8 + i * 4;
    AF(q, s32, 0x38) = a;
    a = func_80178004(a, (s16)(D_8011F7BC - 0x17), (s16)(D_8011F7BE + 0x65));
    AF(q, s32, 0x40) = a - 0x14;
    a += 0x14;
    D_800AF634[i].p[0] += (a - AF(q, s32, 0x38)) >> 2;
}

extern u16 D_8011F82A;
extern u16 D_8011F82C;
extern u16 D_8011F8C4;
extern void func_80176FF4();
extern void func_80177340();
extern void func_80177F84();
extern void func_80177DA8();
extern void func_80177AD4();
void func_80176218(s32 arg0) {
    s16 i = arg0;
    u8 *base = (u8 *)&D_8011F7A8;
    u8 *cur = base + 0x48;
    u8 *flg = base + 0xE0;
    u8 *tgt = &D_80078E78;
    u8 *p2;
    u8 *p5;
    s32 c;
    s32 t;
    u16 n1;
    s16 d;
    u16 v;
    s32 w;
    s32 e;
    s32 x4;
    s32 x5;
    s16 m;
    s16 s;
    s32 r;
    u8 buf[0x18];

    v = D_80078EB2;
    t = v != D_8011F82A;
    if (D_8011F82C == D_80078EB4) {
        c = t; /* MATCH-TRICK: the aux-changed compare kept in t and copied into the working flag inside the equal arm (once per block) */
        if (c == 0 && D_8011F8C4 == 0) goto skip1;
    } else {
        d = D_8011F82C - D_80078EB4;
        if (d < 0) {
            if (d < -10) {
                n1 = D_8011F82C + 2;
            } else {
                n1 = D_8011F82C + 1;
            }
        } else {
            if (d >= 11) {
                n1 = D_8011F82C - 2;
            } else {
                n1 = D_8011F82C - 1;
            }
        }
        D_8011F82C = n1;
        AF(cur, u16, 0x3A) = AF(tgt, u16, 0x3A);
        AF(flg, u16, 0x3C) = 1;
        goto call1;
    }
    if (c) {
        AF(base, u16, 0x82) = v;
        AF(base, u16, 0x11C) = 1;
    } else {
        AF(base, u16, 0x11C) = 0;
    }
call1:
    func_80176FF4(AF(base + i * 4, s32, 0x18));
skip1:
    v = AF(tgt, u16, 0x3E);
    t = v != AF(cur, u16, 0x3E);
    if (AF(cur, u16, 0x40) == AF(tgt, u16, 0x40)) {
        c = t; /* MATCH-TRICK: the aux-changed compare kept in t and copied into the working flag inside the equal arm (once per block) */
        if (c == 0 && AF(flg, u16, 0x40) == 0) goto skip2;
    } else {
        d = AF(cur, u16, 0x40) - AF(tgt, u16, 0x40);
        if (d < 0) {
            if (d >= -10) {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) + 1;
            } else {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) + 2;
            }
        } else {
            if (d >= 11) {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) - 2;
            } else {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) - 1;
            }
        }
        AF(cur, u16, 0x3E) = AF(tgt, u16, 0x3E);
        AF(flg, u16, 0x40) = 1;
        goto call2;
    }
    if (c) {
        AF(cur, u16, 0x3E) = v;
        AF(flg, u16, 0x40) = 1;
    } else {
        AF(flg, u16, 0x40) = 0;
    }
call2:
    func_80177340(AF(base + i * 4, s32, 0x18) + 0x104);
    p2 = AF(base + i * 4, u8 *, 0x28);
    if (AF(cur, u16, 0x40) < 100) {
        AF(p2, u8, 0x5D) = D_80190CA8[(u16)(AF(cur, u16, 0x40) / 5)];
    } else {
        AF(p2, u8, 0x5D) = 0;
    }
skip2:
    w = AF(cur, s32, 0x14);
    if (w == AF(tgt, s32, 0x14)) {
        if (AF(flg, s32, 0x14) == 0) goto skip3;
        AF(flg, s32, 0x14) = 0;
    } else {
        e = AF(tgt, s32, 0x14) - w;
        if (e > 0) {
            if (e >= 10) {
                AF(cur, s32, 0x14) = w + 10;
            } else {
                AF(cur, s32, 0x14) = w + 1;
            }
        } else {
            if (e >= -9) {
                AF(cur, s32, 0x14) = w - 1;
            } else {
                AF(cur, s32, 0x14) = w - 10;
            }
        }
        AF(flg, s32, 0x14) = 1;
    }
    func_80177F84(AF(base + i * 4, s32, 0x18) + 0x208, func_801783D0(AF(cur, s32, 0x14), 0));
skip3:
    if (AF(tgt, u16, 0x34) != AF(cur, u16, 0x34)) {
        AF(cur, u16, 0x34) = AF(tgt, u16, 0x34);
        AF(cur, u8, 0x42) = AF(tgt, u8, 0x42);
        AF(flg, u16, 0x34) = 1;
    } else if (AF(flg, u16, 0x34) != 0) {
        AF(flg, u16, 0x34) = 0;
    } else {
        goto skip4;
    }
    if (AF(cur, u16, 0x34) < 1000) {
        x4 = AF(cur, u16, 0x34);
    } else {
        x4 = 999;
    }
    func_80177DA8(AF(base + i * 4, s32, 0x18) + 0x294, (s16)func_801783D0((s16)x4, 4), AF(cur, u8, 0x42));
skip4:
    if (AF(cur, s16, 0x1A) != AF(tgt, s16, 0x1A)) {
        AF(cur, s16, 0x1A) = AF(tgt, s16, 0x1A);
        AF(flg, s16, 0x1A) = 1;
    } else if (AF(flg, s16, 0x1A) != 0) {
        AF(flg, s16, 0x1A) = 0;
    } else {
        goto skip5;
    }
    p5 = AF(base + i * 4, u8 *, 0x18);
    x5 = AF(cur, u16, 0x1A);
    if (x5 & 1) {
        AF(p5, s16, 0x32A) = 0x200;
    } else {
        AF(p5, s16, 0x32A) = AF(base, u16, 0x16) + 0x65;
    }
    m = (s16)x5 / 15;
    s = (m & 3) * 15;
    x5 = func_801783D0(m >> 2, 8) + func_801783D0(s, 0);
    func_80177AD4(AF(base + i * 4, s32, 0x18) + 0x320, (s16)x5);
skip5:
    if (AF(tgt, u8, 0x4A) != AF(cur, u8, 0x4A)) {
        AF(cur, u8, 0x4A) = AF(tgt, u8, 0x4A) & 0x7F;
        AF(flg, u8, 0x4A) = 1;
    } else if (AF(flg, u8, 0x4A) != 0) {
        AF(flg, u8, 0x4A) = 0;
    } else {
        return;
    }
    r = AF(base + i * 4, s32, 0x18) + 0x384;
    func_80024054(D_80190C2C[AF(cur, u8, 0x4A)], buf);
    r = func_80178298(r, buf, (s16)(AF(base, u16, 0x14) + 0x39), (s16)(AF(base, u16, 0x16) + 0x5B));
    SetDrawMode(r, 0, 0, 0x15, 0);
    AF(r, s32, 0) = ((r - 0x14) & 0xFFFFFF) | 0x02000000;
    AF(base + i * 4, s32, 0x20) = r;
}

extern u8 D_80115214;
extern s16 D_801152BA;
extern u8 D_8011F7B0;
extern u16 D_80190C1A[];
extern u8 D_80190CC8[];
extern void func_801775E0();

void func_80176734(s32 arg0) {
    s16 i = arg0;
    u8 *p = (u8 *)&D_8011F7A8;
    u8 *a = p + 0x48;
    u8 *b = p + 0xE0;
    u8 *c = &D_80078E78;
    u8 *m;
    u8 *q;
    u8 *n;
    u8 v;
    s8 t;
    s16 s5;
    s16 s0;
    s16 lim;
    u16 k;

    m = AF(p + i * 4, u8 *, 0x28);
    q = m + 0x3C;
    if (D_801152BA != 0) {
        if (D_8011F7B0 < 0x80) {
            t = D_8011F7B0 - 0x80;
        } else {
            t = ~D_8011F7B0 - 0x80;
        }
        m[4] = q[4] = t;
        p[8] += D_80115214;
    } else {
        AF(m, u8, 4) = AF(m, u8, 0x40) = 0x80;
    }
    if (b[0x48] != 0) {
        m = AF(p + i * 4, u8 *, 0x28);
        m[0xD] = D_80190CC8[b[0x48]];
        if (b[0x48] >= 4) {
            v = a[0x48];
            m = AF(p + i * 4, u8 *, 0x28);
            if (v & 0x80) {
                AF(m, u16, 0x20) = D_80190C28;
                func_800183E0((s32)&D_800D45D4);
            } else if (v != 0) {
                AF(m, u16, 0x20) = D_80190C1A[v];
                func_800183E0(D_80190CD4[a[0x48]]);
            }
            if (b[0x48] == 5) {
                if (a[0x48] == 0) {
                    b[0x48] = 0;
                } else {
                    b[0x48]++;
                }
            } else if (b[0x48] == 10) {
                b[0x48] = 0;
            } else {
                b[0x48]++;
            }
        } else {
            b[0x48]++;
        }
    } else if (a[0x48] != c[0x48]) {
        if (a[0x48] == 0 && c[0x48] != 0) {
            b[0x48] = 5;
        } else {
            b[0x48] = 0;
        }
        a[0x48] = c[0x48];
        m = AF(p + i * 4, u8 *, 0x28);
        m[0xD] = D_80190CC8[b[0x48]++];
    }
    if (AF(a, s16, 0x2E) == AF(c, s16, 0x2E)) {
        if (AF(b, s16, 0x2E) == 0) {
            goto skip;
        }
        AF(b, s16, 0x2E) = 0;
    } else {
        AF(a, s16, 0x2E) = AF(c, s16, 0x2E);
        AF(b, s16, 0x2E) = 1;
    }
    n = AF(p + i * 4, u8 *, 0x28);
    if (AF(a, s16, 0x2E) != 0) {
        n[0x49] = D_80190CBC[AF(a, s16, 0x2E) >> 4];
    } else {
        n[0x49] = 0xA0;
    }
skip:
    if ((AF(a, s16, 0x1E) & 0x8000) != (AF(c, s16, 0x1E) & 0x8000)) {
        if (AF(a, s16, 0x1E) & 0x8000) {
            AF(a, s16, 0x1E) = 0;
            func_800183E0((s32)&D_800D43D4);
        } else {
            AF(a, s16, 0x1E) = -0x8000;
            func_800183E0((s32)&D_800D4414);
        }
    }
    if (D_800B9A13 != 3) {
        s5 = p[7] != D_800B9A13;
        if (s5) {
            p[7] = D_800B9A13;
        }
    } else {
        s5 = 0;
    }
    s0 = 0;
    switch (c[0x48]) {
    case 3:
        if (func_801619D0(&D_80126B58)) {
            s0 = 0xFF;
        }
        break;
    case 4:
        if (func_80161A00(&D_80126B58)) {
            s0 = 0xFF;
        }
        break;
    case 5:
        if (func_80161A30(&D_80126B58)) {
            s0 = 0xFF;
        }
        break;
    case 6:
        if (func_80161A60(&D_80126B58)) {
            s0 = 0xBA;
        }
        break;
    }
    if (s0 != 0) {
        b[0x47] = 1;
        a[0x4B] = c[0x48] | 0xF0;
        a[0x47] = (D_80126D20 << 7) / s0;
    } else {
        if (a[0x4B] >= 0xF0) {
            a[0x4B] = 0;
        }
        lim = D_80126CE0;
        if (D_80126CE0 != 0) {
            a[0x4B] = v = lim;
            s0 = a[0x47] != v;
        } else {
            lim = c[0x47];
            s0 = 0;
            if (a[0x47] != lim || a[0x47] == 0x80) {
                s0 = 1;
            }
            if (c[0x47] != 0 && a[0x4B] != 0) {
                a[0x4B] = 0;
                a[0x47] = c[0x47];
            }
        }
        if (s0 != 0 || s5 != 0 || b[0x47] != 0) {
            if (s0 != 0 || s5 != 0) {
                if (a[0x47] >= lim) {
                    a[0x47] = (lim == 0) ? a[0x47] - 8 : a[0x47] - 3;
                    if (a[0x47] == 0 || a[0x47] > 0x80) {
                        a[0x47] = 0;
                        a[0x4B] = 0;
                    } else if (a[0x47] < lim) {
                        a[0x47] = lim;
                    }
                } else {
                    a[0x47] = lim;
                }
                b[0x47] = 1;
            } else {
                b[0x47] = 0;
            }
        }
    }
    k = (p[7] != 0) << 8;
    AF(AF(p + i * 4, u8 *, 0x28), s16, 0x32) = AF(p, u16, 0x12) + (k + 5);
    func_801775E0(AF(p + i * 4, u8 *, 0x28) + 0x64, (s16)(AF(p, u16, 0x12) + (k + 9)));
}

extern u8 D_8011F7B1;
extern u16 D_8011F7B4;
extern u16 D_8011F7B6;
extern s16 D_8011F81E;
extern s32 func_80178004();

s32 func_80176D00(s32 arg0) {
    s16 i = arg0;
    u8 *base = (u8 *)&D_8011F7A8;
    u8 *q;
    s32 *a;
    s32 *r;

    if (D_8011F7B1 == 0) {
        q = base + i * 4;
        a = AF(q, s32 *, 0x20) + 5;
        AF(q, s32 *, 0x38) = a;
        D_8011F81E = D_80078EA6;
        r = (s32 *)func_80178004(a, (s16)(D_8011F7B4 - 0x17), (s16)(D_8011F7B6 + 0x65));
        AF(q, s32 *, 0x40) = r - 5;
    }
}

extern u16 D_8011F82A;
extern u16 D_8011F82C;
extern s32 func_80177784();
extern s32 func_801777BC();
extern s32 func_801783D0();

s32 func_80176D94(s32 arg0, s32 arg1, s32 arg2) {
    s16 y = arg2;
    s32 yy;
    s32 p;
    s32 q;
    s32 r;
    s32 t;
    s32 v;

    yy = y << 16;
    q = func_80177784(arg0, yy | (u16)arg1, 0x6B565040);
    r = func_80177784(q, yy | ((arg1 + 8) & 0xFFFF), 0x6B565808);
    q = func_80177784(r, yy | ((arg1 + 0x10) & 0xFFFF), 0x6B564060);
    r = func_80177784(q, yy | ((arg1 + 0x30) & 0xFFFF), 0x6B563858);
    q = func_801777BC(r, (s16)func_801783D0(D_8011F82C, 4), (s16)(arg1 + 0x18), y, 3, 0xAD, 0xFF);
    p = func_801777BC(q, (s16)func_801783D0(D_8011F82A, 4), (s16)(arg1 + 0x38), y, 3, 0xAD, 0xFF);
    AF(p, s32, 0xC) = ((s32)(D_8011F82C * 0x50E6) >> 16) | 0x20000;
    AF(p, s32, 0) = ((p - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(p, s32, 4) = 0x6000DCFF;
    t = ((y + 0xA) << 16) | ((arg1 + 1) & 0xFFFF);
    AF(p, s32, 8) = t;
    v = (s32)(D_8011F82A * 0x50E6) >> 16;
    AF(p, s32, 0x14) = (p & 0xFFFFFF) | 0x03000000;
    AF(p, s32, 0x18) = 0x600000FF;
    AF(p, s32, 0x1C) = t;
    AF(p, s32, 0x20) = v | 0x20000;
    AF(p, s32, 0x28) = ((p + 0x14) & 0xFFFFFF) | 0x03000000;
    AF(p, s32, 0x2C) = 0x60000000;
    AF(p, s32, 0x30) = ((y + 9) << 16) | (arg1 & 0xFFFF);
    AF(p, s32, 0x34) = (v + 2) | 0x40000;
    return p + 0x3C;
}

extern u16 D_8011F82A;
extern u16 D_8011F82C;
extern void func_801778A8();
extern s32 func_801783D0();

void func_80176FF4(s32 arg0) {
    s32 t;

    arg0 += 0x50;
    func_801778A8(arg0, (s16)func_801783D0(D_8011F82C, 4), 3, 0xFF);
    arg0 += 0x3C;
    func_801778A8(arg0, (s16)func_801783D0(D_8011F82A, 4), 3, 0xFF);
    arg0 += 0x3C;
    AF(arg0, s16, 0xC) = (u32)(D_8011F82C * 0x2873) >> 15;
    arg0 += 0x14;
    t = (s32)(D_8011F82A * 0x50E6) >> 16;
    AF(arg0, s16, 0xC) = t;
    AF(arg0, s16, 0x20) = t + 2;
}

extern u16 D_8011F82E;
extern u16 D_8011F830;

s32 func_801770E0(s32 arg0, s32 arg1, s32 arg2) {
    s16 y = arg2;
    s32 a;
    s32 t;
    s32 w;

    arg0 = func_80177784(arg0, (y << 16) | (u16)arg1, 0x6E165010);
    arg0 = func_80177784(arg0, (y << 16) | ((arg1 + 8) & 0xFFFF), 0x6E165808);
    arg0 = func_80177784(arg0, (y << 16) | ((arg1 + 0x10) & 0xFFFF), 0x6E164060);
    arg0 = func_80177784(arg0, (y << 16) | ((arg1 + 0x30) & 0xFFFF), 0x6E163858);
    arg0 = func_801777BC(arg0, (s16)func_801783D0(D_8011F830, 4), (s16)(arg1 + 0x18), y, 3, 0xB8, 0xFF);
    arg0 = func_801777BC(arg0, (s16)func_801783D0(D_8011F82E, 4), (s16)(arg1 + 0x38), y, 3, 0xB8, 0xFF);
    a = ((y - 4) << 16) | ((arg1 + 1) & 0xFFFF);
    w = (s32)(D_8011F830 * 0x50E6) >> 16;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x6055FF00;
    AF(arg0, s32, 8) = a;
    AF(arg0, s32, 0xC) = w | 0x20000;
    t = (s32)(D_8011F82E * 0x50E6) >> 16;
    AF(arg0, s32, 0x14) = (arg0 & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 0x18) = 0x60FF3214;
    AF(arg0, s32, 0x1C) = a;
    AF(arg0, s32, 0x20) = t | 0x20000;
    AF(arg0, s32, 0x28) = ((arg0 + 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 0x2C) = 0x60000000;
    AF(arg0, s32, 0x30) = ((y - 5) << 16) | (arg1 & 0xFFFF);
    AF(arg0, s32, 0x34) = (t + 2) | 0x40000;
    return arg0 + 0x3C;
}

extern u16 D_8011F82E;
extern u16 D_8011F830;

void func_80177340(s32 arg0) {
    s32 t;

    arg0 += 0x50;
    func_801778A8(arg0, (s16)func_801783D0(D_8011F830, 4), 3, 0xFF);
    arg0 += 0x3C;
    func_801778A8(arg0, (s16)func_801783D0(D_8011F82E, 4), 3, 0xFF);
    arg0 += 0x3C;
    AF(arg0, s16, 0xC) = (u32)(D_8011F830 * 0x2873) >> 15;
    arg0 += 0x14;
    t = (s32)(D_8011F82E * 0x50E6) >> 16;
    AF(arg0, s16, 0xC) = t;
    AF(arg0, s16, 0x20) = t + 2;
}

STile *func_8017742C(STile *p, s32 x, s32 y) {
    STile *t;
    s32 h;
    s32 xx;
    s32 yy;
    u8 *c;
    u8 *b;

    t = p;
    xx = x;
    b = &D_8011F7F0;
    t->tag = ((u32)(t - 1) & 0xFFFFFF) | 0x03000000;
    t->code = 0x60;
    if (D_8011F837 < 0x80) {
        t->r0 = 0xFF;
        t->g0 = t->b0 = 0x10;
    } else if (D_8011F837 == 0x80) {
        switch (D_8011F7AB) {
        default:
            D_8011F7AB = 0;
        case 0:
            t->r0 = 0xFF;
            t->g0 = t->b0 = 0x30;
            break;
        case 1:
            t->g0 = 0xFF;
            t->b0 = 0x30;
            t->r0 = 0x30;
            break;
        case 2:
            t->b0 = 0xFF;
            t->g0 = 0x30;
            t->r0 = 0x30;
            break;
        }
        c = &D_8011F7AB;
        *c += 1;
    } else {
        t->g0 = 0xFF;
        t->r0 = t->b0 = 0x10;
    }
    p++; t->x0 = xx; h = AF(b, u8, 0x47) * 3 >> 3; t->w = 8; yy = y + 0x48; t->y0 = yy - h; t->h = h;
    t = p;
    t->tag = ((u32)(t - 1) & 0xFFFFFF) | 0x03000000;
    t->code = 0x60;
    t->r0 = t->g0 = 0x40;
    if (AF(b, u8, 0x47) != 0) {
        t->b0 = 0xA0;
    } else {
        t->b0 = 0x40;
    }
    t->w = 8;
    t->h = 0x48;
    t->x0 = xx;
    t->y0 = y;
    return p + 1;
}

extern u8 D_8011F83B;
extern void func_801776EC();

void func_801775E0(STile *p, s32 y0) {
    s16 y = y0;
    STile *t;
    u8 *b;
    u32 h;
    s16 yy;

    t = p;
    b = &D_8011F7F0;
    switch (D_8011F83B) {
    case 0:
        if (D_8011F837 == 0x80) {
            func_801776EC(t);
        } else {
            t->r0 = 0xFF;
            t->g0 = t->b0 = 0x10;
        }
        break;
    case 0xF3:
    case 0xF4:
    case 0xF5:
    case 0xF6:
        func_801776EC(t);
        break;
    default:
        t->g0 = 0xFF;
        t->r0 = t->b0 = 0x10;
        break;
    }
    h = (u32)(AF(b, u8, 0x47) * 9) >> 4;
    yy = y + 0x48;
    t->h = h;
    t->y0 = yy - h;
    p++;
    t = p;
    if (AF(b, u8, 0x47) != 0) {
        t->b0 = 0xA0;
    } else {
        t->b0 = 0x40;
    }
    t->y0 = y;
}

void func_801776EC(STile *p) {
    STile *t;
    u8 *c;

    t = p;
    switch (D_8011F7AB) {
    default:
        D_8011F7AB = 0;
    case 0:
        t->r0 = 0xFF;
        t->g0 = t->b0 = 0x30;
        break;
    case 1:
        t->g0 = 0xFF;
        t->b0 = 0x30;
        t->r0 = 0x30;
        break;
    case 2:
        t->b0 = 0xFF;
        t->g0 = 0x30;
        t->r0 = 0x30;
        break;
    }
    c = &D_8011F7AB;
    *c += 1;
}

s32 func_80177784(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0) = (s32) (((arg0 - 0x14) & 0xFFFFFF) | 0x03000000);
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = arg1;
    AF(arg0, s32, 0xC) = arg2;
    return arg0 + 0x14;
}

s32 func_801777BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 n = arg4;
    s16 cy = arg5;
    s32 flag;
    s32 clut;
    s16 d;
    s16 i;
    s32 uv;

    flag = 0x01000000;
    clut = (((cy + 0x100) << 6) | 0x16) << 16;
    for (i = 0; i < n; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == n - 1 || i == (s16)arg6) {
            flag = 0;
        }
        AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(arg0, s32, 8) = (arg3 << 16) | (arg2 & 0xFFFF) | flag;
        AF(arg0, s32, 4) = 0x74808080;
        uv = (d * 8 + 8) | 0x4000;
        AF(arg0, s32, 0xC) = clut | uv;
        arg0 += 0x14;
        arg2 += 8;
        arg1 <<= 4;
    }
    return arg0;
}

void func_801778A8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 n = arg2;
    s16 k = arg3;
    s32 f = 0x100;
    s16 i;
    s16 d;
    for (i = 0; i < n; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == n - 1 || i == k) {
            f = 0;
        }
        arg1 <<= 4;
        AF(arg0, s16, 0xA) = f | (AF(arg0, s16, 0xA) & ~0x100);
        AF(arg0, u8, 0xC) = d * 8 + 8;
        arg0 += 0x14;
    }
}

static inline s32 h_80177784(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0) = (s32) (((arg0 - 0x14) & 0xFFFFFF) | 0x03000000);
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = arg1;
    AF(arg0, s32, 0xC) = arg2;
    return arg0 + 0x14;
}

static inline s32 h_801777BC(s32 arg0, s16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 cy = arg5;
    s32 flag;
    s32 clut;
    s16 d;
    s16 i;
    s16 uv;
    clut = (((cy + 0x100) << 6) | 0x16) << 16;
    flag = 0x01000000;
    for (i = 0; i < arg4; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == arg4 - 1 || i == (s16)arg6) {
            flag = 0;
        }
        AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(arg0, s32, 8) = arg3 | (arg2 & 0xFFFF) | flag;
        AF(arg0, s32, 4) = 0x74808080;
        uv = (d * 8 + 8) | 0x4000;
        AF(arg0, s32, 0xC) = clut | uv;
        arg0 += 0x14;
        arg2 += 8;
        arg1 <<= 4;
    }
    return arg0;
}

s32 func_80177940(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 dd = arg1;
    s32 c;
    s32 t;
    s32 hi;
    u16 x;

    t = ((s32 (*)())func_80029504)() - 0xA; /* MATCH-TRICK: callee declared void in the file */
    t = (u32)t < 0x4B0;
    c = -t;
    c &= 0xB4;
    x = arg2;
    hi = arg3 << 16;
    arg0 = h_80177784(arg0, hi | ((x + 0xF) & 0xFFFF), ((((c + 0x100) << 6) | 0x16) << 16) | 0x3850);
    arg0 = h_801777BC(arg0, dd, x, hi, 4, c, 1);
    AF(arg0, u16, -0x20) += 6;
    AF(arg0, u16, -0xC) += 6;
    return arg0;
}

void func_80177AD4(u8 *arg0, s32 arg1) {
    s32 f = 0x100;
    s16 i;
    s16 d;
    for (i = 0; i < 4; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == 3 || i == 1) {
            f = 0;
        }
        arg1 <<= 4;
        AF(arg0, s16, 0x1E) = f | (AF(arg0, s16, 0x1E) & ~0x100);
        AF(arg0, u8, 0x20) = d * 8 + 8;
        arg0 += 0x14;
    }
}

extern u8 D_80190CF0[];

s32 func_80177B5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 c = arg2;
    s16 y = arg4;
    u16 w = arg3;
    s32 b;
    s32 f;
    s16 x;
    s16 i;
    s16 d;
    u8 t;
    s32 col;
    s32 q;
    s32 u;
    s32 v;
    s32 v2;
    s32 k;

    t = D_80190CF0[c];
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = ((y + 1) << 16) | (u16)(w - 3);
    AF(arg0, s32, 0xC) = (((t << 6) | 0x4016) << 16) | 0x1800;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = ((y + 1) << 16) | (u16)(w + 5);
    AF(arg0, s32, 0xC) = (((t << 6) | 0x4016) << 16) | 0x1808;
    arg0 += 0x14;
    q = arg0;
    b = arg1;
    x = w + 0xE;
    f = 0x1000000;
    for (i = 0; i < 3; i++) {
        d = (u32)(b << 16) >> 28;
        if (d != 0 || i == 2 || i == 0xFF) {
            f = 0;
        }
        AF(q, s32, 0) = ((q - 0x14) & 0xFFFFFF) | 0x03000000;
        col = 0x74808080;
        AF(q, s32, 4) = col;
        AF(q, s32, 8) = (y << 16) | (u16)x | f;
        u = (d * 8 + 8) | 0x4000;
        AF(q, s32, 0xC) = (((t << 6) | 0x4016) << 16) | u;
        q += 0x14;
        x += 8;
        b <<= 4;
    }
    arg0 = q;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = col;
    AF(arg0, s32, 8) = (y << 16) | (u16)(w + 0x2A);
    k = ((t << 6) | 0x4016) << 16;
    v = (c << 4) | 0x1000;
    AF(arg0, s32, 0xC) = k | v;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = col;
    AF(arg0, s32, 8) = (y << 16) | (u16)(w + 0x32);
    k = ((t << 6) | 0x4016) << 16;
    v2 = (c << 4) | 0x1008;
    AF(arg0, s32, 0xC) = k | v2;
    return arg0 + 0x14;
}

void func_80177DA8(s32 arg0, s32 arg1, s32 arg2) {
    s16 c = arg2;
    s32 f;
    s16 i;
    s16 d;
    u8 t;
    s16 k;
    s32 q;
    s32 kk;
    s32 v;
    s32 v2;

    f = 0x100;
    t = D_80190CF0[c];
    k = (t << 6) | 0x4016;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    q = arg0;
    for (i = 0; i < 3; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == 2 || i == 0xFF) {
            f = 0;
        }
        arg1 <<= 4;
        AF(q, s16, 0xA) = f | (AF(q, s16, 0xA) & ~0x100);
        AF(q, u8, 0xC) = d * 8 + 8;
        q += 0x14;
    }
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    kk = ((t << 6) | 0x4016) << 16;
    v = (c << 4) | 0x1000;
    v2 = (c << 4) | 0x1008;
    AF(arg0, s32, 0xC) = kk | v;
    AF(arg0, s32, 0x20) = kk | v2;
}

s32 func_80177EA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 y = arg3;
    s32 q = arg0;
    s32 b = arg1;
    s16 x = arg2;
    s16 i;
    s32 f = 0x1000000;
    s16 d;

    for (i = 0; i < 7; i++) {
        AF(q, s32, 0) = ((q - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(q, s32, 4) = 0x74808080;
        if (i != 0) {
            if (i == 6) {
                d = 1;
                f = 0;
            } else {
                d = ((b >> 16) & 0xF) + 1;
                b <<= 4;
            }
            if (d != 1) {
                f = 0;
            }
            AF(q, s32, 8) = (y << 16) | (u16)x | f;
        } else {
            d = 0;
            AF(q, s32, 8) = (y << 16) | (u16)x;
        }
        AF(q, s32, 0xC) = (d * 8) | 0x6B564000;
        q += 0x14;
        x += 8;
    }
    return q;
}

void func_80177F84(u8 *arg0, s32 arg1) {
    s16 i;
    s32 flag = 0x100;
    s16 d;
    s32 e;
    s32 t;
    u8 *p = arg0 - 8;
    for (i = 0; i < 5; i++) {
        d = (arg1 >> 16) & 0xF;
        e = d;
        arg1 <<= 4;
        if (i == 5 || e != 0) {
            flag = 0;
        }
        p += 0x14;
        t = AF(p, u16, 0x12) & ~0x100;
        AF(p, u16, 0x12) = flag | t;
        AF(p, u8, 0x14) = d * 8 + 8;
    }
}

static inline s32 h_80178004(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 flag;
    s32 clut;
    s16 d;
    s16 i;
    s32 uv;
    s32 c;
    s16 yy = arg3;
    clut = 0x6D160000;
    flag = 0x01000000;
    for (i = 0; i < 3; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == 2 || i == 0xFF) {
            flag = 0;
        }
        uv = (d * 8 + 8) | 0x4000;
        c = clut | uv;
        AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(arg0, s32, 8) = (yy << 16) | (arg2 & 0xFFFF) | flag;
        AF(arg0, s32, 4) = 0x74808080;
        AF(arg0, s32, 0xC) = c;
        arg0 += 0x14;
        arg2 += 8;
        arg1 <<= 4;
    }
    return arg0;
}

s32 func_80178004(s32 arg0, s32 arg1, s32 arg2) {
    s32 k = 0x6D165828;
    s32 y = arg2 << 16;

    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)arg1;
    AF(arg0, s32, 0xC) = k;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 7);
    AF(arg0, s32, 0xC) = 0x6D160048;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0xD);
    AF(arg0, s32, 0xC) = 0x6D160818;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0x13);
    AF(arg0, s32, 0xC) = 0x6D160028;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0x19);
    AF(arg0, s32, 0xC) = 0x6D160020;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0x3A);
    AF(arg0, s32, 0xC) = 0x6D164058;
    arg0 += 0x14;
    arg0 = h_80178004(arg0, func_801783D0(100 - ((D_8011F81E * 0xA198) >> 16), 4), arg1 + 0x22, arg2);
    return arg0;
}

s32 func_80178298(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    while (*arg1 < 0x80) {
        switch (AF(arg1, s16, 0)) {
        case 0x1850:
        case 0x1858:
            AF(arg0, s16, 8) = arg2 + 4;
            AF(arg0, s16, 0xA) = arg3 - 7;
            break;
        case 0x3870:
            arg2 += 8;
            arg1 += 2;
            continue;
        case 0x3871:
            arg2 += 4;
            arg1 += 2;
            continue;
        case 0x3872:
            arg2 += 2;
            arg1 += 2;
            continue;
        default:
            AF(arg0, s16, 8) = arg2;
            AF(arg0, s16, 0xA) = arg3;
            if (AF(arg1, s16, 0) >= 0x861) {
                arg2 += 8;
            } else {
                arg2 += 7;
            }
            break;
        }
        AF(arg0, s32, 0) = ((s32)(arg0 - 0x14) & 0xFFFFFF) | 0x04000000;
        AF(arg0, s32, 4) = 0x64808080;
        AF(arg0, u8, 0xC) = *arg1++;
        AF(arg0, u8, 0xD) = *arg1++;
        AF(arg0, s16, 0xE) = 0x4056;
        AF(arg0, s16, 0x10) = 8;
        AF(arg0, s16, 0x12) = 8;
        arg0 += 0x14;
    }
    return (s32)arg0;
}

s32 func_801783D0(s32 arg0, s32 arg1) {
    s32 r = 0;
    s32 n = arg0;
    s32 sh = 0;
    while (n >= 10) {
        arg0 = arg0 / 10;
        r |= (n - (arg0 * 2 + arg0 * 8)) << sh;
        n = arg0;
        sh += 4;
    }
    r |= n << sh;
    return r << arg1;
}

void func_80178438(u16 *arg0) {
    func_8001534C(2, (s32) &D_801ECAE0, 0x80, 0x88, /* extra? */ 0, /* extra? */ 0);
    func_800153CC(3, (s32) *arg0, 0xA8, 0x88, /* extra? */ 0x40, /* extra? */ 0);
}

extern void (**D_8011DB08)();
extern s32 func_801787D4();
extern void func_8012A908();
extern void func_8017869C();
extern void func_80130D0C();
extern void func_8013E370();

void func_8017849C(void) {
    u8 *a;
    s32 i;
    void (**tbl)();
    u8 *o;

    a = &D_801202A0;
    func_801787D4();
    func_8012A908();
    for (i = 0; i < 0x60; i++, a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (D_801270C0 == 1 || (AF(a, u16, 0x72) & 0x1000))) {
            func_8017869C(a);
            ((s32 *)a)[14] = ((s32 *)a)[1];
            ((s32 *)a)[15] = ((s32 *)a)[2];
            ((s32 *)a)[16] = ((s32 *)a)[3];
            tbl = D_8011DB08;
            if (AF(a, u8, 0xC0) != 0 && AF(a, u8, 0xC1) != 0) {
                func_80130D0C(a);
            } else {
                tbl[AF(a, u16, 0)](a);
            }
            o = AF(a, u8 *, 0x20);
            if (o != 0) {
                AF(o, s16, 8) = AF(a, u16, 6) + AF(a, u16, 0x50);
                AF(AF(a, u8 *, 0x20), s16, 0xA) = AF(a, u16, 0xA) + AF(a, u16, 0x52);
                AF(AF(a, u8 *, 0x20), s16, 0xC) = AF(a, u16, 0xE) + AF(a, u16, 0x54);
            }
        }
    }
    if (D_801270C0 == 1) {
        func_8013E370();
    }
}

extern s16 D_801270C2;
extern s16 D_801270C4;
extern u8 D_801270C6;
extern u8 D_801270C7;
extern s32 D_801274D8;
extern s32 D_801274DC;
extern s32 D_801274E0;
extern void func_8013E4B4();

void func_80178608(void) {
    s16 *p;
    func_80016714(&D_801202A0, 0x6480);
    p = &D_801270C0;
    *p = 1;
    D_801270C4 = 1;
    D_801274D8 = 0x240000;
    D_801270C2 = 0;
    D_801270C6 = 0;
    D_801270C7 = 0;
    D_801274DC = 0x271000;
    D_801274E0 = 0x400000;
    func_80016714((u8 *) p + 8, 0x400);
    func_8013E4B4();
}

extern void func_80178744();

void func_8017869C(s32 arg0) {
    s16 t;
    s32 a;
    if (AF(arg0, s16, 0xAA) != 0) {
        t = --AF(arg0, s16, 0xAA);
        if (t == 0) {
            a = 0x1000;
            if (AF(arg0, u16, 0x5E) == 0x1E) {
                AF(arg0, u16, 0x5E) = 0;
            }
        } else if (t > 0xF0) {
            a = 0x1000 - (0x100 - t) * 0x90;
        } else if (t < 0x10) {
            a = 0x1000 - t * 0x90;
        } else {
            a = 0x700;
        }
        func_80178744(arg0, a);
    }
}

void func_80178744(s32 arg0, s32 arg1) {
    if (AF(arg0, s32, 0x6C) != 0) {
        func_80178744(AF(arg0, s32, 0x6C), arg1);
    }
    AF(AF(arg0, s32, 0x20), s16, 0x18) = AF(AF(arg0, s32, 0x20), s16, 0x1A) = AF(AF(arg0, s32, 0x20), s16, 0x1C) = arg1;
    if (arg1 == 0x1000) {
        AF(AF(arg0, s32, 0x20), u16, 0x2C) &= ~0x10;
    } else {
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
    }
}

s32 func_801787D4(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &D_801202A0;
    var_s1 = 0;
    do {
        if ((AF(var_s0, u16, 0) != 0) && (AF(var_s0, u8, 0xC0) != 0)) {
            func_80178840((s32) var_s0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0x60;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x10C);
    } while (temp_v0 != 0);
    return temp_v0;
}

extern u8 D_80190D50;
extern s32 D_80190D5C[];
extern void func_80131E00();

void func_80178840(s32 arg0) {
    u8 n;
    if (AF(arg0, u16, 0x5C) & 1) {
        n = AF(arg0, u8, 0x5E);
        if (n == 0xC) {
            StartRumbleScript((s32) &D_80190D50);
        }
        func_80131E00(arg0, D_80190D5C[n]);
    }
}

extern s32 func_8012C658();
extern void func_8012E8E0();
extern void func_8012B2CC();

s32 func_801788B8(s32 arg0, s32 arg1) {
    u16 sp[4];
    s32 o;

    o = func_8012C658(0x83, AF(arg0, s16, 0x70), 0);
    if (o == 0) {
        return 0;
    }
    AF(o, s32, 0x64) = arg0;
    sp[0] = AF(arg0, u16, 6);
    sp[1] = AF(arg0, u16, 0xA);
    sp[2] = AF(arg0, u16, 0xE);
    if (AF(arg0, s32, 0x20) != 0) {
        sp[3] = AF(AF(arg0, s32, 0x20), u16, 0x12);
    } else {
        sp[3] = 0;
    }
    func_8012E8E0(o, sp);
    func_8012B2CC(o);
    AF(o, s32, 0xDC) = arg1;
    return o;
}

/* "finished?": the driver is done and the scripted camera idle */
s32 func_80178970(void) {
    if (func_801789AC() != 0 && D_801EF3F0 == 0) {
        return 1;
    }
    return 0;
}

s32 func_801789AC(s32 obj) {
    func_8017BC38(obj);
    func_8017A4AC();
    func_8017AE2C(obj);
    switch (D_801EF464) {
    case 1:
        if ((D_801EF2E0 = func_801399F0(D_801EE5E0)) == 0) {
            break;
        }
        goto run;
    case 2:
        if ((D_801EF2E0 = func_801399F0(D_801EE5E0)) == 0) {
            break;
        }
        goto run;
    case 4:
        if (--D_801EE1CC > 0) {
            break;
        }
        goto run;
    case 5:
        if (((VmWait)D_801EE60C)(obj) == 0) {
            break;
        }
    case 3:
    run:
        func_80178CBC(obj, D_801EE1C8);
        break;
    case 6:
        switch (D_801EF2E0) {
        case 1:
        case -1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        }
        break;
    }
    return 0;
}

/* reset, patch the built-in script's goto target (D_80190E48, the 4th word of the script at D_80190E3C) and run it;
   clears Musashi's action handler first */
void func_80178B18(s32 obj, s32 s) {
    D_80190E48[0] = s;
    func_80178BF8();
    func_801746A4();
    func_8017435C();
    func_80178CBC(obj, &D_80190E48[-3]);
}

/* reset, patch the built-in script's goto target and run it */
void func_80178B70(s32 obj, s32 s) {
    D_80190E48[0] = s;
    func_80178BF8();
    func_80178CBC(obj, &D_80190E48[-3]);
}

void func_80178BB8(s32 arg0, s32 arg1) {
    func_80178BF8();
    func_80178CBC(arg0, arg1);
}

/* reset all VM state: the window, the gosub slot, the hooks, the 512-halfword command ring, the actor-move block */
void func_80178BF8(void) {
    s32 i;

    D_801EF464 = 0;
    D_801EE5E0 = 0;
    D_801EE5F0 = 0;
    D_801EE5EC = 0;
    D_801EE5E8 = 0;
    D_801EE5E4 = 0;
    D_801EF2E0 = 1;
    D_801EE5F8 = 0;
    D_801EE5D8 = 0;
    for (i = 9; i >= 0; i--) {
        D_801EE624[i] = NULL;
    }
    for (i = 0x1FF; i >= 0; i--) {
        D_801EE1D0[i] = 0;
    }
    D_801EE5D0 = 0;
    D_801EE5D4 = 0;
    func_80016714(D_801EF3A8, 0x14);
    func_8017B1D8();
}

s32 func_80178CBC(s32 arg0, s32 arg1) {
    D_801EE1C8 = arg1;
    do {
        func_80178D40(arg0, D_801EE1C8);
    } while (D_801EF464 == 3);
    return (s32) D_801EF464;
}

s32 func_80178D18(s32 arg0) {
    D_801EF464 = 0;
    return func_80174714();
}

/* the interpreter's declarations: VM state, the natives it calls, the helpers defined after it */
extern s32 D_801EE618;
extern s32 D_801EE620;
extern s32 D_801EF2D8;
extern s32 D_801EF3EC;
extern void AnimHelper();
extern void SetScript();
extern void func_8001AAD0();
extern s32 func_8012B8A4();
extern void func_8012E88C();
extern void func_8012E8A8();
extern void func_8012E8E0();
extern void func_8012F40C();
extern s32 func_80137614();
void func_80179B28(s32 arg0);
s32 func_80179D78(u16 *p);
s32 func_80179DCC(s16 a);
s32 func_80179DF8(void);
s32 func_80179E1C(s16 a);
s32 func_80179E48(s16 a);
s32 func_80179E74(s16 a);
s32 func_80179EA0(u16 *p);
s32 func_80179EE8(s16 a);
s32 func_80179F14(s16 a, s16 b);
s32 func_80179F44(void);
s32 func_80179F6C(s16 a);
s32 func_80179F98(u16 *p);
s32 func_80179FEC(u16 *p);
s32 func_8017A040(u16 *p);
s32 func_8017A094(s32 arg0);
s32 func_8017A0C4(s32 arg0);
s32 func_8017A0F4();
s32 func_8017A11C(void);
s32 func_8017A144(s32 arg0);
s32 func_8017A180(void);
s32 func_8017A1A8(void);
s32 func_8017A1D0(void);
s32 func_8017A1F8(void);
s32 func_8017A220(void);
s32 func_8017A248(void);
s32 func_8017A270(void);
s32 func_8017A298(void);
s32 func_8017A2C0(void);
s32 func_8017A2E8(void);
s32 func_8017A310(void);
s32 func_8017A338(void);
s32 func_8017A360(void);
s32 func_8017A388(void);
s32 func_8017A3B0(void);
s32 func_8017A3D8(void);
void func_8017B238(s32 obj, u32 arg);
void func_8017B614(s32 obj, u32 arg);
void func_8017B7A8(s32 arg0);
void func_8017B824(void);
s32 func_8017B880(void);
extern void func_8017B940();
extern void func_8017BA3C();             /* func_8017B368 and B490 pass only obj, as in the original */
void func_8017BB34(s32 obj, VmOrbit *b);

/* the interpreter step: one entry [op, arg] at pc; the handlers in the original's address order (op 0x4F falls
   through into 0x28); the y copy in 0x39 is read before the state store (combine keeps lw + sign extension), 0x5C
   compares the hooks with pc[1] itself (loop hoists it: the copy of the tested value), 0x24 writes the heading through
   an in-struct pointer so its loads rise above the state store */
void func_80178D40(s32 obj, s32 *pc) {
    SVECTOR in;
    SVECTOR out;
    s32 xy;
    s32 mu = (s32)&D_80126B58;
    VmMove *m = (VmMove *)D_801EF3A8;

    switch (pc[0]) {
    case 0x01:
        func_80179B28(D_801EE5E0);
        D_801EE5E0 = func_80137614(pc[1], D_801EE5EC, D_801EE5F0 ? 0x48 : 0x40);
        D_801EF464 = 2;
        break;
    case 0x00:
        func_80179B28(D_801EE5E0);
        D_801EE5E0 = func_80137614(pc[1], D_801EE5E4, D_801EE5E8 ? 0x48 : 0x40);
        D_801EF464 = 1;
        break;
    case 0x45:
        ((VmHook)pc[1])(obj);
        if (D_801EF2D8 != 0) {
            func_80179B28(D_801EE5E0);
            D_801EE5E0 = func_80137614(AF(obj, s32, 0xE0), D_801EE5E4, D_801EE5E8 ? 0x48 : 0x40);
            D_801EF464 = 1;
            break;
        }
        D_801EF464 = 3;
        break;
    case 0x32:
        func_80179B28(D_801EE5E0);
        D_801EE5E0 = func_80137614(((s32 *)(obj + 0xDC))[pc[1]], D_801EE5E4, D_801EE5E8 ? 0x48 : 0x40);
        D_801EF464 = 1;
        break;
    case 0x02:
        func_80179B28(D_801EE5E0);
        if (D_801EE5F8 != 0) {
            D_801EE1C8 = D_801EE5F8;
            D_801EE5F8 = 0;
            D_801EF464 = 3;
            return;
        }
        D_801EF464 = 6;
        break;
    case 0x06:
        func_80179DF8();
        D_801EF464 = 3;
        break;
    case 0x03:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        AnimHelper(&in);
        D_801EF464 = 3;
        break;
    case 0x04:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        FaceHelper(obj, &in, &out);
        AnimHelper(&out);
        D_801EF464 = 3;
        break;
    case 0x4C:
        func_80179D78((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x4D:
        in.vx = ((u16 *)pc[1])[0];
        in.vy = 0;
        in.vz = ((u16 *)pc[1])[2];
        FaceHelper(obj, &in, &out);
        out.pad = ((u16 *)pc[1])[3];
        func_80179D78((u16 *)&out);
        D_801EF464 = 3;
        break;
    case 0x15:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        FaceHelper(AF(obj, s32, 0xD4), &in, &out);
        AnimHelper(&out);
        D_801EF464 = 3;
        break;
    case 0x05:
        func_80179DCC(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x07:
        func_80179E1C(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x08:
        func_80179E74(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x09:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        func_80179EA0((u16 *)&in);
        D_801EF464 = 3;
        break;
    case 0x0A:
        in.vx = AF(obj, s16, 6);
        in.vy = AF(obj, s16, 0xA);
        in.vz = AF(obj, s16, 0xE);
        func_80179EA0((u16 *)&in);
        D_801EF464 = 3;
        break;
    case 0x16:
    {
        s32 q = AF(obj, s32, 0xD4);
        in.vx = AF(q, s16, 6);
        in.vy = AF(q, s16, 0xA);
        in.vz = AF(q, s16, 0xE);
        func_80179EA0((u16 *)&in);
        D_801EF464 = 3;
        break;
    }
    case 0x0B:
        func_8017A0F4();
        D_801EF464 = 3;
        break;
    case 0x0C:
        func_8017A11C();
        D_801EF464 = 3;
        break;
    case 0x0D:
        func_8017A180();
        D_801EF464 = 3;
        break;
    case 0x0E:
        func_8017A1A8();
        D_801EF464 = 3;
        break;
    case 0x10:
        func_8017A1D0();
        D_801EF464 = 3;
        break;
    case 0x46:
        func_8017A1F8();
        D_801EF464 = 3;
        break;
    case 0x59:
        func_8017A220();
        D_801EF464 = 3;
        break;
    case 0x5A:
        func_8017A248();
        D_801EF464 = 3;
        break;
    case 0x49:
        func_8017A144(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x47:
        func_8017A270();
        D_801EF464 = 3;
        break;
    case 0x17:
        func_80179EE8(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x18:
        func_80179F14(((s16 *)pc)[2], ((s16 *)pc)[3]);
        D_801EF464 = 3;
        break;
    case 0x19:
        func_80179F6C(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x1A:
        func_80179F98((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x51:
        func_8017A040((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x1B:
        D_801EE618 = pc[1];
        func_80179F44();
        D_801EF464 = 3;
        break;
    case 0x1C:
        func_8017A338();
        D_801EF464 = 3;
        break;
    case 0x52:
        func_8017A360();
        D_801EF464 = 3;
        break;
    case 0x1D:
        func_8017A388();
        D_801EF464 = 3;
        break;
    case 0x3B:
        func_8017A094(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x3C:
        func_8017A0C4(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x0F:
    case 0x3F:
        D_801EF464 = 4;
        D_801EE1CC = pc[1];
        break;
    case 0x3E:
        D_801EF464 = 5;
        D_801EE60C = pc[1];
        break;
    case 0x40:
        D_801EE60C = (s32)func_8017A3B0;
        D_801EF464 = 5;
        break;
    case 0x23:
        SetScript(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x31:
        SetScript(obj, ((s32 *)(obj + 0xDC))[pc[1]]);
        D_801EF464 = 3;
        break;
    case 0x24:
        ((s16 *)((s32 *)obj)[8])[9] = pc[1];
        D_801EF464 = 3;
        break;
    case 0x25:
        m->kind = 1;
        m->heading = AF(AF(obj, s32, 0x20), s16, 0x12) + ((u16 *)pc)[2];
        m->n = 0x1E;
        m->speed = ((u16 *)pc)[3];
        D_801EF464 = 3;
        break;
    case 0x48:
        m->kind = 1;
        m->heading = ((u16 *)pc)[2];
        m->n = 0x1E;
        m->speed = ((u16 *)pc)[3];
        D_801EF464 = 3;
        break;
    case 0x26:
        m->kind = 1;
        m->heading = func_8012B8A4(obj);
        m->n = 0x1E;
        m->speed = pc[1];
        D_801EF464 = 3;
        break;
    case 0x3D:
        func_8012E8E0(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x27:
        m->kind = 2;
        m->fwd = ((u16 *)pc)[2];
        m->n = ((u16 *)pc)[3];
        D_801EF464 = 3;
        break;
    case 0x4F:
        m->walkTurn = 1;
        m->kind = 3;
        m->pt.vx = ((u16 *)pc)[2];
        m->pt.vy = AF(obj, s16, 0xA);
        m->pt.vz = ((u16 *)pc)[3];
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
    case 0x28:
        m->walkTurn = 0;
        m->kind = 3;
        m->pt.vx = ((u16 *)pc)[2];
        m->pt.vy = AF(obj, s16, 0xA);
        m->pt.vz = ((u16 *)pc)[3];
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
        break;
    case 0x29: {
        SVECTOR a;
        SVECTOR b;
        a.vx = ((u16 *)pc)[2];
        a.vy = AF(obj, s16, 0xA);
        a.vz = ((u16 *)pc)[3];
        FaceHelper(obj, &a, &b);
        m->walkTurn = 0;
        m->kind = 3;
        m->pt = b;
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
        break;
    }
    case 0x50: {
        SVECTOR a;
        SVECTOR b;
        a.vx = ((u16 *)pc)[2];
        a.vy = AF(obj, s16, 0xA);
        a.vz = ((u16 *)pc)[3];
        FaceHelper(obj, &a, &b);
        m->walkTurn = 1;
        m->kind = 3;
        m->pt = b;
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
        break;
    }
    case 0x2A:
        m->kind = 4;
        m->n = pc[1];
        D_801EF464 = 3;
        break;
    case 0x1E:
        func_8017B238(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x21:
        func_8017BA3C(obj, (VmOrbit *)pc[1]);
        func_8017B238(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x54:
        func_8017BB34(obj, (VmOrbit *)pc[1]);
        func_8017B238(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x1F:
        func_8017B614(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x22:
        func_8017BA3C(obj, (VmOrbit *)pc[1]);
        func_8017B614(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x55:
        func_8017BB34(obj, (VmOrbit *)pc[1]);
        func_8017B614(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x20:
        func_8017B7A8(obj);
        D_801EF464 = 3;
        break;
    case 0x4E:
        D_801EE620 = pc[1];
        func_8017B940(obj);
        D_801EF464 = 3;
        break;
    case 0x57:
        func_8017B824();
        D_801EF464 = 3;
        break;
    case 0x58:
        func_8017B880();
        D_801EF464 = 3;
        break;
    case 0x2B:
        D_801EF464 = 3;
        AF(obj, s16, 0x2) = pc[1];
        break;
    case 0x2C:
        D_801EF464 = 3;
        AF(obj, s16, 0x34) = pc[1];
        break;
    case 0x2D:
        D_801EF464 = 3;
        AF(obj, s32, 0xD8) = pc[1];
        break;
    case 0x2F:
        D_801EF464 = 3;
        AF(obj, s16, 0x10A) = pc[1];
        break;
    case 0x2E:
        D_801EF464 = 3;
        AF(obj, s32, 0xF8) = pc[1];
        break;
    case 0x11:
        func_8017A298();
        D_801EF464 = 3;
        break;
    case 0x12:
        func_8017A2C0();
        D_801EF464 = 3;
        break;
    case 0x13:
        func_8017A2E8();
        D_801EF464 = 3;
        break;
    case 0x14:
        func_8017A310();
        D_801EF464 = 3;
        break;
    case 0x33:
        D_801EF3EC = (s32)(pc + 2);
        ((VmHook)pc[1])(obj);
        D_801EF464 = 3;
        break;
    case 0x30:
        if (pc[1] == 0) {
            func_8012E8A8(obj);
        } else {
            func_8012E88C(obj);
        }
        D_801EF464 = 3;
        break;
    case 0x4A:
        func_80175414();
        D_801EF464 = 3;
        break;
    case 0x4B:
        func_80175454();
        D_801EF464 = 3;
        break;
    case 0x34:
        D_801EF464 = 3;
        D_801EE1C8 = pc[1];
        return;
    case 0x35:
        D_801EE5F8 = (s32)(pc + 2);
        D_801EF464 = 3;
        D_801EE1C8 = pc[1];
        return;
    case 0x36:
        D_801EF464 = 3;
        D_801EE1C8 += 8;
        if (((s32 (*)(s32))pc[1])(obj) != 0) {
            D_801EE1C8 = AF(D_801EE1C8, s32, 4);
            return;
        }
        break;
    case 0x37:
        D_801EF464 = 3;
        D_801EE5E4 = ((u16 *)pc)[2];
        D_801EE5E8 = ((u16 *)pc)[3];
        break;
    case 0x38:
        D_801EF464 = 3;
        D_801EE5EC = ((u16 *)pc)[2];
        D_801EE5F0 = ((u16 *)pc)[3];
        break;
    case 0x39: {
        SVECTOR a;
        SVECTOR b;
        s32 x;
        s32 y;
        a.vx = AF(obj, s16, 6);
        a.vy = AF(obj, s16, 0xA);
        a.vz = AF(obj, s16, 0xE);
        b.vx = AF(mu, s16, 6);
        b.vy = AF(mu, s16, 0xA);
        b.vz = AF(mu, s16, 0xE);
        func_8012F40C(&xy, &a);
        x = xy;
        func_8012F40C(&xy, &b);
        y = xy;
        D_801EF464 = 3;
        D_801EE5E4 = x;
        D_801EE5E8 = (s16)x >= (s16)y;
        break;
    }
    case 0x3A: {
        SVECTOR a;
        SVECTOR b;
        s32 x;
        a.vx = AF(obj, s16, 6);
        a.vy = AF(obj, s16, 0xA);
        a.vz = AF(obj, s16, 0xE);
        b.vx = AF(mu, s16, 6);
        b.vy = AF(mu, s16, 0xA);
        b.vz = AF(mu, s16, 0xE);
        func_8012F40C(&xy, &a);
        x = xy;
        func_8012F40C(&xy, &b);
        D_801EF464 = 3;
        D_801EE5EC = xy;
        D_801EE5F0 = (s16)x < (s16)xy;
        break;
    }
    case 0x41:
        func_8002D4C8(((u16 *)pc)[2], ((u16 *)pc)[3]);
        D_801EF464 = 3;
        break;
    case 0x42:
        func_8017AD0C(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x43:
        D_801EE60C = (s32)func_8017A3D8;
        D_801EE614 = 0;
        D_801EF464 = 5;
        D_801EE610 = pc[1];
        break;
    case 0x44:
        func_8001AAD0(((s16 *)pc)[2], ((s16 *)pc)[3]);
        D_801EF464 = 3;
        break;
    case 0x53:
        func_80179E48(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x56:
        func_80179FEC((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x5B: {
        s32 i;
        for (i = 0; i < 10; i++) {
            if (D_801EE624[i] == NULL) {
                VmHook f = (VmHook)pc[1];
                D_801EE624[i] = f;
                f(obj);
                break;
            }
        }
        D_801EF464 = 3;
        break;
    }
    case 0x5C: {
        s32 i;
        VmHook f = (VmHook)pc[1];
        if (f != NULL) {
            for (i = 0; i < 10; i++) {
                if (D_801EE624[i] == (VmHook)pc[1]) {
                    D_801EE624[i] = NULL;
                    break;
                }
            }
            if (i == 10) {
                for (i = 0; i < 10; i++) {
                    if (D_801EE624[i] != NULL) {
                        D_801EE624[i] = NULL;
                        break;
                    }
                }
            }
        } else {
            for (i = 0; i < 10; i++) {
                if (D_801EE624[i] != NULL) {
                    D_801EE624[i] = NULL;
                    break;
                }
            }
        }
        D_801EF464 = 3;
        break;
    }
    case 0x5D:
        D_801EF464 = 3;
        break;
    }
    D_801EE1C8 += 8;
}

void func_80179B28(s32 arg0) {
    s16 temp_v1;

    if ((arg0 != 0) && (AF(arg0, s32, 0) != 0)) {
        temp_v1 = AF(arg0, s16, 4);
        if ((temp_v1 != 0) && (temp_v1 != 0xE)) {
            func_80139914(arg0);
        }
    }
}

s32 func_80179B74(u16 *p) {
    u8 unused[0x28];
    s16 op;
    u16 w;

    op = *p++;
    D_801EE1D0[D_801EE5D4] = op;
    D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
    switch (op) {
    case 0:
    case 34:
        break;
    case 1:
    case 5:
        w = *p++;
        D_801EE1D0[D_801EE5D4] = w;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    case 19:
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    case 2:
    case 3:
    case 4:
    case 6:
    case 18:
    case 20:
    case 31:
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    case 23:
    case 28:
    case 29:
    case 32:
        w = *p++;
        D_801EE1D0[D_801EE5D4] = w;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    }
}

/* scene command 1: Musashi walks to the point p (x, y, z) */
void AnimHelper(u16 *p) {
    s16 c[4];
    c[0] = 1;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    func_80179B74((s32)c);
}

/* scene command pushers: a kind and its halfword arguments on the stack, queued by func_80179B74 */
s32 func_80179D78(u16 *p) {
    s16 c[5];
    c[0] = 0x1C;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_80179DCC(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 2;
    return func_80179B74((s32)c);
}

s32 func_80179DF8(void) {
    s16 sp10;

    sp10 = 0;
    return func_80179B74((s32) &sp10);
}

s32 func_80179E1C(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 3;
    return func_80179B74((s32)c);
}

s32 func_80179E48(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 0x1F;
    return func_80179B74((s32)c);
}

s32 func_80179E74(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 4;
    return func_80179B74((s32)c);
}

s32 func_80179EA0(u16 *p) {
    s16 c[4];
    c[0] = 5;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    return func_80179B74((s32)c);
}

s32 func_80179EE8(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 0x12;
    return func_80179B74((s32)c);
}

s32 func_80179F14(s16 a, s16 b) {
    s16 c[3];
    c[1] = a;
    c[0] = 0x13;
    c[2] = b;
    return func_80179B74((s32)c);
}

s32 func_80179F44(void) {
    s16 sp10;

    sp10 = 0x18;
    return func_80179B74((s32) &sp10);
}

s32 func_80179F6C(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 0x14;
    return func_80179B74((s32)c);
}

s32 func_80179F98(u16 *p) {
    s16 c[5];
    c[0] = 0x17;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_80179FEC(u16 *p) {
    s16 c[5];
    c[0] = 0x20;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_8017A040(u16 *p) {
    s16 c[5];
    c[0] = 0x1D;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_8017A094(s32 arg0) {
    s16 sp10;

    D_801EE5F4 = arg0;
    sp10 = 0x15;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A0C4(s32 arg0) {
    s16 sp10;

    D_801EE5F4 = arg0;
    sp10 = 0x16;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A0F4(s32 arg0) {
    s16 sp10;

    sp10 = 7;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A11C(void) {
    s16 sp10;

    sp10 = 8;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A144(s32 arg0) {
    s16 sp10;
    s32 temp_v0;

    sp10 = 0x1B;
    temp_v0 = func_80179B74((s32) &sp10);
    D_801EE61C = arg0;
    return temp_v0;
}

s32 func_8017A180(void) {
    s16 sp10;

    sp10 = 9;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A1A8(void) {
    s16 sp10;

    sp10 = 0xA;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A1D0(void) {
    s16 sp10;

    sp10 = 0xB;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A1F8(void) {
    s16 sp10;

    sp10 = 0xC;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A220(void) {
    s16 sp10;

    sp10 = 0x21;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A248(void) {
    s16 sp10;

    sp10 = 0x22;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A270(void) {
    s16 sp10;

    sp10 = 0xD;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A298(void) {
    s16 sp10;

    sp10 = 0xE;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A2C0(void) {
    s16 sp10;

    sp10 = 0xF;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A2E8(void) {
    s16 sp10;

    sp10 = 0x10;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A310(void) {
    s16 sp10;

    sp10 = 0x11;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A338(void) {
    s16 sp10;

    sp10 = 0x19;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A360(void) {
    s16 sp10;

    sp10 = 0x1E;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A388(void) {
    s16 sp10;

    sp10 = 0x1A;
    return func_80179B74((s32) &sp10);
}

/* 0 while D_801EE5D8 is 1 (the switch keeps the original's beqz / bne tests) */
s32 func_8017A3B0(void) {
    switch (D_801EE5D8) {
    case 0:
        return 1;
    case 1:
        return 0;
    }
    return 1;

}

s32 func_8017A3D8(void) {
    s16 temp_v0;

    switch (D_801EE614) {                           /* irregular */
    case 0x0:
        func_800D0CA0(1);
        D_801EE614 = (u16) D_801EE614 + 1;
        return 0;
    case 0x64:
        if (D_801EE610 != -1) {
            return func_8001AAA0((s32) D_801EE610) != 0;
        }
        return func_800D0CE0() == 1;
    default:
        temp_v0 = (u16) D_801EE614 + 1;
        D_801EE614 = temp_v0;
        if (temp_v0 >= 0x1E) {
            D_801EE614 = 0x64;
        }
        return 0;
    }
}

void func_8017A4AC(void) {
    Player *pl = &D_80126B58;
    s16 c[4];
    s16 d[3];
    s16 e[3];
    s16 f[4];
    s16 op;
    s16 a;
    u16 u;
    u16 v;
    u16 w;
    s32 t;

    if (D_801EE5D0 == D_801EE5D4) {
        if (EngineReady()) {
            D_801EE5D8 = 0;
        } else {
            D_801EE5D8 = 1;
        }
        return;
    }
    D_801EE5D8 = 1;
    if (!EngineReady()) {
        return;
    }
    op = D_801EE1D0[D_801EE5D0];
    D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
    switch (op) {
    case 0:
        func_80172738();
        break;
    case 1:
        c[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172780(c);
        break;
    case 28:
        c[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[3] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172894(c);
        break;
    case 2:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801729B0(a);
        break;
    case 3:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172B14(a);
        break;
    case 4:
        w = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172B14(((u16)AF(pl, ModelObj *, 0x20)->rot.vy + (s16)w) & 0xFFF);
        break;
    case 5:
        c[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172C50(c);
        break;
    case 6:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172D68(a);
        break;
    case 7:
        func_80172E94();
        break;
    case 8:
        func_80172ED4();
        break;
    case 27:
        ((VmCmdFn)D_801EE61C)();
        break;
    case 9:
        func_80172EFC();
        break;
    case 10:
        func_80172F24();
        break;
    case 11:
        func_80173174();
        break;
    case 12:
        func_80172F4C();
        break;
    case 33:
        func_80172F9C();
        break;
    case 34:
        func_80172FEC();
        break;
    case 13:
        func_801745DC();
        break;
    case 14:
    case 15:
        func_8017329C();
        break;
    case 16:
        func_8017334C();
        break;
    case 17:
        func_801733A4();
        break;
    case 18:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801738DC(a);
        break;
    case 19:
        u = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        t = (s16)u;
        v = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801736B0(t, (s16)v);
        break;
    case 20:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801734BC(a);
        break;
    case 23:
        d[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        d[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        d[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80173460(a, d);
        break;
    case 29:
        e[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        e[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        e[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801733FC(a, e);
        break;
    case 32:
        f[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        f[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        f[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        f[3] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172310(f);
        break;
    case 25:
        func_8017452C();
        break;
    case 30:
        func_80174584();
        break;
    case 26:
        func_8017427C();
        break;
    case 24:
        func_80174438(D_801EE618);
        break;
    case 21:
        func_80173A28(AF(D_801EE5F4, s32, 0), AF(D_801EE5F4, s32, 4), AF(D_801EE5F4, s32, 8),
                      AF(D_801EE5F4, s32, 0xC), D_801EE5F4 + 0x10, AF(D_801EE5F4, s32, 0x18));
        break;
    case 22:
        AF(D_801EE5F4, VmCmdFn3, 0x1C)(AF(D_801EE5F4, s32, 4), D_801EE5F4 + 0x10, AF(D_801EE5F4, s32, 0x18));
        break;
    case 31:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801737B8(a);
        break;
    }
}

s32 func_8017AD0C(s32 arg0) {
    RECT rect;

    arg0--;
    rect.x = (arg0 & 3) * 16 + 0x280;
    rect.y = arg0 / 4 + 0x1F8;
    rect.w = 16;
    rect.h = 1;
    MoveImage(&rect, 0x160, 0x1C9);
    if (arg0 == 24) {
        rect.x = 0x2C0;
        rect.y = 0x1D0;
        rect.w = 32;
        rect.h = 40;
    } else {
        rect.x = (arg0 & 7) * 8 + 0x280;
        rect.y = (arg0 / 8) * 40 + 0x180;
        rect.w = 32;
        rect.h = 40;
    }
    MoveImage(&rect, 0x1C8, 0x190);
}

s32 func_8017ADE8(s32 arg0) {
    return func_8017AD0C(arg0);
}

s32 func_8017AE08(void) {
    return func_80174764() == 1;
}

/* the actor mover, run each frame by the driver; the walk step spells the target point two ways (the symbol for the
   heading, the block offset for the distance, as in the original: one constant would be shared in a register) */
void func_8017AE2C(s32 obj) {
    VmMove *m = (VmMove *)D_801EF3A8;

    switch (m->kind) {
    case 0:
        break;
    case 1:
        if (--m->n <= 0) {
            AF(AF(obj, s32, 0x20), s16, 0x12) = m->heading;
            goto stop;
        }
        AF(AF(obj, s32, 0x20), s16, 0x12) += func_8012B608(AF(AF(obj, s32, 0x20), s16, 0x12), m->heading, 6);
        break;
    case 2:
        func_8012B178(obj, m->fwd << 8);
        func_8012AD80(obj);
        AF(obj, s16, 0xA) -= 8;
        func_8012B030(obj);
        goto dec;
    case 3:
        if (m->n != 0) {
            if (m->walkTurn != 0) {
                if ((s16)func_80012A60(AF(AF(obj, s32, 0x20), s16, 0x12), (s16)func_8012B744(obj + 4, &m->pt)) < 0x100) {
                    m->n = 0;
                }
                AF(AF(obj, s32, 0x20), s16, 0x12) = func_8012B744(obj + 4, &D_801EF3B4);
                func_8012B178(obj, -0x60000);
                func_8012AD80(obj);
                AF(obj, s16, 0xA) -= 8;
                func_8012B030(obj);
                if (func_8012BE98(obj, (SVECTOR *)(D_801EF3A8 + 0xC)) <= 0x100) {
                    ((VmMove *)D_801EF3A8)->kind = 0;
                    ((VmMove *)D_801EF3A8)->n = 0;
                }
            }
            AF(AF(obj, s32, 0x20), s16, 0x12) += func_8012B608(AF(AF(obj, s32, 0x20), s16, 0x12), func_8012B744(obj + 4, &m->pt), m->speed);
            if (--m->n <= 0) {
                m->n = 0;
            }
        } else {
            AF(AF(obj, s32, 0x20), s16, 0x12) = func_8012B744(obj + 4, &D_801EF3B4);
            func_8012B178(obj, -0x60000);
            func_8012AD80(obj);
            AF(obj, s16, 0xA) -= 8;
            func_8012B030(obj);
            if (func_8012BE98(obj, (SVECTOR *)(D_801EF3A8 + 0xC)) <= 0x100) {
                ((VmMove *)D_801EF3A8)->kind = 0;
                ((VmMove *)D_801EF3A8)->n = 0;
            }
        }
        break;
    case 4:
        func_8012AD80(obj);
    dec:
        if (--m->n <= 0) {
        stop:
            m->kind = 0;
            m->n = 0;
        }
        break;
    }
}

/* the camera eases toward the stored targets (each word through func_80012C6C); a fresh `q = p + k` per field keeps
   the stores plain references that conflict with the next target load, as in the original */
void func_8017B0E4(s32 *p, s32 n) {
    s32 *q;
    s16 k = n;

    q = p + 0x12;
    *q = (s16)func_80012C6C((s16)*q, D_801EE654, k);
    q = p + 0x13;
    *q = (s16)func_80012C6C((s16)*q, D_801EE656, k);
    q = p + 0x14;
    *q = (s16)func_80012C6C((s16)*q, D_801EE658, k);
    q = p + 0xF;
    *q = (s16)func_80012C6C((s16)*q, D_801EE64C, k);
    q = p + 0x10;
    *q = (s16)func_80012C6C((s16)*q, D_801EE64E, k);
    q = p + 0x11;
    *q = (s16)func_80012C6C((s16)*q, D_801EE650, k);
}

s32 func_8017B1D8(s32 arg0, s32 arg1) {
    func_8012A418();
    D_801EF3F0 = 0;
    D_801EE5DC = 0;
    D_801EE65C = D_80126B5E;
    D_801EE65E = D_80126B62;
    D_801EE660 = D_80126B66;
    return (s32) D_80126B5E;
}

/* camera cut (op 0x1E), the same pair without the steps */
void func_8017B238(s32 obj, u32 arg) {
    SVECTOR v[2];
    SVECTOR *p;

    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    func_8012A018(func_8017BE60, 0);
    D_8012694C = 0;
    D_801EF3F0 = 1;
    D_801EE5DC = 0;
}

/* camera cut to the orbit point (op 0x21) */
void func_8017B368(s32 obj) {
    SVECTOR v[2];
    SVECTOR *p;
    u32 arg;

    func_8017BA3C(obj);
    arg = (u32)&D_801EE5FC;
    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    D_801EF3F0 = 1;
    D_801EE5DC = 0;
}

/* camera move toward the orbit point: the eye/target pair from the stored orbit point (its address is the "preset", so
   the preset arm is never taken), then 30 steps; the struct-member reads and the pointer copy after the first call
   keep the original's order (block-scope q/t are set once, so sched1 sinks them; `p = t` after the call) */
void func_8017B490(s32 obj) {
    SVECTOR v[2];
    SVECTOR *p;
    u32 arg;

    func_8017BA3C(obj);
    arg = (u32)&D_801EE5FC;
    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    D_801EF3F0 = 1;
    D_801EE5DC = 0x1E;
    D_80126990 = ((SVECTOR *)&D_801EE654)->vx;
    D_80126994 = D_801EE656;
    D_80126998 = D_801EE658;
    D_80126984 = ((SVECTOR *)&D_801EE64C)->vx;
    D_80126988 = D_801EE64E;
    D_8012698C = D_801EE650;
}

/* camera move (op 0x1F): a preset (eye, target relative to obj) or a pointer to two SVECTORs, over 30 steps; the mode
   byte as a struct member so its store conflicts with the reads after it, as in the original */
void func_8017B614(s32 obj, u32 arg) {
    SVECTOR v[2];
    SVECTOR *p;

    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    func_8012A018(func_8017BE60, 0);
    ((VmCamMode *)&D_8012694C)->m = 0;
    D_801EF3F0 = 1;
    D_801EE5DC = 0x1E;
    D_80126990 = ((SVECTOR *)&D_801EE654)->vx;
    D_80126994 = D_801EE656;
    D_80126998 = D_801EE658;
    D_80126984 = ((SVECTOR *)&D_801EE64C)->vx;
    D_80126988 = D_801EE64E;
    D_8012698C = D_801EE650;
    func_80129CF8();
}

void func_8017B7A8(s32 arg0) {
    D_8012694C = 1;
    D_801EE5DC = 0;
    D_801EE654 = (s16) D_80114F30;
    D_801EE656 = (s16) D_80114F34;
    D_801EE658 = (s16) D_80114F38;
    D_801EE64C = (s16) D_80114F24;
    D_801EE64E = (s16) D_80114F28;
    D_801EE650 = (s16) D_80114F2C;
}

/* saves two triples from the camera block (words 0x12-0x14, then 0xF-0x11); a walking pointer, as
   `D_801151D4[k]` is an in-struct reference that sched1 hoists above the stores */
void func_8017B824(void) {
    s32 *p = D_801151D4 + 0x12;
    D_801EE66C = *p++;
    D_801EE66E = *p++;
    D_801EE670 = *p;
    p -= 5;
    D_801EE674 = *p++;
    D_801EE676 = *p++;
    D_801EE678 = *p;
}

s32 func_8017B880(void) {
    D_80114F30 = (s32) D_801EE66C;
    D_80114F34 = (s32) D_801EE66E;
    D_80114F38 = (s32) D_801EE670;
    D_80114F24 = (s32) D_801EE674;
    D_80114F28 = (s32) D_801EE676;
    D_80114F2C = (s32) D_801EE678;
    return (s32) D_801EE66C;
}

void func_8017B8E8(u8 *arg0) {
    AF(&D_801EE654, SVECTOR, 0x0) = AF(arg0, SVECTOR, 0x0);
    AF(&D_801EE64C, SVECTOR, 0x0) = AF(arg0, SVECTOR, 0x8);
}

/* the camera offset from Musashi to the scripted point: targets for both triples, the step reset */
void func_8017B940(void) {
    VECTOR d;

    D_8012694C = 2;
    d.vx = (s16)D_80126B5E - (s16)D_801EE65C;
    d.vy = (s16)D_80126B62 - (s16)D_801EE65E;
    d.vz = (s16)D_80126B66 - (s16)D_801EE660;
    D_801EE5DC = 0;
    D_801EE664 = d.vx;
    D_801EE666 = d.vy;
    D_801EE668 = d.vz;
    D_801EE654 = D_80114F30 + d.vx;
    D_801EE656 = D_80114F34 + d.vy;
    D_801EE658 = D_80114F38 + d.vz;
    D_801EE64C = D_80114F24 + d.vx;
    D_801EE64E = D_80114F28 + d.vy;
    D_801EE650 = D_80114F2C + d.vz;
}

/* the orbit point from obj: the block's offset taken to the world (FaceHelper), rotated by the block's angles */
void func_8017BA3C(s32 obj, VmOrbit *b) {
    SVECTOR r;
    MATRIX m;
    SVECTOR v;
    SVECTOR p;
    SVECTOR o;
    s32 flag;

    FaceHelper(obj, b, &p);
    D_801EE5FC = p;
    r.vx = -b->c;
    r.vy = b->a;
    r.vz = 0;
    v.vx = 0;
    v.vy = 0;
    v.vz = -b->b;
    RotMatrixZYX(&r, &m);
    m.t[0] = p.vx;
    m.t[1] = p.vy;
    m.t[2] = p.vz;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&v, &o, &flag);
    D_801EE604 = o;
}

/* the same from an absolute point */
void func_8017BB34(s32 obj, VmOrbit *b) {
    SVECTOR r;
    MATRIX m;
    SVECTOR v;
    SVECTOR p;
    SVECTOR o;
    s32 flag;

    p = b->off;
    D_801EE5FC = p;
    r.vx = -b->c;
    r.vy = b->a;
    r.vz = 0;
    v.vx = 0;
    v.vy = 0;
    v.vz = -b->b;
    RotMatrixZYX(&r, &m);
    m.t[0] = p.vx;
    m.t[1] = p.vy;
    m.t[2] = p.vz;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&v, &o, &flag);
    D_801EE604 = o;
}

/* the ten script hooks, each called with the object */
void func_8017BC38(s32 obj) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (D_801EE624[i] != NULL) {
            D_801EE624[i](obj);
        }
    }
}

void func_8017BCA0(s32 arg0) {
    u16 temp_v0;

    func_8017B0E4(arg0, 0xC);
    temp_v0 = D_801EE5DC + 1;
    D_801EE5DC = temp_v0;
    if ((s16) temp_v0 >= 0x1F) {
        D_801EF3F0 = 2;
    }
}

void func_8017BCF4(s32 arg0) {
    u16 temp_v0;

    func_8017B0E4(arg0, 6);
    temp_v0 = D_801EE5DC + 1;
    D_801EE5DC = temp_v0;
    if ((s16) temp_v0 >= 0x19) {
        func_8012A4BC();
        D_801EF3F0 = 0;
    }
}

void func_8017BD50(s32 arg0) {
    u16 temp_v0;

    func_8017B0E4(arg0, 6);
    temp_v0 = D_801EE5DC + 1;
    D_801EE5DC = temp_v0;
    if ((s16) temp_v0 >= 0x19) {
        if (D_801EE620 != 0) {
            ((void (*)())D_801EE620)();
        } else {
            D_80114F30 += D_801EE664;
            D_80114F34 += D_801EE666;
            D_80114F38 += D_801EE668;
            D_80114F24 += D_801EE664;
            D_80114F28 += D_801EE666;
            D_80114F2C += D_801EE668;
            func_8012A4BC();
        }
        D_801EF3F0 = 0;
    }
}

void func_8017BE60(u8 *arg0) {
    D_80190EEC[AF(arg0, u8, 4)]();
}
