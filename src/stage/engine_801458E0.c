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
extern void func_8014E934();
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

extern s32 func_80154F9C();

extern void func_80147078();
extern void func_801555F4();

extern s32 func_80161104();
extern s32 func_80155F80();

extern void func_80155FF8();
extern u8 D_8018F570;

extern s32 func_80156A14();
extern void func_801575E4();
extern void func_8015773C();
extern s32 D_801ED510;
extern void func_801578C0();
extern void func_80157808();
extern void func_8014ED28();
extern void func_8014D3E0();
extern void func_8014FA04();
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
extern s32 func_8016F0AC();
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
extern void func_8012EFB8();
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
extern void func_80019064();
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
extern void func_80149FB0();
extern void func_801473EC();
extern void func_8014D738();
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
extern void func_80164E40();
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
s32 func_801757A0(s32 arg0, s32 arg1);
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
s32 func_80156370(s32 arg0, s32 arg1);
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
extern void func_8014D04C();
extern void func_8014CCB4();
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
extern void func_8016CF04();
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
extern void func_80166994();
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
extern void func_80015954();

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
s32 func_8014B310(s32 arg0, s32 arg1);
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
extern s32 func_80014DC0();
extern s32 func_80014D68();
extern s32 func_80014D94();
extern s32 func_80014CF8();
extern void func_800120DC();
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
extern void func_801469C8();

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145934);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145A2C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145B24);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145BF8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145C54);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145CEC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80145EE8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146014);

void func_80146074(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014607C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146128);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146608);

void func_801466B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_801466F0(arg0 & 0xFFFF, arg1, 0, 0, /* extra? */ 0, /* extra? */ arg2, /* extra? */ arg3, /* extra? */ arg4);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801466F0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146750);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014680C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801468C8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801469C8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146A6C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146AB4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146AFC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146B9C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146CC8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146D30);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146E98);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146EC0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80146F58);

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

void EndScene(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x4D) = 2;
}

void func_80147078(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0) = (s16) arg1;
    AF(arg0, s16, 2) = 0;
}

void func_80147084(s32 arg0) {
    AF(arg0, u8, 0x221) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014708C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147118);

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

s32 func_80147300(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147364);

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

s32 func_80147460(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + AF(arg0, s32, 0x34);
    AF(arg0, s32, 8) = temp_v0;
    return temp_v0;
}

s32 func_80147478(s32 arg0, s32 arg1, s32 arg2) {
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

void func_801474EC(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147514);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147628);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801477E8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147814);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147928);

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

s32 func_80147A84(s32 arg0, s32 arg1) {
    return func_80147AD4(arg0, 0, 0, 0);
}

void func_80147AAC(s32 arg0) {
    func_80147C30(arg0, 0, 0, 0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147AD4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147B18);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147B5C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147C30);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147CC8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147D38);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147DC0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147E44);

void func_80147F50(s32 arg0) {
    func_80147F78(arg0, 0, 0, 0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80147F78);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148094);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801483E8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801484B0);

s32 func_801484E8(s32 arg0, s32 arg1, s32 arg2) {
    func_801485B8(func_80154358((s32) &D_80126B58) - 0x10, arg0, arg1);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148534);

s32 func_8014856C(s32 arg0, s32 arg1, s32 arg2) {
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
        AF(arg0, u8, 0xA9) = func_80014DC0(k);
        AF(arg0, u16, 0xAA) = func_80014D68(k);
        AF(arg0, u16, 0xAC) = func_80014D94(k);
        k = (func_80014CF8(k, 4) & 0xFF) | ((func_80014CF8(k, 5) & 0xFF) << 8);
        AF(arg0, u16, 0xAE) = k;
    } else {
        AF(arg0, u8, 0xA9) = 0x41;
        func_800120DC(arg0 + 0xAA, arg0 + 0xAC);
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148824);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801488A8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014891C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148980);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801489E8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148A48);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148AFC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148D44);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80148E54);

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

s32 func_80149034(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149078);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801490E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801490E8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801490F0);

void func_801490F8(u8 *arg0, s16 arg1) {
    AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + func_80012B04((s32) AF(arg0, s16, 0x100), (s32) AF(arg0, s16, 0x108), (s32) arg1));
    AF(arg0, s16, 0x102) = (s16) ((u16) AF(arg0, s16, 0x102) + func_80012B04((s32) AF(arg0, s16, 0x102), (s32) AF(arg0, s16, 0x10A), (s32) arg1));
    AF(arg0, s16, 0x104) = (s16) ((u16) AF(arg0, s16, 0x104) + func_80012B04((s32) AF(arg0, s16, 0x104), (s32) AF(arg0, s16, 0x10C), (s32) arg1));
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149184);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801491C4);

void func_80149204(u8 *arg0) {
    AF(arg0, s32, 0x1E4) = 0;
    AF(arg0, s32, 0x1DC) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149210);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149290);

s32 func_80149350(s32 arg0, s32 arg1, s32 arg2) {
    return func_8012F14C(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149374);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801493D0);

void func_8014942C(u8 *arg0, s32 arg1, s32 arg2) {
    func_8012F038(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149450);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801494CC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801495C4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014964C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801496D4);

s32 func_80149704(s32 arg0) {
    return func_8015AD08();
}

s32 func_80149724(s32 arg0) {
    return func_8015ACC4();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149744);

s32 func_80149788(s32 arg0) {
    return func_8015F7A0();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801497A8);

s32 func_80149864(s32 arg0) {
    return func_801653B8();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149884);

s32 func_801498C0(s32 arg0) {
    return func_80160B00();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801498E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149954);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149A64);

s32 func_80149AA8(s32 arg0) {
    if (!(AF(arg0, s32, 0x44) & 0x404)) {
        {
            s32 bt = AF(arg0, u16, 0xAC) & 0x80;

            return bt != 0;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149AD4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149B14);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149B54);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149BAC);

void func_80149BEC(s32 arg0) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x223);
    if (temp_v0 != 0) {
        AF(arg0, u8, 0x223) = (u8) (temp_v0 - 1);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149C08);

void func_80149C94(s32 arg0) {
    func_801577C8(arg0);
}

s32 func_80149CB4(s32 arg0, s32 arg1) {
    return func_80157D20();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149CD4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149D9C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149DD8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149E94);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149F2C);

void func_80149FA8(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80149FB0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A048);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A1B0);

s32 func_8014A218(s32 arg0) {
    return func_8015D4B4();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A238);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A2E4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A380);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A3E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A454);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A51C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A59C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A6C4);

void func_8014A71C(s32 arg0) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x1BE);
    if (temp_v0 != 0) {
        AF(arg0, u8, 0x1BE) = (u8) (temp_v0 - 1);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014A738);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014AA28);

s32 func_8014AB5C(s32 arg0) {
    return func_8014AB7C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014AB7C);

void func_8014ABF0(s32 arg0) {
    func_8014AC10(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014AC10);

void func_8014ACC0(u8 *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x1C8) - arg1;
    AF(arg0, u16, 0x1C8) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(arg0, u16, 0x1C8) = 0U;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014ACE8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014AD30);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014ADE0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B00C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B034);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B084);

s32 func_8014B12C(void) {
    return func_8014B154((s32) &D_80126B58);
}

s32 func_8014B154(s32 arg0) {
    return AF(arg0, s32, 0x44) & 0x80;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B160);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B190);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B2A8);

void func_8014B2D0(s32 arg0, s32 arg1) {
    func_8014B310((s32) &D_80126B58, arg1);
}

void func_8014B2F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_80078E94 = 0;
    D_80078ECC = 0;
}

s32 func_8014B310(s32 arg0, s32 arg1) {
    func_8014B33C();
    D_80078ECC = 0x80000000;
    return 0x80000000;
}

s32 func_8014B33C(void) {
    D_80078E94 = 0x80000000;
    return 0x80000000;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B350);

void func_8014B4C4(s32 arg0) {
    D_80078E98 = 0;
}

void func_8014B4D4(s32 arg0) {
    AF(arg0, s16, 0x1C8) = 0;
    D_80078E98 = 0x80000000;
    func_80166244(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B504);

void func_8014B598(s8 arg0, s32 arg1) {
    D_80126D1C = arg0;
    D_80126D74 = arg1;
}

void func_8014B5B0(s32 arg0) {
    AF(arg0, u8, 0x1C4) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B5B8);

void func_8014B5C4(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, u8, 0x1C7) = (s8) (arg1 | arg2);
}

void func_8014B5D0(s32 arg0) {
    AF(arg0, u8, 0x1C7) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B5D8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B6F0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014B768);

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

s32 func_8014BB0C(s32 arg0) {
    D_80078EB4 = D_80078EB2;
    return (s32) D_80078EB2;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014BB24);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014BCC0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014BDE8);

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

void func_8014BF48(s32 arg0) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C010);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C0C8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C118);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C1C8);

s32 func_8014C278(s32 arg0, s32 arg1, s32 arg2) {
    return func_80013328(arg0 + 4, arg1 + 4) < (arg2 & 0xFFFF);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C2B0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C308);

s32 func_8014C3A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_8014C43C(arg0, arg1, arg2, arg3, /* extra? */ (s32) AF(AF(arg0, void *, 0x20), s16, 0x12));
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C3D0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C5FC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C6F4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C8F0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C918);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014C99C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CA70);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CAE4);

s32 func_8014CAFC(void) {
    return D_80126B9C & 0x400;
}

s32 func_8014CB0C(void) {
    return D_80126B9C & 0x80;
}

s32 func_8014CB1C(void) {
    return D_80078E94;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CB2C);

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

void func_8014CBF8(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CCB4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CD0C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CD80);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014CF04);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D04C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D0A4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D12C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D2A0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D3E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D438);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D4C0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D610);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D738);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D790);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014D820);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014DCE0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014DF3C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014DF94);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E048);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E434);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E48C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E5B4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E6A0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E6F8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E83C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E934);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014E98C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014EA4C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014ED28);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014ED80);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014EE14);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F1F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F24C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F2E0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F468);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F4C0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F6F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014F74C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FA04);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FA70);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FBC0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FC18);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FCFC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FD54);

s32 func_8014FDF4(s32 arg0) {
    if ((AF(arg0, s16, 6) != AF(arg0, s16, 0x88)) || (AF(arg0, s16, 0xA) != AF(arg0, s16, 0x8A)) || (AF(arg0, s16, 0xE) != AF(arg0, s16, 0x8C))) {
        return func_80150170();
    }
    return func_8014FE60();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FE60);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8014FFDC);

s32 func_80150150(s32 arg0, s32 arg1) {
    return func_80134510(arg1) != 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80150170);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801502EC);

s32 func_80150460(s32 arg0, s32 arg1) {
    return func_80134510(arg1) != 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80150480);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801504D8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80150528);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801505FC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801506A4);

void func_80150820(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_8014BD24(arg0, arg1);
        func_8014ACE8(arg0, 4, arg1);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015086C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801508B4);

s32 func_801508F8(s32 arg0) {
    if ((AF(arg0, u8, 0x1BF) != 0) && (AF(arg0, u16, 0) != 0x1A)) {
        do {
        } while (func_8015094C(arg0) != 0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015094C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80150A70);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80150B28);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80150EC4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151184);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015126C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151664);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151780);

void func_80151878(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151880);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801518D8);

void func_80151924(void) {
    func_80151944();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151944);

void func_80151980(s32 arg0) {
    func_8014E934(arg0);
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_801519C8(arg0);
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801519C8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151AE4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151B98);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80151DB0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801520DC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152194);

void func_8015220C(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152254);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801523F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152500);

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
    func_80019064((s32) &D_80062BF4);
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801528B0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015294C);

void func_80152A08(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152A50);

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
    func_80019064((s32) &D_80062C14);
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152DA8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152E4C);

void func_80152EFC(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80152F44);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801530E4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153150);

void func_801531BC(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153204);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801533A4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153410);

void func_80153490(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        func_80146CA0(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801534D8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801535F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015369C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801536DC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153800);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153978);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801539F8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153B58);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153C74);

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
    func_80019064((s32) &D_8018F304);
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153D7C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80153E00);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154190);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801541D8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154218);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015430C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015444C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801549F8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", StartFace);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154AB4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", StartFaceAt);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154B20);

s32 StartFaceScript(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xD0);
    if (var_v0 != arg1) {
        var_v0 = func_80154B7C();
    }
    return var_v0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154B7C);

void StartFaceScriptAt(u8 *arg0, s32 arg1) {
    if (AF(arg0, s32, 0xD0) != arg1) {
        func_80154BC8();
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154BC8);

s32 func_80154BE4(s32 arg0) {
    s32 sp10;
    s32 sp14;

    sp10 = 0;
    sp14 = 0;
    FaceScriptStep(arg0, (s32) &sp10, (s32) &sp14);
    return func_80154F9C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", FaceScriptStep);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", FaceSet);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80154F9C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801554B8);

void func_80155518(s32 arg0) {
    func_80147078(arg0, 5);
    func_801555F4(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015554C);

void func_80155580(s32 arg0, s32 arg1) {
    D_8018F37C[AF(arg0, u16, 2)]();
}

void func_801555BC(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_801555F4(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801555F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155800);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155A44);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155B20);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155B9C);

void func_80155C0C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 pad[16];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154274((s32) arg0, (s32) &D_800D4DD4, arg2);
        func_80146CA0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155C64);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155D70);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80155FF8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156044);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015616C);

s32 func_80156370(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015640C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801564B0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156600);

s32 func_80156648(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x1A8) = 0;
    AF(arg0, u8, 0x1A9) = 0;
    AF(arg0, u8, 0x1C0) = 0;
    return func_80156A14();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156670);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156A14);

void func_80156A1C(s32 arg0, s32 arg1) {
    if (AF(arg0, u8, 0xDA) == 0) {
        func_80147324((s32) (*(u16 *)((u8 *)D_8018F7E0 + ((*(&D_8011520C + arg1) * 2)) * 1)), arg1);
        AF(arg0, u8, 0xDA) = (u8) (AF(arg0, u8, 0xDA) + 1);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156A88);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156B74);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80156ECC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157158);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801571C4);

void func_801574DC(s32 arg0) {
    func_80147078(arg0, 6);
    func_801575E4(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157510);

void func_80157544(s32 arg0, s32 arg1) {
    D_8018F7F0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157580);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801575E4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015773C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801578C0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015795C);

s32 func_80157A8C(s32 arg0) {
    func_80161D20(arg0, (s32) AF(arg0, u16, 0x16E));
    return func_8014C010(arg0, 1);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157AC8);

void func_80157B74(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4((s32) arg0, arg1);
        func_80159B3C((s32) arg0);
        return;
    }
    func_80161208((s32) arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157BC8);

void func_80157CCC(u8 *arg0) {
    AF(arg0, u8, 0x223) = 0x10;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157D20);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157D74);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157DC4);

void func_80157E00(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80157E38(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157E38);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80157FC4);

void func_80158000(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_80158038(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158038);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801580B4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801581AC);

void func_8015824C(u8 *arg0) {
    D_8018F86C[AF(arg0, u16, 2)]();
}

void func_80158288(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_801582C0(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801582C0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158344);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158434);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158638);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801588CC);

void func_80158AB4(s32 arg0) {
    func_80158AE4();
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158AE4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158BB0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158C40);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158CD8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158D60);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158E24);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158F00);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80158FA4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80159070);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80159464);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801596F0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801598E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80159968);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801599A4);

void func_801599E0(u8 *arg0) {
    func_80159A20();
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
}

void func_80159A18(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80159A20);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80159BE4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80159C84);

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

void func_8015A264(s32 arg0, s32 arg1) {
    D_8018FCF8[AF(arg0, u16, 2)]();
}

void func_8015A2A0(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015A2D8(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015A2D8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015A3C8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015ABD4);

s32 func_8015AC48(s32 arg0) {
    func_80154150(arg0, 9);
    func_80146DB8(arg0, (s32) &D_8018FB3C);
    func_80161CD0(arg0, (s32) AF(arg0, u16, 0x16E));
}

void func_8015AC90(s32 arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015ACC4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015AD08);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015AE2C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015B6F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015B7B4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015B858);

void func_8015B8F8(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = AF(arg0, s32, 0x23C);
    if ((temp_a1 == &D_800D4A9C) || (temp_a1 == &D_800D4B48)) {
        func_801542DC(arg0, temp_a1, (s32) AF(arg0, u8, 0x244));
        return;
    }
    func_80154150(arg0, 0xF);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015B950);

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

s32 func_8015BF48(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015C030);

void func_8015C08C(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015C0C4(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015C0C4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015C128);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015C32C);

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

void func_8015C714(s32 arg0, s32 arg1) {
    D_8018FD34[AF(arg0, u16, 2)]();
}

void func_8015C750(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015C788(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015C788);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015C7E4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015CA28);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015CCD0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015CD20);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015D01C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015D380);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015D4B4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015D738);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015DB6C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015DD74);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015DECC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E0D4);

void func_8015E150(s32 arg0) {
    func_80147078(arg0, 0x10);
    func_8015E22C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E184);

void func_8015E1B8(s32 arg0, s32 arg1) {
    D_8018FE60[AF(arg0, u16, 2)]();
}

void func_8015E1F4(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015E22C(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E22C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E288);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E40C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E4B0);

s32 func_8015E588(s32 arg0) {
    return func_8013C9C4((s32) &D_8018FE80);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E5B0);

void func_8015E698(s32 arg0) {
    if ((func_80161208(arg0) == 0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80147078(arg0, 0);
        func_80159BE4(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E714);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015E9B8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015EA3C);

void func_8015ED6C(u8 *arg0, s32 arg1) {
    D_80078EBF = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~1);
    func_80149048((s32) arg0, arg1);
}

void func_8015EDA0(s32 arg0) {
    func_80147078(arg0, 0x12);
    func_8015EE7C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015EDD4);

void func_8015EE08(s32 arg0, s32 arg1) {
    D_8018FE9C[AF(arg0, u16, 2)]();
}

void func_8015EE44(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015EE7C(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015EE7C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015EEE0);

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

void func_8015F00C(s32 arg0, s32 arg1) {
    D_8018FEA4[AF(arg0, u16, 2)]();
}

void func_8015F048(s32 arg0, s32 arg1) {
    if (func_80161104(arg0, arg1) != 0) {
        func_8015F080(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015F080);

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
        func_80019064((s32) &D_80062BE8);
        func_80147324(0x9DA);
    }
    if (func_80161208((s32) arg0) == 0) {
        func_80155FF8((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015F260);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015F380);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015F448);

void func_8015F738(s32 arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
}

void func_8015F76C(s32 arg0) {
    func_80147078(arg0, 0x15);
    func_8015F848(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015F7A0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015FBE0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8015FF20);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160410);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160534);

s32 func_801607B8(s32 arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~1);
    return func_80149048(arg0);
}

void func_801607E4(s32 arg0) {
    func_80147078(arg0, 0x1C);
    func_801608C0(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160818);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801609B8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160A28);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160B00);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160D10);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80160F00);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161034);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161124);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801612B8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016130C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161374);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161418);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161450);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161488);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801614E4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016151C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161554);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016158C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801615C4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016163C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161774);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161888);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016191C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016197C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801619A4);

s32 func_801619D0(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161A90);

s32 func_80161B18(s32 arg0) {
    if ((D_800AE6B0 & 0x80FFFFFF) || !(AF(arg0, s32, 0x44) & 0x10)) {
        return 0;
    }
    func_801599A4(arg0);
    func_8015FA78(arg0);
    return 1;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161B84);

s32 func_80161BE0(s32 arg0) {
    if (func_801497A8() != 0) {
        func_801599A4(arg0);
        func_80149864(arg0);
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161C24);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161D88);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80161E08);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801620C4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801621CC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016236C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162438);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801626B8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162870);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162968);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162DE8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162E48);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162EA8);

void func_80162F08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80162F60();
    func_80162F80(arg0, arg2);
    func_80162FA0(arg0, arg3);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162F60);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80162FF4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801630C4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163194);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801632F0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163328);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801633A8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163408);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016345C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801634D8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163534);

s32 func_80163664(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s32 arg11, s32 arg12) {
    return func_80157158(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3, /* extra? */ arg4, /* extra? */ arg5, /* extra? */ arg6, /* extra? */ arg7, /* extra? */ arg8, /* extra? */ arg9, /* extra? */ (s32) arg10, /* extra? */ arg11, /* extra? */ arg12);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801636D0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016380C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801638A0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163950);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163C2C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80163EC8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164270);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801642AC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016432C);

void func_80164410(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164418);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164530);

void func_80164744(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    D_80190110[AF(arg0, u16, 2)]();
    if (temp_s0 != 0) {
        func_80162D28((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801647A4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164930);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164A74);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164ACC);

void func_80164BA0(u8 *arg0) {
    D_8019011C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164BDC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164D4C);

s32 func_80164DB0(s32 arg0) {
    return func_80162CCC(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164DD0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80164E40);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165140);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801651B8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165240);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801653B8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801653F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801654A8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165910);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165B28);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165CA0);

void func_80165E2C(u16 *arg0) {
    func_8001534C(0, (s32) &D_801EC898, 0x80, 0x80, /* extra? */ 0, /* extra? */ 0);
    func_800153CC(1, (s32) *arg0, 0xA8, 0x80, /* extra? */ 0x40, /* extra? */ 0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165E90);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80165FA4);

void func_80166018(u8 *arg0) {
    D_801903EC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80166054);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80166438);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80166690);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80166994);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80166F58);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016706C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801670E4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80167AE0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80167DBC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168070);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801681FC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168328);

void func_801683D8(u8 *arg0) {
    func_80166994((s32) arg0, 2, (s32) AF(arg0, s16, 0x2C), 0);
    if ((func_80166690((s32) AF(arg0, s16, 0x2C), (s32) AF(arg0, s16, 0x28)) << 0x10) == 0) {
        func_80146C3C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168430);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168540);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168664);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168828);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168BDC);

void func_80168D58(u8 *arg0) {
    D_80190518[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168D94);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168EC4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80168F40);

void func_8016901C(u8 *arg0) {
    D_80190520[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80169058);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80169408);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80169584);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801696D8);

void func_80169830(u8 *arg0) {
    D_80190530[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016986C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801699D0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80169A4C);

void func_80169B80(u8 *arg0) {
    D_801905E4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80169BBC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80169E44);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016A08C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016A290);

void func_8016A700(u8 *arg0) {
    D_80190630[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016A73C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016A890);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016A8FC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016AA50);

void func_8016AB30(u8 *arg0) {
    D_80190678[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016AB6C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016AE5C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B114);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B4F8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B5C0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B6BC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B834);

s32 func_8016B91C(s32 arg0) {
    func_8016B964(arg0, AF(arg0, s32, 0x10));
    func_8016B964(arg0, AF(arg0, s32, 0x14));
    return func_8016B964(arg0, AF(arg0, s32, 0x18));
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B964);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016B9F8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016BBE0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016BCC0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016BD78);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016BF50);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016BFA8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016BFD0);

void func_8016C14C(u8 *arg0) {
    D_80190774[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016C188);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016C2C4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016C49C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016C74C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016C83C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016C998);

void func_8016CB84(u8 *arg0) {
    D_8019077C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016CBC0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016CF04);

void func_8016D19C(u8 *arg0) {
    D_80190798[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016D1D8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016D4DC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016D5EC);

void func_8016D64C(s32 arg0) {
    if ((func_8016CBC0() << 0x10) == 0) {
        func_80146C3C(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016D688);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016D778);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016D848);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016DA04);

void func_8016DA30(u8 *arg0) {
    func_8016DBD8();
    D_80190808[AF(arg0, u16, 2)](arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016DA7C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016DBD8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016DC20);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016DF5C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E3CC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E460);

void func_8016E5B8(u8 *arg0) {
    D_80190898[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E5F4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E728);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E778);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E7C8);

s32 func_8016E8F0(void) {
    return func_80016714((s32) &D_80115218, 0x80);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E918);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E95C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016E9EC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016EC0C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016EDEC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016EE40);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016EFC8);

void func_8016F094(u8 *arg0) {
    AF(arg0, s32, 0x1F8) = (s32) (AF(arg0, s32, 0x1F8) & 0xFBFFFFFF);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016F0AC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016F14C);

s32 func_8016F1AC(s32 arg0) {
    return D_80126D50 & 0x80FFFFFF;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016F1C4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016F44C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016F95C);

void func_8016F9C4(u8 *arg0) {
    D_80190980[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016FA00);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016FBB8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016FD08);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8016FE2C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170374);

void func_801703E0(u8 *arg0) {
    D_801909EC[AF(arg0, u8, 0x216)]();
}

void func_8017041C(s32 arg0, s32 arg1, s32 arg2) {
    func_80171990(arg0, arg1, arg2);
    func_8017044C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017044C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801705C0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170784);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017084C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801708B0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170928);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170970);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801709B8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170A00);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170A48);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170A90);

void func_80170AD8(u8 *arg0) {
    D_80190A24[AF(arg0, u8, 0x216)]();
}

void func_80170B14(s32 arg0) {
    func_801719A4(arg0, 1);
    func_80170B48(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170B48);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80170CF0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017129C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171384);

void func_801714E4(u8 *arg0) {
    D_80190A7C[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171520);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801716AC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801718AC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801719A4);

void func_80171A04(u8 *arg0) {
    AF(arg0, u8, 0x217) = 1;
}

void func_80171A10(u8 *arg0) {
    AF(arg0, u8, 0x217) = 2;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", NextPhase);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171A88);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", ActionHelper_1AB0);

void func_80171B10(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = func_8014C568(arg0, arg1);
}

void func_80171B44(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x20C) = 0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171B4C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171C64);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", StepToward);

s32 func_80171D1C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = func_80171FFC(arg0, arg1, arg2 & 0xFF);
    if (func_8017250C(arg0, arg1) != 0) {
        func_80146D90(arg0);
    }
    return temp_s0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171D78);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171E08);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171EC8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80171FFC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017209C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172170);

void func_801722CC(s32 arg0) {
    if (func_80172664(arg0) == 0) {
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
    }
}

void func_80172304(u8 *arg0) {
    AF(arg0, s16, 0xAA) = 0x40;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172310);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172358);

s32 func_801723C4(s32 arg0, s32 arg1) {
    func_801599A4(arg0, arg1);
    func_80147078(arg0, 0xD);
    AF(arg0, s32, 0x178) = arg1;
    return func_8014A1B0(arg0, arg1);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172414);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017248C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801724EC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017250C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172560);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172658);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801726D0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172710);

s32 func_80172738(void) {
    return SetActionHandler((s32) &func_80172760);
}

void func_80172760(s32 arg0, s32 arg1) {
    ClearActionHandler(arg0, arg1);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172780);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172894);

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
        var_v0 = NextPhase(arg0);
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172C50);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80172E20);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801731D8);

s32 func_80173220(s32 arg0) {
    s32 var_v0;

    if (AF(arg0, u16, 0xB8) & 0x4000) {
        func_80147324(0x516);
        func_80019064((s32) &D_80190A84);
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801733FC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173460);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801734BC);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173648);

void func_801736A8(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801736B0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017385C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173A60);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173C64);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173CB4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173E1C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80173EF8);

s32 func_80174158(s32 arg0) {
    func_80174188(arg0);
    return func_801741A8(arg0);
}

s32 func_80174188(s32 arg0) {
    func_8014BCEC(arg0, 0x19);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801741A8);

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
        var_v0 = func_8016F0AC();
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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801748C4);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80174CB0);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175014);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017509C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175268);

void func_801752BC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xF6) = 0x1000;
    ClearDisplayFlag20(arg0);
    StartFace((s32) arg0, 0x11);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175308);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175414);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175454);

void func_80175494(void) {
    D_8011F7A8 = 2;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801754A8);

void func_8017553C(u8 *arg0) {
    D_80190D04[AF(arg0, u8, 1)]();
    func_801758FC();
    func_80175820();
    func_801759D8();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175590);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801756E4);

void func_80175798(void) {
}

s32 func_801757A0(s32 arg0, s32 arg1) {
    func_80175DA8((s32) (s16) arg0);
    func_80175AB8((s32) (s16) arg0);
    return func_80176144((s32) (s16) arg0);
}

s32 func_801757E0(s32 arg0) {
    func_80176734((s32) (s16) arg0);
    func_80176218((s32) (s16) arg0);
    return func_80176D00((s32) (s16) arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175820);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801758FC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801759D8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175AB8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80175DA8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80176144);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80176218);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80176734);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80176D00);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80176D94);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80176FF4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801770E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177340);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801775E0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801776EC);

s32 func_80177784(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0) = (s32) (((arg0 - 0x14) & 0xFFFFFF) | 0x03000000);
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = arg1;
    AF(arg0, s32, 0xC) = arg2;
    return arg0 + 0x14;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801777BC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801778A8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177940);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177AD4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177B5C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177DA8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177EA4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80177F84);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80178004);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80178298);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801783D0);

void func_80178438(u16 *arg0) {
    func_8001534C(2, (s32) &D_801ECAE0, 0x80, 0x88, /* extra? */ 0, /* extra? */ 0);
    func_800153CC(3, (s32) *arg0, 0xA8, 0x88, /* extra? */ 0x40, /* extra? */ 0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017849C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80178608);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017869C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80178744);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_80178840);

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_801788B8);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017AD0C);

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

INCLUDE_ASM("asm/stage/nonmatchings/engine_801458E0", func_8017BD50);

void func_8017BE60(u8 *arg0) {
    D_80190EEC[AF(arg0, u8, 4)]();
}
