#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern s32 *func_sc05_017_8018C56C();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_017_80190C58[])();
extern void (*D_sc05_017_80190C60[])();
extern void (*D_sc05_017_80190C68[])();
extern u8 D_sc05_017_80190BC4;
extern void InitSpriteKind2();
extern void InitSpriteKind3();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();
extern u8 D_sc05_017_8018D504;
extern u8 D_sc05_017_80190C40;
extern u8 D_sc05_017_80190C48;
extern void SyncModelPos();
extern void (*D_sc05_017_80190C88[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_017_80190C70;
extern void (*D_sc05_017_80190C90[])();
extern u8 D_sc05_017_80190C7C;
extern void (*D_sc05_017_80190CA8[])();
extern u8 D_sc05_017_80190C98;
extern void InitModel();
extern void (*D_sc05_017_80190CE0[])();
extern u8 D_sc05_017_801ECDB0;
extern void func_sc05_017_8017DA08();
extern void UpdateClockTint();
extern void func_sc05_017_8017DC0C();
extern void func_800D06E8();
extern void StartPlayerAction();
void func_sc05_017_8017E050(Player *arg0);
extern void StartFade();
extern s32 FadeStep();
extern s32 g_PlayerFlags;
extern s16 D_801270C0;
void func_sc05_017_8017E0D8(Player *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void (*D_sc05_017_80190D28[])();
extern void (*D_sc05_017_80190D30[])();
extern void (*D_sc05_017_80190D3C[])();
extern void (*D_sc05_017_80190D48[])();
extern s32 D_80127050;
extern void (*D_sc05_017_80190FFC[])();
extern void func_80175414();
extern void EndPlayerActionOf();
extern void ResumeHopAbility();
extern void (*D_sc05_017_80191004[])();
extern u8 g_Camera;
extern s32 g_CameraProj;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern u8 g_CameraVarA0;
extern void SetCameraUpdate();
extern void func_sc05_017_8017E20C();
extern void SnapCamera();
extern void (*D_sc05_017_8019100C[])();
extern void func_sc05_017_8017E284();
extern void func_sc05_017_8017E3C4();
extern void (*D_sc05_017_80191158[])();
extern s32 func_sc05_017_8017E7EC();
extern u8 D_sc05_017_801B9DB4;
extern u8 D_sc05_017_80191160;
extern s32 PlaceObject();
extern s32 ShowModel();
extern void func_sc05_017_80184990();
extern s32 func_sc05_017_80184BD4();
extern u8 D_sc05_017_801B6354;
s32 func_sc05_017_8017E8CC(StageActor *arg0);
extern void (*D_sc05_017_801912B8[])();
extern s32 func_sc05_017_80184B44();
extern s32 D_sc05_017_80191184[];
extern s32 GetFlag();
extern void SetFlag();
extern s32 func_sc05_017_80184CA4();
extern void func_sc05_017_80185C54();
extern s32 func_sc05_017_801858E0();
extern void func_sc05_017_8017E85C();
extern s32 IsEventDone();
extern void EndEvent();
extern u8 D_sc05_017_801912E8;
extern void func_sc05_017_801849B8();
s32 func_sc05_017_8017F398(s32 arg0);
extern void (*D_sc05_017_80191350[])();
extern u8 D_sc05_017_80191318;
extern s32 RunScript();
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
s32 func_sc05_017_80181F60(StageActor *arg0);
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
s32 func_sc05_017_80184584(StageActor *arg0);
extern s32 func_sc05_017_80184660();
extern void func_sc05_017_801847C4();
extern u8 g_ClockHour;
extern u16 g_Day;
extern s32 D_800BA2BA[];
extern void (*D_sc05_017_801B86DC[])();
extern u8 D_sc05_017_801B86E4;
extern void HideModel();
extern s32 GetProgress();
extern void SetProgress();
extern void MoveObject();
extern s32 GetPlayerAction();
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern s32 IsPlayerAsleep();
extern void SetForwardVelocity();
extern s32 SnapToGround();
extern s32 GroundDistSqTo();
extern void (*D_sc05_017_801B86FC[])();
extern void ZeroFill();
extern s32 D_sc05_017_801ED7FC;
extern u8 D_sc05_017_801ED8E8;
extern void SetModelCullBox();
extern u8 D_sc05_017_801B86F4;
extern u8 D_sc05_017_801C0394;
extern void func_sc05_017_80185604();
extern void func_sc05_017_8018559C();
extern void (*D_sc05_017_801B89D4[])();
extern void func_sc05_017_80185678();
extern void func_sc05_017_801856D8();
extern void MapPartsTmd();
extern s16 D_sc05_017_801B8744[];
extern u8 D_sc05_017_801B8708[];
extern u8 D_sc05_017_801B8704[];
extern S12 D_sc05_017_801B872C;
extern u8 D_sc05_017_801B871C;
extern u8 D_sc05_017_801B8738;
extern void * func_sc05_017_8018596C();
extern s32 func_sc05_017_80185BEC();
extern s32 func_sc05_017_80184E6C();
extern void PlaySoundAtActor();
extern s32 TickTimer();
extern s32 FindActorByKindArg();
extern void func_sc05_017_80185CB8();
extern void (*D_sc05_017_801B89F8[])();
extern u8 D_sc05_017_801B89E8;
extern s32 func_sc05_017_80185FA8();
s32 func_sc05_017_80185F5C(s32 arg0);
extern s16 D_sc05_017_801ECE90;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc05_017_801B946C[])();
extern void TickPlayTime();
extern void func_801754A8();
extern void StageModeNop();
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
extern void SpawnActor();
extern void func_sc05_017_80189DB4();
extern u8 D_sc05_017_801E67B8;
extern void FreeActor();
extern void StepSpriteAnim();
extern void UpdateModelRot();
extern u8 D_sc05_017_801E67EC;
extern u8 D_sc05_017_801B61B4;
extern u16 D_800B99DA[];
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
extern s32 GetPoisonWord();
extern void CurePlayerPoison();
extern void PlaySoundId();
extern u8 D_sc05_017_801E6908;
extern u8 D_sc05_017_801E6968;
s32 func_sc05_017_8018BF4C(s32 arg0);
extern void (*D_sc05_017_801E6A3C[])();
extern u8 D_sc05_017_801E69CC;
extern s32 func_800D0EC4();
extern s32 func_sc05_017_80184A00();
extern s32 UpdateModelZYX();
s32 func_sc05_017_8018C390(Mover *arg0);
extern void (*D_sc05_017_801E9920[])();
extern u8 CallActionHandler;
extern void ResetScriptVM();
extern s32 func_sc05_017_8018C2FC();
extern void func_800D0F4C();
extern s32 D_sc05_017_801ED800;
extern void (*D_sc05_017_801E9A58[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc05_017_801E9944;
extern s32 * func_sc05_017_8018C974();
extern s32 D_sc05_017_801E9A34[];
extern void (*D_sc05_017_801E9B20[])();
extern void (*D_sc05_017_801E9B34[])();
extern u8 D_sc05_017_801E9B28;
extern void InitSpriteKind1();
extern void FreeProp();

void func_sc05_017_8017BE9C(StageActor *arg0) {
    D_sc05_017_80190C58[arg0->state]();
}

void func_sc05_017_8017BED8(u8 *arg0) {
    D_sc05_017_80190C60[AF(arg0, u16, 2)]();
}

void func_sc05_017_8017BF14(StageActor *arg0) {
    D_sc05_017_80190C68[arg0->state]();
}

extern s32 func_sc05_017_801841B8();

extern void ClearTimeChime();
extern s32 GetVar();
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
extern s32 FindActorByKind();
extern s32 D_sc05_017_801CE1C0;
extern s32 D_sc05_017_801D5210;
extern u8 D_sc05_017_801E6CDC;
extern u8 D_sc05_017_801918BC;
extern s32 D_sc05_017_801D2C58;
extern s32 D_sc05_017_801D5AFC;
extern s32 D_sc05_017_801ECE80;
extern s32 *func_sc05_017_80181A4C();
extern s32 func_sc05_017_801844BC();
extern void GiveItem();
extern void SetVar();
extern u8 D_sc05_017_80191B90;
extern u8 D_sc05_017_801B6790;
extern u8 D_sc05_017_80191AC8;
extern u8 D_sc05_017_801E4758;
extern s32 *func_sc05_017_80182318();
void func_sc05_017_801849B0(u8 *arg0);
extern u8 D_sc05_017_801B6778;
extern void func_sc05_017_80182034();
extern u8 D_sc05_017_801B6800;
extern s32 func_sc05_017_801832C4();
extern u8 D_sc05_017_801B680C;
extern void func_sc05_017_80183328();
extern s32 UpdateScript();
extern u8 D_sc05_017_80191EC8;
extern void AddPlayerMoney();
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

extern void func_sc05_017_8018CA0C();

extern s32 D_sc05_017_80191F24[];
extern void *D_sc05_017_801ED90C;
extern s32 D_sc05_017_80192090[];
extern s32 D_sc05_017_8019218C[];
extern u8 D_sc05_017_801E64B0;
extern s32 func_sc05_017_80189E68();
extern s32 *D_sc05_017_801ED7E0;
extern u8 D_sc05_017_801E64E8;
extern u8 D_sc05_017_801E6520;
extern u8 D_sc05_017_801E6548;
extern u8 D_sc05_017_801E6580;
extern u8 D_sc05_017_801E65F8;
extern u8 D_sc05_017_801E6650;
extern u8 D_sc05_017_801E66A0;
extern u8 D_sc05_017_801E6700;
extern u8 D_sc05_017_801E6748;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

extern u8 D_sc05_017_80191170;
extern u8 D_sc05_017_801E4130;
extern s32 *func_sc05_017_8017EE10();

extern u8 D_sc05_017_801B8794;

extern u8 g_ClockMinute;
extern s32 D_sc05_017_801ED7E4;
extern void func_sc05_017_80189ED0();
extern void func_sc05_017_8018A878();

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
extern u8 g_Status;
extern u8 D_800AF630;
extern void SetState();
extern void func_sc05_017_8017DAC4();



extern s32 func_sc05_017_80185C20();


extern s32 func_8016F1C4();
extern u16 g_Actors;

typedef struct { s16 x, y, z, pad; } FeSv;
extern u16 D_sc05_017_801ECDA8;
extern void *g_ActiveCamera;
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void WorldToActorLocal();
extern s32 func_8012CB64();

extern s32 func_sc05_017_801845DC();

extern s16 D_sc05_017_801B8A00;

extern s32 StopMotion();
extern s16 D_800B9A08;

typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
extern u8 D_sc05_017_801ECBA8;
extern s32 SpawnFromDef();
extern u8 *SpawnProp();
extern void DrawPrimG4Screen();
extern s16 D_sc05_017_8018D4F4[];
extern s32 GetObjPadHeld();
extern s32 GetObjPadPressed();
extern s32 AngleDist();
extern s32 DistSqToPlayer();
extern s32 func_800D0F8C();
extern u8 D_sc05_017_801E9860;
extern u8 D_sc05_017_801E9878;

void func_sc05_017_8017BF50(StageActor *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = (u16 *)o->message;
    if (p != 0) {
        t = &D_sc05_017_801ECBA8;
        s.w = 0x158;
        s.a = s.b = 0;
        s.d = 0;
        s.e = 0;
        for (i = 0; i < 16; i++) {
            v = *p;
            if (v == 0x8000) break;
            if (o->param != 0) {
                p++;
                s.x = v;
                s.y = *p++;
                s.z = *p++;
                if (SpawnFromDef(&s) == 0) break;
            } else {
                r = SpawnProp(0x11);
                if (r == 0) break;
                AF(t, s32, 0x14) = *(s16 *)p; p++;
                AF(t, s32, 0x18) = *(s16 *)p; p++;
                AF(t, s32, 0x1C) = *(s16 *)p; p++;
                AF(r, u8 *, 0x30) = t;
                t += 0x20;
            }
        }
    }
    o->state++;
}

void func_sc05_017_8017C094(void) {
    FeSv v;
    u8 *p;

    p = g_ActiveCamera;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc05_017_801ECDA8 = v.y;
}

void func_sc05_017_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        InitSpriteKind2(temp_s0, (s32) &D_sc05_017_80190BC4, 0x3C0, 0xA0);
    } else {
        InitSpriteKind3(temp_s0, (s32) &D_sc05_017_80190BC4, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_017_8017C1AC(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc05_017_801ECDA8;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc05_017_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
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
    SyncModelPos(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc05_017_80190C48;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern s16 g_CameraFocus[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 EaseAngleStep();
extern s32 EaseAngle();
extern s32 EaseValue();
extern void LocalToWorld();

extern u8 D_sc05_017_801E4A08;
extern u8 D_sc05_017_801E4918;
extern u8 D_sc05_017_801E97E0[][8];
extern u8 D_sc05_017_801E97F0[][16];

extern u8 *D_sc05_017_801B898C[];
extern u8 D_sc05_017_801B895C;
extern u8 D_sc05_017_801B8974;

typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
extern s32 D_801151C8[];
extern s32 D_801151D0;
extern s8 D_800B9A15;
extern s32 func_8014168C();
extern void AddHp();
extern void AddWakeGauge();
extern void AddBp();
extern s32 GetDeadline8Passed();
extern void ExpireDeadline8();
extern void CloseMessage0();
extern s32 OpenMessageAt();
extern s32 RequestBgmPack();
extern s32 GetMessageAnswer();
extern void UpdateMessage0();
extern s16 D_sc05_017_801ED568;
extern s16 D_sc05_017_801ED56C;
extern s16 D_sc05_017_801ED570;
extern s16 D_sc05_017_801ED5F0;
extern s32 D_sc05_017_801ED564;
extern s16 D_sc05_017_801B93D0[];
extern u8 D_sc05_017_801F27F8;
extern u8 D_sc05_017_801B93CC;
extern void func_sc05_017_801EFF44();
extern void func_sc05_017_80189BA0();
extern void func_sc05_017_80188478();

extern u8 D_80115148[];
extern s32 SetMessageNumber();
extern u8 D_801117EC;
extern E12s D_8010EDEE[];
extern E12b D_8010EDF2[];
extern s16 D_800A6586[];
extern u8 *D_sc05_017_801ED554;
extern u8 *D_sc05_017_801ED55C;
extern s32 D_sc05_017_801B9390[];
extern s32 D_sc05_017_801B93AC[];
extern u8 D_sc05_017_8018E28C[];
extern s32 D_sc05_017_8018E34C[];
extern s32 D_sc05_017_801E9B94[];
extern u8 D_sc05_017_801ED618[];
extern s32 *D_sc05_017_801ED5D4[];
extern u8 D_sc05_017_801EEB7C;
extern u8 D_sc05_017_801F2930;
extern u8 D_sc05_017_801F29A0;
extern u8 D_sc05_017_801F2974;
extern u8 D_sc05_017_801F295C;
extern u8 D_sc05_017_801EEFFC;
extern OtRef g_FrontOtOrg[];
extern u8 D_80115138[];
extern u8 D_80115140[];
extern S8P D_80115158[];
extern u16 D_sc05_017_801B8D96;
extern u16 D_sc05_017_801B8DAA;

extern s32 GetPadPressedDirWide();
extern s32 GetPadHeldDirWide();
extern s32 func_sc05_017_80189240();
extern void func_sc05_017_80186B24();
extern u16 D_80115122;
extern u16 D_80115120;
extern u8 D_8011514E;
extern u8 D_80115143;

typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;

extern s32 D_sc05_017_801ECE88;
extern u8 D_sc05_017_801B8158;
extern u8 D_sc05_017_801B8180;
extern u8 D_sc05_017_801B6670;
extern u8 D_sc05_017_801B667C;


typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
extern s32 D_80115134;
extern Ot14 g_FrontOt[];
extern u8 D_sc05_017_801B8A5C;
extern u8 D_sc05_017_801B8A70;
extern u8 D_sc05_017_801B9144;
extern u8 D_sc05_017_801B93C4;
extern s16 D_sc05_017_801ED5F4;
extern u8 *DrawMessage0();
extern u8 *func_800D27DC();
extern u8 *DrawChoiceCursor();
extern u8 * func_sc05_017_801886B8();
extern u8 D_sc05_017_801ED610[];
extern s32 D_sc05_017_801B8EC4;
extern E12w D_8010EDE8[];
extern E8w D_8010F468[];

extern u8 D_sc05_017_801B65AC;
extern u8 D_sc05_017_801B65B8;
extern s32 SpawnActorArg();
extern u8 D_sc05_017_801E67C0[][4];
extern WMtx D_800AF648;
extern SV8 D_sc05_017_801E681C;
extern s32 PosSVecDist();
extern s32 AllocActorSprite();
extern void StartSpriteAnim();
extern void AngleToVec2();
extern u8 D_800D387C;
extern u8 D_800D3888;

extern u8 D_sc05_017_80191248;
extern u8 D_sc05_017_8019143C;
extern s32 * func_sc05_017_801805F0();
extern u8 D_sc05_017_80191BA8;

extern u8 D_sc05_017_80191374;
extern u8 D_sc05_017_80191540;

extern s32 D_sc05_017_801ED838[];
extern E12s D_8010EDEC[];
extern E12b D_8010EDF1[];
extern s32 D_sc05_017_801E9B9C[];
extern s32 D_sc05_017_801E9BB0[];
extern s32 D_sc05_017_801E9CE0[];
extern void func_800D0FE0();
extern void func_800D0F0C();

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
extern u8 D_sc05_017_80190CB0;
typedef struct { s32 w[4]; } W16;
extern u16 D_sc05_017_80190CE8[];
extern u8 D_sc05_017_80190D08;
extern u32 D_sc05_017_801ECE40;
extern u16 D_sc05_017_801ECE44[];
extern void QueueImage();
extern s32 func_sc05_017_80180AEC();
extern u8 D_sc05_017_80191C54;
extern s32 *func_sc05_017_80183100();
extern u8 D_sc05_017_80192168;
extern s32 *func_sc05_017_801843E0();
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef void (*StepFn)(void);
extern u8 D_800B9A13;
void func_sc05_017_801861AC(void); extern StepFn g_SubscreenHook;
extern s32 g_Money;
extern s32 AllocSpriteInRange();
extern void SetShapeCircle();
extern void func_8001CD50();
extern s32 (*D_sc05_017_801E6758[])();
extern void func_sc05_017_80189F24();
extern u8 D_sc05_017_801E67A0[];
extern void func_sc05_017_80189FE0();
extern u8 D_sc05_017_801E65B8;
extern u8 D_sc05_017_801E6630;
extern u8 D_sc05_017_801E6730;
extern u8 D_sc05_017_801E688C;
extern s16 D_sc05_017_801E9B00[];
extern void NextState();

extern OtRef g_WorldOtOrg[];
extern u8 *AllocPrim();
extern SV8 D_sc05_017_801E6370[][4];
extern SV8 D_sc05_017_801E63F0[][4];
extern SV8 D_sc05_017_801E6490[];
extern void LoadWorldScreenMatrix();
extern void AddDrawModeAt();

extern s16 D_sc05_017_801B8678[];
extern s16 D_sc05_017_801B86AC[];
extern s32 D_sc05_017_801B8578[][8];
extern s32 D_sc05_017_801ED7F8[];

extern void SjisToGlyphs();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;


extern void func_sc05_017_80185A70(u8 *o);

void func_sc05_017_8017C2B0(StageActor *o) {
    u8 unused[8];
    ModelObj *m;
    s16 y;

    m = o->model;
    if (o->pos[1].h.i - (s16) D_80126B62 < 0x40) {
        o->hitState = 0x800;
    } else {
        o->hitState = 0x40;
    }
    y = D_sc05_017_801ECDA8;
    if (m->rot.vy != y) {
        m->rot.vy = y;
        RotMatrixZYX((u8 *)o->model + 0x10, (u8 *)o->model + 0x34);
        m->flags |= 0x11;
    }
}

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
    SpawnEffect(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
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
        m = SpawnEffect(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
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
        FreeEffect(a);
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
        FreeEffect((s32) arg0, (s32) arg0, arg2, arg3);
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
    FreeEffect(arg0);
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
        FreeEffect((s32) arg0, temp_a1, arg2, arg3);
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

void func_sc05_017_8017C710(u8 *obj) {
    s32 tmp[3];
    SV8 box[8];
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

void func_sc05_017_8017D5F0(StageActor *arg0) {
    D_sc05_017_80190CA8[arg0->state]();
}

void func_sc05_017_8017D62C(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->state = 1;
    arg0->hitState = 0x20;
    arg0->hitData = (s32) ((s32) &D_sc05_017_80190C98 | 0x40000000);
    arg0->model->rot.vy = (u16) (u16)arg0->unkFC;
}

void func_sc05_017_8017D6A8(void) {
}

void func_sc05_017_8017D6B0(StageActor *arg0) {
    D_sc05_017_80190CE0[arg0->state]();
}

void func_sc05_017_8017D6EC(StageActor *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (g_ClockHour == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_sc05_017_801ECDB0)[i];
            AF(p, s16, 0x16) = i;
            func_sc05_017_8017DA08((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        NextState((s32) o);
    }
}

void func_sc05_017_8017D77C(StageActor *arg0) {
    Fx24 *p;
    s32 i;
    s32 j;
    s32 n;
    s32 c;
    s16 a;
    u8 *w = (u8 *) &D_800AF630;
    u8 *g = &g_Status;

    if (g_ClockHour >= 9) {
        n = 0;
        for (j = 0; j < 4; j++) {
            if (((Fx24 *) &D_sc05_017_801ECDB0)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            SetState(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc05_017_801ECDB0)[i];
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
                    func_sc05_017_8017D9B8((s32) p);
                }
            }
            func_sc05_017_8017DAC4(p);
        }
    }
}

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

void func_sc05_017_8017DA08(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc05_017_80190CB0;
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

void func_sc05_017_8017DAC4(u8 *o) {
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
        DrawPrimG4Screen(pq);
    }
}

void func_sc05_017_8017DBDC(void) {
    UpdateClockTint();
    func_sc05_017_8017DC0C();
    func_800D06E8();
}

void func_sc05_017_8017DC0C(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc05_017_801ECE44[i] = D_sc05_017_80190CE8[((D_sc05_017_801ECE40 >> 8) + i) & 0xF] | 0x8000;
    }
    QueueImage(&D_sc05_017_80190D08);
    D_sc05_017_801ECE40 += 0x100;
}

s32 func_sc05_017_8017DC98(u8 *arg0) {
    StartPlayerAction((s32) func_sc05_017_8017E050, 0x01000000);
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_017_8017DCE8(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc05_017_8017DD0C(u8 *arg0) {
    StartPlayerAction((s32) func_sc05_017_8017E0D8, 0x01000000);
    D_801270C0 = 2;
    g_PlayerFlags |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s16 D_800B9A0A;
extern s32 func_800D1D94();
extern s32 CollidePath();

s32 func_sc05_017_8017DD7C(u8 *o) {
    s32 t;
    s16 s;

    t = AF(o, s32, 0x28) - 1;
    AF(o, s32, 0x28) = t;
    if (t == -1) {
        func_800D1E28();
        s = D_800B9A0A;
        if (s != 0x1000 || (s16)func_800D1D94() != s) {
            PlaySoundId(0x1C, 0);
            ClearTimeChime();
            PlaySoundId(0x1D, 0);
            func_800D0C48(1);
        }
        AF(o, u8, 0x15)++;
    }
    return 0;
}

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

s32 RoomExitStep(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = GetProgress(arg0, arg1);
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        func_800D1E28();
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        if (!(GetVar(0xCE) & 0xFF) && ((u32) (temp_s1 - 0x384) >= 0x6EU) && ((u32) (temp_s1 - 0x460) >= 0x32U)) {
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

void func_sc05_017_8017E050(Player *arg0) {
    D_sc05_017_80190FFC[arg0->phase]();
}

void func_sc05_017_8017E08C(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc05_017_8017E0A0(s32 arg0) {
    func_80175414();
    EndPlayerActionOf(arg0);
    ResumeHopAbility(arg0);
}

void func_sc05_017_8017E0D8(Player *arg0) {
    D_sc05_017_80191004[arg0->phase]();
}

void func_sc05_017_8017E114(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc05_017_8017E128(s32 arg0) {
    EndPlayerActionOf(arg0);
}

void func_sc05_017_8017E148(void) {
    u8 temp_s1;

    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    temp_s1 = g_CameraVarA0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_017_8017E20C, 0);
    g_CameraVarA0 = temp_s1;
    SnapCamera((s32) &g_Camera);
    func_sc05_017_8017E20C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_017_8017E20C((s32) &g_Camera);
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

void func_sc05_017_8017E284(u8 *o, u8 *a1) {
    s32 d;
    s32 s0;
    s32 s3;
    s32 b;
    s32 v;
    d = *a1;
    b = GetObjPadHeld(&g_Player);
    v = GetObjPadPressed(&g_Player);
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
        if ((s16)AngleDist(AF(o, s16, 0x1A), D_sc05_017_8018D4F4[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_sc05_017_8018D4F4[*a1];
}

void func_sc05_017_8017E3C4(u8 *o) {
    WMtx m;
    SV8 v;
    SV8 r;
    s16 lim;
    s16 d;
    lim = AF(o, s16, 0x9C);
    d = EaseAngleStep(AF(o, s16, 0x1A), AF(o, s16, 0x22), 0x14);
    if (d > lim) d = lim;
    else if (d < -lim) d = -lim;
    AF(o, s16, 0x1A) = (AF(o, s16, 0x1A) + d) & 0xFFF;
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s32, 8) = (s16)EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + g_CameraFocus[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126942;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + g_CameraFocus[0];
    m.t[1] = AF(o, s16, 0x2A) + D_80126942;
    m.t[2] = AF(o, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

void func_sc05_017_8017E5B8(StageActor *arg0) {
    D_sc05_017_80191158[arg0->state]();
}

void SetProgress3A2(void) {
    SetProgress(0x3A2);
}

extern u8 g_Daytime;

extern u8 D_sc05_017_80191028;
extern void StartEvent();

void EventArrival(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (GetPlayerAction() == 0) {
            o->stateCount++;
            StartEvent(o, &D_sc05_017_80191028);
        }
        break;
    case 1:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->stateCount++;
        }
        break;
    case 2:
        FreeActor(o);
        break;
    }
}

void StoryPropInit(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (((u32) (GetProgress(arg0, arg1) - 0x384) >= 0x1EU) || (temp_v0 = AllocActorModel(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc05_017_801DC4EC);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc05_017_801B990C);
    PlaceObject(arg0, (s32) &D_sc05_017_80191010);
}

s32 func_sc05_017_8017E778(void) {
    s32 r;

    r = GetProgress();
    if ((u32)(r - 0x460) < 0x32) {
        return 0x89;
    }
    if ((u32)(r - 0x384) < 0x6E) {
        return 0x65;
    }
    if ((u32)(r - 0x64) < 0x1E) {
        return 0x28;
    }
    if (g_Daytime == 1) {
        return 0xF;
    }
    return 0x10;
}

s32 func_sc05_017_8017E7EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    PlaceObject(arg0, (s32) &D_sc05_017_80191160);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6354, 0, 0x60);
}

void func_sc05_017_8017E85C(StageActor *arg0) {
    arg0->state = 3;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6364, 0, 0x40);
    func_sc05_017_80185CB8(arg0, 0xC, 1);
}

s32 func_sc05_017_8017E8CC(StageActor *arg0) {
    arg0->state = 6;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6354, 1, 0x60);
}

void func_sc05_017_8017E92C(u8 *o) {
    s32 r;
    s32 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xC00, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += r;
        if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) == 0) {
            func_sc05_017_8017EA6C(o);
        }
        break;
    case 1:
        RunScript(o, &D_sc05_017_80191248);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            AF(o, s16, 2) = 9;
            AF(o, s16, 0x34) = 0;
            t = AF(AF(o, u8 *, 0x20), s16, 0x12);
            PlaceObject(o, &D_sc05_017_80191228);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = t;
            ShowModel(o);
            SetScript(o, &D_sc05_017_801E4130);
            func_sc05_017_80184990(o);
        }
        break;
    }
}

s32 func_sc05_017_8017EA6C(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_017_80191228);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6714, 1, 0x60);
}

void func_sc05_017_8017EAE0(s32 arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_017_80191228);
    HideModel(arg0);
    AF(arg0, s16, 0x98) = 0;
    func_sc05_017_801849B0(arg0);
}

void func_sc05_017_8017EB30(s32 arg0) {
    s32 temp_s0_2;
    s32 temp_s0;
    s32 var_v0;

    func_sc05_017_80184B44(arg0);
    temp_s0 = GetProgress();
    if (func_sc05_017_80184B44() == 1) {
        RejectSpawn(arg0);
        return;
    }
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_80191170) != 0) {
        if ((func_sc05_017_80184B44() == 3) && (temp_s0 < 0x492)) {
            if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) != 0) {
                AF(arg0, s16, 2) = 9;
                AF(arg0, s16, 0x34) = 0;
                temp_s0_2 = AF(AF(arg0, void *, 0x20), s16, 0x12);
                PlaceObject(arg0, (s32) &D_sc05_017_80191228);
                AF(AF(arg0, void *, 0x20), s16, 0x12) = temp_s0_2;
                ShowModel(arg0);
                SetScript(arg0, (s32) &D_sc05_017_801E4130);
                func_sc05_017_80184990(arg0);
            } else {
                AF(arg0, s16, 2) = 0xB;
                AF(arg0, s16, 0x34) = 0;
                PlaceObject(arg0, (s32) &D_sc05_017_80191228);
                HideModel(arg0);
                AF(arg0, s16, 0x98) = 0;
                func_sc05_017_801849B0(arg0);
            }
        } else {
            if (func_sc05_017_80184B44() == 1) {
                var_v0 = 0;
            } else {
                var_v0 = func_sc05_017_801848AC(9, 0x11) != 0;
            }
            if (var_v0 != 0) {
                AF(arg0, s16, 2) = 3;
                ShowModel(arg0);
                SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
                func_sc05_017_80184990(arg0);
                func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6364, 0, 0x40);
            } else {
                AF(arg0, s16, 2) = 1;
                func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191160);
            }
            func_sc05_017_80185CB8(arg0, 0xC, 1);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = SpawnTalkMarker(arg0, (s32) &func_sc05_017_8017EE10);
    }
}

void func_sc05_017_8017ED1C(StageActor *arg0) {
    D_sc05_017_801912B8[arg0->state]();
}

void func_sc05_017_8017ED58(StageActor *arg0) {
    arg0->state = 5;
    RunScript((s32) arg0, (s32) &D_sc05_017_801911C0);
    arg0->stateCount = 0;
}

void func_sc05_017_8017ED94(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191184[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_8017EDD4(s32 arg0, s32 arg1) {
    if (!(GetFlag(0x110, arg1) & 0xFF)) {
        SetFlag(0x110, 1);
        return 1;
    }
    return 0;
}

s32 *func_sc05_017_8017EE10(u8 *arg0) {
    switch (AF(AF(arg0, void *, 0x64), u16, 2)) {
    case 3:
        if (DistSqToPlayer(AF(arg0, void *, 0x64)) >= 0x4001) {
            return NULL;
        }
        AF(AF(arg0, void *, 0x64), s16, 2)++;
        break;
    case 9:
        if (DistSqToPlayer(AF(arg0, void *, 0x64)) >= 0x4001) {
            return NULL;
        }
        AF(AF(arg0, void *, 0x64), s16, 0x34)++;
        break;
    default:
        return NULL;
    }
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

void func_sc05_017_8017EEC8(StageActor *arg0) {
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

void func_sc05_017_8017EF20(StageActor *arg0) {
    func_sc05_017_80185C54(arg0, 0xC, 1);
    if ((func_sc05_017_801858E0(0xC) != 0) && (func_sc05_017_80184CA4(arg0) != 0)) {
        func_sc05_017_8017E85C(arg0);
    }
}

void func_sc05_017_8017EF78(StageActor *arg0) {
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

void func_sc05_017_8017EFFC(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 3;
        SetScript(arg0, (s32) &D_sc05_017_801B9DB4);
    }
}

void func_sc05_017_8017F04C(StageActor *arg0) {
    func_sc05_017_80185C54(arg0, 0xC, 1);
    if ((func_sc05_017_801858E0(0xC) != 0) && (func_sc05_017_80184CA4(arg0) != 0)) {
        arg0->state = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191160);
        func_sc05_017_80185CB8(arg0, 0xC, 1);
    }
}

void func_sc05_017_8017F0C0(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (func_sc05_017_80184CA4() != 0) {
            o->stateCount++;
            func_sc05_017_80184BD4(o, &D_sc05_017_801B6354, 1, 0x70);
        }
        break;
    case 1:
        if (func_sc05_017_801858E0(0xC) != 0 && func_sc05_017_80184CA4(o) != 0) {
            func_sc05_017_801849B8(o, &D_sc05_017_80191160);
            o->stateCount = 2;
        }
        break;
    case 2:
        break;
    }
}

void SetFlag110(void) {
    SetFlag(0x110, 1);
}

void func_sc05_017_8017F198(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6714, 0, 0x60);
            return;
        }
        return;
    case 1:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 9;
            AF(arg0, u16, 0x34) = 0U;
            temp_s0 = AF(AF(arg0, void *, 0x20), s16, 0x12);
            PlaceObject((s32) arg0, (s32) &D_sc05_017_80191228);
            AF(AF(arg0, void *, 0x20), s16, 0x12) = temp_s0;
            ShowModel((s32) arg0);
            SetScript((s32) arg0, (s32) &D_sc05_017_801E4130);
            func_sc05_017_80184990((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_8017F274(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            arg0->stateCount = (u16) (arg0->stateCount + 1);
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
        PlaceObject((s32) arg0, (s32) &D_sc05_017_80191160);
        ShowModel((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc05_017_801B9DB4);
        func_sc05_017_80184990((s32) arg0);
        func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6708, 0, 0x60);
    }
}

s32 func_sc05_017_8017F398(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801912E8);
}

void func_sc05_017_8017F3C4(StageActor *arg0) {
    D_sc05_017_80191350[arg0->state]();
}

void func_sc05_017_8017F400(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191318);
}

void func_sc05_017_8017F42C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191304[func_sc05_017_80184B44(arg0)];
}

void func_sc05_017_8017F46C(StageActor *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = FindActorByKind(0x363);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 != 0) {
        func_sc05_017_8017F398(arg0);
    }
}

void func_sc05_017_8017F4C8(StageActor *arg0) {
    s32 temp_v0;
    s32 var_v0;

    AF(arg0->ext0, s32, 0xB0) = 2;
    temp_v0 = FindActorByKind(0x363);
    if (temp_v0 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = AF(temp_v0, u16, 2) == 3;
    }
    if (var_v0 == 0) {
        arg0->state = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801912E8);
    }
}

void func_sc05_017_8017F53C(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801912E8);
    }
}

extern u8 D_sc05_017_801912F0;
extern s32 *func_sc05_017_8017F650(u8 *arg0);
void func_sc05_017_8017F58C(StageActor *o) {
    s32 p;
    s32 c;

    if (func_sc05_017_80184B44() >= 2) {
        RejectSpawn(o);
        return;
    }
    if (func_sc05_017_801844BC((s32) o, (s32) &D_sc05_017_801912F0) == 0) {
        return;
    }
    p = FindActorByKind(0x363);
    if (p == 0) {
        c = 0;
    } else {
        c = AF(p, u16, 2) == 3;
    }
    if (c == 0) {
        o->state = 1;
    } else {
        o->state = 2;
    }
    func_sc05_017_801849B8((s32) o, (s32) &D_sc05_017_801912E8);
    o->def->unkC = 0x7FFF;
    o->workD4 = SpawnTalkMarker(o, (s32) &func_sc05_017_8017F650);
}

s32 *func_sc05_017_8017F650(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_sc05_017_801845DC() == 0) {
        return NULL;
    }
    if (func_sc05_017_80185F5C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 3;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 func_sc05_017_8017F6C8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    PlaceObject(arg0, (s32) &D_sc05_017_80191364);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63B0, 0, 0x60);
}

void func_sc05_017_8017F73C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    PlaceObject(arg0, (s32) &D_sc05_017_8019136C);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
    func_sc05_017_80184990(arg0);
}

s32 func_sc05_017_8017F794(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    PlaceObject(arg0, (s32) &D_sc05_017_8019136C);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63BC, 1, 0x40);
}

s32 func_sc05_017_8017F81C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191364);
}

extern s32 *func_sc05_017_8017FA98();
extern s32 * func_sc05_017_8017FB10();
void func_sc05_017_8017F848(u8 *o) {
    s32 k;

    if (func_sc05_017_801844BC(o, &D_sc05_017_80191374) != 0) {
        func_sc05_017_801849B8(o, &D_sc05_017_80191364);
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = SpawnTalkMarker(o, func_sc05_017_8017FA98);
        AF(o, s32, 0xD8) = SpawnTalkMarker(o, func_sc05_017_8017FB10);
        if (func_sc05_017_80184B44() == 1) {
            if (func_sc05_017_801848AC(0xA, 0x16) != 0) {
                k = 1;
            } else {
                k = 2;
            }
        } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
            k = 0;
        } else if (func_sc05_017_801848AC(0x10, 0x16) != 0) {
            k = 1;
        } else {
            k = 2;
        }
        switch (k) {
        case 0:
            AF(o, s16, 2) = 3;
            PlaceObject(o, &D_sc05_017_8019136C);
            ShowModel(o);
            SetScript(o, &D_sc05_017_801B9B0C);
            func_sc05_017_80184990(o);
            break;
        case 1:
            AF(o, s16, 2) = 5;
            func_sc05_017_801849B8(o, &D_sc05_017_80191364);
            break;
        case 2:
            AF(o, s16, 2) = 1;
            func_sc05_017_801849B8(o, &D_sc05_017_80191364);
            break;
        }
    }
}

void func_sc05_017_8017F98C(StageActor *arg0) {
    D_sc05_017_801913FC[arg0->state]();
}

void func_sc05_017_8017F9C8(u8 *arg0) {
    AF(arg0, s16, 2) = 9;
    PlaceObject((s32) arg0, (s32) &D_sc05_017_8019136C);
    ShowModel((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_017_801B9B0C);
    RunScript((s32) arg0, func_sc05_017_80180AEC((s32) arg0));
}

void func_sc05_017_8017FA2C(StageActor *arg0) {
    arg0->state = 7;
    RunScript((s32) arg0, (s32) &D_sc05_017_8019139C);
}

void func_sc05_017_8017FA58(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191388[func_sc05_017_80184B44(arg0)];
}

s32 *func_sc05_017_8017FA98(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_sc05_017_801845DC() == 0) {
        return NULL;
    }
    if (func_sc05_017_80185F5C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 *func_sc05_017_8017FB10(u8 *o) {
    u8 *p;
    u16 s;

    if (DistSqToPlayer(AF(o, void *, 0x64)) >= 0x4001) {
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
            D_sc05_017_801ECE68 = s;
            D_sc05_017_801ECE6A = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    case 4:
        if (AF(p, u16, 0x34) == 0) {
            D_sc05_017_801ECE68 = s;
            D_sc05_017_801ECE6A = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    default:
        return NULL;
    }
    ResetScriptVM();
    return (s32 *)&CallActionHandler;
}

void func_sc05_017_8017FC00(StageActor *o) {
    s32 k;

    AF(o->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_80184B44() == 1) {
        if (func_sc05_017_801848AC(0xA, 0x16) != 0) {
            k = 1;
        } else {
            k = 2;
        }
    } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
        k = 0;
    } else if (func_sc05_017_801848AC(0x10, 0x16) != 0) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
        func_sc05_017_8017F6C8((s32)o);
        break;
    case 1:
        func_sc05_017_8017F81C((s32)o);
        break;
    case 2:
        break;
    }
}

void func_sc05_017_8017FCA0(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if ((func_sc05_017_801858E0(6, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63BC, 0, 0x40);
            arg0->stateCount = 1U;
        }
    } else {
        AF(arg0->ext0, s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_8017F73C((s32) arg0);
        }
    }
}

void func_sc05_017_8017FD34(StageActor *o) {
    s32 k;

    if (func_sc05_017_80184B44() == 1) {
        if (func_sc05_017_801848AC(0xA, 0x16) != 0) {
            k = 1;
        } else {
            k = 2;
        }
    } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
        k = 0;
    } else if (func_sc05_017_801848AC(0x10, 0x16) != 0) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
        break;
    case 1:
        func_sc05_017_8017F794(o);
        break;
    case 2:
        func_sc05_017_8017F794(o);
        break;
    }
}

void func_sc05_017_8017FDB8(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 3;
        PlaceObject(arg0, (s32) &D_sc05_017_8019136C);
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
        func_sc05_017_80184990(arg0);
    }
}

void func_sc05_017_8017FE28(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63B0, 1, 0x40);
            arg0->stateCount = 1U;
            arg0->timer = 0x20;
        }
    } else if ((func_sc05_017_801858E0(6, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        func_sc05_017_8017F81C((s32) arg0);
    }
}

void func_sc05_017_8017FEBC(StageActor *o) {
    s32 k;

    AF(o->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_80184B44() == 1) {
        if (func_sc05_017_801848AC(0xA, 0x16) != 0) {
            k = 1;
        } else {
            k = 2;
        }
    } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
        k = 0;
    } else if (func_sc05_017_801848AC(0x10, 0x16) != 0) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
    case 2:
        o->state = 1;
        func_sc05_017_801849B8(o, &D_sc05_017_80191364);
        break;
    case 1:
        break;
    }
}

void func_sc05_017_8017FF6C(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 5;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191364);
    }
}

void func_sc05_017_8017FFBC(StageActor *arg0) {
    arg0->state = 0xB;
    RunScript((s32) arg0, (s32) &D_sc05_017_801913D4);
}

void func_sc05_017_8017FFE8(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, u16, 2) = (u16) D_sc05_017_801ECE68;
        arg0->stateCount = (u16) D_sc05_017_801ECE6A;
        SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    }
}

s32 func_sc05_017_80180048(StageActor *arg0) {
    arg0->state = 2;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    arg0->stateCount = 0;
    func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63C8, 0, 0x80);
    D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
    return D_sc05_017_801D5210;
}

s32 func_sc05_017_801800BC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    PlaceObject(arg0, (s32) &D_sc05_017_80191434);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
    func_sc05_017_80184990(arg0);
    D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
    return D_sc05_017_801D5210;
}

s32 func_sc05_017_80180124(StageActor *arg0) {
    arg0->state = 6;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    arg0->stateCount = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B63D4, 1, 0x80);
}

s32 func_sc05_017_80180188(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_8019142C);
}

void func_sc05_017_801801B4(StageActor *arg0) {
    if (func_sc05_017_80184B44(arg0) == 1) {
        arg0->state = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_8019142C);
        return;
    }
    arg0->state = 8;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    D_sc05_017_801CE1C0 = D_sc05_017_801ECE70;
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc05_017_80180240(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_8019142C);
}

void func_sc05_017_8018026C(StageActor *arg0) {
    arg0->state = 0xA;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    arg0->stateCount = 0;
}

void func_sc05_017_801802B8(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (func_sc05_017_801858E0(0xD) != 0) {
            o->stateCount = 1;
            func_sc05_017_80184BD4(o, &D_sc05_017_801B645C, 1, 0x80);
        }
        break;
    case 1:
        func_sc05_017_801858E0(0xD);
        if (func_sc05_017_80184CA4(o) != 0) {
            o->stateCount = 2;
            func_sc05_017_80184BD4(o, &D_sc05_017_801B640C, 1, 0x80);
        }
        break;
    case 2:
        if (func_sc05_017_80184CA4(o) != 0) {
            o->stateCount = 3;
            o->timer = 0x20;
        }
        break;
    case 3:
        if (func_sc05_017_801858E0(3) != 0) {
            o->stateCount = 4;
            func_sc05_017_80184BD4(o, &D_sc05_017_801B63C8, 1, 0x80);
        }
        break;
    case 4:
        func_sc05_017_801858E0(3);
        if (func_sc05_017_80184CA4(o) != 0) {
            o->state = 1;
            func_sc05_017_801849B8(o, &D_sc05_017_8019142C);
        }
        break;
    }
}

void func_sc05_017_801803D8(u8 *o) {
    s32 v;

    if (func_sc05_017_801844BC(o, &D_sc05_017_8019143C) != 0) {
        MapPartsTmd(&D_sc05_017_801D5210);
        D_sc05_017_801ECE70 = D_sc05_017_801CE1C0;
        if (func_sc05_017_801848AC(9, 0xF) != 0) {
            AF(o, s16, 2) = 3;
            PlaceObject(o, &D_sc05_017_80191434);
            ShowModel(o);
            SetScript(o, &D_sc05_017_801C0CFC);
            func_sc05_017_80184990(o);
            D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
        } else {
            v = func_sc05_017_801848AC(0xF, 0x11);
            if (v != 0) {
                v = 7;
            } else {
                v = func_sc05_017_801848AC(0x11, 0x12);
                if (v != 0) {
                    v = 9;
                } else {
                    v = 1;
                }
            }
            AF(o, s16, 2) = v;
            func_sc05_017_801849B8(o, &D_sc05_017_8019142C);
        }
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = SpawnTalkMarker(o, func_sc05_017_801805F0);
    }
}

void func_sc05_017_801804F0(StageActor *arg0) {
    D_sc05_017_80191504[arg0->state]();
}

void func_sc05_017_8018052C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    PlaceObject((s32) arg0, (s32) &D_sc05_017_80191434, arg2);
    ShowModel((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_017_801B9A0C);
    RunScript((s32) arg0, (s32) &D_sc05_017_80191494);
}

void func_sc05_017_8018058C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191450[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_801805CC(s32 arg0) {
    return func_sc05_017_80184B44(arg0) != 1;
}

s32 *func_sc05_017_801805F0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (DistSqToPlayer(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

void func_sc05_017_80180664(StageActor *arg0) {
    s32 v;

    if (func_sc05_017_80184B44(arg0) == 1) {
        v = func_sc05_017_801848AC(9, 0xF);
    } else {
        v = func_sc05_017_801848AC(9, 0x12);
    }
    if (v != 0) {
        func_sc05_017_80180048(arg0);
    }
}

void func_sc05_017_801806BC(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63D4, 0, 0x80);
            arg0->stateCount = 1U;
        }
    } else if (func_sc05_017_80184CA4((s32) arg0) != 0) {
        func_sc05_017_801800BC((s32) arg0);
    }
}

void func_sc05_017_80180748(StageActor *arg0) {
    if (func_sc05_017_801848AC(9, 0xF) == 0) {
        func_sc05_017_80180124(arg0);
    }
}

void func_sc05_017_80180788(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 3;
        PlaceObject(arg0, (s32) &D_sc05_017_80191434);
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
        func_sc05_017_80184990(arg0);
        D_sc05_017_801CE1C0 = D_sc05_017_801D5210;
    }
}

void func_sc05_017_80180808(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B63C8, 1, 0x80);
            arg0->stateCount = 1U;
        }
    } else if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        func_sc05_017_80180188((s32) arg0);
    }
}

void func_sc05_017_80180894(StageActor *arg0) {
    if (func_sc05_017_801848AC(0xF, 0x11) == 0) {
        func_sc05_017_801801B4(arg0);
    }
}

void func_sc05_017_801808D4(StageActor *arg0) {
    switch (arg0->stateCount) {
    case 0:
        if (func_sc05_017_801858E0(3) != 0) {
            arg0->stateCount = 1;
            func_sc05_017_80184BD4(arg0, &D_sc05_017_801B63C8, 0, 0x80);
        }
        break;
    case 1:
        func_sc05_017_801858E0(3);
        if (func_sc05_017_80184CA4(arg0) != 0) {
            arg0->stateCount = 2;
            func_sc05_017_80184BD4(arg0, &D_sc05_017_801B640C, 0, 0x80);
        }
        break;
    case 2:
        if (func_sc05_017_80184CA4(arg0) != 0) {
            arg0->stateCount = 3;
        }
        break;
    case 3:
        if (func_sc05_017_801858E0(0xD) != 0) {
            arg0->stateCount = 4;
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

void func_sc05_017_801809E0(StageActor *arg0) {
    if (func_sc05_017_801848AC(0x11, 0x12) == 0) {
        func_sc05_017_8018026C(arg0);
    }
}

s32 func_sc05_017_80180A20(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    PlaceObject(arg0, (s32) &D_sc05_017_80191530);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6468, 0, 0x40);
}

void func_sc05_017_80180A94(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    PlaceObject(arg0, (s32) &D_sc05_017_80191538);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
    func_sc05_017_80184990(arg0);
}

extern u8 D_sc05_017_801917F0;
extern u8 D_sc05_017_80191818;
extern s32 D_sc05_017_80191868[];
s32 func_sc05_017_80180AEC(u8 *o) {
    s32 p;
    s32 c;

    if (AF(o, u16, 0) == 0x363) {
        p = FindActorByKind(0x365);
        if (p == 0) {
            c = 0;
        } else {
            c = AF(p, u16, 2) == 3;
        }
    } else {
        p = FindActorByKind(0x363);
        if (p == 0) {
            c = 0;
        } else {
            c = AF(p, u16, 2) == 3;
        }
    }
    if (c == 0) {
        if (AF(o, u16, 0) == 0x363) {
            return (s32) &D_sc05_017_801917F0;
        }
        return (s32) &D_sc05_017_80191818;
    }
    return D_sc05_017_80191868[func_sc05_017_80184B44()];
}

s32 func_sc05_017_80180BA8(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    PlaceObject(arg0, (s32) &D_sc05_017_80191538);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6474, 1, 0x40);
}

s32 func_sc05_017_80180C30(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191530);
}

extern s32 *func_sc05_017_80180F3C();
extern s32 * func_sc05_017_80180FB4();
void func_sc05_017_80180C5C(u8 *o) {
    s32 k;

    if (func_sc05_017_801844BC(o, &D_sc05_017_80191540) != 0) {
        if (func_sc05_017_80184B44() == 1) {
            if (func_sc05_017_801848AC(0xA, 0x15) != 0) {
                k = 1;
            } else {
                k = 2;
            }
        } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
            k = 0;
        } else if (func_sc05_017_801848AC(0x10, 0x15) != 0) {
            k = 1;
        } else {
            k = 2;
        }
        switch (k) {
        case 0:
            AF(o, s16, 2) = 3;
            PlaceObject(o, &D_sc05_017_80191538);
            ShowModel(o);
            SetScript(o, &D_sc05_017_801B9B0C);
            func_sc05_017_80184990(o);
            break;
        case 1:
            AF(o, s16, 2) = 5;
            func_sc05_017_801849B8(o, &D_sc05_017_80191530);
            break;
        case 2:
            AF(o, s16, 2) = 1;
            func_sc05_017_801849B8(o, &D_sc05_017_80191530);
            break;
        }
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = SpawnTalkMarker(o, func_sc05_017_80180F3C);
        PlaceObject(AF(o, s32, 0xD4), &D_sc05_017_80191530);
        AF(o, s32, 0xD8) = SpawnTalkMarker(o, func_sc05_017_80180FB4);
    }
}

void func_sc05_017_80180DA4(StageActor *arg0) {
    D_sc05_017_8019187C[arg0->state]();
}

static inline s32 isState3_80180DE0(s32 id) {
    s32 v = FindActorByKind(id);
    if (v == 0) {
        return 0;
    }
    return AF(v, u16, 2) == 3;
}

void func_sc05_017_80180DE0(u8 *o) {
    s32 t;
    s32 a1;

    AF(o, s16, 2) = 9;
    PlaceObject((s32) o, (s32) &D_sc05_017_80191538);
    ShowModel((s32) o);
    SetScript(o, (s32) &D_sc05_017_801B9B0C);
    if (AF(o, u16, 0) == 0x363) {
        t = isState3_80180DE0(0x365);
    } else {
        t = isState3_80180DE0(0x363);
    }
    if (!t) {
        a1 = (s32) &D_sc05_017_80191818;
        if (AF(o, u16, 0) == 0x363) {
            a1 = (s32) &D_sc05_017_801917F0;
        }
    } else {
        a1 = D_sc05_017_80191868[func_sc05_017_80184B44()];
    }
    RunScript((s32) o, a1);
}

void func_sc05_017_80180ED0(StageActor *arg0) {
    arg0->state = 7;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191568);
}

void func_sc05_017_80180EFC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191554[func_sc05_017_80184B44(arg0)];
}

s32 *func_sc05_017_80180F3C(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_sc05_017_801845DC() == 0) {
        return NULL;
    }
    if (func_sc05_017_80185F5C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 *func_sc05_017_80180FB4(u8 *o) {
    u8 *p;
    u16 s;

    if (DistSqToPlayer(AF(o, void *, 0x64)) >= 0x4001) {
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
            D_sc05_017_801ECE78 = s;
            D_sc05_017_801ECE7A = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    case 4:
        if (AF(p, u16, 0x34) == 0) {
            D_sc05_017_801ECE78 = s;
            D_sc05_017_801ECE7A = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    default:
        return NULL;
    }
    ResetScriptVM();
    return (s32 *)&CallActionHandler;
}

void func_sc05_017_801810A4(StageActor *o) {
    s32 k;

    AF(o->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_80184B44() == 1) {
        if (func_sc05_017_801848AC(0xA, 0x15) != 0) {
            k = 1;
        } else {
            k = 2;
        }
    } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
        k = 0;
    } else if (func_sc05_017_801848AC(0x10, 0x15) != 0) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
        func_sc05_017_80180A20((s32)o);
        break;
    case 1:
        func_sc05_017_80180C30((s32)o);
        break;
    case 2:
        break;
    }
}

void func_sc05_017_80181144(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6474, 0, 0x40);
            arg0->stateCount = 1U;
        }
    } else {
        AF(arg0->ext0, s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80180A94((s32) arg0);
        }
    }
}

void func_sc05_017_801811D8(StageActor *o) {
    s32 k;

    AF(o->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_80184B44() == 1) {
        if (func_sc05_017_801848AC(0xA, 0x15) != 0) {
            k = 1;
        } else {
            k = 2;
        }
    } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
        k = 0;
    } else if (func_sc05_017_801848AC(0x10, 0x15) != 0) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
        break;
    case 1:
        func_sc05_017_80180BA8((s32)o);
        break;
    case 2:
        func_sc05_017_80180BA8((s32)o);
        break;
    }
}

void func_sc05_017_80181268(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 3;
        PlaceObject(arg0, (s32) &D_sc05_017_80191538);
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9B0C);
        func_sc05_017_80184990(arg0);
    }
}

void func_sc05_017_801812D8(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6468, 1, 0x40);
            arg0->stateCount = 1U;
        }
    } else if ((func_sc05_017_801858E0(3, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        func_sc05_017_80180C30((s32) arg0);
    }
}

void func_sc05_017_80181364(StageActor *o) {
    s32 k;

    AF(o->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_80184B44() == 1) {
        if (func_sc05_017_801848AC(0xA, 0x15) != 0) {
            k = 1;
        } else {
            k = 2;
        }
    } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
        k = 0;
    } else if (func_sc05_017_801848AC(0x10, 0x15) != 0) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
    case 2:
        o->state = 1;
        func_sc05_017_801849B8(o, &D_sc05_017_80191530);
        break;
    case 1:
        break;
    }
}

void func_sc05_017_80181414(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 5;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191530);
    }
}

void func_sc05_017_80181464(StageActor *arg0) {
    arg0->state = 0xB;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191840);
}

void func_sc05_017_80181490(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, u16, 2) = (u16) D_sc05_017_801ECE78;
        arg0->stateCount = (u16) D_sc05_017_801ECE7A;
        SetScript(arg0, (s32) &D_sc05_017_801B9A64);
    }
}

s32 func_sc05_017_801814F0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    PlaceObject(arg0, (s32) &D_sc05_017_801918AC);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B649C, 0, 0x60);
}

void func_sc05_017_80181564(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    PlaceObject(arg0, (s32) &D_sc05_017_801918B4);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
    func_sc05_017_80184990(arg0);
}

s32 func_sc05_017_801815BC(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    PlaceObject(arg0, (s32) &D_sc05_017_801918B4);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B64A8, 1, 0x60);
}

void func_sc05_017_80181630(StageActor *arg0) {
    D_sc05_017_80191990[arg0->state]();
}

void func_sc05_017_8018166C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    PlaceObject((s32) arg0, (s32) &D_sc05_017_801918B4, arg2);
    ShowModel((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_017_801B9A0C);
    RunScript((s32) arg0, (s32) &D_sc05_017_80191910);
}

void func_sc05_017_801816CC(u8 *arg0) {
    AF(arg0, s32 *, 0xE4) = &D_sc05_017_801E6CDC;
}

s32 func_sc05_017_801816DC(s32 arg0, s32 arg1) {
    if (!(GetFlag(0x113, arg1) & 0xFF)) {
        SetFlag(0x113, 1);
        return 1;
    }
    return 0;
}

void func_sc05_017_80181718(StageActor *arg0) {
    if (func_sc05_017_801848AC(7, 0xE) != 0) {
        func_sc05_017_801814F0(arg0);
    }
}

void func_sc05_017_80181758(StageActor *arg0) {
    if (arg0->stateCount == 0) {
        if ((func_sc05_017_801858E0(2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            arg0->stateCount = 1U;
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B64A8, 0, 0x60);
            AF(arg0->ext0, s32, 0xB0) = 2;
        }
    } else if (func_sc05_017_80184CA4((s32) arg0) != 0) {
        func_sc05_017_80181564((s32) arg0);
    }
}

void func_sc05_017_801817F0(StageActor *arg0) {
    if (func_sc05_017_801848AC(7, 0xE) == 0) {
        func_sc05_017_801815BC(arg0);
    }
}

void func_sc05_017_80181830(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 3;
        PlaceObject(arg0, (s32) &D_sc05_017_801918B4);
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
        func_sc05_017_80184990(arg0);
    }
}

void func_sc05_017_801818A0(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->stateCount == 0) {
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            arg0->stateCount = 1U;
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B649C, 1, 0x60);
        }
    } else if ((func_sc05_017_801858E0(2, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
        arg0->state = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801918AC);
    }
}

void func_sc05_017_8018193C(s32 arg0) {
    if (func_sc05_017_80184B44(arg0) != 0) {
        RejectSpawn(arg0);
        return;
    }
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_801918BC) != 0) {
        MapPartsTmd((s32) &D_sc05_017_801D5AFC);
        D_sc05_017_801ECE80 = D_sc05_017_801D2C58;
        D_sc05_017_801D2C58 = D_sc05_017_801D5AFC;
        if (func_sc05_017_801848AC(7, 0xE) != 0) {
            AF(arg0, s16, 2) = 3;
            PlaceObject(arg0, (s32) &D_sc05_017_801918B4);
            ShowModel(arg0);
            SetScript(arg0, (s32) &D_sc05_017_801C0CFC);
            func_sc05_017_80184990(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801918AC);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = SpawnTalkMarker(arg0, (s32) &func_sc05_017_80181A4C);
    }
}

s32 *func_sc05_017_80181A4C(u8 *arg0) {
    s32 d;
    Mover *t;

    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    d = DistSqToPlayer(AF(arg0, void *, 0x64));
    if (d >= 0x4001) {
        return NULL;
    }
    t = FindActorByKind(0x372);
    if (t != 0 && t->state == 8 && DistSqToPlayer(t) < d) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), s16, 2)++;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 func_sc05_017_80181B04(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801919AC);
}

void func_sc05_017_80181B30(StageActor *arg0) {
    D_sc05_017_80191AA4[arg0->state]();
}

void func_sc05_017_80181B6C(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191A54);
}

void func_sc05_017_80181B98(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_801919E4[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_80181BD8(void) {
    if (func_sc05_017_80184B44() == 4) {
        if (!(GetFlag(0x124) & 0xFF)) {
            return 1;
        }
    }
    return 0;
}

void GiveItem28SetFlag124(void) {
    GiveItem(0x28);
    SetVar(0x8A, (GetVar(0x8A) & 0xFF) | 0x40);
    SetFlag(0x124, 1);
}

void func_sc05_017_80181C60(void) {
    if (func_sc05_017_80184B44() > 0) {
        AF(D_sc05_017_801ED90C, s32, 4) = 0x10;
    } else {
        AF(D_sc05_017_801ED90C, s32, 4) = 0x11;
    }
}

void func_sc05_017_80181CA4(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(7, 0x14) != 0) {
        func_sc05_017_80181B04((s32) arg0);
    }
}

void func_sc05_017_80181CF0(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
}

void func_sc05_017_80181D00(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801919AC);
    }
}

extern u8 D_sc05_017_801919BC;
extern u8 D_sc05_017_801919D0;
extern s32 *func_sc05_017_80181E0C();
void func_sc05_017_80181D50(StageActor *arg0) {
    s32 v;
    s32 r;

    v = func_sc05_017_80184B44(arg0);
    if (v == 0) {
        r = func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_801919BC);
    } else if (v == 1) {
        RejectSpawn(arg0);
        return;
    } else {
        r = func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_801919D0);
    }
    if (r != 0) {
        if (func_sc05_017_801848AC(7, 0x14) != 0) {
            arg0->state = 2;
        } else {
            arg0->state = 1;
        }
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801919AC);
        arg0->def->unkC = 0x7FFF;
        arg0->workD4 = SpawnTalkMarker(arg0, (s32) &func_sc05_017_80181E0C);
    }
}

s32 *func_sc05_017_80181E0C(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_sc05_017_801845DC() == 0) {
        return NULL;
    }
    if (func_sc05_017_80185F5C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 func_sc05_017_80181E90(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    PlaceObject(arg0, (s32) &D_sc05_017_80191AB8);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6564, 0, 0x60);
}

s32 func_sc05_017_80181F00(StageActor *arg0) {
    arg0->state = 3;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6578, 0, 0x40);
}

s32 func_sc05_017_80181F60(StageActor *arg0) {
    arg0->state = 6;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6564, 1, 0x60);
}

s32 func_sc05_017_80181FC0(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_017_80191B90);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6790, 1, 0x60);
}

void func_sc05_017_80182034(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_017_80191B90);
    HideModel(arg0);
    AF(arg0, s16, 0x98) = 0;
    func_sc05_017_801849B0(arg0);
}

void func_sc05_017_80182084(s32 arg0) {
    s32 temp_s1;

    func_sc05_017_80184B44(arg0);
    temp_s1 = GetProgress();
    if (func_sc05_017_80184B44() == 1) {
        RejectSpawn(arg0);
        return;
    }
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_80191AC8) != 0) {
        if (func_sc05_017_80184B44() == 3) {
            if (temp_s1 < 0x492) {
                if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) != 0) {
                    AF(arg0, s16, 2) = 8;
                    AF(arg0, s16, 0x34) = 0;
                    PlaceObject(arg0, (s32) &D_sc05_017_80191B90);
                    ShowModel(arg0);
                    SetScript(arg0, (s32) &D_sc05_017_801E4758);
                    func_sc05_017_80184990(arg0);
                } else {
                    AF(arg0, s16, 2) = 0xA;
                    AF(arg0, s16, 0x34) = 0;
                    PlaceObject(arg0, (s32) &D_sc05_017_80191B90);
                    HideModel(arg0);
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
                ShowModel(arg0);
                SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
                func_sc05_017_80184990(arg0);
                func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6578, 0, 0x40);
            } else {
                AF(arg0, s16, 2) = 1;
                func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191AB8);
            }
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = SpawnTalkMarker(arg0, (s32) &func_sc05_017_80182318);
    }
}

void func_sc05_017_80182234(StageActor *arg0) {
    D_sc05_017_80191C18[arg0->state]();
}

void func_sc05_017_80182270(StageActor *arg0) {
    arg0->state = 5;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191B18);
}

void func_sc05_017_8018229C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_sc05_017_80191ADC[func_sc05_017_80184B44(arg0)];
}

s32 func_sc05_017_801822DC(s32 arg0, s32 arg1) {
    if (!(GetFlag(0x115, arg1) & 0xFF)) {
        SetFlag(0x115, 1);
        return 1;
    }
    return 0;
}

s32 *func_sc05_017_80182318(u8 *o) {
    switch (AF(AF(o, u8 *, 0x64), u16, 2)) {
    case 3:
        if (DistSqToPlayer(AF(o, void *, 0x64)) >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        break;
    case 8:
        if (DistSqToPlayer(AF(o, void *, 0x64)) >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 0x34)++;
        break;
    default:
        return NULL;
    }
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

void func_sc05_017_801823D0(StageActor *arg0) {
    if (func_sc05_017_801848AC(9, 0x11) != 0) {
        func_sc05_017_80181E90(arg0);
    }
}

void func_sc05_017_80182410(StageActor *arg0) {
    if (func_sc05_017_80184CA4() != 0) {
        func_sc05_017_80181F00(arg0);
    }
}

void func_sc05_017_80182448(StageActor *arg0) {
    if (func_sc05_017_80184CA4(arg0) != 0) {
        if (func_sc05_017_801848AC(9, 0x11) == 0) {
            func_sc05_017_80181F60(arg0);
            return;
        }
        func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6578, 0, 0x40);
    }
}

void func_sc05_017_801824AC(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 3;
        SetScript(arg0, (s32) &D_sc05_017_801B9C0C);
    }
}

void func_sc05_017_801824FC(StageActor *arg0) {
    if (func_sc05_017_80184CA4(arg0) != 0) {
        arg0->state = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191AB8);
    }
}

void SetFlag115(void) {
    SetFlag(0x115, 1);
}

void func_sc05_017_80182564(u8 *o) {
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xC00, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += r;
        if (func_sc05_017_801848D0(0xA, 0xF, 0x12, 0) == 0) {
            func_sc05_017_80181FC0(o);
        }
        break;
    case 1:
        RunScript(o, &D_sc05_017_80191BA8);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            AF(o, s16, 2) = 8;
            AF(o, s16, 0x34) = 0;
            PlaceObject(o, &D_sc05_017_80191B90);
            ShowModel(o);
            SetScript(o, &D_sc05_017_801E4758);
            func_sc05_017_80184990(o);
        }
        break;
    }
}

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
            PlaceObject((s32) arg0, (s32) &D_sc05_017_80191B90);
            ShowModel((s32) arg0);
            SetScript((s32) arg0, (s32) &D_sc05_017_801E4758);
            func_sc05_017_80184990((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_80182750(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            arg0->stateCount = (u16) (arg0->stateCount + 1);
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
        PlaceObject((s32) arg0, (s32) &D_sc05_017_80191AB8);
        ShowModel((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc05_017_801B9C0C);
        func_sc05_017_80184990((s32) arg0);
        func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6778, 0, 0x60);
    }
}

s32 func_sc05_017_80182874(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
}

void func_sc05_017_801828A0(StageActor *arg0) {
    arg0->state = 2;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    arg0->stateCount = 0;
}

void func_sc05_017_801828EC(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (func_sc05_017_801858E0(4) != 0) {
            func_sc05_017_80184BD4(o, &D_sc05_017_801B65AC, 0, 0x40);
            o->stateCount = 1;
        }
        break;
    case 1:
        func_sc05_017_801858E0(4);
        if (func_sc05_017_80184CA4(o) != 0) {
            func_sc05_017_80184BD4(o, &D_sc05_017_801B65B8, 0, 0x40);
            o->stateCount = 2;
        }
        break;
    case 2:
        AF(o->ext0, s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4(o) != 0) {
            o->stateCount = 3;
        }
        break;
    case 3:
        if (func_sc05_017_801858E0(4) != 0) {
            o->stateCount = 4;
            func_sc05_017_80184BD4(o, &D_sc05_017_801B65AC, 1, 0x40);
        }
        break;
    case 4:
        func_sc05_017_801858E0(4);
        if (func_sc05_017_80184CA4(o) != 0) {
            o->state = 5;
            func_sc05_017_801849B8(o, &D_sc05_017_80191C44);
        }
        break;
    }
}

void func_sc05_017_80182A28(StageActor *arg0) {
    arg0->state = 9;
    arg0->stateCount = 0;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
}

void func_sc05_017_80182A74(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (func_sc05_017_801858E0(4) != 0) {
            func_sc05_017_80184BD4(o, &D_sc05_017_801B65AC, 0, 0x40);
            o->stateCount = 1;
        }
        break;
    case 1:
        func_sc05_017_801858E0(4);
        if (func_sc05_017_80184CA4(o) != 0) {
            func_sc05_017_80184BD4(o, &D_sc05_017_801B65B8, 1, 0x40);
            o->stateCount = 2;
        }
        break;
    case 2:
        AF(o->ext0, s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4(o) != 0) {
            o->stateCount = 3;
        }
        break;
    case 3:
        if (func_sc05_017_801858E0(4) != 0) {
            o->stateCount = 4;
            func_sc05_017_80184BD4(o, &D_sc05_017_801B65AC, 1, 0x40);
        }
        break;
    case 4:
        func_sc05_017_801858E0(4);
        if (func_sc05_017_80184CA4(o) != 0) {
            o->state = 0xC;
            func_sc05_017_801849B8(o, &D_sc05_017_80191C44);
        }
        break;
    }
}

void func_sc05_017_80182BB0(StageActor *arg0) {
    D_sc05_017_80191E84[arg0->state]();
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
    if (!(GetFlag(0x116, arg1) & 0xFF)) {
        SetFlag(0x116, 1);
        return 1;
    }
    return 0;
}

s32 func_sc05_017_80182CE8(s32 arg0) {
    return func_sc05_017_80184B44(arg0) == 1;
}

void func_sc05_017_80182D0C(StageActor *arg0) {
    arg0->state = 8;
    arg0->stateCount = 0;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191CF4);
}

void func_sc05_017_80182D3C(StageActor *arg0) {
    arg0->state = 0xE;
    arg0->stateCount = 0;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191D4C);
}

void func_sc05_017_80182D6C(StageActor *arg0) {
    arg0->state = 4;
    arg0->stateCount = 0;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191D6C);
}

void func_sc05_017_80182D9C(StageActor *arg0) {
    arg0->state = 0xB;
    arg0->stateCount = 0;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191E04);
}

void func_sc05_017_80182DCC(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(7, 0x10) == 0) {
        func_sc05_017_80182A28((s32) arg0);
    }
}

void func_sc05_017_80182E18(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 6;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
    }
}

void func_sc05_017_80182E68(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(0x10, 0x14) == 0) {
        func_sc05_017_80182874((s32) arg0);
    }
}

void func_sc05_017_80182EB4(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 0xC;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
    }
}

void func_sc05_017_80182F04(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(6, 0x14) != 0) {
        func_sc05_017_801828A0((s32) arg0);
    }
}

void func_sc05_017_80182F50(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(6, 7) == 0) {
        arg0->state = 6;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80191C44);
    }
}

void func_sc05_017_80182FA8(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
        arg0->stateCount = 2;
    }
}

void func_sc05_017_80183004(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 9;
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
        arg0->stateCount = 2;
    }
}

void func_sc05_017_8018305C(StageActor *arg0) {
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_80191C54) != 0) {
        if (func_sc05_017_801848AC(6, 7) != 0) {
            arg0->state = 5;
        } else if (func_sc05_017_801848AC(7, 0x10) != 0) {
            arg0->state = 6;
        } else if (func_sc05_017_801848AC(0x10, 0x14) != 0) {
            arg0->state = 0xC;
        } else {
            arg0->state = 1;
        }
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191C44);
        arg0->def->unkC = 0x7FFF;
        SpawnTalkMarker(arg0, (s32) &func_sc05_017_80183100);
    }
}

s32 *func_sc05_017_80183100(u8 *o) {
    s32 r;

    switch (AF(AF(o, u8 *, 0x64), u16, 2)) {
    case 6:
    case 0xC:
        r = func_sc05_017_801845DC(o);
        break;
    case 2:
    case 9:
        if (AF(AF(o, u8 *, 0x64), u16, 0x34) != 2) {
            return NULL;
        }
        r = DistSqToPlayer(AF(o, u8 *, 0x64)) < 0x4001;
        break;
    default:
        return NULL;
    }
    if (r == 0) {
        return NULL;
    }
    AF(AF(o, u8 *, 0x64), u16, 2) += 1;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 *func_sc05_017_801831C8(u8 *o) {
    u8 *p = AF(o, u8 *, 0x64);

    switch (AF(p, u16, 2)) {
    case 2:
        if (func_sc05_017_801845DC(o) == 0) {
            return NULL;
        }
        if (func_sc05_017_80185F5C((s32) AF(o, void *, 0x64)) != 0) {
            return NULL;
        }
        goto next;
    case 5:
        if (AF(p, u16, 0x34) != 1) {
            break;
        }
        goto check;
    case 0xB:
        if (AF(p, u16, 0x34) != 0) {
            return NULL;
        }
    case 8:
    check:
        if (DistSqToPlayer() >= 0x4001) {
            return NULL;
        }
    next:
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        ResetScriptVM();
        return (s32 *) &CallActionHandler;
    }
    return NULL;
}

s32 func_sc05_017_801832C4(StageActor *arg0) {
    arg0->state = 5;
    arg0->stateCount = 0;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
    return func_sc05_017_80184BD4(arg0, (s32) &D_sc05_017_801B6800, 0, 0x60);
}

void func_sc05_017_80183328(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    PlaceObject(arg0, (s32) &D_sc05_017_80191EC8);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B990C);
    func_sc05_017_80184990(arg0);
}

void func_sc05_017_80183380(StageActor *arg0) {
    D_sc05_017_80191F98[arg0->state]();
}

void func_sc05_017_801833BC(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191F38);
}

void func_sc05_017_801833E8(StageActor *arg0) {
    arg0->state = 7;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191F70);
}

void func_sc05_017_80183414(StageActor *arg0) {
    arg0->state = 0xD;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191F70);
}

void func_sc05_017_80183440(StageActor *arg0) {
    arg0->state = 0xA;
    RunScript((s32) arg0, (s32) &D_sc05_017_80191F70);
}

void func_sc05_017_8018346C(s32 arg0) {
    AF(D_sc05_017_801ED90C, s32, 4) = D_sc05_017_80191F24[func_sc05_017_80184B44(arg0)];
}

void func_sc05_017_801834A4(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848D0(0xB, 0, 0x17, 0) != 0) {
        func_sc05_017_801832C4((s32) arg0);
    }
}

void func_sc05_017_801834F8(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848D0(0xE, 0xF, 0x17, 0) == 0) {
        arg0->state = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80191EC0);
    }
}

void func_sc05_017_80183558(StageActor *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((func_sc05_017_801858E0(0x10, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B680C, 0, 0x60);
            arg0->stateCount = 1U;
            return;
        }
        return;
    case 1:
        AF(arg0->ext0, s32, 0xB0) = 2;
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80183328((s32) arg0);
        }
        break;
    }
}

void func_sc05_017_801835FC(StageActor *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc05_017_80184CA4((s32) arg0) != 0) {
            func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B6800, 1, 0x60);
            arg0->stateCount = 1U;
            return;
        }
        return;
    case 1:
        if ((func_sc05_017_801858E0(0x10, arg1, arg2) != 0) && (func_sc05_017_80184CA4((s32) arg0) != 0)) {
            arg0->state = 2;
            func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80191EC0);
        }
        break;
    }
}

void func_sc05_017_801836A4(StageActor *arg0) {
    if (func_sc05_017_801848D0(0xB, 0, 0xE, 0xF) == 0) {
        arg0->state = 0xB;
        arg0->stateCount = 0;
        ShowModel((s32) arg0);
        SetScript((s32) arg0, (s32) &D_sc05_017_801B9964);
        func_sc05_017_80184990((s32) arg0);
        func_sc05_017_80184BD4((s32) arg0, (s32) &D_sc05_017_801B680C, 1, 0x60);
    }
}

void func_sc05_017_80183724(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191EC0);
    }
}

void func_sc05_017_80183774(StageActor *arg0) {
    if (UpdateScript() != 0) {
        EndEvent(arg0);
        arg0->state = 5;
        arg0->stateCount = 1;
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
    }
}

void func_sc05_017_801837D4(StageActor *arg0) {
    if (UpdateScript() != 0) {
        EndEvent(arg0);
        arg0->state = 0xB;
        arg0->stateCount = 0;
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
    }
}

void func_sc05_017_80183830(s32 arg0) {
    if (UpdateScript() != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 8;
        PlaceObject(arg0, (s32) &D_sc05_017_80191EC8);
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc05_017_801B990C);
        func_sc05_017_80184990(arg0);
    }
}

extern u8 D_sc05_017_80191ED0;
void func_sc05_017_801838A0(u8 *o) {
    if (func_sc05_017_801844BC(o, &D_sc05_017_80191ED0) == 0) {
        return;
    }
    if (func_sc05_017_801848D0(0xB, 0, 0xE, 0xF) != 0) {
        AF(o, s16, 2) = 8;
        PlaceObject((s32) o, (s32) &D_sc05_017_80191EC8);
        ShowModel((s32) o);
        SetScript(o, (s32) &D_sc05_017_801B990C);
        func_sc05_017_80184990((s32) o);
    } else {
        if (func_sc05_017_801848D0(0xE, 0xF, 0x17, 0) != 0) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 1;
        }
        func_sc05_017_801849B8((s32) o, (s32) &D_sc05_017_80191EC0);
    }
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    AF(o, s32, 0xD4) = SpawnTalkMarker(o, func_sc05_017_801831C8);
}

s32 func_sc05_017_80183980(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191FD0);
}

void func_sc05_017_801839AC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_017_80191FD0);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_017_801B9964);
    func_sc05_017_80184990(arg0);
}

void func_sc05_017_80183A08(StageActor *o) {
    if (func_sc05_017_80184B44(o) == 1) {
        switch (o->stateCount) {
        case 0:
            if (func_sc05_017_801858E0(5) != 0) {
                func_sc05_017_80184BD4(o, &D_sc05_017_801B6670, 0, 0x70);
                o->stateCount = 1;
            }
            break;
        case 1:
            func_sc05_017_801858E0(5);
            if (func_sc05_017_80184CA4(o) != 0) {
                D_sc05_017_801ECE88 = 0;
                func_sc05_017_80184BD4(o, &D_sc05_017_801B8158, 0, 0x70);
            o->stateCount = 2;
            AF(o->ext0, s16, 0x108) = 0;
            AF(o->ext0, s32, 0xB0) = 2;
            }
            break;
        case 2:
            switch (D_sc05_017_801ECE88) {
            case 0:
                if (func_sc05_017_80184CA4(o) != 0) {
                    D_sc05_017_801ECE88++;
                    func_sc05_017_80184BD4(o, &D_sc05_017_801B8180, 0, 0x70);
                }
                break;
            case 1:
                if (func_sc05_017_80184CA4(o) != 0) {
                    if (func_sc05_017_801848AC(8, 0x14) != 0) {
                        func_sc05_017_80184BD4(o, &D_sc05_017_801B8180, 0, 0x70);
                    } else {
                        func_sc05_017_80184BD4(o, &D_sc05_017_801B8158, 1, 0x70);
                        D_sc05_017_801ECE88++;
                    }
                }
                break;
            case 2:
                if (func_sc05_017_80184CA4(o) != 0) {
                    o->stateCount = 3;
                    D_sc05_017_801ECE88 = 0;
                }
                break;
            }
            break;
        case 3:
            if (func_sc05_017_801858E0(5) != 0) {
                o->stateCount = 4;
                func_sc05_017_80184BD4(o, &D_sc05_017_801B6670, 1, 0x70);
            }
            break;
        case 4:
            func_sc05_017_801858E0(5);
            if (func_sc05_017_80184CA4(o) != 0) {
                func_sc05_017_80183980((s32)o);
            }
            break;
        }
    } else {
        switch (o->stateCount) {
        case 0:
            if (func_sc05_017_801858E0(5) != 0) {
                func_sc05_017_80184BD4(o, &D_sc05_017_801B6670, 0, 0x70);
                o->stateCount = 1;
            }
            break;
        case 1:
            func_sc05_017_801858E0(5);
            if (func_sc05_017_80184CA4(o) != 0) {
                func_sc05_017_80184BD4(o, &D_sc05_017_801B667C, 1, 0x70);
            o->stateCount = 2;
            AF(o->ext0, s16, 0x108) = 0;
            AF(o->ext0, s32, 0xB0) = 2;
            }
            break;
        case 2:
            if (func_sc05_017_80184CA4(o) != 0) {
                o->stateCount = 3;
            }
            break;
        case 3:
            if (func_sc05_017_801858E0(5) != 0) {
                o->stateCount = 4;
                func_sc05_017_80184BD4(o, &D_sc05_017_801B6670, 1, 0x70);
            }
            break;
        case 4:
            func_sc05_017_801858E0(5);
            if (func_sc05_017_80184CA4(o) != 0) {
                func_sc05_017_80183980((s32)o);
            }
            break;
        }
    }
}

void func_sc05_017_80183CC0(StageActor *arg0) {
    D_sc05_017_80192140[arg0->state]();
}

void func_sc05_017_80183CFC(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc05_017_801920BC);
}

void func_sc05_017_80183D28(StageActor *arg0) {
    arg0->state = 7;
    RunScript((s32) arg0, (s32) &D_sc05_017_80192110);
}

void func_sc05_017_80183D54(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        D_sc05_017_801ED7FC = 0x1E;
        arg0->state = 5;
        arg0->stateCount = 2;
        SetScript(arg0, (s32) &D_sc05_017_801B9964);
    }
}

s32 SetFlag12D(void) {
    SetFlag(0x12D, 1);
    return D_sc05_017_801ED800 == 1;
}

void func_sc05_017_80183DEC(void) {
    AddPlayerMoney(0x3C);
}

void func_sc05_017_80183E0C(s32 arg0) {
    AF(D_sc05_017_801ED90C, s32, 4) = D_sc05_017_80192090[func_sc05_017_80184B44(arg0)];
}

extern u8 D_sc05_017_8019200C;
extern u8 D_sc05_017_80192048;
extern u8 D_sc05_017_801920A4;
void PickSceneByProgress(void) {
    s32 v;

    v = GetProgress();
    if (v == 0x3AC) {
        AF(D_sc05_017_801ED90C, void *, 4) = &D_sc05_017_8019200C;
    } else if ((u32)(v - 0x3E8) < 0x64 && !(GetFlag(0x12D) & 0xFF)) {
        AF(D_sc05_017_801ED90C, void *, 4) = &D_sc05_017_80192048;
    } else {
        AF(D_sc05_017_801ED90C, void *, 4) = &D_sc05_017_801920A4;
    }
}

s32 func_sc05_017_80183ED4(s32 arg0) {
    return func_sc05_017_80184B44(arg0) == 1;
}

void func_sc05_017_80183EF8(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(8, 0x14) != 0) {
        func_sc05_017_80183980((s32) arg0);
    }
}

void func_sc05_017_80183F44(StageActor *o) {
    AF(o->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(8, 0x14) == 0) {
        o->state = 1;
        func_sc05_017_801849B8((s32) o, (s32) &D_sc05_017_80191FD0);
        return;
    }
    if (func_sc05_017_80184B44() == 1) {
        func_sc05_017_801839AC(o);
        return;
    }
    if (func_sc05_017_801848D0(0xA, 0, 0xA, 0x1E) != 0 || func_sc05_017_801848D0(0xF, 0, 0xF, 0x1E) != 0) {
        AF(o, u8, 0x105) = o->state;
        func_sc05_017_801839AC(o);
    }
}

void func_sc05_017_80184004(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80191FD0);
    }
}

extern u8 D_sc05_017_80191FD8;
extern s32 *func_sc05_017_801840DC(u8 *o);
void func_sc05_017_80184054(StageActor *o) {
    if (func_sc05_017_801844BC(o, &D_sc05_017_80191FD8) != 0) {
        D_sc05_017_801ECE88 = 0;
        if (func_sc05_017_801848AC(8, 0x14) != 0) {
            o->state = 2;
        } else {
            o->state = 1;
        }
        func_sc05_017_801849B8(o, &D_sc05_017_80191FD0);
        o->def->unkC = 0x7FFF;
        o->workD4 = SpawnTalkMarker(o, func_sc05_017_801840DC);
    }
}

s32 *func_sc05_017_801840DC(u8 *o) {
    u8 *p = AF(o, u8 *, 0x64);

    switch (AF(p, u16, 2)) {
    case 2:
        if (func_sc05_017_801845DC(o) == 0) {
            return NULL;
        }
        if (func_sc05_017_80185F5C((s32) AF(o, void *, 0x64)) != 0) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2) = 3;
        break;
    case 5:
        if (D_sc05_017_801ED7FC != 0) {
            return NULL;
        }
        if (AF(p, u16, 0x34) != 2) {
            return NULL;
        }
        if (DistSqToPlayer() >= 0x4001) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 2) = 6;
        break;
    default:
        return NULL;
    }
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 func_sc05_017_801841B8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80192160);
}

void func_sc05_017_801841E4(StageActor *arg0) {
    D_sc05_017_801921D8[arg0->state]();
}

void func_sc05_017_80184220(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc05_017_801921A0);
}

void func_sc05_017_8018424C(s32 arg0) {
    AF(D_sc05_017_801ED90C, s32, 4) = D_sc05_017_8019218C[func_sc05_017_80184B44(arg0)];
}

void func_sc05_017_80184284(StageActor *arg0) {
    if (func_sc05_017_801848AC(8, 0x14) != 0) {
        func_sc05_017_801841B8(arg0);
    }
}

void func_sc05_017_801842C4(StageActor *arg0) {
    if (func_sc05_017_801848AC(8, 0x14) == 0) {
        arg0->state = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_80192160);
    }
}

void func_sc05_017_80184310(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80192160);
    }
}

void func_sc05_017_80184360(StageActor *arg0) {
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_80192168) != 0) {
        if (func_sc05_017_801848AC(8, 0x14) != 0) {
            arg0->state = 2;
        } else {
            arg0->state = 1;
        }
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_80192160);
        arg0->def->unkC = 0x7FFF;
        arg0->workD4 = SpawnTalkMarker(arg0, (s32) &func_sc05_017_801843E0);
    }
}

s32 *func_sc05_017_801843E0(u8 *arg0) {
    s32 t;
    s32 ok;

    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    t = FindActorByKind(0x37D);
    if (t == 0) {
        ok = 1;
    } else {
        ok = 1;
        if (AF(t, u16, 2) == 5) {
            ok = AF(t, u16, 0x34) == 2;
        }
    }
    if (ok == 0) {
        return NULL;
    }
    if (func_sc05_017_801845DC(arg0) == 0) {
        return NULL;
    }
    if (func_sc05_017_80185F5C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 3;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

void func_sc05_017_8018449C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc05_017_801844AC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc05_017_801844BC(StageActor *arg0, s32 arg1) {
    s16 temp_a1;
    ModelObj *temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc05_017_801B8564;
    }
    arg0->ext1 = var_s0;
    if (AF(var_s0, s32, 0) != 0) {
        temp_v0 = AllocActorModel();
        arg0->model = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return 0;
        }
        InitModel(temp_v0, AF(var_s0, s32, 0));
        goto block_6;
    }
block_6:
    temp_a1 = AF(var_s0, s16, 0x12);
    if (temp_a1 != -1) {
        arg0->ext0 = FindActorByKindArg(0x61, (s32) temp_a1);
    }
    return 1;
}

void func_sc05_017_80184558(StageActor *arg0) {
    SetScript((s32) arg0, AF(arg0->ext1, s32, 4));
}

s32 func_sc05_017_80184584(StageActor *arg0) {
    return SetScript(arg0, AF(arg0->ext1, s32, 8));
}

void func_sc05_017_801845B0(StageActor *arg0) {
    SetScript((s32) arg0, AF(arg0->ext1, s32, 0xC));
}

s32 func_sc05_017_801845DC(u8 *arg0) {
    s32 o[2];
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x64);
    if (AF(AF(p, void *, 0xCC), u16, 2) != 2) {
        return 0;
    }
    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    WorldToActorLocal((s32) AF(p, void *, 0xCC), (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0xC0, 0x40, -0x60, 0);
}

s32 func_sc05_017_80184660(o)
    u8 *o;
{
    u8 *g;
    s32 k;
    s32 n, q, r, i;
    s32 h, dd;
    g = &g_Status;
    k = D_sc05_017_801B8678[AF(AF(o, u8 *, 0xD0), s16, 0x10)];
    if (k == -1) {
        D_sc05_017_801ED7F8[0] = 0;
        return 0;
    }
    n = func_sc05_017_80184804();
    h = g_ClockHour;
    q = n / 24;
    r = n % 24;
    dd = g_Day;
    if (n == 0) {
        i = D_sc05_017_801B86AC[h] - 1;
    } else if (dd - q >= 5) {
        i = 7;
    } else if (dd == q && h - r >= 2) {
        i = 6;
    } else {
        i = AF(g, u8, 0x39);
        i = D_sc05_017_801B86AC[i] - 1;
    }
    D_sc05_017_801ED7F8[0] = 1;
    return D_sc05_017_801B8578[i][k];
}

void func_sc05_017_80184790(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc05_017_80184660();
    func_sc05_017_801847C4((s32) arg0);
}

void func_sc05_017_801847C4(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = g_ClockHour + (g_Day * 0x18);
}

s16 func_sc05_017_80184804(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc05_017_8018482C(StageActor *arg0) {
    D_sc05_017_801B86DC[arg0->state]();
}

void func_sc05_017_80184868(void) {
}

void func_sc05_017_80184870(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) g_ClockHour >= arg1 && (s32) g_ClockHour < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc05_017_801848AC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) g_ClockHour >= arg0) {
        var_v0 = (s32) g_ClockHour < arg1;
    }
    return var_v0;
}

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
extern u8 D_sc05_017_801EF7F0;
extern s16 D_sc05_017_801ED5EC;
extern u8 *D_sc05_017_801E9B7C[];
extern u8 D_sc05_017_801E9B74[];
extern W80115118 D_80115118;
extern s32 D_sc05_017_801B9224[];
extern s32 GetAverageLevel();
extern s16 D_sc05_017_801B940C[];
extern s32 *func_sc05_017_801F0C4C();
extern u8 D_sc05_017_801ED574[];
extern u8 D_sc05_017_801EF13C;
extern u8 D_sc05_017_801EF168;
extern u8 D_sc05_017_801EF52C;
extern u16 D_800B99D8[];
extern s32 D_sc05_017_801B93E4[];
extern s32 D_sc05_017_801B93F8[];
extern s32 D_sc05_017_801B9414[];
extern s16 g_ClockMinutes;
extern u8 D_sc05_017_801B923E;
extern u8 D_sc05_017_801B9240;
extern u8 D_sc05_017_801B924A;
extern u8 D_sc05_017_801B924C;
extern u8 D_sc05_017_801B9256;
extern u8 D_sc05_017_801B9258;
extern u8 D_sc05_017_801B9262;
extern u8 D_sc05_017_801B9264;
extern s32 ToBcd();
extern u8 D_8011514A;
extern u8 D_8011514C;
extern s16 D_8011515A[];
extern s16 D_8011515C;
extern s16 D_8011515E;
extern u8 D_sc05_017_801EB724[];
extern u8 D_sc05_017_801EB744[];
extern u8 D_sc05_017_801EB764[];
extern u8 D_sc05_017_801EB544[];
extern u8 D_sc05_017_801EB788[];
extern u8 D_sc05_017_801ECE94[][0x24];
extern u8 D_sc05_017_801ECEAF[][0x24];
extern u8 D_sc05_017_801ECF14[];
extern u8 D_sc05_017_801ED0D4[][0x24];
extern u8 D_sc05_017_801ED0EA[][0x24];
extern u8 D_sc05_017_801ED0EF[][0x24];
extern u8 D_sc05_017_801ED314[][0x24];
extern u8 D_sc05_017_801ED318[][0x24];
extern u8 D_sc05_017_801ED320[][0x24];
extern u8 D_sc05_017_801B9288[];
extern u8 *D_sc05_017_801B9268[];
extern u8 D_sc05_017_801B9290[];
extern u8 D_sc05_017_801B9298[];
extern u8 *D_sc05_017_801B8EC8;
extern u8 *D_sc05_017_801B8ECC[];
extern u8 *D_sc05_017_801B8ED0[];
extern u8 *D_sc05_017_801B8F00;
extern u8 *D_sc05_017_801B8E40[];
extern s32 g_BgmPackPlaying;
extern s16 D_sc05_017_801ED5F8;
extern s16 D_sc05_017_801ED5FC;
extern s16 D_sc05_017_801ED600;
extern s16 D_sc05_017_801ED604;
extern s16 D_sc05_017_801ED608;
extern s16 D_sc05_017_801ED60C;
extern s32 *D_sc05_017_801ED5D8;
extern u8 D_sc05_017_801EF194;
extern u8 D_sc05_017_801F27B0;
extern s32 D_sc05_017_801B9428[];
extern u8 D_sc05_017_801B9460[];
extern void ShowItemIcon();
extern s32 GetPadPressedDir();
extern s32 func_sc05_017_80189B54(s32 arg0);

typedef union { s16 w; struct { u8 lo, hi; } b; } ClockDiff;

s32 func_sc05_017_801848D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    ClockDiff lo;
    ClockDiff hi;

    lo.b.hi = a0;
    lo.b.lo = a1;
    hi.b.hi = a2;
    hi.b.lo = a3;
    if (lo.w <= *(s16 *)&g_ClockMinute) {
        if (*(s16 *)&g_ClockMinute < hi.w) {
            return 1;
        }
    }
    return 0;
}

void func_sc05_017_80184928(StageActor *o, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;

    a.x = (u16)o->pos[0].h.i;
    a.y = (u16)o->pos[1].h.i;
    a.z = (u16)o->pos[2].h.i;
    b.x = 0;
    b.y = 0;
    b.z = -n;
    FaceHelper(o, &b, &c);
    CollidePath(&a, &c, 0);
}

void func_sc05_017_80184990(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_017_801B86E4 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc05_017_801849B0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc05_017_801849B8(s32 arg0, s32 arg1) {
    HideModel(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    PlaceObject(arg0, arg1);
}

s32 func_sc05_017_80184A00(void) {
    s32 r;

    r = GetProgress();
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

s32 func_sc05_017_80184A5C(void) {
    s32 r;

    r = GetProgress();
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

s32 func_sc05_017_80184AD0(void) {
    s32 r;

    r = GetProgress();
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

s32 func_sc05_017_80184B44(void) {
    s32 r;

    r = GetProgress();
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

void func_sc05_017_80184BA0(s32 arg0, s32 arg1) {
    if (GetProgress(arg0, arg1) == 0x3A2) {
        SetProgress(0x3AC);
    }
}

s32 func_sc05_017_80184BD4(u8 *o, s16 *t, s32 mode, s32 b) {
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
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPoint(o + 4, &v);
    return StopMotion(o);
}

s32 func_sc05_017_80184CA4(u8 *a) {
    SV8 t;
    s32 s;

    if (GetPlayerAction(a) != 0) {
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
    if (IsPlayerAsleep() != 0) {
        AF(AF(a, u8 *, 0x20), s16, 0x12) = HeadingToPoint(a + 4, &t);
        s *= 8;
    } else {
        AF(AF(a, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(a, u8 *, 0x20), s16, 0x12), HeadingToPoint(a + 4, &t), 4);
    }
    SetForwardVelocity(a, -s);
    MoveObject(a);
    AF(a, u16, 0xA) -= 0x10;
    SnapToGround(a);
    if (IsPlayerAsleep() != 0) {
        if (GroundDistSqTo(a, &t) <= 0x1000) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    } else {
        if (GroundDistSqTo(a, &t) <= 0x100) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    }
    return 0;
}

s32 func_sc05_017_80184E6C(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (IsPlayerAsleep() != 0) {
        return 2;
    }
    return 1;
}

void func_sc05_017_80184EB4(StageActor *arg0) {
    D_sc05_017_801B86FC[arg0->state]();
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

void func_sc05_017_80184F18(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ZeroFill((s32) &D_sc05_017_801ED8E8, 0x14, arg2, arg3);
    D_sc05_017_801ED7FC = 0;
    RejectSpawn(arg0);
}

void func_sc05_017_80184F5C(void) {
}

void func_sc05_017_80184F64(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc05_017_801C0394);
    SetModelCullBox(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    PlaceObject(arg0, (s32) &D_sc05_017_801B86F4);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_017_80184FEC(StageActor *a) {
    s16 v;
    s16 w;
    u32 k;

    v = a->work10A;
    if (v > 0) {
        a->work10A = v - 1;
    }
    w = a->work108;
    if (w != 0) {
        a->step = w;
        a->work108 = 0;
    }
    k = (u32)a->step;
    switch (k) {
    case 1:
        if ((a->state != 2 || a->stateCount == 0) && AF(a, s16, 0xEA) != k) {
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
        if ((a->state != 2 || a->stateCount == 0) && AF(a, s16, 0xEA) != k) {
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
        if (a->state != 2 || a->stateCount == 0) {
            func_sc05_017_80185604(a);
        }
        break;
    case 4:
        if (a->state != 2 || a->stateCount == 0) {
            func_sc05_017_8018559C(a);
        }
        break;
    }
    D_sc05_017_801B89D4[a->state](a);
}

void func_sc05_017_801851C4(StageActor *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    a->model = m = AllocActorModel(a, arg1);
    if (m == 0) {
        RejectSpawn(a);
        return;
    }
    k = a->param;
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
        InitModel(m, *(s32 *)((u8 *)D_sc05_017_801B8704 + *p * 8));
        break;
    }
    MapPartsTmd(*(s32 *)((u8 *)D_sc05_017_801B8708 + *p * 8));
    SetModelCullBox(a->model, 0xC8, 0xB4);
    a->hitData = (u32)&D_sc05_017_801B871C | 0x40000000;
    a->hitState = 0x800;
    a->model->pose = &D_sc05_017_801B8738;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc05_017_801B872C;
    a->work10A = 6;
    func_sc05_017_8018559C(a);
    a->message = func_sc05_017_8018596C;
}

void func_sc05_017_80185364(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        func_sc05_017_80185A70(o);
        o->stateCount = 2;
        break;
    case 2:
        if (IsEventDone((s32) o) != 0) {
            EndEvent((s32) o);
            o->stateCount = 0;
        }
        break;
    }
}

void func_sc05_017_801853E0(StageActor *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc05_017_80184E6C() == 2) {
        func_sc05_017_80185604(arg0);
    }
    temp_v0 = (u16)arg0->unk84 + 1;
    arg0->unk84 = temp_v0;
    if ((s16) temp_v0 == 8) {
        PlaySoundAtActor(arg0, 0x514, 0);
    }
    temp_v0_2 = (u16)arg0->work100 + (u16)arg0->work102;
    arg0->work100 = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x50) {
        arg0->work100 = 0x50U;
    }
    temp_v0_3 = (u16)arg0->workFE + (u16)arg0->work100;
    arg0->workFE = temp_v0_3;
    if ((s16) temp_v0_3 >= 0x600) {
        func_sc05_017_80185604(arg0);
    }
    func_sc05_017_80185BEC(arg0);
}

void func_sc05_017_801854AC(StageActor *arg0) {
    func_sc05_017_80185BEC(arg0);
}

void func_sc05_017_801854CC(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc05_017_80184E6C() == 2) {
        func_sc05_017_8018559C(arg0);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (TickTimer(arg0) != 0) {
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
            PlaySoundAtActor(arg0, 0x515, 0);
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

void func_sc05_017_80185758(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *end;

    p = (u8 *)&g_Actors;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (*(u16 *)p == 0x61 && AF(p, s16, 0x70) == arg0) {
            AF(p, s32, 0xB0) = arg1;
            return;
        }
    }
}

void func_sc05_017_801857B0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc05_017_80185D2C(arg0, 0x3C);
    }
}

void func_sc05_017_80185810(s16 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc05_017_80185858(s32 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc05_017_80185D2C(arg0, 0x3C);
    }
}

void func_sc05_017_801858A8(s16 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

s32 func_sc05_017_801858E0(s32 arg0) {
    s32 t;

    t = FindActorByKindArg(0x61, (s16) arg0);
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

void *func_sc05_017_8018596C(StageActor *o) {
    if (D_800B9A08 == 0x3069) return 0;
    if (o->state != 2) return 0;
    if (o->stateCount != 0) return 0;
    if (o->work10A != 0) return 0;
    if (!func_sc05_017_80185A10(o)) return 0;
    if (func_sc05_017_80185FA8(o)) return 0;
    o->stateCount = 1;
    ResetScriptVM();
    return &CallActionHandler;
}

s32 func_sc05_017_80185A10(StageActor *arg0) {
    s32 o[2];
    FeSv v;

    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    WorldToActorLocal(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

void func_sc05_017_80185A70(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &g_Status;
    v = GetProgress();
    s0 = D_sc05_017_801B898C[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_sc05_017_801B895C;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_sc05_017_801B895C;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)GetFlag(0xFA) != 0) s0 = &D_sc05_017_801B8974;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_sc05_017_801B895C;
        if ((u32)(v - 100) < 500) s0 = &D_sc05_017_801B8974;
        if (func_sc05_017_80184B44() == 1) s0 = &D_sc05_017_801B8974;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_sc05_017_801B895C;
        if (func_sc05_017_80184A00() == 3) s0 = &D_sc05_017_801B8974;
        if (func_sc05_017_80184B44() == 1) s0 = &D_sc05_017_801B8974;
        break;
    }
    RunScript(o, s0);
}

s32 func_sc05_017_80185BEC(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc05_017_80185C20(arg0);
}

s32 func_sc05_017_80185C20(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_sc05_017_80185C54(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc05_017_80185CB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc05_017_80185D2C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc05_017_80185D84(StageActor *arg0) {
    D_sc05_017_801B89F8[arg0->state]();
}

void func_sc05_017_80185DC0(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->hitData = (s32) ((s32) &D_sc05_017_801B89E8 | 0x40000000);
    arg0->stateCount = 0;
    arg0->timer = 0;
    arg0->hitState = 0x800;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc05_017_80185E3C(StageActor *o) {
    u8 *p;
    u8 *best;
    s32 min;
    s32 d;
    u8 *end;
    p = &g_Actors;
    min = 0x7FFF;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0x61) {
            d = DistSqToPlayer(p);
            if (d < min) {
                min = d;
                best = p;
            }
        }
    }
    if (min == 0x7FFF) {
        o->hitState = 0;
        return;
    }
    p = best;
    o->pos[0].w = AF(p, s32, 4);
    o->pos[1].w = AF(p, s32, 8);
    o->pos[2].w = AF(p, s32, 0xC);
    AF(o->model, SV8, 0x10) = AF(AF(p, u8 *, 0x20), SV8, 0x10);
    o->model->rot.vy -= AF(p, u16, 0xFE);
    o->hitState = 0x800;
}

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

s32 func_sc05_017_80185FA8(StageActor *o) {
    SV8 xy;
    SV8 v;
    u8 *p;
    u8 *q;
    u8 *end;
    p = &g_Actors;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0) continue;
        if (AF(p, u16, 0) == 0x61) continue;
        if (func_sc05_017_801860B4(p) == 0) continue;
        q = AF(p, u8 *, 0x20);
        if (q == 0) continue;
        if (AF(q, s32, 0x24) == 0) continue;
        if (AF(q, s32, 4) < 0) continue;
        v.x = AF(p, s16, 6);
        v.y = AF(p, s16, 0xA);
        v.z = AF(p, s16, 0xE);
        WorldToActorLocal(o, &v, &xy);
        if (func_8012CB64(&xy, -0xA0, 0x80, -0xC0, 0x80)) return 1;
    }
    return 0;
}

s32 func_sc05_017_801860B4(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_sc05_017_801B8A00; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

void func_sc05_017_80186110(StageActor *arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc05_017_801B8794, (s32) sp10);
    AF(D_sc05_017_801ED90C, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

s16 func_sc05_017_80186150(void) {
    return D_sc05_017_801ECE90;
}

void func_sc05_017_80186160(s32 arg0) {
    D_800B9A15 = 1;
    D_800B9A13 = 4;
    g_Subscreen.unk0 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    g_SubscreenHook = func_sc05_017_801861AC;
}

void func_sc05_017_801861AC(void) {
    TickPlayTime();
    func_801754A8();
    D_sc05_017_801B946C[D_80115112]();
    StageModeNop();
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

void func_sc05_017_80186270(void) {
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

    D_sc05_017_801ECE90 = 0;
    D_80115118.f0 = 0;
    D_sc05_017_801ED5F4 = 0;
    v = GetProgress();
    D_80115134 = D_sc05_017_801B9224[D_80115126];
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
        if (GetFlag(0x11D) & 0xFF) {
            GiveItem(0x23);
            if ((GetFlag(0x1D) & 0xFF) && (GetFlag(0x1E) & 0xFF) && (GetFlag(0x1F) & 0xFF)
                && (GetFlag(0x20) & 0xFF) && (GetFlag(0x21) & 0xFF)
                && ((GetFlag(0x1B) & 0xFF) || (GetFlag(0x1C) & 0xFF))) {
                GiveItem(0x29);
            }
            if (GetAverageLevel() >= 0x1B) {
                GiveItem(0x2A);
            }
            i = 0;
            j = 0;
            for (; i < 0x2A; i++) {
                if (GetVar(i + 0x63) & 0x40) {
                    j++;
                }
            }
            if (j >= 0x2A) {
                GiveItem(0x2B);
            }
        }
        n = 0;
        for (i = 0; i < 7; i++) {
            D_sc05_017_801ED610[i] = 0;
        }
        for (j = 0; j < 4; j++) {
            if (v < D_sc05_017_801B940C[j]) {
                break;
            }
        }
        m = j + 2;
        if (GetFlag(0x11D) & 0xFF) {
            m = 6;
        }
        for (i = 0; i < m; i++) {
            found = 0;
            p = D_sc05_017_801E9B7C[i];
            j = 0;
            if (D_sc05_017_801E9B74[i] != 0) {
                do {
                    if (GetVar(*p++ + 0x62) & 0x80) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc05_017_801E9B74[i]);
            }
            if (found) {
                D_sc05_017_801ED610[n++] = i;
            }
        }
        found = 0;
        p = D_sc05_017_801E9B7C[6];
        j = 0;
        if (D_sc05_017_801E9B74[6] != 0) {
            do {
                if (GetVar(*p++ + 0x62) & 0x80) {
                    found = 1;
                    break;
                }
                j++;
            } while (j < D_sc05_017_801E9B74[6]);
        }
        if (found) {
            D_sc05_017_801ED610[n++] = 6;
        }
        D_80115118.f40.h[1] = n | 0x100;
    }
    for (i = 0; i < 6; i++) {
        D_sc05_017_801ED5D4[i] = 0;
    }
    if (D_80115126 == 4) {
        rec = func_sc05_017_801F0C4C();
        if (rec != 0) {
            i = 0;
            do {
                t = rec[2];
                if ((u32)(t - 10) < 2) {
                    D_sc05_017_801ED5D4[t - 6] = rec;
                } else {
                    D_sc05_017_801ED5D4[i++] = rec;
                }
                rec += 4;
            } while (rec[-4] != 0);
        }
    }
    if (D_80115126 == 5) {
        rec = (s32 *)D_sc05_017_801ED574;
        for (i = 0; i < 6; i++) {
            switch (i) {
            case 0:
                rec[2] = 9;
                if (v < 600) {
                    rec[1] = (s32)&D_sc05_017_801EF13C;
                } else {
                    rec[1] = (s32)&D_sc05_017_801EF168;
                }
                D_sc05_017_801ED5D4[0] = rec;
                break;
            case 1:
                rec[2] = 0xB;
                if ((GetFlag(0x11A) & 0xFF) && g_Money >= 0x32U) {
                    rec[1] = (s32)&D_sc05_017_801EF7F0;
                } else {
                    SetFlag(0x11A, 0);
                    rec[1] = (s32)&D_sc05_017_801EF52C;
                }
                D_sc05_017_801ED5D4[1] = rec;
                break;
            case 2:
                rec[2] = 3;
                rec[1] = D_sc05_017_801B93E4[D_800B99D8[0] % 5];
                D_sc05_017_801ED5D4[2] = rec;
                break;
            case 3:
                rec[2] = 0x19;
                for (j = 0; j < 4; j++) {
                    if (v < D_sc05_017_801B940C[j]) {
                        break;
                    }
                }
                x = D_sc05_017_801B9414[j];
                if (x != 0) {
                    rec[1] = x;
                    D_sc05_017_801ED5D4[3] = rec;
                }
                break;
            case 4:
                if (v < 0x3B6) {
                    rec[2] = 0xC;
                    rec[1] = D_sc05_017_801B93F8[D_800B99DA[0] % 5];
                    D_sc05_017_801ED5D4[4] = rec;
                }
                break;
            }
            rec += 4;
        }
    }
    D_sc05_017_801ED5EC = 0;
    if (D_80115126 == 0) {
        if (D_80078EBA == 4) {
            D_sc05_017_801ED5EC = 0x14;
        }
        if (v < 600) {
            D_sc05_017_801B923E = D_sc05_017_801B924A = D_sc05_017_801B9256 = D_sc05_017_801B9262 = 6;
            D_sc05_017_801B9240 = D_sc05_017_801B924C = D_sc05_017_801B9258 = D_sc05_017_801B9264 = 8;
        } else {
            D_sc05_017_801B923E = D_sc05_017_801B924A = D_sc05_017_801B9256 = D_sc05_017_801B9262 = 7;
            D_sc05_017_801B9240 = D_sc05_017_801B924C = D_sc05_017_801B9258 = D_sc05_017_801B9264 = 0x6D;
        }
    }
    if (D_80115126 == 1 && g_ClockMinutes >= 0x438) {
        D_sc05_017_801ED5EC = 3;
    }
    func_sc05_017_80186B24();
}

void func_sc05_017_80186B24(void) {
    u8 *a = D_sc05_017_801EB724;
    u8 *bb = D_sc05_017_801EB744;
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
        p = D_sc05_017_801EB764;
    } else if (D_80115126 == 5) {
        p = D_sc05_017_801EB788;
    } else {
        p = D_sc05_017_801EB544;
    }
    for (i = 0; i < 16; i++) {
        strcpy(D_sc05_017_801ECE94[i], a);
        strcpy(D_sc05_017_801ED0D4[i], bb);
        strcpy(D_sc05_017_801ED314[i], p);
    }
    switch (D_80115126) {
    case 0:
        if (GetFlag(0xFB) & 0xFF) {
            i = 1;
        } else {
            i = (u32)GetProgress() >= 600;
        }
        if (GetFlag(0x9B) & 0xFF) {
            i |= 2;
        }
        if ((u8)GetVar(0x5B) >= 3) {
            i |= 4;
        }
        n = D_sc05_017_801B9288[i];
        D_8011515A[0] = n | 0x100;
        list = D_sc05_017_801B9268[i];
        D_sc05_017_801ED554 = list;
        break;
    case 1:
        n = 7;
        if ((u32)GetProgress() < 600) {
            n = 5;
        }
        list = D_sc05_017_801B9290;
        D_8011515A[0] = n | 0x100;
        D_sc05_017_801ED554 = list;
        break;
    case 5:
        list = D_sc05_017_801B9298;
        D_sc05_017_801ED554 = list;
        n = 7;
        break;
    default:
        n = 0;
        break;
    }
    for (i = 0; i < n; i++) {
        k = list[i];
        s = (u8 *)D_8010EDE8[k].v;
        d = D_sc05_017_801ECE94[i];
        while (*s != 0) {
            *d++ = *s++;
            *d++ = *s++;
        }
        disc = D_sc05_017_801ED5EC;
        if (disc != 0) {
            if (D_80115126 == 0) {
                price = D_8010EDEC[k].v * (100 - disc) / 100;
            } else {
                price = D_8010EDEC[k].v - disc;
            }
        } else {
            price = D_8010EDEC[k].v;
        }
        r = ToBcd(price, 0);
        m = -0x1000;
        for (j = 3; j >= 0; j--) {
            if ((u16)r & m) {
                break;
            }
            m >>= 4;
        }
        d = D_sc05_017_801ECEAF[i];
        for (m = 0; m < j + 1; m++, r = (u16)r >> 4) {
            *d-- = (r & 0xF) + 0x4F;
            *d-- = 0x82;
        }
        d[0] = 0x46;
        d[-1] = 0x81;
    }
    w = D_sc05_017_801ED610[D_8011514A];
    list = D_sc05_017_801E9B7C[w];
    n = D_sc05_017_801E9B74[w];
    D_sc05_017_801ED55C = list;
    D_8011515E = n | 0x100;
    if (D_80115126 == 0 && func_800D0F8C(0xA) != 0) {
        strcpy(D_sc05_017_801ECF14, D_sc05_017_801B8EC8);
    }
    if (D_80115126 == 3) {
        for (i = 0; i < n; i++) {
            k = list[i];
            s = (u8 *)D_8010F468[k].v;
            d = D_sc05_017_801ED0D4[i];
            while (*s != 0) {
                *d++ = *s++;
                *d++ = *s++;
            }
            id = k;
            j = (u8)GetVar(id + 0x62);
            if (j & 0x80) {
                if (!(j & 0x40)) {
                    r = ToBcd(D_800A6586[id], 0);
                    m = -0x1000;
                    for (j = 3; j >= 0; j--) {
                        if ((u16)r & m) {
                            break;
                        }
                        m >>= 4;
                    }
                    d = D_sc05_017_801ED0EF[i];
                    for (m = 0; m < j + 1; m++, r = (u16)r >> 4) {
                        *d-- = (r & 0xF) + 0x4F;
                        *d-- = 0x82;
                    }
                    d[0] = 0x46;
                    d[-1] = 0x81;
                } else {
                    strcpy(D_sc05_017_801ED0EA[i], D_sc05_017_801B8EC8 + 2);
                }
            } else {
                strcpy(D_sc05_017_801ED0D4[i], D_sc05_017_801B8ECC[0]);
            }
        }
        if ((u16)D_8011511A != 1 && (u16)D_8011511A != 2) {
            for (i = 0, j = 0; i < 64; i++) {
                if (GetVar(i + 0x63) & 0x40) {
                    D_sc05_017_801ED618[j++] = i;
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
            s = D_sc05_017_801B8ED0[i];
            d = D_sc05_017_801ED318[i];
            d[0] = s[0];
            d[1] = s[1];
            d = D_sc05_017_801ED318[i] + 4;
            e = D_sc05_017_801ED5D4[i];
            if (e != 0) {
                s = D_sc05_017_801B8E40[e[2]];
                while (*s != 0) {
                    *d++ = *s++;
                    *d++ = *s++;
                }
            } else {
                strcpy(D_sc05_017_801ED318[i] + 0x16, D_sc05_017_801B8ED0[i + 6]);
            }
        }
    }
    if (D_80115126 == 5) {
        for (i = 0; i < 6; i++) {
            d = D_sc05_017_801ED314[i];
            if (i == 0) {
                s = D_sc05_017_801B8F00;
            } else {
                s = D_sc05_017_801B8ECC[i];
                d += 8;
            }
            while (*s != 0) {
                *d++ = *s++;
                *d++ = *s++;
            }
            if (D_sc05_017_801ED5D4[i] != 0) {
                strcpy(D_sc05_017_801ED320[i], D_sc05_017_801B8E40[D_sc05_017_801ED5D4[i][2]]);
            }
        }
    }
}

extern s32 func_sc05_017_80188128(void);
extern s32 func_sc05_017_80188B1C(s16, s16);

static inline s32 get_p_801874B0(s32 k, s32 a) {
    if (D_sc05_017_801ED560 != 0) {
        return D_sc05_017_801ED560;
    }
    return func_sc05_017_80188B1C(k, a);
}

void func_sc05_017_801874B0(void) {
    u8 unused[8];
    s16 r;
    s32 p;
    s32 a;
    u8 k;
    s32 *q;
    u16 *w;

    D_801151D0 = D_801151C8[D_800B9A02];
    r = func_sc05_017_80188128();
    func_sc05_017_80188478();
    a = func_8014168C(D_8011511A);
    k = D_80115138[(u16)D_8011511A];
    p = get_p_801874B0(k, a);
    if (p != 0) {
        q = &D_80115130;
        if (p != *q) {
            *q = p;
            CloseMessage0();
            D_sc05_017_801ED564 = OpenMessageAt(p, &D_sc05_017_801B93CC);
        }
    }
    UpdateMessage0();
    if (r < 0) {
        CloseMessage0();
        D_800B9A15 = 0;
        if (D_sc05_017_801ECE90 == 0) {
            PlaySoundId(0x474, 0);
        }
        w = &D_80115112;
        *w += 2;
    }
}

void func_sc05_017_801875E8(void) {
    u8 unused[8];
    s16 v;
    s16 a;
    s16 b;
    u8 s;
    u16 *w;
    s32 n;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_80115126 == 4) {
        if (GetMessageAnswer(D_sc05_017_801ED564) == 0) {
            goto end;
        }
        if (D_80115148[0] == 0) {
            if (D_sc05_017_801ED560 == (s32)&D_sc05_017_801F27B0) {
                D_sc05_017_801ED568 = 0x60;
                D_sc05_017_801ED570 = 0;
                D_sc05_017_801ED56C = 0;
                D_sc05_017_801ED560 = 0;
                if (g_BgmPackPlaying == 0x16) {
                    D_sc05_017_801ED5F0 = 1;
                    RequestBgmPack(0x35);
                } else {
                    D_sc05_017_801ED5F0 = 0;
                }
                n = 6;
            } else {
                n = D_80115112 - 1;
            }
        } else {
            D_sc05_017_801ED560 = 0;
            ShowItemIcon(0x12);
            PlaySoundId(0x46F, 0);
            D_8011511A = 0;
            n = D_80115112 - 1;
        }
        D_80115112 = n;
        goto block;
    } else if (D_80115126 == 5) {
        if (D_sc05_017_801ED560 != 0) {
            D_sc05_017_801ED60C = GetMessageAnswer(D_sc05_017_801ED564);
            if (D_sc05_017_801ED60C != 0) {
                D_sc05_017_801ED560 = 0;
            }
            goto end;
        }
        if (!(GetPadPressedDir(0) & 0x50) && D_sc05_017_801ED60C <= 0) {
            goto end;
        }
        switch (D_sc05_017_801ED5F4) {
        case 0:
            D_sc05_017_801ED5F4 = -1;
            break;
        case 1:
            if (D_sc05_017_801ED60C < 0) {
                D_sc05_017_801ED560 = (s32)&D_sc05_017_801EF194;
            } else if (D_sc05_017_801ED60C == 1) {
                D_sc05_017_801ECE90 = 1;
                CloseMessage0();
                w = &D_80115112;
                n = *w;
                D_800B9A15 = 0;
                *w = n + 1;
            } else {
                D_sc05_017_801ED5F4 = -2;
            }
            break;
        case 2:
            D_sc05_017_801ED608 = 0;
            D_sc05_017_801ED5F8 = 0;
        case 5:
        case 6:
            D_sc05_017_801ED5F4 = (D_sc05_017_801ED5F4 + 1) | 0x100;
            break;
        case 3:
            if (D_sc05_017_801ED60C == 1) {
                D_sc05_017_801ED5F4++;
                if (D_sc05_017_801ED608 == 0) {
                    if ((s16)func_sc05_017_80189B54(-10) != 0) {
                        PlaySoundId(0x472, 0);
                        D_sc05_017_801ED5F4 = 0x10C;
                        break;
                    }
                    PlaySoundId(0x5EE, 0);
                    D_sc05_017_801ED5F8 = 0;
                    D_sc05_017_801ED608 = 0;
                    v = rand() % 9 + 3;
                    D_sc05_017_801ED5FC = v;
                    SetMessageNumber(v, 0);
                } else {
                    SetMessageNumber(D_sc05_017_801ED5FC, 0);
                    D_sc05_017_801ED5F4 = 0x106;
                    break;
                }
            }
            D_sc05_017_801ED5F4 = (D_sc05_017_801ED5F4 + 1) | 0x100;
            break;
        case 4:
        case 12:
        case 13:
            if (D_sc05_017_801ED5F8 != 0) {
                func_sc05_017_80189B54(D_sc05_017_801ED5F8);
                PlaySoundId(0x5EE, 0);
            }
            D_sc05_017_801ED5F4 = -1;
            break;
        case 7:
            D_sc05_017_801ED604 = D_sc05_017_801ED60C - 1;
            v = rand() % 13 + 1;
            D_sc05_017_801ED600 = v;
            SetMessageNumber(v, 0);
            D_sc05_017_801ED5F4 = (D_sc05_017_801ED5F4 + 1) | 0x100;
            break;
        case 8:
        case 9:
            a = D_sc05_017_801ED5FC;
            b = D_sc05_017_801ED600;
            if (a == b) {
                v = rand() % 13 + 1;
                D_sc05_017_801ED600 = v;
                SetMessageNumber(v, 0);
                D_sc05_017_801ED5F4 = 0x109;
                break;
            }
            if ((D_sc05_017_801ED604 == 0 && a < b) || (D_sc05_017_801ED604 != 0 && b < a)) {
                if (D_sc05_017_801ED5F8 == 0) {
                    D_sc05_017_801ED5F8 = 10;
                }
                D_sc05_017_801ED5F8 <<= 1;
                SetMessageNumber(D_sc05_017_801ED5F8, 0);
                PlaySoundId(0x5EE, 0);
                if (D_sc05_017_801ED5F8 >= 0x2800) {
                    SetFlag(0x11A, 1);
                    D_sc05_017_801ED5F4 = 0x10D;
                    D_sc05_017_801ED5D8[1] = (s32)&D_sc05_017_801EF7F0;
                } else {
                    D_sc05_017_801ED608++;
                    s = D_sc05_017_801B9460[D_sc05_017_801ED608];
                    D_sc05_017_801ED5FC = rand() % (9 - s * 2) + (s + 3);
                    SetMessageNumber(D_sc05_017_801ED5F8, 0);
                    D_sc05_017_801ED5F4 = 0x10A;
                }
            } else {
                D_sc05_017_801ED5F8 = 0;
                D_sc05_017_801ED608 = 0;
                D_sc05_017_801ED5F4 = 0x10B;
                PlaySoundId(0xC62, 0);
            }
            break;
        case 10:
        case 11:
            D_sc05_017_801ED5F4 = 0x103;
            break;
        }
        if (D_sc05_017_801ED5F4 < 0) {
            ShowItemIcon(10);
            if (D_sc05_017_801ED5F4 == -1) {
                PlaySoundId(0x46F, 0);
            }
            w = &D_80115112;
            n = *w;
            D_sc05_017_801ED5F4 = 0;
            *w = n - 1;
        }
        if (D_sc05_017_801ED5F4 >= 0x100) {
            D_sc05_017_801ED5F4 &= 0xFF;
            D_sc05_017_801ED560 = D_sc05_017_801B9428[D_sc05_017_801ED5F4];
        }
    block:
        if (D_sc05_017_801ED560 != 0) {
            D_80115130 = D_sc05_017_801ED560;
            CloseMessage0();
            D_sc05_017_801ED564 = OpenMessageAt(D_sc05_017_801ED560, &D_sc05_017_801B93CC);
        }
    } else {
        if (D_sc05_017_801ED560 != 0) {
            if (GetMessageAnswer(D_sc05_017_801ED564) != 0) {
                D_sc05_017_801ED560 = 0;
            }
        } else if (GetPadPressedDir(0) & 0x50) {
            if (D_80115138[(u16)D_8011511A] == 8) {
                func_sc05_017_80189240(0xF, (s16)func_8014168C(D_8011511A));
            }
            if (D_sc05_017_801ECE90 != 0) {
                CloseMessage0();
                D_800B9A15 = 0;
                PlaySoundId(0x474, 0);
                n = D_80115112 + 1;
            } else {
                PlaySoundId(0x46F, 0);
                n = D_80115112 - 1;
            }
            D_80115112 = n;
        }
    }
end:
    func_sc05_017_80188478();
    UpdateMessage0();
}

void func_sc05_017_80187DEC(void) {
    u8 unused[8];
    s32 r;
    s32 n;
    s32 t;
    s16 c;
    Player *m;

    D_801151D0 = D_801151C8[D_800B9A02];
    m = &g_Player;
    if (D_sc05_017_801ED568 != 0) {
        D_sc05_017_801ED568--;
        r = func_8014168C(D_8011511A);
        if ((s16)r != 3) {
            n = 8;
            t = 0x3E7;
        } else {
            n = 3;
            t = 0x18;
        }
        c = D_sc05_017_801ED568;
        if (c >= 0x3F) {
            if (D_sc05_017_801ED56C != 0xFF) {
                D_sc05_017_801ED56C += 0x10;
                if (D_sc05_017_801ED56C >= 0x100) {
                    D_sc05_017_801ED56C = 0xFF;
                }
            } else {
                D_sc05_017_801ED570 += 0x10;
                if (D_sc05_017_801ED570 >= 0x100) {
                    D_sc05_017_801ED570 = 0xFF;
                }
            }
        } else if (c < 0x20) {
            if (D_sc05_017_801ED570 != 0) {
                D_sc05_017_801ED570 -= 0x10;
                if (D_sc05_017_801ED570 < 0) {
                    D_sc05_017_801ED570 = 0;
                }
            } else {
                D_sc05_017_801ED56C -= 0x10;
                if (D_sc05_017_801ED56C < 0) {
                    D_sc05_017_801ED56C = 0;
                }
            }
        } else if (c == 0x30) {
            AddHp(m, D_sc05_017_801B93D0[(s16)r], 1);
            AddWakeGauge(m, 0x1000000, 1);
            if ((s16)r == 2) {
                CurePlayerPoison();
            }
            func_sc05_017_801EFF44(n);
            AddBp(m, t);
        }
        func_sc05_017_80189BA0();
        if (D_sc05_017_801ED568 == 0 && GetDeadline8Passed(n) != 0) {
            ExpireDeadline8();
            CloseMessage0();
            D_800B9A15 = 0;
            D_80115112 = 4;
            return;
        }
    } else if (D_sc05_017_801ED560 == 0) {
        D_80115130 = D_sc05_017_801ED560 = (s32)&D_sc05_017_801F27F8;
        CloseMessage0();
        D_sc05_017_801ED564 = OpenMessageAt(D_sc05_017_801ED560, &D_sc05_017_801B93CC);
        if (D_sc05_017_801ED5F0 != 0) {
            RequestBgmPack(0x16);
        }
    } else if (GetMessageAnswer(D_sc05_017_801ED564) != 0) {
        D_sc05_017_801ED560 = 0;
        PlaySoundId(0x46F, 0);
        D_8011511A = 0;
        D_80115112 = 2;
    }
    func_sc05_017_80188478();
    UpdateMessage0();
}

s32 func_sc05_017_80188128(void) {
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
        D_sc05_017_801ED560 = 0;
    }
    rep = GetPadHeldDirWide(0);
    q = &D_8011511A;
    r = func_8014168C(*q);
    idx = (u16)*q;
    kind = D_80115138[idx];
    if (pad & 0x40) {
        d = func_sc05_017_80189240(kind, (s16)r);
        if (d != 0) {
            return d;
        }
        return 0;
    }
    if (pad & 0x10) {
        
        if (kind < 7) {
            return -1;
        }
        PlaySoundId(0x473, 0);
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
        PlaySoundId(0x45A, 0);
        if (kind == 12) {
            D_8011514E = 0;
            D_80115143 = 0;
            func_sc05_017_80186B24();
        }
    }
    return 0;
}

void func_sc05_017_80188478(void) {
    typedef struct { s32 w; } W1;
    u8 *q;
    u8 *p;
    s16 i;
    s16 n;
    s16 m;

    q = (u8 *)D_80115134;
    p = DrawMessage0(D_801151D0, &g_FrontOt[D_800B9A02], 2);
    if (D_sc05_017_801ED5F4 == 3 || D_sc05_017_801ED5F4 == 7) {
        p = func_800D27DC(2, p, &D_sc05_017_801B8A70, 1, 0);
    } else {
        p = func_800D27DC(2, p, &D_sc05_017_801B8A5C, 1, 0);
    }
    p = DrawChoiceCursor(p, g_FrontOtOrg[D_800B9A02].ot + 2, &D_sc05_017_801B93C4, 0);
    if (D_80115126 == 3) {
        if ((u16)D_8011511A == 3) {
            p = func_sc05_017_801886B8(p, &D_sc05_017_801B9144, 3);
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
        p = func_sc05_017_801886B8(p, q, i);
        do {
        skip:
            i++;
            q += 0x20;
        } while (0);
        if (i < m) goto top;
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x02000000;
    ((PTag *)p)->addr = ((PTag *)&g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot[2])->addr;
    ((PTag *)&g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
    p += 0x28;
    ((W1 *)&D_801151D0)->w = (s32)p;
}

u8 *func_sc05_017_801886B8(u8 *p, u8 *t, s32 id0) {
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
    
    SjisToGlyphs(AF(t, s32, 0x14), buf);
    f = a;
    p = func_800D2650(p, buf, AF(t, s16, 0x10), AF(t, s16, 0x12), 1, (u8)a ? 0x585858 : 0x808080);
    
    p = (u8 *)func_sc05_017_80188F14((Sprt *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_sc05_017_80188884(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
        if (r == 0) break;
        if (r < 0) {
            SjisToGlyphs(r, buf);
            if (c) col -= 0x282828;
            p = func_800D2650(p, buf, xy[0], xy[1], 1, col);
        }
    }
    d = f;
    p = func_800D27DC(d != 0, p, AF(t, u8 *, 4), AF(t, s16, 0xC), 0);
    return func_800D29F8(d, p, AF(t, u8 *, 8), AF(t, s16, 0xE), 0);
}

s32 func_sc05_017_80188884(s32 *tbl, s16 kind, s16 id, s16 idx, u32 *col) {
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
            ret = tbl[D_sc05_017_801ED610[j]];
        }
        break;
    case 7:
    case 8:
        if (idx < 12) {
            k = GetVar(D_sc05_017_8018E28C[idx]);
            if (k == 0) {
                return 1;
            }
            ret = D_8010EDE8[k].v;
        }
        break;
    case 14:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            v = D_sc05_017_801ED618[j];
            a = v + 0x63;
            if (v < 0 || !(GetVar(a) & 0x40)) {
                ret = D_sc05_017_801B8EC4;
            } else {
                ret = D_8010F468[v + 1].v;
                if (GetVar(a) & 0x20) {
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

s32 func_sc05_017_80188B1C(s16 kind, s16 i) {
    s32 ret;
    u8 v;
    s32 n;
    s32 *p;

    ret = (s32)&D_801117EC;
    switch (kind) {
    case 10:
        if (D_80115126 != 5) {
            v = D_sc05_017_801ED554[i];
            ret = D_sc05_017_8018E34C[v];
        } else {
            ret = D_sc05_017_801B9390[i];
        }
        break;
    case 7:
        v = GetVar(D_sc05_017_8018E28C[i]) ;
        if (v == 0) {
            break;
        }
        if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
            ret = func_sc05_017_80189ADC((i & 3) + 6);
            SetMessageNumber(D_8010EDEE[v].v, 0);
        } else {
            ret = func_sc05_017_80189ADC(5);
        }
        break;
    case 8:
        if (D_80115148[0] != 0) {
            v = GetVar(D_sc05_017_8018E28C[i]) ;
            if (v == 0) {
                break;
            }
            if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
                ret = func_sc05_017_80189ADC((i & 3) + 6);
                SetMessageNumber(D_8010EDEE[v].v, 0);
            } else {
                ret = func_sc05_017_80189ADC(5);
            }
        } else {
            v = GetVar(D_sc05_017_8018E28C[i]) ;
            if (v != 0) {
                ret = D_sc05_017_8018E34C[v];
            }
        }
        break;
    case 13:
        v = D_sc05_017_801ED55C[i];
        if (GetVar(v + 0x62) & 0x80) {
            ret = D_sc05_017_801E9B94[v];
        }
        break;
    case 14:
        v = D_sc05_017_801ED618[i];
        if (v == 0xFF) {
            break;
        }
        v++;
        if ((GetVar(v + 0x62) & 0xF0) == 0xC0) {
            ret = func_sc05_017_80189ADC((i & 1) | 6);
            SetMessageNumber((s16)(D_800A6586[v] * 9 / 10), 0);
        } else if ((GetVar(v + 0x62) & 0xF0) == 0xE0) {
            ret = (s32)&D_sc05_017_801EEB7C;
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                ret = (s32)&D_sc05_017_801F2930;
                if (D_sc05_017_801ED5D4[i] == 0) {
                    ret = D_sc05_017_801B93AC[i];
                }
            } else {
                p = D_sc05_017_801ED5D4[i];
                if (p != 0) {
                    ret = (s32)&D_sc05_017_801F29A0;
                    if (p[1] != 0) {
                        ret = (s32)&D_sc05_017_801F2974;
                    }
                } else {
                    ret = (s32)&D_sc05_017_801F295C;
                }
            }
        } else if (D_sc05_017_801ED5D4[i] != 0) {
            ret = (s32)&D_sc05_017_801EEFFC;
        }
        break;
    default:
        ret = func_sc05_017_80189ADC(0);
        break;
    }
    return ret;
}

Sprt *func_sc05_017_80188F14(Sprt *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
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
    ((PTag *)p)->addr = ((PTag *)&g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot[2])->addr;
    ((PTag *)&g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
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
                    p->y = D_sc05_017_801B8D96 - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc05_017_801B8DAA + 1;
                }
                p->tag = 0x04000000;
                p->u = 0x78;
                p->code = 0x64808080;
                p->clut = 0x4056;
                p->x = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 12;
                p->w = 8;
                p->h = 8;
                ((PTag *)p)->addr = ((PTag *)&g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot[2])->addr;
                ((PTag *)&g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
                p++;
            }
        }
    }
    return p;
}

extern s32 func_sc05_017_80189B14(s32 arg0);
extern void func_800D128C();
extern u8 D_sc05_017_801EF550;
extern s32 D_sc05_017_801E9C58[];
extern u8 D_sc05_017_801EF4EC;
extern void SetMessageText();
extern s8 D_sc05_017_801B93DC[];

s32 func_sc05_017_80189240(s32 a, s32 b) {
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
        PlaySoundId(0x46F, 0);
        D_8011511A = b + 1;
        break;
    case 3:
        if ((s16)b == 2) {
            return -1;
        }
        D_8011511A = 2;
        PlaySoundId(0x46F, 0);
        break;
    case 5:
        c = (s16)b;
        if (c == 1) {
            D_sc05_017_801ECE90 = 1;
            PlaySoundId(0x474, 0);
            return -1;
        }
        if (c == 3) {
            return -1;
        }
        PlaySoundId(0x46F, 0);
        if (c != 0) {
            D_8011511A = b;
        } else {
            D_8011511A = 2;
        }
        break;
    case 12:
        D_8011511A = 3;
        *(s16 *)&D_8011514E = 0;
        PlaySoundId(0x46F, 0);
        break;
    case 13:
        i = D_sc05_017_801ED55C[(s16)b];
        n = i + 0x62;
        st = (u8)GetVar(n);
        if ((st & 0xF0) != 0x80) {
            PlaySoundId(0x472, 0);
            break;
        }
        if ((s16)func_sc05_017_80189B54(-D_800A6586[i]) != 0) {
            func_sc05_017_80189B14(3);
            PlaySoundId(0x472, 0);
            break;
        }
        SetVar(n, st | 0x40);
        func_sc05_017_80186B24();
        d = (s8)D_80115140[12] - (s8)D_80115140[2];
        if (d >= 6) {
            D_80115140[2] = D_80115140[12] - 5;
        } else if (d < 0) {
            D_80115140[2] = D_80115140[12];
        }
        func_sc05_017_80189B14(1);
        PlaySoundId(0x5EE, 0);
        break;
    case 14:
        k = (s16)b;
        i = (s16)(D_sc05_017_801ED618[k] + 1);
        n = i + 0x62;
        x = (u8)GetVar(n);
        if ((x & 0xF0) != 0xC0) {
            PlaySoundId(0x472, 0);
            break;
        }
        func_sc05_017_80189B54(D_800A6586[i] * 9 / 10);
        SetVar(n, x & 0xBF);
        func_sc05_017_80186B24();
        D_sc05_017_801ED618[k] = 0xFF;
        func_sc05_017_80189B14(4);
        PlaySoundId(0x5EE, 0);
        break;
    case 10:
        i = D_sc05_017_801ED554[(s16)b];
        j = i;
        if (j < 0x6F) {
            if (j == 10 && func_800D0F8C(10) != 0) {
                PlaySoundId(0x472, 0);
                break;
            }
            r = func_800D0EC4();
            if (r == 0) {
                func_sc05_017_80189B14(2);
                PlaySoundId(0x45F, 0);
                break;
            }
            tt = D_sc05_017_801ED5EC;
            if (tt != 0) {
                if (D_80115126 == 0) {
                    v = D_8010EDEC[i].v * (100 - tt) / 100;
                } else {
                    v = D_8010EDEC[i].v - tt;
                }
            } else {
                v = D_8010EDEC[i].v;
            }
            if ((s16)func_sc05_017_80189B54(-v) != 0) {
                func_sc05_017_80189B14(3);
                PlaySoundId(0x472, 3);
                break;
            }
            PlaySoundId(0x5EE, 0);
            x = i;
            func_800D0F0C(r, x);
            if (x == 10) {
                func_sc05_017_80186B24();
            }
        } else {
            if ((s16)func_sc05_017_80189B54(-D_8010EDEC[j].v) != 0) {
                func_sc05_017_80189B14(3);
                PlaySoundId(0x472, 0);
                break;
            }
            func_800D128C(i, 0);
        }
        func_sc05_017_80189B14(1);
        break;
    case 7:
    use_item:
        g = (s16)b + 0x2F;
        x = (u8)GetVar(g);
        if (x == 0) {
            PlaySoundId(0x472, 0);
            break;
        }
        t = D_8010EDEE[x].v;
        if (t == 0 || D_80115126 != D_8010EDF2[x].v) {
            func_sc05_017_80189B14(5);
            PlaySoundId(0x472, 0);
            break;
        }
        func_sc05_017_80189B54(t);
        func_800D0FE0(g);
        if (x == 10) {
            func_sc05_017_80186B24();
        }
        func_sc05_017_80189B14(4);
        PlaySoundId(0x5EE, 0);
        break;
    case 8:
        if (D_80115148[0] != 0) {
            goto use_item; /* backward into case 7, as the original branches (LuciDin's ruling, 27 Oct: accepted) */
        }
        m = (u8)GetVar((s16)b + 0x2F);
        if (m == 0) {
            PlaySoundId(0x472, 0);
            break;
        }
        x = D_8010EDEC[m].v;
        if ((s16)x >= 0) {
            D_sc05_017_801ED560 = (s32)&D_sc05_017_801EF550;
            PlaySoundId(0x472, 0);
            break;
        }
        if (x & 0x4000) {
            t = (((s32 *)&D_sc05_017_801E9B28))[m];
        } else {
            t = D_sc05_017_801E9C58[(D_8010EDF1[m].v - 0x14) >> 1];
        }
        D_sc05_017_801ED560 = (s32)&D_sc05_017_801EF4EC;
        SetMessageText(t, 0);
        w = &D_80115112;
        *w += 1;
        break;
    case 15:
        n = (s16)b + 0x2F;
        e = (u8)GetVar(n);
        x = D_8010EDEC[e].v;
        kind = D_8010EDF1[e].v;
        if (x & 0x4000) {
            id = kind;
            SetFlag(id, 1);
            func_800D0FE0(n);
            D_sc05_017_801ECE90 = kind - 0x1C;
            if (id == 0x1F) {
                SetProgress(100);
                SetFlag(0xEB, 1);
                SetFlag(0x91, 1);
                SetVar(0xCE, 1);
            }
        } else {
            func_800D0F0C(n, kind);
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                m = (s16)b;
                if (D_sc05_017_801ED5D4[m] != 0) {
                    PlaySoundId(0x472, 0);
                    break;
                }
                if ((s16)func_sc05_017_80189B54(D_sc05_017_801B93DC[m]) != 0) {
                    func_sc05_017_80189B14(3);
                    PlaySoundId(0x472, 0);
                    break;
                }
                D_sc05_017_801ED560 = (s32)&D_sc05_017_801F27B0;
                D_80115112++;
                SetMessageNumber((s16)(b + 1), 0);
                PlaySoundId(0x5EE, 0);
                break;
            }
            h = D_sc05_017_801ED5D4[(s16)b];
            if (h == 0 || h[1] == 0) {
                PlaySoundId(0x472, 0);
                break;
            }
            D_sc05_017_801ED560 = h[1];
            if (h[3] != 0) {
                ((void (*)())h[3])();
            }
            ShowItemIcon(D_sc05_017_801ED5D4[(s16)b][2]);
            PlaySoundId(0x45D, 0);
            D_80115112++;
            break;
        }
        q = D_sc05_017_801ED5D4[(s16)b];
        if (q != 0) {
            D_sc05_017_801ED560 = q[1];
            ShowItemIcon(D_sc05_017_801ED5D4[(s16)b][2]);
            D_sc05_017_801ED5F4 = 0;
            if (D_sc05_017_801ED560 == (s32)&D_sc05_017_801EF168) {
                D_sc05_017_801ED5F4 = 1;
            }
            if (D_sc05_017_801ED560 == (s32)&D_sc05_017_801EF52C) {
                D_sc05_017_801ED5F4 = 2;
            }
            PlaySoundId(0x45D, 0);
            D_80115112++;
            break;
        }
        PlaySoundId(0x472, 0);
        break;
    }
    return 0;
}

s32 func_sc05_017_80189ADC(s32 arg0) {
    return D_sc05_017_801B92A0[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_sc05_017_80189B14(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc05_017_801B92A0[((D_80115126 * 0xA) + (s16) arg0)];
    D_sc05_017_801ED560 = temp_v0;
    return temp_v0;
}

s32 func_sc05_017_80189B54(s32 arg0) {
    s32 v;
    s32 ret;

    v = g_Money + arg0;
    if (v > 99999) {
        v = 99999;
    }
    if (v >= 0) {
        g_Money = v;
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}

void func_sc05_017_80189BA0(void) {
    u8 *p;
    u8 *q;

    p = (u8 *)((S32R *)&D_801151D0)->v;
    ((PTag *)p)->len = 1;
    AF(p, u32, 4) = 0xE1000015;
    ((PTag *)p)->addr = ((PTag *)g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)p;
    p += 8;
    ((PolyG4 *)p)->tag = 0x08000000;
    ((PolyG4 *)p)->code = 0x3A;
    ((PolyG4 *)p)->x0 = ((PolyG4 *)p)->x2 = -0xA0;
    ((PolyG4 *)p)->x1 = ((PolyG4 *)p)->x3 = 0xA0;
    ((PolyG4 *)p)->r0 = ((PolyG4 *)p)->r1 = ((PolyG4 *)p)->g0 = ((PolyG4 *)p)->g1 = ((PolyG4 *)p)->b0 = ((PolyG4 *)p)->b1 = D_sc05_017_801ED56C;
    ((PolyG4 *)p)->r2 = ((PolyG4 *)p)->r3 = ((PolyG4 *)p)->g2 = ((PolyG4 *)p)->g3 = ((PolyG4 *)p)->b2 = ((PolyG4 *)p)->b3 = D_sc05_017_801ED570;
    ((PolyG4 *)p)->y0 = ((PolyG4 *)p)->y1 = -0x78;
    ((PolyG4 *)p)->y2 = ((PolyG4 *)p)->y3 = 0x78;
    ((PTag *)p)->addr = ((PTag *)g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)p;
    p = q = p + 0x24;
    ((PTag *)q)->len = 1;
    AF(q, u32, 4) = 0xE1000240;
    ((PTag *)q)->addr = ((PTag *)g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)g_FrontOtOrg[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)q;
    p += 8;
    ((S32R *)&D_801151D0)->v = (s32)p;
}

void func_sc05_017_80189DB4(void) {
    s32 i;

    for (i = 0; i < 6; i++) {
        D_sc05_017_801ED648[i] = AllocSpriteInRange(0x3E, 0x7D);
        AF(D_sc05_017_801ED660 + i * 0x40, s32, 4) = 0;
        SetShapeCircle(D_sc05_017_801ED660 + i * 0x40, 0x30);
        func_8001CD50(D_sc05_017_801ED648[i], D_sc05_017_801ED660 + i * 0x40);
        AF(D_sc05_017_801ED648[i], s32, 4) |= 0xD0000040;
    }
}

s32 func_sc05_017_80189E68(s32 arg0, s32 arg1) {
    s32 v1 = D_sc05_017_801ED7E4;

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

void func_sc05_017_80189ED0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_sc05_017_801E6758[arg0]();
    if (temp_v0 != -1) {
        func_sc05_017_80189F24(D_sc05_017_801ED7E0, temp_v0);
    }
}

void func_sc05_017_80189F24(SV *arg0, s32 arg1) {
    CV4 c;
    s32 m;
    s32 t;
    s32 b;

    b = D_sc05_017_801E67A0[D_800B99DA[0] & 0xF];
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
        func_sc05_017_80189FE0(arg0, *(s32 *)&c);
        arg0++;
    }
}

void func_sc05_017_80189FE0(u8 *o, s32 col) {
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

    LoadWorldScreenMatrix();
    k = AF(o, u16, 6) & 0xFF;
    if ((AF(o, u16, 6) & 0xF00) == 0x200) {
        func_sc05_017_8018A3C8(o, col);
        return;
    }
    n = k;
    t = D_sc05_017_801E6370[k];
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
    u = D_sc05_017_801E63F0[n];
    for (j = 0; j < 4; j++, u++) {
        w[j].x = AF(o, s16, 0) + u->x;
        w[j].y = AF(o, s16, 2) + u->y;
        w[j].z = AF(o, s16, 4) + u->z;
    }
    RotTransPers4(&w[0], &w[1], &w[2], &w[3], &sxy[4], &sxy[5], &sxy[6], &sxy[7], &p, &flag);
    prim = AllocPrim(0xA8);
    for (i = 0; i < 4; i++) {
        idx.x = D_sc05_017_801E6490[i].x;
        idx.y = D_sc05_017_801E6490[i].y;
        idx.z = D_sc05_017_801E6490[i].z;
        idx.pad = D_sc05_017_801E6490[i].pad;
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
        AddPrim(g_WorldOtOrg[D_800B9A02].ot + otz, prim);
        prim += 0x24;
    }
    AF(prim, s32, 4) = col;
    AF(prim, u8, 7) = 0x2A;
    AF(prim, s32, 0) = 0x05000000;
    AF(prim, s32, 8) = sxy[0];
    AF(prim, s32, 0xC) = sxy[1];
    AF(prim, s32, 0x10) = sxy[2];
    AF(prim, s32, 0x14) = sxy[3];
    AddPrim(g_WorldOtOrg[D_800B9A02].ot + otz, prim);
    AddDrawModeAt(otz, 1);
}

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

void func_sc05_017_8018A440(StageActor *arg0) {
    D_sc05_017_801E67B0[arg0->state]();
}

void func_sc05_017_8018A47C(u8 *o) {
    s32 i;

    if (func_sc05_017_801848AC(7, 0x13) == 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        if (D_sc05_017_801E67C0[AF(o, s16, 0x100)][i] == AF(o, s32, 0x1C)) {
            SpawnActorArg(0x140, AF(o, u8, 0xFC) | ((AF(o, s16, 0xFE) << 8) & 0xFF00), o);
            break;
        }
    }
    if (TickTimer(o) != 0) {
        AF(o, s32, 0x1C) = 0x50;
        AF(o, u16, 0xFE) = (AF(o, u16, 0xFE) + (rand() & 0xF) - 7) & 0xFF;
        AF(o, u16, 0xFC) = (AF(o, u16, 0xFC) + (rand() & 0xF) - 7) & 0xFF;
        AF(o, s16, 0x100) = rand() % 7;
    }
}

void func_sc05_017_8018A598(StageActor *arg0) {
    D_sc05_017_801E67DC[arg0->state]();
}

void func_sc05_017_8018A5D4(StageActor *arg0) {
    D_sc05_017_801E67E4[arg0->state]();
}

void func_sc05_017_8018A610(StageActor *arg0) {
    D_sc05_017_801E67F4[arg0->state]();
}

void func_sc05_017_8018A64C(StageActor *arg0) {
    D_sc05_017_801E6804[arg0->state]();
}

void func_sc05_017_8018A688(void) {
}

void func_sc05_017_8018A690(u8 *o) {
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
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
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
            AF(o, s32, 0x1C) = (rand() & 0x3F) + 0x40;
        }
        break;
    case 2:
        AF(o, s32, 0xDC) += AF(o, s32, 0xE4);
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xDE);
        if (TickTimer(o) != 0) {
            AF(o, s32, 0x1C) = 0x40;
            AF(o, u16, 0x34)++;
            AF(o, s32, 0xE0) = -AF(o, s32, 0xE0);
        }
        break;
    case 3:
        AF(o, s32, 0xDC) += AF(o, s32, 0xE4) += AF(o, s32, 0xE0);
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xDE);
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0xFF) + 0x40;
        }
        break;
    }
}

void func_sc05_017_8018A83C(StageActor *arg0) {
    D_sc05_017_801E6814[arg0->state]();
}

void func_sc05_017_8018A878(void) {
    Player *b = &g_Player;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 d;
    s32 a;
    s32 y;

    if (D_800B99DA[0] & 1) {
        return;
    }
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    if (RotTransPers(&D_sc05_017_801E681C, &sxy, &p, &flag) <= 0 || flag < 0) {
        PlaySoundId(4, 0x7E6);
        return;
    }
    ((s16 *)&sxy)[0] += 0xA0;
    if (((s16 *)&sxy)[0] < 0) {
        ((s16 *)&sxy)[0] = 0;
    } else if (((s16 *)&sxy)[0] > 0x140) {
        ((s16 *)&sxy)[0] = 0x140;
    }
    x = ((s16 *)&sxy)[0] * 15 / 320;
    d = PosSVecDist((u8 *)b + 4, &D_sc05_017_801E681C);
    if (d >= 0x240) {
        d = 0x23F;
    }
    a = ((0x23F - d) * 0x7F / 0x240) & 0x7F;
    y = ((x << 8) & 0xF00) | 0x3000;
    PlaySoundId(0x7E6, y | a);
}

void func_sc05_017_8018A9D4(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E64B0;
    func_sc05_017_80189E68(0x474, 0x4B0);
}

void func_sc05_017_8018AA08(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E64E8;
    func_sc05_017_80189E68(0x474, 0x4EC);
}

void func_sc05_017_8018AA3C(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6520;
    func_sc05_017_80189E68(0x474, 0x4B0);
}

void func_sc05_017_8018AA70(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6548;
    func_sc05_017_80189E68(0x474, 0x4B0);
}

void func_sc05_017_8018AAA4(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6580;
    func_sc05_017_80189E68(0x474, 0x528);
}

s32 func_sc05_017_8018AAD8(void) {
    s32 ret;

    D_sc05_017_801ED7E0 = &D_sc05_017_801E65B8;
    ret = func_sc05_017_80189E68(0x168, 0x1A4);
    if (ret == -1) {
        ret = func_sc05_017_80189E68(0x474, 0x4EC);
    }
    if ((u32) (GetProgress() - 0xC8) < 0xDCU) {
        return -1;
    }
    return ret;
}

void func_sc05_017_8018AB4C(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E65F8;
    func_sc05_017_80189E68(0x474, 0x1A4);
}

s32 func_sc05_017_8018AB80(s32 arg0) {
    D_sc05_017_801ED7E0 = (s32 *) &D_sc05_017_801E6630;
    if ((u32) (GetProgress(arg0) - 0x64) < 0x1F4U) {
        return -1;
    }
    return func_sc05_017_80189E68(0x96, 0xF0);
}

void func_sc05_017_8018ABCC(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6650;
    func_sc05_017_80189E68(0x12C, 0x1A4);
}

void func_sc05_017_8018AC00(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E66A0;
    func_sc05_017_80189E68(0x474, 0x4B0);
}

void func_sc05_017_8018AC34(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6700;
    func_sc05_017_80189E68(0x474, 0x4B0);
}

s32 func_sc05_017_8018AC68(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6730;
    if ((u32) (GetProgress() - 0x64) < 0x1F4U) {
        return -1;
    }
    return func_sc05_017_80189E68(0x474, 0x78);
}

void func_sc05_017_8018ACB4(void) {
    D_sc05_017_801ED7E0 = &D_sc05_017_801E6748;
    func_sc05_017_80189E68(0x564, 0x1A4);
}

s32 func_sc05_017_8018ACE8(void) {
    return -1;
}

void func_sc05_017_8018ACF0(void) {
    s32 i;

    D_sc05_017_801ED7E4 = (g_ClockHour * 0x3C) + g_ClockMinute;
    for (i = 0; i < 6; i++) {
        AF(((void **)&D_sc05_017_801ED648)[i], s32, 4) |= 0x80000000;
    }
    for (i = 2; i < 0x12; i++) {
        func_sc05_017_80189ED0(i);
    }
    func_sc05_017_8018A878();
    if (D_sc05_017_801ED7FC != 0) {
        D_sc05_017_801ED7FC -= 1;
    }
}

void func_sc05_017_8018ADAC(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    SpawnActor(0x13F, 0);
    SpawnActor(0x66, 0);
    SpawnActor(0x65, 0);
    SpawnActor(0x14C, 0);
    SpawnActor(0x335, 0);
    SpawnActor(0x3D9, 0);
    arg0->state = 1;
    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    func_sc05_017_80189DB4();
}

void func_sc05_017_8018AE58(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) &D_sc05_017_801E67B8, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

void func_sc05_017_8018AE9C(StageActor *o) {
    s32 v;
    u8 *w;
    u8 *p;
    s32 t;

    w = (u8 *)AllocActorSprite();
    if (w == 0) {
        RejectSpawn(o);
        return;
    }
    o->ext0 = w;
    InitSpriteKind3(w, 0, 0, 0);
    AF(w, u8 *, 0x20) = &D_800D387C;
    AF(w, u8, 0x27) = 0x9C;
    AF(w, s16, 0x18) = AF(w, s16, 0x1A) = 0x3000;
    AF(w, s32, 4) |= 0x50000000;
    StartSpriteAnim(w, (u8 *)o + 0xD0, &D_800D3888);
    p = (u8 *)o->ext0;
    AF(p, s16, 8) = o->pos[0].h.i;
    AF(p, s16, 0xA) = o->pos[1].h.i;
    AF(p, s16, 0xC) = o->pos[2].h.i;
    t = o->param;
    o->timer = 0x5A;
    o->state = 1;
    o->vel[0] = 0;
    o->vel[1] = 0xFFF80000;
    o->vel[2] = 0;
    AngleToVec2(&v, (t & 0xFF00) >> 4, (t & 0xFF) << 6);
    o->accel[0] = (s16)v;
    o->accel[1] = 0;
    o->accel[2] = v >> 16;
    {
        u8 unused[8];
    }
}

void func_sc05_017_8018AFB8(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;
    void *temp_v1;

    temp_s1 = AF(arg0, void *, 0xCC);
    MoveObject((s32) arg0, arg1, arg2);
    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        StepSpriteAnim((s32) temp_s1, (s32) (arg0 + 0xD0));
    }
    if (TickTimer((s32) arg0) != 0) {
        ZeroFill((s32) temp_s1, 0x38);
        FreeActor((s32) arg0);
    }
}

void func_sc05_017_8018B054(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    temp_v1->rot.vz = (u16) ((u16)temp_v1->rot.vz + 8);
    UpdateModelRot();
}

void func_sc05_017_8018B088(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc05_017_801B61B4);
    SetModelCullBox(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    PlaceObject(arg0, (s32) &D_sc05_017_801E67EC);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_017_8018B100(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->model->rot.vx = (s16) ((u32) rsin(D_800B99DA[0] * 0x30, arg1, arg2, arg3) >> 5);
}

void func_sc05_017_8018B148(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (GetProgress(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = AllocActorModel(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_017_801B5E4C);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    SetModelCullBox(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    PlaceObject(arg0, (s32) &D_sc05_017_801E67FC);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_017_8018B1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc05_017_801B634C);
    PlaceObject(arg0, (s32) &D_sc05_017_801E680C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_sc05_017_8018B264(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B270(StageActor *arg0) {
    D_sc05_017_801E682C[arg0->state]();
}

s32 func_sc05_017_8018B2AC()
{
    if (func_sc05_017_80184A00() == 3) {
        return 1;
    }
    if (func_sc05_017_80184B44() == 1 || D_80078EBA == 2) {
        return 1;
    }
    return func_sc05_017_801848AC(0xC, 0x14) == 0;
}

void func_sc05_017_8018B314(StageActor *arg0, s32 arg1) {
    AF(arg0->ext0, s32, 0xB0) = 1;
    if (func_sc05_017_8018B2AC((s32) arg0, arg1) == 1) {
        func_sc05_017_8018B264((s32) arg0);
    }
}

void func_sc05_017_8018B360(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_8018B2AC() == 0) {
        arg0->state = 1;
    }
}

void func_sc05_017_8018B3A0(StageActor *arg0) {
    s32 v;

    arg0->ext0 = FindActorByKindArg(0x61, 0xD);
    v = func_sc05_017_8018B2AC();
    if (v != 0) {
        v = 2;
    } else {
        v = 1;
    }
    arg0->state = v;
}

void func_sc05_017_8018B3E8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B3F4(StageActor *arg0) {
    D_sc05_017_801E6840[arg0->state]();
}

void func_sc05_017_8018B430(StageActor *arg0) {
    s32 var_v0;

    AF(arg0->ext0, s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_sc05_017_8018B3E8((s32) arg0);
    }
}

void func_sc05_017_8018B498(StageActor *arg0) {
    s32 var_v0;

    AF(arg0->ext0, s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        arg0->state = 1;
    }
}

void func_sc05_017_8018B4FC(StageActor *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = FindActorByKindArg(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_sc05_017_801848AC(7, 0x13) != 0;
    }
    arg0->state = v ? 1 : 2;
}

void func_sc05_017_8018B568(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B574(StageActor *arg0) {
    D_sc05_017_801E6854[arg0->state]();
}

s32 func_sc05_017_8018B5B0()
{
    if ((u32)(GetProgress() - 0x12C) < 0x12CU && (u8)GetFlag(0xFA)) {
        return 0;
    }
    return func_sc05_017_801848AC(0xA, 0x14) != 0;
}

void func_sc05_017_8018B604(StageActor *arg0, s32 arg1) {
    AF(arg0->ext0, s32, 0xB0) = 1;
    if (func_sc05_017_8018B5B0((s32) arg0, arg1) == 0) {
        func_sc05_017_8018B568((s32) arg0);
    }
}

void func_sc05_017_8018B648(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_8018B5B0() != 0) {
        arg0->state = 1;
    }
}

void func_sc05_017_8018B688(StageActor *arg0) {
    s32 v;

    arg0->ext0 = FindActorByKindArg(0x61, 0xC);
    v = func_sc05_017_8018B5B0();
    if (v != 0) {
        v = 1;
    } else {
        v = 2;
    }
    arg0->state = v;
}

void func_sc05_017_8018B6D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc05_017_8018B6DC(StageActor *arg0) {
    D_sc05_017_801E6868[arg0->state]();
}

void func_sc05_017_8018B718(StageActor *arg0) {
    s32 var_v0;

    AF(arg0->ext0, s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_sc05_017_8018B6D0((s32) arg0);
    }
}

void func_sc05_017_8018B780(StageActor *arg0) {
    s32 var_v0;

    AF(arg0->ext0, s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_sc05_017_801848AC(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        arg0->state = 1;
    }
}

void func_sc05_017_8018B7E4(StageActor *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = FindActorByKindArg(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_sc05_017_801848AC(0xB, 0x10) != 0;
    }
    arg0->state = v ? 1 : 2;
}

s32 func_sc05_017_8018B850(void) {
    s32 t;

    if (D_80078EBA == 6) {
        if (func_sc05_017_801848AC(0, 0xC) == 0) {
            return 0;
        }
    } else if (D_80078EBA == 0) {
        if (func_sc05_017_801848AC(0, 0xC) != 0) {
            return 0;
        }
    }
    t = GetProgress();
    if (t < 0xC8) {
        switch (func_sc05_017_80184A00()) {
        case 0:
        case 1:
        case 2:
            return func_sc05_017_801848AC(2, 0x12) == 0;
        case 3:
        case 4:
            return 0;
        }
    } else if (t < 0x258) {
        return 0;
    } else if (t < 0x384) {
        return func_sc05_017_801848AC(2, 0x12) == 0;
    } else {
        if (func_sc05_017_801848AC(2, 0x12) != 0) {
            return 0;
        }
        return func_sc05_017_80184B44() != 1;
    }
}

void func_sc05_017_8018B93C(StageActor *arg0) {
    D_sc05_017_801E6874[arg0->state]();
}

void func_sc05_017_8018B978(StageActor *arg0) {
    if (func_sc05_017_8018B850() != 0) {
        AF(arg0->ext0, s32, 0xB0) = 1;
        D_sc05_017_801ED8F6 = 1;
        return;
    }
    AF(arg0->ext0, s32, 0xB0) = 2;
    D_sc05_017_801ED8F6 = 0;
}

void func_sc05_017_8018B9DC(StageActor *arg0) {
    arg0->state = 1;
    arg0->ext0 = FindActorByKindArg(0x61, 0xE);
    if (func_sc05_017_8018B850() != 0) {
        AF(arg0->ext0, s32, 0xB0) = 1;
        D_sc05_017_801ED8F6 = 1;
        return;
    }
    AF(arg0->ext0, s32, 0xB0) = 2;
    D_sc05_017_801ED8F6 = 0;
}

void func_sc05_017_8018BA58(StageActor *arg0) {
    D_sc05_017_801E687C[arg0->state]();
}

void func_sc05_017_8018BA94(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 1;
}

void func_sc05_017_8018BAA4(StageActor *arg0) {
    arg0->state = 1;
    arg0->ext0 = FindActorByKindArg(0x61, 0xA);
}

s32 func_sc05_017_8018BAE0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
}

s32 func_sc05_017_8018BB0C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
}

void func_sc05_017_8018BB38(StageActor *arg0) {
    D_sc05_017_801E6950[arg0->state]();
}

void func_sc05_017_8018BB74(s32 arg0, s32 arg1) {
    if (GetProgress(arg0, arg1) < 0xC8) {
        AF(arg0, s32, 0xE4) = D_sc05_017_801E68A0[func_sc05_017_80184A00()];
        return;
    }
    AF(arg0, s32, 0xE4) = D_sc05_017_801E68B4[func_sc05_017_80184AD0()];
}

s32 func_sc05_017_8018BBE8(void) {
    return GetPoisonWord() != 0;
}

void func_sc05_017_8018BC08(void) {
    CurePlayerPoison();
    PlaySoundId(0x464, 0);
}

void func_sc05_017_8018BC34(StageActor *arg0) {
    arg0->state = 5;
    arg0->stateCount = 0;
    RunScript((s32) arg0, (s32) &D_sc05_017_801E6908);
}

void func_sc05_017_8018BC64(StageActor *arg0) {
    s32 v;

    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(6, 0x12) != 0) {
        v = 1;
    } else {
        v = (func_sc05_017_801848AC(0x12, 0x15) != 0) * 2;
    }
    if (v != 0) {
        func_sc05_017_8018BAE0((s32) arg0);
    }
}

void func_sc05_017_8018BCCC(StageActor *arg0) {
    s32 v;

    AF(arg0->ext0, s32, 0xB0) = 1;
    if (func_sc05_017_801848AC(6, 0x12) != 0) {
        v = 1;
    } else {
        v = (func_sc05_017_801848AC(0x12, 0x15) != 0) * 2;
    }
    if (v != 1) {
        func_sc05_017_8018BB0C((s32) arg0);
    }
}

void func_sc05_017_8018BD38(StageActor *arg0) {
    s32 var_v1;

    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_017_801848AC(6, 0x12) != 0) {
        var_v1 = 1;
    } else if (func_sc05_017_801848AC(0x12, 0x15) != 0) {
        var_v1 = 2;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 2) {
        arg0->state = 1;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801E6884);
    }
}

void func_sc05_017_8018BDB0(StageActor *arg0) {
    if ((arg0->stateCount == 0) && (IsEventDone((s32) arg0) != 0)) {
        EndEvent((s32) arg0);
        arg0->state = 3;
        func_sc05_017_801849B8((s32) arg0, (s32) &D_sc05_017_801E6884);
    }
}

void func_sc05_017_8018BE14(StageActor *arg0) {
    extern s32 *func_sc05_017_8018BEE0();
    s32 v;

    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_017_801E688C) != 0) {
        if (func_sc05_017_801848AC(6, 0x12) != 0) {
            v = 1;
        } else {
            v = (func_sc05_017_801848AC(0x12, 0x15) != 0) * 2;
        }
        switch (v) {
        case 0:
            arg0->state = 1;
            func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
            break;
        case 1:
            arg0->state = 2;
            func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
            break;
        case 2:
            arg0->state = 3;
            func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6884);
            break;
        }
        arg0->def->unkC = 0x7FFF;
        arg0->workD4 = SpawnTalkMarker(arg0, (s32) func_sc05_017_8018BEE0);
    }
}

s32 *func_sc05_017_8018BEE0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) == 3) {
    } else {
        return NULL;
    }
    if (func_sc05_017_801845DC(arg0) == 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 4;
    ResetScriptVM();
    return &CallActionHandler;
}

s32 func_sc05_017_8018BF4C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6968);
}

void func_sc05_017_8018BF78(StageActor *arg0) {
    extern s32 *func_sc05_017_8018C0F0();
    ModelObj *t;
    s32 r;

    t = AllocActorModel();
    arg0->model = t;
    if (t == 0) {
        RejectSpawn(arg0);
    }
    InitModel(arg0->model, 0);
    r = GetProgress();
    if (r < 0xC8) {
        if (func_sc05_017_80184A00() == 3) {
            arg0->state = 2;
        } else if (func_sc05_017_801848AC(0xA, 0x10) != 0) {
            arg0->state = 1;
        } else {
            arg0->state = 2;
        }
    } else if (r < 0x258) {
        RejectSpawn(arg0);
        return;
    } else if (r < 0x384) {
        if (r < 0x276) {
            RejectSpawn(arg0);
            return;
        }
        arg0->state = 1;
    } else {
        arg0->state = 1;
    }
    func_sc05_017_801849B8(arg0, &D_sc05_017_801E6968);
    arg0->def->unkC = 0x7FFF;
    arg0->workD4 = SpawnTalkMarker(arg0, func_sc05_017_8018C0F0);
}

void func_sc05_017_8018C068(StageActor *arg0) {
    D_sc05_017_801E6A3C[arg0->state]();
}

void func_sc05_017_8018C0A4(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc05_017_801E69CC);
}

s32 func_sc05_017_8018C0D0(void) {
    return func_800D0EC4() == 0;
}

s32 *func_sc05_017_8018C0F0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (DistSqToPlayer(AF(arg0, void *, 0x64)) >= 0x6401) {
        return NULL;
    }
    if ((s16) g_PlayerX >= 0x281) {
        return NULL;
    }
    if ((s16) D_80126B66 < -0x380) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

void func_sc05_017_8018C194(StageActor *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = GetProgress(arg0, arg1);
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

void func_sc05_017_8018C218(StageActor *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = GetProgress(arg0, arg1);
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
        arg0->state = 1;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6968);
    }
}

void func_sc05_017_8018C2AC(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
        func_sc05_017_801849B8(arg0, (s32) &D_sc05_017_801E6968);
    }
}

s32 func_sc05_017_8018C2FC(void) {
    s32 r;

    if ((s16)g_PlayerX < 0x400) {
        r = 0;
    } else if ((s16)g_PlayerX >= 0x501) {
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

s32 func_sc05_017_8018C360(Mover *arg0) {
    arg0->state = 2;
    arg0->model->rot.vy = -0x600;
    return UpdateModelZYX(arg0);
}

s32 func_sc05_017_8018C390(Mover *arg0) {
    arg0->state = 4;
    arg0->model->rot.vy = 0x600;
    return UpdateModelZYX(arg0);
}

void func_sc05_017_8018C3C0(u8 *o) {
    u8 *r;
    s32 s1;
    r = AllocActorModel();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, AF(o, s16, 0x70) == 0 ? &D_sc05_017_801E4918 : &D_sc05_017_801E4A08);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_sc05_017_801E97F0[AF(o, s16, 0x70)] | 0x40000000;
    PlaceObject(o, D_sc05_017_801E97E0[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = GetProgress();
    if ((u8)GetFlag(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            SpawnTalkMarker(o, func_sc05_017_8018C56C);
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
            UpdateModelZYX(o);
        } else {
            AF(o, s16, 0x2) = 4;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
            UpdateModelZYX(o);
        }
    }
}

void func_sc05_017_8018C530(StageActor *arg0) {
    D_sc05_017_801E9920[arg0->state]();
}

s32 *func_sc05_017_8018C56C(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc05_017_8018C2FC() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            ResetScriptVM();
            return &CallActionHandler;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc05_017_8018C5E8(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    PlaySoundId(0x7A0, 0);
    SetFlag(0xF6, 1);
    func_800D0F4C(0x59);
    temp_v0 = FindActorByKindArg(0x1F2, 1);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

s32 func_sc05_017_8018C658(void) {
    return D_sc05_017_801ED800 == 2;
}

void func_sc05_017_8018C670(void) {
    PlaySoundId(0x7E0, 0);
}

void func_sc05_017_8018C694(StageActor *o) {
    ModelObj *p;
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            RunScript(o, &D_sc05_017_801E9860);
            o->stateCount = 2;
        } else {
            RunScript(o, &D_sc05_017_801E9878);
            o->stateCount = 3;
        }
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->state = 1;
            o->stateCount = 0;
        }
        break;
    case 3:
        IsEventDone(o);
        o->timer = 0;
        break;
    case 4:
        IsEventDone(o);
        p = o->model;
        p->rot.vy -= 0x20;
        o->timer++;
        if (o->timer >= 0x30) {
            o->stateCount = 5;
        }
        break;
    case 5:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            func_sc05_017_8018C360(o);
        }
        break;
    }
}

void func_sc05_017_8018C7C8(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (TickTimer((s32) arg0, arg1) != 0) {
            func_sc05_017_8018C390((s32) arg0);
        }
    }
}

void func_sc05_017_8018C830(void) {
}

void func_sc05_017_8018C838(void) {
}

void func_sc05_017_8018C840(StageActor *arg0) {
    D_sc05_017_801E9A58[arg0->state]();
}

void func_sc05_017_8018C87C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_017_801E9944) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_017_8018D504);
        SpawnTalkMarker(arg0, (s32) &func_sc05_017_8018C974);
    }
}

void func_sc05_017_8018C8E0(void) {
}

void func_sc05_017_8018C8E8(StageActor *arg0) {
    RunScript((s32) arg0, D_sc05_017_801E9A34[arg0->param]);
    arg0->state = 3;
}

void func_sc05_017_8018C934(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc05_017_8018C974(u8 *arg0) {
    s32 *r;

    if (DistSqToPlayer(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc05_017_8018C9D0(StageActor *arg0) {
    D_sc05_017_801E9B20[arg0->state]();
}

void func_sc05_017_8018CA0C(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_sc05_017_801E9B00[AF(arg0, s16, 0xFC)];
    if (D_sc05_017_801E9B00[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_sc05_017_801E9B00[0];
    }
    AF(arg0, s16, 0xFC)++;
    r = ((rand() & 3) << 10) + 0x1800;
    s = (r - 0x1000) << 5;
    o = SpawnProp(4);
    if (o != 0) {
        AF(o, s16, 6) = arg1;
        AF(o, u16, 0xA) = val;
        AF(o, s16, 0xE) = 0;
        AF(o, s32, 0x10) = s;
        AF(o, s16, 0x2C) = r;
    }
}

void func_sc05_017_8018CAD0(u8 *arg0) {
    D_sc05_017_801E9B34[AF(arg0, u16, 2)]();
}

void func_sc05_017_8018CB0C(StageActor *arg0) {
    s16 n;

    arg0->unkFC = 0;
    arg0->timer = 1;
    n = (u16)arg0->param & 7;
    arg0->workFE = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_sc05_017_8018CA0C(arg0, -0x80);
        func_sc05_017_8018CA0C(arg0, -0x30);
        func_sc05_017_8018CA0C(arg0, 0x20);
        func_sc05_017_8018CA0C(arg0, 0x70);
        func_sc05_017_8018CA0C(arg0, 0xC0);
    }
    if (n >= 2) {
        func_sc05_017_8018CA0C(arg0, -0x58);
        func_sc05_017_8018CA0C(arg0, -8);
        func_sc05_017_8018CA0C(arg0, 0x48);
        func_sc05_017_8018CA0C(arg0, 0x98);
        func_sc05_017_8018CA0C(arg0, 0xE8);
    }
    NextState(arg0);
}

void func_sc05_017_8018CBF4(s32 arg0, s32 arg1) {
    if (TickTimer(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFE);
        func_sc05_017_8018CA0C(arg0, 0x110);
    }
}

void func_sc05_017_8018CC34(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind1(temp_s0, (s32) &D_sc05_017_801E9B28, 0x280, 0x100);
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
        FreeProp((s32) arg0);
    }
}

void func_sc05_017_8018CD04(StageActor *arg0) {
    s32 r;
    s32 flag;
    u16 t;

    r = GetProgress();
    flag = 0;
    switch (arg0->param) {
    case 0:
        if ((u32)(r - 100) < 30) {
            flag = 1;
        }
        break;
    case 1:
        if ((u32)(r - 950) < 50) {
            flag = 1;
        }
        break;
    }
    if (flag != 0) {
        SpawnActorArg(0x21, 1 - arg0->state, arg0);
        FreeActor(arg0);
        return;
    }
    t = arg0->state;
    if (t == 0) {
        arg0->state = t + 1;
    }
}

void func_sc05_017_8018CDB0(void) {
    s16 i;
    s32 id;
    u8 k;
    s16 v;
    s32 t;
    u16 b;

    AF(D_sc05_017_801ED838, s16, 0) = 0;
    for (i = 0; i < 12; i++) {
        id = i + 0x2F;
        t = GetVar(id);
        k = t;
        if (k != 0) {
            v = D_8010EDEC[k].v;
            if (v < 0) {
                t = D_8010EDF1[k].v;
                b = (u8)t;
                if (v & 0x4000) {
                    AF(D_sc05_017_801ED838, s32, 8) = D_sc05_017_801E9B9C[k];
                    AF(D_sc05_017_801ED838, s32, 0xC) = D_sc05_017_801E9BB0[k];
                    SetFlag(b, 1);
                    func_800D0FE0(id);
                    AF(D_sc05_017_801ED838, s16, 0) = 2;
                    return;
                } else {
                    AF(D_sc05_017_801ED838, s32, 4) = D_sc05_017_801E9CE0[(t - 0x14) >> 1];
                    func_800D0F0C(id, b);
                    AF(D_sc05_017_801ED838, s16, 0) = 1;
                    return;
                }
            }
        }
    }
}
